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
static struct nctempchar1 nctemp1080 = {{ 6}, (char*)"while\0"};
nctemp1079=&nctemp1080;
nctempchar1* nctemp1077= nctemp1079;
int nctemp1081=LibeStrcmp(nctemp1074,nctemp1077);
if(nctemp1081)
{
rval =12;
}
else{
nctempchar1* nctemp1087= ScanText;
struct nctempchar1 *nctemp1092;
static struct nctempchar1 nctemp1093 = {{ 7}, (char*)"return\0"};
nctemp1092=&nctemp1093;
nctempchar1* nctemp1090= nctemp1092;
int nctemp1094=LibeStrcmp(nctemp1087,nctemp1090);
if(nctemp1094)
{
rval =30;
}
else{
nctempchar1* nctemp1100= ScanText;
struct nctempchar1 *nctemp1105;
static struct nctempchar1 nctemp1106 = {{ 3}, (char*)"if\0"};
nctemp1105=&nctemp1106;
nctempchar1* nctemp1103= nctemp1105;
int nctemp1107=LibeStrcmp(nctemp1100,nctemp1103);
if(nctemp1107)
{
rval =14;
}
else{
nctempchar1* nctemp1113= ScanText;
struct nctempchar1 *nctemp1118;
static struct nctempchar1 nctemp1119 = {{ 5}, (char*)"else\0"};
nctemp1118=&nctemp1119;
nctempchar1* nctemp1116= nctemp1118;
int nctemp1120=LibeStrcmp(nctemp1113,nctemp1116);
if(nctemp1120)
{
rval =15;
}
else{
nctempchar1* nctemp1126= ScanText;
struct nctempchar1 *nctemp1131;
static struct nctempchar1 nctemp1132 = {{ 7}, (char*)"sizeof\0"};
nctemp1131=&nctemp1132;
nctempchar1* nctemp1129= nctemp1131;
int nctemp1133=LibeStrcmp(nctemp1126,nctemp1129);
if(nctemp1133)
{
rval =22;
}
else{
nctempchar1* nctemp1139= ScanText;
struct nctempchar1 *nctemp1144;
static struct nctempchar1 nctemp1145 = {{ 5}, (char*)"cast\0"};
nctemp1144=&nctemp1145;
nctempchar1* nctemp1142= nctemp1144;
int nctemp1146=LibeStrcmp(nctemp1139,nctemp1142);
if(nctemp1146)
{
rval =23;
}
else{
nctempchar1* nctemp1152= ScanText;
struct nctempchar1 *nctemp1157;
static struct nctempchar1 nctemp1158 = {{ 4}, (char*)"new\0"};
nctemp1157=&nctemp1158;
nctempchar1* nctemp1155= nctemp1157;
int nctemp1159=LibeStrcmp(nctemp1152,nctemp1155);
if(nctemp1159)
{
rval =26;
}
else{
nctempchar1* nctemp1165= ScanText;
struct nctempchar1 *nctemp1170;
static struct nctempchar1 nctemp1171 = {{ 7}, (char*)"delete\0"};
nctemp1170=&nctemp1171;
nctempchar1* nctemp1168= nctemp1170;
int nctemp1172=LibeStrcmp(nctemp1165,nctemp1168);
if(nctemp1172)
{
rval =50;
}
else{
nctempchar1* nctemp1178= ScanText;
struct nctempchar1 *nctemp1183;
static struct nctempchar1 nctemp1184 = {{ 4}, (char*)"len\0"};
nctemp1183=&nctemp1184;
nctempchar1* nctemp1181= nctemp1183;
int nctemp1185=LibeStrcmp(nctemp1178,nctemp1181);
if(nctemp1185)
{
rval =29;
}
else{
nctempchar1* nctemp1191= ScanText;
struct nctempchar1 *nctemp1196;
static struct nctempchar1 nctemp1197 = {{ 6}, (char*)"cmplx\0"};
nctemp1196=&nctemp1197;
nctempchar1* nctemp1194= nctemp1196;
int nctemp1198=LibeStrcmp(nctemp1191,nctemp1194);
if(nctemp1198)
{
rval =25;
}
else{
nctempchar1* nctemp1204= ScanText;
struct nctempchar1 *nctemp1209;
static struct nctempchar1 nctemp1210 = {{ 3}, (char*)"re\0"};
nctemp1209=&nctemp1210;
nctempchar1* nctemp1207= nctemp1209;
int nctemp1211=LibeStrcmp(nctemp1204,nctemp1207);
if(nctemp1211)
{
rval =28;
}
else{
nctempchar1* nctemp1217= ScanText;
struct nctempchar1 *nctemp1222;
static struct nctempchar1 nctemp1223 = {{ 3}, (char*)"im\0"};
nctemp1222=&nctemp1223;
nctempchar1* nctemp1220= nctemp1222;
int nctemp1224=LibeStrcmp(nctemp1217,nctemp1220);
if(nctemp1224)
{
rval =27;
}
else{
nctempchar1* nctemp1230= ScanText;
struct nctempchar1 *nctemp1235;
static struct nctempchar1 nctemp1236 = {{ 4}, (char*)"for\0"};
nctemp1235=&nctemp1236;
nctempchar1* nctemp1233= nctemp1235;
int nctemp1237=LibeStrcmp(nctemp1230,nctemp1233);
if(nctemp1237)
{
rval =26;
}
else{
nctempchar1* nctemp1243= ScanText;
struct nctempchar1 *nctemp1248;
static struct nctempchar1 nctemp1249 = {{ 9}, (char*)"parallel\0"};
nctemp1248=&nctemp1249;
nctempchar1* nctemp1246= nctemp1248;
int nctemp1250=LibeStrcmp(nctemp1243,nctemp1246);
if(nctemp1250)
{
rval =31;
}
else{
nctempchar1* nctemp1256= ScanText;
struct nctempchar1 *nctemp1261;
static struct nctempchar1 nctemp1262 = {{ 4}, (char*)"end\0"};
nctemp1261=&nctemp1262;
nctempchar1* nctemp1259= nctemp1261;
int nctemp1263=LibeStrcmp(nctemp1256,nctemp1259);
if(nctemp1263)
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
else{
struct nctempchar1 *nctemp1275;
static struct nctempchar1 nctemp1276 = {{ 14}, (char*)"Invalid token\0"};
nctemp1275=&nctemp1276;
nctempchar1* nctemp1273= nctemp1275;
int nctemp1277=ErrError(nctemp1273);
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
int nctemp1287 = p + 1;
int nctemp1282=nctemp1287;
char nctemp1289=(char)(0);
ScanText->a[nctemp1282] =nctemp1289;
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
int nctemp1309 = ScanLine + 1;
ScanLine =nctemp1309;
return 1;
}
int ScanGetword (nctempchar1 *ttext)
{
int nctemp1312= ScanFp;
nctempchar1* nctemp1314= ttext;
int nctemp1317=LibeGetw(nctemp1312,nctemp1314);
return nctemp1317;
}
int ScanGetch ()
{
int nctemp1319= ScanFp;
int nctemp1321=LibeGetc(nctemp1319);
return nctemp1321;
}
int ScanFtail (int p)
{
int c;
int nctemp1328=ScanGetch();
c =nctemp1328;
int nctemp1323= c;
int nctemp1329=LibeIsdigit(nctemp1323);
int nctemp1330=nctemp1329;
while(nctemp1330)
{{
int nctemp1339 = p + 1;
p =nctemp1339;
int nctemp1344=ScanText->d[0];int nctemp1340 = (p >= nctemp1344);
if(nctemp1340)
{
struct nctempchar1 *nctemp1351;
static struct nctempchar1 nctemp1352 = {{ 18}, (char*)"Digit is too long\0"};
nctemp1351=&nctemp1352;
nctempchar1* nctemp1349= nctemp1351;
int nctemp1353=ErrError(nctemp1349);
}
int nctemp1357=p;
char nctemp1360=(char)(c);
ScanText->a[nctemp1357] =nctemp1360;
}
int nctemp1369=ScanGetch();
c =nctemp1369;
int nctemp1364= c;
int nctemp1370=LibeIsdigit(nctemp1364);
nctemp1330=nctemp1370;}int nctemp1374 = (c =='e');
int nctemp1379 = (c =='E');
int nctemp1371 = (nctemp1374 || nctemp1379);
if(nctemp1371)
{
int nctemp1391 = p + 1;
p =nctemp1391;
int nctemp1396=ScanText->d[0];int nctemp1392 = (p >= nctemp1396);
if(nctemp1392)
{
struct nctempchar1 *nctemp1403;
static struct nctempchar1 nctemp1404 = {{ 18}, (char*)"Digit is too long\0"};
nctemp1403=&nctemp1404;
nctempchar1* nctemp1401= nctemp1403;
int nctemp1405=ErrError(nctemp1401);
}
int nctemp1409=p;
char nctemp1412=(char)(c);
ScanText->a[nctemp1409] =nctemp1412;
int nctemp1419=ScanGetch();
c =nctemp1419;
int nctemp1423 = (c ==43);
int nctemp1428 = (c ==45);
int nctemp1420 = (nctemp1423 || nctemp1428);
if(nctemp1420)
{
int nctemp1440 = p + 1;
p =nctemp1440;
int nctemp1445=ScanText->d[0];int nctemp1441 = (p >= nctemp1445);
if(nctemp1441)
{
struct nctempchar1 *nctemp1452;
static struct nctempchar1 nctemp1453 = {{ 18}, (char*)"Digit is too long\0"};
nctemp1452=&nctemp1453;
nctempchar1* nctemp1450= nctemp1452;
int nctemp1454=ErrError(nctemp1450);
}
int nctemp1458=p;
char nctemp1461=(char)(c);
ScanText->a[nctemp1458] =nctemp1461;
int nctemp1470=ScanGetch();
c =nctemp1470;
int nctemp1465= c;
int nctemp1471=LibeIsdigit(nctemp1465);
int nctemp1472=nctemp1471;
while(nctemp1472)
{{
int nctemp1481 = p + 1;
p =nctemp1481;
int nctemp1486=ScanText->d[0];int nctemp1482 = (p >= nctemp1486);
if(nctemp1482)
{
struct nctempchar1 *nctemp1493;
static struct nctempchar1 nctemp1494 = {{ 18}, (char*)"Digit is too long\0"};
nctemp1493=&nctemp1494;
nctempchar1* nctemp1491= nctemp1493;
int nctemp1495=ErrError(nctemp1491);
}
int nctemp1499=p;
char nctemp1502=(char)(c);
ScanText->a[nctemp1499] =nctemp1502;
}
int nctemp1511=ScanGetch();
c =nctemp1511;
int nctemp1506= c;
int nctemp1512=LibeIsdigit(nctemp1506);
nctemp1472=nctemp1512;}int nctemp1514=ScanUngetch();
int nctemp1523 = p + 1;
int nctemp1518=nctemp1523;
char nctemp1525=(char)(0);
ScanText->a[nctemp1518] =nctemp1525;
return p;
}
else{
struct nctempchar1 *nctemp1532;
static struct nctempchar1 nctemp1533 = {{ 14}, (char*)"Unknown token\0"};
nctemp1532=&nctemp1533;
nctempchar1* nctemp1530= nctemp1532;
int nctemp1534=ErrError(nctemp1530);
}
return 0;
}
else{
int nctemp1537=ScanUngetch();
int nctemp1546 = p + 1;
int nctemp1541=nctemp1546;
char nctemp1548=(char)(0);
ScanText->a[nctemp1541] =nctemp1548;
return p;
}
}
int ScanUngetch ()
{
int nctemp1553= ScanFp;
int nctemp1555=LibeUngetc(nctemp1553);
return nctemp1555;
}
int ScanInclude ()
{
int p;
int c;
int string;
int delimit;
int l;
nctempchar1 *fname;
int nctemp1569=ScanGetch();
c =nctemp1569;
int nctemp1562 = (c ==32);
int nctemp1572 = (c ==9);
int nctemp1559 = (nctemp1562 || nctemp1572);
int nctemp1577 = (c ==10);
int nctemp1556 = (nctemp1559 || nctemp1577);
int nctemp1581=nctemp1556;
while(nctemp1581)
{{
int nctemp1582 = (c ==10);
if(nctemp1582)
{
int nctemp1587=ScanIncline();
}
}
int nctemp1601=ScanGetch();
c =nctemp1601;
int nctemp1594 = (c ==32);
int nctemp1604 = (c ==9);
int nctemp1591 = (nctemp1594 || nctemp1604);
int nctemp1609 = (c ==10);
int nctemp1588 = (nctemp1591 || nctemp1609);
nctemp1581=nctemp1588;}int nctemp1614=ScanUngetch();
int nctemp1622=ScanGetch();
c =nctemp1622;
int nctemp1615 = (c !=34);
if(nctemp1615)
{
int nctemp1624 = (c !='<');
if(nctemp1624)
{
struct nctempchar1 *nctemp1631;
static struct nctempchar1 nctemp1632 = {{ 36}, (char*)"Invalid string in include statement\0"};
nctemp1631=&nctemp1632;
nctempchar1* nctemp1629= nctemp1631;
int nctemp1633=ErrError(nctemp1629);
}
}
int nctemp1634 = (c =='<');
if(nctemp1634)
{
delimit ='>';
}
else{
delimit =34;
}
p =0;
string =1;
int nctemp1654 = (string ==1);
int nctemp1658=nctemp1654;
while(nctemp1658)
{{
int nctemp1666=ScanGetch();
c =nctemp1666;
int nctemp1659 = (c !=delimit);
if(nctemp1659)
{
string =1;
}
else{
string =0;
}
int nctemp1679=p;
char nctemp1682=(char)(c);
ScanText->a[nctemp1679] =nctemp1682;
int nctemp1693 = p + 1;
p =nctemp1693;
int nctemp1701=ScanText->d[0];int nctemp1706 = nctemp1701 - 1;
int nctemp1694 = (p >= nctemp1706);
if(nctemp1694)
{
struct nctempchar1 *nctemp1710;
static struct nctempchar1 nctemp1711 = {{ 19}, (char*)"String is too long\0"};
nctemp1710=&nctemp1711;
nctempchar1* nctemp1708= nctemp1710;
int nctemp1712=ErrError(nctemp1708);
}
}
int nctemp1713 = (string ==1);
nctemp1658=nctemp1713;}int nctemp1725 = p - 1;
int nctemp1720=nctemp1725;
char nctemp1727=(char)(0);
ScanText->a[nctemp1720] =nctemp1727;
int nctemp1730 = (delimit =='>');
if(nctemp1730)
{
nctempchar1* nctemp1746=ScanPath();
nctempchar1* nctemp1744= nctemp1746;
int nctemp1747=LibeStrlen(nctemp1744);
nctempchar1* nctemp1749= ScanText;
int nctemp1752=LibeStrlen(nctemp1749);
int nctemp1753 = nctemp1747 + nctemp1752;
int nctemp1755 = nctemp1753 + 1;
l =nctemp1755;
int nctemp1762=l;
nctempchar1 *nctemp1761;
nctemp1761=(nctempchar1*)RunMalloc(sizeof(nctempchar1));
nctemp1761->d[0]=l;
nctemp1761->a=(char *)RunMalloc(sizeof(char)*nctemp1762);
fname=nctemp1761;
nctempchar1* nctemp1768=ScanPath();
nctempchar1* nctemp1766= nctemp1768;
nctempchar1* nctemp1769= fname;
int nctemp1772=LibeStrcpy(nctemp1766,nctemp1769);
nctempchar1* nctemp1774= ScanText;
nctempchar1* nctemp1777= fname;
int nctemp1780=LibeStrcat(nctemp1774,nctemp1777);
}
else{
fname=ScanText;
}
nctempchar1* nctemp1791= fname;
struct nctempchar1 *nctemp1796;
static struct nctempchar1 nctemp1797 = {{ 2}, (char*)"r\0"};
nctemp1796=&nctemp1797;
nctempchar1* nctemp1794= nctemp1796;
int nctemp1798=LibeOpen(nctemp1791,nctemp1794);
ScanFp =nctemp1798;
nctempchar1* nctemp1800= fname;
nctempchar1* nctemp1803=ScanSetfile(nctemp1800);
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
nctempchar1 *nctemp1816 =ScanFile;
int nctemp1815 =(nctemp1816!=0);
if(nctemp1815)
{
RunFree(ScanFile->a);
RunFree(ScanFile);
}
nctempchar1* nctemp1828= fname;
nctempchar1* nctemp1831=LibeStrsave(nctemp1828);
ScanFile=nctemp1831;
return ScanFile;
}
int ScanWhite ()
{
int c;
int nctemp1847=ScanGetch();
c =nctemp1847;
int nctemp1840 = (c ==32);
int nctemp1850 = (c ==9);
int nctemp1837 = (nctemp1840 || nctemp1850);
int nctemp1855 = (c ==10);
int nctemp1834 = (nctemp1837 || nctemp1855);
int nctemp1859=nctemp1834;
while(nctemp1859)
{{
int nctemp1860 = (c ==10);
if(nctemp1860)
{
int nctemp1865=ScanIncline();
}
}
int nctemp1879=ScanGetch();
c =nctemp1879;
int nctemp1872 = (c ==32);
int nctemp1882 = (c ==9);
int nctemp1869 = (nctemp1872 || nctemp1882);
int nctemp1887 = (c ==10);
int nctemp1866 = (nctemp1869 || nctemp1887);
nctemp1859=nctemp1866;}int nctemp1892=ScanUngetch();
return 1;
}
int ScanComment ()
{
int incomment;
int c;
incomment =1;
int nctemp1898 = (incomment ==1);
int nctemp1902=nctemp1898;
while(nctemp1902)
{{
int nctemp1907=ScanGetch();
c =nctemp1907;
int nctemp1908 = (c ==10);
if(nctemp1908)
{
int nctemp1913=ScanIncline();
}
int nctemp1914 = (c =='*');
if(nctemp1914)
{
int nctemp1922=ScanGetch();
c =nctemp1922;
int nctemp1923 = (c ==10);
if(nctemp1923)
{
int nctemp1928=ScanIncline();
}
int nctemp1929 = (c =='/');
if(nctemp1929)
{
incomment =0;
}
}
int nctemp1937 = (c ==(-1));
if(nctemp1937)
{
struct nctempchar1 *nctemp1944;
static struct nctempchar1 nctemp1945 = {{ 24}, (char*)"Closing comment missing\0"};
nctemp1944=&nctemp1945;
nctempchar1* nctemp1942= nctemp1944;
int nctemp1946=ErrPanic(nctemp1942);
}
}
int nctemp1947 = (incomment ==1);
nctemp1902=nctemp1947;}return 1;
}
int ScanLcomment ()
{
int incomment;
int c;
incomment =1;
int nctemp1956 = (incomment ==1);
int nctemp1960=nctemp1956;
while(nctemp1960)
{{
int nctemp1965=ScanGetch();
c =nctemp1965;
int nctemp1966 = (c ==10);
if(nctemp1966)
{
int nctemp1971=ScanIncline();
incomment =0;
}
}
int nctemp1976 = (incomment ==1);
nctemp1960=nctemp1976;}return 1;
}
