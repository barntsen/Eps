
import libe                 
import scan

def int Main(struct MainArg [*] MainArgs) :
   int c;

   LibeInit()
   ScanInit("t.e")
   ScanSetline(1)

   c = 0;
   while(c != STOP) :
     c = ScanGetok();
     LibePi(c); LibePs("\n");
     LibePs("Line: "); LibePi(ScanGetline());LibePs("\n");
