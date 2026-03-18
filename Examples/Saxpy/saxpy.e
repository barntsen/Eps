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

