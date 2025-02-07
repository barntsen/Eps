
import libe                 

int Main(struct MainArg [*] MainArgs) :
  float fnumber;
  char [*] s;

  LibeIoinit()

  # Fundamental ascii fixed point float conversion

  fnumber=3.14;
  s=LibeStrsave("xxxxxxxxxxxxx");
  LibeFtoa(fnumber,"6.4f",s);
  LibePs(s); LibePs("\n");


  return(0)






