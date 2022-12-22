/*
%=======================================================================
\section{ptree.i -- interface for the ptree module}
%=======================================================================
This section defines the interface for the parse tree
(ptree) module.
*/

struct tree {        /* Basic node            */
  char [*] name;     /* Node name             */
  char [*] def;      /* Definition            */
  char [*] type;     /* Basic type            */
  char [*] structure;/* Struct  flag          */
  int      line;     /* Line no               */
  char [*] file;     /* Input file name       */
  char [*] tempr;    /* Temp real value       */
  char [*] tempi;    /* Temp imaginary value  */  
  char [*] lval;     /* Lval field            */
  char [*] array;    /* Array field           */
  char [*] paral;     /* Parallel field        */
  char [*] global;   /* global field        */
  char [*] ref;      /* Eef  field            */
  int rank;          /* Array rank field      */ 
  int simple;        /* Simple field          */
  int topexpr;       /* Top level expr field  */
  char [*] descr;    /* Descriptor field      */
  struct tree child;  /* Child node           */
  struct tree sister; /* Sister node          */
} 
/*
\end{verbatim}
%---------------------------------------------------------------
\subsection{PtreeInit()}  
%---------------------------------------------------------------
\begin{verbatim}
*/
int PtreeInit(){}
/*
\end{verbatim}
%---------------------------------------------------------------
\section{PtreeRmtree -- remove a tree}                            
%---------------------------------------------------------------
\begin{verbatim}
*/
int PtreeRmtree(struct tree p){}  
/*
\end{verbatim}
%---------------------------------------------------------------
\section{PtreeRmnode -- remove a node}                            
%---------------------------------------------------------------
\begin{verbatim}
*/
int PtreeRmnode(struct tree p){}  
/*
\end{verbatim}
%---------------------------------------------------------------
\section{PtreeMknode -- make a node}  
%---------------------------------------------------------------
\begin{verbatim}
*/
struct tree PtreeMknode( char [*] name, char [*] def ){}  
/*
\end{verbatim}
%---------------------------------------------------------------
\section{PtreeAddchild -- add a child node}  
%---------------------------------------------------------------
\begin{verbatim}
*/
int PtreeAddchild(struct tree parent, struct tree child){}  
/*
\end{verbatim}
%---------------------------------------------------------------
\section{PtreeAddsister -- add a sister node}
%---------------------------------------------------------------
\begin{verbatim}
*/
int PtreeAddsister(struct tree sister, struct tree newnode){}
/*
\end{verbatim}
%---------------------------------------------------------------
\section{PtreeMvsister -- move to the sister node}                            
%---------------------------------------------------------------
\begin{verbatim}
*/
struct tree PtreeMvsister(struct tree p){}
/*
\end{verbatim}
%---------------------------------------------------------------
\section{Mvchild -- move to child  node} 
%---------------------------------------------------------------
\begin{verbatim}
*/
struct tree PtreeMvchild(struct tree p){}  
/*
\end{verbatim}
%---------------------------------------------------------------
\section{PtreeSetname  -- set the name of the node}
%---------------------------------------------------------------
\begin{verbatim}
*/
int PtreeSetname(struct tree p, char [*] name){}
/*
\end{verbatim}
%---------------------------------------------------------------
\section{PtreeGetname  -- get the name of the node}
%---------------------------------------------------------------
\begin{verbatim}
*/
char  [*] PtreeGetname(struct tree p){} 
/*
\end{verbatim}
%---------------------------------------------------------------
\section{PtreeSetdef -- set the definition of the node}
%---------------------------------------------------------------
\begin{verbatim}
*/
int PtreeSetdef(struct tree p, char [*] def){}
/*
\end{verbatim}
%---------------------------------------------------------------
\section{PtreeGetdef  -- get the definition of the node}
%---------------------------------------------------------------
\begin{verbatim}
*/
char [*] PtreeGetdef(struct tree p){}  
/*
\end{verbatim}
%---------------------------------------------------------------
\section{PtreeSetype  -- set the type of the node}
%---------------------------------------------------------------
\begin{verbatim}
*/
int PtreeSetype(struct tree p, char [*] type){}
/*
\end{verbatim}
%---------------------------------------------------------------
\section{PtreeGetype  -- get the type of the node}
%---------------------------------------------------------------
\begin{verbatim}
 */
char [*] PtreeGetype(struct tree p){} 
/*
\end{verbatim}
%---------------------------------------------------------------
\section{PtreeSetstruct  -- set the structure flag}
%---------------------------------------------------------------
\begin{verbatim}
*/
int PtreeSetstruct(struct tree p, char [*] structure){}
/*
\end{verbatim}
%---------------------------------------------------------------
\section{PtreeGetstruct  -- get the structure flag}
%---------------------------------------------------------------
\begin{verbatim}
*/
char [*] PtreeGetstruct(struct tree p){}    
/*
\end{verbatim}
%---------------------------------------------------------------
\section{PtreeSetempr  -- set the real temporary of the node}
%---------------------------------------------------------------
\begin{verbatim}
*/
int PtreeSetempr(struct tree p, char [*] tempr){}
/*
\end{verbatim}
%---------------------------------------------------------------
\section{PtreeGetempr  -- get the real temporary of the node}
%---------------------------------------------------------------
\begin{verbatim}
*/
char  [*] PtreeGetempr(struct tree p){} 
/*
\end{verbatim}
%---------------------------------------------------------------
\section{PtreeSetempi  -- set the imaginary temporary of the node}
%---------------------------------------------------------------
\begin{verbatim}
*/
int PtreeSetempi(struct tree p, char [*] tempi){}
/*
\end{verbatim}
%---------------------------------------------------------------
\section{PtreeGetempi  -- get the imaginary temporary of the node}
%---------------------------------------------------------------
\begin{verbatim}
*/
char  [*] PtreeGetempi(struct tree p){}  
/*
\end{verbatim}
%---------------------------------------------------------------
\section{PtreeGetline  -- get the line no of the node}
%---------------------------------------------------------------
\begin{verbatim}
*/
int PtreeGetline(struct tree p){}    
/*
\end{verbatim}
%---------------------------------------------------------------
\section{PtreeSetline  -- set the line no of the node}
%---------------------------------------------------------------
\begin{verbatim}
*/
int PtreeSetline(struct tree p, int line ){}    
/*
\end{verbatim}
%---------------------------------------------------------------
\section{PtreeGetfile  -- get the file name of the node}
%---------------------------------------------------------------
\begin{verbatim}
*/
char [*] PtreeGetfile(struct tree p){}    
/*
\end{verbatim}
%---------------------------------------------------------------
\section{PtreeSetrank  -- set the rank field of the node}
%---------------------------------------------------------------
\begin{verbatim}
*/
int PtreeSetrank(struct tree p, int rank){}    
/*
\end{verbatim}
%---------------------------------------------------------------
\section{PtreeGetrank  -- get the rank field of the node}
%---------------------------------------------------------------
\begin{verbatim}
*/
int PtreeGetrank(struct tree p){}    
/*
\end{verbatim}
%---------------------------------------------------------------
\section{PtreeSetlval  -- set the lval field of the node}
%---------------------------------------------------------------
\begin{verbatim}
*/
int PtreeSetlval(struct tree p, char [*] lval){}
/*
\end{verbatim}
%---------------------------------------------------------------
\section{PtreeGetlval  -- get the lval field of the node}
%---------------------------------------------------------------
\begin{verbatim}
*/
char  [*] PtreeGetlval(struct tree p){} 
/*
\end{verbatim}
/*
%---------------------------------------------------------------
\section{PtreeSetarray  -- Set the array field}
%---------------------------------------------------------------
\begin{verbatim}
*/
int PtreeSetarray(struct tree p, char [*] array){}    
/*
\end{verbatim}
%---------------------------------------------------------------
\section{PtreeGetarray  -- Get the array field}
%---------------------------------------------------------------
\begin{verbatim}
*/
char [*] PtreeGetarray(struct tree p){}    
/*
\end{verbatim}
%---------------------------------------------------------------
\section{PtreeSetparallel  -- Set the parallel field}
%---------------------------------------------------------------
\begin{verbatim}
*/
int PtreeSetparallel(struct tree p, char [*] paral){}    
/*
\end{verbatim}
%---------------------------------------------------------------
\section{PtreeGetparallel  -- Get the parallel field}
%---------------------------------------------------------------
\begin{verbatim}
*/
char [*] PtreeGetparallel(struct tree p){}    
/*
\end{verbatim}
%---------------------------------------------------------------
\section{PtreeSetref  -- Set the ref field}
%---------------------------------------------------------------
\begin{verbatim}
*/
int PtreeSetref(struct tree p, char [*] ref){}    
/*
\end{verbatim}
%---------------------------------------------------------------
\section{PtreeGetref  -- Get the ref field}
%---------------------------------------------------------------
\begin{verbatim}
*/
char [*] PtreeGetref(struct tree p){}    
/*
\end{verbatim}
%--------------------------------------------------------------
\section{PtreeSetdescr  -- Set the descriptor field}
%--------------------------------------------------------------
\begin{verbatim}
*/
int PtreeSetdescr(struct tree p, char [*] descr){}    
/*
\end{verbatim}
%--------------------------------------------------------------
\section{PtreeGetdescr  -- Get the descriptor field}
%--------------------------------------------------------------
\begin{verbatim}
*/
char [*] PtreeGetdescr(struct tree p){}    
/*
\end{verbatim}
%--------------------------------------------------------------
\section{PtreeSetglobal  -- Set the global field}
%--------------------------------------------------------------
\begin{verbatim}
*/
int PtreeSetglobal(struct tree p, char [*] descr){}    
/*
\end{verbatim}
%--------------------------------------------------------------
\section{PtreeGetglobal  -- Get the global field}
%--------------------------------------------------------------
\begin{verbatim}
*/
char [*] PtreeGetglobal(struct tree p){}    
/*
\end{verbatim}
%--------------------------------------------------------------
\section{PtreeSetopexpr  -- Set the topexpr field}
%--------------------------------------------------------------
\begin{verbatim}
*/
int PtreeSetopexpr(struct tree p, int topexpr){}    
/*
\end{verbatim}
%--------------------------------------------------------------
\section{PtreeGetopexpr  -- Get the topexpr field}
%--------------------------------------------------------------
\begin{verbatim}
*/
int PtreeGetopexpr(struct tree p){}    
/*
\end{verbatim}
%--------------------------------------------------------------
\section{PtreeSetsimple  -- Set the simple field}
%--------------------------------------------------------------
\begin{verbatim}
*/
int PtreeSetsimple(struct tree p, int simple){}    
/*
\end{verbatim}
%--------------------------------------------------------------
\section{PtreeGetsimple  -- Get the simple field}
%--------------------------------------------------------------
\begin{verbatim}
*/
int PtreeGetsimple(struct tree p){}    
/*
\end{verbatim}
%--------------------------------------------------------------
\section{PtreePrtree -- print the tree}
%--------------------------------------------------------------
\begin{verbatim}
*/
int PtreePrtree(struct tree p, int level){}
/*
\end{verbatim}
*/
