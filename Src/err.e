/*
%
%         **********************************
%         *                                *
           \chapter{Err -- error messages}
%         *                                * 
%         **********************************
%
%============================================================
\section{Introduction}  
%============================================================
The error reporting routines are very simple and 
straightforward.
\begin{verbatim}
*/
include "libe.i"
include "scan.i"
include "ptree.i"
include "err.i"
/*
\end{verbatim}
%=============================================================
\section{ErrError -- print parser error messages}
%=============================================================
This is the most basic error reporting routine. It simply
prints the current line number and a message. This version
immediately aborts after the error message has been printed.
\begin{verbatim}
*/
int ErrError(char [*] s)
{
  LibePuts(stderr,"file: "); 
  LibePuts(stderr, ScanGetfile());
  LibePuts(stderr," -- line "); 
  LibePuti(stderr, ScanGetline());
  LibePuts(stderr, " : ");
  LibePuts(stderr, s);  LibePuts(stderr, "\n");
  LibeFlush(stderr);
  LibeExit(); 
  return(OK);
}
/*
\end{verbatim}
%=============================================================
\section{ErrSerror -- print semantic error messages
%=============================================================
Sometimes more than one string needs, to be printed. This
routine prints to strings and an integer (usually the 
line number) and the exits.
\begin{verbatim}
*/
int ErrSerror(struct tree p, char [*] s1, char [*] s2)
{
  char [*] fname;
  int lineno;

  lineno = PtreeGetline(p);
  fname  = PtreeGetfile(p);
  LibePuts(stderr,"file: "); 
  LibePuts(stderr, fname); LibePuts(stderr, " --  line "); 
  LibePuti(stderr, lineno); LibePuts(stderr, ": "); 
  if(s1 != NULL)
    LibePuts(stderr, s1);   LibePuts(stderr, ": ");
  if(s2 != NULL)
    LibePuts(stderr, s2);   LibePuts(stderr, "\n");
  LibeFlush(stderr);
  LibeExit(); 
  return(OK);
}
/*
\end{verbatim}
%=============================================================*
 \section{Panic  -- print parser error message and stop}
%=============================================================*
This routine is similar to ErrError, but is always guaranteed
to exit after printing an error message.
\begin{verbatim}
*/
int ErrPanic(char [*] s)
{
  LibePuti(stderr, ScanGetline()); LibePuts(stderr, " : ");
  LibePuts(stderr, s); LibePuts(stderr, "\n");
  LibeFlush(stderr);
  LibeExit(); 
  return(OK);
}
/*
\end{verbatim}
*/
