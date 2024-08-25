/*
%
%         ***********************************************
%         *                                             *
            \chapter{Scan -- lexical scanner for nc}  
%         *                                             *
%         ***********************************************
\section{Introduction}
%
The scanner reads the input source file one character
at a time and collects them into groups called 
{\it tokens}. Examples of tokens are keywords like
``if'', ``for'' and ``while'' and numbers like ``238'' and
``3.14159''.
\begin{verbatim}
*/
include "libe.i"      // Library module   
include "scan.i"      // Lexical scanner interface 
include "ptree.i"     // Parse tree  module  
include "err.i"       // Error routines module

//The datastructures of {\tt Scan} are very simple and
//consists of two character arrays; {\tt ScanText} and
// ScanBuffer. The former is used to hold a string
//literal associated with the current token.
//The latter is used as a simple buffer to hold 
//intermediate strings.
char [*] ScanText;     /* Lexical value of token      */
char [*] ScanBuffer;   /* Temporary array             */
int ScanLine;          /* line number                 */
int ScanLinesave;      /* Remember line no            */
int ScanFp;            /* Current file descriptor     */
int ScanInfile;        /* Input file descriptor       */
char [*] ScanInfilename;
char [*] ScanFile;     /* Current file name           */
/*
\end{verbatim}
A few functions are private to the scan module
\begin{verbatim}
*/
int ScanLex(){}
int ScanGetword(char [*] ttext){} /* Get one word       */
int ScanGetch(){}                 /* Get a character    */
int ScanUngetch(){}               /* Unget a character  */
int ScanFtail(int p){}            /* Tail of a float    */
int ScanInclude(){}
int ScanWhite(){}
int ScanComment(){}
int ScanLcomment(){}
/*
\end{verbatim}
%====================================================================
\section{ScanInit -- initialize scanner}
%====================================================================
Before I start, the two arrays ScanText and ScanBuffer must
be created.
\begin{verbatim}
*/
int ScanInit(char [*] infile)
{
  const LTEXT = 4096; 
  ScanText = new(char [LTEXT]);
  ScanBuffer = new(char [LTEXT]);
  ScanInfile = LibeOpen(infile, "r");
  if(ScanInfile == ERR){
    LibePuts(stderr, "Can not open input file: ");
    LibePuts(stderr, infile);
    LibePuts(stderr,"\n");
    LibeFlush(stderr);
    return(ERR);
  }
  ScanFp = ScanInfile;
  ScanFile = LibeStrsave(infile);
  ScanInfilename = LibeStrsave(infile);
  return(OK);
}  
/*
\end{verbatim}
%====================================================================
\section{ScanGetok -- return next token}
%====================================================================
\begin{verbatim}
*/
int ScanGetok()
{
  int c;

  if((c=ScanLex())==INCLUDE){
      ScanInclude();
      return(c);
  }
  else if(c == STOP){
    if(ScanFp == ScanInfile)
      return(c);
    else{
      LibeClose(ScanFp);
      ScanFp = ScanInfile;
      ScanSetfile(ScanInfilename);
      ScanLine = ScanLinesave;
      return(ScanGetok());
    }
  }
  else
    return(c);
}  
/*
\end{verbatim}
%====================================================================
\section{ScanLex -- find and return the next token}
%====================================================================
This is the main routine of the scanner and returns the next token.
Token values are define above, and the literal value of the token are
returned by the {\tt ScanGetext} routine.
\begin{verbatim}
*/
int ScanLex()
{
  int c;                 /* Token value                         */
  int p;                 /* Next available position in ScanText */
  int rval;              /* Return value                        */
  int string;
  int comments;

/* Start of the lexical analysis */
         
  ScanWhite();        /* Skip white space        */
  c= ScanGetch();     /* Get the first character */
  p = 0;
  ScanText[p] = cast(char, c);

/* Process comments                */

  comments = OK;
  while(comments==OK){
    if(c=='#'){
      ScanLcomment();
      ScanWhite();
      c=ScanGetch();
      ScanText[p] = cast(char, c);
    }
    else
      comments=ERR;
  }

/* Process end of file             */

  if (c == EOF){
      rval = STOP;              /* Stop if this was the last character */
      return(rval);
  }


/* Process single character tokens */

  if (c == PLUS)              /* '+' */
    rval = PLUS;
  else if (c == STAR)         /* '*' */
    rval = STAR;
  else if (c == SLASH)        /* '/' */
    rval = SLASH;
  else if (c == LP)           /* '(' */
    rval = LP;
  else if (c == RP)           /* ')' */
    rval = RP;
  else if (c == RB)           /* '}' */
    rval = RB;
  else if (c == LB)           /* '{' */
    rval = LB;
  else if (c == LBR)          /* '[' */
    rval = LBR;
  else if (c == RBR)          /* ']' */
    rval = RBR;
  else if (c == COLON)        /* ':' */
    rval = COLON;
  else if (c == SEMICOLON)    /* ';' */
    rval = SEMICOLON;
  else if (c == COMMA)        /* ',' */
    rval = COMMA;
  else if (c == POINT)        /* '.'  */
    rval = POINT;

/* Start processing of complex tokens */

  else if (c == LT)                     
    if((c = ScanGetch()) == ASSIGN){     /* '<=' */
      rval =  LE;
      p = p + 1;
      ScanText[p] = cast(char, c);
    }
    else{                                /* '<' */
      ScanUngetch();
      rval = LT;
    }
  else if (c == GT)                    
    if((c = ScanGetch()) == ASSIGN){     /* '>=' */
       rval =  GE;
       p = p + 1;
       ScanText[p] = cast(char, c);
    }
    else{
      ScanUngetch();                     /* '>' */
      rval = GT;
    }
  else if (c == MINUS){            
    if((c = ScanGetch()) == GT){        /* '->' */
      rval =  RARROW;
      p = p + 1;
      ScanText[p] = cast(char, c);
    }
    else{
      ScanUngetch();                    /* '-'  */
      rval = MINUS;
    }
  }
  else if (c == VBAR){                  /* '||' */
    if((c = ScanGetch()) == VBAR){
      rval =  OR;
      p = p +1;
      ScanText[p] = cast(char, c);
    }
    else
      ErrError("Illegal character");
  }
  else if (c == ADRESS){                  /* '&&' */
    if((c = ScanGetch()) == ADRESS){
      rval =  AND;
      p = p +1;
      ScanText[p] = cast(char, c);
    }
    else
      ErrError("Illegal character");
  }
  else if (c == EXLAM){                 /* '!=' */
    if((c = ScanGetch()) == ASSIGN){
      rval =  NE;
      p = p + 1;
      ScanText[p] = cast(char, c);
    }
    else
      ErrError("Illegal character");
  }
  else if (c == ASSIGN){                /* '==' */
    if((c = ScanGetch()) == ASSIGN){
      rval =  EQ;
      p = p+1;
      ScanText[p] = cast(char, c);
    }
    else{
      ScanUngetch();                    /* '=' */
      rval = ASSIGN;
    }
  }
  
/* String */

  else if (c == DFN){               
    ScanText[p] = cast(char, DFN); 
    p = p + 1;
    string = 1;
    while(string == 1){
      if((c = ScanGetch()) != DFN)
        string = 1;
      else{ 
        if(cast(int, ScanText[p-1]) == BSLASH)
          string = 1;
        else
          string = 0;
      }
      ScanText[p] = cast(char, c);
        p = p+1;
        if( p >= len(ScanText,0)-1)
          ErrError("String is too long");
    }
    ScanText[p] = cast(char, EOS);
    rval = SCONST;
  }

/* Character constant */

  else if (c == SFN){
    ScanText[p] = cast(char, SFN); 
    p = p + 1;
    ScanText[p] = cast(char, ScanGetch());
    c = ScanGetch();
    if(c != SFN)
      ErrError("Character constant is too long");
    else{
      p = p + 1;
      ScanText[p] = cast(char, c);
    }
    p = p + 1;
    ScanText[p] = cast(char, EOS);
    rval = ICONST;
  }

/* Decimal or floating point number  */

  else if(LibeIsdigit(c)){
    while (LibeIsdigit(c=ScanGetch())) {
      p = p + 1;
      ScanText[p] = cast(char, c);
      if( p >= len(ScanText,0))
        ErrError("Digit is too long");
    }
    if(c == POINT){
      p = p + 1;
      if( p >= len(ScanText,0))
        ErrError("Digit is too long");
      ScanText[p] = cast(char, c);
      p = ScanFtail(p);
      rval = RCONST;
    }
    else{
      ScanUngetch();
      ScanText[p+1] = cast(char, EOS);
      rval = ICONST;
    }
  }

/* Keywords  and identifiers */

  else if(LibeIsalnum(c)){
    while (LibeIsalnum(c=ScanGetch())){
      p = p + 1;
      ScanText[p] = cast(char, c);
      if( p >= len(ScanText,0))
        ErrError("Identifier is too long");
    }
    ScanUngetch();
    ScanText[p+1] = cast(char, EOS);

    if(LibeStrcmp(ScanText,"include")==OK){
      rval = INCLUDE;
    }
    else if(LibeStrcmp(ScanText,"int"))
      rval = INT;
    else if(LibeStrcmp(ScanText,"char"))
      rval = CHAR;
    else if(LibeStrcmp(ScanText,"float"))
      rval = REAL;
    else if(LibeStrcmp(ScanText,"const"))
      rval = CONST;
    else if(LibeStrcmp(ScanText,"complex"))
      rval = COMPLEX;
    else if(LibeStrcmp(ScanText,"struct"))
      rval = STRUCT;
    else if(LibeStrcmp(ScanText,"while"))
      rval = WHILE;
    else if(LibeStrcmp(ScanText,"return"))
      rval = RETURN;
    else if(LibeStrcmp(ScanText,"if"))
      rval = IF;
    else if(LibeStrcmp(ScanText,"else"))
      rval = ELSE;
    else if(LibeStrcmp(ScanText,"sizeof"))
      rval = SIZEOF;
    else if(LibeStrcmp(ScanText,"cast"))
      rval = CAST;
    else if(LibeStrcmp(ScanText,"new"))
      rval = NEW;
    else if(LibeStrcmp(ScanText,"delete"))
      rval = DELETE;
    else if(LibeStrcmp(ScanText,"len"))
      rval = LEN;
    else if(LibeStrcmp(ScanText,"cmplx"))
      rval = CMPLX;
    else if(LibeStrcmp(ScanText,"re"))
      rval = RE;
    else if(LibeStrcmp(ScanText,"im"))
      rval = IM;
    else if(LibeStrcmp(ScanText,"for"))
      rval = FOR;
    else if(LibeStrcmp(ScanText,"parallel"))
      rval = PARALLEL;
    else if(LibeStrcmp(ScanText,"end"))
      rval = END;
    else
      rval = ID;
  }
  else{ 
    ErrError("Invalid token");
	return(ERR);
  }
  ScanText[p+1] = cast(char, EOS);
  return rval;
}
/*
\end{verbatim}
%====================================================================
\section{ScanGetext -- get text of token}
%====================================================================
\begin{verbatim}
*/
char [*] ScanGetext()
{
  return ScanText;
}
/*
\end{verbatim}
%====================================================================
\section{Setline -- Set line no}
%====================================================================
\begin{verbatim}
*/ 
int ScanSetline(int lineno)
{
  ScanLine = lineno;    
  return 0;
}
/*
\end{vrbatim}
%===================================================================
\section{Getline -- Get line no}
%===================================================================
\begin{verbatim}
*/ 
int ScanGetline()
{
  return(ScanLine);
}
/*
\end{vrbatim}
%==================================================================
\section{ScanIncline  -- Increment lineno by 1} 
%==================================================================
\begin{verbatim}
*/
int ScanIncline()
{
  ScanLine = ScanLine + 1;
  return(OK);
}
/*
\end{verbatim}
%=================================================================
\section{ScanGetword  -- get next word} 
%=================================================================
\begin{verbatim}
*/
int ScanGetword(char [*] ttext)
{
  return(LibeGetw(ScanFp, ttext));
}
/*
\end{verbatim}
%===============================================================
\section{ScanGetch -- get a character}  
%===============================================================
\begin{verbatim}
*/
int ScanGetch()      /*  Return a character from standard input */
{
  return(LibeGetc(ScanFp));
}
/*
\end{verbatim}
%===============================================================
\section{ScanFtail -- get the tail of a floating point number}  
%===============================================================
\begin{verbatim}
*/
int ScanFtail(int p)      
{
  int c;
 
  while(LibeIsdigit(c=ScanGetch())){ 
    p = p + 1;
    if( p >= len(ScanText,0))
      ErrError("Digit is too long");
    ScanText[p] = cast(char, c);
  } 
  if((c == 'e') || (c == 'E')){        
    p = p + 1;
    if( p >= len(ScanText,0))
      ErrError("Digit is too long");
    ScanText[p] = cast(char, c);
    c = ScanGetch();
    if((c == PLUS) || ( c == MINUS)){
      p = p + 1;
      if( p >= len(ScanText,0))
        ErrError("Digit is too long");
      ScanText[p] = cast(char, c);
      while(LibeIsdigit(c=ScanGetch())){ 
        p = p + 1;
        if( p >= len(ScanText,0))
          ErrError("Digit is too long");
        ScanText[p] = cast(char, c);
      }
      ScanUngetch();
      ScanText[p+1] = cast(char, EOS);
      return (p);
    }
    else
      ErrError("Unknown token");
      return(ERR);
  }
  else{
    ScanUngetch();
    ScanText[p+1] = cast(char, EOS);
    return (p);
  }
}
/*
\end{verbatim}
%===============================================================
\section{ScanUngetch -- unget a character}  
%===============================================================
\begin{verbatim}
*/
 int ScanUngetch()      /*  Return a character from standard input */
 {
  return(LibeUngetc(ScanFp));
 }
/*
\end{verbatim}
%===============================================================
\section{ScanInclude -- include a file}  
%===============================================================
\begin{verbatim}
*/
 int ScanInclude()    
 {
  int p,c;
  int string;
  int delimit,l;
  char [*] fname;

  while(((c=ScanGetch()) == SPACE) || (c == TAB) || (c == NL)) 
    if(c == NL)
      ScanIncline();
  ScanUngetch();

  if((c = ScanGetch()) != DFN){
    if(c != '<')
      ErrError("Invalid string in include statement");
  }    
  if(c=='<'){
    delimit = '>';
  }
  else{
    delimit = DFN;
  }
  p = 0;
  string = 1;
  while(string == 1){
    if((c = ScanGetch()) != delimit)
      string = 1;
    else 
      string = 0;
    ScanText[p] = cast(char, c);
    p = p+1;
    if( p >= len(ScanText,0)-1)
      ErrError("String is too long");
  }
  ScanText[p-1] = cast(char, EOS);

  if(delimit == '>'){
    l = LibeStrlen(ScanPath())
        + LibeStrlen(ScanText) + 1; 
    fname = new(char[l]);
    LibeStrcpy(ScanPath(),fname);
    LibeStrcat(ScanText,fname); 
  }
  else
    fname = ScanText;

  ScanFp = LibeOpen(fname,"r");
  ScanSetfile(fname);
  ScanLinesave = ScanLine;
  ScanLine = 1;
  return(OK);
 }
/*
\end{verbatim}
%===============================================================
\section{ScanGetfile -- get input file name}  
%===============================================================
\begin{verbatim}
*/
char [*] ScanGetfile()    
{
  return(ScanFile);
}
/*
\end{verbatim}
%===============================================================
\section{ScanSetfile -- set input file name}  
%===============================================================
\begin{verbatim}
*/
char [*] ScanSetfile(char [*] fname)    
{
  if(ScanFile != NULL){
    delete(ScanFile);
  }
  ScanFile = LibeStrsave(fname);
  return(ScanFile);
}
/*
\end{verbatim}
%===============================================================
\section{ScanWhite -- skip white space}  
%===============================================================
\begin{verbatim}
*/
 int ScanWhite()    
 {
  int c;

  while(((c=ScanGetch()) == SPACE) || (c == TAB) || (c == NL)) 
    if(c == NL)
      ScanIncline();
  ScanUngetch();

  return(OK);
 }
/*
\end{verbatim}
%===============================================================
\section{ScanComment -- skip comment}  
%===============================================================
\begin{verbatim}
*/
int ScanComment()
{
  int incomment,c;
        
  incomment=OK;

  /* Skip the text within the comments */

  while(incomment == OK){
    c = ScanGetch();
    if(c == NL)
      ScanIncline();
    if(c=='*'){
      c = ScanGetch();
      if(c == NL)
        ScanIncline();
      if(c=='/'){
        incomment=ERR;
      }
    }
    if(c == EOF){
      ErrPanic("Closing comment missing");
    }
  }
  return(OK);
}
/*
\end{verbatim}
%===============================================================
\section{ScanLcomment -- skip line comment}  
%===============================================================
\begin{verbatim}
*/
int ScanLcomment()
{
  int incomment,c;
        
  incomment=OK;

  /* Skip the text within the comments */

  while(incomment == OK){
    c = ScanGetch();
    if(c == NL){
      ScanIncline();
      incomment=ERR;
    }
  }
  return(OK);
}
/*
\end{verbatim}
*/
