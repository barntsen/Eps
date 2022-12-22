/*  Translated by epsc  version December 2021 */
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
extern "C" {
#include <stdlib.h>
#include <string.h>
}
#define NBLOCKS 256
#define NTHREADS 64000
void *GpuNew(int n);
void *GpuDelete(void *f);
void *GpuError();
int LibeArrayex (int line,nctempchar1 *name,int ival,int index,int bound);
int LibeClearerr ();
int LibeGeterrno ();
nctempchar1* LibeGeterrstr ();
struct MainArg {nctempchar1 *arg;
};
struct nctempMainArg1 {int d[1]; struct MainArg *a; } ;
struct nctempMainArg2 {int d[2]; struct MainArg *a; } ;
struct nctempMainArg3 {int d[3]; struct MainArg *a; } ;
struct nctempMainArg4 {int d[4]; struct MainArg *a; } ;
int Main (struct nctempMainArg1 *MainArgs);
int LibeInit ();
int LibeExit ();
nctempchar1* LibeGetenv (nctempchar1 *name);
int LibeOpen (nctempchar1 *name,nctempchar1 *mode);
int LibeClose (int fp);
int LibeGetc (int fp);
int LibeUngetc (int fp);
int LibeGetw (int fp,nctempchar1 *text);
int LibePutc (int fp,int c);
int LibePuts (int fp,nctempchar1 *s);
int LibePuti (int fp,int ival);
int LibePutf (int fp,float fval);
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
int LibeClock ();
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
struct nctemptree1 {int d[1]; struct tree *a; } ;
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
nctemp6=(nctempchar1*)GpuNew(sizeof(nctempchar1));
nctemp6->d[0]=4096;
nctemp6->a=(char *)GpuNew(sizeof(char)*nctemp7);
ScanText=nctemp6;
int nctemp16=4096;
nctempchar1 *nctemp15;
nctemp15=(nctempchar1*)GpuNew(sizeof(nctempchar1));
nctemp15->d[0]=4096;
nctemp15->a=(char *)GpuNew(sizeof(char)*nctemp16);
ScanBuffer=nctemp15;
nctempchar1* nctemp23= infile;
struct nctempchar1 *nctemp28;
struct nctempchar1 nctemp29 = {{ 2}, (char*)"r"};
nctemp28=&nctemp29;
nctempchar1* nctemp26= nctemp28;
int nctemp30=LibeOpen(nctemp23,nctemp26);
ScanInfile =nctemp30;
int nctemp31 = (ScanInfile ==0);
if(nctemp31)
{
int nctemp36= 4;
struct nctempchar1 *nctemp40;
struct nctempchar1 nctemp41 = {{ 26}, (char*)"Can not open input file: "};
nctemp40=&nctemp41;
nctempchar1* nctemp38= nctemp40;
int nctemp42=LibePuts(nctemp36,nctemp38);
int nctemp44= 4;
nctempchar1* nctemp46= infile;
int nctemp49=LibePuts(nctemp44,nctemp46);
int nctemp51= 4;
struct nctempchar1 *nctemp55;
struct nctempchar1 nctemp56 = {{ 3}, (char*)"\n"};
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
int nctemp156 = (c =='/');
if(nctemp156)
{
int nctemp164=ScanGetch();
c =nctemp164;
int nctemp165 = (c =='*');
if(nctemp165)
{
int nctemp170=ScanComment();
int nctemp172=ScanWhite();
int nctemp177=ScanGetch();
c =nctemp177;
int nctemp181=p;
char nctemp184=(char)(c);
ScanText->a[nctemp181] =nctemp184;
}
else{
int nctemp187 = (c =='/');
if(nctemp187)
{
int nctemp192=ScanLcomment();
int nctemp194=ScanWhite();
int nctemp199=ScanGetch();
c =nctemp199;
int nctemp203=p;
char nctemp206=(char)(c);
ScanText->a[nctemp203] =nctemp206;
}
else{
int nctemp210=ScanUngetch();
c ='/';
comments =0;
}
}
}
else{
comments =0;
}
}
int nctemp223 = (comments ==1);
nctemp155=nctemp223;}int nctemp227 = (c ==(-1));
if(nctemp227)
{
rval =19;
return rval;
}
int nctemp236 = (c ==43);
if(nctemp236)
{
rval =43;
}
else{
int nctemp244 = (c ==42);
if(nctemp244)
{
rval =42;
}
else{
int nctemp252 = (c ==47);
if(nctemp252)
{
rval =47;
}
else{
int nctemp260 = (c ==40);
if(nctemp260)
{
rval =40;
}
else{
int nctemp268 = (c ==41);
if(nctemp268)
{
rval =41;
}
else{
int nctemp276 = (c ==93);
if(nctemp276)
{
rval =93;
}
else{
int nctemp284 = (c ==91);
if(nctemp284)
{
rval =91;
}
else{
int nctemp292 = (c ==123);
if(nctemp292)
{
rval =123;
}
else{
int nctemp300 = (c ==125);
if(nctemp300)
{
rval =125;
}
else{
int nctemp308 = (c ==58);
if(nctemp308)
{
rval =58;
}
else{
int nctemp316 = (c ==59);
if(nctemp316)
{
rval =59;
}
else{
int nctemp324 = (c ==44);
if(nctemp324)
{
rval =44;
}
else{
int nctemp332 = (c ==46);
if(nctemp332)
{
rval =46;
}
else{
int nctemp340 = (c ==60);
if(nctemp340)
{
int nctemp351=ScanGetch();
c =nctemp351;
int nctemp344 = (c ==61);
if(nctemp344)
{
rval =20;
int nctemp365 = p + 1;
p =nctemp365;
int nctemp369=p;
char nctemp372=(char)(c);
ScanText->a[nctemp369] =nctemp372;
}
else{
int nctemp376=ScanUngetch();
rval =60;
}
}
else{
int nctemp381 = (c ==62);
if(nctemp381)
{
int nctemp392=ScanGetch();
c =nctemp392;
int nctemp385 = (c ==61);
if(nctemp385)
{
rval =21;
int nctemp406 = p + 1;
p =nctemp406;
int nctemp410=p;
char nctemp413=(char)(c);
ScanText->a[nctemp410] =nctemp413;
}
else{
int nctemp417=ScanUngetch();
rval =62;
}
}
else{
int nctemp422 = (c ==45);
if(nctemp422)
{
int nctemp433=ScanGetch();
c =nctemp433;
int nctemp426 = (c ==62);
if(nctemp426)
{
rval =2;
int nctemp447 = p + 1;
p =nctemp447;
int nctemp451=p;
char nctemp454=(char)(c);
ScanText->a[nctemp451] =nctemp454;
}
else{
int nctemp458=ScanUngetch();
rval =45;
}
}
else{
int nctemp463 = (c ==124);
if(nctemp463)
{
int nctemp474=ScanGetch();
c =nctemp474;
int nctemp467 = (c ==124);
if(nctemp467)
{
rval =5;
int nctemp488 = p + 1;
p =nctemp488;
int nctemp492=p;
char nctemp495=(char)(c);
ScanText->a[nctemp492] =nctemp495;
}
else{
struct nctempchar1 *nctemp501;
struct nctempchar1 nctemp502 = {{ 18}, (char*)"Illegal character"};
nctemp501=&nctemp502;
nctempchar1* nctemp499= nctemp501;
int nctemp503=ErrError(nctemp499);
}
}
else{
int nctemp504 = (c ==38);
if(nctemp504)
{
int nctemp515=ScanGetch();
c =nctemp515;
int nctemp508 = (c ==38);
if(nctemp508)
{
rval =6;
int nctemp529 = p + 1;
p =nctemp529;
int nctemp533=p;
char nctemp536=(char)(c);
ScanText->a[nctemp533] =nctemp536;
}
else{
struct nctempchar1 *nctemp542;
struct nctempchar1 nctemp543 = {{ 18}, (char*)"Illegal character"};
nctemp542=&nctemp543;
nctempchar1* nctemp540= nctemp542;
int nctemp544=ErrError(nctemp540);
}
}
else{
int nctemp545 = (c ==33);
if(nctemp545)
{
int nctemp556=ScanGetch();
c =nctemp556;
int nctemp549 = (c ==61);
if(nctemp549)
{
rval =4;
int nctemp570 = p + 1;
p =nctemp570;
int nctemp574=p;
char nctemp577=(char)(c);
ScanText->a[nctemp574] =nctemp577;
}
else{
struct nctempchar1 *nctemp583;
struct nctempchar1 nctemp584 = {{ 18}, (char*)"Illegal character"};
nctemp583=&nctemp584;
nctempchar1* nctemp581= nctemp583;
int nctemp585=ErrError(nctemp581);
}
}
else{
int nctemp586 = (c ==61);
if(nctemp586)
{
int nctemp597=ScanGetch();
c =nctemp597;
int nctemp590 = (c ==61);
if(nctemp590)
{
rval =3;
int nctemp611 = p + 1;
p =nctemp611;
int nctemp615=p;
char nctemp618=(char)(c);
ScanText->a[nctemp615] =nctemp618;
}
else{
int nctemp622=ScanUngetch();
rval =61;
}
}
else{
int nctemp627 = (c ==34);
if(nctemp627)
{
int nctemp634=p;
char nctemp637=(char)(34);
ScanText->a[nctemp634] =nctemp637;
int nctemp648 = p + 1;
p =nctemp648;
string =1;
int nctemp653 = (string ==1);
int nctemp657=nctemp653;
while(nctemp657)
{{
int nctemp665=ScanGetch();
c =nctemp665;
int nctemp658 = (c !=34);
if(nctemp658)
{
string =1;
}
else{
int nctemp682 = p - 1;
int nctemp677=nctemp682;
int nctemp674=(int)(ScanText->a[nctemp677]);
int nctemp671 = (nctemp674 ==92);
if(nctemp671)
{
string =1;
}
else{
string =0;
}
}
int nctemp695=p;
char nctemp698=(char)(c);
ScanText->a[nctemp695] =nctemp698;
int nctemp709 = p + 1;
p =nctemp709;
int nctemp717=ScanText->d[0];int nctemp722 = nctemp717 - 1;
int nctemp710 = (p >= nctemp722);
if(nctemp710)
{
struct nctempchar1 *nctemp726;
struct nctempchar1 nctemp727 = {{ 19}, (char*)"String is too long"};
nctemp726=&nctemp727;
nctempchar1* nctemp724= nctemp726;
int nctemp728=ErrError(nctemp724);
}
}
int nctemp729 = (string ==1);
nctemp657=nctemp729;}int nctemp736=p;
char nctemp739=(char)(0);
ScanText->a[nctemp736] =nctemp739;
rval =18;
}
else{
int nctemp746 = (c ==39);
if(nctemp746)
{
int nctemp753=p;
char nctemp756=(char)(39);
ScanText->a[nctemp753] =nctemp756;
int nctemp767 = p + 1;
p =nctemp767;
int nctemp771=p;
int nctemp777=ScanGetch();
char nctemp774=(char)(nctemp777);
ScanText->a[nctemp771] =nctemp774;
int nctemp782=ScanGetch();
c =nctemp782;
int nctemp783 = (c !=39);
if(nctemp783)
{
struct nctempchar1 *nctemp790;
struct nctempchar1 nctemp791 = {{ 31}, (char*)"Character constant is too long"};
nctemp790=&nctemp791;
nctempchar1* nctemp788= nctemp790;
int nctemp792=ErrError(nctemp788);
}
else{
int nctemp801 = p + 1;
p =nctemp801;
int nctemp805=p;
char nctemp808=(char)(c);
ScanText->a[nctemp805] =nctemp808;
}
int nctemp819 = p + 1;
p =nctemp819;
int nctemp823=p;
char nctemp826=(char)(0);
ScanText->a[nctemp823] =nctemp826;
rval =17;
}
else{
int nctemp834= c;
int nctemp836=LibeIsdigit(nctemp834);
if(nctemp836)
{
int nctemp843=ScanGetch();
c =nctemp843;
int nctemp838= c;
int nctemp844=LibeIsdigit(nctemp838);
int nctemp845=nctemp844;
while(nctemp845)
{{
int nctemp854 = p + 1;
p =nctemp854;
int nctemp858=p;
char nctemp861=(char)(c);
ScanText->a[nctemp858] =nctemp861;
int nctemp868=ScanText->d[0];int nctemp864 = (p >= nctemp868);
if(nctemp864)
{
struct nctempchar1 *nctemp875;
struct nctempchar1 nctemp876 = {{ 18}, (char*)"Digit is too long"};
nctemp875=&nctemp876;
nctempchar1* nctemp873= nctemp875;
int nctemp877=ErrError(nctemp873);
}
}
int nctemp884=ScanGetch();
c =nctemp884;
int nctemp879= c;
int nctemp885=LibeIsdigit(nctemp879);
nctemp845=nctemp885;}int nctemp886 = (c ==46);
if(nctemp886)
{
int nctemp898 = p + 1;
p =nctemp898;
int nctemp903=ScanText->d[0];int nctemp899 = (p >= nctemp903);
if(nctemp899)
{
struct nctempchar1 *nctemp910;
struct nctempchar1 nctemp911 = {{ 18}, (char*)"Digit is too long"};
nctemp910=&nctemp911;
nctempchar1* nctemp908= nctemp910;
int nctemp912=ErrError(nctemp908);
}
int nctemp916=p;
char nctemp919=(char)(c);
ScanText->a[nctemp916] =nctemp919;
int nctemp926= p;
int nctemp928=ScanFtail(nctemp926);
p =nctemp928;
rval =24;
}
else{
int nctemp934=ScanUngetch();
int nctemp943 = p + 1;
int nctemp938=nctemp943;
char nctemp945=(char)(0);
ScanText->a[nctemp938] =nctemp945;
rval =17;
}
}
else{
int nctemp953= c;
int nctemp955=LibeIsalnum(nctemp953);
if(nctemp955)
{
int nctemp962=ScanGetch();
c =nctemp962;
int nctemp957= c;
int nctemp963=LibeIsalnum(nctemp957);
int nctemp964=nctemp963;
while(nctemp964)
{{
int nctemp973 = p + 1;
p =nctemp973;
int nctemp977=p;
char nctemp980=(char)(c);
ScanText->a[nctemp977] =nctemp980;
int nctemp987=ScanText->d[0];int nctemp983 = (p >= nctemp987);
if(nctemp983)
{
struct nctempchar1 *nctemp994;
struct nctempchar1 nctemp995 = {{ 23}, (char*)"Identifier is too long"};
nctemp994=&nctemp995;
nctempchar1* nctemp992= nctemp994;
int nctemp996=ErrError(nctemp992);
}
}
int nctemp1003=ScanGetch();
c =nctemp1003;
int nctemp998= c;
int nctemp1004=LibeIsalnum(nctemp998);
nctemp964=nctemp1004;}int nctemp1006=ScanUngetch();
int nctemp1015 = p + 1;
int nctemp1010=nctemp1015;
char nctemp1017=(char)(0);
ScanText->a[nctemp1010] =nctemp1017;
nctempchar1* nctemp1023= ScanText;
struct nctempchar1 *nctemp1028;
struct nctempchar1 nctemp1029 = {{ 8}, (char*)"include"};
nctemp1028=&nctemp1029;
nctempchar1* nctemp1026= nctemp1028;
int nctemp1030=LibeStrcmp(nctemp1023,nctemp1026);
int nctemp1020 = (nctemp1030 ==1);
if(nctemp1020)
{
rval =432;
}
else{
nctempchar1* nctemp1037= ScanText;
struct nctempchar1 *nctemp1042;
struct nctempchar1 nctemp1043 = {{ 4}, (char*)"int"};
nctemp1042=&nctemp1043;
nctempchar1* nctemp1040= nctemp1042;
int nctemp1044=LibeStrcmp(nctemp1037,nctemp1040);
if(nctemp1044)
{
rval =7;
}
else{
nctempchar1* nctemp1050= ScanText;
struct nctempchar1 *nctemp1055;
struct nctempchar1 nctemp1056 = {{ 5}, (char*)"char"};
nctemp1055=&nctemp1056;
nctempchar1* nctemp1053= nctemp1055;
int nctemp1057=LibeStrcmp(nctemp1050,nctemp1053);
if(nctemp1057)
{
rval =8;
}
else{
nctempchar1* nctemp1063= ScanText;
struct nctempchar1 *nctemp1068;
struct nctempchar1 nctemp1069 = {{ 6}, (char*)"float"};
nctemp1068=&nctemp1069;
nctempchar1* nctemp1066= nctemp1068;
int nctemp1070=LibeStrcmp(nctemp1063,nctemp1066);
if(nctemp1070)
{
rval =9;
}
else{
nctempchar1* nctemp1076= ScanText;
struct nctempchar1 *nctemp1081;
struct nctempchar1 nctemp1082 = {{ 6}, (char*)"const"};
nctemp1081=&nctemp1082;
nctempchar1* nctemp1079= nctemp1081;
int nctemp1083=LibeStrcmp(nctemp1076,nctemp1079);
if(nctemp1083)
{
rval =431;
}
else{
nctempchar1* nctemp1089= ScanText;
struct nctempchar1 *nctemp1094;
struct nctempchar1 nctemp1095 = {{ 8}, (char*)"complex"};
nctemp1094=&nctemp1095;
nctempchar1* nctemp1092= nctemp1094;
int nctemp1096=LibeStrcmp(nctemp1089,nctemp1092);
if(nctemp1096)
{
rval =10;
}
else{
nctempchar1* nctemp1102= ScanText;
struct nctempchar1 *nctemp1107;
struct nctempchar1 nctemp1108 = {{ 7}, (char*)"struct"};
nctemp1107=&nctemp1108;
nctempchar1* nctemp1105= nctemp1107;
int nctemp1109=LibeStrcmp(nctemp1102,nctemp1105);
if(nctemp1109)
{
rval =11;
}
else{
nctempchar1* nctemp1115= ScanText;
struct nctempchar1 *nctemp1120;
struct nctempchar1 nctemp1121 = {{ 6}, (char*)"while"};
nctemp1120=&nctemp1121;
nctempchar1* nctemp1118= nctemp1120;
int nctemp1122=LibeStrcmp(nctemp1115,nctemp1118);
if(nctemp1122)
{
rval =12;
}
else{
nctempchar1* nctemp1128= ScanText;
struct nctempchar1 *nctemp1133;
struct nctempchar1 nctemp1134 = {{ 7}, (char*)"return"};
nctemp1133=&nctemp1134;
nctempchar1* nctemp1131= nctemp1133;
int nctemp1135=LibeStrcmp(nctemp1128,nctemp1131);
if(nctemp1135)
{
rval =30;
}
else{
nctempchar1* nctemp1141= ScanText;
struct nctempchar1 *nctemp1146;
struct nctempchar1 nctemp1147 = {{ 3}, (char*)"if"};
nctemp1146=&nctemp1147;
nctempchar1* nctemp1144= nctemp1146;
int nctemp1148=LibeStrcmp(nctemp1141,nctemp1144);
if(nctemp1148)
{
rval =14;
}
else{
nctempchar1* nctemp1154= ScanText;
struct nctempchar1 *nctemp1159;
struct nctempchar1 nctemp1160 = {{ 5}, (char*)"else"};
nctemp1159=&nctemp1160;
nctempchar1* nctemp1157= nctemp1159;
int nctemp1161=LibeStrcmp(nctemp1154,nctemp1157);
if(nctemp1161)
{
rval =15;
}
else{
nctempchar1* nctemp1167= ScanText;
struct nctempchar1 *nctemp1172;
struct nctempchar1 nctemp1173 = {{ 7}, (char*)"sizeof"};
nctemp1172=&nctemp1173;
nctempchar1* nctemp1170= nctemp1172;
int nctemp1174=LibeStrcmp(nctemp1167,nctemp1170);
if(nctemp1174)
{
rval =22;
}
else{
nctempchar1* nctemp1180= ScanText;
struct nctempchar1 *nctemp1185;
struct nctempchar1 nctemp1186 = {{ 5}, (char*)"cast"};
nctemp1185=&nctemp1186;
nctempchar1* nctemp1183= nctemp1185;
int nctemp1187=LibeStrcmp(nctemp1180,nctemp1183);
if(nctemp1187)
{
rval =23;
}
else{
nctempchar1* nctemp1193= ScanText;
struct nctempchar1 *nctemp1198;
struct nctempchar1 nctemp1199 = {{ 4}, (char*)"new"};
nctemp1198=&nctemp1199;
nctempchar1* nctemp1196= nctemp1198;
int nctemp1200=LibeStrcmp(nctemp1193,nctemp1196);
if(nctemp1200)
{
rval =26;
}
else{
nctempchar1* nctemp1206= ScanText;
struct nctempchar1 *nctemp1211;
struct nctempchar1 nctemp1212 = {{ 7}, (char*)"delete"};
nctemp1211=&nctemp1212;
nctempchar1* nctemp1209= nctemp1211;
int nctemp1213=LibeStrcmp(nctemp1206,nctemp1209);
if(nctemp1213)
{
rval =50;
}
else{
nctempchar1* nctemp1219= ScanText;
struct nctempchar1 *nctemp1224;
struct nctempchar1 nctemp1225 = {{ 4}, (char*)"len"};
nctemp1224=&nctemp1225;
nctempchar1* nctemp1222= nctemp1224;
int nctemp1226=LibeStrcmp(nctemp1219,nctemp1222);
if(nctemp1226)
{
rval =29;
}
else{
nctempchar1* nctemp1232= ScanText;
struct nctempchar1 *nctemp1237;
struct nctempchar1 nctemp1238 = {{ 6}, (char*)"cmplx"};
nctemp1237=&nctemp1238;
nctempchar1* nctemp1235= nctemp1237;
int nctemp1239=LibeStrcmp(nctemp1232,nctemp1235);
if(nctemp1239)
{
rval =25;
}
else{
nctempchar1* nctemp1245= ScanText;
struct nctempchar1 *nctemp1250;
struct nctempchar1 nctemp1251 = {{ 3}, (char*)"re"};
nctemp1250=&nctemp1251;
nctempchar1* nctemp1248= nctemp1250;
int nctemp1252=LibeStrcmp(nctemp1245,nctemp1248);
if(nctemp1252)
{
rval =28;
}
else{
nctempchar1* nctemp1258= ScanText;
struct nctempchar1 *nctemp1263;
struct nctempchar1 nctemp1264 = {{ 3}, (char*)"im"};
nctemp1263=&nctemp1264;
nctempchar1* nctemp1261= nctemp1263;
int nctemp1265=LibeStrcmp(nctemp1258,nctemp1261);
if(nctemp1265)
{
rval =27;
}
else{
nctempchar1* nctemp1271= ScanText;
struct nctempchar1 *nctemp1276;
struct nctempchar1 nctemp1277 = {{ 4}, (char*)"for"};
nctemp1276=&nctemp1277;
nctempchar1* nctemp1274= nctemp1276;
int nctemp1278=LibeStrcmp(nctemp1271,nctemp1274);
if(nctemp1278)
{
rval =26;
}
else{
nctempchar1* nctemp1284= ScanText;
struct nctempchar1 *nctemp1289;
struct nctempchar1 nctemp1290 = {{ 9}, (char*)"parallel"};
nctemp1289=&nctemp1290;
nctempchar1* nctemp1287= nctemp1289;
int nctemp1291=LibeStrcmp(nctemp1284,nctemp1287);
if(nctemp1291)
{
rval =31;
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
else{
struct nctempchar1 *nctemp1303;
struct nctempchar1 nctemp1304 = {{ 14}, (char*)"Invalid token"};
nctemp1303=&nctemp1304;
nctempchar1* nctemp1301= nctemp1303;
int nctemp1305=ErrError(nctemp1301);
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
int nctemp1315 = p + 1;
int nctemp1310=nctemp1315;
char nctemp1317=(char)(0);
ScanText->a[nctemp1310] =nctemp1317;
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
int nctemp1337 = ScanLine + 1;
ScanLine =nctemp1337;
return 1;
}
int ScanGetword (nctempchar1 *ttext)
{
int nctemp1340= ScanFp;
nctempchar1* nctemp1342= ttext;
int nctemp1345=LibeGetw(nctemp1340,nctemp1342);
return nctemp1345;
}
int ScanGetch ()
{
int nctemp1347= ScanFp;
int nctemp1349=LibeGetc(nctemp1347);
return nctemp1349;
}
int ScanFtail (int p)
{
int c;
int nctemp1356=ScanGetch();
c =nctemp1356;
int nctemp1351= c;
int nctemp1357=LibeIsdigit(nctemp1351);
int nctemp1358=nctemp1357;
while(nctemp1358)
{{
int nctemp1367 = p + 1;
p =nctemp1367;
int nctemp1372=ScanText->d[0];int nctemp1368 = (p >= nctemp1372);
if(nctemp1368)
{
struct nctempchar1 *nctemp1379;
struct nctempchar1 nctemp1380 = {{ 18}, (char*)"Digit is too long"};
nctemp1379=&nctemp1380;
nctempchar1* nctemp1377= nctemp1379;
int nctemp1381=ErrError(nctemp1377);
}
int nctemp1385=p;
char nctemp1388=(char)(c);
ScanText->a[nctemp1385] =nctemp1388;
}
int nctemp1397=ScanGetch();
c =nctemp1397;
int nctemp1392= c;
int nctemp1398=LibeIsdigit(nctemp1392);
nctemp1358=nctemp1398;}int nctemp1402 = (c =='e');
int nctemp1407 = (c =='E');
int nctemp1399 = (nctemp1402 || nctemp1407);
if(nctemp1399)
{
int nctemp1419 = p + 1;
p =nctemp1419;
int nctemp1424=ScanText->d[0];int nctemp1420 = (p >= nctemp1424);
if(nctemp1420)
{
struct nctempchar1 *nctemp1431;
struct nctempchar1 nctemp1432 = {{ 18}, (char*)"Digit is too long"};
nctemp1431=&nctemp1432;
nctempchar1* nctemp1429= nctemp1431;
int nctemp1433=ErrError(nctemp1429);
}
int nctemp1437=p;
char nctemp1440=(char)(c);
ScanText->a[nctemp1437] =nctemp1440;
int nctemp1447=ScanGetch();
c =nctemp1447;
int nctemp1451 = (c ==43);
int nctemp1456 = (c ==45);
int nctemp1448 = (nctemp1451 || nctemp1456);
if(nctemp1448)
{
int nctemp1468 = p + 1;
p =nctemp1468;
int nctemp1473=ScanText->d[0];int nctemp1469 = (p >= nctemp1473);
if(nctemp1469)
{
struct nctempchar1 *nctemp1480;
struct nctempchar1 nctemp1481 = {{ 18}, (char*)"Digit is too long"};
nctemp1480=&nctemp1481;
nctempchar1* nctemp1478= nctemp1480;
int nctemp1482=ErrError(nctemp1478);
}
int nctemp1486=p;
char nctemp1489=(char)(c);
ScanText->a[nctemp1486] =nctemp1489;
int nctemp1498=ScanGetch();
c =nctemp1498;
int nctemp1493= c;
int nctemp1499=LibeIsdigit(nctemp1493);
int nctemp1500=nctemp1499;
while(nctemp1500)
{{
int nctemp1509 = p + 1;
p =nctemp1509;
int nctemp1514=ScanText->d[0];int nctemp1510 = (p >= nctemp1514);
if(nctemp1510)
{
struct nctempchar1 *nctemp1521;
struct nctempchar1 nctemp1522 = {{ 18}, (char*)"Digit is too long"};
nctemp1521=&nctemp1522;
nctempchar1* nctemp1519= nctemp1521;
int nctemp1523=ErrError(nctemp1519);
}
int nctemp1527=p;
char nctemp1530=(char)(c);
ScanText->a[nctemp1527] =nctemp1530;
}
int nctemp1539=ScanGetch();
c =nctemp1539;
int nctemp1534= c;
int nctemp1540=LibeIsdigit(nctemp1534);
nctemp1500=nctemp1540;}int nctemp1542=ScanUngetch();
int nctemp1551 = p + 1;
int nctemp1546=nctemp1551;
char nctemp1553=(char)(0);
ScanText->a[nctemp1546] =nctemp1553;
return p;
}
else{
struct nctempchar1 *nctemp1560;
struct nctempchar1 nctemp1561 = {{ 14}, (char*)"Unknown token"};
nctemp1560=&nctemp1561;
nctempchar1* nctemp1558= nctemp1560;
int nctemp1562=ErrError(nctemp1558);
}
return 0;
}
else{
int nctemp1565=ScanUngetch();
int nctemp1574 = p + 1;
int nctemp1569=nctemp1574;
char nctemp1576=(char)(0);
ScanText->a[nctemp1569] =nctemp1576;
return p;
}
}
int ScanUngetch ()
{
int nctemp1581= ScanFp;
int nctemp1583=LibeUngetc(nctemp1581);
return nctemp1583;
}
int ScanInclude ()
{
int p;
int c;
int string;
int delimit;
int l;
nctempchar1 *fname;
int nctemp1597=ScanGetch();
c =nctemp1597;
int nctemp1590 = (c ==32);
int nctemp1600 = (c ==9);
int nctemp1587 = (nctemp1590 || nctemp1600);
int nctemp1605 = (c ==10);
int nctemp1584 = (nctemp1587 || nctemp1605);
int nctemp1609=nctemp1584;
while(nctemp1609)
{{
int nctemp1610 = (c ==10);
if(nctemp1610)
{
int nctemp1615=ScanIncline();
}
}
int nctemp1629=ScanGetch();
c =nctemp1629;
int nctemp1622 = (c ==32);
int nctemp1632 = (c ==9);
int nctemp1619 = (nctemp1622 || nctemp1632);
int nctemp1637 = (c ==10);
int nctemp1616 = (nctemp1619 || nctemp1637);
nctemp1609=nctemp1616;}int nctemp1642=ScanUngetch();
int nctemp1650=ScanGetch();
c =nctemp1650;
int nctemp1643 = (c !=34);
if(nctemp1643)
{
int nctemp1652 = (c !='<');
if(nctemp1652)
{
struct nctempchar1 *nctemp1659;
struct nctempchar1 nctemp1660 = {{ 36}, (char*)"Invalid string in include statement"};
nctemp1659=&nctemp1660;
nctempchar1* nctemp1657= nctemp1659;
int nctemp1661=ErrError(nctemp1657);
}
}
int nctemp1662 = (c =='<');
if(nctemp1662)
{
delimit ='>';
}
else{
delimit =34;
}
p =0;
string =1;
int nctemp1682 = (string ==1);
int nctemp1686=nctemp1682;
while(nctemp1686)
{{
int nctemp1694=ScanGetch();
c =nctemp1694;
int nctemp1687 = (c !=delimit);
if(nctemp1687)
{
string =1;
}
else{
string =0;
}
int nctemp1707=p;
char nctemp1710=(char)(c);
ScanText->a[nctemp1707] =nctemp1710;
int nctemp1721 = p + 1;
p =nctemp1721;
int nctemp1729=ScanText->d[0];int nctemp1734 = nctemp1729 - 1;
int nctemp1722 = (p >= nctemp1734);
if(nctemp1722)
{
struct nctempchar1 *nctemp1738;
struct nctempchar1 nctemp1739 = {{ 19}, (char*)"String is too long"};
nctemp1738=&nctemp1739;
nctempchar1* nctemp1736= nctemp1738;
int nctemp1740=ErrError(nctemp1736);
}
}
int nctemp1741 = (string ==1);
nctemp1686=nctemp1741;}int nctemp1753 = p - 1;
int nctemp1748=nctemp1753;
char nctemp1755=(char)(0);
ScanText->a[nctemp1748] =nctemp1755;
int nctemp1758 = (delimit =='>');
if(nctemp1758)
{
nctempchar1* nctemp1774=ScanPath();
nctempchar1* nctemp1772= nctemp1774;
int nctemp1775=LibeStrlen(nctemp1772);
nctempchar1* nctemp1777= ScanText;
int nctemp1780=LibeStrlen(nctemp1777);
int nctemp1781 = nctemp1775 + nctemp1780;
int nctemp1783 = nctemp1781 + 1;
l =nctemp1783;
int nctemp1790=l;
nctempchar1 *nctemp1789;
nctemp1789=(nctempchar1*)GpuNew(sizeof(nctempchar1));
nctemp1789->d[0]=l;
nctemp1789->a=(char *)GpuNew(sizeof(char)*nctemp1790);
fname=nctemp1789;
nctempchar1* nctemp1796=ScanPath();
nctempchar1* nctemp1794= nctemp1796;
nctempchar1* nctemp1797= fname;
int nctemp1800=LibeStrcpy(nctemp1794,nctemp1797);
nctempchar1* nctemp1802= ScanText;
nctempchar1* nctemp1805= fname;
int nctemp1808=LibeStrcat(nctemp1802,nctemp1805);
}
else{
fname=ScanText;
}
nctempchar1* nctemp1819= fname;
struct nctempchar1 *nctemp1824;
struct nctempchar1 nctemp1825 = {{ 2}, (char*)"r"};
nctemp1824=&nctemp1825;
nctempchar1* nctemp1822= nctemp1824;
int nctemp1826=LibeOpen(nctemp1819,nctemp1822);
ScanFp =nctemp1826;
nctempchar1* nctemp1828= fname;
nctempchar1* nctemp1831=ScanSetfile(nctemp1828);
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
nctempchar1 *nctemp1844 =ScanFile;
int nctemp1843 =(nctemp1844!=0);
if(nctemp1843)
{
GpuDelete(ScanFile->a);
}
nctempchar1* nctemp1856= fname;
nctempchar1* nctemp1859=LibeStrsave(nctemp1856);
ScanFile=nctemp1859;
return ScanFile;
}
int ScanWhite ()
{
int c;
int nctemp1875=ScanGetch();
c =nctemp1875;
int nctemp1868 = (c ==32);
int nctemp1878 = (c ==9);
int nctemp1865 = (nctemp1868 || nctemp1878);
int nctemp1883 = (c ==10);
int nctemp1862 = (nctemp1865 || nctemp1883);
int nctemp1887=nctemp1862;
while(nctemp1887)
{{
int nctemp1888 = (c ==10);
if(nctemp1888)
{
int nctemp1893=ScanIncline();
}
}
int nctemp1907=ScanGetch();
c =nctemp1907;
int nctemp1900 = (c ==32);
int nctemp1910 = (c ==9);
int nctemp1897 = (nctemp1900 || nctemp1910);
int nctemp1915 = (c ==10);
int nctemp1894 = (nctemp1897 || nctemp1915);
nctemp1887=nctemp1894;}int nctemp1920=ScanUngetch();
return 1;
}
int ScanComment ()
{
int incomment;
int c;
incomment =1;
int nctemp1926 = (incomment ==1);
int nctemp1930=nctemp1926;
while(nctemp1930)
{{
int nctemp1935=ScanGetch();
c =nctemp1935;
int nctemp1936 = (c ==10);
if(nctemp1936)
{
int nctemp1941=ScanIncline();
}
int nctemp1942 = (c =='*');
if(nctemp1942)
{
int nctemp1950=ScanGetch();
c =nctemp1950;
int nctemp1951 = (c ==10);
if(nctemp1951)
{
int nctemp1956=ScanIncline();
}
int nctemp1957 = (c =='/');
if(nctemp1957)
{
incomment =0;
}
}
int nctemp1965 = (c ==(-1));
if(nctemp1965)
{
struct nctempchar1 *nctemp1972;
struct nctempchar1 nctemp1973 = {{ 24}, (char*)"Closing comment missing"};
nctemp1972=&nctemp1973;
nctempchar1* nctemp1970= nctemp1972;
int nctemp1974=ErrPanic(nctemp1970);
}
}
int nctemp1975 = (incomment ==1);
nctemp1930=nctemp1975;}return 1;
}
int ScanLcomment ()
{
int incomment;
int c;
incomment =1;
int nctemp1984 = (incomment ==1);
int nctemp1988=nctemp1984;
while(nctemp1988)
{{
int nctemp1993=ScanGetch();
c =nctemp1993;
int nctemp1994 = (c ==10);
if(nctemp1994)
{
int nctemp1999=ScanIncline();
incomment =0;
}
}
int nctemp2004 = (incomment ==1);
nctemp1988=nctemp2004;}return 1;
}
