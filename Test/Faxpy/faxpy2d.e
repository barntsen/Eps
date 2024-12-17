# Faxpy is a simple vector addition test 

import libe

int faxpy2d(float [*,*] a, float [*,*] x, float [*,*] y, float b):
 int i,j
 int nx,ny 
  
 nx=len(x,0)
 ny=len(x,1)
 parallel(i=0:nx,j=0:ny):
   a[i,j] = b*y[i,j]+x[i,j]

int Main(struct MainArg [*] MainArgs):
  int      nx,ny;
  float [*,*] x;
  float [*,*] y;
  float [*,*] a;
  float [*,*] c;
  int i,j,k;
  int niter;
  float b;
  float gflops;
  float t0,t;

  LibeInit(); 

  nx = 8000;
  ny = 8000;
  x = new(float[nx,ny]);
  y = new(float[nx,ny]);
  a = new(float[nx,ny]);

  b=3.14159;
  for(i=0; i<nx; i=i+1):
    for(j=0; j<ny; j=j+1):
      x[i,j] = 1.0;
      y[i,j] = 1.0;

  # Perform the vector addition 1000 times
  niter = 1000;

  # Start timer
  t0=LibeClock();
  for(i=0; i<niter; i=i+1):
    b=cast(float,i);
    faxpy2d(a,x,y,b);

  t = LibeClock()-t0;
  # End timer

  # Print results
  LibePuts(stderr,"Time: ");
  LibePutf(stderr,t,"g");
  LibePuts(stderr,"\n");
  LibePuts(stderr,"a: ");
  k=1;
  LibePutf(stderr,a[k,k],"g");
  LibePuts(stderr,"\n");
  LibeFlush(stderr);

  return(OK);

