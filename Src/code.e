// Code is a module for c-code generation

include "libe.i"   // Include library
include "sym.i"    // Include symbol table interface 
include "ptree.i"  // Include parse tree interface  
include "err.i"    // Include interface to error routines
include "code.i"   // Include interface for code generation
include "m.i"      // Include architecture dependent parameters

//
// Forward declarations to be removed when module system
// in place.

char [*] CodeItemp(int cntrl){}                  
char [*] CodeMktemp(){}                          
char [*] CodeMkstring(struct tree p){}           
char [*] CodeNewtemp(char [*] type){}            
struct symbol CodeNewsymbol(char [*] type, char [*] name){}  
int CodeDeclarations(struct tree p, struct symbol tp){}      
int CodeWdeclaration(struct tree p){}                        
int CodeWdeclarations(struct tree p){}                       
int CodeGdeclarations(struct tree p, struct symbol tp){}     
int CodeStructdef(struct tree p, struct symbol tp){}         
int CodeFdeclaration(struct tree p, struct symbol tp){}      
int CodeFdeclkernel(struct tree p){}                         
int CodeFdewrappergpu(struct tree p){}
int CodeIdeclaration(struct tree p, struct symbol tp){}  
int CodeIdlist(struct tree p, struct symbol tp){}     
int CodeFdefcpu(struct tree p){}  
int CodeFdefgpu(struct tree p){}  
int CodeFdef(struct tree p){}  
int CodeCompstmnt(struct tree p){}  
int CodeStmnt(struct tree p){}  
int CodeWhilestmnt(struct tree p){}  
int CodeForstmnt(struct tree p){}    
int CodeParallelstmnt(struct tree p){}    
int CodeParallelstmntcpu(struct tree p){}
int CodeParallelstmntgpu(struct tree p){}
int CodeParallelfor(struct tree p, int level, int rank){}    
int CodeIfstmnt(struct tree p){}    
int CodeReturnstmnt(struct tree p){} 
char [*] CodeExpr(struct tree p){}  
char [*] CodeBinexpr(struct tree p){}   
char [*] CodeAddexpr(struct tree p, char [*] lval, char [*] rval){} 
char [*] CodeUnexpr(struct tree p){}   
char [*] CodePrimexpr(struct tree p){}  
char [*] CodeIdent(struct tree p){}   
char [*] CodeSconstant(struct tree p){}
char [*] CodeNew(struct tree p){}       
int CodeNewdescr(struct tree p, char [*] pointer){}       
char [*] CodeDelete(struct tree p){}   
char [*] CodeLen(struct tree p){}     
char [*] CodeFcall(struct tree p){}    
char [*] CodeCast(struct tree p){}    
char [*] CodeSizeof(struct tree p){} 
char [*] CodeStruct(struct tree p){}  
char [*] CodeCmplx(struct tree p){}   
char [*] CodeRe(struct tree p){}     
char [*] CodeIm(struct tree p){}    
char [*] CodeArray(struct tree p, char [*] qual, char [*] sel){}   
int CodeArrayex(int line, char [*] qual, char [*] sel,
                char [*] name, char [*] ival, int index){}
char [*] CodeQident(char [*] qual, char [*] ident){}   
char [*] CodeQident2(char [*] qual, char [*] ident){}   
int CodeEs(struct tree p, char [*] s){}   
int CodeEsr(char [*] s){}   
int CodeEd(int d){}    
int CodeEc(int d){}    
int CodeSetparallel(int flag){}
int CodeGetparallel(){}

// End of forward declarations

// CodeArch is a module variable holding the
// architecturetype.
int CodeArch;

// CodeSetarch sets the architecture. 
int CodeSetarch(int arch){
  CodeArch = arch;
  return(OK);
}

// CodeGetarch returns the architecture. 
int CodeGetarch(){
  return(CodeArch);
}

// Maximum size of arrays
const MAXRANK = 4;
int CodeLine;
/*
\end{verbatim}
%======================================================================
\section{CodeIcode -- C code generator initialization}
%======================================================================
\begin{verbatim}
*/
int CodeInit()
{    
  CodeSetparallel(ERR);
  CodeLine=0;
  CodeItemp(-1);  
  CodeSetarch(CPU);
  return (OK);
}
/*
%======================================================================
\section{CodeCode -- C code generator}
%======================================================================
\begin{verbatim}
*/
int CodeCode(struct tree p, struct symbol tp)
{

  /* Generate code for external declarations */    

  CodeDeclarations(p,tp);   
  return (OK);
}
/*
\end{verbatim}
%======================================================================
\section{CodeArraycheck -- test for array check}
%======================================================================
\begin{verbatim}
*/
int CodeArraytest;

int CodeArraycheck()
{
  return (CodeArraytest);
}
/*
\end{verbatim}
%======================================================================
\section{CodeArraycheckon -- turn on array check}
%======================================================================
\begin{verbatim}
*/
int CodeArraycheckon()
{
  CodeArraytest = OK;
  return(OK);
}
/*
\end{verbatim}
%======================================================================
\section{CodeArraycheckoff -- turn off array check}
%======================================================================
\begin{verbatim}
*/
int CodeArraycheckoff()
{
  CodeArraytest = ERR;
  return(OK);
}
/*
\end{verbatim}
%======================================================================
\section{CodeDebug  -- test for the debug flag}
%======================================================================
\begin{verbatim}
*/
int CodeDebugflag ;    /* Global to hold  flag */

int CodeDebug()
{ 
  return(CodeDebugflag);
} 
/*
\end{verbatim}
%======================================================================
\section{CodeDebugon  -- turn on the debug flag}
%======================================================================
\begin{verbatim}
*/
int CodeDebugon()
{ 
  CodeDebugflag = OK;
  return(OK);
} 
/*
\end{verbatim}
%======================================================================
\section{CodeDebugoff  -- turn off the debug flag}
%======================================================================
\begin{verbatim}
*/
int CodeDebugoff()
{ 
  CodeDebugflag = ERR;
  return(OK);
} 
/*
\end{verbatim}

/* Global to hold flag for parallel scope */

   int CodeParallel; 

/*
\end{verbatim}
%======================================================================
\section{CodeSetparallel  -- set the parallel flag}
%======================================================================
\begin{verbatim}
*/
int CodeSetparallel(int flag)
{ 
  CodeParallel = flag;
  return(flag);
} 
/*
\end{verbatim}
%======================================================================
\section{CodeGetparallel  -- turn off the parallel flag}
%======================================================================
\begin{verbatim}
*/
int CodeGetparallel()
{ 
  return(CodeParallel);
} 
// CodeOutfd Variable to hold output file descriptor
int CodeFdout;

// Set output file descriptor
int CodeSetfdout(int fd){
  CodeFdout = fd;
  return(OK);
}

// Get output file descriptor
int CodeGetfdout(){
  return(CodeFdout);
}
/*
\end{verbatim}
%======================================================================
\section{CodeItemp  -- initialize temporary variable}
%======================================================================
\begin{verbatim}
*/
int CodeAddress ;    /* Global to hold temp value           */

char [*] CodeItemp(int cntrl)
{ 
  char [*] s1;
  char [*] s2;

  s1 = new(char [16]);
  s2 = new(char [16]);
  LibeStrcpy("nctemp",s2);
  if(cntrl == -1)
    CodeAddress = 0;
  else
    CodeAddress = CodeAddress + 1;
  if(CodeAddress > 99999) 
     ErrPanic("I am running out of temporaries");
  LibeItoa(CodeAddress,s1);        
  LibeStrcat(s1,s2);
  return s2;
} 
/*
\end{verbatim}
%======================================================================
\section{CodeNewtemp -- make temporary}                            
%======================================================================
\begin{verbatim}
*/
char [*] CodeNewtemp(char [*] type)  
{
  char [*] temp;
  struct symbol tp;

  temp = CodeMktemp();
  tp = SymMkname(temp,SymGetltp());
  SymSetype(tp, type);
  SymSetemit(tp,ERR);
  return(temp);
}
/*
\end{verbatim}
%======================================================================
\section{CodeNewsymbol -- make new symbol}                            
%======================================================================
\begin{verbatim}
*/
struct symbol CodeNewsymbol(char [*] type, char [*] name)  
{
  struct symbol tp;

  tp = SymMkname(name,SymGetltp());
  SymSetype(tp, type);
  SymSetemit(tp,ERR);
  return(tp);
}
/*
\end{verbatim}
%=====================================================================
\subsection{CodeMktemp  -- Make temporary variable}
%=====================================================================
\begin{verbatim}
*/
char [*] CodeMktemp()
{ 
    return CodeItemp(0);
} 
/*
\end{verbatim}
%=====================================================================
\subsection{CodeMkstring  -- Make string temporaries}
%=====================================================================
\begin{verbatim}
*/
char [*] CodeMkstring(struct tree p)
{ 
  struct symbol sp; /* Pointers to symbol tables */
  char [*] tmp; 

  tmp = CodeMktemp();
  sp = SymMkname(tmp,SymGetltp());  
  SymSetrank(sp,1);
  SymSetype(sp,"char");
  SymSetarray(sp,"array");
  return(tmp);
} 
/*
\end{verbatim}
%====================================================================*
\subsection{CodeSconstant  -- generate code for strings}  
%=====================================================================*
 \begin{verbatim}
*/
char [*] CodeSconstant(struct tree p)
{ 
  char [*] tmp,tmp2;
  int l;

  /* Set the length  of the string */

  tmp2 =CodeNewtemp("char");
  CodeEs(p, "struct nctempchar1 *");
  CodeEs(p, tmp2);
  CodeEs(p,";\n");
  tmp = CodeNewtemp("char");
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
}
/*
\end{verbatim}
%=====================================================================
\subsection{CodeDeclarations  -- Do declaration list }  
%=====================================================================
 \begin{verbatim}
*/
int CodeDeclarations(struct tree p, struct symbol tp)
{ 
  struct tree np;

  if(p != NULL)
    np=PtreeMvchild(p);
  else
    np = p;
  CodeGdeclarations(np,tp);   /* Generate code              */
  CodeWdeclarations(np);   /* Walk the declaration nodes */
  return (OK);
}
/*
\end{verbatim}
%====================================================================*
\subsection{CodeGdeclarations  -- generate code for declaration list}  
%=====================================================================*
 \begin{verbatim}
*/
int CodeGdeclarations(struct tree p, struct symbol tp)
{ 
  tp = SymMvnext(tp);
  while(tp != NULL){
    if(LibeStrcmp("#arglist", SymGetname(tp)) == ERR){
      if(SymGetemit(tp) == OK){
        if(LibeStrcmp(SymGetstruct(tp), "structdef")==OK)
          CodeStructdef(p,tp);
        else if(LibeStrcmp(SymGetfunc(tp), "fdecl")==OK)
          CodeFdeclaration(p,tp); 
        else{ 
          CodeIdeclaration(p,tp);
          CodeEs(p, ";\n"); 
        }
        SymSetemit(tp, ERR);
      }
    }
    tp = SymMvnext(tp);
  }
  return (OK);
}
/*
\end{verbatim}
%====================================================================
\subsection{CodeStructdef  -- generate code for struct definition}  
%====================================================================
 \begin{verbatim}
*/
int CodeStructdef(struct tree p, struct symbol tp)
{ 
  struct symbol up;
  CodeEs(p, "struct ");
  CodeEs(p, SymGetype(tp));
  CodeEs(p, " {");
  up = SymGetable(tp);
  CodeGdeclarations(p, up);
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
}
/*
\end{verbatim}
%=====================================================================
\subsection{CodeFdeclaration  -- function declaration}
%=====================================================================
 \begin{verbatim}
*/
int CodeFdeclaration(struct tree p, struct symbol tp)
{ 
  int noargs;      /* Number of arguments */

  if(LibeStrcmp(SymGetstruct(tp),"struct") == OK){
    CodeEs(p, "struct ");
  }
  if(LibeStrcmp(SymGetarray(tp),"array") == OK){
    CodeEs(p, "nctemp");
  }
   CodeEs(p, SymGetype(tp));

  if(LibeStrcmp(SymGetarray(tp),"array") == OK){
    CodeEd(SymGetrank(tp));
    CodeEs(p,"*");
  }
  if(LibeStrcmp(SymGetstruct(tp),"struct")==OK){ 
    CodeEs(p,"*");
  }

  CodeEs(p," ");

  CodeEs(p, SymGetname(tp)); 
  CodeEs(p, " (");
  tp = SymGetable(tp);
  tp = SymLookup("#arglist", tp);       
  tp = SymGetable(tp);
  noargs = 0;
  while((tp=SymMvnext(tp))!=NULL){
    CodeIdeclaration(p, tp);
    if(SymMvnext(tp) != NULL) CodeEs(p,",");
    noargs = noargs+1;
  }
  CodeEs(p, ");\n");
  return(OK);
}
/*
\end{verbatim}
%=====================================================================
\subsection{CodeIdeclaration  -- simple id declaration}
%=====================================================================
 \begin{verbatim}
*/
int CodeIdeclaration(struct tree p, struct symbol tp)
{ 
  if(LibeStrcmp(SymGetstruct(tp),"structdef") == OK){
    CodeEs(p, "struct ");
  }
  if(LibeStrcmp(SymGetstruct(tp),"struct") == OK){
    if(LibeStrcmp(SymGetarray(tp),"array") == OK){
      CodeEs(p, "struct nctemp");
      CodeEs(p, SymGetype(tp));
      CodeEd(SymGetrank(tp));
      CodeEs(p, " *");
      CodeEs(p, SymGetname(tp)); 
    }
    else{
      CodeEs(p, "struct ");
      CodeEs(p, SymGetype(tp));
      CodeEs(p, "*");
      CodeEs(p, " "); 
      CodeEs(p, SymGetname(tp)); 
    }
  }
  else if(LibeStrcmp(SymGetarray(tp),"array") == OK){
    CodeEs(p, "nctemp");
    CodeEs(p, SymGetype(tp));
    CodeEd(SymGetrank(tp));
    CodeEs(p, " *"); 
    CodeEs(p, SymGetname(tp)); 
  }
  else{
    CodeEs(p, SymGetype(tp));
    CodeEs(p, " "); 
    CodeEs(p, SymGetname(tp)); 
  }
  return(OK);
}
/*
\end{verbatim}
%=====================================================================
\subsection*{CodeWdeclarations  -- walk declaration list }  
%=====================================================================
 \begin{verbatim}
*/
int CodeWdeclarations(struct tree p)
{ 
  while(p!= NULL){
    if((LibeStrcmp(PtreeGetname(p), "type")   == OK)||
      (LibeStrcmp(PtreeGetname(p), "struct") == OK)) {
       CodeWdeclaration(p); 
    }
    p = PtreeMvsister(p);
  }
  return (OK);
}
/*
\end{verbatim}
%=====================================================================
\subsection*{CodeWdeclaration  -- walk declaration nodes}  
%=====================================================================
 \begin{verbatim}
*/
int CodeWdeclaration(struct tree p)
{ 
  struct tree np;

  np = PtreeMvchild(p); 
  while(np != NULL){ 
    if(LibeStrcmp(PtreeGetname(np), "fdef") == OK)
      CodeFdef(np); 
    np = PtreeMvsister(np);
  }
  return(OK);
} 
/*
\end{verbatim}
%=====================================================================
\subsection*{CodeFdeclkernel -- Generate kernel declaration}  
%=====================================================================
 \begin{verbatim}
*/
int CodeFdeclkernel(struct tree p)
{ 
  struct symbol tp;
  int noarg;


  noarg=0;
  tp = SymLookup(PtreeGetdef(p), SymGetetp());
  SymSetltp(SymGetable(tp));

  CodeEs(p,"__global__ ");
  CodeEs(p, "void");

  /*
  if(LibeStrcmp(SymGetarray(tp),"array") == OK){
    CodeEd(SymGetrank(tp));
  }
  if(LibeStrcmp(SymGetstruct(tp),"struct")==OK){
     CodeEs(p,"*");
  }
  */
  CodeEs(p, " ");
  CodeEs(p,"kernel_");
  CodeEs(p, SymGetname(tp)); 
  CodeEs(p, " (");
  p = PtreeMvchild(p);    
  if(LibeStrcmp(PtreeGetname(p), "arglist") == OK){
    tp = SymGetable(tp);
    tp = SymLookup("#arglist", tp);       
    tp = SymGetable(tp);
    while((tp=SymMvnext(tp))!=NULL){
      CodeIdeclaration(p, tp);
      if(SymMvnext(tp)!=NULL){
        CodeEs(p,",");
      }
      noarg=noarg+1;
    }
  }
  CodeEs(p, ");\n");

  return(OK);
}
/*
\end{verbatim}
%=====================================================================
\subsection{CodeCompstmnt  -- generate code for compound statement}  
%=====================================================================
\begin{verbatim}
*/
int CodeCompstmnt(struct tree p)
{ 
  struct tree sp,q;
  
  sp = p;

  /* Emit leading left brace */

  CodeEs(p, "{\n");

  /* Emit declarations       */

  p = PtreeMvchild(p);    
  CodeDeclarations(p,SymGetltp());
  if(LibeStrcmp(PtreeGetname(p), "declarations") == OK){
    p = PtreeMvsister(p);
  }

  /*Main loop over all statements in this compound statement */  

  while(p != NULL){

  /*
     Emit expression or "while" or "for" or "if" or "return"
     statements    
  */
    if(LibeStrcmp(PtreeGetname(p),"expr") == OK){
        CodeExpr(p);
    }
    if(LibeStrcmp(PtreeGetname(p),"while") == OK){
        CodeWhilestmnt(p);
    }
    if(LibeStrcmp(PtreeGetname(p),"for") == OK){
      q=PtreeMvchild(p);
        PtreeMvsister(q);
        CodeForstmnt(p);
    }
    if(LibeStrcmp(PtreeGetname(p),"parallel") == OK){
        CodeParallelstmnt(p);
    }
    if(LibeStrcmp(PtreeGetname(p),"if") == OK){
        CodeIfstmnt(p);
    }
    if(LibeStrcmp(PtreeGetname(p),"return") == OK){
        CodeReturnstmnt(p);
    }
      p = PtreeMvsister(p);
  }
  /* Emit trailing right brace */

  CodeEs(sp, "}\n");
  return(OK);
 } 
/*
\end{verbatim}
%=====================================================================
\subsection{CodeStmnt  -- generate code for compound statement}  
%=====================================================================
 \begin{verbatim}
*/
int CodeStmnt(struct tree p)
{ 
  struct tree sp;

      sp = p;

  /* Emit leading left brace */

  CodeEs(p, "{\n");

  /* Emit declarations       */

  if(LibeStrcmp(PtreeGetname(p),"compstmnt")==OK){
    p = PtreeMvchild(p);    
    CodeDeclarations(p,SymGetltp());
    if(LibeStrcmp(PtreeGetname(p), "declarations") == OK){
      p = PtreeMvsister(p);
    }
  }

  /*Main loop over all statements in this compound statement */  

  while(p != NULL){

  /*
     Emit expression or "while" or "for" or "if" or "return"
     statements    
  */
    if(LibeStrcmp(PtreeGetname(p),"compstmnt") == OK)
      CodeCompstmnt(p);

    if(LibeStrcmp(PtreeGetname(p),"expr") == OK){
        CodeExpr(p);
    }
    if(LibeStrcmp(PtreeGetname(p),"while") == OK){
        CodeWhilestmnt(p);
    }
    if(LibeStrcmp(PtreeGetname(p),"for") == OK){
        CodeForstmnt(p);
    }
    if(LibeStrcmp(PtreeGetname(p),"parallel") == OK){
        CodeParallelstmnt(p);
    }
    if(LibeStrcmp(PtreeGetname(p),"if") == OK){
        CodeIfstmnt(p);
    }
    if(LibeStrcmp(PtreeGetname(p),"return") == OK){
        CodeReturnstmnt(p);
    }
      p = PtreeMvsister(p);
  }
  /* Emit trailing right brace */

  CodeEs(sp, "}\n");

  return(OK);
 } 
/*
\end{verbatim}
%=====================================================================
\subsection{CodeExpr  -- generate code for expressions}
%=====================================================================
\begin{verbatim}
*/
char [*] CodeExpr(struct tree p)
{ 
  struct tree sp;
  char [*] rval;
  sp = PtreeMvchild(p);
  rval = CodeBinexpr(sp);
  return(rval);
} 
/*
\end{verbatim}
%====================================================================
\subsection{CodeWhilestmnt  -- generate code for while statement}
%====================================================================
 \begin{verbatim}
*/
int CodeWhilestmnt(struct tree p)
{ 
  char [*] cond,tmp,cond2;
  struct tree sp;

  p = PtreeMvchild(p);
  sp = p;
  cond = CodeExpr(sp);
  tmp = CodeNewtemp(PtreeGetype(sp));
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
} 
/*
\end{verbatim}
%=====================================================================
\subsection{CodeForstmnt  -- generate code for "for" statement}
%=====================================================================
\begin{verbatim}
*/
 int CodeForstmnt(struct tree p)
{ 
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
} 
/*
\end{verbatim}
%=====================================================================
\subsection{CodeIfstmnt  -- generate code for if statement}
%=====================================================================
\begin{verbatim}
*/
int CodeIfstmnt(struct tree p)
{ 
  char [*] cond;

  p = PtreeMvchild(p);
  cond = CodeExpr(p);
  CodeEs(p, "if("); 
  CodeEs(p, cond); 
  CodeEs(p, ")\n");
  p = PtreeMvsister(p);
  CodeStmnt(p);

  if((p = PtreeMvsister(p)) != NULL){
    if(LibeStrcmp(PtreeGetname(p), "else") == OK){
      p = PtreeMvchild(p);
      CodeEs(p, "else"); 
      CodeStmnt(p);
    }
  }
  return(OK);
} 
/*
\end{verbatim}
%=====================================================================
\subsection{CodeReturnstmnt  -- generate code for return statement}
%=====================================================================
 \begin{verbatim}
*/
int CodeReturnstmnt(struct tree p)
{ 
  struct tree np;
  char [*] rval;

  np = PtreeMvchild(p);
  rval = CodeExpr(np);
  CodeEs(np, "return "); 
  CodeEs(np, rval); 
  CodeEs(np, ";\n");
  return(OK);
} 
/*
\end{verbatim}
%=====================================================================
\subsection{CodeBinexpr  -- Generate code for binary expression}
%=====================================================================
\begin{verbatim}
*/
char [*] CodeBinexpr(struct tree p)
{ 
  char [*] lval, rval, tempr, tempi, type;
  struct tree np,sp;

  if(LibeStrcmp(PtreeGetname(p), "binexpr") == OK){
    type=PtreeGetype(p);
    tempr = CodeNewtemp(type);
    tempi = CodeNewtemp(type);
    np = PtreeMvchild(p);
    lval = CodeUnexpr(np); 
    rval = CodeUnexpr(PtreeMvsister(np));
    if((LibeStrcmp(PtreeGetdef(p),"+") == OK) ||
      (LibeStrcmp(PtreeGetdef(p),"-") == OK) ||
      (LibeStrcmp(PtreeGetdef(p),"*") == OK) ||
      (LibeStrcmp(PtreeGetdef(p),"/") == OK)){
      return (CodeAddexpr(p, lval, rval));
    }
    else if(LibeStrcmp(PtreeGetdef(p), "=") == OK){
      if((LibeStrcmp(PtreeGetype(p), "complex") == OK) && 
         (LibeStrcmp(PtreeGetref(p), "aref") == ERR) && 
         (LibeStrcmp(PtreeGetref(p),"sref")  == ERR)){
        CodeEs(p,lval); CodeEs(p, ".r "); 
        CodeEs(p, "="); 
        CodeEs(p, rval); CodeEs(p, ".r");   
        CodeEs(p, ";\n");
        CodeEs(p, lval); CodeEs(p, ".i"); 
        CodeEs(p, "="); 
        CodeEs(p, rval); CodeEs(p, ".i"); 
        CodeEs(p, ";\n");
        return(lval);
      }
      else if(LibeStrcmp(PtreeGetref(np),"aref")==OK){
        if((LibeStrcmp(PtreeGetname(PtreeMvsister(np)),"iconstant")) && 
           (LibeStrcmp(PtreeGetdef(PtreeMvsister(np)),"0"))){
          CodeEs(p, lval); 
          CodeEs(p, "=("); CodeEs(p, rval); 
          CodeEs(p, ");\n");
          return (lval);
        }
        else{
          CodeEs(p, lval); 
          CodeEs(p, "="); CodeEs(p, rval); 
          CodeEs(p, ";\n");
          return(lval);
        }
      }
      else{
        CodeEs(p, lval); CodeEs(p, " "); 
        CodeEs(p, "="); CodeEs(p, rval); 
        CodeEs(p, ";\n");
        return (lval);
      }
    }
    else if((LibeStrcmp(PtreeGetdef(p), "==") == OK) ||
            (LibeStrcmp(PtreeGetdef(p), "!=") == OK)){
      if(LibeStrcmp(PtreeGetref(np),"aref")==OK){
        sp =np;
        if((LibeStrcmp(PtreeGetname(PtreeMvsister(np)),"iconstant")) && 
           (LibeStrcmp(PtreeGetdef(PtreeMvsister(np)),"0"))){
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
        }
        else{
          CodeEs(p, type); CodeEs(p," ");
          CodeEs(p, tempr); CodeEs(p, " = (");
          CodeEs(p, lval); 
          CodeEs(p, PtreeGetdef(p)); CodeEs(p, rval); 
          CodeEs(p, ");\n");
          return (lval);
        }
      }
      else{
          CodeEs(p, type); CodeEs(p," ");
        CodeEs(p, tempr); CodeEs(p, " = (");
        CodeEs(p, lval); CodeEs(p, " "); 
        CodeEs(p, PtreeGetdef(p)); CodeEs(p, rval); 
        CodeEs(p, ");\n");
        return (tempr);
      }
    }
    else{
      CodeEs(p, type); CodeEs(p, " ");
      CodeEs(p, tempr); CodeEs(p, " = (");
      CodeEs(p, lval); CodeEs(p, " ");
      CodeEs(p, PtreeGetdef(p)); 
      CodeEs(p, " ");
      CodeEs(p, rval); CodeEs(p, ");\n");
      return (tempr);
    }
  }
  else
    return CodeUnexpr(p);
        
}
/*
\end{verbatim}
%=====================================================================
\subsection{CodeAddexpr  -- Generate code for add expression}
%=====================================================================
 \begin{verbatim}
*/
char  [*] CodeAddexpr(struct tree p, char [*] lval, char [*] rval)
{ 
  char [*] type,tempr;
  char [*] opr;

  type = PtreeGetype(p);
  tempr = CodeNewtemp(type);
  opr  = PtreeGetdef(p);
  if(LibeStrcmp(type, "complex") == OK){
    if((LibeStrcmp(opr, "+") == OK)||
      (LibeStrcmp(opr, "-") == OK)){
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
    }
    else if(LibeStrcmp(opr, "*") == OK){
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
    }
    else if(LibeStrcmp(opr, "/") == OK){
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
    }
  }
  else{
       CodeEs(p,type); CodeEs(p," ");
    CodeEs(p, tempr); CodeEs(p, " = ");
    CodeEs(p, lval); CodeEs(p, " "); CodeEs(p, PtreeGetdef(p)); 
    CodeEs(p, " ");
    CodeEs(p, rval); CodeEs(p, ";\n");
  }
  return (tempr);
}
/*
\end{verbatim}
%=====================================================================
\subsection{CodeUnexpr  -- Generate code for unary expression}
%=====================================================================
\begin{verbatim}
*/
char [*] CodeUnexpr(struct tree p)
{ 
  char [*] tmp;
  char [*] tempr;
  tempr=CodeNewtemp(PtreeGetype(p));

  if(LibeStrcmp(PtreeGetname(p),"unexpr")==OK){
    if(LibeStrcmp(PtreeGetype(p),"complex")==OK){
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
    }
    else{
      tmp = CodePrimexpr(PtreeMvchild(p)); 
      CodeEs(p, PtreeGetype(p));
      CodeEs(p," ");
      CodeEs(p, tempr);
      CodeEs(p,"= -");
      CodeEs(p,tmp);
      CodeEs(p, ";\n"); 
      return(tempr);
    }
  }
  else
    return(CodePrimexpr(p));
}
/*
\end{verbatim}
%=====================================================================
\subsection{CodePrimexpr  -- Generate code for primary expression}
%=====================================================================
\begin{verbatim}
*/
char [*] CodePrimexpr(struct tree p)
{ 
  if(LibeStrcmp(PtreeGetname(p),"identifier") == OK)
    return CodeIdent(p);
  else if(LibeStrcmp(PtreeGetname(p),"new") == OK)
    return CodeNew(p);
  else if(LibeStrcmp(PtreeGetname(p),"delete") == OK)
    return CodeDelete(p);
  else if(LibeStrcmp(PtreeGetname(p),"len") == OK)
    return CodeLen(p);
  else if(LibeStrcmp(PtreeGetname(p),"cmplx") == OK)
    return CodeCmplx(p);
  else if(LibeStrcmp(PtreeGetname(p),"im") == OK)
    return CodeIm(p);
  else if(LibeStrcmp(PtreeGetname(p),"re") == OK)
    return CodeRe(p);
  else if(LibeStrcmp(PtreeGetname(p),"fcall") == OK)
    return CodeFcall(p);
  else if(LibeStrcmp(PtreeGetname(p),"cast") == OK)
    return CodeCast(p);
  else if(LibeStrcmp(PtreeGetname(p), "iconstant") == OK)
    return PtreeGetdef(p);
  else if(LibeStrcmp(PtreeGetname(p), "rconstant") == OK)
    return PtreeGetdef(p);
  else if(LibeStrcmp(PtreeGetname(p), "sconstant") == OK)
    return CodeSconstant(p);
  else
    return CodeBinexpr(p);
}

// CodeIdent generates code for identifier
char [*] CodeIdent(struct tree p)
{ 
   // Identifier consists of a qualifier and a name.
   // Both qualifier and name may be arrays.
   // The generated c-code is different if the 
   // qualifier is a struct versus basic type. 
   char [*] qual; // Qualifier 
   char [*] name; // name of identifier
   struct symbol tp, up, uup;
   struct tree np;
   
  qual=NULL;
  if(LibeStrcmp(PtreeGetstruct(p),"struct")==OK){
    if(LibeStrcmp(PtreeGetarray(p),"array")==OK){
      qual = CodeArray(p,qual,".");
      np = PtreeMvchild(p);
      if(np==NULL) return(qual);
      np = PtreeMvsister(np);
      if(np==NULL) return(qual);
    }
    else{
      qual = PtreeGetdef(p); 
      if((np = PtreeMvchild(p))==NULL)
        return(qual);
    }
    if(LibeStrcmp(PtreeGetarray(np),"array")==OK){
      tp = SymGetltp(); // Save local symbol table
      up = SymGetetp(); // Save external symbol table
      uup = SymLook(PtreeGetdef(p)); // Find name in symbol table
      uup = SymLook(SymGetype(uup)); // Get the type
      SymSetltp(SymGetable(uup));    // Set the local symbol
                                     // table to the sub-table containing 
                                     // the qualifier and name.
                                     // Needed when generating code for arrays
      if(LibeStrcmp(PtreeGetarray(p),"array")==OK){
        name = CodeArray(np,qual, ".");
      }
      else{
        name = CodeArray(np,qual, "->");
      }
      // Restore the symbol tables
      SymSetltp(tp);
      SymSetetp(up);
    }
    else{
      name = PtreeGetdef(np);
    }

    if(LibeStrcmp(PtreeGetarray(p),"array")==OK)
      return (CodeQident(qual, name));
    else
      return (CodeQident2(qual, name));
  }     
  else if(LibeStrcmp(PtreeGetarray(p),"array")==OK){
    name = NULL;
    qual = NULL;
    qual = CodeArray(p,qual,name);
    return(qual);
  }
  else
    return PtreeGetdef(p);
}

/*
\end{verbatim}
%=====================================================================
\subsection{CodeNew  -- Generate code for the new operator}
%=====================================================================
Create code for the new operator.
\begin{verbatim}
*/
char [*] CodeNew(struct tree p)
{ 
  struct tree sp,top;
  char [*] type;
  char [*] totdim, dim;
  char [*] pointer;
  char [*] structflag;
  char [*] arrayflag;
  int rank;
  int i;

  /* Create temporaries to hold return value (pointer) and total dimension */
  pointer = CodeNewtemp(PtreeGetype(p));
  totdim = CodeNewtemp(PtreeGetype(p));

  /* Get structure and array type flags */
  p = PtreeMvchild(p);
  type = PtreeGetdef(p);
  structflag = PtreeGetstruct(p);
  arrayflag = PtreeGetarray(p);

  /* If array, compute total dimension */
    
  if(LibeStrcmp(PtreeGetarray(p), "array")==OK){
    p = PtreeMvchild(p);
    p = PtreeMvchild(p);
    p = PtreeMvchild(p);
    p = PtreeMvchild(p);
    sp = p;
    top = p;
    rank=1;

    /* Get the rank */
    while((p=PtreeMvsister(p))!= NULL)
      rank=rank+1;
    if(rank > MAXRANK)
      ErrPanic("Array dimension is too large");
      
    /* Compute total size of array */

    p=sp; 
    i = 0;
    while(p != NULL){
      dim = CodeExpr(p);
      if(i==0){
        CodeEs(p,PtreeGetype(p));
        CodeEs(p," ");
        CodeEs(p,totdim); 
        CodeEs(p,"=");
        CodeEs(p,dim);
      }
      else{
        CodeEs(p,totdim);
        CodeEs(p,"=");
        CodeEs(p,totdim);
        CodeEs(p,"*");
        CodeEs(p,dim);
      } 
      CodeEs(p,";\n");
      i=i+1;
      p = PtreeMvsister(p);
    }
  }

  /* If single structure allocate memory */

  if((LibeStrcmp(structflag,"struct") == OK) 
    && (LibeStrcmp(arrayflag,"array") == ERR)){
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
  }
    
  /* If array of structures allocate memory */

  if((LibeStrcmp(structflag,"struct") == OK) 
    && (LibeStrcmp(arrayflag,"array") == OK)){
    /* Move to list of array indices */

   /* Emit declaration for array desriptor */
    CodeEs(p,"struct nctemp");
    CodeEs(p, type);
    CodeEd(rank);
    CodeEs(p," *");
    CodeEs(p,pointer);
    CodeEs(p,";\n");
    /* Allocate memory for descriptor */
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

    /* Fill in array dimensions in descriptor */
    i=0;
    p=sp;
    while(p != NULL){
      dim = CodeExpr(sp);
      CodeEs(sp, pointer);
      CodeEs(sp,"->d");
      CodeEs(sp, "["); CodeEd(i);
      CodeEs(sp, "]="); 
      CodeEs(sp, dim); 
      CodeEs(sp, ";\n"); 
      i=i+1;
      p = PtreeMvsister(p);
    }

    /* Allocate memory */
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
  }

  /* If array of basic types allocate memory */

  if((LibeStrcmp(structflag,"struct") == ERR) 
    && (LibeStrcmp(arrayflag,"array") == OK)){
    LibeFlush(stderr);

    /* Emit declaration for array desriptor */
    CodeEs(sp,"nctemp");
    CodeEs(sp, type);
    CodeEd(rank);
    CodeEs(sp," *");
    CodeEs(sp,pointer);
    CodeEs(sp,";\n");
    p=top;
    i=0;
    /* Allocate memory for descriptor */
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

    while(p != NULL){
      /* Fill in array dimensions in descriptor */
      dim= CodeExpr(p);
      CodeEs(p, pointer);
      CodeEs(p,"->d");
      CodeEs(p, "["); CodeEd(i);
      CodeEs(p, "]="); 
      CodeEs(p, dim); 
      CodeEs(p, ";\n"); 
      i=i+1;
      p = PtreeMvsister(p);
    }

    /* Allocate memory */
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
  }
  return(pointer);
}
/*
\end{verbatim}
%=====================================================================
\subsection{CodeNewdescr  -- Generate code for array descriptor}
%=====================================================================
\begin{verbatim}
*/
int CodeNewdescr(struct tree p, char[*] pointer)
{ 
  CodeEs(p, pointer);
  CodeEs(p, "=");
  CodeEs(p, "RunMalloc(");
  CodeEs(p, "sizeof(");
  CodeEs(p, pointer);
  CodeEs(p, "));\n");
  return(OK);
}
/*
\end{verbatim}
%=====================================================================
\subsection{CodeDelete  -- Generate code for the delete operator}
%=====================================================================
\begin{verbatim}
*/
char [*] CodeDelete(struct tree p)
{ 
  char [*] tmp;

  p = PtreeMvchild(p);
  p = PtreeMvchild(p);
  tmp = CodeBinexpr(p);
  if(LibeStrcmp(PtreeGetref(p),"aref")){
    CodeEs(p, "RunFree(");
    CodeEs(p, tmp);
    CodeEs(p, "->a);\n");
    CodeEs(p, "RunFree(");
    CodeEs(p, tmp);
    CodeEs(p, ");\n");
  }
  return(tmp);
}
/*
\end{verbatim}
%=====================================================================
\subsection{CodeLen  -- Generate code for the len operator}
%=====================================================================
\begin{verbatim}
*/
char [*] CodeLen(struct tree p)
{ 
  struct tree np;
  struct tree sp;
  char [*] temp;
  char [*] index;
  
  char[*] tempr;
  tempr = CodeNewtemp(PtreeGetype(p));
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
}
/*
\end{verbatim}
%=====================================================================
\subsection{CodeCmplx  -- Generate code for the cmplx operator}
%=====================================================================
\begin{verbatim}
*/
char [*] CodeCmplx(struct tree p)
{ 
  struct tree np;
  struct tree sp;
  char [*] q,r,tempr;
  tempr = CodeNewtemp(PtreeGetype(p));
  
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
}
/*
\end{verbatim}
%=====================================================================
\subsection{CodeIm  -- Generate code for the im operator}
%=====================================================================
\begin{verbatim}
*/
char [*] CodeIm(struct tree p)
{ 
  struct tree np;
  char [*] q, tempr;
  tempr = CodeNewtemp(PtreeGetype(p));
  
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
}
/*
\end{verbatim}
%=====================================================================
\subsection{CodeRe  -- Generate code for the re operator}
%=====================================================================
\begin{verbatim}
*/
char [*] CodeRe(struct tree p)
{ 
  struct tree np;
  char [*] q,tmp;
  
  np = PtreeMvchild(p);
  q = CodeExpr(np);

  tmp= CodeNewtemp(PtreeGetype(p));
  CodeEs(p, PtreeGetype(p));
  CodeEs(p, " ");
  CodeEs(p, tmp);
  CodeEs(p, " =");
  CodeEs(p, q);
  CodeEs(p, ".r  ");
  CodeEs(p, ";\n");
  return(tmp);
}
/*
\end{verbatim}
%=====================================================================
\subsection*{CodeFcall -- Generate code for function call}  
%=====================================================================
 \begin{verbatim}
*/
char [*] CodeFcall(struct tree p)
{ 
  struct symbol tp;
  struct tree sp;
  char [*] temp, ntemp;
  int noargs;  /* Number of arguments */

  noargs=0;
  tp = SymLookup(PtreeGetdef(p), SymGetetp());
  sp = PtreeMvchild(p);    
  if(sp != NULL){
    if(LibeStrcmp(PtreeGetname(sp), "exprlist") == OK){
      sp = PtreeMvchild(sp);
    }
  }
  while(sp != NULL){
    ntemp = CodeNewtemp(PtreeGetype(sp));
    PtreeSetempr(sp,ntemp);
    temp = CodeExpr(sp);
    if(LibeStrcmp(PtreeGetref(sp),"aref") == OK){
      CodeEs(sp,"nctemp");
      CodeEs(sp,PtreeGetype(sp));
      CodeEd(PtreeGetrank(sp));
      CodeEs(sp,"*");
    } 
    else if(LibeStrcmp(PtreeGetref(sp),"sref") == OK){
      CodeEs(sp,"struct ");
      CodeEs(sp,PtreeGetype(sp));
      CodeEs(sp,"*");
    }else{
      CodeEs(sp,PtreeGetype(sp));
    }
    CodeEs(sp," ");
    CodeEs(sp, ntemp);
    CodeEs(sp, "= ");
    CodeEs(sp, temp);
    CodeEs(sp, ";\n");
    sp = PtreeMvsister(sp);  
  }

  ntemp = CodeNewtemp(PtreeGetype(p));
    if(LibeStrcmp(PtreeGetref(p),"aref") == OK){
      CodeEs(p,"nctemp");
      CodeEs(p,PtreeGetype(p));
      CodeEd(PtreeGetrank(p));
      CodeEs(p,"*");
    } 
    else if(LibeStrcmp(PtreeGetref(p),"sref") == OK){
      CodeEs(p,"struct ");
      CodeEs(p,PtreeGetype(p));
      CodeEs(p,"*");
    }else{
      CodeEs(p,PtreeGetype(p));
    }

  /* CodeEs(p,PtreeGetype(p)); */
  CodeEs(p," ");
  CodeEs(p,ntemp);
  CodeEs(p,"=");
  CodeEs(p, SymGetname(tp));
  CodeEs(p, "(");
  sp = PtreeMvchild(p);
  if(sp != NULL){
    sp = PtreeMvchild(sp);
  }
  while(sp != NULL){
    CodeEs(p,PtreeGetempr(sp));
    if((sp = PtreeMvsister(sp)) != NULL)
      CodeEs(p, ",");  
    noargs=noargs+1;
  }
  CodeEs(p, ");\n");  
  return(ntemp);
}
/*
\end{verbatim}
%=====================================================================
\subsection{CodeArray  -- Generate code for array reference}
%=====================================================================
\begin{verbatim}
*/
char [*] CodeArray(struct tree p, char [*] qual, char [*] sel)
{ 
  char [*] name;
  char [*] temp, temp2;
  struct symbol tp;      /* Pointer to symbol table entry for array */
  struct tree sp;
  int rank;
  int size;
  char [*] rval;
  int i;

  name = PtreeGetdef(p);
  temp = CodeNewtemp(PtreeGetype(p));
  tp=SymLook(name);
  if(tp==0){ErrPanic(name);}
  sp = PtreeMvchild(p);
  if(sp==NULL){
    return(PtreeGetdef(p));
  }
  else if(LibeStrcmp(PtreeGetname(sp),"exprlist") == ERR){ 
    return(PtreeGetdef(p));
  }
  rank = SymGetrank(tp);
  p = PtreeMvchild(p);
  p = PtreeMvchild(p);
  sp = p;


  for(i=0; i<rank; i=i+1){
    if(i == 0){
      temp2 = CodeExpr(p);
      CodeEs(p,PtreeGetype(p));
      CodeEs(p," ");
      CodeEs(p, temp); 
      CodeEs(p, "="); 
      CodeEs(p, temp2); 
      CodeEs(p, ";\n"); 
      if(CodeArraycheck()){
        CodeArrayex(PtreeGetline(p), qual, sel, name, temp2, i);
      }
    }
    else{
      temp2 = CodeExpr(sp);
      CodeEs(p,temp); 
      CodeEs(p,"="); 
      CodeEs(p,temp2); 
      CodeEs(p,"*"); 
      if(qual != NULL){
        CodeEs(p,qual);
      }
      if(sel != NULL){
        CodeEs(p,sel);
      }
      CodeEs(p, name);
      CodeEs(p, "->d");
      CodeEs(p, "[");
      CodeEd(i-1);
      CodeEs(p, "]");
      CodeEs(p,"+"); 
      CodeEs(p, temp); 
      CodeEs(p, ";\n");
      if(CodeArraycheck()){
        CodeArrayex(PtreeGetline(p), qual, sel, name, temp2, i);
      }
    }
    if(sp != NULL) sp = PtreeMvsister(sp);
  }
  size = LibeStrlen(name) + LibeStrlen(temp)+6; 
  rval = new(char[size]);
  LibeStrcpy(name, rval);
  LibeStrcat("->a",rval);
  LibeStrcat("[",rval);
  LibeStrcat(temp,rval);
  LibeStrcat("]",rval);
  return (rval);
}
/*
\end{verbatim}
%=====================================================================
\subsection{CodeArrayex  -- Generate code for arry exception}
%=====================================================================
\begin{verbatim}
*/
int CodeArrayex(int line, char [*] qual, char [*] sel, char [*] name, 
                char [*] ival, int index)
{ 
  struct tree p;

  p = PtreeMknode("dummy", "dummy");
  PtreeSetline(p,line);

  CodeEs(p,"if((0>");
  CodeEs(p,ival);
  CodeEs(p,")||(");
  CodeEs(p,ival);
  CodeEs(p,">=");
  if(qual != NULL){
    CodeEs(p,qual);
    CodeEs(p,sel);
  }
  CodeEs(p,name);
  CodeEs(p,"->d[");
  CodeEd(index);
  CodeEs(p,"])){\n");

  CodeEs(p,"nctempstring->a=");
  CodeEs(p,"\"");
  if(qual != NULL){
    CodeEs(p,qual);
    CodeEs(p,sel);
  }
  CodeEs(p,name);
  CodeEs(p,"\"");
  CodeEs(p,";\n");

  CodeEs(p,"nctempstring->d[0]=");
  CodeEs(p,"strlen(\"");
  if(qual != NULL){
    CodeEs(p,qual);
    CodeEs(p,sel);
  }
  CodeEs(p,name);
  CodeEs(p,"\")+1;");
  CodeEs(p,";\n");

  CodeEs(p, "LibeArrayex(");
  CodeEd(line);
  CodeEs(p, ",");
  CodeEs(p, "nctempstring");
  CodeEs(p, ",");
  CodeEs(p, ival);
  CodeEs(p, ",");
  CodeEd(index);
  CodeEs(p, ",");
  if(qual != NULL){
    CodeEs(p,qual);
    CodeEs(p,sel);
  }
  CodeEs(p, name);
  CodeEs(p, "->d[");
  CodeEd(index);
  CodeEs(p, "]");
  CodeEs(p, ");\n");

  CodeEs(p,"}\n");

  return(OK);
}
/*
\end{verbatim}
%=====================================================================
\subsection{CodeCast  -- Generate code for cast expression}
%=====================================================================
\begin{verbatim}
*/
char [*] CodeCast(struct tree p)
{ 
  struct tree np, sp, tp;
  char [*] expr;
  int rank;
  int i;
  char [*] dim;
  char [*] pointer, descr,tmp;
  char [*] type;

  pointer = CodeNewtemp(PtreeGetype(p));
  descr= CodeNewtemp(PtreeGetype(p));
  type = PtreeGetype(p);

  if(LibeStrcmp(PtreeGetname(p),"cast")==OK){
    np = PtreeMvchild(p);
    sp = PtreeMvsister(np);
    expr = CodeExpr(sp);
    if(LibeStrcmp(PtreeGetref(np),"sref")==OK){
      tmp = CodeNewtemp(PtreeGetype(p));
      CodeEs(p,type);
      CodeEs(p," ");
      CodeEs(p,tmp);
      CodeEs(p,"=");
      CodeEs(p,"(struct ");
      CodeEs(p, PtreeGetype(np));
      CodeEs(p,"*)(");
      CodeEs(p,expr);
      CodeEs(p,");\n");
    }
    else if(LibeStrcmp(PtreeGetref(np), "aref")==OK){
      np = PtreeMvchild(np);
      np = PtreeMvchild(np);
      np = PtreeMvchild(np);
      np = PtreeMvchild(np);
      tp = np;

      rank=1;
      while((np=PtreeMvsister(np))!= NULL)
        rank=rank+1;
      if(rank > MAXRANK)
        ErrPanic("Array dimension is too large");
      
      /* Compute total size of array */

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
      while(p != NULL){
        dim = CodeExpr(p);
        CodeEs(sp, descr);
        CodeEs(sp,".d");
        CodeEs(sp, "["); CodeEd(i);
        CodeEs(sp, "]="); 
        CodeEs(sp, dim); 
        CodeEs(sp, ";\n"); 
        i=i+1;
        p = PtreeMvsister(p);
      }
      CodeEs(sp,pointer);
      CodeEs(sp,"=&");
      CodeEs(sp,descr);
      CodeEs(sp,";\n");
    }
    else{
      CodeEs(p,type);
      CodeEs(p," ");
      CodeEs(p,pointer);
      CodeEs(p,"=");
      CodeEs(p,"(");
      CodeEs(p, PtreeGetype(np));
      CodeEs(p,")(");
      CodeEs(p,expr);
      CodeEs(p,");\n");
    }
  }
  return(pointer);
}
/*
\end{verbatim}
%=====================================================================
\subsection{CodeQident  -- make qualified identifier}
%=====================================================================
\begin{verbatim}
*/
char [*] CodeQident(char [*] qual, char [*] ident)
{ 
  int lq, li;
  char [*] name;
  
  lq = LibeStrlen(qual);
  li = LibeStrlen(ident);
  name = new(char[lq+li+2]);
  LibeStrcpy(qual,name);
  LibeStrcat(".",name);
  LibeStrcat(ident,name); 
  return(name);
} 
/*
\end{verbatim}
%=====================================================================
\subsection{CodeQident2  -- make qualified identifier}
%=====================================================================
\begin{verbatim}
*/
char [*] CodeQident2(char [*] qual, char [*] ident)
{ 
  int lq, li;
  char [*] name;

  lq = LibeStrlen(qual);
  li = LibeStrlen(ident);
  name = new(char[lq+li+3]);
  LibeStrcpy(qual,name);
  LibeStrcat("->",name);
  LibeStrcat(ident,name); 

  return(name);
} 
/*
\end{verbatim}
%=====================================================================
\subsection{CodeEs  -- emit string}
%=====================================================================
This is a primitive routine emitting a string {\tt s}.
The {\tt line} argument must contain the current line number,
usuallay obtained through a call of {\tt PtreeGetline}.
\begin{verbatim}
*/
int CodeEs(struct tree p, char [*] s)
{ 
  int fdo;

  fdo= CodeGetfdout();

  if(CodeDebug()==OK){
    if(p != NULL){
      if(PtreeGetline(p) != CodeLine){
        LibePuts(fdo,"\n");
        LibePuts(fdo,"#line ");
        LibePuti(fdo,PtreeGetline(p));
        LibePuts(fdo,"  ");
        LibePutc(fdo,DFN);
        LibePuts(fdo,PtreeGetfile(p));
        LibePutc(fdo,DFN);
        LibePuts(fdo,"\n");
        CodeLine = PtreeGetline(p);
      } 
    }
  }
  LibePuts(fdo,s);
  LibeFlush(fdo);
  return(OK);
} 
/*
\end{verbatim}
%=====================================================================
\subsection{CodeEd  -- emit decimal}
%=====================================================================
No comments, really needed, the routine emits a decimal
number, and that's it.
\begin{verbatim}
*/
int CodeEd(int d)
{ 
  int fdo;
  fdo= CodeGetfdout();
  LibePuti(fdo, d);
  return(OK);
} 
//CodeEc emits a character
int CodeEc(int d)
{ 
  int fdo;

  fdo= CodeGetfdout();
  LibePutc(fdo, d);
  return(OK);
} 
//CodeEsr emits a string without 
int CodeEsr(char [*] s)
{ 
  int i,l;
  int fdo;

  fdo= CodeGetfdout();

  l=LibeStrlen(s);
  for(i=1; i<l-1; i=i+1){
    LibePutc(fdo,cast(int,s[i]));
  }
  LibeFlush(fdo);
  return(OK);
} 

// Cpu code generation 
// The code below performs code generation for single/multicore cpu's.

// CodePreamble() emits declarations needed for each compilation unit
int CodePreamble(){
  if (CodeGetarch() == CPU){
    CodePreamblecpu();
    return(OK);
  }else if(CodeGetarch() == CUDA){
    CodePreamblecuda();
    return(OK);
  }else if(CodeGetarch() == HIP){
    CodePreamblehip();
    return(OK);
  } else {
    return(ERR);
  }
}  

// CodePreamblecpu() emits declarations needed for each compilation unit
// for the cpu architecture
int CodePreamblecpu()
{    
  struct tree p;

  p = PtreeMknode("dummy", "dummy");

  PtreeSetline(p,1);
  CodeEs(p, "/*  Translated by epsc  version today */\n");
  PtreeSetline(p,2);
  PtreeSetline(p,3);
  PtreeSetline(p,4);
  CodeEs(p, 
    "#include <stddef.h>\n");
  CodeEs(p, 
    "typedef struct { float r; float i;} complex; \n");
  PtreeSetline(p,3);
  CodeEs(p, 
    "typedef struct nctempfloat1 { int d[1]; float *a;} nctempfloat1; \n");
  PtreeSetline(p,5);
  CodeEs(p, 
    "typedef struct nctempint1 { int d[1]; int *a;} nctempint1; \n");
  PtreeSetline(p,7);
  CodeEs(p, 
    "typedef struct nctempchar1 { int d[1]; char *a;} nctempchar1; \n");
  PtreeSetline(p,7);
  CodeEs(p, 
    "typedef struct nctempcomplex1 { int d[1]; complex *a;} nctempcomplex1; \n");
  PtreeSetline(p,8);

  if(CodeArraycheck() == OK){
    CodeEs(p, 
    "static struct nctempchar1 nctempstringx = {0, NULL};\n");
    CodeEs(p,
    "static struct nctempchar1 *nctempstring = &nctempstringx;\n");
    PtreeSetline(p,8);
  }
  CodeEs(p, 
    "typedef struct nctempfloat2 { int d[2]; float *a;} nctempfloat2; \n");
  PtreeSetline(p,10);
  CodeEs(p, 
    "typedef struct nctempint2 { int d[2]; int *a;} nctempint2; \n");
  PtreeSetline(p,10);
  CodeEs(p, 
    "typedef struct nctempchar2 { int d[2]; char *a;} nctempchar2; \n");
  PtreeSetline(p,12);
  CodeEs(p, 
    "typedef struct nctempcomplex2 { int d[2]; complex *a;} nctempcomplex2; \n");

  PtreeSetline(p,13);
  CodeEs(p, 
    "typedef struct nctempfloat3 { int d[3]; float *a;} nctempfloat3; \n");
  PtreeSetline(p,14);
  CodeEs(p, 
    "typedef struct nctempint3 { int d[3]; int *a;} nctempint3; \n");
  PtreeSetline(p,15);
  CodeEs(p, 
    "typedef struct nctempchar3 { int d[3]; char *a;} nctempchar3; \n");
  PtreeSetline(p,16);
  CodeEs(p, 
    "typedef struct nctempcomplex3 { int d[3]; complex *a;} nctempcomplex3; \n");

  PtreeSetline(p,17);
  CodeEs(p, 
    "typedef struct nctempfloat4 { int d[4]; float *a;} nctempfloat4; \n");
  PtreeSetline(p,18);
  CodeEs(p, 
    "typedef struct nctempint4 { int d[4]; int *a;} nctempint4; \n");
  PtreeSetline(p,19);
  CodeEs(p, 
    "typedef struct nctempchar4 { int d[4]; char *a;} nctempchar4; \n");
  PtreeSetline(p,20);
  CodeEs(p, 
    "typedef struct nctempcomplex4 { int d[4]; complex *a;} nctempcomplex4; \n");
  CodeEs(p, 
    "#include <stdlib.h>\n");
  CodeEs(p, 
    "#include <string.h>\n");
  CodeEs(p, 
    "void *RunMalloc(int n); \n");
  CodeEs(p, 
    "int RunFree(void *n); \n");

  return (OK);
}

// CodeParallelstmnt
int CodeParallelstmnt(struct tree p){
  if(CodeGetarch() == CPU){
    CodeParallelstmntcpu(p);
  }
  else if(CodeGetarch() == CUDA){
    CodeParallelstmntgpu(p);
  }
  else if(CodeGetarch() == HIP){
    CodeParallelstmntgpu(p);
  }
  return(OK);
} 

// CodeParallelstmntcpu  generates code for the cpu parallel statement
int CodeParallelstmntcpu(struct tree p)
{ 
  struct tree sp;
  int rank;
  int i;

  sp = p;                           /* Save top node    */
  rank = PtreeGetrank(sp);          /* Get no of slices */
  p = PtreeMvchild(p);              /* Move to sliceseq */
  p = PtreeMvchild(p);              /* Move to first slice    */

  // Generate the loop code
  CodeParallelfor(p,0,rank);
  // Emit body of loop
  sp = PtreeMvchild(sp);
  sp = PtreeMvsister(sp);
  CodeStmnt(sp); 
  for(i=0;i<rank;i=i+1){
    CodeEs(sp,"}");
  }
  return(OK);
} 

// CodeParallelfor generates code for the cpu parallel for loop.
int CodeParallelfor(struct tree p , int level, int rank)
{
  struct tree sp,rp,qp,rrp;
  char[*] index,init,cond;

  sp=p;  // Save the current node
  level=level+1;

  // End of tree
  if(p==NULL)
  {
    return(OK);
  }
  p=PtreeMvsister(p);           // Next node until end of tree
  CodeParallelfor(p , level, rank);  

  rp = PtreeMvchild(sp);        // Move to inital expr of slice  
  qp = PtreeMvchild(rp);        // Move to binary expression
  qp = PtreeMvchild(qp);        // Move to index variable      
  index = PtreeGetdef(qp);      // Get index variable
  init  = CodeBinexpr(PtreeMvsister(qp)); //Find the inital expression
  rrp=PtreeMvsister(rp);        // Find end condition
  cond=CodeExpr(rrp);           // Get end condition
  if(level == rank)
  {
    CodeEs(p, "\n #pragma omp parallel for\n");  // Emit OMP pragma
  }
  CodeEs(rp,"for(");            // Emit inital part of for 
  CodeEs(rp,index);             // Emit index variable
  CodeEs(rp,"=");               
  CodeEs(rp,init);              // Emit inital expression
  CodeEs(rp,";");
  rp = PtreeMvsister(rp);            // Move to second part of slice 
  CodeEs(rp,index); CodeEs(rp,"<");  // Emit condition           
  CodeEs(p,cond);
  CodeEs(rp,";");                    // End of second part of slice  
  if((rp=PtreeMvsister(rp))!= NULL){ // Emit increment expression    
    CodeEs(rp,index); CodeEs(rp,"=");    
    CodeEs(rp,index); CodeEs(rp,"+"); 
    CodeExpr(rp); 
  }
  else{
    CodeEs(rp,index); CodeEs(rp,"=");    
    CodeEs(rp,index); CodeEs(rp,"+"); 
    CodeEs(rp,"1");
  }
  CodeEs(rp,"){");
  return(OK);
}

//CodeFdef generates code for a function.
int CodeFdef(struct tree p){
  if(CodeGetarch() == CPU){
    CodeFdefcpu(p);
  }else if(CodeGetarch() == CUDA){
    if(LibeStrcmp(PtreeGetparallel(p),"parallel")==OK){
      CodeFdefgpu(p);
      CodeFdewrappergpu(p);
    }else{
    CodeFdefcpu(p);
    }
  }else if(CodeGetarch() == HIP){
    if(LibeStrcmp(PtreeGetparallel(p),"parallel")==OK){
      CodeFdefgpu(p);
      CodeFdewrappergpu(p);
    }else{
    CodeFdefcpu(p);
    }
  }
  return(OK);
}

// CodeFdefcpu defines a regular function for the cpu architecture
int CodeFdefcpu(struct tree p)
{ 
  struct symbol tp;
  int noarg;

  noarg=0;
  tp = SymLookup(PtreeGetdef(p), SymGetetp());
  SymSetltp(SymGetable(tp));
  if(LibeStrcmp(SymGetstruct(tp),"struct") == OK){
    CodeEs(p, "struct ");
  }
  if(LibeStrcmp(SymGetarray(tp),"array") == OK){
    CodeEs(p, "nctemp");
  }
  CodeEs(p, SymGetype(tp));
  if(LibeStrcmp(SymGetarray(tp),"array") == OK){
    CodeEd(SymGetrank(tp));
    CodeEs(p," *");
  }
  if(LibeStrcmp(SymGetstruct(tp),"struct")==OK){
    CodeEs(p,"*");
  }
  CodeEs(p, " ");
  CodeEs(p, SymGetname(tp)); 
  CodeEs(p, " (");
  p = PtreeMvchild(p);    
  if(LibeStrcmp(PtreeGetname(p), "arglist") == OK){
    tp = SymGetable(tp);
    tp = SymLookup("#arglist", tp);       
    tp = SymGetable(tp);
    while((tp=SymMvnext(tp))!=NULL){
      CodeIdeclaration(p, tp);
      if(SymMvnext(tp)!=NULL){
        CodeEs(p,",");
      }
      noarg=noarg+1;
    }
  }
  CodeEs(p, ")\n");
  if(PtreeMvsister(p) != NULL)
    CodeCompstmnt(PtreeMvsister(p));
  else
    CodeCompstmnt(p);

  return(OK);
}
// CodeParallelstmtgpu generates gpu code for the
// parallelstmnt.
 int CodeParallelstmntgpu(struct tree p)
{ 
  char [*] pno,n1,n2,n3,nmax;
  char [*] m1,m2,m3;
  char [*] indx1, indx2;
  struct tree ix,sp,q,ps,psliceseq;
  int rank;
  char[*] tmp;

  CodeSetparallel(OK);
  sp = p;                           /* Save top parallel node       */
  pno="nctempno";                   /* Set processor no name        */
  rank = PtreeGetrank(p);           /* Get no of slices             */
  p = PtreeMvchild(p);              /* Move to sliceseq             */
  psliceseq = p;                    /* Save pointer to slice seq    */                
  nmax = CodeNewtemp(PtreeGetype(p));/* Save temporary              */

  /* First rank  */
  p = PtreeMvchild(psliceseq);      /* Move to first slice */
  ps = p;                           /* Save pointer to first slice */
  n1 = CodeNewtemp("int");          /* Get temporary   */
  m1 = CodeNewtemp("int");          /* Get temporary   */
  q = PtreeMvchild(p);              /* Move to 1st expr        */
  q = PtreeMvchild(q);              /* Move to binary expr */
  q = PtreeMvchild(q);              /* Move to loop index  */
  ix = q;
  q = PtreeMvsister(q);             /* Move to lower limit  */
  tmp=CodeUnexpr(q);                /* Create code for unary expression */    
  CodeEs(p,"int ");                 /* Emit type for low limit temp     */ 
  CodeEs(p,m1);                     /* Emit name for low limit          */
  CodeEs(p,"=");                    /* Emit assignment                  */      
  CodeEs(p,tmp);                    /* Emit low limit                   */
  CodeEs(p,";\n");               
  indx1 = PtreeGetdef(ix);          /* Get the first loop index         */

  q = PtreeMvchild(ps);             /* Move to 1st expr                 */
  q = PtreeMvsister(q);             /* Move to 2nd expr                 */ 
  n1 = CodeNewtemp(PtreeGetype(ps));/* Get temporary                    */
  tmp=CodeExpr(q);                  /* Emit expression    for upper limit */
  CodeEs(q,"int ");                 /* Emit type for upper limit          */
  CodeEs(q,n1);                     /* Emit name for upper limit          */
  CodeEs(q,"=");
  CodeEs(q,tmp);
  CodeEs(q,";\n");

  if(rank > 1){
    p = PtreeMvchild(psliceseq);      /* Move to first slice          */
    p = PtreeMvsister(p);             /* Move to second slice         */
    ps = p;                           /* Save pointer to second slice */
    n2 = CodeNewtemp("int");          /* Get temporary                */
    m2 = CodeNewtemp("int");          /* Get temporary                */
    q = PtreeMvchild(p);              /* Move to 1st expr             */
    q = PtreeMvchild(q);              /* Move to binary expr          */
    q = PtreeMvchild(q);              /* Move to loop index           */
    ix = q;
    q = PtreeMvsister(q);             /* Move to lower limit  */
    tmp=CodeUnexpr(q);                /* Create code for unary expression */    
    CodeEs(p,"int ");                 /* Emit type for low limit temp     */ 
    CodeEs(p,m2);                     /* Emit name for low limit          */
    CodeEs(p,"=");                    /* Emit assignment                  */      
    CodeEs(p,tmp);                    /* Emit low limit                   */
    CodeEs(p,";\n");               
    indx2 = PtreeGetdef(ix);          /* Get the first loop index         */
    q = PtreeMvchild(ps);             /* Move to 1st expr                 */
    q = PtreeMvsister(q);             /* Move to 2nd expr                 */ 
    n2 = CodeNewtemp(PtreeGetype(ps));/* Get temporary                    */
    tmp=CodeExpr(q);                  /* Emit expression    for upper limit */
    CodeEs(q,"int ");                 /* Emit type for upper limit          */
    CodeEs(q,n2);                     /* Emit name for upper limit          */
    CodeEs(q,"=");
    CodeEs(q,tmp);
    CodeEs(q,";\n");
  }

  if(rank > 2){
    p = PtreeMvchild(psliceseq);      /* Move to first slice          */
    p = PtreeMvsister(p);             /* Move to second slice         */
    p = PtreeMvsister(p);             /* Move to third  slice         */
    ps = p;                           /* Save pointer to third  slice */
    n3 = CodeNewtemp("int");          /* Get temporary                */
    m3 = CodeNewtemp("int");          /* Get temporary                */
    q = PtreeMvchild(p);              /* Move to 1st expr             */
    q = PtreeMvchild(q);              /* Move to binary expr          */
    q = PtreeMvchild(q);              /* Move to loop index           */
    ix = q;
    q = PtreeMvsister(q);             /* Move to lower limit  */
    tmp=CodeUnexpr(q);                /* Create code for unary expression */    
    CodeEs(p,"int ");                 /* Emit type for low limit temp     */ 
    CodeEs(p,m3);                     /* Emit name for low limit          */
    CodeEs(p,"=");                    /* Emit assignment                  */      
    CodeEs(p,tmp);                    /* Emit low limit                   */
    CodeEs(p,";\n");               
    indx2 = PtreeGetdef(ix);          /* Get the first loop index         */
    q = PtreeMvchild(ps);             /* Move to 1st expr                 */
    q = PtreeMvsister(q);             /* Move to 2nd expr                 */ 
    n3 = CodeNewtemp(PtreeGetype(ps));/* Get temporary                    */
    tmp=CodeExpr(q);                  /* Emit expression    for upper limit */
    CodeEs(q,"int ");                 /* Emit type for upper limit          */
    CodeEs(q,n3);                     /* Emit name for upper limit          */
    CodeEs(q,"=");
    CodeEs(q,tmp);
    CodeEs(q,";\n");
  }
   
  p=sp;

  /* Calculate upper index limit */
   if(rank == 1){
    CodeEs(p,"int ");
    CodeEs(p,nmax); CodeEs(p,"="); CodeEs(p,n1); 
    CodeEs(p,"-"); CodeEs(p,m1); 
    CodeEs(p,";\n");
   }
   if(rank == 2){
    CodeEs(p, "int ");
    CodeEs(p,nmax); CodeEs(p,"="); CodeEs(p,"("); CodeEs(p,n1); CodeEs(p,"-");
    CodeEs(p,m1); CodeEs(p,")"); 
    CodeEs(p,"*"); 
    CodeEs(p,"("); CodeEs(p,n2); CodeEs(p,"-");
    CodeEs(p,m2); CodeEs(p,");\n"); 
   }
   else if(rank == 3){
    p=sp;
    CodeEs(p,nmax); CodeEs(p,"="); CodeEs(p,n1); CodeEs(p,"*"); 
                                 CodeEs(p,n2); CodeEs(p,"*"); CodeEs(p,n3); 
                                 CodeEs(p,";\n");
   }

  /* Emit for loop */
  CodeEs(p,"for("); CodeEs(p, "int "); CodeEs(p,pno); CodeEs(p,"=blockIdx.x*blockDim.x + threadIdx.x; ");
  CodeEs(p,pno); CodeEs(p, "<"); CodeEs(p,nmax); CodeEs(p,";"); CodeEs(p,pno); 
  CodeEs(p,"+=blockDim.x*gridDim.x");
  CodeEs(p,"){\n"); 
  
  /* Map loop indices   */

  if(rank == 1){
    CodeEs(p,indx1); CodeEs(p,"="); CodeEs(p,m1); CodeEs(p,"+"); CodeEs(p,"nctempno;\n");  
  }
  if(rank == 2){
    CodeEs(p,indx2); CodeEs(p,"="); CodeEs(p,m2); CodeEs(p,"+"); CodeEs(p,"nctempno"); CodeEs(p,"/("); 
    CodeEs(p,n1); CodeEs(p,"-"); CodeEs(p,m1); CodeEs(p,")");
    CodeEs(p,";\n");
    CodeEs(p,indx1); CodeEs(p,"="); CodeEs(p,m1); CodeEs(p,"+"); CodeEs(p,"nctempno"); 
    CodeEs(p,"%("); 
    CodeEs(p,n1); CodeEs(p,"-"); CodeEs(p,m1); CodeEs(p,")");
    CodeEs(p,";\n");
  }
  if(rank == 3){
    CodeEs(p,indx2); CodeEs(p,"="); CodeEs(p,m2); CodeEs(p,"+"); CodeEs(p,"nctempno"); CodeEs(p,"/("); 
    CodeEs(p,n1); CodeEs(p,"-"); CodeEs(p,m1); CodeEs(p,")");
    CodeEs(p,";\n");
    CodeEs(p,indx1); CodeEs(p,"="); CodeEs(p,m1); CodeEs(p,"+"); CodeEs(p,"nctempno"); 
    CodeEs(p,"%("); 
    CodeEs(p,n1); CodeEs(p,"-"); CodeEs(p,m1); CodeEs(p,")");
    CodeEs(p,";\n");
  }

  p=PtreeMvchild(sp);
  p=PtreeMvsister(p);
  CodeCompstmnt(p);
  CodeEs(p,"}\n");
  CodeSetparallel(ERR);
  return(OK);
} 
// CodeFdefgpu generates gpu code for function definition
int CodeFdefgpu(struct tree p)
{ 
  struct symbol tp;
  int noarg;

  noarg=0;
  tp = SymLookup(PtreeGetdef(p), SymGetetp());
  SymSetltp(SymGetable(tp));
  CodeFdeclkernel(p); 
  
  /*
  if(LibeStrcmp(SymGetstruct(tp),"struct") == OK){
    CodeEs(p, "struct ");
  }
  if(LibeStrcmp(SymGetarray(tp),"array") == OK){
    CodeEs(p, "nctemp");
  }
  */

  CodeEs(p,"__global__ ");
  CodeEs(p, "void");

  /*
  if(LibeStrcmp(SymGetarray(tp),"array") == OK){
    CodeEd(SymGetrank(tp));
  }
  if(LibeStrcmp(SymGetstruct(tp),"struct")==OK){
     CodeEs(p,"*");
  }
  */

  CodeEs(p, " ");
  CodeEs(p, "kernel_");
  CodeEs(p, SymGetname(tp)); 
  CodeEs(p, " (");
  p = PtreeMvchild(p);    
  if(LibeStrcmp(PtreeGetname(p), "arglist") == OK){
    tp = SymGetable(tp);
    tp = SymLookup("#arglist", tp);       
    tp = SymGetable(tp);
    while((tp=SymMvnext(tp))!=NULL){
      CodeIdeclaration(p, tp);
      if(SymMvnext(tp)!=NULL){
        CodeEs(p,",");
      }
      noarg=noarg+1;
    }
  }
  CodeEs(p, ")\n");
  if(PtreeMvsister(p) != NULL)
    CodeCompstmnt(PtreeMvsister(p));
  else
    CodeCompstmnt(p);

  return(OK);
}
// CodeFdefwrappergpu generates wrapper function for gpu
int CodeFdewrappergpu(struct tree p)
{ 
  struct tree top;
  struct symbol tp, toptp;
  int noarg;

  noarg=0;
  tp = SymLookup(PtreeGetdef(p), SymGetetp());
  SymSetltp(SymGetable(tp));
  
  if(LibeStrcmp(SymGetstruct(tp),"struct") == OK){
    CodeEs(p, "struct ");
  }
  if(LibeStrcmp(SymGetarray(tp),"array") == OK){
    CodeEs(p, "nctemp");
  }

  CodeEs(p, SymGetype(tp));

  if(LibeStrcmp(SymGetarray(tp),"array") == OK){
    CodeEd(SymGetrank(tp));
  }
  if(LibeStrcmp(SymGetstruct(tp),"struct")==OK){
     CodeEs(p,"*");
  }
  top = p;
  toptp=tp;
  CodeEs(p, " ");
  CodeEs(p, SymGetname(tp)); 
  CodeEs(p, " (");
  p = PtreeMvchild(p);    
  if(LibeStrcmp(PtreeGetname(p), "arglist") == OK){
    tp = SymGetable(tp);
    tp = SymLookup("#arglist", tp);       
    tp = SymGetable(tp);
    while((tp=SymMvnext(tp))!=NULL){
      CodeIdeclaration(p, tp);
      if(SymMvnext(tp)!=NULL){
        CodeEs(p,",");
      }
      noarg=noarg+1;
    }
  }

  CodeEs(p, ")\n");
  CodeEs(p, "{\n");

  p=top;
  tp=toptp;
  CodeEs(p, "  kernel_"); 
  CodeEs(p, SymGetname(tp)); 
  CodeEs(p, "<<< RunGetnb(),RunGetnt() >>>(");

  p = PtreeMvchild(p);    
  if(LibeStrcmp(PtreeGetname(p), "arglist") == OK){
    tp = SymGetable(tp);
    tp = SymLookup("#arglist", tp);       
    tp = SymGetable(tp);
    while((tp=SymMvnext(tp))!=NULL){
      CodeEs(p,SymGetname(tp));
      if(SymMvnext(tp)!=NULL){
        CodeEs(p,",");
      }
      noarg=noarg+1;
    }
  }
  CodeEs(p, ");\n");
  CodeEs(p,"GpuError();\n");
  CodeEs(p, "return(1);\n");
  CodeEs(p, "}\n");

  return(OK);
}

// CodePreamblecuda generates the cuda preamble code
int CodePreamblecuda() 
{    
  struct tree p;

  p = PtreeMknode("dummy", "dummy");

  PtreeSetline(p,1);
  CodeEs(p, "/*  Translated by epsc  version December 2021 */\n");
  PtreeSetline(p,2);
  PtreeSetline(p,3);
  CodeEs(p, 
    "typedef struct { float r; float i;} complex; \n");
  PtreeSetline(p,3);
  CodeEs(p, 
    "typedef struct nctempfloat1 { int d[1]; float *a;} nctempfloat1; \n");
  PtreeSetline(p,5);
  CodeEs(p, 
    "typedef struct nctempint1 { int d[1]; int *a;} nctempint1; \n");
  PtreeSetline(p,7);
  CodeEs(p, 
    "typedef struct nctempchar1 { int d[1]; char *a;} nctempchar1; \n");
  PtreeSetline(p,7);
  CodeEs(p, 
    "typedef struct nctempcomplex1 { int d[1]; complex *a;} nctempcomplex1; \n");
  PtreeSetline(p,8);

  CodeEs(p, 
    "typedef struct nctempfloat2 { int d[2]; float *a;} nctempfloat2; \n");
  PtreeSetline(p,10);
  CodeEs(p, 
    "typedef struct nctempint2 { int d[2]; int *a;} nctempint2; \n");
  PtreeSetline(p,10);
  CodeEs(p, 
    "typedef struct nctempchar2 { int d[2]; char *a;} nctempchar2; \n");
  PtreeSetline(p,12);
  CodeEs(p, 
    "typedef struct nctempcomplex2 { int d[2]; complex *a;} nctempcomplex2; \n");

  PtreeSetline(p,13);
  CodeEs(p, 
    "typedef struct nctempfloat3 { int d[3]; float *a;} nctempfloat3; \n");
  PtreeSetline(p,14);
  CodeEs(p, 
    "typedef struct nctempint3 { int d[3]; int *a;} nctempint3; \n");
  PtreeSetline(p,15);
  CodeEs(p, 
    "typedef struct nctempchar3 { int d[3]; char *a;} nctempchar3; \n");
  PtreeSetline(p,16);
  CodeEs(p, 
    "typedef struct nctempcomplex3 { int d[3]; complex *a;} nctempcomplex3; \n");

  PtreeSetline(p,17);
  CodeEs(p, 
    "typedef struct nctempfloat4 { int d[4]; float *a;} nctempfloat4; \n");
  PtreeSetline(p,18);
  CodeEs(p, 
    "typedef struct nctempint4 { int d[4]; int *a;} nctempint4; \n");
  PtreeSetline(p,19);
  CodeEs(p, 
    "typedef struct nctempchar4 { int d[4]; char *a;} nctempchar4; \n");
  PtreeSetline(p,20);
  CodeEs(p, 
    "typedef struct nctempcomplex4 { int d[4]; complex *a;} nctempcomplex4; \n");
  CodeEs(p, 
    "#include <stdio.h>\n");
  CodeEs(p, "extern \"C\" {\n"); 
  CodeEs(p, 
    "#include <stdlib.h>\n");
  CodeEs(p, 
    "#include <string.h>\n");
  CodeEs(p,"}\n");

  CodeEs(p,"\n");
  CodeEs(p, 
    "void *GpuNew(int n);\n");
  CodeEs(p, 
    "void *GpuDelete(void *f);\n");
  CodeEs(p, 
    "void *GpuError();\n");

  CodeEs(p, 
    "void *RunMalloc(int n);\n");
  CodeEs(p, 
    "int RunFree(void * );\n");
  CodeEs(p, 
    "int RunSync();\n");

  CodeEs(p, 
    "int RunGetnt();\n");
  CodeEs(p, 
    "int RunGetnb();\n");


  return (OK);
}

// CodePreamble generates the hip preamble.
int CodePreamblehip()
{    
  struct tree p;

  p = PtreeMknode("dummy", "dummy");

  PtreeSetline(p,1);
  CodeEs(p, "/*  Translated by epsc  version December 2021 */\n");
  PtreeSetline(p,2);
  PtreeSetline(p,3);
  CodeEs(p, 
    "typedef struct { float r; float i;} complex; \n");
  PtreeSetline(p,3);
  CodeEs(p, 
    "typedef struct nctempfloat1 { int d[1]; float *a;} nctempfloat1; \n");
  PtreeSetline(p,5);
  CodeEs(p, 
    "typedef struct nctempint1 { int d[1]; int *a;} nctempint1; \n");
  PtreeSetline(p,7);
  CodeEs(p, 
    "typedef struct nctempchar1 { int d[1]; char *a;} nctempchar1; \n");
  PtreeSetline(p,7);
  CodeEs(p, 
    "typedef struct nctempcomplex1 { int d[1]; complex *a;} nctempcomplex1; \n");
  PtreeSetline(p,8);

  //if(CodeArraycheck() == OK){
  //  CodeEs(p, 
  //  "static struct nctempchar1 nctempstring = {0, NULL};\n");
  //  PtreeSetline(p,8);
  //}
  CodeEs(p, 
    "typedef struct nctempfloat2 { int d[2]; float *a;} nctempfloat2; \n");
  PtreeSetline(p,10);
  CodeEs(p, 
    "typedef struct nctempint2 { int d[2]; int *a;} nctempint2; \n");
  PtreeSetline(p,10);
  CodeEs(p, 
    "typedef struct nctempchar2 { int d[2]; char *a;} nctempchar2; \n");
  PtreeSetline(p,12);
  CodeEs(p, 
    "typedef struct nctempcomplex2 { int d[2]; complex *a;} nctempcomplex2; \n");

  PtreeSetline(p,13);
  CodeEs(p, 
    "typedef struct nctempfloat3 { int d[3]; float *a;} nctempfloat3; \n");
  PtreeSetline(p,14);
  CodeEs(p, 
    "typedef struct nctempint3 { int d[3]; int *a;} nctempint3; \n");
  PtreeSetline(p,15);
  CodeEs(p, 
    "typedef struct nctempchar3 { int d[3]; char *a;} nctempchar3; \n");
  PtreeSetline(p,16);
  CodeEs(p, 
    "typedef struct nctempcomplex3 { int d[3]; complex *a;} nctempcomplex3; \n");

  PtreeSetline(p,17);
  CodeEs(p, 
    "typedef struct nctempfloat4 { int d[4]; float *a;} nctempfloat4; \n");
  PtreeSetline(p,18);
  CodeEs(p, 
    "typedef struct nctempint4 { int d[4]; int *a;} nctempint4; \n");
  PtreeSetline(p,19);
  CodeEs(p, 
    "typedef struct nctempchar4 { int d[4]; char *a;} nctempchar4; \n");
  PtreeSetline(p,20);
  CodeEs(p, 
    "typedef struct nctempcomplex4 { int d[4]; complex *a;} nctempcomplex4; \n");
  CodeEs(p, 
    "#include <stdio.h>\n");
  CodeEs(p, "extern \"C\" {\n"); 
  CodeEs(p, 
    "#include <stdlib.h>\n");
  CodeEs(p, 
    "#include <string.h>\n");
  CodeEs(p,"}\n");

  CodeEs(p,"#include \"hip/hip_runtime.h\" \n");
  CodeEs(p,"\n");
  CodeEs(p, 
    "void *GpuNew(int n);\n");
  CodeEs(p, 
    "void *GpuDelete(void *f);\n");
  CodeEs(p, 
    "void *GpuError();\n");
  CodeEs(p, 
    "void *RunMalloc(int n);\n");
  CodeEs(p, 
    "int RunFree(void *p);\n");

  return (OK);
}
