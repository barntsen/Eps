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
    LibePuts(stderr,s) 
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
  LibePuts(stderr,"  ec [-t -a -s -r -e -p -q -C -c -g -d -O -f -x -y] file.e \n") 
  LibePuts(stderr,"\n") 
  LibePuts(stderr,"  The ec command (without options) compiles an eps file\n") 
  LibePuts(stderr,"  with extension .e into an object file with extension .o\n") 
  LibePuts(stderr,"\n") 
  LibePuts(stderr,"  Options: \n") 
  LibePuts(stderr," -t : Print parse tree \n") 
  LibePuts(stderr," -a : Print annotated parse tree \n") 
  LibePuts(stderr," -s : Print local symbol table   \n") 
  LibePuts(stderr," -r : Print external symbol table   \n") 
  LibePuts(stderr," -e : Emit code \n") 
  LibePuts(stderr," -p : Perform only syntax check, no code generated \n") 
  LibePuts(stderr," -q : Perform syntax and semantic check, no code generated \n") 
  LibePuts(stderr," -C : Array index check \n") 
  LibePuts(stderr," -i : Break up expressions \n") 
  LibePuts(stderr," -c : Produce c/c++ code but do not generate object code\n") 
  LibePuts(stderr," -g : Generate debug info \n") 
  LibePuts(stderr," -d : Show the host compiler command line  \n") 
  LibePuts(stderr," -O : Optimize code\n") 
  LibePuts(stderr," -f : Generate code for openmp \n") 
  LibePuts(stderr," -x arch : where arch is either cpu (default) or cuda\n") 
  LibePuts(stderr," -y dev  : where dev is either none, native or device name such as sm_86\n") 
  LibeFlush(stderr) 
  return(OK) 
    
 
def char [*] MainFout(char [*] infile, int arch):

  # Mainfout checks the input file name
  # and creates output file name
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
    MainError(" Illegal file name\n") 
 
  if(infile[l-2] != cast(char,'e')):
    MainError("File extension have to be .e\n") 

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
  else:
   MainError("Unknow architecture\n") 
     
  return(outfile) 
    
def char [*] MainFmod(char [*] infile):

  # MainFmod creates the output module file name
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
    MainError(" Illegal file name\n") 
 
  if(infile[l-2] != cast(char,'e')):
    MainError("File extension have to be .e\n") 
      
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
    cmd=LibeStradd(cmd," -O3 ") 
  else :
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
    
     
def int MainCcompcuda(char [*] file, int debug, int optimize, int openmp, int show, char[*] dev):

  # MainCcompcuda invokes the nvcc compiler to generate object 
  # code for nvidia gpus.

  #char [*] tmp          # String temporary 
  #char [*] cmd          # Command line for compiling
  #int l                 # Temp varibale to hold string length of 
                        # input file name
  l=len(file,0) 
  cmd= "nvcc  -use_fast_math --compiler-options -O2 "

  if(LibeStrcmp(dev,"none") !=OK):
    cmd= LibeStradd(cmd," -arch ") 
    cmd= LibeStradd(cmd,dev) 
    cmd= LibeStradd(cmd," ") 

  cmd = LibeStradd(cmd," --compiler-options -ffast-math  -c -x cu ") 

  if(debug == OK):
    cmd=LibeStradd(cmd, " -g ") 

  if(optimize == OK):
    cmd=LibeStradd(cmd, " -O3 ") 
  else : 
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

  #char [*] tmp      # String temporary 
  #char [*] cmd      # Command line for compiling
  #int l             # Temp varibale to hold string length of 
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

  #int btree         # Flag for emitting parse tre. 
  #int atree         # Flag for emitting annotated parse tree
  #int table         # Flag for emitting local symbol tables
  #int etable        # Flag for emitting external symbol table
  #int parse         # Flag to perform parsing
  #int semantic      # Flag to perform semantic check
  #int emit          # Flag for emitting c-code
  #int optimize      # Flag to optimize cod3
  #int openmp        # Flag for openmp
  #int debug         # Flag for debug
  #int show          # Flag for displaying compiler command line
  #int obj           # Flag for producing object code

 
  #int fd            # Input file descriptor
  #struct tree p     # Parse tree node
  #char [*] infile   # Input file name
  #char [*] outfile  # Output file name
  #char [*] dev      # GPU device/architecture name

  #int options       # Count of options
  #int i,l             # Loop variables 

  LibeInit()         # Initialize io package 

  dev=LibeStrsave("none")
  # Turn off all flags
  show=debug=optimize=openmp=ERR 
  btree  = atree = table = etable = emit = ERR 
  parse  = semantic = ERR 
  obj = OK 
  options=0

  # Initialize the parse tree 
  PtreeInit()  

  # Initialize the code generator    

  CodeInit()     
  CodeArraycheckoff() 
  CodeDebugoff() 
  CodeSetarch(CPU) 

   
  # Command line option processing : 

  l = len(MainArgs,0) 
  if(l<=1):
    MainError("Missing input file name\n") 

  # Main loop over command line arguments
  for(i=1; i<len(MainArgs,0);i=i+1):

    if(LibeStrcmp(MainArgs[i].arg, "-h") == OK):  
      MainHelp(CodeGetarch()) 
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
      CodeBreakon()

    # Turn on array expression breakup
    if(LibeStrcmp(MainArgs[i].arg, "-i") == OK):      
      CodeBreakon() 

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

    if(LibeStrcmp(MainArgs[i].arg, "-x") == OK):      
      if(len(MainArgs,0) > i):
        if(LibeStrcmp(MainArgs[i+1].arg,"cpu")==OK): 
          CodeSetarch(CPU)
        else if(LibeStrcmp(MainArgs[i+1].arg,"cuda")==OK): 
          CodeSetarch(CUDA)
        else :
          MainError("Illegal option value\n")
      else :
          CodeSetarch(CPU)

    if(LibeStrcmp(MainArgs[i].arg, "-y") == OK):      
      if(len(MainArgs,0) > i):
        dev = LibeStrsave(MainArgs[i+1].arg)

    # Count number of options
    if((MainArgs[i].arg[0] ==cast(char,'-')) == OK):
      options=options+1
    
  # Set the default case
  if((parse == ERR) && (semantic == ERR) && (emit == ERR)):
    parse=semantic=emit=OK 

  if((options+1) >= len(MainArgs,0)):
    MainError("Missing input file name\n") 
  else: 
    infile=MainArgs[len(MainArgs,0)-1].arg 

  # Set the output file for holding c-code
  if(emit == OK):
    outfile=MainFout(infile,CodeGetarch()) 
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
     MainError("Parsing ended before reaching EOF\n") 

  # Print external symbol table
  if(etable == OK):
    LibeFlush(stderr) 
    if(SymGetetp() != NULL):
      SymPrsym(stdout,SymGetetp(),0) 

  if(emit == OK): 
    CodePostamble() 

  # Compile the c-code

  if ((emit == OK) && (obj == OK)):
    if(CodeGetarch() == CPU):
      MainCcompcpu(outfile,debug,optimize,openmp,show) 
        
    else if(CodeGetarch()==CUDA):
      MainCcompcuda(outfile,debug,optimize,openmp,show,dev) 
      
    else if(CodeGetarch()==HIP):
      MainCcomphip(outfile,debug,optimize,openmp,show) 
      
    else :
      MainError("Unknown architecture\n") 
        
  if(emit == OK):
    delete(outfile)     
    LibeClose(fd) 
      

  # Output module file
  fd = LibeOpen(MainFmod(infile),"w") 
  SymExport(fd,SymGetetp(),0) 
 
  LibeFlush(stdout) 

  return(OK)    # Successfull Return 
    
