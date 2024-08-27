# The scanner reads the input source file one character
# at a time and collects them into groups called 
# tokens Examples of tokens are keywords like
# ``if'', ``for'' and ``while'' and numbers like ``238'' and
# ``3.14159''.
 
include "libe.i"      # Library module   
include "scan.i"      # Lexical scanner interface 
include "ptree.i"     # Parse tree  module  
include "err.i"       # Error routines module

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
 
int ScanLex():end
int ScanGetword(char [*] ttext):end # Get one word        
int ScanGetch():end                 # Get a character     
int ScanUngetch():end               # Unget a character   
int ScanFtail(int p):end            # Tail of a float     
int ScanInclude():end
int ScanWhite():end
int ScanComment():end
int ScanLcomment():end
 
int ScanInit(char [*] infile) :

# ScanInit initializes the  scanner.

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
 
int ScanGetok() :

  # ScanGetok return next token.

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
 
int ScanLex() :

  # ScanLex finds and returns the next token.

  # This is the main routine of the scanner and returns the next token.
  # Token values are define above, and the literal value of the token are
  # returned by the :\tt ScanGetextend routine.

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
      ErrError("Illegal character");
  end
  else if (c == ADRESS):                  # '&&'  
    if((c = ScanGetch()) == ADRESS):
      rval =  AND;
      p = p +1;
      ScanText[p] = cast(char, c);
    end
    else
      ErrError("Illegal character");
  end
  else if (c == EXLAM):                 # '!='  
    if((c = ScanGetch()) == ASSIGN):
      rval =  NE;
      p = p + 1;
      ScanText[p] = cast(char, c);
    end
    else
      ErrError("Illegal character");
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
          ErrError("String is too long");
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
      ErrError("Character constant is too long");
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
        ErrError("Digit is too long");
    end
    if(c == POINT):
      p = p + 1;
      if( p >= len(ScanText,0))
        ErrError("Digit is too long");
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
        ErrError("Identifier is too long");
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
    ErrError("Invalid token");
	return(ERR);
  end
  ScanText[p+1] = cast(char, EOS);
  return rval;
end
 
char [*] ScanGetext() :

  # ScanGetext  gets text of token.

  return ScanText;
end

int ScanSetline(int lineno) :

 # Setline sets line no.
  
  ScanLine = lineno;    
  return 0;
end
int ScanGetline() :

  # Getline -- Get line no.
  
    return(ScanLine);
end

int ScanIncline() :

  # ScanIncline  increment lineno by 1. 
 
  ScanLine = ScanLine + 1;
  return(OK);
end
 
int ScanGetword(char [*] ttext) :

  #ScanGetword gets next word. 

  return(LibeGetw(ScanFp, ttext));
end
 
int ScanGetch()  :    

  # ScanGetch gets a character.  

  return(LibeGetc(ScanFp));
end
 
int ScanFtail(int p) :     

  # ScanFtail  gets the tail of a floating point number.  

  int c;
 
  while(LibeIsdigit(c=ScanGetch())): 
    p = p + 1;
    if( p >= len(ScanText,0))
      ErrError("Digit is too long");
    ScanText[p] = cast(char, c);
  end 
  if((c == 'e') || (c == 'E')):        
    p = p + 1;
    if( p >= len(ScanText,0))
      ErrError("Digit is too long");
    ScanText[p] = cast(char, c);
    c = ScanGetch();
    if((c == PLUS) || ( c == MINUS)):
      p = p + 1;
      if( p >= len(ScanText,0))
        ErrError("Digit is too long");
      ScanText[p] = cast(char, c);
      while(LibeIsdigit(c=ScanGetch())): 
        p = p + 1;
        if( p >= len(ScanText,0))
          ErrError("Digit is too long");
        ScanText[p] = cast(char, c);
      end
      ScanUngetch();
      ScanText[p+1] = cast(char, EOS);
      return (p);
    end
    else
      ErrError("Unknown token");
      return(ERR);
  end
  else:
    ScanUngetch();
    ScanText[p+1] = cast(char, EOS);
    return (p);
  end
end

int ScanUngetch() :     

 #ScanUngetch ungets a character.  
 
  return(LibeUngetc(ScanFp));
end
 
int ScanInclude()  :  
 
 #ScanInclude includes a file.  

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
      ErrError("Invalid string in include statement");
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
      ErrError("String is too long");
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
 
char [*] ScanGetfile() :   

  # ScanGetfile  gets input file name.  

  return(ScanFile);
end
 
char [*] ScanSetfile(char [*] fname) :    

 # ScanSetfile sets input file name.  

  if(ScanFile != NULL):
    delete(ScanFile);
  end
  ScanFile = LibeStrsave(fname);
  return(ScanFile);
end
 
int ScanWhite()  :   

  # ScanWhite -- skips white space.  

  int c;

  while(((c=ScanGetch()) == SPACE) || (c == TAB) || (c == NL)) 
    if(c == NL)
      ScanIncline();
  ScanUngetch();

  return(OK);
 end
 
int ScanComment() :

  #  ScanComment skips comment.  

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
      ErrPanic("Closing comment missing");
    end
  end
  return(OK);
end
 
int ScanLcomment() :

  # ScanLcomment skips line comment.  

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
