/*
%=============================================================
\subsection{ErrError -- print parser error messages}
%=============================================================
This is the most basic error reporting routine. It simply
prints the current line number and the string contained in s. 
\begin{verbatim}
*/
int ErrError(char [*] s){}
/*
\end{verbatim}
%=============================================================
\subsection{ErrSerror -- print semantic error messages
%=============================================================
Sometimes more than one string needs, to be printed. This
routine prints two strings and an integer (usually the 
line number) and then exits.
\begin{verbatim}
*/
int ErrSerror(struct tree p, char [*] s1, char [*] s2){}
/*
\end{verbatim}
%=============================================================*
 \subsection{Panic  -- print parser error message and stop}
%=============================================================*
This routine is similar to ErrError, but is always guaranteed
to exit after printing an error message.
\begin{verbatim}
*/
int ErrPanic(char [*] s){}
/*
\end{verbatim}
*/
