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
struct symbol {nctempchar1 *name;
nctempchar1 *type;
nctempchar1 *func;
nctempchar1 *array;
int rank;
nctempchar1 *structure;
nctempchar1 *ident;
nctempchar1 *lval;
nctempchar1 *descr;
nctempchar1 *global;
nctempchar1 *ref;
nctempchar1 *module;
nctempchar1 *forw;
int emit;
struct symbol* tbl;
struct symbol* next;
struct symbol* last;
};
typedef struct nctempsymbol1 {int d[1]; struct symbol *a; } nctempsymbol1;
struct nctempsymbol2 {int d[2]; struct symbol *a; } ;
struct nctempsymbol3 {int d[3]; struct symbol *a; } ;
struct nctempsymbol4 {int d[4]; struct symbol *a; } ;
;
static struct symbol* SymEtp;
int SymSetetp (struct symbol* tp);
struct symbol* SymGetetp ();
static struct symbol* SymLtp;
int SymSetltp (struct symbol* tp);
struct symbol* SymGetltp ();
static struct symbol* SymStp;
struct symbol* SymGetstp ();
struct symbol* SymSetstp (struct symbol* stp);
int SymIstemp (nctempchar1 *name);
struct symbol* SymLookup (nctempchar1 *s,struct symbol* tp);
struct symbol* SymMkname (nctempchar1 *name,struct symbol* tp);
struct symbol* SymGetable (struct symbol* np);
struct symbol* SymRmname (nctempchar1 *name,struct symbol* tp);
nctempchar1 * SymGetname (struct symbol* np);
struct symbol* SymMktable ();
struct symbol* SymMvnext (struct symbol* np);
struct symbol* SymSetable (struct symbol* np,struct symbol* tp);
int SymSetname (struct symbol* p,nctempchar1 *name);
int SymSetype (struct symbol* p,nctempchar1 *type);
nctempchar1 * SymGetype (struct symbol* np);
int SymSetfunc (struct symbol* p,nctempchar1 *func);
nctempchar1 * SymGetfunc (struct symbol* np);
int SymSetarray (struct symbol* p,nctempchar1 *array);
nctempchar1 * SymGetarray (struct symbol* np);
int SymSetstruct (struct symbol* p,nctempchar1 *structure);
nctempchar1 * SymGetstruct (struct symbol* np);
int SymSetident (struct symbol* p,nctempchar1 *ident);
nctempchar1 * SymGetident (struct symbol* np);
int SymSetlval (struct symbol* p,nctempchar1 *lval);
nctempchar1 * SymGetlval (struct symbol* np);
int SymSetrank (struct symbol* np,int rank);
int SymGetrank (struct symbol* np);
int SymSetemit (struct symbol* np,int emit);
int SymGetemit (struct symbol* np);
int SymSetref (struct symbol* p,nctempchar1 *ref);
nctempchar1 * SymGetref (struct symbol* np);
int SymSetmodule (struct symbol* p,nctempchar1 *module);
nctempchar1 * SymGetmodule (struct symbol* np);
int SymSetforw (struct symbol* p,nctempchar1 *forw);
nctempchar1 * SymGetforw (struct symbol* np);
int SymSetdescr (struct symbol* p,nctempchar1 *descr);
nctempchar1 * SymGetdescr (struct symbol* np);
int SymSetglobal (struct symbol* p,nctempchar1 *global);
nctempchar1 * SymGetglobal (struct symbol* np);
int SymRmtable (struct symbol* p);
struct symbol* SymLook (nctempchar1 *name);
int SymCpytble (struct symbol* tp,struct symbol* up);
struct symbol* SymAddtble (struct symbol* tp,struct symbol* sp);
int SymPrsym (int fp,struct symbol* p,int level);
int SymExport (int fp,struct symbol* p,int level);
int Symgetline (int fp,struct symbol* np,nctempchar1 *module);
int SymReadsym (int fp,struct symbol* rtbl,nctempchar1 *module);
struct tree {nctempchar1 *name;
nctempchar1 *defn;
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
nctempchar1 *forw;
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
int PtreePrtree (struct tree* p,int level);
int PtreeRmnode (struct tree* p);
int PtreeRmtree (struct tree* p);
struct tree* PtreeMknode (nctempchar1 *name,nctempchar1 *defn);
int PtreeAddchild (struct tree* parent,struct tree* child);
int PtreeAddsister (struct tree* sister,struct tree* newnode);
struct tree* PtreeMvsister (struct tree* p);
struct tree* PtreeMvchild (struct tree* p);
nctempchar1 * PtreeSetfield (nctempchar1 *field,nctempchar1 *value);
int PtreeSetname (struct tree* p,nctempchar1 *name);
nctempchar1 * PtreeGetname (struct tree* p);
int PtreeSetdef (struct tree* p,nctempchar1 *defn);
nctempchar1 * PtreeGetdef (struct tree* p);
int PtreeSetype (struct tree* p,nctempchar1 *type);
nctempchar1 * PtreeGetype (struct tree* p);
int PtreeSetstruct (struct tree* p,nctempchar1 *structure);
nctempchar1 * PtreeGetstruct (struct tree* p);
int PtreeSetempr (struct tree* p,nctempchar1 *tempr);
nctempchar1 * PtreeGetempr (struct tree* p);
int PtreeSetempi (struct tree* p,nctempchar1 *tempi);
nctempchar1 * PtreeGetempi (struct tree* p);
int PtreeGetline (struct tree* p);
int PtreeSetline (struct tree* p,int line);
nctempchar1 * PtreeGetfile (struct tree* p);
int PtreeSetfile (struct tree* p,nctempchar1 *file);
int PtreeSetrank (struct tree* p,int rank);
int PtreeGetrank (struct tree* p);
int PtreeSetlval (struct tree* p,nctempchar1 *lval);
nctempchar1 * PtreeGetlval (struct tree* p);
int PtreeSetarray (struct tree* p,nctempchar1 *array);
nctempchar1 * PtreeGetarray (struct tree* p);
int PtreeSetparallel (struct tree* p,nctempchar1 *paral);
nctempchar1 * PtreeGetparallel (struct tree* p);
int PtreeSetref (struct tree* p,nctempchar1 *ref);
nctempchar1 * PtreeGetref (struct tree* p);
int PtreeSetdescr (struct tree* p,nctempchar1 *descr);
nctempchar1 * PtreeGetdescr (struct tree* p);
int PtreeSetglobal (struct tree* p,nctempchar1 *global);
nctempchar1 * PtreeGetglobal (struct tree* p);
int PtreeSetopexpr (struct tree* p,int topexpr);
int PtreeGetopexpr (struct tree* p);
int PtreeSetsimple (struct tree* p,int simple);
int PtreeGetsimple (struct tree* p);
int PtreeSetforw (struct tree* p,nctempchar1 *forw);
nctempchar1 * PtreeGetforw (struct tree* p);
int ErrError (nctempchar1 *file,int line,nctempchar1 *s);
int ErrSerror (nctempchar1 *file,nctempchar1 *fname,int lineno,nctempchar1 *s1,nctempchar1 *s2);
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
;
;
;
;
;
;
;
;
;
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
;
static int ScanContline;
static int ScanEnd;
int ScanGetline ();
nctempchar1 * ScanGetfile ();
int ScanError (nctempchar1 *s);
int ScanPush (int l);
int ScanPop ();
int ScanInit (nctempchar1 *infile);
int ScanGetch ();
int ScanIncline ();
int ScanUngetch ();
int ScanBlank ();
int ScanWhite ();
int ScanComment ();
int ScanLcomment ();
int ScanFtail (int p);
int ScanLex ();
nctempchar1 * ScanSetfile (nctempchar1 *fname);
int ScanGetok ();
nctempchar1 * ScanGetext ();
int ScanSetline (int lineno);
int ScanGetword (nctempchar1 *ttext);
int CodeCompstmnt (struct tree* p)
;
int CodeStmnt (struct tree* p)
;
nctempchar1 * CodeBinexpr (struct tree* p)
;
nctempchar1 * CodeExpr (struct tree* p)
;
int CodeSexpr (struct tree* p)
;
int CodeSbinexpr (struct tree* p)
;
int CodeError (nctempchar1 *s)
{
nctempchar1* nctemp4=ScanGetfile();
nctempchar1* nctemp2= nctemp4;
int nctemp7=ScanGetline();
int nctemp5= nctemp7;
nctempchar1* nctemp8= s;
int nctemp11=ErrError(nctemp2,nctemp5,nctemp8);
return 1;
}
static int CodeBreak;
int CodeBreakon ()
{
CodeBreak = 1;
return 1;
}
int CodeGetbreak ()
{
return CodeBreak;
}
int CodeBreakoff ()
{
CodeBreak = 0;
return 1;
}
static int CodeArch;
int CodeSetarch (int arch)
{
CodeArch = arch;
return 1;
}
int CodeGetarch ()
{
return CodeArch;
}
static int CodeLine;
static int CodeParallel;
int CodeSetparallel (int flag)
{
CodeParallel = flag;
return flag;
}
int CodeGetparallel ()
{
return CodeParallel;
}
static int CodeAddress;
nctempchar1 * CodeItemp (int cntrl)
{
nctempchar1 *s1;
nctempchar1 *s2;
int nctemp26=16;
nctempchar1 *nctemp25;
nctemp25=(nctempchar1*)RunMalloc(sizeof(nctempchar1));
nctemp25->d[0]=16;
nctemp25->a=(char *)RunMalloc(sizeof(char)*nctemp26);
s1=nctemp25;
int nctemp35=16;
nctempchar1 *nctemp34;
nctemp34=(nctempchar1*)RunMalloc(sizeof(nctempchar1));
nctemp34->d[0]=16;
nctemp34->a=(char *)RunMalloc(sizeof(char)*nctemp35);
s2=nctemp34;
struct nctempchar1 *nctemp41;
static struct nctempchar1 nctemp42 = {{ 7}, (char*)"nctemp\0"};
nctemp41=&nctemp42;
nctempchar1* nctemp39= nctemp41;
nctempchar1* nctemp43= s2;
int nctemp46=LibeStrcpy(nctemp39,nctemp43);
int nctemp50= -1;
int nctemp47 = (cntrl ==nctemp50);
if(nctemp47)
{
CodeAddress = 0;
}
else{
CodeAddress = (CodeAddress + 1);
}
int nctemp51 = (CodeAddress > 999999);
if(nctemp51)
{
struct nctempchar1 *nctemp58;
static struct nctempchar1 nctemp59 = {{ 32}, (char*)"I am running out of temporaries\0"};
nctemp58=&nctemp59;
nctempchar1* nctemp56= nctemp58;
int nctemp60=CodeError(nctemp56);
}
int nctemp62= CodeAddress;
nctempchar1* nctemp64= s1;
int nctemp67=LibeItoa(nctemp62,nctemp64);
nctempchar1* nctemp69= s1;
nctempchar1* nctemp72= s2;
int nctemp75=LibeStrcat(nctemp69,nctemp72);
return s2;
}
int CodeInit ()
{
int nctemp79= 0;
int nctemp81=CodeSetparallel(nctemp79);
CodeLine = 0;
int nctemp84= -1;
int nctemp83= nctemp84;
nctempchar1* nctemp85=CodeItemp(nctemp83);
CodeBreak = 0;
int nctemp87= 1;
int nctemp89=CodeSetarch(nctemp87);
return 1;
}
static int CodeFdout;
int CodeSetfdout (int fd)
{
CodeFdout = fd;
return 1;
}
int CodeGetfdout ()
{
return CodeFdout;
}
static int CodeDebugflag;
int CodeDebug ()
{
return CodeDebugflag;
}
int CodeEs (struct tree* p,nctempchar1 *s)
{
int fdo;
nctempchar1 *f;
int nctemp98=CodeGetfdout();
fdo =nctemp98;
int nctemp102=CodeDebug();
int nctemp99 = (nctemp102 ==1);
if(nctemp99)
{
int nctemp104 = (p !=0);
if(nctemp104)
{
struct tree* nctemp111= p;
int nctemp113=PtreeGetline(nctemp111);
int nctemp108 = (nctemp113 !=CodeLine);
if(nctemp108)
{
int nctemp116= fdo;
struct nctempchar1 *nctemp120;
static struct nctempchar1 nctemp121 = {{ 3}, (char*)"\n\0"};
nctemp120=&nctemp121;
nctempchar1* nctemp118= nctemp120;
int nctemp122=LibePuts(nctemp116,nctemp118);
int nctemp124= fdo;
struct nctempchar1 *nctemp128;
static struct nctempchar1 nctemp129 = {{ 7}, (char*)"#line \0"};
nctemp128=&nctemp129;
nctempchar1* nctemp126= nctemp128;
int nctemp130=LibePuts(nctemp124,nctemp126);
int nctemp132= fdo;
struct tree* nctemp136= p;
int nctemp138=PtreeGetline(nctemp136);
int nctemp134= nctemp138;
int nctemp139=LibePuti(nctemp132,nctemp134);
int nctemp141= fdo;
struct nctempchar1 *nctemp145;
static struct nctempchar1 nctemp146 = {{ 3}, (char*)"  \0"};
nctemp145=&nctemp146;
nctempchar1* nctemp143= nctemp145;
int nctemp147=LibePuts(nctemp141,nctemp143);
int nctemp149= fdo;
int nctemp151= 34;
int nctemp153=LibePutc(nctemp149,nctemp151);
struct tree* nctemp159= p;
nctempchar1* nctemp161=PtreeGetfile(nctemp159);
f=nctemp161;
int nctemp163= fdo;
nctempchar1* nctemp165= f;
int nctemp168=LibePuts(nctemp163,nctemp165);
int nctemp170= fdo;
int nctemp172= 34;
int nctemp174=LibePutc(nctemp170,nctemp172);
int nctemp176= fdo;
struct nctempchar1 *nctemp180;
static struct nctempchar1 nctemp181 = {{ 3}, (char*)"\n\0"};
nctemp180=&nctemp181;
nctempchar1* nctemp178= nctemp180;
int nctemp182=LibePuts(nctemp176,nctemp178);
struct tree* nctemp187= p;
int nctemp189=PtreeGetline(nctemp187);
CodeLine =nctemp189;
}
}
}
int nctemp191= fdo;
nctempchar1* nctemp193= s;
int nctemp196=LibePuts(nctemp191,nctemp193);
int nctemp198= fdo;
int nctemp200=LibeFlush(nctemp198);
return 1;
}
int CodeEd (int d)
{
int fdo;
int nctemp206=CodeGetfdout();
fdo =nctemp206;
int nctemp208= fdo;
int nctemp210= d;
int nctemp212=LibePuti(nctemp208,nctemp210);
return 1;
}
int CodeEc (int d)
{
int fdo;
int nctemp218=CodeGetfdout();
fdo =nctemp218;
int nctemp220= fdo;
int nctemp222= d;
int nctemp224=LibePutc(nctemp220,nctemp222);
return 1;
}
int CodeEsr (nctempchar1 *s)
{
int i;
int l;
int fdo;
int nctemp230=CodeGetfdout();
fdo =nctemp230;
nctempchar1* nctemp235= s;
int nctemp238=LibeStrlen(nctemp235);
l =nctemp238;
for(i = 1;i < (l - 1);i = (i + 1)){
int nctemp240= fdo;
int nctemp247=i;
int nctemp244=(int)(s->a[nctemp247]);
int nctemp242= nctemp244;
int nctemp249=LibePutc(nctemp240,nctemp242);
}
int nctemp251= fdo;
int nctemp253=LibeFlush(nctemp251);
return 1;
}
int CodeIdeclaration (struct tree* p,struct symbol* tp)
{
struct symbol* nctemp260= tp;
nctempchar1* nctemp262=SymGetype(nctemp260);
nctempchar1* nctemp258= nctemp262;
struct nctempchar1 *nctemp265;
static struct nctempchar1 nctemp266 = {{ 10}, (char*)"rconstant\0"};
nctemp265=&nctemp266;
nctempchar1* nctemp263= nctemp265;
int nctemp267=LibeStrcmp(nctemp258,nctemp263);
int nctemp255 = (nctemp267 ==1);
if(nctemp255)
{
return 1;
}
struct symbol* nctemp275= tp;
nctempchar1* nctemp277=SymGetype(nctemp275);
nctempchar1* nctemp273= nctemp277;
struct nctempchar1 *nctemp280;
static struct nctempchar1 nctemp281 = {{ 10}, (char*)"iconstant\0"};
nctemp280=&nctemp281;
nctempchar1* nctemp278= nctemp280;
int nctemp282=LibeStrcmp(nctemp273,nctemp278);
int nctemp270 = (nctemp282 ==1);
if(nctemp270)
{
return 1;
}
struct symbol* nctemp290= tp;
nctempchar1* nctemp292=SymGetype(nctemp290);
nctempchar1* nctemp288= nctemp292;
struct nctempchar1 *nctemp295;
static struct nctempchar1 nctemp296 = {{ 10}, (char*)"sconstant\0"};
nctemp295=&nctemp296;
nctempchar1* nctemp293= nctemp295;
int nctemp297=LibeStrcmp(nctemp288,nctemp293);
int nctemp285 = (nctemp297 ==1);
if(nctemp285)
{
return 1;
}
struct symbol* nctemp305= tp;
nctempchar1* nctemp307=SymGetstruct(nctemp305);
nctempchar1* nctemp303= nctemp307;
struct nctempchar1 *nctemp310;
static struct nctempchar1 nctemp311 = {{ 10}, (char*)"structdef\0"};
nctemp310=&nctemp311;
nctempchar1* nctemp308= nctemp310;
int nctemp312=LibeStrcmp(nctemp303,nctemp308);
int nctemp300 = (nctemp312 ==1);
if(nctemp300)
{
struct tree* nctemp315= p;
struct nctempchar1 *nctemp319;
static struct nctempchar1 nctemp320 = {{ 8}, (char*)"struct \0"};
nctemp319=&nctemp320;
nctempchar1* nctemp317= nctemp319;
int nctemp321=CodeEs(nctemp315,nctemp317);
}
struct symbol* nctemp327= tp;
nctempchar1* nctemp329=SymGetstruct(nctemp327);
nctempchar1* nctemp325= nctemp329;
struct nctempchar1 *nctemp332;
static struct nctempchar1 nctemp333 = {{ 7}, (char*)"struct\0"};
nctemp332=&nctemp333;
nctempchar1* nctemp330= nctemp332;
int nctemp334=LibeStrcmp(nctemp325,nctemp330);
int nctemp322 = (nctemp334 ==1);
if(nctemp322)
{
struct symbol* nctemp341= tp;
nctempchar1* nctemp343=SymGetarray(nctemp341);
nctempchar1* nctemp339= nctemp343;
struct nctempchar1 *nctemp346;
static struct nctempchar1 nctemp347 = {{ 6}, (char*)"array\0"};
nctemp346=&nctemp347;
nctempchar1* nctemp344= nctemp346;
int nctemp348=LibeStrcmp(nctemp339,nctemp344);
int nctemp336 = (nctemp348 ==1);
if(nctemp336)
{
struct symbol* nctemp355= tp;
nctempchar1* nctemp357=SymGetglobal(nctemp355);
nctempchar1* nctemp353= nctemp357;
struct nctempchar1 *nctemp360;
static struct nctempchar1 nctemp361 = {{ 7}, (char*)"global\0"};
nctemp360=&nctemp361;
nctempchar1* nctemp358= nctemp360;
int nctemp362=LibeStrcmp(nctemp353,nctemp358);
int nctemp350 = (nctemp362 ==1);
if(nctemp350)
{
struct tree* nctemp365= p;
struct nctempchar1 *nctemp369;
static struct nctempchar1 nctemp370 = {{ 8}, (char*)"static \0"};
nctemp369=&nctemp370;
nctempchar1* nctemp367= nctemp369;
int nctemp371=CodeEs(nctemp365,nctemp367);
}
struct tree* nctemp373= p;
struct nctempchar1 *nctemp377;
static struct nctempchar1 nctemp378 = {{ 14}, (char*)"struct nctemp\0"};
nctemp377=&nctemp378;
nctempchar1* nctemp375= nctemp377;
int nctemp379=CodeEs(nctemp373,nctemp375);
struct tree* nctemp381= p;
struct symbol* nctemp385= tp;
nctempchar1* nctemp387=SymGetype(nctemp385);
nctempchar1* nctemp383= nctemp387;
int nctemp388=CodeEs(nctemp381,nctemp383);
struct symbol* nctemp392= tp;
int nctemp394=SymGetrank(nctemp392);
int nctemp390= nctemp394;
int nctemp395=CodeEd(nctemp390);
struct tree* nctemp397= p;
struct nctempchar1 *nctemp401;
static struct nctempchar1 nctemp402 = {{ 3}, (char*)" *\0"};
nctemp401=&nctemp402;
nctempchar1* nctemp399= nctemp401;
int nctemp403=CodeEs(nctemp397,nctemp399);
struct tree* nctemp405= p;
struct symbol* nctemp409= tp;
nctempchar1* nctemp411=SymGetname(nctemp409);
nctempchar1* nctemp407= nctemp411;
int nctemp412=CodeEs(nctemp405,nctemp407);
}
else{
struct symbol* nctemp418= tp;
nctempchar1* nctemp420=SymGetglobal(nctemp418);
nctempchar1* nctemp416= nctemp420;
struct nctempchar1 *nctemp423;
static struct nctempchar1 nctemp424 = {{ 7}, (char*)"global\0"};
nctemp423=&nctemp424;
nctempchar1* nctemp421= nctemp423;
int nctemp425=LibeStrcmp(nctemp416,nctemp421);
int nctemp413 = (nctemp425 ==1);
if(nctemp413)
{
struct tree* nctemp428= p;
struct nctempchar1 *nctemp432;
static struct nctempchar1 nctemp433 = {{ 8}, (char*)"static \0"};
nctemp432=&nctemp433;
nctempchar1* nctemp430= nctemp432;
int nctemp434=CodeEs(nctemp428,nctemp430);
}
struct tree* nctemp436= p;
struct nctempchar1 *nctemp440;
static struct nctempchar1 nctemp441 = {{ 8}, (char*)"struct \0"};
nctemp440=&nctemp441;
nctempchar1* nctemp438= nctemp440;
int nctemp442=CodeEs(nctemp436,nctemp438);
struct tree* nctemp444= p;
struct symbol* nctemp448= tp;
nctempchar1* nctemp450=SymGetype(nctemp448);
nctempchar1* nctemp446= nctemp450;
int nctemp451=CodeEs(nctemp444,nctemp446);
struct tree* nctemp453= p;
struct nctempchar1 *nctemp457;
static struct nctempchar1 nctemp458 = {{ 2}, (char*)"*\0"};
nctemp457=&nctemp458;
nctempchar1* nctemp455= nctemp457;
int nctemp459=CodeEs(nctemp453,nctemp455);
struct tree* nctemp461= p;
struct nctempchar1 *nctemp465;
static struct nctempchar1 nctemp466 = {{ 2}, (char*)" \0"};
nctemp465=&nctemp466;
nctempchar1* nctemp463= nctemp465;
int nctemp467=CodeEs(nctemp461,nctemp463);
struct tree* nctemp469= p;
struct symbol* nctemp473= tp;
nctempchar1* nctemp475=SymGetname(nctemp473);
nctempchar1* nctemp471= nctemp475;
int nctemp476=CodeEs(nctemp469,nctemp471);
}
}
else{
struct symbol* nctemp482= tp;
nctempchar1* nctemp484=SymGetarray(nctemp482);
nctempchar1* nctemp480= nctemp484;
struct nctempchar1 *nctemp487;
static struct nctempchar1 nctemp488 = {{ 6}, (char*)"array\0"};
nctemp487=&nctemp488;
nctempchar1* nctemp485= nctemp487;
int nctemp489=LibeStrcmp(nctemp480,nctemp485);
int nctemp477 = (nctemp489 ==1);
if(nctemp477)
{
struct symbol* nctemp496= tp;
nctempchar1* nctemp498=SymGetglobal(nctemp496);
nctempchar1* nctemp494= nctemp498;
struct nctempchar1 *nctemp501;
static struct nctempchar1 nctemp502 = {{ 7}, (char*)"global\0"};
nctemp501=&nctemp502;
nctempchar1* nctemp499= nctemp501;
int nctemp503=LibeStrcmp(nctemp494,nctemp499);
int nctemp491 = (nctemp503 ==1);
if(nctemp491)
{
struct tree* nctemp506= p;
struct nctempchar1 *nctemp510;
static struct nctempchar1 nctemp511 = {{ 8}, (char*)"static \0"};
nctemp510=&nctemp511;
nctempchar1* nctemp508= nctemp510;
int nctemp512=CodeEs(nctemp506,nctemp508);
}
struct tree* nctemp514= p;
struct nctempchar1 *nctemp518;
static struct nctempchar1 nctemp519 = {{ 7}, (char*)"nctemp\0"};
nctemp518=&nctemp519;
nctempchar1* nctemp516= nctemp518;
int nctemp520=CodeEs(nctemp514,nctemp516);
struct tree* nctemp522= p;
struct symbol* nctemp526= tp;
nctempchar1* nctemp528=SymGetype(nctemp526);
nctempchar1* nctemp524= nctemp528;
int nctemp529=CodeEs(nctemp522,nctemp524);
struct symbol* nctemp533= tp;
int nctemp535=SymGetrank(nctemp533);
int nctemp531= nctemp535;
int nctemp536=CodeEd(nctemp531);
struct tree* nctemp538= p;
struct nctempchar1 *nctemp542;
static struct nctempchar1 nctemp543 = {{ 3}, (char*)" *\0"};
nctemp542=&nctemp543;
nctempchar1* nctemp540= nctemp542;
int nctemp544=CodeEs(nctemp538,nctemp540);
struct tree* nctemp546= p;
struct symbol* nctemp550= tp;
nctempchar1* nctemp552=SymGetname(nctemp550);
nctempchar1* nctemp548= nctemp552;
int nctemp553=CodeEs(nctemp546,nctemp548);
}
else{
struct symbol* nctemp559= tp;
nctempchar1* nctemp561=SymGetglobal(nctemp559);
nctempchar1* nctemp557= nctemp561;
struct nctempchar1 *nctemp564;
static struct nctempchar1 nctemp565 = {{ 7}, (char*)"global\0"};
nctemp564=&nctemp565;
nctempchar1* nctemp562= nctemp564;
int nctemp566=LibeStrcmp(nctemp557,nctemp562);
int nctemp554 = (nctemp566 ==1);
if(nctemp554)
{
struct tree* nctemp569= p;
struct nctempchar1 *nctemp573;
static struct nctempchar1 nctemp574 = {{ 8}, (char*)"static \0"};
nctemp573=&nctemp574;
nctempchar1* nctemp571= nctemp573;
int nctemp575=CodeEs(nctemp569,nctemp571);
}
struct tree* nctemp577= p;
struct symbol* nctemp581= tp;
nctempchar1* nctemp583=SymGetype(nctemp581);
nctempchar1* nctemp579= nctemp583;
int nctemp584=CodeEs(nctemp577,nctemp579);
struct tree* nctemp586= p;
struct nctempchar1 *nctemp590;
static struct nctempchar1 nctemp591 = {{ 2}, (char*)" \0"};
nctemp590=&nctemp591;
nctempchar1* nctemp588= nctemp590;
int nctemp592=CodeEs(nctemp586,nctemp588);
struct tree* nctemp594= p;
struct symbol* nctemp598= tp;
nctempchar1* nctemp600=SymGetname(nctemp598);
nctempchar1* nctemp596= nctemp600;
int nctemp601=CodeEs(nctemp594,nctemp596);
}
}
return 1;
}
int CodeIdeclarations (struct tree* p,struct symbol* tp)
{
int nctemp603 = (tp !=0);
int nctemp607=nctemp603;
while(nctemp607)
{{
struct tree* nctemp609= p;
struct symbol* nctemp611= tp;
int nctemp613=CodeIdeclaration(nctemp609,nctemp611);
struct tree* nctemp615= p;
struct nctempchar1 *nctemp619;
static struct nctempchar1 nctemp620 = {{ 4}, (char*)";\n\0"};
nctemp619=&nctemp620;
nctempchar1* nctemp617= nctemp619;
int nctemp621=CodeEs(nctemp615,nctemp617);
struct symbol* nctemp626= tp;
struct symbol* nctemp628=SymMvnext(nctemp626);
tp =nctemp628;
}
int nctemp629 = (tp !=0);
nctemp607=nctemp629;}return 1;
}
int CodeStructdefsym (struct tree* p,struct symbol* tp)
{
struct symbol* up;
struct tree* nctemp635= p;
struct nctempchar1 *nctemp639;
static struct nctempchar1 nctemp640 = {{ 8}, (char*)"struct \0"};
nctemp639=&nctemp640;
nctempchar1* nctemp637= nctemp639;
int nctemp641=CodeEs(nctemp635,nctemp637);
struct tree* nctemp643= p;
struct symbol* nctemp647= tp;
nctempchar1* nctemp649=SymGetype(nctemp647);
nctempchar1* nctemp645= nctemp649;
int nctemp650=CodeEs(nctemp643,nctemp645);
struct tree* nctemp652= p;
struct nctempchar1 *nctemp656;
static struct nctempchar1 nctemp657 = {{ 3}, (char*)" {\0"};
nctemp656=&nctemp657;
nctempchar1* nctemp654= nctemp656;
int nctemp658=CodeEs(nctemp652,nctemp654);
struct symbol* nctemp663= tp;
struct symbol* nctemp665=SymGetable(nctemp663);
up =nctemp665;
struct symbol* nctemp670= up;
struct symbol* nctemp672=SymMvnext(nctemp670);
up =nctemp672;
struct tree* nctemp674= p;
struct symbol* nctemp676= up;
int nctemp678=CodeIdeclarations(nctemp674,nctemp676);
struct tree* nctemp680= p;
struct nctempchar1 *nctemp684;
static struct nctempchar1 nctemp685 = {{ 5}, (char*)"};\n\0"};
nctemp684=&nctemp685;
nctempchar1* nctemp682= nctemp684;
int nctemp686=CodeEs(nctemp680,nctemp682);
struct tree* nctemp688= p;
struct nctempchar1 *nctemp692;
static struct nctempchar1 nctemp693 = {{ 16}, (char*)"typedef struct \0"};
nctemp692=&nctemp693;
nctempchar1* nctemp690= nctemp692;
int nctemp694=CodeEs(nctemp688,nctemp690);
struct tree* nctemp696= p;
struct nctempchar1 *nctemp700;
static struct nctempchar1 nctemp701 = {{ 7}, (char*)"nctemp\0"};
nctemp700=&nctemp701;
nctempchar1* nctemp698= nctemp700;
int nctemp702=CodeEs(nctemp696,nctemp698);
struct tree* nctemp704= p;
struct symbol* nctemp708= tp;
nctempchar1* nctemp710=SymGetype(nctemp708);
nctempchar1* nctemp706= nctemp710;
int nctemp711=CodeEs(nctemp704,nctemp706);
struct tree* nctemp713= p;
struct nctempchar1 *nctemp717;
static struct nctempchar1 nctemp718 = {{ 2}, (char*)"1\0"};
nctemp717=&nctemp718;
nctempchar1* nctemp715= nctemp717;
int nctemp719=CodeEs(nctemp713,nctemp715);
struct tree* nctemp721= p;
struct nctempchar1 *nctemp725;
static struct nctempchar1 nctemp726 = {{ 20}, (char*)" {int d[1]; struct \0"};
nctemp725=&nctemp726;
nctempchar1* nctemp723= nctemp725;
int nctemp727=CodeEs(nctemp721,nctemp723);
struct tree* nctemp729= p;
struct symbol* nctemp733= tp;
nctempchar1* nctemp735=SymGetype(nctemp733);
nctempchar1* nctemp731= nctemp735;
int nctemp736=CodeEs(nctemp729,nctemp731);
struct tree* nctemp738= p;
struct nctempchar1 *nctemp742;
static struct nctempchar1 nctemp743 = {{ 6}, (char*)" *a; \0"};
nctemp742=&nctemp743;
nctempchar1* nctemp740= nctemp742;
int nctemp744=CodeEs(nctemp738,nctemp740);
struct tree* nctemp746= p;
struct nctempchar1 *nctemp750;
static struct nctempchar1 nctemp751 = {{ 3}, (char*)"} \0"};
nctemp750=&nctemp751;
nctempchar1* nctemp748= nctemp750;
int nctemp752=CodeEs(nctemp746,nctemp748);
struct tree* nctemp754= p;
struct nctempchar1 *nctemp758;
static struct nctempchar1 nctemp759 = {{ 7}, (char*)"nctemp\0"};
nctemp758=&nctemp759;
nctempchar1* nctemp756= nctemp758;
int nctemp760=CodeEs(nctemp754,nctemp756);
struct tree* nctemp762= p;
struct symbol* nctemp766= tp;
nctempchar1* nctemp768=SymGetype(nctemp766);
nctempchar1* nctemp764= nctemp768;
int nctemp769=CodeEs(nctemp762,nctemp764);
struct tree* nctemp771= p;
struct nctempchar1 *nctemp775;
static struct nctempchar1 nctemp776 = {{ 2}, (char*)"1\0"};
nctemp775=&nctemp776;
nctempchar1* nctemp773= nctemp775;
int nctemp777=CodeEs(nctemp771,nctemp773);
struct tree* nctemp779= p;
struct nctempchar1 *nctemp783;
static struct nctempchar1 nctemp784 = {{ 4}, (char*)";\n\0"};
nctemp783=&nctemp784;
nctempchar1* nctemp781= nctemp783;
int nctemp785=CodeEs(nctemp779,nctemp781);
struct tree* nctemp787= p;
struct nctempchar1 *nctemp791;
static struct nctempchar1 nctemp792 = {{ 8}, (char*)"struct \0"};
nctemp791=&nctemp792;
nctempchar1* nctemp789= nctemp791;
int nctemp793=CodeEs(nctemp787,nctemp789);
struct tree* nctemp795= p;
struct nctempchar1 *nctemp799;
static struct nctempchar1 nctemp800 = {{ 7}, (char*)"nctemp\0"};
nctemp799=&nctemp800;
nctempchar1* nctemp797= nctemp799;
int nctemp801=CodeEs(nctemp795,nctemp797);
struct tree* nctemp803= p;
struct symbol* nctemp807= tp;
nctempchar1* nctemp809=SymGetype(nctemp807);
nctempchar1* nctemp805= nctemp809;
int nctemp810=CodeEs(nctemp803,nctemp805);
struct tree* nctemp812= p;
struct nctempchar1 *nctemp816;
static struct nctempchar1 nctemp817 = {{ 2}, (char*)"2\0"};
nctemp816=&nctemp817;
nctempchar1* nctemp814= nctemp816;
int nctemp818=CodeEs(nctemp812,nctemp814);
struct tree* nctemp820= p;
struct nctempchar1 *nctemp824;
static struct nctempchar1 nctemp825 = {{ 20}, (char*)" {int d[2]; struct \0"};
nctemp824=&nctemp825;
nctempchar1* nctemp822= nctemp824;
int nctemp826=CodeEs(nctemp820,nctemp822);
struct tree* nctemp828= p;
struct symbol* nctemp832= tp;
nctempchar1* nctemp834=SymGetype(nctemp832);
nctempchar1* nctemp830= nctemp834;
int nctemp835=CodeEs(nctemp828,nctemp830);
struct tree* nctemp837= p;
struct nctempchar1 *nctemp841;
static struct nctempchar1 nctemp842 = {{ 6}, (char*)" *a; \0"};
nctemp841=&nctemp842;
nctempchar1* nctemp839= nctemp841;
int nctemp843=CodeEs(nctemp837,nctemp839);
struct tree* nctemp845= p;
struct nctempchar1 *nctemp849;
static struct nctempchar1 nctemp850 = {{ 3}, (char*)"} \0"};
nctemp849=&nctemp850;
nctempchar1* nctemp847= nctemp849;
int nctemp851=CodeEs(nctemp845,nctemp847);
struct tree* nctemp853= p;
struct nctempchar1 *nctemp857;
static struct nctempchar1 nctemp858 = {{ 4}, (char*)";\n\0"};
nctemp857=&nctemp858;
nctempchar1* nctemp855= nctemp857;
int nctemp859=CodeEs(nctemp853,nctemp855);
struct tree* nctemp861= p;
struct nctempchar1 *nctemp865;
static struct nctempchar1 nctemp866 = {{ 8}, (char*)"struct \0"};
nctemp865=&nctemp866;
nctempchar1* nctemp863= nctemp865;
int nctemp867=CodeEs(nctemp861,nctemp863);
struct tree* nctemp869= p;
struct nctempchar1 *nctemp873;
static struct nctempchar1 nctemp874 = {{ 7}, (char*)"nctemp\0"};
nctemp873=&nctemp874;
nctempchar1* nctemp871= nctemp873;
int nctemp875=CodeEs(nctemp869,nctemp871);
struct tree* nctemp877= p;
struct symbol* nctemp881= tp;
nctempchar1* nctemp883=SymGetype(nctemp881);
nctempchar1* nctemp879= nctemp883;
int nctemp884=CodeEs(nctemp877,nctemp879);
struct tree* nctemp886= p;
struct nctempchar1 *nctemp890;
static struct nctempchar1 nctemp891 = {{ 2}, (char*)"3\0"};
nctemp890=&nctemp891;
nctempchar1* nctemp888= nctemp890;
int nctemp892=CodeEs(nctemp886,nctemp888);
struct tree* nctemp894= p;
struct nctempchar1 *nctemp898;
static struct nctempchar1 nctemp899 = {{ 20}, (char*)" {int d[3]; struct \0"};
nctemp898=&nctemp899;
nctempchar1* nctemp896= nctemp898;
int nctemp900=CodeEs(nctemp894,nctemp896);
struct tree* nctemp902= p;
struct symbol* nctemp906= tp;
nctempchar1* nctemp908=SymGetype(nctemp906);
nctempchar1* nctemp904= nctemp908;
int nctemp909=CodeEs(nctemp902,nctemp904);
struct tree* nctemp911= p;
struct nctempchar1 *nctemp915;
static struct nctempchar1 nctemp916 = {{ 6}, (char*)" *a; \0"};
nctemp915=&nctemp916;
nctempchar1* nctemp913= nctemp915;
int nctemp917=CodeEs(nctemp911,nctemp913);
struct tree* nctemp919= p;
struct nctempchar1 *nctemp923;
static struct nctempchar1 nctemp924 = {{ 3}, (char*)"} \0"};
nctemp923=&nctemp924;
nctempchar1* nctemp921= nctemp923;
int nctemp925=CodeEs(nctemp919,nctemp921);
struct tree* nctemp927= p;
struct nctempchar1 *nctemp931;
static struct nctempchar1 nctemp932 = {{ 4}, (char*)";\n\0"};
nctemp931=&nctemp932;
nctempchar1* nctemp929= nctemp931;
int nctemp933=CodeEs(nctemp927,nctemp929);
struct tree* nctemp935= p;
struct nctempchar1 *nctemp939;
static struct nctempchar1 nctemp940 = {{ 8}, (char*)"struct \0"};
nctemp939=&nctemp940;
nctempchar1* nctemp937= nctemp939;
int nctemp941=CodeEs(nctemp935,nctemp937);
struct tree* nctemp943= p;
struct nctempchar1 *nctemp947;
static struct nctempchar1 nctemp948 = {{ 7}, (char*)"nctemp\0"};
nctemp947=&nctemp948;
nctempchar1* nctemp945= nctemp947;
int nctemp949=CodeEs(nctemp943,nctemp945);
struct tree* nctemp951= p;
struct symbol* nctemp955= tp;
nctempchar1* nctemp957=SymGetype(nctemp955);
nctempchar1* nctemp953= nctemp957;
int nctemp958=CodeEs(nctemp951,nctemp953);
struct tree* nctemp960= p;
struct nctempchar1 *nctemp964;
static struct nctempchar1 nctemp965 = {{ 2}, (char*)"4\0"};
nctemp964=&nctemp965;
nctempchar1* nctemp962= nctemp964;
int nctemp966=CodeEs(nctemp960,nctemp962);
struct tree* nctemp968= p;
struct nctempchar1 *nctemp972;
static struct nctempchar1 nctemp973 = {{ 20}, (char*)" {int d[4]; struct \0"};
nctemp972=&nctemp973;
nctempchar1* nctemp970= nctemp972;
int nctemp974=CodeEs(nctemp968,nctemp970);
struct tree* nctemp976= p;
struct symbol* nctemp980= tp;
nctempchar1* nctemp982=SymGetype(nctemp980);
nctempchar1* nctemp978= nctemp982;
int nctemp983=CodeEs(nctemp976,nctemp978);
struct tree* nctemp985= p;
struct nctempchar1 *nctemp989;
static struct nctempchar1 nctemp990 = {{ 6}, (char*)" *a; \0"};
nctemp989=&nctemp990;
nctempchar1* nctemp987= nctemp989;
int nctemp991=CodeEs(nctemp985,nctemp987);
struct tree* nctemp993= p;
struct nctempchar1 *nctemp997;
static struct nctempchar1 nctemp998 = {{ 3}, (char*)"} \0"};
nctemp997=&nctemp998;
nctempchar1* nctemp995= nctemp997;
int nctemp999=CodeEs(nctemp993,nctemp995);
struct tree* nctemp1001= p;
struct nctempchar1 *nctemp1005;
static struct nctempchar1 nctemp1006 = {{ 4}, (char*)";\n\0"};
nctemp1005=&nctemp1006;
nctempchar1* nctemp1003= nctemp1005;
int nctemp1007=CodeEs(nctemp1001,nctemp1003);
return 1;
}
int CodeFdefcpusym (struct tree* p,struct symbol* tp)
{
struct symbol* nctemp1014= tp;
nctempchar1* nctemp1016=SymGetstruct(nctemp1014);
nctempchar1* nctemp1012= nctemp1016;
struct nctempchar1 *nctemp1019;
static struct nctempchar1 nctemp1020 = {{ 7}, (char*)"struct\0"};
nctemp1019=&nctemp1020;
nctempchar1* nctemp1017= nctemp1019;
int nctemp1021=LibeStrcmp(nctemp1012,nctemp1017);
int nctemp1009 = (nctemp1021 ==1);
if(nctemp1009)
{
struct tree* nctemp1024= p;
struct nctempchar1 *nctemp1028;
static struct nctempchar1 nctemp1029 = {{ 8}, (char*)"struct \0"};
nctemp1028=&nctemp1029;
nctempchar1* nctemp1026= nctemp1028;
int nctemp1030=CodeEs(nctemp1024,nctemp1026);
}
struct symbol* nctemp1036= tp;
nctempchar1* nctemp1038=SymGetarray(nctemp1036);
nctempchar1* nctemp1034= nctemp1038;
struct nctempchar1 *nctemp1041;
static struct nctempchar1 nctemp1042 = {{ 6}, (char*)"array\0"};
nctemp1041=&nctemp1042;
nctempchar1* nctemp1039= nctemp1041;
int nctemp1043=LibeStrcmp(nctemp1034,nctemp1039);
int nctemp1031 = (nctemp1043 ==1);
if(nctemp1031)
{
struct tree* nctemp1046= p;
struct nctempchar1 *nctemp1050;
static struct nctempchar1 nctemp1051 = {{ 7}, (char*)"nctemp\0"};
nctemp1050=&nctemp1051;
nctempchar1* nctemp1048= nctemp1050;
int nctemp1052=CodeEs(nctemp1046,nctemp1048);
}
struct tree* nctemp1054= p;
struct symbol* nctemp1058= tp;
nctempchar1* nctemp1060=SymGetype(nctemp1058);
nctempchar1* nctemp1056= nctemp1060;
int nctemp1061=CodeEs(nctemp1054,nctemp1056);
struct symbol* nctemp1067= tp;
nctempchar1* nctemp1069=SymGetarray(nctemp1067);
nctempchar1* nctemp1065= nctemp1069;
struct nctempchar1 *nctemp1072;
static struct nctempchar1 nctemp1073 = {{ 6}, (char*)"array\0"};
nctemp1072=&nctemp1073;
nctempchar1* nctemp1070= nctemp1072;
int nctemp1074=LibeStrcmp(nctemp1065,nctemp1070);
int nctemp1062 = (nctemp1074 ==1);
if(nctemp1062)
{
struct symbol* nctemp1079= tp;
int nctemp1081=SymGetrank(nctemp1079);
int nctemp1077= nctemp1081;
int nctemp1082=CodeEd(nctemp1077);
struct tree* nctemp1084= p;
struct nctempchar1 *nctemp1088;
static struct nctempchar1 nctemp1089 = {{ 3}, (char*)" *\0"};
nctemp1088=&nctemp1089;
nctempchar1* nctemp1086= nctemp1088;
int nctemp1090=CodeEs(nctemp1084,nctemp1086);
}
struct symbol* nctemp1096= tp;
nctempchar1* nctemp1098=SymGetstruct(nctemp1096);
nctempchar1* nctemp1094= nctemp1098;
struct nctempchar1 *nctemp1101;
static struct nctempchar1 nctemp1102 = {{ 7}, (char*)"struct\0"};
nctemp1101=&nctemp1102;
nctempchar1* nctemp1099= nctemp1101;
int nctemp1103=LibeStrcmp(nctemp1094,nctemp1099);
int nctemp1091 = (nctemp1103 ==1);
if(nctemp1091)
{
struct tree* nctemp1106= p;
struct nctempchar1 *nctemp1110;
static struct nctempchar1 nctemp1111 = {{ 2}, (char*)"*\0"};
nctemp1110=&nctemp1111;
nctempchar1* nctemp1108= nctemp1110;
int nctemp1112=CodeEs(nctemp1106,nctemp1108);
}
struct tree* nctemp1114= p;
struct nctempchar1 *nctemp1118;
static struct nctempchar1 nctemp1119 = {{ 2}, (char*)" \0"};
nctemp1118=&nctemp1119;
nctempchar1* nctemp1116= nctemp1118;
int nctemp1120=CodeEs(nctemp1114,nctemp1116);
struct tree* nctemp1122= p;
struct symbol* nctemp1126= tp;
nctempchar1* nctemp1128=SymGetname(nctemp1126);
nctempchar1* nctemp1124= nctemp1128;
int nctemp1129=CodeEs(nctemp1122,nctemp1124);
struct tree* nctemp1131= p;
struct nctempchar1 *nctemp1135;
static struct nctempchar1 nctemp1136 = {{ 3}, (char*)" (\0"};
nctemp1135=&nctemp1136;
nctempchar1* nctemp1133= nctemp1135;
int nctemp1137=CodeEs(nctemp1131,nctemp1133);
struct symbol* nctemp1142= tp;
struct symbol* nctemp1144=SymGetable(nctemp1142);
tp =nctemp1144;
int nctemp1145 = (tp ==0);
if(nctemp1145)
{
struct tree* nctemp1150= p;
struct nctempchar1 *nctemp1154;
static struct nctempchar1 nctemp1155 = {{ 5}, (char*)");\n\0"};
nctemp1154=&nctemp1155;
nctempchar1* nctemp1152= nctemp1154;
int nctemp1156=CodeEs(nctemp1150,nctemp1152);
return 1;
}
struct symbol* nctemp1162= tp;
struct symbol* nctemp1164=SymMvnext(nctemp1162);
tp =nctemp1164;
struct symbol* nctemp1169= tp;
struct symbol* nctemp1171=SymGetable(nctemp1169);
tp =nctemp1171;
int nctemp1172 = (tp ==0);
if(nctemp1172)
{
return 1;
}
struct symbol* nctemp1181= tp;
struct symbol* nctemp1183=SymMvnext(nctemp1181);
tp =nctemp1183;
int nctemp1184 = (tp !=0);
int nctemp1188=nctemp1184;
while(nctemp1188)
{{
struct tree* nctemp1190= p;
struct symbol* nctemp1192= tp;
int nctemp1194=CodeIdeclaration(nctemp1190,nctemp1192);
struct symbol* nctemp1199= tp;
struct symbol* nctemp1201=SymMvnext(nctemp1199);
tp =nctemp1201;
int nctemp1202 = (tp !=0);
if(nctemp1202)
{
struct tree* nctemp1207= p;
struct nctempchar1 *nctemp1211;
static struct nctempchar1 nctemp1212 = {{ 2}, (char*)",\0"};
nctemp1211=&nctemp1212;
nctempchar1* nctemp1209= nctemp1211;
int nctemp1213=CodeEs(nctemp1207,nctemp1209);
}
else{
struct tree* nctemp1215= p;
struct nctempchar1 *nctemp1219;
static struct nctempchar1 nctemp1220 = {{ 5}, (char*)");\n\0"};
nctemp1219=&nctemp1220;
nctempchar1* nctemp1217= nctemp1219;
int nctemp1221=CodeEs(nctemp1215,nctemp1217);
}
}
int nctemp1222 = (tp !=0);
nctemp1188=nctemp1222;}return 1;
}
int CodeImport (struct tree* p,struct symbol* tp)
{
nctempchar1 *module;
struct tree* nctemp1232= p;
nctempchar1* nctemp1234=PtreeGetdef(nctemp1232);
module=nctemp1234;
struct symbol* nctemp1239= tp;
struct symbol* nctemp1241=SymMvnext(nctemp1239);
tp =nctemp1241;
int nctemp1242 = (tp !=0);
int nctemp1246=nctemp1242;
while(nctemp1246)
{{
struct symbol* nctemp1252= tp;
nctempchar1* nctemp1254=SymGetmodule(nctemp1252);
nctempchar1* nctemp1250= nctemp1254;
nctempchar1* nctemp1255= module;
int nctemp1258=LibeStrcmp(nctemp1250,nctemp1255);
int nctemp1247 = (nctemp1258 ==1);
if(nctemp1247)
{
struct symbol* nctemp1265= tp;
nctempchar1* nctemp1267=SymGetstruct(nctemp1265);
nctempchar1* nctemp1263= nctemp1267;
struct nctempchar1 *nctemp1270;
static struct nctempchar1 nctemp1271 = {{ 10}, (char*)"structdef\0"};
nctemp1270=&nctemp1271;
nctempchar1* nctemp1268= nctemp1270;
int nctemp1272=LibeStrcmp(nctemp1263,nctemp1268);
int nctemp1260 = (nctemp1272 ==1);
if(nctemp1260)
{
struct tree* nctemp1275= p;
struct symbol* nctemp1277= tp;
int nctemp1279=CodeStructdefsym(nctemp1275,nctemp1277);
}
else{
struct symbol* nctemp1285= tp;
nctempchar1* nctemp1287=SymGetfunc(nctemp1285);
nctempchar1* nctemp1283= nctemp1287;
struct nctempchar1 *nctemp1290;
static struct nctempchar1 nctemp1291 = {{ 5}, (char*)"fdef\0"};
nctemp1290=&nctemp1291;
nctempchar1* nctemp1288= nctemp1290;
int nctemp1292=LibeStrcmp(nctemp1283,nctemp1288);
int nctemp1280 = (nctemp1292 ==1);
if(nctemp1280)
{
struct tree* nctemp1295= p;
struct symbol* nctemp1297= tp;
int nctemp1299=CodeFdefcpusym(nctemp1295,nctemp1297);
}
else{
struct tree* nctemp1301= p;
struct symbol* nctemp1303= tp;
int nctemp1305=CodeIdeclaration(nctemp1301,nctemp1303);
struct tree* nctemp1307= p;
struct nctempchar1 *nctemp1311;
static struct nctempchar1 nctemp1312 = {{ 4}, (char*)";\n\0"};
nctemp1311=&nctemp1312;
nctempchar1* nctemp1309= nctemp1311;
int nctemp1313=CodeEs(nctemp1307,nctemp1309);
}
}
}
struct symbol* nctemp1318= tp;
struct symbol* nctemp1320=SymMvnext(nctemp1318);
tp =nctemp1320;
}
int nctemp1321 = (tp !=0);
nctemp1246=nctemp1321;}return 1;
}
int CodeStructdef (struct tree* p,struct symbol* tp)
;
int CodeFdef (struct tree* p)
;
int CodeFdefcpu (struct tree* p)
{
struct symbol* tp;
int noarg;
int forw;
noarg = 0;
forw = 0;
struct tree* nctemp1331= p;
nctempchar1* nctemp1333=PtreeGetarray(nctemp1331);
nctempchar1* nctemp1329= nctemp1333;
struct nctempchar1 *nctemp1336;
static struct nctempchar1 nctemp1337 = {{ 6}, (char*)"array\0"};
nctemp1336=&nctemp1337;
nctempchar1* nctemp1334= nctemp1336;
int nctemp1338=LibeStrcmp(nctemp1329,nctemp1334);
int nctemp1326 = (nctemp1338 ==1);
if(nctemp1326)
{
struct tree* nctemp1344= p;
struct tree* nctemp1346=PtreeMvchild(nctemp1344);
p =nctemp1346;
struct tree* nctemp1351= p;
struct tree* nctemp1353=PtreeMvsister(nctemp1351);
p =nctemp1353;
struct tree* nctemp1359= p;
nctempchar1* nctemp1361=PtreeGetforw(nctemp1359);
nctempchar1* nctemp1357= nctemp1361;
struct nctempchar1 *nctemp1364;
static struct nctempchar1 nctemp1365 = {{ 5}, (char*)"forw\0"};
nctemp1364=&nctemp1365;
nctempchar1* nctemp1362= nctemp1364;
int nctemp1366=LibeStrcmp(nctemp1357,nctemp1362);
int nctemp1354 = (nctemp1366 ==1);
if(nctemp1354)
{
forw = 1;
}
}
else{
struct tree* nctemp1372= p;
struct tree* nctemp1374=PtreeMvchild(nctemp1372);
p =nctemp1374;
struct tree* nctemp1380= p;
nctempchar1* nctemp1382=PtreeGetforw(nctemp1380);
nctempchar1* nctemp1378= nctemp1382;
struct nctempchar1 *nctemp1385;
static struct nctempchar1 nctemp1386 = {{ 5}, (char*)"forw\0"};
nctemp1385=&nctemp1386;
nctempchar1* nctemp1383= nctemp1385;
int nctemp1387=LibeStrcmp(nctemp1378,nctemp1383);
int nctemp1375 = (nctemp1387 ==1);
if(nctemp1375)
{
forw = 1;
}
}
struct tree* nctemp1395= p;
nctempchar1* nctemp1397=PtreeGetdef(nctemp1395);
nctempchar1* nctemp1393= nctemp1397;
struct symbol* nctemp1400=SymGetetp();
struct symbol* nctemp1398= nctemp1400;
struct symbol* nctemp1401=SymLookup(nctemp1393,nctemp1398);
tp =nctemp1401;
struct symbol* nctemp1407= tp;
nctempchar1* nctemp1409=SymGetstruct(nctemp1407);
nctempchar1* nctemp1405= nctemp1409;
struct nctempchar1 *nctemp1412;
static struct nctempchar1 nctemp1413 = {{ 7}, (char*)"struct\0"};
nctemp1412=&nctemp1413;
nctempchar1* nctemp1410= nctemp1412;
int nctemp1414=LibeStrcmp(nctemp1405,nctemp1410);
int nctemp1402 = (nctemp1414 ==1);
if(nctemp1402)
{
struct tree* nctemp1417= p;
struct nctempchar1 *nctemp1421;
static struct nctempchar1 nctemp1422 = {{ 8}, (char*)"struct \0"};
nctemp1421=&nctemp1422;
nctempchar1* nctemp1419= nctemp1421;
int nctemp1423=CodeEs(nctemp1417,nctemp1419);
}
struct symbol* nctemp1429= tp;
nctempchar1* nctemp1431=SymGetarray(nctemp1429);
nctempchar1* nctemp1427= nctemp1431;
struct nctempchar1 *nctemp1434;
static struct nctempchar1 nctemp1435 = {{ 6}, (char*)"array\0"};
nctemp1434=&nctemp1435;
nctempchar1* nctemp1432= nctemp1434;
int nctemp1436=LibeStrcmp(nctemp1427,nctemp1432);
int nctemp1424 = (nctemp1436 ==1);
if(nctemp1424)
{
struct tree* nctemp1439= p;
struct nctempchar1 *nctemp1443;
static struct nctempchar1 nctemp1444 = {{ 7}, (char*)"nctemp\0"};
nctemp1443=&nctemp1444;
nctempchar1* nctemp1441= nctemp1443;
int nctemp1445=CodeEs(nctemp1439,nctemp1441);
}
struct tree* nctemp1447= p;
struct symbol* nctemp1451= tp;
nctempchar1* nctemp1453=SymGetype(nctemp1451);
nctempchar1* nctemp1449= nctemp1453;
int nctemp1454=CodeEs(nctemp1447,nctemp1449);
struct symbol* nctemp1460= tp;
nctempchar1* nctemp1462=SymGetarray(nctemp1460);
nctempchar1* nctemp1458= nctemp1462;
struct nctempchar1 *nctemp1465;
static struct nctempchar1 nctemp1466 = {{ 6}, (char*)"array\0"};
nctemp1465=&nctemp1466;
nctempchar1* nctemp1463= nctemp1465;
int nctemp1467=LibeStrcmp(nctemp1458,nctemp1463);
int nctemp1455 = (nctemp1467 ==1);
if(nctemp1455)
{
struct symbol* nctemp1472= tp;
int nctemp1474=SymGetrank(nctemp1472);
int nctemp1470= nctemp1474;
int nctemp1475=CodeEd(nctemp1470);
struct tree* nctemp1477= p;
struct nctempchar1 *nctemp1481;
static struct nctempchar1 nctemp1482 = {{ 3}, (char*)" *\0"};
nctemp1481=&nctemp1482;
nctempchar1* nctemp1479= nctemp1481;
int nctemp1483=CodeEs(nctemp1477,nctemp1479);
}
struct symbol* nctemp1489= tp;
nctempchar1* nctemp1491=SymGetstruct(nctemp1489);
nctempchar1* nctemp1487= nctemp1491;
struct nctempchar1 *nctemp1494;
static struct nctempchar1 nctemp1495 = {{ 7}, (char*)"struct\0"};
nctemp1494=&nctemp1495;
nctempchar1* nctemp1492= nctemp1494;
int nctemp1496=LibeStrcmp(nctemp1487,nctemp1492);
int nctemp1484 = (nctemp1496 ==1);
if(nctemp1484)
{
struct tree* nctemp1499= p;
struct nctempchar1 *nctemp1503;
static struct nctempchar1 nctemp1504 = {{ 2}, (char*)"*\0"};
nctemp1503=&nctemp1504;
nctempchar1* nctemp1501= nctemp1503;
int nctemp1505=CodeEs(nctemp1499,nctemp1501);
}
struct tree* nctemp1507= p;
struct nctempchar1 *nctemp1511;
static struct nctempchar1 nctemp1512 = {{ 2}, (char*)" \0"};
nctemp1511=&nctemp1512;
nctempchar1* nctemp1509= nctemp1511;
int nctemp1513=CodeEs(nctemp1507,nctemp1509);
struct tree* nctemp1515= p;
struct symbol* nctemp1519= tp;
nctempchar1* nctemp1521=SymGetname(nctemp1519);
nctempchar1* nctemp1517= nctemp1521;
int nctemp1522=CodeEs(nctemp1515,nctemp1517);
struct tree* nctemp1524= p;
struct nctempchar1 *nctemp1528;
static struct nctempchar1 nctemp1529 = {{ 3}, (char*)" (\0"};
nctemp1528=&nctemp1529;
nctempchar1* nctemp1526= nctemp1528;
int nctemp1530=CodeEs(nctemp1524,nctemp1526);
struct tree* nctemp1534= p;
struct tree* nctemp1536=PtreeMvchild(nctemp1534);
int nctemp1531 = (nctemp1536 !=0);
if(nctemp1531)
{
struct tree* nctemp1542= p;
struct tree* nctemp1544=PtreeMvchild(nctemp1542);
p =nctemp1544;
}
struct tree* nctemp1550= p;
nctempchar1* nctemp1552=PtreeGetname(nctemp1550);
nctempchar1* nctemp1548= nctemp1552;
struct nctempchar1 *nctemp1555;
static struct nctempchar1 nctemp1556 = {{ 8}, (char*)"arglist\0"};
nctemp1555=&nctemp1556;
nctempchar1* nctemp1553= nctemp1555;
int nctemp1557=LibeStrcmp(nctemp1548,nctemp1553);
int nctemp1545 = (nctemp1557 ==1);
if(nctemp1545)
{
struct symbol* nctemp1563= tp;
struct symbol* nctemp1565=SymGetable(nctemp1563);
tp =nctemp1565;
struct nctempchar1 *nctemp1572;
static struct nctempchar1 nctemp1573 = {{ 9}, (char*)"#arglist\0"};
nctemp1572=&nctemp1573;
nctempchar1* nctemp1570= nctemp1572;
struct symbol* nctemp1574= tp;
struct symbol* nctemp1576=SymLookup(nctemp1570,nctemp1574);
tp =nctemp1576;
struct symbol* nctemp1581= tp;
struct symbol* nctemp1583=SymGetable(nctemp1581);
tp =nctemp1583;
struct symbol* nctemp1591= tp;
struct symbol* nctemp1593=SymMvnext(nctemp1591);
tp =nctemp1593;
int nctemp1584 = (tp !=0);
int nctemp1595=nctemp1584;
while(nctemp1595)
{{
struct tree* nctemp1597= p;
struct symbol* nctemp1599= tp;
int nctemp1601=CodeIdeclaration(nctemp1597,nctemp1599);
struct symbol* nctemp1605= tp;
struct symbol* nctemp1607=SymMvnext(nctemp1605);
int nctemp1602 = (nctemp1607 !=0);
if(nctemp1602)
{
struct tree* nctemp1610= p;
struct nctempchar1 *nctemp1614;
static struct nctempchar1 nctemp1615 = {{ 2}, (char*)",\0"};
nctemp1614=&nctemp1615;
nctempchar1* nctemp1612= nctemp1614;
int nctemp1616=CodeEs(nctemp1610,nctemp1612);
}
noarg = (noarg + 1);
}
struct symbol* nctemp1624= tp;
struct symbol* nctemp1626=SymMvnext(nctemp1624);
tp =nctemp1626;
int nctemp1617 = (tp !=0);
nctemp1595=nctemp1617;}}
struct tree* nctemp1629= p;
struct nctempchar1 *nctemp1633;
static struct nctempchar1 nctemp1634 = {{ 4}, (char*)")\n\0"};
nctemp1633=&nctemp1634;
nctempchar1* nctemp1631= nctemp1633;
int nctemp1635=CodeEs(nctemp1629,nctemp1631);
int nctemp1636 = (forw ==1);
if(nctemp1636)
{
struct tree* nctemp1641= p;
struct nctempchar1 *nctemp1645;
static struct nctempchar1 nctemp1646 = {{ 4}, (char*)";\n\0"};
nctemp1645=&nctemp1646;
nctempchar1* nctemp1643= nctemp1645;
int nctemp1647=CodeEs(nctemp1641,nctemp1643);
return 1;
}
struct tree* nctemp1652= p;
struct tree* nctemp1654=PtreeMvsister(nctemp1652);
int nctemp1649 = (nctemp1654 !=0);
if(nctemp1649)
{
struct tree* nctemp1659= p;
struct tree* nctemp1661=PtreeMvsister(nctemp1659);
struct tree* nctemp1657= nctemp1661;
int nctemp1662=CodeCompstmnt(nctemp1657);
}
else{
struct tree* nctemp1664= p;
int nctemp1666=CodeCompstmnt(nctemp1664);
}
return 1;
}
int CodeFdeclkernel (struct tree* p)
{
struct symbol* tp;
int noarg;
noarg = 0;
struct tree* nctemp1674= p;
nctempchar1* nctemp1676=PtreeGetdef(nctemp1674);
nctempchar1* nctemp1672= nctemp1676;
struct symbol* nctemp1679=SymGetetp();
struct symbol* nctemp1677= nctemp1679;
struct symbol* nctemp1680=SymLookup(nctemp1672,nctemp1677);
tp =nctemp1680;
struct symbol* nctemp1684= tp;
struct symbol* nctemp1686=SymGetable(nctemp1684);
struct symbol* nctemp1682= nctemp1686;
int nctemp1687=SymSetltp(nctemp1682);
struct tree* nctemp1689= p;
struct nctempchar1 *nctemp1693;
static struct nctempchar1 nctemp1694 = {{ 12}, (char*)"__global__ \0"};
nctemp1693=&nctemp1694;
nctempchar1* nctemp1691= nctemp1693;
int nctemp1695=CodeEs(nctemp1689,nctemp1691);
struct tree* nctemp1697= p;
struct nctempchar1 *nctemp1701;
static struct nctempchar1 nctemp1702 = {{ 5}, (char*)"void\0"};
nctemp1701=&nctemp1702;
nctempchar1* nctemp1699= nctemp1701;
int nctemp1703=CodeEs(nctemp1697,nctemp1699);
struct symbol* nctemp1709= tp;
nctempchar1* nctemp1711=SymGetarray(nctemp1709);
nctempchar1* nctemp1707= nctemp1711;
struct nctempchar1 *nctemp1714;
static struct nctempchar1 nctemp1715 = {{ 6}, (char*)"array\0"};
nctemp1714=&nctemp1715;
nctempchar1* nctemp1712= nctemp1714;
int nctemp1716=LibeStrcmp(nctemp1707,nctemp1712);
int nctemp1704 = (nctemp1716 ==1);
if(nctemp1704)
{
struct symbol* nctemp1721= tp;
int nctemp1723=SymGetrank(nctemp1721);
int nctemp1719= nctemp1723;
int nctemp1724=CodeEd(nctemp1719);
}
struct symbol* nctemp1730= tp;
nctempchar1* nctemp1732=SymGetstruct(nctemp1730);
nctempchar1* nctemp1728= nctemp1732;
struct nctempchar1 *nctemp1735;
static struct nctempchar1 nctemp1736 = {{ 7}, (char*)"struct\0"};
nctemp1735=&nctemp1736;
nctempchar1* nctemp1733= nctemp1735;
int nctemp1737=LibeStrcmp(nctemp1728,nctemp1733);
int nctemp1725 = (nctemp1737 ==1);
if(nctemp1725)
{
struct tree* nctemp1740= p;
struct nctempchar1 *nctemp1744;
static struct nctempchar1 nctemp1745 = {{ 2}, (char*)"*\0"};
nctemp1744=&nctemp1745;
nctempchar1* nctemp1742= nctemp1744;
int nctemp1746=CodeEs(nctemp1740,nctemp1742);
}
struct tree* nctemp1748= p;
struct nctempchar1 *nctemp1752;
static struct nctempchar1 nctemp1753 = {{ 2}, (char*)" \0"};
nctemp1752=&nctemp1753;
nctempchar1* nctemp1750= nctemp1752;
int nctemp1754=CodeEs(nctemp1748,nctemp1750);
struct tree* nctemp1756= p;
struct nctempchar1 *nctemp1760;
static struct nctempchar1 nctemp1761 = {{ 8}, (char*)"kernel_\0"};
nctemp1760=&nctemp1761;
nctempchar1* nctemp1758= nctemp1760;
int nctemp1762=CodeEs(nctemp1756,nctemp1758);
struct tree* nctemp1764= p;
struct symbol* nctemp1768= tp;
nctempchar1* nctemp1770=SymGetname(nctemp1768);
nctempchar1* nctemp1766= nctemp1770;
int nctemp1771=CodeEs(nctemp1764,nctemp1766);
struct tree* nctemp1773= p;
struct nctempchar1 *nctemp1777;
static struct nctempchar1 nctemp1778 = {{ 3}, (char*)" (\0"};
nctemp1777=&nctemp1778;
nctempchar1* nctemp1775= nctemp1777;
int nctemp1779=CodeEs(nctemp1773,nctemp1775);
struct tree* nctemp1784= p;
struct tree* nctemp1786=PtreeMvchild(nctemp1784);
p =nctemp1786;
struct tree* nctemp1792= p;
nctempchar1* nctemp1794=PtreeGetname(nctemp1792);
nctempchar1* nctemp1790= nctemp1794;
struct nctempchar1 *nctemp1797;
static struct nctempchar1 nctemp1798 = {{ 8}, (char*)"arglist\0"};
nctemp1797=&nctemp1798;
nctempchar1* nctemp1795= nctemp1797;
int nctemp1799=LibeStrcmp(nctemp1790,nctemp1795);
int nctemp1787 = (nctemp1799 ==1);
if(nctemp1787)
{
struct symbol* nctemp1805= tp;
struct symbol* nctemp1807=SymGetable(nctemp1805);
tp =nctemp1807;
struct nctempchar1 *nctemp1814;
static struct nctempchar1 nctemp1815 = {{ 9}, (char*)"#arglist\0"};
nctemp1814=&nctemp1815;
nctempchar1* nctemp1812= nctemp1814;
struct symbol* nctemp1816= tp;
struct symbol* nctemp1818=SymLookup(nctemp1812,nctemp1816);
tp =nctemp1818;
struct symbol* nctemp1823= tp;
struct symbol* nctemp1825=SymGetable(nctemp1823);
tp =nctemp1825;
struct symbol* nctemp1833= tp;
struct symbol* nctemp1835=SymMvnext(nctemp1833);
tp =nctemp1835;
int nctemp1826 = (tp !=0);
int nctemp1837=nctemp1826;
while(nctemp1837)
{{
struct tree* nctemp1839= p;
struct symbol* nctemp1841= tp;
int nctemp1843=CodeIdeclaration(nctemp1839,nctemp1841);
struct symbol* nctemp1847= tp;
struct symbol* nctemp1849=SymMvnext(nctemp1847);
int nctemp1844 = (nctemp1849 !=0);
if(nctemp1844)
{
struct tree* nctemp1852= p;
struct nctempchar1 *nctemp1856;
static struct nctempchar1 nctemp1857 = {{ 2}, (char*)",\0"};
nctemp1856=&nctemp1857;
nctempchar1* nctemp1854= nctemp1856;
int nctemp1858=CodeEs(nctemp1852,nctemp1854);
}
noarg = (noarg + 1);
}
struct symbol* nctemp1866= tp;
struct symbol* nctemp1868=SymMvnext(nctemp1866);
tp =nctemp1868;
int nctemp1859 = (tp !=0);
nctemp1837=nctemp1859;}}
struct tree* nctemp1871= p;
struct nctempchar1 *nctemp1875;
static struct nctempchar1 nctemp1876 = {{ 5}, (char*)");\n\0"};
nctemp1875=&nctemp1876;
nctempchar1* nctemp1873= nctemp1875;
int nctemp1877=CodeEs(nctemp1871,nctemp1873);
return 1;
}
int CodeFdefgpu (struct tree* p)
{
struct symbol* tp;
int noarg;
int forw;
noarg = 0;
forw = 0;
struct tree* nctemp1884= p;
nctempchar1* nctemp1886=PtreeGetarray(nctemp1884);
nctempchar1* nctemp1882= nctemp1886;
struct nctempchar1 *nctemp1889;
static struct nctempchar1 nctemp1890 = {{ 6}, (char*)"array\0"};
nctemp1889=&nctemp1890;
nctempchar1* nctemp1887= nctemp1889;
int nctemp1891=LibeStrcmp(nctemp1882,nctemp1887);
int nctemp1879 = (nctemp1891 ==1);
if(nctemp1879)
{
struct tree* nctemp1897= p;
struct tree* nctemp1899=PtreeMvchild(nctemp1897);
p =nctemp1899;
struct tree* nctemp1904= p;
struct tree* nctemp1906=PtreeMvsister(nctemp1904);
p =nctemp1906;
struct tree* nctemp1912= p;
nctempchar1* nctemp1914=PtreeGetforw(nctemp1912);
nctempchar1* nctemp1910= nctemp1914;
struct nctempchar1 *nctemp1917;
static struct nctempchar1 nctemp1918 = {{ 5}, (char*)"forw\0"};
nctemp1917=&nctemp1918;
nctempchar1* nctemp1915= nctemp1917;
int nctemp1919=LibeStrcmp(nctemp1910,nctemp1915);
int nctemp1907 = (nctemp1919 ==1);
if(nctemp1907)
{
forw = 1;
}
}
else{
struct tree* nctemp1925= p;
struct tree* nctemp1927=PtreeMvchild(nctemp1925);
p =nctemp1927;
struct tree* nctemp1933= p;
nctempchar1* nctemp1935=PtreeGetforw(nctemp1933);
nctempchar1* nctemp1931= nctemp1935;
struct nctempchar1 *nctemp1938;
static struct nctempchar1 nctemp1939 = {{ 5}, (char*)"forw\0"};
nctemp1938=&nctemp1939;
nctempchar1* nctemp1936= nctemp1938;
int nctemp1940=LibeStrcmp(nctemp1931,nctemp1936);
int nctemp1928 = (nctemp1940 ==1);
if(nctemp1928)
{
forw = 1;
}
}
struct tree* nctemp1948= p;
nctempchar1* nctemp1950=PtreeGetdef(nctemp1948);
nctempchar1* nctemp1946= nctemp1950;
struct symbol* nctemp1953=SymGetetp();
struct symbol* nctemp1951= nctemp1953;
struct symbol* nctemp1954=SymLookup(nctemp1946,nctemp1951);
tp =nctemp1954;
struct tree* nctemp1956= p;
struct nctempchar1 *nctemp1960;
static struct nctempchar1 nctemp1961 = {{ 11}, (char*)"__global__\0"};
nctemp1960=&nctemp1961;
nctempchar1* nctemp1958= nctemp1960;
int nctemp1962=CodeEs(nctemp1956,nctemp1958);
struct tree* nctemp1964= p;
struct nctempchar1 *nctemp1968;
static struct nctempchar1 nctemp1969 = {{ 6}, (char*)" void\0"};
nctemp1968=&nctemp1969;
nctempchar1* nctemp1966= nctemp1968;
int nctemp1970=CodeEs(nctemp1964,nctemp1966);
struct tree* nctemp1972= p;
struct nctempchar1 *nctemp1976;
static struct nctempchar1 nctemp1977 = {{ 2}, (char*)" \0"};
nctemp1976=&nctemp1977;
nctempchar1* nctemp1974= nctemp1976;
int nctemp1978=CodeEs(nctemp1972,nctemp1974);
struct tree* nctemp1980= p;
struct nctempchar1 *nctemp1984;
static struct nctempchar1 nctemp1985 = {{ 8}, (char*)"kernel_\0"};
nctemp1984=&nctemp1985;
nctempchar1* nctemp1982= nctemp1984;
int nctemp1986=CodeEs(nctemp1980,nctemp1982);
struct tree* nctemp1988= p;
struct symbol* nctemp1992= tp;
nctempchar1* nctemp1994=SymGetname(nctemp1992);
nctempchar1* nctemp1990= nctemp1994;
int nctemp1995=CodeEs(nctemp1988,nctemp1990);
struct tree* nctemp1997= p;
struct nctempchar1 *nctemp2001;
static struct nctempchar1 nctemp2002 = {{ 3}, (char*)" (\0"};
nctemp2001=&nctemp2002;
nctempchar1* nctemp1999= nctemp2001;
int nctemp2003=CodeEs(nctemp1997,nctemp1999);
struct tree* nctemp2007= p;
struct tree* nctemp2009=PtreeMvchild(nctemp2007);
int nctemp2004 = (nctemp2009 !=0);
if(nctemp2004)
{
struct tree* nctemp2015= p;
struct tree* nctemp2017=PtreeMvchild(nctemp2015);
p =nctemp2017;
}
struct tree* nctemp2023= p;
nctempchar1* nctemp2025=PtreeGetname(nctemp2023);
nctempchar1* nctemp2021= nctemp2025;
struct nctempchar1 *nctemp2028;
static struct nctempchar1 nctemp2029 = {{ 8}, (char*)"arglist\0"};
nctemp2028=&nctemp2029;
nctempchar1* nctemp2026= nctemp2028;
int nctemp2030=LibeStrcmp(nctemp2021,nctemp2026);
int nctemp2018 = (nctemp2030 ==1);
if(nctemp2018)
{
struct symbol* nctemp2036= tp;
struct symbol* nctemp2038=SymGetable(nctemp2036);
tp =nctemp2038;
struct nctempchar1 *nctemp2045;
static struct nctempchar1 nctemp2046 = {{ 9}, (char*)"#arglist\0"};
nctemp2045=&nctemp2046;
nctempchar1* nctemp2043= nctemp2045;
struct symbol* nctemp2047= tp;
struct symbol* nctemp2049=SymLookup(nctemp2043,nctemp2047);
tp =nctemp2049;
struct symbol* nctemp2054= tp;
struct symbol* nctemp2056=SymGetable(nctemp2054);
tp =nctemp2056;
struct symbol* nctemp2064= tp;
struct symbol* nctemp2066=SymMvnext(nctemp2064);
tp =nctemp2066;
int nctemp2057 = (tp !=0);
int nctemp2068=nctemp2057;
while(nctemp2068)
{{
struct tree* nctemp2070= p;
struct symbol* nctemp2072= tp;
int nctemp2074=CodeIdeclaration(nctemp2070,nctemp2072);
struct symbol* nctemp2078= tp;
struct symbol* nctemp2080=SymMvnext(nctemp2078);
int nctemp2075 = (nctemp2080 !=0);
if(nctemp2075)
{
struct tree* nctemp2083= p;
struct nctempchar1 *nctemp2087;
static struct nctempchar1 nctemp2088 = {{ 2}, (char*)",\0"};
nctemp2087=&nctemp2088;
nctempchar1* nctemp2085= nctemp2087;
int nctemp2089=CodeEs(nctemp2083,nctemp2085);
}
noarg = (noarg + 1);
}
struct symbol* nctemp2097= tp;
struct symbol* nctemp2099=SymMvnext(nctemp2097);
tp =nctemp2099;
int nctemp2090 = (tp !=0);
nctemp2068=nctemp2090;}}
struct tree* nctemp2102= p;
struct nctempchar1 *nctemp2106;
static struct nctempchar1 nctemp2107 = {{ 4}, (char*)")\n\0"};
nctemp2106=&nctemp2107;
nctempchar1* nctemp2104= nctemp2106;
int nctemp2108=CodeEs(nctemp2102,nctemp2104);
int nctemp2109 = (forw ==1);
if(nctemp2109)
{
struct tree* nctemp2114= p;
struct nctempchar1 *nctemp2118;
static struct nctempchar1 nctemp2119 = {{ 4}, (char*)";\n\0"};
nctemp2118=&nctemp2119;
nctempchar1* nctemp2116= nctemp2118;
int nctemp2120=CodeEs(nctemp2114,nctemp2116);
return 1;
}
struct tree* nctemp2125= p;
struct tree* nctemp2127=PtreeMvsister(nctemp2125);
int nctemp2122 = (nctemp2127 !=0);
if(nctemp2122)
{
struct tree* nctemp2132= p;
struct tree* nctemp2134=PtreeMvsister(nctemp2132);
struct tree* nctemp2130= nctemp2134;
int nctemp2135=CodeCompstmnt(nctemp2130);
}
else{
struct tree* nctemp2137= p;
int nctemp2139=CodeCompstmnt(nctemp2137);
}
return 1;
}
int CodeFdewrappergpu (struct tree* p)
{
struct tree* top;
struct symbol* tp;
struct symbol* toptp;
int noarg;
struct tree* nctemp2145= p;
struct tree* nctemp2147=PtreeMvchild(nctemp2145);
p =nctemp2147;
noarg = 0;
struct tree* nctemp2154= p;
nctempchar1* nctemp2156=PtreeGetdef(nctemp2154);
nctempchar1* nctemp2152= nctemp2156;
struct symbol* nctemp2159=SymGetetp();
struct symbol* nctemp2157= nctemp2159;
struct symbol* nctemp2160=SymLookup(nctemp2152,nctemp2157);
tp =nctemp2160;
struct symbol* nctemp2164= tp;
struct symbol* nctemp2166=SymGetable(nctemp2164);
struct symbol* nctemp2162= nctemp2166;
int nctemp2167=SymSetltp(nctemp2162);
struct symbol* nctemp2173= tp;
nctempchar1* nctemp2175=SymGetstruct(nctemp2173);
nctempchar1* nctemp2171= nctemp2175;
struct nctempchar1 *nctemp2178;
static struct nctempchar1 nctemp2179 = {{ 7}, (char*)"struct\0"};
nctemp2178=&nctemp2179;
nctempchar1* nctemp2176= nctemp2178;
int nctemp2180=LibeStrcmp(nctemp2171,nctemp2176);
int nctemp2168 = (nctemp2180 ==1);
if(nctemp2168)
{
struct tree* nctemp2183= p;
struct nctempchar1 *nctemp2187;
static struct nctempchar1 nctemp2188 = {{ 8}, (char*)"struct \0"};
nctemp2187=&nctemp2188;
nctempchar1* nctemp2185= nctemp2187;
int nctemp2189=CodeEs(nctemp2183,nctemp2185);
}
struct symbol* nctemp2195= tp;
nctempchar1* nctemp2197=SymGetarray(nctemp2195);
nctempchar1* nctemp2193= nctemp2197;
struct nctempchar1 *nctemp2200;
static struct nctempchar1 nctemp2201 = {{ 6}, (char*)"array\0"};
nctemp2200=&nctemp2201;
nctempchar1* nctemp2198= nctemp2200;
int nctemp2202=LibeStrcmp(nctemp2193,nctemp2198);
int nctemp2190 = (nctemp2202 ==1);
if(nctemp2190)
{
struct tree* nctemp2205= p;
struct nctempchar1 *nctemp2209;
static struct nctempchar1 nctemp2210 = {{ 7}, (char*)"nctemp\0"};
nctemp2209=&nctemp2210;
nctempchar1* nctemp2207= nctemp2209;
int nctemp2211=CodeEs(nctemp2205,nctemp2207);
}
struct tree* nctemp2213= p;
struct symbol* nctemp2217= tp;
nctempchar1* nctemp2219=SymGetype(nctemp2217);
nctempchar1* nctemp2215= nctemp2219;
int nctemp2220=CodeEs(nctemp2213,nctemp2215);
struct symbol* nctemp2226= tp;
nctempchar1* nctemp2228=SymGetarray(nctemp2226);
nctempchar1* nctemp2224= nctemp2228;
struct nctempchar1 *nctemp2231;
static struct nctempchar1 nctemp2232 = {{ 6}, (char*)"array\0"};
nctemp2231=&nctemp2232;
nctempchar1* nctemp2229= nctemp2231;
int nctemp2233=LibeStrcmp(nctemp2224,nctemp2229);
int nctemp2221 = (nctemp2233 ==1);
if(nctemp2221)
{
struct symbol* nctemp2238= tp;
int nctemp2240=SymGetrank(nctemp2238);
int nctemp2236= nctemp2240;
int nctemp2241=CodeEd(nctemp2236);
}
struct symbol* nctemp2247= tp;
nctempchar1* nctemp2249=SymGetstruct(nctemp2247);
nctempchar1* nctemp2245= nctemp2249;
struct nctempchar1 *nctemp2252;
static struct nctempchar1 nctemp2253 = {{ 7}, (char*)"struct\0"};
nctemp2252=&nctemp2253;
nctempchar1* nctemp2250= nctemp2252;
int nctemp2254=LibeStrcmp(nctemp2245,nctemp2250);
int nctemp2242 = (nctemp2254 ==1);
if(nctemp2242)
{
struct tree* nctemp2257= p;
struct nctempchar1 *nctemp2261;
static struct nctempchar1 nctemp2262 = {{ 2}, (char*)"*\0"};
nctemp2261=&nctemp2262;
nctempchar1* nctemp2259= nctemp2261;
int nctemp2263=CodeEs(nctemp2257,nctemp2259);
}
top = p;
toptp = tp;
struct tree* nctemp2265= p;
struct nctempchar1 *nctemp2269;
static struct nctempchar1 nctemp2270 = {{ 2}, (char*)" \0"};
nctemp2269=&nctemp2270;
nctempchar1* nctemp2267= nctemp2269;
int nctemp2271=CodeEs(nctemp2265,nctemp2267);
struct tree* nctemp2273= p;
struct symbol* nctemp2277= tp;
nctempchar1* nctemp2279=SymGetname(nctemp2277);
nctempchar1* nctemp2275= nctemp2279;
int nctemp2280=CodeEs(nctemp2273,nctemp2275);
struct tree* nctemp2282= p;
struct nctempchar1 *nctemp2286;
static struct nctempchar1 nctemp2287 = {{ 3}, (char*)" (\0"};
nctemp2286=&nctemp2287;
nctempchar1* nctemp2284= nctemp2286;
int nctemp2288=CodeEs(nctemp2282,nctemp2284);
struct tree* nctemp2293= p;
struct tree* nctemp2295=PtreeMvchild(nctemp2293);
p =nctemp2295;
struct tree* nctemp2301= p;
nctempchar1* nctemp2303=PtreeGetname(nctemp2301);
nctempchar1* nctemp2299= nctemp2303;
struct nctempchar1 *nctemp2306;
static struct nctempchar1 nctemp2307 = {{ 8}, (char*)"arglist\0"};
nctemp2306=&nctemp2307;
nctempchar1* nctemp2304= nctemp2306;
int nctemp2308=LibeStrcmp(nctemp2299,nctemp2304);
int nctemp2296 = (nctemp2308 ==1);
if(nctemp2296)
{
struct symbol* nctemp2314= tp;
struct symbol* nctemp2316=SymGetable(nctemp2314);
tp =nctemp2316;
struct nctempchar1 *nctemp2323;
static struct nctempchar1 nctemp2324 = {{ 9}, (char*)"#arglist\0"};
nctemp2323=&nctemp2324;
nctempchar1* nctemp2321= nctemp2323;
struct symbol* nctemp2325= tp;
struct symbol* nctemp2327=SymLookup(nctemp2321,nctemp2325);
tp =nctemp2327;
struct symbol* nctemp2332= tp;
struct symbol* nctemp2334=SymGetable(nctemp2332);
tp =nctemp2334;
struct symbol* nctemp2342= tp;
struct symbol* nctemp2344=SymMvnext(nctemp2342);
tp =nctemp2344;
int nctemp2335 = (tp !=0);
int nctemp2346=nctemp2335;
while(nctemp2346)
{{
struct tree* nctemp2348= p;
struct symbol* nctemp2350= tp;
int nctemp2352=CodeIdeclaration(nctemp2348,nctemp2350);
struct symbol* nctemp2356= tp;
struct symbol* nctemp2358=SymMvnext(nctemp2356);
int nctemp2353 = (nctemp2358 !=0);
if(nctemp2353)
{
struct tree* nctemp2361= p;
struct nctempchar1 *nctemp2365;
static struct nctempchar1 nctemp2366 = {{ 2}, (char*)",\0"};
nctemp2365=&nctemp2366;
nctempchar1* nctemp2363= nctemp2365;
int nctemp2367=CodeEs(nctemp2361,nctemp2363);
}
noarg = (noarg + 1);
}
struct symbol* nctemp2375= tp;
struct symbol* nctemp2377=SymMvnext(nctemp2375);
tp =nctemp2377;
int nctemp2368 = (tp !=0);
nctemp2346=nctemp2368;}}
struct tree* nctemp2380= p;
struct nctempchar1 *nctemp2384;
static struct nctempchar1 nctemp2385 = {{ 4}, (char*)")\n\0"};
nctemp2384=&nctemp2385;
nctempchar1* nctemp2382= nctemp2384;
int nctemp2386=CodeEs(nctemp2380,nctemp2382);
struct tree* nctemp2388= p;
struct nctempchar1 *nctemp2392;
static struct nctempchar1 nctemp2393 = {{ 4}, (char*)"{\n\0"};
nctemp2392=&nctemp2393;
nctempchar1* nctemp2390= nctemp2392;
int nctemp2394=CodeEs(nctemp2388,nctemp2390);
p = top;
tp = toptp;
struct tree* nctemp2396= p;
struct nctempchar1 *nctemp2400;
static struct nctempchar1 nctemp2401 = {{ 10}, (char*)"  kernel_\0"};
nctemp2400=&nctemp2401;
nctempchar1* nctemp2398= nctemp2400;
int nctemp2402=CodeEs(nctemp2396,nctemp2398);
struct tree* nctemp2404= p;
struct symbol* nctemp2408= tp;
nctempchar1* nctemp2410=SymGetname(nctemp2408);
nctempchar1* nctemp2406= nctemp2410;
int nctemp2411=CodeEs(nctemp2404,nctemp2406);
struct tree* nctemp2413= p;
struct nctempchar1 *nctemp2417;
static struct nctempchar1 nctemp2418 = {{ 31}, (char*)"<<< RunGetnb(),RunGetnt() >>>(\0"};
nctemp2417=&nctemp2418;
nctempchar1* nctemp2415= nctemp2417;
int nctemp2419=CodeEs(nctemp2413,nctemp2415);
struct tree* nctemp2424= p;
struct tree* nctemp2426=PtreeMvchild(nctemp2424);
p =nctemp2426;
struct tree* nctemp2432= p;
nctempchar1* nctemp2434=PtreeGetname(nctemp2432);
nctempchar1* nctemp2430= nctemp2434;
struct nctempchar1 *nctemp2437;
static struct nctempchar1 nctemp2438 = {{ 8}, (char*)"arglist\0"};
nctemp2437=&nctemp2438;
nctempchar1* nctemp2435= nctemp2437;
int nctemp2439=LibeStrcmp(nctemp2430,nctemp2435);
int nctemp2427 = (nctemp2439 ==1);
if(nctemp2427)
{
struct symbol* nctemp2445= tp;
struct symbol* nctemp2447=SymGetable(nctemp2445);
tp =nctemp2447;
struct nctempchar1 *nctemp2454;
static struct nctempchar1 nctemp2455 = {{ 9}, (char*)"#arglist\0"};
nctemp2454=&nctemp2455;
nctempchar1* nctemp2452= nctemp2454;
struct symbol* nctemp2456= tp;
struct symbol* nctemp2458=SymLookup(nctemp2452,nctemp2456);
tp =nctemp2458;
struct symbol* nctemp2463= tp;
struct symbol* nctemp2465=SymGetable(nctemp2463);
tp =nctemp2465;
struct symbol* nctemp2473= tp;
struct symbol* nctemp2475=SymMvnext(nctemp2473);
tp =nctemp2475;
int nctemp2466 = (tp !=0);
int nctemp2477=nctemp2466;
while(nctemp2477)
{{
struct tree* nctemp2479= p;
struct symbol* nctemp2483= tp;
nctempchar1* nctemp2485=SymGetname(nctemp2483);
nctempchar1* nctemp2481= nctemp2485;
int nctemp2486=CodeEs(nctemp2479,nctemp2481);
struct symbol* nctemp2490= tp;
struct symbol* nctemp2492=SymMvnext(nctemp2490);
int nctemp2487 = (nctemp2492 !=0);
if(nctemp2487)
{
struct tree* nctemp2495= p;
struct nctempchar1 *nctemp2499;
static struct nctempchar1 nctemp2500 = {{ 2}, (char*)",\0"};
nctemp2499=&nctemp2500;
nctempchar1* nctemp2497= nctemp2499;
int nctemp2501=CodeEs(nctemp2495,nctemp2497);
}
noarg = (noarg + 1);
}
struct symbol* nctemp2509= tp;
struct symbol* nctemp2511=SymMvnext(nctemp2509);
tp =nctemp2511;
int nctemp2502 = (tp !=0);
nctemp2477=nctemp2502;}}
struct tree* nctemp2514= p;
struct nctempchar1 *nctemp2518;
static struct nctempchar1 nctemp2519 = {{ 5}, (char*)");\n\0"};
nctemp2518=&nctemp2519;
nctempchar1* nctemp2516= nctemp2518;
int nctemp2520=CodeEs(nctemp2514,nctemp2516);
struct tree* nctemp2522= p;
struct nctempchar1 *nctemp2526;
static struct nctempchar1 nctemp2527 = {{ 14}, (char*)"GpuError();\n\0"};
nctemp2526=&nctemp2527;
nctempchar1* nctemp2524= nctemp2526;
int nctemp2528=CodeEs(nctemp2522,nctemp2524);
struct tree* nctemp2530= p;
struct nctempchar1 *nctemp2534;
static struct nctempchar1 nctemp2535 = {{ 13}, (char*)"return(1);\n\0"};
nctemp2534=&nctemp2535;
nctempchar1* nctemp2532= nctemp2534;
int nctemp2536=CodeEs(nctemp2530,nctemp2532);
struct tree* nctemp2538= p;
struct nctempchar1 *nctemp2542;
static struct nctempchar1 nctemp2543 = {{ 4}, (char*)"}\n\0"};
nctemp2542=&nctemp2543;
nctempchar1* nctemp2540= nctemp2542;
int nctemp2544=CodeEs(nctemp2538,nctemp2540);
return 1;
}
int CodeGdeclarations (struct tree* p,struct symbol* tp)
{
struct symbol* nctemp2550= tp;
struct symbol* nctemp2552=SymMvnext(nctemp2550);
tp =nctemp2552;
int nctemp2553 = (tp !=0);
int nctemp2557=nctemp2553;
while(nctemp2557)
{{
struct nctempchar1 *nctemp2563;
static struct nctempchar1 nctemp2564 = {{ 9}, (char*)"#arglist\0"};
nctemp2563=&nctemp2564;
nctempchar1* nctemp2561= nctemp2563;
struct symbol* nctemp2567= tp;
nctempchar1* nctemp2569=SymGetname(nctemp2567);
nctempchar1* nctemp2565= nctemp2569;
int nctemp2570=LibeStrcmp(nctemp2561,nctemp2565);
int nctemp2558 = (nctemp2570 ==0);
if(nctemp2558)
{
struct symbol* nctemp2575= tp;
int nctemp2577=SymGetemit(nctemp2575);
int nctemp2572 = (nctemp2577 ==1);
if(nctemp2572)
{
struct symbol* nctemp2584= tp;
nctempchar1* nctemp2586=SymGetstruct(nctemp2584);
nctempchar1* nctemp2582= nctemp2586;
struct nctempchar1 *nctemp2589;
static struct nctempchar1 nctemp2590 = {{ 10}, (char*)"structdef\0"};
nctemp2589=&nctemp2590;
nctempchar1* nctemp2587= nctemp2589;
int nctemp2591=LibeStrcmp(nctemp2582,nctemp2587);
int nctemp2579 = (nctemp2591 ==1);
if(nctemp2579)
{
struct tree* nctemp2594= p;
struct symbol* nctemp2596= tp;
int nctemp2598=CodeStructdef(nctemp2594,nctemp2596);
}
else{
struct symbol* nctemp2604= tp;
nctempchar1* nctemp2606=SymGetfunc(nctemp2604);
nctempchar1* nctemp2602= nctemp2606;
struct nctempchar1 *nctemp2609;
static struct nctempchar1 nctemp2610 = {{ 5}, (char*)"fdef\0"};
nctemp2609=&nctemp2610;
nctempchar1* nctemp2607= nctemp2609;
int nctemp2611=LibeStrcmp(nctemp2602,nctemp2607);
int nctemp2599 = (nctemp2611 ==1);
if(nctemp2599)
{
struct tree* nctemp2614= p;
int nctemp2616=CodeFdef(nctemp2614);
}
else{
struct symbol* nctemp2622= tp;
nctempchar1* nctemp2624=SymGetname(nctemp2622);
nctempchar1* nctemp2620= nctemp2624;
struct nctempchar1 *nctemp2627;
static struct nctempchar1 nctemp2628 = {{ 6}, (char*)"#self\0"};
nctemp2627=&nctemp2628;
nctempchar1* nctemp2625= nctemp2627;
int nctemp2629=LibeStrcmp(nctemp2620,nctemp2625);
int nctemp2617 = (nctemp2629 ==0);
if(nctemp2617)
{
struct tree* nctemp2632= p;
struct symbol* nctemp2634= tp;
int nctemp2636=CodeIdeclaration(nctemp2632,nctemp2634);
struct tree* nctemp2638= p;
struct nctempchar1 *nctemp2642;
static struct nctempchar1 nctemp2643 = {{ 4}, (char*)";\n\0"};
nctemp2642=&nctemp2643;
nctempchar1* nctemp2640= nctemp2642;
int nctemp2644=CodeEs(nctemp2638,nctemp2640);
}
}
}
struct symbol* nctemp2646= tp;
int nctemp2648= 0;
int nctemp2650=SymSetemit(nctemp2646,nctemp2648);
}
}
struct symbol* nctemp2655= tp;
struct symbol* nctemp2657=SymMvnext(nctemp2655);
tp =nctemp2657;
}
int nctemp2658 = (tp !=0);
nctemp2557=nctemp2658;}return 1;
}
int CodeDeclarations (struct tree* p,struct symbol* tp)
{
struct tree* np;
int nctemp2663 = (p !=0);
if(nctemp2663)
{
struct tree* nctemp2671= p;
struct tree* nctemp2673=PtreeMvchild(nctemp2671);
np =nctemp2673;
}
else{
np = p;
}
struct tree* nctemp2675= np;
struct symbol* nctemp2677= tp;
int nctemp2679=CodeGdeclarations(nctemp2675,nctemp2677);
return 1;
}
int CodeCode (struct tree* p,struct symbol* tp)
{
struct tree* np;
struct tree* nctemp2685= p;
struct tree* nctemp2687=PtreeMvchild(nctemp2685);
np =nctemp2687;
struct tree* nctemp2691= np;
nctempchar1* nctemp2693=PtreeGetname(nctemp2691);
nctempchar1* nctemp2689= nctemp2693;
struct nctempchar1 *nctemp2696;
static struct nctempchar1 nctemp2697 = {{ 7}, (char*)"import\0"};
nctemp2696=&nctemp2697;
nctempchar1* nctemp2694= nctemp2696;
int nctemp2698=LibeStrcmp(nctemp2689,nctemp2694);
if(nctemp2698)
{
struct tree* nctemp2700= np;
struct symbol* nctemp2702= tp;
int nctemp2704=CodeImport(nctemp2700,nctemp2702);
}
struct tree* nctemp2706= p;
struct symbol* nctemp2708= tp;
int nctemp2710=CodeDeclarations(nctemp2706,nctemp2708);
return 1;
}
static int CodeArraytest;
int CodeArraycheck ()
{
return CodeArraytest;
}
int CodeArraycheckon ()
{
CodeArraytest = 1;
return 1;
}
int CodeArraycheckoff ()
{
CodeArraytest = 0;
return 1;
}
int CodeDebugon ()
{
CodeDebugflag = 1;
return 1;
}
nctempchar1 * CodeMktemp ()
{
int nctemp2717= 0;
nctempchar1* nctemp2719=CodeItemp(nctemp2717);
return nctemp2719;
}
int CodeDebugoff ()
{
CodeDebugflag = 0;
return 1;
}
nctempchar1 * CodeNewtemp (nctempchar1 *type)
{
nctempchar1 *temp;
struct symbol* tp;
nctempchar1* nctemp2726=CodeMktemp();
temp=nctemp2726;
nctempchar1* nctemp2731= temp;
struct symbol* nctemp2736=SymGetltp();
struct symbol* nctemp2734= nctemp2736;
struct symbol* nctemp2737=SymMkname(nctemp2731,nctemp2734);
tp =nctemp2737;
struct symbol* nctemp2739= tp;
nctempchar1* nctemp2741= type;
int nctemp2744=SymSetype(nctemp2739,nctemp2741);
struct symbol* nctemp2746= tp;
int nctemp2748= 0;
int nctemp2750=SymSetemit(nctemp2746,nctemp2748);
return temp;
}
struct symbol* CodeNewsymbol (nctempchar1 *type,nctempchar1 *name)
{
struct symbol* tp;
nctempchar1* nctemp2757= name;
struct symbol* nctemp2762=SymGetltp();
struct symbol* nctemp2760= nctemp2762;
struct symbol* nctemp2763=SymMkname(nctemp2757,nctemp2760);
tp =nctemp2763;
struct symbol* nctemp2765= tp;
nctempchar1* nctemp2767= type;
int nctemp2770=SymSetype(nctemp2765,nctemp2767);
struct symbol* nctemp2772= tp;
int nctemp2774= 0;
int nctemp2776=SymSetemit(nctemp2772,nctemp2774);
return tp;
}
nctempchar1 * CodeMkstring (struct tree* p)
{
struct symbol* sp;
nctempchar1 *tmp;
nctempchar1* nctemp2783=CodeMktemp();
tmp=nctemp2783;
nctempchar1* nctemp2788= tmp;
struct symbol* nctemp2793=SymGetltp();
struct symbol* nctemp2791= nctemp2793;
struct symbol* nctemp2794=SymMkname(nctemp2788,nctemp2791);
sp =nctemp2794;
struct symbol* nctemp2796= sp;
int nctemp2798= 1;
int nctemp2800=SymSetrank(nctemp2796,nctemp2798);
struct symbol* nctemp2802= sp;
struct nctempchar1 *nctemp2806;
static struct nctempchar1 nctemp2807 = {{ 5}, (char*)"char\0"};
nctemp2806=&nctemp2807;
nctempchar1* nctemp2804= nctemp2806;
int nctemp2808=SymSetype(nctemp2802,nctemp2804);
struct symbol* nctemp2810= sp;
struct nctempchar1 *nctemp2814;
static struct nctempchar1 nctemp2815 = {{ 6}, (char*)"array\0"};
nctemp2814=&nctemp2815;
nctempchar1* nctemp2812= nctemp2814;
int nctemp2816=SymSetarray(nctemp2810,nctemp2812);
return tmp;
}
nctempchar1 * CodeSconstant (struct tree* p)
{
nctempchar1 *tmp;
nctempchar1 *tmp2;
int l;
nctempchar1* nctemp2824=CodeMktemp();
tmp2=nctemp2824;
struct tree* nctemp2826= p;
struct nctempchar1 *nctemp2830;
static struct nctempchar1 nctemp2831 = {{ 21}, (char*)"struct nctempchar1 *\0"};
nctemp2830=&nctemp2831;
nctempchar1* nctemp2828= nctemp2830;
int nctemp2832=CodeEs(nctemp2826,nctemp2828);
struct tree* nctemp2834= p;
nctempchar1* nctemp2836= tmp2;
int nctemp2839=CodeEs(nctemp2834,nctemp2836);
struct tree* nctemp2841= p;
struct nctempchar1 *nctemp2845;
static struct nctempchar1 nctemp2846 = {{ 4}, (char*)";\n\0"};
nctemp2845=&nctemp2846;
nctempchar1* nctemp2843= nctemp2845;
int nctemp2847=CodeEs(nctemp2841,nctemp2843);
nctempchar1* nctemp2853=CodeMktemp();
tmp=nctemp2853;
struct tree* nctemp2855= p;
struct nctempchar1 *nctemp2859;
static struct nctempchar1 nctemp2860 = {{ 27}, (char*)"static struct nctempchar1 \0"};
nctemp2859=&nctemp2860;
nctempchar1* nctemp2857= nctemp2859;
int nctemp2861=CodeEs(nctemp2855,nctemp2857);
struct tree* nctemp2863= p;
nctempchar1* nctemp2865= tmp;
int nctemp2868=CodeEs(nctemp2863,nctemp2865);
struct tree* nctemp2870= p;
struct nctempchar1 *nctemp2874;
static struct nctempchar1 nctemp2875 = {{ 4}, (char*)" = \0"};
nctemp2874=&nctemp2875;
nctempchar1* nctemp2872= nctemp2874;
int nctemp2876=CodeEs(nctemp2870,nctemp2872);
struct tree* nctemp2878= p;
struct nctempchar1 *nctemp2882;
static struct nctempchar1 nctemp2883 = {{ 4}, (char*)"{{ \0"};
nctemp2882=&nctemp2883;
nctempchar1* nctemp2880= nctemp2882;
int nctemp2884=CodeEs(nctemp2878,nctemp2880);
struct tree* nctemp2894= p;
nctempchar1* nctemp2896=PtreeGetdef(nctemp2894);
nctempchar1* nctemp2892= nctemp2896;
int nctemp2897=LibeStrlen(nctemp2892);
int nctemp2899 = nctemp2897 - 1;
l =nctemp2899;
int nctemp2901= l;
int nctemp2903=CodeEd(nctemp2901);
struct tree* nctemp2905= p;
struct nctempchar1 *nctemp2909;
static struct nctempchar1 nctemp2910 = {{ 11}, (char*)"}, (char*)\0"};
nctemp2909=&nctemp2910;
nctempchar1* nctemp2907= nctemp2909;
int nctemp2911=CodeEs(nctemp2905,nctemp2907);
int nctemp2913= 34;
int nctemp2915=CodeEc(nctemp2913);
struct tree* nctemp2919= p;
nctempchar1* nctemp2921=PtreeGetdef(nctemp2919);
nctempchar1* nctemp2917= nctemp2921;
int nctemp2922=CodeEsr(nctemp2917);
int nctemp2924= 92;
int nctemp2926=CodeEc(nctemp2924);
int nctemp2928= 48;
int nctemp2930=CodeEc(nctemp2928);
int nctemp2932= 34;
int nctemp2934=CodeEc(nctemp2932);
struct tree* nctemp2936= p;
struct nctempchar1 *nctemp2940;
static struct nctempchar1 nctemp2941 = {{ 5}, (char*)"};\n\0"};
nctemp2940=&nctemp2941;
nctempchar1* nctemp2938= nctemp2940;
int nctemp2942=CodeEs(nctemp2936,nctemp2938);
struct tree* nctemp2944= p;
nctempchar1* nctemp2946= tmp2;
int nctemp2949=CodeEs(nctemp2944,nctemp2946);
struct tree* nctemp2951= p;
struct nctempchar1 *nctemp2955;
static struct nctempchar1 nctemp2956 = {{ 3}, (char*)"=&\0"};
nctemp2955=&nctemp2956;
nctempchar1* nctemp2953= nctemp2955;
int nctemp2957=CodeEs(nctemp2951,nctemp2953);
struct tree* nctemp2959= p;
nctempchar1* nctemp2961= tmp;
int nctemp2964=CodeEs(nctemp2959,nctemp2961);
struct tree* nctemp2966= p;
struct nctempchar1 *nctemp2970;
static struct nctempchar1 nctemp2971 = {{ 4}, (char*)";\n\0"};
nctemp2970=&nctemp2971;
nctempchar1* nctemp2968= nctemp2970;
int nctemp2972=CodeEs(nctemp2966,nctemp2968);
return tmp2;
}
int CodeStructdef (struct tree* p,struct symbol* tp)
{
struct symbol* up;
struct tree* nctemp2976= p;
struct nctempchar1 *nctemp2980;
static struct nctempchar1 nctemp2981 = {{ 8}, (char*)"struct \0"};
nctemp2980=&nctemp2981;
nctempchar1* nctemp2978= nctemp2980;
int nctemp2982=CodeEs(nctemp2976,nctemp2978);
struct tree* nctemp2984= p;
struct symbol* nctemp2988= tp;
nctempchar1* nctemp2990=SymGetype(nctemp2988);
nctempchar1* nctemp2986= nctemp2990;
int nctemp2991=CodeEs(nctemp2984,nctemp2986);
struct tree* nctemp2993= p;
struct nctempchar1 *nctemp2997;
static struct nctempchar1 nctemp2998 = {{ 3}, (char*)" {\0"};
nctemp2997=&nctemp2998;
nctempchar1* nctemp2995= nctemp2997;
int nctemp2999=CodeEs(nctemp2993,nctemp2995);
struct symbol* nctemp3004= tp;
struct symbol* nctemp3006=SymGetable(nctemp3004);
up =nctemp3006;
struct symbol* nctemp3011= up;
struct symbol* nctemp3013=SymMvnext(nctemp3011);
up =nctemp3013;
struct tree* nctemp3015= p;
struct symbol* nctemp3017= up;
int nctemp3019=CodeIdeclarations(nctemp3015,nctemp3017);
struct tree* nctemp3021= p;
struct nctempchar1 *nctemp3025;
static struct nctempchar1 nctemp3026 = {{ 5}, (char*)"};\n\0"};
nctemp3025=&nctemp3026;
nctempchar1* nctemp3023= nctemp3025;
int nctemp3027=CodeEs(nctemp3021,nctemp3023);
struct tree* nctemp3029= p;
struct nctempchar1 *nctemp3033;
static struct nctempchar1 nctemp3034 = {{ 16}, (char*)"typedef struct \0"};
nctemp3033=&nctemp3034;
nctempchar1* nctemp3031= nctemp3033;
int nctemp3035=CodeEs(nctemp3029,nctemp3031);
struct tree* nctemp3037= p;
struct nctempchar1 *nctemp3041;
static struct nctempchar1 nctemp3042 = {{ 7}, (char*)"nctemp\0"};
nctemp3041=&nctemp3042;
nctempchar1* nctemp3039= nctemp3041;
int nctemp3043=CodeEs(nctemp3037,nctemp3039);
struct tree* nctemp3045= p;
struct symbol* nctemp3049= tp;
nctempchar1* nctemp3051=SymGetype(nctemp3049);
nctempchar1* nctemp3047= nctemp3051;
int nctemp3052=CodeEs(nctemp3045,nctemp3047);
struct tree* nctemp3054= p;
struct nctempchar1 *nctemp3058;
static struct nctempchar1 nctemp3059 = {{ 2}, (char*)"1\0"};
nctemp3058=&nctemp3059;
nctempchar1* nctemp3056= nctemp3058;
int nctemp3060=CodeEs(nctemp3054,nctemp3056);
struct tree* nctemp3062= p;
struct nctempchar1 *nctemp3066;
static struct nctempchar1 nctemp3067 = {{ 20}, (char*)" {int d[1]; struct \0"};
nctemp3066=&nctemp3067;
nctempchar1* nctemp3064= nctemp3066;
int nctemp3068=CodeEs(nctemp3062,nctemp3064);
struct tree* nctemp3070= p;
struct symbol* nctemp3074= tp;
nctempchar1* nctemp3076=SymGetype(nctemp3074);
nctempchar1* nctemp3072= nctemp3076;
int nctemp3077=CodeEs(nctemp3070,nctemp3072);
struct tree* nctemp3079= p;
struct nctempchar1 *nctemp3083;
static struct nctempchar1 nctemp3084 = {{ 6}, (char*)" *a; \0"};
nctemp3083=&nctemp3084;
nctempchar1* nctemp3081= nctemp3083;
int nctemp3085=CodeEs(nctemp3079,nctemp3081);
struct tree* nctemp3087= p;
struct nctempchar1 *nctemp3091;
static struct nctempchar1 nctemp3092 = {{ 3}, (char*)"} \0"};
nctemp3091=&nctemp3092;
nctempchar1* nctemp3089= nctemp3091;
int nctemp3093=CodeEs(nctemp3087,nctemp3089);
struct tree* nctemp3095= p;
struct nctempchar1 *nctemp3099;
static struct nctempchar1 nctemp3100 = {{ 7}, (char*)"nctemp\0"};
nctemp3099=&nctemp3100;
nctempchar1* nctemp3097= nctemp3099;
int nctemp3101=CodeEs(nctemp3095,nctemp3097);
struct tree* nctemp3103= p;
struct symbol* nctemp3107= tp;
nctempchar1* nctemp3109=SymGetype(nctemp3107);
nctempchar1* nctemp3105= nctemp3109;
int nctemp3110=CodeEs(nctemp3103,nctemp3105);
struct tree* nctemp3112= p;
struct nctempchar1 *nctemp3116;
static struct nctempchar1 nctemp3117 = {{ 2}, (char*)"1\0"};
nctemp3116=&nctemp3117;
nctempchar1* nctemp3114= nctemp3116;
int nctemp3118=CodeEs(nctemp3112,nctemp3114);
struct tree* nctemp3120= p;
struct nctempchar1 *nctemp3124;
static struct nctempchar1 nctemp3125 = {{ 4}, (char*)";\n\0"};
nctemp3124=&nctemp3125;
nctempchar1* nctemp3122= nctemp3124;
int nctemp3126=CodeEs(nctemp3120,nctemp3122);
struct tree* nctemp3128= p;
struct nctempchar1 *nctemp3132;
static struct nctempchar1 nctemp3133 = {{ 8}, (char*)"struct \0"};
nctemp3132=&nctemp3133;
nctempchar1* nctemp3130= nctemp3132;
int nctemp3134=CodeEs(nctemp3128,nctemp3130);
struct tree* nctemp3136= p;
struct nctempchar1 *nctemp3140;
static struct nctempchar1 nctemp3141 = {{ 7}, (char*)"nctemp\0"};
nctemp3140=&nctemp3141;
nctempchar1* nctemp3138= nctemp3140;
int nctemp3142=CodeEs(nctemp3136,nctemp3138);
struct tree* nctemp3144= p;
struct symbol* nctemp3148= tp;
nctempchar1* nctemp3150=SymGetype(nctemp3148);
nctempchar1* nctemp3146= nctemp3150;
int nctemp3151=CodeEs(nctemp3144,nctemp3146);
struct tree* nctemp3153= p;
struct nctempchar1 *nctemp3157;
static struct nctempchar1 nctemp3158 = {{ 2}, (char*)"2\0"};
nctemp3157=&nctemp3158;
nctempchar1* nctemp3155= nctemp3157;
int nctemp3159=CodeEs(nctemp3153,nctemp3155);
struct tree* nctemp3161= p;
struct nctempchar1 *nctemp3165;
static struct nctempchar1 nctemp3166 = {{ 20}, (char*)" {int d[2]; struct \0"};
nctemp3165=&nctemp3166;
nctempchar1* nctemp3163= nctemp3165;
int nctemp3167=CodeEs(nctemp3161,nctemp3163);
struct tree* nctemp3169= p;
struct symbol* nctemp3173= tp;
nctempchar1* nctemp3175=SymGetype(nctemp3173);
nctempchar1* nctemp3171= nctemp3175;
int nctemp3176=CodeEs(nctemp3169,nctemp3171);
struct tree* nctemp3178= p;
struct nctempchar1 *nctemp3182;
static struct nctempchar1 nctemp3183 = {{ 6}, (char*)" *a; \0"};
nctemp3182=&nctemp3183;
nctempchar1* nctemp3180= nctemp3182;
int nctemp3184=CodeEs(nctemp3178,nctemp3180);
struct tree* nctemp3186= p;
struct nctempchar1 *nctemp3190;
static struct nctempchar1 nctemp3191 = {{ 3}, (char*)"} \0"};
nctemp3190=&nctemp3191;
nctempchar1* nctemp3188= nctemp3190;
int nctemp3192=CodeEs(nctemp3186,nctemp3188);
struct tree* nctemp3194= p;
struct nctempchar1 *nctemp3198;
static struct nctempchar1 nctemp3199 = {{ 4}, (char*)";\n\0"};
nctemp3198=&nctemp3199;
nctempchar1* nctemp3196= nctemp3198;
int nctemp3200=CodeEs(nctemp3194,nctemp3196);
struct tree* nctemp3202= p;
struct nctempchar1 *nctemp3206;
static struct nctempchar1 nctemp3207 = {{ 8}, (char*)"struct \0"};
nctemp3206=&nctemp3207;
nctempchar1* nctemp3204= nctemp3206;
int nctemp3208=CodeEs(nctemp3202,nctemp3204);
struct tree* nctemp3210= p;
struct nctempchar1 *nctemp3214;
static struct nctempchar1 nctemp3215 = {{ 7}, (char*)"nctemp\0"};
nctemp3214=&nctemp3215;
nctempchar1* nctemp3212= nctemp3214;
int nctemp3216=CodeEs(nctemp3210,nctemp3212);
struct tree* nctemp3218= p;
struct symbol* nctemp3222= tp;
nctempchar1* nctemp3224=SymGetype(nctemp3222);
nctempchar1* nctemp3220= nctemp3224;
int nctemp3225=CodeEs(nctemp3218,nctemp3220);
struct tree* nctemp3227= p;
struct nctempchar1 *nctemp3231;
static struct nctempchar1 nctemp3232 = {{ 2}, (char*)"3\0"};
nctemp3231=&nctemp3232;
nctempchar1* nctemp3229= nctemp3231;
int nctemp3233=CodeEs(nctemp3227,nctemp3229);
struct tree* nctemp3235= p;
struct nctempchar1 *nctemp3239;
static struct nctempchar1 nctemp3240 = {{ 20}, (char*)" {int d[3]; struct \0"};
nctemp3239=&nctemp3240;
nctempchar1* nctemp3237= nctemp3239;
int nctemp3241=CodeEs(nctemp3235,nctemp3237);
struct tree* nctemp3243= p;
struct symbol* nctemp3247= tp;
nctempchar1* nctemp3249=SymGetype(nctemp3247);
nctempchar1* nctemp3245= nctemp3249;
int nctemp3250=CodeEs(nctemp3243,nctemp3245);
struct tree* nctemp3252= p;
struct nctempchar1 *nctemp3256;
static struct nctempchar1 nctemp3257 = {{ 6}, (char*)" *a; \0"};
nctemp3256=&nctemp3257;
nctempchar1* nctemp3254= nctemp3256;
int nctemp3258=CodeEs(nctemp3252,nctemp3254);
struct tree* nctemp3260= p;
struct nctempchar1 *nctemp3264;
static struct nctempchar1 nctemp3265 = {{ 3}, (char*)"} \0"};
nctemp3264=&nctemp3265;
nctempchar1* nctemp3262= nctemp3264;
int nctemp3266=CodeEs(nctemp3260,nctemp3262);
struct tree* nctemp3268= p;
struct nctempchar1 *nctemp3272;
static struct nctempchar1 nctemp3273 = {{ 4}, (char*)";\n\0"};
nctemp3272=&nctemp3273;
nctempchar1* nctemp3270= nctemp3272;
int nctemp3274=CodeEs(nctemp3268,nctemp3270);
struct tree* nctemp3276= p;
struct nctempchar1 *nctemp3280;
static struct nctempchar1 nctemp3281 = {{ 8}, (char*)"struct \0"};
nctemp3280=&nctemp3281;
nctempchar1* nctemp3278= nctemp3280;
int nctemp3282=CodeEs(nctemp3276,nctemp3278);
struct tree* nctemp3284= p;
struct nctempchar1 *nctemp3288;
static struct nctempchar1 nctemp3289 = {{ 7}, (char*)"nctemp\0"};
nctemp3288=&nctemp3289;
nctempchar1* nctemp3286= nctemp3288;
int nctemp3290=CodeEs(nctemp3284,nctemp3286);
struct tree* nctemp3292= p;
struct symbol* nctemp3296= tp;
nctempchar1* nctemp3298=SymGetype(nctemp3296);
nctempchar1* nctemp3294= nctemp3298;
int nctemp3299=CodeEs(nctemp3292,nctemp3294);
struct tree* nctemp3301= p;
struct nctempchar1 *nctemp3305;
static struct nctempchar1 nctemp3306 = {{ 2}, (char*)"4\0"};
nctemp3305=&nctemp3306;
nctempchar1* nctemp3303= nctemp3305;
int nctemp3307=CodeEs(nctemp3301,nctemp3303);
struct tree* nctemp3309= p;
struct nctempchar1 *nctemp3313;
static struct nctempchar1 nctemp3314 = {{ 20}, (char*)" {int d[4]; struct \0"};
nctemp3313=&nctemp3314;
nctempchar1* nctemp3311= nctemp3313;
int nctemp3315=CodeEs(nctemp3309,nctemp3311);
struct tree* nctemp3317= p;
struct symbol* nctemp3321= tp;
nctempchar1* nctemp3323=SymGetype(nctemp3321);
nctempchar1* nctemp3319= nctemp3323;
int nctemp3324=CodeEs(nctemp3317,nctemp3319);
struct tree* nctemp3326= p;
struct nctempchar1 *nctemp3330;
static struct nctempchar1 nctemp3331 = {{ 6}, (char*)" *a; \0"};
nctemp3330=&nctemp3331;
nctempchar1* nctemp3328= nctemp3330;
int nctemp3332=CodeEs(nctemp3326,nctemp3328);
struct tree* nctemp3334= p;
struct nctempchar1 *nctemp3338;
static struct nctempchar1 nctemp3339 = {{ 3}, (char*)"} \0"};
nctemp3338=&nctemp3339;
nctempchar1* nctemp3336= nctemp3338;
int nctemp3340=CodeEs(nctemp3334,nctemp3336);
struct tree* nctemp3342= p;
struct nctempchar1 *nctemp3346;
static struct nctempchar1 nctemp3347 = {{ 4}, (char*)";\n\0"};
nctemp3346=&nctemp3347;
nctempchar1* nctemp3344= nctemp3346;
int nctemp3348=CodeEs(nctemp3342,nctemp3344);
return 1;
}
int CodeFdeclaration (struct tree* p,struct symbol* tp)
{
int noargs;
struct symbol* nctemp3355= tp;
nctempchar1* nctemp3357=SymGetstruct(nctemp3355);
nctempchar1* nctemp3353= nctemp3357;
struct nctempchar1 *nctemp3360;
static struct nctempchar1 nctemp3361 = {{ 7}, (char*)"struct\0"};
nctemp3360=&nctemp3361;
nctempchar1* nctemp3358= nctemp3360;
int nctemp3362=LibeStrcmp(nctemp3353,nctemp3358);
int nctemp3350 = (nctemp3362 ==1);
if(nctemp3350)
{
struct tree* nctemp3365= p;
struct nctempchar1 *nctemp3369;
static struct nctempchar1 nctemp3370 = {{ 8}, (char*)"struct \0"};
nctemp3369=&nctemp3370;
nctempchar1* nctemp3367= nctemp3369;
int nctemp3371=CodeEs(nctemp3365,nctemp3367);
}
struct symbol* nctemp3377= tp;
nctempchar1* nctemp3379=SymGetarray(nctemp3377);
nctempchar1* nctemp3375= nctemp3379;
struct nctempchar1 *nctemp3382;
static struct nctempchar1 nctemp3383 = {{ 6}, (char*)"array\0"};
nctemp3382=&nctemp3383;
nctempchar1* nctemp3380= nctemp3382;
int nctemp3384=LibeStrcmp(nctemp3375,nctemp3380);
int nctemp3372 = (nctemp3384 ==1);
if(nctemp3372)
{
struct tree* nctemp3387= p;
struct nctempchar1 *nctemp3391;
static struct nctempchar1 nctemp3392 = {{ 7}, (char*)"nctemp\0"};
nctemp3391=&nctemp3392;
nctempchar1* nctemp3389= nctemp3391;
int nctemp3393=CodeEs(nctemp3387,nctemp3389);
}
struct tree* nctemp3395= p;
struct symbol* nctemp3399= tp;
nctempchar1* nctemp3401=SymGetype(nctemp3399);
nctempchar1* nctemp3397= nctemp3401;
int nctemp3402=CodeEs(nctemp3395,nctemp3397);
struct symbol* nctemp3408= tp;
nctempchar1* nctemp3410=SymGetarray(nctemp3408);
nctempchar1* nctemp3406= nctemp3410;
struct nctempchar1 *nctemp3413;
static struct nctempchar1 nctemp3414 = {{ 6}, (char*)"array\0"};
nctemp3413=&nctemp3414;
nctempchar1* nctemp3411= nctemp3413;
int nctemp3415=LibeStrcmp(nctemp3406,nctemp3411);
int nctemp3403 = (nctemp3415 ==1);
if(nctemp3403)
{
struct symbol* nctemp3420= tp;
int nctemp3422=SymGetrank(nctemp3420);
int nctemp3418= nctemp3422;
int nctemp3423=CodeEd(nctemp3418);
struct tree* nctemp3425= p;
struct nctempchar1 *nctemp3429;
static struct nctempchar1 nctemp3430 = {{ 2}, (char*)"*\0"};
nctemp3429=&nctemp3430;
nctempchar1* nctemp3427= nctemp3429;
int nctemp3431=CodeEs(nctemp3425,nctemp3427);
}
struct symbol* nctemp3437= tp;
nctempchar1* nctemp3439=SymGetstruct(nctemp3437);
nctempchar1* nctemp3435= nctemp3439;
struct nctempchar1 *nctemp3442;
static struct nctempchar1 nctemp3443 = {{ 7}, (char*)"struct\0"};
nctemp3442=&nctemp3443;
nctempchar1* nctemp3440= nctemp3442;
int nctemp3444=LibeStrcmp(nctemp3435,nctemp3440);
int nctemp3432 = (nctemp3444 ==1);
if(nctemp3432)
{
struct tree* nctemp3447= p;
struct nctempchar1 *nctemp3451;
static struct nctempchar1 nctemp3452 = {{ 2}, (char*)"*\0"};
nctemp3451=&nctemp3452;
nctempchar1* nctemp3449= nctemp3451;
int nctemp3453=CodeEs(nctemp3447,nctemp3449);
}
struct tree* nctemp3455= p;
struct nctempchar1 *nctemp3459;
static struct nctempchar1 nctemp3460 = {{ 2}, (char*)" \0"};
nctemp3459=&nctemp3460;
nctempchar1* nctemp3457= nctemp3459;
int nctemp3461=CodeEs(nctemp3455,nctemp3457);
struct tree* nctemp3463= p;
struct symbol* nctemp3467= tp;
nctempchar1* nctemp3469=SymGetname(nctemp3467);
nctempchar1* nctemp3465= nctemp3469;
int nctemp3470=CodeEs(nctemp3463,nctemp3465);
struct tree* nctemp3472= p;
struct nctempchar1 *nctemp3476;
static struct nctempchar1 nctemp3477 = {{ 3}, (char*)" (\0"};
nctemp3476=&nctemp3477;
nctempchar1* nctemp3474= nctemp3476;
int nctemp3478=CodeEs(nctemp3472,nctemp3474);
struct symbol* nctemp3483= tp;
struct symbol* nctemp3485=SymGetable(nctemp3483);
tp =nctemp3485;
struct nctempchar1 *nctemp3492;
static struct nctempchar1 nctemp3493 = {{ 9}, (char*)"#arglist\0"};
nctemp3492=&nctemp3493;
nctempchar1* nctemp3490= nctemp3492;
struct symbol* nctemp3494= tp;
struct symbol* nctemp3496=SymLookup(nctemp3490,nctemp3494);
tp =nctemp3496;
struct symbol* nctemp3501= tp;
struct symbol* nctemp3503=SymGetable(nctemp3501);
tp =nctemp3503;
noargs = 0;
struct symbol* nctemp3511= tp;
struct symbol* nctemp3513=SymMvnext(nctemp3511);
tp =nctemp3513;
int nctemp3504 = (tp !=0);
int nctemp3515=nctemp3504;
while(nctemp3515)
{{
struct tree* nctemp3517= p;
struct symbol* nctemp3519= tp;
int nctemp3521=CodeIdeclaration(nctemp3517,nctemp3519);
struct symbol* nctemp3525= tp;
struct symbol* nctemp3527=SymMvnext(nctemp3525);
int nctemp3522 = (nctemp3527 !=0);
if(nctemp3522)
{
struct tree* nctemp3530= p;
struct nctempchar1 *nctemp3534;
static struct nctempchar1 nctemp3535 = {{ 2}, (char*)",\0"};
nctemp3534=&nctemp3535;
nctempchar1* nctemp3532= nctemp3534;
int nctemp3536=CodeEs(nctemp3530,nctemp3532);
}
noargs = (noargs + 1);
}
struct symbol* nctemp3544= tp;
struct symbol* nctemp3546=SymMvnext(nctemp3544);
tp =nctemp3546;
int nctemp3537 = (tp !=0);
nctemp3515=nctemp3537;}struct tree* nctemp3549= p;
struct nctempchar1 *nctemp3553;
static struct nctempchar1 nctemp3554 = {{ 5}, (char*)");\n\0"};
nctemp3553=&nctemp3554;
nctempchar1* nctemp3551= nctemp3553;
int nctemp3555=CodeEs(nctemp3549,nctemp3551);
return 1;
}
int CodeWdeclaration (struct tree* p)
{
struct tree* np;
struct tree* nctemp3561= p;
struct tree* nctemp3563=PtreeMvchild(nctemp3561);
np =nctemp3563;
int nctemp3564 = (np !=0);
int nctemp3568=nctemp3564;
while(nctemp3568)
{{
struct tree* nctemp3574= np;
nctempchar1* nctemp3576=PtreeGetname(nctemp3574);
nctempchar1* nctemp3572= nctemp3576;
struct nctempchar1 *nctemp3579;
static struct nctempchar1 nctemp3580 = {{ 5}, (char*)"fdef\0"};
nctemp3579=&nctemp3580;
nctempchar1* nctemp3577= nctemp3579;
int nctemp3581=LibeStrcmp(nctemp3572,nctemp3577);
int nctemp3569 = (nctemp3581 ==1);
if(nctemp3569)
{
struct tree* nctemp3584= np;
int nctemp3586=CodeFdef(nctemp3584);
}
struct tree* nctemp3591= np;
struct tree* nctemp3593=PtreeMvsister(nctemp3591);
np =nctemp3593;
}
int nctemp3594 = (np !=0);
nctemp3568=nctemp3594;}return 1;
}
int CodeWdeclarations (struct tree* p)
{
int nctemp3599 = (p !=0);
int nctemp3603=nctemp3599;
while(nctemp3603)
{{
struct tree* nctemp3612= p;
nctempchar1* nctemp3614=PtreeGetname(nctemp3612);
nctempchar1* nctemp3610= nctemp3614;
struct nctempchar1 *nctemp3617;
static struct nctempchar1 nctemp3618 = {{ 5}, (char*)"type\0"};
nctemp3617=&nctemp3618;
nctempchar1* nctemp3615= nctemp3617;
int nctemp3619=LibeStrcmp(nctemp3610,nctemp3615);
int nctemp3607 = (nctemp3619 ==1);
struct tree* nctemp3627= p;
nctempchar1* nctemp3629=PtreeGetname(nctemp3627);
nctempchar1* nctemp3625= nctemp3629;
struct nctempchar1 *nctemp3632;
static struct nctempchar1 nctemp3633 = {{ 7}, (char*)"struct\0"};
nctemp3632=&nctemp3633;
nctempchar1* nctemp3630= nctemp3632;
int nctemp3634=LibeStrcmp(nctemp3625,nctemp3630);
int nctemp3622 = (nctemp3634 ==1);
int nctemp3604 = (nctemp3607 || nctemp3622);
if(nctemp3604)
{
struct tree* nctemp3637= p;
int nctemp3639=CodeWdeclaration(nctemp3637);
}
struct tree* nctemp3644= p;
struct tree* nctemp3646=PtreeMvsister(nctemp3644);
p =nctemp3646;
}
int nctemp3647 = (p !=0);
nctemp3603=nctemp3647;}return 1;
}
int CodeArrayex (int line,nctempchar1 *qual,nctempchar1 *sel,nctempchar1 *name,nctempchar1 *ival,int index)
{
struct tree* p;
nctempchar1 *tmp;
nctempchar1 *qname;
struct nctempchar1 *nctemp3658;
static struct nctempchar1 nctemp3659 = {{ 6}, (char*)"dummy\0"};
nctemp3658=&nctemp3659;
nctempchar1* nctemp3656= nctemp3658;
struct nctempchar1 *nctemp3662;
static struct nctempchar1 nctemp3663 = {{ 6}, (char*)"dummy\0"};
nctemp3662=&nctemp3663;
nctempchar1* nctemp3660= nctemp3662;
struct tree* nctemp3664=PtreeMknode(nctemp3656,nctemp3660);
p =nctemp3664;
struct tree* nctemp3666= p;
int nctemp3668= line;
int nctemp3670=PtreeSetline(nctemp3666,nctemp3668);
qname = name;
nctempchar1 *nctemp3672 =qual;
int nctemp3671 =(nctemp3672!=0);
if(nctemp3671)
{
nctempchar1* nctemp3681= qual;
struct nctempchar1 *nctemp3686;
static struct nctempchar1 nctemp3687 = {{ 3}, (char*)"->\0"};
nctemp3686=&nctemp3687;
nctempchar1* nctemp3684= nctemp3686;
nctempchar1* nctemp3688=LibeStradd(nctemp3681,nctemp3684);
tmp=nctemp3688;
nctempchar1* nctemp3694= tmp;
nctempchar1* nctemp3697= name;
nctempchar1* nctemp3700=LibeStradd(nctemp3694,nctemp3697);
qname=nctemp3700;
RunFree(tmp->a);
RunFree(tmp);
}
struct tree* nctemp3705= p;
struct nctempchar1 *nctemp3709;
static struct nctempchar1 nctemp3710 = {{ 7}, (char*)"if((0>\0"};
nctemp3709=&nctemp3710;
nctempchar1* nctemp3707= nctemp3709;
int nctemp3711=CodeEs(nctemp3705,nctemp3707);
struct tree* nctemp3713= p;
nctempchar1* nctemp3715= ival;
int nctemp3718=CodeEs(nctemp3713,nctemp3715);
struct tree* nctemp3720= p;
struct nctempchar1 *nctemp3724;
static struct nctempchar1 nctemp3725 = {{ 5}, (char*)")||(\0"};
nctemp3724=&nctemp3725;
nctempchar1* nctemp3722= nctemp3724;
int nctemp3726=CodeEs(nctemp3720,nctemp3722);
struct tree* nctemp3728= p;
nctempchar1* nctemp3730= ival;
int nctemp3733=CodeEs(nctemp3728,nctemp3730);
struct tree* nctemp3735= p;
struct nctempchar1 *nctemp3739;
static struct nctempchar1 nctemp3740 = {{ 3}, (char*)">=\0"};
nctemp3739=&nctemp3740;
nctempchar1* nctemp3737= nctemp3739;
int nctemp3741=CodeEs(nctemp3735,nctemp3737);
nctempchar1 *nctemp3743 =qual;
int nctemp3742 =(nctemp3743!=0);
if(nctemp3742)
{
struct tree* nctemp3748= p;
nctempchar1* nctemp3750= qual;
int nctemp3753=CodeEs(nctemp3748,nctemp3750);
struct tree* nctemp3755= p;
nctempchar1* nctemp3757= sel;
int nctemp3760=CodeEs(nctemp3755,nctemp3757);
}
struct tree* nctemp3762= p;
nctempchar1* nctemp3764= name;
int nctemp3767=CodeEs(nctemp3762,nctemp3764);
struct tree* nctemp3769= p;
struct nctempchar1 *nctemp3773;
static struct nctempchar1 nctemp3774 = {{ 5}, (char*)"->d[\0"};
nctemp3773=&nctemp3774;
nctempchar1* nctemp3771= nctemp3773;
int nctemp3775=CodeEs(nctemp3769,nctemp3771);
int nctemp3777= index;
int nctemp3779=CodeEd(nctemp3777);
struct tree* nctemp3781= p;
struct nctempchar1 *nctemp3785;
static struct nctempchar1 nctemp3786 = {{ 7}, (char*)"])){\n\0"};
nctemp3785=&nctemp3786;
nctempchar1* nctemp3783= nctemp3785;
int nctemp3787=CodeEs(nctemp3781,nctemp3783);
struct tree* nctemp3789= p;
struct nctempchar1 *nctemp3793;
static struct nctempchar1 nctemp3794 = {{ 67}, (char*)"printf(\"***Out of bounds error (file,array,line,index,rank,bound:\0"};
nctemp3793=&nctemp3794;
nctempchar1* nctemp3791= nctemp3793;
int nctemp3795=CodeEs(nctemp3789,nctemp3791);
struct tree* nctemp3797= p;
nctempchar1* nctemp3801=ScanGetfile();
nctempchar1* nctemp3799= nctemp3801;
int nctemp3802=CodeEs(nctemp3797,nctemp3799);
struct tree* nctemp3804= p;
struct nctempchar1 *nctemp3808;
static struct nctempchar1 nctemp3809 = {{ 2}, (char*)" \0"};
nctemp3808=&nctemp3809;
nctempchar1* nctemp3806= nctemp3808;
int nctemp3810=CodeEs(nctemp3804,nctemp3806);
struct tree* nctemp3812= p;
nctempchar1* nctemp3814= qname;
int nctemp3817=CodeEs(nctemp3812,nctemp3814);
struct tree* nctemp3819= p;
struct nctempchar1 *nctemp3823;
static struct nctempchar1 nctemp3824 = {{ 17}, (char*)" %d %d %d %d \\n\0"};
nctemp3823=&nctemp3824;
nctempchar1* nctemp3821= nctemp3823;
int nctemp3825=CodeEs(nctemp3819,nctemp3821);
struct tree* nctemp3827= p;
struct nctempchar1 *nctemp3831;
static struct nctempchar1 nctemp3832 = {{ 6}, (char*)" \" ,\0"};
nctemp3831=&nctemp3832;
nctempchar1* nctemp3829= nctemp3831;
int nctemp3833=CodeEs(nctemp3827,nctemp3829);
int nctemp3835= line;
int nctemp3837=CodeEd(nctemp3835);
struct tree* nctemp3839= p;
struct nctempchar1 *nctemp3843;
static struct nctempchar1 nctemp3844 = {{ 2}, (char*)",\0"};
nctemp3843=&nctemp3844;
nctempchar1* nctemp3841= nctemp3843;
int nctemp3845=CodeEs(nctemp3839,nctemp3841);
struct tree* nctemp3847= p;
nctempchar1* nctemp3849= ival;
int nctemp3852=CodeEs(nctemp3847,nctemp3849);
struct tree* nctemp3854= p;
struct nctempchar1 *nctemp3858;
static struct nctempchar1 nctemp3859 = {{ 2}, (char*)",\0"};
nctemp3858=&nctemp3859;
nctempchar1* nctemp3856= nctemp3858;
int nctemp3860=CodeEs(nctemp3854,nctemp3856);
int nctemp3862= index;
int nctemp3864=CodeEd(nctemp3862);
struct tree* nctemp3866= p;
struct nctempchar1 *nctemp3870;
static struct nctempchar1 nctemp3871 = {{ 2}, (char*)",\0"};
nctemp3870=&nctemp3871;
nctempchar1* nctemp3868= nctemp3870;
int nctemp3872=CodeEs(nctemp3866,nctemp3868);
struct tree* nctemp3874= p;
nctempchar1* nctemp3876= qname;
int nctemp3879=CodeEs(nctemp3874,nctemp3876);
struct tree* nctemp3881= p;
struct nctempchar1 *nctemp3885;
static struct nctempchar1 nctemp3886 = {{ 5}, (char*)"->d[\0"};
nctemp3885=&nctemp3886;
nctempchar1* nctemp3883= nctemp3885;
int nctemp3887=CodeEs(nctemp3881,nctemp3883);
int nctemp3889= index;
int nctemp3891=CodeEd(nctemp3889);
struct tree* nctemp3893= p;
struct nctempchar1 *nctemp3897;
static struct nctempchar1 nctemp3898 = {{ 4}, (char*)"]-1\0"};
nctemp3897=&nctemp3898;
nctempchar1* nctemp3895= nctemp3897;
int nctemp3899=CodeEs(nctemp3893,nctemp3895);
struct tree* nctemp3901= p;
struct nctempchar1 *nctemp3905;
static struct nctempchar1 nctemp3906 = {{ 3}, (char*)");\0"};
nctemp3905=&nctemp3906;
nctempchar1* nctemp3903= nctemp3905;
int nctemp3907=CodeEs(nctemp3901,nctemp3903);
struct tree* nctemp3909= p;
struct nctempchar1 *nctemp3913;
static struct nctempchar1 nctemp3914 = {{ 6}, (char*)"\n}\n\0"};
nctemp3913=&nctemp3914;
nctempchar1* nctemp3911= nctemp3913;
int nctemp3915=CodeEs(nctemp3909,nctemp3911);
nctempchar1 *nctemp3917 =qual;
int nctemp3916 =(nctemp3917!=0);
if(nctemp3916)
{
RunFree(qname->a);
RunFree(qname);
}
return 1;
}
nctempchar1 * CodeArray (struct tree* p,nctempchar1 *qual,nctempchar1 *sel)
{
nctempchar1 *name;
nctempchar1 *temp;
nctempchar1 *temp2;
struct symbol* tp;
struct tree* sp;
int rank;
int size;
nctempchar1 *rval;
int i;
struct tree* nctemp3930= p;
nctempchar1* nctemp3932=PtreeGetdef(nctemp3930);
name=nctemp3932;
nctempchar1* nctemp3938=CodeMktemp();
temp=nctemp3938;
nctempchar1* nctemp3943= name;
struct symbol* nctemp3946=SymLook(nctemp3943);
tp =nctemp3946;
int nctemp3947 = (tp ==0);
if(nctemp3947)
{
int nctemp3952= 4;
struct nctempchar1 *nctemp3956;
static struct nctempchar1 nctemp3957 = {{ 13}, (char*)"At CodeArray\0"};
nctemp3956=&nctemp3957;
nctempchar1* nctemp3954= nctemp3956;
int nctemp3958=LibePuts(nctemp3952,nctemp3954);
nctempchar1* nctemp3960= name;
int nctemp3963=CodeError(nctemp3960);
}
struct tree* nctemp3968= p;
struct tree* nctemp3970=PtreeMvchild(nctemp3968);
sp =nctemp3970;
int nctemp3971 = (sp ==0);
if(nctemp3971)
{
struct tree* nctemp3976= p;
nctempchar1* nctemp3978=PtreeGetdef(nctemp3976);
return nctemp3978;
}
else{
struct tree* nctemp3984= sp;
nctempchar1* nctemp3986=PtreeGetname(nctemp3984);
nctempchar1* nctemp3982= nctemp3986;
struct nctempchar1 *nctemp3989;
static struct nctempchar1 nctemp3990 = {{ 9}, (char*)"exprlist\0"};
nctemp3989=&nctemp3990;
nctempchar1* nctemp3987= nctemp3989;
int nctemp3991=LibeStrcmp(nctemp3982,nctemp3987);
int nctemp3979 = (nctemp3991 ==0);
if(nctemp3979)
{
struct tree* nctemp3994= p;
nctempchar1* nctemp3996=PtreeGetdef(nctemp3994);
return nctemp3996;
}
}
struct symbol* nctemp4001= tp;
int nctemp4003=SymGetrank(nctemp4001);
rank =nctemp4003;
struct tree* nctemp4008= p;
struct tree* nctemp4010=PtreeMvchild(nctemp4008);
p =nctemp4010;
struct tree* nctemp4015= p;
struct tree* nctemp4017=PtreeMvchild(nctemp4015);
p =nctemp4017;
sp = p;
for(i = 0;i < rank;i = (i + 1)){
int nctemp4018 = (i ==0);
if(nctemp4018)
{
struct tree* nctemp4027= p;
nctempchar1* nctemp4029=CodeExpr(nctemp4027);
temp2=nctemp4029;
struct tree* nctemp4031= p;
struct tree* nctemp4035= p;
nctempchar1* nctemp4037=PtreeGetype(nctemp4035);
nctempchar1* nctemp4033= nctemp4037;
int nctemp4038=CodeEs(nctemp4031,nctemp4033);
struct tree* nctemp4040= p;
struct nctempchar1 *nctemp4044;
static struct nctempchar1 nctemp4045 = {{ 2}, (char*)" \0"};
nctemp4044=&nctemp4045;
nctempchar1* nctemp4042= nctemp4044;
int nctemp4046=CodeEs(nctemp4040,nctemp4042);
struct tree* nctemp4048= p;
nctempchar1* nctemp4050= temp;
int nctemp4053=CodeEs(nctemp4048,nctemp4050);
struct tree* nctemp4055= p;
struct nctempchar1 *nctemp4059;
static struct nctempchar1 nctemp4060 = {{ 2}, (char*)"=\0"};
nctemp4059=&nctemp4060;
nctempchar1* nctemp4057= nctemp4059;
int nctemp4061=CodeEs(nctemp4055,nctemp4057);
struct tree* nctemp4063= p;
nctempchar1* nctemp4065= temp2;
int nctemp4068=CodeEs(nctemp4063,nctemp4065);
struct tree* nctemp4070= p;
struct nctempchar1 *nctemp4074;
static struct nctempchar1 nctemp4075 = {{ 4}, (char*)";\n\0"};
nctemp4074=&nctemp4075;
nctempchar1* nctemp4072= nctemp4074;
int nctemp4076=CodeEs(nctemp4070,nctemp4072);
int nctemp4078=CodeArraycheck();
if(nctemp4078)
{
struct tree* nctemp4082= p;
int nctemp4084=PtreeGetline(nctemp4082);
int nctemp4080= nctemp4084;
nctempchar1* nctemp4085= qual;
nctempchar1* nctemp4088= sel;
nctempchar1* nctemp4091= name;
nctempchar1* nctemp4094= temp2;
int nctemp4097= i;
int nctemp4099=CodeArrayex(nctemp4080,nctemp4085,nctemp4088,nctemp4091,nctemp4094,nctemp4097);
}
}
else{
struct tree* nctemp4105= sp;
nctempchar1* nctemp4107=CodeExpr(nctemp4105);
temp2=nctemp4107;
struct tree* nctemp4109= p;
nctempchar1* nctemp4111= temp;
int nctemp4114=CodeEs(nctemp4109,nctemp4111);
struct tree* nctemp4116= p;
struct nctempchar1 *nctemp4120;
static struct nctempchar1 nctemp4121 = {{ 2}, (char*)"=\0"};
nctemp4120=&nctemp4121;
nctempchar1* nctemp4118= nctemp4120;
int nctemp4122=CodeEs(nctemp4116,nctemp4118);
struct tree* nctemp4124= p;
nctempchar1* nctemp4126= temp2;
int nctemp4129=CodeEs(nctemp4124,nctemp4126);
struct tree* nctemp4131= p;
struct nctempchar1 *nctemp4135;
static struct nctempchar1 nctemp4136 = {{ 2}, (char*)"*\0"};
nctemp4135=&nctemp4136;
nctempchar1* nctemp4133= nctemp4135;
int nctemp4137=CodeEs(nctemp4131,nctemp4133);
nctempchar1 *nctemp4139 =qual;
int nctemp4138 =(nctemp4139!=0);
if(nctemp4138)
{
struct tree* nctemp4144= p;
nctempchar1* nctemp4146= qual;
int nctemp4149=CodeEs(nctemp4144,nctemp4146);
}
nctempchar1 *nctemp4151 =sel;
int nctemp4150 =(nctemp4151!=0);
if(nctemp4150)
{
struct tree* nctemp4156= p;
nctempchar1* nctemp4158= sel;
int nctemp4161=CodeEs(nctemp4156,nctemp4158);
}
struct tree* nctemp4163= p;
nctempchar1* nctemp4165= name;
int nctemp4168=CodeEs(nctemp4163,nctemp4165);
struct tree* nctemp4170= p;
struct nctempchar1 *nctemp4174;
static struct nctempchar1 nctemp4175 = {{ 4}, (char*)"->d\0"};
nctemp4174=&nctemp4175;
nctempchar1* nctemp4172= nctemp4174;
int nctemp4176=CodeEs(nctemp4170,nctemp4172);
struct tree* nctemp4178= p;
struct nctempchar1 *nctemp4182;
static struct nctempchar1 nctemp4183 = {{ 2}, (char*)"[\0"};
nctemp4182=&nctemp4183;
nctempchar1* nctemp4180= nctemp4182;
int nctemp4184=CodeEs(nctemp4178,nctemp4180);
int nctemp4191 = i - 1;
int nctemp4186= nctemp4191;
int nctemp4192=CodeEd(nctemp4186);
struct tree* nctemp4194= p;
struct nctempchar1 *nctemp4198;
static struct nctempchar1 nctemp4199 = {{ 2}, (char*)"]\0"};
nctemp4198=&nctemp4199;
nctempchar1* nctemp4196= nctemp4198;
int nctemp4200=CodeEs(nctemp4194,nctemp4196);
struct tree* nctemp4202= p;
struct nctempchar1 *nctemp4206;
static struct nctempchar1 nctemp4207 = {{ 2}, (char*)"+\0"};
nctemp4206=&nctemp4207;
nctempchar1* nctemp4204= nctemp4206;
int nctemp4208=CodeEs(nctemp4202,nctemp4204);
struct tree* nctemp4210= p;
nctempchar1* nctemp4212= temp;
int nctemp4215=CodeEs(nctemp4210,nctemp4212);
struct tree* nctemp4217= p;
struct nctempchar1 *nctemp4221;
static struct nctempchar1 nctemp4222 = {{ 4}, (char*)";\n\0"};
nctemp4221=&nctemp4222;
nctempchar1* nctemp4219= nctemp4221;
int nctemp4223=CodeEs(nctemp4217,nctemp4219);
int nctemp4225=CodeArraycheck();
if(nctemp4225)
{
struct tree* nctemp4229= p;
int nctemp4231=PtreeGetline(nctemp4229);
int nctemp4227= nctemp4231;
nctempchar1* nctemp4232= qual;
nctempchar1* nctemp4235= sel;
nctempchar1* nctemp4238= name;
nctempchar1* nctemp4241= temp2;
int nctemp4244= i;
int nctemp4246=CodeArrayex(nctemp4227,nctemp4232,nctemp4235,nctemp4238,nctemp4241,nctemp4244);
}
}
int nctemp4247 = (sp !=0);
if(nctemp4247)
{
struct tree* nctemp4255= sp;
struct tree* nctemp4257=PtreeMvsister(nctemp4255);
sp =nctemp4257;
}
}
nctempchar1* nctemp4268= name;
int nctemp4271=LibeStrlen(nctemp4268);
nctempchar1* nctemp4273= temp;
int nctemp4276=LibeStrlen(nctemp4273);
int nctemp4277 = nctemp4271 + nctemp4276;
int nctemp4279 = nctemp4277 + 6;
size =nctemp4279;
int nctemp4286=size;
nctempchar1 *nctemp4285;
nctemp4285=(nctempchar1*)RunMalloc(sizeof(nctempchar1));
nctemp4285->d[0]=size;
nctemp4285->a=(char *)RunMalloc(sizeof(char)*nctemp4286);
rval=nctemp4285;
nctempchar1* nctemp4290= name;
nctempchar1* nctemp4293= rval;
int nctemp4296=LibeStrcpy(nctemp4290,nctemp4293);
struct nctempchar1 *nctemp4300;
static struct nctempchar1 nctemp4301 = {{ 4}, (char*)"->a\0"};
nctemp4300=&nctemp4301;
nctempchar1* nctemp4298= nctemp4300;
nctempchar1* nctemp4302= rval;
int nctemp4305=LibeStrcat(nctemp4298,nctemp4302);
struct nctempchar1 *nctemp4309;
static struct nctempchar1 nctemp4310 = {{ 2}, (char*)"[\0"};
nctemp4309=&nctemp4310;
nctempchar1* nctemp4307= nctemp4309;
nctempchar1* nctemp4311= rval;
int nctemp4314=LibeStrcat(nctemp4307,nctemp4311);
nctempchar1* nctemp4316= temp;
nctempchar1* nctemp4319= rval;
int nctemp4322=LibeStrcat(nctemp4316,nctemp4319);
struct nctempchar1 *nctemp4326;
static struct nctempchar1 nctemp4327 = {{ 2}, (char*)"]\0"};
nctemp4326=&nctemp4327;
nctempchar1* nctemp4324= nctemp4326;
nctempchar1* nctemp4328= rval;
int nctemp4331=LibeStrcat(nctemp4324,nctemp4328);
return rval;
}
nctempchar1 * CodeQident (nctempchar1 *qual,nctempchar1 *ident)
{
int lq;
int li;
nctempchar1 *name;
nctempchar1* nctemp4338= qual;
int nctemp4341=LibeStrlen(nctemp4338);
lq =nctemp4341;
nctempchar1* nctemp4346= ident;
int nctemp4349=LibeStrlen(nctemp4346);
li =nctemp4349;
int nctemp4364 = lq + li;
int nctemp4366 = nctemp4364 + 2;
int nctemp4356=nctemp4366;
nctempchar1 *nctemp4355;
nctemp4355=(nctempchar1*)RunMalloc(sizeof(nctempchar1));
int nctemp4374 = lq + li;
int nctemp4376 = nctemp4374 + 2;
nctemp4355->d[0]=nctemp4376;
nctemp4355->a=(char *)RunMalloc(sizeof(char)*nctemp4356);
name=nctemp4355;
nctempchar1* nctemp4378= qual;
nctempchar1* nctemp4381= name;
int nctemp4384=LibeStrcpy(nctemp4378,nctemp4381);
struct nctempchar1 *nctemp4388;
static struct nctempchar1 nctemp4389 = {{ 2}, (char*)".\0"};
nctemp4388=&nctemp4389;
nctempchar1* nctemp4386= nctemp4388;
nctempchar1* nctemp4390= name;
int nctemp4393=LibeStrcat(nctemp4386,nctemp4390);
nctempchar1* nctemp4395= ident;
nctempchar1* nctemp4398= name;
int nctemp4401=LibeStrcat(nctemp4395,nctemp4398);
return name;
}
nctempchar1 * CodeQident2 (nctempchar1 *qual,nctempchar1 *ident)
{
int lq;
int li;
nctempchar1 *name;
nctempchar1* nctemp4408= qual;
int nctemp4411=LibeStrlen(nctemp4408);
lq =nctemp4411;
nctempchar1* nctemp4416= ident;
int nctemp4419=LibeStrlen(nctemp4416);
li =nctemp4419;
int nctemp4434 = lq + li;
int nctemp4436 = nctemp4434 + 3;
int nctemp4426=nctemp4436;
nctempchar1 *nctemp4425;
nctemp4425=(nctempchar1*)RunMalloc(sizeof(nctempchar1));
int nctemp4444 = lq + li;
int nctemp4446 = nctemp4444 + 3;
nctemp4425->d[0]=nctemp4446;
nctemp4425->a=(char *)RunMalloc(sizeof(char)*nctemp4426);
name=nctemp4425;
nctempchar1* nctemp4448= qual;
nctempchar1* nctemp4451= name;
int nctemp4454=LibeStrcpy(nctemp4448,nctemp4451);
struct nctempchar1 *nctemp4458;
static struct nctempchar1 nctemp4459 = {{ 3}, (char*)"->\0"};
nctemp4458=&nctemp4459;
nctempchar1* nctemp4456= nctemp4458;
nctempchar1* nctemp4460= name;
int nctemp4463=LibeStrcat(nctemp4456,nctemp4460);
nctempchar1* nctemp4465= ident;
nctempchar1* nctemp4468= name;
int nctemp4471=LibeStrcat(nctemp4465,nctemp4468);
return name;
}
nctempchar1 * CodeIdent (struct tree* p)
{
nctempchar1 *qual;
nctempchar1 *name;
struct symbol* tp;
struct symbol* up;
struct symbol* uup;
struct tree* np;
qual  = 0;
struct tree* nctemp4479= p;
nctempchar1* nctemp4481=PtreeGetstruct(nctemp4479);
nctempchar1* nctemp4477= nctemp4481;
struct nctempchar1 *nctemp4484;
static struct nctempchar1 nctemp4485 = {{ 7}, (char*)"struct\0"};
nctemp4484=&nctemp4485;
nctempchar1* nctemp4482= nctemp4484;
int nctemp4486=LibeStrcmp(nctemp4477,nctemp4482);
int nctemp4474 = (nctemp4486 ==1);
if(nctemp4474)
{
struct tree* nctemp4493= p;
nctempchar1* nctemp4495=PtreeGetarray(nctemp4493);
nctempchar1* nctemp4491= nctemp4495;
struct nctempchar1 *nctemp4498;
static struct nctempchar1 nctemp4499 = {{ 6}, (char*)"array\0"};
nctemp4498=&nctemp4499;
nctempchar1* nctemp4496= nctemp4498;
int nctemp4500=LibeStrcmp(nctemp4491,nctemp4496);
int nctemp4488 = (nctemp4500 ==1);
if(nctemp4488)
{
struct tree* nctemp4507= p;
nctempchar1* nctemp4509= qual;
struct nctempchar1 *nctemp4514;
static struct nctempchar1 nctemp4515 = {{ 2}, (char*)".\0"};
nctemp4514=&nctemp4515;
nctempchar1* nctemp4512= nctemp4514;
nctempchar1* nctemp4516=CodeArray(nctemp4507,nctemp4509,nctemp4512);
qual=nctemp4516;
struct tree* nctemp4521= p;
struct tree* nctemp4523=PtreeMvchild(nctemp4521);
np =nctemp4523;
int nctemp4524 = (np ==0);
if(nctemp4524)
{
return qual;
}
struct tree* nctemp4534= np;
struct tree* nctemp4536=PtreeMvsister(nctemp4534);
np =nctemp4536;
int nctemp4537 = (np ==0);
if(nctemp4537)
{
return qual;
}
}
else{
struct tree* nctemp4548= p;
nctempchar1* nctemp4550=PtreeGetdef(nctemp4548);
qual=nctemp4550;
struct tree* nctemp4558= p;
struct tree* nctemp4560=PtreeMvchild(nctemp4558);
np =nctemp4560;
int nctemp4551 = (np ==0);
if(nctemp4551)
{
return qual;
}
}
struct tree* nctemp4569= np;
nctempchar1* nctemp4571=PtreeGetarray(nctemp4569);
nctempchar1* nctemp4567= nctemp4571;
struct nctempchar1 *nctemp4574;
static struct nctempchar1 nctemp4575 = {{ 6}, (char*)"array\0"};
nctemp4574=&nctemp4575;
nctempchar1* nctemp4572= nctemp4574;
int nctemp4576=LibeStrcmp(nctemp4567,nctemp4572);
int nctemp4564 = (nctemp4576 ==1);
if(nctemp4564)
{
struct symbol* nctemp4582=SymGetltp();
tp =nctemp4582;
struct symbol* nctemp4587=SymGetetp();
up =nctemp4587;
struct tree* nctemp4594= p;
nctempchar1* nctemp4596=PtreeGetdef(nctemp4594);
nctempchar1* nctemp4592= nctemp4596;
struct symbol* nctemp4597=SymLook(nctemp4592);
uup =nctemp4597;
struct symbol* nctemp4604= uup;
nctempchar1* nctemp4606=SymGetype(nctemp4604);
nctempchar1* nctemp4602= nctemp4606;
struct symbol* nctemp4607=SymLook(nctemp4602);
uup =nctemp4607;
struct symbol* nctemp4611= uup;
struct symbol* nctemp4613=SymGetable(nctemp4611);
struct symbol* nctemp4609= nctemp4613;
int nctemp4614=SymSetltp(nctemp4609);
struct tree* nctemp4620= p;
nctempchar1* nctemp4622=PtreeGetarray(nctemp4620);
nctempchar1* nctemp4618= nctemp4622;
struct nctempchar1 *nctemp4625;
static struct nctempchar1 nctemp4626 = {{ 6}, (char*)"array\0"};
nctemp4625=&nctemp4626;
nctempchar1* nctemp4623= nctemp4625;
int nctemp4627=LibeStrcmp(nctemp4618,nctemp4623);
int nctemp4615 = (nctemp4627 ==1);
if(nctemp4615)
{
struct tree* nctemp4634= np;
nctempchar1* nctemp4636= qual;
struct nctempchar1 *nctemp4641;
static struct nctempchar1 nctemp4642 = {{ 2}, (char*)".\0"};
nctemp4641=&nctemp4642;
nctempchar1* nctemp4639= nctemp4641;
nctempchar1* nctemp4643=CodeArray(nctemp4634,nctemp4636,nctemp4639);
name=nctemp4643;
}
else{
struct tree* nctemp4649= np;
nctempchar1* nctemp4651= qual;
struct nctempchar1 *nctemp4656;
static struct nctempchar1 nctemp4657 = {{ 3}, (char*)"->\0"};
nctemp4656=&nctemp4657;
nctempchar1* nctemp4654= nctemp4656;
nctempchar1* nctemp4658=CodeArray(nctemp4649,nctemp4651,nctemp4654);
name=nctemp4658;
}
struct symbol* nctemp4660= tp;
int nctemp4662=SymSetltp(nctemp4660);
struct symbol* nctemp4664= up;
int nctemp4666=SymSetetp(nctemp4664);
}
else{
struct tree* nctemp4672= np;
nctempchar1* nctemp4674=PtreeGetdef(nctemp4672);
name=nctemp4674;
}
struct tree* nctemp4680= p;
nctempchar1* nctemp4682=PtreeGetarray(nctemp4680);
nctempchar1* nctemp4678= nctemp4682;
struct nctempchar1 *nctemp4685;
static struct nctempchar1 nctemp4686 = {{ 6}, (char*)"array\0"};
nctemp4685=&nctemp4686;
nctempchar1* nctemp4683= nctemp4685;
int nctemp4687=LibeStrcmp(nctemp4678,nctemp4683);
int nctemp4675 = (nctemp4687 ==1);
if(nctemp4675)
{
nctempchar1* nctemp4690= qual;
nctempchar1* nctemp4693= name;
nctempchar1* nctemp4696=CodeQident(nctemp4690,nctemp4693);
return nctemp4696;
}
else{
nctempchar1* nctemp4698= qual;
nctempchar1* nctemp4701= name;
nctempchar1* nctemp4704=CodeQident2(nctemp4698,nctemp4701);
return nctemp4704;
}
}
else{
struct tree* nctemp4710= p;
nctempchar1* nctemp4712=PtreeGetarray(nctemp4710);
nctempchar1* nctemp4708= nctemp4712;
struct nctempchar1 *nctemp4715;
static struct nctempchar1 nctemp4716 = {{ 6}, (char*)"array\0"};
nctemp4715=&nctemp4716;
nctempchar1* nctemp4713= nctemp4715;
int nctemp4717=LibeStrcmp(nctemp4708,nctemp4713);
int nctemp4705 = (nctemp4717 ==1);
if(nctemp4705)
{
name  = 0;
qual  = 0;
struct tree* nctemp4724= p;
nctempchar1* nctemp4726= qual;
nctempchar1* nctemp4729= name;
nctempchar1* nctemp4732=CodeArray(nctemp4724,nctemp4726,nctemp4729);
qual=nctemp4732;
return qual;
}
else{
struct tree* nctemp4736= p;
nctempchar1* nctemp4738=PtreeGetdef(nctemp4736);
return nctemp4738;
}
}
}
nctempchar1 * CodeNew (struct tree* p)
{
struct tree* sp;
struct tree* top;
nctempchar1 *type;
nctempchar1 *totdim;
nctempchar1 *dim;
nctempchar1 *pointer;
nctempchar1 *structflag;
nctempchar1 *arrayflag;
int rank;
int i;
nctempchar1* nctemp4744=CodeMktemp();
pointer=nctemp4744;
nctempchar1* nctemp4750=CodeMktemp();
totdim=nctemp4750;
struct tree* nctemp4755= p;
struct tree* nctemp4757=PtreeMvchild(nctemp4755);
p =nctemp4757;
struct tree* nctemp4763= p;
nctempchar1* nctemp4765=PtreeGetdef(nctemp4763);
type=nctemp4765;
struct tree* nctemp4771= p;
nctempchar1* nctemp4773=PtreeGetstruct(nctemp4771);
structflag=nctemp4773;
struct tree* nctemp4779= p;
nctempchar1* nctemp4781=PtreeGetarray(nctemp4779);
arrayflag=nctemp4781;
struct tree* nctemp4787= p;
nctempchar1* nctemp4789=PtreeGetarray(nctemp4787);
nctempchar1* nctemp4785= nctemp4789;
struct nctempchar1 *nctemp4792;
static struct nctempchar1 nctemp4793 = {{ 6}, (char*)"array\0"};
nctemp4792=&nctemp4793;
nctempchar1* nctemp4790= nctemp4792;
int nctemp4794=LibeStrcmp(nctemp4785,nctemp4790);
int nctemp4782 = (nctemp4794 ==1);
if(nctemp4782)
{
struct tree* nctemp4800= p;
struct tree* nctemp4802=PtreeMvchild(nctemp4800);
p =nctemp4802;
struct tree* nctemp4807= p;
struct tree* nctemp4809=PtreeMvchild(nctemp4807);
p =nctemp4809;
struct tree* nctemp4814= p;
struct tree* nctemp4816=PtreeMvchild(nctemp4814);
p =nctemp4816;
struct tree* nctemp4821= p;
struct tree* nctemp4823=PtreeMvchild(nctemp4821);
p =nctemp4823;
sp = p;
top = p;
rank = 1;
struct tree* nctemp4831= p;
struct tree* nctemp4833=PtreeMvsister(nctemp4831);
p =nctemp4833;
int nctemp4824 = (p !=0);
int nctemp4835=nctemp4824;
while(nctemp4835)
{{
rank = (rank + 1);
}
struct tree* nctemp4843= p;
struct tree* nctemp4845=PtreeMvsister(nctemp4843);
p =nctemp4845;
int nctemp4836 = (p !=0);
nctemp4835=nctemp4836;}int nctemp4847 = (rank > 4);
if(nctemp4847)
{
struct nctempchar1 *nctemp4854;
static struct nctempchar1 nctemp4855 = {{ 29}, (char*)"Array dimension is too large\0"};
nctemp4854=&nctemp4855;
nctempchar1* nctemp4852= nctemp4854;
int nctemp4856=CodeError(nctemp4852);
}
p = sp;
i = 0;
int nctemp4857 = (p !=0);
int nctemp4861=nctemp4857;
while(nctemp4861)
{{
struct tree* nctemp4867= p;
nctempchar1* nctemp4869=CodeExpr(nctemp4867);
dim=nctemp4869;
int nctemp4870 = (i ==0);
if(nctemp4870)
{
struct tree* nctemp4875= p;
struct tree* nctemp4879= p;
nctempchar1* nctemp4881=PtreeGetype(nctemp4879);
nctempchar1* nctemp4877= nctemp4881;
int nctemp4882=CodeEs(nctemp4875,nctemp4877);
struct tree* nctemp4884= p;
struct nctempchar1 *nctemp4888;
static struct nctempchar1 nctemp4889 = {{ 2}, (char*)" \0"};
nctemp4888=&nctemp4889;
nctempchar1* nctemp4886= nctemp4888;
int nctemp4890=CodeEs(nctemp4884,nctemp4886);
struct tree* nctemp4892= p;
nctempchar1* nctemp4894= totdim;
int nctemp4897=CodeEs(nctemp4892,nctemp4894);
struct tree* nctemp4899= p;
struct nctempchar1 *nctemp4903;
static struct nctempchar1 nctemp4904 = {{ 2}, (char*)"=\0"};
nctemp4903=&nctemp4904;
nctempchar1* nctemp4901= nctemp4903;
int nctemp4905=CodeEs(nctemp4899,nctemp4901);
struct tree* nctemp4907= p;
nctempchar1* nctemp4909= dim;
int nctemp4912=CodeEs(nctemp4907,nctemp4909);
}
else{
struct tree* nctemp4914= p;
nctempchar1* nctemp4916= totdim;
int nctemp4919=CodeEs(nctemp4914,nctemp4916);
struct tree* nctemp4921= p;
struct nctempchar1 *nctemp4925;
static struct nctempchar1 nctemp4926 = {{ 2}, (char*)"=\0"};
nctemp4925=&nctemp4926;
nctempchar1* nctemp4923= nctemp4925;
int nctemp4927=CodeEs(nctemp4921,nctemp4923);
struct tree* nctemp4929= p;
nctempchar1* nctemp4931= totdim;
int nctemp4934=CodeEs(nctemp4929,nctemp4931);
struct tree* nctemp4936= p;
struct nctempchar1 *nctemp4940;
static struct nctempchar1 nctemp4941 = {{ 2}, (char*)"*\0"};
nctemp4940=&nctemp4941;
nctempchar1* nctemp4938= nctemp4940;
int nctemp4942=CodeEs(nctemp4936,nctemp4938);
struct tree* nctemp4944= p;
nctempchar1* nctemp4946= dim;
int nctemp4949=CodeEs(nctemp4944,nctemp4946);
}
struct tree* nctemp4951= p;
struct nctempchar1 *nctemp4955;
static struct nctempchar1 nctemp4956 = {{ 4}, (char*)";\n\0"};
nctemp4955=&nctemp4956;
nctempchar1* nctemp4953= nctemp4955;
int nctemp4957=CodeEs(nctemp4951,nctemp4953);
i = (i + 1);
struct tree* nctemp4962= p;
struct tree* nctemp4964=PtreeMvsister(nctemp4962);
p =nctemp4964;
}
int nctemp4965 = (p !=0);
nctemp4861=nctemp4965;}}
nctempchar1* nctemp4975= structflag;
struct nctempchar1 *nctemp4980;
static struct nctempchar1 nctemp4981 = {{ 7}, (char*)"struct\0"};
nctemp4980=&nctemp4981;
nctempchar1* nctemp4978= nctemp4980;
int nctemp4982=LibeStrcmp(nctemp4975,nctemp4978);
int nctemp4972 = (nctemp4982 ==1);
nctempchar1* nctemp4988= arrayflag;
struct nctempchar1 *nctemp4993;
static struct nctempchar1 nctemp4994 = {{ 6}, (char*)"array\0"};
nctemp4993=&nctemp4994;
nctempchar1* nctemp4991= nctemp4993;
int nctemp4995=LibeStrcmp(nctemp4988,nctemp4991);
int nctemp4985 = (nctemp4995 ==0);
int nctemp4969 = (nctemp4972 && nctemp4985);
if(nctemp4969)
{
struct tree* nctemp4998= p;
struct nctempchar1 *nctemp5002;
static struct nctempchar1 nctemp5003 = {{ 8}, (char*)"struct \0"};
nctemp5002=&nctemp5003;
nctempchar1* nctemp5000= nctemp5002;
int nctemp5004=CodeEs(nctemp4998,nctemp5000);
struct tree* nctemp5006= p;
nctempchar1* nctemp5008= type;
int nctemp5011=CodeEs(nctemp5006,nctemp5008);
struct tree* nctemp5013= p;
struct nctempchar1 *nctemp5017;
static struct nctempchar1 nctemp5018 = {{ 3}, (char*)" *\0"};
nctemp5017=&nctemp5018;
nctempchar1* nctemp5015= nctemp5017;
int nctemp5019=CodeEs(nctemp5013,nctemp5015);
struct tree* nctemp5021= p;
nctempchar1* nctemp5023= pointer;
int nctemp5026=CodeEs(nctemp5021,nctemp5023);
struct tree* nctemp5028= p;
struct nctempchar1 *nctemp5032;
static struct nctempchar1 nctemp5033 = {{ 2}, (char*)"=\0"};
nctemp5032=&nctemp5033;
nctempchar1* nctemp5030= nctemp5032;
int nctemp5034=CodeEs(nctemp5028,nctemp5030);
struct tree* nctemp5036= p;
struct nctempchar1 *nctemp5040;
static struct nctempchar1 nctemp5041 = {{ 2}, (char*)"(\0"};
nctemp5040=&nctemp5041;
nctempchar1* nctemp5038= nctemp5040;
int nctemp5042=CodeEs(nctemp5036,nctemp5038);
struct tree* nctemp5044= p;
struct nctempchar1 *nctemp5048;
static struct nctempchar1 nctemp5049 = {{ 8}, (char*)"struct \0"};
nctemp5048=&nctemp5049;
nctempchar1* nctemp5046= nctemp5048;
int nctemp5050=CodeEs(nctemp5044,nctemp5046);
struct tree* nctemp5052= p;
nctempchar1* nctemp5054= type;
int nctemp5057=CodeEs(nctemp5052,nctemp5054);
struct tree* nctemp5059= p;
struct nctempchar1 *nctemp5063;
static struct nctempchar1 nctemp5064 = {{ 3}, (char*)"*)\0"};
nctemp5063=&nctemp5064;
nctempchar1* nctemp5061= nctemp5063;
int nctemp5065=CodeEs(nctemp5059,nctemp5061);
struct tree* nctemp5067= p;
struct nctempchar1 *nctemp5071;
static struct nctempchar1 nctemp5072 = {{ 11}, (char*)"RunMalloc(\0"};
nctemp5071=&nctemp5072;
nctempchar1* nctemp5069= nctemp5071;
int nctemp5073=CodeEs(nctemp5067,nctemp5069);
struct tree* nctemp5075= p;
struct nctempchar1 *nctemp5079;
static struct nctempchar1 nctemp5080 = {{ 8}, (char*)"sizeof(\0"};
nctemp5079=&nctemp5080;
nctempchar1* nctemp5077= nctemp5079;
int nctemp5081=CodeEs(nctemp5075,nctemp5077);
struct tree* nctemp5083= p;
struct nctempchar1 *nctemp5087;
static struct nctempchar1 nctemp5088 = {{ 8}, (char*)"struct \0"};
nctemp5087=&nctemp5088;
nctempchar1* nctemp5085= nctemp5087;
int nctemp5089=CodeEs(nctemp5083,nctemp5085);
struct tree* nctemp5091= p;
nctempchar1* nctemp5093= type;
int nctemp5096=CodeEs(nctemp5091,nctemp5093);
struct tree* nctemp5098= p;
struct nctempchar1 *nctemp5102;
static struct nctempchar1 nctemp5103 = {{ 6}, (char*)"));\n\0"};
nctemp5102=&nctemp5103;
nctempchar1* nctemp5100= nctemp5102;
int nctemp5104=CodeEs(nctemp5098,nctemp5100);
}
nctempchar1* nctemp5111= structflag;
struct nctempchar1 *nctemp5116;
static struct nctempchar1 nctemp5117 = {{ 7}, (char*)"struct\0"};
nctemp5116=&nctemp5117;
nctempchar1* nctemp5114= nctemp5116;
int nctemp5118=LibeStrcmp(nctemp5111,nctemp5114);
int nctemp5108 = (nctemp5118 ==1);
nctempchar1* nctemp5124= arrayflag;
struct nctempchar1 *nctemp5129;
static struct nctempchar1 nctemp5130 = {{ 6}, (char*)"array\0"};
nctemp5129=&nctemp5130;
nctempchar1* nctemp5127= nctemp5129;
int nctemp5131=LibeStrcmp(nctemp5124,nctemp5127);
int nctemp5121 = (nctemp5131 ==1);
int nctemp5105 = (nctemp5108 && nctemp5121);
if(nctemp5105)
{
struct tree* nctemp5134= p;
struct nctempchar1 *nctemp5138;
static struct nctempchar1 nctemp5139 = {{ 14}, (char*)"struct nctemp\0"};
nctemp5138=&nctemp5139;
nctempchar1* nctemp5136= nctemp5138;
int nctemp5140=CodeEs(nctemp5134,nctemp5136);
struct tree* nctemp5142= p;
nctempchar1* nctemp5144= type;
int nctemp5147=CodeEs(nctemp5142,nctemp5144);
int nctemp5149= rank;
int nctemp5151=CodeEd(nctemp5149);
struct tree* nctemp5153= p;
struct nctempchar1 *nctemp5157;
static struct nctempchar1 nctemp5158 = {{ 3}, (char*)" *\0"};
nctemp5157=&nctemp5158;
nctempchar1* nctemp5155= nctemp5157;
int nctemp5159=CodeEs(nctemp5153,nctemp5155);
struct tree* nctemp5161= p;
nctempchar1* nctemp5163= pointer;
int nctemp5166=CodeEs(nctemp5161,nctemp5163);
struct tree* nctemp5168= p;
struct nctempchar1 *nctemp5172;
static struct nctempchar1 nctemp5173 = {{ 4}, (char*)";\n\0"};
nctemp5172=&nctemp5173;
nctempchar1* nctemp5170= nctemp5172;
int nctemp5174=CodeEs(nctemp5168,nctemp5170);
struct tree* nctemp5176= p;
nctempchar1* nctemp5178= pointer;
int nctemp5181=CodeEs(nctemp5176,nctemp5178);
struct tree* nctemp5183= p;
struct nctempchar1 *nctemp5187;
static struct nctempchar1 nctemp5188 = {{ 2}, (char*)"=\0"};
nctemp5187=&nctemp5188;
nctempchar1* nctemp5185= nctemp5187;
int nctemp5189=CodeEs(nctemp5183,nctemp5185);
struct tree* nctemp5191= p;
struct nctempchar1 *nctemp5195;
static struct nctempchar1 nctemp5196 = {{ 2}, (char*)"(\0"};
nctemp5195=&nctemp5196;
nctempchar1* nctemp5193= nctemp5195;
int nctemp5197=CodeEs(nctemp5191,nctemp5193);
struct tree* nctemp5199= p;
struct nctempchar1 *nctemp5203;
static struct nctempchar1 nctemp5204 = {{ 14}, (char*)"struct nctemp\0"};
nctemp5203=&nctemp5204;
nctempchar1* nctemp5201= nctemp5203;
int nctemp5205=CodeEs(nctemp5199,nctemp5201);
struct tree* nctemp5207= p;
nctempchar1* nctemp5209= type;
int nctemp5212=CodeEs(nctemp5207,nctemp5209);
int nctemp5214= rank;
int nctemp5216=CodeEd(nctemp5214);
struct tree* nctemp5218= p;
struct nctempchar1 *nctemp5222;
static struct nctempchar1 nctemp5223 = {{ 3}, (char*)"*)\0"};
nctemp5222=&nctemp5223;
nctempchar1* nctemp5220= nctemp5222;
int nctemp5224=CodeEs(nctemp5218,nctemp5220);
struct tree* nctemp5226= p;
struct nctempchar1 *nctemp5230;
static struct nctempchar1 nctemp5231 = {{ 11}, (char*)"RunMalloc(\0"};
nctemp5230=&nctemp5231;
nctempchar1* nctemp5228= nctemp5230;
int nctemp5232=CodeEs(nctemp5226,nctemp5228);
struct tree* nctemp5234= p;
struct nctempchar1 *nctemp5238;
static struct nctempchar1 nctemp5239 = {{ 21}, (char*)"sizeof(struct nctemp\0"};
nctemp5238=&nctemp5239;
nctempchar1* nctemp5236= nctemp5238;
int nctemp5240=CodeEs(nctemp5234,nctemp5236);
struct tree* nctemp5242= p;
nctempchar1* nctemp5244= type;
int nctemp5247=CodeEs(nctemp5242,nctemp5244);
int nctemp5249= rank;
int nctemp5251=CodeEd(nctemp5249);
struct tree* nctemp5253= p;
struct nctempchar1 *nctemp5257;
static struct nctempchar1 nctemp5258 = {{ 6}, (char*)"));\n\0"};
nctemp5257=&nctemp5258;
nctempchar1* nctemp5255= nctemp5257;
int nctemp5259=CodeEs(nctemp5253,nctemp5255);
i = 0;
p = sp;
int nctemp5260 = (p !=0);
int nctemp5264=nctemp5260;
while(nctemp5264)
{{
struct tree* nctemp5270= sp;
nctempchar1* nctemp5272=CodeExpr(nctemp5270);
dim=nctemp5272;
struct tree* nctemp5274= sp;
nctempchar1* nctemp5276= pointer;
int nctemp5279=CodeEs(nctemp5274,nctemp5276);
struct tree* nctemp5281= sp;
struct nctempchar1 *nctemp5285;
static struct nctempchar1 nctemp5286 = {{ 4}, (char*)"->d\0"};
nctemp5285=&nctemp5286;
nctempchar1* nctemp5283= nctemp5285;
int nctemp5287=CodeEs(nctemp5281,nctemp5283);
struct tree* nctemp5289= sp;
struct nctempchar1 *nctemp5293;
static struct nctempchar1 nctemp5294 = {{ 2}, (char*)"[\0"};
nctemp5293=&nctemp5294;
nctempchar1* nctemp5291= nctemp5293;
int nctemp5295=CodeEs(nctemp5289,nctemp5291);
int nctemp5297= i;
int nctemp5299=CodeEd(nctemp5297);
struct tree* nctemp5301= sp;
struct nctempchar1 *nctemp5305;
static struct nctempchar1 nctemp5306 = {{ 3}, (char*)"]=\0"};
nctemp5305=&nctemp5306;
nctempchar1* nctemp5303= nctemp5305;
int nctemp5307=CodeEs(nctemp5301,nctemp5303);
struct tree* nctemp5309= sp;
nctempchar1* nctemp5311= dim;
int nctemp5314=CodeEs(nctemp5309,nctemp5311);
struct tree* nctemp5316= sp;
struct nctempchar1 *nctemp5320;
static struct nctempchar1 nctemp5321 = {{ 4}, (char*)";\n\0"};
nctemp5320=&nctemp5321;
nctempchar1* nctemp5318= nctemp5320;
int nctemp5322=CodeEs(nctemp5316,nctemp5318);
i = (i + 1);
struct tree* nctemp5327= p;
struct tree* nctemp5329=PtreeMvsister(nctemp5327);
p =nctemp5329;
}
int nctemp5330 = (p !=0);
nctemp5264=nctemp5330;}struct tree* nctemp5335= sp;
nctempchar1* nctemp5337= pointer;
int nctemp5340=CodeEs(nctemp5335,nctemp5337);
struct tree* nctemp5342= sp;
struct nctempchar1 *nctemp5346;
static struct nctempchar1 nctemp5347 = {{ 4}, (char*)"->a\0"};
nctemp5346=&nctemp5347;
nctempchar1* nctemp5344= nctemp5346;
int nctemp5348=CodeEs(nctemp5342,nctemp5344);
struct tree* nctemp5350= sp;
struct nctempchar1 *nctemp5354;
static struct nctempchar1 nctemp5355 = {{ 2}, (char*)"=\0"};
nctemp5354=&nctemp5355;
nctempchar1* nctemp5352= nctemp5354;
int nctemp5356=CodeEs(nctemp5350,nctemp5352);
struct tree* nctemp5358= sp;
struct nctempchar1 *nctemp5362;
static struct nctempchar1 nctemp5363 = {{ 9}, (char*)"(struct \0"};
nctemp5362=&nctemp5363;
nctempchar1* nctemp5360= nctemp5362;
int nctemp5364=CodeEs(nctemp5358,nctemp5360);
struct tree* nctemp5366= sp;
nctempchar1* nctemp5368= type;
int nctemp5371=CodeEs(nctemp5366,nctemp5368);
struct tree* nctemp5373= sp;
struct nctempchar1 *nctemp5377;
static struct nctempchar1 nctemp5378 = {{ 3}, (char*)"*)\0"};
nctemp5377=&nctemp5378;
nctempchar1* nctemp5375= nctemp5377;
int nctemp5379=CodeEs(nctemp5373,nctemp5375);
struct tree* nctemp5381= sp;
struct nctempchar1 *nctemp5385;
static struct nctempchar1 nctemp5386 = {{ 18}, (char*)"RunMalloc(sizeof(\0"};
nctemp5385=&nctemp5386;
nctempchar1* nctemp5383= nctemp5385;
int nctemp5387=CodeEs(nctemp5381,nctemp5383);
struct tree* nctemp5389= sp;
struct nctempchar1 *nctemp5393;
static struct nctempchar1 nctemp5394 = {{ 8}, (char*)"struct \0"};
nctemp5393=&nctemp5394;
nctempchar1* nctemp5391= nctemp5393;
int nctemp5395=CodeEs(nctemp5389,nctemp5391);
struct tree* nctemp5397= sp;
nctempchar1* nctemp5399= type;
int nctemp5402=CodeEs(nctemp5397,nctemp5399);
struct tree* nctemp5404= sp;
struct nctempchar1 *nctemp5408;
static struct nctempchar1 nctemp5409 = {{ 2}, (char*)")\0"};
nctemp5408=&nctemp5409;
nctempchar1* nctemp5406= nctemp5408;
int nctemp5410=CodeEs(nctemp5404,nctemp5406);
struct tree* nctemp5412= sp;
struct nctempchar1 *nctemp5416;
static struct nctempchar1 nctemp5417 = {{ 2}, (char*)"*\0"};
nctemp5416=&nctemp5417;
nctempchar1* nctemp5414= nctemp5416;
int nctemp5418=CodeEs(nctemp5412,nctemp5414);
struct tree* nctemp5420= sp;
nctempchar1* nctemp5422= totdim;
int nctemp5425=CodeEs(nctemp5420,nctemp5422);
struct tree* nctemp5427= sp;
struct nctempchar1 *nctemp5431;
static struct nctempchar1 nctemp5432 = {{ 5}, (char*)");\n\0"};
nctemp5431=&nctemp5432;
nctempchar1* nctemp5429= nctemp5431;
int nctemp5433=CodeEs(nctemp5427,nctemp5429);
}
nctempchar1* nctemp5440= structflag;
struct nctempchar1 *nctemp5445;
static struct nctempchar1 nctemp5446 = {{ 7}, (char*)"struct\0"};
nctemp5445=&nctemp5446;
nctempchar1* nctemp5443= nctemp5445;
int nctemp5447=LibeStrcmp(nctemp5440,nctemp5443);
int nctemp5437 = (nctemp5447 ==0);
nctempchar1* nctemp5453= arrayflag;
struct nctempchar1 *nctemp5458;
static struct nctempchar1 nctemp5459 = {{ 6}, (char*)"array\0"};
nctemp5458=&nctemp5459;
nctempchar1* nctemp5456= nctemp5458;
int nctemp5460=LibeStrcmp(nctemp5453,nctemp5456);
int nctemp5450 = (nctemp5460 ==1);
int nctemp5434 = (nctemp5437 && nctemp5450);
if(nctemp5434)
{
int nctemp5463= 4;
int nctemp5465=LibeFlush(nctemp5463);
struct tree* nctemp5467= sp;
struct nctempchar1 *nctemp5471;
static struct nctempchar1 nctemp5472 = {{ 7}, (char*)"nctemp\0"};
nctemp5471=&nctemp5472;
nctempchar1* nctemp5469= nctemp5471;
int nctemp5473=CodeEs(nctemp5467,nctemp5469);
struct tree* nctemp5475= sp;
nctempchar1* nctemp5477= type;
int nctemp5480=CodeEs(nctemp5475,nctemp5477);
int nctemp5482= rank;
int nctemp5484=CodeEd(nctemp5482);
struct tree* nctemp5486= sp;
struct nctempchar1 *nctemp5490;
static struct nctempchar1 nctemp5491 = {{ 3}, (char*)" *\0"};
nctemp5490=&nctemp5491;
nctempchar1* nctemp5488= nctemp5490;
int nctemp5492=CodeEs(nctemp5486,nctemp5488);
struct tree* nctemp5494= sp;
nctempchar1* nctemp5496= pointer;
int nctemp5499=CodeEs(nctemp5494,nctemp5496);
struct tree* nctemp5501= sp;
struct nctempchar1 *nctemp5505;
static struct nctempchar1 nctemp5506 = {{ 4}, (char*)";\n\0"};
nctemp5505=&nctemp5506;
nctempchar1* nctemp5503= nctemp5505;
int nctemp5507=CodeEs(nctemp5501,nctemp5503);
p = top;
i = 0;
struct tree* nctemp5509= p;
nctempchar1* nctemp5511= pointer;
int nctemp5514=CodeEs(nctemp5509,nctemp5511);
struct tree* nctemp5516= p;
struct nctempchar1 *nctemp5520;
static struct nctempchar1 nctemp5521 = {{ 2}, (char*)"=\0"};
nctemp5520=&nctemp5521;
nctempchar1* nctemp5518= nctemp5520;
int nctemp5522=CodeEs(nctemp5516,nctemp5518);
struct tree* nctemp5524= p;
struct nctempchar1 *nctemp5528;
static struct nctempchar1 nctemp5529 = {{ 2}, (char*)"(\0"};
nctemp5528=&nctemp5529;
nctempchar1* nctemp5526= nctemp5528;
int nctemp5530=CodeEs(nctemp5524,nctemp5526);
struct tree* nctemp5532= p;
struct nctempchar1 *nctemp5536;
static struct nctempchar1 nctemp5537 = {{ 7}, (char*)"nctemp\0"};
nctemp5536=&nctemp5537;
nctempchar1* nctemp5534= nctemp5536;
int nctemp5538=CodeEs(nctemp5532,nctemp5534);
struct tree* nctemp5540= p;
nctempchar1* nctemp5542= type;
int nctemp5545=CodeEs(nctemp5540,nctemp5542);
int nctemp5547= rank;
int nctemp5549=CodeEd(nctemp5547);
struct tree* nctemp5551= p;
struct nctempchar1 *nctemp5555;
static struct nctempchar1 nctemp5556 = {{ 3}, (char*)"*)\0"};
nctemp5555=&nctemp5556;
nctempchar1* nctemp5553= nctemp5555;
int nctemp5557=CodeEs(nctemp5551,nctemp5553);
struct tree* nctemp5559= p;
struct nctempchar1 *nctemp5563;
static struct nctempchar1 nctemp5564 = {{ 11}, (char*)"RunMalloc(\0"};
nctemp5563=&nctemp5564;
nctempchar1* nctemp5561= nctemp5563;
int nctemp5565=CodeEs(nctemp5559,nctemp5561);
struct tree* nctemp5567= p;
struct nctempchar1 *nctemp5571;
static struct nctempchar1 nctemp5572 = {{ 14}, (char*)"sizeof(nctemp\0"};
nctemp5571=&nctemp5572;
nctempchar1* nctemp5569= nctemp5571;
int nctemp5573=CodeEs(nctemp5567,nctemp5569);
struct tree* nctemp5575= p;
nctempchar1* nctemp5577= type;
int nctemp5580=CodeEs(nctemp5575,nctemp5577);
int nctemp5582= rank;
int nctemp5584=CodeEd(nctemp5582);
struct tree* nctemp5586= p;
struct nctempchar1 *nctemp5590;
static struct nctempchar1 nctemp5591 = {{ 6}, (char*)"));\n\0"};
nctemp5590=&nctemp5591;
nctempchar1* nctemp5588= nctemp5590;
int nctemp5592=CodeEs(nctemp5586,nctemp5588);
int nctemp5593 = (p !=0);
int nctemp5597=nctemp5593;
while(nctemp5597)
{{
struct tree* nctemp5603= p;
nctempchar1* nctemp5605=CodeExpr(nctemp5603);
dim=nctemp5605;
struct tree* nctemp5607= p;
nctempchar1* nctemp5609= pointer;
int nctemp5612=CodeEs(nctemp5607,nctemp5609);
struct tree* nctemp5614= p;
struct nctempchar1 *nctemp5618;
static struct nctempchar1 nctemp5619 = {{ 4}, (char*)"->d\0"};
nctemp5618=&nctemp5619;
nctempchar1* nctemp5616= nctemp5618;
int nctemp5620=CodeEs(nctemp5614,nctemp5616);
struct tree* nctemp5622= p;
struct nctempchar1 *nctemp5626;
static struct nctempchar1 nctemp5627 = {{ 2}, (char*)"[\0"};
nctemp5626=&nctemp5627;
nctempchar1* nctemp5624= nctemp5626;
int nctemp5628=CodeEs(nctemp5622,nctemp5624);
int nctemp5630= i;
int nctemp5632=CodeEd(nctemp5630);
struct tree* nctemp5634= p;
struct nctempchar1 *nctemp5638;
static struct nctempchar1 nctemp5639 = {{ 3}, (char*)"]=\0"};
nctemp5638=&nctemp5639;
nctempchar1* nctemp5636= nctemp5638;
int nctemp5640=CodeEs(nctemp5634,nctemp5636);
struct tree* nctemp5642= p;
nctempchar1* nctemp5644= dim;
int nctemp5647=CodeEs(nctemp5642,nctemp5644);
struct tree* nctemp5649= p;
struct nctempchar1 *nctemp5653;
static struct nctempchar1 nctemp5654 = {{ 4}, (char*)";\n\0"};
nctemp5653=&nctemp5654;
nctempchar1* nctemp5651= nctemp5653;
int nctemp5655=CodeEs(nctemp5649,nctemp5651);
i = (i + 1);
struct tree* nctemp5660= p;
struct tree* nctemp5662=PtreeMvsister(nctemp5660);
p =nctemp5662;
}
int nctemp5663 = (p !=0);
nctemp5597=nctemp5663;}p = top;
struct tree* nctemp5668= p;
nctempchar1* nctemp5670= pointer;
int nctemp5673=CodeEs(nctemp5668,nctemp5670);
struct tree* nctemp5675= p;
struct nctempchar1 *nctemp5679;
static struct nctempchar1 nctemp5680 = {{ 4}, (char*)"->a\0"};
nctemp5679=&nctemp5680;
nctempchar1* nctemp5677= nctemp5679;
int nctemp5681=CodeEs(nctemp5675,nctemp5677);
struct tree* nctemp5683= p;
struct nctempchar1 *nctemp5687;
static struct nctempchar1 nctemp5688 = {{ 3}, (char*)"=(\0"};
nctemp5687=&nctemp5688;
nctempchar1* nctemp5685= nctemp5687;
int nctemp5689=CodeEs(nctemp5683,nctemp5685);
struct tree* nctemp5691= p;
nctempchar1* nctemp5693= type;
int nctemp5696=CodeEs(nctemp5691,nctemp5693);
struct tree* nctemp5698= p;
struct nctempchar1 *nctemp5702;
static struct nctempchar1 nctemp5703 = {{ 4}, (char*)" *)\0"};
nctemp5702=&nctemp5703;
nctempchar1* nctemp5700= nctemp5702;
int nctemp5704=CodeEs(nctemp5698,nctemp5700);
struct tree* nctemp5706= p;
struct nctempchar1 *nctemp5710;
static struct nctempchar1 nctemp5711 = {{ 18}, (char*)"RunMalloc(sizeof(\0"};
nctemp5710=&nctemp5711;
nctempchar1* nctemp5708= nctemp5710;
int nctemp5712=CodeEs(nctemp5706,nctemp5708);
struct tree* nctemp5714= p;
nctempchar1* nctemp5716= type;
int nctemp5719=CodeEs(nctemp5714,nctemp5716);
struct tree* nctemp5721= p;
struct nctempchar1 *nctemp5725;
static struct nctempchar1 nctemp5726 = {{ 2}, (char*)")\0"};
nctemp5725=&nctemp5726;
nctempchar1* nctemp5723= nctemp5725;
int nctemp5727=CodeEs(nctemp5721,nctemp5723);
struct tree* nctemp5729= p;
struct nctempchar1 *nctemp5733;
static struct nctempchar1 nctemp5734 = {{ 2}, (char*)"*\0"};
nctemp5733=&nctemp5734;
nctempchar1* nctemp5731= nctemp5733;
int nctemp5735=CodeEs(nctemp5729,nctemp5731);
struct tree* nctemp5737= p;
nctempchar1* nctemp5739= totdim;
int nctemp5742=CodeEs(nctemp5737,nctemp5739);
struct tree* nctemp5744= p;
struct nctempchar1 *nctemp5748;
static struct nctempchar1 nctemp5749 = {{ 5}, (char*)");\n\0"};
nctemp5748=&nctemp5749;
nctempchar1* nctemp5746= nctemp5748;
int nctemp5750=CodeEs(nctemp5744,nctemp5746);
}
return pointer;
}
nctempchar1 * CodeDelete (struct tree* p)
{
nctempchar1 *tmp;
struct tree* nctemp5757= p;
struct tree* nctemp5759=PtreeMvchild(nctemp5757);
p =nctemp5759;
struct tree* nctemp5764= p;
struct tree* nctemp5766=PtreeMvchild(nctemp5764);
p =nctemp5766;
struct tree* nctemp5772= p;
nctempchar1* nctemp5774=CodeBinexpr(nctemp5772);
tmp=nctemp5774;
struct tree* nctemp5778= p;
nctempchar1* nctemp5780=PtreeGetref(nctemp5778);
nctempchar1* nctemp5776= nctemp5780;
struct nctempchar1 *nctemp5783;
static struct nctempchar1 nctemp5784 = {{ 5}, (char*)"aref\0"};
nctemp5783=&nctemp5784;
nctempchar1* nctemp5781= nctemp5783;
int nctemp5785=LibeStrcmp(nctemp5776,nctemp5781);
if(nctemp5785)
{
struct tree* nctemp5787= p;
struct nctempchar1 *nctemp5791;
static struct nctempchar1 nctemp5792 = {{ 9}, (char*)"RunFree(\0"};
nctemp5791=&nctemp5792;
nctempchar1* nctemp5789= nctemp5791;
int nctemp5793=CodeEs(nctemp5787,nctemp5789);
struct tree* nctemp5795= p;
nctempchar1* nctemp5797= tmp;
int nctemp5800=CodeEs(nctemp5795,nctemp5797);
struct tree* nctemp5802= p;
struct nctempchar1 *nctemp5806;
static struct nctempchar1 nctemp5807 = {{ 8}, (char*)"->a);\n\0"};
nctemp5806=&nctemp5807;
nctempchar1* nctemp5804= nctemp5806;
int nctemp5808=CodeEs(nctemp5802,nctemp5804);
struct tree* nctemp5810= p;
struct nctempchar1 *nctemp5814;
static struct nctempchar1 nctemp5815 = {{ 9}, (char*)"RunFree(\0"};
nctemp5814=&nctemp5815;
nctempchar1* nctemp5812= nctemp5814;
int nctemp5816=CodeEs(nctemp5810,nctemp5812);
struct tree* nctemp5818= p;
nctempchar1* nctemp5820= tmp;
int nctemp5823=CodeEs(nctemp5818,nctemp5820);
struct tree* nctemp5825= p;
struct nctempchar1 *nctemp5829;
static struct nctempchar1 nctemp5830 = {{ 5}, (char*)");\n\0"};
nctemp5829=&nctemp5830;
nctempchar1* nctemp5827= nctemp5829;
int nctemp5831=CodeEs(nctemp5825,nctemp5827);
}
return tmp;
}
nctempchar1 * CodeLen (struct tree* p)
{
struct tree* np;
struct tree* sp;
nctempchar1 *temp;
nctempchar1 *index;
nctempchar1 *tempr;
nctempchar1* nctemp5839=CodeMktemp();
tempr=nctemp5839;
struct tree* nctemp5844= p;
struct tree* nctemp5846=PtreeMvchild(nctemp5844);
np =nctemp5846;
struct tree* nctemp5852= np;
nctempchar1* nctemp5854=CodeExpr(nctemp5852);
temp=nctemp5854;
struct tree* nctemp5859= np;
struct tree* nctemp5861=PtreeMvsister(nctemp5859);
sp =nctemp5861;
struct tree* nctemp5867= sp;
nctempchar1* nctemp5869=CodeExpr(nctemp5867);
index=nctemp5869;
struct tree* nctemp5871= p;
struct tree* nctemp5875= p;
nctempchar1* nctemp5877=PtreeGetype(nctemp5875);
nctempchar1* nctemp5873= nctemp5877;
int nctemp5878=CodeEs(nctemp5871,nctemp5873);
struct tree* nctemp5880= p;
struct nctempchar1 *nctemp5884;
static struct nctempchar1 nctemp5885 = {{ 2}, (char*)" \0"};
nctemp5884=&nctemp5885;
nctempchar1* nctemp5882= nctemp5884;
int nctemp5886=CodeEs(nctemp5880,nctemp5882);
struct tree* nctemp5888= p;
nctempchar1* nctemp5890= tempr;
int nctemp5893=CodeEs(nctemp5888,nctemp5890);
struct tree* nctemp5895= p;
struct nctempchar1 *nctemp5899;
static struct nctempchar1 nctemp5900 = {{ 2}, (char*)"=\0"};
nctemp5899=&nctemp5900;
nctempchar1* nctemp5897= nctemp5899;
int nctemp5901=CodeEs(nctemp5895,nctemp5897);
struct tree* nctemp5903= p;
nctempchar1* nctemp5905= temp;
int nctemp5908=CodeEs(nctemp5903,nctemp5905);
struct tree* nctemp5910= p;
struct nctempchar1 *nctemp5914;
static struct nctempchar1 nctemp5915 = {{ 4}, (char*)"->d\0"};
nctemp5914=&nctemp5915;
nctempchar1* nctemp5912= nctemp5914;
int nctemp5916=CodeEs(nctemp5910,nctemp5912);
struct tree* nctemp5918= p;
struct nctempchar1 *nctemp5922;
static struct nctempchar1 nctemp5923 = {{ 2}, (char*)"[\0"};
nctemp5922=&nctemp5923;
nctempchar1* nctemp5920= nctemp5922;
int nctemp5924=CodeEs(nctemp5918,nctemp5920);
struct tree* nctemp5926= p;
nctempchar1* nctemp5928= index;
int nctemp5931=CodeEs(nctemp5926,nctemp5928);
struct tree* nctemp5933= p;
struct nctempchar1 *nctemp5937;
static struct nctempchar1 nctemp5938 = {{ 3}, (char*)"];\0"};
nctemp5937=&nctemp5938;
nctempchar1* nctemp5935= nctemp5937;
int nctemp5939=CodeEs(nctemp5933,nctemp5935);
return tempr;
}
nctempchar1 * CodeCmplx (struct tree* p)
{
struct tree* np;
struct tree* sp;
nctempchar1 *q;
nctempchar1 *r;
nctempchar1 *tempr;
nctempchar1* nctemp5947=CodeMktemp();
tempr=nctemp5947;
struct tree* nctemp5952= p;
struct tree* nctemp5954=PtreeMvchild(nctemp5952);
np =nctemp5954;
struct tree* nctemp5959= np;
struct tree* nctemp5961=PtreeMvchild(nctemp5959);
np =nctemp5961;
struct tree* nctemp5967= np;
nctempchar1* nctemp5969=CodeExpr(nctemp5967);
q=nctemp5969;
struct tree* nctemp5974= np;
struct tree* nctemp5976=PtreeMvsister(nctemp5974);
sp =nctemp5976;
struct tree* nctemp5982= sp;
nctempchar1* nctemp5984=CodeExpr(nctemp5982);
r=nctemp5984;
struct tree* nctemp5986= p;
struct tree* nctemp5990= p;
nctempchar1* nctemp5992=PtreeGetype(nctemp5990);
nctempchar1* nctemp5988= nctemp5992;
int nctemp5993=CodeEs(nctemp5986,nctemp5988);
struct tree* nctemp5995= p;
struct nctempchar1 *nctemp5999;
static struct nctempchar1 nctemp6000 = {{ 2}, (char*)" \0"};
nctemp5999=&nctemp6000;
nctempchar1* nctemp5997= nctemp5999;
int nctemp6001=CodeEs(nctemp5995,nctemp5997);
struct tree* nctemp6003= p;
nctempchar1* nctemp6005= tempr;
int nctemp6008=CodeEs(nctemp6003,nctemp6005);
struct tree* nctemp6010= p;
struct nctempchar1 *nctemp6014;
static struct nctempchar1 nctemp6015 = {{ 3}, (char*)".r\0"};
nctemp6014=&nctemp6015;
nctempchar1* nctemp6012= nctemp6014;
int nctemp6016=CodeEs(nctemp6010,nctemp6012);
struct tree* nctemp6018= p;
struct nctempchar1 *nctemp6022;
static struct nctempchar1 nctemp6023 = {{ 3}, (char*)" =\0"};
nctemp6022=&nctemp6023;
nctempchar1* nctemp6020= nctemp6022;
int nctemp6024=CodeEs(nctemp6018,nctemp6020);
struct tree* nctemp6026= p;
nctempchar1* nctemp6028= q;
int nctemp6031=CodeEs(nctemp6026,nctemp6028);
struct tree* nctemp6033= p;
struct nctempchar1 *nctemp6037;
static struct nctempchar1 nctemp6038 = {{ 2}, (char*)";\0"};
nctemp6037=&nctemp6038;
nctempchar1* nctemp6035= nctemp6037;
int nctemp6039=CodeEs(nctemp6033,nctemp6035);
struct tree* nctemp6041= p;
struct tree* nctemp6045= p;
nctempchar1* nctemp6047=PtreeGetype(nctemp6045);
nctempchar1* nctemp6043= nctemp6047;
int nctemp6048=CodeEs(nctemp6041,nctemp6043);
struct tree* nctemp6050= p;
struct nctempchar1 *nctemp6054;
static struct nctempchar1 nctemp6055 = {{ 2}, (char*)" \0"};
nctemp6054=&nctemp6055;
nctempchar1* nctemp6052= nctemp6054;
int nctemp6056=CodeEs(nctemp6050,nctemp6052);
struct tree* nctemp6058= p;
nctempchar1* nctemp6060= tempr;
int nctemp6063=CodeEs(nctemp6058,nctemp6060);
struct tree* nctemp6065= p;
struct nctempchar1 *nctemp6069;
static struct nctempchar1 nctemp6070 = {{ 3}, (char*)".i\0"};
nctemp6069=&nctemp6070;
nctempchar1* nctemp6067= nctemp6069;
int nctemp6071=CodeEs(nctemp6065,nctemp6067);
struct tree* nctemp6073= p;
struct nctempchar1 *nctemp6077;
static struct nctempchar1 nctemp6078 = {{ 2}, (char*)"=\0"};
nctemp6077=&nctemp6078;
nctempchar1* nctemp6075= nctemp6077;
int nctemp6079=CodeEs(nctemp6073,nctemp6075);
struct tree* nctemp6081= p;
nctempchar1* nctemp6083= r;
int nctemp6086=CodeEs(nctemp6081,nctemp6083);
struct tree* nctemp6088= p;
struct nctempchar1 *nctemp6092;
static struct nctempchar1 nctemp6093 = {{ 2}, (char*)";\0"};
nctemp6092=&nctemp6093;
nctempchar1* nctemp6090= nctemp6092;
int nctemp6094=CodeEs(nctemp6088,nctemp6090);
return tempr;
}
nctempchar1 * CodeIm (struct tree* p)
{
struct tree* np;
nctempchar1 *q;
nctempchar1 *tempr;
nctempchar1* nctemp6102=CodeMktemp();
tempr=nctemp6102;
struct tree* nctemp6107= p;
struct tree* nctemp6109=PtreeMvchild(nctemp6107);
np =nctemp6109;
struct tree* nctemp6115= np;
nctempchar1* nctemp6117=CodeExpr(nctemp6115);
q=nctemp6117;
struct tree* nctemp6119= p;
struct tree* nctemp6123= p;
nctempchar1* nctemp6125=PtreeGetype(nctemp6123);
nctempchar1* nctemp6121= nctemp6125;
int nctemp6126=CodeEs(nctemp6119,nctemp6121);
struct tree* nctemp6128= p;
struct nctempchar1 *nctemp6132;
static struct nctempchar1 nctemp6133 = {{ 2}, (char*)" \0"};
nctemp6132=&nctemp6133;
nctempchar1* nctemp6130= nctemp6132;
int nctemp6134=CodeEs(nctemp6128,nctemp6130);
struct tree* nctemp6136= p;
nctempchar1* nctemp6138= tempr;
int nctemp6141=CodeEs(nctemp6136,nctemp6138);
struct tree* nctemp6143= p;
struct nctempchar1 *nctemp6147;
static struct nctempchar1 nctemp6148 = {{ 3}, (char*)" =\0"};
nctemp6147=&nctemp6148;
nctempchar1* nctemp6145= nctemp6147;
int nctemp6149=CodeEs(nctemp6143,nctemp6145);
struct tree* nctemp6151= p;
nctempchar1* nctemp6153= q;
int nctemp6156=CodeEs(nctemp6151,nctemp6153);
struct tree* nctemp6158= p;
struct nctempchar1 *nctemp6162;
static struct nctempchar1 nctemp6163 = {{ 5}, (char*)".i  \0"};
nctemp6162=&nctemp6163;
nctempchar1* nctemp6160= nctemp6162;
int nctemp6164=CodeEs(nctemp6158,nctemp6160);
struct tree* nctemp6166= p;
struct nctempchar1 *nctemp6170;
static struct nctempchar1 nctemp6171 = {{ 4}, (char*)";\n\0"};
nctemp6170=&nctemp6171;
nctempchar1* nctemp6168= nctemp6170;
int nctemp6172=CodeEs(nctemp6166,nctemp6168);
return tempr;
}
nctempchar1 * CodeRe (struct tree* p)
{
struct tree* np;
nctempchar1 *q;
nctempchar1 *tmp;
struct tree* nctemp6179= p;
struct tree* nctemp6181=PtreeMvchild(nctemp6179);
np =nctemp6181;
struct tree* nctemp6187= np;
nctempchar1* nctemp6189=CodeExpr(nctemp6187);
q=nctemp6189;
nctempchar1* nctemp6195=CodeMktemp();
tmp=nctemp6195;
struct tree* nctemp6197= p;
struct tree* nctemp6201= p;
nctempchar1* nctemp6203=PtreeGetype(nctemp6201);
nctempchar1* nctemp6199= nctemp6203;
int nctemp6204=CodeEs(nctemp6197,nctemp6199);
struct tree* nctemp6206= p;
struct nctempchar1 *nctemp6210;
static struct nctempchar1 nctemp6211 = {{ 2}, (char*)" \0"};
nctemp6210=&nctemp6211;
nctempchar1* nctemp6208= nctemp6210;
int nctemp6212=CodeEs(nctemp6206,nctemp6208);
struct tree* nctemp6214= p;
nctempchar1* nctemp6216= tmp;
int nctemp6219=CodeEs(nctemp6214,nctemp6216);
struct tree* nctemp6221= p;
struct nctempchar1 *nctemp6225;
static struct nctempchar1 nctemp6226 = {{ 3}, (char*)" =\0"};
nctemp6225=&nctemp6226;
nctempchar1* nctemp6223= nctemp6225;
int nctemp6227=CodeEs(nctemp6221,nctemp6223);
struct tree* nctemp6229= p;
nctempchar1* nctemp6231= q;
int nctemp6234=CodeEs(nctemp6229,nctemp6231);
struct tree* nctemp6236= p;
struct nctempchar1 *nctemp6240;
static struct nctempchar1 nctemp6241 = {{ 5}, (char*)".r  \0"};
nctemp6240=&nctemp6241;
nctempchar1* nctemp6238= nctemp6240;
int nctemp6242=CodeEs(nctemp6236,nctemp6238);
struct tree* nctemp6244= p;
struct nctempchar1 *nctemp6248;
static struct nctempchar1 nctemp6249 = {{ 4}, (char*)";\n\0"};
nctemp6248=&nctemp6249;
nctempchar1* nctemp6246= nctemp6248;
int nctemp6250=CodeEs(nctemp6244,nctemp6246);
return tmp;
}
nctempchar1 * CodeFcall (struct tree* p)
{
struct symbol* tp;
struct tree* sp;
nctempchar1 *temp;
nctempchar1 *ntemp;
int noargs;
noargs = 0;
struct tree* nctemp6259= p;
nctempchar1* nctemp6261=PtreeGetdef(nctemp6259);
nctempchar1* nctemp6257= nctemp6261;
struct symbol* nctemp6264=SymGetetp();
struct symbol* nctemp6262= nctemp6264;
struct symbol* nctemp6265=SymLookup(nctemp6257,nctemp6262);
tp =nctemp6265;
struct tree* nctemp6270= p;
struct tree* nctemp6272=PtreeMvchild(nctemp6270);
sp =nctemp6272;
int nctemp6273 = (sp !=0);
if(nctemp6273)
{
struct tree* nctemp6282= sp;
nctempchar1* nctemp6284=PtreeGetname(nctemp6282);
nctempchar1* nctemp6280= nctemp6284;
struct nctempchar1 *nctemp6287;
static struct nctempchar1 nctemp6288 = {{ 9}, (char*)"exprlist\0"};
nctemp6287=&nctemp6288;
nctempchar1* nctemp6285= nctemp6287;
int nctemp6289=LibeStrcmp(nctemp6280,nctemp6285);
int nctemp6277 = (nctemp6289 ==1);
if(nctemp6277)
{
struct tree* nctemp6295= sp;
struct tree* nctemp6297=PtreeMvchild(nctemp6295);
sp =nctemp6297;
}
}
int nctemp6298 = (sp !=0);
int nctemp6302=nctemp6298;
while(nctemp6302)
{{
nctempchar1* nctemp6308=CodeMktemp();
ntemp=nctemp6308;
struct tree* nctemp6310= sp;
nctempchar1* nctemp6312= ntemp;
int nctemp6315=PtreeSetempr(nctemp6310,nctemp6312);
struct tree* nctemp6321= sp;
nctempchar1* nctemp6323=CodeExpr(nctemp6321);
temp=nctemp6323;
struct tree* nctemp6329= sp;
nctempchar1* nctemp6331=PtreeGetref(nctemp6329);
nctempchar1* nctemp6327= nctemp6331;
struct nctempchar1 *nctemp6334;
static struct nctempchar1 nctemp6335 = {{ 5}, (char*)"aref\0"};
nctemp6334=&nctemp6335;
nctempchar1* nctemp6332= nctemp6334;
int nctemp6336=LibeStrcmp(nctemp6327,nctemp6332);
int nctemp6324 = (nctemp6336 ==1);
if(nctemp6324)
{
struct tree* nctemp6339= sp;
struct nctempchar1 *nctemp6343;
static struct nctempchar1 nctemp6344 = {{ 7}, (char*)"nctemp\0"};
nctemp6343=&nctemp6344;
nctempchar1* nctemp6341= nctemp6343;
int nctemp6345=CodeEs(nctemp6339,nctemp6341);
struct tree* nctemp6347= sp;
struct tree* nctemp6351= sp;
nctempchar1* nctemp6353=PtreeGetype(nctemp6351);
nctempchar1* nctemp6349= nctemp6353;
int nctemp6354=CodeEs(nctemp6347,nctemp6349);
struct tree* nctemp6358= sp;
int nctemp6360=PtreeGetrank(nctemp6358);
int nctemp6356= nctemp6360;
int nctemp6361=CodeEd(nctemp6356);
struct tree* nctemp6363= sp;
struct nctempchar1 *nctemp6367;
static struct nctempchar1 nctemp6368 = {{ 2}, (char*)"*\0"};
nctemp6367=&nctemp6368;
nctempchar1* nctemp6365= nctemp6367;
int nctemp6369=CodeEs(nctemp6363,nctemp6365);
}
else{
struct tree* nctemp6375= sp;
nctempchar1* nctemp6377=PtreeGetref(nctemp6375);
nctempchar1* nctemp6373= nctemp6377;
struct nctempchar1 *nctemp6380;
static struct nctempchar1 nctemp6381 = {{ 5}, (char*)"sref\0"};
nctemp6380=&nctemp6381;
nctempchar1* nctemp6378= nctemp6380;
int nctemp6382=LibeStrcmp(nctemp6373,nctemp6378);
int nctemp6370 = (nctemp6382 ==1);
if(nctemp6370)
{
struct tree* nctemp6385= sp;
struct nctempchar1 *nctemp6389;
static struct nctempchar1 nctemp6390 = {{ 8}, (char*)"struct \0"};
nctemp6389=&nctemp6390;
nctempchar1* nctemp6387= nctemp6389;
int nctemp6391=CodeEs(nctemp6385,nctemp6387);
struct tree* nctemp6393= sp;
struct tree* nctemp6397= sp;
nctempchar1* nctemp6399=PtreeGetype(nctemp6397);
nctempchar1* nctemp6395= nctemp6399;
int nctemp6400=CodeEs(nctemp6393,nctemp6395);
struct tree* nctemp6402= sp;
struct nctempchar1 *nctemp6406;
static struct nctempchar1 nctemp6407 = {{ 2}, (char*)"*\0"};
nctemp6406=&nctemp6407;
nctempchar1* nctemp6404= nctemp6406;
int nctemp6408=CodeEs(nctemp6402,nctemp6404);
}
else{
struct tree* nctemp6410= sp;
struct tree* nctemp6414= sp;
nctempchar1* nctemp6416=PtreeGetype(nctemp6414);
nctempchar1* nctemp6412= nctemp6416;
int nctemp6417=CodeEs(nctemp6410,nctemp6412);
}
}
struct tree* nctemp6419= sp;
struct nctempchar1 *nctemp6423;
static struct nctempchar1 nctemp6424 = {{ 2}, (char*)" \0"};
nctemp6423=&nctemp6424;
nctempchar1* nctemp6421= nctemp6423;
int nctemp6425=CodeEs(nctemp6419,nctemp6421);
struct tree* nctemp6427= sp;
nctempchar1* nctemp6429= ntemp;
int nctemp6432=CodeEs(nctemp6427,nctemp6429);
struct tree* nctemp6434= sp;
struct nctempchar1 *nctemp6438;
static struct nctempchar1 nctemp6439 = {{ 3}, (char*)"= \0"};
nctemp6438=&nctemp6439;
nctempchar1* nctemp6436= nctemp6438;
int nctemp6440=CodeEs(nctemp6434,nctemp6436);
struct tree* nctemp6442= sp;
nctempchar1* nctemp6444= temp;
int nctemp6447=CodeEs(nctemp6442,nctemp6444);
struct tree* nctemp6449= sp;
struct nctempchar1 *nctemp6453;
static struct nctempchar1 nctemp6454 = {{ 4}, (char*)";\n\0"};
nctemp6453=&nctemp6454;
nctempchar1* nctemp6451= nctemp6453;
int nctemp6455=CodeEs(nctemp6449,nctemp6451);
struct tree* nctemp6460= sp;
struct tree* nctemp6462=PtreeMvsister(nctemp6460);
sp =nctemp6462;
}
int nctemp6463 = (sp !=0);
nctemp6302=nctemp6463;}nctempchar1* nctemp6472=CodeMktemp();
ntemp=nctemp6472;
struct tree* nctemp6478= p;
nctempchar1* nctemp6480=PtreeGetref(nctemp6478);
nctempchar1* nctemp6476= nctemp6480;
struct nctempchar1 *nctemp6483;
static struct nctempchar1 nctemp6484 = {{ 5}, (char*)"aref\0"};
nctemp6483=&nctemp6484;
nctempchar1* nctemp6481= nctemp6483;
int nctemp6485=LibeStrcmp(nctemp6476,nctemp6481);
int nctemp6473 = (nctemp6485 ==1);
if(nctemp6473)
{
struct tree* nctemp6488= p;
struct nctempchar1 *nctemp6492;
static struct nctempchar1 nctemp6493 = {{ 7}, (char*)"nctemp\0"};
nctemp6492=&nctemp6493;
nctempchar1* nctemp6490= nctemp6492;
int nctemp6494=CodeEs(nctemp6488,nctemp6490);
struct tree* nctemp6496= p;
struct tree* nctemp6500= p;
nctempchar1* nctemp6502=PtreeGetype(nctemp6500);
nctempchar1* nctemp6498= nctemp6502;
int nctemp6503=CodeEs(nctemp6496,nctemp6498);
struct tree* nctemp6507= p;
int nctemp6509=PtreeGetrank(nctemp6507);
int nctemp6505= nctemp6509;
int nctemp6510=CodeEd(nctemp6505);
struct tree* nctemp6512= p;
struct nctempchar1 *nctemp6516;
static struct nctempchar1 nctemp6517 = {{ 2}, (char*)"*\0"};
nctemp6516=&nctemp6517;
nctempchar1* nctemp6514= nctemp6516;
int nctemp6518=CodeEs(nctemp6512,nctemp6514);
}
else{
struct tree* nctemp6524= p;
nctempchar1* nctemp6526=PtreeGetref(nctemp6524);
nctempchar1* nctemp6522= nctemp6526;
struct nctempchar1 *nctemp6529;
static struct nctempchar1 nctemp6530 = {{ 5}, (char*)"sref\0"};
nctemp6529=&nctemp6530;
nctempchar1* nctemp6527= nctemp6529;
int nctemp6531=LibeStrcmp(nctemp6522,nctemp6527);
int nctemp6519 = (nctemp6531 ==1);
if(nctemp6519)
{
struct tree* nctemp6534= p;
struct nctempchar1 *nctemp6538;
static struct nctempchar1 nctemp6539 = {{ 8}, (char*)"struct \0"};
nctemp6538=&nctemp6539;
nctempchar1* nctemp6536= nctemp6538;
int nctemp6540=CodeEs(nctemp6534,nctemp6536);
struct tree* nctemp6542= p;
struct tree* nctemp6546= p;
nctempchar1* nctemp6548=PtreeGetype(nctemp6546);
nctempchar1* nctemp6544= nctemp6548;
int nctemp6549=CodeEs(nctemp6542,nctemp6544);
struct tree* nctemp6551= p;
struct nctempchar1 *nctemp6555;
static struct nctempchar1 nctemp6556 = {{ 2}, (char*)"*\0"};
nctemp6555=&nctemp6556;
nctempchar1* nctemp6553= nctemp6555;
int nctemp6557=CodeEs(nctemp6551,nctemp6553);
}
else{
struct tree* nctemp6559= p;
struct tree* nctemp6563= p;
nctempchar1* nctemp6565=PtreeGetype(nctemp6563);
nctempchar1* nctemp6561= nctemp6565;
int nctemp6566=CodeEs(nctemp6559,nctemp6561);
}
}
struct tree* nctemp6568= p;
struct nctempchar1 *nctemp6572;
static struct nctempchar1 nctemp6573 = {{ 2}, (char*)" \0"};
nctemp6572=&nctemp6573;
nctempchar1* nctemp6570= nctemp6572;
int nctemp6574=CodeEs(nctemp6568,nctemp6570);
struct tree* nctemp6576= p;
nctempchar1* nctemp6578= ntemp;
int nctemp6581=CodeEs(nctemp6576,nctemp6578);
struct tree* nctemp6583= p;
struct nctempchar1 *nctemp6587;
static struct nctempchar1 nctemp6588 = {{ 2}, (char*)"=\0"};
nctemp6587=&nctemp6588;
nctempchar1* nctemp6585= nctemp6587;
int nctemp6589=CodeEs(nctemp6583,nctemp6585);
struct tree* nctemp6591= p;
struct symbol* nctemp6595= tp;
nctempchar1* nctemp6597=SymGetname(nctemp6595);
nctempchar1* nctemp6593= nctemp6597;
int nctemp6598=CodeEs(nctemp6591,nctemp6593);
struct tree* nctemp6600= p;
struct nctempchar1 *nctemp6604;
static struct nctempchar1 nctemp6605 = {{ 2}, (char*)"(\0"};
nctemp6604=&nctemp6605;
nctempchar1* nctemp6602= nctemp6604;
int nctemp6606=CodeEs(nctemp6600,nctemp6602);
struct tree* nctemp6611= p;
struct tree* nctemp6613=PtreeMvchild(nctemp6611);
sp =nctemp6613;
int nctemp6614 = (sp !=0);
if(nctemp6614)
{
struct tree* nctemp6622= sp;
struct tree* nctemp6624=PtreeMvchild(nctemp6622);
sp =nctemp6624;
}
int nctemp6625 = (sp !=0);
int nctemp6629=nctemp6625;
while(nctemp6629)
{{
struct tree* nctemp6631= p;
struct tree* nctemp6635= sp;
nctempchar1* nctemp6637=PtreeGetempr(nctemp6635);
nctempchar1* nctemp6633= nctemp6637;
int nctemp6638=CodeEs(nctemp6631,nctemp6633);
struct tree* nctemp6646= sp;
struct tree* nctemp6648=PtreeMvsister(nctemp6646);
sp =nctemp6648;
int nctemp6639 = (sp !=0);
if(nctemp6639)
{
struct tree* nctemp6651= p;
struct nctempchar1 *nctemp6655;
static struct nctempchar1 nctemp6656 = {{ 2}, (char*)",\0"};
nctemp6655=&nctemp6656;
nctempchar1* nctemp6653= nctemp6655;
int nctemp6657=CodeEs(nctemp6651,nctemp6653);
}
noargs = (noargs + 1);
}
int nctemp6658 = (sp !=0);
nctemp6629=nctemp6658;}struct tree* nctemp6663= p;
struct nctempchar1 *nctemp6667;
static struct nctempchar1 nctemp6668 = {{ 5}, (char*)");\n\0"};
nctemp6667=&nctemp6668;
nctempchar1* nctemp6665= nctemp6667;
int nctemp6669=CodeEs(nctemp6663,nctemp6665);
return ntemp;
}
nctempchar1 * CodeCast (struct tree* p)
{
struct tree* np;
struct tree* sp;
struct tree* tp;
nctempchar1 *expr;
int rank;
int i;
nctempchar1 *dim;
nctempchar1 *pointer;
nctempchar1 *descr;
nctempchar1 *tmp;
nctempchar1 *type;
nctempchar1* nctemp6677=CodeMktemp();
pointer=nctemp6677;
nctempchar1* nctemp6683=CodeMktemp();
descr=nctemp6683;
struct tree* nctemp6689= p;
nctempchar1* nctemp6691=PtreeGetype(nctemp6689);
type=nctemp6691;
struct tree* nctemp6697= p;
nctempchar1* nctemp6699=PtreeGetname(nctemp6697);
nctempchar1* nctemp6695= nctemp6699;
struct nctempchar1 *nctemp6702;
static struct nctempchar1 nctemp6703 = {{ 5}, (char*)"cast\0"};
nctemp6702=&nctemp6703;
nctempchar1* nctemp6700= nctemp6702;
int nctemp6704=LibeStrcmp(nctemp6695,nctemp6700);
int nctemp6692 = (nctemp6704 ==1);
if(nctemp6692)
{
struct tree* nctemp6710= p;
struct tree* nctemp6712=PtreeMvchild(nctemp6710);
np =nctemp6712;
struct tree* nctemp6717= np;
struct tree* nctemp6719=PtreeMvsister(nctemp6717);
sp =nctemp6719;
struct tree* nctemp6725= sp;
nctempchar1* nctemp6727=CodeExpr(nctemp6725);
expr=nctemp6727;
struct tree* nctemp6733= np;
nctempchar1* nctemp6735=PtreeGetref(nctemp6733);
nctempchar1* nctemp6731= nctemp6735;
struct nctempchar1 *nctemp6738;
static struct nctempchar1 nctemp6739 = {{ 5}, (char*)"sref\0"};
nctemp6738=&nctemp6739;
nctempchar1* nctemp6736= nctemp6738;
int nctemp6740=LibeStrcmp(nctemp6731,nctemp6736);
int nctemp6728 = (nctemp6740 ==1);
if(nctemp6728)
{
nctempchar1* nctemp6747=CodeMktemp();
tmp=nctemp6747;
struct tree* nctemp6749= p;
nctempchar1* nctemp6751= type;
int nctemp6754=CodeEs(nctemp6749,nctemp6751);
struct tree* nctemp6756= p;
struct nctempchar1 *nctemp6760;
static struct nctempchar1 nctemp6761 = {{ 2}, (char*)" \0"};
nctemp6760=&nctemp6761;
nctempchar1* nctemp6758= nctemp6760;
int nctemp6762=CodeEs(nctemp6756,nctemp6758);
struct tree* nctemp6764= p;
nctempchar1* nctemp6766= tmp;
int nctemp6769=CodeEs(nctemp6764,nctemp6766);
struct tree* nctemp6771= p;
struct nctempchar1 *nctemp6775;
static struct nctempchar1 nctemp6776 = {{ 2}, (char*)"=\0"};
nctemp6775=&nctemp6776;
nctempchar1* nctemp6773= nctemp6775;
int nctemp6777=CodeEs(nctemp6771,nctemp6773);
struct tree* nctemp6779= p;
struct nctempchar1 *nctemp6783;
static struct nctempchar1 nctemp6784 = {{ 9}, (char*)"(struct \0"};
nctemp6783=&nctemp6784;
nctempchar1* nctemp6781= nctemp6783;
int nctemp6785=CodeEs(nctemp6779,nctemp6781);
struct tree* nctemp6787= p;
struct tree* nctemp6791= np;
nctempchar1* nctemp6793=PtreeGetype(nctemp6791);
nctempchar1* nctemp6789= nctemp6793;
int nctemp6794=CodeEs(nctemp6787,nctemp6789);
struct tree* nctemp6796= p;
struct nctempchar1 *nctemp6800;
static struct nctempchar1 nctemp6801 = {{ 4}, (char*)"*)(\0"};
nctemp6800=&nctemp6801;
nctempchar1* nctemp6798= nctemp6800;
int nctemp6802=CodeEs(nctemp6796,nctemp6798);
struct tree* nctemp6804= p;
nctempchar1* nctemp6806= expr;
int nctemp6809=CodeEs(nctemp6804,nctemp6806);
struct tree* nctemp6811= p;
struct nctempchar1 *nctemp6815;
static struct nctempchar1 nctemp6816 = {{ 5}, (char*)");\n\0"};
nctemp6815=&nctemp6816;
nctempchar1* nctemp6813= nctemp6815;
int nctemp6817=CodeEs(nctemp6811,nctemp6813);
}
else{
struct tree* nctemp6823= np;
nctempchar1* nctemp6825=PtreeGetref(nctemp6823);
nctempchar1* nctemp6821= nctemp6825;
struct nctempchar1 *nctemp6828;
static struct nctempchar1 nctemp6829 = {{ 5}, (char*)"aref\0"};
nctemp6828=&nctemp6829;
nctempchar1* nctemp6826= nctemp6828;
int nctemp6830=LibeStrcmp(nctemp6821,nctemp6826);
int nctemp6818 = (nctemp6830 ==1);
if(nctemp6818)
{
struct tree* nctemp6836= np;
struct tree* nctemp6838=PtreeMvchild(nctemp6836);
np =nctemp6838;
struct tree* nctemp6843= np;
struct tree* nctemp6845=PtreeMvchild(nctemp6843);
np =nctemp6845;
struct tree* nctemp6850= np;
struct tree* nctemp6852=PtreeMvchild(nctemp6850);
np =nctemp6852;
struct tree* nctemp6857= np;
struct tree* nctemp6859=PtreeMvchild(nctemp6857);
np =nctemp6859;
tp = np;
rank = 1;
struct tree* nctemp6867= np;
struct tree* nctemp6869=PtreeMvsister(nctemp6867);
np =nctemp6869;
int nctemp6860 = (np !=0);
int nctemp6871=nctemp6860;
while(nctemp6871)
{{
rank = (rank + 1);
}
struct tree* nctemp6879= np;
struct tree* nctemp6881=PtreeMvsister(nctemp6879);
np =nctemp6881;
int nctemp6872 = (np !=0);
nctemp6871=nctemp6872;}int nctemp6883 = (rank > 4);
if(nctemp6883)
{
struct nctempchar1 *nctemp6890;
static struct nctempchar1 nctemp6891 = {{ 29}, (char*)"Array dimension is too large\0"};
nctemp6890=&nctemp6891;
nctempchar1* nctemp6888= nctemp6890;
int nctemp6892=CodeError(nctemp6888);
}
p = tp;
struct tree* nctemp6894= p;
struct nctempchar1 *nctemp6898;
static struct nctempchar1 nctemp6899 = {{ 7}, (char*)"nctemp\0"};
nctemp6898=&nctemp6899;
nctempchar1* nctemp6896= nctemp6898;
int nctemp6900=CodeEs(nctemp6894,nctemp6896);
struct tree* nctemp6902= p;
nctempchar1* nctemp6904= type;
int nctemp6907=CodeEs(nctemp6902,nctemp6904);
int nctemp6909= rank;
int nctemp6911=CodeEd(nctemp6909);
struct tree* nctemp6913= p;
struct nctempchar1 *nctemp6917;
static struct nctempchar1 nctemp6918 = {{ 2}, (char*)" \0"};
nctemp6917=&nctemp6918;
nctempchar1* nctemp6915= nctemp6917;
int nctemp6919=CodeEs(nctemp6913,nctemp6915);
struct tree* nctemp6921= sp;
nctempchar1* nctemp6923= descr;
int nctemp6926=CodeEs(nctemp6921,nctemp6923);
struct tree* nctemp6928= sp;
struct nctempchar1 *nctemp6932;
static struct nctempchar1 nctemp6933 = {{ 4}, (char*)";\n\0"};
nctemp6932=&nctemp6933;
nctempchar1* nctemp6930= nctemp6932;
int nctemp6934=CodeEs(nctemp6928,nctemp6930);
struct tree* nctemp6936= p;
struct nctempchar1 *nctemp6940;
static struct nctempchar1 nctemp6941 = {{ 7}, (char*)"nctemp\0"};
nctemp6940=&nctemp6941;
nctempchar1* nctemp6938= nctemp6940;
int nctemp6942=CodeEs(nctemp6936,nctemp6938);
struct tree* nctemp6944= p;
nctempchar1* nctemp6946= type;
int nctemp6949=CodeEs(nctemp6944,nctemp6946);
int nctemp6951= rank;
int nctemp6953=CodeEd(nctemp6951);
struct tree* nctemp6955= p;
struct nctempchar1 *nctemp6959;
static struct nctempchar1 nctemp6960 = {{ 3}, (char*)" *\0"};
nctemp6959=&nctemp6960;
nctempchar1* nctemp6957= nctemp6959;
int nctemp6961=CodeEs(nctemp6955,nctemp6957);
struct tree* nctemp6963= sp;
nctempchar1* nctemp6965= pointer;
int nctemp6968=CodeEs(nctemp6963,nctemp6965);
struct tree* nctemp6970= p;
struct nctempchar1 *nctemp6974;
static struct nctempchar1 nctemp6975 = {{ 4}, (char*)";\n\0"};
nctemp6974=&nctemp6975;
nctempchar1* nctemp6972= nctemp6974;
int nctemp6976=CodeEs(nctemp6970,nctemp6972);
struct tree* nctemp6978= sp;
nctempchar1* nctemp6980= descr;
int nctemp6983=CodeEs(nctemp6978,nctemp6980);
struct tree* nctemp6985= sp;
struct nctempchar1 *nctemp6989;
static struct nctempchar1 nctemp6990 = {{ 2}, (char*)"=\0"};
nctemp6989=&nctemp6990;
nctempchar1* nctemp6987= nctemp6989;
int nctemp6991=CodeEs(nctemp6985,nctemp6987);
struct tree* nctemp6993= sp;
struct nctempchar1 *nctemp6997;
static struct nctempchar1 nctemp6998 = {{ 3}, (char*)"*(\0"};
nctemp6997=&nctemp6998;
nctempchar1* nctemp6995= nctemp6997;
int nctemp6999=CodeEs(nctemp6993,nctemp6995);
struct tree* nctemp7001= p;
struct nctempchar1 *nctemp7005;
static struct nctempchar1 nctemp7006 = {{ 7}, (char*)"nctemp\0"};
nctemp7005=&nctemp7006;
nctempchar1* nctemp7003= nctemp7005;
int nctemp7007=CodeEs(nctemp7001,nctemp7003);
struct tree* nctemp7009= sp;
nctempchar1* nctemp7011= type;
int nctemp7014=CodeEs(nctemp7009,nctemp7011);
int nctemp7016= rank;
int nctemp7018=CodeEd(nctemp7016);
struct tree* nctemp7020= sp;
struct nctempchar1 *nctemp7024;
static struct nctempchar1 nctemp7025 = {{ 4}, (char*)"*)(\0"};
nctemp7024=&nctemp7025;
nctempchar1* nctemp7022= nctemp7024;
int nctemp7026=CodeEs(nctemp7020,nctemp7022);
struct tree* nctemp7028= sp;
nctempchar1* nctemp7030= expr;
int nctemp7033=CodeEs(nctemp7028,nctemp7030);
struct tree* nctemp7035= sp;
struct nctempchar1 *nctemp7039;
static struct nctempchar1 nctemp7040 = {{ 5}, (char*)");\n\0"};
nctemp7039=&nctemp7040;
nctempchar1* nctemp7037= nctemp7039;
int nctemp7041=CodeEs(nctemp7035,nctemp7037);
p = tp;
i = 0;
int nctemp7042 = (p !=0);
int nctemp7046=nctemp7042;
while(nctemp7046)
{{
struct tree* nctemp7052= p;
nctempchar1* nctemp7054=CodeExpr(nctemp7052);
dim=nctemp7054;
struct tree* nctemp7056= sp;
nctempchar1* nctemp7058= descr;
int nctemp7061=CodeEs(nctemp7056,nctemp7058);
struct tree* nctemp7063= sp;
struct nctempchar1 *nctemp7067;
static struct nctempchar1 nctemp7068 = {{ 3}, (char*)".d\0"};
nctemp7067=&nctemp7068;
nctempchar1* nctemp7065= nctemp7067;
int nctemp7069=CodeEs(nctemp7063,nctemp7065);
struct tree* nctemp7071= sp;
struct nctempchar1 *nctemp7075;
static struct nctempchar1 nctemp7076 = {{ 2}, (char*)"[\0"};
nctemp7075=&nctemp7076;
nctempchar1* nctemp7073= nctemp7075;
int nctemp7077=CodeEs(nctemp7071,nctemp7073);
int nctemp7079= i;
int nctemp7081=CodeEd(nctemp7079);
struct tree* nctemp7083= sp;
struct nctempchar1 *nctemp7087;
static struct nctempchar1 nctemp7088 = {{ 3}, (char*)"]=\0"};
nctemp7087=&nctemp7088;
nctempchar1* nctemp7085= nctemp7087;
int nctemp7089=CodeEs(nctemp7083,nctemp7085);
struct tree* nctemp7091= sp;
nctempchar1* nctemp7093= dim;
int nctemp7096=CodeEs(nctemp7091,nctemp7093);
struct tree* nctemp7098= sp;
struct nctempchar1 *nctemp7102;
static struct nctempchar1 nctemp7103 = {{ 4}, (char*)";\n\0"};
nctemp7102=&nctemp7103;
nctempchar1* nctemp7100= nctemp7102;
int nctemp7104=CodeEs(nctemp7098,nctemp7100);
i = (i + 1);
struct tree* nctemp7109= p;
struct tree* nctemp7111=PtreeMvsister(nctemp7109);
p =nctemp7111;
}
int nctemp7112 = (p !=0);
nctemp7046=nctemp7112;}struct tree* nctemp7117= sp;
nctempchar1* nctemp7119= pointer;
int nctemp7122=CodeEs(nctemp7117,nctemp7119);
struct tree* nctemp7124= sp;
struct nctempchar1 *nctemp7128;
static struct nctempchar1 nctemp7129 = {{ 3}, (char*)"=&\0"};
nctemp7128=&nctemp7129;
nctempchar1* nctemp7126= nctemp7128;
int nctemp7130=CodeEs(nctemp7124,nctemp7126);
struct tree* nctemp7132= sp;
nctempchar1* nctemp7134= descr;
int nctemp7137=CodeEs(nctemp7132,nctemp7134);
struct tree* nctemp7139= sp;
struct nctempchar1 *nctemp7143;
static struct nctempchar1 nctemp7144 = {{ 4}, (char*)";\n\0"};
nctemp7143=&nctemp7144;
nctempchar1* nctemp7141= nctemp7143;
int nctemp7145=CodeEs(nctemp7139,nctemp7141);
}
else{
struct tree* nctemp7147= p;
nctempchar1* nctemp7149= type;
int nctemp7152=CodeEs(nctemp7147,nctemp7149);
struct tree* nctemp7154= p;
struct nctempchar1 *nctemp7158;
static struct nctempchar1 nctemp7159 = {{ 2}, (char*)" \0"};
nctemp7158=&nctemp7159;
nctempchar1* nctemp7156= nctemp7158;
int nctemp7160=CodeEs(nctemp7154,nctemp7156);
struct tree* nctemp7162= p;
nctempchar1* nctemp7164= pointer;
int nctemp7167=CodeEs(nctemp7162,nctemp7164);
struct tree* nctemp7169= p;
struct nctempchar1 *nctemp7173;
static struct nctempchar1 nctemp7174 = {{ 2}, (char*)"=\0"};
nctemp7173=&nctemp7174;
nctempchar1* nctemp7171= nctemp7173;
int nctemp7175=CodeEs(nctemp7169,nctemp7171);
struct tree* nctemp7177= p;
struct nctempchar1 *nctemp7181;
static struct nctempchar1 nctemp7182 = {{ 2}, (char*)"(\0"};
nctemp7181=&nctemp7182;
nctempchar1* nctemp7179= nctemp7181;
int nctemp7183=CodeEs(nctemp7177,nctemp7179);
struct tree* nctemp7185= p;
struct tree* nctemp7189= np;
nctempchar1* nctemp7191=PtreeGetype(nctemp7189);
nctempchar1* nctemp7187= nctemp7191;
int nctemp7192=CodeEs(nctemp7185,nctemp7187);
struct tree* nctemp7194= p;
struct nctempchar1 *nctemp7198;
static struct nctempchar1 nctemp7199 = {{ 3}, (char*)")(\0"};
nctemp7198=&nctemp7199;
nctempchar1* nctemp7196= nctemp7198;
int nctemp7200=CodeEs(nctemp7194,nctemp7196);
struct tree* nctemp7202= p;
nctempchar1* nctemp7204= expr;
int nctemp7207=CodeEs(nctemp7202,nctemp7204);
struct tree* nctemp7209= p;
struct nctempchar1 *nctemp7213;
static struct nctempchar1 nctemp7214 = {{ 5}, (char*)");\n\0"};
nctemp7213=&nctemp7214;
nctempchar1* nctemp7211= nctemp7213;
int nctemp7215=CodeEs(nctemp7209,nctemp7211);
}
}
}
return pointer;
}
nctempchar1 * CodePrimexpr (struct tree* p)
{
struct tree* nctemp7223= p;
nctempchar1* nctemp7225=PtreeGetname(nctemp7223);
nctempchar1* nctemp7221= nctemp7225;
struct nctempchar1 *nctemp7228;
static struct nctempchar1 nctemp7229 = {{ 11}, (char*)"identifier\0"};
nctemp7228=&nctemp7229;
nctempchar1* nctemp7226= nctemp7228;
int nctemp7230=LibeStrcmp(nctemp7221,nctemp7226);
int nctemp7218 = (nctemp7230 ==1);
if(nctemp7218)
{
struct tree* nctemp7233= p;
nctempchar1* nctemp7235=CodeIdent(nctemp7233);
return nctemp7235;
}
else{
struct tree* nctemp7241= p;
nctempchar1* nctemp7243=PtreeGetname(nctemp7241);
nctempchar1* nctemp7239= nctemp7243;
struct nctempchar1 *nctemp7246;
static struct nctempchar1 nctemp7247 = {{ 4}, (char*)"new\0"};
nctemp7246=&nctemp7247;
nctempchar1* nctemp7244= nctemp7246;
int nctemp7248=LibeStrcmp(nctemp7239,nctemp7244);
int nctemp7236 = (nctemp7248 ==1);
if(nctemp7236)
{
struct tree* nctemp7251= p;
nctempchar1* nctemp7253=CodeNew(nctemp7251);
return nctemp7253;
}
else{
struct tree* nctemp7259= p;
nctempchar1* nctemp7261=PtreeGetname(nctemp7259);
nctempchar1* nctemp7257= nctemp7261;
struct nctempchar1 *nctemp7264;
static struct nctempchar1 nctemp7265 = {{ 7}, (char*)"delete\0"};
nctemp7264=&nctemp7265;
nctempchar1* nctemp7262= nctemp7264;
int nctemp7266=LibeStrcmp(nctemp7257,nctemp7262);
int nctemp7254 = (nctemp7266 ==1);
if(nctemp7254)
{
struct tree* nctemp7269= p;
nctempchar1* nctemp7271=CodeDelete(nctemp7269);
return nctemp7271;
}
else{
struct tree* nctemp7277= p;
nctempchar1* nctemp7279=PtreeGetname(nctemp7277);
nctempchar1* nctemp7275= nctemp7279;
struct nctempchar1 *nctemp7282;
static struct nctempchar1 nctemp7283 = {{ 4}, (char*)"len\0"};
nctemp7282=&nctemp7283;
nctempchar1* nctemp7280= nctemp7282;
int nctemp7284=LibeStrcmp(nctemp7275,nctemp7280);
int nctemp7272 = (nctemp7284 ==1);
if(nctemp7272)
{
struct tree* nctemp7287= p;
nctempchar1* nctemp7289=CodeLen(nctemp7287);
return nctemp7289;
}
else{
struct tree* nctemp7295= p;
nctempchar1* nctemp7297=PtreeGetname(nctemp7295);
nctempchar1* nctemp7293= nctemp7297;
struct nctempchar1 *nctemp7300;
static struct nctempchar1 nctemp7301 = {{ 6}, (char*)"cmplx\0"};
nctemp7300=&nctemp7301;
nctempchar1* nctemp7298= nctemp7300;
int nctemp7302=LibeStrcmp(nctemp7293,nctemp7298);
int nctemp7290 = (nctemp7302 ==1);
if(nctemp7290)
{
struct tree* nctemp7305= p;
nctempchar1* nctemp7307=CodeCmplx(nctemp7305);
return nctemp7307;
}
else{
struct tree* nctemp7313= p;
nctempchar1* nctemp7315=PtreeGetname(nctemp7313);
nctempchar1* nctemp7311= nctemp7315;
struct nctempchar1 *nctemp7318;
static struct nctempchar1 nctemp7319 = {{ 3}, (char*)"im\0"};
nctemp7318=&nctemp7319;
nctempchar1* nctemp7316= nctemp7318;
int nctemp7320=LibeStrcmp(nctemp7311,nctemp7316);
int nctemp7308 = (nctemp7320 ==1);
if(nctemp7308)
{
struct tree* nctemp7323= p;
nctempchar1* nctemp7325=CodeIm(nctemp7323);
return nctemp7325;
}
else{
struct tree* nctemp7331= p;
nctempchar1* nctemp7333=PtreeGetname(nctemp7331);
nctempchar1* nctemp7329= nctemp7333;
struct nctempchar1 *nctemp7336;
static struct nctempchar1 nctemp7337 = {{ 3}, (char*)"re\0"};
nctemp7336=&nctemp7337;
nctempchar1* nctemp7334= nctemp7336;
int nctemp7338=LibeStrcmp(nctemp7329,nctemp7334);
int nctemp7326 = (nctemp7338 ==1);
if(nctemp7326)
{
struct tree* nctemp7341= p;
nctempchar1* nctemp7343=CodeRe(nctemp7341);
return nctemp7343;
}
else{
struct tree* nctemp7349= p;
nctempchar1* nctemp7351=PtreeGetname(nctemp7349);
nctempchar1* nctemp7347= nctemp7351;
struct nctempchar1 *nctemp7354;
static struct nctempchar1 nctemp7355 = {{ 6}, (char*)"fcall\0"};
nctemp7354=&nctemp7355;
nctempchar1* nctemp7352= nctemp7354;
int nctemp7356=LibeStrcmp(nctemp7347,nctemp7352);
int nctemp7344 = (nctemp7356 ==1);
if(nctemp7344)
{
struct tree* nctemp7359= p;
nctempchar1* nctemp7361=CodeFcall(nctemp7359);
return nctemp7361;
}
else{
struct tree* nctemp7367= p;
nctempchar1* nctemp7369=PtreeGetname(nctemp7367);
nctempchar1* nctemp7365= nctemp7369;
struct nctempchar1 *nctemp7372;
static struct nctempchar1 nctemp7373 = {{ 5}, (char*)"cast\0"};
nctemp7372=&nctemp7373;
nctempchar1* nctemp7370= nctemp7372;
int nctemp7374=LibeStrcmp(nctemp7365,nctemp7370);
int nctemp7362 = (nctemp7374 ==1);
if(nctemp7362)
{
struct tree* nctemp7377= p;
nctempchar1* nctemp7379=CodeCast(nctemp7377);
return nctemp7379;
}
else{
struct tree* nctemp7385= p;
nctempchar1* nctemp7387=PtreeGetname(nctemp7385);
nctempchar1* nctemp7383= nctemp7387;
struct nctempchar1 *nctemp7390;
static struct nctempchar1 nctemp7391 = {{ 10}, (char*)"iconstant\0"};
nctemp7390=&nctemp7391;
nctempchar1* nctemp7388= nctemp7390;
int nctemp7392=LibeStrcmp(nctemp7383,nctemp7388);
int nctemp7380 = (nctemp7392 ==1);
if(nctemp7380)
{
struct tree* nctemp7395= p;
nctempchar1* nctemp7397=PtreeGetdef(nctemp7395);
return nctemp7397;
}
else{
struct tree* nctemp7403= p;
nctempchar1* nctemp7405=PtreeGetname(nctemp7403);
nctempchar1* nctemp7401= nctemp7405;
struct nctempchar1 *nctemp7408;
static struct nctempchar1 nctemp7409 = {{ 10}, (char*)"rconstant\0"};
nctemp7408=&nctemp7409;
nctempchar1* nctemp7406= nctemp7408;
int nctemp7410=LibeStrcmp(nctemp7401,nctemp7406);
int nctemp7398 = (nctemp7410 ==1);
if(nctemp7398)
{
struct tree* nctemp7413= p;
nctempchar1* nctemp7415=PtreeGetdef(nctemp7413);
return nctemp7415;
}
else{
struct tree* nctemp7421= p;
nctempchar1* nctemp7423=PtreeGetname(nctemp7421);
nctempchar1* nctemp7419= nctemp7423;
struct nctempchar1 *nctemp7426;
static struct nctempchar1 nctemp7427 = {{ 10}, (char*)"sconstant\0"};
nctemp7426=&nctemp7427;
nctempchar1* nctemp7424= nctemp7426;
int nctemp7428=LibeStrcmp(nctemp7419,nctemp7424);
int nctemp7416 = (nctemp7428 ==1);
if(nctemp7416)
{
struct tree* nctemp7431= p;
nctempchar1* nctemp7433=CodeSconstant(nctemp7431);
return nctemp7433;
}
else{
struct tree* nctemp7435= p;
nctempchar1* nctemp7437=CodeBinexpr(nctemp7435);
return nctemp7437;
}
}
}
}
}
}
}
}
}
}
}
}
}
nctempchar1 * CodeUnexpr (struct tree* p)
{
nctempchar1 *tmp;
nctempchar1 *tempr;
nctempchar1* nctemp7443=CodeMktemp();
tempr=nctemp7443;
struct tree* nctemp7449= p;
nctempchar1* nctemp7451=PtreeGetname(nctemp7449);
nctempchar1* nctemp7447= nctemp7451;
struct nctempchar1 *nctemp7454;
static struct nctempchar1 nctemp7455 = {{ 7}, (char*)"unexpr\0"};
nctemp7454=&nctemp7455;
nctempchar1* nctemp7452= nctemp7454;
int nctemp7456=LibeStrcmp(nctemp7447,nctemp7452);
int nctemp7444 = (nctemp7456 ==1);
if(nctemp7444)
{
struct tree* nctemp7463= p;
nctempchar1* nctemp7465=PtreeGetype(nctemp7463);
nctempchar1* nctemp7461= nctemp7465;
struct nctempchar1 *nctemp7468;
static struct nctempchar1 nctemp7469 = {{ 8}, (char*)"complex\0"};
nctemp7468=&nctemp7469;
nctempchar1* nctemp7466= nctemp7468;
int nctemp7470=LibeStrcmp(nctemp7461,nctemp7466);
int nctemp7458 = (nctemp7470 ==1);
if(nctemp7458)
{
struct tree* nctemp7479= p;
struct tree* nctemp7481=PtreeMvchild(nctemp7479);
struct tree* nctemp7477= nctemp7481;
nctempchar1* nctemp7482=CodePrimexpr(nctemp7477);
tmp=nctemp7482;
struct tree* nctemp7484= p;
struct nctempchar1 *nctemp7488;
static struct nctempchar1 nctemp7489 = {{ 4}, (char*)";\n\0"};
nctemp7488=&nctemp7489;
nctempchar1* nctemp7486= nctemp7488;
int nctemp7490=CodeEs(nctemp7484,nctemp7486);
struct tree* nctemp7492= p;
nctempchar1* nctemp7494= tempr;
int nctemp7497=CodeEs(nctemp7492,nctemp7494);
struct tree* nctemp7499= p;
struct nctempchar1 *nctemp7503;
static struct nctempchar1 nctemp7504 = {{ 3}, (char*)".r\0"};
nctemp7503=&nctemp7504;
nctempchar1* nctemp7501= nctemp7503;
int nctemp7505=CodeEs(nctemp7499,nctemp7501);
struct tree* nctemp7507= p;
struct nctempchar1 *nctemp7511;
static struct nctempchar1 nctemp7512 = {{ 4}, (char*)"= -\0"};
nctemp7511=&nctemp7512;
nctempchar1* nctemp7509= nctemp7511;
int nctemp7513=CodeEs(nctemp7507,nctemp7509);
struct tree* nctemp7515= p;
nctempchar1* nctemp7517= tmp;
int nctemp7520=CodeEs(nctemp7515,nctemp7517);
struct tree* nctemp7522= p;
struct nctempchar1 *nctemp7526;
static struct nctempchar1 nctemp7527 = {{ 3}, (char*)".r\0"};
nctemp7526=&nctemp7527;
nctempchar1* nctemp7524= nctemp7526;
int nctemp7528=CodeEs(nctemp7522,nctemp7524);
struct tree* nctemp7530= p;
struct nctempchar1 *nctemp7534;
static struct nctempchar1 nctemp7535 = {{ 4}, (char*)";\n\0"};
nctemp7534=&nctemp7535;
nctempchar1* nctemp7532= nctemp7534;
int nctemp7536=CodeEs(nctemp7530,nctemp7532);
struct tree* nctemp7538= p;
nctempchar1* nctemp7540= tempr;
int nctemp7543=CodeEs(nctemp7538,nctemp7540);
struct tree* nctemp7545= p;
struct nctempchar1 *nctemp7549;
static struct nctempchar1 nctemp7550 = {{ 3}, (char*)".i\0"};
nctemp7549=&nctemp7550;
nctempchar1* nctemp7547= nctemp7549;
int nctemp7551=CodeEs(nctemp7545,nctemp7547);
struct tree* nctemp7553= p;
struct nctempchar1 *nctemp7557;
static struct nctempchar1 nctemp7558 = {{ 4}, (char*)"= -\0"};
nctemp7557=&nctemp7558;
nctempchar1* nctemp7555= nctemp7557;
int nctemp7559=CodeEs(nctemp7553,nctemp7555);
struct tree* nctemp7561= p;
nctempchar1* nctemp7563= tmp;
int nctemp7566=CodeEs(nctemp7561,nctemp7563);
struct tree* nctemp7568= p;
struct nctempchar1 *nctemp7572;
static struct nctempchar1 nctemp7573 = {{ 3}, (char*)".i\0"};
nctemp7572=&nctemp7573;
nctempchar1* nctemp7570= nctemp7572;
int nctemp7574=CodeEs(nctemp7568,nctemp7570);
struct tree* nctemp7576= p;
struct nctempchar1 *nctemp7580;
static struct nctempchar1 nctemp7581 = {{ 4}, (char*)";\n\0"};
nctemp7580=&nctemp7581;
nctempchar1* nctemp7578= nctemp7580;
int nctemp7582=CodeEs(nctemp7576,nctemp7578);
return tempr;
}
else{
struct tree* nctemp7592= p;
struct tree* nctemp7594=PtreeMvchild(nctemp7592);
struct tree* nctemp7590= nctemp7594;
nctempchar1* nctemp7595=CodePrimexpr(nctemp7590);
tmp=nctemp7595;
struct tree* nctemp7597= p;
struct tree* nctemp7601= p;
nctempchar1* nctemp7603=PtreeGetype(nctemp7601);
nctempchar1* nctemp7599= nctemp7603;
int nctemp7604=CodeEs(nctemp7597,nctemp7599);
struct tree* nctemp7606= p;
struct nctempchar1 *nctemp7610;
static struct nctempchar1 nctemp7611 = {{ 2}, (char*)" \0"};
nctemp7610=&nctemp7611;
nctempchar1* nctemp7608= nctemp7610;
int nctemp7612=CodeEs(nctemp7606,nctemp7608);
struct tree* nctemp7614= p;
nctempchar1* nctemp7616= tempr;
int nctemp7619=CodeEs(nctemp7614,nctemp7616);
struct tree* nctemp7621= p;
struct nctempchar1 *nctemp7625;
static struct nctempchar1 nctemp7626 = {{ 4}, (char*)"= -\0"};
nctemp7625=&nctemp7626;
nctempchar1* nctemp7623= nctemp7625;
int nctemp7627=CodeEs(nctemp7621,nctemp7623);
struct tree* nctemp7629= p;
nctempchar1* nctemp7631= tmp;
int nctemp7634=CodeEs(nctemp7629,nctemp7631);
struct tree* nctemp7636= p;
struct nctempchar1 *nctemp7640;
static struct nctempchar1 nctemp7641 = {{ 4}, (char*)";\n\0"};
nctemp7640=&nctemp7641;
nctempchar1* nctemp7638= nctemp7640;
int nctemp7642=CodeEs(nctemp7636,nctemp7638);
return tempr;
}
}
else{
struct tree* nctemp7646= p;
nctempchar1* nctemp7648=CodePrimexpr(nctemp7646);
return nctemp7648;
}
}
nctempchar1 * CodeAddexpr (struct tree* p,nctempchar1 *lval,nctempchar1 *rval)
{
nctempchar1 *type;
nctempchar1 *tempr;
nctempchar1 *opr;
struct tree* nctemp7654= p;
nctempchar1* nctemp7656=PtreeGetype(nctemp7654);
type=nctemp7656;
nctempchar1* nctemp7662=CodeMktemp();
tempr=nctemp7662;
struct tree* nctemp7668= p;
nctempchar1* nctemp7670=PtreeGetdef(nctemp7668);
opr=nctemp7670;
nctempchar1* nctemp7674= type;
struct nctempchar1 *nctemp7679;
static struct nctempchar1 nctemp7680 = {{ 8}, (char*)"complex\0"};
nctemp7679=&nctemp7680;
nctempchar1* nctemp7677= nctemp7679;
int nctemp7681=LibeStrcmp(nctemp7674,nctemp7677);
int nctemp7671 = (nctemp7681 ==1);
if(nctemp7671)
{
nctempchar1* nctemp7689= opr;
struct nctempchar1 *nctemp7694;
static struct nctempchar1 nctemp7695 = {{ 2}, (char*)"+\0"};
nctemp7694=&nctemp7695;
nctempchar1* nctemp7692= nctemp7694;
int nctemp7696=LibeStrcmp(nctemp7689,nctemp7692);
int nctemp7686 = (nctemp7696 ==1);
nctempchar1* nctemp7702= opr;
struct nctempchar1 *nctemp7707;
static struct nctempchar1 nctemp7708 = {{ 2}, (char*)"-\0"};
nctemp7707=&nctemp7708;
nctempchar1* nctemp7705= nctemp7707;
int nctemp7709=LibeStrcmp(nctemp7702,nctemp7705);
int nctemp7699 = (nctemp7709 ==1);
int nctemp7683 = (nctemp7686 || nctemp7699);
if(nctemp7683)
{
struct tree* nctemp7712= p;
nctempchar1* nctemp7714= type;
int nctemp7717=CodeEs(nctemp7712,nctemp7714);
struct tree* nctemp7719= p;
struct nctempchar1 *nctemp7723;
static struct nctempchar1 nctemp7724 = {{ 2}, (char*)" \0"};
nctemp7723=&nctemp7724;
nctempchar1* nctemp7721= nctemp7723;
int nctemp7725=CodeEs(nctemp7719,nctemp7721);
struct tree* nctemp7727= p;
nctempchar1* nctemp7729= tempr;
int nctemp7732=CodeEs(nctemp7727,nctemp7729);
struct tree* nctemp7734= p;
struct nctempchar1 *nctemp7738;
static struct nctempchar1 nctemp7739 = {{ 3}, (char*)".r\0"};
nctemp7738=&nctemp7739;
nctempchar1* nctemp7736= nctemp7738;
int nctemp7740=CodeEs(nctemp7734,nctemp7736);
struct tree* nctemp7742= p;
struct nctempchar1 *nctemp7746;
static struct nctempchar1 nctemp7747 = {{ 4}, (char*)" = \0"};
nctemp7746=&nctemp7747;
nctempchar1* nctemp7744= nctemp7746;
int nctemp7748=CodeEs(nctemp7742,nctemp7744);
struct tree* nctemp7750= p;
nctempchar1* nctemp7752= lval;
int nctemp7755=CodeEs(nctemp7750,nctemp7752);
struct tree* nctemp7757= p;
struct nctempchar1 *nctemp7761;
static struct nctempchar1 nctemp7762 = {{ 3}, (char*)".r\0"};
nctemp7761=&nctemp7762;
nctempchar1* nctemp7759= nctemp7761;
int nctemp7763=CodeEs(nctemp7757,nctemp7759);
struct tree* nctemp7765= p;
struct nctempchar1 *nctemp7769;
static struct nctempchar1 nctemp7770 = {{ 2}, (char*)" \0"};
nctemp7769=&nctemp7770;
nctempchar1* nctemp7767= nctemp7769;
int nctemp7771=CodeEs(nctemp7765,nctemp7767);
struct tree* nctemp7773= p;
struct tree* nctemp7777= p;
nctempchar1* nctemp7779=PtreeGetdef(nctemp7777);
nctempchar1* nctemp7775= nctemp7779;
int nctemp7780=CodeEs(nctemp7773,nctemp7775);
struct tree* nctemp7782= p;
struct nctempchar1 *nctemp7786;
static struct nctempchar1 nctemp7787 = {{ 2}, (char*)" \0"};
nctemp7786=&nctemp7787;
nctempchar1* nctemp7784= nctemp7786;
int nctemp7788=CodeEs(nctemp7782,nctemp7784);
struct tree* nctemp7790= p;
nctempchar1* nctemp7792= rval;
int nctemp7795=CodeEs(nctemp7790,nctemp7792);
struct tree* nctemp7797= p;
struct nctempchar1 *nctemp7801;
static struct nctempchar1 nctemp7802 = {{ 3}, (char*)".r\0"};
nctemp7801=&nctemp7802;
nctempchar1* nctemp7799= nctemp7801;
int nctemp7803=CodeEs(nctemp7797,nctemp7799);
struct tree* nctemp7805= p;
struct nctempchar1 *nctemp7809;
static struct nctempchar1 nctemp7810 = {{ 4}, (char*)";\n\0"};
nctemp7809=&nctemp7810;
nctempchar1* nctemp7807= nctemp7809;
int nctemp7811=CodeEs(nctemp7805,nctemp7807);
struct tree* nctemp7813= p;
nctempchar1* nctemp7815= type;
int nctemp7818=CodeEs(nctemp7813,nctemp7815);
struct tree* nctemp7820= p;
struct nctempchar1 *nctemp7824;
static struct nctempchar1 nctemp7825 = {{ 2}, (char*)" \0"};
nctemp7824=&nctemp7825;
nctempchar1* nctemp7822= nctemp7824;
int nctemp7826=CodeEs(nctemp7820,nctemp7822);
struct tree* nctemp7828= p;
nctempchar1* nctemp7830= tempr;
int nctemp7833=CodeEs(nctemp7828,nctemp7830);
struct tree* nctemp7835= p;
struct nctempchar1 *nctemp7839;
static struct nctempchar1 nctemp7840 = {{ 3}, (char*)".i\0"};
nctemp7839=&nctemp7840;
nctempchar1* nctemp7837= nctemp7839;
int nctemp7841=CodeEs(nctemp7835,nctemp7837);
struct tree* nctemp7843= p;
struct nctempchar1 *nctemp7847;
static struct nctempchar1 nctemp7848 = {{ 4}, (char*)" = \0"};
nctemp7847=&nctemp7848;
nctempchar1* nctemp7845= nctemp7847;
int nctemp7849=CodeEs(nctemp7843,nctemp7845);
struct tree* nctemp7851= p;
nctempchar1* nctemp7853= lval;
int nctemp7856=CodeEs(nctemp7851,nctemp7853);
struct tree* nctemp7858= p;
struct nctempchar1 *nctemp7862;
static struct nctempchar1 nctemp7863 = {{ 3}, (char*)".i\0"};
nctemp7862=&nctemp7863;
nctempchar1* nctemp7860= nctemp7862;
int nctemp7864=CodeEs(nctemp7858,nctemp7860);
struct tree* nctemp7866= p;
struct nctempchar1 *nctemp7870;
static struct nctempchar1 nctemp7871 = {{ 2}, (char*)" \0"};
nctemp7870=&nctemp7871;
nctempchar1* nctemp7868= nctemp7870;
int nctemp7872=CodeEs(nctemp7866,nctemp7868);
struct tree* nctemp7874= p;
struct tree* nctemp7878= p;
nctempchar1* nctemp7880=PtreeGetdef(nctemp7878);
nctempchar1* nctemp7876= nctemp7880;
int nctemp7881=CodeEs(nctemp7874,nctemp7876);
struct tree* nctemp7883= p;
struct nctempchar1 *nctemp7887;
static struct nctempchar1 nctemp7888 = {{ 2}, (char*)" \0"};
nctemp7887=&nctemp7888;
nctempchar1* nctemp7885= nctemp7887;
int nctemp7889=CodeEs(nctemp7883,nctemp7885);
struct tree* nctemp7891= p;
nctempchar1* nctemp7893= rval;
int nctemp7896=CodeEs(nctemp7891,nctemp7893);
struct tree* nctemp7898= p;
struct nctempchar1 *nctemp7902;
static struct nctempchar1 nctemp7903 = {{ 3}, (char*)".i\0"};
nctemp7902=&nctemp7903;
nctempchar1* nctemp7900= nctemp7902;
int nctemp7904=CodeEs(nctemp7898,nctemp7900);
struct tree* nctemp7906= p;
struct nctempchar1 *nctemp7910;
static struct nctempchar1 nctemp7911 = {{ 4}, (char*)";\n\0"};
nctemp7910=&nctemp7911;
nctempchar1* nctemp7908= nctemp7910;
int nctemp7912=CodeEs(nctemp7906,nctemp7908);
}
else{
nctempchar1* nctemp7916= opr;
struct nctempchar1 *nctemp7921;
static struct nctempchar1 nctemp7922 = {{ 2}, (char*)"*\0"};
nctemp7921=&nctemp7922;
nctempchar1* nctemp7919= nctemp7921;
int nctemp7923=LibeStrcmp(nctemp7916,nctemp7919);
int nctemp7913 = (nctemp7923 ==1);
if(nctemp7913)
{
struct tree* nctemp7926= p;
nctempchar1* nctemp7928= type;
int nctemp7931=CodeEs(nctemp7926,nctemp7928);
struct tree* nctemp7933= p;
struct nctempchar1 *nctemp7937;
static struct nctempchar1 nctemp7938 = {{ 2}, (char*)" \0"};
nctemp7937=&nctemp7938;
nctempchar1* nctemp7935= nctemp7937;
int nctemp7939=CodeEs(nctemp7933,nctemp7935);
struct tree* nctemp7941= p;
nctempchar1* nctemp7943= tempr;
int nctemp7946=CodeEs(nctemp7941,nctemp7943);
struct tree* nctemp7948= p;
struct nctempchar1 *nctemp7952;
static struct nctempchar1 nctemp7953 = {{ 3}, (char*)".r\0"};
nctemp7952=&nctemp7953;
nctempchar1* nctemp7950= nctemp7952;
int nctemp7954=CodeEs(nctemp7948,nctemp7950);
struct tree* nctemp7956= p;
struct nctempchar1 *nctemp7960;
static struct nctempchar1 nctemp7961 = {{ 4}, (char*)" = \0"};
nctemp7960=&nctemp7961;
nctempchar1* nctemp7958= nctemp7960;
int nctemp7962=CodeEs(nctemp7956,nctemp7958);
struct tree* nctemp7964= p;
nctempchar1* nctemp7966= lval;
int nctemp7969=CodeEs(nctemp7964,nctemp7966);
struct tree* nctemp7971= p;
struct nctempchar1 *nctemp7975;
static struct nctempchar1 nctemp7976 = {{ 3}, (char*)".r\0"};
nctemp7975=&nctemp7976;
nctempchar1* nctemp7973= nctemp7975;
int nctemp7977=CodeEs(nctemp7971,nctemp7973);
struct tree* nctemp7979= p;
struct nctempchar1 *nctemp7983;
static struct nctempchar1 nctemp7984 = {{ 2}, (char*)"*\0"};
nctemp7983=&nctemp7984;
nctempchar1* nctemp7981= nctemp7983;
int nctemp7985=CodeEs(nctemp7979,nctemp7981);
struct tree* nctemp7987= p;
nctempchar1* nctemp7989= rval;
int nctemp7992=CodeEs(nctemp7987,nctemp7989);
struct tree* nctemp7994= p;
struct nctempchar1 *nctemp7998;
static struct nctempchar1 nctemp7999 = {{ 3}, (char*)".r\0"};
nctemp7998=&nctemp7999;
nctempchar1* nctemp7996= nctemp7998;
int nctemp8000=CodeEs(nctemp7994,nctemp7996);
struct tree* nctemp8002= p;
struct nctempchar1 *nctemp8006;
static struct nctempchar1 nctemp8007 = {{ 2}, (char*)"-\0"};
nctemp8006=&nctemp8007;
nctempchar1* nctemp8004= nctemp8006;
int nctemp8008=CodeEs(nctemp8002,nctemp8004);
struct tree* nctemp8010= p;
nctempchar1* nctemp8012= lval;
int nctemp8015=CodeEs(nctemp8010,nctemp8012);
struct tree* nctemp8017= p;
struct nctempchar1 *nctemp8021;
static struct nctempchar1 nctemp8022 = {{ 3}, (char*)".i\0"};
nctemp8021=&nctemp8022;
nctempchar1* nctemp8019= nctemp8021;
int nctemp8023=CodeEs(nctemp8017,nctemp8019);
struct tree* nctemp8025= p;
struct nctempchar1 *nctemp8029;
static struct nctempchar1 nctemp8030 = {{ 2}, (char*)"*\0"};
nctemp8029=&nctemp8030;
nctempchar1* nctemp8027= nctemp8029;
int nctemp8031=CodeEs(nctemp8025,nctemp8027);
struct tree* nctemp8033= p;
nctempchar1* nctemp8035= rval;
int nctemp8038=CodeEs(nctemp8033,nctemp8035);
struct tree* nctemp8040= p;
struct nctempchar1 *nctemp8044;
static struct nctempchar1 nctemp8045 = {{ 3}, (char*)".i\0"};
nctemp8044=&nctemp8045;
nctempchar1* nctemp8042= nctemp8044;
int nctemp8046=CodeEs(nctemp8040,nctemp8042);
struct tree* nctemp8048= p;
struct nctempchar1 *nctemp8052;
static struct nctempchar1 nctemp8053 = {{ 4}, (char*)";\n\0"};
nctemp8052=&nctemp8053;
nctempchar1* nctemp8050= nctemp8052;
int nctemp8054=CodeEs(nctemp8048,nctemp8050);
struct tree* nctemp8056= p;
nctempchar1* nctemp8058= type;
int nctemp8061=CodeEs(nctemp8056,nctemp8058);
struct tree* nctemp8063= p;
struct nctempchar1 *nctemp8067;
static struct nctempchar1 nctemp8068 = {{ 2}, (char*)" \0"};
nctemp8067=&nctemp8068;
nctempchar1* nctemp8065= nctemp8067;
int nctemp8069=CodeEs(nctemp8063,nctemp8065);
struct tree* nctemp8071= p;
nctempchar1* nctemp8073= tempr;
int nctemp8076=CodeEs(nctemp8071,nctemp8073);
struct tree* nctemp8078= p;
struct nctempchar1 *nctemp8082;
static struct nctempchar1 nctemp8083 = {{ 3}, (char*)".i\0"};
nctemp8082=&nctemp8083;
nctempchar1* nctemp8080= nctemp8082;
int nctemp8084=CodeEs(nctemp8078,nctemp8080);
struct tree* nctemp8086= p;
struct nctempchar1 *nctemp8090;
static struct nctempchar1 nctemp8091 = {{ 4}, (char*)" = \0"};
nctemp8090=&nctemp8091;
nctempchar1* nctemp8088= nctemp8090;
int nctemp8092=CodeEs(nctemp8086,nctemp8088);
struct tree* nctemp8094= p;
nctempchar1* nctemp8096= lval;
int nctemp8099=CodeEs(nctemp8094,nctemp8096);
struct tree* nctemp8101= p;
struct nctempchar1 *nctemp8105;
static struct nctempchar1 nctemp8106 = {{ 3}, (char*)".i\0"};
nctemp8105=&nctemp8106;
nctempchar1* nctemp8103= nctemp8105;
int nctemp8107=CodeEs(nctemp8101,nctemp8103);
struct tree* nctemp8109= p;
struct nctempchar1 *nctemp8113;
static struct nctempchar1 nctemp8114 = {{ 2}, (char*)"*\0"};
nctemp8113=&nctemp8114;
nctempchar1* nctemp8111= nctemp8113;
int nctemp8115=CodeEs(nctemp8109,nctemp8111);
struct tree* nctemp8117= p;
nctempchar1* nctemp8119= rval;
int nctemp8122=CodeEs(nctemp8117,nctemp8119);
struct tree* nctemp8124= p;
struct nctempchar1 *nctemp8128;
static struct nctempchar1 nctemp8129 = {{ 3}, (char*)".r\0"};
nctemp8128=&nctemp8129;
nctempchar1* nctemp8126= nctemp8128;
int nctemp8130=CodeEs(nctemp8124,nctemp8126);
struct tree* nctemp8132= p;
struct nctempchar1 *nctemp8136;
static struct nctempchar1 nctemp8137 = {{ 2}, (char*)"+\0"};
nctemp8136=&nctemp8137;
nctempchar1* nctemp8134= nctemp8136;
int nctemp8138=CodeEs(nctemp8132,nctemp8134);
struct tree* nctemp8140= p;
nctempchar1* nctemp8142= lval;
int nctemp8145=CodeEs(nctemp8140,nctemp8142);
struct tree* nctemp8147= p;
struct nctempchar1 *nctemp8151;
static struct nctempchar1 nctemp8152 = {{ 3}, (char*)".r\0"};
nctemp8151=&nctemp8152;
nctempchar1* nctemp8149= nctemp8151;
int nctemp8153=CodeEs(nctemp8147,nctemp8149);
struct tree* nctemp8155= p;
struct nctempchar1 *nctemp8159;
static struct nctempchar1 nctemp8160 = {{ 2}, (char*)"*\0"};
nctemp8159=&nctemp8160;
nctempchar1* nctemp8157= nctemp8159;
int nctemp8161=CodeEs(nctemp8155,nctemp8157);
struct tree* nctemp8163= p;
nctempchar1* nctemp8165= rval;
int nctemp8168=CodeEs(nctemp8163,nctemp8165);
struct tree* nctemp8170= p;
struct nctempchar1 *nctemp8174;
static struct nctempchar1 nctemp8175 = {{ 3}, (char*)".i\0"};
nctemp8174=&nctemp8175;
nctempchar1* nctemp8172= nctemp8174;
int nctemp8176=CodeEs(nctemp8170,nctemp8172);
struct tree* nctemp8178= p;
struct nctempchar1 *nctemp8182;
static struct nctempchar1 nctemp8183 = {{ 4}, (char*)";\n\0"};
nctemp8182=&nctemp8183;
nctempchar1* nctemp8180= nctemp8182;
int nctemp8184=CodeEs(nctemp8178,nctemp8180);
}
else{
nctempchar1* nctemp8188= opr;
struct nctempchar1 *nctemp8193;
static struct nctempchar1 nctemp8194 = {{ 2}, (char*)"/\0"};
nctemp8193=&nctemp8194;
nctempchar1* nctemp8191= nctemp8193;
int nctemp8195=LibeStrcmp(nctemp8188,nctemp8191);
int nctemp8185 = (nctemp8195 ==1);
if(nctemp8185)
{
struct tree* nctemp8198= p;
nctempchar1* nctemp8200= type;
int nctemp8203=CodeEs(nctemp8198,nctemp8200);
struct tree* nctemp8205= p;
struct nctempchar1 *nctemp8209;
static struct nctempchar1 nctemp8210 = {{ 2}, (char*)" \0"};
nctemp8209=&nctemp8210;
nctempchar1* nctemp8207= nctemp8209;
int nctemp8211=CodeEs(nctemp8205,nctemp8207);
struct tree* nctemp8213= p;
nctempchar1* nctemp8215= tempr;
int nctemp8218=CodeEs(nctemp8213,nctemp8215);
struct tree* nctemp8220= p;
struct nctempchar1 *nctemp8224;
static struct nctempchar1 nctemp8225 = {{ 3}, (char*)".r\0"};
nctemp8224=&nctemp8225;
nctempchar1* nctemp8222= nctemp8224;
int nctemp8226=CodeEs(nctemp8220,nctemp8222);
struct tree* nctemp8228= p;
struct nctempchar1 *nctemp8232;
static struct nctempchar1 nctemp8233 = {{ 4}, (char*)" = \0"};
nctemp8232=&nctemp8233;
nctempchar1* nctemp8230= nctemp8232;
int nctemp8234=CodeEs(nctemp8228,nctemp8230);
struct tree* nctemp8236= p;
struct nctempchar1 *nctemp8240;
static struct nctempchar1 nctemp8241 = {{ 2}, (char*)"(\0"};
nctemp8240=&nctemp8241;
nctempchar1* nctemp8238= nctemp8240;
int nctemp8242=CodeEs(nctemp8236,nctemp8238);
struct tree* nctemp8244= p;
nctempchar1* nctemp8246= lval;
int nctemp8249=CodeEs(nctemp8244,nctemp8246);
struct tree* nctemp8251= p;
struct nctempchar1 *nctemp8255;
static struct nctempchar1 nctemp8256 = {{ 3}, (char*)".r\0"};
nctemp8255=&nctemp8256;
nctempchar1* nctemp8253= nctemp8255;
int nctemp8257=CodeEs(nctemp8251,nctemp8253);
struct tree* nctemp8259= p;
struct nctempchar1 *nctemp8263;
static struct nctempchar1 nctemp8264 = {{ 2}, (char*)"*\0"};
nctemp8263=&nctemp8264;
nctempchar1* nctemp8261= nctemp8263;
int nctemp8265=CodeEs(nctemp8259,nctemp8261);
struct tree* nctemp8267= p;
nctempchar1* nctemp8269= rval;
int nctemp8272=CodeEs(nctemp8267,nctemp8269);
struct tree* nctemp8274= p;
struct nctempchar1 *nctemp8278;
static struct nctempchar1 nctemp8279 = {{ 3}, (char*)".r\0"};
nctemp8278=&nctemp8279;
nctempchar1* nctemp8276= nctemp8278;
int nctemp8280=CodeEs(nctemp8274,nctemp8276);
struct tree* nctemp8282= p;
struct nctempchar1 *nctemp8286;
static struct nctempchar1 nctemp8287 = {{ 2}, (char*)"+\0"};
nctemp8286=&nctemp8287;
nctempchar1* nctemp8284= nctemp8286;
int nctemp8288=CodeEs(nctemp8282,nctemp8284);
struct tree* nctemp8290= p;
nctempchar1* nctemp8292= lval;
int nctemp8295=CodeEs(nctemp8290,nctemp8292);
struct tree* nctemp8297= p;
struct nctempchar1 *nctemp8301;
static struct nctempchar1 nctemp8302 = {{ 3}, (char*)".i\0"};
nctemp8301=&nctemp8302;
nctempchar1* nctemp8299= nctemp8301;
int nctemp8303=CodeEs(nctemp8297,nctemp8299);
struct tree* nctemp8305= p;
struct nctempchar1 *nctemp8309;
static struct nctempchar1 nctemp8310 = {{ 2}, (char*)"*\0"};
nctemp8309=&nctemp8310;
nctempchar1* nctemp8307= nctemp8309;
int nctemp8311=CodeEs(nctemp8305,nctemp8307);
struct tree* nctemp8313= p;
nctempchar1* nctemp8315= rval;
int nctemp8318=CodeEs(nctemp8313,nctemp8315);
struct tree* nctemp8320= p;
struct nctempchar1 *nctemp8324;
static struct nctempchar1 nctemp8325 = {{ 3}, (char*)".i\0"};
nctemp8324=&nctemp8325;
nctempchar1* nctemp8322= nctemp8324;
int nctemp8326=CodeEs(nctemp8320,nctemp8322);
struct tree* nctemp8328= p;
struct nctempchar1 *nctemp8332;
static struct nctempchar1 nctemp8333 = {{ 4}, (char*)")/(\0"};
nctemp8332=&nctemp8333;
nctempchar1* nctemp8330= nctemp8332;
int nctemp8334=CodeEs(nctemp8328,nctemp8330);
struct tree* nctemp8336= p;
nctempchar1* nctemp8338= rval;
int nctemp8341=CodeEs(nctemp8336,nctemp8338);
struct tree* nctemp8343= p;
struct nctempchar1 *nctemp8347;
static struct nctempchar1 nctemp8348 = {{ 3}, (char*)".r\0"};
nctemp8347=&nctemp8348;
nctempchar1* nctemp8345= nctemp8347;
int nctemp8349=CodeEs(nctemp8343,nctemp8345);
struct tree* nctemp8351= p;
struct nctempchar1 *nctemp8355;
static struct nctempchar1 nctemp8356 = {{ 2}, (char*)"*\0"};
nctemp8355=&nctemp8356;
nctempchar1* nctemp8353= nctemp8355;
int nctemp8357=CodeEs(nctemp8351,nctemp8353);
struct tree* nctemp8359= p;
nctempchar1* nctemp8361= rval;
int nctemp8364=CodeEs(nctemp8359,nctemp8361);
struct tree* nctemp8366= p;
struct nctempchar1 *nctemp8370;
static struct nctempchar1 nctemp8371 = {{ 3}, (char*)".r\0"};
nctemp8370=&nctemp8371;
nctempchar1* nctemp8368= nctemp8370;
int nctemp8372=CodeEs(nctemp8366,nctemp8368);
struct tree* nctemp8374= p;
struct nctempchar1 *nctemp8378;
static struct nctempchar1 nctemp8379 = {{ 2}, (char*)"+\0"};
nctemp8378=&nctemp8379;
nctempchar1* nctemp8376= nctemp8378;
int nctemp8380=CodeEs(nctemp8374,nctemp8376);
struct tree* nctemp8382= p;
nctempchar1* nctemp8384= rval;
int nctemp8387=CodeEs(nctemp8382,nctemp8384);
struct tree* nctemp8389= p;
struct nctempchar1 *nctemp8393;
static struct nctempchar1 nctemp8394 = {{ 3}, (char*)".i\0"};
nctemp8393=&nctemp8394;
nctempchar1* nctemp8391= nctemp8393;
int nctemp8395=CodeEs(nctemp8389,nctemp8391);
struct tree* nctemp8397= p;
struct nctempchar1 *nctemp8401;
static struct nctempchar1 nctemp8402 = {{ 2}, (char*)"*\0"};
nctemp8401=&nctemp8402;
nctempchar1* nctemp8399= nctemp8401;
int nctemp8403=CodeEs(nctemp8397,nctemp8399);
struct tree* nctemp8405= p;
nctempchar1* nctemp8407= rval;
int nctemp8410=CodeEs(nctemp8405,nctemp8407);
struct tree* nctemp8412= p;
struct nctempchar1 *nctemp8416;
static struct nctempchar1 nctemp8417 = {{ 3}, (char*)".i\0"};
nctemp8416=&nctemp8417;
nctempchar1* nctemp8414= nctemp8416;
int nctemp8418=CodeEs(nctemp8412,nctemp8414);
struct tree* nctemp8420= p;
struct nctempchar1 *nctemp8424;
static struct nctempchar1 nctemp8425 = {{ 5}, (char*)");\n\0"};
nctemp8424=&nctemp8425;
nctempchar1* nctemp8422= nctemp8424;
int nctemp8426=CodeEs(nctemp8420,nctemp8422);
struct tree* nctemp8428= p;
nctempchar1* nctemp8430= type;
int nctemp8433=CodeEs(nctemp8428,nctemp8430);
struct tree* nctemp8435= p;
struct nctempchar1 *nctemp8439;
static struct nctempchar1 nctemp8440 = {{ 2}, (char*)" \0"};
nctemp8439=&nctemp8440;
nctempchar1* nctemp8437= nctemp8439;
int nctemp8441=CodeEs(nctemp8435,nctemp8437);
struct tree* nctemp8443= p;
nctempchar1* nctemp8445= tempr;
int nctemp8448=CodeEs(nctemp8443,nctemp8445);
struct tree* nctemp8450= p;
struct nctempchar1 *nctemp8454;
static struct nctempchar1 nctemp8455 = {{ 3}, (char*)".i\0"};
nctemp8454=&nctemp8455;
nctempchar1* nctemp8452= nctemp8454;
int nctemp8456=CodeEs(nctemp8450,nctemp8452);
struct tree* nctemp8458= p;
struct nctempchar1 *nctemp8462;
static struct nctempchar1 nctemp8463 = {{ 4}, (char*)" = \0"};
nctemp8462=&nctemp8463;
nctempchar1* nctemp8460= nctemp8462;
int nctemp8464=CodeEs(nctemp8458,nctemp8460);
struct tree* nctemp8466= p;
struct nctempchar1 *nctemp8470;
static struct nctempchar1 nctemp8471 = {{ 2}, (char*)"(\0"};
nctemp8470=&nctemp8471;
nctempchar1* nctemp8468= nctemp8470;
int nctemp8472=CodeEs(nctemp8466,nctemp8468);
struct tree* nctemp8474= p;
nctempchar1* nctemp8476= lval;
int nctemp8479=CodeEs(nctemp8474,nctemp8476);
struct tree* nctemp8481= p;
struct nctempchar1 *nctemp8485;
static struct nctempchar1 nctemp8486 = {{ 3}, (char*)".i\0"};
nctemp8485=&nctemp8486;
nctempchar1* nctemp8483= nctemp8485;
int nctemp8487=CodeEs(nctemp8481,nctemp8483);
struct tree* nctemp8489= p;
struct nctempchar1 *nctemp8493;
static struct nctempchar1 nctemp8494 = {{ 2}, (char*)"*\0"};
nctemp8493=&nctemp8494;
nctempchar1* nctemp8491= nctemp8493;
int nctemp8495=CodeEs(nctemp8489,nctemp8491);
struct tree* nctemp8497= p;
nctempchar1* nctemp8499= rval;
int nctemp8502=CodeEs(nctemp8497,nctemp8499);
struct tree* nctemp8504= p;
struct nctempchar1 *nctemp8508;
static struct nctempchar1 nctemp8509 = {{ 3}, (char*)".r\0"};
nctemp8508=&nctemp8509;
nctempchar1* nctemp8506= nctemp8508;
int nctemp8510=CodeEs(nctemp8504,nctemp8506);
struct tree* nctemp8512= p;
struct nctempchar1 *nctemp8516;
static struct nctempchar1 nctemp8517 = {{ 2}, (char*)"-\0"};
nctemp8516=&nctemp8517;
nctempchar1* nctemp8514= nctemp8516;
int nctemp8518=CodeEs(nctemp8512,nctemp8514);
struct tree* nctemp8520= p;
nctempchar1* nctemp8522= lval;
int nctemp8525=CodeEs(nctemp8520,nctemp8522);
struct tree* nctemp8527= p;
struct nctempchar1 *nctemp8531;
static struct nctempchar1 nctemp8532 = {{ 3}, (char*)".r\0"};
nctemp8531=&nctemp8532;
nctempchar1* nctemp8529= nctemp8531;
int nctemp8533=CodeEs(nctemp8527,nctemp8529);
struct tree* nctemp8535= p;
struct nctempchar1 *nctemp8539;
static struct nctempchar1 nctemp8540 = {{ 2}, (char*)"*\0"};
nctemp8539=&nctemp8540;
nctempchar1* nctemp8537= nctemp8539;
int nctemp8541=CodeEs(nctemp8535,nctemp8537);
struct tree* nctemp8543= p;
nctempchar1* nctemp8545= rval;
int nctemp8548=CodeEs(nctemp8543,nctemp8545);
struct tree* nctemp8550= p;
struct nctempchar1 *nctemp8554;
static struct nctempchar1 nctemp8555 = {{ 3}, (char*)".i\0"};
nctemp8554=&nctemp8555;
nctempchar1* nctemp8552= nctemp8554;
int nctemp8556=CodeEs(nctemp8550,nctemp8552);
struct tree* nctemp8558= p;
struct nctempchar1 *nctemp8562;
static struct nctempchar1 nctemp8563 = {{ 4}, (char*)")/(\0"};
nctemp8562=&nctemp8563;
nctempchar1* nctemp8560= nctemp8562;
int nctemp8564=CodeEs(nctemp8558,nctemp8560);
struct tree* nctemp8566= p;
nctempchar1* nctemp8568= rval;
int nctemp8571=CodeEs(nctemp8566,nctemp8568);
struct tree* nctemp8573= p;
struct nctempchar1 *nctemp8577;
static struct nctempchar1 nctemp8578 = {{ 3}, (char*)".r\0"};
nctemp8577=&nctemp8578;
nctempchar1* nctemp8575= nctemp8577;
int nctemp8579=CodeEs(nctemp8573,nctemp8575);
struct tree* nctemp8581= p;
struct nctempchar1 *nctemp8585;
static struct nctempchar1 nctemp8586 = {{ 2}, (char*)"*\0"};
nctemp8585=&nctemp8586;
nctempchar1* nctemp8583= nctemp8585;
int nctemp8587=CodeEs(nctemp8581,nctemp8583);
struct tree* nctemp8589= p;
nctempchar1* nctemp8591= rval;
int nctemp8594=CodeEs(nctemp8589,nctemp8591);
struct tree* nctemp8596= p;
struct nctempchar1 *nctemp8600;
static struct nctempchar1 nctemp8601 = {{ 3}, (char*)".r\0"};
nctemp8600=&nctemp8601;
nctempchar1* nctemp8598= nctemp8600;
int nctemp8602=CodeEs(nctemp8596,nctemp8598);
struct tree* nctemp8604= p;
struct nctempchar1 *nctemp8608;
static struct nctempchar1 nctemp8609 = {{ 2}, (char*)"+\0"};
nctemp8608=&nctemp8609;
nctempchar1* nctemp8606= nctemp8608;
int nctemp8610=CodeEs(nctemp8604,nctemp8606);
struct tree* nctemp8612= p;
nctempchar1* nctemp8614= rval;
int nctemp8617=CodeEs(nctemp8612,nctemp8614);
struct tree* nctemp8619= p;
struct nctempchar1 *nctemp8623;
static struct nctempchar1 nctemp8624 = {{ 3}, (char*)".i\0"};
nctemp8623=&nctemp8624;
nctempchar1* nctemp8621= nctemp8623;
int nctemp8625=CodeEs(nctemp8619,nctemp8621);
struct tree* nctemp8627= p;
struct nctempchar1 *nctemp8631;
static struct nctempchar1 nctemp8632 = {{ 2}, (char*)"*\0"};
nctemp8631=&nctemp8632;
nctempchar1* nctemp8629= nctemp8631;
int nctemp8633=CodeEs(nctemp8627,nctemp8629);
struct tree* nctemp8635= p;
nctempchar1* nctemp8637= rval;
int nctemp8640=CodeEs(nctemp8635,nctemp8637);
struct tree* nctemp8642= p;
struct nctempchar1 *nctemp8646;
static struct nctempchar1 nctemp8647 = {{ 3}, (char*)".i\0"};
nctemp8646=&nctemp8647;
nctempchar1* nctemp8644= nctemp8646;
int nctemp8648=CodeEs(nctemp8642,nctemp8644);
struct tree* nctemp8650= p;
struct nctempchar1 *nctemp8654;
static struct nctempchar1 nctemp8655 = {{ 5}, (char*)");\n\0"};
nctemp8654=&nctemp8655;
nctempchar1* nctemp8652= nctemp8654;
int nctemp8656=CodeEs(nctemp8650,nctemp8652);
}
}
}
}
else{
struct tree* nctemp8658= p;
nctempchar1* nctemp8660= type;
int nctemp8663=CodeEs(nctemp8658,nctemp8660);
struct tree* nctemp8665= p;
struct nctempchar1 *nctemp8669;
static struct nctempchar1 nctemp8670 = {{ 2}, (char*)" \0"};
nctemp8669=&nctemp8670;
nctempchar1* nctemp8667= nctemp8669;
int nctemp8671=CodeEs(nctemp8665,nctemp8667);
struct tree* nctemp8673= p;
nctempchar1* nctemp8675= tempr;
int nctemp8678=CodeEs(nctemp8673,nctemp8675);
struct tree* nctemp8680= p;
struct nctempchar1 *nctemp8684;
static struct nctempchar1 nctemp8685 = {{ 4}, (char*)" = \0"};
nctemp8684=&nctemp8685;
nctempchar1* nctemp8682= nctemp8684;
int nctemp8686=CodeEs(nctemp8680,nctemp8682);
struct tree* nctemp8688= p;
nctempchar1* nctemp8690= lval;
int nctemp8693=CodeEs(nctemp8688,nctemp8690);
struct tree* nctemp8695= p;
struct nctempchar1 *nctemp8699;
static struct nctempchar1 nctemp8700 = {{ 2}, (char*)" \0"};
nctemp8699=&nctemp8700;
nctempchar1* nctemp8697= nctemp8699;
int nctemp8701=CodeEs(nctemp8695,nctemp8697);
struct tree* nctemp8703= p;
struct tree* nctemp8707= p;
nctempchar1* nctemp8709=PtreeGetdef(nctemp8707);
nctempchar1* nctemp8705= nctemp8709;
int nctemp8710=CodeEs(nctemp8703,nctemp8705);
struct tree* nctemp8712= p;
struct nctempchar1 *nctemp8716;
static struct nctempchar1 nctemp8717 = {{ 2}, (char*)" \0"};
nctemp8716=&nctemp8717;
nctempchar1* nctemp8714= nctemp8716;
int nctemp8718=CodeEs(nctemp8712,nctemp8714);
struct tree* nctemp8720= p;
nctempchar1* nctemp8722= rval;
int nctemp8725=CodeEs(nctemp8720,nctemp8722);
struct tree* nctemp8727= p;
struct nctempchar1 *nctemp8731;
static struct nctempchar1 nctemp8732 = {{ 4}, (char*)";\n\0"};
nctemp8731=&nctemp8732;
nctempchar1* nctemp8729= nctemp8731;
int nctemp8733=CodeEs(nctemp8727,nctemp8729);
}
return tempr;
}
nctempchar1 * CodeBinexpr (struct tree* p)
{
nctempchar1 *lval;
nctempchar1 *rval;
nctempchar1 *tempr;
nctempchar1 *tempi;
nctempchar1 *type;
struct tree* np;
struct tree* sp;
struct tree* nctemp8741= p;
nctempchar1* nctemp8743=PtreeGetname(nctemp8741);
nctempchar1* nctemp8739= nctemp8743;
struct nctempchar1 *nctemp8746;
static struct nctempchar1 nctemp8747 = {{ 8}, (char*)"binexpr\0"};
nctemp8746=&nctemp8747;
nctempchar1* nctemp8744= nctemp8746;
int nctemp8748=LibeStrcmp(nctemp8739,nctemp8744);
int nctemp8736 = (nctemp8748 ==1);
if(nctemp8736)
{
struct tree* nctemp8755= p;
nctempchar1* nctemp8757=PtreeGetype(nctemp8755);
type=nctemp8757;
nctempchar1* nctemp8763=CodeMktemp();
tempr=nctemp8763;
nctempchar1* nctemp8769=CodeMktemp();
tempi=nctemp8769;
struct tree* nctemp8774= p;
struct tree* nctemp8776=PtreeMvchild(nctemp8774);
np =nctemp8776;
struct tree* nctemp8782= np;
nctempchar1* nctemp8784=CodeUnexpr(nctemp8782);
lval=nctemp8784;
struct tree* nctemp8792= np;
struct tree* nctemp8794=PtreeMvsister(nctemp8792);
struct tree* nctemp8790= nctemp8794;
nctempchar1* nctemp8795=CodeUnexpr(nctemp8790);
rval=nctemp8795;
struct tree* nctemp8810= p;
nctempchar1* nctemp8812=PtreeGetdef(nctemp8810);
nctempchar1* nctemp8808= nctemp8812;
struct nctempchar1 *nctemp8815;
static struct nctempchar1 nctemp8816 = {{ 2}, (char*)"+\0"};
nctemp8815=&nctemp8816;
nctempchar1* nctemp8813= nctemp8815;
int nctemp8817=LibeStrcmp(nctemp8808,nctemp8813);
int nctemp8805 = (nctemp8817 ==1);
struct tree* nctemp8825= p;
nctempchar1* nctemp8827=PtreeGetdef(nctemp8825);
nctempchar1* nctemp8823= nctemp8827;
struct nctempchar1 *nctemp8830;
static struct nctempchar1 nctemp8831 = {{ 2}, (char*)"-\0"};
nctemp8830=&nctemp8831;
nctempchar1* nctemp8828= nctemp8830;
int nctemp8832=LibeStrcmp(nctemp8823,nctemp8828);
int nctemp8820 = (nctemp8832 ==1);
int nctemp8802 = (nctemp8805 || nctemp8820);
struct tree* nctemp8840= p;
nctempchar1* nctemp8842=PtreeGetdef(nctemp8840);
nctempchar1* nctemp8838= nctemp8842;
struct nctempchar1 *nctemp8845;
static struct nctempchar1 nctemp8846 = {{ 2}, (char*)"*\0"};
nctemp8845=&nctemp8846;
nctempchar1* nctemp8843= nctemp8845;
int nctemp8847=LibeStrcmp(nctemp8838,nctemp8843);
int nctemp8835 = (nctemp8847 ==1);
int nctemp8799 = (nctemp8802 || nctemp8835);
struct tree* nctemp8855= p;
nctempchar1* nctemp8857=PtreeGetdef(nctemp8855);
nctempchar1* nctemp8853= nctemp8857;
struct nctempchar1 *nctemp8860;
static struct nctempchar1 nctemp8861 = {{ 2}, (char*)"/\0"};
nctemp8860=&nctemp8861;
nctempchar1* nctemp8858= nctemp8860;
int nctemp8862=LibeStrcmp(nctemp8853,nctemp8858);
int nctemp8850 = (nctemp8862 ==1);
int nctemp8796 = (nctemp8799 || nctemp8850);
if(nctemp8796)
{
struct tree* nctemp8865= p;
nctempchar1* nctemp8867= lval;
nctempchar1* nctemp8870= rval;
nctempchar1* nctemp8873=CodeAddexpr(nctemp8865,nctemp8867,nctemp8870);
return nctemp8873;
}
else{
struct tree* nctemp8879= p;
nctempchar1* nctemp8881=PtreeGetdef(nctemp8879);
nctempchar1* nctemp8877= nctemp8881;
struct nctempchar1 *nctemp8884;
static struct nctempchar1 nctemp8885 = {{ 2}, (char*)"=\0"};
nctemp8884=&nctemp8885;
nctempchar1* nctemp8882= nctemp8884;
int nctemp8886=LibeStrcmp(nctemp8877,nctemp8882);
int nctemp8874 = (nctemp8886 ==1);
if(nctemp8874)
{
struct tree* nctemp8899= p;
nctempchar1* nctemp8901=PtreeGetype(nctemp8899);
nctempchar1* nctemp8897= nctemp8901;
struct nctempchar1 *nctemp8904;
static struct nctempchar1 nctemp8905 = {{ 8}, (char*)"complex\0"};
nctemp8904=&nctemp8905;
nctempchar1* nctemp8902= nctemp8904;
int nctemp8906=LibeStrcmp(nctemp8897,nctemp8902);
int nctemp8894 = (nctemp8906 ==1);
struct tree* nctemp8914= p;
nctempchar1* nctemp8916=PtreeGetref(nctemp8914);
nctempchar1* nctemp8912= nctemp8916;
struct nctempchar1 *nctemp8919;
static struct nctempchar1 nctemp8920 = {{ 5}, (char*)"aref\0"};
nctemp8919=&nctemp8920;
nctempchar1* nctemp8917= nctemp8919;
int nctemp8921=LibeStrcmp(nctemp8912,nctemp8917);
int nctemp8909 = (nctemp8921 ==0);
int nctemp8891 = (nctemp8894 && nctemp8909);
struct tree* nctemp8929= p;
nctempchar1* nctemp8931=PtreeGetref(nctemp8929);
nctempchar1* nctemp8927= nctemp8931;
struct nctempchar1 *nctemp8934;
static struct nctempchar1 nctemp8935 = {{ 5}, (char*)"sref\0"};
nctemp8934=&nctemp8935;
nctempchar1* nctemp8932= nctemp8934;
int nctemp8936=LibeStrcmp(nctemp8927,nctemp8932);
int nctemp8924 = (nctemp8936 ==0);
int nctemp8888 = (nctemp8891 && nctemp8924);
if(nctemp8888)
{
struct tree* nctemp8939= p;
nctempchar1* nctemp8941= lval;
int nctemp8944=CodeEs(nctemp8939,nctemp8941);
struct tree* nctemp8946= p;
struct nctempchar1 *nctemp8950;
static struct nctempchar1 nctemp8951 = {{ 4}, (char*)".r \0"};
nctemp8950=&nctemp8951;
nctempchar1* nctemp8948= nctemp8950;
int nctemp8952=CodeEs(nctemp8946,nctemp8948);
struct tree* nctemp8954= p;
struct nctempchar1 *nctemp8958;
static struct nctempchar1 nctemp8959 = {{ 2}, (char*)"=\0"};
nctemp8958=&nctemp8959;
nctempchar1* nctemp8956= nctemp8958;
int nctemp8960=CodeEs(nctemp8954,nctemp8956);
struct tree* nctemp8962= p;
nctempchar1* nctemp8964= rval;
int nctemp8967=CodeEs(nctemp8962,nctemp8964);
struct tree* nctemp8969= p;
struct nctempchar1 *nctemp8973;
static struct nctempchar1 nctemp8974 = {{ 3}, (char*)".r\0"};
nctemp8973=&nctemp8974;
nctempchar1* nctemp8971= nctemp8973;
int nctemp8975=CodeEs(nctemp8969,nctemp8971);
struct tree* nctemp8977= p;
struct nctempchar1 *nctemp8981;
static struct nctempchar1 nctemp8982 = {{ 4}, (char*)";\n\0"};
nctemp8981=&nctemp8982;
nctempchar1* nctemp8979= nctemp8981;
int nctemp8983=CodeEs(nctemp8977,nctemp8979);
struct tree* nctemp8985= p;
nctempchar1* nctemp8987= lval;
int nctemp8990=CodeEs(nctemp8985,nctemp8987);
struct tree* nctemp8992= p;
struct nctempchar1 *nctemp8996;
static struct nctempchar1 nctemp8997 = {{ 3}, (char*)".i\0"};
nctemp8996=&nctemp8997;
nctempchar1* nctemp8994= nctemp8996;
int nctemp8998=CodeEs(nctemp8992,nctemp8994);
struct tree* nctemp9000= p;
struct nctempchar1 *nctemp9004;
static struct nctempchar1 nctemp9005 = {{ 2}, (char*)"=\0"};
nctemp9004=&nctemp9005;
nctempchar1* nctemp9002= nctemp9004;
int nctemp9006=CodeEs(nctemp9000,nctemp9002);
struct tree* nctemp9008= p;
nctempchar1* nctemp9010= rval;
int nctemp9013=CodeEs(nctemp9008,nctemp9010);
struct tree* nctemp9015= p;
struct nctempchar1 *nctemp9019;
static struct nctempchar1 nctemp9020 = {{ 3}, (char*)".i\0"};
nctemp9019=&nctemp9020;
nctempchar1* nctemp9017= nctemp9019;
int nctemp9021=CodeEs(nctemp9015,nctemp9017);
struct tree* nctemp9023= p;
struct nctempchar1 *nctemp9027;
static struct nctempchar1 nctemp9028 = {{ 4}, (char*)";\n\0"};
nctemp9027=&nctemp9028;
nctempchar1* nctemp9025= nctemp9027;
int nctemp9029=CodeEs(nctemp9023,nctemp9025);
return lval;
}
else{
struct tree* nctemp9037= np;
nctempchar1* nctemp9039=PtreeGetref(nctemp9037);
nctempchar1* nctemp9035= nctemp9039;
struct nctempchar1 *nctemp9042;
static struct nctempchar1 nctemp9043 = {{ 5}, (char*)"aref\0"};
nctemp9042=&nctemp9043;
nctempchar1* nctemp9040= nctemp9042;
int nctemp9044=LibeStrcmp(nctemp9035,nctemp9040);
int nctemp9032 = (nctemp9044 ==1);
if(nctemp9032)
{
struct tree* nctemp9053= np;
struct tree* nctemp9055=PtreeMvsister(nctemp9053);
struct tree* nctemp9051= nctemp9055;
nctempchar1* nctemp9056=PtreeGetname(nctemp9051);
nctempchar1* nctemp9049= nctemp9056;
struct nctempchar1 *nctemp9059;
static struct nctempchar1 nctemp9060 = {{ 10}, (char*)"iconstant\0"};
nctemp9059=&nctemp9060;
nctempchar1* nctemp9057= nctemp9059;
int nctemp9061=LibeStrcmp(nctemp9049,nctemp9057);
struct tree* nctemp9067= np;
struct tree* nctemp9069=PtreeMvsister(nctemp9067);
struct tree* nctemp9065= nctemp9069;
nctempchar1* nctemp9070=PtreeGetdef(nctemp9065);
nctempchar1* nctemp9063= nctemp9070;
struct nctempchar1 *nctemp9073;
static struct nctempchar1 nctemp9074 = {{ 2}, (char*)"0\0"};
nctemp9073=&nctemp9074;
nctempchar1* nctemp9071= nctemp9073;
int nctemp9075=LibeStrcmp(nctemp9063,nctemp9071);
int nctemp9046 = (nctemp9061 && nctemp9075);
if(nctemp9046)
{
struct tree* nctemp9077= p;
nctempchar1* nctemp9079= lval;
int nctemp9082=CodeEs(nctemp9077,nctemp9079);
struct tree* nctemp9084= p;
struct nctempchar1 *nctemp9088;
static struct nctempchar1 nctemp9089 = {{ 3}, (char*)"=(\0"};
nctemp9088=&nctemp9089;
nctempchar1* nctemp9086= nctemp9088;
int nctemp9090=CodeEs(nctemp9084,nctemp9086);
struct tree* nctemp9092= p;
nctempchar1* nctemp9094= rval;
int nctemp9097=CodeEs(nctemp9092,nctemp9094);
struct tree* nctemp9099= p;
struct nctempchar1 *nctemp9103;
static struct nctempchar1 nctemp9104 = {{ 5}, (char*)");\n\0"};
nctemp9103=&nctemp9104;
nctempchar1* nctemp9101= nctemp9103;
int nctemp9105=CodeEs(nctemp9099,nctemp9101);
return lval;
}
else{
struct tree* nctemp9109= p;
nctempchar1* nctemp9111= lval;
int nctemp9114=CodeEs(nctemp9109,nctemp9111);
struct tree* nctemp9116= p;
struct nctempchar1 *nctemp9120;
static struct nctempchar1 nctemp9121 = {{ 2}, (char*)"=\0"};
nctemp9120=&nctemp9121;
nctempchar1* nctemp9118= nctemp9120;
int nctemp9122=CodeEs(nctemp9116,nctemp9118);
struct tree* nctemp9124= p;
nctempchar1* nctemp9126= rval;
int nctemp9129=CodeEs(nctemp9124,nctemp9126);
struct tree* nctemp9131= p;
struct nctempchar1 *nctemp9135;
static struct nctempchar1 nctemp9136 = {{ 4}, (char*)";\n\0"};
nctemp9135=&nctemp9136;
nctempchar1* nctemp9133= nctemp9135;
int nctemp9137=CodeEs(nctemp9131,nctemp9133);
return lval;
}
}
else{
struct tree* nctemp9141= p;
nctempchar1* nctemp9143= lval;
int nctemp9146=CodeEs(nctemp9141,nctemp9143);
struct tree* nctemp9148= p;
struct nctempchar1 *nctemp9152;
static struct nctempchar1 nctemp9153 = {{ 2}, (char*)" \0"};
nctemp9152=&nctemp9153;
nctempchar1* nctemp9150= nctemp9152;
int nctemp9154=CodeEs(nctemp9148,nctemp9150);
struct tree* nctemp9156= p;
struct nctempchar1 *nctemp9160;
static struct nctempchar1 nctemp9161 = {{ 2}, (char*)"=\0"};
nctemp9160=&nctemp9161;
nctempchar1* nctemp9158= nctemp9160;
int nctemp9162=CodeEs(nctemp9156,nctemp9158);
struct tree* nctemp9164= p;
nctempchar1* nctemp9166= rval;
int nctemp9169=CodeEs(nctemp9164,nctemp9166);
struct tree* nctemp9171= p;
struct nctempchar1 *nctemp9175;
static struct nctempchar1 nctemp9176 = {{ 4}, (char*)";\n\0"};
nctemp9175=&nctemp9176;
nctempchar1* nctemp9173= nctemp9175;
int nctemp9177=CodeEs(nctemp9171,nctemp9173);
return lval;
}
}
}
else{
struct tree* nctemp9188= p;
nctempchar1* nctemp9190=PtreeGetdef(nctemp9188);
nctempchar1* nctemp9186= nctemp9190;
struct nctempchar1 *nctemp9193;
static struct nctempchar1 nctemp9194 = {{ 3}, (char*)"==\0"};
nctemp9193=&nctemp9194;
nctempchar1* nctemp9191= nctemp9193;
int nctemp9195=LibeStrcmp(nctemp9186,nctemp9191);
int nctemp9183 = (nctemp9195 ==1);
struct tree* nctemp9203= p;
nctempchar1* nctemp9205=PtreeGetdef(nctemp9203);
nctempchar1* nctemp9201= nctemp9205;
struct nctempchar1 *nctemp9208;
static struct nctempchar1 nctemp9209 = {{ 3}, (char*)"!=\0"};
nctemp9208=&nctemp9209;
nctempchar1* nctemp9206= nctemp9208;
int nctemp9210=LibeStrcmp(nctemp9201,nctemp9206);
int nctemp9198 = (nctemp9210 ==1);
int nctemp9180 = (nctemp9183 || nctemp9198);
if(nctemp9180)
{
struct tree* nctemp9217= np;
nctempchar1* nctemp9219=PtreeGetref(nctemp9217);
nctempchar1* nctemp9215= nctemp9219;
struct nctempchar1 *nctemp9222;
static struct nctempchar1 nctemp9223 = {{ 5}, (char*)"aref\0"};
nctemp9222=&nctemp9223;
nctempchar1* nctemp9220= nctemp9222;
int nctemp9224=LibeStrcmp(nctemp9215,nctemp9220);
int nctemp9212 = (nctemp9224 ==1);
if(nctemp9212)
{
sp = np;
struct tree* nctemp9233= np;
struct tree* nctemp9235=PtreeMvsister(nctemp9233);
struct tree* nctemp9231= nctemp9235;
nctempchar1* nctemp9236=PtreeGetname(nctemp9231);
nctempchar1* nctemp9229= nctemp9236;
struct nctempchar1 *nctemp9239;
static struct nctempchar1 nctemp9240 = {{ 10}, (char*)"iconstant\0"};
nctemp9239=&nctemp9240;
nctempchar1* nctemp9237= nctemp9239;
int nctemp9241=LibeStrcmp(nctemp9229,nctemp9237);
struct tree* nctemp9247= np;
struct tree* nctemp9249=PtreeMvsister(nctemp9247);
struct tree* nctemp9245= nctemp9249;
nctempchar1* nctemp9250=PtreeGetdef(nctemp9245);
nctempchar1* nctemp9243= nctemp9250;
struct nctempchar1 *nctemp9253;
static struct nctempchar1 nctemp9254 = {{ 2}, (char*)"0\0"};
nctemp9253=&nctemp9254;
nctempchar1* nctemp9251= nctemp9253;
int nctemp9255=LibeStrcmp(nctemp9243,nctemp9251);
int nctemp9226 = (nctemp9241 && nctemp9255);
if(nctemp9226)
{
struct tree* nctemp9257= p;
struct nctempchar1 *nctemp9261;
static struct nctempchar1 nctemp9262 = {{ 7}, (char*)"nctemp\0"};
nctemp9261=&nctemp9262;
nctempchar1* nctemp9259= nctemp9261;
int nctemp9263=CodeEs(nctemp9257,nctemp9259);
struct tree* nctemp9265= p;
struct tree* nctemp9269= sp;
nctempchar1* nctemp9271=PtreeGetype(nctemp9269);
nctempchar1* nctemp9267= nctemp9271;
int nctemp9272=CodeEs(nctemp9265,nctemp9267);
struct tree* nctemp9276= sp;
int nctemp9278=PtreeGetrank(nctemp9276);
int nctemp9274= nctemp9278;
int nctemp9279=CodeEd(nctemp9274);
struct tree* nctemp9281= p;
struct nctempchar1 *nctemp9285;
static struct nctempchar1 nctemp9286 = {{ 3}, (char*)" *\0"};
nctemp9285=&nctemp9286;
nctempchar1* nctemp9283= nctemp9285;
int nctemp9287=CodeEs(nctemp9281,nctemp9283);
struct tree* nctemp9289= p;
nctempchar1* nctemp9291= tempi;
int nctemp9294=CodeEs(nctemp9289,nctemp9291);
struct tree* nctemp9296= p;
struct nctempchar1 *nctemp9300;
static struct nctempchar1 nctemp9301 = {{ 3}, (char*)" =\0"};
nctemp9300=&nctemp9301;
nctempchar1* nctemp9298= nctemp9300;
int nctemp9302=CodeEs(nctemp9296,nctemp9298);
struct tree* nctemp9304= p;
nctempchar1* nctemp9306= lval;
int nctemp9309=CodeEs(nctemp9304,nctemp9306);
struct tree* nctemp9311= p;
struct nctempchar1 *nctemp9315;
static struct nctempchar1 nctemp9316 = {{ 4}, (char*)";\n\0"};
nctemp9315=&nctemp9316;
nctempchar1* nctemp9313= nctemp9315;
int nctemp9317=CodeEs(nctemp9311,nctemp9313);
struct tree* nctemp9319= p;
nctempchar1* nctemp9321= type;
int nctemp9324=CodeEs(nctemp9319,nctemp9321);
struct tree* nctemp9326= p;
struct nctempchar1 *nctemp9330;
static struct nctempchar1 nctemp9331 = {{ 2}, (char*)" \0"};
nctemp9330=&nctemp9331;
nctempchar1* nctemp9328= nctemp9330;
int nctemp9332=CodeEs(nctemp9326,nctemp9328);
struct tree* nctemp9334= p;
nctempchar1* nctemp9336= tempr;
int nctemp9339=CodeEs(nctemp9334,nctemp9336);
struct tree* nctemp9341= p;
struct nctempchar1 *nctemp9345;
static struct nctempchar1 nctemp9346 = {{ 4}, (char*)" =(\0"};
nctemp9345=&nctemp9346;
nctempchar1* nctemp9343= nctemp9345;
int nctemp9347=CodeEs(nctemp9341,nctemp9343);
struct tree* nctemp9349= p;
nctempchar1* nctemp9351= tempi;
int nctemp9354=CodeEs(nctemp9349,nctemp9351);
struct tree* nctemp9356= p;
struct tree* nctemp9360= p;
nctempchar1* nctemp9362=PtreeGetdef(nctemp9360);
nctempchar1* nctemp9358= nctemp9362;
int nctemp9363=CodeEs(nctemp9356,nctemp9358);
struct tree* nctemp9365= p;
nctempchar1* nctemp9367= rval;
int nctemp9370=CodeEs(nctemp9365,nctemp9367);
struct tree* nctemp9372= p;
struct nctempchar1 *nctemp9376;
static struct nctempchar1 nctemp9377 = {{ 5}, (char*)");\n\0"};
nctemp9376=&nctemp9377;
nctempchar1* nctemp9374= nctemp9376;
int nctemp9378=CodeEs(nctemp9372,nctemp9374);
return tempr;
}
else{
struct tree* nctemp9382= p;
nctempchar1* nctemp9384= type;
int nctemp9387=CodeEs(nctemp9382,nctemp9384);
struct tree* nctemp9389= p;
struct nctempchar1 *nctemp9393;
static struct nctempchar1 nctemp9394 = {{ 2}, (char*)" \0"};
nctemp9393=&nctemp9394;
nctempchar1* nctemp9391= nctemp9393;
int nctemp9395=CodeEs(nctemp9389,nctemp9391);
struct tree* nctemp9397= p;
nctempchar1* nctemp9399= tempr;
int nctemp9402=CodeEs(nctemp9397,nctemp9399);
struct tree* nctemp9404= p;
struct nctempchar1 *nctemp9408;
static struct nctempchar1 nctemp9409 = {{ 5}, (char*)" = (\0"};
nctemp9408=&nctemp9409;
nctempchar1* nctemp9406= nctemp9408;
int nctemp9410=CodeEs(nctemp9404,nctemp9406);
struct tree* nctemp9412= p;
nctempchar1* nctemp9414= lval;
int nctemp9417=CodeEs(nctemp9412,nctemp9414);
struct tree* nctemp9419= p;
struct tree* nctemp9423= p;
nctempchar1* nctemp9425=PtreeGetdef(nctemp9423);
nctempchar1* nctemp9421= nctemp9425;
int nctemp9426=CodeEs(nctemp9419,nctemp9421);
struct tree* nctemp9428= p;
nctempchar1* nctemp9430= rval;
int nctemp9433=CodeEs(nctemp9428,nctemp9430);
struct tree* nctemp9435= p;
struct nctempchar1 *nctemp9439;
static struct nctempchar1 nctemp9440 = {{ 5}, (char*)");\n\0"};
nctemp9439=&nctemp9440;
nctempchar1* nctemp9437= nctemp9439;
int nctemp9441=CodeEs(nctemp9435,nctemp9437);
return lval;
}
}
else{
struct tree* nctemp9445= p;
nctempchar1* nctemp9447= type;
int nctemp9450=CodeEs(nctemp9445,nctemp9447);
struct tree* nctemp9452= p;
struct nctempchar1 *nctemp9456;
static struct nctempchar1 nctemp9457 = {{ 2}, (char*)" \0"};
nctemp9456=&nctemp9457;
nctempchar1* nctemp9454= nctemp9456;
int nctemp9458=CodeEs(nctemp9452,nctemp9454);
struct tree* nctemp9460= p;
nctempchar1* nctemp9462= tempr;
int nctemp9465=CodeEs(nctemp9460,nctemp9462);
struct tree* nctemp9467= p;
struct nctempchar1 *nctemp9471;
static struct nctempchar1 nctemp9472 = {{ 5}, (char*)" = (\0"};
nctemp9471=&nctemp9472;
nctempchar1* nctemp9469= nctemp9471;
int nctemp9473=CodeEs(nctemp9467,nctemp9469);
struct tree* nctemp9475= p;
nctempchar1* nctemp9477= lval;
int nctemp9480=CodeEs(nctemp9475,nctemp9477);
struct tree* nctemp9482= p;
struct nctempchar1 *nctemp9486;
static struct nctempchar1 nctemp9487 = {{ 2}, (char*)" \0"};
nctemp9486=&nctemp9487;
nctempchar1* nctemp9484= nctemp9486;
int nctemp9488=CodeEs(nctemp9482,nctemp9484);
struct tree* nctemp9490= p;
struct tree* nctemp9494= p;
nctempchar1* nctemp9496=PtreeGetdef(nctemp9494);
nctempchar1* nctemp9492= nctemp9496;
int nctemp9497=CodeEs(nctemp9490,nctemp9492);
struct tree* nctemp9499= p;
nctempchar1* nctemp9501= rval;
int nctemp9504=CodeEs(nctemp9499,nctemp9501);
struct tree* nctemp9506= p;
struct nctempchar1 *nctemp9510;
static struct nctempchar1 nctemp9511 = {{ 5}, (char*)");\n\0"};
nctemp9510=&nctemp9511;
nctempchar1* nctemp9508= nctemp9510;
int nctemp9512=CodeEs(nctemp9506,nctemp9508);
return tempr;
}
}
else{
struct tree* nctemp9516= p;
nctempchar1* nctemp9518= type;
int nctemp9521=CodeEs(nctemp9516,nctemp9518);
struct tree* nctemp9523= p;
struct nctempchar1 *nctemp9527;
static struct nctempchar1 nctemp9528 = {{ 2}, (char*)" \0"};
nctemp9527=&nctemp9528;
nctempchar1* nctemp9525= nctemp9527;
int nctemp9529=CodeEs(nctemp9523,nctemp9525);
struct tree* nctemp9531= p;
nctempchar1* nctemp9533= tempr;
int nctemp9536=CodeEs(nctemp9531,nctemp9533);
struct tree* nctemp9538= p;
struct nctempchar1 *nctemp9542;
static struct nctempchar1 nctemp9543 = {{ 5}, (char*)" = (\0"};
nctemp9542=&nctemp9543;
nctempchar1* nctemp9540= nctemp9542;
int nctemp9544=CodeEs(nctemp9538,nctemp9540);
struct tree* nctemp9546= p;
nctempchar1* nctemp9548= lval;
int nctemp9551=CodeEs(nctemp9546,nctemp9548);
struct tree* nctemp9553= p;
struct nctempchar1 *nctemp9557;
static struct nctempchar1 nctemp9558 = {{ 2}, (char*)" \0"};
nctemp9557=&nctemp9558;
nctempchar1* nctemp9555= nctemp9557;
int nctemp9559=CodeEs(nctemp9553,nctemp9555);
struct tree* nctemp9561= p;
struct tree* nctemp9565= p;
nctempchar1* nctemp9567=PtreeGetdef(nctemp9565);
nctempchar1* nctemp9563= nctemp9567;
int nctemp9568=CodeEs(nctemp9561,nctemp9563);
struct tree* nctemp9570= p;
struct nctempchar1 *nctemp9574;
static struct nctempchar1 nctemp9575 = {{ 2}, (char*)" \0"};
nctemp9574=&nctemp9575;
nctempchar1* nctemp9572= nctemp9574;
int nctemp9576=CodeEs(nctemp9570,nctemp9572);
struct tree* nctemp9578= p;
nctempchar1* nctemp9580= rval;
int nctemp9583=CodeEs(nctemp9578,nctemp9580);
struct tree* nctemp9585= p;
struct nctempchar1 *nctemp9589;
static struct nctempchar1 nctemp9590 = {{ 5}, (char*)");\n\0"};
nctemp9589=&nctemp9590;
nctempchar1* nctemp9587= nctemp9589;
int nctemp9591=CodeEs(nctemp9585,nctemp9587);
return tempr;
}
}
}
}
else{
struct tree* nctemp9595= p;
nctempchar1* nctemp9597=CodeUnexpr(nctemp9595);
return nctemp9597;
}
}
int CodeDimprod (struct tree* p,nctempchar1 *name,int n)
{
int j;
for(j = 0;j < (n - 1);j = (j + 1)){
struct tree* nctemp9599= p;
nctempchar1* nctemp9601= name;
int nctemp9604=CodeEs(nctemp9599,nctemp9601);
struct tree* nctemp9606= p;
struct nctempchar1 *nctemp9610;
static struct nctempchar1 nctemp9611 = {{ 5}, (char*)"->d[\0"};
nctemp9610=&nctemp9611;
nctempchar1* nctemp9608= nctemp9610;
int nctemp9612=CodeEs(nctemp9606,nctemp9608);
int nctemp9614= j;
int nctemp9616=CodeEd(nctemp9614);
struct tree* nctemp9618= p;
struct nctempchar1 *nctemp9622;
static struct nctempchar1 nctemp9623 = {{ 2}, (char*)"]\0"};
nctemp9622=&nctemp9623;
nctempchar1* nctemp9620= nctemp9622;
int nctemp9624=CodeEs(nctemp9618,nctemp9620);
struct tree* nctemp9626= p;
struct nctempchar1 *nctemp9630;
static struct nctempchar1 nctemp9631 = {{ 2}, (char*)"*\0"};
nctemp9630=&nctemp9631;
nctempchar1* nctemp9628= nctemp9630;
int nctemp9632=CodeEs(nctemp9626,nctemp9628);
}
return 1;
}
int CodeSarray (struct tree* p,nctempchar1 *qname)
{
struct symbol* tp;
struct tree* sp;
struct tree* q;
nctempchar1 *name;
int rank;
int i;
struct tree* nctemp9639= p;
nctempchar1* nctemp9641=PtreeGetdef(nctemp9639);
name=nctemp9641;
nctempchar1* nctemp9646= name;
struct symbol* nctemp9649=SymLook(nctemp9646);
tp =nctemp9649;
int nctemp9650 = (tp ==0);
if(nctemp9650)
{
nctempchar1* nctemp9655= name;
int nctemp9658=CodeError(nctemp9655);
}
struct symbol* nctemp9663= tp;
int nctemp9665=SymGetrank(nctemp9663);
rank =nctemp9665;
struct tree* nctemp9670= p;
struct tree* nctemp9672=PtreeMvchild(nctemp9670);
sp =nctemp9672;
int nctemp9673 = (sp ==0);
if(nctemp9673)
{
struct tree* nctemp9678= p;
struct tree* nctemp9682= p;
nctempchar1* nctemp9684=PtreeGetdef(nctemp9682);
nctempchar1* nctemp9680= nctemp9684;
int nctemp9685=CodeEs(nctemp9678,nctemp9680);
return 1;
}
else{
struct tree* nctemp9692= sp;
nctempchar1* nctemp9694=PtreeGetname(nctemp9692);
nctempchar1* nctemp9690= nctemp9694;
struct nctempchar1 *nctemp9697;
static struct nctempchar1 nctemp9698 = {{ 9}, (char*)"exprlist\0"};
nctemp9697=&nctemp9698;
nctempchar1* nctemp9695= nctemp9697;
int nctemp9699=LibeStrcmp(nctemp9690,nctemp9695);
int nctemp9687 = (nctemp9699 ==0);
if(nctemp9687)
{
struct tree* nctemp9702= p;
struct tree* nctemp9706= p;
nctempchar1* nctemp9708=PtreeGetdef(nctemp9706);
nctempchar1* nctemp9704= nctemp9708;
int nctemp9709=CodeEs(nctemp9702,nctemp9704);
return 1;
}
}
p = sp;
struct tree* nctemp9715= p;
struct tree* nctemp9717=PtreeMvchild(nctemp9715);
p =nctemp9717;
struct tree* nctemp9719= p;
nctempchar1* nctemp9721= name;
int nctemp9724=CodeEs(nctemp9719,nctemp9721);
struct tree* nctemp9726= p;
struct nctempchar1 *nctemp9730;
static struct nctempchar1 nctemp9731 = {{ 4}, (char*)"->a\0"};
nctemp9730=&nctemp9731;
nctempchar1* nctemp9728= nctemp9730;
int nctemp9732=CodeEs(nctemp9726,nctemp9728);
struct tree* nctemp9734= p;
struct nctempchar1 *nctemp9738;
static struct nctempchar1 nctemp9739 = {{ 2}, (char*)"[\0"};
nctemp9738=&nctemp9739;
nctempchar1* nctemp9736= nctemp9738;
int nctemp9740=CodeEs(nctemp9734,nctemp9736);
q = p;
nctempchar1 *nctemp9742 =qname;
int nctemp9741 =(nctemp9742!=0);
if(nctemp9741)
{
nctempchar1* nctemp9751= qname;
nctempchar1* nctemp9754= name;
nctempchar1* nctemp9757=LibeStradd(nctemp9751,nctemp9754);
qname=nctemp9757;
}
else{
nctempchar1* nctemp9763= name;
nctempchar1* nctemp9766=LibeStrsave(nctemp9763);
qname=nctemp9766;
}
for(i = 0;i < rank;i = (i + 1)){
int nctemp9767 = (i ==0);
if(nctemp9767)
{
struct tree* nctemp9772= q;
int nctemp9774=CodeSexpr(nctemp9772);
}
else{
struct tree* nctemp9779= q;
struct tree* nctemp9781=PtreeMvsister(nctemp9779);
q =nctemp9781;
struct tree* nctemp9783= p;
struct nctempchar1 *nctemp9787;
static struct nctempchar1 nctemp9788 = {{ 2}, (char*)"+\0"};
nctemp9787=&nctemp9788;
nctempchar1* nctemp9785= nctemp9787;
int nctemp9789=CodeEs(nctemp9783,nctemp9785);
struct tree* nctemp9791= p;
nctempchar1* nctemp9793= qname;
int nctemp9801 = i + 1;
int nctemp9796= nctemp9801;
int nctemp9802=CodeDimprod(nctemp9791,nctemp9793,nctemp9796);
struct tree* nctemp9804= q;
int nctemp9806=CodeSexpr(nctemp9804);
}
}
struct tree* nctemp9808= p;
struct nctempchar1 *nctemp9812;
static struct nctempchar1 nctemp9813 = {{ 2}, (char*)"]\0"};
nctemp9812=&nctemp9813;
nctempchar1* nctemp9810= nctemp9812;
int nctemp9814=CodeEs(nctemp9808,nctemp9810);
RunFree(qname->a);
RunFree(qname);
return 1;
}
int CodeIdstruct (struct tree* p)
{
struct symbol* tp;
struct symbol* up;
struct symbol* uup;
struct tree* np;
struct tree* sp;
nctempchar1 *qname;
qname  = 0;
struct tree* nctemp9824= p;
nctempchar1* nctemp9826=PtreeGetarray(nctemp9824);
nctempchar1* nctemp9822= nctemp9826;
struct nctempchar1 *nctemp9829;
static struct nctempchar1 nctemp9830 = {{ 6}, (char*)"array\0"};
nctemp9829=&nctemp9830;
nctempchar1* nctemp9827= nctemp9829;
int nctemp9831=LibeStrcmp(nctemp9822,nctemp9827);
int nctemp9819 = (nctemp9831 ==1);
if(nctemp9819)
{
struct tree* nctemp9834= p;
nctempchar1* nctemp9836= qname;
int nctemp9839=CodeSarray(nctemp9834,nctemp9836);
struct tree* nctemp9844= p;
struct tree* nctemp9846=PtreeMvchild(nctemp9844);
np =nctemp9846;
int nctemp9847 = (np ==0);
if(nctemp9847)
{
return 1;
}
struct tree* nctemp9856= np;
struct tree* nctemp9858=PtreeMvsister(nctemp9856);
sp =nctemp9858;
int nctemp9859 = (sp ==0);
if(nctemp9859)
{
return 1;
}
struct tree* nctemp9865= p;
struct nctempchar1 *nctemp9869;
static struct nctempchar1 nctemp9870 = {{ 2}, (char*)".\0"};
nctemp9869=&nctemp9870;
nctempchar1* nctemp9867= nctemp9869;
int nctemp9871=CodeEs(nctemp9865,nctemp9867);
struct tree* nctemp9879= p;
nctempchar1* nctemp9881=PtreeGetdef(nctemp9879);
nctempchar1* nctemp9877= nctemp9881;
struct nctempchar1 *nctemp9884;
static struct nctempchar1 nctemp9885 = {{ 2}, (char*)".\0"};
nctemp9884=&nctemp9885;
nctempchar1* nctemp9882= nctemp9884;
nctempchar1* nctemp9886=LibeStradd(nctemp9877,nctemp9882);
qname=nctemp9886;
}
else{
struct tree* nctemp9888= p;
struct tree* nctemp9892= p;
nctempchar1* nctemp9894=PtreeGetdef(nctemp9892);
nctempchar1* nctemp9890= nctemp9894;
int nctemp9895=CodeEs(nctemp9888,nctemp9890);
struct tree* nctemp9903= p;
nctempchar1* nctemp9905=PtreeGetdef(nctemp9903);
nctempchar1* nctemp9901= nctemp9905;
struct nctempchar1 *nctemp9908;
static struct nctempchar1 nctemp9909 = {{ 3}, (char*)"->\0"};
nctemp9908=&nctemp9909;
nctempchar1* nctemp9906= nctemp9908;
nctempchar1* nctemp9910=LibeStradd(nctemp9901,nctemp9906);
qname=nctemp9910;
struct tree* nctemp9915= p;
struct tree* nctemp9917=PtreeMvchild(nctemp9915);
sp =nctemp9917;
int nctemp9918 = (sp ==0);
if(nctemp9918)
{
return 1;
}
struct tree* nctemp9924= p;
struct nctempchar1 *nctemp9928;
static struct nctempchar1 nctemp9929 = {{ 3}, (char*)"->\0"};
nctemp9928=&nctemp9929;
nctempchar1* nctemp9926= nctemp9928;
int nctemp9930=CodeEs(nctemp9924,nctemp9926);
}
struct tree* nctemp9936= sp;
nctempchar1* nctemp9938=PtreeGetarray(nctemp9936);
nctempchar1* nctemp9934= nctemp9938;
struct nctempchar1 *nctemp9941;
static struct nctempchar1 nctemp9942 = {{ 6}, (char*)"array\0"};
nctemp9941=&nctemp9942;
nctempchar1* nctemp9939= nctemp9941;
int nctemp9943=LibeStrcmp(nctemp9934,nctemp9939);
int nctemp9931 = (nctemp9943 ==1);
if(nctemp9931)
{
struct symbol* nctemp9949=SymGetltp();
tp =nctemp9949;
struct symbol* nctemp9954=SymGetetp();
up =nctemp9954;
struct tree* nctemp9961= p;
nctempchar1* nctemp9963=PtreeGetdef(nctemp9961);
nctempchar1* nctemp9959= nctemp9963;
struct symbol* nctemp9964=SymLook(nctemp9959);
uup =nctemp9964;
struct symbol* nctemp9971= uup;
nctempchar1* nctemp9973=SymGetype(nctemp9971);
nctempchar1* nctemp9969= nctemp9973;
struct symbol* nctemp9974=SymLook(nctemp9969);
uup =nctemp9974;
struct symbol* nctemp9978= uup;
struct symbol* nctemp9980=SymGetable(nctemp9978);
struct symbol* nctemp9976= nctemp9980;
int nctemp9981=SymSetltp(nctemp9976);
struct tree* nctemp9983= sp;
nctempchar1* nctemp9985= qname;
int nctemp9988=CodeSarray(nctemp9983,nctemp9985);
RunFree(qname->a);
RunFree(qname);
struct symbol* nctemp9993= tp;
int nctemp9995=SymSetltp(nctemp9993);
struct symbol* nctemp9997= up;
int nctemp9999=SymSetetp(nctemp9997);
}
else{
struct tree* nctemp10001= p;
struct tree* nctemp10005= sp;
nctempchar1* nctemp10007=PtreeGetdef(nctemp10005);
nctempchar1* nctemp10003= nctemp10007;
int nctemp10008=CodeEs(nctemp10001,nctemp10003);
}
return 1;
}
int CodeSident (struct tree* p)
{
nctempchar1 *qname;
qname  = 0;
struct tree* nctemp10015= p;
nctempchar1* nctemp10017=PtreeGetstruct(nctemp10015);
nctempchar1* nctemp10013= nctemp10017;
struct nctempchar1 *nctemp10020;
static struct nctempchar1 nctemp10021 = {{ 7}, (char*)"struct\0"};
nctemp10020=&nctemp10021;
nctempchar1* nctemp10018= nctemp10020;
int nctemp10022=LibeStrcmp(nctemp10013,nctemp10018);
int nctemp10010 = (nctemp10022 ==1);
if(nctemp10010)
{
struct tree* nctemp10025= p;
int nctemp10027=CodeIdstruct(nctemp10025);
}
else{
struct tree* nctemp10033= p;
nctempchar1* nctemp10035=PtreeGetarray(nctemp10033);
nctempchar1* nctemp10031= nctemp10035;
struct nctempchar1 *nctemp10038;
static struct nctempchar1 nctemp10039 = {{ 6}, (char*)"array\0"};
nctemp10038=&nctemp10039;
nctempchar1* nctemp10036= nctemp10038;
int nctemp10040=LibeStrcmp(nctemp10031,nctemp10036);
int nctemp10028 = (nctemp10040 ==1);
if(nctemp10028)
{
struct tree* nctemp10043= p;
nctempchar1* nctemp10045= qname;
int nctemp10048=CodeSarray(nctemp10043,nctemp10045);
return 1;
}
else{
struct tree* nctemp10051= p;
struct tree* nctemp10055= p;
nctempchar1* nctemp10057=PtreeGetdef(nctemp10055);
nctempchar1* nctemp10053= nctemp10057;
int nctemp10058=CodeEs(nctemp10051,nctemp10053);
return 1;
}
}
return 1;
}
int CodeSfcall (struct tree* p)
{
struct symbol* tp;
struct tree* sp;
struct tree* nctemp10067= p;
nctempchar1* nctemp10069=PtreeGetdef(nctemp10067);
nctempchar1* nctemp10065= nctemp10069;
struct symbol* nctemp10072=SymGetetp();
struct symbol* nctemp10070= nctemp10072;
struct symbol* nctemp10073=SymLookup(nctemp10065,nctemp10070);
tp =nctemp10073;
struct tree* nctemp10078= p;
struct tree* nctemp10080=PtreeMvchild(nctemp10078);
sp =nctemp10080;
int nctemp10081 = (sp !=0);
if(nctemp10081)
{
struct tree* nctemp10090= sp;
nctempchar1* nctemp10092=PtreeGetname(nctemp10090);
nctempchar1* nctemp10088= nctemp10092;
struct nctempchar1 *nctemp10095;
static struct nctempchar1 nctemp10096 = {{ 9}, (char*)"exprlist\0"};
nctemp10095=&nctemp10096;
nctempchar1* nctemp10093= nctemp10095;
int nctemp10097=LibeStrcmp(nctemp10088,nctemp10093);
int nctemp10085 = (nctemp10097 ==1);
if(nctemp10085)
{
struct tree* nctemp10103= sp;
struct tree* nctemp10105=PtreeMvchild(nctemp10103);
sp =nctemp10105;
}
}
struct tree* nctemp10107= p;
struct symbol* nctemp10111= tp;
nctempchar1* nctemp10113=SymGetname(nctemp10111);
nctempchar1* nctemp10109= nctemp10113;
int nctemp10114=CodeEs(nctemp10107,nctemp10109);
struct tree* nctemp10116= p;
struct nctempchar1 *nctemp10120;
static struct nctempchar1 nctemp10121 = {{ 2}, (char*)"(\0"};
nctemp10120=&nctemp10121;
nctempchar1* nctemp10118= nctemp10120;
int nctemp10122=CodeEs(nctemp10116,nctemp10118);
int nctemp10123 = (sp !=0);
int nctemp10127=nctemp10123;
while(nctemp10127)
{{
struct tree* nctemp10129= sp;
int nctemp10131=CodeSexpr(nctemp10129);
struct tree* nctemp10139= sp;
struct tree* nctemp10141=PtreeMvsister(nctemp10139);
sp =nctemp10141;
int nctemp10132 = (sp !=0);
if(nctemp10132)
{
struct tree* nctemp10144= p;
struct nctempchar1 *nctemp10148;
static struct nctempchar1 nctemp10149 = {{ 2}, (char*)",\0"};
nctemp10148=&nctemp10149;
nctempchar1* nctemp10146= nctemp10148;
int nctemp10150=CodeEs(nctemp10144,nctemp10146);
}
}
int nctemp10151 = (sp !=0);
nctemp10127=nctemp10151;}struct tree* nctemp10156= p;
struct nctempchar1 *nctemp10160;
static struct nctempchar1 nctemp10161 = {{ 2}, (char*)")\0"};
nctemp10160=&nctemp10161;
nctempchar1* nctemp10158= nctemp10160;
int nctemp10162=CodeEs(nctemp10156,nctemp10158);
return 1;
}
int CodeScast (struct tree* p)
{
struct tree* np;
struct tree* sp;
struct tree* nctemp10169= p;
nctempchar1* nctemp10171=PtreeGetname(nctemp10169);
nctempchar1* nctemp10167= nctemp10171;
struct nctempchar1 *nctemp10174;
static struct nctempchar1 nctemp10175 = {{ 5}, (char*)"cast\0"};
nctemp10174=&nctemp10175;
nctempchar1* nctemp10172= nctemp10174;
int nctemp10176=LibeStrcmp(nctemp10167,nctemp10172);
int nctemp10164 = (nctemp10176 ==1);
if(nctemp10164)
{
struct tree* nctemp10182= p;
struct tree* nctemp10184=PtreeMvchild(nctemp10182);
np =nctemp10184;
struct tree* nctemp10189= np;
struct tree* nctemp10191=PtreeMvsister(nctemp10189);
sp =nctemp10191;
struct tree* nctemp10193= p;
struct nctempchar1 *nctemp10197;
static struct nctempchar1 nctemp10198 = {{ 2}, (char*)"(\0"};
nctemp10197=&nctemp10198;
nctempchar1* nctemp10195= nctemp10197;
int nctemp10199=CodeEs(nctemp10193,nctemp10195);
struct tree* nctemp10205= np;
nctempchar1* nctemp10207=PtreeGetstruct(nctemp10205);
nctempchar1* nctemp10203= nctemp10207;
struct nctempchar1 *nctemp10210;
static struct nctempchar1 nctemp10211 = {{ 7}, (char*)"struct\0"};
nctemp10210=&nctemp10211;
nctempchar1* nctemp10208= nctemp10210;
int nctemp10212=LibeStrcmp(nctemp10203,nctemp10208);
int nctemp10200 = (nctemp10212 ==1);
if(nctemp10200)
{
struct tree* nctemp10215= p;
struct nctempchar1 *nctemp10219;
static struct nctempchar1 nctemp10220 = {{ 8}, (char*)"struct \0"};
nctemp10219=&nctemp10220;
nctempchar1* nctemp10217= nctemp10219;
int nctemp10221=CodeEs(nctemp10215,nctemp10217);
}
struct tree* nctemp10223= p;
struct tree* nctemp10227= np;
nctempchar1* nctemp10229=PtreeGetdef(nctemp10227);
nctempchar1* nctemp10225= nctemp10229;
int nctemp10230=CodeEs(nctemp10223,nctemp10225);
struct tree* nctemp10236= np;
nctempchar1* nctemp10238=PtreeGetstruct(nctemp10236);
nctempchar1* nctemp10234= nctemp10238;
struct nctempchar1 *nctemp10241;
static struct nctempchar1 nctemp10242 = {{ 6}, (char*)"array\0"};
nctemp10241=&nctemp10242;
nctempchar1* nctemp10239= nctemp10241;
int nctemp10243=LibeStrcmp(nctemp10234,nctemp10239);
int nctemp10231 = (nctemp10243 ==1);
if(nctemp10231)
{
struct tree* nctemp10246= p;
struct nctempchar1 *nctemp10250;
static struct nctempchar1 nctemp10251 = {{ 2}, (char*)"*\0"};
nctemp10250=&nctemp10251;
nctempchar1* nctemp10248= nctemp10250;
int nctemp10252=CodeEs(nctemp10246,nctemp10248);
}
struct tree* nctemp10254= p;
struct nctempchar1 *nctemp10258;
static struct nctempchar1 nctemp10259 = {{ 3}, (char*)")(\0"};
nctemp10258=&nctemp10259;
nctempchar1* nctemp10256= nctemp10258;
int nctemp10260=CodeEs(nctemp10254,nctemp10256);
struct tree* nctemp10262= sp;
int nctemp10264=CodeSexpr(nctemp10262);
struct tree* nctemp10266= p;
struct nctempchar1 *nctemp10270;
static struct nctempchar1 nctemp10271 = {{ 2}, (char*)")\0"};
nctemp10270=&nctemp10271;
nctempchar1* nctemp10268= nctemp10270;
int nctemp10272=CodeEs(nctemp10266,nctemp10268);
}
return 1;
}
int CodeSprimexpr (struct tree* p)
{
struct tree* nctemp10279= p;
nctempchar1* nctemp10281=PtreeGetname(nctemp10279);
nctempchar1* nctemp10277= nctemp10281;
struct nctempchar1 *nctemp10284;
static struct nctempchar1 nctemp10285 = {{ 11}, (char*)"identifier\0"};
nctemp10284=&nctemp10285;
nctempchar1* nctemp10282= nctemp10284;
int nctemp10286=LibeStrcmp(nctemp10277,nctemp10282);
int nctemp10274 = (nctemp10286 ==1);
if(nctemp10274)
{
struct tree* nctemp10289= p;
int nctemp10291=CodeSident(nctemp10289);
}
else{
struct tree* nctemp10297= p;
nctempchar1* nctemp10299=PtreeGetname(nctemp10297);
nctempchar1* nctemp10295= nctemp10299;
struct nctempchar1 *nctemp10302;
static struct nctempchar1 nctemp10303 = {{ 6}, (char*)"fcall\0"};
nctemp10302=&nctemp10303;
nctempchar1* nctemp10300= nctemp10302;
int nctemp10304=LibeStrcmp(nctemp10295,nctemp10300);
int nctemp10292 = (nctemp10304 ==1);
if(nctemp10292)
{
struct tree* nctemp10307= p;
int nctemp10309=CodeSfcall(nctemp10307);
}
else{
struct tree* nctemp10315= p;
nctempchar1* nctemp10317=PtreeGetname(nctemp10315);
nctempchar1* nctemp10313= nctemp10317;
struct nctempchar1 *nctemp10320;
static struct nctempchar1 nctemp10321 = {{ 5}, (char*)"cast\0"};
nctemp10320=&nctemp10321;
nctempchar1* nctemp10318= nctemp10320;
int nctemp10322=LibeStrcmp(nctemp10313,nctemp10318);
int nctemp10310 = (nctemp10322 ==1);
if(nctemp10310)
{
struct tree* nctemp10325= p;
int nctemp10327=CodeScast(nctemp10325);
}
else{
struct tree* nctemp10333= p;
nctempchar1* nctemp10335=PtreeGetname(nctemp10333);
nctempchar1* nctemp10331= nctemp10335;
struct nctempchar1 *nctemp10338;
static struct nctempchar1 nctemp10339 = {{ 10}, (char*)"iconstant\0"};
nctemp10338=&nctemp10339;
nctempchar1* nctemp10336= nctemp10338;
int nctemp10340=LibeStrcmp(nctemp10331,nctemp10336);
int nctemp10328 = (nctemp10340 ==1);
if(nctemp10328)
{
struct tree* nctemp10343= p;
struct tree* nctemp10347= p;
nctempchar1* nctemp10349=PtreeGetdef(nctemp10347);
nctempchar1* nctemp10345= nctemp10349;
int nctemp10350=CodeEs(nctemp10343,nctemp10345);
}
else{
struct tree* nctemp10356= p;
nctempchar1* nctemp10358=PtreeGetname(nctemp10356);
nctempchar1* nctemp10354= nctemp10358;
struct nctempchar1 *nctemp10361;
static struct nctempchar1 nctemp10362 = {{ 10}, (char*)"sconstant\0"};
nctemp10361=&nctemp10362;
nctempchar1* nctemp10359= nctemp10361;
int nctemp10363=LibeStrcmp(nctemp10354,nctemp10359);
int nctemp10351 = (nctemp10363 ==1);
if(nctemp10351)
{
struct tree* nctemp10366= p;
struct tree* nctemp10370= p;
nctempchar1* nctemp10372=PtreeGetdef(nctemp10370);
nctempchar1* nctemp10368= nctemp10372;
int nctemp10373=CodeEs(nctemp10366,nctemp10368);
}
else{
struct tree* nctemp10379= p;
nctempchar1* nctemp10381=PtreeGetname(nctemp10379);
nctempchar1* nctemp10377= nctemp10381;
struct nctempchar1 *nctemp10384;
static struct nctempchar1 nctemp10385 = {{ 10}, (char*)"rconstant\0"};
nctemp10384=&nctemp10385;
nctempchar1* nctemp10382= nctemp10384;
int nctemp10386=LibeStrcmp(nctemp10377,nctemp10382);
int nctemp10374 = (nctemp10386 ==1);
if(nctemp10374)
{
struct tree* nctemp10389= p;
struct tree* nctemp10393= p;
nctempchar1* nctemp10395=PtreeGetdef(nctemp10393);
nctempchar1* nctemp10391= nctemp10395;
int nctemp10396=CodeEs(nctemp10389,nctemp10391);
}
else{
struct tree* nctemp10398= p;
struct nctempchar1 *nctemp10402;
static struct nctempchar1 nctemp10403 = {{ 2}, (char*)"(\0"};
nctemp10402=&nctemp10403;
nctempchar1* nctemp10400= nctemp10402;
int nctemp10404=CodeEs(nctemp10398,nctemp10400);
struct tree* nctemp10406= p;
int nctemp10408=CodeSbinexpr(nctemp10406);
struct tree* nctemp10410= p;
struct nctempchar1 *nctemp10414;
static struct nctempchar1 nctemp10415 = {{ 2}, (char*)")\0"};
nctemp10414=&nctemp10415;
nctempchar1* nctemp10412= nctemp10414;
int nctemp10416=CodeEs(nctemp10410,nctemp10412);
}
}
}
}
}
}
return 1;
}
int CodeSunexpr (struct tree* p)
{
struct tree* nctemp10423= p;
nctempchar1* nctemp10425=PtreeGetname(nctemp10423);
nctempchar1* nctemp10421= nctemp10425;
struct nctempchar1 *nctemp10428;
static struct nctempchar1 nctemp10429 = {{ 7}, (char*)"unexpr\0"};
nctemp10428=&nctemp10429;
nctempchar1* nctemp10426= nctemp10428;
int nctemp10430=LibeStrcmp(nctemp10421,nctemp10426);
int nctemp10418 = (nctemp10430 ==1);
if(nctemp10418)
{
struct tree* nctemp10433= p;
struct nctempchar1 *nctemp10437;
static struct nctempchar1 nctemp10438 = {{ 3}, (char*)" -\0"};
nctemp10437=&nctemp10438;
nctempchar1* nctemp10435= nctemp10437;
int nctemp10439=CodeEs(nctemp10433,nctemp10435);
struct tree* nctemp10443= p;
struct tree* nctemp10445=PtreeMvchild(nctemp10443);
struct tree* nctemp10441= nctemp10445;
int nctemp10446=CodeSprimexpr(nctemp10441);
}
else{
struct tree* nctemp10448= p;
int nctemp10450=CodeSprimexpr(nctemp10448);
}
return 1;
}
int CodeSbinexpr (struct tree* p)
{
struct tree* np;
struct tree* nctemp10457= p;
nctempchar1* nctemp10459=PtreeGetname(nctemp10457);
nctempchar1* nctemp10455= nctemp10459;
struct nctempchar1 *nctemp10462;
static struct nctempchar1 nctemp10463 = {{ 8}, (char*)"binexpr\0"};
nctemp10462=&nctemp10463;
nctempchar1* nctemp10460= nctemp10462;
int nctemp10464=LibeStrcmp(nctemp10455,nctemp10460);
int nctemp10452 = (nctemp10464 ==1);
if(nctemp10452)
{
struct tree* nctemp10470= p;
struct tree* nctemp10472=PtreeMvchild(nctemp10470);
np =nctemp10472;
struct tree* nctemp10474= np;
int nctemp10476=CodeSunexpr(nctemp10474);
struct tree* nctemp10488= p;
nctempchar1* nctemp10490=PtreeGetdef(nctemp10488);
nctempchar1* nctemp10486= nctemp10490;
struct nctempchar1 *nctemp10493;
static struct nctempchar1 nctemp10494 = {{ 2}, (char*)"=\0"};
nctemp10493=&nctemp10494;
nctempchar1* nctemp10491= nctemp10493;
int nctemp10495=LibeStrcmp(nctemp10486,nctemp10491);
int nctemp10483 = (nctemp10495 ==1);
struct tree* nctemp10503= p;
nctempchar1* nctemp10505=PtreeGetdef(nctemp10503);
nctempchar1* nctemp10501= nctemp10505;
struct nctempchar1 *nctemp10508;
static struct nctempchar1 nctemp10509 = {{ 3}, (char*)"==\0"};
nctemp10508=&nctemp10509;
nctempchar1* nctemp10506= nctemp10508;
int nctemp10510=LibeStrcmp(nctemp10501,nctemp10506);
int nctemp10498 = (nctemp10510 ==1);
int nctemp10480 = (nctemp10483 || nctemp10498);
struct tree* nctemp10518= p;
nctempchar1* nctemp10520=PtreeGetdef(nctemp10518);
nctempchar1* nctemp10516= nctemp10520;
struct nctempchar1 *nctemp10523;
static struct nctempchar1 nctemp10524 = {{ 3}, (char*)"!=\0"};
nctemp10523=&nctemp10524;
nctempchar1* nctemp10521= nctemp10523;
int nctemp10525=LibeStrcmp(nctemp10516,nctemp10521);
int nctemp10513 = (nctemp10525 ==1);
int nctemp10477 = (nctemp10480 || nctemp10513);
if(nctemp10477)
{
struct tree* nctemp10532= np;
nctempchar1* nctemp10534=PtreeGetref(nctemp10532);
nctempchar1* nctemp10530= nctemp10534;
struct nctempchar1 *nctemp10537;
static struct nctempchar1 nctemp10538 = {{ 5}, (char*)"aref\0"};
nctemp10537=&nctemp10538;
nctempchar1* nctemp10535= nctemp10537;
int nctemp10539=LibeStrcmp(nctemp10530,nctemp10535);
int nctemp10527 = (nctemp10539 ==1);
if(nctemp10527)
{
struct tree* nctemp10548= np;
struct tree* nctemp10550=PtreeMvsister(nctemp10548);
struct tree* nctemp10546= nctemp10550;
nctempchar1* nctemp10551=PtreeGetname(nctemp10546);
nctempchar1* nctemp10544= nctemp10551;
struct nctempchar1 *nctemp10554;
static struct nctempchar1 nctemp10555 = {{ 10}, (char*)"iconstant\0"};
nctemp10554=&nctemp10555;
nctempchar1* nctemp10552= nctemp10554;
int nctemp10556=LibeStrcmp(nctemp10544,nctemp10552);
struct tree* nctemp10562= np;
struct tree* nctemp10564=PtreeMvsister(nctemp10562);
struct tree* nctemp10560= nctemp10564;
nctempchar1* nctemp10565=PtreeGetdef(nctemp10560);
nctempchar1* nctemp10558= nctemp10565;
struct nctempchar1 *nctemp10568;
static struct nctempchar1 nctemp10569 = {{ 2}, (char*)"0\0"};
nctemp10568=&nctemp10569;
nctempchar1* nctemp10566= nctemp10568;
int nctemp10570=LibeStrcmp(nctemp10558,nctemp10566);
int nctemp10541 = (nctemp10556 && nctemp10570);
if(nctemp10541)
{
struct tree* nctemp10572= p;
struct nctempchar1 *nctemp10576;
static struct nctempchar1 nctemp10577 = {{ 2}, (char*)" \0"};
nctemp10576=&nctemp10577;
nctempchar1* nctemp10574= nctemp10576;
int nctemp10578=CodeEs(nctemp10572,nctemp10574);
}
}
}
struct tree* nctemp10580= p;
struct nctempchar1 *nctemp10584;
static struct nctempchar1 nctemp10585 = {{ 2}, (char*)" \0"};
nctemp10584=&nctemp10585;
nctempchar1* nctemp10582= nctemp10584;
int nctemp10586=CodeEs(nctemp10580,nctemp10582);
struct tree* nctemp10588= p;
struct tree* nctemp10592= p;
nctempchar1* nctemp10594=PtreeGetdef(nctemp10592);
nctempchar1* nctemp10590= nctemp10594;
int nctemp10595=CodeEs(nctemp10588,nctemp10590);
struct tree* nctemp10597= p;
struct nctempchar1 *nctemp10601;
static struct nctempchar1 nctemp10602 = {{ 2}, (char*)" \0"};
nctemp10601=&nctemp10602;
nctempchar1* nctemp10599= nctemp10601;
int nctemp10603=CodeEs(nctemp10597,nctemp10599);
struct tree* nctemp10607= np;
struct tree* nctemp10609=PtreeMvsister(nctemp10607);
struct tree* nctemp10605= nctemp10609;
int nctemp10610=CodeSunexpr(nctemp10605);
}
else{
struct tree* nctemp10612= p;
int nctemp10614=CodeSunexpr(nctemp10612);
}
return 1;
}
int CodeSexpr (struct tree* p)
{
struct tree* sp;
nctempchar1 *rval;
struct tree* nctemp10620= p;
struct tree* nctemp10622=PtreeMvchild(nctemp10620);
sp =nctemp10622;
struct tree* nctemp10624= sp;
int nctemp10626=CodeSbinexpr(nctemp10624);
return 1;
}
nctempchar1 * CodeExpr (struct tree* p)
{
nctempchar1 *rval;
struct tree* sp;
struct tree* nctemp10632= p;
struct tree* nctemp10634=PtreeMvchild(nctemp10632);
sp =nctemp10634;
struct tree* nctemp10640= sp;
nctempchar1* nctemp10642=CodeBinexpr(nctemp10640);
rval=nctemp10642;
return rval;
}
int CodeSforstmnt (struct tree* p)
{
struct tree* nctemp10649= p;
struct tree* nctemp10651=PtreeMvchild(nctemp10649);
p =nctemp10651;
struct tree* nctemp10653= p;
struct nctempchar1 *nctemp10657;
static struct nctempchar1 nctemp10658 = {{ 5}, (char*)"for(\0"};
nctemp10657=&nctemp10658;
nctempchar1* nctemp10655= nctemp10657;
int nctemp10659=CodeEs(nctemp10653,nctemp10655);
struct tree* nctemp10661= p;
int nctemp10663=CodeSexpr(nctemp10661);
struct tree* nctemp10665= p;
struct nctempchar1 *nctemp10669;
static struct nctempchar1 nctemp10670 = {{ 2}, (char*)";\0"};
nctemp10669=&nctemp10670;
nctempchar1* nctemp10667= nctemp10669;
int nctemp10671=CodeEs(nctemp10665,nctemp10667);
struct tree* nctemp10676= p;
struct tree* nctemp10678=PtreeMvsister(nctemp10676);
p =nctemp10678;
struct tree* nctemp10680= p;
int nctemp10682=CodeSexpr(nctemp10680);
struct tree* nctemp10684= p;
struct nctempchar1 *nctemp10688;
static struct nctempchar1 nctemp10689 = {{ 2}, (char*)";\0"};
nctemp10688=&nctemp10689;
nctempchar1* nctemp10686= nctemp10688;
int nctemp10690=CodeEs(nctemp10684,nctemp10686);
struct tree* nctemp10695= p;
struct tree* nctemp10697=PtreeMvsister(nctemp10695);
p =nctemp10697;
struct tree* nctemp10699= p;
int nctemp10701=CodeSexpr(nctemp10699);
struct tree* nctemp10703= p;
struct nctempchar1 *nctemp10707;
static struct nctempchar1 nctemp10708 = {{ 2}, (char*)")\0"};
nctemp10707=&nctemp10708;
nctempchar1* nctemp10705= nctemp10707;
int nctemp10709=CodeEs(nctemp10703,nctemp10705);
struct tree* nctemp10714= p;
struct tree* nctemp10716=PtreeMvsister(nctemp10714);
p =nctemp10716;
struct tree* nctemp10718= p;
int nctemp10720=CodeStmnt(nctemp10718);
return 1;
}
int CodeWhilestmnt (struct tree* p)
{
nctempchar1 *cond;
nctempchar1 *tmp;
nctempchar1 *cond2;
struct tree* sp;
struct tree* nctemp10726= p;
struct tree* nctemp10728=PtreeMvchild(nctemp10726);
p =nctemp10728;
sp = p;
struct tree* nctemp10734= sp;
nctempchar1* nctemp10736=CodeExpr(nctemp10734);
cond=nctemp10736;
nctempchar1* nctemp10742=CodeMktemp();
tmp=nctemp10742;
struct tree* nctemp10744= p;
struct tree* nctemp10748= sp;
nctempchar1* nctemp10750=PtreeGetype(nctemp10748);
nctempchar1* nctemp10746= nctemp10750;
int nctemp10751=CodeEs(nctemp10744,nctemp10746);
struct tree* nctemp10753= p;
struct nctempchar1 *nctemp10757;
static struct nctempchar1 nctemp10758 = {{ 2}, (char*)" \0"};
nctemp10757=&nctemp10758;
nctempchar1* nctemp10755= nctemp10757;
int nctemp10759=CodeEs(nctemp10753,nctemp10755);
struct tree* nctemp10761= p;
nctempchar1* nctemp10763= tmp;
int nctemp10766=CodeEs(nctemp10761,nctemp10763);
struct tree* nctemp10768= p;
struct nctempchar1 *nctemp10772;
static struct nctempchar1 nctemp10773 = {{ 2}, (char*)"=\0"};
nctemp10772=&nctemp10773;
nctempchar1* nctemp10770= nctemp10772;
int nctemp10774=CodeEs(nctemp10768,nctemp10770);
struct tree* nctemp10776= p;
nctempchar1* nctemp10778= cond;
int nctemp10781=CodeEs(nctemp10776,nctemp10778);
struct tree* nctemp10783= p;
struct nctempchar1 *nctemp10787;
static struct nctempchar1 nctemp10788 = {{ 4}, (char*)";\n\0"};
nctemp10787=&nctemp10788;
nctempchar1* nctemp10785= nctemp10787;
int nctemp10789=CodeEs(nctemp10783,nctemp10785);
struct tree* nctemp10791= p;
struct nctempchar1 *nctemp10795;
static struct nctempchar1 nctemp10796 = {{ 7}, (char*)"while(\0"};
nctemp10795=&nctemp10796;
nctempchar1* nctemp10793= nctemp10795;
int nctemp10797=CodeEs(nctemp10791,nctemp10793);
struct tree* nctemp10799= p;
nctempchar1* nctemp10801= tmp;
int nctemp10804=CodeEs(nctemp10799,nctemp10801);
struct tree* nctemp10806= p;
struct nctempchar1 *nctemp10810;
static struct nctempchar1 nctemp10811 = {{ 4}, (char*)")\n\0"};
nctemp10810=&nctemp10811;
nctempchar1* nctemp10808= nctemp10810;
int nctemp10812=CodeEs(nctemp10806,nctemp10808);
struct tree* nctemp10814= p;
struct nctempchar1 *nctemp10818;
static struct nctempchar1 nctemp10819 = {{ 2}, (char*)"{\0"};
nctemp10818=&nctemp10819;
nctempchar1* nctemp10816= nctemp10818;
int nctemp10820=CodeEs(nctemp10814,nctemp10816);
struct tree* nctemp10825= p;
struct tree* nctemp10827=PtreeMvsister(nctemp10825);
p =nctemp10827;
struct tree* nctemp10829= p;
int nctemp10831=CodeStmnt(nctemp10829);
struct tree* nctemp10837= sp;
nctempchar1* nctemp10839=CodeExpr(nctemp10837);
cond2=nctemp10839;
struct tree* nctemp10841= p;
nctempchar1* nctemp10843= tmp;
int nctemp10846=CodeEs(nctemp10841,nctemp10843);
struct tree* nctemp10848= p;
struct nctempchar1 *nctemp10852;
static struct nctempchar1 nctemp10853 = {{ 2}, (char*)"=\0"};
nctemp10852=&nctemp10853;
nctempchar1* nctemp10850= nctemp10852;
int nctemp10854=CodeEs(nctemp10848,nctemp10850);
struct tree* nctemp10856= p;
nctempchar1* nctemp10858= cond2;
int nctemp10861=CodeEs(nctemp10856,nctemp10858);
struct tree* nctemp10863= p;
struct nctempchar1 *nctemp10867;
static struct nctempchar1 nctemp10868 = {{ 2}, (char*)";\0"};
nctemp10867=&nctemp10868;
nctempchar1* nctemp10865= nctemp10867;
int nctemp10869=CodeEs(nctemp10863,nctemp10865);
struct tree* nctemp10871= p;
struct nctempchar1 *nctemp10875;
static struct nctempchar1 nctemp10876 = {{ 2}, (char*)"}\0"};
nctemp10875=&nctemp10876;
nctempchar1* nctemp10873= nctemp10875;
int nctemp10877=CodeEs(nctemp10871,nctemp10873);
return 1;
}
int CodeForstmnt (struct tree* p)
{
struct tree* sp;
struct tree* np;
nctempchar1 *cond;
nctempchar1 *tmp;
struct tree* nctemp10883= p;
struct tree* nctemp10885=PtreeMvchild(nctemp10883);
p =nctemp10885;
struct tree* nctemp10887= p;
nctempchar1* nctemp10889=CodeExpr(nctemp10887);
struct tree* nctemp10894= p;
struct tree* nctemp10896=PtreeMvsister(nctemp10894);
p =nctemp10896;
np = p;
struct tree* nctemp10902= p;
nctempchar1* nctemp10904=CodeExpr(nctemp10902);
cond=nctemp10904;
struct tree* nctemp10906= p;
struct nctempchar1 *nctemp10910;
static struct nctempchar1 nctemp10911 = {{ 7}, (char*)"while(\0"};
nctemp10910=&nctemp10911;
nctempchar1* nctemp10908= nctemp10910;
int nctemp10912=CodeEs(nctemp10906,nctemp10908);
struct tree* nctemp10914= p;
nctempchar1* nctemp10916= cond;
int nctemp10919=CodeEs(nctemp10914,nctemp10916);
struct tree* nctemp10921= p;
struct nctempchar1 *nctemp10925;
static struct nctempchar1 nctemp10926 = {{ 5}, (char*)"){\n\0"};
nctemp10925=&nctemp10926;
nctempchar1* nctemp10923= nctemp10925;
int nctemp10927=CodeEs(nctemp10921,nctemp10923);
struct tree* nctemp10932= p;
struct tree* nctemp10934=PtreeMvsister(nctemp10932);
p =nctemp10934;
sp = p;
struct tree* nctemp10939= p;
struct tree* nctemp10941=PtreeMvsister(nctemp10939);
p =nctemp10941;
struct tree* nctemp10943= p;
int nctemp10945=CodeStmnt(nctemp10943);
struct tree* nctemp10947= sp;
nctempchar1* nctemp10949=CodeExpr(nctemp10947);
struct tree* nctemp10955= np;
nctempchar1* nctemp10957=CodeExpr(nctemp10955);
tmp=nctemp10957;
struct tree* nctemp10959= p;
nctempchar1* nctemp10961= cond;
int nctemp10964=CodeEs(nctemp10959,nctemp10961);
struct tree* nctemp10966= p;
struct nctempchar1 *nctemp10970;
static struct nctempchar1 nctemp10971 = {{ 2}, (char*)"=\0"};
nctemp10970=&nctemp10971;
nctempchar1* nctemp10968= nctemp10970;
int nctemp10972=CodeEs(nctemp10966,nctemp10968);
struct tree* nctemp10974= p;
nctempchar1* nctemp10976= tmp;
int nctemp10979=CodeEs(nctemp10974,nctemp10976);
struct tree* nctemp10981= p;
struct nctempchar1 *nctemp10985;
static struct nctempchar1 nctemp10986 = {{ 4}, (char*)";\n\0"};
nctemp10985=&nctemp10986;
nctempchar1* nctemp10983= nctemp10985;
int nctemp10987=CodeEs(nctemp10981,nctemp10983);
struct tree* nctemp10989= p;
struct nctempchar1 *nctemp10993;
static struct nctempchar1 nctemp10994 = {{ 4}, (char*)"}\n\0"};
nctemp10993=&nctemp10994;
nctempchar1* nctemp10991= nctemp10993;
int nctemp10995=CodeEs(nctemp10989,nctemp10991);
return 1;
}
int CodeParallelfor (struct tree* p,int level,int rank)
{
struct tree* sp;
struct tree* rp;
struct tree* qp;
struct tree* rrp;
nctempchar1 *index;
nctempchar1 *init;
nctempchar1 *cond;
sp = p;
level = (level + 1);
int nctemp10997 = (p ==0);
if(nctemp10997)
{
return 1;
}
struct tree* nctemp11006= p;
struct tree* nctemp11008=PtreeMvsister(nctemp11006);
p =nctemp11008;
struct tree* nctemp11010= p;
int nctemp11012= level;
int nctemp11014= rank;
int nctemp11016=CodeParallelfor(nctemp11010,nctemp11012,nctemp11014);
struct tree* nctemp11021= sp;
struct tree* nctemp11023=PtreeMvchild(nctemp11021);
rp =nctemp11023;
struct tree* nctemp11028= rp;
struct tree* nctemp11030=PtreeMvchild(nctemp11028);
qp =nctemp11030;
struct tree* nctemp11035= qp;
struct tree* nctemp11037=PtreeMvchild(nctemp11035);
qp =nctemp11037;
struct tree* nctemp11043= qp;
nctempchar1* nctemp11045=PtreeGetdef(nctemp11043);
index=nctemp11045;
struct tree* nctemp11053= qp;
struct tree* nctemp11055=PtreeMvsister(nctemp11053);
struct tree* nctemp11051= nctemp11055;
nctempchar1* nctemp11056=CodeBinexpr(nctemp11051);
init=nctemp11056;
struct tree* nctemp11061= rp;
struct tree* nctemp11063=PtreeMvsister(nctemp11061);
rrp =nctemp11063;
struct tree* nctemp11069= rrp;
nctempchar1* nctemp11071=CodeExpr(nctemp11069);
cond=nctemp11071;
int nctemp11072 = (level ==rank);
if(nctemp11072)
{
struct tree* nctemp11077= p;
struct nctempchar1 *nctemp11081;
static struct nctempchar1 nctemp11082 = {{ 30}, (char*)"\n #pragma omp parallel for\n\0"};
nctemp11081=&nctemp11082;
nctempchar1* nctemp11079= nctemp11081;
int nctemp11083=CodeEs(nctemp11077,nctemp11079);
}
struct tree* nctemp11085= rp;
struct nctempchar1 *nctemp11089;
static struct nctempchar1 nctemp11090 = {{ 5}, (char*)"for(\0"};
nctemp11089=&nctemp11090;
nctempchar1* nctemp11087= nctemp11089;
int nctemp11091=CodeEs(nctemp11085,nctemp11087);
struct tree* nctemp11093= rp;
nctempchar1* nctemp11095= index;
int nctemp11098=CodeEs(nctemp11093,nctemp11095);
struct tree* nctemp11100= rp;
struct nctempchar1 *nctemp11104;
static struct nctempchar1 nctemp11105 = {{ 2}, (char*)"=\0"};
nctemp11104=&nctemp11105;
nctempchar1* nctemp11102= nctemp11104;
int nctemp11106=CodeEs(nctemp11100,nctemp11102);
struct tree* nctemp11108= rp;
nctempchar1* nctemp11110= init;
int nctemp11113=CodeEs(nctemp11108,nctemp11110);
struct tree* nctemp11115= rp;
struct nctempchar1 *nctemp11119;
static struct nctempchar1 nctemp11120 = {{ 2}, (char*)";\0"};
nctemp11119=&nctemp11120;
nctempchar1* nctemp11117= nctemp11119;
int nctemp11121=CodeEs(nctemp11115,nctemp11117);
struct tree* nctemp11126= rp;
struct tree* nctemp11128=PtreeMvsister(nctemp11126);
rp =nctemp11128;
struct tree* nctemp11130= rp;
nctempchar1* nctemp11132= index;
int nctemp11135=CodeEs(nctemp11130,nctemp11132);
struct tree* nctemp11137= rp;
struct nctempchar1 *nctemp11141;
static struct nctempchar1 nctemp11142 = {{ 2}, (char*)"<\0"};
nctemp11141=&nctemp11142;
nctempchar1* nctemp11139= nctemp11141;
int nctemp11143=CodeEs(nctemp11137,nctemp11139);
struct tree* nctemp11145= p;
nctempchar1* nctemp11147= cond;
int nctemp11150=CodeEs(nctemp11145,nctemp11147);
struct tree* nctemp11152= rp;
struct nctempchar1 *nctemp11156;
static struct nctempchar1 nctemp11157 = {{ 2}, (char*)";\0"};
nctemp11156=&nctemp11157;
nctempchar1* nctemp11154= nctemp11156;
int nctemp11158=CodeEs(nctemp11152,nctemp11154);
struct tree* nctemp11166= rp;
struct tree* nctemp11168=PtreeMvsister(nctemp11166);
rp =nctemp11168;
int nctemp11159 = (rp !=0);
if(nctemp11159)
{
struct tree* nctemp11171= rp;
nctempchar1* nctemp11173= index;
int nctemp11176=CodeEs(nctemp11171,nctemp11173);
struct tree* nctemp11178= rp;
struct nctempchar1 *nctemp11182;
static struct nctempchar1 nctemp11183 = {{ 2}, (char*)"=\0"};
nctemp11182=&nctemp11183;
nctempchar1* nctemp11180= nctemp11182;
int nctemp11184=CodeEs(nctemp11178,nctemp11180);
struct tree* nctemp11186= rp;
nctempchar1* nctemp11188= index;
int nctemp11191=CodeEs(nctemp11186,nctemp11188);
struct tree* nctemp11193= rp;
struct nctempchar1 *nctemp11197;
static struct nctempchar1 nctemp11198 = {{ 2}, (char*)"+\0"};
nctemp11197=&nctemp11198;
nctempchar1* nctemp11195= nctemp11197;
int nctemp11199=CodeEs(nctemp11193,nctemp11195);
struct tree* nctemp11201= rp;
nctempchar1* nctemp11203=CodeExpr(nctemp11201);
}
else{
struct tree* nctemp11205= rp;
nctempchar1* nctemp11207= index;
int nctemp11210=CodeEs(nctemp11205,nctemp11207);
struct tree* nctemp11212= rp;
struct nctempchar1 *nctemp11216;
static struct nctempchar1 nctemp11217 = {{ 2}, (char*)"=\0"};
nctemp11216=&nctemp11217;
nctempchar1* nctemp11214= nctemp11216;
int nctemp11218=CodeEs(nctemp11212,nctemp11214);
struct tree* nctemp11220= rp;
nctempchar1* nctemp11222= index;
int nctemp11225=CodeEs(nctemp11220,nctemp11222);
struct tree* nctemp11227= rp;
struct nctempchar1 *nctemp11231;
static struct nctempchar1 nctemp11232 = {{ 2}, (char*)"+\0"};
nctemp11231=&nctemp11232;
nctempchar1* nctemp11229= nctemp11231;
int nctemp11233=CodeEs(nctemp11227,nctemp11229);
struct tree* nctemp11235= rp;
struct nctempchar1 *nctemp11239;
static struct nctempchar1 nctemp11240 = {{ 2}, (char*)"1\0"};
nctemp11239=&nctemp11240;
nctempchar1* nctemp11237= nctemp11239;
int nctemp11241=CodeEs(nctemp11235,nctemp11237);
}
struct tree* nctemp11243= rp;
struct nctempchar1 *nctemp11247;
static struct nctempchar1 nctemp11248 = {{ 3}, (char*)"){\0"};
nctemp11247=&nctemp11248;
nctempchar1* nctemp11245= nctemp11247;
int nctemp11249=CodeEs(nctemp11243,nctemp11245);
return 1;
}
int CodeParallelstmntcpu (struct tree* p)
{
struct tree* sp;
int rank;
int i;
sp = p;
struct tree* nctemp11255= sp;
int nctemp11257=PtreeGetrank(nctemp11255);
rank =nctemp11257;
struct tree* nctemp11262= p;
struct tree* nctemp11264=PtreeMvchild(nctemp11262);
p =nctemp11264;
struct tree* nctemp11269= p;
struct tree* nctemp11271=PtreeMvchild(nctemp11269);
p =nctemp11271;
struct tree* nctemp11273= p;
int nctemp11275= 0;
int nctemp11277= rank;
int nctemp11279=CodeParallelfor(nctemp11273,nctemp11275,nctemp11277);
struct tree* nctemp11284= sp;
struct tree* nctemp11286=PtreeMvchild(nctemp11284);
sp =nctemp11286;
struct tree* nctemp11291= sp;
struct tree* nctemp11293=PtreeMvsister(nctemp11291);
sp =nctemp11293;
struct tree* nctemp11295= sp;
int nctemp11297=CodeStmnt(nctemp11295);
for(i = 0;i < rank;i = (i + 1)){
struct tree* nctemp11299= sp;
struct nctempchar1 *nctemp11303;
static struct nctempchar1 nctemp11304 = {{ 2}, (char*)"}\0"};
nctemp11303=&nctemp11304;
nctempchar1* nctemp11301= nctemp11303;
int nctemp11305=CodeEs(nctemp11299,nctemp11301);
}
return 1;
}
nctempchar1 * CodeParprocno (struct tree* p)
{
struct tree* nctemp11308= p;
struct nctempchar1 *nctemp11312;
static struct nctempchar1 nctemp11313 = {{ 13}, (char*)"int nctempno\0"};
nctemp11312=&nctemp11313;
nctempchar1* nctemp11310= nctemp11312;
int nctemp11314=CodeEs(nctemp11308,nctemp11310);
struct tree* nctemp11316= p;
struct nctempchar1 *nctemp11320;
static struct nctempchar1 nctemp11321 = {{ 39}, (char*)"=blockIdx.x*blockDim.x + threadIdx.x; \0"};
nctemp11320=&nctemp11321;
nctempchar1* nctemp11318= nctemp11320;
int nctemp11322=CodeEs(nctemp11316,nctemp11318);
struct nctempchar1 *nctemp11324;
static struct nctempchar1 nctemp11325 = {{ 9}, (char*)"nctempno\0"};
nctemp11324=&nctemp11325;
return nctemp11324;
}
nctempchar1 * CodeParidx (struct tree* p)
{
struct tree* nctemp11330= p;
struct tree* nctemp11332=PtreeMvchild(nctemp11330);
p =nctemp11332;
struct tree* nctemp11337= p;
struct tree* nctemp11339=PtreeMvchild(nctemp11337);
p =nctemp11339;
struct tree* nctemp11344= p;
struct tree* nctemp11346=PtreeMvchild(nctemp11344);
p =nctemp11346;
struct tree* nctemp11348= p;
nctempchar1* nctemp11350=PtreeGetdef(nctemp11348);
return nctemp11350;
}
nctempchar1 * CodeParidxrank (struct tree* p,int r)
{
int i;
for(i = 0;i < (r - 1);i = (i + 1)){
struct tree* nctemp11355= p;
struct tree* nctemp11357=PtreeMvsister(nctemp11355);
p =nctemp11357;
}
struct tree* nctemp11359= p;
nctempchar1* nctemp11361=CodeParidx(nctemp11359);
return nctemp11361;
}
nctempchar1 * CodeParllim (struct tree* p)
{
nctempchar1 *tmp;
nctempchar1 *temp;
struct tree* nctemp11366= p;
struct tree* nctemp11368=PtreeMvchild(nctemp11366);
p =nctemp11368;
struct tree* nctemp11374= p;
nctempchar1* nctemp11376=CodeExpr(nctemp11374);
tmp=nctemp11376;
nctempchar1* nctemp11382=CodeMktemp();
temp=nctemp11382;
struct tree* nctemp11384= p;
struct nctempchar1 *nctemp11388;
static struct nctempchar1 nctemp11389 = {{ 5}, (char*)"int \0"};
nctemp11388=&nctemp11389;
nctempchar1* nctemp11386= nctemp11388;
int nctemp11390=CodeEs(nctemp11384,nctemp11386);
struct tree* nctemp11392= p;
nctempchar1* nctemp11394= temp;
int nctemp11397=CodeEs(nctemp11392,nctemp11394);
struct tree* nctemp11399= p;
struct nctempchar1 *nctemp11403;
static struct nctempchar1 nctemp11404 = {{ 2}, (char*)"=\0"};
nctemp11403=&nctemp11404;
nctempchar1* nctemp11401= nctemp11403;
int nctemp11405=CodeEs(nctemp11399,nctemp11401);
struct tree* nctemp11407= p;
nctempchar1* nctemp11409= tmp;
int nctemp11412=CodeEs(nctemp11407,nctemp11409);
struct tree* nctemp11414= p;
struct nctempchar1 *nctemp11418;
static struct nctempchar1 nctemp11419 = {{ 4}, (char*)";\n\0"};
nctemp11418=&nctemp11419;
nctempchar1* nctemp11416= nctemp11418;
int nctemp11420=CodeEs(nctemp11414,nctemp11416);
return temp;
}
nctempchar1 * CodeParulim (struct tree* p)
{
struct tree* nctemp11427= p;
struct tree* nctemp11429=PtreeMvchild(nctemp11427);
p =nctemp11429;
struct tree* nctemp11434= p;
struct tree* nctemp11436=PtreeMvsister(nctemp11434);
p =nctemp11436;
struct tree* nctemp11438= p;
nctempchar1* nctemp11440=CodeExpr(nctemp11438);
return nctemp11440;
}
nctempchar1 * CodeParllimrank (struct tree* p,int r)
{
int i;
for(i = 0;i < (r - 1);i = (i + 1)){
struct tree* nctemp11445= p;
struct tree* nctemp11447=PtreeMvsister(nctemp11445);
p =nctemp11447;
}
struct tree* nctemp11449= p;
nctempchar1* nctemp11451=CodeParllim(nctemp11449);
return nctemp11451;
}
nctempchar1 * CodeParulimrank (struct tree* p,int r)
{
int i;
for(i = 0;i < (r - 1);i = (i + 1)){
struct tree* nctemp11456= p;
struct tree* nctemp11458=PtreeMvsister(nctemp11456);
p =nctemp11458;
}
struct tree* nctemp11460= p;
nctempchar1* nctemp11462=CodeParulim(nctemp11460);
return nctemp11462;
}
nctempchar1 * CodeParlen (struct tree* p,nctempchar1 *llim)
{
nctempchar1 *tmp1;
nctempchar1 *tmp2;
nctempchar1 *tmp3;
nctempchar1* nctemp11468=CodeMktemp();
tmp1=nctemp11468;
struct tree* nctemp11474= p;
nctempchar1* nctemp11476=CodeParulim(nctemp11474);
tmp2=nctemp11476;
struct tree* nctemp11482= p;
nctempchar1* nctemp11484=CodeParllim(nctemp11482);
tmp3=nctemp11484;
struct tree* nctemp11486= p;
struct nctempchar1 *nctemp11490;
static struct nctempchar1 nctemp11491 = {{ 5}, (char*)"int \0"};
nctemp11490=&nctemp11491;
nctempchar1* nctemp11488= nctemp11490;
int nctemp11492=CodeEs(nctemp11486,nctemp11488);
struct tree* nctemp11494= p;
nctempchar1* nctemp11496= tmp1;
int nctemp11499=CodeEs(nctemp11494,nctemp11496);
struct tree* nctemp11501= p;
struct nctempchar1 *nctemp11505;
static struct nctempchar1 nctemp11506 = {{ 2}, (char*)"=\0"};
nctemp11505=&nctemp11506;
nctempchar1* nctemp11503= nctemp11505;
int nctemp11507=CodeEs(nctemp11501,nctemp11503);
struct tree* nctemp11509= p;
nctempchar1* nctemp11511= tmp2;
int nctemp11514=CodeEs(nctemp11509,nctemp11511);
struct tree* nctemp11516= p;
struct nctempchar1 *nctemp11520;
static struct nctempchar1 nctemp11521 = {{ 2}, (char*)"-\0"};
nctemp11520=&nctemp11521;
nctempchar1* nctemp11518= nctemp11520;
int nctemp11522=CodeEs(nctemp11516,nctemp11518);
struct tree* nctemp11524= p;
nctempchar1* nctemp11526= tmp3;
int nctemp11529=CodeEs(nctemp11524,nctemp11526);
struct tree* nctemp11531= p;
struct nctempchar1 *nctemp11535;
static struct nctempchar1 nctemp11536 = {{ 4}, (char*)";\n\0"};
nctemp11535=&nctemp11536;
nctempchar1* nctemp11533= nctemp11535;
int nctemp11537=CodeEs(nctemp11531,nctemp11533);
nctempchar1* nctemp11541= tmp3;
nctempchar1* nctemp11544= llim;
int nctemp11547=LibeStrcpy(nctemp11541,nctemp11544);
int nctemp11538 = (nctemp11547 ==0);
if(nctemp11538)
{
struct nctempchar1 *nctemp11552;
static struct nctempchar1 nctemp11553 = {{ 31}, (char*)"Internal error in CodeParlen\n\0"};
nctemp11552=&nctemp11553;
nctempchar1* nctemp11550= nctemp11552;
int nctemp11554=CodeError(nctemp11550);
}
return tmp1;
}
nctempchar1 * CodeParlenrank (struct tree* p,int r,nctempchar1 *llim)
{
int i;
nctempchar1 *tmp;
for(i = 0;i < (r - 1);i = (i + 1)){
struct tree* nctemp11561= p;
struct tree* nctemp11563=PtreeMvsister(nctemp11561);
p =nctemp11563;
}
struct tree* nctemp11569= p;
nctempchar1* nctemp11571= llim;
nctempchar1* nctemp11574=CodeParlen(nctemp11569,nctemp11571);
tmp=nctemp11574;
return tmp;
}
struct charr {nctempchar1 *s;
};
typedef struct nctempcharr1 {int d[1]; struct charr *a; } nctempcharr1;
struct nctempcharr2 {int d[2]; struct charr *a; } ;
struct nctempcharr3 {int d[3]; struct charr *a; } ;
struct nctempcharr4 {int d[4]; struct charr *a; } ;
nctempchar1 * CodeParnsize (struct tree* p,struct nctempcharr1 *m)
{
int i;
int r;
nctempchar1 *nsize;
int nctemp11581=m->d[0];r =nctemp11581;
nctempchar1* nctemp11590=CodeMktemp();
nsize=nctemp11590;
struct tree* nctemp11592= p;
struct nctempchar1 *nctemp11596;
static struct nctempchar1 nctemp11597 = {{ 5}, (char*)"int \0"};
nctemp11596=&nctemp11597;
nctempchar1* nctemp11594= nctemp11596;
int nctemp11598=CodeEs(nctemp11592,nctemp11594);
struct tree* nctemp11600= p;
nctempchar1* nctemp11602= nsize;
int nctemp11605=CodeEs(nctemp11600,nctemp11602);
struct tree* nctemp11607= p;
struct nctempchar1 *nctemp11611;
static struct nctempchar1 nctemp11612 = {{ 2}, (char*)"=\0"};
nctemp11611=&nctemp11612;
nctempchar1* nctemp11609= nctemp11611;
int nctemp11613=CodeEs(nctemp11607,nctemp11609);
for(i = 0;i < r;i = (i + 1)){
int nctemp11622 = r - 1;
int nctemp11614 = (i ==nctemp11622);
if(nctemp11614)
{
struct tree* nctemp11624= p;
int nctemp11628=i;
nctempchar1* nctemp11626= m->a[nctemp11628].s;
int nctemp11631=CodeEs(nctemp11624,nctemp11626);
struct tree* nctemp11633= p;
struct nctempchar1 *nctemp11637;
static struct nctempchar1 nctemp11638 = {{ 4}, (char*)";\n\0"};
nctemp11637=&nctemp11638;
nctempchar1* nctemp11635= nctemp11637;
int nctemp11639=CodeEs(nctemp11633,nctemp11635);
}
else{
struct tree* nctemp11641= p;
int nctemp11645=i;
nctempchar1* nctemp11643= m->a[nctemp11645].s;
int nctemp11648=CodeEs(nctemp11641,nctemp11643);
struct tree* nctemp11650= p;
struct nctempchar1 *nctemp11654;
static struct nctempchar1 nctemp11655 = {{ 2}, (char*)"*\0"};
nctemp11654=&nctemp11655;
nctempchar1* nctemp11652= nctemp11654;
int nctemp11656=CodeEs(nctemp11650,nctemp11652);
}
}
return nsize;
}
int CodeParallelstmntgpu (struct tree* p)
{
struct tree* sp;
struct tree* slice;
nctempchar1 *pno;
nctempchar1 *nmax;
nctempchar1 *qk;
nctempchar1 *tmp;
int rank;
int l;
struct nctempcharr1 *m;
struct nctempcharr1 *i;
struct nctempcharr1 *nl;
int nctemp11660= 1;
int nctemp11662=CodeSetparallel(nctemp11660);
sp = p;
struct tree* nctemp11667= p;
int nctemp11669=PtreeGetrank(nctemp11667);
rank =nctemp11669;
int nctemp11676=rank;
struct nctempcharr1 *nctemp11675;
nctemp11675=(struct nctempcharr1*)RunMalloc(sizeof(struct nctempcharr1));
nctemp11675->d[0]=rank;
nctemp11675->a=(struct charr*)RunMalloc(sizeof(struct charr)*nctemp11676);
m=nctemp11675;
int nctemp11685=rank;
struct nctempcharr1 *nctemp11684;
nctemp11684=(struct nctempcharr1*)RunMalloc(sizeof(struct nctempcharr1));
nctemp11684->d[0]=rank;
nctemp11684->a=(struct charr*)RunMalloc(sizeof(struct charr)*nctemp11685);
i=nctemp11684;
int nctemp11694=rank;
struct nctempcharr1 *nctemp11693;
nctemp11693=(struct nctempcharr1*)RunMalloc(sizeof(struct nctempcharr1));
nctemp11693->d[0]=rank;
nctemp11693->a=(struct charr*)RunMalloc(sizeof(struct charr)*nctemp11694);
nl=nctemp11693;
struct tree* nctemp11701= p;
struct tree* nctemp11703=PtreeMvchild(nctemp11701);
p =nctemp11703;
struct tree* nctemp11708= p;
struct tree* nctemp11710=PtreeMvchild(nctemp11708);
slice =nctemp11710;
struct tree* nctemp11712= p;
struct nctempchar1 *nctemp11716;
static struct nctempchar1 nctemp11717 = {{ 4}, (char*)"{\n\0"};
nctemp11716=&nctemp11717;
nctempchar1* nctemp11714= nctemp11716;
int nctemp11718=CodeEs(nctemp11712,nctemp11714);
struct tree* nctemp11724= slice;
nctempchar1* nctemp11726=CodeParprocno(nctemp11724);
pno=nctemp11726;
for(l = 0;l < rank;l = (l + 1)){
int nctemp11730=l;
struct tree* nctemp11734= slice;
int nctemp11741 = l + 1;
int nctemp11736= nctemp11741;
nctempchar1* nctemp11742=CodeParidxrank(nctemp11734,nctemp11736);
i->a[nctemp11730].s=nctemp11742;
int nctemp11746=l;
int nctemp11751=4096;
nctempchar1 *nctemp11750;
nctemp11750=(nctempchar1*)RunMalloc(sizeof(nctempchar1));
nctemp11750->d[0]=4096;
nctemp11750->a=(char *)RunMalloc(sizeof(char)*nctemp11751);
nl->a[nctemp11746].s=nctemp11750;
int nctemp11757=l;
struct tree* nctemp11761= slice;
int nctemp11768 = l + 1;
int nctemp11763= nctemp11768;
int nctemp11771=l;
nctempchar1* nctemp11769= nl->a[nctemp11771].s;
nctempchar1* nctemp11774=CodeParlenrank(nctemp11761,nctemp11763,nctemp11769);
m->a[nctemp11757].s=nctemp11774;
}
struct tree* nctemp11780= p;
nctempcharr1* nctemp11782= m;
nctempchar1* nctemp11785=CodeParnsize(nctemp11780,nctemp11782);
nmax=nctemp11785;
struct tree* nctemp11787= p;
struct nctempchar1 *nctemp11791;
static struct nctempchar1 nctemp11792 = {{ 5}, (char*)"for(\0"};
nctemp11791=&nctemp11792;
nctempchar1* nctemp11789= nctemp11791;
int nctemp11793=CodeEs(nctemp11787,nctemp11789);
struct tree* nctemp11795= p;
nctempchar1* nctemp11797= pno;
int nctemp11800=CodeEs(nctemp11795,nctemp11797);
struct tree* nctemp11802= p;
struct nctempchar1 *nctemp11806;
static struct nctempchar1 nctemp11807 = {{ 39}, (char*)"=blockIdx.x*blockDim.x + threadIdx.x; \0"};
nctemp11806=&nctemp11807;
nctempchar1* nctemp11804= nctemp11806;
int nctemp11808=CodeEs(nctemp11802,nctemp11804);
struct tree* nctemp11810= p;
nctempchar1* nctemp11812= pno;
int nctemp11815=CodeEs(nctemp11810,nctemp11812);
struct tree* nctemp11817= p;
struct nctempchar1 *nctemp11821;
static struct nctempchar1 nctemp11822 = {{ 2}, (char*)"<\0"};
nctemp11821=&nctemp11822;
nctempchar1* nctemp11819= nctemp11821;
int nctemp11823=CodeEs(nctemp11817,nctemp11819);
struct tree* nctemp11825= p;
nctempchar1* nctemp11827= nmax;
int nctemp11830=CodeEs(nctemp11825,nctemp11827);
struct tree* nctemp11832= p;
struct nctempchar1 *nctemp11836;
static struct nctempchar1 nctemp11837 = {{ 2}, (char*)";\0"};
nctemp11836=&nctemp11837;
nctempchar1* nctemp11834= nctemp11836;
int nctemp11838=CodeEs(nctemp11832,nctemp11834);
struct tree* nctemp11840= p;
nctempchar1* nctemp11842= pno;
int nctemp11845=CodeEs(nctemp11840,nctemp11842);
struct tree* nctemp11847= p;
struct nctempchar1 *nctemp11851;
static struct nctempchar1 nctemp11852 = {{ 23}, (char*)"+=blockDim.x*gridDim.x\0"};
nctemp11851=&nctemp11852;
nctempchar1* nctemp11849= nctemp11851;
int nctemp11853=CodeEs(nctemp11847,nctemp11849);
struct tree* nctemp11855= p;
struct nctempchar1 *nctemp11859;
static struct nctempchar1 nctemp11860 = {{ 5}, (char*)"){\n\0"};
nctemp11859=&nctemp11860;
nctempchar1* nctemp11857= nctemp11859;
int nctemp11861=CodeEs(nctemp11855,nctemp11857);
struct nctempchar1 *nctemp11869;
static struct nctempchar1 nctemp11870 = {{ 2}, (char*)"1\0"};
nctemp11869=&nctemp11870;
nctempchar1* nctemp11867= nctemp11869;
nctempchar1* nctemp11871=LibeStrsave(nctemp11867);
qk=nctemp11871;
for(l = 0;l < rank;l = (l + 1)){
int nctemp11880 = rank - 1;
int nctemp11872 = (l ==nctemp11880);
if(nctemp11872)
{
struct tree* nctemp11882= p;
int nctemp11886=l;
nctempchar1* nctemp11884= i->a[nctemp11886].s;
int nctemp11889=CodeEs(nctemp11882,nctemp11884);
struct tree* nctemp11891= p;
struct nctempchar1 *nctemp11895;
static struct nctempchar1 nctemp11896 = {{ 2}, (char*)"=\0"};
nctemp11895=&nctemp11896;
nctempchar1* nctemp11893= nctemp11895;
int nctemp11897=CodeEs(nctemp11891,nctemp11893);
struct tree* nctemp11899= p;
struct nctempchar1 *nctemp11903;
static struct nctempchar1 nctemp11904 = {{ 2}, (char*)"(\0"};
nctemp11903=&nctemp11904;
nctempchar1* nctemp11901= nctemp11903;
int nctemp11905=CodeEs(nctemp11899,nctemp11901);
struct tree* nctemp11907= p;
nctempchar1* nctemp11909= pno;
int nctemp11912=CodeEs(nctemp11907,nctemp11909);
struct tree* nctemp11914= p;
struct nctempchar1 *nctemp11918;
static struct nctempchar1 nctemp11919 = {{ 2}, (char*)"/\0"};
nctemp11918=&nctemp11919;
nctempchar1* nctemp11916= nctemp11918;
int nctemp11920=CodeEs(nctemp11914,nctemp11916);
struct tree* nctemp11922= p;
struct nctempchar1 *nctemp11926;
static struct nctempchar1 nctemp11927 = {{ 2}, (char*)"(\0"};
nctemp11926=&nctemp11927;
nctempchar1* nctemp11924= nctemp11926;
int nctemp11928=CodeEs(nctemp11922,nctemp11924);
struct tree* nctemp11930= p;
nctempchar1* nctemp11932= qk;
int nctemp11935=CodeEs(nctemp11930,nctemp11932);
struct tree* nctemp11937= p;
struct nctempchar1 *nctemp11941;
static struct nctempchar1 nctemp11942 = {{ 2}, (char*)")\0"};
nctemp11941=&nctemp11942;
nctempchar1* nctemp11939= nctemp11941;
int nctemp11943=CodeEs(nctemp11937,nctemp11939);
struct tree* nctemp11945= p;
struct nctempchar1 *nctemp11949;
static struct nctempchar1 nctemp11950 = {{ 2}, (char*)")\0"};
nctemp11949=&nctemp11950;
nctempchar1* nctemp11947= nctemp11949;
int nctemp11951=CodeEs(nctemp11945,nctemp11947);
struct tree* nctemp11953= p;
struct nctempchar1 *nctemp11957;
static struct nctempchar1 nctemp11958 = {{ 2}, (char*)"+\0"};
nctemp11957=&nctemp11958;
nctempchar1* nctemp11955= nctemp11957;
int nctemp11959=CodeEs(nctemp11953,nctemp11955);
struct tree* nctemp11961= p;
int nctemp11965=l;
nctempchar1* nctemp11963= nl->a[nctemp11965].s;
int nctemp11968=CodeEs(nctemp11961,nctemp11963);
int nctemp11971=l;
RunFree(nl->a[nctemp11971].s->a);
RunFree(nl->a[nctemp11971].s);
struct tree* nctemp11975= p;
struct nctempchar1 *nctemp11979;
static struct nctempchar1 nctemp11980 = {{ 4}, (char*)";\n\0"};
nctemp11979=&nctemp11980;
nctempchar1* nctemp11977= nctemp11979;
int nctemp11981=CodeEs(nctemp11975,nctemp11977);
}
else{
struct tree* nctemp11983= p;
int nctemp11987=l;
nctempchar1* nctemp11985= i->a[nctemp11987].s;
int nctemp11990=CodeEs(nctemp11983,nctemp11985);
struct tree* nctemp11992= p;
struct nctempchar1 *nctemp11996;
static struct nctempchar1 nctemp11997 = {{ 2}, (char*)"=\0"};
nctemp11996=&nctemp11997;
nctempchar1* nctemp11994= nctemp11996;
int nctemp11998=CodeEs(nctemp11992,nctemp11994);
struct tree* nctemp12000= p;
struct nctempchar1 *nctemp12004;
static struct nctempchar1 nctemp12005 = {{ 2}, (char*)"(\0"};
nctemp12004=&nctemp12005;
nctempchar1* nctemp12002= nctemp12004;
int nctemp12006=CodeEs(nctemp12000,nctemp12002);
struct tree* nctemp12008= p;
nctempchar1* nctemp12010= pno;
int nctemp12013=CodeEs(nctemp12008,nctemp12010);
struct tree* nctemp12015= p;
struct nctempchar1 *nctemp12019;
static struct nctempchar1 nctemp12020 = {{ 2}, (char*)"/\0"};
nctemp12019=&nctemp12020;
nctempchar1* nctemp12017= nctemp12019;
int nctemp12021=CodeEs(nctemp12015,nctemp12017);
struct tree* nctemp12023= p;
struct nctempchar1 *nctemp12027;
static struct nctempchar1 nctemp12028 = {{ 2}, (char*)"(\0"};
nctemp12027=&nctemp12028;
nctempchar1* nctemp12025= nctemp12027;
int nctemp12029=CodeEs(nctemp12023,nctemp12025);
struct tree* nctemp12031= p;
nctempchar1* nctemp12033= qk;
int nctemp12036=CodeEs(nctemp12031,nctemp12033);
struct tree* nctemp12038= p;
struct nctempchar1 *nctemp12042;
static struct nctempchar1 nctemp12043 = {{ 2}, (char*)")\0"};
nctemp12042=&nctemp12043;
nctempchar1* nctemp12040= nctemp12042;
int nctemp12044=CodeEs(nctemp12038,nctemp12040);
struct tree* nctemp12046= p;
struct nctempchar1 *nctemp12050;
static struct nctempchar1 nctemp12051 = {{ 2}, (char*)")\0"};
nctemp12050=&nctemp12051;
nctempchar1* nctemp12048= nctemp12050;
int nctemp12052=CodeEs(nctemp12046,nctemp12048);
struct tree* nctemp12054= p;
struct nctempchar1 *nctemp12058;
static struct nctempchar1 nctemp12059 = {{ 2}, (char*)"%\0"};
nctemp12058=&nctemp12059;
nctempchar1* nctemp12056= nctemp12058;
int nctemp12060=CodeEs(nctemp12054,nctemp12056);
struct tree* nctemp12062= p;
int nctemp12066=l;
nctempchar1* nctemp12064= m->a[nctemp12066].s;
int nctemp12069=CodeEs(nctemp12062,nctemp12064);
struct tree* nctemp12071= p;
struct nctempchar1 *nctemp12075;
static struct nctempchar1 nctemp12076 = {{ 2}, (char*)"+\0"};
nctemp12075=&nctemp12076;
nctempchar1* nctemp12073= nctemp12075;
int nctemp12077=CodeEs(nctemp12071,nctemp12073);
struct tree* nctemp12079= p;
int nctemp12083=l;
nctempchar1* nctemp12081= nl->a[nctemp12083].s;
int nctemp12086=CodeEs(nctemp12079,nctemp12081);
int nctemp12089=l;
RunFree(nl->a[nctemp12089].s->a);
RunFree(nl->a[nctemp12089].s);
struct tree* nctemp12093= p;
struct nctempchar1 *nctemp12097;
static struct nctempchar1 nctemp12098 = {{ 4}, (char*)";\n\0"};
nctemp12097=&nctemp12098;
nctempchar1* nctemp12095= nctemp12097;
int nctemp12099=CodeEs(nctemp12093,nctemp12095);
}
nctempchar1* nctemp12105= qk;
struct nctempchar1 *nctemp12110;
static struct nctempchar1 nctemp12111 = {{ 2}, (char*)"*\0"};
nctemp12110=&nctemp12111;
nctempchar1* nctemp12108= nctemp12110;
nctempchar1* nctemp12112=LibeStradd(nctemp12105,nctemp12108);
tmp=nctemp12112;
RunFree(qk->a);
RunFree(qk);
qk = tmp;
nctempchar1* nctemp12121= qk;
int nctemp12126=l;
nctempchar1* nctemp12124= m->a[nctemp12126].s;
nctempchar1* nctemp12129=LibeStradd(nctemp12121,nctemp12124);
tmp=nctemp12129;
RunFree(qk->a);
RunFree(qk);
qk = tmp;
}
struct tree* nctemp12137= sp;
struct tree* nctemp12139=PtreeMvchild(nctemp12137);
p =nctemp12139;
struct tree* nctemp12144= p;
struct tree* nctemp12146=PtreeMvsister(nctemp12144);
p =nctemp12146;
struct tree* nctemp12148= p;
int nctemp12150=CodeCompstmnt(nctemp12148);
struct tree* nctemp12152= p;
struct nctempchar1 *nctemp12156;
static struct nctempchar1 nctemp12157 = {{ 4}, (char*)"}\n\0"};
nctemp12156=&nctemp12157;
nctempchar1* nctemp12154= nctemp12156;
int nctemp12158=CodeEs(nctemp12152,nctemp12154);
struct tree* nctemp12160= p;
struct nctempchar1 *nctemp12164;
static struct nctempchar1 nctemp12165 = {{ 4}, (char*)"}\n\0"};
nctemp12164=&nctemp12165;
nctempchar1* nctemp12162= nctemp12164;
int nctemp12166=CodeEs(nctemp12160,nctemp12162);
int nctemp12168= 0;
int nctemp12170=CodeSetparallel(nctemp12168);
return 1;
}
int CodeParallelstmnt (struct tree* p)
{
int nctemp12175=CodeGetarch();
int nctemp12172 = (nctemp12175 ==1);
if(nctemp12172)
{
struct tree* nctemp12178= p;
int nctemp12180=CodeParallelstmntcpu(nctemp12178);
}
else{
int nctemp12184=CodeGetarch();
int nctemp12181 = (nctemp12184 ==2);
if(nctemp12181)
{
struct tree* nctemp12187= p;
int nctemp12189=CodeParallelstmntgpu(nctemp12187);
}
else{
int nctemp12193=CodeGetarch();
int nctemp12190 = (nctemp12193 ==3);
if(nctemp12190)
{
struct tree* nctemp12196= p;
int nctemp12198=CodeParallelstmntgpu(nctemp12196);
}
}
}
return 1;
}
int CodeIfstmnt (struct tree* p)
{
nctempchar1 *cond;
struct tree* nctemp12204= p;
struct tree* nctemp12206=PtreeMvchild(nctemp12204);
p =nctemp12206;
struct tree* nctemp12212= p;
nctempchar1* nctemp12214=CodeExpr(nctemp12212);
cond=nctemp12214;
struct tree* nctemp12216= p;
struct nctempchar1 *nctemp12220;
static struct nctempchar1 nctemp12221 = {{ 4}, (char*)"if(\0"};
nctemp12220=&nctemp12221;
nctempchar1* nctemp12218= nctemp12220;
int nctemp12222=CodeEs(nctemp12216,nctemp12218);
struct tree* nctemp12224= p;
nctempchar1* nctemp12226= cond;
int nctemp12229=CodeEs(nctemp12224,nctemp12226);
struct tree* nctemp12231= p;
struct nctempchar1 *nctemp12235;
static struct nctempchar1 nctemp12236 = {{ 4}, (char*)")\n\0"};
nctemp12235=&nctemp12236;
nctempchar1* nctemp12233= nctemp12235;
int nctemp12237=CodeEs(nctemp12231,nctemp12233);
struct tree* nctemp12242= p;
struct tree* nctemp12244=PtreeMvsister(nctemp12242);
p =nctemp12244;
struct tree* nctemp12246= p;
int nctemp12248=CodeStmnt(nctemp12246);
struct tree* nctemp12256= p;
struct tree* nctemp12258=PtreeMvsister(nctemp12256);
p =nctemp12258;
int nctemp12249 = (p !=0);
if(nctemp12249)
{
struct tree* nctemp12265= p;
nctempchar1* nctemp12267=PtreeGetname(nctemp12265);
nctempchar1* nctemp12263= nctemp12267;
struct nctempchar1 *nctemp12270;
static struct nctempchar1 nctemp12271 = {{ 5}, (char*)"else\0"};
nctemp12270=&nctemp12271;
nctempchar1* nctemp12268= nctemp12270;
int nctemp12272=LibeStrcmp(nctemp12263,nctemp12268);
int nctemp12260 = (nctemp12272 ==1);
if(nctemp12260)
{
struct tree* nctemp12278= p;
struct tree* nctemp12280=PtreeMvchild(nctemp12278);
p =nctemp12280;
struct tree* nctemp12282= p;
struct nctempchar1 *nctemp12286;
static struct nctempchar1 nctemp12287 = {{ 5}, (char*)"else\0"};
nctemp12286=&nctemp12287;
nctempchar1* nctemp12284= nctemp12286;
int nctemp12288=CodeEs(nctemp12282,nctemp12284);
struct tree* nctemp12290= p;
int nctemp12292=CodeStmnt(nctemp12290);
}
}
return 1;
}
int CodeReturnstmnt (struct tree* p)
{
struct tree* np;
nctempchar1 *rval;
struct tree* nctemp12298= p;
struct tree* nctemp12300=PtreeMvchild(nctemp12298);
np =nctemp12300;
struct tree* nctemp12306= np;
nctempchar1* nctemp12308=CodeExpr(nctemp12306);
rval=nctemp12308;
struct tree* nctemp12310= np;
struct nctempchar1 *nctemp12314;
static struct nctempchar1 nctemp12315 = {{ 8}, (char*)"return \0"};
nctemp12314=&nctemp12315;
nctempchar1* nctemp12312= nctemp12314;
int nctemp12316=CodeEs(nctemp12310,nctemp12312);
struct tree* nctemp12318= np;
nctempchar1* nctemp12320= rval;
int nctemp12323=CodeEs(nctemp12318,nctemp12320);
struct tree* nctemp12325= np;
struct nctempchar1 *nctemp12329;
static struct nctempchar1 nctemp12330 = {{ 4}, (char*)";\n\0"};
nctemp12329=&nctemp12330;
nctempchar1* nctemp12327= nctemp12329;
int nctemp12331=CodeEs(nctemp12325,nctemp12327);
return 1;
}
int CodeCompstmnt (struct tree* p)
{
struct tree* sp;
struct tree* q;
struct tree* r;
sp = p;
struct tree* nctemp12334= p;
struct nctempchar1 *nctemp12338;
static struct nctempchar1 nctemp12339 = {{ 4}, (char*)"{\n\0"};
nctemp12338=&nctemp12339;
nctempchar1* nctemp12336= nctemp12338;
int nctemp12340=CodeEs(nctemp12334,nctemp12336);
struct tree* nctemp12345= p;
struct tree* nctemp12347=PtreeMvchild(nctemp12345);
p =nctemp12347;
int nctemp12348 = (p ==0);
if(nctemp12348)
{
struct tree* nctemp12353= sp;
struct nctempchar1 *nctemp12357;
static struct nctempchar1 nctemp12358 = {{ 4}, (char*)"}\n\0"};
nctemp12357=&nctemp12358;
nctempchar1* nctemp12355= nctemp12357;
int nctemp12359=CodeEs(nctemp12353,nctemp12355);
return 1;
}
struct tree* nctemp12362= p;
struct symbol* nctemp12366=SymGetltp();
struct symbol* nctemp12364= nctemp12366;
int nctemp12367=CodeDeclarations(nctemp12362,nctemp12364);
struct tree* nctemp12373= p;
nctempchar1* nctemp12375=PtreeGetname(nctemp12373);
nctempchar1* nctemp12371= nctemp12375;
struct nctempchar1 *nctemp12378;
static struct nctempchar1 nctemp12379 = {{ 13}, (char*)"declarations\0"};
nctemp12378=&nctemp12379;
nctempchar1* nctemp12376= nctemp12378;
int nctemp12380=LibeStrcmp(nctemp12371,nctemp12376);
int nctemp12368 = (nctemp12380 ==1);
if(nctemp12368)
{
struct tree* nctemp12386= p;
struct tree* nctemp12388=PtreeMvsister(nctemp12386);
p =nctemp12388;
}
int nctemp12389 = (p !=0);
int nctemp12393=nctemp12389;
while(nctemp12393)
{{
struct tree* nctemp12399= p;
nctempchar1* nctemp12401=PtreeGetname(nctemp12399);
nctempchar1* nctemp12397= nctemp12401;
struct nctempchar1 *nctemp12404;
static struct nctempchar1 nctemp12405 = {{ 5}, (char*)"expr\0"};
nctemp12404=&nctemp12405;
nctempchar1* nctemp12402= nctemp12404;
int nctemp12406=LibeStrcmp(nctemp12397,nctemp12402);
int nctemp12394 = (nctemp12406 ==1);
if(nctemp12394)
{
int nctemp12411=CodeGetbreak();
int nctemp12408 = (nctemp12411 ==1);
if(nctemp12408)
{
struct tree* nctemp12414= p;
nctempchar1* nctemp12416=CodeExpr(nctemp12414);
}
else{
struct tree* nctemp12420= p;
int nctemp12422=PtreeGetsimple(nctemp12420);
int nctemp12417 = (nctemp12422 ==1);
if(nctemp12417)
{
struct tree* nctemp12425= p;
int nctemp12427=CodeSexpr(nctemp12425);
struct tree* nctemp12429= p;
struct nctempchar1 *nctemp12433;
static struct nctempchar1 nctemp12434 = {{ 4}, (char*)";\n\0"};
nctemp12433=&nctemp12434;
nctempchar1* nctemp12431= nctemp12433;
int nctemp12435=CodeEs(nctemp12429,nctemp12431);
}
else{
struct tree* nctemp12437= p;
nctempchar1* nctemp12439=CodeExpr(nctemp12437);
}
}
}
struct tree* nctemp12445= p;
nctempchar1* nctemp12447=PtreeGetname(nctemp12445);
nctempchar1* nctemp12443= nctemp12447;
struct nctempchar1 *nctemp12450;
static struct nctempchar1 nctemp12451 = {{ 6}, (char*)"while\0"};
nctemp12450=&nctemp12451;
nctempchar1* nctemp12448= nctemp12450;
int nctemp12452=LibeStrcmp(nctemp12443,nctemp12448);
int nctemp12440 = (nctemp12452 ==1);
if(nctemp12440)
{
struct tree* nctemp12455= p;
int nctemp12457=CodeWhilestmnt(nctemp12455);
}
struct tree* nctemp12463= p;
nctempchar1* nctemp12465=PtreeGetname(nctemp12463);
nctempchar1* nctemp12461= nctemp12465;
struct nctempchar1 *nctemp12468;
static struct nctempchar1 nctemp12469 = {{ 4}, (char*)"for\0"};
nctemp12468=&nctemp12469;
nctempchar1* nctemp12466= nctemp12468;
int nctemp12470=LibeStrcmp(nctemp12461,nctemp12466);
int nctemp12458 = (nctemp12470 ==1);
if(nctemp12458)
{
struct tree* nctemp12476= p;
struct tree* nctemp12478=PtreeMvchild(nctemp12476);
q =nctemp12478;
struct tree* nctemp12483= q;
struct tree* nctemp12485=PtreeMvsister(nctemp12483);
r =nctemp12485;
struct tree* nctemp12492= q;
int nctemp12494=PtreeGetsimple(nctemp12492);
struct tree* nctemp12496= r;
int nctemp12498=PtreeGetsimple(nctemp12496);
int nctemp12489 = (nctemp12494 && nctemp12498);
struct tree* nctemp12502= r;
struct tree* nctemp12504=PtreeMvsister(nctemp12502);
struct tree* nctemp12500= nctemp12504;
int nctemp12505=PtreeGetsimple(nctemp12500);
int nctemp12486 = (nctemp12489 && nctemp12505);
if(nctemp12486)
{
struct tree* nctemp12507= p;
int nctemp12509=CodeSforstmnt(nctemp12507);
}
else{
struct tree* nctemp12511= q;
int nctemp12513= 0;
int nctemp12515=PtreeSetsimple(nctemp12511,nctemp12513);
struct tree* nctemp12517= r;
int nctemp12519= 0;
int nctemp12521=PtreeSetsimple(nctemp12517,nctemp12519);
struct tree* nctemp12525= r;
struct tree* nctemp12527=PtreeMvsister(nctemp12525);
struct tree* nctemp12523= nctemp12527;
int nctemp12528= 0;
int nctemp12530=PtreeSetsimple(nctemp12523,nctemp12528);
struct tree* nctemp12532= p;
int nctemp12534=CodeForstmnt(nctemp12532);
}
}
struct tree* nctemp12540= p;
nctempchar1* nctemp12542=PtreeGetname(nctemp12540);
nctempchar1* nctemp12538= nctemp12542;
struct nctempchar1 *nctemp12545;
static struct nctempchar1 nctemp12546 = {{ 9}, (char*)"parallel\0"};
nctemp12545=&nctemp12546;
nctempchar1* nctemp12543= nctemp12545;
int nctemp12547=LibeStrcmp(nctemp12538,nctemp12543);
int nctemp12535 = (nctemp12547 ==1);
if(nctemp12535)
{
struct tree* nctemp12550= p;
int nctemp12552=CodeParallelstmnt(nctemp12550);
}
struct tree* nctemp12558= p;
nctempchar1* nctemp12560=PtreeGetname(nctemp12558);
nctempchar1* nctemp12556= nctemp12560;
struct nctempchar1 *nctemp12563;
static struct nctempchar1 nctemp12564 = {{ 3}, (char*)"if\0"};
nctemp12563=&nctemp12564;
nctempchar1* nctemp12561= nctemp12563;
int nctemp12565=LibeStrcmp(nctemp12556,nctemp12561);
int nctemp12553 = (nctemp12565 ==1);
if(nctemp12553)
{
struct tree* nctemp12568= p;
int nctemp12570=CodeIfstmnt(nctemp12568);
}
struct tree* nctemp12576= p;
nctempchar1* nctemp12578=PtreeGetname(nctemp12576);
nctempchar1* nctemp12574= nctemp12578;
struct nctempchar1 *nctemp12581;
static struct nctempchar1 nctemp12582 = {{ 7}, (char*)"return\0"};
nctemp12581=&nctemp12582;
nctempchar1* nctemp12579= nctemp12581;
int nctemp12583=LibeStrcmp(nctemp12574,nctemp12579);
int nctemp12571 = (nctemp12583 ==1);
if(nctemp12571)
{
struct tree* nctemp12586= p;
int nctemp12588=CodeReturnstmnt(nctemp12586);
}
struct tree* nctemp12593= p;
struct tree* nctemp12595=PtreeMvsister(nctemp12593);
p =nctemp12595;
}
int nctemp12596 = (p !=0);
nctemp12393=nctemp12596;}struct tree* nctemp12601= sp;
struct nctempchar1 *nctemp12605;
static struct nctempchar1 nctemp12606 = {{ 4}, (char*)"}\n\0"};
nctemp12605=&nctemp12606;
nctempchar1* nctemp12603= nctemp12605;
int nctemp12607=CodeEs(nctemp12601,nctemp12603);
return 1;
}
int CodeStmnt (struct tree* p)
{
struct tree* sp;
struct tree* q;
struct tree* r;
sp = p;
struct tree* nctemp12610= p;
struct nctempchar1 *nctemp12614;
static struct nctempchar1 nctemp12615 = {{ 4}, (char*)"{\n\0"};
nctemp12614=&nctemp12615;
nctempchar1* nctemp12612= nctemp12614;
int nctemp12616=CodeEs(nctemp12610,nctemp12612);
struct tree* nctemp12622= p;
nctempchar1* nctemp12624=PtreeGetname(nctemp12622);
nctempchar1* nctemp12620= nctemp12624;
struct nctempchar1 *nctemp12627;
static struct nctempchar1 nctemp12628 = {{ 10}, (char*)"compstmnt\0"};
nctemp12627=&nctemp12628;
nctempchar1* nctemp12625= nctemp12627;
int nctemp12629=LibeStrcmp(nctemp12620,nctemp12625);
int nctemp12617 = (nctemp12629 ==1);
if(nctemp12617)
{
struct tree* nctemp12635= p;
struct tree* nctemp12637=PtreeMvchild(nctemp12635);
p =nctemp12637;
struct tree* nctemp12639= p;
struct symbol* nctemp12643=SymGetltp();
struct symbol* nctemp12641= nctemp12643;
int nctemp12644=CodeDeclarations(nctemp12639,nctemp12641);
struct tree* nctemp12650= p;
nctempchar1* nctemp12652=PtreeGetname(nctemp12650);
nctempchar1* nctemp12648= nctemp12652;
struct nctempchar1 *nctemp12655;
static struct nctempchar1 nctemp12656 = {{ 13}, (char*)"declarations\0"};
nctemp12655=&nctemp12656;
nctempchar1* nctemp12653= nctemp12655;
int nctemp12657=LibeStrcmp(nctemp12648,nctemp12653);
int nctemp12645 = (nctemp12657 ==1);
if(nctemp12645)
{
struct tree* nctemp12663= p;
struct tree* nctemp12665=PtreeMvsister(nctemp12663);
p =nctemp12665;
}
}
int nctemp12666 = (p !=0);
int nctemp12670=nctemp12666;
while(nctemp12670)
{{
struct tree* nctemp12676= p;
nctempchar1* nctemp12678=PtreeGetname(nctemp12676);
nctempchar1* nctemp12674= nctemp12678;
struct nctempchar1 *nctemp12681;
static struct nctempchar1 nctemp12682 = {{ 10}, (char*)"compstmnt\0"};
nctemp12681=&nctemp12682;
nctempchar1* nctemp12679= nctemp12681;
int nctemp12683=LibeStrcmp(nctemp12674,nctemp12679);
int nctemp12671 = (nctemp12683 ==1);
if(nctemp12671)
{
struct tree* nctemp12686= p;
int nctemp12688=CodeCompstmnt(nctemp12686);
}
struct tree* nctemp12694= p;
nctempchar1* nctemp12696=PtreeGetname(nctemp12694);
nctempchar1* nctemp12692= nctemp12696;
struct nctempchar1 *nctemp12699;
static struct nctempchar1 nctemp12700 = {{ 5}, (char*)"expr\0"};
nctemp12699=&nctemp12700;
nctempchar1* nctemp12697= nctemp12699;
int nctemp12701=LibeStrcmp(nctemp12692,nctemp12697);
int nctemp12689 = (nctemp12701 ==1);
if(nctemp12689)
{
int nctemp12706=CodeGetbreak();
int nctemp12703 = (nctemp12706 ==1);
if(nctemp12703)
{
struct tree* nctemp12709= p;
nctempchar1* nctemp12711=CodeExpr(nctemp12709);
}
else{
struct tree* nctemp12715= p;
int nctemp12717=PtreeGetsimple(nctemp12715);
int nctemp12712 = (nctemp12717 ==1);
if(nctemp12712)
{
struct tree* nctemp12720= p;
int nctemp12722=CodeSexpr(nctemp12720);
struct tree* nctemp12724= p;
struct nctempchar1 *nctemp12728;
static struct nctempchar1 nctemp12729 = {{ 4}, (char*)";\n\0"};
nctemp12728=&nctemp12729;
nctempchar1* nctemp12726= nctemp12728;
int nctemp12730=CodeEs(nctemp12724,nctemp12726);
}
else{
struct tree* nctemp12732= p;
nctempchar1* nctemp12734=CodeExpr(nctemp12732);
}
}
}
struct tree* nctemp12740= p;
nctempchar1* nctemp12742=PtreeGetname(nctemp12740);
nctempchar1* nctemp12738= nctemp12742;
struct nctempchar1 *nctemp12745;
static struct nctempchar1 nctemp12746 = {{ 6}, (char*)"while\0"};
nctemp12745=&nctemp12746;
nctempchar1* nctemp12743= nctemp12745;
int nctemp12747=LibeStrcmp(nctemp12738,nctemp12743);
int nctemp12735 = (nctemp12747 ==1);
if(nctemp12735)
{
struct tree* nctemp12750= p;
int nctemp12752=CodeWhilestmnt(nctemp12750);
}
struct tree* nctemp12758= p;
nctempchar1* nctemp12760=PtreeGetname(nctemp12758);
nctempchar1* nctemp12756= nctemp12760;
struct nctempchar1 *nctemp12763;
static struct nctempchar1 nctemp12764 = {{ 4}, (char*)"for\0"};
nctemp12763=&nctemp12764;
nctempchar1* nctemp12761= nctemp12763;
int nctemp12765=LibeStrcmp(nctemp12756,nctemp12761);
int nctemp12753 = (nctemp12765 ==1);
if(nctemp12753)
{
struct tree* nctemp12771= p;
struct tree* nctemp12773=PtreeMvchild(nctemp12771);
q =nctemp12773;
struct tree* nctemp12778= q;
struct tree* nctemp12780=PtreeMvsister(nctemp12778);
r =nctemp12780;
struct tree* nctemp12787= q;
int nctemp12789=PtreeGetsimple(nctemp12787);
struct tree* nctemp12791= r;
int nctemp12793=PtreeGetsimple(nctemp12791);
int nctemp12784 = (nctemp12789 && nctemp12793);
struct tree* nctemp12797= r;
struct tree* nctemp12799=PtreeMvsister(nctemp12797);
struct tree* nctemp12795= nctemp12799;
int nctemp12800=PtreeGetsimple(nctemp12795);
int nctemp12781 = (nctemp12784 && nctemp12800);
if(nctemp12781)
{
struct tree* nctemp12802= p;
int nctemp12804=CodeSforstmnt(nctemp12802);
}
else{
struct tree* nctemp12806= q;
int nctemp12808= 0;
int nctemp12810=PtreeSetsimple(nctemp12806,nctemp12808);
struct tree* nctemp12812= r;
int nctemp12814= 0;
int nctemp12816=PtreeSetsimple(nctemp12812,nctemp12814);
struct tree* nctemp12820= r;
struct tree* nctemp12822=PtreeMvsister(nctemp12820);
struct tree* nctemp12818= nctemp12822;
int nctemp12823= 0;
int nctemp12825=PtreeSetsimple(nctemp12818,nctemp12823);
struct tree* nctemp12827= p;
int nctemp12829=CodeForstmnt(nctemp12827);
}
}
struct tree* nctemp12835= p;
nctempchar1* nctemp12837=PtreeGetname(nctemp12835);
nctempchar1* nctemp12833= nctemp12837;
struct nctempchar1 *nctemp12840;
static struct nctempchar1 nctemp12841 = {{ 9}, (char*)"parallel\0"};
nctemp12840=&nctemp12841;
nctempchar1* nctemp12838= nctemp12840;
int nctemp12842=LibeStrcmp(nctemp12833,nctemp12838);
int nctemp12830 = (nctemp12842 ==1);
if(nctemp12830)
{
struct tree* nctemp12845= p;
int nctemp12847=CodeParallelstmnt(nctemp12845);
}
struct tree* nctemp12853= p;
nctempchar1* nctemp12855=PtreeGetname(nctemp12853);
nctempchar1* nctemp12851= nctemp12855;
struct nctempchar1 *nctemp12858;
static struct nctempchar1 nctemp12859 = {{ 3}, (char*)"if\0"};
nctemp12858=&nctemp12859;
nctempchar1* nctemp12856= nctemp12858;
int nctemp12860=LibeStrcmp(nctemp12851,nctemp12856);
int nctemp12848 = (nctemp12860 ==1);
if(nctemp12848)
{
struct tree* nctemp12863= p;
int nctemp12865=CodeIfstmnt(nctemp12863);
}
struct tree* nctemp12871= p;
nctempchar1* nctemp12873=PtreeGetname(nctemp12871);
nctempchar1* nctemp12869= nctemp12873;
struct nctempchar1 *nctemp12876;
static struct nctempchar1 nctemp12877 = {{ 7}, (char*)"return\0"};
nctemp12876=&nctemp12877;
nctempchar1* nctemp12874= nctemp12876;
int nctemp12878=LibeStrcmp(nctemp12869,nctemp12874);
int nctemp12866 = (nctemp12878 ==1);
if(nctemp12866)
{
struct tree* nctemp12881= p;
int nctemp12883=CodeReturnstmnt(nctemp12881);
}
struct tree* nctemp12888= p;
struct tree* nctemp12890=PtreeMvsister(nctemp12888);
p =nctemp12890;
}
int nctemp12891 = (p !=0);
nctemp12670=nctemp12891;}struct tree* nctemp12896= sp;
struct nctempchar1 *nctemp12900;
static struct nctempchar1 nctemp12901 = {{ 4}, (char*)"}\n\0"};
nctemp12900=&nctemp12901;
nctempchar1* nctemp12898= nctemp12900;
int nctemp12902=CodeEs(nctemp12896,nctemp12898);
return 1;
}
int CodeNewdescr (struct tree* p,nctempchar1 *pointer)
{
struct tree* nctemp12905= p;
nctempchar1* nctemp12907= pointer;
int nctemp12910=CodeEs(nctemp12905,nctemp12907);
struct tree* nctemp12912= p;
struct nctempchar1 *nctemp12916;
static struct nctempchar1 nctemp12917 = {{ 2}, (char*)"=\0"};
nctemp12916=&nctemp12917;
nctempchar1* nctemp12914= nctemp12916;
int nctemp12918=CodeEs(nctemp12912,nctemp12914);
struct tree* nctemp12920= p;
struct nctempchar1 *nctemp12924;
static struct nctempchar1 nctemp12925 = {{ 11}, (char*)"RunMalloc(\0"};
nctemp12924=&nctemp12925;
nctempchar1* nctemp12922= nctemp12924;
int nctemp12926=CodeEs(nctemp12920,nctemp12922);
struct tree* nctemp12928= p;
struct nctempchar1 *nctemp12932;
static struct nctempchar1 nctemp12933 = {{ 8}, (char*)"sizeof(\0"};
nctemp12932=&nctemp12933;
nctempchar1* nctemp12930= nctemp12932;
int nctemp12934=CodeEs(nctemp12928,nctemp12930);
struct tree* nctemp12936= p;
nctempchar1* nctemp12938= pointer;
int nctemp12941=CodeEs(nctemp12936,nctemp12938);
struct tree* nctemp12943= p;
struct nctempchar1 *nctemp12947;
static struct nctempchar1 nctemp12948 = {{ 6}, (char*)"));\n\0"};
nctemp12947=&nctemp12948;
nctempchar1* nctemp12945= nctemp12947;
int nctemp12949=CodeEs(nctemp12943,nctemp12945);
return 1;
}
int CodeFdef (struct tree* p)
{
int nctemp12954=CodeGetarch();
int nctemp12951 = (nctemp12954 ==1);
if(nctemp12951)
{
struct tree* nctemp12957= p;
int nctemp12959=CodeFdefcpu(nctemp12957);
}
else{
int nctemp12963=CodeGetarch();
int nctemp12960 = (nctemp12963 ==2);
if(nctemp12960)
{
struct tree* nctemp12972= p;
struct tree* nctemp12974=PtreeMvchild(nctemp12972);
struct tree* nctemp12970= nctemp12974;
nctempchar1* nctemp12975=PtreeGetparallel(nctemp12970);
nctempchar1* nctemp12968= nctemp12975;
struct nctempchar1 *nctemp12978;
static struct nctempchar1 nctemp12979 = {{ 9}, (char*)"parallel\0"};
nctemp12978=&nctemp12979;
nctempchar1* nctemp12976= nctemp12978;
int nctemp12980=LibeStrcmp(nctemp12968,nctemp12976);
int nctemp12965 = (nctemp12980 ==1);
if(nctemp12965)
{
struct tree* nctemp12983= p;
int nctemp12985=CodeFdefgpu(nctemp12983);
struct tree* nctemp12987= p;
int nctemp12989=CodeFdewrappergpu(nctemp12987);
}
else{
struct tree* nctemp12991= p;
int nctemp12993=CodeFdefcpu(nctemp12991);
}
}
else{
int nctemp12997=CodeGetarch();
int nctemp12994 = (nctemp12997 ==3);
if(nctemp12994)
{
struct tree* nctemp13004= p;
nctempchar1* nctemp13006=PtreeGetparallel(nctemp13004);
nctempchar1* nctemp13002= nctemp13006;
struct nctempchar1 *nctemp13009;
static struct nctempchar1 nctemp13010 = {{ 9}, (char*)"parallel\0"};
nctemp13009=&nctemp13010;
nctempchar1* nctemp13007= nctemp13009;
int nctemp13011=LibeStrcmp(nctemp13002,nctemp13007);
int nctemp12999 = (nctemp13011 ==1);
if(nctemp12999)
{
struct tree* nctemp13014= p;
int nctemp13016=CodeFdefgpu(nctemp13014);
struct tree* nctemp13018= p;
int nctemp13020=CodeFdewrappergpu(nctemp13018);
}
else{
struct tree* nctemp13022= p;
int nctemp13024=CodeFdefcpu(nctemp13022);
}
}
}
}
return 1;
}
int CodePreamblecpu ()
{
struct tree* p;
struct nctempchar1 *nctemp13032;
static struct nctempchar1 nctemp13033 = {{ 6}, (char*)"dummy\0"};
nctemp13032=&nctemp13033;
nctempchar1* nctemp13030= nctemp13032;
struct nctempchar1 *nctemp13036;
static struct nctempchar1 nctemp13037 = {{ 6}, (char*)"dummy\0"};
nctemp13036=&nctemp13037;
nctempchar1* nctemp13034= nctemp13036;
struct tree* nctemp13038=PtreeMknode(nctemp13030,nctemp13034);
p =nctemp13038;
struct tree* nctemp13040= p;
int nctemp13042= 1;
int nctemp13044=PtreeSetline(nctemp13040,nctemp13042);
struct tree* nctemp13046= p;
struct nctempchar1 *nctemp13050;
static struct nctempchar1 nctemp13051 = {{ 42}, (char*)"//  Translated by epsc  version today  \n\0"};
nctemp13050=&nctemp13051;
nctempchar1* nctemp13048= nctemp13050;
int nctemp13052=CodeEs(nctemp13046,nctemp13048);
struct tree* nctemp13054= p;
int nctemp13056= 2;
int nctemp13058=PtreeSetline(nctemp13054,nctemp13056);
struct tree* nctemp13060= p;
int nctemp13062= 3;
int nctemp13064=PtreeSetline(nctemp13060,nctemp13062);
struct tree* nctemp13066= p;
int nctemp13068= 4;
int nctemp13070=PtreeSetline(nctemp13066,nctemp13068);
struct tree* nctemp13072= p;
struct nctempchar1 *nctemp13076;
static struct nctempchar1 nctemp13077 = {{ 22}, (char*)"#include <stddef.h>\n\0"};
nctemp13076=&nctemp13077;
nctempchar1* nctemp13074= nctemp13076;
int nctemp13078=CodeEs(nctemp13072,nctemp13074);
struct tree* nctemp13080= p;
struct nctempchar1 *nctemp13084;
static struct nctempchar1 nctemp13085 = {{ 21}, (char*)"#include <stdio.h>\n\0"};
nctemp13084=&nctemp13085;
nctempchar1* nctemp13082= nctemp13084;
int nctemp13086=CodeEs(nctemp13080,nctemp13082);
struct tree* nctemp13088= p;
struct nctempchar1 *nctemp13092;
static struct nctempchar1 nctemp13093 = {{ 22}, (char*)"#include <assert.h>\n\0"};
nctemp13092=&nctemp13093;
nctempchar1* nctemp13090= nctemp13092;
int nctemp13094=CodeEs(nctemp13088,nctemp13090);
struct tree* nctemp13096= p;
struct nctempchar1 *nctemp13100;
static struct nctempchar1 nctemp13101 = {{ 48}, (char*)"typedef struct { float r; float i;} complex; \n\0"};
nctemp13100=&nctemp13101;
nctempchar1* nctemp13098= nctemp13100;
int nctemp13102=CodeEs(nctemp13096,nctemp13098);
struct tree* nctemp13104= p;
int nctemp13106= 3;
int nctemp13108=PtreeSetline(nctemp13104,nctemp13106);
struct tree* nctemp13110= p;
struct nctempchar1 *nctemp13114;
static struct nctempchar1 nctemp13115 = {{ 68}, (char*)"typedef struct nctempfloat1 { int d[1]; float *a;} nctempfloat1; \n\0"};
nctemp13114=&nctemp13115;
nctempchar1* nctemp13112= nctemp13114;
int nctemp13116=CodeEs(nctemp13110,nctemp13112);
struct tree* nctemp13118= p;
int nctemp13120= 5;
int nctemp13122=PtreeSetline(nctemp13118,nctemp13120);
struct tree* nctemp13124= p;
struct nctempchar1 *nctemp13128;
static struct nctempchar1 nctemp13129 = {{ 62}, (char*)"typedef struct nctempint1 { int d[1]; int *a;} nctempint1; \n\0"};
nctemp13128=&nctemp13129;
nctempchar1* nctemp13126= nctemp13128;
int nctemp13130=CodeEs(nctemp13124,nctemp13126);
struct tree* nctemp13132= p;
int nctemp13134= 7;
int nctemp13136=PtreeSetline(nctemp13132,nctemp13134);
struct tree* nctemp13138= p;
struct nctempchar1 *nctemp13142;
static struct nctempchar1 nctemp13143 = {{ 65}, (char*)"typedef struct nctempchar1 { int d[1]; char *a;} nctempchar1; \n\0"};
nctemp13142=&nctemp13143;
nctempchar1* nctemp13140= nctemp13142;
int nctemp13144=CodeEs(nctemp13138,nctemp13140);
struct tree* nctemp13146= p;
int nctemp13148= 7;
int nctemp13150=PtreeSetline(nctemp13146,nctemp13148);
struct tree* nctemp13152= p;
struct nctempchar1 *nctemp13156;
static struct nctempchar1 nctemp13157 = {{ 74}, (char*)"typedef struct nctempcomplex1 { int d[1]; complex *a;} nctempcomplex1; \n\0"};
nctemp13156=&nctemp13157;
nctempchar1* nctemp13154= nctemp13156;
int nctemp13158=CodeEs(nctemp13152,nctemp13154);
struct tree* nctemp13160= p;
int nctemp13162= 8;
int nctemp13164=PtreeSetline(nctemp13160,nctemp13162);
int nctemp13168=CodeArraycheck();
int nctemp13165 = (nctemp13168 ==1);
if(nctemp13165)
{
struct tree* nctemp13171= p;
struct nctempchar1 *nctemp13175;
static struct nctempchar1 nctemp13176 = {{ 55}, (char*)"static struct nctempchar1 nctempstringx = {0, NULL};\n\0"};
nctemp13175=&nctemp13176;
nctempchar1* nctemp13173= nctemp13175;
int nctemp13177=CodeEs(nctemp13171,nctemp13173);
struct tree* nctemp13179= p;
struct nctempchar1 *nctemp13183;
static struct nctempchar1 nctemp13184 = {{ 60}, (char*)"static struct nctempchar1 *nctempstring = &nctempstringx;\n\0"};
nctemp13183=&nctemp13184;
nctempchar1* nctemp13181= nctemp13183;
int nctemp13185=CodeEs(nctemp13179,nctemp13181);
struct tree* nctemp13187= p;
int nctemp13189= 8;
int nctemp13191=PtreeSetline(nctemp13187,nctemp13189);
}
struct tree* nctemp13193= p;
struct nctempchar1 *nctemp13197;
static struct nctempchar1 nctemp13198 = {{ 68}, (char*)"typedef struct nctempfloat2 { int d[2]; float *a;} nctempfloat2; \n\0"};
nctemp13197=&nctemp13198;
nctempchar1* nctemp13195= nctemp13197;
int nctemp13199=CodeEs(nctemp13193,nctemp13195);
struct tree* nctemp13201= p;
int nctemp13203= 10;
int nctemp13205=PtreeSetline(nctemp13201,nctemp13203);
struct tree* nctemp13207= p;
struct nctempchar1 *nctemp13211;
static struct nctempchar1 nctemp13212 = {{ 62}, (char*)"typedef struct nctempint2 { int d[2]; int *a;} nctempint2; \n\0"};
nctemp13211=&nctemp13212;
nctempchar1* nctemp13209= nctemp13211;
int nctemp13213=CodeEs(nctemp13207,nctemp13209);
struct tree* nctemp13215= p;
int nctemp13217= 10;
int nctemp13219=PtreeSetline(nctemp13215,nctemp13217);
struct tree* nctemp13221= p;
struct nctempchar1 *nctemp13225;
static struct nctempchar1 nctemp13226 = {{ 65}, (char*)"typedef struct nctempchar2 { int d[2]; char *a;} nctempchar2; \n\0"};
nctemp13225=&nctemp13226;
nctempchar1* nctemp13223= nctemp13225;
int nctemp13227=CodeEs(nctemp13221,nctemp13223);
struct tree* nctemp13229= p;
int nctemp13231= 12;
int nctemp13233=PtreeSetline(nctemp13229,nctemp13231);
struct tree* nctemp13235= p;
struct nctempchar1 *nctemp13239;
static struct nctempchar1 nctemp13240 = {{ 74}, (char*)"typedef struct nctempcomplex2 { int d[2]; complex *a;} nctempcomplex2; \n\0"};
nctemp13239=&nctemp13240;
nctempchar1* nctemp13237= nctemp13239;
int nctemp13241=CodeEs(nctemp13235,nctemp13237);
struct tree* nctemp13243= p;
int nctemp13245= 13;
int nctemp13247=PtreeSetline(nctemp13243,nctemp13245);
struct tree* nctemp13249= p;
struct nctempchar1 *nctemp13253;
static struct nctempchar1 nctemp13254 = {{ 68}, (char*)"typedef struct nctempfloat3 { int d[3]; float *a;} nctempfloat3; \n\0"};
nctemp13253=&nctemp13254;
nctempchar1* nctemp13251= nctemp13253;
int nctemp13255=CodeEs(nctemp13249,nctemp13251);
struct tree* nctemp13257= p;
int nctemp13259= 14;
int nctemp13261=PtreeSetline(nctemp13257,nctemp13259);
struct tree* nctemp13263= p;
struct nctempchar1 *nctemp13267;
static struct nctempchar1 nctemp13268 = {{ 62}, (char*)"typedef struct nctempint3 { int d[3]; int *a;} nctempint3; \n\0"};
nctemp13267=&nctemp13268;
nctempchar1* nctemp13265= nctemp13267;
int nctemp13269=CodeEs(nctemp13263,nctemp13265);
struct tree* nctemp13271= p;
int nctemp13273= 15;
int nctemp13275=PtreeSetline(nctemp13271,nctemp13273);
struct tree* nctemp13277= p;
struct nctempchar1 *nctemp13281;
static struct nctempchar1 nctemp13282 = {{ 65}, (char*)"typedef struct nctempchar3 { int d[3]; char *a;} nctempchar3; \n\0"};
nctemp13281=&nctemp13282;
nctempchar1* nctemp13279= nctemp13281;
int nctemp13283=CodeEs(nctemp13277,nctemp13279);
struct tree* nctemp13285= p;
int nctemp13287= 16;
int nctemp13289=PtreeSetline(nctemp13285,nctemp13287);
struct tree* nctemp13291= p;
struct nctempchar1 *nctemp13295;
static struct nctempchar1 nctemp13296 = {{ 74}, (char*)"typedef struct nctempcomplex3 { int d[3]; complex *a;} nctempcomplex3; \n\0"};
nctemp13295=&nctemp13296;
nctempchar1* nctemp13293= nctemp13295;
int nctemp13297=CodeEs(nctemp13291,nctemp13293);
struct tree* nctemp13299= p;
int nctemp13301= 17;
int nctemp13303=PtreeSetline(nctemp13299,nctemp13301);
struct tree* nctemp13305= p;
struct nctempchar1 *nctemp13309;
static struct nctempchar1 nctemp13310 = {{ 68}, (char*)"typedef struct nctempfloat4 { int d[4]; float *a;} nctempfloat4; \n\0"};
nctemp13309=&nctemp13310;
nctempchar1* nctemp13307= nctemp13309;
int nctemp13311=CodeEs(nctemp13305,nctemp13307);
struct tree* nctemp13313= p;
int nctemp13315= 18;
int nctemp13317=PtreeSetline(nctemp13313,nctemp13315);
struct tree* nctemp13319= p;
struct nctempchar1 *nctemp13323;
static struct nctempchar1 nctemp13324 = {{ 62}, (char*)"typedef struct nctempint4 { int d[4]; int *a;} nctempint4; \n\0"};
nctemp13323=&nctemp13324;
nctempchar1* nctemp13321= nctemp13323;
int nctemp13325=CodeEs(nctemp13319,nctemp13321);
struct tree* nctemp13327= p;
int nctemp13329= 19;
int nctemp13331=PtreeSetline(nctemp13327,nctemp13329);
struct tree* nctemp13333= p;
struct nctempchar1 *nctemp13337;
static struct nctempchar1 nctemp13338 = {{ 65}, (char*)"typedef struct nctempchar4 { int d[4]; char *a;} nctempchar4; \n\0"};
nctemp13337=&nctemp13338;
nctempchar1* nctemp13335= nctemp13337;
int nctemp13339=CodeEs(nctemp13333,nctemp13335);
struct tree* nctemp13341= p;
int nctemp13343= 20;
int nctemp13345=PtreeSetline(nctemp13341,nctemp13343);
struct tree* nctemp13347= p;
struct nctempchar1 *nctemp13351;
static struct nctempchar1 nctemp13352 = {{ 74}, (char*)"typedef struct nctempcomplex4 { int d[4]; complex *a;} nctempcomplex4; \n\0"};
nctemp13351=&nctemp13352;
nctempchar1* nctemp13349= nctemp13351;
int nctemp13353=CodeEs(nctemp13347,nctemp13349);
struct tree* nctemp13355= p;
struct nctempchar1 *nctemp13359;
static struct nctempchar1 nctemp13360 = {{ 22}, (char*)"#include <stdlib.h>\n\0"};
nctemp13359=&nctemp13360;
nctempchar1* nctemp13357= nctemp13359;
int nctemp13361=CodeEs(nctemp13355,nctemp13357);
struct tree* nctemp13363= p;
struct nctempchar1 *nctemp13367;
static struct nctempchar1 nctemp13368 = {{ 22}, (char*)"#include <string.h>\n\0"};
nctemp13367=&nctemp13368;
nctempchar1* nctemp13365= nctemp13367;
int nctemp13369=CodeEs(nctemp13363,nctemp13365);
struct tree* nctemp13371= p;
struct nctempchar1 *nctemp13375;
static struct nctempchar1 nctemp13376 = {{ 27}, (char*)"void *RunMalloc(int n); \n\0"};
nctemp13375=&nctemp13376;
nctempchar1* nctemp13373= nctemp13375;
int nctemp13377=CodeEs(nctemp13371,nctemp13373);
struct tree* nctemp13379= p;
struct nctempchar1 *nctemp13383;
static struct nctempchar1 nctemp13384 = {{ 25}, (char*)"int RunFree(void *n); \n\0"};
nctemp13383=&nctemp13384;
nctempchar1* nctemp13381= nctemp13383;
int nctemp13385=CodeEs(nctemp13379,nctemp13381);
return 1;
}
int CodePreamblecuda ()
{
struct tree* p;
struct nctempchar1 *nctemp13393;
static struct nctempchar1 nctemp13394 = {{ 6}, (char*)"dummy\0"};
nctemp13393=&nctemp13394;
nctempchar1* nctemp13391= nctemp13393;
struct nctempchar1 *nctemp13397;
static struct nctempchar1 nctemp13398 = {{ 6}, (char*)"dummy\0"};
nctemp13397=&nctemp13398;
nctempchar1* nctemp13395= nctemp13397;
struct tree* nctemp13399=PtreeMknode(nctemp13391,nctemp13395);
p =nctemp13399;
struct tree* nctemp13401= p;
int nctemp13403= 1;
int nctemp13405=PtreeSetline(nctemp13401,nctemp13403);
struct tree* nctemp13407= p;
struct nctempchar1 *nctemp13411;
static struct nctempchar1 nctemp13412 = {{ 50}, (char*)"//  Translated by epsc  version December 2021  \n\0"};
nctemp13411=&nctemp13412;
nctempchar1* nctemp13409= nctemp13411;
int nctemp13413=CodeEs(nctemp13407,nctemp13409);
struct tree* nctemp13415= p;
int nctemp13417= 2;
int nctemp13419=PtreeSetline(nctemp13415,nctemp13417);
struct tree* nctemp13421= p;
int nctemp13423= 3;
int nctemp13425=PtreeSetline(nctemp13421,nctemp13423);
struct tree* nctemp13427= p;
struct nctempchar1 *nctemp13431;
static struct nctempchar1 nctemp13432 = {{ 17}, (char*)"extern \"C\" {\n\0"};
nctemp13431=&nctemp13432;
nctempchar1* nctemp13429= nctemp13431;
int nctemp13433=CodeEs(nctemp13427,nctemp13429);
struct tree* nctemp13435= p;
struct nctempchar1 *nctemp13439;
static struct nctempchar1 nctemp13440 = {{ 48}, (char*)"typedef struct { float r; float i;} complex; \n\0"};
nctemp13439=&nctemp13440;
nctempchar1* nctemp13437= nctemp13439;
int nctemp13441=CodeEs(nctemp13435,nctemp13437);
struct tree* nctemp13443= p;
int nctemp13445= 3;
int nctemp13447=PtreeSetline(nctemp13443,nctemp13445);
struct tree* nctemp13449= p;
struct nctempchar1 *nctemp13453;
static struct nctempchar1 nctemp13454 = {{ 68}, (char*)"typedef struct nctempfloat1 { int d[1]; float *a;} nctempfloat1; \n\0"};
nctemp13453=&nctemp13454;
nctempchar1* nctemp13451= nctemp13453;
int nctemp13455=CodeEs(nctemp13449,nctemp13451);
struct tree* nctemp13457= p;
int nctemp13459= 5;
int nctemp13461=PtreeSetline(nctemp13457,nctemp13459);
struct tree* nctemp13463= p;
struct nctempchar1 *nctemp13467;
static struct nctempchar1 nctemp13468 = {{ 62}, (char*)"typedef struct nctempint1 { int d[1]; int *a;} nctempint1; \n\0"};
nctemp13467=&nctemp13468;
nctempchar1* nctemp13465= nctemp13467;
int nctemp13469=CodeEs(nctemp13463,nctemp13465);
struct tree* nctemp13471= p;
int nctemp13473= 7;
int nctemp13475=PtreeSetline(nctemp13471,nctemp13473);
struct tree* nctemp13477= p;
struct nctempchar1 *nctemp13481;
static struct nctempchar1 nctemp13482 = {{ 65}, (char*)"typedef struct nctempchar1 { int d[1]; char *a;} nctempchar1; \n\0"};
nctemp13481=&nctemp13482;
nctempchar1* nctemp13479= nctemp13481;
int nctemp13483=CodeEs(nctemp13477,nctemp13479);
struct tree* nctemp13485= p;
int nctemp13487= 7;
int nctemp13489=PtreeSetline(nctemp13485,nctemp13487);
struct tree* nctemp13491= p;
struct nctempchar1 *nctemp13495;
static struct nctempchar1 nctemp13496 = {{ 74}, (char*)"typedef struct nctempcomplex1 { int d[1]; complex *a;} nctempcomplex1; \n\0"};
nctemp13495=&nctemp13496;
nctempchar1* nctemp13493= nctemp13495;
int nctemp13497=CodeEs(nctemp13491,nctemp13493);
struct tree* nctemp13499= p;
int nctemp13501= 8;
int nctemp13503=PtreeSetline(nctemp13499,nctemp13501);
int nctemp13507=CodeArraycheck();
int nctemp13504 = (nctemp13507 ==1);
if(nctemp13504)
{
struct tree* nctemp13510= p;
struct nctempchar1 *nctemp13514;
static struct nctempchar1 nctemp13515 = {{ 55}, (char*)"static struct nctempchar1 nctempstringx = {0, NULL};\n\0"};
nctemp13514=&nctemp13515;
nctempchar1* nctemp13512= nctemp13514;
int nctemp13516=CodeEs(nctemp13510,nctemp13512);
struct tree* nctemp13518= p;
struct nctempchar1 *nctemp13522;
static struct nctempchar1 nctemp13523 = {{ 60}, (char*)"static struct nctempchar1 *nctempstring = &nctempstringx;\n\0"};
nctemp13522=&nctemp13523;
nctempchar1* nctemp13520= nctemp13522;
int nctemp13524=CodeEs(nctemp13518,nctemp13520);
struct tree* nctemp13526= p;
int nctemp13528= 8;
int nctemp13530=PtreeSetline(nctemp13526,nctemp13528);
}
struct tree* nctemp13532= p;
struct nctempchar1 *nctemp13536;
static struct nctempchar1 nctemp13537 = {{ 68}, (char*)"typedef struct nctempfloat2 { int d[2]; float *a;} nctempfloat2; \n\0"};
nctemp13536=&nctemp13537;
nctempchar1* nctemp13534= nctemp13536;
int nctemp13538=CodeEs(nctemp13532,nctemp13534);
struct tree* nctemp13540= p;
int nctemp13542= 10;
int nctemp13544=PtreeSetline(nctemp13540,nctemp13542);
struct tree* nctemp13546= p;
struct nctempchar1 *nctemp13550;
static struct nctempchar1 nctemp13551 = {{ 62}, (char*)"typedef struct nctempint2 { int d[2]; int *a;} nctempint2; \n\0"};
nctemp13550=&nctemp13551;
nctempchar1* nctemp13548= nctemp13550;
int nctemp13552=CodeEs(nctemp13546,nctemp13548);
struct tree* nctemp13554= p;
int nctemp13556= 10;
int nctemp13558=PtreeSetline(nctemp13554,nctemp13556);
struct tree* nctemp13560= p;
struct nctempchar1 *nctemp13564;
static struct nctempchar1 nctemp13565 = {{ 65}, (char*)"typedef struct nctempchar2 { int d[2]; char *a;} nctempchar2; \n\0"};
nctemp13564=&nctemp13565;
nctempchar1* nctemp13562= nctemp13564;
int nctemp13566=CodeEs(nctemp13560,nctemp13562);
struct tree* nctemp13568= p;
int nctemp13570= 12;
int nctemp13572=PtreeSetline(nctemp13568,nctemp13570);
struct tree* nctemp13574= p;
struct nctempchar1 *nctemp13578;
static struct nctempchar1 nctemp13579 = {{ 74}, (char*)"typedef struct nctempcomplex2 { int d[2]; complex *a;} nctempcomplex2; \n\0"};
nctemp13578=&nctemp13579;
nctempchar1* nctemp13576= nctemp13578;
int nctemp13580=CodeEs(nctemp13574,nctemp13576);
struct tree* nctemp13582= p;
int nctemp13584= 13;
int nctemp13586=PtreeSetline(nctemp13582,nctemp13584);
struct tree* nctemp13588= p;
struct nctempchar1 *nctemp13592;
static struct nctempchar1 nctemp13593 = {{ 68}, (char*)"typedef struct nctempfloat3 { int d[3]; float *a;} nctempfloat3; \n\0"};
nctemp13592=&nctemp13593;
nctempchar1* nctemp13590= nctemp13592;
int nctemp13594=CodeEs(nctemp13588,nctemp13590);
struct tree* nctemp13596= p;
int nctemp13598= 14;
int nctemp13600=PtreeSetline(nctemp13596,nctemp13598);
struct tree* nctemp13602= p;
struct nctempchar1 *nctemp13606;
static struct nctempchar1 nctemp13607 = {{ 62}, (char*)"typedef struct nctempint3 { int d[3]; int *a;} nctempint3; \n\0"};
nctemp13606=&nctemp13607;
nctempchar1* nctemp13604= nctemp13606;
int nctemp13608=CodeEs(nctemp13602,nctemp13604);
struct tree* nctemp13610= p;
int nctemp13612= 15;
int nctemp13614=PtreeSetline(nctemp13610,nctemp13612);
struct tree* nctemp13616= p;
struct nctempchar1 *nctemp13620;
static struct nctempchar1 nctemp13621 = {{ 65}, (char*)"typedef struct nctempchar3 { int d[3]; char *a;} nctempchar3; \n\0"};
nctemp13620=&nctemp13621;
nctempchar1* nctemp13618= nctemp13620;
int nctemp13622=CodeEs(nctemp13616,nctemp13618);
struct tree* nctemp13624= p;
int nctemp13626= 16;
int nctemp13628=PtreeSetline(nctemp13624,nctemp13626);
struct tree* nctemp13630= p;
struct nctempchar1 *nctemp13634;
static struct nctempchar1 nctemp13635 = {{ 74}, (char*)"typedef struct nctempcomplex3 { int d[3]; complex *a;} nctempcomplex3; \n\0"};
nctemp13634=&nctemp13635;
nctempchar1* nctemp13632= nctemp13634;
int nctemp13636=CodeEs(nctemp13630,nctemp13632);
struct tree* nctemp13638= p;
int nctemp13640= 17;
int nctemp13642=PtreeSetline(nctemp13638,nctemp13640);
struct tree* nctemp13644= p;
struct nctempchar1 *nctemp13648;
static struct nctempchar1 nctemp13649 = {{ 68}, (char*)"typedef struct nctempfloat4 { int d[4]; float *a;} nctempfloat4; \n\0"};
nctemp13648=&nctemp13649;
nctempchar1* nctemp13646= nctemp13648;
int nctemp13650=CodeEs(nctemp13644,nctemp13646);
struct tree* nctemp13652= p;
int nctemp13654= 18;
int nctemp13656=PtreeSetline(nctemp13652,nctemp13654);
struct tree* nctemp13658= p;
struct nctempchar1 *nctemp13662;
static struct nctempchar1 nctemp13663 = {{ 62}, (char*)"typedef struct nctempint4 { int d[4]; int *a;} nctempint4; \n\0"};
nctemp13662=&nctemp13663;
nctempchar1* nctemp13660= nctemp13662;
int nctemp13664=CodeEs(nctemp13658,nctemp13660);
struct tree* nctemp13666= p;
int nctemp13668= 19;
int nctemp13670=PtreeSetline(nctemp13666,nctemp13668);
struct tree* nctemp13672= p;
struct nctempchar1 *nctemp13676;
static struct nctempchar1 nctemp13677 = {{ 65}, (char*)"typedef struct nctempchar4 { int d[4]; char *a;} nctempchar4; \n\0"};
nctemp13676=&nctemp13677;
nctempchar1* nctemp13674= nctemp13676;
int nctemp13678=CodeEs(nctemp13672,nctemp13674);
struct tree* nctemp13680= p;
int nctemp13682= 20;
int nctemp13684=PtreeSetline(nctemp13680,nctemp13682);
struct tree* nctemp13686= p;
struct nctempchar1 *nctemp13690;
static struct nctempchar1 nctemp13691 = {{ 74}, (char*)"typedef struct nctempcomplex4 { int d[4]; complex *a;} nctempcomplex4; \n\0"};
nctemp13690=&nctemp13691;
nctempchar1* nctemp13688= nctemp13690;
int nctemp13692=CodeEs(nctemp13686,nctemp13688);
struct tree* nctemp13694= p;
struct nctempchar1 *nctemp13698;
static struct nctempchar1 nctemp13699 = {{ 21}, (char*)"#include <stdio.h>\n\0"};
nctemp13698=&nctemp13699;
nctempchar1* nctemp13696= nctemp13698;
int nctemp13700=CodeEs(nctemp13694,nctemp13696);
struct tree* nctemp13702= p;
struct nctempchar1 *nctemp13706;
static struct nctempchar1 nctemp13707 = {{ 22}, (char*)"#include <stdlib.h>\n\0"};
nctemp13706=&nctemp13707;
nctempchar1* nctemp13704= nctemp13706;
int nctemp13708=CodeEs(nctemp13702,nctemp13704);
struct tree* nctemp13710= p;
struct nctempchar1 *nctemp13714;
static struct nctempchar1 nctemp13715 = {{ 22}, (char*)"#include <string.h>\n\0"};
nctemp13714=&nctemp13715;
nctempchar1* nctemp13712= nctemp13714;
int nctemp13716=CodeEs(nctemp13710,nctemp13712);
struct tree* nctemp13718= p;
struct nctempchar1 *nctemp13722;
static struct nctempchar1 nctemp13723 = {{ 22}, (char*)"#include <assert.h>\n\0"};
nctemp13722=&nctemp13723;
nctempchar1* nctemp13720= nctemp13722;
int nctemp13724=CodeEs(nctemp13718,nctemp13720);
struct tree* nctemp13726= p;
struct nctempchar1 *nctemp13730;
static struct nctempchar1 nctemp13731 = {{ 3}, (char*)"\n\0"};
nctemp13730=&nctemp13731;
nctempchar1* nctemp13728= nctemp13730;
int nctemp13732=CodeEs(nctemp13726,nctemp13728);
struct tree* nctemp13734= p;
struct nctempchar1 *nctemp13738;
static struct nctempchar1 nctemp13739 = {{ 23}, (char*)"void *GpuNew(int n);\n\0"};
nctemp13738=&nctemp13739;
nctempchar1* nctemp13736= nctemp13738;
int nctemp13740=CodeEs(nctemp13734,nctemp13736);
struct tree* nctemp13742= p;
struct nctempchar1 *nctemp13746;
static struct nctempchar1 nctemp13747 = {{ 28}, (char*)"void *GpuDelete(void *f);\n\0"};
nctemp13746=&nctemp13747;
nctempchar1* nctemp13744= nctemp13746;
int nctemp13748=CodeEs(nctemp13742,nctemp13744);
struct tree* nctemp13750= p;
struct nctempchar1 *nctemp13754;
static struct nctempchar1 nctemp13755 = {{ 20}, (char*)"void *GpuError();\n\0"};
nctemp13754=&nctemp13755;
nctempchar1* nctemp13752= nctemp13754;
int nctemp13756=CodeEs(nctemp13750,nctemp13752);
struct tree* nctemp13758= p;
struct nctempchar1 *nctemp13762;
static struct nctempchar1 nctemp13763 = {{ 26}, (char*)"void *RunMalloc(int n);\n\0"};
nctemp13762=&nctemp13763;
nctempchar1* nctemp13760= nctemp13762;
int nctemp13764=CodeEs(nctemp13758,nctemp13760);
struct tree* nctemp13766= p;
struct nctempchar1 *nctemp13770;
static struct nctempchar1 nctemp13771 = {{ 24}, (char*)"int RunFree(void * );\n\0"};
nctemp13770=&nctemp13771;
nctempchar1* nctemp13768= nctemp13770;
int nctemp13772=CodeEs(nctemp13766,nctemp13768);
struct tree* nctemp13774= p;
struct nctempchar1 *nctemp13778;
static struct nctempchar1 nctemp13779 = {{ 17}, (char*)"int RunSync();\n\0"};
nctemp13778=&nctemp13779;
nctempchar1* nctemp13776= nctemp13778;
int nctemp13780=CodeEs(nctemp13774,nctemp13776);
struct tree* nctemp13782= p;
struct nctempchar1 *nctemp13786;
static struct nctempchar1 nctemp13787 = {{ 18}, (char*)"int RunGetnt();\n\0"};
nctemp13786=&nctemp13787;
nctempchar1* nctemp13784= nctemp13786;
int nctemp13788=CodeEs(nctemp13782,nctemp13784);
struct tree* nctemp13790= p;
struct nctempchar1 *nctemp13794;
static struct nctempchar1 nctemp13795 = {{ 18}, (char*)"int RunGetnb();\n\0"};
nctemp13794=&nctemp13795;
nctempchar1* nctemp13792= nctemp13794;
int nctemp13796=CodeEs(nctemp13790,nctemp13792);
return 1;
}
int CodePreamblehip ()
{
struct tree* p;
struct nctempchar1 *nctemp13804;
static struct nctempchar1 nctemp13805 = {{ 6}, (char*)"dummy\0"};
nctemp13804=&nctemp13805;
nctempchar1* nctemp13802= nctemp13804;
struct nctempchar1 *nctemp13808;
static struct nctempchar1 nctemp13809 = {{ 6}, (char*)"dummy\0"};
nctemp13808=&nctemp13809;
nctempchar1* nctemp13806= nctemp13808;
struct tree* nctemp13810=PtreeMknode(nctemp13802,nctemp13806);
p =nctemp13810;
struct tree* nctemp13812= p;
int nctemp13814= 1;
int nctemp13816=PtreeSetline(nctemp13812,nctemp13814);
struct tree* nctemp13818= p;
struct nctempchar1 *nctemp13822;
static struct nctempchar1 nctemp13823 = {{ 50}, (char*)"//  Translated by epsc  version December 2021  \n\0"};
nctemp13822=&nctemp13823;
nctempchar1* nctemp13820= nctemp13822;
int nctemp13824=CodeEs(nctemp13818,nctemp13820);
struct tree* nctemp13826= p;
int nctemp13828= 2;
int nctemp13830=PtreeSetline(nctemp13826,nctemp13828);
struct tree* nctemp13832= p;
int nctemp13834= 3;
int nctemp13836=PtreeSetline(nctemp13832,nctemp13834);
struct tree* nctemp13838= p;
struct nctempchar1 *nctemp13842;
static struct nctempchar1 nctemp13843 = {{ 48}, (char*)"typedef struct { float r; float i;} complex; \n\0"};
nctemp13842=&nctemp13843;
nctempchar1* nctemp13840= nctemp13842;
int nctemp13844=CodeEs(nctemp13838,nctemp13840);
struct tree* nctemp13846= p;
int nctemp13848= 3;
int nctemp13850=PtreeSetline(nctemp13846,nctemp13848);
struct tree* nctemp13852= p;
struct nctempchar1 *nctemp13856;
static struct nctempchar1 nctemp13857 = {{ 68}, (char*)"typedef struct nctempfloat1 { int d[1]; float *a;} nctempfloat1; \n\0"};
nctemp13856=&nctemp13857;
nctempchar1* nctemp13854= nctemp13856;
int nctemp13858=CodeEs(nctemp13852,nctemp13854);
struct tree* nctemp13860= p;
int nctemp13862= 5;
int nctemp13864=PtreeSetline(nctemp13860,nctemp13862);
struct tree* nctemp13866= p;
struct nctempchar1 *nctemp13870;
static struct nctempchar1 nctemp13871 = {{ 62}, (char*)"typedef struct nctempint1 { int d[1]; int *a;} nctempint1; \n\0"};
nctemp13870=&nctemp13871;
nctempchar1* nctemp13868= nctemp13870;
int nctemp13872=CodeEs(nctemp13866,nctemp13868);
struct tree* nctemp13874= p;
int nctemp13876= 7;
int nctemp13878=PtreeSetline(nctemp13874,nctemp13876);
struct tree* nctemp13880= p;
struct nctempchar1 *nctemp13884;
static struct nctempchar1 nctemp13885 = {{ 65}, (char*)"typedef struct nctempchar1 { int d[1]; char *a;} nctempchar1; \n\0"};
nctemp13884=&nctemp13885;
nctempchar1* nctemp13882= nctemp13884;
int nctemp13886=CodeEs(nctemp13880,nctemp13882);
struct tree* nctemp13888= p;
int nctemp13890= 7;
int nctemp13892=PtreeSetline(nctemp13888,nctemp13890);
struct tree* nctemp13894= p;
struct nctempchar1 *nctemp13898;
static struct nctempchar1 nctemp13899 = {{ 74}, (char*)"typedef struct nctempcomplex1 { int d[1]; complex *a;} nctempcomplex1; \n\0"};
nctemp13898=&nctemp13899;
nctempchar1* nctemp13896= nctemp13898;
int nctemp13900=CodeEs(nctemp13894,nctemp13896);
struct tree* nctemp13902= p;
int nctemp13904= 8;
int nctemp13906=PtreeSetline(nctemp13902,nctemp13904);
int nctemp13910=CodeArraycheck();
int nctemp13907 = (nctemp13910 ==1);
if(nctemp13907)
{
struct tree* nctemp13913= p;
struct nctempchar1 *nctemp13917;
static struct nctempchar1 nctemp13918 = {{ 54}, (char*)"static struct nctempchar1 nctempstring = {0, NULL};\n\0"};
nctemp13917=&nctemp13918;
nctempchar1* nctemp13915= nctemp13917;
int nctemp13919=CodeEs(nctemp13913,nctemp13915);
struct tree* nctemp13921= p;
int nctemp13923= 8;
int nctemp13925=PtreeSetline(nctemp13921,nctemp13923);
}
struct tree* nctemp13927= p;
struct nctempchar1 *nctemp13931;
static struct nctempchar1 nctemp13932 = {{ 68}, (char*)"typedef struct nctempfloat2 { int d[2]; float *a;} nctempfloat2; \n\0"};
nctemp13931=&nctemp13932;
nctempchar1* nctemp13929= nctemp13931;
int nctemp13933=CodeEs(nctemp13927,nctemp13929);
struct tree* nctemp13935= p;
int nctemp13937= 10;
int nctemp13939=PtreeSetline(nctemp13935,nctemp13937);
struct tree* nctemp13941= p;
struct nctempchar1 *nctemp13945;
static struct nctempchar1 nctemp13946 = {{ 62}, (char*)"typedef struct nctempint2 { int d[2]; int *a;} nctempint2; \n\0"};
nctemp13945=&nctemp13946;
nctempchar1* nctemp13943= nctemp13945;
int nctemp13947=CodeEs(nctemp13941,nctemp13943);
struct tree* nctemp13949= p;
int nctemp13951= 10;
int nctemp13953=PtreeSetline(nctemp13949,nctemp13951);
struct tree* nctemp13955= p;
struct nctempchar1 *nctemp13959;
static struct nctempchar1 nctemp13960 = {{ 65}, (char*)"typedef struct nctempchar2 { int d[2]; char *a;} nctempchar2; \n\0"};
nctemp13959=&nctemp13960;
nctempchar1* nctemp13957= nctemp13959;
int nctemp13961=CodeEs(nctemp13955,nctemp13957);
struct tree* nctemp13963= p;
int nctemp13965= 12;
int nctemp13967=PtreeSetline(nctemp13963,nctemp13965);
struct tree* nctemp13969= p;
struct nctempchar1 *nctemp13973;
static struct nctempchar1 nctemp13974 = {{ 74}, (char*)"typedef struct nctempcomplex2 { int d[2]; complex *a;} nctempcomplex2; \n\0"};
nctemp13973=&nctemp13974;
nctempchar1* nctemp13971= nctemp13973;
int nctemp13975=CodeEs(nctemp13969,nctemp13971);
struct tree* nctemp13977= p;
int nctemp13979= 13;
int nctemp13981=PtreeSetline(nctemp13977,nctemp13979);
struct tree* nctemp13983= p;
struct nctempchar1 *nctemp13987;
static struct nctempchar1 nctemp13988 = {{ 68}, (char*)"typedef struct nctempfloat3 { int d[3]; float *a;} nctempfloat3; \n\0"};
nctemp13987=&nctemp13988;
nctempchar1* nctemp13985= nctemp13987;
int nctemp13989=CodeEs(nctemp13983,nctemp13985);
struct tree* nctemp13991= p;
int nctemp13993= 14;
int nctemp13995=PtreeSetline(nctemp13991,nctemp13993);
struct tree* nctemp13997= p;
struct nctempchar1 *nctemp14001;
static struct nctempchar1 nctemp14002 = {{ 62}, (char*)"typedef struct nctempint3 { int d[3]; int *a;} nctempint3; \n\0"};
nctemp14001=&nctemp14002;
nctempchar1* nctemp13999= nctemp14001;
int nctemp14003=CodeEs(nctemp13997,nctemp13999);
struct tree* nctemp14005= p;
int nctemp14007= 15;
int nctemp14009=PtreeSetline(nctemp14005,nctemp14007);
struct tree* nctemp14011= p;
struct nctempchar1 *nctemp14015;
static struct nctempchar1 nctemp14016 = {{ 65}, (char*)"typedef struct nctempchar3 { int d[3]; char *a;} nctempchar3; \n\0"};
nctemp14015=&nctemp14016;
nctempchar1* nctemp14013= nctemp14015;
int nctemp14017=CodeEs(nctemp14011,nctemp14013);
struct tree* nctemp14019= p;
int nctemp14021= 16;
int nctemp14023=PtreeSetline(nctemp14019,nctemp14021);
struct tree* nctemp14025= p;
struct nctempchar1 *nctemp14029;
static struct nctempchar1 nctemp14030 = {{ 74}, (char*)"typedef struct nctempcomplex3 { int d[3]; complex *a;} nctempcomplex3; \n\0"};
nctemp14029=&nctemp14030;
nctempchar1* nctemp14027= nctemp14029;
int nctemp14031=CodeEs(nctemp14025,nctemp14027);
struct tree* nctemp14033= p;
int nctemp14035= 17;
int nctemp14037=PtreeSetline(nctemp14033,nctemp14035);
struct tree* nctemp14039= p;
struct nctempchar1 *nctemp14043;
static struct nctempchar1 nctemp14044 = {{ 68}, (char*)"typedef struct nctempfloat4 { int d[4]; float *a;} nctempfloat4; \n\0"};
nctemp14043=&nctemp14044;
nctempchar1* nctemp14041= nctemp14043;
int nctemp14045=CodeEs(nctemp14039,nctemp14041);
struct tree* nctemp14047= p;
int nctemp14049= 18;
int nctemp14051=PtreeSetline(nctemp14047,nctemp14049);
struct tree* nctemp14053= p;
struct nctempchar1 *nctemp14057;
static struct nctempchar1 nctemp14058 = {{ 62}, (char*)"typedef struct nctempint4 { int d[4]; int *a;} nctempint4; \n\0"};
nctemp14057=&nctemp14058;
nctempchar1* nctemp14055= nctemp14057;
int nctemp14059=CodeEs(nctemp14053,nctemp14055);
struct tree* nctemp14061= p;
int nctemp14063= 19;
int nctemp14065=PtreeSetline(nctemp14061,nctemp14063);
struct tree* nctemp14067= p;
struct nctempchar1 *nctemp14071;
static struct nctempchar1 nctemp14072 = {{ 65}, (char*)"typedef struct nctempchar4 { int d[4]; char *a;} nctempchar4; \n\0"};
nctemp14071=&nctemp14072;
nctempchar1* nctemp14069= nctemp14071;
int nctemp14073=CodeEs(nctemp14067,nctemp14069);
struct tree* nctemp14075= p;
int nctemp14077= 20;
int nctemp14079=PtreeSetline(nctemp14075,nctemp14077);
struct tree* nctemp14081= p;
struct nctempchar1 *nctemp14085;
static struct nctempchar1 nctemp14086 = {{ 74}, (char*)"typedef struct nctempcomplex4 { int d[4]; complex *a;} nctempcomplex4; \n\0"};
nctemp14085=&nctemp14086;
nctempchar1* nctemp14083= nctemp14085;
int nctemp14087=CodeEs(nctemp14081,nctemp14083);
struct tree* nctemp14089= p;
struct nctempchar1 *nctemp14093;
static struct nctempchar1 nctemp14094 = {{ 21}, (char*)"#include <stdio.h>\n\0"};
nctemp14093=&nctemp14094;
nctempchar1* nctemp14091= nctemp14093;
int nctemp14095=CodeEs(nctemp14089,nctemp14091);
struct tree* nctemp14097= p;
struct nctempchar1 *nctemp14101;
static struct nctempchar1 nctemp14102 = {{ 17}, (char*)"extern \"C\" {\n\0"};
nctemp14101=&nctemp14102;
nctempchar1* nctemp14099= nctemp14101;
int nctemp14103=CodeEs(nctemp14097,nctemp14099);
struct tree* nctemp14105= p;
struct nctempchar1 *nctemp14109;
static struct nctempchar1 nctemp14110 = {{ 22}, (char*)"#include <stdlib.h>\n\0"};
nctemp14109=&nctemp14110;
nctempchar1* nctemp14107= nctemp14109;
int nctemp14111=CodeEs(nctemp14105,nctemp14107);
struct tree* nctemp14113= p;
struct nctempchar1 *nctemp14117;
static struct nctempchar1 nctemp14118 = {{ 22}, (char*)"#include <string.h>\n\0"};
nctemp14117=&nctemp14118;
nctempchar1* nctemp14115= nctemp14117;
int nctemp14119=CodeEs(nctemp14113,nctemp14115);
struct tree* nctemp14121= p;
struct nctempchar1 *nctemp14125;
static struct nctempchar1 nctemp14126 = {{ 4}, (char*)"}\n\0"};
nctemp14125=&nctemp14126;
nctempchar1* nctemp14123= nctemp14125;
int nctemp14127=CodeEs(nctemp14121,nctemp14123);
struct tree* nctemp14129= p;
struct nctempchar1 *nctemp14133;
static struct nctempchar1 nctemp14134 = {{ 34}, (char*)"#include \"hip/hip_runtime.h\" \n\0"};
nctemp14133=&nctemp14134;
nctempchar1* nctemp14131= nctemp14133;
int nctemp14135=CodeEs(nctemp14129,nctemp14131);
struct tree* nctemp14137= p;
struct nctempchar1 *nctemp14141;
static struct nctempchar1 nctemp14142 = {{ 3}, (char*)"\n\0"};
nctemp14141=&nctemp14142;
nctempchar1* nctemp14139= nctemp14141;
int nctemp14143=CodeEs(nctemp14137,nctemp14139);
struct tree* nctemp14145= p;
struct nctempchar1 *nctemp14149;
static struct nctempchar1 nctemp14150 = {{ 23}, (char*)"void *GpuNew(int n);\n\0"};
nctemp14149=&nctemp14150;
nctempchar1* nctemp14147= nctemp14149;
int nctemp14151=CodeEs(nctemp14145,nctemp14147);
struct tree* nctemp14153= p;
struct nctempchar1 *nctemp14157;
static struct nctempchar1 nctemp14158 = {{ 28}, (char*)"void *GpuDelete(void *f);\n\0"};
nctemp14157=&nctemp14158;
nctempchar1* nctemp14155= nctemp14157;
int nctemp14159=CodeEs(nctemp14153,nctemp14155);
struct tree* nctemp14161= p;
struct nctempchar1 *nctemp14165;
static struct nctempchar1 nctemp14166 = {{ 20}, (char*)"void *GpuError();\n\0"};
nctemp14165=&nctemp14166;
nctempchar1* nctemp14163= nctemp14165;
int nctemp14167=CodeEs(nctemp14161,nctemp14163);
struct tree* nctemp14169= p;
struct nctempchar1 *nctemp14173;
static struct nctempchar1 nctemp14174 = {{ 26}, (char*)"void *RunMalloc(int n);\n\0"};
nctemp14173=&nctemp14174;
nctempchar1* nctemp14171= nctemp14173;
int nctemp14175=CodeEs(nctemp14169,nctemp14171);
struct tree* nctemp14177= p;
struct nctempchar1 *nctemp14181;
static struct nctempchar1 nctemp14182 = {{ 24}, (char*)"int RunFree(void *p);\n\0"};
nctemp14181=&nctemp14182;
nctempchar1* nctemp14179= nctemp14181;
int nctemp14183=CodeEs(nctemp14177,nctemp14179);
return 1;
}
int CodePreamble ()
{
int nctemp14188=CodeGetarch();
int nctemp14185 = (nctemp14188 ==1);
if(nctemp14185)
{
int nctemp14191=CodePreamblecpu();
return 1;
}
else{
int nctemp14196=CodeGetarch();
int nctemp14193 = (nctemp14196 ==2);
if(nctemp14193)
{
int nctemp14199=CodePreamblecuda();
return 1;
}
else{
int nctemp14204=CodeGetarch();
int nctemp14201 = (nctemp14204 ==3);
if(nctemp14201)
{
int nctemp14207=CodePreamblehip();
return 1;
}
else{
return 0;
}
}
}
}
int CodePostamble ()
{
int fdo;
int nctemp14214=CodeGetfdout();
fdo =nctemp14214;
int nctemp14218=CodeGetarch();
int nctemp14215 = (nctemp14218 ==2);
if(nctemp14215)
{
int nctemp14221= fdo;
struct nctempchar1 *nctemp14225;
static struct nctempchar1 nctemp14226 = {{ 4}, (char*)"}\n\0"};
nctemp14225=&nctemp14226;
nctempchar1* nctemp14223= nctemp14225;
int nctemp14227=LibePuts(nctemp14221,nctemp14223);
return 1;
}
else{
int nctemp14232=CodeGetarch();
int nctemp14229 = (nctemp14232 ==3);
if(nctemp14229)
{
int nctemp14235= fdo;
struct nctempchar1 *nctemp14239;
static struct nctempchar1 nctemp14240 = {{ 4}, (char*)"}\n\0"};
nctemp14239=&nctemp14240;
nctempchar1* nctemp14237= nctemp14239;
int nctemp14241=LibePuts(nctemp14235,nctemp14237);
return 1;
}
else{
return 0;
}
}
}
