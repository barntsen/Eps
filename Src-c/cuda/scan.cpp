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
#include <assert.h>

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
static int LibeErrno;
static nctempchar1 *LibeErrstr;
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
static float LibeSincosmax;
static float LibeSincoslim;
static float LibeLnmax;
static float LibeLnmin;
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
static struct nctempLibeFdescr1 *LibeFarr;
;
static nctempchar1 *LibeTmpstr;
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
static int NBLOCKS;
static int NTHREADS;
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
static int ScanIndent;
static int ScanIndentsave;
static int ScanIndentinit;
static nctempchar1 *ScanText;
static nctempchar1 *ScanBuffer;
static int ScanLine;
static int ScanLinesave;
static int ScanFp;
static nctempchar1 *ScanFile;
static nctempint1 *ScanStack;
static int ScanSp;
static int ScanContline;
static int ScanEnd;
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
return 1;
}
int ScanPush (int l)
{
ScanSp = (ScanSp + 1);
int nctemp20 = (ScanSp > 258);
if(nctemp20)
{
struct nctempchar1 *nctemp27;
static struct nctempchar1 nctemp28 = {{ 31}, (char*)"Max no of indentations reached\0"};
nctemp27=&nctemp28;
nctempchar1* nctemp25= nctemp27;
int nctemp29=ScanError(nctemp25);
}
ScanStack->a[ScanSp] = l;
return 1;
}
int ScanPop ()
{
ScanSp = (ScanSp - 1);
int nctemp31 = (ScanSp < 0);
if(nctemp31)
{
struct nctempchar1 *nctemp38;
static struct nctempchar1 nctemp39 = {{ 18}, (char*)"Indentation error\0"};
nctemp38=&nctemp39;
nctempchar1* nctemp36= nctemp38;
int nctemp40=ScanError(nctemp36);
}
int nctemp42=ScanSp;
return ScanStack->a[nctemp42];
}
int ScanInit (nctempchar1 *infile)
{
ScanContline = 0;
int nctemp50=4096;
nctempchar1 *nctemp49;
nctemp49=(nctempchar1*)RunMalloc(sizeof(nctempchar1));
nctemp49->d[0]=4096;
nctemp49->a=(char *)RunMalloc(sizeof(char)*nctemp50);
ScanText=nctemp49;
int nctemp59=4096;
nctempchar1 *nctemp58;
nctemp58=(nctempchar1*)RunMalloc(sizeof(nctempchar1));
nctemp58->d[0]=4096;
nctemp58->a=(char *)RunMalloc(sizeof(char)*nctemp59);
ScanBuffer=nctemp58;
nctempchar1* nctemp66= infile;
struct nctempchar1 *nctemp71;
static struct nctempchar1 nctemp72 = {{ 2}, (char*)"r\0"};
nctemp71=&nctemp72;
nctempchar1* nctemp69= nctemp71;
int nctemp73=LibeOpen(nctemp66,nctemp69);
ScanFp =nctemp73;
int nctemp74 = (ScanFp ==0);
if(nctemp74)
{
int nctemp79= 4;
struct nctempchar1 *nctemp83;
static struct nctempchar1 nctemp84 = {{ 26}, (char*)"Can not open input file: \0"};
nctemp83=&nctemp84;
nctempchar1* nctemp81= nctemp83;
int nctemp85=LibePuts(nctemp79,nctemp81);
int nctemp87= 4;
nctempchar1* nctemp89= infile;
int nctemp92=LibePuts(nctemp87,nctemp89);
int nctemp94= 4;
struct nctempchar1 *nctemp98;
static struct nctempchar1 nctemp99 = {{ 3}, (char*)"\n\0"};
nctemp98=&nctemp99;
nctempchar1* nctemp96= nctemp98;
int nctemp100=LibePuts(nctemp94,nctemp96);
int nctemp102= 4;
int nctemp104=LibeFlush(nctemp102);
return 0;
}
nctempchar1* nctemp111= infile;
nctempchar1* nctemp114=LibeStrsave(nctemp111);
ScanFile=nctemp114;
ScanIndentsave =  -1;
ScanIndent = 0;
int nctemp121=258;
nctempint1 *nctemp120;
nctemp120=(nctempint1*)RunMalloc(sizeof(nctempint1));
nctemp120->d[0]=258;
nctemp120->a=(int *)RunMalloc(sizeof(int)*nctemp121);
ScanStack=nctemp120;
ScanSp = 0;
ScanStack->a[0] = 0;
ScanEnd = 0;
return 1;
}
int ScanGetch ()
{
int nctemp126= ScanFp;
int nctemp128=LibeGetc(nctemp126);
return nctemp128;
}
int ScanIncline ()
{
ScanLinesave = ScanLine;
ScanLine = (ScanLine + 1);
return 1;
}
int ScanUngetch ()
{
int nctemp131= ScanFp;
int nctemp133=LibeUngetc(nctemp131);
return nctemp133;
}
int ScanBlank ()
{
int c;
int indent;
indent = 0;
int nctemp144=ScanGetch();
c =nctemp144;
int nctemp137 = (c ==32);
int nctemp147 = (c ==9);
int nctemp134 = (nctemp137 || nctemp147);
int nctemp151=nctemp134;
while(nctemp151)
{{
indent = (indent + 1);
}
int nctemp162=ScanGetch();
c =nctemp162;
int nctemp155 = (c ==32);
int nctemp165 = (c ==9);
int nctemp152 = (nctemp155 || nctemp165);
nctemp151=nctemp152;}int nctemp169 = (c ==(-1));
if(nctemp169)
{
indent = ScanIndentinit;
return indent;
}
int nctemp174 = (c =='#');
if(nctemp174)
{
indent =  -2;
int nctemp181=ScanGetch();
int nctemp178 = (nctemp181 !=10);
int nctemp183=nctemp178;
while(nctemp183)
{{
indent =  -2;
}
int nctemp187=ScanGetch();
int nctemp184 = (nctemp187 !=10);
nctemp183=nctemp184;}int nctemp190=ScanIncline();
return indent;
}
else{
int nctemp192 = (c ==10);
if(nctemp192)
{
indent =  -1;
int nctemp197=ScanIncline();
return indent;
}
else{
int nctemp200=ScanUngetch();
return indent;
}
}
}
int ScanWhite ()
{
int c;
int d;
int nctemp212=ScanGetch();
c =nctemp212;
int nctemp205 = (c ==32);
int nctemp215 = (c ==9);
int nctemp202 = (nctemp205 || nctemp215);
int nctemp219=nctemp202;
while(nctemp219)
{{
d = 0;
}
int nctemp230=ScanGetch();
c =nctemp230;
int nctemp223 = (c ==32);
int nctemp233 = (c ==9);
int nctemp220 = (nctemp223 || nctemp233);
nctemp219=nctemp220;}int nctemp238=ScanUngetch();
return 1;
}
int ScanComment ()
{
int incomment;
int c;
incomment = 1;
int nctemp240 = (incomment ==1);
int nctemp244=nctemp240;
while(nctemp244)
{{
int nctemp249=ScanGetch();
c =nctemp249;
int nctemp250 = (c ==10);
if(nctemp250)
{
int nctemp255=ScanIncline();
}
int nctemp256 = (c =='*');
if(nctemp256)
{
int nctemp264=ScanGetch();
c =nctemp264;
int nctemp265 = (c ==10);
if(nctemp265)
{
int nctemp270=ScanIncline();
}
int nctemp271 = (c =='/');
if(nctemp271)
{
incomment = 0;
}
}
int nctemp275 = (c ==(-1));
if(nctemp275)
{
struct nctempchar1 *nctemp282;
static struct nctempchar1 nctemp283 = {{ 24}, (char*)"Closing comment missing\0"};
nctemp282=&nctemp283;
nctempchar1* nctemp280= nctemp282;
int nctemp284=ScanError(nctemp280);
}
}
int nctemp285 = (incomment ==1);
nctemp244=nctemp285;}return 1;
}
int ScanLcomment ()
{
int incomment;
int c;
incomment = 1;
int nctemp290 = (incomment ==1);
int nctemp294=nctemp290;
while(nctemp294)
{{
int nctemp299=ScanGetch();
c =nctemp299;
int nctemp300 = (c ==10);
if(nctemp300)
{
incomment = 0;
}
}
int nctemp304 = (incomment ==1);
nctemp294=nctemp304;}int nctemp309=ScanUngetch();
return 1;
}
int ScanFtail (int p)
{
int c;
int nctemp317=ScanGetch();
c =nctemp317;
int nctemp312= c;
int nctemp318=LibeIsdigit(nctemp312);
int nctemp319=nctemp318;
while(nctemp319)
{{
p = (p + 1);
int nctemp324=ScanText->d[0];int nctemp320 = (p >= nctemp324);
if(nctemp320)
{
struct nctempchar1 *nctemp331;
static struct nctempchar1 nctemp332 = {{ 18}, (char*)"Digit is too long\0"};
nctemp331=&nctemp332;
nctempchar1* nctemp329= nctemp331;
int nctemp333=ScanError(nctemp329);
}
int nctemp337=p;
char nctemp340=(char)(c);
ScanText->a[nctemp337] =nctemp340;
}
int nctemp349=ScanGetch();
c =nctemp349;
int nctemp344= c;
int nctemp350=LibeIsdigit(nctemp344);
nctemp319=nctemp350;}int nctemp354 = (c =='e');
int nctemp359 = (c =='E');
int nctemp351 = (nctemp354 || nctemp359);
if(nctemp351)
{
p = (p + 1);
int nctemp367=ScanText->d[0];int nctemp363 = (p >= nctemp367);
if(nctemp363)
{
struct nctempchar1 *nctemp374;
static struct nctempchar1 nctemp375 = {{ 18}, (char*)"Digit is too long\0"};
nctemp374=&nctemp375;
nctempchar1* nctemp372= nctemp374;
int nctemp376=ScanError(nctemp372);
}
int nctemp380=p;
char nctemp383=(char)(c);
ScanText->a[nctemp380] =nctemp383;
int nctemp390=ScanGetch();
c =nctemp390;
int nctemp394 = (c ==43);
int nctemp399 = (c ==45);
int nctemp391 = (nctemp394 || nctemp399);
if(nctemp391)
{
p = (p + 1);
int nctemp407=ScanText->d[0];int nctemp403 = (p >= nctemp407);
if(nctemp403)
{
struct nctempchar1 *nctemp414;
static struct nctempchar1 nctemp415 = {{ 18}, (char*)"Digit is too long\0"};
nctemp414=&nctemp415;
nctempchar1* nctemp412= nctemp414;
int nctemp416=ScanError(nctemp412);
}
int nctemp420=p;
char nctemp423=(char)(c);
ScanText->a[nctemp420] =nctemp423;
int nctemp432=ScanGetch();
c =nctemp432;
int nctemp427= c;
int nctemp433=LibeIsdigit(nctemp427);
int nctemp434=nctemp433;
while(nctemp434)
{{
p = (p + 1);
int nctemp439=ScanText->d[0];int nctemp435 = (p >= nctemp439);
if(nctemp435)
{
struct nctempchar1 *nctemp446;
static struct nctempchar1 nctemp447 = {{ 18}, (char*)"Digit is too long\0"};
nctemp446=&nctemp447;
nctempchar1* nctemp444= nctemp446;
int nctemp448=ScanError(nctemp444);
}
int nctemp452=p;
char nctemp455=(char)(c);
ScanText->a[nctemp452] =nctemp455;
}
int nctemp464=ScanGetch();
c =nctemp464;
int nctemp459= c;
int nctemp465=LibeIsdigit(nctemp459);
nctemp434=nctemp465;}int nctemp467=ScanUngetch();
int nctemp476 = p + 1;
int nctemp471=nctemp476;
char nctemp478=(char)(0);
ScanText->a[nctemp471] =nctemp478;
return p;
}
else{
struct nctempchar1 *nctemp485;
static struct nctempchar1 nctemp486 = {{ 14}, (char*)"Unknown token\0"};
nctemp485=&nctemp486;
nctempchar1* nctemp483= nctemp485;
int nctemp487=ScanError(nctemp483);
}
return 0;
}
else{
int nctemp490=ScanUngetch();
int nctemp499 = p + 1;
int nctemp494=nctemp499;
char nctemp501=(char)(0);
ScanText->a[nctemp494] =nctemp501;
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
int nctemp506=ScanWhite();
int nctemp511=ScanGetch();
c =nctemp511;
p = 0;
int nctemp515=p;
char nctemp518=(char)(c);
ScanText->a[nctemp515] =nctemp518;
comments = 1;
int nctemp521 = (comments ==1);
int nctemp525=nctemp521;
while(nctemp525)
{{
int nctemp526 = (c =='#');
if(nctemp526)
{
int nctemp531=ScanLcomment();
int nctemp536=ScanGetch();
c =nctemp536;
int nctemp540=p;
char nctemp543=(char)(c);
ScanText->a[nctemp540] =nctemp543;
}
else{
comments = 0;
}
}
int nctemp546 = (comments ==1);
nctemp525=nctemp546;}int nctemp550 = (c ==(-1));
if(nctemp550)
{
rval = 19;
return rval;
}
int nctemp555 = (c ==43);
if(nctemp555)
{
rval = 43;
}
else{
int nctemp559 = (c ==42);
if(nctemp559)
{
rval = 42;
}
else{
int nctemp563 = (c ==47);
if(nctemp563)
{
rval = 47;
}
else{
int nctemp567 = (c ==92);
if(nctemp567)
{
rval = 32;
int nctemp572=ScanGetch();
ScanContline = (ScanContline + 1);
}
else{
int nctemp573 = (c ==40);
if(nctemp573)
{
rval = 40;
}
else{
int nctemp577 = (c ==41);
if(nctemp577)
{
rval = 41;
}
else{
int nctemp581 = (c ==93);
if(nctemp581)
{
rval = 93;
}
else{
int nctemp585 = (c ==91);
if(nctemp585)
{
rval = 91;
}
else{
int nctemp589 = (c ==123);
if(nctemp589)
{
rval = 123;
}
else{
int nctemp593 = (c ==125);
if(nctemp593)
{
rval = 125;
}
else{
int nctemp597 = (c ==58);
if(nctemp597)
{
rval = 58;
}
else{
int nctemp601 = (c ==59);
if(nctemp601)
{
rval = 59;
}
else{
int nctemp605 = (c ==44);
if(nctemp605)
{
rval = 44;
}
else{
int nctemp609 = (c ==46);
if(nctemp609)
{
rval = 46;
}
else{
int nctemp613 = (c ==10);
if(nctemp613)
{
rval = 10;
int nctemp618=ScanIncline();
}
else{
int nctemp619 = (c ==60);
if(nctemp619)
{
int nctemp630=ScanGetch();
c =nctemp630;
int nctemp623 = (c ==61);
if(nctemp623)
{
rval = 20;
p = (p + 1);
int nctemp635=p;
char nctemp638=(char)(c);
ScanText->a[nctemp635] =nctemp638;
}
else{
int nctemp642=ScanUngetch();
rval = 60;
}
}
else{
int nctemp643 = (c ==62);
if(nctemp643)
{
int nctemp654=ScanGetch();
c =nctemp654;
int nctemp647 = (c ==61);
if(nctemp647)
{
rval = 21;
p = (p + 1);
int nctemp659=p;
char nctemp662=(char)(c);
ScanText->a[nctemp659] =nctemp662;
}
else{
int nctemp666=ScanUngetch();
rval = 62;
}
}
else{
int nctemp667 = (c ==45);
if(nctemp667)
{
int nctemp678=ScanGetch();
c =nctemp678;
int nctemp671 = (c ==62);
if(nctemp671)
{
rval = 2;
p = (p + 1);
int nctemp683=p;
char nctemp686=(char)(c);
ScanText->a[nctemp683] =nctemp686;
}
else{
int nctemp690=ScanUngetch();
rval = 45;
}
}
else{
int nctemp691 = (c ==124);
if(nctemp691)
{
int nctemp702=ScanGetch();
c =nctemp702;
int nctemp695 = (c ==124);
if(nctemp695)
{
rval = 5;
p = (p + 1);
int nctemp707=p;
char nctemp710=(char)(c);
ScanText->a[nctemp707] =nctemp710;
}
else{
struct nctempchar1 *nctemp716;
static struct nctempchar1 nctemp717 = {{ 18}, (char*)"Illegal character\0"};
nctemp716=&nctemp717;
nctempchar1* nctemp714= nctemp716;
int nctemp718=ScanError(nctemp714);
}
}
else{
int nctemp719 = (c ==38);
if(nctemp719)
{
int nctemp730=ScanGetch();
c =nctemp730;
int nctemp723 = (c ==38);
if(nctemp723)
{
rval = 6;
p = (p + 1);
int nctemp735=p;
char nctemp738=(char)(c);
ScanText->a[nctemp735] =nctemp738;
}
else{
struct nctempchar1 *nctemp744;
static struct nctempchar1 nctemp745 = {{ 18}, (char*)"Illegal character\0"};
nctemp744=&nctemp745;
nctempchar1* nctemp742= nctemp744;
int nctemp746=ScanError(nctemp742);
}
}
else{
int nctemp747 = (c ==33);
if(nctemp747)
{
int nctemp758=ScanGetch();
c =nctemp758;
int nctemp751 = (c ==61);
if(nctemp751)
{
rval = 4;
p = (p + 1);
int nctemp763=p;
char nctemp766=(char)(c);
ScanText->a[nctemp763] =nctemp766;
}
else{
struct nctempchar1 *nctemp772;
static struct nctempchar1 nctemp773 = {{ 18}, (char*)"Illegal character\0"};
nctemp772=&nctemp773;
nctempchar1* nctemp770= nctemp772;
int nctemp774=ScanError(nctemp770);
}
}
else{
int nctemp775 = (c ==61);
if(nctemp775)
{
int nctemp786=ScanGetch();
c =nctemp786;
int nctemp779 = (c ==61);
if(nctemp779)
{
rval = 3;
p = (p + 1);
int nctemp791=p;
char nctemp794=(char)(c);
ScanText->a[nctemp791] =nctemp794;
}
else{
int nctemp798=ScanUngetch();
rval = 61;
}
}
else{
int nctemp799 = (c ==34);
if(nctemp799)
{
int nctemp806=p;
char nctemp809=(char)(34);
ScanText->a[nctemp806] =nctemp809;
p = (p + 1);
string = 1;
int nctemp812 = (string ==1);
int nctemp816=nctemp812;
while(nctemp816)
{{
int nctemp824=ScanGetch();
c =nctemp824;
int nctemp817 = (c !=34);
if(nctemp817)
{
string = 1;
}
else{
int nctemp837 = p - 1;
int nctemp832=nctemp837;
int nctemp829=(int)(ScanText->a[nctemp832]);
int nctemp826 = (nctemp829 ==92);
if(nctemp826)
{
string = 1;
}
else{
string = 0;
}
}
int nctemp842=p;
char nctemp845=(char)(c);
ScanText->a[nctemp842] =nctemp845;
p = (p + 1);
int nctemp855=ScanText->d[0];int nctemp860 = nctemp855 - 1;
int nctemp848 = (p >= nctemp860);
if(nctemp848)
{
struct nctempchar1 *nctemp864;
static struct nctempchar1 nctemp865 = {{ 19}, (char*)"String is too long\0"};
nctemp864=&nctemp865;
nctempchar1* nctemp862= nctemp864;
int nctemp866=ScanError(nctemp862);
}
}
int nctemp867 = (string ==1);
nctemp816=nctemp867;}int nctemp874=p;
char nctemp877=(char)(0);
ScanText->a[nctemp874] =nctemp877;
rval = 18;
}
else{
int nctemp880 = (c ==39);
if(nctemp880)
{
int nctemp887=p;
char nctemp890=(char)(39);
ScanText->a[nctemp887] =nctemp890;
p = (p + 1);
int nctemp896=p;
int nctemp902=ScanGetch();
char nctemp899=(char)(nctemp902);
ScanText->a[nctemp896] =nctemp899;
int nctemp907=ScanGetch();
c =nctemp907;
int nctemp908 = (c !=39);
if(nctemp908)
{
struct nctempchar1 *nctemp915;
static struct nctempchar1 nctemp916 = {{ 31}, (char*)"Character constant is too long\0"};
nctemp915=&nctemp916;
nctempchar1* nctemp913= nctemp915;
int nctemp917=ScanError(nctemp913);
}
else{
p = (p + 1);
int nctemp921=p;
char nctemp924=(char)(c);
ScanText->a[nctemp921] =nctemp924;
}
p = (p + 1);
int nctemp930=p;
char nctemp933=(char)(0);
ScanText->a[nctemp930] =nctemp933;
rval = 17;
}
else{
int nctemp937= c;
int nctemp939=LibeIsdigit(nctemp937);
if(nctemp939)
{
int nctemp946=ScanGetch();
c =nctemp946;
int nctemp941= c;
int nctemp947=LibeIsdigit(nctemp941);
int nctemp948=nctemp947;
while(nctemp948)
{{
p = (p + 1);
int nctemp952=p;
char nctemp955=(char)(c);
ScanText->a[nctemp952] =nctemp955;
int nctemp962=ScanText->d[0];int nctemp958 = (p >= nctemp962);
if(nctemp958)
{
struct nctempchar1 *nctemp969;
static struct nctempchar1 nctemp970 = {{ 18}, (char*)"Digit is too long\0"};
nctemp969=&nctemp970;
nctempchar1* nctemp967= nctemp969;
int nctemp971=ScanError(nctemp967);
}
}
int nctemp978=ScanGetch();
c =nctemp978;
int nctemp973= c;
int nctemp979=LibeIsdigit(nctemp973);
nctemp948=nctemp979;}int nctemp980 = (c ==46);
if(nctemp980)
{
p = (p + 1);
int nctemp988=ScanText->d[0];int nctemp984 = (p >= nctemp988);
if(nctemp984)
{
struct nctempchar1 *nctemp995;
static struct nctempchar1 nctemp996 = {{ 18}, (char*)"Digit is too long\0"};
nctemp995=&nctemp996;
nctempchar1* nctemp993= nctemp995;
int nctemp997=ScanError(nctemp993);
}
int nctemp1001=p;
char nctemp1004=(char)(c);
ScanText->a[nctemp1001] =nctemp1004;
int nctemp1011= p;
int nctemp1013=ScanFtail(nctemp1011);
p =nctemp1013;
rval = 24;
}
else{
int nctemp1015=ScanUngetch();
int nctemp1024 = p + 1;
int nctemp1019=nctemp1024;
char nctemp1026=(char)(0);
ScanText->a[nctemp1019] =nctemp1026;
rval = 17;
}
}
else{
int nctemp1030= c;
int nctemp1032=LibeIsalnum(nctemp1030);
if(nctemp1032)
{
int nctemp1039=ScanGetch();
c =nctemp1039;
int nctemp1034= c;
int nctemp1040=LibeIsalnum(nctemp1034);
int nctemp1041=nctemp1040;
while(nctemp1041)
{{
p = (p + 1);
int nctemp1045=p;
char nctemp1048=(char)(c);
ScanText->a[nctemp1045] =nctemp1048;
int nctemp1055=ScanText->d[0];int nctemp1051 = (p >= nctemp1055);
if(nctemp1051)
{
struct nctempchar1 *nctemp1062;
static struct nctempchar1 nctemp1063 = {{ 23}, (char*)"Identifier is too long\0"};
nctemp1062=&nctemp1063;
nctempchar1* nctemp1060= nctemp1062;
int nctemp1064=ScanError(nctemp1060);
}
}
int nctemp1071=ScanGetch();
c =nctemp1071;
int nctemp1066= c;
int nctemp1072=LibeIsalnum(nctemp1066);
nctemp1041=nctemp1072;}int nctemp1074=ScanUngetch();
int nctemp1083 = p + 1;
int nctemp1078=nctemp1083;
char nctemp1085=(char)(0);
ScanText->a[nctemp1078] =nctemp1085;
nctempchar1* nctemp1089= ScanText;
struct nctempchar1 *nctemp1094;
static struct nctempchar1 nctemp1095 = {{ 4}, (char*)"int\0"};
nctemp1094=&nctemp1095;
nctempchar1* nctemp1092= nctemp1094;
int nctemp1096=LibeStrcmp(nctemp1089,nctemp1092);
if(nctemp1096)
{
rval = 7;
}
else{
nctempchar1* nctemp1098= ScanText;
struct nctempchar1 *nctemp1103;
static struct nctempchar1 nctemp1104 = {{ 5}, (char*)"char\0"};
nctemp1103=&nctemp1104;
nctempchar1* nctemp1101= nctemp1103;
int nctemp1105=LibeStrcmp(nctemp1098,nctemp1101);
if(nctemp1105)
{
rval = 8;
}
else{
nctempchar1* nctemp1107= ScanText;
struct nctempchar1 *nctemp1112;
static struct nctempchar1 nctemp1113 = {{ 6}, (char*)"float\0"};
nctemp1112=&nctemp1113;
nctempchar1* nctemp1110= nctemp1112;
int nctemp1114=LibeStrcmp(nctemp1107,nctemp1110);
if(nctemp1114)
{
rval = 9;
}
else{
nctempchar1* nctemp1116= ScanText;
struct nctempchar1 *nctemp1121;
static struct nctempchar1 nctemp1122 = {{ 6}, (char*)"const\0"};
nctemp1121=&nctemp1122;
nctempchar1* nctemp1119= nctemp1121;
int nctemp1123=LibeStrcmp(nctemp1116,nctemp1119);
if(nctemp1123)
{
rval = 431;
}
else{
nctempchar1* nctemp1125= ScanText;
struct nctempchar1 *nctemp1130;
static struct nctempchar1 nctemp1131 = {{ 8}, (char*)"complex\0"};
nctemp1130=&nctemp1131;
nctempchar1* nctemp1128= nctemp1130;
int nctemp1132=LibeStrcmp(nctemp1125,nctemp1128);
if(nctemp1132)
{
rval = 510;
}
else{
nctempchar1* nctemp1134= ScanText;
struct nctempchar1 *nctemp1139;
static struct nctempchar1 nctemp1140 = {{ 7}, (char*)"struct\0"};
nctemp1139=&nctemp1140;
nctempchar1* nctemp1137= nctemp1139;
int nctemp1141=LibeStrcmp(nctemp1134,nctemp1137);
if(nctemp1141)
{
rval = 11;
}
else{
nctempchar1* nctemp1143= ScanText;
struct nctempchar1 *nctemp1148;
static struct nctempchar1 nctemp1149 = {{ 6}, (char*)"class\0"};
nctemp1148=&nctemp1149;
nctempchar1* nctemp1146= nctemp1148;
int nctemp1150=LibeStrcmp(nctemp1143,nctemp1146);
if(nctemp1150)
{
rval = 11;
}
else{
nctempchar1* nctemp1152= ScanText;
struct nctempchar1 *nctemp1157;
static struct nctempchar1 nctemp1158 = {{ 7}, (char*)"import\0"};
nctemp1157=&nctemp1158;
nctempchar1* nctemp1155= nctemp1157;
int nctemp1159=LibeStrcmp(nctemp1152,nctemp1155);
if(nctemp1159)
{
rval = 433;
}
else{
nctempchar1* nctemp1161= ScanText;
struct nctempchar1 *nctemp1166;
static struct nctempchar1 nctemp1167 = {{ 6}, (char*)"while\0"};
nctemp1166=&nctemp1167;
nctempchar1* nctemp1164= nctemp1166;
int nctemp1168=LibeStrcmp(nctemp1161,nctemp1164);
if(nctemp1168)
{
rval = 12;
}
else{
nctempchar1* nctemp1170= ScanText;
struct nctempchar1 *nctemp1175;
static struct nctempchar1 nctemp1176 = {{ 7}, (char*)"return\0"};
nctemp1175=&nctemp1176;
nctempchar1* nctemp1173= nctemp1175;
int nctemp1177=LibeStrcmp(nctemp1170,nctemp1173);
if(nctemp1177)
{
rval = 30;
}
else{
nctempchar1* nctemp1179= ScanText;
struct nctempchar1 *nctemp1184;
static struct nctempchar1 nctemp1185 = {{ 4}, (char*)"def\0"};
nctemp1184=&nctemp1185;
nctempchar1* nctemp1182= nctemp1184;
int nctemp1186=LibeStrcmp(nctemp1179,nctemp1182);
if(nctemp1186)
{
rval = 1100;
}
else{
nctempchar1* nctemp1188= ScanText;
struct nctempchar1 *nctemp1193;
static struct nctempchar1 nctemp1194 = {{ 3}, (char*)"if\0"};
nctemp1193=&nctemp1194;
nctempchar1* nctemp1191= nctemp1193;
int nctemp1195=LibeStrcmp(nctemp1188,nctemp1191);
if(nctemp1195)
{
rval = 14;
}
else{
nctempchar1* nctemp1197= ScanText;
struct nctempchar1 *nctemp1202;
static struct nctempchar1 nctemp1203 = {{ 5}, (char*)"else\0"};
nctemp1202=&nctemp1203;
nctempchar1* nctemp1200= nctemp1202;
int nctemp1204=LibeStrcmp(nctemp1197,nctemp1200);
if(nctemp1204)
{
rval = 15;
}
else{
nctempchar1* nctemp1206= ScanText;
struct nctempchar1 *nctemp1211;
static struct nctempchar1 nctemp1212 = {{ 7}, (char*)"sizeof\0"};
nctemp1211=&nctemp1212;
nctempchar1* nctemp1209= nctemp1211;
int nctemp1213=LibeStrcmp(nctemp1206,nctemp1209);
if(nctemp1213)
{
rval = 22;
}
else{
nctempchar1* nctemp1215= ScanText;
struct nctempchar1 *nctemp1220;
static struct nctempchar1 nctemp1221 = {{ 5}, (char*)"cast\0"};
nctemp1220=&nctemp1221;
nctempchar1* nctemp1218= nctemp1220;
int nctemp1222=LibeStrcmp(nctemp1215,nctemp1218);
if(nctemp1222)
{
rval = 23;
}
else{
nctempchar1* nctemp1224= ScanText;
struct nctempchar1 *nctemp1229;
static struct nctempchar1 nctemp1230 = {{ 4}, (char*)"new\0"};
nctemp1229=&nctemp1230;
nctempchar1* nctemp1227= nctemp1229;
int nctemp1231=LibeStrcmp(nctemp1224,nctemp1227);
if(nctemp1231)
{
rval = 26;
}
else{
nctempchar1* nctemp1233= ScanText;
struct nctempchar1 *nctemp1238;
static struct nctempchar1 nctemp1239 = {{ 7}, (char*)"delete\0"};
nctemp1238=&nctemp1239;
nctempchar1* nctemp1236= nctemp1238;
int nctemp1240=LibeStrcmp(nctemp1233,nctemp1236);
if(nctemp1240)
{
rval = 50;
}
else{
nctempchar1* nctemp1242= ScanText;
struct nctempchar1 *nctemp1247;
static struct nctempchar1 nctemp1248 = {{ 4}, (char*)"len\0"};
nctemp1247=&nctemp1248;
nctempchar1* nctemp1245= nctemp1247;
int nctemp1249=LibeStrcmp(nctemp1242,nctemp1245);
if(nctemp1249)
{
rval = 29;
}
else{
nctempchar1* nctemp1251= ScanText;
struct nctempchar1 *nctemp1256;
static struct nctempchar1 nctemp1257 = {{ 6}, (char*)"cmplx\0"};
nctemp1256=&nctemp1257;
nctempchar1* nctemp1254= nctemp1256;
int nctemp1258=LibeStrcmp(nctemp1251,nctemp1254);
if(nctemp1258)
{
rval = 25;
}
else{
nctempchar1* nctemp1260= ScanText;
struct nctempchar1 *nctemp1265;
static struct nctempchar1 nctemp1266 = {{ 3}, (char*)"re\0"};
nctemp1265=&nctemp1266;
nctempchar1* nctemp1263= nctemp1265;
int nctemp1267=LibeStrcmp(nctemp1260,nctemp1263);
if(nctemp1267)
{
rval = 28;
}
else{
nctempchar1* nctemp1269= ScanText;
struct nctempchar1 *nctemp1274;
static struct nctempchar1 nctemp1275 = {{ 3}, (char*)"im\0"};
nctemp1274=&nctemp1275;
nctempchar1* nctemp1272= nctemp1274;
int nctemp1276=LibeStrcmp(nctemp1269,nctemp1272);
if(nctemp1276)
{
rval = 27;
}
else{
nctempchar1* nctemp1278= ScanText;
struct nctempchar1 *nctemp1283;
static struct nctempchar1 nctemp1284 = {{ 4}, (char*)"for\0"};
nctemp1283=&nctemp1284;
nctempchar1* nctemp1281= nctemp1283;
int nctemp1285=LibeStrcmp(nctemp1278,nctemp1281);
if(nctemp1285)
{
rval = 26;
}
else{
nctempchar1* nctemp1287= ScanText;
struct nctempchar1 *nctemp1292;
static struct nctempchar1 nctemp1293 = {{ 9}, (char*)"parallel\0"};
nctemp1292=&nctemp1293;
nctempchar1* nctemp1290= nctemp1292;
int nctemp1294=LibeStrcmp(nctemp1287,nctemp1290);
if(nctemp1294)
{
rval = 31;
}
else{
nctempchar1* nctemp1296= ScanText;
struct nctempchar1 *nctemp1301;
static struct nctempchar1 nctemp1302 = {{ 5}, (char*)"pass\0"};
nctemp1301=&nctemp1302;
nctempchar1* nctemp1299= nctemp1301;
int nctemp1303=LibeStrcmp(nctemp1296,nctemp1299);
if(nctemp1303)
{
rval = 701;
}
else{
nctempchar1* nctemp1305= ScanText;
struct nctempchar1 *nctemp1310;
static struct nctempchar1 nctemp1311 = {{ 3}, (char*)"in\0"};
nctemp1310=&nctemp1311;
nctempchar1* nctemp1308= nctemp1310;
int nctemp1312=LibeStrcmp(nctemp1305,nctemp1308);
if(nctemp1312)
{
rval = 702;
}
else{
nctempchar1* nctemp1314= ScanText;
struct nctempchar1 *nctemp1319;
static struct nctempchar1 nctemp1320 = {{ 6}, (char*)"range\0"};
nctemp1319=&nctemp1320;
nctempchar1* nctemp1317= nctemp1319;
int nctemp1321=LibeStrcmp(nctemp1314,nctemp1317);
if(nctemp1321)
{
rval = 703;
}
else{
rval = 1;
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
}
else{
struct nctempchar1 *nctemp1325;
static struct nctempchar1 nctemp1326 = {{ 14}, (char*)"Invalid token\0"};
nctemp1325=&nctemp1326;
nctempchar1* nctemp1323= nctemp1325;
int nctemp1327=ScanError(nctemp1323);
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
int nctemp1337 = p + 1;
int nctemp1332=nctemp1337;
char nctemp1339=(char)(0);
ScanText->a[nctemp1332] =nctemp1339;
return rval;
}
nctempchar1 * ScanSetfile (nctempchar1 *fname)
{
nctempchar1 *nctemp1344 =ScanFile;
int nctemp1343 =(nctemp1344!=0);
if(nctemp1343)
{
RunFree(ScanFile->a);
RunFree(ScanFile);
}
nctempchar1* nctemp1356= fname;
nctempchar1* nctemp1359=LibeStrsave(nctemp1356);
ScanFile=nctemp1359;
return ScanFile;
}
int ScanGetok ()
{
int c;
int indent;
int level;
int nctemp1362 = (ScanLine > ScanLinesave);
if(nctemp1362)
{
indent =  -1;
int nctemp1372= -1;
int nctemp1369 = (indent ==nctemp1372);
int nctemp1377= -2;
int nctemp1374 = (indent ==nctemp1377);
int nctemp1366 = (nctemp1369 || nctemp1374);
int nctemp1378=nctemp1366;
while(nctemp1378)
{{
int nctemp1383=ScanBlank();
indent =nctemp1383;
}
int nctemp1390= -1;
int nctemp1387 = (indent ==nctemp1390);
int nctemp1395= -2;
int nctemp1392 = (indent ==nctemp1395);
int nctemp1384 = (nctemp1387 || nctemp1392);
nctemp1378=nctemp1384;}ScanIndent = indent;
ScanLinesave = ScanLine;
}
int nctemp1399= -1;
int nctemp1396 = (ScanIndentsave ==nctemp1399);
if(nctemp1396)
{
ScanIndentsave = ScanIndent;
ScanIndentinit = ScanIndent;
ScanStack->a[0] = ScanIndentinit;
}
int nctemp1400 = (ScanIndent > ScanIndentsave);
if(nctemp1400)
{
ScanIndentsave = ScanIndent;
int nctemp1405= ScanIndent;
int nctemp1407=ScanPush(nctemp1405);
return 600;
}
else{
int nctemp1409 = (ScanIndent < ScanIndentsave);
if(nctemp1409)
{
int nctemp1417=ScanPop();
level =nctemp1417;
ScanIndentsave = level;
return 601;
}
else{
int nctemp1423=ScanLex();
c =nctemp1423;
int nctemp1424 = (c ==32);
if(nctemp1424)
{
int nctemp1432=ScanLex();
c =nctemp1432;
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
ScanLinesave =  -1;
ScanLine = lineno;
return 0;
}
int ScanGetword (nctempchar1 *ttext)
{
int nctemp1438= ScanFp;
nctempchar1* nctemp1440= ttext;
int nctemp1443=LibeGetw(nctemp1438,nctemp1440);
return nctemp1443;
}
}
