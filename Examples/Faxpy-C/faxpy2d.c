// Faxpy is a simple vector addition test 


#include <stdio.h>                 // Library interface   
#include <stdlib.h>

float *faxpy2d(float *a, float *x, float *y, float b, int nx, int ny); 

int main()
{
  int      nx,ny;
  float *x;
  float *y;
  float *a;
  float *c; 
  int i,j;
  int niter;
  float b;
  float gflops;
  float t0,t;


  nx = 20000;
  ny = 20000;
  x = (float*)malloc(sizeof(float)*nx*ny);
  y = (float*)malloc(sizeof(float)*nx*ny);
  a = (float*)malloc(sizeof(float)*nx*ny);

  b=3.14159;
  for(i=0; i<nx; i=i+1){
    for(j=0; j<ny; j=j+1){
      x[i*nx+j] = 1.0;
      y[i*nx+j] = 1.0;
    }
  }

  // Perform the vector addition 1000 times
  niter = 100;

  for(i=0; i<niter; i=i+1){
    b=i;
    c=faxpy2d(a,x,y,b,nx,ny);
  }

  // Print results
  printf("a[0] %f\n", a[0]);
  

  return(0);
}
//
// Faxpy function for vector addition
//
float *faxpy2d(float *a, float *x, float *y, float b, int nx, int ny){ 
 int i,j;
  
  for(i=0;i<ny;i=i+1)
  {
    for(j=0;j<ny;j=j+1)
    {
      a[i*nx+j] = b*y[i*nx+j]+x[i*nx+j];
    }
  }
  return(a);
}
