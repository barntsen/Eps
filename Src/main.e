# main is the main module for the eps compiler.

# Imported modules
import libe        # Libray for eps
import ptree       # Parse tree managment
import scan        # Lexical scanner
import err         # Error handling
import parse       # Parsing of source code
import sym         # Symbol table managment
import sem         # Semantic checking
import code        # Code generator
import m           # Machine dependt code

def int MainError(char [*] s) : 

  # MainError prints error messages.
  #
  # Parameters:
  #   s: Error message
  #
  # Returns : Prints error and exits.

  if((ScanGetfile() != NULL) && (ScanGetline() != NULL)):
    ErrError(ScanGetfile(),ScanGetline(), s)  
  else :
    LibePuts(stderr,"File extension have to be .e\n") 
    LibeExit() 

  return(OK)

def int MainHelp(int arch):

  # MainHelp prints help message.
  #
  # Parameters:
  #   arch : Architecture = 1 : cpu
  #                       = 2 : cuda
  #                       = 3 : hip
  #
  # Returns : Prints help message and exits.

  LibePuts(stderr,"Command\n") 
  LibePuts(stderr,"\n") 
  if(arch == CPU):
    LibePuts(stderr,"  ec [-t -a -s -r -e -p -q -C -c -g -d -O -f] file.e \n") 
    LibePuts(stderr,"\n") 
    LibePuts(stderr,"  The ec command (without options) compiles an eps file\n") 
  else if(arch == CUDA):
    LibePuts(stderr,"  ecc [-t -a -s -r -e -p -q -C -c -g -d -O -f] file.e \n") 
    LibePuts(stderr,"\n") 
    LibePuts(stderr,"  The ecc command (without options) compiles an eps file\n") 
  else if(arch == HIP):
    LibePuts(stderr,"  ech [-t -a -s -r -e -p -q -C -c -g -d -O -f] file.e \n") 
    LibePuts(stderr,"\n") 
    LibePuts(stderr,"  The ech command (without options) compiles an eps file\n") 
      
  else:
    MainError("Unknown architecture") 
 
  LibePuts(stderr,"  with extension .e into an object file with extension .o\n") 
  LibePuts(stderr,"\n") 
  LibePuts(stderr,"  Options: \n") 
  LibePuts(stderr,"   -t : Print parse tree \n") 
  LibePuts(stderr,"   -a : Print annotated parse tree \n") 
  LibePuts(stderr,"   -s : Print local symbol table   \n") 
  LibePuts(stderr,"   -r : Print external symbol table   \n") 
  LibePuts(stderr,"   -e : Emit code \n") 
  LibePuts(stderr,"   -p : Perform only syntax check, no code generated \n") 
  LibePuts(stderr,"   -q : Perform syntax and semantic check, no code generated \n") 
  LibePuts(stderr,"   -C : Array index check \n") 
  if(arch == CPU):
    LibePuts(stderr,"   -c : Produce c-code but do not generate object code\n") 
      
  else if(arch == CUDA):
    LibePuts(stderr,"   -c : Produce c++/cuda-code but do not generate object code\n") 
  else if(arch == HIP):
    LibePuts(stderr,"   -c : Produce c++/hip-code but do not generate object code\n") 
  else :
    MainError("Unknown architecture") 
 
  LibePuts(stderr,"   -g : Generate debug info \n") 
  LibePuts(stderr,"   -d : Show the host compiler command line  \n") 
  LibePuts(stderr,"   -O : Optimize code\n") 
  LibePuts(stderr,"   -f : Generate code for openmp \n") 
  LibeFlush(stderr) 
  return(OK) 
    
 
def char [*] MainFout(char [*] infile, int arch):

  # Mainfout checks the input file name
  #
  # Parameters:
  # 
  # infile : Input file name
  # arch   : Architecture = 1: cpu
  #                       = 2: cuda
  #                       = 3: hip
  # 
  # Returns: Returns output file name
  # with extension '.c' (for cpu)
  # or '.cpp' (for cuda and hip).

  char [*] outfile  # Output file name (holding c-code)
  int l             # Temp varibale to hold string length of 

  l=len(infile,0) 
  if(l < 3):
    MainError(" Illegal file name") 
      
 
  if(infile[l-2] != cast(char,'e')):
    MainError("File extension have to be .e") 
      
 
  if(arch == CPU):
    outfile=new(char [l]) 
    LibeStrcpy(infile,outfile) 
    outfile[l-2] = cast(char,'c') 
  else if(arch == CUDA):
    outfile=new(char [l+2]) 
    LibeStrcpy(infile,outfile) 
    outfile[l-2] = cast(char,'c') 
    outfile[l-1] = cast(char,'p') 
    outfile[l-0] = cast(char,'p') 
  else if(arch == HIP):
    outfile=new(char [l+2]) 
    LibeStrcpy(infile,outfile) 
    outfile[l-2] = cast(char,'c') 
    outfile[l-1] = cast(char,'p') 
    outfile[l-0] = cast(char,'p') 
  else:
    MainError("Unknow architecture") 
     
  return(outfile) 
    
def char [*] MainFmod(char [*] infile):

  # Mainmod checks the input file name
  #
  # Parameters: 
  #   infile : Input file name
  #
  # Return:
  # The argument to the function is the input file name and
  # the return value is the output file name. 

  char [*] outfile  # Output file name (holding module file)
  int l             # Temp varibale to hold string length of 
                    # input file name

  l=len(infile,0) 
  if(l < 3):
    MainError(" Illegal file name") 
      
 
  if(infile[l-2] != cast(char,'e')):
    MainError("File extension have to be .e") 
      
  outfile=new(char [l]) 
  LibeStrcpy(infile,outfile) 
  outfile[l-2] = cast(char,'m') 
  return(outfile) 
    

const CMDLEN=160         # Length of command line

def int MainCcompcpu(char [*] file, int debug, int optimize, int openmp, int show):

  # MainCcompcpu invokes the c-compiler to generate object code for cpu.
  #
  # Parameters:
  #   file    : Output c/c++ file name.
  #   debug   :  = 1 Generate debug info 
  #   optimize : = 1 Turn on optimization
  #   openmp   : = 1 Generate OpenMp code
  #   show     : = 1 Show command line
  #   
  # Returns : 
  #   OK
  

  char [*] tmp          # String temporary 
  char [*] cmd          # Command line for compiling
                        # input file name
  cmd = "gcc -c -ffast-math " 

  if(debug == OK):
    cmd=LibeStradd(cmd," -g ") 

  if(optimize == OK):
    cmd=LibeStradd(cmd," -O2 ") 

  if(openmp == OK):
    cmd=LibeStradd(cmd," -fopenmp ") 
      
  cmd=LibeStradd(cmd,file)

  tmp=cmd
  cmd=LibeStradd(tmp,"\n")
  delete(tmp)

  if(show == OK):
    LibePuts(stderr,cmd) 
    LibeFlush(stderr) 
      
  LibeSystem(cmd) 

  cmd = LibeStradd("rm ",file) 

  tmp=cmd
  cmd = LibeStradd(cmd,"\n") 
  delete(tmp)

  if(show == OK):
    LibePuts(stderr,cmd) 
    LibeFlush(stderr) 
      
  LibeSystem(cmd) 
  delete(cmd) 
  return(OK) 
    
     
def int MainCcompcuda(char [*] file, int debug, int optimize, int openmp, int show):

  # MainCcompcuda invokes the nvcc compiler to generate object 
  #code for nvidia gpus.

  char [*] tmp          # String temporary 
  char [*] cmd          # Command line for compiling
  int l                 # Temp varibale to hold string length of 
                        # input file name
  l=len(file,0) 
  cmd= "nvcc -arch=native -use_fast_math --compiler-options -O2 "
  cmd = LibeStradd(cmd," --compiler-options -ffast-math  -c -x cu ") 

  if(debug == OK):
    cmd=LibeStradd(cmd, " -g ") 

  if(optimize == OK):
    cmd=LibeStradd(cmd, " -O2 ") 

  if(openmp == OK):
    cmd=LibeStradd(cmd, " -fopenmp ") 

  cmd=LibeStradd(cmd,file) 
  tmp=cmd
  cmd=LibeStradd(cmd,"\n") 
  delete(tmp)
  if(show == OK):
    LibePuts(stderr,cmd) 
    LibeFlush(stderr) 
      
  LibeSystem(cmd) 
  delete(cmd) 
  cmd = new(char[len("rm ",0)+l+2]) 
  cmd=LibeStradd("rm ",file) 
  tmp=cmd
  cmd=LibeStradd(cmd,"\n");
  if(show == OK):
    LibePuts(stderr,cmd) 
    LibeFlush(stderr) 
 
  LibeSystem(cmd) 
  delete(cmd) 
  return(OK) 
    
     
def int MainCcomphip(char [*] file, int debug, int optimize, int openmp, int show):

  # MainCcomphip invokes the hipcc compiler to generate object code for amd gpus.

  char [*] tmp      # String temporary 
  char [*] cmd      # Command line for compiling
  int l             # Temp varibale to hold string length of 
                    # input file name
  l=len(file,0) 
  tmp= "hipcc -c " 
  cmd = new(char[CMDLEN]) 
  LibeStrcpy(tmp,cmd) 

  if(debug == OK):
    LibeStrcat(" -g ",cmd) 
      

  if(optimize == OK):
    LibeStrcat(" -O3 ",cmd) 
      

  if(openmp == OK):
    LibeStrcat(" -fopenmp ",cmd) 
      

  LibeStrcat(file,cmd) 
  LibeStrcat("\n",cmd) 
  if(show == OK):
    LibePuts(stderr,cmd) 
    LibeFlush(stderr) 
      
 
  LibeSystem(cmd) 
  delete(cmd) 
  cmd = new(char[len("rm ",0)+l+2]) 
  LibeStrcpy("rm ",cmd) 
  LibeStrcat(file,cmd) 
  LibeStrcat("\n",cmd) 
  if(show == OK):
    LibePuts(stderr,cmd) 
    LibeFlush(stderr) 
      
 
  LibeSystem(cmd) 
  delete(cmd) 
  return(OK) 
    
     
def int Main(struct MainArg [*] MainArgs) :

  # Main is the main function.

  int btree         # Flag for emitting parse tre. 
  int atree         # Flag for emitting annotated parse tree
  int table         # Flag for emitting local symbol tables
  int etable        # Flag for emitting external symbol table
  int parse         # Flag to perform parsing
  int semantic      # Flag to perform semantic check
  int emit          # Flag for emitting c-code
  int optimize      # Flag to optimize cod3
  int openmp        # Flag for openmp
  int debug         # Flag for debug
  int show          # Flag for displaying compiler command line
  int obj           # Flag for producing object code

 
  int fd            # Input file descriptor
  struct tree p     # Parse tree node
  char [*] infile   # Input file name
  char [*] outfile  # Output file name

  int i,l,loop      # Loop variables 

  LibeInit()         # Initialize io package 

  # Turn off all flags
  show=debug=optimize=openmp=ERR 
  btree  = atree = table = etable = emit = ERR 
  parse  = semantic = ERR 
  obj = OK 

  # Initialize the parse tree 
  PtreeInit()  

  # Initialize the code generator    

  CodeInit()     
  CodeArraycheckoff() 
  CodeDebugoff() 
  CodeSetarch(ARCH) 

   
  # Command line option processing : 

  l = len(MainArgs,0) 
  if(l<=1):
    MainError("Missing input file name") 
      
 

  i=1 
  loop=OK 
  while(loop==OK):
    if(LibeStrcmp(MainArgs[i].arg, "-h") == OK):  
      MainHelp(ARCH) 
      LibeExit() 
        

    if(LibeStrcmp(MainArgs[i].arg, "-t") == OK):  

      # Print parse tree  
      btree = OK; parse = OK 
        

    # Print annotated parse tree 
    if(LibeStrcmp(MainArgs[i].arg, "-a") == OK):  
      atree = OK; semantic = OK; parse = OK 
        

    # Print local symbol table 

    if(LibeStrcmp(MainArgs[i].arg, "-s") == OK ):  
      table = OK; parse = OK; semantic = OK 
        

    # Print external symbol table 
    if(LibeStrcmp(MainArgs[i].arg, "-r") == OK ):  
      etable = OK; parse = OK; semantic = OK 
        

    # Emit code         
    if(LibeStrcmp(MainArgs[i].arg, "-e") == OK):  
      emit = OK; parse = OK; semantic = OK 
        

    # Syntactic analysis only
    if(LibeStrcmp(MainArgs[i].arg, "-p") == OK):  
      parse = OK 
        

    # Syntactic and semantic analysis only
    if(LibeStrcmp(MainArgs[i].arg, "-q") == OK):      
      semantic = OK; parse = OK 
        

    # Turn on array check  
    if(LibeStrcmp(MainArgs[i].arg, "-C") == OK):      
      CodeArraycheckon() 
        

    # Turn on debug flag  
    if(LibeStrcmp(MainArgs[i].arg, "-g") == OK):      
      debug=OK 
      CodeDebugon() 
        

    if(LibeStrcmp(MainArgs[i].arg, "-d") == OK):      
      show=OK 
        

    # Set flag for optimization
    if(LibeStrcmp(MainArgs[i].arg, "-O") == OK):      
       optimize=OK 
        

    # Set flag for openmp
    if(LibeStrcmp(MainArgs[i].arg, "-f") == OK):      
       openmp=OK 
        
 
    if(LibeStrcmp(MainArgs[i].arg, "-c") == OK):      
       obj=ERR 
        
 
    if(i+1<l):
      if((MainArgs[i].arg[0] ==cast(char,'-')) == OK):
        loop=OK 
        i=i+1 
      else :
        loop=ERR 
    else :
      loop=ERR 

  # Set the default case
  if((parse == ERR) && (semantic == ERR) && (emit == ERR)):
    parse=semantic=emit=OK 

  if(i>=len(MainArgs,0)):
    MainError("Missing input file name") 
  else: 
    infile=MainArgs[i].arg 

  # Set the output file for holding c-code
  if(emit == OK):
    outfile=MainFout(infile,ARCH) 
    # Open output file for c-code
    fd = LibeOpen(outfile,"w") 
    CodeSetfdout(fd) 
      
  
  # Initialize the scanner 
  if(ScanInit(infile) == ERR):        
    LibeExit()  

  # Set line number to 1   
  ScanSetline(1)          

  # Initialize the parser   
  ParseIniparse()         

  if(emit==OK):
    CodePreamble() 

  # Create external symbol table 

  SymSetetp(SymMktable())  

  if(parse == OK):
    p = ParseParse()     # Parse first unit of code     
  if(btree == OK):
    PtreePrtree(p, 0)    # Print parse tree            

  while(p != NULL):
    if(semantic == OK):
      if(p != NULL):
        SemSem(p, SymGetetp())  # Semantic analysis
          
      if(atree == OK):
        PtreePrtree(p,0)        # Print annotated parse tree 
      if(table == OK):           # Print local symbol table  
        if(SymGetltp() != NULL):
          SymPrsym(stdout,SymGetltp(),0) 
 
    if(emit == OK):
      if(p != NULL):
        CodeCode(p, SymGetetp())  # Emit code 
    PtreeRmtree(p)                # Remove parse tree  
    SymRmtable(SymGetltp())       # Remove local symbol table 

    if(parse == OK):
      p = ParseParse()           # Parse one unit of code
      if(btree == OK):                
         PtreePrtree(p, 0)       # Print parse tree 

  if(ParseGetlookahead() != STOP):
     MainError("Parsing ended before reaching EOF") 

  # Print external symbol table
  if(etable == OK):
    LibeFlush(stderr) 
    if(SymGetetp() != NULL):
      SymPrsym(stdout,SymGetetp(),0) 

  if(emit == OK): 
    CodePostamble() 

  # Compile the c-code

  if ((emit == OK) && (obj == OK)):
    if(ARCH == CPU):
      MainCcompcpu(outfile,debug,optimize,openmp,show) 
        
    else if(ARCH==CUDA):
      MainCcompcuda(outfile,debug,optimize,openmp,show) 
      
    else if(ARCH==HIP):
      MainCcomphip(outfile,debug,optimize,openmp,show) 
      
    else :
      MainError("Unknown architecture") 
        
  if(emit == OK):
    delete(outfile)     
    LibeClose(fd) 
      

  # Output module file
  fd = LibeOpen(MainFmod(infile),"w") 
  SymExport(fd,SymGetetp(),0) 
 
  LibeFlush(stdout) 

  return(OK)    # Successfull Return 
    
