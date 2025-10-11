
import libe                 

def int Main(struct MainArg [*] MainArgs) :
  float f;
  int maxdig
  char [*] s;

  LibeIoinit()

  # Fundamental ascii fixed point float conversion
  
  f = 314159111111111.0
  s=LibeStrsave("****************")
  LibeFtoa(f, "g", s)
  LibePs(s); LibePs("\n")

  return(0)






