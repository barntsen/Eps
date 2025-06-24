# Faxpy is a simple matrix addition test 

import libe
import faxpy2d

def int Main(struct MainArg [*] MainArgs):
  int      nx,ny;
  float [*,*] x
  float [*,*] y
  float [*,*] a
  float [*,*] c
  int i,j,k,l
  int niter
  float b
  float t0,t
  int nm

  LibeInit(); 

  nx=256
  ny=256
  
  nm=7
  for l in range(0,nm):
    x = new(float[nx,ny])
    y = new(float[nx,ny])
    a = new(float[nx,ny])

    for(i=0; i<nx; i=i+1):
      for(j=0; j<ny; j=j+1):
        x[i,j] = 1.0
        y[i,j] = 1.0
    # Perform the vector addition 1000 times
    niter = 1000

    t0 = LibeClock()
    for(i=0; i<niter; i=i+1):
      b=1.0
      faxpy2d(a,x,y,b)
      y[0,0]=1.0
    t=LibeClock()-t0

    LibePi(nx); LibePs("\n")
    LibePi(ny); LibePs("\n")
    LibePf(t);  LibePs("\n")
    nx=2*nx
    ny=2*ny
    delete(x)
    delete(y)
    delete(a)
  return(0)
