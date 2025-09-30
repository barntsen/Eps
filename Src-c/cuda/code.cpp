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
struct symbol* SymEtp;
struct symbol* SymLtp;
struct symbol* SymStp;
struct symbol* SymGetetp ();
int SymIstemp (nctempchar1 *name);
struct symbol* SymSetetp (struct symbol* etp);
struct symbol* SymGetltp ();
struct symbol* SymSetltp (struct symbol* ltp);
struct symbol* SymGetstp ();
struct symbol* SymSetstp (struct symbol* stp);
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
;
int ScanContline;
int ScanEnd;
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
int CodeBreak;
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
int CodeArch;
int CodeSetarch (int arch)
{
CodeArch = arch;
return 1;
}
int CodeGetarch ()
{
return CodeArch;
}
int CodeLine;
int CodeParallel;
int CodeSetparallel (int flag)
{
CodeParallel = flag;
return flag;
}
int CodeGetparallel ()
{
return CodeParallel;
}
int CodeAddress;
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
int CodeFdout;
int CodeSetfdout (int fd)
{
CodeFdout = fd;
return 1;
}
int CodeGetfdout ()
{
return CodeFdout;
}
int CodeDebugflag;
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
struct tree* nctemp351= p;
struct nctempchar1 *nctemp355;
static struct nctempchar1 nctemp356 = {{ 14}, (char*)"struct nctemp\0"};
nctemp355=&nctemp356;
nctempchar1* nctemp353= nctemp355;
int nctemp357=CodeEs(nctemp351,nctemp353);
struct tree* nctemp359= p;
struct symbol* nctemp363= tp;
nctempchar1* nctemp365=SymGetype(nctemp363);
nctempchar1* nctemp361= nctemp365;
int nctemp366=CodeEs(nctemp359,nctemp361);
struct symbol* nctemp370= tp;
int nctemp372=SymGetrank(nctemp370);
int nctemp368= nctemp372;
int nctemp373=CodeEd(nctemp368);
struct tree* nctemp375= p;
struct nctempchar1 *nctemp379;
static struct nctempchar1 nctemp380 = {{ 3}, (char*)" *\0"};
nctemp379=&nctemp380;
nctempchar1* nctemp377= nctemp379;
int nctemp381=CodeEs(nctemp375,nctemp377);
struct tree* nctemp383= p;
struct symbol* nctemp387= tp;
nctempchar1* nctemp389=SymGetname(nctemp387);
nctempchar1* nctemp385= nctemp389;
int nctemp390=CodeEs(nctemp383,nctemp385);
}
else{
struct tree* nctemp392= p;
struct nctempchar1 *nctemp396;
static struct nctempchar1 nctemp397 = {{ 8}, (char*)"struct \0"};
nctemp396=&nctemp397;
nctempchar1* nctemp394= nctemp396;
int nctemp398=CodeEs(nctemp392,nctemp394);
struct tree* nctemp400= p;
struct symbol* nctemp404= tp;
nctempchar1* nctemp406=SymGetype(nctemp404);
nctempchar1* nctemp402= nctemp406;
int nctemp407=CodeEs(nctemp400,nctemp402);
struct tree* nctemp409= p;
struct nctempchar1 *nctemp413;
static struct nctempchar1 nctemp414 = {{ 2}, (char*)"*\0"};
nctemp413=&nctemp414;
nctempchar1* nctemp411= nctemp413;
int nctemp415=CodeEs(nctemp409,nctemp411);
struct tree* nctemp417= p;
struct nctempchar1 *nctemp421;
static struct nctempchar1 nctemp422 = {{ 2}, (char*)" \0"};
nctemp421=&nctemp422;
nctempchar1* nctemp419= nctemp421;
int nctemp423=CodeEs(nctemp417,nctemp419);
struct tree* nctemp425= p;
struct symbol* nctemp429= tp;
nctempchar1* nctemp431=SymGetname(nctemp429);
nctempchar1* nctemp427= nctemp431;
int nctemp432=CodeEs(nctemp425,nctemp427);
}
}
else{
struct symbol* nctemp438= tp;
nctempchar1* nctemp440=SymGetarray(nctemp438);
nctempchar1* nctemp436= nctemp440;
struct nctempchar1 *nctemp443;
static struct nctempchar1 nctemp444 = {{ 6}, (char*)"array\0"};
nctemp443=&nctemp444;
nctempchar1* nctemp441= nctemp443;
int nctemp445=LibeStrcmp(nctemp436,nctemp441);
int nctemp433 = (nctemp445 ==1);
if(nctemp433)
{
struct tree* nctemp448= p;
struct nctempchar1 *nctemp452;
static struct nctempchar1 nctemp453 = {{ 7}, (char*)"nctemp\0"};
nctemp452=&nctemp453;
nctempchar1* nctemp450= nctemp452;
int nctemp454=CodeEs(nctemp448,nctemp450);
struct tree* nctemp456= p;
struct symbol* nctemp460= tp;
nctempchar1* nctemp462=SymGetype(nctemp460);
nctempchar1* nctemp458= nctemp462;
int nctemp463=CodeEs(nctemp456,nctemp458);
struct symbol* nctemp467= tp;
int nctemp469=SymGetrank(nctemp467);
int nctemp465= nctemp469;
int nctemp470=CodeEd(nctemp465);
struct tree* nctemp472= p;
struct nctempchar1 *nctemp476;
static struct nctempchar1 nctemp477 = {{ 3}, (char*)" *\0"};
nctemp476=&nctemp477;
nctempchar1* nctemp474= nctemp476;
int nctemp478=CodeEs(nctemp472,nctemp474);
struct tree* nctemp480= p;
struct symbol* nctemp484= tp;
nctempchar1* nctemp486=SymGetname(nctemp484);
nctempchar1* nctemp482= nctemp486;
int nctemp487=CodeEs(nctemp480,nctemp482);
}
else{
struct tree* nctemp489= p;
struct symbol* nctemp493= tp;
nctempchar1* nctemp495=SymGetype(nctemp493);
nctempchar1* nctemp491= nctemp495;
int nctemp496=CodeEs(nctemp489,nctemp491);
struct tree* nctemp498= p;
struct nctempchar1 *nctemp502;
static struct nctempchar1 nctemp503 = {{ 2}, (char*)" \0"};
nctemp502=&nctemp503;
nctempchar1* nctemp500= nctemp502;
int nctemp504=CodeEs(nctemp498,nctemp500);
struct tree* nctemp506= p;
struct symbol* nctemp510= tp;
nctempchar1* nctemp512=SymGetname(nctemp510);
nctempchar1* nctemp508= nctemp512;
int nctemp513=CodeEs(nctemp506,nctemp508);
}
}
return 1;
}
int CodeIdeclarations (struct tree* p,struct symbol* tp)
{
int nctemp515 = (tp !=0);
int nctemp519=nctemp515;
while(nctemp519)
{{
struct tree* nctemp521= p;
struct symbol* nctemp523= tp;
int nctemp525=CodeIdeclaration(nctemp521,nctemp523);
struct tree* nctemp527= p;
struct nctempchar1 *nctemp531;
static struct nctempchar1 nctemp532 = {{ 4}, (char*)";\n\0"};
nctemp531=&nctemp532;
nctempchar1* nctemp529= nctemp531;
int nctemp533=CodeEs(nctemp527,nctemp529);
struct symbol* nctemp538= tp;
struct symbol* nctemp540=SymMvnext(nctemp538);
tp =nctemp540;
}
int nctemp541 = (tp !=0);
nctemp519=nctemp541;}return 1;
}
int CodeStructdefsym (struct tree* p,struct symbol* tp)
{
struct symbol* up;
struct tree* nctemp547= p;
struct nctempchar1 *nctemp551;
static struct nctempchar1 nctemp552 = {{ 8}, (char*)"struct \0"};
nctemp551=&nctemp552;
nctempchar1* nctemp549= nctemp551;
int nctemp553=CodeEs(nctemp547,nctemp549);
struct tree* nctemp555= p;
struct symbol* nctemp559= tp;
nctempchar1* nctemp561=SymGetype(nctemp559);
nctempchar1* nctemp557= nctemp561;
int nctemp562=CodeEs(nctemp555,nctemp557);
struct tree* nctemp564= p;
struct nctempchar1 *nctemp568;
static struct nctempchar1 nctemp569 = {{ 3}, (char*)" {\0"};
nctemp568=&nctemp569;
nctempchar1* nctemp566= nctemp568;
int nctemp570=CodeEs(nctemp564,nctemp566);
struct symbol* nctemp575= tp;
struct symbol* nctemp577=SymGetable(nctemp575);
up =nctemp577;
struct symbol* nctemp582= up;
struct symbol* nctemp584=SymMvnext(nctemp582);
up =nctemp584;
struct tree* nctemp586= p;
struct symbol* nctemp588= up;
int nctemp590=CodeIdeclarations(nctemp586,nctemp588);
struct tree* nctemp592= p;
struct nctempchar1 *nctemp596;
static struct nctempchar1 nctemp597 = {{ 5}, (char*)"};\n\0"};
nctemp596=&nctemp597;
nctempchar1* nctemp594= nctemp596;
int nctemp598=CodeEs(nctemp592,nctemp594);
struct tree* nctemp600= p;
struct nctempchar1 *nctemp604;
static struct nctempchar1 nctemp605 = {{ 16}, (char*)"typedef struct \0"};
nctemp604=&nctemp605;
nctempchar1* nctemp602= nctemp604;
int nctemp606=CodeEs(nctemp600,nctemp602);
struct tree* nctemp608= p;
struct nctempchar1 *nctemp612;
static struct nctempchar1 nctemp613 = {{ 7}, (char*)"nctemp\0"};
nctemp612=&nctemp613;
nctempchar1* nctemp610= nctemp612;
int nctemp614=CodeEs(nctemp608,nctemp610);
struct tree* nctemp616= p;
struct symbol* nctemp620= tp;
nctempchar1* nctemp622=SymGetype(nctemp620);
nctempchar1* nctemp618= nctemp622;
int nctemp623=CodeEs(nctemp616,nctemp618);
struct tree* nctemp625= p;
struct nctempchar1 *nctemp629;
static struct nctempchar1 nctemp630 = {{ 2}, (char*)"1\0"};
nctemp629=&nctemp630;
nctempchar1* nctemp627= nctemp629;
int nctemp631=CodeEs(nctemp625,nctemp627);
struct tree* nctemp633= p;
struct nctempchar1 *nctemp637;
static struct nctempchar1 nctemp638 = {{ 20}, (char*)" {int d[1]; struct \0"};
nctemp637=&nctemp638;
nctempchar1* nctemp635= nctemp637;
int nctemp639=CodeEs(nctemp633,nctemp635);
struct tree* nctemp641= p;
struct symbol* nctemp645= tp;
nctempchar1* nctemp647=SymGetype(nctemp645);
nctempchar1* nctemp643= nctemp647;
int nctemp648=CodeEs(nctemp641,nctemp643);
struct tree* nctemp650= p;
struct nctempchar1 *nctemp654;
static struct nctempchar1 nctemp655 = {{ 6}, (char*)" *a; \0"};
nctemp654=&nctemp655;
nctempchar1* nctemp652= nctemp654;
int nctemp656=CodeEs(nctemp650,nctemp652);
struct tree* nctemp658= p;
struct nctempchar1 *nctemp662;
static struct nctempchar1 nctemp663 = {{ 3}, (char*)"} \0"};
nctemp662=&nctemp663;
nctempchar1* nctemp660= nctemp662;
int nctemp664=CodeEs(nctemp658,nctemp660);
struct tree* nctemp666= p;
struct nctempchar1 *nctemp670;
static struct nctempchar1 nctemp671 = {{ 7}, (char*)"nctemp\0"};
nctemp670=&nctemp671;
nctempchar1* nctemp668= nctemp670;
int nctemp672=CodeEs(nctemp666,nctemp668);
struct tree* nctemp674= p;
struct symbol* nctemp678= tp;
nctempchar1* nctemp680=SymGetype(nctemp678);
nctempchar1* nctemp676= nctemp680;
int nctemp681=CodeEs(nctemp674,nctemp676);
struct tree* nctemp683= p;
struct nctempchar1 *nctemp687;
static struct nctempchar1 nctemp688 = {{ 2}, (char*)"1\0"};
nctemp687=&nctemp688;
nctempchar1* nctemp685= nctemp687;
int nctemp689=CodeEs(nctemp683,nctemp685);
struct tree* nctemp691= p;
struct nctempchar1 *nctemp695;
static struct nctempchar1 nctemp696 = {{ 4}, (char*)";\n\0"};
nctemp695=&nctemp696;
nctempchar1* nctemp693= nctemp695;
int nctemp697=CodeEs(nctemp691,nctemp693);
struct tree* nctemp699= p;
struct nctempchar1 *nctemp703;
static struct nctempchar1 nctemp704 = {{ 8}, (char*)"struct \0"};
nctemp703=&nctemp704;
nctempchar1* nctemp701= nctemp703;
int nctemp705=CodeEs(nctemp699,nctemp701);
struct tree* nctemp707= p;
struct nctempchar1 *nctemp711;
static struct nctempchar1 nctemp712 = {{ 7}, (char*)"nctemp\0"};
nctemp711=&nctemp712;
nctempchar1* nctemp709= nctemp711;
int nctemp713=CodeEs(nctemp707,nctemp709);
struct tree* nctemp715= p;
struct symbol* nctemp719= tp;
nctempchar1* nctemp721=SymGetype(nctemp719);
nctempchar1* nctemp717= nctemp721;
int nctemp722=CodeEs(nctemp715,nctemp717);
struct tree* nctemp724= p;
struct nctempchar1 *nctemp728;
static struct nctempchar1 nctemp729 = {{ 2}, (char*)"2\0"};
nctemp728=&nctemp729;
nctempchar1* nctemp726= nctemp728;
int nctemp730=CodeEs(nctemp724,nctemp726);
struct tree* nctemp732= p;
struct nctempchar1 *nctemp736;
static struct nctempchar1 nctemp737 = {{ 20}, (char*)" {int d[2]; struct \0"};
nctemp736=&nctemp737;
nctempchar1* nctemp734= nctemp736;
int nctemp738=CodeEs(nctemp732,nctemp734);
struct tree* nctemp740= p;
struct symbol* nctemp744= tp;
nctempchar1* nctemp746=SymGetype(nctemp744);
nctempchar1* nctemp742= nctemp746;
int nctemp747=CodeEs(nctemp740,nctemp742);
struct tree* nctemp749= p;
struct nctempchar1 *nctemp753;
static struct nctempchar1 nctemp754 = {{ 6}, (char*)" *a; \0"};
nctemp753=&nctemp754;
nctempchar1* nctemp751= nctemp753;
int nctemp755=CodeEs(nctemp749,nctemp751);
struct tree* nctemp757= p;
struct nctempchar1 *nctemp761;
static struct nctempchar1 nctemp762 = {{ 3}, (char*)"} \0"};
nctemp761=&nctemp762;
nctempchar1* nctemp759= nctemp761;
int nctemp763=CodeEs(nctemp757,nctemp759);
struct tree* nctemp765= p;
struct nctempchar1 *nctemp769;
static struct nctempchar1 nctemp770 = {{ 4}, (char*)";\n\0"};
nctemp769=&nctemp770;
nctempchar1* nctemp767= nctemp769;
int nctemp771=CodeEs(nctemp765,nctemp767);
struct tree* nctemp773= p;
struct nctempchar1 *nctemp777;
static struct nctempchar1 nctemp778 = {{ 8}, (char*)"struct \0"};
nctemp777=&nctemp778;
nctempchar1* nctemp775= nctemp777;
int nctemp779=CodeEs(nctemp773,nctemp775);
struct tree* nctemp781= p;
struct nctempchar1 *nctemp785;
static struct nctempchar1 nctemp786 = {{ 7}, (char*)"nctemp\0"};
nctemp785=&nctemp786;
nctempchar1* nctemp783= nctemp785;
int nctemp787=CodeEs(nctemp781,nctemp783);
struct tree* nctemp789= p;
struct symbol* nctemp793= tp;
nctempchar1* nctemp795=SymGetype(nctemp793);
nctempchar1* nctemp791= nctemp795;
int nctemp796=CodeEs(nctemp789,nctemp791);
struct tree* nctemp798= p;
struct nctempchar1 *nctemp802;
static struct nctempchar1 nctemp803 = {{ 2}, (char*)"3\0"};
nctemp802=&nctemp803;
nctempchar1* nctemp800= nctemp802;
int nctemp804=CodeEs(nctemp798,nctemp800);
struct tree* nctemp806= p;
struct nctempchar1 *nctemp810;
static struct nctempchar1 nctemp811 = {{ 20}, (char*)" {int d[3]; struct \0"};
nctemp810=&nctemp811;
nctempchar1* nctemp808= nctemp810;
int nctemp812=CodeEs(nctemp806,nctemp808);
struct tree* nctemp814= p;
struct symbol* nctemp818= tp;
nctempchar1* nctemp820=SymGetype(nctemp818);
nctempchar1* nctemp816= nctemp820;
int nctemp821=CodeEs(nctemp814,nctemp816);
struct tree* nctemp823= p;
struct nctempchar1 *nctemp827;
static struct nctempchar1 nctemp828 = {{ 6}, (char*)" *a; \0"};
nctemp827=&nctemp828;
nctempchar1* nctemp825= nctemp827;
int nctemp829=CodeEs(nctemp823,nctemp825);
struct tree* nctemp831= p;
struct nctempchar1 *nctemp835;
static struct nctempchar1 nctemp836 = {{ 3}, (char*)"} \0"};
nctemp835=&nctemp836;
nctempchar1* nctemp833= nctemp835;
int nctemp837=CodeEs(nctemp831,nctemp833);
struct tree* nctemp839= p;
struct nctempchar1 *nctemp843;
static struct nctempchar1 nctemp844 = {{ 4}, (char*)";\n\0"};
nctemp843=&nctemp844;
nctempchar1* nctemp841= nctemp843;
int nctemp845=CodeEs(nctemp839,nctemp841);
struct tree* nctemp847= p;
struct nctempchar1 *nctemp851;
static struct nctempchar1 nctemp852 = {{ 8}, (char*)"struct \0"};
nctemp851=&nctemp852;
nctempchar1* nctemp849= nctemp851;
int nctemp853=CodeEs(nctemp847,nctemp849);
struct tree* nctemp855= p;
struct nctempchar1 *nctemp859;
static struct nctempchar1 nctemp860 = {{ 7}, (char*)"nctemp\0"};
nctemp859=&nctemp860;
nctempchar1* nctemp857= nctemp859;
int nctemp861=CodeEs(nctemp855,nctemp857);
struct tree* nctemp863= p;
struct symbol* nctemp867= tp;
nctempchar1* nctemp869=SymGetype(nctemp867);
nctempchar1* nctemp865= nctemp869;
int nctemp870=CodeEs(nctemp863,nctemp865);
struct tree* nctemp872= p;
struct nctempchar1 *nctemp876;
static struct nctempchar1 nctemp877 = {{ 2}, (char*)"4\0"};
nctemp876=&nctemp877;
nctempchar1* nctemp874= nctemp876;
int nctemp878=CodeEs(nctemp872,nctemp874);
struct tree* nctemp880= p;
struct nctempchar1 *nctemp884;
static struct nctempchar1 nctemp885 = {{ 20}, (char*)" {int d[4]; struct \0"};
nctemp884=&nctemp885;
nctempchar1* nctemp882= nctemp884;
int nctemp886=CodeEs(nctemp880,nctemp882);
struct tree* nctemp888= p;
struct symbol* nctemp892= tp;
nctempchar1* nctemp894=SymGetype(nctemp892);
nctempchar1* nctemp890= nctemp894;
int nctemp895=CodeEs(nctemp888,nctemp890);
struct tree* nctemp897= p;
struct nctempchar1 *nctemp901;
static struct nctempchar1 nctemp902 = {{ 6}, (char*)" *a; \0"};
nctemp901=&nctemp902;
nctempchar1* nctemp899= nctemp901;
int nctemp903=CodeEs(nctemp897,nctemp899);
struct tree* nctemp905= p;
struct nctempchar1 *nctemp909;
static struct nctempchar1 nctemp910 = {{ 3}, (char*)"} \0"};
nctemp909=&nctemp910;
nctempchar1* nctemp907= nctemp909;
int nctemp911=CodeEs(nctemp905,nctemp907);
struct tree* nctemp913= p;
struct nctempchar1 *nctemp917;
static struct nctempchar1 nctemp918 = {{ 4}, (char*)";\n\0"};
nctemp917=&nctemp918;
nctempchar1* nctemp915= nctemp917;
int nctemp919=CodeEs(nctemp913,nctemp915);
return 1;
}
int CodeFdefcpusym (struct tree* p,struct symbol* tp)
{
struct symbol* nctemp926= tp;
nctempchar1* nctemp928=SymGetstruct(nctemp926);
nctempchar1* nctemp924= nctemp928;
struct nctempchar1 *nctemp931;
static struct nctempchar1 nctemp932 = {{ 7}, (char*)"struct\0"};
nctemp931=&nctemp932;
nctempchar1* nctemp929= nctemp931;
int nctemp933=LibeStrcmp(nctemp924,nctemp929);
int nctemp921 = (nctemp933 ==1);
if(nctemp921)
{
struct tree* nctemp936= p;
struct nctempchar1 *nctemp940;
static struct nctempchar1 nctemp941 = {{ 8}, (char*)"struct \0"};
nctemp940=&nctemp941;
nctempchar1* nctemp938= nctemp940;
int nctemp942=CodeEs(nctemp936,nctemp938);
}
struct symbol* nctemp948= tp;
nctempchar1* nctemp950=SymGetarray(nctemp948);
nctempchar1* nctemp946= nctemp950;
struct nctempchar1 *nctemp953;
static struct nctempchar1 nctemp954 = {{ 6}, (char*)"array\0"};
nctemp953=&nctemp954;
nctempchar1* nctemp951= nctemp953;
int nctemp955=LibeStrcmp(nctemp946,nctemp951);
int nctemp943 = (nctemp955 ==1);
if(nctemp943)
{
struct tree* nctemp958= p;
struct nctempchar1 *nctemp962;
static struct nctempchar1 nctemp963 = {{ 7}, (char*)"nctemp\0"};
nctemp962=&nctemp963;
nctempchar1* nctemp960= nctemp962;
int nctemp964=CodeEs(nctemp958,nctemp960);
}
struct tree* nctemp966= p;
struct symbol* nctemp970= tp;
nctempchar1* nctemp972=SymGetype(nctemp970);
nctempchar1* nctemp968= nctemp972;
int nctemp973=CodeEs(nctemp966,nctemp968);
struct symbol* nctemp979= tp;
nctempchar1* nctemp981=SymGetarray(nctemp979);
nctempchar1* nctemp977= nctemp981;
struct nctempchar1 *nctemp984;
static struct nctempchar1 nctemp985 = {{ 6}, (char*)"array\0"};
nctemp984=&nctemp985;
nctempchar1* nctemp982= nctemp984;
int nctemp986=LibeStrcmp(nctemp977,nctemp982);
int nctemp974 = (nctemp986 ==1);
if(nctemp974)
{
struct symbol* nctemp991= tp;
int nctemp993=SymGetrank(nctemp991);
int nctemp989= nctemp993;
int nctemp994=CodeEd(nctemp989);
struct tree* nctemp996= p;
struct nctempchar1 *nctemp1000;
static struct nctempchar1 nctemp1001 = {{ 3}, (char*)" *\0"};
nctemp1000=&nctemp1001;
nctempchar1* nctemp998= nctemp1000;
int nctemp1002=CodeEs(nctemp996,nctemp998);
}
struct symbol* nctemp1008= tp;
nctempchar1* nctemp1010=SymGetstruct(nctemp1008);
nctempchar1* nctemp1006= nctemp1010;
struct nctempchar1 *nctemp1013;
static struct nctempchar1 nctemp1014 = {{ 7}, (char*)"struct\0"};
nctemp1013=&nctemp1014;
nctempchar1* nctemp1011= nctemp1013;
int nctemp1015=LibeStrcmp(nctemp1006,nctemp1011);
int nctemp1003 = (nctemp1015 ==1);
if(nctemp1003)
{
struct tree* nctemp1018= p;
struct nctempchar1 *nctemp1022;
static struct nctempchar1 nctemp1023 = {{ 2}, (char*)"*\0"};
nctemp1022=&nctemp1023;
nctempchar1* nctemp1020= nctemp1022;
int nctemp1024=CodeEs(nctemp1018,nctemp1020);
}
struct tree* nctemp1026= p;
struct nctempchar1 *nctemp1030;
static struct nctempchar1 nctemp1031 = {{ 2}, (char*)" \0"};
nctemp1030=&nctemp1031;
nctempchar1* nctemp1028= nctemp1030;
int nctemp1032=CodeEs(nctemp1026,nctemp1028);
struct tree* nctemp1034= p;
struct symbol* nctemp1038= tp;
nctempchar1* nctemp1040=SymGetname(nctemp1038);
nctempchar1* nctemp1036= nctemp1040;
int nctemp1041=CodeEs(nctemp1034,nctemp1036);
struct tree* nctemp1043= p;
struct nctempchar1 *nctemp1047;
static struct nctempchar1 nctemp1048 = {{ 3}, (char*)" (\0"};
nctemp1047=&nctemp1048;
nctempchar1* nctemp1045= nctemp1047;
int nctemp1049=CodeEs(nctemp1043,nctemp1045);
struct symbol* nctemp1054= tp;
struct symbol* nctemp1056=SymGetable(nctemp1054);
tp =nctemp1056;
int nctemp1057 = (tp ==0);
if(nctemp1057)
{
struct tree* nctemp1062= p;
struct nctempchar1 *nctemp1066;
static struct nctempchar1 nctemp1067 = {{ 5}, (char*)");\n\0"};
nctemp1066=&nctemp1067;
nctempchar1* nctemp1064= nctemp1066;
int nctemp1068=CodeEs(nctemp1062,nctemp1064);
return 1;
}
struct symbol* nctemp1074= tp;
struct symbol* nctemp1076=SymMvnext(nctemp1074);
tp =nctemp1076;
struct symbol* nctemp1081= tp;
struct symbol* nctemp1083=SymGetable(nctemp1081);
tp =nctemp1083;
int nctemp1084 = (tp ==0);
if(nctemp1084)
{
return 1;
}
struct symbol* nctemp1093= tp;
struct symbol* nctemp1095=SymMvnext(nctemp1093);
tp =nctemp1095;
int nctemp1096 = (tp !=0);
int nctemp1100=nctemp1096;
while(nctemp1100)
{{
struct tree* nctemp1102= p;
struct symbol* nctemp1104= tp;
int nctemp1106=CodeIdeclaration(nctemp1102,nctemp1104);
struct symbol* nctemp1111= tp;
struct symbol* nctemp1113=SymMvnext(nctemp1111);
tp =nctemp1113;
int nctemp1114 = (tp !=0);
if(nctemp1114)
{
struct tree* nctemp1119= p;
struct nctempchar1 *nctemp1123;
static struct nctempchar1 nctemp1124 = {{ 2}, (char*)",\0"};
nctemp1123=&nctemp1124;
nctempchar1* nctemp1121= nctemp1123;
int nctemp1125=CodeEs(nctemp1119,nctemp1121);
}
else{
struct tree* nctemp1127= p;
struct nctempchar1 *nctemp1131;
static struct nctempchar1 nctemp1132 = {{ 5}, (char*)");\n\0"};
nctemp1131=&nctemp1132;
nctempchar1* nctemp1129= nctemp1131;
int nctemp1133=CodeEs(nctemp1127,nctemp1129);
}
}
int nctemp1134 = (tp !=0);
nctemp1100=nctemp1134;}return 1;
}
int CodeImport (struct tree* p,struct symbol* tp)
{
nctempchar1 *module;
struct tree* nctemp1144= p;
nctempchar1* nctemp1146=PtreeGetdef(nctemp1144);
module=nctemp1146;
struct symbol* nctemp1151= tp;
struct symbol* nctemp1153=SymMvnext(nctemp1151);
tp =nctemp1153;
int nctemp1154 = (tp !=0);
int nctemp1158=nctemp1154;
while(nctemp1158)
{{
struct symbol* nctemp1164= tp;
nctempchar1* nctemp1166=SymGetmodule(nctemp1164);
nctempchar1* nctemp1162= nctemp1166;
nctempchar1* nctemp1167= module;
int nctemp1170=LibeStrcmp(nctemp1162,nctemp1167);
int nctemp1159 = (nctemp1170 ==1);
if(nctemp1159)
{
struct symbol* nctemp1177= tp;
nctempchar1* nctemp1179=SymGetstruct(nctemp1177);
nctempchar1* nctemp1175= nctemp1179;
struct nctempchar1 *nctemp1182;
static struct nctempchar1 nctemp1183 = {{ 10}, (char*)"structdef\0"};
nctemp1182=&nctemp1183;
nctempchar1* nctemp1180= nctemp1182;
int nctemp1184=LibeStrcmp(nctemp1175,nctemp1180);
int nctemp1172 = (nctemp1184 ==1);
if(nctemp1172)
{
struct tree* nctemp1187= p;
struct symbol* nctemp1189= tp;
int nctemp1191=CodeStructdefsym(nctemp1187,nctemp1189);
}
else{
struct symbol* nctemp1197= tp;
nctempchar1* nctemp1199=SymGetfunc(nctemp1197);
nctempchar1* nctemp1195= nctemp1199;
struct nctempchar1 *nctemp1202;
static struct nctempchar1 nctemp1203 = {{ 5}, (char*)"fdef\0"};
nctemp1202=&nctemp1203;
nctempchar1* nctemp1200= nctemp1202;
int nctemp1204=LibeStrcmp(nctemp1195,nctemp1200);
int nctemp1192 = (nctemp1204 ==1);
if(nctemp1192)
{
struct tree* nctemp1207= p;
struct symbol* nctemp1209= tp;
int nctemp1211=CodeFdefcpusym(nctemp1207,nctemp1209);
}
else{
struct tree* nctemp1213= p;
struct symbol* nctemp1215= tp;
int nctemp1217=CodeIdeclaration(nctemp1213,nctemp1215);
struct tree* nctemp1219= p;
struct nctempchar1 *nctemp1223;
static struct nctempchar1 nctemp1224 = {{ 4}, (char*)";\n\0"};
nctemp1223=&nctemp1224;
nctempchar1* nctemp1221= nctemp1223;
int nctemp1225=CodeEs(nctemp1219,nctemp1221);
}
}
}
struct symbol* nctemp1230= tp;
struct symbol* nctemp1232=SymMvnext(nctemp1230);
tp =nctemp1232;
}
int nctemp1233 = (tp !=0);
nctemp1158=nctemp1233;}return 1;
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
struct tree* nctemp1243= p;
nctempchar1* nctemp1245=PtreeGetarray(nctemp1243);
nctempchar1* nctemp1241= nctemp1245;
struct nctempchar1 *nctemp1248;
static struct nctempchar1 nctemp1249 = {{ 6}, (char*)"array\0"};
nctemp1248=&nctemp1249;
nctempchar1* nctemp1246= nctemp1248;
int nctemp1250=LibeStrcmp(nctemp1241,nctemp1246);
int nctemp1238 = (nctemp1250 ==1);
if(nctemp1238)
{
struct tree* nctemp1256= p;
struct tree* nctemp1258=PtreeMvchild(nctemp1256);
p =nctemp1258;
struct tree* nctemp1263= p;
struct tree* nctemp1265=PtreeMvsister(nctemp1263);
p =nctemp1265;
struct tree* nctemp1271= p;
nctempchar1* nctemp1273=PtreeGetforw(nctemp1271);
nctempchar1* nctemp1269= nctemp1273;
struct nctempchar1 *nctemp1276;
static struct nctempchar1 nctemp1277 = {{ 5}, (char*)"forw\0"};
nctemp1276=&nctemp1277;
nctempchar1* nctemp1274= nctemp1276;
int nctemp1278=LibeStrcmp(nctemp1269,nctemp1274);
int nctemp1266 = (nctemp1278 ==1);
if(nctemp1266)
{
forw = 1;
}
}
else{
struct tree* nctemp1284= p;
struct tree* nctemp1286=PtreeMvchild(nctemp1284);
p =nctemp1286;
struct tree* nctemp1292= p;
nctempchar1* nctemp1294=PtreeGetforw(nctemp1292);
nctempchar1* nctemp1290= nctemp1294;
struct nctempchar1 *nctemp1297;
static struct nctempchar1 nctemp1298 = {{ 5}, (char*)"forw\0"};
nctemp1297=&nctemp1298;
nctempchar1* nctemp1295= nctemp1297;
int nctemp1299=LibeStrcmp(nctemp1290,nctemp1295);
int nctemp1287 = (nctemp1299 ==1);
if(nctemp1287)
{
forw = 1;
}
}
struct tree* nctemp1307= p;
nctempchar1* nctemp1309=PtreeGetdef(nctemp1307);
nctempchar1* nctemp1305= nctemp1309;
struct symbol* nctemp1312=SymGetetp();
struct symbol* nctemp1310= nctemp1312;
struct symbol* nctemp1313=SymLookup(nctemp1305,nctemp1310);
tp =nctemp1313;
struct symbol* nctemp1319= tp;
nctempchar1* nctemp1321=SymGetstruct(nctemp1319);
nctempchar1* nctemp1317= nctemp1321;
struct nctempchar1 *nctemp1324;
static struct nctempchar1 nctemp1325 = {{ 7}, (char*)"struct\0"};
nctemp1324=&nctemp1325;
nctempchar1* nctemp1322= nctemp1324;
int nctemp1326=LibeStrcmp(nctemp1317,nctemp1322);
int nctemp1314 = (nctemp1326 ==1);
if(nctemp1314)
{
struct tree* nctemp1329= p;
struct nctempchar1 *nctemp1333;
static struct nctempchar1 nctemp1334 = {{ 8}, (char*)"struct \0"};
nctemp1333=&nctemp1334;
nctempchar1* nctemp1331= nctemp1333;
int nctemp1335=CodeEs(nctemp1329,nctemp1331);
}
struct symbol* nctemp1341= tp;
nctempchar1* nctemp1343=SymGetarray(nctemp1341);
nctempchar1* nctemp1339= nctemp1343;
struct nctempchar1 *nctemp1346;
static struct nctempchar1 nctemp1347 = {{ 6}, (char*)"array\0"};
nctemp1346=&nctemp1347;
nctempchar1* nctemp1344= nctemp1346;
int nctemp1348=LibeStrcmp(nctemp1339,nctemp1344);
int nctemp1336 = (nctemp1348 ==1);
if(nctemp1336)
{
struct tree* nctemp1351= p;
struct nctempchar1 *nctemp1355;
static struct nctempchar1 nctemp1356 = {{ 7}, (char*)"nctemp\0"};
nctemp1355=&nctemp1356;
nctempchar1* nctemp1353= nctemp1355;
int nctemp1357=CodeEs(nctemp1351,nctemp1353);
}
struct tree* nctemp1359= p;
struct symbol* nctemp1363= tp;
nctempchar1* nctemp1365=SymGetype(nctemp1363);
nctempchar1* nctemp1361= nctemp1365;
int nctemp1366=CodeEs(nctemp1359,nctemp1361);
struct symbol* nctemp1372= tp;
nctempchar1* nctemp1374=SymGetarray(nctemp1372);
nctempchar1* nctemp1370= nctemp1374;
struct nctempchar1 *nctemp1377;
static struct nctempchar1 nctemp1378 = {{ 6}, (char*)"array\0"};
nctemp1377=&nctemp1378;
nctempchar1* nctemp1375= nctemp1377;
int nctemp1379=LibeStrcmp(nctemp1370,nctemp1375);
int nctemp1367 = (nctemp1379 ==1);
if(nctemp1367)
{
struct symbol* nctemp1384= tp;
int nctemp1386=SymGetrank(nctemp1384);
int nctemp1382= nctemp1386;
int nctemp1387=CodeEd(nctemp1382);
struct tree* nctemp1389= p;
struct nctempchar1 *nctemp1393;
static struct nctempchar1 nctemp1394 = {{ 3}, (char*)" *\0"};
nctemp1393=&nctemp1394;
nctempchar1* nctemp1391= nctemp1393;
int nctemp1395=CodeEs(nctemp1389,nctemp1391);
}
struct symbol* nctemp1401= tp;
nctempchar1* nctemp1403=SymGetstruct(nctemp1401);
nctempchar1* nctemp1399= nctemp1403;
struct nctempchar1 *nctemp1406;
static struct nctempchar1 nctemp1407 = {{ 7}, (char*)"struct\0"};
nctemp1406=&nctemp1407;
nctempchar1* nctemp1404= nctemp1406;
int nctemp1408=LibeStrcmp(nctemp1399,nctemp1404);
int nctemp1396 = (nctemp1408 ==1);
if(nctemp1396)
{
struct tree* nctemp1411= p;
struct nctempchar1 *nctemp1415;
static struct nctempchar1 nctemp1416 = {{ 2}, (char*)"*\0"};
nctemp1415=&nctemp1416;
nctempchar1* nctemp1413= nctemp1415;
int nctemp1417=CodeEs(nctemp1411,nctemp1413);
}
struct tree* nctemp1419= p;
struct nctempchar1 *nctemp1423;
static struct nctempchar1 nctemp1424 = {{ 2}, (char*)" \0"};
nctemp1423=&nctemp1424;
nctempchar1* nctemp1421= nctemp1423;
int nctemp1425=CodeEs(nctemp1419,nctemp1421);
struct tree* nctemp1427= p;
struct symbol* nctemp1431= tp;
nctempchar1* nctemp1433=SymGetname(nctemp1431);
nctempchar1* nctemp1429= nctemp1433;
int nctemp1434=CodeEs(nctemp1427,nctemp1429);
struct tree* nctemp1436= p;
struct nctempchar1 *nctemp1440;
static struct nctempchar1 nctemp1441 = {{ 3}, (char*)" (\0"};
nctemp1440=&nctemp1441;
nctempchar1* nctemp1438= nctemp1440;
int nctemp1442=CodeEs(nctemp1436,nctemp1438);
struct tree* nctemp1446= p;
struct tree* nctemp1448=PtreeMvchild(nctemp1446);
int nctemp1443 = (nctemp1448 !=0);
if(nctemp1443)
{
struct tree* nctemp1454= p;
struct tree* nctemp1456=PtreeMvchild(nctemp1454);
p =nctemp1456;
}
struct tree* nctemp1462= p;
nctempchar1* nctemp1464=PtreeGetname(nctemp1462);
nctempchar1* nctemp1460= nctemp1464;
struct nctempchar1 *nctemp1467;
static struct nctempchar1 nctemp1468 = {{ 8}, (char*)"arglist\0"};
nctemp1467=&nctemp1468;
nctempchar1* nctemp1465= nctemp1467;
int nctemp1469=LibeStrcmp(nctemp1460,nctemp1465);
int nctemp1457 = (nctemp1469 ==1);
if(nctemp1457)
{
struct symbol* nctemp1475= tp;
struct symbol* nctemp1477=SymGetable(nctemp1475);
tp =nctemp1477;
struct nctempchar1 *nctemp1484;
static struct nctempchar1 nctemp1485 = {{ 9}, (char*)"#arglist\0"};
nctemp1484=&nctemp1485;
nctempchar1* nctemp1482= nctemp1484;
struct symbol* nctemp1486= tp;
struct symbol* nctemp1488=SymLookup(nctemp1482,nctemp1486);
tp =nctemp1488;
struct symbol* nctemp1493= tp;
struct symbol* nctemp1495=SymGetable(nctemp1493);
tp =nctemp1495;
struct symbol* nctemp1503= tp;
struct symbol* nctemp1505=SymMvnext(nctemp1503);
tp =nctemp1505;
int nctemp1496 = (tp !=0);
int nctemp1507=nctemp1496;
while(nctemp1507)
{{
struct tree* nctemp1509= p;
struct symbol* nctemp1511= tp;
int nctemp1513=CodeIdeclaration(nctemp1509,nctemp1511);
struct symbol* nctemp1517= tp;
struct symbol* nctemp1519=SymMvnext(nctemp1517);
int nctemp1514 = (nctemp1519 !=0);
if(nctemp1514)
{
struct tree* nctemp1522= p;
struct nctempchar1 *nctemp1526;
static struct nctempchar1 nctemp1527 = {{ 2}, (char*)",\0"};
nctemp1526=&nctemp1527;
nctempchar1* nctemp1524= nctemp1526;
int nctemp1528=CodeEs(nctemp1522,nctemp1524);
}
noarg = (noarg + 1);
}
struct symbol* nctemp1536= tp;
struct symbol* nctemp1538=SymMvnext(nctemp1536);
tp =nctemp1538;
int nctemp1529 = (tp !=0);
nctemp1507=nctemp1529;}}
struct tree* nctemp1541= p;
struct nctempchar1 *nctemp1545;
static struct nctempchar1 nctemp1546 = {{ 4}, (char*)")\n\0"};
nctemp1545=&nctemp1546;
nctempchar1* nctemp1543= nctemp1545;
int nctemp1547=CodeEs(nctemp1541,nctemp1543);
int nctemp1548 = (forw ==1);
if(nctemp1548)
{
struct tree* nctemp1553= p;
struct nctempchar1 *nctemp1557;
static struct nctempchar1 nctemp1558 = {{ 4}, (char*)";\n\0"};
nctemp1557=&nctemp1558;
nctempchar1* nctemp1555= nctemp1557;
int nctemp1559=CodeEs(nctemp1553,nctemp1555);
return 1;
}
struct tree* nctemp1564= p;
struct tree* nctemp1566=PtreeMvsister(nctemp1564);
int nctemp1561 = (nctemp1566 !=0);
if(nctemp1561)
{
struct tree* nctemp1571= p;
struct tree* nctemp1573=PtreeMvsister(nctemp1571);
struct tree* nctemp1569= nctemp1573;
int nctemp1574=CodeCompstmnt(nctemp1569);
}
else{
struct tree* nctemp1576= p;
int nctemp1578=CodeCompstmnt(nctemp1576);
}
return 1;
}
int CodeFdeclkernel (struct tree* p)
{
struct symbol* tp;
int noarg;
noarg = 0;
struct tree* nctemp1586= p;
nctempchar1* nctemp1588=PtreeGetdef(nctemp1586);
nctempchar1* nctemp1584= nctemp1588;
struct symbol* nctemp1591=SymGetetp();
struct symbol* nctemp1589= nctemp1591;
struct symbol* nctemp1592=SymLookup(nctemp1584,nctemp1589);
tp =nctemp1592;
struct symbol* nctemp1596= tp;
struct symbol* nctemp1598=SymGetable(nctemp1596);
struct symbol* nctemp1594= nctemp1598;
struct symbol* nctemp1599=SymSetltp(nctemp1594);
struct tree* nctemp1601= p;
struct nctempchar1 *nctemp1605;
static struct nctempchar1 nctemp1606 = {{ 12}, (char*)"__global__ \0"};
nctemp1605=&nctemp1606;
nctempchar1* nctemp1603= nctemp1605;
int nctemp1607=CodeEs(nctemp1601,nctemp1603);
struct tree* nctemp1609= p;
struct nctempchar1 *nctemp1613;
static struct nctempchar1 nctemp1614 = {{ 5}, (char*)"void\0"};
nctemp1613=&nctemp1614;
nctempchar1* nctemp1611= nctemp1613;
int nctemp1615=CodeEs(nctemp1609,nctemp1611);
struct symbol* nctemp1621= tp;
nctempchar1* nctemp1623=SymGetarray(nctemp1621);
nctempchar1* nctemp1619= nctemp1623;
struct nctempchar1 *nctemp1626;
static struct nctempchar1 nctemp1627 = {{ 6}, (char*)"array\0"};
nctemp1626=&nctemp1627;
nctempchar1* nctemp1624= nctemp1626;
int nctemp1628=LibeStrcmp(nctemp1619,nctemp1624);
int nctemp1616 = (nctemp1628 ==1);
if(nctemp1616)
{
struct symbol* nctemp1633= tp;
int nctemp1635=SymGetrank(nctemp1633);
int nctemp1631= nctemp1635;
int nctemp1636=CodeEd(nctemp1631);
}
struct symbol* nctemp1642= tp;
nctempchar1* nctemp1644=SymGetstruct(nctemp1642);
nctempchar1* nctemp1640= nctemp1644;
struct nctempchar1 *nctemp1647;
static struct nctempchar1 nctemp1648 = {{ 7}, (char*)"struct\0"};
nctemp1647=&nctemp1648;
nctempchar1* nctemp1645= nctemp1647;
int nctemp1649=LibeStrcmp(nctemp1640,nctemp1645);
int nctemp1637 = (nctemp1649 ==1);
if(nctemp1637)
{
struct tree* nctemp1652= p;
struct nctempchar1 *nctemp1656;
static struct nctempchar1 nctemp1657 = {{ 2}, (char*)"*\0"};
nctemp1656=&nctemp1657;
nctempchar1* nctemp1654= nctemp1656;
int nctemp1658=CodeEs(nctemp1652,nctemp1654);
}
struct tree* nctemp1660= p;
struct nctempchar1 *nctemp1664;
static struct nctempchar1 nctemp1665 = {{ 2}, (char*)" \0"};
nctemp1664=&nctemp1665;
nctempchar1* nctemp1662= nctemp1664;
int nctemp1666=CodeEs(nctemp1660,nctemp1662);
struct tree* nctemp1668= p;
struct nctempchar1 *nctemp1672;
static struct nctempchar1 nctemp1673 = {{ 8}, (char*)"kernel_\0"};
nctemp1672=&nctemp1673;
nctempchar1* nctemp1670= nctemp1672;
int nctemp1674=CodeEs(nctemp1668,nctemp1670);
struct tree* nctemp1676= p;
struct symbol* nctemp1680= tp;
nctempchar1* nctemp1682=SymGetname(nctemp1680);
nctempchar1* nctemp1678= nctemp1682;
int nctemp1683=CodeEs(nctemp1676,nctemp1678);
struct tree* nctemp1685= p;
struct nctempchar1 *nctemp1689;
static struct nctempchar1 nctemp1690 = {{ 3}, (char*)" (\0"};
nctemp1689=&nctemp1690;
nctempchar1* nctemp1687= nctemp1689;
int nctemp1691=CodeEs(nctemp1685,nctemp1687);
struct tree* nctemp1696= p;
struct tree* nctemp1698=PtreeMvchild(nctemp1696);
p =nctemp1698;
struct tree* nctemp1704= p;
nctempchar1* nctemp1706=PtreeGetname(nctemp1704);
nctempchar1* nctemp1702= nctemp1706;
struct nctempchar1 *nctemp1709;
static struct nctempchar1 nctemp1710 = {{ 8}, (char*)"arglist\0"};
nctemp1709=&nctemp1710;
nctempchar1* nctemp1707= nctemp1709;
int nctemp1711=LibeStrcmp(nctemp1702,nctemp1707);
int nctemp1699 = (nctemp1711 ==1);
if(nctemp1699)
{
struct symbol* nctemp1717= tp;
struct symbol* nctemp1719=SymGetable(nctemp1717);
tp =nctemp1719;
struct nctempchar1 *nctemp1726;
static struct nctempchar1 nctemp1727 = {{ 9}, (char*)"#arglist\0"};
nctemp1726=&nctemp1727;
nctempchar1* nctemp1724= nctemp1726;
struct symbol* nctemp1728= tp;
struct symbol* nctemp1730=SymLookup(nctemp1724,nctemp1728);
tp =nctemp1730;
struct symbol* nctemp1735= tp;
struct symbol* nctemp1737=SymGetable(nctemp1735);
tp =nctemp1737;
struct symbol* nctemp1745= tp;
struct symbol* nctemp1747=SymMvnext(nctemp1745);
tp =nctemp1747;
int nctemp1738 = (tp !=0);
int nctemp1749=nctemp1738;
while(nctemp1749)
{{
struct tree* nctemp1751= p;
struct symbol* nctemp1753= tp;
int nctemp1755=CodeIdeclaration(nctemp1751,nctemp1753);
struct symbol* nctemp1759= tp;
struct symbol* nctemp1761=SymMvnext(nctemp1759);
int nctemp1756 = (nctemp1761 !=0);
if(nctemp1756)
{
struct tree* nctemp1764= p;
struct nctempchar1 *nctemp1768;
static struct nctempchar1 nctemp1769 = {{ 2}, (char*)",\0"};
nctemp1768=&nctemp1769;
nctempchar1* nctemp1766= nctemp1768;
int nctemp1770=CodeEs(nctemp1764,nctemp1766);
}
noarg = (noarg + 1);
}
struct symbol* nctemp1778= tp;
struct symbol* nctemp1780=SymMvnext(nctemp1778);
tp =nctemp1780;
int nctemp1771 = (tp !=0);
nctemp1749=nctemp1771;}}
struct tree* nctemp1783= p;
struct nctempchar1 *nctemp1787;
static struct nctempchar1 nctemp1788 = {{ 5}, (char*)");\n\0"};
nctemp1787=&nctemp1788;
nctempchar1* nctemp1785= nctemp1787;
int nctemp1789=CodeEs(nctemp1783,nctemp1785);
return 1;
}
int CodeFdefgpu (struct tree* p)
{
struct symbol* tp;
int noarg;
int forw;
noarg = 0;
forw = 0;
struct tree* nctemp1796= p;
nctempchar1* nctemp1798=PtreeGetarray(nctemp1796);
nctempchar1* nctemp1794= nctemp1798;
struct nctempchar1 *nctemp1801;
static struct nctempchar1 nctemp1802 = {{ 6}, (char*)"array\0"};
nctemp1801=&nctemp1802;
nctempchar1* nctemp1799= nctemp1801;
int nctemp1803=LibeStrcmp(nctemp1794,nctemp1799);
int nctemp1791 = (nctemp1803 ==1);
if(nctemp1791)
{
struct tree* nctemp1809= p;
struct tree* nctemp1811=PtreeMvchild(nctemp1809);
p =nctemp1811;
struct tree* nctemp1816= p;
struct tree* nctemp1818=PtreeMvsister(nctemp1816);
p =nctemp1818;
struct tree* nctemp1824= p;
nctempchar1* nctemp1826=PtreeGetforw(nctemp1824);
nctempchar1* nctemp1822= nctemp1826;
struct nctempchar1 *nctemp1829;
static struct nctempchar1 nctemp1830 = {{ 5}, (char*)"forw\0"};
nctemp1829=&nctemp1830;
nctempchar1* nctemp1827= nctemp1829;
int nctemp1831=LibeStrcmp(nctemp1822,nctemp1827);
int nctemp1819 = (nctemp1831 ==1);
if(nctemp1819)
{
forw = 1;
}
}
else{
struct tree* nctemp1837= p;
struct tree* nctemp1839=PtreeMvchild(nctemp1837);
p =nctemp1839;
struct tree* nctemp1845= p;
nctempchar1* nctemp1847=PtreeGetforw(nctemp1845);
nctempchar1* nctemp1843= nctemp1847;
struct nctempchar1 *nctemp1850;
static struct nctempchar1 nctemp1851 = {{ 5}, (char*)"forw\0"};
nctemp1850=&nctemp1851;
nctempchar1* nctemp1848= nctemp1850;
int nctemp1852=LibeStrcmp(nctemp1843,nctemp1848);
int nctemp1840 = (nctemp1852 ==1);
if(nctemp1840)
{
forw = 1;
}
}
struct tree* nctemp1860= p;
nctempchar1* nctemp1862=PtreeGetdef(nctemp1860);
nctempchar1* nctemp1858= nctemp1862;
struct symbol* nctemp1865=SymGetetp();
struct symbol* nctemp1863= nctemp1865;
struct symbol* nctemp1866=SymLookup(nctemp1858,nctemp1863);
tp =nctemp1866;
struct tree* nctemp1868= p;
struct nctempchar1 *nctemp1872;
static struct nctempchar1 nctemp1873 = {{ 11}, (char*)"__global__\0"};
nctemp1872=&nctemp1873;
nctempchar1* nctemp1870= nctemp1872;
int nctemp1874=CodeEs(nctemp1868,nctemp1870);
struct tree* nctemp1876= p;
struct nctempchar1 *nctemp1880;
static struct nctempchar1 nctemp1881 = {{ 6}, (char*)" void\0"};
nctemp1880=&nctemp1881;
nctempchar1* nctemp1878= nctemp1880;
int nctemp1882=CodeEs(nctemp1876,nctemp1878);
struct tree* nctemp1884= p;
struct nctempchar1 *nctemp1888;
static struct nctempchar1 nctemp1889 = {{ 2}, (char*)" \0"};
nctemp1888=&nctemp1889;
nctempchar1* nctemp1886= nctemp1888;
int nctemp1890=CodeEs(nctemp1884,nctemp1886);
struct tree* nctemp1892= p;
struct nctempchar1 *nctemp1896;
static struct nctempchar1 nctemp1897 = {{ 8}, (char*)"kernel_\0"};
nctemp1896=&nctemp1897;
nctempchar1* nctemp1894= nctemp1896;
int nctemp1898=CodeEs(nctemp1892,nctemp1894);
struct tree* nctemp1900= p;
struct symbol* nctemp1904= tp;
nctempchar1* nctemp1906=SymGetname(nctemp1904);
nctempchar1* nctemp1902= nctemp1906;
int nctemp1907=CodeEs(nctemp1900,nctemp1902);
struct tree* nctemp1909= p;
struct nctempchar1 *nctemp1913;
static struct nctempchar1 nctemp1914 = {{ 3}, (char*)" (\0"};
nctemp1913=&nctemp1914;
nctempchar1* nctemp1911= nctemp1913;
int nctemp1915=CodeEs(nctemp1909,nctemp1911);
struct tree* nctemp1919= p;
struct tree* nctemp1921=PtreeMvchild(nctemp1919);
int nctemp1916 = (nctemp1921 !=0);
if(nctemp1916)
{
struct tree* nctemp1927= p;
struct tree* nctemp1929=PtreeMvchild(nctemp1927);
p =nctemp1929;
}
struct tree* nctemp1935= p;
nctempchar1* nctemp1937=PtreeGetname(nctemp1935);
nctempchar1* nctemp1933= nctemp1937;
struct nctempchar1 *nctemp1940;
static struct nctempchar1 nctemp1941 = {{ 8}, (char*)"arglist\0"};
nctemp1940=&nctemp1941;
nctempchar1* nctemp1938= nctemp1940;
int nctemp1942=LibeStrcmp(nctemp1933,nctemp1938);
int nctemp1930 = (nctemp1942 ==1);
if(nctemp1930)
{
struct symbol* nctemp1948= tp;
struct symbol* nctemp1950=SymGetable(nctemp1948);
tp =nctemp1950;
struct nctempchar1 *nctemp1957;
static struct nctempchar1 nctemp1958 = {{ 9}, (char*)"#arglist\0"};
nctemp1957=&nctemp1958;
nctempchar1* nctemp1955= nctemp1957;
struct symbol* nctemp1959= tp;
struct symbol* nctemp1961=SymLookup(nctemp1955,nctemp1959);
tp =nctemp1961;
struct symbol* nctemp1966= tp;
struct symbol* nctemp1968=SymGetable(nctemp1966);
tp =nctemp1968;
struct symbol* nctemp1976= tp;
struct symbol* nctemp1978=SymMvnext(nctemp1976);
tp =nctemp1978;
int nctemp1969 = (tp !=0);
int nctemp1980=nctemp1969;
while(nctemp1980)
{{
struct tree* nctemp1982= p;
struct symbol* nctemp1984= tp;
int nctemp1986=CodeIdeclaration(nctemp1982,nctemp1984);
struct symbol* nctemp1990= tp;
struct symbol* nctemp1992=SymMvnext(nctemp1990);
int nctemp1987 = (nctemp1992 !=0);
if(nctemp1987)
{
struct tree* nctemp1995= p;
struct nctempchar1 *nctemp1999;
static struct nctempchar1 nctemp2000 = {{ 2}, (char*)",\0"};
nctemp1999=&nctemp2000;
nctempchar1* nctemp1997= nctemp1999;
int nctemp2001=CodeEs(nctemp1995,nctemp1997);
}
noarg = (noarg + 1);
}
struct symbol* nctemp2009= tp;
struct symbol* nctemp2011=SymMvnext(nctemp2009);
tp =nctemp2011;
int nctemp2002 = (tp !=0);
nctemp1980=nctemp2002;}}
struct tree* nctemp2014= p;
struct nctempchar1 *nctemp2018;
static struct nctempchar1 nctemp2019 = {{ 4}, (char*)")\n\0"};
nctemp2018=&nctemp2019;
nctempchar1* nctemp2016= nctemp2018;
int nctemp2020=CodeEs(nctemp2014,nctemp2016);
int nctemp2021 = (forw ==1);
if(nctemp2021)
{
struct tree* nctemp2026= p;
struct nctempchar1 *nctemp2030;
static struct nctempchar1 nctemp2031 = {{ 4}, (char*)";\n\0"};
nctemp2030=&nctemp2031;
nctempchar1* nctemp2028= nctemp2030;
int nctemp2032=CodeEs(nctemp2026,nctemp2028);
return 1;
}
struct tree* nctemp2037= p;
struct tree* nctemp2039=PtreeMvsister(nctemp2037);
int nctemp2034 = (nctemp2039 !=0);
if(nctemp2034)
{
struct tree* nctemp2044= p;
struct tree* nctemp2046=PtreeMvsister(nctemp2044);
struct tree* nctemp2042= nctemp2046;
int nctemp2047=CodeCompstmnt(nctemp2042);
}
else{
struct tree* nctemp2049= p;
int nctemp2051=CodeCompstmnt(nctemp2049);
}
return 1;
}
int CodeFdewrappergpu (struct tree* p)
{
struct tree* top;
struct symbol* tp;
struct symbol* toptp;
int noarg;
struct tree* nctemp2057= p;
struct tree* nctemp2059=PtreeMvchild(nctemp2057);
p =nctemp2059;
noarg = 0;
struct tree* nctemp2066= p;
nctempchar1* nctemp2068=PtreeGetdef(nctemp2066);
nctempchar1* nctemp2064= nctemp2068;
struct symbol* nctemp2071=SymGetetp();
struct symbol* nctemp2069= nctemp2071;
struct symbol* nctemp2072=SymLookup(nctemp2064,nctemp2069);
tp =nctemp2072;
struct symbol* nctemp2076= tp;
struct symbol* nctemp2078=SymGetable(nctemp2076);
struct symbol* nctemp2074= nctemp2078;
struct symbol* nctemp2079=SymSetltp(nctemp2074);
struct symbol* nctemp2085= tp;
nctempchar1* nctemp2087=SymGetstruct(nctemp2085);
nctempchar1* nctemp2083= nctemp2087;
struct nctempchar1 *nctemp2090;
static struct nctempchar1 nctemp2091 = {{ 7}, (char*)"struct\0"};
nctemp2090=&nctemp2091;
nctempchar1* nctemp2088= nctemp2090;
int nctemp2092=LibeStrcmp(nctemp2083,nctemp2088);
int nctemp2080 = (nctemp2092 ==1);
if(nctemp2080)
{
struct tree* nctemp2095= p;
struct nctempchar1 *nctemp2099;
static struct nctempchar1 nctemp2100 = {{ 8}, (char*)"struct \0"};
nctemp2099=&nctemp2100;
nctempchar1* nctemp2097= nctemp2099;
int nctemp2101=CodeEs(nctemp2095,nctemp2097);
}
struct symbol* nctemp2107= tp;
nctempchar1* nctemp2109=SymGetarray(nctemp2107);
nctempchar1* nctemp2105= nctemp2109;
struct nctempchar1 *nctemp2112;
static struct nctempchar1 nctemp2113 = {{ 6}, (char*)"array\0"};
nctemp2112=&nctemp2113;
nctempchar1* nctemp2110= nctemp2112;
int nctemp2114=LibeStrcmp(nctemp2105,nctemp2110);
int nctemp2102 = (nctemp2114 ==1);
if(nctemp2102)
{
struct tree* nctemp2117= p;
struct nctempchar1 *nctemp2121;
static struct nctempchar1 nctemp2122 = {{ 7}, (char*)"nctemp\0"};
nctemp2121=&nctemp2122;
nctempchar1* nctemp2119= nctemp2121;
int nctemp2123=CodeEs(nctemp2117,nctemp2119);
}
struct tree* nctemp2125= p;
struct symbol* nctemp2129= tp;
nctempchar1* nctemp2131=SymGetype(nctemp2129);
nctempchar1* nctemp2127= nctemp2131;
int nctemp2132=CodeEs(nctemp2125,nctemp2127);
struct symbol* nctemp2138= tp;
nctempchar1* nctemp2140=SymGetarray(nctemp2138);
nctempchar1* nctemp2136= nctemp2140;
struct nctempchar1 *nctemp2143;
static struct nctempchar1 nctemp2144 = {{ 6}, (char*)"array\0"};
nctemp2143=&nctemp2144;
nctempchar1* nctemp2141= nctemp2143;
int nctemp2145=LibeStrcmp(nctemp2136,nctemp2141);
int nctemp2133 = (nctemp2145 ==1);
if(nctemp2133)
{
struct symbol* nctemp2150= tp;
int nctemp2152=SymGetrank(nctemp2150);
int nctemp2148= nctemp2152;
int nctemp2153=CodeEd(nctemp2148);
}
struct symbol* nctemp2159= tp;
nctempchar1* nctemp2161=SymGetstruct(nctemp2159);
nctempchar1* nctemp2157= nctemp2161;
struct nctempchar1 *nctemp2164;
static struct nctempchar1 nctemp2165 = {{ 7}, (char*)"struct\0"};
nctemp2164=&nctemp2165;
nctempchar1* nctemp2162= nctemp2164;
int nctemp2166=LibeStrcmp(nctemp2157,nctemp2162);
int nctemp2154 = (nctemp2166 ==1);
if(nctemp2154)
{
struct tree* nctemp2169= p;
struct nctempchar1 *nctemp2173;
static struct nctempchar1 nctemp2174 = {{ 2}, (char*)"*\0"};
nctemp2173=&nctemp2174;
nctempchar1* nctemp2171= nctemp2173;
int nctemp2175=CodeEs(nctemp2169,nctemp2171);
}
top = p;
toptp = tp;
struct tree* nctemp2177= p;
struct nctempchar1 *nctemp2181;
static struct nctempchar1 nctemp2182 = {{ 2}, (char*)" \0"};
nctemp2181=&nctemp2182;
nctempchar1* nctemp2179= nctemp2181;
int nctemp2183=CodeEs(nctemp2177,nctemp2179);
struct tree* nctemp2185= p;
struct symbol* nctemp2189= tp;
nctempchar1* nctemp2191=SymGetname(nctemp2189);
nctempchar1* nctemp2187= nctemp2191;
int nctemp2192=CodeEs(nctemp2185,nctemp2187);
struct tree* nctemp2194= p;
struct nctempchar1 *nctemp2198;
static struct nctempchar1 nctemp2199 = {{ 3}, (char*)" (\0"};
nctemp2198=&nctemp2199;
nctempchar1* nctemp2196= nctemp2198;
int nctemp2200=CodeEs(nctemp2194,nctemp2196);
struct tree* nctemp2205= p;
struct tree* nctemp2207=PtreeMvchild(nctemp2205);
p =nctemp2207;
struct tree* nctemp2213= p;
nctempchar1* nctemp2215=PtreeGetname(nctemp2213);
nctempchar1* nctemp2211= nctemp2215;
struct nctempchar1 *nctemp2218;
static struct nctempchar1 nctemp2219 = {{ 8}, (char*)"arglist\0"};
nctemp2218=&nctemp2219;
nctempchar1* nctemp2216= nctemp2218;
int nctemp2220=LibeStrcmp(nctemp2211,nctemp2216);
int nctemp2208 = (nctemp2220 ==1);
if(nctemp2208)
{
struct symbol* nctemp2226= tp;
struct symbol* nctemp2228=SymGetable(nctemp2226);
tp =nctemp2228;
struct nctempchar1 *nctemp2235;
static struct nctempchar1 nctemp2236 = {{ 9}, (char*)"#arglist\0"};
nctemp2235=&nctemp2236;
nctempchar1* nctemp2233= nctemp2235;
struct symbol* nctemp2237= tp;
struct symbol* nctemp2239=SymLookup(nctemp2233,nctemp2237);
tp =nctemp2239;
struct symbol* nctemp2244= tp;
struct symbol* nctemp2246=SymGetable(nctemp2244);
tp =nctemp2246;
struct symbol* nctemp2254= tp;
struct symbol* nctemp2256=SymMvnext(nctemp2254);
tp =nctemp2256;
int nctemp2247 = (tp !=0);
int nctemp2258=nctemp2247;
while(nctemp2258)
{{
struct tree* nctemp2260= p;
struct symbol* nctemp2262= tp;
int nctemp2264=CodeIdeclaration(nctemp2260,nctemp2262);
struct symbol* nctemp2268= tp;
struct symbol* nctemp2270=SymMvnext(nctemp2268);
int nctemp2265 = (nctemp2270 !=0);
if(nctemp2265)
{
struct tree* nctemp2273= p;
struct nctempchar1 *nctemp2277;
static struct nctempchar1 nctemp2278 = {{ 2}, (char*)",\0"};
nctemp2277=&nctemp2278;
nctempchar1* nctemp2275= nctemp2277;
int nctemp2279=CodeEs(nctemp2273,nctemp2275);
}
noarg = (noarg + 1);
}
struct symbol* nctemp2287= tp;
struct symbol* nctemp2289=SymMvnext(nctemp2287);
tp =nctemp2289;
int nctemp2280 = (tp !=0);
nctemp2258=nctemp2280;}}
struct tree* nctemp2292= p;
struct nctempchar1 *nctemp2296;
static struct nctempchar1 nctemp2297 = {{ 4}, (char*)")\n\0"};
nctemp2296=&nctemp2297;
nctempchar1* nctemp2294= nctemp2296;
int nctemp2298=CodeEs(nctemp2292,nctemp2294);
struct tree* nctemp2300= p;
struct nctempchar1 *nctemp2304;
static struct nctempchar1 nctemp2305 = {{ 4}, (char*)"{\n\0"};
nctemp2304=&nctemp2305;
nctempchar1* nctemp2302= nctemp2304;
int nctemp2306=CodeEs(nctemp2300,nctemp2302);
p = top;
tp = toptp;
struct tree* nctemp2308= p;
struct nctempchar1 *nctemp2312;
static struct nctempchar1 nctemp2313 = {{ 10}, (char*)"  kernel_\0"};
nctemp2312=&nctemp2313;
nctempchar1* nctemp2310= nctemp2312;
int nctemp2314=CodeEs(nctemp2308,nctemp2310);
struct tree* nctemp2316= p;
struct symbol* nctemp2320= tp;
nctempchar1* nctemp2322=SymGetname(nctemp2320);
nctempchar1* nctemp2318= nctemp2322;
int nctemp2323=CodeEs(nctemp2316,nctemp2318);
struct tree* nctemp2325= p;
struct nctempchar1 *nctemp2329;
static struct nctempchar1 nctemp2330 = {{ 31}, (char*)"<<< RunGetnb(),RunGetnt() >>>(\0"};
nctemp2329=&nctemp2330;
nctempchar1* nctemp2327= nctemp2329;
int nctemp2331=CodeEs(nctemp2325,nctemp2327);
struct tree* nctemp2336= p;
struct tree* nctemp2338=PtreeMvchild(nctemp2336);
p =nctemp2338;
struct tree* nctemp2344= p;
nctempchar1* nctemp2346=PtreeGetname(nctemp2344);
nctempchar1* nctemp2342= nctemp2346;
struct nctempchar1 *nctemp2349;
static struct nctempchar1 nctemp2350 = {{ 8}, (char*)"arglist\0"};
nctemp2349=&nctemp2350;
nctempchar1* nctemp2347= nctemp2349;
int nctemp2351=LibeStrcmp(nctemp2342,nctemp2347);
int nctemp2339 = (nctemp2351 ==1);
if(nctemp2339)
{
struct symbol* nctemp2357= tp;
struct symbol* nctemp2359=SymGetable(nctemp2357);
tp =nctemp2359;
struct nctempchar1 *nctemp2366;
static struct nctempchar1 nctemp2367 = {{ 9}, (char*)"#arglist\0"};
nctemp2366=&nctemp2367;
nctempchar1* nctemp2364= nctemp2366;
struct symbol* nctemp2368= tp;
struct symbol* nctemp2370=SymLookup(nctemp2364,nctemp2368);
tp =nctemp2370;
struct symbol* nctemp2375= tp;
struct symbol* nctemp2377=SymGetable(nctemp2375);
tp =nctemp2377;
struct symbol* nctemp2385= tp;
struct symbol* nctemp2387=SymMvnext(nctemp2385);
tp =nctemp2387;
int nctemp2378 = (tp !=0);
int nctemp2389=nctemp2378;
while(nctemp2389)
{{
struct tree* nctemp2391= p;
struct symbol* nctemp2395= tp;
nctempchar1* nctemp2397=SymGetname(nctemp2395);
nctempchar1* nctemp2393= nctemp2397;
int nctemp2398=CodeEs(nctemp2391,nctemp2393);
struct symbol* nctemp2402= tp;
struct symbol* nctemp2404=SymMvnext(nctemp2402);
int nctemp2399 = (nctemp2404 !=0);
if(nctemp2399)
{
struct tree* nctemp2407= p;
struct nctempchar1 *nctemp2411;
static struct nctempchar1 nctemp2412 = {{ 2}, (char*)",\0"};
nctemp2411=&nctemp2412;
nctempchar1* nctemp2409= nctemp2411;
int nctemp2413=CodeEs(nctemp2407,nctemp2409);
}
noarg = (noarg + 1);
}
struct symbol* nctemp2421= tp;
struct symbol* nctemp2423=SymMvnext(nctemp2421);
tp =nctemp2423;
int nctemp2414 = (tp !=0);
nctemp2389=nctemp2414;}}
struct tree* nctemp2426= p;
struct nctempchar1 *nctemp2430;
static struct nctempchar1 nctemp2431 = {{ 5}, (char*)");\n\0"};
nctemp2430=&nctemp2431;
nctempchar1* nctemp2428= nctemp2430;
int nctemp2432=CodeEs(nctemp2426,nctemp2428);
struct tree* nctemp2434= p;
struct nctempchar1 *nctemp2438;
static struct nctempchar1 nctemp2439 = {{ 14}, (char*)"GpuError();\n\0"};
nctemp2438=&nctemp2439;
nctempchar1* nctemp2436= nctemp2438;
int nctemp2440=CodeEs(nctemp2434,nctemp2436);
struct tree* nctemp2442= p;
struct nctempchar1 *nctemp2446;
static struct nctempchar1 nctemp2447 = {{ 13}, (char*)"return(1);\n\0"};
nctemp2446=&nctemp2447;
nctempchar1* nctemp2444= nctemp2446;
int nctemp2448=CodeEs(nctemp2442,nctemp2444);
struct tree* nctemp2450= p;
struct nctempchar1 *nctemp2454;
static struct nctempchar1 nctemp2455 = {{ 4}, (char*)"}\n\0"};
nctemp2454=&nctemp2455;
nctempchar1* nctemp2452= nctemp2454;
int nctemp2456=CodeEs(nctemp2450,nctemp2452);
return 1;
}
int CodeGdeclarations (struct tree* p,struct symbol* tp)
{
struct symbol* nctemp2462= tp;
struct symbol* nctemp2464=SymMvnext(nctemp2462);
tp =nctemp2464;
int nctemp2465 = (tp !=0);
int nctemp2469=nctemp2465;
while(nctemp2469)
{{
struct nctempchar1 *nctemp2475;
static struct nctempchar1 nctemp2476 = {{ 9}, (char*)"#arglist\0"};
nctemp2475=&nctemp2476;
nctempchar1* nctemp2473= nctemp2475;
struct symbol* nctemp2479= tp;
nctempchar1* nctemp2481=SymGetname(nctemp2479);
nctempchar1* nctemp2477= nctemp2481;
int nctemp2482=LibeStrcmp(nctemp2473,nctemp2477);
int nctemp2470 = (nctemp2482 ==0);
if(nctemp2470)
{
struct symbol* nctemp2487= tp;
int nctemp2489=SymGetemit(nctemp2487);
int nctemp2484 = (nctemp2489 ==1);
if(nctemp2484)
{
struct symbol* nctemp2496= tp;
nctempchar1* nctemp2498=SymGetstruct(nctemp2496);
nctempchar1* nctemp2494= nctemp2498;
struct nctempchar1 *nctemp2501;
static struct nctempchar1 nctemp2502 = {{ 10}, (char*)"structdef\0"};
nctemp2501=&nctemp2502;
nctempchar1* nctemp2499= nctemp2501;
int nctemp2503=LibeStrcmp(nctemp2494,nctemp2499);
int nctemp2491 = (nctemp2503 ==1);
if(nctemp2491)
{
struct tree* nctemp2506= p;
struct symbol* nctemp2508= tp;
int nctemp2510=CodeStructdef(nctemp2506,nctemp2508);
}
else{
struct symbol* nctemp2516= tp;
nctempchar1* nctemp2518=SymGetfunc(nctemp2516);
nctempchar1* nctemp2514= nctemp2518;
struct nctempchar1 *nctemp2521;
static struct nctempchar1 nctemp2522 = {{ 5}, (char*)"fdef\0"};
nctemp2521=&nctemp2522;
nctempchar1* nctemp2519= nctemp2521;
int nctemp2523=LibeStrcmp(nctemp2514,nctemp2519);
int nctemp2511 = (nctemp2523 ==1);
if(nctemp2511)
{
struct tree* nctemp2526= p;
int nctemp2528=CodeFdef(nctemp2526);
}
else{
struct symbol* nctemp2534= tp;
nctempchar1* nctemp2536=SymGetname(nctemp2534);
nctempchar1* nctemp2532= nctemp2536;
struct nctempchar1 *nctemp2539;
static struct nctempchar1 nctemp2540 = {{ 6}, (char*)"#self\0"};
nctemp2539=&nctemp2540;
nctempchar1* nctemp2537= nctemp2539;
int nctemp2541=LibeStrcmp(nctemp2532,nctemp2537);
int nctemp2529 = (nctemp2541 ==0);
if(nctemp2529)
{
struct tree* nctemp2544= p;
struct symbol* nctemp2546= tp;
int nctemp2548=CodeIdeclaration(nctemp2544,nctemp2546);
struct tree* nctemp2550= p;
struct nctempchar1 *nctemp2554;
static struct nctempchar1 nctemp2555 = {{ 4}, (char*)";\n\0"};
nctemp2554=&nctemp2555;
nctempchar1* nctemp2552= nctemp2554;
int nctemp2556=CodeEs(nctemp2550,nctemp2552);
}
}
}
struct symbol* nctemp2558= tp;
int nctemp2560= 0;
int nctemp2562=SymSetemit(nctemp2558,nctemp2560);
}
}
struct symbol* nctemp2567= tp;
struct symbol* nctemp2569=SymMvnext(nctemp2567);
tp =nctemp2569;
}
int nctemp2570 = (tp !=0);
nctemp2469=nctemp2570;}return 1;
}
int CodeDeclarations (struct tree* p,struct symbol* tp)
{
struct tree* np;
int nctemp2575 = (p !=0);
if(nctemp2575)
{
struct tree* nctemp2583= p;
struct tree* nctemp2585=PtreeMvchild(nctemp2583);
np =nctemp2585;
}
else{
np = p;
}
struct tree* nctemp2587= np;
struct symbol* nctemp2589= tp;
int nctemp2591=CodeGdeclarations(nctemp2587,nctemp2589);
return 1;
}
int CodeCode (struct tree* p,struct symbol* tp)
{
struct tree* np;
struct tree* nctemp2597= p;
struct tree* nctemp2599=PtreeMvchild(nctemp2597);
np =nctemp2599;
struct tree* nctemp2603= np;
nctempchar1* nctemp2605=PtreeGetname(nctemp2603);
nctempchar1* nctemp2601= nctemp2605;
struct nctempchar1 *nctemp2608;
static struct nctempchar1 nctemp2609 = {{ 7}, (char*)"import\0"};
nctemp2608=&nctemp2609;
nctempchar1* nctemp2606= nctemp2608;
int nctemp2610=LibeStrcmp(nctemp2601,nctemp2606);
if(nctemp2610)
{
struct tree* nctemp2612= np;
struct symbol* nctemp2614= tp;
int nctemp2616=CodeImport(nctemp2612,nctemp2614);
}
struct tree* nctemp2618= p;
struct symbol* nctemp2620= tp;
int nctemp2622=CodeDeclarations(nctemp2618,nctemp2620);
return 1;
}
int CodeArraytest;
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
int nctemp2629= 0;
nctempchar1* nctemp2631=CodeItemp(nctemp2629);
return nctemp2631;
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
nctempchar1* nctemp2638=CodeMktemp();
temp=nctemp2638;
nctempchar1* nctemp2643= temp;
struct symbol* nctemp2648=SymGetltp();
struct symbol* nctemp2646= nctemp2648;
struct symbol* nctemp2649=SymMkname(nctemp2643,nctemp2646);
tp =nctemp2649;
struct symbol* nctemp2651= tp;
nctempchar1* nctemp2653= type;
int nctemp2656=SymSetype(nctemp2651,nctemp2653);
struct symbol* nctemp2658= tp;
int nctemp2660= 0;
int nctemp2662=SymSetemit(nctemp2658,nctemp2660);
return temp;
}
struct symbol* CodeNewsymbol (nctempchar1 *type,nctempchar1 *name)
{
struct symbol* tp;
nctempchar1* nctemp2669= name;
struct symbol* nctemp2674=SymGetltp();
struct symbol* nctemp2672= nctemp2674;
struct symbol* nctemp2675=SymMkname(nctemp2669,nctemp2672);
tp =nctemp2675;
struct symbol* nctemp2677= tp;
nctempchar1* nctemp2679= type;
int nctemp2682=SymSetype(nctemp2677,nctemp2679);
struct symbol* nctemp2684= tp;
int nctemp2686= 0;
int nctemp2688=SymSetemit(nctemp2684,nctemp2686);
return tp;
}
nctempchar1 * CodeMkstring (struct tree* p)
{
struct symbol* sp;
nctempchar1 *tmp;
nctempchar1* nctemp2695=CodeMktemp();
tmp=nctemp2695;
nctempchar1* nctemp2700= tmp;
struct symbol* nctemp2705=SymGetltp();
struct symbol* nctemp2703= nctemp2705;
struct symbol* nctemp2706=SymMkname(nctemp2700,nctemp2703);
sp =nctemp2706;
struct symbol* nctemp2708= sp;
int nctemp2710= 1;
int nctemp2712=SymSetrank(nctemp2708,nctemp2710);
struct symbol* nctemp2714= sp;
struct nctempchar1 *nctemp2718;
static struct nctempchar1 nctemp2719 = {{ 5}, (char*)"char\0"};
nctemp2718=&nctemp2719;
nctempchar1* nctemp2716= nctemp2718;
int nctemp2720=SymSetype(nctemp2714,nctemp2716);
struct symbol* nctemp2722= sp;
struct nctempchar1 *nctemp2726;
static struct nctempchar1 nctemp2727 = {{ 6}, (char*)"array\0"};
nctemp2726=&nctemp2727;
nctempchar1* nctemp2724= nctemp2726;
int nctemp2728=SymSetarray(nctemp2722,nctemp2724);
return tmp;
}
nctempchar1 * CodeSconstant (struct tree* p)
{
nctempchar1 *tmp;
nctempchar1 *tmp2;
int l;
nctempchar1* nctemp2736=CodeMktemp();
tmp2=nctemp2736;
struct tree* nctemp2738= p;
struct nctempchar1 *nctemp2742;
static struct nctempchar1 nctemp2743 = {{ 21}, (char*)"struct nctempchar1 *\0"};
nctemp2742=&nctemp2743;
nctempchar1* nctemp2740= nctemp2742;
int nctemp2744=CodeEs(nctemp2738,nctemp2740);
struct tree* nctemp2746= p;
nctempchar1* nctemp2748= tmp2;
int nctemp2751=CodeEs(nctemp2746,nctemp2748);
struct tree* nctemp2753= p;
struct nctempchar1 *nctemp2757;
static struct nctempchar1 nctemp2758 = {{ 4}, (char*)";\n\0"};
nctemp2757=&nctemp2758;
nctempchar1* nctemp2755= nctemp2757;
int nctemp2759=CodeEs(nctemp2753,nctemp2755);
nctempchar1* nctemp2765=CodeMktemp();
tmp=nctemp2765;
struct tree* nctemp2767= p;
struct nctempchar1 *nctemp2771;
static struct nctempchar1 nctemp2772 = {{ 27}, (char*)"static struct nctempchar1 \0"};
nctemp2771=&nctemp2772;
nctempchar1* nctemp2769= nctemp2771;
int nctemp2773=CodeEs(nctemp2767,nctemp2769);
struct tree* nctemp2775= p;
nctempchar1* nctemp2777= tmp;
int nctemp2780=CodeEs(nctemp2775,nctemp2777);
struct tree* nctemp2782= p;
struct nctempchar1 *nctemp2786;
static struct nctempchar1 nctemp2787 = {{ 4}, (char*)" = \0"};
nctemp2786=&nctemp2787;
nctempchar1* nctemp2784= nctemp2786;
int nctemp2788=CodeEs(nctemp2782,nctemp2784);
struct tree* nctemp2790= p;
struct nctempchar1 *nctemp2794;
static struct nctempchar1 nctemp2795 = {{ 4}, (char*)"{{ \0"};
nctemp2794=&nctemp2795;
nctempchar1* nctemp2792= nctemp2794;
int nctemp2796=CodeEs(nctemp2790,nctemp2792);
struct tree* nctemp2806= p;
nctempchar1* nctemp2808=PtreeGetdef(nctemp2806);
nctempchar1* nctemp2804= nctemp2808;
int nctemp2809=LibeStrlen(nctemp2804);
int nctemp2811 = nctemp2809 - 1;
l =nctemp2811;
int nctemp2813= l;
int nctemp2815=CodeEd(nctemp2813);
struct tree* nctemp2817= p;
struct nctempchar1 *nctemp2821;
static struct nctempchar1 nctemp2822 = {{ 11}, (char*)"}, (char*)\0"};
nctemp2821=&nctemp2822;
nctempchar1* nctemp2819= nctemp2821;
int nctemp2823=CodeEs(nctemp2817,nctemp2819);
int nctemp2825= 34;
int nctemp2827=CodeEc(nctemp2825);
struct tree* nctemp2831= p;
nctempchar1* nctemp2833=PtreeGetdef(nctemp2831);
nctempchar1* nctemp2829= nctemp2833;
int nctemp2834=CodeEsr(nctemp2829);
int nctemp2836= 92;
int nctemp2838=CodeEc(nctemp2836);
int nctemp2840= 48;
int nctemp2842=CodeEc(nctemp2840);
int nctemp2844= 34;
int nctemp2846=CodeEc(nctemp2844);
struct tree* nctemp2848= p;
struct nctempchar1 *nctemp2852;
static struct nctempchar1 nctemp2853 = {{ 5}, (char*)"};\n\0"};
nctemp2852=&nctemp2853;
nctempchar1* nctemp2850= nctemp2852;
int nctemp2854=CodeEs(nctemp2848,nctemp2850);
struct tree* nctemp2856= p;
nctempchar1* nctemp2858= tmp2;
int nctemp2861=CodeEs(nctemp2856,nctemp2858);
struct tree* nctemp2863= p;
struct nctempchar1 *nctemp2867;
static struct nctempchar1 nctemp2868 = {{ 3}, (char*)"=&\0"};
nctemp2867=&nctemp2868;
nctempchar1* nctemp2865= nctemp2867;
int nctemp2869=CodeEs(nctemp2863,nctemp2865);
struct tree* nctemp2871= p;
nctempchar1* nctemp2873= tmp;
int nctemp2876=CodeEs(nctemp2871,nctemp2873);
struct tree* nctemp2878= p;
struct nctempchar1 *nctemp2882;
static struct nctempchar1 nctemp2883 = {{ 4}, (char*)";\n\0"};
nctemp2882=&nctemp2883;
nctempchar1* nctemp2880= nctemp2882;
int nctemp2884=CodeEs(nctemp2878,nctemp2880);
return tmp2;
}
int CodeStructdef (struct tree* p,struct symbol* tp)
{
struct symbol* up;
struct tree* nctemp2888= p;
struct nctempchar1 *nctemp2892;
static struct nctempchar1 nctemp2893 = {{ 8}, (char*)"struct \0"};
nctemp2892=&nctemp2893;
nctempchar1* nctemp2890= nctemp2892;
int nctemp2894=CodeEs(nctemp2888,nctemp2890);
struct tree* nctemp2896= p;
struct symbol* nctemp2900= tp;
nctempchar1* nctemp2902=SymGetype(nctemp2900);
nctempchar1* nctemp2898= nctemp2902;
int nctemp2903=CodeEs(nctemp2896,nctemp2898);
struct tree* nctemp2905= p;
struct nctempchar1 *nctemp2909;
static struct nctempchar1 nctemp2910 = {{ 3}, (char*)" {\0"};
nctemp2909=&nctemp2910;
nctempchar1* nctemp2907= nctemp2909;
int nctemp2911=CodeEs(nctemp2905,nctemp2907);
struct symbol* nctemp2916= tp;
struct symbol* nctemp2918=SymGetable(nctemp2916);
up =nctemp2918;
struct symbol* nctemp2923= up;
struct symbol* nctemp2925=SymMvnext(nctemp2923);
up =nctemp2925;
struct tree* nctemp2927= p;
struct symbol* nctemp2929= up;
int nctemp2931=CodeIdeclarations(nctemp2927,nctemp2929);
struct tree* nctemp2933= p;
struct nctempchar1 *nctemp2937;
static struct nctempchar1 nctemp2938 = {{ 5}, (char*)"};\n\0"};
nctemp2937=&nctemp2938;
nctempchar1* nctemp2935= nctemp2937;
int nctemp2939=CodeEs(nctemp2933,nctemp2935);
struct tree* nctemp2941= p;
struct nctempchar1 *nctemp2945;
static struct nctempchar1 nctemp2946 = {{ 16}, (char*)"typedef struct \0"};
nctemp2945=&nctemp2946;
nctempchar1* nctemp2943= nctemp2945;
int nctemp2947=CodeEs(nctemp2941,nctemp2943);
struct tree* nctemp2949= p;
struct nctempchar1 *nctemp2953;
static struct nctempchar1 nctemp2954 = {{ 7}, (char*)"nctemp\0"};
nctemp2953=&nctemp2954;
nctempchar1* nctemp2951= nctemp2953;
int nctemp2955=CodeEs(nctemp2949,nctemp2951);
struct tree* nctemp2957= p;
struct symbol* nctemp2961= tp;
nctempchar1* nctemp2963=SymGetype(nctemp2961);
nctempchar1* nctemp2959= nctemp2963;
int nctemp2964=CodeEs(nctemp2957,nctemp2959);
struct tree* nctemp2966= p;
struct nctempchar1 *nctemp2970;
static struct nctempchar1 nctemp2971 = {{ 2}, (char*)"1\0"};
nctemp2970=&nctemp2971;
nctempchar1* nctemp2968= nctemp2970;
int nctemp2972=CodeEs(nctemp2966,nctemp2968);
struct tree* nctemp2974= p;
struct nctempchar1 *nctemp2978;
static struct nctempchar1 nctemp2979 = {{ 20}, (char*)" {int d[1]; struct \0"};
nctemp2978=&nctemp2979;
nctempchar1* nctemp2976= nctemp2978;
int nctemp2980=CodeEs(nctemp2974,nctemp2976);
struct tree* nctemp2982= p;
struct symbol* nctemp2986= tp;
nctempchar1* nctemp2988=SymGetype(nctemp2986);
nctempchar1* nctemp2984= nctemp2988;
int nctemp2989=CodeEs(nctemp2982,nctemp2984);
struct tree* nctemp2991= p;
struct nctempchar1 *nctemp2995;
static struct nctempchar1 nctemp2996 = {{ 6}, (char*)" *a; \0"};
nctemp2995=&nctemp2996;
nctempchar1* nctemp2993= nctemp2995;
int nctemp2997=CodeEs(nctemp2991,nctemp2993);
struct tree* nctemp2999= p;
struct nctempchar1 *nctemp3003;
static struct nctempchar1 nctemp3004 = {{ 3}, (char*)"} \0"};
nctemp3003=&nctemp3004;
nctempchar1* nctemp3001= nctemp3003;
int nctemp3005=CodeEs(nctemp2999,nctemp3001);
struct tree* nctemp3007= p;
struct nctempchar1 *nctemp3011;
static struct nctempchar1 nctemp3012 = {{ 7}, (char*)"nctemp\0"};
nctemp3011=&nctemp3012;
nctempchar1* nctemp3009= nctemp3011;
int nctemp3013=CodeEs(nctemp3007,nctemp3009);
struct tree* nctemp3015= p;
struct symbol* nctemp3019= tp;
nctempchar1* nctemp3021=SymGetype(nctemp3019);
nctempchar1* nctemp3017= nctemp3021;
int nctemp3022=CodeEs(nctemp3015,nctemp3017);
struct tree* nctemp3024= p;
struct nctempchar1 *nctemp3028;
static struct nctempchar1 nctemp3029 = {{ 2}, (char*)"1\0"};
nctemp3028=&nctemp3029;
nctempchar1* nctemp3026= nctemp3028;
int nctemp3030=CodeEs(nctemp3024,nctemp3026);
struct tree* nctemp3032= p;
struct nctempchar1 *nctemp3036;
static struct nctempchar1 nctemp3037 = {{ 4}, (char*)";\n\0"};
nctemp3036=&nctemp3037;
nctempchar1* nctemp3034= nctemp3036;
int nctemp3038=CodeEs(nctemp3032,nctemp3034);
struct tree* nctemp3040= p;
struct nctempchar1 *nctemp3044;
static struct nctempchar1 nctemp3045 = {{ 8}, (char*)"struct \0"};
nctemp3044=&nctemp3045;
nctempchar1* nctemp3042= nctemp3044;
int nctemp3046=CodeEs(nctemp3040,nctemp3042);
struct tree* nctemp3048= p;
struct nctempchar1 *nctemp3052;
static struct nctempchar1 nctemp3053 = {{ 7}, (char*)"nctemp\0"};
nctemp3052=&nctemp3053;
nctempchar1* nctemp3050= nctemp3052;
int nctemp3054=CodeEs(nctemp3048,nctemp3050);
struct tree* nctemp3056= p;
struct symbol* nctemp3060= tp;
nctempchar1* nctemp3062=SymGetype(nctemp3060);
nctempchar1* nctemp3058= nctemp3062;
int nctemp3063=CodeEs(nctemp3056,nctemp3058);
struct tree* nctemp3065= p;
struct nctempchar1 *nctemp3069;
static struct nctempchar1 nctemp3070 = {{ 2}, (char*)"2\0"};
nctemp3069=&nctemp3070;
nctempchar1* nctemp3067= nctemp3069;
int nctemp3071=CodeEs(nctemp3065,nctemp3067);
struct tree* nctemp3073= p;
struct nctempchar1 *nctemp3077;
static struct nctempchar1 nctemp3078 = {{ 20}, (char*)" {int d[2]; struct \0"};
nctemp3077=&nctemp3078;
nctempchar1* nctemp3075= nctemp3077;
int nctemp3079=CodeEs(nctemp3073,nctemp3075);
struct tree* nctemp3081= p;
struct symbol* nctemp3085= tp;
nctempchar1* nctemp3087=SymGetype(nctemp3085);
nctempchar1* nctemp3083= nctemp3087;
int nctemp3088=CodeEs(nctemp3081,nctemp3083);
struct tree* nctemp3090= p;
struct nctempchar1 *nctemp3094;
static struct nctempchar1 nctemp3095 = {{ 6}, (char*)" *a; \0"};
nctemp3094=&nctemp3095;
nctempchar1* nctemp3092= nctemp3094;
int nctemp3096=CodeEs(nctemp3090,nctemp3092);
struct tree* nctemp3098= p;
struct nctempchar1 *nctemp3102;
static struct nctempchar1 nctemp3103 = {{ 3}, (char*)"} \0"};
nctemp3102=&nctemp3103;
nctempchar1* nctemp3100= nctemp3102;
int nctemp3104=CodeEs(nctemp3098,nctemp3100);
struct tree* nctemp3106= p;
struct nctempchar1 *nctemp3110;
static struct nctempchar1 nctemp3111 = {{ 4}, (char*)";\n\0"};
nctemp3110=&nctemp3111;
nctempchar1* nctemp3108= nctemp3110;
int nctemp3112=CodeEs(nctemp3106,nctemp3108);
struct tree* nctemp3114= p;
struct nctempchar1 *nctemp3118;
static struct nctempchar1 nctemp3119 = {{ 8}, (char*)"struct \0"};
nctemp3118=&nctemp3119;
nctempchar1* nctemp3116= nctemp3118;
int nctemp3120=CodeEs(nctemp3114,nctemp3116);
struct tree* nctemp3122= p;
struct nctempchar1 *nctemp3126;
static struct nctempchar1 nctemp3127 = {{ 7}, (char*)"nctemp\0"};
nctemp3126=&nctemp3127;
nctempchar1* nctemp3124= nctemp3126;
int nctemp3128=CodeEs(nctemp3122,nctemp3124);
struct tree* nctemp3130= p;
struct symbol* nctemp3134= tp;
nctempchar1* nctemp3136=SymGetype(nctemp3134);
nctempchar1* nctemp3132= nctemp3136;
int nctemp3137=CodeEs(nctemp3130,nctemp3132);
struct tree* nctemp3139= p;
struct nctempchar1 *nctemp3143;
static struct nctempchar1 nctemp3144 = {{ 2}, (char*)"3\0"};
nctemp3143=&nctemp3144;
nctempchar1* nctemp3141= nctemp3143;
int nctemp3145=CodeEs(nctemp3139,nctemp3141);
struct tree* nctemp3147= p;
struct nctempchar1 *nctemp3151;
static struct nctempchar1 nctemp3152 = {{ 20}, (char*)" {int d[3]; struct \0"};
nctemp3151=&nctemp3152;
nctempchar1* nctemp3149= nctemp3151;
int nctemp3153=CodeEs(nctemp3147,nctemp3149);
struct tree* nctemp3155= p;
struct symbol* nctemp3159= tp;
nctempchar1* nctemp3161=SymGetype(nctemp3159);
nctempchar1* nctemp3157= nctemp3161;
int nctemp3162=CodeEs(nctemp3155,nctemp3157);
struct tree* nctemp3164= p;
struct nctempchar1 *nctemp3168;
static struct nctempchar1 nctemp3169 = {{ 6}, (char*)" *a; \0"};
nctemp3168=&nctemp3169;
nctempchar1* nctemp3166= nctemp3168;
int nctemp3170=CodeEs(nctemp3164,nctemp3166);
struct tree* nctemp3172= p;
struct nctempchar1 *nctemp3176;
static struct nctempchar1 nctemp3177 = {{ 3}, (char*)"} \0"};
nctemp3176=&nctemp3177;
nctempchar1* nctemp3174= nctemp3176;
int nctemp3178=CodeEs(nctemp3172,nctemp3174);
struct tree* nctemp3180= p;
struct nctempchar1 *nctemp3184;
static struct nctempchar1 nctemp3185 = {{ 4}, (char*)";\n\0"};
nctemp3184=&nctemp3185;
nctempchar1* nctemp3182= nctemp3184;
int nctemp3186=CodeEs(nctemp3180,nctemp3182);
struct tree* nctemp3188= p;
struct nctempchar1 *nctemp3192;
static struct nctempchar1 nctemp3193 = {{ 8}, (char*)"struct \0"};
nctemp3192=&nctemp3193;
nctempchar1* nctemp3190= nctemp3192;
int nctemp3194=CodeEs(nctemp3188,nctemp3190);
struct tree* nctemp3196= p;
struct nctempchar1 *nctemp3200;
static struct nctempchar1 nctemp3201 = {{ 7}, (char*)"nctemp\0"};
nctemp3200=&nctemp3201;
nctempchar1* nctemp3198= nctemp3200;
int nctemp3202=CodeEs(nctemp3196,nctemp3198);
struct tree* nctemp3204= p;
struct symbol* nctemp3208= tp;
nctempchar1* nctemp3210=SymGetype(nctemp3208);
nctempchar1* nctemp3206= nctemp3210;
int nctemp3211=CodeEs(nctemp3204,nctemp3206);
struct tree* nctemp3213= p;
struct nctempchar1 *nctemp3217;
static struct nctempchar1 nctemp3218 = {{ 2}, (char*)"4\0"};
nctemp3217=&nctemp3218;
nctempchar1* nctemp3215= nctemp3217;
int nctemp3219=CodeEs(nctemp3213,nctemp3215);
struct tree* nctemp3221= p;
struct nctempchar1 *nctemp3225;
static struct nctempchar1 nctemp3226 = {{ 20}, (char*)" {int d[4]; struct \0"};
nctemp3225=&nctemp3226;
nctempchar1* nctemp3223= nctemp3225;
int nctemp3227=CodeEs(nctemp3221,nctemp3223);
struct tree* nctemp3229= p;
struct symbol* nctemp3233= tp;
nctempchar1* nctemp3235=SymGetype(nctemp3233);
nctempchar1* nctemp3231= nctemp3235;
int nctemp3236=CodeEs(nctemp3229,nctemp3231);
struct tree* nctemp3238= p;
struct nctempchar1 *nctemp3242;
static struct nctempchar1 nctemp3243 = {{ 6}, (char*)" *a; \0"};
nctemp3242=&nctemp3243;
nctempchar1* nctemp3240= nctemp3242;
int nctemp3244=CodeEs(nctemp3238,nctemp3240);
struct tree* nctemp3246= p;
struct nctempchar1 *nctemp3250;
static struct nctempchar1 nctemp3251 = {{ 3}, (char*)"} \0"};
nctemp3250=&nctemp3251;
nctempchar1* nctemp3248= nctemp3250;
int nctemp3252=CodeEs(nctemp3246,nctemp3248);
struct tree* nctemp3254= p;
struct nctempchar1 *nctemp3258;
static struct nctempchar1 nctemp3259 = {{ 4}, (char*)";\n\0"};
nctemp3258=&nctemp3259;
nctempchar1* nctemp3256= nctemp3258;
int nctemp3260=CodeEs(nctemp3254,nctemp3256);
return 1;
}
int CodeFdeclaration (struct tree* p,struct symbol* tp)
{
int noargs;
struct symbol* nctemp3267= tp;
nctempchar1* nctemp3269=SymGetstruct(nctemp3267);
nctempchar1* nctemp3265= nctemp3269;
struct nctempchar1 *nctemp3272;
static struct nctempchar1 nctemp3273 = {{ 7}, (char*)"struct\0"};
nctemp3272=&nctemp3273;
nctempchar1* nctemp3270= nctemp3272;
int nctemp3274=LibeStrcmp(nctemp3265,nctemp3270);
int nctemp3262 = (nctemp3274 ==1);
if(nctemp3262)
{
struct tree* nctemp3277= p;
struct nctempchar1 *nctemp3281;
static struct nctempchar1 nctemp3282 = {{ 8}, (char*)"struct \0"};
nctemp3281=&nctemp3282;
nctempchar1* nctemp3279= nctemp3281;
int nctemp3283=CodeEs(nctemp3277,nctemp3279);
}
struct symbol* nctemp3289= tp;
nctempchar1* nctemp3291=SymGetarray(nctemp3289);
nctempchar1* nctemp3287= nctemp3291;
struct nctempchar1 *nctemp3294;
static struct nctempchar1 nctemp3295 = {{ 6}, (char*)"array\0"};
nctemp3294=&nctemp3295;
nctempchar1* nctemp3292= nctemp3294;
int nctemp3296=LibeStrcmp(nctemp3287,nctemp3292);
int nctemp3284 = (nctemp3296 ==1);
if(nctemp3284)
{
struct tree* nctemp3299= p;
struct nctempchar1 *nctemp3303;
static struct nctempchar1 nctemp3304 = {{ 7}, (char*)"nctemp\0"};
nctemp3303=&nctemp3304;
nctempchar1* nctemp3301= nctemp3303;
int nctemp3305=CodeEs(nctemp3299,nctemp3301);
}
struct tree* nctemp3307= p;
struct symbol* nctemp3311= tp;
nctempchar1* nctemp3313=SymGetype(nctemp3311);
nctempchar1* nctemp3309= nctemp3313;
int nctemp3314=CodeEs(nctemp3307,nctemp3309);
struct symbol* nctemp3320= tp;
nctempchar1* nctemp3322=SymGetarray(nctemp3320);
nctempchar1* nctemp3318= nctemp3322;
struct nctempchar1 *nctemp3325;
static struct nctempchar1 nctemp3326 = {{ 6}, (char*)"array\0"};
nctemp3325=&nctemp3326;
nctempchar1* nctemp3323= nctemp3325;
int nctemp3327=LibeStrcmp(nctemp3318,nctemp3323);
int nctemp3315 = (nctemp3327 ==1);
if(nctemp3315)
{
struct symbol* nctemp3332= tp;
int nctemp3334=SymGetrank(nctemp3332);
int nctemp3330= nctemp3334;
int nctemp3335=CodeEd(nctemp3330);
struct tree* nctemp3337= p;
struct nctempchar1 *nctemp3341;
static struct nctempchar1 nctemp3342 = {{ 2}, (char*)"*\0"};
nctemp3341=&nctemp3342;
nctempchar1* nctemp3339= nctemp3341;
int nctemp3343=CodeEs(nctemp3337,nctemp3339);
}
struct symbol* nctemp3349= tp;
nctempchar1* nctemp3351=SymGetstruct(nctemp3349);
nctempchar1* nctemp3347= nctemp3351;
struct nctempchar1 *nctemp3354;
static struct nctempchar1 nctemp3355 = {{ 7}, (char*)"struct\0"};
nctemp3354=&nctemp3355;
nctempchar1* nctemp3352= nctemp3354;
int nctemp3356=LibeStrcmp(nctemp3347,nctemp3352);
int nctemp3344 = (nctemp3356 ==1);
if(nctemp3344)
{
struct tree* nctemp3359= p;
struct nctempchar1 *nctemp3363;
static struct nctempchar1 nctemp3364 = {{ 2}, (char*)"*\0"};
nctemp3363=&nctemp3364;
nctempchar1* nctemp3361= nctemp3363;
int nctemp3365=CodeEs(nctemp3359,nctemp3361);
}
struct tree* nctemp3367= p;
struct nctempchar1 *nctemp3371;
static struct nctempchar1 nctemp3372 = {{ 2}, (char*)" \0"};
nctemp3371=&nctemp3372;
nctempchar1* nctemp3369= nctemp3371;
int nctemp3373=CodeEs(nctemp3367,nctemp3369);
struct tree* nctemp3375= p;
struct symbol* nctemp3379= tp;
nctempchar1* nctemp3381=SymGetname(nctemp3379);
nctempchar1* nctemp3377= nctemp3381;
int nctemp3382=CodeEs(nctemp3375,nctemp3377);
struct tree* nctemp3384= p;
struct nctempchar1 *nctemp3388;
static struct nctempchar1 nctemp3389 = {{ 3}, (char*)" (\0"};
nctemp3388=&nctemp3389;
nctempchar1* nctemp3386= nctemp3388;
int nctemp3390=CodeEs(nctemp3384,nctemp3386);
struct symbol* nctemp3395= tp;
struct symbol* nctemp3397=SymGetable(nctemp3395);
tp =nctemp3397;
struct nctempchar1 *nctemp3404;
static struct nctempchar1 nctemp3405 = {{ 9}, (char*)"#arglist\0"};
nctemp3404=&nctemp3405;
nctempchar1* nctemp3402= nctemp3404;
struct symbol* nctemp3406= tp;
struct symbol* nctemp3408=SymLookup(nctemp3402,nctemp3406);
tp =nctemp3408;
struct symbol* nctemp3413= tp;
struct symbol* nctemp3415=SymGetable(nctemp3413);
tp =nctemp3415;
noargs = 0;
struct symbol* nctemp3423= tp;
struct symbol* nctemp3425=SymMvnext(nctemp3423);
tp =nctemp3425;
int nctemp3416 = (tp !=0);
int nctemp3427=nctemp3416;
while(nctemp3427)
{{
struct tree* nctemp3429= p;
struct symbol* nctemp3431= tp;
int nctemp3433=CodeIdeclaration(nctemp3429,nctemp3431);
struct symbol* nctemp3437= tp;
struct symbol* nctemp3439=SymMvnext(nctemp3437);
int nctemp3434 = (nctemp3439 !=0);
if(nctemp3434)
{
struct tree* nctemp3442= p;
struct nctempchar1 *nctemp3446;
static struct nctempchar1 nctemp3447 = {{ 2}, (char*)",\0"};
nctemp3446=&nctemp3447;
nctempchar1* nctemp3444= nctemp3446;
int nctemp3448=CodeEs(nctemp3442,nctemp3444);
}
noargs = (noargs + 1);
}
struct symbol* nctemp3456= tp;
struct symbol* nctemp3458=SymMvnext(nctemp3456);
tp =nctemp3458;
int nctemp3449 = (tp !=0);
nctemp3427=nctemp3449;}struct tree* nctemp3461= p;
struct nctempchar1 *nctemp3465;
static struct nctempchar1 nctemp3466 = {{ 5}, (char*)");\n\0"};
nctemp3465=&nctemp3466;
nctempchar1* nctemp3463= nctemp3465;
int nctemp3467=CodeEs(nctemp3461,nctemp3463);
return 1;
}
int CodeWdeclaration (struct tree* p)
{
struct tree* np;
struct tree* nctemp3473= p;
struct tree* nctemp3475=PtreeMvchild(nctemp3473);
np =nctemp3475;
int nctemp3476 = (np !=0);
int nctemp3480=nctemp3476;
while(nctemp3480)
{{
struct tree* nctemp3486= np;
nctempchar1* nctemp3488=PtreeGetname(nctemp3486);
nctempchar1* nctemp3484= nctemp3488;
struct nctempchar1 *nctemp3491;
static struct nctempchar1 nctemp3492 = {{ 5}, (char*)"fdef\0"};
nctemp3491=&nctemp3492;
nctempchar1* nctemp3489= nctemp3491;
int nctemp3493=LibeStrcmp(nctemp3484,nctemp3489);
int nctemp3481 = (nctemp3493 ==1);
if(nctemp3481)
{
struct tree* nctemp3496= np;
int nctemp3498=CodeFdef(nctemp3496);
}
struct tree* nctemp3503= np;
struct tree* nctemp3505=PtreeMvsister(nctemp3503);
np =nctemp3505;
}
int nctemp3506 = (np !=0);
nctemp3480=nctemp3506;}return 1;
}
int CodeWdeclarations (struct tree* p)
{
int nctemp3511 = (p !=0);
int nctemp3515=nctemp3511;
while(nctemp3515)
{{
struct tree* nctemp3524= p;
nctempchar1* nctemp3526=PtreeGetname(nctemp3524);
nctempchar1* nctemp3522= nctemp3526;
struct nctempchar1 *nctemp3529;
static struct nctempchar1 nctemp3530 = {{ 5}, (char*)"type\0"};
nctemp3529=&nctemp3530;
nctempchar1* nctemp3527= nctemp3529;
int nctemp3531=LibeStrcmp(nctemp3522,nctemp3527);
int nctemp3519 = (nctemp3531 ==1);
struct tree* nctemp3539= p;
nctempchar1* nctemp3541=PtreeGetname(nctemp3539);
nctempchar1* nctemp3537= nctemp3541;
struct nctempchar1 *nctemp3544;
static struct nctempchar1 nctemp3545 = {{ 7}, (char*)"struct\0"};
nctemp3544=&nctemp3545;
nctempchar1* nctemp3542= nctemp3544;
int nctemp3546=LibeStrcmp(nctemp3537,nctemp3542);
int nctemp3534 = (nctemp3546 ==1);
int nctemp3516 = (nctemp3519 || nctemp3534);
if(nctemp3516)
{
struct tree* nctemp3549= p;
int nctemp3551=CodeWdeclaration(nctemp3549);
}
struct tree* nctemp3556= p;
struct tree* nctemp3558=PtreeMvsister(nctemp3556);
p =nctemp3558;
}
int nctemp3559 = (p !=0);
nctemp3515=nctemp3559;}return 1;
}
int CodeArrayex (int line,nctempchar1 *qual,nctempchar1 *sel,nctempchar1 *name,nctempchar1 *ival,int index)
{
struct tree* p;
nctempchar1 *tmp;
nctempchar1 *qname;
struct nctempchar1 *nctemp3570;
static struct nctempchar1 nctemp3571 = {{ 6}, (char*)"dummy\0"};
nctemp3570=&nctemp3571;
nctempchar1* nctemp3568= nctemp3570;
struct nctempchar1 *nctemp3574;
static struct nctempchar1 nctemp3575 = {{ 6}, (char*)"dummy\0"};
nctemp3574=&nctemp3575;
nctempchar1* nctemp3572= nctemp3574;
struct tree* nctemp3576=PtreeMknode(nctemp3568,nctemp3572);
p =nctemp3576;
struct tree* nctemp3578= p;
int nctemp3580= line;
int nctemp3582=PtreeSetline(nctemp3578,nctemp3580);
qname = name;
nctempchar1 *nctemp3584 =qual;
int nctemp3583 =(nctemp3584!=0);
if(nctemp3583)
{
nctempchar1* nctemp3593= qual;
struct nctempchar1 *nctemp3598;
static struct nctempchar1 nctemp3599 = {{ 3}, (char*)"->\0"};
nctemp3598=&nctemp3599;
nctempchar1* nctemp3596= nctemp3598;
nctempchar1* nctemp3600=LibeStradd(nctemp3593,nctemp3596);
tmp=nctemp3600;
nctempchar1* nctemp3606= tmp;
nctempchar1* nctemp3609= name;
nctempchar1* nctemp3612=LibeStradd(nctemp3606,nctemp3609);
qname=nctemp3612;
RunFree(tmp->a);
RunFree(tmp);
}
struct tree* nctemp3617= p;
struct nctempchar1 *nctemp3621;
static struct nctempchar1 nctemp3622 = {{ 7}, (char*)"if((0>\0"};
nctemp3621=&nctemp3622;
nctempchar1* nctemp3619= nctemp3621;
int nctemp3623=CodeEs(nctemp3617,nctemp3619);
struct tree* nctemp3625= p;
nctempchar1* nctemp3627= ival;
int nctemp3630=CodeEs(nctemp3625,nctemp3627);
struct tree* nctemp3632= p;
struct nctempchar1 *nctemp3636;
static struct nctempchar1 nctemp3637 = {{ 5}, (char*)")||(\0"};
nctemp3636=&nctemp3637;
nctempchar1* nctemp3634= nctemp3636;
int nctemp3638=CodeEs(nctemp3632,nctemp3634);
struct tree* nctemp3640= p;
nctempchar1* nctemp3642= ival;
int nctemp3645=CodeEs(nctemp3640,nctemp3642);
struct tree* nctemp3647= p;
struct nctempchar1 *nctemp3651;
static struct nctempchar1 nctemp3652 = {{ 3}, (char*)">=\0"};
nctemp3651=&nctemp3652;
nctempchar1* nctemp3649= nctemp3651;
int nctemp3653=CodeEs(nctemp3647,nctemp3649);
nctempchar1 *nctemp3655 =qual;
int nctemp3654 =(nctemp3655!=0);
if(nctemp3654)
{
struct tree* nctemp3660= p;
nctempchar1* nctemp3662= qual;
int nctemp3665=CodeEs(nctemp3660,nctemp3662);
struct tree* nctemp3667= p;
nctempchar1* nctemp3669= sel;
int nctemp3672=CodeEs(nctemp3667,nctemp3669);
}
struct tree* nctemp3674= p;
nctempchar1* nctemp3676= name;
int nctemp3679=CodeEs(nctemp3674,nctemp3676);
struct tree* nctemp3681= p;
struct nctempchar1 *nctemp3685;
static struct nctempchar1 nctemp3686 = {{ 5}, (char*)"->d[\0"};
nctemp3685=&nctemp3686;
nctempchar1* nctemp3683= nctemp3685;
int nctemp3687=CodeEs(nctemp3681,nctemp3683);
int nctemp3689= index;
int nctemp3691=CodeEd(nctemp3689);
struct tree* nctemp3693= p;
struct nctempchar1 *nctemp3697;
static struct nctempchar1 nctemp3698 = {{ 7}, (char*)"])){\n\0"};
nctemp3697=&nctemp3698;
nctempchar1* nctemp3695= nctemp3697;
int nctemp3699=CodeEs(nctemp3693,nctemp3695);
struct tree* nctemp3701= p;
struct nctempchar1 *nctemp3705;
static struct nctempchar1 nctemp3706 = {{ 67}, (char*)"printf(\"***Out of bounds error (file,array,line,index,rank,bound:\0"};
nctemp3705=&nctemp3706;
nctempchar1* nctemp3703= nctemp3705;
int nctemp3707=CodeEs(nctemp3701,nctemp3703);
struct tree* nctemp3709= p;
nctempchar1* nctemp3713=ScanGetfile();
nctempchar1* nctemp3711= nctemp3713;
int nctemp3714=CodeEs(nctemp3709,nctemp3711);
struct tree* nctemp3716= p;
struct nctempchar1 *nctemp3720;
static struct nctempchar1 nctemp3721 = {{ 2}, (char*)" \0"};
nctemp3720=&nctemp3721;
nctempchar1* nctemp3718= nctemp3720;
int nctemp3722=CodeEs(nctemp3716,nctemp3718);
struct tree* nctemp3724= p;
nctempchar1* nctemp3726= qname;
int nctemp3729=CodeEs(nctemp3724,nctemp3726);
struct tree* nctemp3731= p;
struct nctempchar1 *nctemp3735;
static struct nctempchar1 nctemp3736 = {{ 17}, (char*)" %d %d %d %d \\n\0"};
nctemp3735=&nctemp3736;
nctempchar1* nctemp3733= nctemp3735;
int nctemp3737=CodeEs(nctemp3731,nctemp3733);
struct tree* nctemp3739= p;
struct nctempchar1 *nctemp3743;
static struct nctempchar1 nctemp3744 = {{ 6}, (char*)" \" ,\0"};
nctemp3743=&nctemp3744;
nctempchar1* nctemp3741= nctemp3743;
int nctemp3745=CodeEs(nctemp3739,nctemp3741);
int nctemp3747= line;
int nctemp3749=CodeEd(nctemp3747);
struct tree* nctemp3751= p;
struct nctempchar1 *nctemp3755;
static struct nctempchar1 nctemp3756 = {{ 2}, (char*)",\0"};
nctemp3755=&nctemp3756;
nctempchar1* nctemp3753= nctemp3755;
int nctemp3757=CodeEs(nctemp3751,nctemp3753);
struct tree* nctemp3759= p;
nctempchar1* nctemp3761= ival;
int nctemp3764=CodeEs(nctemp3759,nctemp3761);
struct tree* nctemp3766= p;
struct nctempchar1 *nctemp3770;
static struct nctempchar1 nctemp3771 = {{ 2}, (char*)",\0"};
nctemp3770=&nctemp3771;
nctempchar1* nctemp3768= nctemp3770;
int nctemp3772=CodeEs(nctemp3766,nctemp3768);
int nctemp3774= index;
int nctemp3776=CodeEd(nctemp3774);
struct tree* nctemp3778= p;
struct nctempchar1 *nctemp3782;
static struct nctempchar1 nctemp3783 = {{ 2}, (char*)",\0"};
nctemp3782=&nctemp3783;
nctempchar1* nctemp3780= nctemp3782;
int nctemp3784=CodeEs(nctemp3778,nctemp3780);
struct tree* nctemp3786= p;
nctempchar1* nctemp3788= qname;
int nctemp3791=CodeEs(nctemp3786,nctemp3788);
struct tree* nctemp3793= p;
struct nctempchar1 *nctemp3797;
static struct nctempchar1 nctemp3798 = {{ 5}, (char*)"->d[\0"};
nctemp3797=&nctemp3798;
nctempchar1* nctemp3795= nctemp3797;
int nctemp3799=CodeEs(nctemp3793,nctemp3795);
int nctemp3801= index;
int nctemp3803=CodeEd(nctemp3801);
struct tree* nctemp3805= p;
struct nctempchar1 *nctemp3809;
static struct nctempchar1 nctemp3810 = {{ 4}, (char*)"]-1\0"};
nctemp3809=&nctemp3810;
nctempchar1* nctemp3807= nctemp3809;
int nctemp3811=CodeEs(nctemp3805,nctemp3807);
struct tree* nctemp3813= p;
struct nctempchar1 *nctemp3817;
static struct nctempchar1 nctemp3818 = {{ 3}, (char*)");\0"};
nctemp3817=&nctemp3818;
nctempchar1* nctemp3815= nctemp3817;
int nctemp3819=CodeEs(nctemp3813,nctemp3815);
struct tree* nctemp3821= p;
struct nctempchar1 *nctemp3825;
static struct nctempchar1 nctemp3826 = {{ 6}, (char*)"\n}\n\0"};
nctemp3825=&nctemp3826;
nctempchar1* nctemp3823= nctemp3825;
int nctemp3827=CodeEs(nctemp3821,nctemp3823);
nctempchar1 *nctemp3829 =qual;
int nctemp3828 =(nctemp3829!=0);
if(nctemp3828)
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
struct tree* nctemp3842= p;
nctempchar1* nctemp3844=PtreeGetdef(nctemp3842);
name=nctemp3844;
nctempchar1* nctemp3850=CodeMktemp();
temp=nctemp3850;
nctempchar1* nctemp3855= name;
struct symbol* nctemp3858=SymLook(nctemp3855);
tp =nctemp3858;
int nctemp3859 = (tp ==0);
if(nctemp3859)
{
nctempchar1* nctemp3864= name;
int nctemp3867=CodeError(nctemp3864);
}
struct tree* nctemp3872= p;
struct tree* nctemp3874=PtreeMvchild(nctemp3872);
sp =nctemp3874;
int nctemp3875 = (sp ==0);
if(nctemp3875)
{
struct tree* nctemp3880= p;
nctempchar1* nctemp3882=PtreeGetdef(nctemp3880);
return nctemp3882;
}
else{
struct tree* nctemp3888= sp;
nctempchar1* nctemp3890=PtreeGetname(nctemp3888);
nctempchar1* nctemp3886= nctemp3890;
struct nctempchar1 *nctemp3893;
static struct nctempchar1 nctemp3894 = {{ 9}, (char*)"exprlist\0"};
nctemp3893=&nctemp3894;
nctempchar1* nctemp3891= nctemp3893;
int nctemp3895=LibeStrcmp(nctemp3886,nctemp3891);
int nctemp3883 = (nctemp3895 ==0);
if(nctemp3883)
{
struct tree* nctemp3898= p;
nctempchar1* nctemp3900=PtreeGetdef(nctemp3898);
return nctemp3900;
}
}
struct symbol* nctemp3905= tp;
int nctemp3907=SymGetrank(nctemp3905);
rank =nctemp3907;
struct tree* nctemp3912= p;
struct tree* nctemp3914=PtreeMvchild(nctemp3912);
p =nctemp3914;
struct tree* nctemp3919= p;
struct tree* nctemp3921=PtreeMvchild(nctemp3919);
p =nctemp3921;
sp = p;
for(i = 0;i < rank;i = (i + 1)){
int nctemp3922 = (i ==0);
if(nctemp3922)
{
struct tree* nctemp3931= p;
nctempchar1* nctemp3933=CodeExpr(nctemp3931);
temp2=nctemp3933;
struct tree* nctemp3935= p;
struct tree* nctemp3939= p;
nctempchar1* nctemp3941=PtreeGetype(nctemp3939);
nctempchar1* nctemp3937= nctemp3941;
int nctemp3942=CodeEs(nctemp3935,nctemp3937);
struct tree* nctemp3944= p;
struct nctempchar1 *nctemp3948;
static struct nctempchar1 nctemp3949 = {{ 2}, (char*)" \0"};
nctemp3948=&nctemp3949;
nctempchar1* nctemp3946= nctemp3948;
int nctemp3950=CodeEs(nctemp3944,nctemp3946);
struct tree* nctemp3952= p;
nctempchar1* nctemp3954= temp;
int nctemp3957=CodeEs(nctemp3952,nctemp3954);
struct tree* nctemp3959= p;
struct nctempchar1 *nctemp3963;
static struct nctempchar1 nctemp3964 = {{ 2}, (char*)"=\0"};
nctemp3963=&nctemp3964;
nctempchar1* nctemp3961= nctemp3963;
int nctemp3965=CodeEs(nctemp3959,nctemp3961);
struct tree* nctemp3967= p;
nctempchar1* nctemp3969= temp2;
int nctemp3972=CodeEs(nctemp3967,nctemp3969);
struct tree* nctemp3974= p;
struct nctempchar1 *nctemp3978;
static struct nctempchar1 nctemp3979 = {{ 4}, (char*)";\n\0"};
nctemp3978=&nctemp3979;
nctempchar1* nctemp3976= nctemp3978;
int nctemp3980=CodeEs(nctemp3974,nctemp3976);
int nctemp3982=CodeArraycheck();
if(nctemp3982)
{
struct tree* nctemp3986= p;
int nctemp3988=PtreeGetline(nctemp3986);
int nctemp3984= nctemp3988;
nctempchar1* nctemp3989= qual;
nctempchar1* nctemp3992= sel;
nctempchar1* nctemp3995= name;
nctempchar1* nctemp3998= temp2;
int nctemp4001= i;
int nctemp4003=CodeArrayex(nctemp3984,nctemp3989,nctemp3992,nctemp3995,nctemp3998,nctemp4001);
}
}
else{
struct tree* nctemp4009= sp;
nctempchar1* nctemp4011=CodeExpr(nctemp4009);
temp2=nctemp4011;
struct tree* nctemp4013= p;
nctempchar1* nctemp4015= temp;
int nctemp4018=CodeEs(nctemp4013,nctemp4015);
struct tree* nctemp4020= p;
struct nctempchar1 *nctemp4024;
static struct nctempchar1 nctemp4025 = {{ 2}, (char*)"=\0"};
nctemp4024=&nctemp4025;
nctempchar1* nctemp4022= nctemp4024;
int nctemp4026=CodeEs(nctemp4020,nctemp4022);
struct tree* nctemp4028= p;
nctempchar1* nctemp4030= temp2;
int nctemp4033=CodeEs(nctemp4028,nctemp4030);
struct tree* nctemp4035= p;
struct nctempchar1 *nctemp4039;
static struct nctempchar1 nctemp4040 = {{ 2}, (char*)"*\0"};
nctemp4039=&nctemp4040;
nctempchar1* nctemp4037= nctemp4039;
int nctemp4041=CodeEs(nctemp4035,nctemp4037);
nctempchar1 *nctemp4043 =qual;
int nctemp4042 =(nctemp4043!=0);
if(nctemp4042)
{
struct tree* nctemp4048= p;
nctempchar1* nctemp4050= qual;
int nctemp4053=CodeEs(nctemp4048,nctemp4050);
}
nctempchar1 *nctemp4055 =sel;
int nctemp4054 =(nctemp4055!=0);
if(nctemp4054)
{
struct tree* nctemp4060= p;
nctempchar1* nctemp4062= sel;
int nctemp4065=CodeEs(nctemp4060,nctemp4062);
}
struct tree* nctemp4067= p;
nctempchar1* nctemp4069= name;
int nctemp4072=CodeEs(nctemp4067,nctemp4069);
struct tree* nctemp4074= p;
struct nctempchar1 *nctemp4078;
static struct nctempchar1 nctemp4079 = {{ 4}, (char*)"->d\0"};
nctemp4078=&nctemp4079;
nctempchar1* nctemp4076= nctemp4078;
int nctemp4080=CodeEs(nctemp4074,nctemp4076);
struct tree* nctemp4082= p;
struct nctempchar1 *nctemp4086;
static struct nctempchar1 nctemp4087 = {{ 2}, (char*)"[\0"};
nctemp4086=&nctemp4087;
nctempchar1* nctemp4084= nctemp4086;
int nctemp4088=CodeEs(nctemp4082,nctemp4084);
int nctemp4095 = i - 1;
int nctemp4090= nctemp4095;
int nctemp4096=CodeEd(nctemp4090);
struct tree* nctemp4098= p;
struct nctempchar1 *nctemp4102;
static struct nctempchar1 nctemp4103 = {{ 2}, (char*)"]\0"};
nctemp4102=&nctemp4103;
nctempchar1* nctemp4100= nctemp4102;
int nctemp4104=CodeEs(nctemp4098,nctemp4100);
struct tree* nctemp4106= p;
struct nctempchar1 *nctemp4110;
static struct nctempchar1 nctemp4111 = {{ 2}, (char*)"+\0"};
nctemp4110=&nctemp4111;
nctempchar1* nctemp4108= nctemp4110;
int nctemp4112=CodeEs(nctemp4106,nctemp4108);
struct tree* nctemp4114= p;
nctempchar1* nctemp4116= temp;
int nctemp4119=CodeEs(nctemp4114,nctemp4116);
struct tree* nctemp4121= p;
struct nctempchar1 *nctemp4125;
static struct nctempchar1 nctemp4126 = {{ 4}, (char*)";\n\0"};
nctemp4125=&nctemp4126;
nctempchar1* nctemp4123= nctemp4125;
int nctemp4127=CodeEs(nctemp4121,nctemp4123);
int nctemp4129=CodeArraycheck();
if(nctemp4129)
{
struct tree* nctemp4133= p;
int nctemp4135=PtreeGetline(nctemp4133);
int nctemp4131= nctemp4135;
nctempchar1* nctemp4136= qual;
nctempchar1* nctemp4139= sel;
nctempchar1* nctemp4142= name;
nctempchar1* nctemp4145= temp2;
int nctemp4148= i;
int nctemp4150=CodeArrayex(nctemp4131,nctemp4136,nctemp4139,nctemp4142,nctemp4145,nctemp4148);
}
}
int nctemp4151 = (sp !=0);
if(nctemp4151)
{
struct tree* nctemp4159= sp;
struct tree* nctemp4161=PtreeMvsister(nctemp4159);
sp =nctemp4161;
}
}
nctempchar1* nctemp4172= name;
int nctemp4175=LibeStrlen(nctemp4172);
nctempchar1* nctemp4177= temp;
int nctemp4180=LibeStrlen(nctemp4177);
int nctemp4181 = nctemp4175 + nctemp4180;
int nctemp4183 = nctemp4181 + 6;
size =nctemp4183;
int nctemp4190=size;
nctempchar1 *nctemp4189;
nctemp4189=(nctempchar1*)RunMalloc(sizeof(nctempchar1));
nctemp4189->d[0]=size;
nctemp4189->a=(char *)RunMalloc(sizeof(char)*nctemp4190);
rval=nctemp4189;
nctempchar1* nctemp4194= name;
nctempchar1* nctemp4197= rval;
int nctemp4200=LibeStrcpy(nctemp4194,nctemp4197);
struct nctempchar1 *nctemp4204;
static struct nctempchar1 nctemp4205 = {{ 4}, (char*)"->a\0"};
nctemp4204=&nctemp4205;
nctempchar1* nctemp4202= nctemp4204;
nctempchar1* nctemp4206= rval;
int nctemp4209=LibeStrcat(nctemp4202,nctemp4206);
struct nctempchar1 *nctemp4213;
static struct nctempchar1 nctemp4214 = {{ 2}, (char*)"[\0"};
nctemp4213=&nctemp4214;
nctempchar1* nctemp4211= nctemp4213;
nctempchar1* nctemp4215= rval;
int nctemp4218=LibeStrcat(nctemp4211,nctemp4215);
nctempchar1* nctemp4220= temp;
nctempchar1* nctemp4223= rval;
int nctemp4226=LibeStrcat(nctemp4220,nctemp4223);
struct nctempchar1 *nctemp4230;
static struct nctempchar1 nctemp4231 = {{ 2}, (char*)"]\0"};
nctemp4230=&nctemp4231;
nctempchar1* nctemp4228= nctemp4230;
nctempchar1* nctemp4232= rval;
int nctemp4235=LibeStrcat(nctemp4228,nctemp4232);
return rval;
}
nctempchar1 * CodeQident (nctempchar1 *qual,nctempchar1 *ident)
{
int lq;
int li;
nctempchar1 *name;
nctempchar1* nctemp4242= qual;
int nctemp4245=LibeStrlen(nctemp4242);
lq =nctemp4245;
nctempchar1* nctemp4250= ident;
int nctemp4253=LibeStrlen(nctemp4250);
li =nctemp4253;
int nctemp4268 = lq + li;
int nctemp4270 = nctemp4268 + 2;
int nctemp4260=nctemp4270;
nctempchar1 *nctemp4259;
nctemp4259=(nctempchar1*)RunMalloc(sizeof(nctempchar1));
int nctemp4278 = lq + li;
int nctemp4280 = nctemp4278 + 2;
nctemp4259->d[0]=nctemp4280;
nctemp4259->a=(char *)RunMalloc(sizeof(char)*nctemp4260);
name=nctemp4259;
nctempchar1* nctemp4282= qual;
nctempchar1* nctemp4285= name;
int nctemp4288=LibeStrcpy(nctemp4282,nctemp4285);
struct nctempchar1 *nctemp4292;
static struct nctempchar1 nctemp4293 = {{ 2}, (char*)".\0"};
nctemp4292=&nctemp4293;
nctempchar1* nctemp4290= nctemp4292;
nctempchar1* nctemp4294= name;
int nctemp4297=LibeStrcat(nctemp4290,nctemp4294);
nctempchar1* nctemp4299= ident;
nctempchar1* nctemp4302= name;
int nctemp4305=LibeStrcat(nctemp4299,nctemp4302);
return name;
}
nctempchar1 * CodeQident2 (nctempchar1 *qual,nctempchar1 *ident)
{
int lq;
int li;
nctempchar1 *name;
nctempchar1* nctemp4312= qual;
int nctemp4315=LibeStrlen(nctemp4312);
lq =nctemp4315;
nctempchar1* nctemp4320= ident;
int nctemp4323=LibeStrlen(nctemp4320);
li =nctemp4323;
int nctemp4338 = lq + li;
int nctemp4340 = nctemp4338 + 3;
int nctemp4330=nctemp4340;
nctempchar1 *nctemp4329;
nctemp4329=(nctempchar1*)RunMalloc(sizeof(nctempchar1));
int nctemp4348 = lq + li;
int nctemp4350 = nctemp4348 + 3;
nctemp4329->d[0]=nctemp4350;
nctemp4329->a=(char *)RunMalloc(sizeof(char)*nctemp4330);
name=nctemp4329;
nctempchar1* nctemp4352= qual;
nctempchar1* nctemp4355= name;
int nctemp4358=LibeStrcpy(nctemp4352,nctemp4355);
struct nctempchar1 *nctemp4362;
static struct nctempchar1 nctemp4363 = {{ 3}, (char*)"->\0"};
nctemp4362=&nctemp4363;
nctempchar1* nctemp4360= nctemp4362;
nctempchar1* nctemp4364= name;
int nctemp4367=LibeStrcat(nctemp4360,nctemp4364);
nctempchar1* nctemp4369= ident;
nctempchar1* nctemp4372= name;
int nctemp4375=LibeStrcat(nctemp4369,nctemp4372);
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
struct tree* nctemp4383= p;
nctempchar1* nctemp4385=PtreeGetstruct(nctemp4383);
nctempchar1* nctemp4381= nctemp4385;
struct nctempchar1 *nctemp4388;
static struct nctempchar1 nctemp4389 = {{ 7}, (char*)"struct\0"};
nctemp4388=&nctemp4389;
nctempchar1* nctemp4386= nctemp4388;
int nctemp4390=LibeStrcmp(nctemp4381,nctemp4386);
int nctemp4378 = (nctemp4390 ==1);
if(nctemp4378)
{
struct tree* nctemp4397= p;
nctempchar1* nctemp4399=PtreeGetarray(nctemp4397);
nctempchar1* nctemp4395= nctemp4399;
struct nctempchar1 *nctemp4402;
static struct nctempchar1 nctemp4403 = {{ 6}, (char*)"array\0"};
nctemp4402=&nctemp4403;
nctempchar1* nctemp4400= nctemp4402;
int nctemp4404=LibeStrcmp(nctemp4395,nctemp4400);
int nctemp4392 = (nctemp4404 ==1);
if(nctemp4392)
{
struct tree* nctemp4411= p;
nctempchar1* nctemp4413= qual;
struct nctempchar1 *nctemp4418;
static struct nctempchar1 nctemp4419 = {{ 2}, (char*)".\0"};
nctemp4418=&nctemp4419;
nctempchar1* nctemp4416= nctemp4418;
nctempchar1* nctemp4420=CodeArray(nctemp4411,nctemp4413,nctemp4416);
qual=nctemp4420;
struct tree* nctemp4425= p;
struct tree* nctemp4427=PtreeMvchild(nctemp4425);
np =nctemp4427;
int nctemp4428 = (np ==0);
if(nctemp4428)
{
return qual;
}
struct tree* nctemp4438= np;
struct tree* nctemp4440=PtreeMvsister(nctemp4438);
np =nctemp4440;
int nctemp4441 = (np ==0);
if(nctemp4441)
{
return qual;
}
}
else{
struct tree* nctemp4452= p;
nctempchar1* nctemp4454=PtreeGetdef(nctemp4452);
qual=nctemp4454;
struct tree* nctemp4462= p;
struct tree* nctemp4464=PtreeMvchild(nctemp4462);
np =nctemp4464;
int nctemp4455 = (np ==0);
if(nctemp4455)
{
return qual;
}
}
struct tree* nctemp4473= np;
nctempchar1* nctemp4475=PtreeGetarray(nctemp4473);
nctempchar1* nctemp4471= nctemp4475;
struct nctempchar1 *nctemp4478;
static struct nctempchar1 nctemp4479 = {{ 6}, (char*)"array\0"};
nctemp4478=&nctemp4479;
nctempchar1* nctemp4476= nctemp4478;
int nctemp4480=LibeStrcmp(nctemp4471,nctemp4476);
int nctemp4468 = (nctemp4480 ==1);
if(nctemp4468)
{
struct symbol* nctemp4486=SymGetltp();
tp =nctemp4486;
struct symbol* nctemp4491=SymGetetp();
up =nctemp4491;
struct tree* nctemp4498= p;
nctempchar1* nctemp4500=PtreeGetdef(nctemp4498);
nctempchar1* nctemp4496= nctemp4500;
struct symbol* nctemp4501=SymLook(nctemp4496);
uup =nctemp4501;
struct symbol* nctemp4508= uup;
nctempchar1* nctemp4510=SymGetype(nctemp4508);
nctempchar1* nctemp4506= nctemp4510;
struct symbol* nctemp4511=SymLook(nctemp4506);
uup =nctemp4511;
struct symbol* nctemp4515= uup;
struct symbol* nctemp4517=SymGetable(nctemp4515);
struct symbol* nctemp4513= nctemp4517;
struct symbol* nctemp4518=SymSetltp(nctemp4513);
struct tree* nctemp4524= p;
nctempchar1* nctemp4526=PtreeGetarray(nctemp4524);
nctempchar1* nctemp4522= nctemp4526;
struct nctempchar1 *nctemp4529;
static struct nctempchar1 nctemp4530 = {{ 6}, (char*)"array\0"};
nctemp4529=&nctemp4530;
nctempchar1* nctemp4527= nctemp4529;
int nctemp4531=LibeStrcmp(nctemp4522,nctemp4527);
int nctemp4519 = (nctemp4531 ==1);
if(nctemp4519)
{
struct tree* nctemp4538= np;
nctempchar1* nctemp4540= qual;
struct nctempchar1 *nctemp4545;
static struct nctempchar1 nctemp4546 = {{ 2}, (char*)".\0"};
nctemp4545=&nctemp4546;
nctempchar1* nctemp4543= nctemp4545;
nctempchar1* nctemp4547=CodeArray(nctemp4538,nctemp4540,nctemp4543);
name=nctemp4547;
}
else{
struct tree* nctemp4553= np;
nctempchar1* nctemp4555= qual;
struct nctempchar1 *nctemp4560;
static struct nctempchar1 nctemp4561 = {{ 3}, (char*)"->\0"};
nctemp4560=&nctemp4561;
nctempchar1* nctemp4558= nctemp4560;
nctempchar1* nctemp4562=CodeArray(nctemp4553,nctemp4555,nctemp4558);
name=nctemp4562;
}
struct symbol* nctemp4564= tp;
struct symbol* nctemp4566=SymSetltp(nctemp4564);
struct symbol* nctemp4568= up;
struct symbol* nctemp4570=SymSetetp(nctemp4568);
}
else{
struct tree* nctemp4576= np;
nctempchar1* nctemp4578=PtreeGetdef(nctemp4576);
name=nctemp4578;
}
struct tree* nctemp4584= p;
nctempchar1* nctemp4586=PtreeGetarray(nctemp4584);
nctempchar1* nctemp4582= nctemp4586;
struct nctempchar1 *nctemp4589;
static struct nctempchar1 nctemp4590 = {{ 6}, (char*)"array\0"};
nctemp4589=&nctemp4590;
nctempchar1* nctemp4587= nctemp4589;
int nctemp4591=LibeStrcmp(nctemp4582,nctemp4587);
int nctemp4579 = (nctemp4591 ==1);
if(nctemp4579)
{
nctempchar1* nctemp4594= qual;
nctempchar1* nctemp4597= name;
nctempchar1* nctemp4600=CodeQident(nctemp4594,nctemp4597);
return nctemp4600;
}
else{
nctempchar1* nctemp4602= qual;
nctempchar1* nctemp4605= name;
nctempchar1* nctemp4608=CodeQident2(nctemp4602,nctemp4605);
return nctemp4608;
}
}
else{
struct tree* nctemp4614= p;
nctempchar1* nctemp4616=PtreeGetarray(nctemp4614);
nctempchar1* nctemp4612= nctemp4616;
struct nctempchar1 *nctemp4619;
static struct nctempchar1 nctemp4620 = {{ 6}, (char*)"array\0"};
nctemp4619=&nctemp4620;
nctempchar1* nctemp4617= nctemp4619;
int nctemp4621=LibeStrcmp(nctemp4612,nctemp4617);
int nctemp4609 = (nctemp4621 ==1);
if(nctemp4609)
{
name  = 0;
qual  = 0;
struct tree* nctemp4628= p;
nctempchar1* nctemp4630= qual;
nctempchar1* nctemp4633= name;
nctempchar1* nctemp4636=CodeArray(nctemp4628,nctemp4630,nctemp4633);
qual=nctemp4636;
return qual;
}
else{
struct tree* nctemp4640= p;
nctempchar1* nctemp4642=PtreeGetdef(nctemp4640);
return nctemp4642;
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
nctempchar1* nctemp4648=CodeMktemp();
pointer=nctemp4648;
nctempchar1* nctemp4654=CodeMktemp();
totdim=nctemp4654;
struct tree* nctemp4659= p;
struct tree* nctemp4661=PtreeMvchild(nctemp4659);
p =nctemp4661;
struct tree* nctemp4667= p;
nctempchar1* nctemp4669=PtreeGetdef(nctemp4667);
type=nctemp4669;
struct tree* nctemp4675= p;
nctempchar1* nctemp4677=PtreeGetstruct(nctemp4675);
structflag=nctemp4677;
struct tree* nctemp4683= p;
nctempchar1* nctemp4685=PtreeGetarray(nctemp4683);
arrayflag=nctemp4685;
struct tree* nctemp4691= p;
nctempchar1* nctemp4693=PtreeGetarray(nctemp4691);
nctempchar1* nctemp4689= nctemp4693;
struct nctempchar1 *nctemp4696;
static struct nctempchar1 nctemp4697 = {{ 6}, (char*)"array\0"};
nctemp4696=&nctemp4697;
nctempchar1* nctemp4694= nctemp4696;
int nctemp4698=LibeStrcmp(nctemp4689,nctemp4694);
int nctemp4686 = (nctemp4698 ==1);
if(nctemp4686)
{
struct tree* nctemp4704= p;
struct tree* nctemp4706=PtreeMvchild(nctemp4704);
p =nctemp4706;
struct tree* nctemp4711= p;
struct tree* nctemp4713=PtreeMvchild(nctemp4711);
p =nctemp4713;
struct tree* nctemp4718= p;
struct tree* nctemp4720=PtreeMvchild(nctemp4718);
p =nctemp4720;
struct tree* nctemp4725= p;
struct tree* nctemp4727=PtreeMvchild(nctemp4725);
p =nctemp4727;
sp = p;
top = p;
rank = 1;
struct tree* nctemp4735= p;
struct tree* nctemp4737=PtreeMvsister(nctemp4735);
p =nctemp4737;
int nctemp4728 = (p !=0);
int nctemp4739=nctemp4728;
while(nctemp4739)
{{
rank = (rank + 1);
}
struct tree* nctemp4747= p;
struct tree* nctemp4749=PtreeMvsister(nctemp4747);
p =nctemp4749;
int nctemp4740 = (p !=0);
nctemp4739=nctemp4740;}int nctemp4751 = (rank > 4);
if(nctemp4751)
{
struct nctempchar1 *nctemp4758;
static struct nctempchar1 nctemp4759 = {{ 29}, (char*)"Array dimension is too large\0"};
nctemp4758=&nctemp4759;
nctempchar1* nctemp4756= nctemp4758;
int nctemp4760=CodeError(nctemp4756);
}
p = sp;
i = 0;
int nctemp4761 = (p !=0);
int nctemp4765=nctemp4761;
while(nctemp4765)
{{
struct tree* nctemp4771= p;
nctempchar1* nctemp4773=CodeExpr(nctemp4771);
dim=nctemp4773;
int nctemp4774 = (i ==0);
if(nctemp4774)
{
struct tree* nctemp4779= p;
struct tree* nctemp4783= p;
nctempchar1* nctemp4785=PtreeGetype(nctemp4783);
nctempchar1* nctemp4781= nctemp4785;
int nctemp4786=CodeEs(nctemp4779,nctemp4781);
struct tree* nctemp4788= p;
struct nctempchar1 *nctemp4792;
static struct nctempchar1 nctemp4793 = {{ 2}, (char*)" \0"};
nctemp4792=&nctemp4793;
nctempchar1* nctemp4790= nctemp4792;
int nctemp4794=CodeEs(nctemp4788,nctemp4790);
struct tree* nctemp4796= p;
nctempchar1* nctemp4798= totdim;
int nctemp4801=CodeEs(nctemp4796,nctemp4798);
struct tree* nctemp4803= p;
struct nctempchar1 *nctemp4807;
static struct nctempchar1 nctemp4808 = {{ 2}, (char*)"=\0"};
nctemp4807=&nctemp4808;
nctempchar1* nctemp4805= nctemp4807;
int nctemp4809=CodeEs(nctemp4803,nctemp4805);
struct tree* nctemp4811= p;
nctempchar1* nctemp4813= dim;
int nctemp4816=CodeEs(nctemp4811,nctemp4813);
}
else{
struct tree* nctemp4818= p;
nctempchar1* nctemp4820= totdim;
int nctemp4823=CodeEs(nctemp4818,nctemp4820);
struct tree* nctemp4825= p;
struct nctempchar1 *nctemp4829;
static struct nctempchar1 nctemp4830 = {{ 2}, (char*)"=\0"};
nctemp4829=&nctemp4830;
nctempchar1* nctemp4827= nctemp4829;
int nctemp4831=CodeEs(nctemp4825,nctemp4827);
struct tree* nctemp4833= p;
nctempchar1* nctemp4835= totdim;
int nctemp4838=CodeEs(nctemp4833,nctemp4835);
struct tree* nctemp4840= p;
struct nctempchar1 *nctemp4844;
static struct nctempchar1 nctemp4845 = {{ 2}, (char*)"*\0"};
nctemp4844=&nctemp4845;
nctempchar1* nctemp4842= nctemp4844;
int nctemp4846=CodeEs(nctemp4840,nctemp4842);
struct tree* nctemp4848= p;
nctempchar1* nctemp4850= dim;
int nctemp4853=CodeEs(nctemp4848,nctemp4850);
}
struct tree* nctemp4855= p;
struct nctempchar1 *nctemp4859;
static struct nctempchar1 nctemp4860 = {{ 4}, (char*)";\n\0"};
nctemp4859=&nctemp4860;
nctempchar1* nctemp4857= nctemp4859;
int nctemp4861=CodeEs(nctemp4855,nctemp4857);
i = (i + 1);
struct tree* nctemp4866= p;
struct tree* nctemp4868=PtreeMvsister(nctemp4866);
p =nctemp4868;
}
int nctemp4869 = (p !=0);
nctemp4765=nctemp4869;}}
nctempchar1* nctemp4879= structflag;
struct nctempchar1 *nctemp4884;
static struct nctempchar1 nctemp4885 = {{ 7}, (char*)"struct\0"};
nctemp4884=&nctemp4885;
nctempchar1* nctemp4882= nctemp4884;
int nctemp4886=LibeStrcmp(nctemp4879,nctemp4882);
int nctemp4876 = (nctemp4886 ==1);
nctempchar1* nctemp4892= arrayflag;
struct nctempchar1 *nctemp4897;
static struct nctempchar1 nctemp4898 = {{ 6}, (char*)"array\0"};
nctemp4897=&nctemp4898;
nctempchar1* nctemp4895= nctemp4897;
int nctemp4899=LibeStrcmp(nctemp4892,nctemp4895);
int nctemp4889 = (nctemp4899 ==0);
int nctemp4873 = (nctemp4876 && nctemp4889);
if(nctemp4873)
{
struct tree* nctemp4902= p;
struct nctempchar1 *nctemp4906;
static struct nctempchar1 nctemp4907 = {{ 8}, (char*)"struct \0"};
nctemp4906=&nctemp4907;
nctempchar1* nctemp4904= nctemp4906;
int nctemp4908=CodeEs(nctemp4902,nctemp4904);
struct tree* nctemp4910= p;
nctempchar1* nctemp4912= type;
int nctemp4915=CodeEs(nctemp4910,nctemp4912);
struct tree* nctemp4917= p;
struct nctempchar1 *nctemp4921;
static struct nctempchar1 nctemp4922 = {{ 3}, (char*)" *\0"};
nctemp4921=&nctemp4922;
nctempchar1* nctemp4919= nctemp4921;
int nctemp4923=CodeEs(nctemp4917,nctemp4919);
struct tree* nctemp4925= p;
nctempchar1* nctemp4927= pointer;
int nctemp4930=CodeEs(nctemp4925,nctemp4927);
struct tree* nctemp4932= p;
struct nctempchar1 *nctemp4936;
static struct nctempchar1 nctemp4937 = {{ 2}, (char*)"=\0"};
nctemp4936=&nctemp4937;
nctempchar1* nctemp4934= nctemp4936;
int nctemp4938=CodeEs(nctemp4932,nctemp4934);
struct tree* nctemp4940= p;
struct nctempchar1 *nctemp4944;
static struct nctempchar1 nctemp4945 = {{ 2}, (char*)"(\0"};
nctemp4944=&nctemp4945;
nctempchar1* nctemp4942= nctemp4944;
int nctemp4946=CodeEs(nctemp4940,nctemp4942);
struct tree* nctemp4948= p;
struct nctempchar1 *nctemp4952;
static struct nctempchar1 nctemp4953 = {{ 8}, (char*)"struct \0"};
nctemp4952=&nctemp4953;
nctempchar1* nctemp4950= nctemp4952;
int nctemp4954=CodeEs(nctemp4948,nctemp4950);
struct tree* nctemp4956= p;
nctempchar1* nctemp4958= type;
int nctemp4961=CodeEs(nctemp4956,nctemp4958);
struct tree* nctemp4963= p;
struct nctempchar1 *nctemp4967;
static struct nctempchar1 nctemp4968 = {{ 3}, (char*)"*)\0"};
nctemp4967=&nctemp4968;
nctempchar1* nctemp4965= nctemp4967;
int nctemp4969=CodeEs(nctemp4963,nctemp4965);
struct tree* nctemp4971= p;
struct nctempchar1 *nctemp4975;
static struct nctempchar1 nctemp4976 = {{ 11}, (char*)"RunMalloc(\0"};
nctemp4975=&nctemp4976;
nctempchar1* nctemp4973= nctemp4975;
int nctemp4977=CodeEs(nctemp4971,nctemp4973);
struct tree* nctemp4979= p;
struct nctempchar1 *nctemp4983;
static struct nctempchar1 nctemp4984 = {{ 8}, (char*)"sizeof(\0"};
nctemp4983=&nctemp4984;
nctempchar1* nctemp4981= nctemp4983;
int nctemp4985=CodeEs(nctemp4979,nctemp4981);
struct tree* nctemp4987= p;
struct nctempchar1 *nctemp4991;
static struct nctempchar1 nctemp4992 = {{ 8}, (char*)"struct \0"};
nctemp4991=&nctemp4992;
nctempchar1* nctemp4989= nctemp4991;
int nctemp4993=CodeEs(nctemp4987,nctemp4989);
struct tree* nctemp4995= p;
nctempchar1* nctemp4997= type;
int nctemp5000=CodeEs(nctemp4995,nctemp4997);
struct tree* nctemp5002= p;
struct nctempchar1 *nctemp5006;
static struct nctempchar1 nctemp5007 = {{ 6}, (char*)"));\n\0"};
nctemp5006=&nctemp5007;
nctempchar1* nctemp5004= nctemp5006;
int nctemp5008=CodeEs(nctemp5002,nctemp5004);
}
nctempchar1* nctemp5015= structflag;
struct nctempchar1 *nctemp5020;
static struct nctempchar1 nctemp5021 = {{ 7}, (char*)"struct\0"};
nctemp5020=&nctemp5021;
nctempchar1* nctemp5018= nctemp5020;
int nctemp5022=LibeStrcmp(nctemp5015,nctemp5018);
int nctemp5012 = (nctemp5022 ==1);
nctempchar1* nctemp5028= arrayflag;
struct nctempchar1 *nctemp5033;
static struct nctempchar1 nctemp5034 = {{ 6}, (char*)"array\0"};
nctemp5033=&nctemp5034;
nctempchar1* nctemp5031= nctemp5033;
int nctemp5035=LibeStrcmp(nctemp5028,nctemp5031);
int nctemp5025 = (nctemp5035 ==1);
int nctemp5009 = (nctemp5012 && nctemp5025);
if(nctemp5009)
{
struct tree* nctemp5038= p;
struct nctempchar1 *nctemp5042;
static struct nctempchar1 nctemp5043 = {{ 14}, (char*)"struct nctemp\0"};
nctemp5042=&nctemp5043;
nctempchar1* nctemp5040= nctemp5042;
int nctemp5044=CodeEs(nctemp5038,nctemp5040);
struct tree* nctemp5046= p;
nctempchar1* nctemp5048= type;
int nctemp5051=CodeEs(nctemp5046,nctemp5048);
int nctemp5053= rank;
int nctemp5055=CodeEd(nctemp5053);
struct tree* nctemp5057= p;
struct nctempchar1 *nctemp5061;
static struct nctempchar1 nctemp5062 = {{ 3}, (char*)" *\0"};
nctemp5061=&nctemp5062;
nctempchar1* nctemp5059= nctemp5061;
int nctemp5063=CodeEs(nctemp5057,nctemp5059);
struct tree* nctemp5065= p;
nctempchar1* nctemp5067= pointer;
int nctemp5070=CodeEs(nctemp5065,nctemp5067);
struct tree* nctemp5072= p;
struct nctempchar1 *nctemp5076;
static struct nctempchar1 nctemp5077 = {{ 4}, (char*)";\n\0"};
nctemp5076=&nctemp5077;
nctempchar1* nctemp5074= nctemp5076;
int nctemp5078=CodeEs(nctemp5072,nctemp5074);
struct tree* nctemp5080= p;
nctempchar1* nctemp5082= pointer;
int nctemp5085=CodeEs(nctemp5080,nctemp5082);
struct tree* nctemp5087= p;
struct nctempchar1 *nctemp5091;
static struct nctempchar1 nctemp5092 = {{ 2}, (char*)"=\0"};
nctemp5091=&nctemp5092;
nctempchar1* nctemp5089= nctemp5091;
int nctemp5093=CodeEs(nctemp5087,nctemp5089);
struct tree* nctemp5095= p;
struct nctempchar1 *nctemp5099;
static struct nctempchar1 nctemp5100 = {{ 2}, (char*)"(\0"};
nctemp5099=&nctemp5100;
nctempchar1* nctemp5097= nctemp5099;
int nctemp5101=CodeEs(nctemp5095,nctemp5097);
struct tree* nctemp5103= p;
struct nctempchar1 *nctemp5107;
static struct nctempchar1 nctemp5108 = {{ 14}, (char*)"struct nctemp\0"};
nctemp5107=&nctemp5108;
nctempchar1* nctemp5105= nctemp5107;
int nctemp5109=CodeEs(nctemp5103,nctemp5105);
struct tree* nctemp5111= p;
nctempchar1* nctemp5113= type;
int nctemp5116=CodeEs(nctemp5111,nctemp5113);
int nctemp5118= rank;
int nctemp5120=CodeEd(nctemp5118);
struct tree* nctemp5122= p;
struct nctempchar1 *nctemp5126;
static struct nctempchar1 nctemp5127 = {{ 3}, (char*)"*)\0"};
nctemp5126=&nctemp5127;
nctempchar1* nctemp5124= nctemp5126;
int nctemp5128=CodeEs(nctemp5122,nctemp5124);
struct tree* nctemp5130= p;
struct nctempchar1 *nctemp5134;
static struct nctempchar1 nctemp5135 = {{ 11}, (char*)"RunMalloc(\0"};
nctemp5134=&nctemp5135;
nctempchar1* nctemp5132= nctemp5134;
int nctemp5136=CodeEs(nctemp5130,nctemp5132);
struct tree* nctemp5138= p;
struct nctempchar1 *nctemp5142;
static struct nctempchar1 nctemp5143 = {{ 21}, (char*)"sizeof(struct nctemp\0"};
nctemp5142=&nctemp5143;
nctempchar1* nctemp5140= nctemp5142;
int nctemp5144=CodeEs(nctemp5138,nctemp5140);
struct tree* nctemp5146= p;
nctempchar1* nctemp5148= type;
int nctemp5151=CodeEs(nctemp5146,nctemp5148);
int nctemp5153= rank;
int nctemp5155=CodeEd(nctemp5153);
struct tree* nctemp5157= p;
struct nctempchar1 *nctemp5161;
static struct nctempchar1 nctemp5162 = {{ 6}, (char*)"));\n\0"};
nctemp5161=&nctemp5162;
nctempchar1* nctemp5159= nctemp5161;
int nctemp5163=CodeEs(nctemp5157,nctemp5159);
i = 0;
p = sp;
int nctemp5164 = (p !=0);
int nctemp5168=nctemp5164;
while(nctemp5168)
{{
struct tree* nctemp5174= sp;
nctempchar1* nctemp5176=CodeExpr(nctemp5174);
dim=nctemp5176;
struct tree* nctemp5178= sp;
nctempchar1* nctemp5180= pointer;
int nctemp5183=CodeEs(nctemp5178,nctemp5180);
struct tree* nctemp5185= sp;
struct nctempchar1 *nctemp5189;
static struct nctempchar1 nctemp5190 = {{ 4}, (char*)"->d\0"};
nctemp5189=&nctemp5190;
nctempchar1* nctemp5187= nctemp5189;
int nctemp5191=CodeEs(nctemp5185,nctemp5187);
struct tree* nctemp5193= sp;
struct nctempchar1 *nctemp5197;
static struct nctempchar1 nctemp5198 = {{ 2}, (char*)"[\0"};
nctemp5197=&nctemp5198;
nctempchar1* nctemp5195= nctemp5197;
int nctemp5199=CodeEs(nctemp5193,nctemp5195);
int nctemp5201= i;
int nctemp5203=CodeEd(nctemp5201);
struct tree* nctemp5205= sp;
struct nctempchar1 *nctemp5209;
static struct nctempchar1 nctemp5210 = {{ 3}, (char*)"]=\0"};
nctemp5209=&nctemp5210;
nctempchar1* nctemp5207= nctemp5209;
int nctemp5211=CodeEs(nctemp5205,nctemp5207);
struct tree* nctemp5213= sp;
nctempchar1* nctemp5215= dim;
int nctemp5218=CodeEs(nctemp5213,nctemp5215);
struct tree* nctemp5220= sp;
struct nctempchar1 *nctemp5224;
static struct nctempchar1 nctemp5225 = {{ 4}, (char*)";\n\0"};
nctemp5224=&nctemp5225;
nctempchar1* nctemp5222= nctemp5224;
int nctemp5226=CodeEs(nctemp5220,nctemp5222);
i = (i + 1);
struct tree* nctemp5231= p;
struct tree* nctemp5233=PtreeMvsister(nctemp5231);
p =nctemp5233;
}
int nctemp5234 = (p !=0);
nctemp5168=nctemp5234;}struct tree* nctemp5239= sp;
nctempchar1* nctemp5241= pointer;
int nctemp5244=CodeEs(nctemp5239,nctemp5241);
struct tree* nctemp5246= sp;
struct nctempchar1 *nctemp5250;
static struct nctempchar1 nctemp5251 = {{ 4}, (char*)"->a\0"};
nctemp5250=&nctemp5251;
nctempchar1* nctemp5248= nctemp5250;
int nctemp5252=CodeEs(nctemp5246,nctemp5248);
struct tree* nctemp5254= sp;
struct nctempchar1 *nctemp5258;
static struct nctempchar1 nctemp5259 = {{ 2}, (char*)"=\0"};
nctemp5258=&nctemp5259;
nctempchar1* nctemp5256= nctemp5258;
int nctemp5260=CodeEs(nctemp5254,nctemp5256);
struct tree* nctemp5262= sp;
struct nctempchar1 *nctemp5266;
static struct nctempchar1 nctemp5267 = {{ 9}, (char*)"(struct \0"};
nctemp5266=&nctemp5267;
nctempchar1* nctemp5264= nctemp5266;
int nctemp5268=CodeEs(nctemp5262,nctemp5264);
struct tree* nctemp5270= sp;
nctempchar1* nctemp5272= type;
int nctemp5275=CodeEs(nctemp5270,nctemp5272);
struct tree* nctemp5277= sp;
struct nctempchar1 *nctemp5281;
static struct nctempchar1 nctemp5282 = {{ 3}, (char*)"*)\0"};
nctemp5281=&nctemp5282;
nctempchar1* nctemp5279= nctemp5281;
int nctemp5283=CodeEs(nctemp5277,nctemp5279);
struct tree* nctemp5285= sp;
struct nctempchar1 *nctemp5289;
static struct nctempchar1 nctemp5290 = {{ 18}, (char*)"RunMalloc(sizeof(\0"};
nctemp5289=&nctemp5290;
nctempchar1* nctemp5287= nctemp5289;
int nctemp5291=CodeEs(nctemp5285,nctemp5287);
struct tree* nctemp5293= sp;
struct nctempchar1 *nctemp5297;
static struct nctempchar1 nctemp5298 = {{ 8}, (char*)"struct \0"};
nctemp5297=&nctemp5298;
nctempchar1* nctemp5295= nctemp5297;
int nctemp5299=CodeEs(nctemp5293,nctemp5295);
struct tree* nctemp5301= sp;
nctempchar1* nctemp5303= type;
int nctemp5306=CodeEs(nctemp5301,nctemp5303);
struct tree* nctemp5308= sp;
struct nctempchar1 *nctemp5312;
static struct nctempchar1 nctemp5313 = {{ 2}, (char*)")\0"};
nctemp5312=&nctemp5313;
nctempchar1* nctemp5310= nctemp5312;
int nctemp5314=CodeEs(nctemp5308,nctemp5310);
struct tree* nctemp5316= sp;
struct nctempchar1 *nctemp5320;
static struct nctempchar1 nctemp5321 = {{ 2}, (char*)"*\0"};
nctemp5320=&nctemp5321;
nctempchar1* nctemp5318= nctemp5320;
int nctemp5322=CodeEs(nctemp5316,nctemp5318);
struct tree* nctemp5324= sp;
nctempchar1* nctemp5326= totdim;
int nctemp5329=CodeEs(nctemp5324,nctemp5326);
struct tree* nctemp5331= sp;
struct nctempchar1 *nctemp5335;
static struct nctempchar1 nctemp5336 = {{ 5}, (char*)");\n\0"};
nctemp5335=&nctemp5336;
nctempchar1* nctemp5333= nctemp5335;
int nctemp5337=CodeEs(nctemp5331,nctemp5333);
}
nctempchar1* nctemp5344= structflag;
struct nctempchar1 *nctemp5349;
static struct nctempchar1 nctemp5350 = {{ 7}, (char*)"struct\0"};
nctemp5349=&nctemp5350;
nctempchar1* nctemp5347= nctemp5349;
int nctemp5351=LibeStrcmp(nctemp5344,nctemp5347);
int nctemp5341 = (nctemp5351 ==0);
nctempchar1* nctemp5357= arrayflag;
struct nctempchar1 *nctemp5362;
static struct nctempchar1 nctemp5363 = {{ 6}, (char*)"array\0"};
nctemp5362=&nctemp5363;
nctempchar1* nctemp5360= nctemp5362;
int nctemp5364=LibeStrcmp(nctemp5357,nctemp5360);
int nctemp5354 = (nctemp5364 ==1);
int nctemp5338 = (nctemp5341 && nctemp5354);
if(nctemp5338)
{
int nctemp5367= 4;
int nctemp5369=LibeFlush(nctemp5367);
struct tree* nctemp5371= sp;
struct nctempchar1 *nctemp5375;
static struct nctempchar1 nctemp5376 = {{ 7}, (char*)"nctemp\0"};
nctemp5375=&nctemp5376;
nctempchar1* nctemp5373= nctemp5375;
int nctemp5377=CodeEs(nctemp5371,nctemp5373);
struct tree* nctemp5379= sp;
nctempchar1* nctemp5381= type;
int nctemp5384=CodeEs(nctemp5379,nctemp5381);
int nctemp5386= rank;
int nctemp5388=CodeEd(nctemp5386);
struct tree* nctemp5390= sp;
struct nctempchar1 *nctemp5394;
static struct nctempchar1 nctemp5395 = {{ 3}, (char*)" *\0"};
nctemp5394=&nctemp5395;
nctempchar1* nctemp5392= nctemp5394;
int nctemp5396=CodeEs(nctemp5390,nctemp5392);
struct tree* nctemp5398= sp;
nctempchar1* nctemp5400= pointer;
int nctemp5403=CodeEs(nctemp5398,nctemp5400);
struct tree* nctemp5405= sp;
struct nctempchar1 *nctemp5409;
static struct nctempchar1 nctemp5410 = {{ 4}, (char*)";\n\0"};
nctemp5409=&nctemp5410;
nctempchar1* nctemp5407= nctemp5409;
int nctemp5411=CodeEs(nctemp5405,nctemp5407);
p = top;
i = 0;
struct tree* nctemp5413= p;
nctempchar1* nctemp5415= pointer;
int nctemp5418=CodeEs(nctemp5413,nctemp5415);
struct tree* nctemp5420= p;
struct nctempchar1 *nctemp5424;
static struct nctempchar1 nctemp5425 = {{ 2}, (char*)"=\0"};
nctemp5424=&nctemp5425;
nctempchar1* nctemp5422= nctemp5424;
int nctemp5426=CodeEs(nctemp5420,nctemp5422);
struct tree* nctemp5428= p;
struct nctempchar1 *nctemp5432;
static struct nctempchar1 nctemp5433 = {{ 2}, (char*)"(\0"};
nctemp5432=&nctemp5433;
nctempchar1* nctemp5430= nctemp5432;
int nctemp5434=CodeEs(nctemp5428,nctemp5430);
struct tree* nctemp5436= p;
struct nctempchar1 *nctemp5440;
static struct nctempchar1 nctemp5441 = {{ 7}, (char*)"nctemp\0"};
nctemp5440=&nctemp5441;
nctempchar1* nctemp5438= nctemp5440;
int nctemp5442=CodeEs(nctemp5436,nctemp5438);
struct tree* nctemp5444= p;
nctempchar1* nctemp5446= type;
int nctemp5449=CodeEs(nctemp5444,nctemp5446);
int nctemp5451= rank;
int nctemp5453=CodeEd(nctemp5451);
struct tree* nctemp5455= p;
struct nctempchar1 *nctemp5459;
static struct nctempchar1 nctemp5460 = {{ 3}, (char*)"*)\0"};
nctemp5459=&nctemp5460;
nctempchar1* nctemp5457= nctemp5459;
int nctemp5461=CodeEs(nctemp5455,nctemp5457);
struct tree* nctemp5463= p;
struct nctempchar1 *nctemp5467;
static struct nctempchar1 nctemp5468 = {{ 11}, (char*)"RunMalloc(\0"};
nctemp5467=&nctemp5468;
nctempchar1* nctemp5465= nctemp5467;
int nctemp5469=CodeEs(nctemp5463,nctemp5465);
struct tree* nctemp5471= p;
struct nctempchar1 *nctemp5475;
static struct nctempchar1 nctemp5476 = {{ 14}, (char*)"sizeof(nctemp\0"};
nctemp5475=&nctemp5476;
nctempchar1* nctemp5473= nctemp5475;
int nctemp5477=CodeEs(nctemp5471,nctemp5473);
struct tree* nctemp5479= p;
nctempchar1* nctemp5481= type;
int nctemp5484=CodeEs(nctemp5479,nctemp5481);
int nctemp5486= rank;
int nctemp5488=CodeEd(nctemp5486);
struct tree* nctemp5490= p;
struct nctempchar1 *nctemp5494;
static struct nctempchar1 nctemp5495 = {{ 6}, (char*)"));\n\0"};
nctemp5494=&nctemp5495;
nctempchar1* nctemp5492= nctemp5494;
int nctemp5496=CodeEs(nctemp5490,nctemp5492);
int nctemp5497 = (p !=0);
int nctemp5501=nctemp5497;
while(nctemp5501)
{{
struct tree* nctemp5507= p;
nctempchar1* nctemp5509=CodeExpr(nctemp5507);
dim=nctemp5509;
struct tree* nctemp5511= p;
nctempchar1* nctemp5513= pointer;
int nctemp5516=CodeEs(nctemp5511,nctemp5513);
struct tree* nctemp5518= p;
struct nctempchar1 *nctemp5522;
static struct nctempchar1 nctemp5523 = {{ 4}, (char*)"->d\0"};
nctemp5522=&nctemp5523;
nctempchar1* nctemp5520= nctemp5522;
int nctemp5524=CodeEs(nctemp5518,nctemp5520);
struct tree* nctemp5526= p;
struct nctempchar1 *nctemp5530;
static struct nctempchar1 nctemp5531 = {{ 2}, (char*)"[\0"};
nctemp5530=&nctemp5531;
nctempchar1* nctemp5528= nctemp5530;
int nctemp5532=CodeEs(nctemp5526,nctemp5528);
int nctemp5534= i;
int nctemp5536=CodeEd(nctemp5534);
struct tree* nctemp5538= p;
struct nctempchar1 *nctemp5542;
static struct nctempchar1 nctemp5543 = {{ 3}, (char*)"]=\0"};
nctemp5542=&nctemp5543;
nctempchar1* nctemp5540= nctemp5542;
int nctemp5544=CodeEs(nctemp5538,nctemp5540);
struct tree* nctemp5546= p;
nctempchar1* nctemp5548= dim;
int nctemp5551=CodeEs(nctemp5546,nctemp5548);
struct tree* nctemp5553= p;
struct nctempchar1 *nctemp5557;
static struct nctempchar1 nctemp5558 = {{ 4}, (char*)";\n\0"};
nctemp5557=&nctemp5558;
nctempchar1* nctemp5555= nctemp5557;
int nctemp5559=CodeEs(nctemp5553,nctemp5555);
i = (i + 1);
struct tree* nctemp5564= p;
struct tree* nctemp5566=PtreeMvsister(nctemp5564);
p =nctemp5566;
}
int nctemp5567 = (p !=0);
nctemp5501=nctemp5567;}p = top;
struct tree* nctemp5572= p;
nctempchar1* nctemp5574= pointer;
int nctemp5577=CodeEs(nctemp5572,nctemp5574);
struct tree* nctemp5579= p;
struct nctempchar1 *nctemp5583;
static struct nctempchar1 nctemp5584 = {{ 4}, (char*)"->a\0"};
nctemp5583=&nctemp5584;
nctempchar1* nctemp5581= nctemp5583;
int nctemp5585=CodeEs(nctemp5579,nctemp5581);
struct tree* nctemp5587= p;
struct nctempchar1 *nctemp5591;
static struct nctempchar1 nctemp5592 = {{ 3}, (char*)"=(\0"};
nctemp5591=&nctemp5592;
nctempchar1* nctemp5589= nctemp5591;
int nctemp5593=CodeEs(nctemp5587,nctemp5589);
struct tree* nctemp5595= p;
nctempchar1* nctemp5597= type;
int nctemp5600=CodeEs(nctemp5595,nctemp5597);
struct tree* nctemp5602= p;
struct nctempchar1 *nctemp5606;
static struct nctempchar1 nctemp5607 = {{ 4}, (char*)" *)\0"};
nctemp5606=&nctemp5607;
nctempchar1* nctemp5604= nctemp5606;
int nctemp5608=CodeEs(nctemp5602,nctemp5604);
struct tree* nctemp5610= p;
struct nctempchar1 *nctemp5614;
static struct nctempchar1 nctemp5615 = {{ 18}, (char*)"RunMalloc(sizeof(\0"};
nctemp5614=&nctemp5615;
nctempchar1* nctemp5612= nctemp5614;
int nctemp5616=CodeEs(nctemp5610,nctemp5612);
struct tree* nctemp5618= p;
nctempchar1* nctemp5620= type;
int nctemp5623=CodeEs(nctemp5618,nctemp5620);
struct tree* nctemp5625= p;
struct nctempchar1 *nctemp5629;
static struct nctempchar1 nctemp5630 = {{ 2}, (char*)")\0"};
nctemp5629=&nctemp5630;
nctempchar1* nctemp5627= nctemp5629;
int nctemp5631=CodeEs(nctemp5625,nctemp5627);
struct tree* nctemp5633= p;
struct nctempchar1 *nctemp5637;
static struct nctempchar1 nctemp5638 = {{ 2}, (char*)"*\0"};
nctemp5637=&nctemp5638;
nctempchar1* nctemp5635= nctemp5637;
int nctemp5639=CodeEs(nctemp5633,nctemp5635);
struct tree* nctemp5641= p;
nctempchar1* nctemp5643= totdim;
int nctemp5646=CodeEs(nctemp5641,nctemp5643);
struct tree* nctemp5648= p;
struct nctempchar1 *nctemp5652;
static struct nctempchar1 nctemp5653 = {{ 5}, (char*)");\n\0"};
nctemp5652=&nctemp5653;
nctempchar1* nctemp5650= nctemp5652;
int nctemp5654=CodeEs(nctemp5648,nctemp5650);
}
return pointer;
}
nctempchar1 * CodeDelete (struct tree* p)
{
nctempchar1 *tmp;
struct tree* nctemp5661= p;
struct tree* nctemp5663=PtreeMvchild(nctemp5661);
p =nctemp5663;
struct tree* nctemp5668= p;
struct tree* nctemp5670=PtreeMvchild(nctemp5668);
p =nctemp5670;
struct tree* nctemp5676= p;
nctempchar1* nctemp5678=CodeBinexpr(nctemp5676);
tmp=nctemp5678;
struct tree* nctemp5682= p;
nctempchar1* nctemp5684=PtreeGetref(nctemp5682);
nctempchar1* nctemp5680= nctemp5684;
struct nctempchar1 *nctemp5687;
static struct nctempchar1 nctemp5688 = {{ 5}, (char*)"aref\0"};
nctemp5687=&nctemp5688;
nctempchar1* nctemp5685= nctemp5687;
int nctemp5689=LibeStrcmp(nctemp5680,nctemp5685);
if(nctemp5689)
{
struct tree* nctemp5691= p;
struct nctempchar1 *nctemp5695;
static struct nctempchar1 nctemp5696 = {{ 9}, (char*)"RunFree(\0"};
nctemp5695=&nctemp5696;
nctempchar1* nctemp5693= nctemp5695;
int nctemp5697=CodeEs(nctemp5691,nctemp5693);
struct tree* nctemp5699= p;
nctempchar1* nctemp5701= tmp;
int nctemp5704=CodeEs(nctemp5699,nctemp5701);
struct tree* nctemp5706= p;
struct nctempchar1 *nctemp5710;
static struct nctempchar1 nctemp5711 = {{ 8}, (char*)"->a);\n\0"};
nctemp5710=&nctemp5711;
nctempchar1* nctemp5708= nctemp5710;
int nctemp5712=CodeEs(nctemp5706,nctemp5708);
struct tree* nctemp5714= p;
struct nctempchar1 *nctemp5718;
static struct nctempchar1 nctemp5719 = {{ 9}, (char*)"RunFree(\0"};
nctemp5718=&nctemp5719;
nctempchar1* nctemp5716= nctemp5718;
int nctemp5720=CodeEs(nctemp5714,nctemp5716);
struct tree* nctemp5722= p;
nctempchar1* nctemp5724= tmp;
int nctemp5727=CodeEs(nctemp5722,nctemp5724);
struct tree* nctemp5729= p;
struct nctempchar1 *nctemp5733;
static struct nctempchar1 nctemp5734 = {{ 5}, (char*)");\n\0"};
nctemp5733=&nctemp5734;
nctempchar1* nctemp5731= nctemp5733;
int nctemp5735=CodeEs(nctemp5729,nctemp5731);
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
nctempchar1* nctemp5743=CodeMktemp();
tempr=nctemp5743;
struct tree* nctemp5748= p;
struct tree* nctemp5750=PtreeMvchild(nctemp5748);
np =nctemp5750;
struct tree* nctemp5756= np;
nctempchar1* nctemp5758=CodeExpr(nctemp5756);
temp=nctemp5758;
struct tree* nctemp5763= np;
struct tree* nctemp5765=PtreeMvsister(nctemp5763);
sp =nctemp5765;
struct tree* nctemp5771= sp;
nctempchar1* nctemp5773=CodeExpr(nctemp5771);
index=nctemp5773;
struct tree* nctemp5775= p;
struct tree* nctemp5779= p;
nctempchar1* nctemp5781=PtreeGetype(nctemp5779);
nctempchar1* nctemp5777= nctemp5781;
int nctemp5782=CodeEs(nctemp5775,nctemp5777);
struct tree* nctemp5784= p;
struct nctempchar1 *nctemp5788;
static struct nctempchar1 nctemp5789 = {{ 2}, (char*)" \0"};
nctemp5788=&nctemp5789;
nctempchar1* nctemp5786= nctemp5788;
int nctemp5790=CodeEs(nctemp5784,nctemp5786);
struct tree* nctemp5792= p;
nctempchar1* nctemp5794= tempr;
int nctemp5797=CodeEs(nctemp5792,nctemp5794);
struct tree* nctemp5799= p;
struct nctempchar1 *nctemp5803;
static struct nctempchar1 nctemp5804 = {{ 2}, (char*)"=\0"};
nctemp5803=&nctemp5804;
nctempchar1* nctemp5801= nctemp5803;
int nctemp5805=CodeEs(nctemp5799,nctemp5801);
struct tree* nctemp5807= p;
nctempchar1* nctemp5809= temp;
int nctemp5812=CodeEs(nctemp5807,nctemp5809);
struct tree* nctemp5814= p;
struct nctempchar1 *nctemp5818;
static struct nctempchar1 nctemp5819 = {{ 4}, (char*)"->d\0"};
nctemp5818=&nctemp5819;
nctempchar1* nctemp5816= nctemp5818;
int nctemp5820=CodeEs(nctemp5814,nctemp5816);
struct tree* nctemp5822= p;
struct nctempchar1 *nctemp5826;
static struct nctempchar1 nctemp5827 = {{ 2}, (char*)"[\0"};
nctemp5826=&nctemp5827;
nctempchar1* nctemp5824= nctemp5826;
int nctemp5828=CodeEs(nctemp5822,nctemp5824);
struct tree* nctemp5830= p;
nctempchar1* nctemp5832= index;
int nctemp5835=CodeEs(nctemp5830,nctemp5832);
struct tree* nctemp5837= p;
struct nctempchar1 *nctemp5841;
static struct nctempchar1 nctemp5842 = {{ 3}, (char*)"];\0"};
nctemp5841=&nctemp5842;
nctempchar1* nctemp5839= nctemp5841;
int nctemp5843=CodeEs(nctemp5837,nctemp5839);
return tempr;
}
nctempchar1 * CodeCmplx (struct tree* p)
{
struct tree* np;
struct tree* sp;
nctempchar1 *q;
nctempchar1 *r;
nctempchar1 *tempr;
nctempchar1* nctemp5851=CodeMktemp();
tempr=nctemp5851;
struct tree* nctemp5856= p;
struct tree* nctemp5858=PtreeMvchild(nctemp5856);
np =nctemp5858;
struct tree* nctemp5863= np;
struct tree* nctemp5865=PtreeMvchild(nctemp5863);
np =nctemp5865;
struct tree* nctemp5871= np;
nctempchar1* nctemp5873=CodeExpr(nctemp5871);
q=nctemp5873;
struct tree* nctemp5878= np;
struct tree* nctemp5880=PtreeMvsister(nctemp5878);
sp =nctemp5880;
struct tree* nctemp5886= sp;
nctempchar1* nctemp5888=CodeExpr(nctemp5886);
r=nctemp5888;
struct tree* nctemp5890= p;
struct tree* nctemp5894= p;
nctempchar1* nctemp5896=PtreeGetype(nctemp5894);
nctempchar1* nctemp5892= nctemp5896;
int nctemp5897=CodeEs(nctemp5890,nctemp5892);
struct tree* nctemp5899= p;
struct nctempchar1 *nctemp5903;
static struct nctempchar1 nctemp5904 = {{ 2}, (char*)" \0"};
nctemp5903=&nctemp5904;
nctempchar1* nctemp5901= nctemp5903;
int nctemp5905=CodeEs(nctemp5899,nctemp5901);
struct tree* nctemp5907= p;
nctempchar1* nctemp5909= tempr;
int nctemp5912=CodeEs(nctemp5907,nctemp5909);
struct tree* nctemp5914= p;
struct nctempchar1 *nctemp5918;
static struct nctempchar1 nctemp5919 = {{ 3}, (char*)".r\0"};
nctemp5918=&nctemp5919;
nctempchar1* nctemp5916= nctemp5918;
int nctemp5920=CodeEs(nctemp5914,nctemp5916);
struct tree* nctemp5922= p;
struct nctempchar1 *nctemp5926;
static struct nctempchar1 nctemp5927 = {{ 3}, (char*)" =\0"};
nctemp5926=&nctemp5927;
nctempchar1* nctemp5924= nctemp5926;
int nctemp5928=CodeEs(nctemp5922,nctemp5924);
struct tree* nctemp5930= p;
nctempchar1* nctemp5932= q;
int nctemp5935=CodeEs(nctemp5930,nctemp5932);
struct tree* nctemp5937= p;
struct nctempchar1 *nctemp5941;
static struct nctempchar1 nctemp5942 = {{ 2}, (char*)";\0"};
nctemp5941=&nctemp5942;
nctempchar1* nctemp5939= nctemp5941;
int nctemp5943=CodeEs(nctemp5937,nctemp5939);
struct tree* nctemp5945= p;
struct tree* nctemp5949= p;
nctempchar1* nctemp5951=PtreeGetype(nctemp5949);
nctempchar1* nctemp5947= nctemp5951;
int nctemp5952=CodeEs(nctemp5945,nctemp5947);
struct tree* nctemp5954= p;
struct nctempchar1 *nctemp5958;
static struct nctempchar1 nctemp5959 = {{ 2}, (char*)" \0"};
nctemp5958=&nctemp5959;
nctempchar1* nctemp5956= nctemp5958;
int nctemp5960=CodeEs(nctemp5954,nctemp5956);
struct tree* nctemp5962= p;
nctempchar1* nctemp5964= tempr;
int nctemp5967=CodeEs(nctemp5962,nctemp5964);
struct tree* nctemp5969= p;
struct nctempchar1 *nctemp5973;
static struct nctempchar1 nctemp5974 = {{ 3}, (char*)".i\0"};
nctemp5973=&nctemp5974;
nctempchar1* nctemp5971= nctemp5973;
int nctemp5975=CodeEs(nctemp5969,nctemp5971);
struct tree* nctemp5977= p;
struct nctempchar1 *nctemp5981;
static struct nctempchar1 nctemp5982 = {{ 2}, (char*)"=\0"};
nctemp5981=&nctemp5982;
nctempchar1* nctemp5979= nctemp5981;
int nctemp5983=CodeEs(nctemp5977,nctemp5979);
struct tree* nctemp5985= p;
nctempchar1* nctemp5987= r;
int nctemp5990=CodeEs(nctemp5985,nctemp5987);
struct tree* nctemp5992= p;
struct nctempchar1 *nctemp5996;
static struct nctempchar1 nctemp5997 = {{ 2}, (char*)";\0"};
nctemp5996=&nctemp5997;
nctempchar1* nctemp5994= nctemp5996;
int nctemp5998=CodeEs(nctemp5992,nctemp5994);
return tempr;
}
nctempchar1 * CodeIm (struct tree* p)
{
struct tree* np;
nctempchar1 *q;
nctempchar1 *tempr;
nctempchar1* nctemp6006=CodeMktemp();
tempr=nctemp6006;
struct tree* nctemp6011= p;
struct tree* nctemp6013=PtreeMvchild(nctemp6011);
np =nctemp6013;
struct tree* nctemp6019= np;
nctempchar1* nctemp6021=CodeExpr(nctemp6019);
q=nctemp6021;
struct tree* nctemp6023= p;
struct tree* nctemp6027= p;
nctempchar1* nctemp6029=PtreeGetype(nctemp6027);
nctempchar1* nctemp6025= nctemp6029;
int nctemp6030=CodeEs(nctemp6023,nctemp6025);
struct tree* nctemp6032= p;
struct nctempchar1 *nctemp6036;
static struct nctempchar1 nctemp6037 = {{ 2}, (char*)" \0"};
nctemp6036=&nctemp6037;
nctempchar1* nctemp6034= nctemp6036;
int nctemp6038=CodeEs(nctemp6032,nctemp6034);
struct tree* nctemp6040= p;
nctempchar1* nctemp6042= tempr;
int nctemp6045=CodeEs(nctemp6040,nctemp6042);
struct tree* nctemp6047= p;
struct nctempchar1 *nctemp6051;
static struct nctempchar1 nctemp6052 = {{ 3}, (char*)" =\0"};
nctemp6051=&nctemp6052;
nctempchar1* nctemp6049= nctemp6051;
int nctemp6053=CodeEs(nctemp6047,nctemp6049);
struct tree* nctemp6055= p;
nctempchar1* nctemp6057= q;
int nctemp6060=CodeEs(nctemp6055,nctemp6057);
struct tree* nctemp6062= p;
struct nctempchar1 *nctemp6066;
static struct nctempchar1 nctemp6067 = {{ 5}, (char*)".i  \0"};
nctemp6066=&nctemp6067;
nctempchar1* nctemp6064= nctemp6066;
int nctemp6068=CodeEs(nctemp6062,nctemp6064);
struct tree* nctemp6070= p;
struct nctempchar1 *nctemp6074;
static struct nctempchar1 nctemp6075 = {{ 4}, (char*)";\n\0"};
nctemp6074=&nctemp6075;
nctempchar1* nctemp6072= nctemp6074;
int nctemp6076=CodeEs(nctemp6070,nctemp6072);
return tempr;
}
nctempchar1 * CodeRe (struct tree* p)
{
struct tree* np;
nctempchar1 *q;
nctempchar1 *tmp;
struct tree* nctemp6083= p;
struct tree* nctemp6085=PtreeMvchild(nctemp6083);
np =nctemp6085;
struct tree* nctemp6091= np;
nctempchar1* nctemp6093=CodeExpr(nctemp6091);
q=nctemp6093;
nctempchar1* nctemp6099=CodeMktemp();
tmp=nctemp6099;
struct tree* nctemp6101= p;
struct tree* nctemp6105= p;
nctempchar1* nctemp6107=PtreeGetype(nctemp6105);
nctempchar1* nctemp6103= nctemp6107;
int nctemp6108=CodeEs(nctemp6101,nctemp6103);
struct tree* nctemp6110= p;
struct nctempchar1 *nctemp6114;
static struct nctempchar1 nctemp6115 = {{ 2}, (char*)" \0"};
nctemp6114=&nctemp6115;
nctempchar1* nctemp6112= nctemp6114;
int nctemp6116=CodeEs(nctemp6110,nctemp6112);
struct tree* nctemp6118= p;
nctempchar1* nctemp6120= tmp;
int nctemp6123=CodeEs(nctemp6118,nctemp6120);
struct tree* nctemp6125= p;
struct nctempchar1 *nctemp6129;
static struct nctempchar1 nctemp6130 = {{ 3}, (char*)" =\0"};
nctemp6129=&nctemp6130;
nctempchar1* nctemp6127= nctemp6129;
int nctemp6131=CodeEs(nctemp6125,nctemp6127);
struct tree* nctemp6133= p;
nctempchar1* nctemp6135= q;
int nctemp6138=CodeEs(nctemp6133,nctemp6135);
struct tree* nctemp6140= p;
struct nctempchar1 *nctemp6144;
static struct nctempchar1 nctemp6145 = {{ 5}, (char*)".r  \0"};
nctemp6144=&nctemp6145;
nctempchar1* nctemp6142= nctemp6144;
int nctemp6146=CodeEs(nctemp6140,nctemp6142);
struct tree* nctemp6148= p;
struct nctempchar1 *nctemp6152;
static struct nctempchar1 nctemp6153 = {{ 4}, (char*)";\n\0"};
nctemp6152=&nctemp6153;
nctempchar1* nctemp6150= nctemp6152;
int nctemp6154=CodeEs(nctemp6148,nctemp6150);
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
struct tree* nctemp6163= p;
nctempchar1* nctemp6165=PtreeGetdef(nctemp6163);
nctempchar1* nctemp6161= nctemp6165;
struct symbol* nctemp6168=SymGetetp();
struct symbol* nctemp6166= nctemp6168;
struct symbol* nctemp6169=SymLookup(nctemp6161,nctemp6166);
tp =nctemp6169;
struct tree* nctemp6174= p;
struct tree* nctemp6176=PtreeMvchild(nctemp6174);
sp =nctemp6176;
int nctemp6177 = (sp !=0);
if(nctemp6177)
{
struct tree* nctemp6186= sp;
nctempchar1* nctemp6188=PtreeGetname(nctemp6186);
nctempchar1* nctemp6184= nctemp6188;
struct nctempchar1 *nctemp6191;
static struct nctempchar1 nctemp6192 = {{ 9}, (char*)"exprlist\0"};
nctemp6191=&nctemp6192;
nctempchar1* nctemp6189= nctemp6191;
int nctemp6193=LibeStrcmp(nctemp6184,nctemp6189);
int nctemp6181 = (nctemp6193 ==1);
if(nctemp6181)
{
struct tree* nctemp6199= sp;
struct tree* nctemp6201=PtreeMvchild(nctemp6199);
sp =nctemp6201;
}
}
int nctemp6202 = (sp !=0);
int nctemp6206=nctemp6202;
while(nctemp6206)
{{
nctempchar1* nctemp6212=CodeMktemp();
ntemp=nctemp6212;
struct tree* nctemp6214= sp;
nctempchar1* nctemp6216= ntemp;
int nctemp6219=PtreeSetempr(nctemp6214,nctemp6216);
struct tree* nctemp6225= sp;
nctempchar1* nctemp6227=CodeExpr(nctemp6225);
temp=nctemp6227;
struct tree* nctemp6233= sp;
nctempchar1* nctemp6235=PtreeGetref(nctemp6233);
nctempchar1* nctemp6231= nctemp6235;
struct nctempchar1 *nctemp6238;
static struct nctempchar1 nctemp6239 = {{ 5}, (char*)"aref\0"};
nctemp6238=&nctemp6239;
nctempchar1* nctemp6236= nctemp6238;
int nctemp6240=LibeStrcmp(nctemp6231,nctemp6236);
int nctemp6228 = (nctemp6240 ==1);
if(nctemp6228)
{
struct tree* nctemp6243= sp;
struct nctempchar1 *nctemp6247;
static struct nctempchar1 nctemp6248 = {{ 7}, (char*)"nctemp\0"};
nctemp6247=&nctemp6248;
nctempchar1* nctemp6245= nctemp6247;
int nctemp6249=CodeEs(nctemp6243,nctemp6245);
struct tree* nctemp6251= sp;
struct tree* nctemp6255= sp;
nctempchar1* nctemp6257=PtreeGetype(nctemp6255);
nctempchar1* nctemp6253= nctemp6257;
int nctemp6258=CodeEs(nctemp6251,nctemp6253);
struct tree* nctemp6262= sp;
int nctemp6264=PtreeGetrank(nctemp6262);
int nctemp6260= nctemp6264;
int nctemp6265=CodeEd(nctemp6260);
struct tree* nctemp6267= sp;
struct nctempchar1 *nctemp6271;
static struct nctempchar1 nctemp6272 = {{ 2}, (char*)"*\0"};
nctemp6271=&nctemp6272;
nctempchar1* nctemp6269= nctemp6271;
int nctemp6273=CodeEs(nctemp6267,nctemp6269);
}
else{
struct tree* nctemp6279= sp;
nctempchar1* nctemp6281=PtreeGetref(nctemp6279);
nctempchar1* nctemp6277= nctemp6281;
struct nctempchar1 *nctemp6284;
static struct nctempchar1 nctemp6285 = {{ 5}, (char*)"sref\0"};
nctemp6284=&nctemp6285;
nctempchar1* nctemp6282= nctemp6284;
int nctemp6286=LibeStrcmp(nctemp6277,nctemp6282);
int nctemp6274 = (nctemp6286 ==1);
if(nctemp6274)
{
struct tree* nctemp6289= sp;
struct nctempchar1 *nctemp6293;
static struct nctempchar1 nctemp6294 = {{ 8}, (char*)"struct \0"};
nctemp6293=&nctemp6294;
nctempchar1* nctemp6291= nctemp6293;
int nctemp6295=CodeEs(nctemp6289,nctemp6291);
struct tree* nctemp6297= sp;
struct tree* nctemp6301= sp;
nctempchar1* nctemp6303=PtreeGetype(nctemp6301);
nctempchar1* nctemp6299= nctemp6303;
int nctemp6304=CodeEs(nctemp6297,nctemp6299);
struct tree* nctemp6306= sp;
struct nctempchar1 *nctemp6310;
static struct nctempchar1 nctemp6311 = {{ 2}, (char*)"*\0"};
nctemp6310=&nctemp6311;
nctempchar1* nctemp6308= nctemp6310;
int nctemp6312=CodeEs(nctemp6306,nctemp6308);
}
else{
struct tree* nctemp6314= sp;
struct tree* nctemp6318= sp;
nctempchar1* nctemp6320=PtreeGetype(nctemp6318);
nctempchar1* nctemp6316= nctemp6320;
int nctemp6321=CodeEs(nctemp6314,nctemp6316);
}
}
struct tree* nctemp6323= sp;
struct nctempchar1 *nctemp6327;
static struct nctempchar1 nctemp6328 = {{ 2}, (char*)" \0"};
nctemp6327=&nctemp6328;
nctempchar1* nctemp6325= nctemp6327;
int nctemp6329=CodeEs(nctemp6323,nctemp6325);
struct tree* nctemp6331= sp;
nctempchar1* nctemp6333= ntemp;
int nctemp6336=CodeEs(nctemp6331,nctemp6333);
struct tree* nctemp6338= sp;
struct nctempchar1 *nctemp6342;
static struct nctempchar1 nctemp6343 = {{ 3}, (char*)"= \0"};
nctemp6342=&nctemp6343;
nctempchar1* nctemp6340= nctemp6342;
int nctemp6344=CodeEs(nctemp6338,nctemp6340);
struct tree* nctemp6346= sp;
nctempchar1* nctemp6348= temp;
int nctemp6351=CodeEs(nctemp6346,nctemp6348);
struct tree* nctemp6353= sp;
struct nctempchar1 *nctemp6357;
static struct nctempchar1 nctemp6358 = {{ 4}, (char*)";\n\0"};
nctemp6357=&nctemp6358;
nctempchar1* nctemp6355= nctemp6357;
int nctemp6359=CodeEs(nctemp6353,nctemp6355);
struct tree* nctemp6364= sp;
struct tree* nctemp6366=PtreeMvsister(nctemp6364);
sp =nctemp6366;
}
int nctemp6367 = (sp !=0);
nctemp6206=nctemp6367;}nctempchar1* nctemp6376=CodeMktemp();
ntemp=nctemp6376;
struct tree* nctemp6382= p;
nctempchar1* nctemp6384=PtreeGetref(nctemp6382);
nctempchar1* nctemp6380= nctemp6384;
struct nctempchar1 *nctemp6387;
static struct nctempchar1 nctemp6388 = {{ 5}, (char*)"aref\0"};
nctemp6387=&nctemp6388;
nctempchar1* nctemp6385= nctemp6387;
int nctemp6389=LibeStrcmp(nctemp6380,nctemp6385);
int nctemp6377 = (nctemp6389 ==1);
if(nctemp6377)
{
struct tree* nctemp6392= p;
struct nctempchar1 *nctemp6396;
static struct nctempchar1 nctemp6397 = {{ 7}, (char*)"nctemp\0"};
nctemp6396=&nctemp6397;
nctempchar1* nctemp6394= nctemp6396;
int nctemp6398=CodeEs(nctemp6392,nctemp6394);
struct tree* nctemp6400= p;
struct tree* nctemp6404= p;
nctempchar1* nctemp6406=PtreeGetype(nctemp6404);
nctempchar1* nctemp6402= nctemp6406;
int nctemp6407=CodeEs(nctemp6400,nctemp6402);
struct tree* nctemp6411= p;
int nctemp6413=PtreeGetrank(nctemp6411);
int nctemp6409= nctemp6413;
int nctemp6414=CodeEd(nctemp6409);
struct tree* nctemp6416= p;
struct nctempchar1 *nctemp6420;
static struct nctempchar1 nctemp6421 = {{ 2}, (char*)"*\0"};
nctemp6420=&nctemp6421;
nctempchar1* nctemp6418= nctemp6420;
int nctemp6422=CodeEs(nctemp6416,nctemp6418);
}
else{
struct tree* nctemp6428= p;
nctempchar1* nctemp6430=PtreeGetref(nctemp6428);
nctempchar1* nctemp6426= nctemp6430;
struct nctempchar1 *nctemp6433;
static struct nctempchar1 nctemp6434 = {{ 5}, (char*)"sref\0"};
nctemp6433=&nctemp6434;
nctempchar1* nctemp6431= nctemp6433;
int nctemp6435=LibeStrcmp(nctemp6426,nctemp6431);
int nctemp6423 = (nctemp6435 ==1);
if(nctemp6423)
{
struct tree* nctemp6438= p;
struct nctempchar1 *nctemp6442;
static struct nctempchar1 nctemp6443 = {{ 8}, (char*)"struct \0"};
nctemp6442=&nctemp6443;
nctempchar1* nctemp6440= nctemp6442;
int nctemp6444=CodeEs(nctemp6438,nctemp6440);
struct tree* nctemp6446= p;
struct tree* nctemp6450= p;
nctempchar1* nctemp6452=PtreeGetype(nctemp6450);
nctempchar1* nctemp6448= nctemp6452;
int nctemp6453=CodeEs(nctemp6446,nctemp6448);
struct tree* nctemp6455= p;
struct nctempchar1 *nctemp6459;
static struct nctempchar1 nctemp6460 = {{ 2}, (char*)"*\0"};
nctemp6459=&nctemp6460;
nctempchar1* nctemp6457= nctemp6459;
int nctemp6461=CodeEs(nctemp6455,nctemp6457);
}
else{
struct tree* nctemp6463= p;
struct tree* nctemp6467= p;
nctempchar1* nctemp6469=PtreeGetype(nctemp6467);
nctempchar1* nctemp6465= nctemp6469;
int nctemp6470=CodeEs(nctemp6463,nctemp6465);
}
}
struct tree* nctemp6472= p;
struct nctempchar1 *nctemp6476;
static struct nctempchar1 nctemp6477 = {{ 2}, (char*)" \0"};
nctemp6476=&nctemp6477;
nctempchar1* nctemp6474= nctemp6476;
int nctemp6478=CodeEs(nctemp6472,nctemp6474);
struct tree* nctemp6480= p;
nctempchar1* nctemp6482= ntemp;
int nctemp6485=CodeEs(nctemp6480,nctemp6482);
struct tree* nctemp6487= p;
struct nctempchar1 *nctemp6491;
static struct nctempchar1 nctemp6492 = {{ 2}, (char*)"=\0"};
nctemp6491=&nctemp6492;
nctempchar1* nctemp6489= nctemp6491;
int nctemp6493=CodeEs(nctemp6487,nctemp6489);
struct tree* nctemp6495= p;
struct symbol* nctemp6499= tp;
nctempchar1* nctemp6501=SymGetname(nctemp6499);
nctempchar1* nctemp6497= nctemp6501;
int nctemp6502=CodeEs(nctemp6495,nctemp6497);
struct tree* nctemp6504= p;
struct nctempchar1 *nctemp6508;
static struct nctempchar1 nctemp6509 = {{ 2}, (char*)"(\0"};
nctemp6508=&nctemp6509;
nctempchar1* nctemp6506= nctemp6508;
int nctemp6510=CodeEs(nctemp6504,nctemp6506);
struct tree* nctemp6515= p;
struct tree* nctemp6517=PtreeMvchild(nctemp6515);
sp =nctemp6517;
int nctemp6518 = (sp !=0);
if(nctemp6518)
{
struct tree* nctemp6526= sp;
struct tree* nctemp6528=PtreeMvchild(nctemp6526);
sp =nctemp6528;
}
int nctemp6529 = (sp !=0);
int nctemp6533=nctemp6529;
while(nctemp6533)
{{
struct tree* nctemp6535= p;
struct tree* nctemp6539= sp;
nctempchar1* nctemp6541=PtreeGetempr(nctemp6539);
nctempchar1* nctemp6537= nctemp6541;
int nctemp6542=CodeEs(nctemp6535,nctemp6537);
struct tree* nctemp6550= sp;
struct tree* nctemp6552=PtreeMvsister(nctemp6550);
sp =nctemp6552;
int nctemp6543 = (sp !=0);
if(nctemp6543)
{
struct tree* nctemp6555= p;
struct nctempchar1 *nctemp6559;
static struct nctempchar1 nctemp6560 = {{ 2}, (char*)",\0"};
nctemp6559=&nctemp6560;
nctempchar1* nctemp6557= nctemp6559;
int nctemp6561=CodeEs(nctemp6555,nctemp6557);
}
noargs = (noargs + 1);
}
int nctemp6562 = (sp !=0);
nctemp6533=nctemp6562;}struct tree* nctemp6567= p;
struct nctempchar1 *nctemp6571;
static struct nctempchar1 nctemp6572 = {{ 5}, (char*)");\n\0"};
nctemp6571=&nctemp6572;
nctempchar1* nctemp6569= nctemp6571;
int nctemp6573=CodeEs(nctemp6567,nctemp6569);
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
nctempchar1* nctemp6581=CodeMktemp();
pointer=nctemp6581;
nctempchar1* nctemp6587=CodeMktemp();
descr=nctemp6587;
struct tree* nctemp6593= p;
nctempchar1* nctemp6595=PtreeGetype(nctemp6593);
type=nctemp6595;
struct tree* nctemp6601= p;
nctempchar1* nctemp6603=PtreeGetname(nctemp6601);
nctempchar1* nctemp6599= nctemp6603;
struct nctempchar1 *nctemp6606;
static struct nctempchar1 nctemp6607 = {{ 5}, (char*)"cast\0"};
nctemp6606=&nctemp6607;
nctempchar1* nctemp6604= nctemp6606;
int nctemp6608=LibeStrcmp(nctemp6599,nctemp6604);
int nctemp6596 = (nctemp6608 ==1);
if(nctemp6596)
{
struct tree* nctemp6614= p;
struct tree* nctemp6616=PtreeMvchild(nctemp6614);
np =nctemp6616;
struct tree* nctemp6621= np;
struct tree* nctemp6623=PtreeMvsister(nctemp6621);
sp =nctemp6623;
struct tree* nctemp6629= sp;
nctempchar1* nctemp6631=CodeExpr(nctemp6629);
expr=nctemp6631;
struct tree* nctemp6637= np;
nctempchar1* nctemp6639=PtreeGetref(nctemp6637);
nctempchar1* nctemp6635= nctemp6639;
struct nctempchar1 *nctemp6642;
static struct nctempchar1 nctemp6643 = {{ 5}, (char*)"sref\0"};
nctemp6642=&nctemp6643;
nctempchar1* nctemp6640= nctemp6642;
int nctemp6644=LibeStrcmp(nctemp6635,nctemp6640);
int nctemp6632 = (nctemp6644 ==1);
if(nctemp6632)
{
nctempchar1* nctemp6651=CodeMktemp();
tmp=nctemp6651;
struct tree* nctemp6653= p;
nctempchar1* nctemp6655= type;
int nctemp6658=CodeEs(nctemp6653,nctemp6655);
struct tree* nctemp6660= p;
struct nctempchar1 *nctemp6664;
static struct nctempchar1 nctemp6665 = {{ 2}, (char*)" \0"};
nctemp6664=&nctemp6665;
nctempchar1* nctemp6662= nctemp6664;
int nctemp6666=CodeEs(nctemp6660,nctemp6662);
struct tree* nctemp6668= p;
nctempchar1* nctemp6670= tmp;
int nctemp6673=CodeEs(nctemp6668,nctemp6670);
struct tree* nctemp6675= p;
struct nctempchar1 *nctemp6679;
static struct nctempchar1 nctemp6680 = {{ 2}, (char*)"=\0"};
nctemp6679=&nctemp6680;
nctempchar1* nctemp6677= nctemp6679;
int nctemp6681=CodeEs(nctemp6675,nctemp6677);
struct tree* nctemp6683= p;
struct nctempchar1 *nctemp6687;
static struct nctempchar1 nctemp6688 = {{ 9}, (char*)"(struct \0"};
nctemp6687=&nctemp6688;
nctempchar1* nctemp6685= nctemp6687;
int nctemp6689=CodeEs(nctemp6683,nctemp6685);
struct tree* nctemp6691= p;
struct tree* nctemp6695= np;
nctempchar1* nctemp6697=PtreeGetype(nctemp6695);
nctempchar1* nctemp6693= nctemp6697;
int nctemp6698=CodeEs(nctemp6691,nctemp6693);
struct tree* nctemp6700= p;
struct nctempchar1 *nctemp6704;
static struct nctempchar1 nctemp6705 = {{ 4}, (char*)"*)(\0"};
nctemp6704=&nctemp6705;
nctempchar1* nctemp6702= nctemp6704;
int nctemp6706=CodeEs(nctemp6700,nctemp6702);
struct tree* nctemp6708= p;
nctempchar1* nctemp6710= expr;
int nctemp6713=CodeEs(nctemp6708,nctemp6710);
struct tree* nctemp6715= p;
struct nctempchar1 *nctemp6719;
static struct nctempchar1 nctemp6720 = {{ 5}, (char*)");\n\0"};
nctemp6719=&nctemp6720;
nctempchar1* nctemp6717= nctemp6719;
int nctemp6721=CodeEs(nctemp6715,nctemp6717);
}
else{
struct tree* nctemp6727= np;
nctempchar1* nctemp6729=PtreeGetref(nctemp6727);
nctempchar1* nctemp6725= nctemp6729;
struct nctempchar1 *nctemp6732;
static struct nctempchar1 nctemp6733 = {{ 5}, (char*)"aref\0"};
nctemp6732=&nctemp6733;
nctempchar1* nctemp6730= nctemp6732;
int nctemp6734=LibeStrcmp(nctemp6725,nctemp6730);
int nctemp6722 = (nctemp6734 ==1);
if(nctemp6722)
{
struct tree* nctemp6740= np;
struct tree* nctemp6742=PtreeMvchild(nctemp6740);
np =nctemp6742;
struct tree* nctemp6747= np;
struct tree* nctemp6749=PtreeMvchild(nctemp6747);
np =nctemp6749;
struct tree* nctemp6754= np;
struct tree* nctemp6756=PtreeMvchild(nctemp6754);
np =nctemp6756;
struct tree* nctemp6761= np;
struct tree* nctemp6763=PtreeMvchild(nctemp6761);
np =nctemp6763;
tp = np;
rank = 1;
struct tree* nctemp6771= np;
struct tree* nctemp6773=PtreeMvsister(nctemp6771);
np =nctemp6773;
int nctemp6764 = (np !=0);
int nctemp6775=nctemp6764;
while(nctemp6775)
{{
rank = (rank + 1);
}
struct tree* nctemp6783= np;
struct tree* nctemp6785=PtreeMvsister(nctemp6783);
np =nctemp6785;
int nctemp6776 = (np !=0);
nctemp6775=nctemp6776;}int nctemp6787 = (rank > 4);
if(nctemp6787)
{
struct nctempchar1 *nctemp6794;
static struct nctempchar1 nctemp6795 = {{ 29}, (char*)"Array dimension is too large\0"};
nctemp6794=&nctemp6795;
nctempchar1* nctemp6792= nctemp6794;
int nctemp6796=CodeError(nctemp6792);
}
p = tp;
struct tree* nctemp6798= p;
struct nctempchar1 *nctemp6802;
static struct nctempchar1 nctemp6803 = {{ 7}, (char*)"nctemp\0"};
nctemp6802=&nctemp6803;
nctempchar1* nctemp6800= nctemp6802;
int nctemp6804=CodeEs(nctemp6798,nctemp6800);
struct tree* nctemp6806= p;
nctempchar1* nctemp6808= type;
int nctemp6811=CodeEs(nctemp6806,nctemp6808);
int nctemp6813= rank;
int nctemp6815=CodeEd(nctemp6813);
struct tree* nctemp6817= p;
struct nctempchar1 *nctemp6821;
static struct nctempchar1 nctemp6822 = {{ 2}, (char*)" \0"};
nctemp6821=&nctemp6822;
nctempchar1* nctemp6819= nctemp6821;
int nctemp6823=CodeEs(nctemp6817,nctemp6819);
struct tree* nctemp6825= sp;
nctempchar1* nctemp6827= descr;
int nctemp6830=CodeEs(nctemp6825,nctemp6827);
struct tree* nctemp6832= sp;
struct nctempchar1 *nctemp6836;
static struct nctempchar1 nctemp6837 = {{ 4}, (char*)";\n\0"};
nctemp6836=&nctemp6837;
nctempchar1* nctemp6834= nctemp6836;
int nctemp6838=CodeEs(nctemp6832,nctemp6834);
struct tree* nctemp6840= p;
struct nctempchar1 *nctemp6844;
static struct nctempchar1 nctemp6845 = {{ 7}, (char*)"nctemp\0"};
nctemp6844=&nctemp6845;
nctempchar1* nctemp6842= nctemp6844;
int nctemp6846=CodeEs(nctemp6840,nctemp6842);
struct tree* nctemp6848= p;
nctempchar1* nctemp6850= type;
int nctemp6853=CodeEs(nctemp6848,nctemp6850);
int nctemp6855= rank;
int nctemp6857=CodeEd(nctemp6855);
struct tree* nctemp6859= p;
struct nctempchar1 *nctemp6863;
static struct nctempchar1 nctemp6864 = {{ 3}, (char*)" *\0"};
nctemp6863=&nctemp6864;
nctempchar1* nctemp6861= nctemp6863;
int nctemp6865=CodeEs(nctemp6859,nctemp6861);
struct tree* nctemp6867= sp;
nctempchar1* nctemp6869= pointer;
int nctemp6872=CodeEs(nctemp6867,nctemp6869);
struct tree* nctemp6874= p;
struct nctempchar1 *nctemp6878;
static struct nctempchar1 nctemp6879 = {{ 4}, (char*)";\n\0"};
nctemp6878=&nctemp6879;
nctempchar1* nctemp6876= nctemp6878;
int nctemp6880=CodeEs(nctemp6874,nctemp6876);
struct tree* nctemp6882= sp;
nctempchar1* nctemp6884= descr;
int nctemp6887=CodeEs(nctemp6882,nctemp6884);
struct tree* nctemp6889= sp;
struct nctempchar1 *nctemp6893;
static struct nctempchar1 nctemp6894 = {{ 2}, (char*)"=\0"};
nctemp6893=&nctemp6894;
nctempchar1* nctemp6891= nctemp6893;
int nctemp6895=CodeEs(nctemp6889,nctemp6891);
struct tree* nctemp6897= sp;
struct nctempchar1 *nctemp6901;
static struct nctempchar1 nctemp6902 = {{ 3}, (char*)"*(\0"};
nctemp6901=&nctemp6902;
nctempchar1* nctemp6899= nctemp6901;
int nctemp6903=CodeEs(nctemp6897,nctemp6899);
struct tree* nctemp6905= p;
struct nctempchar1 *nctemp6909;
static struct nctempchar1 nctemp6910 = {{ 7}, (char*)"nctemp\0"};
nctemp6909=&nctemp6910;
nctempchar1* nctemp6907= nctemp6909;
int nctemp6911=CodeEs(nctemp6905,nctemp6907);
struct tree* nctemp6913= sp;
nctempchar1* nctemp6915= type;
int nctemp6918=CodeEs(nctemp6913,nctemp6915);
int nctemp6920= rank;
int nctemp6922=CodeEd(nctemp6920);
struct tree* nctemp6924= sp;
struct nctempchar1 *nctemp6928;
static struct nctempchar1 nctemp6929 = {{ 4}, (char*)"*)(\0"};
nctemp6928=&nctemp6929;
nctempchar1* nctemp6926= nctemp6928;
int nctemp6930=CodeEs(nctemp6924,nctemp6926);
struct tree* nctemp6932= sp;
nctempchar1* nctemp6934= expr;
int nctemp6937=CodeEs(nctemp6932,nctemp6934);
struct tree* nctemp6939= sp;
struct nctempchar1 *nctemp6943;
static struct nctempchar1 nctemp6944 = {{ 5}, (char*)");\n\0"};
nctemp6943=&nctemp6944;
nctempchar1* nctemp6941= nctemp6943;
int nctemp6945=CodeEs(nctemp6939,nctemp6941);
p = tp;
i = 0;
int nctemp6946 = (p !=0);
int nctemp6950=nctemp6946;
while(nctemp6950)
{{
struct tree* nctemp6956= p;
nctempchar1* nctemp6958=CodeExpr(nctemp6956);
dim=nctemp6958;
struct tree* nctemp6960= sp;
nctempchar1* nctemp6962= descr;
int nctemp6965=CodeEs(nctemp6960,nctemp6962);
struct tree* nctemp6967= sp;
struct nctempchar1 *nctemp6971;
static struct nctempchar1 nctemp6972 = {{ 3}, (char*)".d\0"};
nctemp6971=&nctemp6972;
nctempchar1* nctemp6969= nctemp6971;
int nctemp6973=CodeEs(nctemp6967,nctemp6969);
struct tree* nctemp6975= sp;
struct nctempchar1 *nctemp6979;
static struct nctempchar1 nctemp6980 = {{ 2}, (char*)"[\0"};
nctemp6979=&nctemp6980;
nctempchar1* nctemp6977= nctemp6979;
int nctemp6981=CodeEs(nctemp6975,nctemp6977);
int nctemp6983= i;
int nctemp6985=CodeEd(nctemp6983);
struct tree* nctemp6987= sp;
struct nctempchar1 *nctemp6991;
static struct nctempchar1 nctemp6992 = {{ 3}, (char*)"]=\0"};
nctemp6991=&nctemp6992;
nctempchar1* nctemp6989= nctemp6991;
int nctemp6993=CodeEs(nctemp6987,nctemp6989);
struct tree* nctemp6995= sp;
nctempchar1* nctemp6997= dim;
int nctemp7000=CodeEs(nctemp6995,nctemp6997);
struct tree* nctemp7002= sp;
struct nctempchar1 *nctemp7006;
static struct nctempchar1 nctemp7007 = {{ 4}, (char*)";\n\0"};
nctemp7006=&nctemp7007;
nctempchar1* nctemp7004= nctemp7006;
int nctemp7008=CodeEs(nctemp7002,nctemp7004);
i = (i + 1);
struct tree* nctemp7013= p;
struct tree* nctemp7015=PtreeMvsister(nctemp7013);
p =nctemp7015;
}
int nctemp7016 = (p !=0);
nctemp6950=nctemp7016;}struct tree* nctemp7021= sp;
nctempchar1* nctemp7023= pointer;
int nctemp7026=CodeEs(nctemp7021,nctemp7023);
struct tree* nctemp7028= sp;
struct nctempchar1 *nctemp7032;
static struct nctempchar1 nctemp7033 = {{ 3}, (char*)"=&\0"};
nctemp7032=&nctemp7033;
nctempchar1* nctemp7030= nctemp7032;
int nctemp7034=CodeEs(nctemp7028,nctemp7030);
struct tree* nctemp7036= sp;
nctempchar1* nctemp7038= descr;
int nctemp7041=CodeEs(nctemp7036,nctemp7038);
struct tree* nctemp7043= sp;
struct nctempchar1 *nctemp7047;
static struct nctempchar1 nctemp7048 = {{ 4}, (char*)";\n\0"};
nctemp7047=&nctemp7048;
nctempchar1* nctemp7045= nctemp7047;
int nctemp7049=CodeEs(nctemp7043,nctemp7045);
}
else{
struct tree* nctemp7051= p;
nctempchar1* nctemp7053= type;
int nctemp7056=CodeEs(nctemp7051,nctemp7053);
struct tree* nctemp7058= p;
struct nctempchar1 *nctemp7062;
static struct nctempchar1 nctemp7063 = {{ 2}, (char*)" \0"};
nctemp7062=&nctemp7063;
nctempchar1* nctemp7060= nctemp7062;
int nctemp7064=CodeEs(nctemp7058,nctemp7060);
struct tree* nctemp7066= p;
nctempchar1* nctemp7068= pointer;
int nctemp7071=CodeEs(nctemp7066,nctemp7068);
struct tree* nctemp7073= p;
struct nctempchar1 *nctemp7077;
static struct nctempchar1 nctemp7078 = {{ 2}, (char*)"=\0"};
nctemp7077=&nctemp7078;
nctempchar1* nctemp7075= nctemp7077;
int nctemp7079=CodeEs(nctemp7073,nctemp7075);
struct tree* nctemp7081= p;
struct nctempchar1 *nctemp7085;
static struct nctempchar1 nctemp7086 = {{ 2}, (char*)"(\0"};
nctemp7085=&nctemp7086;
nctempchar1* nctemp7083= nctemp7085;
int nctemp7087=CodeEs(nctemp7081,nctemp7083);
struct tree* nctemp7089= p;
struct tree* nctemp7093= np;
nctempchar1* nctemp7095=PtreeGetype(nctemp7093);
nctempchar1* nctemp7091= nctemp7095;
int nctemp7096=CodeEs(nctemp7089,nctemp7091);
struct tree* nctemp7098= p;
struct nctempchar1 *nctemp7102;
static struct nctempchar1 nctemp7103 = {{ 3}, (char*)")(\0"};
nctemp7102=&nctemp7103;
nctempchar1* nctemp7100= nctemp7102;
int nctemp7104=CodeEs(nctemp7098,nctemp7100);
struct tree* nctemp7106= p;
nctempchar1* nctemp7108= expr;
int nctemp7111=CodeEs(nctemp7106,nctemp7108);
struct tree* nctemp7113= p;
struct nctempchar1 *nctemp7117;
static struct nctempchar1 nctemp7118 = {{ 5}, (char*)");\n\0"};
nctemp7117=&nctemp7118;
nctempchar1* nctemp7115= nctemp7117;
int nctemp7119=CodeEs(nctemp7113,nctemp7115);
}
}
}
return pointer;
}
nctempchar1 * CodePrimexpr (struct tree* p)
{
struct tree* nctemp7127= p;
nctempchar1* nctemp7129=PtreeGetname(nctemp7127);
nctempchar1* nctemp7125= nctemp7129;
struct nctempchar1 *nctemp7132;
static struct nctempchar1 nctemp7133 = {{ 11}, (char*)"identifier\0"};
nctemp7132=&nctemp7133;
nctempchar1* nctemp7130= nctemp7132;
int nctemp7134=LibeStrcmp(nctemp7125,nctemp7130);
int nctemp7122 = (nctemp7134 ==1);
if(nctemp7122)
{
struct tree* nctemp7137= p;
nctempchar1* nctemp7139=CodeIdent(nctemp7137);
return nctemp7139;
}
else{
struct tree* nctemp7145= p;
nctempchar1* nctemp7147=PtreeGetname(nctemp7145);
nctempchar1* nctemp7143= nctemp7147;
struct nctempchar1 *nctemp7150;
static struct nctempchar1 nctemp7151 = {{ 4}, (char*)"new\0"};
nctemp7150=&nctemp7151;
nctempchar1* nctemp7148= nctemp7150;
int nctemp7152=LibeStrcmp(nctemp7143,nctemp7148);
int nctemp7140 = (nctemp7152 ==1);
if(nctemp7140)
{
struct tree* nctemp7155= p;
nctempchar1* nctemp7157=CodeNew(nctemp7155);
return nctemp7157;
}
else{
struct tree* nctemp7163= p;
nctempchar1* nctemp7165=PtreeGetname(nctemp7163);
nctempchar1* nctemp7161= nctemp7165;
struct nctempchar1 *nctemp7168;
static struct nctempchar1 nctemp7169 = {{ 7}, (char*)"delete\0"};
nctemp7168=&nctemp7169;
nctempchar1* nctemp7166= nctemp7168;
int nctemp7170=LibeStrcmp(nctemp7161,nctemp7166);
int nctemp7158 = (nctemp7170 ==1);
if(nctemp7158)
{
struct tree* nctemp7173= p;
nctempchar1* nctemp7175=CodeDelete(nctemp7173);
return nctemp7175;
}
else{
struct tree* nctemp7181= p;
nctempchar1* nctemp7183=PtreeGetname(nctemp7181);
nctempchar1* nctemp7179= nctemp7183;
struct nctempchar1 *nctemp7186;
static struct nctempchar1 nctemp7187 = {{ 4}, (char*)"len\0"};
nctemp7186=&nctemp7187;
nctempchar1* nctemp7184= nctemp7186;
int nctemp7188=LibeStrcmp(nctemp7179,nctemp7184);
int nctemp7176 = (nctemp7188 ==1);
if(nctemp7176)
{
struct tree* nctemp7191= p;
nctempchar1* nctemp7193=CodeLen(nctemp7191);
return nctemp7193;
}
else{
struct tree* nctemp7199= p;
nctempchar1* nctemp7201=PtreeGetname(nctemp7199);
nctempchar1* nctemp7197= nctemp7201;
struct nctempchar1 *nctemp7204;
static struct nctempchar1 nctemp7205 = {{ 6}, (char*)"cmplx\0"};
nctemp7204=&nctemp7205;
nctempchar1* nctemp7202= nctemp7204;
int nctemp7206=LibeStrcmp(nctemp7197,nctemp7202);
int nctemp7194 = (nctemp7206 ==1);
if(nctemp7194)
{
struct tree* nctemp7209= p;
nctempchar1* nctemp7211=CodeCmplx(nctemp7209);
return nctemp7211;
}
else{
struct tree* nctemp7217= p;
nctempchar1* nctemp7219=PtreeGetname(nctemp7217);
nctempchar1* nctemp7215= nctemp7219;
struct nctempchar1 *nctemp7222;
static struct nctempchar1 nctemp7223 = {{ 3}, (char*)"im\0"};
nctemp7222=&nctemp7223;
nctempchar1* nctemp7220= nctemp7222;
int nctemp7224=LibeStrcmp(nctemp7215,nctemp7220);
int nctemp7212 = (nctemp7224 ==1);
if(nctemp7212)
{
struct tree* nctemp7227= p;
nctempchar1* nctemp7229=CodeIm(nctemp7227);
return nctemp7229;
}
else{
struct tree* nctemp7235= p;
nctempchar1* nctemp7237=PtreeGetname(nctemp7235);
nctempchar1* nctemp7233= nctemp7237;
struct nctempchar1 *nctemp7240;
static struct nctempchar1 nctemp7241 = {{ 3}, (char*)"re\0"};
nctemp7240=&nctemp7241;
nctempchar1* nctemp7238= nctemp7240;
int nctemp7242=LibeStrcmp(nctemp7233,nctemp7238);
int nctemp7230 = (nctemp7242 ==1);
if(nctemp7230)
{
struct tree* nctemp7245= p;
nctempchar1* nctemp7247=CodeRe(nctemp7245);
return nctemp7247;
}
else{
struct tree* nctemp7253= p;
nctempchar1* nctemp7255=PtreeGetname(nctemp7253);
nctempchar1* nctemp7251= nctemp7255;
struct nctempchar1 *nctemp7258;
static struct nctempchar1 nctemp7259 = {{ 6}, (char*)"fcall\0"};
nctemp7258=&nctemp7259;
nctempchar1* nctemp7256= nctemp7258;
int nctemp7260=LibeStrcmp(nctemp7251,nctemp7256);
int nctemp7248 = (nctemp7260 ==1);
if(nctemp7248)
{
struct tree* nctemp7263= p;
nctempchar1* nctemp7265=CodeFcall(nctemp7263);
return nctemp7265;
}
else{
struct tree* nctemp7271= p;
nctempchar1* nctemp7273=PtreeGetname(nctemp7271);
nctempchar1* nctemp7269= nctemp7273;
struct nctempchar1 *nctemp7276;
static struct nctempchar1 nctemp7277 = {{ 5}, (char*)"cast\0"};
nctemp7276=&nctemp7277;
nctempchar1* nctemp7274= nctemp7276;
int nctemp7278=LibeStrcmp(nctemp7269,nctemp7274);
int nctemp7266 = (nctemp7278 ==1);
if(nctemp7266)
{
struct tree* nctemp7281= p;
nctempchar1* nctemp7283=CodeCast(nctemp7281);
return nctemp7283;
}
else{
struct tree* nctemp7289= p;
nctempchar1* nctemp7291=PtreeGetname(nctemp7289);
nctempchar1* nctemp7287= nctemp7291;
struct nctempchar1 *nctemp7294;
static struct nctempchar1 nctemp7295 = {{ 10}, (char*)"iconstant\0"};
nctemp7294=&nctemp7295;
nctempchar1* nctemp7292= nctemp7294;
int nctemp7296=LibeStrcmp(nctemp7287,nctemp7292);
int nctemp7284 = (nctemp7296 ==1);
if(nctemp7284)
{
struct tree* nctemp7299= p;
nctempchar1* nctemp7301=PtreeGetdef(nctemp7299);
return nctemp7301;
}
else{
struct tree* nctemp7307= p;
nctempchar1* nctemp7309=PtreeGetname(nctemp7307);
nctempchar1* nctemp7305= nctemp7309;
struct nctempchar1 *nctemp7312;
static struct nctempchar1 nctemp7313 = {{ 10}, (char*)"rconstant\0"};
nctemp7312=&nctemp7313;
nctempchar1* nctemp7310= nctemp7312;
int nctemp7314=LibeStrcmp(nctemp7305,nctemp7310);
int nctemp7302 = (nctemp7314 ==1);
if(nctemp7302)
{
struct tree* nctemp7317= p;
nctempchar1* nctemp7319=PtreeGetdef(nctemp7317);
return nctemp7319;
}
else{
struct tree* nctemp7325= p;
nctempchar1* nctemp7327=PtreeGetname(nctemp7325);
nctempchar1* nctemp7323= nctemp7327;
struct nctempchar1 *nctemp7330;
static struct nctempchar1 nctemp7331 = {{ 10}, (char*)"sconstant\0"};
nctemp7330=&nctemp7331;
nctempchar1* nctemp7328= nctemp7330;
int nctemp7332=LibeStrcmp(nctemp7323,nctemp7328);
int nctemp7320 = (nctemp7332 ==1);
if(nctemp7320)
{
struct tree* nctemp7335= p;
nctempchar1* nctemp7337=CodeSconstant(nctemp7335);
return nctemp7337;
}
else{
struct tree* nctemp7339= p;
nctempchar1* nctemp7341=CodeBinexpr(nctemp7339);
return nctemp7341;
}
}
}
}
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
nctempchar1* nctemp7347=CodeMktemp();
tempr=nctemp7347;
struct tree* nctemp7353= p;
nctempchar1* nctemp7355=PtreeGetname(nctemp7353);
nctempchar1* nctemp7351= nctemp7355;
struct nctempchar1 *nctemp7358;
static struct nctempchar1 nctemp7359 = {{ 7}, (char*)"unexpr\0"};
nctemp7358=&nctemp7359;
nctempchar1* nctemp7356= nctemp7358;
int nctemp7360=LibeStrcmp(nctemp7351,nctemp7356);
int nctemp7348 = (nctemp7360 ==1);
if(nctemp7348)
{
struct tree* nctemp7367= p;
nctempchar1* nctemp7369=PtreeGetype(nctemp7367);
nctempchar1* nctemp7365= nctemp7369;
struct nctempchar1 *nctemp7372;
static struct nctempchar1 nctemp7373 = {{ 8}, (char*)"complex\0"};
nctemp7372=&nctemp7373;
nctempchar1* nctemp7370= nctemp7372;
int nctemp7374=LibeStrcmp(nctemp7365,nctemp7370);
int nctemp7362 = (nctemp7374 ==1);
if(nctemp7362)
{
struct tree* nctemp7383= p;
struct tree* nctemp7385=PtreeMvchild(nctemp7383);
struct tree* nctemp7381= nctemp7385;
nctempchar1* nctemp7386=CodePrimexpr(nctemp7381);
tmp=nctemp7386;
struct tree* nctemp7388= p;
struct nctempchar1 *nctemp7392;
static struct nctempchar1 nctemp7393 = {{ 4}, (char*)";\n\0"};
nctemp7392=&nctemp7393;
nctempchar1* nctemp7390= nctemp7392;
int nctemp7394=CodeEs(nctemp7388,nctemp7390);
struct tree* nctemp7396= p;
nctempchar1* nctemp7398= tempr;
int nctemp7401=CodeEs(nctemp7396,nctemp7398);
struct tree* nctemp7403= p;
struct nctempchar1 *nctemp7407;
static struct nctempchar1 nctemp7408 = {{ 3}, (char*)".r\0"};
nctemp7407=&nctemp7408;
nctempchar1* nctemp7405= nctemp7407;
int nctemp7409=CodeEs(nctemp7403,nctemp7405);
struct tree* nctemp7411= p;
struct nctempchar1 *nctemp7415;
static struct nctempchar1 nctemp7416 = {{ 4}, (char*)"= -\0"};
nctemp7415=&nctemp7416;
nctempchar1* nctemp7413= nctemp7415;
int nctemp7417=CodeEs(nctemp7411,nctemp7413);
struct tree* nctemp7419= p;
nctempchar1* nctemp7421= tmp;
int nctemp7424=CodeEs(nctemp7419,nctemp7421);
struct tree* nctemp7426= p;
struct nctempchar1 *nctemp7430;
static struct nctempchar1 nctemp7431 = {{ 3}, (char*)".r\0"};
nctemp7430=&nctemp7431;
nctempchar1* nctemp7428= nctemp7430;
int nctemp7432=CodeEs(nctemp7426,nctemp7428);
struct tree* nctemp7434= p;
struct nctempchar1 *nctemp7438;
static struct nctempchar1 nctemp7439 = {{ 4}, (char*)";\n\0"};
nctemp7438=&nctemp7439;
nctempchar1* nctemp7436= nctemp7438;
int nctemp7440=CodeEs(nctemp7434,nctemp7436);
struct tree* nctemp7442= p;
nctempchar1* nctemp7444= tempr;
int nctemp7447=CodeEs(nctemp7442,nctemp7444);
struct tree* nctemp7449= p;
struct nctempchar1 *nctemp7453;
static struct nctempchar1 nctemp7454 = {{ 3}, (char*)".i\0"};
nctemp7453=&nctemp7454;
nctempchar1* nctemp7451= nctemp7453;
int nctemp7455=CodeEs(nctemp7449,nctemp7451);
struct tree* nctemp7457= p;
struct nctempchar1 *nctemp7461;
static struct nctempchar1 nctemp7462 = {{ 4}, (char*)"= -\0"};
nctemp7461=&nctemp7462;
nctempchar1* nctemp7459= nctemp7461;
int nctemp7463=CodeEs(nctemp7457,nctemp7459);
struct tree* nctemp7465= p;
nctempchar1* nctemp7467= tmp;
int nctemp7470=CodeEs(nctemp7465,nctemp7467);
struct tree* nctemp7472= p;
struct nctempchar1 *nctemp7476;
static struct nctempchar1 nctemp7477 = {{ 3}, (char*)".i\0"};
nctemp7476=&nctemp7477;
nctempchar1* nctemp7474= nctemp7476;
int nctemp7478=CodeEs(nctemp7472,nctemp7474);
struct tree* nctemp7480= p;
struct nctempchar1 *nctemp7484;
static struct nctempchar1 nctemp7485 = {{ 4}, (char*)";\n\0"};
nctemp7484=&nctemp7485;
nctempchar1* nctemp7482= nctemp7484;
int nctemp7486=CodeEs(nctemp7480,nctemp7482);
return tempr;
}
else{
struct tree* nctemp7496= p;
struct tree* nctemp7498=PtreeMvchild(nctemp7496);
struct tree* nctemp7494= nctemp7498;
nctempchar1* nctemp7499=CodePrimexpr(nctemp7494);
tmp=nctemp7499;
struct tree* nctemp7501= p;
struct tree* nctemp7505= p;
nctempchar1* nctemp7507=PtreeGetype(nctemp7505);
nctempchar1* nctemp7503= nctemp7507;
int nctemp7508=CodeEs(nctemp7501,nctemp7503);
struct tree* nctemp7510= p;
struct nctempchar1 *nctemp7514;
static struct nctempchar1 nctemp7515 = {{ 2}, (char*)" \0"};
nctemp7514=&nctemp7515;
nctempchar1* nctemp7512= nctemp7514;
int nctemp7516=CodeEs(nctemp7510,nctemp7512);
struct tree* nctemp7518= p;
nctempchar1* nctemp7520= tempr;
int nctemp7523=CodeEs(nctemp7518,nctemp7520);
struct tree* nctemp7525= p;
struct nctempchar1 *nctemp7529;
static struct nctempchar1 nctemp7530 = {{ 4}, (char*)"= -\0"};
nctemp7529=&nctemp7530;
nctempchar1* nctemp7527= nctemp7529;
int nctemp7531=CodeEs(nctemp7525,nctemp7527);
struct tree* nctemp7533= p;
nctempchar1* nctemp7535= tmp;
int nctemp7538=CodeEs(nctemp7533,nctemp7535);
struct tree* nctemp7540= p;
struct nctempchar1 *nctemp7544;
static struct nctempchar1 nctemp7545 = {{ 4}, (char*)";\n\0"};
nctemp7544=&nctemp7545;
nctempchar1* nctemp7542= nctemp7544;
int nctemp7546=CodeEs(nctemp7540,nctemp7542);
return tempr;
}
}
else{
struct tree* nctemp7550= p;
nctempchar1* nctemp7552=CodePrimexpr(nctemp7550);
return nctemp7552;
}
}
nctempchar1 * CodeAddexpr (struct tree* p,nctempchar1 *lval,nctempchar1 *rval)
{
nctempchar1 *type;
nctempchar1 *tempr;
nctempchar1 *opr;
struct tree* nctemp7558= p;
nctempchar1* nctemp7560=PtreeGetype(nctemp7558);
type=nctemp7560;
nctempchar1* nctemp7566=CodeMktemp();
tempr=nctemp7566;
struct tree* nctemp7572= p;
nctempchar1* nctemp7574=PtreeGetdef(nctemp7572);
opr=nctemp7574;
nctempchar1* nctemp7578= type;
struct nctempchar1 *nctemp7583;
static struct nctempchar1 nctemp7584 = {{ 8}, (char*)"complex\0"};
nctemp7583=&nctemp7584;
nctempchar1* nctemp7581= nctemp7583;
int nctemp7585=LibeStrcmp(nctemp7578,nctemp7581);
int nctemp7575 = (nctemp7585 ==1);
if(nctemp7575)
{
nctempchar1* nctemp7593= opr;
struct nctempchar1 *nctemp7598;
static struct nctempchar1 nctemp7599 = {{ 2}, (char*)"+\0"};
nctemp7598=&nctemp7599;
nctempchar1* nctemp7596= nctemp7598;
int nctemp7600=LibeStrcmp(nctemp7593,nctemp7596);
int nctemp7590 = (nctemp7600 ==1);
nctempchar1* nctemp7606= opr;
struct nctempchar1 *nctemp7611;
static struct nctempchar1 nctemp7612 = {{ 2}, (char*)"-\0"};
nctemp7611=&nctemp7612;
nctempchar1* nctemp7609= nctemp7611;
int nctemp7613=LibeStrcmp(nctemp7606,nctemp7609);
int nctemp7603 = (nctemp7613 ==1);
int nctemp7587 = (nctemp7590 || nctemp7603);
if(nctemp7587)
{
struct tree* nctemp7616= p;
nctempchar1* nctemp7618= type;
int nctemp7621=CodeEs(nctemp7616,nctemp7618);
struct tree* nctemp7623= p;
struct nctempchar1 *nctemp7627;
static struct nctempchar1 nctemp7628 = {{ 2}, (char*)" \0"};
nctemp7627=&nctemp7628;
nctempchar1* nctemp7625= nctemp7627;
int nctemp7629=CodeEs(nctemp7623,nctemp7625);
struct tree* nctemp7631= p;
nctempchar1* nctemp7633= tempr;
int nctemp7636=CodeEs(nctemp7631,nctemp7633);
struct tree* nctemp7638= p;
struct nctempchar1 *nctemp7642;
static struct nctempchar1 nctemp7643 = {{ 3}, (char*)".r\0"};
nctemp7642=&nctemp7643;
nctempchar1* nctemp7640= nctemp7642;
int nctemp7644=CodeEs(nctemp7638,nctemp7640);
struct tree* nctemp7646= p;
struct nctempchar1 *nctemp7650;
static struct nctempchar1 nctemp7651 = {{ 4}, (char*)" = \0"};
nctemp7650=&nctemp7651;
nctempchar1* nctemp7648= nctemp7650;
int nctemp7652=CodeEs(nctemp7646,nctemp7648);
struct tree* nctemp7654= p;
nctempchar1* nctemp7656= lval;
int nctemp7659=CodeEs(nctemp7654,nctemp7656);
struct tree* nctemp7661= p;
struct nctempchar1 *nctemp7665;
static struct nctempchar1 nctemp7666 = {{ 3}, (char*)".r\0"};
nctemp7665=&nctemp7666;
nctempchar1* nctemp7663= nctemp7665;
int nctemp7667=CodeEs(nctemp7661,nctemp7663);
struct tree* nctemp7669= p;
struct nctempchar1 *nctemp7673;
static struct nctempchar1 nctemp7674 = {{ 2}, (char*)" \0"};
nctemp7673=&nctemp7674;
nctempchar1* nctemp7671= nctemp7673;
int nctemp7675=CodeEs(nctemp7669,nctemp7671);
struct tree* nctemp7677= p;
struct tree* nctemp7681= p;
nctempchar1* nctemp7683=PtreeGetdef(nctemp7681);
nctempchar1* nctemp7679= nctemp7683;
int nctemp7684=CodeEs(nctemp7677,nctemp7679);
struct tree* nctemp7686= p;
struct nctempchar1 *nctemp7690;
static struct nctempchar1 nctemp7691 = {{ 2}, (char*)" \0"};
nctemp7690=&nctemp7691;
nctempchar1* nctemp7688= nctemp7690;
int nctemp7692=CodeEs(nctemp7686,nctemp7688);
struct tree* nctemp7694= p;
nctempchar1* nctemp7696= rval;
int nctemp7699=CodeEs(nctemp7694,nctemp7696);
struct tree* nctemp7701= p;
struct nctempchar1 *nctemp7705;
static struct nctempchar1 nctemp7706 = {{ 3}, (char*)".r\0"};
nctemp7705=&nctemp7706;
nctempchar1* nctemp7703= nctemp7705;
int nctemp7707=CodeEs(nctemp7701,nctemp7703);
struct tree* nctemp7709= p;
struct nctempchar1 *nctemp7713;
static struct nctempchar1 nctemp7714 = {{ 4}, (char*)";\n\0"};
nctemp7713=&nctemp7714;
nctempchar1* nctemp7711= nctemp7713;
int nctemp7715=CodeEs(nctemp7709,nctemp7711);
struct tree* nctemp7717= p;
nctempchar1* nctemp7719= type;
int nctemp7722=CodeEs(nctemp7717,nctemp7719);
struct tree* nctemp7724= p;
struct nctempchar1 *nctemp7728;
static struct nctempchar1 nctemp7729 = {{ 2}, (char*)" \0"};
nctemp7728=&nctemp7729;
nctempchar1* nctemp7726= nctemp7728;
int nctemp7730=CodeEs(nctemp7724,nctemp7726);
struct tree* nctemp7732= p;
nctempchar1* nctemp7734= tempr;
int nctemp7737=CodeEs(nctemp7732,nctemp7734);
struct tree* nctemp7739= p;
struct nctempchar1 *nctemp7743;
static struct nctempchar1 nctemp7744 = {{ 3}, (char*)".i\0"};
nctemp7743=&nctemp7744;
nctempchar1* nctemp7741= nctemp7743;
int nctemp7745=CodeEs(nctemp7739,nctemp7741);
struct tree* nctemp7747= p;
struct nctempchar1 *nctemp7751;
static struct nctempchar1 nctemp7752 = {{ 4}, (char*)" = \0"};
nctemp7751=&nctemp7752;
nctempchar1* nctemp7749= nctemp7751;
int nctemp7753=CodeEs(nctemp7747,nctemp7749);
struct tree* nctemp7755= p;
nctempchar1* nctemp7757= lval;
int nctemp7760=CodeEs(nctemp7755,nctemp7757);
struct tree* nctemp7762= p;
struct nctempchar1 *nctemp7766;
static struct nctempchar1 nctemp7767 = {{ 3}, (char*)".i\0"};
nctemp7766=&nctemp7767;
nctempchar1* nctemp7764= nctemp7766;
int nctemp7768=CodeEs(nctemp7762,nctemp7764);
struct tree* nctemp7770= p;
struct nctempchar1 *nctemp7774;
static struct nctempchar1 nctemp7775 = {{ 2}, (char*)" \0"};
nctemp7774=&nctemp7775;
nctempchar1* nctemp7772= nctemp7774;
int nctemp7776=CodeEs(nctemp7770,nctemp7772);
struct tree* nctemp7778= p;
struct tree* nctemp7782= p;
nctempchar1* nctemp7784=PtreeGetdef(nctemp7782);
nctempchar1* nctemp7780= nctemp7784;
int nctemp7785=CodeEs(nctemp7778,nctemp7780);
struct tree* nctemp7787= p;
struct nctempchar1 *nctemp7791;
static struct nctempchar1 nctemp7792 = {{ 2}, (char*)" \0"};
nctemp7791=&nctemp7792;
nctempchar1* nctemp7789= nctemp7791;
int nctemp7793=CodeEs(nctemp7787,nctemp7789);
struct tree* nctemp7795= p;
nctempchar1* nctemp7797= rval;
int nctemp7800=CodeEs(nctemp7795,nctemp7797);
struct tree* nctemp7802= p;
struct nctempchar1 *nctemp7806;
static struct nctempchar1 nctemp7807 = {{ 3}, (char*)".i\0"};
nctemp7806=&nctemp7807;
nctempchar1* nctemp7804= nctemp7806;
int nctemp7808=CodeEs(nctemp7802,nctemp7804);
struct tree* nctemp7810= p;
struct nctempchar1 *nctemp7814;
static struct nctempchar1 nctemp7815 = {{ 4}, (char*)";\n\0"};
nctemp7814=&nctemp7815;
nctempchar1* nctemp7812= nctemp7814;
int nctemp7816=CodeEs(nctemp7810,nctemp7812);
}
else{
nctempchar1* nctemp7820= opr;
struct nctempchar1 *nctemp7825;
static struct nctempchar1 nctemp7826 = {{ 2}, (char*)"*\0"};
nctemp7825=&nctemp7826;
nctempchar1* nctemp7823= nctemp7825;
int nctemp7827=LibeStrcmp(nctemp7820,nctemp7823);
int nctemp7817 = (nctemp7827 ==1);
if(nctemp7817)
{
struct tree* nctemp7830= p;
nctempchar1* nctemp7832= type;
int nctemp7835=CodeEs(nctemp7830,nctemp7832);
struct tree* nctemp7837= p;
struct nctempchar1 *nctemp7841;
static struct nctempchar1 nctemp7842 = {{ 2}, (char*)" \0"};
nctemp7841=&nctemp7842;
nctempchar1* nctemp7839= nctemp7841;
int nctemp7843=CodeEs(nctemp7837,nctemp7839);
struct tree* nctemp7845= p;
nctempchar1* nctemp7847= tempr;
int nctemp7850=CodeEs(nctemp7845,nctemp7847);
struct tree* nctemp7852= p;
struct nctempchar1 *nctemp7856;
static struct nctempchar1 nctemp7857 = {{ 3}, (char*)".r\0"};
nctemp7856=&nctemp7857;
nctempchar1* nctemp7854= nctemp7856;
int nctemp7858=CodeEs(nctemp7852,nctemp7854);
struct tree* nctemp7860= p;
struct nctempchar1 *nctemp7864;
static struct nctempchar1 nctemp7865 = {{ 4}, (char*)" = \0"};
nctemp7864=&nctemp7865;
nctempchar1* nctemp7862= nctemp7864;
int nctemp7866=CodeEs(nctemp7860,nctemp7862);
struct tree* nctemp7868= p;
nctempchar1* nctemp7870= lval;
int nctemp7873=CodeEs(nctemp7868,nctemp7870);
struct tree* nctemp7875= p;
struct nctempchar1 *nctemp7879;
static struct nctempchar1 nctemp7880 = {{ 3}, (char*)".r\0"};
nctemp7879=&nctemp7880;
nctempchar1* nctemp7877= nctemp7879;
int nctemp7881=CodeEs(nctemp7875,nctemp7877);
struct tree* nctemp7883= p;
struct nctempchar1 *nctemp7887;
static struct nctempchar1 nctemp7888 = {{ 2}, (char*)"*\0"};
nctemp7887=&nctemp7888;
nctempchar1* nctemp7885= nctemp7887;
int nctemp7889=CodeEs(nctemp7883,nctemp7885);
struct tree* nctemp7891= p;
nctempchar1* nctemp7893= rval;
int nctemp7896=CodeEs(nctemp7891,nctemp7893);
struct tree* nctemp7898= p;
struct nctempchar1 *nctemp7902;
static struct nctempchar1 nctemp7903 = {{ 3}, (char*)".r\0"};
nctemp7902=&nctemp7903;
nctempchar1* nctemp7900= nctemp7902;
int nctemp7904=CodeEs(nctemp7898,nctemp7900);
struct tree* nctemp7906= p;
struct nctempchar1 *nctemp7910;
static struct nctempchar1 nctemp7911 = {{ 2}, (char*)"-\0"};
nctemp7910=&nctemp7911;
nctempchar1* nctemp7908= nctemp7910;
int nctemp7912=CodeEs(nctemp7906,nctemp7908);
struct tree* nctemp7914= p;
nctempchar1* nctemp7916= lval;
int nctemp7919=CodeEs(nctemp7914,nctemp7916);
struct tree* nctemp7921= p;
struct nctempchar1 *nctemp7925;
static struct nctempchar1 nctemp7926 = {{ 3}, (char*)".i\0"};
nctemp7925=&nctemp7926;
nctempchar1* nctemp7923= nctemp7925;
int nctemp7927=CodeEs(nctemp7921,nctemp7923);
struct tree* nctemp7929= p;
struct nctempchar1 *nctemp7933;
static struct nctempchar1 nctemp7934 = {{ 2}, (char*)"*\0"};
nctemp7933=&nctemp7934;
nctempchar1* nctemp7931= nctemp7933;
int nctemp7935=CodeEs(nctemp7929,nctemp7931);
struct tree* nctemp7937= p;
nctempchar1* nctemp7939= rval;
int nctemp7942=CodeEs(nctemp7937,nctemp7939);
struct tree* nctemp7944= p;
struct nctempchar1 *nctemp7948;
static struct nctempchar1 nctemp7949 = {{ 3}, (char*)".i\0"};
nctemp7948=&nctemp7949;
nctempchar1* nctemp7946= nctemp7948;
int nctemp7950=CodeEs(nctemp7944,nctemp7946);
struct tree* nctemp7952= p;
struct nctempchar1 *nctemp7956;
static struct nctempchar1 nctemp7957 = {{ 4}, (char*)";\n\0"};
nctemp7956=&nctemp7957;
nctempchar1* nctemp7954= nctemp7956;
int nctemp7958=CodeEs(nctemp7952,nctemp7954);
struct tree* nctemp7960= p;
nctempchar1* nctemp7962= type;
int nctemp7965=CodeEs(nctemp7960,nctemp7962);
struct tree* nctemp7967= p;
struct nctempchar1 *nctemp7971;
static struct nctempchar1 nctemp7972 = {{ 2}, (char*)" \0"};
nctemp7971=&nctemp7972;
nctempchar1* nctemp7969= nctemp7971;
int nctemp7973=CodeEs(nctemp7967,nctemp7969);
struct tree* nctemp7975= p;
nctempchar1* nctemp7977= tempr;
int nctemp7980=CodeEs(nctemp7975,nctemp7977);
struct tree* nctemp7982= p;
struct nctempchar1 *nctemp7986;
static struct nctempchar1 nctemp7987 = {{ 3}, (char*)".i\0"};
nctemp7986=&nctemp7987;
nctempchar1* nctemp7984= nctemp7986;
int nctemp7988=CodeEs(nctemp7982,nctemp7984);
struct tree* nctemp7990= p;
struct nctempchar1 *nctemp7994;
static struct nctempchar1 nctemp7995 = {{ 4}, (char*)" = \0"};
nctemp7994=&nctemp7995;
nctempchar1* nctemp7992= nctemp7994;
int nctemp7996=CodeEs(nctemp7990,nctemp7992);
struct tree* nctemp7998= p;
nctempchar1* nctemp8000= lval;
int nctemp8003=CodeEs(nctemp7998,nctemp8000);
struct tree* nctemp8005= p;
struct nctempchar1 *nctemp8009;
static struct nctempchar1 nctemp8010 = {{ 3}, (char*)".i\0"};
nctemp8009=&nctemp8010;
nctempchar1* nctemp8007= nctemp8009;
int nctemp8011=CodeEs(nctemp8005,nctemp8007);
struct tree* nctemp8013= p;
struct nctempchar1 *nctemp8017;
static struct nctempchar1 nctemp8018 = {{ 2}, (char*)"*\0"};
nctemp8017=&nctemp8018;
nctempchar1* nctemp8015= nctemp8017;
int nctemp8019=CodeEs(nctemp8013,nctemp8015);
struct tree* nctemp8021= p;
nctempchar1* nctemp8023= rval;
int nctemp8026=CodeEs(nctemp8021,nctemp8023);
struct tree* nctemp8028= p;
struct nctempchar1 *nctemp8032;
static struct nctempchar1 nctemp8033 = {{ 3}, (char*)".r\0"};
nctemp8032=&nctemp8033;
nctempchar1* nctemp8030= nctemp8032;
int nctemp8034=CodeEs(nctemp8028,nctemp8030);
struct tree* nctemp8036= p;
struct nctempchar1 *nctemp8040;
static struct nctempchar1 nctemp8041 = {{ 2}, (char*)"+\0"};
nctemp8040=&nctemp8041;
nctempchar1* nctemp8038= nctemp8040;
int nctemp8042=CodeEs(nctemp8036,nctemp8038);
struct tree* nctemp8044= p;
nctempchar1* nctemp8046= lval;
int nctemp8049=CodeEs(nctemp8044,nctemp8046);
struct tree* nctemp8051= p;
struct nctempchar1 *nctemp8055;
static struct nctempchar1 nctemp8056 = {{ 3}, (char*)".r\0"};
nctemp8055=&nctemp8056;
nctempchar1* nctemp8053= nctemp8055;
int nctemp8057=CodeEs(nctemp8051,nctemp8053);
struct tree* nctemp8059= p;
struct nctempchar1 *nctemp8063;
static struct nctempchar1 nctemp8064 = {{ 2}, (char*)"*\0"};
nctemp8063=&nctemp8064;
nctempchar1* nctemp8061= nctemp8063;
int nctemp8065=CodeEs(nctemp8059,nctemp8061);
struct tree* nctemp8067= p;
nctempchar1* nctemp8069= rval;
int nctemp8072=CodeEs(nctemp8067,nctemp8069);
struct tree* nctemp8074= p;
struct nctempchar1 *nctemp8078;
static struct nctempchar1 nctemp8079 = {{ 3}, (char*)".i\0"};
nctemp8078=&nctemp8079;
nctempchar1* nctemp8076= nctemp8078;
int nctemp8080=CodeEs(nctemp8074,nctemp8076);
struct tree* nctemp8082= p;
struct nctempchar1 *nctemp8086;
static struct nctempchar1 nctemp8087 = {{ 4}, (char*)";\n\0"};
nctemp8086=&nctemp8087;
nctempchar1* nctemp8084= nctemp8086;
int nctemp8088=CodeEs(nctemp8082,nctemp8084);
}
else{
nctempchar1* nctemp8092= opr;
struct nctempchar1 *nctemp8097;
static struct nctempchar1 nctemp8098 = {{ 2}, (char*)"/\0"};
nctemp8097=&nctemp8098;
nctempchar1* nctemp8095= nctemp8097;
int nctemp8099=LibeStrcmp(nctemp8092,nctemp8095);
int nctemp8089 = (nctemp8099 ==1);
if(nctemp8089)
{
struct tree* nctemp8102= p;
nctempchar1* nctemp8104= type;
int nctemp8107=CodeEs(nctemp8102,nctemp8104);
struct tree* nctemp8109= p;
struct nctempchar1 *nctemp8113;
static struct nctempchar1 nctemp8114 = {{ 2}, (char*)" \0"};
nctemp8113=&nctemp8114;
nctempchar1* nctemp8111= nctemp8113;
int nctemp8115=CodeEs(nctemp8109,nctemp8111);
struct tree* nctemp8117= p;
nctempchar1* nctemp8119= tempr;
int nctemp8122=CodeEs(nctemp8117,nctemp8119);
struct tree* nctemp8124= p;
struct nctempchar1 *nctemp8128;
static struct nctempchar1 nctemp8129 = {{ 3}, (char*)".r\0"};
nctemp8128=&nctemp8129;
nctempchar1* nctemp8126= nctemp8128;
int nctemp8130=CodeEs(nctemp8124,nctemp8126);
struct tree* nctemp8132= p;
struct nctempchar1 *nctemp8136;
static struct nctempchar1 nctemp8137 = {{ 4}, (char*)" = \0"};
nctemp8136=&nctemp8137;
nctempchar1* nctemp8134= nctemp8136;
int nctemp8138=CodeEs(nctemp8132,nctemp8134);
struct tree* nctemp8140= p;
struct nctempchar1 *nctemp8144;
static struct nctempchar1 nctemp8145 = {{ 2}, (char*)"(\0"};
nctemp8144=&nctemp8145;
nctempchar1* nctemp8142= nctemp8144;
int nctemp8146=CodeEs(nctemp8140,nctemp8142);
struct tree* nctemp8148= p;
nctempchar1* nctemp8150= lval;
int nctemp8153=CodeEs(nctemp8148,nctemp8150);
struct tree* nctemp8155= p;
struct nctempchar1 *nctemp8159;
static struct nctempchar1 nctemp8160 = {{ 3}, (char*)".r\0"};
nctemp8159=&nctemp8160;
nctempchar1* nctemp8157= nctemp8159;
int nctemp8161=CodeEs(nctemp8155,nctemp8157);
struct tree* nctemp8163= p;
struct nctempchar1 *nctemp8167;
static struct nctempchar1 nctemp8168 = {{ 2}, (char*)"*\0"};
nctemp8167=&nctemp8168;
nctempchar1* nctemp8165= nctemp8167;
int nctemp8169=CodeEs(nctemp8163,nctemp8165);
struct tree* nctemp8171= p;
nctempchar1* nctemp8173= rval;
int nctemp8176=CodeEs(nctemp8171,nctemp8173);
struct tree* nctemp8178= p;
struct nctempchar1 *nctemp8182;
static struct nctempchar1 nctemp8183 = {{ 3}, (char*)".r\0"};
nctemp8182=&nctemp8183;
nctempchar1* nctemp8180= nctemp8182;
int nctemp8184=CodeEs(nctemp8178,nctemp8180);
struct tree* nctemp8186= p;
struct nctempchar1 *nctemp8190;
static struct nctempchar1 nctemp8191 = {{ 2}, (char*)"+\0"};
nctemp8190=&nctemp8191;
nctempchar1* nctemp8188= nctemp8190;
int nctemp8192=CodeEs(nctemp8186,nctemp8188);
struct tree* nctemp8194= p;
nctempchar1* nctemp8196= lval;
int nctemp8199=CodeEs(nctemp8194,nctemp8196);
struct tree* nctemp8201= p;
struct nctempchar1 *nctemp8205;
static struct nctempchar1 nctemp8206 = {{ 3}, (char*)".i\0"};
nctemp8205=&nctemp8206;
nctempchar1* nctemp8203= nctemp8205;
int nctemp8207=CodeEs(nctemp8201,nctemp8203);
struct tree* nctemp8209= p;
struct nctempchar1 *nctemp8213;
static struct nctempchar1 nctemp8214 = {{ 2}, (char*)"*\0"};
nctemp8213=&nctemp8214;
nctempchar1* nctemp8211= nctemp8213;
int nctemp8215=CodeEs(nctemp8209,nctemp8211);
struct tree* nctemp8217= p;
nctempchar1* nctemp8219= rval;
int nctemp8222=CodeEs(nctemp8217,nctemp8219);
struct tree* nctemp8224= p;
struct nctempchar1 *nctemp8228;
static struct nctempchar1 nctemp8229 = {{ 3}, (char*)".i\0"};
nctemp8228=&nctemp8229;
nctempchar1* nctemp8226= nctemp8228;
int nctemp8230=CodeEs(nctemp8224,nctemp8226);
struct tree* nctemp8232= p;
struct nctempchar1 *nctemp8236;
static struct nctempchar1 nctemp8237 = {{ 4}, (char*)")/(\0"};
nctemp8236=&nctemp8237;
nctempchar1* nctemp8234= nctemp8236;
int nctemp8238=CodeEs(nctemp8232,nctemp8234);
struct tree* nctemp8240= p;
nctempchar1* nctemp8242= rval;
int nctemp8245=CodeEs(nctemp8240,nctemp8242);
struct tree* nctemp8247= p;
struct nctempchar1 *nctemp8251;
static struct nctempchar1 nctemp8252 = {{ 3}, (char*)".r\0"};
nctemp8251=&nctemp8252;
nctempchar1* nctemp8249= nctemp8251;
int nctemp8253=CodeEs(nctemp8247,nctemp8249);
struct tree* nctemp8255= p;
struct nctempchar1 *nctemp8259;
static struct nctempchar1 nctemp8260 = {{ 2}, (char*)"*\0"};
nctemp8259=&nctemp8260;
nctempchar1* nctemp8257= nctemp8259;
int nctemp8261=CodeEs(nctemp8255,nctemp8257);
struct tree* nctemp8263= p;
nctempchar1* nctemp8265= rval;
int nctemp8268=CodeEs(nctemp8263,nctemp8265);
struct tree* nctemp8270= p;
struct nctempchar1 *nctemp8274;
static struct nctempchar1 nctemp8275 = {{ 3}, (char*)".r\0"};
nctemp8274=&nctemp8275;
nctempchar1* nctemp8272= nctemp8274;
int nctemp8276=CodeEs(nctemp8270,nctemp8272);
struct tree* nctemp8278= p;
struct nctempchar1 *nctemp8282;
static struct nctempchar1 nctemp8283 = {{ 2}, (char*)"+\0"};
nctemp8282=&nctemp8283;
nctempchar1* nctemp8280= nctemp8282;
int nctemp8284=CodeEs(nctemp8278,nctemp8280);
struct tree* nctemp8286= p;
nctempchar1* nctemp8288= rval;
int nctemp8291=CodeEs(nctemp8286,nctemp8288);
struct tree* nctemp8293= p;
struct nctempchar1 *nctemp8297;
static struct nctempchar1 nctemp8298 = {{ 3}, (char*)".i\0"};
nctemp8297=&nctemp8298;
nctempchar1* nctemp8295= nctemp8297;
int nctemp8299=CodeEs(nctemp8293,nctemp8295);
struct tree* nctemp8301= p;
struct nctempchar1 *nctemp8305;
static struct nctempchar1 nctemp8306 = {{ 2}, (char*)"*\0"};
nctemp8305=&nctemp8306;
nctempchar1* nctemp8303= nctemp8305;
int nctemp8307=CodeEs(nctemp8301,nctemp8303);
struct tree* nctemp8309= p;
nctempchar1* nctemp8311= rval;
int nctemp8314=CodeEs(nctemp8309,nctemp8311);
struct tree* nctemp8316= p;
struct nctempchar1 *nctemp8320;
static struct nctempchar1 nctemp8321 = {{ 3}, (char*)".i\0"};
nctemp8320=&nctemp8321;
nctempchar1* nctemp8318= nctemp8320;
int nctemp8322=CodeEs(nctemp8316,nctemp8318);
struct tree* nctemp8324= p;
struct nctempchar1 *nctemp8328;
static struct nctempchar1 nctemp8329 = {{ 5}, (char*)");\n\0"};
nctemp8328=&nctemp8329;
nctempchar1* nctemp8326= nctemp8328;
int nctemp8330=CodeEs(nctemp8324,nctemp8326);
struct tree* nctemp8332= p;
nctempchar1* nctemp8334= type;
int nctemp8337=CodeEs(nctemp8332,nctemp8334);
struct tree* nctemp8339= p;
struct nctempchar1 *nctemp8343;
static struct nctempchar1 nctemp8344 = {{ 2}, (char*)" \0"};
nctemp8343=&nctemp8344;
nctempchar1* nctemp8341= nctemp8343;
int nctemp8345=CodeEs(nctemp8339,nctemp8341);
struct tree* nctemp8347= p;
nctempchar1* nctemp8349= tempr;
int nctemp8352=CodeEs(nctemp8347,nctemp8349);
struct tree* nctemp8354= p;
struct nctempchar1 *nctemp8358;
static struct nctempchar1 nctemp8359 = {{ 3}, (char*)".i\0"};
nctemp8358=&nctemp8359;
nctempchar1* nctemp8356= nctemp8358;
int nctemp8360=CodeEs(nctemp8354,nctemp8356);
struct tree* nctemp8362= p;
struct nctempchar1 *nctemp8366;
static struct nctempchar1 nctemp8367 = {{ 4}, (char*)" = \0"};
nctemp8366=&nctemp8367;
nctempchar1* nctemp8364= nctemp8366;
int nctemp8368=CodeEs(nctemp8362,nctemp8364);
struct tree* nctemp8370= p;
struct nctempchar1 *nctemp8374;
static struct nctempchar1 nctemp8375 = {{ 2}, (char*)"(\0"};
nctemp8374=&nctemp8375;
nctempchar1* nctemp8372= nctemp8374;
int nctemp8376=CodeEs(nctemp8370,nctemp8372);
struct tree* nctemp8378= p;
nctempchar1* nctemp8380= lval;
int nctemp8383=CodeEs(nctemp8378,nctemp8380);
struct tree* nctemp8385= p;
struct nctempchar1 *nctemp8389;
static struct nctempchar1 nctemp8390 = {{ 3}, (char*)".i\0"};
nctemp8389=&nctemp8390;
nctempchar1* nctemp8387= nctemp8389;
int nctemp8391=CodeEs(nctemp8385,nctemp8387);
struct tree* nctemp8393= p;
struct nctempchar1 *nctemp8397;
static struct nctempchar1 nctemp8398 = {{ 2}, (char*)"*\0"};
nctemp8397=&nctemp8398;
nctempchar1* nctemp8395= nctemp8397;
int nctemp8399=CodeEs(nctemp8393,nctemp8395);
struct tree* nctemp8401= p;
nctempchar1* nctemp8403= rval;
int nctemp8406=CodeEs(nctemp8401,nctemp8403);
struct tree* nctemp8408= p;
struct nctempchar1 *nctemp8412;
static struct nctempchar1 nctemp8413 = {{ 3}, (char*)".r\0"};
nctemp8412=&nctemp8413;
nctempchar1* nctemp8410= nctemp8412;
int nctemp8414=CodeEs(nctemp8408,nctemp8410);
struct tree* nctemp8416= p;
struct nctempchar1 *nctemp8420;
static struct nctempchar1 nctemp8421 = {{ 2}, (char*)"-\0"};
nctemp8420=&nctemp8421;
nctempchar1* nctemp8418= nctemp8420;
int nctemp8422=CodeEs(nctemp8416,nctemp8418);
struct tree* nctemp8424= p;
nctempchar1* nctemp8426= lval;
int nctemp8429=CodeEs(nctemp8424,nctemp8426);
struct tree* nctemp8431= p;
struct nctempchar1 *nctemp8435;
static struct nctempchar1 nctemp8436 = {{ 3}, (char*)".r\0"};
nctemp8435=&nctemp8436;
nctempchar1* nctemp8433= nctemp8435;
int nctemp8437=CodeEs(nctemp8431,nctemp8433);
struct tree* nctemp8439= p;
struct nctempchar1 *nctemp8443;
static struct nctempchar1 nctemp8444 = {{ 2}, (char*)"*\0"};
nctemp8443=&nctemp8444;
nctempchar1* nctemp8441= nctemp8443;
int nctemp8445=CodeEs(nctemp8439,nctemp8441);
struct tree* nctemp8447= p;
nctempchar1* nctemp8449= rval;
int nctemp8452=CodeEs(nctemp8447,nctemp8449);
struct tree* nctemp8454= p;
struct nctempchar1 *nctemp8458;
static struct nctempchar1 nctemp8459 = {{ 3}, (char*)".i\0"};
nctemp8458=&nctemp8459;
nctempchar1* nctemp8456= nctemp8458;
int nctemp8460=CodeEs(nctemp8454,nctemp8456);
struct tree* nctemp8462= p;
struct nctempchar1 *nctemp8466;
static struct nctempchar1 nctemp8467 = {{ 4}, (char*)")/(\0"};
nctemp8466=&nctemp8467;
nctempchar1* nctemp8464= nctemp8466;
int nctemp8468=CodeEs(nctemp8462,nctemp8464);
struct tree* nctemp8470= p;
nctempchar1* nctemp8472= rval;
int nctemp8475=CodeEs(nctemp8470,nctemp8472);
struct tree* nctemp8477= p;
struct nctempchar1 *nctemp8481;
static struct nctempchar1 nctemp8482 = {{ 3}, (char*)".r\0"};
nctemp8481=&nctemp8482;
nctempchar1* nctemp8479= nctemp8481;
int nctemp8483=CodeEs(nctemp8477,nctemp8479);
struct tree* nctemp8485= p;
struct nctempchar1 *nctemp8489;
static struct nctempchar1 nctemp8490 = {{ 2}, (char*)"*\0"};
nctemp8489=&nctemp8490;
nctempchar1* nctemp8487= nctemp8489;
int nctemp8491=CodeEs(nctemp8485,nctemp8487);
struct tree* nctemp8493= p;
nctempchar1* nctemp8495= rval;
int nctemp8498=CodeEs(nctemp8493,nctemp8495);
struct tree* nctemp8500= p;
struct nctempchar1 *nctemp8504;
static struct nctempchar1 nctemp8505 = {{ 3}, (char*)".r\0"};
nctemp8504=&nctemp8505;
nctempchar1* nctemp8502= nctemp8504;
int nctemp8506=CodeEs(nctemp8500,nctemp8502);
struct tree* nctemp8508= p;
struct nctempchar1 *nctemp8512;
static struct nctempchar1 nctemp8513 = {{ 2}, (char*)"+\0"};
nctemp8512=&nctemp8513;
nctempchar1* nctemp8510= nctemp8512;
int nctemp8514=CodeEs(nctemp8508,nctemp8510);
struct tree* nctemp8516= p;
nctempchar1* nctemp8518= rval;
int nctemp8521=CodeEs(nctemp8516,nctemp8518);
struct tree* nctemp8523= p;
struct nctempchar1 *nctemp8527;
static struct nctempchar1 nctemp8528 = {{ 3}, (char*)".i\0"};
nctemp8527=&nctemp8528;
nctempchar1* nctemp8525= nctemp8527;
int nctemp8529=CodeEs(nctemp8523,nctemp8525);
struct tree* nctemp8531= p;
struct nctempchar1 *nctemp8535;
static struct nctempchar1 nctemp8536 = {{ 2}, (char*)"*\0"};
nctemp8535=&nctemp8536;
nctempchar1* nctemp8533= nctemp8535;
int nctemp8537=CodeEs(nctemp8531,nctemp8533);
struct tree* nctemp8539= p;
nctempchar1* nctemp8541= rval;
int nctemp8544=CodeEs(nctemp8539,nctemp8541);
struct tree* nctemp8546= p;
struct nctempchar1 *nctemp8550;
static struct nctempchar1 nctemp8551 = {{ 3}, (char*)".i\0"};
nctemp8550=&nctemp8551;
nctempchar1* nctemp8548= nctemp8550;
int nctemp8552=CodeEs(nctemp8546,nctemp8548);
struct tree* nctemp8554= p;
struct nctempchar1 *nctemp8558;
static struct nctempchar1 nctemp8559 = {{ 5}, (char*)");\n\0"};
nctemp8558=&nctemp8559;
nctempchar1* nctemp8556= nctemp8558;
int nctemp8560=CodeEs(nctemp8554,nctemp8556);
}
}
}
}
else{
struct tree* nctemp8562= p;
nctempchar1* nctemp8564= type;
int nctemp8567=CodeEs(nctemp8562,nctemp8564);
struct tree* nctemp8569= p;
struct nctempchar1 *nctemp8573;
static struct nctempchar1 nctemp8574 = {{ 2}, (char*)" \0"};
nctemp8573=&nctemp8574;
nctempchar1* nctemp8571= nctemp8573;
int nctemp8575=CodeEs(nctemp8569,nctemp8571);
struct tree* nctemp8577= p;
nctempchar1* nctemp8579= tempr;
int nctemp8582=CodeEs(nctemp8577,nctemp8579);
struct tree* nctemp8584= p;
struct nctempchar1 *nctemp8588;
static struct nctempchar1 nctemp8589 = {{ 4}, (char*)" = \0"};
nctemp8588=&nctemp8589;
nctempchar1* nctemp8586= nctemp8588;
int nctemp8590=CodeEs(nctemp8584,nctemp8586);
struct tree* nctemp8592= p;
nctempchar1* nctemp8594= lval;
int nctemp8597=CodeEs(nctemp8592,nctemp8594);
struct tree* nctemp8599= p;
struct nctempchar1 *nctemp8603;
static struct nctempchar1 nctemp8604 = {{ 2}, (char*)" \0"};
nctemp8603=&nctemp8604;
nctempchar1* nctemp8601= nctemp8603;
int nctemp8605=CodeEs(nctemp8599,nctemp8601);
struct tree* nctemp8607= p;
struct tree* nctemp8611= p;
nctempchar1* nctemp8613=PtreeGetdef(nctemp8611);
nctempchar1* nctemp8609= nctemp8613;
int nctemp8614=CodeEs(nctemp8607,nctemp8609);
struct tree* nctemp8616= p;
struct nctempchar1 *nctemp8620;
static struct nctempchar1 nctemp8621 = {{ 2}, (char*)" \0"};
nctemp8620=&nctemp8621;
nctempchar1* nctemp8618= nctemp8620;
int nctemp8622=CodeEs(nctemp8616,nctemp8618);
struct tree* nctemp8624= p;
nctempchar1* nctemp8626= rval;
int nctemp8629=CodeEs(nctemp8624,nctemp8626);
struct tree* nctemp8631= p;
struct nctempchar1 *nctemp8635;
static struct nctempchar1 nctemp8636 = {{ 4}, (char*)";\n\0"};
nctemp8635=&nctemp8636;
nctempchar1* nctemp8633= nctemp8635;
int nctemp8637=CodeEs(nctemp8631,nctemp8633);
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
struct tree* nctemp8645= p;
nctempchar1* nctemp8647=PtreeGetname(nctemp8645);
nctempchar1* nctemp8643= nctemp8647;
struct nctempchar1 *nctemp8650;
static struct nctempchar1 nctemp8651 = {{ 8}, (char*)"binexpr\0"};
nctemp8650=&nctemp8651;
nctempchar1* nctemp8648= nctemp8650;
int nctemp8652=LibeStrcmp(nctemp8643,nctemp8648);
int nctemp8640 = (nctemp8652 ==1);
if(nctemp8640)
{
struct tree* nctemp8659= p;
nctempchar1* nctemp8661=PtreeGetype(nctemp8659);
type=nctemp8661;
nctempchar1* nctemp8667=CodeMktemp();
tempr=nctemp8667;
nctempchar1* nctemp8673=CodeMktemp();
tempi=nctemp8673;
struct tree* nctemp8678= p;
struct tree* nctemp8680=PtreeMvchild(nctemp8678);
np =nctemp8680;
struct tree* nctemp8686= np;
nctempchar1* nctemp8688=CodeUnexpr(nctemp8686);
lval=nctemp8688;
struct tree* nctemp8696= np;
struct tree* nctemp8698=PtreeMvsister(nctemp8696);
struct tree* nctemp8694= nctemp8698;
nctempchar1* nctemp8699=CodeUnexpr(nctemp8694);
rval=nctemp8699;
struct tree* nctemp8714= p;
nctempchar1* nctemp8716=PtreeGetdef(nctemp8714);
nctempchar1* nctemp8712= nctemp8716;
struct nctempchar1 *nctemp8719;
static struct nctempchar1 nctemp8720 = {{ 2}, (char*)"+\0"};
nctemp8719=&nctemp8720;
nctempchar1* nctemp8717= nctemp8719;
int nctemp8721=LibeStrcmp(nctemp8712,nctemp8717);
int nctemp8709 = (nctemp8721 ==1);
struct tree* nctemp8729= p;
nctempchar1* nctemp8731=PtreeGetdef(nctemp8729);
nctempchar1* nctemp8727= nctemp8731;
struct nctempchar1 *nctemp8734;
static struct nctempchar1 nctemp8735 = {{ 2}, (char*)"-\0"};
nctemp8734=&nctemp8735;
nctempchar1* nctemp8732= nctemp8734;
int nctemp8736=LibeStrcmp(nctemp8727,nctemp8732);
int nctemp8724 = (nctemp8736 ==1);
int nctemp8706 = (nctemp8709 || nctemp8724);
struct tree* nctemp8744= p;
nctempchar1* nctemp8746=PtreeGetdef(nctemp8744);
nctempchar1* nctemp8742= nctemp8746;
struct nctempchar1 *nctemp8749;
static struct nctempchar1 nctemp8750 = {{ 2}, (char*)"*\0"};
nctemp8749=&nctemp8750;
nctempchar1* nctemp8747= nctemp8749;
int nctemp8751=LibeStrcmp(nctemp8742,nctemp8747);
int nctemp8739 = (nctemp8751 ==1);
int nctemp8703 = (nctemp8706 || nctemp8739);
struct tree* nctemp8759= p;
nctempchar1* nctemp8761=PtreeGetdef(nctemp8759);
nctempchar1* nctemp8757= nctemp8761;
struct nctempchar1 *nctemp8764;
static struct nctempchar1 nctemp8765 = {{ 2}, (char*)"/\0"};
nctemp8764=&nctemp8765;
nctempchar1* nctemp8762= nctemp8764;
int nctemp8766=LibeStrcmp(nctemp8757,nctemp8762);
int nctemp8754 = (nctemp8766 ==1);
int nctemp8700 = (nctemp8703 || nctemp8754);
if(nctemp8700)
{
struct tree* nctemp8769= p;
nctempchar1* nctemp8771= lval;
nctempchar1* nctemp8774= rval;
nctempchar1* nctemp8777=CodeAddexpr(nctemp8769,nctemp8771,nctemp8774);
return nctemp8777;
}
else{
struct tree* nctemp8783= p;
nctempchar1* nctemp8785=PtreeGetdef(nctemp8783);
nctempchar1* nctemp8781= nctemp8785;
struct nctempchar1 *nctemp8788;
static struct nctempchar1 nctemp8789 = {{ 2}, (char*)"=\0"};
nctemp8788=&nctemp8789;
nctempchar1* nctemp8786= nctemp8788;
int nctemp8790=LibeStrcmp(nctemp8781,nctemp8786);
int nctemp8778 = (nctemp8790 ==1);
if(nctemp8778)
{
struct tree* nctemp8803= p;
nctempchar1* nctemp8805=PtreeGetype(nctemp8803);
nctempchar1* nctemp8801= nctemp8805;
struct nctempchar1 *nctemp8808;
static struct nctempchar1 nctemp8809 = {{ 8}, (char*)"complex\0"};
nctemp8808=&nctemp8809;
nctempchar1* nctemp8806= nctemp8808;
int nctemp8810=LibeStrcmp(nctemp8801,nctemp8806);
int nctemp8798 = (nctemp8810 ==1);
struct tree* nctemp8818= p;
nctempchar1* nctemp8820=PtreeGetref(nctemp8818);
nctempchar1* nctemp8816= nctemp8820;
struct nctempchar1 *nctemp8823;
static struct nctempchar1 nctemp8824 = {{ 5}, (char*)"aref\0"};
nctemp8823=&nctemp8824;
nctempchar1* nctemp8821= nctemp8823;
int nctemp8825=LibeStrcmp(nctemp8816,nctemp8821);
int nctemp8813 = (nctemp8825 ==0);
int nctemp8795 = (nctemp8798 && nctemp8813);
struct tree* nctemp8833= p;
nctempchar1* nctemp8835=PtreeGetref(nctemp8833);
nctempchar1* nctemp8831= nctemp8835;
struct nctempchar1 *nctemp8838;
static struct nctempchar1 nctemp8839 = {{ 5}, (char*)"sref\0"};
nctemp8838=&nctemp8839;
nctempchar1* nctemp8836= nctemp8838;
int nctemp8840=LibeStrcmp(nctemp8831,nctemp8836);
int nctemp8828 = (nctemp8840 ==0);
int nctemp8792 = (nctemp8795 && nctemp8828);
if(nctemp8792)
{
struct tree* nctemp8843= p;
nctempchar1* nctemp8845= lval;
int nctemp8848=CodeEs(nctemp8843,nctemp8845);
struct tree* nctemp8850= p;
struct nctempchar1 *nctemp8854;
static struct nctempchar1 nctemp8855 = {{ 4}, (char*)".r \0"};
nctemp8854=&nctemp8855;
nctempchar1* nctemp8852= nctemp8854;
int nctemp8856=CodeEs(nctemp8850,nctemp8852);
struct tree* nctemp8858= p;
struct nctempchar1 *nctemp8862;
static struct nctempchar1 nctemp8863 = {{ 2}, (char*)"=\0"};
nctemp8862=&nctemp8863;
nctempchar1* nctemp8860= nctemp8862;
int nctemp8864=CodeEs(nctemp8858,nctemp8860);
struct tree* nctemp8866= p;
nctempchar1* nctemp8868= rval;
int nctemp8871=CodeEs(nctemp8866,nctemp8868);
struct tree* nctemp8873= p;
struct nctempchar1 *nctemp8877;
static struct nctempchar1 nctemp8878 = {{ 3}, (char*)".r\0"};
nctemp8877=&nctemp8878;
nctempchar1* nctemp8875= nctemp8877;
int nctemp8879=CodeEs(nctemp8873,nctemp8875);
struct tree* nctemp8881= p;
struct nctempchar1 *nctemp8885;
static struct nctempchar1 nctemp8886 = {{ 4}, (char*)";\n\0"};
nctemp8885=&nctemp8886;
nctempchar1* nctemp8883= nctemp8885;
int nctemp8887=CodeEs(nctemp8881,nctemp8883);
struct tree* nctemp8889= p;
nctempchar1* nctemp8891= lval;
int nctemp8894=CodeEs(nctemp8889,nctemp8891);
struct tree* nctemp8896= p;
struct nctempchar1 *nctemp8900;
static struct nctempchar1 nctemp8901 = {{ 3}, (char*)".i\0"};
nctemp8900=&nctemp8901;
nctempchar1* nctemp8898= nctemp8900;
int nctemp8902=CodeEs(nctemp8896,nctemp8898);
struct tree* nctemp8904= p;
struct nctempchar1 *nctemp8908;
static struct nctempchar1 nctemp8909 = {{ 2}, (char*)"=\0"};
nctemp8908=&nctemp8909;
nctempchar1* nctemp8906= nctemp8908;
int nctemp8910=CodeEs(nctemp8904,nctemp8906);
struct tree* nctemp8912= p;
nctempchar1* nctemp8914= rval;
int nctemp8917=CodeEs(nctemp8912,nctemp8914);
struct tree* nctemp8919= p;
struct nctempchar1 *nctemp8923;
static struct nctempchar1 nctemp8924 = {{ 3}, (char*)".i\0"};
nctemp8923=&nctemp8924;
nctempchar1* nctemp8921= nctemp8923;
int nctemp8925=CodeEs(nctemp8919,nctemp8921);
struct tree* nctemp8927= p;
struct nctempchar1 *nctemp8931;
static struct nctempchar1 nctemp8932 = {{ 4}, (char*)";\n\0"};
nctemp8931=&nctemp8932;
nctempchar1* nctemp8929= nctemp8931;
int nctemp8933=CodeEs(nctemp8927,nctemp8929);
return lval;
}
else{
struct tree* nctemp8941= np;
nctempchar1* nctemp8943=PtreeGetref(nctemp8941);
nctempchar1* nctemp8939= nctemp8943;
struct nctempchar1 *nctemp8946;
static struct nctempchar1 nctemp8947 = {{ 5}, (char*)"aref\0"};
nctemp8946=&nctemp8947;
nctempchar1* nctemp8944= nctemp8946;
int nctemp8948=LibeStrcmp(nctemp8939,nctemp8944);
int nctemp8936 = (nctemp8948 ==1);
if(nctemp8936)
{
struct tree* nctemp8957= np;
struct tree* nctemp8959=PtreeMvsister(nctemp8957);
struct tree* nctemp8955= nctemp8959;
nctempchar1* nctemp8960=PtreeGetname(nctemp8955);
nctempchar1* nctemp8953= nctemp8960;
struct nctempchar1 *nctemp8963;
static struct nctempchar1 nctemp8964 = {{ 10}, (char*)"iconstant\0"};
nctemp8963=&nctemp8964;
nctempchar1* nctemp8961= nctemp8963;
int nctemp8965=LibeStrcmp(nctemp8953,nctemp8961);
struct tree* nctemp8971= np;
struct tree* nctemp8973=PtreeMvsister(nctemp8971);
struct tree* nctemp8969= nctemp8973;
nctempchar1* nctemp8974=PtreeGetdef(nctemp8969);
nctempchar1* nctemp8967= nctemp8974;
struct nctempchar1 *nctemp8977;
static struct nctempchar1 nctemp8978 = {{ 2}, (char*)"0\0"};
nctemp8977=&nctemp8978;
nctempchar1* nctemp8975= nctemp8977;
int nctemp8979=LibeStrcmp(nctemp8967,nctemp8975);
int nctemp8950 = (nctemp8965 && nctemp8979);
if(nctemp8950)
{
struct tree* nctemp8981= p;
nctempchar1* nctemp8983= lval;
int nctemp8986=CodeEs(nctemp8981,nctemp8983);
struct tree* nctemp8988= p;
struct nctempchar1 *nctemp8992;
static struct nctempchar1 nctemp8993 = {{ 3}, (char*)"=(\0"};
nctemp8992=&nctemp8993;
nctempchar1* nctemp8990= nctemp8992;
int nctemp8994=CodeEs(nctemp8988,nctemp8990);
struct tree* nctemp8996= p;
nctempchar1* nctemp8998= rval;
int nctemp9001=CodeEs(nctemp8996,nctemp8998);
struct tree* nctemp9003= p;
struct nctempchar1 *nctemp9007;
static struct nctempchar1 nctemp9008 = {{ 5}, (char*)");\n\0"};
nctemp9007=&nctemp9008;
nctempchar1* nctemp9005= nctemp9007;
int nctemp9009=CodeEs(nctemp9003,nctemp9005);
return lval;
}
else{
struct tree* nctemp9013= p;
nctempchar1* nctemp9015= lval;
int nctemp9018=CodeEs(nctemp9013,nctemp9015);
struct tree* nctemp9020= p;
struct nctempchar1 *nctemp9024;
static struct nctempchar1 nctemp9025 = {{ 2}, (char*)"=\0"};
nctemp9024=&nctemp9025;
nctempchar1* nctemp9022= nctemp9024;
int nctemp9026=CodeEs(nctemp9020,nctemp9022);
struct tree* nctemp9028= p;
nctempchar1* nctemp9030= rval;
int nctemp9033=CodeEs(nctemp9028,nctemp9030);
struct tree* nctemp9035= p;
struct nctempchar1 *nctemp9039;
static struct nctempchar1 nctemp9040 = {{ 4}, (char*)";\n\0"};
nctemp9039=&nctemp9040;
nctempchar1* nctemp9037= nctemp9039;
int nctemp9041=CodeEs(nctemp9035,nctemp9037);
return lval;
}
}
else{
struct tree* nctemp9045= p;
nctempchar1* nctemp9047= lval;
int nctemp9050=CodeEs(nctemp9045,nctemp9047);
struct tree* nctemp9052= p;
struct nctempchar1 *nctemp9056;
static struct nctempchar1 nctemp9057 = {{ 2}, (char*)" \0"};
nctemp9056=&nctemp9057;
nctempchar1* nctemp9054= nctemp9056;
int nctemp9058=CodeEs(nctemp9052,nctemp9054);
struct tree* nctemp9060= p;
struct nctempchar1 *nctemp9064;
static struct nctempchar1 nctemp9065 = {{ 2}, (char*)"=\0"};
nctemp9064=&nctemp9065;
nctempchar1* nctemp9062= nctemp9064;
int nctemp9066=CodeEs(nctemp9060,nctemp9062);
struct tree* nctemp9068= p;
nctempchar1* nctemp9070= rval;
int nctemp9073=CodeEs(nctemp9068,nctemp9070);
struct tree* nctemp9075= p;
struct nctempchar1 *nctemp9079;
static struct nctempchar1 nctemp9080 = {{ 4}, (char*)";\n\0"};
nctemp9079=&nctemp9080;
nctempchar1* nctemp9077= nctemp9079;
int nctemp9081=CodeEs(nctemp9075,nctemp9077);
return lval;
}
}
}
else{
struct tree* nctemp9092= p;
nctempchar1* nctemp9094=PtreeGetdef(nctemp9092);
nctempchar1* nctemp9090= nctemp9094;
struct nctempchar1 *nctemp9097;
static struct nctempchar1 nctemp9098 = {{ 3}, (char*)"==\0"};
nctemp9097=&nctemp9098;
nctempchar1* nctemp9095= nctemp9097;
int nctemp9099=LibeStrcmp(nctemp9090,nctemp9095);
int nctemp9087 = (nctemp9099 ==1);
struct tree* nctemp9107= p;
nctempchar1* nctemp9109=PtreeGetdef(nctemp9107);
nctempchar1* nctemp9105= nctemp9109;
struct nctempchar1 *nctemp9112;
static struct nctempchar1 nctemp9113 = {{ 3}, (char*)"!=\0"};
nctemp9112=&nctemp9113;
nctempchar1* nctemp9110= nctemp9112;
int nctemp9114=LibeStrcmp(nctemp9105,nctemp9110);
int nctemp9102 = (nctemp9114 ==1);
int nctemp9084 = (nctemp9087 || nctemp9102);
if(nctemp9084)
{
struct tree* nctemp9121= np;
nctempchar1* nctemp9123=PtreeGetref(nctemp9121);
nctempchar1* nctemp9119= nctemp9123;
struct nctempchar1 *nctemp9126;
static struct nctempchar1 nctemp9127 = {{ 5}, (char*)"aref\0"};
nctemp9126=&nctemp9127;
nctempchar1* nctemp9124= nctemp9126;
int nctemp9128=LibeStrcmp(nctemp9119,nctemp9124);
int nctemp9116 = (nctemp9128 ==1);
if(nctemp9116)
{
sp = np;
struct tree* nctemp9137= np;
struct tree* nctemp9139=PtreeMvsister(nctemp9137);
struct tree* nctemp9135= nctemp9139;
nctempchar1* nctemp9140=PtreeGetname(nctemp9135);
nctempchar1* nctemp9133= nctemp9140;
struct nctempchar1 *nctemp9143;
static struct nctempchar1 nctemp9144 = {{ 10}, (char*)"iconstant\0"};
nctemp9143=&nctemp9144;
nctempchar1* nctemp9141= nctemp9143;
int nctemp9145=LibeStrcmp(nctemp9133,nctemp9141);
struct tree* nctemp9151= np;
struct tree* nctemp9153=PtreeMvsister(nctemp9151);
struct tree* nctemp9149= nctemp9153;
nctempchar1* nctemp9154=PtreeGetdef(nctemp9149);
nctempchar1* nctemp9147= nctemp9154;
struct nctempchar1 *nctemp9157;
static struct nctempchar1 nctemp9158 = {{ 2}, (char*)"0\0"};
nctemp9157=&nctemp9158;
nctempchar1* nctemp9155= nctemp9157;
int nctemp9159=LibeStrcmp(nctemp9147,nctemp9155);
int nctemp9130 = (nctemp9145 && nctemp9159);
if(nctemp9130)
{
struct tree* nctemp9161= p;
struct nctempchar1 *nctemp9165;
static struct nctempchar1 nctemp9166 = {{ 7}, (char*)"nctemp\0"};
nctemp9165=&nctemp9166;
nctempchar1* nctemp9163= nctemp9165;
int nctemp9167=CodeEs(nctemp9161,nctemp9163);
struct tree* nctemp9169= p;
struct tree* nctemp9173= sp;
nctempchar1* nctemp9175=PtreeGetype(nctemp9173);
nctempchar1* nctemp9171= nctemp9175;
int nctemp9176=CodeEs(nctemp9169,nctemp9171);
struct tree* nctemp9180= sp;
int nctemp9182=PtreeGetrank(nctemp9180);
int nctemp9178= nctemp9182;
int nctemp9183=CodeEd(nctemp9178);
struct tree* nctemp9185= p;
struct nctempchar1 *nctemp9189;
static struct nctempchar1 nctemp9190 = {{ 3}, (char*)" *\0"};
nctemp9189=&nctemp9190;
nctempchar1* nctemp9187= nctemp9189;
int nctemp9191=CodeEs(nctemp9185,nctemp9187);
struct tree* nctemp9193= p;
nctempchar1* nctemp9195= tempi;
int nctemp9198=CodeEs(nctemp9193,nctemp9195);
struct tree* nctemp9200= p;
struct nctempchar1 *nctemp9204;
static struct nctempchar1 nctemp9205 = {{ 3}, (char*)" =\0"};
nctemp9204=&nctemp9205;
nctempchar1* nctemp9202= nctemp9204;
int nctemp9206=CodeEs(nctemp9200,nctemp9202);
struct tree* nctemp9208= p;
nctempchar1* nctemp9210= lval;
int nctemp9213=CodeEs(nctemp9208,nctemp9210);
struct tree* nctemp9215= p;
struct nctempchar1 *nctemp9219;
static struct nctempchar1 nctemp9220 = {{ 4}, (char*)";\n\0"};
nctemp9219=&nctemp9220;
nctempchar1* nctemp9217= nctemp9219;
int nctemp9221=CodeEs(nctemp9215,nctemp9217);
struct tree* nctemp9223= p;
nctempchar1* nctemp9225= type;
int nctemp9228=CodeEs(nctemp9223,nctemp9225);
struct tree* nctemp9230= p;
struct nctempchar1 *nctemp9234;
static struct nctempchar1 nctemp9235 = {{ 2}, (char*)" \0"};
nctemp9234=&nctemp9235;
nctempchar1* nctemp9232= nctemp9234;
int nctemp9236=CodeEs(nctemp9230,nctemp9232);
struct tree* nctemp9238= p;
nctempchar1* nctemp9240= tempr;
int nctemp9243=CodeEs(nctemp9238,nctemp9240);
struct tree* nctemp9245= p;
struct nctempchar1 *nctemp9249;
static struct nctempchar1 nctemp9250 = {{ 4}, (char*)" =(\0"};
nctemp9249=&nctemp9250;
nctempchar1* nctemp9247= nctemp9249;
int nctemp9251=CodeEs(nctemp9245,nctemp9247);
struct tree* nctemp9253= p;
nctempchar1* nctemp9255= tempi;
int nctemp9258=CodeEs(nctemp9253,nctemp9255);
struct tree* nctemp9260= p;
struct tree* nctemp9264= p;
nctempchar1* nctemp9266=PtreeGetdef(nctemp9264);
nctempchar1* nctemp9262= nctemp9266;
int nctemp9267=CodeEs(nctemp9260,nctemp9262);
struct tree* nctemp9269= p;
nctempchar1* nctemp9271= rval;
int nctemp9274=CodeEs(nctemp9269,nctemp9271);
struct tree* nctemp9276= p;
struct nctempchar1 *nctemp9280;
static struct nctempchar1 nctemp9281 = {{ 5}, (char*)");\n\0"};
nctemp9280=&nctemp9281;
nctempchar1* nctemp9278= nctemp9280;
int nctemp9282=CodeEs(nctemp9276,nctemp9278);
return tempr;
}
else{
struct tree* nctemp9286= p;
nctempchar1* nctemp9288= type;
int nctemp9291=CodeEs(nctemp9286,nctemp9288);
struct tree* nctemp9293= p;
struct nctempchar1 *nctemp9297;
static struct nctempchar1 nctemp9298 = {{ 2}, (char*)" \0"};
nctemp9297=&nctemp9298;
nctempchar1* nctemp9295= nctemp9297;
int nctemp9299=CodeEs(nctemp9293,nctemp9295);
struct tree* nctemp9301= p;
nctempchar1* nctemp9303= tempr;
int nctemp9306=CodeEs(nctemp9301,nctemp9303);
struct tree* nctemp9308= p;
struct nctempchar1 *nctemp9312;
static struct nctempchar1 nctemp9313 = {{ 5}, (char*)" = (\0"};
nctemp9312=&nctemp9313;
nctempchar1* nctemp9310= nctemp9312;
int nctemp9314=CodeEs(nctemp9308,nctemp9310);
struct tree* nctemp9316= p;
nctempchar1* nctemp9318= lval;
int nctemp9321=CodeEs(nctemp9316,nctemp9318);
struct tree* nctemp9323= p;
struct tree* nctemp9327= p;
nctempchar1* nctemp9329=PtreeGetdef(nctemp9327);
nctempchar1* nctemp9325= nctemp9329;
int nctemp9330=CodeEs(nctemp9323,nctemp9325);
struct tree* nctemp9332= p;
nctempchar1* nctemp9334= rval;
int nctemp9337=CodeEs(nctemp9332,nctemp9334);
struct tree* nctemp9339= p;
struct nctempchar1 *nctemp9343;
static struct nctempchar1 nctemp9344 = {{ 5}, (char*)");\n\0"};
nctemp9343=&nctemp9344;
nctempchar1* nctemp9341= nctemp9343;
int nctemp9345=CodeEs(nctemp9339,nctemp9341);
return lval;
}
}
else{
struct tree* nctemp9349= p;
nctempchar1* nctemp9351= type;
int nctemp9354=CodeEs(nctemp9349,nctemp9351);
struct tree* nctemp9356= p;
struct nctempchar1 *nctemp9360;
static struct nctempchar1 nctemp9361 = {{ 2}, (char*)" \0"};
nctemp9360=&nctemp9361;
nctempchar1* nctemp9358= nctemp9360;
int nctemp9362=CodeEs(nctemp9356,nctemp9358);
struct tree* nctemp9364= p;
nctempchar1* nctemp9366= tempr;
int nctemp9369=CodeEs(nctemp9364,nctemp9366);
struct tree* nctemp9371= p;
struct nctempchar1 *nctemp9375;
static struct nctempchar1 nctemp9376 = {{ 5}, (char*)" = (\0"};
nctemp9375=&nctemp9376;
nctempchar1* nctemp9373= nctemp9375;
int nctemp9377=CodeEs(nctemp9371,nctemp9373);
struct tree* nctemp9379= p;
nctempchar1* nctemp9381= lval;
int nctemp9384=CodeEs(nctemp9379,nctemp9381);
struct tree* nctemp9386= p;
struct nctempchar1 *nctemp9390;
static struct nctempchar1 nctemp9391 = {{ 2}, (char*)" \0"};
nctemp9390=&nctemp9391;
nctempchar1* nctemp9388= nctemp9390;
int nctemp9392=CodeEs(nctemp9386,nctemp9388);
struct tree* nctemp9394= p;
struct tree* nctemp9398= p;
nctempchar1* nctemp9400=PtreeGetdef(nctemp9398);
nctempchar1* nctemp9396= nctemp9400;
int nctemp9401=CodeEs(nctemp9394,nctemp9396);
struct tree* nctemp9403= p;
nctempchar1* nctemp9405= rval;
int nctemp9408=CodeEs(nctemp9403,nctemp9405);
struct tree* nctemp9410= p;
struct nctempchar1 *nctemp9414;
static struct nctempchar1 nctemp9415 = {{ 5}, (char*)");\n\0"};
nctemp9414=&nctemp9415;
nctempchar1* nctemp9412= nctemp9414;
int nctemp9416=CodeEs(nctemp9410,nctemp9412);
return tempr;
}
}
else{
struct tree* nctemp9420= p;
nctempchar1* nctemp9422= type;
int nctemp9425=CodeEs(nctemp9420,nctemp9422);
struct tree* nctemp9427= p;
struct nctempchar1 *nctemp9431;
static struct nctempchar1 nctemp9432 = {{ 2}, (char*)" \0"};
nctemp9431=&nctemp9432;
nctempchar1* nctemp9429= nctemp9431;
int nctemp9433=CodeEs(nctemp9427,nctemp9429);
struct tree* nctemp9435= p;
nctempchar1* nctemp9437= tempr;
int nctemp9440=CodeEs(nctemp9435,nctemp9437);
struct tree* nctemp9442= p;
struct nctempchar1 *nctemp9446;
static struct nctempchar1 nctemp9447 = {{ 5}, (char*)" = (\0"};
nctemp9446=&nctemp9447;
nctempchar1* nctemp9444= nctemp9446;
int nctemp9448=CodeEs(nctemp9442,nctemp9444);
struct tree* nctemp9450= p;
nctempchar1* nctemp9452= lval;
int nctemp9455=CodeEs(nctemp9450,nctemp9452);
struct tree* nctemp9457= p;
struct nctempchar1 *nctemp9461;
static struct nctempchar1 nctemp9462 = {{ 2}, (char*)" \0"};
nctemp9461=&nctemp9462;
nctempchar1* nctemp9459= nctemp9461;
int nctemp9463=CodeEs(nctemp9457,nctemp9459);
struct tree* nctemp9465= p;
struct tree* nctemp9469= p;
nctempchar1* nctemp9471=PtreeGetdef(nctemp9469);
nctempchar1* nctemp9467= nctemp9471;
int nctemp9472=CodeEs(nctemp9465,nctemp9467);
struct tree* nctemp9474= p;
struct nctempchar1 *nctemp9478;
static struct nctempchar1 nctemp9479 = {{ 2}, (char*)" \0"};
nctemp9478=&nctemp9479;
nctempchar1* nctemp9476= nctemp9478;
int nctemp9480=CodeEs(nctemp9474,nctemp9476);
struct tree* nctemp9482= p;
nctempchar1* nctemp9484= rval;
int nctemp9487=CodeEs(nctemp9482,nctemp9484);
struct tree* nctemp9489= p;
struct nctempchar1 *nctemp9493;
static struct nctempchar1 nctemp9494 = {{ 5}, (char*)");\n\0"};
nctemp9493=&nctemp9494;
nctempchar1* nctemp9491= nctemp9493;
int nctemp9495=CodeEs(nctemp9489,nctemp9491);
return tempr;
}
}
}
}
else{
struct tree* nctemp9499= p;
nctempchar1* nctemp9501=CodeUnexpr(nctemp9499);
return nctemp9501;
}
}
int CodeDimprod (struct tree* p,nctempchar1 *name,int n)
{
int j;
for(j = 0;j < (n - 1);j = (j + 1)){
struct tree* nctemp9503= p;
nctempchar1* nctemp9505= name;
int nctemp9508=CodeEs(nctemp9503,nctemp9505);
struct tree* nctemp9510= p;
struct nctempchar1 *nctemp9514;
static struct nctempchar1 nctemp9515 = {{ 5}, (char*)"->d[\0"};
nctemp9514=&nctemp9515;
nctempchar1* nctemp9512= nctemp9514;
int nctemp9516=CodeEs(nctemp9510,nctemp9512);
int nctemp9518= j;
int nctemp9520=CodeEd(nctemp9518);
struct tree* nctemp9522= p;
struct nctempchar1 *nctemp9526;
static struct nctempchar1 nctemp9527 = {{ 2}, (char*)"]\0"};
nctemp9526=&nctemp9527;
nctempchar1* nctemp9524= nctemp9526;
int nctemp9528=CodeEs(nctemp9522,nctemp9524);
struct tree* nctemp9530= p;
struct nctempchar1 *nctemp9534;
static struct nctempchar1 nctemp9535 = {{ 2}, (char*)"*\0"};
nctemp9534=&nctemp9535;
nctempchar1* nctemp9532= nctemp9534;
int nctemp9536=CodeEs(nctemp9530,nctemp9532);
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
struct tree* nctemp9543= p;
nctempchar1* nctemp9545=PtreeGetdef(nctemp9543);
name=nctemp9545;
nctempchar1* nctemp9550= name;
struct symbol* nctemp9553=SymLook(nctemp9550);
tp =nctemp9553;
int nctemp9554 = (tp ==0);
if(nctemp9554)
{
nctempchar1* nctemp9559= name;
int nctemp9562=CodeError(nctemp9559);
}
struct symbol* nctemp9567= tp;
int nctemp9569=SymGetrank(nctemp9567);
rank =nctemp9569;
struct tree* nctemp9574= p;
struct tree* nctemp9576=PtreeMvchild(nctemp9574);
sp =nctemp9576;
int nctemp9577 = (sp ==0);
if(nctemp9577)
{
struct tree* nctemp9582= p;
struct tree* nctemp9586= p;
nctempchar1* nctemp9588=PtreeGetdef(nctemp9586);
nctempchar1* nctemp9584= nctemp9588;
int nctemp9589=CodeEs(nctemp9582,nctemp9584);
return 1;
}
else{
struct tree* nctemp9596= sp;
nctempchar1* nctemp9598=PtreeGetname(nctemp9596);
nctempchar1* nctemp9594= nctemp9598;
struct nctempchar1 *nctemp9601;
static struct nctempchar1 nctemp9602 = {{ 9}, (char*)"exprlist\0"};
nctemp9601=&nctemp9602;
nctempchar1* nctemp9599= nctemp9601;
int nctemp9603=LibeStrcmp(nctemp9594,nctemp9599);
int nctemp9591 = (nctemp9603 ==0);
if(nctemp9591)
{
struct tree* nctemp9606= p;
struct tree* nctemp9610= p;
nctempchar1* nctemp9612=PtreeGetdef(nctemp9610);
nctempchar1* nctemp9608= nctemp9612;
int nctemp9613=CodeEs(nctemp9606,nctemp9608);
return 1;
}
}
p = sp;
struct tree* nctemp9619= p;
struct tree* nctemp9621=PtreeMvchild(nctemp9619);
p =nctemp9621;
struct tree* nctemp9623= p;
nctempchar1* nctemp9625= name;
int nctemp9628=CodeEs(nctemp9623,nctemp9625);
struct tree* nctemp9630= p;
struct nctempchar1 *nctemp9634;
static struct nctempchar1 nctemp9635 = {{ 4}, (char*)"->a\0"};
nctemp9634=&nctemp9635;
nctempchar1* nctemp9632= nctemp9634;
int nctemp9636=CodeEs(nctemp9630,nctemp9632);
struct tree* nctemp9638= p;
struct nctempchar1 *nctemp9642;
static struct nctempchar1 nctemp9643 = {{ 2}, (char*)"[\0"};
nctemp9642=&nctemp9643;
nctempchar1* nctemp9640= nctemp9642;
int nctemp9644=CodeEs(nctemp9638,nctemp9640);
q = p;
nctempchar1 *nctemp9646 =qname;
int nctemp9645 =(nctemp9646!=0);
if(nctemp9645)
{
nctempchar1* nctemp9655= qname;
nctempchar1* nctemp9658= name;
nctempchar1* nctemp9661=LibeStradd(nctemp9655,nctemp9658);
qname=nctemp9661;
}
else{
nctempchar1* nctemp9667= name;
nctempchar1* nctemp9670=LibeStrsave(nctemp9667);
qname=nctemp9670;
}
for(i = 0;i < rank;i = (i + 1)){
int nctemp9671 = (i ==0);
if(nctemp9671)
{
struct tree* nctemp9676= q;
int nctemp9678=CodeSexpr(nctemp9676);
}
else{
struct tree* nctemp9683= q;
struct tree* nctemp9685=PtreeMvsister(nctemp9683);
q =nctemp9685;
struct tree* nctemp9687= p;
struct nctempchar1 *nctemp9691;
static struct nctempchar1 nctemp9692 = {{ 2}, (char*)"+\0"};
nctemp9691=&nctemp9692;
nctempchar1* nctemp9689= nctemp9691;
int nctemp9693=CodeEs(nctemp9687,nctemp9689);
struct tree* nctemp9695= p;
nctempchar1* nctemp9697= qname;
int nctemp9705 = i + 1;
int nctemp9700= nctemp9705;
int nctemp9706=CodeDimprod(nctemp9695,nctemp9697,nctemp9700);
struct tree* nctemp9708= q;
int nctemp9710=CodeSexpr(nctemp9708);
}
}
struct tree* nctemp9712= p;
struct nctempchar1 *nctemp9716;
static struct nctempchar1 nctemp9717 = {{ 2}, (char*)"]\0"};
nctemp9716=&nctemp9717;
nctempchar1* nctemp9714= nctemp9716;
int nctemp9718=CodeEs(nctemp9712,nctemp9714);
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
struct tree* nctemp9728= p;
nctempchar1* nctemp9730=PtreeGetarray(nctemp9728);
nctempchar1* nctemp9726= nctemp9730;
struct nctempchar1 *nctemp9733;
static struct nctempchar1 nctemp9734 = {{ 6}, (char*)"array\0"};
nctemp9733=&nctemp9734;
nctempchar1* nctemp9731= nctemp9733;
int nctemp9735=LibeStrcmp(nctemp9726,nctemp9731);
int nctemp9723 = (nctemp9735 ==1);
if(nctemp9723)
{
struct tree* nctemp9738= p;
nctempchar1* nctemp9740= qname;
int nctemp9743=CodeSarray(nctemp9738,nctemp9740);
struct tree* nctemp9748= p;
struct tree* nctemp9750=PtreeMvchild(nctemp9748);
np =nctemp9750;
int nctemp9751 = (np ==0);
if(nctemp9751)
{
return 1;
}
struct tree* nctemp9760= np;
struct tree* nctemp9762=PtreeMvsister(nctemp9760);
sp =nctemp9762;
int nctemp9763 = (sp ==0);
if(nctemp9763)
{
return 1;
}
struct tree* nctemp9769= p;
struct nctempchar1 *nctemp9773;
static struct nctempchar1 nctemp9774 = {{ 2}, (char*)".\0"};
nctemp9773=&nctemp9774;
nctempchar1* nctemp9771= nctemp9773;
int nctemp9775=CodeEs(nctemp9769,nctemp9771);
struct tree* nctemp9783= p;
nctempchar1* nctemp9785=PtreeGetdef(nctemp9783);
nctempchar1* nctemp9781= nctemp9785;
struct nctempchar1 *nctemp9788;
static struct nctempchar1 nctemp9789 = {{ 2}, (char*)".\0"};
nctemp9788=&nctemp9789;
nctempchar1* nctemp9786= nctemp9788;
nctempchar1* nctemp9790=LibeStradd(nctemp9781,nctemp9786);
qname=nctemp9790;
}
else{
struct tree* nctemp9792= p;
struct tree* nctemp9796= p;
nctempchar1* nctemp9798=PtreeGetdef(nctemp9796);
nctempchar1* nctemp9794= nctemp9798;
int nctemp9799=CodeEs(nctemp9792,nctemp9794);
struct tree* nctemp9807= p;
nctempchar1* nctemp9809=PtreeGetdef(nctemp9807);
nctempchar1* nctemp9805= nctemp9809;
struct nctempchar1 *nctemp9812;
static struct nctempchar1 nctemp9813 = {{ 3}, (char*)"->\0"};
nctemp9812=&nctemp9813;
nctempchar1* nctemp9810= nctemp9812;
nctempchar1* nctemp9814=LibeStradd(nctemp9805,nctemp9810);
qname=nctemp9814;
struct tree* nctemp9819= p;
struct tree* nctemp9821=PtreeMvchild(nctemp9819);
sp =nctemp9821;
int nctemp9822 = (sp ==0);
if(nctemp9822)
{
return 1;
}
struct tree* nctemp9828= p;
struct nctempchar1 *nctemp9832;
static struct nctempchar1 nctemp9833 = {{ 3}, (char*)"->\0"};
nctemp9832=&nctemp9833;
nctempchar1* nctemp9830= nctemp9832;
int nctemp9834=CodeEs(nctemp9828,nctemp9830);
}
struct tree* nctemp9840= sp;
nctempchar1* nctemp9842=PtreeGetarray(nctemp9840);
nctempchar1* nctemp9838= nctemp9842;
struct nctempchar1 *nctemp9845;
static struct nctempchar1 nctemp9846 = {{ 6}, (char*)"array\0"};
nctemp9845=&nctemp9846;
nctempchar1* nctemp9843= nctemp9845;
int nctemp9847=LibeStrcmp(nctemp9838,nctemp9843);
int nctemp9835 = (nctemp9847 ==1);
if(nctemp9835)
{
tp = SymLtp;
up = SymEtp;
struct tree* nctemp9855= p;
nctempchar1* nctemp9857=PtreeGetdef(nctemp9855);
nctempchar1* nctemp9853= nctemp9857;
struct symbol* nctemp9858=SymLook(nctemp9853);
uup =nctemp9858;
struct symbol* nctemp9865= uup;
nctempchar1* nctemp9867=SymGetype(nctemp9865);
nctempchar1* nctemp9863= nctemp9867;
struct symbol* nctemp9868=SymLook(nctemp9863);
uup =nctemp9868;
struct symbol* nctemp9873= uup;
struct symbol* nctemp9875=SymGetable(nctemp9873);
SymLtp =nctemp9875;
struct tree* nctemp9877= sp;
nctempchar1* nctemp9879= qname;
int nctemp9882=CodeSarray(nctemp9877,nctemp9879);
RunFree(qname->a);
RunFree(qname);
SymLtp = tp;
SymEtp = up;
}
else{
struct tree* nctemp9887= p;
struct tree* nctemp9891= sp;
nctempchar1* nctemp9893=PtreeGetdef(nctemp9891);
nctempchar1* nctemp9889= nctemp9893;
int nctemp9894=CodeEs(nctemp9887,nctemp9889);
}
return 1;
}
int CodeSident (struct tree* p)
{
nctempchar1 *qname;
qname  = 0;
struct tree* nctemp9901= p;
nctempchar1* nctemp9903=PtreeGetstruct(nctemp9901);
nctempchar1* nctemp9899= nctemp9903;
struct nctempchar1 *nctemp9906;
static struct nctempchar1 nctemp9907 = {{ 7}, (char*)"struct\0"};
nctemp9906=&nctemp9907;
nctempchar1* nctemp9904= nctemp9906;
int nctemp9908=LibeStrcmp(nctemp9899,nctemp9904);
int nctemp9896 = (nctemp9908 ==1);
if(nctemp9896)
{
struct tree* nctemp9911= p;
int nctemp9913=CodeIdstruct(nctemp9911);
}
else{
struct tree* nctemp9919= p;
nctempchar1* nctemp9921=PtreeGetarray(nctemp9919);
nctempchar1* nctemp9917= nctemp9921;
struct nctempchar1 *nctemp9924;
static struct nctempchar1 nctemp9925 = {{ 6}, (char*)"array\0"};
nctemp9924=&nctemp9925;
nctempchar1* nctemp9922= nctemp9924;
int nctemp9926=LibeStrcmp(nctemp9917,nctemp9922);
int nctemp9914 = (nctemp9926 ==1);
if(nctemp9914)
{
struct tree* nctemp9929= p;
nctempchar1* nctemp9931= qname;
int nctemp9934=CodeSarray(nctemp9929,nctemp9931);
return 1;
}
else{
struct tree* nctemp9937= p;
struct tree* nctemp9941= p;
nctempchar1* nctemp9943=PtreeGetdef(nctemp9941);
nctempchar1* nctemp9939= nctemp9943;
int nctemp9944=CodeEs(nctemp9937,nctemp9939);
return 1;
}
}
return 1;
}
int CodeSfcall (struct tree* p)
{
struct symbol* tp;
struct tree* sp;
struct tree* nctemp9953= p;
nctempchar1* nctemp9955=PtreeGetdef(nctemp9953);
nctempchar1* nctemp9951= nctemp9955;
struct symbol* nctemp9956= SymEtp;
struct symbol* nctemp9958=SymLookup(nctemp9951,nctemp9956);
tp =nctemp9958;
struct tree* nctemp9963= p;
struct tree* nctemp9965=PtreeMvchild(nctemp9963);
sp =nctemp9965;
int nctemp9966 = (sp !=0);
if(nctemp9966)
{
struct tree* nctemp9975= sp;
nctempchar1* nctemp9977=PtreeGetname(nctemp9975);
nctempchar1* nctemp9973= nctemp9977;
struct nctempchar1 *nctemp9980;
static struct nctempchar1 nctemp9981 = {{ 9}, (char*)"exprlist\0"};
nctemp9980=&nctemp9981;
nctempchar1* nctemp9978= nctemp9980;
int nctemp9982=LibeStrcmp(nctemp9973,nctemp9978);
int nctemp9970 = (nctemp9982 ==1);
if(nctemp9970)
{
struct tree* nctemp9988= sp;
struct tree* nctemp9990=PtreeMvchild(nctemp9988);
sp =nctemp9990;
}
}
struct tree* nctemp9992= p;
struct symbol* nctemp9996= tp;
nctempchar1* nctemp9998=SymGetname(nctemp9996);
nctempchar1* nctemp9994= nctemp9998;
int nctemp9999=CodeEs(nctemp9992,nctemp9994);
struct tree* nctemp10001= p;
struct nctempchar1 *nctemp10005;
static struct nctempchar1 nctemp10006 = {{ 2}, (char*)"(\0"};
nctemp10005=&nctemp10006;
nctempchar1* nctemp10003= nctemp10005;
int nctemp10007=CodeEs(nctemp10001,nctemp10003);
int nctemp10008 = (sp !=0);
int nctemp10012=nctemp10008;
while(nctemp10012)
{{
struct tree* nctemp10014= sp;
int nctemp10016=CodeSexpr(nctemp10014);
struct tree* nctemp10024= sp;
struct tree* nctemp10026=PtreeMvsister(nctemp10024);
sp =nctemp10026;
int nctemp10017 = (sp !=0);
if(nctemp10017)
{
struct tree* nctemp10029= p;
struct nctempchar1 *nctemp10033;
static struct nctempchar1 nctemp10034 = {{ 2}, (char*)",\0"};
nctemp10033=&nctemp10034;
nctempchar1* nctemp10031= nctemp10033;
int nctemp10035=CodeEs(nctemp10029,nctemp10031);
}
}
int nctemp10036 = (sp !=0);
nctemp10012=nctemp10036;}struct tree* nctemp10041= p;
struct nctempchar1 *nctemp10045;
static struct nctempchar1 nctemp10046 = {{ 2}, (char*)")\0"};
nctemp10045=&nctemp10046;
nctempchar1* nctemp10043= nctemp10045;
int nctemp10047=CodeEs(nctemp10041,nctemp10043);
return 1;
}
int CodeScast (struct tree* p)
{
struct tree* np;
struct tree* sp;
struct tree* nctemp10054= p;
nctempchar1* nctemp10056=PtreeGetname(nctemp10054);
nctempchar1* nctemp10052= nctemp10056;
struct nctempchar1 *nctemp10059;
static struct nctempchar1 nctemp10060 = {{ 5}, (char*)"cast\0"};
nctemp10059=&nctemp10060;
nctempchar1* nctemp10057= nctemp10059;
int nctemp10061=LibeStrcmp(nctemp10052,nctemp10057);
int nctemp10049 = (nctemp10061 ==1);
if(nctemp10049)
{
struct tree* nctemp10067= p;
struct tree* nctemp10069=PtreeMvchild(nctemp10067);
np =nctemp10069;
struct tree* nctemp10074= np;
struct tree* nctemp10076=PtreeMvsister(nctemp10074);
sp =nctemp10076;
struct tree* nctemp10078= p;
struct nctempchar1 *nctemp10082;
static struct nctempchar1 nctemp10083 = {{ 2}, (char*)"(\0"};
nctemp10082=&nctemp10083;
nctempchar1* nctemp10080= nctemp10082;
int nctemp10084=CodeEs(nctemp10078,nctemp10080);
struct tree* nctemp10090= np;
nctempchar1* nctemp10092=PtreeGetstruct(nctemp10090);
nctempchar1* nctemp10088= nctemp10092;
struct nctempchar1 *nctemp10095;
static struct nctempchar1 nctemp10096 = {{ 7}, (char*)"struct\0"};
nctemp10095=&nctemp10096;
nctempchar1* nctemp10093= nctemp10095;
int nctemp10097=LibeStrcmp(nctemp10088,nctemp10093);
int nctemp10085 = (nctemp10097 ==1);
if(nctemp10085)
{
struct tree* nctemp10100= p;
struct nctempchar1 *nctemp10104;
static struct nctempchar1 nctemp10105 = {{ 8}, (char*)"struct \0"};
nctemp10104=&nctemp10105;
nctempchar1* nctemp10102= nctemp10104;
int nctemp10106=CodeEs(nctemp10100,nctemp10102);
}
struct tree* nctemp10108= p;
struct tree* nctemp10112= np;
nctempchar1* nctemp10114=PtreeGetdef(nctemp10112);
nctempchar1* nctemp10110= nctemp10114;
int nctemp10115=CodeEs(nctemp10108,nctemp10110);
struct tree* nctemp10121= np;
nctempchar1* nctemp10123=PtreeGetstruct(nctemp10121);
nctempchar1* nctemp10119= nctemp10123;
struct nctempchar1 *nctemp10126;
static struct nctempchar1 nctemp10127 = {{ 6}, (char*)"array\0"};
nctemp10126=&nctemp10127;
nctempchar1* nctemp10124= nctemp10126;
int nctemp10128=LibeStrcmp(nctemp10119,nctemp10124);
int nctemp10116 = (nctemp10128 ==1);
if(nctemp10116)
{
struct tree* nctemp10131= p;
struct nctempchar1 *nctemp10135;
static struct nctempchar1 nctemp10136 = {{ 2}, (char*)"*\0"};
nctemp10135=&nctemp10136;
nctempchar1* nctemp10133= nctemp10135;
int nctemp10137=CodeEs(nctemp10131,nctemp10133);
}
struct tree* nctemp10139= p;
struct nctempchar1 *nctemp10143;
static struct nctempchar1 nctemp10144 = {{ 3}, (char*)")(\0"};
nctemp10143=&nctemp10144;
nctempchar1* nctemp10141= nctemp10143;
int nctemp10145=CodeEs(nctemp10139,nctemp10141);
struct tree* nctemp10147= sp;
int nctemp10149=CodeSexpr(nctemp10147);
struct tree* nctemp10151= p;
struct nctempchar1 *nctemp10155;
static struct nctempchar1 nctemp10156 = {{ 2}, (char*)")\0"};
nctemp10155=&nctemp10156;
nctempchar1* nctemp10153= nctemp10155;
int nctemp10157=CodeEs(nctemp10151,nctemp10153);
}
return 1;
}
int CodeSprimexpr (struct tree* p)
{
struct tree* nctemp10164= p;
nctempchar1* nctemp10166=PtreeGetname(nctemp10164);
nctempchar1* nctemp10162= nctemp10166;
struct nctempchar1 *nctemp10169;
static struct nctempchar1 nctemp10170 = {{ 11}, (char*)"identifier\0"};
nctemp10169=&nctemp10170;
nctempchar1* nctemp10167= nctemp10169;
int nctemp10171=LibeStrcmp(nctemp10162,nctemp10167);
int nctemp10159 = (nctemp10171 ==1);
if(nctemp10159)
{
struct tree* nctemp10174= p;
int nctemp10176=CodeSident(nctemp10174);
}
else{
struct tree* nctemp10182= p;
nctempchar1* nctemp10184=PtreeGetname(nctemp10182);
nctempchar1* nctemp10180= nctemp10184;
struct nctempchar1 *nctemp10187;
static struct nctempchar1 nctemp10188 = {{ 6}, (char*)"fcall\0"};
nctemp10187=&nctemp10188;
nctempchar1* nctemp10185= nctemp10187;
int nctemp10189=LibeStrcmp(nctemp10180,nctemp10185);
int nctemp10177 = (nctemp10189 ==1);
if(nctemp10177)
{
struct tree* nctemp10192= p;
int nctemp10194=CodeSfcall(nctemp10192);
}
else{
struct tree* nctemp10200= p;
nctempchar1* nctemp10202=PtreeGetname(nctemp10200);
nctempchar1* nctemp10198= nctemp10202;
struct nctempchar1 *nctemp10205;
static struct nctempchar1 nctemp10206 = {{ 5}, (char*)"cast\0"};
nctemp10205=&nctemp10206;
nctempchar1* nctemp10203= nctemp10205;
int nctemp10207=LibeStrcmp(nctemp10198,nctemp10203);
int nctemp10195 = (nctemp10207 ==1);
if(nctemp10195)
{
struct tree* nctemp10210= p;
int nctemp10212=CodeScast(nctemp10210);
}
else{
struct tree* nctemp10218= p;
nctempchar1* nctemp10220=PtreeGetname(nctemp10218);
nctempchar1* nctemp10216= nctemp10220;
struct nctempchar1 *nctemp10223;
static struct nctempchar1 nctemp10224 = {{ 10}, (char*)"iconstant\0"};
nctemp10223=&nctemp10224;
nctempchar1* nctemp10221= nctemp10223;
int nctemp10225=LibeStrcmp(nctemp10216,nctemp10221);
int nctemp10213 = (nctemp10225 ==1);
if(nctemp10213)
{
struct tree* nctemp10228= p;
struct tree* nctemp10232= p;
nctempchar1* nctemp10234=PtreeGetdef(nctemp10232);
nctempchar1* nctemp10230= nctemp10234;
int nctemp10235=CodeEs(nctemp10228,nctemp10230);
}
else{
struct tree* nctemp10241= p;
nctempchar1* nctemp10243=PtreeGetname(nctemp10241);
nctempchar1* nctemp10239= nctemp10243;
struct nctempchar1 *nctemp10246;
static struct nctempchar1 nctemp10247 = {{ 10}, (char*)"sconstant\0"};
nctemp10246=&nctemp10247;
nctempchar1* nctemp10244= nctemp10246;
int nctemp10248=LibeStrcmp(nctemp10239,nctemp10244);
int nctemp10236 = (nctemp10248 ==1);
if(nctemp10236)
{
struct tree* nctemp10251= p;
struct tree* nctemp10255= p;
nctempchar1* nctemp10257=PtreeGetdef(nctemp10255);
nctempchar1* nctemp10253= nctemp10257;
int nctemp10258=CodeEs(nctemp10251,nctemp10253);
}
else{
struct tree* nctemp10264= p;
nctempchar1* nctemp10266=PtreeGetname(nctemp10264);
nctempchar1* nctemp10262= nctemp10266;
struct nctempchar1 *nctemp10269;
static struct nctempchar1 nctemp10270 = {{ 10}, (char*)"rconstant\0"};
nctemp10269=&nctemp10270;
nctempchar1* nctemp10267= nctemp10269;
int nctemp10271=LibeStrcmp(nctemp10262,nctemp10267);
int nctemp10259 = (nctemp10271 ==1);
if(nctemp10259)
{
struct tree* nctemp10274= p;
struct tree* nctemp10278= p;
nctempchar1* nctemp10280=PtreeGetdef(nctemp10278);
nctempchar1* nctemp10276= nctemp10280;
int nctemp10281=CodeEs(nctemp10274,nctemp10276);
}
else{
struct tree* nctemp10283= p;
struct nctempchar1 *nctemp10287;
static struct nctempchar1 nctemp10288 = {{ 2}, (char*)"(\0"};
nctemp10287=&nctemp10288;
nctempchar1* nctemp10285= nctemp10287;
int nctemp10289=CodeEs(nctemp10283,nctemp10285);
struct tree* nctemp10291= p;
int nctemp10293=CodeSbinexpr(nctemp10291);
struct tree* nctemp10295= p;
struct nctempchar1 *nctemp10299;
static struct nctempchar1 nctemp10300 = {{ 2}, (char*)")\0"};
nctemp10299=&nctemp10300;
nctempchar1* nctemp10297= nctemp10299;
int nctemp10301=CodeEs(nctemp10295,nctemp10297);
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
struct tree* nctemp10308= p;
nctempchar1* nctemp10310=PtreeGetname(nctemp10308);
nctempchar1* nctemp10306= nctemp10310;
struct nctempchar1 *nctemp10313;
static struct nctempchar1 nctemp10314 = {{ 7}, (char*)"unexpr\0"};
nctemp10313=&nctemp10314;
nctempchar1* nctemp10311= nctemp10313;
int nctemp10315=LibeStrcmp(nctemp10306,nctemp10311);
int nctemp10303 = (nctemp10315 ==1);
if(nctemp10303)
{
struct tree* nctemp10318= p;
struct nctempchar1 *nctemp10322;
static struct nctempchar1 nctemp10323 = {{ 3}, (char*)" -\0"};
nctemp10322=&nctemp10323;
nctempchar1* nctemp10320= nctemp10322;
int nctemp10324=CodeEs(nctemp10318,nctemp10320);
struct tree* nctemp10328= p;
struct tree* nctemp10330=PtreeMvchild(nctemp10328);
struct tree* nctemp10326= nctemp10330;
int nctemp10331=CodeSprimexpr(nctemp10326);
}
else{
struct tree* nctemp10333= p;
int nctemp10335=CodeSprimexpr(nctemp10333);
}
return 1;
}
int CodeSbinexpr (struct tree* p)
{
struct tree* np;
struct tree* nctemp10342= p;
nctempchar1* nctemp10344=PtreeGetname(nctemp10342);
nctempchar1* nctemp10340= nctemp10344;
struct nctempchar1 *nctemp10347;
static struct nctempchar1 nctemp10348 = {{ 8}, (char*)"binexpr\0"};
nctemp10347=&nctemp10348;
nctempchar1* nctemp10345= nctemp10347;
int nctemp10349=LibeStrcmp(nctemp10340,nctemp10345);
int nctemp10337 = (nctemp10349 ==1);
if(nctemp10337)
{
struct tree* nctemp10355= p;
struct tree* nctemp10357=PtreeMvchild(nctemp10355);
np =nctemp10357;
struct tree* nctemp10359= np;
int nctemp10361=CodeSunexpr(nctemp10359);
struct tree* nctemp10373= p;
nctempchar1* nctemp10375=PtreeGetdef(nctemp10373);
nctempchar1* nctemp10371= nctemp10375;
struct nctempchar1 *nctemp10378;
static struct nctempchar1 nctemp10379 = {{ 2}, (char*)"=\0"};
nctemp10378=&nctemp10379;
nctempchar1* nctemp10376= nctemp10378;
int nctemp10380=LibeStrcmp(nctemp10371,nctemp10376);
int nctemp10368 = (nctemp10380 ==1);
struct tree* nctemp10388= p;
nctempchar1* nctemp10390=PtreeGetdef(nctemp10388);
nctempchar1* nctemp10386= nctemp10390;
struct nctempchar1 *nctemp10393;
static struct nctempchar1 nctemp10394 = {{ 3}, (char*)"==\0"};
nctemp10393=&nctemp10394;
nctempchar1* nctemp10391= nctemp10393;
int nctemp10395=LibeStrcmp(nctemp10386,nctemp10391);
int nctemp10383 = (nctemp10395 ==1);
int nctemp10365 = (nctemp10368 || nctemp10383);
struct tree* nctemp10403= p;
nctempchar1* nctemp10405=PtreeGetdef(nctemp10403);
nctempchar1* nctemp10401= nctemp10405;
struct nctempchar1 *nctemp10408;
static struct nctempchar1 nctemp10409 = {{ 3}, (char*)"!=\0"};
nctemp10408=&nctemp10409;
nctempchar1* nctemp10406= nctemp10408;
int nctemp10410=LibeStrcmp(nctemp10401,nctemp10406);
int nctemp10398 = (nctemp10410 ==1);
int nctemp10362 = (nctemp10365 || nctemp10398);
if(nctemp10362)
{
struct tree* nctemp10417= np;
nctempchar1* nctemp10419=PtreeGetref(nctemp10417);
nctempchar1* nctemp10415= nctemp10419;
struct nctempchar1 *nctemp10422;
static struct nctempchar1 nctemp10423 = {{ 5}, (char*)"aref\0"};
nctemp10422=&nctemp10423;
nctempchar1* nctemp10420= nctemp10422;
int nctemp10424=LibeStrcmp(nctemp10415,nctemp10420);
int nctemp10412 = (nctemp10424 ==1);
if(nctemp10412)
{
struct tree* nctemp10433= np;
struct tree* nctemp10435=PtreeMvsister(nctemp10433);
struct tree* nctemp10431= nctemp10435;
nctempchar1* nctemp10436=PtreeGetname(nctemp10431);
nctempchar1* nctemp10429= nctemp10436;
struct nctempchar1 *nctemp10439;
static struct nctempchar1 nctemp10440 = {{ 10}, (char*)"iconstant\0"};
nctemp10439=&nctemp10440;
nctempchar1* nctemp10437= nctemp10439;
int nctemp10441=LibeStrcmp(nctemp10429,nctemp10437);
struct tree* nctemp10447= np;
struct tree* nctemp10449=PtreeMvsister(nctemp10447);
struct tree* nctemp10445= nctemp10449;
nctempchar1* nctemp10450=PtreeGetdef(nctemp10445);
nctempchar1* nctemp10443= nctemp10450;
struct nctempchar1 *nctemp10453;
static struct nctempchar1 nctemp10454 = {{ 2}, (char*)"0\0"};
nctemp10453=&nctemp10454;
nctempchar1* nctemp10451= nctemp10453;
int nctemp10455=LibeStrcmp(nctemp10443,nctemp10451);
int nctemp10426 = (nctemp10441 && nctemp10455);
if(nctemp10426)
{
struct tree* nctemp10457= p;
struct nctempchar1 *nctemp10461;
static struct nctempchar1 nctemp10462 = {{ 2}, (char*)" \0"};
nctemp10461=&nctemp10462;
nctempchar1* nctemp10459= nctemp10461;
int nctemp10463=CodeEs(nctemp10457,nctemp10459);
}
}
}
struct tree* nctemp10465= p;
struct nctempchar1 *nctemp10469;
static struct nctempchar1 nctemp10470 = {{ 2}, (char*)" \0"};
nctemp10469=&nctemp10470;
nctempchar1* nctemp10467= nctemp10469;
int nctemp10471=CodeEs(nctemp10465,nctemp10467);
struct tree* nctemp10473= p;
struct tree* nctemp10477= p;
nctempchar1* nctemp10479=PtreeGetdef(nctemp10477);
nctempchar1* nctemp10475= nctemp10479;
int nctemp10480=CodeEs(nctemp10473,nctemp10475);
struct tree* nctemp10482= p;
struct nctempchar1 *nctemp10486;
static struct nctempchar1 nctemp10487 = {{ 2}, (char*)" \0"};
nctemp10486=&nctemp10487;
nctempchar1* nctemp10484= nctemp10486;
int nctemp10488=CodeEs(nctemp10482,nctemp10484);
struct tree* nctemp10492= np;
struct tree* nctemp10494=PtreeMvsister(nctemp10492);
struct tree* nctemp10490= nctemp10494;
int nctemp10495=CodeSunexpr(nctemp10490);
}
else{
struct tree* nctemp10497= p;
int nctemp10499=CodeSunexpr(nctemp10497);
}
return 1;
}
int CodeSexpr (struct tree* p)
{
struct tree* sp;
nctempchar1 *rval;
struct tree* nctemp10505= p;
struct tree* nctemp10507=PtreeMvchild(nctemp10505);
sp =nctemp10507;
struct tree* nctemp10509= sp;
int nctemp10511=CodeSbinexpr(nctemp10509);
return 1;
}
nctempchar1 * CodeExpr (struct tree* p)
{
nctempchar1 *rval;
struct tree* sp;
struct tree* nctemp10517= p;
struct tree* nctemp10519=PtreeMvchild(nctemp10517);
sp =nctemp10519;
struct tree* nctemp10525= sp;
nctempchar1* nctemp10527=CodeBinexpr(nctemp10525);
rval=nctemp10527;
return rval;
}
int CodeSforstmnt (struct tree* p)
{
struct tree* nctemp10534= p;
struct tree* nctemp10536=PtreeMvchild(nctemp10534);
p =nctemp10536;
struct tree* nctemp10538= p;
struct nctempchar1 *nctemp10542;
static struct nctempchar1 nctemp10543 = {{ 5}, (char*)"for(\0"};
nctemp10542=&nctemp10543;
nctempchar1* nctemp10540= nctemp10542;
int nctemp10544=CodeEs(nctemp10538,nctemp10540);
struct tree* nctemp10546= p;
int nctemp10548=CodeSexpr(nctemp10546);
struct tree* nctemp10550= p;
struct nctempchar1 *nctemp10554;
static struct nctempchar1 nctemp10555 = {{ 2}, (char*)";\0"};
nctemp10554=&nctemp10555;
nctempchar1* nctemp10552= nctemp10554;
int nctemp10556=CodeEs(nctemp10550,nctemp10552);
struct tree* nctemp10561= p;
struct tree* nctemp10563=PtreeMvsister(nctemp10561);
p =nctemp10563;
struct tree* nctemp10565= p;
int nctemp10567=CodeSexpr(nctemp10565);
struct tree* nctemp10569= p;
struct nctempchar1 *nctemp10573;
static struct nctempchar1 nctemp10574 = {{ 2}, (char*)";\0"};
nctemp10573=&nctemp10574;
nctempchar1* nctemp10571= nctemp10573;
int nctemp10575=CodeEs(nctemp10569,nctemp10571);
struct tree* nctemp10580= p;
struct tree* nctemp10582=PtreeMvsister(nctemp10580);
p =nctemp10582;
struct tree* nctemp10584= p;
int nctemp10586=CodeSexpr(nctemp10584);
struct tree* nctemp10588= p;
struct nctempchar1 *nctemp10592;
static struct nctempchar1 nctemp10593 = {{ 2}, (char*)")\0"};
nctemp10592=&nctemp10593;
nctempchar1* nctemp10590= nctemp10592;
int nctemp10594=CodeEs(nctemp10588,nctemp10590);
struct tree* nctemp10599= p;
struct tree* nctemp10601=PtreeMvsister(nctemp10599);
p =nctemp10601;
struct tree* nctemp10603= p;
int nctemp10605=CodeStmnt(nctemp10603);
return 1;
}
int CodeWhilestmnt (struct tree* p)
{
nctempchar1 *cond;
nctempchar1 *tmp;
nctempchar1 *cond2;
struct tree* sp;
struct tree* nctemp10611= p;
struct tree* nctemp10613=PtreeMvchild(nctemp10611);
p =nctemp10613;
sp = p;
struct tree* nctemp10619= sp;
nctempchar1* nctemp10621=CodeExpr(nctemp10619);
cond=nctemp10621;
nctempchar1* nctemp10627=CodeMktemp();
tmp=nctemp10627;
struct tree* nctemp10629= p;
struct tree* nctemp10633= sp;
nctempchar1* nctemp10635=PtreeGetype(nctemp10633);
nctempchar1* nctemp10631= nctemp10635;
int nctemp10636=CodeEs(nctemp10629,nctemp10631);
struct tree* nctemp10638= p;
struct nctempchar1 *nctemp10642;
static struct nctempchar1 nctemp10643 = {{ 2}, (char*)" \0"};
nctemp10642=&nctemp10643;
nctempchar1* nctemp10640= nctemp10642;
int nctemp10644=CodeEs(nctemp10638,nctemp10640);
struct tree* nctemp10646= p;
nctempchar1* nctemp10648= tmp;
int nctemp10651=CodeEs(nctemp10646,nctemp10648);
struct tree* nctemp10653= p;
struct nctempchar1 *nctemp10657;
static struct nctempchar1 nctemp10658 = {{ 2}, (char*)"=\0"};
nctemp10657=&nctemp10658;
nctempchar1* nctemp10655= nctemp10657;
int nctemp10659=CodeEs(nctemp10653,nctemp10655);
struct tree* nctemp10661= p;
nctempchar1* nctemp10663= cond;
int nctemp10666=CodeEs(nctemp10661,nctemp10663);
struct tree* nctemp10668= p;
struct nctempchar1 *nctemp10672;
static struct nctempchar1 nctemp10673 = {{ 4}, (char*)";\n\0"};
nctemp10672=&nctemp10673;
nctempchar1* nctemp10670= nctemp10672;
int nctemp10674=CodeEs(nctemp10668,nctemp10670);
struct tree* nctemp10676= p;
struct nctempchar1 *nctemp10680;
static struct nctempchar1 nctemp10681 = {{ 7}, (char*)"while(\0"};
nctemp10680=&nctemp10681;
nctempchar1* nctemp10678= nctemp10680;
int nctemp10682=CodeEs(nctemp10676,nctemp10678);
struct tree* nctemp10684= p;
nctempchar1* nctemp10686= tmp;
int nctemp10689=CodeEs(nctemp10684,nctemp10686);
struct tree* nctemp10691= p;
struct nctempchar1 *nctemp10695;
static struct nctempchar1 nctemp10696 = {{ 4}, (char*)")\n\0"};
nctemp10695=&nctemp10696;
nctempchar1* nctemp10693= nctemp10695;
int nctemp10697=CodeEs(nctemp10691,nctemp10693);
struct tree* nctemp10699= p;
struct nctempchar1 *nctemp10703;
static struct nctempchar1 nctemp10704 = {{ 2}, (char*)"{\0"};
nctemp10703=&nctemp10704;
nctempchar1* nctemp10701= nctemp10703;
int nctemp10705=CodeEs(nctemp10699,nctemp10701);
struct tree* nctemp10710= p;
struct tree* nctemp10712=PtreeMvsister(nctemp10710);
p =nctemp10712;
struct tree* nctemp10714= p;
int nctemp10716=CodeStmnt(nctemp10714);
struct tree* nctemp10722= sp;
nctempchar1* nctemp10724=CodeExpr(nctemp10722);
cond2=nctemp10724;
struct tree* nctemp10726= p;
nctempchar1* nctemp10728= tmp;
int nctemp10731=CodeEs(nctemp10726,nctemp10728);
struct tree* nctemp10733= p;
struct nctempchar1 *nctemp10737;
static struct nctempchar1 nctemp10738 = {{ 2}, (char*)"=\0"};
nctemp10737=&nctemp10738;
nctempchar1* nctemp10735= nctemp10737;
int nctemp10739=CodeEs(nctemp10733,nctemp10735);
struct tree* nctemp10741= p;
nctempchar1* nctemp10743= cond2;
int nctemp10746=CodeEs(nctemp10741,nctemp10743);
struct tree* nctemp10748= p;
struct nctempchar1 *nctemp10752;
static struct nctempchar1 nctemp10753 = {{ 2}, (char*)";\0"};
nctemp10752=&nctemp10753;
nctempchar1* nctemp10750= nctemp10752;
int nctemp10754=CodeEs(nctemp10748,nctemp10750);
struct tree* nctemp10756= p;
struct nctempchar1 *nctemp10760;
static struct nctempchar1 nctemp10761 = {{ 2}, (char*)"}\0"};
nctemp10760=&nctemp10761;
nctempchar1* nctemp10758= nctemp10760;
int nctemp10762=CodeEs(nctemp10756,nctemp10758);
return 1;
}
int CodeForstmnt (struct tree* p)
{
struct tree* sp;
struct tree* np;
nctempchar1 *cond;
nctempchar1 *tmp;
struct tree* nctemp10768= p;
struct tree* nctemp10770=PtreeMvchild(nctemp10768);
p =nctemp10770;
struct tree* nctemp10772= p;
nctempchar1* nctemp10774=CodeExpr(nctemp10772);
struct tree* nctemp10779= p;
struct tree* nctemp10781=PtreeMvsister(nctemp10779);
p =nctemp10781;
np = p;
struct tree* nctemp10787= p;
nctempchar1* nctemp10789=CodeExpr(nctemp10787);
cond=nctemp10789;
struct tree* nctemp10791= p;
struct nctempchar1 *nctemp10795;
static struct nctempchar1 nctemp10796 = {{ 7}, (char*)"while(\0"};
nctemp10795=&nctemp10796;
nctempchar1* nctemp10793= nctemp10795;
int nctemp10797=CodeEs(nctemp10791,nctemp10793);
struct tree* nctemp10799= p;
nctempchar1* nctemp10801= cond;
int nctemp10804=CodeEs(nctemp10799,nctemp10801);
struct tree* nctemp10806= p;
struct nctempchar1 *nctemp10810;
static struct nctempchar1 nctemp10811 = {{ 5}, (char*)"){\n\0"};
nctemp10810=&nctemp10811;
nctempchar1* nctemp10808= nctemp10810;
int nctemp10812=CodeEs(nctemp10806,nctemp10808);
struct tree* nctemp10817= p;
struct tree* nctemp10819=PtreeMvsister(nctemp10817);
p =nctemp10819;
sp = p;
struct tree* nctemp10824= p;
struct tree* nctemp10826=PtreeMvsister(nctemp10824);
p =nctemp10826;
struct tree* nctemp10828= p;
int nctemp10830=CodeStmnt(nctemp10828);
struct tree* nctemp10832= sp;
nctempchar1* nctemp10834=CodeExpr(nctemp10832);
struct tree* nctemp10840= np;
nctempchar1* nctemp10842=CodeExpr(nctemp10840);
tmp=nctemp10842;
struct tree* nctemp10844= p;
nctempchar1* nctemp10846= cond;
int nctemp10849=CodeEs(nctemp10844,nctemp10846);
struct tree* nctemp10851= p;
struct nctempchar1 *nctemp10855;
static struct nctempchar1 nctemp10856 = {{ 2}, (char*)"=\0"};
nctemp10855=&nctemp10856;
nctempchar1* nctemp10853= nctemp10855;
int nctemp10857=CodeEs(nctemp10851,nctemp10853);
struct tree* nctemp10859= p;
nctempchar1* nctemp10861= tmp;
int nctemp10864=CodeEs(nctemp10859,nctemp10861);
struct tree* nctemp10866= p;
struct nctempchar1 *nctemp10870;
static struct nctempchar1 nctemp10871 = {{ 4}, (char*)";\n\0"};
nctemp10870=&nctemp10871;
nctempchar1* nctemp10868= nctemp10870;
int nctemp10872=CodeEs(nctemp10866,nctemp10868);
struct tree* nctemp10874= p;
struct nctempchar1 *nctemp10878;
static struct nctempchar1 nctemp10879 = {{ 4}, (char*)"}\n\0"};
nctemp10878=&nctemp10879;
nctempchar1* nctemp10876= nctemp10878;
int nctemp10880=CodeEs(nctemp10874,nctemp10876);
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
int nctemp10882 = (p ==0);
if(nctemp10882)
{
return 1;
}
struct tree* nctemp10891= p;
struct tree* nctemp10893=PtreeMvsister(nctemp10891);
p =nctemp10893;
struct tree* nctemp10895= p;
int nctemp10897= level;
int nctemp10899= rank;
int nctemp10901=CodeParallelfor(nctemp10895,nctemp10897,nctemp10899);
struct tree* nctemp10906= sp;
struct tree* nctemp10908=PtreeMvchild(nctemp10906);
rp =nctemp10908;
struct tree* nctemp10913= rp;
struct tree* nctemp10915=PtreeMvchild(nctemp10913);
qp =nctemp10915;
struct tree* nctemp10920= qp;
struct tree* nctemp10922=PtreeMvchild(nctemp10920);
qp =nctemp10922;
struct tree* nctemp10928= qp;
nctempchar1* nctemp10930=PtreeGetdef(nctemp10928);
index=nctemp10930;
struct tree* nctemp10938= qp;
struct tree* nctemp10940=PtreeMvsister(nctemp10938);
struct tree* nctemp10936= nctemp10940;
nctempchar1* nctemp10941=CodeBinexpr(nctemp10936);
init=nctemp10941;
struct tree* nctemp10946= rp;
struct tree* nctemp10948=PtreeMvsister(nctemp10946);
rrp =nctemp10948;
struct tree* nctemp10954= rrp;
nctempchar1* nctemp10956=CodeExpr(nctemp10954);
cond=nctemp10956;
int nctemp10957 = (level ==rank);
if(nctemp10957)
{
struct tree* nctemp10962= p;
struct nctempchar1 *nctemp10966;
static struct nctempchar1 nctemp10967 = {{ 30}, (char*)"\n #pragma omp parallel for\n\0"};
nctemp10966=&nctemp10967;
nctempchar1* nctemp10964= nctemp10966;
int nctemp10968=CodeEs(nctemp10962,nctemp10964);
}
struct tree* nctemp10970= rp;
struct nctempchar1 *nctemp10974;
static struct nctempchar1 nctemp10975 = {{ 5}, (char*)"for(\0"};
nctemp10974=&nctemp10975;
nctempchar1* nctemp10972= nctemp10974;
int nctemp10976=CodeEs(nctemp10970,nctemp10972);
struct tree* nctemp10978= rp;
nctempchar1* nctemp10980= index;
int nctemp10983=CodeEs(nctemp10978,nctemp10980);
struct tree* nctemp10985= rp;
struct nctempchar1 *nctemp10989;
static struct nctempchar1 nctemp10990 = {{ 2}, (char*)"=\0"};
nctemp10989=&nctemp10990;
nctempchar1* nctemp10987= nctemp10989;
int nctemp10991=CodeEs(nctemp10985,nctemp10987);
struct tree* nctemp10993= rp;
nctempchar1* nctemp10995= init;
int nctemp10998=CodeEs(nctemp10993,nctemp10995);
struct tree* nctemp11000= rp;
struct nctempchar1 *nctemp11004;
static struct nctempchar1 nctemp11005 = {{ 2}, (char*)";\0"};
nctemp11004=&nctemp11005;
nctempchar1* nctemp11002= nctemp11004;
int nctemp11006=CodeEs(nctemp11000,nctemp11002);
struct tree* nctemp11011= rp;
struct tree* nctemp11013=PtreeMvsister(nctemp11011);
rp =nctemp11013;
struct tree* nctemp11015= rp;
nctempchar1* nctemp11017= index;
int nctemp11020=CodeEs(nctemp11015,nctemp11017);
struct tree* nctemp11022= rp;
struct nctempchar1 *nctemp11026;
static struct nctempchar1 nctemp11027 = {{ 2}, (char*)"<\0"};
nctemp11026=&nctemp11027;
nctempchar1* nctemp11024= nctemp11026;
int nctemp11028=CodeEs(nctemp11022,nctemp11024);
struct tree* nctemp11030= p;
nctempchar1* nctemp11032= cond;
int nctemp11035=CodeEs(nctemp11030,nctemp11032);
struct tree* nctemp11037= rp;
struct nctempchar1 *nctemp11041;
static struct nctempchar1 nctemp11042 = {{ 2}, (char*)";\0"};
nctemp11041=&nctemp11042;
nctempchar1* nctemp11039= nctemp11041;
int nctemp11043=CodeEs(nctemp11037,nctemp11039);
struct tree* nctemp11051= rp;
struct tree* nctemp11053=PtreeMvsister(nctemp11051);
rp =nctemp11053;
int nctemp11044 = (rp !=0);
if(nctemp11044)
{
struct tree* nctemp11056= rp;
nctempchar1* nctemp11058= index;
int nctemp11061=CodeEs(nctemp11056,nctemp11058);
struct tree* nctemp11063= rp;
struct nctempchar1 *nctemp11067;
static struct nctempchar1 nctemp11068 = {{ 2}, (char*)"=\0"};
nctemp11067=&nctemp11068;
nctempchar1* nctemp11065= nctemp11067;
int nctemp11069=CodeEs(nctemp11063,nctemp11065);
struct tree* nctemp11071= rp;
nctempchar1* nctemp11073= index;
int nctemp11076=CodeEs(nctemp11071,nctemp11073);
struct tree* nctemp11078= rp;
struct nctempchar1 *nctemp11082;
static struct nctempchar1 nctemp11083 = {{ 2}, (char*)"+\0"};
nctemp11082=&nctemp11083;
nctempchar1* nctemp11080= nctemp11082;
int nctemp11084=CodeEs(nctemp11078,nctemp11080);
struct tree* nctemp11086= rp;
nctempchar1* nctemp11088=CodeExpr(nctemp11086);
}
else{
struct tree* nctemp11090= rp;
nctempchar1* nctemp11092= index;
int nctemp11095=CodeEs(nctemp11090,nctemp11092);
struct tree* nctemp11097= rp;
struct nctempchar1 *nctemp11101;
static struct nctempchar1 nctemp11102 = {{ 2}, (char*)"=\0"};
nctemp11101=&nctemp11102;
nctempchar1* nctemp11099= nctemp11101;
int nctemp11103=CodeEs(nctemp11097,nctemp11099);
struct tree* nctemp11105= rp;
nctempchar1* nctemp11107= index;
int nctemp11110=CodeEs(nctemp11105,nctemp11107);
struct tree* nctemp11112= rp;
struct nctempchar1 *nctemp11116;
static struct nctempchar1 nctemp11117 = {{ 2}, (char*)"+\0"};
nctemp11116=&nctemp11117;
nctempchar1* nctemp11114= nctemp11116;
int nctemp11118=CodeEs(nctemp11112,nctemp11114);
struct tree* nctemp11120= rp;
struct nctempchar1 *nctemp11124;
static struct nctempchar1 nctemp11125 = {{ 2}, (char*)"1\0"};
nctemp11124=&nctemp11125;
nctempchar1* nctemp11122= nctemp11124;
int nctemp11126=CodeEs(nctemp11120,nctemp11122);
}
struct tree* nctemp11128= rp;
struct nctempchar1 *nctemp11132;
static struct nctempchar1 nctemp11133 = {{ 3}, (char*)"){\0"};
nctemp11132=&nctemp11133;
nctempchar1* nctemp11130= nctemp11132;
int nctemp11134=CodeEs(nctemp11128,nctemp11130);
return 1;
}
int CodeParallelstmntcpu (struct tree* p)
{
struct tree* sp;
int rank;
int i;
sp = p;
struct tree* nctemp11140= sp;
int nctemp11142=PtreeGetrank(nctemp11140);
rank =nctemp11142;
struct tree* nctemp11147= p;
struct tree* nctemp11149=PtreeMvchild(nctemp11147);
p =nctemp11149;
struct tree* nctemp11154= p;
struct tree* nctemp11156=PtreeMvchild(nctemp11154);
p =nctemp11156;
struct tree* nctemp11158= p;
int nctemp11160= 0;
int nctemp11162= rank;
int nctemp11164=CodeParallelfor(nctemp11158,nctemp11160,nctemp11162);
struct tree* nctemp11169= sp;
struct tree* nctemp11171=PtreeMvchild(nctemp11169);
sp =nctemp11171;
struct tree* nctemp11176= sp;
struct tree* nctemp11178=PtreeMvsister(nctemp11176);
sp =nctemp11178;
struct tree* nctemp11180= sp;
int nctemp11182=CodeStmnt(nctemp11180);
for(i = 0;i < rank;i = (i + 1)){
struct tree* nctemp11184= sp;
struct nctempchar1 *nctemp11188;
static struct nctempchar1 nctemp11189 = {{ 2}, (char*)"}\0"};
nctemp11188=&nctemp11189;
nctempchar1* nctemp11186= nctemp11188;
int nctemp11190=CodeEs(nctemp11184,nctemp11186);
}
return 1;
}
nctempchar1 * CodeParprocno (struct tree* p)
{
struct tree* nctemp11193= p;
struct nctempchar1 *nctemp11197;
static struct nctempchar1 nctemp11198 = {{ 13}, (char*)"int nctempno\0"};
nctemp11197=&nctemp11198;
nctempchar1* nctemp11195= nctemp11197;
int nctemp11199=CodeEs(nctemp11193,nctemp11195);
struct tree* nctemp11201= p;
struct nctempchar1 *nctemp11205;
static struct nctempchar1 nctemp11206 = {{ 39}, (char*)"=blockIdx.x*blockDim.x + threadIdx.x; \0"};
nctemp11205=&nctemp11206;
nctempchar1* nctemp11203= nctemp11205;
int nctemp11207=CodeEs(nctemp11201,nctemp11203);
struct nctempchar1 *nctemp11209;
static struct nctempchar1 nctemp11210 = {{ 9}, (char*)"nctempno\0"};
nctemp11209=&nctemp11210;
return nctemp11209;
}
nctempchar1 * CodeParidx (struct tree* p)
{
struct tree* nctemp11215= p;
struct tree* nctemp11217=PtreeMvchild(nctemp11215);
p =nctemp11217;
struct tree* nctemp11222= p;
struct tree* nctemp11224=PtreeMvchild(nctemp11222);
p =nctemp11224;
struct tree* nctemp11229= p;
struct tree* nctemp11231=PtreeMvchild(nctemp11229);
p =nctemp11231;
struct tree* nctemp11233= p;
nctempchar1* nctemp11235=PtreeGetdef(nctemp11233);
return nctemp11235;
}
nctempchar1 * CodeParidxrank (struct tree* p,int r)
{
int i;
for(i = 0;i < (r - 1);i = (i + 1)){
struct tree* nctemp11240= p;
struct tree* nctemp11242=PtreeMvsister(nctemp11240);
p =nctemp11242;
}
struct tree* nctemp11244= p;
nctempchar1* nctemp11246=CodeParidx(nctemp11244);
return nctemp11246;
}
nctempchar1 * CodeParllim (struct tree* p)
{
nctempchar1 *tmp;
nctempchar1 *temp;
struct tree* nctemp11251= p;
struct tree* nctemp11253=PtreeMvchild(nctemp11251);
p =nctemp11253;
struct tree* nctemp11259= p;
nctempchar1* nctemp11261=CodeExpr(nctemp11259);
tmp=nctemp11261;
nctempchar1* nctemp11267=CodeMktemp();
temp=nctemp11267;
struct tree* nctemp11269= p;
struct nctempchar1 *nctemp11273;
static struct nctempchar1 nctemp11274 = {{ 5}, (char*)"int \0"};
nctemp11273=&nctemp11274;
nctempchar1* nctemp11271= nctemp11273;
int nctemp11275=CodeEs(nctemp11269,nctemp11271);
struct tree* nctemp11277= p;
nctempchar1* nctemp11279= temp;
int nctemp11282=CodeEs(nctemp11277,nctemp11279);
struct tree* nctemp11284= p;
struct nctempchar1 *nctemp11288;
static struct nctempchar1 nctemp11289 = {{ 2}, (char*)"=\0"};
nctemp11288=&nctemp11289;
nctempchar1* nctemp11286= nctemp11288;
int nctemp11290=CodeEs(nctemp11284,nctemp11286);
struct tree* nctemp11292= p;
nctempchar1* nctemp11294= tmp;
int nctemp11297=CodeEs(nctemp11292,nctemp11294);
struct tree* nctemp11299= p;
struct nctempchar1 *nctemp11303;
static struct nctempchar1 nctemp11304 = {{ 4}, (char*)";\n\0"};
nctemp11303=&nctemp11304;
nctempchar1* nctemp11301= nctemp11303;
int nctemp11305=CodeEs(nctemp11299,nctemp11301);
return temp;
}
nctempchar1 * CodeParulim (struct tree* p)
{
struct tree* nctemp11312= p;
struct tree* nctemp11314=PtreeMvchild(nctemp11312);
p =nctemp11314;
struct tree* nctemp11319= p;
struct tree* nctemp11321=PtreeMvsister(nctemp11319);
p =nctemp11321;
struct tree* nctemp11323= p;
nctempchar1* nctemp11325=CodeExpr(nctemp11323);
return nctemp11325;
}
nctempchar1 * CodeParllimrank (struct tree* p,int r)
{
int i;
for(i = 0;i < (r - 1);i = (i + 1)){
struct tree* nctemp11330= p;
struct tree* nctemp11332=PtreeMvsister(nctemp11330);
p =nctemp11332;
}
struct tree* nctemp11334= p;
nctempchar1* nctemp11336=CodeParllim(nctemp11334);
return nctemp11336;
}
nctempchar1 * CodeParulimrank (struct tree* p,int r)
{
int i;
for(i = 0;i < (r - 1);i = (i + 1)){
struct tree* nctemp11341= p;
struct tree* nctemp11343=PtreeMvsister(nctemp11341);
p =nctemp11343;
}
struct tree* nctemp11345= p;
nctempchar1* nctemp11347=CodeParulim(nctemp11345);
return nctemp11347;
}
nctempchar1 * CodeParlen (struct tree* p,nctempchar1 *llim)
{
nctempchar1 *tmp1;
nctempchar1 *tmp2;
nctempchar1 *tmp3;
nctempchar1* nctemp11353=CodeMktemp();
tmp1=nctemp11353;
struct tree* nctemp11359= p;
nctempchar1* nctemp11361=CodeParulim(nctemp11359);
tmp2=nctemp11361;
struct tree* nctemp11367= p;
nctempchar1* nctemp11369=CodeParllim(nctemp11367);
tmp3=nctemp11369;
struct tree* nctemp11371= p;
struct nctempchar1 *nctemp11375;
static struct nctempchar1 nctemp11376 = {{ 5}, (char*)"int \0"};
nctemp11375=&nctemp11376;
nctempchar1* nctemp11373= nctemp11375;
int nctemp11377=CodeEs(nctemp11371,nctemp11373);
struct tree* nctemp11379= p;
nctempchar1* nctemp11381= tmp1;
int nctemp11384=CodeEs(nctemp11379,nctemp11381);
struct tree* nctemp11386= p;
struct nctempchar1 *nctemp11390;
static struct nctempchar1 nctemp11391 = {{ 2}, (char*)"=\0"};
nctemp11390=&nctemp11391;
nctempchar1* nctemp11388= nctemp11390;
int nctemp11392=CodeEs(nctemp11386,nctemp11388);
struct tree* nctemp11394= p;
nctempchar1* nctemp11396= tmp2;
int nctemp11399=CodeEs(nctemp11394,nctemp11396);
struct tree* nctemp11401= p;
struct nctempchar1 *nctemp11405;
static struct nctempchar1 nctemp11406 = {{ 2}, (char*)"-\0"};
nctemp11405=&nctemp11406;
nctempchar1* nctemp11403= nctemp11405;
int nctemp11407=CodeEs(nctemp11401,nctemp11403);
struct tree* nctemp11409= p;
nctempchar1* nctemp11411= tmp3;
int nctemp11414=CodeEs(nctemp11409,nctemp11411);
struct tree* nctemp11416= p;
struct nctempchar1 *nctemp11420;
static struct nctempchar1 nctemp11421 = {{ 4}, (char*)";\n\0"};
nctemp11420=&nctemp11421;
nctempchar1* nctemp11418= nctemp11420;
int nctemp11422=CodeEs(nctemp11416,nctemp11418);
nctempchar1* nctemp11426= tmp3;
nctempchar1* nctemp11429= llim;
int nctemp11432=LibeStrcpy(nctemp11426,nctemp11429);
int nctemp11423 = (nctemp11432 ==0);
if(nctemp11423)
{
struct nctempchar1 *nctemp11437;
static struct nctempchar1 nctemp11438 = {{ 31}, (char*)"Internal error in CodeParlen\n\0"};
nctemp11437=&nctemp11438;
nctempchar1* nctemp11435= nctemp11437;
int nctemp11439=CodeError(nctemp11435);
}
return tmp1;
}
nctempchar1 * CodeParlenrank (struct tree* p,int r,nctempchar1 *llim)
{
int i;
nctempchar1 *tmp;
for(i = 0;i < (r - 1);i = (i + 1)){
struct tree* nctemp11446= p;
struct tree* nctemp11448=PtreeMvsister(nctemp11446);
p =nctemp11448;
}
struct tree* nctemp11454= p;
nctempchar1* nctemp11456= llim;
nctempchar1* nctemp11459=CodeParlen(nctemp11454,nctemp11456);
tmp=nctemp11459;
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
int nctemp11466=m->d[0];r =nctemp11466;
nctempchar1* nctemp11475=CodeMktemp();
nsize=nctemp11475;
struct tree* nctemp11477= p;
struct nctempchar1 *nctemp11481;
static struct nctempchar1 nctemp11482 = {{ 5}, (char*)"int \0"};
nctemp11481=&nctemp11482;
nctempchar1* nctemp11479= nctemp11481;
int nctemp11483=CodeEs(nctemp11477,nctemp11479);
struct tree* nctemp11485= p;
nctempchar1* nctemp11487= nsize;
int nctemp11490=CodeEs(nctemp11485,nctemp11487);
struct tree* nctemp11492= p;
struct nctempchar1 *nctemp11496;
static struct nctempchar1 nctemp11497 = {{ 2}, (char*)"=\0"};
nctemp11496=&nctemp11497;
nctempchar1* nctemp11494= nctemp11496;
int nctemp11498=CodeEs(nctemp11492,nctemp11494);
for(i = 0;i < r;i = (i + 1)){
int nctemp11507 = r - 1;
int nctemp11499 = (i ==nctemp11507);
if(nctemp11499)
{
struct tree* nctemp11509= p;
int nctemp11513=i;
nctempchar1* nctemp11511= m->a[nctemp11513].s;
int nctemp11516=CodeEs(nctemp11509,nctemp11511);
struct tree* nctemp11518= p;
struct nctempchar1 *nctemp11522;
static struct nctempchar1 nctemp11523 = {{ 4}, (char*)";\n\0"};
nctemp11522=&nctemp11523;
nctempchar1* nctemp11520= nctemp11522;
int nctemp11524=CodeEs(nctemp11518,nctemp11520);
}
else{
struct tree* nctemp11526= p;
int nctemp11530=i;
nctempchar1* nctemp11528= m->a[nctemp11530].s;
int nctemp11533=CodeEs(nctemp11526,nctemp11528);
struct tree* nctemp11535= p;
struct nctempchar1 *nctemp11539;
static struct nctempchar1 nctemp11540 = {{ 2}, (char*)"*\0"};
nctemp11539=&nctemp11540;
nctempchar1* nctemp11537= nctemp11539;
int nctemp11541=CodeEs(nctemp11535,nctemp11537);
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
int nctemp11545= 1;
int nctemp11547=CodeSetparallel(nctemp11545);
sp = p;
struct tree* nctemp11552= p;
int nctemp11554=PtreeGetrank(nctemp11552);
rank =nctemp11554;
int nctemp11561=rank;
struct nctempcharr1 *nctemp11560;
nctemp11560=(struct nctempcharr1*)RunMalloc(sizeof(struct nctempcharr1));
nctemp11560->d[0]=rank;
nctemp11560->a=(struct charr*)RunMalloc(sizeof(struct charr)*nctemp11561);
m=nctemp11560;
int nctemp11570=rank;
struct nctempcharr1 *nctemp11569;
nctemp11569=(struct nctempcharr1*)RunMalloc(sizeof(struct nctempcharr1));
nctemp11569->d[0]=rank;
nctemp11569->a=(struct charr*)RunMalloc(sizeof(struct charr)*nctemp11570);
i=nctemp11569;
int nctemp11579=rank;
struct nctempcharr1 *nctemp11578;
nctemp11578=(struct nctempcharr1*)RunMalloc(sizeof(struct nctempcharr1));
nctemp11578->d[0]=rank;
nctemp11578->a=(struct charr*)RunMalloc(sizeof(struct charr)*nctemp11579);
nl=nctemp11578;
struct tree* nctemp11586= p;
struct tree* nctemp11588=PtreeMvchild(nctemp11586);
p =nctemp11588;
struct tree* nctemp11593= p;
struct tree* nctemp11595=PtreeMvchild(nctemp11593);
slice =nctemp11595;
struct tree* nctemp11597= p;
struct nctempchar1 *nctemp11601;
static struct nctempchar1 nctemp11602 = {{ 4}, (char*)"{\n\0"};
nctemp11601=&nctemp11602;
nctempchar1* nctemp11599= nctemp11601;
int nctemp11603=CodeEs(nctemp11597,nctemp11599);
struct tree* nctemp11609= slice;
nctempchar1* nctemp11611=CodeParprocno(nctemp11609);
pno=nctemp11611;
for(l = 0;l < rank;l = (l + 1)){
int nctemp11615=l;
struct tree* nctemp11619= slice;
int nctemp11626 = l + 1;
int nctemp11621= nctemp11626;
nctempchar1* nctemp11627=CodeParidxrank(nctemp11619,nctemp11621);
i->a[nctemp11615].s=nctemp11627;
int nctemp11631=l;
int nctemp11636=4096;
nctempchar1 *nctemp11635;
nctemp11635=(nctempchar1*)RunMalloc(sizeof(nctempchar1));
nctemp11635->d[0]=4096;
nctemp11635->a=(char *)RunMalloc(sizeof(char)*nctemp11636);
nl->a[nctemp11631].s=nctemp11635;
int nctemp11642=l;
struct tree* nctemp11646= slice;
int nctemp11653 = l + 1;
int nctemp11648= nctemp11653;
int nctemp11656=l;
nctempchar1* nctemp11654= nl->a[nctemp11656].s;
nctempchar1* nctemp11659=CodeParlenrank(nctemp11646,nctemp11648,nctemp11654);
m->a[nctemp11642].s=nctemp11659;
}
struct tree* nctemp11665= p;
nctempcharr1* nctemp11667= m;
nctempchar1* nctemp11670=CodeParnsize(nctemp11665,nctemp11667);
nmax=nctemp11670;
struct tree* nctemp11672= p;
struct nctempchar1 *nctemp11676;
static struct nctempchar1 nctemp11677 = {{ 5}, (char*)"for(\0"};
nctemp11676=&nctemp11677;
nctempchar1* nctemp11674= nctemp11676;
int nctemp11678=CodeEs(nctemp11672,nctemp11674);
struct tree* nctemp11680= p;
nctempchar1* nctemp11682= pno;
int nctemp11685=CodeEs(nctemp11680,nctemp11682);
struct tree* nctemp11687= p;
struct nctempchar1 *nctemp11691;
static struct nctempchar1 nctemp11692 = {{ 39}, (char*)"=blockIdx.x*blockDim.x + threadIdx.x; \0"};
nctemp11691=&nctemp11692;
nctempchar1* nctemp11689= nctemp11691;
int nctemp11693=CodeEs(nctemp11687,nctemp11689);
struct tree* nctemp11695= p;
nctempchar1* nctemp11697= pno;
int nctemp11700=CodeEs(nctemp11695,nctemp11697);
struct tree* nctemp11702= p;
struct nctempchar1 *nctemp11706;
static struct nctempchar1 nctemp11707 = {{ 2}, (char*)"<\0"};
nctemp11706=&nctemp11707;
nctempchar1* nctemp11704= nctemp11706;
int nctemp11708=CodeEs(nctemp11702,nctemp11704);
struct tree* nctemp11710= p;
nctempchar1* nctemp11712= nmax;
int nctemp11715=CodeEs(nctemp11710,nctemp11712);
struct tree* nctemp11717= p;
struct nctempchar1 *nctemp11721;
static struct nctempchar1 nctemp11722 = {{ 2}, (char*)";\0"};
nctemp11721=&nctemp11722;
nctempchar1* nctemp11719= nctemp11721;
int nctemp11723=CodeEs(nctemp11717,nctemp11719);
struct tree* nctemp11725= p;
nctempchar1* nctemp11727= pno;
int nctemp11730=CodeEs(nctemp11725,nctemp11727);
struct tree* nctemp11732= p;
struct nctempchar1 *nctemp11736;
static struct nctempchar1 nctemp11737 = {{ 23}, (char*)"+=blockDim.x*gridDim.x\0"};
nctemp11736=&nctemp11737;
nctempchar1* nctemp11734= nctemp11736;
int nctemp11738=CodeEs(nctemp11732,nctemp11734);
struct tree* nctemp11740= p;
struct nctempchar1 *nctemp11744;
static struct nctempchar1 nctemp11745 = {{ 5}, (char*)"){\n\0"};
nctemp11744=&nctemp11745;
nctempchar1* nctemp11742= nctemp11744;
int nctemp11746=CodeEs(nctemp11740,nctemp11742);
struct nctempchar1 *nctemp11754;
static struct nctempchar1 nctemp11755 = {{ 2}, (char*)"1\0"};
nctemp11754=&nctemp11755;
nctempchar1* nctemp11752= nctemp11754;
nctempchar1* nctemp11756=LibeStrsave(nctemp11752);
qk=nctemp11756;
for(l = 0;l < rank;l = (l + 1)){
int nctemp11765 = rank - 1;
int nctemp11757 = (l ==nctemp11765);
if(nctemp11757)
{
struct tree* nctemp11767= p;
int nctemp11771=l;
nctempchar1* nctemp11769= i->a[nctemp11771].s;
int nctemp11774=CodeEs(nctemp11767,nctemp11769);
struct tree* nctemp11776= p;
struct nctempchar1 *nctemp11780;
static struct nctempchar1 nctemp11781 = {{ 2}, (char*)"=\0"};
nctemp11780=&nctemp11781;
nctempchar1* nctemp11778= nctemp11780;
int nctemp11782=CodeEs(nctemp11776,nctemp11778);
struct tree* nctemp11784= p;
struct nctempchar1 *nctemp11788;
static struct nctempchar1 nctemp11789 = {{ 2}, (char*)"(\0"};
nctemp11788=&nctemp11789;
nctempchar1* nctemp11786= nctemp11788;
int nctemp11790=CodeEs(nctemp11784,nctemp11786);
struct tree* nctemp11792= p;
nctempchar1* nctemp11794= pno;
int nctemp11797=CodeEs(nctemp11792,nctemp11794);
struct tree* nctemp11799= p;
struct nctempchar1 *nctemp11803;
static struct nctempchar1 nctemp11804 = {{ 2}, (char*)"/\0"};
nctemp11803=&nctemp11804;
nctempchar1* nctemp11801= nctemp11803;
int nctemp11805=CodeEs(nctemp11799,nctemp11801);
struct tree* nctemp11807= p;
struct nctempchar1 *nctemp11811;
static struct nctempchar1 nctemp11812 = {{ 2}, (char*)"(\0"};
nctemp11811=&nctemp11812;
nctempchar1* nctemp11809= nctemp11811;
int nctemp11813=CodeEs(nctemp11807,nctemp11809);
struct tree* nctemp11815= p;
nctempchar1* nctemp11817= qk;
int nctemp11820=CodeEs(nctemp11815,nctemp11817);
struct tree* nctemp11822= p;
struct nctempchar1 *nctemp11826;
static struct nctempchar1 nctemp11827 = {{ 2}, (char*)")\0"};
nctemp11826=&nctemp11827;
nctempchar1* nctemp11824= nctemp11826;
int nctemp11828=CodeEs(nctemp11822,nctemp11824);
struct tree* nctemp11830= p;
struct nctempchar1 *nctemp11834;
static struct nctempchar1 nctemp11835 = {{ 2}, (char*)")\0"};
nctemp11834=&nctemp11835;
nctempchar1* nctemp11832= nctemp11834;
int nctemp11836=CodeEs(nctemp11830,nctemp11832);
struct tree* nctemp11838= p;
struct nctempchar1 *nctemp11842;
static struct nctempchar1 nctemp11843 = {{ 2}, (char*)"+\0"};
nctemp11842=&nctemp11843;
nctempchar1* nctemp11840= nctemp11842;
int nctemp11844=CodeEs(nctemp11838,nctemp11840);
struct tree* nctemp11846= p;
int nctemp11850=l;
nctempchar1* nctemp11848= nl->a[nctemp11850].s;
int nctemp11853=CodeEs(nctemp11846,nctemp11848);
int nctemp11856=l;
RunFree(nl->a[nctemp11856].s->a);
RunFree(nl->a[nctemp11856].s);
struct tree* nctemp11860= p;
struct nctempchar1 *nctemp11864;
static struct nctempchar1 nctemp11865 = {{ 4}, (char*)";\n\0"};
nctemp11864=&nctemp11865;
nctempchar1* nctemp11862= nctemp11864;
int nctemp11866=CodeEs(nctemp11860,nctemp11862);
}
else{
struct tree* nctemp11868= p;
int nctemp11872=l;
nctempchar1* nctemp11870= i->a[nctemp11872].s;
int nctemp11875=CodeEs(nctemp11868,nctemp11870);
struct tree* nctemp11877= p;
struct nctempchar1 *nctemp11881;
static struct nctempchar1 nctemp11882 = {{ 2}, (char*)"=\0"};
nctemp11881=&nctemp11882;
nctempchar1* nctemp11879= nctemp11881;
int nctemp11883=CodeEs(nctemp11877,nctemp11879);
struct tree* nctemp11885= p;
struct nctempchar1 *nctemp11889;
static struct nctempchar1 nctemp11890 = {{ 2}, (char*)"(\0"};
nctemp11889=&nctemp11890;
nctempchar1* nctemp11887= nctemp11889;
int nctemp11891=CodeEs(nctemp11885,nctemp11887);
struct tree* nctemp11893= p;
nctempchar1* nctemp11895= pno;
int nctemp11898=CodeEs(nctemp11893,nctemp11895);
struct tree* nctemp11900= p;
struct nctempchar1 *nctemp11904;
static struct nctempchar1 nctemp11905 = {{ 2}, (char*)"/\0"};
nctemp11904=&nctemp11905;
nctempchar1* nctemp11902= nctemp11904;
int nctemp11906=CodeEs(nctemp11900,nctemp11902);
struct tree* nctemp11908= p;
struct nctempchar1 *nctemp11912;
static struct nctempchar1 nctemp11913 = {{ 2}, (char*)"(\0"};
nctemp11912=&nctemp11913;
nctempchar1* nctemp11910= nctemp11912;
int nctemp11914=CodeEs(nctemp11908,nctemp11910);
struct tree* nctemp11916= p;
nctempchar1* nctemp11918= qk;
int nctemp11921=CodeEs(nctemp11916,nctemp11918);
struct tree* nctemp11923= p;
struct nctempchar1 *nctemp11927;
static struct nctempchar1 nctemp11928 = {{ 2}, (char*)")\0"};
nctemp11927=&nctemp11928;
nctempchar1* nctemp11925= nctemp11927;
int nctemp11929=CodeEs(nctemp11923,nctemp11925);
struct tree* nctemp11931= p;
struct nctempchar1 *nctemp11935;
static struct nctempchar1 nctemp11936 = {{ 2}, (char*)")\0"};
nctemp11935=&nctemp11936;
nctempchar1* nctemp11933= nctemp11935;
int nctemp11937=CodeEs(nctemp11931,nctemp11933);
struct tree* nctemp11939= p;
struct nctempchar1 *nctemp11943;
static struct nctempchar1 nctemp11944 = {{ 2}, (char*)"%\0"};
nctemp11943=&nctemp11944;
nctempchar1* nctemp11941= nctemp11943;
int nctemp11945=CodeEs(nctemp11939,nctemp11941);
struct tree* nctemp11947= p;
int nctemp11951=l;
nctempchar1* nctemp11949= m->a[nctemp11951].s;
int nctemp11954=CodeEs(nctemp11947,nctemp11949);
struct tree* nctemp11956= p;
struct nctempchar1 *nctemp11960;
static struct nctempchar1 nctemp11961 = {{ 2}, (char*)"+\0"};
nctemp11960=&nctemp11961;
nctempchar1* nctemp11958= nctemp11960;
int nctemp11962=CodeEs(nctemp11956,nctemp11958);
struct tree* nctemp11964= p;
int nctemp11968=l;
nctempchar1* nctemp11966= nl->a[nctemp11968].s;
int nctemp11971=CodeEs(nctemp11964,nctemp11966);
int nctemp11974=l;
RunFree(nl->a[nctemp11974].s->a);
RunFree(nl->a[nctemp11974].s);
struct tree* nctemp11978= p;
struct nctempchar1 *nctemp11982;
static struct nctempchar1 nctemp11983 = {{ 4}, (char*)";\n\0"};
nctemp11982=&nctemp11983;
nctempchar1* nctemp11980= nctemp11982;
int nctemp11984=CodeEs(nctemp11978,nctemp11980);
}
nctempchar1* nctemp11990= qk;
struct nctempchar1 *nctemp11995;
static struct nctempchar1 nctemp11996 = {{ 2}, (char*)"*\0"};
nctemp11995=&nctemp11996;
nctempchar1* nctemp11993= nctemp11995;
nctempchar1* nctemp11997=LibeStradd(nctemp11990,nctemp11993);
tmp=nctemp11997;
RunFree(qk->a);
RunFree(qk);
qk = tmp;
nctempchar1* nctemp12006= qk;
int nctemp12011=l;
nctempchar1* nctemp12009= m->a[nctemp12011].s;
nctempchar1* nctemp12014=LibeStradd(nctemp12006,nctemp12009);
tmp=nctemp12014;
RunFree(qk->a);
RunFree(qk);
qk = tmp;
}
struct tree* nctemp12022= sp;
struct tree* nctemp12024=PtreeMvchild(nctemp12022);
p =nctemp12024;
struct tree* nctemp12029= p;
struct tree* nctemp12031=PtreeMvsister(nctemp12029);
p =nctemp12031;
struct tree* nctemp12033= p;
int nctemp12035=CodeCompstmnt(nctemp12033);
struct tree* nctemp12037= p;
struct nctempchar1 *nctemp12041;
static struct nctempchar1 nctemp12042 = {{ 4}, (char*)"}\n\0"};
nctemp12041=&nctemp12042;
nctempchar1* nctemp12039= nctemp12041;
int nctemp12043=CodeEs(nctemp12037,nctemp12039);
struct tree* nctemp12045= p;
struct nctempchar1 *nctemp12049;
static struct nctempchar1 nctemp12050 = {{ 4}, (char*)"}\n\0"};
nctemp12049=&nctemp12050;
nctempchar1* nctemp12047= nctemp12049;
int nctemp12051=CodeEs(nctemp12045,nctemp12047);
int nctemp12053= 0;
int nctemp12055=CodeSetparallel(nctemp12053);
return 1;
}
int CodeParallelstmnt (struct tree* p)
{
int nctemp12060=CodeGetarch();
int nctemp12057 = (nctemp12060 ==1);
if(nctemp12057)
{
struct tree* nctemp12063= p;
int nctemp12065=CodeParallelstmntcpu(nctemp12063);
}
else{
int nctemp12069=CodeGetarch();
int nctemp12066 = (nctemp12069 ==2);
if(nctemp12066)
{
struct tree* nctemp12072= p;
int nctemp12074=CodeParallelstmntgpu(nctemp12072);
}
else{
int nctemp12078=CodeGetarch();
int nctemp12075 = (nctemp12078 ==3);
if(nctemp12075)
{
struct tree* nctemp12081= p;
int nctemp12083=CodeParallelstmntgpu(nctemp12081);
}
}
}
return 1;
}
int CodeIfstmnt (struct tree* p)
{
nctempchar1 *cond;
struct tree* nctemp12089= p;
struct tree* nctemp12091=PtreeMvchild(nctemp12089);
p =nctemp12091;
struct tree* nctemp12097= p;
nctempchar1* nctemp12099=CodeExpr(nctemp12097);
cond=nctemp12099;
struct tree* nctemp12101= p;
struct nctempchar1 *nctemp12105;
static struct nctempchar1 nctemp12106 = {{ 4}, (char*)"if(\0"};
nctemp12105=&nctemp12106;
nctempchar1* nctemp12103= nctemp12105;
int nctemp12107=CodeEs(nctemp12101,nctemp12103);
struct tree* nctemp12109= p;
nctempchar1* nctemp12111= cond;
int nctemp12114=CodeEs(nctemp12109,nctemp12111);
struct tree* nctemp12116= p;
struct nctempchar1 *nctemp12120;
static struct nctempchar1 nctemp12121 = {{ 4}, (char*)")\n\0"};
nctemp12120=&nctemp12121;
nctempchar1* nctemp12118= nctemp12120;
int nctemp12122=CodeEs(nctemp12116,nctemp12118);
struct tree* nctemp12127= p;
struct tree* nctemp12129=PtreeMvsister(nctemp12127);
p =nctemp12129;
struct tree* nctemp12131= p;
int nctemp12133=CodeStmnt(nctemp12131);
struct tree* nctemp12141= p;
struct tree* nctemp12143=PtreeMvsister(nctemp12141);
p =nctemp12143;
int nctemp12134 = (p !=0);
if(nctemp12134)
{
struct tree* nctemp12150= p;
nctempchar1* nctemp12152=PtreeGetname(nctemp12150);
nctempchar1* nctemp12148= nctemp12152;
struct nctempchar1 *nctemp12155;
static struct nctempchar1 nctemp12156 = {{ 5}, (char*)"else\0"};
nctemp12155=&nctemp12156;
nctempchar1* nctemp12153= nctemp12155;
int nctemp12157=LibeStrcmp(nctemp12148,nctemp12153);
int nctemp12145 = (nctemp12157 ==1);
if(nctemp12145)
{
struct tree* nctemp12163= p;
struct tree* nctemp12165=PtreeMvchild(nctemp12163);
p =nctemp12165;
struct tree* nctemp12167= p;
struct nctempchar1 *nctemp12171;
static struct nctempchar1 nctemp12172 = {{ 5}, (char*)"else\0"};
nctemp12171=&nctemp12172;
nctempchar1* nctemp12169= nctemp12171;
int nctemp12173=CodeEs(nctemp12167,nctemp12169);
struct tree* nctemp12175= p;
int nctemp12177=CodeStmnt(nctemp12175);
}
}
return 1;
}
int CodeReturnstmnt (struct tree* p)
{
struct tree* np;
nctempchar1 *rval;
struct tree* nctemp12183= p;
struct tree* nctemp12185=PtreeMvchild(nctemp12183);
np =nctemp12185;
struct tree* nctemp12191= np;
nctempchar1* nctemp12193=CodeExpr(nctemp12191);
rval=nctemp12193;
struct tree* nctemp12195= np;
struct nctempchar1 *nctemp12199;
static struct nctempchar1 nctemp12200 = {{ 8}, (char*)"return \0"};
nctemp12199=&nctemp12200;
nctempchar1* nctemp12197= nctemp12199;
int nctemp12201=CodeEs(nctemp12195,nctemp12197);
struct tree* nctemp12203= np;
nctempchar1* nctemp12205= rval;
int nctemp12208=CodeEs(nctemp12203,nctemp12205);
struct tree* nctemp12210= np;
struct nctempchar1 *nctemp12214;
static struct nctempchar1 nctemp12215 = {{ 4}, (char*)";\n\0"};
nctemp12214=&nctemp12215;
nctempchar1* nctemp12212= nctemp12214;
int nctemp12216=CodeEs(nctemp12210,nctemp12212);
return 1;
}
int CodeCompstmnt (struct tree* p)
{
struct tree* sp;
struct tree* q;
struct tree* r;
sp = p;
struct tree* nctemp12219= p;
struct nctempchar1 *nctemp12223;
static struct nctempchar1 nctemp12224 = {{ 4}, (char*)"{\n\0"};
nctemp12223=&nctemp12224;
nctempchar1* nctemp12221= nctemp12223;
int nctemp12225=CodeEs(nctemp12219,nctemp12221);
struct tree* nctemp12230= p;
struct tree* nctemp12232=PtreeMvchild(nctemp12230);
p =nctemp12232;
int nctemp12233 = (p ==0);
if(nctemp12233)
{
struct tree* nctemp12238= sp;
struct nctempchar1 *nctemp12242;
static struct nctempchar1 nctemp12243 = {{ 4}, (char*)"}\n\0"};
nctemp12242=&nctemp12243;
nctempchar1* nctemp12240= nctemp12242;
int nctemp12244=CodeEs(nctemp12238,nctemp12240);
return 1;
}
struct tree* nctemp12247= p;
struct symbol* nctemp12251=SymGetltp();
struct symbol* nctemp12249= nctemp12251;
int nctemp12252=CodeDeclarations(nctemp12247,nctemp12249);
struct tree* nctemp12258= p;
nctempchar1* nctemp12260=PtreeGetname(nctemp12258);
nctempchar1* nctemp12256= nctemp12260;
struct nctempchar1 *nctemp12263;
static struct nctempchar1 nctemp12264 = {{ 13}, (char*)"declarations\0"};
nctemp12263=&nctemp12264;
nctempchar1* nctemp12261= nctemp12263;
int nctemp12265=LibeStrcmp(nctemp12256,nctemp12261);
int nctemp12253 = (nctemp12265 ==1);
if(nctemp12253)
{
struct tree* nctemp12271= p;
struct tree* nctemp12273=PtreeMvsister(nctemp12271);
p =nctemp12273;
}
int nctemp12274 = (p !=0);
int nctemp12278=nctemp12274;
while(nctemp12278)
{{
struct tree* nctemp12284= p;
nctempchar1* nctemp12286=PtreeGetname(nctemp12284);
nctempchar1* nctemp12282= nctemp12286;
struct nctempchar1 *nctemp12289;
static struct nctempchar1 nctemp12290 = {{ 5}, (char*)"expr\0"};
nctemp12289=&nctemp12290;
nctempchar1* nctemp12287= nctemp12289;
int nctemp12291=LibeStrcmp(nctemp12282,nctemp12287);
int nctemp12279 = (nctemp12291 ==1);
if(nctemp12279)
{
int nctemp12296=CodeGetbreak();
int nctemp12293 = (nctemp12296 ==1);
if(nctemp12293)
{
struct tree* nctemp12299= p;
nctempchar1* nctemp12301=CodeExpr(nctemp12299);
}
else{
struct tree* nctemp12305= p;
int nctemp12307=PtreeGetsimple(nctemp12305);
int nctemp12302 = (nctemp12307 ==1);
if(nctemp12302)
{
struct tree* nctemp12310= p;
int nctemp12312=CodeSexpr(nctemp12310);
struct tree* nctemp12314= p;
struct nctempchar1 *nctemp12318;
static struct nctempchar1 nctemp12319 = {{ 4}, (char*)";\n\0"};
nctemp12318=&nctemp12319;
nctempchar1* nctemp12316= nctemp12318;
int nctemp12320=CodeEs(nctemp12314,nctemp12316);
}
else{
struct tree* nctemp12322= p;
nctempchar1* nctemp12324=CodeExpr(nctemp12322);
}
}
}
struct tree* nctemp12330= p;
nctempchar1* nctemp12332=PtreeGetname(nctemp12330);
nctempchar1* nctemp12328= nctemp12332;
struct nctempchar1 *nctemp12335;
static struct nctempchar1 nctemp12336 = {{ 6}, (char*)"while\0"};
nctemp12335=&nctemp12336;
nctempchar1* nctemp12333= nctemp12335;
int nctemp12337=LibeStrcmp(nctemp12328,nctemp12333);
int nctemp12325 = (nctemp12337 ==1);
if(nctemp12325)
{
struct tree* nctemp12340= p;
int nctemp12342=CodeWhilestmnt(nctemp12340);
}
struct tree* nctemp12348= p;
nctempchar1* nctemp12350=PtreeGetname(nctemp12348);
nctempchar1* nctemp12346= nctemp12350;
struct nctempchar1 *nctemp12353;
static struct nctempchar1 nctemp12354 = {{ 4}, (char*)"for\0"};
nctemp12353=&nctemp12354;
nctempchar1* nctemp12351= nctemp12353;
int nctemp12355=LibeStrcmp(nctemp12346,nctemp12351);
int nctemp12343 = (nctemp12355 ==1);
if(nctemp12343)
{
struct tree* nctemp12361= p;
struct tree* nctemp12363=PtreeMvchild(nctemp12361);
q =nctemp12363;
struct tree* nctemp12368= q;
struct tree* nctemp12370=PtreeMvsister(nctemp12368);
r =nctemp12370;
struct tree* nctemp12377= q;
int nctemp12379=PtreeGetsimple(nctemp12377);
struct tree* nctemp12381= r;
int nctemp12383=PtreeGetsimple(nctemp12381);
int nctemp12374 = (nctemp12379 && nctemp12383);
struct tree* nctemp12387= r;
struct tree* nctemp12389=PtreeMvsister(nctemp12387);
struct tree* nctemp12385= nctemp12389;
int nctemp12390=PtreeGetsimple(nctemp12385);
int nctemp12371 = (nctemp12374 && nctemp12390);
if(nctemp12371)
{
struct tree* nctemp12392= p;
int nctemp12394=CodeSforstmnt(nctemp12392);
}
else{
struct tree* nctemp12396= q;
int nctemp12398= 0;
int nctemp12400=PtreeSetsimple(nctemp12396,nctemp12398);
struct tree* nctemp12402= r;
int nctemp12404= 0;
int nctemp12406=PtreeSetsimple(nctemp12402,nctemp12404);
struct tree* nctemp12410= r;
struct tree* nctemp12412=PtreeMvsister(nctemp12410);
struct tree* nctemp12408= nctemp12412;
int nctemp12413= 0;
int nctemp12415=PtreeSetsimple(nctemp12408,nctemp12413);
struct tree* nctemp12417= p;
int nctemp12419=CodeForstmnt(nctemp12417);
}
}
struct tree* nctemp12425= p;
nctempchar1* nctemp12427=PtreeGetname(nctemp12425);
nctempchar1* nctemp12423= nctemp12427;
struct nctempchar1 *nctemp12430;
static struct nctempchar1 nctemp12431 = {{ 9}, (char*)"parallel\0"};
nctemp12430=&nctemp12431;
nctempchar1* nctemp12428= nctemp12430;
int nctemp12432=LibeStrcmp(nctemp12423,nctemp12428);
int nctemp12420 = (nctemp12432 ==1);
if(nctemp12420)
{
struct tree* nctemp12435= p;
int nctemp12437=CodeParallelstmnt(nctemp12435);
}
struct tree* nctemp12443= p;
nctempchar1* nctemp12445=PtreeGetname(nctemp12443);
nctempchar1* nctemp12441= nctemp12445;
struct nctempchar1 *nctemp12448;
static struct nctempchar1 nctemp12449 = {{ 3}, (char*)"if\0"};
nctemp12448=&nctemp12449;
nctempchar1* nctemp12446= nctemp12448;
int nctemp12450=LibeStrcmp(nctemp12441,nctemp12446);
int nctemp12438 = (nctemp12450 ==1);
if(nctemp12438)
{
struct tree* nctemp12453= p;
int nctemp12455=CodeIfstmnt(nctemp12453);
}
struct tree* nctemp12461= p;
nctempchar1* nctemp12463=PtreeGetname(nctemp12461);
nctempchar1* nctemp12459= nctemp12463;
struct nctempchar1 *nctemp12466;
static struct nctempchar1 nctemp12467 = {{ 7}, (char*)"return\0"};
nctemp12466=&nctemp12467;
nctempchar1* nctemp12464= nctemp12466;
int nctemp12468=LibeStrcmp(nctemp12459,nctemp12464);
int nctemp12456 = (nctemp12468 ==1);
if(nctemp12456)
{
struct tree* nctemp12471= p;
int nctemp12473=CodeReturnstmnt(nctemp12471);
}
struct tree* nctemp12478= p;
struct tree* nctemp12480=PtreeMvsister(nctemp12478);
p =nctemp12480;
}
int nctemp12481 = (p !=0);
nctemp12278=nctemp12481;}struct tree* nctemp12486= sp;
struct nctempchar1 *nctemp12490;
static struct nctempchar1 nctemp12491 = {{ 4}, (char*)"}\n\0"};
nctemp12490=&nctemp12491;
nctempchar1* nctemp12488= nctemp12490;
int nctemp12492=CodeEs(nctemp12486,nctemp12488);
return 1;
}
int CodeStmnt (struct tree* p)
{
struct tree* sp;
struct tree* q;
struct tree* r;
sp = p;
struct tree* nctemp12495= p;
struct nctempchar1 *nctemp12499;
static struct nctempchar1 nctemp12500 = {{ 4}, (char*)"{\n\0"};
nctemp12499=&nctemp12500;
nctempchar1* nctemp12497= nctemp12499;
int nctemp12501=CodeEs(nctemp12495,nctemp12497);
struct tree* nctemp12507= p;
nctempchar1* nctemp12509=PtreeGetname(nctemp12507);
nctempchar1* nctemp12505= nctemp12509;
struct nctempchar1 *nctemp12512;
static struct nctempchar1 nctemp12513 = {{ 10}, (char*)"compstmnt\0"};
nctemp12512=&nctemp12513;
nctempchar1* nctemp12510= nctemp12512;
int nctemp12514=LibeStrcmp(nctemp12505,nctemp12510);
int nctemp12502 = (nctemp12514 ==1);
if(nctemp12502)
{
struct tree* nctemp12520= p;
struct tree* nctemp12522=PtreeMvchild(nctemp12520);
p =nctemp12522;
struct tree* nctemp12524= p;
struct symbol* nctemp12528=SymGetltp();
struct symbol* nctemp12526= nctemp12528;
int nctemp12529=CodeDeclarations(nctemp12524,nctemp12526);
struct tree* nctemp12535= p;
nctempchar1* nctemp12537=PtreeGetname(nctemp12535);
nctempchar1* nctemp12533= nctemp12537;
struct nctempchar1 *nctemp12540;
static struct nctempchar1 nctemp12541 = {{ 13}, (char*)"declarations\0"};
nctemp12540=&nctemp12541;
nctempchar1* nctemp12538= nctemp12540;
int nctemp12542=LibeStrcmp(nctemp12533,nctemp12538);
int nctemp12530 = (nctemp12542 ==1);
if(nctemp12530)
{
struct tree* nctemp12548= p;
struct tree* nctemp12550=PtreeMvsister(nctemp12548);
p =nctemp12550;
}
}
int nctemp12551 = (p !=0);
int nctemp12555=nctemp12551;
while(nctemp12555)
{{
struct tree* nctemp12561= p;
nctempchar1* nctemp12563=PtreeGetname(nctemp12561);
nctempchar1* nctemp12559= nctemp12563;
struct nctempchar1 *nctemp12566;
static struct nctempchar1 nctemp12567 = {{ 10}, (char*)"compstmnt\0"};
nctemp12566=&nctemp12567;
nctempchar1* nctemp12564= nctemp12566;
int nctemp12568=LibeStrcmp(nctemp12559,nctemp12564);
int nctemp12556 = (nctemp12568 ==1);
if(nctemp12556)
{
struct tree* nctemp12571= p;
int nctemp12573=CodeCompstmnt(nctemp12571);
}
struct tree* nctemp12579= p;
nctempchar1* nctemp12581=PtreeGetname(nctemp12579);
nctempchar1* nctemp12577= nctemp12581;
struct nctempchar1 *nctemp12584;
static struct nctempchar1 nctemp12585 = {{ 5}, (char*)"expr\0"};
nctemp12584=&nctemp12585;
nctempchar1* nctemp12582= nctemp12584;
int nctemp12586=LibeStrcmp(nctemp12577,nctemp12582);
int nctemp12574 = (nctemp12586 ==1);
if(nctemp12574)
{
int nctemp12591=CodeGetbreak();
int nctemp12588 = (nctemp12591 ==1);
if(nctemp12588)
{
struct tree* nctemp12594= p;
nctempchar1* nctemp12596=CodeExpr(nctemp12594);
}
else{
struct tree* nctemp12600= p;
int nctemp12602=PtreeGetsimple(nctemp12600);
int nctemp12597 = (nctemp12602 ==1);
if(nctemp12597)
{
struct tree* nctemp12605= p;
int nctemp12607=CodeSexpr(nctemp12605);
struct tree* nctemp12609= p;
struct nctempchar1 *nctemp12613;
static struct nctempchar1 nctemp12614 = {{ 4}, (char*)";\n\0"};
nctemp12613=&nctemp12614;
nctempchar1* nctemp12611= nctemp12613;
int nctemp12615=CodeEs(nctemp12609,nctemp12611);
}
else{
struct tree* nctemp12617= p;
nctempchar1* nctemp12619=CodeExpr(nctemp12617);
}
}
}
struct tree* nctemp12625= p;
nctempchar1* nctemp12627=PtreeGetname(nctemp12625);
nctempchar1* nctemp12623= nctemp12627;
struct nctempchar1 *nctemp12630;
static struct nctempchar1 nctemp12631 = {{ 6}, (char*)"while\0"};
nctemp12630=&nctemp12631;
nctempchar1* nctemp12628= nctemp12630;
int nctemp12632=LibeStrcmp(nctemp12623,nctemp12628);
int nctemp12620 = (nctemp12632 ==1);
if(nctemp12620)
{
struct tree* nctemp12635= p;
int nctemp12637=CodeWhilestmnt(nctemp12635);
}
struct tree* nctemp12643= p;
nctempchar1* nctemp12645=PtreeGetname(nctemp12643);
nctempchar1* nctemp12641= nctemp12645;
struct nctempchar1 *nctemp12648;
static struct nctempchar1 nctemp12649 = {{ 4}, (char*)"for\0"};
nctemp12648=&nctemp12649;
nctempchar1* nctemp12646= nctemp12648;
int nctemp12650=LibeStrcmp(nctemp12641,nctemp12646);
int nctemp12638 = (nctemp12650 ==1);
if(nctemp12638)
{
struct tree* nctemp12656= p;
struct tree* nctemp12658=PtreeMvchild(nctemp12656);
q =nctemp12658;
struct tree* nctemp12663= q;
struct tree* nctemp12665=PtreeMvsister(nctemp12663);
r =nctemp12665;
struct tree* nctemp12672= q;
int nctemp12674=PtreeGetsimple(nctemp12672);
struct tree* nctemp12676= r;
int nctemp12678=PtreeGetsimple(nctemp12676);
int nctemp12669 = (nctemp12674 && nctemp12678);
struct tree* nctemp12682= r;
struct tree* nctemp12684=PtreeMvsister(nctemp12682);
struct tree* nctemp12680= nctemp12684;
int nctemp12685=PtreeGetsimple(nctemp12680);
int nctemp12666 = (nctemp12669 && nctemp12685);
if(nctemp12666)
{
struct tree* nctemp12687= p;
int nctemp12689=CodeSforstmnt(nctemp12687);
}
else{
struct tree* nctemp12691= q;
int nctemp12693= 0;
int nctemp12695=PtreeSetsimple(nctemp12691,nctemp12693);
struct tree* nctemp12697= r;
int nctemp12699= 0;
int nctemp12701=PtreeSetsimple(nctemp12697,nctemp12699);
struct tree* nctemp12705= r;
struct tree* nctemp12707=PtreeMvsister(nctemp12705);
struct tree* nctemp12703= nctemp12707;
int nctemp12708= 0;
int nctemp12710=PtreeSetsimple(nctemp12703,nctemp12708);
struct tree* nctemp12712= p;
int nctemp12714=CodeForstmnt(nctemp12712);
}
}
struct tree* nctemp12720= p;
nctempchar1* nctemp12722=PtreeGetname(nctemp12720);
nctempchar1* nctemp12718= nctemp12722;
struct nctempchar1 *nctemp12725;
static struct nctempchar1 nctemp12726 = {{ 9}, (char*)"parallel\0"};
nctemp12725=&nctemp12726;
nctempchar1* nctemp12723= nctemp12725;
int nctemp12727=LibeStrcmp(nctemp12718,nctemp12723);
int nctemp12715 = (nctemp12727 ==1);
if(nctemp12715)
{
struct tree* nctemp12730= p;
int nctemp12732=CodeParallelstmnt(nctemp12730);
}
struct tree* nctemp12738= p;
nctempchar1* nctemp12740=PtreeGetname(nctemp12738);
nctempchar1* nctemp12736= nctemp12740;
struct nctempchar1 *nctemp12743;
static struct nctempchar1 nctemp12744 = {{ 3}, (char*)"if\0"};
nctemp12743=&nctemp12744;
nctempchar1* nctemp12741= nctemp12743;
int nctemp12745=LibeStrcmp(nctemp12736,nctemp12741);
int nctemp12733 = (nctemp12745 ==1);
if(nctemp12733)
{
struct tree* nctemp12748= p;
int nctemp12750=CodeIfstmnt(nctemp12748);
}
struct tree* nctemp12756= p;
nctempchar1* nctemp12758=PtreeGetname(nctemp12756);
nctempchar1* nctemp12754= nctemp12758;
struct nctempchar1 *nctemp12761;
static struct nctempchar1 nctemp12762 = {{ 7}, (char*)"return\0"};
nctemp12761=&nctemp12762;
nctempchar1* nctemp12759= nctemp12761;
int nctemp12763=LibeStrcmp(nctemp12754,nctemp12759);
int nctemp12751 = (nctemp12763 ==1);
if(nctemp12751)
{
struct tree* nctemp12766= p;
int nctemp12768=CodeReturnstmnt(nctemp12766);
}
struct tree* nctemp12773= p;
struct tree* nctemp12775=PtreeMvsister(nctemp12773);
p =nctemp12775;
}
int nctemp12776 = (p !=0);
nctemp12555=nctemp12776;}struct tree* nctemp12781= sp;
struct nctempchar1 *nctemp12785;
static struct nctempchar1 nctemp12786 = {{ 4}, (char*)"}\n\0"};
nctemp12785=&nctemp12786;
nctempchar1* nctemp12783= nctemp12785;
int nctemp12787=CodeEs(nctemp12781,nctemp12783);
return 1;
}
int CodeNewdescr (struct tree* p,nctempchar1 *pointer)
{
struct tree* nctemp12790= p;
nctempchar1* nctemp12792= pointer;
int nctemp12795=CodeEs(nctemp12790,nctemp12792);
struct tree* nctemp12797= p;
struct nctempchar1 *nctemp12801;
static struct nctempchar1 nctemp12802 = {{ 2}, (char*)"=\0"};
nctemp12801=&nctemp12802;
nctempchar1* nctemp12799= nctemp12801;
int nctemp12803=CodeEs(nctemp12797,nctemp12799);
struct tree* nctemp12805= p;
struct nctempchar1 *nctemp12809;
static struct nctempchar1 nctemp12810 = {{ 11}, (char*)"RunMalloc(\0"};
nctemp12809=&nctemp12810;
nctempchar1* nctemp12807= nctemp12809;
int nctemp12811=CodeEs(nctemp12805,nctemp12807);
struct tree* nctemp12813= p;
struct nctempchar1 *nctemp12817;
static struct nctempchar1 nctemp12818 = {{ 8}, (char*)"sizeof(\0"};
nctemp12817=&nctemp12818;
nctempchar1* nctemp12815= nctemp12817;
int nctemp12819=CodeEs(nctemp12813,nctemp12815);
struct tree* nctemp12821= p;
nctempchar1* nctemp12823= pointer;
int nctemp12826=CodeEs(nctemp12821,nctemp12823);
struct tree* nctemp12828= p;
struct nctempchar1 *nctemp12832;
static struct nctempchar1 nctemp12833 = {{ 6}, (char*)"));\n\0"};
nctemp12832=&nctemp12833;
nctempchar1* nctemp12830= nctemp12832;
int nctemp12834=CodeEs(nctemp12828,nctemp12830);
return 1;
}
int CodeFdef (struct tree* p)
{
int nctemp12839=CodeGetarch();
int nctemp12836 = (nctemp12839 ==1);
if(nctemp12836)
{
struct tree* nctemp12842= p;
int nctemp12844=CodeFdefcpu(nctemp12842);
}
else{
int nctemp12848=CodeGetarch();
int nctemp12845 = (nctemp12848 ==2);
if(nctemp12845)
{
struct tree* nctemp12857= p;
struct tree* nctemp12859=PtreeMvchild(nctemp12857);
struct tree* nctemp12855= nctemp12859;
nctempchar1* nctemp12860=PtreeGetparallel(nctemp12855);
nctempchar1* nctemp12853= nctemp12860;
struct nctempchar1 *nctemp12863;
static struct nctempchar1 nctemp12864 = {{ 9}, (char*)"parallel\0"};
nctemp12863=&nctemp12864;
nctempchar1* nctemp12861= nctemp12863;
int nctemp12865=LibeStrcmp(nctemp12853,nctemp12861);
int nctemp12850 = (nctemp12865 ==1);
if(nctemp12850)
{
struct tree* nctemp12868= p;
int nctemp12870=CodeFdefgpu(nctemp12868);
struct tree* nctemp12872= p;
int nctemp12874=CodeFdewrappergpu(nctemp12872);
}
else{
struct tree* nctemp12876= p;
int nctemp12878=CodeFdefcpu(nctemp12876);
}
}
else{
int nctemp12882=CodeGetarch();
int nctemp12879 = (nctemp12882 ==3);
if(nctemp12879)
{
struct tree* nctemp12889= p;
nctempchar1* nctemp12891=PtreeGetparallel(nctemp12889);
nctempchar1* nctemp12887= nctemp12891;
struct nctempchar1 *nctemp12894;
static struct nctempchar1 nctemp12895 = {{ 9}, (char*)"parallel\0"};
nctemp12894=&nctemp12895;
nctempchar1* nctemp12892= nctemp12894;
int nctemp12896=LibeStrcmp(nctemp12887,nctemp12892);
int nctemp12884 = (nctemp12896 ==1);
if(nctemp12884)
{
struct tree* nctemp12899= p;
int nctemp12901=CodeFdefgpu(nctemp12899);
struct tree* nctemp12903= p;
int nctemp12905=CodeFdewrappergpu(nctemp12903);
}
else{
struct tree* nctemp12907= p;
int nctemp12909=CodeFdefcpu(nctemp12907);
}
}
}
}
return 1;
}
int CodePreamblecpu ()
{
struct tree* p;
struct nctempchar1 *nctemp12917;
static struct nctempchar1 nctemp12918 = {{ 6}, (char*)"dummy\0"};
nctemp12917=&nctemp12918;
nctempchar1* nctemp12915= nctemp12917;
struct nctempchar1 *nctemp12921;
static struct nctempchar1 nctemp12922 = {{ 6}, (char*)"dummy\0"};
nctemp12921=&nctemp12922;
nctempchar1* nctemp12919= nctemp12921;
struct tree* nctemp12923=PtreeMknode(nctemp12915,nctemp12919);
p =nctemp12923;
struct tree* nctemp12925= p;
int nctemp12927= 1;
int nctemp12929=PtreeSetline(nctemp12925,nctemp12927);
struct tree* nctemp12931= p;
struct nctempchar1 *nctemp12935;
static struct nctempchar1 nctemp12936 = {{ 42}, (char*)"//  Translated by epsc  version today  \n\0"};
nctemp12935=&nctemp12936;
nctempchar1* nctemp12933= nctemp12935;
int nctemp12937=CodeEs(nctemp12931,nctemp12933);
struct tree* nctemp12939= p;
int nctemp12941= 2;
int nctemp12943=PtreeSetline(nctemp12939,nctemp12941);
struct tree* nctemp12945= p;
int nctemp12947= 3;
int nctemp12949=PtreeSetline(nctemp12945,nctemp12947);
struct tree* nctemp12951= p;
int nctemp12953= 4;
int nctemp12955=PtreeSetline(nctemp12951,nctemp12953);
struct tree* nctemp12957= p;
struct nctempchar1 *nctemp12961;
static struct nctempchar1 nctemp12962 = {{ 22}, (char*)"#include <stddef.h>\n\0"};
nctemp12961=&nctemp12962;
nctempchar1* nctemp12959= nctemp12961;
int nctemp12963=CodeEs(nctemp12957,nctemp12959);
struct tree* nctemp12965= p;
struct nctempchar1 *nctemp12969;
static struct nctempchar1 nctemp12970 = {{ 21}, (char*)"#include <stdio.h>\n\0"};
nctemp12969=&nctemp12970;
nctempchar1* nctemp12967= nctemp12969;
int nctemp12971=CodeEs(nctemp12965,nctemp12967);
struct tree* nctemp12973= p;
struct nctempchar1 *nctemp12977;
static struct nctempchar1 nctemp12978 = {{ 22}, (char*)"#include <assert.h>\n\0"};
nctemp12977=&nctemp12978;
nctempchar1* nctemp12975= nctemp12977;
int nctemp12979=CodeEs(nctemp12973,nctemp12975);
struct tree* nctemp12981= p;
struct nctempchar1 *nctemp12985;
static struct nctempchar1 nctemp12986 = {{ 48}, (char*)"typedef struct { float r; float i;} complex; \n\0"};
nctemp12985=&nctemp12986;
nctempchar1* nctemp12983= nctemp12985;
int nctemp12987=CodeEs(nctemp12981,nctemp12983);
struct tree* nctemp12989= p;
int nctemp12991= 3;
int nctemp12993=PtreeSetline(nctemp12989,nctemp12991);
struct tree* nctemp12995= p;
struct nctempchar1 *nctemp12999;
static struct nctempchar1 nctemp13000 = {{ 68}, (char*)"typedef struct nctempfloat1 { int d[1]; float *a;} nctempfloat1; \n\0"};
nctemp12999=&nctemp13000;
nctempchar1* nctemp12997= nctemp12999;
int nctemp13001=CodeEs(nctemp12995,nctemp12997);
struct tree* nctemp13003= p;
int nctemp13005= 5;
int nctemp13007=PtreeSetline(nctemp13003,nctemp13005);
struct tree* nctemp13009= p;
struct nctempchar1 *nctemp13013;
static struct nctempchar1 nctemp13014 = {{ 62}, (char*)"typedef struct nctempint1 { int d[1]; int *a;} nctempint1; \n\0"};
nctemp13013=&nctemp13014;
nctempchar1* nctemp13011= nctemp13013;
int nctemp13015=CodeEs(nctemp13009,nctemp13011);
struct tree* nctemp13017= p;
int nctemp13019= 7;
int nctemp13021=PtreeSetline(nctemp13017,nctemp13019);
struct tree* nctemp13023= p;
struct nctempchar1 *nctemp13027;
static struct nctempchar1 nctemp13028 = {{ 65}, (char*)"typedef struct nctempchar1 { int d[1]; char *a;} nctempchar1; \n\0"};
nctemp13027=&nctemp13028;
nctempchar1* nctemp13025= nctemp13027;
int nctemp13029=CodeEs(nctemp13023,nctemp13025);
struct tree* nctemp13031= p;
int nctemp13033= 7;
int nctemp13035=PtreeSetline(nctemp13031,nctemp13033);
struct tree* nctemp13037= p;
struct nctempchar1 *nctemp13041;
static struct nctempchar1 nctemp13042 = {{ 74}, (char*)"typedef struct nctempcomplex1 { int d[1]; complex *a;} nctempcomplex1; \n\0"};
nctemp13041=&nctemp13042;
nctempchar1* nctemp13039= nctemp13041;
int nctemp13043=CodeEs(nctemp13037,nctemp13039);
struct tree* nctemp13045= p;
int nctemp13047= 8;
int nctemp13049=PtreeSetline(nctemp13045,nctemp13047);
int nctemp13053=CodeArraycheck();
int nctemp13050 = (nctemp13053 ==1);
if(nctemp13050)
{
struct tree* nctemp13056= p;
struct nctempchar1 *nctemp13060;
static struct nctempchar1 nctemp13061 = {{ 55}, (char*)"static struct nctempchar1 nctempstringx = {0, NULL};\n\0"};
nctemp13060=&nctemp13061;
nctempchar1* nctemp13058= nctemp13060;
int nctemp13062=CodeEs(nctemp13056,nctemp13058);
struct tree* nctemp13064= p;
struct nctempchar1 *nctemp13068;
static struct nctempchar1 nctemp13069 = {{ 60}, (char*)"static struct nctempchar1 *nctempstring = &nctempstringx;\n\0"};
nctemp13068=&nctemp13069;
nctempchar1* nctemp13066= nctemp13068;
int nctemp13070=CodeEs(nctemp13064,nctemp13066);
struct tree* nctemp13072= p;
int nctemp13074= 8;
int nctemp13076=PtreeSetline(nctemp13072,nctemp13074);
}
struct tree* nctemp13078= p;
struct nctempchar1 *nctemp13082;
static struct nctempchar1 nctemp13083 = {{ 68}, (char*)"typedef struct nctempfloat2 { int d[2]; float *a;} nctempfloat2; \n\0"};
nctemp13082=&nctemp13083;
nctempchar1* nctemp13080= nctemp13082;
int nctemp13084=CodeEs(nctemp13078,nctemp13080);
struct tree* nctemp13086= p;
int nctemp13088= 10;
int nctemp13090=PtreeSetline(nctemp13086,nctemp13088);
struct tree* nctemp13092= p;
struct nctempchar1 *nctemp13096;
static struct nctempchar1 nctemp13097 = {{ 62}, (char*)"typedef struct nctempint2 { int d[2]; int *a;} nctempint2; \n\0"};
nctemp13096=&nctemp13097;
nctempchar1* nctemp13094= nctemp13096;
int nctemp13098=CodeEs(nctemp13092,nctemp13094);
struct tree* nctemp13100= p;
int nctemp13102= 10;
int nctemp13104=PtreeSetline(nctemp13100,nctemp13102);
struct tree* nctemp13106= p;
struct nctempchar1 *nctemp13110;
static struct nctempchar1 nctemp13111 = {{ 65}, (char*)"typedef struct nctempchar2 { int d[2]; char *a;} nctempchar2; \n\0"};
nctemp13110=&nctemp13111;
nctempchar1* nctemp13108= nctemp13110;
int nctemp13112=CodeEs(nctemp13106,nctemp13108);
struct tree* nctemp13114= p;
int nctemp13116= 12;
int nctemp13118=PtreeSetline(nctemp13114,nctemp13116);
struct tree* nctemp13120= p;
struct nctempchar1 *nctemp13124;
static struct nctempchar1 nctemp13125 = {{ 74}, (char*)"typedef struct nctempcomplex2 { int d[2]; complex *a;} nctempcomplex2; \n\0"};
nctemp13124=&nctemp13125;
nctempchar1* nctemp13122= nctemp13124;
int nctemp13126=CodeEs(nctemp13120,nctemp13122);
struct tree* nctemp13128= p;
int nctemp13130= 13;
int nctemp13132=PtreeSetline(nctemp13128,nctemp13130);
struct tree* nctemp13134= p;
struct nctempchar1 *nctemp13138;
static struct nctempchar1 nctemp13139 = {{ 68}, (char*)"typedef struct nctempfloat3 { int d[3]; float *a;} nctempfloat3; \n\0"};
nctemp13138=&nctemp13139;
nctempchar1* nctemp13136= nctemp13138;
int nctemp13140=CodeEs(nctemp13134,nctemp13136);
struct tree* nctemp13142= p;
int nctemp13144= 14;
int nctemp13146=PtreeSetline(nctemp13142,nctemp13144);
struct tree* nctemp13148= p;
struct nctempchar1 *nctemp13152;
static struct nctempchar1 nctemp13153 = {{ 62}, (char*)"typedef struct nctempint3 { int d[3]; int *a;} nctempint3; \n\0"};
nctemp13152=&nctemp13153;
nctempchar1* nctemp13150= nctemp13152;
int nctemp13154=CodeEs(nctemp13148,nctemp13150);
struct tree* nctemp13156= p;
int nctemp13158= 15;
int nctemp13160=PtreeSetline(nctemp13156,nctemp13158);
struct tree* nctemp13162= p;
struct nctempchar1 *nctemp13166;
static struct nctempchar1 nctemp13167 = {{ 65}, (char*)"typedef struct nctempchar3 { int d[3]; char *a;} nctempchar3; \n\0"};
nctemp13166=&nctemp13167;
nctempchar1* nctemp13164= nctemp13166;
int nctemp13168=CodeEs(nctemp13162,nctemp13164);
struct tree* nctemp13170= p;
int nctemp13172= 16;
int nctemp13174=PtreeSetline(nctemp13170,nctemp13172);
struct tree* nctemp13176= p;
struct nctempchar1 *nctemp13180;
static struct nctempchar1 nctemp13181 = {{ 74}, (char*)"typedef struct nctempcomplex3 { int d[3]; complex *a;} nctempcomplex3; \n\0"};
nctemp13180=&nctemp13181;
nctempchar1* nctemp13178= nctemp13180;
int nctemp13182=CodeEs(nctemp13176,nctemp13178);
struct tree* nctemp13184= p;
int nctemp13186= 17;
int nctemp13188=PtreeSetline(nctemp13184,nctemp13186);
struct tree* nctemp13190= p;
struct nctempchar1 *nctemp13194;
static struct nctempchar1 nctemp13195 = {{ 68}, (char*)"typedef struct nctempfloat4 { int d[4]; float *a;} nctempfloat4; \n\0"};
nctemp13194=&nctemp13195;
nctempchar1* nctemp13192= nctemp13194;
int nctemp13196=CodeEs(nctemp13190,nctemp13192);
struct tree* nctemp13198= p;
int nctemp13200= 18;
int nctemp13202=PtreeSetline(nctemp13198,nctemp13200);
struct tree* nctemp13204= p;
struct nctempchar1 *nctemp13208;
static struct nctempchar1 nctemp13209 = {{ 62}, (char*)"typedef struct nctempint4 { int d[4]; int *a;} nctempint4; \n\0"};
nctemp13208=&nctemp13209;
nctempchar1* nctemp13206= nctemp13208;
int nctemp13210=CodeEs(nctemp13204,nctemp13206);
struct tree* nctemp13212= p;
int nctemp13214= 19;
int nctemp13216=PtreeSetline(nctemp13212,nctemp13214);
struct tree* nctemp13218= p;
struct nctempchar1 *nctemp13222;
static struct nctempchar1 nctemp13223 = {{ 65}, (char*)"typedef struct nctempchar4 { int d[4]; char *a;} nctempchar4; \n\0"};
nctemp13222=&nctemp13223;
nctempchar1* nctemp13220= nctemp13222;
int nctemp13224=CodeEs(nctemp13218,nctemp13220);
struct tree* nctemp13226= p;
int nctemp13228= 20;
int nctemp13230=PtreeSetline(nctemp13226,nctemp13228);
struct tree* nctemp13232= p;
struct nctempchar1 *nctemp13236;
static struct nctempchar1 nctemp13237 = {{ 74}, (char*)"typedef struct nctempcomplex4 { int d[4]; complex *a;} nctempcomplex4; \n\0"};
nctemp13236=&nctemp13237;
nctempchar1* nctemp13234= nctemp13236;
int nctemp13238=CodeEs(nctemp13232,nctemp13234);
struct tree* nctemp13240= p;
struct nctempchar1 *nctemp13244;
static struct nctempchar1 nctemp13245 = {{ 22}, (char*)"#include <stdlib.h>\n\0"};
nctemp13244=&nctemp13245;
nctempchar1* nctemp13242= nctemp13244;
int nctemp13246=CodeEs(nctemp13240,nctemp13242);
struct tree* nctemp13248= p;
struct nctempchar1 *nctemp13252;
static struct nctempchar1 nctemp13253 = {{ 22}, (char*)"#include <string.h>\n\0"};
nctemp13252=&nctemp13253;
nctempchar1* nctemp13250= nctemp13252;
int nctemp13254=CodeEs(nctemp13248,nctemp13250);
struct tree* nctemp13256= p;
struct nctempchar1 *nctemp13260;
static struct nctempchar1 nctemp13261 = {{ 27}, (char*)"void *RunMalloc(int n); \n\0"};
nctemp13260=&nctemp13261;
nctempchar1* nctemp13258= nctemp13260;
int nctemp13262=CodeEs(nctemp13256,nctemp13258);
struct tree* nctemp13264= p;
struct nctempchar1 *nctemp13268;
static struct nctempchar1 nctemp13269 = {{ 25}, (char*)"int RunFree(void *n); \n\0"};
nctemp13268=&nctemp13269;
nctempchar1* nctemp13266= nctemp13268;
int nctemp13270=CodeEs(nctemp13264,nctemp13266);
return 1;
}
int CodePreamblecuda ()
{
struct tree* p;
struct nctempchar1 *nctemp13278;
static struct nctempchar1 nctemp13279 = {{ 6}, (char*)"dummy\0"};
nctemp13278=&nctemp13279;
nctempchar1* nctemp13276= nctemp13278;
struct nctempchar1 *nctemp13282;
static struct nctempchar1 nctemp13283 = {{ 6}, (char*)"dummy\0"};
nctemp13282=&nctemp13283;
nctempchar1* nctemp13280= nctemp13282;
struct tree* nctemp13284=PtreeMknode(nctemp13276,nctemp13280);
p =nctemp13284;
struct tree* nctemp13286= p;
int nctemp13288= 1;
int nctemp13290=PtreeSetline(nctemp13286,nctemp13288);
struct tree* nctemp13292= p;
struct nctempchar1 *nctemp13296;
static struct nctempchar1 nctemp13297 = {{ 50}, (char*)"//  Translated by epsc  version December 2021  \n\0"};
nctemp13296=&nctemp13297;
nctempchar1* nctemp13294= nctemp13296;
int nctemp13298=CodeEs(nctemp13292,nctemp13294);
struct tree* nctemp13300= p;
int nctemp13302= 2;
int nctemp13304=PtreeSetline(nctemp13300,nctemp13302);
struct tree* nctemp13306= p;
int nctemp13308= 3;
int nctemp13310=PtreeSetline(nctemp13306,nctemp13308);
struct tree* nctemp13312= p;
struct nctempchar1 *nctemp13316;
static struct nctempchar1 nctemp13317 = {{ 17}, (char*)"extern \"C\" {\n\0"};
nctemp13316=&nctemp13317;
nctempchar1* nctemp13314= nctemp13316;
int nctemp13318=CodeEs(nctemp13312,nctemp13314);
struct tree* nctemp13320= p;
struct nctempchar1 *nctemp13324;
static struct nctempchar1 nctemp13325 = {{ 48}, (char*)"typedef struct { float r; float i;} complex; \n\0"};
nctemp13324=&nctemp13325;
nctempchar1* nctemp13322= nctemp13324;
int nctemp13326=CodeEs(nctemp13320,nctemp13322);
struct tree* nctemp13328= p;
int nctemp13330= 3;
int nctemp13332=PtreeSetline(nctemp13328,nctemp13330);
struct tree* nctemp13334= p;
struct nctempchar1 *nctemp13338;
static struct nctempchar1 nctemp13339 = {{ 68}, (char*)"typedef struct nctempfloat1 { int d[1]; float *a;} nctempfloat1; \n\0"};
nctemp13338=&nctemp13339;
nctempchar1* nctemp13336= nctemp13338;
int nctemp13340=CodeEs(nctemp13334,nctemp13336);
struct tree* nctemp13342= p;
int nctemp13344= 5;
int nctemp13346=PtreeSetline(nctemp13342,nctemp13344);
struct tree* nctemp13348= p;
struct nctempchar1 *nctemp13352;
static struct nctempchar1 nctemp13353 = {{ 62}, (char*)"typedef struct nctempint1 { int d[1]; int *a;} nctempint1; \n\0"};
nctemp13352=&nctemp13353;
nctempchar1* nctemp13350= nctemp13352;
int nctemp13354=CodeEs(nctemp13348,nctemp13350);
struct tree* nctemp13356= p;
int nctemp13358= 7;
int nctemp13360=PtreeSetline(nctemp13356,nctemp13358);
struct tree* nctemp13362= p;
struct nctempchar1 *nctemp13366;
static struct nctempchar1 nctemp13367 = {{ 65}, (char*)"typedef struct nctempchar1 { int d[1]; char *a;} nctempchar1; \n\0"};
nctemp13366=&nctemp13367;
nctempchar1* nctemp13364= nctemp13366;
int nctemp13368=CodeEs(nctemp13362,nctemp13364);
struct tree* nctemp13370= p;
int nctemp13372= 7;
int nctemp13374=PtreeSetline(nctemp13370,nctemp13372);
struct tree* nctemp13376= p;
struct nctempchar1 *nctemp13380;
static struct nctempchar1 nctemp13381 = {{ 74}, (char*)"typedef struct nctempcomplex1 { int d[1]; complex *a;} nctempcomplex1; \n\0"};
nctemp13380=&nctemp13381;
nctempchar1* nctemp13378= nctemp13380;
int nctemp13382=CodeEs(nctemp13376,nctemp13378);
struct tree* nctemp13384= p;
int nctemp13386= 8;
int nctemp13388=PtreeSetline(nctemp13384,nctemp13386);
int nctemp13392=CodeArraycheck();
int nctemp13389 = (nctemp13392 ==1);
if(nctemp13389)
{
struct tree* nctemp13395= p;
struct nctempchar1 *nctemp13399;
static struct nctempchar1 nctemp13400 = {{ 55}, (char*)"static struct nctempchar1 nctempstringx = {0, NULL};\n\0"};
nctemp13399=&nctemp13400;
nctempchar1* nctemp13397= nctemp13399;
int nctemp13401=CodeEs(nctemp13395,nctemp13397);
struct tree* nctemp13403= p;
struct nctempchar1 *nctemp13407;
static struct nctempchar1 nctemp13408 = {{ 60}, (char*)"static struct nctempchar1 *nctempstring = &nctempstringx;\n\0"};
nctemp13407=&nctemp13408;
nctempchar1* nctemp13405= nctemp13407;
int nctemp13409=CodeEs(nctemp13403,nctemp13405);
struct tree* nctemp13411= p;
int nctemp13413= 8;
int nctemp13415=PtreeSetline(nctemp13411,nctemp13413);
}
struct tree* nctemp13417= p;
struct nctempchar1 *nctemp13421;
static struct nctempchar1 nctemp13422 = {{ 68}, (char*)"typedef struct nctempfloat2 { int d[2]; float *a;} nctempfloat2; \n\0"};
nctemp13421=&nctemp13422;
nctempchar1* nctemp13419= nctemp13421;
int nctemp13423=CodeEs(nctemp13417,nctemp13419);
struct tree* nctemp13425= p;
int nctemp13427= 10;
int nctemp13429=PtreeSetline(nctemp13425,nctemp13427);
struct tree* nctemp13431= p;
struct nctempchar1 *nctemp13435;
static struct nctempchar1 nctemp13436 = {{ 62}, (char*)"typedef struct nctempint2 { int d[2]; int *a;} nctempint2; \n\0"};
nctemp13435=&nctemp13436;
nctempchar1* nctemp13433= nctemp13435;
int nctemp13437=CodeEs(nctemp13431,nctemp13433);
struct tree* nctemp13439= p;
int nctemp13441= 10;
int nctemp13443=PtreeSetline(nctemp13439,nctemp13441);
struct tree* nctemp13445= p;
struct nctempchar1 *nctemp13449;
static struct nctempchar1 nctemp13450 = {{ 65}, (char*)"typedef struct nctempchar2 { int d[2]; char *a;} nctempchar2; \n\0"};
nctemp13449=&nctemp13450;
nctempchar1* nctemp13447= nctemp13449;
int nctemp13451=CodeEs(nctemp13445,nctemp13447);
struct tree* nctemp13453= p;
int nctemp13455= 12;
int nctemp13457=PtreeSetline(nctemp13453,nctemp13455);
struct tree* nctemp13459= p;
struct nctempchar1 *nctemp13463;
static struct nctempchar1 nctemp13464 = {{ 74}, (char*)"typedef struct nctempcomplex2 { int d[2]; complex *a;} nctempcomplex2; \n\0"};
nctemp13463=&nctemp13464;
nctempchar1* nctemp13461= nctemp13463;
int nctemp13465=CodeEs(nctemp13459,nctemp13461);
struct tree* nctemp13467= p;
int nctemp13469= 13;
int nctemp13471=PtreeSetline(nctemp13467,nctemp13469);
struct tree* nctemp13473= p;
struct nctempchar1 *nctemp13477;
static struct nctempchar1 nctemp13478 = {{ 68}, (char*)"typedef struct nctempfloat3 { int d[3]; float *a;} nctempfloat3; \n\0"};
nctemp13477=&nctemp13478;
nctempchar1* nctemp13475= nctemp13477;
int nctemp13479=CodeEs(nctemp13473,nctemp13475);
struct tree* nctemp13481= p;
int nctemp13483= 14;
int nctemp13485=PtreeSetline(nctemp13481,nctemp13483);
struct tree* nctemp13487= p;
struct nctempchar1 *nctemp13491;
static struct nctempchar1 nctemp13492 = {{ 62}, (char*)"typedef struct nctempint3 { int d[3]; int *a;} nctempint3; \n\0"};
nctemp13491=&nctemp13492;
nctempchar1* nctemp13489= nctemp13491;
int nctemp13493=CodeEs(nctemp13487,nctemp13489);
struct tree* nctemp13495= p;
int nctemp13497= 15;
int nctemp13499=PtreeSetline(nctemp13495,nctemp13497);
struct tree* nctemp13501= p;
struct nctempchar1 *nctemp13505;
static struct nctempchar1 nctemp13506 = {{ 65}, (char*)"typedef struct nctempchar3 { int d[3]; char *a;} nctempchar3; \n\0"};
nctemp13505=&nctemp13506;
nctempchar1* nctemp13503= nctemp13505;
int nctemp13507=CodeEs(nctemp13501,nctemp13503);
struct tree* nctemp13509= p;
int nctemp13511= 16;
int nctemp13513=PtreeSetline(nctemp13509,nctemp13511);
struct tree* nctemp13515= p;
struct nctempchar1 *nctemp13519;
static struct nctempchar1 nctemp13520 = {{ 74}, (char*)"typedef struct nctempcomplex3 { int d[3]; complex *a;} nctempcomplex3; \n\0"};
nctemp13519=&nctemp13520;
nctempchar1* nctemp13517= nctemp13519;
int nctemp13521=CodeEs(nctemp13515,nctemp13517);
struct tree* nctemp13523= p;
int nctemp13525= 17;
int nctemp13527=PtreeSetline(nctemp13523,nctemp13525);
struct tree* nctemp13529= p;
struct nctempchar1 *nctemp13533;
static struct nctempchar1 nctemp13534 = {{ 68}, (char*)"typedef struct nctempfloat4 { int d[4]; float *a;} nctempfloat4; \n\0"};
nctemp13533=&nctemp13534;
nctempchar1* nctemp13531= nctemp13533;
int nctemp13535=CodeEs(nctemp13529,nctemp13531);
struct tree* nctemp13537= p;
int nctemp13539= 18;
int nctemp13541=PtreeSetline(nctemp13537,nctemp13539);
struct tree* nctemp13543= p;
struct nctempchar1 *nctemp13547;
static struct nctempchar1 nctemp13548 = {{ 62}, (char*)"typedef struct nctempint4 { int d[4]; int *a;} nctempint4; \n\0"};
nctemp13547=&nctemp13548;
nctempchar1* nctemp13545= nctemp13547;
int nctemp13549=CodeEs(nctemp13543,nctemp13545);
struct tree* nctemp13551= p;
int nctemp13553= 19;
int nctemp13555=PtreeSetline(nctemp13551,nctemp13553);
struct tree* nctemp13557= p;
struct nctempchar1 *nctemp13561;
static struct nctempchar1 nctemp13562 = {{ 65}, (char*)"typedef struct nctempchar4 { int d[4]; char *a;} nctempchar4; \n\0"};
nctemp13561=&nctemp13562;
nctempchar1* nctemp13559= nctemp13561;
int nctemp13563=CodeEs(nctemp13557,nctemp13559);
struct tree* nctemp13565= p;
int nctemp13567= 20;
int nctemp13569=PtreeSetline(nctemp13565,nctemp13567);
struct tree* nctemp13571= p;
struct nctempchar1 *nctemp13575;
static struct nctempchar1 nctemp13576 = {{ 74}, (char*)"typedef struct nctempcomplex4 { int d[4]; complex *a;} nctempcomplex4; \n\0"};
nctemp13575=&nctemp13576;
nctempchar1* nctemp13573= nctemp13575;
int nctemp13577=CodeEs(nctemp13571,nctemp13573);
struct tree* nctemp13579= p;
struct nctempchar1 *nctemp13583;
static struct nctempchar1 nctemp13584 = {{ 21}, (char*)"#include <stdio.h>\n\0"};
nctemp13583=&nctemp13584;
nctempchar1* nctemp13581= nctemp13583;
int nctemp13585=CodeEs(nctemp13579,nctemp13581);
struct tree* nctemp13587= p;
struct nctempchar1 *nctemp13591;
static struct nctempchar1 nctemp13592 = {{ 22}, (char*)"#include <stdlib.h>\n\0"};
nctemp13591=&nctemp13592;
nctempchar1* nctemp13589= nctemp13591;
int nctemp13593=CodeEs(nctemp13587,nctemp13589);
struct tree* nctemp13595= p;
struct nctempchar1 *nctemp13599;
static struct nctempchar1 nctemp13600 = {{ 22}, (char*)"#include <string.h>\n\0"};
nctemp13599=&nctemp13600;
nctempchar1* nctemp13597= nctemp13599;
int nctemp13601=CodeEs(nctemp13595,nctemp13597);
struct tree* nctemp13603= p;
struct nctempchar1 *nctemp13607;
static struct nctempchar1 nctemp13608 = {{ 22}, (char*)"#include <assert.h>\n\0"};
nctemp13607=&nctemp13608;
nctempchar1* nctemp13605= nctemp13607;
int nctemp13609=CodeEs(nctemp13603,nctemp13605);
struct tree* nctemp13611= p;
struct nctempchar1 *nctemp13615;
static struct nctempchar1 nctemp13616 = {{ 3}, (char*)"\n\0"};
nctemp13615=&nctemp13616;
nctempchar1* nctemp13613= nctemp13615;
int nctemp13617=CodeEs(nctemp13611,nctemp13613);
struct tree* nctemp13619= p;
struct nctempchar1 *nctemp13623;
static struct nctempchar1 nctemp13624 = {{ 23}, (char*)"void *GpuNew(int n);\n\0"};
nctemp13623=&nctemp13624;
nctempchar1* nctemp13621= nctemp13623;
int nctemp13625=CodeEs(nctemp13619,nctemp13621);
struct tree* nctemp13627= p;
struct nctempchar1 *nctemp13631;
static struct nctempchar1 nctemp13632 = {{ 28}, (char*)"void *GpuDelete(void *f);\n\0"};
nctemp13631=&nctemp13632;
nctempchar1* nctemp13629= nctemp13631;
int nctemp13633=CodeEs(nctemp13627,nctemp13629);
struct tree* nctemp13635= p;
struct nctempchar1 *nctemp13639;
static struct nctempchar1 nctemp13640 = {{ 20}, (char*)"void *GpuError();\n\0"};
nctemp13639=&nctemp13640;
nctempchar1* nctemp13637= nctemp13639;
int nctemp13641=CodeEs(nctemp13635,nctemp13637);
struct tree* nctemp13643= p;
struct nctempchar1 *nctemp13647;
static struct nctempchar1 nctemp13648 = {{ 26}, (char*)"void *RunMalloc(int n);\n\0"};
nctemp13647=&nctemp13648;
nctempchar1* nctemp13645= nctemp13647;
int nctemp13649=CodeEs(nctemp13643,nctemp13645);
struct tree* nctemp13651= p;
struct nctempchar1 *nctemp13655;
static struct nctempchar1 nctemp13656 = {{ 24}, (char*)"int RunFree(void * );\n\0"};
nctemp13655=&nctemp13656;
nctempchar1* nctemp13653= nctemp13655;
int nctemp13657=CodeEs(nctemp13651,nctemp13653);
struct tree* nctemp13659= p;
struct nctempchar1 *nctemp13663;
static struct nctempchar1 nctemp13664 = {{ 17}, (char*)"int RunSync();\n\0"};
nctemp13663=&nctemp13664;
nctempchar1* nctemp13661= nctemp13663;
int nctemp13665=CodeEs(nctemp13659,nctemp13661);
struct tree* nctemp13667= p;
struct nctempchar1 *nctemp13671;
static struct nctempchar1 nctemp13672 = {{ 18}, (char*)"int RunGetnt();\n\0"};
nctemp13671=&nctemp13672;
nctempchar1* nctemp13669= nctemp13671;
int nctemp13673=CodeEs(nctemp13667,nctemp13669);
struct tree* nctemp13675= p;
struct nctempchar1 *nctemp13679;
static struct nctempchar1 nctemp13680 = {{ 18}, (char*)"int RunGetnb();\n\0"};
nctemp13679=&nctemp13680;
nctempchar1* nctemp13677= nctemp13679;
int nctemp13681=CodeEs(nctemp13675,nctemp13677);
return 1;
}
int CodePreamblehip ()
{
struct tree* p;
struct nctempchar1 *nctemp13689;
static struct nctempchar1 nctemp13690 = {{ 6}, (char*)"dummy\0"};
nctemp13689=&nctemp13690;
nctempchar1* nctemp13687= nctemp13689;
struct nctempchar1 *nctemp13693;
static struct nctempchar1 nctemp13694 = {{ 6}, (char*)"dummy\0"};
nctemp13693=&nctemp13694;
nctempchar1* nctemp13691= nctemp13693;
struct tree* nctemp13695=PtreeMknode(nctemp13687,nctemp13691);
p =nctemp13695;
struct tree* nctemp13697= p;
int nctemp13699= 1;
int nctemp13701=PtreeSetline(nctemp13697,nctemp13699);
struct tree* nctemp13703= p;
struct nctempchar1 *nctemp13707;
static struct nctempchar1 nctemp13708 = {{ 50}, (char*)"//  Translated by epsc  version December 2021  \n\0"};
nctemp13707=&nctemp13708;
nctempchar1* nctemp13705= nctemp13707;
int nctemp13709=CodeEs(nctemp13703,nctemp13705);
struct tree* nctemp13711= p;
int nctemp13713= 2;
int nctemp13715=PtreeSetline(nctemp13711,nctemp13713);
struct tree* nctemp13717= p;
int nctemp13719= 3;
int nctemp13721=PtreeSetline(nctemp13717,nctemp13719);
struct tree* nctemp13723= p;
struct nctempchar1 *nctemp13727;
static struct nctempchar1 nctemp13728 = {{ 48}, (char*)"typedef struct { float r; float i;} complex; \n\0"};
nctemp13727=&nctemp13728;
nctempchar1* nctemp13725= nctemp13727;
int nctemp13729=CodeEs(nctemp13723,nctemp13725);
struct tree* nctemp13731= p;
int nctemp13733= 3;
int nctemp13735=PtreeSetline(nctemp13731,nctemp13733);
struct tree* nctemp13737= p;
struct nctempchar1 *nctemp13741;
static struct nctempchar1 nctemp13742 = {{ 68}, (char*)"typedef struct nctempfloat1 { int d[1]; float *a;} nctempfloat1; \n\0"};
nctemp13741=&nctemp13742;
nctempchar1* nctemp13739= nctemp13741;
int nctemp13743=CodeEs(nctemp13737,nctemp13739);
struct tree* nctemp13745= p;
int nctemp13747= 5;
int nctemp13749=PtreeSetline(nctemp13745,nctemp13747);
struct tree* nctemp13751= p;
struct nctempchar1 *nctemp13755;
static struct nctempchar1 nctemp13756 = {{ 62}, (char*)"typedef struct nctempint1 { int d[1]; int *a;} nctempint1; \n\0"};
nctemp13755=&nctemp13756;
nctempchar1* nctemp13753= nctemp13755;
int nctemp13757=CodeEs(nctemp13751,nctemp13753);
struct tree* nctemp13759= p;
int nctemp13761= 7;
int nctemp13763=PtreeSetline(nctemp13759,nctemp13761);
struct tree* nctemp13765= p;
struct nctempchar1 *nctemp13769;
static struct nctempchar1 nctemp13770 = {{ 65}, (char*)"typedef struct nctempchar1 { int d[1]; char *a;} nctempchar1; \n\0"};
nctemp13769=&nctemp13770;
nctempchar1* nctemp13767= nctemp13769;
int nctemp13771=CodeEs(nctemp13765,nctemp13767);
struct tree* nctemp13773= p;
int nctemp13775= 7;
int nctemp13777=PtreeSetline(nctemp13773,nctemp13775);
struct tree* nctemp13779= p;
struct nctempchar1 *nctemp13783;
static struct nctempchar1 nctemp13784 = {{ 74}, (char*)"typedef struct nctempcomplex1 { int d[1]; complex *a;} nctempcomplex1; \n\0"};
nctemp13783=&nctemp13784;
nctempchar1* nctemp13781= nctemp13783;
int nctemp13785=CodeEs(nctemp13779,nctemp13781);
struct tree* nctemp13787= p;
int nctemp13789= 8;
int nctemp13791=PtreeSetline(nctemp13787,nctemp13789);
int nctemp13795=CodeArraycheck();
int nctemp13792 = (nctemp13795 ==1);
if(nctemp13792)
{
struct tree* nctemp13798= p;
struct nctempchar1 *nctemp13802;
static struct nctempchar1 nctemp13803 = {{ 54}, (char*)"static struct nctempchar1 nctempstring = {0, NULL};\n\0"};
nctemp13802=&nctemp13803;
nctempchar1* nctemp13800= nctemp13802;
int nctemp13804=CodeEs(nctemp13798,nctemp13800);
struct tree* nctemp13806= p;
int nctemp13808= 8;
int nctemp13810=PtreeSetline(nctemp13806,nctemp13808);
}
struct tree* nctemp13812= p;
struct nctempchar1 *nctemp13816;
static struct nctempchar1 nctemp13817 = {{ 68}, (char*)"typedef struct nctempfloat2 { int d[2]; float *a;} nctempfloat2; \n\0"};
nctemp13816=&nctemp13817;
nctempchar1* nctemp13814= nctemp13816;
int nctemp13818=CodeEs(nctemp13812,nctemp13814);
struct tree* nctemp13820= p;
int nctemp13822= 10;
int nctemp13824=PtreeSetline(nctemp13820,nctemp13822);
struct tree* nctemp13826= p;
struct nctempchar1 *nctemp13830;
static struct nctempchar1 nctemp13831 = {{ 62}, (char*)"typedef struct nctempint2 { int d[2]; int *a;} nctempint2; \n\0"};
nctemp13830=&nctemp13831;
nctempchar1* nctemp13828= nctemp13830;
int nctemp13832=CodeEs(nctemp13826,nctemp13828);
struct tree* nctemp13834= p;
int nctemp13836= 10;
int nctemp13838=PtreeSetline(nctemp13834,nctemp13836);
struct tree* nctemp13840= p;
struct nctempchar1 *nctemp13844;
static struct nctempchar1 nctemp13845 = {{ 65}, (char*)"typedef struct nctempchar2 { int d[2]; char *a;} nctempchar2; \n\0"};
nctemp13844=&nctemp13845;
nctempchar1* nctemp13842= nctemp13844;
int nctemp13846=CodeEs(nctemp13840,nctemp13842);
struct tree* nctemp13848= p;
int nctemp13850= 12;
int nctemp13852=PtreeSetline(nctemp13848,nctemp13850);
struct tree* nctemp13854= p;
struct nctempchar1 *nctemp13858;
static struct nctempchar1 nctemp13859 = {{ 74}, (char*)"typedef struct nctempcomplex2 { int d[2]; complex *a;} nctempcomplex2; \n\0"};
nctemp13858=&nctemp13859;
nctempchar1* nctemp13856= nctemp13858;
int nctemp13860=CodeEs(nctemp13854,nctemp13856);
struct tree* nctemp13862= p;
int nctemp13864= 13;
int nctemp13866=PtreeSetline(nctemp13862,nctemp13864);
struct tree* nctemp13868= p;
struct nctempchar1 *nctemp13872;
static struct nctempchar1 nctemp13873 = {{ 68}, (char*)"typedef struct nctempfloat3 { int d[3]; float *a;} nctempfloat3; \n\0"};
nctemp13872=&nctemp13873;
nctempchar1* nctemp13870= nctemp13872;
int nctemp13874=CodeEs(nctemp13868,nctemp13870);
struct tree* nctemp13876= p;
int nctemp13878= 14;
int nctemp13880=PtreeSetline(nctemp13876,nctemp13878);
struct tree* nctemp13882= p;
struct nctempchar1 *nctemp13886;
static struct nctempchar1 nctemp13887 = {{ 62}, (char*)"typedef struct nctempint3 { int d[3]; int *a;} nctempint3; \n\0"};
nctemp13886=&nctemp13887;
nctempchar1* nctemp13884= nctemp13886;
int nctemp13888=CodeEs(nctemp13882,nctemp13884);
struct tree* nctemp13890= p;
int nctemp13892= 15;
int nctemp13894=PtreeSetline(nctemp13890,nctemp13892);
struct tree* nctemp13896= p;
struct nctempchar1 *nctemp13900;
static struct nctempchar1 nctemp13901 = {{ 65}, (char*)"typedef struct nctempchar3 { int d[3]; char *a;} nctempchar3; \n\0"};
nctemp13900=&nctemp13901;
nctempchar1* nctemp13898= nctemp13900;
int nctemp13902=CodeEs(nctemp13896,nctemp13898);
struct tree* nctemp13904= p;
int nctemp13906= 16;
int nctemp13908=PtreeSetline(nctemp13904,nctemp13906);
struct tree* nctemp13910= p;
struct nctempchar1 *nctemp13914;
static struct nctempchar1 nctemp13915 = {{ 74}, (char*)"typedef struct nctempcomplex3 { int d[3]; complex *a;} nctempcomplex3; \n\0"};
nctemp13914=&nctemp13915;
nctempchar1* nctemp13912= nctemp13914;
int nctemp13916=CodeEs(nctemp13910,nctemp13912);
struct tree* nctemp13918= p;
int nctemp13920= 17;
int nctemp13922=PtreeSetline(nctemp13918,nctemp13920);
struct tree* nctemp13924= p;
struct nctempchar1 *nctemp13928;
static struct nctempchar1 nctemp13929 = {{ 68}, (char*)"typedef struct nctempfloat4 { int d[4]; float *a;} nctempfloat4; \n\0"};
nctemp13928=&nctemp13929;
nctempchar1* nctemp13926= nctemp13928;
int nctemp13930=CodeEs(nctemp13924,nctemp13926);
struct tree* nctemp13932= p;
int nctemp13934= 18;
int nctemp13936=PtreeSetline(nctemp13932,nctemp13934);
struct tree* nctemp13938= p;
struct nctempchar1 *nctemp13942;
static struct nctempchar1 nctemp13943 = {{ 62}, (char*)"typedef struct nctempint4 { int d[4]; int *a;} nctempint4; \n\0"};
nctemp13942=&nctemp13943;
nctempchar1* nctemp13940= nctemp13942;
int nctemp13944=CodeEs(nctemp13938,nctemp13940);
struct tree* nctemp13946= p;
int nctemp13948= 19;
int nctemp13950=PtreeSetline(nctemp13946,nctemp13948);
struct tree* nctemp13952= p;
struct nctempchar1 *nctemp13956;
static struct nctempchar1 nctemp13957 = {{ 65}, (char*)"typedef struct nctempchar4 { int d[4]; char *a;} nctempchar4; \n\0"};
nctemp13956=&nctemp13957;
nctempchar1* nctemp13954= nctemp13956;
int nctemp13958=CodeEs(nctemp13952,nctemp13954);
struct tree* nctemp13960= p;
int nctemp13962= 20;
int nctemp13964=PtreeSetline(nctemp13960,nctemp13962);
struct tree* nctemp13966= p;
struct nctempchar1 *nctemp13970;
static struct nctempchar1 nctemp13971 = {{ 74}, (char*)"typedef struct nctempcomplex4 { int d[4]; complex *a;} nctempcomplex4; \n\0"};
nctemp13970=&nctemp13971;
nctempchar1* nctemp13968= nctemp13970;
int nctemp13972=CodeEs(nctemp13966,nctemp13968);
struct tree* nctemp13974= p;
struct nctempchar1 *nctemp13978;
static struct nctempchar1 nctemp13979 = {{ 21}, (char*)"#include <stdio.h>\n\0"};
nctemp13978=&nctemp13979;
nctempchar1* nctemp13976= nctemp13978;
int nctemp13980=CodeEs(nctemp13974,nctemp13976);
struct tree* nctemp13982= p;
struct nctempchar1 *nctemp13986;
static struct nctempchar1 nctemp13987 = {{ 17}, (char*)"extern \"C\" {\n\0"};
nctemp13986=&nctemp13987;
nctempchar1* nctemp13984= nctemp13986;
int nctemp13988=CodeEs(nctemp13982,nctemp13984);
struct tree* nctemp13990= p;
struct nctempchar1 *nctemp13994;
static struct nctempchar1 nctemp13995 = {{ 22}, (char*)"#include <stdlib.h>\n\0"};
nctemp13994=&nctemp13995;
nctempchar1* nctemp13992= nctemp13994;
int nctemp13996=CodeEs(nctemp13990,nctemp13992);
struct tree* nctemp13998= p;
struct nctempchar1 *nctemp14002;
static struct nctempchar1 nctemp14003 = {{ 22}, (char*)"#include <string.h>\n\0"};
nctemp14002=&nctemp14003;
nctempchar1* nctemp14000= nctemp14002;
int nctemp14004=CodeEs(nctemp13998,nctemp14000);
struct tree* nctemp14006= p;
struct nctempchar1 *nctemp14010;
static struct nctempchar1 nctemp14011 = {{ 4}, (char*)"}\n\0"};
nctemp14010=&nctemp14011;
nctempchar1* nctemp14008= nctemp14010;
int nctemp14012=CodeEs(nctemp14006,nctemp14008);
struct tree* nctemp14014= p;
struct nctempchar1 *nctemp14018;
static struct nctempchar1 nctemp14019 = {{ 34}, (char*)"#include \"hip/hip_runtime.h\" \n\0"};
nctemp14018=&nctemp14019;
nctempchar1* nctemp14016= nctemp14018;
int nctemp14020=CodeEs(nctemp14014,nctemp14016);
struct tree* nctemp14022= p;
struct nctempchar1 *nctemp14026;
static struct nctempchar1 nctemp14027 = {{ 3}, (char*)"\n\0"};
nctemp14026=&nctemp14027;
nctempchar1* nctemp14024= nctemp14026;
int nctemp14028=CodeEs(nctemp14022,nctemp14024);
struct tree* nctemp14030= p;
struct nctempchar1 *nctemp14034;
static struct nctempchar1 nctemp14035 = {{ 23}, (char*)"void *GpuNew(int n);\n\0"};
nctemp14034=&nctemp14035;
nctempchar1* nctemp14032= nctemp14034;
int nctemp14036=CodeEs(nctemp14030,nctemp14032);
struct tree* nctemp14038= p;
struct nctempchar1 *nctemp14042;
static struct nctempchar1 nctemp14043 = {{ 28}, (char*)"void *GpuDelete(void *f);\n\0"};
nctemp14042=&nctemp14043;
nctempchar1* nctemp14040= nctemp14042;
int nctemp14044=CodeEs(nctemp14038,nctemp14040);
struct tree* nctemp14046= p;
struct nctempchar1 *nctemp14050;
static struct nctempchar1 nctemp14051 = {{ 20}, (char*)"void *GpuError();\n\0"};
nctemp14050=&nctemp14051;
nctempchar1* nctemp14048= nctemp14050;
int nctemp14052=CodeEs(nctemp14046,nctemp14048);
struct tree* nctemp14054= p;
struct nctempchar1 *nctemp14058;
static struct nctempchar1 nctemp14059 = {{ 26}, (char*)"void *RunMalloc(int n);\n\0"};
nctemp14058=&nctemp14059;
nctempchar1* nctemp14056= nctemp14058;
int nctemp14060=CodeEs(nctemp14054,nctemp14056);
struct tree* nctemp14062= p;
struct nctempchar1 *nctemp14066;
static struct nctempchar1 nctemp14067 = {{ 24}, (char*)"int RunFree(void *p);\n\0"};
nctemp14066=&nctemp14067;
nctempchar1* nctemp14064= nctemp14066;
int nctemp14068=CodeEs(nctemp14062,nctemp14064);
return 1;
}
int CodePreamble ()
{
int nctemp14073=CodeGetarch();
int nctemp14070 = (nctemp14073 ==1);
if(nctemp14070)
{
int nctemp14076=CodePreamblecpu();
return 1;
}
else{
int nctemp14081=CodeGetarch();
int nctemp14078 = (nctemp14081 ==2);
if(nctemp14078)
{
int nctemp14084=CodePreamblecuda();
return 1;
}
else{
int nctemp14089=CodeGetarch();
int nctemp14086 = (nctemp14089 ==3);
if(nctemp14086)
{
int nctemp14092=CodePreamblehip();
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
int nctemp14099=CodeGetfdout();
fdo =nctemp14099;
int nctemp14103=CodeGetarch();
int nctemp14100 = (nctemp14103 ==2);
if(nctemp14100)
{
int nctemp14106= fdo;
struct nctempchar1 *nctemp14110;
static struct nctempchar1 nctemp14111 = {{ 4}, (char*)"}\n\0"};
nctemp14110=&nctemp14111;
nctempchar1* nctemp14108= nctemp14110;
int nctemp14112=LibePuts(nctemp14106,nctemp14108);
return 1;
}
else{
int nctemp14117=CodeGetarch();
int nctemp14114 = (nctemp14117 ==3);
if(nctemp14114)
{
int nctemp14120= fdo;
struct nctempchar1 *nctemp14124;
static struct nctempchar1 nctemp14125 = {{ 4}, (char*)"}\n\0"};
nctemp14124=&nctemp14125;
nctempchar1* nctemp14122= nctemp14124;
int nctemp14126=LibePuts(nctemp14120,nctemp14122);
return 1;
}
else{
return 0;
}
}
}
}
