import libe   # Library
import sym    # Include symbol table interface 
import ptree  # Include parse tree interface  
import err    # Include interface to error routines
import m      # Include architecture depent parameters
import scan   # Include Scanner 

# Forward declaration needed later
def int CodeCompstmnt(struct tree p):
  pass

def int CodeStmnt(struct tree p) :
  pass

def char [*] CodeBinexpr(struct tree p):                                      
  pass

def char [*] CodeExpr(struct tree p):
  pass

def int  CodeSexpr(struct tree p):
  pass

def int CodeSbinexpr(struct tree p):
  pass

def int CodeError(char [*] s) :
  
  # CodeError prints error messages and exits.
  ErrError(ScanGetfile(), ScanGetline(), s);
  return(OK)

# CodeBreak is a module flag for breaking up expressions
int CodeBreak

def int CodeBreakon() :

  #
  #CodeBreakon sets the code break flag to on
  #
  # Returns:
  #   returns OK  

  CodeBreak = OK
  
  return(OK)

def int CodeGetbreak() :

  #
  # CodeGetbreak returns the Break flag
  #
  # Returns:
  #   returns CodeBreak flag
  #
  
  return(CodeBreak)

def int CodeBreakoff() :

  #
  #CodeBreakoff sets the code break flag to off
  #
  # Returns:
  #   returns OK  

  CodeBreak = ERR
  
  return(OK)

# CodeArch is a module variable holding the
# architecturetype.
int CodeArch;

def int CodeSetarch(int arch):

  # CodeSetarch sets the architecture. 

  CodeArch = arch;
  return(OK);


def int CodeGetarch():

  # CodeGetarch returns the architecture. 

  return(CodeArch);

# Maximum size of arrays
const MAXRANK = 4

int CodeLine;

# Module variable to hold flag for parallel scope.  

int CodeParallel; 

def int CodeSetparallel(int flag) :

  # CodeSetparallel  sets the parallel flag.
 
  CodeParallel = flag;
  return(flag);

def int CodeGetparallel() :

  # CodeGetparallel  gets the parallel flag.
  return(CodeParallel);

int CodeAddress ;    # Global to hold temp value            

def char [*] CodeItemp(int cntrl) :

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
  if(CodeAddress > 999999): 
     CodeError("I am running out of temporaries");
  LibeItoa(CodeAddress,s1);        
  LibeStrcat(s1,s2);
  return s2;
 

def int CodeInit() :

  # CodeIcode performs c code generator initialization.
 
  CodeSetparallel(ERR)
  CodeLine=0
  CodeItemp(-1)  
  CodeBreak = ERR
  CodeSetarch(CPU)
  return (OK);


# CodeOutfd Module Variable to hold output file descriptor
int CodeFdout;

def int CodeSetfdout(int fd):

  # Set output file descriptor

  CodeFdout = fd;
  return(OK);


def int CodeGetfdout():

  # Get output file descriptor

  return(CodeFdout);


# Module variable
# Flag for debug

int CodeDebugflag ;    

def int CodeDebug():
 # CodeDebug tests for the debug flag.
 
  return(CodeDebugflag);
 

def int CodeEs(struct tree p, char [*] s) :

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
 

def int CodeEd(int d) :

  #CodeEd emits decimal.
  #No comments, really needed, the routine emits a decimal
  #number, and that's it.
 
  int fdo;
  fdo= CodeGetfdout();
  LibePuti(fdo, d);
  return(OK);
 

def int CodeEc(int d) :

  #CodeEc emits a character

  int fdo;

  fdo= CodeGetfdout();
  LibePutc(fdo, d);
  return(OK);
 

def int CodeEsr(char [*] s) :

  #CodeEsr emits a string 

  int i,l;
  int fdo;

  fdo= CodeGetfdout();

  l=LibeStrlen(s);
  for(i=1; i<l-1; i=i+1):
    LibePutc(fdo,cast(int,s[i]));

  LibeFlush(fdo);
  return(OK);
 

def int CodeIdeclaration(struct tree p, struct symbol tp) :

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
      if(LibeStrcmp(SymGetglobal(tp),"global") == OK):
        CodeEs(p,"static ") 
      CodeEs(p, "struct nctemp");
      CodeEs(p, SymGetype(tp));
      CodeEd(SymGetrank(tp));
      CodeEs(p, " *");
      CodeEs(p, SymGetname(tp)); 
    else:
      if(LibeStrcmp(SymGetglobal(tp),"global") == OK):
        CodeEs(p,"static ") 
      CodeEs(p, "struct ");
      CodeEs(p, SymGetype(tp));
      CodeEs(p, "*");
      CodeEs(p, " "); 
      CodeEs(p, SymGetname(tp)); 
  else if(LibeStrcmp(SymGetarray(tp),"array") == OK):
    if(LibeStrcmp(SymGetglobal(tp),"global") == OK):
      CodeEs(p,"static ") 
    CodeEs(p, "nctemp");
    CodeEs(p, SymGetype(tp));
    CodeEd(SymGetrank(tp));
    CodeEs(p, " *"); 
    CodeEs(p, SymGetname(tp)); 
  else:
    if(LibeStrcmp(SymGetglobal(tp),"global") == OK):
      CodeEs(p,"static ") 
    CodeEs(p, SymGetype(tp));
    CodeEs(p, " "); 
    CodeEs(p, SymGetname(tp)); 

  return(OK);


def int CodeIdeclarations(struct tree p, struct symbol tp):

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


def int CodeStructdefsym(struct tree p, struct symbol tp):

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

def int CodeFdefcpusym(struct tree  p, struct symbol tp):

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


def int CodeImport(struct tree p, struct symbol tp):

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
    tp = SymMvnext(tp);

  return(OK);

def int CodeStructdef(struct tree p, struct symbol tp): 
  pass

def int CodeFdef(struct tree p): 
  pass


def int CodeFdefcpu(struct tree p) :

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


def int CodeFdeclkernel(struct tree p) :

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



def int CodeFdefgpu(struct tree p) :

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


def int CodeFdewrappergpu(struct tree p) :

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


def int CodeGdeclarations(struct tree p, struct symbol tp) :

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


def int CodeDeclarations(struct tree p, struct symbol tp) :

  #CodeDeclarations  generates code for declaration list.
 
  struct tree np;

  if(p != NULL):
    np=PtreeMvchild(p);
  else:
    np = p;
  CodeGdeclarations(np,tp);   # Generate code               
  return (OK);


def int CodeCode(struct tree p, struct symbol tp) :

  # CodeCode is the C code generator.
  #
  # Parameters:
  #   p:  Top of parse tree
  #   tp: External symbol table

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

def int CodeArraycheck() :

  # CodeArraycheck -- test for array check

  return (CodeArraytest);


def int CodeArraycheckon() :

  #CodeArraycheckon turns on array check.
 
  CodeArraytest = OK;

  return(OK);


def int CodeArraycheckoff() :

  #CodeArraycheckoff turns off array check.
 
  CodeArraytest = ERR;

  return(OK);


def int CodeDebugon() :

  # CodeDebugon turns on the debug flag.
 
  CodeDebugflag = OK;

  return(OK);


def char [*] CodeMktemp() :

  # CodeMktemp makes temporary variable.
 
    return CodeItemp(0);


def int CodeDebugoff():

  #CodeDebugoff  turns off the debug flag.
 
  CodeDebugflag = ERR;
  return(OK);
 

def char [*] CodeNewtemp(char [*] type) : 

 # CodeNewtemp makes temporary.                            
 
  char [*] temp;
  struct symbol tp;

  temp = CodeMktemp();
  tp = SymMkname(temp,SymGetltp());
  SymSetype(tp, type);
  SymSetemit(tp,ERR);
  return(temp);


def struct symbol CodeNewsymbol(char [*] type, char [*] name) : 

  # CodeNewsymbol makes new symbol.                            
 
  struct symbol tp;

  tp = SymMkname(name,SymGetltp());
  SymSetype(tp, type);
  SymSetemit(tp,ERR);
  return(tp);


def char [*] CodeMkstring(struct tree p) :

  # CodeMkstring makes string temporaries.
 
  struct symbol sp; # Pointers to symbol tables  
  char [*] tmp; 

  tmp = CodeMktemp();
  sp = SymMkname(tmp,SymGetltp());  
  SymSetrank(sp,1);
  SymSetype(sp,"char");
  SymSetarray(sp,"array");
  return(tmp);


def char [*] CodeSconstant(struct tree p) :

  # CodeSconstant generates code for strings.  
 
  char [*] tmp,tmp2;
  int l;

  # Set the length  of the string  

  #tmp2 =CodeNewtemp("char");
  tmp2 = CodeMktemp();
  CodeEs(p, "struct nctempchar1 *");
  CodeEs(p, tmp2);
  CodeEs(p,";\n");
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


def int CodeStructdef(struct tree p, struct symbol tp) :

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


def int CodeFdeclaration(struct tree p, struct symbol tp) :

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


def int CodeWdeclaration(struct tree p) :

 # CodeWdeclaration walks declaration node  
 
  struct tree np;

  np = PtreeMvchild(p); 
  while(np != NULL): 
    if(LibeStrcmp(PtreeGetname(np), "fdef") == OK):
      CodeFdef(np); 
    np = PtreeMvsister(np);

  return(OK);
 

def int CodeWdeclarations(struct tree p) :

  # CodeWdeclarations walks the declaration list.
 
  while(p!= NULL):
    if((LibeStrcmp(PtreeGetname(p), "type")   == OK)||(LibeStrcmp(PtreeGetname(p), "struct") == OK)) :
       CodeWdeclaration(p); 
    p = PtreeMvsister(p);

  return (OK);


def int CodeArrayex(int line, char [*] qual, char [*] sel, \
                    char [*] name, char [*] ival, int index)  :

  # CodeArrayex generates code for arry exception.
  #
  # Parameters :
  # 
  #   line:  Line no
  #   qual:  Struct name
  #   sel :  Struct member
  #   name:  Array name 
  #   ival:  Index value
  #   index: rank (0,1,..)
  #
  # Code is generated for out-of-bounds check and dump of diagnostics
  #
  # The code works for both cpu and gpu, provided that printf is implemented 
  # for gpu kernels

  struct tree p;
  char [*] tmp,qname

  p = PtreeMknode("dummy", "dummy");
  PtreeSetline(p,line);

  qname = name
  if(qual != NULL) :
    tmp   = LibeStradd(qual,"->") 
    qname = LibeStradd(tmp,name)
    delete(tmp)

  # Generate code for out-of-bounds check
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

  # Generate Code for error message
  CodeEs(p,"printf(\"***Out of bounds error (file,array,line,index,rank,bound:") 
  CodeEs(p,ScanGetfile());
  CodeEs(p," ")
  CodeEs(p,qname); 
  CodeEs(p," %d %d %d %d \\n" ) 
  CodeEs(p," \" ,")
  CodeEd(line); 
  CodeEs(p,",")
  CodeEs(p,ival); 
  CodeEs(p,",")
  CodeEd(index); 
  CodeEs(p,",")
  CodeEs(p,qname); CodeEs(p,"->d["); CodeEd(index); CodeEs(p,"]-1");
  CodeEs(p,");")

  CodeEs(p,"\n}\n");
  if(qual != NULL):
    delete(qname)
  return(OK);

def char [*] CodeArray(struct tree p, char [*] qual, char [*] sel) :

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


def char [*] CodeQident(char [*] qual, char [*] ident) :

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

def char [*] CodeQident2(char [*] qual, char [*] ident) :

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


def char [*] CodeIdent(struct tree p) :

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


def char [*] CodeNew(struct tree p) :

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
  pointer = CodeMktemp();
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


def char [*] CodeDelete(struct tree p) :

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


def char [*] CodeLen(struct tree p) :

  # CodeLen generate code for the len operator.
 
  struct tree np;
  struct tree sp;
  char [*] temp;
  char [*] index;
  
  char[*] tempr;
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


def char [*] CodeCmplx(struct tree p) :

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


def char [*] CodeIm(struct tree p) :

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

def char [*] CodeRe(struct tree p) :

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

def char [*] CodeFcall(struct tree p) :

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


def char [*] CodeCast(struct tree p) :

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


def char [*] CodePrimexpr(struct tree p) :

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


def char [*] CodeUnexpr(struct tree p) :

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


def char  [*] CodeAddexpr(struct tree p, char [*] lval, char [*] rval) :

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


def char [*] CodeBinexpr(struct tree p) :

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

def int CodeDimprod(struct tree p,char [*] name,int n):

  # ComdeDimprod emit expression for product of array dimensions
  #
  # Parameters :
  #    p    : Node with linenumber set
  #    name : Array name
  #    n    : Dimension
  # Returns:
  #   return OK

  int j

  for(j=0;j<n-1;j=j+1):
    CodeEs(p,name);
    CodeEs(p,"->d[");
    CodeEd(j)
    CodeEs(p,"]");
    CodeEs(p,"*");

  return(OK)

def int CodeSarray(struct tree p, char [*] qname) :

  # CodeSarray emits code for array reference
  #
  # Parameters: 
  #   p : array identifier node
  #
  # Returns:
  #   returns OK
  #
  # If expresionlist is missing, only the array name is emmitted.
  # 
  # If an expressionlist is presen expression for array index is emitted 
  # using the formula
  # 
  # index = i0+i1*n0+i2*n0*n1+...+n0*n1..n(N-1) 
  #
  # where N is the rank (dimension) of the array, i0,i1,...,i(N-1)
  # are the indices and n0,n1...,n(N-1) are the size of each dimension.
  
  struct symbol tp      
  struct tree sp, q
  char [*] name
  int rank,i

  name = PtreeGetdef(p);
  tp=SymLook(name);
  if(tp==0) :
    CodeError(name);
  rank=SymGetrank(tp);
  sp = PtreeMvchild(p);
  if(sp==NULL):
    CodeEs(p, PtreeGetdef(p));
    return(OK);
  else if(LibeStrcmp(PtreeGetname(sp),"exprlist") == ERR): 
    CodeEs(p, PtreeGetdef(p));
    return(OK);
  p=sp;
  p=PtreeMvchild(p);

  # Emit name and adress to data storage
  CodeEs(p, name); 
  CodeEs(p, "->a"); 
  CodeEs(p, "["); 

  q=p;
  # We are now at the expression for the first index
  # Rank is the number of dimensions 
  if(qname != NULL):
    qname = LibeStradd(qname,name)
  else:
    qname = LibeStrsave(name)

  # Main loop over the number of dimensions
  for(i=0; i < rank; i=i+1):
    if(i == 0):
      CodeSexpr(q);
    else:
      #Move to next index expression
      q=PtreeMvsister(q);
      CodeEs(p,"+");
      # Emit expression for product of dimensions
      CodeDimprod(p,qname,i+1)
      #Emit code for the index expression
      CodeEs(p,"(")
      CodeSexpr(q)
      CodeEs(p,")")

  CodeEs(p, "]") 
  delete(qname)
  return(OK);

def int CodeIdstruct(struct tree p) :

  # CodeIdstruct emits code for struct identifiers
  #
  # Parameters:
  #   p : Identifier node with struct and array flags set
  #
  # Returns:
  #  Returns OK

  struct symbol tp, up, uup
  struct tree np,sp
  char [*] qname

  # Structure id consists of a qualifier and the selector
  # First generate code for the qualifier
  qname=NULL
  if(LibeStrcmp(PtreeGetarray(p),"array")==OK):
    CodeSarray(p,qname);
    np = PtreeMvchild(p);
    if(np==NULL): 
      return(OK);
    sp = PtreeMvsister(np);
    if(sp==NULL): 
      return(OK);
    CodeEs(p,".")
    qname = LibeStradd(PtreeGetdef(p),".")
  else:
    CodeEs(p, PtreeGetdef(p));
    qname = LibeStradd(PtreeGetdef(p),"->")
    sp=PtreeMvchild(p)
    if(sp == NULL):
      return(OK)
    CodeEs(p, "->");
 
  # Next generate code for the selector
   
  if(LibeStrcmp(PtreeGetarray(sp),"array")==OK):
    tp = SymGetltp();
    up = SymGetetp();
    uup = SymLook(PtreeGetdef(p));
    uup = SymLook(SymGetype(uup));
    SymSetltp(SymGetable(uup));
    CodeSarray(sp,qname);
    delete(qname)
    SymSetltp(tp);
    SymSetetp(up);
  else:
    CodeEs(p, PtreeGetdef(sp));
  return (OK)

def int CodeSident(struct tree p):

   # CodeSident emits code for simple identifier
   #
   # Parameters:
   #   p : identifier node
   #
   # Returns:
   #   returns OK
   #
   char [*] qname
     
   qname=NULL
   if(LibeStrcmp(PtreeGetstruct(p),"struct")==OK):
     CodeIdstruct(p)
   else if(LibeStrcmp(PtreeGetarray(p),"array")==OK):
     CodeSarray(p,qname);
     return(OK);
   else:
     CodeEs(p, PtreeGetdef(p));
     return(OK);
   return(OK)

def int CodeSfcall(struct tree p):

  # CodeSfcall emits code for simple function calls
  #
  # Parameters:
  #   p : Function call node
  #
  # Returns:
  #   returns OK

  struct symbol tp;
  struct tree sp;

  tp = SymLookup(PtreeGetdef(p), SymGetetp());
  sp = PtreeMvchild(p);    
  if(sp != NULL):
    if(LibeStrcmp(PtreeGetname(sp), "exprlist") == OK):
      sp = PtreeMvchild(sp);
  CodeEs(p, SymGetname(tp));
  CodeEs(p, "(");
  while(sp != NULL):
    CodeSexpr(sp);
    if((sp = PtreeMvsister(sp)) != NULL):
      CodeEs(p, ",");  
  CodeEs(p, ")");
  return(OK)


def int CodeScast(struct tree p):

  # CodeScast emits code for simple cast
  # 
  # Parameters:
  #   p : Cast node
  # 
  # Returns:
  #   returns OK

  struct tree np, sp;

  if(LibeStrcmp(PtreeGetname(p),"cast")==OK):
    np = PtreeMvchild(p);
    sp = PtreeMvsister(np);
    CodeEs(p,"(");
    if(LibeStrcmp(PtreeGetstruct(np),"struct")==OK):
      CodeEs(p,"struct ");
    CodeEs(p,PtreeGetdef(np));
    if(LibeStrcmp(PtreeGetstruct(np),"array")==OK):
      CodeEs(p,"*");
    CodeEs(p,")(");
    CodeSexpr(sp);
    CodeEs(p,")");
  return(OK);

def int CodeSprimexpr(struct tree p) :

  # CodeSprimexpr emits code for simple primary expression
  #
  # Parameters:
  #   p : Primary expression node
  #
  # Returns:
  #   returns OK
  #

  if(LibeStrcmp(PtreeGetname(p),"identifier") == OK):
    CodeSident(p);
  else if(LibeStrcmp(PtreeGetname(p),"fcall") == OK):
    CodeSfcall(p);
  else if(LibeStrcmp(PtreeGetname(p),"cast") == OK):
    CodeScast(p);
  else if(LibeStrcmp(PtreeGetname(p), "iconstant") == OK):
    CodeEs(p, PtreeGetdef(p));
  else if(LibeStrcmp(PtreeGetname(p), "sconstant") == OK):
    CodeEs(p, PtreeGetdef(p));
  else if(LibeStrcmp(PtreeGetname(p), "rconstant") == OK):
    CodeEs(p, PtreeGetdef(p));
  else:
    CodeEs(p, "(");
    CodeSbinexpr(p);
    CodeEs(p, ")");

  return(OK);

def int CodeSunexpr(struct tree p):

  # CodeSunexpr emits code for simple unary expressions
  # 
  # Parameters:
  #  p : Unary expression node
  #
  # Returns:
  #   returns OK

  if(LibeStrcmp(PtreeGetname(p),"unexpr")==OK):
    CodeEs(p," -");
    CodeSprimexpr(PtreeMvchild(p)); 
  else:
    CodeSprimexpr(p);

  return(OK);


def int CodeSbinexpr(struct tree p):

  # CodeSbinexpr generates code for simple binary expressions
  #
  # Parameters:
  #   p : Binary expression node
  #
  # Returns:
  #   returns OK

  struct tree np;

  if(LibeStrcmp(PtreeGetname(p), "binexpr") == OK):
    np = PtreeMvchild(p);
    CodeSunexpr(np); 
    if((LibeStrcmp(PtreeGetdef(p), "=") == OK) ||  \
       (LibeStrcmp(PtreeGetdef(p), "==") == OK)||  \
       (LibeStrcmp(PtreeGetdef(p), "!=") == OK)): 
      if(LibeStrcmp(PtreeGetref(np),"aref")==OK):
        if((LibeStrcmp(PtreeGetname(PtreeMvsister(np)),"iconstant")) && \
           (LibeStrcmp(PtreeGetdef(PtreeMvsister(np)),"0"))):           
           CodeEs(p, " "); 
    CodeEs(p, " "); 
    CodeEs(p,PtreeGetdef(p));
    CodeEs(p, " "); 
    CodeSunexpr(PtreeMvsister(np));
  else :
    CodeSunexpr(p);
  return(OK);
 
def int CodeSexpr(struct tree p):

  # CodeSexpr emits code for simple expression
  #
  # Parameters:
  #   p  : Expression node
  #
  # Returns: 
  #   returns OK
  #

  struct tree sp;
  sp = PtreeMvchild(p);
  CodeSbinexpr(sp);
  return(OK);

def char [*] CodeExpr(struct tree p) :

  # CodeExpr generates code for expressions.
 
  char [*] rval
  struct tree sp;

  sp = PtreeMvchild(p);
  rval = CodeBinexpr(sp);
  return(rval);


def int CodeSforstmnt(struct tree p):

  #
  # Parameters :
  #   p : forstmnt node
  #
  # Returns :
  #  Returns OK
  #

  p = PtreeMvchild(p);
  CodeEs(p,"for(");
  CodeSexpr(p);
  CodeEs(p,";");
  p = PtreeMvsister(p);
  CodeSexpr(p);
  CodeEs(p,";");
  p = PtreeMvsister(p);
  CodeSexpr(p);
  CodeEs(p,")");
  p = PtreeMvsister(p);
  CodeStmnt(p);
  return(OK);


def int CodeWhilestmnt(struct tree p) :

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
 

def int CodeForstmnt(struct tree p) :

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

def int CodeParallelfor(struct tree p , int level, int rank) :

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
  init  = CodeBinexpr(PtreeMvsister(qp)); #Find the inital expression 
                                          #end condition
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

def int CodeParallelstmntcpu(struct tree p):

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
 
def char [*] CodeParprocno( struct tree p) :

  # CodeParprocno emits code for the name of a variable containing
  # the CUDA processor no.
  #
  # Parameters:
  #   p: Slice node
  # 
  #
  # Returns :
  #   Name of variable containing the processor no.
  # 

  CodeEs(p,"int nctempno") 
  CodeEs(p,"=blockIdx.x*blockDim.x + threadIdx.x; ");

  return ("nctempno")

def char [*] CodeParidx( struct tree p) :

  # CodeParidx gets the name of the index variable for 
  # a slice
  #
  # Parameters : 
  #   p: Parse tree slice node
  #
  # Returns :
  #   Name of index variable for slice
  # 

  p = PtreeMvchild(p);              # Move to 1st expr         
  p = PtreeMvchild(p);              # Move to binary expr  
  p = PtreeMvchild(p);              # Move to loop index   

  return (PtreeGetdef(p))

def char [*] CodeParidxrank( struct tree p, int r) :

  # CodeParidxrank gets the index variable name for rank r
  #
  # Parameters : 
  #   p: First parse tree slice node of a sequence
  #   r: rank
  #
  # Returns :
  #   Name of index variable for rank r
  # 

  int i

  for(i=0; i<r-1; i=i+1) :
    p=PtreeMvsister(p)

  return(CodeParidx(p))

def char [*] CodeParllim( struct tree p) :

  # CodeParallim emits code for and gets a variable name holding
  # the lower limit of a slice 
  #
  # Parameters : 
  #   p: Parse tree slice node
  #
  # Returns :
  #   Variable name set to lower limit expression
  # 

  char [*] tmp,temp

  p = PtreeMvchild(p);              # Move to expr  
  
  tmp=CodeExpr(p)
  temp=CodeMktemp()
  CodeEs(p,"int "); CodeEs(p,temp); CodeEs(p,"=")
  CodeEs(p,tmp); CodeEs(p,";\n")
  return(temp)

def char [*] CodeParulim( struct tree p) :

  # CodeParulim emits code for and gets a variable name holding 
  # the upper limit of the slice
  #
  # Parameters : 
  #   p: Parse tree slice node
  #
  # Returns :
  #   Variable name set to upper limit expression
  # 

  p = PtreeMvchild(p);              # Move to lower limit expression
  p = PtreeMvsister(p);             # Move to upper limit expression

  return (CodeExpr(p))

def char [*] CodeParllimrank( struct tree p, int r) :

  # CodeParllimrank emits code for and gets a variable name holding the 
  # lower limit for rank no r
  #
  # Parameters : 
  #   p: First parse tree slice node in a sequence
  #   r: Rank
  #
  # Returns :
  #  Variable name set to lower limit 
  # 
  int i

  for(i=0; i<r-1; i=i+1) : 
    p=PtreeMvsister(p) 

  return(CodeParllim(p))


def char [*] CodeParulimrank( struct tree p, int r) :

  # CodeParaulimrank emits code for and gets a variable name holding the 
  # upper limit for rank no r
  #
  # Parameters : 
  #   p: Parse tree slice node
  #   r: Rank
  #
  # Returns :
  #   Variable name set to upper limit for rank r
  # 
  int i

  for(i=0; i<r-1; i=i+1) : 
    p=PtreeMvsister(p) 

  return(CodeParulim(p))

def char [*] CodeParlen( struct tree p, char[*] llim) :

  # CodeParlen emits code for and gets variable with length of array dimension
  # 
  # Parameters : 
  #   p    : Parse tree slice node
  #   llim : Name of variable holding lower limit (set on return)
  #
  # Returns :
  #   Variable set to length of array dimension
  #    
  #
  char [*] tmp1,tmp2,tmp3

  tmp1=CodeMktemp()
  tmp2=CodeParulim(p)
  tmp3=CodeParllim(p)

  # Emit expression: tmp1=tmp2-tmp3

  CodeEs(p,"int ");CodeEs(p,tmp1); CodeEs(p,"=") 
  CodeEs(p,tmp2);CodeEs(p,"-");CodeEs(p,tmp3); CodeEs(p,";\n") 

  if(LibeStrcpy(tmp3,llim) == ERR):
    CodeError("Internal error in CodeParlen\n") 

  return(tmp1)

def char [*] CodeParlenrank( struct tree p, int r, char [*] llim) :

  # CodeParlenrank emits code for and gets variables holding the 
  # length and lower limit for rank r
  #
  # Parameters : 
  #   p: Parse tree slice node
  #   r: Rank
  #   llim : Variable name for the lower limit (return)
  #
  # Returns :
  #   Variable name holding the length of rank r
  #   and variable name with lower limit
  # 
  int i
  char [*] tmp

  for(i=0; i<r-1; i=i+1) : 
    p=PtreeMvsister(p) 

  tmp=CodeParlen(p,llim)
  return(tmp) 

# Array of strings
struct charr :
  char[*] s

def char [*] CodeParnsize( struct tree p, struct charr  [*] m) :

  # CodeParnsize emits code for and gets a variables holding the 
  # total size of the computational grid
  #
  # Parameters : 
  #   p : Parse tree slice node
  #   m : Array with variables holding the length of each dimension
  #
  # Returns :
  #   Variable name holding the total size of the computational domain
  # 

  int i,r
  char [*] nsize 

  r=len(m,0)
  nsize=CodeMktemp()
  CodeEs(p,"int "); CodeEs(p, nsize); CodeEs(p,"=")
  for(i=0; i<r; i=i+1) : 
    if(i== r-1):
      CodeEs(p,m[i].s); CodeEs(p,";\n") 
    else :
      CodeEs(p,m[i].s); CodeEs(p,"*")  

  return(nsize)

def int CodeParallelstmntgpu(struct tree p) :

  # CodeParallelstmtgpu generates gpu code for the parallelstmnt.
  #
  #   Parameters:
  #     p: Parse tree node for parallel statement
  #   
  #    Return: None
  #
  #    MAPPING MULTI DIMENSIONAL ARRAYS to 1D ARRAYS
  #
  #     A 3D array with indices i,j,k mapps to a 1D array with the
  #     relation
  #
  #     p=i+j*nx+k*nx*ny,         (1)
  #
  #    The organization of the array is shown in figure 1. 
  #
  #          ----------------------------------------
  #    nz  /                                        /|
  #       /                                        / |
  #      /                                        /  |
  #     /                                        /   |
  #      ----------------------------------------    |
  #     |    /                                /  |   |
  #     |   /--------------------------------/   |   |
  #     |   |                                |   |   |
  #     |   |                                |   |   |
  #     |nyl| nyu-nyl                        |   |   |
  #     |   |                                |   |   |
  #  ny |   |                                | / |   |
  #     |   |                                |/  |   |
  #     |    --------------------------------/   |  /
  #     |              nxu-nxl                   | /
  #     | ---------------------------------------|/
  #
  #                    nx
  #     Figure 1: 3D array with dimensions nx,ny and nz. The actual loops
  #               might have upper and lower limits different from the full
  #               size of the array. This is handled by using a subarray. 
  #               The lower limits
  #               is given by nxl,nyl and nzl. The upper limits are
  #               given by nxu,nyu and nzu. Computations are done only
  #               for the subarrays given by the upper and lower limits. 
  #
  #     The inverse mapping of p to the array indices i,j,k can be 
  #     done using equation (1)
  #     by observing that
  #
  #     p/(nx*ny) = i/(nx*ny)+ j*nx/(nx*ny) + k*(nx*ny)/(nx*ny),   (2)
  #
  #
  #     k = p/(nx*ny).                                             (3)
  #
  #     We also have
  #
  #     p/nx = i/nx + j*nx/nx + k*ny*nx/nx,
  #
  #     or
  #
  #     p/nx = j + k*ny,
  #
  #     giving
  #
  #     j=mod(p/nx,ny)                                            (4)
  #
  #
  #     where mod is the modulo function.
  #     We also have
  #
  #     p = i+ nx*(j+k*ny)
  #
  #     which by the sam reasoning as above gives
  #
  #     i = mod(p,nx).                                            (5)
  #
  #     Equations (3), (4) and (5) are used for the mapping of p to
  #     indices i,j,k.
  #
  #     PARALLEL PROCESSING WITH GPU
  #
  #     The NVIDIA gpu consists of np processors, or threads, simultaneously 
  #      executing the same program. Instead of
  #     the conventional loop  
  #       
  #     for(i=0;i<N;i++){
  #        a[i] = b[i]=c[i];
  #      }
  #
  #     we would write the loop in CUDA as
  #
  #      if(p<N){
  #        a[p]=b[p]=c[p];
  #      } 
  #
  #     p is the processor number which is supplied 
  #     by a CUDA built in variable.
  #     Each of the np processors execute the same code, but with different p.
  #     The cuda system organizes the threads into a number of blocks.
  #     blockIdx.x is a built in variable giving the identity of the block
  #     while blockDim.x is the number of blocks. threadIdx.x is the thread 
  #     number within the block.
  #     
  #     The user has to provide the number of blocks and the number of threads 
  #     pr. block.
  #     A unique processor number p is constructed by
  #
  #     p=blockIdx.x*blockDim.x + threadIdx.x
  #
  #     In the above expression p would be a number between 0 and np, where
  #     np is the number of different processors available.
  #     Here the threadIdx.x variable gives a number between 0 and a parameter 
  #     set at run time which is the number of threads (NTHREADS). 
  #     In the same way the blockDim.x variable gives the NBLOCKS 
  #     (number of blocks) set at runtime and the blockIdx.x gives which 
  #     block the processor belongs to.
  #     
  #     There is also a gridDim.x variable.
  #     
  #
  #     If we take into account that the number of processors, np, 
  #     might be less than
  #     the number of elements in the array, the CUDA loop has to be 
  #     written as
  #
  #     for(p=blockIdx.x*blockDim.x + threadIdx.x; p<N; p+=blockDim.x*gridDim.x)
  #     {
  #        a[p]=b[p]=c[p];
  #     }
  #
  #    The first iteration of the loop
  #    performs the necessary computation for the first np indices in f. 
  #    If np is less than
  #    N, then p is incremented by np and the computations repeated for the 
  #    new indices
  #    ranging from index np to 2np-1.
  #
  #
  #     Equations (2), (4) and (5) are used for the mapping of p to
  #     indices i,j,k.
  #
  #     -------------------------------------------------------
  #     |0 |1 |2| ........                             .. |N-1|
  #     -------------------------------------------------------
  #     Fig 2: Indexing of the one-dimensional input array f.
  #
  #     -------------------------------------------------------
  #     |0 |1 |2| ........|np-1|0|1|2|...|np-1|..... |np-1|....
  #     -------------------------------------------------------
  #     Fig 3: The mapping of threads on to the indices of the f array.
  #            Because the number of threads, np, is smaller than N, one thread
  #            have to do computation for more than one index. Thread no 0
  #            is f.ex assigned to array index 0, np, 2np, and so on.
  #
  #     As shown by Figure 1, the computation might have upper and lower limits
  #     different from the full size of the array.
  #     This implies that computation is done on a subcube with dimensions
  #     nxu-nxl, nyu-nyl, nzu-nzl. This will slightly modify the equations
  #     used for mapping the processor id onto the array indices. We end up with
  #
  #     k=nzl+p/(nxu-nxl)*(nyu-nyl),                                    (6)
  #
  #     j=nyl+mod(p/(nxu-nxl),nyu-nyl),                                 (7)
  #
  #     and
  #
  #     i = nxl+mod(p,nxu-nxl).                                            (8)
  #
  #  GENERAL INDEX EXPRESSIONS
  #
  #  Let n1,n2,...,nN be the dimension of the array.
  #  Let i1,i2,...,iN be the indices of the array
  #  Let nu1,nu2,...,nuN be the upper limits of the parallel statement
  #  Let nl1,nl2,...,nlN be the lower limits of the parallel statement
  #  Let m1,m2,...,mN be the defined by
  #   
  #  m1=nu1-nl1, m2=nu2-nl2, ..., mN=nuN-nlN
  #  and also define m0=1
  #  i1 = mod(p/m0,m1)
  #  i2 = mod(p/m1,m2)
  #  i3 = mod(p/(m1*m2),m3)
  #  .
  #  .
  #  ik = mod(p/(m0*m1*m2*...*m{k-1}),mk)  
  #  .
  #  .
  #  iN = p/(m0*m1*m2*...*mN)   
  # 
  # If we introduce the notation
  # qk = m0*m1*m2...mk
  # the equations above can be written as
  #
  #  ik = mod(p,q{k-1})  k < N
  #  iN = p/qN
  #  

  struct tree sp,slice;
  char [*] pno,nmax,qk,tmp
  int rank,l 
  struct charr [*] m,i,nl

  CodeSetparallel(OK);
  sp = p;                           # Save top parallel node        
  rank = PtreeGetrank(p);           # Get no of slices              
  m=new(struct charr [rank])
  i=new(struct charr [rank])
  nl=new(struct charr [rank])

  p = PtreeMvchild(p);              # Move to sliceseq              
  slice = PtreeMvchild(p)           # Move to first slice  

  CodeEs(p,"{\n")                     # Emit code for start of block
  pno = CodeParprocno(slice)        # Emit code for processor no

  # Get the indexes, lengths and lower limits
  for (l = 0;l<rank;l=l+1): 
    i[l].s = CodeParidxrank(slice,l+1)
    nl[l].s = new(char[LTEXT])
    m[l].s = CodeParlenrank(slice,l+1,nl[l].s)

  nmax = CodeParnsize(p,m)          # generate code for the no of 
                                    # processors used
  # Emit for loop head
  CodeEs(p,"for("); CodeEs(p,pno); 
  CodeEs(p,"=blockIdx.x*blockDim.x + threadIdx.x; ");
  CodeEs(p,pno); CodeEs(p, "<"); CodeEs(p,nmax); CodeEs(p,";"); 
  CodeEs(p,pno); 
  CodeEs(p,"+=blockDim.x*gridDim.x");
  CodeEs(p,"){\n"); 
 
 
 # Emit the index calculations
  qk = LibeStrsave("1")
  for(l=0;l<rank;l=l+1):
    if(l == rank-1):
      CodeEs(p,i[l].s); CodeEs(p, "=")
      CodeEs(p,"("); CodeEs(p,pno); CodeEs(p,"/") 
      CodeEs(p,"("); CodeEs(p,qk); CodeEs(p,")") 
      CodeEs(p,")"); 
      CodeEs(p,"+"); CodeEs(p,nl[l].s);
      delete(nl[l].s)
      CodeEs(p,";\n")
    else :
      CodeEs(p,i[l].s); CodeEs(p, "=")
      CodeEs(p,"("); CodeEs(p,pno); CodeEs(p,"/") 
      CodeEs(p,"("); CodeEs(p,qk); CodeEs(p,")") 
      CodeEs(p,")"); CodeEs(p,"%"); CodeEs(p,m[l].s) 
      CodeEs(p,"+"); CodeEs(p,nl[l].s);
      delete(nl[l].s)
      CodeEs(p,";\n")
    
    # Update qk
    tmp=LibeStradd(qk,"*")
    delete(qk)
    qk=tmp
    tmp=LibeStradd(qk,m[l].s)
    delete(qk)
    qk=tmp

  p=PtreeMvchild(sp);
  p=PtreeMvsister(p);
  CodeCompstmnt(p);
  CodeEs(p,"}\n")                     # Emit code for end of block
  CodeEs(p,"}\n");
  CodeSetparallel(ERR);

  return(OK)
     

def int CodeParallelstmnt(struct tree p):

  # CodeParallelstmnt generates code for the parallel
  # statement

  if(CodeGetarch() == CPU):
    CodeParallelstmntcpu(p);

  else if(CodeGetarch() == CUDA):
    CodeParallelstmntgpu(p);

  else if(CodeGetarch() == HIP):
    CodeParallelstmntgpu(p);

  return(OK);
 

def int CodeIfstmnt(struct tree p) :

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
 

def int CodeReturnstmnt(struct tree p) :

  # CodeReturnstmnt  generates code for return statement.
 
  struct tree np;
  char [*] rval;

  np = PtreeMvchild(p);
  rval = CodeExpr(np);
  CodeEs(np, "return "); 
  CodeEs(np, rval); 
  CodeEs(np, ";\n");

  return(OK);


def int CodeCompstmnt(struct tree p) :

  #CodeCompstmnt generates code for compound statement.  
 
  struct tree sp,q,r;
  
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
      if(CodeGetbreak() == OK):
        CodeExpr(p);
      else :
        if(PtreeGetsimple(p)== OK):
          CodeSexpr(p);
          CodeEs(p,";\n")
        else :
          CodeExpr(p);

    if(LibeStrcmp(PtreeGetname(p),"while") == OK):
        CodeWhilestmnt(p);

    if(LibeStrcmp(PtreeGetname(p),"for") == OK):
      #q=PtreeMvchild(p);
      #PtreeMvsister(q);
      #CodeForstmnt(p);

      q=PtreeMvchild(p);
      r=PtreeMvsister(q);
      if(PtreeGetsimple(q) && PtreeGetsimple(r) && \
        PtreeGetsimple(PtreeMvsister(r))):
        CodeSforstmnt(p);
      else:
        PtreeSetsimple(q,ERR);
        PtreeSetsimple(r,ERR);
        PtreeSetsimple(PtreeMvsister(r),ERR);
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

def int CodeStmnt(struct tree p) :

  # CodeStmnt generates code for statement.  
 
  struct tree sp,q,r;

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
      if(CodeGetbreak() == OK):
        CodeExpr(p);
      else :
        if(PtreeGetsimple(p)== OK):
          CodeSexpr(p);
          CodeEs(p,";\n")
        else :
          CodeExpr(p);

    if(LibeStrcmp(PtreeGetname(p),"while") == OK):
        CodeWhilestmnt(p);

    if(LibeStrcmp(PtreeGetname(p),"for") == OK):
      q=PtreeMvchild(p);
      r=PtreeMvsister(q);
      if(PtreeGetsimple(q) && PtreeGetsimple(r) && \
        PtreeGetsimple(PtreeMvsister(r))):
        CodeSforstmnt(p);
      else:
        PtreeSetsimple(q,ERR);
        PtreeSetsimple(r,ERR);
        PtreeSetsimple(PtreeMvsister(r),ERR);
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


def int CodeNewdescr(struct tree p, char[*] pointer) :

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

def int CodeFdef(struct tree p):

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


def int CodePreamblecpu() :

  # CodePreamblecpu() emits declarations needed for each compilation unit
  # for the cpu architecture

  struct tree p;

  p = PtreeMknode("dummy", "dummy");

  PtreeSetline(p,1);
  CodeEs(p, "//  Translated by epsc  version: ");
  CodeEs(p, LibeDate()); CodeEs(p,"\n")
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


def int CodePreamblecuda() :

  # CodePreamblecuda generates the cuda preamble code.

  struct tree p;

  p = PtreeMknode("dummy", "dummy");

  PtreeSetline(p,1);
  CodeEs(p, "//  Translated by epsc  version December 2021  \n");
  PtreeSetline(p,2);
  PtreeSetline(p,3);

  #Start of extern "C"
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


def int CodePreamblehip() :

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
#  CodeEs(p, "extern \"C\" {\n"); 
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


def int CodePreamble():

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
  
def int CodePostamble():

  # CodePostmble() emits declarations needed to avoid c++ 
  # name mangling.

  struct tree p;

  p = PtreeMknode("dummy", "dummy");

  if(CodeGetarch() == CUDA) : 
    CodeEs(p,"};")

  if(CodeGetarch() == HIP) : 
    CodeEs(p,"};")

  return(OK)
 
