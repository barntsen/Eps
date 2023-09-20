// Faxpy is a simple vector addition test 


include <libe.i>                 // Library interface   
include "model.i"
include "rec.i"
include "src.i"
include "diff.i"
include "ac2d.i"

int Main(struct MainArg [*] MainArgs)
{
  int      nx,ny;
  float [*,*] vp;
  float [*,*] rho;
  float [*,*] q;
  float Dx;
  float Dt;
  float W0;
  int   Nb;
  struct model Model;
  struct ac2d  Ac2d;

  int i,j;
  float t0,t1,t2;

  LibeInit(); // Initialize library for io etc..

  nx = 8000;
  ny = 8000;
  vp = new(float[nx,ny]);
  rho = new(float[nx,ny]);
  q   = new(float[nx,ny]);

  for(i=0; i<nx; i=i+1){
    for(j=0; j<ny; j=j+1){
      vp[i,j] = 2000.0;
      rho[i,j] = 2000.0;
      q[i,j] = 100000.0;
    }
  }

  // Start timer
  Nb=30;
  Dt=0.001;
  Dx=5.0;
  W0 = 2.0*3.14159*20.0;

  t0=LibeClock();
  Model = ModelNew(vp,rho,q,Dx,Dt,W0,Nb,MAXWELL);
  t1 = LibeClock()-t0;
  t0=LibeClock();
  Ac2d = Ac2dNew(Model);
  t2 = LibeClock()-t0;

  // Print results
  LibePuts(stderr,"Time model: ");
  LibePutf(stderr,t1);
  LibePuts(stderr,"\n");
  LibeFlush(stderr);
  LibePuts(stderr,"Time ac2d: ");
  LibePutf(stderr,t2);
  LibePuts(stderr,"\n");
  LibeFlush(stderr);

  return(OK);
}
