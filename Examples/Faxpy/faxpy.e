// Faxpy is a simple vector addition test 


include <libe.i>                 /* Library interface                 */

int faxpy(float [*] a, float [*] x, float [*] y){}

int Main(struct MainArg [*] MainArgs)
{
  int nx;
  float [*] x;
  float [*] y;
  float [*] a;
  int i;
  int niter;

  LibeInit();

  nx = 1001*20001;
  x = new(float[nx]);
  y = new(float[nx]);
  a = new(float[nx]);

  for(i=0; i<nx; i=i+1){
    x[i] = 1.0;
    y[i] = 1.0;
  }

  niter = 1000;
  for(i=0; i<niter; i=i+1){
    faxpy(a,x,y);
  }

  return(OK);
}
//
// Faxpy function for vector addition
//
int faxpy(float [*] a, float [*] x, float [*] y){ 
 int i;
 int n; 
  
  n=len(x,0);
  parallel(i=0:n){
    a[i] = y[i]+x[i];
  }
}
