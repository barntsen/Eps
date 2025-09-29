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
CodeBreak = 1;
return 1;
CodeBreak = 1;
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
int nctemp27=16;
nctempchar1 *nctemp26;
nctemp26=(nctempchar1*)RunMalloc(sizeof(nctempchar1));
nctemp26->d[0]=16;
nctemp26->a=(char *)RunMalloc(sizeof(char)*nctemp27);
s1=nctemp26;
int nctemp36=16;
nctempchar1 *nctemp35;
nctemp35=(nctempchar1*)RunMalloc(sizeof(nctempchar1));
nctemp35->d[0]=16;
nctemp35->a=(char *)RunMalloc(sizeof(char)*nctemp36);
s2=nctemp35;
struct nctempchar1 *nctemp42;
static struct nctempchar1 nctemp43 = {{ 7}, (char*)"nctemp\0"};
nctemp42=&nctemp43;
nctempchar1* nctemp40= nctemp42;
nctempchar1* nctemp44= s2;
int nctemp47=LibeStrcpy(nctemp40,nctemp44);
int nctemp51= -1;
int nctemp48 = (cntrl ==nctemp51);
if(nctemp48)
{
CodeAddress =0;
}
else{
int nctemp64 = CodeAddress + 1;
CodeAddress =nctemp64;
}
int nctemp65 = (CodeAddress > 999999);
if(nctemp65)
{
struct nctempchar1 *nctemp72;
static struct nctempchar1 nctemp73 = {{ 32}, (char*)"I am running out of temporaries\0"};
nctemp72=&nctemp73;
nctempchar1* nctemp70= nctemp72;
int nctemp74=CodeError(nctemp70);
}
int nctemp76= CodeAddress;
nctempchar1* nctemp78= s1;
int nctemp81=LibeItoa(nctemp76,nctemp78);
nctempchar1* nctemp83= s1;
nctempchar1* nctemp86= s2;
int nctemp89=LibeStrcat(nctemp83,nctemp86);
return s2;
}
int CodeInit ()
{
int nctemp93= 0;
int nctemp95=CodeSetparallel(nctemp93);
CodeLine = 0;
int nctemp98= -1;
int nctemp97= nctemp98;
nctempchar1* nctemp99=CodeItemp(nctemp97);
CodeBreak = 0;
int nctemp101= 1;
int nctemp103=CodeSetarch(nctemp101);
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
int nctemp112=CodeGetfdout();
fdo =nctemp112;
int nctemp116=CodeDebug();
int nctemp113 = (nctemp116 ==1);
if(nctemp113)
{
int nctemp118 = (p !=0);
if(nctemp118)
{
struct tree* nctemp125= p;
int nctemp127=PtreeGetline(nctemp125);
int nctemp122 = (nctemp127 !=CodeLine);
if(nctemp122)
{
int nctemp130= fdo;
struct nctempchar1 *nctemp134;
static struct nctempchar1 nctemp135 = {{ 3}, (char*)"\n\0"};
nctemp134=&nctemp135;
nctempchar1* nctemp132= nctemp134;
int nctemp136=LibePuts(nctemp130,nctemp132);
int nctemp138= fdo;
struct nctempchar1 *nctemp142;
static struct nctempchar1 nctemp143 = {{ 7}, (char*)"#line \0"};
nctemp142=&nctemp143;
nctempchar1* nctemp140= nctemp142;
int nctemp144=LibePuts(nctemp138,nctemp140);
int nctemp146= fdo;
struct tree* nctemp150= p;
int nctemp152=PtreeGetline(nctemp150);
int nctemp148= nctemp152;
int nctemp153=LibePuti(nctemp146,nctemp148);
int nctemp155= fdo;
struct nctempchar1 *nctemp159;
static struct nctempchar1 nctemp160 = {{ 3}, (char*)"  \0"};
nctemp159=&nctemp160;
nctempchar1* nctemp157= nctemp159;
int nctemp161=LibePuts(nctemp155,nctemp157);
int nctemp163= fdo;
int nctemp165= 34;
int nctemp167=LibePutc(nctemp163,nctemp165);
struct tree* nctemp173= p;
nctempchar1* nctemp175=PtreeGetfile(nctemp173);
f=nctemp175;
int nctemp177= fdo;
nctempchar1* nctemp179= f;
int nctemp182=LibePuts(nctemp177,nctemp179);
int nctemp184= fdo;
int nctemp186= 34;
int nctemp188=LibePutc(nctemp184,nctemp186);
int nctemp190= fdo;
struct nctempchar1 *nctemp194;
static struct nctempchar1 nctemp195 = {{ 3}, (char*)"\n\0"};
nctemp194=&nctemp195;
nctempchar1* nctemp192= nctemp194;
int nctemp196=LibePuts(nctemp190,nctemp192);
struct tree* nctemp201= p;
int nctemp203=PtreeGetline(nctemp201);
CodeLine =nctemp203;
}
}
}
int nctemp205= fdo;
nctempchar1* nctemp207= s;
int nctemp210=LibePuts(nctemp205,nctemp207);
int nctemp212= fdo;
int nctemp214=LibeFlush(nctemp212);
return 1;
}
int CodeEd (int d)
{
int fdo;
int nctemp220=CodeGetfdout();
fdo =nctemp220;
int nctemp222= fdo;
int nctemp224= d;
int nctemp226=LibePuti(nctemp222,nctemp224);
return 1;
}
int CodeEc (int d)
{
int fdo;
int nctemp232=CodeGetfdout();
fdo =nctemp232;
int nctemp234= fdo;
int nctemp236= d;
int nctemp238=LibePutc(nctemp234,nctemp236);
return 1;
}
int CodeEsr (nctempchar1 *s)
{
int i;
int l;
int fdo;
int nctemp244=CodeGetfdout();
fdo =nctemp244;
nctempchar1* nctemp249= s;
int nctemp252=LibeStrlen(nctemp249);
l =nctemp252;
i =1;
int nctemp265 = l - 1;
int nctemp257 = (i < nctemp265);
while(nctemp257){
{
int nctemp267= fdo;
int nctemp274=i;
int nctemp271=(int)(s->a[nctemp274]);
int nctemp269= nctemp271;
int nctemp276=LibePutc(nctemp267,nctemp269);
}
int nctemp285 = i + 1;
i =nctemp285;
int nctemp294 = l - 1;
int nctemp286 = (i < nctemp294);
nctemp257=nctemp286;
}
int nctemp296= fdo;
int nctemp298=LibeFlush(nctemp296);
return 1;
}
int CodeIdeclaration (struct tree* p,struct symbol* tp)
{
struct symbol* nctemp305= tp;
nctempchar1* nctemp307=SymGetype(nctemp305);
nctempchar1* nctemp303= nctemp307;
struct nctempchar1 *nctemp310;
static struct nctempchar1 nctemp311 = {{ 10}, (char*)"rconstant\0"};
nctemp310=&nctemp311;
nctempchar1* nctemp308= nctemp310;
int nctemp312=LibeStrcmp(nctemp303,nctemp308);
int nctemp300 = (nctemp312 ==1);
if(nctemp300)
{
return 1;
}
struct symbol* nctemp320= tp;
nctempchar1* nctemp322=SymGetype(nctemp320);
nctempchar1* nctemp318= nctemp322;
struct nctempchar1 *nctemp325;
static struct nctempchar1 nctemp326 = {{ 10}, (char*)"iconstant\0"};
nctemp325=&nctemp326;
nctempchar1* nctemp323= nctemp325;
int nctemp327=LibeStrcmp(nctemp318,nctemp323);
int nctemp315 = (nctemp327 ==1);
if(nctemp315)
{
return 1;
}
struct symbol* nctemp335= tp;
nctempchar1* nctemp337=SymGetype(nctemp335);
nctempchar1* nctemp333= nctemp337;
struct nctempchar1 *nctemp340;
static struct nctempchar1 nctemp341 = {{ 10}, (char*)"sconstant\0"};
nctemp340=&nctemp341;
nctempchar1* nctemp338= nctemp340;
int nctemp342=LibeStrcmp(nctemp333,nctemp338);
int nctemp330 = (nctemp342 ==1);
if(nctemp330)
{
return 1;
}
struct symbol* nctemp350= tp;
nctempchar1* nctemp352=SymGetstruct(nctemp350);
nctempchar1* nctemp348= nctemp352;
struct nctempchar1 *nctemp355;
static struct nctempchar1 nctemp356 = {{ 10}, (char*)"structdef\0"};
nctemp355=&nctemp356;
nctempchar1* nctemp353= nctemp355;
int nctemp357=LibeStrcmp(nctemp348,nctemp353);
int nctemp345 = (nctemp357 ==1);
if(nctemp345)
{
struct tree* nctemp360= p;
struct nctempchar1 *nctemp364;
static struct nctempchar1 nctemp365 = {{ 8}, (char*)"struct \0"};
nctemp364=&nctemp365;
nctempchar1* nctemp362= nctemp364;
int nctemp366=CodeEs(nctemp360,nctemp362);
}
struct symbol* nctemp372= tp;
nctempchar1* nctemp374=SymGetstruct(nctemp372);
nctempchar1* nctemp370= nctemp374;
struct nctempchar1 *nctemp377;
static struct nctempchar1 nctemp378 = {{ 7}, (char*)"struct\0"};
nctemp377=&nctemp378;
nctempchar1* nctemp375= nctemp377;
int nctemp379=LibeStrcmp(nctemp370,nctemp375);
int nctemp367 = (nctemp379 ==1);
if(nctemp367)
{
struct symbol* nctemp386= tp;
nctempchar1* nctemp388=SymGetarray(nctemp386);
nctempchar1* nctemp384= nctemp388;
struct nctempchar1 *nctemp391;
static struct nctempchar1 nctemp392 = {{ 6}, (char*)"array\0"};
nctemp391=&nctemp392;
nctempchar1* nctemp389= nctemp391;
int nctemp393=LibeStrcmp(nctemp384,nctemp389);
int nctemp381 = (nctemp393 ==1);
if(nctemp381)
{
struct tree* nctemp396= p;
struct nctempchar1 *nctemp400;
static struct nctempchar1 nctemp401 = {{ 14}, (char*)"struct nctemp\0"};
nctemp400=&nctemp401;
nctempchar1* nctemp398= nctemp400;
int nctemp402=CodeEs(nctemp396,nctemp398);
struct tree* nctemp404= p;
struct symbol* nctemp408= tp;
nctempchar1* nctemp410=SymGetype(nctemp408);
nctempchar1* nctemp406= nctemp410;
int nctemp411=CodeEs(nctemp404,nctemp406);
struct symbol* nctemp415= tp;
int nctemp417=SymGetrank(nctemp415);
int nctemp413= nctemp417;
int nctemp418=CodeEd(nctemp413);
struct tree* nctemp420= p;
struct nctempchar1 *nctemp424;
static struct nctempchar1 nctemp425 = {{ 3}, (char*)" *\0"};
nctemp424=&nctemp425;
nctempchar1* nctemp422= nctemp424;
int nctemp426=CodeEs(nctemp420,nctemp422);
struct tree* nctemp428= p;
struct symbol* nctemp432= tp;
nctempchar1* nctemp434=SymGetname(nctemp432);
nctempchar1* nctemp430= nctemp434;
int nctemp435=CodeEs(nctemp428,nctemp430);
}
else{
struct tree* nctemp437= p;
struct nctempchar1 *nctemp441;
static struct nctempchar1 nctemp442 = {{ 8}, (char*)"struct \0"};
nctemp441=&nctemp442;
nctempchar1* nctemp439= nctemp441;
int nctemp443=CodeEs(nctemp437,nctemp439);
struct tree* nctemp445= p;
struct symbol* nctemp449= tp;
nctempchar1* nctemp451=SymGetype(nctemp449);
nctempchar1* nctemp447= nctemp451;
int nctemp452=CodeEs(nctemp445,nctemp447);
struct tree* nctemp454= p;
struct nctempchar1 *nctemp458;
static struct nctempchar1 nctemp459 = {{ 2}, (char*)"*\0"};
nctemp458=&nctemp459;
nctempchar1* nctemp456= nctemp458;
int nctemp460=CodeEs(nctemp454,nctemp456);
struct tree* nctemp462= p;
struct nctempchar1 *nctemp466;
static struct nctempchar1 nctemp467 = {{ 2}, (char*)" \0"};
nctemp466=&nctemp467;
nctempchar1* nctemp464= nctemp466;
int nctemp468=CodeEs(nctemp462,nctemp464);
struct tree* nctemp470= p;
struct symbol* nctemp474= tp;
nctempchar1* nctemp476=SymGetname(nctemp474);
nctempchar1* nctemp472= nctemp476;
int nctemp477=CodeEs(nctemp470,nctemp472);
}
}
else{
struct symbol* nctemp483= tp;
nctempchar1* nctemp485=SymGetarray(nctemp483);
nctempchar1* nctemp481= nctemp485;
struct nctempchar1 *nctemp488;
static struct nctempchar1 nctemp489 = {{ 6}, (char*)"array\0"};
nctemp488=&nctemp489;
nctempchar1* nctemp486= nctemp488;
int nctemp490=LibeStrcmp(nctemp481,nctemp486);
int nctemp478 = (nctemp490 ==1);
if(nctemp478)
{
struct tree* nctemp493= p;
struct nctempchar1 *nctemp497;
static struct nctempchar1 nctemp498 = {{ 7}, (char*)"nctemp\0"};
nctemp497=&nctemp498;
nctempchar1* nctemp495= nctemp497;
int nctemp499=CodeEs(nctemp493,nctemp495);
struct tree* nctemp501= p;
struct symbol* nctemp505= tp;
nctempchar1* nctemp507=SymGetype(nctemp505);
nctempchar1* nctemp503= nctemp507;
int nctemp508=CodeEs(nctemp501,nctemp503);
struct symbol* nctemp512= tp;
int nctemp514=SymGetrank(nctemp512);
int nctemp510= nctemp514;
int nctemp515=CodeEd(nctemp510);
struct tree* nctemp517= p;
struct nctempchar1 *nctemp521;
static struct nctempchar1 nctemp522 = {{ 3}, (char*)" *\0"};
nctemp521=&nctemp522;
nctempchar1* nctemp519= nctemp521;
int nctemp523=CodeEs(nctemp517,nctemp519);
struct tree* nctemp525= p;
struct symbol* nctemp529= tp;
nctempchar1* nctemp531=SymGetname(nctemp529);
nctempchar1* nctemp527= nctemp531;
int nctemp532=CodeEs(nctemp525,nctemp527);
}
else{
struct tree* nctemp534= p;
struct symbol* nctemp538= tp;
nctempchar1* nctemp540=SymGetype(nctemp538);
nctempchar1* nctemp536= nctemp540;
int nctemp541=CodeEs(nctemp534,nctemp536);
struct tree* nctemp543= p;
struct nctempchar1 *nctemp547;
static struct nctempchar1 nctemp548 = {{ 2}, (char*)" \0"};
nctemp547=&nctemp548;
nctempchar1* nctemp545= nctemp547;
int nctemp549=CodeEs(nctemp543,nctemp545);
struct tree* nctemp551= p;
struct symbol* nctemp555= tp;
nctempchar1* nctemp557=SymGetname(nctemp555);
nctempchar1* nctemp553= nctemp557;
int nctemp558=CodeEs(nctemp551,nctemp553);
}
}
return 1;
}
int CodeIdeclarations (struct tree* p,struct symbol* tp)
{
int nctemp560 = (tp !=0);
int nctemp564=nctemp560;
while(nctemp564)
{{
struct tree* nctemp566= p;
struct symbol* nctemp568= tp;
int nctemp570=CodeIdeclaration(nctemp566,nctemp568);
struct tree* nctemp572= p;
struct nctempchar1 *nctemp576;
static struct nctempchar1 nctemp577 = {{ 4}, (char*)";\n\0"};
nctemp576=&nctemp577;
nctempchar1* nctemp574= nctemp576;
int nctemp578=CodeEs(nctemp572,nctemp574);
struct symbol* nctemp583= tp;
struct symbol* nctemp585=SymMvnext(nctemp583);
tp =nctemp585;
}
int nctemp586 = (tp !=0);
nctemp564=nctemp586;}return 1;
}
int CodeStructdefsym (struct tree* p,struct symbol* tp)
{
struct symbol* up;
struct tree* nctemp592= p;
struct nctempchar1 *nctemp596;
static struct nctempchar1 nctemp597 = {{ 8}, (char*)"struct \0"};
nctemp596=&nctemp597;
nctempchar1* nctemp594= nctemp596;
int nctemp598=CodeEs(nctemp592,nctemp594);
struct tree* nctemp600= p;
struct symbol* nctemp604= tp;
nctempchar1* nctemp606=SymGetype(nctemp604);
nctempchar1* nctemp602= nctemp606;
int nctemp607=CodeEs(nctemp600,nctemp602);
struct tree* nctemp609= p;
struct nctempchar1 *nctemp613;
static struct nctempchar1 nctemp614 = {{ 3}, (char*)" {\0"};
nctemp613=&nctemp614;
nctempchar1* nctemp611= nctemp613;
int nctemp615=CodeEs(nctemp609,nctemp611);
struct symbol* nctemp620= tp;
struct symbol* nctemp622=SymGetable(nctemp620);
up =nctemp622;
struct symbol* nctemp627= up;
struct symbol* nctemp629=SymMvnext(nctemp627);
up =nctemp629;
struct tree* nctemp631= p;
struct symbol* nctemp633= up;
int nctemp635=CodeIdeclarations(nctemp631,nctemp633);
struct tree* nctemp637= p;
struct nctempchar1 *nctemp641;
static struct nctempchar1 nctemp642 = {{ 5}, (char*)"};\n\0"};
nctemp641=&nctemp642;
nctempchar1* nctemp639= nctemp641;
int nctemp643=CodeEs(nctemp637,nctemp639);
struct tree* nctemp645= p;
struct nctempchar1 *nctemp649;
static struct nctempchar1 nctemp650 = {{ 16}, (char*)"typedef struct \0"};
nctemp649=&nctemp650;
nctempchar1* nctemp647= nctemp649;
int nctemp651=CodeEs(nctemp645,nctemp647);
struct tree* nctemp653= p;
struct nctempchar1 *nctemp657;
static struct nctempchar1 nctemp658 = {{ 7}, (char*)"nctemp\0"};
nctemp657=&nctemp658;
nctempchar1* nctemp655= nctemp657;
int nctemp659=CodeEs(nctemp653,nctemp655);
struct tree* nctemp661= p;
struct symbol* nctemp665= tp;
nctempchar1* nctemp667=SymGetype(nctemp665);
nctempchar1* nctemp663= nctemp667;
int nctemp668=CodeEs(nctemp661,nctemp663);
struct tree* nctemp670= p;
struct nctempchar1 *nctemp674;
static struct nctempchar1 nctemp675 = {{ 2}, (char*)"1\0"};
nctemp674=&nctemp675;
nctempchar1* nctemp672= nctemp674;
int nctemp676=CodeEs(nctemp670,nctemp672);
struct tree* nctemp678= p;
struct nctempchar1 *nctemp682;
static struct nctempchar1 nctemp683 = {{ 20}, (char*)" {int d[1]; struct \0"};
nctemp682=&nctemp683;
nctempchar1* nctemp680= nctemp682;
int nctemp684=CodeEs(nctemp678,nctemp680);
struct tree* nctemp686= p;
struct symbol* nctemp690= tp;
nctempchar1* nctemp692=SymGetype(nctemp690);
nctempchar1* nctemp688= nctemp692;
int nctemp693=CodeEs(nctemp686,nctemp688);
struct tree* nctemp695= p;
struct nctempchar1 *nctemp699;
static struct nctempchar1 nctemp700 = {{ 6}, (char*)" *a; \0"};
nctemp699=&nctemp700;
nctempchar1* nctemp697= nctemp699;
int nctemp701=CodeEs(nctemp695,nctemp697);
struct tree* nctemp703= p;
struct nctempchar1 *nctemp707;
static struct nctempchar1 nctemp708 = {{ 3}, (char*)"} \0"};
nctemp707=&nctemp708;
nctempchar1* nctemp705= nctemp707;
int nctemp709=CodeEs(nctemp703,nctemp705);
struct tree* nctemp711= p;
struct nctempchar1 *nctemp715;
static struct nctempchar1 nctemp716 = {{ 7}, (char*)"nctemp\0"};
nctemp715=&nctemp716;
nctempchar1* nctemp713= nctemp715;
int nctemp717=CodeEs(nctemp711,nctemp713);
struct tree* nctemp719= p;
struct symbol* nctemp723= tp;
nctempchar1* nctemp725=SymGetype(nctemp723);
nctempchar1* nctemp721= nctemp725;
int nctemp726=CodeEs(nctemp719,nctemp721);
struct tree* nctemp728= p;
struct nctempchar1 *nctemp732;
static struct nctempchar1 nctemp733 = {{ 2}, (char*)"1\0"};
nctemp732=&nctemp733;
nctempchar1* nctemp730= nctemp732;
int nctemp734=CodeEs(nctemp728,nctemp730);
struct tree* nctemp736= p;
struct nctempchar1 *nctemp740;
static struct nctempchar1 nctemp741 = {{ 4}, (char*)";\n\0"};
nctemp740=&nctemp741;
nctempchar1* nctemp738= nctemp740;
int nctemp742=CodeEs(nctemp736,nctemp738);
struct tree* nctemp744= p;
struct nctempchar1 *nctemp748;
static struct nctempchar1 nctemp749 = {{ 8}, (char*)"struct \0"};
nctemp748=&nctemp749;
nctempchar1* nctemp746= nctemp748;
int nctemp750=CodeEs(nctemp744,nctemp746);
struct tree* nctemp752= p;
struct nctempchar1 *nctemp756;
static struct nctempchar1 nctemp757 = {{ 7}, (char*)"nctemp\0"};
nctemp756=&nctemp757;
nctempchar1* nctemp754= nctemp756;
int nctemp758=CodeEs(nctemp752,nctemp754);
struct tree* nctemp760= p;
struct symbol* nctemp764= tp;
nctempchar1* nctemp766=SymGetype(nctemp764);
nctempchar1* nctemp762= nctemp766;
int nctemp767=CodeEs(nctemp760,nctemp762);
struct tree* nctemp769= p;
struct nctempchar1 *nctemp773;
static struct nctempchar1 nctemp774 = {{ 2}, (char*)"2\0"};
nctemp773=&nctemp774;
nctempchar1* nctemp771= nctemp773;
int nctemp775=CodeEs(nctemp769,nctemp771);
struct tree* nctemp777= p;
struct nctempchar1 *nctemp781;
static struct nctempchar1 nctemp782 = {{ 20}, (char*)" {int d[2]; struct \0"};
nctemp781=&nctemp782;
nctempchar1* nctemp779= nctemp781;
int nctemp783=CodeEs(nctemp777,nctemp779);
struct tree* nctemp785= p;
struct symbol* nctemp789= tp;
nctempchar1* nctemp791=SymGetype(nctemp789);
nctempchar1* nctemp787= nctemp791;
int nctemp792=CodeEs(nctemp785,nctemp787);
struct tree* nctemp794= p;
struct nctempchar1 *nctemp798;
static struct nctempchar1 nctemp799 = {{ 6}, (char*)" *a; \0"};
nctemp798=&nctemp799;
nctempchar1* nctemp796= nctemp798;
int nctemp800=CodeEs(nctemp794,nctemp796);
struct tree* nctemp802= p;
struct nctempchar1 *nctemp806;
static struct nctempchar1 nctemp807 = {{ 3}, (char*)"} \0"};
nctemp806=&nctemp807;
nctempchar1* nctemp804= nctemp806;
int nctemp808=CodeEs(nctemp802,nctemp804);
struct tree* nctemp810= p;
struct nctempchar1 *nctemp814;
static struct nctempchar1 nctemp815 = {{ 4}, (char*)";\n\0"};
nctemp814=&nctemp815;
nctempchar1* nctemp812= nctemp814;
int nctemp816=CodeEs(nctemp810,nctemp812);
struct tree* nctemp818= p;
struct nctempchar1 *nctemp822;
static struct nctempchar1 nctemp823 = {{ 8}, (char*)"struct \0"};
nctemp822=&nctemp823;
nctempchar1* nctemp820= nctemp822;
int nctemp824=CodeEs(nctemp818,nctemp820);
struct tree* nctemp826= p;
struct nctempchar1 *nctemp830;
static struct nctempchar1 nctemp831 = {{ 7}, (char*)"nctemp\0"};
nctemp830=&nctemp831;
nctempchar1* nctemp828= nctemp830;
int nctemp832=CodeEs(nctemp826,nctemp828);
struct tree* nctemp834= p;
struct symbol* nctemp838= tp;
nctempchar1* nctemp840=SymGetype(nctemp838);
nctempchar1* nctemp836= nctemp840;
int nctemp841=CodeEs(nctemp834,nctemp836);
struct tree* nctemp843= p;
struct nctempchar1 *nctemp847;
static struct nctempchar1 nctemp848 = {{ 2}, (char*)"3\0"};
nctemp847=&nctemp848;
nctempchar1* nctemp845= nctemp847;
int nctemp849=CodeEs(nctemp843,nctemp845);
struct tree* nctemp851= p;
struct nctempchar1 *nctemp855;
static struct nctempchar1 nctemp856 = {{ 20}, (char*)" {int d[3]; struct \0"};
nctemp855=&nctemp856;
nctempchar1* nctemp853= nctemp855;
int nctemp857=CodeEs(nctemp851,nctemp853);
struct tree* nctemp859= p;
struct symbol* nctemp863= tp;
nctempchar1* nctemp865=SymGetype(nctemp863);
nctempchar1* nctemp861= nctemp865;
int nctemp866=CodeEs(nctemp859,nctemp861);
struct tree* nctemp868= p;
struct nctempchar1 *nctemp872;
static struct nctempchar1 nctemp873 = {{ 6}, (char*)" *a; \0"};
nctemp872=&nctemp873;
nctempchar1* nctemp870= nctemp872;
int nctemp874=CodeEs(nctemp868,nctemp870);
struct tree* nctemp876= p;
struct nctempchar1 *nctemp880;
static struct nctempchar1 nctemp881 = {{ 3}, (char*)"} \0"};
nctemp880=&nctemp881;
nctempchar1* nctemp878= nctemp880;
int nctemp882=CodeEs(nctemp876,nctemp878);
struct tree* nctemp884= p;
struct nctempchar1 *nctemp888;
static struct nctempchar1 nctemp889 = {{ 4}, (char*)";\n\0"};
nctemp888=&nctemp889;
nctempchar1* nctemp886= nctemp888;
int nctemp890=CodeEs(nctemp884,nctemp886);
struct tree* nctemp892= p;
struct nctempchar1 *nctemp896;
static struct nctempchar1 nctemp897 = {{ 8}, (char*)"struct \0"};
nctemp896=&nctemp897;
nctempchar1* nctemp894= nctemp896;
int nctemp898=CodeEs(nctemp892,nctemp894);
struct tree* nctemp900= p;
struct nctempchar1 *nctemp904;
static struct nctempchar1 nctemp905 = {{ 7}, (char*)"nctemp\0"};
nctemp904=&nctemp905;
nctempchar1* nctemp902= nctemp904;
int nctemp906=CodeEs(nctemp900,nctemp902);
struct tree* nctemp908= p;
struct symbol* nctemp912= tp;
nctempchar1* nctemp914=SymGetype(nctemp912);
nctempchar1* nctemp910= nctemp914;
int nctemp915=CodeEs(nctemp908,nctemp910);
struct tree* nctemp917= p;
struct nctempchar1 *nctemp921;
static struct nctempchar1 nctemp922 = {{ 2}, (char*)"4\0"};
nctemp921=&nctemp922;
nctempchar1* nctemp919= nctemp921;
int nctemp923=CodeEs(nctemp917,nctemp919);
struct tree* nctemp925= p;
struct nctempchar1 *nctemp929;
static struct nctempchar1 nctemp930 = {{ 20}, (char*)" {int d[4]; struct \0"};
nctemp929=&nctemp930;
nctempchar1* nctemp927= nctemp929;
int nctemp931=CodeEs(nctemp925,nctemp927);
struct tree* nctemp933= p;
struct symbol* nctemp937= tp;
nctempchar1* nctemp939=SymGetype(nctemp937);
nctempchar1* nctemp935= nctemp939;
int nctemp940=CodeEs(nctemp933,nctemp935);
struct tree* nctemp942= p;
struct nctempchar1 *nctemp946;
static struct nctempchar1 nctemp947 = {{ 6}, (char*)" *a; \0"};
nctemp946=&nctemp947;
nctempchar1* nctemp944= nctemp946;
int nctemp948=CodeEs(nctemp942,nctemp944);
struct tree* nctemp950= p;
struct nctempchar1 *nctemp954;
static struct nctempchar1 nctemp955 = {{ 3}, (char*)"} \0"};
nctemp954=&nctemp955;
nctempchar1* nctemp952= nctemp954;
int nctemp956=CodeEs(nctemp950,nctemp952);
struct tree* nctemp958= p;
struct nctempchar1 *nctemp962;
static struct nctempchar1 nctemp963 = {{ 4}, (char*)";\n\0"};
nctemp962=&nctemp963;
nctempchar1* nctemp960= nctemp962;
int nctemp964=CodeEs(nctemp958,nctemp960);
return 1;
}
int CodeFdefcpusym (struct tree* p,struct symbol* tp)
{
struct symbol* nctemp971= tp;
nctempchar1* nctemp973=SymGetstruct(nctemp971);
nctempchar1* nctemp969= nctemp973;
struct nctempchar1 *nctemp976;
static struct nctempchar1 nctemp977 = {{ 7}, (char*)"struct\0"};
nctemp976=&nctemp977;
nctempchar1* nctemp974= nctemp976;
int nctemp978=LibeStrcmp(nctemp969,nctemp974);
int nctemp966 = (nctemp978 ==1);
if(nctemp966)
{
struct tree* nctemp981= p;
struct nctempchar1 *nctemp985;
static struct nctempchar1 nctemp986 = {{ 8}, (char*)"struct \0"};
nctemp985=&nctemp986;
nctempchar1* nctemp983= nctemp985;
int nctemp987=CodeEs(nctemp981,nctemp983);
}
struct symbol* nctemp993= tp;
nctempchar1* nctemp995=SymGetarray(nctemp993);
nctempchar1* nctemp991= nctemp995;
struct nctempchar1 *nctemp998;
static struct nctempchar1 nctemp999 = {{ 6}, (char*)"array\0"};
nctemp998=&nctemp999;
nctempchar1* nctemp996= nctemp998;
int nctemp1000=LibeStrcmp(nctemp991,nctemp996);
int nctemp988 = (nctemp1000 ==1);
if(nctemp988)
{
struct tree* nctemp1003= p;
struct nctempchar1 *nctemp1007;
static struct nctempchar1 nctemp1008 = {{ 7}, (char*)"nctemp\0"};
nctemp1007=&nctemp1008;
nctempchar1* nctemp1005= nctemp1007;
int nctemp1009=CodeEs(nctemp1003,nctemp1005);
}
struct tree* nctemp1011= p;
struct symbol* nctemp1015= tp;
nctempchar1* nctemp1017=SymGetype(nctemp1015);
nctempchar1* nctemp1013= nctemp1017;
int nctemp1018=CodeEs(nctemp1011,nctemp1013);
struct symbol* nctemp1024= tp;
nctempchar1* nctemp1026=SymGetarray(nctemp1024);
nctempchar1* nctemp1022= nctemp1026;
struct nctempchar1 *nctemp1029;
static struct nctempchar1 nctemp1030 = {{ 6}, (char*)"array\0"};
nctemp1029=&nctemp1030;
nctempchar1* nctemp1027= nctemp1029;
int nctemp1031=LibeStrcmp(nctemp1022,nctemp1027);
int nctemp1019 = (nctemp1031 ==1);
if(nctemp1019)
{
struct symbol* nctemp1036= tp;
int nctemp1038=SymGetrank(nctemp1036);
int nctemp1034= nctemp1038;
int nctemp1039=CodeEd(nctemp1034);
struct tree* nctemp1041= p;
struct nctempchar1 *nctemp1045;
static struct nctempchar1 nctemp1046 = {{ 3}, (char*)" *\0"};
nctemp1045=&nctemp1046;
nctempchar1* nctemp1043= nctemp1045;
int nctemp1047=CodeEs(nctemp1041,nctemp1043);
}
struct symbol* nctemp1053= tp;
nctempchar1* nctemp1055=SymGetstruct(nctemp1053);
nctempchar1* nctemp1051= nctemp1055;
struct nctempchar1 *nctemp1058;
static struct nctempchar1 nctemp1059 = {{ 7}, (char*)"struct\0"};
nctemp1058=&nctemp1059;
nctempchar1* nctemp1056= nctemp1058;
int nctemp1060=LibeStrcmp(nctemp1051,nctemp1056);
int nctemp1048 = (nctemp1060 ==1);
if(nctemp1048)
{
struct tree* nctemp1063= p;
struct nctempchar1 *nctemp1067;
static struct nctempchar1 nctemp1068 = {{ 2}, (char*)"*\0"};
nctemp1067=&nctemp1068;
nctempchar1* nctemp1065= nctemp1067;
int nctemp1069=CodeEs(nctemp1063,nctemp1065);
}
struct tree* nctemp1071= p;
struct nctempchar1 *nctemp1075;
static struct nctempchar1 nctemp1076 = {{ 2}, (char*)" \0"};
nctemp1075=&nctemp1076;
nctempchar1* nctemp1073= nctemp1075;
int nctemp1077=CodeEs(nctemp1071,nctemp1073);
struct tree* nctemp1079= p;
struct symbol* nctemp1083= tp;
nctempchar1* nctemp1085=SymGetname(nctemp1083);
nctempchar1* nctemp1081= nctemp1085;
int nctemp1086=CodeEs(nctemp1079,nctemp1081);
struct tree* nctemp1088= p;
struct nctempchar1 *nctemp1092;
static struct nctempchar1 nctemp1093 = {{ 3}, (char*)" (\0"};
nctemp1092=&nctemp1093;
nctempchar1* nctemp1090= nctemp1092;
int nctemp1094=CodeEs(nctemp1088,nctemp1090);
struct symbol* nctemp1099= tp;
struct symbol* nctemp1101=SymGetable(nctemp1099);
tp =nctemp1101;
int nctemp1102 = (tp ==0);
if(nctemp1102)
{
struct tree* nctemp1107= p;
struct nctempchar1 *nctemp1111;
static struct nctempchar1 nctemp1112 = {{ 5}, (char*)");\n\0"};
nctemp1111=&nctemp1112;
nctempchar1* nctemp1109= nctemp1111;
int nctemp1113=CodeEs(nctemp1107,nctemp1109);
return 1;
}
struct symbol* nctemp1119= tp;
struct symbol* nctemp1121=SymMvnext(nctemp1119);
tp =nctemp1121;
struct symbol* nctemp1126= tp;
struct symbol* nctemp1128=SymGetable(nctemp1126);
tp =nctemp1128;
int nctemp1129 = (tp ==0);
if(nctemp1129)
{
return 1;
}
struct symbol* nctemp1138= tp;
struct symbol* nctemp1140=SymMvnext(nctemp1138);
tp =nctemp1140;
int nctemp1141 = (tp !=0);
int nctemp1145=nctemp1141;
while(nctemp1145)
{{
struct tree* nctemp1147= p;
struct symbol* nctemp1149= tp;
int nctemp1151=CodeIdeclaration(nctemp1147,nctemp1149);
struct symbol* nctemp1156= tp;
struct symbol* nctemp1158=SymMvnext(nctemp1156);
tp =nctemp1158;
int nctemp1159 = (tp !=0);
if(nctemp1159)
{
struct tree* nctemp1164= p;
struct nctempchar1 *nctemp1168;
static struct nctempchar1 nctemp1169 = {{ 2}, (char*)",\0"};
nctemp1168=&nctemp1169;
nctempchar1* nctemp1166= nctemp1168;
int nctemp1170=CodeEs(nctemp1164,nctemp1166);
}
else{
struct tree* nctemp1172= p;
struct nctempchar1 *nctemp1176;
static struct nctempchar1 nctemp1177 = {{ 5}, (char*)");\n\0"};
nctemp1176=&nctemp1177;
nctempchar1* nctemp1174= nctemp1176;
int nctemp1178=CodeEs(nctemp1172,nctemp1174);
}
}
int nctemp1179 = (tp !=0);
nctemp1145=nctemp1179;}return 1;
}
int CodeImport (struct tree* p,struct symbol* tp)
{
nctempchar1 *module;
struct tree* nctemp1189= p;
nctempchar1* nctemp1191=PtreeGetdef(nctemp1189);
module=nctemp1191;
struct symbol* nctemp1196= tp;
struct symbol* nctemp1198=SymMvnext(nctemp1196);
tp =nctemp1198;
int nctemp1199 = (tp !=0);
int nctemp1203=nctemp1199;
while(nctemp1203)
{{
struct symbol* nctemp1209= tp;
nctempchar1* nctemp1211=SymGetmodule(nctemp1209);
nctempchar1* nctemp1207= nctemp1211;
nctempchar1* nctemp1212= module;
int nctemp1215=LibeStrcmp(nctemp1207,nctemp1212);
int nctemp1204 = (nctemp1215 ==1);
if(nctemp1204)
{
struct symbol* nctemp1222= tp;
nctempchar1* nctemp1224=SymGetstruct(nctemp1222);
nctempchar1* nctemp1220= nctemp1224;
struct nctempchar1 *nctemp1227;
static struct nctempchar1 nctemp1228 = {{ 10}, (char*)"structdef\0"};
nctemp1227=&nctemp1228;
nctempchar1* nctemp1225= nctemp1227;
int nctemp1229=LibeStrcmp(nctemp1220,nctemp1225);
int nctemp1217 = (nctemp1229 ==1);
if(nctemp1217)
{
struct tree* nctemp1232= p;
struct symbol* nctemp1234= tp;
int nctemp1236=CodeStructdefsym(nctemp1232,nctemp1234);
}
else{
struct symbol* nctemp1242= tp;
nctempchar1* nctemp1244=SymGetfunc(nctemp1242);
nctempchar1* nctemp1240= nctemp1244;
struct nctempchar1 *nctemp1247;
static struct nctempchar1 nctemp1248 = {{ 5}, (char*)"fdef\0"};
nctemp1247=&nctemp1248;
nctempchar1* nctemp1245= nctemp1247;
int nctemp1249=LibeStrcmp(nctemp1240,nctemp1245);
int nctemp1237 = (nctemp1249 ==1);
if(nctemp1237)
{
struct tree* nctemp1252= p;
struct symbol* nctemp1254= tp;
int nctemp1256=CodeFdefcpusym(nctemp1252,nctemp1254);
}
else{
struct tree* nctemp1258= p;
struct symbol* nctemp1260= tp;
int nctemp1262=CodeIdeclaration(nctemp1258,nctemp1260);
struct tree* nctemp1264= p;
struct nctempchar1 *nctemp1268;
static struct nctempchar1 nctemp1269 = {{ 4}, (char*)";\n\0"};
nctemp1268=&nctemp1269;
nctempchar1* nctemp1266= nctemp1268;
int nctemp1270=CodeEs(nctemp1264,nctemp1266);
}
}
}
struct symbol* nctemp1275= tp;
struct symbol* nctemp1277=SymMvnext(nctemp1275);
tp =nctemp1277;
}
int nctemp1278 = (tp !=0);
nctemp1203=nctemp1278;}return 1;
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
struct tree* nctemp1288= p;
nctempchar1* nctemp1290=PtreeGetarray(nctemp1288);
nctempchar1* nctemp1286= nctemp1290;
struct nctempchar1 *nctemp1293;
static struct nctempchar1 nctemp1294 = {{ 6}, (char*)"array\0"};
nctemp1293=&nctemp1294;
nctempchar1* nctemp1291= nctemp1293;
int nctemp1295=LibeStrcmp(nctemp1286,nctemp1291);
int nctemp1283 = (nctemp1295 ==1);
if(nctemp1283)
{
struct tree* nctemp1301= p;
struct tree* nctemp1303=PtreeMvchild(nctemp1301);
p =nctemp1303;
struct tree* nctemp1308= p;
struct tree* nctemp1310=PtreeMvsister(nctemp1308);
p =nctemp1310;
struct tree* nctemp1316= p;
nctempchar1* nctemp1318=PtreeGetforw(nctemp1316);
nctempchar1* nctemp1314= nctemp1318;
struct nctempchar1 *nctemp1321;
static struct nctempchar1 nctemp1322 = {{ 5}, (char*)"forw\0"};
nctemp1321=&nctemp1322;
nctempchar1* nctemp1319= nctemp1321;
int nctemp1323=LibeStrcmp(nctemp1314,nctemp1319);
int nctemp1311 = (nctemp1323 ==1);
if(nctemp1311)
{
forw =1;
}
}
else{
struct tree* nctemp1333= p;
struct tree* nctemp1335=PtreeMvchild(nctemp1333);
p =nctemp1335;
struct tree* nctemp1341= p;
nctempchar1* nctemp1343=PtreeGetforw(nctemp1341);
nctempchar1* nctemp1339= nctemp1343;
struct nctempchar1 *nctemp1346;
static struct nctempchar1 nctemp1347 = {{ 5}, (char*)"forw\0"};
nctemp1346=&nctemp1347;
nctempchar1* nctemp1344= nctemp1346;
int nctemp1348=LibeStrcmp(nctemp1339,nctemp1344);
int nctemp1336 = (nctemp1348 ==1);
if(nctemp1336)
{
forw =1;
}
}
struct tree* nctemp1360= p;
nctempchar1* nctemp1362=PtreeGetdef(nctemp1360);
nctempchar1* nctemp1358= nctemp1362;
struct symbol* nctemp1365=SymGetetp();
struct symbol* nctemp1363= nctemp1365;
struct symbol* nctemp1366=SymLookup(nctemp1358,nctemp1363);
tp =nctemp1366;
struct symbol* nctemp1372= tp;
nctempchar1* nctemp1374=SymGetstruct(nctemp1372);
nctempchar1* nctemp1370= nctemp1374;
struct nctempchar1 *nctemp1377;
static struct nctempchar1 nctemp1378 = {{ 7}, (char*)"struct\0"};
nctemp1377=&nctemp1378;
nctempchar1* nctemp1375= nctemp1377;
int nctemp1379=LibeStrcmp(nctemp1370,nctemp1375);
int nctemp1367 = (nctemp1379 ==1);
if(nctemp1367)
{
struct tree* nctemp1382= p;
struct nctempchar1 *nctemp1386;
static struct nctempchar1 nctemp1387 = {{ 8}, (char*)"struct \0"};
nctemp1386=&nctemp1387;
nctempchar1* nctemp1384= nctemp1386;
int nctemp1388=CodeEs(nctemp1382,nctemp1384);
}
struct symbol* nctemp1394= tp;
nctempchar1* nctemp1396=SymGetarray(nctemp1394);
nctempchar1* nctemp1392= nctemp1396;
struct nctempchar1 *nctemp1399;
static struct nctempchar1 nctemp1400 = {{ 6}, (char*)"array\0"};
nctemp1399=&nctemp1400;
nctempchar1* nctemp1397= nctemp1399;
int nctemp1401=LibeStrcmp(nctemp1392,nctemp1397);
int nctemp1389 = (nctemp1401 ==1);
if(nctemp1389)
{
struct tree* nctemp1404= p;
struct nctempchar1 *nctemp1408;
static struct nctempchar1 nctemp1409 = {{ 7}, (char*)"nctemp\0"};
nctemp1408=&nctemp1409;
nctempchar1* nctemp1406= nctemp1408;
int nctemp1410=CodeEs(nctemp1404,nctemp1406);
}
struct tree* nctemp1412= p;
struct symbol* nctemp1416= tp;
nctempchar1* nctemp1418=SymGetype(nctemp1416);
nctempchar1* nctemp1414= nctemp1418;
int nctemp1419=CodeEs(nctemp1412,nctemp1414);
struct symbol* nctemp1425= tp;
nctempchar1* nctemp1427=SymGetarray(nctemp1425);
nctempchar1* nctemp1423= nctemp1427;
struct nctempchar1 *nctemp1430;
static struct nctempchar1 nctemp1431 = {{ 6}, (char*)"array\0"};
nctemp1430=&nctemp1431;
nctempchar1* nctemp1428= nctemp1430;
int nctemp1432=LibeStrcmp(nctemp1423,nctemp1428);
int nctemp1420 = (nctemp1432 ==1);
if(nctemp1420)
{
struct symbol* nctemp1437= tp;
int nctemp1439=SymGetrank(nctemp1437);
int nctemp1435= nctemp1439;
int nctemp1440=CodeEd(nctemp1435);
struct tree* nctemp1442= p;
struct nctempchar1 *nctemp1446;
static struct nctempchar1 nctemp1447 = {{ 3}, (char*)" *\0"};
nctemp1446=&nctemp1447;
nctempchar1* nctemp1444= nctemp1446;
int nctemp1448=CodeEs(nctemp1442,nctemp1444);
}
struct symbol* nctemp1454= tp;
nctempchar1* nctemp1456=SymGetstruct(nctemp1454);
nctempchar1* nctemp1452= nctemp1456;
struct nctempchar1 *nctemp1459;
static struct nctempchar1 nctemp1460 = {{ 7}, (char*)"struct\0"};
nctemp1459=&nctemp1460;
nctempchar1* nctemp1457= nctemp1459;
int nctemp1461=LibeStrcmp(nctemp1452,nctemp1457);
int nctemp1449 = (nctemp1461 ==1);
if(nctemp1449)
{
struct tree* nctemp1464= p;
struct nctempchar1 *nctemp1468;
static struct nctempchar1 nctemp1469 = {{ 2}, (char*)"*\0"};
nctemp1468=&nctemp1469;
nctempchar1* nctemp1466= nctemp1468;
int nctemp1470=CodeEs(nctemp1464,nctemp1466);
}
struct tree* nctemp1472= p;
struct nctempchar1 *nctemp1476;
static struct nctempchar1 nctemp1477 = {{ 2}, (char*)" \0"};
nctemp1476=&nctemp1477;
nctempchar1* nctemp1474= nctemp1476;
int nctemp1478=CodeEs(nctemp1472,nctemp1474);
struct tree* nctemp1480= p;
struct symbol* nctemp1484= tp;
nctempchar1* nctemp1486=SymGetname(nctemp1484);
nctempchar1* nctemp1482= nctemp1486;
int nctemp1487=CodeEs(nctemp1480,nctemp1482);
struct tree* nctemp1489= p;
struct nctempchar1 *nctemp1493;
static struct nctempchar1 nctemp1494 = {{ 3}, (char*)" (\0"};
nctemp1493=&nctemp1494;
nctempchar1* nctemp1491= nctemp1493;
int nctemp1495=CodeEs(nctemp1489,nctemp1491);
struct tree* nctemp1499= p;
struct tree* nctemp1501=PtreeMvchild(nctemp1499);
int nctemp1496 = (nctemp1501 !=0);
if(nctemp1496)
{
struct tree* nctemp1507= p;
struct tree* nctemp1509=PtreeMvchild(nctemp1507);
p =nctemp1509;
}
struct tree* nctemp1515= p;
nctempchar1* nctemp1517=PtreeGetname(nctemp1515);
nctempchar1* nctemp1513= nctemp1517;
struct nctempchar1 *nctemp1520;
static struct nctempchar1 nctemp1521 = {{ 8}, (char*)"arglist\0"};
nctemp1520=&nctemp1521;
nctempchar1* nctemp1518= nctemp1520;
int nctemp1522=LibeStrcmp(nctemp1513,nctemp1518);
int nctemp1510 = (nctemp1522 ==1);
if(nctemp1510)
{
struct symbol* nctemp1528= tp;
struct symbol* nctemp1530=SymGetable(nctemp1528);
tp =nctemp1530;
struct nctempchar1 *nctemp1537;
static struct nctempchar1 nctemp1538 = {{ 9}, (char*)"#arglist\0"};
nctemp1537=&nctemp1538;
nctempchar1* nctemp1535= nctemp1537;
struct symbol* nctemp1539= tp;
struct symbol* nctemp1541=SymLookup(nctemp1535,nctemp1539);
tp =nctemp1541;
struct symbol* nctemp1546= tp;
struct symbol* nctemp1548=SymGetable(nctemp1546);
tp =nctemp1548;
struct symbol* nctemp1556= tp;
struct symbol* nctemp1558=SymMvnext(nctemp1556);
tp =nctemp1558;
int nctemp1549 = (tp !=0);
int nctemp1560=nctemp1549;
while(nctemp1560)
{{
struct tree* nctemp1562= p;
struct symbol* nctemp1564= tp;
int nctemp1566=CodeIdeclaration(nctemp1562,nctemp1564);
struct symbol* nctemp1570= tp;
struct symbol* nctemp1572=SymMvnext(nctemp1570);
int nctemp1567 = (nctemp1572 !=0);
if(nctemp1567)
{
struct tree* nctemp1575= p;
struct nctempchar1 *nctemp1579;
static struct nctempchar1 nctemp1580 = {{ 2}, (char*)",\0"};
nctemp1579=&nctemp1580;
nctempchar1* nctemp1577= nctemp1579;
int nctemp1581=CodeEs(nctemp1575,nctemp1577);
}
int nctemp1590 = noarg + 1;
noarg =nctemp1590;
}
struct symbol* nctemp1598= tp;
struct symbol* nctemp1600=SymMvnext(nctemp1598);
tp =nctemp1600;
int nctemp1591 = (tp !=0);
nctemp1560=nctemp1591;}}
struct tree* nctemp1603= p;
struct nctempchar1 *nctemp1607;
static struct nctempchar1 nctemp1608 = {{ 4}, (char*)")\n\0"};
nctemp1607=&nctemp1608;
nctempchar1* nctemp1605= nctemp1607;
int nctemp1609=CodeEs(nctemp1603,nctemp1605);
int nctemp1610 = (forw ==1);
if(nctemp1610)
{
struct tree* nctemp1615= p;
struct nctempchar1 *nctemp1619;
static struct nctempchar1 nctemp1620 = {{ 4}, (char*)";\n\0"};
nctemp1619=&nctemp1620;
nctempchar1* nctemp1617= nctemp1619;
int nctemp1621=CodeEs(nctemp1615,nctemp1617);
return 1;
}
struct tree* nctemp1626= p;
struct tree* nctemp1628=PtreeMvsister(nctemp1626);
int nctemp1623 = (nctemp1628 !=0);
if(nctemp1623)
{
struct tree* nctemp1633= p;
struct tree* nctemp1635=PtreeMvsister(nctemp1633);
struct tree* nctemp1631= nctemp1635;
int nctemp1636=CodeCompstmnt(nctemp1631);
}
else{
struct tree* nctemp1638= p;
int nctemp1640=CodeCompstmnt(nctemp1638);
}
return 1;
}
int CodeFdeclkernel (struct tree* p)
{
struct symbol* tp;
int noarg;
noarg = 0;
struct tree* nctemp1648= p;
nctempchar1* nctemp1650=PtreeGetdef(nctemp1648);
nctempchar1* nctemp1646= nctemp1650;
struct symbol* nctemp1653=SymGetetp();
struct symbol* nctemp1651= nctemp1653;
struct symbol* nctemp1654=SymLookup(nctemp1646,nctemp1651);
tp =nctemp1654;
struct symbol* nctemp1658= tp;
struct symbol* nctemp1660=SymGetable(nctemp1658);
struct symbol* nctemp1656= nctemp1660;
struct symbol* nctemp1661=SymSetltp(nctemp1656);
struct tree* nctemp1663= p;
struct nctempchar1 *nctemp1667;
static struct nctempchar1 nctemp1668 = {{ 12}, (char*)"__global__ \0"};
nctemp1667=&nctemp1668;
nctempchar1* nctemp1665= nctemp1667;
int nctemp1669=CodeEs(nctemp1663,nctemp1665);
struct tree* nctemp1671= p;
struct nctempchar1 *nctemp1675;
static struct nctempchar1 nctemp1676 = {{ 5}, (char*)"void\0"};
nctemp1675=&nctemp1676;
nctempchar1* nctemp1673= nctemp1675;
int nctemp1677=CodeEs(nctemp1671,nctemp1673);
struct symbol* nctemp1683= tp;
nctempchar1* nctemp1685=SymGetarray(nctemp1683);
nctempchar1* nctemp1681= nctemp1685;
struct nctempchar1 *nctemp1688;
static struct nctempchar1 nctemp1689 = {{ 6}, (char*)"array\0"};
nctemp1688=&nctemp1689;
nctempchar1* nctemp1686= nctemp1688;
int nctemp1690=LibeStrcmp(nctemp1681,nctemp1686);
int nctemp1678 = (nctemp1690 ==1);
if(nctemp1678)
{
struct symbol* nctemp1695= tp;
int nctemp1697=SymGetrank(nctemp1695);
int nctemp1693= nctemp1697;
int nctemp1698=CodeEd(nctemp1693);
}
struct symbol* nctemp1704= tp;
nctempchar1* nctemp1706=SymGetstruct(nctemp1704);
nctempchar1* nctemp1702= nctemp1706;
struct nctempchar1 *nctemp1709;
static struct nctempchar1 nctemp1710 = {{ 7}, (char*)"struct\0"};
nctemp1709=&nctemp1710;
nctempchar1* nctemp1707= nctemp1709;
int nctemp1711=LibeStrcmp(nctemp1702,nctemp1707);
int nctemp1699 = (nctemp1711 ==1);
if(nctemp1699)
{
struct tree* nctemp1714= p;
struct nctempchar1 *nctemp1718;
static struct nctempchar1 nctemp1719 = {{ 2}, (char*)"*\0"};
nctemp1718=&nctemp1719;
nctempchar1* nctemp1716= nctemp1718;
int nctemp1720=CodeEs(nctemp1714,nctemp1716);
}
struct tree* nctemp1722= p;
struct nctempchar1 *nctemp1726;
static struct nctempchar1 nctemp1727 = {{ 2}, (char*)" \0"};
nctemp1726=&nctemp1727;
nctempchar1* nctemp1724= nctemp1726;
int nctemp1728=CodeEs(nctemp1722,nctemp1724);
struct tree* nctemp1730= p;
struct nctempchar1 *nctemp1734;
static struct nctempchar1 nctemp1735 = {{ 8}, (char*)"kernel_\0"};
nctemp1734=&nctemp1735;
nctempchar1* nctemp1732= nctemp1734;
int nctemp1736=CodeEs(nctemp1730,nctemp1732);
struct tree* nctemp1738= p;
struct symbol* nctemp1742= tp;
nctempchar1* nctemp1744=SymGetname(nctemp1742);
nctempchar1* nctemp1740= nctemp1744;
int nctemp1745=CodeEs(nctemp1738,nctemp1740);
struct tree* nctemp1747= p;
struct nctempchar1 *nctemp1751;
static struct nctempchar1 nctemp1752 = {{ 3}, (char*)" (\0"};
nctemp1751=&nctemp1752;
nctempchar1* nctemp1749= nctemp1751;
int nctemp1753=CodeEs(nctemp1747,nctemp1749);
struct tree* nctemp1758= p;
struct tree* nctemp1760=PtreeMvchild(nctemp1758);
p =nctemp1760;
struct tree* nctemp1766= p;
nctempchar1* nctemp1768=PtreeGetname(nctemp1766);
nctempchar1* nctemp1764= nctemp1768;
struct nctempchar1 *nctemp1771;
static struct nctempchar1 nctemp1772 = {{ 8}, (char*)"arglist\0"};
nctemp1771=&nctemp1772;
nctempchar1* nctemp1769= nctemp1771;
int nctemp1773=LibeStrcmp(nctemp1764,nctemp1769);
int nctemp1761 = (nctemp1773 ==1);
if(nctemp1761)
{
struct symbol* nctemp1779= tp;
struct symbol* nctemp1781=SymGetable(nctemp1779);
tp =nctemp1781;
struct nctempchar1 *nctemp1788;
static struct nctempchar1 nctemp1789 = {{ 9}, (char*)"#arglist\0"};
nctemp1788=&nctemp1789;
nctempchar1* nctemp1786= nctemp1788;
struct symbol* nctemp1790= tp;
struct symbol* nctemp1792=SymLookup(nctemp1786,nctemp1790);
tp =nctemp1792;
struct symbol* nctemp1797= tp;
struct symbol* nctemp1799=SymGetable(nctemp1797);
tp =nctemp1799;
struct symbol* nctemp1807= tp;
struct symbol* nctemp1809=SymMvnext(nctemp1807);
tp =nctemp1809;
int nctemp1800 = (tp !=0);
int nctemp1811=nctemp1800;
while(nctemp1811)
{{
struct tree* nctemp1813= p;
struct symbol* nctemp1815= tp;
int nctemp1817=CodeIdeclaration(nctemp1813,nctemp1815);
struct symbol* nctemp1821= tp;
struct symbol* nctemp1823=SymMvnext(nctemp1821);
int nctemp1818 = (nctemp1823 !=0);
if(nctemp1818)
{
struct tree* nctemp1826= p;
struct nctempchar1 *nctemp1830;
static struct nctempchar1 nctemp1831 = {{ 2}, (char*)",\0"};
nctemp1830=&nctemp1831;
nctempchar1* nctemp1828= nctemp1830;
int nctemp1832=CodeEs(nctemp1826,nctemp1828);
}
int nctemp1841 = noarg + 1;
noarg =nctemp1841;
}
struct symbol* nctemp1849= tp;
struct symbol* nctemp1851=SymMvnext(nctemp1849);
tp =nctemp1851;
int nctemp1842 = (tp !=0);
nctemp1811=nctemp1842;}}
struct tree* nctemp1854= p;
struct nctempchar1 *nctemp1858;
static struct nctempchar1 nctemp1859 = {{ 5}, (char*)");\n\0"};
nctemp1858=&nctemp1859;
nctempchar1* nctemp1856= nctemp1858;
int nctemp1860=CodeEs(nctemp1854,nctemp1856);
return 1;
}
int CodeFdefgpu (struct tree* p)
{
struct symbol* tp;
int noarg;
int forw;
noarg = 0;
forw = 0;
struct tree* nctemp1867= p;
nctempchar1* nctemp1869=PtreeGetarray(nctemp1867);
nctempchar1* nctemp1865= nctemp1869;
struct nctempchar1 *nctemp1872;
static struct nctempchar1 nctemp1873 = {{ 6}, (char*)"array\0"};
nctemp1872=&nctemp1873;
nctempchar1* nctemp1870= nctemp1872;
int nctemp1874=LibeStrcmp(nctemp1865,nctemp1870);
int nctemp1862 = (nctemp1874 ==1);
if(nctemp1862)
{
struct tree* nctemp1880= p;
struct tree* nctemp1882=PtreeMvchild(nctemp1880);
p =nctemp1882;
struct tree* nctemp1887= p;
struct tree* nctemp1889=PtreeMvsister(nctemp1887);
p =nctemp1889;
struct tree* nctemp1895= p;
nctempchar1* nctemp1897=PtreeGetforw(nctemp1895);
nctempchar1* nctemp1893= nctemp1897;
struct nctempchar1 *nctemp1900;
static struct nctempchar1 nctemp1901 = {{ 5}, (char*)"forw\0"};
nctemp1900=&nctemp1901;
nctempchar1* nctemp1898= nctemp1900;
int nctemp1902=LibeStrcmp(nctemp1893,nctemp1898);
int nctemp1890 = (nctemp1902 ==1);
if(nctemp1890)
{
forw =1;
}
}
else{
struct tree* nctemp1912= p;
struct tree* nctemp1914=PtreeMvchild(nctemp1912);
p =nctemp1914;
struct tree* nctemp1920= p;
nctempchar1* nctemp1922=PtreeGetforw(nctemp1920);
nctempchar1* nctemp1918= nctemp1922;
struct nctempchar1 *nctemp1925;
static struct nctempchar1 nctemp1926 = {{ 5}, (char*)"forw\0"};
nctemp1925=&nctemp1926;
nctempchar1* nctemp1923= nctemp1925;
int nctemp1927=LibeStrcmp(nctemp1918,nctemp1923);
int nctemp1915 = (nctemp1927 ==1);
if(nctemp1915)
{
forw =1;
}
}
struct tree* nctemp1939= p;
nctempchar1* nctemp1941=PtreeGetdef(nctemp1939);
nctempchar1* nctemp1937= nctemp1941;
struct symbol* nctemp1944=SymGetetp();
struct symbol* nctemp1942= nctemp1944;
struct symbol* nctemp1945=SymLookup(nctemp1937,nctemp1942);
tp =nctemp1945;
struct tree* nctemp1947= p;
struct nctempchar1 *nctemp1951;
static struct nctempchar1 nctemp1952 = {{ 11}, (char*)"__global__\0"};
nctemp1951=&nctemp1952;
nctempchar1* nctemp1949= nctemp1951;
int nctemp1953=CodeEs(nctemp1947,nctemp1949);
struct tree* nctemp1955= p;
struct nctempchar1 *nctemp1959;
static struct nctempchar1 nctemp1960 = {{ 6}, (char*)" void\0"};
nctemp1959=&nctemp1960;
nctempchar1* nctemp1957= nctemp1959;
int nctemp1961=CodeEs(nctemp1955,nctemp1957);
struct tree* nctemp1963= p;
struct nctempchar1 *nctemp1967;
static struct nctempchar1 nctemp1968 = {{ 2}, (char*)" \0"};
nctemp1967=&nctemp1968;
nctempchar1* nctemp1965= nctemp1967;
int nctemp1969=CodeEs(nctemp1963,nctemp1965);
struct tree* nctemp1971= p;
struct nctempchar1 *nctemp1975;
static struct nctempchar1 nctemp1976 = {{ 8}, (char*)"kernel_\0"};
nctemp1975=&nctemp1976;
nctempchar1* nctemp1973= nctemp1975;
int nctemp1977=CodeEs(nctemp1971,nctemp1973);
struct tree* nctemp1979= p;
struct symbol* nctemp1983= tp;
nctempchar1* nctemp1985=SymGetname(nctemp1983);
nctempchar1* nctemp1981= nctemp1985;
int nctemp1986=CodeEs(nctemp1979,nctemp1981);
struct tree* nctemp1988= p;
struct nctempchar1 *nctemp1992;
static struct nctempchar1 nctemp1993 = {{ 3}, (char*)" (\0"};
nctemp1992=&nctemp1993;
nctempchar1* nctemp1990= nctemp1992;
int nctemp1994=CodeEs(nctemp1988,nctemp1990);
struct tree* nctemp1998= p;
struct tree* nctemp2000=PtreeMvchild(nctemp1998);
int nctemp1995 = (nctemp2000 !=0);
if(nctemp1995)
{
struct tree* nctemp2006= p;
struct tree* nctemp2008=PtreeMvchild(nctemp2006);
p =nctemp2008;
}
struct tree* nctemp2014= p;
nctempchar1* nctemp2016=PtreeGetname(nctemp2014);
nctempchar1* nctemp2012= nctemp2016;
struct nctempchar1 *nctemp2019;
static struct nctempchar1 nctemp2020 = {{ 8}, (char*)"arglist\0"};
nctemp2019=&nctemp2020;
nctempchar1* nctemp2017= nctemp2019;
int nctemp2021=LibeStrcmp(nctemp2012,nctemp2017);
int nctemp2009 = (nctemp2021 ==1);
if(nctemp2009)
{
struct symbol* nctemp2027= tp;
struct symbol* nctemp2029=SymGetable(nctemp2027);
tp =nctemp2029;
struct nctempchar1 *nctemp2036;
static struct nctempchar1 nctemp2037 = {{ 9}, (char*)"#arglist\0"};
nctemp2036=&nctemp2037;
nctempchar1* nctemp2034= nctemp2036;
struct symbol* nctemp2038= tp;
struct symbol* nctemp2040=SymLookup(nctemp2034,nctemp2038);
tp =nctemp2040;
struct symbol* nctemp2045= tp;
struct symbol* nctemp2047=SymGetable(nctemp2045);
tp =nctemp2047;
struct symbol* nctemp2055= tp;
struct symbol* nctemp2057=SymMvnext(nctemp2055);
tp =nctemp2057;
int nctemp2048 = (tp !=0);
int nctemp2059=nctemp2048;
while(nctemp2059)
{{
struct tree* nctemp2061= p;
struct symbol* nctemp2063= tp;
int nctemp2065=CodeIdeclaration(nctemp2061,nctemp2063);
struct symbol* nctemp2069= tp;
struct symbol* nctemp2071=SymMvnext(nctemp2069);
int nctemp2066 = (nctemp2071 !=0);
if(nctemp2066)
{
struct tree* nctemp2074= p;
struct nctempchar1 *nctemp2078;
static struct nctempchar1 nctemp2079 = {{ 2}, (char*)",\0"};
nctemp2078=&nctemp2079;
nctempchar1* nctemp2076= nctemp2078;
int nctemp2080=CodeEs(nctemp2074,nctemp2076);
}
int nctemp2089 = noarg + 1;
noarg =nctemp2089;
}
struct symbol* nctemp2097= tp;
struct symbol* nctemp2099=SymMvnext(nctemp2097);
tp =nctemp2099;
int nctemp2090 = (tp !=0);
nctemp2059=nctemp2090;}}
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
struct symbol* nctemp2167=SymSetltp(nctemp2162);
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
int nctemp2376 = noarg + 1;
noarg =nctemp2376;
}
struct symbol* nctemp2384= tp;
struct symbol* nctemp2386=SymMvnext(nctemp2384);
tp =nctemp2386;
int nctemp2377 = (tp !=0);
nctemp2346=nctemp2377;}}
struct tree* nctemp2389= p;
struct nctempchar1 *nctemp2393;
static struct nctempchar1 nctemp2394 = {{ 4}, (char*)")\n\0"};
nctemp2393=&nctemp2394;
nctempchar1* nctemp2391= nctemp2393;
int nctemp2395=CodeEs(nctemp2389,nctemp2391);
struct tree* nctemp2397= p;
struct nctempchar1 *nctemp2401;
static struct nctempchar1 nctemp2402 = {{ 4}, (char*)"{\n\0"};
nctemp2401=&nctemp2402;
nctempchar1* nctemp2399= nctemp2401;
int nctemp2403=CodeEs(nctemp2397,nctemp2399);
p = top;
tp = toptp;
struct tree* nctemp2405= p;
struct nctempchar1 *nctemp2409;
static struct nctempchar1 nctemp2410 = {{ 10}, (char*)"  kernel_\0"};
nctemp2409=&nctemp2410;
nctempchar1* nctemp2407= nctemp2409;
int nctemp2411=CodeEs(nctemp2405,nctemp2407);
struct tree* nctemp2413= p;
struct symbol* nctemp2417= tp;
nctempchar1* nctemp2419=SymGetname(nctemp2417);
nctempchar1* nctemp2415= nctemp2419;
int nctemp2420=CodeEs(nctemp2413,nctemp2415);
struct tree* nctemp2422= p;
struct nctempchar1 *nctemp2426;
static struct nctempchar1 nctemp2427 = {{ 31}, (char*)"<<< RunGetnb(),RunGetnt() >>>(\0"};
nctemp2426=&nctemp2427;
nctempchar1* nctemp2424= nctemp2426;
int nctemp2428=CodeEs(nctemp2422,nctemp2424);
struct tree* nctemp2433= p;
struct tree* nctemp2435=PtreeMvchild(nctemp2433);
p =nctemp2435;
struct tree* nctemp2441= p;
nctempchar1* nctemp2443=PtreeGetname(nctemp2441);
nctempchar1* nctemp2439= nctemp2443;
struct nctempchar1 *nctemp2446;
static struct nctempchar1 nctemp2447 = {{ 8}, (char*)"arglist\0"};
nctemp2446=&nctemp2447;
nctempchar1* nctemp2444= nctemp2446;
int nctemp2448=LibeStrcmp(nctemp2439,nctemp2444);
int nctemp2436 = (nctemp2448 ==1);
if(nctemp2436)
{
struct symbol* nctemp2454= tp;
struct symbol* nctemp2456=SymGetable(nctemp2454);
tp =nctemp2456;
struct nctempchar1 *nctemp2463;
static struct nctempchar1 nctemp2464 = {{ 9}, (char*)"#arglist\0"};
nctemp2463=&nctemp2464;
nctempchar1* nctemp2461= nctemp2463;
struct symbol* nctemp2465= tp;
struct symbol* nctemp2467=SymLookup(nctemp2461,nctemp2465);
tp =nctemp2467;
struct symbol* nctemp2472= tp;
struct symbol* nctemp2474=SymGetable(nctemp2472);
tp =nctemp2474;
struct symbol* nctemp2482= tp;
struct symbol* nctemp2484=SymMvnext(nctemp2482);
tp =nctemp2484;
int nctemp2475 = (tp !=0);
int nctemp2486=nctemp2475;
while(nctemp2486)
{{
struct tree* nctemp2488= p;
struct symbol* nctemp2492= tp;
nctempchar1* nctemp2494=SymGetname(nctemp2492);
nctempchar1* nctemp2490= nctemp2494;
int nctemp2495=CodeEs(nctemp2488,nctemp2490);
struct symbol* nctemp2499= tp;
struct symbol* nctemp2501=SymMvnext(nctemp2499);
int nctemp2496 = (nctemp2501 !=0);
if(nctemp2496)
{
struct tree* nctemp2504= p;
struct nctempchar1 *nctemp2508;
static struct nctempchar1 nctemp2509 = {{ 2}, (char*)",\0"};
nctemp2508=&nctemp2509;
nctempchar1* nctemp2506= nctemp2508;
int nctemp2510=CodeEs(nctemp2504,nctemp2506);
}
int nctemp2519 = noarg + 1;
noarg =nctemp2519;
}
struct symbol* nctemp2527= tp;
struct symbol* nctemp2529=SymMvnext(nctemp2527);
tp =nctemp2529;
int nctemp2520 = (tp !=0);
nctemp2486=nctemp2520;}}
struct tree* nctemp2532= p;
struct nctempchar1 *nctemp2536;
static struct nctempchar1 nctemp2537 = {{ 5}, (char*)");\n\0"};
nctemp2536=&nctemp2537;
nctempchar1* nctemp2534= nctemp2536;
int nctemp2538=CodeEs(nctemp2532,nctemp2534);
struct tree* nctemp2540= p;
struct nctempchar1 *nctemp2544;
static struct nctempchar1 nctemp2545 = {{ 14}, (char*)"GpuError();\n\0"};
nctemp2544=&nctemp2545;
nctempchar1* nctemp2542= nctemp2544;
int nctemp2546=CodeEs(nctemp2540,nctemp2542);
struct tree* nctemp2548= p;
struct nctempchar1 *nctemp2552;
static struct nctempchar1 nctemp2553 = {{ 13}, (char*)"return(1);\n\0"};
nctemp2552=&nctemp2553;
nctempchar1* nctemp2550= nctemp2552;
int nctemp2554=CodeEs(nctemp2548,nctemp2550);
struct tree* nctemp2556= p;
struct nctempchar1 *nctemp2560;
static struct nctempchar1 nctemp2561 = {{ 4}, (char*)"}\n\0"};
nctemp2560=&nctemp2561;
nctempchar1* nctemp2558= nctemp2560;
int nctemp2562=CodeEs(nctemp2556,nctemp2558);
return 1;
}
int CodeGdeclarations (struct tree* p,struct symbol* tp)
{
struct symbol* nctemp2568= tp;
struct symbol* nctemp2570=SymMvnext(nctemp2568);
tp =nctemp2570;
int nctemp2571 = (tp !=0);
int nctemp2575=nctemp2571;
while(nctemp2575)
{{
struct nctempchar1 *nctemp2581;
static struct nctempchar1 nctemp2582 = {{ 9}, (char*)"#arglist\0"};
nctemp2581=&nctemp2582;
nctempchar1* nctemp2579= nctemp2581;
struct symbol* nctemp2585= tp;
nctempchar1* nctemp2587=SymGetname(nctemp2585);
nctempchar1* nctemp2583= nctemp2587;
int nctemp2588=LibeStrcmp(nctemp2579,nctemp2583);
int nctemp2576 = (nctemp2588 ==0);
if(nctemp2576)
{
struct symbol* nctemp2593= tp;
int nctemp2595=SymGetemit(nctemp2593);
int nctemp2590 = (nctemp2595 ==1);
if(nctemp2590)
{
struct symbol* nctemp2602= tp;
nctempchar1* nctemp2604=SymGetstruct(nctemp2602);
nctempchar1* nctemp2600= nctemp2604;
struct nctempchar1 *nctemp2607;
static struct nctempchar1 nctemp2608 = {{ 10}, (char*)"structdef\0"};
nctemp2607=&nctemp2608;
nctempchar1* nctemp2605= nctemp2607;
int nctemp2609=LibeStrcmp(nctemp2600,nctemp2605);
int nctemp2597 = (nctemp2609 ==1);
if(nctemp2597)
{
struct tree* nctemp2612= p;
struct symbol* nctemp2614= tp;
int nctemp2616=CodeStructdef(nctemp2612,nctemp2614);
}
else{
struct symbol* nctemp2622= tp;
nctempchar1* nctemp2624=SymGetfunc(nctemp2622);
nctempchar1* nctemp2620= nctemp2624;
struct nctempchar1 *nctemp2627;
static struct nctempchar1 nctemp2628 = {{ 5}, (char*)"fdef\0"};
nctemp2627=&nctemp2628;
nctempchar1* nctemp2625= nctemp2627;
int nctemp2629=LibeStrcmp(nctemp2620,nctemp2625);
int nctemp2617 = (nctemp2629 ==1);
if(nctemp2617)
{
struct tree* nctemp2632= p;
int nctemp2634=CodeFdef(nctemp2632);
}
else{
struct symbol* nctemp2640= tp;
nctempchar1* nctemp2642=SymGetname(nctemp2640);
nctempchar1* nctemp2638= nctemp2642;
struct nctempchar1 *nctemp2645;
static struct nctempchar1 nctemp2646 = {{ 6}, (char*)"#self\0"};
nctemp2645=&nctemp2646;
nctempchar1* nctemp2643= nctemp2645;
int nctemp2647=LibeStrcmp(nctemp2638,nctemp2643);
int nctemp2635 = (nctemp2647 ==0);
if(nctemp2635)
{
struct tree* nctemp2650= p;
struct symbol* nctemp2652= tp;
int nctemp2654=CodeIdeclaration(nctemp2650,nctemp2652);
struct tree* nctemp2656= p;
struct nctempchar1 *nctemp2660;
static struct nctempchar1 nctemp2661 = {{ 4}, (char*)";\n\0"};
nctemp2660=&nctemp2661;
nctempchar1* nctemp2658= nctemp2660;
int nctemp2662=CodeEs(nctemp2656,nctemp2658);
}
}
}
struct symbol* nctemp2664= tp;
int nctemp2666= 0;
int nctemp2668=SymSetemit(nctemp2664,nctemp2666);
}
}
struct symbol* nctemp2673= tp;
struct symbol* nctemp2675=SymMvnext(nctemp2673);
tp =nctemp2675;
}
int nctemp2676 = (tp !=0);
nctemp2575=nctemp2676;}return 1;
}
int CodeDeclarations (struct tree* p,struct symbol* tp)
{
struct tree* np;
int nctemp2681 = (p !=0);
if(nctemp2681)
{
struct tree* nctemp2689= p;
struct tree* nctemp2691=PtreeMvchild(nctemp2689);
np =nctemp2691;
}
else{
np =p;
}
struct tree* nctemp2697= np;
struct symbol* nctemp2699= tp;
int nctemp2701=CodeGdeclarations(nctemp2697,nctemp2699);
return 1;
}
int CodeCode (struct tree* p,struct symbol* tp)
{
struct tree* np;
struct tree* nctemp2707= p;
struct tree* nctemp2709=PtreeMvchild(nctemp2707);
np =nctemp2709;
struct tree* nctemp2713= np;
nctempchar1* nctemp2715=PtreeGetname(nctemp2713);
nctempchar1* nctemp2711= nctemp2715;
struct nctempchar1 *nctemp2718;
static struct nctempchar1 nctemp2719 = {{ 7}, (char*)"import\0"};
nctemp2718=&nctemp2719;
nctempchar1* nctemp2716= nctemp2718;
int nctemp2720=LibeStrcmp(nctemp2711,nctemp2716);
if(nctemp2720)
{
struct tree* nctemp2722= np;
struct symbol* nctemp2724= tp;
int nctemp2726=CodeImport(nctemp2722,nctemp2724);
}
struct tree* nctemp2728= p;
struct symbol* nctemp2730= tp;
int nctemp2732=CodeDeclarations(nctemp2728,nctemp2730);
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
int nctemp2739= 0;
nctempchar1* nctemp2741=CodeItemp(nctemp2739);
return nctemp2741;
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
nctempchar1* nctemp2748=CodeMktemp();
temp=nctemp2748;
nctempchar1* nctemp2753= temp;
struct symbol* nctemp2758=SymGetltp();
struct symbol* nctemp2756= nctemp2758;
struct symbol* nctemp2759=SymMkname(nctemp2753,nctemp2756);
tp =nctemp2759;
struct symbol* nctemp2761= tp;
nctempchar1* nctemp2763= type;
int nctemp2766=SymSetype(nctemp2761,nctemp2763);
struct symbol* nctemp2768= tp;
int nctemp2770= 0;
int nctemp2772=SymSetemit(nctemp2768,nctemp2770);
return temp;
}
struct symbol* CodeNewsymbol (nctempchar1 *type,nctempchar1 *name)
{
struct symbol* tp;
nctempchar1* nctemp2779= name;
struct symbol* nctemp2784=SymGetltp();
struct symbol* nctemp2782= nctemp2784;
struct symbol* nctemp2785=SymMkname(nctemp2779,nctemp2782);
tp =nctemp2785;
struct symbol* nctemp2787= tp;
nctempchar1* nctemp2789= type;
int nctemp2792=SymSetype(nctemp2787,nctemp2789);
struct symbol* nctemp2794= tp;
int nctemp2796= 0;
int nctemp2798=SymSetemit(nctemp2794,nctemp2796);
return tp;
}
nctempchar1 * CodeMkstring (struct tree* p)
{
struct symbol* sp;
nctempchar1 *tmp;
nctempchar1* nctemp2805=CodeMktemp();
tmp=nctemp2805;
nctempchar1* nctemp2810= tmp;
struct symbol* nctemp2815=SymGetltp();
struct symbol* nctemp2813= nctemp2815;
struct symbol* nctemp2816=SymMkname(nctemp2810,nctemp2813);
sp =nctemp2816;
struct symbol* nctemp2818= sp;
int nctemp2820= 1;
int nctemp2822=SymSetrank(nctemp2818,nctemp2820);
struct symbol* nctemp2824= sp;
struct nctempchar1 *nctemp2828;
static struct nctempchar1 nctemp2829 = {{ 5}, (char*)"char\0"};
nctemp2828=&nctemp2829;
nctempchar1* nctemp2826= nctemp2828;
int nctemp2830=SymSetype(nctemp2824,nctemp2826);
struct symbol* nctemp2832= sp;
struct nctempchar1 *nctemp2836;
static struct nctempchar1 nctemp2837 = {{ 6}, (char*)"array\0"};
nctemp2836=&nctemp2837;
nctempchar1* nctemp2834= nctemp2836;
int nctemp2838=SymSetarray(nctemp2832,nctemp2834);
return tmp;
}
nctempchar1 * CodeSconstant (struct tree* p)
{
nctempchar1 *tmp;
nctempchar1 *tmp2;
int l;
nctempchar1* nctemp2846=CodeMktemp();
tmp2=nctemp2846;
struct tree* nctemp2848= p;
struct nctempchar1 *nctemp2852;
static struct nctempchar1 nctemp2853 = {{ 21}, (char*)"struct nctempchar1 *\0"};
nctemp2852=&nctemp2853;
nctempchar1* nctemp2850= nctemp2852;
int nctemp2854=CodeEs(nctemp2848,nctemp2850);
struct tree* nctemp2856= p;
nctempchar1* nctemp2858= tmp2;
int nctemp2861=CodeEs(nctemp2856,nctemp2858);
struct tree* nctemp2863= p;
struct nctempchar1 *nctemp2867;
static struct nctempchar1 nctemp2868 = {{ 4}, (char*)";\n\0"};
nctemp2867=&nctemp2868;
nctempchar1* nctemp2865= nctemp2867;
int nctemp2869=CodeEs(nctemp2863,nctemp2865);
nctempchar1* nctemp2875=CodeMktemp();
tmp=nctemp2875;
struct tree* nctemp2877= p;
struct nctempchar1 *nctemp2881;
static struct nctempchar1 nctemp2882 = {{ 27}, (char*)"static struct nctempchar1 \0"};
nctemp2881=&nctemp2882;
nctempchar1* nctemp2879= nctemp2881;
int nctemp2883=CodeEs(nctemp2877,nctemp2879);
struct tree* nctemp2885= p;
nctempchar1* nctemp2887= tmp;
int nctemp2890=CodeEs(nctemp2885,nctemp2887);
struct tree* nctemp2892= p;
struct nctempchar1 *nctemp2896;
static struct nctempchar1 nctemp2897 = {{ 4}, (char*)" = \0"};
nctemp2896=&nctemp2897;
nctempchar1* nctemp2894= nctemp2896;
int nctemp2898=CodeEs(nctemp2892,nctemp2894);
struct tree* nctemp2900= p;
struct nctempchar1 *nctemp2904;
static struct nctempchar1 nctemp2905 = {{ 4}, (char*)"{{ \0"};
nctemp2904=&nctemp2905;
nctempchar1* nctemp2902= nctemp2904;
int nctemp2906=CodeEs(nctemp2900,nctemp2902);
struct tree* nctemp2916= p;
nctempchar1* nctemp2918=PtreeGetdef(nctemp2916);
nctempchar1* nctemp2914= nctemp2918;
int nctemp2919=LibeStrlen(nctemp2914);
int nctemp2921 = nctemp2919 - 1;
l =nctemp2921;
int nctemp2923= l;
int nctemp2925=CodeEd(nctemp2923);
struct tree* nctemp2927= p;
struct nctempchar1 *nctemp2931;
static struct nctempchar1 nctemp2932 = {{ 11}, (char*)"}, (char*)\0"};
nctemp2931=&nctemp2932;
nctempchar1* nctemp2929= nctemp2931;
int nctemp2933=CodeEs(nctemp2927,nctemp2929);
int nctemp2935= 34;
int nctemp2937=CodeEc(nctemp2935);
struct tree* nctemp2941= p;
nctempchar1* nctemp2943=PtreeGetdef(nctemp2941);
nctempchar1* nctemp2939= nctemp2943;
int nctemp2944=CodeEsr(nctemp2939);
int nctemp2946= 92;
int nctemp2948=CodeEc(nctemp2946);
int nctemp2950= 48;
int nctemp2952=CodeEc(nctemp2950);
int nctemp2954= 34;
int nctemp2956=CodeEc(nctemp2954);
struct tree* nctemp2958= p;
struct nctempchar1 *nctemp2962;
static struct nctempchar1 nctemp2963 = {{ 5}, (char*)"};\n\0"};
nctemp2962=&nctemp2963;
nctempchar1* nctemp2960= nctemp2962;
int nctemp2964=CodeEs(nctemp2958,nctemp2960);
struct tree* nctemp2966= p;
nctempchar1* nctemp2968= tmp2;
int nctemp2971=CodeEs(nctemp2966,nctemp2968);
struct tree* nctemp2973= p;
struct nctempchar1 *nctemp2977;
static struct nctempchar1 nctemp2978 = {{ 3}, (char*)"=&\0"};
nctemp2977=&nctemp2978;
nctempchar1* nctemp2975= nctemp2977;
int nctemp2979=CodeEs(nctemp2973,nctemp2975);
struct tree* nctemp2981= p;
nctempchar1* nctemp2983= tmp;
int nctemp2986=CodeEs(nctemp2981,nctemp2983);
struct tree* nctemp2988= p;
struct nctempchar1 *nctemp2992;
static struct nctempchar1 nctemp2993 = {{ 4}, (char*)";\n\0"};
nctemp2992=&nctemp2993;
nctempchar1* nctemp2990= nctemp2992;
int nctemp2994=CodeEs(nctemp2988,nctemp2990);
return tmp2;
}
int CodeStructdef (struct tree* p,struct symbol* tp)
{
struct symbol* up;
struct tree* nctemp2998= p;
struct nctempchar1 *nctemp3002;
static struct nctempchar1 nctemp3003 = {{ 8}, (char*)"struct \0"};
nctemp3002=&nctemp3003;
nctempchar1* nctemp3000= nctemp3002;
int nctemp3004=CodeEs(nctemp2998,nctemp3000);
struct tree* nctemp3006= p;
struct symbol* nctemp3010= tp;
nctempchar1* nctemp3012=SymGetype(nctemp3010);
nctempchar1* nctemp3008= nctemp3012;
int nctemp3013=CodeEs(nctemp3006,nctemp3008);
struct tree* nctemp3015= p;
struct nctempchar1 *nctemp3019;
static struct nctempchar1 nctemp3020 = {{ 3}, (char*)" {\0"};
nctemp3019=&nctemp3020;
nctempchar1* nctemp3017= nctemp3019;
int nctemp3021=CodeEs(nctemp3015,nctemp3017);
struct symbol* nctemp3026= tp;
struct symbol* nctemp3028=SymGetable(nctemp3026);
up =nctemp3028;
struct symbol* nctemp3033= up;
struct symbol* nctemp3035=SymMvnext(nctemp3033);
up =nctemp3035;
struct tree* nctemp3037= p;
struct symbol* nctemp3039= up;
int nctemp3041=CodeIdeclarations(nctemp3037,nctemp3039);
struct tree* nctemp3043= p;
struct nctempchar1 *nctemp3047;
static struct nctempchar1 nctemp3048 = {{ 5}, (char*)"};\n\0"};
nctemp3047=&nctemp3048;
nctempchar1* nctemp3045= nctemp3047;
int nctemp3049=CodeEs(nctemp3043,nctemp3045);
struct tree* nctemp3051= p;
struct nctempchar1 *nctemp3055;
static struct nctempchar1 nctemp3056 = {{ 16}, (char*)"typedef struct \0"};
nctemp3055=&nctemp3056;
nctempchar1* nctemp3053= nctemp3055;
int nctemp3057=CodeEs(nctemp3051,nctemp3053);
struct tree* nctemp3059= p;
struct nctempchar1 *nctemp3063;
static struct nctempchar1 nctemp3064 = {{ 7}, (char*)"nctemp\0"};
nctemp3063=&nctemp3064;
nctempchar1* nctemp3061= nctemp3063;
int nctemp3065=CodeEs(nctemp3059,nctemp3061);
struct tree* nctemp3067= p;
struct symbol* nctemp3071= tp;
nctempchar1* nctemp3073=SymGetype(nctemp3071);
nctempchar1* nctemp3069= nctemp3073;
int nctemp3074=CodeEs(nctemp3067,nctemp3069);
struct tree* nctemp3076= p;
struct nctempchar1 *nctemp3080;
static struct nctempchar1 nctemp3081 = {{ 2}, (char*)"1\0"};
nctemp3080=&nctemp3081;
nctempchar1* nctemp3078= nctemp3080;
int nctemp3082=CodeEs(nctemp3076,nctemp3078);
struct tree* nctemp3084= p;
struct nctempchar1 *nctemp3088;
static struct nctempchar1 nctemp3089 = {{ 20}, (char*)" {int d[1]; struct \0"};
nctemp3088=&nctemp3089;
nctempchar1* nctemp3086= nctemp3088;
int nctemp3090=CodeEs(nctemp3084,nctemp3086);
struct tree* nctemp3092= p;
struct symbol* nctemp3096= tp;
nctempchar1* nctemp3098=SymGetype(nctemp3096);
nctempchar1* nctemp3094= nctemp3098;
int nctemp3099=CodeEs(nctemp3092,nctemp3094);
struct tree* nctemp3101= p;
struct nctempchar1 *nctemp3105;
static struct nctempchar1 nctemp3106 = {{ 6}, (char*)" *a; \0"};
nctemp3105=&nctemp3106;
nctempchar1* nctemp3103= nctemp3105;
int nctemp3107=CodeEs(nctemp3101,nctemp3103);
struct tree* nctemp3109= p;
struct nctempchar1 *nctemp3113;
static struct nctempchar1 nctemp3114 = {{ 3}, (char*)"} \0"};
nctemp3113=&nctemp3114;
nctempchar1* nctemp3111= nctemp3113;
int nctemp3115=CodeEs(nctemp3109,nctemp3111);
struct tree* nctemp3117= p;
struct nctempchar1 *nctemp3121;
static struct nctempchar1 nctemp3122 = {{ 7}, (char*)"nctemp\0"};
nctemp3121=&nctemp3122;
nctempchar1* nctemp3119= nctemp3121;
int nctemp3123=CodeEs(nctemp3117,nctemp3119);
struct tree* nctemp3125= p;
struct symbol* nctemp3129= tp;
nctempchar1* nctemp3131=SymGetype(nctemp3129);
nctempchar1* nctemp3127= nctemp3131;
int nctemp3132=CodeEs(nctemp3125,nctemp3127);
struct tree* nctemp3134= p;
struct nctempchar1 *nctemp3138;
static struct nctempchar1 nctemp3139 = {{ 2}, (char*)"1\0"};
nctemp3138=&nctemp3139;
nctempchar1* nctemp3136= nctemp3138;
int nctemp3140=CodeEs(nctemp3134,nctemp3136);
struct tree* nctemp3142= p;
struct nctempchar1 *nctemp3146;
static struct nctempchar1 nctemp3147 = {{ 4}, (char*)";\n\0"};
nctemp3146=&nctemp3147;
nctempchar1* nctemp3144= nctemp3146;
int nctemp3148=CodeEs(nctemp3142,nctemp3144);
struct tree* nctemp3150= p;
struct nctempchar1 *nctemp3154;
static struct nctempchar1 nctemp3155 = {{ 8}, (char*)"struct \0"};
nctemp3154=&nctemp3155;
nctempchar1* nctemp3152= nctemp3154;
int nctemp3156=CodeEs(nctemp3150,nctemp3152);
struct tree* nctemp3158= p;
struct nctempchar1 *nctemp3162;
static struct nctempchar1 nctemp3163 = {{ 7}, (char*)"nctemp\0"};
nctemp3162=&nctemp3163;
nctempchar1* nctemp3160= nctemp3162;
int nctemp3164=CodeEs(nctemp3158,nctemp3160);
struct tree* nctemp3166= p;
struct symbol* nctemp3170= tp;
nctempchar1* nctemp3172=SymGetype(nctemp3170);
nctempchar1* nctemp3168= nctemp3172;
int nctemp3173=CodeEs(nctemp3166,nctemp3168);
struct tree* nctemp3175= p;
struct nctempchar1 *nctemp3179;
static struct nctempchar1 nctemp3180 = {{ 2}, (char*)"2\0"};
nctemp3179=&nctemp3180;
nctempchar1* nctemp3177= nctemp3179;
int nctemp3181=CodeEs(nctemp3175,nctemp3177);
struct tree* nctemp3183= p;
struct nctempchar1 *nctemp3187;
static struct nctempchar1 nctemp3188 = {{ 20}, (char*)" {int d[2]; struct \0"};
nctemp3187=&nctemp3188;
nctempchar1* nctemp3185= nctemp3187;
int nctemp3189=CodeEs(nctemp3183,nctemp3185);
struct tree* nctemp3191= p;
struct symbol* nctemp3195= tp;
nctempchar1* nctemp3197=SymGetype(nctemp3195);
nctempchar1* nctemp3193= nctemp3197;
int nctemp3198=CodeEs(nctemp3191,nctemp3193);
struct tree* nctemp3200= p;
struct nctempchar1 *nctemp3204;
static struct nctempchar1 nctemp3205 = {{ 6}, (char*)" *a; \0"};
nctemp3204=&nctemp3205;
nctempchar1* nctemp3202= nctemp3204;
int nctemp3206=CodeEs(nctemp3200,nctemp3202);
struct tree* nctemp3208= p;
struct nctempchar1 *nctemp3212;
static struct nctempchar1 nctemp3213 = {{ 3}, (char*)"} \0"};
nctemp3212=&nctemp3213;
nctempchar1* nctemp3210= nctemp3212;
int nctemp3214=CodeEs(nctemp3208,nctemp3210);
struct tree* nctemp3216= p;
struct nctempchar1 *nctemp3220;
static struct nctempchar1 nctemp3221 = {{ 4}, (char*)";\n\0"};
nctemp3220=&nctemp3221;
nctempchar1* nctemp3218= nctemp3220;
int nctemp3222=CodeEs(nctemp3216,nctemp3218);
struct tree* nctemp3224= p;
struct nctempchar1 *nctemp3228;
static struct nctempchar1 nctemp3229 = {{ 8}, (char*)"struct \0"};
nctemp3228=&nctemp3229;
nctempchar1* nctemp3226= nctemp3228;
int nctemp3230=CodeEs(nctemp3224,nctemp3226);
struct tree* nctemp3232= p;
struct nctempchar1 *nctemp3236;
static struct nctempchar1 nctemp3237 = {{ 7}, (char*)"nctemp\0"};
nctemp3236=&nctemp3237;
nctempchar1* nctemp3234= nctemp3236;
int nctemp3238=CodeEs(nctemp3232,nctemp3234);
struct tree* nctemp3240= p;
struct symbol* nctemp3244= tp;
nctempchar1* nctemp3246=SymGetype(nctemp3244);
nctempchar1* nctemp3242= nctemp3246;
int nctemp3247=CodeEs(nctemp3240,nctemp3242);
struct tree* nctemp3249= p;
struct nctempchar1 *nctemp3253;
static struct nctempchar1 nctemp3254 = {{ 2}, (char*)"3\0"};
nctemp3253=&nctemp3254;
nctempchar1* nctemp3251= nctemp3253;
int nctemp3255=CodeEs(nctemp3249,nctemp3251);
struct tree* nctemp3257= p;
struct nctempchar1 *nctemp3261;
static struct nctempchar1 nctemp3262 = {{ 20}, (char*)" {int d[3]; struct \0"};
nctemp3261=&nctemp3262;
nctempchar1* nctemp3259= nctemp3261;
int nctemp3263=CodeEs(nctemp3257,nctemp3259);
struct tree* nctemp3265= p;
struct symbol* nctemp3269= tp;
nctempchar1* nctemp3271=SymGetype(nctemp3269);
nctempchar1* nctemp3267= nctemp3271;
int nctemp3272=CodeEs(nctemp3265,nctemp3267);
struct tree* nctemp3274= p;
struct nctempchar1 *nctemp3278;
static struct nctempchar1 nctemp3279 = {{ 6}, (char*)" *a; \0"};
nctemp3278=&nctemp3279;
nctempchar1* nctemp3276= nctemp3278;
int nctemp3280=CodeEs(nctemp3274,nctemp3276);
struct tree* nctemp3282= p;
struct nctempchar1 *nctemp3286;
static struct nctempchar1 nctemp3287 = {{ 3}, (char*)"} \0"};
nctemp3286=&nctemp3287;
nctempchar1* nctemp3284= nctemp3286;
int nctemp3288=CodeEs(nctemp3282,nctemp3284);
struct tree* nctemp3290= p;
struct nctempchar1 *nctemp3294;
static struct nctempchar1 nctemp3295 = {{ 4}, (char*)";\n\0"};
nctemp3294=&nctemp3295;
nctempchar1* nctemp3292= nctemp3294;
int nctemp3296=CodeEs(nctemp3290,nctemp3292);
struct tree* nctemp3298= p;
struct nctempchar1 *nctemp3302;
static struct nctempchar1 nctemp3303 = {{ 8}, (char*)"struct \0"};
nctemp3302=&nctemp3303;
nctempchar1* nctemp3300= nctemp3302;
int nctemp3304=CodeEs(nctemp3298,nctemp3300);
struct tree* nctemp3306= p;
struct nctempchar1 *nctemp3310;
static struct nctempchar1 nctemp3311 = {{ 7}, (char*)"nctemp\0"};
nctemp3310=&nctemp3311;
nctempchar1* nctemp3308= nctemp3310;
int nctemp3312=CodeEs(nctemp3306,nctemp3308);
struct tree* nctemp3314= p;
struct symbol* nctemp3318= tp;
nctempchar1* nctemp3320=SymGetype(nctemp3318);
nctempchar1* nctemp3316= nctemp3320;
int nctemp3321=CodeEs(nctemp3314,nctemp3316);
struct tree* nctemp3323= p;
struct nctempchar1 *nctemp3327;
static struct nctempchar1 nctemp3328 = {{ 2}, (char*)"4\0"};
nctemp3327=&nctemp3328;
nctempchar1* nctemp3325= nctemp3327;
int nctemp3329=CodeEs(nctemp3323,nctemp3325);
struct tree* nctemp3331= p;
struct nctempchar1 *nctemp3335;
static struct nctempchar1 nctemp3336 = {{ 20}, (char*)" {int d[4]; struct \0"};
nctemp3335=&nctemp3336;
nctempchar1* nctemp3333= nctemp3335;
int nctemp3337=CodeEs(nctemp3331,nctemp3333);
struct tree* nctemp3339= p;
struct symbol* nctemp3343= tp;
nctempchar1* nctemp3345=SymGetype(nctemp3343);
nctempchar1* nctemp3341= nctemp3345;
int nctemp3346=CodeEs(nctemp3339,nctemp3341);
struct tree* nctemp3348= p;
struct nctempchar1 *nctemp3352;
static struct nctempchar1 nctemp3353 = {{ 6}, (char*)" *a; \0"};
nctemp3352=&nctemp3353;
nctempchar1* nctemp3350= nctemp3352;
int nctemp3354=CodeEs(nctemp3348,nctemp3350);
struct tree* nctemp3356= p;
struct nctempchar1 *nctemp3360;
static struct nctempchar1 nctemp3361 = {{ 3}, (char*)"} \0"};
nctemp3360=&nctemp3361;
nctempchar1* nctemp3358= nctemp3360;
int nctemp3362=CodeEs(nctemp3356,nctemp3358);
struct tree* nctemp3364= p;
struct nctempchar1 *nctemp3368;
static struct nctempchar1 nctemp3369 = {{ 4}, (char*)";\n\0"};
nctemp3368=&nctemp3369;
nctempchar1* nctemp3366= nctemp3368;
int nctemp3370=CodeEs(nctemp3364,nctemp3366);
return 1;
}
int CodeFdeclaration (struct tree* p,struct symbol* tp)
{
int noargs;
struct symbol* nctemp3377= tp;
nctempchar1* nctemp3379=SymGetstruct(nctemp3377);
nctempchar1* nctemp3375= nctemp3379;
struct nctempchar1 *nctemp3382;
static struct nctempchar1 nctemp3383 = {{ 7}, (char*)"struct\0"};
nctemp3382=&nctemp3383;
nctempchar1* nctemp3380= nctemp3382;
int nctemp3384=LibeStrcmp(nctemp3375,nctemp3380);
int nctemp3372 = (nctemp3384 ==1);
if(nctemp3372)
{
struct tree* nctemp3387= p;
struct nctempchar1 *nctemp3391;
static struct nctempchar1 nctemp3392 = {{ 8}, (char*)"struct \0"};
nctemp3391=&nctemp3392;
nctempchar1* nctemp3389= nctemp3391;
int nctemp3393=CodeEs(nctemp3387,nctemp3389);
}
struct symbol* nctemp3399= tp;
nctempchar1* nctemp3401=SymGetarray(nctemp3399);
nctempchar1* nctemp3397= nctemp3401;
struct nctempchar1 *nctemp3404;
static struct nctempchar1 nctemp3405 = {{ 6}, (char*)"array\0"};
nctemp3404=&nctemp3405;
nctempchar1* nctemp3402= nctemp3404;
int nctemp3406=LibeStrcmp(nctemp3397,nctemp3402);
int nctemp3394 = (nctemp3406 ==1);
if(nctemp3394)
{
struct tree* nctemp3409= p;
struct nctempchar1 *nctemp3413;
static struct nctempchar1 nctemp3414 = {{ 7}, (char*)"nctemp\0"};
nctemp3413=&nctemp3414;
nctempchar1* nctemp3411= nctemp3413;
int nctemp3415=CodeEs(nctemp3409,nctemp3411);
}
struct tree* nctemp3417= p;
struct symbol* nctemp3421= tp;
nctempchar1* nctemp3423=SymGetype(nctemp3421);
nctempchar1* nctemp3419= nctemp3423;
int nctemp3424=CodeEs(nctemp3417,nctemp3419);
struct symbol* nctemp3430= tp;
nctempchar1* nctemp3432=SymGetarray(nctemp3430);
nctempchar1* nctemp3428= nctemp3432;
struct nctempchar1 *nctemp3435;
static struct nctempchar1 nctemp3436 = {{ 6}, (char*)"array\0"};
nctemp3435=&nctemp3436;
nctempchar1* nctemp3433= nctemp3435;
int nctemp3437=LibeStrcmp(nctemp3428,nctemp3433);
int nctemp3425 = (nctemp3437 ==1);
if(nctemp3425)
{
struct symbol* nctemp3442= tp;
int nctemp3444=SymGetrank(nctemp3442);
int nctemp3440= nctemp3444;
int nctemp3445=CodeEd(nctemp3440);
struct tree* nctemp3447= p;
struct nctempchar1 *nctemp3451;
static struct nctempchar1 nctemp3452 = {{ 2}, (char*)"*\0"};
nctemp3451=&nctemp3452;
nctempchar1* nctemp3449= nctemp3451;
int nctemp3453=CodeEs(nctemp3447,nctemp3449);
}
struct symbol* nctemp3459= tp;
nctempchar1* nctemp3461=SymGetstruct(nctemp3459);
nctempchar1* nctemp3457= nctemp3461;
struct nctempchar1 *nctemp3464;
static struct nctempchar1 nctemp3465 = {{ 7}, (char*)"struct\0"};
nctemp3464=&nctemp3465;
nctempchar1* nctemp3462= nctemp3464;
int nctemp3466=LibeStrcmp(nctemp3457,nctemp3462);
int nctemp3454 = (nctemp3466 ==1);
if(nctemp3454)
{
struct tree* nctemp3469= p;
struct nctempchar1 *nctemp3473;
static struct nctempchar1 nctemp3474 = {{ 2}, (char*)"*\0"};
nctemp3473=&nctemp3474;
nctempchar1* nctemp3471= nctemp3473;
int nctemp3475=CodeEs(nctemp3469,nctemp3471);
}
struct tree* nctemp3477= p;
struct nctempchar1 *nctemp3481;
static struct nctempchar1 nctemp3482 = {{ 2}, (char*)" \0"};
nctemp3481=&nctemp3482;
nctempchar1* nctemp3479= nctemp3481;
int nctemp3483=CodeEs(nctemp3477,nctemp3479);
struct tree* nctemp3485= p;
struct symbol* nctemp3489= tp;
nctempchar1* nctemp3491=SymGetname(nctemp3489);
nctempchar1* nctemp3487= nctemp3491;
int nctemp3492=CodeEs(nctemp3485,nctemp3487);
struct tree* nctemp3494= p;
struct nctempchar1 *nctemp3498;
static struct nctempchar1 nctemp3499 = {{ 3}, (char*)" (\0"};
nctemp3498=&nctemp3499;
nctempchar1* nctemp3496= nctemp3498;
int nctemp3500=CodeEs(nctemp3494,nctemp3496);
struct symbol* nctemp3505= tp;
struct symbol* nctemp3507=SymGetable(nctemp3505);
tp =nctemp3507;
struct nctempchar1 *nctemp3514;
static struct nctempchar1 nctemp3515 = {{ 9}, (char*)"#arglist\0"};
nctemp3514=&nctemp3515;
nctempchar1* nctemp3512= nctemp3514;
struct symbol* nctemp3516= tp;
struct symbol* nctemp3518=SymLookup(nctemp3512,nctemp3516);
tp =nctemp3518;
struct symbol* nctemp3523= tp;
struct symbol* nctemp3525=SymGetable(nctemp3523);
tp =nctemp3525;
noargs = 0;
struct symbol* nctemp3533= tp;
struct symbol* nctemp3535=SymMvnext(nctemp3533);
tp =nctemp3535;
int nctemp3526 = (tp !=0);
int nctemp3537=nctemp3526;
while(nctemp3537)
{{
struct tree* nctemp3539= p;
struct symbol* nctemp3541= tp;
int nctemp3543=CodeIdeclaration(nctemp3539,nctemp3541);
struct symbol* nctemp3547= tp;
struct symbol* nctemp3549=SymMvnext(nctemp3547);
int nctemp3544 = (nctemp3549 !=0);
if(nctemp3544)
{
struct tree* nctemp3552= p;
struct nctempchar1 *nctemp3556;
static struct nctempchar1 nctemp3557 = {{ 2}, (char*)",\0"};
nctemp3556=&nctemp3557;
nctempchar1* nctemp3554= nctemp3556;
int nctemp3558=CodeEs(nctemp3552,nctemp3554);
}
int nctemp3567 = noargs + 1;
noargs =nctemp3567;
}
struct symbol* nctemp3575= tp;
struct symbol* nctemp3577=SymMvnext(nctemp3575);
tp =nctemp3577;
int nctemp3568 = (tp !=0);
nctemp3537=nctemp3568;}struct tree* nctemp3580= p;
struct nctempchar1 *nctemp3584;
static struct nctempchar1 nctemp3585 = {{ 5}, (char*)");\n\0"};
nctemp3584=&nctemp3585;
nctempchar1* nctemp3582= nctemp3584;
int nctemp3586=CodeEs(nctemp3580,nctemp3582);
return 1;
}
int CodeWdeclaration (struct tree* p)
{
struct tree* np;
struct tree* nctemp3592= p;
struct tree* nctemp3594=PtreeMvchild(nctemp3592);
np =nctemp3594;
int nctemp3595 = (np !=0);
int nctemp3599=nctemp3595;
while(nctemp3599)
{{
struct tree* nctemp3605= np;
nctempchar1* nctemp3607=PtreeGetname(nctemp3605);
nctempchar1* nctemp3603= nctemp3607;
struct nctempchar1 *nctemp3610;
static struct nctempchar1 nctemp3611 = {{ 5}, (char*)"fdef\0"};
nctemp3610=&nctemp3611;
nctempchar1* nctemp3608= nctemp3610;
int nctemp3612=LibeStrcmp(nctemp3603,nctemp3608);
int nctemp3600 = (nctemp3612 ==1);
if(nctemp3600)
{
struct tree* nctemp3615= np;
int nctemp3617=CodeFdef(nctemp3615);
}
struct tree* nctemp3622= np;
struct tree* nctemp3624=PtreeMvsister(nctemp3622);
np =nctemp3624;
}
int nctemp3625 = (np !=0);
nctemp3599=nctemp3625;}return 1;
}
int CodeWdeclarations (struct tree* p)
{
int nctemp3630 = (p !=0);
int nctemp3634=nctemp3630;
while(nctemp3634)
{{
struct tree* nctemp3643= p;
nctempchar1* nctemp3645=PtreeGetname(nctemp3643);
nctempchar1* nctemp3641= nctemp3645;
struct nctempchar1 *nctemp3648;
static struct nctempchar1 nctemp3649 = {{ 5}, (char*)"type\0"};
nctemp3648=&nctemp3649;
nctempchar1* nctemp3646= nctemp3648;
int nctemp3650=LibeStrcmp(nctemp3641,nctemp3646);
int nctemp3638 = (nctemp3650 ==1);
struct tree* nctemp3658= p;
nctempchar1* nctemp3660=PtreeGetname(nctemp3658);
nctempchar1* nctemp3656= nctemp3660;
struct nctempchar1 *nctemp3663;
static struct nctempchar1 nctemp3664 = {{ 7}, (char*)"struct\0"};
nctemp3663=&nctemp3664;
nctempchar1* nctemp3661= nctemp3663;
int nctemp3665=LibeStrcmp(nctemp3656,nctemp3661);
int nctemp3653 = (nctemp3665 ==1);
int nctemp3635 = (nctemp3638 || nctemp3653);
if(nctemp3635)
{
struct tree* nctemp3668= p;
int nctemp3670=CodeWdeclaration(nctemp3668);
}
struct tree* nctemp3675= p;
struct tree* nctemp3677=PtreeMvsister(nctemp3675);
p =nctemp3677;
}
int nctemp3678 = (p !=0);
nctemp3634=nctemp3678;}return 1;
}
int CodeArrayex (int line,nctempchar1 *qual,nctempchar1 *sel,nctempchar1 *name,nctempchar1 *ival,int index)
{
struct tree* p;
nctempchar1 *tmp;
nctempchar1 *qname;
struct nctempchar1 *nctemp3689;
static struct nctempchar1 nctemp3690 = {{ 6}, (char*)"dummy\0"};
nctemp3689=&nctemp3690;
nctempchar1* nctemp3687= nctemp3689;
struct nctempchar1 *nctemp3693;
static struct nctempchar1 nctemp3694 = {{ 6}, (char*)"dummy\0"};
nctemp3693=&nctemp3694;
nctempchar1* nctemp3691= nctemp3693;
struct tree* nctemp3695=PtreeMknode(nctemp3687,nctemp3691);
p =nctemp3695;
struct tree* nctemp3697= p;
int nctemp3699= line;
int nctemp3701=PtreeSetline(nctemp3697,nctemp3699);
qname = name;
nctempchar1 *nctemp3703 =qual;
int nctemp3702 =(nctemp3703!=0);
if(nctemp3702)
{
nctempchar1* nctemp3712= qual;
struct nctempchar1 *nctemp3717;
static struct nctempchar1 nctemp3718 = {{ 3}, (char*)"->\0"};
nctemp3717=&nctemp3718;
nctempchar1* nctemp3715= nctemp3717;
nctempchar1* nctemp3719=LibeStradd(nctemp3712,nctemp3715);
tmp=nctemp3719;
nctempchar1* nctemp3725= tmp;
nctempchar1* nctemp3728= name;
nctempchar1* nctemp3731=LibeStradd(nctemp3725,nctemp3728);
qname=nctemp3731;
RunFree(tmp->a);
RunFree(tmp);
}
struct tree* nctemp3736= p;
struct nctempchar1 *nctemp3740;
static struct nctempchar1 nctemp3741 = {{ 7}, (char*)"if((0>\0"};
nctemp3740=&nctemp3741;
nctempchar1* nctemp3738= nctemp3740;
int nctemp3742=CodeEs(nctemp3736,nctemp3738);
struct tree* nctemp3744= p;
nctempchar1* nctemp3746= ival;
int nctemp3749=CodeEs(nctemp3744,nctemp3746);
struct tree* nctemp3751= p;
struct nctempchar1 *nctemp3755;
static struct nctempchar1 nctemp3756 = {{ 5}, (char*)")||(\0"};
nctemp3755=&nctemp3756;
nctempchar1* nctemp3753= nctemp3755;
int nctemp3757=CodeEs(nctemp3751,nctemp3753);
struct tree* nctemp3759= p;
nctempchar1* nctemp3761= ival;
int nctemp3764=CodeEs(nctemp3759,nctemp3761);
struct tree* nctemp3766= p;
struct nctempchar1 *nctemp3770;
static struct nctempchar1 nctemp3771 = {{ 3}, (char*)">=\0"};
nctemp3770=&nctemp3771;
nctempchar1* nctemp3768= nctemp3770;
int nctemp3772=CodeEs(nctemp3766,nctemp3768);
nctempchar1 *nctemp3774 =qual;
int nctemp3773 =(nctemp3774!=0);
if(nctemp3773)
{
struct tree* nctemp3779= p;
nctempchar1* nctemp3781= qual;
int nctemp3784=CodeEs(nctemp3779,nctemp3781);
struct tree* nctemp3786= p;
nctempchar1* nctemp3788= sel;
int nctemp3791=CodeEs(nctemp3786,nctemp3788);
}
struct tree* nctemp3793= p;
nctempchar1* nctemp3795= name;
int nctemp3798=CodeEs(nctemp3793,nctemp3795);
struct tree* nctemp3800= p;
struct nctempchar1 *nctemp3804;
static struct nctempchar1 nctemp3805 = {{ 5}, (char*)"->d[\0"};
nctemp3804=&nctemp3805;
nctempchar1* nctemp3802= nctemp3804;
int nctemp3806=CodeEs(nctemp3800,nctemp3802);
int nctemp3808= index;
int nctemp3810=CodeEd(nctemp3808);
struct tree* nctemp3812= p;
struct nctempchar1 *nctemp3816;
static struct nctempchar1 nctemp3817 = {{ 7}, (char*)"])){\n\0"};
nctemp3816=&nctemp3817;
nctempchar1* nctemp3814= nctemp3816;
int nctemp3818=CodeEs(nctemp3812,nctemp3814);
struct tree* nctemp3820= p;
struct nctempchar1 *nctemp3824;
static struct nctempchar1 nctemp3825 = {{ 67}, (char*)"printf(\"***Out of bounds error (file,array,line,index,rank,bound:\0"};
nctemp3824=&nctemp3825;
nctempchar1* nctemp3822= nctemp3824;
int nctemp3826=CodeEs(nctemp3820,nctemp3822);
struct tree* nctemp3828= p;
nctempchar1* nctemp3832=ScanGetfile();
nctempchar1* nctemp3830= nctemp3832;
int nctemp3833=CodeEs(nctemp3828,nctemp3830);
struct tree* nctemp3835= p;
struct nctempchar1 *nctemp3839;
static struct nctempchar1 nctemp3840 = {{ 2}, (char*)" \0"};
nctemp3839=&nctemp3840;
nctempchar1* nctemp3837= nctemp3839;
int nctemp3841=CodeEs(nctemp3835,nctemp3837);
struct tree* nctemp3843= p;
nctempchar1* nctemp3845= qname;
int nctemp3848=CodeEs(nctemp3843,nctemp3845);
struct tree* nctemp3850= p;
struct nctempchar1 *nctemp3854;
static struct nctempchar1 nctemp3855 = {{ 17}, (char*)" %d %d %d %d \\n\0"};
nctemp3854=&nctemp3855;
nctempchar1* nctemp3852= nctemp3854;
int nctemp3856=CodeEs(nctemp3850,nctemp3852);
struct tree* nctemp3858= p;
struct nctempchar1 *nctemp3862;
static struct nctempchar1 nctemp3863 = {{ 6}, (char*)" \" ,\0"};
nctemp3862=&nctemp3863;
nctempchar1* nctemp3860= nctemp3862;
int nctemp3864=CodeEs(nctemp3858,nctemp3860);
int nctemp3866= line;
int nctemp3868=CodeEd(nctemp3866);
struct tree* nctemp3870= p;
struct nctempchar1 *nctemp3874;
static struct nctempchar1 nctemp3875 = {{ 2}, (char*)",\0"};
nctemp3874=&nctemp3875;
nctempchar1* nctemp3872= nctemp3874;
int nctemp3876=CodeEs(nctemp3870,nctemp3872);
struct tree* nctemp3878= p;
nctempchar1* nctemp3880= ival;
int nctemp3883=CodeEs(nctemp3878,nctemp3880);
struct tree* nctemp3885= p;
struct nctempchar1 *nctemp3889;
static struct nctempchar1 nctemp3890 = {{ 2}, (char*)",\0"};
nctemp3889=&nctemp3890;
nctempchar1* nctemp3887= nctemp3889;
int nctemp3891=CodeEs(nctemp3885,nctemp3887);
int nctemp3893= index;
int nctemp3895=CodeEd(nctemp3893);
struct tree* nctemp3897= p;
struct nctempchar1 *nctemp3901;
static struct nctempchar1 nctemp3902 = {{ 2}, (char*)",\0"};
nctemp3901=&nctemp3902;
nctempchar1* nctemp3899= nctemp3901;
int nctemp3903=CodeEs(nctemp3897,nctemp3899);
struct tree* nctemp3905= p;
nctempchar1* nctemp3907= qname;
int nctemp3910=CodeEs(nctemp3905,nctemp3907);
struct tree* nctemp3912= p;
struct nctempchar1 *nctemp3916;
static struct nctempchar1 nctemp3917 = {{ 5}, (char*)"->d[\0"};
nctemp3916=&nctemp3917;
nctempchar1* nctemp3914= nctemp3916;
int nctemp3918=CodeEs(nctemp3912,nctemp3914);
int nctemp3920= index;
int nctemp3922=CodeEd(nctemp3920);
struct tree* nctemp3924= p;
struct nctempchar1 *nctemp3928;
static struct nctempchar1 nctemp3929 = {{ 4}, (char*)"]-1\0"};
nctemp3928=&nctemp3929;
nctempchar1* nctemp3926= nctemp3928;
int nctemp3930=CodeEs(nctemp3924,nctemp3926);
struct tree* nctemp3932= p;
struct nctempchar1 *nctemp3936;
static struct nctempchar1 nctemp3937 = {{ 3}, (char*)");\0"};
nctemp3936=&nctemp3937;
nctempchar1* nctemp3934= nctemp3936;
int nctemp3938=CodeEs(nctemp3932,nctemp3934);
struct tree* nctemp3940= p;
struct nctempchar1 *nctemp3944;
static struct nctempchar1 nctemp3945 = {{ 6}, (char*)"\n}\n\0"};
nctemp3944=&nctemp3945;
nctempchar1* nctemp3942= nctemp3944;
int nctemp3946=CodeEs(nctemp3940,nctemp3942);
nctempchar1 *nctemp3948 =qual;
int nctemp3947 =(nctemp3948!=0);
if(nctemp3947)
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
struct tree* nctemp3961= p;
nctempchar1* nctemp3963=PtreeGetdef(nctemp3961);
name=nctemp3963;
nctempchar1* nctemp3969=CodeMktemp();
temp=nctemp3969;
nctempchar1* nctemp3974= name;
struct symbol* nctemp3977=SymLook(nctemp3974);
tp =nctemp3977;
int nctemp3978 = (tp ==0);
if(nctemp3978)
{
nctempchar1* nctemp3983= name;
int nctemp3986=CodeError(nctemp3983);
}
struct tree* nctemp3991= p;
struct tree* nctemp3993=PtreeMvchild(nctemp3991);
sp =nctemp3993;
int nctemp3994 = (sp ==0);
if(nctemp3994)
{
struct tree* nctemp3999= p;
nctempchar1* nctemp4001=PtreeGetdef(nctemp3999);
return nctemp4001;
}
else{
struct tree* nctemp4007= sp;
nctempchar1* nctemp4009=PtreeGetname(nctemp4007);
nctempchar1* nctemp4005= nctemp4009;
struct nctempchar1 *nctemp4012;
static struct nctempchar1 nctemp4013 = {{ 9}, (char*)"exprlist\0"};
nctemp4012=&nctemp4013;
nctempchar1* nctemp4010= nctemp4012;
int nctemp4014=LibeStrcmp(nctemp4005,nctemp4010);
int nctemp4002 = (nctemp4014 ==0);
if(nctemp4002)
{
struct tree* nctemp4017= p;
nctempchar1* nctemp4019=PtreeGetdef(nctemp4017);
return nctemp4019;
}
}
struct symbol* nctemp4024= tp;
int nctemp4026=SymGetrank(nctemp4024);
rank =nctemp4026;
struct tree* nctemp4031= p;
struct tree* nctemp4033=PtreeMvchild(nctemp4031);
p =nctemp4033;
struct tree* nctemp4038= p;
struct tree* nctemp4040=PtreeMvchild(nctemp4038);
p =nctemp4040;
sp = p;
i =0;
int nctemp4045 = (i < rank);
while(nctemp4045){
{
int nctemp4049 = (i ==0);
if(nctemp4049)
{
struct tree* nctemp4058= p;
nctempchar1* nctemp4060=CodeExpr(nctemp4058);
temp2=nctemp4060;
struct tree* nctemp4062= p;
struct tree* nctemp4066= p;
nctempchar1* nctemp4068=PtreeGetype(nctemp4066);
nctempchar1* nctemp4064= nctemp4068;
int nctemp4069=CodeEs(nctemp4062,nctemp4064);
struct tree* nctemp4071= p;
struct nctempchar1 *nctemp4075;
static struct nctempchar1 nctemp4076 = {{ 2}, (char*)" \0"};
nctemp4075=&nctemp4076;
nctempchar1* nctemp4073= nctemp4075;
int nctemp4077=CodeEs(nctemp4071,nctemp4073);
struct tree* nctemp4079= p;
nctempchar1* nctemp4081= temp;
int nctemp4084=CodeEs(nctemp4079,nctemp4081);
struct tree* nctemp4086= p;
struct nctempchar1 *nctemp4090;
static struct nctempchar1 nctemp4091 = {{ 2}, (char*)"=\0"};
nctemp4090=&nctemp4091;
nctempchar1* nctemp4088= nctemp4090;
int nctemp4092=CodeEs(nctemp4086,nctemp4088);
struct tree* nctemp4094= p;
nctempchar1* nctemp4096= temp2;
int nctemp4099=CodeEs(nctemp4094,nctemp4096);
struct tree* nctemp4101= p;
struct nctempchar1 *nctemp4105;
static struct nctempchar1 nctemp4106 = {{ 4}, (char*)";\n\0"};
nctemp4105=&nctemp4106;
nctempchar1* nctemp4103= nctemp4105;
int nctemp4107=CodeEs(nctemp4101,nctemp4103);
int nctemp4109=CodeArraycheck();
if(nctemp4109)
{
struct tree* nctemp4113= p;
int nctemp4115=PtreeGetline(nctemp4113);
int nctemp4111= nctemp4115;
nctempchar1* nctemp4116= qual;
nctempchar1* nctemp4119= sel;
nctempchar1* nctemp4122= name;
nctempchar1* nctemp4125= temp2;
int nctemp4128= i;
int nctemp4130=CodeArrayex(nctemp4111,nctemp4116,nctemp4119,nctemp4122,nctemp4125,nctemp4128);
}
}
else{
struct tree* nctemp4136= sp;
nctempchar1* nctemp4138=CodeExpr(nctemp4136);
temp2=nctemp4138;
struct tree* nctemp4140= p;
nctempchar1* nctemp4142= temp;
int nctemp4145=CodeEs(nctemp4140,nctemp4142);
struct tree* nctemp4147= p;
struct nctempchar1 *nctemp4151;
static struct nctempchar1 nctemp4152 = {{ 2}, (char*)"=\0"};
nctemp4151=&nctemp4152;
nctempchar1* nctemp4149= nctemp4151;
int nctemp4153=CodeEs(nctemp4147,nctemp4149);
struct tree* nctemp4155= p;
nctempchar1* nctemp4157= temp2;
int nctemp4160=CodeEs(nctemp4155,nctemp4157);
struct tree* nctemp4162= p;
struct nctempchar1 *nctemp4166;
static struct nctempchar1 nctemp4167 = {{ 2}, (char*)"*\0"};
nctemp4166=&nctemp4167;
nctempchar1* nctemp4164= nctemp4166;
int nctemp4168=CodeEs(nctemp4162,nctemp4164);
nctempchar1 *nctemp4170 =qual;
int nctemp4169 =(nctemp4170!=0);
if(nctemp4169)
{
struct tree* nctemp4175= p;
nctempchar1* nctemp4177= qual;
int nctemp4180=CodeEs(nctemp4175,nctemp4177);
}
nctempchar1 *nctemp4182 =sel;
int nctemp4181 =(nctemp4182!=0);
if(nctemp4181)
{
struct tree* nctemp4187= p;
nctempchar1* nctemp4189= sel;
int nctemp4192=CodeEs(nctemp4187,nctemp4189);
}
struct tree* nctemp4194= p;
nctempchar1* nctemp4196= name;
int nctemp4199=CodeEs(nctemp4194,nctemp4196);
struct tree* nctemp4201= p;
struct nctempchar1 *nctemp4205;
static struct nctempchar1 nctemp4206 = {{ 4}, (char*)"->d\0"};
nctemp4205=&nctemp4206;
nctempchar1* nctemp4203= nctemp4205;
int nctemp4207=CodeEs(nctemp4201,nctemp4203);
struct tree* nctemp4209= p;
struct nctempchar1 *nctemp4213;
static struct nctempchar1 nctemp4214 = {{ 2}, (char*)"[\0"};
nctemp4213=&nctemp4214;
nctempchar1* nctemp4211= nctemp4213;
int nctemp4215=CodeEs(nctemp4209,nctemp4211);
int nctemp4222 = i - 1;
int nctemp4217= nctemp4222;
int nctemp4223=CodeEd(nctemp4217);
struct tree* nctemp4225= p;
struct nctempchar1 *nctemp4229;
static struct nctempchar1 nctemp4230 = {{ 2}, (char*)"]\0"};
nctemp4229=&nctemp4230;
nctempchar1* nctemp4227= nctemp4229;
int nctemp4231=CodeEs(nctemp4225,nctemp4227);
struct tree* nctemp4233= p;
struct nctempchar1 *nctemp4237;
static struct nctempchar1 nctemp4238 = {{ 2}, (char*)"+\0"};
nctemp4237=&nctemp4238;
nctempchar1* nctemp4235= nctemp4237;
int nctemp4239=CodeEs(nctemp4233,nctemp4235);
struct tree* nctemp4241= p;
nctempchar1* nctemp4243= temp;
int nctemp4246=CodeEs(nctemp4241,nctemp4243);
struct tree* nctemp4248= p;
struct nctempchar1 *nctemp4252;
static struct nctempchar1 nctemp4253 = {{ 4}, (char*)";\n\0"};
nctemp4252=&nctemp4253;
nctempchar1* nctemp4250= nctemp4252;
int nctemp4254=CodeEs(nctemp4248,nctemp4250);
int nctemp4256=CodeArraycheck();
if(nctemp4256)
{
struct tree* nctemp4260= p;
int nctemp4262=PtreeGetline(nctemp4260);
int nctemp4258= nctemp4262;
nctempchar1* nctemp4263= qual;
nctempchar1* nctemp4266= sel;
nctempchar1* nctemp4269= name;
nctempchar1* nctemp4272= temp2;
int nctemp4275= i;
int nctemp4277=CodeArrayex(nctemp4258,nctemp4263,nctemp4266,nctemp4269,nctemp4272,nctemp4275);
}
}
int nctemp4278 = (sp !=0);
if(nctemp4278)
{
struct tree* nctemp4286= sp;
struct tree* nctemp4288=PtreeMvsister(nctemp4286);
sp =nctemp4288;
}
}
int nctemp4297 = i + 1;
i =nctemp4297;
int nctemp4298 = (i < rank);
nctemp4045=nctemp4298;
}
nctempchar1* nctemp4312= name;
int nctemp4315=LibeStrlen(nctemp4312);
nctempchar1* nctemp4317= temp;
int nctemp4320=LibeStrlen(nctemp4317);
int nctemp4321 = nctemp4315 + nctemp4320;
int nctemp4323 = nctemp4321 + 6;
size =nctemp4323;
int nctemp4330=size;
nctempchar1 *nctemp4329;
nctemp4329=(nctempchar1*)RunMalloc(sizeof(nctempchar1));
nctemp4329->d[0]=size;
nctemp4329->a=(char *)RunMalloc(sizeof(char)*nctemp4330);
rval=nctemp4329;
nctempchar1* nctemp4334= name;
nctempchar1* nctemp4337= rval;
int nctemp4340=LibeStrcpy(nctemp4334,nctemp4337);
struct nctempchar1 *nctemp4344;
static struct nctempchar1 nctemp4345 = {{ 4}, (char*)"->a\0"};
nctemp4344=&nctemp4345;
nctempchar1* nctemp4342= nctemp4344;
nctempchar1* nctemp4346= rval;
int nctemp4349=LibeStrcat(nctemp4342,nctemp4346);
struct nctempchar1 *nctemp4353;
static struct nctempchar1 nctemp4354 = {{ 2}, (char*)"[\0"};
nctemp4353=&nctemp4354;
nctempchar1* nctemp4351= nctemp4353;
nctempchar1* nctemp4355= rval;
int nctemp4358=LibeStrcat(nctemp4351,nctemp4355);
nctempchar1* nctemp4360= temp;
nctempchar1* nctemp4363= rval;
int nctemp4366=LibeStrcat(nctemp4360,nctemp4363);
struct nctempchar1 *nctemp4370;
static struct nctempchar1 nctemp4371 = {{ 2}, (char*)"]\0"};
nctemp4370=&nctemp4371;
nctempchar1* nctemp4368= nctemp4370;
nctempchar1* nctemp4372= rval;
int nctemp4375=LibeStrcat(nctemp4368,nctemp4372);
return rval;
}
nctempchar1 * CodeQident (nctempchar1 *qual,nctempchar1 *ident)
{
int lq;
int li;
nctempchar1 *name;
nctempchar1* nctemp4382= qual;
int nctemp4385=LibeStrlen(nctemp4382);
lq =nctemp4385;
nctempchar1* nctemp4390= ident;
int nctemp4393=LibeStrlen(nctemp4390);
li =nctemp4393;
int nctemp4408 = lq + li;
int nctemp4410 = nctemp4408 + 2;
int nctemp4400=nctemp4410;
nctempchar1 *nctemp4399;
nctemp4399=(nctempchar1*)RunMalloc(sizeof(nctempchar1));
int nctemp4418 = lq + li;
int nctemp4420 = nctemp4418 + 2;
nctemp4399->d[0]=nctemp4420;
nctemp4399->a=(char *)RunMalloc(sizeof(char)*nctemp4400);
name=nctemp4399;
nctempchar1* nctemp4422= qual;
nctempchar1* nctemp4425= name;
int nctemp4428=LibeStrcpy(nctemp4422,nctemp4425);
struct nctempchar1 *nctemp4432;
static struct nctempchar1 nctemp4433 = {{ 2}, (char*)".\0"};
nctemp4432=&nctemp4433;
nctempchar1* nctemp4430= nctemp4432;
nctempchar1* nctemp4434= name;
int nctemp4437=LibeStrcat(nctemp4430,nctemp4434);
nctempchar1* nctemp4439= ident;
nctempchar1* nctemp4442= name;
int nctemp4445=LibeStrcat(nctemp4439,nctemp4442);
return name;
}
nctempchar1 * CodeQident2 (nctempchar1 *qual,nctempchar1 *ident)
{
int lq;
int li;
nctempchar1 *name;
nctempchar1* nctemp4452= qual;
int nctemp4455=LibeStrlen(nctemp4452);
lq =nctemp4455;
nctempchar1* nctemp4460= ident;
int nctemp4463=LibeStrlen(nctemp4460);
li =nctemp4463;
int nctemp4478 = lq + li;
int nctemp4480 = nctemp4478 + 3;
int nctemp4470=nctemp4480;
nctempchar1 *nctemp4469;
nctemp4469=(nctempchar1*)RunMalloc(sizeof(nctempchar1));
int nctemp4488 = lq + li;
int nctemp4490 = nctemp4488 + 3;
nctemp4469->d[0]=nctemp4490;
nctemp4469->a=(char *)RunMalloc(sizeof(char)*nctemp4470);
name=nctemp4469;
nctempchar1* nctemp4492= qual;
nctempchar1* nctemp4495= name;
int nctemp4498=LibeStrcpy(nctemp4492,nctemp4495);
struct nctempchar1 *nctemp4502;
static struct nctempchar1 nctemp4503 = {{ 3}, (char*)"->\0"};
nctemp4502=&nctemp4503;
nctempchar1* nctemp4500= nctemp4502;
nctempchar1* nctemp4504= name;
int nctemp4507=LibeStrcat(nctemp4500,nctemp4504);
nctempchar1* nctemp4509= ident;
nctempchar1* nctemp4512= name;
int nctemp4515=LibeStrcat(nctemp4509,nctemp4512);
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
struct tree* nctemp4523= p;
nctempchar1* nctemp4525=PtreeGetstruct(nctemp4523);
nctempchar1* nctemp4521= nctemp4525;
struct nctempchar1 *nctemp4528;
static struct nctempchar1 nctemp4529 = {{ 7}, (char*)"struct\0"};
nctemp4528=&nctemp4529;
nctempchar1* nctemp4526= nctemp4528;
int nctemp4530=LibeStrcmp(nctemp4521,nctemp4526);
int nctemp4518 = (nctemp4530 ==1);
if(nctemp4518)
{
struct tree* nctemp4537= p;
nctempchar1* nctemp4539=PtreeGetarray(nctemp4537);
nctempchar1* nctemp4535= nctemp4539;
struct nctempchar1 *nctemp4542;
static struct nctempchar1 nctemp4543 = {{ 6}, (char*)"array\0"};
nctemp4542=&nctemp4543;
nctempchar1* nctemp4540= nctemp4542;
int nctemp4544=LibeStrcmp(nctemp4535,nctemp4540);
int nctemp4532 = (nctemp4544 ==1);
if(nctemp4532)
{
struct tree* nctemp4551= p;
nctempchar1* nctemp4553= qual;
struct nctempchar1 *nctemp4558;
static struct nctempchar1 nctemp4559 = {{ 2}, (char*)".\0"};
nctemp4558=&nctemp4559;
nctempchar1* nctemp4556= nctemp4558;
nctempchar1* nctemp4560=CodeArray(nctemp4551,nctemp4553,nctemp4556);
qual=nctemp4560;
struct tree* nctemp4565= p;
struct tree* nctemp4567=PtreeMvchild(nctemp4565);
np =nctemp4567;
int nctemp4568 = (np ==0);
if(nctemp4568)
{
return qual;
}
struct tree* nctemp4578= np;
struct tree* nctemp4580=PtreeMvsister(nctemp4578);
np =nctemp4580;
int nctemp4581 = (np ==0);
if(nctemp4581)
{
return qual;
}
}
else{
struct tree* nctemp4592= p;
nctempchar1* nctemp4594=PtreeGetdef(nctemp4592);
qual=nctemp4594;
struct tree* nctemp4602= p;
struct tree* nctemp4604=PtreeMvchild(nctemp4602);
np =nctemp4604;
int nctemp4595 = (np ==0);
if(nctemp4595)
{
return qual;
}
}
struct tree* nctemp4613= np;
nctempchar1* nctemp4615=PtreeGetarray(nctemp4613);
nctempchar1* nctemp4611= nctemp4615;
struct nctempchar1 *nctemp4618;
static struct nctempchar1 nctemp4619 = {{ 6}, (char*)"array\0"};
nctemp4618=&nctemp4619;
nctempchar1* nctemp4616= nctemp4618;
int nctemp4620=LibeStrcmp(nctemp4611,nctemp4616);
int nctemp4608 = (nctemp4620 ==1);
if(nctemp4608)
{
struct symbol* nctemp4626=SymGetltp();
tp =nctemp4626;
struct symbol* nctemp4631=SymGetetp();
up =nctemp4631;
struct tree* nctemp4638= p;
nctempchar1* nctemp4640=PtreeGetdef(nctemp4638);
nctempchar1* nctemp4636= nctemp4640;
struct symbol* nctemp4641=SymLook(nctemp4636);
uup =nctemp4641;
struct symbol* nctemp4648= uup;
nctempchar1* nctemp4650=SymGetype(nctemp4648);
nctempchar1* nctemp4646= nctemp4650;
struct symbol* nctemp4651=SymLook(nctemp4646);
uup =nctemp4651;
struct symbol* nctemp4655= uup;
struct symbol* nctemp4657=SymGetable(nctemp4655);
struct symbol* nctemp4653= nctemp4657;
struct symbol* nctemp4658=SymSetltp(nctemp4653);
struct tree* nctemp4664= p;
nctempchar1* nctemp4666=PtreeGetarray(nctemp4664);
nctempchar1* nctemp4662= nctemp4666;
struct nctempchar1 *nctemp4669;
static struct nctempchar1 nctemp4670 = {{ 6}, (char*)"array\0"};
nctemp4669=&nctemp4670;
nctempchar1* nctemp4667= nctemp4669;
int nctemp4671=LibeStrcmp(nctemp4662,nctemp4667);
int nctemp4659 = (nctemp4671 ==1);
if(nctemp4659)
{
struct tree* nctemp4678= np;
nctempchar1* nctemp4680= qual;
struct nctempchar1 *nctemp4685;
static struct nctempchar1 nctemp4686 = {{ 2}, (char*)".\0"};
nctemp4685=&nctemp4686;
nctempchar1* nctemp4683= nctemp4685;
nctempchar1* nctemp4687=CodeArray(nctemp4678,nctemp4680,nctemp4683);
name=nctemp4687;
}
else{
struct tree* nctemp4693= np;
nctempchar1* nctemp4695= qual;
struct nctempchar1 *nctemp4700;
static struct nctempchar1 nctemp4701 = {{ 3}, (char*)"->\0"};
nctemp4700=&nctemp4701;
nctempchar1* nctemp4698= nctemp4700;
nctempchar1* nctemp4702=CodeArray(nctemp4693,nctemp4695,nctemp4698);
name=nctemp4702;
}
struct symbol* nctemp4704= tp;
struct symbol* nctemp4706=SymSetltp(nctemp4704);
struct symbol* nctemp4708= up;
struct symbol* nctemp4710=SymSetetp(nctemp4708);
}
else{
struct tree* nctemp4716= np;
nctempchar1* nctemp4718=PtreeGetdef(nctemp4716);
name=nctemp4718;
}
struct tree* nctemp4724= p;
nctempchar1* nctemp4726=PtreeGetarray(nctemp4724);
nctempchar1* nctemp4722= nctemp4726;
struct nctempchar1 *nctemp4729;
static struct nctempchar1 nctemp4730 = {{ 6}, (char*)"array\0"};
nctemp4729=&nctemp4730;
nctempchar1* nctemp4727= nctemp4729;
int nctemp4731=LibeStrcmp(nctemp4722,nctemp4727);
int nctemp4719 = (nctemp4731 ==1);
if(nctemp4719)
{
nctempchar1* nctemp4734= qual;
nctempchar1* nctemp4737= name;
nctempchar1* nctemp4740=CodeQident(nctemp4734,nctemp4737);
return nctemp4740;
}
else{
nctempchar1* nctemp4742= qual;
nctempchar1* nctemp4745= name;
nctempchar1* nctemp4748=CodeQident2(nctemp4742,nctemp4745);
return nctemp4748;
}
}
else{
struct tree* nctemp4754= p;
nctempchar1* nctemp4756=PtreeGetarray(nctemp4754);
nctempchar1* nctemp4752= nctemp4756;
struct nctempchar1 *nctemp4759;
static struct nctempchar1 nctemp4760 = {{ 6}, (char*)"array\0"};
nctemp4759=&nctemp4760;
nctempchar1* nctemp4757= nctemp4759;
int nctemp4761=LibeStrcmp(nctemp4752,nctemp4757);
int nctemp4749 = (nctemp4761 ==1);
if(nctemp4749)
{
name=(0);
qual=(0);
struct tree* nctemp4778= p;
nctempchar1* nctemp4780= qual;
nctempchar1* nctemp4783= name;
nctempchar1* nctemp4786=CodeArray(nctemp4778,nctemp4780,nctemp4783);
qual=nctemp4786;
return qual;
}
else{
struct tree* nctemp4790= p;
nctempchar1* nctemp4792=PtreeGetdef(nctemp4790);
return nctemp4792;
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
nctempchar1* nctemp4798=CodeMktemp();
pointer=nctemp4798;
nctempchar1* nctemp4804=CodeMktemp();
totdim=nctemp4804;
struct tree* nctemp4809= p;
struct tree* nctemp4811=PtreeMvchild(nctemp4809);
p =nctemp4811;
struct tree* nctemp4817= p;
nctempchar1* nctemp4819=PtreeGetdef(nctemp4817);
type=nctemp4819;
struct tree* nctemp4825= p;
nctempchar1* nctemp4827=PtreeGetstruct(nctemp4825);
structflag=nctemp4827;
struct tree* nctemp4833= p;
nctempchar1* nctemp4835=PtreeGetarray(nctemp4833);
arrayflag=nctemp4835;
struct tree* nctemp4841= p;
nctempchar1* nctemp4843=PtreeGetarray(nctemp4841);
nctempchar1* nctemp4839= nctemp4843;
struct nctempchar1 *nctemp4846;
static struct nctempchar1 nctemp4847 = {{ 6}, (char*)"array\0"};
nctemp4846=&nctemp4847;
nctempchar1* nctemp4844= nctemp4846;
int nctemp4848=LibeStrcmp(nctemp4839,nctemp4844);
int nctemp4836 = (nctemp4848 ==1);
if(nctemp4836)
{
struct tree* nctemp4854= p;
struct tree* nctemp4856=PtreeMvchild(nctemp4854);
p =nctemp4856;
struct tree* nctemp4861= p;
struct tree* nctemp4863=PtreeMvchild(nctemp4861);
p =nctemp4863;
struct tree* nctemp4868= p;
struct tree* nctemp4870=PtreeMvchild(nctemp4868);
p =nctemp4870;
struct tree* nctemp4875= p;
struct tree* nctemp4877=PtreeMvchild(nctemp4875);
p =nctemp4877;
sp =p;
top =p;
rank =1;
struct tree* nctemp4897= p;
struct tree* nctemp4899=PtreeMvsister(nctemp4897);
p =nctemp4899;
int nctemp4890 = (p !=0);
int nctemp4901=nctemp4890;
while(nctemp4901)
{{
int nctemp4910 = rank + 1;
rank =nctemp4910;
}
struct tree* nctemp4918= p;
struct tree* nctemp4920=PtreeMvsister(nctemp4918);
p =nctemp4920;
int nctemp4911 = (p !=0);
nctemp4901=nctemp4911;}int nctemp4922 = (rank > 4);
if(nctemp4922)
{
struct nctempchar1 *nctemp4929;
static struct nctempchar1 nctemp4930 = {{ 29}, (char*)"Array dimension is too large\0"};
nctemp4929=&nctemp4930;
nctempchar1* nctemp4927= nctemp4929;
int nctemp4931=CodeError(nctemp4927);
}
p =sp;
i =0;
int nctemp4940 = (p !=0);
int nctemp4944=nctemp4940;
while(nctemp4944)
{{
struct tree* nctemp4950= p;
nctempchar1* nctemp4952=CodeExpr(nctemp4950);
dim=nctemp4952;
int nctemp4953 = (i ==0);
if(nctemp4953)
{
struct tree* nctemp4958= p;
struct tree* nctemp4962= p;
nctempchar1* nctemp4964=PtreeGetype(nctemp4962);
nctempchar1* nctemp4960= nctemp4964;
int nctemp4965=CodeEs(nctemp4958,nctemp4960);
struct tree* nctemp4967= p;
struct nctempchar1 *nctemp4971;
static struct nctempchar1 nctemp4972 = {{ 2}, (char*)" \0"};
nctemp4971=&nctemp4972;
nctempchar1* nctemp4969= nctemp4971;
int nctemp4973=CodeEs(nctemp4967,nctemp4969);
struct tree* nctemp4975= p;
nctempchar1* nctemp4977= totdim;
int nctemp4980=CodeEs(nctemp4975,nctemp4977);
struct tree* nctemp4982= p;
struct nctempchar1 *nctemp4986;
static struct nctempchar1 nctemp4987 = {{ 2}, (char*)"=\0"};
nctemp4986=&nctemp4987;
nctempchar1* nctemp4984= nctemp4986;
int nctemp4988=CodeEs(nctemp4982,nctemp4984);
struct tree* nctemp4990= p;
nctempchar1* nctemp4992= dim;
int nctemp4995=CodeEs(nctemp4990,nctemp4992);
}
else{
struct tree* nctemp4997= p;
nctempchar1* nctemp4999= totdim;
int nctemp5002=CodeEs(nctemp4997,nctemp4999);
struct tree* nctemp5004= p;
struct nctempchar1 *nctemp5008;
static struct nctempchar1 nctemp5009 = {{ 2}, (char*)"=\0"};
nctemp5008=&nctemp5009;
nctempchar1* nctemp5006= nctemp5008;
int nctemp5010=CodeEs(nctemp5004,nctemp5006);
struct tree* nctemp5012= p;
nctempchar1* nctemp5014= totdim;
int nctemp5017=CodeEs(nctemp5012,nctemp5014);
struct tree* nctemp5019= p;
struct nctempchar1 *nctemp5023;
static struct nctempchar1 nctemp5024 = {{ 2}, (char*)"*\0"};
nctemp5023=&nctemp5024;
nctempchar1* nctemp5021= nctemp5023;
int nctemp5025=CodeEs(nctemp5019,nctemp5021);
struct tree* nctemp5027= p;
nctempchar1* nctemp5029= dim;
int nctemp5032=CodeEs(nctemp5027,nctemp5029);
}
struct tree* nctemp5034= p;
struct nctempchar1 *nctemp5038;
static struct nctempchar1 nctemp5039 = {{ 4}, (char*)";\n\0"};
nctemp5038=&nctemp5039;
nctempchar1* nctemp5036= nctemp5038;
int nctemp5040=CodeEs(nctemp5034,nctemp5036);
int nctemp5049 = i + 1;
i =nctemp5049;
struct tree* nctemp5054= p;
struct tree* nctemp5056=PtreeMvsister(nctemp5054);
p =nctemp5056;
}
int nctemp5057 = (p !=0);
nctemp4944=nctemp5057;}}
nctempchar1* nctemp5067= structflag;
struct nctempchar1 *nctemp5072;
static struct nctempchar1 nctemp5073 = {{ 7}, (char*)"struct\0"};
nctemp5072=&nctemp5073;
nctempchar1* nctemp5070= nctemp5072;
int nctemp5074=LibeStrcmp(nctemp5067,nctemp5070);
int nctemp5064 = (nctemp5074 ==1);
nctempchar1* nctemp5080= arrayflag;
struct nctempchar1 *nctemp5085;
static struct nctempchar1 nctemp5086 = {{ 6}, (char*)"array\0"};
nctemp5085=&nctemp5086;
nctempchar1* nctemp5083= nctemp5085;
int nctemp5087=LibeStrcmp(nctemp5080,nctemp5083);
int nctemp5077 = (nctemp5087 ==0);
int nctemp5061 = (nctemp5064 && nctemp5077);
if(nctemp5061)
{
struct tree* nctemp5090= p;
struct nctempchar1 *nctemp5094;
static struct nctempchar1 nctemp5095 = {{ 8}, (char*)"struct \0"};
nctemp5094=&nctemp5095;
nctempchar1* nctemp5092= nctemp5094;
int nctemp5096=CodeEs(nctemp5090,nctemp5092);
struct tree* nctemp5098= p;
nctempchar1* nctemp5100= type;
int nctemp5103=CodeEs(nctemp5098,nctemp5100);
struct tree* nctemp5105= p;
struct nctempchar1 *nctemp5109;
static struct nctempchar1 nctemp5110 = {{ 3}, (char*)" *\0"};
nctemp5109=&nctemp5110;
nctempchar1* nctemp5107= nctemp5109;
int nctemp5111=CodeEs(nctemp5105,nctemp5107);
struct tree* nctemp5113= p;
nctempchar1* nctemp5115= pointer;
int nctemp5118=CodeEs(nctemp5113,nctemp5115);
struct tree* nctemp5120= p;
struct nctempchar1 *nctemp5124;
static struct nctempchar1 nctemp5125 = {{ 2}, (char*)"=\0"};
nctemp5124=&nctemp5125;
nctempchar1* nctemp5122= nctemp5124;
int nctemp5126=CodeEs(nctemp5120,nctemp5122);
struct tree* nctemp5128= p;
struct nctempchar1 *nctemp5132;
static struct nctempchar1 nctemp5133 = {{ 2}, (char*)"(\0"};
nctemp5132=&nctemp5133;
nctempchar1* nctemp5130= nctemp5132;
int nctemp5134=CodeEs(nctemp5128,nctemp5130);
struct tree* nctemp5136= p;
struct nctempchar1 *nctemp5140;
static struct nctempchar1 nctemp5141 = {{ 8}, (char*)"struct \0"};
nctemp5140=&nctemp5141;
nctempchar1* nctemp5138= nctemp5140;
int nctemp5142=CodeEs(nctemp5136,nctemp5138);
struct tree* nctemp5144= p;
nctempchar1* nctemp5146= type;
int nctemp5149=CodeEs(nctemp5144,nctemp5146);
struct tree* nctemp5151= p;
struct nctempchar1 *nctemp5155;
static struct nctempchar1 nctemp5156 = {{ 3}, (char*)"*)\0"};
nctemp5155=&nctemp5156;
nctempchar1* nctemp5153= nctemp5155;
int nctemp5157=CodeEs(nctemp5151,nctemp5153);
struct tree* nctemp5159= p;
struct nctempchar1 *nctemp5163;
static struct nctempchar1 nctemp5164 = {{ 11}, (char*)"RunMalloc(\0"};
nctemp5163=&nctemp5164;
nctempchar1* nctemp5161= nctemp5163;
int nctemp5165=CodeEs(nctemp5159,nctemp5161);
struct tree* nctemp5167= p;
struct nctempchar1 *nctemp5171;
static struct nctempchar1 nctemp5172 = {{ 8}, (char*)"sizeof(\0"};
nctemp5171=&nctemp5172;
nctempchar1* nctemp5169= nctemp5171;
int nctemp5173=CodeEs(nctemp5167,nctemp5169);
struct tree* nctemp5175= p;
struct nctempchar1 *nctemp5179;
static struct nctempchar1 nctemp5180 = {{ 8}, (char*)"struct \0"};
nctemp5179=&nctemp5180;
nctempchar1* nctemp5177= nctemp5179;
int nctemp5181=CodeEs(nctemp5175,nctemp5177);
struct tree* nctemp5183= p;
nctempchar1* nctemp5185= type;
int nctemp5188=CodeEs(nctemp5183,nctemp5185);
struct tree* nctemp5190= p;
struct nctempchar1 *nctemp5194;
static struct nctempchar1 nctemp5195 = {{ 6}, (char*)"));\n\0"};
nctemp5194=&nctemp5195;
nctempchar1* nctemp5192= nctemp5194;
int nctemp5196=CodeEs(nctemp5190,nctemp5192);
}
nctempchar1* nctemp5203= structflag;
struct nctempchar1 *nctemp5208;
static struct nctempchar1 nctemp5209 = {{ 7}, (char*)"struct\0"};
nctemp5208=&nctemp5209;
nctempchar1* nctemp5206= nctemp5208;
int nctemp5210=LibeStrcmp(nctemp5203,nctemp5206);
int nctemp5200 = (nctemp5210 ==1);
nctempchar1* nctemp5216= arrayflag;
struct nctempchar1 *nctemp5221;
static struct nctempchar1 nctemp5222 = {{ 6}, (char*)"array\0"};
nctemp5221=&nctemp5222;
nctempchar1* nctemp5219= nctemp5221;
int nctemp5223=LibeStrcmp(nctemp5216,nctemp5219);
int nctemp5213 = (nctemp5223 ==1);
int nctemp5197 = (nctemp5200 && nctemp5213);
if(nctemp5197)
{
struct tree* nctemp5226= p;
struct nctempchar1 *nctemp5230;
static struct nctempchar1 nctemp5231 = {{ 14}, (char*)"struct nctemp\0"};
nctemp5230=&nctemp5231;
nctempchar1* nctemp5228= nctemp5230;
int nctemp5232=CodeEs(nctemp5226,nctemp5228);
struct tree* nctemp5234= p;
nctempchar1* nctemp5236= type;
int nctemp5239=CodeEs(nctemp5234,nctemp5236);
int nctemp5241= rank;
int nctemp5243=CodeEd(nctemp5241);
struct tree* nctemp5245= p;
struct nctempchar1 *nctemp5249;
static struct nctempchar1 nctemp5250 = {{ 3}, (char*)" *\0"};
nctemp5249=&nctemp5250;
nctempchar1* nctemp5247= nctemp5249;
int nctemp5251=CodeEs(nctemp5245,nctemp5247);
struct tree* nctemp5253= p;
nctempchar1* nctemp5255= pointer;
int nctemp5258=CodeEs(nctemp5253,nctemp5255);
struct tree* nctemp5260= p;
struct nctempchar1 *nctemp5264;
static struct nctempchar1 nctemp5265 = {{ 4}, (char*)";\n\0"};
nctemp5264=&nctemp5265;
nctempchar1* nctemp5262= nctemp5264;
int nctemp5266=CodeEs(nctemp5260,nctemp5262);
struct tree* nctemp5268= p;
nctempchar1* nctemp5270= pointer;
int nctemp5273=CodeEs(nctemp5268,nctemp5270);
struct tree* nctemp5275= p;
struct nctempchar1 *nctemp5279;
static struct nctempchar1 nctemp5280 = {{ 2}, (char*)"=\0"};
nctemp5279=&nctemp5280;
nctempchar1* nctemp5277= nctemp5279;
int nctemp5281=CodeEs(nctemp5275,nctemp5277);
struct tree* nctemp5283= p;
struct nctempchar1 *nctemp5287;
static struct nctempchar1 nctemp5288 = {{ 2}, (char*)"(\0"};
nctemp5287=&nctemp5288;
nctempchar1* nctemp5285= nctemp5287;
int nctemp5289=CodeEs(nctemp5283,nctemp5285);
struct tree* nctemp5291= p;
struct nctempchar1 *nctemp5295;
static struct nctempchar1 nctemp5296 = {{ 14}, (char*)"struct nctemp\0"};
nctemp5295=&nctemp5296;
nctempchar1* nctemp5293= nctemp5295;
int nctemp5297=CodeEs(nctemp5291,nctemp5293);
struct tree* nctemp5299= p;
nctempchar1* nctemp5301= type;
int nctemp5304=CodeEs(nctemp5299,nctemp5301);
int nctemp5306= rank;
int nctemp5308=CodeEd(nctemp5306);
struct tree* nctemp5310= p;
struct nctempchar1 *nctemp5314;
static struct nctempchar1 nctemp5315 = {{ 3}, (char*)"*)\0"};
nctemp5314=&nctemp5315;
nctempchar1* nctemp5312= nctemp5314;
int nctemp5316=CodeEs(nctemp5310,nctemp5312);
struct tree* nctemp5318= p;
struct nctempchar1 *nctemp5322;
static struct nctempchar1 nctemp5323 = {{ 11}, (char*)"RunMalloc(\0"};
nctemp5322=&nctemp5323;
nctempchar1* nctemp5320= nctemp5322;
int nctemp5324=CodeEs(nctemp5318,nctemp5320);
struct tree* nctemp5326= p;
struct nctempchar1 *nctemp5330;
static struct nctempchar1 nctemp5331 = {{ 21}, (char*)"sizeof(struct nctemp\0"};
nctemp5330=&nctemp5331;
nctempchar1* nctemp5328= nctemp5330;
int nctemp5332=CodeEs(nctemp5326,nctemp5328);
struct tree* nctemp5334= p;
nctempchar1* nctemp5336= type;
int nctemp5339=CodeEs(nctemp5334,nctemp5336);
int nctemp5341= rank;
int nctemp5343=CodeEd(nctemp5341);
struct tree* nctemp5345= p;
struct nctempchar1 *nctemp5349;
static struct nctempchar1 nctemp5350 = {{ 6}, (char*)"));\n\0"};
nctemp5349=&nctemp5350;
nctempchar1* nctemp5347= nctemp5349;
int nctemp5351=CodeEs(nctemp5345,nctemp5347);
i =0;
p =sp;
int nctemp5360 = (p !=0);
int nctemp5364=nctemp5360;
while(nctemp5364)
{{
struct tree* nctemp5370= sp;
nctempchar1* nctemp5372=CodeExpr(nctemp5370);
dim=nctemp5372;
struct tree* nctemp5374= sp;
nctempchar1* nctemp5376= pointer;
int nctemp5379=CodeEs(nctemp5374,nctemp5376);
struct tree* nctemp5381= sp;
struct nctempchar1 *nctemp5385;
static struct nctempchar1 nctemp5386 = {{ 4}, (char*)"->d\0"};
nctemp5385=&nctemp5386;
nctempchar1* nctemp5383= nctemp5385;
int nctemp5387=CodeEs(nctemp5381,nctemp5383);
struct tree* nctemp5389= sp;
struct nctempchar1 *nctemp5393;
static struct nctempchar1 nctemp5394 = {{ 2}, (char*)"[\0"};
nctemp5393=&nctemp5394;
nctempchar1* nctemp5391= nctemp5393;
int nctemp5395=CodeEs(nctemp5389,nctemp5391);
int nctemp5397= i;
int nctemp5399=CodeEd(nctemp5397);
struct tree* nctemp5401= sp;
struct nctempchar1 *nctemp5405;
static struct nctempchar1 nctemp5406 = {{ 3}, (char*)"]=\0"};
nctemp5405=&nctemp5406;
nctempchar1* nctemp5403= nctemp5405;
int nctemp5407=CodeEs(nctemp5401,nctemp5403);
struct tree* nctemp5409= sp;
nctempchar1* nctemp5411= dim;
int nctemp5414=CodeEs(nctemp5409,nctemp5411);
struct tree* nctemp5416= sp;
struct nctempchar1 *nctemp5420;
static struct nctempchar1 nctemp5421 = {{ 4}, (char*)";\n\0"};
nctemp5420=&nctemp5421;
nctempchar1* nctemp5418= nctemp5420;
int nctemp5422=CodeEs(nctemp5416,nctemp5418);
int nctemp5431 = i + 1;
i =nctemp5431;
struct tree* nctemp5436= p;
struct tree* nctemp5438=PtreeMvsister(nctemp5436);
p =nctemp5438;
}
int nctemp5439 = (p !=0);
nctemp5364=nctemp5439;}struct tree* nctemp5444= sp;
nctempchar1* nctemp5446= pointer;
int nctemp5449=CodeEs(nctemp5444,nctemp5446);
struct tree* nctemp5451= sp;
struct nctempchar1 *nctemp5455;
static struct nctempchar1 nctemp5456 = {{ 4}, (char*)"->a\0"};
nctemp5455=&nctemp5456;
nctempchar1* nctemp5453= nctemp5455;
int nctemp5457=CodeEs(nctemp5451,nctemp5453);
struct tree* nctemp5459= sp;
struct nctempchar1 *nctemp5463;
static struct nctempchar1 nctemp5464 = {{ 2}, (char*)"=\0"};
nctemp5463=&nctemp5464;
nctempchar1* nctemp5461= nctemp5463;
int nctemp5465=CodeEs(nctemp5459,nctemp5461);
struct tree* nctemp5467= sp;
struct nctempchar1 *nctemp5471;
static struct nctempchar1 nctemp5472 = {{ 9}, (char*)"(struct \0"};
nctemp5471=&nctemp5472;
nctempchar1* nctemp5469= nctemp5471;
int nctemp5473=CodeEs(nctemp5467,nctemp5469);
struct tree* nctemp5475= sp;
nctempchar1* nctemp5477= type;
int nctemp5480=CodeEs(nctemp5475,nctemp5477);
struct tree* nctemp5482= sp;
struct nctempchar1 *nctemp5486;
static struct nctempchar1 nctemp5487 = {{ 3}, (char*)"*)\0"};
nctemp5486=&nctemp5487;
nctempchar1* nctemp5484= nctemp5486;
int nctemp5488=CodeEs(nctemp5482,nctemp5484);
struct tree* nctemp5490= sp;
struct nctempchar1 *nctemp5494;
static struct nctempchar1 nctemp5495 = {{ 18}, (char*)"RunMalloc(sizeof(\0"};
nctemp5494=&nctemp5495;
nctempchar1* nctemp5492= nctemp5494;
int nctemp5496=CodeEs(nctemp5490,nctemp5492);
struct tree* nctemp5498= sp;
struct nctempchar1 *nctemp5502;
static struct nctempchar1 nctemp5503 = {{ 8}, (char*)"struct \0"};
nctemp5502=&nctemp5503;
nctempchar1* nctemp5500= nctemp5502;
int nctemp5504=CodeEs(nctemp5498,nctemp5500);
struct tree* nctemp5506= sp;
nctempchar1* nctemp5508= type;
int nctemp5511=CodeEs(nctemp5506,nctemp5508);
struct tree* nctemp5513= sp;
struct nctempchar1 *nctemp5517;
static struct nctempchar1 nctemp5518 = {{ 2}, (char*)")\0"};
nctemp5517=&nctemp5518;
nctempchar1* nctemp5515= nctemp5517;
int nctemp5519=CodeEs(nctemp5513,nctemp5515);
struct tree* nctemp5521= sp;
struct nctempchar1 *nctemp5525;
static struct nctempchar1 nctemp5526 = {{ 2}, (char*)"*\0"};
nctemp5525=&nctemp5526;
nctempchar1* nctemp5523= nctemp5525;
int nctemp5527=CodeEs(nctemp5521,nctemp5523);
struct tree* nctemp5529= sp;
nctempchar1* nctemp5531= totdim;
int nctemp5534=CodeEs(nctemp5529,nctemp5531);
struct tree* nctemp5536= sp;
struct nctempchar1 *nctemp5540;
static struct nctempchar1 nctemp5541 = {{ 5}, (char*)");\n\0"};
nctemp5540=&nctemp5541;
nctempchar1* nctemp5538= nctemp5540;
int nctemp5542=CodeEs(nctemp5536,nctemp5538);
}
nctempchar1* nctemp5549= structflag;
struct nctempchar1 *nctemp5554;
static struct nctempchar1 nctemp5555 = {{ 7}, (char*)"struct\0"};
nctemp5554=&nctemp5555;
nctempchar1* nctemp5552= nctemp5554;
int nctemp5556=LibeStrcmp(nctemp5549,nctemp5552);
int nctemp5546 = (nctemp5556 ==0);
nctempchar1* nctemp5562= arrayflag;
struct nctempchar1 *nctemp5567;
static struct nctempchar1 nctemp5568 = {{ 6}, (char*)"array\0"};
nctemp5567=&nctemp5568;
nctempchar1* nctemp5565= nctemp5567;
int nctemp5569=LibeStrcmp(nctemp5562,nctemp5565);
int nctemp5559 = (nctemp5569 ==1);
int nctemp5543 = (nctemp5546 && nctemp5559);
if(nctemp5543)
{
int nctemp5572= 4;
int nctemp5574=LibeFlush(nctemp5572);
struct tree* nctemp5576= sp;
struct nctempchar1 *nctemp5580;
static struct nctempchar1 nctemp5581 = {{ 7}, (char*)"nctemp\0"};
nctemp5580=&nctemp5581;
nctempchar1* nctemp5578= nctemp5580;
int nctemp5582=CodeEs(nctemp5576,nctemp5578);
struct tree* nctemp5584= sp;
nctempchar1* nctemp5586= type;
int nctemp5589=CodeEs(nctemp5584,nctemp5586);
int nctemp5591= rank;
int nctemp5593=CodeEd(nctemp5591);
struct tree* nctemp5595= sp;
struct nctempchar1 *nctemp5599;
static struct nctempchar1 nctemp5600 = {{ 3}, (char*)" *\0"};
nctemp5599=&nctemp5600;
nctempchar1* nctemp5597= nctemp5599;
int nctemp5601=CodeEs(nctemp5595,nctemp5597);
struct tree* nctemp5603= sp;
nctempchar1* nctemp5605= pointer;
int nctemp5608=CodeEs(nctemp5603,nctemp5605);
struct tree* nctemp5610= sp;
struct nctempchar1 *nctemp5614;
static struct nctempchar1 nctemp5615 = {{ 4}, (char*)";\n\0"};
nctemp5614=&nctemp5615;
nctempchar1* nctemp5612= nctemp5614;
int nctemp5616=CodeEs(nctemp5610,nctemp5612);
p =top;
i =0;
struct tree* nctemp5626= p;
nctempchar1* nctemp5628= pointer;
int nctemp5631=CodeEs(nctemp5626,nctemp5628);
struct tree* nctemp5633= p;
struct nctempchar1 *nctemp5637;
static struct nctempchar1 nctemp5638 = {{ 2}, (char*)"=\0"};
nctemp5637=&nctemp5638;
nctempchar1* nctemp5635= nctemp5637;
int nctemp5639=CodeEs(nctemp5633,nctemp5635);
struct tree* nctemp5641= p;
struct nctempchar1 *nctemp5645;
static struct nctempchar1 nctemp5646 = {{ 2}, (char*)"(\0"};
nctemp5645=&nctemp5646;
nctempchar1* nctemp5643= nctemp5645;
int nctemp5647=CodeEs(nctemp5641,nctemp5643);
struct tree* nctemp5649= p;
struct nctempchar1 *nctemp5653;
static struct nctempchar1 nctemp5654 = {{ 7}, (char*)"nctemp\0"};
nctemp5653=&nctemp5654;
nctempchar1* nctemp5651= nctemp5653;
int nctemp5655=CodeEs(nctemp5649,nctemp5651);
struct tree* nctemp5657= p;
nctempchar1* nctemp5659= type;
int nctemp5662=CodeEs(nctemp5657,nctemp5659);
int nctemp5664= rank;
int nctemp5666=CodeEd(nctemp5664);
struct tree* nctemp5668= p;
struct nctempchar1 *nctemp5672;
static struct nctempchar1 nctemp5673 = {{ 3}, (char*)"*)\0"};
nctemp5672=&nctemp5673;
nctempchar1* nctemp5670= nctemp5672;
int nctemp5674=CodeEs(nctemp5668,nctemp5670);
struct tree* nctemp5676= p;
struct nctempchar1 *nctemp5680;
static struct nctempchar1 nctemp5681 = {{ 11}, (char*)"RunMalloc(\0"};
nctemp5680=&nctemp5681;
nctempchar1* nctemp5678= nctemp5680;
int nctemp5682=CodeEs(nctemp5676,nctemp5678);
struct tree* nctemp5684= p;
struct nctempchar1 *nctemp5688;
static struct nctempchar1 nctemp5689 = {{ 14}, (char*)"sizeof(nctemp\0"};
nctemp5688=&nctemp5689;
nctempchar1* nctemp5686= nctemp5688;
int nctemp5690=CodeEs(nctemp5684,nctemp5686);
struct tree* nctemp5692= p;
nctempchar1* nctemp5694= type;
int nctemp5697=CodeEs(nctemp5692,nctemp5694);
int nctemp5699= rank;
int nctemp5701=CodeEd(nctemp5699);
struct tree* nctemp5703= p;
struct nctempchar1 *nctemp5707;
static struct nctempchar1 nctemp5708 = {{ 6}, (char*)"));\n\0"};
nctemp5707=&nctemp5708;
nctempchar1* nctemp5705= nctemp5707;
int nctemp5709=CodeEs(nctemp5703,nctemp5705);
int nctemp5710 = (p !=0);
int nctemp5714=nctemp5710;
while(nctemp5714)
{{
struct tree* nctemp5720= p;
nctempchar1* nctemp5722=CodeExpr(nctemp5720);
dim=nctemp5722;
struct tree* nctemp5724= p;
nctempchar1* nctemp5726= pointer;
int nctemp5729=CodeEs(nctemp5724,nctemp5726);
struct tree* nctemp5731= p;
struct nctempchar1 *nctemp5735;
static struct nctempchar1 nctemp5736 = {{ 4}, (char*)"->d\0"};
nctemp5735=&nctemp5736;
nctempchar1* nctemp5733= nctemp5735;
int nctemp5737=CodeEs(nctemp5731,nctemp5733);
struct tree* nctemp5739= p;
struct nctempchar1 *nctemp5743;
static struct nctempchar1 nctemp5744 = {{ 2}, (char*)"[\0"};
nctemp5743=&nctemp5744;
nctempchar1* nctemp5741= nctemp5743;
int nctemp5745=CodeEs(nctemp5739,nctemp5741);
int nctemp5747= i;
int nctemp5749=CodeEd(nctemp5747);
struct tree* nctemp5751= p;
struct nctempchar1 *nctemp5755;
static struct nctempchar1 nctemp5756 = {{ 3}, (char*)"]=\0"};
nctemp5755=&nctemp5756;
nctempchar1* nctemp5753= nctemp5755;
int nctemp5757=CodeEs(nctemp5751,nctemp5753);
struct tree* nctemp5759= p;
nctempchar1* nctemp5761= dim;
int nctemp5764=CodeEs(nctemp5759,nctemp5761);
struct tree* nctemp5766= p;
struct nctempchar1 *nctemp5770;
static struct nctempchar1 nctemp5771 = {{ 4}, (char*)";\n\0"};
nctemp5770=&nctemp5771;
nctempchar1* nctemp5768= nctemp5770;
int nctemp5772=CodeEs(nctemp5766,nctemp5768);
int nctemp5781 = i + 1;
i =nctemp5781;
struct tree* nctemp5786= p;
struct tree* nctemp5788=PtreeMvsister(nctemp5786);
p =nctemp5788;
}
int nctemp5789 = (p !=0);
nctemp5714=nctemp5789;}p =top;
struct tree* nctemp5798= p;
nctempchar1* nctemp5800= pointer;
int nctemp5803=CodeEs(nctemp5798,nctemp5800);
struct tree* nctemp5805= p;
struct nctempchar1 *nctemp5809;
static struct nctempchar1 nctemp5810 = {{ 4}, (char*)"->a\0"};
nctemp5809=&nctemp5810;
nctempchar1* nctemp5807= nctemp5809;
int nctemp5811=CodeEs(nctemp5805,nctemp5807);
struct tree* nctemp5813= p;
struct nctempchar1 *nctemp5817;
static struct nctempchar1 nctemp5818 = {{ 3}, (char*)"=(\0"};
nctemp5817=&nctemp5818;
nctempchar1* nctemp5815= nctemp5817;
int nctemp5819=CodeEs(nctemp5813,nctemp5815);
struct tree* nctemp5821= p;
nctempchar1* nctemp5823= type;
int nctemp5826=CodeEs(nctemp5821,nctemp5823);
struct tree* nctemp5828= p;
struct nctempchar1 *nctemp5832;
static struct nctempchar1 nctemp5833 = {{ 4}, (char*)" *)\0"};
nctemp5832=&nctemp5833;
nctempchar1* nctemp5830= nctemp5832;
int nctemp5834=CodeEs(nctemp5828,nctemp5830);
struct tree* nctemp5836= p;
struct nctempchar1 *nctemp5840;
static struct nctempchar1 nctemp5841 = {{ 18}, (char*)"RunMalloc(sizeof(\0"};
nctemp5840=&nctemp5841;
nctempchar1* nctemp5838= nctemp5840;
int nctemp5842=CodeEs(nctemp5836,nctemp5838);
struct tree* nctemp5844= p;
nctempchar1* nctemp5846= type;
int nctemp5849=CodeEs(nctemp5844,nctemp5846);
struct tree* nctemp5851= p;
struct nctempchar1 *nctemp5855;
static struct nctempchar1 nctemp5856 = {{ 2}, (char*)")\0"};
nctemp5855=&nctemp5856;
nctempchar1* nctemp5853= nctemp5855;
int nctemp5857=CodeEs(nctemp5851,nctemp5853);
struct tree* nctemp5859= p;
struct nctempchar1 *nctemp5863;
static struct nctempchar1 nctemp5864 = {{ 2}, (char*)"*\0"};
nctemp5863=&nctemp5864;
nctempchar1* nctemp5861= nctemp5863;
int nctemp5865=CodeEs(nctemp5859,nctemp5861);
struct tree* nctemp5867= p;
nctempchar1* nctemp5869= totdim;
int nctemp5872=CodeEs(nctemp5867,nctemp5869);
struct tree* nctemp5874= p;
struct nctempchar1 *nctemp5878;
static struct nctempchar1 nctemp5879 = {{ 5}, (char*)");\n\0"};
nctemp5878=&nctemp5879;
nctempchar1* nctemp5876= nctemp5878;
int nctemp5880=CodeEs(nctemp5874,nctemp5876);
}
return pointer;
}
nctempchar1 * CodeDelete (struct tree* p)
{
nctempchar1 *tmp;
struct tree* nctemp5887= p;
struct tree* nctemp5889=PtreeMvchild(nctemp5887);
p =nctemp5889;
struct tree* nctemp5894= p;
struct tree* nctemp5896=PtreeMvchild(nctemp5894);
p =nctemp5896;
struct tree* nctemp5902= p;
nctempchar1* nctemp5904=CodeBinexpr(nctemp5902);
tmp=nctemp5904;
struct tree* nctemp5908= p;
nctempchar1* nctemp5910=PtreeGetref(nctemp5908);
nctempchar1* nctemp5906= nctemp5910;
struct nctempchar1 *nctemp5913;
static struct nctempchar1 nctemp5914 = {{ 5}, (char*)"aref\0"};
nctemp5913=&nctemp5914;
nctempchar1* nctemp5911= nctemp5913;
int nctemp5915=LibeStrcmp(nctemp5906,nctemp5911);
if(nctemp5915)
{
struct tree* nctemp5917= p;
struct nctempchar1 *nctemp5921;
static struct nctempchar1 nctemp5922 = {{ 9}, (char*)"RunFree(\0"};
nctemp5921=&nctemp5922;
nctempchar1* nctemp5919= nctemp5921;
int nctemp5923=CodeEs(nctemp5917,nctemp5919);
struct tree* nctemp5925= p;
nctempchar1* nctemp5927= tmp;
int nctemp5930=CodeEs(nctemp5925,nctemp5927);
struct tree* nctemp5932= p;
struct nctempchar1 *nctemp5936;
static struct nctempchar1 nctemp5937 = {{ 8}, (char*)"->a);\n\0"};
nctemp5936=&nctemp5937;
nctempchar1* nctemp5934= nctemp5936;
int nctemp5938=CodeEs(nctemp5932,nctemp5934);
struct tree* nctemp5940= p;
struct nctempchar1 *nctemp5944;
static struct nctempchar1 nctemp5945 = {{ 9}, (char*)"RunFree(\0"};
nctemp5944=&nctemp5945;
nctempchar1* nctemp5942= nctemp5944;
int nctemp5946=CodeEs(nctemp5940,nctemp5942);
struct tree* nctemp5948= p;
nctempchar1* nctemp5950= tmp;
int nctemp5953=CodeEs(nctemp5948,nctemp5950);
struct tree* nctemp5955= p;
struct nctempchar1 *nctemp5959;
static struct nctempchar1 nctemp5960 = {{ 5}, (char*)");\n\0"};
nctemp5959=&nctemp5960;
nctempchar1* nctemp5957= nctemp5959;
int nctemp5961=CodeEs(nctemp5955,nctemp5957);
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
nctempchar1* nctemp5969=CodeMktemp();
tempr=nctemp5969;
struct tree* nctemp5974= p;
struct tree* nctemp5976=PtreeMvchild(nctemp5974);
np =nctemp5976;
struct tree* nctemp5982= np;
nctempchar1* nctemp5984=CodeExpr(nctemp5982);
temp=nctemp5984;
struct tree* nctemp5989= np;
struct tree* nctemp5991=PtreeMvsister(nctemp5989);
sp =nctemp5991;
struct tree* nctemp5997= sp;
nctempchar1* nctemp5999=CodeExpr(nctemp5997);
index=nctemp5999;
struct tree* nctemp6001= p;
struct tree* nctemp6005= p;
nctempchar1* nctemp6007=PtreeGetype(nctemp6005);
nctempchar1* nctemp6003= nctemp6007;
int nctemp6008=CodeEs(nctemp6001,nctemp6003);
struct tree* nctemp6010= p;
struct nctempchar1 *nctemp6014;
static struct nctempchar1 nctemp6015 = {{ 2}, (char*)" \0"};
nctemp6014=&nctemp6015;
nctempchar1* nctemp6012= nctemp6014;
int nctemp6016=CodeEs(nctemp6010,nctemp6012);
struct tree* nctemp6018= p;
nctempchar1* nctemp6020= tempr;
int nctemp6023=CodeEs(nctemp6018,nctemp6020);
struct tree* nctemp6025= p;
struct nctempchar1 *nctemp6029;
static struct nctempchar1 nctemp6030 = {{ 2}, (char*)"=\0"};
nctemp6029=&nctemp6030;
nctempchar1* nctemp6027= nctemp6029;
int nctemp6031=CodeEs(nctemp6025,nctemp6027);
struct tree* nctemp6033= p;
nctempchar1* nctemp6035= temp;
int nctemp6038=CodeEs(nctemp6033,nctemp6035);
struct tree* nctemp6040= p;
struct nctempchar1 *nctemp6044;
static struct nctempchar1 nctemp6045 = {{ 4}, (char*)"->d\0"};
nctemp6044=&nctemp6045;
nctempchar1* nctemp6042= nctemp6044;
int nctemp6046=CodeEs(nctemp6040,nctemp6042);
struct tree* nctemp6048= p;
struct nctempchar1 *nctemp6052;
static struct nctempchar1 nctemp6053 = {{ 2}, (char*)"[\0"};
nctemp6052=&nctemp6053;
nctempchar1* nctemp6050= nctemp6052;
int nctemp6054=CodeEs(nctemp6048,nctemp6050);
struct tree* nctemp6056= p;
nctempchar1* nctemp6058= index;
int nctemp6061=CodeEs(nctemp6056,nctemp6058);
struct tree* nctemp6063= p;
struct nctempchar1 *nctemp6067;
static struct nctempchar1 nctemp6068 = {{ 3}, (char*)"];\0"};
nctemp6067=&nctemp6068;
nctempchar1* nctemp6065= nctemp6067;
int nctemp6069=CodeEs(nctemp6063,nctemp6065);
return tempr;
}
nctempchar1 * CodeCmplx (struct tree* p)
{
struct tree* np;
struct tree* sp;
nctempchar1 *q;
nctempchar1 *r;
nctempchar1 *tempr;
nctempchar1* nctemp6077=CodeMktemp();
tempr=nctemp6077;
struct tree* nctemp6082= p;
struct tree* nctemp6084=PtreeMvchild(nctemp6082);
np =nctemp6084;
struct tree* nctemp6089= np;
struct tree* nctemp6091=PtreeMvchild(nctemp6089);
np =nctemp6091;
struct tree* nctemp6097= np;
nctempchar1* nctemp6099=CodeExpr(nctemp6097);
q=nctemp6099;
struct tree* nctemp6104= np;
struct tree* nctemp6106=PtreeMvsister(nctemp6104);
sp =nctemp6106;
struct tree* nctemp6112= sp;
nctempchar1* nctemp6114=CodeExpr(nctemp6112);
r=nctemp6114;
struct tree* nctemp6116= p;
struct tree* nctemp6120= p;
nctempchar1* nctemp6122=PtreeGetype(nctemp6120);
nctempchar1* nctemp6118= nctemp6122;
int nctemp6123=CodeEs(nctemp6116,nctemp6118);
struct tree* nctemp6125= p;
struct nctempchar1 *nctemp6129;
static struct nctempchar1 nctemp6130 = {{ 2}, (char*)" \0"};
nctemp6129=&nctemp6130;
nctempchar1* nctemp6127= nctemp6129;
int nctemp6131=CodeEs(nctemp6125,nctemp6127);
struct tree* nctemp6133= p;
nctempchar1* nctemp6135= tempr;
int nctemp6138=CodeEs(nctemp6133,nctemp6135);
struct tree* nctemp6140= p;
struct nctempchar1 *nctemp6144;
static struct nctempchar1 nctemp6145 = {{ 3}, (char*)".r\0"};
nctemp6144=&nctemp6145;
nctempchar1* nctemp6142= nctemp6144;
int nctemp6146=CodeEs(nctemp6140,nctemp6142);
struct tree* nctemp6148= p;
struct nctempchar1 *nctemp6152;
static struct nctempchar1 nctemp6153 = {{ 3}, (char*)" =\0"};
nctemp6152=&nctemp6153;
nctempchar1* nctemp6150= nctemp6152;
int nctemp6154=CodeEs(nctemp6148,nctemp6150);
struct tree* nctemp6156= p;
nctempchar1* nctemp6158= q;
int nctemp6161=CodeEs(nctemp6156,nctemp6158);
struct tree* nctemp6163= p;
struct nctempchar1 *nctemp6167;
static struct nctempchar1 nctemp6168 = {{ 2}, (char*)";\0"};
nctemp6167=&nctemp6168;
nctempchar1* nctemp6165= nctemp6167;
int nctemp6169=CodeEs(nctemp6163,nctemp6165);
struct tree* nctemp6171= p;
struct tree* nctemp6175= p;
nctempchar1* nctemp6177=PtreeGetype(nctemp6175);
nctempchar1* nctemp6173= nctemp6177;
int nctemp6178=CodeEs(nctemp6171,nctemp6173);
struct tree* nctemp6180= p;
struct nctempchar1 *nctemp6184;
static struct nctempchar1 nctemp6185 = {{ 2}, (char*)" \0"};
nctemp6184=&nctemp6185;
nctempchar1* nctemp6182= nctemp6184;
int nctemp6186=CodeEs(nctemp6180,nctemp6182);
struct tree* nctemp6188= p;
nctempchar1* nctemp6190= tempr;
int nctemp6193=CodeEs(nctemp6188,nctemp6190);
struct tree* nctemp6195= p;
struct nctempchar1 *nctemp6199;
static struct nctempchar1 nctemp6200 = {{ 3}, (char*)".i\0"};
nctemp6199=&nctemp6200;
nctempchar1* nctemp6197= nctemp6199;
int nctemp6201=CodeEs(nctemp6195,nctemp6197);
struct tree* nctemp6203= p;
struct nctempchar1 *nctemp6207;
static struct nctempchar1 nctemp6208 = {{ 2}, (char*)"=\0"};
nctemp6207=&nctemp6208;
nctempchar1* nctemp6205= nctemp6207;
int nctemp6209=CodeEs(nctemp6203,nctemp6205);
struct tree* nctemp6211= p;
nctempchar1* nctemp6213= r;
int nctemp6216=CodeEs(nctemp6211,nctemp6213);
struct tree* nctemp6218= p;
struct nctempchar1 *nctemp6222;
static struct nctempchar1 nctemp6223 = {{ 2}, (char*)";\0"};
nctemp6222=&nctemp6223;
nctempchar1* nctemp6220= nctemp6222;
int nctemp6224=CodeEs(nctemp6218,nctemp6220);
return tempr;
}
nctempchar1 * CodeIm (struct tree* p)
{
struct tree* np;
nctempchar1 *q;
nctempchar1 *tempr;
nctempchar1* nctemp6232=CodeMktemp();
tempr=nctemp6232;
struct tree* nctemp6237= p;
struct tree* nctemp6239=PtreeMvchild(nctemp6237);
np =nctemp6239;
struct tree* nctemp6245= np;
nctempchar1* nctemp6247=CodeExpr(nctemp6245);
q=nctemp6247;
struct tree* nctemp6249= p;
struct tree* nctemp6253= p;
nctempchar1* nctemp6255=PtreeGetype(nctemp6253);
nctempchar1* nctemp6251= nctemp6255;
int nctemp6256=CodeEs(nctemp6249,nctemp6251);
struct tree* nctemp6258= p;
struct nctempchar1 *nctemp6262;
static struct nctempchar1 nctemp6263 = {{ 2}, (char*)" \0"};
nctemp6262=&nctemp6263;
nctempchar1* nctemp6260= nctemp6262;
int nctemp6264=CodeEs(nctemp6258,nctemp6260);
struct tree* nctemp6266= p;
nctempchar1* nctemp6268= tempr;
int nctemp6271=CodeEs(nctemp6266,nctemp6268);
struct tree* nctemp6273= p;
struct nctempchar1 *nctemp6277;
static struct nctempchar1 nctemp6278 = {{ 3}, (char*)" =\0"};
nctemp6277=&nctemp6278;
nctempchar1* nctemp6275= nctemp6277;
int nctemp6279=CodeEs(nctemp6273,nctemp6275);
struct tree* nctemp6281= p;
nctempchar1* nctemp6283= q;
int nctemp6286=CodeEs(nctemp6281,nctemp6283);
struct tree* nctemp6288= p;
struct nctempchar1 *nctemp6292;
static struct nctempchar1 nctemp6293 = {{ 5}, (char*)".i  \0"};
nctemp6292=&nctemp6293;
nctempchar1* nctemp6290= nctemp6292;
int nctemp6294=CodeEs(nctemp6288,nctemp6290);
struct tree* nctemp6296= p;
struct nctempchar1 *nctemp6300;
static struct nctempchar1 nctemp6301 = {{ 4}, (char*)";\n\0"};
nctemp6300=&nctemp6301;
nctempchar1* nctemp6298= nctemp6300;
int nctemp6302=CodeEs(nctemp6296,nctemp6298);
return tempr;
}
nctempchar1 * CodeRe (struct tree* p)
{
struct tree* np;
nctempchar1 *q;
nctempchar1 *tmp;
struct tree* nctemp6309= p;
struct tree* nctemp6311=PtreeMvchild(nctemp6309);
np =nctemp6311;
struct tree* nctemp6317= np;
nctempchar1* nctemp6319=CodeExpr(nctemp6317);
q=nctemp6319;
nctempchar1* nctemp6325=CodeMktemp();
tmp=nctemp6325;
struct tree* nctemp6327= p;
struct tree* nctemp6331= p;
nctempchar1* nctemp6333=PtreeGetype(nctemp6331);
nctempchar1* nctemp6329= nctemp6333;
int nctemp6334=CodeEs(nctemp6327,nctemp6329);
struct tree* nctemp6336= p;
struct nctempchar1 *nctemp6340;
static struct nctempchar1 nctemp6341 = {{ 2}, (char*)" \0"};
nctemp6340=&nctemp6341;
nctempchar1* nctemp6338= nctemp6340;
int nctemp6342=CodeEs(nctemp6336,nctemp6338);
struct tree* nctemp6344= p;
nctempchar1* nctemp6346= tmp;
int nctemp6349=CodeEs(nctemp6344,nctemp6346);
struct tree* nctemp6351= p;
struct nctempchar1 *nctemp6355;
static struct nctempchar1 nctemp6356 = {{ 3}, (char*)" =\0"};
nctemp6355=&nctemp6356;
nctempchar1* nctemp6353= nctemp6355;
int nctemp6357=CodeEs(nctemp6351,nctemp6353);
struct tree* nctemp6359= p;
nctempchar1* nctemp6361= q;
int nctemp6364=CodeEs(nctemp6359,nctemp6361);
struct tree* nctemp6366= p;
struct nctempchar1 *nctemp6370;
static struct nctempchar1 nctemp6371 = {{ 5}, (char*)".r  \0"};
nctemp6370=&nctemp6371;
nctempchar1* nctemp6368= nctemp6370;
int nctemp6372=CodeEs(nctemp6366,nctemp6368);
struct tree* nctemp6374= p;
struct nctempchar1 *nctemp6378;
static struct nctempchar1 nctemp6379 = {{ 4}, (char*)";\n\0"};
nctemp6378=&nctemp6379;
nctempchar1* nctemp6376= nctemp6378;
int nctemp6380=CodeEs(nctemp6374,nctemp6376);
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
struct tree* nctemp6389= p;
nctempchar1* nctemp6391=PtreeGetdef(nctemp6389);
nctempchar1* nctemp6387= nctemp6391;
struct symbol* nctemp6394=SymGetetp();
struct symbol* nctemp6392= nctemp6394;
struct symbol* nctemp6395=SymLookup(nctemp6387,nctemp6392);
tp =nctemp6395;
struct tree* nctemp6400= p;
struct tree* nctemp6402=PtreeMvchild(nctemp6400);
sp =nctemp6402;
int nctemp6403 = (sp !=0);
if(nctemp6403)
{
struct tree* nctemp6412= sp;
nctempchar1* nctemp6414=PtreeGetname(nctemp6412);
nctempchar1* nctemp6410= nctemp6414;
struct nctempchar1 *nctemp6417;
static struct nctempchar1 nctemp6418 = {{ 9}, (char*)"exprlist\0"};
nctemp6417=&nctemp6418;
nctempchar1* nctemp6415= nctemp6417;
int nctemp6419=LibeStrcmp(nctemp6410,nctemp6415);
int nctemp6407 = (nctemp6419 ==1);
if(nctemp6407)
{
struct tree* nctemp6425= sp;
struct tree* nctemp6427=PtreeMvchild(nctemp6425);
sp =nctemp6427;
}
}
int nctemp6428 = (sp !=0);
int nctemp6432=nctemp6428;
while(nctemp6432)
{{
nctempchar1* nctemp6438=CodeMktemp();
ntemp=nctemp6438;
struct tree* nctemp6440= sp;
nctempchar1* nctemp6442= ntemp;
int nctemp6445=PtreeSetempr(nctemp6440,nctemp6442);
struct tree* nctemp6451= sp;
nctempchar1* nctemp6453=CodeExpr(nctemp6451);
temp=nctemp6453;
struct tree* nctemp6459= sp;
nctempchar1* nctemp6461=PtreeGetref(nctemp6459);
nctempchar1* nctemp6457= nctemp6461;
struct nctempchar1 *nctemp6464;
static struct nctempchar1 nctemp6465 = {{ 5}, (char*)"aref\0"};
nctemp6464=&nctemp6465;
nctempchar1* nctemp6462= nctemp6464;
int nctemp6466=LibeStrcmp(nctemp6457,nctemp6462);
int nctemp6454 = (nctemp6466 ==1);
if(nctemp6454)
{
struct tree* nctemp6469= sp;
struct nctempchar1 *nctemp6473;
static struct nctempchar1 nctemp6474 = {{ 7}, (char*)"nctemp\0"};
nctemp6473=&nctemp6474;
nctempchar1* nctemp6471= nctemp6473;
int nctemp6475=CodeEs(nctemp6469,nctemp6471);
struct tree* nctemp6477= sp;
struct tree* nctemp6481= sp;
nctempchar1* nctemp6483=PtreeGetype(nctemp6481);
nctempchar1* nctemp6479= nctemp6483;
int nctemp6484=CodeEs(nctemp6477,nctemp6479);
struct tree* nctemp6488= sp;
int nctemp6490=PtreeGetrank(nctemp6488);
int nctemp6486= nctemp6490;
int nctemp6491=CodeEd(nctemp6486);
struct tree* nctemp6493= sp;
struct nctempchar1 *nctemp6497;
static struct nctempchar1 nctemp6498 = {{ 2}, (char*)"*\0"};
nctemp6497=&nctemp6498;
nctempchar1* nctemp6495= nctemp6497;
int nctemp6499=CodeEs(nctemp6493,nctemp6495);
}
else{
struct tree* nctemp6505= sp;
nctempchar1* nctemp6507=PtreeGetref(nctemp6505);
nctempchar1* nctemp6503= nctemp6507;
struct nctempchar1 *nctemp6510;
static struct nctempchar1 nctemp6511 = {{ 5}, (char*)"sref\0"};
nctemp6510=&nctemp6511;
nctempchar1* nctemp6508= nctemp6510;
int nctemp6512=LibeStrcmp(nctemp6503,nctemp6508);
int nctemp6500 = (nctemp6512 ==1);
if(nctemp6500)
{
struct tree* nctemp6515= sp;
struct nctempchar1 *nctemp6519;
static struct nctempchar1 nctemp6520 = {{ 8}, (char*)"struct \0"};
nctemp6519=&nctemp6520;
nctempchar1* nctemp6517= nctemp6519;
int nctemp6521=CodeEs(nctemp6515,nctemp6517);
struct tree* nctemp6523= sp;
struct tree* nctemp6527= sp;
nctempchar1* nctemp6529=PtreeGetype(nctemp6527);
nctempchar1* nctemp6525= nctemp6529;
int nctemp6530=CodeEs(nctemp6523,nctemp6525);
struct tree* nctemp6532= sp;
struct nctempchar1 *nctemp6536;
static struct nctempchar1 nctemp6537 = {{ 2}, (char*)"*\0"};
nctemp6536=&nctemp6537;
nctempchar1* nctemp6534= nctemp6536;
int nctemp6538=CodeEs(nctemp6532,nctemp6534);
}
else{
struct tree* nctemp6540= sp;
struct tree* nctemp6544= sp;
nctempchar1* nctemp6546=PtreeGetype(nctemp6544);
nctempchar1* nctemp6542= nctemp6546;
int nctemp6547=CodeEs(nctemp6540,nctemp6542);
}
}
struct tree* nctemp6549= sp;
struct nctempchar1 *nctemp6553;
static struct nctempchar1 nctemp6554 = {{ 2}, (char*)" \0"};
nctemp6553=&nctemp6554;
nctempchar1* nctemp6551= nctemp6553;
int nctemp6555=CodeEs(nctemp6549,nctemp6551);
struct tree* nctemp6557= sp;
nctempchar1* nctemp6559= ntemp;
int nctemp6562=CodeEs(nctemp6557,nctemp6559);
struct tree* nctemp6564= sp;
struct nctempchar1 *nctemp6568;
static struct nctempchar1 nctemp6569 = {{ 3}, (char*)"= \0"};
nctemp6568=&nctemp6569;
nctempchar1* nctemp6566= nctemp6568;
int nctemp6570=CodeEs(nctemp6564,nctemp6566);
struct tree* nctemp6572= sp;
nctempchar1* nctemp6574= temp;
int nctemp6577=CodeEs(nctemp6572,nctemp6574);
struct tree* nctemp6579= sp;
struct nctempchar1 *nctemp6583;
static struct nctempchar1 nctemp6584 = {{ 4}, (char*)";\n\0"};
nctemp6583=&nctemp6584;
nctempchar1* nctemp6581= nctemp6583;
int nctemp6585=CodeEs(nctemp6579,nctemp6581);
struct tree* nctemp6590= sp;
struct tree* nctemp6592=PtreeMvsister(nctemp6590);
sp =nctemp6592;
}
int nctemp6593 = (sp !=0);
nctemp6432=nctemp6593;}nctempchar1* nctemp6602=CodeMktemp();
ntemp=nctemp6602;
struct tree* nctemp6608= p;
nctempchar1* nctemp6610=PtreeGetref(nctemp6608);
nctempchar1* nctemp6606= nctemp6610;
struct nctempchar1 *nctemp6613;
static struct nctempchar1 nctemp6614 = {{ 5}, (char*)"aref\0"};
nctemp6613=&nctemp6614;
nctempchar1* nctemp6611= nctemp6613;
int nctemp6615=LibeStrcmp(nctemp6606,nctemp6611);
int nctemp6603 = (nctemp6615 ==1);
if(nctemp6603)
{
struct tree* nctemp6618= p;
struct nctempchar1 *nctemp6622;
static struct nctempchar1 nctemp6623 = {{ 7}, (char*)"nctemp\0"};
nctemp6622=&nctemp6623;
nctempchar1* nctemp6620= nctemp6622;
int nctemp6624=CodeEs(nctemp6618,nctemp6620);
struct tree* nctemp6626= p;
struct tree* nctemp6630= p;
nctempchar1* nctemp6632=PtreeGetype(nctemp6630);
nctempchar1* nctemp6628= nctemp6632;
int nctemp6633=CodeEs(nctemp6626,nctemp6628);
struct tree* nctemp6637= p;
int nctemp6639=PtreeGetrank(nctemp6637);
int nctemp6635= nctemp6639;
int nctemp6640=CodeEd(nctemp6635);
struct tree* nctemp6642= p;
struct nctempchar1 *nctemp6646;
static struct nctempchar1 nctemp6647 = {{ 2}, (char*)"*\0"};
nctemp6646=&nctemp6647;
nctempchar1* nctemp6644= nctemp6646;
int nctemp6648=CodeEs(nctemp6642,nctemp6644);
}
else{
struct tree* nctemp6654= p;
nctempchar1* nctemp6656=PtreeGetref(nctemp6654);
nctempchar1* nctemp6652= nctemp6656;
struct nctempchar1 *nctemp6659;
static struct nctempchar1 nctemp6660 = {{ 5}, (char*)"sref\0"};
nctemp6659=&nctemp6660;
nctempchar1* nctemp6657= nctemp6659;
int nctemp6661=LibeStrcmp(nctemp6652,nctemp6657);
int nctemp6649 = (nctemp6661 ==1);
if(nctemp6649)
{
struct tree* nctemp6664= p;
struct nctempchar1 *nctemp6668;
static struct nctempchar1 nctemp6669 = {{ 8}, (char*)"struct \0"};
nctemp6668=&nctemp6669;
nctempchar1* nctemp6666= nctemp6668;
int nctemp6670=CodeEs(nctemp6664,nctemp6666);
struct tree* nctemp6672= p;
struct tree* nctemp6676= p;
nctempchar1* nctemp6678=PtreeGetype(nctemp6676);
nctempchar1* nctemp6674= nctemp6678;
int nctemp6679=CodeEs(nctemp6672,nctemp6674);
struct tree* nctemp6681= p;
struct nctempchar1 *nctemp6685;
static struct nctempchar1 nctemp6686 = {{ 2}, (char*)"*\0"};
nctemp6685=&nctemp6686;
nctempchar1* nctemp6683= nctemp6685;
int nctemp6687=CodeEs(nctemp6681,nctemp6683);
}
else{
struct tree* nctemp6689= p;
struct tree* nctemp6693= p;
nctempchar1* nctemp6695=PtreeGetype(nctemp6693);
nctempchar1* nctemp6691= nctemp6695;
int nctemp6696=CodeEs(nctemp6689,nctemp6691);
}
}
struct tree* nctemp6698= p;
struct nctempchar1 *nctemp6702;
static struct nctempchar1 nctemp6703 = {{ 2}, (char*)" \0"};
nctemp6702=&nctemp6703;
nctempchar1* nctemp6700= nctemp6702;
int nctemp6704=CodeEs(nctemp6698,nctemp6700);
struct tree* nctemp6706= p;
nctempchar1* nctemp6708= ntemp;
int nctemp6711=CodeEs(nctemp6706,nctemp6708);
struct tree* nctemp6713= p;
struct nctempchar1 *nctemp6717;
static struct nctempchar1 nctemp6718 = {{ 2}, (char*)"=\0"};
nctemp6717=&nctemp6718;
nctempchar1* nctemp6715= nctemp6717;
int nctemp6719=CodeEs(nctemp6713,nctemp6715);
struct tree* nctemp6721= p;
struct symbol* nctemp6725= tp;
nctempchar1* nctemp6727=SymGetname(nctemp6725);
nctempchar1* nctemp6723= nctemp6727;
int nctemp6728=CodeEs(nctemp6721,nctemp6723);
struct tree* nctemp6730= p;
struct nctempchar1 *nctemp6734;
static struct nctempchar1 nctemp6735 = {{ 2}, (char*)"(\0"};
nctemp6734=&nctemp6735;
nctempchar1* nctemp6732= nctemp6734;
int nctemp6736=CodeEs(nctemp6730,nctemp6732);
struct tree* nctemp6741= p;
struct tree* nctemp6743=PtreeMvchild(nctemp6741);
sp =nctemp6743;
int nctemp6744 = (sp !=0);
if(nctemp6744)
{
struct tree* nctemp6752= sp;
struct tree* nctemp6754=PtreeMvchild(nctemp6752);
sp =nctemp6754;
}
int nctemp6755 = (sp !=0);
int nctemp6759=nctemp6755;
while(nctemp6759)
{{
struct tree* nctemp6761= p;
struct tree* nctemp6765= sp;
nctempchar1* nctemp6767=PtreeGetempr(nctemp6765);
nctempchar1* nctemp6763= nctemp6767;
int nctemp6768=CodeEs(nctemp6761,nctemp6763);
struct tree* nctemp6776= sp;
struct tree* nctemp6778=PtreeMvsister(nctemp6776);
sp =nctemp6778;
int nctemp6769 = (sp !=0);
if(nctemp6769)
{
struct tree* nctemp6781= p;
struct nctempchar1 *nctemp6785;
static struct nctempchar1 nctemp6786 = {{ 2}, (char*)",\0"};
nctemp6785=&nctemp6786;
nctempchar1* nctemp6783= nctemp6785;
int nctemp6787=CodeEs(nctemp6781,nctemp6783);
}
int nctemp6796 = noargs + 1;
noargs =nctemp6796;
}
int nctemp6797 = (sp !=0);
nctemp6759=nctemp6797;}struct tree* nctemp6802= p;
struct nctempchar1 *nctemp6806;
static struct nctempchar1 nctemp6807 = {{ 5}, (char*)");\n\0"};
nctemp6806=&nctemp6807;
nctempchar1* nctemp6804= nctemp6806;
int nctemp6808=CodeEs(nctemp6802,nctemp6804);
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
nctempchar1* nctemp6816=CodeMktemp();
pointer=nctemp6816;
nctempchar1* nctemp6822=CodeMktemp();
descr=nctemp6822;
struct tree* nctemp6828= p;
nctempchar1* nctemp6830=PtreeGetype(nctemp6828);
type=nctemp6830;
struct tree* nctemp6836= p;
nctempchar1* nctemp6838=PtreeGetname(nctemp6836);
nctempchar1* nctemp6834= nctemp6838;
struct nctempchar1 *nctemp6841;
static struct nctempchar1 nctemp6842 = {{ 5}, (char*)"cast\0"};
nctemp6841=&nctemp6842;
nctempchar1* nctemp6839= nctemp6841;
int nctemp6843=LibeStrcmp(nctemp6834,nctemp6839);
int nctemp6831 = (nctemp6843 ==1);
if(nctemp6831)
{
struct tree* nctemp6849= p;
struct tree* nctemp6851=PtreeMvchild(nctemp6849);
np =nctemp6851;
struct tree* nctemp6856= np;
struct tree* nctemp6858=PtreeMvsister(nctemp6856);
sp =nctemp6858;
struct tree* nctemp6864= sp;
nctempchar1* nctemp6866=CodeExpr(nctemp6864);
expr=nctemp6866;
struct tree* nctemp6872= np;
nctempchar1* nctemp6874=PtreeGetref(nctemp6872);
nctempchar1* nctemp6870= nctemp6874;
struct nctempchar1 *nctemp6877;
static struct nctempchar1 nctemp6878 = {{ 5}, (char*)"sref\0"};
nctemp6877=&nctemp6878;
nctempchar1* nctemp6875= nctemp6877;
int nctemp6879=LibeStrcmp(nctemp6870,nctemp6875);
int nctemp6867 = (nctemp6879 ==1);
if(nctemp6867)
{
nctempchar1* nctemp6886=CodeMktemp();
tmp=nctemp6886;
struct tree* nctemp6888= p;
nctempchar1* nctemp6890= type;
int nctemp6893=CodeEs(nctemp6888,nctemp6890);
struct tree* nctemp6895= p;
struct nctempchar1 *nctemp6899;
static struct nctempchar1 nctemp6900 = {{ 2}, (char*)" \0"};
nctemp6899=&nctemp6900;
nctempchar1* nctemp6897= nctemp6899;
int nctemp6901=CodeEs(nctemp6895,nctemp6897);
struct tree* nctemp6903= p;
nctempchar1* nctemp6905= tmp;
int nctemp6908=CodeEs(nctemp6903,nctemp6905);
struct tree* nctemp6910= p;
struct nctempchar1 *nctemp6914;
static struct nctempchar1 nctemp6915 = {{ 2}, (char*)"=\0"};
nctemp6914=&nctemp6915;
nctempchar1* nctemp6912= nctemp6914;
int nctemp6916=CodeEs(nctemp6910,nctemp6912);
struct tree* nctemp6918= p;
struct nctempchar1 *nctemp6922;
static struct nctempchar1 nctemp6923 = {{ 9}, (char*)"(struct \0"};
nctemp6922=&nctemp6923;
nctempchar1* nctemp6920= nctemp6922;
int nctemp6924=CodeEs(nctemp6918,nctemp6920);
struct tree* nctemp6926= p;
struct tree* nctemp6930= np;
nctempchar1* nctemp6932=PtreeGetype(nctemp6930);
nctempchar1* nctemp6928= nctemp6932;
int nctemp6933=CodeEs(nctemp6926,nctemp6928);
struct tree* nctemp6935= p;
struct nctempchar1 *nctemp6939;
static struct nctempchar1 nctemp6940 = {{ 4}, (char*)"*)(\0"};
nctemp6939=&nctemp6940;
nctempchar1* nctemp6937= nctemp6939;
int nctemp6941=CodeEs(nctemp6935,nctemp6937);
struct tree* nctemp6943= p;
nctempchar1* nctemp6945= expr;
int nctemp6948=CodeEs(nctemp6943,nctemp6945);
struct tree* nctemp6950= p;
struct nctempchar1 *nctemp6954;
static struct nctempchar1 nctemp6955 = {{ 5}, (char*)");\n\0"};
nctemp6954=&nctemp6955;
nctempchar1* nctemp6952= nctemp6954;
int nctemp6956=CodeEs(nctemp6950,nctemp6952);
}
else{
struct tree* nctemp6962= np;
nctempchar1* nctemp6964=PtreeGetref(nctemp6962);
nctempchar1* nctemp6960= nctemp6964;
struct nctempchar1 *nctemp6967;
static struct nctempchar1 nctemp6968 = {{ 5}, (char*)"aref\0"};
nctemp6967=&nctemp6968;
nctempchar1* nctemp6965= nctemp6967;
int nctemp6969=LibeStrcmp(nctemp6960,nctemp6965);
int nctemp6957 = (nctemp6969 ==1);
if(nctemp6957)
{
struct tree* nctemp6975= np;
struct tree* nctemp6977=PtreeMvchild(nctemp6975);
np =nctemp6977;
struct tree* nctemp6982= np;
struct tree* nctemp6984=PtreeMvchild(nctemp6982);
np =nctemp6984;
struct tree* nctemp6989= np;
struct tree* nctemp6991=PtreeMvchild(nctemp6989);
np =nctemp6991;
struct tree* nctemp6996= np;
struct tree* nctemp6998=PtreeMvchild(nctemp6996);
np =nctemp6998;
tp =np;
rank =1;
struct tree* nctemp7014= np;
struct tree* nctemp7016=PtreeMvsister(nctemp7014);
np =nctemp7016;
int nctemp7007 = (np !=0);
int nctemp7018=nctemp7007;
while(nctemp7018)
{{
int nctemp7027 = rank + 1;
rank =nctemp7027;
}
struct tree* nctemp7035= np;
struct tree* nctemp7037=PtreeMvsister(nctemp7035);
np =nctemp7037;
int nctemp7028 = (np !=0);
nctemp7018=nctemp7028;}int nctemp7039 = (rank > 4);
if(nctemp7039)
{
struct nctempchar1 *nctemp7046;
static struct nctempchar1 nctemp7047 = {{ 29}, (char*)"Array dimension is too large\0"};
nctemp7046=&nctemp7047;
nctempchar1* nctemp7044= nctemp7046;
int nctemp7048=CodeError(nctemp7044);
}
p =tp;
struct tree* nctemp7054= p;
struct nctempchar1 *nctemp7058;
static struct nctempchar1 nctemp7059 = {{ 7}, (char*)"nctemp\0"};
nctemp7058=&nctemp7059;
nctempchar1* nctemp7056= nctemp7058;
int nctemp7060=CodeEs(nctemp7054,nctemp7056);
struct tree* nctemp7062= p;
nctempchar1* nctemp7064= type;
int nctemp7067=CodeEs(nctemp7062,nctemp7064);
int nctemp7069= rank;
int nctemp7071=CodeEd(nctemp7069);
struct tree* nctemp7073= p;
struct nctempchar1 *nctemp7077;
static struct nctempchar1 nctemp7078 = {{ 2}, (char*)" \0"};
nctemp7077=&nctemp7078;
nctempchar1* nctemp7075= nctemp7077;
int nctemp7079=CodeEs(nctemp7073,nctemp7075);
struct tree* nctemp7081= sp;
nctempchar1* nctemp7083= descr;
int nctemp7086=CodeEs(nctemp7081,nctemp7083);
struct tree* nctemp7088= sp;
struct nctempchar1 *nctemp7092;
static struct nctempchar1 nctemp7093 = {{ 4}, (char*)";\n\0"};
nctemp7092=&nctemp7093;
nctempchar1* nctemp7090= nctemp7092;
int nctemp7094=CodeEs(nctemp7088,nctemp7090);
struct tree* nctemp7096= p;
struct nctempchar1 *nctemp7100;
static struct nctempchar1 nctemp7101 = {{ 7}, (char*)"nctemp\0"};
nctemp7100=&nctemp7101;
nctempchar1* nctemp7098= nctemp7100;
int nctemp7102=CodeEs(nctemp7096,nctemp7098);
struct tree* nctemp7104= p;
nctempchar1* nctemp7106= type;
int nctemp7109=CodeEs(nctemp7104,nctemp7106);
int nctemp7111= rank;
int nctemp7113=CodeEd(nctemp7111);
struct tree* nctemp7115= p;
struct nctempchar1 *nctemp7119;
static struct nctempchar1 nctemp7120 = {{ 3}, (char*)" *\0"};
nctemp7119=&nctemp7120;
nctempchar1* nctemp7117= nctemp7119;
int nctemp7121=CodeEs(nctemp7115,nctemp7117);
struct tree* nctemp7123= sp;
nctempchar1* nctemp7125= pointer;
int nctemp7128=CodeEs(nctemp7123,nctemp7125);
struct tree* nctemp7130= p;
struct nctempchar1 *nctemp7134;
static struct nctempchar1 nctemp7135 = {{ 4}, (char*)";\n\0"};
nctemp7134=&nctemp7135;
nctempchar1* nctemp7132= nctemp7134;
int nctemp7136=CodeEs(nctemp7130,nctemp7132);
struct tree* nctemp7138= sp;
nctempchar1* nctemp7140= descr;
int nctemp7143=CodeEs(nctemp7138,nctemp7140);
struct tree* nctemp7145= sp;
struct nctempchar1 *nctemp7149;
static struct nctempchar1 nctemp7150 = {{ 2}, (char*)"=\0"};
nctemp7149=&nctemp7150;
nctempchar1* nctemp7147= nctemp7149;
int nctemp7151=CodeEs(nctemp7145,nctemp7147);
struct tree* nctemp7153= sp;
struct nctempchar1 *nctemp7157;
static struct nctempchar1 nctemp7158 = {{ 3}, (char*)"*(\0"};
nctemp7157=&nctemp7158;
nctempchar1* nctemp7155= nctemp7157;
int nctemp7159=CodeEs(nctemp7153,nctemp7155);
struct tree* nctemp7161= p;
struct nctempchar1 *nctemp7165;
static struct nctempchar1 nctemp7166 = {{ 7}, (char*)"nctemp\0"};
nctemp7165=&nctemp7166;
nctempchar1* nctemp7163= nctemp7165;
int nctemp7167=CodeEs(nctemp7161,nctemp7163);
struct tree* nctemp7169= sp;
nctempchar1* nctemp7171= type;
int nctemp7174=CodeEs(nctemp7169,nctemp7171);
int nctemp7176= rank;
int nctemp7178=CodeEd(nctemp7176);
struct tree* nctemp7180= sp;
struct nctempchar1 *nctemp7184;
static struct nctempchar1 nctemp7185 = {{ 4}, (char*)"*)(\0"};
nctemp7184=&nctemp7185;
nctempchar1* nctemp7182= nctemp7184;
int nctemp7186=CodeEs(nctemp7180,nctemp7182);
struct tree* nctemp7188= sp;
nctempchar1* nctemp7190= expr;
int nctemp7193=CodeEs(nctemp7188,nctemp7190);
struct tree* nctemp7195= sp;
struct nctempchar1 *nctemp7199;
static struct nctempchar1 nctemp7200 = {{ 5}, (char*)");\n\0"};
nctemp7199=&nctemp7200;
nctempchar1* nctemp7197= nctemp7199;
int nctemp7201=CodeEs(nctemp7195,nctemp7197);
p =tp;
i =0;
int nctemp7210 = (p !=0);
int nctemp7214=nctemp7210;
while(nctemp7214)
{{
struct tree* nctemp7220= p;
nctempchar1* nctemp7222=CodeExpr(nctemp7220);
dim=nctemp7222;
struct tree* nctemp7224= sp;
nctempchar1* nctemp7226= descr;
int nctemp7229=CodeEs(nctemp7224,nctemp7226);
struct tree* nctemp7231= sp;
struct nctempchar1 *nctemp7235;
static struct nctempchar1 nctemp7236 = {{ 3}, (char*)".d\0"};
nctemp7235=&nctemp7236;
nctempchar1* nctemp7233= nctemp7235;
int nctemp7237=CodeEs(nctemp7231,nctemp7233);
struct tree* nctemp7239= sp;
struct nctempchar1 *nctemp7243;
static struct nctempchar1 nctemp7244 = {{ 2}, (char*)"[\0"};
nctemp7243=&nctemp7244;
nctempchar1* nctemp7241= nctemp7243;
int nctemp7245=CodeEs(nctemp7239,nctemp7241);
int nctemp7247= i;
int nctemp7249=CodeEd(nctemp7247);
struct tree* nctemp7251= sp;
struct nctempchar1 *nctemp7255;
static struct nctempchar1 nctemp7256 = {{ 3}, (char*)"]=\0"};
nctemp7255=&nctemp7256;
nctempchar1* nctemp7253= nctemp7255;
int nctemp7257=CodeEs(nctemp7251,nctemp7253);
struct tree* nctemp7259= sp;
nctempchar1* nctemp7261= dim;
int nctemp7264=CodeEs(nctemp7259,nctemp7261);
struct tree* nctemp7266= sp;
struct nctempchar1 *nctemp7270;
static struct nctempchar1 nctemp7271 = {{ 4}, (char*)";\n\0"};
nctemp7270=&nctemp7271;
nctempchar1* nctemp7268= nctemp7270;
int nctemp7272=CodeEs(nctemp7266,nctemp7268);
int nctemp7281 = i + 1;
i =nctemp7281;
struct tree* nctemp7286= p;
struct tree* nctemp7288=PtreeMvsister(nctemp7286);
p =nctemp7288;
}
int nctemp7289 = (p !=0);
nctemp7214=nctemp7289;}struct tree* nctemp7294= sp;
nctempchar1* nctemp7296= pointer;
int nctemp7299=CodeEs(nctemp7294,nctemp7296);
struct tree* nctemp7301= sp;
struct nctempchar1 *nctemp7305;
static struct nctempchar1 nctemp7306 = {{ 3}, (char*)"=&\0"};
nctemp7305=&nctemp7306;
nctempchar1* nctemp7303= nctemp7305;
int nctemp7307=CodeEs(nctemp7301,nctemp7303);
struct tree* nctemp7309= sp;
nctempchar1* nctemp7311= descr;
int nctemp7314=CodeEs(nctemp7309,nctemp7311);
struct tree* nctemp7316= sp;
struct nctempchar1 *nctemp7320;
static struct nctempchar1 nctemp7321 = {{ 4}, (char*)";\n\0"};
nctemp7320=&nctemp7321;
nctempchar1* nctemp7318= nctemp7320;
int nctemp7322=CodeEs(nctemp7316,nctemp7318);
}
else{
struct tree* nctemp7324= p;
nctempchar1* nctemp7326= type;
int nctemp7329=CodeEs(nctemp7324,nctemp7326);
struct tree* nctemp7331= p;
struct nctempchar1 *nctemp7335;
static struct nctempchar1 nctemp7336 = {{ 2}, (char*)" \0"};
nctemp7335=&nctemp7336;
nctempchar1* nctemp7333= nctemp7335;
int nctemp7337=CodeEs(nctemp7331,nctemp7333);
struct tree* nctemp7339= p;
nctempchar1* nctemp7341= pointer;
int nctemp7344=CodeEs(nctemp7339,nctemp7341);
struct tree* nctemp7346= p;
struct nctempchar1 *nctemp7350;
static struct nctempchar1 nctemp7351 = {{ 2}, (char*)"=\0"};
nctemp7350=&nctemp7351;
nctempchar1* nctemp7348= nctemp7350;
int nctemp7352=CodeEs(nctemp7346,nctemp7348);
struct tree* nctemp7354= p;
struct nctempchar1 *nctemp7358;
static struct nctempchar1 nctemp7359 = {{ 2}, (char*)"(\0"};
nctemp7358=&nctemp7359;
nctempchar1* nctemp7356= nctemp7358;
int nctemp7360=CodeEs(nctemp7354,nctemp7356);
struct tree* nctemp7362= p;
struct tree* nctemp7366= np;
nctempchar1* nctemp7368=PtreeGetype(nctemp7366);
nctempchar1* nctemp7364= nctemp7368;
int nctemp7369=CodeEs(nctemp7362,nctemp7364);
struct tree* nctemp7371= p;
struct nctempchar1 *nctemp7375;
static struct nctempchar1 nctemp7376 = {{ 3}, (char*)")(\0"};
nctemp7375=&nctemp7376;
nctempchar1* nctemp7373= nctemp7375;
int nctemp7377=CodeEs(nctemp7371,nctemp7373);
struct tree* nctemp7379= p;
nctempchar1* nctemp7381= expr;
int nctemp7384=CodeEs(nctemp7379,nctemp7381);
struct tree* nctemp7386= p;
struct nctempchar1 *nctemp7390;
static struct nctempchar1 nctemp7391 = {{ 5}, (char*)");\n\0"};
nctemp7390=&nctemp7391;
nctempchar1* nctemp7388= nctemp7390;
int nctemp7392=CodeEs(nctemp7386,nctemp7388);
}
}
}
return pointer;
}
nctempchar1 * CodePrimexpr (struct tree* p)
{
struct tree* nctemp7400= p;
nctempchar1* nctemp7402=PtreeGetname(nctemp7400);
nctempchar1* nctemp7398= nctemp7402;
struct nctempchar1 *nctemp7405;
static struct nctempchar1 nctemp7406 = {{ 11}, (char*)"identifier\0"};
nctemp7405=&nctemp7406;
nctempchar1* nctemp7403= nctemp7405;
int nctemp7407=LibeStrcmp(nctemp7398,nctemp7403);
int nctemp7395 = (nctemp7407 ==1);
if(nctemp7395)
{
struct tree* nctemp7410= p;
nctempchar1* nctemp7412=CodeIdent(nctemp7410);
return nctemp7412;
}
else{
struct tree* nctemp7418= p;
nctempchar1* nctemp7420=PtreeGetname(nctemp7418);
nctempchar1* nctemp7416= nctemp7420;
struct nctempchar1 *nctemp7423;
static struct nctempchar1 nctemp7424 = {{ 4}, (char*)"new\0"};
nctemp7423=&nctemp7424;
nctempchar1* nctemp7421= nctemp7423;
int nctemp7425=LibeStrcmp(nctemp7416,nctemp7421);
int nctemp7413 = (nctemp7425 ==1);
if(nctemp7413)
{
struct tree* nctemp7428= p;
nctempchar1* nctemp7430=CodeNew(nctemp7428);
return nctemp7430;
}
else{
struct tree* nctemp7436= p;
nctempchar1* nctemp7438=PtreeGetname(nctemp7436);
nctempchar1* nctemp7434= nctemp7438;
struct nctempchar1 *nctemp7441;
static struct nctempchar1 nctemp7442 = {{ 7}, (char*)"delete\0"};
nctemp7441=&nctemp7442;
nctempchar1* nctemp7439= nctemp7441;
int nctemp7443=LibeStrcmp(nctemp7434,nctemp7439);
int nctemp7431 = (nctemp7443 ==1);
if(nctemp7431)
{
struct tree* nctemp7446= p;
nctempchar1* nctemp7448=CodeDelete(nctemp7446);
return nctemp7448;
}
else{
struct tree* nctemp7454= p;
nctempchar1* nctemp7456=PtreeGetname(nctemp7454);
nctempchar1* nctemp7452= nctemp7456;
struct nctempchar1 *nctemp7459;
static struct nctempchar1 nctemp7460 = {{ 4}, (char*)"len\0"};
nctemp7459=&nctemp7460;
nctempchar1* nctemp7457= nctemp7459;
int nctemp7461=LibeStrcmp(nctemp7452,nctemp7457);
int nctemp7449 = (nctemp7461 ==1);
if(nctemp7449)
{
struct tree* nctemp7464= p;
nctempchar1* nctemp7466=CodeLen(nctemp7464);
return nctemp7466;
}
else{
struct tree* nctemp7472= p;
nctempchar1* nctemp7474=PtreeGetname(nctemp7472);
nctempchar1* nctemp7470= nctemp7474;
struct nctempchar1 *nctemp7477;
static struct nctempchar1 nctemp7478 = {{ 6}, (char*)"cmplx\0"};
nctemp7477=&nctemp7478;
nctempchar1* nctemp7475= nctemp7477;
int nctemp7479=LibeStrcmp(nctemp7470,nctemp7475);
int nctemp7467 = (nctemp7479 ==1);
if(nctemp7467)
{
struct tree* nctemp7482= p;
nctempchar1* nctemp7484=CodeCmplx(nctemp7482);
return nctemp7484;
}
else{
struct tree* nctemp7490= p;
nctempchar1* nctemp7492=PtreeGetname(nctemp7490);
nctempchar1* nctemp7488= nctemp7492;
struct nctempchar1 *nctemp7495;
static struct nctempchar1 nctemp7496 = {{ 3}, (char*)"im\0"};
nctemp7495=&nctemp7496;
nctempchar1* nctemp7493= nctemp7495;
int nctemp7497=LibeStrcmp(nctemp7488,nctemp7493);
int nctemp7485 = (nctemp7497 ==1);
if(nctemp7485)
{
struct tree* nctemp7500= p;
nctempchar1* nctemp7502=CodeIm(nctemp7500);
return nctemp7502;
}
else{
struct tree* nctemp7508= p;
nctempchar1* nctemp7510=PtreeGetname(nctemp7508);
nctempchar1* nctemp7506= nctemp7510;
struct nctempchar1 *nctemp7513;
static struct nctempchar1 nctemp7514 = {{ 3}, (char*)"re\0"};
nctemp7513=&nctemp7514;
nctempchar1* nctemp7511= nctemp7513;
int nctemp7515=LibeStrcmp(nctemp7506,nctemp7511);
int nctemp7503 = (nctemp7515 ==1);
if(nctemp7503)
{
struct tree* nctemp7518= p;
nctempchar1* nctemp7520=CodeRe(nctemp7518);
return nctemp7520;
}
else{
struct tree* nctemp7526= p;
nctempchar1* nctemp7528=PtreeGetname(nctemp7526);
nctempchar1* nctemp7524= nctemp7528;
struct nctempchar1 *nctemp7531;
static struct nctempchar1 nctemp7532 = {{ 6}, (char*)"fcall\0"};
nctemp7531=&nctemp7532;
nctempchar1* nctemp7529= nctemp7531;
int nctemp7533=LibeStrcmp(nctemp7524,nctemp7529);
int nctemp7521 = (nctemp7533 ==1);
if(nctemp7521)
{
struct tree* nctemp7536= p;
nctempchar1* nctemp7538=CodeFcall(nctemp7536);
return nctemp7538;
}
else{
struct tree* nctemp7544= p;
nctempchar1* nctemp7546=PtreeGetname(nctemp7544);
nctempchar1* nctemp7542= nctemp7546;
struct nctempchar1 *nctemp7549;
static struct nctempchar1 nctemp7550 = {{ 5}, (char*)"cast\0"};
nctemp7549=&nctemp7550;
nctempchar1* nctemp7547= nctemp7549;
int nctemp7551=LibeStrcmp(nctemp7542,nctemp7547);
int nctemp7539 = (nctemp7551 ==1);
if(nctemp7539)
{
struct tree* nctemp7554= p;
nctempchar1* nctemp7556=CodeCast(nctemp7554);
return nctemp7556;
}
else{
struct tree* nctemp7562= p;
nctempchar1* nctemp7564=PtreeGetname(nctemp7562);
nctempchar1* nctemp7560= nctemp7564;
struct nctempchar1 *nctemp7567;
static struct nctempchar1 nctemp7568 = {{ 10}, (char*)"iconstant\0"};
nctemp7567=&nctemp7568;
nctempchar1* nctemp7565= nctemp7567;
int nctemp7569=LibeStrcmp(nctemp7560,nctemp7565);
int nctemp7557 = (nctemp7569 ==1);
if(nctemp7557)
{
struct tree* nctemp7572= p;
nctempchar1* nctemp7574=PtreeGetdef(nctemp7572);
return nctemp7574;
}
else{
struct tree* nctemp7580= p;
nctempchar1* nctemp7582=PtreeGetname(nctemp7580);
nctempchar1* nctemp7578= nctemp7582;
struct nctempchar1 *nctemp7585;
static struct nctempchar1 nctemp7586 = {{ 10}, (char*)"rconstant\0"};
nctemp7585=&nctemp7586;
nctempchar1* nctemp7583= nctemp7585;
int nctemp7587=LibeStrcmp(nctemp7578,nctemp7583);
int nctemp7575 = (nctemp7587 ==1);
if(nctemp7575)
{
struct tree* nctemp7590= p;
nctempchar1* nctemp7592=PtreeGetdef(nctemp7590);
return nctemp7592;
}
else{
struct tree* nctemp7598= p;
nctempchar1* nctemp7600=PtreeGetname(nctemp7598);
nctempchar1* nctemp7596= nctemp7600;
struct nctempchar1 *nctemp7603;
static struct nctempchar1 nctemp7604 = {{ 10}, (char*)"sconstant\0"};
nctemp7603=&nctemp7604;
nctempchar1* nctemp7601= nctemp7603;
int nctemp7605=LibeStrcmp(nctemp7596,nctemp7601);
int nctemp7593 = (nctemp7605 ==1);
if(nctemp7593)
{
struct tree* nctemp7608= p;
nctempchar1* nctemp7610=CodeSconstant(nctemp7608);
return nctemp7610;
}
else{
struct tree* nctemp7612= p;
nctempchar1* nctemp7614=CodeBinexpr(nctemp7612);
return nctemp7614;
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
nctempchar1* nctemp7620=CodeMktemp();
tempr=nctemp7620;
struct tree* nctemp7626= p;
nctempchar1* nctemp7628=PtreeGetname(nctemp7626);
nctempchar1* nctemp7624= nctemp7628;
struct nctempchar1 *nctemp7631;
static struct nctempchar1 nctemp7632 = {{ 7}, (char*)"unexpr\0"};
nctemp7631=&nctemp7632;
nctempchar1* nctemp7629= nctemp7631;
int nctemp7633=LibeStrcmp(nctemp7624,nctemp7629);
int nctemp7621 = (nctemp7633 ==1);
if(nctemp7621)
{
struct tree* nctemp7640= p;
nctempchar1* nctemp7642=PtreeGetype(nctemp7640);
nctempchar1* nctemp7638= nctemp7642;
struct nctempchar1 *nctemp7645;
static struct nctempchar1 nctemp7646 = {{ 8}, (char*)"complex\0"};
nctemp7645=&nctemp7646;
nctempchar1* nctemp7643= nctemp7645;
int nctemp7647=LibeStrcmp(nctemp7638,nctemp7643);
int nctemp7635 = (nctemp7647 ==1);
if(nctemp7635)
{
struct tree* nctemp7656= p;
struct tree* nctemp7658=PtreeMvchild(nctemp7656);
struct tree* nctemp7654= nctemp7658;
nctempchar1* nctemp7659=CodePrimexpr(nctemp7654);
tmp=nctemp7659;
struct tree* nctemp7661= p;
struct nctempchar1 *nctemp7665;
static struct nctempchar1 nctemp7666 = {{ 4}, (char*)";\n\0"};
nctemp7665=&nctemp7666;
nctempchar1* nctemp7663= nctemp7665;
int nctemp7667=CodeEs(nctemp7661,nctemp7663);
struct tree* nctemp7669= p;
nctempchar1* nctemp7671= tempr;
int nctemp7674=CodeEs(nctemp7669,nctemp7671);
struct tree* nctemp7676= p;
struct nctempchar1 *nctemp7680;
static struct nctempchar1 nctemp7681 = {{ 3}, (char*)".r\0"};
nctemp7680=&nctemp7681;
nctempchar1* nctemp7678= nctemp7680;
int nctemp7682=CodeEs(nctemp7676,nctemp7678);
struct tree* nctemp7684= p;
struct nctempchar1 *nctemp7688;
static struct nctempchar1 nctemp7689 = {{ 4}, (char*)"= -\0"};
nctemp7688=&nctemp7689;
nctempchar1* nctemp7686= nctemp7688;
int nctemp7690=CodeEs(nctemp7684,nctemp7686);
struct tree* nctemp7692= p;
nctempchar1* nctemp7694= tmp;
int nctemp7697=CodeEs(nctemp7692,nctemp7694);
struct tree* nctemp7699= p;
struct nctempchar1 *nctemp7703;
static struct nctempchar1 nctemp7704 = {{ 3}, (char*)".r\0"};
nctemp7703=&nctemp7704;
nctempchar1* nctemp7701= nctemp7703;
int nctemp7705=CodeEs(nctemp7699,nctemp7701);
struct tree* nctemp7707= p;
struct nctempchar1 *nctemp7711;
static struct nctempchar1 nctemp7712 = {{ 4}, (char*)";\n\0"};
nctemp7711=&nctemp7712;
nctempchar1* nctemp7709= nctemp7711;
int nctemp7713=CodeEs(nctemp7707,nctemp7709);
struct tree* nctemp7715= p;
nctempchar1* nctemp7717= tempr;
int nctemp7720=CodeEs(nctemp7715,nctemp7717);
struct tree* nctemp7722= p;
struct nctempchar1 *nctemp7726;
static struct nctempchar1 nctemp7727 = {{ 3}, (char*)".i\0"};
nctemp7726=&nctemp7727;
nctempchar1* nctemp7724= nctemp7726;
int nctemp7728=CodeEs(nctemp7722,nctemp7724);
struct tree* nctemp7730= p;
struct nctempchar1 *nctemp7734;
static struct nctempchar1 nctemp7735 = {{ 4}, (char*)"= -\0"};
nctemp7734=&nctemp7735;
nctempchar1* nctemp7732= nctemp7734;
int nctemp7736=CodeEs(nctemp7730,nctemp7732);
struct tree* nctemp7738= p;
nctempchar1* nctemp7740= tmp;
int nctemp7743=CodeEs(nctemp7738,nctemp7740);
struct tree* nctemp7745= p;
struct nctempchar1 *nctemp7749;
static struct nctempchar1 nctemp7750 = {{ 3}, (char*)".i\0"};
nctemp7749=&nctemp7750;
nctempchar1* nctemp7747= nctemp7749;
int nctemp7751=CodeEs(nctemp7745,nctemp7747);
struct tree* nctemp7753= p;
struct nctempchar1 *nctemp7757;
static struct nctempchar1 nctemp7758 = {{ 4}, (char*)";\n\0"};
nctemp7757=&nctemp7758;
nctempchar1* nctemp7755= nctemp7757;
int nctemp7759=CodeEs(nctemp7753,nctemp7755);
return tempr;
}
else{
struct tree* nctemp7769= p;
struct tree* nctemp7771=PtreeMvchild(nctemp7769);
struct tree* nctemp7767= nctemp7771;
nctempchar1* nctemp7772=CodePrimexpr(nctemp7767);
tmp=nctemp7772;
struct tree* nctemp7774= p;
struct tree* nctemp7778= p;
nctempchar1* nctemp7780=PtreeGetype(nctemp7778);
nctempchar1* nctemp7776= nctemp7780;
int nctemp7781=CodeEs(nctemp7774,nctemp7776);
struct tree* nctemp7783= p;
struct nctempchar1 *nctemp7787;
static struct nctempchar1 nctemp7788 = {{ 2}, (char*)" \0"};
nctemp7787=&nctemp7788;
nctempchar1* nctemp7785= nctemp7787;
int nctemp7789=CodeEs(nctemp7783,nctemp7785);
struct tree* nctemp7791= p;
nctempchar1* nctemp7793= tempr;
int nctemp7796=CodeEs(nctemp7791,nctemp7793);
struct tree* nctemp7798= p;
struct nctempchar1 *nctemp7802;
static struct nctempchar1 nctemp7803 = {{ 4}, (char*)"= -\0"};
nctemp7802=&nctemp7803;
nctempchar1* nctemp7800= nctemp7802;
int nctemp7804=CodeEs(nctemp7798,nctemp7800);
struct tree* nctemp7806= p;
nctempchar1* nctemp7808= tmp;
int nctemp7811=CodeEs(nctemp7806,nctemp7808);
struct tree* nctemp7813= p;
struct nctempchar1 *nctemp7817;
static struct nctempchar1 nctemp7818 = {{ 4}, (char*)";\n\0"};
nctemp7817=&nctemp7818;
nctempchar1* nctemp7815= nctemp7817;
int nctemp7819=CodeEs(nctemp7813,nctemp7815);
return tempr;
}
}
else{
struct tree* nctemp7823= p;
nctempchar1* nctemp7825=CodePrimexpr(nctemp7823);
return nctemp7825;
}
}
nctempchar1 * CodeAddexpr (struct tree* p,nctempchar1 *lval,nctempchar1 *rval)
{
nctempchar1 *type;
nctempchar1 *tempr;
nctempchar1 *opr;
struct tree* nctemp7831= p;
nctempchar1* nctemp7833=PtreeGetype(nctemp7831);
type=nctemp7833;
nctempchar1* nctemp7839=CodeMktemp();
tempr=nctemp7839;
struct tree* nctemp7845= p;
nctempchar1* nctemp7847=PtreeGetdef(nctemp7845);
opr=nctemp7847;
nctempchar1* nctemp7851= type;
struct nctempchar1 *nctemp7856;
static struct nctempchar1 nctemp7857 = {{ 8}, (char*)"complex\0"};
nctemp7856=&nctemp7857;
nctempchar1* nctemp7854= nctemp7856;
int nctemp7858=LibeStrcmp(nctemp7851,nctemp7854);
int nctemp7848 = (nctemp7858 ==1);
if(nctemp7848)
{
nctempchar1* nctemp7866= opr;
struct nctempchar1 *nctemp7871;
static struct nctempchar1 nctemp7872 = {{ 2}, (char*)"+\0"};
nctemp7871=&nctemp7872;
nctempchar1* nctemp7869= nctemp7871;
int nctemp7873=LibeStrcmp(nctemp7866,nctemp7869);
int nctemp7863 = (nctemp7873 ==1);
nctempchar1* nctemp7879= opr;
struct nctempchar1 *nctemp7884;
static struct nctempchar1 nctemp7885 = {{ 2}, (char*)"-\0"};
nctemp7884=&nctemp7885;
nctempchar1* nctemp7882= nctemp7884;
int nctemp7886=LibeStrcmp(nctemp7879,nctemp7882);
int nctemp7876 = (nctemp7886 ==1);
int nctemp7860 = (nctemp7863 || nctemp7876);
if(nctemp7860)
{
struct tree* nctemp7889= p;
nctempchar1* nctemp7891= type;
int nctemp7894=CodeEs(nctemp7889,nctemp7891);
struct tree* nctemp7896= p;
struct nctempchar1 *nctemp7900;
static struct nctempchar1 nctemp7901 = {{ 2}, (char*)" \0"};
nctemp7900=&nctemp7901;
nctempchar1* nctemp7898= nctemp7900;
int nctemp7902=CodeEs(nctemp7896,nctemp7898);
struct tree* nctemp7904= p;
nctempchar1* nctemp7906= tempr;
int nctemp7909=CodeEs(nctemp7904,nctemp7906);
struct tree* nctemp7911= p;
struct nctempchar1 *nctemp7915;
static struct nctempchar1 nctemp7916 = {{ 3}, (char*)".r\0"};
nctemp7915=&nctemp7916;
nctempchar1* nctemp7913= nctemp7915;
int nctemp7917=CodeEs(nctemp7911,nctemp7913);
struct tree* nctemp7919= p;
struct nctempchar1 *nctemp7923;
static struct nctempchar1 nctemp7924 = {{ 4}, (char*)" = \0"};
nctemp7923=&nctemp7924;
nctempchar1* nctemp7921= nctemp7923;
int nctemp7925=CodeEs(nctemp7919,nctemp7921);
struct tree* nctemp7927= p;
nctempchar1* nctemp7929= lval;
int nctemp7932=CodeEs(nctemp7927,nctemp7929);
struct tree* nctemp7934= p;
struct nctempchar1 *nctemp7938;
static struct nctempchar1 nctemp7939 = {{ 3}, (char*)".r\0"};
nctemp7938=&nctemp7939;
nctempchar1* nctemp7936= nctemp7938;
int nctemp7940=CodeEs(nctemp7934,nctemp7936);
struct tree* nctemp7942= p;
struct nctempchar1 *nctemp7946;
static struct nctempchar1 nctemp7947 = {{ 2}, (char*)" \0"};
nctemp7946=&nctemp7947;
nctempchar1* nctemp7944= nctemp7946;
int nctemp7948=CodeEs(nctemp7942,nctemp7944);
struct tree* nctemp7950= p;
struct tree* nctemp7954= p;
nctempchar1* nctemp7956=PtreeGetdef(nctemp7954);
nctempchar1* nctemp7952= nctemp7956;
int nctemp7957=CodeEs(nctemp7950,nctemp7952);
struct tree* nctemp7959= p;
struct nctempchar1 *nctemp7963;
static struct nctempchar1 nctemp7964 = {{ 2}, (char*)" \0"};
nctemp7963=&nctemp7964;
nctempchar1* nctemp7961= nctemp7963;
int nctemp7965=CodeEs(nctemp7959,nctemp7961);
struct tree* nctemp7967= p;
nctempchar1* nctemp7969= rval;
int nctemp7972=CodeEs(nctemp7967,nctemp7969);
struct tree* nctemp7974= p;
struct nctempchar1 *nctemp7978;
static struct nctempchar1 nctemp7979 = {{ 3}, (char*)".r\0"};
nctemp7978=&nctemp7979;
nctempchar1* nctemp7976= nctemp7978;
int nctemp7980=CodeEs(nctemp7974,nctemp7976);
struct tree* nctemp7982= p;
struct nctempchar1 *nctemp7986;
static struct nctempchar1 nctemp7987 = {{ 4}, (char*)";\n\0"};
nctemp7986=&nctemp7987;
nctempchar1* nctemp7984= nctemp7986;
int nctemp7988=CodeEs(nctemp7982,nctemp7984);
struct tree* nctemp7990= p;
nctempchar1* nctemp7992= type;
int nctemp7995=CodeEs(nctemp7990,nctemp7992);
struct tree* nctemp7997= p;
struct nctempchar1 *nctemp8001;
static struct nctempchar1 nctemp8002 = {{ 2}, (char*)" \0"};
nctemp8001=&nctemp8002;
nctempchar1* nctemp7999= nctemp8001;
int nctemp8003=CodeEs(nctemp7997,nctemp7999);
struct tree* nctemp8005= p;
nctempchar1* nctemp8007= tempr;
int nctemp8010=CodeEs(nctemp8005,nctemp8007);
struct tree* nctemp8012= p;
struct nctempchar1 *nctemp8016;
static struct nctempchar1 nctemp8017 = {{ 3}, (char*)".i\0"};
nctemp8016=&nctemp8017;
nctempchar1* nctemp8014= nctemp8016;
int nctemp8018=CodeEs(nctemp8012,nctemp8014);
struct tree* nctemp8020= p;
struct nctempchar1 *nctemp8024;
static struct nctempchar1 nctemp8025 = {{ 4}, (char*)" = \0"};
nctemp8024=&nctemp8025;
nctempchar1* nctemp8022= nctemp8024;
int nctemp8026=CodeEs(nctemp8020,nctemp8022);
struct tree* nctemp8028= p;
nctempchar1* nctemp8030= lval;
int nctemp8033=CodeEs(nctemp8028,nctemp8030);
struct tree* nctemp8035= p;
struct nctempchar1 *nctemp8039;
static struct nctempchar1 nctemp8040 = {{ 3}, (char*)".i\0"};
nctemp8039=&nctemp8040;
nctempchar1* nctemp8037= nctemp8039;
int nctemp8041=CodeEs(nctemp8035,nctemp8037);
struct tree* nctemp8043= p;
struct nctempchar1 *nctemp8047;
static struct nctempchar1 nctemp8048 = {{ 2}, (char*)" \0"};
nctemp8047=&nctemp8048;
nctempchar1* nctemp8045= nctemp8047;
int nctemp8049=CodeEs(nctemp8043,nctemp8045);
struct tree* nctemp8051= p;
struct tree* nctemp8055= p;
nctempchar1* nctemp8057=PtreeGetdef(nctemp8055);
nctempchar1* nctemp8053= nctemp8057;
int nctemp8058=CodeEs(nctemp8051,nctemp8053);
struct tree* nctemp8060= p;
struct nctempchar1 *nctemp8064;
static struct nctempchar1 nctemp8065 = {{ 2}, (char*)" \0"};
nctemp8064=&nctemp8065;
nctempchar1* nctemp8062= nctemp8064;
int nctemp8066=CodeEs(nctemp8060,nctemp8062);
struct tree* nctemp8068= p;
nctempchar1* nctemp8070= rval;
int nctemp8073=CodeEs(nctemp8068,nctemp8070);
struct tree* nctemp8075= p;
struct nctempchar1 *nctemp8079;
static struct nctempchar1 nctemp8080 = {{ 3}, (char*)".i\0"};
nctemp8079=&nctemp8080;
nctempchar1* nctemp8077= nctemp8079;
int nctemp8081=CodeEs(nctemp8075,nctemp8077);
struct tree* nctemp8083= p;
struct nctempchar1 *nctemp8087;
static struct nctempchar1 nctemp8088 = {{ 4}, (char*)";\n\0"};
nctemp8087=&nctemp8088;
nctempchar1* nctemp8085= nctemp8087;
int nctemp8089=CodeEs(nctemp8083,nctemp8085);
}
else{
nctempchar1* nctemp8093= opr;
struct nctempchar1 *nctemp8098;
static struct nctempchar1 nctemp8099 = {{ 2}, (char*)"*\0"};
nctemp8098=&nctemp8099;
nctempchar1* nctemp8096= nctemp8098;
int nctemp8100=LibeStrcmp(nctemp8093,nctemp8096);
int nctemp8090 = (nctemp8100 ==1);
if(nctemp8090)
{
struct tree* nctemp8103= p;
nctempchar1* nctemp8105= type;
int nctemp8108=CodeEs(nctemp8103,nctemp8105);
struct tree* nctemp8110= p;
struct nctempchar1 *nctemp8114;
static struct nctempchar1 nctemp8115 = {{ 2}, (char*)" \0"};
nctemp8114=&nctemp8115;
nctempchar1* nctemp8112= nctemp8114;
int nctemp8116=CodeEs(nctemp8110,nctemp8112);
struct tree* nctemp8118= p;
nctempchar1* nctemp8120= tempr;
int nctemp8123=CodeEs(nctemp8118,nctemp8120);
struct tree* nctemp8125= p;
struct nctempchar1 *nctemp8129;
static struct nctempchar1 nctemp8130 = {{ 3}, (char*)".r\0"};
nctemp8129=&nctemp8130;
nctempchar1* nctemp8127= nctemp8129;
int nctemp8131=CodeEs(nctemp8125,nctemp8127);
struct tree* nctemp8133= p;
struct nctempchar1 *nctemp8137;
static struct nctempchar1 nctemp8138 = {{ 4}, (char*)" = \0"};
nctemp8137=&nctemp8138;
nctempchar1* nctemp8135= nctemp8137;
int nctemp8139=CodeEs(nctemp8133,nctemp8135);
struct tree* nctemp8141= p;
nctempchar1* nctemp8143= lval;
int nctemp8146=CodeEs(nctemp8141,nctemp8143);
struct tree* nctemp8148= p;
struct nctempchar1 *nctemp8152;
static struct nctempchar1 nctemp8153 = {{ 3}, (char*)".r\0"};
nctemp8152=&nctemp8153;
nctempchar1* nctemp8150= nctemp8152;
int nctemp8154=CodeEs(nctemp8148,nctemp8150);
struct tree* nctemp8156= p;
struct nctempchar1 *nctemp8160;
static struct nctempchar1 nctemp8161 = {{ 2}, (char*)"*\0"};
nctemp8160=&nctemp8161;
nctempchar1* nctemp8158= nctemp8160;
int nctemp8162=CodeEs(nctemp8156,nctemp8158);
struct tree* nctemp8164= p;
nctempchar1* nctemp8166= rval;
int nctemp8169=CodeEs(nctemp8164,nctemp8166);
struct tree* nctemp8171= p;
struct nctempchar1 *nctemp8175;
static struct nctempchar1 nctemp8176 = {{ 3}, (char*)".r\0"};
nctemp8175=&nctemp8176;
nctempchar1* nctemp8173= nctemp8175;
int nctemp8177=CodeEs(nctemp8171,nctemp8173);
struct tree* nctemp8179= p;
struct nctempchar1 *nctemp8183;
static struct nctempchar1 nctemp8184 = {{ 2}, (char*)"-\0"};
nctemp8183=&nctemp8184;
nctempchar1* nctemp8181= nctemp8183;
int nctemp8185=CodeEs(nctemp8179,nctemp8181);
struct tree* nctemp8187= p;
nctempchar1* nctemp8189= lval;
int nctemp8192=CodeEs(nctemp8187,nctemp8189);
struct tree* nctemp8194= p;
struct nctempchar1 *nctemp8198;
static struct nctempchar1 nctemp8199 = {{ 3}, (char*)".i\0"};
nctemp8198=&nctemp8199;
nctempchar1* nctemp8196= nctemp8198;
int nctemp8200=CodeEs(nctemp8194,nctemp8196);
struct tree* nctemp8202= p;
struct nctempchar1 *nctemp8206;
static struct nctempchar1 nctemp8207 = {{ 2}, (char*)"*\0"};
nctemp8206=&nctemp8207;
nctempchar1* nctemp8204= nctemp8206;
int nctemp8208=CodeEs(nctemp8202,nctemp8204);
struct tree* nctemp8210= p;
nctempchar1* nctemp8212= rval;
int nctemp8215=CodeEs(nctemp8210,nctemp8212);
struct tree* nctemp8217= p;
struct nctempchar1 *nctemp8221;
static struct nctempchar1 nctemp8222 = {{ 3}, (char*)".i\0"};
nctemp8221=&nctemp8222;
nctempchar1* nctemp8219= nctemp8221;
int nctemp8223=CodeEs(nctemp8217,nctemp8219);
struct tree* nctemp8225= p;
struct nctempchar1 *nctemp8229;
static struct nctempchar1 nctemp8230 = {{ 4}, (char*)";\n\0"};
nctemp8229=&nctemp8230;
nctempchar1* nctemp8227= nctemp8229;
int nctemp8231=CodeEs(nctemp8225,nctemp8227);
struct tree* nctemp8233= p;
nctempchar1* nctemp8235= type;
int nctemp8238=CodeEs(nctemp8233,nctemp8235);
struct tree* nctemp8240= p;
struct nctempchar1 *nctemp8244;
static struct nctempchar1 nctemp8245 = {{ 2}, (char*)" \0"};
nctemp8244=&nctemp8245;
nctempchar1* nctemp8242= nctemp8244;
int nctemp8246=CodeEs(nctemp8240,nctemp8242);
struct tree* nctemp8248= p;
nctempchar1* nctemp8250= tempr;
int nctemp8253=CodeEs(nctemp8248,nctemp8250);
struct tree* nctemp8255= p;
struct nctempchar1 *nctemp8259;
static struct nctempchar1 nctemp8260 = {{ 3}, (char*)".i\0"};
nctemp8259=&nctemp8260;
nctempchar1* nctemp8257= nctemp8259;
int nctemp8261=CodeEs(nctemp8255,nctemp8257);
struct tree* nctemp8263= p;
struct nctempchar1 *nctemp8267;
static struct nctempchar1 nctemp8268 = {{ 4}, (char*)" = \0"};
nctemp8267=&nctemp8268;
nctempchar1* nctemp8265= nctemp8267;
int nctemp8269=CodeEs(nctemp8263,nctemp8265);
struct tree* nctemp8271= p;
nctempchar1* nctemp8273= lval;
int nctemp8276=CodeEs(nctemp8271,nctemp8273);
struct tree* nctemp8278= p;
struct nctempchar1 *nctemp8282;
static struct nctempchar1 nctemp8283 = {{ 3}, (char*)".i\0"};
nctemp8282=&nctemp8283;
nctempchar1* nctemp8280= nctemp8282;
int nctemp8284=CodeEs(nctemp8278,nctemp8280);
struct tree* nctemp8286= p;
struct nctempchar1 *nctemp8290;
static struct nctempchar1 nctemp8291 = {{ 2}, (char*)"*\0"};
nctemp8290=&nctemp8291;
nctempchar1* nctemp8288= nctemp8290;
int nctemp8292=CodeEs(nctemp8286,nctemp8288);
struct tree* nctemp8294= p;
nctempchar1* nctemp8296= rval;
int nctemp8299=CodeEs(nctemp8294,nctemp8296);
struct tree* nctemp8301= p;
struct nctempchar1 *nctemp8305;
static struct nctempchar1 nctemp8306 = {{ 3}, (char*)".r\0"};
nctemp8305=&nctemp8306;
nctempchar1* nctemp8303= nctemp8305;
int nctemp8307=CodeEs(nctemp8301,nctemp8303);
struct tree* nctemp8309= p;
struct nctempchar1 *nctemp8313;
static struct nctempchar1 nctemp8314 = {{ 2}, (char*)"+\0"};
nctemp8313=&nctemp8314;
nctempchar1* nctemp8311= nctemp8313;
int nctemp8315=CodeEs(nctemp8309,nctemp8311);
struct tree* nctemp8317= p;
nctempchar1* nctemp8319= lval;
int nctemp8322=CodeEs(nctemp8317,nctemp8319);
struct tree* nctemp8324= p;
struct nctempchar1 *nctemp8328;
static struct nctempchar1 nctemp8329 = {{ 3}, (char*)".r\0"};
nctemp8328=&nctemp8329;
nctempchar1* nctemp8326= nctemp8328;
int nctemp8330=CodeEs(nctemp8324,nctemp8326);
struct tree* nctemp8332= p;
struct nctempchar1 *nctemp8336;
static struct nctempchar1 nctemp8337 = {{ 2}, (char*)"*\0"};
nctemp8336=&nctemp8337;
nctempchar1* nctemp8334= nctemp8336;
int nctemp8338=CodeEs(nctemp8332,nctemp8334);
struct tree* nctemp8340= p;
nctempchar1* nctemp8342= rval;
int nctemp8345=CodeEs(nctemp8340,nctemp8342);
struct tree* nctemp8347= p;
struct nctempchar1 *nctemp8351;
static struct nctempchar1 nctemp8352 = {{ 3}, (char*)".i\0"};
nctemp8351=&nctemp8352;
nctempchar1* nctemp8349= nctemp8351;
int nctemp8353=CodeEs(nctemp8347,nctemp8349);
struct tree* nctemp8355= p;
struct nctempchar1 *nctemp8359;
static struct nctempchar1 nctemp8360 = {{ 4}, (char*)";\n\0"};
nctemp8359=&nctemp8360;
nctempchar1* nctemp8357= nctemp8359;
int nctemp8361=CodeEs(nctemp8355,nctemp8357);
}
else{
nctempchar1* nctemp8365= opr;
struct nctempchar1 *nctemp8370;
static struct nctempchar1 nctemp8371 = {{ 2}, (char*)"/\0"};
nctemp8370=&nctemp8371;
nctempchar1* nctemp8368= nctemp8370;
int nctemp8372=LibeStrcmp(nctemp8365,nctemp8368);
int nctemp8362 = (nctemp8372 ==1);
if(nctemp8362)
{
struct tree* nctemp8375= p;
nctempchar1* nctemp8377= type;
int nctemp8380=CodeEs(nctemp8375,nctemp8377);
struct tree* nctemp8382= p;
struct nctempchar1 *nctemp8386;
static struct nctempchar1 nctemp8387 = {{ 2}, (char*)" \0"};
nctemp8386=&nctemp8387;
nctempchar1* nctemp8384= nctemp8386;
int nctemp8388=CodeEs(nctemp8382,nctemp8384);
struct tree* nctemp8390= p;
nctempchar1* nctemp8392= tempr;
int nctemp8395=CodeEs(nctemp8390,nctemp8392);
struct tree* nctemp8397= p;
struct nctempchar1 *nctemp8401;
static struct nctempchar1 nctemp8402 = {{ 3}, (char*)".r\0"};
nctemp8401=&nctemp8402;
nctempchar1* nctemp8399= nctemp8401;
int nctemp8403=CodeEs(nctemp8397,nctemp8399);
struct tree* nctemp8405= p;
struct nctempchar1 *nctemp8409;
static struct nctempchar1 nctemp8410 = {{ 4}, (char*)" = \0"};
nctemp8409=&nctemp8410;
nctempchar1* nctemp8407= nctemp8409;
int nctemp8411=CodeEs(nctemp8405,nctemp8407);
struct tree* nctemp8413= p;
struct nctempchar1 *nctemp8417;
static struct nctempchar1 nctemp8418 = {{ 2}, (char*)"(\0"};
nctemp8417=&nctemp8418;
nctempchar1* nctemp8415= nctemp8417;
int nctemp8419=CodeEs(nctemp8413,nctemp8415);
struct tree* nctemp8421= p;
nctempchar1* nctemp8423= lval;
int nctemp8426=CodeEs(nctemp8421,nctemp8423);
struct tree* nctemp8428= p;
struct nctempchar1 *nctemp8432;
static struct nctempchar1 nctemp8433 = {{ 3}, (char*)".r\0"};
nctemp8432=&nctemp8433;
nctempchar1* nctemp8430= nctemp8432;
int nctemp8434=CodeEs(nctemp8428,nctemp8430);
struct tree* nctemp8436= p;
struct nctempchar1 *nctemp8440;
static struct nctempchar1 nctemp8441 = {{ 2}, (char*)"*\0"};
nctemp8440=&nctemp8441;
nctempchar1* nctemp8438= nctemp8440;
int nctemp8442=CodeEs(nctemp8436,nctemp8438);
struct tree* nctemp8444= p;
nctempchar1* nctemp8446= rval;
int nctemp8449=CodeEs(nctemp8444,nctemp8446);
struct tree* nctemp8451= p;
struct nctempchar1 *nctemp8455;
static struct nctempchar1 nctemp8456 = {{ 3}, (char*)".r\0"};
nctemp8455=&nctemp8456;
nctempchar1* nctemp8453= nctemp8455;
int nctemp8457=CodeEs(nctemp8451,nctemp8453);
struct tree* nctemp8459= p;
struct nctempchar1 *nctemp8463;
static struct nctempchar1 nctemp8464 = {{ 2}, (char*)"+\0"};
nctemp8463=&nctemp8464;
nctempchar1* nctemp8461= nctemp8463;
int nctemp8465=CodeEs(nctemp8459,nctemp8461);
struct tree* nctemp8467= p;
nctempchar1* nctemp8469= lval;
int nctemp8472=CodeEs(nctemp8467,nctemp8469);
struct tree* nctemp8474= p;
struct nctempchar1 *nctemp8478;
static struct nctempchar1 nctemp8479 = {{ 3}, (char*)".i\0"};
nctemp8478=&nctemp8479;
nctempchar1* nctemp8476= nctemp8478;
int nctemp8480=CodeEs(nctemp8474,nctemp8476);
struct tree* nctemp8482= p;
struct nctempchar1 *nctemp8486;
static struct nctempchar1 nctemp8487 = {{ 2}, (char*)"*\0"};
nctemp8486=&nctemp8487;
nctempchar1* nctemp8484= nctemp8486;
int nctemp8488=CodeEs(nctemp8482,nctemp8484);
struct tree* nctemp8490= p;
nctempchar1* nctemp8492= rval;
int nctemp8495=CodeEs(nctemp8490,nctemp8492);
struct tree* nctemp8497= p;
struct nctempchar1 *nctemp8501;
static struct nctempchar1 nctemp8502 = {{ 3}, (char*)".i\0"};
nctemp8501=&nctemp8502;
nctempchar1* nctemp8499= nctemp8501;
int nctemp8503=CodeEs(nctemp8497,nctemp8499);
struct tree* nctemp8505= p;
struct nctempchar1 *nctemp8509;
static struct nctempchar1 nctemp8510 = {{ 4}, (char*)")/(\0"};
nctemp8509=&nctemp8510;
nctempchar1* nctemp8507= nctemp8509;
int nctemp8511=CodeEs(nctemp8505,nctemp8507);
struct tree* nctemp8513= p;
nctempchar1* nctemp8515= rval;
int nctemp8518=CodeEs(nctemp8513,nctemp8515);
struct tree* nctemp8520= p;
struct nctempchar1 *nctemp8524;
static struct nctempchar1 nctemp8525 = {{ 3}, (char*)".r\0"};
nctemp8524=&nctemp8525;
nctempchar1* nctemp8522= nctemp8524;
int nctemp8526=CodeEs(nctemp8520,nctemp8522);
struct tree* nctemp8528= p;
struct nctempchar1 *nctemp8532;
static struct nctempchar1 nctemp8533 = {{ 2}, (char*)"*\0"};
nctemp8532=&nctemp8533;
nctempchar1* nctemp8530= nctemp8532;
int nctemp8534=CodeEs(nctemp8528,nctemp8530);
struct tree* nctemp8536= p;
nctempchar1* nctemp8538= rval;
int nctemp8541=CodeEs(nctemp8536,nctemp8538);
struct tree* nctemp8543= p;
struct nctempchar1 *nctemp8547;
static struct nctempchar1 nctemp8548 = {{ 3}, (char*)".r\0"};
nctemp8547=&nctemp8548;
nctempchar1* nctemp8545= nctemp8547;
int nctemp8549=CodeEs(nctemp8543,nctemp8545);
struct tree* nctemp8551= p;
struct nctempchar1 *nctemp8555;
static struct nctempchar1 nctemp8556 = {{ 2}, (char*)"+\0"};
nctemp8555=&nctemp8556;
nctempchar1* nctemp8553= nctemp8555;
int nctemp8557=CodeEs(nctemp8551,nctemp8553);
struct tree* nctemp8559= p;
nctempchar1* nctemp8561= rval;
int nctemp8564=CodeEs(nctemp8559,nctemp8561);
struct tree* nctemp8566= p;
struct nctempchar1 *nctemp8570;
static struct nctempchar1 nctemp8571 = {{ 3}, (char*)".i\0"};
nctemp8570=&nctemp8571;
nctempchar1* nctemp8568= nctemp8570;
int nctemp8572=CodeEs(nctemp8566,nctemp8568);
struct tree* nctemp8574= p;
struct nctempchar1 *nctemp8578;
static struct nctempchar1 nctemp8579 = {{ 2}, (char*)"*\0"};
nctemp8578=&nctemp8579;
nctempchar1* nctemp8576= nctemp8578;
int nctemp8580=CodeEs(nctemp8574,nctemp8576);
struct tree* nctemp8582= p;
nctempchar1* nctemp8584= rval;
int nctemp8587=CodeEs(nctemp8582,nctemp8584);
struct tree* nctemp8589= p;
struct nctempchar1 *nctemp8593;
static struct nctempchar1 nctemp8594 = {{ 3}, (char*)".i\0"};
nctemp8593=&nctemp8594;
nctempchar1* nctemp8591= nctemp8593;
int nctemp8595=CodeEs(nctemp8589,nctemp8591);
struct tree* nctemp8597= p;
struct nctempchar1 *nctemp8601;
static struct nctempchar1 nctemp8602 = {{ 5}, (char*)");\n\0"};
nctemp8601=&nctemp8602;
nctempchar1* nctemp8599= nctemp8601;
int nctemp8603=CodeEs(nctemp8597,nctemp8599);
struct tree* nctemp8605= p;
nctempchar1* nctemp8607= type;
int nctemp8610=CodeEs(nctemp8605,nctemp8607);
struct tree* nctemp8612= p;
struct nctempchar1 *nctemp8616;
static struct nctempchar1 nctemp8617 = {{ 2}, (char*)" \0"};
nctemp8616=&nctemp8617;
nctempchar1* nctemp8614= nctemp8616;
int nctemp8618=CodeEs(nctemp8612,nctemp8614);
struct tree* nctemp8620= p;
nctempchar1* nctemp8622= tempr;
int nctemp8625=CodeEs(nctemp8620,nctemp8622);
struct tree* nctemp8627= p;
struct nctempchar1 *nctemp8631;
static struct nctempchar1 nctemp8632 = {{ 3}, (char*)".i\0"};
nctemp8631=&nctemp8632;
nctempchar1* nctemp8629= nctemp8631;
int nctemp8633=CodeEs(nctemp8627,nctemp8629);
struct tree* nctemp8635= p;
struct nctempchar1 *nctemp8639;
static struct nctempchar1 nctemp8640 = {{ 4}, (char*)" = \0"};
nctemp8639=&nctemp8640;
nctempchar1* nctemp8637= nctemp8639;
int nctemp8641=CodeEs(nctemp8635,nctemp8637);
struct tree* nctemp8643= p;
struct nctempchar1 *nctemp8647;
static struct nctempchar1 nctemp8648 = {{ 2}, (char*)"(\0"};
nctemp8647=&nctemp8648;
nctempchar1* nctemp8645= nctemp8647;
int nctemp8649=CodeEs(nctemp8643,nctemp8645);
struct tree* nctemp8651= p;
nctempchar1* nctemp8653= lval;
int nctemp8656=CodeEs(nctemp8651,nctemp8653);
struct tree* nctemp8658= p;
struct nctempchar1 *nctemp8662;
static struct nctempchar1 nctemp8663 = {{ 3}, (char*)".i\0"};
nctemp8662=&nctemp8663;
nctempchar1* nctemp8660= nctemp8662;
int nctemp8664=CodeEs(nctemp8658,nctemp8660);
struct tree* nctemp8666= p;
struct nctempchar1 *nctemp8670;
static struct nctempchar1 nctemp8671 = {{ 2}, (char*)"*\0"};
nctemp8670=&nctemp8671;
nctempchar1* nctemp8668= nctemp8670;
int nctemp8672=CodeEs(nctemp8666,nctemp8668);
struct tree* nctemp8674= p;
nctempchar1* nctemp8676= rval;
int nctemp8679=CodeEs(nctemp8674,nctemp8676);
struct tree* nctemp8681= p;
struct nctempchar1 *nctemp8685;
static struct nctempchar1 nctemp8686 = {{ 3}, (char*)".r\0"};
nctemp8685=&nctemp8686;
nctempchar1* nctemp8683= nctemp8685;
int nctemp8687=CodeEs(nctemp8681,nctemp8683);
struct tree* nctemp8689= p;
struct nctempchar1 *nctemp8693;
static struct nctempchar1 nctemp8694 = {{ 2}, (char*)"-\0"};
nctemp8693=&nctemp8694;
nctempchar1* nctemp8691= nctemp8693;
int nctemp8695=CodeEs(nctemp8689,nctemp8691);
struct tree* nctemp8697= p;
nctempchar1* nctemp8699= lval;
int nctemp8702=CodeEs(nctemp8697,nctemp8699);
struct tree* nctemp8704= p;
struct nctempchar1 *nctemp8708;
static struct nctempchar1 nctemp8709 = {{ 3}, (char*)".r\0"};
nctemp8708=&nctemp8709;
nctempchar1* nctemp8706= nctemp8708;
int nctemp8710=CodeEs(nctemp8704,nctemp8706);
struct tree* nctemp8712= p;
struct nctempchar1 *nctemp8716;
static struct nctempchar1 nctemp8717 = {{ 2}, (char*)"*\0"};
nctemp8716=&nctemp8717;
nctempchar1* nctemp8714= nctemp8716;
int nctemp8718=CodeEs(nctemp8712,nctemp8714);
struct tree* nctemp8720= p;
nctempchar1* nctemp8722= rval;
int nctemp8725=CodeEs(nctemp8720,nctemp8722);
struct tree* nctemp8727= p;
struct nctempchar1 *nctemp8731;
static struct nctempchar1 nctemp8732 = {{ 3}, (char*)".i\0"};
nctemp8731=&nctemp8732;
nctempchar1* nctemp8729= nctemp8731;
int nctemp8733=CodeEs(nctemp8727,nctemp8729);
struct tree* nctemp8735= p;
struct nctempchar1 *nctemp8739;
static struct nctempchar1 nctemp8740 = {{ 4}, (char*)")/(\0"};
nctemp8739=&nctemp8740;
nctempchar1* nctemp8737= nctemp8739;
int nctemp8741=CodeEs(nctemp8735,nctemp8737);
struct tree* nctemp8743= p;
nctempchar1* nctemp8745= rval;
int nctemp8748=CodeEs(nctemp8743,nctemp8745);
struct tree* nctemp8750= p;
struct nctempchar1 *nctemp8754;
static struct nctempchar1 nctemp8755 = {{ 3}, (char*)".r\0"};
nctemp8754=&nctemp8755;
nctempchar1* nctemp8752= nctemp8754;
int nctemp8756=CodeEs(nctemp8750,nctemp8752);
struct tree* nctemp8758= p;
struct nctempchar1 *nctemp8762;
static struct nctempchar1 nctemp8763 = {{ 2}, (char*)"*\0"};
nctemp8762=&nctemp8763;
nctempchar1* nctemp8760= nctemp8762;
int nctemp8764=CodeEs(nctemp8758,nctemp8760);
struct tree* nctemp8766= p;
nctempchar1* nctemp8768= rval;
int nctemp8771=CodeEs(nctemp8766,nctemp8768);
struct tree* nctemp8773= p;
struct nctempchar1 *nctemp8777;
static struct nctempchar1 nctemp8778 = {{ 3}, (char*)".r\0"};
nctemp8777=&nctemp8778;
nctempchar1* nctemp8775= nctemp8777;
int nctemp8779=CodeEs(nctemp8773,nctemp8775);
struct tree* nctemp8781= p;
struct nctempchar1 *nctemp8785;
static struct nctempchar1 nctemp8786 = {{ 2}, (char*)"+\0"};
nctemp8785=&nctemp8786;
nctempchar1* nctemp8783= nctemp8785;
int nctemp8787=CodeEs(nctemp8781,nctemp8783);
struct tree* nctemp8789= p;
nctempchar1* nctemp8791= rval;
int nctemp8794=CodeEs(nctemp8789,nctemp8791);
struct tree* nctemp8796= p;
struct nctempchar1 *nctemp8800;
static struct nctempchar1 nctemp8801 = {{ 3}, (char*)".i\0"};
nctemp8800=&nctemp8801;
nctempchar1* nctemp8798= nctemp8800;
int nctemp8802=CodeEs(nctemp8796,nctemp8798);
struct tree* nctemp8804= p;
struct nctempchar1 *nctemp8808;
static struct nctempchar1 nctemp8809 = {{ 2}, (char*)"*\0"};
nctemp8808=&nctemp8809;
nctempchar1* nctemp8806= nctemp8808;
int nctemp8810=CodeEs(nctemp8804,nctemp8806);
struct tree* nctemp8812= p;
nctempchar1* nctemp8814= rval;
int nctemp8817=CodeEs(nctemp8812,nctemp8814);
struct tree* nctemp8819= p;
struct nctempchar1 *nctemp8823;
static struct nctempchar1 nctemp8824 = {{ 3}, (char*)".i\0"};
nctemp8823=&nctemp8824;
nctempchar1* nctemp8821= nctemp8823;
int nctemp8825=CodeEs(nctemp8819,nctemp8821);
struct tree* nctemp8827= p;
struct nctempchar1 *nctemp8831;
static struct nctempchar1 nctemp8832 = {{ 5}, (char*)");\n\0"};
nctemp8831=&nctemp8832;
nctempchar1* nctemp8829= nctemp8831;
int nctemp8833=CodeEs(nctemp8827,nctemp8829);
}
}
}
}
else{
struct tree* nctemp8835= p;
nctempchar1* nctemp8837= type;
int nctemp8840=CodeEs(nctemp8835,nctemp8837);
struct tree* nctemp8842= p;
struct nctempchar1 *nctemp8846;
static struct nctempchar1 nctemp8847 = {{ 2}, (char*)" \0"};
nctemp8846=&nctemp8847;
nctempchar1* nctemp8844= nctemp8846;
int nctemp8848=CodeEs(nctemp8842,nctemp8844);
struct tree* nctemp8850= p;
nctempchar1* nctemp8852= tempr;
int nctemp8855=CodeEs(nctemp8850,nctemp8852);
struct tree* nctemp8857= p;
struct nctempchar1 *nctemp8861;
static struct nctempchar1 nctemp8862 = {{ 4}, (char*)" = \0"};
nctemp8861=&nctemp8862;
nctempchar1* nctemp8859= nctemp8861;
int nctemp8863=CodeEs(nctemp8857,nctemp8859);
struct tree* nctemp8865= p;
nctempchar1* nctemp8867= lval;
int nctemp8870=CodeEs(nctemp8865,nctemp8867);
struct tree* nctemp8872= p;
struct nctempchar1 *nctemp8876;
static struct nctempchar1 nctemp8877 = {{ 2}, (char*)" \0"};
nctemp8876=&nctemp8877;
nctempchar1* nctemp8874= nctemp8876;
int nctemp8878=CodeEs(nctemp8872,nctemp8874);
struct tree* nctemp8880= p;
struct tree* nctemp8884= p;
nctempchar1* nctemp8886=PtreeGetdef(nctemp8884);
nctempchar1* nctemp8882= nctemp8886;
int nctemp8887=CodeEs(nctemp8880,nctemp8882);
struct tree* nctemp8889= p;
struct nctempchar1 *nctemp8893;
static struct nctempchar1 nctemp8894 = {{ 2}, (char*)" \0"};
nctemp8893=&nctemp8894;
nctempchar1* nctemp8891= nctemp8893;
int nctemp8895=CodeEs(nctemp8889,nctemp8891);
struct tree* nctemp8897= p;
nctempchar1* nctemp8899= rval;
int nctemp8902=CodeEs(nctemp8897,nctemp8899);
struct tree* nctemp8904= p;
struct nctempchar1 *nctemp8908;
static struct nctempchar1 nctemp8909 = {{ 4}, (char*)";\n\0"};
nctemp8908=&nctemp8909;
nctempchar1* nctemp8906= nctemp8908;
int nctemp8910=CodeEs(nctemp8904,nctemp8906);
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
struct tree* nctemp8918= p;
nctempchar1* nctemp8920=PtreeGetname(nctemp8918);
nctempchar1* nctemp8916= nctemp8920;
struct nctempchar1 *nctemp8923;
static struct nctempchar1 nctemp8924 = {{ 8}, (char*)"binexpr\0"};
nctemp8923=&nctemp8924;
nctempchar1* nctemp8921= nctemp8923;
int nctemp8925=LibeStrcmp(nctemp8916,nctemp8921);
int nctemp8913 = (nctemp8925 ==1);
if(nctemp8913)
{
struct tree* nctemp8932= p;
nctempchar1* nctemp8934=PtreeGetype(nctemp8932);
type=nctemp8934;
nctempchar1* nctemp8940=CodeMktemp();
tempr=nctemp8940;
nctempchar1* nctemp8946=CodeMktemp();
tempi=nctemp8946;
struct tree* nctemp8951= p;
struct tree* nctemp8953=PtreeMvchild(nctemp8951);
np =nctemp8953;
struct tree* nctemp8959= np;
nctempchar1* nctemp8961=CodeUnexpr(nctemp8959);
lval=nctemp8961;
struct tree* nctemp8969= np;
struct tree* nctemp8971=PtreeMvsister(nctemp8969);
struct tree* nctemp8967= nctemp8971;
nctempchar1* nctemp8972=CodeUnexpr(nctemp8967);
rval=nctemp8972;
struct tree* nctemp8987= p;
nctempchar1* nctemp8989=PtreeGetdef(nctemp8987);
nctempchar1* nctemp8985= nctemp8989;
struct nctempchar1 *nctemp8992;
static struct nctempchar1 nctemp8993 = {{ 2}, (char*)"+\0"};
nctemp8992=&nctemp8993;
nctempchar1* nctemp8990= nctemp8992;
int nctemp8994=LibeStrcmp(nctemp8985,nctemp8990);
int nctemp8982 = (nctemp8994 ==1);
struct tree* nctemp9002= p;
nctempchar1* nctemp9004=PtreeGetdef(nctemp9002);
nctempchar1* nctemp9000= nctemp9004;
struct nctempchar1 *nctemp9007;
static struct nctempchar1 nctemp9008 = {{ 2}, (char*)"-\0"};
nctemp9007=&nctemp9008;
nctempchar1* nctemp9005= nctemp9007;
int nctemp9009=LibeStrcmp(nctemp9000,nctemp9005);
int nctemp8997 = (nctemp9009 ==1);
int nctemp8979 = (nctemp8982 || nctemp8997);
struct tree* nctemp9017= p;
nctempchar1* nctemp9019=PtreeGetdef(nctemp9017);
nctempchar1* nctemp9015= nctemp9019;
struct nctempchar1 *nctemp9022;
static struct nctempchar1 nctemp9023 = {{ 2}, (char*)"*\0"};
nctemp9022=&nctemp9023;
nctempchar1* nctemp9020= nctemp9022;
int nctemp9024=LibeStrcmp(nctemp9015,nctemp9020);
int nctemp9012 = (nctemp9024 ==1);
int nctemp8976 = (nctemp8979 || nctemp9012);
struct tree* nctemp9032= p;
nctempchar1* nctemp9034=PtreeGetdef(nctemp9032);
nctempchar1* nctemp9030= nctemp9034;
struct nctempchar1 *nctemp9037;
static struct nctempchar1 nctemp9038 = {{ 2}, (char*)"/\0"};
nctemp9037=&nctemp9038;
nctempchar1* nctemp9035= nctemp9037;
int nctemp9039=LibeStrcmp(nctemp9030,nctemp9035);
int nctemp9027 = (nctemp9039 ==1);
int nctemp8973 = (nctemp8976 || nctemp9027);
if(nctemp8973)
{
struct tree* nctemp9042= p;
nctempchar1* nctemp9044= lval;
nctempchar1* nctemp9047= rval;
nctempchar1* nctemp9050=CodeAddexpr(nctemp9042,nctemp9044,nctemp9047);
return nctemp9050;
}
else{
struct tree* nctemp9056= p;
nctempchar1* nctemp9058=PtreeGetdef(nctemp9056);
nctempchar1* nctemp9054= nctemp9058;
struct nctempchar1 *nctemp9061;
static struct nctempchar1 nctemp9062 = {{ 2}, (char*)"=\0"};
nctemp9061=&nctemp9062;
nctempchar1* nctemp9059= nctemp9061;
int nctemp9063=LibeStrcmp(nctemp9054,nctemp9059);
int nctemp9051 = (nctemp9063 ==1);
if(nctemp9051)
{
struct tree* nctemp9076= p;
nctempchar1* nctemp9078=PtreeGetype(nctemp9076);
nctempchar1* nctemp9074= nctemp9078;
struct nctempchar1 *nctemp9081;
static struct nctempchar1 nctemp9082 = {{ 8}, (char*)"complex\0"};
nctemp9081=&nctemp9082;
nctempchar1* nctemp9079= nctemp9081;
int nctemp9083=LibeStrcmp(nctemp9074,nctemp9079);
int nctemp9071 = (nctemp9083 ==1);
struct tree* nctemp9091= p;
nctempchar1* nctemp9093=PtreeGetref(nctemp9091);
nctempchar1* nctemp9089= nctemp9093;
struct nctempchar1 *nctemp9096;
static struct nctempchar1 nctemp9097 = {{ 5}, (char*)"aref\0"};
nctemp9096=&nctemp9097;
nctempchar1* nctemp9094= nctemp9096;
int nctemp9098=LibeStrcmp(nctemp9089,nctemp9094);
int nctemp9086 = (nctemp9098 ==0);
int nctemp9068 = (nctemp9071 && nctemp9086);
struct tree* nctemp9106= p;
nctempchar1* nctemp9108=PtreeGetref(nctemp9106);
nctempchar1* nctemp9104= nctemp9108;
struct nctempchar1 *nctemp9111;
static struct nctempchar1 nctemp9112 = {{ 5}, (char*)"sref\0"};
nctemp9111=&nctemp9112;
nctempchar1* nctemp9109= nctemp9111;
int nctemp9113=LibeStrcmp(nctemp9104,nctemp9109);
int nctemp9101 = (nctemp9113 ==0);
int nctemp9065 = (nctemp9068 && nctemp9101);
if(nctemp9065)
{
struct tree* nctemp9116= p;
nctempchar1* nctemp9118= lval;
int nctemp9121=CodeEs(nctemp9116,nctemp9118);
struct tree* nctemp9123= p;
struct nctempchar1 *nctemp9127;
static struct nctempchar1 nctemp9128 = {{ 4}, (char*)".r \0"};
nctemp9127=&nctemp9128;
nctempchar1* nctemp9125= nctemp9127;
int nctemp9129=CodeEs(nctemp9123,nctemp9125);
struct tree* nctemp9131= p;
struct nctempchar1 *nctemp9135;
static struct nctempchar1 nctemp9136 = {{ 2}, (char*)"=\0"};
nctemp9135=&nctemp9136;
nctempchar1* nctemp9133= nctemp9135;
int nctemp9137=CodeEs(nctemp9131,nctemp9133);
struct tree* nctemp9139= p;
nctempchar1* nctemp9141= rval;
int nctemp9144=CodeEs(nctemp9139,nctemp9141);
struct tree* nctemp9146= p;
struct nctempchar1 *nctemp9150;
static struct nctempchar1 nctemp9151 = {{ 3}, (char*)".r\0"};
nctemp9150=&nctemp9151;
nctempchar1* nctemp9148= nctemp9150;
int nctemp9152=CodeEs(nctemp9146,nctemp9148);
struct tree* nctemp9154= p;
struct nctempchar1 *nctemp9158;
static struct nctempchar1 nctemp9159 = {{ 4}, (char*)";\n\0"};
nctemp9158=&nctemp9159;
nctempchar1* nctemp9156= nctemp9158;
int nctemp9160=CodeEs(nctemp9154,nctemp9156);
struct tree* nctemp9162= p;
nctempchar1* nctemp9164= lval;
int nctemp9167=CodeEs(nctemp9162,nctemp9164);
struct tree* nctemp9169= p;
struct nctempchar1 *nctemp9173;
static struct nctempchar1 nctemp9174 = {{ 3}, (char*)".i\0"};
nctemp9173=&nctemp9174;
nctempchar1* nctemp9171= nctemp9173;
int nctemp9175=CodeEs(nctemp9169,nctemp9171);
struct tree* nctemp9177= p;
struct nctempchar1 *nctemp9181;
static struct nctempchar1 nctemp9182 = {{ 2}, (char*)"=\0"};
nctemp9181=&nctemp9182;
nctempchar1* nctemp9179= nctemp9181;
int nctemp9183=CodeEs(nctemp9177,nctemp9179);
struct tree* nctemp9185= p;
nctempchar1* nctemp9187= rval;
int nctemp9190=CodeEs(nctemp9185,nctemp9187);
struct tree* nctemp9192= p;
struct nctempchar1 *nctemp9196;
static struct nctempchar1 nctemp9197 = {{ 3}, (char*)".i\0"};
nctemp9196=&nctemp9197;
nctempchar1* nctemp9194= nctemp9196;
int nctemp9198=CodeEs(nctemp9192,nctemp9194);
struct tree* nctemp9200= p;
struct nctempchar1 *nctemp9204;
static struct nctempchar1 nctemp9205 = {{ 4}, (char*)";\n\0"};
nctemp9204=&nctemp9205;
nctempchar1* nctemp9202= nctemp9204;
int nctemp9206=CodeEs(nctemp9200,nctemp9202);
return lval;
}
else{
struct tree* nctemp9214= np;
nctempchar1* nctemp9216=PtreeGetref(nctemp9214);
nctempchar1* nctemp9212= nctemp9216;
struct nctempchar1 *nctemp9219;
static struct nctempchar1 nctemp9220 = {{ 5}, (char*)"aref\0"};
nctemp9219=&nctemp9220;
nctempchar1* nctemp9217= nctemp9219;
int nctemp9221=LibeStrcmp(nctemp9212,nctemp9217);
int nctemp9209 = (nctemp9221 ==1);
if(nctemp9209)
{
struct tree* nctemp9230= np;
struct tree* nctemp9232=PtreeMvsister(nctemp9230);
struct tree* nctemp9228= nctemp9232;
nctempchar1* nctemp9233=PtreeGetname(nctemp9228);
nctempchar1* nctemp9226= nctemp9233;
struct nctempchar1 *nctemp9236;
static struct nctempchar1 nctemp9237 = {{ 10}, (char*)"iconstant\0"};
nctemp9236=&nctemp9237;
nctempchar1* nctemp9234= nctemp9236;
int nctemp9238=LibeStrcmp(nctemp9226,nctemp9234);
struct tree* nctemp9244= np;
struct tree* nctemp9246=PtreeMvsister(nctemp9244);
struct tree* nctemp9242= nctemp9246;
nctempchar1* nctemp9247=PtreeGetdef(nctemp9242);
nctempchar1* nctemp9240= nctemp9247;
struct nctempchar1 *nctemp9250;
static struct nctempchar1 nctemp9251 = {{ 2}, (char*)"0\0"};
nctemp9250=&nctemp9251;
nctempchar1* nctemp9248= nctemp9250;
int nctemp9252=LibeStrcmp(nctemp9240,nctemp9248);
int nctemp9223 = (nctemp9238 && nctemp9252);
if(nctemp9223)
{
struct tree* nctemp9254= p;
nctempchar1* nctemp9256= lval;
int nctemp9259=CodeEs(nctemp9254,nctemp9256);
struct tree* nctemp9261= p;
struct nctempchar1 *nctemp9265;
static struct nctempchar1 nctemp9266 = {{ 3}, (char*)"=(\0"};
nctemp9265=&nctemp9266;
nctempchar1* nctemp9263= nctemp9265;
int nctemp9267=CodeEs(nctemp9261,nctemp9263);
struct tree* nctemp9269= p;
nctempchar1* nctemp9271= rval;
int nctemp9274=CodeEs(nctemp9269,nctemp9271);
struct tree* nctemp9276= p;
struct nctempchar1 *nctemp9280;
static struct nctempchar1 nctemp9281 = {{ 5}, (char*)");\n\0"};
nctemp9280=&nctemp9281;
nctempchar1* nctemp9278= nctemp9280;
int nctemp9282=CodeEs(nctemp9276,nctemp9278);
return lval;
}
else{
struct tree* nctemp9286= p;
nctempchar1* nctemp9288= lval;
int nctemp9291=CodeEs(nctemp9286,nctemp9288);
struct tree* nctemp9293= p;
struct nctempchar1 *nctemp9297;
static struct nctempchar1 nctemp9298 = {{ 2}, (char*)"=\0"};
nctemp9297=&nctemp9298;
nctempchar1* nctemp9295= nctemp9297;
int nctemp9299=CodeEs(nctemp9293,nctemp9295);
struct tree* nctemp9301= p;
nctempchar1* nctemp9303= rval;
int nctemp9306=CodeEs(nctemp9301,nctemp9303);
struct tree* nctemp9308= p;
struct nctempchar1 *nctemp9312;
static struct nctempchar1 nctemp9313 = {{ 4}, (char*)";\n\0"};
nctemp9312=&nctemp9313;
nctempchar1* nctemp9310= nctemp9312;
int nctemp9314=CodeEs(nctemp9308,nctemp9310);
return lval;
}
}
else{
struct tree* nctemp9318= p;
nctempchar1* nctemp9320= lval;
int nctemp9323=CodeEs(nctemp9318,nctemp9320);
struct tree* nctemp9325= p;
struct nctempchar1 *nctemp9329;
static struct nctempchar1 nctemp9330 = {{ 2}, (char*)" \0"};
nctemp9329=&nctemp9330;
nctempchar1* nctemp9327= nctemp9329;
int nctemp9331=CodeEs(nctemp9325,nctemp9327);
struct tree* nctemp9333= p;
struct nctempchar1 *nctemp9337;
static struct nctempchar1 nctemp9338 = {{ 2}, (char*)"=\0"};
nctemp9337=&nctemp9338;
nctempchar1* nctemp9335= nctemp9337;
int nctemp9339=CodeEs(nctemp9333,nctemp9335);
struct tree* nctemp9341= p;
nctempchar1* nctemp9343= rval;
int nctemp9346=CodeEs(nctemp9341,nctemp9343);
struct tree* nctemp9348= p;
struct nctempchar1 *nctemp9352;
static struct nctempchar1 nctemp9353 = {{ 4}, (char*)";\n\0"};
nctemp9352=&nctemp9353;
nctempchar1* nctemp9350= nctemp9352;
int nctemp9354=CodeEs(nctemp9348,nctemp9350);
return lval;
}
}
}
else{
struct tree* nctemp9365= p;
nctempchar1* nctemp9367=PtreeGetdef(nctemp9365);
nctempchar1* nctemp9363= nctemp9367;
struct nctempchar1 *nctemp9370;
static struct nctempchar1 nctemp9371 = {{ 3}, (char*)"==\0"};
nctemp9370=&nctemp9371;
nctempchar1* nctemp9368= nctemp9370;
int nctemp9372=LibeStrcmp(nctemp9363,nctemp9368);
int nctemp9360 = (nctemp9372 ==1);
struct tree* nctemp9380= p;
nctempchar1* nctemp9382=PtreeGetdef(nctemp9380);
nctempchar1* nctemp9378= nctemp9382;
struct nctempchar1 *nctemp9385;
static struct nctempchar1 nctemp9386 = {{ 3}, (char*)"!=\0"};
nctemp9385=&nctemp9386;
nctempchar1* nctemp9383= nctemp9385;
int nctemp9387=LibeStrcmp(nctemp9378,nctemp9383);
int nctemp9375 = (nctemp9387 ==1);
int nctemp9357 = (nctemp9360 || nctemp9375);
if(nctemp9357)
{
struct tree* nctemp9394= np;
nctempchar1* nctemp9396=PtreeGetref(nctemp9394);
nctempchar1* nctemp9392= nctemp9396;
struct nctempchar1 *nctemp9399;
static struct nctempchar1 nctemp9400 = {{ 5}, (char*)"aref\0"};
nctemp9399=&nctemp9400;
nctempchar1* nctemp9397= nctemp9399;
int nctemp9401=LibeStrcmp(nctemp9392,nctemp9397);
int nctemp9389 = (nctemp9401 ==1);
if(nctemp9389)
{
sp =np;
struct tree* nctemp9414= np;
struct tree* nctemp9416=PtreeMvsister(nctemp9414);
struct tree* nctemp9412= nctemp9416;
nctempchar1* nctemp9417=PtreeGetname(nctemp9412);
nctempchar1* nctemp9410= nctemp9417;
struct nctempchar1 *nctemp9420;
static struct nctempchar1 nctemp9421 = {{ 10}, (char*)"iconstant\0"};
nctemp9420=&nctemp9421;
nctempchar1* nctemp9418= nctemp9420;
int nctemp9422=LibeStrcmp(nctemp9410,nctemp9418);
struct tree* nctemp9428= np;
struct tree* nctemp9430=PtreeMvsister(nctemp9428);
struct tree* nctemp9426= nctemp9430;
nctempchar1* nctemp9431=PtreeGetdef(nctemp9426);
nctempchar1* nctemp9424= nctemp9431;
struct nctempchar1 *nctemp9434;
static struct nctempchar1 nctemp9435 = {{ 2}, (char*)"0\0"};
nctemp9434=&nctemp9435;
nctempchar1* nctemp9432= nctemp9434;
int nctemp9436=LibeStrcmp(nctemp9424,nctemp9432);
int nctemp9407 = (nctemp9422 && nctemp9436);
if(nctemp9407)
{
struct tree* nctemp9438= p;
struct nctempchar1 *nctemp9442;
static struct nctempchar1 nctemp9443 = {{ 7}, (char*)"nctemp\0"};
nctemp9442=&nctemp9443;
nctempchar1* nctemp9440= nctemp9442;
int nctemp9444=CodeEs(nctemp9438,nctemp9440);
struct tree* nctemp9446= p;
struct tree* nctemp9450= sp;
nctempchar1* nctemp9452=PtreeGetype(nctemp9450);
nctempchar1* nctemp9448= nctemp9452;
int nctemp9453=CodeEs(nctemp9446,nctemp9448);
struct tree* nctemp9457= sp;
int nctemp9459=PtreeGetrank(nctemp9457);
int nctemp9455= nctemp9459;
int nctemp9460=CodeEd(nctemp9455);
struct tree* nctemp9462= p;
struct nctempchar1 *nctemp9466;
static struct nctempchar1 nctemp9467 = {{ 3}, (char*)" *\0"};
nctemp9466=&nctemp9467;
nctempchar1* nctemp9464= nctemp9466;
int nctemp9468=CodeEs(nctemp9462,nctemp9464);
struct tree* nctemp9470= p;
nctempchar1* nctemp9472= tempi;
int nctemp9475=CodeEs(nctemp9470,nctemp9472);
struct tree* nctemp9477= p;
struct nctempchar1 *nctemp9481;
static struct nctempchar1 nctemp9482 = {{ 3}, (char*)" =\0"};
nctemp9481=&nctemp9482;
nctempchar1* nctemp9479= nctemp9481;
int nctemp9483=CodeEs(nctemp9477,nctemp9479);
struct tree* nctemp9485= p;
nctempchar1* nctemp9487= lval;
int nctemp9490=CodeEs(nctemp9485,nctemp9487);
struct tree* nctemp9492= p;
struct nctempchar1 *nctemp9496;
static struct nctempchar1 nctemp9497 = {{ 4}, (char*)";\n\0"};
nctemp9496=&nctemp9497;
nctempchar1* nctemp9494= nctemp9496;
int nctemp9498=CodeEs(nctemp9492,nctemp9494);
struct tree* nctemp9500= p;
nctempchar1* nctemp9502= type;
int nctemp9505=CodeEs(nctemp9500,nctemp9502);
struct tree* nctemp9507= p;
struct nctempchar1 *nctemp9511;
static struct nctempchar1 nctemp9512 = {{ 2}, (char*)" \0"};
nctemp9511=&nctemp9512;
nctempchar1* nctemp9509= nctemp9511;
int nctemp9513=CodeEs(nctemp9507,nctemp9509);
struct tree* nctemp9515= p;
nctempchar1* nctemp9517= tempr;
int nctemp9520=CodeEs(nctemp9515,nctemp9517);
struct tree* nctemp9522= p;
struct nctempchar1 *nctemp9526;
static struct nctempchar1 nctemp9527 = {{ 4}, (char*)" =(\0"};
nctemp9526=&nctemp9527;
nctempchar1* nctemp9524= nctemp9526;
int nctemp9528=CodeEs(nctemp9522,nctemp9524);
struct tree* nctemp9530= p;
nctempchar1* nctemp9532= tempi;
int nctemp9535=CodeEs(nctemp9530,nctemp9532);
struct tree* nctemp9537= p;
struct tree* nctemp9541= p;
nctempchar1* nctemp9543=PtreeGetdef(nctemp9541);
nctempchar1* nctemp9539= nctemp9543;
int nctemp9544=CodeEs(nctemp9537,nctemp9539);
struct tree* nctemp9546= p;
nctempchar1* nctemp9548= rval;
int nctemp9551=CodeEs(nctemp9546,nctemp9548);
struct tree* nctemp9553= p;
struct nctempchar1 *nctemp9557;
static struct nctempchar1 nctemp9558 = {{ 5}, (char*)");\n\0"};
nctemp9557=&nctemp9558;
nctempchar1* nctemp9555= nctemp9557;
int nctemp9559=CodeEs(nctemp9553,nctemp9555);
return tempr;
}
else{
struct tree* nctemp9563= p;
nctempchar1* nctemp9565= type;
int nctemp9568=CodeEs(nctemp9563,nctemp9565);
struct tree* nctemp9570= p;
struct nctempchar1 *nctemp9574;
static struct nctempchar1 nctemp9575 = {{ 2}, (char*)" \0"};
nctemp9574=&nctemp9575;
nctempchar1* nctemp9572= nctemp9574;
int nctemp9576=CodeEs(nctemp9570,nctemp9572);
struct tree* nctemp9578= p;
nctempchar1* nctemp9580= tempr;
int nctemp9583=CodeEs(nctemp9578,nctemp9580);
struct tree* nctemp9585= p;
struct nctempchar1 *nctemp9589;
static struct nctempchar1 nctemp9590 = {{ 5}, (char*)" = (\0"};
nctemp9589=&nctemp9590;
nctempchar1* nctemp9587= nctemp9589;
int nctemp9591=CodeEs(nctemp9585,nctemp9587);
struct tree* nctemp9593= p;
nctempchar1* nctemp9595= lval;
int nctemp9598=CodeEs(nctemp9593,nctemp9595);
struct tree* nctemp9600= p;
struct tree* nctemp9604= p;
nctempchar1* nctemp9606=PtreeGetdef(nctemp9604);
nctempchar1* nctemp9602= nctemp9606;
int nctemp9607=CodeEs(nctemp9600,nctemp9602);
struct tree* nctemp9609= p;
nctempchar1* nctemp9611= rval;
int nctemp9614=CodeEs(nctemp9609,nctemp9611);
struct tree* nctemp9616= p;
struct nctempchar1 *nctemp9620;
static struct nctempchar1 nctemp9621 = {{ 5}, (char*)");\n\0"};
nctemp9620=&nctemp9621;
nctempchar1* nctemp9618= nctemp9620;
int nctemp9622=CodeEs(nctemp9616,nctemp9618);
return lval;
}
}
else{
struct tree* nctemp9626= p;
nctempchar1* nctemp9628= type;
int nctemp9631=CodeEs(nctemp9626,nctemp9628);
struct tree* nctemp9633= p;
struct nctempchar1 *nctemp9637;
static struct nctempchar1 nctemp9638 = {{ 2}, (char*)" \0"};
nctemp9637=&nctemp9638;
nctempchar1* nctemp9635= nctemp9637;
int nctemp9639=CodeEs(nctemp9633,nctemp9635);
struct tree* nctemp9641= p;
nctempchar1* nctemp9643= tempr;
int nctemp9646=CodeEs(nctemp9641,nctemp9643);
struct tree* nctemp9648= p;
struct nctempchar1 *nctemp9652;
static struct nctempchar1 nctemp9653 = {{ 5}, (char*)" = (\0"};
nctemp9652=&nctemp9653;
nctempchar1* nctemp9650= nctemp9652;
int nctemp9654=CodeEs(nctemp9648,nctemp9650);
struct tree* nctemp9656= p;
nctempchar1* nctemp9658= lval;
int nctemp9661=CodeEs(nctemp9656,nctemp9658);
struct tree* nctemp9663= p;
struct nctempchar1 *nctemp9667;
static struct nctempchar1 nctemp9668 = {{ 2}, (char*)" \0"};
nctemp9667=&nctemp9668;
nctempchar1* nctemp9665= nctemp9667;
int nctemp9669=CodeEs(nctemp9663,nctemp9665);
struct tree* nctemp9671= p;
struct tree* nctemp9675= p;
nctempchar1* nctemp9677=PtreeGetdef(nctemp9675);
nctempchar1* nctemp9673= nctemp9677;
int nctemp9678=CodeEs(nctemp9671,nctemp9673);
struct tree* nctemp9680= p;
nctempchar1* nctemp9682= rval;
int nctemp9685=CodeEs(nctemp9680,nctemp9682);
struct tree* nctemp9687= p;
struct nctempchar1 *nctemp9691;
static struct nctempchar1 nctemp9692 = {{ 5}, (char*)");\n\0"};
nctemp9691=&nctemp9692;
nctempchar1* nctemp9689= nctemp9691;
int nctemp9693=CodeEs(nctemp9687,nctemp9689);
return tempr;
}
}
else{
struct tree* nctemp9697= p;
nctempchar1* nctemp9699= type;
int nctemp9702=CodeEs(nctemp9697,nctemp9699);
struct tree* nctemp9704= p;
struct nctempchar1 *nctemp9708;
static struct nctempchar1 nctemp9709 = {{ 2}, (char*)" \0"};
nctemp9708=&nctemp9709;
nctempchar1* nctemp9706= nctemp9708;
int nctemp9710=CodeEs(nctemp9704,nctemp9706);
struct tree* nctemp9712= p;
nctempchar1* nctemp9714= tempr;
int nctemp9717=CodeEs(nctemp9712,nctemp9714);
struct tree* nctemp9719= p;
struct nctempchar1 *nctemp9723;
static struct nctempchar1 nctemp9724 = {{ 5}, (char*)" = (\0"};
nctemp9723=&nctemp9724;
nctempchar1* nctemp9721= nctemp9723;
int nctemp9725=CodeEs(nctemp9719,nctemp9721);
struct tree* nctemp9727= p;
nctempchar1* nctemp9729= lval;
int nctemp9732=CodeEs(nctemp9727,nctemp9729);
struct tree* nctemp9734= p;
struct nctempchar1 *nctemp9738;
static struct nctempchar1 nctemp9739 = {{ 2}, (char*)" \0"};
nctemp9738=&nctemp9739;
nctempchar1* nctemp9736= nctemp9738;
int nctemp9740=CodeEs(nctemp9734,nctemp9736);
struct tree* nctemp9742= p;
struct tree* nctemp9746= p;
nctempchar1* nctemp9748=PtreeGetdef(nctemp9746);
nctempchar1* nctemp9744= nctemp9748;
int nctemp9749=CodeEs(nctemp9742,nctemp9744);
struct tree* nctemp9751= p;
struct nctempchar1 *nctemp9755;
static struct nctempchar1 nctemp9756 = {{ 2}, (char*)" \0"};
nctemp9755=&nctemp9756;
nctempchar1* nctemp9753= nctemp9755;
int nctemp9757=CodeEs(nctemp9751,nctemp9753);
struct tree* nctemp9759= p;
nctempchar1* nctemp9761= rval;
int nctemp9764=CodeEs(nctemp9759,nctemp9761);
struct tree* nctemp9766= p;
struct nctempchar1 *nctemp9770;
static struct nctempchar1 nctemp9771 = {{ 5}, (char*)");\n\0"};
nctemp9770=&nctemp9771;
nctempchar1* nctemp9768= nctemp9770;
int nctemp9772=CodeEs(nctemp9766,nctemp9768);
return tempr;
}
}
}
}
else{
struct tree* nctemp9776= p;
nctempchar1* nctemp9778=CodeUnexpr(nctemp9776);
return nctemp9778;
}
}
int CodeDimprod (struct tree* p,nctempchar1 *name,int n)
{
int j;
j =0;
int nctemp9791 = n - 1;
int nctemp9783 = (j < nctemp9791);
while(nctemp9783){
{
struct tree* nctemp9793= p;
nctempchar1* nctemp9795= name;
int nctemp9798=CodeEs(nctemp9793,nctemp9795);
struct tree* nctemp9800= p;
struct nctempchar1 *nctemp9804;
static struct nctempchar1 nctemp9805 = {{ 5}, (char*)"->d[\0"};
nctemp9804=&nctemp9805;
nctempchar1* nctemp9802= nctemp9804;
int nctemp9806=CodeEs(nctemp9800,nctemp9802);
int nctemp9808= j;
int nctemp9810=CodeEd(nctemp9808);
struct tree* nctemp9812= p;
struct nctempchar1 *nctemp9816;
static struct nctempchar1 nctemp9817 = {{ 2}, (char*)"]\0"};
nctemp9816=&nctemp9817;
nctempchar1* nctemp9814= nctemp9816;
int nctemp9818=CodeEs(nctemp9812,nctemp9814);
struct tree* nctemp9820= p;
struct nctempchar1 *nctemp9824;
static struct nctempchar1 nctemp9825 = {{ 2}, (char*)"*\0"};
nctemp9824=&nctemp9825;
nctempchar1* nctemp9822= nctemp9824;
int nctemp9826=CodeEs(nctemp9820,nctemp9822);
}
int nctemp9835 = j + 1;
j =nctemp9835;
int nctemp9844 = n - 1;
int nctemp9836 = (j < nctemp9844);
nctemp9783=nctemp9836;
}
return 1;
}
int CodeSarray (struct tree* p)
{
nctempchar1 *name;
struct symbol* tp;
struct tree* sp;
struct tree* q;
int rank;
int i;
struct tree* nctemp9851= p;
nctempchar1* nctemp9853=PtreeGetdef(nctemp9851);
name=nctemp9853;
nctempchar1* nctemp9858= name;
struct symbol* nctemp9861=SymLook(nctemp9858);
tp =nctemp9861;
int nctemp9862 = (tp ==0);
if(nctemp9862)
{
nctempchar1* nctemp9867= name;
int nctemp9870=CodeError(nctemp9867);
}
struct symbol* nctemp9875= tp;
int nctemp9877=SymGetrank(nctemp9875);
rank =nctemp9877;
struct tree* nctemp9882= p;
struct tree* nctemp9884=PtreeMvchild(nctemp9882);
sp =nctemp9884;
int nctemp9885 = (sp ==0);
if(nctemp9885)
{
struct tree* nctemp9890= p;
struct tree* nctemp9894= p;
nctempchar1* nctemp9896=PtreeGetdef(nctemp9894);
nctempchar1* nctemp9892= nctemp9896;
int nctemp9897=CodeEs(nctemp9890,nctemp9892);
return 1;
}
else{
struct tree* nctemp9904= sp;
nctempchar1* nctemp9906=PtreeGetname(nctemp9904);
nctempchar1* nctemp9902= nctemp9906;
struct nctempchar1 *nctemp9909;
static struct nctempchar1 nctemp9910 = {{ 9}, (char*)"exprlist\0"};
nctemp9909=&nctemp9910;
nctempchar1* nctemp9907= nctemp9909;
int nctemp9911=LibeStrcmp(nctemp9902,nctemp9907);
int nctemp9899 = (nctemp9911 ==0);
if(nctemp9899)
{
struct tree* nctemp9914= p;
struct tree* nctemp9918= p;
nctempchar1* nctemp9920=PtreeGetdef(nctemp9918);
nctempchar1* nctemp9916= nctemp9920;
int nctemp9921=CodeEs(nctemp9914,nctemp9916);
return 1;
}
}
p = sp;
struct tree* nctemp9927= p;
struct tree* nctemp9929=PtreeMvchild(nctemp9927);
p =nctemp9929;
struct tree* nctemp9931= p;
nctempchar1* nctemp9933= name;
int nctemp9936=CodeEs(nctemp9931,nctemp9933);
struct tree* nctemp9938= p;
struct nctempchar1 *nctemp9942;
static struct nctempchar1 nctemp9943 = {{ 4}, (char*)"->a\0"};
nctemp9942=&nctemp9943;
nctempchar1* nctemp9940= nctemp9942;
int nctemp9944=CodeEs(nctemp9938,nctemp9940);
struct tree* nctemp9946= p;
struct nctempchar1 *nctemp9950;
static struct nctempchar1 nctemp9951 = {{ 2}, (char*)"[\0"};
nctemp9950=&nctemp9951;
nctempchar1* nctemp9948= nctemp9950;
int nctemp9952=CodeEs(nctemp9946,nctemp9948);
q = p;
i =0;
int nctemp9957 = (i < rank);
while(nctemp9957){
{
int nctemp9961 = (i ==0);
if(nctemp9961)
{
struct tree* nctemp9966= q;
int nctemp9968=CodeSexpr(nctemp9966);
}
else{
struct tree* nctemp9973= q;
struct tree* nctemp9975=PtreeMvsister(nctemp9973);
q =nctemp9975;
struct tree* nctemp9977= p;
struct nctempchar1 *nctemp9981;
static struct nctempchar1 nctemp9982 = {{ 2}, (char*)"+\0"};
nctemp9981=&nctemp9982;
nctempchar1* nctemp9979= nctemp9981;
int nctemp9983=CodeEs(nctemp9977,nctemp9979);
struct tree* nctemp9985= p;
nctempchar1* nctemp9987= name;
int nctemp9995 = i + 1;
int nctemp9990= nctemp9995;
int nctemp9996=CodeDimprod(nctemp9985,nctemp9987,nctemp9990);
struct tree* nctemp9998= q;
int nctemp10000=CodeSexpr(nctemp9998);
}
}
int nctemp10009 = i + 1;
i =nctemp10009;
int nctemp10010 = (i < rank);
nctemp9957=nctemp10010;
}
struct tree* nctemp10015= p;
struct nctempchar1 *nctemp10019;
static struct nctempchar1 nctemp10020 = {{ 2}, (char*)"]\0"};
nctemp10019=&nctemp10020;
nctempchar1* nctemp10017= nctemp10019;
int nctemp10021=CodeEs(nctemp10015,nctemp10017);
return 1;
}
int CodeIdstruct (struct tree* p)
{
struct symbol* tp;
struct symbol* up;
struct symbol* uup;
struct tree* np;
struct tree* sp;
struct tree* nctemp10028= p;
nctempchar1* nctemp10030=PtreeGetarray(nctemp10028);
nctempchar1* nctemp10026= nctemp10030;
struct nctempchar1 *nctemp10033;
static struct nctempchar1 nctemp10034 = {{ 6}, (char*)"array\0"};
nctemp10033=&nctemp10034;
nctempchar1* nctemp10031= nctemp10033;
int nctemp10035=LibeStrcmp(nctemp10026,nctemp10031);
int nctemp10023 = (nctemp10035 ==1);
if(nctemp10023)
{
struct tree* nctemp10038= p;
int nctemp10040=CodeSarray(nctemp10038);
struct tree* nctemp10045= p;
struct tree* nctemp10047=PtreeMvchild(nctemp10045);
np =nctemp10047;
int nctemp10048 = (np ==0);
if(nctemp10048)
{
return 1;
}
struct tree* nctemp10057= np;
struct tree* nctemp10059=PtreeMvsister(nctemp10057);
sp =nctemp10059;
int nctemp10060 = (sp ==0);
if(nctemp10060)
{
return 1;
}
np =sp;
tp =SymLtp;
up =SymEtp;
struct tree* nctemp10083= p;
nctempchar1* nctemp10085=PtreeGetdef(nctemp10083);
nctempchar1* nctemp10081= nctemp10085;
struct symbol* nctemp10086=SymLook(nctemp10081);
uup =nctemp10086;
struct symbol* nctemp10093= uup;
nctempchar1* nctemp10095=SymGetype(nctemp10093);
nctempchar1* nctemp10091= nctemp10095;
struct symbol* nctemp10096=SymLook(nctemp10091);
uup =nctemp10096;
struct symbol* nctemp10101= uup;
struct symbol* nctemp10103=SymGetable(nctemp10101);
SymLtp =nctemp10103;
struct tree* nctemp10105= np;
struct nctempchar1 *nctemp10109;
static struct nctempchar1 nctemp10110 = {{ 2}, (char*)".\0"};
nctemp10109=&nctemp10110;
nctempchar1* nctemp10107= nctemp10109;
int nctemp10111=CodeEs(nctemp10105,nctemp10107);
struct tree* nctemp10113= np;
int nctemp10115=CodeSarray(nctemp10113);
SymLtp =tp;
SymEtp =up;
}
else{
struct tree* nctemp10125= p;
struct tree* nctemp10129= p;
nctempchar1* nctemp10131=PtreeGetdef(nctemp10129);
nctempchar1* nctemp10127= nctemp10131;
int nctemp10132=CodeEs(nctemp10125,nctemp10127);
struct tree* nctemp10140= p;
struct tree* nctemp10142=PtreeMvchild(nctemp10140);
np =nctemp10142;
int nctemp10133 = (np !=0);
if(nctemp10133)
{
struct tree* nctemp10145= p;
struct nctempchar1 *nctemp10149;
static struct nctempchar1 nctemp10150 = {{ 3}, (char*)"->\0"};
nctemp10149=&nctemp10150;
nctempchar1* nctemp10147= nctemp10149;
int nctemp10151=CodeEs(nctemp10145,nctemp10147);
struct tree* nctemp10153= p;
struct tree* nctemp10157= np;
nctempchar1* nctemp10159=PtreeGetdef(nctemp10157);
nctempchar1* nctemp10155= nctemp10159;
int nctemp10160=CodeEs(nctemp10153,nctemp10155);
}
return 1;
}
return 1;
}
int CodeSident (struct tree* p)
{
struct tree* nctemp10168= p;
nctempchar1* nctemp10170=PtreeGetstruct(nctemp10168);
nctempchar1* nctemp10166= nctemp10170;
struct nctempchar1 *nctemp10173;
static struct nctempchar1 nctemp10174 = {{ 7}, (char*)"struct\0"};
nctemp10173=&nctemp10174;
nctempchar1* nctemp10171= nctemp10173;
int nctemp10175=LibeStrcmp(nctemp10166,nctemp10171);
int nctemp10163 = (nctemp10175 ==1);
if(nctemp10163)
{
struct tree* nctemp10178= p;
int nctemp10180=CodeIdstruct(nctemp10178);
}
else{
struct tree* nctemp10186= p;
nctempchar1* nctemp10188=PtreeGetarray(nctemp10186);
nctempchar1* nctemp10184= nctemp10188;
struct nctempchar1 *nctemp10191;
static struct nctempchar1 nctemp10192 = {{ 6}, (char*)"array\0"};
nctemp10191=&nctemp10192;
nctempchar1* nctemp10189= nctemp10191;
int nctemp10193=LibeStrcmp(nctemp10184,nctemp10189);
int nctemp10181 = (nctemp10193 ==1);
if(nctemp10181)
{
struct tree* nctemp10196= p;
int nctemp10198=CodeSarray(nctemp10196);
return 1;
}
else{
struct tree* nctemp10201= p;
struct tree* nctemp10205= p;
nctempchar1* nctemp10207=PtreeGetdef(nctemp10205);
nctempchar1* nctemp10203= nctemp10207;
int nctemp10208=CodeEs(nctemp10201,nctemp10203);
return 1;
}
}
return 1;
}
int CodeSfcall (struct tree* p)
{
struct symbol* tp;
struct tree* sp;
struct tree* nctemp10217= p;
nctempchar1* nctemp10219=PtreeGetdef(nctemp10217);
nctempchar1* nctemp10215= nctemp10219;
struct symbol* nctemp10220= SymEtp;
struct symbol* nctemp10222=SymLookup(nctemp10215,nctemp10220);
tp =nctemp10222;
struct tree* nctemp10227= p;
struct tree* nctemp10229=PtreeMvchild(nctemp10227);
sp =nctemp10229;
int nctemp10230 = (sp !=0);
if(nctemp10230)
{
struct tree* nctemp10239= sp;
nctempchar1* nctemp10241=PtreeGetname(nctemp10239);
nctempchar1* nctemp10237= nctemp10241;
struct nctempchar1 *nctemp10244;
static struct nctempchar1 nctemp10245 = {{ 9}, (char*)"exprlist\0"};
nctemp10244=&nctemp10245;
nctempchar1* nctemp10242= nctemp10244;
int nctemp10246=LibeStrcmp(nctemp10237,nctemp10242);
int nctemp10234 = (nctemp10246 ==1);
if(nctemp10234)
{
struct tree* nctemp10252= sp;
struct tree* nctemp10254=PtreeMvchild(nctemp10252);
sp =nctemp10254;
}
}
struct tree* nctemp10256= p;
struct symbol* nctemp10260= tp;
nctempchar1* nctemp10262=SymGetname(nctemp10260);
nctempchar1* nctemp10258= nctemp10262;
int nctemp10263=CodeEs(nctemp10256,nctemp10258);
struct tree* nctemp10265= p;
struct nctempchar1 *nctemp10269;
static struct nctempchar1 nctemp10270 = {{ 2}, (char*)"(\0"};
nctemp10269=&nctemp10270;
nctempchar1* nctemp10267= nctemp10269;
int nctemp10271=CodeEs(nctemp10265,nctemp10267);
int nctemp10272 = (sp !=0);
int nctemp10276=nctemp10272;
while(nctemp10276)
{{
struct tree* nctemp10278= sp;
int nctemp10280=CodeSexpr(nctemp10278);
struct tree* nctemp10288= sp;
struct tree* nctemp10290=PtreeMvsister(nctemp10288);
sp =nctemp10290;
int nctemp10281 = (sp !=0);
if(nctemp10281)
{
struct tree* nctemp10293= p;
struct nctempchar1 *nctemp10297;
static struct nctempchar1 nctemp10298 = {{ 2}, (char*)",\0"};
nctemp10297=&nctemp10298;
nctempchar1* nctemp10295= nctemp10297;
int nctemp10299=CodeEs(nctemp10293,nctemp10295);
}
}
int nctemp10300 = (sp !=0);
nctemp10276=nctemp10300;}struct tree* nctemp10305= p;
struct nctempchar1 *nctemp10309;
static struct nctempchar1 nctemp10310 = {{ 2}, (char*)")\0"};
nctemp10309=&nctemp10310;
nctempchar1* nctemp10307= nctemp10309;
int nctemp10311=CodeEs(nctemp10305,nctemp10307);
return 1;
}
int CodeScast (struct tree* p)
{
struct tree* np;
struct tree* sp;
struct tree* nctemp10318= p;
nctempchar1* nctemp10320=PtreeGetname(nctemp10318);
nctempchar1* nctemp10316= nctemp10320;
struct nctempchar1 *nctemp10323;
static struct nctempchar1 nctemp10324 = {{ 5}, (char*)"cast\0"};
nctemp10323=&nctemp10324;
nctempchar1* nctemp10321= nctemp10323;
int nctemp10325=LibeStrcmp(nctemp10316,nctemp10321);
int nctemp10313 = (nctemp10325 ==1);
if(nctemp10313)
{
struct tree* nctemp10331= p;
struct tree* nctemp10333=PtreeMvchild(nctemp10331);
np =nctemp10333;
struct tree* nctemp10338= np;
struct tree* nctemp10340=PtreeMvsister(nctemp10338);
sp =nctemp10340;
struct tree* nctemp10342= p;
struct nctempchar1 *nctemp10346;
static struct nctempchar1 nctemp10347 = {{ 2}, (char*)"(\0"};
nctemp10346=&nctemp10347;
nctempchar1* nctemp10344= nctemp10346;
int nctemp10348=CodeEs(nctemp10342,nctemp10344);
struct tree* nctemp10354= np;
nctempchar1* nctemp10356=PtreeGetstruct(nctemp10354);
nctempchar1* nctemp10352= nctemp10356;
struct nctempchar1 *nctemp10359;
static struct nctempchar1 nctemp10360 = {{ 7}, (char*)"struct\0"};
nctemp10359=&nctemp10360;
nctempchar1* nctemp10357= nctemp10359;
int nctemp10361=LibeStrcmp(nctemp10352,nctemp10357);
int nctemp10349 = (nctemp10361 ==1);
if(nctemp10349)
{
struct tree* nctemp10364= p;
struct nctempchar1 *nctemp10368;
static struct nctempchar1 nctemp10369 = {{ 8}, (char*)"struct \0"};
nctemp10368=&nctemp10369;
nctempchar1* nctemp10366= nctemp10368;
int nctemp10370=CodeEs(nctemp10364,nctemp10366);
}
struct tree* nctemp10372= p;
struct tree* nctemp10376= np;
nctempchar1* nctemp10378=PtreeGetdef(nctemp10376);
nctempchar1* nctemp10374= nctemp10378;
int nctemp10379=CodeEs(nctemp10372,nctemp10374);
struct tree* nctemp10385= np;
nctempchar1* nctemp10387=PtreeGetstruct(nctemp10385);
nctempchar1* nctemp10383= nctemp10387;
struct nctempchar1 *nctemp10390;
static struct nctempchar1 nctemp10391 = {{ 6}, (char*)"array\0"};
nctemp10390=&nctemp10391;
nctempchar1* nctemp10388= nctemp10390;
int nctemp10392=LibeStrcmp(nctemp10383,nctemp10388);
int nctemp10380 = (nctemp10392 ==1);
if(nctemp10380)
{
struct tree* nctemp10395= p;
struct nctempchar1 *nctemp10399;
static struct nctempchar1 nctemp10400 = {{ 2}, (char*)"*\0"};
nctemp10399=&nctemp10400;
nctempchar1* nctemp10397= nctemp10399;
int nctemp10401=CodeEs(nctemp10395,nctemp10397);
}
struct tree* nctemp10403= p;
struct nctempchar1 *nctemp10407;
static struct nctempchar1 nctemp10408 = {{ 3}, (char*)")(\0"};
nctemp10407=&nctemp10408;
nctempchar1* nctemp10405= nctemp10407;
int nctemp10409=CodeEs(nctemp10403,nctemp10405);
struct tree* nctemp10411= sp;
int nctemp10413=CodeSexpr(nctemp10411);
struct tree* nctemp10415= p;
struct nctempchar1 *nctemp10419;
static struct nctempchar1 nctemp10420 = {{ 2}, (char*)")\0"};
nctemp10419=&nctemp10420;
nctempchar1* nctemp10417= nctemp10419;
int nctemp10421=CodeEs(nctemp10415,nctemp10417);
}
return 1;
}
int CodeSprimexpr (struct tree* p)
{
struct tree* nctemp10428= p;
nctempchar1* nctemp10430=PtreeGetname(nctemp10428);
nctempchar1* nctemp10426= nctemp10430;
struct nctempchar1 *nctemp10433;
static struct nctempchar1 nctemp10434 = {{ 11}, (char*)"identifier\0"};
nctemp10433=&nctemp10434;
nctempchar1* nctemp10431= nctemp10433;
int nctemp10435=LibeStrcmp(nctemp10426,nctemp10431);
int nctemp10423 = (nctemp10435 ==1);
if(nctemp10423)
{
struct tree* nctemp10438= p;
int nctemp10440=CodeSident(nctemp10438);
}
else{
struct tree* nctemp10446= p;
nctempchar1* nctemp10448=PtreeGetname(nctemp10446);
nctempchar1* nctemp10444= nctemp10448;
struct nctempchar1 *nctemp10451;
static struct nctempchar1 nctemp10452 = {{ 6}, (char*)"fcall\0"};
nctemp10451=&nctemp10452;
nctempchar1* nctemp10449= nctemp10451;
int nctemp10453=LibeStrcmp(nctemp10444,nctemp10449);
int nctemp10441 = (nctemp10453 ==1);
if(nctemp10441)
{
struct tree* nctemp10456= p;
int nctemp10458=CodeSfcall(nctemp10456);
}
else{
struct tree* nctemp10464= p;
nctempchar1* nctemp10466=PtreeGetname(nctemp10464);
nctempchar1* nctemp10462= nctemp10466;
struct nctempchar1 *nctemp10469;
static struct nctempchar1 nctemp10470 = {{ 5}, (char*)"cast\0"};
nctemp10469=&nctemp10470;
nctempchar1* nctemp10467= nctemp10469;
int nctemp10471=LibeStrcmp(nctemp10462,nctemp10467);
int nctemp10459 = (nctemp10471 ==1);
if(nctemp10459)
{
struct tree* nctemp10474= p;
int nctemp10476=CodeScast(nctemp10474);
}
else{
struct tree* nctemp10482= p;
nctempchar1* nctemp10484=PtreeGetname(nctemp10482);
nctempchar1* nctemp10480= nctemp10484;
struct nctempchar1 *nctemp10487;
static struct nctempchar1 nctemp10488 = {{ 10}, (char*)"iconstant\0"};
nctemp10487=&nctemp10488;
nctempchar1* nctemp10485= nctemp10487;
int nctemp10489=LibeStrcmp(nctemp10480,nctemp10485);
int nctemp10477 = (nctemp10489 ==1);
if(nctemp10477)
{
struct tree* nctemp10492= p;
struct tree* nctemp10496= p;
nctempchar1* nctemp10498=PtreeGetdef(nctemp10496);
nctempchar1* nctemp10494= nctemp10498;
int nctemp10499=CodeEs(nctemp10492,nctemp10494);
}
else{
struct tree* nctemp10505= p;
nctempchar1* nctemp10507=PtreeGetname(nctemp10505);
nctempchar1* nctemp10503= nctemp10507;
struct nctempchar1 *nctemp10510;
static struct nctempchar1 nctemp10511 = {{ 10}, (char*)"sconstant\0"};
nctemp10510=&nctemp10511;
nctempchar1* nctemp10508= nctemp10510;
int nctemp10512=LibeStrcmp(nctemp10503,nctemp10508);
int nctemp10500 = (nctemp10512 ==1);
if(nctemp10500)
{
struct tree* nctemp10515= p;
struct tree* nctemp10519= p;
nctempchar1* nctemp10521=PtreeGetdef(nctemp10519);
nctempchar1* nctemp10517= nctemp10521;
int nctemp10522=CodeEs(nctemp10515,nctemp10517);
}
else{
struct tree* nctemp10528= p;
nctempchar1* nctemp10530=PtreeGetname(nctemp10528);
nctempchar1* nctemp10526= nctemp10530;
struct nctempchar1 *nctemp10533;
static struct nctempchar1 nctemp10534 = {{ 10}, (char*)"rconstant\0"};
nctemp10533=&nctemp10534;
nctempchar1* nctemp10531= nctemp10533;
int nctemp10535=LibeStrcmp(nctemp10526,nctemp10531);
int nctemp10523 = (nctemp10535 ==1);
if(nctemp10523)
{
struct tree* nctemp10538= p;
struct tree* nctemp10542= p;
nctempchar1* nctemp10544=PtreeGetdef(nctemp10542);
nctempchar1* nctemp10540= nctemp10544;
int nctemp10545=CodeEs(nctemp10538,nctemp10540);
}
else{
struct tree* nctemp10547= p;
struct nctempchar1 *nctemp10551;
static struct nctempchar1 nctemp10552 = {{ 2}, (char*)"(\0"};
nctemp10551=&nctemp10552;
nctempchar1* nctemp10549= nctemp10551;
int nctemp10553=CodeEs(nctemp10547,nctemp10549);
struct tree* nctemp10555= p;
int nctemp10557=CodeSbinexpr(nctemp10555);
struct tree* nctemp10559= p;
struct nctempchar1 *nctemp10563;
static struct nctempchar1 nctemp10564 = {{ 2}, (char*)")\0"};
nctemp10563=&nctemp10564;
nctempchar1* nctemp10561= nctemp10563;
int nctemp10565=CodeEs(nctemp10559,nctemp10561);
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
struct tree* nctemp10572= p;
nctempchar1* nctemp10574=PtreeGetname(nctemp10572);
nctempchar1* nctemp10570= nctemp10574;
struct nctempchar1 *nctemp10577;
static struct nctempchar1 nctemp10578 = {{ 7}, (char*)"unexpr\0"};
nctemp10577=&nctemp10578;
nctempchar1* nctemp10575= nctemp10577;
int nctemp10579=LibeStrcmp(nctemp10570,nctemp10575);
int nctemp10567 = (nctemp10579 ==1);
if(nctemp10567)
{
struct tree* nctemp10582= p;
struct nctempchar1 *nctemp10586;
static struct nctempchar1 nctemp10587 = {{ 3}, (char*)" -\0"};
nctemp10586=&nctemp10587;
nctempchar1* nctemp10584= nctemp10586;
int nctemp10588=CodeEs(nctemp10582,nctemp10584);
struct tree* nctemp10592= p;
struct tree* nctemp10594=PtreeMvchild(nctemp10592);
struct tree* nctemp10590= nctemp10594;
int nctemp10595=CodeSprimexpr(nctemp10590);
}
else{
struct tree* nctemp10597= p;
int nctemp10599=CodeSprimexpr(nctemp10597);
}
return 1;
}
int CodeSbinexpr (struct tree* p)
{
struct tree* np;
struct tree* nctemp10606= p;
nctempchar1* nctemp10608=PtreeGetname(nctemp10606);
nctempchar1* nctemp10604= nctemp10608;
struct nctempchar1 *nctemp10611;
static struct nctempchar1 nctemp10612 = {{ 8}, (char*)"binexpr\0"};
nctemp10611=&nctemp10612;
nctempchar1* nctemp10609= nctemp10611;
int nctemp10613=LibeStrcmp(nctemp10604,nctemp10609);
int nctemp10601 = (nctemp10613 ==1);
if(nctemp10601)
{
struct tree* nctemp10619= p;
struct tree* nctemp10621=PtreeMvchild(nctemp10619);
np =nctemp10621;
struct tree* nctemp10623= np;
int nctemp10625=CodeSunexpr(nctemp10623);
struct tree* nctemp10637= p;
nctempchar1* nctemp10639=PtreeGetdef(nctemp10637);
nctempchar1* nctemp10635= nctemp10639;
struct nctempchar1 *nctemp10642;
static struct nctempchar1 nctemp10643 = {{ 2}, (char*)"=\0"};
nctemp10642=&nctemp10643;
nctempchar1* nctemp10640= nctemp10642;
int nctemp10644=LibeStrcmp(nctemp10635,nctemp10640);
int nctemp10632 = (nctemp10644 ==1);
struct tree* nctemp10652= p;
nctempchar1* nctemp10654=PtreeGetdef(nctemp10652);
nctempchar1* nctemp10650= nctemp10654;
struct nctempchar1 *nctemp10657;
static struct nctempchar1 nctemp10658 = {{ 3}, (char*)"==\0"};
nctemp10657=&nctemp10658;
nctempchar1* nctemp10655= nctemp10657;
int nctemp10659=LibeStrcmp(nctemp10650,nctemp10655);
int nctemp10647 = (nctemp10659 ==1);
int nctemp10629 = (nctemp10632 || nctemp10647);
struct tree* nctemp10667= p;
nctempchar1* nctemp10669=PtreeGetdef(nctemp10667);
nctempchar1* nctemp10665= nctemp10669;
struct nctempchar1 *nctemp10672;
static struct nctempchar1 nctemp10673 = {{ 3}, (char*)"!=\0"};
nctemp10672=&nctemp10673;
nctempchar1* nctemp10670= nctemp10672;
int nctemp10674=LibeStrcmp(nctemp10665,nctemp10670);
int nctemp10662 = (nctemp10674 ==1);
int nctemp10626 = (nctemp10629 || nctemp10662);
if(nctemp10626)
{
struct tree* nctemp10681= np;
nctempchar1* nctemp10683=PtreeGetref(nctemp10681);
nctempchar1* nctemp10679= nctemp10683;
struct nctempchar1 *nctemp10686;
static struct nctempchar1 nctemp10687 = {{ 5}, (char*)"aref\0"};
nctemp10686=&nctemp10687;
nctempchar1* nctemp10684= nctemp10686;
int nctemp10688=LibeStrcmp(nctemp10679,nctemp10684);
int nctemp10676 = (nctemp10688 ==1);
if(nctemp10676)
{
struct tree* nctemp10697= np;
struct tree* nctemp10699=PtreeMvsister(nctemp10697);
struct tree* nctemp10695= nctemp10699;
nctempchar1* nctemp10700=PtreeGetname(nctemp10695);
nctempchar1* nctemp10693= nctemp10700;
struct nctempchar1 *nctemp10703;
static struct nctempchar1 nctemp10704 = {{ 10}, (char*)"iconstant\0"};
nctemp10703=&nctemp10704;
nctempchar1* nctemp10701= nctemp10703;
int nctemp10705=LibeStrcmp(nctemp10693,nctemp10701);
struct tree* nctemp10711= np;
struct tree* nctemp10713=PtreeMvsister(nctemp10711);
struct tree* nctemp10709= nctemp10713;
nctempchar1* nctemp10714=PtreeGetdef(nctemp10709);
nctempchar1* nctemp10707= nctemp10714;
struct nctempchar1 *nctemp10717;
static struct nctempchar1 nctemp10718 = {{ 2}, (char*)"0\0"};
nctemp10717=&nctemp10718;
nctempchar1* nctemp10715= nctemp10717;
int nctemp10719=LibeStrcmp(nctemp10707,nctemp10715);
int nctemp10690 = (nctemp10705 && nctemp10719);
if(nctemp10690)
{
struct tree* nctemp10721= p;
struct nctempchar1 *nctemp10725;
static struct nctempchar1 nctemp10726 = {{ 2}, (char*)" \0"};
nctemp10725=&nctemp10726;
nctempchar1* nctemp10723= nctemp10725;
int nctemp10727=CodeEs(nctemp10721,nctemp10723);
}
}
}
struct tree* nctemp10729= p;
struct nctempchar1 *nctemp10733;
static struct nctempchar1 nctemp10734 = {{ 2}, (char*)" \0"};
nctemp10733=&nctemp10734;
nctempchar1* nctemp10731= nctemp10733;
int nctemp10735=CodeEs(nctemp10729,nctemp10731);
struct tree* nctemp10737= p;
struct tree* nctemp10741= p;
nctempchar1* nctemp10743=PtreeGetdef(nctemp10741);
nctempchar1* nctemp10739= nctemp10743;
int nctemp10744=CodeEs(nctemp10737,nctemp10739);
struct tree* nctemp10746= p;
struct nctempchar1 *nctemp10750;
static struct nctempchar1 nctemp10751 = {{ 2}, (char*)" \0"};
nctemp10750=&nctemp10751;
nctempchar1* nctemp10748= nctemp10750;
int nctemp10752=CodeEs(nctemp10746,nctemp10748);
struct tree* nctemp10756= np;
struct tree* nctemp10758=PtreeMvsister(nctemp10756);
struct tree* nctemp10754= nctemp10758;
int nctemp10759=CodeSunexpr(nctemp10754);
}
else{
struct tree* nctemp10761= p;
int nctemp10763=CodeSunexpr(nctemp10761);
}
return 1;
}
int CodeSexpr (struct tree* p)
{
struct tree* sp;
nctempchar1 *rval;
struct tree* nctemp10769= p;
struct tree* nctemp10771=PtreeMvchild(nctemp10769);
sp =nctemp10771;
struct tree* nctemp10773= sp;
int nctemp10775=CodeSbinexpr(nctemp10773);
return 1;
}
nctempchar1 * CodeExpr (struct tree* p)
{
nctempchar1 *rval;
struct tree* sp;
struct tree* nctemp10781= p;
struct tree* nctemp10783=PtreeMvchild(nctemp10781);
sp =nctemp10783;
struct tree* nctemp10789= sp;
nctempchar1* nctemp10791=CodeBinexpr(nctemp10789);
rval=nctemp10791;
return rval;
}
int CodeWhilestmnt (struct tree* p)
{
nctempchar1 *cond;
nctempchar1 *tmp;
nctempchar1 *cond2;
struct tree* sp;
struct tree* nctemp10798= p;
struct tree* nctemp10800=PtreeMvchild(nctemp10798);
p =nctemp10800;
sp = p;
struct tree* nctemp10806= sp;
nctempchar1* nctemp10808=CodeExpr(nctemp10806);
cond=nctemp10808;
nctempchar1* nctemp10814=CodeMktemp();
tmp=nctemp10814;
struct tree* nctemp10816= p;
struct tree* nctemp10820= sp;
nctempchar1* nctemp10822=PtreeGetype(nctemp10820);
nctempchar1* nctemp10818= nctemp10822;
int nctemp10823=CodeEs(nctemp10816,nctemp10818);
struct tree* nctemp10825= p;
struct nctempchar1 *nctemp10829;
static struct nctempchar1 nctemp10830 = {{ 2}, (char*)" \0"};
nctemp10829=&nctemp10830;
nctempchar1* nctemp10827= nctemp10829;
int nctemp10831=CodeEs(nctemp10825,nctemp10827);
struct tree* nctemp10833= p;
nctempchar1* nctemp10835= tmp;
int nctemp10838=CodeEs(nctemp10833,nctemp10835);
struct tree* nctemp10840= p;
struct nctempchar1 *nctemp10844;
static struct nctempchar1 nctemp10845 = {{ 2}, (char*)"=\0"};
nctemp10844=&nctemp10845;
nctempchar1* nctemp10842= nctemp10844;
int nctemp10846=CodeEs(nctemp10840,nctemp10842);
struct tree* nctemp10848= p;
nctempchar1* nctemp10850= cond;
int nctemp10853=CodeEs(nctemp10848,nctemp10850);
struct tree* nctemp10855= p;
struct nctempchar1 *nctemp10859;
static struct nctempchar1 nctemp10860 = {{ 4}, (char*)";\n\0"};
nctemp10859=&nctemp10860;
nctempchar1* nctemp10857= nctemp10859;
int nctemp10861=CodeEs(nctemp10855,nctemp10857);
struct tree* nctemp10863= p;
struct nctempchar1 *nctemp10867;
static struct nctempchar1 nctemp10868 = {{ 7}, (char*)"while(\0"};
nctemp10867=&nctemp10868;
nctempchar1* nctemp10865= nctemp10867;
int nctemp10869=CodeEs(nctemp10863,nctemp10865);
struct tree* nctemp10871= p;
nctempchar1* nctemp10873= tmp;
int nctemp10876=CodeEs(nctemp10871,nctemp10873);
struct tree* nctemp10878= p;
struct nctempchar1 *nctemp10882;
static struct nctempchar1 nctemp10883 = {{ 4}, (char*)")\n\0"};
nctemp10882=&nctemp10883;
nctempchar1* nctemp10880= nctemp10882;
int nctemp10884=CodeEs(nctemp10878,nctemp10880);
struct tree* nctemp10886= p;
struct nctempchar1 *nctemp10890;
static struct nctempchar1 nctemp10891 = {{ 2}, (char*)"{\0"};
nctemp10890=&nctemp10891;
nctempchar1* nctemp10888= nctemp10890;
int nctemp10892=CodeEs(nctemp10886,nctemp10888);
struct tree* nctemp10897= p;
struct tree* nctemp10899=PtreeMvsister(nctemp10897);
p =nctemp10899;
struct tree* nctemp10901= p;
int nctemp10903=CodeStmnt(nctemp10901);
struct tree* nctemp10909= sp;
nctempchar1* nctemp10911=CodeExpr(nctemp10909);
cond2=nctemp10911;
struct tree* nctemp10913= p;
nctempchar1* nctemp10915= tmp;
int nctemp10918=CodeEs(nctemp10913,nctemp10915);
struct tree* nctemp10920= p;
struct nctempchar1 *nctemp10924;
static struct nctempchar1 nctemp10925 = {{ 2}, (char*)"=\0"};
nctemp10924=&nctemp10925;
nctempchar1* nctemp10922= nctemp10924;
int nctemp10926=CodeEs(nctemp10920,nctemp10922);
struct tree* nctemp10928= p;
nctempchar1* nctemp10930= cond2;
int nctemp10933=CodeEs(nctemp10928,nctemp10930);
struct tree* nctemp10935= p;
struct nctempchar1 *nctemp10939;
static struct nctempchar1 nctemp10940 = {{ 2}, (char*)";\0"};
nctemp10939=&nctemp10940;
nctempchar1* nctemp10937= nctemp10939;
int nctemp10941=CodeEs(nctemp10935,nctemp10937);
struct tree* nctemp10943= p;
struct nctempchar1 *nctemp10947;
static struct nctempchar1 nctemp10948 = {{ 2}, (char*)"}\0"};
nctemp10947=&nctemp10948;
nctempchar1* nctemp10945= nctemp10947;
int nctemp10949=CodeEs(nctemp10943,nctemp10945);
return 1;
}
int CodeForstmnt (struct tree* p)
{
struct tree* sp;
struct tree* np;
nctempchar1 *cond;
nctempchar1 *tmp;
struct tree* nctemp10955= p;
struct tree* nctemp10957=PtreeMvchild(nctemp10955);
p =nctemp10957;
struct tree* nctemp10959= p;
nctempchar1* nctemp10961=CodeExpr(nctemp10959);
struct tree* nctemp10966= p;
struct tree* nctemp10968=PtreeMvsister(nctemp10966);
p =nctemp10968;
np = p;
struct tree* nctemp10974= p;
nctempchar1* nctemp10976=CodeExpr(nctemp10974);
cond=nctemp10976;
struct tree* nctemp10978= p;
struct nctempchar1 *nctemp10982;
static struct nctempchar1 nctemp10983 = {{ 7}, (char*)"while(\0"};
nctemp10982=&nctemp10983;
nctempchar1* nctemp10980= nctemp10982;
int nctemp10984=CodeEs(nctemp10978,nctemp10980);
struct tree* nctemp10986= p;
nctempchar1* nctemp10988= cond;
int nctemp10991=CodeEs(nctemp10986,nctemp10988);
struct tree* nctemp10993= p;
struct nctempchar1 *nctemp10997;
static struct nctempchar1 nctemp10998 = {{ 5}, (char*)"){\n\0"};
nctemp10997=&nctemp10998;
nctempchar1* nctemp10995= nctemp10997;
int nctemp10999=CodeEs(nctemp10993,nctemp10995);
struct tree* nctemp11004= p;
struct tree* nctemp11006=PtreeMvsister(nctemp11004);
p =nctemp11006;
sp = p;
struct tree* nctemp11011= p;
struct tree* nctemp11013=PtreeMvsister(nctemp11011);
p =nctemp11013;
struct tree* nctemp11015= p;
int nctemp11017=CodeStmnt(nctemp11015);
struct tree* nctemp11019= sp;
nctempchar1* nctemp11021=CodeExpr(nctemp11019);
struct tree* nctemp11027= np;
nctempchar1* nctemp11029=CodeExpr(nctemp11027);
tmp=nctemp11029;
struct tree* nctemp11031= p;
nctempchar1* nctemp11033= cond;
int nctemp11036=CodeEs(nctemp11031,nctemp11033);
struct tree* nctemp11038= p;
struct nctempchar1 *nctemp11042;
static struct nctempchar1 nctemp11043 = {{ 2}, (char*)"=\0"};
nctemp11042=&nctemp11043;
nctempchar1* nctemp11040= nctemp11042;
int nctemp11044=CodeEs(nctemp11038,nctemp11040);
struct tree* nctemp11046= p;
nctempchar1* nctemp11048= tmp;
int nctemp11051=CodeEs(nctemp11046,nctemp11048);
struct tree* nctemp11053= p;
struct nctempchar1 *nctemp11057;
static struct nctempchar1 nctemp11058 = {{ 4}, (char*)";\n\0"};
nctemp11057=&nctemp11058;
nctempchar1* nctemp11055= nctemp11057;
int nctemp11059=CodeEs(nctemp11053,nctemp11055);
struct tree* nctemp11061= p;
struct nctempchar1 *nctemp11065;
static struct nctempchar1 nctemp11066 = {{ 4}, (char*)"}\n\0"};
nctemp11065=&nctemp11066;
nctempchar1* nctemp11063= nctemp11065;
int nctemp11067=CodeEs(nctemp11061,nctemp11063);
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
int nctemp11069 = (p ==0);
if(nctemp11069)
{
return 1;
}
struct tree* nctemp11078= p;
struct tree* nctemp11080=PtreeMvsister(nctemp11078);
p =nctemp11080;
struct tree* nctemp11082= p;
int nctemp11084= level;
int nctemp11086= rank;
int nctemp11088=CodeParallelfor(nctemp11082,nctemp11084,nctemp11086);
struct tree* nctemp11093= sp;
struct tree* nctemp11095=PtreeMvchild(nctemp11093);
rp =nctemp11095;
struct tree* nctemp11100= rp;
struct tree* nctemp11102=PtreeMvchild(nctemp11100);
qp =nctemp11102;
struct tree* nctemp11107= qp;
struct tree* nctemp11109=PtreeMvchild(nctemp11107);
qp =nctemp11109;
struct tree* nctemp11115= qp;
nctempchar1* nctemp11117=PtreeGetdef(nctemp11115);
index=nctemp11117;
struct tree* nctemp11125= qp;
struct tree* nctemp11127=PtreeMvsister(nctemp11125);
struct tree* nctemp11123= nctemp11127;
nctempchar1* nctemp11128=CodeBinexpr(nctemp11123);
init=nctemp11128;
struct tree* nctemp11133= rp;
struct tree* nctemp11135=PtreeMvsister(nctemp11133);
rrp =nctemp11135;
struct tree* nctemp11141= rrp;
nctempchar1* nctemp11143=CodeExpr(nctemp11141);
cond=nctemp11143;
int nctemp11144 = (level ==rank);
if(nctemp11144)
{
struct tree* nctemp11149= p;
struct nctempchar1 *nctemp11153;
static struct nctempchar1 nctemp11154 = {{ 30}, (char*)"\n #pragma omp parallel for\n\0"};
nctemp11153=&nctemp11154;
nctempchar1* nctemp11151= nctemp11153;
int nctemp11155=CodeEs(nctemp11149,nctemp11151);
}
struct tree* nctemp11157= rp;
struct nctempchar1 *nctemp11161;
static struct nctempchar1 nctemp11162 = {{ 5}, (char*)"for(\0"};
nctemp11161=&nctemp11162;
nctempchar1* nctemp11159= nctemp11161;
int nctemp11163=CodeEs(nctemp11157,nctemp11159);
struct tree* nctemp11165= rp;
nctempchar1* nctemp11167= index;
int nctemp11170=CodeEs(nctemp11165,nctemp11167);
struct tree* nctemp11172= rp;
struct nctempchar1 *nctemp11176;
static struct nctempchar1 nctemp11177 = {{ 2}, (char*)"=\0"};
nctemp11176=&nctemp11177;
nctempchar1* nctemp11174= nctemp11176;
int nctemp11178=CodeEs(nctemp11172,nctemp11174);
struct tree* nctemp11180= rp;
nctempchar1* nctemp11182= init;
int nctemp11185=CodeEs(nctemp11180,nctemp11182);
struct tree* nctemp11187= rp;
struct nctempchar1 *nctemp11191;
static struct nctempchar1 nctemp11192 = {{ 2}, (char*)";\0"};
nctemp11191=&nctemp11192;
nctempchar1* nctemp11189= nctemp11191;
int nctemp11193=CodeEs(nctemp11187,nctemp11189);
struct tree* nctemp11198= rp;
struct tree* nctemp11200=PtreeMvsister(nctemp11198);
rp =nctemp11200;
struct tree* nctemp11202= rp;
nctempchar1* nctemp11204= index;
int nctemp11207=CodeEs(nctemp11202,nctemp11204);
struct tree* nctemp11209= rp;
struct nctempchar1 *nctemp11213;
static struct nctempchar1 nctemp11214 = {{ 2}, (char*)"<\0"};
nctemp11213=&nctemp11214;
nctempchar1* nctemp11211= nctemp11213;
int nctemp11215=CodeEs(nctemp11209,nctemp11211);
struct tree* nctemp11217= p;
nctempchar1* nctemp11219= cond;
int nctemp11222=CodeEs(nctemp11217,nctemp11219);
struct tree* nctemp11224= rp;
struct nctempchar1 *nctemp11228;
static struct nctempchar1 nctemp11229 = {{ 2}, (char*)";\0"};
nctemp11228=&nctemp11229;
nctempchar1* nctemp11226= nctemp11228;
int nctemp11230=CodeEs(nctemp11224,nctemp11226);
struct tree* nctemp11238= rp;
struct tree* nctemp11240=PtreeMvsister(nctemp11238);
rp =nctemp11240;
int nctemp11231 = (rp !=0);
if(nctemp11231)
{
struct tree* nctemp11243= rp;
nctempchar1* nctemp11245= index;
int nctemp11248=CodeEs(nctemp11243,nctemp11245);
struct tree* nctemp11250= rp;
struct nctempchar1 *nctemp11254;
static struct nctempchar1 nctemp11255 = {{ 2}, (char*)"=\0"};
nctemp11254=&nctemp11255;
nctempchar1* nctemp11252= nctemp11254;
int nctemp11256=CodeEs(nctemp11250,nctemp11252);
struct tree* nctemp11258= rp;
nctempchar1* nctemp11260= index;
int nctemp11263=CodeEs(nctemp11258,nctemp11260);
struct tree* nctemp11265= rp;
struct nctempchar1 *nctemp11269;
static struct nctempchar1 nctemp11270 = {{ 2}, (char*)"+\0"};
nctemp11269=&nctemp11270;
nctempchar1* nctemp11267= nctemp11269;
int nctemp11271=CodeEs(nctemp11265,nctemp11267);
struct tree* nctemp11273= rp;
nctempchar1* nctemp11275=CodeExpr(nctemp11273);
}
else{
struct tree* nctemp11277= rp;
nctempchar1* nctemp11279= index;
int nctemp11282=CodeEs(nctemp11277,nctemp11279);
struct tree* nctemp11284= rp;
struct nctempchar1 *nctemp11288;
static struct nctempchar1 nctemp11289 = {{ 2}, (char*)"=\0"};
nctemp11288=&nctemp11289;
nctempchar1* nctemp11286= nctemp11288;
int nctemp11290=CodeEs(nctemp11284,nctemp11286);
struct tree* nctemp11292= rp;
nctempchar1* nctemp11294= index;
int nctemp11297=CodeEs(nctemp11292,nctemp11294);
struct tree* nctemp11299= rp;
struct nctempchar1 *nctemp11303;
static struct nctempchar1 nctemp11304 = {{ 2}, (char*)"+\0"};
nctemp11303=&nctemp11304;
nctempchar1* nctemp11301= nctemp11303;
int nctemp11305=CodeEs(nctemp11299,nctemp11301);
struct tree* nctemp11307= rp;
struct nctempchar1 *nctemp11311;
static struct nctempchar1 nctemp11312 = {{ 2}, (char*)"1\0"};
nctemp11311=&nctemp11312;
nctempchar1* nctemp11309= nctemp11311;
int nctemp11313=CodeEs(nctemp11307,nctemp11309);
}
struct tree* nctemp11315= rp;
struct nctempchar1 *nctemp11319;
static struct nctempchar1 nctemp11320 = {{ 3}, (char*)"){\0"};
nctemp11319=&nctemp11320;
nctempchar1* nctemp11317= nctemp11319;
int nctemp11321=CodeEs(nctemp11315,nctemp11317);
return 1;
}
int CodeParallelstmntcpu (struct tree* p)
{
struct tree* sp;
int rank;
int i;
sp = p;
struct tree* nctemp11327= sp;
int nctemp11329=PtreeGetrank(nctemp11327);
rank =nctemp11329;
struct tree* nctemp11334= p;
struct tree* nctemp11336=PtreeMvchild(nctemp11334);
p =nctemp11336;
struct tree* nctemp11341= p;
struct tree* nctemp11343=PtreeMvchild(nctemp11341);
p =nctemp11343;
struct tree* nctemp11345= p;
int nctemp11347= 0;
int nctemp11349= rank;
int nctemp11351=CodeParallelfor(nctemp11345,nctemp11347,nctemp11349);
struct tree* nctemp11356= sp;
struct tree* nctemp11358=PtreeMvchild(nctemp11356);
sp =nctemp11358;
struct tree* nctemp11363= sp;
struct tree* nctemp11365=PtreeMvsister(nctemp11363);
sp =nctemp11365;
struct tree* nctemp11367= sp;
int nctemp11369=CodeStmnt(nctemp11367);
i =0;
int nctemp11374 = (i < rank);
while(nctemp11374){
{
struct tree* nctemp11379= sp;
struct nctempchar1 *nctemp11383;
static struct nctempchar1 nctemp11384 = {{ 2}, (char*)"}\0"};
nctemp11383=&nctemp11384;
nctempchar1* nctemp11381= nctemp11383;
int nctemp11385=CodeEs(nctemp11379,nctemp11381);
}
int nctemp11394 = i + 1;
i =nctemp11394;
int nctemp11395 = (i < rank);
nctemp11374=nctemp11395;
}
return 1;
}
nctempchar1 * CodeParprocno (struct tree* p)
{
struct tree* nctemp11401= p;
struct nctempchar1 *nctemp11405;
static struct nctempchar1 nctemp11406 = {{ 13}, (char*)"int nctempno\0"};
nctemp11405=&nctemp11406;
nctempchar1* nctemp11403= nctemp11405;
int nctemp11407=CodeEs(nctemp11401,nctemp11403);
struct tree* nctemp11409= p;
struct nctempchar1 *nctemp11413;
static struct nctempchar1 nctemp11414 = {{ 39}, (char*)"=blockIdx.x*blockDim.x + threadIdx.x; \0"};
nctemp11413=&nctemp11414;
nctempchar1* nctemp11411= nctemp11413;
int nctemp11415=CodeEs(nctemp11409,nctemp11411);
struct nctempchar1 *nctemp11417;
static struct nctempchar1 nctemp11418 = {{ 9}, (char*)"nctempno\0"};
nctemp11417=&nctemp11418;
return nctemp11417;
}
nctempchar1 * CodeParidx (struct tree* p)
{
struct tree* nctemp11423= p;
struct tree* nctemp11425=PtreeMvchild(nctemp11423);
p =nctemp11425;
struct tree* nctemp11430= p;
struct tree* nctemp11432=PtreeMvchild(nctemp11430);
p =nctemp11432;
struct tree* nctemp11437= p;
struct tree* nctemp11439=PtreeMvchild(nctemp11437);
p =nctemp11439;
struct tree* nctemp11441= p;
nctempchar1* nctemp11443=PtreeGetdef(nctemp11441);
return nctemp11443;
}
nctempchar1 * CodeParidxrank (struct tree* p,int r)
{
int i;
i =0;
int nctemp11456 = r - 1;
int nctemp11448 = (i < nctemp11456);
while(nctemp11448){
{
struct tree* nctemp11461= p;
struct tree* nctemp11463=PtreeMvsister(nctemp11461);
p =nctemp11463;
}
int nctemp11472 = i + 1;
i =nctemp11472;
int nctemp11481 = r - 1;
int nctemp11473 = (i < nctemp11481);
nctemp11448=nctemp11473;
}
struct tree* nctemp11483= p;
nctempchar1* nctemp11485=CodeParidx(nctemp11483);
return nctemp11485;
}
nctempchar1 * CodeParllim (struct tree* p)
{
nctempchar1 *tmp;
nctempchar1 *temp;
struct tree* nctemp11490= p;
struct tree* nctemp11492=PtreeMvchild(nctemp11490);
p =nctemp11492;
struct tree* nctemp11498= p;
nctempchar1* nctemp11500=CodeExpr(nctemp11498);
tmp=nctemp11500;
nctempchar1* nctemp11506=CodeMktemp();
temp=nctemp11506;
struct tree* nctemp11508= p;
struct nctempchar1 *nctemp11512;
static struct nctempchar1 nctemp11513 = {{ 5}, (char*)"int \0"};
nctemp11512=&nctemp11513;
nctempchar1* nctemp11510= nctemp11512;
int nctemp11514=CodeEs(nctemp11508,nctemp11510);
struct tree* nctemp11516= p;
nctempchar1* nctemp11518= temp;
int nctemp11521=CodeEs(nctemp11516,nctemp11518);
struct tree* nctemp11523= p;
struct nctempchar1 *nctemp11527;
static struct nctempchar1 nctemp11528 = {{ 2}, (char*)"=\0"};
nctemp11527=&nctemp11528;
nctempchar1* nctemp11525= nctemp11527;
int nctemp11529=CodeEs(nctemp11523,nctemp11525);
struct tree* nctemp11531= p;
nctempchar1* nctemp11533= tmp;
int nctemp11536=CodeEs(nctemp11531,nctemp11533);
struct tree* nctemp11538= p;
struct nctempchar1 *nctemp11542;
static struct nctempchar1 nctemp11543 = {{ 4}, (char*)";\n\0"};
nctemp11542=&nctemp11543;
nctempchar1* nctemp11540= nctemp11542;
int nctemp11544=CodeEs(nctemp11538,nctemp11540);
return temp;
}
nctempchar1 * CodeParulim (struct tree* p)
{
struct tree* nctemp11551= p;
struct tree* nctemp11553=PtreeMvchild(nctemp11551);
p =nctemp11553;
struct tree* nctemp11558= p;
struct tree* nctemp11560=PtreeMvsister(nctemp11558);
p =nctemp11560;
struct tree* nctemp11562= p;
nctempchar1* nctemp11564=CodeExpr(nctemp11562);
return nctemp11564;
}
nctempchar1 * CodeParllimrank (struct tree* p,int r)
{
int i;
i =0;
int nctemp11577 = r - 1;
int nctemp11569 = (i < nctemp11577);
while(nctemp11569){
{
struct tree* nctemp11582= p;
struct tree* nctemp11584=PtreeMvsister(nctemp11582);
p =nctemp11584;
}
int nctemp11593 = i + 1;
i =nctemp11593;
int nctemp11602 = r - 1;
int nctemp11594 = (i < nctemp11602);
nctemp11569=nctemp11594;
}
struct tree* nctemp11604= p;
nctempchar1* nctemp11606=CodeParllim(nctemp11604);
return nctemp11606;
}
nctempchar1 * CodeParulimrank (struct tree* p,int r)
{
int i;
i =0;
int nctemp11619 = r - 1;
int nctemp11611 = (i < nctemp11619);
while(nctemp11611){
{
struct tree* nctemp11624= p;
struct tree* nctemp11626=PtreeMvsister(nctemp11624);
p =nctemp11626;
}
int nctemp11635 = i + 1;
i =nctemp11635;
int nctemp11644 = r - 1;
int nctemp11636 = (i < nctemp11644);
nctemp11611=nctemp11636;
}
struct tree* nctemp11646= p;
nctempchar1* nctemp11648=CodeParulim(nctemp11646);
return nctemp11648;
}
nctempchar1 * CodeParlen (struct tree* p,nctempchar1 *llim)
{
nctempchar1 *tmp1;
nctempchar1 *tmp2;
nctempchar1 *tmp3;
nctempchar1* nctemp11654=CodeMktemp();
tmp1=nctemp11654;
struct tree* nctemp11660= p;
nctempchar1* nctemp11662=CodeParulim(nctemp11660);
tmp2=nctemp11662;
struct tree* nctemp11668= p;
nctempchar1* nctemp11670=CodeParllim(nctemp11668);
tmp3=nctemp11670;
struct tree* nctemp11672= p;
struct nctempchar1 *nctemp11676;
static struct nctempchar1 nctemp11677 = {{ 5}, (char*)"int \0"};
nctemp11676=&nctemp11677;
nctempchar1* nctemp11674= nctemp11676;
int nctemp11678=CodeEs(nctemp11672,nctemp11674);
struct tree* nctemp11680= p;
nctempchar1* nctemp11682= tmp1;
int nctemp11685=CodeEs(nctemp11680,nctemp11682);
struct tree* nctemp11687= p;
struct nctempchar1 *nctemp11691;
static struct nctempchar1 nctemp11692 = {{ 2}, (char*)"=\0"};
nctemp11691=&nctemp11692;
nctempchar1* nctemp11689= nctemp11691;
int nctemp11693=CodeEs(nctemp11687,nctemp11689);
struct tree* nctemp11695= p;
nctempchar1* nctemp11697= tmp2;
int nctemp11700=CodeEs(nctemp11695,nctemp11697);
struct tree* nctemp11702= p;
struct nctempchar1 *nctemp11706;
static struct nctempchar1 nctemp11707 = {{ 2}, (char*)"-\0"};
nctemp11706=&nctemp11707;
nctempchar1* nctemp11704= nctemp11706;
int nctemp11708=CodeEs(nctemp11702,nctemp11704);
struct tree* nctemp11710= p;
nctempchar1* nctemp11712= tmp3;
int nctemp11715=CodeEs(nctemp11710,nctemp11712);
struct tree* nctemp11717= p;
struct nctempchar1 *nctemp11721;
static struct nctempchar1 nctemp11722 = {{ 4}, (char*)";\n\0"};
nctemp11721=&nctemp11722;
nctempchar1* nctemp11719= nctemp11721;
int nctemp11723=CodeEs(nctemp11717,nctemp11719);
nctempchar1* nctemp11727= tmp3;
nctempchar1* nctemp11730= llim;
int nctemp11733=LibeStrcpy(nctemp11727,nctemp11730);
int nctemp11724 = (nctemp11733 ==0);
if(nctemp11724)
{
struct nctempchar1 *nctemp11738;
static struct nctempchar1 nctemp11739 = {{ 31}, (char*)"Internal error in CodeParlen\n\0"};
nctemp11738=&nctemp11739;
nctempchar1* nctemp11736= nctemp11738;
int nctemp11740=CodeError(nctemp11736);
}
return tmp1;
}
nctempchar1 * CodeParlenrank (struct tree* p,int r,nctempchar1 *llim)
{
int i;
nctempchar1 *tmp;
i =0;
int nctemp11755 = r - 1;
int nctemp11747 = (i < nctemp11755);
while(nctemp11747){
{
struct tree* nctemp11760= p;
struct tree* nctemp11762=PtreeMvsister(nctemp11760);
p =nctemp11762;
}
int nctemp11771 = i + 1;
i =nctemp11771;
int nctemp11780 = r - 1;
int nctemp11772 = (i < nctemp11780);
nctemp11747=nctemp11772;
}
struct tree* nctemp11786= p;
nctempchar1* nctemp11788= llim;
nctempchar1* nctemp11791=CodeParlen(nctemp11786,nctemp11788);
tmp=nctemp11791;
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
int nctemp11798=m->d[0];r =nctemp11798;
nctempchar1* nctemp11807=CodeMktemp();
nsize=nctemp11807;
struct tree* nctemp11809= p;
struct nctempchar1 *nctemp11813;
static struct nctempchar1 nctemp11814 = {{ 5}, (char*)"int \0"};
nctemp11813=&nctemp11814;
nctempchar1* nctemp11811= nctemp11813;
int nctemp11815=CodeEs(nctemp11809,nctemp11811);
struct tree* nctemp11817= p;
nctempchar1* nctemp11819= nsize;
int nctemp11822=CodeEs(nctemp11817,nctemp11819);
struct tree* nctemp11824= p;
struct nctempchar1 *nctemp11828;
static struct nctempchar1 nctemp11829 = {{ 2}, (char*)"=\0"};
nctemp11828=&nctemp11829;
nctempchar1* nctemp11826= nctemp11828;
int nctemp11830=CodeEs(nctemp11824,nctemp11826);
i =0;
int nctemp11835 = (i < r);
while(nctemp11835){
{
int nctemp11847 = r - 1;
int nctemp11839 = (i ==nctemp11847);
if(nctemp11839)
{
struct tree* nctemp11849= p;
int nctemp11853=i;
nctempchar1* nctemp11851= m->a[nctemp11853].s;
int nctemp11856=CodeEs(nctemp11849,nctemp11851);
struct tree* nctemp11858= p;
struct nctempchar1 *nctemp11862;
static struct nctempchar1 nctemp11863 = {{ 4}, (char*)";\n\0"};
nctemp11862=&nctemp11863;
nctempchar1* nctemp11860= nctemp11862;
int nctemp11864=CodeEs(nctemp11858,nctemp11860);
}
else{
struct tree* nctemp11866= p;
int nctemp11870=i;
nctempchar1* nctemp11868= m->a[nctemp11870].s;
int nctemp11873=CodeEs(nctemp11866,nctemp11868);
struct tree* nctemp11875= p;
struct nctempchar1 *nctemp11879;
static struct nctempchar1 nctemp11880 = {{ 2}, (char*)"*\0"};
nctemp11879=&nctemp11880;
nctempchar1* nctemp11877= nctemp11879;
int nctemp11881=CodeEs(nctemp11875,nctemp11877);
}
}
int nctemp11890 = i + 1;
i =nctemp11890;
int nctemp11891 = (i < r);
nctemp11835=nctemp11891;
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
int nctemp11898= 1;
int nctemp11900=CodeSetparallel(nctemp11898);
sp = p;
struct tree* nctemp11905= p;
int nctemp11907=PtreeGetrank(nctemp11905);
rank =nctemp11907;
int nctemp11914=rank;
struct nctempcharr1 *nctemp11913;
nctemp11913=(struct nctempcharr1*)RunMalloc(sizeof(struct nctempcharr1));
nctemp11913->d[0]=rank;
nctemp11913->a=(struct charr*)RunMalloc(sizeof(struct charr)*nctemp11914);
m=nctemp11913;
int nctemp11923=rank;
struct nctempcharr1 *nctemp11922;
nctemp11922=(struct nctempcharr1*)RunMalloc(sizeof(struct nctempcharr1));
nctemp11922->d[0]=rank;
nctemp11922->a=(struct charr*)RunMalloc(sizeof(struct charr)*nctemp11923);
i=nctemp11922;
int nctemp11932=rank;
struct nctempcharr1 *nctemp11931;
nctemp11931=(struct nctempcharr1*)RunMalloc(sizeof(struct nctempcharr1));
nctemp11931->d[0]=rank;
nctemp11931->a=(struct charr*)RunMalloc(sizeof(struct charr)*nctemp11932);
nl=nctemp11931;
struct tree* nctemp11939= p;
struct tree* nctemp11941=PtreeMvchild(nctemp11939);
p =nctemp11941;
struct tree* nctemp11946= p;
struct tree* nctemp11948=PtreeMvchild(nctemp11946);
slice =nctemp11948;
struct tree* nctemp11950= p;
struct nctempchar1 *nctemp11954;
static struct nctempchar1 nctemp11955 = {{ 4}, (char*)"{\n\0"};
nctemp11954=&nctemp11955;
nctempchar1* nctemp11952= nctemp11954;
int nctemp11956=CodeEs(nctemp11950,nctemp11952);
struct tree* nctemp11962= slice;
nctempchar1* nctemp11964=CodeParprocno(nctemp11962);
pno=nctemp11964;
l =0;
int nctemp11969 = (l < rank);
while(nctemp11969){
{
int nctemp11976=l;
struct tree* nctemp11980= slice;
int nctemp11987 = l + 1;
int nctemp11982= nctemp11987;
nctempchar1* nctemp11988=CodeParidxrank(nctemp11980,nctemp11982);
i->a[nctemp11976].s=nctemp11988;
int nctemp11992=l;
int nctemp11997=4096;
nctempchar1 *nctemp11996;
nctemp11996=(nctempchar1*)RunMalloc(sizeof(nctempchar1));
nctemp11996->d[0]=4096;
nctemp11996->a=(char *)RunMalloc(sizeof(char)*nctemp11997);
nl->a[nctemp11992].s=nctemp11996;
int nctemp12003=l;
struct tree* nctemp12007= slice;
int nctemp12014 = l + 1;
int nctemp12009= nctemp12014;
int nctemp12017=l;
nctempchar1* nctemp12015= nl->a[nctemp12017].s;
nctempchar1* nctemp12020=CodeParlenrank(nctemp12007,nctemp12009,nctemp12015);
m->a[nctemp12003].s=nctemp12020;
}
int nctemp12029 = l + 1;
l =nctemp12029;
int nctemp12030 = (l < rank);
nctemp11969=nctemp12030;
}
struct tree* nctemp12039= p;
nctempcharr1* nctemp12041= m;
nctempchar1* nctemp12044=CodeParnsize(nctemp12039,nctemp12041);
nmax=nctemp12044;
struct tree* nctemp12046= p;
struct nctempchar1 *nctemp12050;
static struct nctempchar1 nctemp12051 = {{ 5}, (char*)"for(\0"};
nctemp12050=&nctemp12051;
nctempchar1* nctemp12048= nctemp12050;
int nctemp12052=CodeEs(nctemp12046,nctemp12048);
struct tree* nctemp12054= p;
nctempchar1* nctemp12056= pno;
int nctemp12059=CodeEs(nctemp12054,nctemp12056);
struct tree* nctemp12061= p;
struct nctempchar1 *nctemp12065;
static struct nctempchar1 nctemp12066 = {{ 39}, (char*)"=blockIdx.x*blockDim.x + threadIdx.x; \0"};
nctemp12065=&nctemp12066;
nctempchar1* nctemp12063= nctemp12065;
int nctemp12067=CodeEs(nctemp12061,nctemp12063);
struct tree* nctemp12069= p;
nctempchar1* nctemp12071= pno;
int nctemp12074=CodeEs(nctemp12069,nctemp12071);
struct tree* nctemp12076= p;
struct nctempchar1 *nctemp12080;
static struct nctempchar1 nctemp12081 = {{ 2}, (char*)"<\0"};
nctemp12080=&nctemp12081;
nctempchar1* nctemp12078= nctemp12080;
int nctemp12082=CodeEs(nctemp12076,nctemp12078);
struct tree* nctemp12084= p;
nctempchar1* nctemp12086= nmax;
int nctemp12089=CodeEs(nctemp12084,nctemp12086);
struct tree* nctemp12091= p;
struct nctempchar1 *nctemp12095;
static struct nctempchar1 nctemp12096 = {{ 2}, (char*)";\0"};
nctemp12095=&nctemp12096;
nctempchar1* nctemp12093= nctemp12095;
int nctemp12097=CodeEs(nctemp12091,nctemp12093);
struct tree* nctemp12099= p;
nctempchar1* nctemp12101= pno;
int nctemp12104=CodeEs(nctemp12099,nctemp12101);
struct tree* nctemp12106= p;
struct nctempchar1 *nctemp12110;
static struct nctempchar1 nctemp12111 = {{ 23}, (char*)"+=blockDim.x*gridDim.x\0"};
nctemp12110=&nctemp12111;
nctempchar1* nctemp12108= nctemp12110;
int nctemp12112=CodeEs(nctemp12106,nctemp12108);
struct tree* nctemp12114= p;
struct nctempchar1 *nctemp12118;
static struct nctempchar1 nctemp12119 = {{ 5}, (char*)"){\n\0"};
nctemp12118=&nctemp12119;
nctempchar1* nctemp12116= nctemp12118;
int nctemp12120=CodeEs(nctemp12114,nctemp12116);
struct nctempchar1 *nctemp12128;
static struct nctempchar1 nctemp12129 = {{ 2}, (char*)"1\0"};
nctemp12128=&nctemp12129;
nctempchar1* nctemp12126= nctemp12128;
nctempchar1* nctemp12130=LibeStrsave(nctemp12126);
qk=nctemp12130;
l =0;
int nctemp12135 = (l < rank);
while(nctemp12135){
{
int nctemp12147 = rank - 1;
int nctemp12139 = (l ==nctemp12147);
if(nctemp12139)
{
struct tree* nctemp12149= p;
int nctemp12153=l;
nctempchar1* nctemp12151= i->a[nctemp12153].s;
int nctemp12156=CodeEs(nctemp12149,nctemp12151);
struct tree* nctemp12158= p;
struct nctempchar1 *nctemp12162;
static struct nctempchar1 nctemp12163 = {{ 2}, (char*)"=\0"};
nctemp12162=&nctemp12163;
nctempchar1* nctemp12160= nctemp12162;
int nctemp12164=CodeEs(nctemp12158,nctemp12160);
struct tree* nctemp12166= p;
struct nctempchar1 *nctemp12170;
static struct nctempchar1 nctemp12171 = {{ 2}, (char*)"(\0"};
nctemp12170=&nctemp12171;
nctempchar1* nctemp12168= nctemp12170;
int nctemp12172=CodeEs(nctemp12166,nctemp12168);
struct tree* nctemp12174= p;
nctempchar1* nctemp12176= pno;
int nctemp12179=CodeEs(nctemp12174,nctemp12176);
struct tree* nctemp12181= p;
struct nctempchar1 *nctemp12185;
static struct nctempchar1 nctemp12186 = {{ 2}, (char*)"/\0"};
nctemp12185=&nctemp12186;
nctempchar1* nctemp12183= nctemp12185;
int nctemp12187=CodeEs(nctemp12181,nctemp12183);
struct tree* nctemp12189= p;
struct nctempchar1 *nctemp12193;
static struct nctempchar1 nctemp12194 = {{ 2}, (char*)"(\0"};
nctemp12193=&nctemp12194;
nctempchar1* nctemp12191= nctemp12193;
int nctemp12195=CodeEs(nctemp12189,nctemp12191);
struct tree* nctemp12197= p;
nctempchar1* nctemp12199= qk;
int nctemp12202=CodeEs(nctemp12197,nctemp12199);
struct tree* nctemp12204= p;
struct nctempchar1 *nctemp12208;
static struct nctempchar1 nctemp12209 = {{ 2}, (char*)")\0"};
nctemp12208=&nctemp12209;
nctempchar1* nctemp12206= nctemp12208;
int nctemp12210=CodeEs(nctemp12204,nctemp12206);
struct tree* nctemp12212= p;
struct nctempchar1 *nctemp12216;
static struct nctempchar1 nctemp12217 = {{ 2}, (char*)")\0"};
nctemp12216=&nctemp12217;
nctempchar1* nctemp12214= nctemp12216;
int nctemp12218=CodeEs(nctemp12212,nctemp12214);
struct tree* nctemp12220= p;
struct nctempchar1 *nctemp12224;
static struct nctempchar1 nctemp12225 = {{ 2}, (char*)"+\0"};
nctemp12224=&nctemp12225;
nctempchar1* nctemp12222= nctemp12224;
int nctemp12226=CodeEs(nctemp12220,nctemp12222);
struct tree* nctemp12228= p;
int nctemp12232=l;
nctempchar1* nctemp12230= nl->a[nctemp12232].s;
int nctemp12235=CodeEs(nctemp12228,nctemp12230);
int nctemp12238=l;
RunFree(nl->a[nctemp12238].s->a);
RunFree(nl->a[nctemp12238].s);
struct tree* nctemp12242= p;
struct nctempchar1 *nctemp12246;
static struct nctempchar1 nctemp12247 = {{ 4}, (char*)";\n\0"};
nctemp12246=&nctemp12247;
nctempchar1* nctemp12244= nctemp12246;
int nctemp12248=CodeEs(nctemp12242,nctemp12244);
}
else{
struct tree* nctemp12250= p;
int nctemp12254=l;
nctempchar1* nctemp12252= i->a[nctemp12254].s;
int nctemp12257=CodeEs(nctemp12250,nctemp12252);
struct tree* nctemp12259= p;
struct nctempchar1 *nctemp12263;
static struct nctempchar1 nctemp12264 = {{ 2}, (char*)"=\0"};
nctemp12263=&nctemp12264;
nctempchar1* nctemp12261= nctemp12263;
int nctemp12265=CodeEs(nctemp12259,nctemp12261);
struct tree* nctemp12267= p;
struct nctempchar1 *nctemp12271;
static struct nctempchar1 nctemp12272 = {{ 2}, (char*)"(\0"};
nctemp12271=&nctemp12272;
nctempchar1* nctemp12269= nctemp12271;
int nctemp12273=CodeEs(nctemp12267,nctemp12269);
struct tree* nctemp12275= p;
nctempchar1* nctemp12277= pno;
int nctemp12280=CodeEs(nctemp12275,nctemp12277);
struct tree* nctemp12282= p;
struct nctempchar1 *nctemp12286;
static struct nctempchar1 nctemp12287 = {{ 2}, (char*)"/\0"};
nctemp12286=&nctemp12287;
nctempchar1* nctemp12284= nctemp12286;
int nctemp12288=CodeEs(nctemp12282,nctemp12284);
struct tree* nctemp12290= p;
struct nctempchar1 *nctemp12294;
static struct nctempchar1 nctemp12295 = {{ 2}, (char*)"(\0"};
nctemp12294=&nctemp12295;
nctempchar1* nctemp12292= nctemp12294;
int nctemp12296=CodeEs(nctemp12290,nctemp12292);
struct tree* nctemp12298= p;
nctempchar1* nctemp12300= qk;
int nctemp12303=CodeEs(nctemp12298,nctemp12300);
struct tree* nctemp12305= p;
struct nctempchar1 *nctemp12309;
static struct nctempchar1 nctemp12310 = {{ 2}, (char*)")\0"};
nctemp12309=&nctemp12310;
nctempchar1* nctemp12307= nctemp12309;
int nctemp12311=CodeEs(nctemp12305,nctemp12307);
struct tree* nctemp12313= p;
struct nctempchar1 *nctemp12317;
static struct nctempchar1 nctemp12318 = {{ 2}, (char*)")\0"};
nctemp12317=&nctemp12318;
nctempchar1* nctemp12315= nctemp12317;
int nctemp12319=CodeEs(nctemp12313,nctemp12315);
struct tree* nctemp12321= p;
struct nctempchar1 *nctemp12325;
static struct nctempchar1 nctemp12326 = {{ 2}, (char*)"%\0"};
nctemp12325=&nctemp12326;
nctempchar1* nctemp12323= nctemp12325;
int nctemp12327=CodeEs(nctemp12321,nctemp12323);
struct tree* nctemp12329= p;
int nctemp12333=l;
nctempchar1* nctemp12331= m->a[nctemp12333].s;
int nctemp12336=CodeEs(nctemp12329,nctemp12331);
struct tree* nctemp12338= p;
struct nctempchar1 *nctemp12342;
static struct nctempchar1 nctemp12343 = {{ 2}, (char*)"+\0"};
nctemp12342=&nctemp12343;
nctempchar1* nctemp12340= nctemp12342;
int nctemp12344=CodeEs(nctemp12338,nctemp12340);
struct tree* nctemp12346= p;
int nctemp12350=l;
nctempchar1* nctemp12348= nl->a[nctemp12350].s;
int nctemp12353=CodeEs(nctemp12346,nctemp12348);
int nctemp12356=l;
RunFree(nl->a[nctemp12356].s->a);
RunFree(nl->a[nctemp12356].s);
struct tree* nctemp12360= p;
struct nctempchar1 *nctemp12364;
static struct nctempchar1 nctemp12365 = {{ 4}, (char*)";\n\0"};
nctemp12364=&nctemp12365;
nctempchar1* nctemp12362= nctemp12364;
int nctemp12366=CodeEs(nctemp12360,nctemp12362);
}
nctempchar1* nctemp12372= qk;
struct nctempchar1 *nctemp12377;
static struct nctempchar1 nctemp12378 = {{ 2}, (char*)"*\0"};
nctemp12377=&nctemp12378;
nctempchar1* nctemp12375= nctemp12377;
nctempchar1* nctemp12379=LibeStradd(nctemp12372,nctemp12375);
tmp=nctemp12379;
RunFree(qk->a);
RunFree(qk);
qk=tmp;
nctempchar1* nctemp12394= qk;
int nctemp12399=l;
nctempchar1* nctemp12397= m->a[nctemp12399].s;
nctempchar1* nctemp12402=LibeStradd(nctemp12394,nctemp12397);
tmp=nctemp12402;
RunFree(qk->a);
RunFree(qk);
qk=tmp;
}
int nctemp12420 = l + 1;
l =nctemp12420;
int nctemp12421 = (l < rank);
nctemp12135=nctemp12421;
}
struct tree* nctemp12429= sp;
struct tree* nctemp12431=PtreeMvchild(nctemp12429);
p =nctemp12431;
struct tree* nctemp12436= p;
struct tree* nctemp12438=PtreeMvsister(nctemp12436);
p =nctemp12438;
struct tree* nctemp12440= p;
int nctemp12442=CodeCompstmnt(nctemp12440);
struct tree* nctemp12444= p;
struct nctempchar1 *nctemp12448;
static struct nctempchar1 nctemp12449 = {{ 4}, (char*)"}\n\0"};
nctemp12448=&nctemp12449;
nctempchar1* nctemp12446= nctemp12448;
int nctemp12450=CodeEs(nctemp12444,nctemp12446);
struct tree* nctemp12452= p;
struct nctempchar1 *nctemp12456;
static struct nctempchar1 nctemp12457 = {{ 4}, (char*)"}\n\0"};
nctemp12456=&nctemp12457;
nctempchar1* nctemp12454= nctemp12456;
int nctemp12458=CodeEs(nctemp12452,nctemp12454);
int nctemp12460= 0;
int nctemp12462=CodeSetparallel(nctemp12460);
return 1;
}
int CodeParallelstmnt (struct tree* p)
{
int nctemp12467=CodeGetarch();
int nctemp12464 = (nctemp12467 ==1);
if(nctemp12464)
{
struct tree* nctemp12470= p;
int nctemp12472=CodeParallelstmntcpu(nctemp12470);
}
else{
int nctemp12476=CodeGetarch();
int nctemp12473 = (nctemp12476 ==2);
if(nctemp12473)
{
struct tree* nctemp12479= p;
int nctemp12481=CodeParallelstmntgpu(nctemp12479);
}
else{
int nctemp12485=CodeGetarch();
int nctemp12482 = (nctemp12485 ==3);
if(nctemp12482)
{
struct tree* nctemp12488= p;
int nctemp12490=CodeParallelstmntgpu(nctemp12488);
}
}
}
return 1;
}
int CodeIfstmnt (struct tree* p)
{
nctempchar1 *cond;
struct tree* nctemp12496= p;
struct tree* nctemp12498=PtreeMvchild(nctemp12496);
p =nctemp12498;
struct tree* nctemp12504= p;
nctempchar1* nctemp12506=CodeExpr(nctemp12504);
cond=nctemp12506;
struct tree* nctemp12508= p;
struct nctempchar1 *nctemp12512;
static struct nctempchar1 nctemp12513 = {{ 4}, (char*)"if(\0"};
nctemp12512=&nctemp12513;
nctempchar1* nctemp12510= nctemp12512;
int nctemp12514=CodeEs(nctemp12508,nctemp12510);
struct tree* nctemp12516= p;
nctempchar1* nctemp12518= cond;
int nctemp12521=CodeEs(nctemp12516,nctemp12518);
struct tree* nctemp12523= p;
struct nctempchar1 *nctemp12527;
static struct nctempchar1 nctemp12528 = {{ 4}, (char*)")\n\0"};
nctemp12527=&nctemp12528;
nctempchar1* nctemp12525= nctemp12527;
int nctemp12529=CodeEs(nctemp12523,nctemp12525);
struct tree* nctemp12534= p;
struct tree* nctemp12536=PtreeMvsister(nctemp12534);
p =nctemp12536;
struct tree* nctemp12538= p;
int nctemp12540=CodeStmnt(nctemp12538);
struct tree* nctemp12548= p;
struct tree* nctemp12550=PtreeMvsister(nctemp12548);
p =nctemp12550;
int nctemp12541 = (p !=0);
if(nctemp12541)
{
struct tree* nctemp12557= p;
nctempchar1* nctemp12559=PtreeGetname(nctemp12557);
nctempchar1* nctemp12555= nctemp12559;
struct nctempchar1 *nctemp12562;
static struct nctempchar1 nctemp12563 = {{ 5}, (char*)"else\0"};
nctemp12562=&nctemp12563;
nctempchar1* nctemp12560= nctemp12562;
int nctemp12564=LibeStrcmp(nctemp12555,nctemp12560);
int nctemp12552 = (nctemp12564 ==1);
if(nctemp12552)
{
struct tree* nctemp12570= p;
struct tree* nctemp12572=PtreeMvchild(nctemp12570);
p =nctemp12572;
struct tree* nctemp12574= p;
struct nctempchar1 *nctemp12578;
static struct nctempchar1 nctemp12579 = {{ 5}, (char*)"else\0"};
nctemp12578=&nctemp12579;
nctempchar1* nctemp12576= nctemp12578;
int nctemp12580=CodeEs(nctemp12574,nctemp12576);
struct tree* nctemp12582= p;
int nctemp12584=CodeStmnt(nctemp12582);
}
}
return 1;
}
int CodeReturnstmnt (struct tree* p)
{
struct tree* np;
nctempchar1 *rval;
struct tree* nctemp12590= p;
struct tree* nctemp12592=PtreeMvchild(nctemp12590);
np =nctemp12592;
struct tree* nctemp12598= np;
nctempchar1* nctemp12600=CodeExpr(nctemp12598);
rval=nctemp12600;
struct tree* nctemp12602= np;
struct nctempchar1 *nctemp12606;
static struct nctempchar1 nctemp12607 = {{ 8}, (char*)"return \0"};
nctemp12606=&nctemp12607;
nctempchar1* nctemp12604= nctemp12606;
int nctemp12608=CodeEs(nctemp12602,nctemp12604);
struct tree* nctemp12610= np;
nctempchar1* nctemp12612= rval;
int nctemp12615=CodeEs(nctemp12610,nctemp12612);
struct tree* nctemp12617= np;
struct nctempchar1 *nctemp12621;
static struct nctempchar1 nctemp12622 = {{ 4}, (char*)";\n\0"};
nctemp12621=&nctemp12622;
nctempchar1* nctemp12619= nctemp12621;
int nctemp12623=CodeEs(nctemp12617,nctemp12619);
return 1;
}
int CodeCompstmnt (struct tree* p)
{
struct tree* sp;
struct tree* q;
sp = p;
struct tree* nctemp12626= p;
struct nctempchar1 *nctemp12630;
static struct nctempchar1 nctemp12631 = {{ 4}, (char*)"{\n\0"};
nctemp12630=&nctemp12631;
nctempchar1* nctemp12628= nctemp12630;
int nctemp12632=CodeEs(nctemp12626,nctemp12628);
struct tree* nctemp12637= p;
struct tree* nctemp12639=PtreeMvchild(nctemp12637);
p =nctemp12639;
int nctemp12640 = (p ==0);
if(nctemp12640)
{
struct tree* nctemp12645= sp;
struct nctempchar1 *nctemp12649;
static struct nctempchar1 nctemp12650 = {{ 4}, (char*)"}\n\0"};
nctemp12649=&nctemp12650;
nctempchar1* nctemp12647= nctemp12649;
int nctemp12651=CodeEs(nctemp12645,nctemp12647);
return 1;
}
struct tree* nctemp12654= p;
struct symbol* nctemp12658=SymGetltp();
struct symbol* nctemp12656= nctemp12658;
int nctemp12659=CodeDeclarations(nctemp12654,nctemp12656);
struct tree* nctemp12665= p;
nctempchar1* nctemp12667=PtreeGetname(nctemp12665);
nctempchar1* nctemp12663= nctemp12667;
struct nctempchar1 *nctemp12670;
static struct nctempchar1 nctemp12671 = {{ 13}, (char*)"declarations\0"};
nctemp12670=&nctemp12671;
nctempchar1* nctemp12668= nctemp12670;
int nctemp12672=LibeStrcmp(nctemp12663,nctemp12668);
int nctemp12660 = (nctemp12672 ==1);
if(nctemp12660)
{
struct tree* nctemp12678= p;
struct tree* nctemp12680=PtreeMvsister(nctemp12678);
p =nctemp12680;
}
int nctemp12681 = (p !=0);
int nctemp12685=nctemp12681;
while(nctemp12685)
{{
struct tree* nctemp12691= p;
nctempchar1* nctemp12693=PtreeGetname(nctemp12691);
nctempchar1* nctemp12689= nctemp12693;
struct nctempchar1 *nctemp12696;
static struct nctempchar1 nctemp12697 = {{ 5}, (char*)"expr\0"};
nctemp12696=&nctemp12697;
nctempchar1* nctemp12694= nctemp12696;
int nctemp12698=LibeStrcmp(nctemp12689,nctemp12694);
int nctemp12686 = (nctemp12698 ==1);
if(nctemp12686)
{
int nctemp12703=CodeGetbreak();
int nctemp12700 = (nctemp12703 ==1);
if(nctemp12700)
{
struct tree* nctemp12706= p;
nctempchar1* nctemp12708=CodeExpr(nctemp12706);
}
else{
struct tree* nctemp12712= p;
int nctemp12714=PtreeGetsimple(nctemp12712);
int nctemp12709 = (nctemp12714 ==1);
if(nctemp12709)
{
struct tree* nctemp12717= p;
int nctemp12719=CodeSexpr(nctemp12717);
struct tree* nctemp12721= p;
struct nctempchar1 *nctemp12725;
static struct nctempchar1 nctemp12726 = {{ 4}, (char*)";\n\0"};
nctemp12725=&nctemp12726;
nctempchar1* nctemp12723= nctemp12725;
int nctemp12727=CodeEs(nctemp12721,nctemp12723);
}
else{
struct tree* nctemp12729= p;
nctempchar1* nctemp12731=CodeExpr(nctemp12729);
}
}
}
struct tree* nctemp12737= p;
nctempchar1* nctemp12739=PtreeGetname(nctemp12737);
nctempchar1* nctemp12735= nctemp12739;
struct nctempchar1 *nctemp12742;
static struct nctempchar1 nctemp12743 = {{ 6}, (char*)"while\0"};
nctemp12742=&nctemp12743;
nctempchar1* nctemp12740= nctemp12742;
int nctemp12744=LibeStrcmp(nctemp12735,nctemp12740);
int nctemp12732 = (nctemp12744 ==1);
if(nctemp12732)
{
struct tree* nctemp12747= p;
int nctemp12749=CodeWhilestmnt(nctemp12747);
}
struct tree* nctemp12755= p;
nctempchar1* nctemp12757=PtreeGetname(nctemp12755);
nctempchar1* nctemp12753= nctemp12757;
struct nctempchar1 *nctemp12760;
static struct nctempchar1 nctemp12761 = {{ 4}, (char*)"for\0"};
nctemp12760=&nctemp12761;
nctempchar1* nctemp12758= nctemp12760;
int nctemp12762=LibeStrcmp(nctemp12753,nctemp12758);
int nctemp12750 = (nctemp12762 ==1);
if(nctemp12750)
{
struct tree* nctemp12768= p;
struct tree* nctemp12770=PtreeMvchild(nctemp12768);
q =nctemp12770;
struct tree* nctemp12772= q;
struct tree* nctemp12774=PtreeMvsister(nctemp12772);
struct tree* nctemp12776= p;
int nctemp12778=CodeForstmnt(nctemp12776);
}
struct tree* nctemp12784= p;
nctempchar1* nctemp12786=PtreeGetname(nctemp12784);
nctempchar1* nctemp12782= nctemp12786;
struct nctempchar1 *nctemp12789;
static struct nctempchar1 nctemp12790 = {{ 9}, (char*)"parallel\0"};
nctemp12789=&nctemp12790;
nctempchar1* nctemp12787= nctemp12789;
int nctemp12791=LibeStrcmp(nctemp12782,nctemp12787);
int nctemp12779 = (nctemp12791 ==1);
if(nctemp12779)
{
struct tree* nctemp12794= p;
int nctemp12796=CodeParallelstmnt(nctemp12794);
}
struct tree* nctemp12802= p;
nctempchar1* nctemp12804=PtreeGetname(nctemp12802);
nctempchar1* nctemp12800= nctemp12804;
struct nctempchar1 *nctemp12807;
static struct nctempchar1 nctemp12808 = {{ 3}, (char*)"if\0"};
nctemp12807=&nctemp12808;
nctempchar1* nctemp12805= nctemp12807;
int nctemp12809=LibeStrcmp(nctemp12800,nctemp12805);
int nctemp12797 = (nctemp12809 ==1);
if(nctemp12797)
{
struct tree* nctemp12812= p;
int nctemp12814=CodeIfstmnt(nctemp12812);
}
struct tree* nctemp12820= p;
nctempchar1* nctemp12822=PtreeGetname(nctemp12820);
nctempchar1* nctemp12818= nctemp12822;
struct nctempchar1 *nctemp12825;
static struct nctempchar1 nctemp12826 = {{ 7}, (char*)"return\0"};
nctemp12825=&nctemp12826;
nctempchar1* nctemp12823= nctemp12825;
int nctemp12827=LibeStrcmp(nctemp12818,nctemp12823);
int nctemp12815 = (nctemp12827 ==1);
if(nctemp12815)
{
struct tree* nctemp12830= p;
int nctemp12832=CodeReturnstmnt(nctemp12830);
}
struct tree* nctemp12837= p;
struct tree* nctemp12839=PtreeMvsister(nctemp12837);
p =nctemp12839;
}
int nctemp12840 = (p !=0);
nctemp12685=nctemp12840;}struct tree* nctemp12845= sp;
struct nctempchar1 *nctemp12849;
static struct nctempchar1 nctemp12850 = {{ 4}, (char*)"}\n\0"};
nctemp12849=&nctemp12850;
nctempchar1* nctemp12847= nctemp12849;
int nctemp12851=CodeEs(nctemp12845,nctemp12847);
return 1;
}
int CodeStmnt (struct tree* p)
{
struct tree* sp;
sp = p;
struct tree* nctemp12854= p;
struct nctempchar1 *nctemp12858;
static struct nctempchar1 nctemp12859 = {{ 4}, (char*)"{\n\0"};
nctemp12858=&nctemp12859;
nctempchar1* nctemp12856= nctemp12858;
int nctemp12860=CodeEs(nctemp12854,nctemp12856);
struct tree* nctemp12866= p;
nctempchar1* nctemp12868=PtreeGetname(nctemp12866);
nctempchar1* nctemp12864= nctemp12868;
struct nctempchar1 *nctemp12871;
static struct nctempchar1 nctemp12872 = {{ 10}, (char*)"compstmnt\0"};
nctemp12871=&nctemp12872;
nctempchar1* nctemp12869= nctemp12871;
int nctemp12873=LibeStrcmp(nctemp12864,nctemp12869);
int nctemp12861 = (nctemp12873 ==1);
if(nctemp12861)
{
struct tree* nctemp12879= p;
struct tree* nctemp12881=PtreeMvchild(nctemp12879);
p =nctemp12881;
struct tree* nctemp12883= p;
struct symbol* nctemp12887=SymGetltp();
struct symbol* nctemp12885= nctemp12887;
int nctemp12888=CodeDeclarations(nctemp12883,nctemp12885);
struct tree* nctemp12894= p;
nctempchar1* nctemp12896=PtreeGetname(nctemp12894);
nctempchar1* nctemp12892= nctemp12896;
struct nctempchar1 *nctemp12899;
static struct nctempchar1 nctemp12900 = {{ 13}, (char*)"declarations\0"};
nctemp12899=&nctemp12900;
nctempchar1* nctemp12897= nctemp12899;
int nctemp12901=LibeStrcmp(nctemp12892,nctemp12897);
int nctemp12889 = (nctemp12901 ==1);
if(nctemp12889)
{
struct tree* nctemp12907= p;
struct tree* nctemp12909=PtreeMvsister(nctemp12907);
p =nctemp12909;
}
}
int nctemp12910 = (p !=0);
int nctemp12914=nctemp12910;
while(nctemp12914)
{{
struct tree* nctemp12920= p;
nctempchar1* nctemp12922=PtreeGetname(nctemp12920);
nctempchar1* nctemp12918= nctemp12922;
struct nctempchar1 *nctemp12925;
static struct nctempchar1 nctemp12926 = {{ 10}, (char*)"compstmnt\0"};
nctemp12925=&nctemp12926;
nctempchar1* nctemp12923= nctemp12925;
int nctemp12927=LibeStrcmp(nctemp12918,nctemp12923);
int nctemp12915 = (nctemp12927 ==1);
if(nctemp12915)
{
struct tree* nctemp12930= p;
int nctemp12932=CodeCompstmnt(nctemp12930);
}
struct tree* nctemp12938= p;
nctempchar1* nctemp12940=PtreeGetname(nctemp12938);
nctempchar1* nctemp12936= nctemp12940;
struct nctempchar1 *nctemp12943;
static struct nctempchar1 nctemp12944 = {{ 5}, (char*)"expr\0"};
nctemp12943=&nctemp12944;
nctempchar1* nctemp12941= nctemp12943;
int nctemp12945=LibeStrcmp(nctemp12936,nctemp12941);
int nctemp12933 = (nctemp12945 ==1);
if(nctemp12933)
{
struct tree* nctemp12948= p;
nctempchar1* nctemp12950=CodeExpr(nctemp12948);
}
struct tree* nctemp12956= p;
nctempchar1* nctemp12958=PtreeGetname(nctemp12956);
nctempchar1* nctemp12954= nctemp12958;
struct nctempchar1 *nctemp12961;
static struct nctempchar1 nctemp12962 = {{ 6}, (char*)"while\0"};
nctemp12961=&nctemp12962;
nctempchar1* nctemp12959= nctemp12961;
int nctemp12963=LibeStrcmp(nctemp12954,nctemp12959);
int nctemp12951 = (nctemp12963 ==1);
if(nctemp12951)
{
struct tree* nctemp12966= p;
int nctemp12968=CodeWhilestmnt(nctemp12966);
}
struct tree* nctemp12974= p;
nctempchar1* nctemp12976=PtreeGetname(nctemp12974);
nctempchar1* nctemp12972= nctemp12976;
struct nctempchar1 *nctemp12979;
static struct nctempchar1 nctemp12980 = {{ 4}, (char*)"for\0"};
nctemp12979=&nctemp12980;
nctempchar1* nctemp12977= nctemp12979;
int nctemp12981=LibeStrcmp(nctemp12972,nctemp12977);
int nctemp12969 = (nctemp12981 ==1);
if(nctemp12969)
{
struct tree* nctemp12984= p;
int nctemp12986=CodeForstmnt(nctemp12984);
}
struct tree* nctemp12992= p;
nctempchar1* nctemp12994=PtreeGetname(nctemp12992);
nctempchar1* nctemp12990= nctemp12994;
struct nctempchar1 *nctemp12997;
static struct nctempchar1 nctemp12998 = {{ 9}, (char*)"parallel\0"};
nctemp12997=&nctemp12998;
nctempchar1* nctemp12995= nctemp12997;
int nctemp12999=LibeStrcmp(nctemp12990,nctemp12995);
int nctemp12987 = (nctemp12999 ==1);
if(nctemp12987)
{
struct tree* nctemp13002= p;
int nctemp13004=CodeParallelstmnt(nctemp13002);
}
struct tree* nctemp13010= p;
nctempchar1* nctemp13012=PtreeGetname(nctemp13010);
nctempchar1* nctemp13008= nctemp13012;
struct nctempchar1 *nctemp13015;
static struct nctempchar1 nctemp13016 = {{ 3}, (char*)"if\0"};
nctemp13015=&nctemp13016;
nctempchar1* nctemp13013= nctemp13015;
int nctemp13017=LibeStrcmp(nctemp13008,nctemp13013);
int nctemp13005 = (nctemp13017 ==1);
if(nctemp13005)
{
struct tree* nctemp13020= p;
int nctemp13022=CodeIfstmnt(nctemp13020);
}
struct tree* nctemp13028= p;
nctempchar1* nctemp13030=PtreeGetname(nctemp13028);
nctempchar1* nctemp13026= nctemp13030;
struct nctempchar1 *nctemp13033;
static struct nctempchar1 nctemp13034 = {{ 7}, (char*)"return\0"};
nctemp13033=&nctemp13034;
nctempchar1* nctemp13031= nctemp13033;
int nctemp13035=LibeStrcmp(nctemp13026,nctemp13031);
int nctemp13023 = (nctemp13035 ==1);
if(nctemp13023)
{
struct tree* nctemp13038= p;
int nctemp13040=CodeReturnstmnt(nctemp13038);
}
struct tree* nctemp13045= p;
struct tree* nctemp13047=PtreeMvsister(nctemp13045);
p =nctemp13047;
}
int nctemp13048 = (p !=0);
nctemp12914=nctemp13048;}struct tree* nctemp13053= sp;
struct nctempchar1 *nctemp13057;
static struct nctempchar1 nctemp13058 = {{ 4}, (char*)"}\n\0"};
nctemp13057=&nctemp13058;
nctempchar1* nctemp13055= nctemp13057;
int nctemp13059=CodeEs(nctemp13053,nctemp13055);
return 1;
}
int CodeNewdescr (struct tree* p,nctempchar1 *pointer)
{
struct tree* nctemp13062= p;
nctempchar1* nctemp13064= pointer;
int nctemp13067=CodeEs(nctemp13062,nctemp13064);
struct tree* nctemp13069= p;
struct nctempchar1 *nctemp13073;
static struct nctempchar1 nctemp13074 = {{ 2}, (char*)"=\0"};
nctemp13073=&nctemp13074;
nctempchar1* nctemp13071= nctemp13073;
int nctemp13075=CodeEs(nctemp13069,nctemp13071);
struct tree* nctemp13077= p;
struct nctempchar1 *nctemp13081;
static struct nctempchar1 nctemp13082 = {{ 11}, (char*)"RunMalloc(\0"};
nctemp13081=&nctemp13082;
nctempchar1* nctemp13079= nctemp13081;
int nctemp13083=CodeEs(nctemp13077,nctemp13079);
struct tree* nctemp13085= p;
struct nctempchar1 *nctemp13089;
static struct nctempchar1 nctemp13090 = {{ 8}, (char*)"sizeof(\0"};
nctemp13089=&nctemp13090;
nctempchar1* nctemp13087= nctemp13089;
int nctemp13091=CodeEs(nctemp13085,nctemp13087);
struct tree* nctemp13093= p;
nctempchar1* nctemp13095= pointer;
int nctemp13098=CodeEs(nctemp13093,nctemp13095);
struct tree* nctemp13100= p;
struct nctempchar1 *nctemp13104;
static struct nctempchar1 nctemp13105 = {{ 6}, (char*)"));\n\0"};
nctemp13104=&nctemp13105;
nctempchar1* nctemp13102= nctemp13104;
int nctemp13106=CodeEs(nctemp13100,nctemp13102);
return 1;
}
int CodeFdef (struct tree* p)
{
int nctemp13111=CodeGetarch();
int nctemp13108 = (nctemp13111 ==1);
if(nctemp13108)
{
struct tree* nctemp13114= p;
int nctemp13116=CodeFdefcpu(nctemp13114);
}
else{
int nctemp13120=CodeGetarch();
int nctemp13117 = (nctemp13120 ==2);
if(nctemp13117)
{
struct tree* nctemp13129= p;
struct tree* nctemp13131=PtreeMvchild(nctemp13129);
struct tree* nctemp13127= nctemp13131;
nctempchar1* nctemp13132=PtreeGetparallel(nctemp13127);
nctempchar1* nctemp13125= nctemp13132;
struct nctempchar1 *nctemp13135;
static struct nctempchar1 nctemp13136 = {{ 9}, (char*)"parallel\0"};
nctemp13135=&nctemp13136;
nctempchar1* nctemp13133= nctemp13135;
int nctemp13137=LibeStrcmp(nctemp13125,nctemp13133);
int nctemp13122 = (nctemp13137 ==1);
if(nctemp13122)
{
struct tree* nctemp13140= p;
int nctemp13142=CodeFdefgpu(nctemp13140);
struct tree* nctemp13144= p;
int nctemp13146=CodeFdewrappergpu(nctemp13144);
}
else{
struct tree* nctemp13148= p;
int nctemp13150=CodeFdefcpu(nctemp13148);
}
}
else{
int nctemp13154=CodeGetarch();
int nctemp13151 = (nctemp13154 ==3);
if(nctemp13151)
{
struct tree* nctemp13161= p;
nctempchar1* nctemp13163=PtreeGetparallel(nctemp13161);
nctempchar1* nctemp13159= nctemp13163;
struct nctempchar1 *nctemp13166;
static struct nctempchar1 nctemp13167 = {{ 9}, (char*)"parallel\0"};
nctemp13166=&nctemp13167;
nctempchar1* nctemp13164= nctemp13166;
int nctemp13168=LibeStrcmp(nctemp13159,nctemp13164);
int nctemp13156 = (nctemp13168 ==1);
if(nctemp13156)
{
struct tree* nctemp13171= p;
int nctemp13173=CodeFdefgpu(nctemp13171);
struct tree* nctemp13175= p;
int nctemp13177=CodeFdewrappergpu(nctemp13175);
}
else{
struct tree* nctemp13179= p;
int nctemp13181=CodeFdefcpu(nctemp13179);
}
}
}
}
return 1;
}
int CodePreamblecpu ()
{
struct tree* p;
struct nctempchar1 *nctemp13189;
static struct nctempchar1 nctemp13190 = {{ 6}, (char*)"dummy\0"};
nctemp13189=&nctemp13190;
nctempchar1* nctemp13187= nctemp13189;
struct nctempchar1 *nctemp13193;
static struct nctempchar1 nctemp13194 = {{ 6}, (char*)"dummy\0"};
nctemp13193=&nctemp13194;
nctempchar1* nctemp13191= nctemp13193;
struct tree* nctemp13195=PtreeMknode(nctemp13187,nctemp13191);
p =nctemp13195;
struct tree* nctemp13197= p;
int nctemp13199= 1;
int nctemp13201=PtreeSetline(nctemp13197,nctemp13199);
struct tree* nctemp13203= p;
struct nctempchar1 *nctemp13207;
static struct nctempchar1 nctemp13208 = {{ 42}, (char*)"//  Translated by epsc  version today  \n\0"};
nctemp13207=&nctemp13208;
nctempchar1* nctemp13205= nctemp13207;
int nctemp13209=CodeEs(nctemp13203,nctemp13205);
struct tree* nctemp13211= p;
int nctemp13213= 2;
int nctemp13215=PtreeSetline(nctemp13211,nctemp13213);
struct tree* nctemp13217= p;
int nctemp13219= 3;
int nctemp13221=PtreeSetline(nctemp13217,nctemp13219);
struct tree* nctemp13223= p;
int nctemp13225= 4;
int nctemp13227=PtreeSetline(nctemp13223,nctemp13225);
struct tree* nctemp13229= p;
struct nctempchar1 *nctemp13233;
static struct nctempchar1 nctemp13234 = {{ 22}, (char*)"#include <stddef.h>\n\0"};
nctemp13233=&nctemp13234;
nctempchar1* nctemp13231= nctemp13233;
int nctemp13235=CodeEs(nctemp13229,nctemp13231);
struct tree* nctemp13237= p;
struct nctempchar1 *nctemp13241;
static struct nctempchar1 nctemp13242 = {{ 21}, (char*)"#include <stdio.h>\n\0"};
nctemp13241=&nctemp13242;
nctempchar1* nctemp13239= nctemp13241;
int nctemp13243=CodeEs(nctemp13237,nctemp13239);
struct tree* nctemp13245= p;
struct nctempchar1 *nctemp13249;
static struct nctempchar1 nctemp13250 = {{ 22}, (char*)"#include <assert.h>\n\0"};
nctemp13249=&nctemp13250;
nctempchar1* nctemp13247= nctemp13249;
int nctemp13251=CodeEs(nctemp13245,nctemp13247);
struct tree* nctemp13253= p;
struct nctempchar1 *nctemp13257;
static struct nctempchar1 nctemp13258 = {{ 48}, (char*)"typedef struct { float r; float i;} complex; \n\0"};
nctemp13257=&nctemp13258;
nctempchar1* nctemp13255= nctemp13257;
int nctemp13259=CodeEs(nctemp13253,nctemp13255);
struct tree* nctemp13261= p;
int nctemp13263= 3;
int nctemp13265=PtreeSetline(nctemp13261,nctemp13263);
struct tree* nctemp13267= p;
struct nctempchar1 *nctemp13271;
static struct nctempchar1 nctemp13272 = {{ 68}, (char*)"typedef struct nctempfloat1 { int d[1]; float *a;} nctempfloat1; \n\0"};
nctemp13271=&nctemp13272;
nctempchar1* nctemp13269= nctemp13271;
int nctemp13273=CodeEs(nctemp13267,nctemp13269);
struct tree* nctemp13275= p;
int nctemp13277= 5;
int nctemp13279=PtreeSetline(nctemp13275,nctemp13277);
struct tree* nctemp13281= p;
struct nctempchar1 *nctemp13285;
static struct nctempchar1 nctemp13286 = {{ 62}, (char*)"typedef struct nctempint1 { int d[1]; int *a;} nctempint1; \n\0"};
nctemp13285=&nctemp13286;
nctempchar1* nctemp13283= nctemp13285;
int nctemp13287=CodeEs(nctemp13281,nctemp13283);
struct tree* nctemp13289= p;
int nctemp13291= 7;
int nctemp13293=PtreeSetline(nctemp13289,nctemp13291);
struct tree* nctemp13295= p;
struct nctempchar1 *nctemp13299;
static struct nctempchar1 nctemp13300 = {{ 65}, (char*)"typedef struct nctempchar1 { int d[1]; char *a;} nctempchar1; \n\0"};
nctemp13299=&nctemp13300;
nctempchar1* nctemp13297= nctemp13299;
int nctemp13301=CodeEs(nctemp13295,nctemp13297);
struct tree* nctemp13303= p;
int nctemp13305= 7;
int nctemp13307=PtreeSetline(nctemp13303,nctemp13305);
struct tree* nctemp13309= p;
struct nctempchar1 *nctemp13313;
static struct nctempchar1 nctemp13314 = {{ 74}, (char*)"typedef struct nctempcomplex1 { int d[1]; complex *a;} nctempcomplex1; \n\0"};
nctemp13313=&nctemp13314;
nctempchar1* nctemp13311= nctemp13313;
int nctemp13315=CodeEs(nctemp13309,nctemp13311);
struct tree* nctemp13317= p;
int nctemp13319= 8;
int nctemp13321=PtreeSetline(nctemp13317,nctemp13319);
int nctemp13325=CodeArraycheck();
int nctemp13322 = (nctemp13325 ==1);
if(nctemp13322)
{
struct tree* nctemp13328= p;
struct nctempchar1 *nctemp13332;
static struct nctempchar1 nctemp13333 = {{ 55}, (char*)"static struct nctempchar1 nctempstringx = {0, NULL};\n\0"};
nctemp13332=&nctemp13333;
nctempchar1* nctemp13330= nctemp13332;
int nctemp13334=CodeEs(nctemp13328,nctemp13330);
struct tree* nctemp13336= p;
struct nctempchar1 *nctemp13340;
static struct nctempchar1 nctemp13341 = {{ 60}, (char*)"static struct nctempchar1 *nctempstring = &nctempstringx;\n\0"};
nctemp13340=&nctemp13341;
nctempchar1* nctemp13338= nctemp13340;
int nctemp13342=CodeEs(nctemp13336,nctemp13338);
struct tree* nctemp13344= p;
int nctemp13346= 8;
int nctemp13348=PtreeSetline(nctemp13344,nctemp13346);
}
struct tree* nctemp13350= p;
struct nctempchar1 *nctemp13354;
static struct nctempchar1 nctemp13355 = {{ 68}, (char*)"typedef struct nctempfloat2 { int d[2]; float *a;} nctempfloat2; \n\0"};
nctemp13354=&nctemp13355;
nctempchar1* nctemp13352= nctemp13354;
int nctemp13356=CodeEs(nctemp13350,nctemp13352);
struct tree* nctemp13358= p;
int nctemp13360= 10;
int nctemp13362=PtreeSetline(nctemp13358,nctemp13360);
struct tree* nctemp13364= p;
struct nctempchar1 *nctemp13368;
static struct nctempchar1 nctemp13369 = {{ 62}, (char*)"typedef struct nctempint2 { int d[2]; int *a;} nctempint2; \n\0"};
nctemp13368=&nctemp13369;
nctempchar1* nctemp13366= nctemp13368;
int nctemp13370=CodeEs(nctemp13364,nctemp13366);
struct tree* nctemp13372= p;
int nctemp13374= 10;
int nctemp13376=PtreeSetline(nctemp13372,nctemp13374);
struct tree* nctemp13378= p;
struct nctempchar1 *nctemp13382;
static struct nctempchar1 nctemp13383 = {{ 65}, (char*)"typedef struct nctempchar2 { int d[2]; char *a;} nctempchar2; \n\0"};
nctemp13382=&nctemp13383;
nctempchar1* nctemp13380= nctemp13382;
int nctemp13384=CodeEs(nctemp13378,nctemp13380);
struct tree* nctemp13386= p;
int nctemp13388= 12;
int nctemp13390=PtreeSetline(nctemp13386,nctemp13388);
struct tree* nctemp13392= p;
struct nctempchar1 *nctemp13396;
static struct nctempchar1 nctemp13397 = {{ 74}, (char*)"typedef struct nctempcomplex2 { int d[2]; complex *a;} nctempcomplex2; \n\0"};
nctemp13396=&nctemp13397;
nctempchar1* nctemp13394= nctemp13396;
int nctemp13398=CodeEs(nctemp13392,nctemp13394);
struct tree* nctemp13400= p;
int nctemp13402= 13;
int nctemp13404=PtreeSetline(nctemp13400,nctemp13402);
struct tree* nctemp13406= p;
struct nctempchar1 *nctemp13410;
static struct nctempchar1 nctemp13411 = {{ 68}, (char*)"typedef struct nctempfloat3 { int d[3]; float *a;} nctempfloat3; \n\0"};
nctemp13410=&nctemp13411;
nctempchar1* nctemp13408= nctemp13410;
int nctemp13412=CodeEs(nctemp13406,nctemp13408);
struct tree* nctemp13414= p;
int nctemp13416= 14;
int nctemp13418=PtreeSetline(nctemp13414,nctemp13416);
struct tree* nctemp13420= p;
struct nctempchar1 *nctemp13424;
static struct nctempchar1 nctemp13425 = {{ 62}, (char*)"typedef struct nctempint3 { int d[3]; int *a;} nctempint3; \n\0"};
nctemp13424=&nctemp13425;
nctempchar1* nctemp13422= nctemp13424;
int nctemp13426=CodeEs(nctemp13420,nctemp13422);
struct tree* nctemp13428= p;
int nctemp13430= 15;
int nctemp13432=PtreeSetline(nctemp13428,nctemp13430);
struct tree* nctemp13434= p;
struct nctempchar1 *nctemp13438;
static struct nctempchar1 nctemp13439 = {{ 65}, (char*)"typedef struct nctempchar3 { int d[3]; char *a;} nctempchar3; \n\0"};
nctemp13438=&nctemp13439;
nctempchar1* nctemp13436= nctemp13438;
int nctemp13440=CodeEs(nctemp13434,nctemp13436);
struct tree* nctemp13442= p;
int nctemp13444= 16;
int nctemp13446=PtreeSetline(nctemp13442,nctemp13444);
struct tree* nctemp13448= p;
struct nctempchar1 *nctemp13452;
static struct nctempchar1 nctemp13453 = {{ 74}, (char*)"typedef struct nctempcomplex3 { int d[3]; complex *a;} nctempcomplex3; \n\0"};
nctemp13452=&nctemp13453;
nctempchar1* nctemp13450= nctemp13452;
int nctemp13454=CodeEs(nctemp13448,nctemp13450);
struct tree* nctemp13456= p;
int nctemp13458= 17;
int nctemp13460=PtreeSetline(nctemp13456,nctemp13458);
struct tree* nctemp13462= p;
struct nctempchar1 *nctemp13466;
static struct nctempchar1 nctemp13467 = {{ 68}, (char*)"typedef struct nctempfloat4 { int d[4]; float *a;} nctempfloat4; \n\0"};
nctemp13466=&nctemp13467;
nctempchar1* nctemp13464= nctemp13466;
int nctemp13468=CodeEs(nctemp13462,nctemp13464);
struct tree* nctemp13470= p;
int nctemp13472= 18;
int nctemp13474=PtreeSetline(nctemp13470,nctemp13472);
struct tree* nctemp13476= p;
struct nctempchar1 *nctemp13480;
static struct nctempchar1 nctemp13481 = {{ 62}, (char*)"typedef struct nctempint4 { int d[4]; int *a;} nctempint4; \n\0"};
nctemp13480=&nctemp13481;
nctempchar1* nctemp13478= nctemp13480;
int nctemp13482=CodeEs(nctemp13476,nctemp13478);
struct tree* nctemp13484= p;
int nctemp13486= 19;
int nctemp13488=PtreeSetline(nctemp13484,nctemp13486);
struct tree* nctemp13490= p;
struct nctempchar1 *nctemp13494;
static struct nctempchar1 nctemp13495 = {{ 65}, (char*)"typedef struct nctempchar4 { int d[4]; char *a;} nctempchar4; \n\0"};
nctemp13494=&nctemp13495;
nctempchar1* nctemp13492= nctemp13494;
int nctemp13496=CodeEs(nctemp13490,nctemp13492);
struct tree* nctemp13498= p;
int nctemp13500= 20;
int nctemp13502=PtreeSetline(nctemp13498,nctemp13500);
struct tree* nctemp13504= p;
struct nctempchar1 *nctemp13508;
static struct nctempchar1 nctemp13509 = {{ 74}, (char*)"typedef struct nctempcomplex4 { int d[4]; complex *a;} nctempcomplex4; \n\0"};
nctemp13508=&nctemp13509;
nctempchar1* nctemp13506= nctemp13508;
int nctemp13510=CodeEs(nctemp13504,nctemp13506);
struct tree* nctemp13512= p;
struct nctempchar1 *nctemp13516;
static struct nctempchar1 nctemp13517 = {{ 22}, (char*)"#include <stdlib.h>\n\0"};
nctemp13516=&nctemp13517;
nctempchar1* nctemp13514= nctemp13516;
int nctemp13518=CodeEs(nctemp13512,nctemp13514);
struct tree* nctemp13520= p;
struct nctempchar1 *nctemp13524;
static struct nctempchar1 nctemp13525 = {{ 22}, (char*)"#include <string.h>\n\0"};
nctemp13524=&nctemp13525;
nctempchar1* nctemp13522= nctemp13524;
int nctemp13526=CodeEs(nctemp13520,nctemp13522);
struct tree* nctemp13528= p;
struct nctempchar1 *nctemp13532;
static struct nctempchar1 nctemp13533 = {{ 27}, (char*)"void *RunMalloc(int n); \n\0"};
nctemp13532=&nctemp13533;
nctempchar1* nctemp13530= nctemp13532;
int nctemp13534=CodeEs(nctemp13528,nctemp13530);
struct tree* nctemp13536= p;
struct nctempchar1 *nctemp13540;
static struct nctempchar1 nctemp13541 = {{ 25}, (char*)"int RunFree(void *n); \n\0"};
nctemp13540=&nctemp13541;
nctempchar1* nctemp13538= nctemp13540;
int nctemp13542=CodeEs(nctemp13536,nctemp13538);
return 1;
}
int CodePreamblecuda ()
{
struct tree* p;
struct nctempchar1 *nctemp13550;
static struct nctempchar1 nctemp13551 = {{ 6}, (char*)"dummy\0"};
nctemp13550=&nctemp13551;
nctempchar1* nctemp13548= nctemp13550;
struct nctempchar1 *nctemp13554;
static struct nctempchar1 nctemp13555 = {{ 6}, (char*)"dummy\0"};
nctemp13554=&nctemp13555;
nctempchar1* nctemp13552= nctemp13554;
struct tree* nctemp13556=PtreeMknode(nctemp13548,nctemp13552);
p =nctemp13556;
struct tree* nctemp13558= p;
int nctemp13560= 1;
int nctemp13562=PtreeSetline(nctemp13558,nctemp13560);
struct tree* nctemp13564= p;
struct nctempchar1 *nctemp13568;
static struct nctempchar1 nctemp13569 = {{ 50}, (char*)"//  Translated by epsc  version December 2021  \n\0"};
nctemp13568=&nctemp13569;
nctempchar1* nctemp13566= nctemp13568;
int nctemp13570=CodeEs(nctemp13564,nctemp13566);
struct tree* nctemp13572= p;
int nctemp13574= 2;
int nctemp13576=PtreeSetline(nctemp13572,nctemp13574);
struct tree* nctemp13578= p;
int nctemp13580= 3;
int nctemp13582=PtreeSetline(nctemp13578,nctemp13580);
struct tree* nctemp13584= p;
struct nctempchar1 *nctemp13588;
static struct nctempchar1 nctemp13589 = {{ 17}, (char*)"extern \"C\" {\n\0"};
nctemp13588=&nctemp13589;
nctempchar1* nctemp13586= nctemp13588;
int nctemp13590=CodeEs(nctemp13584,nctemp13586);
struct tree* nctemp13592= p;
struct nctempchar1 *nctemp13596;
static struct nctempchar1 nctemp13597 = {{ 48}, (char*)"typedef struct { float r; float i;} complex; \n\0"};
nctemp13596=&nctemp13597;
nctempchar1* nctemp13594= nctemp13596;
int nctemp13598=CodeEs(nctemp13592,nctemp13594);
struct tree* nctemp13600= p;
int nctemp13602= 3;
int nctemp13604=PtreeSetline(nctemp13600,nctemp13602);
struct tree* nctemp13606= p;
struct nctempchar1 *nctemp13610;
static struct nctempchar1 nctemp13611 = {{ 68}, (char*)"typedef struct nctempfloat1 { int d[1]; float *a;} nctempfloat1; \n\0"};
nctemp13610=&nctemp13611;
nctempchar1* nctemp13608= nctemp13610;
int nctemp13612=CodeEs(nctemp13606,nctemp13608);
struct tree* nctemp13614= p;
int nctemp13616= 5;
int nctemp13618=PtreeSetline(nctemp13614,nctemp13616);
struct tree* nctemp13620= p;
struct nctempchar1 *nctemp13624;
static struct nctempchar1 nctemp13625 = {{ 62}, (char*)"typedef struct nctempint1 { int d[1]; int *a;} nctempint1; \n\0"};
nctemp13624=&nctemp13625;
nctempchar1* nctemp13622= nctemp13624;
int nctemp13626=CodeEs(nctemp13620,nctemp13622);
struct tree* nctemp13628= p;
int nctemp13630= 7;
int nctemp13632=PtreeSetline(nctemp13628,nctemp13630);
struct tree* nctemp13634= p;
struct nctempchar1 *nctemp13638;
static struct nctempchar1 nctemp13639 = {{ 65}, (char*)"typedef struct nctempchar1 { int d[1]; char *a;} nctempchar1; \n\0"};
nctemp13638=&nctemp13639;
nctempchar1* nctemp13636= nctemp13638;
int nctemp13640=CodeEs(nctemp13634,nctemp13636);
struct tree* nctemp13642= p;
int nctemp13644= 7;
int nctemp13646=PtreeSetline(nctemp13642,nctemp13644);
struct tree* nctemp13648= p;
struct nctempchar1 *nctemp13652;
static struct nctempchar1 nctemp13653 = {{ 74}, (char*)"typedef struct nctempcomplex1 { int d[1]; complex *a;} nctempcomplex1; \n\0"};
nctemp13652=&nctemp13653;
nctempchar1* nctemp13650= nctemp13652;
int nctemp13654=CodeEs(nctemp13648,nctemp13650);
struct tree* nctemp13656= p;
int nctemp13658= 8;
int nctemp13660=PtreeSetline(nctemp13656,nctemp13658);
int nctemp13664=CodeArraycheck();
int nctemp13661 = (nctemp13664 ==1);
if(nctemp13661)
{
struct tree* nctemp13667= p;
struct nctempchar1 *nctemp13671;
static struct nctempchar1 nctemp13672 = {{ 55}, (char*)"static struct nctempchar1 nctempstringx = {0, NULL};\n\0"};
nctemp13671=&nctemp13672;
nctempchar1* nctemp13669= nctemp13671;
int nctemp13673=CodeEs(nctemp13667,nctemp13669);
struct tree* nctemp13675= p;
struct nctempchar1 *nctemp13679;
static struct nctempchar1 nctemp13680 = {{ 60}, (char*)"static struct nctempchar1 *nctempstring = &nctempstringx;\n\0"};
nctemp13679=&nctemp13680;
nctempchar1* nctemp13677= nctemp13679;
int nctemp13681=CodeEs(nctemp13675,nctemp13677);
struct tree* nctemp13683= p;
int nctemp13685= 8;
int nctemp13687=PtreeSetline(nctemp13683,nctemp13685);
}
struct tree* nctemp13689= p;
struct nctempchar1 *nctemp13693;
static struct nctempchar1 nctemp13694 = {{ 68}, (char*)"typedef struct nctempfloat2 { int d[2]; float *a;} nctempfloat2; \n\0"};
nctemp13693=&nctemp13694;
nctempchar1* nctemp13691= nctemp13693;
int nctemp13695=CodeEs(nctemp13689,nctemp13691);
struct tree* nctemp13697= p;
int nctemp13699= 10;
int nctemp13701=PtreeSetline(nctemp13697,nctemp13699);
struct tree* nctemp13703= p;
struct nctempchar1 *nctemp13707;
static struct nctempchar1 nctemp13708 = {{ 62}, (char*)"typedef struct nctempint2 { int d[2]; int *a;} nctempint2; \n\0"};
nctemp13707=&nctemp13708;
nctempchar1* nctemp13705= nctemp13707;
int nctemp13709=CodeEs(nctemp13703,nctemp13705);
struct tree* nctemp13711= p;
int nctemp13713= 10;
int nctemp13715=PtreeSetline(nctemp13711,nctemp13713);
struct tree* nctemp13717= p;
struct nctempchar1 *nctemp13721;
static struct nctempchar1 nctemp13722 = {{ 65}, (char*)"typedef struct nctempchar2 { int d[2]; char *a;} nctempchar2; \n\0"};
nctemp13721=&nctemp13722;
nctempchar1* nctemp13719= nctemp13721;
int nctemp13723=CodeEs(nctemp13717,nctemp13719);
struct tree* nctemp13725= p;
int nctemp13727= 12;
int nctemp13729=PtreeSetline(nctemp13725,nctemp13727);
struct tree* nctemp13731= p;
struct nctempchar1 *nctemp13735;
static struct nctempchar1 nctemp13736 = {{ 74}, (char*)"typedef struct nctempcomplex2 { int d[2]; complex *a;} nctempcomplex2; \n\0"};
nctemp13735=&nctemp13736;
nctempchar1* nctemp13733= nctemp13735;
int nctemp13737=CodeEs(nctemp13731,nctemp13733);
struct tree* nctemp13739= p;
int nctemp13741= 13;
int nctemp13743=PtreeSetline(nctemp13739,nctemp13741);
struct tree* nctemp13745= p;
struct nctempchar1 *nctemp13749;
static struct nctempchar1 nctemp13750 = {{ 68}, (char*)"typedef struct nctempfloat3 { int d[3]; float *a;} nctempfloat3; \n\0"};
nctemp13749=&nctemp13750;
nctempchar1* nctemp13747= nctemp13749;
int nctemp13751=CodeEs(nctemp13745,nctemp13747);
struct tree* nctemp13753= p;
int nctemp13755= 14;
int nctemp13757=PtreeSetline(nctemp13753,nctemp13755);
struct tree* nctemp13759= p;
struct nctempchar1 *nctemp13763;
static struct nctempchar1 nctemp13764 = {{ 62}, (char*)"typedef struct nctempint3 { int d[3]; int *a;} nctempint3; \n\0"};
nctemp13763=&nctemp13764;
nctempchar1* nctemp13761= nctemp13763;
int nctemp13765=CodeEs(nctemp13759,nctemp13761);
struct tree* nctemp13767= p;
int nctemp13769= 15;
int nctemp13771=PtreeSetline(nctemp13767,nctemp13769);
struct tree* nctemp13773= p;
struct nctempchar1 *nctemp13777;
static struct nctempchar1 nctemp13778 = {{ 65}, (char*)"typedef struct nctempchar3 { int d[3]; char *a;} nctempchar3; \n\0"};
nctemp13777=&nctemp13778;
nctempchar1* nctemp13775= nctemp13777;
int nctemp13779=CodeEs(nctemp13773,nctemp13775);
struct tree* nctemp13781= p;
int nctemp13783= 16;
int nctemp13785=PtreeSetline(nctemp13781,nctemp13783);
struct tree* nctemp13787= p;
struct nctempchar1 *nctemp13791;
static struct nctempchar1 nctemp13792 = {{ 74}, (char*)"typedef struct nctempcomplex3 { int d[3]; complex *a;} nctempcomplex3; \n\0"};
nctemp13791=&nctemp13792;
nctempchar1* nctemp13789= nctemp13791;
int nctemp13793=CodeEs(nctemp13787,nctemp13789);
struct tree* nctemp13795= p;
int nctemp13797= 17;
int nctemp13799=PtreeSetline(nctemp13795,nctemp13797);
struct tree* nctemp13801= p;
struct nctempchar1 *nctemp13805;
static struct nctempchar1 nctemp13806 = {{ 68}, (char*)"typedef struct nctempfloat4 { int d[4]; float *a;} nctempfloat4; \n\0"};
nctemp13805=&nctemp13806;
nctempchar1* nctemp13803= nctemp13805;
int nctemp13807=CodeEs(nctemp13801,nctemp13803);
struct tree* nctemp13809= p;
int nctemp13811= 18;
int nctemp13813=PtreeSetline(nctemp13809,nctemp13811);
struct tree* nctemp13815= p;
struct nctempchar1 *nctemp13819;
static struct nctempchar1 nctemp13820 = {{ 62}, (char*)"typedef struct nctempint4 { int d[4]; int *a;} nctempint4; \n\0"};
nctemp13819=&nctemp13820;
nctempchar1* nctemp13817= nctemp13819;
int nctemp13821=CodeEs(nctemp13815,nctemp13817);
struct tree* nctemp13823= p;
int nctemp13825= 19;
int nctemp13827=PtreeSetline(nctemp13823,nctemp13825);
struct tree* nctemp13829= p;
struct nctempchar1 *nctemp13833;
static struct nctempchar1 nctemp13834 = {{ 65}, (char*)"typedef struct nctempchar4 { int d[4]; char *a;} nctempchar4; \n\0"};
nctemp13833=&nctemp13834;
nctempchar1* nctemp13831= nctemp13833;
int nctemp13835=CodeEs(nctemp13829,nctemp13831);
struct tree* nctemp13837= p;
int nctemp13839= 20;
int nctemp13841=PtreeSetline(nctemp13837,nctemp13839);
struct tree* nctemp13843= p;
struct nctempchar1 *nctemp13847;
static struct nctempchar1 nctemp13848 = {{ 74}, (char*)"typedef struct nctempcomplex4 { int d[4]; complex *a;} nctempcomplex4; \n\0"};
nctemp13847=&nctemp13848;
nctempchar1* nctemp13845= nctemp13847;
int nctemp13849=CodeEs(nctemp13843,nctemp13845);
struct tree* nctemp13851= p;
struct nctempchar1 *nctemp13855;
static struct nctempchar1 nctemp13856 = {{ 21}, (char*)"#include <stdio.h>\n\0"};
nctemp13855=&nctemp13856;
nctempchar1* nctemp13853= nctemp13855;
int nctemp13857=CodeEs(nctemp13851,nctemp13853);
struct tree* nctemp13859= p;
struct nctempchar1 *nctemp13863;
static struct nctempchar1 nctemp13864 = {{ 22}, (char*)"#include <stdlib.h>\n\0"};
nctemp13863=&nctemp13864;
nctempchar1* nctemp13861= nctemp13863;
int nctemp13865=CodeEs(nctemp13859,nctemp13861);
struct tree* nctemp13867= p;
struct nctempchar1 *nctemp13871;
static struct nctempchar1 nctemp13872 = {{ 22}, (char*)"#include <string.h>\n\0"};
nctemp13871=&nctemp13872;
nctempchar1* nctemp13869= nctemp13871;
int nctemp13873=CodeEs(nctemp13867,nctemp13869);
struct tree* nctemp13875= p;
struct nctempchar1 *nctemp13879;
static struct nctempchar1 nctemp13880 = {{ 22}, (char*)"#include <assert.h>\n\0"};
nctemp13879=&nctemp13880;
nctempchar1* nctemp13877= nctemp13879;
int nctemp13881=CodeEs(nctemp13875,nctemp13877);
struct tree* nctemp13883= p;
struct nctempchar1 *nctemp13887;
static struct nctempchar1 nctemp13888 = {{ 3}, (char*)"\n\0"};
nctemp13887=&nctemp13888;
nctempchar1* nctemp13885= nctemp13887;
int nctemp13889=CodeEs(nctemp13883,nctemp13885);
struct tree* nctemp13891= p;
struct nctempchar1 *nctemp13895;
static struct nctempchar1 nctemp13896 = {{ 23}, (char*)"void *GpuNew(int n);\n\0"};
nctemp13895=&nctemp13896;
nctempchar1* nctemp13893= nctemp13895;
int nctemp13897=CodeEs(nctemp13891,nctemp13893);
struct tree* nctemp13899= p;
struct nctempchar1 *nctemp13903;
static struct nctempchar1 nctemp13904 = {{ 28}, (char*)"void *GpuDelete(void *f);\n\0"};
nctemp13903=&nctemp13904;
nctempchar1* nctemp13901= nctemp13903;
int nctemp13905=CodeEs(nctemp13899,nctemp13901);
struct tree* nctemp13907= p;
struct nctempchar1 *nctemp13911;
static struct nctempchar1 nctemp13912 = {{ 20}, (char*)"void *GpuError();\n\0"};
nctemp13911=&nctemp13912;
nctempchar1* nctemp13909= nctemp13911;
int nctemp13913=CodeEs(nctemp13907,nctemp13909);
struct tree* nctemp13915= p;
struct nctempchar1 *nctemp13919;
static struct nctempchar1 nctemp13920 = {{ 26}, (char*)"void *RunMalloc(int n);\n\0"};
nctemp13919=&nctemp13920;
nctempchar1* nctemp13917= nctemp13919;
int nctemp13921=CodeEs(nctemp13915,nctemp13917);
struct tree* nctemp13923= p;
struct nctempchar1 *nctemp13927;
static struct nctempchar1 nctemp13928 = {{ 24}, (char*)"int RunFree(void * );\n\0"};
nctemp13927=&nctemp13928;
nctempchar1* nctemp13925= nctemp13927;
int nctemp13929=CodeEs(nctemp13923,nctemp13925);
struct tree* nctemp13931= p;
struct nctempchar1 *nctemp13935;
static struct nctempchar1 nctemp13936 = {{ 17}, (char*)"int RunSync();\n\0"};
nctemp13935=&nctemp13936;
nctempchar1* nctemp13933= nctemp13935;
int nctemp13937=CodeEs(nctemp13931,nctemp13933);
struct tree* nctemp13939= p;
struct nctempchar1 *nctemp13943;
static struct nctempchar1 nctemp13944 = {{ 18}, (char*)"int RunGetnt();\n\0"};
nctemp13943=&nctemp13944;
nctempchar1* nctemp13941= nctemp13943;
int nctemp13945=CodeEs(nctemp13939,nctemp13941);
struct tree* nctemp13947= p;
struct nctempchar1 *nctemp13951;
static struct nctempchar1 nctemp13952 = {{ 18}, (char*)"int RunGetnb();\n\0"};
nctemp13951=&nctemp13952;
nctempchar1* nctemp13949= nctemp13951;
int nctemp13953=CodeEs(nctemp13947,nctemp13949);
return 1;
}
int CodePreamblehip ()
{
struct tree* p;
struct nctempchar1 *nctemp13961;
static struct nctempchar1 nctemp13962 = {{ 6}, (char*)"dummy\0"};
nctemp13961=&nctemp13962;
nctempchar1* nctemp13959= nctemp13961;
struct nctempchar1 *nctemp13965;
static struct nctempchar1 nctemp13966 = {{ 6}, (char*)"dummy\0"};
nctemp13965=&nctemp13966;
nctempchar1* nctemp13963= nctemp13965;
struct tree* nctemp13967=PtreeMknode(nctemp13959,nctemp13963);
p =nctemp13967;
struct tree* nctemp13969= p;
int nctemp13971= 1;
int nctemp13973=PtreeSetline(nctemp13969,nctemp13971);
struct tree* nctemp13975= p;
struct nctempchar1 *nctemp13979;
static struct nctempchar1 nctemp13980 = {{ 50}, (char*)"//  Translated by epsc  version December 2021  \n\0"};
nctemp13979=&nctemp13980;
nctempchar1* nctemp13977= nctemp13979;
int nctemp13981=CodeEs(nctemp13975,nctemp13977);
struct tree* nctemp13983= p;
int nctemp13985= 2;
int nctemp13987=PtreeSetline(nctemp13983,nctemp13985);
struct tree* nctemp13989= p;
int nctemp13991= 3;
int nctemp13993=PtreeSetline(nctemp13989,nctemp13991);
struct tree* nctemp13995= p;
struct nctempchar1 *nctemp13999;
static struct nctempchar1 nctemp14000 = {{ 48}, (char*)"typedef struct { float r; float i;} complex; \n\0"};
nctemp13999=&nctemp14000;
nctempchar1* nctemp13997= nctemp13999;
int nctemp14001=CodeEs(nctemp13995,nctemp13997);
struct tree* nctemp14003= p;
int nctemp14005= 3;
int nctemp14007=PtreeSetline(nctemp14003,nctemp14005);
struct tree* nctemp14009= p;
struct nctempchar1 *nctemp14013;
static struct nctempchar1 nctemp14014 = {{ 68}, (char*)"typedef struct nctempfloat1 { int d[1]; float *a;} nctempfloat1; \n\0"};
nctemp14013=&nctemp14014;
nctempchar1* nctemp14011= nctemp14013;
int nctemp14015=CodeEs(nctemp14009,nctemp14011);
struct tree* nctemp14017= p;
int nctemp14019= 5;
int nctemp14021=PtreeSetline(nctemp14017,nctemp14019);
struct tree* nctemp14023= p;
struct nctempchar1 *nctemp14027;
static struct nctempchar1 nctemp14028 = {{ 62}, (char*)"typedef struct nctempint1 { int d[1]; int *a;} nctempint1; \n\0"};
nctemp14027=&nctemp14028;
nctempchar1* nctemp14025= nctemp14027;
int nctemp14029=CodeEs(nctemp14023,nctemp14025);
struct tree* nctemp14031= p;
int nctemp14033= 7;
int nctemp14035=PtreeSetline(nctemp14031,nctemp14033);
struct tree* nctemp14037= p;
struct nctempchar1 *nctemp14041;
static struct nctempchar1 nctemp14042 = {{ 65}, (char*)"typedef struct nctempchar1 { int d[1]; char *a;} nctempchar1; \n\0"};
nctemp14041=&nctemp14042;
nctempchar1* nctemp14039= nctemp14041;
int nctemp14043=CodeEs(nctemp14037,nctemp14039);
struct tree* nctemp14045= p;
int nctemp14047= 7;
int nctemp14049=PtreeSetline(nctemp14045,nctemp14047);
struct tree* nctemp14051= p;
struct nctempchar1 *nctemp14055;
static struct nctempchar1 nctemp14056 = {{ 74}, (char*)"typedef struct nctempcomplex1 { int d[1]; complex *a;} nctempcomplex1; \n\0"};
nctemp14055=&nctemp14056;
nctempchar1* nctemp14053= nctemp14055;
int nctemp14057=CodeEs(nctemp14051,nctemp14053);
struct tree* nctemp14059= p;
int nctemp14061= 8;
int nctemp14063=PtreeSetline(nctemp14059,nctemp14061);
int nctemp14067=CodeArraycheck();
int nctemp14064 = (nctemp14067 ==1);
if(nctemp14064)
{
struct tree* nctemp14070= p;
struct nctempchar1 *nctemp14074;
static struct nctempchar1 nctemp14075 = {{ 54}, (char*)"static struct nctempchar1 nctempstring = {0, NULL};\n\0"};
nctemp14074=&nctemp14075;
nctempchar1* nctemp14072= nctemp14074;
int nctemp14076=CodeEs(nctemp14070,nctemp14072);
struct tree* nctemp14078= p;
int nctemp14080= 8;
int nctemp14082=PtreeSetline(nctemp14078,nctemp14080);
}
struct tree* nctemp14084= p;
struct nctempchar1 *nctemp14088;
static struct nctempchar1 nctemp14089 = {{ 68}, (char*)"typedef struct nctempfloat2 { int d[2]; float *a;} nctempfloat2; \n\0"};
nctemp14088=&nctemp14089;
nctempchar1* nctemp14086= nctemp14088;
int nctemp14090=CodeEs(nctemp14084,nctemp14086);
struct tree* nctemp14092= p;
int nctemp14094= 10;
int nctemp14096=PtreeSetline(nctemp14092,nctemp14094);
struct tree* nctemp14098= p;
struct nctempchar1 *nctemp14102;
static struct nctempchar1 nctemp14103 = {{ 62}, (char*)"typedef struct nctempint2 { int d[2]; int *a;} nctempint2; \n\0"};
nctemp14102=&nctemp14103;
nctempchar1* nctemp14100= nctemp14102;
int nctemp14104=CodeEs(nctemp14098,nctemp14100);
struct tree* nctemp14106= p;
int nctemp14108= 10;
int nctemp14110=PtreeSetline(nctemp14106,nctemp14108);
struct tree* nctemp14112= p;
struct nctempchar1 *nctemp14116;
static struct nctempchar1 nctemp14117 = {{ 65}, (char*)"typedef struct nctempchar2 { int d[2]; char *a;} nctempchar2; \n\0"};
nctemp14116=&nctemp14117;
nctempchar1* nctemp14114= nctemp14116;
int nctemp14118=CodeEs(nctemp14112,nctemp14114);
struct tree* nctemp14120= p;
int nctemp14122= 12;
int nctemp14124=PtreeSetline(nctemp14120,nctemp14122);
struct tree* nctemp14126= p;
struct nctempchar1 *nctemp14130;
static struct nctempchar1 nctemp14131 = {{ 74}, (char*)"typedef struct nctempcomplex2 { int d[2]; complex *a;} nctempcomplex2; \n\0"};
nctemp14130=&nctemp14131;
nctempchar1* nctemp14128= nctemp14130;
int nctemp14132=CodeEs(nctemp14126,nctemp14128);
struct tree* nctemp14134= p;
int nctemp14136= 13;
int nctemp14138=PtreeSetline(nctemp14134,nctemp14136);
struct tree* nctemp14140= p;
struct nctempchar1 *nctemp14144;
static struct nctempchar1 nctemp14145 = {{ 68}, (char*)"typedef struct nctempfloat3 { int d[3]; float *a;} nctempfloat3; \n\0"};
nctemp14144=&nctemp14145;
nctempchar1* nctemp14142= nctemp14144;
int nctemp14146=CodeEs(nctemp14140,nctemp14142);
struct tree* nctemp14148= p;
int nctemp14150= 14;
int nctemp14152=PtreeSetline(nctemp14148,nctemp14150);
struct tree* nctemp14154= p;
struct nctempchar1 *nctemp14158;
static struct nctempchar1 nctemp14159 = {{ 62}, (char*)"typedef struct nctempint3 { int d[3]; int *a;} nctempint3; \n\0"};
nctemp14158=&nctemp14159;
nctempchar1* nctemp14156= nctemp14158;
int nctemp14160=CodeEs(nctemp14154,nctemp14156);
struct tree* nctemp14162= p;
int nctemp14164= 15;
int nctemp14166=PtreeSetline(nctemp14162,nctemp14164);
struct tree* nctemp14168= p;
struct nctempchar1 *nctemp14172;
static struct nctempchar1 nctemp14173 = {{ 65}, (char*)"typedef struct nctempchar3 { int d[3]; char *a;} nctempchar3; \n\0"};
nctemp14172=&nctemp14173;
nctempchar1* nctemp14170= nctemp14172;
int nctemp14174=CodeEs(nctemp14168,nctemp14170);
struct tree* nctemp14176= p;
int nctemp14178= 16;
int nctemp14180=PtreeSetline(nctemp14176,nctemp14178);
struct tree* nctemp14182= p;
struct nctempchar1 *nctemp14186;
static struct nctempchar1 nctemp14187 = {{ 74}, (char*)"typedef struct nctempcomplex3 { int d[3]; complex *a;} nctempcomplex3; \n\0"};
nctemp14186=&nctemp14187;
nctempchar1* nctemp14184= nctemp14186;
int nctemp14188=CodeEs(nctemp14182,nctemp14184);
struct tree* nctemp14190= p;
int nctemp14192= 17;
int nctemp14194=PtreeSetline(nctemp14190,nctemp14192);
struct tree* nctemp14196= p;
struct nctempchar1 *nctemp14200;
static struct nctempchar1 nctemp14201 = {{ 68}, (char*)"typedef struct nctempfloat4 { int d[4]; float *a;} nctempfloat4; \n\0"};
nctemp14200=&nctemp14201;
nctempchar1* nctemp14198= nctemp14200;
int nctemp14202=CodeEs(nctemp14196,nctemp14198);
struct tree* nctemp14204= p;
int nctemp14206= 18;
int nctemp14208=PtreeSetline(nctemp14204,nctemp14206);
struct tree* nctemp14210= p;
struct nctempchar1 *nctemp14214;
static struct nctempchar1 nctemp14215 = {{ 62}, (char*)"typedef struct nctempint4 { int d[4]; int *a;} nctempint4; \n\0"};
nctemp14214=&nctemp14215;
nctempchar1* nctemp14212= nctemp14214;
int nctemp14216=CodeEs(nctemp14210,nctemp14212);
struct tree* nctemp14218= p;
int nctemp14220= 19;
int nctemp14222=PtreeSetline(nctemp14218,nctemp14220);
struct tree* nctemp14224= p;
struct nctempchar1 *nctemp14228;
static struct nctempchar1 nctemp14229 = {{ 65}, (char*)"typedef struct nctempchar4 { int d[4]; char *a;} nctempchar4; \n\0"};
nctemp14228=&nctemp14229;
nctempchar1* nctemp14226= nctemp14228;
int nctemp14230=CodeEs(nctemp14224,nctemp14226);
struct tree* nctemp14232= p;
int nctemp14234= 20;
int nctemp14236=PtreeSetline(nctemp14232,nctemp14234);
struct tree* nctemp14238= p;
struct nctempchar1 *nctemp14242;
static struct nctempchar1 nctemp14243 = {{ 74}, (char*)"typedef struct nctempcomplex4 { int d[4]; complex *a;} nctempcomplex4; \n\0"};
nctemp14242=&nctemp14243;
nctempchar1* nctemp14240= nctemp14242;
int nctemp14244=CodeEs(nctemp14238,nctemp14240);
struct tree* nctemp14246= p;
struct nctempchar1 *nctemp14250;
static struct nctempchar1 nctemp14251 = {{ 21}, (char*)"#include <stdio.h>\n\0"};
nctemp14250=&nctemp14251;
nctempchar1* nctemp14248= nctemp14250;
int nctemp14252=CodeEs(nctemp14246,nctemp14248);
struct tree* nctemp14254= p;
struct nctempchar1 *nctemp14258;
static struct nctempchar1 nctemp14259 = {{ 17}, (char*)"extern \"C\" {\n\0"};
nctemp14258=&nctemp14259;
nctempchar1* nctemp14256= nctemp14258;
int nctemp14260=CodeEs(nctemp14254,nctemp14256);
struct tree* nctemp14262= p;
struct nctempchar1 *nctemp14266;
static struct nctempchar1 nctemp14267 = {{ 22}, (char*)"#include <stdlib.h>\n\0"};
nctemp14266=&nctemp14267;
nctempchar1* nctemp14264= nctemp14266;
int nctemp14268=CodeEs(nctemp14262,nctemp14264);
struct tree* nctemp14270= p;
struct nctempchar1 *nctemp14274;
static struct nctempchar1 nctemp14275 = {{ 22}, (char*)"#include <string.h>\n\0"};
nctemp14274=&nctemp14275;
nctempchar1* nctemp14272= nctemp14274;
int nctemp14276=CodeEs(nctemp14270,nctemp14272);
struct tree* nctemp14278= p;
struct nctempchar1 *nctemp14282;
static struct nctempchar1 nctemp14283 = {{ 4}, (char*)"}\n\0"};
nctemp14282=&nctemp14283;
nctempchar1* nctemp14280= nctemp14282;
int nctemp14284=CodeEs(nctemp14278,nctemp14280);
struct tree* nctemp14286= p;
struct nctempchar1 *nctemp14290;
static struct nctempchar1 nctemp14291 = {{ 34}, (char*)"#include \"hip/hip_runtime.h\" \n\0"};
nctemp14290=&nctemp14291;
nctempchar1* nctemp14288= nctemp14290;
int nctemp14292=CodeEs(nctemp14286,nctemp14288);
struct tree* nctemp14294= p;
struct nctempchar1 *nctemp14298;
static struct nctempchar1 nctemp14299 = {{ 3}, (char*)"\n\0"};
nctemp14298=&nctemp14299;
nctempchar1* nctemp14296= nctemp14298;
int nctemp14300=CodeEs(nctemp14294,nctemp14296);
struct tree* nctemp14302= p;
struct nctempchar1 *nctemp14306;
static struct nctempchar1 nctemp14307 = {{ 23}, (char*)"void *GpuNew(int n);\n\0"};
nctemp14306=&nctemp14307;
nctempchar1* nctemp14304= nctemp14306;
int nctemp14308=CodeEs(nctemp14302,nctemp14304);
struct tree* nctemp14310= p;
struct nctempchar1 *nctemp14314;
static struct nctempchar1 nctemp14315 = {{ 28}, (char*)"void *GpuDelete(void *f);\n\0"};
nctemp14314=&nctemp14315;
nctempchar1* nctemp14312= nctemp14314;
int nctemp14316=CodeEs(nctemp14310,nctemp14312);
struct tree* nctemp14318= p;
struct nctempchar1 *nctemp14322;
static struct nctempchar1 nctemp14323 = {{ 20}, (char*)"void *GpuError();\n\0"};
nctemp14322=&nctemp14323;
nctempchar1* nctemp14320= nctemp14322;
int nctemp14324=CodeEs(nctemp14318,nctemp14320);
struct tree* nctemp14326= p;
struct nctempchar1 *nctemp14330;
static struct nctempchar1 nctemp14331 = {{ 26}, (char*)"void *RunMalloc(int n);\n\0"};
nctemp14330=&nctemp14331;
nctempchar1* nctemp14328= nctemp14330;
int nctemp14332=CodeEs(nctemp14326,nctemp14328);
struct tree* nctemp14334= p;
struct nctempchar1 *nctemp14338;
static struct nctempchar1 nctemp14339 = {{ 24}, (char*)"int RunFree(void *p);\n\0"};
nctemp14338=&nctemp14339;
nctempchar1* nctemp14336= nctemp14338;
int nctemp14340=CodeEs(nctemp14334,nctemp14336);
return 1;
}
int CodePreamble ()
{
int nctemp14345=CodeGetarch();
int nctemp14342 = (nctemp14345 ==1);
if(nctemp14342)
{
int nctemp14348=CodePreamblecpu();
return 1;
}
else{
int nctemp14353=CodeGetarch();
int nctemp14350 = (nctemp14353 ==2);
if(nctemp14350)
{
int nctemp14356=CodePreamblecuda();
return 1;
}
else{
int nctemp14361=CodeGetarch();
int nctemp14358 = (nctemp14361 ==3);
if(nctemp14358)
{
int nctemp14364=CodePreamblehip();
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
int nctemp14371=CodeGetfdout();
fdo =nctemp14371;
int nctemp14375=CodeGetarch();
int nctemp14372 = (nctemp14375 ==2);
if(nctemp14372)
{
int nctemp14378= fdo;
struct nctempchar1 *nctemp14382;
static struct nctempchar1 nctemp14383 = {{ 4}, (char*)"}\n\0"};
nctemp14382=&nctemp14383;
nctempchar1* nctemp14380= nctemp14382;
int nctemp14384=LibePuts(nctemp14378,nctemp14380);
return 1;
}
else{
int nctemp14389=CodeGetarch();
int nctemp14386 = (nctemp14389 ==3);
if(nctemp14386)
{
int nctemp14392= fdo;
struct nctempchar1 *nctemp14396;
static struct nctempchar1 nctemp14397 = {{ 4}, (char*)"}\n\0"};
nctemp14396=&nctemp14397;
nctempchar1* nctemp14394= nctemp14396;
int nctemp14398=LibePuts(nctemp14392,nctemp14394);
return 1;
}
else{
return 0;
}
}
}
}
