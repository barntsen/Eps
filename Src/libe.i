#
# First I define some usefull constants which are actually used
# throughout all my code.  OK is the standard return value
# when everything is fine, while  ERR is used to signal
# an error. NULL is equal to zero, and is mainly used
# to indicate that a reference is referencing nothing.
# EOF is the end-of-file indicator, while
# EOS is the end-of-string mark.
# NL is the new line character, while
# TAB and SPACE are the tab and space characters.
 
const ZERO = 48;  # Zero               
const EOS  =  0;  # End of string      
const NULL =  0;  # Null               
const NL   = 10;  # New line           
const TAB  =  9;  # Tab character      
const SPACE = 32; # Space              
#
# I also define names for some common characters.
 
const PLUS  = 43;      # '+'   
const MINUS = 45;      # '-'   
const STAR  = 42;      # '*'   
const LP    = 40;      # '('   
const RP    = 41;      # ')'   
const LB    = 91;      # '['   
const RB    = 93;      # ']'   
const LBR   = 123;     # '{'   
const RBR   = 125;     # '}'   
const COLON =  58;     # ':'   
const SEMICOLON = 59;  # ';'   
const COMMA = 44;      # ','   
const LT    = 60;      # '<'   
const GT    = 62;      # '>'   
const SLASH = 47;      # '/'   
const BSLASH = 92;     # '\'   
const ADRESS = 38;     # '&'   
const ASSIGN = 61;     # '='   
const VBAR   = 124;    # '|'   
const EXLAM  = 33;     # '!'   
const POINT  = 46;     # '.'   
const DFN    = 34;     # '"'   
const SFN    = 39;     # '''   
const HASH   = 35;     # '#'   
#
# EFILE is short hand for int, and only provided
# because I may change this to some other type in
# the future.
# The macros stdin, stdout and  stderr are shorthand
# for the corresponding elements in  LibeFarr containing
# entries for the standard input, the standard output and standard
# error (2,3,4) file descriptors.
 
const stdin = 2;   # Standard  input    
const stdout= 3;   # Standard  output   
const stderr= 4;   # Standard  error    
#
# Error handling
#
int LibeArrayex(int line, char [*] name, int ival, 
               int index, int bound):end 
 
int LibeClearerr():end 
 
int LibeGeterrno():end 
 
char [*] LibeGeterrstr():end 
 
#
# The normal return value for functions in this library is 
# OK, signaling that everything went well and the call
# was successfull.
# If an error occured this is signaled by returning the
# value ERR except if otherwise is noted. 
# Further information is obtained by 
# calling LibeGeterrno which returns an error number.
# At the moment the following errors are defined
 
const OK  =  1;     # No error                         
const ERR =  0;     # An error occured                 
const EMPTY =  2;   # No information                   
const EOF   = -1;   # End-of-file                      
const IOINITERR = -100; # Io could not be initialized    
const DOMAINERR = -101;# Math domain error                  
const RANGERR   = -102;# Math range error              
const FMODEERR  = -103;# Unknown file mode              
const FMAXERR   = -104;# Too many open files           
const OPENERR   = -105;# Could not open file           
const CLOSERR   = -106;# Could not close file          
const PUSHERR   = -107;# Too many pushbacks            
const MEMORYERR = -108;# Buffer array is too small     
const FNOREADERR= -109;# File is not open for read     
const FNOWRITERR= -110;# File is not open for write    
const READERR   = -111;# Read error                    
const WRITERR   = -112;# Write error                   
const ALLOCERR  = -113; # Can not allocate buffer       
#
# LibeArrayex is called whenever an array out-of-bonds
# condition is detected at run-time. 
# The routine is normally supplied by the library, but
# a user defined routine could be written and linked into
# a program. 
# line is the line number where the exception occured,
# name is the array causing the exception,  ival
# is the value of the offending index, index is the
# index dimension (0,1,2, ...) of the offending index, while
# bound is the upper bound of the offending index.
# LibeGetterrno returns the error number of the last
# error.

#
# Main -- the main function
#
#This is the interface to the Main function which always starts
#a program. The command line arguments are stored in a
#character array as part of an array of structures.
 
struct MainArg :char [*] arg;end 
  

int Main(struct MainArg [*] MainArgs):end 
 
#
# Initialization and exit
#
int   LibeInit():end 
                
int   LibeDelete():end 
 
int   LibeExit():end 
 
char[*] LibeGetenv(char [*] name):end 
 
#
# LibeInit performs initialization of the
# library and must be called before any other function.
# In case of failure the routine returns  ERR
# and sets the error flag to IOINITERR. 
# LibeExit cleans up and exits and never returns.
# LibeGetenv returns the value of the
# environment variable contained in name.
# LibeDelete cleans up and removes allocated memory.
#
# I/O-routines
#
int   LibeOpen(char [*] name, char [*] mode ):end 
    
int   LibeClose(int fp ):end 
    
int   LibeGetc(int fp ):end 
    
int   LibeUngetc(int fp ):end 
 
int   LibeGetw(int fp, char [*] text ):end 
    
int   LibePs(char [*] s):end 
 
int   LibePi(int n):end 
 
int   LibePf(float r):end 
 
int   LibePutf(int fp, float r, char [*] form):end 
   
int   LibePutc(int fp, int c):end 
      
int   LibePuts(int fp, char [*] s):end 
  
int   LibePuti(int fp, int ival):end 
  
int   LibeRead(int fp, int n, char [*] array):end 
  
int   LibeWrite(int fp, int n, char [*] array):end 
  
int   LibeSeek(int fp, int pos, int flag):end 
  
int   LibeFlush(int fp):end 
  
#
# The LibeOpen routine opens a file with name  name
# for either reading (mode = 'r'), writing (mode='w')
# or appending at the end of the file ( mode='a').
# The return value is a file descriptor to be used by the
# other io-routines or, in case of error,  ERR.
# The LibeClose routine closes a file with descriptor
# fp and returns OK or, in case of error,  ERR.
# LibeGetc returns a single character from a file with
# descriptor fp or  EOF in case an end-of-file
# has been reached. Note that LibeGetc returns  EOF
# also in case an error has been detected. LibeGeterrno
# then returns  OK if an error did not occur, or in the
# case of an error, the actual error number.
# LibeUngetc pushes the last read character back onto
# the input stream. The return value is the pushed back
# character or  EOF if an error condition has occured or
# an end-of-condition has occured. The LibeGeterrno must
# be used to distinguish an error from an end-of-file condition.
# LibeGetw reads a ``word'', i.e. a string delimited by
# white space (NL, SPACE, TAB) into the text array.
# If the string is longer than the lenght of text, the string
# is truncated.
# LibePutc, LibePuts,  LibePuti and 
# LibePutf outputs a single character, a string, an
# integer and a floating point number, respectively.
#
# String routines
#
#A string is implemented as a an array of characters
#terminated by  EOS.
 
int LibeStrlen( char [*] s):end 
 
int LibeStrcmp( char [*] s, char [*] t):end 
 
int LibeStrev( char [*] s):end 
 
char [*] LibeStrsave( char [*] s):end 
 
int LibeStrcpy( char [*] s, char [*] t):end 
 
int LibeStrcat( char [*] s, char [*] t):end 
 
char [*] LibeStradd( char [*] t, char [*] s):end 
 
int LibeIsalpha(int c):end 
 
int LibeIsdigit(int c):end 
 
int LibeIsalnum(int c):end 
 
#
#The normal return values for these routines are OK 
#and ERR in case of an error.
#LibeStrlen returns the length of the string 
#argument  s. 
# LibeStrcmp returns  OK if the strings
# s and  t are equal, and  ERR 
#otherwise.  LibeStrev reverses the characters
# s and will always return  OK.
# LibeStrcpy copies the string contained in
# s into  t. The return value is
# ERR if the  t array is too small to
#hold the copy of  s.
#LibeStrcat appends the
#string contained in  s to  t and returns ERR
#if the  t array is too small to hold the resulting string.
#The LibeIsalpha routine
#returns  OK if  c contains a character in the 
#range a-z or A-Z, ERR otherwise.
#
#Conversion routines
#
int LibeAtoi( char [*] s):end 
 
int LibeItoa( int n, char [*] s):end 
 
int LibeItoh( int n, char [*] s):end 
 
float LibeAtof(char [*] s):end 
 
int LibeFtoa( float f, char [*] fmt, char [*] s):end 
 
#
# LibeAtoi converts the ascii string contained
# s into an integer, while LibeItoa converts
# the integer  n into an ascii-string stored in  s.
# LibeItoh converts the integer  n into 
# a hexadecimal string contained in  s.
# If the lenght of s is too small to hold the string,
# ERR is returned. In all other cases is  OK
# returned.

# LibeAtof converts the ascii string contained
# in s into a floating point number, while  LibeFtoa converts
# the floating point number  f into an ascii-string stored in  s.
# The format of the output string is controlled by the
# If the lenght of s is too small to hold the string,
# ERR is returned. In all other cases is  OK
# returned.
#
# Floating point routines
#
const MFMIN = 1;  
const MFMAX = 2; 
const MEPSMIN = 3;
const MEPSMAX = 4; 
const MLOG2 =  5; 

float  LibeMach(int flag):end 
 
float  LibeFabs(float x):end 
 
float  LibeFscale2( float x, int n):end 
 
float  LibeGetfman2( float x):end 
 
int    LibeGetfexp2( float x):end 
 
float  LibeFscale( float x, int n):end 
 
int    LibeGetfman( float f, int maxdig):end 
 
float  LibeGetffman( float f):end 
 
int    LibeGetmaxdig( float f):end 
 
int    LibeGetfexp( float f):end 
 
#
# LibeMach returns floating point characteristics
# according to the value of the  flag argument.
# A flag value of MFMIN returns the minimum floating
# point value, a value of MFMAX returns the maximum
# floating point value, a value of MEPSMIN returns
# the minimum floating point accuracy, while a value
#of  MEPSMAX returns the maximum floating point
# accuracy. A value of MLOG2 returns the logarithm
# of 2.
# LibeFabs returns the absolute value of the floating
#point value  x.
# LibeScale2 returns the value $2^n x$.
# A floating point number $x$ can be written as $x = y 2^-n$, 
# where $0.5 \gt y
# \le 1$.  LibeGetfman2 and LibeGetfexp2 computes
# $y$ and $n$, respectively, when $x$ is known. 
# The routines LibeScale, LibeGetfman and 
# LibeGetfexp computes the corresponding values when
# the base is equal to 10.
#
# Time functions
 
float LibeClock():end 
 

#
# Threads and Blocks for GPU
#

# LibeSetnb sets the number of blocks
int LibeSetnb(int n):end 
 
# LibeSetnt sets the number of threads
int LibeSetnt(int n):end 
 

# LibeGetnb gets the number of blocks
int LibeGetnb():end 
 
# LibeGetnt gets the number of threads
int LibeGetnt():end 
 
#
# Elementary functions
#
int LibeMod( int n, int r):end 
 
#
# LibeMod returns the r modulus of the integer n.
# The modulus is computed by
#  mod(n,r) = n -(n/r)r 
#
#where the division is an integer division.
float  LibeSqrt( float x):end 
 
float  LibeLn( float x):end 
 
float  LibeExp( float x):end 
 
float  LibeSin( float x):end 
 
float  LibeCos( float x):end 
 
float  LibeTan( float x):end 
 
float  LibeArcsin( float x):end 
 
float  LibeArccos( float x):end 
 
float  LibeArctan( float x):end 
 
float  LibePow(float base, float exponent):end 
 
#
# System commands
# 
# LibeSystem executes a shell command
int LibeSystem(char [*] cmd):end 
 

