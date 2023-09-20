/*  Translated by epsc  version December 2021 */
typedef struct { float r; float i;} complex; 
typedef struct nctempfloat1 { int d[1]; float *a;} nctempfloat1; 
typedef struct nctempint1 { int d[1]; int *a;} nctempint1; 
typedef struct nctempchar1 { int d[1]; char *a;} nctempchar1; 
typedef struct nctempcomplex1 { int d[1]; complex *a;} nctempcomplex1; 
typedef struct nctempfloat2 { int d[2]; float *a;} nctempfloat2; 
typedef struct nctempint2 { int d[2]; int *a;} nctempint2; 
typedef struct nctempchar2 { int d[2]; char *a;} nctempchar2; 
typedef struct nctempcomplex2 { int d[2]; complex *a;} nctempcomplex2; 
typedef struct nctempfloat3 { int d[3]; float *a;} nctempfloat3; 
typedef struct nctempint3 { int d[3]; int *a;} nctempint3; 
typedef struct nctempchar3 { int d[3]; char *a;} nctempchar3; 
typedef struct nctempcomplex3 { int d[3]; complex *a;} nctempcomplex3; 
typedef struct nctempfloat4 { int d[4]; float *a;} nctempfloat4; 
typedef struct nctempint4 { int d[4]; int *a;} nctempint4; 
typedef struct nctempchar4 { int d[4]; char *a;} nctempchar4; 
typedef struct nctempcomplex4 { int d[4]; complex *a;} nctempcomplex4; 
#include <stdio.h>
extern "C" {
#include <stdlib.h>
#include <string.h>
}
#define NBLOCKS 1024
#define NTHREADS 1024
void *GpuNew(int n);
void *GpuDelete(void *f);
void *GpuError();
int LibeArrayex (int line,nctempchar1 *name,int ival,int index,int bound);
int LibeClearerr ();
int LibeGeterrno ();
nctempchar1* LibeGeterrstr ();
struct MainArg {nctempchar1 *arg;
};
struct nctempMainArg1 {int d[1]; struct MainArg *a; } ;
struct nctempMainArg2 {int d[2]; struct MainArg *a; } ;
struct nctempMainArg3 {int d[3]; struct MainArg *a; } ;
struct nctempMainArg4 {int d[4]; struct MainArg *a; } ;
int Main (struct nctempMainArg1 *MainArgs);
int LibeInit ();
int LibeDelete ();
int LibeExit ();
nctempchar1* LibeGetenv (nctempchar1 *name);
int LibeOpen (nctempchar1 *name,nctempchar1 *mode);
int LibeClose (int fp);
int LibeGetc (int fp);
int LibeUngetc (int fp);
int LibeGetw (int fp,nctempchar1 *text);
int LibePutc (int fp,int c);
int LibePuts (int fp,nctempchar1 *s);
int LibePuti (int fp,int ival);
int LibePutf (int fp,float fval);
int LibeRead (int fp,int n,nctempchar1 *array);
int LibeWrite (int fp,int n,nctempchar1 *array);
int LibeSeek (int fp,int pos,int flag);
int LibeFlush (int fp);
int LibeStrlen (nctempchar1 *s);
int LibeStrcmp (nctempchar1 *s,nctempchar1 *t);
int LibeStrev (nctempchar1 *s);
nctempchar1* LibeStrsave (nctempchar1 *s);
int LibeStrcpy (nctempchar1 *s,nctempchar1 *t);
int LibeStrcat (nctempchar1 *s,nctempchar1 *t);
int LibeIsalpha (int c);
int LibeIsdigit (int c);
int LibeIsalnum (int c);
int LibeAtoi (nctempchar1 *s);
int LibeItoa (int n,nctempchar1 *s);
int LibeItoh (int n,nctempchar1 *s);
float LibeAtof (nctempchar1 *s);
int LibeFtoa (float f,nctempchar1 *fmt,nctempchar1 *s);
float LibeMach (int flag);
float LibeFabs (float x);
float LibeFscale2 (float x,int n);
float LibeGetfman2 (float x);
int LibeGetfexp2 (float x);
float LibeFscale (float x,int n);
int LibeGetfman (float f,int maxdig);
float LibeGetffman (float f);
int LibeGetmaxdig (float f);
int LibeGetfexp (float f);
float LibeClock ();
int LibeMod (int n,int r);
float LibeSqrt (float x);
float LibeLn (float x);
float LibeExp (float x);
float LibeSin (float x);
float LibeCos (float x);
float LibeTan (float x);
float LibeArcsin (float x);
float LibeArccos (float x);
float LibeArctan (float x);
float LibePow (float base,float exponent);
int faxpy (nctempfloat1 *a,nctempfloat1 *x,nctempfloat1 *y,float b);
int Main (struct nctempMainArg1 *MainArgs)
{
int nx;
nctempfloat1 *x;
nctempfloat1 *y;
nctempfloat1 *a;
nctempfloat1 *c;
int i;
int niter;
float b;
float gflops;
float t0;
float t;
int nctemp2=LibeInit();
nx =3000000;
int nctemp13=nx;
nctempfloat1 *nctemp12;
nctemp12=(nctempfloat1*)GpuNew(sizeof(nctempfloat1));
nctemp12->d[0]=nx;
nctemp12->a=(float *)GpuNew(sizeof(float)*nctemp13);
x=nctemp12;
int nctemp22=nx;
nctempfloat1 *nctemp21;
nctemp21=(nctempfloat1*)GpuNew(sizeof(nctempfloat1));
nctemp21->d[0]=nx;
nctemp21->a=(float *)GpuNew(sizeof(float)*nctemp22);
y=nctemp21;
int nctemp31=nx;
nctempfloat1 *nctemp30;
nctemp30=(nctempfloat1*)GpuNew(sizeof(nctempfloat1));
nctemp30->d[0]=nx;
nctemp30->a=(float *)GpuNew(sizeof(float)*nctemp31);
a=nctemp30;
b =3.14159;
i =0;
int nctemp42 = (i < nx);
while(nctemp42){
{
int nctemp49=i;
x->a[nctemp49] =1.0;
int nctemp55=i;
y->a[nctemp55] =1.0;
}
int nctemp66 = i + 1;
i =nctemp66;
int nctemp67 = (i < nx);
nctemp42=nctemp67;
}
niter =1000;
float nctemp79=LibeClock();
t0 =nctemp79;
i =0;
int nctemp84 = (i < niter);
while(nctemp84){
{
float nctemp92=(float)(i);
b =nctemp92;
nctempfloat1* nctemp96= a;
nctempfloat1* nctemp99= x;
nctempfloat1* nctemp102= y;
float nctemp105= b;
int nctemp107=faxpy(nctemp96,nctemp99,nctemp102,nctemp105);
}
int nctemp116 = i + 1;
i =nctemp116;
int nctemp117 = (i < niter);
nctemp84=nctemp117;
}
float nctemp128=LibeClock();
float nctemp130 = nctemp128 - t0;
t =nctemp130;
float nctemp139=(float)(niter);
float nctemp142 = t / nctemp139;
t =nctemp142;
int nctemp156 = nx * 2;
float nctemp150=(float)(nctemp156);
float nctemp158 = nctemp150 / t;
gflops =nctemp158;
float nctemp167 = gflops / 1.0e+09;
gflops =nctemp167;
int nctemp169= 4;
struct nctempchar1 *nctemp173;
struct nctempchar1 nctemp174 = {{ 7}, (char*)"Time: "};
nctemp173=&nctemp174;
nctempchar1* nctemp171= nctemp173;
int nctemp175=LibePuts(nctemp169,nctemp171);
int nctemp177= 4;
float nctemp179= t;
int nctemp181=LibePutf(nctemp177,nctemp179);
int nctemp183= 4;
struct nctempchar1 *nctemp187;
struct nctempchar1 nctemp188 = {{ 3}, (char*)"\n"};
nctemp187=&nctemp188;
nctempchar1* nctemp185= nctemp187;
int nctemp189=LibePuts(nctemp183,nctemp185);
int nctemp191= 4;
struct nctempchar1 *nctemp195;
struct nctempchar1 nctemp196 = {{ 8}, (char*)"Gflop: "};
nctemp195=&nctemp196;
nctempchar1* nctemp193= nctemp195;
int nctemp197=LibePuts(nctemp191,nctemp193);
int nctemp199= 4;
float nctemp201= gflops;
int nctemp203=LibePutf(nctemp199,nctemp201);
int nctemp205= 4;
struct nctempchar1 *nctemp209;
struct nctempchar1 nctemp210 = {{ 3}, (char*)"\n"};
nctemp209=&nctemp210;
nctempchar1* nctemp207= nctemp209;
int nctemp211=LibePuts(nctemp205,nctemp207);
int nctemp213= 4;
struct nctempchar1 *nctemp217;
struct nctempchar1 nctemp218 = {{ 4}, (char*)"a: "};
nctemp217=&nctemp218;
nctempchar1* nctemp215= nctemp217;
int nctemp219=LibePuts(nctemp213,nctemp215);
int nctemp221= 4;
int nctemp225=0;
float nctemp223= a->a[nctemp225];
int nctemp227=LibePutf(nctemp221,nctemp223);
int nctemp229= 4;
struct nctempchar1 *nctemp233;
struct nctempchar1 nctemp234 = {{ 3}, (char*)"\n"};
nctemp233=&nctemp234;
nctempchar1* nctemp231= nctemp233;
int nctemp235=LibePuts(nctemp229,nctemp231);
int nctemp237= 4;
int nctemp239=LibeFlush(nctemp237);
return 1;
}
__global__ void kernel_faxpy (nctempfloat1 *a,nctempfloat1 *x,nctempfloat1 *y,float b);
__global__ void kernel_faxpy (nctempfloat1 *a,nctempfloat1 *x,nctempfloat1 *y,float b)
{
int i;
int n;
int nctemp245=x->d[0];n =nctemp245;
int nctemp251=0;
int nctemp253=n;
int nctemp249=nctemp253-nctemp251;
for(int nctempno=blockIdx.x*blockDim.x + threadIdx.x; nctempno<nctemp249;nctempno+=blockDim.x*gridDim.x){
i=nctemp251+nctempno;
{
int nctemp258=i;
int nctemp268=i;
float nctemp270 = b * y->a[nctemp268];
int nctemp272=i;
float nctemp274 = nctemp270 + x->a[nctemp272];
a->a[nctemp258] =nctemp274;
}
}
}
int faxpy (nctempfloat1 *a,nctempfloat1 *x,nctempfloat1 *y,float b)
{
  kernel_faxpy<<<NBLOCKS,NTHREADS>>>(a,x,y,b);
GpuError();
return(1);
}
