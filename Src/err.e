# Error reporting
#

import libe

int ErrError(char [*] file, int line, char [*] s):

  # ErrError prints parser error messages.
  #
  # Parameters:
  #   file:  File name
  #   line:  Line no
  #   s   :  Error message
  #
  #  Returns : None
  #
  # This is the most basic error reporting routine. It simply
  # prints the current line number and a message. This version
  # immediately aborts after the error message has been printed.
  #

  LibePuts(stderr,"file: "); 
  LibePuts(stderr, file);
  LibePuts(stderr," -- line "); 
  LibePuti(stderr, line);
  LibePuts(stderr, " : ");
  LibePuts(stderr, LibeStrsave(s));  LibePuts(stderr, "\n");
  LibeFlush(stderr);
  LibeExit(); 
  return(OK);
end

int ErrSerror(char [*] file, char [*] fname, int lineno, 
              char [*] s1, char [*] s2) :

  # ErrSerror prints semantic error messages.
  #
  # Parameters:
  #   file:  File name
  #   line:  Line no
  #   s1  :  Error message no 1
  #   s2  :  Error message no 2
  #
  #  Returns : None
  #
  # Sometimes more than one string needs, to be printed. This
  # routine prints two strings and an integer (usually the 
  # line number) and then exits.
  #

  LibePuts(stderr,"file: ");
  LibePuts(stderr, file); LibePuts(stderr," ");
  LibePuts(stderr, " function: "); LibePuts(stderr,fname); LibePuts(stderr," ");
  LibePuts(stderr, " line ");
  LibePuti(stderr, lineno); LibePuts(stderr, ": ");
  if(s1 != NULL)
    LibePuts(stderr, s1);   LibePuts(stderr, ": ");
  if(s2 != NULL)
    LibePuts(stderr, s2);   LibePuts(stderr, "\n");
  LibeFlush(stderr);
  LibeExit();

  return(OK);

end

