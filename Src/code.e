import libe   # Include library
import sym    # Include symbol table interface 
import ptree  # Include parse tree interface  
import err    # Include interface to error routines
import m      # Include architecture depent parameters
import scan   # Include Scanner 

# Forward declaration needed later
int CodeCompstmnt(struct tree p):
  pass

int CodeStmnt(struct tree p) :
  pass

char [*] CodeBinexpr(struct tree p):
  pass

char [*] CodeExpr(struct tree p):
  pass


int CodeError(char [*] s) :
  
  # CodeError prints error messages and exits.
  ErrError(ScanGetfile(), ScanGetline(), s);
  return(OK)


# CodeArch is a module variable holding the
# architecturetype.
int CodeArch;


int CodeSetarch(int arch):

  # CodeSetarch sets the architecture. 

  CodeArch = arch;
  return(OK);


int CodeGetarch():

  # CodeGetarch returns the architecture. 

  return(CodeArch);

# Maximum size of arrays
const MAXRANK = 4

int CodeLine;

# Module variable to hold flag for parallel scope.  

int CodeParallel; 

int CodeSetparallel(int flag) :

  # CodeSetparallel  sets the parallel flag.
 
  CodeParallel = flag;
  return(flag);

int CodeGetparallel() :

  # CodeGetparallel  gets the parallel flag.
  return(CodeParallel);

int CodeAddress ;    # Global to hold temp value            

char [*] CodeItemp(int cntrl) :

  # CodeItemp initializes temporary variable.
 
  char [*] s1;
  char [*] s2;

  s1 = new(char [16]);
  s2 = new(char [16]);
  LibeStrcpy("nctemp",s2);
  if(cntrl == -1):
    CodeAddress = 0;
  else:
    CodeAddress = CodeAddress + 1;
  if(CodeAddress > 99999): 
     CodeError("I am running out of temporaries");
  LibeItoa(CodeAddress,s1);        
  LibeStrcat(s1,s2);
  return s2;
 

int CodeInit() :

  # CodeIcode performs c code generator initialization.
 
  CodeSetparallel(ERR);
  CodeLine=0;
  CodeItemp(-1);  
  CodeSetarch(CPU);
  return (OK);


# CodeOutfd Module Variable to hold output file descriptor
int CodeFdout;

int CodeSetfdout(int fd):

  # Set output file descriptor

  CodeFdout = fd;
  return(OK);


int CodeGetfdout():

  # Get output file descriptor

  return(CodeFdout);


# Module variable
# Flag for debug

int CodeDebugflag ;    

int CodeDebug():
 # CodeDebug tests for the debug flag.
 
  return(CodeDebugflag);
 

int CodeEs(struct tree p, char [*] s) :

  # CodeEs emits string.
  # This is a primitive routine emitting a string  s.
  # The line argument must contain the current line number,
  # usuallay obtained through a call of PtreeGetline.
 
  int fdo;
  char[*] f;

  fdo= CodeGetfdout();

  if(CodeDebug()==OK):
    if(p != NULL):
      if(PtreeGetline(p) != CodeLine):
        LibePuts(fdo,"\n");
        LibePuts(fdo,"#line ");
        LibePuti(fdo,PtreeGetline(p));
        LibePuts(fdo,"  ");
        LibePutc(fdo,DFN);
        f=PtreeGetfile(p);
        LibePuts(fdo,f);
        LibePutc(fdo,DFN);
        LibePuts(fdo,"\n");
        CodeLine = PtreeGetline(p);
      
  LibePuts(fdo,s);
  LibeFlush(fdo);
  return(OK);
 

int CodeEd(int d) :

  #CodeEd emits decimal.
  #No comments, really needed, the routine emits a decimal
  #number, and that's it.
 
  int fdo;
  fdo= CodeGetfdout();
  LibePuti(fdo, d);
  return(OK);
 

int CodeEc(int d) :

  #CodeEc emits a character

  int fdo;

  fdo= CodeGetfdout();
  LibePutc(fdo, d);
  return(OK);
 

int CodeEsr(char [*] s) :

  #CodeEsr emits a string 

  int i,l;
  int fdo;

  fdo= CodeGetfdout();

  l=LibeStrlen(s);
  for(i=1; i<l-1; i=i+1):
    LibePutc(fdo,cast(int,s[i]));

  LibeFlush(fdo);
  return(OK);
 

int CodeIdeclaration(struct tree p, struct symbol tp) :

  # CodeIdeclaration  generate code for simple id declaration.
  #
  # Parameters:
  #   p  : Identifier node in parse tree
  #   tp : Entry in symbol table

  # Do not generate declarations for constants
  if(LibeStrcmp(SymGetype(tp),"rconstant")==OK) :
    return (OK);

  if(LibeStrcmp(SymGetype(tp),"iconstant")==OK) :
    return (OK);

  if(LibeStrcmp(SymGetype(tp),"sconstant")==OK) :
    return (OK);
 
  if(LibeStrcmp(SymGetstruct(tp),"structdef") == OK):
    CodeEs(p, "struct ");

  if(LibeStrcmp(SymGetstruct(tp),"struct") == OK):
    if(LibeStrcmp(SymGetarray(tp),"array") == OK):
      CodeEs(p, "struct nctemp");
      CodeEs(p, SymGetype(tp));
      CodeEd(SymGetrank(tp));
      CodeEs(p, " *");
      CodeEs(p, SymGetname(tp)); 
    else:
      CodeEs(p, "struct ");
      CodeEs(p, SymGetype(tp));
      CodeEs(p, "*");
      CodeEs(p, " "); 
      CodeEs(p, SymGetname(tp)); 
  else if(LibeStrcmp(SymGetarray(tp),"array") == OK):
    CodeEs(p, "nctemp");
    CodeEs(p, SymGetype(tp));
    CodeEd(SymGetrank(tp));
    CodeEs(p, " *"); 
    CodeEs(p, SymGetname(tp)); 
  else:
    CodeEs(p, SymGetype(tp));
    CodeEs(p, " "); 
    CodeEs(p, SymGetname(tp)); 

  return(OK);


int CodeIdeclarations(struct tree p, struct symbol tp):

  # CodeIdeclarations  generate code for simple id declarations.
  #
  # Parameters:
  #   p  : Identifier node in parse tree
  #   tp : Entry in symbol table

  while(tp != NULL) :
    CodeIdeclaration(p,tp);
    CodeEs(p,";\n");
    tp = SymMvnext(tp);
  
  return(OK);  


int CodeStructdefsym(struct tree p, struct symbol tp):

  # CodeStructdefsym generates code for struct definition.  

  struct symbol up;
  CodeEs(p, "struct ");
  CodeEs(p, SymGetype(tp));
  CodeEs(p, " {");
  up = SymGetable(tp);
  up = SymMvnext(up);
  CodeIdeclarations(p, up);
  CodeEs(p, "};\n");

  CodeEs(p, "typedef struct ");
  CodeEs(p, "nctemp");
  CodeEs(p, SymGetype(tp));
  CodeEs(p, "1");
  CodeEs(p, " {int d[1]; struct ");
  CodeEs(p, SymGetype(tp));
  CodeEs(p, " *a; ");
  CodeEs(p, "} ");
  CodeEs(p,"nctemp");
  CodeEs(p, SymGetype(tp));
  CodeEs(p, "1");
  CodeEs(p, ";\n");

  CodeEs(p, "struct ");
  CodeEs(p, "nctemp");
  CodeEs(p, SymGetype(tp));
  CodeEs(p, "2");
  CodeEs(p, " {int d[2]; struct ");
  CodeEs(p, SymGetype(tp));
  CodeEs(p, " *a; ");
  CodeEs(p, "} ");
  CodeEs(p, ";\n");

  CodeEs(p, "struct ");
  CodeEs(p, "nctemp");
  CodeEs(p, SymGetype(tp));
  CodeEs(p, "3");
  CodeEs(p, " {int d[3]; struct ");
  CodeEs(p, SymGetype(tp));
  CodeEs(p, " *a; ");
  CodeEs(p, "} ");
  CodeEs(p, ";\n");

  CodeEs(p, "struct ");
  CodeEs(p, "nctemp");
  CodeEs(p, SymGetype(tp));
  CodeEs(p, "4");
  CodeEs(p, " {int d[4]; struct ");
  CodeEs(p, SymGetype(tp));
  CodeEs(p, " *a; ");
  CodeEs(p, "} ");
  CodeEs(p, ";\n");
  return(OK);

int CodeFdefcpusym(struct tree  p, struct symbol tp):

  # CodeFdefcpusym creates code for a function proptotype
  #
  # Arguments:
  #  p  :  Parse tree node
  #  tp :  Symbol table (external)
  #
  # Returns OK
  #
  # Code is generated for a function protopype
  # for an imported module
  # The parse tree node is only used for line no ref.
  
  #
  # Code for function type
  #

  if(LibeStrcmp(SymGetstruct(tp),"struct") == OK):
    CodeEs(p, "struct ");

  if(LibeStrcmp(SymGetarray(tp),"array") == OK):
    CodeEs(p, "nctemp");

  CodeEs(p, SymGetype(tp));
  if(LibeStrcmp(SymGetarray(tp),"array") == OK):
    CodeEd(SymGetrank(tp));
    CodeEs(p," *");

  if(LibeStrcmp(SymGetstruct(tp),"struct")==OK):
    CodeEs(p,"*");

  CodeEs(p, " ");
  CodeEs(p, SymGetname(tp));
  CodeEs(p, " (");

  # Code for argument list

  tp = SymGetable(tp);
  if(tp == NULL):
    CodeEs(p,");\n");
    return(OK);

  tp = SymMvnext(tp);
  tp = SymGetable(tp);
  if(tp == NULL):
    return(OK);

  tp=SymMvnext(tp);
  while(tp != NULL) :
    CodeIdeclaration(p,tp);
    tp = SymMvnext(tp);
    if(tp != NULL) :
      CodeEs(p,",");
    else :
      CodeEs(p,");\n");
  
  return(OK);


int CodeImport(struct tree p, struct symbol tp):

  # Generate code for imported declarations
  #
  # Arguments :
  #  p:  Parse tree import node
  #  tp: External symbol table
  #
  # Returns: OK
  #
  # Forward declarations is generated for an imported module
  #
  
  char [*] module;

  # Get the module name
  module = PtreeGetdef(p);
  
  # Loop over entries in the symbol table
  # to find the entries for the imported module
  
  tp=SymMvnext(tp);
  while(tp != NULL):
    if(LibeStrcmp(SymGetmodule(tp),module) == OK):
      if(LibeStrcmp(SymGetstruct(tp), "structdef")==OK):
          CodeStructdefsym(p,tp);
      else if(LibeStrcmp(SymGetfunc(tp), "fdef")==OK):
          CodeFdefcpusym(p,tp);
      else :
        CodeIdeclaration(p,tp);
        CodeEs(p,";\n");

    tp = SymMvnext(tp);

  return(OK);

int CodeStructdef(struct tree p, struct symbol tp): 
  pass

int CodeFdef(struct tree p): 
  pass


int CodeFdefcpu(struct tree p) :

  # CodeFdefcpu generates code for a regular cpu

  struct symbol tp
  int noarg;
  int forw;

  noarg=0;
  forw=0;

  # We are at the type node for the function
  if(LibeStrcmp(PtreeGetarray(p),"array") == OK):

    # Move to the arrayargs node
    p=PtreeMvchild(p); 

    # Move to the function name
    p = PtreeMvsister(p);
    if(LibeStrcmp(PtreeGetforw(p),"forw")== OK) :
      forw=1;
  else :
    # Move to the fdef node
    p=PtreeMvchild(p); 
    if(LibeStrcmp(PtreeGetforw(p),"forw")== OK) :
      forw=1;

  tp = SymLookup(PtreeGetdef(p), SymGetetp());

  if(LibeStrcmp(SymGetstruct(tp),"struct") == OK):
    CodeEs(p, "struct ");

  if(LibeStrcmp(SymGetarray(tp),"array") == OK):
    CodeEs(p, "nctemp");

  CodeEs(p, SymGetype(tp));
  if(LibeStrcmp(SymGetarray(tp),"array") == OK):
    CodeEd(SymGetrank(tp));
    CodeEs(p," *");

  if(LibeStrcmp(SymGetstruct(tp),"struct")==OK):
    CodeEs(p,"*");

  CodeEs(p, " ");
  CodeEs(p, SymGetname(tp)); 
  CodeEs(p, " (");

  # Check for missing arglist
  if(PtreeMvchild(p) != NULL):
    p = PtreeMvchild(p);

  if(LibeStrcmp(PtreeGetname(p), "arglist") == OK):
    tp = SymGetable(tp);
    tp = SymLookup("#arglist", tp);       
    tp = SymGetable(tp);
    while((tp=SymMvnext(tp))!=NULL):
      CodeIdeclaration(p, tp);
      if(SymMvnext(tp)!=NULL):
        CodeEs(p,",");

      noarg=noarg+1;
  CodeEs(p, ")\n");

  # Done if forward declaration
  if(forw == 1):
    CodeEs(p,";\n");
    return(OK);

  if(PtreeMvsister(p) != NULL) :
    CodeCompstmnt(PtreeMvsister(p));
  else :
    CodeCompstmnt(p);

  return(OK);


int CodeFdeclkernel(struct tree p) :

  #CodeFdeclkernel generates kernel declaration for GPU
 
  struct symbol tp;
  int noarg;


  noarg=0;
  tp = SymLookup(PtreeGetdef(p), SymGetetp());
  SymSetltp(SymGetable(tp));

  CodeEs(p,"__global__ ");
  CodeEs(p, "void");

  #
  if(LibeStrcmp(SymGetarray(tp),"array") == OK):
    CodeEd(SymGetrank(tp));
  

  if(LibeStrcmp(SymGetstruct(tp),"struct")==OK):
     CodeEs(p,"*");
  
  CodeEs(p, " ");
  CodeEs(p,"kernel_");
  CodeEs(p, SymGetname(tp)); 
  CodeEs(p, " (");
  p = PtreeMvchild(p);    
  if(LibeStrcmp(PtreeGetname(p), "arglist") == OK):
    tp = SymGetable(tp);
    tp = SymLookup("#arglist", tp);       
    tp = SymGetable(tp);
    while((tp=SymMvnext(tp))!=NULL):
      CodeIdeclaration(p, tp);
      if(SymMvnext(tp)!=NULL):
        CodeEs(p,",");
      

      noarg=noarg+1;

  CodeEs(p, ");\n");

  return(OK);



int CodeFdefgpu(struct tree p) :

  # CodeFdefgpu generates code for gpu global functions.

  struct symbol tp;
  int noarg;
  int forw;

  noarg=0;
  forw=0;

  # We are at the type node for the function
  if(LibeStrcmp(PtreeGetarray(p),"array") == OK):

    # Move to the arrayargs node
    p=PtreeMvchild(p); 

    # Move to the function name
    p = PtreeMvsister(p);
    if(LibeStrcmp(PtreeGetforw(p),"forw")== OK) :
      forw=1;
  else :
    # Move to the fdef node
    p=PtreeMvchild(p); 
    if(LibeStrcmp(PtreeGetforw(p),"forw")== OK) :
      forw=1;
    
  tp = SymLookup(PtreeGetdef(p), SymGetetp());

  CodeEs(p,"__global__"); 
  CodeEs(p," void");
  CodeEs(p, " ");
  CodeEs(p,"kernel_");
  CodeEs(p, SymGetname(tp)); 
  CodeEs(p, " (");

  # Check for missing arglist
  if(PtreeMvchild(p) != NULL):
    p = PtreeMvchild(p);
  

  if(LibeStrcmp(PtreeGetname(p), "arglist") == OK):
    tp = SymGetable(tp);
    tp = SymLookup("#arglist", tp);       
    tp = SymGetable(tp);
    while((tp=SymMvnext(tp))!=NULL):
      CodeIdeclaration(p, tp);
      if(SymMvnext(tp)!=NULL):
        CodeEs(p,",");
      noarg=noarg+1;
  CodeEs(p, ")\n");

  # Done if forward declaration
  if(forw == 1):
    CodeEs(p,";\n");
    return(OK);

  if(PtreeMvsister(p) != NULL) :
    CodeCompstmnt(PtreeMvsister(p));
  else :
    CodeCompstmnt(p);

  return(OK);


int CodeFdewrappergpu(struct tree p) :

  # CodeFdefwrappergpu generates wrapper function for gpu.

  struct tree top;
  struct symbol tp, toptp;
  int noarg;
  p=PtreeMvchild(p);
  noarg=0;
  tp = SymLookup(PtreeGetdef(p), SymGetetp());
  SymSetltp(SymGetable(tp));
  
  if(LibeStrcmp(SymGetstruct(tp),"struct") == OK):
    CodeEs(p, "struct ");
  

  if(LibeStrcmp(SymGetarray(tp),"array") == OK):
    CodeEs(p, "nctemp");
  


  CodeEs(p, SymGetype(tp));

  if(LibeStrcmp(SymGetarray(tp),"array") == OK):
    CodeEd(SymGetrank(tp));
  

  if(LibeStrcmp(SymGetstruct(tp),"struct")==OK):
     CodeEs(p,"*");
  

  top = p;
  toptp=tp;
  CodeEs(p, " ");
  CodeEs(p, SymGetname(tp)); 
  CodeEs(p, " (");
  p = PtreeMvchild(p);    
  if(LibeStrcmp(PtreeGetname(p), "arglist") == OK):
    tp = SymGetable(tp);
    tp = SymLookup("#arglist", tp);       
    tp = SymGetable(tp);
    while((tp=SymMvnext(tp))!=NULL):
      CodeIdeclaration(p, tp);
      if(SymMvnext(tp)!=NULL):
        CodeEs(p,",");
      

      noarg=noarg+1;
    
  CodeEs(p, ")\n");
  CodeEs(p, "{\n");

  p=top;
  tp=toptp;
  CodeEs(p, "  kernel_"); 
  CodeEs(p, SymGetname(tp)); 
  CodeEs(p, "<<< RunGetnb(),RunGetnt() >>>(");

  p = PtreeMvchild(p);    
  if(LibeStrcmp(PtreeGetname(p), "arglist") == OK):
    tp = SymGetable(tp);
    tp = SymLookup("#arglist", tp);       
    tp = SymGetable(tp);
    while((tp=SymMvnext(tp))!=NULL):
      CodeEs(p,SymGetname(tp));
      if(SymMvnext(tp)!=NULL):
        CodeEs(p,",");
      
      noarg=noarg+1;
    
  CodeEs(p, ");\n");
  CodeEs(p,"GpuError();\n");
  CodeEs(p, "return(1);\n");
  CodeEs(p, "}\n");

  return(OK);


int CodeGdeclarations(struct tree p, struct symbol tp) :

  # CodeGdeclarations  generates code for declaration list.  
 
  tp = SymMvnext(tp);
  while(tp != NULL):
    if(LibeStrcmp("#arglist", SymGetname(tp)) == ERR):
      if(SymGetemit(tp) == OK):
        if(LibeStrcmp(SymGetstruct(tp), "structdef")==OK):
          CodeStructdef(p,tp);
        else if(LibeStrcmp(SymGetfunc(tp), "fdef")==OK):
          CodeFdef(p); 
        else: 
          if(LibeStrcmp(SymGetname(tp),"#self") == ERR) :
            CodeIdeclaration(p,tp);
            CodeEs(p, ";\n"); 
        SymSetemit(tp, ERR);
    tp = SymMvnext(tp);

  return (OK);


int CodeDeclarations(struct tree p, struct symbol tp) :

  #CodeDeclarations  generates code for declaration list.
 
  struct tree np;

  if(p != NULL):
    np=PtreeMvchild(p);
  else:
    np = p;
  CodeGdeclarations(np,tp);   # Generate code               
  return (OK);


int CodeCode(struct tree p, struct symbol tp) :

  #CodeCode is the C code generator.

  struct tree np;
  
  # Generate code for external declarations      
  np = PtreeMvchild(p);
  if (LibeStrcmp(PtreeGetname(np),"import")) :
    CodeImport(np,tp);
  CodeDeclarations(p,tp);   
  return (OK);

 
# Module variable 
# flag for arraytest
int CodeArraytest;

int CodeArraycheck() :

  # CodeArraycheck -- test for array check

  return (CodeArraytest);


int CodeArraycheckon() :

  #CodeArraycheckon turns on array check.
 
  CodeArraytest = OK;

  return(OK);


int CodeArraycheckoff() :

  #CodeArraycheckoff turns off array check.
 
  CodeArraytest = ERR;

  return(OK);


int CodeDebugon() :

  # CodeDebugon turns on the debug flag.
 
  CodeDebugflag = OK;

  return(OK);


char [*] CodeMktemp() :

  # CodeMktemp makes temporary variable.
 
    return CodeItemp(0);

 

int CodeDebugoff():

  #CodeDebugoff  turns off the debug flag.
 
  CodeDebugflag = ERR;
  return(OK);

 

char [*] CodeNewtemp(char [*] type) : 

 # CodeNewtemp makes temporary.                            
 
  char [*] temp;
  struct symbol tp;

  temp = CodeMktemp();
  tp = SymMkname(temp,SymGetltp());
  SymSetype(tp, type);
  SymSetemit(tp,ERR);
  return(temp);



struct symbol CodeNewsymbol(char [*] type, char [*] name) : 

  # CodeNewsymbol makes new symbol.                            
 
  struct symbol tp;

  tp = SymMkname(name,SymGetltp());
  SymSetype(tp, type);
  SymSetemit(tp,ERR);
  return(tp);



char [*] CodeMkstring(struct tree p) :

  # CodeMkstring makes string temporaries.
 
  struct symbol sp; # Pointers to symbol tables  
  char [*] tmp; 

  tmp = CodeMktemp();
  sp = SymMkname(tmp,SymGetltp());  
  SymSetrank(sp,1);
  SymSetype(sp,"char");
  SymSetarray(sp,"array");
  return(tmp);

 

char [*] CodeSconstant(struct tree p) :

  # CodeSconstant generates code for strings.  
 
  char [*] tmp,tmp2;
  int l;

  # Set the length  of the string  

  #tmp2 =CodeNewtemp("char");
  tmp2 = CodeMktemp();
  CodeEs(p, "struct nctempchar1 *");
  CodeEs(p, tmp2);
  CodeEs(p,";\n");
# tmp = CodeNewtemp("char");
  tmp = CodeMktemp();
  CodeEs(p, "static struct nctempchar1 ");
  CodeEs(p, tmp);
  CodeEs(p, " = ");
  CodeEs(p, "{{ "); 
  l = LibeStrlen(PtreeGetdef(p))-1;
  CodeEd(l);
  CodeEs(p, "}, (char*)"); 
  CodeEc(DFN);
  CodeEsr(PtreeGetdef(p));
  CodeEc(92); CodeEc(48);
  CodeEc(DFN);
  CodeEs(p, "};\n");
  CodeEs(p,tmp2); CodeEs(p,"=&"); CodeEs(p,tmp); CodeEs(p,";\n");

  return (tmp2);




int CodeStructdef(struct tree p, struct symbol tp) :

  # CodeStructdef generates code for struct definition.  

  struct symbol up;

  CodeEs(p, "struct ");
  CodeEs(p, SymGetype(tp));
  CodeEs(p, " {");
  up = SymGetable(tp);
  up=SymMvnext(up); 
  CodeIdeclarations(p, up);
  CodeEs(p, "};\n");
  CodeEs(p, "typedef struct ");
  CodeEs(p, "nctemp");
  CodeEs(p, SymGetype(tp));
  CodeEs(p, "1");
  CodeEs(p, " {int d[1]; struct ");
  CodeEs(p, SymGetype(tp));
  CodeEs(p, " *a; ");
  CodeEs(p, "} ");
  CodeEs(p,"nctemp");
  CodeEs(p, SymGetype(tp));
  CodeEs(p, "1");
  CodeEs(p, ";\n");

  CodeEs(p, "struct ");
  CodeEs(p, "nctemp");
  CodeEs(p, SymGetype(tp));
  CodeEs(p, "2");
  CodeEs(p, " {int d[2]; struct ");
  CodeEs(p, SymGetype(tp));
  CodeEs(p, " *a; ");
  CodeEs(p, "} ");
  CodeEs(p, ";\n");

  CodeEs(p, "struct ");
  CodeEs(p, "nctemp");
  CodeEs(p, SymGetype(tp));
  CodeEs(p, "3");
  CodeEs(p, " {int d[3]; struct ");
  CodeEs(p, SymGetype(tp));
  CodeEs(p, " *a; ");
  CodeEs(p, "} ");
  CodeEs(p, ";\n");

  CodeEs(p, "struct ");
  CodeEs(p, "nctemp");
  CodeEs(p, SymGetype(tp));
  CodeEs(p, "4");
  CodeEs(p, " {int d[4]; struct ");
  CodeEs(p, SymGetype(tp));
  CodeEs(p, " *a; ");
  CodeEs(p, "} ");
  CodeEs(p, ";\n");

  return(OK);




int CodeFdeclaration(struct tree p, struct symbol tp) :

  # CodeFdeclaration generate code for function declaration.
 
  int noargs;      # Number of arguments  

  if(LibeStrcmp(SymGetstruct(tp),"struct") == OK):
    CodeEs(p, "struct ");
  

  if(LibeStrcmp(SymGetarray(tp),"array") == OK):
    CodeEs(p, "nctemp");
  CodeEs(p, SymGetype(tp));

  if(LibeStrcmp(SymGetarray(tp),"array") == OK):
    CodeEd(SymGetrank(tp));
    CodeEs(p,"*");
  

  if(LibeStrcmp(SymGetstruct(tp),"struct")==OK): 
    CodeEs(p,"*");
  


  CodeEs(p," ");

  CodeEs(p, SymGetname(tp)); 
  CodeEs(p, " (");
  tp = SymGetable(tp);
  tp = SymLookup("#arglist", tp);       
  tp = SymGetable(tp);
  noargs = 0;
  while((tp=SymMvnext(tp))!=NULL):
    CodeIdeclaration(p, tp);
    if(SymMvnext(tp) != NULL) CodeEs(p,",");
    noargs = noargs+1;
  

  CodeEs(p, ");\n");
  return(OK);



int CodeWdeclaration(struct tree p) :

 # CodeWdeclaration walks declaration node  
 
  struct tree np;

  np = PtreeMvchild(p); 
  while(np != NULL): 
    if(LibeStrcmp(PtreeGetname(np), "fdef") == OK):
      CodeFdef(np); 
    np = PtreeMvsister(np);
  

  return(OK);

 

int CodeWdeclarations(struct tree p) :

  # CodeWdeclarations walks the declaration list.
 
  while(p!= NULL):
    if((LibeStrcmp(PtreeGetname(p), "type")   == OK)||(LibeStrcmp(PtreeGetname(p), "struct") == OK)) :
       CodeWdeclaration(p); 

    p = PtreeMvsister(p);
  

  return (OK);




int CodeArrayex(int line, char [*] qual, char [*] sel, char [*] name, \
                char [*] ival, int index)  :

  # CodeArrayex generate code for arry exception.
 
  struct tree p;

  p = PtreeMknode("dummy", "dummy");
  PtreeSetline(p,line);

  CodeEs(p,"if((0>");
  CodeEs(p,ival);
  CodeEs(p,")||(");
  CodeEs(p,ival);
  CodeEs(p,">=");
  if(qual != NULL):
    CodeEs(p,qual);
    CodeEs(p,sel);
  
  CodeEs(p,name);
  CodeEs(p,"->d[");
  CodeEd(index);
  CodeEs(p,"])){\n");

  CodeEs(p,"printf(\"***Array out of bounds error: \\n\");");
  CodeEs(p,"\n");
  CodeEs(p,"printf(\" File name: \");");
  CodeEs(p,"printf(\"");
  CodeEs(p,ScanGetfile());
  CodeEs(p,"\\n\");\n");
 
  CodeEs(p,"printf(\" Variable name: \");");
  CodeEs(p,"printf(\"");
  CodeEs(p,name);
  CodeEs(p,"\\n\");\n");

  CodeEs(p,"printf(\" Index value: %d \\n\",");
  CodeEs(p,ival); CodeEs(p,");\n");
  #CodeEs(p,"\");");CodeEs(p,"\n");

  CodeEs(p,"printf(\" Index no: ");
  CodeEd(index);
  CodeEs(p,"\\n");
  CodeEs(p,"\");");

  CodeEs(p,"printf(\" Upper bound: %d\\n\" ,")
  CodeEs(p,name); CodeEs(p,"->d["); CodeEd(index); CodeEs(p,"]-1);");
  CodeEs(p,"\n");
  CodeEs(p,"assert(0)");CodeEs(p,";\n");
  CodeEs(p,"\n}\n");
  return(OK);



char [*] CodeArray(struct tree p, char [*] qual, char [*] sel) :

  # CodeArray generate code for array reference.
 
  char [*] name;
  char [*] temp, temp2;
  struct symbol tp;      # Pointer to symbol table entry for array  
  struct tree sp;
  int rank;
  int size;
  char [*] rval;
  int i;

  name = PtreeGetdef(p);
  #temp = CodeNewtemp(PtreeGetype(p));
  temp = CodeMktemp();
  
  tp=SymLook(name);
  if(tp==0):
    CodeError(name);
  sp = PtreeMvchild(p);
  if(sp==NULL):
    return(PtreeGetdef(p));
  

  else if(LibeStrcmp(PtreeGetname(sp),"exprlist") == ERR): 
    return(PtreeGetdef(p));
  

  rank = SymGetrank(tp);
  p = PtreeMvchild(p);
  p = PtreeMvchild(p);
  sp = p;


  for(i=0; i<rank; i=i+1):
    if(i == 0):
      temp2 = CodeExpr(p);
      CodeEs(p,PtreeGetype(p));
      CodeEs(p," ");
      CodeEs(p, temp); 
      CodeEs(p, "="); 
      CodeEs(p, temp2); 
      CodeEs(p, ";\n"); 
      if(CodeArraycheck()):
        CodeArrayex(PtreeGetline(p), qual, sel, name, temp2, i);
      

    

    else:
      temp2 = CodeExpr(sp);
      CodeEs(p,temp); 
      CodeEs(p,"="); 
      CodeEs(p,temp2); 
      CodeEs(p,"*"); 
      if(qual != NULL):
        CodeEs(p,qual);
      

      if(sel != NULL):
        CodeEs(p,sel);
      

      CodeEs(p, name);
      CodeEs(p, "->d");
      CodeEs(p, "[");
      CodeEd(i-1);
      CodeEs(p, "]");
      CodeEs(p,"+"); 
      CodeEs(p, temp); 
      CodeEs(p, ";\n");
      if(CodeArraycheck()):
        CodeArrayex(PtreeGetline(p), qual, sel, name, temp2, i);

    if(sp != NULL) sp = PtreeMvsister(sp);

  size = LibeStrlen(name) + LibeStrlen(temp)+6; 
  rval = new(char[size]);
  LibeStrcpy(name, rval);
  LibeStrcat("->a",rval);
  LibeStrcat("[",rval);
  LibeStrcat(temp,rval);
  LibeStrcat("]",rval);
  return (rval);



char [*] CodeQident(char [*] qual, char [*] ident) :

  #CodeQident makes qualified identifier.
 
  int lq, li;
  char [*] name;
  
  lq = LibeStrlen(qual);
  li = LibeStrlen(ident);
  name = new(char[lq+li+2]);
  LibeStrcpy(qual,name);
  LibeStrcat(".",name);
  LibeStrcat(ident,name); 
  return(name);


char [*] CodeQident2(char [*] qual, char [*] ident) :

  #CodeQident2  -- makes qualified identifierr.

 
  int lq, li;
  char [*] name;

  lq = LibeStrlen(qual);
  li = LibeStrlen(ident);
  name = new(char[lq+li+3]);
  LibeStrcpy(qual,name);
  LibeStrcat("->",name);
  LibeStrcat(ident,name); 

  return(name);


char [*] CodeIdent(struct tree p) :

   # CodeIdent generates code for identifier
   # Identifier consists of a qualifier and a name.
   # Both qualifier and name may be arrays.
   # The generated c-code is different if the 
   # qualifier is a struct versus basic type. 
  char [*] qual; # Qualifier 
  char [*] name; # name of identifier
  struct symbol tp, up, uup;
  struct tree np;
   
  qual=NULL;
  if(LibeStrcmp(PtreeGetstruct(p),"struct")==OK):
    if(LibeStrcmp(PtreeGetarray(p),"array")==OK):
      qual = CodeArray(p,qual,".");
      np = PtreeMvchild(p);
      if(np==NULL) return(qual);
      np = PtreeMvsister(np);
      if(np==NULL) return(qual);
    

    else:
      qual = PtreeGetdef(p); 
      if((np = PtreeMvchild(p))==NULL):
        return(qual);
    

    if(LibeStrcmp(PtreeGetarray(np),"array")==OK):
      tp = SymGetltp(); # Save local symbol table
      up = SymGetetp(); # Save external symbol table
      uup = SymLook(PtreeGetdef(p)); # Find name in symbol table
      uup = SymLook(SymGetype(uup)); # Get the type
      SymSetltp(SymGetable(uup));    # Set the local symbol
                                     # table to the sub-table containing 
                                     # the qualifier and name.
                                     # Needed when generating code for arrays
      if(LibeStrcmp(PtreeGetarray(p),"array")==OK):
        name = CodeArray(np,qual, ".");
      

      else:
        name = CodeArray(np,qual, "->");
      

      # Restore the symbol tables
      SymSetltp(tp);
      SymSetetp(up);
    

    else:
      name = PtreeGetdef(np);
    


    if(LibeStrcmp(PtreeGetarray(p),"array")==OK):
      return (CodeQident(qual, name));
    else:
      return (CodeQident2(qual, name));
  
     
  else if(LibeStrcmp(PtreeGetarray(p),"array")==OK):
    name = NULL;
    qual = NULL;
    qual = CodeArray(p,qual,name);
    return(qual);
  else:
    return PtreeGetdef(p);



char [*] CodeNew(struct tree p) :

  # CodeNew generate code for the new operator.

  struct tree sp,top;
  char [*] type;
  char [*] totdim, dim;
  char [*] pointer;
  char [*] structflag;
  char [*] arrayflag;
  int rank;
  int i;

  # Create temporaries to hold return value (pointer) and total dimension  
  #pointer = CodeNewtemp(PtreeGetype(p));
  pointer = CodeMktemp();
  #totdim = CodeNewtemp(PtreeGetype(p));
  totdim = CodeMktemp();

  # Get structure and array type flags  
  p = PtreeMvchild(p);
  type = PtreeGetdef(p);
  structflag = PtreeGetstruct(p);
  arrayflag = PtreeGetarray(p);

  # If array, compute total dimension  
    
  if(LibeStrcmp(PtreeGetarray(p), "array")==OK):
    p = PtreeMvchild(p);
    p = PtreeMvchild(p);
    p = PtreeMvchild(p);
    p = PtreeMvchild(p);
    sp = p;
    top = p;
    rank=1;

    # Get the rank  
    while((p=PtreeMvsister(p))!= NULL):
      rank=rank+1;
    if(rank > MAXRANK):
      CodeError("Array dimension is too large");
      
    # Compute total size of array  

    p=sp; 
    i = 0;
    while(p != NULL):
      dim = CodeExpr(p);
      if(i==0):
        CodeEs(p,PtreeGetype(p));
        CodeEs(p," ");
        CodeEs(p,totdim); 
        CodeEs(p,"=");
        CodeEs(p,dim);
      

      else:
        CodeEs(p,totdim);
        CodeEs(p,"=");
        CodeEs(p,totdim);
        CodeEs(p,"*");
        CodeEs(p,dim);
      
 
      CodeEs(p,";\n");
      i=i+1;
      p = PtreeMvsister(p);
    

  


  # If single structure allocate memory  

  if((LibeStrcmp(structflag,"struct") == OK) && (LibeStrcmp(arrayflag,"array") == ERR)):
    CodeEs(p,"struct ");
    CodeEs(p,type);
    CodeEs(p," *");
    CodeEs(p,pointer);
    CodeEs(p,"=");
    CodeEs(p,"("); CodeEs(p,"struct "); CodeEs(p,type); CodeEs(p,"*)");
    CodeEs(p,"RunMalloc(");
    CodeEs(p,"sizeof(");
    CodeEs(p,"struct ");
    CodeEs(p,type);
    CodeEs(p,"));\n");
  

    
  # If array of structures allocate memory  

  if((LibeStrcmp(structflag,"struct") == OK) && (LibeStrcmp(arrayflag,"array") == OK)):
    # Move to list of array indices  

   # Emit declaration for array desriptor  
    CodeEs(p,"struct nctemp");
    CodeEs(p, type);
    CodeEd(rank);
    CodeEs(p," *");
    CodeEs(p,pointer);
    CodeEs(p,";\n");
    # Allocate memory for descriptor  
    CodeEs(p, pointer);
    CodeEs(p, "=");
    CodeEs(p,"(");
    CodeEs(p,"struct nctemp");
    CodeEs(p,type);
    CodeEd(rank);
    CodeEs(p,"*)");
    CodeEs(p, "RunMalloc(");
    CodeEs(p, "sizeof(struct nctemp");
    CodeEs(p, type);
    CodeEd(rank);
    CodeEs(p, "));\n");

    # Fill in array dimensions in descriptor  
    i=0;
    p=sp;
    while(p != NULL):
      dim = CodeExpr(sp);
      CodeEs(sp, pointer);
      CodeEs(sp,"->d");
      CodeEs(sp, "["); CodeEd(i);
      CodeEs(sp, "]="); 
      CodeEs(sp, dim); 
      CodeEs(sp, ";\n"); 
      i=i+1;
      p = PtreeMvsister(p);
    


    # Allocate memory  
    CodeEs(sp, pointer);
    CodeEs(sp,"->a");
    CodeEs(sp,"=");
    CodeEs(sp,"(struct ");
    CodeEs(sp,type);
    CodeEs(sp,"*)");
    CodeEs(sp,"RunMalloc(sizeof(");
    CodeEs(sp,"struct ");
    CodeEs(sp,type);
    CodeEs(sp,")");
    CodeEs(sp,"*");
    CodeEs(sp,totdim);
    CodeEs(sp,");\n");
  


  # If array of basic types allocate memory  

  if((LibeStrcmp(structflag,"struct") == ERR) && (LibeStrcmp(arrayflag,"array") == OK)):
    LibeFlush(stderr);

    # Emit declaration for array desriptor  
    CodeEs(sp,"nctemp");
    CodeEs(sp, type);
    CodeEd(rank);
    CodeEs(sp," *");
    CodeEs(sp,pointer);
    CodeEs(sp,";\n");
    p=top;
    i=0;
    # Allocate memory for descriptor  
    CodeEs(p, pointer);
    CodeEs(p, "=");
    CodeEs(p,"(");
    CodeEs(p,"nctemp");
    CodeEs(p,type);
    CodeEd(rank);
    CodeEs(p,"*)");
    CodeEs(p, "RunMalloc(");
    CodeEs(p, "sizeof(nctemp");
    CodeEs(p, type);
    CodeEd(rank);
    CodeEs(p, "));\n");

    while(p != NULL):
      # Fill in array dimensions in descriptor  
      dim= CodeExpr(p);
      CodeEs(p, pointer);
      CodeEs(p,"->d");
      CodeEs(p, "["); CodeEd(i);
      CodeEs(p, "]="); 
      CodeEs(p, dim); 
      CodeEs(p, ";\n"); 
      i=i+1;
      p = PtreeMvsister(p);
    


    # Allocate memory  
    p=top;
    CodeEs(p,pointer);
    CodeEs(p,"->a");
    CodeEs(p,"=(");
    CodeEs(p,type);
    CodeEs(p," *)");
    CodeEs(p,"RunMalloc(sizeof(");
    CodeEs(p,type);
    CodeEs(p,")");
    CodeEs(p,"*");
    CodeEs(p,totdim);
    CodeEs(p,");\n");
  

  return(pointer);



char [*] CodeDelete(struct tree p) :

  #CodeDelete generate code for the delete operator.
 
  char [*] tmp;

  p = PtreeMvchild(p);
  p = PtreeMvchild(p);
  tmp = CodeBinexpr(p);
  if(LibeStrcmp(PtreeGetref(p),"aref")):
    CodeEs(p, "RunFree(");
    CodeEs(p, tmp);
    CodeEs(p, "->a);\n");
    CodeEs(p, "RunFree(");
    CodeEs(p, tmp);
    CodeEs(p, ");\n");
  

  return(tmp);



char [*] CodeLen(struct tree p) :

  # CodeLen generate code for the len operator.
 
  struct tree np;
  struct tree sp;
  char [*] temp;
  char [*] index;
  
  char[*] tempr;
  #tempr = CodeNewtemp(PtreeGetype(p));
  tempr = CodeMktemp();
  np = PtreeMvchild(p);
  temp = CodeExpr(np);
  sp = PtreeMvsister(np);
  index = CodeExpr(sp);

  CodeEs(p,PtreeGetype(p));
  CodeEs(p," ");
  CodeEs(p, tempr);
  CodeEs(p, "=");
  CodeEs(p, temp);
  CodeEs(p, "->d");
  CodeEs(p, "[");
  CodeEs(p, index);
  CodeEs(p, "];");
  return(tempr);



char [*] CodeCmplx(struct tree p) :

  # CodeCmplx generates code for the cmplx operator.
 
  struct tree np;
  struct tree sp;
  char [*] q,r,tempr;
  #tempr = CodeNewtemp(PtreeGetype(p));
  tempr = CodeMktemp();
  
  np = PtreeMvchild(p);
  np = PtreeMvchild(np);
  q = CodeExpr(np);
  sp = PtreeMvsister(np);
  r = CodeExpr(sp);

  CodeEs(p,PtreeGetype(p));
  CodeEs(p," ");
  CodeEs(p, tempr);
  CodeEs(p, ".r");
  CodeEs(p, " =");
  CodeEs(p, q);
  CodeEs(p, ";");
  CodeEs(p,PtreeGetype(p));
  CodeEs(p," ");
  CodeEs(p, tempr);
  CodeEs(p, ".i");
  CodeEs(p, "=");
  CodeEs(p, r);
  CodeEs(p, ";");
  return(tempr);



char [*] CodeIm(struct tree p) :

  # CodeIm generate code for the im operator.
 
  struct tree np;
  char [*] q, tempr;
  tempr = CodeMktemp();
  
  np = PtreeMvchild(p);
  q = CodeExpr(np);

  CodeEs(p,PtreeGetype(p));
  CodeEs(p," ");
  CodeEs(p, tempr);
  CodeEs(p, " =");
  CodeEs(p, q);
  CodeEs(p, ".i  ");
  CodeEs(p, ";\n");
  return(tempr);



char [*] CodeRe(struct tree p) :

  # CodeRe generate code for the re operator.
 
  struct tree np;
  char [*] q,tmp;
  
  np = PtreeMvchild(p);
  q = CodeExpr(np);

  #tmp= CodeNewtemp(PtreeGetype(p));
  tmp= CodeMktemp();
  CodeEs(p, PtreeGetype(p));
  CodeEs(p, " ");
  CodeEs(p, tmp);
  CodeEs(p, " =");
  CodeEs(p, q);
  CodeEs(p, ".r  ");
  CodeEs(p, ";\n");
  return(tmp);



char [*] CodeFcall(struct tree p) :

  # CodeFcall generates code for function call.  
 
  struct symbol tp;
  struct tree sp;
  char [*] temp, ntemp;
  int noargs;  # Number of arguments  

  noargs=0;
  tp = SymLookup(PtreeGetdef(p), SymGetetp());
  sp = PtreeMvchild(p);    
  if(sp != NULL):
    if(LibeStrcmp(PtreeGetname(sp), "exprlist") == OK):
      sp = PtreeMvchild(sp);
    

  

  while(sp != NULL):
    #ntemp = CodeNewtemp(PtreeGetype(sp));
    ntemp = CodeMktemp();
    PtreeSetempr(sp,ntemp);
    temp = CodeExpr(sp);
    if(LibeStrcmp(PtreeGetref(sp),"aref") == OK):
      CodeEs(sp,"nctemp");
      CodeEs(sp,PtreeGetype(sp));
      CodeEd(PtreeGetrank(sp));
      CodeEs(sp,"*");
 
    else if(LibeStrcmp(PtreeGetref(sp),"sref") == OK):
      CodeEs(sp,"struct ");
      CodeEs(sp,PtreeGetype(sp));
      CodeEs(sp,"*");
    
    else:
      CodeEs(sp,PtreeGetype(sp));
    

    CodeEs(sp," ");
    CodeEs(sp, ntemp);
    CodeEs(sp, "= ");
    CodeEs(sp, temp);
    CodeEs(sp, ";\n");
    sp = PtreeMvsister(sp);  
  


  #ntemp = CodeNewtemp(PtreeGetype(p));
  ntemp = CodeMktemp();
  if(LibeStrcmp(PtreeGetref(p),"aref") == OK):
    CodeEs(p,"nctemp");
    CodeEs(p,PtreeGetype(p));
    CodeEd(PtreeGetrank(p));
    CodeEs(p,"*");
  
 
  else if(LibeStrcmp(PtreeGetref(p),"sref") == OK):
    CodeEs(p,"struct ");
    CodeEs(p,PtreeGetype(p));
    CodeEs(p,"*");
  
 
  else:
    CodeEs(p,PtreeGetype(p));
    


  # CodeEs(p,PtreeGetype(p));  
  CodeEs(p," ");
  CodeEs(p,ntemp);
  CodeEs(p,"=");
  CodeEs(p, SymGetname(tp));
  CodeEs(p, "(");
  sp = PtreeMvchild(p);
  if(sp != NULL):
    sp = PtreeMvchild(sp);
  

  while(sp != NULL):
    CodeEs(p,PtreeGetempr(sp));
    if((sp = PtreeMvsister(sp)) != NULL):
      CodeEs(p, ",");  
    noargs=noargs+1;
  

  CodeEs(p, ");\n");  
  return(ntemp);



char [*] CodeCast(struct tree p) :

  # CodeCast generate code for cast expression.
 
  struct tree np, sp, tp;
  char [*] expr;
  int rank;
  int i;
  char [*] dim;
  char [*] pointer, descr,tmp;
  char [*] type;

  #pointer = CodeNewtemp(PtreeGetype(p));
  pointer = CodeMktemp();
  
  #descr= CodeNewtemp(PtreeGetype(p));
  descr= CodeMktemp();
  type = PtreeGetype(p);

  if(LibeStrcmp(PtreeGetname(p),"cast")==OK):
    np = PtreeMvchild(p);
    sp = PtreeMvsister(np);
    expr = CodeExpr(sp);
    if(LibeStrcmp(PtreeGetref(np),"sref")==OK):
      #tmp = CodeNewtemp(PtreeGetype(p));
      tmp = CodeMktemp();
      CodeEs(p,type);
      CodeEs(p," ");
      CodeEs(p,tmp);
      CodeEs(p,"=");
      CodeEs(p,"(struct ");
      CodeEs(p, PtreeGetype(np));
      CodeEs(p,"*)(");
      CodeEs(p,expr);
      CodeEs(p,");\n");
    

    else if(LibeStrcmp(PtreeGetref(np), "aref")==OK):
      np = PtreeMvchild(np);
      np = PtreeMvchild(np);
      np = PtreeMvchild(np);
      np = PtreeMvchild(np);
      tp = np;

      rank=1;
      while((np=PtreeMvsister(np))!= NULL):
        rank=rank+1;
      if(rank > MAXRANK):
        CodeError("Array dimension is too large");
      
      # Compute total size of array  

      p=tp; 
      CodeEs(p,"nctemp");
      CodeEs(p,type);
      CodeEd(rank);
      CodeEs(p," ");
      CodeEs(sp,descr);
      CodeEs(sp,";\n");
      CodeEs(p,"nctemp");
      CodeEs(p,type);
      CodeEd(rank);
      CodeEs(p," *");
      CodeEs(sp,pointer);
      CodeEs(p,";\n");
      CodeEs(sp,descr);
      CodeEs(sp,"=");
      CodeEs(sp,"*(");
      CodeEs(p,"nctemp");
      CodeEs(sp,type);
      CodeEd(rank);
      CodeEs(sp,"*)(");
      CodeEs(sp,expr);
      CodeEs(sp,");\n"); 
      p=tp;
      i=0;
      while(p != NULL):
        dim = CodeExpr(p);
        CodeEs(sp, descr);
        CodeEs(sp,".d");
        CodeEs(sp, "["); CodeEd(i);
        CodeEs(sp, "]="); 
        CodeEs(sp, dim); 
        CodeEs(sp, ";\n"); 
        i=i+1;
        p = PtreeMvsister(p);
      

      CodeEs(sp,pointer);
      CodeEs(sp,"=&");
      CodeEs(sp,descr);
      CodeEs(sp,";\n");
    

    else:
      CodeEs(p,type);
      CodeEs(p," ");
      CodeEs(p,pointer);
      CodeEs(p,"=");
      CodeEs(p,"(");
      CodeEs(p, PtreeGetype(np));
      CodeEs(p,")(");
      CodeEs(p,expr);
      CodeEs(p,");\n");
    

  

  return(pointer);



char [*] CodePrimexpr(struct tree p) :

   # CodePrimexpr generate code for primary expression.
 
  if(LibeStrcmp(PtreeGetname(p),"identifier") == OK):
    return CodeIdent(p);
  else if(LibeStrcmp(PtreeGetname(p),"new") == OK):
    return CodeNew(p);
  else if(LibeStrcmp(PtreeGetname(p),"delete") == OK):
    return CodeDelete(p);
  else if(LibeStrcmp(PtreeGetname(p),"len") == OK):
    return CodeLen(p);
  else if(LibeStrcmp(PtreeGetname(p),"cmplx") == OK):
    return CodeCmplx(p);
  else if(LibeStrcmp(PtreeGetname(p),"im") == OK):
    return CodeIm(p);
  else if(LibeStrcmp(PtreeGetname(p),"re") == OK):
    return CodeRe(p);
  else if(LibeStrcmp(PtreeGetname(p),"fcall") == OK):
    return CodeFcall(p);
  else if(LibeStrcmp(PtreeGetname(p),"cast") == OK):
    return CodeCast(p);
  else if(LibeStrcmp(PtreeGetname(p), "iconstant") == OK):
    return PtreeGetdef(p);
  else if(LibeStrcmp(PtreeGetname(p), "rconstant") == OK):
    return PtreeGetdef(p);
  else if(LibeStrcmp(PtreeGetname(p), "sconstant") == OK):
    return CodeSconstant(p);
  else:
    return CodeBinexpr(p);



char [*] CodeUnexpr(struct tree p) :

  # CodeUnexpr generates code for unary expression.
 
  char [*] tmp;
  char [*] tempr;
  #tempr=CodeNewtemp(PtreeGetype(p));
  tempr=CodeMktemp();

  if(LibeStrcmp(PtreeGetname(p),"unexpr")==OK):
    if(LibeStrcmp(PtreeGetype(p),"complex")==OK):
      tmp = CodePrimexpr(PtreeMvchild(p)); 
      CodeEs(p, ";\n"); 
      CodeEs(p, tempr);
      CodeEs(p,".r");
      CodeEs(p,"= -");
      CodeEs(p,tmp);
      CodeEs(p,".r");
      CodeEs(p, ";\n"); 
      CodeEs(p, tempr);
      CodeEs(p,".i");
      CodeEs(p,"= -");
      CodeEs(p,tmp);
      CodeEs(p,".i");
      CodeEs(p, ";\n"); 
      return(tempr);
    

    else:
      tmp = CodePrimexpr(PtreeMvchild(p)); 
      CodeEs(p, PtreeGetype(p));
      CodeEs(p," ");
      CodeEs(p, tempr);
      CodeEs(p,"= -");
      CodeEs(p,tmp);
      CodeEs(p, ";\n"); 
      return(tempr);
    

  

  else:
    return(CodePrimexpr(p));



char  [*] CodeAddexpr(struct tree p, char [*] lval, char [*] rval) :

  #CodeAddexpr generate code for add expression.
 
  char [*] type,tempr;
  char [*] opr;

  type = PtreeGetype(p);
  #tempr = CodeNewtemp(type);
  tempr = CodeMktemp();
  opr  = PtreeGetdef(p);
  if(LibeStrcmp(type, "complex") == OK):
    if((LibeStrcmp(opr, "+") == OK)|| \
      (LibeStrcmp(opr, "-") == OK)):
       CodeEs(p,type); CodeEs(p," ");
       CodeEs(p, tempr); 
       CodeEs(p, ".r");
       CodeEs(p, " = ");
       CodeEs(p, lval); CodeEs(p, ".r"); CodeEs(p, " "); 
       CodeEs(p, PtreeGetdef(p)); CodeEs(p, " ");
       CodeEs(p, rval); CodeEs(p, ".r"); CodeEs(p, ";\n");
       CodeEs(p,type); CodeEs(p," ");
       CodeEs(p, tempr); 
       CodeEs(p, ".i");
       CodeEs(p, " = ");
       CodeEs(p, lval); CodeEs(p, ".i"); CodeEs(p, " "); 
       CodeEs(p, PtreeGetdef(p)); CodeEs(p, " ");
       CodeEs(p, rval); CodeEs(p, ".i"); CodeEs(p,";\n");
    

    else if(LibeStrcmp(opr, "*") == OK):
      CodeEs(p,type); CodeEs(p," ");
      CodeEs(p, tempr); 
      CodeEs(p, ".r");
      CodeEs(p, " = ");
      CodeEs(p, lval); CodeEs(p, ".r"); CodeEs(p, "*"); 
      CodeEs(p, rval); CodeEs(p, ".r");
      CodeEs(p, "-");
      CodeEs(p, lval); CodeEs(p, ".i"); CodeEs(p, "*"); 
      CodeEs(p, rval); CodeEs(p, ".i");CodeEs(p,";\n");
      CodeEs(p,type); CodeEs(p," ");
      CodeEs(p, tempr); 
      CodeEs(p, ".i");
      CodeEs(p," = ");
      CodeEs(p, lval); CodeEs(p, ".i"); CodeEs(p, "*"); 
      CodeEs(p, rval); CodeEs(p, ".r");
      CodeEs(p, "+");
      CodeEs(p, lval); CodeEs(p, ".r"); 
      CodeEs(p, "*"); CodeEs(p, rval); CodeEs(p, ".i");
      CodeEs(p, ";\n");
    

    else if(LibeStrcmp(opr, "/") == OK):
      CodeEs(p,type); CodeEs(p," ");
      CodeEs(p, tempr); 
      CodeEs(p, ".r");
      CodeEs(p, " = ");CodeEs(p, "(");
      CodeEs(p, lval); CodeEs(p, ".r"); CodeEs(p,"*"); 
      CodeEs(p, rval); CodeEs(p,".r");
      CodeEs(p,"+");
      CodeEs(p, lval); CodeEs(p, ".i"); CodeEs(p, "*"); 
      CodeEs(p, rval); CodeEs(p, ".i");
      CodeEs(p, ")/(");
      CodeEs(p, rval); CodeEs(p, ".r"); CodeEs(p, "*"); 
      CodeEs(p, rval); CodeEs(p, ".r");
      CodeEs(p, "+");
      CodeEs(p, rval); CodeEs(p, ".i"); CodeEs(p, "*"); 
      CodeEs(p, rval); CodeEs(p, ".i");
      CodeEs(p, ");\n");
      CodeEs(p,type); CodeEs(p," ");
      CodeEs(p, tempr); 
      CodeEs(p, ".i");
      CodeEs(p, " = ");CodeEs(p, "(");
      CodeEs(p, lval); CodeEs(p, ".i"); CodeEs(p, "*"); 
      CodeEs(p, rval); CodeEs(p, ".r");
      CodeEs(p, "-");
      CodeEs(p, lval); CodeEs(p, ".r"); CodeEs(p, "*"); 
      CodeEs(p, rval); CodeEs(p, ".i");
      CodeEs(p, ")/(");
      CodeEs(p, rval); CodeEs(p, ".r"); CodeEs(p, "*"); 
      CodeEs(p, rval); CodeEs(p, ".r");
      CodeEs(p, "+");
      CodeEs(p, rval); CodeEs(p, ".i"); CodeEs(p, "*"); 
      CodeEs(p, rval); CodeEs(p, ".i");
      CodeEs(p, ");\n");
    

  

  else:
    CodeEs(p,type); CodeEs(p," ");
    CodeEs(p, tempr); CodeEs(p, " = ");
    CodeEs(p, lval); CodeEs(p, " "); CodeEs(p, PtreeGetdef(p)); 
    CodeEs(p, " ");
    CodeEs(p, rval); CodeEs(p, ";\n");
  

  return (tempr);




char [*] CodeBinexpr(struct tree p) :

  #CodeBinexpr generate code for binary expression.
 
  char [*] lval, rval, tempr, tempi, type;
  struct tree np,sp;

  if(LibeStrcmp(PtreeGetname(p), "binexpr") == OK):
    type=PtreeGetype(p);
    #tempr = CodeNewtemp(type);
    tempr = CodeMktemp();
    #tempi = CodeNewtemp(type);
    tempi = CodeMktemp();
    np = PtreeMvchild(p);
    lval = CodeUnexpr(np); 
    rval = CodeUnexpr(PtreeMvsister(np));
    if((LibeStrcmp(PtreeGetdef(p),"+") == OK) || \
      (LibeStrcmp(PtreeGetdef(p),"-") == OK) ||  \
      (LibeStrcmp(PtreeGetdef(p),"*") == OK) || \
      (LibeStrcmp(PtreeGetdef(p),"/") == OK)):
      return (CodeAddexpr(p, lval, rval));
    

    else if(LibeStrcmp(PtreeGetdef(p), "=") == OK):
      if((LibeStrcmp(PtreeGetype(p), "complex") == OK) && \
         (LibeStrcmp(PtreeGetref(p), "aref") == ERR) &&  \
         (LibeStrcmp(PtreeGetref(p),"sref")  == ERR)):
        CodeEs(p,lval); CodeEs(p, ".r "); 
        CodeEs(p, "="); 
        CodeEs(p, rval); CodeEs(p, ".r");   
        CodeEs(p, ";\n");
        CodeEs(p, lval); CodeEs(p, ".i"); 
        CodeEs(p, "="); 
        CodeEs(p, rval); CodeEs(p, ".i"); 
        CodeEs(p, ";\n");
        return(lval);
      

      else if(LibeStrcmp(PtreeGetref(np),"aref")==OK):
        if((LibeStrcmp(PtreeGetname(PtreeMvsister(np)),"iconstant")) && \
           (LibeStrcmp(PtreeGetdef(PtreeMvsister(np)),"0"))):
          CodeEs(p, lval); 
          CodeEs(p, "=("); CodeEs(p, rval); 
          CodeEs(p, ");\n");
          return (lval);
        

        else:
          CodeEs(p, lval); 
          CodeEs(p, "="); CodeEs(p, rval); 
          CodeEs(p, ";\n");
          return(lval);
        

      

      else:
        CodeEs(p, lval); CodeEs(p, " "); 
        CodeEs(p, "="); CodeEs(p, rval); 
        CodeEs(p, ";\n");
        return (lval);
      

    

    else if((LibeStrcmp(PtreeGetdef(p), "==") == OK) || \
            (LibeStrcmp(PtreeGetdef(p), "!=") == OK)):
      if(LibeStrcmp(PtreeGetref(np),"aref")==OK):
        sp =np;
        if((LibeStrcmp(PtreeGetname(PtreeMvsister(np)),"iconstant")) && \
           (LibeStrcmp(PtreeGetdef(PtreeMvsister(np)),"0"))):
          CodeEs(p,"nctemp");
          CodeEs(p,PtreeGetype(sp));
          CodeEd(PtreeGetrank(sp));
          CodeEs(p," *");
          CodeEs(p, tempi); 
          CodeEs(p, " ="); CodeEs(p, lval); 
          CodeEs(p, ";\n");
          CodeEs(p, type); CodeEs(p," ");
          CodeEs(p, tempr); 
          CodeEs(p, " =("); 
          CodeEs(p, tempi); 
          CodeEs(p, PtreeGetdef(p)); 
          CodeEs(p, rval); 
          CodeEs(p, ");\n");
          return (tempr);
        

        else:
          CodeEs(p, type); CodeEs(p," ");
          CodeEs(p, tempr); CodeEs(p, " = (");
          CodeEs(p, lval); 
          CodeEs(p, PtreeGetdef(p)); CodeEs(p, rval); 
          CodeEs(p, ");\n");
          return (lval);
        

      

      else:
        CodeEs(p, type); CodeEs(p," ");
        CodeEs(p, tempr); CodeEs(p, " = (");
        CodeEs(p, lval); CodeEs(p, " "); 
        CodeEs(p, PtreeGetdef(p)); CodeEs(p, rval); 
        CodeEs(p, ");\n");
        return (tempr);
      

    

    else:
      CodeEs(p, type); CodeEs(p, " ");
      CodeEs(p, tempr); CodeEs(p, " = (");
      CodeEs(p, lval); CodeEs(p, " ");
      CodeEs(p, PtreeGetdef(p)); 
      CodeEs(p, " ");
      CodeEs(p, rval); CodeEs(p, ");\n");
      return (tempr);
    

  

  else:
    return CodeUnexpr(p);
        



char [*] CodeExpr(struct tree p) :

  # CodeExpr generates code for expressions.
 
  struct tree sp;
  char [*] rval;
  sp = PtreeMvchild(p);
  rval = CodeBinexpr(sp);
  return(rval);

 


int CodeWhilestmnt(struct tree p) :

  # CodeWhilestmnt generates code for while statement.
 
  char [*] cond,tmp,cond2;
  struct tree sp;

  p = PtreeMvchild(p);
  sp = p;
  cond = CodeExpr(sp);
  tmp = CodeMktemp();
  CodeEs(p,PtreeGetype(sp));
  CodeEs(p," ");
  CodeEs(p,tmp);
  CodeEs(p,"=");
  CodeEs(p,cond);
  CodeEs(p,";\n");
  CodeEs(p, "while("); 
  CodeEs(p, tmp); 
  CodeEs(p, ")\n");
  CodeEs(p, "{");
  p = PtreeMvsister(p);
  CodeStmnt(p);
  cond2=CodeExpr(sp);
  CodeEs(p,tmp);
  CodeEs(p,"=" );
  CodeEs(p,cond2);
  CodeEs(p,";");
  CodeEs(p, "}");
  return(OK);

 

int CodeForstmnt(struct tree p) :

  # CodeForstmnt generates code for "for" statement.
 
  struct tree sp;
  struct tree np;
  char [*] cond, tmp;
   
  p = PtreeMvchild(p);
  CodeExpr(p);
  p = PtreeMvsister(p);
  np = p;
  cond = CodeExpr(p);
  CodeEs(p, "while("); 
  CodeEs(p, cond); 
  CodeEs(p, "){\n");
  p = PtreeMvsister(p);
  sp = p;
  p = PtreeMvsister(p);
  CodeStmnt(p);
  CodeExpr(sp);
  tmp = CodeExpr(np);
  CodeEs(p,cond);
  CodeEs(p,"=");
  CodeEs(p,tmp);
  CodeEs(p,";\n");
  CodeEs(p, "}\n");

  return(OK);

 

int CodeParallelfor(struct tree p , int level, int rank) :

  # CodeParallelfor generates code for the cpu parallel for loop.

  struct tree sp,rp,qp,rrp;
  char[*] index,init,cond;

  sp=p;  # Save the current node
  level=level+1;

  # End of tree
  if(p==NULL):
    return(OK);
  

  p=PtreeMvsister(p);           # Next node until end of tree
  CodeParallelfor(p , level, rank);  

  rp = PtreeMvchild(sp);        # Move to inital expr of slice  
  qp = PtreeMvchild(rp);        # Move to binary expression
  qp = PtreeMvchild(qp);        # Move to index variable      
  index = PtreeGetdef(qp);      # Get index variable
  init  = CodeBinexpr(PtreeMvsister(qp)); #Find the inital expression end condition
  rrp=PtreeMvsister(rp);        # Find 
  cond=CodeExpr(rrp);           # Get 
  if(level == rank):
    CodeEs(p, "\n #pragma omp parallel for\n");  # Emit OMP pragma
  

  CodeEs(rp,"for(");            # Emit inital part of for 
  CodeEs(rp,index);             # Emit index variable
  CodeEs(rp,"=");               
  CodeEs(rp,init);              # Emit inital expression
  CodeEs(rp,";");
  rp = PtreeMvsister(rp);            # Move to second part of slice 
  CodeEs(rp,index); CodeEs(rp,"<");  # Emit condition           
  CodeEs(p,cond);
  CodeEs(rp,";");                    # End of second part of slice  
  if((rp=PtreeMvsister(rp))!= NULL): # Emit increment expression    
    CodeEs(rp,index); CodeEs(rp,"=");    
    CodeEs(rp,index); CodeEs(rp,"+"); 
    CodeExpr(rp); 
  

  else:
    CodeEs(rp,index); CodeEs(rp,"=");    
    CodeEs(rp,index); CodeEs(rp,"+"); 
    CodeEs(rp,"1");
  

  CodeEs(rp,"){");
  return(OK);



int CodeParallelstmntgpu(struct tree p) :

  # CodeParallelstmtgpu generates gpu code for the
  # parallelstmnt.

  char [*] pno,n1,n2,n3,nmax;
  char [*] m1,m2,m3;
  char [*] indx1, indx2;
  struct tree ix,sp,q,ps,psliceseq;
  int rank;
  char[*] tmp;

  CodeSetparallel(OK);
  sp = p;                           # Save top parallel node        
  pno="nctempno";                   # Set processor no name         
  rank = PtreeGetrank(p);           # Get no of slices              
  p = PtreeMvchild(p);              # Move to sliceseq              
  psliceseq = p;                    # Save pointer to slice seq                     
# nmax = CodeNewtemp(PtreeGetype(p));# Save temporary               
  nmax = CodeMktemp();              # Save temporary               

  # First rank   
  p = PtreeMvchild(psliceseq);      # Move to first slice  
  ps = p;                           # Save pointer to first slice  
  n1 = CodeNewtemp("int");          # Get temporary    
  m1 = CodeNewtemp("int");          # Get temporary    
  q = PtreeMvchild(p);              # Move to 1st expr         
  q = PtreeMvchild(q);              # Move to binary expr  
  q = PtreeMvchild(q);              # Move to loop index   
  ix = q;
  q = PtreeMvsister(q);             # Move to lower limit   
  tmp=CodeUnexpr(q);                # Create code for unary expression      
  CodeEs(p,"int ");                 # Emit type for low limit temp       
  CodeEs(p,m1);                     # Emit name for low limit           
  CodeEs(p,"=");                    # Emit assignment                         
  CodeEs(p,tmp);                    # Emit low limit                    
  CodeEs(p,";\n");               
  indx1 = PtreeGetdef(ix);          # Get the first loop index          

  q = PtreeMvchild(ps);             # Move to 1st expr                  
  q = PtreeMvsister(q);             # Move to 2nd expr                   
  n1 = CodeNewtemp(PtreeGetype(ps));# Get temporary                     
  tmp=CodeExpr(q);                  # Emit expression    for upper limit  
  CodeEs(q,"int ");                 # Emit type for upper limit           
  CodeEs(q,n1);                     # Emit name for upper limit           
  CodeEs(q,"=");
  CodeEs(q,tmp);
  CodeEs(q,";\n");

  if(rank > 1):
    p = PtreeMvchild(psliceseq);      # Move to first slice           
    p = PtreeMvsister(p);             # Move to second slice          
    ps = p;                           # Save pointer to second slice  
    n2 = CodeNewtemp("int");          # Get temporary                 
    m2 = CodeNewtemp("int");          # Get temporary                 
    q = PtreeMvchild(p);              # Move to 1st expr              
    q = PtreeMvchild(q);              # Move to binary expr           
    q = PtreeMvchild(q);              # Move to loop index            
    ix = q;
    q = PtreeMvsister(q);             # Move to lower limit   
    tmp=CodeUnexpr(q);                # Create code for unary expression      
    CodeEs(p,"int ");                 # Emit type for low limit temp       
    CodeEs(p,m2);                     # Emit name for low limit           
    CodeEs(p,"=");                    # Emit assignment                         
    CodeEs(p,tmp);                    # Emit low limit                    
    CodeEs(p,";\n");               
    indx2 = PtreeGetdef(ix);          # Get the first loop index          
    q = PtreeMvchild(ps);             # Move to 1st expr                  
    q = PtreeMvsister(q);             # Move to 2nd expr                   
    n2 = CodeNewtemp(PtreeGetype(ps));# Get temporary                     
    tmp=CodeExpr(q);                  # Emit expression    for upper limit  
    CodeEs(q,"int ");                 # Emit type for upper limit           
    CodeEs(q,n2);                     # Emit name for upper limit           
    CodeEs(q,"=");
    CodeEs(q,tmp);
    CodeEs(q,";\n");
  

  if(rank > 2):
    p = PtreeMvchild(psliceseq);      # Move to first slice           
    p = PtreeMvsister(p);             # Move to second slice          
    p = PtreeMvsister(p);             # Move to third  slice          
    ps = p;                           # Save pointer to third  slice  
    n3 = CodeNewtemp("int");          # Get temporary                 
    m3 = CodeNewtemp("int");          # Get temporary                 
    q = PtreeMvchild(p);              # Move to 1st expr              
    q = PtreeMvchild(q);              # Move to binary expr           
    q = PtreeMvchild(q);              # Move to loop index            
    ix = q;
    q = PtreeMvsister(q);             # Move to lower limit   
    tmp=CodeUnexpr(q);                # Create code for unary expression      
    CodeEs(p,"int ");                 # Emit type for low limit temp       
    CodeEs(p,m3);                     # Emit name for low limit           
    CodeEs(p,"=");                    # Emit assignment                         
    CodeEs(p,tmp);                    # Emit low limit                    
    CodeEs(p,";\n");               
    indx2 = PtreeGetdef(ix);          # Get the first loop index          
    q = PtreeMvchild(ps);             # Move to 1st expr                  
    q = PtreeMvsister(q);             # Move to 2nd expr                   
    n3 = CodeNewtemp(PtreeGetype(ps));# Get temporary                     
    tmp=CodeExpr(q);                  # Emit expression    for upper limit  
    CodeEs(q,"int ");                 # Emit type for upper limit           
    CodeEs(q,n3);                     # Emit name for upper limit           
    CodeEs(q,"=");
    CodeEs(q,tmp);
    CodeEs(q,";\n");
  

   
  p=sp;

  # Calculate upper index limit  
  if(rank == 1):
    CodeEs(p,"int ");
    CodeEs(p,nmax); CodeEs(p,"="); CodeEs(p,n1); 
    CodeEs(p,"-"); CodeEs(p,m1); 
    CodeEs(p,";\n");
   

  if(rank == 2):
    CodeEs(p, "int ");
    CodeEs(p,nmax); CodeEs(p,"="); CodeEs(p,"("); CodeEs(p,n1); CodeEs(p,"-");
    CodeEs(p,m1); CodeEs(p,")"); 
    CodeEs(p,"*"); 
    CodeEs(p,"("); CodeEs(p,n2); CodeEs(p,"-");
    CodeEs(p,m2); CodeEs(p,");\n"); 
   

  else if(rank == 3):
    p=sp;
    CodeEs(p,nmax); CodeEs(p,"="); CodeEs(p,n1); CodeEs(p,"*");                  \
                                 CodeEs(p,n2); CodeEs(p,"*"); CodeEs(p,n3);      \
                                 CodeEs(p,";\n");
   


  # Emit for loop  
  CodeEs(p,"for("); CodeEs(p, "int "); CodeEs(p,pno); CodeEs(p,"=blockIdx.x*blockDim.x + threadIdx.x; ");
  CodeEs(p,pno); CodeEs(p, "<"); CodeEs(p,nmax); CodeEs(p,";"); CodeEs(p,pno); 
  CodeEs(p,"+=blockDim.x*gridDim.x");
  CodeEs(p,"){\n"); 
  
  # Map loop indices    

  if(rank == 1):
    CodeEs(p,indx1); CodeEs(p,"="); CodeEs(p,m1); CodeEs(p,"+"); CodeEs(p,"nctempno;\n");  
  

  if(rank == 2):
    CodeEs(p,indx2); CodeEs(p,"="); CodeEs(p,m2); CodeEs(p,"+"); CodeEs(p,"nctempno"); CodeEs(p,"/("); 
    CodeEs(p,n1); CodeEs(p,"-"); CodeEs(p,m1); CodeEs(p,")");
    CodeEs(p,";\n");
    CodeEs(p,indx1); CodeEs(p,"="); CodeEs(p,m1); CodeEs(p,"+"); CodeEs(p,"nctempno"); 
    CodeEs(p,"%("); 
    CodeEs(p,n1); CodeEs(p,"-"); CodeEs(p,m1); CodeEs(p,")");
    CodeEs(p,";\n");
  

  if(rank == 3):
    CodeEs(p,indx2); CodeEs(p,"="); CodeEs(p,m2); CodeEs(p,"+"); CodeEs(p,"nctempno"); CodeEs(p,"/("); 
    CodeEs(p,n1); CodeEs(p,"-"); CodeEs(p,m1); CodeEs(p,")");
    CodeEs(p,";\n");
    CodeEs(p,indx1); CodeEs(p,"="); CodeEs(p,m1); CodeEs(p,"+"); CodeEs(p,"nctempno"); 
    CodeEs(p,"%("); 
    CodeEs(p,n1); CodeEs(p,"-"); CodeEs(p,m1); CodeEs(p,")");
    CodeEs(p,";\n");
  


  p=PtreeMvchild(sp);
  p=PtreeMvsister(p);
  CodeCompstmnt(p);
  CodeEs(p,"}\n");
  CodeSetparallel(ERR);
  return(OK);

 

int CodeParallelstmntcpu(struct tree p):

  # CodeParallelstmntcpu  generates code for the cpu parallel statement

  struct tree sp;
  int rank;
  int i;

  sp = p;                           # Save top node     
  rank = PtreeGetrank(sp);          # Get no of slices  
  p = PtreeMvchild(p);              # Move to sliceseq  
  p = PtreeMvchild(p);              # Move to first slice     

  # Generate the loop code
  CodeParallelfor(p,0,rank);
  # Emit body of loop
  sp = PtreeMvchild(sp);
  sp = PtreeMvsister(sp);
  CodeStmnt(sp); 
  for(i=0;i<rank;i=i+1):
    CodeEs(sp,"}");
  

  return(OK);

 

int CodeParallelstmnt(struct tree p):

  # CodeParallelstmnt generates code for the parallel
  # statement

  if(CodeGetarch() == CPU):
    CodeParallelstmntcpu(p);
  

  else if(CodeGetarch() == CUDA):
    CodeParallelstmntgpu(p);
  

  else if(CodeGetarch() == HIP):
    CodeParallelstmntgpu(p);
  

  return(OK);

 

int CodeIfstmnt(struct tree p) :

  # CodeIfstmnt generates code for if statement.
 
  char [*] cond;

  p = PtreeMvchild(p);
  cond = CodeExpr(p);
  CodeEs(p, "if("); 
  CodeEs(p, cond); 
  CodeEs(p, ")\n");
  p = PtreeMvsister(p);
  CodeStmnt(p);

  if((p = PtreeMvsister(p)) != NULL):
    if(LibeStrcmp(PtreeGetname(p), "else") == OK):
      p = PtreeMvchild(p);
      CodeEs(p, "else"); 
      CodeStmnt(p);
    

  

  return(OK);

 

int CodeReturnstmnt(struct tree p) :

  # CodeReturnstmnt  generates code for return statement.
 
  struct tree np;
  char [*] rval;

  np = PtreeMvchild(p);
  rval = CodeExpr(np);
  CodeEs(np, "return "); 
  CodeEs(np, rval); 
  CodeEs(np, ";\n");
  return(OK);

 

int CodeCompstmnt(struct tree p) :

  #CodeCompstmnt generates code for compound statement.  
 
  struct tree sp,q;
  
  sp = p;

  # Emit leading left brace  

  CodeEs(p, "{\n");

  # Emit declarations        

  p = PtreeMvchild(p);    

  #Return if compstmnt is empty
  if(p == NULL):
    CodeEs(sp, "}\n");
    return(OK);
  


  CodeDeclarations(p,SymGetltp());
  if(LibeStrcmp(PtreeGetname(p), "declarations") == OK):
    p = PtreeMvsister(p);
  


  #Main loop over all statements in this compound statement    

  while(p != NULL):

  #  Emit expression or "while" or "for" or "if" or "return"
  #  statements    
   
    if(LibeStrcmp(PtreeGetname(p),"expr") == OK):
        CodeExpr(p);
    

    if(LibeStrcmp(PtreeGetname(p),"while") == OK):
        CodeWhilestmnt(p);
    

    if(LibeStrcmp(PtreeGetname(p),"for") == OK):
      q=PtreeMvchild(p);
      PtreeMvsister(q);
      CodeForstmnt(p);
    

    if(LibeStrcmp(PtreeGetname(p),"parallel") == OK):
        CodeParallelstmnt(p);
    

    if(LibeStrcmp(PtreeGetname(p),"if") == OK):
        CodeIfstmnt(p);
    

    if(LibeStrcmp(PtreeGetname(p),"return") == OK):
        CodeReturnstmnt(p);
    

    p = PtreeMvsister(p);
  

  # Emit trailing right brace  

  CodeEs(sp, "}\n");
  return(OK);
 
 

int CodeStmnt(struct tree p) :

  # CodeStmnt generates code for statement.  
 
  struct tree sp;

  sp = p;

  # Emit leading left brace  

  CodeEs(p, "{\n");

  # Emit declarations        

  if(LibeStrcmp(PtreeGetname(p),"compstmnt")==OK):
    p = PtreeMvchild(p);    
    CodeDeclarations(p,SymGetltp());
    if(LibeStrcmp(PtreeGetname(p), "declarations") == OK):
      p = PtreeMvsister(p);
    

  


  #Main loop over all statements in this compound statement    

  while(p != NULL):

  #  Emit expression or "while" or "for" or "if" or "return"
  #  statements    
   
    if(LibeStrcmp(PtreeGetname(p),"compstmnt") == OK):
      CodeCompstmnt(p);

    if(LibeStrcmp(PtreeGetname(p),"expr") == OK):
        CodeExpr(p);
    

    if(LibeStrcmp(PtreeGetname(p),"while") == OK):
        CodeWhilestmnt(p);
    

    if(LibeStrcmp(PtreeGetname(p),"for") == OK):
        CodeForstmnt(p);
    

    if(LibeStrcmp(PtreeGetname(p),"parallel") == OK):
        CodeParallelstmnt(p);
    

    if(LibeStrcmp(PtreeGetname(p),"if") == OK):
        CodeIfstmnt(p);
    

    if(LibeStrcmp(PtreeGetname(p),"return") == OK):
        CodeReturnstmnt(p);
    

    p = PtreeMvsister(p);
  

  # Emit trailing right brace  

  CodeEs(sp, "}\n");

  return(OK);

 

int CodeNewdescr(struct tree p, char[*] pointer) :

  # CodeNewdescr generate code for array descriptor.
 
  CodeEs(p, pointer);
  CodeEs(p, "=");
  CodeEs(p, "RunMalloc(");
  CodeEs(p, "sizeof(");
  CodeEs(p, pointer);
  CodeEs(p, "));\n");
  return(OK);



# Cpu code generation 
# The code below performs code generation for single/multicore cpu's.

int CodeFdef(struct tree p):

  #CodeFdef generates code for a function.

  if(CodeGetarch() == CPU):
    CodeFdefcpu(p);
  

  else if(CodeGetarch() == CUDA):
    if(LibeStrcmp(PtreeGetparallel(PtreeMvchild(p)),"parallel")==OK):
      CodeFdefgpu(p);
      CodeFdewrappergpu(p);
    

    else:
      CodeFdefcpu(p);
    

  

  else if(CodeGetarch() == HIP):
    if(LibeStrcmp(PtreeGetparallel(p),"parallel")==OK):
      CodeFdefgpu(p);
      CodeFdewrappergpu(p);
    

    else:
     CodeFdefcpu(p);
    

  

  return(OK);



int CodePreamblecpu() :

  # CodePreamblecpu() emits declarations needed for each compilation unit
  # for the cpu architecture

  struct tree p;

  p = PtreeMknode("dummy", "dummy");

  PtreeSetline(p,1);
  CodeEs(p, "//  Translated by epsc  version today  \n");
  PtreeSetline(p,2);
  PtreeSetline(p,3);
  PtreeSetline(p,4);
  CodeEs(p, \
    "#include <stddef.h>\n");
  CodeEs(p, \
    "#include <stdio.h>\n");
  CodeEs(p, \
    "#include <assert.h>\n");
  CodeEs(p, \
    "typedef struct { float r; float i;} complex; \n");
  PtreeSetline(p,3);
  CodeEs(p, \
    "typedef struct nctempfloat1 { int d[1]; float *a;} nctempfloat1; \n");
  PtreeSetline(p,5);
  CodeEs(p, \
    "typedef struct nctempint1 { int d[1]; int *a;} nctempint1; \n");
  PtreeSetline(p,7);
  CodeEs(p, \
    "typedef struct nctempchar1 { int d[1]; char *a;} nctempchar1; \n");
  PtreeSetline(p,7);
  CodeEs(p, \
    "typedef struct nctempcomplex1 { int d[1]; complex *a;} nctempcomplex1; \n");
  PtreeSetline(p,8);

  if(CodeArraycheck() == OK):
    CodeEs(p, \
    "static struct nctempchar1 nctempstringx = {0, NULL};\n");
    CodeEs(p, \
    "static struct nctempchar1 *nctempstring = &nctempstringx;\n");
    PtreeSetline(p,8);
  

  CodeEs(p, \
    "typedef struct nctempfloat2 { int d[2]; float *a;} nctempfloat2; \n");
  PtreeSetline(p,10);
  CodeEs(p, \
    "typedef struct nctempint2 { int d[2]; int *a;} nctempint2; \n");
  PtreeSetline(p,10);
  CodeEs(p, \
    "typedef struct nctempchar2 { int d[2]; char *a;} nctempchar2; \n");
  PtreeSetline(p,12);
  CodeEs(p,\
    "typedef struct nctempcomplex2 { int d[2]; complex *a;} nctempcomplex2; \n");

  PtreeSetline(p,13);
  CodeEs(p,\
    "typedef struct nctempfloat3 { int d[3]; float *a;} nctempfloat3; \n");
  PtreeSetline(p,14);
  CodeEs(p, \
    "typedef struct nctempint3 { int d[3]; int *a;} nctempint3; \n");
  PtreeSetline(p,15);
  CodeEs(p, \
    "typedef struct nctempchar3 { int d[3]; char *a;} nctempchar3; \n");
  PtreeSetline(p,16);
  CodeEs(p, \
    "typedef struct nctempcomplex3 { int d[3]; complex *a;} nctempcomplex3; \n");

  PtreeSetline(p,17);
  CodeEs(p, \
    "typedef struct nctempfloat4 { int d[4]; float *a;} nctempfloat4; \n");
  PtreeSetline(p,18);
  CodeEs(p, \
    "typedef struct nctempint4 { int d[4]; int *a;} nctempint4; \n");
  PtreeSetline(p,19);
  CodeEs(p,\
    "typedef struct nctempchar4 { int d[4]; char *a;} nctempchar4; \n");
  PtreeSetline(p,20);
  CodeEs(p, \
    "typedef struct nctempcomplex4 { int d[4]; complex *a;} nctempcomplex4; \n");
  CodeEs(p, \
    "#include <stdlib.h>\n");
  CodeEs(p, \
    "#include <string.h>\n");
  CodeEs(p,\
    "void *RunMalloc(int n); \n");
  CodeEs(p, \
    "int RunFree(void *n); \n");

  return (OK);


int CodePreamblecuda() :

  # CodePreamblecuda generates the cuda preamble code.

  struct tree p;

  p = PtreeMknode("dummy", "dummy");

  PtreeSetline(p,1);
  CodeEs(p, "//  Translated by epsc  version December 2021  \n");
  PtreeSetline(p,2);
  PtreeSetline(p,3);

# Start of extern "C"
  CodeEs(p, "extern \"C\" {\n"); 

  CodeEs(p, \
    "typedef struct { float r; float i;} complex; \n");
  PtreeSetline(p,3);
  CodeEs(p, \
    "typedef struct nctempfloat1 { int d[1]; float *a;} nctempfloat1; \n");
  PtreeSetline(p,5);
  CodeEs(p, \
    "typedef struct nctempint1 { int d[1]; int *a;} nctempint1; \n");
  PtreeSetline(p,7);
  CodeEs(p, \
    "typedef struct nctempchar1 { int d[1]; char *a;} nctempchar1; \n");
  PtreeSetline(p,7);
  CodeEs(p, \
    "typedef struct nctempcomplex1 { int d[1]; complex *a;} nctempcomplex1; \n");
  PtreeSetline(p,8);

  if(CodeArraycheck() == OK):
    CodeEs(p, \
    "static struct nctempchar1 nctempstringx = {0, NULL};\n");
    CodeEs(p, \
    "static struct nctempchar1 *nctempstring = &nctempstringx;\n");
    PtreeSetline(p,8);

  CodeEs(p, \
    "typedef struct nctempfloat2 { int d[2]; float *a;} nctempfloat2; \n");
  PtreeSetline(p,10);
  CodeEs(p, \
    "typedef struct nctempint2 { int d[2]; int *a;} nctempint2; \n");           
  PtreeSetline(p,10);
  CodeEs(p, \
    "typedef struct nctempchar2 { int d[2]; char *a;} nctempchar2; \n");
  PtreeSetline(p,12);
  CodeEs(p, \
    "typedef struct nctempcomplex2 { int d[2]; complex *a;} nctempcomplex2; \n");

  PtreeSetline(p,13);
  CodeEs(p, \
    "typedef struct nctempfloat3 { int d[3]; float *a;} nctempfloat3; \n");
  PtreeSetline(p,14);
  CodeEs(p, \
    "typedef struct nctempint3 { int d[3]; int *a;} nctempint3; \n");
  PtreeSetline(p,15);
  CodeEs(p, \
    "typedef struct nctempchar3 { int d[3]; char *a;} nctempchar3; \n");
  PtreeSetline(p,16);
  CodeEs(p,\
    "typedef struct nctempcomplex3 { int d[3]; complex *a;} nctempcomplex3; \n");

  PtreeSetline(p,17);
  CodeEs(p,\
    "typedef struct nctempfloat4 { int d[4]; float *a;} nctempfloat4; \n");
  PtreeSetline(p,18);
  CodeEs(p, \
    "typedef struct nctempint4 { int d[4]; int *a;} nctempint4; \n");
  PtreeSetline(p,19);
  CodeEs(p, \
    "typedef struct nctempchar4 { int d[4]; char *a;} nctempchar4; \n");
  PtreeSetline(p,20);
  CodeEs(p, \
    "typedef struct nctempcomplex4 { int d[4]; complex *a;} nctempcomplex4; \n");
  CodeEs(p, \
   "#include <stdio.h>\n");
#  CodeEs(p, "extern \"C\" {\n"); 
  CodeEs(p, \
    "#include <stdlib.h>\n");
  CodeEs(p, \
    "#include <string.h>\n");
  CodeEs(p, \
    "#include <assert.h>\n");
#  CodeEs(p,"}\n");

  CodeEs(p,"\n");
  CodeEs(p, \
    "void *GpuNew(int n);\n");
  CodeEs(p, \
    "void *GpuDelete(void *f);\n");
  CodeEs(p, \
    "void *GpuError();\n");

  CodeEs(p,\
    "void *RunMalloc(int n);\n");
  CodeEs(p,\
    "int RunFree(void * );\n");
  CodeEs(p, \
    "int RunSync();\n");

  CodeEs(p, \
    "int RunGetnt();\n");
  CodeEs(p, \
    "int RunGetnb();\n");


  return (OK);


int CodePreamblehip() :

  # CodePreamble generates the hip preamble.

  struct tree p;

  p = PtreeMknode("dummy", "dummy");

  PtreeSetline(p,1);
  CodeEs(p, "//  Translated by epsc  version December 2021  \n");
  PtreeSetline(p,2);
  PtreeSetline(p,3);
  CodeEs(p, \
    "typedef struct { float r; float i;} complex; \n");
  PtreeSetline(p,3);
  CodeEs(p, \
    "typedef struct nctempfloat1 { int d[1]; float *a;} nctempfloat1; \n");
  PtreeSetline(p,5);
  CodeEs(p, \
    "typedef struct nctempint1 { int d[1]; int *a;} nctempint1; \n");
  PtreeSetline(p,7);
  CodeEs(p,\
    "typedef struct nctempchar1 { int d[1]; char *a;} nctempchar1; \n");
  PtreeSetline(p,7);
  CodeEs(p, \
    "typedef struct nctempcomplex1 { int d[1]; complex *a;} nctempcomplex1; \n");
  PtreeSetline(p,8);

  if(CodeArraycheck() == OK):
    CodeEs(p,  \
    "static struct nctempchar1 nctempstring = {0, NULL};\n");
    PtreeSetline(p,8);
  

  CodeEs(p,\
    "typedef struct nctempfloat2 { int d[2]; float *a;} nctempfloat2; \n");
  PtreeSetline(p,10);
  CodeEs(p, \
    "typedef struct nctempint2 { int d[2]; int *a;} nctempint2; \n");
  PtreeSetline(p,10);
  CodeEs(p, \
    "typedef struct nctempchar2 { int d[2]; char *a;} nctempchar2; \n");
  PtreeSetline(p,12);
  CodeEs(p,\
    "typedef struct nctempcomplex2 { int d[2]; complex *a;} nctempcomplex2; \n");

  PtreeSetline(p,13);
  CodeEs(p, \
    "typedef struct nctempfloat3 { int d[3]; float *a;} nctempfloat3; \n");
  PtreeSetline(p,14);
  CodeEs(p,\
    "typedef struct nctempint3 { int d[3]; int *a;} nctempint3; \n");
  PtreeSetline(p,15);
  CodeEs(p, \
    "typedef struct nctempchar3 { int d[3]; char *a;} nctempchar3; \n");
  PtreeSetline(p,16);
  CodeEs(p, \
    "typedef struct nctempcomplex3 { int d[3]; complex *a;} nctempcomplex3; \n");

  PtreeSetline(p,17);
  CodeEs(p, \
    "typedef struct nctempfloat4 { int d[4]; float *a;} nctempfloat4; \n");
  PtreeSetline(p,18);
  CodeEs(p,\
    "typedef struct nctempint4 { int d[4]; int *a;} nctempint4; \n");
  PtreeSetline(p,19);
  CodeEs(p, \
    "typedef struct nctempchar4 { int d[4]; char *a;} nctempchar4; \n");
  PtreeSetline(p,20);
  CodeEs(p, \
    "typedef struct nctempcomplex4 { int d[4]; complex *a;} nctempcomplex4; \n");
  CodeEs(p, \
    "#include <stdio.h>\n");
  CodeEs(p, "extern \"C\" {\n"); 
  CodeEs(p, \
    "#include <stdlib.h>\n");
  CodeEs(p,\
    "#include <string.h>\n");
  CodeEs(p,"}\n");

  CodeEs(p,"#include \"hip/hip_runtime.h\" \n");
  CodeEs(p,"\n");
  CodeEs(p, \
    "void *GpuNew(int n);\n");
  CodeEs(p, \
    "void *GpuDelete(void *f);\n");
  CodeEs(p, \
    "void *GpuError();\n");
  CodeEs(p,\
    "void *RunMalloc(int n);\n");
  CodeEs(p, \
    "int RunFree(void *p);\n");

  return (OK);


int CodePreamble():

  # CodePreamble() emits declarations needed for each compilation unit

  if (CodeGetarch() == CPU):
    CodePreamblecpu();
    return(OK);
  else if(CodeGetarch() == CUDA):
    CodePreamblecuda();
    return(OK);
  else if(CodeGetarch() == HIP):
    CodePreamblehip();
    return(OK);
  else :
    return(ERR);
  
int CodePostamble():
  int fdo;

  # CodePostmble() emits declarations needed to avoid c++ 
  # name mangling.

  fdo = CodeGetfdout();
  if(CodeGetarch() == CUDA):
    LibePuts(fdo,"}\n");
    return(OK);
  else if(CodeGetarch() == HIP):
    LibePuts(fdo,"}\n");
    return(OK);
  else :
    return(ERR)
 
