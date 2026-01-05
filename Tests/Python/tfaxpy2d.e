# tfaxpy2d runs a test of the faxpy2d matrix addition function.

import libe
import faxpy2d

def int Main(struct MainArg [*] MainArgs):

  # The test runs (a number of times) the basic matrix operation
  #
  # a=bx+y,
  #
  # where a,x,y are 2d matrices
  # for different matrix sizes.


  LibeInit(); 

  nx=4
  ny=4
  
  x = new(float [nx,ny])
  y = new(float [nx,ny])
  a = new(float [nx,ny])
  
  for(i=0; i<nx; i=i+1):
    for(j=0; j<ny; j=j+1):
      x[i,j] = 1.0
      y[i,j] = 1.0

  b=3.0
  faxpy2d(a,x,y,b)

  for(i=0; i<nx; i=i+1):
    for(j=0; j<ny; j=j+1):
       LibePf(a[i,j]); LibePs("\n")

  return(0)
