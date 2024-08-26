# Error reporting

include "libe.i"
include "scan.i"
include "ptree.i"
include "err.i"

int ErrError(char [*] s):

  # ErrError prints parser error messages.

  # This is the most basic error reporting routine. It simply
  # prints the current line number and a message. This version
  # immediately aborts after the error message has been printed.

  LibePuts(stderr,"file: "); 
  LibePuts(stderr, ScanGetfile());
  LibePuts(stderr," -- line "); 
  LibePuti(stderr, ScanGetline());
  LibePuts(stderr, " : ");
  LibePuts(stderr, s);  LibePuts(stderr, "\n");
  LibeFlush(stderr);
  LibeExit(); 
  return(OK);
end

int ErrSerror(struct tree p, char [*] s1, char [*] s2) :

  # ErrSerror prints semantic error messages.

  # Sometimes more than one string needs, to be printed. This
  # routine prints two strings and an integer (usually the 
  # line number) and then exits.

  char [*] fname;
  int lineno;

  lineno = PtreeGetline(p);
  fname  = PtreeGetfile(p);
  LibePuts(stderr,"file: "); 
  LibePuts(stderr, fname); LibePuts(stderr, " --  line "); 
  LibePuti(stderr, lineno); LibePuts(stderr, ": "); 
  if(s1 != NULL)
    LibePuts(stderr, s1);   LibePuts(stderr, ": ");
  if(s2 != NULL)
    LibePuts(stderr, s2);   LibePuts(stderr, "\n");
  LibeFlush(stderr);
  LibeExit(); 
  return(OK);
end

int ErrPanic(char [*] s):

  #Panic  prints parser error message and stop.

  # This routine is similar to ErrError, but is always guaranteed
  # to exit after printing an error message.

  LibePuti(stderr, ScanGetline()); LibePuts(stderr, " : ");
  LibePuts(stderr, s); LibePuts(stderr, "\n");
  LibeFlush(stderr);
  LibeExit(); 
  return(OK);
end
