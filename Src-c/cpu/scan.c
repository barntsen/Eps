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
int LibeArrayex (int line,nctempchar1 *name,int ival,int index,int bound);
int LibeClearerr ();
int LibeGeterrno ();
nctempchar1* LibeGeterrstr ();
struct MainArg {nctempchar1 *arg;
};
typedef struct nctempMainArg1 {int d[1]; struct MainArg *a; } nctempMainArg1;
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
int LibePs (nctempchar1 *s);
int LibePi (int n);
int LibePf (float r);
int LibePutf (int fp,float r,nctempchar1 *form);
int LibePutc (int fp,int c);
int LibePuts (int fp,nctempchar1 *s);
int LibePuti (int fp,int ival);
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
nctempchar1* LibeStradd (nctempchar1 *t,nctempchar1 *s);
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
int LibeSetnb (int n);
int LibeSetnt (int n);
int LibeGetnb ();
int LibeGetnt ();
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
int LibeSystem (nctempchar1 *cmd);
int ScanInit (nctempchar1 *infile);
int ScanGetok ();
int ScanSetline (int lineno);
int ScanGetline ();
int ScanIncline ();
nctempchar1* ScanGetext ();
nctempchar1* ScanGetfile ();
nctempchar1* ScanSetfile (nctempchar1 *fname);
nctempchar1* ScanPath ();
struct tree {nctempchar1 *name;
nctempchar1 *def;
nctempchar1 *type;
nctempchar1 *structure;
int line;
nctempchar1 *file;
nctempchar1 *tempr;
nctempchar1 *tempi;
nctempchar1 *lval;
nctempchar1 *array;
nctempchar1 *paral;
nctempchar1 *global;
nctempchar1 *ref;
int rank;
int simple;
int topexpr;
nctempchar1 *descr;
struct tree* child;
struct tree* sister;
};
typedef struct nctemptree1 {int d[1]; struct tree *a; } nctemptree1;
struct nctemptree2 {int d[2]; struct tree *a; } ;
struct nctemptree3 {int d[3]; struct tree *a; } ;
struct nctemptree4 {int d[4]; struct tree *a; } ;
int PtreeInit ();
int PtreeRmtree (struct tree* p);
int PtreeRmnode (struct tree* p);
struct tree* PtreeMknode (nctempchar1 *name,nctempchar1 *def);
int PtreeAddchild (struct tree* parent,struct tree* child);
int PtreeAddsister (struct tree* sister,struct tree* newnode);
struct tree* PtreeMvsister (struct tree* p);
struct tree* PtreeMvchild (struct tree* p);
int PtreeSetname (struct tree* p,nctempchar1 *name);
nctempchar1* PtreeGetname (struct tree* p);
int PtreeSetdef (struct tree* p,nctempchar1 *def);
nctempchar1* PtreeGetdef (struct tree* p);
int PtreeSetype (struct tree* p,nctempchar1 *type);
nctempchar1* PtreeGetype (struct tree* p);
int PtreeSetstruct (struct tree* p,nctempchar1 *structure);
nctempchar1* PtreeGetstruct (struct tree* p);
int PtreeSetempr (struct tree* p,nctempchar1 *tempr);
nctempchar1* PtreeGetempr (struct tree* p);
int PtreeSetempi (struct tree* p,nctempchar1 *tempi);
nctempchar1* PtreeGetempi (struct tree* p);
int PtreeGetline (struct tree* p);
int PtreeSetline (struct tree* p,int line);
nctempchar1* PtreeGetfile (struct tree* p);
int PtreeSetrank (struct tree* p,int rank);
int PtreeGetrank (struct tree* p);
int PtreeSetlval (struct tree* p,nctempchar1 *lval);
nctempchar1* PtreeGetlval (struct tree* p);
int PtreeSetarray (struct tree* p,nctempchar1 *array);
nctempchar1* PtreeGetarray (struct tree* p);
int PtreeSetparallel (struct tree* p,nctempchar1 *paral);
nctempchar1* PtreeGetparallel (struct tree* p);
int PtreeSetref (struct tree* p,nctempchar1 *ref);
nctempchar1* PtreeGetref (struct tree* p);
int PtreeSetdescr (struct tree* p,nctempchar1 *descr);
nctempchar1* PtreeGetdescr (struct tree* p);
int PtreeSetglobal (struct tree* p,nctempchar1 *descr);
nctempchar1* PtreeGetglobal (struct tree* p);
int PtreeSetopexpr (struct tree* p,int topexpr);
int PtreeGetopexpr (struct tree* p);
int PtreeSetsimple (struct tree* p,int simple);
int PtreeGetsimple (struct tree* p);
int PtreePrtree (struct tree* p,int level);
int ErrError (nctempchar1 *s);
int ErrSerror (struct tree* p,nctempchar1 *s1,nctempchar1 *s2);
int ErrPanic (nctempchar1 *s);
nctempchar1 *ScanText;
nctempchar1 *ScanBuffer;
int ScanLine;
int ScanLinesave;
int ScanFp;
int ScanInfile;
nctempchar1 *ScanInfilename;
nctempchar1 *ScanFile;
int ScanLex ();
int ScanGetword (nctempchar1 *ttext);
int ScanGetch ();
int ScanUngetch ();
int ScanFtail (int p);
int ScanInclude ();
int ScanWhite ();
int ScanComment ();
int ScanLcomment ();
int ScanInit (nctempchar1 *infile)
{
int nctemp7=4096;
nctempchar1 *nctemp6;
nctemp6=(nctempchar1*)RunMalloc(sizeof(nctempchar1));
nctemp6->d[0]=4096;
nctemp6->a=(char *)RunMalloc(sizeof(char)*nctemp7);
ScanText=nctemp6;
int nctemp16=4096;
nctempchar1 *nctemp15;
nctemp15=(nctempchar1*)RunMalloc(sizeof(nctempchar1));
nctemp15->d[0]=4096;
nctemp15->a=(char *)RunMalloc(sizeof(char)*nctemp16);
ScanBuffer=nctemp15;
nctempchar1* nctemp23= infile;
struct nctempchar1 *nctemp28;
static struct nctempchar1 nctemp29 = {{ 2}, (char*)"r\0"};
nctemp28=&nctemp29;
nctempchar1* nctemp26= nctemp28;
int nctemp30=LibeOpen(nctemp23,nctemp26);
ScanInfile =nctemp30;
int nctemp31 = (ScanInfile ==0);
if(nctemp31)
{
int nctemp36= 4;
struct nctempchar1 *nctemp40;
static struct nctempchar1 nctemp41 = {{ 26}, (char*)"Can not open input file: \0"};
nctemp40=&nctemp41;
nctempchar1* nctemp38= nctemp40;
int nctemp42=LibePuts(nctemp36,nctemp38);
int nctemp44= 4;
nctempchar1* nctemp46= infile;
int nctemp49=LibePuts(nctemp44,nctemp46);
int nctemp51= 4;
struct nctempchar1 *nctemp55;
static struct nctempchar1 nctemp56 = {{ 3}, (char*)"\n\0"};
nctemp55=&nctemp56;
nctempchar1* nctemp53= nctemp55;
int nctemp57=LibePuts(nctemp51,nctemp53);
int nctemp59= 4;
int nctemp61=LibeFlush(nctemp59);
return 0;
}
ScanFp =ScanInfile;
nctempchar1* nctemp72= infile;
nctempchar1* nctemp75=LibeStrsave(nctemp72);
ScanFile=nctemp75;
nctempchar1* nctemp81= infile;
nctempchar1* nctemp84=LibeStrsave(nctemp81);
ScanInfilename=nctemp84;
return 1;
}
int ScanGetok ()
{
int c;
int nctemp93=ScanLex();
c =nctemp93;
int nctemp86 = (c ==432);
if(nctemp86)
{
int nctemp96=ScanInclude();
return c;
}
else{
int nctemp98 = (c ==19);
if(nctemp98)
{
int nctemp102 = (ScanFp ==ScanInfile);
if(nctemp102)
{
return c;
}
else{
int nctemp108= ScanFp;
int nctemp110=LibeClose(nctemp108);
ScanFp =ScanInfile;
nctempchar1* nctemp116= ScanInfilename;
nctempchar1* nctemp119=ScanSetfile(nctemp116);
ScanLine =ScanLinesave;
int nctemp125=ScanGetok();
return nctemp125;
}
}
else{
return c;
}
}
}
int ScanLex ()
{
int c;
int p;
int rval;
int string;
int comments;
int nctemp128=ScanWhite();
int nctemp133=ScanGetch();
c =nctemp133;
p =0;
int nctemp141=p;
char nctemp144=(char)(c);
ScanText->a[nctemp141] =nctemp144;
comments =1;
int nctemp151 = (comments ==1);
int nctemp155=nctemp151;
while(nctemp155)
{{
int nctemp156 = (c =='#');
if(nctemp156)
{
int nctemp161=ScanLcomment();
int nctemp163=ScanWhite();
int nctemp168=ScanGetch();
c =nctemp168;
int nctemp172=p;
char nctemp175=(char)(c);
ScanText->a[nctemp172] =nctemp175;
}
else{
comments =0;
}
}
int nctemp182 = (comments ==1);
nctemp155=nctemp182;}int nctemp186 = (c ==(-1));
if(nctemp186)
{
rval =19;
return rval;
}
int nctemp195 = (c ==43);
if(nctemp195)
{
rval =43;
}
else{
int nctemp203 = (c ==42);
if(nctemp203)
{
rval =42;
}
else{
int nctemp211 = (c ==47);
if(nctemp211)
{
rval =47;
}
else{
int nctemp219 = (c ==40);
if(nctemp219)
{
rval =40;
}
else{
int nctemp227 = (c ==41);
if(nctemp227)
{
rval =41;
}
else{
int nctemp235 = (c ==93);
if(nctemp235)
{
rval =93;
}
else{
int nctemp243 = (c ==91);
if(nctemp243)
{
rval =91;
}
else{
int nctemp251 = (c ==123);
if(nctemp251)
{
rval =123;
}
else{
int nctemp259 = (c ==125);
if(nctemp259)
{
rval =125;
}
else{
int nctemp267 = (c ==58);
if(nctemp267)
{
rval =58;
}
else{
int nctemp275 = (c ==59);
if(nctemp275)
{
rval =59;
}
else{
int nctemp283 = (c ==44);
if(nctemp283)
{
rval =44;
}
else{
int nctemp291 = (c ==46);
if(nctemp291)
{
rval =46;
}
else{
int nctemp299 = (c ==60);
if(nctemp299)
{
int nctemp310=ScanGetch();
c =nctemp310;
int nctemp303 = (c ==61);
if(nctemp303)
{
rval =20;
int nctemp324 = p + 1;
p =nctemp324;
int nctemp328=p;
char nctemp331=(char)(c);
ScanText->a[nctemp328] =nctemp331;
}
else{
int nctemp335=ScanUngetch();
rval =60;
}
}
else{
int nctemp340 = (c ==62);
if(nctemp340)
{
int nctemp351=ScanGetch();
c =nctemp351;
int nctemp344 = (c ==61);
if(nctemp344)
{
rval =21;
int nctemp365 = p + 1;
p =nctemp365;
int nctemp369=p;
char nctemp372=(char)(c);
ScanText->a[nctemp369] =nctemp372;
}
else{
int nctemp376=ScanUngetch();
rval =62;
}
}
else{
int nctemp381 = (c ==45);
if(nctemp381)
{
int nctemp392=ScanGetch();
c =nctemp392;
int nctemp385 = (c ==62);
if(nctemp385)
{
rval =2;
int nctemp406 = p + 1;
p =nctemp406;
int nctemp410=p;
char nctemp413=(char)(c);
ScanText->a[nctemp410] =nctemp413;
}
else{
int nctemp417=ScanUngetch();
rval =45;
}
}
else{
int nctemp422 = (c ==124);
if(nctemp422)
{
int nctemp433=ScanGetch();
c =nctemp433;
int nctemp426 = (c ==124);
if(nctemp426)
{
rval =5;
int nctemp447 = p + 1;
p =nctemp447;
int nctemp451=p;
char nctemp454=(char)(c);
ScanText->a[nctemp451] =nctemp454;
}
else{
struct nctempchar1 *nctemp460;
static struct nctempchar1 nctemp461 = {{ 18}, (char*)"Illegal character\0"};
nctemp460=&nctemp461;
nctempchar1* nctemp458= nctemp460;
int nctemp462=ErrError(nctemp458);
}
}
else{
int nctemp463 = (c ==38);
if(nctemp463)
{
int nctemp474=ScanGetch();
c =nctemp474;
int nctemp467 = (c ==38);
if(nctemp467)
{
rval =6;
int nctemp488 = p + 1;
p =nctemp488;
int nctemp492=p;
char nctemp495=(char)(c);
ScanText->a[nctemp492] =nctemp495;
}
else{
struct nctempchar1 *nctemp501;
static struct nctempchar1 nctemp502 = {{ 18}, (char*)"Illegal character\0"};
nctemp501=&nctemp502;
nctempchar1* nctemp499= nctemp501;
int nctemp503=ErrError(nctemp499);
}
}
else{
int nctemp504 = (c ==33);
if(nctemp504)
{
int nctemp515=ScanGetch();
c =nctemp515;
int nctemp508 = (c ==61);
if(nctemp508)
{
rval =4;
int nctemp529 = p + 1;
p =nctemp529;
int nctemp533=p;
char nctemp536=(char)(c);
ScanText->a[nctemp533] =nctemp536;
}
else{
struct nctempchar1 *nctemp542;
static struct nctempchar1 nctemp543 = {{ 18}, (char*)"Illegal character\0"};
nctemp542=&nctemp543;
nctempchar1* nctemp540= nctemp542;
int nctemp544=ErrError(nctemp540);
}
}
else{
int nctemp545 = (c ==61);
if(nctemp545)
{
int nctemp556=ScanGetch();
c =nctemp556;
int nctemp549 = (c ==61);
if(nctemp549)
{
rval =3;
int nctemp570 = p + 1;
p =nctemp570;
int nctemp574=p;
char nctemp577=(char)(c);
ScanText->a[nctemp574] =nctemp577;
}
else{
int nctemp581=ScanUngetch();
rval =61;
}
}
else{
int nctemp586 = (c ==34);
if(nctemp586)
{
int nctemp593=p;
char nctemp596=(char)(34);
ScanText->a[nctemp593] =nctemp596;
int nctemp607 = p + 1;
p =nctemp607;
string =1;
int nctemp612 = (string ==1);
int nctemp616=nctemp612;
while(nctemp616)
{{
int nctemp624=ScanGetch();
c =nctemp624;
int nctemp617 = (c !=34);
if(nctemp617)
{
string =1;
}
else{
int nctemp641 = p - 1;
int nctemp636=nctemp641;
int nctemp633=(int)(ScanText->a[nctemp636]);
int nctemp630 = (nctemp633 ==92);
if(nctemp630)
{
string =1;
}
else{
string =0;
}
}
int nctemp654=p;
char nctemp657=(char)(c);
ScanText->a[nctemp654] =nctemp657;
int nctemp668 = p + 1;
p =nctemp668;
int nctemp676=ScanText->d[0];int nctemp681 = nctemp676 - 1;
int nctemp669 = (p >= nctemp681);
if(nctemp669)
{
struct nctempchar1 *nctemp685;
static struct nctempchar1 nctemp686 = {{ 19}, (char*)"String is too long\0"};
nctemp685=&nctemp686;
nctempchar1* nctemp683= nctemp685;
int nctemp687=ErrError(nctemp683);
}
}
int nctemp688 = (string ==1);
nctemp616=nctemp688;}int nctemp695=p;
char nctemp698=(char)(0);
ScanText->a[nctemp695] =nctemp698;
rval =18;
}
else{
int nctemp705 = (c ==39);
if(nctemp705)
{
int nctemp712=p;
char nctemp715=(char)(39);
ScanText->a[nctemp712] =nctemp715;
int nctemp726 = p + 1;
p =nctemp726;
int nctemp730=p;
int nctemp736=ScanGetch();
char nctemp733=(char)(nctemp736);
ScanText->a[nctemp730] =nctemp733;
int nctemp741=ScanGetch();
c =nctemp741;
int nctemp742 = (c !=39);
if(nctemp742)
{
struct nctempchar1 *nctemp749;
static struct nctempchar1 nctemp750 = {{ 31}, (char*)"Character constant is too long\0"};
nctemp749=&nctemp750;
nctempchar1* nctemp747= nctemp749;
int nctemp751=ErrError(nctemp747);
}
else{
int nctemp760 = p + 1;
p =nctemp760;
int nctemp764=p;
char nctemp767=(char)(c);
ScanText->a[nctemp764] =nctemp767;
}
int nctemp778 = p + 1;
p =nctemp778;
int nctemp782=p;
char nctemp785=(char)(0);
ScanText->a[nctemp782] =nctemp785;
rval =17;
}
else{
int nctemp793= c;
int nctemp795=LibeIsdigit(nctemp793);
if(nctemp795)
{
int nctemp802=ScanGetch();
c =nctemp802;
int nctemp797= c;
int nctemp803=LibeIsdigit(nctemp797);
int nctemp804=nctemp803;
while(nctemp804)
{{
int nctemp813 = p + 1;
p =nctemp813;
int nctemp817=p;
char nctemp820=(char)(c);
ScanText->a[nctemp817] =nctemp820;
int nctemp827=ScanText->d[0];int nctemp823 = (p >= nctemp827);
if(nctemp823)
{
struct nctempchar1 *nctemp834;
static struct nctempchar1 nctemp835 = {{ 18}, (char*)"Digit is too long\0"};
nctemp834=&nctemp835;
nctempchar1* nctemp832= nctemp834;
int nctemp836=ErrError(nctemp832);
}
}
int nctemp843=ScanGetch();
c =nctemp843;
int nctemp838= c;
int nctemp844=LibeIsdigit(nctemp838);
nctemp804=nctemp844;}int nctemp845 = (c ==46);
if(nctemp845)
{
int nctemp857 = p + 1;
p =nctemp857;
int nctemp862=ScanText->d[0];int nctemp858 = (p >= nctemp862);
if(nctemp858)
{
struct nctempchar1 *nctemp869;
static struct nctempchar1 nctemp870 = {{ 18}, (char*)"Digit is too long\0"};
nctemp869=&nctemp870;
nctempchar1* nctemp867= nctemp869;
int nctemp871=ErrError(nctemp867);
}
int nctemp875=p;
char nctemp878=(char)(c);
ScanText->a[nctemp875] =nctemp878;
int nctemp885= p;
int nctemp887=ScanFtail(nctemp885);
p =nctemp887;
rval =24;
}
else{
int nctemp893=ScanUngetch();
int nctemp902 = p + 1;
int nctemp897=nctemp902;
char nctemp904=(char)(0);
ScanText->a[nctemp897] =nctemp904;
rval =17;
}
}
else{
int nctemp912= c;
int nctemp914=LibeIsalnum(nctemp912);
if(nctemp914)
{
int nctemp921=ScanGetch();
c =nctemp921;
int nctemp916= c;
int nctemp922=LibeIsalnum(nctemp916);
int nctemp923=nctemp922;
while(nctemp923)
{{
int nctemp932 = p + 1;
p =nctemp932;
int nctemp936=p;
char nctemp939=(char)(c);
ScanText->a[nctemp936] =nctemp939;
int nctemp946=ScanText->d[0];int nctemp942 = (p >= nctemp946);
if(nctemp942)
{
struct nctempchar1 *nctemp953;
static struct nctempchar1 nctemp954 = {{ 23}, (char*)"Identifier is too long\0"};
nctemp953=&nctemp954;
nctempchar1* nctemp951= nctemp953;
int nctemp955=ErrError(nctemp951);
}
}
int nctemp962=ScanGetch();
c =nctemp962;
int nctemp957= c;
int nctemp963=LibeIsalnum(nctemp957);
nctemp923=nctemp963;}int nctemp965=ScanUngetch();
int nctemp974 = p + 1;
int nctemp969=nctemp974;
char nctemp976=(char)(0);
ScanText->a[nctemp969] =nctemp976;
nctempchar1* nctemp982= ScanText;
struct nctempchar1 *nctemp987;
static struct nctempchar1 nctemp988 = {{ 8}, (char*)"include\0"};
nctemp987=&nctemp988;
nctempchar1* nctemp985= nctemp987;
int nctemp989=LibeStrcmp(nctemp982,nctemp985);
int nctemp979 = (nctemp989 ==1);
if(nctemp979)
{
rval =432;
}
else{
nctempchar1* nctemp996= ScanText;
struct nctempchar1 *nctemp1001;
static struct nctempchar1 nctemp1002 = {{ 4}, (char*)"int\0"};
nctemp1001=&nctemp1002;
nctempchar1* nctemp999= nctemp1001;
int nctemp1003=LibeStrcmp(nctemp996,nctemp999);
if(nctemp1003)
{
rval =7;
}
else{
nctempchar1* nctemp1009= ScanText;
struct nctempchar1 *nctemp1014;
static struct nctempchar1 nctemp1015 = {{ 5}, (char*)"char\0"};
nctemp1014=&nctemp1015;
nctempchar1* nctemp1012= nctemp1014;
int nctemp1016=LibeStrcmp(nctemp1009,nctemp1012);
if(nctemp1016)
{
rval =8;
}
else{
nctempchar1* nctemp1022= ScanText;
struct nctempchar1 *nctemp1027;
static struct nctempchar1 nctemp1028 = {{ 6}, (char*)"float\0"};
nctemp1027=&nctemp1028;
nctempchar1* nctemp1025= nctemp1027;
int nctemp1029=LibeStrcmp(nctemp1022,nctemp1025);
if(nctemp1029)
{
rval =9;
}
else{
nctempchar1* nctemp1035= ScanText;
struct nctempchar1 *nctemp1040;
static struct nctempchar1 nctemp1041 = {{ 6}, (char*)"const\0"};
nctemp1040=&nctemp1041;
nctempchar1* nctemp1038= nctemp1040;
int nctemp1042=LibeStrcmp(nctemp1035,nctemp1038);
if(nctemp1042)
{
rval =431;
}
else{
nctempchar1* nctemp1048= ScanText;
struct nctempchar1 *nctemp1053;
static struct nctempchar1 nctemp1054 = {{ 8}, (char*)"complex\0"};
nctemp1053=&nctemp1054;
nctempchar1* nctemp1051= nctemp1053;
int nctemp1055=LibeStrcmp(nctemp1048,nctemp1051);
if(nctemp1055)
{
rval =10;
}
else{
nctempchar1* nctemp1061= ScanText;
struct nctempchar1 *nctemp1066;
static struct nctempchar1 nctemp1067 = {{ 7}, (char*)"struct\0"};
nctemp1066=&nctemp1067;
nctempchar1* nctemp1064= nctemp1066;
int nctemp1068=LibeStrcmp(nctemp1061,nctemp1064);
if(nctemp1068)
{
rval =11;
}
else{
nctempchar1* nctemp1074= ScanText;
struct nctempchar1 *nctemp1079;
static struct nctempchar1 nctemp1080 = {{ 6}, (char*)"class\0"};
nctemp1079=&nctemp1080;
nctempchar1* nctemp1077= nctemp1079;
int nctemp1081=LibeStrcmp(nctemp1074,nctemp1077);
if(nctemp1081)
{
rval =11;
}
else{
nctempchar1* nctemp1087= ScanText;
struct nctempchar1 *nctemp1092;
static struct nctempchar1 nctemp1093 = {{ 6}, (char*)"while\0"};
nctemp1092=&nctemp1093;
nctempchar1* nctemp1090= nctemp1092;
int nctemp1094=LibeStrcmp(nctemp1087,nctemp1090);
if(nctemp1094)
{
rval =12;
}
else{
nctempchar1* nctemp1100= ScanText;
struct nctempchar1 *nctemp1105;
static struct nctempchar1 nctemp1106 = {{ 7}, (char*)"return\0"};
nctemp1105=&nctemp1106;
nctempchar1* nctemp1103= nctemp1105;
int nctemp1107=LibeStrcmp(nctemp1100,nctemp1103);
if(nctemp1107)
{
rval =30;
}
else{
nctempchar1* nctemp1113= ScanText;
struct nctempchar1 *nctemp1118;
static struct nctempchar1 nctemp1119 = {{ 3}, (char*)"if\0"};
nctemp1118=&nctemp1119;
nctempchar1* nctemp1116= nctemp1118;
int nctemp1120=LibeStrcmp(nctemp1113,nctemp1116);
if(nctemp1120)
{
rval =14;
}
else{
nctempchar1* nctemp1126= ScanText;
struct nctempchar1 *nctemp1131;
static struct nctempchar1 nctemp1132 = {{ 5}, (char*)"else\0"};
nctemp1131=&nctemp1132;
nctempchar1* nctemp1129= nctemp1131;
int nctemp1133=LibeStrcmp(nctemp1126,nctemp1129);
if(nctemp1133)
{
rval =15;
}
else{
nctempchar1* nctemp1139= ScanText;
struct nctempchar1 *nctemp1144;
static struct nctempchar1 nctemp1145 = {{ 7}, (char*)"sizeof\0"};
nctemp1144=&nctemp1145;
nctempchar1* nctemp1142= nctemp1144;
int nctemp1146=LibeStrcmp(nctemp1139,nctemp1142);
if(nctemp1146)
{
rval =22;
}
else{
nctempchar1* nctemp1152= ScanText;
struct nctempchar1 *nctemp1157;
static struct nctempchar1 nctemp1158 = {{ 5}, (char*)"cast\0"};
nctemp1157=&nctemp1158;
nctempchar1* nctemp1155= nctemp1157;
int nctemp1159=LibeStrcmp(nctemp1152,nctemp1155);
if(nctemp1159)
{
rval =23;
}
else{
nctempchar1* nctemp1165= ScanText;
struct nctempchar1 *nctemp1170;
static struct nctempchar1 nctemp1171 = {{ 4}, (char*)"new\0"};
nctemp1170=&nctemp1171;
nctempchar1* nctemp1168= nctemp1170;
int nctemp1172=LibeStrcmp(nctemp1165,nctemp1168);
if(nctemp1172)
{
rval =26;
}
else{
nctempchar1* nctemp1178= ScanText;
struct nctempchar1 *nctemp1183;
static struct nctempchar1 nctemp1184 = {{ 7}, (char*)"delete\0"};
nctemp1183=&nctemp1184;
nctempchar1* nctemp1181= nctemp1183;
int nctemp1185=LibeStrcmp(nctemp1178,nctemp1181);
if(nctemp1185)
{
rval =50;
}
else{
nctempchar1* nctemp1191= ScanText;
struct nctempchar1 *nctemp1196;
static struct nctempchar1 nctemp1197 = {{ 4}, (char*)"len\0"};
nctemp1196=&nctemp1197;
nctempchar1* nctemp1194= nctemp1196;
int nctemp1198=LibeStrcmp(nctemp1191,nctemp1194);
if(nctemp1198)
{
rval =29;
}
else{
nctempchar1* nctemp1204= ScanText;
struct nctempchar1 *nctemp1209;
static struct nctempchar1 nctemp1210 = {{ 6}, (char*)"cmplx\0"};
nctemp1209=&nctemp1210;
nctempchar1* nctemp1207= nctemp1209;
int nctemp1211=LibeStrcmp(nctemp1204,nctemp1207);
if(nctemp1211)
{
rval =25;
}
else{
nctempchar1* nctemp1217= ScanText;
struct nctempchar1 *nctemp1222;
static struct nctempchar1 nctemp1223 = {{ 3}, (char*)"re\0"};
nctemp1222=&nctemp1223;
nctempchar1* nctemp1220= nctemp1222;
int nctemp1224=LibeStrcmp(nctemp1217,nctemp1220);
if(nctemp1224)
{
rval =28;
}
else{
nctempchar1* nctemp1230= ScanText;
struct nctempchar1 *nctemp1235;
static struct nctempchar1 nctemp1236 = {{ 3}, (char*)"im\0"};
nctemp1235=&nctemp1236;
nctempchar1* nctemp1233= nctemp1235;
int nctemp1237=LibeStrcmp(nctemp1230,nctemp1233);
if(nctemp1237)
{
rval =27;
}
else{
nctempchar1* nctemp1243= ScanText;
struct nctempchar1 *nctemp1248;
static struct nctempchar1 nctemp1249 = {{ 4}, (char*)"for\0"};
nctemp1248=&nctemp1249;
nctempchar1* nctemp1246= nctemp1248;
int nctemp1250=LibeStrcmp(nctemp1243,nctemp1246);
if(nctemp1250)
{
rval =26;
}
else{
nctempchar1* nctemp1256= ScanText;
struct nctempchar1 *nctemp1261;
static struct nctempchar1 nctemp1262 = {{ 9}, (char*)"parallel\0"};
nctemp1261=&nctemp1262;
nctempchar1* nctemp1259= nctemp1261;
int nctemp1263=LibeStrcmp(nctemp1256,nctemp1259);
if(nctemp1263)
{
rval =31;
}
else{
nctempchar1* nctemp1269= ScanText;
struct nctempchar1 *nctemp1274;
static struct nctempchar1 nctemp1275 = {{ 4}, (char*)"end\0"};
nctemp1274=&nctemp1275;
nctempchar1* nctemp1272= nctemp1274;
int nctemp1276=LibeStrcmp(nctemp1269,nctemp1272);
if(nctemp1276)
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
else{
struct nctempchar1 *nctemp1288;
static struct nctempchar1 nctemp1289 = {{ 14}, (char*)"Invalid token\0"};
nctemp1288=&nctemp1289;
nctempchar1* nctemp1286= nctemp1288;
int nctemp1290=ErrError(nctemp1286);
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
int nctemp1300 = p + 1;
int nctemp1295=nctemp1300;
char nctemp1302=(char)(0);
ScanText->a[nctemp1295] =nctemp1302;
return rval;
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
int ScanGetline ()
{
return ScanLine;
}
int ScanIncline ()
{
int nctemp1322 = ScanLine + 1;
ScanLine =nctemp1322;
return 1;
}
int ScanGetword (nctempchar1 *ttext)
{
int nctemp1325= ScanFp;
nctempchar1* nctemp1327= ttext;
int nctemp1330=LibeGetw(nctemp1325,nctemp1327);
return nctemp1330;
}
int ScanGetch ()
{
int nctemp1332= ScanFp;
int nctemp1334=LibeGetc(nctemp1332);
return nctemp1334;
}
int ScanFtail (int p)
{
int c;
int nctemp1341=ScanGetch();
c =nctemp1341;
int nctemp1336= c;
int nctemp1342=LibeIsdigit(nctemp1336);
int nctemp1343=nctemp1342;
while(nctemp1343)
{{
int nctemp1352 = p + 1;
p =nctemp1352;
int nctemp1357=ScanText->d[0];int nctemp1353 = (p >= nctemp1357);
if(nctemp1353)
{
struct nctempchar1 *nctemp1364;
static struct nctempchar1 nctemp1365 = {{ 18}, (char*)"Digit is too long\0"};
nctemp1364=&nctemp1365;
nctempchar1* nctemp1362= nctemp1364;
int nctemp1366=ErrError(nctemp1362);
}
int nctemp1370=p;
char nctemp1373=(char)(c);
ScanText->a[nctemp1370] =nctemp1373;
}
int nctemp1382=ScanGetch();
c =nctemp1382;
int nctemp1377= c;
int nctemp1383=LibeIsdigit(nctemp1377);
nctemp1343=nctemp1383;}int nctemp1387 = (c =='e');
int nctemp1392 = (c =='E');
int nctemp1384 = (nctemp1387 || nctemp1392);
if(nctemp1384)
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
int nctemp1418=ErrError(nctemp1414);
}
int nctemp1422=p;
char nctemp1425=(char)(c);
ScanText->a[nctemp1422] =nctemp1425;
int nctemp1432=ScanGetch();
c =nctemp1432;
int nctemp1436 = (c ==43);
int nctemp1441 = (c ==45);
int nctemp1433 = (nctemp1436 || nctemp1441);
if(nctemp1433)
{
int nctemp1453 = p + 1;
p =nctemp1453;
int nctemp1458=ScanText->d[0];int nctemp1454 = (p >= nctemp1458);
if(nctemp1454)
{
struct nctempchar1 *nctemp1465;
static struct nctempchar1 nctemp1466 = {{ 18}, (char*)"Digit is too long\0"};
nctemp1465=&nctemp1466;
nctempchar1* nctemp1463= nctemp1465;
int nctemp1467=ErrError(nctemp1463);
}
int nctemp1471=p;
char nctemp1474=(char)(c);
ScanText->a[nctemp1471] =nctemp1474;
int nctemp1483=ScanGetch();
c =nctemp1483;
int nctemp1478= c;
int nctemp1484=LibeIsdigit(nctemp1478);
int nctemp1485=nctemp1484;
while(nctemp1485)
{{
int nctemp1494 = p + 1;
p =nctemp1494;
int nctemp1499=ScanText->d[0];int nctemp1495 = (p >= nctemp1499);
if(nctemp1495)
{
struct nctempchar1 *nctemp1506;
static struct nctempchar1 nctemp1507 = {{ 18}, (char*)"Digit is too long\0"};
nctemp1506=&nctemp1507;
nctempchar1* nctemp1504= nctemp1506;
int nctemp1508=ErrError(nctemp1504);
}
int nctemp1512=p;
char nctemp1515=(char)(c);
ScanText->a[nctemp1512] =nctemp1515;
}
int nctemp1524=ScanGetch();
c =nctemp1524;
int nctemp1519= c;
int nctemp1525=LibeIsdigit(nctemp1519);
nctemp1485=nctemp1525;}int nctemp1527=ScanUngetch();
int nctemp1536 = p + 1;
int nctemp1531=nctemp1536;
char nctemp1538=(char)(0);
ScanText->a[nctemp1531] =nctemp1538;
return p;
}
else{
struct nctempchar1 *nctemp1545;
static struct nctempchar1 nctemp1546 = {{ 14}, (char*)"Unknown token\0"};
nctemp1545=&nctemp1546;
nctempchar1* nctemp1543= nctemp1545;
int nctemp1547=ErrError(nctemp1543);
}
return 0;
}
else{
int nctemp1550=ScanUngetch();
int nctemp1559 = p + 1;
int nctemp1554=nctemp1559;
char nctemp1561=(char)(0);
ScanText->a[nctemp1554] =nctemp1561;
return p;
}
}
int ScanUngetch ()
{
int nctemp1566= ScanFp;
int nctemp1568=LibeUngetc(nctemp1566);
return nctemp1568;
}
int ScanInclude ()
{
int p;
int c;
int string;
int delimit;
int l;
nctempchar1 *fname;
int nctemp1582=ScanGetch();
c =nctemp1582;
int nctemp1575 = (c ==32);
int nctemp1585 = (c ==9);
int nctemp1572 = (nctemp1575 || nctemp1585);
int nctemp1590 = (c ==10);
int nctemp1569 = (nctemp1572 || nctemp1590);
int nctemp1594=nctemp1569;
while(nctemp1594)
{{
int nctemp1595 = (c ==10);
if(nctemp1595)
{
int nctemp1600=ScanIncline();
}
}
int nctemp1614=ScanGetch();
c =nctemp1614;
int nctemp1607 = (c ==32);
int nctemp1617 = (c ==9);
int nctemp1604 = (nctemp1607 || nctemp1617);
int nctemp1622 = (c ==10);
int nctemp1601 = (nctemp1604 || nctemp1622);
nctemp1594=nctemp1601;}int nctemp1627=ScanUngetch();
int nctemp1635=ScanGetch();
c =nctemp1635;
int nctemp1628 = (c !=34);
if(nctemp1628)
{
int nctemp1637 = (c !='<');
if(nctemp1637)
{
struct nctempchar1 *nctemp1644;
static struct nctempchar1 nctemp1645 = {{ 36}, (char*)"Invalid string in include statement\0"};
nctemp1644=&nctemp1645;
nctempchar1* nctemp1642= nctemp1644;
int nctemp1646=ErrError(nctemp1642);
}
}
int nctemp1647 = (c =='<');
if(nctemp1647)
{
delimit ='>';
}
else{
delimit =34;
}
p =0;
string =1;
int nctemp1667 = (string ==1);
int nctemp1671=nctemp1667;
while(nctemp1671)
{{
int nctemp1679=ScanGetch();
c =nctemp1679;
int nctemp1672 = (c !=delimit);
if(nctemp1672)
{
string =1;
}
else{
string =0;
}
int nctemp1692=p;
char nctemp1695=(char)(c);
ScanText->a[nctemp1692] =nctemp1695;
int nctemp1706 = p + 1;
p =nctemp1706;
int nctemp1714=ScanText->d[0];int nctemp1719 = nctemp1714 - 1;
int nctemp1707 = (p >= nctemp1719);
if(nctemp1707)
{
struct nctempchar1 *nctemp1723;
static struct nctempchar1 nctemp1724 = {{ 19}, (char*)"String is too long\0"};
nctemp1723=&nctemp1724;
nctempchar1* nctemp1721= nctemp1723;
int nctemp1725=ErrError(nctemp1721);
}
}
int nctemp1726 = (string ==1);
nctemp1671=nctemp1726;}int nctemp1738 = p - 1;
int nctemp1733=nctemp1738;
char nctemp1740=(char)(0);
ScanText->a[nctemp1733] =nctemp1740;
int nctemp1743 = (delimit =='>');
if(nctemp1743)
{
nctempchar1* nctemp1759=ScanPath();
nctempchar1* nctemp1757= nctemp1759;
int nctemp1760=LibeStrlen(nctemp1757);
nctempchar1* nctemp1762= ScanText;
int nctemp1765=LibeStrlen(nctemp1762);
int nctemp1766 = nctemp1760 + nctemp1765;
int nctemp1768 = nctemp1766 + 1;
l =nctemp1768;
int nctemp1775=l;
nctempchar1 *nctemp1774;
nctemp1774=(nctempchar1*)RunMalloc(sizeof(nctempchar1));
nctemp1774->d[0]=l;
nctemp1774->a=(char *)RunMalloc(sizeof(char)*nctemp1775);
fname=nctemp1774;
nctempchar1* nctemp1781=ScanPath();
nctempchar1* nctemp1779= nctemp1781;
nctempchar1* nctemp1782= fname;
int nctemp1785=LibeStrcpy(nctemp1779,nctemp1782);
nctempchar1* nctemp1787= ScanText;
nctempchar1* nctemp1790= fname;
int nctemp1793=LibeStrcat(nctemp1787,nctemp1790);
}
else{
fname=ScanText;
}
nctempchar1* nctemp1804= fname;
struct nctempchar1 *nctemp1809;
static struct nctempchar1 nctemp1810 = {{ 2}, (char*)"r\0"};
nctemp1809=&nctemp1810;
nctempchar1* nctemp1807= nctemp1809;
int nctemp1811=LibeOpen(nctemp1804,nctemp1807);
ScanFp =nctemp1811;
nctempchar1* nctemp1813= fname;
nctempchar1* nctemp1816=ScanSetfile(nctemp1813);
ScanLinesave =ScanLine;
ScanLine =1;
return 1;
}
nctempchar1 * ScanGetfile ()
{
return ScanFile;
}
nctempchar1 * ScanSetfile (nctempchar1 *fname)
{
nctempchar1 *nctemp1829 =ScanFile;
int nctemp1828 =(nctemp1829!=0);
if(nctemp1828)
{
RunFree(ScanFile->a);
RunFree(ScanFile);
}
nctempchar1* nctemp1841= fname;
nctempchar1* nctemp1844=LibeStrsave(nctemp1841);
ScanFile=nctemp1844;
return ScanFile;
}
int ScanWhite ()
{
int c;
int nctemp1860=ScanGetch();
c =nctemp1860;
int nctemp1853 = (c ==32);
int nctemp1863 = (c ==9);
int nctemp1850 = (nctemp1853 || nctemp1863);
int nctemp1868 = (c ==10);
int nctemp1847 = (nctemp1850 || nctemp1868);
int nctemp1872=nctemp1847;
while(nctemp1872)
{{
int nctemp1873 = (c ==10);
if(nctemp1873)
{
int nctemp1878=ScanIncline();
}
}
int nctemp1892=ScanGetch();
c =nctemp1892;
int nctemp1885 = (c ==32);
int nctemp1895 = (c ==9);
int nctemp1882 = (nctemp1885 || nctemp1895);
int nctemp1900 = (c ==10);
int nctemp1879 = (nctemp1882 || nctemp1900);
nctemp1872=nctemp1879;}int nctemp1905=ScanUngetch();
return 1;
}
int ScanComment ()
{
int incomment;
int c;
incomment =1;
int nctemp1911 = (incomment ==1);
int nctemp1915=nctemp1911;
while(nctemp1915)
{{
int nctemp1920=ScanGetch();
c =nctemp1920;
int nctemp1921 = (c ==10);
if(nctemp1921)
{
int nctemp1926=ScanIncline();
}
int nctemp1927 = (c =='*');
if(nctemp1927)
{
int nctemp1935=ScanGetch();
c =nctemp1935;
int nctemp1936 = (c ==10);
if(nctemp1936)
{
int nctemp1941=ScanIncline();
}
int nctemp1942 = (c =='/');
if(nctemp1942)
{
incomment =0;
}
}
int nctemp1950 = (c ==(-1));
if(nctemp1950)
{
struct nctempchar1 *nctemp1957;
static struct nctempchar1 nctemp1958 = {{ 24}, (char*)"Closing comment missing\0"};
nctemp1957=&nctemp1958;
nctempchar1* nctemp1955= nctemp1957;
int nctemp1959=ErrPanic(nctemp1955);
}
}
int nctemp1960 = (incomment ==1);
nctemp1915=nctemp1960;}return 1;
}
int ScanLcomment ()
{
int incomment;
int c;
incomment =1;
int nctemp1969 = (incomment ==1);
int nctemp1973=nctemp1969;
while(nctemp1973)
{{
int nctemp1978=ScanGetch();
c =nctemp1978;
int nctemp1979 = (c ==10);
if(nctemp1979)
{
int nctemp1984=ScanIncline();
incomment =0;
}
}
int nctemp1989 = (incomment ==1);
nctemp1973=nctemp1989;}return 1;
}
