/*
%
%         ***********************************************
%         *                                             *
            \chapter{Ptree -- parse tree management}  
%         *                                             *
%         ***********************************************
\section{Introduction}
%
\begin{verbatim}
*/
include "libe.i"   /* Library interface */
include "scan.i"   /* Scan interface    */
include "ptree.i"  /* Ptree interface   */
include "err.i"    /* Error interface   */

/* Internal functions */

char [*] PtreeSetfield(char [*] field, char [*] value){}

/*
\end{verbatim}
%===============================================================
\section{PtreeInit()}  
%===============================================================
\begin{verbatim}
*/
int PtreeInit()
{
  return(OK);
}
/*
\end{verbatim}
%==============================================================
\section{PtreeRmtree -- remove a tree}                            
%==============================================================
\begin{verbatim}
*/
int PtreeRmtree(struct tree p)  
{
  if(p != NULL){
    PtreeRmtree(p.child);
    PtreeRmtree(p.sister);
    PtreeRmnode(p);
  }
  return(OK);
}                     
/*
\end{verbatim}
%==============================================================
\section{PtreeRmnode -- remove a node}                            
%==============================================================
\begin{verbatim}
*/
int PtreeRmnode(struct tree p)  
{
  if(p == NULL)
    return (OK);
  delete(p.name);
  delete(p.def);
  delete(p.type);
  delete(p.structure);
  delete(p.tempr);
  delete(p.tempi);
  delete(p.lval);
  delete(p.array);
  delete(p.ref);
  delete(p.descr);
  delete(p);
  return(OK);
 }                     
/*
\end{verbatim}
%==============================================================
\section{PtreeMknode -- make a node}  
%==============================================================
Make a new parse tree node 
\begin{verbatim}
*/
struct tree PtreeMknode( char [*] name, char [*] def )  
{
  struct tree p; 
  if((p = new(struct tree)) == NULL)
    ErrPanic("Out of memory");
  if((p.def = LibeStrsave(def))== NULL)
    ErrPanic("Out of memory"); 
  if((p.name = LibeStrsave(name)) == NULL)
    ErrPanic("Out of memory"); 
  p.type =  LibeStrsave("void");    
  p.structure = LibeStrsave("void"); 
  p.line =  ScanGetline();          
  p.file =  LibeStrsave(ScanGetfile());
  p.tempr = LibeStrsave("void");         
  p.tempi = LibeStrsave("void");      
  p.lval =  LibeStrsave("void");       
  p.array = LibeStrsave("void");      
  p.paral = LibeStrsave("void");      
  p.ref =   LibeStrsave("void");        
  p.descr = LibeStrsave("void");  
  p.global = LibeStrsave("void");  
  p.rank = 0;
  p.simple = EMPTY;
  p.child = NULL;
  p.sister = NULL;
  return (p);
}
/*
\end{verbatim}
%==============================================================
\section{PtreeAddchild -- add a child node}  
%==============================================================
\begin{verbatim}
*/
int PtreeAddchild(struct tree parent, struct tree child)  
{
  struct tree p, prev; 

  if((p = parent.child) == NULL){
    parent.child = child;
    return (OK);
  }
  prev = parent.child;
  while ((p = p.sister) != NULL){
    prev = p;           
  }
  prev.sister = child;
  return(OK);
}
/*
\end{verbatim}
%==============================================================
\section{PtreeAddsister -- add a sister node}
%==============================================================
\begin{verbatim}
*/
int PtreeAddsister(struct tree sister, struct tree newnode)
{
 struct tree p, prev; 
       
 p = sister;
 prev = p;
 while ((p = p.sister) != NULL){
   prev = p;           
 }
 prev.sister = newnode;
 return(OK);
}
/*
\end{verbatim}
%==============================================================
\section{PtreeMvsister -- move to the sister node}                            
%==============================================================
\begin{verbatim}
*/
struct tree PtreeMvsister(struct tree p)
{
  return(p.sister);
}                     
/*
\end{verbatim}
%=============================================================
\section{Mvchild -- move to child  node} 
%=============================================================
\begin{verbatim}
*/
struct tree PtreeMvchild(struct tree p)  
{
  return(p.child);
}                     
/*
\end{verbatim}
%=============================================================
\section{PtreeSetname  -- set the name of the node}
%=============================================================
 \begin{verbatim}
 */
int PtreeSetname(struct tree p, char [*] name)
{
  p.name=PtreeSetfield(p.name, name);
  return(OK);
}  
/*
\end{verbatim}
%=============================================================
\section{PtreeGetname  -- get the name of the node}
%=============================================================
\begin{verbatim}
*/
char  [*] PtreeGetname(struct tree p) 
{
  return(p.name);
}  
/*
\end{verbatim}
%==============================================================
\section{PtreeSetdef -- set the definition of the node}
%==============================================================
\begin{verbatim}
*/
int PtreeSetdef(struct tree p, char [*] def)
{

  p.def=PtreeSetfield(p.def, def);
  return(OK);
}  
/*
\end{verbatim}
%==============================================================
\section{PtreeGetdef  -- get the definition of the node}
%==============================================================
\begin{verbatim}
*/
char [*] PtreeGetdef(struct tree p)  
{
  return(p.def);
}  
/*
\end{verbatim}
%==============================================================
\section{PtreeSetype  -- set the type of the node}
%==============================================================
\begin{verbatim}
*/
int PtreeSetype(struct tree p, char [*] type)
{
 p.type=PtreeSetfield(p.type, type);
 return(OK);
}  
/*
\end{verbatim}
%==============================================================
\section{PtreeGetype  -- get the type of the node}
%==============================================================
\begin{verbatim}
 */
char [*] PtreeGetype(struct tree p) 
{
  return(p.type);
}  
/*
\end{verbatim}
%==============================================================
\section{PtreeSetstruct  -- set the structure flag}
%==============================================================
\begin{verbatim}
*/
int PtreeSetstruct(struct tree p, char [*] structure)
{
 p.structure=PtreeSetfield(p.structure, structure);
 return(OK);
}  
/*
\end{verbatim}
%==============================================================
\section{Tgetstruct  -- get the structure flag}
%==============================================================
\begin{verbatim}
*/
char [*] PtreeGetstruct(struct tree p)    
{
  return(p.structure);
}  
/*
\end{verbatim}
%==============================================================
\section{PtreeSetempr  -- set the real temporary of the node}
%==============================================================
\begin{verbatim}
*/
int PtreeSetempr(struct tree p, char [*] tempr)
{
  p.tempr=PtreeSetfield(p.tempr, tempr);
  return(OK);
}  
/*
\end{verbatim}
%==============================================================
\section{PtreeGetempr  -- get the real temporary of the node}
%==============================================================
\begin{verbatim}
*/
char  [*] PtreeGetempr(struct tree p) 
{
  return(p.tempr);
}  
/*
\end{verbatim}
%==============================================================
\section{PtreeSetempi  -- set the imaginary temporary of the node}
%============================================================== 
\begin{verbatim}
*/
int PtreeSetempi(struct tree p, char [*] tempi)
{
  p.tempi=PtreeSetfield(p.tempi, tempi);
  return(OK);
}  
/*
\end{verbatim}
%==============================================================
\section{PtreeGetempi  -- get the imaginary temporary of the node}
%==============================================================
\begin{verbatim}
*/
char  [*] PtreeGetempi(struct tree p)  
{
  return(p.tempi);
}  
/*
\end{verbatim}
%===============================================================
\section{PtreeGetline  -- get the line no of the node}
%===============================================================
\begin{verbatim}
*/
int PtreeGetline(struct tree p)    
{
  return(p.line);
}  
/*
\end{verbatim}
%===============================================================
\section{PtreeSetline  -- set the line no of the node}
%===============================================================
\begin{verbatim}
*/
int PtreeSetline(struct tree p, int line)    
{
  p.line=line;
  return(OK); 
}  
/*
\end{verbatim}
%===============================================================
\section{PtreeGetfile  -- get the input file name of the noe}
%===============================================================
\begin{verbatim}
*/
char [*] PtreeGetfile(struct tree p)    
{
  return(p.file);
}  
/*
\end{verbatim}
%==============================================================
\section{PtreeSetrank  -- set the rank field of the node}
%==============================================================
\begin{verbatim}
*/
int PtreeSetrank(struct tree p, int rank)    
{
  p.rank = rank;
  return(OK);
}  
/*
\end{verbatim}
%==============================================================
\section{PtreeGetrank  -- get the rank field of the node}
%==============================================================
\begin{verbatim}
*/
int PtreeGetrank(struct tree p)    
{
  return(p.rank);
}  
/*
\end{verbatim}
%==============================================================
\section{PtreeSetlval  -- set the lval field of the node}
%============================================================== 
\begin{verbatim}
*/
int PtreeSetlval(struct tree p, char [*] lval)
{
  p.lval=PtreeSetfield(p.lval, lval);
  return(OK);
}  
/*
\end{verbatim}
%==============================================================
\section{PtreeGetlval  -- get the lval field of the node}
%==============================================================
\begin{verbatim}
*/
char  [*] PtreeGetlval(struct tree p) 
{
  return(p.lval);
}  
/*
\end{verbatim}
/*
%==============================================================
\section{PtreeSetarray  -- Set the array field}
%==============================================================
\begin{verbatim}
*/
int PtreeSetarray(struct tree p, char [*] array)    
{
  p.array=PtreeSetfield(p.array, array);
  return(OK);
}  
/*
\end{verbatim}
%==============================================================
\section{PtreeGetarray  -- Get the array field}
%==============================================================
\begin{verbatim}
*/
char [*] PtreeGetarray(struct tree p)    
{
  return(p.array);
}  
/*
\end{verbatim}
%==============================================================
\section{PtreeSetparallel  -- Set the parallel field}
%==============================================================
\begin{verbatim}
*/
int PtreeSetparallel(struct tree p, char [*] paral)    
{
  p.paral=PtreeSetfield(p.paral, paral);
  return(OK);
}  
/*
\end{verbatim}
%==============================================================
\section{PtreeGetparallel  -- Get the parallel field}
%==============================================================
\begin{verbatim}
*/
char [*] PtreeGetparallel(struct tree p)    
{
  return(p.paral);
}  
/*
\end{verbatim}
%==============================================================
\section{PtreeSetref  -- Set the ref field}
%==============================================================
\begin{verbatim}
*/
int PtreeSetref(struct tree p, char [*] ref)    
{
  p.ref=PtreeSetfield(p.ref, ref);
  return(OK);
}  
/*
\end{verbatim}
%==============================================================
\section{PtreeGetref  -- Get the ref field}
%==============================================================
\begin{verbatim}
*/
char [*] PtreeGetref(struct tree p)    
{
  return(p.ref);
}  
/*
\end{verbatim}
%==============================================================
\section{PtreeSetdescr  -- Set the descriptor field}
%==============================================================
\begin{verbatim}
*/
int PtreeSetdescr(struct tree p, char [*] descr)    
{
  p.descr=PtreeSetfield(p.descr, descr);
  return(OK);
}  
/*
\end{verbatim}
%==============================================================
\section{PtreeGetdescr  -- Get the descriptor field}
%==============================================================
\begin{verbatim}
*/
char [*] PtreeGetdescr(struct tree p)    
{
  return(p.descr);
}  
/*
\end{verbatim}
%==============================================================
\section{PtreeSetglobal  -- Set the global field}
%==============================================================
\begin{verbatim}
*/
int PtreeSetglobal(struct tree p, char [*] global)    
{
  p.global=PtreeSetfield(p.global, global);
  return(OK);
}  
/*
\end{verbatim}
%==============================================================
\section{PtreeGetdescr  -- Get the descriptor field}
%==============================================================
\begin{verbatim}
*/
char [*] PtreeGetglobal(struct tree p)    
{
  return(p.global);
}  
/*
\end{verbatim}
%==============================================================
\section{PtreeSetopexr  -- set the topexpr field of the node}
%==============================================================
\begin{verbatim}
*/
int PtreeSetopexpr(struct tree p, int topexpr)    
{
    p.topexpr = OK;

  return(OK);
}  
/*
\end{verbatim}
%==============================================================
\section{PtreeGetopexpr  -- get the simple field of the node}
%==============================================================
\begin{verbatim}
*/
int PtreeGetopexpr(struct tree p)    
{
    return(p.topexpr);
}  
/*
\end{verbatim}
%==============================================================
\section{PtreeSetsimple  -- set the simple field of the node}
%==============================================================
\begin{verbatim}
*/
int PtreeSetsimple(struct tree p, int simple)    
{
  p.simple = simple;
  return(OK);
}  
/*
\end{verbatim}
%==============================================================
\section{PtreeGetsimple  -- get the simple field of the node}
%==============================================================
\begin{verbatim}
*/
int PtreeGetsimple(struct tree p)    
{
  return(p.simple);
}  
/*
\end{verbatim}
%==============================================================
\section{PtreeSetfield  -- Set a field}
%==============================================================
\begin{verbatim}
*/
char [*] PtreeSetfield(char [*] field, char [*] value)    
{
  if(field != NULL)
    delete(field);
  if(value == NULL)
    field = NULL;
  else{
    if((field = LibeStrsave(value)) == NULL)
        ErrPanic("Out of memory"); 
  }
    return(field);
}  
/*
\end{verbatim}
%==============================================================
\section{PtreePrtree -- print the tree}
%==============================================================
\begin{verbatim}
*/
int PtreePrtree(struct tree p, int level)
{ 
  int i;
  int fp;
       
  fp = stdout;

  if (p != NULL){
    i = 0;
    while( i < level){
      LibePuts(fp, " ");
      i = i + 1;
    }
    LibePuts(fp, p.name); LibePuts(fp," ");
    LibePuts(fp, p.def);  LibePuts(fp," ");
    LibePuts(fp, p.type); LibePuts(fp," ");
    LibePuts(fp, p.structure); LibePuts(fp," ");
    LibePuts(fp, p.array); LibePuts(fp," ");
    LibePuts(fp, p.paral); LibePuts(fp," ");
    LibePuts(fp, p.global); LibePuts(fp," ");
    LibePuti(fp, p.rank);  LibePuts(fp," ");
    if(p.simple==OK){
      LibePuts(fp, "simple"); LibePuts(fp," ");
    }
    else if(p.simple==EMPTY){
      LibePuts(fp, "empty"); LibePuts(fp," ");
    }
    else{
      LibePuts(fp, "nonsimple"); LibePuts(fp," ");
    }
    if(p.topexpr==OK){
      LibePuts(fp, "topexpr"); LibePuts(fp," ");
    }
    else if(p.topexpr==ERR){
      LibePuts(fp, "void"); LibePuts(fp," ");
    }
    else{
      LibePuts(fp, "nonsimple"); LibePuts(fp," ");
    }
    LibePuti(fp, p.line);  LibePuts(fp," ");
    LibePuts(fp, p.tempr); LibePuts(fp," ");
    LibePuts(fp, p.tempi); LibePuts(fp," ");
    LibePuts(fp, p.lval);  LibePuts(fp," ");
    LibePuts(fp, p.ref);   LibePuts(fp," ");
    LibePuts(fp, p.descr); LibePuts(fp," ");
    LibePuts(fp, "\n");
    level = level + 1;
    PtreePrtree(p.child, level);
    level = level - 1;
    PtreePrtree(p.sister,level);
  }
  LibeFlush(fp);
  return(OK);
}
/*
\end{verbatim}
*/
