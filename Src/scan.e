# The scanner reads the input source file one character
# at a time and collects them into groups called 
# tokens. Examples of tokens are keywords like
# ``if'', ``for'' and ``while'' and numbers like ``238'' and
# ``3.14159''.
 
import libe      # Library module   
import err       # Error routines module
import scanpath  # Input file path name

# Constants
#
const ID  =    1          # The Identifier token    
const RARROW = 2          # The '->'       token    
const EQ =     3          # The '=='       token    
const NE =     4          # The '!='       token    
const OR =     5          # The '||'       token    
const AND =    6          # The '&&'       token    
const INT =    7          # The 'int'      keyword  
const CHAR =   8          # The 'char   '  keyword  
const REAL =   9          # The 'real'     keyword  
const COMPLEX = 510       # The 'complex' keyword   
const STRUCT  = 11        # The 'struct'  keyword   
const WHILE   = 12        # The 'while'   keyword   
const FOR     = 26        # The 'for'     keyword   
const PARALLEL= 31        # The 'parallel' keyword   
const RETURN  = 30        # The 'return'  keyword   
const IF      = 14        # The 'if'      keyword   
const ELSE    = 15        # The 'else'    keyword   
const THEN    = 16        # The 'then'    keyword   
const ICONST  = 17        # Integer constant token  
const SCONST  = 18        # String  constant token  
const STOP    = 19        # Stop token              
const LE      = 20        # The '<='       token    
const GE      = 21        # The '>='       token    
const SIZEOF  = 22        # The sizeof token        
const CAST    = 23        # The cast   token        
const RCONST  = 24        # float   constant token  
const CMPLX   = 25        # The cmplx   keyword     
const NEW     = 26        # The new     keyword     
const DELETE  = 50        # The delete  keyword     
const IM      = 27        # The im      keyword     
const RE      = 28        # The re      keyword     
const LEN     = 29        # The len     keyword     
const CONST   = 431       # The const   keyword     
const IMPORT = 433        # The import keyword     
const IND    = 600        # Indent token
const DIND    = 601       # Deindent token
const PASS    = 701        # Pass token
const NOOP    = 1001      # No operation token

# Data structures 
#
# The datastructures of Scan are very simple and
# consists of two character arrays  ScanText and
# ScanBuffer. The former is used to hold a string
# literal associated with the current token.
# The latter is used as a simple buffer to hold 
# intermediate strings.
# In addition there is an integer array, ScanStack,
# which implements a stack to hold the ind   ation level.

int  ScanIndent        # Value of indent
int  ScanIndentsave    # Old value of indent
char [*] ScanText      # Lexical value of token       
char [*] ScanBuffer    # Temporary array              
int ScanLine           # line number                  
int ScanLinesave       # Remember line no             
int ScanFp             # Input file descriptor      
#int ScanInfile         # Input file descriptor        
#char [*] ScanInfilename  # Input file name
char [*] ScanFile      # Input file name            
int  [*] ScanStack     # Stack for indentation
int      ScanSp        # Stack pointer
const LMAX  = 258      # Max no of indentations
int ScanContline       # Continuation lines

int ScanGetline() :

  # ScanGetline gets the physical line no.
  # 
  # Parameters: None
  #
  # Returns: 
  #   Line number
  
  return(ScanLine+ScanContline) 

char [*] ScanGetfile() :   

  # ScanGetfile  gets input file name.  
  #
  # Parameters: None
  #
  # Returns:
  #   Input file name
  #

  return(ScanFile) 

int ScanError(char [*] s): 

  # ScanError prints an error message.
  #
  # Parameters:
  #   s       : Error message
  #
  # Returns : None
  # 
  # ScanError exits the program

  ErrError(ScanGetfile(), ScanGetline(), s) 

  return(OK)

int ScanPush(int l):

  # ScanPush pushes one item on the stack
  #
  # Arguments:
  #  l :  Integer to push.
  #
  # Returns OK

  ScanSp = ScanSp+1 
  if(ScanSp > LMAX):
    ScanError("Max no of indentations reached") 
  ScanStack[ScanSp] = l 
  return(OK) 

int ScanPop():

  # ScanPop pops one item from the stack
  #
  #
  # Returns 
  #  one integer from the stack
  
  ScanSp = ScanSp-1 
  if(ScanSp < 0):
    ScanError("Indentation error") 
     
  return (ScanStack[ScanSp]) 
   
 
int ScanInit(char [*] infile) :

# ScanInit initializes the  scanner.
#
# Parameters:
#   infile  : input file
#
# Returns   : OK
#
# ScanInit takes the input file name as argumnet 
# and must be called once
# before any other calls to functions in the Scan module are made.
# 
# Before I start, the two arrays ScanText and ScanBuffer must
# be created.

  const LTEXT = 4096  
  ScanContline=0 
  ScanText = new(char [LTEXT]) 
  ScanBuffer = new(char [LTEXT]) 
  ScanFp = LibeOpen(infile, "r") 
  if(ScanFp == ERR):
    LibePuts(stderr, "Can not open input file: ") 
    LibePuts(stderr, infile) 
    LibePuts(stderr,"\n") 
    LibeFlush(stderr) 
    return(ERR) 
  ScanFile = LibeStrsave(infile) 
  ScanIndentsave = 0 
  ScanIndent     = 0 
  ScanStack = new(int[LMAX]) 
  ScanSp = 0 
  ScanStack[0] = 0 
  return(OK) 
     
int ScanGetch()  :    

  # ScanGetch gets a character.  
  # 
  # Parameters: None
  #
  # Returns: 
  #   Next character from the input file.
  #

  return(LibeGetc(ScanFp)) 
   
int ScanIncline() :

 # ScanIncline  increment lineno by 1. 
 # 
 # Parameters: None
 #
 # Returns: 
 #   Line number
 #
 
  ScanLinesave = ScanLine 
  ScanLine = ScanLine + 1 
  return(OK) 
 
int ScanUngetch() :     

  # ScanUngetch ungets a character.  
  # 
  # Parameters: None
  #
  # Returns: 
  #   Pushed back character   
  #

  return(LibeUngetc(ScanFp)) 

int ScanBlank()  :   

  # ScanBlank computes indentation and erases blank lines or comments  
  #
  # Parameters : None
  #
  # Returns:
  #   indentation : No of leading spaces/tabs (tabs count one) 
  #   If indentation returns a negative value negative 
  #   this was a blank (indent=-1) or
  #   comment (indent = -2) line.

  int c 
  int indent 
  
  # Count indentation
  indent=0 
  while(((c=ScanGetch()) == SPACE) || (c == TAB)) :
    indent = indent+1 
     

  # Read a comment line
  # Note that a trailing comment (after live code)
  # is read by ScanLex()

  # Push back EOF and let ScanLex deal with EOF
  if(c == EOF):
    ScanUngetch() 
    return(indent) 

  if(c == '#'):
    indent=-2 
    while(ScanGetch() != NL):
      indent=-2 
    ScanIncline() 
    return(indent) 

  # Read a blank line
  else if(c == NL):
    indent = -1 
    ScanIncline() 
    return(indent) 

  # Live code line
  else :
    # Make sure the lexer gets the last read character
    ScanUngetch() 
    return(indent) 
 
int ScanWhite()  :   

  # ScanWhite -- skips white space.  
  #
  # Parameters : None
  #
  # Returns:
  #   OK

  int d
  int c 

  while(((c=ScanGetch()) == SPACE) || (c == TAB)):
    d = 0  
  ScanUngetch() 

  return(OK) 
    
 

int ScanComment() :

  #  ScanComment skips comment.  
  #
  # Parameters : None
  #
  # Returns:
  #   OK

  int incomment,c 

  incomment=OK 

  # Skip the text within the comments  
  while(incomment == OK):
    c = ScanGetch() 
    if(c == NL):
      ScanIncline() 
    if(c=='*'):
      c = ScanGetch() 
      if(c == NL):
        ScanIncline() 
      if(c=='/'):
        incomment=ERR 

    if(c == EOF):
      ScanError("Closing comment missing") 
     
  return(OK) 
 
int ScanLcomment() :

  # ScanLcomment skips line comment.  
  #
  # Parameters : None
  #
  # Returns:
  #   OK

  int incomment,c 
        
  incomment=OK 

  # Skip the text within the comments  

  while(incomment == OK):
    c = ScanGetch() 
    if(c == NL):
      incomment=ERR 
  ScanUngetch() 
  return(OK) 
   

 
int ScanFtail(int p) :     

  # ScanFtail  gets the tail of a floating point number.  
  # 
  # Parameters: 
  #   p : position counter
  #
  # Returns: 
  #   position count (relative to input)
  #
  # ScanFtail finds the digits of a float after the '.'
  # and copies into ScanText.
  #

  int c 
 
  while(LibeIsdigit(c=ScanGetch())): 
    p = p + 1 
    if( p >= len(ScanText,0)):
      ScanError("Digit is too long") 
    ScanText[p] = cast(char, c) 
      
  if((c == 'e') || (c == 'E')):        
    p = p + 1 
    if( p >= len(ScanText,0)):
      ScanError("Digit is too long") 
    ScanText[p] = cast(char, c) 
    c = ScanGetch() 
    if((c == PLUS) || ( c == MINUS)):
      p = p + 1 
      if( p >= len(ScanText,0)):
        ScanError("Digit is too long") 
      ScanText[p] = cast(char, c) 
      while(LibeIsdigit(c=ScanGetch())): 
        p = p + 1 
        if( p >= len(ScanText,0)):
          ScanError("Digit is too long") 
        ScanText[p] = cast(char, c) 
      ScanUngetch() 
      ScanText[p+1] = cast(char, EOS) 
      return (p) 
    else:
      ScanError("Unknown token") 
    return(ERR) 
  else:
    ScanUngetch() 
    ScanText[p+1] = cast(char, EOS) 

    return (p) 

int ScanLex() :

  # ScanLex finds and returns the next token.
  #
  # Parameters: None
  #
  # Returns: Token
  #
  # Lex reads the source file and generates all tokens
  # except the ind   ation tokens IND and DIND.
  # Token values are define above, and the literal value of the token are
  # returned by the ScanGetext routine.

  int c                  # Token value                          
  int p                  # Next available position in ScanText  
  int rval               # Return value                         
  int string 
  int comments 

  # Start of the lexical analysis  
         
  ScanWhite() 

  c= ScanGetch()       # Get the first character  
  p = 0 
  ScanText[p] = cast(char, c) 

  # Process comments                 

  comments = OK 
  while(comments==OK):
    if(c=='#'):
      ScanLcomment() 
      #ScanWhite() 
      c=ScanGetch() 
      ScanText[p] = cast(char, c) 
    else:
      comments=ERR 

  # Process     of file              

  if (c == EOF):
      rval = STOP               # Stop if this was the last character  
      return(rval) 

  # Process single character tokens  

  if (c == PLUS):             # '+'  
    rval = PLUS 
  else if (c == STAR):         # '*'  
    rval = STAR 
  else if (c == SLASH):        # '/'  
    rval = SLASH 
  else if (c == BSLASH):        # '\'  
    rval = SPACE 
    ScanGetch() 
    ScanContline=ScanContline+1 
  else if (c == LP):          # '('  
    rval = LP 
  else if (c == RP):          # ')'  
    rval = RP 
  else if (c == RB):          # '   '  
    rval = RB 
  else if (c == LB):          # ':'  
    rval = LB 
  else if (c == LBR):         # '['  
    rval = LBR 
  else if (c == RBR):         # ']'  
    rval = RBR 
  else if (c == COLON):       # ':'  
    rval = COLON 
  else if (c == SEMICOLON):   # ' '  
    rval = SEMICOLON 
  else if (c == COMMA):       # ','  
    rval = COMMA 
  else if (c == POINT):       # '.'   
    rval = POINT 
  else if (c == NL   ):       # '\n'   
    rval = NL 
    ScanIncline() 

  # Start processing of complex tokens  

  else if (c == LT):                    
    if((c = ScanGetch()) == ASSIGN):     # '<='  
      rval =  LE 
      p = p + 1 
      ScanText[p] = cast(char, c) 
    else:                                # '<'  
      ScanUngetch() 
      rval = LT 
       
  else if (c == GT):                   
    if((c = ScanGetch()) == ASSIGN):     # '>='  
       rval =  GE 
       p = p + 1 
       ScanText[p] = cast(char, c) 
    else:
      ScanUngetch()                      # '>'  
      rval = GT 
  else if (c == MINUS):            
    if((c = ScanGetch()) == GT):        # '->'  
      rval =  RARROW 
      p = p + 1 
      ScanText[p] = cast(char, c) 
    else:
      ScanUngetch()                     # '-'   
      rval = MINUS 
  else if (c == VBAR):                  # '||'  
    if((c = ScanGetch()) == VBAR):
      rval =  OR 
      p = p +1 
      ScanText[p] = cast(char, c) 
    else:
      ScanError("Illegal character") 
  else if (c == ADRESS):                  # '&&'  
    if((c = ScanGetch()) == ADRESS):
      rval =  AND 
      p = p +1 
      ScanText[p] = cast(char, c) 
    else:
      ScanError("Illegal character") 
  else if (c == EXLAM):                 # '!='  
    if((c = ScanGetch()) == ASSIGN):
      rval =  NE 
      p = p + 1 
      ScanText[p] = cast(char, c) 
    else:
      ScanError("Illegal character") 
  else if (c == ASSIGN):                # '=='  
    if((c = ScanGetch()) == ASSIGN):
      rval =  EQ 
      p = p+1 
      ScanText[p] = cast(char, c) 
    else:
      ScanUngetch()                     # '='  
      rval = ASSIGN 
  
  # String  

  else if (c == DFN):               
    ScanText[p] = cast(char, DFN)  
    p = p + 1 
    string = 1 
    while(string == 1):
      if((c = ScanGetch()) != DFN):
        string = 1 
      else: 
        if(cast(int, ScanText[p-1]) == BSLASH):
          string = 1 
        else:
          string = 0 
      ScanText[p] = cast(char, c) 
      p = p+1 
      if( p >= len(ScanText,0)-1):
         ScanError("String is too long") 
       
    ScanText[p] = cast(char, EOS) 
    rval = SCONST 
     

  # Character constant  

  else if (c == SFN):
    ScanText[p] = cast(char, SFN)  
    p = p + 1 
    ScanText[p] = cast(char, ScanGetch()) 
    c = ScanGetch() 
    if(c != SFN):
      ScanError("Character constant is too long") 
    else:
      p = p + 1 
      ScanText[p] = cast(char, c) 
    p = p + 1 
    ScanText[p] = cast(char, EOS) 
    rval = ICONST 

  # Decimal or floating point number   

  else if(LibeIsdigit(c)):
    while (LibeIsdigit(c=ScanGetch())) :
      p = p + 1 
      ScanText[p] = cast(char, c) 
      if( p >= len(ScanText,0)):
        ScanError("Digit is too long") 
    if(c == POINT):
      p = p + 1 
      if( p >= len(ScanText,0)):
        ScanError("Digit is too long") 
      ScanText[p] = cast(char, c) 
      p = ScanFtail(p) 
      rval = RCONST 
    else:
      ScanUngetch() 
      ScanText[p+1] = cast(char, EOS) 
      rval = ICONST 

  # Keywords  and identifiers  

  else if(LibeIsalnum(c)):
    while (LibeIsalnum(c=ScanGetch())):
      p = p + 1 
      ScanText[p] = cast(char, c) 
      if( p >= len(ScanText,0)):
        ScanError("Identifier is too long") 
    ScanUngetch() 
    ScanText[p+1] = cast(char, EOS) 
    if(LibeStrcmp(ScanText,"int")):
      rval = INT 
    else if(LibeStrcmp(ScanText,"char")):
      rval = CHAR 
    else if(LibeStrcmp(ScanText,"float")):
      rval = REAL 
    else if(LibeStrcmp(ScanText,"const")):
      rval = CONST 
    else if(LibeStrcmp(ScanText,"complex")):
      rval = COMPLEX 
    else if(LibeStrcmp(ScanText,"struct")):
      rval = STRUCT 
    else if(LibeStrcmp(ScanText,"class")):
      rval = STRUCT 
    else if(LibeStrcmp(ScanText,"import")):
      rval = IMPORT 
    else if(LibeStrcmp(ScanText,"while")):
      rval = WHILE 
    else if(LibeStrcmp(ScanText,"return")):
      rval = RETURN 
    else if(LibeStrcmp(ScanText,"if")):
      rval = IF 
    else if(LibeStrcmp(ScanText,"else")):
      rval = ELSE 
    else if(LibeStrcmp(ScanText,"sizeof")):
      rval = SIZEOF 
    else if(LibeStrcmp(ScanText,"cast")):
      rval = CAST 
    else if(LibeStrcmp(ScanText,"new")):
      rval = NEW 
    else if(LibeStrcmp(ScanText,"delete")):
      rval = DELETE 
    else if(LibeStrcmp(ScanText,"len")):
      rval = LEN 
    else if(LibeStrcmp(ScanText,"cmplx")):
      rval = CMPLX 
    else if(LibeStrcmp(ScanText,"re")):
      rval = RE 
    else if(LibeStrcmp(ScanText,"im")):
      rval = IM 
    else if(LibeStrcmp(ScanText,"for")):
      rval = FOR 
    else if(LibeStrcmp(ScanText,"parallel")):
      rval = PARALLEL 
    else if(LibeStrcmp(ScanText,"pass")):
      rval = PASS 
    else:
      rval = ID 
  else: 
    ScanError("Invalid token") 
    return(ERR) 
     
  ScanText[p+1] = cast(char, EOS) 
  return rval 
 
char [*] ScanSetfile(char [*] fname) :    

  # ScanSetfile sets the input file name.  
  #
  # Parameters: 
  #   fname : File name
  #
  # Returns:
  #   OK
  #

  if(ScanFile != NULL):
    delete(ScanFile) 
     
  ScanFile = LibeStrsave(fname) 
  return(ScanFile) 

int ScanGetok() :

  # ScanGetok returns next token.
  #
  # Parameters: None
  # 
  # Returns : Token
  #
  # Getok is the main interface to Scan.
  # Each call of ScanGetok returns a new token read from
  # the standard input. The token values are listed above.
  # If no more characters can be read,
  # the STOP token is returned.
  # ScanGetext returns a string literal associated with
  # the token.
  # 
  # Getok is handling the indentation tokens but call on Lex to
  # do most of the token processing.
  # The indentation algorithm is taken from the 
  # "The Python Language Reference version 3.13.1" section 2 
  # "Lexical Analysis"

  int c       # Last token read 
  int indent  # Temporary for identation
  int level   # Indentation level

  # If we are at the start of a line remove comment and blank lines.
  if(ScanLine > ScanLinesave):
    indent=-1 
    while(indent < 0):
      indent=ScanBlank()  
    ScanIndent = indent 
    ScanLinesave=ScanLine 

  # If this is the first call of Getok
  #  initialize ScanIndentsave
  if(ScanIndentsave == -1):
    ScanIndentsave=ScanIndent 
     
  # If indentation increased emit an IND token.
  # The indentation is stored on a stack.
  if(ScanIndent > ScanIndentsave) :
    ScanIndentsave=ScanIndent 
    ScanPush(ScanIndent) 
    return(IND) 

  # If indentation decreases emit an DIND
  # token on each subsequent call until the
  # current level is reached.
  # Indentation level is taken from the stack.
  else if(ScanIndent < ScanIndentsave) :
    level = ScanPop()  
    ScanIndentsave = level 
    return(DIND) 

  # Return the next token obtained by Lex()
  else :
    c=ScanLex() 
    if(c == SPACE):
      c=ScanLex() 
       
    return(c) 
     
     

char [*] ScanGetext() :

  # ScanGetext  gets text of token.
  #
  # Parameters: None
  #
  # Returns: textstring with value of token
  #

  return ScanText 

int ScanSetline(int lineno) :

  # Setline sets line no.
  # 
  # Parameters:
  #   lineno :  Line number
  #
  # Returns: 0
  
  ScanLinesave = -1 
  ScanLine = lineno     
  return 0 

int ScanGetword(char [*] ttext) :

  # ScanGetword gets next word. 
  # 
  # Parameters: ttext
  #
  # Returns: 
  #   Next word in ttext.
  #

  return(LibeGetw(ScanFp, ttext)) 
