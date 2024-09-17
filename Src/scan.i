#This file contains exported functions and variables  for the scanner.
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
const INCLUDE = 432;        # The import keyword     
const IMPORT = 433;        # The import keyword     

# ScanInit initialize the scanner.
# ScanInit takes the input file name as argumnet 
# and must be called once
# before any other calls to functions in the Scan module are made.
int ScanInit(char [*] infile):end 
 

# ScanGetok gets the next token.
#Each call of ScanGetok returns a new token read from
#the standard input. The token values are listed above.
#If no more characters can be read,
#the STOP token is returned.
# ScanGetext returns a string literal associated with
# the token.
int ScanGetok():end 
      

#
#This function sets the current line number to the value of
#lineno. The line number is used for error reporting.
 
int ScanSetline(int lineno):
end 

int ScanGetline():
end 

int ScanIncline():
end 

char [*] ScanGetext():
end 

char [*] ScanGetfile():
end 

char [*] ScanSetfile(char [*] fname):
end 

char [*] ScanPath():
end 
 
