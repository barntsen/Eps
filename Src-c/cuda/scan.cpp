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
int nctemp146= -1;
ScanIndentsave =nctemp146;
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
ScanEnd =0;
return 1;
}
int ScanGetch ()
{
int nctemp176= ScanFp;
int nctemp178=LibeGetc(nctemp176);
return nctemp178;
}
int ScanIncline ()
{
ScanLinesave =ScanLine;
int nctemp191 = ScanLine + 1;
ScanLine =nctemp191;
return 1;
}
int ScanUngetch ()
{
int nctemp194= ScanFp;
int nctemp196=LibeUngetc(nctemp194);
return nctemp196;
}
int ScanBlank ()
{
int c;
int indent;
indent =0;
int nctemp211=ScanGetch();
c =nctemp211;
int nctemp204 = (c ==32);
int nctemp214 = (c ==9);
int nctemp201 = (nctemp204 || nctemp214);
int nctemp218=nctemp201;
while(nctemp218)
{{
int nctemp227 = indent + 1;
indent =nctemp227;
}
int nctemp238=ScanGetch();
c =nctemp238;
int nctemp231 = (c ==32);
int nctemp241 = (c ==9);
int nctemp228 = (nctemp231 || nctemp241);
nctemp218=nctemp228;}int nctemp245 = (c ==(-1));
if(nctemp245)
{
indent =ScanIndentinit;
return indent;
}
int nctemp254 = (c =='#');
if(nctemp254)
{
int nctemp261= -2;
indent =nctemp261;
int nctemp265=ScanGetch();
int nctemp262 = (nctemp265 !=10);
int nctemp267=nctemp262;
while(nctemp267)
{{
int nctemp271= -2;
indent =nctemp271;
}
int nctemp275=ScanGetch();
int nctemp272 = (nctemp275 !=10);
nctemp267=nctemp272;}int nctemp278=ScanIncline();
return indent;
}
else{
int nctemp280 = (c ==10);
if(nctemp280)
{
int nctemp287= -1;
indent =nctemp287;
int nctemp289=ScanIncline();
return indent;
}
else{
int nctemp292=ScanUngetch();
return indent;
}
}
}
int ScanWhite ()
{
int c;
int d;
int nctemp304=ScanGetch();
c =nctemp304;
int nctemp297 = (c ==32);
int nctemp307 = (c ==9);
int nctemp294 = (nctemp297 || nctemp307);
int nctemp311=nctemp294;
while(nctemp311)
{{
d =0;
}
int nctemp326=ScanGetch();
c =nctemp326;
int nctemp319 = (c ==32);
int nctemp329 = (c ==9);
int nctemp316 = (nctemp319 || nctemp329);
nctemp311=nctemp316;}int nctemp334=ScanUngetch();
return 1;
}
int ScanComment ()
{
int incomment;
int c;
incomment =1;
int nctemp340 = (incomment ==1);
int nctemp344=nctemp340;
while(nctemp344)
{{
int nctemp349=ScanGetch();
c =nctemp349;
int nctemp350 = (c ==10);
if(nctemp350)
{
int nctemp355=ScanIncline();
}
int nctemp356 = (c =='*');
if(nctemp356)
{
int nctemp364=ScanGetch();
c =nctemp364;
int nctemp365 = (c ==10);
if(nctemp365)
{
int nctemp370=ScanIncline();
}
int nctemp371 = (c =='/');
if(nctemp371)
{
incomment =0;
}
}
int nctemp379 = (c ==(-1));
if(nctemp379)
{
struct nctempchar1 *nctemp386;
static struct nctempchar1 nctemp387 = {{ 24}, (char*)"Closing comment missing\0"};
nctemp386=&nctemp387;
nctempchar1* nctemp384= nctemp386;
int nctemp388=ScanError(nctemp384);
}
}
int nctemp389 = (incomment ==1);
nctemp344=nctemp389;}return 1;
}
int ScanLcomment ()
{
int incomment;
int c;
incomment =1;
int nctemp398 = (incomment ==1);
int nctemp402=nctemp398;
while(nctemp402)
{{
int nctemp407=ScanGetch();
c =nctemp407;
int nctemp408 = (c ==10);
if(nctemp408)
{
incomment =0;
}
}
int nctemp416 = (incomment ==1);
nctemp402=nctemp416;}int nctemp421=ScanUngetch();
return 1;
}
int ScanFtail (int p)
{
int c;
int nctemp429=ScanGetch();
c =nctemp429;
int nctemp424= c;
int nctemp430=LibeIsdigit(nctemp424);
int nctemp431=nctemp430;
while(nctemp431)
{{
int nctemp440 = p + 1;
p =nctemp440;
int nctemp445=ScanText->d[0];int nctemp441 = (p >= nctemp445);
if(nctemp441)
{
struct nctempchar1 *nctemp452;
static struct nctempchar1 nctemp453 = {{ 18}, (char*)"Digit is too long\0"};
nctemp452=&nctemp453;
nctempchar1* nctemp450= nctemp452;
int nctemp454=ScanError(nctemp450);
}
int nctemp458=p;
char nctemp461=(char)(c);
ScanText->a[nctemp458] =nctemp461;
}
int nctemp470=ScanGetch();
c =nctemp470;
int nctemp465= c;
int nctemp471=LibeIsdigit(nctemp465);
nctemp431=nctemp471;}int nctemp475 = (c =='e');
int nctemp480 = (c =='E');
int nctemp472 = (nctemp475 || nctemp480);
if(nctemp472)
{
int nctemp492 = p + 1;
p =nctemp492;
int nctemp497=ScanText->d[0];int nctemp493 = (p >= nctemp497);
if(nctemp493)
{
struct nctempchar1 *nctemp504;
static struct nctempchar1 nctemp505 = {{ 18}, (char*)"Digit is too long\0"};
nctemp504=&nctemp505;
nctempchar1* nctemp502= nctemp504;
int nctemp506=ScanError(nctemp502);
}
int nctemp510=p;
char nctemp513=(char)(c);
ScanText->a[nctemp510] =nctemp513;
int nctemp520=ScanGetch();
c =nctemp520;
int nctemp524 = (c ==43);
int nctemp529 = (c ==45);
int nctemp521 = (nctemp524 || nctemp529);
if(nctemp521)
{
int nctemp541 = p + 1;
p =nctemp541;
int nctemp546=ScanText->d[0];int nctemp542 = (p >= nctemp546);
if(nctemp542)
{
struct nctempchar1 *nctemp553;
static struct nctempchar1 nctemp554 = {{ 18}, (char*)"Digit is too long\0"};
nctemp553=&nctemp554;
nctempchar1* nctemp551= nctemp553;
int nctemp555=ScanError(nctemp551);
}
int nctemp559=p;
char nctemp562=(char)(c);
ScanText->a[nctemp559] =nctemp562;
int nctemp571=ScanGetch();
c =nctemp571;
int nctemp566= c;
int nctemp572=LibeIsdigit(nctemp566);
int nctemp573=nctemp572;
while(nctemp573)
{{
int nctemp582 = p + 1;
p =nctemp582;
int nctemp587=ScanText->d[0];int nctemp583 = (p >= nctemp587);
if(nctemp583)
{
struct nctempchar1 *nctemp594;
static struct nctempchar1 nctemp595 = {{ 18}, (char*)"Digit is too long\0"};
nctemp594=&nctemp595;
nctempchar1* nctemp592= nctemp594;
int nctemp596=ScanError(nctemp592);
}
int nctemp600=p;
char nctemp603=(char)(c);
ScanText->a[nctemp600] =nctemp603;
}
int nctemp612=ScanGetch();
c =nctemp612;
int nctemp607= c;
int nctemp613=LibeIsdigit(nctemp607);
nctemp573=nctemp613;}int nctemp615=ScanUngetch();
int nctemp624 = p + 1;
int nctemp619=nctemp624;
char nctemp626=(char)(0);
ScanText->a[nctemp619] =nctemp626;
return p;
}
else{
struct nctempchar1 *nctemp633;
static struct nctempchar1 nctemp634 = {{ 14}, (char*)"Unknown token\0"};
nctemp633=&nctemp634;
nctempchar1* nctemp631= nctemp633;
int nctemp635=ScanError(nctemp631);
}
return 0;
}
else{
int nctemp638=ScanUngetch();
int nctemp647 = p + 1;
int nctemp642=nctemp647;
char nctemp649=(char)(0);
ScanText->a[nctemp642] =nctemp649;
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
int nctemp654=ScanWhite();
int nctemp659=ScanGetch();
c =nctemp659;
p =0;
int nctemp667=p;
char nctemp670=(char)(c);
ScanText->a[nctemp667] =nctemp670;
comments =1;
int nctemp677 = (comments ==1);
int nctemp681=nctemp677;
while(nctemp681)
{{
int nctemp682 = (c =='#');
if(nctemp682)
{
int nctemp687=ScanLcomment();
int nctemp692=ScanGetch();
c =nctemp692;
int nctemp696=p;
char nctemp699=(char)(c);
ScanText->a[nctemp696] =nctemp699;
}
else{
comments =0;
}
}
int nctemp706 = (comments ==1);
nctemp681=nctemp706;}int nctemp710 = (c ==(-1));
if(nctemp710)
{
rval =19;
return rval;
}
int nctemp719 = (c ==43);
if(nctemp719)
{
rval =43;
}
else{
int nctemp727 = (c ==42);
if(nctemp727)
{
rval =42;
}
else{
int nctemp735 = (c ==47);
if(nctemp735)
{
rval =47;
}
else{
int nctemp743 = (c ==92);
if(nctemp743)
{
rval =32;
int nctemp752=ScanGetch();
int nctemp761 = ScanContline + 1;
ScanContline =nctemp761;
}
else{
int nctemp762 = (c ==40);
if(nctemp762)
{
rval =40;
}
else{
int nctemp770 = (c ==41);
if(nctemp770)
{
rval =41;
}
else{
int nctemp778 = (c ==93);
if(nctemp778)
{
rval =93;
}
else{
int nctemp786 = (c ==91);
if(nctemp786)
{
rval =91;
}
else{
int nctemp794 = (c ==123);
if(nctemp794)
{
rval =123;
}
else{
int nctemp802 = (c ==125);
if(nctemp802)
{
rval =125;
}
else{
int nctemp810 = (c ==58);
if(nctemp810)
{
rval =58;
}
else{
int nctemp818 = (c ==59);
if(nctemp818)
{
rval =59;
}
else{
int nctemp826 = (c ==44);
if(nctemp826)
{
rval =44;
}
else{
int nctemp834 = (c ==46);
if(nctemp834)
{
rval =46;
}
else{
int nctemp842 = (c ==10);
if(nctemp842)
{
rval =10;
int nctemp851=ScanIncline();
}
else{
int nctemp852 = (c ==60);
if(nctemp852)
{
int nctemp863=ScanGetch();
c =nctemp863;
int nctemp856 = (c ==61);
if(nctemp856)
{
rval =20;
int nctemp877 = p + 1;
p =nctemp877;
int nctemp881=p;
char nctemp884=(char)(c);
ScanText->a[nctemp881] =nctemp884;
}
else{
int nctemp888=ScanUngetch();
rval =60;
}
}
else{
int nctemp893 = (c ==62);
if(nctemp893)
{
int nctemp904=ScanGetch();
c =nctemp904;
int nctemp897 = (c ==61);
if(nctemp897)
{
rval =21;
int nctemp918 = p + 1;
p =nctemp918;
int nctemp922=p;
char nctemp925=(char)(c);
ScanText->a[nctemp922] =nctemp925;
}
else{
int nctemp929=ScanUngetch();
rval =62;
}
}
else{
int nctemp934 = (c ==45);
if(nctemp934)
{
int nctemp945=ScanGetch();
c =nctemp945;
int nctemp938 = (c ==62);
if(nctemp938)
{
rval =2;
int nctemp959 = p + 1;
p =nctemp959;
int nctemp963=p;
char nctemp966=(char)(c);
ScanText->a[nctemp963] =nctemp966;
}
else{
int nctemp970=ScanUngetch();
rval =45;
}
}
else{
int nctemp975 = (c ==124);
if(nctemp975)
{
int nctemp986=ScanGetch();
c =nctemp986;
int nctemp979 = (c ==124);
if(nctemp979)
{
rval =5;
int nctemp1000 = p + 1;
p =nctemp1000;
int nctemp1004=p;
char nctemp1007=(char)(c);
ScanText->a[nctemp1004] =nctemp1007;
}
else{
struct nctempchar1 *nctemp1013;
static struct nctempchar1 nctemp1014 = {{ 18}, (char*)"Illegal character\0"};
nctemp1013=&nctemp1014;
nctempchar1* nctemp1011= nctemp1013;
int nctemp1015=ScanError(nctemp1011);
}
}
else{
int nctemp1016 = (c ==38);
if(nctemp1016)
{
int nctemp1027=ScanGetch();
c =nctemp1027;
int nctemp1020 = (c ==38);
if(nctemp1020)
{
rval =6;
int nctemp1041 = p + 1;
p =nctemp1041;
int nctemp1045=p;
char nctemp1048=(char)(c);
ScanText->a[nctemp1045] =nctemp1048;
}
else{
struct nctempchar1 *nctemp1054;
static struct nctempchar1 nctemp1055 = {{ 18}, (char*)"Illegal character\0"};
nctemp1054=&nctemp1055;
nctempchar1* nctemp1052= nctemp1054;
int nctemp1056=ScanError(nctemp1052);
}
}
else{
int nctemp1057 = (c ==33);
if(nctemp1057)
{
int nctemp1068=ScanGetch();
c =nctemp1068;
int nctemp1061 = (c ==61);
if(nctemp1061)
{
rval =4;
int nctemp1082 = p + 1;
p =nctemp1082;
int nctemp1086=p;
char nctemp1089=(char)(c);
ScanText->a[nctemp1086] =nctemp1089;
}
else{
struct nctempchar1 *nctemp1095;
static struct nctempchar1 nctemp1096 = {{ 18}, (char*)"Illegal character\0"};
nctemp1095=&nctemp1096;
nctempchar1* nctemp1093= nctemp1095;
int nctemp1097=ScanError(nctemp1093);
}
}
else{
int nctemp1098 = (c ==61);
if(nctemp1098)
{
int nctemp1109=ScanGetch();
c =nctemp1109;
int nctemp1102 = (c ==61);
if(nctemp1102)
{
rval =3;
int nctemp1123 = p + 1;
p =nctemp1123;
int nctemp1127=p;
char nctemp1130=(char)(c);
ScanText->a[nctemp1127] =nctemp1130;
}
else{
int nctemp1134=ScanUngetch();
rval =61;
}
}
else{
int nctemp1139 = (c ==34);
if(nctemp1139)
{
int nctemp1146=p;
char nctemp1149=(char)(34);
ScanText->a[nctemp1146] =nctemp1149;
int nctemp1160 = p + 1;
p =nctemp1160;
string =1;
int nctemp1165 = (string ==1);
int nctemp1169=nctemp1165;
while(nctemp1169)
{{
int nctemp1177=ScanGetch();
c =nctemp1177;
int nctemp1170 = (c !=34);
if(nctemp1170)
{
string =1;
}
else{
int nctemp1194 = p - 1;
int nctemp1189=nctemp1194;
int nctemp1186=(int)(ScanText->a[nctemp1189]);
int nctemp1183 = (nctemp1186 ==92);
if(nctemp1183)
{
string =1;
}
else{
string =0;
}
}
int nctemp1207=p;
char nctemp1210=(char)(c);
ScanText->a[nctemp1207] =nctemp1210;
int nctemp1221 = p + 1;
p =nctemp1221;
int nctemp1229=ScanText->d[0];int nctemp1234 = nctemp1229 - 1;
int nctemp1222 = (p >= nctemp1234);
if(nctemp1222)
{
struct nctempchar1 *nctemp1238;
static struct nctempchar1 nctemp1239 = {{ 19}, (char*)"String is too long\0"};
nctemp1238=&nctemp1239;
nctempchar1* nctemp1236= nctemp1238;
int nctemp1240=ScanError(nctemp1236);
}
}
int nctemp1241 = (string ==1);
nctemp1169=nctemp1241;}int nctemp1248=p;
char nctemp1251=(char)(0);
ScanText->a[nctemp1248] =nctemp1251;
rval =18;
}
else{
int nctemp1258 = (c ==39);
if(nctemp1258)
{
int nctemp1265=p;
char nctemp1268=(char)(39);
ScanText->a[nctemp1265] =nctemp1268;
int nctemp1279 = p + 1;
p =nctemp1279;
int nctemp1283=p;
int nctemp1289=ScanGetch();
char nctemp1286=(char)(nctemp1289);
ScanText->a[nctemp1283] =nctemp1286;
int nctemp1294=ScanGetch();
c =nctemp1294;
int nctemp1295 = (c !=39);
if(nctemp1295)
{
struct nctempchar1 *nctemp1302;
static struct nctempchar1 nctemp1303 = {{ 31}, (char*)"Character constant is too long\0"};
nctemp1302=&nctemp1303;
nctempchar1* nctemp1300= nctemp1302;
int nctemp1304=ScanError(nctemp1300);
}
else{
int nctemp1313 = p + 1;
p =nctemp1313;
int nctemp1317=p;
char nctemp1320=(char)(c);
ScanText->a[nctemp1317] =nctemp1320;
}
int nctemp1331 = p + 1;
p =nctemp1331;
int nctemp1335=p;
char nctemp1338=(char)(0);
ScanText->a[nctemp1335] =nctemp1338;
rval =17;
}
else{
int nctemp1346= c;
int nctemp1348=LibeIsdigit(nctemp1346);
if(nctemp1348)
{
int nctemp1355=ScanGetch();
c =nctemp1355;
int nctemp1350= c;
int nctemp1356=LibeIsdigit(nctemp1350);
int nctemp1357=nctemp1356;
while(nctemp1357)
{{
int nctemp1366 = p + 1;
p =nctemp1366;
int nctemp1370=p;
char nctemp1373=(char)(c);
ScanText->a[nctemp1370] =nctemp1373;
int nctemp1380=ScanText->d[0];int nctemp1376 = (p >= nctemp1380);
if(nctemp1376)
{
struct nctempchar1 *nctemp1387;
static struct nctempchar1 nctemp1388 = {{ 18}, (char*)"Digit is too long\0"};
nctemp1387=&nctemp1388;
nctempchar1* nctemp1385= nctemp1387;
int nctemp1389=ScanError(nctemp1385);
}
}
int nctemp1396=ScanGetch();
c =nctemp1396;
int nctemp1391= c;
int nctemp1397=LibeIsdigit(nctemp1391);
nctemp1357=nctemp1397;}int nctemp1398 = (c ==46);
if(nctemp1398)
{
int nctemp1410 = p + 1;
p =nctemp1410;
int nctemp1415=ScanText->d[0];int nctemp1411 = (p >= nctemp1415);
if(nctemp1411)
{
struct nctempchar1 *nctemp1422;
static struct nctempchar1 nctemp1423 = {{ 18}, (char*)"Digit is too long\0"};
nctemp1422=&nctemp1423;
nctempchar1* nctemp1420= nctemp1422;
int nctemp1424=ScanError(nctemp1420);
}
int nctemp1428=p;
char nctemp1431=(char)(c);
ScanText->a[nctemp1428] =nctemp1431;
int nctemp1438= p;
int nctemp1440=ScanFtail(nctemp1438);
p =nctemp1440;
rval =24;
}
else{
int nctemp1446=ScanUngetch();
int nctemp1455 = p + 1;
int nctemp1450=nctemp1455;
char nctemp1457=(char)(0);
ScanText->a[nctemp1450] =nctemp1457;
rval =17;
}
}
else{
int nctemp1465= c;
int nctemp1467=LibeIsalnum(nctemp1465);
if(nctemp1467)
{
int nctemp1474=ScanGetch();
c =nctemp1474;
int nctemp1469= c;
int nctemp1475=LibeIsalnum(nctemp1469);
int nctemp1476=nctemp1475;
while(nctemp1476)
{{
int nctemp1485 = p + 1;
p =nctemp1485;
int nctemp1489=p;
char nctemp1492=(char)(c);
ScanText->a[nctemp1489] =nctemp1492;
int nctemp1499=ScanText->d[0];int nctemp1495 = (p >= nctemp1499);
if(nctemp1495)
{
struct nctempchar1 *nctemp1506;
static struct nctempchar1 nctemp1507 = {{ 23}, (char*)"Identifier is too long\0"};
nctemp1506=&nctemp1507;
nctempchar1* nctemp1504= nctemp1506;
int nctemp1508=ScanError(nctemp1504);
}
}
int nctemp1515=ScanGetch();
c =nctemp1515;
int nctemp1510= c;
int nctemp1516=LibeIsalnum(nctemp1510);
nctemp1476=nctemp1516;}int nctemp1518=ScanUngetch();
int nctemp1527 = p + 1;
int nctemp1522=nctemp1527;
char nctemp1529=(char)(0);
ScanText->a[nctemp1522] =nctemp1529;
nctempchar1* nctemp1533= ScanText;
struct nctempchar1 *nctemp1538;
static struct nctempchar1 nctemp1539 = {{ 4}, (char*)"int\0"};
nctemp1538=&nctemp1539;
nctempchar1* nctemp1536= nctemp1538;
int nctemp1540=LibeStrcmp(nctemp1533,nctemp1536);
if(nctemp1540)
{
rval =7;
}
else{
nctempchar1* nctemp1546= ScanText;
struct nctempchar1 *nctemp1551;
static struct nctempchar1 nctemp1552 = {{ 5}, (char*)"char\0"};
nctemp1551=&nctemp1552;
nctempchar1* nctemp1549= nctemp1551;
int nctemp1553=LibeStrcmp(nctemp1546,nctemp1549);
if(nctemp1553)
{
rval =8;
}
else{
nctempchar1* nctemp1559= ScanText;
struct nctempchar1 *nctemp1564;
static struct nctempchar1 nctemp1565 = {{ 6}, (char*)"float\0"};
nctemp1564=&nctemp1565;
nctempchar1* nctemp1562= nctemp1564;
int nctemp1566=LibeStrcmp(nctemp1559,nctemp1562);
if(nctemp1566)
{
rval =9;
}
else{
nctempchar1* nctemp1572= ScanText;
struct nctempchar1 *nctemp1577;
static struct nctempchar1 nctemp1578 = {{ 6}, (char*)"const\0"};
nctemp1577=&nctemp1578;
nctempchar1* nctemp1575= nctemp1577;
int nctemp1579=LibeStrcmp(nctemp1572,nctemp1575);
if(nctemp1579)
{
rval =431;
}
else{
nctempchar1* nctemp1585= ScanText;
struct nctempchar1 *nctemp1590;
static struct nctempchar1 nctemp1591 = {{ 8}, (char*)"complex\0"};
nctemp1590=&nctemp1591;
nctempchar1* nctemp1588= nctemp1590;
int nctemp1592=LibeStrcmp(nctemp1585,nctemp1588);
if(nctemp1592)
{
rval =510;
}
else{
nctempchar1* nctemp1598= ScanText;
struct nctempchar1 *nctemp1603;
static struct nctempchar1 nctemp1604 = {{ 7}, (char*)"struct\0"};
nctemp1603=&nctemp1604;
nctempchar1* nctemp1601= nctemp1603;
int nctemp1605=LibeStrcmp(nctemp1598,nctemp1601);
if(nctemp1605)
{
rval =11;
}
else{
nctempchar1* nctemp1611= ScanText;
struct nctempchar1 *nctemp1616;
static struct nctempchar1 nctemp1617 = {{ 6}, (char*)"class\0"};
nctemp1616=&nctemp1617;
nctempchar1* nctemp1614= nctemp1616;
int nctemp1618=LibeStrcmp(nctemp1611,nctemp1614);
if(nctemp1618)
{
rval =11;
}
else{
nctempchar1* nctemp1624= ScanText;
struct nctempchar1 *nctemp1629;
static struct nctempchar1 nctemp1630 = {{ 7}, (char*)"import\0"};
nctemp1629=&nctemp1630;
nctempchar1* nctemp1627= nctemp1629;
int nctemp1631=LibeStrcmp(nctemp1624,nctemp1627);
if(nctemp1631)
{
rval =433;
}
else{
nctempchar1* nctemp1637= ScanText;
struct nctempchar1 *nctemp1642;
static struct nctempchar1 nctemp1643 = {{ 6}, (char*)"while\0"};
nctemp1642=&nctemp1643;
nctempchar1* nctemp1640= nctemp1642;
int nctemp1644=LibeStrcmp(nctemp1637,nctemp1640);
if(nctemp1644)
{
rval =12;
}
else{
nctempchar1* nctemp1650= ScanText;
struct nctempchar1 *nctemp1655;
static struct nctempchar1 nctemp1656 = {{ 7}, (char*)"return\0"};
nctemp1655=&nctemp1656;
nctempchar1* nctemp1653= nctemp1655;
int nctemp1657=LibeStrcmp(nctemp1650,nctemp1653);
if(nctemp1657)
{
rval =30;
}
else{
nctempchar1* nctemp1663= ScanText;
struct nctempchar1 *nctemp1668;
static struct nctempchar1 nctemp1669 = {{ 4}, (char*)"def\0"};
nctemp1668=&nctemp1669;
nctempchar1* nctemp1666= nctemp1668;
int nctemp1670=LibeStrcmp(nctemp1663,nctemp1666);
if(nctemp1670)
{
rval =1100;
}
else{
nctempchar1* nctemp1676= ScanText;
struct nctempchar1 *nctemp1681;
static struct nctempchar1 nctemp1682 = {{ 3}, (char*)"if\0"};
nctemp1681=&nctemp1682;
nctempchar1* nctemp1679= nctemp1681;
int nctemp1683=LibeStrcmp(nctemp1676,nctemp1679);
if(nctemp1683)
{
rval =14;
}
else{
nctempchar1* nctemp1689= ScanText;
struct nctempchar1 *nctemp1694;
static struct nctempchar1 nctemp1695 = {{ 5}, (char*)"else\0"};
nctemp1694=&nctemp1695;
nctempchar1* nctemp1692= nctemp1694;
int nctemp1696=LibeStrcmp(nctemp1689,nctemp1692);
if(nctemp1696)
{
rval =15;
}
else{
nctempchar1* nctemp1702= ScanText;
struct nctempchar1 *nctemp1707;
static struct nctempchar1 nctemp1708 = {{ 7}, (char*)"sizeof\0"};
nctemp1707=&nctemp1708;
nctempchar1* nctemp1705= nctemp1707;
int nctemp1709=LibeStrcmp(nctemp1702,nctemp1705);
if(nctemp1709)
{
rval =22;
}
else{
nctempchar1* nctemp1715= ScanText;
struct nctempchar1 *nctemp1720;
static struct nctempchar1 nctemp1721 = {{ 5}, (char*)"cast\0"};
nctemp1720=&nctemp1721;
nctempchar1* nctemp1718= nctemp1720;
int nctemp1722=LibeStrcmp(nctemp1715,nctemp1718);
if(nctemp1722)
{
rval =23;
}
else{
nctempchar1* nctemp1728= ScanText;
struct nctempchar1 *nctemp1733;
static struct nctempchar1 nctemp1734 = {{ 4}, (char*)"new\0"};
nctemp1733=&nctemp1734;
nctempchar1* nctemp1731= nctemp1733;
int nctemp1735=LibeStrcmp(nctemp1728,nctemp1731);
if(nctemp1735)
{
rval =26;
}
else{
nctempchar1* nctemp1741= ScanText;
struct nctempchar1 *nctemp1746;
static struct nctempchar1 nctemp1747 = {{ 7}, (char*)"delete\0"};
nctemp1746=&nctemp1747;
nctempchar1* nctemp1744= nctemp1746;
int nctemp1748=LibeStrcmp(nctemp1741,nctemp1744);
if(nctemp1748)
{
rval =50;
}
else{
nctempchar1* nctemp1754= ScanText;
struct nctempchar1 *nctemp1759;
static struct nctempchar1 nctemp1760 = {{ 4}, (char*)"len\0"};
nctemp1759=&nctemp1760;
nctempchar1* nctemp1757= nctemp1759;
int nctemp1761=LibeStrcmp(nctemp1754,nctemp1757);
if(nctemp1761)
{
rval =29;
}
else{
nctempchar1* nctemp1767= ScanText;
struct nctempchar1 *nctemp1772;
static struct nctempchar1 nctemp1773 = {{ 6}, (char*)"cmplx\0"};
nctemp1772=&nctemp1773;
nctempchar1* nctemp1770= nctemp1772;
int nctemp1774=LibeStrcmp(nctemp1767,nctemp1770);
if(nctemp1774)
{
rval =25;
}
else{
nctempchar1* nctemp1780= ScanText;
struct nctempchar1 *nctemp1785;
static struct nctempchar1 nctemp1786 = {{ 3}, (char*)"re\0"};
nctemp1785=&nctemp1786;
nctempchar1* nctemp1783= nctemp1785;
int nctemp1787=LibeStrcmp(nctemp1780,nctemp1783);
if(nctemp1787)
{
rval =28;
}
else{
nctempchar1* nctemp1793= ScanText;
struct nctempchar1 *nctemp1798;
static struct nctempchar1 nctemp1799 = {{ 3}, (char*)"im\0"};
nctemp1798=&nctemp1799;
nctempchar1* nctemp1796= nctemp1798;
int nctemp1800=LibeStrcmp(nctemp1793,nctemp1796);
if(nctemp1800)
{
rval =27;
}
else{
nctempchar1* nctemp1806= ScanText;
struct nctempchar1 *nctemp1811;
static struct nctempchar1 nctemp1812 = {{ 4}, (char*)"for\0"};
nctemp1811=&nctemp1812;
nctempchar1* nctemp1809= nctemp1811;
int nctemp1813=LibeStrcmp(nctemp1806,nctemp1809);
if(nctemp1813)
{
rval =26;
}
else{
nctempchar1* nctemp1819= ScanText;
struct nctempchar1 *nctemp1824;
static struct nctempchar1 nctemp1825 = {{ 9}, (char*)"parallel\0"};
nctemp1824=&nctemp1825;
nctempchar1* nctemp1822= nctemp1824;
int nctemp1826=LibeStrcmp(nctemp1819,nctemp1822);
if(nctemp1826)
{
rval =31;
}
else{
nctempchar1* nctemp1832= ScanText;
struct nctempchar1 *nctemp1837;
static struct nctempchar1 nctemp1838 = {{ 5}, (char*)"pass\0"};
nctemp1837=&nctemp1838;
nctempchar1* nctemp1835= nctemp1837;
int nctemp1839=LibeStrcmp(nctemp1832,nctemp1835);
if(nctemp1839)
{
rval =701;
}
else{
nctempchar1* nctemp1845= ScanText;
struct nctempchar1 *nctemp1850;
static struct nctempchar1 nctemp1851 = {{ 3}, (char*)"in\0"};
nctemp1850=&nctemp1851;
nctempchar1* nctemp1848= nctemp1850;
int nctemp1852=LibeStrcmp(nctemp1845,nctemp1848);
if(nctemp1852)
{
rval =702;
}
else{
nctempchar1* nctemp1858= ScanText;
struct nctempchar1 *nctemp1863;
static struct nctempchar1 nctemp1864 = {{ 6}, (char*)"range\0"};
nctemp1863=&nctemp1864;
nctempchar1* nctemp1861= nctemp1863;
int nctemp1865=LibeStrcmp(nctemp1858,nctemp1861);
if(nctemp1865)
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
struct nctempchar1 *nctemp1877;
static struct nctempchar1 nctemp1878 = {{ 14}, (char*)"Invalid token\0"};
nctemp1877=&nctemp1878;
nctempchar1* nctemp1875= nctemp1877;
int nctemp1879=ScanError(nctemp1875);
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
int nctemp1889 = p + 1;
int nctemp1884=nctemp1889;
char nctemp1891=(char)(0);
ScanText->a[nctemp1884] =nctemp1891;
return rval;
}
nctempchar1 * ScanSetfile (nctempchar1 *fname)
{
nctempchar1 *nctemp1896 =ScanFile;
int nctemp1895 =(nctemp1896!=0);
if(nctemp1895)
{
RunFree(ScanFile->a);
RunFree(ScanFile);
}
nctempchar1* nctemp1908= fname;
nctempchar1* nctemp1911=LibeStrsave(nctemp1908);
ScanFile=nctemp1911;
return ScanFile;
}
int ScanGetok ()
{
int c;
int indent;
int level;
int nctemp1914 = (ScanLine > ScanLinesave);
if(nctemp1914)
{
int nctemp1921= -1;
indent =nctemp1921;
int nctemp1928= -1;
int nctemp1925 = (indent ==nctemp1928);
int nctemp1933= -2;
int nctemp1930 = (indent ==nctemp1933);
int nctemp1922 = (nctemp1925 || nctemp1930);
int nctemp1934=nctemp1922;
while(nctemp1934)
{{
int nctemp1939=ScanBlank();
indent =nctemp1939;
}
int nctemp1946= -1;
int nctemp1943 = (indent ==nctemp1946);
int nctemp1951= -2;
int nctemp1948 = (indent ==nctemp1951);
int nctemp1940 = (nctemp1943 || nctemp1948);
nctemp1934=nctemp1940;}ScanIndent =indent;
ScanLinesave =ScanLine;
}
int nctemp1963= -1;
int nctemp1960 = (ScanIndentsave ==nctemp1963);
if(nctemp1960)
{
ScanIndentsave =ScanIndent;
ScanIndentinit =ScanIndent;
int nctemp1975=0;
ScanStack->a[nctemp1975] =ScanIndentinit;
}
int nctemp1978 = (ScanIndent > ScanIndentsave);
if(nctemp1978)
{
ScanIndentsave =ScanIndent;
int nctemp1987= ScanIndent;
int nctemp1989=ScanPush(nctemp1987);
return 600;
}
else{
int nctemp1991 = (ScanIndent < ScanIndentsave);
if(nctemp1991)
{
int nctemp1999=ScanPop();
level =nctemp1999;
ScanIndentsave =level;
return 601;
}
else{
int nctemp2009=ScanLex();
c =nctemp2009;
int nctemp2010 = (c ==32);
if(nctemp2010)
{
int nctemp2018=ScanLex();
c =nctemp2018;
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
int nctemp2025= -1;
ScanLinesave =nctemp2025;
ScanLine =lineno;
return 0;
}
int ScanGetword (nctempchar1 *ttext)
{
int nctemp2032= ScanFp;
nctempchar1* nctemp2034= ttext;
int nctemp2037=LibeGetw(nctemp2032,nctemp2034);
return nctemp2037;
}
}
