//  Translated by epsc  version December 2021  
extern "C" {
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
#include <stdlib.h>
#include <string.h>

void *GpuNew(int n);
void *GpuDelete(void *f);
void *GpuError();
void *RunMalloc(int n);
int RunFree(void * );
int RunSync();
int RunGetnt();
int RunGetnb();
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
struct MainArg {nctempchar1 *arg;
};
typedef struct nctempMainArg1 {int d[1]; struct MainArg *a; } nctempMainArg1;
struct nctempMainArg2 {int d[2]; struct MainArg *a; } ;
struct nctempMainArg3 {int d[3]; struct MainArg *a; } ;
struct nctempMainArg4 {int d[4]; struct MainArg *a; } ;
int LibeErrno;
nctempchar1 *LibeErrstr;
int LibeErrinit ();
int LibeGeterrno ();
int LibeClearerr ();
nctempchar1 * LibeGeterrstr ();
nctempchar1 * LibeGetenv (nctempchar1 *name);
;
;
;
;
;
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
;
;
;
;
;
;
;
float LibeSincosmax;
float LibeSincoslim;
float LibeLnmax;
float LibeLnmin;
int LibeMod (int n,int r);
float LibeSqrt (float x);
float LibeLn (float x);
float LibeExp (float x);
float LibeSincos (float x,float y,float sign);
float LibeSin (float x);
float LibeCos (float x);
float LibeTan (float x);
float LibeArcsin (float x);
float LibeArccos (float x);
float LibeAtan (float f);
float LibeArctan (float x);
float LibePow (float base,float exponent);
int LibeMathinit ();
int LibeStrlen (nctempchar1 *s);
int LibeStrcmp (nctempchar1 *s,nctempchar1 *t);
int LibeStrev (nctempchar1 *s);
int LibeStrcpy (nctempchar1 *s,nctempchar1 *t);
int LibeStrcat (nctempchar1 *s,nctempchar1 *t);
nctempchar1 * LibeStradd (nctempchar1 *t,nctempchar1 *s);
nctempchar1 * LibeStrsave (nctempchar1 *s);
int LibeIsalhpa (int c);
int LibeIsdigit (int c);
int LibeIsalnum (int c);
int LibeAtoi (nctempchar1 *s);
int LibeItoa (int n,nctempchar1 *s);
int LibeItoh (int n,nctempchar1 *s);
float LibeAtof (nctempchar1 *s);
int LibeFtoaf (int mant,int nexp,int nfield,int nfrac,nctempchar1 *s);
int LibeFtoae (int mant,int nexp,int nfield,int nfrac,nctempchar1 *s);
int LibeFtoa (float f,nctempchar1 *fmt,nctempchar1 *s);
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
;
struct nctempLibeFdescr1 *LibeFarr;
;
nctempchar1 *LibeTmpstr;
int LibeIoinit ();
int LibeFlushbuff (int fp);
int LibeFillbuff (int fp);
int LibeFlush (int fp);
int LibeOpen (nctempchar1 *name,nctempchar1 *mode);
int LibeClose (int fp);
int LibeGetc (int fp);
int LibeUngetc (int fp);
int LibeGetw (int fp,nctempchar1 *text);
int LibePutc (int fp,int c);
int LibePuts (int fp,nctempchar1 *s);
int LibePuti (int fp,int ival);
int LibePutf (int fp,float fval,nctempchar1 *form);
int LibePs (nctempchar1 *s);
int LibePi (int n);
int LibePf (float r);
int LibeRead (int fp,int n,nctempchar1 *buffer);
int LibeWrite (int fp,int n,nctempchar1 *buffer);
int LibeSeek (int fp,int pos,int flag);
int LibeIodelete ();
int NBLOCKS;
int NTHREADS;
int LibeSetnb (int nb);
int LibeSetnt (int nt);
int LibeGetnb ();
int LibeGetnt ();
int LibeArrayex (int line,nctempchar1 *name,int ival,int index,int bound);
int LibeSystem (nctempchar1 *cmd);
int LibeInit ();
int LibeExit ();
int ErrError (nctempchar1 *file,int line,nctempchar1 *s);
int ErrSerror (nctempchar1 *file,nctempchar1 *fname,int lineno,nctempchar1 *s1,nctempchar1 *s2);
nctempchar1 * ScanPath ();
int ScanIndent;
int ScanIndentsave;
nctempchar1 *ScanText;
nctempchar1 *ScanBuffer;
int ScanLine;
int ScanLinesave;
int ScanFp;
nctempchar1 *ScanFile;
nctempint1 *ScanStack;
int ScanSp;
int ScanContline;
int ScanGetline ()
{
int nctemp5 = ScanLine + ScanContline;
return nctemp5;
}
nctempchar1 * ScanGetfile ()
{
return ScanFile;
}
int ScanError (nctempchar1 *s)
{
nctempchar1* nctemp11=ScanGetfile();
nctempchar1* nctemp9= nctemp11;
int nctemp14=ScanGetline();
int nctemp12= nctemp14;
nctempchar1* nctemp15= s;
int nctemp18=ErrError(nctemp9,nctemp12,nctemp15);
}
int ScanPush (int l)
{
int nctemp27 = ScanSp + 1;
ScanSp =nctemp27;
int nctemp28 = (ScanSp > 258);
if(nctemp28)
{
struct nctempchar1 *nctemp35;
static struct nctempchar1 nctemp36 = {{ 31}, (char*)"Max no of indentations reached\0"};
nctemp35=&nctemp36;
nctempchar1* nctemp33= nctemp35;
int nctemp37=ScanError(nctemp33);
}
int nctemp41=ScanSp;
ScanStack->a[nctemp41] =l;
return 1;
}
int ScanPop ()
{
int nctemp53 = ScanSp - 1;
ScanSp =nctemp53;
int nctemp54 = (ScanSp < 0);
if(nctemp54)
{
struct nctempchar1 *nctemp61;
static struct nctempchar1 nctemp62 = {{ 18}, (char*)"Indentation error\0"};
nctemp61=&nctemp62;
nctempchar1* nctemp59= nctemp61;
int nctemp63=ScanError(nctemp59);
}
int nctemp65=ScanSp;
return ScanStack->a[nctemp65];
}
int ScanInit (nctempchar1 *infile)
{
ScanContline =0;
int nctemp77=4096;
nctempchar1 *nctemp76;
nctemp76=(nctempchar1*)RunMalloc(sizeof(nctempchar1));
nctemp76->d[0]=4096;
nctemp76->a=(char *)RunMalloc(sizeof(char)*nctemp77);
ScanText=nctemp76;
int nctemp86=4096;
nctempchar1 *nctemp85;
nctemp85=(nctempchar1*)RunMalloc(sizeof(nctempchar1));
nctemp85->d[0]=4096;
nctemp85->a=(char *)RunMalloc(sizeof(char)*nctemp86);
ScanBuffer=nctemp85;
nctempchar1* nctemp93= infile;
struct nctempchar1 *nctemp98;
static struct nctempchar1 nctemp99 = {{ 2}, (char*)"r\0"};
nctemp98=&nctemp99;
nctempchar1* nctemp96= nctemp98;
int nctemp100=LibeOpen(nctemp93,nctemp96);
ScanFp =nctemp100;
int nctemp101 = (ScanFp ==0);
if(nctemp101)
{
int nctemp106= 4;
struct nctempchar1 *nctemp110;
static struct nctempchar1 nctemp111 = {{ 26}, (char*)"Can not open input file: \0"};
nctemp110=&nctemp111;
nctempchar1* nctemp108= nctemp110;
int nctemp112=LibePuts(nctemp106,nctemp108);
int nctemp114= 4;
nctempchar1* nctemp116= infile;
int nctemp119=LibePuts(nctemp114,nctemp116);
int nctemp121= 4;
struct nctempchar1 *nctemp125;
static struct nctempchar1 nctemp126 = {{ 3}, (char*)"\n\0"};
nctemp125=&nctemp126;
nctempchar1* nctemp123= nctemp125;
int nctemp127=LibePuts(nctemp121,nctemp123);
int nctemp129= 4;
int nctemp131=LibeFlush(nctemp129);
return 0;
}
nctempchar1* nctemp138= infile;
nctempchar1* nctemp141=LibeStrsave(nctemp138);
ScanFile=nctemp141;
ScanIndentsave =0;
ScanIndent =0;
int nctemp156=258;
nctempint1 *nctemp155;
nctemp155=(nctempint1*)RunMalloc(sizeof(nctempint1));
nctemp155->d[0]=258;
nctemp155->a=(int *)RunMalloc(sizeof(int)*nctemp156);
ScanStack=nctemp155;
ScanSp =0;
int nctemp166=0;
ScanStack->a[nctemp166] =0;
return 1;
}
int ScanGetch ()
{
int nctemp171= ScanFp;
int nctemp173=LibeGetc(nctemp171);
return nctemp173;
}
int ScanIncline ()
{
ScanLinesave =ScanLine;
int nctemp186 = ScanLine + 1;
ScanLine =nctemp186;
return 1;
}
int ScanUngetch ()
{
int nctemp189= ScanFp;
int nctemp191=LibeUngetc(nctemp189);
return nctemp191;
}
int ScanBlank ()
{
int c;
int indent;
int tmp;
indent =0;
int nctemp206=ScanGetch();
c =nctemp206;
int nctemp199 = (c ==32);
int nctemp209 = (c ==9);
int nctemp196 = (nctemp199 || nctemp209);
int nctemp213=nctemp196;
while(nctemp213)
{{
int nctemp222 = indent + 1;
indent =nctemp222;
}
int nctemp233=ScanGetch();
c =nctemp233;
int nctemp226 = (c ==32);
int nctemp236 = (c ==9);
int nctemp223 = (nctemp226 || nctemp236);
nctemp213=nctemp223;}int nctemp240 = (c ==(-1));
if(nctemp240)
{
int nctemp245=ScanUngetch();
return indent;
}
int nctemp247 = (c =='#');
if(nctemp247)
{
int nctemp254= -2;
indent =nctemp254;
int nctemp258=ScanGetch();
int nctemp255 = (nctemp258 !=10);
int nctemp260=nctemp255;
while(nctemp260)
{{
int nctemp264= -2;
indent =nctemp264;
}
int nctemp268=ScanGetch();
int nctemp265 = (nctemp268 !=10);
nctemp260=nctemp265;}int nctemp271=ScanIncline();
return indent;
}
else{
int nctemp273 = (c ==10);
if(nctemp273)
{
int nctemp280= -1;
indent =nctemp280;
int nctemp282=ScanIncline();
return indent;
}
else{
int nctemp285=ScanUngetch();
return indent;
}
}
}
int ScanWhite ()
{
int c;
int d;
int nctemp297=ScanGetch();
c =nctemp297;
int nctemp290 = (c ==32);
int nctemp300 = (c ==9);
int nctemp287 = (nctemp290 || nctemp300);
int nctemp304=nctemp287;
while(nctemp304)
{{
d =0;
}
int nctemp319=ScanGetch();
c =nctemp319;
int nctemp312 = (c ==32);
int nctemp322 = (c ==9);
int nctemp309 = (nctemp312 || nctemp322);
nctemp304=nctemp309;}int nctemp327=ScanUngetch();
return 1;
}
int ScanComment ()
{
int incomment;
int c;
incomment =1;
int nctemp333 = (incomment ==1);
int nctemp337=nctemp333;
while(nctemp337)
{{
int nctemp342=ScanGetch();
c =nctemp342;
int nctemp343 = (c ==10);
if(nctemp343)
{
int nctemp348=ScanIncline();
}
int nctemp349 = (c =='*');
if(nctemp349)
{
int nctemp357=ScanGetch();
c =nctemp357;
int nctemp358 = (c ==10);
if(nctemp358)
{
int nctemp363=ScanIncline();
}
int nctemp364 = (c =='/');
if(nctemp364)
{
incomment =0;
}
}
int nctemp372 = (c ==(-1));
if(nctemp372)
{
struct nctempchar1 *nctemp379;
static struct nctempchar1 nctemp380 = {{ 24}, (char*)"Closing comment missing\0"};
nctemp379=&nctemp380;
nctempchar1* nctemp377= nctemp379;
int nctemp381=ScanError(nctemp377);
}
}
int nctemp382 = (incomment ==1);
nctemp337=nctemp382;}return 1;
}
int ScanLcomment ()
{
int incomment;
int c;
incomment =1;
int nctemp391 = (incomment ==1);
int nctemp395=nctemp391;
while(nctemp395)
{{
int nctemp400=ScanGetch();
c =nctemp400;
int nctemp401 = (c ==10);
if(nctemp401)
{
incomment =0;
}
}
int nctemp409 = (incomment ==1);
nctemp395=nctemp409;}int nctemp414=ScanUngetch();
return 1;
}
int ScanFtail (int p)
{
int c;
int nctemp422=ScanGetch();
c =nctemp422;
int nctemp417= c;
int nctemp423=LibeIsdigit(nctemp417);
int nctemp424=nctemp423;
while(nctemp424)
{{
int nctemp433 = p + 1;
p =nctemp433;
int nctemp438=ScanText->d[0];int nctemp434 = (p >= nctemp438);
if(nctemp434)
{
struct nctempchar1 *nctemp445;
static struct nctempchar1 nctemp446 = {{ 18}, (char*)"Digit is too long\0"};
nctemp445=&nctemp446;
nctempchar1* nctemp443= nctemp445;
int nctemp447=ScanError(nctemp443);
}
int nctemp451=p;
char nctemp454=(char)(c);
ScanText->a[nctemp451] =nctemp454;
}
int nctemp463=ScanGetch();
c =nctemp463;
int nctemp458= c;
int nctemp464=LibeIsdigit(nctemp458);
nctemp424=nctemp464;}int nctemp468 = (c =='e');
int nctemp473 = (c =='E');
int nctemp465 = (nctemp468 || nctemp473);
if(nctemp465)
{
int nctemp485 = p + 1;
p =nctemp485;
int nctemp490=ScanText->d[0];int nctemp486 = (p >= nctemp490);
if(nctemp486)
{
struct nctempchar1 *nctemp497;
static struct nctempchar1 nctemp498 = {{ 18}, (char*)"Digit is too long\0"};
nctemp497=&nctemp498;
nctempchar1* nctemp495= nctemp497;
int nctemp499=ScanError(nctemp495);
}
int nctemp503=p;
char nctemp506=(char)(c);
ScanText->a[nctemp503] =nctemp506;
int nctemp513=ScanGetch();
c =nctemp513;
int nctemp517 = (c ==43);
int nctemp522 = (c ==45);
int nctemp514 = (nctemp517 || nctemp522);
if(nctemp514)
{
int nctemp534 = p + 1;
p =nctemp534;
int nctemp539=ScanText->d[0];int nctemp535 = (p >= nctemp539);
if(nctemp535)
{
struct nctempchar1 *nctemp546;
static struct nctempchar1 nctemp547 = {{ 18}, (char*)"Digit is too long\0"};
nctemp546=&nctemp547;
nctempchar1* nctemp544= nctemp546;
int nctemp548=ScanError(nctemp544);
}
int nctemp552=p;
char nctemp555=(char)(c);
ScanText->a[nctemp552] =nctemp555;
int nctemp564=ScanGetch();
c =nctemp564;
int nctemp559= c;
int nctemp565=LibeIsdigit(nctemp559);
int nctemp566=nctemp565;
while(nctemp566)
{{
int nctemp575 = p + 1;
p =nctemp575;
int nctemp580=ScanText->d[0];int nctemp576 = (p >= nctemp580);
if(nctemp576)
{
struct nctempchar1 *nctemp587;
static struct nctempchar1 nctemp588 = {{ 18}, (char*)"Digit is too long\0"};
nctemp587=&nctemp588;
nctempchar1* nctemp585= nctemp587;
int nctemp589=ScanError(nctemp585);
}
int nctemp593=p;
char nctemp596=(char)(c);
ScanText->a[nctemp593] =nctemp596;
}
int nctemp605=ScanGetch();
c =nctemp605;
int nctemp600= c;
int nctemp606=LibeIsdigit(nctemp600);
nctemp566=nctemp606;}int nctemp608=ScanUngetch();
int nctemp617 = p + 1;
int nctemp612=nctemp617;
char nctemp619=(char)(0);
ScanText->a[nctemp612] =nctemp619;
return p;
}
else{
struct nctempchar1 *nctemp626;
static struct nctempchar1 nctemp627 = {{ 14}, (char*)"Unknown token\0"};
nctemp626=&nctemp627;
nctempchar1* nctemp624= nctemp626;
int nctemp628=ScanError(nctemp624);
}
return 0;
}
else{
int nctemp631=ScanUngetch();
int nctemp640 = p + 1;
int nctemp635=nctemp640;
char nctemp642=(char)(0);
ScanText->a[nctemp635] =nctemp642;
return p;
}
}
int ScanLex ()
{
int c;
int p;
int rval;
int string;
int comments;
int nctemp647=ScanWhite();
int nctemp652=ScanGetch();
c =nctemp652;
p =0;
int nctemp660=p;
char nctemp663=(char)(c);
ScanText->a[nctemp660] =nctemp663;
comments =1;
int nctemp670 = (comments ==1);
int nctemp674=nctemp670;
while(nctemp674)
{{
int nctemp675 = (c =='#');
if(nctemp675)
{
int nctemp680=ScanLcomment();
int nctemp685=ScanGetch();
c =nctemp685;
int nctemp689=p;
char nctemp692=(char)(c);
ScanText->a[nctemp689] =nctemp692;
}
else{
comments =0;
}
}
int nctemp699 = (comments ==1);
nctemp674=nctemp699;}int nctemp703 = (c ==(-1));
if(nctemp703)
{
rval =19;
return rval;
}
int nctemp712 = (c ==43);
if(nctemp712)
{
rval =43;
}
else{
int nctemp720 = (c ==42);
if(nctemp720)
{
rval =42;
}
else{
int nctemp728 = (c ==47);
if(nctemp728)
{
rval =47;
}
else{
int nctemp736 = (c ==92);
if(nctemp736)
{
rval =32;
int nctemp745=ScanGetch();
int nctemp754 = ScanContline + 1;
ScanContline =nctemp754;
}
else{
int nctemp755 = (c ==40);
if(nctemp755)
{
rval =40;
}
else{
int nctemp763 = (c ==41);
if(nctemp763)
{
rval =41;
}
else{
int nctemp771 = (c ==93);
if(nctemp771)
{
rval =93;
}
else{
int nctemp779 = (c ==91);
if(nctemp779)
{
rval =91;
}
else{
int nctemp787 = (c ==123);
if(nctemp787)
{
rval =123;
}
else{
int nctemp795 = (c ==125);
if(nctemp795)
{
rval =125;
}
else{
int nctemp803 = (c ==58);
if(nctemp803)
{
rval =58;
}
else{
int nctemp811 = (c ==59);
if(nctemp811)
{
rval =59;
}
else{
int nctemp819 = (c ==44);
if(nctemp819)
{
rval =44;
}
else{
int nctemp827 = (c ==46);
if(nctemp827)
{
rval =46;
}
else{
int nctemp835 = (c ==10);
if(nctemp835)
{
rval =10;
int nctemp844=ScanIncline();
}
else{
int nctemp845 = (c ==60);
if(nctemp845)
{
int nctemp856=ScanGetch();
c =nctemp856;
int nctemp849 = (c ==61);
if(nctemp849)
{
rval =20;
int nctemp870 = p + 1;
p =nctemp870;
int nctemp874=p;
char nctemp877=(char)(c);
ScanText->a[nctemp874] =nctemp877;
}
else{
int nctemp881=ScanUngetch();
rval =60;
}
}
else{
int nctemp886 = (c ==62);
if(nctemp886)
{
int nctemp897=ScanGetch();
c =nctemp897;
int nctemp890 = (c ==61);
if(nctemp890)
{
rval =21;
int nctemp911 = p + 1;
p =nctemp911;
int nctemp915=p;
char nctemp918=(char)(c);
ScanText->a[nctemp915] =nctemp918;
}
else{
int nctemp922=ScanUngetch();
rval =62;
}
}
else{
int nctemp927 = (c ==45);
if(nctemp927)
{
int nctemp938=ScanGetch();
c =nctemp938;
int nctemp931 = (c ==62);
if(nctemp931)
{
rval =2;
int nctemp952 = p + 1;
p =nctemp952;
int nctemp956=p;
char nctemp959=(char)(c);
ScanText->a[nctemp956] =nctemp959;
}
else{
int nctemp963=ScanUngetch();
rval =45;
}
}
else{
int nctemp968 = (c ==124);
if(nctemp968)
{
int nctemp979=ScanGetch();
c =nctemp979;
int nctemp972 = (c ==124);
if(nctemp972)
{
rval =5;
int nctemp993 = p + 1;
p =nctemp993;
int nctemp997=p;
char nctemp1000=(char)(c);
ScanText->a[nctemp997] =nctemp1000;
}
else{
struct nctempchar1 *nctemp1006;
static struct nctempchar1 nctemp1007 = {{ 18}, (char*)"Illegal character\0"};
nctemp1006=&nctemp1007;
nctempchar1* nctemp1004= nctemp1006;
int nctemp1008=ScanError(nctemp1004);
}
}
else{
int nctemp1009 = (c ==38);
if(nctemp1009)
{
int nctemp1020=ScanGetch();
c =nctemp1020;
int nctemp1013 = (c ==38);
if(nctemp1013)
{
rval =6;
int nctemp1034 = p + 1;
p =nctemp1034;
int nctemp1038=p;
char nctemp1041=(char)(c);
ScanText->a[nctemp1038] =nctemp1041;
}
else{
struct nctempchar1 *nctemp1047;
static struct nctempchar1 nctemp1048 = {{ 18}, (char*)"Illegal character\0"};
nctemp1047=&nctemp1048;
nctempchar1* nctemp1045= nctemp1047;
int nctemp1049=ScanError(nctemp1045);
}
}
else{
int nctemp1050 = (c ==33);
if(nctemp1050)
{
int nctemp1061=ScanGetch();
c =nctemp1061;
int nctemp1054 = (c ==61);
if(nctemp1054)
{
rval =4;
int nctemp1075 = p + 1;
p =nctemp1075;
int nctemp1079=p;
char nctemp1082=(char)(c);
ScanText->a[nctemp1079] =nctemp1082;
}
else{
struct nctempchar1 *nctemp1088;
static struct nctempchar1 nctemp1089 = {{ 18}, (char*)"Illegal character\0"};
nctemp1088=&nctemp1089;
nctempchar1* nctemp1086= nctemp1088;
int nctemp1090=ScanError(nctemp1086);
}
}
else{
int nctemp1091 = (c ==61);
if(nctemp1091)
{
int nctemp1102=ScanGetch();
c =nctemp1102;
int nctemp1095 = (c ==61);
if(nctemp1095)
{
rval =3;
int nctemp1116 = p + 1;
p =nctemp1116;
int nctemp1120=p;
char nctemp1123=(char)(c);
ScanText->a[nctemp1120] =nctemp1123;
}
else{
int nctemp1127=ScanUngetch();
rval =61;
}
}
else{
int nctemp1132 = (c ==34);
if(nctemp1132)
{
int nctemp1139=p;
char nctemp1142=(char)(34);
ScanText->a[nctemp1139] =nctemp1142;
int nctemp1153 = p + 1;
p =nctemp1153;
string =1;
int nctemp1158 = (string ==1);
int nctemp1162=nctemp1158;
while(nctemp1162)
{{
int nctemp1170=ScanGetch();
c =nctemp1170;
int nctemp1163 = (c !=34);
if(nctemp1163)
{
string =1;
}
else{
int nctemp1187 = p - 1;
int nctemp1182=nctemp1187;
int nctemp1179=(int)(ScanText->a[nctemp1182]);
int nctemp1176 = (nctemp1179 ==92);
if(nctemp1176)
{
string =1;
}
else{
string =0;
}
}
int nctemp1200=p;
char nctemp1203=(char)(c);
ScanText->a[nctemp1200] =nctemp1203;
int nctemp1214 = p + 1;
p =nctemp1214;
int nctemp1222=ScanText->d[0];int nctemp1227 = nctemp1222 - 1;
int nctemp1215 = (p >= nctemp1227);
if(nctemp1215)
{
struct nctempchar1 *nctemp1231;
static struct nctempchar1 nctemp1232 = {{ 19}, (char*)"String is too long\0"};
nctemp1231=&nctemp1232;
nctempchar1* nctemp1229= nctemp1231;
int nctemp1233=ScanError(nctemp1229);
}
}
int nctemp1234 = (string ==1);
nctemp1162=nctemp1234;}int nctemp1241=p;
char nctemp1244=(char)(0);
ScanText->a[nctemp1241] =nctemp1244;
rval =18;
}
else{
int nctemp1251 = (c ==39);
if(nctemp1251)
{
int nctemp1258=p;
char nctemp1261=(char)(39);
ScanText->a[nctemp1258] =nctemp1261;
int nctemp1272 = p + 1;
p =nctemp1272;
int nctemp1276=p;
int nctemp1282=ScanGetch();
char nctemp1279=(char)(nctemp1282);
ScanText->a[nctemp1276] =nctemp1279;
int nctemp1287=ScanGetch();
c =nctemp1287;
int nctemp1288 = (c !=39);
if(nctemp1288)
{
struct nctempchar1 *nctemp1295;
static struct nctempchar1 nctemp1296 = {{ 31}, (char*)"Character constant is too long\0"};
nctemp1295=&nctemp1296;
nctempchar1* nctemp1293= nctemp1295;
int nctemp1297=ScanError(nctemp1293);
}
else{
int nctemp1306 = p + 1;
p =nctemp1306;
int nctemp1310=p;
char nctemp1313=(char)(c);
ScanText->a[nctemp1310] =nctemp1313;
}
int nctemp1324 = p + 1;
p =nctemp1324;
int nctemp1328=p;
char nctemp1331=(char)(0);
ScanText->a[nctemp1328] =nctemp1331;
rval =17;
}
else{
int nctemp1339= c;
int nctemp1341=LibeIsdigit(nctemp1339);
if(nctemp1341)
{
int nctemp1348=ScanGetch();
c =nctemp1348;
int nctemp1343= c;
int nctemp1349=LibeIsdigit(nctemp1343);
int nctemp1350=nctemp1349;
while(nctemp1350)
{{
int nctemp1359 = p + 1;
p =nctemp1359;
int nctemp1363=p;
char nctemp1366=(char)(c);
ScanText->a[nctemp1363] =nctemp1366;
int nctemp1373=ScanText->d[0];int nctemp1369 = (p >= nctemp1373);
if(nctemp1369)
{
struct nctempchar1 *nctemp1380;
static struct nctempchar1 nctemp1381 = {{ 18}, (char*)"Digit is too long\0"};
nctemp1380=&nctemp1381;
nctempchar1* nctemp1378= nctemp1380;
int nctemp1382=ScanError(nctemp1378);
}
}
int nctemp1389=ScanGetch();
c =nctemp1389;
int nctemp1384= c;
int nctemp1390=LibeIsdigit(nctemp1384);
nctemp1350=nctemp1390;}int nctemp1391 = (c ==46);
if(nctemp1391)
{
int nctemp1403 = p + 1;
p =nctemp1403;
int nctemp1408=ScanText->d[0];int nctemp1404 = (p >= nctemp1408);
if(nctemp1404)
{
struct nctempchar1 *nctemp1415;
static struct nctempchar1 nctemp1416 = {{ 18}, (char*)"Digit is too long\0"};
nctemp1415=&nctemp1416;
nctempchar1* nctemp1413= nctemp1415;
int nctemp1417=ScanError(nctemp1413);
}
int nctemp1421=p;
char nctemp1424=(char)(c);
ScanText->a[nctemp1421] =nctemp1424;
int nctemp1431= p;
int nctemp1433=ScanFtail(nctemp1431);
p =nctemp1433;
rval =24;
}
else{
int nctemp1439=ScanUngetch();
int nctemp1448 = p + 1;
int nctemp1443=nctemp1448;
char nctemp1450=(char)(0);
ScanText->a[nctemp1443] =nctemp1450;
rval =17;
}
}
else{
int nctemp1458= c;
int nctemp1460=LibeIsalnum(nctemp1458);
if(nctemp1460)
{
int nctemp1467=ScanGetch();
c =nctemp1467;
int nctemp1462= c;
int nctemp1468=LibeIsalnum(nctemp1462);
int nctemp1469=nctemp1468;
while(nctemp1469)
{{
int nctemp1478 = p + 1;
p =nctemp1478;
int nctemp1482=p;
char nctemp1485=(char)(c);
ScanText->a[nctemp1482] =nctemp1485;
int nctemp1492=ScanText->d[0];int nctemp1488 = (p >= nctemp1492);
if(nctemp1488)
{
struct nctempchar1 *nctemp1499;
static struct nctempchar1 nctemp1500 = {{ 23}, (char*)"Identifier is too long\0"};
nctemp1499=&nctemp1500;
nctempchar1* nctemp1497= nctemp1499;
int nctemp1501=ScanError(nctemp1497);
}
}
int nctemp1508=ScanGetch();
c =nctemp1508;
int nctemp1503= c;
int nctemp1509=LibeIsalnum(nctemp1503);
nctemp1469=nctemp1509;}int nctemp1511=ScanUngetch();
int nctemp1520 = p + 1;
int nctemp1515=nctemp1520;
char nctemp1522=(char)(0);
ScanText->a[nctemp1515] =nctemp1522;
nctempchar1* nctemp1526= ScanText;
struct nctempchar1 *nctemp1531;
static struct nctempchar1 nctemp1532 = {{ 4}, (char*)"int\0"};
nctemp1531=&nctemp1532;
nctempchar1* nctemp1529= nctemp1531;
int nctemp1533=LibeStrcmp(nctemp1526,nctemp1529);
if(nctemp1533)
{
rval =7;
}
else{
nctempchar1* nctemp1539= ScanText;
struct nctempchar1 *nctemp1544;
static struct nctempchar1 nctemp1545 = {{ 5}, (char*)"char\0"};
nctemp1544=&nctemp1545;
nctempchar1* nctemp1542= nctemp1544;
int nctemp1546=LibeStrcmp(nctemp1539,nctemp1542);
if(nctemp1546)
{
rval =8;
}
else{
nctempchar1* nctemp1552= ScanText;
struct nctempchar1 *nctemp1557;
static struct nctempchar1 nctemp1558 = {{ 6}, (char*)"float\0"};
nctemp1557=&nctemp1558;
nctempchar1* nctemp1555= nctemp1557;
int nctemp1559=LibeStrcmp(nctemp1552,nctemp1555);
if(nctemp1559)
{
rval =9;
}
else{
nctempchar1* nctemp1565= ScanText;
struct nctempchar1 *nctemp1570;
static struct nctempchar1 nctemp1571 = {{ 6}, (char*)"const\0"};
nctemp1570=&nctemp1571;
nctempchar1* nctemp1568= nctemp1570;
int nctemp1572=LibeStrcmp(nctemp1565,nctemp1568);
if(nctemp1572)
{
rval =431;
}
else{
nctempchar1* nctemp1578= ScanText;
struct nctempchar1 *nctemp1583;
static struct nctempchar1 nctemp1584 = {{ 8}, (char*)"complex\0"};
nctemp1583=&nctemp1584;
nctempchar1* nctemp1581= nctemp1583;
int nctemp1585=LibeStrcmp(nctemp1578,nctemp1581);
if(nctemp1585)
{
rval =510;
}
else{
nctempchar1* nctemp1591= ScanText;
struct nctempchar1 *nctemp1596;
static struct nctempchar1 nctemp1597 = {{ 7}, (char*)"struct\0"};
nctemp1596=&nctemp1597;
nctempchar1* nctemp1594= nctemp1596;
int nctemp1598=LibeStrcmp(nctemp1591,nctemp1594);
if(nctemp1598)
{
rval =11;
}
else{
nctempchar1* nctemp1604= ScanText;
struct nctempchar1 *nctemp1609;
static struct nctempchar1 nctemp1610 = {{ 6}, (char*)"class\0"};
nctemp1609=&nctemp1610;
nctempchar1* nctemp1607= nctemp1609;
int nctemp1611=LibeStrcmp(nctemp1604,nctemp1607);
if(nctemp1611)
{
rval =11;
}
else{
nctempchar1* nctemp1617= ScanText;
struct nctempchar1 *nctemp1622;
static struct nctempchar1 nctemp1623 = {{ 7}, (char*)"import\0"};
nctemp1622=&nctemp1623;
nctempchar1* nctemp1620= nctemp1622;
int nctemp1624=LibeStrcmp(nctemp1617,nctemp1620);
if(nctemp1624)
{
rval =433;
}
else{
nctempchar1* nctemp1630= ScanText;
struct nctempchar1 *nctemp1635;
static struct nctempchar1 nctemp1636 = {{ 6}, (char*)"while\0"};
nctemp1635=&nctemp1636;
nctempchar1* nctemp1633= nctemp1635;
int nctemp1637=LibeStrcmp(nctemp1630,nctemp1633);
if(nctemp1637)
{
rval =12;
}
else{
nctempchar1* nctemp1643= ScanText;
struct nctempchar1 *nctemp1648;
static struct nctempchar1 nctemp1649 = {{ 7}, (char*)"return\0"};
nctemp1648=&nctemp1649;
nctempchar1* nctemp1646= nctemp1648;
int nctemp1650=LibeStrcmp(nctemp1643,nctemp1646);
if(nctemp1650)
{
rval =30;
}
else{
nctempchar1* nctemp1656= ScanText;
struct nctempchar1 *nctemp1661;
static struct nctempchar1 nctemp1662 = {{ 3}, (char*)"if\0"};
nctemp1661=&nctemp1662;
nctempchar1* nctemp1659= nctemp1661;
int nctemp1663=LibeStrcmp(nctemp1656,nctemp1659);
if(nctemp1663)
{
rval =14;
}
else{
nctempchar1* nctemp1669= ScanText;
struct nctempchar1 *nctemp1674;
static struct nctempchar1 nctemp1675 = {{ 5}, (char*)"else\0"};
nctemp1674=&nctemp1675;
nctempchar1* nctemp1672= nctemp1674;
int nctemp1676=LibeStrcmp(nctemp1669,nctemp1672);
if(nctemp1676)
{
rval =15;
}
else{
nctempchar1* nctemp1682= ScanText;
struct nctempchar1 *nctemp1687;
static struct nctempchar1 nctemp1688 = {{ 7}, (char*)"sizeof\0"};
nctemp1687=&nctemp1688;
nctempchar1* nctemp1685= nctemp1687;
int nctemp1689=LibeStrcmp(nctemp1682,nctemp1685);
if(nctemp1689)
{
rval =22;
}
else{
nctempchar1* nctemp1695= ScanText;
struct nctempchar1 *nctemp1700;
static struct nctempchar1 nctemp1701 = {{ 5}, (char*)"cast\0"};
nctemp1700=&nctemp1701;
nctempchar1* nctemp1698= nctemp1700;
int nctemp1702=LibeStrcmp(nctemp1695,nctemp1698);
if(nctemp1702)
{
rval =23;
}
else{
nctempchar1* nctemp1708= ScanText;
struct nctempchar1 *nctemp1713;
static struct nctempchar1 nctemp1714 = {{ 4}, (char*)"new\0"};
nctemp1713=&nctemp1714;
nctempchar1* nctemp1711= nctemp1713;
int nctemp1715=LibeStrcmp(nctemp1708,nctemp1711);
if(nctemp1715)
{
rval =26;
}
else{
nctempchar1* nctemp1721= ScanText;
struct nctempchar1 *nctemp1726;
static struct nctempchar1 nctemp1727 = {{ 7}, (char*)"delete\0"};
nctemp1726=&nctemp1727;
nctempchar1* nctemp1724= nctemp1726;
int nctemp1728=LibeStrcmp(nctemp1721,nctemp1724);
if(nctemp1728)
{
rval =50;
}
else{
nctempchar1* nctemp1734= ScanText;
struct nctempchar1 *nctemp1739;
static struct nctempchar1 nctemp1740 = {{ 4}, (char*)"len\0"};
nctemp1739=&nctemp1740;
nctempchar1* nctemp1737= nctemp1739;
int nctemp1741=LibeStrcmp(nctemp1734,nctemp1737);
if(nctemp1741)
{
rval =29;
}
else{
nctempchar1* nctemp1747= ScanText;
struct nctempchar1 *nctemp1752;
static struct nctempchar1 nctemp1753 = {{ 6}, (char*)"cmplx\0"};
nctemp1752=&nctemp1753;
nctempchar1* nctemp1750= nctemp1752;
int nctemp1754=LibeStrcmp(nctemp1747,nctemp1750);
if(nctemp1754)
{
rval =25;
}
else{
nctempchar1* nctemp1760= ScanText;
struct nctempchar1 *nctemp1765;
static struct nctempchar1 nctemp1766 = {{ 3}, (char*)"re\0"};
nctemp1765=&nctemp1766;
nctempchar1* nctemp1763= nctemp1765;
int nctemp1767=LibeStrcmp(nctemp1760,nctemp1763);
if(nctemp1767)
{
rval =28;
}
else{
nctempchar1* nctemp1773= ScanText;
struct nctempchar1 *nctemp1778;
static struct nctempchar1 nctemp1779 = {{ 3}, (char*)"im\0"};
nctemp1778=&nctemp1779;
nctempchar1* nctemp1776= nctemp1778;
int nctemp1780=LibeStrcmp(nctemp1773,nctemp1776);
if(nctemp1780)
{
rval =27;
}
else{
nctempchar1* nctemp1786= ScanText;
struct nctempchar1 *nctemp1791;
static struct nctempchar1 nctemp1792 = {{ 4}, (char*)"for\0"};
nctemp1791=&nctemp1792;
nctempchar1* nctemp1789= nctemp1791;
int nctemp1793=LibeStrcmp(nctemp1786,nctemp1789);
if(nctemp1793)
{
rval =26;
}
else{
nctempchar1* nctemp1799= ScanText;
struct nctempchar1 *nctemp1804;
static struct nctempchar1 nctemp1805 = {{ 9}, (char*)"parallel\0"};
nctemp1804=&nctemp1805;
nctempchar1* nctemp1802= nctemp1804;
int nctemp1806=LibeStrcmp(nctemp1799,nctemp1802);
if(nctemp1806)
{
rval =31;
}
else{
nctempchar1* nctemp1812= ScanText;
struct nctempchar1 *nctemp1817;
static struct nctempchar1 nctemp1818 = {{ 5}, (char*)"pass\0"};
nctemp1817=&nctemp1818;
nctempchar1* nctemp1815= nctemp1817;
int nctemp1819=LibeStrcmp(nctemp1812,nctemp1815);
if(nctemp1819)
{
rval =701;
}
else{
rval =1;
}
}
}
}
}
}
}
}
}
}
}
}
}
}
}
}
}
}
}
}
}
}
}
}
else{
struct nctempchar1 *nctemp1831;
static struct nctempchar1 nctemp1832 = {{ 14}, (char*)"Invalid token\0"};
nctemp1831=&nctemp1832;
nctempchar1* nctemp1829= nctemp1831;
int nctemp1833=ScanError(nctemp1829);
return 0;
}
}
}
}
}
}
}
}
}
}
}
}
}
}
}
}
}
}
}
}
}
}
}
}
}
}
int nctemp1843 = p + 1;
int nctemp1838=nctemp1843;
char nctemp1845=(char)(0);
ScanText->a[nctemp1838] =nctemp1845;
return rval;
}
nctempchar1 * ScanSetfile (nctempchar1 *fname)
{
nctempchar1 *nctemp1850 =ScanFile;
int nctemp1849 =(nctemp1850!=0);
if(nctemp1849)
{
RunFree(ScanFile->a);
RunFree(ScanFile);
}
nctempchar1* nctemp1862= fname;
nctempchar1* nctemp1865=LibeStrsave(nctemp1862);
ScanFile=nctemp1865;
return ScanFile;
}
int ScanGetok ()
{
int c;
int indent;
int level;
int nctemp1868 = (ScanLine > ScanLinesave);
if(nctemp1868)
{
int nctemp1875= -1;
indent =nctemp1875;
int nctemp1876 = (indent < 0);
int nctemp1880=nctemp1876;
while(nctemp1880)
{{
int nctemp1885=ScanBlank();
indent =nctemp1885;
}
int nctemp1886 = (indent < 0);
nctemp1880=nctemp1886;}ScanIndent =indent;
ScanLinesave =ScanLine;
}
int nctemp1901= -1;
int nctemp1898 = (ScanIndentsave ==nctemp1901);
if(nctemp1898)
{
ScanIndentsave =ScanIndent;
}
int nctemp1906 = (ScanIndent > ScanIndentsave);
if(nctemp1906)
{
ScanIndentsave =ScanIndent;
int nctemp1915= ScanIndent;
int nctemp1917=ScanPush(nctemp1915);
return 600;
}
else{
int nctemp1919 = (ScanIndent < ScanIndentsave);
if(nctemp1919)
{
int nctemp1927=ScanPop();
level =nctemp1927;
ScanIndentsave =level;
return 601;
}
else{
int nctemp1937=ScanLex();
c =nctemp1937;
int nctemp1938 = (c ==32);
if(nctemp1938)
{
int nctemp1946=ScanLex();
c =nctemp1946;
}
return c;
}
}
}
nctempchar1 * ScanGetext ()
{
return ScanText;
}
int ScanSetline (int lineno)
{
int nctemp1953= -1;
ScanLinesave =nctemp1953;
ScanLine =lineno;
return 0;
}
int ScanGetword (nctempchar1 *ttext)
{
int nctemp1960= ScanFp;
nctempchar1* nctemp1962= ttext;
int nctemp1965=LibeGetw(nctemp1960,nctemp1962);
return nctemp1965;
}
}
