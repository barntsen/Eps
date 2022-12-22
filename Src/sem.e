/*
%
%     ***********************************************
%     *                                             *
       \chapter{Sem -- semantic checking}
%     *                                             *
%     ***********************************************
%
%======================================================================
\section{Introduction}
%======================================================================
\end{verbatim}
%---------------------------------------------------------------------
\subsection{Definitions}
%---------------------------------------------------------------------
\begin{verbatim}
*/
include "libe.i"   /* Include library definitions     */
include "sym.i"    /* Include symbol table interface  */
include "ptree.i"  /* Include parse tree interface    */
include "err.i"    /* Include interface to error      */
include "sem.i"    /* Include interface to sem        */
int SemExtdecl(struct tree p){}     /* Check external declarations   */
int SemStructdecl(struct tree p, struct symbol tp){}   
int SemFdecl(struct tree p, struct symbol tp){}        
int SemDeclarations(struct tree p, struct symbol tp){}
int SemDeclaration(struct tree p, struct symbol tp){}
int SemCompstmnt(struct tree p){}
int SemStmnt(struct tree p){}     
int SemWhilestmnt(struct tree p){} 
int SemForstmnt(struct tree p){}
int SemParallelstmnt(struct tree p){}
int SemIfstmnt(struct tree p){}
int SemReturnstmnt(struct tree p){}
struct tree SemExprlist(struct tree p){}   
struct tree SemExpr(struct tree p){}     
struct tree SemBinexpr(struct tree p){} 
struct tree SemAsgexpr(struct tree p){}    /* Check assignment expressions  */
struct tree SemRelexpr(struct tree p){}   
struct tree SemAddexpr(struct tree p){}
struct tree SemUnexpr(struct tree p){}    
struct tree SemPrimexpr(struct tree p){}   
int   SemId(struct tree p){}         
int   SemFcall(struct tree p){}  
int   SemStructure(struct tree p, struct symbol tp){}  
int   SemArray(struct tree p, struct symbol tp){} 
int   SemCast(struct tree p){}     
int   SemNew(struct tree p){}
int   SemDelete(struct tree p){}   
int   SemLen(struct tree p){}
int   SemSizeof(struct tree p){}
int   SemCmplx(struct tree p){} 
int   SemRe(struct tree p){}  
int   SemIm(struct tree p){}    
int   SemCopytype(struct tree p, struct tree np){}
int   SemCopyparallel(struct tree p, struct tree np){}
int   SemComparetype(struct tree p, struct tree np){}
/*
\end{verbatim}
%======================================================================
\section{SemSem -- semantic checking of the syntax tree}
%======================================================================
The entry point of the semantic checking is this routine.
\begin{verbatim}
*/
int SemSem(struct tree p, struct symbol tp)
{    
  struct symbol ltp;
  SymSetetp(tp);          
  ltp= NULL; 
  SymSetltp(ltp);
  SemExtdecl(p);  /* Check syntax tree pointed to by p       */
  return (OK);
}
/*
\end{verbatim}
%======================================================================
\section{SemExtdecl  -- Check external declaration list}  
%======================================================================
This is the start of the type checking and the routine
performs type checking for external declarations, including
structure and function definitions.
\begin{verbatim}
*/
int SemExtdecl(struct tree p)
{ 
  struct tree sp, np;

  if(LibeStrcmp(PtreeGetname(p), "extdecl")){         
    np = PtreeMvchild(p);
    PtreeSetglobal(np,"global");

   /* Check structure declaration */

    while(np!= NULL){
      sp = PtreeMvchild(np);
      if(LibeStrcmp(PtreeGetarray(np),"array")){
        sp = PtreeMvsister(sp);
      }

      if(LibeStrcmp(PtreeGetname(sp), "structdec")){   
        SemStructdecl(np, SymGetetp()); 
      }

   /* Check function declaration */

      else if(LibeStrcmp(PtreeGetname(sp), "fdecl")){
          SemFdecl(np, SymGetetp());
      } 

   /* Check variable and array declaration */

      else
        SemDeclaration(np, SymGetetp());
      np = PtreeMvsister(np);
    }
  }
  return (OK);
}
/*
\end{verbatim}
%======================================================================
\section{SemStructdecl  -- Check structure declarations}  
%======================================================================
\begin{verbatim}
*/
int SemStructdecl(struct tree p, struct symbol tp)
{ 
  struct symbol up, uup;
  char [*] structure;

  structure = PtreeGetdef(p);
  p = PtreeMvchild(p);
  p = PtreeMvchild(p);
  if(LibeStrcmp(PtreeGetname(p), "declarations")){
    up = SymMktable();
    if((uup = SymMkname(structure, tp)) == NULL)
      ErrSerror(p,"Multiple declaration", structure);
    else {
      SymSetable(uup, up);
      SymSetstruct(uup, "structdef");
      SymSetype(uup, structure);
      SemDeclarations(PtreeMvchild(p), up);
    }
  } 
  return (OK);
} 
/*
\end{verbatim}
/*
%======================================================================
\section{SemFdecl  -- Check function declaration}  
%======================================================================
The interface of a function consists of the arguments of the
function and their types. Both name and type are stored in the
symbol table at this point. When the function definition is
given, both names and types must be correctly declared.
\begin{verbatim}
*/
int SemFdecl(struct tree p, struct symbol tp)
{ 
  struct tree np, sp, tmp;
  struct symbol  up, uup, ltp;
  char [*] type;
  int rank;
  
  // The  p node is a type node  
  // Set type and rank for this function 
  if(LibeStrcmp(PtreeGetarray(p), "array")){
    rank=1;
    np = PtreeMvchild(p);
    sp = PtreeMvchild(np);
    np = PtreeMvsister(np);
    while((sp = PtreeMvsister(sp))!= NULL)
      rank = rank+1;
  }
  else{
    rank = 0;
    np = PtreeMvchild(p); 
  }
  PtreeSetrank(p,rank);
  SemCopytype(p,np);
  PtreeSetype(np, PtreeGetdef(p));

  //
  // Move to the fdecl node 
  p = np;

  np = PtreeMvchild(p);     // Arglist  
  if(LibeStrcmp(PtreeGetname(np),"arglist"))
    tmp = PtreeMvchild(np);
  else
    tmp = NULL;

  sp = PtreeMvsister(np);   /* Compound statement  */
  if(sp==NULL){
    sp = np;
    np = NULL;
  }
  else
    np = PtreeMvchild(np);  /* Type (of arglist)   */

  /* Function declaration   */

  if(PtreeMvchild(sp) == NULL){             
    if((up = SymMkname(PtreeGetdef(p), tp)) == NULL){
      ErrSerror(np,"Multiple function prototype declaration"
             , PtreeGetdef(p));
    }

    SymSetype(up, PtreeGetype(p));
    SymSetstruct(up, PtreeGetstruct(p));
    SymSetarray(up, PtreeGetarray(p));
    SymSetrank(up, PtreeGetrank(p));
    SymSetfunc(up, "fdecl");
    ltp = SymMktable();    /* Local symbol table     */
    SymSetable(up, ltp);
    up = SymMkname("#arglist", ltp);
    uup = SymMktable();
    SymSetable(up, uup);   /* Argument list table    */
    if(np != NULL)
      SemDeclarations(np, uup); 
    up = SymMkname("#self", ltp);
    SymSetfunc(up, PtreeGetdef(p));
    SymSetemit(up,ERR);
  }

  /* Function definition */

  else{                                     
    if((up = SymLookup(PtreeGetdef(p), tp)) == NULL){
      ErrSerror(p, "Undeclared function"
             , PtreeGetdef(p));
    }      
    else{
      if(LibeStrcmp(SymGetfunc(up),"fdef"))
        ErrSerror(p, "Redefinition of function", PtreeGetdef(p));
    }

    if(LibeStrcmp(SymGetype(up),PtreeGetype(p)) == ERR){ 
      ErrSerror(p,"Function type does not match declaration"
             , PtreeGetdef(p));
    }
    if(LibeStrcmp(SymGetarray(up),PtreeGetarray(p)) == ERR){ 
      ErrSerror(p,"Function type does not match declaration"
             , PtreeGetdef(p));
    }
    SymSetfunc(up, "fdef");
    PtreeSetname(p, "fdef");
    up = SymGetable(up);
    SymSetltp(up);
    if(up != NULL){
      uup = SymLookup("#arglist", up);
    }
    if(uup != NULL)
      uup = SymGetable(uup);
    while(np != NULL){
      uup = SymMvnext(uup);
      if(uup == NULL){
        ErrSerror(p,"Function definition does not match declaration"
             , PtreeGetdef(p));
      } 
      type = SymGetype(uup);
      PtreeSetype(np, PtreeGetdef(np));
      if(LibeStrcmp(type, PtreeGetype(np)) == ERR){
        ErrSerror(p,"Function definition does not match declaration"
             , PtreeGetdef(p));
      } 
      if(LibeStrcmp(SymGetarray(uup), PtreeGetarray(np)) == ERR){
        ErrSerror(p,"Function definition does not match declaration"
             , PtreeGetdef(p));
      } 
      np = PtreeMvsister(np);
    }
    if(SymMvnext(uup) != NULL){
      ErrSerror(p,"Function definition does not match declaration"
           , PtreeGetdef(p));
    } 

    if(SymGetltp() != NULL){
      up = SymLookup("#arglist", SymGetltp());
    }
    if(up != NULL){
      uup = SymGetable(up);
      SymRmtable(uup);
      uup = SymMktable();
      SymSetable(up, uup); 
      if(tmp != NULL)
        SemDeclarations(tmp, uup);  
     }
    SemCompstmnt(sp); 
    SemCopyparallel(p,sp);
  }
  return (OK);
} 
/*
%======================================================================
\section{SemDeclarations  -- Check declarations}  
%======================================================================
\begin{verbatim}
\end{verbatim}
*/
int SemDeclarations(struct tree p, struct symbol tp)
{ 
  while(p != NULL) {
    SemDeclaration(p,tp);
    p = PtreeMvsister(p);
  }
  return (OK);
} 
/*
\end{verbatim}
%======================================================================
\section{SemDeclaration  -- Check declaration}  
%======================================================================
\begin{verbatim}
*/
int SemDeclaration(struct tree p, struct symbol tp)
{
  struct tree np,sp; 
  struct symbol up;
  int rank;
  int l;
  char [*] s;
  char [*] global;

  PtreeSetype(p, PtreeGetdef(p));       /* Set the type field */
  global = PtreeGetglobal(p);

  /* Compute the rank if this was an array */

  rank = 0;
  if(LibeStrcmp(PtreeGetarray(p),"array")){
    np = PtreeMvchild(p);
    np = PtreeMvchild(np);
    rank=1;
    while((np=PtreeMvsister(np)) != NULL) 
      rank=rank+1;
    np = PtreeMvchild(p);   /* Move to the list of identifiers */
    np = PtreeMvsister(np);
  }
  else{
    np = PtreeMvchild(p);  /* Move to the list of identifiers */
  }

  /* Process the list of identifiers */

  while(np != NULL) {
    PtreeSetype(np, PtreeGetype(p));    /* Set the type field */
    if((up = SymMkname(PtreeGetdef(np), tp)) == NULL)
      ErrSerror(np,"Multiple declaration", PtreeGetdef(np));
                
    else{

     /* Record information in symbol table:  */ 

      SymSetident(up, "identifier");
      SymSetype(up, PtreeGetype(p));  
      if(LibeStrcmp(global,"global")==OK){
        SymSetglobal(up,"global");
      }
      if(LibeStrcmp(PtreeGetype(p),"const")==OK){
        sp = PtreeMvchild(np);
        sp = PtreeMvchild(sp);
        if(LibeStrcmp(PtreeGetname(sp),"unexpr")==OK){
          sp = PtreeMvchild(sp);
          l = LibeStrlen(PtreeGetdef(sp))+1+3;
          s = new(char[l]);
          LibeStrcpy("(-",s);
          LibeStrcat(PtreeGetdef(sp), s);
          LibeStrcat(")", s);
          PtreeSetdef(sp,s);
          delete(s);
        }
        SymSetype(up, PtreeGetname(sp));
        SymSetdescr(up, PtreeGetdef(sp)); 
        SymSetemit(up,ERR);
      }
      SymSetlval(up, "lval");
      if(LibeStrcmp(PtreeGetstruct(p),"struct")){
        if((SymLookup(PtreeGetype(p), SymGetetp())) == NULL)
          ErrSerror(p,"Undefined structure", PtreeGetype(p));
        SymSetstruct(up, PtreeGetstruct(p));
      }
      SymSetarray(up, PtreeGetarray(p));
      SymSetrank(up, rank);
      PtreeSetrank(np,rank);
    }
    np = PtreeMvsister(np);
  }
  return (OK);
} 
/*
\end{verbatim}
%======================================================================
\section{SemCompstmnt  -- Check compound statement}  
%======================================================================
 \begin{verbatim}
*/
 int SemCompstmnt(struct tree p)
{ 
  struct tree q;
  int parflag;

  parflag=ERR;

  q = p; /* Save top node */
  p = PtreeMvchild(p);    
  if(p==NULL){   // If empty compund stament, accept it}
    return(OK);
  }
  if(LibeStrcmp(PtreeGetname(p), "declarations")){
    SemDeclarations(PtreeMvchild(p), SymGetltp());
    p = PtreeMvsister(p);
  }
  while(p != NULL){
    if(LibeStrcmp(PtreeGetname(p), "expr")){
      SemExpr(p);
      PtreeSetopexpr(p,OK);
    }
    if(LibeStrcmp(PtreeGetname(p), "while")){
      SemWhilestmnt(p);
    }
    if(LibeStrcmp(PtreeGetname(p), "for")){
      SemForstmnt(p);
    }
    if(LibeStrcmp(PtreeGetname(p), "parallel")){
      SemParallelstmnt(p);
      PtreeSetparallel(p,"parallel");
    }
    if(LibeStrcmp(PtreeGetname(p), "if")){
      SemIfstmnt(p);
    }
    if(LibeStrcmp(PtreeGetname(p), "return")){
      SemReturnstmnt(p);
    }
    if(LibeStrcmp(PtreeGetparallel(p),"parallel")){
      parflag=OK;
    }
    p = PtreeMvsister(p);
  }

  if(parflag == OK){
    PtreeSetparallel(q,"parallel"); 
  }
  return(OK);
} 
/*
\end{verbatim}
%======================================================================
\section{SemStmnt  -- Check statement}  
%======================================================================
 \begin{verbatim}
*/
int SemStmnt(struct tree p)
{ 
  struct tree q;
  int parflag;

  parflag=ERR;
  q = p; /* Save top node */

  if(LibeStrcmp(PtreeGetname(p), "declarations")){
    SemDeclarations(p, SymGetltp());
    p = PtreeMvsister(p);
  }
  while(p != NULL){
    if(LibeStrcmp(PtreeGetname(p), "expr")){
      SemExpr(p);
      PtreeSetopexpr(p,OK);
    }
    if(LibeStrcmp(PtreeGetname(p), "compstmnt")){
      SemCompstmnt(p);
    }
    if(LibeStrcmp(PtreeGetname(p), "while")){
      SemWhilestmnt(p);
    }
    if(LibeStrcmp(PtreeGetname(p), "for")){
      SemForstmnt(p);
    }
    if(LibeStrcmp(PtreeGetname(p), "parallel")){
      parflag=OK;
    }
    if(LibeStrcmp(PtreeGetname(p), "if")){
      SemIfstmnt(p);
    }

    if(LibeStrcmp(PtreeGetname(p), "return")){
      SemReturnstmnt(p);
    }

      p = PtreeMvsister(p);
  }

  if(parflag == OK){
    PtreeSetparallel(q,"parallel");
  }

  return(OK);
} 
/*
\end{verbatim}
%======================================================================
\section{Whilestmnt  -- check while statement}  
%======================================================================
 \begin{verbatim}
*/
int SemWhilestmnt(struct tree p)
{ 
  struct tree q;

  q=p; //Save top node
  p = PtreeMvchild(p);    
  SemExpr(p);
  PtreeSetopexpr(p,OK);
  p = PtreeMvsister(p);
  SemStmnt(p);
  SemCopyparallel(q,p);
  return(OK);
}
/*
\end{verbatim}
%======================================================================
\section{SemForstmnt  -- check for statement}  
%======================================================================
 \begin{verbatim}
*/
int SemForstmnt(struct tree p)
{ 
  struct tree q;

  q=p;  //Save top node

  p = PtreeMvchild(p);    
  SemExpr(p);
  PtreeSetopexpr(p,OK);
  p = PtreeMvsister(p);
  SemExpr(p);
  PtreeSetopexpr(p,OK);
  p = PtreeMvsister(p);
  SemExpr(p);
  PtreeSetopexpr(p,OK);
  p = PtreeMvsister(p);
  SemStmnt(p);
  SemCopyparallel(q,p);
  return(OK);
}
/*
\end{verbatim}
%======================================================================
\section{SemParallelstmnt  -- check parallel statement}  
%======================================================================
 \begin{verbatim}
*/
int SemParallelstmnt(struct tree p)
{ 
  struct tree sp, rp;
  int rank;


  rank=0;
  sp = PtreeMvchild(p);    
  sp = PtreeMvchild(sp);
  while(sp != NULL){
    rp=PtreeMvchild(sp);
    SemExpr(rp);
    PtreeSetopexpr(rp,OK);
    rp = PtreeMvsister(rp);
    SemExpr(rp);
    PtreeSetopexpr(rp,OK);
    if((rp=PtreeMvsister(rp)) != NULL){
      SemExpr(rp);
      PtreeSetopexpr(rp,OK);
    }
    if(PtreeMvsister(sp) != NULL)
      rp = PtreeMvsister(sp);
    sp = PtreeMvsister(sp);
    rank=rank+1;
  }
  PtreeSetrank(p,rank);
  sp = PtreeMvchild(p);
  sp = PtreeMvsister(sp);
  SemStmnt(sp);
  return(OK);
}
/*
\end{verbatim}
%======================================================================
\section{SemIfstmnt  -- check if statement}  
%======================================================================
 \begin{verbatim}
*/
int SemIfstmnt(struct tree p)
{ 
  struct tree q;

  q = p; // Save top node
  p = PtreeMvchild(p);    
  SemExpr(p);
  PtreeSetopexpr(p,OK);
  p = PtreeMvsister(p);
  SemStmnt(p);
  SemCopyparallel(q,p);
  if((p = PtreeMvsister(p)) != NULL){
    if(LibeStrcmp(PtreeGetname(p), "else")){
      p = PtreeMvchild(p);
      SemStmnt(p);
    }
  }
  return(OK);
}
 
/*
\end{verbatim}
%======================================================================
\section{Returnstmnt  -- check return statement}  
%======================================================================
 \begin{verbatim}
*/
 int SemReturnstmnt(struct tree p)
{ 
  struct tree sp;
  struct symbol up;

  sp = PtreeMvchild(p);    
  if(sp != NULL){
    SemExpr(sp);
    PtreeSetopexpr(sp,OK);
    up = SymLookup("#self", SymGetltp());
    up = SymLook(SymGetfunc(up));
    PtreeSetype(p, SymGetype(up));
    PtreeSetstruct(p, SymGetstruct(up));
    PtreeSetarray(p, SymGetarray(up));
    PtreeSetref(p, PtreeGetref(sp));
    PtreeSetrank(p, SymGetrank(up));
    if(SemComparetype(p, sp) == ERR){
      ErrSerror(p,"Return type is incorrect ", " ");
    }
  }
  return(OK);
}
 
/*
\end{verbatim}
%======================================================================
\section{SemExpr  -- Check expression}
%======================================================================
 \begin{verbatim}
*/
struct tree SemExpr(struct tree p)
{ 
  struct tree sp;    

  sp = PtreeMvchild(p);
  sp = SemBinexpr(sp);
  SemCopytype(sp, p);
  return p;
 } 
/*
\end{verbatim}
%=============================================================
\section{SemBinexpr  -- Check binary expression}
%=============================================================
 \begin{verbatim}
*/
struct tree SemBinexpr(struct tree p)
{ 
  struct tree leftp, rightp, np;

  np = p;
  if(LibeStrcmp(PtreeGetname(p), "binexpr")){
    p = PtreeMvchild(p);    
    leftp = SemUnexpr(p);
    p = PtreeMvsister(p);    
    rightp = SemUnexpr(p);
    if(SemComparetype(leftp, rightp) == ERR){
      ErrSerror(p,"Type error", " ");
      return (p);
    }
    else{
      if((LibeStrcmp(PtreeGetdef(np), "=")))
        SemAsgexpr(np); 
      else if((LibeStrcmp(PtreeGetdef(np), "!=")) || 
              (LibeStrcmp(PtreeGetdef(np), "==")) || 
              (LibeStrcmp(PtreeGetdef(np), "||")) || 
              (LibeStrcmp(PtreeGetdef(np), "<=")) || 
              (LibeStrcmp(PtreeGetdef(np), ">=")) || 
              (LibeStrcmp(PtreeGetdef(np), "<") )  || 
              (LibeStrcmp(PtreeGetdef(np), ">"))  || 
              (LibeStrcmp(PtreeGetdef(np), "&&"))){
              SemRelexpr(np);               
      }
      else if((LibeStrcmp(PtreeGetdef(np), "+")) ||
             (LibeStrcmp(PtreeGetdef(np), "-")) ||
             (LibeStrcmp(PtreeGetdef(np), "*")) ||
             (LibeStrcmp(PtreeGetdef(np), "/"))){
              SemAddexpr(np);
      }
      return (np);
    }
  }
  else
    return (SemUnexpr(p));
} 
/*
\end{verbatim}
%======================================================================
\section{SemAsgexpr  -- Check assign expression}
%======================================================================
 \begin{verbatim}
*/
struct tree SemAsgexpr(struct tree p)
{
  struct tree np;

  np = PtreeMvchild(p);
  if(LibeStrcmp(PtreeGetlval(np), "lval") == ERR){
     ErrSerror(np,"Not a left value", PtreeGetdef(np));
                
  }
  else
    PtreeSetlval(p, "lval");
  SemCopytype(np, p);
  return(p);
}
/*
\end{verbatim}
%======================================================================
\section{SemRelexpr  -- Check relational expressions}
%======================================================================
 \begin{verbatim}
*/
struct tree SemRelexpr(struct tree p)
{
  struct tree np, rp;

  np = PtreeMvchild(p);
  rp = PtreeMvsister(np);
  
  if(LibeStrcmp(PtreeGetdef(p),"==") == ERR){
    if(LibeStrcmp(PtreeGetdef(p),"!=") == ERR){
      if((LibeStrcmp(PtreeGetref(np),"aref"))||
         (LibeStrcmp(PtreeGetref(np),"sref"))){
        ErrSerror(p,"Illegal operation", " ");
      } 
      else if((LibeStrcmp(PtreeGetref(rp),"aref"))||
        (LibeStrcmp(PtreeGetref(np),"sref"))){
         ErrSerror(p,"Illegal operation", " ");
      }
    } 
    else if((LibeStrcmp(PtreeGetype(np), "complex"))){ 
      ErrSerror(p,"Illegal operation", " ");
    }
  }
  PtreeSetype(p, "int");
  PtreeSetlval(p, "void");
  PtreeSetstruct(p, "void");
  return(p);
}
/*
\end{verbatim}
%======================================================================
\section{SemAddexpr  -- Check add expressions}
%======================================================================
\begin{verbatim}
*/
struct tree SemAddexpr(struct tree p)
{
  struct tree np, rp;
  
  np = PtreeMvchild(p);
  rp = PtreeMvsister(np);
  if((LibeStrcmp(PtreeGetref(np),"sref"))){
    ErrSerror(np,"Illegal operation", " ");
  } 
  else if((LibeStrcmp(PtreeGetref(rp),"sref"))){
     ErrSerror(np,"Illegal operation", " ");
  }
  else{ 
    SemCopytype(np, p);
    PtreeSetlval(p, "void");
  }
  return(p);
}
/*
\end{verbatim}
%======================================================================
\section{Unexpr  -- Check unary expression}
%======================================================================
 \begin{verbatim}
*/
 struct tree SemUnexpr(struct tree p)
{ 
  struct tree np;

  np = p;
  if(LibeStrcmp(PtreeGetname(p),"unexpr")){
    p = PtreeMvchild(p);
    p = SemPrimexpr(p);
    SemCopytype(p, np);
    return (np);
  }
  else
    return SemPrimexpr(p);
}
/*
\end{verbatim}
%======================================================================
\section{SemPrimexpr  -- Check primary expression}
%======================================================================
\begin{verbatim}
*/
struct tree SemPrimexpr(struct tree p)
{ 
     
  if(LibeStrcmp(PtreeGetname(p),"identifier")){
    SemId(p);
    return(p);
  }
  else if(LibeStrcmp(PtreeGetname(p), "fcall")){
    SemFcall(p);
    return (p);
  }
  else if(LibeStrcmp(PtreeGetname(p), "cast")){
    SemCast(p);
    return (p);
  }
  else if(LibeStrcmp(PtreeGetname(p), "new")){
    SemNew(p);
    return (p);
  }
  else if(LibeStrcmp(PtreeGetname(p), "delete")){
    SemDelete(p);
    return (p);
  }
  else if(LibeStrcmp(PtreeGetname(p), "cmplx")){
    SemCmplx(p);
    return (p);
  }
  else if(LibeStrcmp(PtreeGetname(p), "re")){
    SemRe(p);
    return (p);
  }
  else if(LibeStrcmp(PtreeGetname(p), "len")){
    SemLen(p);
    return (p);
  }
  else if(LibeStrcmp(PtreeGetname(p), "im")){
    SemIm(p);
    return (p);
  }
  else if(LibeStrcmp(PtreeGetname(p), "sizeof")){
    SemSizeof(p);
    return (p);
  }
  else if(LibeStrcmp(PtreeGetname(p), "iconstant")){
    PtreeSetype(p, "int");
    return (p);
  }
  else if(LibeStrcmp(PtreeGetname(p), "rconstant")){
    PtreeSetype(p, "float");
    return (p);
  }
  else if(LibeStrcmp(PtreeGetname(p), "sconstant")){
    PtreeSetype(p, "char");
    PtreeSetref(p, "aref");
    PtreeSetrank(p,1);
    return (p);
  }
  else
    return SemBinexpr(p);
}
/*
\end{verbatim}
%=============================================================
\section{SemId  -- Check identifier}
%=============================================================
\begin{verbatim}
*/
int SemId(struct tree p)
{ 
  struct symbol  tp;
  struct tree np;

  if((tp = SymLook(PtreeGetdef(p))) == NULL){
    ErrSerror(p,"Undeclared identifier", PtreeGetdef(p));
               
  }
  if(LibeStrcmp(SymGetype(tp),"iconstant")==OK){
    PtreeSetname(p,SymGetype(tp));
    PtreeSetdef(p,SymGetdescr(tp));
    PtreeSetype(p,"int");
    return(OK);
  }
  else if(LibeStrcmp(SymGetype(tp),"rconstant")==OK){
    PtreeSetname(p,SymGetype(tp));
    PtreeSetdef(p,SymGetdescr(tp));
    PtreeSetype(p,"float");
    return(OK);
  }
  else if(LibeStrcmp(SymGetype(tp),"sconstant")==OK){
    PtreeSetname(p,SymGetype(tp));
    PtreeSetdef(p,SymGetdescr(tp));
    PtreeSetype(p,"char");
    PtreeSetarray(p,"array");
    PtreeSetref(p,"aref");
    PtreeSetrank(p,1);
    return(OK);
  }
  if(LibeStrcmp(SymGetstruct(tp), "structdef")){
       ErrSerror(p,"Struct names can not be used as a variable", 
                PtreeGetdef(p));
  }
  PtreeSetype(p, SymGetype(tp));
  PtreeSetarray(p, SymGetarray(tp));
  PtreeSetrank(p, SymGetrank(tp));
  PtreeSetstruct(p, SymGetstruct(tp));
  PtreeSetlval(p, SymGetlval(tp));

  np = PtreeMvchild(p);
  if(np != NULL){
    if(LibeStrcmp(PtreeGetname(np), "exprlist")){
      SemArray(p,tp);
      if(PtreeMvsister(np) != NULL)
        SemStructure(p,tp);
      else{
        if(LibeStrcmp(PtreeGetstruct(p),"struct"))
          PtreeSetref(p,"sref");
      } 
    }
    else if(LibeStrcmp(PtreeGetname(np), "selector"))
      SemStructure(p,tp);
  }
  else{
    if(LibeStrcmp(PtreeGetarray(p),"array"))
      PtreeSetref(p,"aref");
    else if(LibeStrcmp(PtreeGetstruct(p),"struct"))
      PtreeSetref(p,"sref");
  }
  return(OK);
}
/*
\end{verbatim}
%======================================================================
\section{Semfcall  -- Check function call}
%======================================================================
 \begin{verbatim}
*/
int SemFcall(struct tree p)
{ 
  struct tree np;
  struct symbol tp;
  char[*] type;
    
  if(LibeStrcmp(PtreeGetname(p),"fcall")){
    if((tp = SymLookup(PtreeGetdef(p), SymGetetp())) == NULL){
       ErrSerror(p,"Undeclared function", 
                  PtreeGetdef(p));
       return(ERR);
    }
    if(LibeStrcmp(SymGetfunc(tp), "fdecl") == ERR)
      if(LibeStrcmp(SymGetfunc(tp), "fdef") == ERR){
         ErrSerror(p,"Not a function", PtreeGetdef(p));
         return(ERR);
      }
    PtreeSetype(p, SymGetype(tp));
    PtreeSetstruct(p, SymGetstruct(tp));
    PtreeSetarray(p, SymGetarray(tp));
    PtreeSetrank(p, SymGetrank(tp));
    if(LibeStrcmp(PtreeGetarray(p),"array")){
      PtreeSetref(p,"aref");
    }
    else if(LibeStrcmp(PtreeGetstruct(p),"struct")){
      PtreeSetref(p,"sref");
    }

    /* Get the symbol table for the function */

    tp = SymGetable(tp);         
    tp = SymLookup("#arglist", tp); 
    if(tp != NULL)
      tp = SymGetable(tp);

    if((np=PtreeMvchild(p))==0){
      if((tp=SymMvnext(tp))!= NULL){
        ErrSerror(p,"Function call does not match declaration"
          , PtreeGetdef(p));
        return(ERR);
      }
      return(OK);  /* No arguments to check */
    }

    /* Start processing of the argument list */

    np = PtreeMvchild(PtreeMvchild(p));
    while(np != NULL){
      tp = SymMvnext(tp); /* Get the next table entry */
      if(tp == NULL){
        ErrSerror(p,"Function call does not match declaration"
          , PtreeGetdef(p));
        return(ERR);
      } 
      type = SymGetype(tp);
      SemExpr(np);
      if(LibeStrcmp(type, PtreeGetype(np)) == ERR){
         ErrSerror(p,"Function call does not match declaration"
          , PtreeGetdef(p));
         return(ERR);
      } 
      if(LibeStrcmp(SymGetarray(tp), "array")){
        if(LibeStrcmp(PtreeGetref(np),"aref") == ERR){
           ErrSerror(p,"Function call does not match declaration"
                 , PtreeGetdef(p));
        }
        if(PtreeGetrank(np) != SymGetrank(tp)){
           ErrSerror(p,"Illegal array rank in function call"
                 , PtreeGetdef(p));
        }
      } 
      np = PtreeMvsister(np);
    }
    if(SymMvnext(tp) != NULL){
      ErrSerror(p,"Function call does not match declaration"
       , PtreeGetdef(p));
      return(ERR);
    } 
  }
  return(OK);
}
/*
\end{verbatim}
%======================================================================
\section{SemCast  -- Check cast expressions}
%======================================================================
 \begin{verbatim}
*/
int SemCast(struct tree p)
{
  struct tree sp, np;
  int resultrank;
  char [*] resultype, exptype;
  char [*] resultref, expref;

  resultref="void";
  expref = "void";
  if(LibeStrcmp(PtreeGetname(p),"cast")){
    np = PtreeMvchild(p);
    resultype = PtreeGetdef(np);    /* The result basic type  */
    PtreeSetype(np, resultype);

    resultrank = 0;
    if(LibeStrcmp(PtreeGetarray(np), "array")){
      sp = PtreeMvchild(np);
      sp = PtreeMvchild(sp);
      sp = PtreeMvchild(sp);
      SemExprlist(sp);
      sp = PtreeMvchild(sp);
      resultrank=1;
      while((sp=PtreeMvsister(sp)) != NULL){
        resultrank=resultrank+1;
      }
      PtreeSetrank(np, resultrank);
      PtreeSetrank(p, resultrank);
      PtreeSetref(np,"aref");
      resultref = LibeStrsave("aref");
    }
    else if(LibeStrcmp(PtreeGetstruct(np),"struct")){
      PtreeSetref(np,"sref");
      resultref = LibeStrsave("sref");
    }
    else
      resultref = LibeStrsave("void");

    SemCopytype(np,p);
    
  
    /* Process the expression to convert from */

    np = PtreeMvsister(np);
    SemExpr(np);

    /* Save type of expression in exprtype:      */

    exptype = PtreeGetype(np);
    expref  = PtreeGetref(np);

    /* Check that conversions are legal:  */

    if(LibeStrcmp(resultref, expref) == ERR){
      ErrSerror(p,"Illegal conversion"," ");
      return(ERR);
    }

    if((LibeStrcmp(resultref,"aref") == ERR)||
       (LibeStrcmp(resultref,"sref") == ERR)){
      if(LibeStrcmp(resultype, "complex"))
        ErrSerror(p,"Illegal conversion", " ");
        return(ERR);
                     
      if(LibeStrcmp(resultype,"int")){
        if(LibeStrcmp(exptype, "char") == ERR)
          if(LibeStrcmp(exptype, "float") == ERR)
            ErrSerror(p,"Illegal conversion", " ");
            return(ERR);
      }
      else if(LibeStrcmp(resultype,"char")){
        if(LibeStrcmp(exptype, "int") == ERR)
          ErrSerror(p,"Illegal conversion", " ");
          return(ERR);
      }
      else if(LibeStrcmp(resultype,"float")){
        if(LibeStrcmp(exptype, "int") == ERR)
          ErrSerror(np,"Illegal conversion", " ");
          return(ERR);
      }
    }
  }
  return(OK);
}
/*
\end{verbatim}
%======================================================================
\section{SemNew  -- Check new operator}
%======================================================================
\begin{verbatim}
*/
int SemNew(struct tree p)
{
  struct tree np, sp;
  int rank;


  if(LibeStrcmp(PtreeGetname(p),"new")){
    np = PtreeMvchild(p);
    PtreeGetdef(np);    
    PtreeSetype(np, PtreeGetdef(np));
    SemCopytype(np,p);
 
    if(LibeStrcmp(PtreeGetarray(np),"array") == ERR){
      if(LibeStrcmp(PtreeGetstruct(np),"struct") == ERR){
        ErrSerror(np,"Argument limited to array or structure type","  ");
      }
    } 
    if(LibeStrcmp(PtreeGetarray(np), "array")){
      sp = PtreeMvchild(np);
      sp = PtreeMvchild(sp);
      sp = PtreeMvchild(sp);
      sp = PtreeMvchild(sp);
      rank=1;
      if(sp==NULL){
        ErrSerror(np,"Missing array size in new operator"  , " ");
             
      }
      SemExpr(sp);
      while((sp=PtreeMvsister(sp)) != NULL){
        SemExpr(sp);
        rank=rank+1;
      }
      PtreeSetrank(np, rank);
      PtreeSetrank(p, rank);
      PtreeSetref(p,"aref");
    }
    else
      PtreeSetref(p,"sref");
  }
  return(OK);
}
/*
\end{verbatim}
%======================================================================
\section{SemDelete  -- Check delete operator}
%======================================================================
\begin{verbatim}
*/
int SemDelete(struct tree p)
{
  struct tree np;

  if(LibeStrcmp(PtreeGetname(p),"delete")){
    np = PtreeMvchild(p);
    SemExpr(np);
    if(LibeStrcmp(PtreeGetref(np),"aref") == ERR){
      if(LibeStrcmp(PtreeGetref(np),"sref") == ERR){
        ErrSerror(p,"not a array or structure", 
                  PtreeGetdef(p));
      }
    }
    else{
      PtreeSetype(p, PtreeGetype(np));
      PtreeSetref(p, PtreeGetref(np));
    }
  }
  return(OK);
}
/*
\end{verbatim}
%======================================================================
\section{SemSizeof  -- Check sizeof operator}
%======================================================================
\begin{verbatim}
*/
int SemSizeof(struct tree p)
{
  if(LibeStrcmp(PtreeGetname(p),"sizeof")){
    PtreeSetype(p, "int");
  }
  return(OK);
}
/*
\end{verbatim}
%======================================================================
\section{SemCmplx  -- Check cmplx operator}
%======================================================================
\begin{verbatim}
*/
int SemCmplx(struct tree p)
{
  struct tree np;

  if(LibeStrcmp(PtreeGetname(p),"cmplx")){
    np = PtreeMvchild(p);
    np = PtreeMvchild(np);
    SemExpr(np);
    if(LibeStrcmp(PtreeGetype(np), "float") == ERR){
      ErrSerror(p,"Argument to cmplx is not a float", 
                PtreeGetdef(p));
      return(ERR);
    }
    if(LibeStrcmp(PtreeGetref(np), "aref") ||
       LibeStrcmp(PtreeGetref(np), "sref")){
      ErrSerror(p,"Argument to cmplx is not a scalar", 
      PtreeGetdef(p));
      return(ERR);
    }
    np = PtreeMvsister(np);
    SemExpr(np);
    if(LibeStrcmp(PtreeGetype(np), "float") == ERR){
      ErrSerror(p,"Argument to cmplx is not a float", 
                PtreeGetdef(p));
    }
    if(LibeStrcmp(PtreeGetref(np), "aref") ||
       LibeStrcmp(PtreeGetref(np), "sref")){
      ErrSerror(p,"Argument to cmplx is not a scalar", 
                PtreeGetdef(p));
      return(ERR);
    }
    PtreeSetype(p,"complex");
  }
  return(OK);
}
/*
\end{verbatim}
%======================================================================
\subsection{SemRe  -- Check Re operator}
%======================================================================
\begin{verbatim}
*/
int SemRe(struct tree p)
{
  struct tree np;

  if(LibeStrcmp(PtreeGetname(p),"re")){
    np = PtreeMvchild(p);
    SemExpr(np);
    if(LibeStrcmp(PtreeGetype(np), "complex") == ERR){
      ErrSerror(p,"Argument to re is not a of type complex", 
      PtreeGetdef(p));
      return(ERR);
    }
    if(LibeStrcmp(PtreeGetref(np), "aref") ||
       LibeStrcmp(PtreeGetref(np), "sref")){
      ErrSerror(p,"Argument to re is not a scalar", 
      PtreeGetdef(p));
      return(ERR);
    }
    PtreeSetype(p,"float");
  }
  return(OK);
}
/*
%======================================================================
\section{SemIm  -- Check Im operator}
%======================================================================
\begin{verbatim}
*/
int SemIm(struct tree p)
{
  struct tree np;

  if(LibeStrcmp(PtreeGetname(p),"im")){
    np = PtreeMvchild(p);
    SemExpr(np);
    if(LibeStrcmp(PtreeGetype(np), "complex") == ERR){
      ErrSerror(p,"Argument to re is not of type complex", 
      PtreeGetdef(p));
      return(ERR);
    }
    if(LibeStrcmp(PtreeGetref(np), "aref") ||
       LibeStrcmp(PtreeGetref(np), "sref")){
      ErrSerror(p,"Argument to re is not a scalar", 
                PtreeGetdef(p));
      return(ERR);
    }
    PtreeSetype(p,"float");
  }
  return(OK);
}
/*
\end{verbatim}
%======================================================================
\section{SemLen  -- Check Len operator}
%======================================================================
\begin{verbatim}
*/
int SemLen(struct tree p)
{
  struct tree np;

  if(LibeStrcmp(PtreeGetname(p),"len") == OK){
    PtreeSetype(p,"int");
    np = PtreeMvchild(p);
    SemExpr(np);
    if(LibeStrcmp(PtreeGetref(np),"aref") == ERR){
      ErrSerror(p,"not an array", PtreeGetdef(p));
    }
    np = PtreeMvsister(np);
    SemExpr(np);
    if(LibeStrcmp(PtreeGetref(np),"aref")){
      ErrSerror(p, "not a scalar", PtreeGetdef(p));
    }
    if(LibeStrcmp(PtreeGetype(np),"int") == ERR){
      ErrSerror(p,"not an integer expression", 
      PtreeGetdef(p));
    }
    if((np=PtreeMvsister(np)) != NULL){
      ErrSerror(p, "too many arguments", PtreeGetdef(p));
    }
  }
  return(OK);
}
/*
\end{verbatim}
%======================================================================
\section{SemArray  -- Check array references}
%======================================================================
\begin{verbatim}
*/
int SemArray(struct tree p, struct symbol tp)
{ 
  struct tree np;
  int rank;

  if(LibeStrcmp(PtreeGetarray(p),"array") == ERR){
    ErrSerror(p,"Not an array", PtreeGetdef(p));
    return(ERR);
  }

  PtreeSetname(p,"identifier");
  np = PtreeMvchild(p);

  if(LibeStrcmp(PtreeGetname(np),"exprlist") == ERR){
     ErrSerror(p, "Missing array indexes", PtreeGetdef(p)); 
     return(ERR);
  } 
  if((np = PtreeMvchild(np)) != NULL){
    rank = 0;
    while(np != NULL){
      SemExpr(np);
      np = PtreeMvsister(np);
      rank = rank + 1;
    } 
  }
  if(rank != SymGetrank(tp)){
    ErrSerror(p,"Illegal array dimension", PtreeGetdef(p)); 
    return(ERR);
  }
  PtreeSetrank(p, rank);

  return(OK);
}
/*
\end{verbatim}
%======================================================================
\section{SemStructure  -- Check structure reference}
%======================================================================
\begin{verbatim}
*/
int SemStructure(struct tree p, struct symbol tp)
{ 
  char [*] temp;
  struct symbol up, uup;
  struct tree np;

  if(LibeStrcmp(PtreeGetstruct(p),"struct") == ERR){
    ErrSerror(p,"Not a structure", PtreeGetdef(p));
    return(ERR);
  }
  PtreeSetname(p,"identifier");

  temp = SymGetype(tp);
  if((up = SymLook(temp)) == NULL){
    if((up = SymLook(temp)) == NULL){
       ErrSerror(p,"Undeclared structure type"," ");
       return(ERR);
    } 
  }
  if(LibeStrcmp(SymGetstruct(tp), "structdef")){
       ErrSerror(p,"Struct names can not be used as a variable", 
                  PtreeGetdef(p));
       return(ERR);
  }
  np = PtreeMvchild(p);
  if(np == 0){
    ErrSerror(p, "Missing structure selector", PtreeGetdef(p)); 
    return(ERR);
  } 

  if(LibeStrcmp(PtreeGetarray(p),"array")){
    np = PtreeMvsister(np);
  }
  if(np == 0){
    ErrSerror(p, "Missing array index", PtreeGetdef(p));
    return(ERR);
  } 
  uup = SymGetable(up);
  if((tp  = SymLookup(PtreeGetdef(np), uup)) == NULL){
    ErrSerror(np, "Undeclared structure member", 
               PtreeGetdef(np));
    return(ERR);
  }

  if(LibeStrcmp(SymGetarray(tp),"array")){
    if(PtreeMvchild(np) != NULL){
      SemArray(np, tp);
      if(LibeStrcmp(SymGetstruct(tp),"struct")){
        PtreeSetref(np,"sref");
      }
    }
    else
      PtreeSetref(np,"aref");
  }
  else if(LibeStrcmp(SymGetstruct(tp),"struct")){
    PtreeSetref(np,"sref");
  }
  PtreeSetype(np, SymGetype(tp));
  PtreeSetarray(np, SymGetarray(tp));
  PtreeSetrank(np, SymGetrank(tp));
  PtreeSetlval(np, SymGetlval(tp));
  PtreeSetype(p, SymGetype(tp));
  PtreeSetref(p,PtreeGetref(np));
  PtreeSetrank(p, SymGetrank(tp));

  return(OK);
}
/*
\end{verbatim}
%======================================================================
\section{SemExprlist  -- Check expression list}
%======================================================================
\begin{verbatim}
*/
struct tree SemExprlist(struct tree p)
{ 
  if(LibeStrcmp(PtreeGetname(p),"exprlist")){
    p = PtreeMvchild(p);
    while(p != NULL){
      SemExpr(p);
      p = PtreeMvsister(p);
    }
  }
  return(p);
}
/*
\end{verbatim}
%======================================================================
\section{SemComparetype  -- Compare type fields}
%======================================================================
\begin{verbatim}
*/
int SemComparetype(struct tree p, struct tree np)
{ 
  int rval;

  rval = OK;
  if(LibeStrcmp(PtreeGetype(p), PtreeGetype(np)) == ERR)
    rval = ERR;
  if(LibeStrcmp(PtreeGetref(p), PtreeGetref(np)) == ERR){
    if(LibeStrcmp(PtreeGetname(np), "iconstant")){
      if(LibeStrcmp(PtreeGetdef(np),"0"))
        rval = OK;
      else
        rval = ERR;
    }
    else
      rval = ERR;
  }
  else if(LibeStrcmp(PtreeGetref(p),"aref") == OK){
    if(PtreeGetrank(p) != PtreeGetrank(np))
      rval = ERR;
  }
  return (rval);
} 
/*
\end{verbatim}
%======================================================================
\section{SemCopytype  -- Copy type fields}
%======================================================================
\begin{verbatim}
*/
int SemCopytype(struct tree p, struct tree np)
{ 
  PtreeSetype(np, PtreeGetype(p));
  PtreeSetstruct(np, PtreeGetstruct(p));
  PtreeSetarray(np, PtreeGetarray(p));
  PtreeSetref(np, PtreeGetref(p));
  PtreeSetlval(np, PtreeGetlval(p));
  PtreeSetrank(np, PtreeGetrank(p));
  return(OK);
} 
/*
\end{verbatim}
%======================================================================
\section{SemCopyparallel  -- Copy parallelfield}
%======================================================================
\begin{verbatim}
*/
int SemCopyparallel(struct tree p, struct tree np)
{ 
  PtreeSetparallel(p, PtreeGetparallel(np));
  return(OK);
} 
/*
\end{verbatim}
*/


