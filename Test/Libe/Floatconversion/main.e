
import libe                 

int Main(struct MainArg [*] MainArgs) :
  float f;

  LibeIoinit()

  f=139.0e+33
  LibePs("139.0e+09: "); LibePf(-f);LibePs("\n")
  LibePs("139.0e+09: "); LibePutf(stdout,f,"g"); LibePs("\n")
  LibePs("139.0e+33: "); LibePutf(stdout,f,"12.3e"); LibePs("\n")
  f=139567.0
  LibePs("f 1390.1: "); LibePutf(stdout,f,"8.1f"); LibePs("\n")

  return(0)






