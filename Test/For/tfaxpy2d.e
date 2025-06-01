# Faxpy is a simple matrix addition test 

import libe
import faxpy2d

def int Main(struct MainArg [*] MainArgs):
  int      nx,ny;
  float [*,*] x
  float [*,*] y
  float [*,*] a
  float [*,*] c
  int i,j,k
  int niter
  float b
  float t0,t

  LibeInit(); 

  nx = 6000
  ny = 6000
  x = new(float[nx,ny])
  y = new(float[nx,ny])
  a = new(float[nx,ny])

  for i in range (0,nx):
    for j in range (0,ny):
      x[i,j] = 1.0
      y[i,j] = 1.0

  # Perform the vector addition 1000 times
  niter = 1000

  t0 = LibeClock()
  for i in range(0,niter) :
    b=1.0
    faxpy2d(a,x,y,b)
  t=LibeClock()-t0

  LibePs("Eps version\n");
  LibePs("Time: "); LibePf(t); LibePs("\n")
  LibePs("result: "); LibePf(a[0,0]); LibePs("\n");
  return(OK);

