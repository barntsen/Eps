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
int ScanIndentinit;
nctempchar1 *ScanText;
nctempchar1 *ScanBuffer;
int ScanLine;
int ScanLinesave;
int ScanFp;
nctempchar1 *ScanFile;
nctempint1 *ScanStack;
int ScanSp;
int ScanContline;
int ScanEnd;
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
int nctemp160 = indent + 1;
indent =nctemp160;
}
int nctemp171=ScanGetch();
c =nctemp171;
int nctemp164 = (c ==32);
int nctemp174 = (c ==9);
int nctemp161 = (nctemp164 || nctemp174);
nctemp151=nctemp161;}int nctemp178 = (c ==(-1));
if(nctemp178)
{
indent =ScanIndentinit;
return indent;
}
int nctemp187 = (c =='#');
if(nctemp187)
{
int nctemp194= -2;
indent =nctemp194;
int nctemp198=ScanGetch();
int nctemp195 = (nctemp198 !=10);
int nctemp200=nctemp195;
while(nctemp200)
{{
int nctemp204= -2;
indent =nctemp204;
}
int nctemp208=ScanGetch();
int nctemp205 = (nctemp208 !=10);
nctemp200=nctemp205;}int nctemp211=ScanIncline();
return indent;
}
else{
int nctemp213 = (c ==10);
if(nctemp213)
{
int nctemp220= -1;
indent =nctemp220;
int nctemp222=ScanIncline();
return indent;
}
else{
int nctemp225=ScanUngetch();
return indent;
}
}
}
int ScanWhite ()
{
int c;
int d;
int nctemp237=ScanGetch();
c =nctemp237;
int nctemp230 = (c ==32);
int nctemp240 = (c ==9);
int nctemp227 = (nctemp230 || nctemp240);
int nctemp244=nctemp227;
while(nctemp244)
{{
d =0;
}
int nctemp259=ScanGetch();
c =nctemp259;
int nctemp252 = (c ==32);
int nctemp262 = (c ==9);
int nctemp249 = (nctemp252 || nctemp262);
nctemp244=nctemp249;}int nctemp267=ScanUngetch();
return 1;
}
int ScanComment ()
{
int incomment;
int c;
incomment = 1;
int nctemp269 = (incomment ==1);
int nctemp273=nctemp269;
while(nctemp273)
{{
int nctemp278=ScanGetch();
c =nctemp278;
int nctemp279 = (c ==10);
if(nctemp279)
{
int nctemp284=ScanIncline();
}
int nctemp285 = (c =='*');
if(nctemp285)
{
int nctemp293=ScanGetch();
c =nctemp293;
int nctemp294 = (c ==10);
if(nctemp294)
{
int nctemp299=ScanIncline();
}
int nctemp300 = (c =='/');
if(nctemp300)
{
incomment =0;
}
}
int nctemp308 = (c ==(-1));
if(nctemp308)
{
struct nctempchar1 *nctemp315;
static struct nctempchar1 nctemp316 = {{ 24}, (char*)"Closing comment missing\0"};
nctemp315=&nctemp316;
nctempchar1* nctemp313= nctemp315;
int nctemp317=ScanError(nctemp313);
}
}
int nctemp318 = (incomment ==1);
nctemp273=nctemp318;}return 1;
}
int ScanLcomment ()
{
int incomment;
int c;
incomment = 1;
int nctemp323 = (incomment ==1);
int nctemp327=nctemp323;
while(nctemp327)
{{
int nctemp332=ScanGetch();
c =nctemp332;
int nctemp333 = (c ==10);
if(nctemp333)
{
incomment =0;
}
}
int nctemp341 = (incomment ==1);
nctemp327=nctemp341;}int nctemp346=ScanUngetch();
return 1;
}
int ScanFtail (int p)
{
int c;
int nctemp354=ScanGetch();
c =nctemp354;
int nctemp349= c;
int nctemp355=LibeIsdigit(nctemp349);
int nctemp356=nctemp355;
while(nctemp356)
{{
int nctemp365 = p + 1;
p =nctemp365;
int nctemp370=ScanText->d[0];int nctemp366 = (p >= nctemp370);
if(nctemp366)
{
struct nctempchar1 *nctemp377;
static struct nctempchar1 nctemp378 = {{ 18}, (char*)"Digit is too long\0"};
nctemp377=&nctemp378;
nctempchar1* nctemp375= nctemp377;
int nctemp379=ScanError(nctemp375);
}
int nctemp383=p;
char nctemp386=(char)(c);
ScanText->a[nctemp383] =nctemp386;
}
int nctemp395=ScanGetch();
c =nctemp395;
int nctemp390= c;
int nctemp396=LibeIsdigit(nctemp390);
nctemp356=nctemp396;}int nctemp400 = (c =='e');
int nctemp405 = (c =='E');
int nctemp397 = (nctemp400 || nctemp405);
if(nctemp397)
{
int nctemp417 = p + 1;
p =nctemp417;
int nctemp422=ScanText->d[0];int nctemp418 = (p >= nctemp422);
if(nctemp418)
{
struct nctempchar1 *nctemp429;
static struct nctempchar1 nctemp430 = {{ 18}, (char*)"Digit is too long\0"};
nctemp429=&nctemp430;
nctempchar1* nctemp427= nctemp429;
int nctemp431=ScanError(nctemp427);
}
int nctemp435=p;
char nctemp438=(char)(c);
ScanText->a[nctemp435] =nctemp438;
int nctemp445=ScanGetch();
c =nctemp445;
int nctemp449 = (c ==43);
int nctemp454 = (c ==45);
int nctemp446 = (nctemp449 || nctemp454);
if(nctemp446)
{
int nctemp466 = p + 1;
p =nctemp466;
int nctemp471=ScanText->d[0];int nctemp467 = (p >= nctemp471);
if(nctemp467)
{
struct nctempchar1 *nctemp478;
static struct nctempchar1 nctemp479 = {{ 18}, (char*)"Digit is too long\0"};
nctemp478=&nctemp479;
nctempchar1* nctemp476= nctemp478;
int nctemp480=ScanError(nctemp476);
}
int nctemp484=p;
char nctemp487=(char)(c);
ScanText->a[nctemp484] =nctemp487;
int nctemp496=ScanGetch();
c =nctemp496;
int nctemp491= c;
int nctemp497=LibeIsdigit(nctemp491);
int nctemp498=nctemp497;
while(nctemp498)
{{
int nctemp507 = p + 1;
p =nctemp507;
int nctemp512=ScanText->d[0];int nctemp508 = (p >= nctemp512);
if(nctemp508)
{
struct nctempchar1 *nctemp519;
static struct nctempchar1 nctemp520 = {{ 18}, (char*)"Digit is too long\0"};
nctemp519=&nctemp520;
nctempchar1* nctemp517= nctemp519;
int nctemp521=ScanError(nctemp517);
}
int nctemp525=p;
char nctemp528=(char)(c);
ScanText->a[nctemp525] =nctemp528;
}
int nctemp537=ScanGetch();
c =nctemp537;
int nctemp532= c;
int nctemp538=LibeIsdigit(nctemp532);
nctemp498=nctemp538;}int nctemp540=ScanUngetch();
int nctemp549 = p + 1;
int nctemp544=nctemp549;
char nctemp551=(char)(0);
ScanText->a[nctemp544] =nctemp551;
return p;
}
else{
struct nctempchar1 *nctemp558;
static struct nctempchar1 nctemp559 = {{ 14}, (char*)"Unknown token\0"};
nctemp558=&nctemp559;
nctempchar1* nctemp556= nctemp558;
int nctemp560=ScanError(nctemp556);
}
return 0;
}
else{
int nctemp563=ScanUngetch();
int nctemp572 = p + 1;
int nctemp567=nctemp572;
char nctemp574=(char)(0);
ScanText->a[nctemp567] =nctemp574;
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
int nctemp579=ScanWhite();
int nctemp584=ScanGetch();
c =nctemp584;
p = 0;
int nctemp588=p;
char nctemp591=(char)(c);
ScanText->a[nctemp588] =nctemp591;
comments = 1;
int nctemp594 = (comments ==1);
int nctemp598=nctemp594;
while(nctemp598)
{{
int nctemp599 = (c =='#');
if(nctemp599)
{
int nctemp604=ScanLcomment();
int nctemp609=ScanGetch();
c =nctemp609;
int nctemp613=p;
char nctemp616=(char)(c);
ScanText->a[nctemp613] =nctemp616;
}
else{
comments =0;
}
}
int nctemp623 = (comments ==1);
nctemp598=nctemp623;}int nctemp627 = (c ==(-1));
if(nctemp627)
{
rval =19;
return rval;
}
int nctemp636 = (c ==43);
if(nctemp636)
{
rval =43;
}
else{
int nctemp644 = (c ==42);
if(nctemp644)
{
rval =42;
}
else{
int nctemp652 = (c ==47);
if(nctemp652)
{
rval =47;
}
else{
int nctemp660 = (c ==92);
if(nctemp660)
{
rval =32;
int nctemp669=ScanGetch();
int nctemp678 = ScanContline + 1;
ScanContline =nctemp678;
}
else{
int nctemp679 = (c ==40);
if(nctemp679)
{
rval =40;
}
else{
int nctemp687 = (c ==41);
if(nctemp687)
{
rval =41;
}
else{
int nctemp695 = (c ==93);
if(nctemp695)
{
rval =93;
}
else{
int nctemp703 = (c ==91);
if(nctemp703)
{
rval =91;
}
else{
int nctemp711 = (c ==123);
if(nctemp711)
{
rval =123;
}
else{
int nctemp719 = (c ==125);
if(nctemp719)
{
rval =125;
}
else{
int nctemp727 = (c ==58);
if(nctemp727)
{
rval =58;
}
else{
int nctemp735 = (c ==59);
if(nctemp735)
{
rval =59;
}
else{
int nctemp743 = (c ==44);
if(nctemp743)
{
rval =44;
}
else{
int nctemp751 = (c ==46);
if(nctemp751)
{
rval =46;
}
else{
int nctemp759 = (c ==10);
if(nctemp759)
{
rval =10;
int nctemp768=ScanIncline();
}
else{
int nctemp769 = (c ==60);
if(nctemp769)
{
int nctemp780=ScanGetch();
c =nctemp780;
int nctemp773 = (c ==61);
if(nctemp773)
{
rval =20;
int nctemp794 = p + 1;
p =nctemp794;
int nctemp798=p;
char nctemp801=(char)(c);
ScanText->a[nctemp798] =nctemp801;
}
else{
int nctemp805=ScanUngetch();
rval =60;
}
}
else{
int nctemp810 = (c ==62);
if(nctemp810)
{
int nctemp821=ScanGetch();
c =nctemp821;
int nctemp814 = (c ==61);
if(nctemp814)
{
rval =21;
int nctemp835 = p + 1;
p =nctemp835;
int nctemp839=p;
char nctemp842=(char)(c);
ScanText->a[nctemp839] =nctemp842;
}
else{
int nctemp846=ScanUngetch();
rval =62;
}
}
else{
int nctemp851 = (c ==45);
if(nctemp851)
{
int nctemp862=ScanGetch();
c =nctemp862;
int nctemp855 = (c ==62);
if(nctemp855)
{
rval =2;
int nctemp876 = p + 1;
p =nctemp876;
int nctemp880=p;
char nctemp883=(char)(c);
ScanText->a[nctemp880] =nctemp883;
}
else{
int nctemp887=ScanUngetch();
rval =45;
}
}
else{
int nctemp892 = (c ==124);
if(nctemp892)
{
int nctemp903=ScanGetch();
c =nctemp903;
int nctemp896 = (c ==124);
if(nctemp896)
{
rval =5;
int nctemp917 = p + 1;
p =nctemp917;
int nctemp921=p;
char nctemp924=(char)(c);
ScanText->a[nctemp921] =nctemp924;
}
else{
struct nctempchar1 *nctemp930;
static struct nctempchar1 nctemp931 = {{ 18}, (char*)"Illegal character\0"};
nctemp930=&nctemp931;
nctempchar1* nctemp928= nctemp930;
int nctemp932=ScanError(nctemp928);
}
}
else{
int nctemp933 = (c ==38);
if(nctemp933)
{
int nctemp944=ScanGetch();
c =nctemp944;
int nctemp937 = (c ==38);
if(nctemp937)
{
rval =6;
int nctemp958 = p + 1;
p =nctemp958;
int nctemp962=p;
char nctemp965=(char)(c);
ScanText->a[nctemp962] =nctemp965;
}
else{
struct nctempchar1 *nctemp971;
static struct nctempchar1 nctemp972 = {{ 18}, (char*)"Illegal character\0"};
nctemp971=&nctemp972;
nctempchar1* nctemp969= nctemp971;
int nctemp973=ScanError(nctemp969);
}
}
else{
int nctemp974 = (c ==33);
if(nctemp974)
{
int nctemp985=ScanGetch();
c =nctemp985;
int nctemp978 = (c ==61);
if(nctemp978)
{
rval =4;
int nctemp999 = p + 1;
p =nctemp999;
int nctemp1003=p;
char nctemp1006=(char)(c);
ScanText->a[nctemp1003] =nctemp1006;
}
else{
struct nctempchar1 *nctemp1012;
static struct nctempchar1 nctemp1013 = {{ 18}, (char*)"Illegal character\0"};
nctemp1012=&nctemp1013;
nctempchar1* nctemp1010= nctemp1012;
int nctemp1014=ScanError(nctemp1010);
}
}
else{
int nctemp1015 = (c ==61);
if(nctemp1015)
{
int nctemp1026=ScanGetch();
c =nctemp1026;
int nctemp1019 = (c ==61);
if(nctemp1019)
{
rval =3;
int nctemp1040 = p + 1;
p =nctemp1040;
int nctemp1044=p;
char nctemp1047=(char)(c);
ScanText->a[nctemp1044] =nctemp1047;
}
else{
int nctemp1051=ScanUngetch();
rval =61;
}
}
else{
int nctemp1056 = (c ==34);
if(nctemp1056)
{
int nctemp1063=p;
char nctemp1066=(char)(34);
ScanText->a[nctemp1063] =nctemp1066;
int nctemp1077 = p + 1;
p =nctemp1077;
string =1;
int nctemp1082 = (string ==1);
int nctemp1086=nctemp1082;
while(nctemp1086)
{{
int nctemp1094=ScanGetch();
c =nctemp1094;
int nctemp1087 = (c !=34);
if(nctemp1087)
{
string =1;
}
else{
int nctemp1111 = p - 1;
int nctemp1106=nctemp1111;
int nctemp1103=(int)(ScanText->a[nctemp1106]);
int nctemp1100 = (nctemp1103 ==92);
if(nctemp1100)
{
string =1;
}
else{
string =0;
}
}
int nctemp1124=p;
char nctemp1127=(char)(c);
ScanText->a[nctemp1124] =nctemp1127;
int nctemp1138 = p + 1;
p =nctemp1138;
int nctemp1146=ScanText->d[0];int nctemp1151 = nctemp1146 - 1;
int nctemp1139 = (p >= nctemp1151);
if(nctemp1139)
{
struct nctempchar1 *nctemp1155;
static struct nctempchar1 nctemp1156 = {{ 19}, (char*)"String is too long\0"};
nctemp1155=&nctemp1156;
nctempchar1* nctemp1153= nctemp1155;
int nctemp1157=ScanError(nctemp1153);
}
}
int nctemp1158 = (string ==1);
nctemp1086=nctemp1158;}int nctemp1165=p;
char nctemp1168=(char)(0);
ScanText->a[nctemp1165] =nctemp1168;
rval =18;
}
else{
int nctemp1175 = (c ==39);
if(nctemp1175)
{
int nctemp1182=p;
char nctemp1185=(char)(39);
ScanText->a[nctemp1182] =nctemp1185;
int nctemp1196 = p + 1;
p =nctemp1196;
int nctemp1200=p;
int nctemp1206=ScanGetch();
char nctemp1203=(char)(nctemp1206);
ScanText->a[nctemp1200] =nctemp1203;
int nctemp1211=ScanGetch();
c =nctemp1211;
int nctemp1212 = (c !=39);
if(nctemp1212)
{
struct nctempchar1 *nctemp1219;
static struct nctempchar1 nctemp1220 = {{ 31}, (char*)"Character constant is too long\0"};
nctemp1219=&nctemp1220;
nctempchar1* nctemp1217= nctemp1219;
int nctemp1221=ScanError(nctemp1217);
}
else{
int nctemp1230 = p + 1;
p =nctemp1230;
int nctemp1234=p;
char nctemp1237=(char)(c);
ScanText->a[nctemp1234] =nctemp1237;
}
int nctemp1248 = p + 1;
p =nctemp1248;
int nctemp1252=p;
char nctemp1255=(char)(0);
ScanText->a[nctemp1252] =nctemp1255;
rval =17;
}
else{
int nctemp1263= c;
int nctemp1265=LibeIsdigit(nctemp1263);
if(nctemp1265)
{
int nctemp1272=ScanGetch();
c =nctemp1272;
int nctemp1267= c;
int nctemp1273=LibeIsdigit(nctemp1267);
int nctemp1274=nctemp1273;
while(nctemp1274)
{{
int nctemp1283 = p + 1;
p =nctemp1283;
int nctemp1287=p;
char nctemp1290=(char)(c);
ScanText->a[nctemp1287] =nctemp1290;
int nctemp1297=ScanText->d[0];int nctemp1293 = (p >= nctemp1297);
if(nctemp1293)
{
struct nctempchar1 *nctemp1304;
static struct nctempchar1 nctemp1305 = {{ 18}, (char*)"Digit is too long\0"};
nctemp1304=&nctemp1305;
nctempchar1* nctemp1302= nctemp1304;
int nctemp1306=ScanError(nctemp1302);
}
}
int nctemp1313=ScanGetch();
c =nctemp1313;
int nctemp1308= c;
int nctemp1314=LibeIsdigit(nctemp1308);
nctemp1274=nctemp1314;}int nctemp1315 = (c ==46);
if(nctemp1315)
{
int nctemp1327 = p + 1;
p =nctemp1327;
int nctemp1332=ScanText->d[0];int nctemp1328 = (p >= nctemp1332);
if(nctemp1328)
{
struct nctempchar1 *nctemp1339;
static struct nctempchar1 nctemp1340 = {{ 18}, (char*)"Digit is too long\0"};
nctemp1339=&nctemp1340;
nctempchar1* nctemp1337= nctemp1339;
int nctemp1341=ScanError(nctemp1337);
}
int nctemp1345=p;
char nctemp1348=(char)(c);
ScanText->a[nctemp1345] =nctemp1348;
int nctemp1355= p;
int nctemp1357=ScanFtail(nctemp1355);
p =nctemp1357;
rval =24;
}
else{
int nctemp1363=ScanUngetch();
int nctemp1372 = p + 1;
int nctemp1367=nctemp1372;
char nctemp1374=(char)(0);
ScanText->a[nctemp1367] =nctemp1374;
rval =17;
}
}
else{
int nctemp1382= c;
int nctemp1384=LibeIsalnum(nctemp1382);
if(nctemp1384)
{
int nctemp1391=ScanGetch();
c =nctemp1391;
int nctemp1386= c;
int nctemp1392=LibeIsalnum(nctemp1386);
int nctemp1393=nctemp1392;
while(nctemp1393)
{{
int nctemp1402 = p + 1;
p =nctemp1402;
int nctemp1406=p;
char nctemp1409=(char)(c);
ScanText->a[nctemp1406] =nctemp1409;
int nctemp1416=ScanText->d[0];int nctemp1412 = (p >= nctemp1416);
if(nctemp1412)
{
struct nctempchar1 *nctemp1423;
static struct nctempchar1 nctemp1424 = {{ 23}, (char*)"Identifier is too long\0"};
nctemp1423=&nctemp1424;
nctempchar1* nctemp1421= nctemp1423;
int nctemp1425=ScanError(nctemp1421);
}
}
int nctemp1432=ScanGetch();
c =nctemp1432;
int nctemp1427= c;
int nctemp1433=LibeIsalnum(nctemp1427);
nctemp1393=nctemp1433;}int nctemp1435=ScanUngetch();
int nctemp1444 = p + 1;
int nctemp1439=nctemp1444;
char nctemp1446=(char)(0);
ScanText->a[nctemp1439] =nctemp1446;
nctempchar1* nctemp1450= ScanText;
struct nctempchar1 *nctemp1455;
static struct nctempchar1 nctemp1456 = {{ 4}, (char*)"int\0"};
nctemp1455=&nctemp1456;
nctempchar1* nctemp1453= nctemp1455;
int nctemp1457=LibeStrcmp(nctemp1450,nctemp1453);
if(nctemp1457)
{
rval =7;
}
else{
nctempchar1* nctemp1463= ScanText;
struct nctempchar1 *nctemp1468;
static struct nctempchar1 nctemp1469 = {{ 5}, (char*)"char\0"};
nctemp1468=&nctemp1469;
nctempchar1* nctemp1466= nctemp1468;
int nctemp1470=LibeStrcmp(nctemp1463,nctemp1466);
if(nctemp1470)
{
rval =8;
}
else{
nctempchar1* nctemp1476= ScanText;
struct nctempchar1 *nctemp1481;
static struct nctempchar1 nctemp1482 = {{ 6}, (char*)"float\0"};
nctemp1481=&nctemp1482;
nctempchar1* nctemp1479= nctemp1481;
int nctemp1483=LibeStrcmp(nctemp1476,nctemp1479);
if(nctemp1483)
{
rval =9;
}
else{
nctempchar1* nctemp1489= ScanText;
struct nctempchar1 *nctemp1494;
static struct nctempchar1 nctemp1495 = {{ 6}, (char*)"const\0"};
nctemp1494=&nctemp1495;
nctempchar1* nctemp1492= nctemp1494;
int nctemp1496=LibeStrcmp(nctemp1489,nctemp1492);
if(nctemp1496)
{
rval =431;
}
else{
nctempchar1* nctemp1502= ScanText;
struct nctempchar1 *nctemp1507;
static struct nctempchar1 nctemp1508 = {{ 8}, (char*)"complex\0"};
nctemp1507=&nctemp1508;
nctempchar1* nctemp1505= nctemp1507;
int nctemp1509=LibeStrcmp(nctemp1502,nctemp1505);
if(nctemp1509)
{
rval =510;
}
else{
nctempchar1* nctemp1515= ScanText;
struct nctempchar1 *nctemp1520;
static struct nctempchar1 nctemp1521 = {{ 7}, (char*)"struct\0"};
nctemp1520=&nctemp1521;
nctempchar1* nctemp1518= nctemp1520;
int nctemp1522=LibeStrcmp(nctemp1515,nctemp1518);
if(nctemp1522)
{
rval =11;
}
else{
nctempchar1* nctemp1528= ScanText;
struct nctempchar1 *nctemp1533;
static struct nctempchar1 nctemp1534 = {{ 6}, (char*)"class\0"};
nctemp1533=&nctemp1534;
nctempchar1* nctemp1531= nctemp1533;
int nctemp1535=LibeStrcmp(nctemp1528,nctemp1531);
if(nctemp1535)
{
rval =11;
}
else{
nctempchar1* nctemp1541= ScanText;
struct nctempchar1 *nctemp1546;
static struct nctempchar1 nctemp1547 = {{ 7}, (char*)"import\0"};
nctemp1546=&nctemp1547;
nctempchar1* nctemp1544= nctemp1546;
int nctemp1548=LibeStrcmp(nctemp1541,nctemp1544);
if(nctemp1548)
{
rval =433;
}
else{
nctempchar1* nctemp1554= ScanText;
struct nctempchar1 *nctemp1559;
static struct nctempchar1 nctemp1560 = {{ 6}, (char*)"while\0"};
nctemp1559=&nctemp1560;
nctempchar1* nctemp1557= nctemp1559;
int nctemp1561=LibeStrcmp(nctemp1554,nctemp1557);
if(nctemp1561)
{
rval =12;
}
else{
nctempchar1* nctemp1567= ScanText;
struct nctempchar1 *nctemp1572;
static struct nctempchar1 nctemp1573 = {{ 7}, (char*)"return\0"};
nctemp1572=&nctemp1573;
nctempchar1* nctemp1570= nctemp1572;
int nctemp1574=LibeStrcmp(nctemp1567,nctemp1570);
if(nctemp1574)
{
rval =30;
}
else{
nctempchar1* nctemp1580= ScanText;
struct nctempchar1 *nctemp1585;
static struct nctempchar1 nctemp1586 = {{ 4}, (char*)"def\0"};
nctemp1585=&nctemp1586;
nctempchar1* nctemp1583= nctemp1585;
int nctemp1587=LibeStrcmp(nctemp1580,nctemp1583);
if(nctemp1587)
{
rval =1100;
}
else{
nctempchar1* nctemp1593= ScanText;
struct nctempchar1 *nctemp1598;
static struct nctempchar1 nctemp1599 = {{ 3}, (char*)"if\0"};
nctemp1598=&nctemp1599;
nctempchar1* nctemp1596= nctemp1598;
int nctemp1600=LibeStrcmp(nctemp1593,nctemp1596);
if(nctemp1600)
{
rval =14;
}
else{
nctempchar1* nctemp1606= ScanText;
struct nctempchar1 *nctemp1611;
static struct nctempchar1 nctemp1612 = {{ 5}, (char*)"else\0"};
nctemp1611=&nctemp1612;
nctempchar1* nctemp1609= nctemp1611;
int nctemp1613=LibeStrcmp(nctemp1606,nctemp1609);
if(nctemp1613)
{
rval =15;
}
else{
nctempchar1* nctemp1619= ScanText;
struct nctempchar1 *nctemp1624;
static struct nctempchar1 nctemp1625 = {{ 7}, (char*)"sizeof\0"};
nctemp1624=&nctemp1625;
nctempchar1* nctemp1622= nctemp1624;
int nctemp1626=LibeStrcmp(nctemp1619,nctemp1622);
if(nctemp1626)
{
rval =22;
}
else{
nctempchar1* nctemp1632= ScanText;
struct nctempchar1 *nctemp1637;
static struct nctempchar1 nctemp1638 = {{ 5}, (char*)"cast\0"};
nctemp1637=&nctemp1638;
nctempchar1* nctemp1635= nctemp1637;
int nctemp1639=LibeStrcmp(nctemp1632,nctemp1635);
if(nctemp1639)
{
rval =23;
}
else{
nctempchar1* nctemp1645= ScanText;
struct nctempchar1 *nctemp1650;
static struct nctempchar1 nctemp1651 = {{ 4}, (char*)"new\0"};
nctemp1650=&nctemp1651;
nctempchar1* nctemp1648= nctemp1650;
int nctemp1652=LibeStrcmp(nctemp1645,nctemp1648);
if(nctemp1652)
{
rval =26;
}
else{
nctempchar1* nctemp1658= ScanText;
struct nctempchar1 *nctemp1663;
static struct nctempchar1 nctemp1664 = {{ 7}, (char*)"delete\0"};
nctemp1663=&nctemp1664;
nctempchar1* nctemp1661= nctemp1663;
int nctemp1665=LibeStrcmp(nctemp1658,nctemp1661);
if(nctemp1665)
{
rval =50;
}
else{
nctempchar1* nctemp1671= ScanText;
struct nctempchar1 *nctemp1676;
static struct nctempchar1 nctemp1677 = {{ 4}, (char*)"len\0"};
nctemp1676=&nctemp1677;
nctempchar1* nctemp1674= nctemp1676;
int nctemp1678=LibeStrcmp(nctemp1671,nctemp1674);
if(nctemp1678)
{
rval =29;
}
else{
nctempchar1* nctemp1684= ScanText;
struct nctempchar1 *nctemp1689;
static struct nctempchar1 nctemp1690 = {{ 6}, (char*)"cmplx\0"};
nctemp1689=&nctemp1690;
nctempchar1* nctemp1687= nctemp1689;
int nctemp1691=LibeStrcmp(nctemp1684,nctemp1687);
if(nctemp1691)
{
rval =25;
}
else{
nctempchar1* nctemp1697= ScanText;
struct nctempchar1 *nctemp1702;
static struct nctempchar1 nctemp1703 = {{ 3}, (char*)"re\0"};
nctemp1702=&nctemp1703;
nctempchar1* nctemp1700= nctemp1702;
int nctemp1704=LibeStrcmp(nctemp1697,nctemp1700);
if(nctemp1704)
{
rval =28;
}
else{
nctempchar1* nctemp1710= ScanText;
struct nctempchar1 *nctemp1715;
static struct nctempchar1 nctemp1716 = {{ 3}, (char*)"im\0"};
nctemp1715=&nctemp1716;
nctempchar1* nctemp1713= nctemp1715;
int nctemp1717=LibeStrcmp(nctemp1710,nctemp1713);
if(nctemp1717)
{
rval =27;
}
else{
nctempchar1* nctemp1723= ScanText;
struct nctempchar1 *nctemp1728;
static struct nctempchar1 nctemp1729 = {{ 4}, (char*)"for\0"};
nctemp1728=&nctemp1729;
nctempchar1* nctemp1726= nctemp1728;
int nctemp1730=LibeStrcmp(nctemp1723,nctemp1726);
if(nctemp1730)
{
rval =26;
}
else{
nctempchar1* nctemp1736= ScanText;
struct nctempchar1 *nctemp1741;
static struct nctempchar1 nctemp1742 = {{ 9}, (char*)"parallel\0"};
nctemp1741=&nctemp1742;
nctempchar1* nctemp1739= nctemp1741;
int nctemp1743=LibeStrcmp(nctemp1736,nctemp1739);
if(nctemp1743)
{
rval =31;
}
else{
nctempchar1* nctemp1749= ScanText;
struct nctempchar1 *nctemp1754;
static struct nctempchar1 nctemp1755 = {{ 5}, (char*)"pass\0"};
nctemp1754=&nctemp1755;
nctempchar1* nctemp1752= nctemp1754;
int nctemp1756=LibeStrcmp(nctemp1749,nctemp1752);
if(nctemp1756)
{
rval =701;
}
else{
nctempchar1* nctemp1762= ScanText;
struct nctempchar1 *nctemp1767;
static struct nctempchar1 nctemp1768 = {{ 3}, (char*)"in\0"};
nctemp1767=&nctemp1768;
nctempchar1* nctemp1765= nctemp1767;
int nctemp1769=LibeStrcmp(nctemp1762,nctemp1765);
if(nctemp1769)
{
rval =702;
}
else{
nctempchar1* nctemp1775= ScanText;
struct nctempchar1 *nctemp1780;
static struct nctempchar1 nctemp1781 = {{ 6}, (char*)"range\0"};
nctemp1780=&nctemp1781;
nctempchar1* nctemp1778= nctemp1780;
int nctemp1782=LibeStrcmp(nctemp1775,nctemp1778);
if(nctemp1782)
{
rval =703;
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
}
}
}
else{
struct nctempchar1 *nctemp1794;
static struct nctempchar1 nctemp1795 = {{ 14}, (char*)"Invalid token\0"};
nctemp1794=&nctemp1795;
nctempchar1* nctemp1792= nctemp1794;
int nctemp1796=ScanError(nctemp1792);
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
int nctemp1806 = p + 1;
int nctemp1801=nctemp1806;
char nctemp1808=(char)(0);
ScanText->a[nctemp1801] =nctemp1808;
return rval;
}
nctempchar1 * ScanSetfile (nctempchar1 *fname)
{
nctempchar1 *nctemp1813 =ScanFile;
int nctemp1812 =(nctemp1813!=0);
if(nctemp1812)
{
RunFree(ScanFile->a);
RunFree(ScanFile);
}
nctempchar1* nctemp1825= fname;
nctempchar1* nctemp1828=LibeStrsave(nctemp1825);
ScanFile=nctemp1828;
return ScanFile;
}
int ScanGetok ()
{
int c;
int indent;
int level;
int nctemp1831 = (ScanLine > ScanLinesave);
if(nctemp1831)
{
int nctemp1838= -1;
indent =nctemp1838;
int nctemp1845= -1;
int nctemp1842 = (indent ==nctemp1845);
int nctemp1850= -2;
int nctemp1847 = (indent ==nctemp1850);
int nctemp1839 = (nctemp1842 || nctemp1847);
int nctemp1851=nctemp1839;
while(nctemp1851)
{{
int nctemp1856=ScanBlank();
indent =nctemp1856;
}
int nctemp1863= -1;
int nctemp1860 = (indent ==nctemp1863);
int nctemp1868= -2;
int nctemp1865 = (indent ==nctemp1868);
int nctemp1857 = (nctemp1860 || nctemp1865);
nctemp1851=nctemp1857;}ScanIndent =indent;
ScanLinesave =ScanLine;
}
int nctemp1880= -1;
int nctemp1877 = (ScanIndentsave ==nctemp1880);
if(nctemp1877)
{
ScanIndentsave =ScanIndent;
ScanIndentinit =ScanIndent;
int nctemp1892=0;
ScanStack->a[nctemp1892] =ScanIndentinit;
}
int nctemp1895 = (ScanIndent > ScanIndentsave);
if(nctemp1895)
{
ScanIndentsave =ScanIndent;
int nctemp1904= ScanIndent;
int nctemp1906=ScanPush(nctemp1904);
return 600;
}
else{
int nctemp1908 = (ScanIndent < ScanIndentsave);
if(nctemp1908)
{
int nctemp1916=ScanPop();
level =nctemp1916;
ScanIndentsave =level;
return 601;
}
else{
int nctemp1926=ScanLex();
c =nctemp1926;
int nctemp1927 = (c ==32);
if(nctemp1927)
{
int nctemp1935=ScanLex();
c =nctemp1935;
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
int nctemp1941= ScanFp;
nctempchar1* nctemp1943= ttext;
int nctemp1946=LibeGetw(nctemp1941,nctemp1943);
return nctemp1946;
}
