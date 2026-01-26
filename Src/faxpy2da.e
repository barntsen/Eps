# Faxpy2d is a simple matrix addition test 

def float [*,*] faxpy2d(float [*,*] a, float [*,*] x, float [*,*] y, float b):
  
 nx=len(x,0)
 ny=len(x,1)

 parallel(i=0:nx,j=0:ny):
   a[i,j] = b*y[i,j]+x[i,j]

 return(a)
