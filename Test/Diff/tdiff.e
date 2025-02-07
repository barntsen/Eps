# Diff is a test of differentiator routines

import libe
import diff

int Main(struct MainArg [*] MainArgs):
  int      nx,ny;
  float [*,*] x #Input array to be differentiated
  float [*,*] y #Output array
  int niter    # No of times to run test
  float gflop,nop # No of flops
  float t0,t   #Start end time
  int i,j,k    #Loop indices
  struct diff df    #Differentiator struct
  int l        #Operator length
  float dx

  LibeInit(); 

  l=8
  df = DiffNew(l)

  nx = 4096
  ny = 4096
  x = new(float[nx,ny])
  y = new(float[nx,ny])

  for(i=0; i<nx; i=i+1):
    for(j=0; j<ny; j=j+1):
      x[i,j] = 1.0
      y[i,j] = 0.0

  #
  niter = 10000
  dx=1.0
  t0=LibeClock()
  for(i=0; i<niter; i=i+1):
    DiffDxminus(df,x,y,dx,i)
  t=LibeClock()-t0
  nop = (2.0*cast(float,l)+1.0)*cast(float,nx)*cast(float,ny)*cast(float,niter)
  gflop=nop/t
  gflop=gflop/1.0e+09
  LibePs("time: "); LibePf(t); LibePs("\n");
  LibePs("gflop: "); LibePf(gflop); LibePs("\n");
  LibePs("nx: "); LibePi(nx); LibePs("\n");
  LibePs("y[0,0]: "); LibePf(y[0,0]); LibePs("\n");
  return(OK)
