// Faxpy is a simple vector addition test 


#include <stdio.h>                 // Library interface   
#include <stdlib.h>

float *faxpy(float *a, float *x, float *y, float b, int n); 

int main()
{
  int      nx;
  float *x;
  float *y;
  float *a;
  float *c; 
  int i;
  int niter;
  float b;
  float gflops;
  float t0,t;


  nx = 3000000;
  x = (float*)malloc(sizeof(float)*nx);
  y = (float*)malloc(sizeof(float)*nx);
  a = (float*)malloc(sizeof(float)*nx);

  b=3.14159;
  for(i=0; i<nx; i=i+1){
    x[i] = 1.0;
    y[i] = 1.0;
  }

  // Perform the vector addition 1000 times
  niter = 1000;

  for(i=0; i<niter; i=i+1){
    b=i;
    c=faxpy(a,x,y,b,nx);
  }

  // Print results
  printf("a[0] %f\n", a[0]);
  

  return(0);
}
//
// Faxpy function for vector addition
//
float *faxpy(float *a, float *x, float *y, float b, int n){ 
 int i;
  
  for(i=0;i<n;i=i+1)
  {
    a[i] = b*y[i]+x[i];
  }
  return(a);
}
