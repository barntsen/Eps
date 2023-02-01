/*
%============================================================
\section{code.i -- interface for the code module}
%============================================================
This section defines the interface for the code generation
module of the eps compiler.
*/
/*
\end{verbatim}
%------------------------------------------------------------
\subsection*{CodeInit -- initialize the code generator}
%------------------------------------------------------------
\begin{verbatim}
*/
int CodeInit(){}
/*
\end{verbatim}
%------------------------------------------------------------
\subsection*{CodePreamble -- emit preamble}
%------------------------------------------------------------
\begin{verbatim}
*/
int CodePreamble(){}
/*
\end{verbatim}
%------------------------------------------------------------
\subsection*{CodeString -- initialize strings}
%------------------------------------------------------------
\begin{verbatim}
*/
int CodeStrings(struct symbol tp){}
/*
\end{verbatim}
%------------------------------------------------------------
\subsection*{CodeCode -- generate code} 
%------------------------------------------------------------
\begin{verbatim}
*/
int CodeCode(struct tree p, struct symbol tp){}
/*
\end{verbatim}
%------------------------------------------------------------
\subsection*{CodeTemp -- Generate temporaries} 
%------------------------------------------------------------
\begin{verbatim}
*/
int CodeTemp(struct tree p){}
/*
\end{verbatim}
%------------------------------------------------------------
\subsection*{CodeArraycheck -- Test for array check} 
%------------------------------------------------------------
\begin{verbatim}
*/
int CodeArraycheck(){}
/*
\end{verbatim}
%------------------------------------------------------------
\subsection*{CodeArraycheckon -- Turn array check on} 
%------------------------------------------------------------
\begin{verbatim}
*/
int CodeArraycheckon(){}
/*
\end{verbatim}
%------------------------------------------------------------
\subsection*{CodeArraycheckoff -- Turn array check off} 
%------------------------------------------------------------
\begin{verbatim}
*/
int CodeArraycheckoff(){}
/*
\end{verbatim}
/*
%------------------------------------------------------------
\subsection*{CodeDebug -- Test for debug flag} 
%------------------------------------------------------------
\begin{verbatim}
*/
int CodeDebug(){}
/*
\end{verbatim}
%------------------------------------------------------------
\subsection*{CodeDebugon -- Turn debug flag on} 
%------------------------------------------------------------
\begin{verbatim}
*/
int CodeDebugon(){}
/*
\end{verbatim}
%------------------------------------------------------------
\subsection*{CodeDebugoff -- Turn debug flag off} 
%------------------------------------------------------------
\begin{verbatim}
*/
int CodeDebugoff(){}
/*
\end{verbatim}
*/
int CodeSetntnb(int nt, int nb){}
int CodeGetnt(){}
int CodeGetnb(){}
