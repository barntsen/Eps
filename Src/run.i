#
# Run.i -- eps interface for the run time library
# The run time library is written in C, so this is just
# the eps interface. Most of the routines in the library
# are unix system calls and math functions.
# RunMalloc -- Allocate memory
#char [*] RunMalloc(int nb):end 
 
#
# RunFree -- Deallocate memory
#char [*] RunFree(int nb):end 
 
#
# RunCreate -- create a file
int RunCreate(char [*] name):end 
 
#
# RunClock-- measure elapsed time
float RunClock():end 
 
#
# RunOpen -- open a fileend 
 
int RunOpen(char [*] name, char [*] mode):end 
 
#
# RunClose -- close a file
int RunClose(int fd):end 
 
#
 
int RunRead(int fd, int lbuff, char [*] buffer):end 
 
#RunRead reads in  lbuff characters into the
#buffer array from a file with descriptor  fd.
#The return value is the number of characters actually read.
#If an error has occured ERR will be returned.
#
int RunWrite(int fd, int lbuff, char [*] buffer):end 
 
#
#RunWrite writes lbuff from the buffer array.
#The return value is the number of characters actually written.
# ERR is returned whenever an error has occured.
 
int RunSeek(int fd, int pos, int flag):end 
 
#
# RunSeek sets the file position to pos bytes
# relative to the start of the file (flag=0), to the current position
# (flag=1) or relative to the end of the file (flag=2).
#  ERR is returned whenever an error has occured.
# Otherwise is the file position returned.
#
char [*] RunGetenv(char [*] name):end 
 
# RunGetenv returns the value of the environment
# variable contained in the string name.

# RunGetnt gets the number of threads from the
# environment variable NTHREADS.
int RunGetnt():end 
 

# RunGetnb gets the number of threads from the
# environment variable NTHREADS.
int RunGetnb():end 
 
#
# RunStrcmp -- compare strings
int RunStrcmp(char [*] s, char [*] t):end 
 
#
# RunStrlen -- string length
int RunStrlen(char [*] s):end 
 
#
# RunExit cleans up and exits.
int RunExit():end 
 
 
# RunSystem
int RunSystem(char [*] cmd):end 
 
