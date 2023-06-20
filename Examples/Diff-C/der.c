// Faxpy is a simple vector addition test 


#include <stdio.h>                 // Library interface   
#include <stdlib.h>
#include "diff.h"


int main()
{
  int      nx,ny;
  double **x;
  double **y;
  double **a;
  int i,j,l;
  int niter;
  double dx;
  Diff * df;

  nx = 1001;
  ny = 1001;
  x = (double**)malloc(sizeof(double)*nx);
  y = (double**)malloc(sizeof(double)*nx);
  a = (double**)malloc(sizeof(double)*nx);

  for(i=0; i<nx; i=i+1){
    x[i] = (double*)malloc(sizeof(double)*ny);
    y[i] = (double*)malloc(sizeof(double)*ny);
    a[i] = (double*)malloc(sizeof(double)*ny);
  }

  for(i=0; i<nx; i=i+1){
    for(j=0; j<ny; j=j+1){
      x[i][j] = 1.0;
      y[i][j] = 1.0;
    }
  }

  l=8;
  df=DiffNew(l); 
  dx=10.0;
  // Perform the vector addition 1000 times
  niter = 100;

  for(i=0; i<niter; i=i+1){
    DiffDxplus(df,x,y,dx,nx,ny);
    DiffDxminus(df,x,y,dx,nx,ny);
    DiffDyplus(df,x,y,dx,nx,ny);
    DiffDyminus(df,x,y,dx,nx,ny);
  }

  // Print results
  printf("y[100][100] %f\n", y[0][0]);

  return(0);
}
