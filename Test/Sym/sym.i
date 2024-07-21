/*
%======================================================================
\section{sym.i -- interface for the sym module}
%======================================================================
\begin{verbatim}
*/
struct symbol { /* basic table entry */
      char [*] name;               /* Name                        */
      char [*] type;               /* Basic type                  */
      char [*] func;               /* Flag for function           */
      char [*] array;              /* Flag for array              */
      int  rank;                   /* Rank of array               */
      char [*] structure;          /* Flag for structure          */
      char [*] ident;              /* Flag for identifier         */
      char [*] lval;               /* Flag for left value         */
      char [*] descr;              /* Descr field                 */
      char [*] global;             /* Global field */
      char [*] ref;                /* Flag for  reference         */
      int  emit;                   /* The emit flag               */
      struct symbol tbl;            /* Next table                 */
      struct symbol prevtbl;        /* Previous table             */
      struct symbol next;           /* next entry in chain        */
      struct symbol last;           /* last entry in chain        */
} 

/*
\end{verbatim}
%======================================================================
\subsection{SymGetetp -- Get symbol table}                 
%======================================================================
\begin{verbatim}
*/
struct symbol SymGetetp(){}
/*
\end{verbatim}
%======================================================================
\subsection{SymSetetp -- Set symbol table}                 
%======================================================================
\begin{verbatim}
*/
struct symbol SymSetetp( struct symbol etp){}
/*
\end{verbatim}
%======================================================================
\subsection{SymGetltp -- Get local symbol table}                 
%======================================================================
\begin{verbatim}
*/
struct symbol SymGetltp(){}
/*
\end{verbatim}
%======================================================================
\subsection{SymSetltp -- Set local symbol table}                 
%======================================================================
\begin{verbatim}
*/
struct symbol SymSetltp( struct symbol etp){}
/*
\end{verbatim}
%======================================================================
\subsection{SymGetstp -- Get string table}                 
%======================================================================
\begin{verbatim}
*/
struct symbol SymGetstp(){}
/*
\end{verbatim}
%======================================================================
\subsection{SymSetstp -- Set string table}                 
%======================================================================
\begin{verbatim}
*/
struct symbol SymSetstp( struct symbol etp){}
/*
\end{verbatim}
%----------------------------------------------------------------------
\subsection{SymMktable -- make a new symbol table}
%----------------------------------------------------------------------
\begin{verbatim}
*/
struct symbol SymMktable(){}
/*
\end{verbatim}
%----------------------------------------------------------------------
\subsection{SymSetable -- store a symbol symbol table}
%----------------------------------------------------------------------
\begin{verbatim}
*/
struct symbol SymSetable(struct symbol np, struct symbol tp){}   
/*
\end{verbatim}
%----------------------------------------------------------------------
\subsection{SymGetable -- get a symbol symbol table}
%----------------------------------------------------------------------
\begin{verbatim}
*/
struct symbol SymGetable(struct symbol np){} 
/*
\end{verbatim}
%----------------------------------------------------------------------
\subsection{SymMkname -- make a new name}
%----------------------------------------------------------------------
\begin{verbatim}
*/
struct symbol SymMkname(char [*] name, struct symbol tp){}
/*
\end{verbatim}
%----------------------------------------------------------------------
\subsection{SymRmname -- remove a name}
%----------------------------------------------------------------------
\begin{verbatim}
*/
struct symbol SymRmname(char [*] name, struct symbol tp){}    
/*
\end{verbatim}
%----------------------------------------------------------------------
\subsection{SymRmtable -- remove a table}
%----------------------------------------------------------------------
\begin{verbatim}
*/
int SymRmtable(struct symbol p){}
/*
\end{verbatim}
%----------------------------------------------------------------------
\subsection{SymRmsubtables -- remove a table}
%----------------------------------------------------------------------
\begin{verbatim}
*/
int SymRmsubtables(struct symbol p){}
/*
\end{verbatim}
%----------------------------------------------------------------------
\subsection{SymGetname -- get name}
%----------------------------------------------------------------------
\begin{verbatim}
*/
char [*] SymGetname(struct symbol np){}   
/*
\end{verbatim}
%----------------------------------------------------------------------
\subsection{SymLookup -- look for a name}
%----------------------------------------------------------------------
\begin{verbatim}
*/
struct symbol SymLookup(char [*] s, struct symbol tp){}   
/*
\end{verbatim}
%----------------------------------------------------------------------
\subsection{SymSetype -- set the type field}
%----------------------------------------------------------------------
\begin{verbatim}
*/
int  SymSetype(struct symbol np, char [*] type){}  
/*
\end{verbatim}
%----------------------------------------------------------------------
\subsection{SymGetype -- get the type field}
%----------------------------------------------------------------------
\begin{verbatim}
*/
char [*] SymGetype(struct symbol np){}
/*
\end{verbatim}
%----------------------------------------------------------------------
\subsection{SymSetident -- set the ident field}
%----------------------------------------------------------------------
\begin{verbatim}
*/
int SymSetident(struct symbol np, char [*] ident){} 
/*
\end{verbatim}
%----------------------------------------------------------------------
\subsection{SymGetident -- get the ident field}
%----------------------------------------------------------------------
\begin{verbatim}
*/
char [*] SymGetident(struct symbol np){}
/*
\end{verbatim}
%----------------------------------------------------------------------
\subsection{SymSetlval -- set the lval field}
%----------------------------------------------------------------------
\begin{verbatim}
*/
int SymSetlval(struct symbol np, char [*] lval){}
/*
\end{verbatim}
%----------------------------------------------------------------------
\subsection{SymGetlval -- get the lval field}
%----------------------------------------------------------------------
\begin{verbatim}
*/
char [*] SymGetlval(struct symbol np){}
/*
\end{verbatim}
%----------------------------------------------------------------------
\subsection{SymSetref -- set the ref field}
%----------------------------------------------------------------------
\begin{verbatim}
*/
int  SymSetref(struct symbol np, char [*] ref){}
/*
\end{verbatim}
%----------------------------------------------------------------------
\subsection{SymGetref -- get the ref field}
%----------------------------------------------------------------------
\begin{verbatim}
*/
char [*] SymGetref(struct symbol np){}
/*
\end{verbatim}
%----------------------------------------------------------------------
\subsection{SymSetfunc -- set the func field}
%----------------------------------------------------------------------
\begin{verbatim}
*/
int SymSetfunc(struct symbol np, char [*] func){}
/*
\end{verbatim}
%----------------------------------------------------------------------
\subsection{SymGetfunc -- get the func field}
%----------------------------------------------------------------------
\begin{verbatim}
*/
char [*] SymGetfunc(struct symbol np){}
/*
\end{verbatim}
%----------------------------------------------------------------------
\subsection{SymSetarray -- set the array field}
%----------------------------------------------------------------------
\begin{verbatim}
*/
int SymSetarray(struct symbol np, char [*] array){}   
/*
\end{verbatim}
%----------------------------------------------------------------------
\subsection{SymGetarray -- get the array field}
%----------------------------------------------------------------------
\begin{verbatim}
*/
char [*] SymGetarray(struct symbol np){}
/*
\end{verbatim}
%----------------------------------------------------------------------
\subsection{SymSetrank -- set the rank field}
%----------------------------------------------------------------------
\begin{verbatim}
*/
int SymSetrank(struct symbol np, int rank){}
/*
\end{verbatim}
%----------------------------------------------------------------------
\subsection{SymGetrank -- get the rank field}
%----------------------------------------------------------------------
\begin{verbatim}
*/
int SymGetrank(struct symbol np){} 
/*
\end{verbatim}
%----------------------------------------------------------------------
\subsection{SymSetemit -- set the emit field}
%----------------------------------------------------------------------
\begin{verbatim}
*/
int SymSetemit(struct symbol np, int emit){}    
/*
\end{verbatim}
%----------------------------------------------------------------------
\subsection{SymGetemit -- get the emit field}
%----------------------------------------------------------------------
\begin{verbatim}
*/
int SymGetemit(struct symbol np){} 
/*
\end{verbatim}
%----------------------------------------------------------------------
\subsection{SymSetstruct -- set the struct field}
%----------------------------------------------------------------------
\begin{verbatim}
*/
int SymSetstruct(struct symbol np, char [*] structure){}
/*
\end{verbatim}
%----------------------------------------------------------------------
\subsection{SymGetstruct -- get the struct field}
%----------------------------------------------------------------------
\begin{verbatim}
*/
char [*] SymGetstruct(struct symbol np){}
/*
\end{verbatim}
%----------------------------------------------------------------------
\subsection{SymSetdescr -- set the descr field}
%----------------------------------------------------------------------
\begin{verbatim}
*/
int SymSetdescr(struct symbol np, char [*] descr){}
/*
\end{verbatim}
%----------------------------------------------------------------------
\subsection{SymGetdescr -- get the descr field}
%----------------------------------------------------------------------
\begin{verbatim}
*/
char [*] SymGetdescr(struct symbol np){}
/*
\end{verbatim}
%----------------------------------------------------------------------
\subsection{SymSetglobal -- set the  global field}
%----------------------------------------------------------------------
\begin{verbatim}
*/
int SymSetglobal(struct symbol np, char [*] descr){}
/*
\end{verbatim}
%----------------------------------------------------------------------
\subsection{SymGetglobal -- get the global field}
%----------------------------------------------------------------------
\begin{verbatim}
*/
char [*] SymGetglobal(struct symbol np){}
/*
\end{verbatim}
%----------------------------------------------------------------------
\subsection{SymMvnext -- move to next node}
%----------------------------------------------------------------------
\begin{verbatim}
*/
struct symbol SymMvnext(struct symbol np){}
/*
\end{verbatim}
%----------------------------------------------------------------------
\subsection{SymLook -- search for symbol}
%----------------------------------------------------------------------
\begin{verbatim}
*/
struct symbol SymLook(char [*] name){} 
/*
\end{verbatim}
%----------------------------------------------------------------------
\subsection{SymPrsym -- print the symbol table}
%----------------------------------------------------------------------
\begin{verbatim}
*/
int SymPrsym(struct symbol p, int level){}
/*
\end{verbatim}
%----------------------------------------------------------------------
\subsection{SymCpytble -- copy the symbol table}
%----------------------------------------------------------------------
\begin{verbatim}
*/
int SymCpytble(struct symbol tp, struct symbol up){}
/*
\end{verbatim}
*/

// 
const NTBL=80;
const NFIELDS=15;
int SymReadsym(int fp, struct symbol tp){}
int Symgetline(int fp, struct symbol tp){}
