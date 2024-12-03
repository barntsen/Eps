//  Translated by epsc  version today  
#include <stddef.h>
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
nctempchar1 *ScanText;
nctempchar1 *ScanBuffer;
int ScanLine;
int ScanLinesave;
int ScanFp;
int ScanInfile;
nctempchar1 *ScanInfilename;
nctempchar1 *ScanFile;
nctempchar1 * ScanGetfile ()
{
return ScanFile;
}
int ScanGetline ()
{
return ScanLine;
}
int ScanError (nctempchar1 *s)
{
nctempchar1* nctemp7=ScanGetfile();
nctempchar1* nctemp5= nctemp7;
int nctemp10=ScanGetline();
int nctemp8= nctemp10;
nctempchar1* nctemp11= s;
int nctemp14=ErrError(nctemp5,nctemp8,nctemp11);
}
int ScanInit (nctempchar1 *infile)
{
int nctemp21=4096;
nctempchar1 *nctemp20;
nctemp20=(nctempchar1*)RunMalloc(sizeof(nctempchar1));
nctemp20->d[0]=4096;
nctemp20->a=(char *)RunMalloc(sizeof(char)*nctemp21);
ScanText=nctemp20;
int nctemp30=4096;
nctempchar1 *nctemp29;
nctemp29=(nctempchar1*)RunMalloc(sizeof(nctempchar1));
nctemp29->d[0]=4096;
nctemp29->a=(char *)RunMalloc(sizeof(char)*nctemp30);
ScanBuffer=nctemp29;
nctempchar1* nctemp37= infile;
struct nctempchar1 *nctemp42;
static struct nctempchar1 nctemp43 = {{ 2}, (char*)"r\0"};
nctemp42=&nctemp43;
nctempchar1* nctemp40= nctemp42;
int nctemp44=LibeOpen(nctemp37,nctemp40);
ScanInfile =nctemp44;
int nctemp45 = (ScanInfile ==0);
if(nctemp45)
{
int nctemp50= 4;
struct nctempchar1 *nctemp54;
static struct nctempchar1 nctemp55 = {{ 26}, (char*)"Can not open input file: \0"};
nctemp54=&nctemp55;
nctempchar1* nctemp52= nctemp54;
int nctemp56=LibePuts(nctemp50,nctemp52);
int nctemp58= 4;
nctempchar1* nctemp60= infile;
int nctemp63=LibePuts(nctemp58,nctemp60);
int nctemp65= 4;
struct nctempchar1 *nctemp69;
static struct nctempchar1 nctemp70 = {{ 3}, (char*)"\n\0"};
nctemp69=&nctemp70;
nctempchar1* nctemp67= nctemp69;
int nctemp71=LibePuts(nctemp65,nctemp67);
int nctemp73= 4;
int nctemp75=LibeFlush(nctemp73);
return 0;
}
ScanFp =ScanInfile;
nctempchar1* nctemp86= infile;
nctempchar1* nctemp89=LibeStrsave(nctemp86);
ScanFile=nctemp89;
nctempchar1* nctemp95= infile;
nctempchar1* nctemp98=LibeStrsave(nctemp95);
ScanInfilename=nctemp98;
return 1;
}
int ScanGetch ()
{
int nctemp101= ScanFp;
int nctemp103=LibeGetc(nctemp101);
return nctemp103;
}
int ScanIncline ()
{
int nctemp112 = ScanLine + 1;
ScanLine =nctemp112;
return 1;
}
int ScanUngetch ()
{
int nctemp115= ScanFp;
int nctemp117=LibeUngetc(nctemp115);
return nctemp117;
}
int ScanWhite ()
{
int c;
int nctemp131=ScanGetch();
c =nctemp131;
int nctemp124 = (c ==32);
int nctemp134 = (c ==9);
int nctemp121 = (nctemp124 || nctemp134);
int nctemp139 = (c ==10);
int nctemp118 = (nctemp121 || nctemp139);
int nctemp143=nctemp118;
while(nctemp143)
{{
int nctemp144 = (c ==10);
if(nctemp144)
{
int nctemp149=ScanIncline();
}
}
int nctemp163=ScanGetch();
c =nctemp163;
int nctemp156 = (c ==32);
int nctemp166 = (c ==9);
int nctemp153 = (nctemp156 || nctemp166);
int nctemp171 = (c ==10);
int nctemp150 = (nctemp153 || nctemp171);
nctemp143=nctemp150;}int nctemp176=ScanUngetch();
return 1;
}
int ScanComment ()
{
int incomment;
int c;
incomment =1;
int nctemp182 = (incomment ==1);
int nctemp186=nctemp182;
while(nctemp186)
{{
int nctemp191=ScanGetch();
c =nctemp191;
int nctemp192 = (c ==10);
if(nctemp192)
{
int nctemp197=ScanIncline();
}
int nctemp198 = (c =='*');
if(nctemp198)
{
int nctemp206=ScanGetch();
c =nctemp206;
int nctemp207 = (c ==10);
if(nctemp207)
{
int nctemp212=ScanIncline();
}
int nctemp213 = (c =='/');
if(nctemp213)
{
incomment =0;
}
}
int nctemp221 = (c ==(-1));
if(nctemp221)
{
struct nctempchar1 *nctemp228;
static struct nctempchar1 nctemp229 = {{ 24}, (char*)"Closing comment missing\0"};
nctemp228=&nctemp229;
nctempchar1* nctemp226= nctemp228;
int nctemp230=ScanError(nctemp226);
}
}
int nctemp231 = (incomment ==1);
nctemp186=nctemp231;}return 1;
}
int ScanLcomment ()
{
int incomment;
int c;
incomment =1;
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
incomment =0;
}
}
int nctemp260 = (incomment ==1);
nctemp244=nctemp260;}return 1;
}
int ScanFtail (int p)
{
int c;
int nctemp271=ScanGetch();
c =nctemp271;
int nctemp266= c;
int nctemp272=LibeIsdigit(nctemp266);
int nctemp273=nctemp272;
while(nctemp273)
{{
int nctemp282 = p + 1;
p =nctemp282;
int nctemp287=ScanText->d[0];int nctemp283 = (p >= nctemp287);
if(nctemp283)
{
struct nctempchar1 *nctemp294;
static struct nctempchar1 nctemp295 = {{ 18}, (char*)"Digit is too long\0"};
nctemp294=&nctemp295;
nctempchar1* nctemp292= nctemp294;
int nctemp296=ScanError(nctemp292);
}
int nctemp300=p;
char nctemp303=(char)(c);
ScanText->a[nctemp300] =nctemp303;
}
int nctemp312=ScanGetch();
c =nctemp312;
int nctemp307= c;
int nctemp313=LibeIsdigit(nctemp307);
nctemp273=nctemp313;}int nctemp317 = (c =='e');
int nctemp322 = (c =='E');
int nctemp314 = (nctemp317 || nctemp322);
if(nctemp314)
{
int nctemp334 = p + 1;
p =nctemp334;
int nctemp339=ScanText->d[0];int nctemp335 = (p >= nctemp339);
if(nctemp335)
{
struct nctempchar1 *nctemp346;
static struct nctempchar1 nctemp347 = {{ 18}, (char*)"Digit is too long\0"};
nctemp346=&nctemp347;
nctempchar1* nctemp344= nctemp346;
int nctemp348=ScanError(nctemp344);
}
int nctemp352=p;
char nctemp355=(char)(c);
ScanText->a[nctemp352] =nctemp355;
int nctemp362=ScanGetch();
c =nctemp362;
int nctemp366 = (c ==43);
int nctemp371 = (c ==45);
int nctemp363 = (nctemp366 || nctemp371);
if(nctemp363)
{
int nctemp383 = p + 1;
p =nctemp383;
int nctemp388=ScanText->d[0];int nctemp384 = (p >= nctemp388);
if(nctemp384)
{
struct nctempchar1 *nctemp395;
static struct nctempchar1 nctemp396 = {{ 18}, (char*)"Digit is too long\0"};
nctemp395=&nctemp396;
nctempchar1* nctemp393= nctemp395;
int nctemp397=ScanError(nctemp393);
}
int nctemp401=p;
char nctemp404=(char)(c);
ScanText->a[nctemp401] =nctemp404;
int nctemp413=ScanGetch();
c =nctemp413;
int nctemp408= c;
int nctemp414=LibeIsdigit(nctemp408);
int nctemp415=nctemp414;
while(nctemp415)
{{
int nctemp424 = p + 1;
p =nctemp424;
int nctemp429=ScanText->d[0];int nctemp425 = (p >= nctemp429);
if(nctemp425)
{
struct nctempchar1 *nctemp436;
static struct nctempchar1 nctemp437 = {{ 18}, (char*)"Digit is too long\0"};
nctemp436=&nctemp437;
nctempchar1* nctemp434= nctemp436;
int nctemp438=ScanError(nctemp434);
}
int nctemp442=p;
char nctemp445=(char)(c);
ScanText->a[nctemp442] =nctemp445;
}
int nctemp454=ScanGetch();
c =nctemp454;
int nctemp449= c;
int nctemp455=LibeIsdigit(nctemp449);
nctemp415=nctemp455;}int nctemp457=ScanUngetch();
int nctemp466 = p + 1;
int nctemp461=nctemp466;
char nctemp468=(char)(0);
ScanText->a[nctemp461] =nctemp468;
return p;
}
else{
struct nctempchar1 *nctemp475;
static struct nctempchar1 nctemp476 = {{ 14}, (char*)"Unknown token\0"};
nctemp475=&nctemp476;
nctempchar1* nctemp473= nctemp475;
int nctemp477=ScanError(nctemp473);
}
return 0;
}
else{
int nctemp480=ScanUngetch();
int nctemp489 = p + 1;
int nctemp484=nctemp489;
char nctemp491=(char)(0);
ScanText->a[nctemp484] =nctemp491;
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
int nctemp496=ScanWhite();
int nctemp501=ScanGetch();
c =nctemp501;
p =0;
int nctemp509=p;
char nctemp512=(char)(c);
ScanText->a[nctemp509] =nctemp512;
comments =1;
int nctemp519 = (comments ==1);
int nctemp523=nctemp519;
while(nctemp523)
{{
int nctemp524 = (c =='#');
if(nctemp524)
{
int nctemp529=ScanLcomment();
int nctemp531=ScanWhite();
int nctemp536=ScanGetch();
c =nctemp536;
int nctemp540=p;
char nctemp543=(char)(c);
ScanText->a[nctemp540] =nctemp543;
}
else{
comments =0;
}
}
int nctemp550 = (comments ==1);
nctemp523=nctemp550;}int nctemp554 = (c ==(-1));
if(nctemp554)
{
rval =19;
return rval;
}
int nctemp563 = (c ==43);
if(nctemp563)
{
rval =43;
}
else{
int nctemp571 = (c ==42);
if(nctemp571)
{
rval =42;
}
else{
int nctemp579 = (c ==47);
if(nctemp579)
{
rval =47;
}
else{
int nctemp587 = (c ==40);
if(nctemp587)
{
rval =40;
}
else{
int nctemp595 = (c ==41);
if(nctemp595)
{
rval =41;
}
else{
int nctemp603 = (c ==93);
if(nctemp603)
{
rval =93;
}
else{
int nctemp611 = (c ==91);
if(nctemp611)
{
rval =91;
}
else{
int nctemp619 = (c ==123);
if(nctemp619)
{
rval =123;
}
else{
int nctemp627 = (c ==125);
if(nctemp627)
{
rval =125;
}
else{
int nctemp635 = (c ==58);
if(nctemp635)
{
rval =58;
}
else{
int nctemp643 = (c ==59);
if(nctemp643)
{
rval =59;
}
else{
int nctemp651 = (c ==44);
if(nctemp651)
{
rval =44;
}
else{
int nctemp659 = (c ==46);
if(nctemp659)
{
rval =46;
}
else{
int nctemp667 = (c ==60);
if(nctemp667)
{
int nctemp678=ScanGetch();
c =nctemp678;
int nctemp671 = (c ==61);
if(nctemp671)
{
rval =20;
int nctemp692 = p + 1;
p =nctemp692;
int nctemp696=p;
char nctemp699=(char)(c);
ScanText->a[nctemp696] =nctemp699;
}
else{
int nctemp703=ScanUngetch();
rval =60;
}
}
else{
int nctemp708 = (c ==62);
if(nctemp708)
{
int nctemp719=ScanGetch();
c =nctemp719;
int nctemp712 = (c ==61);
if(nctemp712)
{
rval =21;
int nctemp733 = p + 1;
p =nctemp733;
int nctemp737=p;
char nctemp740=(char)(c);
ScanText->a[nctemp737] =nctemp740;
}
else{
int nctemp744=ScanUngetch();
rval =62;
}
}
else{
int nctemp749 = (c ==45);
if(nctemp749)
{
int nctemp760=ScanGetch();
c =nctemp760;
int nctemp753 = (c ==62);
if(nctemp753)
{
rval =2;
int nctemp774 = p + 1;
p =nctemp774;
int nctemp778=p;
char nctemp781=(char)(c);
ScanText->a[nctemp778] =nctemp781;
}
else{
int nctemp785=ScanUngetch();
rval =45;
}
}
else{
int nctemp790 = (c ==124);
if(nctemp790)
{
int nctemp801=ScanGetch();
c =nctemp801;
int nctemp794 = (c ==124);
if(nctemp794)
{
rval =5;
int nctemp815 = p + 1;
p =nctemp815;
int nctemp819=p;
char nctemp822=(char)(c);
ScanText->a[nctemp819] =nctemp822;
}
else{
struct nctempchar1 *nctemp828;
static struct nctempchar1 nctemp829 = {{ 18}, (char*)"Illegal character\0"};
nctemp828=&nctemp829;
nctempchar1* nctemp826= nctemp828;
int nctemp830=ScanError(nctemp826);
}
}
else{
int nctemp831 = (c ==38);
if(nctemp831)
{
int nctemp842=ScanGetch();
c =nctemp842;
int nctemp835 = (c ==38);
if(nctemp835)
{
rval =6;
int nctemp856 = p + 1;
p =nctemp856;
int nctemp860=p;
char nctemp863=(char)(c);
ScanText->a[nctemp860] =nctemp863;
}
else{
struct nctempchar1 *nctemp869;
static struct nctempchar1 nctemp870 = {{ 18}, (char*)"Illegal character\0"};
nctemp869=&nctemp870;
nctempchar1* nctemp867= nctemp869;
int nctemp871=ScanError(nctemp867);
}
}
else{
int nctemp872 = (c ==33);
if(nctemp872)
{
int nctemp883=ScanGetch();
c =nctemp883;
int nctemp876 = (c ==61);
if(nctemp876)
{
rval =4;
int nctemp897 = p + 1;
p =nctemp897;
int nctemp901=p;
char nctemp904=(char)(c);
ScanText->a[nctemp901] =nctemp904;
}
else{
struct nctempchar1 *nctemp910;
static struct nctempchar1 nctemp911 = {{ 18}, (char*)"Illegal character\0"};
nctemp910=&nctemp911;
nctempchar1* nctemp908= nctemp910;
int nctemp912=ScanError(nctemp908);
}
}
else{
int nctemp913 = (c ==61);
if(nctemp913)
{
int nctemp924=ScanGetch();
c =nctemp924;
int nctemp917 = (c ==61);
if(nctemp917)
{
rval =3;
int nctemp938 = p + 1;
p =nctemp938;
int nctemp942=p;
char nctemp945=(char)(c);
ScanText->a[nctemp942] =nctemp945;
}
else{
int nctemp949=ScanUngetch();
rval =61;
}
}
else{
int nctemp954 = (c ==34);
if(nctemp954)
{
int nctemp961=p;
char nctemp964=(char)(34);
ScanText->a[nctemp961] =nctemp964;
int nctemp975 = p + 1;
p =nctemp975;
string =1;
int nctemp980 = (string ==1);
int nctemp984=nctemp980;
while(nctemp984)
{{
int nctemp992=ScanGetch();
c =nctemp992;
int nctemp985 = (c !=34);
if(nctemp985)
{
string =1;
}
else{
int nctemp1009 = p - 1;
int nctemp1004=nctemp1009;
int nctemp1001=(int)(ScanText->a[nctemp1004]);
int nctemp998 = (nctemp1001 ==92);
if(nctemp998)
{
string =1;
}
else{
string =0;
}
}
int nctemp1022=p;
char nctemp1025=(char)(c);
ScanText->a[nctemp1022] =nctemp1025;
int nctemp1036 = p + 1;
p =nctemp1036;
int nctemp1044=ScanText->d[0];int nctemp1049 = nctemp1044 - 1;
int nctemp1037 = (p >= nctemp1049);
if(nctemp1037)
{
struct nctempchar1 *nctemp1053;
static struct nctempchar1 nctemp1054 = {{ 19}, (char*)"String is too long\0"};
nctemp1053=&nctemp1054;
nctempchar1* nctemp1051= nctemp1053;
int nctemp1055=ScanError(nctemp1051);
}
}
int nctemp1056 = (string ==1);
nctemp984=nctemp1056;}int nctemp1063=p;
char nctemp1066=(char)(0);
ScanText->a[nctemp1063] =nctemp1066;
rval =18;
}
else{
int nctemp1073 = (c ==39);
if(nctemp1073)
{
int nctemp1080=p;
char nctemp1083=(char)(39);
ScanText->a[nctemp1080] =nctemp1083;
int nctemp1094 = p + 1;
p =nctemp1094;
int nctemp1098=p;
int nctemp1104=ScanGetch();
char nctemp1101=(char)(nctemp1104);
ScanText->a[nctemp1098] =nctemp1101;
int nctemp1109=ScanGetch();
c =nctemp1109;
int nctemp1110 = (c !=39);
if(nctemp1110)
{
struct nctempchar1 *nctemp1117;
static struct nctempchar1 nctemp1118 = {{ 31}, (char*)"Character constant is too long\0"};
nctemp1117=&nctemp1118;
nctempchar1* nctemp1115= nctemp1117;
int nctemp1119=ScanError(nctemp1115);
}
else{
int nctemp1128 = p + 1;
p =nctemp1128;
int nctemp1132=p;
char nctemp1135=(char)(c);
ScanText->a[nctemp1132] =nctemp1135;
}
int nctemp1146 = p + 1;
p =nctemp1146;
int nctemp1150=p;
char nctemp1153=(char)(0);
ScanText->a[nctemp1150] =nctemp1153;
rval =17;
}
else{
int nctemp1161= c;
int nctemp1163=LibeIsdigit(nctemp1161);
if(nctemp1163)
{
int nctemp1170=ScanGetch();
c =nctemp1170;
int nctemp1165= c;
int nctemp1171=LibeIsdigit(nctemp1165);
int nctemp1172=nctemp1171;
while(nctemp1172)
{{
int nctemp1181 = p + 1;
p =nctemp1181;
int nctemp1185=p;
char nctemp1188=(char)(c);
ScanText->a[nctemp1185] =nctemp1188;
int nctemp1195=ScanText->d[0];int nctemp1191 = (p >= nctemp1195);
if(nctemp1191)
{
struct nctempchar1 *nctemp1202;
static struct nctempchar1 nctemp1203 = {{ 18}, (char*)"Digit is too long\0"};
nctemp1202=&nctemp1203;
nctempchar1* nctemp1200= nctemp1202;
int nctemp1204=ScanError(nctemp1200);
}
}
int nctemp1211=ScanGetch();
c =nctemp1211;
int nctemp1206= c;
int nctemp1212=LibeIsdigit(nctemp1206);
nctemp1172=nctemp1212;}int nctemp1213 = (c ==46);
if(nctemp1213)
{
int nctemp1225 = p + 1;
p =nctemp1225;
int nctemp1230=ScanText->d[0];int nctemp1226 = (p >= nctemp1230);
if(nctemp1226)
{
struct nctempchar1 *nctemp1237;
static struct nctempchar1 nctemp1238 = {{ 18}, (char*)"Digit is too long\0"};
nctemp1237=&nctemp1238;
nctempchar1* nctemp1235= nctemp1237;
int nctemp1239=ScanError(nctemp1235);
}
int nctemp1243=p;
char nctemp1246=(char)(c);
ScanText->a[nctemp1243] =nctemp1246;
int nctemp1253= p;
int nctemp1255=ScanFtail(nctemp1253);
p =nctemp1255;
rval =24;
}
else{
int nctemp1261=ScanUngetch();
int nctemp1270 = p + 1;
int nctemp1265=nctemp1270;
char nctemp1272=(char)(0);
ScanText->a[nctemp1265] =nctemp1272;
rval =17;
}
}
else{
int nctemp1280= c;
int nctemp1282=LibeIsalnum(nctemp1280);
if(nctemp1282)
{
int nctemp1289=ScanGetch();
c =nctemp1289;
int nctemp1284= c;
int nctemp1290=LibeIsalnum(nctemp1284);
int nctemp1291=nctemp1290;
while(nctemp1291)
{{
int nctemp1300 = p + 1;
p =nctemp1300;
int nctemp1304=p;
char nctemp1307=(char)(c);
ScanText->a[nctemp1304] =nctemp1307;
int nctemp1314=ScanText->d[0];int nctemp1310 = (p >= nctemp1314);
if(nctemp1310)
{
struct nctempchar1 *nctemp1321;
static struct nctempchar1 nctemp1322 = {{ 23}, (char*)"Identifier is too long\0"};
nctemp1321=&nctemp1322;
nctempchar1* nctemp1319= nctemp1321;
int nctemp1323=ScanError(nctemp1319);
}
}
int nctemp1330=ScanGetch();
c =nctemp1330;
int nctemp1325= c;
int nctemp1331=LibeIsalnum(nctemp1325);
nctemp1291=nctemp1331;}int nctemp1333=ScanUngetch();
int nctemp1342 = p + 1;
int nctemp1337=nctemp1342;
char nctemp1344=(char)(0);
ScanText->a[nctemp1337] =nctemp1344;
nctempchar1* nctemp1350= ScanText;
struct nctempchar1 *nctemp1355;
static struct nctempchar1 nctemp1356 = {{ 8}, (char*)"include\0"};
nctemp1355=&nctemp1356;
nctempchar1* nctemp1353= nctemp1355;
int nctemp1357=LibeStrcmp(nctemp1350,nctemp1353);
int nctemp1347 = (nctemp1357 ==1);
if(nctemp1347)
{
rval =432;
}
else{
nctempchar1* nctemp1364= ScanText;
struct nctempchar1 *nctemp1369;
static struct nctempchar1 nctemp1370 = {{ 4}, (char*)"int\0"};
nctemp1369=&nctemp1370;
nctempchar1* nctemp1367= nctemp1369;
int nctemp1371=LibeStrcmp(nctemp1364,nctemp1367);
if(nctemp1371)
{
rval =7;
}
else{
nctempchar1* nctemp1377= ScanText;
struct nctempchar1 *nctemp1382;
static struct nctempchar1 nctemp1383 = {{ 5}, (char*)"char\0"};
nctemp1382=&nctemp1383;
nctempchar1* nctemp1380= nctemp1382;
int nctemp1384=LibeStrcmp(nctemp1377,nctemp1380);
if(nctemp1384)
{
rval =8;
}
else{
nctempchar1* nctemp1390= ScanText;
struct nctempchar1 *nctemp1395;
static struct nctempchar1 nctemp1396 = {{ 6}, (char*)"float\0"};
nctemp1395=&nctemp1396;
nctempchar1* nctemp1393= nctemp1395;
int nctemp1397=LibeStrcmp(nctemp1390,nctemp1393);
if(nctemp1397)
{
rval =9;
}
else{
nctempchar1* nctemp1403= ScanText;
struct nctempchar1 *nctemp1408;
static struct nctempchar1 nctemp1409 = {{ 6}, (char*)"const\0"};
nctemp1408=&nctemp1409;
nctempchar1* nctemp1406= nctemp1408;
int nctemp1410=LibeStrcmp(nctemp1403,nctemp1406);
if(nctemp1410)
{
rval =431;
}
else{
nctempchar1* nctemp1416= ScanText;
struct nctempchar1 *nctemp1421;
static struct nctempchar1 nctemp1422 = {{ 8}, (char*)"complex\0"};
nctemp1421=&nctemp1422;
nctempchar1* nctemp1419= nctemp1421;
int nctemp1423=LibeStrcmp(nctemp1416,nctemp1419);
if(nctemp1423)
{
rval =10;
}
else{
nctempchar1* nctemp1429= ScanText;
struct nctempchar1 *nctemp1434;
static struct nctempchar1 nctemp1435 = {{ 7}, (char*)"struct\0"};
nctemp1434=&nctemp1435;
nctempchar1* nctemp1432= nctemp1434;
int nctemp1436=LibeStrcmp(nctemp1429,nctemp1432);
if(nctemp1436)
{
rval =11;
}
else{
nctempchar1* nctemp1442= ScanText;
struct nctempchar1 *nctemp1447;
static struct nctempchar1 nctemp1448 = {{ 6}, (char*)"class\0"};
nctemp1447=&nctemp1448;
nctempchar1* nctemp1445= nctemp1447;
int nctemp1449=LibeStrcmp(nctemp1442,nctemp1445);
if(nctemp1449)
{
rval =11;
}
else{
nctempchar1* nctemp1455= ScanText;
struct nctempchar1 *nctemp1460;
static struct nctempchar1 nctemp1461 = {{ 7}, (char*)"import\0"};
nctemp1460=&nctemp1461;
nctempchar1* nctemp1458= nctemp1460;
int nctemp1462=LibeStrcmp(nctemp1455,nctemp1458);
if(nctemp1462)
{
rval =433;
}
else{
nctempchar1* nctemp1468= ScanText;
struct nctempchar1 *nctemp1473;
static struct nctempchar1 nctemp1474 = {{ 6}, (char*)"while\0"};
nctemp1473=&nctemp1474;
nctempchar1* nctemp1471= nctemp1473;
int nctemp1475=LibeStrcmp(nctemp1468,nctemp1471);
if(nctemp1475)
{
rval =12;
}
else{
nctempchar1* nctemp1481= ScanText;
struct nctempchar1 *nctemp1486;
static struct nctempchar1 nctemp1487 = {{ 7}, (char*)"return\0"};
nctemp1486=&nctemp1487;
nctempchar1* nctemp1484= nctemp1486;
int nctemp1488=LibeStrcmp(nctemp1481,nctemp1484);
if(nctemp1488)
{
rval =30;
}
else{
nctempchar1* nctemp1494= ScanText;
struct nctempchar1 *nctemp1499;
static struct nctempchar1 nctemp1500 = {{ 3}, (char*)"if\0"};
nctemp1499=&nctemp1500;
nctempchar1* nctemp1497= nctemp1499;
int nctemp1501=LibeStrcmp(nctemp1494,nctemp1497);
if(nctemp1501)
{
rval =14;
}
else{
nctempchar1* nctemp1507= ScanText;
struct nctempchar1 *nctemp1512;
static struct nctempchar1 nctemp1513 = {{ 5}, (char*)"else\0"};
nctemp1512=&nctemp1513;
nctempchar1* nctemp1510= nctemp1512;
int nctemp1514=LibeStrcmp(nctemp1507,nctemp1510);
if(nctemp1514)
{
rval =15;
}
else{
nctempchar1* nctemp1520= ScanText;
struct nctempchar1 *nctemp1525;
static struct nctempchar1 nctemp1526 = {{ 7}, (char*)"sizeof\0"};
nctemp1525=&nctemp1526;
nctempchar1* nctemp1523= nctemp1525;
int nctemp1527=LibeStrcmp(nctemp1520,nctemp1523);
if(nctemp1527)
{
rval =22;
}
else{
nctempchar1* nctemp1533= ScanText;
struct nctempchar1 *nctemp1538;
static struct nctempchar1 nctemp1539 = {{ 5}, (char*)"cast\0"};
nctemp1538=&nctemp1539;
nctempchar1* nctemp1536= nctemp1538;
int nctemp1540=LibeStrcmp(nctemp1533,nctemp1536);
if(nctemp1540)
{
rval =23;
}
else{
nctempchar1* nctemp1546= ScanText;
struct nctempchar1 *nctemp1551;
static struct nctempchar1 nctemp1552 = {{ 4}, (char*)"new\0"};
nctemp1551=&nctemp1552;
nctempchar1* nctemp1549= nctemp1551;
int nctemp1553=LibeStrcmp(nctemp1546,nctemp1549);
if(nctemp1553)
{
rval =26;
}
else{
nctempchar1* nctemp1559= ScanText;
struct nctempchar1 *nctemp1564;
static struct nctempchar1 nctemp1565 = {{ 7}, (char*)"delete\0"};
nctemp1564=&nctemp1565;
nctempchar1* nctemp1562= nctemp1564;
int nctemp1566=LibeStrcmp(nctemp1559,nctemp1562);
if(nctemp1566)
{
rval =50;
}
else{
nctempchar1* nctemp1572= ScanText;
struct nctempchar1 *nctemp1577;
static struct nctempchar1 nctemp1578 = {{ 4}, (char*)"len\0"};
nctemp1577=&nctemp1578;
nctempchar1* nctemp1575= nctemp1577;
int nctemp1579=LibeStrcmp(nctemp1572,nctemp1575);
if(nctemp1579)
{
rval =29;
}
else{
nctempchar1* nctemp1585= ScanText;
struct nctempchar1 *nctemp1590;
static struct nctempchar1 nctemp1591 = {{ 6}, (char*)"cmplx\0"};
nctemp1590=&nctemp1591;
nctempchar1* nctemp1588= nctemp1590;
int nctemp1592=LibeStrcmp(nctemp1585,nctemp1588);
if(nctemp1592)
{
rval =25;
}
else{
nctempchar1* nctemp1598= ScanText;
struct nctempchar1 *nctemp1603;
static struct nctempchar1 nctemp1604 = {{ 3}, (char*)"re\0"};
nctemp1603=&nctemp1604;
nctempchar1* nctemp1601= nctemp1603;
int nctemp1605=LibeStrcmp(nctemp1598,nctemp1601);
if(nctemp1605)
{
rval =28;
}
else{
nctempchar1* nctemp1611= ScanText;
struct nctempchar1 *nctemp1616;
static struct nctempchar1 nctemp1617 = {{ 3}, (char*)"im\0"};
nctemp1616=&nctemp1617;
nctempchar1* nctemp1614= nctemp1616;
int nctemp1618=LibeStrcmp(nctemp1611,nctemp1614);
if(nctemp1618)
{
rval =27;
}
else{
nctempchar1* nctemp1624= ScanText;
struct nctempchar1 *nctemp1629;
static struct nctempchar1 nctemp1630 = {{ 4}, (char*)"for\0"};
nctemp1629=&nctemp1630;
nctempchar1* nctemp1627= nctemp1629;
int nctemp1631=LibeStrcmp(nctemp1624,nctemp1627);
if(nctemp1631)
{
rval =26;
}
else{
nctempchar1* nctemp1637= ScanText;
struct nctempchar1 *nctemp1642;
static struct nctempchar1 nctemp1643 = {{ 9}, (char*)"parallel\0"};
nctemp1642=&nctemp1643;
nctempchar1* nctemp1640= nctemp1642;
int nctemp1644=LibeStrcmp(nctemp1637,nctemp1640);
if(nctemp1644)
{
rval =31;
}
else{
nctempchar1* nctemp1650= ScanText;
struct nctempchar1 *nctemp1655;
static struct nctempchar1 nctemp1656 = {{ 4}, (char*)"end\0"};
nctemp1655=&nctemp1656;
nctempchar1* nctemp1653= nctemp1655;
int nctemp1657=LibeStrcmp(nctemp1650,nctemp1653);
if(nctemp1657)
{
rval =531;
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
else{
struct nctempchar1 *nctemp1669;
static struct nctempchar1 nctemp1670 = {{ 14}, (char*)"Invalid token\0"};
nctemp1669=&nctemp1670;
nctempchar1* nctemp1667= nctemp1669;
int nctemp1671=ScanError(nctemp1667);
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
int nctemp1681 = p + 1;
int nctemp1676=nctemp1681;
char nctemp1683=(char)(0);
ScanText->a[nctemp1676] =nctemp1683;
return rval;
}
nctempchar1 * ScanSetfile (nctempchar1 *fname)
{
nctempchar1 *nctemp1688 =ScanFile;
int nctemp1687 =(nctemp1688!=0);
if(nctemp1687)
{
RunFree(ScanFile->a);
RunFree(ScanFile);
}
nctempchar1* nctemp1700= fname;
nctempchar1* nctemp1703=LibeStrsave(nctemp1700);
ScanFile=nctemp1703;
return ScanFile;
}
int ScanInclude ()
{
int p;
int c;
int string;
int delimit;
int l;
nctempchar1 *fname;
int nctemp1719=ScanGetch();
c =nctemp1719;
int nctemp1712 = (c ==32);
int nctemp1722 = (c ==9);
int nctemp1709 = (nctemp1712 || nctemp1722);
int nctemp1727 = (c ==10);
int nctemp1706 = (nctemp1709 || nctemp1727);
int nctemp1731=nctemp1706;
while(nctemp1731)
{{
int nctemp1732 = (c ==10);
if(nctemp1732)
{
int nctemp1737=ScanIncline();
}
}
int nctemp1751=ScanGetch();
c =nctemp1751;
int nctemp1744 = (c ==32);
int nctemp1754 = (c ==9);
int nctemp1741 = (nctemp1744 || nctemp1754);
int nctemp1759 = (c ==10);
int nctemp1738 = (nctemp1741 || nctemp1759);
nctemp1731=nctemp1738;}int nctemp1764=ScanUngetch();
int nctemp1772=ScanGetch();
c =nctemp1772;
int nctemp1765 = (c !=34);
if(nctemp1765)
{
int nctemp1774 = (c !='<');
if(nctemp1774)
{
struct nctempchar1 *nctemp1781;
static struct nctempchar1 nctemp1782 = {{ 36}, (char*)"Invalid string in include statement\0"};
nctemp1781=&nctemp1782;
nctempchar1* nctemp1779= nctemp1781;
int nctemp1783=ScanError(nctemp1779);
}
}
int nctemp1784 = (c =='<');
if(nctemp1784)
{
delimit ='>';
}
else{
delimit =34;
}
p =0;
string =1;
int nctemp1804 = (string ==1);
int nctemp1808=nctemp1804;
while(nctemp1808)
{{
int nctemp1816=ScanGetch();
c =nctemp1816;
int nctemp1809 = (c !=delimit);
if(nctemp1809)
{
string =1;
}
else{
string =0;
}
int nctemp1829=p;
char nctemp1832=(char)(c);
ScanText->a[nctemp1829] =nctemp1832;
int nctemp1843 = p + 1;
p =nctemp1843;
int nctemp1851=ScanText->d[0];int nctemp1856 = nctemp1851 - 1;
int nctemp1844 = (p >= nctemp1856);
if(nctemp1844)
{
struct nctempchar1 *nctemp1860;
static struct nctempchar1 nctemp1861 = {{ 19}, (char*)"String is too long\0"};
nctemp1860=&nctemp1861;
nctempchar1* nctemp1858= nctemp1860;
int nctemp1862=ScanError(nctemp1858);
}
}
int nctemp1863 = (string ==1);
nctemp1808=nctemp1863;}int nctemp1875 = p - 1;
int nctemp1870=nctemp1875;
char nctemp1877=(char)(0);
ScanText->a[nctemp1870] =nctemp1877;
int nctemp1880 = (delimit =='>');
if(nctemp1880)
{
nctempchar1* nctemp1896=ScanPath();
nctempchar1* nctemp1894= nctemp1896;
int nctemp1897=LibeStrlen(nctemp1894);
nctempchar1* nctemp1899= ScanText;
int nctemp1902=LibeStrlen(nctemp1899);
int nctemp1903 = nctemp1897 + nctemp1902;
int nctemp1905 = nctemp1903 + 1;
l =nctemp1905;
int nctemp1912=l;
nctempchar1 *nctemp1911;
nctemp1911=(nctempchar1*)RunMalloc(sizeof(nctempchar1));
nctemp1911->d[0]=l;
nctemp1911->a=(char *)RunMalloc(sizeof(char)*nctemp1912);
fname=nctemp1911;
nctempchar1* nctemp1918=ScanPath();
nctempchar1* nctemp1916= nctemp1918;
nctempchar1* nctemp1919= fname;
int nctemp1922=LibeStrcpy(nctemp1916,nctemp1919);
nctempchar1* nctemp1924= ScanText;
nctempchar1* nctemp1927= fname;
int nctemp1930=LibeStrcat(nctemp1924,nctemp1927);
}
else{
fname=ScanText;
}
nctempchar1* nctemp1941= fname;
struct nctempchar1 *nctemp1946;
static struct nctempchar1 nctemp1947 = {{ 2}, (char*)"r\0"};
nctemp1946=&nctemp1947;
nctempchar1* nctemp1944= nctemp1946;
int nctemp1948=LibeOpen(nctemp1941,nctemp1944);
ScanFp =nctemp1948;
nctempchar1* nctemp1950= fname;
nctempchar1* nctemp1953=ScanSetfile(nctemp1950);
ScanLinesave =ScanLine;
ScanLine =1;
return 1;
}
int ScanGetok ()
{
int c;
int nctemp1970=ScanLex();
c =nctemp1970;
int nctemp1963 = (c ==432);
if(nctemp1963)
{
int nctemp1973=ScanInclude();
return c;
}
else{
int nctemp1975 = (c ==19);
if(nctemp1975)
{
int nctemp1979 = (ScanFp ==ScanInfile);
if(nctemp1979)
{
return c;
}
else{
int nctemp1985= ScanFp;
int nctemp1987=LibeClose(nctemp1985);
ScanFp =ScanInfile;
nctempchar1* nctemp1993= ScanInfilename;
nctempchar1* nctemp1996=ScanSetfile(nctemp1993);
ScanLine =ScanLinesave;
int nctemp2002=ScanGetok();
return nctemp2002;
}
}
else{
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
ScanLine =lineno;
return 0;
}
int ScanGetword (nctempchar1 *ttext)
{
int nctemp2012= ScanFp;
nctempchar1* nctemp2014= ttext;
int nctemp2017=LibeGetw(nctemp2012,nctemp2014);
return nctemp2017;
}
