# The scanner reads the input source file one character
# at a time and collects them into groups called 
# tokens Examples of tokens are keywords like
# ``if'', ``for'' and ``while'' and numbers like ``238'' and
# ``3.14159''.
 
import libe      # Library module   
import err       # Error routines module
import scanpath  # Input file path name

# Constants
#
const ID  =    1;         # The Identifier token    
const RARROW = 2;         # The '->'       token    
const EQ =     3;         # The '=='       token    
const NE =     4;         # The '!='       token    
const OR =     5;         # The '||'       token    
const AND =    6;         # The '&&'       token    
const INT =    7;         # The 'int'      keyword  
const CHAR =   8;         # The 'char   '  keyword  
const REAL =   9;         # The 'real'     keyword  
const COMPLEX = 10;       # The 'complex' keyword   
const STRUCT  = 11;       # The 'struct'  keyword   
const WHILE   = 12;       # The 'while'   keyword   
const FOR     = 26;       # The 'for'     keyword   
const PARALLEL= 31;       # The 'parallel' keyword   
const END     = 531;      # The 'end'     keyword   
const RETURN  = 30;       # The 'return'  keyword   
const IF      = 14;       # The 'if'      keyword   
const ELSE    = 15;       # The 'else'    keyword   
const THEN    = 16;       # The 'then'    keyword   
const ICONST  = 17;       # Integer constant token  
const SCONST  = 18;       # String  constant token  
const STOP    = 19;       # Stop token              
const LE      = 20;       # The '<='       token    
const GE      = 21;       # The '>='       token    
const SIZEOF  = 22;       # The sizeof token        
const CAST    = 23;       # The cast   token        
const RCONST  = 24;       # float   constant token  
const CMPLX   = 25;       # The cmplx   keyword     
const NEW     = 26;       # The new     keyword     
const DELETE  = 50;       # The delete  keyword     
const IM      = 27;       # The im      keyword     
const RE      = 28;       # The re      keyword     
const LEN     = 29;       # The len     keyword     
const CONST   = 431;      # The const   keyword     
const INCLUDE = 432;      # The include keyword     
const IMPORT = 433;       # The import keyword     

# Data structures 
#
# The datastructures of Scan are very simple and
# consists of two character arrays; ScanText and
# ScanBuffer. The former is used to hold a string
# literal associated with the current token.
# The latter is used as a simple buffer to hold 
# intermediate strings.

char [*] ScanText;     # Lexical value of token       
char [*] ScanBuffer;   # Temporary array              
int ScanLine;          # line number                  
int ScanLinesave;      # Remember line no             
int ScanFp;            # Current file descriptor      
int ScanInfile;        # Input file descriptor        
char [*] ScanInfilename;
char [*] ScanFile;     # Current file name            
#

char [*] ScanGetfile() :   

  # ScanGetfile  gets input file name.  
  #
  # Parameters: None
  #
  # Returns:
  #   Input file name
  #

  return(ScanFile);

end

int ScanGetline() :

  # ScanGetline gets the line no.
  # 
  # Parameters: None
  #
  # Returns: 
  #   Line number
  
  return(ScanLine);

end

int ScanError(char [*] s): 

  # ScanError prints an error message.
  #
  # Parameters:
  #   s       : Error message
  #
  # Returns : None
  # 
  # ScanError exits the program

  ErrError(ScanGetfile(), ScanGetline(), s);

end
 
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

  const LTEXT = 4096; 
  ScanText = new(char [LTEXT]);
  ScanBuffer = new(char [LTEXT]);
  ScanInfile = LibeOpen(infile, "r");
  if(ScanInfile == ERR):
    LibePuts(stderr, "Can not open input file: ");
    LibePuts(stderr, infile);
    LibePuts(stderr,"\n");
    LibeFlush(stderr);
    return(ERR);
  end
  ScanFp = ScanInfile;
  ScanFile = LibeStrsave(infile);
  ScanInfilename = LibeStrsave(infile);
  return(OK);
end  

int ScanGetch()  :    

  # ScanGetch gets a character.  
  # 
  # Parameters: None
  #
  # Returns: 
  #   Next character from the input file.
  #

  return(LibeGetc(ScanFp));

end
 
int ScanIncline() :

 # ScanIncline  increment lineno by 1. 
 # 
 # Parameters: None
 #
 # Returns: 
 #   Line number
 #
 
  ScanLine = ScanLine + 1;
  return(OK);

end
 
int ScanUngetch() :     

  # ScanUngetch ungets a character.  
  # 
  # Parameters: None
  #
  # Returns: 
  #   Pushed back character   
  #

  return(LibeUngetc(ScanFp));

end

int ScanWhite()  :   

  # ScanWhite -- skips white space.  
  #
  # Parameters : None
  #
  # Returns:
  #   OK

  int c;

  while(((c=ScanGetch()) == SPACE) || (c == TAB) || (c == NL)) 
    if(c == NL)
      ScanIncline();
  ScanUngetch();

  return(OK);
 end
 

int ScanComment() :

  #  ScanComment skips comment.  
  #
  # Parameters : None
  #
  # Returns:
  #   OK

  int incomment,c;
        
  incomment=OK;

  # Skip the text within the comments  

  while(incomment == OK):
    c = ScanGetch();
    if(c == NL)
      ScanIncline();
    if(c=='*'):
      c = ScanGetch();
      if(c == NL)
        ScanIncline();
      if(c=='/'):
        incomment=ERR;
      end
    end
    if(c == EOF):
      ScanError("Closing comment missing");
    end
  end
  return(OK);
end
 
int ScanLcomment() :

  # ScanLcomment skips line comment.  
  #
  # Parameters : None
  #
  # Returns:
  #   OK

  int incomment,c;
        
  incomment=OK;

  # Skip the text within the comments  

  while(incomment == OK):
    c = ScanGetch();
    if(c == NL):
      ScanIncline();
      incomment=ERR;
    end
  end
  return(OK);
end

 
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

  int c;
 
  while(LibeIsdigit(c=ScanGetch())): 
    p = p + 1;
    if( p >= len(ScanText,0))
      ScanError("Digit is too long");
    ScanText[p] = cast(char, c);
  end 
  if((c == 'e') || (c == 'E')):        
    p = p + 1;
    if( p >= len(ScanText,0))
      ScanError("Digit is too long");
    ScanText[p] = cast(char, c);
    c = ScanGetch();
    if((c == PLUS) || ( c == MINUS)):
      p = p + 1;
      if( p >= len(ScanText,0))
        ScanError("Digit is too long");
      ScanText[p] = cast(char, c);
      while(LibeIsdigit(c=ScanGetch())): 
        p = p + 1;
        if( p >= len(ScanText,0))
          ScanError("Digit is too long");
        ScanText[p] = cast(char, c);
      end
      ScanUngetch();
      ScanText[p+1] = cast(char, EOS);
      return (p);
    end
    else
      ScanError("Unknown token");
      return(ERR);
  end
  else:
    ScanUngetch();
    ScanText[p+1] = cast(char, EOS);
    return (p);
  end
end


int ScanLex() :

  # ScanLex finds and returns the next token.
  #
  # Parameters: None
  #
  # Returns: Token
  #
  # This is the main routine of the scanner and returns the next token.
  # Token values are define above, and the literal value of the token are
  # returned by the ScanGetext routine.

  int c;                 # Token value                          
  int p;                 # Next available position in ScanText  
  int rval;              # Return value                         
  int string;
  int comments;

  # Start of the lexical analysis  
         
  ScanWhite();        # Skip white space         
  c= ScanGetch();     # Get the first character  
  p = 0;
  ScanText[p] = cast(char, c);

  # Process comments                 

  comments = OK;
  while(comments==OK):
    if(c=='#'):
      ScanLcomment();
      ScanWhite();
      c=ScanGetch();
      ScanText[p] = cast(char, c);
    end
    else
      comments=ERR;
  end

  # Process end of file              

  if (c == EOF):
      rval = STOP;              # Stop if this was the last character  
      return(rval);
  end


  # Process single character tokens  

  if (c == PLUS)              # '+'  
    rval = PLUS;
  else if (c == STAR)         # '*'  
    rval = STAR;
  else if (c == SLASH)        # '/'  
    rval = SLASH;
  else if (c == LP)           # '('  
    rval = LP;
  else if (c == RP)           # ')'  
    rval = RP;
  else if (c == RB)           # 'end'  
    rval = RB;
  else if (c == LB)           # ':'  
    rval = LB;
  else if (c == LBR)          # '['  
    rval = LBR;
  else if (c == RBR)          # ']'  
    rval = RBR;
  else if (c == COLON)        # ':'  
    rval = COLON;
  else if (c == SEMICOLON)    # ';'  
    rval = SEMICOLON;
  else if (c == COMMA)        # ','  
    rval = COMMA;
  else if (c == POINT)        # '.'   
    rval = POINT;

  # Start processing of complex tokens  

  else if (c == LT)                     
    if((c = ScanGetch()) == ASSIGN):     # '<='  
      rval =  LE;
      p = p + 1;
      ScanText[p] = cast(char, c);
    end
    else:                                # '<'  
      ScanUngetch();
      rval = LT;
    end
  else if (c == GT)                    
    if((c = ScanGetch()) == ASSIGN):     # '>='  
       rval =  GE;
       p = p + 1;
       ScanText[p] = cast(char, c);
    end
    else:
      ScanUngetch();                     # '>'  
      rval = GT;
    end
  else if (c == MINUS):            
    if((c = ScanGetch()) == GT):        # '->'  
      rval =  RARROW;
      p = p + 1;
      ScanText[p] = cast(char, c);
    end
    else:
      ScanUngetch();                    # '-'   
      rval = MINUS;
    end
  end
  else if (c == VBAR):                  # '||'  
    if((c = ScanGetch()) == VBAR):
      rval =  OR;
      p = p +1;
      ScanText[p] = cast(char, c);
    end
    else
      ScanError("Illegal character");
  end
  else if (c == ADRESS):                  # '&&'  
    if((c = ScanGetch()) == ADRESS):
      rval =  AND;
      p = p +1;
      ScanText[p] = cast(char, c);
    end
    else
      ScanError("Illegal character");
  end
  else if (c == EXLAM):                 # '!='  
    if((c = ScanGetch()) == ASSIGN):
      rval =  NE;
      p = p + 1;
      ScanText[p] = cast(char, c);
    end
    else
      ScanError("Illegal character");
  end
  else if (c == ASSIGN):                # '=='  
    if((c = ScanGetch()) == ASSIGN):
      rval =  EQ;
      p = p+1;
      ScanText[p] = cast(char, c);
    end
    else:
      ScanUngetch();                    # '='  
      rval = ASSIGN;
    end
  end
  
  # String  

  else if (c == DFN):               
    ScanText[p] = cast(char, DFN); 
    p = p + 1;
    string = 1;
    while(string == 1):
      if((c = ScanGetch()) != DFN)
        string = 1;
      else: 
        if(cast(int, ScanText[p-1]) == BSLASH)
          string = 1;
        else
          string = 0;
      end
      ScanText[p] = cast(char, c);
        p = p+1;
        if( p >= len(ScanText,0)-1)
          ScanError("String is too long");
    end
    ScanText[p] = cast(char, EOS);
    rval = SCONST;
  end

  # Character constant  

  else if (c == SFN):
    ScanText[p] = cast(char, SFN); 
    p = p + 1;
    ScanText[p] = cast(char, ScanGetch());
    c = ScanGetch();
    if(c != SFN)
      ScanError("Character constant is too long");
    else:
      p = p + 1;
      ScanText[p] = cast(char, c);
    end
    p = p + 1;
    ScanText[p] = cast(char, EOS);
    rval = ICONST;
  end

  # Decimal or floating point number   

  else if(LibeIsdigit(c)):
    while (LibeIsdigit(c=ScanGetch())) :
      p = p + 1;
      ScanText[p] = cast(char, c);
      if( p >= len(ScanText,0))
        ScanError("Digit is too long");
    end
    if(c == POINT):
      p = p + 1;
      if( p >= len(ScanText,0))
        ScanError("Digit is too long");
      ScanText[p] = cast(char, c);
      p = ScanFtail(p);
      rval = RCONST;
    end
    else:
      ScanUngetch();
      ScanText[p+1] = cast(char, EOS);
      rval = ICONST;
    end
  end

  # Keywords  and identifiers  

  else if(LibeIsalnum(c)):
    while (LibeIsalnum(c=ScanGetch())):
      p = p + 1;
      ScanText[p] = cast(char, c);
      if( p >= len(ScanText,0))
        ScanError("Identifier is too long");
    end
    ScanUngetch();
    ScanText[p+1] = cast(char, EOS);

    if(LibeStrcmp(ScanText,"include")==OK):
      rval = INCLUDE;
    end
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
    else if(LibeStrcmp(ScanText,"class"))
      rval = STRUCT;
    else if(LibeStrcmp(ScanText,"import"))
      rval = IMPORT;
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
  end
  else: 
    ScanError("Invalid token");
	return(ERR);
  end
  ScanText[p+1] = cast(char, EOS);
  return rval;
end
 
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
    delete(ScanFile);
  end
  ScanFile = LibeStrsave(fname);
  return(ScanFile);
end

int ScanInclude()  :  
 
  #ScanInclude includes a file.  
  # 
  # Parameters: None
  #
  # Returns: 
  #   OK
  #
  # ScanInclude processes the include statement
  # and opens the include file for reading by the scanner.

  int p,c;
  int string;
  int delimit,l;
  char [*] fname;

  while(((c=ScanGetch()) == SPACE) || (c == TAB) || (c == NL)) 
    if(c == NL)
      ScanIncline();
  ScanUngetch();

  if((c = ScanGetch()) != DFN):
    if(c != '<')
      ScanError("Invalid string in include statement");
  end    
  if(c=='<'):
    delimit = '>';
  end
  else:
    delimit = DFN;
  end
  p = 0;
  string = 1;
  while(string == 1):
    if((c = ScanGetch()) != delimit)
      string = 1;
    else 
      string = 0;
    ScanText[p] = cast(char, c);
    p = p+1;
    if( p >= len(ScanText,0)-1)
      ScanError("String is too long");
  end
  ScanText[p-1] = cast(char, EOS);

  if(delimit == '>'):
    l = LibeStrlen(ScanPath())
        + LibeStrlen(ScanText) + 1; 
    fname = new(char[l]);
    LibeStrcpy(ScanPath(),fname);
    LibeStrcat(ScanText,fname); 
  end
  else
    fname = ScanText;

  ScanFp = LibeOpen(fname,"r");
  ScanSetfile(fname);
  ScanLinesave = ScanLine;
  ScanLine = 1;
  return(OK);
 end
 
 
int ScanGetok() :

  # ScanGetok returns next token.
  #
  # Parameters: None
  # 
  # Returns : Token
  #
  # Each call of ScanGetok returns a new token read from
  # the standard input. The token values are listed above.
  # If no more characters can be read,
  # the STOP token is returned.
  # ScanGetext returns a string literal associated with
  # the token.

  int c;

  if((c=ScanLex())==INCLUDE):
      ScanInclude();
      return(c);
  end
  else if(c == STOP):
    if(ScanFp == ScanInfile)
      return(c);
    else:
      LibeClose(ScanFp);
      ScanFp = ScanInfile;
      ScanSetfile(ScanInfilename);
      ScanLine = ScanLinesave;
      return(ScanGetok());
    end
  end
  else
    return(c);
end  
char [*] ScanGetext() :

  # ScanGetext  gets text of token.
  #
  # Parameters: None
  #
  # Returns: textstring with value of token
  #

  return ScanText;

end

int ScanSetline(int lineno) :

  # Setline sets line no.
  # 
  # Parameters:
  #   lineno :  Line number
  #
  # Returns: 0
  
  ScanLine = lineno;    
  return 0;

end

int ScanGetword(char [*] ttext) :

  # ScanGetword gets next word. 
  # 
  # Parameters: ttext
  #
  # Returns: 
  #   Next word in ttext.
  #

  return(LibeGetw(ScanFp, ttext));

end
 
 
