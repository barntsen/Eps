# Saxpy vector addition test program

import libe
import saxpy

def int Main(struct MainArg [*] MainArgs):

  LibeInit()
  arch=MainArgs[1].arg
  if(arch==NULL) :
    LibePs("Use command line argument one of cpu,omp or cuda\n")
    LibeExit()

  n=2000000
  a=2.0
  x=new(float[n])
  y=new(float[n])
  z=new(float[n])

  for i in range(0,n) :
    x[i]=1.0
    y[i]=1.0

  niter=10000

  t0=LibeClock()
  runsaxpy(a,x,y,z,niter)
  t=LibeClock()

  LibePs("Time for saxpy:"); LibePf(t-t0); 
  LibePs(" ("); LibePs(arch); LibePs(") \n") 
  return(OK)
