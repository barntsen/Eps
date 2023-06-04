// Faxpy is a simple vector addition test 


include <libe.i>                 // Library interface   

int faxpy(float [*] a, float [*] x, float [*] y, float b){}

int Main(struct MainArg [*] MainArgs)
{
  int      nx;
  float [*] x;
  float [*] y;
  float [*] a;
  int i;
  int niter;
  float b;
  float gflops;
  float t0,t;

  LibeInit(); // Initialize library for io etc..

  nx = 3000000;
  x = new(float[nx]);
  y = new(float[nx]);
  a = new(float[nx]);

  b=3.14159;
  for(i=0; i<nx; i=i+1){
    x[i] = 1.0;
    y[i] = 1.0;
  }

  // Perform the vector addition 1000 times
  niter = 1000;

  // Start timer
  t0=LibeClock();
  for(i=0; i<niter; i=i+1){
    faxpy(a,x,y,b);
  }
  t = LibeClock()-t0;
  // End timer
  t = t/cast(float,niter); //Average time for one vector addition

  // Compute gflops
  gflops = cast(float,nx*2)/t;
  gflops = gflops/1.0e+09;

  // Print results
  LibePuts(stderr,"Time: ");
  LibePutf(stderr,t);
  LibePuts(stderr,"\n");
  LibePuts(stderr,"Gflop: ");
  LibePutf(stderr,gflops);
  LibePuts(stderr,"\n");
  LibeFlush(stderr);
  

  return(OK);
}
//
// Faxpy function for vector addition
//
int faxpy(float [*] a, float [*] x, float [*] y, float b){ 
 int i;
 int n; 
  
  n=len(x,0);
  parallel(i=0:n){
    a[i] = b*y[i]+x[i];
  }
}
