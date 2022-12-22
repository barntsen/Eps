/*
%=============================================================
\section{Scan.i -- interface for the Scan module}
%=============================================================
The scanner reads a source file and groups the characters into
groups, or 'tokens'. The most important entrys point are the 
function {\tt ScanGetok} which returns an integer defining
the next token available. The token values are defined below:
\begin{verbatim}
*/
const ID  =    1;         /* The Identifier token   */
const RARROW = 2;         /* The '->'       token   */
const EQ =     3;         /* The '=='       token   */
const NE =     4;         /* The '!='       token   */
const OR =     5;         /* The '||'       token   */
const AND =    6;         /* The '&&'       token   */
const INT =    7;         /* The 'int'      keyword */
const CHAR =   8;         /* The 'char   '  keyword */
const REAL =   9;         /* The 'real'     keyword */
const COMPLEX = 10;       /* The 'complex' keyword  */
const STRUCT  = 11;       /* The 'struct'  keyword  */
const WHILE   = 12;       /* The 'while'   keyword  */
const FOR     = 26;       /* The 'for'     keyword  */
const PARALLEL= 31;       /* The 'parallel' keyword  */
const RETURN  = 30;       /* The 'return'  keyword  */
const IF      = 14;       /* The 'if'      keyword  */
const ELSE    = 15;       /* The 'else'    keyword  */
const THEN    = 16;       /* The 'then'    keyword  */
const ICONST  = 17;       /* Integer constant token */
const SCONST  = 18;       /* String  constant token */
const STOP    = 19;       /* Stop token             */
const LE      = 20;       /* The '<='       token   */
const GE      = 21;       /* The '>='       token   */
const SIZEOF  = 22;       /* The sizeof token       */
const CAST    = 23;       /* The cast   token       */
const RCONST  = 24;       /* float   constant token */
const CMPLX   = 25;       /* The cmplx   keyword    */
const NEW     = 26;       /* The new     keyword    */
const DELETE  = 50;       /* The delete  keyword    */
const IM      = 27;       /* The im      keyword    */
const RE      = 28;       /* The re      keyword    */
const LEN     = 29;       /* The len     keyword    */
const CONST   = 431;      /* The const   keyword    */
const INCLUDE = 432;        /* The include keyword    */
/*
\end{verbatim}
The functions supported by the Scan module is defined as 
follows:
%=============================================================
\section{ScanInit -- initialize the scanner}
%=============================================================
{\tt ScanInit} takes the input file name as argumnet 
and must be called once
before any other calls to functions in the Scan module are made.
\begin{verbatim}
*/
int ScanInit(char [*] infile){}
/*
\end{verbatim}
%=============================================================
\section{ScanGetok -- get the next token}
%=============================================================
Each call of {\tt ScanGetok} returns a new token read from
the standard input. The token values are listed above.
If no more characters can be read,
the {\tt STOP} token is returned.
{\tt ScanGetext} returns a string literal associated with
the token.
\begin{verbatim}
*/
int ScanGetok(){}     
/*
\end{verbatim}
%=============================================================
\section{ScanSetline -- set the current line number}
%=============================================================
This function sets the current line number to the value of
{\tt lineno}. The line number is used for error reporting.
\begin{verbatim}
*/
int ScanSetline(int lineno){}   
/*
\end{verbatim}
%=============================================================
\section{ScanGetline -- get the current line number}
%=============================================================
This function returns the current line number. 
\begin{verbatim}
*/
int ScanGetline(){}   
/*
\end{verbatim}
%=============================================================
\section{ScanIncline -- increment the current line number}
%=============================================================
This function increments the current line number by one.
\begin{verbatim}
*/
int ScanIncline(){}   
/*
\end{verbatim}
%=============================================================
\section{ScanGetext -- get the text string of a token}
%=============================================================
This function returns the text string associated with the
token value.
\begin{verbatim}
*/
 char [*] ScanGetext(){}  
/*
\end{verbatim}
%=============================================================
\section{ScanGetfile -- get the name of the input file}
%=============================================================
This function returns the text string associated with the
token value.
\begin{verbatim}
*/
 char [*] ScanGetfile(){}  
/*
\end{verbatim}
%=============================================================
\section{ScanSetfile -- set the name of the input file}
%=============================================================
This function returns the text string associated with the
token value.
\begin{verbatim}
*/
 char [*] ScanSetfile(char [*] fname){}  
/*
\end{verbatim}
%=============================================================
\section{ScanPath -- system include path}
%=============================================================
This function returns a text string containing
the path of the system include directory.
\begin{verbatim}
*/
 char [*] ScanPath(){}  
/*
\end{verbatim}
*/
