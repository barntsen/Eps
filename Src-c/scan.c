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
struct MainArg {nctempchar1 *arg;
};
typedef struct nctempMainArg1 {int d[1]; struct MainArg *a; } nctempMainArg1;
struct nctempMainArg2 {int d[2]; struct MainArg *a; } ;
struct nctempMainArg3 {int d[3]; struct MainArg *a; } ;
struct nctempMainArg4 {int d[4]; struct MainArg *a; } ;
int LibeErrinit ();
int LibeGeterrno ();
int LibeClearerr ();
nctempchar1 * LibeGeterrstr ();
nctempchar1 * LibeGetenv (nctempchar1 *name);
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
static int ScanLine;
static int ScanLinesave;
static int ScanFp;
static nctempchar1 *ScanFile;
static nctempint1 *ScanStack;
static int ScanSp;
static int ScanContline;
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
nctempchar1* nctemp57= infile;
struct nctempchar1 *nctemp62;
static struct nctempchar1 nctemp63 = {{ 2}, (char*)"r\0"};
nctemp62=&nctemp63;
nctempchar1* nctemp60= nctemp62;
int nctemp64=LibeOpen(nctemp57,nctemp60);
ScanFp =nctemp64;
int nctemp65 = (ScanFp ==0);
if(nctemp65)
{
int nctemp70= 4;
struct nctempchar1 *nctemp74;
static struct nctempchar1 nctemp75 = {{ 26}, (char*)"Can not open input file: \0"};
nctemp74=&nctemp75;
nctempchar1* nctemp72= nctemp74;
int nctemp76=LibePuts(nctemp70,nctemp72);
int nctemp78= 4;
nctempchar1* nctemp80= infile;
int nctemp83=LibePuts(nctemp78,nctemp80);
int nctemp85= 4;
struct nctempchar1 *nctemp89;
static struct nctempchar1 nctemp90 = {{ 3}, (char*)"\n\0"};
nctemp89=&nctemp90;
nctempchar1* nctemp87= nctemp89;
int nctemp91=LibePuts(nctemp85,nctemp87);
int nctemp93= 4;
int nctemp95=LibeFlush(nctemp93);
return 0;
}
nctempchar1* nctemp102= infile;
nctempchar1* nctemp105=LibeStrsave(nctemp102);
ScanFile=nctemp105;
ScanIndentsave =  -1;
ScanIndent = 0;
int nctemp112=258;
nctempint1 *nctemp111;
nctemp111=(nctempint1*)RunMalloc(sizeof(nctempint1));
nctemp111->d[0]=258;
nctemp111->a=(int *)RunMalloc(sizeof(int)*nctemp112);
ScanStack=nctemp111;
ScanSp = 0;
ScanStack->a[0] = 0;
return 1;
}
int ScanGetch ()
{
int nctemp117= ScanFp;
int nctemp119=LibeGetc(nctemp117);
return nctemp119;
}
int ScanIncline ()
{
ScanLinesave = ScanLine;
ScanLine = (ScanLine + 1);
return 1;
}
int ScanUngetch ()
{
int nctemp122= ScanFp;
int nctemp124=LibeUngetc(nctemp122);
return nctemp124;
}
int ScanBlank ()
{
int c;
int indent;
indent = 0;
int nctemp135=ScanGetch();
c =nctemp135;
int nctemp128 = (c ==32);
int nctemp138 = (c ==9);
int nctemp125 = (nctemp128 || nctemp138);
int nctemp142=nctemp125;
while(nctemp142)
{{
indent = (indent + 1);
}
int nctemp153=ScanGetch();
c =nctemp153;
int nctemp146 = (c ==32);
int nctemp156 = (c ==9);
int nctemp143 = (nctemp146 || nctemp156);
nctemp142=nctemp143;}int nctemp160 = (c ==(-1));
if(nctemp160)
{
indent = ScanIndentinit;
return indent;
}
int nctemp165 = (c =='#');
if(nctemp165)
{
indent =  -2;
int nctemp172=ScanGetch();
int nctemp169 = (nctemp172 !=10);
int nctemp174=nctemp169;
while(nctemp174)
{{
indent =  -2;
}
int nctemp178=ScanGetch();
int nctemp175 = (nctemp178 !=10);
nctemp174=nctemp175;}int nctemp181=ScanIncline();
return indent;
}
else{
int nctemp183 = (c ==10);
if(nctemp183)
{
indent =  -1;
int nctemp188=ScanIncline();
return indent;
}
else{
int nctemp191=ScanUngetch();
return indent;
}
}
}
int ScanWhite ()
{
int c;
int d;
int nctemp203=ScanGetch();
c =nctemp203;
int nctemp196 = (c ==32);
int nctemp206 = (c ==9);
int nctemp193 = (nctemp196 || nctemp206);
int nctemp210=nctemp193;
while(nctemp210)
{{
d = 0;
d = (d + 0);
}
int nctemp221=ScanGetch();
c =nctemp221;
int nctemp214 = (c ==32);
int nctemp224 = (c ==9);
int nctemp211 = (nctemp214 || nctemp224);
nctemp210=nctemp211;}int nctemp229=ScanUngetch();
return 1;
}
int ScanComment ()
{
int incomment;
int c;
incomment = 1;
int nctemp231 = (incomment ==1);
int nctemp235=nctemp231;
while(nctemp235)
{{
int nctemp240=ScanGetch();
c =nctemp240;
int nctemp241 = (c ==10);
if(nctemp241)
{
int nctemp246=ScanIncline();
}
int nctemp247 = (c =='*');
if(nctemp247)
{
int nctemp255=ScanGetch();
c =nctemp255;
int nctemp256 = (c ==10);
if(nctemp256)
{
int nctemp261=ScanIncline();
}
int nctemp262 = (c =='/');
if(nctemp262)
{
incomment = 0;
}
}
int nctemp266 = (c ==(-1));
if(nctemp266)
{
struct nctempchar1 *nctemp273;
static struct nctempchar1 nctemp274 = {{ 24}, (char*)"Closing comment missing\0"};
nctemp273=&nctemp274;
nctempchar1* nctemp271= nctemp273;
int nctemp275=ScanError(nctemp271);
}
}
int nctemp276 = (incomment ==1);
nctemp235=nctemp276;}return 1;
}
int ScanLcomment ()
{
int incomment;
int c;
incomment = 1;
int nctemp281 = (incomment ==1);
int nctemp285=nctemp281;
while(nctemp285)
{{
int nctemp290=ScanGetch();
c =nctemp290;
int nctemp291 = (c ==10);
if(nctemp291)
{
incomment = 0;
}
}
int nctemp295 = (incomment ==1);
nctemp285=nctemp295;}int nctemp300=ScanUngetch();
return 1;
}
int ScanFtail (int p)
{
int c;
int nctemp308=ScanGetch();
c =nctemp308;
int nctemp303= c;
int nctemp309=LibeIsdigit(nctemp303);
int nctemp310=nctemp309;
while(nctemp310)
{{
p = (p + 1);
int nctemp315=ScanText->d[0];int nctemp311 = (p >= nctemp315);
if(nctemp311)
{
struct nctempchar1 *nctemp322;
static struct nctempchar1 nctemp323 = {{ 18}, (char*)"Digit is too long\0"};
nctemp322=&nctemp323;
nctempchar1* nctemp320= nctemp322;
int nctemp324=ScanError(nctemp320);
}
int nctemp328=p;
char nctemp331=(char)(c);
ScanText->a[nctemp328] =nctemp331;
}
int nctemp340=ScanGetch();
c =nctemp340;
int nctemp335= c;
int nctemp341=LibeIsdigit(nctemp335);
nctemp310=nctemp341;}int nctemp345 = (c =='e');
int nctemp350 = (c =='E');
int nctemp342 = (nctemp345 || nctemp350);
if(nctemp342)
{
p = (p + 1);
int nctemp358=ScanText->d[0];int nctemp354 = (p >= nctemp358);
if(nctemp354)
{
struct nctempchar1 *nctemp365;
static struct nctempchar1 nctemp366 = {{ 18}, (char*)"Digit is too long\0"};
nctemp365=&nctemp366;
nctempchar1* nctemp363= nctemp365;
int nctemp367=ScanError(nctemp363);
}
int nctemp371=p;
char nctemp374=(char)(c);
ScanText->a[nctemp371] =nctemp374;
int nctemp381=ScanGetch();
c =nctemp381;
int nctemp385 = (c ==43);
int nctemp390 = (c ==45);
int nctemp382 = (nctemp385 || nctemp390);
if(nctemp382)
{
p = (p + 1);
int nctemp398=ScanText->d[0];int nctemp394 = (p >= nctemp398);
if(nctemp394)
{
struct nctempchar1 *nctemp405;
static struct nctempchar1 nctemp406 = {{ 18}, (char*)"Digit is too long\0"};
nctemp405=&nctemp406;
nctempchar1* nctemp403= nctemp405;
int nctemp407=ScanError(nctemp403);
}
int nctemp411=p;
char nctemp414=(char)(c);
ScanText->a[nctemp411] =nctemp414;
int nctemp423=ScanGetch();
c =nctemp423;
int nctemp418= c;
int nctemp424=LibeIsdigit(nctemp418);
int nctemp425=nctemp424;
while(nctemp425)
{{
p = (p + 1);
int nctemp430=ScanText->d[0];int nctemp426 = (p >= nctemp430);
if(nctemp426)
{
struct nctempchar1 *nctemp437;
static struct nctempchar1 nctemp438 = {{ 18}, (char*)"Digit is too long\0"};
nctemp437=&nctemp438;
nctempchar1* nctemp435= nctemp437;
int nctemp439=ScanError(nctemp435);
}
int nctemp443=p;
char nctemp446=(char)(c);
ScanText->a[nctemp443] =nctemp446;
}
int nctemp455=ScanGetch();
c =nctemp455;
int nctemp450= c;
int nctemp456=LibeIsdigit(nctemp450);
nctemp425=nctemp456;}int nctemp458=ScanUngetch();
int nctemp467 = p + 1;
int nctemp462=nctemp467;
char nctemp469=(char)(0);
ScanText->a[nctemp462] =nctemp469;
return p;
}
else{
struct nctempchar1 *nctemp476;
static struct nctempchar1 nctemp477 = {{ 14}, (char*)"Unknown token\0"};
nctemp476=&nctemp477;
nctempchar1* nctemp474= nctemp476;
int nctemp478=ScanError(nctemp474);
}
return 0;
}
else{
int nctemp481=ScanUngetch();
int nctemp490 = p + 1;
int nctemp485=nctemp490;
char nctemp492=(char)(0);
ScanText->a[nctemp485] =nctemp492;
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
int nctemp497=ScanWhite();
int nctemp502=ScanGetch();
c =nctemp502;
p = 0;
int nctemp506=p;
char nctemp509=(char)(c);
ScanText->a[nctemp506] =nctemp509;
comments = 1;
int nctemp512 = (comments ==1);
int nctemp516=nctemp512;
while(nctemp516)
{{
int nctemp517 = (c =='#');
if(nctemp517)
{
int nctemp522=ScanLcomment();
int nctemp527=ScanGetch();
c =nctemp527;
int nctemp531=p;
char nctemp534=(char)(c);
ScanText->a[nctemp531] =nctemp534;
}
else{
comments = 0;
}
}
int nctemp537 = (comments ==1);
nctemp516=nctemp537;}int nctemp541 = (c ==(-1));
if(nctemp541)
{
rval = 19;
return rval;
}
int nctemp546 = (c ==43);
if(nctemp546)
{
rval = 43;
}
else{
int nctemp550 = (c ==42);
if(nctemp550)
{
rval = 42;
}
else{
int nctemp554 = (c ==47);
if(nctemp554)
{
rval = 47;
}
else{
int nctemp558 = (c ==92);
if(nctemp558)
{
rval = 32;
int nctemp563=ScanGetch();
ScanContline = (ScanContline + 1);
}
else{
int nctemp564 = (c ==40);
if(nctemp564)
{
rval = 40;
}
else{
int nctemp568 = (c ==41);
if(nctemp568)
{
rval = 41;
}
else{
int nctemp572 = (c ==93);
if(nctemp572)
{
rval = 93;
}
else{
int nctemp576 = (c ==91);
if(nctemp576)
{
rval = 91;
}
else{
int nctemp580 = (c ==123);
if(nctemp580)
{
rval = 123;
}
else{
int nctemp584 = (c ==125);
if(nctemp584)
{
rval = 125;
}
else{
int nctemp588 = (c ==58);
if(nctemp588)
{
rval = 58;
}
else{
int nctemp592 = (c ==59);
if(nctemp592)
{
rval = 59;
}
else{
int nctemp596 = (c ==44);
if(nctemp596)
{
rval = 44;
}
else{
int nctemp600 = (c ==46);
if(nctemp600)
{
rval = 46;
}
else{
int nctemp604 = (c ==10);
if(nctemp604)
{
rval = 10;
int nctemp609=ScanIncline();
}
else{
int nctemp610 = (c ==60);
if(nctemp610)
{
int nctemp621=ScanGetch();
c =nctemp621;
int nctemp614 = (c ==61);
if(nctemp614)
{
rval = 20;
p = (p + 1);
int nctemp626=p;
char nctemp629=(char)(c);
ScanText->a[nctemp626] =nctemp629;
}
else{
int nctemp633=ScanUngetch();
rval = 60;
}
}
else{
int nctemp634 = (c ==62);
if(nctemp634)
{
int nctemp645=ScanGetch();
c =nctemp645;
int nctemp638 = (c ==61);
if(nctemp638)
{
rval = 21;
p = (p + 1);
int nctemp650=p;
char nctemp653=(char)(c);
ScanText->a[nctemp650] =nctemp653;
}
else{
int nctemp657=ScanUngetch();
rval = 62;
}
}
else{
int nctemp658 = (c ==45);
if(nctemp658)
{
int nctemp669=ScanGetch();
c =nctemp669;
int nctemp662 = (c ==62);
if(nctemp662)
{
rval = 2;
p = (p + 1);
int nctemp674=p;
char nctemp677=(char)(c);
ScanText->a[nctemp674] =nctemp677;
}
else{
int nctemp681=ScanUngetch();
rval = 45;
}
}
else{
int nctemp682 = (c ==124);
if(nctemp682)
{
int nctemp693=ScanGetch();
c =nctemp693;
int nctemp686 = (c ==124);
if(nctemp686)
{
rval = 5;
p = (p + 1);
int nctemp698=p;
char nctemp701=(char)(c);
ScanText->a[nctemp698] =nctemp701;
}
else{
struct nctempchar1 *nctemp707;
static struct nctempchar1 nctemp708 = {{ 18}, (char*)"Illegal character\0"};
nctemp707=&nctemp708;
nctempchar1* nctemp705= nctemp707;
int nctemp709=ScanError(nctemp705);
}
}
else{
int nctemp710 = (c ==38);
if(nctemp710)
{
int nctemp721=ScanGetch();
c =nctemp721;
int nctemp714 = (c ==38);
if(nctemp714)
{
rval = 6;
p = (p + 1);
int nctemp726=p;
char nctemp729=(char)(c);
ScanText->a[nctemp726] =nctemp729;
}
else{
struct nctempchar1 *nctemp735;
static struct nctempchar1 nctemp736 = {{ 18}, (char*)"Illegal character\0"};
nctemp735=&nctemp736;
nctempchar1* nctemp733= nctemp735;
int nctemp737=ScanError(nctemp733);
}
}
else{
int nctemp738 = (c ==33);
if(nctemp738)
{
int nctemp749=ScanGetch();
c =nctemp749;
int nctemp742 = (c ==61);
if(nctemp742)
{
rval = 4;
p = (p + 1);
int nctemp754=p;
char nctemp757=(char)(c);
ScanText->a[nctemp754] =nctemp757;
}
else{
struct nctempchar1 *nctemp763;
static struct nctempchar1 nctemp764 = {{ 18}, (char*)"Illegal character\0"};
nctemp763=&nctemp764;
nctempchar1* nctemp761= nctemp763;
int nctemp765=ScanError(nctemp761);
}
}
else{
int nctemp766 = (c ==61);
if(nctemp766)
{
int nctemp777=ScanGetch();
c =nctemp777;
int nctemp770 = (c ==61);
if(nctemp770)
{
rval = 3;
p = (p + 1);
int nctemp782=p;
char nctemp785=(char)(c);
ScanText->a[nctemp782] =nctemp785;
}
else{
int nctemp789=ScanUngetch();
rval = 61;
}
}
else{
int nctemp790 = (c ==34);
if(nctemp790)
{
int nctemp797=p;
char nctemp800=(char)(34);
ScanText->a[nctemp797] =nctemp800;
p = (p + 1);
string = 1;
int nctemp803 = (string ==1);
int nctemp807=nctemp803;
while(nctemp807)
{{
int nctemp815=ScanGetch();
c =nctemp815;
int nctemp808 = (c !=34);
if(nctemp808)
{
string = 1;
}
else{
int nctemp828 = p - 1;
int nctemp823=nctemp828;
int nctemp820=(int)(ScanText->a[nctemp823]);
int nctemp817 = (nctemp820 ==92);
if(nctemp817)
{
string = 1;
}
else{
string = 0;
}
}
int nctemp833=p;
char nctemp836=(char)(c);
ScanText->a[nctemp833] =nctemp836;
p = (p + 1);
int nctemp846=ScanText->d[0];int nctemp851 = nctemp846 - 1;
int nctemp839 = (p >= nctemp851);
if(nctemp839)
{
struct nctempchar1 *nctemp855;
static struct nctempchar1 nctemp856 = {{ 19}, (char*)"String is too long\0"};
nctemp855=&nctemp856;
nctempchar1* nctemp853= nctemp855;
int nctemp857=ScanError(nctemp853);
}
}
int nctemp858 = (string ==1);
nctemp807=nctemp858;}int nctemp865=p;
char nctemp868=(char)(0);
ScanText->a[nctemp865] =nctemp868;
rval = 18;
}
else{
int nctemp871 = (c ==39);
if(nctemp871)
{
int nctemp878=p;
char nctemp881=(char)(39);
ScanText->a[nctemp878] =nctemp881;
p = (p + 1);
int nctemp887=p;
int nctemp893=ScanGetch();
char nctemp890=(char)(nctemp893);
ScanText->a[nctemp887] =nctemp890;
int nctemp898=ScanGetch();
c =nctemp898;
int nctemp899 = (c !=39);
if(nctemp899)
{
struct nctempchar1 *nctemp906;
static struct nctempchar1 nctemp907 = {{ 31}, (char*)"Character constant is too long\0"};
nctemp906=&nctemp907;
nctempchar1* nctemp904= nctemp906;
int nctemp908=ScanError(nctemp904);
}
else{
p = (p + 1);
int nctemp912=p;
char nctemp915=(char)(c);
ScanText->a[nctemp912] =nctemp915;
}
p = (p + 1);
int nctemp921=p;
char nctemp924=(char)(0);
ScanText->a[nctemp921] =nctemp924;
rval = 17;
}
else{
int nctemp928= c;
int nctemp930=LibeIsdigit(nctemp928);
if(nctemp930)
{
int nctemp937=ScanGetch();
c =nctemp937;
int nctemp932= c;
int nctemp938=LibeIsdigit(nctemp932);
int nctemp939=nctemp938;
while(nctemp939)
{{
p = (p + 1);
int nctemp943=p;
char nctemp946=(char)(c);
ScanText->a[nctemp943] =nctemp946;
int nctemp953=ScanText->d[0];int nctemp949 = (p >= nctemp953);
if(nctemp949)
{
struct nctempchar1 *nctemp960;
static struct nctempchar1 nctemp961 = {{ 18}, (char*)"Digit is too long\0"};
nctemp960=&nctemp961;
nctempchar1* nctemp958= nctemp960;
int nctemp962=ScanError(nctemp958);
}
}
int nctemp969=ScanGetch();
c =nctemp969;
int nctemp964= c;
int nctemp970=LibeIsdigit(nctemp964);
nctemp939=nctemp970;}int nctemp971 = (c ==46);
if(nctemp971)
{
p = (p + 1);
int nctemp979=ScanText->d[0];int nctemp975 = (p >= nctemp979);
if(nctemp975)
{
struct nctempchar1 *nctemp986;
static struct nctempchar1 nctemp987 = {{ 18}, (char*)"Digit is too long\0"};
nctemp986=&nctemp987;
nctempchar1* nctemp984= nctemp986;
int nctemp988=ScanError(nctemp984);
}
int nctemp992=p;
char nctemp995=(char)(c);
ScanText->a[nctemp992] =nctemp995;
int nctemp1002= p;
int nctemp1004=ScanFtail(nctemp1002);
p =nctemp1004;
rval = 24;
}
else{
int nctemp1006=ScanUngetch();
int nctemp1015 = p + 1;
int nctemp1010=nctemp1015;
char nctemp1017=(char)(0);
ScanText->a[nctemp1010] =nctemp1017;
rval = 17;
}
}
else{
int nctemp1021= c;
int nctemp1023=LibeIsalnum(nctemp1021);
if(nctemp1023)
{
int nctemp1030=ScanGetch();
c =nctemp1030;
int nctemp1025= c;
int nctemp1031=LibeIsalnum(nctemp1025);
int nctemp1032=nctemp1031;
while(nctemp1032)
{{
p = (p + 1);
int nctemp1036=p;
char nctemp1039=(char)(c);
ScanText->a[nctemp1036] =nctemp1039;
int nctemp1046=ScanText->d[0];int nctemp1042 = (p >= nctemp1046);
if(nctemp1042)
{
struct nctempchar1 *nctemp1053;
static struct nctempchar1 nctemp1054 = {{ 23}, (char*)"Identifier is too long\0"};
nctemp1053=&nctemp1054;
nctempchar1* nctemp1051= nctemp1053;
int nctemp1055=ScanError(nctemp1051);
}
}
int nctemp1062=ScanGetch();
c =nctemp1062;
int nctemp1057= c;
int nctemp1063=LibeIsalnum(nctemp1057);
nctemp1032=nctemp1063;}int nctemp1065=ScanUngetch();
int nctemp1074 = p + 1;
int nctemp1069=nctemp1074;
char nctemp1076=(char)(0);
ScanText->a[nctemp1069] =nctemp1076;
nctempchar1* nctemp1080= ScanText;
struct nctempchar1 *nctemp1085;
static struct nctempchar1 nctemp1086 = {{ 4}, (char*)"int\0"};
nctemp1085=&nctemp1086;
nctempchar1* nctemp1083= nctemp1085;
int nctemp1087=LibeStrcmp(nctemp1080,nctemp1083);
if(nctemp1087)
{
rval = 7;
}
else{
nctempchar1* nctemp1089= ScanText;
struct nctempchar1 *nctemp1094;
static struct nctempchar1 nctemp1095 = {{ 5}, (char*)"char\0"};
nctemp1094=&nctemp1095;
nctempchar1* nctemp1092= nctemp1094;
int nctemp1096=LibeStrcmp(nctemp1089,nctemp1092);
if(nctemp1096)
{
rval = 8;
}
else{
nctempchar1* nctemp1098= ScanText;
struct nctempchar1 *nctemp1103;
static struct nctempchar1 nctemp1104 = {{ 6}, (char*)"float\0"};
nctemp1103=&nctemp1104;
nctempchar1* nctemp1101= nctemp1103;
int nctemp1105=LibeStrcmp(nctemp1098,nctemp1101);
if(nctemp1105)
{
rval = 9;
}
else{
nctempchar1* nctemp1107= ScanText;
struct nctempchar1 *nctemp1112;
static struct nctempchar1 nctemp1113 = {{ 6}, (char*)"const\0"};
nctemp1112=&nctemp1113;
nctempchar1* nctemp1110= nctemp1112;
int nctemp1114=LibeStrcmp(nctemp1107,nctemp1110);
if(nctemp1114)
{
rval = 431;
}
else{
nctempchar1* nctemp1116= ScanText;
struct nctempchar1 *nctemp1121;
static struct nctempchar1 nctemp1122 = {{ 8}, (char*)"complex\0"};
nctemp1121=&nctemp1122;
nctempchar1* nctemp1119= nctemp1121;
int nctemp1123=LibeStrcmp(nctemp1116,nctemp1119);
if(nctemp1123)
{
rval = 510;
}
else{
nctempchar1* nctemp1125= ScanText;
struct nctempchar1 *nctemp1130;
static struct nctempchar1 nctemp1131 = {{ 7}, (char*)"struct\0"};
nctemp1130=&nctemp1131;
nctempchar1* nctemp1128= nctemp1130;
int nctemp1132=LibeStrcmp(nctemp1125,nctemp1128);
if(nctemp1132)
{
rval = 11;
}
else{
nctempchar1* nctemp1134= ScanText;
struct nctempchar1 *nctemp1139;
static struct nctempchar1 nctemp1140 = {{ 6}, (char*)"class\0"};
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
static struct nctempchar1 nctemp1149 = {{ 7}, (char*)"import\0"};
nctemp1148=&nctemp1149;
nctempchar1* nctemp1146= nctemp1148;
int nctemp1150=LibeStrcmp(nctemp1143,nctemp1146);
if(nctemp1150)
{
rval = 433;
}
else{
nctempchar1* nctemp1152= ScanText;
struct nctempchar1 *nctemp1157;
static struct nctempchar1 nctemp1158 = {{ 6}, (char*)"while\0"};
nctemp1157=&nctemp1158;
nctempchar1* nctemp1155= nctemp1157;
int nctemp1159=LibeStrcmp(nctemp1152,nctemp1155);
if(nctemp1159)
{
rval = 12;
}
else{
nctempchar1* nctemp1161= ScanText;
struct nctempchar1 *nctemp1166;
static struct nctempchar1 nctemp1167 = {{ 7}, (char*)"return\0"};
nctemp1166=&nctemp1167;
nctempchar1* nctemp1164= nctemp1166;
int nctemp1168=LibeStrcmp(nctemp1161,nctemp1164);
if(nctemp1168)
{
rval = 30;
}
else{
nctempchar1* nctemp1170= ScanText;
struct nctempchar1 *nctemp1175;
static struct nctempchar1 nctemp1176 = {{ 4}, (char*)"def\0"};
nctemp1175=&nctemp1176;
nctempchar1* nctemp1173= nctemp1175;
int nctemp1177=LibeStrcmp(nctemp1170,nctemp1173);
if(nctemp1177)
{
rval = 1100;
}
else{
nctempchar1* nctemp1179= ScanText;
struct nctempchar1 *nctemp1184;
static struct nctempchar1 nctemp1185 = {{ 3}, (char*)"if\0"};
nctemp1184=&nctemp1185;
nctempchar1* nctemp1182= nctemp1184;
int nctemp1186=LibeStrcmp(nctemp1179,nctemp1182);
if(nctemp1186)
{
rval = 14;
}
else{
nctempchar1* nctemp1188= ScanText;
struct nctempchar1 *nctemp1193;
static struct nctempchar1 nctemp1194 = {{ 5}, (char*)"else\0"};
nctemp1193=&nctemp1194;
nctempchar1* nctemp1191= nctemp1193;
int nctemp1195=LibeStrcmp(nctemp1188,nctemp1191);
if(nctemp1195)
{
rval = 15;
}
else{
nctempchar1* nctemp1197= ScanText;
struct nctempchar1 *nctemp1202;
static struct nctempchar1 nctemp1203 = {{ 7}, (char*)"sizeof\0"};
nctemp1202=&nctemp1203;
nctempchar1* nctemp1200= nctemp1202;
int nctemp1204=LibeStrcmp(nctemp1197,nctemp1200);
if(nctemp1204)
{
rval = 22;
}
else{
nctempchar1* nctemp1206= ScanText;
struct nctempchar1 *nctemp1211;
static struct nctempchar1 nctemp1212 = {{ 5}, (char*)"cast\0"};
nctemp1211=&nctemp1212;
nctempchar1* nctemp1209= nctemp1211;
int nctemp1213=LibeStrcmp(nctemp1206,nctemp1209);
if(nctemp1213)
{
rval = 23;
}
else{
nctempchar1* nctemp1215= ScanText;
struct nctempchar1 *nctemp1220;
static struct nctempchar1 nctemp1221 = {{ 4}, (char*)"new\0"};
nctemp1220=&nctemp1221;
nctempchar1* nctemp1218= nctemp1220;
int nctemp1222=LibeStrcmp(nctemp1215,nctemp1218);
if(nctemp1222)
{
rval = 26;
}
else{
nctempchar1* nctemp1224= ScanText;
struct nctempchar1 *nctemp1229;
static struct nctempchar1 nctemp1230 = {{ 7}, (char*)"delete\0"};
nctemp1229=&nctemp1230;
nctempchar1* nctemp1227= nctemp1229;
int nctemp1231=LibeStrcmp(nctemp1224,nctemp1227);
if(nctemp1231)
{
rval = 50;
}
else{
nctempchar1* nctemp1233= ScanText;
struct nctempchar1 *nctemp1238;
static struct nctempchar1 nctemp1239 = {{ 4}, (char*)"len\0"};
nctemp1238=&nctemp1239;
nctempchar1* nctemp1236= nctemp1238;
int nctemp1240=LibeStrcmp(nctemp1233,nctemp1236);
if(nctemp1240)
{
rval = 29;
}
else{
nctempchar1* nctemp1242= ScanText;
struct nctempchar1 *nctemp1247;
static struct nctempchar1 nctemp1248 = {{ 6}, (char*)"cmplx\0"};
nctemp1247=&nctemp1248;
nctempchar1* nctemp1245= nctemp1247;
int nctemp1249=LibeStrcmp(nctemp1242,nctemp1245);
if(nctemp1249)
{
rval = 25;
}
else{
nctempchar1* nctemp1251= ScanText;
struct nctempchar1 *nctemp1256;
static struct nctempchar1 nctemp1257 = {{ 3}, (char*)"re\0"};
nctemp1256=&nctemp1257;
nctempchar1* nctemp1254= nctemp1256;
int nctemp1258=LibeStrcmp(nctemp1251,nctemp1254);
if(nctemp1258)
{
rval = 28;
}
else{
nctempchar1* nctemp1260= ScanText;
struct nctempchar1 *nctemp1265;
static struct nctempchar1 nctemp1266 = {{ 3}, (char*)"im\0"};
nctemp1265=&nctemp1266;
nctempchar1* nctemp1263= nctemp1265;
int nctemp1267=LibeStrcmp(nctemp1260,nctemp1263);
if(nctemp1267)
{
rval = 27;
}
else{
nctempchar1* nctemp1269= ScanText;
struct nctempchar1 *nctemp1274;
static struct nctempchar1 nctemp1275 = {{ 4}, (char*)"for\0"};
nctemp1274=&nctemp1275;
nctempchar1* nctemp1272= nctemp1274;
int nctemp1276=LibeStrcmp(nctemp1269,nctemp1272);
if(nctemp1276)
{
rval = 26;
}
else{
nctempchar1* nctemp1278= ScanText;
struct nctempchar1 *nctemp1283;
static struct nctempchar1 nctemp1284 = {{ 9}, (char*)"parallel\0"};
nctemp1283=&nctemp1284;
nctempchar1* nctemp1281= nctemp1283;
int nctemp1285=LibeStrcmp(nctemp1278,nctemp1281);
if(nctemp1285)
{
rval = 31;
}
else{
nctempchar1* nctemp1287= ScanText;
struct nctempchar1 *nctemp1292;
static struct nctempchar1 nctemp1293 = {{ 5}, (char*)"pass\0"};
nctemp1292=&nctemp1293;
nctempchar1* nctemp1290= nctemp1292;
int nctemp1294=LibeStrcmp(nctemp1287,nctemp1290);
if(nctemp1294)
{
rval = 701;
}
else{
nctempchar1* nctemp1296= ScanText;
struct nctempchar1 *nctemp1301;
static struct nctempchar1 nctemp1302 = {{ 3}, (char*)"in\0"};
nctemp1301=&nctemp1302;
nctempchar1* nctemp1299= nctemp1301;
int nctemp1303=LibeStrcmp(nctemp1296,nctemp1299);
if(nctemp1303)
{
rval = 702;
}
else{
nctempchar1* nctemp1305= ScanText;
struct nctempchar1 *nctemp1310;
static struct nctempchar1 nctemp1311 = {{ 6}, (char*)"range\0"};
nctemp1310=&nctemp1311;
nctempchar1* nctemp1308= nctemp1310;
int nctemp1312=LibeStrcmp(nctemp1305,nctemp1308);
if(nctemp1312)
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
struct nctempchar1 *nctemp1316;
static struct nctempchar1 nctemp1317 = {{ 14}, (char*)"Invalid token\0"};
nctemp1316=&nctemp1317;
nctempchar1* nctemp1314= nctemp1316;
int nctemp1318=ScanError(nctemp1314);
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
int nctemp1328 = p + 1;
int nctemp1323=nctemp1328;
char nctemp1330=(char)(0);
ScanText->a[nctemp1323] =nctemp1330;
return rval;
}
nctempchar1 * ScanSetfile (nctempchar1 *fname)
{
nctempchar1 *nctemp1335 =ScanFile;
int nctemp1334 =(nctemp1335!=0);
if(nctemp1334)
{
RunFree(ScanFile->a);
RunFree(ScanFile);
}
nctempchar1* nctemp1347= fname;
nctempchar1* nctemp1350=LibeStrsave(nctemp1347);
ScanFile=nctemp1350;
return ScanFile;
}
int ScanGetok ()
{
int c;
int indent;
int level;
int nctemp1353 = (ScanLine > ScanLinesave);
if(nctemp1353)
{
indent =  -1;
int nctemp1363= -1;
int nctemp1360 = (indent ==nctemp1363);
int nctemp1368= -2;
int nctemp1365 = (indent ==nctemp1368);
int nctemp1357 = (nctemp1360 || nctemp1365);
int nctemp1369=nctemp1357;
while(nctemp1369)
{{
int nctemp1374=ScanBlank();
indent =nctemp1374;
}
int nctemp1381= -1;
int nctemp1378 = (indent ==nctemp1381);
int nctemp1386= -2;
int nctemp1383 = (indent ==nctemp1386);
int nctemp1375 = (nctemp1378 || nctemp1383);
nctemp1369=nctemp1375;}ScanIndent = indent;
ScanLinesave = ScanLine;
}
int nctemp1390= -1;
int nctemp1387 = (ScanIndentsave ==nctemp1390);
if(nctemp1387)
{
ScanIndentsave = ScanIndent;
ScanIndentinit = ScanIndent;
ScanStack->a[0] = ScanIndentinit;
}
int nctemp1391 = (ScanIndent > ScanIndentsave);
if(nctemp1391)
{
ScanIndentsave = ScanIndent;
int nctemp1396= ScanIndent;
int nctemp1398=ScanPush(nctemp1396);
return 600;
}
else{
int nctemp1400 = (ScanIndent < ScanIndentsave);
if(nctemp1400)
{
int nctemp1408=ScanPop();
level =nctemp1408;
ScanIndentsave = level;
return 601;
}
else{
int nctemp1414=ScanLex();
c =nctemp1414;
int nctemp1415 = (c ==32);
if(nctemp1415)
{
int nctemp1423=ScanLex();
c =nctemp1423;
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
int nctemp1429= ScanFp;
nctempchar1* nctemp1431= ttext;
int nctemp1434=LibeGetw(nctemp1429,nctemp1431);
return nctemp1434;
}
