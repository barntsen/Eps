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
;
;
;
;
;
;
;
;
;
;
;
;
;
;
;
;
;
;
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
int LibeErrno;
nctempchar1 *LibeErrstr;
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
i =0;
int nctemp59 = (i < n);
while(nctemp59){
{
float nctemp71 = rval * 2.0;
rval =nctemp71;
}
int nctemp80 = i + 1;
i =nctemp80;
int nctemp81 = (i < n);
nctemp59=nctemp81;
}
}
else{
int nctemp88= -n;
n =nctemp88;
i =0;
int nctemp93 = (i < n);
while(nctemp93){
{
float nctemp105 = rval * 0.5;
rval =nctemp105;
}
int nctemp114 = i + 1;
i =nctemp114;
int nctemp115 = (i < n);
nctemp93=nctemp115;
}
}
float nctemp123 = rval * x;
return nctemp123;
}
float LibeGetfman2 (float x)
{
float absx;
int n;
float nctemp128= x;
float nctemp130=LibeFabs(nctemp128);
absx =nctemp130;
n = 0;
int nctemp131 = (x ==0.0);
if(nctemp131)
{
return 0.0;
}
int nctemp136 = (absx < 0.5);
int nctemp140=nctemp136;
while(nctemp140)
{{
int nctemp149 = n - 1;
n =nctemp149;
float nctemp158 = absx * 2.0;
absx =nctemp158;
}
int nctemp159 = (absx < 0.5);
nctemp140=nctemp159;}int nctemp163 = (absx >= 1.0);
int nctemp167=nctemp163;
while(nctemp167)
{{
int nctemp176 = n + 1;
n =nctemp176;
float nctemp185 = absx * 0.5;
absx =nctemp185;
}
int nctemp186 = (absx >= 1.0);
nctemp167=nctemp186;}int nctemp190 = (x < 0.0);
if(nctemp190)
{
float nctemp194= -absx;
return nctemp194;
}
else{
return absx;
}
}
int LibeGetfexp2 (float x)
{
float absx;
int n;
float nctemp200= x;
float nctemp202=LibeFabs(nctemp200);
absx =nctemp202;
n = 0;
int nctemp203 = (x ==0.0);
if(nctemp203)
{
return 0;
}
int nctemp208 = (absx < 0.5);
int nctemp212=nctemp208;
while(nctemp212)
{{
int nctemp221 = n - 1;
n =nctemp221;
float nctemp230 = absx * 2.0;
absx =nctemp230;
}
int nctemp231 = (absx < 0.5);
nctemp212=nctemp231;}int nctemp235 = (absx >= 1.0);
int nctemp239=nctemp235;
while(nctemp239)
{{
int nctemp248 = n + 1;
n =nctemp248;
float nctemp257 = absx * 0.5;
absx =nctemp257;
}
int nctemp258 = (absx >= 1.0);
nctemp239=nctemp258;}return n;
}
float LibeFscale (float x,int n)
{
int i;
float rval;
rval = 1.0;
int nctemp263 = (n ==0);
if(nctemp263)
{
return x;
}
int nctemp268 = (n > 0);
if(nctemp268)
{
i =0;
int nctemp276 = (i < n);
while(nctemp276){
{
float nctemp288 = rval * 10.0;
rval =nctemp288;
}
int nctemp297 = i + 1;
i =nctemp297;
int nctemp298 = (i < n);
nctemp276=nctemp298;
}
}
else{
int nctemp305= -n;
n =nctemp305;
i =0;
int nctemp310 = (i < n);
while(nctemp310){
{
float nctemp322 = rval * 0.1;
rval =nctemp322;
}
int nctemp331 = i + 1;
i =nctemp331;
int nctemp332 = (i < n);
nctemp310=nctemp332;
}
}
float nctemp340 = rval * x;
return nctemp340;
}
int LibeGetfman (float f,int maxdig)
{
int sign;
int nexp;
int n;
int i;
int nctemp341 = (f ==0.0);
if(nctemp341)
{
return 0;
}
sign = 1;
int nctemp346 = (f < 0.0);
if(nctemp346)
{
float nctemp353= -f;
f =nctemp353;
int nctemp357= -sign;
sign =nctemp357;
}
nexp = 0;
float nctemp368 = f / 10.0;
float nctemp370 = nctemp368 + 1.1920928955078125e-07;
int nctemp358 = (nctemp370 >= 1.0);
if(nctemp358)
{
float nctemp382 = f / 10.0;
float nctemp384 = nctemp382 + 1.1920928955078125e-07;
int nctemp372 = (nctemp384 >= 1.0);
int nctemp386=nctemp372;
while(nctemp386)
{{
float nctemp395 = f / 10.0;
f =nctemp395;
int nctemp404 = nexp + 1;
nexp =nctemp404;
}
float nctemp415 = f / 10.0;
float nctemp417 = nctemp415 + 1.1920928955078125e-07;
int nctemp405 = (nctemp417 >= 1.0);
nctemp386=nctemp405;}}
else{
float nctemp426 = f + 1.1920928955078125e-07;
int nctemp419 = (nctemp426 < 1.0);
if(nctemp419)
{
float nctemp435 = f + 1.1920928955078125e-07;
int nctemp428 = (nctemp435 < 1.0);
int nctemp437=nctemp428;
while(nctemp437)
{{
float nctemp446 = f * 10.0;
f =nctemp446;
int nctemp455 = nexp - 1;
nexp =nctemp455;
}
float nctemp463 = f + 1.1920928955078125e-07;
int nctemp456 = (nctemp463 < 1.0);
nctemp437=nctemp456;}}
}
i =0;
int nctemp477 = maxdig - 1;
int nctemp469 = (i < nctemp477);
while(nctemp469){
{
float nctemp486 = f * 10.0;
f =nctemp486;
}
int nctemp495 = i + 1;
i =nctemp495;
int nctemp504 = maxdig - 1;
int nctemp496 = (i < nctemp504);
nctemp469=nctemp496;
}
float nctemp515 = f + 0.5;
int nctemp509=(int)(nctemp515);
n =nctemp509;
int nctemp516 = (sign < 0);
if(nctemp516)
{
int nctemp523= -n;
n =nctemp523;
}
return n;
}
float LibeGetffman (float f)
{
int sign;
int nexp;
int nctemp525 = (f ==0.0);
if(nctemp525)
{
return 0.0;
}
sign = 1;
int nctemp530 = (f < 0.0);
if(nctemp530)
{
float nctemp537= -f;
f =nctemp537;
int nctemp541= -sign;
sign =nctemp541;
}
nexp = 0;
float nctemp552 = f / 10.0;
float nctemp554 = nctemp552 + 1.1920928955078125e-07;
int nctemp542 = (nctemp554 >= 1.0);
if(nctemp542)
{
float nctemp566 = f / 10.0;
float nctemp568 = nctemp566 + 1.1920928955078125e-07;
int nctemp556 = (nctemp568 >= 1.0);
int nctemp570=nctemp556;
while(nctemp570)
{{
float nctemp579 = f / 10.0;
f =nctemp579;
int nctemp588 = nexp + 1;
nexp =nctemp588;
}
float nctemp599 = f / 10.0;
float nctemp601 = nctemp599 + 1.1920928955078125e-07;
int nctemp589 = (nctemp601 >= 1.0);
nctemp570=nctemp589;}}
else{
float nctemp610 = f + 1.1920928955078125e-07;
int nctemp603 = (nctemp610 < 1.0);
if(nctemp603)
{
float nctemp619 = f + 1.1920928955078125e-07;
int nctemp612 = (nctemp619 < 1.0);
int nctemp621=nctemp612;
while(nctemp621)
{{
float nctemp630 = f * 10.0;
f =nctemp630;
int nctemp639 = nexp - 1;
nexp =nctemp639;
}
float nctemp647 = f + 1.1920928955078125e-07;
int nctemp640 = (nctemp647 < 1.0);
nctemp621=nctemp640;}}
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
int nctemp650 = (f ==0.0);
if(nctemp650)
{
return 0;
}
sign = 1;
int nctemp655 = (f < 0.0);
if(nctemp655)
{
float nctemp662= -f;
f =nctemp662;
int nctemp666= -sign;
sign =nctemp666;
}
nexp = 0;
float nctemp677 = f / 10.0;
float nctemp679 = nctemp677 + 1.1920928955078125e-07;
int nctemp667 = (nctemp679 >= 1.0);
if(nctemp667)
{
float nctemp691 = f / 10.0;
float nctemp693 = nctemp691 + 1.1920928955078125e-07;
int nctemp681 = (nctemp693 >= 1.0);
int nctemp695=nctemp681;
while(nctemp695)
{{
float nctemp704 = f / 10.0;
f =nctemp704;
int nctemp713 = nexp + 1;
nexp =nctemp713;
}
float nctemp724 = f / 10.0;
float nctemp726 = nctemp724 + 1.1920928955078125e-07;
int nctemp714 = (nctemp726 >= 1.0);
nctemp695=nctemp714;}}
else{
float nctemp735 = f + 1.1920928955078125e-07;
int nctemp728 = (nctemp735 < 1.0);
if(nctemp728)
{
float nctemp744 = f + 1.1920928955078125e-07;
int nctemp737 = (nctemp744 < 1.0);
int nctemp746=nctemp737;
while(nctemp746)
{{
float nctemp755 = f * 10.0;
f =nctemp755;
int nctemp764 = nexp - 1;
nexp =nctemp764;
}
float nctemp772 = f + 1.1920928955078125e-07;
int nctemp765 = (nctemp772 < 1.0);
nctemp746=nctemp765;}}
}
i = 0;
loop = 1;
int nctemp775=loop;
while(nctemp775)
{{
int nctemp787=(int)(f);
float nctemp784=(float)(nctemp787);
float nctemp790 = f - nctemp784;
r =nctemp790;
int nctemp791 = (r < 1.1920928955078125e-07);
if(nctemp791)
{
loop =0;
}
else{
float nctemp807 = f * 10.0;
f =nctemp807;
}
int nctemp816 = i + 1;
i =nctemp816;
int nctemp817 = (i >= 10);
if(nctemp817)
{
loop =0;
}
}
nctemp775=loop;}return i;
}
int LibeGetfexp (float f)
{
int nexp;
int nctemp827 = (f ==0.0);
if(nctemp827)
{
return 0;
}
nexp = 0;
int nctemp832 = (f < 0.0);
if(nctemp832)
{
float nctemp839= -f;
f =nctemp839;
}
float nctemp850 = f / 10.0;
float nctemp852 = nctemp850 + 1.1920928955078125e-07;
int nctemp840 = (nctemp852 >= 1.0);
if(nctemp840)
{
float nctemp864 = f / 10.0;
float nctemp866 = nctemp864 + 1.1920928955078125e-07;
int nctemp854 = (nctemp866 >= 1.0);
int nctemp868=nctemp854;
while(nctemp868)
{{
float nctemp877 = f / 10.0;
f =nctemp877;
int nctemp886 = nexp + 1;
nexp =nctemp886;
}
float nctemp897 = f / 10.0;
float nctemp899 = nctemp897 + 1.1920928955078125e-07;
int nctemp887 = (nctemp899 >= 1.0);
nctemp868=nctemp887;}}
else{
float nctemp908 = f + 1.1920928955078125e-07;
int nctemp901 = (nctemp908 < 1.0);
if(nctemp901)
{
float nctemp917 = f + 1.1920928955078125e-07;
int nctemp910 = (nctemp917 < 1.0);
int nctemp919=nctemp910;
while(nctemp919)
{{
float nctemp928 = f * 10.0;
f =nctemp928;
int nctemp937 = nexp - 1;
nexp =nctemp937;
}
float nctemp945 = f + 1.1920928955078125e-07;
int nctemp938 = (nctemp945 < 1.0);
nctemp919=nctemp938;}}
}
return nexp;
}
float LibeClock ()
{
float nctemp949=RunClock();
return nctemp949;
}
float LibeSincosmax;
float LibeSincoslim;
float LibeLnmax;
float LibeLnmin;
int LibeMod (int n,int r)
{
int nctemp950 = (r ==0);
if(nctemp950)
{
return n;
}
int nctemp966 = n / r;
int nctemp968 = nctemp966 * r;
int nctemp969 = n - nctemp968;
return nctemp969;
}
float LibeSqrt (float x)
{
float f;
float yest;
float z;
int n;
int nctemp970 = (x ==0.0);
if(nctemp970)
{
return 0.0;
}
int nctemp975 = (x < 0.0);
if(nctemp975)
{
LibeErrno =(-101);
struct nctempchar1 *nctemp988;
static struct nctempchar1 nctemp989 = {{ 25}, (char*)"Sqrt input argument < 0 \0"};
nctemp988=&nctemp989;
LibeErrstr=nctemp988;
return 0.0;
}
float nctemp995= x;
float nctemp997=LibeGetfman2(nctemp995);
f =nctemp997;
float nctemp1002= x;
int nctemp1004=LibeGetfexp2(nctemp1002);
n =nctemp1004;
yest = (0.41731 + (0.59016 * f));
z = (yest + (f / yest));
yest = ((0.25 * z) + (f / z));
int nctemp1008= n;
int nctemp1010= 2;
int nctemp1012=LibeMod(nctemp1008,nctemp1010);
int nctemp1005 = (nctemp1012 !=0);
if(nctemp1005)
{
float nctemp1022 = yest * 0.70710678118654752440;
yest =nctemp1022;
int nctemp1031 = n + 1;
n =nctemp1031;
}
float nctemp1033= yest;
int nctemp1040 = n / 2;
int nctemp1035= nctemp1040;
float nctemp1041=LibeFscale2(nctemp1033,nctemp1035);
return nctemp1041;
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
int nctemp1042 = (x <= 0.0);
if(nctemp1042)
{
LibeErrno =(-101);
struct nctempchar1 *nctemp1055;
static struct nctempchar1 nctemp1056 = {{ 23}, (char*)"Ln input argument < 0 \0"};
nctemp1055=&nctemp1056;
LibeErrstr=nctemp1055;
return 3.4028234663852886e+38;
}
float nctemp1062= x;
float nctemp1064=LibeGetfman2(nctemp1062);
f =nctemp1064;
float nctemp1069= x;
int nctemp1071=LibeGetfexp2(nctemp1069);
n =nctemp1071;
int nctemp1072 = (f > 0.70710678118654752440);
if(nctemp1072)
{
float nctemp1087 = f - 0.5;
float nctemp1089 = nctemp1087 - 0.5;
zn =nctemp1089;
float nctemp1101 = f * 0.5;
float nctemp1103 = nctemp1101 + 0.5;
zd =nctemp1103;
}
else{
float nctemp1112 = f - 0.5;
zn =nctemp1112;
float nctemp1124 = zn * 0.5;
float nctemp1126 = nctemp1124 + 0.5;
zd =nctemp1126;
int nctemp1135 = n - 1;
n =nctemp1135;
}
z = (zn / zd);
w = (z * z);
r = (z + (z * ((w * (-0.5527074855E+0)) / (w + (-0.6632718214E+1)))));
float nctemp1140=(float)(n);
xn =nctemp1140;
float nctemp1153 = xn * (-2.121944400546905827679E-4);
float nctemp1155 = nctemp1153 + r;
float nctemp1161 = xn * 0.69335938;
float nctemp1162 = nctemp1155 + nctemp1161;
return nctemp1162;
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
int nctemp1163 = (x >= LibeLnmax);
if(nctemp1163)
{
LibeErrno =(-102);
struct nctempchar1 *nctemp1176;
static struct nctempchar1 nctemp1177 = {{ 25}, (char*)"Overflow in exp function\0"};
nctemp1176=&nctemp1177;
LibeErrstr=nctemp1176;
return 3.4028234663852886e+38;
}
int nctemp1179 = (x < LibeLnmin);
if(nctemp1179)
{
LibeErrno =(-102);
struct nctempchar1 *nctemp1192;
static struct nctempchar1 nctemp1193 = {{ 26}, (char*)"Underflow in exp function\0"};
nctemp1192=&nctemp1193;
LibeErrstr=nctemp1192;
return 0.0;
}
float nctemp1205 = x * 1.4426950408889634073;
int nctemp1199=(int)(nctemp1205);
n =nctemp1199;
float nctemp1210=(float)(n);
xn =nctemp1210;
g = (x - (xn * 0.693147180559945309417232));
z = (g * g);
p = (((P1 * z) + P0) * g);
q = ((Q1 * z) + 0.5);
rval = (0.5 + (p / (q - p)));
float nctemp1214= rval;
int nctemp1221 = n + 1;
int nctemp1216= nctemp1221;
float nctemp1222=LibeFscale2(nctemp1214,nctemp1216);
return nctemp1222;
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
int nctemp1223 = (y > LibeSincosmax);
if(nctemp1223)
{
LibeErrno =(-102);
struct nctempchar1 *nctemp1236;
static struct nctempchar1 nctemp1237 = {{ 37}, (char*)"Loss of accuracy in sin/cos function\0"};
nctemp1236=&nctemp1237;
LibeErrstr=nctemp1236;
return 0.0;
}
float nctemp1252 = y * 0.31830988618379067154;
float nctemp1254 = nctemp1252 + 0.5;
int nctemp1243=(int)(nctemp1254);
n =nctemp1243;
float nctemp1259=(float)(n);
xn =nctemp1259;
int nctemp1265= n;
int nctemp1267= 2;
int nctemp1269=LibeMod(nctemp1265,nctemp1267);
int nctemp1262 = (nctemp1269 !=0);
if(nctemp1262)
{
float nctemp1274= -sign;
sign =nctemp1274;
}
float nctemp1279= x;
float nctemp1281=LibeFabs(nctemp1279);
x =nctemp1281;
int nctemp1282 = (x !=y);
if(nctemp1282)
{
float nctemp1294 = xn - 0.5;
xn =nctemp1294;
}
float nctemp1302= x;
float nctemp1304=LibeFabs(nctemp1302);
float nctemp1310 = xn * 3.1415926535897932384626433832795028841972;
float nctemp1311 = nctemp1304 - nctemp1310;
f =nctemp1311;
float nctemp1315= f;
float nctemp1317=LibeFabs(nctemp1315);
int nctemp1312 = (nctemp1317 < LibeSincoslim);
if(nctemp1312)
{
float nctemp1323 = sign * f;
return nctemp1323;
}
g = (f * f);
g = (((((((R4 * g) + R3) * g) + R2) * g) + R1) * g);
g = (f + (f * g));
float nctemp1328 = sign * g;
return nctemp1328;
}
float LibeSin (float x)
{
int nctemp1329 = (x < 0.0);
if(nctemp1329)
{
float nctemp1334= x;
float nctemp1337= -x;
float nctemp1336= nctemp1337;
float nctemp1339= -1.0;
float nctemp1338= nctemp1339;
float nctemp1340=LibeSincos(nctemp1334,nctemp1336,nctemp1338);
return nctemp1340;
}
else{
float nctemp1342= x;
float nctemp1344= x;
float nctemp1346= 1.0;
float nctemp1348=LibeSincos(nctemp1342,nctemp1344,nctemp1346);
return nctemp1348;
}
}
float LibeCos (float x)
{
float nctemp1350= x;
float nctemp1356= x;
float nctemp1358=LibeFabs(nctemp1356);
float nctemp1360 = nctemp1358 + 1.57079632679489661923132;
float nctemp1352= nctemp1360;
float nctemp1361= 1.0;
float nctemp1363=LibeSincos(nctemp1350,nctemp1352,nctemp1361);
return nctemp1363;
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
float nctemp1368= x;
float nctemp1370=LibeFabs(nctemp1368);
y =nctemp1370;
int nctemp1371 = (y > LibeSincosmax);
if(nctemp1371)
{
LibeErrno =(-102);
struct nctempchar1 *nctemp1384;
static struct nctempchar1 nctemp1385 = {{ 33}, (char*)"Loss of accuracy in tan function\0"};
nctemp1384=&nctemp1385;
LibeErrstr=nctemp1384;
return 0.0;
}
float nctemp1397 = x * 0.63661977236758134308;
int nctemp1391=(int)(nctemp1397);
n =nctemp1391;
float nctemp1402=(float)(n);
xn =nctemp1402;
f = (x - (xn * 1.57079632679489661923132));
float nctemp1408= f;
float nctemp1410=LibeFabs(nctemp1408);
int nctemp1405 = (nctemp1410 < LibeSincoslim);
if(nctemp1405)
{
xnum =f;
xden =1.0;
}
else{
float nctemp1428 = f * f;
g =nctemp1428;
float nctemp1443 = P1 * g;
float nctemp1445 = nctemp1443 * f;
float nctemp1447 = nctemp1445 + f;
xnum =nctemp1447;
float nctemp1468 = Q2 * g;
float nctemp1470 = nctemp1468 + Q1;
float nctemp1472 = nctemp1470 * g;
float nctemp1474 = nctemp1472 + 0.5;
float nctemp1476 = nctemp1474 + 0.5;
xden =nctemp1476;
}
int nctemp1480= n;
int nctemp1482= 2;
int nctemp1484=LibeMod(nctemp1480,nctemp1482);
int nctemp1477 = (nctemp1484 !=0);
if(nctemp1477)
{
float nctemp1489= -xnum;
float nctemp1490 = xden / nctemp1489;
return nctemp1490;
}
else{
float nctemp1495 = xnum / xden;
return nctemp1495;
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
float nctemp1500= x;
float nctemp1502=LibeFabs(nctemp1500);
y =nctemp1502;
int nctemp1503 = (y > 0.5);
if(nctemp1503)
{
i =1;
int nctemp1511 = (y > 1.0);
if(nctemp1511)
{
LibeErrno =(-101);
struct nctempchar1 *nctemp1524;
static struct nctempchar1 nctemp1525 = {{ 41}, (char*)"Absolute value of argument of arcsin > 1\0"};
nctemp1524=&nctemp1525;
LibeErrstr=nctemp1524;
return 3.4028234663852886e+38;
}
float nctemp1538 = 1.0 - y;
float nctemp1540 = nctemp1538 * 0.5;
g =nctemp1540;
float nctemp1545= g;
float nctemp1547=LibeSqrt(nctemp1545);
r =nctemp1547;
float nctemp1551= -r;
r =nctemp1551;
float nctemp1560 = r + r;
y =nctemp1560;
float nctemp1578 = P2 * g;
float nctemp1580 = nctemp1578 + P1;
float nctemp1582 = nctemp1580 * g;
float nctemp1594 = g + Q1;
float nctemp1596 = nctemp1594 * g;
float nctemp1598 = nctemp1596 + Q0;
float nctemp1599 = nctemp1582 / nctemp1598;
r =nctemp1599;
float nctemp1612 = y * r;
float nctemp1613 = y + nctemp1612;
res =nctemp1613;
}
else{
i =0;
int nctemp1618 = (y < LibeSincoslim);
if(nctemp1618)
{
res =y;
}
else{
float nctemp1634 = y * y;
g =nctemp1634;
float nctemp1652 = P2 * g;
float nctemp1654 = nctemp1652 + P1;
float nctemp1656 = nctemp1654 * g;
float nctemp1668 = g + Q1;
float nctemp1670 = nctemp1668 * g;
float nctemp1672 = nctemp1670 + Q0;
float nctemp1673 = nctemp1656 / nctemp1672;
g =nctemp1673;
float nctemp1686 = y * g;
float nctemp1687 = y + nctemp1686;
res =nctemp1687;
}
}
int nctemp1688 = (i ==1);
if(nctemp1688)
{
float nctemp1704 = 0.78539816339744830962 + res;
float nctemp1705 = 0.78539816339744830962 + nctemp1704;
res =nctemp1705;
}
int nctemp1706 = (x < 0.0);
if(nctemp1706)
{
float nctemp1713= -res;
res =nctemp1713;
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
float nctemp1719= x;
float nctemp1721=LibeFabs(nctemp1719);
y =nctemp1721;
int nctemp1722 = (y > 0.5);
if(nctemp1722)
{
i =0;
int nctemp1730 = (y > 1.0);
if(nctemp1730)
{
LibeErrno =(-101);
struct nctempchar1 *nctemp1743;
static struct nctempchar1 nctemp1744 = {{ 50}, (char*)"Absolute value of argument of arccos out of range\0"};
nctemp1743=&nctemp1744;
LibeErrstr=nctemp1743;
return 3.4028234663852886e+38;
}
float nctemp1757 = 1.0 - y;
float nctemp1759 = nctemp1757 * 0.5;
g =nctemp1759;
float nctemp1764= g;
float nctemp1766=LibeSqrt(nctemp1764);
r =nctemp1766;
float nctemp1770= -r;
r =nctemp1770;
float nctemp1779 = r + r;
y =nctemp1779;
float nctemp1797 = P2 * g;
float nctemp1799 = nctemp1797 + P1;
float nctemp1801 = nctemp1799 * g;
float nctemp1813 = g + Q1;
float nctemp1815 = nctemp1813 * g;
float nctemp1817 = nctemp1815 + Q0;
float nctemp1818 = nctemp1801 / nctemp1817;
r =nctemp1818;
float nctemp1831 = y * r;
float nctemp1832 = y + nctemp1831;
res =nctemp1832;
}
else{
i =1;
int nctemp1837 = (y < LibeSincoslim);
if(nctemp1837)
{
res =y;
}
else{
float nctemp1853 = y * y;
g =nctemp1853;
float nctemp1871 = P2 * g;
float nctemp1873 = nctemp1871 + P1;
float nctemp1875 = nctemp1873 * g;
float nctemp1887 = g + Q1;
float nctemp1889 = nctemp1887 * g;
float nctemp1891 = nctemp1889 + Q0;
float nctemp1892 = nctemp1875 / nctemp1891;
g =nctemp1892;
float nctemp1905 = y * g;
float nctemp1906 = y + nctemp1905;
res =nctemp1906;
}
}
int nctemp1907 = (x < 0.0);
if(nctemp1907)
{
int nctemp1911 = (i ==0);
if(nctemp1911)
{
float nctemp1927 = 1.57079632679489661923132 + res;
float nctemp1928 = 1.57079632679489661923132 + nctemp1927;
res =nctemp1928;
}
else{
float nctemp1941 = 0.78539816339744830962 + res;
float nctemp1942 = 0.78539816339744830962 + nctemp1941;
res =nctemp1942;
}
}
else{
int nctemp1943 = (i ==1);
if(nctemp1943)
{
float nctemp1959 = 0.78539816339744830962 - res;
float nctemp1960 = 0.78539816339744830962 + nctemp1959;
res =nctemp1960;
}
else{
float nctemp1964= -res;
res =nctemp1964;
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
int nctemp1966 = (f > 1.0);
if(nctemp1966)
{
float nctemp1978 = 1.0 / f;
f =nctemp1978;
n =2;
}
else{
n =0;
}
int nctemp1987 = (f > rt32);
if(nctemp1987)
{
float nctemp2011 = a * f;
float nctemp2013 = nctemp2011 - 0.5;
float nctemp2015 = nctemp2013 - 0.5;
float nctemp2017 = nctemp2015 + f;
float nctemp2023 = rt3 + f;
float nctemp2024 = nctemp2017 / nctemp2023;
f =nctemp2024;
int nctemp2033 = n + 1;
n =nctemp2033;
}
float nctemp2037= f;
float nctemp2039=LibeFabs(nctemp2037);
int nctemp2034 = (nctemp2039 < LibeSincoslim);
if(nctemp2034)
{
res =f;
}
else{
float nctemp2053 = f * f;
g =nctemp2053;
float nctemp2071 = P1 * g;
float nctemp2073 = nctemp2071 + P0;
float nctemp2075 = nctemp2073 * g;
float nctemp2081 = g + Q0;
float nctemp2082 = nctemp2075 / nctemp2081;
res =nctemp2082;
float nctemp2095 = f * res;
float nctemp2096 = f + nctemp2095;
res =nctemp2096;
}
int nctemp2097 = (n > 1);
if(nctemp2097)
{
float nctemp2104= -res;
res =nctemp2104;
}
int nctemp2105 = (n ==1);
if(nctemp2105)
{
float nctemp2117 = res + 0.52359877559829887308;
res =nctemp2117;
}
else{
int nctemp2118 = (n ==2);
if(nctemp2118)
{
float nctemp2130 = res + 1.57079632679489661923132;
res =nctemp2130;
}
else{
int nctemp2131 = (n ==3);
if(nctemp2131)
{
float nctemp2143 = res + 1.04719755119659774615;
res =nctemp2143;
}
}
}
return res;
}
float LibeArctan (float x)
{
float rval;
int nctemp2145 = (x < 0.0);
if(nctemp2145)
{
float nctemp2154= -x;
float nctemp2153= nctemp2154;
float nctemp2155=LibeAtan(nctemp2153);
rval =nctemp2155;
float nctemp2159= -rval;
rval =nctemp2159;
}
else{
float nctemp2164= x;
float nctemp2166=LibeAtan(nctemp2164);
rval =nctemp2166;
}
return rval;
}
float LibePow (float base,float exponent)
{
float nctemp2174= base;
float nctemp2176=LibeLn(nctemp2174);
float nctemp2177 = exponent * nctemp2176;
float nctemp2169= nctemp2177;
float nctemp2178=LibeExp(nctemp2169);
return nctemp2178;
}
int LibeMathinit ()
{
float nctemp2183= 1.0;
int nctemp2190 = 24 - 1;
int nctemp2185= nctemp2190;
float nctemp2191=LibeFscale2(nctemp2183,nctemp2185);
LibeSincosmax =nctemp2191;
float nctemp2200= LibeSincosmax;
float nctemp2202=LibeSqrt(nctemp2200);
float nctemp2203 = 3.1415926535897932384626433832795028841972 * nctemp2202;
LibeSincosmax =nctemp2203;
float nctemp2212= 1.0;
int nctemp2219 = 24 / 2;
int nctemp2214= nctemp2219;
float nctemp2220=LibeFscale2(nctemp2212,nctemp2214);
float nctemp2221 = 1.0 / nctemp2220;
LibeSincoslim =nctemp2221;
float nctemp2226= 3.4028234663852886e+38;
float nctemp2228=LibeLn(nctemp2226);
LibeLnmax =nctemp2228;
float nctemp2233= 1.1754943508222875e-38;
float nctemp2235=LibeLn(nctemp2233);
LibeLnmin =nctemp2235;
return 1;
}
int LibeStrlen (nctempchar1 *s)
{
int ls;
int i;
int nctemp2241=s->d[0];ls =nctemp2241;
i = 0;
int nctemp2254=i;
int nctemp2251=(int)(s->a[nctemp2254]);
int nctemp2248 = (nctemp2251 !=0);
int nctemp2258 = (i < ls);
int nctemp2245 = (nctemp2248 && nctemp2258);
int nctemp2262=nctemp2245;
while(nctemp2262)
{{
int nctemp2271 = i + 1;
i =nctemp2271;
}
int nctemp2281=i;
int nctemp2278=(int)(s->a[nctemp2281]);
int nctemp2275 = (nctemp2278 !=0);
int nctemp2285 = (i < ls);
int nctemp2272 = (nctemp2275 && nctemp2285);
nctemp2262=nctemp2272;}return i;
}
int LibeStrcmp (nctempchar1 *s,nctempchar1 *t)
{
int ls;
int i;
int nctemp2294=s->d[0];ls =nctemp2294;
i = 0;
int nctemp2304=i;
int nctemp2307=i;
int nctemp2301 = (s->a[nctemp2304] ==t->a[nctemp2307]);
int nctemp2310 = (i < ls);
int nctemp2298 = (nctemp2301 && nctemp2310);
int nctemp2314=nctemp2298;
while(nctemp2314)
{{
int nctemp2321=i;
int nctemp2318=(int)(s->a[nctemp2321]);
int nctemp2315 = (nctemp2318 ==0);
if(nctemp2315)
{
return 1;
}
int nctemp2333 = i + 1;
i =nctemp2333;
}
int nctemp2340=i;
int nctemp2343=i;
int nctemp2337 = (s->a[nctemp2340] ==t->a[nctemp2343]);
int nctemp2346 = (i < ls);
int nctemp2334 = (nctemp2337 && nctemp2346);
nctemp2314=nctemp2334;}return 0;
}
int LibeStrev (nctempchar1 *s)
{
char c;
int i;
int j;
i = 0;
nctempchar1* nctemp2358= s;
int nctemp2361=LibeStrlen(nctemp2358);
int nctemp2363 = nctemp2361 - 1;
j =nctemp2363;
int nctemp2364 = (i < j);
int nctemp2368=nctemp2364;
while(nctemp2368)
{{
int nctemp2373=i;
c =s->a[nctemp2373];
int nctemp2378=i;
int nctemp2381=j;
s->a[nctemp2378] =s->a[nctemp2381];
int nctemp2386=j;
s->a[nctemp2386] =c;
int nctemp2397 = i + 1;
i =nctemp2397;
int nctemp2406 = j - 1;
j =nctemp2406;
}
int nctemp2407 = (i < j);
nctemp2368=nctemp2407;}return 1;
}
int LibeStrcpy (nctempchar1 *s,nctempchar1 *t)
{
int ls;
int i;
nctempchar1* nctemp2416= s;
int nctemp2419=LibeStrlen(nctemp2416);
ls =nctemp2419;
int nctemp2420 = (ls ==0);
if(nctemp2420)
{
return 1;
}
int nctemp2428=t->d[0];int nctemp2425 = (nctemp2428 <= ls);
if(nctemp2425)
{
return 0;
}
i =0;
int nctemp2438 = (i <= ls);
while(nctemp2438){
{
int nctemp2445=i;
int nctemp2448=i;
t->a[nctemp2445] =s->a[nctemp2448];
}
int nctemp2458 = i + 1;
i =nctemp2458;
int nctemp2459 = (i <= ls);
nctemp2438=nctemp2459;
}
return 1;
}
int LibeStrcat (nctempchar1 *s,nctempchar1 *t)
{
int ls;
int lt;
int i;
nctempchar1* nctemp2468= s;
int nctemp2471=LibeStrlen(nctemp2468);
ls =nctemp2471;
nctempchar1* nctemp2476= t;
int nctemp2479=LibeStrlen(nctemp2476);
lt =nctemp2479;
int nctemp2483=t->d[0];int nctemp2492 = lt + ls;
int nctemp2480 = (nctemp2483 < nctemp2492);
if(nctemp2480)
{
return 0;
}
i =lt;
int nctemp2506 = ls + lt;
int nctemp2498 = (i < nctemp2506);
while(nctemp2498){
{
int nctemp2510=i;
int nctemp2518 = i - lt;
int nctemp2513=nctemp2518;
t->a[nctemp2510] =s->a[nctemp2513];
}
int nctemp2527 = i + 1;
i =nctemp2527;
int nctemp2536 = ls + lt;
int nctemp2528 = (i < nctemp2536);
nctemp2498=nctemp2528;
}
int nctemp2545 = ls + lt;
int nctemp2540=nctemp2545;
char nctemp2547=(char)(0);
t->a[nctemp2540] =nctemp2547;
return 1;
}
nctempchar1 * LibeStradd (nctempchar1 *t,nctempchar1 *s)
{
int ls;
int lt;
nctempchar1 *r;
int i;
nctempchar1* nctemp2555= s;
int nctemp2558=LibeStrlen(nctemp2555);
ls =nctemp2558;
nctempchar1* nctemp2563= t;
int nctemp2566=LibeStrlen(nctemp2563);
lt =nctemp2566;
int nctemp2581 = lt + ls;
int nctemp2583 = nctemp2581 + 1;
int nctemp2573=nctemp2583;
nctempchar1 *nctemp2572;
nctemp2572=(nctempchar1*)RunMalloc(sizeof(nctempchar1));
int nctemp2591 = lt + ls;
int nctemp2593 = nctemp2591 + 1;
nctemp2572->d[0]=nctemp2593;
nctemp2572->a=(char *)RunMalloc(sizeof(char)*nctemp2573);
r=nctemp2572;
i =0;
int nctemp2598 = (i < lt);
while(nctemp2598){
{
int nctemp2605=i;
int nctemp2608=i;
r->a[nctemp2605] =t->a[nctemp2608];
}
int nctemp2618 = i + 1;
i =nctemp2618;
int nctemp2619 = (i < lt);
nctemp2598=nctemp2619;
}
i =lt;
int nctemp2635 = ls + lt;
int nctemp2627 = (i < nctemp2635);
while(nctemp2627){
{
int nctemp2639=i;
int nctemp2647 = i - lt;
int nctemp2642=nctemp2647;
r->a[nctemp2639] =s->a[nctemp2642];
}
int nctemp2656 = i + 1;
i =nctemp2656;
int nctemp2665 = ls + lt;
int nctemp2657 = (i < nctemp2665);
nctemp2627=nctemp2657;
}
int nctemp2674 = ls + lt;
int nctemp2669=nctemp2674;
char nctemp2676=(char)(0);
r->a[nctemp2669] =nctemp2676;
return r;
}
nctempchar1 * LibeStrsave (nctempchar1 *s)
{
int l;
nctempchar1 *tmp;
tmp  = 0;
l = 0;
nctempchar1* nctemp2685= s;
int nctemp2688=LibeStrlen(nctemp2685);
l =nctemp2688;
int nctemp2700 = l + 1;
int nctemp2695=nctemp2700;
nctempchar1 *nctemp2694;
nctemp2694=(nctempchar1*)RunMalloc(sizeof(nctempchar1));
int nctemp2705 = l + 1;
nctemp2694->d[0]=nctemp2705;
nctemp2694->a=(char *)RunMalloc(sizeof(char)*nctemp2695);
tmp=nctemp2694;
nctempchar1 *nctemp2707 =tmp;
int nctemp2706 =(nctemp2707!=0);
if(nctemp2706)
{
nctempchar1* nctemp2712= s;
nctempchar1* nctemp2715= tmp;
int nctemp2718=LibeStrcpy(nctemp2712,nctemp2715);
}
return tmp;
}
int LibeIsalhpa (int c)
{
int nctemp2727 = (c >= 'a');
int nctemp2732 = (c <= 'z');
int nctemp2724 = (nctemp2727 && nctemp2732);
int nctemp2740 = (c >= 'A');
int nctemp2745 = (c <= 'Z');
int nctemp2737 = (nctemp2740 && nctemp2745);
int nctemp2721 = (nctemp2724 || nctemp2737);
if(nctemp2721)
{
return 1;
}
else{
return 0;
}
}
int LibeIsdigit (int c)
{
int nctemp2754 = (c >= '0');
int nctemp2759 = (c <= '9');
int nctemp2751 = (nctemp2754 && nctemp2759);
if(nctemp2751)
{
return 1;
}
else{
return 0;
}
}
int LibeIsalnum (int c)
{
int nctemp2771 = (c >= 'a');
int nctemp2776 = (c <= 'z');
int nctemp2768 = (nctemp2771 && nctemp2776);
int nctemp2784 = (c >= 'A');
int nctemp2789 = (c <= 'Z');
int nctemp2781 = (nctemp2784 && nctemp2789);
int nctemp2765 = (nctemp2768 || nctemp2781);
if(nctemp2765)
{
return 1;
}
else{
int nctemp2797 = (c >= '0');
int nctemp2802 = (c <= '9');
int nctemp2794 = (nctemp2797 && nctemp2802);
if(nctemp2794)
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
int nctemp2817=i;
char nctemp2820=(char)(' ');
int nctemp2814 = (s->a[nctemp2817] ==nctemp2820);
int nctemp2827=i;
char nctemp2830=(char)(10);
int nctemp2824 = (s->a[nctemp2827] ==nctemp2830);
int nctemp2811 = (nctemp2814 || nctemp2824);
int nctemp2837=i;
char nctemp2840=(char)(9);
int nctemp2834 = (s->a[nctemp2837] ==nctemp2840);
int nctemp2808 = (nctemp2811 || nctemp2834);
int nctemp2843=nctemp2808;
while(nctemp2843)
{{
int nctemp2852 = i + 1;
i =nctemp2852;
}
int nctemp2862=i;
char nctemp2865=(char)(' ');
int nctemp2859 = (s->a[nctemp2862] ==nctemp2865);
int nctemp2872=i;
char nctemp2875=(char)(10);
int nctemp2869 = (s->a[nctemp2872] ==nctemp2875);
int nctemp2856 = (nctemp2859 || nctemp2869);
int nctemp2882=i;
char nctemp2885=(char)(9);
int nctemp2879 = (s->a[nctemp2882] ==nctemp2885);
int nctemp2853 = (nctemp2856 || nctemp2879);
nctemp2843=nctemp2853;}int nctemp2891=i;
char nctemp2894=(char)('-');
int nctemp2888 = (s->a[nctemp2891] ==nctemp2894);
if(nctemp2888)
{
int nctemp2900= -1;
sign =nctemp2900;
int nctemp2909 = i + 1;
i =nctemp2909;
}
else{
int nctemp2913=i;
char nctemp2916=(char)('+');
int nctemp2910 = (s->a[nctemp2913] ==nctemp2916);
if(nctemp2910)
{
sign =1;
int nctemp2931 = i + 1;
i =nctemp2931;
}
else{
sign =1;
}
}
n =0;
int nctemp2946=i;
int nctemp2943=(int)(s->a[nctemp2946]);
int nctemp2941= nctemp2943;
int nctemp2948=LibeIsdigit(nctemp2941);
while(nctemp2948){
{
int nctemp2963 = 10 * n;
int nctemp2968=i;
int nctemp2965=(int)(s->a[nctemp2968]);
int nctemp2970 = nctemp2963 + nctemp2965;
int nctemp2972 = nctemp2970 - '0';
n =nctemp2972;
}
int nctemp2981 = i + 1;
i =nctemp2981;
int nctemp2988=i;
int nctemp2985=(int)(s->a[nctemp2988]);
int nctemp2983= nctemp2985;
int nctemp2990=LibeIsdigit(nctemp2983);
nctemp2948=nctemp2990;
}
int nctemp2995 = sign * n;
return nctemp2995;
}
int LibeItoa (int n,nctempchar1 *s)
{
int sign;
int i;
nctempchar1 *nctemp2997 =s;
int nctemp2996 =(nctemp2997==0);
if(nctemp2996)
{
return 0;
}
sign =n;
int nctemp3002 = (sign < 0);
if(nctemp3002)
{
int nctemp3013= -n;
n =nctemp3013;
}
i = 0;
int nctemp3017=0;
int nctemp3025= n;
int nctemp3027= 10;
int nctemp3029=LibeMod(nctemp3025,nctemp3027);
int nctemp3031 = nctemp3029 + 48;
char nctemp3020=(char)(nctemp3031);
s->a[nctemp3017] =nctemp3020;
int nctemp3043 = n / 10;
n =nctemp3043;
int nctemp3032 = (n > 0);
int nctemp3045=nctemp3032;
while(nctemp3045)
{{
int nctemp3053 = i + 1;
int nctemp3058=s->d[0];int nctemp3063 = nctemp3058 - 1;
int nctemp3046 = (nctemp3053 > nctemp3063);
if(nctemp3046)
{
return 0;
}
int nctemp3077 = i + 1;
i =nctemp3077;
int nctemp3068=i;
int nctemp3084= n;
int nctemp3086= 10;
int nctemp3088=LibeMod(nctemp3084,nctemp3086);
int nctemp3090 = nctemp3088 + 48;
char nctemp3079=(char)(nctemp3090);
s->a[nctemp3068] =nctemp3079;
}
int nctemp3102 = n / 10;
n =nctemp3102;
int nctemp3091 = (n > 0);
nctemp3045=nctemp3091;}int nctemp3104 = (sign < 0);
if(nctemp3104)
{
int nctemp3115 = i + 1;
int nctemp3120=s->d[0];int nctemp3125 = nctemp3120 - 1;
int nctemp3108 = (nctemp3115 > nctemp3125);
if(nctemp3108)
{
return 0;
}
int nctemp3139 = i + 1;
i =nctemp3139;
int nctemp3130=i;
char nctemp3141=(char)(45);
s->a[nctemp3130] =nctemp3141;
}
int nctemp3151 = i + 1;
int nctemp3156=s->d[0];int nctemp3161 = nctemp3156 - 1;
int nctemp3144 = (nctemp3151 > nctemp3161);
if(nctemp3144)
{
return 0;
}
int nctemp3175 = i + 1;
i =nctemp3175;
int nctemp3166=i;
char nctemp3177=(char)(0);
s->a[nctemp3166] =nctemp3177;
nctempchar1* nctemp3181= s;
int nctemp3184=LibeStrev(nctemp3181);
return 1;
}
int LibeItoh (int n,nctempchar1 *s)
{
int i;
int sign;
sign =n;
int nctemp3186 = (sign < 0);
if(nctemp3186)
{
int nctemp3197= -n;
n =nctemp3197;
}
i = 0;
int nctemp3201= n;
int nctemp3203= 16;
int nctemp3205=LibeMod(nctemp3201,nctemp3203);
int nctemp3198 = (nctemp3205 <= 9);
if(nctemp3198)
{
int nctemp3210=0;
int nctemp3218= n;
int nctemp3220= 16;
int nctemp3222=LibeMod(nctemp3218,nctemp3220);
int nctemp3224 = nctemp3222 + 48;
char nctemp3213=(char)(nctemp3224);
s->a[nctemp3210] =nctemp3213;
}
else{
int nctemp3228=0;
int nctemp3239= n;
int nctemp3241= 16;
int nctemp3243=LibeMod(nctemp3239,nctemp3241);
int nctemp3245 = nctemp3243 + 'a';
int nctemp3247 = nctemp3245 - 10;
char nctemp3231=(char)(nctemp3247);
s->a[nctemp3228] =nctemp3231;
}
int nctemp3259 = n / 16;
n =nctemp3259;
int nctemp3248 = (n > 0);
int nctemp3261=nctemp3248;
while(nctemp3261)
{{
int nctemp3265= n;
int nctemp3267= 16;
int nctemp3269=LibeMod(nctemp3265,nctemp3267);
int nctemp3262 = (nctemp3269 <= 9);
if(nctemp3262)
{
int nctemp3283 = i + 1;
i =nctemp3283;
int nctemp3274=i;
int nctemp3290= n;
int nctemp3292= 16;
int nctemp3294=LibeMod(nctemp3290,nctemp3292);
int nctemp3296 = nctemp3294 + 48;
char nctemp3285=(char)(nctemp3296);
s->a[nctemp3274] =nctemp3285;
}
else{
int nctemp3309 = i + 1;
i =nctemp3309;
int nctemp3300=i;
int nctemp3319= n;
int nctemp3321= 16;
int nctemp3323=LibeMod(nctemp3319,nctemp3321);
int nctemp3325 = nctemp3323 + 'a';
int nctemp3327 = nctemp3325 - 10;
char nctemp3311=(char)(nctemp3327);
s->a[nctemp3300] =nctemp3311;
}
}
int nctemp3339 = n / 16;
n =nctemp3339;
int nctemp3328 = (n > 0);
nctemp3261=nctemp3328;}int nctemp3341 = (sign < 0);
if(nctemp3341)
{
int nctemp3357 = i + 1;
i =nctemp3357;
int nctemp3348=i;
char nctemp3359=(char)(45);
s->a[nctemp3348] =nctemp3359;
}
int nctemp3374 = i + 1;
i =nctemp3374;
int nctemp3365=i;
char nctemp3376=(char)(0);
s->a[nctemp3365] =nctemp3376;
nctempchar1* nctemp3380= s;
int nctemp3383=LibeStrev(nctemp3380);
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
int nctemp3388=i;
char nctemp3391=(char)(' ');
int nctemp3385 = (s->a[nctemp3388] ==nctemp3391);
int nctemp3394=nctemp3385;
while(nctemp3394)
{{
int nctemp3403 = i + 1;
i =nctemp3403;
}
int nctemp3407=i;
char nctemp3410=(char)(' ');
int nctemp3404 = (s->a[nctemp3407] ==nctemp3410);
nctemp3394=nctemp3404;}int nctemp3419=i;
char nctemp3422=(char)('+');
int nctemp3416 = (s->a[nctemp3419] ==nctemp3422);
int nctemp3429=i;
char nctemp3432=(char)('-');
int nctemp3426 = (s->a[nctemp3429] ==nctemp3432);
int nctemp3413 = (nctemp3416 || nctemp3426);
if(nctemp3413)
{
int nctemp3438=i;
char nctemp3441=(char)('-');
int nctemp3435 = (s->a[nctemp3438] ==nctemp3441);
if(nctemp3435)
{
int nctemp3447= -1;
sign =nctemp3447;
}
int nctemp3456 = i + 1;
i =nctemp3456;
}
int nctemp3463=i;
int nctemp3460=(int)(s->a[nctemp3463]);
int nctemp3458= nctemp3460;
int nctemp3465=LibeIsdigit(nctemp3458);
int nctemp3466=nctemp3465;
while(nctemp3466)
{{
float nctemp3478 = 10.0 * val;
int nctemp3488=i;
int nctemp3485=(int)(s->a[nctemp3488]);
int nctemp3491 = nctemp3485 - '0';
float nctemp3480=(float)(nctemp3491);
float nctemp3492 = nctemp3478 + nctemp3480;
val =nctemp3492;
int nctemp3501 = i + 1;
i =nctemp3501;
}
int nctemp3508=i;
int nctemp3505=(int)(s->a[nctemp3508]);
int nctemp3503= nctemp3505;
int nctemp3510=LibeIsdigit(nctemp3503);
nctemp3466=nctemp3510;}int nctemp3514=i;
char nctemp3517=(char)('.');
int nctemp3511 = (s->a[nctemp3514] ==nctemp3517);
if(nctemp3511)
{
int nctemp3528 = i + 1;
i =nctemp3528;
int nctemp3535=i;
int nctemp3532=(int)(s->a[nctemp3535]);
int nctemp3530= nctemp3532;
int nctemp3537=LibeIsdigit(nctemp3530);
int nctemp3538=nctemp3537;
while(nctemp3538)
{{
float nctemp3550 = 10.0 * val;
int nctemp3560=i;
int nctemp3557=(int)(s->a[nctemp3560]);
int nctemp3563 = nctemp3557 - '0';
float nctemp3552=(float)(nctemp3563);
float nctemp3564 = nctemp3550 + nctemp3552;
val =nctemp3564;
int nctemp3573 = i + 1;
i =nctemp3573;
float nctemp3582 = 10.0 * power;
power =nctemp3582;
}
int nctemp3589=i;
int nctemp3586=(int)(s->a[nctemp3589]);
int nctemp3584= nctemp3586;
int nctemp3591=LibeIsdigit(nctemp3584);
nctemp3538=nctemp3591;}}
int nctemp3598=i;
char nctemp3601=(char)('e');
int nctemp3595 = (s->a[nctemp3598] ==nctemp3601);
int nctemp3608=i;
char nctemp3611=(char)('E');
int nctemp3605 = (s->a[nctemp3608] ==nctemp3611);
int nctemp3592 = (nctemp3595 || nctemp3605);
if(nctemp3592)
{
int nctemp3622 = i + 1;
i =nctemp3622;
int nctemp3629=i;
char nctemp3632=(char)('+');
int nctemp3626 = (s->a[nctemp3629] ==nctemp3632);
int nctemp3639=i;
char nctemp3642=(char)('-');
int nctemp3636 = (s->a[nctemp3639] ==nctemp3642);
int nctemp3623 = (nctemp3626 || nctemp3636);
if(nctemp3623)
{
int nctemp3648=i;
char nctemp3651=(char)('-');
int nctemp3645 = (s->a[nctemp3648] ==nctemp3651);
if(nctemp3645)
{
int nctemp3657= -1;
esign =nctemp3657;
}
int nctemp3666 = i + 1;
i =nctemp3666;
}
int nctemp3673=i;
int nctemp3670=(int)(s->a[nctemp3673]);
int nctemp3668= nctemp3670;
int nctemp3675=LibeIsdigit(nctemp3668);
int nctemp3676=nctemp3675;
while(nctemp3676)
{{
int nctemp3691 = 10 * exponent;
int nctemp3696=i;
int nctemp3693=(int)(s->a[nctemp3696]);
int nctemp3698 = nctemp3691 + nctemp3693;
int nctemp3700 = nctemp3698 - '0';
exponent =nctemp3700;
int nctemp3709 = i + 1;
i =nctemp3709;
}
int nctemp3716=i;
int nctemp3713=(int)(s->a[nctemp3716]);
int nctemp3711= nctemp3713;
int nctemp3718=LibeIsdigit(nctemp3711);
nctemp3676=nctemp3718;}}
float nctemp3727=(float)(sign);
float nctemp3731 = nctemp3727 * val;
float nctemp3733=(float)(power);
float nctemp3736 = nctemp3731 / nctemp3733;
float nctemp3720= nctemp3736;
int nctemp3742 = esign * exponent;
int nctemp3737= nctemp3742;
float nctemp3743=LibeFscale(nctemp3720,nctemp3737);
return nctemp3743;
}
int LibeFtoaf (int mant,int nexp,int nfield,int nfrac,nctempchar1 *s)
{
nctempchar1 *t;
int sign;
int i;
int tp;
int l;
int nctemp3744 = (mant < 0);
if(nctemp3744)
{
int nctemp3751= -1;
sign =nctemp3751;
int nctemp3755= -mant;
mant =nctemp3755;
}
else{
sign =1;
}
int nctemp3763=s->d[0];int nctemp3772 = nfield + 1;
int nctemp3760 = (nctemp3763 < nctemp3772);
if(nctemp3760)
{
return 0;
}
l = (((nexp + 1) + 1) + nfrac);
int nctemp3774 = (sign < 0);
if(nctemp3774)
{
int nctemp3786 = l + 1;
l =nctemp3786;
}
int nctemp3787 = (nfield < l);
if(nctemp3787)
{
i =0;
int nctemp3795 = (i < nfield);
while(nctemp3795){
{
int nctemp3802=i;
char nctemp3805=(char)('*');
s->a[nctemp3802] =nctemp3805;
}
int nctemp3816 = i + 1;
i =nctemp3816;
int nctemp3817 = (i < nfield);
nctemp3795=nctemp3817;
}
int nctemp3824=nfield;
char nctemp3827=(char)(0);
s->a[nctemp3824] =nctemp3827;
return 0;
}
else{
int nctemp3839 = nfield - l;
tp =nctemp3839;
}
int nctemp3851 = 6 + 1;
int nctemp3846=nctemp3851;
nctempchar1 *nctemp3845;
nctemp3845=(nctempchar1*)RunMalloc(sizeof(nctempchar1));
int nctemp3856 = 6 + 1;
nctemp3845->d[0]=nctemp3856;
nctemp3845->a=(char *)RunMalloc(sizeof(char)*nctemp3846);
t=nctemp3845;
int nctemp3858= mant;
nctempchar1* nctemp3860= t;
int nctemp3863=LibeItoa(nctemp3858,nctemp3860);
i =0;
int nctemp3868 = (i < tp);
while(nctemp3868){
{
int nctemp3875=i;
char nctemp3878=(char)(' ');
s->a[nctemp3875] =nctemp3878;
}
int nctemp3889 = i + 1;
i =nctemp3889;
int nctemp3890 = (i < tp);
nctemp3868=nctemp3890;
}
int nctemp3894 = (nexp >= 0);
if(nctemp3894)
{
int nctemp3901= -1;
int nctemp3898 = (sign ==nctemp3901);
if(nctemp3898)
{
int nctemp3905=tp;
char nctemp3908=(char)('-');
s->a[nctemp3905] =nctemp3908;
int nctemp3919 = tp + 1;
tp =nctemp3919;
}
i =0;
int nctemp3924 = (i <= nexp);
while(nctemp3924){
{
int nctemp3936 = i + tp;
int nctemp3931=nctemp3936;
int nctemp3938=i;
s->a[nctemp3931] =t->a[nctemp3938];
}
int nctemp3948 = i + 1;
i =nctemp3948;
int nctemp3949 = (i <= nexp);
nctemp3924=nctemp3949;
}
int nctemp3953 = (nfrac > 0);
if(nctemp3953)
{
int nctemp3968 = tp + nexp;
int nctemp3970 = nctemp3968 + 1;
int nctemp3960=nctemp3970;
char nctemp3972=(char)('.');
s->a[nctemp3960] =nctemp3972;
}
i =0;
int nctemp3979 = (i < nfrac);
while(nctemp3979){
{
int nctemp3983 = (mant ==0);
if(nctemp3983)
{
int nctemp4004 = tp + nexp;
int nctemp4006 = nctemp4004 + 1;
int nctemp4008 = nctemp4006 + 1;
int nctemp4010 = nctemp4008 + i;
int nctemp3990=nctemp4010;
char nctemp4012=(char)('0');
s->a[nctemp3990] =nctemp4012;
}
else{
int nctemp4032 = tp + nexp;
int nctemp4034 = nctemp4032 + 1;
int nctemp4036 = nctemp4034 + 1;
int nctemp4038 = nctemp4036 + i;
int nctemp4018=nctemp4038;
int nctemp4048 = nexp + 1;
int nctemp4050 = nctemp4048 + i;
int nctemp4040=nctemp4050;
s->a[nctemp4018] =t->a[nctemp4040];
}
}
int nctemp4059 = i + 1;
i =nctemp4059;
int nctemp4060 = (i < nfrac);
nctemp3979=nctemp4060;
}
int nctemp4064 = (nfrac > 0);
if(nctemp4064)
{
int nctemp4085 = tp + nexp;
int nctemp4087 = nctemp4085 + 1;
int nctemp4089 = nctemp4087 + 1;
int nctemp4091 = nctemp4089 + nfrac;
int nctemp4071=nctemp4091;
char nctemp4093=(char)(0);
s->a[nctemp4071] =nctemp4093;
}
else{
int nctemp4107 = tp + nexp;
int nctemp4109 = nctemp4107 + 1;
int nctemp4099=nctemp4109;
char nctemp4111=(char)(0);
s->a[nctemp4099] =nctemp4111;
}
}
else{
int nctemp4117= -nexp;
nexp =nctemp4117;
int nctemp4121= -1;
int nctemp4118 = (sign ==nctemp4121);
if(nctemp4118)
{
int nctemp4125=tp;
char nctemp4128=(char)('-');
s->a[nctemp4125] =nctemp4128;
int nctemp4139 = tp + 1;
tp =nctemp4139;
}
int nctemp4143=tp;
char nctemp4146=(char)('0');
s->a[nctemp4143] =nctemp4146;
int nctemp4157 = tp + 1;
int nctemp4152=nctemp4157;
char nctemp4159=(char)('.');
s->a[nctemp4152] =nctemp4159;
i =0;
int nctemp4174 = nexp - 1;
int nctemp4166 = (i < nctemp4174);
while(nctemp4166){
{
int nctemp4186 = i + tp;
int nctemp4188 = nctemp4186 + 2;
int nctemp4178=nctemp4188;
char nctemp4190=(char)('0');
s->a[nctemp4178] =nctemp4190;
}
int nctemp4201 = i + 1;
i =nctemp4201;
int nctemp4210 = nexp - 1;
int nctemp4202 = (i < nctemp4210);
nctemp4166=nctemp4202;
}
i =0;
int nctemp4226 = nfrac - nexp;
int nctemp4228 = nctemp4226 + 1;
int nctemp4215 = (i < nctemp4228);
while(nctemp4215){
{
int nctemp4246 = tp + 2;
int nctemp4248 = nctemp4246 + i;
int nctemp4250 = nctemp4248 + nexp;
int nctemp4252 = nctemp4250 - 1;
int nctemp4232=nctemp4252;
int nctemp4254=i;
s->a[nctemp4232] =t->a[nctemp4254];
}
int nctemp4264 = i + 1;
i =nctemp4264;
int nctemp4276 = nfrac - nexp;
int nctemp4278 = nctemp4276 + 1;
int nctemp4265 = (i < nctemp4278);
nctemp4215=nctemp4265;
}
int nctemp4290 = tp + 2;
int nctemp4292 = nctemp4290 + nfrac;
int nctemp4282=nctemp4292;
char nctemp4294=(char)(0);
s->a[nctemp4282] =nctemp4294;
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
int nctemp4298 = (mant < 0);
if(nctemp4298)
{
int nctemp4305= -mant;
mant =nctemp4305;
int nctemp4309= -1;
sign =nctemp4309;
}
else{
sign =1;
}
int nctemp4317=s->d[0];int nctemp4344 = 1 + 1;
int nctemp4346 = nctemp4344 + 1;
int nctemp4348 = nctemp4346 + nfrac;
int nctemp4350 = nctemp4348 + 1;
int nctemp4352 = nctemp4350 + 1;
int nctemp4354 = nctemp4352 + 2;
int nctemp4356 = nctemp4354 + 1;
int nctemp4314 = (nctemp4317 < nctemp4356);
if(nctemp4314)
{
return 0;
}
int nctemp4366=s->d[0];int nctemp4364=nctemp4366;
nctempchar1 *nctemp4363;
nctemp4363=(nctempchar1*)RunMalloc(sizeof(nctempchar1));
int nctemp4371=s->d[0];nctemp4363->d[0]=nctemp4371;
nctemp4363->a=(char *)RunMalloc(sizeof(char)*nctemp4364);
t=nctemp4363;
l = ((((((1 + 1) + nfrac) + 1) + 1) + 2) + 1);
int nctemp4375 = (sign < 0);
if(nctemp4375)
{
int nctemp4387 = l + 1;
l =nctemp4387;
}
int nctemp4388 = (nfield < l);
if(nctemp4388)
{
i =0;
int nctemp4396 = (i < nfield);
while(nctemp4396){
{
int nctemp4403=i;
char nctemp4406=(char)('*');
s->a[nctemp4403] =nctemp4406;
}
int nctemp4417 = i + 1;
i =nctemp4417;
int nctemp4418 = (i < nfield);
nctemp4396=nctemp4418;
}
int nctemp4425=nfield;
char nctemp4428=(char)(0);
s->a[nctemp4425] =nctemp4428;
return 0;
}
else{
int nctemp4440 = nfield - l;
tp =nctemp4440;
}
i =0;
int nctemp4445 = (i < tp);
while(nctemp4445){
{
int nctemp4452=i;
char nctemp4455=(char)(' ');
s->a[nctemp4452] =nctemp4455;
}
int nctemp4466 = i + 1;
i =nctemp4466;
int nctemp4467 = (i < tp);
nctemp4445=nctemp4467;
}
int nctemp4472= mant;
nctempchar1* nctemp4474= t;
int nctemp4477=LibeItoa(nctemp4472,nctemp4474);
int nctemp4478 = (sign < 0);
if(nctemp4478)
{
int nctemp4485=tp;
char nctemp4488=(char)('-');
s->a[nctemp4485] =nctemp4488;
int nctemp4499 = tp + 1;
tp =nctemp4499;
}
s->a[tp] = t->a[0];
int nctemp4508 = tp + 1;
int nctemp4503=nctemp4508;
char nctemp4510=(char)('.');
s->a[nctemp4503] =nctemp4510;
i =0;
int nctemp4517 = (i < nfrac);
while(nctemp4517){
{
int nctemp4532 = tp + 2;
int nctemp4534 = nctemp4532 + i;
int nctemp4524=nctemp4534;
int nctemp4541 = i + 1;
int nctemp4536=nctemp4541;
s->a[nctemp4524] =t->a[nctemp4536];
}
int nctemp4550 = i + 1;
i =nctemp4550;
int nctemp4551 = (i < nfrac);
nctemp4517=nctemp4551;
}
int nctemp4566 = tp + 2;
int nctemp4568 = nctemp4566 + nfrac;
int nctemp4558=nctemp4568;
char nctemp4570=(char)(0);
s->a[nctemp4558] =nctemp4570;
sign = 1;
int nctemp4573 = (nexp < 0);
if(nctemp4573)
{
int nctemp4580= -1;
sign =nctemp4580;
int nctemp4584= -nexp;
nexp =nctemp4584;
}
struct nctempchar1 *nctemp4588;
static struct nctempchar1 nctemp4589 = {{ 2}, (char*)"e\0"};
nctemp4588=&nctemp4589;
nctempchar1* nctemp4586= nctemp4588;
nctempchar1* nctemp4590= s;
int nctemp4593=LibeStrcat(nctemp4586,nctemp4590);
int nctemp4594 = (sign > 0);
if(nctemp4594)
{
struct nctempchar1 *nctemp4601;
static struct nctempchar1 nctemp4602 = {{ 2}, (char*)"+\0"};
nctemp4601=&nctemp4602;
nctempchar1* nctemp4599= nctemp4601;
nctempchar1* nctemp4603= s;
int nctemp4606=LibeStrcat(nctemp4599,nctemp4603);
}
else{
struct nctempchar1 *nctemp4610;
static struct nctempchar1 nctemp4611 = {{ 2}, (char*)"-\0"};
nctemp4610=&nctemp4611;
nctempchar1* nctemp4608= nctemp4610;
nctempchar1* nctemp4612= s;
int nctemp4615=LibeStrcat(nctemp4608,nctemp4612);
}
int nctemp4617= nexp;
nctempchar1* nctemp4619= t;
int nctemp4622=LibeItoa(nctemp4617,nctemp4619);
nctempchar1* nctemp4626= t;
int nctemp4629=LibeStrlen(nctemp4626);
int nctemp4623 = (nctemp4629 ==1);
if(nctemp4623)
{
struct nctempchar1 *nctemp4634;
static struct nctempchar1 nctemp4635 = {{ 2}, (char*)"0\0"};
nctemp4634=&nctemp4635;
nctempchar1* nctemp4632= nctemp4634;
nctempchar1* nctemp4636= s;
int nctemp4639=LibeStrcat(nctemp4632,nctemp4636);
}
nctempchar1* nctemp4641= t;
nctempchar1* nctemp4644= s;
int nctemp4647=LibeStrcat(nctemp4641,nctemp4644);
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
int nctemp4655=s->d[0];int nctemp4660=fmt->d[0];int nctemp4652 = (nctemp4655 < nctemp4660);
if(nctemp4652)
{
return 0;
}
int nctemp4672=fmt->d[0];int nctemp4677 = nctemp4672 - 2;
l =nctemp4677;
p = 0;
q = 0;
int nctemp4685=p;
int nctemp4682=(int)(fmt->a[nctemp4685]);
c =nctemp4682;
int nctemp4687 = (c =='g');
if(nctemp4687)
{
mode ='g';
}
else{
int nctemp4698= c;
int nctemp4700=LibeIsdigit(nctemp4698);
int nctemp4695 = (nctemp4700 ==1);
if(nctemp4695)
{
int nctemp4705= c;
int nctemp4707=LibeIsdigit(nctemp4705);
int nctemp4702 = (nctemp4707 ==1);
int nctemp4709=nctemp4702;
while(nctemp4709)
{{
int nctemp4713=q;
int nctemp4716=p;
s->a[nctemp4713] =fmt->a[nctemp4716];
int nctemp4729 = p + 1;
p =nctemp4729;
int nctemp4718 = (p > l);
if(nctemp4718)
{
return 0;
}
int nctemp4740 = q + 1;
q =nctemp4740;
int nctemp4748=p;
int nctemp4745=(int)(fmt->a[nctemp4748]);
c =nctemp4745;
}
int nctemp4753= c;
int nctemp4755=LibeIsdigit(nctemp4753);
int nctemp4750 = (nctemp4755 ==1);
nctemp4709=nctemp4750;}int nctemp4760=q;
char nctemp4763=(char)(0);
s->a[nctemp4760] =nctemp4763;
nctempchar1* nctemp4770= s;
int nctemp4773=LibeAtoi(nctemp4770);
nfield =nctemp4773;
}
else{
return 0;
}
int nctemp4775 = (c !='.');
if(nctemp4775)
{
return 0;
}
int nctemp4791 = p + 1;
p =nctemp4791;
int nctemp4780 = (p > l);
if(nctemp4780)
{
return 0;
}
int nctemp4801=p;
int nctemp4798=(int)(fmt->a[nctemp4801]);
c =nctemp4798;
q =0;
int nctemp4810= c;
int nctemp4812=LibeIsdigit(nctemp4810);
int nctemp4807 = (nctemp4812 ==1);
if(nctemp4807)
{
int nctemp4817= c;
int nctemp4819=LibeIsdigit(nctemp4817);
int nctemp4814 = (nctemp4819 ==1);
int nctemp4821=nctemp4814;
while(nctemp4821)
{{
int nctemp4825=q;
int nctemp4828=p;
s->a[nctemp4825] =fmt->a[nctemp4828];
int nctemp4841 = p + 1;
p =nctemp4841;
int nctemp4830 = (p > l);
if(nctemp4830)
{
return 0;
}
int nctemp4852 = q + 1;
q =nctemp4852;
int nctemp4860=p;
int nctemp4857=(int)(fmt->a[nctemp4860]);
c =nctemp4857;
}
int nctemp4865= c;
int nctemp4867=LibeIsdigit(nctemp4865);
int nctemp4862 = (nctemp4867 ==1);
nctemp4821=nctemp4862;}int nctemp4872=q;
char nctemp4875=(char)(0);
s->a[nctemp4872] =nctemp4875;
nctempchar1* nctemp4882= s;
int nctemp4885=LibeAtoi(nctemp4882);
nfrac =nctemp4885;
}
else{
return 0;
}
int nctemp4887 = (c =='f');
if(nctemp4887)
{
mode ='f';
}
else{
int nctemp4895 = (c =='e');
if(nctemp4895)
{
mode ='e';
}
else{
return 0;
}
}
}
int nctemp4904 = (mode =='g');
if(nctemp4904)
{
float nctemp4912= f;
int nctemp4914=LibeGetmaxdig(nctemp4912);
nfrac =nctemp4914;
int nctemp4941 = 1 + 1;
int nctemp4943 = nctemp4941 + 1;
int nctemp4945 = nctemp4943 + 1;
int nctemp4947 = nctemp4945 + nfrac;
int nctemp4949 = nctemp4947 + 1;
int nctemp4951 = nctemp4949 + 1;
int nctemp4953 = nctemp4951 + 2;
nfield =nctemp4953;
int nctemp4962 = nfrac + 1;
ndigit =nctemp4962;
float nctemp4967= f;
int nctemp4969= ndigit;
int nctemp4971=LibeGetfman(nctemp4967,nctemp4969);
mant =nctemp4971;
float nctemp4976= f;
int nctemp4978=LibeGetfexp(nctemp4976);
nexp =nctemp4978;
int nctemp4980= mant;
int nctemp4982= nexp;
int nctemp4984= nfield;
int nctemp4986= nfrac;
nctempchar1* nctemp4988= s;
int nctemp4991=LibeFtoae(nctemp4980,nctemp4982,nctemp4984,nctemp4986,nctemp4988);
}
else{
int nctemp4992 = (mode =='e');
if(nctemp4992)
{
int nctemp5004 = nfrac + 1;
ndigit =nctemp5004;
float nctemp5009= f;
int nctemp5011= ndigit;
int nctemp5013=LibeGetfman(nctemp5009,nctemp5011);
mant =nctemp5013;
float nctemp5018= f;
int nctemp5020=LibeGetfexp(nctemp5018);
nexp =nctemp5020;
int nctemp5022= mant;
int nctemp5024= nexp;
int nctemp5026= nfield;
int nctemp5028= nfrac;
nctempchar1* nctemp5030= s;
int nctemp5033=LibeFtoae(nctemp5022,nctemp5024,nctemp5026,nctemp5028,nctemp5030);
}
else{
int nctemp5034 = (mode =='f');
if(nctemp5034)
{
float nctemp5042= f;
int nctemp5044=LibeGetfexp(nctemp5042);
nexp =nctemp5044;
int nctemp5056 = nexp + nfrac;
int nctemp5058 = nctemp5056 + 1;
ndigit =nctemp5058;
float nctemp5063= f;
int nctemp5065= ndigit;
int nctemp5067=LibeGetfman(nctemp5063,nctemp5065);
mant =nctemp5067;
int nctemp5069= mant;
int nctemp5071= nexp;
int nctemp5073= nfield;
int nctemp5075= nfrac;
nctempchar1* nctemp5077= s;
int nctemp5080=LibeFtoaf(nctemp5069,nctemp5071,nctemp5073,nctemp5075,nctemp5077);
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
struct nctempLibeFdescr1 *LibeFarr;
nctempchar1 *LibeTmpstr;
int LibeIoinit ()
{
int i;
int nctemp5088=40;
struct nctempLibeFdescr1 *nctemp5087;
nctemp5087=(struct nctempLibeFdescr1*)RunMalloc(sizeof(struct nctempLibeFdescr1));
nctemp5087->d[0]=40;
nctemp5087->a=(struct LibeFdescr*)RunMalloc(sizeof(struct LibeFdescr)*nctemp5088);
LibeFarr=nctemp5087;
nctempLibeFdescr1 *nctemp5092 =LibeFarr;
int nctemp5091 =(nctemp5092==0);
if(nctemp5091)
{
LibeErrno =(-100);
return 0;
}
i =0;
int nctemp5105 = (i < 40);
while(nctemp5105){
{
int nctemp5112=i;
LibeFarr->a[nctemp5112].cnt =0;
int nctemp5118=i;
LibeFarr->a[nctemp5118].ptr =0;
int nctemp5124=i;
LibeFarr->a[nctemp5124].bufsize =0;
int nctemp5130=i;
LibeFarr->a[nctemp5130].base=(0);
int nctemp5137=i;
LibeFarr->a[nctemp5137].readflg =0;
int nctemp5143=i;
LibeFarr->a[nctemp5143].writflg =0;
int nctemp5149=i;
LibeFarr->a[nctemp5149].unbflg =0;
int nctemp5155=i;
LibeFarr->a[nctemp5155].errflg =1;
int nctemp5161=i;
LibeFarr->a[nctemp5161].eoflg =0;
int nctemp5167=i;
LibeFarr->a[nctemp5167].fd =0;
}
int nctemp5178 = i + 1;
i =nctemp5178;
int nctemp5179 = (i < 40);
nctemp5105=nctemp5179;
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
int nctemp5189=64;
nctempchar1 *nctemp5188;
nctemp5188=(nctempchar1*)RunMalloc(sizeof(nctempchar1));
nctemp5188->d[0]=64;
nctemp5188->a=(char *)RunMalloc(sizeof(char)*nctemp5189);
LibeTmpstr=nctemp5188;
nctempchar1 *nctemp5193 =LibeTmpstr;
int nctemp5192 =(nctemp5193==0);
if(nctemp5192)
{
LibeErrno =(-100);
return 0;
}
return 1;
}
int LibeFlushbuff (int fp)
{
int st;
int size;
int nctemp5206=fp;
int nctemp5203 = (LibeFarr->a[nctemp5206].writflg !=1);
if(nctemp5203)
{
struct nctempchar1 *nctemp5214;
static struct nctempchar1 nctemp5215 = {{ 28}, (char*)"file not open for writing\n\0"};
nctemp5214=&nctemp5215;
LibeErrstr=nctemp5214;
LibeErrno =(-110);
return 0;
}
int nctemp5224=fp;
int nctemp5221 = (LibeFarr->a[nctemp5224].unbflg ==1);
if(nctemp5221)
{
int nctemp5230=fp;
LibeFarr->a[nctemp5230].bufsize =1;
}
else{
int nctemp5236=fp;
LibeFarr->a[nctemp5236].bufsize =1024;
}
int nctemp5242=fp;
nctempchar1 *nctemp5240 =LibeFarr->a[nctemp5242].base;
int nctemp5239 =(nctemp5240==0);
if(nctemp5239)
{
int nctemp5250=fp;
size =LibeFarr->a[nctemp5250].bufsize;
int nctemp5258=fp;
int nctemp5263=size;
nctempchar1 *nctemp5262;
nctemp5262=(nctempchar1*)RunMalloc(sizeof(nctempchar1));
nctemp5262->d[0]=size;
nctemp5262->a=(char *)RunMalloc(sizeof(char)*nctemp5263);
LibeFarr->a[nctemp5258].base=nctemp5262;
nctempchar1 *nctemp5253 =LibeFarr->a[nctemp5258].base;
int nctemp5252 =(nctemp5253==0);
if(nctemp5252)
{
struct nctempchar1 *nctemp5272;
static struct nctempchar1 nctemp5273 = {{ 24}, (char*)"can not allocate buffer\0"};
nctemp5272=&nctemp5273;
LibeErrstr=nctemp5272;
LibeErrno =(-113);
return 0;
}
}
LibeFarr->a[fp].ptr = 0;
int nctemp5285=fp;
int nctemp5283= LibeFarr->a[nctemp5285].fd;
int nctemp5289=fp;
int nctemp5287= LibeFarr->a[nctemp5289].cnt;
int nctemp5293=fp;
nctempchar1* nctemp5291= LibeFarr->a[nctemp5293].base;
int nctemp5296=RunWrite(nctemp5283,nctemp5287,nctemp5291);
st =nctemp5296;
int nctemp5301=fp;
int nctemp5297 = (st !=LibeFarr->a[nctemp5301].cnt);
if(nctemp5297)
{
int nctemp5306=fp;
LibeFarr->a[nctemp5306].errflg =1;
struct nctempchar1 *nctemp5314;
static struct nctempchar1 nctemp5315 = {{ 12}, (char*)"write error\0"};
nctemp5314=&nctemp5315;
LibeErrstr=nctemp5314;
LibeErrno =(-112);
int nctemp5323=fp;
LibeFarr->a[nctemp5323].cnt =0;
int nctemp5329=fp;
LibeFarr->a[nctemp5329].ptr =0;
return 0;
}
else{
int nctemp5336=fp;
LibeFarr->a[nctemp5336].cnt =0;
int nctemp5342=fp;
LibeFarr->a[nctemp5342].ptr =0;
return 1;
}
}
int LibeFillbuff (int fp)
{
int size;
int rval;
int nctemp5349=fp;
int nctemp5346 = (LibeFarr->a[nctemp5349].readflg !=1);
if(nctemp5346)
{
struct nctempchar1 *nctemp5357;
static struct nctempchar1 nctemp5358 = {{ 28}, (char*)"file not open for reading\n\0"};
nctemp5357=&nctemp5358;
LibeErrstr=nctemp5357;
LibeErrno =(-110);
return (-1);
}
int nctemp5367=fp;
int nctemp5364 = (LibeFarr->a[nctemp5367].unbflg ==1);
if(nctemp5364)
{
int nctemp5373=fp;
LibeFarr->a[nctemp5373].bufsize =1;
}
else{
int nctemp5379=fp;
LibeFarr->a[nctemp5379].bufsize =1024;
}
int nctemp5385=fp;
nctempchar1 *nctemp5383 =LibeFarr->a[nctemp5385].base;
int nctemp5382 =(nctemp5383==0);
if(nctemp5382)
{
int nctemp5393=fp;
size =LibeFarr->a[nctemp5393].bufsize;
int nctemp5401=fp;
int nctemp5406=size;
nctempchar1 *nctemp5405;
nctemp5405=(nctempchar1*)RunMalloc(sizeof(nctempchar1));
nctemp5405->d[0]=size;
nctemp5405->a=(char *)RunMalloc(sizeof(char)*nctemp5406);
LibeFarr->a[nctemp5401].base=nctemp5405;
nctempchar1 *nctemp5396 =LibeFarr->a[nctemp5401].base;
int nctemp5395 =(nctemp5396==0);
if(nctemp5395)
{
struct nctempchar1 *nctemp5415;
static struct nctempchar1 nctemp5416 = {{ 24}, (char*)"Can not allocate buffer\0"};
nctemp5415=&nctemp5416;
LibeErrstr=nctemp5415;
LibeErrno =(-113);
return (-1);
}
}
LibeFarr->a[fp].ptr = 0;
int nctemp5425=fp;
int nctemp5430=fp;
int nctemp5428= LibeFarr->a[nctemp5430].fd;
int nctemp5434=fp;
int nctemp5432= LibeFarr->a[nctemp5434].bufsize;
int nctemp5438=fp;
nctempchar1* nctemp5436= LibeFarr->a[nctemp5438].base;
int nctemp5441=RunRead(nctemp5428,nctemp5432,nctemp5436);
LibeFarr->a[nctemp5425].cnt =nctemp5441;
int nctemp5445=fp;
int nctemp5442 = (LibeFarr->a[nctemp5445].cnt <= 0);
if(nctemp5442)
{
int nctemp5451=fp;
int nctemp5448 = (LibeFarr->a[nctemp5451].cnt ==(-1));
if(nctemp5448)
{
int nctemp5457=fp;
LibeFarr->a[nctemp5457].eoflg =1;
rval =(-1);
}
else{
int nctemp5467=fp;
LibeFarr->a[nctemp5467].errflg =1;
struct nctempchar1 *nctemp5475;
static struct nctempchar1 nctemp5476 = {{ 11}, (char*)"read error\0"};
nctemp5475=&nctemp5476;
LibeErrstr=nctemp5475;
LibeErrno =(-111);
rval =(-1);
}
int nctemp5488=fp;
LibeFarr->a[nctemp5488].cnt =0;
return rval;
}
LibeFarr->a[fp].ptr = (LibeFarr->a[fp].ptr + 1);
LibeFarr->a[fp].cnt = (LibeFarr->a[fp].cnt - 1);
int nctemp5496=fp;
int nctemp5502=fp;
int nctemp5505 = LibeFarr->a[nctemp5502].ptr - 1;
int nctemp5498=nctemp5505;
int nctemp5493=(int)(LibeFarr->a[nctemp5496].base->a[nctemp5498]);
return nctemp5493;
}
int LibeFlush (int fp)
{
int nctemp5507= fp;
int nctemp5509=LibeFlushbuff(nctemp5507);
return nctemp5509;
}
int LibeOpen (nctempchar1 *name,nctempchar1 *mode)
{
int fd;
int slot;
int i;
int nctemp5513=0;
char nctemp5516=(char)('r');
int nctemp5510 = (mode->a[nctemp5513] !=nctemp5516);
if(nctemp5510)
{
int nctemp5522=0;
char nctemp5525=(char)('w');
int nctemp5519 = (mode->a[nctemp5522] !=nctemp5525);
if(nctemp5519)
{
int nctemp5531=0;
char nctemp5534=(char)('a');
int nctemp5528 = (mode->a[nctemp5531] !=nctemp5534);
if(nctemp5528)
{
struct nctempchar1 *nctemp5542;
static struct nctempchar1 nctemp5543 = {{ 20}, (char*)"Unknown file mode\n\0"};
nctemp5542=&nctemp5543;
LibeErrstr=nctemp5542;
LibeErrno =(-103);
return 0;
}
}
}
i = 0;
slot =  -1;
int nctemp5552 = (slot < 0);
int nctemp5557 = (i < 40);
int nctemp5549 = (nctemp5552 && nctemp5557);
int nctemp5561=nctemp5549;
while(nctemp5561)
{{
int nctemp5568=i;
int nctemp5565 = (LibeFarr->a[nctemp5568].readflg ==0);
int nctemp5575=i;
int nctemp5572 = (LibeFarr->a[nctemp5575].writflg ==0);
int nctemp5562 = (nctemp5565 && nctemp5572);
if(nctemp5562)
{
slot =i;
}
int nctemp5590 = i + 1;
i =nctemp5590;
}
int nctemp5594 = (slot < 0);
int nctemp5599 = (i < 40);
int nctemp5591 = (nctemp5594 && nctemp5599);
nctemp5561=nctemp5591;}int nctemp5603 = (slot < 0);
if(nctemp5603)
{
struct nctempchar1 *nctemp5612;
static struct nctempchar1 nctemp5613 = {{ 22}, (char*)"Too many open files\n\0"};
nctemp5612=&nctemp5613;
LibeErrstr=nctemp5612;
LibeErrno =(-104);
return 0;
}
int nctemp5625=0;
int nctemp5622=(int)(mode->a[nctemp5625]);
int nctemp5619 = (nctemp5622 =='w');
if(nctemp5619)
{
nctempchar1* nctemp5632= name;
int nctemp5635=RunCreate(nctemp5632);
fd =nctemp5635;
}
else{
int nctemp5642=0;
int nctemp5639=(int)(mode->a[nctemp5642]);
int nctemp5636 = (nctemp5639 =='a');
if(nctemp5636)
{
nctempchar1* nctemp5652= name;
nctempchar1* nctemp5655= mode;
int nctemp5658=RunOpen(nctemp5652,nctemp5655);
fd =nctemp5658;
int nctemp5645 = (fd ==0);
if(nctemp5645)
{
nctempchar1* nctemp5664= name;
int nctemp5667=RunCreate(nctemp5664);
fd =nctemp5667;
}
else{
nctempchar1* nctemp5672= name;
nctempchar1* nctemp5675= mode;
int nctemp5678=RunOpen(nctemp5672,nctemp5675);
fd =nctemp5678;
}
}
else{
int nctemp5685=0;
int nctemp5682=(int)(mode->a[nctemp5685]);
int nctemp5679 = (nctemp5682 =='r');
if(nctemp5679)
{
nctempchar1* nctemp5692= name;
nctempchar1* nctemp5695= mode;
int nctemp5698=RunOpen(nctemp5692,nctemp5695);
fd =nctemp5698;
}
else{
struct nctempchar1 *nctemp5704;
static struct nctempchar1 nctemp5705 = {{ 20}, (char*)"Unknown file mode\n\0"};
nctemp5704=&nctemp5705;
LibeErrstr=nctemp5704;
LibeErrno =(-103);
return 0;
}
}
}
int nctemp5711 = (fd ==0);
if(nctemp5711)
{
struct nctempchar1 *nctemp5720;
static struct nctempchar1 nctemp5721 = {{ 20}, (char*)"Could not open file\0"};
nctemp5720=&nctemp5721;
LibeErrstr=nctemp5720;
LibeErrno =(-105);
return 0;
}
LibeFarr->a[slot].fd = fd;
LibeFarr->a[slot].cnt = 0;
LibeFarr->a[slot].base  = 0;
int nctemp5733=0;
int nctemp5730=(int)(mode->a[nctemp5733]);
int nctemp5727 = (nctemp5730 =='r');
if(nctemp5727)
{
int nctemp5739=slot;
LibeFarr->a[nctemp5739].readflg =1;
}
else{
int nctemp5745=slot;
LibeFarr->a[nctemp5745].writflg =1;
}
return slot;
}
int LibeClose (int fp)
{
int fd;
int stat;
int nctemp5752=fp;
nctempchar1 *nctemp5750 =LibeFarr->a[nctemp5752].base;
int nctemp5749 =(nctemp5750!=0);
if(nctemp5749)
{
int nctemp5757= fp;
int nctemp5759=LibeFlush(nctemp5757);
}
fd = LibeFarr->a[fp].fd;
int nctemp5764= fd;
int nctemp5766=RunClose(nctemp5764);
stat =nctemp5766;
int nctemp5767 = (stat ==0);
if(nctemp5767)
{
int nctemp5774=fp;
LibeFarr->a[nctemp5774].errflg =1;
struct nctempchar1 *nctemp5782;
static struct nctempchar1 nctemp5783 = {{ 21}, (char*)"Could not close file\0"};
nctemp5782=&nctemp5783;
LibeErrstr=nctemp5782;
LibeErrno =(-106);
return 0;
}
LibeFarr->a[fp].cnt = 0;
LibeFarr->a[fp].ptr = 0;
LibeFarr->a[fp].bufsize = 0;
int nctemp5792=fp;
nctempchar1 *nctemp5790 =LibeFarr->a[nctemp5792].base;
int nctemp5789 =(nctemp5790!=0);
if(nctemp5789)
{
int nctemp5798=fp;
RunFree(LibeFarr->a[nctemp5798].base->a);
RunFree(LibeFarr->a[nctemp5798].base);
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
int nctemp5805=fp;
int nctemp5802 = (LibeFarr->a[nctemp5805].cnt ==0);
if(nctemp5802)
{
int nctemp5809= fp;
int nctemp5811=LibeFillbuff(nctemp5809);
return nctemp5811;
}
else{
int nctemp5815=fp;
int nctemp5821=fp;
int nctemp5824 = LibeFarr->a[nctemp5821].cnt - 1;
LibeFarr->a[nctemp5815].cnt =nctemp5824;
int nctemp5828=fp;
int nctemp5834=fp;
int nctemp5837 = LibeFarr->a[nctemp5834].ptr + 1;
LibeFarr->a[nctemp5828].ptr =nctemp5837;
int nctemp5842=fp;
int nctemp5848=fp;
int nctemp5851 = LibeFarr->a[nctemp5848].ptr - 1;
int nctemp5844=nctemp5851;
int nctemp5839=(int)(LibeFarr->a[nctemp5842].base->a[nctemp5844]);
return nctemp5839;
}
}
int LibeUngetc (int fp)
{
int nctemp5855=fp;
int nctemp5852 = (LibeFarr->a[nctemp5855].eoflg ==1);
if(nctemp5852)
{
return (-1);
}
int nctemp5862=fp;
int nctemp5865=fp;
int nctemp5859 = (LibeFarr->a[nctemp5862].cnt < LibeFarr->a[nctemp5865].bufsize);
if(nctemp5859)
{
int nctemp5870=fp;
int nctemp5876=fp;
int nctemp5879 = LibeFarr->a[nctemp5876].cnt + 1;
LibeFarr->a[nctemp5870].cnt =nctemp5879;
int nctemp5883=fp;
int nctemp5889=fp;
int nctemp5892 = LibeFarr->a[nctemp5889].ptr - 1;
LibeFarr->a[nctemp5883].ptr =nctemp5892;
int nctemp5896=fp;
int nctemp5902=fp;
int nctemp5905 = LibeFarr->a[nctemp5902].bufsize - 1;
int nctemp5893 = (LibeFarr->a[nctemp5896].ptr ==nctemp5905);
if(nctemp5893)
{
int nctemp5910=fp;
int nctemp5914=fp;
int nctemp5912=LibeFarr->a[nctemp5914].ptr;
int nctemp5907=(int)(LibeFarr->a[nctemp5910].base->a[nctemp5912]);
return nctemp5907;
}
else{
int nctemp5920=fp;
int nctemp5926=fp;
int nctemp5929 = LibeFarr->a[nctemp5926].ptr + 1;
int nctemp5922=nctemp5929;
int nctemp5917=(int)(LibeFarr->a[nctemp5920].base->a[nctemp5922]);
return nctemp5917;
}
}
else{
struct nctempchar1 *nctemp5935;
static struct nctempchar1 nctemp5936 = {{ 15}, (char*)"Pushback error\0"};
nctemp5935=&nctemp5936;
LibeErrstr=nctemp5935;
LibeErrno =(-107);
return (-1);
}
}
int LibeGetw (int fp,nctempchar1 *text)
{
int p;
int ch;
int lim;
int nctemp5946=text->d[0];lim =nctemp5946;
p = 0;
int nctemp5951=LibeClearerr();
int nctemp5965= fp;
int nctemp5967=LibeGetc(nctemp5965);
ch =nctemp5967;
int nctemp5958 = (ch ==32);
int nctemp5970 = (ch ==9);
int nctemp5955 = (nctemp5958 || nctemp5970);
int nctemp5975 = (ch ==10);
int nctemp5952 = (nctemp5955 || nctemp5975);
int nctemp5979=nctemp5952;
while(nctemp5979)
{{
p =0;
}
int nctemp5997= fp;
int nctemp5999=LibeGetc(nctemp5997);
ch =nctemp5999;
int nctemp5990 = (ch ==32);
int nctemp6002 = (ch ==9);
int nctemp5987 = (nctemp5990 || nctemp6002);
int nctemp6007 = (ch ==10);
int nctemp5984 = (nctemp5987 || nctemp6007);
nctemp5979=nctemp5984;}int nctemp6012= fp;
int nctemp6014=LibeUngetc(nctemp6012);
int nctemp6025= fp;
int nctemp6027=LibeGetc(nctemp6025);
ch =nctemp6027;
int nctemp6018 = (ch !=(-1));
int nctemp6030 = (p < lim);
int nctemp6015 = (nctemp6018 && nctemp6030);
int nctemp6034=nctemp6015;
while(nctemp6034)
{{
int nctemp6041 = (ch ==32);
int nctemp6046 = (ch ==9);
int nctemp6038 = (nctemp6041 || nctemp6046);
int nctemp6051 = (ch ==10);
int nctemp6035 = (nctemp6038 || nctemp6051);
if(nctemp6035)
{
int nctemp6056= fp;
int nctemp6058=LibeUngetc(nctemp6056);
int nctemp6062=p;
char nctemp6065=(char)(0);
text->a[nctemp6062] =nctemp6065;
return 1;
}
else{
int nctemp6072=p;
char nctemp6075=(char)(ch);
text->a[nctemp6072] =nctemp6075;
int nctemp6086 = p + 1;
p =nctemp6086;
}
}
int nctemp6097= fp;
int nctemp6099=LibeGetc(nctemp6097);
ch =nctemp6099;
int nctemp6090 = (ch !=(-1));
int nctemp6102 = (p < lim);
int nctemp6087 = (nctemp6090 && nctemp6102);
nctemp6034=nctemp6087;}int nctemp6106 = (p >= lim);
if(nctemp6106)
{
return 0;
}
else{
int nctemp6111 = (ch ==(-1));
if(nctemp6111)
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
int nctemp6120=fp;
int nctemp6117 = (LibeFarr->a[nctemp6120].cnt ==0);
if(nctemp6117)
{
int nctemp6124= fp;
int nctemp6126=LibeFlushbuff(nctemp6124);
}
int nctemp6130=fp;
int nctemp6133=fp;
int nctemp6127 = (LibeFarr->a[nctemp6130].cnt ==LibeFarr->a[nctemp6133].bufsize);
if(nctemp6127)
{
int nctemp6139= fp;
int nctemp6141=LibeFlushbuff(nctemp6139);
rval =nctemp6141;
int nctemp6145=fp;
int nctemp6149=fp;
int nctemp6147=LibeFarr->a[nctemp6149].ptr;
char nctemp6152=(char)(c);
LibeFarr->a[nctemp6145].base->a[nctemp6147] =nctemp6152;
int nctemp6158=fp;
int nctemp6164=fp;
int nctemp6167 = LibeFarr->a[nctemp6164].ptr + 1;
LibeFarr->a[nctemp6158].ptr =nctemp6167;
int nctemp6171=fp;
int nctemp6177=fp;
int nctemp6180 = LibeFarr->a[nctemp6177].cnt + 1;
LibeFarr->a[nctemp6171].cnt =nctemp6180;
return rval;
}
else{
int nctemp6185=fp;
int nctemp6189=fp;
int nctemp6187=LibeFarr->a[nctemp6189].ptr;
char nctemp6192=(char)(c);
LibeFarr->a[nctemp6185].base->a[nctemp6187] =nctemp6192;
int nctemp6198=fp;
int nctemp6204=fp;
int nctemp6207 = LibeFarr->a[nctemp6204].cnt + 1;
LibeFarr->a[nctemp6198].cnt =nctemp6207;
int nctemp6211=fp;
int nctemp6217=fp;
int nctemp6220 = LibeFarr->a[nctemp6217].ptr + 1;
LibeFarr->a[nctemp6211].ptr =nctemp6220;
return 1;
}
}
int LibePuts (int fp,nctempchar1 *s)
{
int ls;
int i;
int nctemp6226=s->d[0];ls =nctemp6226;
i = 0;
int nctemp6239=i;
int nctemp6236=(int)(s->a[nctemp6239]);
int nctemp6233 = (nctemp6236 !=0);
int nctemp6243 = (i < ls);
int nctemp6230 = (nctemp6233 && nctemp6243);
int nctemp6247=nctemp6230;
while(nctemp6247)
{{
int nctemp6251= fp;
int nctemp6258=i;
int nctemp6255=(int)(s->a[nctemp6258]);
int nctemp6253= nctemp6255;
int nctemp6260=LibePutc(nctemp6251,nctemp6253);
int nctemp6248 = (nctemp6260 ==0);
if(nctemp6248)
{
struct nctempchar1 *nctemp6267;
static struct nctempchar1 nctemp6268 = {{ 12}, (char*)"write error\0"};
nctemp6267=&nctemp6268;
LibeErrstr=nctemp6267;
LibeErrno =0;
return 0;
}
else{
int nctemp6282 = i + 1;
i =nctemp6282;
}
}
int nctemp6292=i;
int nctemp6289=(int)(s->a[nctemp6292]);
int nctemp6286 = (nctemp6289 !=0);
int nctemp6296 = (i < ls);
int nctemp6283 = (nctemp6286 && nctemp6296);
nctemp6247=nctemp6283;}int nctemp6301= fp;
int nctemp6303=LibeFlushbuff(nctemp6301);
return 1;
}
int LibePuti (int fp,int ival)
{
int nctemp6306= ival;
nctempchar1* nctemp6308= LibeTmpstr;
int nctemp6311=LibeItoa(nctemp6306,nctemp6308);
int nctemp6313= fp;
nctempchar1* nctemp6315= LibeTmpstr;
int nctemp6318=LibePuts(nctemp6313,nctemp6315);
return nctemp6318;
}
int LibePutf (int fp,float fval,nctempchar1 *form)
{
float nctemp6320= fval;
nctempchar1* nctemp6322= form;
nctempchar1* nctemp6325= LibeTmpstr;
int nctemp6328=LibeFtoa(nctemp6320,nctemp6322,nctemp6325);
int nctemp6330= fp;
nctempchar1* nctemp6332= LibeTmpstr;
int nctemp6335=LibePuts(nctemp6330,nctemp6332);
return nctemp6335;
}
int LibePs (nctempchar1 *s)
{
int nctemp6337= 3;
nctempchar1* nctemp6339= s;
int nctemp6342=LibePuts(nctemp6337,nctemp6339);
return 1;
}
int LibePi (int n)
{
int nctemp6345= 3;
int nctemp6347= n;
int nctemp6349=LibePuti(nctemp6345,nctemp6347);
return 1;
}
int LibePf (float r)
{
int nctemp6352= 3;
float nctemp6354= r;
struct nctempchar1 *nctemp6358;
static struct nctempchar1 nctemp6359 = {{ 2}, (char*)"g\0"};
nctemp6358=&nctemp6359;
nctempchar1* nctemp6356= nctemp6358;
int nctemp6360=LibePutf(nctemp6352,nctemp6354,nctemp6356);
return 1;
}
int LibeRead (int fp,int n,nctempchar1 *buffer)
{
int rval;
int nctemp6365=fp;
int nctemp6362 = (LibeFarr->a[nctemp6365].readflg !=1);
if(nctemp6362)
{
struct nctempchar1 *nctemp6373;
static struct nctempchar1 nctemp6374 = {{ 26}, (char*)"File not open for reading\0"};
nctemp6373=&nctemp6374;
LibeErrstr=nctemp6373;
LibeErrno =(-109);
return (-1);
}
int nctemp6384=buffer->d[0];int nctemp6380 = (n > nctemp6384);
if(nctemp6380)
{
LibeErrno =(-108);
struct nctempchar1 *nctemp6397;
static struct nctempchar1 nctemp6398 = {{ 30}, (char*)"The buffer array is too small\0"};
nctemp6397=&nctemp6398;
LibeErrstr=nctemp6397;
return 0;
}
int nctemp6406=fp;
int nctemp6404= LibeFarr->a[nctemp6406].fd;
int nctemp6408= n;
nctempchar1* nctemp6410= buffer;
int nctemp6413=RunRead(nctemp6404,nctemp6408,nctemp6410);
rval =nctemp6413;
int nctemp6414 = (rval ==(-1));
if(nctemp6414)
{
int nctemp6421=fp;
LibeFarr->a[nctemp6421].eoflg =1;
rval =(-1);
}
else{
int nctemp6428 = (rval ==0);
if(nctemp6428)
{
int nctemp6435=fp;
LibeFarr->a[nctemp6435].errflg =1;
struct nctempchar1 *nctemp6443;
static struct nctempchar1 nctemp6444 = {{ 11}, (char*)"read error\0"};
nctemp6443=&nctemp6444;
LibeErrstr=nctemp6443;
LibeErrno =0;
int nctemp6452=fp;
LibeFarr->a[nctemp6452].errflg =0;
rval =0;
}
}
return rval;
}
int LibeWrite (int fp,int n,nctempchar1 *buffer)
{
int rval;
int nctemp6464=buffer->d[0];int nctemp6460 = (n > nctemp6464);
if(nctemp6460)
{
LibeErrno =(-108);
struct nctempchar1 *nctemp6477;
static struct nctempchar1 nctemp6478 = {{ 30}, (char*)"The buffer array is too small\0"};
nctemp6477=&nctemp6478;
LibeErrstr=nctemp6477;
return 0;
}
int nctemp6483=fp;
int nctemp6480 = (LibeFarr->a[nctemp6483].writflg !=1);
if(nctemp6480)
{
struct nctempchar1 *nctemp6491;
static struct nctempchar1 nctemp6492 = {{ 26}, (char*)"file not open for writing\0"};
nctemp6491=&nctemp6492;
LibeErrstr=nctemp6491;
LibeErrno =(-110);
return 0;
}
int nctemp6504=fp;
int nctemp6502= LibeFarr->a[nctemp6504].fd;
int nctemp6506= n;
nctempchar1* nctemp6508= buffer;
int nctemp6511=RunWrite(nctemp6502,nctemp6506,nctemp6508);
rval =nctemp6511;
int nctemp6512 = (rval ==0);
if(nctemp6512)
{
int nctemp6519=fp;
LibeFarr->a[nctemp6519].errflg =1;
struct nctempchar1 *nctemp6527;
static struct nctempchar1 nctemp6528 = {{ 12}, (char*)"write error\0"};
nctemp6527=&nctemp6528;
LibeErrstr=nctemp6527;
LibeErrno =0;
int nctemp6536=fp;
LibeFarr->a[nctemp6536].errflg =0;
rval =0;
}
return rval;
}
int LibeSeek (int fp,int pos,int flag)
{
int rval;
int nctemp6550=fp;
int nctemp6548= LibeFarr->a[nctemp6550].fd;
int nctemp6552= pos;
int nctemp6554= flag;
int nctemp6556=RunSeek(nctemp6548,nctemp6552,nctemp6554);
rval =nctemp6556;
int nctemp6557 = (rval ==0);
if(nctemp6557)
{
int nctemp6564=fp;
LibeFarr->a[nctemp6564].errflg =1;
struct nctempchar1 *nctemp6572;
static struct nctempchar1 nctemp6573 = {{ 11}, (char*)"Seek error\0"};
nctemp6572=&nctemp6573;
LibeErrstr=nctemp6572;
LibeErrno =0;
int nctemp6581=fp;
LibeFarr->a[nctemp6581].errflg =0;
rval =0;
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
i =0;
int nctemp6596 = (i < 40);
while(nctemp6596){
{
int nctemp6603=i;
nctempchar1 *nctemp6601 =LibeFarr->a[nctemp6603].base;
int nctemp6600 =(nctemp6601!=0);
if(nctemp6600)
{
int nctemp6607 = (i > 4);
if(nctemp6607)
{
int nctemp6615=i;
fd =LibeFarr->a[nctemp6615].fd;
int nctemp6621= fd;
int nctemp6623=RunClose(nctemp6621);
stat =nctemp6623;
int nctemp6624 = (stat ==0);
if(nctemp6624)
{
struct nctempchar1 *nctemp6633;
static struct nctempchar1 nctemp6634 = {{ 21}, (char*)"Could not close file\0"};
nctemp6633=&nctemp6634;
LibeErrstr=nctemp6633;
LibeErrno =(-106);
}
}
int nctemp6643= i;
int nctemp6645=LibeFlush(nctemp6643);
stat =nctemp6645;
int nctemp6648=i;
RunFree(LibeFarr->a[nctemp6648].base->a);
RunFree(LibeFarr->a[nctemp6648].base);
}
}
int nctemp6659 = i + 1;
i =nctemp6659;
int nctemp6660 = (i < 40);
nctemp6596=nctemp6660;
}
RunFree(LibeFarr->a);
RunFree(LibeFarr);
return stat;
}
int NBLOCKS;
int NTHREADS;
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
int nctemp6673= 4;
struct nctempchar1 *nctemp6677;
static struct nctempchar1 nctemp6678 = {{ 37}, (char*)"Array index out of bond at line no: \0"};
nctemp6677=&nctemp6678;
nctempchar1* nctemp6675= nctemp6677;
int nctemp6679=LibePuts(nctemp6673,nctemp6675);
int nctemp6681= 4;
int nctemp6683= line;
int nctemp6685=LibePuti(nctemp6681,nctemp6683);
int nctemp6687= 4;
struct nctempchar1 *nctemp6691;
static struct nctempchar1 nctemp6692 = {{ 3}, (char*)"\n\0"};
nctemp6691=&nctemp6692;
nctempchar1* nctemp6689= nctemp6691;
int nctemp6693=LibePuts(nctemp6687,nctemp6689);
int nctemp6695= 4;
struct nctempchar1 *nctemp6699;
static struct nctempchar1 nctemp6700 = {{ 13}, (char*)"Array name: \0"};
nctemp6699=&nctemp6700;
nctempchar1* nctemp6697= nctemp6699;
int nctemp6701=LibePuts(nctemp6695,nctemp6697);
int nctemp6703= 4;
nctempchar1* nctemp6705= name;
int nctemp6708=LibePuts(nctemp6703,nctemp6705);
int nctemp6710= 4;
struct nctempchar1 *nctemp6714;
static struct nctempchar1 nctemp6715 = {{ 3}, (char*)"\n\0"};
nctemp6714=&nctemp6715;
nctempchar1* nctemp6712= nctemp6714;
int nctemp6716=LibePuts(nctemp6710,nctemp6712);
int nctemp6718= 4;
struct nctempchar1 *nctemp6722;
static struct nctempchar1 nctemp6723 = {{ 11}, (char*)"Index no: \0"};
nctemp6722=&nctemp6723;
nctempchar1* nctemp6720= nctemp6722;
int nctemp6724=LibePuts(nctemp6718,nctemp6720);
int nctemp6726= 4;
int nctemp6728= index;
int nctemp6730=LibePuti(nctemp6726,nctemp6728);
int nctemp6732= 4;
struct nctempchar1 *nctemp6736;
static struct nctempchar1 nctemp6737 = {{ 3}, (char*)"\n\0"};
nctemp6736=&nctemp6737;
nctempchar1* nctemp6734= nctemp6736;
int nctemp6738=LibePuts(nctemp6732,nctemp6734);
int nctemp6740= 4;
struct nctempchar1 *nctemp6744;
static struct nctempchar1 nctemp6745 = {{ 14}, (char*)"Index value: \0"};
nctemp6744=&nctemp6745;
nctempchar1* nctemp6742= nctemp6744;
int nctemp6746=LibePuts(nctemp6740,nctemp6742);
int nctemp6748= 4;
int nctemp6750= ival;
int nctemp6752=LibePuti(nctemp6748,nctemp6750);
int nctemp6754= 4;
struct nctempchar1 *nctemp6758;
static struct nctempchar1 nctemp6759 = {{ 3}, (char*)"\n\0"};
nctemp6758=&nctemp6759;
nctempchar1* nctemp6756= nctemp6758;
int nctemp6760=LibePuts(nctemp6754,nctemp6756);
int nctemp6762= 4;
struct nctempchar1 *nctemp6766;
static struct nctempchar1 nctemp6767 = {{ 16}, (char*)"Index bound: 0-\0"};
nctemp6766=&nctemp6767;
nctempchar1* nctemp6764= nctemp6766;
int nctemp6768=LibePuts(nctemp6762,nctemp6764);
int nctemp6770= 4;
int nctemp6777 = bound - 1;
int nctemp6772= nctemp6777;
int nctemp6778=LibePuti(nctemp6770,nctemp6772);
int nctemp6780= 4;
struct nctempchar1 *nctemp6784;
static struct nctempchar1 nctemp6785 = {{ 3}, (char*)"\n\0"};
nctemp6784=&nctemp6785;
nctempchar1* nctemp6782= nctemp6784;
int nctemp6786=LibePuts(nctemp6780,nctemp6782);
int nctemp6788= 4;
int nctemp6790=LibeFlush(nctemp6788);
int nctemp6792=RunExit();
return 1;
}
int LibeSystem (nctempchar1 *cmd)
{
int rval;
nctempchar1* nctemp6798= cmd;
int nctemp6801=RunSystem(nctemp6798);
rval =nctemp6801;
return rval;
}
int LibeInit ()
{
int rval;
int nctemp6807=LibeErrinit();
rval =nctemp6807;
int nctemp6812=LibeIoinit();
rval =nctemp6812;
int nctemp6817=LibeMathinit();
rval =nctemp6817;
int nctemp6822= 1024;
int nctemp6824=LibeSetnb(nctemp6822);
rval =nctemp6824;
int nctemp6829= 1024;
int nctemp6831=LibeSetnt(nctemp6829);
rval =nctemp6831;
return rval;
}
int LibeExit ()
{
int nctemp6834=RunExit();
return 1;
}
