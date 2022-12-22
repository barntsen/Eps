/*
%============================================================
\section{parse.i -- interface for the parse module}
%============================================================
This section defines the interface for the parser module of
the eps compiler.
/*
\end{verbatim}
%------------------------------------------------------------
\subsection*{ParseIniparse -- initialize the parser}
%------------------------------------------------------------
\begin{verbatim}
*/
int ParseIniparse(){}
/*
\end{verbatim}
%------------------------------------------------------------
\subsection*{ParseParse -- start parsing} 
%------------------------------------------------------------
\begin{verbatim}
*/
struct tree ParseParse(){}
/*
\end{verbatim}
%------------------------------------------------------------
\subsection*{ParseGetlookahead -- Get lookahead token} 
%------------------------------------------------------------
\begin{verbatim}
*/
int ParseGetlookahead(){}
/*
\end{verbatim}
*/
