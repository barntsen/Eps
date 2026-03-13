# Saxpy vector addition
import libe

def int saxpy(float a, float [*] x, float [*] y, float [*] z) :
  
  # Saxpy perform the vector operation a*x+y, where a is a scalar.
  #
  # Parameters:
  #   a : scalar
  #   x : float input vector
  #   y : float input vector
  #   y : float output vector
  #
  # Returns:
  #  OK
  #
    parallel(i=0:len(x,0)):
      z[i] = a*x[i]+y[i] 

def int runsaxpy(float a, float [*] x, float [*] y, float [*] z, int niter) :
  
  # Runsaxpy is a wrapper for calling saxpy
  #
  # Parameters:
  #   a : scalar
  #   x : float input vector
  #   y : float input vector
  #   y : float output vector
  #   niter : Number of iterations of saxpy
  #
  # Returns:
  #   Output is in the z array
  #

    for i in range(0,niter) :
      saxpy(a,x,y,z)

    return(1)

def int runsaxpy2d(float a, float [*,*] x, float [*,*] y, \
                   float [*,*] z, int niter) :
  
  # Runsaxpy2d is a wrapper for calling saxpy2d
  #
  # Parameters:
  #   a : scalar
  #   x : float input matrix
  #   y : float input matrix
  #   y : float output matrix
  #   niter : Number of iterations of saxpy
  #
  # Returns:
  #   Output is in the z array
  #

    for i in range(0,niter) :
      saxpy2d(a,x,y,z)

    return(1)

