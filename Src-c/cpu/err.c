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
int ErrError (nctempchar1 *s)
{
int nctemp2= 4;
struct nctempchar1 *nctemp6;
static struct nctempchar1 nctemp7 = {{ 7}, (char*)"file: \0"};
nctemp6=&nctemp7;
nctempchar1* nctemp4= nctemp6;
int nctemp8=LibePuts(nctemp2,nctemp4);
int nctemp10= 4;
nctempchar1* nctemp14=ScanGetfile();
nctempchar1* nctemp12= nctemp14;
int nctemp15=LibePuts(nctemp10,nctemp12);
int nctemp17= 4;
struct nctempchar1 *nctemp21;
static struct nctempchar1 nctemp22 = {{ 10}, (char*)" -- line \0"};
nctemp21=&nctemp22;
nctempchar1* nctemp19= nctemp21;
int nctemp23=LibePuts(nctemp17,nctemp19);
int nctemp25= 4;
int nctemp29=ScanGetline();
int nctemp27= nctemp29;
int nctemp30=LibePuti(nctemp25,nctemp27);
int nctemp32= 4;
struct nctempchar1 *nctemp36;
static struct nctempchar1 nctemp37 = {{ 4}, (char*)" : \0"};
nctemp36=&nctemp37;
nctempchar1* nctemp34= nctemp36;
int nctemp38=LibePuts(nctemp32,nctemp34);
int nctemp40= 4;
nctempchar1* nctemp42= s;
int nctemp45=LibePuts(nctemp40,nctemp42);
int nctemp47= 4;
struct nctempchar1 *nctemp51;
static struct nctempchar1 nctemp52 = {{ 3}, (char*)"\n\0"};
nctemp51=&nctemp52;
nctempchar1* nctemp49= nctemp51;
int nctemp53=LibePuts(nctemp47,nctemp49);
int nctemp55= 4;
int nctemp57=LibeFlush(nctemp55);
int nctemp59=LibeExit();
return 1;
}
int ErrSerror (struct tree* p,nctempchar1 *s1,nctempchar1 *s2)
{
nctempchar1 *fname;
int lineno;
struct tree* nctemp65= p;
int nctemp67=PtreeGetline(nctemp65);
lineno =nctemp67;
struct tree* nctemp73= p;
nctempchar1* nctemp75=PtreeGetfile(nctemp73);
fname=nctemp75;
int nctemp77= 4;
struct nctempchar1 *nctemp81;
static struct nctempchar1 nctemp82 = {{ 7}, (char*)"file: \0"};
nctemp81=&nctemp82;
nctempchar1* nctemp79= nctemp81;
int nctemp83=LibePuts(nctemp77,nctemp79);
int nctemp85= 4;
nctempchar1* nctemp87= fname;
int nctemp90=LibePuts(nctemp85,nctemp87);
int nctemp92= 4;
struct nctempchar1 *nctemp96;
static struct nctempchar1 nctemp97 = {{ 11}, (char*)" --  line \0"};
nctemp96=&nctemp97;
nctempchar1* nctemp94= nctemp96;
int nctemp98=LibePuts(nctemp92,nctemp94);
int nctemp100= 4;
int nctemp102= lineno;
int nctemp104=LibePuti(nctemp100,nctemp102);
int nctemp106= 4;
struct nctempchar1 *nctemp110;
static struct nctempchar1 nctemp111 = {{ 3}, (char*)": \0"};
nctemp110=&nctemp111;
nctempchar1* nctemp108= nctemp110;
int nctemp112=LibePuts(nctemp106,nctemp108);
nctempchar1 *nctemp114 =s1;
int nctemp113 =(nctemp114!=0);
if(nctemp113)
{
int nctemp119= 4;
nctempchar1* nctemp121= s1;
int nctemp124=LibePuts(nctemp119,nctemp121);
}
int nctemp126= 4;
struct nctempchar1 *nctemp130;
static struct nctempchar1 nctemp131 = {{ 3}, (char*)": \0"};
nctemp130=&nctemp131;
nctempchar1* nctemp128= nctemp130;
int nctemp132=LibePuts(nctemp126,nctemp128);
nctempchar1 *nctemp134 =s2;
int nctemp133 =(nctemp134!=0);
if(nctemp133)
{
int nctemp139= 4;
nctempchar1* nctemp141= s2;
int nctemp144=LibePuts(nctemp139,nctemp141);
}
int nctemp146= 4;
struct nctempchar1 *nctemp150;
static struct nctempchar1 nctemp151 = {{ 3}, (char*)"\n\0"};
nctemp150=&nctemp151;
nctempchar1* nctemp148= nctemp150;
int nctemp152=LibePuts(nctemp146,nctemp148);
int nctemp154= 4;
int nctemp156=LibeFlush(nctemp154);
int nctemp158=LibeExit();
return 1;
}
int ErrPanic (nctempchar1 *s)
{
int nctemp161= 4;
int nctemp165=ScanGetline();
int nctemp163= nctemp165;
int nctemp166=LibePuti(nctemp161,nctemp163);
int nctemp168= 4;
struct nctempchar1 *nctemp172;
static struct nctempchar1 nctemp173 = {{ 4}, (char*)" : \0"};
nctemp172=&nctemp173;
nctempchar1* nctemp170= nctemp172;
int nctemp174=LibePuts(nctemp168,nctemp170);
int nctemp176= 4;
nctempchar1* nctemp178= s;
int nctemp181=LibePuts(nctemp176,nctemp178);
int nctemp183= 4;
struct nctempchar1 *nctemp187;
static struct nctempchar1 nctemp188 = {{ 3}, (char*)"\n\0"};
nctemp187=&nctemp188;
nctempchar1* nctemp185= nctemp187;
int nctemp189=LibePuts(nctemp183,nctemp185);
int nctemp191= 4;
int nctemp193=LibeFlush(nctemp191);
int nctemp195=LibeExit();
return 1;
}
