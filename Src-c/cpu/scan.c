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
return 1;
}
int ScanPush (int l)
{
int nctemp28 = ScanSp + 1;
ScanSp =nctemp28;
int nctemp29 = (ScanSp > 258);
if(nctemp29)
{
struct nctempchar1 *nctemp36;
static struct nctempchar1 nctemp37 = {{ 31}, (char*)"Max no of indentations reached\0"};
nctemp36=&nctemp37;
nctempchar1* nctemp34= nctemp36;
int nctemp38=ScanError(nctemp34);
}
int nctemp42=ScanSp;
ScanStack->a[nctemp42] =l;
return 1;
}
int ScanPop ()
{
int nctemp54 = ScanSp - 1;
ScanSp =nctemp54;
int nctemp55 = (ScanSp < 0);
if(nctemp55)
{
struct nctempchar1 *nctemp62;
static struct nctempchar1 nctemp63 = {{ 18}, (char*)"Indentation error\0"};
nctemp62=&nctemp63;
nctempchar1* nctemp60= nctemp62;
int nctemp64=ScanError(nctemp60);
}
int nctemp66=ScanSp;
return ScanStack->a[nctemp66];
}
int ScanInit (nctempchar1 *infile)
{
ScanContline =0;
int nctemp78=4096;
nctempchar1 *nctemp77;
nctemp77=(nctempchar1*)RunMalloc(sizeof(nctempchar1));
nctemp77->d[0]=4096;
nctemp77->a=(char *)RunMalloc(sizeof(char)*nctemp78);
ScanText=nctemp77;
int nctemp87=4096;
nctempchar1 *nctemp86;
nctemp86=(nctempchar1*)RunMalloc(sizeof(nctempchar1));
nctemp86->d[0]=4096;
nctemp86->a=(char *)RunMalloc(sizeof(char)*nctemp87);
ScanBuffer=nctemp86;
nctempchar1* nctemp94= infile;
struct nctempchar1 *nctemp99;
static struct nctempchar1 nctemp100 = {{ 2}, (char*)"r\0"};
nctemp99=&nctemp100;
nctempchar1* nctemp97= nctemp99;
int nctemp101=LibeOpen(nctemp94,nctemp97);
ScanFp =nctemp101;
int nctemp102 = (ScanFp ==0);
if(nctemp102)
{
int nctemp107= 4;
struct nctempchar1 *nctemp111;
static struct nctempchar1 nctemp112 = {{ 26}, (char*)"Can not open input file: \0"};
nctemp111=&nctemp112;
nctempchar1* nctemp109= nctemp111;
int nctemp113=LibePuts(nctemp107,nctemp109);
int nctemp115= 4;
nctempchar1* nctemp117= infile;
int nctemp120=LibePuts(nctemp115,nctemp117);
int nctemp122= 4;
struct nctempchar1 *nctemp126;
static struct nctempchar1 nctemp127 = {{ 3}, (char*)"\n\0"};
nctemp126=&nctemp127;
nctempchar1* nctemp124= nctemp126;
int nctemp128=LibePuts(nctemp122,nctemp124);
int nctemp130= 4;
int nctemp132=LibeFlush(nctemp130);
return 0;
}
nctempchar1* nctemp139= infile;
nctempchar1* nctemp142=LibeStrsave(nctemp139);
ScanFile=nctemp142;
ScanIndentsave =0;
ScanIndent =0;
int nctemp157=258;
nctempint1 *nctemp156;
nctemp156=(nctempint1*)RunMalloc(sizeof(nctempint1));
nctemp156->d[0]=258;
nctemp156->a=(int *)RunMalloc(sizeof(int)*nctemp157);
ScanStack=nctemp156;
ScanSp =0;
int nctemp167=0;
ScanStack->a[nctemp167] =0;
return 1;
}
int ScanGetch ()
{
int nctemp172= ScanFp;
int nctemp174=LibeGetc(nctemp172);
return nctemp174;
}
int ScanIncline ()
{
ScanLinesave =ScanLine;
int nctemp187 = ScanLine + 1;
ScanLine =nctemp187;
return 1;
}
int ScanUngetch ()
{
int nctemp190= ScanFp;
int nctemp192=LibeUngetc(nctemp190);
return nctemp192;
}
int ScanBlank ()
{
int c;
int indent;
indent =0;
int nctemp207=ScanGetch();
c =nctemp207;
int nctemp200 = (c ==32);
int nctemp210 = (c ==9);
int nctemp197 = (nctemp200 || nctemp210);
int nctemp214=nctemp197;
while(nctemp214)
{{
int nctemp223 = indent + 1;
indent =nctemp223;
}
int nctemp234=ScanGetch();
c =nctemp234;
int nctemp227 = (c ==32);
int nctemp237 = (c ==9);
int nctemp224 = (nctemp227 || nctemp237);
nctemp214=nctemp224;}int nctemp241 = (c ==(-1));
if(nctemp241)
{
int nctemp246=ScanUngetch();
return indent;
}
int nctemp248 = (c =='#');
if(nctemp248)
{
int nctemp255= -2;
indent =nctemp255;
int nctemp259=ScanGetch();
int nctemp256 = (nctemp259 !=10);
int nctemp261=nctemp256;
while(nctemp261)
{{
int nctemp265= -2;
indent =nctemp265;
}
int nctemp269=ScanGetch();
int nctemp266 = (nctemp269 !=10);
nctemp261=nctemp266;}int nctemp272=ScanIncline();
return indent;
}
else{
int nctemp274 = (c ==10);
if(nctemp274)
{
int nctemp281= -1;
indent =nctemp281;
int nctemp283=ScanIncline();
return indent;
}
else{
int nctemp286=ScanUngetch();
return indent;
}
}
}
int ScanWhite ()
{
int d;
int c;
int nctemp298=ScanGetch();
c =nctemp298;
int nctemp291 = (c ==32);
int nctemp301 = (c ==9);
int nctemp288 = (nctemp291 || nctemp301);
int nctemp305=nctemp288;
while(nctemp305)
{{
d =0;
}
int nctemp320=ScanGetch();
c =nctemp320;
int nctemp313 = (c ==32);
int nctemp323 = (c ==9);
int nctemp310 = (nctemp313 || nctemp323);
nctemp305=nctemp310;}int nctemp328=ScanUngetch();
return 1;
}
int ScanComment ()
{
int incomment;
int c;
incomment =1;
int nctemp334 = (incomment ==1);
int nctemp338=nctemp334;
while(nctemp338)
{{
int nctemp343=ScanGetch();
c =nctemp343;
int nctemp344 = (c ==10);
if(nctemp344)
{
int nctemp349=ScanIncline();
}
int nctemp350 = (c =='*');
if(nctemp350)
{
int nctemp358=ScanGetch();
c =nctemp358;
int nctemp359 = (c ==10);
if(nctemp359)
{
int nctemp364=ScanIncline();
}
int nctemp365 = (c =='/');
if(nctemp365)
{
incomment =0;
}
}
int nctemp373 = (c ==(-1));
if(nctemp373)
{
struct nctempchar1 *nctemp380;
static struct nctempchar1 nctemp381 = {{ 24}, (char*)"Closing comment missing\0"};
nctemp380=&nctemp381;
nctempchar1* nctemp378= nctemp380;
int nctemp382=ScanError(nctemp378);
}
}
int nctemp383 = (incomment ==1);
nctemp338=nctemp383;}return 1;
}
int ScanLcomment ()
{
int incomment;
int c;
incomment =1;
int nctemp392 = (incomment ==1);
int nctemp396=nctemp392;
while(nctemp396)
{{
int nctemp401=ScanGetch();
c =nctemp401;
int nctemp402 = (c ==10);
if(nctemp402)
{
incomment =0;
}
}
int nctemp410 = (incomment ==1);
nctemp396=nctemp410;}int nctemp415=ScanUngetch();
return 1;
}
int ScanFtail (int p)
{
int c;
int nctemp423=ScanGetch();
c =nctemp423;
int nctemp418= c;
int nctemp424=LibeIsdigit(nctemp418);
int nctemp425=nctemp424;
while(nctemp425)
{{
int nctemp434 = p + 1;
p =nctemp434;
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
nctemp425=nctemp465;}int nctemp469 = (c =='e');
int nctemp474 = (c =='E');
int nctemp466 = (nctemp469 || nctemp474);
if(nctemp466)
{
int nctemp486 = p + 1;
p =nctemp486;
int nctemp491=ScanText->d[0];int nctemp487 = (p >= nctemp491);
if(nctemp487)
{
struct nctempchar1 *nctemp498;
static struct nctempchar1 nctemp499 = {{ 18}, (char*)"Digit is too long\0"};
nctemp498=&nctemp499;
nctempchar1* nctemp496= nctemp498;
int nctemp500=ScanError(nctemp496);
}
int nctemp504=p;
char nctemp507=(char)(c);
ScanText->a[nctemp504] =nctemp507;
int nctemp514=ScanGetch();
c =nctemp514;
int nctemp518 = (c ==43);
int nctemp523 = (c ==45);
int nctemp515 = (nctemp518 || nctemp523);
if(nctemp515)
{
int nctemp535 = p + 1;
p =nctemp535;
int nctemp540=ScanText->d[0];int nctemp536 = (p >= nctemp540);
if(nctemp536)
{
struct nctempchar1 *nctemp547;
static struct nctempchar1 nctemp548 = {{ 18}, (char*)"Digit is too long\0"};
nctemp547=&nctemp548;
nctempchar1* nctemp545= nctemp547;
int nctemp549=ScanError(nctemp545);
}
int nctemp553=p;
char nctemp556=(char)(c);
ScanText->a[nctemp553] =nctemp556;
int nctemp565=ScanGetch();
c =nctemp565;
int nctemp560= c;
int nctemp566=LibeIsdigit(nctemp560);
int nctemp567=nctemp566;
while(nctemp567)
{{
int nctemp576 = p + 1;
p =nctemp576;
int nctemp581=ScanText->d[0];int nctemp577 = (p >= nctemp581);
if(nctemp577)
{
struct nctempchar1 *nctemp588;
static struct nctempchar1 nctemp589 = {{ 18}, (char*)"Digit is too long\0"};
nctemp588=&nctemp589;
nctempchar1* nctemp586= nctemp588;
int nctemp590=ScanError(nctemp586);
}
int nctemp594=p;
char nctemp597=(char)(c);
ScanText->a[nctemp594] =nctemp597;
}
int nctemp606=ScanGetch();
c =nctemp606;
int nctemp601= c;
int nctemp607=LibeIsdigit(nctemp601);
nctemp567=nctemp607;}int nctemp609=ScanUngetch();
int nctemp618 = p + 1;
int nctemp613=nctemp618;
char nctemp620=(char)(0);
ScanText->a[nctemp613] =nctemp620;
return p;
}
else{
struct nctempchar1 *nctemp627;
static struct nctempchar1 nctemp628 = {{ 14}, (char*)"Unknown token\0"};
nctemp627=&nctemp628;
nctempchar1* nctemp625= nctemp627;
int nctemp629=ScanError(nctemp625);
}
return 0;
}
else{
int nctemp632=ScanUngetch();
int nctemp641 = p + 1;
int nctemp636=nctemp641;
char nctemp643=(char)(0);
ScanText->a[nctemp636] =nctemp643;
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
int nctemp648=ScanWhite();
int nctemp653=ScanGetch();
c =nctemp653;
p =0;
int nctemp661=p;
char nctemp664=(char)(c);
ScanText->a[nctemp661] =nctemp664;
comments =1;
int nctemp671 = (comments ==1);
int nctemp675=nctemp671;
while(nctemp675)
{{
int nctemp676 = (c =='#');
if(nctemp676)
{
int nctemp681=ScanLcomment();
int nctemp686=ScanGetch();
c =nctemp686;
int nctemp690=p;
char nctemp693=(char)(c);
ScanText->a[nctemp690] =nctemp693;
}
else{
comments =0;
}
}
int nctemp700 = (comments ==1);
nctemp675=nctemp700;}int nctemp704 = (c ==(-1));
if(nctemp704)
{
rval =19;
return rval;
}
int nctemp713 = (c ==43);
if(nctemp713)
{
rval =43;
}
else{
int nctemp721 = (c ==42);
if(nctemp721)
{
rval =42;
}
else{
int nctemp729 = (c ==47);
if(nctemp729)
{
rval =47;
}
else{
int nctemp737 = (c ==92);
if(nctemp737)
{
rval =32;
int nctemp746=ScanGetch();
int nctemp755 = ScanContline + 1;
ScanContline =nctemp755;
}
else{
int nctemp756 = (c ==40);
if(nctemp756)
{
rval =40;
}
else{
int nctemp764 = (c ==41);
if(nctemp764)
{
rval =41;
}
else{
int nctemp772 = (c ==93);
if(nctemp772)
{
rval =93;
}
else{
int nctemp780 = (c ==91);
if(nctemp780)
{
rval =91;
}
else{
int nctemp788 = (c ==123);
if(nctemp788)
{
rval =123;
}
else{
int nctemp796 = (c ==125);
if(nctemp796)
{
rval =125;
}
else{
int nctemp804 = (c ==58);
if(nctemp804)
{
rval =58;
}
else{
int nctemp812 = (c ==59);
if(nctemp812)
{
rval =59;
}
else{
int nctemp820 = (c ==44);
if(nctemp820)
{
rval =44;
}
else{
int nctemp828 = (c ==46);
if(nctemp828)
{
rval =46;
}
else{
int nctemp836 = (c ==10);
if(nctemp836)
{
rval =10;
int nctemp845=ScanIncline();
}
else{
int nctemp846 = (c ==60);
if(nctemp846)
{
int nctemp857=ScanGetch();
c =nctemp857;
int nctemp850 = (c ==61);
if(nctemp850)
{
rval =20;
int nctemp871 = p + 1;
p =nctemp871;
int nctemp875=p;
char nctemp878=(char)(c);
ScanText->a[nctemp875] =nctemp878;
}
else{
int nctemp882=ScanUngetch();
rval =60;
}
}
else{
int nctemp887 = (c ==62);
if(nctemp887)
{
int nctemp898=ScanGetch();
c =nctemp898;
int nctemp891 = (c ==61);
if(nctemp891)
{
rval =21;
int nctemp912 = p + 1;
p =nctemp912;
int nctemp916=p;
char nctemp919=(char)(c);
ScanText->a[nctemp916] =nctemp919;
}
else{
int nctemp923=ScanUngetch();
rval =62;
}
}
else{
int nctemp928 = (c ==45);
if(nctemp928)
{
int nctemp939=ScanGetch();
c =nctemp939;
int nctemp932 = (c ==62);
if(nctemp932)
{
rval =2;
int nctemp953 = p + 1;
p =nctemp953;
int nctemp957=p;
char nctemp960=(char)(c);
ScanText->a[nctemp957] =nctemp960;
}
else{
int nctemp964=ScanUngetch();
rval =45;
}
}
else{
int nctemp969 = (c ==124);
if(nctemp969)
{
int nctemp980=ScanGetch();
c =nctemp980;
int nctemp973 = (c ==124);
if(nctemp973)
{
rval =5;
int nctemp994 = p + 1;
p =nctemp994;
int nctemp998=p;
char nctemp1001=(char)(c);
ScanText->a[nctemp998] =nctemp1001;
}
else{
struct nctempchar1 *nctemp1007;
static struct nctempchar1 nctemp1008 = {{ 18}, (char*)"Illegal character\0"};
nctemp1007=&nctemp1008;
nctempchar1* nctemp1005= nctemp1007;
int nctemp1009=ScanError(nctemp1005);
}
}
else{
int nctemp1010 = (c ==38);
if(nctemp1010)
{
int nctemp1021=ScanGetch();
c =nctemp1021;
int nctemp1014 = (c ==38);
if(nctemp1014)
{
rval =6;
int nctemp1035 = p + 1;
p =nctemp1035;
int nctemp1039=p;
char nctemp1042=(char)(c);
ScanText->a[nctemp1039] =nctemp1042;
}
else{
struct nctempchar1 *nctemp1048;
static struct nctempchar1 nctemp1049 = {{ 18}, (char*)"Illegal character\0"};
nctemp1048=&nctemp1049;
nctempchar1* nctemp1046= nctemp1048;
int nctemp1050=ScanError(nctemp1046);
}
}
else{
int nctemp1051 = (c ==33);
if(nctemp1051)
{
int nctemp1062=ScanGetch();
c =nctemp1062;
int nctemp1055 = (c ==61);
if(nctemp1055)
{
rval =4;
int nctemp1076 = p + 1;
p =nctemp1076;
int nctemp1080=p;
char nctemp1083=(char)(c);
ScanText->a[nctemp1080] =nctemp1083;
}
else{
struct nctempchar1 *nctemp1089;
static struct nctempchar1 nctemp1090 = {{ 18}, (char*)"Illegal character\0"};
nctemp1089=&nctemp1090;
nctempchar1* nctemp1087= nctemp1089;
int nctemp1091=ScanError(nctemp1087);
}
}
else{
int nctemp1092 = (c ==61);
if(nctemp1092)
{
int nctemp1103=ScanGetch();
c =nctemp1103;
int nctemp1096 = (c ==61);
if(nctemp1096)
{
rval =3;
int nctemp1117 = p + 1;
p =nctemp1117;
int nctemp1121=p;
char nctemp1124=(char)(c);
ScanText->a[nctemp1121] =nctemp1124;
}
else{
int nctemp1128=ScanUngetch();
rval =61;
}
}
else{
int nctemp1133 = (c ==34);
if(nctemp1133)
{
int nctemp1140=p;
char nctemp1143=(char)(34);
ScanText->a[nctemp1140] =nctemp1143;
int nctemp1154 = p + 1;
p =nctemp1154;
string =1;
int nctemp1159 = (string ==1);
int nctemp1163=nctemp1159;
while(nctemp1163)
{{
int nctemp1171=ScanGetch();
c =nctemp1171;
int nctemp1164 = (c !=34);
if(nctemp1164)
{
string =1;
}
else{
int nctemp1188 = p - 1;
int nctemp1183=nctemp1188;
int nctemp1180=(int)(ScanText->a[nctemp1183]);
int nctemp1177 = (nctemp1180 ==92);
if(nctemp1177)
{
string =1;
}
else{
string =0;
}
}
int nctemp1201=p;
char nctemp1204=(char)(c);
ScanText->a[nctemp1201] =nctemp1204;
int nctemp1215 = p + 1;
p =nctemp1215;
int nctemp1223=ScanText->d[0];int nctemp1228 = nctemp1223 - 1;
int nctemp1216 = (p >= nctemp1228);
if(nctemp1216)
{
struct nctempchar1 *nctemp1232;
static struct nctempchar1 nctemp1233 = {{ 19}, (char*)"String is too long\0"};
nctemp1232=&nctemp1233;
nctempchar1* nctemp1230= nctemp1232;
int nctemp1234=ScanError(nctemp1230);
}
}
int nctemp1235 = (string ==1);
nctemp1163=nctemp1235;}int nctemp1242=p;
char nctemp1245=(char)(0);
ScanText->a[nctemp1242] =nctemp1245;
rval =18;
}
else{
int nctemp1252 = (c ==39);
if(nctemp1252)
{
int nctemp1259=p;
char nctemp1262=(char)(39);
ScanText->a[nctemp1259] =nctemp1262;
int nctemp1273 = p + 1;
p =nctemp1273;
int nctemp1277=p;
int nctemp1283=ScanGetch();
char nctemp1280=(char)(nctemp1283);
ScanText->a[nctemp1277] =nctemp1280;
int nctemp1288=ScanGetch();
c =nctemp1288;
int nctemp1289 = (c !=39);
if(nctemp1289)
{
struct nctempchar1 *nctemp1296;
static struct nctempchar1 nctemp1297 = {{ 31}, (char*)"Character constant is too long\0"};
nctemp1296=&nctemp1297;
nctempchar1* nctemp1294= nctemp1296;
int nctemp1298=ScanError(nctemp1294);
}
else{
int nctemp1307 = p + 1;
p =nctemp1307;
int nctemp1311=p;
char nctemp1314=(char)(c);
ScanText->a[nctemp1311] =nctemp1314;
}
int nctemp1325 = p + 1;
p =nctemp1325;
int nctemp1329=p;
char nctemp1332=(char)(0);
ScanText->a[nctemp1329] =nctemp1332;
rval =17;
}
else{
int nctemp1340= c;
int nctemp1342=LibeIsdigit(nctemp1340);
if(nctemp1342)
{
int nctemp1349=ScanGetch();
c =nctemp1349;
int nctemp1344= c;
int nctemp1350=LibeIsdigit(nctemp1344);
int nctemp1351=nctemp1350;
while(nctemp1351)
{{
int nctemp1360 = p + 1;
p =nctemp1360;
int nctemp1364=p;
char nctemp1367=(char)(c);
ScanText->a[nctemp1364] =nctemp1367;
int nctemp1374=ScanText->d[0];int nctemp1370 = (p >= nctemp1374);
if(nctemp1370)
{
struct nctempchar1 *nctemp1381;
static struct nctempchar1 nctemp1382 = {{ 18}, (char*)"Digit is too long\0"};
nctemp1381=&nctemp1382;
nctempchar1* nctemp1379= nctemp1381;
int nctemp1383=ScanError(nctemp1379);
}
}
int nctemp1390=ScanGetch();
c =nctemp1390;
int nctemp1385= c;
int nctemp1391=LibeIsdigit(nctemp1385);
nctemp1351=nctemp1391;}int nctemp1392 = (c ==46);
if(nctemp1392)
{
int nctemp1404 = p + 1;
p =nctemp1404;
int nctemp1409=ScanText->d[0];int nctemp1405 = (p >= nctemp1409);
if(nctemp1405)
{
struct nctempchar1 *nctemp1416;
static struct nctempchar1 nctemp1417 = {{ 18}, (char*)"Digit is too long\0"};
nctemp1416=&nctemp1417;
nctempchar1* nctemp1414= nctemp1416;
int nctemp1418=ScanError(nctemp1414);
}
int nctemp1422=p;
char nctemp1425=(char)(c);
ScanText->a[nctemp1422] =nctemp1425;
int nctemp1432= p;
int nctemp1434=ScanFtail(nctemp1432);
p =nctemp1434;
rval =24;
}
else{
int nctemp1440=ScanUngetch();
int nctemp1449 = p + 1;
int nctemp1444=nctemp1449;
char nctemp1451=(char)(0);
ScanText->a[nctemp1444] =nctemp1451;
rval =17;
}
}
else{
int nctemp1459= c;
int nctemp1461=LibeIsalnum(nctemp1459);
if(nctemp1461)
{
int nctemp1468=ScanGetch();
c =nctemp1468;
int nctemp1463= c;
int nctemp1469=LibeIsalnum(nctemp1463);
int nctemp1470=nctemp1469;
while(nctemp1470)
{{
int nctemp1479 = p + 1;
p =nctemp1479;
int nctemp1483=p;
char nctemp1486=(char)(c);
ScanText->a[nctemp1483] =nctemp1486;
int nctemp1493=ScanText->d[0];int nctemp1489 = (p >= nctemp1493);
if(nctemp1489)
{
struct nctempchar1 *nctemp1500;
static struct nctempchar1 nctemp1501 = {{ 23}, (char*)"Identifier is too long\0"};
nctemp1500=&nctemp1501;
nctempchar1* nctemp1498= nctemp1500;
int nctemp1502=ScanError(nctemp1498);
}
}
int nctemp1509=ScanGetch();
c =nctemp1509;
int nctemp1504= c;
int nctemp1510=LibeIsalnum(nctemp1504);
nctemp1470=nctemp1510;}int nctemp1512=ScanUngetch();
int nctemp1521 = p + 1;
int nctemp1516=nctemp1521;
char nctemp1523=(char)(0);
ScanText->a[nctemp1516] =nctemp1523;
nctempchar1* nctemp1527= ScanText;
struct nctempchar1 *nctemp1532;
static struct nctempchar1 nctemp1533 = {{ 4}, (char*)"int\0"};
nctemp1532=&nctemp1533;
nctempchar1* nctemp1530= nctemp1532;
int nctemp1534=LibeStrcmp(nctemp1527,nctemp1530);
if(nctemp1534)
{
rval =7;
}
else{
nctempchar1* nctemp1540= ScanText;
struct nctempchar1 *nctemp1545;
static struct nctempchar1 nctemp1546 = {{ 5}, (char*)"char\0"};
nctemp1545=&nctemp1546;
nctempchar1* nctemp1543= nctemp1545;
int nctemp1547=LibeStrcmp(nctemp1540,nctemp1543);
if(nctemp1547)
{
rval =8;
}
else{
nctempchar1* nctemp1553= ScanText;
struct nctempchar1 *nctemp1558;
static struct nctempchar1 nctemp1559 = {{ 6}, (char*)"float\0"};
nctemp1558=&nctemp1559;
nctempchar1* nctemp1556= nctemp1558;
int nctemp1560=LibeStrcmp(nctemp1553,nctemp1556);
if(nctemp1560)
{
rval =9;
}
else{
nctempchar1* nctemp1566= ScanText;
struct nctempchar1 *nctemp1571;
static struct nctempchar1 nctemp1572 = {{ 6}, (char*)"const\0"};
nctemp1571=&nctemp1572;
nctempchar1* nctemp1569= nctemp1571;
int nctemp1573=LibeStrcmp(nctemp1566,nctemp1569);
if(nctemp1573)
{
rval =431;
}
else{
nctempchar1* nctemp1579= ScanText;
struct nctempchar1 *nctemp1584;
static struct nctempchar1 nctemp1585 = {{ 8}, (char*)"complex\0"};
nctemp1584=&nctemp1585;
nctempchar1* nctemp1582= nctemp1584;
int nctemp1586=LibeStrcmp(nctemp1579,nctemp1582);
if(nctemp1586)
{
rval =510;
}
else{
nctempchar1* nctemp1592= ScanText;
struct nctempchar1 *nctemp1597;
static struct nctempchar1 nctemp1598 = {{ 7}, (char*)"struct\0"};
nctemp1597=&nctemp1598;
nctempchar1* nctemp1595= nctemp1597;
int nctemp1599=LibeStrcmp(nctemp1592,nctemp1595);
if(nctemp1599)
{
rval =11;
}
else{
nctempchar1* nctemp1605= ScanText;
struct nctempchar1 *nctemp1610;
static struct nctempchar1 nctemp1611 = {{ 6}, (char*)"class\0"};
nctemp1610=&nctemp1611;
nctempchar1* nctemp1608= nctemp1610;
int nctemp1612=LibeStrcmp(nctemp1605,nctemp1608);
if(nctemp1612)
{
rval =11;
}
else{
nctempchar1* nctemp1618= ScanText;
struct nctempchar1 *nctemp1623;
static struct nctempchar1 nctemp1624 = {{ 7}, (char*)"import\0"};
nctemp1623=&nctemp1624;
nctempchar1* nctemp1621= nctemp1623;
int nctemp1625=LibeStrcmp(nctemp1618,nctemp1621);
if(nctemp1625)
{
rval =433;
}
else{
nctempchar1* nctemp1631= ScanText;
struct nctempchar1 *nctemp1636;
static struct nctempchar1 nctemp1637 = {{ 6}, (char*)"while\0"};
nctemp1636=&nctemp1637;
nctempchar1* nctemp1634= nctemp1636;
int nctemp1638=LibeStrcmp(nctemp1631,nctemp1634);
if(nctemp1638)
{
rval =12;
}
else{
nctempchar1* nctemp1644= ScanText;
struct nctempchar1 *nctemp1649;
static struct nctempchar1 nctemp1650 = {{ 7}, (char*)"return\0"};
nctemp1649=&nctemp1650;
nctempchar1* nctemp1647= nctemp1649;
int nctemp1651=LibeStrcmp(nctemp1644,nctemp1647);
if(nctemp1651)
{
rval =30;
}
else{
nctempchar1* nctemp1657= ScanText;
struct nctempchar1 *nctemp1662;
static struct nctempchar1 nctemp1663 = {{ 3}, (char*)"if\0"};
nctemp1662=&nctemp1663;
nctempchar1* nctemp1660= nctemp1662;
int nctemp1664=LibeStrcmp(nctemp1657,nctemp1660);
if(nctemp1664)
{
rval =14;
}
else{
nctempchar1* nctemp1670= ScanText;
struct nctempchar1 *nctemp1675;
static struct nctempchar1 nctemp1676 = {{ 5}, (char*)"else\0"};
nctemp1675=&nctemp1676;
nctempchar1* nctemp1673= nctemp1675;
int nctemp1677=LibeStrcmp(nctemp1670,nctemp1673);
if(nctemp1677)
{
rval =15;
}
else{
nctempchar1* nctemp1683= ScanText;
struct nctempchar1 *nctemp1688;
static struct nctempchar1 nctemp1689 = {{ 7}, (char*)"sizeof\0"};
nctemp1688=&nctemp1689;
nctempchar1* nctemp1686= nctemp1688;
int nctemp1690=LibeStrcmp(nctemp1683,nctemp1686);
if(nctemp1690)
{
rval =22;
}
else{
nctempchar1* nctemp1696= ScanText;
struct nctempchar1 *nctemp1701;
static struct nctempchar1 nctemp1702 = {{ 5}, (char*)"cast\0"};
nctemp1701=&nctemp1702;
nctempchar1* nctemp1699= nctemp1701;
int nctemp1703=LibeStrcmp(nctemp1696,nctemp1699);
if(nctemp1703)
{
rval =23;
}
else{
nctempchar1* nctemp1709= ScanText;
struct nctempchar1 *nctemp1714;
static struct nctempchar1 nctemp1715 = {{ 4}, (char*)"new\0"};
nctemp1714=&nctemp1715;
nctempchar1* nctemp1712= nctemp1714;
int nctemp1716=LibeStrcmp(nctemp1709,nctemp1712);
if(nctemp1716)
{
rval =26;
}
else{
nctempchar1* nctemp1722= ScanText;
struct nctempchar1 *nctemp1727;
static struct nctempchar1 nctemp1728 = {{ 7}, (char*)"delete\0"};
nctemp1727=&nctemp1728;
nctempchar1* nctemp1725= nctemp1727;
int nctemp1729=LibeStrcmp(nctemp1722,nctemp1725);
if(nctemp1729)
{
rval =50;
}
else{
nctempchar1* nctemp1735= ScanText;
struct nctempchar1 *nctemp1740;
static struct nctempchar1 nctemp1741 = {{ 4}, (char*)"len\0"};
nctemp1740=&nctemp1741;
nctempchar1* nctemp1738= nctemp1740;
int nctemp1742=LibeStrcmp(nctemp1735,nctemp1738);
if(nctemp1742)
{
rval =29;
}
else{
nctempchar1* nctemp1748= ScanText;
struct nctempchar1 *nctemp1753;
static struct nctempchar1 nctemp1754 = {{ 6}, (char*)"cmplx\0"};
nctemp1753=&nctemp1754;
nctempchar1* nctemp1751= nctemp1753;
int nctemp1755=LibeStrcmp(nctemp1748,nctemp1751);
if(nctemp1755)
{
rval =25;
}
else{
nctempchar1* nctemp1761= ScanText;
struct nctempchar1 *nctemp1766;
static struct nctempchar1 nctemp1767 = {{ 3}, (char*)"re\0"};
nctemp1766=&nctemp1767;
nctempchar1* nctemp1764= nctemp1766;
int nctemp1768=LibeStrcmp(nctemp1761,nctemp1764);
if(nctemp1768)
{
rval =28;
}
else{
nctempchar1* nctemp1774= ScanText;
struct nctempchar1 *nctemp1779;
static struct nctempchar1 nctemp1780 = {{ 3}, (char*)"im\0"};
nctemp1779=&nctemp1780;
nctempchar1* nctemp1777= nctemp1779;
int nctemp1781=LibeStrcmp(nctemp1774,nctemp1777);
if(nctemp1781)
{
rval =27;
}
else{
nctempchar1* nctemp1787= ScanText;
struct nctempchar1 *nctemp1792;
static struct nctempchar1 nctemp1793 = {{ 4}, (char*)"for\0"};
nctemp1792=&nctemp1793;
nctempchar1* nctemp1790= nctemp1792;
int nctemp1794=LibeStrcmp(nctemp1787,nctemp1790);
if(nctemp1794)
{
rval =26;
}
else{
nctempchar1* nctemp1800= ScanText;
struct nctempchar1 *nctemp1805;
static struct nctempchar1 nctemp1806 = {{ 9}, (char*)"parallel\0"};
nctemp1805=&nctemp1806;
nctempchar1* nctemp1803= nctemp1805;
int nctemp1807=LibeStrcmp(nctemp1800,nctemp1803);
if(nctemp1807)
{
rval =31;
}
else{
nctempchar1* nctemp1813= ScanText;
struct nctempchar1 *nctemp1818;
static struct nctempchar1 nctemp1819 = {{ 5}, (char*)"pass\0"};
nctemp1818=&nctemp1819;
nctempchar1* nctemp1816= nctemp1818;
int nctemp1820=LibeStrcmp(nctemp1813,nctemp1816);
if(nctemp1820)
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
struct nctempchar1 *nctemp1832;
static struct nctempchar1 nctemp1833 = {{ 14}, (char*)"Invalid token\0"};
nctemp1832=&nctemp1833;
nctempchar1* nctemp1830= nctemp1832;
int nctemp1834=ScanError(nctemp1830);
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
int nctemp1844 = p + 1;
int nctemp1839=nctemp1844;
char nctemp1846=(char)(0);
ScanText->a[nctemp1839] =nctemp1846;
return rval;
}
nctempchar1 * ScanSetfile (nctempchar1 *fname)
{
nctempchar1 *nctemp1851 =ScanFile;
int nctemp1850 =(nctemp1851!=0);
if(nctemp1850)
{
RunFree(ScanFile->a);
RunFree(ScanFile);
}
nctempchar1* nctemp1863= fname;
nctempchar1* nctemp1866=LibeStrsave(nctemp1863);
ScanFile=nctemp1866;
return ScanFile;
}
int ScanGetok ()
{
int c;
int indent;
int level;
int nctemp1869 = (ScanLine > ScanLinesave);
if(nctemp1869)
{
int nctemp1876= -1;
indent =nctemp1876;
int nctemp1877 = (indent < 0);
int nctemp1881=nctemp1877;
while(nctemp1881)
{{
int nctemp1886=ScanBlank();
indent =nctemp1886;
}
int nctemp1887 = (indent < 0);
nctemp1881=nctemp1887;}ScanIndent =indent;
ScanLinesave =ScanLine;
}
int nctemp1902= -1;
int nctemp1899 = (ScanIndentsave ==nctemp1902);
if(nctemp1899)
{
ScanIndentsave =ScanIndent;
}
int nctemp1907 = (ScanIndent > ScanIndentsave);
if(nctemp1907)
{
ScanIndentsave =ScanIndent;
int nctemp1916= ScanIndent;
int nctemp1918=ScanPush(nctemp1916);
return 600;
}
else{
int nctemp1920 = (ScanIndent < ScanIndentsave);
if(nctemp1920)
{
int nctemp1928=ScanPop();
level =nctemp1928;
ScanIndentsave =level;
return 601;
}
else{
int nctemp1938=ScanLex();
c =nctemp1938;
int nctemp1939 = (c ==32);
if(nctemp1939)
{
int nctemp1947=ScanLex();
c =nctemp1947;
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
int nctemp1954= -1;
ScanLinesave =nctemp1954;
ScanLine =lineno;
return 0;
}
int ScanGetword (nctempchar1 *ttext)
{
int nctemp1961= ScanFp;
nctempchar1* nctemp1963= ttext;
int nctemp1966=LibeGetw(nctemp1961,nctemp1963);
return nctemp1966;
}
