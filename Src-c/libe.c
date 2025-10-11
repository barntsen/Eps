//  Translated by epsc  version today  
#include <stddef.h>
#include <stdio.h>
#include <assert.h>
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
#include <stdlib.h>
#include <string.h>
void *RunMalloc(int n); 
int RunFree(void *n); 
int RunCreate (nctempchar1 *name);
float RunClock ();
int RunOpen (nctempchar1 *name,nctempchar1 *mode);
int RunClose (int fd);
int RunRead (int fd,int lbuff,nctempchar1 *buffer);
int RunWrite (int fd,int lbuff,nctempchar1 *buffer);
int RunSeek (int fd,int pos,int flag);
nctempchar1 * RunGetenv (nctempchar1 *name);
int RunGetnt ();
int RunGetnb ();
int RunStrcmp (nctempchar1 *s,nctempchar1 *t);
int RunStrlen (nctempchar1 *s);
int RunExit ();
int RunSystem (nctempchar1 *cmd);
struct MainArg {nctempchar1 *arg;
};
typedef struct nctempMainArg1 {int d[1]; struct MainArg *a; } nctempMainArg1;
struct nctempMainArg2 {int d[2]; struct MainArg *a; } ;
struct nctempMainArg3 {int d[3]; struct MainArg *a; } ;
struct nctempMainArg4 {int d[4]; struct MainArg *a; } ;
static int LibeErrno;
static nctempchar1 *LibeErrstr;
int LibeErrinit ()
{
LibeErrno = 1;
LibeErrstr  = 0;
return 1;
}
int LibeGeterrno ()
{
return LibeErrno;
}
int LibeClearerr ()
{
LibeErrno = 1;
return 1;
}
nctempchar1 * LibeGeterrstr ()
{
return LibeErrstr;
}
nctempchar1 * LibeGetenv (nctempchar1 *name)
{
nctempchar1* nctemp7= name;
nctempchar1* nctemp10=RunGetenv(nctemp7);
return nctemp10;
}
float LibeMach (int flag)
{
int nctemp11 = (flag ==1);
if(nctemp11)
{
return 1.1754943508222875e-38;
}
else{
int nctemp16 = (flag ==2);
if(nctemp16)
{
return 3.4028234663852886e+38;
}
else{
int nctemp21 = (flag ==3);
if(nctemp21)
{
return 5.9604644775390625e-08;
}
else{
int nctemp26 = (flag ==4);
if(nctemp26)
{
return 1.1920928955078125e-07;
}
else{
int nctemp31 = (flag ==5);
if(nctemp31)
{
return 0.6931471805599453;
}
else{
float nctemp37=(float)(0);
return nctemp37;
}
}
}
}
}
}
float LibeFabs (float x)
{
int nctemp40 = (x < 0.0);
if(nctemp40)
{
float nctemp44= -x;
return nctemp44;
}
else{
return x;
}
}
float LibeFscale2 (float x,int n)
{
int i;
float rval;
int nctemp46 = (n ==0);
if(nctemp46)
{
return x;
}
rval = 1.0;
int nctemp51 = (n > 0);
if(nctemp51)
{
for(i = 0;i < n;i = (i + 1)){
rval = (rval * 2.0);
}
}
else{
n =  -n;
for(i = 0;i < n;i = (i + 1)){
rval = (rval * 0.5);
}
}
float nctemp59 = rval * x;
return nctemp59;
}
float LibeGetfman2 (float x)
{
float absx;
int n;
float nctemp64= x;
float nctemp66=LibeFabs(nctemp64);
absx =nctemp66;
n = 0;
int nctemp67 = (x ==0.0);
if(nctemp67)
{
return 0.0;
}
int nctemp72 = (absx < 0.5);
int nctemp76=nctemp72;
while(nctemp76)
{{
n = (n - 1);
absx = (absx * 2.0);
}
int nctemp77 = (absx < 0.5);
nctemp76=nctemp77;}int nctemp81 = (absx >= 1.0);
int nctemp85=nctemp81;
while(nctemp85)
{{
n = (n + 1);
absx = (absx * 0.5);
}
int nctemp86 = (absx >= 1.0);
nctemp85=nctemp86;}int nctemp90 = (x < 0.0);
if(nctemp90)
{
float nctemp94= -absx;
return nctemp94;
}
else{
return absx;
}
}
int LibeGetfexp2 (float x)
{
float absx;
int n;
float nctemp100= x;
float nctemp102=LibeFabs(nctemp100);
absx =nctemp102;
n = 0;
int nctemp103 = (x ==0.0);
if(nctemp103)
{
return 0;
}
int nctemp108 = (absx < 0.5);
int nctemp112=nctemp108;
while(nctemp112)
{{
n = (n - 1);
absx = (absx * 2.0);
}
int nctemp113 = (absx < 0.5);
nctemp112=nctemp113;}int nctemp117 = (absx >= 1.0);
int nctemp121=nctemp117;
while(nctemp121)
{{
n = (n + 1);
absx = (absx * 0.5);
}
int nctemp122 = (absx >= 1.0);
nctemp121=nctemp122;}return n;
}
float LibeFscale (float x,int n)
{
int i;
float rval;
rval = 1.0;
int nctemp127 = (n ==0);
if(nctemp127)
{
return x;
}
int nctemp132 = (n > 0);
if(nctemp132)
{
for(i = 0;i < n;i = (i + 1)){
rval = (rval * 10.0);
}
}
else{
n =  -n;
for(i = 0;i < n;i = (i + 1)){
rval = (rval * 0.1);
}
}
float nctemp140 = rval * x;
return nctemp140;
}
int LibeGetfman (float f,int maxdig)
{
int sign;
int nexp;
int n;
int i;
int nctemp141 = (f ==0.0);
if(nctemp141)
{
return 0;
}
sign = 1;
int nctemp146 = (f < 0.0);
if(nctemp146)
{
f =  -f;
sign =  -sign;
}
nexp = 0;
float nctemp160 = f / 10.0;
float nctemp162 = nctemp160 + 1.1920928955078125e-07;
int nctemp150 = (nctemp162 >= 1.0);
if(nctemp150)
{
float nctemp174 = f / 10.0;
float nctemp176 = nctemp174 + 1.1920928955078125e-07;
int nctemp164 = (nctemp176 >= 1.0);
int nctemp178=nctemp164;
while(nctemp178)
{{
f = (f / 10.0);
nexp = (nexp + 1);
}
float nctemp189 = f / 10.0;
float nctemp191 = nctemp189 + 1.1920928955078125e-07;
int nctemp179 = (nctemp191 >= 1.0);
nctemp178=nctemp179;}}
else{
float nctemp200 = f + 1.1920928955078125e-07;
int nctemp193 = (nctemp200 < 1.0);
if(nctemp193)
{
float nctemp209 = f + 1.1920928955078125e-07;
int nctemp202 = (nctemp209 < 1.0);
int nctemp211=nctemp202;
while(nctemp211)
{{
f = (f * 10.0);
nexp = (nexp - 1);
}
float nctemp219 = f + 1.1920928955078125e-07;
int nctemp212 = (nctemp219 < 1.0);
nctemp211=nctemp212;}}
}
for(i = 0;i < (maxdig - 1);i = (i + 1)){
f = (f * 10.0);
}
float nctemp231 = f + 0.5;
int nctemp225=(int)(nctemp231);
n =nctemp225;
int nctemp232 = (sign < 0);
if(nctemp232)
{
n =  -n;
}
return n;
}
float LibeGetffman (float f)
{
int sign;
int nexp;
int nctemp237 = (f ==0.0);
if(nctemp237)
{
return 0.0;
}
sign = 1;
int nctemp242 = (f < 0.0);
if(nctemp242)
{
f =  -f;
sign =  -sign;
}
nexp = 0;
float nctemp256 = f / 10.0;
float nctemp258 = nctemp256 + 1.1920928955078125e-07;
int nctemp246 = (nctemp258 >= 1.0);
if(nctemp246)
{
float nctemp270 = f / 10.0;
float nctemp272 = nctemp270 + 1.1920928955078125e-07;
int nctemp260 = (nctemp272 >= 1.0);
int nctemp274=nctemp260;
while(nctemp274)
{{
f = (f / 10.0);
nexp = (nexp + 1);
}
float nctemp285 = f / 10.0;
float nctemp287 = nctemp285 + 1.1920928955078125e-07;
int nctemp275 = (nctemp287 >= 1.0);
nctemp274=nctemp275;}}
else{
float nctemp296 = f + 1.1920928955078125e-07;
int nctemp289 = (nctemp296 < 1.0);
if(nctemp289)
{
float nctemp305 = f + 1.1920928955078125e-07;
int nctemp298 = (nctemp305 < 1.0);
int nctemp307=nctemp298;
while(nctemp307)
{{
f = (f * 10.0);
nexp = (nexp - 1);
}
float nctemp315 = f + 1.1920928955078125e-07;
int nctemp308 = (nctemp315 < 1.0);
nctemp307=nctemp308;}}
}
return f;
}
int LibeGetmaxdig (float f)
{
int sign;
int nexp;
int i;
int loop;
float r;
int nctemp318 = (f ==0.0);
if(nctemp318)
{
return 0;
}
sign = 1;
int nctemp323 = (f < 0.0);
if(nctemp323)
{
f =  -f;
sign =  -sign;
}
nexp = 0;
float nctemp337 = f / 10.0;
float nctemp339 = nctemp337 + 1.1920928955078125e-07;
int nctemp327 = (nctemp339 >= 1.0);
if(nctemp327)
{
float nctemp351 = f / 10.0;
float nctemp353 = nctemp351 + 1.1920928955078125e-07;
int nctemp341 = (nctemp353 >= 1.0);
int nctemp355=nctemp341;
while(nctemp355)
{{
f = (f / 10.0);
nexp = (nexp + 1);
}
float nctemp366 = f / 10.0;
float nctemp368 = nctemp366 + 1.1920928955078125e-07;
int nctemp356 = (nctemp368 >= 1.0);
nctemp355=nctemp356;}}
else{
float nctemp377 = f + 1.1920928955078125e-07;
int nctemp370 = (nctemp377 < 1.0);
if(nctemp370)
{
float nctemp386 = f + 1.1920928955078125e-07;
int nctemp379 = (nctemp386 < 1.0);
int nctemp388=nctemp379;
while(nctemp388)
{{
f = (f * 10.0);
nexp = (nexp - 1);
}
float nctemp396 = f + 1.1920928955078125e-07;
int nctemp389 = (nctemp396 < 1.0);
nctemp388=nctemp389;}}
}
i = 0;
loop = 1;
int nctemp399=loop;
while(nctemp399)
{{
int nctemp411=(int)(f);
float nctemp408=(float)(nctemp411);
float nctemp414 = f - nctemp408;
r =nctemp414;
int nctemp415 = (r < 1.1920928955078125e-07);
if(nctemp415)
{
loop = 0;
}
else{
f = (f * 10.0);
}
i = (i + 1);
int nctemp419 = (i >= 10);
if(nctemp419)
{
loop = 0;
}
}
nctemp399=loop;}return i;
}
int LibeGetfexp (float f)
{
int nexp;
int nctemp425 = (f ==0.0);
if(nctemp425)
{
return 0;
}
nexp = 0;
int nctemp430 = (f < 0.0);
if(nctemp430)
{
f =  -f;
}
float nctemp444 = f / 10.0;
float nctemp446 = nctemp444 + 1.1920928955078125e-07;
int nctemp434 = (nctemp446 >= 1.0);
if(nctemp434)
{
float nctemp458 = f / 10.0;
float nctemp460 = nctemp458 + 1.1920928955078125e-07;
int nctemp448 = (nctemp460 >= 1.0);
int nctemp462=nctemp448;
while(nctemp462)
{{
f = (f / 10.0);
nexp = (nexp + 1);
}
float nctemp473 = f / 10.0;
float nctemp475 = nctemp473 + 1.1920928955078125e-07;
int nctemp463 = (nctemp475 >= 1.0);
nctemp462=nctemp463;}}
else{
float nctemp484 = f + 1.1920928955078125e-07;
int nctemp477 = (nctemp484 < 1.0);
if(nctemp477)
{
float nctemp493 = f + 1.1920928955078125e-07;
int nctemp486 = (nctemp493 < 1.0);
int nctemp495=nctemp486;
while(nctemp495)
{{
f = (f * 10.0);
nexp = (nexp - 1);
}
float nctemp503 = f + 1.1920928955078125e-07;
int nctemp496 = (nctemp503 < 1.0);
nctemp495=nctemp496;}}
}
return nexp;
}
float LibeClock ()
{
float nctemp507=RunClock();
return nctemp507;
}
static float LibeSincosmax;
static float LibeSincoslim;
static float LibeLnmax;
static float LibeLnmin;
int LibeMod (int n,int r)
{
int nctemp508 = (r ==0);
if(nctemp508)
{
return n;
}
int nctemp524 = n / r;
int nctemp526 = nctemp524 * r;
int nctemp527 = n - nctemp526;
return nctemp527;
}
float LibeSqrt (float x)
{
float f;
float yest;
float z;
int n;
int nctemp528 = (x ==0.0);
if(nctemp528)
{
return 0.0;
}
int nctemp533 = (x < 0.0);
if(nctemp533)
{
LibeErrno = (-101);
struct nctempchar1 *nctemp542;
static struct nctempchar1 nctemp543 = {{ 25}, (char*)"Sqrt input argument < 0 \0"};
nctemp542=&nctemp543;
LibeErrstr=nctemp542;
return 0.0;
}
float nctemp549= x;
float nctemp551=LibeGetfman2(nctemp549);
f =nctemp551;
float nctemp556= x;
int nctemp558=LibeGetfexp2(nctemp556);
n =nctemp558;
yest = (0.41731 + (0.59016 * f));
z = (yest + (f / yest));
yest = ((0.25 * z) + (f / z));
int nctemp562= n;
int nctemp564= 2;
int nctemp566=LibeMod(nctemp562,nctemp564);
int nctemp559 = (nctemp566 !=0);
if(nctemp559)
{
yest = (yest * 0.70710678118654752440);
n = (n + 1);
}
float nctemp569= yest;
int nctemp576 = n / 2;
int nctemp571= nctemp576;
float nctemp577=LibeFscale2(nctemp569,nctemp571);
return nctemp577;
}
float LibeLn (float x)
{
float f;
int n;
float z;
float zn;
float zd;
float w;
float r;
float xn;
int nctemp578 = (x <= 0.0);
if(nctemp578)
{
LibeErrno = (-101);
struct nctempchar1 *nctemp587;
static struct nctempchar1 nctemp588 = {{ 23}, (char*)"Ln input argument < 0 \0"};
nctemp587=&nctemp588;
LibeErrstr=nctemp587;
return 3.4028234663852886e+38;
}
float nctemp594= x;
float nctemp596=LibeGetfman2(nctemp594);
f =nctemp596;
float nctemp601= x;
int nctemp603=LibeGetfexp2(nctemp601);
n =nctemp603;
int nctemp604 = (f > 0.70710678118654752440);
if(nctemp604)
{
zn = ((f - 0.5) - 0.5);
zd = ((f * 0.5) + 0.5);
}
else{
zn = (f - 0.5);
zd = ((zn * 0.5) + 0.5);
n = (n - 1);
}
z = (zn / zd);
w = (z * z);
r = (z + (z * ((w * (-0.5527074855E+0)) / (w + (-0.6632718214E+1)))));
float nctemp612=(float)(n);
xn =nctemp612;
float nctemp625 = xn * (-2.121944400546905827679E-4);
float nctemp627 = nctemp625 + r;
float nctemp633 = xn * 0.69335938;
float nctemp634 = nctemp627 + nctemp633;
return nctemp634;
}
float LibeExp (float x)
{
int n;
float g;
float z;
float p;
float q;
float xn;
float P0;
float P1;
float Q1;
float rval;
P0 = 0.24999999950E+0;
P1 = 0.41602886268E-2;
Q1 = 0.49987178778E-1;
int nctemp635 = (x >= LibeLnmax);
if(nctemp635)
{
LibeErrno = (-102);
struct nctempchar1 *nctemp644;
static struct nctempchar1 nctemp645 = {{ 25}, (char*)"Overflow in exp function\0"};
nctemp644=&nctemp645;
LibeErrstr=nctemp644;
return 3.4028234663852886e+38;
}
int nctemp647 = (x < LibeLnmin);
if(nctemp647)
{
LibeErrno = (-102);
struct nctempchar1 *nctemp656;
static struct nctempchar1 nctemp657 = {{ 26}, (char*)"Underflow in exp function\0"};
nctemp656=&nctemp657;
LibeErrstr=nctemp656;
return 0.0;
}
float nctemp669 = x * 1.4426950408889634073;
int nctemp663=(int)(nctemp669);
n =nctemp663;
float nctemp674=(float)(n);
xn =nctemp674;
g = (x - (xn * 0.693147180559945309417232));
z = (g * g);
p = (((P1 * z) + P0) * g);
q = ((Q1 * z) + 0.5);
rval = (0.5 + (p / (q - p)));
float nctemp678= rval;
int nctemp685 = n + 1;
int nctemp680= nctemp685;
float nctemp686=LibeFscale2(nctemp678,nctemp680);
return nctemp686;
}
float LibeSincos (float x,float y,float sign)
{
int n;
float xn;
float f;
float g;
float R1;
float R2;
float R3;
float R4;
R1 =  -0.1666665668E+0;
R2 = 0.8333025139E-2;
R3 =  -0.1980741872E-3;
R4 = 0.2601903036E-5;
int nctemp687 = (y > LibeSincosmax);
if(nctemp687)
{
LibeErrno = (-102);
struct nctempchar1 *nctemp696;
static struct nctempchar1 nctemp697 = {{ 37}, (char*)"Loss of accuracy in sin/cos function\0"};
nctemp696=&nctemp697;
LibeErrstr=nctemp696;
return 0.0;
}
float nctemp712 = y * 0.31830988618379067154;
float nctemp714 = nctemp712 + 0.5;
int nctemp703=(int)(nctemp714);
n =nctemp703;
float nctemp719=(float)(n);
xn =nctemp719;
int nctemp725= n;
int nctemp727= 2;
int nctemp729=LibeMod(nctemp725,nctemp727);
int nctemp722 = (nctemp729 !=0);
if(nctemp722)
{
sign =  -sign;
}
float nctemp735= x;
float nctemp737=LibeFabs(nctemp735);
x =nctemp737;
int nctemp738 = (x !=y);
if(nctemp738)
{
xn = (xn - 0.5);
}
float nctemp749= x;
float nctemp751=LibeFabs(nctemp749);
float nctemp757 = xn * 3.1415926535897932384626433832795028841972;
float nctemp758 = nctemp751 - nctemp757;
f =nctemp758;
float nctemp762= f;
float nctemp764=LibeFabs(nctemp762);
int nctemp759 = (nctemp764 < LibeSincoslim);
if(nctemp759)
{
float nctemp770 = sign * f;
return nctemp770;
}
g = (f * f);
g = (((((((R4 * g) + R3) * g) + R2) * g) + R1) * g);
g = (f + (f * g));
float nctemp775 = sign * g;
return nctemp775;
}
float LibeSin (float x)
{
int nctemp776 = (x < 0.0);
if(nctemp776)
{
float nctemp781= x;
float nctemp784= -x;
float nctemp783= nctemp784;
float nctemp786= -1.0;
float nctemp785= nctemp786;
float nctemp787=LibeSincos(nctemp781,nctemp783,nctemp785);
return nctemp787;
}
else{
float nctemp789= x;
float nctemp791= x;
float nctemp793= 1.0;
float nctemp795=LibeSincos(nctemp789,nctemp791,nctemp793);
return nctemp795;
}
}
float LibeCos (float x)
{
float nctemp797= x;
float nctemp803= x;
float nctemp805=LibeFabs(nctemp803);
float nctemp807 = nctemp805 + 1.57079632679489661923132;
float nctemp799= nctemp807;
float nctemp808= 1.0;
float nctemp810=LibeSincos(nctemp797,nctemp799,nctemp808);
return nctemp810;
}
float LibeTan (float x)
{
float P1;
float Q1;
float Q2;
int n;
float y;
float xn;
float f;
float xnum;
float xden;
float g;
P1 =  -0.958017723E-1;
Q1 =  -0.429135777E+0;
Q2 = 0.971685835E-2;
float nctemp815= x;
float nctemp817=LibeFabs(nctemp815);
y =nctemp817;
int nctemp818 = (y > LibeSincosmax);
if(nctemp818)
{
LibeErrno = (-102);
struct nctempchar1 *nctemp827;
static struct nctempchar1 nctemp828 = {{ 33}, (char*)"Loss of accuracy in tan function\0"};
nctemp827=&nctemp828;
LibeErrstr=nctemp827;
return 0.0;
}
float nctemp840 = x * 0.63661977236758134308;
int nctemp834=(int)(nctemp840);
n =nctemp834;
float nctemp845=(float)(n);
xn =nctemp845;
f = (x - (xn * 1.57079632679489661923132));
float nctemp851= f;
float nctemp853=LibeFabs(nctemp851);
int nctemp848 = (nctemp853 < LibeSincoslim);
if(nctemp848)
{
xnum = f;
xden = 1.0;
}
else{
g = (f * f);
xnum = (((P1 * g) * f) + f);
xden = (((((Q2 * g) + Q1) * g) + 0.5) + 0.5);
}
int nctemp858= n;
int nctemp860= 2;
int nctemp862=LibeMod(nctemp858,nctemp860);
int nctemp855 = (nctemp862 !=0);
if(nctemp855)
{
float nctemp867= -xnum;
float nctemp868 = xden / nctemp867;
return nctemp868;
}
else{
float nctemp873 = xnum / xden;
return nctemp873;
}
}
float LibeArcsin (float x)
{
float P1;
float P2;
float Q0;
float Q1;
float y;
float g;
float r;
float res;
int i;
P1 = 0.933935835E+0;
P2 =  -0.504400557E+0;
Q0 = 0.560363004E+1;
Q1 =  -0.554846723E+1;
float nctemp878= x;
float nctemp880=LibeFabs(nctemp878);
y =nctemp880;
int nctemp881 = (y > 0.5);
if(nctemp881)
{
i = 1;
int nctemp885 = (y > 1.0);
if(nctemp885)
{
LibeErrno = (-101);
struct nctempchar1 *nctemp894;
static struct nctempchar1 nctemp895 = {{ 41}, (char*)"Absolute value of argument of arcsin > 1\0"};
nctemp894=&nctemp895;
LibeErrstr=nctemp894;
return 3.4028234663852886e+38;
}
g = ((1.0 - y) * 0.5);
float nctemp901= g;
float nctemp903=LibeSqrt(nctemp901);
r =nctemp903;
r =  -r;
y = (r + r);
r = ((((P2 * g) + P1) * g) / (((g + Q1) * g) + Q0));
res = (y + (y * r));
}
else{
i = 0;
int nctemp904 = (y < LibeSincoslim);
if(nctemp904)
{
res = y;
}
else{
g = (y * y);
g = ((((P2 * g) + P1) * g) / (((g + Q1) * g) + Q0));
res = (y + (y * g));
}
}
int nctemp908 = (i ==1);
if(nctemp908)
{
res = (0.78539816339744830962 + (0.78539816339744830962 + res));
}
int nctemp912 = (x < 0.0);
if(nctemp912)
{
res =  -res;
}
return res;
}
float LibeArccos (float x)
{
float P1;
float P2;
float Q0;
float Q1;
float y;
float g;
float r;
float res;
int i;
P1 = 0.933935835E+0;
P2 =  -0.504400557E+0;
Q0 = 0.560363004E+1;
Q1 =  -0.554846723E+1;
float nctemp921= x;
float nctemp923=LibeFabs(nctemp921);
y =nctemp923;
int nctemp924 = (y > 0.5);
if(nctemp924)
{
i = 0;
int nctemp928 = (y > 1.0);
if(nctemp928)
{
LibeErrno = (-101);
struct nctempchar1 *nctemp937;
static struct nctempchar1 nctemp938 = {{ 50}, (char*)"Absolute value of argument of arccos out of range\0"};
nctemp937=&nctemp938;
LibeErrstr=nctemp937;
return 3.4028234663852886e+38;
}
g = ((1.0 - y) * 0.5);
float nctemp944= g;
float nctemp946=LibeSqrt(nctemp944);
r =nctemp946;
r =  -r;
y = (r + r);
r = ((((P2 * g) + P1) * g) / (((g + Q1) * g) + Q0));
res = (y + (y * r));
}
else{
i = 1;
int nctemp947 = (y < LibeSincoslim);
if(nctemp947)
{
res = y;
}
else{
g = (y * y);
g = ((((P2 * g) + P1) * g) / (((g + Q1) * g) + Q0));
res = (y + (y * g));
}
}
int nctemp951 = (x < 0.0);
if(nctemp951)
{
int nctemp955 = (i ==0);
if(nctemp955)
{
res = (1.57079632679489661923132 + (1.57079632679489661923132 + res));
}
else{
res = (0.78539816339744830962 + (0.78539816339744830962 + res));
}
}
else{
int nctemp959 = (i ==1);
if(nctemp959)
{
res = (0.78539816339744830962 + (0.78539816339744830962 - res));
}
else{
res =  -res;
}
}
return res;
}
float LibeAtan (float f)
{
float rt32;
float rt3;
float a;
float P0;
float P1;
float Q0;
int n;
float res;
float g;
rt32 = 0.26794919243112270647;
rt3 = 1.73205080756887729353;
a = (rt3 - 1.0);
P0 =  -0.4708325141E+0;
P1 =  -0.5090958253E-1;
Q0 = 0.1412500740E+1;
int nctemp964 = (f > 1.0);
if(nctemp964)
{
f = (1.0 / f);
n = 2;
}
else{
n = 0;
}
int nctemp968 = (f > rt32);
if(nctemp968)
{
f = (((((a * f) - 0.5) - 0.5) + f) / (rt3 + f));
n = (n + 1);
}
float nctemp975= f;
float nctemp977=LibeFabs(nctemp975);
int nctemp972 = (nctemp977 < LibeSincoslim);
if(nctemp972)
{
res = f;
}
else{
g = (f * f);
res = ((((P1 * g) + P0) * g) / (g + Q0));
res = (f + (f * res));
}
int nctemp979 = (n > 1);
if(nctemp979)
{
res =  -res;
}
int nctemp983 = (n ==1);
if(nctemp983)
{
res = (res + 0.52359877559829887308);
}
else{
int nctemp987 = (n ==2);
if(nctemp987)
{
res = (res + 1.57079632679489661923132);
}
else{
int nctemp991 = (n ==3);
if(nctemp991)
{
res = (res + 1.04719755119659774615);
}
}
}
return res;
}
float LibeArctan (float x)
{
float rval;
int nctemp996 = (x < 0.0);
if(nctemp996)
{
float nctemp1005= -x;
float nctemp1004= nctemp1005;
float nctemp1006=LibeAtan(nctemp1004);
rval =nctemp1006;
rval =  -rval;
}
else{
float nctemp1011= x;
float nctemp1013=LibeAtan(nctemp1011);
rval =nctemp1013;
}
return rval;
}
float LibePow (float base,float exponent)
{
float nctemp1021= base;
float nctemp1023=LibeLn(nctemp1021);
float nctemp1024 = exponent * nctemp1023;
float nctemp1016= nctemp1024;
float nctemp1025=LibeExp(nctemp1016);
return nctemp1025;
}
int LibeMathinit ()
{
float nctemp1030= 1.0;
int nctemp1037 = 24 - 1;
int nctemp1032= nctemp1037;
float nctemp1038=LibeFscale2(nctemp1030,nctemp1032);
LibeSincosmax =nctemp1038;
float nctemp1047= LibeSincosmax;
float nctemp1049=LibeSqrt(nctemp1047);
float nctemp1050 = 3.1415926535897932384626433832795028841972 * nctemp1049;
LibeSincosmax =nctemp1050;
float nctemp1059= 1.0;
int nctemp1066 = 24 / 2;
int nctemp1061= nctemp1066;
float nctemp1067=LibeFscale2(nctemp1059,nctemp1061);
float nctemp1068 = 1.0 / nctemp1067;
LibeSincoslim =nctemp1068;
float nctemp1073= 3.4028234663852886e+38;
float nctemp1075=LibeLn(nctemp1073);
LibeLnmax =nctemp1075;
float nctemp1080= 1.1754943508222875e-38;
float nctemp1082=LibeLn(nctemp1080);
LibeLnmin =nctemp1082;
return 1;
}
int LibeStrlen (nctempchar1 *s)
{
int ls;
int i;
int nctemp1088=s->d[0];ls =nctemp1088;
i = 0;
int nctemp1101=i;
int nctemp1098=(int)(s->a[nctemp1101]);
int nctemp1095 = (nctemp1098 !=0);
int nctemp1105 = (i < ls);
int nctemp1092 = (nctemp1095 && nctemp1105);
int nctemp1109=nctemp1092;
while(nctemp1109)
{{
i = (i + 1);
}
int nctemp1119=i;
int nctemp1116=(int)(s->a[nctemp1119]);
int nctemp1113 = (nctemp1116 !=0);
int nctemp1123 = (i < ls);
int nctemp1110 = (nctemp1113 && nctemp1123);
nctemp1109=nctemp1110;}return i;
}
int LibeStrcmp (nctempchar1 *s,nctempchar1 *t)
{
int ls;
int i;
int nctemp1132=s->d[0];ls =nctemp1132;
i = 0;
int nctemp1142=i;
int nctemp1145=i;
int nctemp1139 = (s->a[nctemp1142] ==t->a[nctemp1145]);
int nctemp1148 = (i < ls);
int nctemp1136 = (nctemp1139 && nctemp1148);
int nctemp1152=nctemp1136;
while(nctemp1152)
{{
int nctemp1159=i;
int nctemp1156=(int)(s->a[nctemp1159]);
int nctemp1153 = (nctemp1156 ==0);
if(nctemp1153)
{
return 1;
}
i = (i + 1);
}
int nctemp1169=i;
int nctemp1172=i;
int nctemp1166 = (s->a[nctemp1169] ==t->a[nctemp1172]);
int nctemp1175 = (i < ls);
int nctemp1163 = (nctemp1166 && nctemp1175);
nctemp1152=nctemp1163;}return 0;
}
int LibeStrev (nctempchar1 *s)
{
char c;
int i;
int j;
i = 0;
nctempchar1* nctemp1187= s;
int nctemp1190=LibeStrlen(nctemp1187);
int nctemp1192 = nctemp1190 - 1;
j =nctemp1192;
int nctemp1193 = (i < j);
int nctemp1197=nctemp1193;
while(nctemp1197)
{{
c = s->a[i];
s->a[i] = s->a[j];
s->a[j] = c;
i = (i + 1);
j = (j - 1);
}
int nctemp1198 = (i < j);
nctemp1197=nctemp1198;}return 1;
}
int LibeStrcpy (nctempchar1 *s,nctempchar1 *t)
{
int ls;
int i;
nctempchar1* nctemp1207= s;
int nctemp1210=LibeStrlen(nctemp1207);
ls =nctemp1210;
int nctemp1211 = (ls ==0);
if(nctemp1211)
{
return 1;
}
int nctemp1219=t->d[0];int nctemp1216 = (nctemp1219 <= ls);
if(nctemp1216)
{
return 0;
}
for(i = 0;i <= ls;i = (i + 1)){
t->a[i] = s->a[i];
}
return 1;
}
int LibeStrcat (nctempchar1 *s,nctempchar1 *t)
{
int ls;
int lt;
int i;
nctempchar1* nctemp1230= s;
int nctemp1233=LibeStrlen(nctemp1230);
ls =nctemp1233;
nctempchar1* nctemp1238= t;
int nctemp1241=LibeStrlen(nctemp1238);
lt =nctemp1241;
int nctemp1245=t->d[0];int nctemp1254 = lt + ls;
int nctemp1242 = (nctemp1245 < nctemp1254);
if(nctemp1242)
{
return 0;
}
for(i = lt;i < (ls + lt);i = (i + 1)){
t->a[i] = s->a[i - lt];
}
int nctemp1264 = ls + lt;
int nctemp1259=nctemp1264;
char nctemp1266=(char)(0);
t->a[nctemp1259] =nctemp1266;
return 1;
}
nctempchar1 * LibeStradd (nctempchar1 *t,nctempchar1 *s)
{
int ls;
int lt;
nctempchar1 *r;
int i;
nctempchar1* nctemp1274= s;
int nctemp1277=LibeStrlen(nctemp1274);
ls =nctemp1277;
nctempchar1* nctemp1282= t;
int nctemp1285=LibeStrlen(nctemp1282);
lt =nctemp1285;
int nctemp1300 = lt + ls;
int nctemp1302 = nctemp1300 + 1;
int nctemp1292=nctemp1302;
nctempchar1 *nctemp1291;
nctemp1291=(nctempchar1*)RunMalloc(sizeof(nctempchar1));
int nctemp1310 = lt + ls;
int nctemp1312 = nctemp1310 + 1;
nctemp1291->d[0]=nctemp1312;
nctemp1291->a=(char *)RunMalloc(sizeof(char)*nctemp1292);
r=nctemp1291;
for(i = 0;i < lt;i = (i + 1)){
r->a[i] = t->a[i];
}
for(i = lt;i < (ls + lt);i = (i + 1)){
r->a[i] = s->a[i - lt];
}
int nctemp1321 = ls + lt;
int nctemp1316=nctemp1321;
char nctemp1323=(char)(0);
r->a[nctemp1316] =nctemp1323;
return r;
}
nctempchar1 * LibeStrsave (nctempchar1 *s)
{
int l;
nctempchar1 *tmp;
tmp  = 0;
l = 0;
nctempchar1* nctemp1332= s;
int nctemp1335=LibeStrlen(nctemp1332);
l =nctemp1335;
int nctemp1347 = l + 1;
int nctemp1342=nctemp1347;
nctempchar1 *nctemp1341;
nctemp1341=(nctempchar1*)RunMalloc(sizeof(nctempchar1));
int nctemp1352 = l + 1;
nctemp1341->d[0]=nctemp1352;
nctemp1341->a=(char *)RunMalloc(sizeof(char)*nctemp1342);
tmp=nctemp1341;
nctempchar1 *nctemp1354 =tmp;
int nctemp1353 =(nctemp1354!=0);
if(nctemp1353)
{
nctempchar1* nctemp1359= s;
nctempchar1* nctemp1362= tmp;
int nctemp1365=LibeStrcpy(nctemp1359,nctemp1362);
}
return tmp;
}
int LibeIsalhpa (int c)
{
int nctemp1374 = (c >= 'a');
int nctemp1379 = (c <= 'z');
int nctemp1371 = (nctemp1374 && nctemp1379);
int nctemp1387 = (c >= 'A');
int nctemp1392 = (c <= 'Z');
int nctemp1384 = (nctemp1387 && nctemp1392);
int nctemp1368 = (nctemp1371 || nctemp1384);
if(nctemp1368)
{
return 1;
}
else{
return 0;
}
}
int LibeIsdigit (int c)
{
int nctemp1401 = (c >= '0');
int nctemp1406 = (c <= '9');
int nctemp1398 = (nctemp1401 && nctemp1406);
if(nctemp1398)
{
return 1;
}
else{
return 0;
}
}
int LibeIsalnum (int c)
{
int nctemp1418 = (c >= 'a');
int nctemp1423 = (c <= 'z');
int nctemp1415 = (nctemp1418 && nctemp1423);
int nctemp1431 = (c >= 'A');
int nctemp1436 = (c <= 'Z');
int nctemp1428 = (nctemp1431 && nctemp1436);
int nctemp1412 = (nctemp1415 || nctemp1428);
if(nctemp1412)
{
return 1;
}
else{
int nctemp1444 = (c >= '0');
int nctemp1449 = (c <= '9');
int nctemp1441 = (nctemp1444 && nctemp1449);
if(nctemp1441)
{
return 1;
}
else{
return 0;
}
}
}
int LibeAtoi (nctempchar1 *s)
{
int sign;
int i;
int n;
i = 0;
int nctemp1464=i;
char nctemp1467=(char)(' ');
int nctemp1461 = (s->a[nctemp1464] ==nctemp1467);
int nctemp1474=i;
char nctemp1477=(char)(10);
int nctemp1471 = (s->a[nctemp1474] ==nctemp1477);
int nctemp1458 = (nctemp1461 || nctemp1471);
int nctemp1484=i;
char nctemp1487=(char)(9);
int nctemp1481 = (s->a[nctemp1484] ==nctemp1487);
int nctemp1455 = (nctemp1458 || nctemp1481);
int nctemp1490=nctemp1455;
while(nctemp1490)
{{
i = (i + 1);
}
int nctemp1500=i;
char nctemp1503=(char)(' ');
int nctemp1497 = (s->a[nctemp1500] ==nctemp1503);
int nctemp1510=i;
char nctemp1513=(char)(10);
int nctemp1507 = (s->a[nctemp1510] ==nctemp1513);
int nctemp1494 = (nctemp1497 || nctemp1507);
int nctemp1520=i;
char nctemp1523=(char)(9);
int nctemp1517 = (s->a[nctemp1520] ==nctemp1523);
int nctemp1491 = (nctemp1494 || nctemp1517);
nctemp1490=nctemp1491;}int nctemp1529=i;
char nctemp1532=(char)('-');
int nctemp1526 = (s->a[nctemp1529] ==nctemp1532);
if(nctemp1526)
{
sign =  -1;
i = (i + 1);
}
else{
int nctemp1538=i;
char nctemp1541=(char)('+');
int nctemp1535 = (s->a[nctemp1538] ==nctemp1541);
if(nctemp1535)
{
sign = 1;
i = (i + 1);
}
else{
sign = 1;
}
}
n =0;
int nctemp1554=i;
int nctemp1551=(int)(s->a[nctemp1554]);
int nctemp1549= nctemp1551;
int nctemp1556=LibeIsdigit(nctemp1549);
while(nctemp1556){
{
int nctemp1571 = 10 * n;
int nctemp1576=i;
int nctemp1573=(int)(s->a[nctemp1576]);
int nctemp1578 = nctemp1571 + nctemp1573;
int nctemp1580 = nctemp1578 - '0';
n =nctemp1580;
}
int nctemp1589 = i + 1;
i =nctemp1589;
int nctemp1596=i;
int nctemp1593=(int)(s->a[nctemp1596]);
int nctemp1591= nctemp1593;
int nctemp1598=LibeIsdigit(nctemp1591);
nctemp1556=nctemp1598;
}
int nctemp1603 = sign * n;
return nctemp1603;
}
int LibeItoa (int n,nctempchar1 *s)
{
int sign;
int i;
nctempchar1 *nctemp1605 =s;
int nctemp1604 =(nctemp1605==0);
if(nctemp1604)
{
return 0;
}
sign =n;
int nctemp1610 = (sign < 0);
if(nctemp1610)
{
n =  -n;
}
i = 0;
int nctemp1621=0;
int nctemp1629= n;
int nctemp1631= 10;
int nctemp1633=LibeMod(nctemp1629,nctemp1631);
int nctemp1635 = nctemp1633 + 48;
char nctemp1624=(char)(nctemp1635);
s->a[nctemp1621] =nctemp1624;
int nctemp1647 = n / 10;
n =nctemp1647;
int nctemp1636 = (n > 0);
int nctemp1649=nctemp1636;
while(nctemp1649)
{{
int nctemp1657 = i + 1;
int nctemp1662=s->d[0];int nctemp1667 = nctemp1662 - 1;
int nctemp1650 = (nctemp1657 > nctemp1667);
if(nctemp1650)
{
return 0;
}
int nctemp1681 = i + 1;
i =nctemp1681;
int nctemp1672=i;
int nctemp1688= n;
int nctemp1690= 10;
int nctemp1692=LibeMod(nctemp1688,nctemp1690);
int nctemp1694 = nctemp1692 + 48;
char nctemp1683=(char)(nctemp1694);
s->a[nctemp1672] =nctemp1683;
}
int nctemp1706 = n / 10;
n =nctemp1706;
int nctemp1695 = (n > 0);
nctemp1649=nctemp1695;}int nctemp1708 = (sign < 0);
if(nctemp1708)
{
int nctemp1719 = i + 1;
int nctemp1724=s->d[0];int nctemp1729 = nctemp1724 - 1;
int nctemp1712 = (nctemp1719 > nctemp1729);
if(nctemp1712)
{
return 0;
}
int nctemp1743 = i + 1;
i =nctemp1743;
int nctemp1734=i;
char nctemp1745=(char)(45);
s->a[nctemp1734] =nctemp1745;
}
int nctemp1755 = i + 1;
int nctemp1760=s->d[0];int nctemp1765 = nctemp1760 - 1;
int nctemp1748 = (nctemp1755 > nctemp1765);
if(nctemp1748)
{
return 0;
}
int nctemp1779 = i + 1;
i =nctemp1779;
int nctemp1770=i;
char nctemp1781=(char)(0);
s->a[nctemp1770] =nctemp1781;
nctempchar1* nctemp1785= s;
int nctemp1788=LibeStrev(nctemp1785);
return 1;
}
int LibeItoh (int n,nctempchar1 *s)
{
int i;
int sign;
sign =n;
int nctemp1790 = (sign < 0);
if(nctemp1790)
{
n =  -n;
}
i = 0;
int nctemp1801= n;
int nctemp1803= 16;
int nctemp1805=LibeMod(nctemp1801,nctemp1803);
int nctemp1798 = (nctemp1805 <= 9);
if(nctemp1798)
{
int nctemp1810=0;
int nctemp1818= n;
int nctemp1820= 16;
int nctemp1822=LibeMod(nctemp1818,nctemp1820);
int nctemp1824 = nctemp1822 + 48;
char nctemp1813=(char)(nctemp1824);
s->a[nctemp1810] =nctemp1813;
}
else{
int nctemp1828=0;
int nctemp1839= n;
int nctemp1841= 16;
int nctemp1843=LibeMod(nctemp1839,nctemp1841);
int nctemp1845 = nctemp1843 + 'a';
int nctemp1847 = nctemp1845 - 10;
char nctemp1831=(char)(nctemp1847);
s->a[nctemp1828] =nctemp1831;
}
int nctemp1859 = n / 16;
n =nctemp1859;
int nctemp1848 = (n > 0);
int nctemp1861=nctemp1848;
while(nctemp1861)
{{
int nctemp1865= n;
int nctemp1867= 16;
int nctemp1869=LibeMod(nctemp1865,nctemp1867);
int nctemp1862 = (nctemp1869 <= 9);
if(nctemp1862)
{
int nctemp1883 = i + 1;
i =nctemp1883;
int nctemp1874=i;
int nctemp1890= n;
int nctemp1892= 16;
int nctemp1894=LibeMod(nctemp1890,nctemp1892);
int nctemp1896 = nctemp1894 + 48;
char nctemp1885=(char)(nctemp1896);
s->a[nctemp1874] =nctemp1885;
}
else{
int nctemp1909 = i + 1;
i =nctemp1909;
int nctemp1900=i;
int nctemp1919= n;
int nctemp1921= 16;
int nctemp1923=LibeMod(nctemp1919,nctemp1921);
int nctemp1925 = nctemp1923 + 'a';
int nctemp1927 = nctemp1925 - 10;
char nctemp1911=(char)(nctemp1927);
s->a[nctemp1900] =nctemp1911;
}
}
int nctemp1939 = n / 16;
n =nctemp1939;
int nctemp1928 = (n > 0);
nctemp1861=nctemp1928;}int nctemp1941 = (sign < 0);
if(nctemp1941)
{
int nctemp1957 = i + 1;
i =nctemp1957;
int nctemp1948=i;
char nctemp1959=(char)(45);
s->a[nctemp1948] =nctemp1959;
}
int nctemp1974 = i + 1;
i =nctemp1974;
int nctemp1965=i;
char nctemp1976=(char)(0);
s->a[nctemp1965] =nctemp1976;
nctempchar1* nctemp1980= s;
int nctemp1983=LibeStrev(nctemp1980);
return 0;
}
float LibeAtof (nctempchar1 *s)
{
float val;
float power;
int exponent;
int sign;
int esign;
int i;
sign = 1;
val = 0.0;
power = 1.0;
exponent = 0;
esign = 1;
i = 0;
int nctemp1988=i;
char nctemp1991=(char)(' ');
int nctemp1985 = (s->a[nctemp1988] ==nctemp1991);
int nctemp1994=nctemp1985;
while(nctemp1994)
{{
i = (i + 1);
}
int nctemp1998=i;
char nctemp2001=(char)(' ');
int nctemp1995 = (s->a[nctemp1998] ==nctemp2001);
nctemp1994=nctemp1995;}int nctemp2010=i;
char nctemp2013=(char)('+');
int nctemp2007 = (s->a[nctemp2010] ==nctemp2013);
int nctemp2020=i;
char nctemp2023=(char)('-');
int nctemp2017 = (s->a[nctemp2020] ==nctemp2023);
int nctemp2004 = (nctemp2007 || nctemp2017);
if(nctemp2004)
{
int nctemp2029=i;
char nctemp2032=(char)('-');
int nctemp2026 = (s->a[nctemp2029] ==nctemp2032);
if(nctemp2026)
{
sign =  -1;
}
i = (i + 1);
}
int nctemp2041=i;
int nctemp2038=(int)(s->a[nctemp2041]);
int nctemp2036= nctemp2038;
int nctemp2043=LibeIsdigit(nctemp2036);
int nctemp2044=nctemp2043;
while(nctemp2044)
{{
float nctemp2056 = 10.0 * val;
int nctemp2066=i;
int nctemp2063=(int)(s->a[nctemp2066]);
int nctemp2069 = nctemp2063 - '0';
float nctemp2058=(float)(nctemp2069);
float nctemp2070 = nctemp2056 + nctemp2058;
val =nctemp2070;
i = (i + 1);
}
int nctemp2077=i;
int nctemp2074=(int)(s->a[nctemp2077]);
int nctemp2072= nctemp2074;
int nctemp2079=LibeIsdigit(nctemp2072);
nctemp2044=nctemp2079;}int nctemp2083=i;
char nctemp2086=(char)('.');
int nctemp2080 = (s->a[nctemp2083] ==nctemp2086);
if(nctemp2080)
{
i = (i + 1);
int nctemp2095=i;
int nctemp2092=(int)(s->a[nctemp2095]);
int nctemp2090= nctemp2092;
int nctemp2097=LibeIsdigit(nctemp2090);
int nctemp2098=nctemp2097;
while(nctemp2098)
{{
float nctemp2110 = 10.0 * val;
int nctemp2120=i;
int nctemp2117=(int)(s->a[nctemp2120]);
int nctemp2123 = nctemp2117 - '0';
float nctemp2112=(float)(nctemp2123);
float nctemp2124 = nctemp2110 + nctemp2112;
val =nctemp2124;
i = (i + 1);
power = (10.0 * power);
}
int nctemp2131=i;
int nctemp2128=(int)(s->a[nctemp2131]);
int nctemp2126= nctemp2128;
int nctemp2133=LibeIsdigit(nctemp2126);
nctemp2098=nctemp2133;}}
int nctemp2140=i;
char nctemp2143=(char)('e');
int nctemp2137 = (s->a[nctemp2140] ==nctemp2143);
int nctemp2150=i;
char nctemp2153=(char)('E');
int nctemp2147 = (s->a[nctemp2150] ==nctemp2153);
int nctemp2134 = (nctemp2137 || nctemp2147);
if(nctemp2134)
{
i = (i + 1);
int nctemp2162=i;
char nctemp2165=(char)('+');
int nctemp2159 = (s->a[nctemp2162] ==nctemp2165);
int nctemp2172=i;
char nctemp2175=(char)('-');
int nctemp2169 = (s->a[nctemp2172] ==nctemp2175);
int nctemp2156 = (nctemp2159 || nctemp2169);
if(nctemp2156)
{
int nctemp2181=i;
char nctemp2184=(char)('-');
int nctemp2178 = (s->a[nctemp2181] ==nctemp2184);
if(nctemp2178)
{
esign =  -1;
}
i = (i + 1);
}
int nctemp2193=i;
int nctemp2190=(int)(s->a[nctemp2193]);
int nctemp2188= nctemp2190;
int nctemp2195=LibeIsdigit(nctemp2188);
int nctemp2196=nctemp2195;
while(nctemp2196)
{{
int nctemp2211 = 10 * exponent;
int nctemp2216=i;
int nctemp2213=(int)(s->a[nctemp2216]);
int nctemp2218 = nctemp2211 + nctemp2213;
int nctemp2220 = nctemp2218 - '0';
exponent =nctemp2220;
i = (i + 1);
}
int nctemp2227=i;
int nctemp2224=(int)(s->a[nctemp2227]);
int nctemp2222= nctemp2224;
int nctemp2229=LibeIsdigit(nctemp2222);
nctemp2196=nctemp2229;}}
float nctemp2238=(float)(sign);
float nctemp2242 = nctemp2238 * val;
float nctemp2244=(float)(power);
float nctemp2247 = nctemp2242 / nctemp2244;
float nctemp2231= nctemp2247;
int nctemp2253 = esign * exponent;
int nctemp2248= nctemp2253;
float nctemp2254=LibeFscale(nctemp2231,nctemp2248);
return nctemp2254;
}
int LibeFtoaf (int mant,int nexp,int nfield,int nfrac,nctempchar1 *s)
{
nctempchar1 *t;
int sign;
int i;
int tp;
int l;
int nctemp2255 = (mant < 0);
if(nctemp2255)
{
sign =  -1;
mant =  -mant;
}
else{
sign = 1;
}
int nctemp2262=s->d[0];int nctemp2271 = nfield + 1;
int nctemp2259 = (nctemp2262 < nctemp2271);
if(nctemp2259)
{
return 0;
}
int nctemp2273 = (nfrac > 6);
if(nctemp2273)
{
nfrac = 6;
}
l = (((nexp + 1) + 1) + nfrac);
int nctemp2277 = (sign < 0);
if(nctemp2277)
{
l = (l + 1);
}
int nctemp2281 = (nfield < l);
if(nctemp2281)
{
for(i = 0;i < nfield;i = (i + 1)){
int nctemp2288=i;
char nctemp2291=(char)('*');
s->a[nctemp2288] =nctemp2291;
}
int nctemp2297=nfield;
char nctemp2300=(char)(0);
s->a[nctemp2297] =nctemp2300;
return 0;
}
else{
tp = (nfield - l);
}
int nctemp2315 = 6 + 1;
int nctemp2310=nctemp2315;
nctempchar1 *nctemp2309;
nctemp2309=(nctempchar1*)RunMalloc(sizeof(nctempchar1));
int nctemp2320 = 6 + 1;
nctemp2309->d[0]=nctemp2320;
nctemp2309->a=(char *)RunMalloc(sizeof(char)*nctemp2310);
t=nctemp2309;
int nctemp2322= mant;
nctempchar1* nctemp2324= t;
int nctemp2327=LibeItoa(nctemp2322,nctemp2324);
for(i = 0;i < tp;i = (i + 1)){
int nctemp2331=i;
char nctemp2334=(char)(' ');
s->a[nctemp2331] =nctemp2334;
}
int nctemp2337 = (nexp >= 0);
if(nctemp2337)
{
int nctemp2344= -1;
int nctemp2341 = (sign ==nctemp2344);
if(nctemp2341)
{
int nctemp2348=tp;
char nctemp2351=(char)('-');
s->a[nctemp2348] =nctemp2351;
tp = (tp + 1);
}
for(i = 0;i <= nexp;i = (i + 1)){
s->a[i + tp] = t->a[i];
}
int nctemp2354 = (nfrac > 0);
if(nctemp2354)
{
int nctemp2369 = tp + nexp;
int nctemp2371 = nctemp2369 + 1;
int nctemp2361=nctemp2371;
char nctemp2373=(char)('.');
s->a[nctemp2361] =nctemp2373;
}
for(i = 0;i < nfrac;i = (i + 1)){
int nctemp2376 = (mant ==0);
if(nctemp2376)
{
int nctemp2397 = tp + nexp;
int nctemp2399 = nctemp2397 + 1;
int nctemp2401 = nctemp2399 + 1;
int nctemp2403 = nctemp2401 + i;
int nctemp2383=nctemp2403;
char nctemp2405=(char)('0');
s->a[nctemp2383] =nctemp2405;
}
else{
s->a[(((tp + nexp) + 1) + 1) + i] = t->a[(nexp + 1) + i];
}
}
int nctemp2408 = (nfrac > 0);
if(nctemp2408)
{
int nctemp2429 = tp + nexp;
int nctemp2431 = nctemp2429 + 1;
int nctemp2433 = nctemp2431 + 1;
int nctemp2435 = nctemp2433 + nfrac;
int nctemp2415=nctemp2435;
char nctemp2437=(char)(0);
s->a[nctemp2415] =nctemp2437;
}
else{
int nctemp2451 = tp + nexp;
int nctemp2453 = nctemp2451 + 1;
int nctemp2443=nctemp2453;
char nctemp2455=(char)(0);
s->a[nctemp2443] =nctemp2455;
}
}
else{
nexp =  -nexp;
int nctemp2461= -1;
int nctemp2458 = (sign ==nctemp2461);
if(nctemp2458)
{
int nctemp2465=tp;
char nctemp2468=(char)('-');
s->a[nctemp2465] =nctemp2468;
tp = (tp + 1);
}
int nctemp2474=tp;
char nctemp2477=(char)('0');
s->a[nctemp2474] =nctemp2477;
int nctemp2488 = tp + 1;
int nctemp2483=nctemp2488;
char nctemp2490=(char)('.');
s->a[nctemp2483] =nctemp2490;
for(i = 0;i < (nexp - 1);i = (i + 1)){
int nctemp2504 = i + tp;
int nctemp2506 = nctemp2504 + 2;
int nctemp2496=nctemp2506;
char nctemp2508=(char)('0');
s->a[nctemp2496] =nctemp2508;
}
for(i = 0;i < ((nfrac - nexp) + 1);i = (i + 1)){
s->a[(((tp + 2) + i) + nexp) - 1] = t->a[i];
}
int nctemp2522 = tp + 2;
int nctemp2524 = nctemp2522 + nfrac;
int nctemp2514=nctemp2524;
char nctemp2526=(char)(0);
s->a[nctemp2514] =nctemp2526;
}
return 1;
}
int LibeFtoae (int mant,int nexp,int nfield,int nfrac,nctempchar1 *s)
{
int tp;
int sign;
int i;
int l;
nctempchar1 *t;
int nctemp2530 = (mant < 0);
if(nctemp2530)
{
mant =  -mant;
sign =  -1;
}
else{
sign = 1;
}
int nctemp2537=s->d[0];int nctemp2564 = 1 + 1;
int nctemp2566 = nctemp2564 + 1;
int nctemp2568 = nctemp2566 + nfrac;
int nctemp2570 = nctemp2568 + 1;
int nctemp2572 = nctemp2570 + 1;
int nctemp2574 = nctemp2572 + 2;
int nctemp2576 = nctemp2574 + 1;
int nctemp2534 = (nctemp2537 < nctemp2576);
if(nctemp2534)
{
return 0;
}
int nctemp2586=s->d[0];int nctemp2584=nctemp2586;
nctempchar1 *nctemp2583;
nctemp2583=(nctempchar1*)RunMalloc(sizeof(nctempchar1));
int nctemp2591=s->d[0];nctemp2583->d[0]=nctemp2591;
nctemp2583->a=(char *)RunMalloc(sizeof(char)*nctemp2584);
t=nctemp2583;
l = ((((((1 + 1) + nfrac) + 1) + 1) + 2) + 1);
int nctemp2595 = (sign < 0);
if(nctemp2595)
{
l = (l + 1);
}
int nctemp2599 = (nfield < l);
if(nctemp2599)
{
for(i = 0;i < nfield;i = (i + 1)){
int nctemp2606=i;
char nctemp2609=(char)('*');
s->a[nctemp2606] =nctemp2609;
}
int nctemp2615=nfield;
char nctemp2618=(char)(0);
s->a[nctemp2615] =nctemp2618;
return 0;
}
else{
tp = (nfield - l);
}
for(i = 0;i < tp;i = (i + 1)){
int nctemp2625=i;
char nctemp2628=(char)(' ');
s->a[nctemp2625] =nctemp2628;
}
int nctemp2632= mant;
nctempchar1* nctemp2634= t;
int nctemp2637=LibeItoa(nctemp2632,nctemp2634);
int nctemp2638 = (sign < 0);
if(nctemp2638)
{
int nctemp2645=tp;
char nctemp2648=(char)('-');
s->a[nctemp2645] =nctemp2648;
tp = (tp + 1);
}
s->a[tp] = t->a[0];
int nctemp2659 = tp + 1;
int nctemp2654=nctemp2659;
char nctemp2661=(char)('.');
s->a[nctemp2654] =nctemp2661;
for(i = 0;i < nfrac;i = (i + 1)){
s->a[(tp + 2) + i] = t->a[i + 1];
}
int nctemp2675 = tp + 2;
int nctemp2677 = nctemp2675 + nfrac;
int nctemp2667=nctemp2677;
char nctemp2679=(char)(0);
s->a[nctemp2667] =nctemp2679;
sign = 1;
int nctemp2682 = (nexp < 0);
if(nctemp2682)
{
sign =  -1;
nexp =  -nexp;
}
struct nctempchar1 *nctemp2689;
static struct nctempchar1 nctemp2690 = {{ 2}, (char*)"e\0"};
nctemp2689=&nctemp2690;
nctempchar1* nctemp2687= nctemp2689;
nctempchar1* nctemp2691= s;
int nctemp2694=LibeStrcat(nctemp2687,nctemp2691);
int nctemp2695 = (sign > 0);
if(nctemp2695)
{
struct nctempchar1 *nctemp2702;
static struct nctempchar1 nctemp2703 = {{ 2}, (char*)"+\0"};
nctemp2702=&nctemp2703;
nctempchar1* nctemp2700= nctemp2702;
nctempchar1* nctemp2704= s;
int nctemp2707=LibeStrcat(nctemp2700,nctemp2704);
}
else{
struct nctempchar1 *nctemp2711;
static struct nctempchar1 nctemp2712 = {{ 2}, (char*)"-\0"};
nctemp2711=&nctemp2712;
nctempchar1* nctemp2709= nctemp2711;
nctempchar1* nctemp2713= s;
int nctemp2716=LibeStrcat(nctemp2709,nctemp2713);
}
int nctemp2718= nexp;
nctempchar1* nctemp2720= t;
int nctemp2723=LibeItoa(nctemp2718,nctemp2720);
nctempchar1* nctemp2727= t;
int nctemp2730=LibeStrlen(nctemp2727);
int nctemp2724 = (nctemp2730 ==1);
if(nctemp2724)
{
struct nctempchar1 *nctemp2735;
static struct nctempchar1 nctemp2736 = {{ 2}, (char*)"0\0"};
nctemp2735=&nctemp2736;
nctempchar1* nctemp2733= nctemp2735;
nctempchar1* nctemp2737= s;
int nctemp2740=LibeStrcat(nctemp2733,nctemp2737);
}
nctempchar1* nctemp2742= t;
nctempchar1* nctemp2745= s;
int nctemp2748=LibeStrcat(nctemp2742,nctemp2745);
RunFree(t->a);
RunFree(t);
return 1;
}
int LibeFtoa (float f,nctempchar1 *fmt,nctempchar1 *s)
{
int nexp;
int mant;
int c;
int p;
int q;
int l;
int mode;
int ndigit;
int nfield;
int nfrac;
int nctemp2756=s->d[0];int nctemp2761=fmt->d[0];int nctemp2753 = (nctemp2756 < nctemp2761);
if(nctemp2753)
{
return 0;
}
int nctemp2773=fmt->d[0];int nctemp2778 = nctemp2773 - 2;
l =nctemp2778;
p = 0;
q = 0;
int nctemp2786=p;
int nctemp2783=(int)(fmt->a[nctemp2786]);
c =nctemp2783;
int nctemp2788 = (c =='g');
if(nctemp2788)
{
mode = 'g';
}
else{
int nctemp2795= c;
int nctemp2797=LibeIsdigit(nctemp2795);
int nctemp2792 = (nctemp2797 ==1);
if(nctemp2792)
{
int nctemp2802= c;
int nctemp2804=LibeIsdigit(nctemp2802);
int nctemp2799 = (nctemp2804 ==1);
int nctemp2806=nctemp2799;
while(nctemp2806)
{{
s->a[q] = fmt->a[p];
int nctemp2818 = p + 1;
p =nctemp2818;
int nctemp2807 = (p > l);
if(nctemp2807)
{
return 0;
}
q = (q + 1);
int nctemp2828=p;
int nctemp2825=(int)(fmt->a[nctemp2828]);
c =nctemp2825;
}
int nctemp2833= c;
int nctemp2835=LibeIsdigit(nctemp2833);
int nctemp2830 = (nctemp2835 ==1);
nctemp2806=nctemp2830;}int nctemp2840=q;
char nctemp2843=(char)(0);
s->a[nctemp2840] =nctemp2843;
nctempchar1* nctemp2850= s;
int nctemp2853=LibeAtoi(nctemp2850);
nfield =nctemp2853;
}
else{
return 0;
}
int nctemp2855 = (c !='.');
if(nctemp2855)
{
return 0;
}
int nctemp2871 = p + 1;
p =nctemp2871;
int nctemp2860 = (p > l);
if(nctemp2860)
{
return 0;
}
int nctemp2881=p;
int nctemp2878=(int)(fmt->a[nctemp2881]);
c =nctemp2878;
q = 0;
int nctemp2886= c;
int nctemp2888=LibeIsdigit(nctemp2886);
int nctemp2883 = (nctemp2888 ==1);
if(nctemp2883)
{
int nctemp2893= c;
int nctemp2895=LibeIsdigit(nctemp2893);
int nctemp2890 = (nctemp2895 ==1);
int nctemp2897=nctemp2890;
while(nctemp2897)
{{
s->a[q] = fmt->a[p];
int nctemp2909 = p + 1;
p =nctemp2909;
int nctemp2898 = (p > l);
if(nctemp2898)
{
return 0;
}
q = (q + 1);
int nctemp2919=p;
int nctemp2916=(int)(fmt->a[nctemp2919]);
c =nctemp2916;
}
int nctemp2924= c;
int nctemp2926=LibeIsdigit(nctemp2924);
int nctemp2921 = (nctemp2926 ==1);
nctemp2897=nctemp2921;}int nctemp2931=q;
char nctemp2934=(char)(0);
s->a[nctemp2931] =nctemp2934;
nctempchar1* nctemp2941= s;
int nctemp2944=LibeAtoi(nctemp2941);
nfrac =nctemp2944;
}
else{
return 0;
}
int nctemp2946 = (c =='f');
if(nctemp2946)
{
mode = 'f';
}
else{
int nctemp2950 = (c =='e');
if(nctemp2950)
{
mode = 'e';
}
else{
return 0;
}
}
}
int nctemp2955 = (mode =='g');
if(nctemp2955)
{
float nctemp2963= f;
int nctemp2965=LibeGetmaxdig(nctemp2963);
nfrac =nctemp2965;
nfield = (((((((1 + 1) + 1) + 1) + nfrac) + 1) + 1) + 2);
ndigit = (nfrac + 1);
float nctemp2970= f;
int nctemp2972= ndigit;
int nctemp2974=LibeGetfman(nctemp2970,nctemp2972);
mant =nctemp2974;
float nctemp2979= f;
int nctemp2981=LibeGetfexp(nctemp2979);
nexp =nctemp2981;
int nctemp2983= mant;
int nctemp2985= nexp;
int nctemp2987= nfield;
int nctemp2989= nfrac;
nctempchar1* nctemp2991= s;
int nctemp2994=LibeFtoae(nctemp2983,nctemp2985,nctemp2987,nctemp2989,nctemp2991);
}
else{
int nctemp2995 = (mode =='e');
if(nctemp2995)
{
ndigit = (nfrac + 1);
float nctemp3003= f;
int nctemp3005= ndigit;
int nctemp3007=LibeGetfman(nctemp3003,nctemp3005);
mant =nctemp3007;
float nctemp3012= f;
int nctemp3014=LibeGetfexp(nctemp3012);
nexp =nctemp3014;
int nctemp3016= mant;
int nctemp3018= nexp;
int nctemp3020= nfield;
int nctemp3022= nfrac;
nctempchar1* nctemp3024= s;
int nctemp3027=LibeFtoae(nctemp3016,nctemp3018,nctemp3020,nctemp3022,nctemp3024);
}
else{
int nctemp3028 = (mode =='f');
if(nctemp3028)
{
float nctemp3036= f;
int nctemp3038=LibeGetfexp(nctemp3036);
nexp =nctemp3038;
ndigit = ((nexp + nfrac) + 1);
float nctemp3043= f;
int nctemp3045= ndigit;
int nctemp3047=LibeGetfman(nctemp3043,nctemp3045);
mant =nctemp3047;
int nctemp3049= mant;
int nctemp3051= nexp;
int nctemp3053= nfield;
int nctemp3055= nfrac;
nctempchar1* nctemp3057= s;
int nctemp3060=LibeFtoaf(nctemp3049,nctemp3051,nctemp3053,nctemp3055,nctemp3057);
}
}
}
return 1;
}
struct LibeFdescr {int cnt;
int ptr;
int bufsize;
nctempchar1 *base;
int readflg;
int writflg;
int unbflg;
int errflg;
int eoflg;
int fd;
};
typedef struct nctempLibeFdescr1 {int d[1]; struct LibeFdescr *a; } nctempLibeFdescr1;
struct nctempLibeFdescr2 {int d[2]; struct LibeFdescr *a; } ;
struct nctempLibeFdescr3 {int d[3]; struct LibeFdescr *a; } ;
struct nctempLibeFdescr4 {int d[4]; struct LibeFdescr *a; } ;
static struct nctempLibeFdescr1 *LibeFarr;
static nctempchar1 *LibeTmpstr;
int LibeIoinit ()
{
int i;
int nctemp3068=40;
struct nctempLibeFdescr1 *nctemp3067;
nctemp3067=(struct nctempLibeFdescr1*)RunMalloc(sizeof(struct nctempLibeFdescr1));
nctemp3067->d[0]=40;
nctemp3067->a=(struct LibeFdescr*)RunMalloc(sizeof(struct LibeFdescr)*nctemp3068);
LibeFarr=nctemp3067;
nctempLibeFdescr1 *nctemp3072 =LibeFarr;
int nctemp3071 =(nctemp3072==0);
if(nctemp3071)
{
LibeErrno = (-100);
return 0;
}
for(i = 0;i < 40;i = (i + 1)){
LibeFarr->a[i].cnt = 0;
LibeFarr->a[i].ptr = 0;
LibeFarr->a[i].bufsize = 0;
LibeFarr->a[i].base  = 0;
LibeFarr->a[i].readflg = 0;
LibeFarr->a[i].writflg = 0;
LibeFarr->a[i].unbflg = 0;
LibeFarr->a[i].errflg = 1;
LibeFarr->a[i].eoflg = 0;
LibeFarr->a[i].fd = 0;
}
LibeFarr->a[0].fd =  -1;
LibeFarr->a[0].readflg = 1;
LibeFarr->a[1].fd =  -1;
LibeFarr->a[1].readflg = 1;
LibeFarr->a[2].fd = 0;
LibeFarr->a[2].readflg = 1;
LibeFarr->a[3].fd = 1;
LibeFarr->a[3].writflg = 1;
LibeFarr->a[4].fd = 2;
LibeFarr->a[4].writflg = 1;
int nctemp3083=64;
nctempchar1 *nctemp3082;
nctemp3082=(nctempchar1*)RunMalloc(sizeof(nctempchar1));
nctemp3082->d[0]=64;
nctemp3082->a=(char *)RunMalloc(sizeof(char)*nctemp3083);
LibeTmpstr=nctemp3082;
nctempchar1 *nctemp3087 =LibeTmpstr;
int nctemp3086 =(nctemp3087==0);
if(nctemp3086)
{
LibeErrno = (-100);
return 0;
}
return 1;
}
int LibeFlushbuff (int fp)
{
int st;
int size;
int nctemp3096=fp;
int nctemp3093 = (LibeFarr->a[nctemp3096].writflg !=1);
if(nctemp3093)
{
struct nctempchar1 *nctemp3104;
static struct nctempchar1 nctemp3105 = {{ 28}, (char*)"file not open for writing\n\0"};
nctemp3104=&nctemp3105;
LibeErrstr=nctemp3104;
LibeErrno = (-110);
return 0;
}
int nctemp3110=fp;
int nctemp3107 = (LibeFarr->a[nctemp3110].unbflg ==1);
if(nctemp3107)
{
LibeFarr->a[fp].bufsize = 1;
}
else{
LibeFarr->a[fp].bufsize = 1024;
}
int nctemp3116=fp;
nctempchar1 *nctemp3114 =LibeFarr->a[nctemp3116].base;
int nctemp3113 =(nctemp3114==0);
if(nctemp3113)
{
size = LibeFarr->a[fp].bufsize;
int nctemp3126=fp;
int nctemp3131=size;
nctempchar1 *nctemp3130;
nctemp3130=(nctempchar1*)RunMalloc(sizeof(nctempchar1));
nctemp3130->d[0]=size;
nctemp3130->a=(char *)RunMalloc(sizeof(char)*nctemp3131);
LibeFarr->a[nctemp3126].base=nctemp3130;
nctempchar1 *nctemp3121 =LibeFarr->a[nctemp3126].base;
int nctemp3120 =(nctemp3121==0);
if(nctemp3120)
{
struct nctempchar1 *nctemp3140;
static struct nctempchar1 nctemp3141 = {{ 24}, (char*)"can not allocate buffer\0"};
nctemp3140=&nctemp3141;
LibeErrstr=nctemp3140;
LibeErrno = (-113);
return 0;
}
}
LibeFarr->a[fp].ptr = 0;
int nctemp3149=fp;
int nctemp3147= LibeFarr->a[nctemp3149].fd;
int nctemp3153=fp;
int nctemp3151= LibeFarr->a[nctemp3153].cnt;
int nctemp3157=fp;
nctempchar1* nctemp3155= LibeFarr->a[nctemp3157].base;
int nctemp3160=RunWrite(nctemp3147,nctemp3151,nctemp3155);
st =nctemp3160;
int nctemp3165=fp;
int nctemp3161 = (st !=LibeFarr->a[nctemp3165].cnt);
if(nctemp3161)
{
LibeFarr->a[fp].errflg = 1;
struct nctempchar1 *nctemp3172;
static struct nctempchar1 nctemp3173 = {{ 12}, (char*)"write error\0"};
nctemp3172=&nctemp3173;
LibeErrstr=nctemp3172;
LibeErrno = (-112);
LibeFarr->a[fp].cnt = 0;
LibeFarr->a[fp].ptr = 0;
return 0;
}
else{
LibeFarr->a[fp].cnt = 0;
LibeFarr->a[fp].ptr = 0;
return 1;
}
}
int LibeFillbuff (int fp)
{
int size;
int rval;
int nctemp3179=fp;
int nctemp3176 = (LibeFarr->a[nctemp3179].readflg !=1);
if(nctemp3176)
{
struct nctempchar1 *nctemp3187;
static struct nctempchar1 nctemp3188 = {{ 28}, (char*)"file not open for reading\n\0"};
nctemp3187=&nctemp3188;
LibeErrstr=nctemp3187;
LibeErrno = (-110);
return (-1);
}
int nctemp3193=fp;
int nctemp3190 = (LibeFarr->a[nctemp3193].unbflg ==1);
if(nctemp3190)
{
LibeFarr->a[fp].bufsize = 1;
}
else{
LibeFarr->a[fp].bufsize = 1024;
}
int nctemp3199=fp;
nctempchar1 *nctemp3197 =LibeFarr->a[nctemp3199].base;
int nctemp3196 =(nctemp3197==0);
if(nctemp3196)
{
size = LibeFarr->a[fp].bufsize;
int nctemp3209=fp;
int nctemp3214=size;
nctempchar1 *nctemp3213;
nctemp3213=(nctempchar1*)RunMalloc(sizeof(nctempchar1));
nctemp3213->d[0]=size;
nctemp3213->a=(char *)RunMalloc(sizeof(char)*nctemp3214);
LibeFarr->a[nctemp3209].base=nctemp3213;
nctempchar1 *nctemp3204 =LibeFarr->a[nctemp3209].base;
int nctemp3203 =(nctemp3204==0);
if(nctemp3203)
{
struct nctempchar1 *nctemp3223;
static struct nctempchar1 nctemp3224 = {{ 24}, (char*)"Can not allocate buffer\0"};
nctemp3223=&nctemp3224;
LibeErrstr=nctemp3223;
LibeErrno = (-113);
return (-1);
}
}
LibeFarr->a[fp].ptr = 0;
int nctemp3229=fp;
int nctemp3234=fp;
int nctemp3232= LibeFarr->a[nctemp3234].fd;
int nctemp3238=fp;
int nctemp3236= LibeFarr->a[nctemp3238].bufsize;
int nctemp3242=fp;
nctempchar1* nctemp3240= LibeFarr->a[nctemp3242].base;
int nctemp3245=RunRead(nctemp3232,nctemp3236,nctemp3240);
LibeFarr->a[nctemp3229].cnt =nctemp3245;
int nctemp3249=fp;
int nctemp3246 = (LibeFarr->a[nctemp3249].cnt <= 0);
if(nctemp3246)
{
int nctemp3255=fp;
int nctemp3252 = (LibeFarr->a[nctemp3255].cnt ==(-1));
if(nctemp3252)
{
LibeFarr->a[fp].eoflg = 1;
rval = (-1);
}
else{
LibeFarr->a[fp].errflg = 1;
struct nctempchar1 *nctemp3263;
static struct nctempchar1 nctemp3264 = {{ 11}, (char*)"read error\0"};
nctemp3263=&nctemp3264;
LibeErrstr=nctemp3263;
LibeErrno = (-111);
rval = (-1);
}
LibeFarr->a[fp].cnt = 0;
return rval;
}
LibeFarr->a[fp].ptr = (LibeFarr->a[fp].ptr + 1);
LibeFarr->a[fp].cnt = (LibeFarr->a[fp].cnt - 1);
int nctemp3270=fp;
int nctemp3276=fp;
int nctemp3279 = LibeFarr->a[nctemp3276].ptr - 1;
int nctemp3272=nctemp3279;
int nctemp3267=(int)(LibeFarr->a[nctemp3270].base->a[nctemp3272]);
return nctemp3267;
}
int LibeFlush (int fp)
{
int nctemp3281= fp;
int nctemp3283=LibeFlushbuff(nctemp3281);
return nctemp3283;
}
int LibeOpen (nctempchar1 *name,nctempchar1 *mode)
{
int fd;
int slot;
int i;
int nctemp3287=0;
char nctemp3290=(char)('r');
int nctemp3284 = (mode->a[nctemp3287] !=nctemp3290);
if(nctemp3284)
{
int nctemp3296=0;
char nctemp3299=(char)('w');
int nctemp3293 = (mode->a[nctemp3296] !=nctemp3299);
if(nctemp3293)
{
int nctemp3305=0;
char nctemp3308=(char)('a');
int nctemp3302 = (mode->a[nctemp3305] !=nctemp3308);
if(nctemp3302)
{
struct nctempchar1 *nctemp3316;
static struct nctempchar1 nctemp3317 = {{ 20}, (char*)"Unknown file mode\n\0"};
nctemp3316=&nctemp3317;
LibeErrstr=nctemp3316;
LibeErrno = (-103);
return 0;
}
}
}
i = 0;
slot =  -1;
int nctemp3322 = (slot < 0);
int nctemp3327 = (i < 40);
int nctemp3319 = (nctemp3322 && nctemp3327);
int nctemp3331=nctemp3319;
while(nctemp3331)
{{
int nctemp3338=i;
int nctemp3335 = (LibeFarr->a[nctemp3338].readflg ==0);
int nctemp3345=i;
int nctemp3342 = (LibeFarr->a[nctemp3345].writflg ==0);
int nctemp3332 = (nctemp3335 && nctemp3342);
if(nctemp3332)
{
slot = i;
}
i = (i + 1);
}
int nctemp3351 = (slot < 0);
int nctemp3356 = (i < 40);
int nctemp3348 = (nctemp3351 && nctemp3356);
nctemp3331=nctemp3348;}int nctemp3360 = (slot < 0);
if(nctemp3360)
{
struct nctempchar1 *nctemp3369;
static struct nctempchar1 nctemp3370 = {{ 22}, (char*)"Too many open files\n\0"};
nctemp3369=&nctemp3370;
LibeErrstr=nctemp3369;
LibeErrno = (-104);
return 0;
}
int nctemp3378=0;
int nctemp3375=(int)(mode->a[nctemp3378]);
int nctemp3372 = (nctemp3375 =='w');
if(nctemp3372)
{
nctempchar1* nctemp3385= name;
int nctemp3388=RunCreate(nctemp3385);
fd =nctemp3388;
}
else{
int nctemp3395=0;
int nctemp3392=(int)(mode->a[nctemp3395]);
int nctemp3389 = (nctemp3392 =='a');
if(nctemp3389)
{
nctempchar1* nctemp3405= name;
nctempchar1* nctemp3408= mode;
int nctemp3411=RunOpen(nctemp3405,nctemp3408);
fd =nctemp3411;
int nctemp3398 = (fd ==0);
if(nctemp3398)
{
nctempchar1* nctemp3417= name;
int nctemp3420=RunCreate(nctemp3417);
fd =nctemp3420;
}
else{
nctempchar1* nctemp3425= name;
nctempchar1* nctemp3428= mode;
int nctemp3431=RunOpen(nctemp3425,nctemp3428);
fd =nctemp3431;
}
}
else{
int nctemp3438=0;
int nctemp3435=(int)(mode->a[nctemp3438]);
int nctemp3432 = (nctemp3435 =='r');
if(nctemp3432)
{
nctempchar1* nctemp3445= name;
nctempchar1* nctemp3448= mode;
int nctemp3451=RunOpen(nctemp3445,nctemp3448);
fd =nctemp3451;
}
else{
struct nctempchar1 *nctemp3457;
static struct nctempchar1 nctemp3458 = {{ 20}, (char*)"Unknown file mode\n\0"};
nctemp3457=&nctemp3458;
LibeErrstr=nctemp3457;
LibeErrno = (-103);
return 0;
}
}
}
int nctemp3460 = (fd ==0);
if(nctemp3460)
{
struct nctempchar1 *nctemp3469;
static struct nctempchar1 nctemp3470 = {{ 20}, (char*)"Could not open file\0"};
nctemp3469=&nctemp3470;
LibeErrstr=nctemp3469;
LibeErrno = (-105);
return 0;
}
LibeFarr->a[slot].fd = fd;
LibeFarr->a[slot].cnt = 0;
LibeFarr->a[slot].base  = 0;
int nctemp3478=0;
int nctemp3475=(int)(mode->a[nctemp3478]);
int nctemp3472 = (nctemp3475 =='r');
if(nctemp3472)
{
LibeFarr->a[slot].readflg = 1;
}
else{
LibeFarr->a[slot].writflg = 1;
}
return slot;
}
int LibeClose (int fp)
{
int fd;
int stat;
int nctemp3485=fp;
nctempchar1 *nctemp3483 =LibeFarr->a[nctemp3485].base;
int nctemp3482 =(nctemp3483!=0);
if(nctemp3482)
{
int nctemp3490= fp;
int nctemp3492=LibeFlush(nctemp3490);
}
fd = LibeFarr->a[fp].fd;
int nctemp3497= fd;
int nctemp3499=RunClose(nctemp3497);
stat =nctemp3499;
int nctemp3500 = (stat ==0);
if(nctemp3500)
{
LibeFarr->a[fp].errflg = 1;
struct nctempchar1 *nctemp3509;
static struct nctempchar1 nctemp3510 = {{ 21}, (char*)"Could not close file\0"};
nctemp3509=&nctemp3510;
LibeErrstr=nctemp3509;
LibeErrno = (-106);
return 0;
}
LibeFarr->a[fp].cnt = 0;
LibeFarr->a[fp].ptr = 0;
LibeFarr->a[fp].bufsize = 0;
int nctemp3515=fp;
nctempchar1 *nctemp3513 =LibeFarr->a[nctemp3515].base;
int nctemp3512 =(nctemp3513!=0);
if(nctemp3512)
{
int nctemp3521=fp;
RunFree(LibeFarr->a[nctemp3521].base->a);
RunFree(LibeFarr->a[nctemp3521].base);
}
LibeFarr->a[fp].base  = 0;
LibeFarr->a[fp].readflg = 0;
LibeFarr->a[fp].writflg = 0;
LibeFarr->a[fp].unbflg = 0;
LibeFarr->a[fp].errflg = 0;
LibeFarr->a[fp].eoflg = 0;
LibeFarr->a[fp].fd = 0;
return 1;
}
int LibeGetc (int fp)
{
int nctemp3528=fp;
int nctemp3525 = (LibeFarr->a[nctemp3528].cnt ==0);
if(nctemp3525)
{
int nctemp3532= fp;
int nctemp3534=LibeFillbuff(nctemp3532);
return nctemp3534;
}
else{
LibeFarr->a[fp].cnt = (LibeFarr->a[fp].cnt - 1);
LibeFarr->a[fp].ptr = (LibeFarr->a[fp].ptr + 1);
int nctemp3539=fp;
int nctemp3545=fp;
int nctemp3548 = LibeFarr->a[nctemp3545].ptr - 1;
int nctemp3541=nctemp3548;
int nctemp3536=(int)(LibeFarr->a[nctemp3539].base->a[nctemp3541]);
return nctemp3536;
}
}
int LibeUngetc (int fp)
{
int nctemp3552=fp;
int nctemp3549 = (LibeFarr->a[nctemp3552].eoflg ==1);
if(nctemp3549)
{
return (-1);
}
int nctemp3559=fp;
int nctemp3562=fp;
int nctemp3556 = (LibeFarr->a[nctemp3559].cnt < LibeFarr->a[nctemp3562].bufsize);
if(nctemp3556)
{
LibeFarr->a[fp].cnt = (LibeFarr->a[fp].cnt + 1);
LibeFarr->a[fp].ptr = (LibeFarr->a[fp].ptr - 1);
int nctemp3567=fp;
int nctemp3573=fp;
int nctemp3576 = LibeFarr->a[nctemp3573].bufsize - 1;
int nctemp3564 = (LibeFarr->a[nctemp3567].ptr ==nctemp3576);
if(nctemp3564)
{
int nctemp3581=fp;
int nctemp3585=fp;
int nctemp3583=LibeFarr->a[nctemp3585].ptr;
int nctemp3578=(int)(LibeFarr->a[nctemp3581].base->a[nctemp3583]);
return nctemp3578;
}
else{
int nctemp3591=fp;
int nctemp3597=fp;
int nctemp3600 = LibeFarr->a[nctemp3597].ptr + 1;
int nctemp3593=nctemp3600;
int nctemp3588=(int)(LibeFarr->a[nctemp3591].base->a[nctemp3593]);
return nctemp3588;
}
}
else{
struct nctempchar1 *nctemp3606;
static struct nctempchar1 nctemp3607 = {{ 15}, (char*)"Pushback error\0"};
nctemp3606=&nctemp3607;
LibeErrstr=nctemp3606;
LibeErrno = (-107);
return (-1);
}
}
int LibeGetw (int fp,nctempchar1 *text)
{
int p;
int ch;
int lim;
int nctemp3613=text->d[0];lim =nctemp3613;
p = 0;
int nctemp3618=LibeClearerr();
int nctemp3632= fp;
int nctemp3634=LibeGetc(nctemp3632);
ch =nctemp3634;
int nctemp3625 = (ch ==32);
int nctemp3637 = (ch ==9);
int nctemp3622 = (nctemp3625 || nctemp3637);
int nctemp3642 = (ch ==10);
int nctemp3619 = (nctemp3622 || nctemp3642);
int nctemp3646=nctemp3619;
while(nctemp3646)
{{
p = 0;
}
int nctemp3660= fp;
int nctemp3662=LibeGetc(nctemp3660);
ch =nctemp3662;
int nctemp3653 = (ch ==32);
int nctemp3665 = (ch ==9);
int nctemp3650 = (nctemp3653 || nctemp3665);
int nctemp3670 = (ch ==10);
int nctemp3647 = (nctemp3650 || nctemp3670);
nctemp3646=nctemp3647;}int nctemp3675= fp;
int nctemp3677=LibeUngetc(nctemp3675);
int nctemp3688= fp;
int nctemp3690=LibeGetc(nctemp3688);
ch =nctemp3690;
int nctemp3681 = (ch !=(-1));
int nctemp3693 = (p < lim);
int nctemp3678 = (nctemp3681 && nctemp3693);
int nctemp3697=nctemp3678;
while(nctemp3697)
{{
int nctemp3704 = (ch ==32);
int nctemp3709 = (ch ==9);
int nctemp3701 = (nctemp3704 || nctemp3709);
int nctemp3714 = (ch ==10);
int nctemp3698 = (nctemp3701 || nctemp3714);
if(nctemp3698)
{
int nctemp3719= fp;
int nctemp3721=LibeUngetc(nctemp3719);
int nctemp3725=p;
char nctemp3728=(char)(0);
text->a[nctemp3725] =nctemp3728;
return 1;
}
else{
int nctemp3735=p;
char nctemp3738=(char)(ch);
text->a[nctemp3735] =nctemp3738;
p = (p + 1);
}
}
int nctemp3751= fp;
int nctemp3753=LibeGetc(nctemp3751);
ch =nctemp3753;
int nctemp3744 = (ch !=(-1));
int nctemp3756 = (p < lim);
int nctemp3741 = (nctemp3744 && nctemp3756);
nctemp3697=nctemp3741;}int nctemp3760 = (p >= lim);
if(nctemp3760)
{
return 0;
}
else{
int nctemp3765 = (ch ==(-1));
if(nctemp3765)
{
return (-1);
}
else{
return 1;
}
}
}
int LibePutc (int fp,int c)
{
int rval;
int nctemp3774=fp;
int nctemp3771 = (LibeFarr->a[nctemp3774].cnt ==0);
if(nctemp3771)
{
int nctemp3778= fp;
int nctemp3780=LibeFlushbuff(nctemp3778);
}
int nctemp3784=fp;
int nctemp3787=fp;
int nctemp3781 = (LibeFarr->a[nctemp3784].cnt ==LibeFarr->a[nctemp3787].bufsize);
if(nctemp3781)
{
int nctemp3793= fp;
int nctemp3795=LibeFlushbuff(nctemp3793);
rval =nctemp3795;
int nctemp3799=fp;
int nctemp3803=fp;
int nctemp3801=LibeFarr->a[nctemp3803].ptr;
char nctemp3806=(char)(c);
LibeFarr->a[nctemp3799].base->a[nctemp3801] =nctemp3806;
LibeFarr->a[fp].ptr = (LibeFarr->a[fp].ptr + 1);
LibeFarr->a[fp].cnt = (LibeFarr->a[fp].cnt + 1);
return rval;
}
else{
int nctemp3813=fp;
int nctemp3817=fp;
int nctemp3815=LibeFarr->a[nctemp3817].ptr;
char nctemp3820=(char)(c);
LibeFarr->a[nctemp3813].base->a[nctemp3815] =nctemp3820;
LibeFarr->a[fp].cnt = (LibeFarr->a[fp].cnt + 1);
LibeFarr->a[fp].ptr = (LibeFarr->a[fp].ptr + 1);
return 1;
}
}
int LibePuts (int fp,nctempchar1 *s)
{
int ls;
int i;
int nctemp3828=s->d[0];ls =nctemp3828;
i = 0;
int nctemp3841=i;
int nctemp3838=(int)(s->a[nctemp3841]);
int nctemp3835 = (nctemp3838 !=0);
int nctemp3845 = (i < ls);
int nctemp3832 = (nctemp3835 && nctemp3845);
int nctemp3849=nctemp3832;
while(nctemp3849)
{{
int nctemp3853= fp;
int nctemp3860=i;
int nctemp3857=(int)(s->a[nctemp3860]);
int nctemp3855= nctemp3857;
int nctemp3862=LibePutc(nctemp3853,nctemp3855);
int nctemp3850 = (nctemp3862 ==0);
if(nctemp3850)
{
struct nctempchar1 *nctemp3869;
static struct nctempchar1 nctemp3870 = {{ 12}, (char*)"write error\0"};
nctemp3869=&nctemp3870;
LibeErrstr=nctemp3869;
LibeErrno = 0;
return 0;
}
else{
i = (i + 1);
}
}
int nctemp3881=i;
int nctemp3878=(int)(s->a[nctemp3881]);
int nctemp3875 = (nctemp3878 !=0);
int nctemp3885 = (i < ls);
int nctemp3872 = (nctemp3875 && nctemp3885);
nctemp3849=nctemp3872;}int nctemp3890= fp;
int nctemp3892=LibeFlushbuff(nctemp3890);
return 1;
}
int LibePuti (int fp,int ival)
{
int nctemp3895= ival;
nctempchar1* nctemp3897= LibeTmpstr;
int nctemp3900=LibeItoa(nctemp3895,nctemp3897);
int nctemp3902= fp;
nctempchar1* nctemp3904= LibeTmpstr;
int nctemp3907=LibePuts(nctemp3902,nctemp3904);
return nctemp3907;
}
int LibePutf (int fp,float fval,nctempchar1 *form)
{
float nctemp3909= fval;
nctempchar1* nctemp3911= form;
nctempchar1* nctemp3914= LibeTmpstr;
int nctemp3917=LibeFtoa(nctemp3909,nctemp3911,nctemp3914);
int nctemp3919= fp;
nctempchar1* nctemp3921= LibeTmpstr;
int nctemp3924=LibePuts(nctemp3919,nctemp3921);
return nctemp3924;
}
int LibePs (nctempchar1 *s)
{
int nctemp3926= 3;
nctempchar1* nctemp3928= s;
int nctemp3931=LibePuts(nctemp3926,nctemp3928);
return 1;
}
int LibePi (int n)
{
int nctemp3934= 3;
int nctemp3936= n;
int nctemp3938=LibePuti(nctemp3934,nctemp3936);
return 1;
}
int LibePf (float r)
{
int nctemp3941= 3;
float nctemp3943= r;
struct nctempchar1 *nctemp3947;
static struct nctempchar1 nctemp3948 = {{ 2}, (char*)"g\0"};
nctemp3947=&nctemp3948;
nctempchar1* nctemp3945= nctemp3947;
int nctemp3949=LibePutf(nctemp3941,nctemp3943,nctemp3945);
return 1;
}
int LibeRead (int fp,int n,nctempchar1 *buffer)
{
int rval;
int nctemp3954=fp;
int nctemp3951 = (LibeFarr->a[nctemp3954].readflg !=1);
if(nctemp3951)
{
struct nctempchar1 *nctemp3962;
static struct nctempchar1 nctemp3963 = {{ 26}, (char*)"File not open for reading\0"};
nctemp3962=&nctemp3963;
LibeErrstr=nctemp3962;
LibeErrno = (-109);
return (-1);
}
int nctemp3969=buffer->d[0];int nctemp3965 = (n > nctemp3969);
if(nctemp3965)
{
LibeErrno = (-108);
struct nctempchar1 *nctemp3978;
static struct nctempchar1 nctemp3979 = {{ 30}, (char*)"The buffer array is too small\0"};
nctemp3978=&nctemp3979;
LibeErrstr=nctemp3978;
return 0;
}
int nctemp3987=fp;
int nctemp3985= LibeFarr->a[nctemp3987].fd;
int nctemp3989= n;
nctempchar1* nctemp3991= buffer;
int nctemp3994=RunRead(nctemp3985,nctemp3989,nctemp3991);
rval =nctemp3994;
int nctemp3995 = (rval ==(-1));
if(nctemp3995)
{
LibeFarr->a[fp].eoflg = 1;
rval = (-1);
}
else{
int nctemp3999 = (rval ==0);
if(nctemp3999)
{
LibeFarr->a[fp].errflg = 1;
struct nctempchar1 *nctemp4008;
static struct nctempchar1 nctemp4009 = {{ 11}, (char*)"read error\0"};
nctemp4008=&nctemp4009;
LibeErrstr=nctemp4008;
LibeErrno = 0;
LibeFarr->a[fp].errflg = 0;
rval = 0;
}
}
return rval;
}
int LibeWrite (int fp,int n,nctempchar1 *buffer)
{
int rval;
int nctemp4015=buffer->d[0];int nctemp4011 = (n > nctemp4015);
if(nctemp4011)
{
LibeErrno = (-108);
struct nctempchar1 *nctemp4024;
static struct nctempchar1 nctemp4025 = {{ 30}, (char*)"The buffer array is too small\0"};
nctemp4024=&nctemp4025;
LibeErrstr=nctemp4024;
return 0;
}
int nctemp4030=fp;
int nctemp4027 = (LibeFarr->a[nctemp4030].writflg !=1);
if(nctemp4027)
{
struct nctempchar1 *nctemp4038;
static struct nctempchar1 nctemp4039 = {{ 26}, (char*)"file not open for writing\0"};
nctemp4038=&nctemp4039;
LibeErrstr=nctemp4038;
LibeErrno = (-110);
return 0;
}
int nctemp4047=fp;
int nctemp4045= LibeFarr->a[nctemp4047].fd;
int nctemp4049= n;
nctempchar1* nctemp4051= buffer;
int nctemp4054=RunWrite(nctemp4045,nctemp4049,nctemp4051);
rval =nctemp4054;
int nctemp4055 = (rval ==0);
if(nctemp4055)
{
LibeFarr->a[fp].errflg = 1;
struct nctempchar1 *nctemp4064;
static struct nctempchar1 nctemp4065 = {{ 12}, (char*)"write error\0"};
nctemp4064=&nctemp4065;
LibeErrstr=nctemp4064;
LibeErrno = 0;
LibeFarr->a[fp].errflg = 0;
rval = 0;
}
return rval;
}
int LibeSeek (int fp,int pos,int flag)
{
int rval;
int nctemp4073=fp;
int nctemp4071= LibeFarr->a[nctemp4073].fd;
int nctemp4075= pos;
int nctemp4077= flag;
int nctemp4079=RunSeek(nctemp4071,nctemp4075,nctemp4077);
rval =nctemp4079;
int nctemp4080 = (rval ==0);
if(nctemp4080)
{
LibeFarr->a[fp].errflg = 1;
struct nctempchar1 *nctemp4089;
static struct nctempchar1 nctemp4090 = {{ 11}, (char*)"Seek error\0"};
nctemp4089=&nctemp4090;
LibeErrstr=nctemp4089;
LibeErrno = 0;
LibeFarr->a[fp].errflg = 0;
rval = 0;
}
return rval;
}
int LibeIodelete ()
{
int stat;
int fd;
int i;
RunFree(LibeTmpstr->a);
RunFree(LibeTmpstr);
stat = 1;
for(i = 0;i < 40;i = (i + 1)){
int nctemp4098=i;
nctempchar1 *nctemp4096 =LibeFarr->a[nctemp4098].base;
int nctemp4095 =(nctemp4096!=0);
if(nctemp4095)
{
int nctemp4102 = (i > 4);
if(nctemp4102)
{
fd = LibeFarr->a[i].fd;
int nctemp4110= fd;
int nctemp4112=RunClose(nctemp4110);
stat =nctemp4112;
int nctemp4113 = (stat ==0);
if(nctemp4113)
{
struct nctempchar1 *nctemp4122;
static struct nctempchar1 nctemp4123 = {{ 21}, (char*)"Could not close file\0"};
nctemp4122=&nctemp4123;
LibeErrstr=nctemp4122;
LibeErrno = (-106);
}
}
int nctemp4128= i;
int nctemp4130=LibeFlush(nctemp4128);
stat =nctemp4130;
int nctemp4133=i;
RunFree(LibeFarr->a[nctemp4133].base->a);
RunFree(LibeFarr->a[nctemp4133].base);
}
}
RunFree(LibeFarr->a);
RunFree(LibeFarr);
return stat;
}
static int NBLOCKS;
static int NTHREADS;
int LibeSetnb (int nb)
{
NBLOCKS = nb;
return 1;
}
int LibeSetnt (int nt)
{
NTHREADS = nt;
return 1;
}
int LibeGetnb ()
{
return NBLOCKS;
}
int LibeGetnt ()
{
return NTHREADS;
}
int LibeArrayex (int line,nctempchar1 *name,int ival,int index,int bound)
{
int nctemp4145= 4;
struct nctempchar1 *nctemp4149;
static struct nctempchar1 nctemp4150 = {{ 37}, (char*)"Array index out of bond at line no: \0"};
nctemp4149=&nctemp4150;
nctempchar1* nctemp4147= nctemp4149;
int nctemp4151=LibePuts(nctemp4145,nctemp4147);
int nctemp4153= 4;
int nctemp4155= line;
int nctemp4157=LibePuti(nctemp4153,nctemp4155);
int nctemp4159= 4;
struct nctempchar1 *nctemp4163;
static struct nctempchar1 nctemp4164 = {{ 3}, (char*)"\n\0"};
nctemp4163=&nctemp4164;
nctempchar1* nctemp4161= nctemp4163;
int nctemp4165=LibePuts(nctemp4159,nctemp4161);
int nctemp4167= 4;
struct nctempchar1 *nctemp4171;
static struct nctempchar1 nctemp4172 = {{ 13}, (char*)"Array name: \0"};
nctemp4171=&nctemp4172;
nctempchar1* nctemp4169= nctemp4171;
int nctemp4173=LibePuts(nctemp4167,nctemp4169);
int nctemp4175= 4;
nctempchar1* nctemp4177= name;
int nctemp4180=LibePuts(nctemp4175,nctemp4177);
int nctemp4182= 4;
struct nctempchar1 *nctemp4186;
static struct nctempchar1 nctemp4187 = {{ 3}, (char*)"\n\0"};
nctemp4186=&nctemp4187;
nctempchar1* nctemp4184= nctemp4186;
int nctemp4188=LibePuts(nctemp4182,nctemp4184);
int nctemp4190= 4;
struct nctempchar1 *nctemp4194;
static struct nctempchar1 nctemp4195 = {{ 11}, (char*)"Index no: \0"};
nctemp4194=&nctemp4195;
nctempchar1* nctemp4192= nctemp4194;
int nctemp4196=LibePuts(nctemp4190,nctemp4192);
int nctemp4198= 4;
int nctemp4200= index;
int nctemp4202=LibePuti(nctemp4198,nctemp4200);
int nctemp4204= 4;
struct nctempchar1 *nctemp4208;
static struct nctempchar1 nctemp4209 = {{ 3}, (char*)"\n\0"};
nctemp4208=&nctemp4209;
nctempchar1* nctemp4206= nctemp4208;
int nctemp4210=LibePuts(nctemp4204,nctemp4206);
int nctemp4212= 4;
struct nctempchar1 *nctemp4216;
static struct nctempchar1 nctemp4217 = {{ 14}, (char*)"Index value: \0"};
nctemp4216=&nctemp4217;
nctempchar1* nctemp4214= nctemp4216;
int nctemp4218=LibePuts(nctemp4212,nctemp4214);
int nctemp4220= 4;
int nctemp4222= ival;
int nctemp4224=LibePuti(nctemp4220,nctemp4222);
int nctemp4226= 4;
struct nctempchar1 *nctemp4230;
static struct nctempchar1 nctemp4231 = {{ 3}, (char*)"\n\0"};
nctemp4230=&nctemp4231;
nctempchar1* nctemp4228= nctemp4230;
int nctemp4232=LibePuts(nctemp4226,nctemp4228);
int nctemp4234= 4;
struct nctempchar1 *nctemp4238;
static struct nctempchar1 nctemp4239 = {{ 16}, (char*)"Index bound: 0-\0"};
nctemp4238=&nctemp4239;
nctempchar1* nctemp4236= nctemp4238;
int nctemp4240=LibePuts(nctemp4234,nctemp4236);
int nctemp4242= 4;
int nctemp4249 = bound - 1;
int nctemp4244= nctemp4249;
int nctemp4250=LibePuti(nctemp4242,nctemp4244);
int nctemp4252= 4;
struct nctempchar1 *nctemp4256;
static struct nctempchar1 nctemp4257 = {{ 3}, (char*)"\n\0"};
nctemp4256=&nctemp4257;
nctempchar1* nctemp4254= nctemp4256;
int nctemp4258=LibePuts(nctemp4252,nctemp4254);
int nctemp4260= 4;
int nctemp4262=LibeFlush(nctemp4260);
int nctemp4264=RunExit();
return 1;
}
int LibeSystem (nctempchar1 *cmd)
{
int rval;
nctempchar1* nctemp4270= cmd;
int nctemp4273=RunSystem(nctemp4270);
rval =nctemp4273;
return rval;
}
int LibeInit ()
{
int rval;
int nctemp4279=LibeErrinit();
rval =nctemp4279;
int nctemp4284=LibeIoinit();
rval =nctemp4284;
int nctemp4289=LibeMathinit();
rval =nctemp4289;
int nctemp4294= 1024;
int nctemp4296=LibeSetnb(nctemp4294);
rval =nctemp4296;
int nctemp4301= 1024;
int nctemp4303=LibeSetnt(nctemp4301);
rval =nctemp4303;
return rval;
}
int LibeExit ()
{
int nctemp4306=RunExit();
return 1;
}
