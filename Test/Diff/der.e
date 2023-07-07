// Der is a test of the diff library


include <libe.i>                 // Library interface   
include "diff.i"

int faxpy2d(float [*,*] a, float [*,*] x, float [*,*] y, float b){}

int Main(struct MainArg [*] MainArgs)
{
  int      nx,ny;
  float [*,*] x;
  float [*,*] y;
  float [*,*] z;
  float [*,*] a;
  float [*,*] b;
  int i,j,k;
  int niter;
  float dx;
  float t0,t;
  struct diff df;
  int l;
  float c;

  LibeInit(); // Initialize library for io etc..
  

  nx = 1001;
  ny = 1001;
  x = new(float[nx,ny]);
  y = new(float[nx,ny]);
  z = new(float[nx,ny]);
  a = new(float[nx,ny]);
  b = new(float[nx,ny]);

  for(i=0; i<nx; i=i+1){
    for(j=0; j<ny; j=j+1){
      x[i,j] = 1.0*cast(float,i)*cast(float,j);
      y[i,j] = 1.0*cast(float,i)*cast(float,j);
      z[i,j] = 1.0*cast(float,i)*cast(float,j);
    }
  }

  // Perform the test a number of times
  niter = 1501;
  l=8;
  df = DiffNew(l);
  dx=10.0;
  // Start timer
  t0=LibeClock();
  for(i=0; i<niter; i=i+1){
    y[i,i] = cast(float,i);
    DiffDxminus(df, x, y, dx);
    DiffDxplus(df, y, z, dx);
    DiffDyminus(df, z, y, dx);
    DiffDyplus(df, y, x, dx);
  }
  t = LibeClock()-t0;
  // End timer

  // Print results
  LibePuts(stderr,"Time: ");
  LibePutf(stderr,t);
  LibePuts(stderr,"\n");
  LibePuts(stderr,"a: ");
  c=y[0,0];
  LibePutf(stderr,c);
  LibePuts(stderr,"\n");
  LibeFlush(stderr);

  return(0);
}
