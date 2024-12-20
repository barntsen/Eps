# Faxpy is a simple matrix addition test 

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
  float [*,*] x
  float [*,*] y
  float [*,*] a
  float [*,*] c
  int i,j,k
  int niter
  float b
  float gflops
  float t0,t

  LibeInit(); 

  nx = 2000
  ny = 2000
  x = new(float[nx,ny])
  y = new(float[nx,ny])
  a = new(float[nx,ny])

  for(i=0; i<nx; i=i+1):
    for(j=0; j<ny; j=j+1):
      x[i,j] = 1.0
      y[i,j] = 1.0

  # Perform the vector addition 1000 times
  niter = 1000

  # Start timer
  t0=LibeClock();
  for(i=0; i<niter; i=i+1):
    b=cast(float,i)
    faxpy2d(a,x,y,b)

  t = LibeClock()-t0
  # End timer

  # Print results
  LibePs("Time (secs): ");
  LibePf(t);
  LibePs("\n");

  gflops = cast(float,nx*ny*2)/1.0e+09
  gflops = gflops*cast(float,niter)/t
  LibePs("Gflops : ");
  LibePf(gflops);
  LibePs("\n");

  LibePs("a: ");
  k=1;
  LibePf(a[k,k]);
  LibePs("\n");

  return(OK);

