//  Translated by epsc  version December 2021  
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
int SymSetetp (struct symbol* tp);
struct symbol* SymGetetp ();
int SymSetltp (struct symbol* tp);
struct symbol* SymGetltp ();
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
}
}
struct symbol* nctemp1304= tp;
struct symbol* nctemp1306=SymMvnext(nctemp1304);
tp =nctemp1306;
}
int nctemp1307 = (tp !=0);
nctemp1246=nctemp1307;}return 1;
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
struct tree* nctemp1317= p;
nctempchar1* nctemp1319=PtreeGetarray(nctemp1317);
nctempchar1* nctemp1315= nctemp1319;
struct nctempchar1 *nctemp1322;
static struct nctempchar1 nctemp1323 = {{ 6}, (char*)"array\0"};
nctemp1322=&nctemp1323;
nctempchar1* nctemp1320= nctemp1322;
int nctemp1324=LibeStrcmp(nctemp1315,nctemp1320);
int nctemp1312 = (nctemp1324 ==1);
if(nctemp1312)
{
struct tree* nctemp1330= p;
struct tree* nctemp1332=PtreeMvchild(nctemp1330);
p =nctemp1332;
struct tree* nctemp1337= p;
struct tree* nctemp1339=PtreeMvsister(nctemp1337);
p =nctemp1339;
struct tree* nctemp1345= p;
nctempchar1* nctemp1347=PtreeGetforw(nctemp1345);
nctempchar1* nctemp1343= nctemp1347;
struct nctempchar1 *nctemp1350;
static struct nctempchar1 nctemp1351 = {{ 5}, (char*)"forw\0"};
nctemp1350=&nctemp1351;
nctempchar1* nctemp1348= nctemp1350;
int nctemp1352=LibeStrcmp(nctemp1343,nctemp1348);
int nctemp1340 = (nctemp1352 ==1);
if(nctemp1340)
{
forw = 1;
}
}
else{
struct tree* nctemp1358= p;
struct tree* nctemp1360=PtreeMvchild(nctemp1358);
p =nctemp1360;
struct tree* nctemp1366= p;
nctempchar1* nctemp1368=PtreeGetforw(nctemp1366);
nctempchar1* nctemp1364= nctemp1368;
struct nctempchar1 *nctemp1371;
static struct nctempchar1 nctemp1372 = {{ 5}, (char*)"forw\0"};
nctemp1371=&nctemp1372;
nctempchar1* nctemp1369= nctemp1371;
int nctemp1373=LibeStrcmp(nctemp1364,nctemp1369);
int nctemp1361 = (nctemp1373 ==1);
if(nctemp1361)
{
forw = 1;
}
}
struct tree* nctemp1381= p;
nctempchar1* nctemp1383=PtreeGetdef(nctemp1381);
nctempchar1* nctemp1379= nctemp1383;
struct symbol* nctemp1386=SymGetetp();
struct symbol* nctemp1384= nctemp1386;
struct symbol* nctemp1387=SymLookup(nctemp1379,nctemp1384);
tp =nctemp1387;
struct symbol* nctemp1393= tp;
nctempchar1* nctemp1395=SymGetstruct(nctemp1393);
nctempchar1* nctemp1391= nctemp1395;
struct nctempchar1 *nctemp1398;
static struct nctempchar1 nctemp1399 = {{ 7}, (char*)"struct\0"};
nctemp1398=&nctemp1399;
nctempchar1* nctemp1396= nctemp1398;
int nctemp1400=LibeStrcmp(nctemp1391,nctemp1396);
int nctemp1388 = (nctemp1400 ==1);
if(nctemp1388)
{
struct tree* nctemp1403= p;
struct nctempchar1 *nctemp1407;
static struct nctempchar1 nctemp1408 = {{ 8}, (char*)"struct \0"};
nctemp1407=&nctemp1408;
nctempchar1* nctemp1405= nctemp1407;
int nctemp1409=CodeEs(nctemp1403,nctemp1405);
}
struct symbol* nctemp1415= tp;
nctempchar1* nctemp1417=SymGetarray(nctemp1415);
nctempchar1* nctemp1413= nctemp1417;
struct nctempchar1 *nctemp1420;
static struct nctempchar1 nctemp1421 = {{ 6}, (char*)"array\0"};
nctemp1420=&nctemp1421;
nctempchar1* nctemp1418= nctemp1420;
int nctemp1422=LibeStrcmp(nctemp1413,nctemp1418);
int nctemp1410 = (nctemp1422 ==1);
if(nctemp1410)
{
struct tree* nctemp1425= p;
struct nctempchar1 *nctemp1429;
static struct nctempchar1 nctemp1430 = {{ 7}, (char*)"nctemp\0"};
nctemp1429=&nctemp1430;
nctempchar1* nctemp1427= nctemp1429;
int nctemp1431=CodeEs(nctemp1425,nctemp1427);
}
struct tree* nctemp1433= p;
struct symbol* nctemp1437= tp;
nctempchar1* nctemp1439=SymGetype(nctemp1437);
nctempchar1* nctemp1435= nctemp1439;
int nctemp1440=CodeEs(nctemp1433,nctemp1435);
struct symbol* nctemp1446= tp;
nctempchar1* nctemp1448=SymGetarray(nctemp1446);
nctempchar1* nctemp1444= nctemp1448;
struct nctempchar1 *nctemp1451;
static struct nctempchar1 nctemp1452 = {{ 6}, (char*)"array\0"};
nctemp1451=&nctemp1452;
nctempchar1* nctemp1449= nctemp1451;
int nctemp1453=LibeStrcmp(nctemp1444,nctemp1449);
int nctemp1441 = (nctemp1453 ==1);
if(nctemp1441)
{
struct symbol* nctemp1458= tp;
int nctemp1460=SymGetrank(nctemp1458);
int nctemp1456= nctemp1460;
int nctemp1461=CodeEd(nctemp1456);
struct tree* nctemp1463= p;
struct nctempchar1 *nctemp1467;
static struct nctempchar1 nctemp1468 = {{ 3}, (char*)" *\0"};
nctemp1467=&nctemp1468;
nctempchar1* nctemp1465= nctemp1467;
int nctemp1469=CodeEs(nctemp1463,nctemp1465);
}
struct symbol* nctemp1475= tp;
nctempchar1* nctemp1477=SymGetstruct(nctemp1475);
nctempchar1* nctemp1473= nctemp1477;
struct nctempchar1 *nctemp1480;
static struct nctempchar1 nctemp1481 = {{ 7}, (char*)"struct\0"};
nctemp1480=&nctemp1481;
nctempchar1* nctemp1478= nctemp1480;
int nctemp1482=LibeStrcmp(nctemp1473,nctemp1478);
int nctemp1470 = (nctemp1482 ==1);
if(nctemp1470)
{
struct tree* nctemp1485= p;
struct nctempchar1 *nctemp1489;
static struct nctempchar1 nctemp1490 = {{ 2}, (char*)"*\0"};
nctemp1489=&nctemp1490;
nctempchar1* nctemp1487= nctemp1489;
int nctemp1491=CodeEs(nctemp1485,nctemp1487);
}
struct tree* nctemp1493= p;
struct nctempchar1 *nctemp1497;
static struct nctempchar1 nctemp1498 = {{ 2}, (char*)" \0"};
nctemp1497=&nctemp1498;
nctempchar1* nctemp1495= nctemp1497;
int nctemp1499=CodeEs(nctemp1493,nctemp1495);
struct tree* nctemp1501= p;
struct symbol* nctemp1505= tp;
nctempchar1* nctemp1507=SymGetname(nctemp1505);
nctempchar1* nctemp1503= nctemp1507;
int nctemp1508=CodeEs(nctemp1501,nctemp1503);
struct tree* nctemp1510= p;
struct nctempchar1 *nctemp1514;
static struct nctempchar1 nctemp1515 = {{ 3}, (char*)" (\0"};
nctemp1514=&nctemp1515;
nctempchar1* nctemp1512= nctemp1514;
int nctemp1516=CodeEs(nctemp1510,nctemp1512);
struct tree* nctemp1520= p;
struct tree* nctemp1522=PtreeMvchild(nctemp1520);
int nctemp1517 = (nctemp1522 !=0);
if(nctemp1517)
{
struct tree* nctemp1528= p;
struct tree* nctemp1530=PtreeMvchild(nctemp1528);
p =nctemp1530;
}
struct tree* nctemp1536= p;
nctempchar1* nctemp1538=PtreeGetname(nctemp1536);
nctempchar1* nctemp1534= nctemp1538;
struct nctempchar1 *nctemp1541;
static struct nctempchar1 nctemp1542 = {{ 8}, (char*)"arglist\0"};
nctemp1541=&nctemp1542;
nctempchar1* nctemp1539= nctemp1541;
int nctemp1543=LibeStrcmp(nctemp1534,nctemp1539);
int nctemp1531 = (nctemp1543 ==1);
if(nctemp1531)
{
struct symbol* nctemp1549= tp;
struct symbol* nctemp1551=SymGetable(nctemp1549);
tp =nctemp1551;
struct nctempchar1 *nctemp1558;
static struct nctempchar1 nctemp1559 = {{ 9}, (char*)"#arglist\0"};
nctemp1558=&nctemp1559;
nctempchar1* nctemp1556= nctemp1558;
struct symbol* nctemp1560= tp;
struct symbol* nctemp1562=SymLookup(nctemp1556,nctemp1560);
tp =nctemp1562;
struct symbol* nctemp1567= tp;
struct symbol* nctemp1569=SymGetable(nctemp1567);
tp =nctemp1569;
struct symbol* nctemp1577= tp;
struct symbol* nctemp1579=SymMvnext(nctemp1577);
tp =nctemp1579;
int nctemp1570 = (tp !=0);
int nctemp1581=nctemp1570;
while(nctemp1581)
{{
struct tree* nctemp1583= p;
struct symbol* nctemp1585= tp;
int nctemp1587=CodeIdeclaration(nctemp1583,nctemp1585);
struct symbol* nctemp1591= tp;
struct symbol* nctemp1593=SymMvnext(nctemp1591);
int nctemp1588 = (nctemp1593 !=0);
if(nctemp1588)
{
struct tree* nctemp1596= p;
struct nctempchar1 *nctemp1600;
static struct nctempchar1 nctemp1601 = {{ 2}, (char*)",\0"};
nctemp1600=&nctemp1601;
nctempchar1* nctemp1598= nctemp1600;
int nctemp1602=CodeEs(nctemp1596,nctemp1598);
}
noarg = (noarg + 1);
}
struct symbol* nctemp1610= tp;
struct symbol* nctemp1612=SymMvnext(nctemp1610);
tp =nctemp1612;
int nctemp1603 = (tp !=0);
nctemp1581=nctemp1603;}}
struct tree* nctemp1615= p;
struct nctempchar1 *nctemp1619;
static struct nctempchar1 nctemp1620 = {{ 4}, (char*)")\n\0"};
nctemp1619=&nctemp1620;
nctempchar1* nctemp1617= nctemp1619;
int nctemp1621=CodeEs(nctemp1615,nctemp1617);
int nctemp1622 = (forw ==1);
if(nctemp1622)
{
struct tree* nctemp1627= p;
struct nctempchar1 *nctemp1631;
static struct nctempchar1 nctemp1632 = {{ 4}, (char*)";\n\0"};
nctemp1631=&nctemp1632;
nctempchar1* nctemp1629= nctemp1631;
int nctemp1633=CodeEs(nctemp1627,nctemp1629);
return 1;
}
struct tree* nctemp1638= p;
struct tree* nctemp1640=PtreeMvsister(nctemp1638);
int nctemp1635 = (nctemp1640 !=0);
if(nctemp1635)
{
struct tree* nctemp1645= p;
struct tree* nctemp1647=PtreeMvsister(nctemp1645);
struct tree* nctemp1643= nctemp1647;
int nctemp1648=CodeCompstmnt(nctemp1643);
}
else{
struct tree* nctemp1650= p;
int nctemp1652=CodeCompstmnt(nctemp1650);
}
return 1;
}
int CodeFdeclkernel (struct tree* p)
{
struct symbol* tp;
int noarg;
noarg = 0;
struct tree* nctemp1660= p;
nctempchar1* nctemp1662=PtreeGetdef(nctemp1660);
nctempchar1* nctemp1658= nctemp1662;
struct symbol* nctemp1665=SymGetetp();
struct symbol* nctemp1663= nctemp1665;
struct symbol* nctemp1666=SymLookup(nctemp1658,nctemp1663);
tp =nctemp1666;
struct symbol* nctemp1670= tp;
struct symbol* nctemp1672=SymGetable(nctemp1670);
struct symbol* nctemp1668= nctemp1672;
int nctemp1673=SymSetltp(nctemp1668);
struct tree* nctemp1675= p;
struct nctempchar1 *nctemp1679;
static struct nctempchar1 nctemp1680 = {{ 12}, (char*)"__global__ \0"};
nctemp1679=&nctemp1680;
nctempchar1* nctemp1677= nctemp1679;
int nctemp1681=CodeEs(nctemp1675,nctemp1677);
struct tree* nctemp1683= p;
struct nctempchar1 *nctemp1687;
static struct nctempchar1 nctemp1688 = {{ 5}, (char*)"void\0"};
nctemp1687=&nctemp1688;
nctempchar1* nctemp1685= nctemp1687;
int nctemp1689=CodeEs(nctemp1683,nctemp1685);
struct symbol* nctemp1695= tp;
nctempchar1* nctemp1697=SymGetarray(nctemp1695);
nctempchar1* nctemp1693= nctemp1697;
struct nctempchar1 *nctemp1700;
static struct nctempchar1 nctemp1701 = {{ 6}, (char*)"array\0"};
nctemp1700=&nctemp1701;
nctempchar1* nctemp1698= nctemp1700;
int nctemp1702=LibeStrcmp(nctemp1693,nctemp1698);
int nctemp1690 = (nctemp1702 ==1);
if(nctemp1690)
{
struct symbol* nctemp1707= tp;
int nctemp1709=SymGetrank(nctemp1707);
int nctemp1705= nctemp1709;
int nctemp1710=CodeEd(nctemp1705);
}
struct symbol* nctemp1716= tp;
nctempchar1* nctemp1718=SymGetstruct(nctemp1716);
nctempchar1* nctemp1714= nctemp1718;
struct nctempchar1 *nctemp1721;
static struct nctempchar1 nctemp1722 = {{ 7}, (char*)"struct\0"};
nctemp1721=&nctemp1722;
nctempchar1* nctemp1719= nctemp1721;
int nctemp1723=LibeStrcmp(nctemp1714,nctemp1719);
int nctemp1711 = (nctemp1723 ==1);
if(nctemp1711)
{
struct tree* nctemp1726= p;
struct nctempchar1 *nctemp1730;
static struct nctempchar1 nctemp1731 = {{ 2}, (char*)"*\0"};
nctemp1730=&nctemp1731;
nctempchar1* nctemp1728= nctemp1730;
int nctemp1732=CodeEs(nctemp1726,nctemp1728);
}
struct tree* nctemp1734= p;
struct nctempchar1 *nctemp1738;
static struct nctempchar1 nctemp1739 = {{ 2}, (char*)" \0"};
nctemp1738=&nctemp1739;
nctempchar1* nctemp1736= nctemp1738;
int nctemp1740=CodeEs(nctemp1734,nctemp1736);
struct tree* nctemp1742= p;
struct nctempchar1 *nctemp1746;
static struct nctempchar1 nctemp1747 = {{ 8}, (char*)"kernel_\0"};
nctemp1746=&nctemp1747;
nctempchar1* nctemp1744= nctemp1746;
int nctemp1748=CodeEs(nctemp1742,nctemp1744);
struct tree* nctemp1750= p;
struct symbol* nctemp1754= tp;
nctempchar1* nctemp1756=SymGetname(nctemp1754);
nctempchar1* nctemp1752= nctemp1756;
int nctemp1757=CodeEs(nctemp1750,nctemp1752);
struct tree* nctemp1759= p;
struct nctempchar1 *nctemp1763;
static struct nctempchar1 nctemp1764 = {{ 3}, (char*)" (\0"};
nctemp1763=&nctemp1764;
nctempchar1* nctemp1761= nctemp1763;
int nctemp1765=CodeEs(nctemp1759,nctemp1761);
struct tree* nctemp1770= p;
struct tree* nctemp1772=PtreeMvchild(nctemp1770);
p =nctemp1772;
struct tree* nctemp1778= p;
nctempchar1* nctemp1780=PtreeGetname(nctemp1778);
nctempchar1* nctemp1776= nctemp1780;
struct nctempchar1 *nctemp1783;
static struct nctempchar1 nctemp1784 = {{ 8}, (char*)"arglist\0"};
nctemp1783=&nctemp1784;
nctempchar1* nctemp1781= nctemp1783;
int nctemp1785=LibeStrcmp(nctemp1776,nctemp1781);
int nctemp1773 = (nctemp1785 ==1);
if(nctemp1773)
{
struct symbol* nctemp1791= tp;
struct symbol* nctemp1793=SymGetable(nctemp1791);
tp =nctemp1793;
struct nctempchar1 *nctemp1800;
static struct nctempchar1 nctemp1801 = {{ 9}, (char*)"#arglist\0"};
nctemp1800=&nctemp1801;
nctempchar1* nctemp1798= nctemp1800;
struct symbol* nctemp1802= tp;
struct symbol* nctemp1804=SymLookup(nctemp1798,nctemp1802);
tp =nctemp1804;
struct symbol* nctemp1809= tp;
struct symbol* nctemp1811=SymGetable(nctemp1809);
tp =nctemp1811;
struct symbol* nctemp1819= tp;
struct symbol* nctemp1821=SymMvnext(nctemp1819);
tp =nctemp1821;
int nctemp1812 = (tp !=0);
int nctemp1823=nctemp1812;
while(nctemp1823)
{{
struct tree* nctemp1825= p;
struct symbol* nctemp1827= tp;
int nctemp1829=CodeIdeclaration(nctemp1825,nctemp1827);
struct symbol* nctemp1833= tp;
struct symbol* nctemp1835=SymMvnext(nctemp1833);
int nctemp1830 = (nctemp1835 !=0);
if(nctemp1830)
{
struct tree* nctemp1838= p;
struct nctempchar1 *nctemp1842;
static struct nctempchar1 nctemp1843 = {{ 2}, (char*)",\0"};
nctemp1842=&nctemp1843;
nctempchar1* nctemp1840= nctemp1842;
int nctemp1844=CodeEs(nctemp1838,nctemp1840);
}
noarg = (noarg + 1);
}
struct symbol* nctemp1852= tp;
struct symbol* nctemp1854=SymMvnext(nctemp1852);
tp =nctemp1854;
int nctemp1845 = (tp !=0);
nctemp1823=nctemp1845;}}
struct tree* nctemp1857= p;
struct nctempchar1 *nctemp1861;
static struct nctempchar1 nctemp1862 = {{ 5}, (char*)");\n\0"};
nctemp1861=&nctemp1862;
nctempchar1* nctemp1859= nctemp1861;
int nctemp1863=CodeEs(nctemp1857,nctemp1859);
return 1;
}
int CodeFdefgpu (struct tree* p)
{
struct symbol* tp;
int noarg;
int forw;
noarg = 0;
forw = 0;
struct tree* nctemp1870= p;
nctempchar1* nctemp1872=PtreeGetarray(nctemp1870);
nctempchar1* nctemp1868= nctemp1872;
struct nctempchar1 *nctemp1875;
static struct nctempchar1 nctemp1876 = {{ 6}, (char*)"array\0"};
nctemp1875=&nctemp1876;
nctempchar1* nctemp1873= nctemp1875;
int nctemp1877=LibeStrcmp(nctemp1868,nctemp1873);
int nctemp1865 = (nctemp1877 ==1);
if(nctemp1865)
{
struct tree* nctemp1883= p;
struct tree* nctemp1885=PtreeMvchild(nctemp1883);
p =nctemp1885;
struct tree* nctemp1890= p;
struct tree* nctemp1892=PtreeMvsister(nctemp1890);
p =nctemp1892;
struct tree* nctemp1898= p;
nctempchar1* nctemp1900=PtreeGetforw(nctemp1898);
nctempchar1* nctemp1896= nctemp1900;
struct nctempchar1 *nctemp1903;
static struct nctempchar1 nctemp1904 = {{ 5}, (char*)"forw\0"};
nctemp1903=&nctemp1904;
nctempchar1* nctemp1901= nctemp1903;
int nctemp1905=LibeStrcmp(nctemp1896,nctemp1901);
int nctemp1893 = (nctemp1905 ==1);
if(nctemp1893)
{
forw = 1;
}
}
else{
struct tree* nctemp1911= p;
struct tree* nctemp1913=PtreeMvchild(nctemp1911);
p =nctemp1913;
struct tree* nctemp1919= p;
nctempchar1* nctemp1921=PtreeGetforw(nctemp1919);
nctempchar1* nctemp1917= nctemp1921;
struct nctempchar1 *nctemp1924;
static struct nctempchar1 nctemp1925 = {{ 5}, (char*)"forw\0"};
nctemp1924=&nctemp1925;
nctempchar1* nctemp1922= nctemp1924;
int nctemp1926=LibeStrcmp(nctemp1917,nctemp1922);
int nctemp1914 = (nctemp1926 ==1);
if(nctemp1914)
{
forw = 1;
}
}
struct tree* nctemp1934= p;
nctempchar1* nctemp1936=PtreeGetdef(nctemp1934);
nctempchar1* nctemp1932= nctemp1936;
struct symbol* nctemp1939=SymGetetp();
struct symbol* nctemp1937= nctemp1939;
struct symbol* nctemp1940=SymLookup(nctemp1932,nctemp1937);
tp =nctemp1940;
struct tree* nctemp1942= p;
struct nctempchar1 *nctemp1946;
static struct nctempchar1 nctemp1947 = {{ 11}, (char*)"__global__\0"};
nctemp1946=&nctemp1947;
nctempchar1* nctemp1944= nctemp1946;
int nctemp1948=CodeEs(nctemp1942,nctemp1944);
struct tree* nctemp1950= p;
struct nctempchar1 *nctemp1954;
static struct nctempchar1 nctemp1955 = {{ 6}, (char*)" void\0"};
nctemp1954=&nctemp1955;
nctempchar1* nctemp1952= nctemp1954;
int nctemp1956=CodeEs(nctemp1950,nctemp1952);
struct tree* nctemp1958= p;
struct nctempchar1 *nctemp1962;
static struct nctempchar1 nctemp1963 = {{ 2}, (char*)" \0"};
nctemp1962=&nctemp1963;
nctempchar1* nctemp1960= nctemp1962;
int nctemp1964=CodeEs(nctemp1958,nctemp1960);
struct tree* nctemp1966= p;
struct nctempchar1 *nctemp1970;
static struct nctempchar1 nctemp1971 = {{ 8}, (char*)"kernel_\0"};
nctemp1970=&nctemp1971;
nctempchar1* nctemp1968= nctemp1970;
int nctemp1972=CodeEs(nctemp1966,nctemp1968);
struct tree* nctemp1974= p;
struct symbol* nctemp1978= tp;
nctempchar1* nctemp1980=SymGetname(nctemp1978);
nctempchar1* nctemp1976= nctemp1980;
int nctemp1981=CodeEs(nctemp1974,nctemp1976);
struct tree* nctemp1983= p;
struct nctempchar1 *nctemp1987;
static struct nctempchar1 nctemp1988 = {{ 3}, (char*)" (\0"};
nctemp1987=&nctemp1988;
nctempchar1* nctemp1985= nctemp1987;
int nctemp1989=CodeEs(nctemp1983,nctemp1985);
struct tree* nctemp1993= p;
struct tree* nctemp1995=PtreeMvchild(nctemp1993);
int nctemp1990 = (nctemp1995 !=0);
if(nctemp1990)
{
struct tree* nctemp2001= p;
struct tree* nctemp2003=PtreeMvchild(nctemp2001);
p =nctemp2003;
}
struct tree* nctemp2009= p;
nctempchar1* nctemp2011=PtreeGetname(nctemp2009);
nctempchar1* nctemp2007= nctemp2011;
struct nctempchar1 *nctemp2014;
static struct nctempchar1 nctemp2015 = {{ 8}, (char*)"arglist\0"};
nctemp2014=&nctemp2015;
nctempchar1* nctemp2012= nctemp2014;
int nctemp2016=LibeStrcmp(nctemp2007,nctemp2012);
int nctemp2004 = (nctemp2016 ==1);
if(nctemp2004)
{
struct symbol* nctemp2022= tp;
struct symbol* nctemp2024=SymGetable(nctemp2022);
tp =nctemp2024;
struct nctempchar1 *nctemp2031;
static struct nctempchar1 nctemp2032 = {{ 9}, (char*)"#arglist\0"};
nctemp2031=&nctemp2032;
nctempchar1* nctemp2029= nctemp2031;
struct symbol* nctemp2033= tp;
struct symbol* nctemp2035=SymLookup(nctemp2029,nctemp2033);
tp =nctemp2035;
struct symbol* nctemp2040= tp;
struct symbol* nctemp2042=SymGetable(nctemp2040);
tp =nctemp2042;
struct symbol* nctemp2050= tp;
struct symbol* nctemp2052=SymMvnext(nctemp2050);
tp =nctemp2052;
int nctemp2043 = (tp !=0);
int nctemp2054=nctemp2043;
while(nctemp2054)
{{
struct tree* nctemp2056= p;
struct symbol* nctemp2058= tp;
int nctemp2060=CodeIdeclaration(nctemp2056,nctemp2058);
struct symbol* nctemp2064= tp;
struct symbol* nctemp2066=SymMvnext(nctemp2064);
int nctemp2061 = (nctemp2066 !=0);
if(nctemp2061)
{
struct tree* nctemp2069= p;
struct nctempchar1 *nctemp2073;
static struct nctempchar1 nctemp2074 = {{ 2}, (char*)",\0"};
nctemp2073=&nctemp2074;
nctempchar1* nctemp2071= nctemp2073;
int nctemp2075=CodeEs(nctemp2069,nctemp2071);
}
noarg = (noarg + 1);
}
struct symbol* nctemp2083= tp;
struct symbol* nctemp2085=SymMvnext(nctemp2083);
tp =nctemp2085;
int nctemp2076 = (tp !=0);
nctemp2054=nctemp2076;}}
struct tree* nctemp2088= p;
struct nctempchar1 *nctemp2092;
static struct nctempchar1 nctemp2093 = {{ 4}, (char*)")\n\0"};
nctemp2092=&nctemp2093;
nctempchar1* nctemp2090= nctemp2092;
int nctemp2094=CodeEs(nctemp2088,nctemp2090);
int nctemp2095 = (forw ==1);
if(nctemp2095)
{
struct tree* nctemp2100= p;
struct nctempchar1 *nctemp2104;
static struct nctempchar1 nctemp2105 = {{ 4}, (char*)";\n\0"};
nctemp2104=&nctemp2105;
nctempchar1* nctemp2102= nctemp2104;
int nctemp2106=CodeEs(nctemp2100,nctemp2102);
return 1;
}
struct tree* nctemp2111= p;
struct tree* nctemp2113=PtreeMvsister(nctemp2111);
int nctemp2108 = (nctemp2113 !=0);
if(nctemp2108)
{
struct tree* nctemp2118= p;
struct tree* nctemp2120=PtreeMvsister(nctemp2118);
struct tree* nctemp2116= nctemp2120;
int nctemp2121=CodeCompstmnt(nctemp2116);
}
else{
struct tree* nctemp2123= p;
int nctemp2125=CodeCompstmnt(nctemp2123);
}
return 1;
}
int CodeFdewrappergpu (struct tree* p)
{
struct tree* top;
struct symbol* tp;
struct symbol* toptp;
int noarg;
struct tree* nctemp2131= p;
struct tree* nctemp2133=PtreeMvchild(nctemp2131);
p =nctemp2133;
noarg = 0;
struct tree* nctemp2140= p;
nctempchar1* nctemp2142=PtreeGetdef(nctemp2140);
nctempchar1* nctemp2138= nctemp2142;
struct symbol* nctemp2145=SymGetetp();
struct symbol* nctemp2143= nctemp2145;
struct symbol* nctemp2146=SymLookup(nctemp2138,nctemp2143);
tp =nctemp2146;
struct symbol* nctemp2150= tp;
struct symbol* nctemp2152=SymGetable(nctemp2150);
struct symbol* nctemp2148= nctemp2152;
int nctemp2153=SymSetltp(nctemp2148);
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
static struct nctempchar1 nctemp2174 = {{ 8}, (char*)"struct \0"};
nctemp2173=&nctemp2174;
nctempchar1* nctemp2171= nctemp2173;
int nctemp2175=CodeEs(nctemp2169,nctemp2171);
}
struct symbol* nctemp2181= tp;
nctempchar1* nctemp2183=SymGetarray(nctemp2181);
nctempchar1* nctemp2179= nctemp2183;
struct nctempchar1 *nctemp2186;
static struct nctempchar1 nctemp2187 = {{ 6}, (char*)"array\0"};
nctemp2186=&nctemp2187;
nctempchar1* nctemp2184= nctemp2186;
int nctemp2188=LibeStrcmp(nctemp2179,nctemp2184);
int nctemp2176 = (nctemp2188 ==1);
if(nctemp2176)
{
struct tree* nctemp2191= p;
struct nctempchar1 *nctemp2195;
static struct nctempchar1 nctemp2196 = {{ 7}, (char*)"nctemp\0"};
nctemp2195=&nctemp2196;
nctempchar1* nctemp2193= nctemp2195;
int nctemp2197=CodeEs(nctemp2191,nctemp2193);
}
struct tree* nctemp2199= p;
struct symbol* nctemp2203= tp;
nctempchar1* nctemp2205=SymGetype(nctemp2203);
nctempchar1* nctemp2201= nctemp2205;
int nctemp2206=CodeEs(nctemp2199,nctemp2201);
struct symbol* nctemp2212= tp;
nctempchar1* nctemp2214=SymGetarray(nctemp2212);
nctempchar1* nctemp2210= nctemp2214;
struct nctempchar1 *nctemp2217;
static struct nctempchar1 nctemp2218 = {{ 6}, (char*)"array\0"};
nctemp2217=&nctemp2218;
nctempchar1* nctemp2215= nctemp2217;
int nctemp2219=LibeStrcmp(nctemp2210,nctemp2215);
int nctemp2207 = (nctemp2219 ==1);
if(nctemp2207)
{
struct symbol* nctemp2224= tp;
int nctemp2226=SymGetrank(nctemp2224);
int nctemp2222= nctemp2226;
int nctemp2227=CodeEd(nctemp2222);
}
struct symbol* nctemp2233= tp;
nctempchar1* nctemp2235=SymGetstruct(nctemp2233);
nctempchar1* nctemp2231= nctemp2235;
struct nctempchar1 *nctemp2238;
static struct nctempchar1 nctemp2239 = {{ 7}, (char*)"struct\0"};
nctemp2238=&nctemp2239;
nctempchar1* nctemp2236= nctemp2238;
int nctemp2240=LibeStrcmp(nctemp2231,nctemp2236);
int nctemp2228 = (nctemp2240 ==1);
if(nctemp2228)
{
struct tree* nctemp2243= p;
struct nctempchar1 *nctemp2247;
static struct nctempchar1 nctemp2248 = {{ 2}, (char*)"*\0"};
nctemp2247=&nctemp2248;
nctempchar1* nctemp2245= nctemp2247;
int nctemp2249=CodeEs(nctemp2243,nctemp2245);
}
top = p;
toptp = tp;
struct tree* nctemp2251= p;
struct nctempchar1 *nctemp2255;
static struct nctempchar1 nctemp2256 = {{ 2}, (char*)" \0"};
nctemp2255=&nctemp2256;
nctempchar1* nctemp2253= nctemp2255;
int nctemp2257=CodeEs(nctemp2251,nctemp2253);
struct tree* nctemp2259= p;
struct symbol* nctemp2263= tp;
nctempchar1* nctemp2265=SymGetname(nctemp2263);
nctempchar1* nctemp2261= nctemp2265;
int nctemp2266=CodeEs(nctemp2259,nctemp2261);
struct tree* nctemp2268= p;
struct nctempchar1 *nctemp2272;
static struct nctempchar1 nctemp2273 = {{ 3}, (char*)" (\0"};
nctemp2272=&nctemp2273;
nctempchar1* nctemp2270= nctemp2272;
int nctemp2274=CodeEs(nctemp2268,nctemp2270);
struct tree* nctemp2279= p;
struct tree* nctemp2281=PtreeMvchild(nctemp2279);
p =nctemp2281;
struct tree* nctemp2287= p;
nctempchar1* nctemp2289=PtreeGetname(nctemp2287);
nctempchar1* nctemp2285= nctemp2289;
struct nctempchar1 *nctemp2292;
static struct nctempchar1 nctemp2293 = {{ 8}, (char*)"arglist\0"};
nctemp2292=&nctemp2293;
nctempchar1* nctemp2290= nctemp2292;
int nctemp2294=LibeStrcmp(nctemp2285,nctemp2290);
int nctemp2282 = (nctemp2294 ==1);
if(nctemp2282)
{
struct symbol* nctemp2300= tp;
struct symbol* nctemp2302=SymGetable(nctemp2300);
tp =nctemp2302;
struct nctempchar1 *nctemp2309;
static struct nctempchar1 nctemp2310 = {{ 9}, (char*)"#arglist\0"};
nctemp2309=&nctemp2310;
nctempchar1* nctemp2307= nctemp2309;
struct symbol* nctemp2311= tp;
struct symbol* nctemp2313=SymLookup(nctemp2307,nctemp2311);
tp =nctemp2313;
struct symbol* nctemp2318= tp;
struct symbol* nctemp2320=SymGetable(nctemp2318);
tp =nctemp2320;
struct symbol* nctemp2328= tp;
struct symbol* nctemp2330=SymMvnext(nctemp2328);
tp =nctemp2330;
int nctemp2321 = (tp !=0);
int nctemp2332=nctemp2321;
while(nctemp2332)
{{
struct tree* nctemp2334= p;
struct symbol* nctemp2336= tp;
int nctemp2338=CodeIdeclaration(nctemp2334,nctemp2336);
struct symbol* nctemp2342= tp;
struct symbol* nctemp2344=SymMvnext(nctemp2342);
int nctemp2339 = (nctemp2344 !=0);
if(nctemp2339)
{
struct tree* nctemp2347= p;
struct nctempchar1 *nctemp2351;
static struct nctempchar1 nctemp2352 = {{ 2}, (char*)",\0"};
nctemp2351=&nctemp2352;
nctempchar1* nctemp2349= nctemp2351;
int nctemp2353=CodeEs(nctemp2347,nctemp2349);
}
noarg = (noarg + 1);
}
struct symbol* nctemp2361= tp;
struct symbol* nctemp2363=SymMvnext(nctemp2361);
tp =nctemp2363;
int nctemp2354 = (tp !=0);
nctemp2332=nctemp2354;}}
struct tree* nctemp2366= p;
struct nctempchar1 *nctemp2370;
static struct nctempchar1 nctemp2371 = {{ 4}, (char*)")\n\0"};
nctemp2370=&nctemp2371;
nctempchar1* nctemp2368= nctemp2370;
int nctemp2372=CodeEs(nctemp2366,nctemp2368);
struct tree* nctemp2374= p;
struct nctempchar1 *nctemp2378;
static struct nctempchar1 nctemp2379 = {{ 4}, (char*)"{\n\0"};
nctemp2378=&nctemp2379;
nctempchar1* nctemp2376= nctemp2378;
int nctemp2380=CodeEs(nctemp2374,nctemp2376);
p = top;
tp = toptp;
struct tree* nctemp2382= p;
struct nctempchar1 *nctemp2386;
static struct nctempchar1 nctemp2387 = {{ 10}, (char*)"  kernel_\0"};
nctemp2386=&nctemp2387;
nctempchar1* nctemp2384= nctemp2386;
int nctemp2388=CodeEs(nctemp2382,nctemp2384);
struct tree* nctemp2390= p;
struct symbol* nctemp2394= tp;
nctempchar1* nctemp2396=SymGetname(nctemp2394);
nctempchar1* nctemp2392= nctemp2396;
int nctemp2397=CodeEs(nctemp2390,nctemp2392);
struct tree* nctemp2399= p;
struct nctempchar1 *nctemp2403;
static struct nctempchar1 nctemp2404 = {{ 31}, (char*)"<<< RunGetnb(),RunGetnt() >>>(\0"};
nctemp2403=&nctemp2404;
nctempchar1* nctemp2401= nctemp2403;
int nctemp2405=CodeEs(nctemp2399,nctemp2401);
struct tree* nctemp2410= p;
struct tree* nctemp2412=PtreeMvchild(nctemp2410);
p =nctemp2412;
struct tree* nctemp2418= p;
nctempchar1* nctemp2420=PtreeGetname(nctemp2418);
nctempchar1* nctemp2416= nctemp2420;
struct nctempchar1 *nctemp2423;
static struct nctempchar1 nctemp2424 = {{ 8}, (char*)"arglist\0"};
nctemp2423=&nctemp2424;
nctempchar1* nctemp2421= nctemp2423;
int nctemp2425=LibeStrcmp(nctemp2416,nctemp2421);
int nctemp2413 = (nctemp2425 ==1);
if(nctemp2413)
{
struct symbol* nctemp2431= tp;
struct symbol* nctemp2433=SymGetable(nctemp2431);
tp =nctemp2433;
struct nctempchar1 *nctemp2440;
static struct nctempchar1 nctemp2441 = {{ 9}, (char*)"#arglist\0"};
nctemp2440=&nctemp2441;
nctempchar1* nctemp2438= nctemp2440;
struct symbol* nctemp2442= tp;
struct symbol* nctemp2444=SymLookup(nctemp2438,nctemp2442);
tp =nctemp2444;
struct symbol* nctemp2449= tp;
struct symbol* nctemp2451=SymGetable(nctemp2449);
tp =nctemp2451;
struct symbol* nctemp2459= tp;
struct symbol* nctemp2461=SymMvnext(nctemp2459);
tp =nctemp2461;
int nctemp2452 = (tp !=0);
int nctemp2463=nctemp2452;
while(nctemp2463)
{{
struct tree* nctemp2465= p;
struct symbol* nctemp2469= tp;
nctempchar1* nctemp2471=SymGetname(nctemp2469);
nctempchar1* nctemp2467= nctemp2471;
int nctemp2472=CodeEs(nctemp2465,nctemp2467);
struct symbol* nctemp2476= tp;
struct symbol* nctemp2478=SymMvnext(nctemp2476);
int nctemp2473 = (nctemp2478 !=0);
if(nctemp2473)
{
struct tree* nctemp2481= p;
struct nctempchar1 *nctemp2485;
static struct nctempchar1 nctemp2486 = {{ 2}, (char*)",\0"};
nctemp2485=&nctemp2486;
nctempchar1* nctemp2483= nctemp2485;
int nctemp2487=CodeEs(nctemp2481,nctemp2483);
}
noarg = (noarg + 1);
}
struct symbol* nctemp2495= tp;
struct symbol* nctemp2497=SymMvnext(nctemp2495);
tp =nctemp2497;
int nctemp2488 = (tp !=0);
nctemp2463=nctemp2488;}}
struct tree* nctemp2500= p;
struct nctempchar1 *nctemp2504;
static struct nctempchar1 nctemp2505 = {{ 5}, (char*)");\n\0"};
nctemp2504=&nctemp2505;
nctempchar1* nctemp2502= nctemp2504;
int nctemp2506=CodeEs(nctemp2500,nctemp2502);
struct tree* nctemp2508= p;
struct nctempchar1 *nctemp2512;
static struct nctempchar1 nctemp2513 = {{ 14}, (char*)"GpuError();\n\0"};
nctemp2512=&nctemp2513;
nctempchar1* nctemp2510= nctemp2512;
int nctemp2514=CodeEs(nctemp2508,nctemp2510);
struct tree* nctemp2516= p;
struct nctempchar1 *nctemp2520;
static struct nctempchar1 nctemp2521 = {{ 13}, (char*)"return(1);\n\0"};
nctemp2520=&nctemp2521;
nctempchar1* nctemp2518= nctemp2520;
int nctemp2522=CodeEs(nctemp2516,nctemp2518);
struct tree* nctemp2524= p;
struct nctempchar1 *nctemp2528;
static struct nctempchar1 nctemp2529 = {{ 4}, (char*)"}\n\0"};
nctemp2528=&nctemp2529;
nctempchar1* nctemp2526= nctemp2528;
int nctemp2530=CodeEs(nctemp2524,nctemp2526);
return 1;
}
int CodeGdeclarations (struct tree* p,struct symbol* tp)
{
struct symbol* nctemp2536= tp;
struct symbol* nctemp2538=SymMvnext(nctemp2536);
tp =nctemp2538;
int nctemp2539 = (tp !=0);
int nctemp2543=nctemp2539;
while(nctemp2543)
{{
struct nctempchar1 *nctemp2549;
static struct nctempchar1 nctemp2550 = {{ 9}, (char*)"#arglist\0"};
nctemp2549=&nctemp2550;
nctempchar1* nctemp2547= nctemp2549;
struct symbol* nctemp2553= tp;
nctempchar1* nctemp2555=SymGetname(nctemp2553);
nctempchar1* nctemp2551= nctemp2555;
int nctemp2556=LibeStrcmp(nctemp2547,nctemp2551);
int nctemp2544 = (nctemp2556 ==0);
if(nctemp2544)
{
struct symbol* nctemp2561= tp;
int nctemp2563=SymGetemit(nctemp2561);
int nctemp2558 = (nctemp2563 ==1);
if(nctemp2558)
{
struct symbol* nctemp2570= tp;
nctempchar1* nctemp2572=SymGetstruct(nctemp2570);
nctempchar1* nctemp2568= nctemp2572;
struct nctempchar1 *nctemp2575;
static struct nctempchar1 nctemp2576 = {{ 10}, (char*)"structdef\0"};
nctemp2575=&nctemp2576;
nctempchar1* nctemp2573= nctemp2575;
int nctemp2577=LibeStrcmp(nctemp2568,nctemp2573);
int nctemp2565 = (nctemp2577 ==1);
if(nctemp2565)
{
struct tree* nctemp2580= p;
struct symbol* nctemp2582= tp;
int nctemp2584=CodeStructdef(nctemp2580,nctemp2582);
}
else{
struct symbol* nctemp2590= tp;
nctempchar1* nctemp2592=SymGetfunc(nctemp2590);
nctempchar1* nctemp2588= nctemp2592;
struct nctempchar1 *nctemp2595;
static struct nctempchar1 nctemp2596 = {{ 5}, (char*)"fdef\0"};
nctemp2595=&nctemp2596;
nctempchar1* nctemp2593= nctemp2595;
int nctemp2597=LibeStrcmp(nctemp2588,nctemp2593);
int nctemp2585 = (nctemp2597 ==1);
if(nctemp2585)
{
struct tree* nctemp2600= p;
int nctemp2602=CodeFdef(nctemp2600);
}
else{
struct symbol* nctemp2608= tp;
nctempchar1* nctemp2610=SymGetname(nctemp2608);
nctempchar1* nctemp2606= nctemp2610;
struct nctempchar1 *nctemp2613;
static struct nctempchar1 nctemp2614 = {{ 6}, (char*)"#self\0"};
nctemp2613=&nctemp2614;
nctempchar1* nctemp2611= nctemp2613;
int nctemp2615=LibeStrcmp(nctemp2606,nctemp2611);
int nctemp2603 = (nctemp2615 ==0);
if(nctemp2603)
{
struct tree* nctemp2618= p;
struct symbol* nctemp2620= tp;
int nctemp2622=CodeIdeclaration(nctemp2618,nctemp2620);
struct tree* nctemp2624= p;
struct nctempchar1 *nctemp2628;
static struct nctempchar1 nctemp2629 = {{ 4}, (char*)";\n\0"};
nctemp2628=&nctemp2629;
nctempchar1* nctemp2626= nctemp2628;
int nctemp2630=CodeEs(nctemp2624,nctemp2626);
}
}
}
struct symbol* nctemp2632= tp;
int nctemp2634= 0;
int nctemp2636=SymSetemit(nctemp2632,nctemp2634);
}
}
struct symbol* nctemp2641= tp;
struct symbol* nctemp2643=SymMvnext(nctemp2641);
tp =nctemp2643;
}
int nctemp2644 = (tp !=0);
nctemp2543=nctemp2644;}return 1;
}
int CodeDeclarations (struct tree* p,struct symbol* tp)
{
struct tree* np;
int nctemp2649 = (p !=0);
if(nctemp2649)
{
struct tree* nctemp2657= p;
struct tree* nctemp2659=PtreeMvchild(nctemp2657);
np =nctemp2659;
}
else{
np = p;
}
struct tree* nctemp2661= np;
struct symbol* nctemp2663= tp;
int nctemp2665=CodeGdeclarations(nctemp2661,nctemp2663);
return 1;
}
int CodeCode (struct tree* p,struct symbol* tp)
{
struct tree* np;
struct tree* nctemp2671= p;
struct tree* nctemp2673=PtreeMvchild(nctemp2671);
np =nctemp2673;
struct tree* nctemp2677= np;
nctempchar1* nctemp2679=PtreeGetname(nctemp2677);
nctempchar1* nctemp2675= nctemp2679;
struct nctempchar1 *nctemp2682;
static struct nctempchar1 nctemp2683 = {{ 7}, (char*)"import\0"};
nctemp2682=&nctemp2683;
nctempchar1* nctemp2680= nctemp2682;
int nctemp2684=LibeStrcmp(nctemp2675,nctemp2680);
if(nctemp2684)
{
struct tree* nctemp2686= np;
struct symbol* nctemp2688= tp;
int nctemp2690=CodeImport(nctemp2686,nctemp2688);
}
struct tree* nctemp2692= p;
struct symbol* nctemp2694= tp;
int nctemp2696=CodeDeclarations(nctemp2692,nctemp2694);
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
int nctemp2703= 0;
nctempchar1* nctemp2705=CodeItemp(nctemp2703);
return nctemp2705;
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
nctempchar1* nctemp2712=CodeMktemp();
temp=nctemp2712;
nctempchar1* nctemp2717= temp;
struct symbol* nctemp2722=SymGetltp();
struct symbol* nctemp2720= nctemp2722;
struct symbol* nctemp2723=SymMkname(nctemp2717,nctemp2720);
tp =nctemp2723;
struct symbol* nctemp2725= tp;
nctempchar1* nctemp2727= type;
int nctemp2730=SymSetype(nctemp2725,nctemp2727);
struct symbol* nctemp2732= tp;
int nctemp2734= 0;
int nctemp2736=SymSetemit(nctemp2732,nctemp2734);
return temp;
}
struct symbol* CodeNewsymbol (nctempchar1 *type,nctempchar1 *name)
{
struct symbol* tp;
nctempchar1* nctemp2743= name;
struct symbol* nctemp2748=SymGetltp();
struct symbol* nctemp2746= nctemp2748;
struct symbol* nctemp2749=SymMkname(nctemp2743,nctemp2746);
tp =nctemp2749;
struct symbol* nctemp2751= tp;
nctempchar1* nctemp2753= type;
int nctemp2756=SymSetype(nctemp2751,nctemp2753);
struct symbol* nctemp2758= tp;
int nctemp2760= 0;
int nctemp2762=SymSetemit(nctemp2758,nctemp2760);
return tp;
}
nctempchar1 * CodeMkstring (struct tree* p)
{
struct symbol* sp;
nctempchar1 *tmp;
nctempchar1* nctemp2769=CodeMktemp();
tmp=nctemp2769;
nctempchar1* nctemp2774= tmp;
struct symbol* nctemp2779=SymGetltp();
struct symbol* nctemp2777= nctemp2779;
struct symbol* nctemp2780=SymMkname(nctemp2774,nctemp2777);
sp =nctemp2780;
struct symbol* nctemp2782= sp;
int nctemp2784= 1;
int nctemp2786=SymSetrank(nctemp2782,nctemp2784);
struct symbol* nctemp2788= sp;
struct nctempchar1 *nctemp2792;
static struct nctempchar1 nctemp2793 = {{ 5}, (char*)"char\0"};
nctemp2792=&nctemp2793;
nctempchar1* nctemp2790= nctemp2792;
int nctemp2794=SymSetype(nctemp2788,nctemp2790);
struct symbol* nctemp2796= sp;
struct nctempchar1 *nctemp2800;
static struct nctempchar1 nctemp2801 = {{ 6}, (char*)"array\0"};
nctemp2800=&nctemp2801;
nctempchar1* nctemp2798= nctemp2800;
int nctemp2802=SymSetarray(nctemp2796,nctemp2798);
return tmp;
}
nctempchar1 * CodeSconstant (struct tree* p)
{
nctempchar1 *tmp;
nctempchar1 *tmp2;
int l;
nctempchar1* nctemp2810=CodeMktemp();
tmp2=nctemp2810;
struct tree* nctemp2812= p;
struct nctempchar1 *nctemp2816;
static struct nctempchar1 nctemp2817 = {{ 21}, (char*)"struct nctempchar1 *\0"};
nctemp2816=&nctemp2817;
nctempchar1* nctemp2814= nctemp2816;
int nctemp2818=CodeEs(nctemp2812,nctemp2814);
struct tree* nctemp2820= p;
nctempchar1* nctemp2822= tmp2;
int nctemp2825=CodeEs(nctemp2820,nctemp2822);
struct tree* nctemp2827= p;
struct nctempchar1 *nctemp2831;
static struct nctempchar1 nctemp2832 = {{ 4}, (char*)";\n\0"};
nctemp2831=&nctemp2832;
nctempchar1* nctemp2829= nctemp2831;
int nctemp2833=CodeEs(nctemp2827,nctemp2829);
nctempchar1* nctemp2839=CodeMktemp();
tmp=nctemp2839;
struct tree* nctemp2841= p;
struct nctempchar1 *nctemp2845;
static struct nctempchar1 nctemp2846 = {{ 27}, (char*)"static struct nctempchar1 \0"};
nctemp2845=&nctemp2846;
nctempchar1* nctemp2843= nctemp2845;
int nctemp2847=CodeEs(nctemp2841,nctemp2843);
struct tree* nctemp2849= p;
nctempchar1* nctemp2851= tmp;
int nctemp2854=CodeEs(nctemp2849,nctemp2851);
struct tree* nctemp2856= p;
struct nctempchar1 *nctemp2860;
static struct nctempchar1 nctemp2861 = {{ 4}, (char*)" = \0"};
nctemp2860=&nctemp2861;
nctempchar1* nctemp2858= nctemp2860;
int nctemp2862=CodeEs(nctemp2856,nctemp2858);
struct tree* nctemp2864= p;
struct nctempchar1 *nctemp2868;
static struct nctempchar1 nctemp2869 = {{ 4}, (char*)"{{ \0"};
nctemp2868=&nctemp2869;
nctempchar1* nctemp2866= nctemp2868;
int nctemp2870=CodeEs(nctemp2864,nctemp2866);
struct tree* nctemp2880= p;
nctempchar1* nctemp2882=PtreeGetdef(nctemp2880);
nctempchar1* nctemp2878= nctemp2882;
int nctemp2883=LibeStrlen(nctemp2878);
int nctemp2885 = nctemp2883 - 1;
l =nctemp2885;
int nctemp2887= l;
int nctemp2889=CodeEd(nctemp2887);
struct tree* nctemp2891= p;
struct nctempchar1 *nctemp2895;
static struct nctempchar1 nctemp2896 = {{ 11}, (char*)"}, (char*)\0"};
nctemp2895=&nctemp2896;
nctempchar1* nctemp2893= nctemp2895;
int nctemp2897=CodeEs(nctemp2891,nctemp2893);
int nctemp2899= 34;
int nctemp2901=CodeEc(nctemp2899);
struct tree* nctemp2905= p;
nctempchar1* nctemp2907=PtreeGetdef(nctemp2905);
nctempchar1* nctemp2903= nctemp2907;
int nctemp2908=CodeEsr(nctemp2903);
int nctemp2910= 92;
int nctemp2912=CodeEc(nctemp2910);
int nctemp2914= 48;
int nctemp2916=CodeEc(nctemp2914);
int nctemp2918= 34;
int nctemp2920=CodeEc(nctemp2918);
struct tree* nctemp2922= p;
struct nctempchar1 *nctemp2926;
static struct nctempchar1 nctemp2927 = {{ 5}, (char*)"};\n\0"};
nctemp2926=&nctemp2927;
nctempchar1* nctemp2924= nctemp2926;
int nctemp2928=CodeEs(nctemp2922,nctemp2924);
struct tree* nctemp2930= p;
nctempchar1* nctemp2932= tmp2;
int nctemp2935=CodeEs(nctemp2930,nctemp2932);
struct tree* nctemp2937= p;
struct nctempchar1 *nctemp2941;
static struct nctempchar1 nctemp2942 = {{ 3}, (char*)"=&\0"};
nctemp2941=&nctemp2942;
nctempchar1* nctemp2939= nctemp2941;
int nctemp2943=CodeEs(nctemp2937,nctemp2939);
struct tree* nctemp2945= p;
nctempchar1* nctemp2947= tmp;
int nctemp2950=CodeEs(nctemp2945,nctemp2947);
struct tree* nctemp2952= p;
struct nctempchar1 *nctemp2956;
static struct nctempchar1 nctemp2957 = {{ 4}, (char*)";\n\0"};
nctemp2956=&nctemp2957;
nctempchar1* nctemp2954= nctemp2956;
int nctemp2958=CodeEs(nctemp2952,nctemp2954);
return tmp2;
}
int CodeStructdef (struct tree* p,struct symbol* tp)
{
struct symbol* up;
struct tree* nctemp2962= p;
struct nctempchar1 *nctemp2966;
static struct nctempchar1 nctemp2967 = {{ 8}, (char*)"struct \0"};
nctemp2966=&nctemp2967;
nctempchar1* nctemp2964= nctemp2966;
int nctemp2968=CodeEs(nctemp2962,nctemp2964);
struct tree* nctemp2970= p;
struct symbol* nctemp2974= tp;
nctempchar1* nctemp2976=SymGetype(nctemp2974);
nctempchar1* nctemp2972= nctemp2976;
int nctemp2977=CodeEs(nctemp2970,nctemp2972);
struct tree* nctemp2979= p;
struct nctempchar1 *nctemp2983;
static struct nctempchar1 nctemp2984 = {{ 3}, (char*)" {\0"};
nctemp2983=&nctemp2984;
nctempchar1* nctemp2981= nctemp2983;
int nctemp2985=CodeEs(nctemp2979,nctemp2981);
struct symbol* nctemp2990= tp;
struct symbol* nctemp2992=SymGetable(nctemp2990);
up =nctemp2992;
struct symbol* nctemp2997= up;
struct symbol* nctemp2999=SymMvnext(nctemp2997);
up =nctemp2999;
struct tree* nctemp3001= p;
struct symbol* nctemp3003= up;
int nctemp3005=CodeIdeclarations(nctemp3001,nctemp3003);
struct tree* nctemp3007= p;
struct nctempchar1 *nctemp3011;
static struct nctempchar1 nctemp3012 = {{ 5}, (char*)"};\n\0"};
nctemp3011=&nctemp3012;
nctempchar1* nctemp3009= nctemp3011;
int nctemp3013=CodeEs(nctemp3007,nctemp3009);
struct tree* nctemp3015= p;
struct nctempchar1 *nctemp3019;
static struct nctempchar1 nctemp3020 = {{ 16}, (char*)"typedef struct \0"};
nctemp3019=&nctemp3020;
nctempchar1* nctemp3017= nctemp3019;
int nctemp3021=CodeEs(nctemp3015,nctemp3017);
struct tree* nctemp3023= p;
struct nctempchar1 *nctemp3027;
static struct nctempchar1 nctemp3028 = {{ 7}, (char*)"nctemp\0"};
nctemp3027=&nctemp3028;
nctempchar1* nctemp3025= nctemp3027;
int nctemp3029=CodeEs(nctemp3023,nctemp3025);
struct tree* nctemp3031= p;
struct symbol* nctemp3035= tp;
nctempchar1* nctemp3037=SymGetype(nctemp3035);
nctempchar1* nctemp3033= nctemp3037;
int nctemp3038=CodeEs(nctemp3031,nctemp3033);
struct tree* nctemp3040= p;
struct nctempchar1 *nctemp3044;
static struct nctempchar1 nctemp3045 = {{ 2}, (char*)"1\0"};
nctemp3044=&nctemp3045;
nctempchar1* nctemp3042= nctemp3044;
int nctemp3046=CodeEs(nctemp3040,nctemp3042);
struct tree* nctemp3048= p;
struct nctempchar1 *nctemp3052;
static struct nctempchar1 nctemp3053 = {{ 20}, (char*)" {int d[1]; struct \0"};
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
static struct nctempchar1 nctemp3070 = {{ 6}, (char*)" *a; \0"};
nctemp3069=&nctemp3070;
nctempchar1* nctemp3067= nctemp3069;
int nctemp3071=CodeEs(nctemp3065,nctemp3067);
struct tree* nctemp3073= p;
struct nctempchar1 *nctemp3077;
static struct nctempchar1 nctemp3078 = {{ 3}, (char*)"} \0"};
nctemp3077=&nctemp3078;
nctempchar1* nctemp3075= nctemp3077;
int nctemp3079=CodeEs(nctemp3073,nctemp3075);
struct tree* nctemp3081= p;
struct nctempchar1 *nctemp3085;
static struct nctempchar1 nctemp3086 = {{ 7}, (char*)"nctemp\0"};
nctemp3085=&nctemp3086;
nctempchar1* nctemp3083= nctemp3085;
int nctemp3087=CodeEs(nctemp3081,nctemp3083);
struct tree* nctemp3089= p;
struct symbol* nctemp3093= tp;
nctempchar1* nctemp3095=SymGetype(nctemp3093);
nctempchar1* nctemp3091= nctemp3095;
int nctemp3096=CodeEs(nctemp3089,nctemp3091);
struct tree* nctemp3098= p;
struct nctempchar1 *nctemp3102;
static struct nctempchar1 nctemp3103 = {{ 2}, (char*)"1\0"};
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
static struct nctempchar1 nctemp3144 = {{ 2}, (char*)"2\0"};
nctemp3143=&nctemp3144;
nctempchar1* nctemp3141= nctemp3143;
int nctemp3145=CodeEs(nctemp3139,nctemp3141);
struct tree* nctemp3147= p;
struct nctempchar1 *nctemp3151;
static struct nctempchar1 nctemp3152 = {{ 20}, (char*)" {int d[2]; struct \0"};
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
static struct nctempchar1 nctemp3218 = {{ 2}, (char*)"3\0"};
nctemp3217=&nctemp3218;
nctempchar1* nctemp3215= nctemp3217;
int nctemp3219=CodeEs(nctemp3213,nctemp3215);
struct tree* nctemp3221= p;
struct nctempchar1 *nctemp3225;
static struct nctempchar1 nctemp3226 = {{ 20}, (char*)" {int d[3]; struct \0"};
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
struct tree* nctemp3262= p;
struct nctempchar1 *nctemp3266;
static struct nctempchar1 nctemp3267 = {{ 8}, (char*)"struct \0"};
nctemp3266=&nctemp3267;
nctempchar1* nctemp3264= nctemp3266;
int nctemp3268=CodeEs(nctemp3262,nctemp3264);
struct tree* nctemp3270= p;
struct nctempchar1 *nctemp3274;
static struct nctempchar1 nctemp3275 = {{ 7}, (char*)"nctemp\0"};
nctemp3274=&nctemp3275;
nctempchar1* nctemp3272= nctemp3274;
int nctemp3276=CodeEs(nctemp3270,nctemp3272);
struct tree* nctemp3278= p;
struct symbol* nctemp3282= tp;
nctempchar1* nctemp3284=SymGetype(nctemp3282);
nctempchar1* nctemp3280= nctemp3284;
int nctemp3285=CodeEs(nctemp3278,nctemp3280);
struct tree* nctemp3287= p;
struct nctempchar1 *nctemp3291;
static struct nctempchar1 nctemp3292 = {{ 2}, (char*)"4\0"};
nctemp3291=&nctemp3292;
nctempchar1* nctemp3289= nctemp3291;
int nctemp3293=CodeEs(nctemp3287,nctemp3289);
struct tree* nctemp3295= p;
struct nctempchar1 *nctemp3299;
static struct nctempchar1 nctemp3300 = {{ 20}, (char*)" {int d[4]; struct \0"};
nctemp3299=&nctemp3300;
nctempchar1* nctemp3297= nctemp3299;
int nctemp3301=CodeEs(nctemp3295,nctemp3297);
struct tree* nctemp3303= p;
struct symbol* nctemp3307= tp;
nctempchar1* nctemp3309=SymGetype(nctemp3307);
nctempchar1* nctemp3305= nctemp3309;
int nctemp3310=CodeEs(nctemp3303,nctemp3305);
struct tree* nctemp3312= p;
struct nctempchar1 *nctemp3316;
static struct nctempchar1 nctemp3317 = {{ 6}, (char*)" *a; \0"};
nctemp3316=&nctemp3317;
nctempchar1* nctemp3314= nctemp3316;
int nctemp3318=CodeEs(nctemp3312,nctemp3314);
struct tree* nctemp3320= p;
struct nctempchar1 *nctemp3324;
static struct nctempchar1 nctemp3325 = {{ 3}, (char*)"} \0"};
nctemp3324=&nctemp3325;
nctempchar1* nctemp3322= nctemp3324;
int nctemp3326=CodeEs(nctemp3320,nctemp3322);
struct tree* nctemp3328= p;
struct nctempchar1 *nctemp3332;
static struct nctempchar1 nctemp3333 = {{ 4}, (char*)";\n\0"};
nctemp3332=&nctemp3333;
nctempchar1* nctemp3330= nctemp3332;
int nctemp3334=CodeEs(nctemp3328,nctemp3330);
return 1;
}
int CodeFdeclaration (struct tree* p,struct symbol* tp)
{
int noargs;
struct symbol* nctemp3341= tp;
nctempchar1* nctemp3343=SymGetstruct(nctemp3341);
nctempchar1* nctemp3339= nctemp3343;
struct nctempchar1 *nctemp3346;
static struct nctempchar1 nctemp3347 = {{ 7}, (char*)"struct\0"};
nctemp3346=&nctemp3347;
nctempchar1* nctemp3344= nctemp3346;
int nctemp3348=LibeStrcmp(nctemp3339,nctemp3344);
int nctemp3336 = (nctemp3348 ==1);
if(nctemp3336)
{
struct tree* nctemp3351= p;
struct nctempchar1 *nctemp3355;
static struct nctempchar1 nctemp3356 = {{ 8}, (char*)"struct \0"};
nctemp3355=&nctemp3356;
nctempchar1* nctemp3353= nctemp3355;
int nctemp3357=CodeEs(nctemp3351,nctemp3353);
}
struct symbol* nctemp3363= tp;
nctempchar1* nctemp3365=SymGetarray(nctemp3363);
nctempchar1* nctemp3361= nctemp3365;
struct nctempchar1 *nctemp3368;
static struct nctempchar1 nctemp3369 = {{ 6}, (char*)"array\0"};
nctemp3368=&nctemp3369;
nctempchar1* nctemp3366= nctemp3368;
int nctemp3370=LibeStrcmp(nctemp3361,nctemp3366);
int nctemp3358 = (nctemp3370 ==1);
if(nctemp3358)
{
struct tree* nctemp3373= p;
struct nctempchar1 *nctemp3377;
static struct nctempchar1 nctemp3378 = {{ 7}, (char*)"nctemp\0"};
nctemp3377=&nctemp3378;
nctempchar1* nctemp3375= nctemp3377;
int nctemp3379=CodeEs(nctemp3373,nctemp3375);
}
struct tree* nctemp3381= p;
struct symbol* nctemp3385= tp;
nctempchar1* nctemp3387=SymGetype(nctemp3385);
nctempchar1* nctemp3383= nctemp3387;
int nctemp3388=CodeEs(nctemp3381,nctemp3383);
struct symbol* nctemp3394= tp;
nctempchar1* nctemp3396=SymGetarray(nctemp3394);
nctempchar1* nctemp3392= nctemp3396;
struct nctempchar1 *nctemp3399;
static struct nctempchar1 nctemp3400 = {{ 6}, (char*)"array\0"};
nctemp3399=&nctemp3400;
nctempchar1* nctemp3397= nctemp3399;
int nctemp3401=LibeStrcmp(nctemp3392,nctemp3397);
int nctemp3389 = (nctemp3401 ==1);
if(nctemp3389)
{
struct symbol* nctemp3406= tp;
int nctemp3408=SymGetrank(nctemp3406);
int nctemp3404= nctemp3408;
int nctemp3409=CodeEd(nctemp3404);
struct tree* nctemp3411= p;
struct nctempchar1 *nctemp3415;
static struct nctempchar1 nctemp3416 = {{ 2}, (char*)"*\0"};
nctemp3415=&nctemp3416;
nctempchar1* nctemp3413= nctemp3415;
int nctemp3417=CodeEs(nctemp3411,nctemp3413);
}
struct symbol* nctemp3423= tp;
nctempchar1* nctemp3425=SymGetstruct(nctemp3423);
nctempchar1* nctemp3421= nctemp3425;
struct nctempchar1 *nctemp3428;
static struct nctempchar1 nctemp3429 = {{ 7}, (char*)"struct\0"};
nctemp3428=&nctemp3429;
nctempchar1* nctemp3426= nctemp3428;
int nctemp3430=LibeStrcmp(nctemp3421,nctemp3426);
int nctemp3418 = (nctemp3430 ==1);
if(nctemp3418)
{
struct tree* nctemp3433= p;
struct nctempchar1 *nctemp3437;
static struct nctempchar1 nctemp3438 = {{ 2}, (char*)"*\0"};
nctemp3437=&nctemp3438;
nctempchar1* nctemp3435= nctemp3437;
int nctemp3439=CodeEs(nctemp3433,nctemp3435);
}
struct tree* nctemp3441= p;
struct nctempchar1 *nctemp3445;
static struct nctempchar1 nctemp3446 = {{ 2}, (char*)" \0"};
nctemp3445=&nctemp3446;
nctempchar1* nctemp3443= nctemp3445;
int nctemp3447=CodeEs(nctemp3441,nctemp3443);
struct tree* nctemp3449= p;
struct symbol* nctemp3453= tp;
nctempchar1* nctemp3455=SymGetname(nctemp3453);
nctempchar1* nctemp3451= nctemp3455;
int nctemp3456=CodeEs(nctemp3449,nctemp3451);
struct tree* nctemp3458= p;
struct nctempchar1 *nctemp3462;
static struct nctempchar1 nctemp3463 = {{ 3}, (char*)" (\0"};
nctemp3462=&nctemp3463;
nctempchar1* nctemp3460= nctemp3462;
int nctemp3464=CodeEs(nctemp3458,nctemp3460);
struct symbol* nctemp3469= tp;
struct symbol* nctemp3471=SymGetable(nctemp3469);
tp =nctemp3471;
struct nctempchar1 *nctemp3478;
static struct nctempchar1 nctemp3479 = {{ 9}, (char*)"#arglist\0"};
nctemp3478=&nctemp3479;
nctempchar1* nctemp3476= nctemp3478;
struct symbol* nctemp3480= tp;
struct symbol* nctemp3482=SymLookup(nctemp3476,nctemp3480);
tp =nctemp3482;
struct symbol* nctemp3487= tp;
struct symbol* nctemp3489=SymGetable(nctemp3487);
tp =nctemp3489;
noargs = 0;
struct symbol* nctemp3497= tp;
struct symbol* nctemp3499=SymMvnext(nctemp3497);
tp =nctemp3499;
int nctemp3490 = (tp !=0);
int nctemp3501=nctemp3490;
while(nctemp3501)
{{
struct tree* nctemp3503= p;
struct symbol* nctemp3505= tp;
int nctemp3507=CodeIdeclaration(nctemp3503,nctemp3505);
struct symbol* nctemp3511= tp;
struct symbol* nctemp3513=SymMvnext(nctemp3511);
int nctemp3508 = (nctemp3513 !=0);
if(nctemp3508)
{
struct tree* nctemp3516= p;
struct nctempchar1 *nctemp3520;
static struct nctempchar1 nctemp3521 = {{ 2}, (char*)",\0"};
nctemp3520=&nctemp3521;
nctempchar1* nctemp3518= nctemp3520;
int nctemp3522=CodeEs(nctemp3516,nctemp3518);
}
noargs = (noargs + 1);
}
struct symbol* nctemp3530= tp;
struct symbol* nctemp3532=SymMvnext(nctemp3530);
tp =nctemp3532;
int nctemp3523 = (tp !=0);
nctemp3501=nctemp3523;}struct tree* nctemp3535= p;
struct nctempchar1 *nctemp3539;
static struct nctempchar1 nctemp3540 = {{ 5}, (char*)");\n\0"};
nctemp3539=&nctemp3540;
nctempchar1* nctemp3537= nctemp3539;
int nctemp3541=CodeEs(nctemp3535,nctemp3537);
return 1;
}
int CodeWdeclaration (struct tree* p)
{
struct tree* np;
struct tree* nctemp3547= p;
struct tree* nctemp3549=PtreeMvchild(nctemp3547);
np =nctemp3549;
int nctemp3550 = (np !=0);
int nctemp3554=nctemp3550;
while(nctemp3554)
{{
struct tree* nctemp3560= np;
nctempchar1* nctemp3562=PtreeGetname(nctemp3560);
nctempchar1* nctemp3558= nctemp3562;
struct nctempchar1 *nctemp3565;
static struct nctempchar1 nctemp3566 = {{ 5}, (char*)"fdef\0"};
nctemp3565=&nctemp3566;
nctempchar1* nctemp3563= nctemp3565;
int nctemp3567=LibeStrcmp(nctemp3558,nctemp3563);
int nctemp3555 = (nctemp3567 ==1);
if(nctemp3555)
{
struct tree* nctemp3570= np;
int nctemp3572=CodeFdef(nctemp3570);
}
struct tree* nctemp3577= np;
struct tree* nctemp3579=PtreeMvsister(nctemp3577);
np =nctemp3579;
}
int nctemp3580 = (np !=0);
nctemp3554=nctemp3580;}return 1;
}
int CodeWdeclarations (struct tree* p)
{
int nctemp3585 = (p !=0);
int nctemp3589=nctemp3585;
while(nctemp3589)
{{
struct tree* nctemp3598= p;
nctempchar1* nctemp3600=PtreeGetname(nctemp3598);
nctempchar1* nctemp3596= nctemp3600;
struct nctempchar1 *nctemp3603;
static struct nctempchar1 nctemp3604 = {{ 5}, (char*)"type\0"};
nctemp3603=&nctemp3604;
nctempchar1* nctemp3601= nctemp3603;
int nctemp3605=LibeStrcmp(nctemp3596,nctemp3601);
int nctemp3593 = (nctemp3605 ==1);
struct tree* nctemp3613= p;
nctempchar1* nctemp3615=PtreeGetname(nctemp3613);
nctempchar1* nctemp3611= nctemp3615;
struct nctempchar1 *nctemp3618;
static struct nctempchar1 nctemp3619 = {{ 7}, (char*)"struct\0"};
nctemp3618=&nctemp3619;
nctempchar1* nctemp3616= nctemp3618;
int nctemp3620=LibeStrcmp(nctemp3611,nctemp3616);
int nctemp3608 = (nctemp3620 ==1);
int nctemp3590 = (nctemp3593 || nctemp3608);
if(nctemp3590)
{
struct tree* nctemp3623= p;
int nctemp3625=CodeWdeclaration(nctemp3623);
}
struct tree* nctemp3630= p;
struct tree* nctemp3632=PtreeMvsister(nctemp3630);
p =nctemp3632;
}
int nctemp3633 = (p !=0);
nctemp3589=nctemp3633;}return 1;
}
int CodeArrayex (int line,nctempchar1 *qual,nctempchar1 *sel,nctempchar1 *name,nctempchar1 *ival,int index)
{
struct tree* p;
nctempchar1 *tmp;
nctempchar1 *qname;
struct nctempchar1 *nctemp3644;
static struct nctempchar1 nctemp3645 = {{ 6}, (char*)"dummy\0"};
nctemp3644=&nctemp3645;
nctempchar1* nctemp3642= nctemp3644;
struct nctempchar1 *nctemp3648;
static struct nctempchar1 nctemp3649 = {{ 6}, (char*)"dummy\0"};
nctemp3648=&nctemp3649;
nctempchar1* nctemp3646= nctemp3648;
struct tree* nctemp3650=PtreeMknode(nctemp3642,nctemp3646);
p =nctemp3650;
struct tree* nctemp3652= p;
int nctemp3654= line;
int nctemp3656=PtreeSetline(nctemp3652,nctemp3654);
qname = name;
nctempchar1 *nctemp3658 =qual;
int nctemp3657 =(nctemp3658!=0);
if(nctemp3657)
{
nctempchar1* nctemp3667= qual;
struct nctempchar1 *nctemp3672;
static struct nctempchar1 nctemp3673 = {{ 3}, (char*)"->\0"};
nctemp3672=&nctemp3673;
nctempchar1* nctemp3670= nctemp3672;
nctempchar1* nctemp3674=LibeStradd(nctemp3667,nctemp3670);
tmp=nctemp3674;
nctempchar1* nctemp3680= tmp;
nctempchar1* nctemp3683= name;
nctempchar1* nctemp3686=LibeStradd(nctemp3680,nctemp3683);
qname=nctemp3686;
RunFree(tmp->a);
RunFree(tmp);
}
struct tree* nctemp3691= p;
struct nctempchar1 *nctemp3695;
static struct nctempchar1 nctemp3696 = {{ 7}, (char*)"if((0>\0"};
nctemp3695=&nctemp3696;
nctempchar1* nctemp3693= nctemp3695;
int nctemp3697=CodeEs(nctemp3691,nctemp3693);
struct tree* nctemp3699= p;
nctempchar1* nctemp3701= ival;
int nctemp3704=CodeEs(nctemp3699,nctemp3701);
struct tree* nctemp3706= p;
struct nctempchar1 *nctemp3710;
static struct nctempchar1 nctemp3711 = {{ 5}, (char*)")||(\0"};
nctemp3710=&nctemp3711;
nctempchar1* nctemp3708= nctemp3710;
int nctemp3712=CodeEs(nctemp3706,nctemp3708);
struct tree* nctemp3714= p;
nctempchar1* nctemp3716= ival;
int nctemp3719=CodeEs(nctemp3714,nctemp3716);
struct tree* nctemp3721= p;
struct nctempchar1 *nctemp3725;
static struct nctempchar1 nctemp3726 = {{ 3}, (char*)">=\0"};
nctemp3725=&nctemp3726;
nctempchar1* nctemp3723= nctemp3725;
int nctemp3727=CodeEs(nctemp3721,nctemp3723);
nctempchar1 *nctemp3729 =qual;
int nctemp3728 =(nctemp3729!=0);
if(nctemp3728)
{
struct tree* nctemp3734= p;
nctempchar1* nctemp3736= qual;
int nctemp3739=CodeEs(nctemp3734,nctemp3736);
struct tree* nctemp3741= p;
nctempchar1* nctemp3743= sel;
int nctemp3746=CodeEs(nctemp3741,nctemp3743);
}
struct tree* nctemp3748= p;
nctempchar1* nctemp3750= name;
int nctemp3753=CodeEs(nctemp3748,nctemp3750);
struct tree* nctemp3755= p;
struct nctempchar1 *nctemp3759;
static struct nctempchar1 nctemp3760 = {{ 5}, (char*)"->d[\0"};
nctemp3759=&nctemp3760;
nctempchar1* nctemp3757= nctemp3759;
int nctemp3761=CodeEs(nctemp3755,nctemp3757);
int nctemp3763= index;
int nctemp3765=CodeEd(nctemp3763);
struct tree* nctemp3767= p;
struct nctempchar1 *nctemp3771;
static struct nctempchar1 nctemp3772 = {{ 7}, (char*)"])){\n\0"};
nctemp3771=&nctemp3772;
nctempchar1* nctemp3769= nctemp3771;
int nctemp3773=CodeEs(nctemp3767,nctemp3769);
struct tree* nctemp3775= p;
struct nctempchar1 *nctemp3779;
static struct nctempchar1 nctemp3780 = {{ 67}, (char*)"printf(\"***Out of bounds error (file,array,line,index,rank,bound:\0"};
nctemp3779=&nctemp3780;
nctempchar1* nctemp3777= nctemp3779;
int nctemp3781=CodeEs(nctemp3775,nctemp3777);
struct tree* nctemp3783= p;
nctempchar1* nctemp3787=ScanGetfile();
nctempchar1* nctemp3785= nctemp3787;
int nctemp3788=CodeEs(nctemp3783,nctemp3785);
struct tree* nctemp3790= p;
struct nctempchar1 *nctemp3794;
static struct nctempchar1 nctemp3795 = {{ 2}, (char*)" \0"};
nctemp3794=&nctemp3795;
nctempchar1* nctemp3792= nctemp3794;
int nctemp3796=CodeEs(nctemp3790,nctemp3792);
struct tree* nctemp3798= p;
nctempchar1* nctemp3800= qname;
int nctemp3803=CodeEs(nctemp3798,nctemp3800);
struct tree* nctemp3805= p;
struct nctempchar1 *nctemp3809;
static struct nctempchar1 nctemp3810 = {{ 17}, (char*)" %d %d %d %d \\n\0"};
nctemp3809=&nctemp3810;
nctempchar1* nctemp3807= nctemp3809;
int nctemp3811=CodeEs(nctemp3805,nctemp3807);
struct tree* nctemp3813= p;
struct nctempchar1 *nctemp3817;
static struct nctempchar1 nctemp3818 = {{ 6}, (char*)" \" ,\0"};
nctemp3817=&nctemp3818;
nctempchar1* nctemp3815= nctemp3817;
int nctemp3819=CodeEs(nctemp3813,nctemp3815);
int nctemp3821= line;
int nctemp3823=CodeEd(nctemp3821);
struct tree* nctemp3825= p;
struct nctempchar1 *nctemp3829;
static struct nctempchar1 nctemp3830 = {{ 2}, (char*)",\0"};
nctemp3829=&nctemp3830;
nctempchar1* nctemp3827= nctemp3829;
int nctemp3831=CodeEs(nctemp3825,nctemp3827);
struct tree* nctemp3833= p;
nctempchar1* nctemp3835= ival;
int nctemp3838=CodeEs(nctemp3833,nctemp3835);
struct tree* nctemp3840= p;
struct nctempchar1 *nctemp3844;
static struct nctempchar1 nctemp3845 = {{ 2}, (char*)",\0"};
nctemp3844=&nctemp3845;
nctempchar1* nctemp3842= nctemp3844;
int nctemp3846=CodeEs(nctemp3840,nctemp3842);
int nctemp3848= index;
int nctemp3850=CodeEd(nctemp3848);
struct tree* nctemp3852= p;
struct nctempchar1 *nctemp3856;
static struct nctempchar1 nctemp3857 = {{ 2}, (char*)",\0"};
nctemp3856=&nctemp3857;
nctempchar1* nctemp3854= nctemp3856;
int nctemp3858=CodeEs(nctemp3852,nctemp3854);
struct tree* nctemp3860= p;
nctempchar1* nctemp3862= qname;
int nctemp3865=CodeEs(nctemp3860,nctemp3862);
struct tree* nctemp3867= p;
struct nctempchar1 *nctemp3871;
static struct nctempchar1 nctemp3872 = {{ 5}, (char*)"->d[\0"};
nctemp3871=&nctemp3872;
nctempchar1* nctemp3869= nctemp3871;
int nctemp3873=CodeEs(nctemp3867,nctemp3869);
int nctemp3875= index;
int nctemp3877=CodeEd(nctemp3875);
struct tree* nctemp3879= p;
struct nctempchar1 *nctemp3883;
static struct nctempchar1 nctemp3884 = {{ 4}, (char*)"]-1\0"};
nctemp3883=&nctemp3884;
nctempchar1* nctemp3881= nctemp3883;
int nctemp3885=CodeEs(nctemp3879,nctemp3881);
struct tree* nctemp3887= p;
struct nctempchar1 *nctemp3891;
static struct nctempchar1 nctemp3892 = {{ 3}, (char*)");\0"};
nctemp3891=&nctemp3892;
nctempchar1* nctemp3889= nctemp3891;
int nctemp3893=CodeEs(nctemp3887,nctemp3889);
struct tree* nctemp3895= p;
struct nctempchar1 *nctemp3899;
static struct nctempchar1 nctemp3900 = {{ 6}, (char*)"\n}\n\0"};
nctemp3899=&nctemp3900;
nctempchar1* nctemp3897= nctemp3899;
int nctemp3901=CodeEs(nctemp3895,nctemp3897);
nctempchar1 *nctemp3903 =qual;
int nctemp3902 =(nctemp3903!=0);
if(nctemp3902)
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
struct tree* nctemp3916= p;
nctempchar1* nctemp3918=PtreeGetdef(nctemp3916);
name=nctemp3918;
nctempchar1* nctemp3924=CodeMktemp();
temp=nctemp3924;
nctempchar1* nctemp3929= name;
struct symbol* nctemp3932=SymLook(nctemp3929);
tp =nctemp3932;
int nctemp3933 = (tp ==0);
if(nctemp3933)
{
int nctemp3938= 4;
struct nctempchar1 *nctemp3942;
static struct nctempchar1 nctemp3943 = {{ 13}, (char*)"At CodeArray\0"};
nctemp3942=&nctemp3943;
nctempchar1* nctemp3940= nctemp3942;
int nctemp3944=LibePuts(nctemp3938,nctemp3940);
nctempchar1* nctemp3946= name;
int nctemp3949=CodeError(nctemp3946);
}
struct tree* nctemp3954= p;
struct tree* nctemp3956=PtreeMvchild(nctemp3954);
sp =nctemp3956;
int nctemp3957 = (sp ==0);
if(nctemp3957)
{
struct tree* nctemp3962= p;
nctempchar1* nctemp3964=PtreeGetdef(nctemp3962);
return nctemp3964;
}
else{
struct tree* nctemp3970= sp;
nctempchar1* nctemp3972=PtreeGetname(nctemp3970);
nctempchar1* nctemp3968= nctemp3972;
struct nctempchar1 *nctemp3975;
static struct nctempchar1 nctemp3976 = {{ 9}, (char*)"exprlist\0"};
nctemp3975=&nctemp3976;
nctempchar1* nctemp3973= nctemp3975;
int nctemp3977=LibeStrcmp(nctemp3968,nctemp3973);
int nctemp3965 = (nctemp3977 ==0);
if(nctemp3965)
{
struct tree* nctemp3980= p;
nctempchar1* nctemp3982=PtreeGetdef(nctemp3980);
return nctemp3982;
}
}
struct symbol* nctemp3987= tp;
int nctemp3989=SymGetrank(nctemp3987);
rank =nctemp3989;
struct tree* nctemp3994= p;
struct tree* nctemp3996=PtreeMvchild(nctemp3994);
p =nctemp3996;
struct tree* nctemp4001= p;
struct tree* nctemp4003=PtreeMvchild(nctemp4001);
p =nctemp4003;
sp = p;
for(i = 0;i < rank;i = (i + 1)){
int nctemp4004 = (i ==0);
if(nctemp4004)
{
struct tree* nctemp4013= p;
nctempchar1* nctemp4015=CodeExpr(nctemp4013);
temp2=nctemp4015;
struct tree* nctemp4017= p;
struct tree* nctemp4021= p;
nctempchar1* nctemp4023=PtreeGetype(nctemp4021);
nctempchar1* nctemp4019= nctemp4023;
int nctemp4024=CodeEs(nctemp4017,nctemp4019);
struct tree* nctemp4026= p;
struct nctempchar1 *nctemp4030;
static struct nctempchar1 nctemp4031 = {{ 2}, (char*)" \0"};
nctemp4030=&nctemp4031;
nctempchar1* nctemp4028= nctemp4030;
int nctemp4032=CodeEs(nctemp4026,nctemp4028);
struct tree* nctemp4034= p;
nctempchar1* nctemp4036= temp;
int nctemp4039=CodeEs(nctemp4034,nctemp4036);
struct tree* nctemp4041= p;
struct nctempchar1 *nctemp4045;
static struct nctempchar1 nctemp4046 = {{ 2}, (char*)"=\0"};
nctemp4045=&nctemp4046;
nctempchar1* nctemp4043= nctemp4045;
int nctemp4047=CodeEs(nctemp4041,nctemp4043);
struct tree* nctemp4049= p;
nctempchar1* nctemp4051= temp2;
int nctemp4054=CodeEs(nctemp4049,nctemp4051);
struct tree* nctemp4056= p;
struct nctempchar1 *nctemp4060;
static struct nctempchar1 nctemp4061 = {{ 4}, (char*)";\n\0"};
nctemp4060=&nctemp4061;
nctempchar1* nctemp4058= nctemp4060;
int nctemp4062=CodeEs(nctemp4056,nctemp4058);
int nctemp4064=CodeArraycheck();
if(nctemp4064)
{
struct tree* nctemp4068= p;
int nctemp4070=PtreeGetline(nctemp4068);
int nctemp4066= nctemp4070;
nctempchar1* nctemp4071= qual;
nctempchar1* nctemp4074= sel;
nctempchar1* nctemp4077= name;
nctempchar1* nctemp4080= temp2;
int nctemp4083= i;
int nctemp4085=CodeArrayex(nctemp4066,nctemp4071,nctemp4074,nctemp4077,nctemp4080,nctemp4083);
}
}
else{
struct tree* nctemp4091= sp;
nctempchar1* nctemp4093=CodeExpr(nctemp4091);
temp2=nctemp4093;
struct tree* nctemp4095= p;
nctempchar1* nctemp4097= temp;
int nctemp4100=CodeEs(nctemp4095,nctemp4097);
struct tree* nctemp4102= p;
struct nctempchar1 *nctemp4106;
static struct nctempchar1 nctemp4107 = {{ 2}, (char*)"=\0"};
nctemp4106=&nctemp4107;
nctempchar1* nctemp4104= nctemp4106;
int nctemp4108=CodeEs(nctemp4102,nctemp4104);
struct tree* nctemp4110= p;
nctempchar1* nctemp4112= temp2;
int nctemp4115=CodeEs(nctemp4110,nctemp4112);
struct tree* nctemp4117= p;
struct nctempchar1 *nctemp4121;
static struct nctempchar1 nctemp4122 = {{ 2}, (char*)"*\0"};
nctemp4121=&nctemp4122;
nctempchar1* nctemp4119= nctemp4121;
int nctemp4123=CodeEs(nctemp4117,nctemp4119);
nctempchar1 *nctemp4125 =qual;
int nctemp4124 =(nctemp4125!=0);
if(nctemp4124)
{
struct tree* nctemp4130= p;
nctempchar1* nctemp4132= qual;
int nctemp4135=CodeEs(nctemp4130,nctemp4132);
}
nctempchar1 *nctemp4137 =sel;
int nctemp4136 =(nctemp4137!=0);
if(nctemp4136)
{
struct tree* nctemp4142= p;
nctempchar1* nctemp4144= sel;
int nctemp4147=CodeEs(nctemp4142,nctemp4144);
}
struct tree* nctemp4149= p;
nctempchar1* nctemp4151= name;
int nctemp4154=CodeEs(nctemp4149,nctemp4151);
struct tree* nctemp4156= p;
struct nctempchar1 *nctemp4160;
static struct nctempchar1 nctemp4161 = {{ 4}, (char*)"->d\0"};
nctemp4160=&nctemp4161;
nctempchar1* nctemp4158= nctemp4160;
int nctemp4162=CodeEs(nctemp4156,nctemp4158);
struct tree* nctemp4164= p;
struct nctempchar1 *nctemp4168;
static struct nctempchar1 nctemp4169 = {{ 2}, (char*)"[\0"};
nctemp4168=&nctemp4169;
nctempchar1* nctemp4166= nctemp4168;
int nctemp4170=CodeEs(nctemp4164,nctemp4166);
int nctemp4177 = i - 1;
int nctemp4172= nctemp4177;
int nctemp4178=CodeEd(nctemp4172);
struct tree* nctemp4180= p;
struct nctempchar1 *nctemp4184;
static struct nctempchar1 nctemp4185 = {{ 2}, (char*)"]\0"};
nctemp4184=&nctemp4185;
nctempchar1* nctemp4182= nctemp4184;
int nctemp4186=CodeEs(nctemp4180,nctemp4182);
struct tree* nctemp4188= p;
struct nctempchar1 *nctemp4192;
static struct nctempchar1 nctemp4193 = {{ 2}, (char*)"+\0"};
nctemp4192=&nctemp4193;
nctempchar1* nctemp4190= nctemp4192;
int nctemp4194=CodeEs(nctemp4188,nctemp4190);
struct tree* nctemp4196= p;
nctempchar1* nctemp4198= temp;
int nctemp4201=CodeEs(nctemp4196,nctemp4198);
struct tree* nctemp4203= p;
struct nctempchar1 *nctemp4207;
static struct nctempchar1 nctemp4208 = {{ 4}, (char*)";\n\0"};
nctemp4207=&nctemp4208;
nctempchar1* nctemp4205= nctemp4207;
int nctemp4209=CodeEs(nctemp4203,nctemp4205);
int nctemp4211=CodeArraycheck();
if(nctemp4211)
{
struct tree* nctemp4215= p;
int nctemp4217=PtreeGetline(nctemp4215);
int nctemp4213= nctemp4217;
nctempchar1* nctemp4218= qual;
nctempchar1* nctemp4221= sel;
nctempchar1* nctemp4224= name;
nctempchar1* nctemp4227= temp2;
int nctemp4230= i;
int nctemp4232=CodeArrayex(nctemp4213,nctemp4218,nctemp4221,nctemp4224,nctemp4227,nctemp4230);
}
}
int nctemp4233 = (sp !=0);
if(nctemp4233)
{
struct tree* nctemp4241= sp;
struct tree* nctemp4243=PtreeMvsister(nctemp4241);
sp =nctemp4243;
}
}
nctempchar1* nctemp4254= name;
int nctemp4257=LibeStrlen(nctemp4254);
nctempchar1* nctemp4259= temp;
int nctemp4262=LibeStrlen(nctemp4259);
int nctemp4263 = nctemp4257 + nctemp4262;
int nctemp4265 = nctemp4263 + 6;
size =nctemp4265;
int nctemp4272=size;
nctempchar1 *nctemp4271;
nctemp4271=(nctempchar1*)RunMalloc(sizeof(nctempchar1));
nctemp4271->d[0]=size;
nctemp4271->a=(char *)RunMalloc(sizeof(char)*nctemp4272);
rval=nctemp4271;
nctempchar1* nctemp4276= name;
nctempchar1* nctemp4279= rval;
int nctemp4282=LibeStrcpy(nctemp4276,nctemp4279);
struct nctempchar1 *nctemp4286;
static struct nctempchar1 nctemp4287 = {{ 4}, (char*)"->a\0"};
nctemp4286=&nctemp4287;
nctempchar1* nctemp4284= nctemp4286;
nctempchar1* nctemp4288= rval;
int nctemp4291=LibeStrcat(nctemp4284,nctemp4288);
struct nctempchar1 *nctemp4295;
static struct nctempchar1 nctemp4296 = {{ 2}, (char*)"[\0"};
nctemp4295=&nctemp4296;
nctempchar1* nctemp4293= nctemp4295;
nctempchar1* nctemp4297= rval;
int nctemp4300=LibeStrcat(nctemp4293,nctemp4297);
nctempchar1* nctemp4302= temp;
nctempchar1* nctemp4305= rval;
int nctemp4308=LibeStrcat(nctemp4302,nctemp4305);
struct nctempchar1 *nctemp4312;
static struct nctempchar1 nctemp4313 = {{ 2}, (char*)"]\0"};
nctemp4312=&nctemp4313;
nctempchar1* nctemp4310= nctemp4312;
nctempchar1* nctemp4314= rval;
int nctemp4317=LibeStrcat(nctemp4310,nctemp4314);
return rval;
}
nctempchar1 * CodeQident (nctempchar1 *qual,nctempchar1 *ident)
{
int lq;
int li;
nctempchar1 *name;
nctempchar1* nctemp4324= qual;
int nctemp4327=LibeStrlen(nctemp4324);
lq =nctemp4327;
nctempchar1* nctemp4332= ident;
int nctemp4335=LibeStrlen(nctemp4332);
li =nctemp4335;
int nctemp4350 = lq + li;
int nctemp4352 = nctemp4350 + 2;
int nctemp4342=nctemp4352;
nctempchar1 *nctemp4341;
nctemp4341=(nctempchar1*)RunMalloc(sizeof(nctempchar1));
int nctemp4360 = lq + li;
int nctemp4362 = nctemp4360 + 2;
nctemp4341->d[0]=nctemp4362;
nctemp4341->a=(char *)RunMalloc(sizeof(char)*nctemp4342);
name=nctemp4341;
nctempchar1* nctemp4364= qual;
nctempchar1* nctemp4367= name;
int nctemp4370=LibeStrcpy(nctemp4364,nctemp4367);
struct nctempchar1 *nctemp4374;
static struct nctempchar1 nctemp4375 = {{ 2}, (char*)".\0"};
nctemp4374=&nctemp4375;
nctempchar1* nctemp4372= nctemp4374;
nctempchar1* nctemp4376= name;
int nctemp4379=LibeStrcat(nctemp4372,nctemp4376);
nctempchar1* nctemp4381= ident;
nctempchar1* nctemp4384= name;
int nctemp4387=LibeStrcat(nctemp4381,nctemp4384);
return name;
}
nctempchar1 * CodeQident2 (nctempchar1 *qual,nctempchar1 *ident)
{
int lq;
int li;
nctempchar1 *name;
nctempchar1* nctemp4394= qual;
int nctemp4397=LibeStrlen(nctemp4394);
lq =nctemp4397;
nctempchar1* nctemp4402= ident;
int nctemp4405=LibeStrlen(nctemp4402);
li =nctemp4405;
int nctemp4420 = lq + li;
int nctemp4422 = nctemp4420 + 3;
int nctemp4412=nctemp4422;
nctempchar1 *nctemp4411;
nctemp4411=(nctempchar1*)RunMalloc(sizeof(nctempchar1));
int nctemp4430 = lq + li;
int nctemp4432 = nctemp4430 + 3;
nctemp4411->d[0]=nctemp4432;
nctemp4411->a=(char *)RunMalloc(sizeof(char)*nctemp4412);
name=nctemp4411;
nctempchar1* nctemp4434= qual;
nctempchar1* nctemp4437= name;
int nctemp4440=LibeStrcpy(nctemp4434,nctemp4437);
struct nctempchar1 *nctemp4444;
static struct nctempchar1 nctemp4445 = {{ 3}, (char*)"->\0"};
nctemp4444=&nctemp4445;
nctempchar1* nctemp4442= nctemp4444;
nctempchar1* nctemp4446= name;
int nctemp4449=LibeStrcat(nctemp4442,nctemp4446);
nctempchar1* nctemp4451= ident;
nctempchar1* nctemp4454= name;
int nctemp4457=LibeStrcat(nctemp4451,nctemp4454);
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
struct tree* nctemp4465= p;
nctempchar1* nctemp4467=PtreeGetstruct(nctemp4465);
nctempchar1* nctemp4463= nctemp4467;
struct nctempchar1 *nctemp4470;
static struct nctempchar1 nctemp4471 = {{ 7}, (char*)"struct\0"};
nctemp4470=&nctemp4471;
nctempchar1* nctemp4468= nctemp4470;
int nctemp4472=LibeStrcmp(nctemp4463,nctemp4468);
int nctemp4460 = (nctemp4472 ==1);
if(nctemp4460)
{
struct tree* nctemp4479= p;
nctempchar1* nctemp4481=PtreeGetarray(nctemp4479);
nctempchar1* nctemp4477= nctemp4481;
struct nctempchar1 *nctemp4484;
static struct nctempchar1 nctemp4485 = {{ 6}, (char*)"array\0"};
nctemp4484=&nctemp4485;
nctempchar1* nctemp4482= nctemp4484;
int nctemp4486=LibeStrcmp(nctemp4477,nctemp4482);
int nctemp4474 = (nctemp4486 ==1);
if(nctemp4474)
{
struct tree* nctemp4493= p;
nctempchar1* nctemp4495= qual;
struct nctempchar1 *nctemp4500;
static struct nctempchar1 nctemp4501 = {{ 2}, (char*)".\0"};
nctemp4500=&nctemp4501;
nctempchar1* nctemp4498= nctemp4500;
nctempchar1* nctemp4502=CodeArray(nctemp4493,nctemp4495,nctemp4498);
qual=nctemp4502;
struct tree* nctemp4507= p;
struct tree* nctemp4509=PtreeMvchild(nctemp4507);
np =nctemp4509;
int nctemp4510 = (np ==0);
if(nctemp4510)
{
return qual;
}
struct tree* nctemp4520= np;
struct tree* nctemp4522=PtreeMvsister(nctemp4520);
np =nctemp4522;
int nctemp4523 = (np ==0);
if(nctemp4523)
{
return qual;
}
}
else{
struct tree* nctemp4534= p;
nctempchar1* nctemp4536=PtreeGetdef(nctemp4534);
qual=nctemp4536;
struct tree* nctemp4544= p;
struct tree* nctemp4546=PtreeMvchild(nctemp4544);
np =nctemp4546;
int nctemp4537 = (np ==0);
if(nctemp4537)
{
return qual;
}
}
struct tree* nctemp4555= np;
nctempchar1* nctemp4557=PtreeGetarray(nctemp4555);
nctempchar1* nctemp4553= nctemp4557;
struct nctempchar1 *nctemp4560;
static struct nctempchar1 nctemp4561 = {{ 6}, (char*)"array\0"};
nctemp4560=&nctemp4561;
nctempchar1* nctemp4558= nctemp4560;
int nctemp4562=LibeStrcmp(nctemp4553,nctemp4558);
int nctemp4550 = (nctemp4562 ==1);
if(nctemp4550)
{
struct symbol* nctemp4568=SymGetltp();
tp =nctemp4568;
struct symbol* nctemp4573=SymGetetp();
up =nctemp4573;
struct tree* nctemp4580= p;
nctempchar1* nctemp4582=PtreeGetdef(nctemp4580);
nctempchar1* nctemp4578= nctemp4582;
struct symbol* nctemp4583=SymLook(nctemp4578);
uup =nctemp4583;
struct symbol* nctemp4590= uup;
nctempchar1* nctemp4592=SymGetype(nctemp4590);
nctempchar1* nctemp4588= nctemp4592;
struct symbol* nctemp4593=SymLook(nctemp4588);
uup =nctemp4593;
struct symbol* nctemp4597= uup;
struct symbol* nctemp4599=SymGetable(nctemp4597);
struct symbol* nctemp4595= nctemp4599;
int nctemp4600=SymSetltp(nctemp4595);
struct tree* nctemp4606= p;
nctempchar1* nctemp4608=PtreeGetarray(nctemp4606);
nctempchar1* nctemp4604= nctemp4608;
struct nctempchar1 *nctemp4611;
static struct nctempchar1 nctemp4612 = {{ 6}, (char*)"array\0"};
nctemp4611=&nctemp4612;
nctempchar1* nctemp4609= nctemp4611;
int nctemp4613=LibeStrcmp(nctemp4604,nctemp4609);
int nctemp4601 = (nctemp4613 ==1);
if(nctemp4601)
{
struct tree* nctemp4620= np;
nctempchar1* nctemp4622= qual;
struct nctempchar1 *nctemp4627;
static struct nctempchar1 nctemp4628 = {{ 2}, (char*)".\0"};
nctemp4627=&nctemp4628;
nctempchar1* nctemp4625= nctemp4627;
nctempchar1* nctemp4629=CodeArray(nctemp4620,nctemp4622,nctemp4625);
name=nctemp4629;
}
else{
struct tree* nctemp4635= np;
nctempchar1* nctemp4637= qual;
struct nctempchar1 *nctemp4642;
static struct nctempchar1 nctemp4643 = {{ 3}, (char*)"->\0"};
nctemp4642=&nctemp4643;
nctempchar1* nctemp4640= nctemp4642;
nctempchar1* nctemp4644=CodeArray(nctemp4635,nctemp4637,nctemp4640);
name=nctemp4644;
}
struct symbol* nctemp4646= tp;
int nctemp4648=SymSetltp(nctemp4646);
struct symbol* nctemp4650= up;
int nctemp4652=SymSetetp(nctemp4650);
}
else{
struct tree* nctemp4658= np;
nctempchar1* nctemp4660=PtreeGetdef(nctemp4658);
name=nctemp4660;
}
struct tree* nctemp4666= p;
nctempchar1* nctemp4668=PtreeGetarray(nctemp4666);
nctempchar1* nctemp4664= nctemp4668;
struct nctempchar1 *nctemp4671;
static struct nctempchar1 nctemp4672 = {{ 6}, (char*)"array\0"};
nctemp4671=&nctemp4672;
nctempchar1* nctemp4669= nctemp4671;
int nctemp4673=LibeStrcmp(nctemp4664,nctemp4669);
int nctemp4661 = (nctemp4673 ==1);
if(nctemp4661)
{
nctempchar1* nctemp4676= qual;
nctempchar1* nctemp4679= name;
nctempchar1* nctemp4682=CodeQident(nctemp4676,nctemp4679);
return nctemp4682;
}
else{
nctempchar1* nctemp4684= qual;
nctempchar1* nctemp4687= name;
nctempchar1* nctemp4690=CodeQident2(nctemp4684,nctemp4687);
return nctemp4690;
}
}
else{
struct tree* nctemp4696= p;
nctempchar1* nctemp4698=PtreeGetarray(nctemp4696);
nctempchar1* nctemp4694= nctemp4698;
struct nctempchar1 *nctemp4701;
static struct nctempchar1 nctemp4702 = {{ 6}, (char*)"array\0"};
nctemp4701=&nctemp4702;
nctempchar1* nctemp4699= nctemp4701;
int nctemp4703=LibeStrcmp(nctemp4694,nctemp4699);
int nctemp4691 = (nctemp4703 ==1);
if(nctemp4691)
{
name  = 0;
qual  = 0;
struct tree* nctemp4710= p;
nctempchar1* nctemp4712= qual;
nctempchar1* nctemp4715= name;
nctempchar1* nctemp4718=CodeArray(nctemp4710,nctemp4712,nctemp4715);
qual=nctemp4718;
return qual;
}
else{
struct tree* nctemp4722= p;
nctempchar1* nctemp4724=PtreeGetdef(nctemp4722);
return nctemp4724;
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
nctempchar1* nctemp4730=CodeMktemp();
pointer=nctemp4730;
nctempchar1* nctemp4736=CodeMktemp();
totdim=nctemp4736;
struct tree* nctemp4741= p;
struct tree* nctemp4743=PtreeMvchild(nctemp4741);
p =nctemp4743;
struct tree* nctemp4749= p;
nctempchar1* nctemp4751=PtreeGetdef(nctemp4749);
type=nctemp4751;
struct tree* nctemp4757= p;
nctempchar1* nctemp4759=PtreeGetstruct(nctemp4757);
structflag=nctemp4759;
struct tree* nctemp4765= p;
nctempchar1* nctemp4767=PtreeGetarray(nctemp4765);
arrayflag=nctemp4767;
struct tree* nctemp4773= p;
nctempchar1* nctemp4775=PtreeGetarray(nctemp4773);
nctempchar1* nctemp4771= nctemp4775;
struct nctempchar1 *nctemp4778;
static struct nctempchar1 nctemp4779 = {{ 6}, (char*)"array\0"};
nctemp4778=&nctemp4779;
nctempchar1* nctemp4776= nctemp4778;
int nctemp4780=LibeStrcmp(nctemp4771,nctemp4776);
int nctemp4768 = (nctemp4780 ==1);
if(nctemp4768)
{
struct tree* nctemp4786= p;
struct tree* nctemp4788=PtreeMvchild(nctemp4786);
p =nctemp4788;
struct tree* nctemp4793= p;
struct tree* nctemp4795=PtreeMvchild(nctemp4793);
p =nctemp4795;
struct tree* nctemp4800= p;
struct tree* nctemp4802=PtreeMvchild(nctemp4800);
p =nctemp4802;
struct tree* nctemp4807= p;
struct tree* nctemp4809=PtreeMvchild(nctemp4807);
p =nctemp4809;
sp = p;
top = p;
rank = 1;
struct tree* nctemp4817= p;
struct tree* nctemp4819=PtreeMvsister(nctemp4817);
p =nctemp4819;
int nctemp4810 = (p !=0);
int nctemp4821=nctemp4810;
while(nctemp4821)
{{
rank = (rank + 1);
}
struct tree* nctemp4829= p;
struct tree* nctemp4831=PtreeMvsister(nctemp4829);
p =nctemp4831;
int nctemp4822 = (p !=0);
nctemp4821=nctemp4822;}int nctemp4833 = (rank > 4);
if(nctemp4833)
{
struct nctempchar1 *nctemp4840;
static struct nctempchar1 nctemp4841 = {{ 29}, (char*)"Array dimension is too large\0"};
nctemp4840=&nctemp4841;
nctempchar1* nctemp4838= nctemp4840;
int nctemp4842=CodeError(nctemp4838);
}
p = sp;
i = 0;
int nctemp4843 = (p !=0);
int nctemp4847=nctemp4843;
while(nctemp4847)
{{
struct tree* nctemp4853= p;
nctempchar1* nctemp4855=CodeExpr(nctemp4853);
dim=nctemp4855;
int nctemp4856 = (i ==0);
if(nctemp4856)
{
struct tree* nctemp4861= p;
struct tree* nctemp4865= p;
nctempchar1* nctemp4867=PtreeGetype(nctemp4865);
nctempchar1* nctemp4863= nctemp4867;
int nctemp4868=CodeEs(nctemp4861,nctemp4863);
struct tree* nctemp4870= p;
struct nctempchar1 *nctemp4874;
static struct nctempchar1 nctemp4875 = {{ 2}, (char*)" \0"};
nctemp4874=&nctemp4875;
nctempchar1* nctemp4872= nctemp4874;
int nctemp4876=CodeEs(nctemp4870,nctemp4872);
struct tree* nctemp4878= p;
nctempchar1* nctemp4880= totdim;
int nctemp4883=CodeEs(nctemp4878,nctemp4880);
struct tree* nctemp4885= p;
struct nctempchar1 *nctemp4889;
static struct nctempchar1 nctemp4890 = {{ 2}, (char*)"=\0"};
nctemp4889=&nctemp4890;
nctempchar1* nctemp4887= nctemp4889;
int nctemp4891=CodeEs(nctemp4885,nctemp4887);
struct tree* nctemp4893= p;
nctempchar1* nctemp4895= dim;
int nctemp4898=CodeEs(nctemp4893,nctemp4895);
}
else{
struct tree* nctemp4900= p;
nctempchar1* nctemp4902= totdim;
int nctemp4905=CodeEs(nctemp4900,nctemp4902);
struct tree* nctemp4907= p;
struct nctempchar1 *nctemp4911;
static struct nctempchar1 nctemp4912 = {{ 2}, (char*)"=\0"};
nctemp4911=&nctemp4912;
nctempchar1* nctemp4909= nctemp4911;
int nctemp4913=CodeEs(nctemp4907,nctemp4909);
struct tree* nctemp4915= p;
nctempchar1* nctemp4917= totdim;
int nctemp4920=CodeEs(nctemp4915,nctemp4917);
struct tree* nctemp4922= p;
struct nctempchar1 *nctemp4926;
static struct nctempchar1 nctemp4927 = {{ 2}, (char*)"*\0"};
nctemp4926=&nctemp4927;
nctempchar1* nctemp4924= nctemp4926;
int nctemp4928=CodeEs(nctemp4922,nctemp4924);
struct tree* nctemp4930= p;
nctempchar1* nctemp4932= dim;
int nctemp4935=CodeEs(nctemp4930,nctemp4932);
}
struct tree* nctemp4937= p;
struct nctempchar1 *nctemp4941;
static struct nctempchar1 nctemp4942 = {{ 4}, (char*)";\n\0"};
nctemp4941=&nctemp4942;
nctempchar1* nctemp4939= nctemp4941;
int nctemp4943=CodeEs(nctemp4937,nctemp4939);
i = (i + 1);
struct tree* nctemp4948= p;
struct tree* nctemp4950=PtreeMvsister(nctemp4948);
p =nctemp4950;
}
int nctemp4951 = (p !=0);
nctemp4847=nctemp4951;}}
nctempchar1* nctemp4961= structflag;
struct nctempchar1 *nctemp4966;
static struct nctempchar1 nctemp4967 = {{ 7}, (char*)"struct\0"};
nctemp4966=&nctemp4967;
nctempchar1* nctemp4964= nctemp4966;
int nctemp4968=LibeStrcmp(nctemp4961,nctemp4964);
int nctemp4958 = (nctemp4968 ==1);
nctempchar1* nctemp4974= arrayflag;
struct nctempchar1 *nctemp4979;
static struct nctempchar1 nctemp4980 = {{ 6}, (char*)"array\0"};
nctemp4979=&nctemp4980;
nctempchar1* nctemp4977= nctemp4979;
int nctemp4981=LibeStrcmp(nctemp4974,nctemp4977);
int nctemp4971 = (nctemp4981 ==0);
int nctemp4955 = (nctemp4958 && nctemp4971);
if(nctemp4955)
{
struct tree* nctemp4984= p;
struct nctempchar1 *nctemp4988;
static struct nctempchar1 nctemp4989 = {{ 8}, (char*)"struct \0"};
nctemp4988=&nctemp4989;
nctempchar1* nctemp4986= nctemp4988;
int nctemp4990=CodeEs(nctemp4984,nctemp4986);
struct tree* nctemp4992= p;
nctempchar1* nctemp4994= type;
int nctemp4997=CodeEs(nctemp4992,nctemp4994);
struct tree* nctemp4999= p;
struct nctempchar1 *nctemp5003;
static struct nctempchar1 nctemp5004 = {{ 3}, (char*)" *\0"};
nctemp5003=&nctemp5004;
nctempchar1* nctemp5001= nctemp5003;
int nctemp5005=CodeEs(nctemp4999,nctemp5001);
struct tree* nctemp5007= p;
nctempchar1* nctemp5009= pointer;
int nctemp5012=CodeEs(nctemp5007,nctemp5009);
struct tree* nctemp5014= p;
struct nctempchar1 *nctemp5018;
static struct nctempchar1 nctemp5019 = {{ 2}, (char*)"=\0"};
nctemp5018=&nctemp5019;
nctempchar1* nctemp5016= nctemp5018;
int nctemp5020=CodeEs(nctemp5014,nctemp5016);
struct tree* nctemp5022= p;
struct nctempchar1 *nctemp5026;
static struct nctempchar1 nctemp5027 = {{ 2}, (char*)"(\0"};
nctemp5026=&nctemp5027;
nctempchar1* nctemp5024= nctemp5026;
int nctemp5028=CodeEs(nctemp5022,nctemp5024);
struct tree* nctemp5030= p;
struct nctempchar1 *nctemp5034;
static struct nctempchar1 nctemp5035 = {{ 8}, (char*)"struct \0"};
nctemp5034=&nctemp5035;
nctempchar1* nctemp5032= nctemp5034;
int nctemp5036=CodeEs(nctemp5030,nctemp5032);
struct tree* nctemp5038= p;
nctempchar1* nctemp5040= type;
int nctemp5043=CodeEs(nctemp5038,nctemp5040);
struct tree* nctemp5045= p;
struct nctempchar1 *nctemp5049;
static struct nctempchar1 nctemp5050 = {{ 3}, (char*)"*)\0"};
nctemp5049=&nctemp5050;
nctempchar1* nctemp5047= nctemp5049;
int nctemp5051=CodeEs(nctemp5045,nctemp5047);
struct tree* nctemp5053= p;
struct nctempchar1 *nctemp5057;
static struct nctempchar1 nctemp5058 = {{ 11}, (char*)"RunMalloc(\0"};
nctemp5057=&nctemp5058;
nctempchar1* nctemp5055= nctemp5057;
int nctemp5059=CodeEs(nctemp5053,nctemp5055);
struct tree* nctemp5061= p;
struct nctempchar1 *nctemp5065;
static struct nctempchar1 nctemp5066 = {{ 8}, (char*)"sizeof(\0"};
nctemp5065=&nctemp5066;
nctempchar1* nctemp5063= nctemp5065;
int nctemp5067=CodeEs(nctemp5061,nctemp5063);
struct tree* nctemp5069= p;
struct nctempchar1 *nctemp5073;
static struct nctempchar1 nctemp5074 = {{ 8}, (char*)"struct \0"};
nctemp5073=&nctemp5074;
nctempchar1* nctemp5071= nctemp5073;
int nctemp5075=CodeEs(nctemp5069,nctemp5071);
struct tree* nctemp5077= p;
nctempchar1* nctemp5079= type;
int nctemp5082=CodeEs(nctemp5077,nctemp5079);
struct tree* nctemp5084= p;
struct nctempchar1 *nctemp5088;
static struct nctempchar1 nctemp5089 = {{ 6}, (char*)"));\n\0"};
nctemp5088=&nctemp5089;
nctempchar1* nctemp5086= nctemp5088;
int nctemp5090=CodeEs(nctemp5084,nctemp5086);
}
nctempchar1* nctemp5097= structflag;
struct nctempchar1 *nctemp5102;
static struct nctempchar1 nctemp5103 = {{ 7}, (char*)"struct\0"};
nctemp5102=&nctemp5103;
nctempchar1* nctemp5100= nctemp5102;
int nctemp5104=LibeStrcmp(nctemp5097,nctemp5100);
int nctemp5094 = (nctemp5104 ==1);
nctempchar1* nctemp5110= arrayflag;
struct nctempchar1 *nctemp5115;
static struct nctempchar1 nctemp5116 = {{ 6}, (char*)"array\0"};
nctemp5115=&nctemp5116;
nctempchar1* nctemp5113= nctemp5115;
int nctemp5117=LibeStrcmp(nctemp5110,nctemp5113);
int nctemp5107 = (nctemp5117 ==1);
int nctemp5091 = (nctemp5094 && nctemp5107);
if(nctemp5091)
{
struct tree* nctemp5120= p;
struct nctempchar1 *nctemp5124;
static struct nctempchar1 nctemp5125 = {{ 14}, (char*)"struct nctemp\0"};
nctemp5124=&nctemp5125;
nctempchar1* nctemp5122= nctemp5124;
int nctemp5126=CodeEs(nctemp5120,nctemp5122);
struct tree* nctemp5128= p;
nctempchar1* nctemp5130= type;
int nctemp5133=CodeEs(nctemp5128,nctemp5130);
int nctemp5135= rank;
int nctemp5137=CodeEd(nctemp5135);
struct tree* nctemp5139= p;
struct nctempchar1 *nctemp5143;
static struct nctempchar1 nctemp5144 = {{ 3}, (char*)" *\0"};
nctemp5143=&nctemp5144;
nctempchar1* nctemp5141= nctemp5143;
int nctemp5145=CodeEs(nctemp5139,nctemp5141);
struct tree* nctemp5147= p;
nctempchar1* nctemp5149= pointer;
int nctemp5152=CodeEs(nctemp5147,nctemp5149);
struct tree* nctemp5154= p;
struct nctempchar1 *nctemp5158;
static struct nctempchar1 nctemp5159 = {{ 4}, (char*)";\n\0"};
nctemp5158=&nctemp5159;
nctempchar1* nctemp5156= nctemp5158;
int nctemp5160=CodeEs(nctemp5154,nctemp5156);
struct tree* nctemp5162= p;
nctempchar1* nctemp5164= pointer;
int nctemp5167=CodeEs(nctemp5162,nctemp5164);
struct tree* nctemp5169= p;
struct nctempchar1 *nctemp5173;
static struct nctempchar1 nctemp5174 = {{ 2}, (char*)"=\0"};
nctemp5173=&nctemp5174;
nctempchar1* nctemp5171= nctemp5173;
int nctemp5175=CodeEs(nctemp5169,nctemp5171);
struct tree* nctemp5177= p;
struct nctempchar1 *nctemp5181;
static struct nctempchar1 nctemp5182 = {{ 2}, (char*)"(\0"};
nctemp5181=&nctemp5182;
nctempchar1* nctemp5179= nctemp5181;
int nctemp5183=CodeEs(nctemp5177,nctemp5179);
struct tree* nctemp5185= p;
struct nctempchar1 *nctemp5189;
static struct nctempchar1 nctemp5190 = {{ 14}, (char*)"struct nctemp\0"};
nctemp5189=&nctemp5190;
nctempchar1* nctemp5187= nctemp5189;
int nctemp5191=CodeEs(nctemp5185,nctemp5187);
struct tree* nctemp5193= p;
nctempchar1* nctemp5195= type;
int nctemp5198=CodeEs(nctemp5193,nctemp5195);
int nctemp5200= rank;
int nctemp5202=CodeEd(nctemp5200);
struct tree* nctemp5204= p;
struct nctempchar1 *nctemp5208;
static struct nctempchar1 nctemp5209 = {{ 3}, (char*)"*)\0"};
nctemp5208=&nctemp5209;
nctempchar1* nctemp5206= nctemp5208;
int nctemp5210=CodeEs(nctemp5204,nctemp5206);
struct tree* nctemp5212= p;
struct nctempchar1 *nctemp5216;
static struct nctempchar1 nctemp5217 = {{ 11}, (char*)"RunMalloc(\0"};
nctemp5216=&nctemp5217;
nctempchar1* nctemp5214= nctemp5216;
int nctemp5218=CodeEs(nctemp5212,nctemp5214);
struct tree* nctemp5220= p;
struct nctempchar1 *nctemp5224;
static struct nctempchar1 nctemp5225 = {{ 21}, (char*)"sizeof(struct nctemp\0"};
nctemp5224=&nctemp5225;
nctempchar1* nctemp5222= nctemp5224;
int nctemp5226=CodeEs(nctemp5220,nctemp5222);
struct tree* nctemp5228= p;
nctempchar1* nctemp5230= type;
int nctemp5233=CodeEs(nctemp5228,nctemp5230);
int nctemp5235= rank;
int nctemp5237=CodeEd(nctemp5235);
struct tree* nctemp5239= p;
struct nctempchar1 *nctemp5243;
static struct nctempchar1 nctemp5244 = {{ 6}, (char*)"));\n\0"};
nctemp5243=&nctemp5244;
nctempchar1* nctemp5241= nctemp5243;
int nctemp5245=CodeEs(nctemp5239,nctemp5241);
i = 0;
p = sp;
int nctemp5246 = (p !=0);
int nctemp5250=nctemp5246;
while(nctemp5250)
{{
struct tree* nctemp5256= sp;
nctempchar1* nctemp5258=CodeExpr(nctemp5256);
dim=nctemp5258;
struct tree* nctemp5260= sp;
nctempchar1* nctemp5262= pointer;
int nctemp5265=CodeEs(nctemp5260,nctemp5262);
struct tree* nctemp5267= sp;
struct nctempchar1 *nctemp5271;
static struct nctempchar1 nctemp5272 = {{ 4}, (char*)"->d\0"};
nctemp5271=&nctemp5272;
nctempchar1* nctemp5269= nctemp5271;
int nctemp5273=CodeEs(nctemp5267,nctemp5269);
struct tree* nctemp5275= sp;
struct nctempchar1 *nctemp5279;
static struct nctempchar1 nctemp5280 = {{ 2}, (char*)"[\0"};
nctemp5279=&nctemp5280;
nctempchar1* nctemp5277= nctemp5279;
int nctemp5281=CodeEs(nctemp5275,nctemp5277);
int nctemp5283= i;
int nctemp5285=CodeEd(nctemp5283);
struct tree* nctemp5287= sp;
struct nctempchar1 *nctemp5291;
static struct nctempchar1 nctemp5292 = {{ 3}, (char*)"]=\0"};
nctemp5291=&nctemp5292;
nctempchar1* nctemp5289= nctemp5291;
int nctemp5293=CodeEs(nctemp5287,nctemp5289);
struct tree* nctemp5295= sp;
nctempchar1* nctemp5297= dim;
int nctemp5300=CodeEs(nctemp5295,nctemp5297);
struct tree* nctemp5302= sp;
struct nctempchar1 *nctemp5306;
static struct nctempchar1 nctemp5307 = {{ 4}, (char*)";\n\0"};
nctemp5306=&nctemp5307;
nctempchar1* nctemp5304= nctemp5306;
int nctemp5308=CodeEs(nctemp5302,nctemp5304);
i = (i + 1);
struct tree* nctemp5313= p;
struct tree* nctemp5315=PtreeMvsister(nctemp5313);
p =nctemp5315;
}
int nctemp5316 = (p !=0);
nctemp5250=nctemp5316;}struct tree* nctemp5321= sp;
nctempchar1* nctemp5323= pointer;
int nctemp5326=CodeEs(nctemp5321,nctemp5323);
struct tree* nctemp5328= sp;
struct nctempchar1 *nctemp5332;
static struct nctempchar1 nctemp5333 = {{ 4}, (char*)"->a\0"};
nctemp5332=&nctemp5333;
nctempchar1* nctemp5330= nctemp5332;
int nctemp5334=CodeEs(nctemp5328,nctemp5330);
struct tree* nctemp5336= sp;
struct nctempchar1 *nctemp5340;
static struct nctempchar1 nctemp5341 = {{ 2}, (char*)"=\0"};
nctemp5340=&nctemp5341;
nctempchar1* nctemp5338= nctemp5340;
int nctemp5342=CodeEs(nctemp5336,nctemp5338);
struct tree* nctemp5344= sp;
struct nctempchar1 *nctemp5348;
static struct nctempchar1 nctemp5349 = {{ 9}, (char*)"(struct \0"};
nctemp5348=&nctemp5349;
nctempchar1* nctemp5346= nctemp5348;
int nctemp5350=CodeEs(nctemp5344,nctemp5346);
struct tree* nctemp5352= sp;
nctempchar1* nctemp5354= type;
int nctemp5357=CodeEs(nctemp5352,nctemp5354);
struct tree* nctemp5359= sp;
struct nctempchar1 *nctemp5363;
static struct nctempchar1 nctemp5364 = {{ 3}, (char*)"*)\0"};
nctemp5363=&nctemp5364;
nctempchar1* nctemp5361= nctemp5363;
int nctemp5365=CodeEs(nctemp5359,nctemp5361);
struct tree* nctemp5367= sp;
struct nctempchar1 *nctemp5371;
static struct nctempchar1 nctemp5372 = {{ 18}, (char*)"RunMalloc(sizeof(\0"};
nctemp5371=&nctemp5372;
nctempchar1* nctemp5369= nctemp5371;
int nctemp5373=CodeEs(nctemp5367,nctemp5369);
struct tree* nctemp5375= sp;
struct nctempchar1 *nctemp5379;
static struct nctempchar1 nctemp5380 = {{ 8}, (char*)"struct \0"};
nctemp5379=&nctemp5380;
nctempchar1* nctemp5377= nctemp5379;
int nctemp5381=CodeEs(nctemp5375,nctemp5377);
struct tree* nctemp5383= sp;
nctempchar1* nctemp5385= type;
int nctemp5388=CodeEs(nctemp5383,nctemp5385);
struct tree* nctemp5390= sp;
struct nctempchar1 *nctemp5394;
static struct nctempchar1 nctemp5395 = {{ 2}, (char*)")\0"};
nctemp5394=&nctemp5395;
nctempchar1* nctemp5392= nctemp5394;
int nctemp5396=CodeEs(nctemp5390,nctemp5392);
struct tree* nctemp5398= sp;
struct nctempchar1 *nctemp5402;
static struct nctempchar1 nctemp5403 = {{ 2}, (char*)"*\0"};
nctemp5402=&nctemp5403;
nctempchar1* nctemp5400= nctemp5402;
int nctemp5404=CodeEs(nctemp5398,nctemp5400);
struct tree* nctemp5406= sp;
nctempchar1* nctemp5408= totdim;
int nctemp5411=CodeEs(nctemp5406,nctemp5408);
struct tree* nctemp5413= sp;
struct nctempchar1 *nctemp5417;
static struct nctempchar1 nctemp5418 = {{ 5}, (char*)");\n\0"};
nctemp5417=&nctemp5418;
nctempchar1* nctemp5415= nctemp5417;
int nctemp5419=CodeEs(nctemp5413,nctemp5415);
}
nctempchar1* nctemp5426= structflag;
struct nctempchar1 *nctemp5431;
static struct nctempchar1 nctemp5432 = {{ 7}, (char*)"struct\0"};
nctemp5431=&nctemp5432;
nctempchar1* nctemp5429= nctemp5431;
int nctemp5433=LibeStrcmp(nctemp5426,nctemp5429);
int nctemp5423 = (nctemp5433 ==0);
nctempchar1* nctemp5439= arrayflag;
struct nctempchar1 *nctemp5444;
static struct nctempchar1 nctemp5445 = {{ 6}, (char*)"array\0"};
nctemp5444=&nctemp5445;
nctempchar1* nctemp5442= nctemp5444;
int nctemp5446=LibeStrcmp(nctemp5439,nctemp5442);
int nctemp5436 = (nctemp5446 ==1);
int nctemp5420 = (nctemp5423 && nctemp5436);
if(nctemp5420)
{
int nctemp5449= 4;
int nctemp5451=LibeFlush(nctemp5449);
struct tree* nctemp5453= sp;
struct nctempchar1 *nctemp5457;
static struct nctempchar1 nctemp5458 = {{ 7}, (char*)"nctemp\0"};
nctemp5457=&nctemp5458;
nctempchar1* nctemp5455= nctemp5457;
int nctemp5459=CodeEs(nctemp5453,nctemp5455);
struct tree* nctemp5461= sp;
nctempchar1* nctemp5463= type;
int nctemp5466=CodeEs(nctemp5461,nctemp5463);
int nctemp5468= rank;
int nctemp5470=CodeEd(nctemp5468);
struct tree* nctemp5472= sp;
struct nctempchar1 *nctemp5476;
static struct nctempchar1 nctemp5477 = {{ 3}, (char*)" *\0"};
nctemp5476=&nctemp5477;
nctempchar1* nctemp5474= nctemp5476;
int nctemp5478=CodeEs(nctemp5472,nctemp5474);
struct tree* nctemp5480= sp;
nctempchar1* nctemp5482= pointer;
int nctemp5485=CodeEs(nctemp5480,nctemp5482);
struct tree* nctemp5487= sp;
struct nctempchar1 *nctemp5491;
static struct nctempchar1 nctemp5492 = {{ 4}, (char*)";\n\0"};
nctemp5491=&nctemp5492;
nctempchar1* nctemp5489= nctemp5491;
int nctemp5493=CodeEs(nctemp5487,nctemp5489);
p = top;
i = 0;
struct tree* nctemp5495= p;
nctempchar1* nctemp5497= pointer;
int nctemp5500=CodeEs(nctemp5495,nctemp5497);
struct tree* nctemp5502= p;
struct nctempchar1 *nctemp5506;
static struct nctempchar1 nctemp5507 = {{ 2}, (char*)"=\0"};
nctemp5506=&nctemp5507;
nctempchar1* nctemp5504= nctemp5506;
int nctemp5508=CodeEs(nctemp5502,nctemp5504);
struct tree* nctemp5510= p;
struct nctempchar1 *nctemp5514;
static struct nctempchar1 nctemp5515 = {{ 2}, (char*)"(\0"};
nctemp5514=&nctemp5515;
nctempchar1* nctemp5512= nctemp5514;
int nctemp5516=CodeEs(nctemp5510,nctemp5512);
struct tree* nctemp5518= p;
struct nctempchar1 *nctemp5522;
static struct nctempchar1 nctemp5523 = {{ 7}, (char*)"nctemp\0"};
nctemp5522=&nctemp5523;
nctempchar1* nctemp5520= nctemp5522;
int nctemp5524=CodeEs(nctemp5518,nctemp5520);
struct tree* nctemp5526= p;
nctempchar1* nctemp5528= type;
int nctemp5531=CodeEs(nctemp5526,nctemp5528);
int nctemp5533= rank;
int nctemp5535=CodeEd(nctemp5533);
struct tree* nctemp5537= p;
struct nctempchar1 *nctemp5541;
static struct nctempchar1 nctemp5542 = {{ 3}, (char*)"*)\0"};
nctemp5541=&nctemp5542;
nctempchar1* nctemp5539= nctemp5541;
int nctemp5543=CodeEs(nctemp5537,nctemp5539);
struct tree* nctemp5545= p;
struct nctempchar1 *nctemp5549;
static struct nctempchar1 nctemp5550 = {{ 11}, (char*)"RunMalloc(\0"};
nctemp5549=&nctemp5550;
nctempchar1* nctemp5547= nctemp5549;
int nctemp5551=CodeEs(nctemp5545,nctemp5547);
struct tree* nctemp5553= p;
struct nctempchar1 *nctemp5557;
static struct nctempchar1 nctemp5558 = {{ 14}, (char*)"sizeof(nctemp\0"};
nctemp5557=&nctemp5558;
nctempchar1* nctemp5555= nctemp5557;
int nctemp5559=CodeEs(nctemp5553,nctemp5555);
struct tree* nctemp5561= p;
nctempchar1* nctemp5563= type;
int nctemp5566=CodeEs(nctemp5561,nctemp5563);
int nctemp5568= rank;
int nctemp5570=CodeEd(nctemp5568);
struct tree* nctemp5572= p;
struct nctempchar1 *nctemp5576;
static struct nctempchar1 nctemp5577 = {{ 6}, (char*)"));\n\0"};
nctemp5576=&nctemp5577;
nctempchar1* nctemp5574= nctemp5576;
int nctemp5578=CodeEs(nctemp5572,nctemp5574);
int nctemp5579 = (p !=0);
int nctemp5583=nctemp5579;
while(nctemp5583)
{{
struct tree* nctemp5589= p;
nctempchar1* nctemp5591=CodeExpr(nctemp5589);
dim=nctemp5591;
struct tree* nctemp5593= p;
nctempchar1* nctemp5595= pointer;
int nctemp5598=CodeEs(nctemp5593,nctemp5595);
struct tree* nctemp5600= p;
struct nctempchar1 *nctemp5604;
static struct nctempchar1 nctemp5605 = {{ 4}, (char*)"->d\0"};
nctemp5604=&nctemp5605;
nctempchar1* nctemp5602= nctemp5604;
int nctemp5606=CodeEs(nctemp5600,nctemp5602);
struct tree* nctemp5608= p;
struct nctempchar1 *nctemp5612;
static struct nctempchar1 nctemp5613 = {{ 2}, (char*)"[\0"};
nctemp5612=&nctemp5613;
nctempchar1* nctemp5610= nctemp5612;
int nctemp5614=CodeEs(nctemp5608,nctemp5610);
int nctemp5616= i;
int nctemp5618=CodeEd(nctemp5616);
struct tree* nctemp5620= p;
struct nctempchar1 *nctemp5624;
static struct nctempchar1 nctemp5625 = {{ 3}, (char*)"]=\0"};
nctemp5624=&nctemp5625;
nctempchar1* nctemp5622= nctemp5624;
int nctemp5626=CodeEs(nctemp5620,nctemp5622);
struct tree* nctemp5628= p;
nctempchar1* nctemp5630= dim;
int nctemp5633=CodeEs(nctemp5628,nctemp5630);
struct tree* nctemp5635= p;
struct nctempchar1 *nctemp5639;
static struct nctempchar1 nctemp5640 = {{ 4}, (char*)";\n\0"};
nctemp5639=&nctemp5640;
nctempchar1* nctemp5637= nctemp5639;
int nctemp5641=CodeEs(nctemp5635,nctemp5637);
i = (i + 1);
struct tree* nctemp5646= p;
struct tree* nctemp5648=PtreeMvsister(nctemp5646);
p =nctemp5648;
}
int nctemp5649 = (p !=0);
nctemp5583=nctemp5649;}p = top;
struct tree* nctemp5654= p;
nctempchar1* nctemp5656= pointer;
int nctemp5659=CodeEs(nctemp5654,nctemp5656);
struct tree* nctemp5661= p;
struct nctempchar1 *nctemp5665;
static struct nctempchar1 nctemp5666 = {{ 4}, (char*)"->a\0"};
nctemp5665=&nctemp5666;
nctempchar1* nctemp5663= nctemp5665;
int nctemp5667=CodeEs(nctemp5661,nctemp5663);
struct tree* nctemp5669= p;
struct nctempchar1 *nctemp5673;
static struct nctempchar1 nctemp5674 = {{ 3}, (char*)"=(\0"};
nctemp5673=&nctemp5674;
nctempchar1* nctemp5671= nctemp5673;
int nctemp5675=CodeEs(nctemp5669,nctemp5671);
struct tree* nctemp5677= p;
nctempchar1* nctemp5679= type;
int nctemp5682=CodeEs(nctemp5677,nctemp5679);
struct tree* nctemp5684= p;
struct nctempchar1 *nctemp5688;
static struct nctempchar1 nctemp5689 = {{ 4}, (char*)" *)\0"};
nctemp5688=&nctemp5689;
nctempchar1* nctemp5686= nctemp5688;
int nctemp5690=CodeEs(nctemp5684,nctemp5686);
struct tree* nctemp5692= p;
struct nctempchar1 *nctemp5696;
static struct nctempchar1 nctemp5697 = {{ 18}, (char*)"RunMalloc(sizeof(\0"};
nctemp5696=&nctemp5697;
nctempchar1* nctemp5694= nctemp5696;
int nctemp5698=CodeEs(nctemp5692,nctemp5694);
struct tree* nctemp5700= p;
nctempchar1* nctemp5702= type;
int nctemp5705=CodeEs(nctemp5700,nctemp5702);
struct tree* nctemp5707= p;
struct nctempchar1 *nctemp5711;
static struct nctempchar1 nctemp5712 = {{ 2}, (char*)")\0"};
nctemp5711=&nctemp5712;
nctempchar1* nctemp5709= nctemp5711;
int nctemp5713=CodeEs(nctemp5707,nctemp5709);
struct tree* nctemp5715= p;
struct nctempchar1 *nctemp5719;
static struct nctempchar1 nctemp5720 = {{ 2}, (char*)"*\0"};
nctemp5719=&nctemp5720;
nctempchar1* nctemp5717= nctemp5719;
int nctemp5721=CodeEs(nctemp5715,nctemp5717);
struct tree* nctemp5723= p;
nctempchar1* nctemp5725= totdim;
int nctemp5728=CodeEs(nctemp5723,nctemp5725);
struct tree* nctemp5730= p;
struct nctempchar1 *nctemp5734;
static struct nctempchar1 nctemp5735 = {{ 5}, (char*)");\n\0"};
nctemp5734=&nctemp5735;
nctempchar1* nctemp5732= nctemp5734;
int nctemp5736=CodeEs(nctemp5730,nctemp5732);
}
return pointer;
}
nctempchar1 * CodeDelete (struct tree* p)
{
nctempchar1 *tmp;
struct tree* nctemp5743= p;
struct tree* nctemp5745=PtreeMvchild(nctemp5743);
p =nctemp5745;
struct tree* nctemp5750= p;
struct tree* nctemp5752=PtreeMvchild(nctemp5750);
p =nctemp5752;
struct tree* nctemp5758= p;
nctempchar1* nctemp5760=CodeBinexpr(nctemp5758);
tmp=nctemp5760;
struct tree* nctemp5764= p;
nctempchar1* nctemp5766=PtreeGetref(nctemp5764);
nctempchar1* nctemp5762= nctemp5766;
struct nctempchar1 *nctemp5769;
static struct nctempchar1 nctemp5770 = {{ 5}, (char*)"aref\0"};
nctemp5769=&nctemp5770;
nctempchar1* nctemp5767= nctemp5769;
int nctemp5771=LibeStrcmp(nctemp5762,nctemp5767);
if(nctemp5771)
{
struct tree* nctemp5773= p;
struct nctempchar1 *nctemp5777;
static struct nctempchar1 nctemp5778 = {{ 9}, (char*)"RunFree(\0"};
nctemp5777=&nctemp5778;
nctempchar1* nctemp5775= nctemp5777;
int nctemp5779=CodeEs(nctemp5773,nctemp5775);
struct tree* nctemp5781= p;
nctempchar1* nctemp5783= tmp;
int nctemp5786=CodeEs(nctemp5781,nctemp5783);
struct tree* nctemp5788= p;
struct nctempchar1 *nctemp5792;
static struct nctempchar1 nctemp5793 = {{ 8}, (char*)"->a);\n\0"};
nctemp5792=&nctemp5793;
nctempchar1* nctemp5790= nctemp5792;
int nctemp5794=CodeEs(nctemp5788,nctemp5790);
struct tree* nctemp5796= p;
struct nctempchar1 *nctemp5800;
static struct nctempchar1 nctemp5801 = {{ 9}, (char*)"RunFree(\0"};
nctemp5800=&nctemp5801;
nctempchar1* nctemp5798= nctemp5800;
int nctemp5802=CodeEs(nctemp5796,nctemp5798);
struct tree* nctemp5804= p;
nctempchar1* nctemp5806= tmp;
int nctemp5809=CodeEs(nctemp5804,nctemp5806);
struct tree* nctemp5811= p;
struct nctempchar1 *nctemp5815;
static struct nctempchar1 nctemp5816 = {{ 5}, (char*)");\n\0"};
nctemp5815=&nctemp5816;
nctempchar1* nctemp5813= nctemp5815;
int nctemp5817=CodeEs(nctemp5811,nctemp5813);
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
nctempchar1* nctemp5825=CodeMktemp();
tempr=nctemp5825;
struct tree* nctemp5830= p;
struct tree* nctemp5832=PtreeMvchild(nctemp5830);
np =nctemp5832;
struct tree* nctemp5838= np;
nctempchar1* nctemp5840=CodeExpr(nctemp5838);
temp=nctemp5840;
struct tree* nctemp5845= np;
struct tree* nctemp5847=PtreeMvsister(nctemp5845);
sp =nctemp5847;
struct tree* nctemp5853= sp;
nctempchar1* nctemp5855=CodeExpr(nctemp5853);
index=nctemp5855;
struct tree* nctemp5857= p;
struct tree* nctemp5861= p;
nctempchar1* nctemp5863=PtreeGetype(nctemp5861);
nctempchar1* nctemp5859= nctemp5863;
int nctemp5864=CodeEs(nctemp5857,nctemp5859);
struct tree* nctemp5866= p;
struct nctempchar1 *nctemp5870;
static struct nctempchar1 nctemp5871 = {{ 2}, (char*)" \0"};
nctemp5870=&nctemp5871;
nctempchar1* nctemp5868= nctemp5870;
int nctemp5872=CodeEs(nctemp5866,nctemp5868);
struct tree* nctemp5874= p;
nctempchar1* nctemp5876= tempr;
int nctemp5879=CodeEs(nctemp5874,nctemp5876);
struct tree* nctemp5881= p;
struct nctempchar1 *nctemp5885;
static struct nctempchar1 nctemp5886 = {{ 2}, (char*)"=\0"};
nctemp5885=&nctemp5886;
nctempchar1* nctemp5883= nctemp5885;
int nctemp5887=CodeEs(nctemp5881,nctemp5883);
struct tree* nctemp5889= p;
nctempchar1* nctemp5891= temp;
int nctemp5894=CodeEs(nctemp5889,nctemp5891);
struct tree* nctemp5896= p;
struct nctempchar1 *nctemp5900;
static struct nctempchar1 nctemp5901 = {{ 4}, (char*)"->d\0"};
nctemp5900=&nctemp5901;
nctempchar1* nctemp5898= nctemp5900;
int nctemp5902=CodeEs(nctemp5896,nctemp5898);
struct tree* nctemp5904= p;
struct nctempchar1 *nctemp5908;
static struct nctempchar1 nctemp5909 = {{ 2}, (char*)"[\0"};
nctemp5908=&nctemp5909;
nctempchar1* nctemp5906= nctemp5908;
int nctemp5910=CodeEs(nctemp5904,nctemp5906);
struct tree* nctemp5912= p;
nctempchar1* nctemp5914= index;
int nctemp5917=CodeEs(nctemp5912,nctemp5914);
struct tree* nctemp5919= p;
struct nctempchar1 *nctemp5923;
static struct nctempchar1 nctemp5924 = {{ 3}, (char*)"];\0"};
nctemp5923=&nctemp5924;
nctempchar1* nctemp5921= nctemp5923;
int nctemp5925=CodeEs(nctemp5919,nctemp5921);
return tempr;
}
nctempchar1 * CodeCmplx (struct tree* p)
{
struct tree* np;
struct tree* sp;
nctempchar1 *q;
nctempchar1 *r;
nctempchar1 *tempr;
nctempchar1* nctemp5933=CodeMktemp();
tempr=nctemp5933;
struct tree* nctemp5938= p;
struct tree* nctemp5940=PtreeMvchild(nctemp5938);
np =nctemp5940;
struct tree* nctemp5945= np;
struct tree* nctemp5947=PtreeMvchild(nctemp5945);
np =nctemp5947;
struct tree* nctemp5953= np;
nctempchar1* nctemp5955=CodeExpr(nctemp5953);
q=nctemp5955;
struct tree* nctemp5960= np;
struct tree* nctemp5962=PtreeMvsister(nctemp5960);
sp =nctemp5962;
struct tree* nctemp5968= sp;
nctempchar1* nctemp5970=CodeExpr(nctemp5968);
r=nctemp5970;
struct tree* nctemp5972= p;
struct tree* nctemp5976= p;
nctempchar1* nctemp5978=PtreeGetype(nctemp5976);
nctempchar1* nctemp5974= nctemp5978;
int nctemp5979=CodeEs(nctemp5972,nctemp5974);
struct tree* nctemp5981= p;
struct nctempchar1 *nctemp5985;
static struct nctempchar1 nctemp5986 = {{ 2}, (char*)" \0"};
nctemp5985=&nctemp5986;
nctempchar1* nctemp5983= nctemp5985;
int nctemp5987=CodeEs(nctemp5981,nctemp5983);
struct tree* nctemp5989= p;
nctempchar1* nctemp5991= tempr;
int nctemp5994=CodeEs(nctemp5989,nctemp5991);
struct tree* nctemp5996= p;
struct nctempchar1 *nctemp6000;
static struct nctempchar1 nctemp6001 = {{ 3}, (char*)".r\0"};
nctemp6000=&nctemp6001;
nctempchar1* nctemp5998= nctemp6000;
int nctemp6002=CodeEs(nctemp5996,nctemp5998);
struct tree* nctemp6004= p;
struct nctempchar1 *nctemp6008;
static struct nctempchar1 nctemp6009 = {{ 3}, (char*)" =\0"};
nctemp6008=&nctemp6009;
nctempchar1* nctemp6006= nctemp6008;
int nctemp6010=CodeEs(nctemp6004,nctemp6006);
struct tree* nctemp6012= p;
nctempchar1* nctemp6014= q;
int nctemp6017=CodeEs(nctemp6012,nctemp6014);
struct tree* nctemp6019= p;
struct nctempchar1 *nctemp6023;
static struct nctempchar1 nctemp6024 = {{ 2}, (char*)";\0"};
nctemp6023=&nctemp6024;
nctempchar1* nctemp6021= nctemp6023;
int nctemp6025=CodeEs(nctemp6019,nctemp6021);
struct tree* nctemp6027= p;
struct tree* nctemp6031= p;
nctempchar1* nctemp6033=PtreeGetype(nctemp6031);
nctempchar1* nctemp6029= nctemp6033;
int nctemp6034=CodeEs(nctemp6027,nctemp6029);
struct tree* nctemp6036= p;
struct nctempchar1 *nctemp6040;
static struct nctempchar1 nctemp6041 = {{ 2}, (char*)" \0"};
nctemp6040=&nctemp6041;
nctempchar1* nctemp6038= nctemp6040;
int nctemp6042=CodeEs(nctemp6036,nctemp6038);
struct tree* nctemp6044= p;
nctempchar1* nctemp6046= tempr;
int nctemp6049=CodeEs(nctemp6044,nctemp6046);
struct tree* nctemp6051= p;
struct nctempchar1 *nctemp6055;
static struct nctempchar1 nctemp6056 = {{ 3}, (char*)".i\0"};
nctemp6055=&nctemp6056;
nctempchar1* nctemp6053= nctemp6055;
int nctemp6057=CodeEs(nctemp6051,nctemp6053);
struct tree* nctemp6059= p;
struct nctempchar1 *nctemp6063;
static struct nctempchar1 nctemp6064 = {{ 2}, (char*)"=\0"};
nctemp6063=&nctemp6064;
nctempchar1* nctemp6061= nctemp6063;
int nctemp6065=CodeEs(nctemp6059,nctemp6061);
struct tree* nctemp6067= p;
nctempchar1* nctemp6069= r;
int nctemp6072=CodeEs(nctemp6067,nctemp6069);
struct tree* nctemp6074= p;
struct nctempchar1 *nctemp6078;
static struct nctempchar1 nctemp6079 = {{ 2}, (char*)";\0"};
nctemp6078=&nctemp6079;
nctempchar1* nctemp6076= nctemp6078;
int nctemp6080=CodeEs(nctemp6074,nctemp6076);
return tempr;
}
nctempchar1 * CodeIm (struct tree* p)
{
struct tree* np;
nctempchar1 *q;
nctempchar1 *tempr;
nctempchar1* nctemp6088=CodeMktemp();
tempr=nctemp6088;
struct tree* nctemp6093= p;
struct tree* nctemp6095=PtreeMvchild(nctemp6093);
np =nctemp6095;
struct tree* nctemp6101= np;
nctempchar1* nctemp6103=CodeExpr(nctemp6101);
q=nctemp6103;
struct tree* nctemp6105= p;
struct tree* nctemp6109= p;
nctempchar1* nctemp6111=PtreeGetype(nctemp6109);
nctempchar1* nctemp6107= nctemp6111;
int nctemp6112=CodeEs(nctemp6105,nctemp6107);
struct tree* nctemp6114= p;
struct nctempchar1 *nctemp6118;
static struct nctempchar1 nctemp6119 = {{ 2}, (char*)" \0"};
nctemp6118=&nctemp6119;
nctempchar1* nctemp6116= nctemp6118;
int nctemp6120=CodeEs(nctemp6114,nctemp6116);
struct tree* nctemp6122= p;
nctempchar1* nctemp6124= tempr;
int nctemp6127=CodeEs(nctemp6122,nctemp6124);
struct tree* nctemp6129= p;
struct nctempchar1 *nctemp6133;
static struct nctempchar1 nctemp6134 = {{ 3}, (char*)" =\0"};
nctemp6133=&nctemp6134;
nctempchar1* nctemp6131= nctemp6133;
int nctemp6135=CodeEs(nctemp6129,nctemp6131);
struct tree* nctemp6137= p;
nctempchar1* nctemp6139= q;
int nctemp6142=CodeEs(nctemp6137,nctemp6139);
struct tree* nctemp6144= p;
struct nctempchar1 *nctemp6148;
static struct nctempchar1 nctemp6149 = {{ 5}, (char*)".i  \0"};
nctemp6148=&nctemp6149;
nctempchar1* nctemp6146= nctemp6148;
int nctemp6150=CodeEs(nctemp6144,nctemp6146);
struct tree* nctemp6152= p;
struct nctempchar1 *nctemp6156;
static struct nctempchar1 nctemp6157 = {{ 4}, (char*)";\n\0"};
nctemp6156=&nctemp6157;
nctempchar1* nctemp6154= nctemp6156;
int nctemp6158=CodeEs(nctemp6152,nctemp6154);
return tempr;
}
nctempchar1 * CodeRe (struct tree* p)
{
struct tree* np;
nctempchar1 *q;
nctempchar1 *tmp;
struct tree* nctemp6165= p;
struct tree* nctemp6167=PtreeMvchild(nctemp6165);
np =nctemp6167;
struct tree* nctemp6173= np;
nctempchar1* nctemp6175=CodeExpr(nctemp6173);
q=nctemp6175;
nctempchar1* nctemp6181=CodeMktemp();
tmp=nctemp6181;
struct tree* nctemp6183= p;
struct tree* nctemp6187= p;
nctempchar1* nctemp6189=PtreeGetype(nctemp6187);
nctempchar1* nctemp6185= nctemp6189;
int nctemp6190=CodeEs(nctemp6183,nctemp6185);
struct tree* nctemp6192= p;
struct nctempchar1 *nctemp6196;
static struct nctempchar1 nctemp6197 = {{ 2}, (char*)" \0"};
nctemp6196=&nctemp6197;
nctempchar1* nctemp6194= nctemp6196;
int nctemp6198=CodeEs(nctemp6192,nctemp6194);
struct tree* nctemp6200= p;
nctempchar1* nctemp6202= tmp;
int nctemp6205=CodeEs(nctemp6200,nctemp6202);
struct tree* nctemp6207= p;
struct nctempchar1 *nctemp6211;
static struct nctempchar1 nctemp6212 = {{ 3}, (char*)" =\0"};
nctemp6211=&nctemp6212;
nctempchar1* nctemp6209= nctemp6211;
int nctemp6213=CodeEs(nctemp6207,nctemp6209);
struct tree* nctemp6215= p;
nctempchar1* nctemp6217= q;
int nctemp6220=CodeEs(nctemp6215,nctemp6217);
struct tree* nctemp6222= p;
struct nctempchar1 *nctemp6226;
static struct nctempchar1 nctemp6227 = {{ 5}, (char*)".r  \0"};
nctemp6226=&nctemp6227;
nctempchar1* nctemp6224= nctemp6226;
int nctemp6228=CodeEs(nctemp6222,nctemp6224);
struct tree* nctemp6230= p;
struct nctempchar1 *nctemp6234;
static struct nctempchar1 nctemp6235 = {{ 4}, (char*)";\n\0"};
nctemp6234=&nctemp6235;
nctempchar1* nctemp6232= nctemp6234;
int nctemp6236=CodeEs(nctemp6230,nctemp6232);
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
struct tree* nctemp6245= p;
nctempchar1* nctemp6247=PtreeGetdef(nctemp6245);
nctempchar1* nctemp6243= nctemp6247;
struct symbol* nctemp6250=SymGetetp();
struct symbol* nctemp6248= nctemp6250;
struct symbol* nctemp6251=SymLookup(nctemp6243,nctemp6248);
tp =nctemp6251;
struct tree* nctemp6256= p;
struct tree* nctemp6258=PtreeMvchild(nctemp6256);
sp =nctemp6258;
int nctemp6259 = (sp !=0);
if(nctemp6259)
{
struct tree* nctemp6268= sp;
nctempchar1* nctemp6270=PtreeGetname(nctemp6268);
nctempchar1* nctemp6266= nctemp6270;
struct nctempchar1 *nctemp6273;
static struct nctempchar1 nctemp6274 = {{ 9}, (char*)"exprlist\0"};
nctemp6273=&nctemp6274;
nctempchar1* nctemp6271= nctemp6273;
int nctemp6275=LibeStrcmp(nctemp6266,nctemp6271);
int nctemp6263 = (nctemp6275 ==1);
if(nctemp6263)
{
struct tree* nctemp6281= sp;
struct tree* nctemp6283=PtreeMvchild(nctemp6281);
sp =nctemp6283;
}
}
int nctemp6284 = (sp !=0);
int nctemp6288=nctemp6284;
while(nctemp6288)
{{
nctempchar1* nctemp6294=CodeMktemp();
ntemp=nctemp6294;
struct tree* nctemp6296= sp;
nctempchar1* nctemp6298= ntemp;
int nctemp6301=PtreeSetempr(nctemp6296,nctemp6298);
struct tree* nctemp6307= sp;
nctempchar1* nctemp6309=CodeExpr(nctemp6307);
temp=nctemp6309;
struct tree* nctemp6315= sp;
nctempchar1* nctemp6317=PtreeGetref(nctemp6315);
nctempchar1* nctemp6313= nctemp6317;
struct nctempchar1 *nctemp6320;
static struct nctempchar1 nctemp6321 = {{ 5}, (char*)"aref\0"};
nctemp6320=&nctemp6321;
nctempchar1* nctemp6318= nctemp6320;
int nctemp6322=LibeStrcmp(nctemp6313,nctemp6318);
int nctemp6310 = (nctemp6322 ==1);
if(nctemp6310)
{
struct tree* nctemp6325= sp;
struct nctempchar1 *nctemp6329;
static struct nctempchar1 nctemp6330 = {{ 7}, (char*)"nctemp\0"};
nctemp6329=&nctemp6330;
nctempchar1* nctemp6327= nctemp6329;
int nctemp6331=CodeEs(nctemp6325,nctemp6327);
struct tree* nctemp6333= sp;
struct tree* nctemp6337= sp;
nctempchar1* nctemp6339=PtreeGetype(nctemp6337);
nctempchar1* nctemp6335= nctemp6339;
int nctemp6340=CodeEs(nctemp6333,nctemp6335);
struct tree* nctemp6344= sp;
int nctemp6346=PtreeGetrank(nctemp6344);
int nctemp6342= nctemp6346;
int nctemp6347=CodeEd(nctemp6342);
struct tree* nctemp6349= sp;
struct nctempchar1 *nctemp6353;
static struct nctempchar1 nctemp6354 = {{ 2}, (char*)"*\0"};
nctemp6353=&nctemp6354;
nctempchar1* nctemp6351= nctemp6353;
int nctemp6355=CodeEs(nctemp6349,nctemp6351);
}
else{
struct tree* nctemp6361= sp;
nctempchar1* nctemp6363=PtreeGetref(nctemp6361);
nctempchar1* nctemp6359= nctemp6363;
struct nctempchar1 *nctemp6366;
static struct nctempchar1 nctemp6367 = {{ 5}, (char*)"sref\0"};
nctemp6366=&nctemp6367;
nctempchar1* nctemp6364= nctemp6366;
int nctemp6368=LibeStrcmp(nctemp6359,nctemp6364);
int nctemp6356 = (nctemp6368 ==1);
if(nctemp6356)
{
struct tree* nctemp6371= sp;
struct nctempchar1 *nctemp6375;
static struct nctempchar1 nctemp6376 = {{ 8}, (char*)"struct \0"};
nctemp6375=&nctemp6376;
nctempchar1* nctemp6373= nctemp6375;
int nctemp6377=CodeEs(nctemp6371,nctemp6373);
struct tree* nctemp6379= sp;
struct tree* nctemp6383= sp;
nctempchar1* nctemp6385=PtreeGetype(nctemp6383);
nctempchar1* nctemp6381= nctemp6385;
int nctemp6386=CodeEs(nctemp6379,nctemp6381);
struct tree* nctemp6388= sp;
struct nctempchar1 *nctemp6392;
static struct nctempchar1 nctemp6393 = {{ 2}, (char*)"*\0"};
nctemp6392=&nctemp6393;
nctempchar1* nctemp6390= nctemp6392;
int nctemp6394=CodeEs(nctemp6388,nctemp6390);
}
else{
struct tree* nctemp6396= sp;
struct tree* nctemp6400= sp;
nctempchar1* nctemp6402=PtreeGetype(nctemp6400);
nctempchar1* nctemp6398= nctemp6402;
int nctemp6403=CodeEs(nctemp6396,nctemp6398);
}
}
struct tree* nctemp6405= sp;
struct nctempchar1 *nctemp6409;
static struct nctempchar1 nctemp6410 = {{ 2}, (char*)" \0"};
nctemp6409=&nctemp6410;
nctempchar1* nctemp6407= nctemp6409;
int nctemp6411=CodeEs(nctemp6405,nctemp6407);
struct tree* nctemp6413= sp;
nctempchar1* nctemp6415= ntemp;
int nctemp6418=CodeEs(nctemp6413,nctemp6415);
struct tree* nctemp6420= sp;
struct nctempchar1 *nctemp6424;
static struct nctempchar1 nctemp6425 = {{ 3}, (char*)"= \0"};
nctemp6424=&nctemp6425;
nctempchar1* nctemp6422= nctemp6424;
int nctemp6426=CodeEs(nctemp6420,nctemp6422);
struct tree* nctemp6428= sp;
nctempchar1* nctemp6430= temp;
int nctemp6433=CodeEs(nctemp6428,nctemp6430);
struct tree* nctemp6435= sp;
struct nctempchar1 *nctemp6439;
static struct nctempchar1 nctemp6440 = {{ 4}, (char*)";\n\0"};
nctemp6439=&nctemp6440;
nctempchar1* nctemp6437= nctemp6439;
int nctemp6441=CodeEs(nctemp6435,nctemp6437);
struct tree* nctemp6446= sp;
struct tree* nctemp6448=PtreeMvsister(nctemp6446);
sp =nctemp6448;
}
int nctemp6449 = (sp !=0);
nctemp6288=nctemp6449;}nctempchar1* nctemp6458=CodeMktemp();
ntemp=nctemp6458;
struct tree* nctemp6464= p;
nctempchar1* nctemp6466=PtreeGetref(nctemp6464);
nctempchar1* nctemp6462= nctemp6466;
struct nctempchar1 *nctemp6469;
static struct nctempchar1 nctemp6470 = {{ 5}, (char*)"aref\0"};
nctemp6469=&nctemp6470;
nctempchar1* nctemp6467= nctemp6469;
int nctemp6471=LibeStrcmp(nctemp6462,nctemp6467);
int nctemp6459 = (nctemp6471 ==1);
if(nctemp6459)
{
struct tree* nctemp6474= p;
struct nctempchar1 *nctemp6478;
static struct nctempchar1 nctemp6479 = {{ 7}, (char*)"nctemp\0"};
nctemp6478=&nctemp6479;
nctempchar1* nctemp6476= nctemp6478;
int nctemp6480=CodeEs(nctemp6474,nctemp6476);
struct tree* nctemp6482= p;
struct tree* nctemp6486= p;
nctempchar1* nctemp6488=PtreeGetype(nctemp6486);
nctempchar1* nctemp6484= nctemp6488;
int nctemp6489=CodeEs(nctemp6482,nctemp6484);
struct tree* nctemp6493= p;
int nctemp6495=PtreeGetrank(nctemp6493);
int nctemp6491= nctemp6495;
int nctemp6496=CodeEd(nctemp6491);
struct tree* nctemp6498= p;
struct nctempchar1 *nctemp6502;
static struct nctempchar1 nctemp6503 = {{ 2}, (char*)"*\0"};
nctemp6502=&nctemp6503;
nctempchar1* nctemp6500= nctemp6502;
int nctemp6504=CodeEs(nctemp6498,nctemp6500);
}
else{
struct tree* nctemp6510= p;
nctempchar1* nctemp6512=PtreeGetref(nctemp6510);
nctempchar1* nctemp6508= nctemp6512;
struct nctempchar1 *nctemp6515;
static struct nctempchar1 nctemp6516 = {{ 5}, (char*)"sref\0"};
nctemp6515=&nctemp6516;
nctempchar1* nctemp6513= nctemp6515;
int nctemp6517=LibeStrcmp(nctemp6508,nctemp6513);
int nctemp6505 = (nctemp6517 ==1);
if(nctemp6505)
{
struct tree* nctemp6520= p;
struct nctempchar1 *nctemp6524;
static struct nctempchar1 nctemp6525 = {{ 8}, (char*)"struct \0"};
nctemp6524=&nctemp6525;
nctempchar1* nctemp6522= nctemp6524;
int nctemp6526=CodeEs(nctemp6520,nctemp6522);
struct tree* nctemp6528= p;
struct tree* nctemp6532= p;
nctempchar1* nctemp6534=PtreeGetype(nctemp6532);
nctempchar1* nctemp6530= nctemp6534;
int nctemp6535=CodeEs(nctemp6528,nctemp6530);
struct tree* nctemp6537= p;
struct nctempchar1 *nctemp6541;
static struct nctempchar1 nctemp6542 = {{ 2}, (char*)"*\0"};
nctemp6541=&nctemp6542;
nctempchar1* nctemp6539= nctemp6541;
int nctemp6543=CodeEs(nctemp6537,nctemp6539);
}
else{
struct tree* nctemp6545= p;
struct tree* nctemp6549= p;
nctempchar1* nctemp6551=PtreeGetype(nctemp6549);
nctempchar1* nctemp6547= nctemp6551;
int nctemp6552=CodeEs(nctemp6545,nctemp6547);
}
}
struct tree* nctemp6554= p;
struct nctempchar1 *nctemp6558;
static struct nctempchar1 nctemp6559 = {{ 2}, (char*)" \0"};
nctemp6558=&nctemp6559;
nctempchar1* nctemp6556= nctemp6558;
int nctemp6560=CodeEs(nctemp6554,nctemp6556);
struct tree* nctemp6562= p;
nctempchar1* nctemp6564= ntemp;
int nctemp6567=CodeEs(nctemp6562,nctemp6564);
struct tree* nctemp6569= p;
struct nctempchar1 *nctemp6573;
static struct nctempchar1 nctemp6574 = {{ 2}, (char*)"=\0"};
nctemp6573=&nctemp6574;
nctempchar1* nctemp6571= nctemp6573;
int nctemp6575=CodeEs(nctemp6569,nctemp6571);
struct tree* nctemp6577= p;
struct symbol* nctemp6581= tp;
nctempchar1* nctemp6583=SymGetname(nctemp6581);
nctempchar1* nctemp6579= nctemp6583;
int nctemp6584=CodeEs(nctemp6577,nctemp6579);
struct tree* nctemp6586= p;
struct nctempchar1 *nctemp6590;
static struct nctempchar1 nctemp6591 = {{ 2}, (char*)"(\0"};
nctemp6590=&nctemp6591;
nctempchar1* nctemp6588= nctemp6590;
int nctemp6592=CodeEs(nctemp6586,nctemp6588);
struct tree* nctemp6597= p;
struct tree* nctemp6599=PtreeMvchild(nctemp6597);
sp =nctemp6599;
int nctemp6600 = (sp !=0);
if(nctemp6600)
{
struct tree* nctemp6608= sp;
struct tree* nctemp6610=PtreeMvchild(nctemp6608);
sp =nctemp6610;
}
int nctemp6611 = (sp !=0);
int nctemp6615=nctemp6611;
while(nctemp6615)
{{
struct tree* nctemp6617= p;
struct tree* nctemp6621= sp;
nctempchar1* nctemp6623=PtreeGetempr(nctemp6621);
nctempchar1* nctemp6619= nctemp6623;
int nctemp6624=CodeEs(nctemp6617,nctemp6619);
struct tree* nctemp6632= sp;
struct tree* nctemp6634=PtreeMvsister(nctemp6632);
sp =nctemp6634;
int nctemp6625 = (sp !=0);
if(nctemp6625)
{
struct tree* nctemp6637= p;
struct nctempchar1 *nctemp6641;
static struct nctempchar1 nctemp6642 = {{ 2}, (char*)",\0"};
nctemp6641=&nctemp6642;
nctempchar1* nctemp6639= nctemp6641;
int nctemp6643=CodeEs(nctemp6637,nctemp6639);
}
noargs = (noargs + 1);
}
int nctemp6644 = (sp !=0);
nctemp6615=nctemp6644;}struct tree* nctemp6649= p;
struct nctempchar1 *nctemp6653;
static struct nctempchar1 nctemp6654 = {{ 5}, (char*)");\n\0"};
nctemp6653=&nctemp6654;
nctempchar1* nctemp6651= nctemp6653;
int nctemp6655=CodeEs(nctemp6649,nctemp6651);
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
nctempchar1* nctemp6663=CodeMktemp();
pointer=nctemp6663;
nctempchar1* nctemp6669=CodeMktemp();
descr=nctemp6669;
struct tree* nctemp6675= p;
nctempchar1* nctemp6677=PtreeGetype(nctemp6675);
type=nctemp6677;
struct tree* nctemp6683= p;
nctempchar1* nctemp6685=PtreeGetname(nctemp6683);
nctempchar1* nctemp6681= nctemp6685;
struct nctempchar1 *nctemp6688;
static struct nctempchar1 nctemp6689 = {{ 5}, (char*)"cast\0"};
nctemp6688=&nctemp6689;
nctempchar1* nctemp6686= nctemp6688;
int nctemp6690=LibeStrcmp(nctemp6681,nctemp6686);
int nctemp6678 = (nctemp6690 ==1);
if(nctemp6678)
{
struct tree* nctemp6696= p;
struct tree* nctemp6698=PtreeMvchild(nctemp6696);
np =nctemp6698;
struct tree* nctemp6703= np;
struct tree* nctemp6705=PtreeMvsister(nctemp6703);
sp =nctemp6705;
struct tree* nctemp6711= sp;
nctempchar1* nctemp6713=CodeExpr(nctemp6711);
expr=nctemp6713;
struct tree* nctemp6719= np;
nctempchar1* nctemp6721=PtreeGetref(nctemp6719);
nctempchar1* nctemp6717= nctemp6721;
struct nctempchar1 *nctemp6724;
static struct nctempchar1 nctemp6725 = {{ 5}, (char*)"sref\0"};
nctemp6724=&nctemp6725;
nctempchar1* nctemp6722= nctemp6724;
int nctemp6726=LibeStrcmp(nctemp6717,nctemp6722);
int nctemp6714 = (nctemp6726 ==1);
if(nctemp6714)
{
nctempchar1* nctemp6733=CodeMktemp();
tmp=nctemp6733;
struct tree* nctemp6735= p;
nctempchar1* nctemp6737= type;
int nctemp6740=CodeEs(nctemp6735,nctemp6737);
struct tree* nctemp6742= p;
struct nctempchar1 *nctemp6746;
static struct nctempchar1 nctemp6747 = {{ 2}, (char*)" \0"};
nctemp6746=&nctemp6747;
nctempchar1* nctemp6744= nctemp6746;
int nctemp6748=CodeEs(nctemp6742,nctemp6744);
struct tree* nctemp6750= p;
nctempchar1* nctemp6752= tmp;
int nctemp6755=CodeEs(nctemp6750,nctemp6752);
struct tree* nctemp6757= p;
struct nctempchar1 *nctemp6761;
static struct nctempchar1 nctemp6762 = {{ 2}, (char*)"=\0"};
nctemp6761=&nctemp6762;
nctempchar1* nctemp6759= nctemp6761;
int nctemp6763=CodeEs(nctemp6757,nctemp6759);
struct tree* nctemp6765= p;
struct nctempchar1 *nctemp6769;
static struct nctempchar1 nctemp6770 = {{ 9}, (char*)"(struct \0"};
nctemp6769=&nctemp6770;
nctempchar1* nctemp6767= nctemp6769;
int nctemp6771=CodeEs(nctemp6765,nctemp6767);
struct tree* nctemp6773= p;
struct tree* nctemp6777= np;
nctempchar1* nctemp6779=PtreeGetype(nctemp6777);
nctempchar1* nctemp6775= nctemp6779;
int nctemp6780=CodeEs(nctemp6773,nctemp6775);
struct tree* nctemp6782= p;
struct nctempchar1 *nctemp6786;
static struct nctempchar1 nctemp6787 = {{ 4}, (char*)"*)(\0"};
nctemp6786=&nctemp6787;
nctempchar1* nctemp6784= nctemp6786;
int nctemp6788=CodeEs(nctemp6782,nctemp6784);
struct tree* nctemp6790= p;
nctempchar1* nctemp6792= expr;
int nctemp6795=CodeEs(nctemp6790,nctemp6792);
struct tree* nctemp6797= p;
struct nctempchar1 *nctemp6801;
static struct nctempchar1 nctemp6802 = {{ 5}, (char*)");\n\0"};
nctemp6801=&nctemp6802;
nctempchar1* nctemp6799= nctemp6801;
int nctemp6803=CodeEs(nctemp6797,nctemp6799);
}
else{
struct tree* nctemp6809= np;
nctempchar1* nctemp6811=PtreeGetref(nctemp6809);
nctempchar1* nctemp6807= nctemp6811;
struct nctempchar1 *nctemp6814;
static struct nctempchar1 nctemp6815 = {{ 5}, (char*)"aref\0"};
nctemp6814=&nctemp6815;
nctempchar1* nctemp6812= nctemp6814;
int nctemp6816=LibeStrcmp(nctemp6807,nctemp6812);
int nctemp6804 = (nctemp6816 ==1);
if(nctemp6804)
{
struct tree* nctemp6822= np;
struct tree* nctemp6824=PtreeMvchild(nctemp6822);
np =nctemp6824;
struct tree* nctemp6829= np;
struct tree* nctemp6831=PtreeMvchild(nctemp6829);
np =nctemp6831;
struct tree* nctemp6836= np;
struct tree* nctemp6838=PtreeMvchild(nctemp6836);
np =nctemp6838;
struct tree* nctemp6843= np;
struct tree* nctemp6845=PtreeMvchild(nctemp6843);
np =nctemp6845;
tp = np;
rank = 1;
struct tree* nctemp6853= np;
struct tree* nctemp6855=PtreeMvsister(nctemp6853);
np =nctemp6855;
int nctemp6846 = (np !=0);
int nctemp6857=nctemp6846;
while(nctemp6857)
{{
rank = (rank + 1);
}
struct tree* nctemp6865= np;
struct tree* nctemp6867=PtreeMvsister(nctemp6865);
np =nctemp6867;
int nctemp6858 = (np !=0);
nctemp6857=nctemp6858;}int nctemp6869 = (rank > 4);
if(nctemp6869)
{
struct nctempchar1 *nctemp6876;
static struct nctempchar1 nctemp6877 = {{ 29}, (char*)"Array dimension is too large\0"};
nctemp6876=&nctemp6877;
nctempchar1* nctemp6874= nctemp6876;
int nctemp6878=CodeError(nctemp6874);
}
p = tp;
struct tree* nctemp6880= p;
struct nctempchar1 *nctemp6884;
static struct nctempchar1 nctemp6885 = {{ 7}, (char*)"nctemp\0"};
nctemp6884=&nctemp6885;
nctempchar1* nctemp6882= nctemp6884;
int nctemp6886=CodeEs(nctemp6880,nctemp6882);
struct tree* nctemp6888= p;
nctempchar1* nctemp6890= type;
int nctemp6893=CodeEs(nctemp6888,nctemp6890);
int nctemp6895= rank;
int nctemp6897=CodeEd(nctemp6895);
struct tree* nctemp6899= p;
struct nctempchar1 *nctemp6903;
static struct nctempchar1 nctemp6904 = {{ 2}, (char*)" \0"};
nctemp6903=&nctemp6904;
nctempchar1* nctemp6901= nctemp6903;
int nctemp6905=CodeEs(nctemp6899,nctemp6901);
struct tree* nctemp6907= sp;
nctempchar1* nctemp6909= descr;
int nctemp6912=CodeEs(nctemp6907,nctemp6909);
struct tree* nctemp6914= sp;
struct nctempchar1 *nctemp6918;
static struct nctempchar1 nctemp6919 = {{ 4}, (char*)";\n\0"};
nctemp6918=&nctemp6919;
nctempchar1* nctemp6916= nctemp6918;
int nctemp6920=CodeEs(nctemp6914,nctemp6916);
struct tree* nctemp6922= p;
struct nctempchar1 *nctemp6926;
static struct nctempchar1 nctemp6927 = {{ 7}, (char*)"nctemp\0"};
nctemp6926=&nctemp6927;
nctempchar1* nctemp6924= nctemp6926;
int nctemp6928=CodeEs(nctemp6922,nctemp6924);
struct tree* nctemp6930= p;
nctempchar1* nctemp6932= type;
int nctemp6935=CodeEs(nctemp6930,nctemp6932);
int nctemp6937= rank;
int nctemp6939=CodeEd(nctemp6937);
struct tree* nctemp6941= p;
struct nctempchar1 *nctemp6945;
static struct nctempchar1 nctemp6946 = {{ 3}, (char*)" *\0"};
nctemp6945=&nctemp6946;
nctempchar1* nctemp6943= nctemp6945;
int nctemp6947=CodeEs(nctemp6941,nctemp6943);
struct tree* nctemp6949= sp;
nctempchar1* nctemp6951= pointer;
int nctemp6954=CodeEs(nctemp6949,nctemp6951);
struct tree* nctemp6956= p;
struct nctempchar1 *nctemp6960;
static struct nctempchar1 nctemp6961 = {{ 4}, (char*)";\n\0"};
nctemp6960=&nctemp6961;
nctempchar1* nctemp6958= nctemp6960;
int nctemp6962=CodeEs(nctemp6956,nctemp6958);
struct tree* nctemp6964= sp;
nctempchar1* nctemp6966= descr;
int nctemp6969=CodeEs(nctemp6964,nctemp6966);
struct tree* nctemp6971= sp;
struct nctempchar1 *nctemp6975;
static struct nctempchar1 nctemp6976 = {{ 2}, (char*)"=\0"};
nctemp6975=&nctemp6976;
nctempchar1* nctemp6973= nctemp6975;
int nctemp6977=CodeEs(nctemp6971,nctemp6973);
struct tree* nctemp6979= sp;
struct nctempchar1 *nctemp6983;
static struct nctempchar1 nctemp6984 = {{ 3}, (char*)"*(\0"};
nctemp6983=&nctemp6984;
nctempchar1* nctemp6981= nctemp6983;
int nctemp6985=CodeEs(nctemp6979,nctemp6981);
struct tree* nctemp6987= p;
struct nctempchar1 *nctemp6991;
static struct nctempchar1 nctemp6992 = {{ 7}, (char*)"nctemp\0"};
nctemp6991=&nctemp6992;
nctempchar1* nctemp6989= nctemp6991;
int nctemp6993=CodeEs(nctemp6987,nctemp6989);
struct tree* nctemp6995= sp;
nctempchar1* nctemp6997= type;
int nctemp7000=CodeEs(nctemp6995,nctemp6997);
int nctemp7002= rank;
int nctemp7004=CodeEd(nctemp7002);
struct tree* nctemp7006= sp;
struct nctempchar1 *nctemp7010;
static struct nctempchar1 nctemp7011 = {{ 4}, (char*)"*)(\0"};
nctemp7010=&nctemp7011;
nctempchar1* nctemp7008= nctemp7010;
int nctemp7012=CodeEs(nctemp7006,nctemp7008);
struct tree* nctemp7014= sp;
nctempchar1* nctemp7016= expr;
int nctemp7019=CodeEs(nctemp7014,nctemp7016);
struct tree* nctemp7021= sp;
struct nctempchar1 *nctemp7025;
static struct nctempchar1 nctemp7026 = {{ 5}, (char*)");\n\0"};
nctemp7025=&nctemp7026;
nctempchar1* nctemp7023= nctemp7025;
int nctemp7027=CodeEs(nctemp7021,nctemp7023);
p = tp;
i = 0;
int nctemp7028 = (p !=0);
int nctemp7032=nctemp7028;
while(nctemp7032)
{{
struct tree* nctemp7038= p;
nctempchar1* nctemp7040=CodeExpr(nctemp7038);
dim=nctemp7040;
struct tree* nctemp7042= sp;
nctempchar1* nctemp7044= descr;
int nctemp7047=CodeEs(nctemp7042,nctemp7044);
struct tree* nctemp7049= sp;
struct nctempchar1 *nctemp7053;
static struct nctempchar1 nctemp7054 = {{ 3}, (char*)".d\0"};
nctemp7053=&nctemp7054;
nctempchar1* nctemp7051= nctemp7053;
int nctemp7055=CodeEs(nctemp7049,nctemp7051);
struct tree* nctemp7057= sp;
struct nctempchar1 *nctemp7061;
static struct nctempchar1 nctemp7062 = {{ 2}, (char*)"[\0"};
nctemp7061=&nctemp7062;
nctempchar1* nctemp7059= nctemp7061;
int nctemp7063=CodeEs(nctemp7057,nctemp7059);
int nctemp7065= i;
int nctemp7067=CodeEd(nctemp7065);
struct tree* nctemp7069= sp;
struct nctempchar1 *nctemp7073;
static struct nctempchar1 nctemp7074 = {{ 3}, (char*)"]=\0"};
nctemp7073=&nctemp7074;
nctempchar1* nctemp7071= nctemp7073;
int nctemp7075=CodeEs(nctemp7069,nctemp7071);
struct tree* nctemp7077= sp;
nctempchar1* nctemp7079= dim;
int nctemp7082=CodeEs(nctemp7077,nctemp7079);
struct tree* nctemp7084= sp;
struct nctempchar1 *nctemp7088;
static struct nctempchar1 nctemp7089 = {{ 4}, (char*)";\n\0"};
nctemp7088=&nctemp7089;
nctempchar1* nctemp7086= nctemp7088;
int nctemp7090=CodeEs(nctemp7084,nctemp7086);
i = (i + 1);
struct tree* nctemp7095= p;
struct tree* nctemp7097=PtreeMvsister(nctemp7095);
p =nctemp7097;
}
int nctemp7098 = (p !=0);
nctemp7032=nctemp7098;}struct tree* nctemp7103= sp;
nctempchar1* nctemp7105= pointer;
int nctemp7108=CodeEs(nctemp7103,nctemp7105);
struct tree* nctemp7110= sp;
struct nctempchar1 *nctemp7114;
static struct nctempchar1 nctemp7115 = {{ 3}, (char*)"=&\0"};
nctemp7114=&nctemp7115;
nctempchar1* nctemp7112= nctemp7114;
int nctemp7116=CodeEs(nctemp7110,nctemp7112);
struct tree* nctemp7118= sp;
nctempchar1* nctemp7120= descr;
int nctemp7123=CodeEs(nctemp7118,nctemp7120);
struct tree* nctemp7125= sp;
struct nctempchar1 *nctemp7129;
static struct nctempchar1 nctemp7130 = {{ 4}, (char*)";\n\0"};
nctemp7129=&nctemp7130;
nctempchar1* nctemp7127= nctemp7129;
int nctemp7131=CodeEs(nctemp7125,nctemp7127);
}
else{
struct tree* nctemp7133= p;
nctempchar1* nctemp7135= type;
int nctemp7138=CodeEs(nctemp7133,nctemp7135);
struct tree* nctemp7140= p;
struct nctempchar1 *nctemp7144;
static struct nctempchar1 nctemp7145 = {{ 2}, (char*)" \0"};
nctemp7144=&nctemp7145;
nctempchar1* nctemp7142= nctemp7144;
int nctemp7146=CodeEs(nctemp7140,nctemp7142);
struct tree* nctemp7148= p;
nctempchar1* nctemp7150= pointer;
int nctemp7153=CodeEs(nctemp7148,nctemp7150);
struct tree* nctemp7155= p;
struct nctempchar1 *nctemp7159;
static struct nctempchar1 nctemp7160 = {{ 2}, (char*)"=\0"};
nctemp7159=&nctemp7160;
nctempchar1* nctemp7157= nctemp7159;
int nctemp7161=CodeEs(nctemp7155,nctemp7157);
struct tree* nctemp7163= p;
struct nctempchar1 *nctemp7167;
static struct nctempchar1 nctemp7168 = {{ 2}, (char*)"(\0"};
nctemp7167=&nctemp7168;
nctempchar1* nctemp7165= nctemp7167;
int nctemp7169=CodeEs(nctemp7163,nctemp7165);
struct tree* nctemp7171= p;
struct tree* nctemp7175= np;
nctempchar1* nctemp7177=PtreeGetype(nctemp7175);
nctempchar1* nctemp7173= nctemp7177;
int nctemp7178=CodeEs(nctemp7171,nctemp7173);
struct tree* nctemp7180= p;
struct nctempchar1 *nctemp7184;
static struct nctempchar1 nctemp7185 = {{ 3}, (char*)")(\0"};
nctemp7184=&nctemp7185;
nctempchar1* nctemp7182= nctemp7184;
int nctemp7186=CodeEs(nctemp7180,nctemp7182);
struct tree* nctemp7188= p;
nctempchar1* nctemp7190= expr;
int nctemp7193=CodeEs(nctemp7188,nctemp7190);
struct tree* nctemp7195= p;
struct nctempchar1 *nctemp7199;
static struct nctempchar1 nctemp7200 = {{ 5}, (char*)");\n\0"};
nctemp7199=&nctemp7200;
nctempchar1* nctemp7197= nctemp7199;
int nctemp7201=CodeEs(nctemp7195,nctemp7197);
}
}
}
return pointer;
}
nctempchar1 * CodePrimexpr (struct tree* p)
{
struct tree* nctemp7209= p;
nctempchar1* nctemp7211=PtreeGetname(nctemp7209);
nctempchar1* nctemp7207= nctemp7211;
struct nctempchar1 *nctemp7214;
static struct nctempchar1 nctemp7215 = {{ 11}, (char*)"identifier\0"};
nctemp7214=&nctemp7215;
nctempchar1* nctemp7212= nctemp7214;
int nctemp7216=LibeStrcmp(nctemp7207,nctemp7212);
int nctemp7204 = (nctemp7216 ==1);
if(nctemp7204)
{
struct tree* nctemp7219= p;
nctempchar1* nctemp7221=CodeIdent(nctemp7219);
return nctemp7221;
}
else{
struct tree* nctemp7227= p;
nctempchar1* nctemp7229=PtreeGetname(nctemp7227);
nctempchar1* nctemp7225= nctemp7229;
struct nctempchar1 *nctemp7232;
static struct nctempchar1 nctemp7233 = {{ 4}, (char*)"new\0"};
nctemp7232=&nctemp7233;
nctempchar1* nctemp7230= nctemp7232;
int nctemp7234=LibeStrcmp(nctemp7225,nctemp7230);
int nctemp7222 = (nctemp7234 ==1);
if(nctemp7222)
{
struct tree* nctemp7237= p;
nctempchar1* nctemp7239=CodeNew(nctemp7237);
return nctemp7239;
}
else{
struct tree* nctemp7245= p;
nctempchar1* nctemp7247=PtreeGetname(nctemp7245);
nctempchar1* nctemp7243= nctemp7247;
struct nctempchar1 *nctemp7250;
static struct nctempchar1 nctemp7251 = {{ 7}, (char*)"delete\0"};
nctemp7250=&nctemp7251;
nctempchar1* nctemp7248= nctemp7250;
int nctemp7252=LibeStrcmp(nctemp7243,nctemp7248);
int nctemp7240 = (nctemp7252 ==1);
if(nctemp7240)
{
struct tree* nctemp7255= p;
nctempchar1* nctemp7257=CodeDelete(nctemp7255);
return nctemp7257;
}
else{
struct tree* nctemp7263= p;
nctempchar1* nctemp7265=PtreeGetname(nctemp7263);
nctempchar1* nctemp7261= nctemp7265;
struct nctempchar1 *nctemp7268;
static struct nctempchar1 nctemp7269 = {{ 4}, (char*)"len\0"};
nctemp7268=&nctemp7269;
nctempchar1* nctemp7266= nctemp7268;
int nctemp7270=LibeStrcmp(nctemp7261,nctemp7266);
int nctemp7258 = (nctemp7270 ==1);
if(nctemp7258)
{
struct tree* nctemp7273= p;
nctempchar1* nctemp7275=CodeLen(nctemp7273);
return nctemp7275;
}
else{
struct tree* nctemp7281= p;
nctempchar1* nctemp7283=PtreeGetname(nctemp7281);
nctempchar1* nctemp7279= nctemp7283;
struct nctempchar1 *nctemp7286;
static struct nctempchar1 nctemp7287 = {{ 6}, (char*)"cmplx\0"};
nctemp7286=&nctemp7287;
nctempchar1* nctemp7284= nctemp7286;
int nctemp7288=LibeStrcmp(nctemp7279,nctemp7284);
int nctemp7276 = (nctemp7288 ==1);
if(nctemp7276)
{
struct tree* nctemp7291= p;
nctempchar1* nctemp7293=CodeCmplx(nctemp7291);
return nctemp7293;
}
else{
struct tree* nctemp7299= p;
nctempchar1* nctemp7301=PtreeGetname(nctemp7299);
nctempchar1* nctemp7297= nctemp7301;
struct nctempchar1 *nctemp7304;
static struct nctempchar1 nctemp7305 = {{ 3}, (char*)"im\0"};
nctemp7304=&nctemp7305;
nctempchar1* nctemp7302= nctemp7304;
int nctemp7306=LibeStrcmp(nctemp7297,nctemp7302);
int nctemp7294 = (nctemp7306 ==1);
if(nctemp7294)
{
struct tree* nctemp7309= p;
nctempchar1* nctemp7311=CodeIm(nctemp7309);
return nctemp7311;
}
else{
struct tree* nctemp7317= p;
nctempchar1* nctemp7319=PtreeGetname(nctemp7317);
nctempchar1* nctemp7315= nctemp7319;
struct nctempchar1 *nctemp7322;
static struct nctempchar1 nctemp7323 = {{ 3}, (char*)"re\0"};
nctemp7322=&nctemp7323;
nctempchar1* nctemp7320= nctemp7322;
int nctemp7324=LibeStrcmp(nctemp7315,nctemp7320);
int nctemp7312 = (nctemp7324 ==1);
if(nctemp7312)
{
struct tree* nctemp7327= p;
nctempchar1* nctemp7329=CodeRe(nctemp7327);
return nctemp7329;
}
else{
struct tree* nctemp7335= p;
nctempchar1* nctemp7337=PtreeGetname(nctemp7335);
nctempchar1* nctemp7333= nctemp7337;
struct nctempchar1 *nctemp7340;
static struct nctempchar1 nctemp7341 = {{ 6}, (char*)"fcall\0"};
nctemp7340=&nctemp7341;
nctempchar1* nctemp7338= nctemp7340;
int nctemp7342=LibeStrcmp(nctemp7333,nctemp7338);
int nctemp7330 = (nctemp7342 ==1);
if(nctemp7330)
{
struct tree* nctemp7345= p;
nctempchar1* nctemp7347=CodeFcall(nctemp7345);
return nctemp7347;
}
else{
struct tree* nctemp7353= p;
nctempchar1* nctemp7355=PtreeGetname(nctemp7353);
nctempchar1* nctemp7351= nctemp7355;
struct nctempchar1 *nctemp7358;
static struct nctempchar1 nctemp7359 = {{ 5}, (char*)"cast\0"};
nctemp7358=&nctemp7359;
nctempchar1* nctemp7356= nctemp7358;
int nctemp7360=LibeStrcmp(nctemp7351,nctemp7356);
int nctemp7348 = (nctemp7360 ==1);
if(nctemp7348)
{
struct tree* nctemp7363= p;
nctempchar1* nctemp7365=CodeCast(nctemp7363);
return nctemp7365;
}
else{
struct tree* nctemp7371= p;
nctempchar1* nctemp7373=PtreeGetname(nctemp7371);
nctempchar1* nctemp7369= nctemp7373;
struct nctempchar1 *nctemp7376;
static struct nctempchar1 nctemp7377 = {{ 10}, (char*)"iconstant\0"};
nctemp7376=&nctemp7377;
nctempchar1* nctemp7374= nctemp7376;
int nctemp7378=LibeStrcmp(nctemp7369,nctemp7374);
int nctemp7366 = (nctemp7378 ==1);
if(nctemp7366)
{
struct tree* nctemp7381= p;
nctempchar1* nctemp7383=PtreeGetdef(nctemp7381);
return nctemp7383;
}
else{
struct tree* nctemp7389= p;
nctempchar1* nctemp7391=PtreeGetname(nctemp7389);
nctempchar1* nctemp7387= nctemp7391;
struct nctempchar1 *nctemp7394;
static struct nctempchar1 nctemp7395 = {{ 10}, (char*)"rconstant\0"};
nctemp7394=&nctemp7395;
nctempchar1* nctemp7392= nctemp7394;
int nctemp7396=LibeStrcmp(nctemp7387,nctemp7392);
int nctemp7384 = (nctemp7396 ==1);
if(nctemp7384)
{
struct tree* nctemp7399= p;
nctempchar1* nctemp7401=PtreeGetdef(nctemp7399);
return nctemp7401;
}
else{
struct tree* nctemp7407= p;
nctempchar1* nctemp7409=PtreeGetname(nctemp7407);
nctempchar1* nctemp7405= nctemp7409;
struct nctempchar1 *nctemp7412;
static struct nctempchar1 nctemp7413 = {{ 10}, (char*)"sconstant\0"};
nctemp7412=&nctemp7413;
nctempchar1* nctemp7410= nctemp7412;
int nctemp7414=LibeStrcmp(nctemp7405,nctemp7410);
int nctemp7402 = (nctemp7414 ==1);
if(nctemp7402)
{
struct tree* nctemp7417= p;
nctempchar1* nctemp7419=CodeSconstant(nctemp7417);
return nctemp7419;
}
else{
struct tree* nctemp7421= p;
nctempchar1* nctemp7423=CodeBinexpr(nctemp7421);
return nctemp7423;
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
nctempchar1* nctemp7429=CodeMktemp();
tempr=nctemp7429;
struct tree* nctemp7435= p;
nctempchar1* nctemp7437=PtreeGetname(nctemp7435);
nctempchar1* nctemp7433= nctemp7437;
struct nctempchar1 *nctemp7440;
static struct nctempchar1 nctemp7441 = {{ 7}, (char*)"unexpr\0"};
nctemp7440=&nctemp7441;
nctempchar1* nctemp7438= nctemp7440;
int nctemp7442=LibeStrcmp(nctemp7433,nctemp7438);
int nctemp7430 = (nctemp7442 ==1);
if(nctemp7430)
{
struct tree* nctemp7449= p;
nctempchar1* nctemp7451=PtreeGetype(nctemp7449);
nctempchar1* nctemp7447= nctemp7451;
struct nctempchar1 *nctemp7454;
static struct nctempchar1 nctemp7455 = {{ 8}, (char*)"complex\0"};
nctemp7454=&nctemp7455;
nctempchar1* nctemp7452= nctemp7454;
int nctemp7456=LibeStrcmp(nctemp7447,nctemp7452);
int nctemp7444 = (nctemp7456 ==1);
if(nctemp7444)
{
struct tree* nctemp7465= p;
struct tree* nctemp7467=PtreeMvchild(nctemp7465);
struct tree* nctemp7463= nctemp7467;
nctempchar1* nctemp7468=CodePrimexpr(nctemp7463);
tmp=nctemp7468;
struct tree* nctemp7470= p;
struct nctempchar1 *nctemp7474;
static struct nctempchar1 nctemp7475 = {{ 4}, (char*)";\n\0"};
nctemp7474=&nctemp7475;
nctempchar1* nctemp7472= nctemp7474;
int nctemp7476=CodeEs(nctemp7470,nctemp7472);
struct tree* nctemp7478= p;
nctempchar1* nctemp7480= tempr;
int nctemp7483=CodeEs(nctemp7478,nctemp7480);
struct tree* nctemp7485= p;
struct nctempchar1 *nctemp7489;
static struct nctempchar1 nctemp7490 = {{ 3}, (char*)".r\0"};
nctemp7489=&nctemp7490;
nctempchar1* nctemp7487= nctemp7489;
int nctemp7491=CodeEs(nctemp7485,nctemp7487);
struct tree* nctemp7493= p;
struct nctempchar1 *nctemp7497;
static struct nctempchar1 nctemp7498 = {{ 4}, (char*)"= -\0"};
nctemp7497=&nctemp7498;
nctempchar1* nctemp7495= nctemp7497;
int nctemp7499=CodeEs(nctemp7493,nctemp7495);
struct tree* nctemp7501= p;
nctempchar1* nctemp7503= tmp;
int nctemp7506=CodeEs(nctemp7501,nctemp7503);
struct tree* nctemp7508= p;
struct nctempchar1 *nctemp7512;
static struct nctempchar1 nctemp7513 = {{ 3}, (char*)".r\0"};
nctemp7512=&nctemp7513;
nctempchar1* nctemp7510= nctemp7512;
int nctemp7514=CodeEs(nctemp7508,nctemp7510);
struct tree* nctemp7516= p;
struct nctempchar1 *nctemp7520;
static struct nctempchar1 nctemp7521 = {{ 4}, (char*)";\n\0"};
nctemp7520=&nctemp7521;
nctempchar1* nctemp7518= nctemp7520;
int nctemp7522=CodeEs(nctemp7516,nctemp7518);
struct tree* nctemp7524= p;
nctempchar1* nctemp7526= tempr;
int nctemp7529=CodeEs(nctemp7524,nctemp7526);
struct tree* nctemp7531= p;
struct nctempchar1 *nctemp7535;
static struct nctempchar1 nctemp7536 = {{ 3}, (char*)".i\0"};
nctemp7535=&nctemp7536;
nctempchar1* nctemp7533= nctemp7535;
int nctemp7537=CodeEs(nctemp7531,nctemp7533);
struct tree* nctemp7539= p;
struct nctempchar1 *nctemp7543;
static struct nctempchar1 nctemp7544 = {{ 4}, (char*)"= -\0"};
nctemp7543=&nctemp7544;
nctempchar1* nctemp7541= nctemp7543;
int nctemp7545=CodeEs(nctemp7539,nctemp7541);
struct tree* nctemp7547= p;
nctempchar1* nctemp7549= tmp;
int nctemp7552=CodeEs(nctemp7547,nctemp7549);
struct tree* nctemp7554= p;
struct nctempchar1 *nctemp7558;
static struct nctempchar1 nctemp7559 = {{ 3}, (char*)".i\0"};
nctemp7558=&nctemp7559;
nctempchar1* nctemp7556= nctemp7558;
int nctemp7560=CodeEs(nctemp7554,nctemp7556);
struct tree* nctemp7562= p;
struct nctempchar1 *nctemp7566;
static struct nctempchar1 nctemp7567 = {{ 4}, (char*)";\n\0"};
nctemp7566=&nctemp7567;
nctempchar1* nctemp7564= nctemp7566;
int nctemp7568=CodeEs(nctemp7562,nctemp7564);
return tempr;
}
else{
struct tree* nctemp7578= p;
struct tree* nctemp7580=PtreeMvchild(nctemp7578);
struct tree* nctemp7576= nctemp7580;
nctempchar1* nctemp7581=CodePrimexpr(nctemp7576);
tmp=nctemp7581;
struct tree* nctemp7583= p;
struct tree* nctemp7587= p;
nctempchar1* nctemp7589=PtreeGetype(nctemp7587);
nctempchar1* nctemp7585= nctemp7589;
int nctemp7590=CodeEs(nctemp7583,nctemp7585);
struct tree* nctemp7592= p;
struct nctempchar1 *nctemp7596;
static struct nctempchar1 nctemp7597 = {{ 2}, (char*)" \0"};
nctemp7596=&nctemp7597;
nctempchar1* nctemp7594= nctemp7596;
int nctemp7598=CodeEs(nctemp7592,nctemp7594);
struct tree* nctemp7600= p;
nctempchar1* nctemp7602= tempr;
int nctemp7605=CodeEs(nctemp7600,nctemp7602);
struct tree* nctemp7607= p;
struct nctempchar1 *nctemp7611;
static struct nctempchar1 nctemp7612 = {{ 4}, (char*)"= -\0"};
nctemp7611=&nctemp7612;
nctempchar1* nctemp7609= nctemp7611;
int nctemp7613=CodeEs(nctemp7607,nctemp7609);
struct tree* nctemp7615= p;
nctempchar1* nctemp7617= tmp;
int nctemp7620=CodeEs(nctemp7615,nctemp7617);
struct tree* nctemp7622= p;
struct nctempchar1 *nctemp7626;
static struct nctempchar1 nctemp7627 = {{ 4}, (char*)";\n\0"};
nctemp7626=&nctemp7627;
nctempchar1* nctemp7624= nctemp7626;
int nctemp7628=CodeEs(nctemp7622,nctemp7624);
return tempr;
}
}
else{
struct tree* nctemp7632= p;
nctempchar1* nctemp7634=CodePrimexpr(nctemp7632);
return nctemp7634;
}
}
nctempchar1 * CodeAddexpr (struct tree* p,nctempchar1 *lval,nctempchar1 *rval)
{
nctempchar1 *type;
nctempchar1 *tempr;
nctempchar1 *opr;
struct tree* nctemp7640= p;
nctempchar1* nctemp7642=PtreeGetype(nctemp7640);
type=nctemp7642;
nctempchar1* nctemp7648=CodeMktemp();
tempr=nctemp7648;
struct tree* nctemp7654= p;
nctempchar1* nctemp7656=PtreeGetdef(nctemp7654);
opr=nctemp7656;
nctempchar1* nctemp7660= type;
struct nctempchar1 *nctemp7665;
static struct nctempchar1 nctemp7666 = {{ 8}, (char*)"complex\0"};
nctemp7665=&nctemp7666;
nctempchar1* nctemp7663= nctemp7665;
int nctemp7667=LibeStrcmp(nctemp7660,nctemp7663);
int nctemp7657 = (nctemp7667 ==1);
if(nctemp7657)
{
nctempchar1* nctemp7675= opr;
struct nctempchar1 *nctemp7680;
static struct nctempchar1 nctemp7681 = {{ 2}, (char*)"+\0"};
nctemp7680=&nctemp7681;
nctempchar1* nctemp7678= nctemp7680;
int nctemp7682=LibeStrcmp(nctemp7675,nctemp7678);
int nctemp7672 = (nctemp7682 ==1);
nctempchar1* nctemp7688= opr;
struct nctempchar1 *nctemp7693;
static struct nctempchar1 nctemp7694 = {{ 2}, (char*)"-\0"};
nctemp7693=&nctemp7694;
nctempchar1* nctemp7691= nctemp7693;
int nctemp7695=LibeStrcmp(nctemp7688,nctemp7691);
int nctemp7685 = (nctemp7695 ==1);
int nctemp7669 = (nctemp7672 || nctemp7685);
if(nctemp7669)
{
struct tree* nctemp7698= p;
nctempchar1* nctemp7700= type;
int nctemp7703=CodeEs(nctemp7698,nctemp7700);
struct tree* nctemp7705= p;
struct nctempchar1 *nctemp7709;
static struct nctempchar1 nctemp7710 = {{ 2}, (char*)" \0"};
nctemp7709=&nctemp7710;
nctempchar1* nctemp7707= nctemp7709;
int nctemp7711=CodeEs(nctemp7705,nctemp7707);
struct tree* nctemp7713= p;
nctempchar1* nctemp7715= tempr;
int nctemp7718=CodeEs(nctemp7713,nctemp7715);
struct tree* nctemp7720= p;
struct nctempchar1 *nctemp7724;
static struct nctempchar1 nctemp7725 = {{ 3}, (char*)".r\0"};
nctemp7724=&nctemp7725;
nctempchar1* nctemp7722= nctemp7724;
int nctemp7726=CodeEs(nctemp7720,nctemp7722);
struct tree* nctemp7728= p;
struct nctempchar1 *nctemp7732;
static struct nctempchar1 nctemp7733 = {{ 4}, (char*)" = \0"};
nctemp7732=&nctemp7733;
nctempchar1* nctemp7730= nctemp7732;
int nctemp7734=CodeEs(nctemp7728,nctemp7730);
struct tree* nctemp7736= p;
nctempchar1* nctemp7738= lval;
int nctemp7741=CodeEs(nctemp7736,nctemp7738);
struct tree* nctemp7743= p;
struct nctempchar1 *nctemp7747;
static struct nctempchar1 nctemp7748 = {{ 3}, (char*)".r\0"};
nctemp7747=&nctemp7748;
nctempchar1* nctemp7745= nctemp7747;
int nctemp7749=CodeEs(nctemp7743,nctemp7745);
struct tree* nctemp7751= p;
struct nctempchar1 *nctemp7755;
static struct nctempchar1 nctemp7756 = {{ 2}, (char*)" \0"};
nctemp7755=&nctemp7756;
nctempchar1* nctemp7753= nctemp7755;
int nctemp7757=CodeEs(nctemp7751,nctemp7753);
struct tree* nctemp7759= p;
struct tree* nctemp7763= p;
nctempchar1* nctemp7765=PtreeGetdef(nctemp7763);
nctempchar1* nctemp7761= nctemp7765;
int nctemp7766=CodeEs(nctemp7759,nctemp7761);
struct tree* nctemp7768= p;
struct nctempchar1 *nctemp7772;
static struct nctempchar1 nctemp7773 = {{ 2}, (char*)" \0"};
nctemp7772=&nctemp7773;
nctempchar1* nctemp7770= nctemp7772;
int nctemp7774=CodeEs(nctemp7768,nctemp7770);
struct tree* nctemp7776= p;
nctempchar1* nctemp7778= rval;
int nctemp7781=CodeEs(nctemp7776,nctemp7778);
struct tree* nctemp7783= p;
struct nctempchar1 *nctemp7787;
static struct nctempchar1 nctemp7788 = {{ 3}, (char*)".r\0"};
nctemp7787=&nctemp7788;
nctempchar1* nctemp7785= nctemp7787;
int nctemp7789=CodeEs(nctemp7783,nctemp7785);
struct tree* nctemp7791= p;
struct nctempchar1 *nctemp7795;
static struct nctempchar1 nctemp7796 = {{ 4}, (char*)";\n\0"};
nctemp7795=&nctemp7796;
nctempchar1* nctemp7793= nctemp7795;
int nctemp7797=CodeEs(nctemp7791,nctemp7793);
struct tree* nctemp7799= p;
nctempchar1* nctemp7801= type;
int nctemp7804=CodeEs(nctemp7799,nctemp7801);
struct tree* nctemp7806= p;
struct nctempchar1 *nctemp7810;
static struct nctempchar1 nctemp7811 = {{ 2}, (char*)" \0"};
nctemp7810=&nctemp7811;
nctempchar1* nctemp7808= nctemp7810;
int nctemp7812=CodeEs(nctemp7806,nctemp7808);
struct tree* nctemp7814= p;
nctempchar1* nctemp7816= tempr;
int nctemp7819=CodeEs(nctemp7814,nctemp7816);
struct tree* nctemp7821= p;
struct nctempchar1 *nctemp7825;
static struct nctempchar1 nctemp7826 = {{ 3}, (char*)".i\0"};
nctemp7825=&nctemp7826;
nctempchar1* nctemp7823= nctemp7825;
int nctemp7827=CodeEs(nctemp7821,nctemp7823);
struct tree* nctemp7829= p;
struct nctempchar1 *nctemp7833;
static struct nctempchar1 nctemp7834 = {{ 4}, (char*)" = \0"};
nctemp7833=&nctemp7834;
nctempchar1* nctemp7831= nctemp7833;
int nctemp7835=CodeEs(nctemp7829,nctemp7831);
struct tree* nctemp7837= p;
nctempchar1* nctemp7839= lval;
int nctemp7842=CodeEs(nctemp7837,nctemp7839);
struct tree* nctemp7844= p;
struct nctempchar1 *nctemp7848;
static struct nctempchar1 nctemp7849 = {{ 3}, (char*)".i\0"};
nctemp7848=&nctemp7849;
nctempchar1* nctemp7846= nctemp7848;
int nctemp7850=CodeEs(nctemp7844,nctemp7846);
struct tree* nctemp7852= p;
struct nctempchar1 *nctemp7856;
static struct nctempchar1 nctemp7857 = {{ 2}, (char*)" \0"};
nctemp7856=&nctemp7857;
nctempchar1* nctemp7854= nctemp7856;
int nctemp7858=CodeEs(nctemp7852,nctemp7854);
struct tree* nctemp7860= p;
struct tree* nctemp7864= p;
nctempchar1* nctemp7866=PtreeGetdef(nctemp7864);
nctempchar1* nctemp7862= nctemp7866;
int nctemp7867=CodeEs(nctemp7860,nctemp7862);
struct tree* nctemp7869= p;
struct nctempchar1 *nctemp7873;
static struct nctempchar1 nctemp7874 = {{ 2}, (char*)" \0"};
nctemp7873=&nctemp7874;
nctempchar1* nctemp7871= nctemp7873;
int nctemp7875=CodeEs(nctemp7869,nctemp7871);
struct tree* nctemp7877= p;
nctempchar1* nctemp7879= rval;
int nctemp7882=CodeEs(nctemp7877,nctemp7879);
struct tree* nctemp7884= p;
struct nctempchar1 *nctemp7888;
static struct nctempchar1 nctemp7889 = {{ 3}, (char*)".i\0"};
nctemp7888=&nctemp7889;
nctempchar1* nctemp7886= nctemp7888;
int nctemp7890=CodeEs(nctemp7884,nctemp7886);
struct tree* nctemp7892= p;
struct nctempchar1 *nctemp7896;
static struct nctempchar1 nctemp7897 = {{ 4}, (char*)";\n\0"};
nctemp7896=&nctemp7897;
nctempchar1* nctemp7894= nctemp7896;
int nctemp7898=CodeEs(nctemp7892,nctemp7894);
}
else{
nctempchar1* nctemp7902= opr;
struct nctempchar1 *nctemp7907;
static struct nctempchar1 nctemp7908 = {{ 2}, (char*)"*\0"};
nctemp7907=&nctemp7908;
nctempchar1* nctemp7905= nctemp7907;
int nctemp7909=LibeStrcmp(nctemp7902,nctemp7905);
int nctemp7899 = (nctemp7909 ==1);
if(nctemp7899)
{
struct tree* nctemp7912= p;
nctempchar1* nctemp7914= type;
int nctemp7917=CodeEs(nctemp7912,nctemp7914);
struct tree* nctemp7919= p;
struct nctempchar1 *nctemp7923;
static struct nctempchar1 nctemp7924 = {{ 2}, (char*)" \0"};
nctemp7923=&nctemp7924;
nctempchar1* nctemp7921= nctemp7923;
int nctemp7925=CodeEs(nctemp7919,nctemp7921);
struct tree* nctemp7927= p;
nctempchar1* nctemp7929= tempr;
int nctemp7932=CodeEs(nctemp7927,nctemp7929);
struct tree* nctemp7934= p;
struct nctempchar1 *nctemp7938;
static struct nctempchar1 nctemp7939 = {{ 3}, (char*)".r\0"};
nctemp7938=&nctemp7939;
nctempchar1* nctemp7936= nctemp7938;
int nctemp7940=CodeEs(nctemp7934,nctemp7936);
struct tree* nctemp7942= p;
struct nctempchar1 *nctemp7946;
static struct nctempchar1 nctemp7947 = {{ 4}, (char*)" = \0"};
nctemp7946=&nctemp7947;
nctempchar1* nctemp7944= nctemp7946;
int nctemp7948=CodeEs(nctemp7942,nctemp7944);
struct tree* nctemp7950= p;
nctempchar1* nctemp7952= lval;
int nctemp7955=CodeEs(nctemp7950,nctemp7952);
struct tree* nctemp7957= p;
struct nctempchar1 *nctemp7961;
static struct nctempchar1 nctemp7962 = {{ 3}, (char*)".r\0"};
nctemp7961=&nctemp7962;
nctempchar1* nctemp7959= nctemp7961;
int nctemp7963=CodeEs(nctemp7957,nctemp7959);
struct tree* nctemp7965= p;
struct nctempchar1 *nctemp7969;
static struct nctempchar1 nctemp7970 = {{ 2}, (char*)"*\0"};
nctemp7969=&nctemp7970;
nctempchar1* nctemp7967= nctemp7969;
int nctemp7971=CodeEs(nctemp7965,nctemp7967);
struct tree* nctemp7973= p;
nctempchar1* nctemp7975= rval;
int nctemp7978=CodeEs(nctemp7973,nctemp7975);
struct tree* nctemp7980= p;
struct nctempchar1 *nctemp7984;
static struct nctempchar1 nctemp7985 = {{ 3}, (char*)".r\0"};
nctemp7984=&nctemp7985;
nctempchar1* nctemp7982= nctemp7984;
int nctemp7986=CodeEs(nctemp7980,nctemp7982);
struct tree* nctemp7988= p;
struct nctempchar1 *nctemp7992;
static struct nctempchar1 nctemp7993 = {{ 2}, (char*)"-\0"};
nctemp7992=&nctemp7993;
nctempchar1* nctemp7990= nctemp7992;
int nctemp7994=CodeEs(nctemp7988,nctemp7990);
struct tree* nctemp7996= p;
nctempchar1* nctemp7998= lval;
int nctemp8001=CodeEs(nctemp7996,nctemp7998);
struct tree* nctemp8003= p;
struct nctempchar1 *nctemp8007;
static struct nctempchar1 nctemp8008 = {{ 3}, (char*)".i\0"};
nctemp8007=&nctemp8008;
nctempchar1* nctemp8005= nctemp8007;
int nctemp8009=CodeEs(nctemp8003,nctemp8005);
struct tree* nctemp8011= p;
struct nctempchar1 *nctemp8015;
static struct nctempchar1 nctemp8016 = {{ 2}, (char*)"*\0"};
nctemp8015=&nctemp8016;
nctempchar1* nctemp8013= nctemp8015;
int nctemp8017=CodeEs(nctemp8011,nctemp8013);
struct tree* nctemp8019= p;
nctempchar1* nctemp8021= rval;
int nctemp8024=CodeEs(nctemp8019,nctemp8021);
struct tree* nctemp8026= p;
struct nctempchar1 *nctemp8030;
static struct nctempchar1 nctemp8031 = {{ 3}, (char*)".i\0"};
nctemp8030=&nctemp8031;
nctempchar1* nctemp8028= nctemp8030;
int nctemp8032=CodeEs(nctemp8026,nctemp8028);
struct tree* nctemp8034= p;
struct nctempchar1 *nctemp8038;
static struct nctempchar1 nctemp8039 = {{ 4}, (char*)";\n\0"};
nctemp8038=&nctemp8039;
nctempchar1* nctemp8036= nctemp8038;
int nctemp8040=CodeEs(nctemp8034,nctemp8036);
struct tree* nctemp8042= p;
nctempchar1* nctemp8044= type;
int nctemp8047=CodeEs(nctemp8042,nctemp8044);
struct tree* nctemp8049= p;
struct nctempchar1 *nctemp8053;
static struct nctempchar1 nctemp8054 = {{ 2}, (char*)" \0"};
nctemp8053=&nctemp8054;
nctempchar1* nctemp8051= nctemp8053;
int nctemp8055=CodeEs(nctemp8049,nctemp8051);
struct tree* nctemp8057= p;
nctempchar1* nctemp8059= tempr;
int nctemp8062=CodeEs(nctemp8057,nctemp8059);
struct tree* nctemp8064= p;
struct nctempchar1 *nctemp8068;
static struct nctempchar1 nctemp8069 = {{ 3}, (char*)".i\0"};
nctemp8068=&nctemp8069;
nctempchar1* nctemp8066= nctemp8068;
int nctemp8070=CodeEs(nctemp8064,nctemp8066);
struct tree* nctemp8072= p;
struct nctempchar1 *nctemp8076;
static struct nctempchar1 nctemp8077 = {{ 4}, (char*)" = \0"};
nctemp8076=&nctemp8077;
nctempchar1* nctemp8074= nctemp8076;
int nctemp8078=CodeEs(nctemp8072,nctemp8074);
struct tree* nctemp8080= p;
nctempchar1* nctemp8082= lval;
int nctemp8085=CodeEs(nctemp8080,nctemp8082);
struct tree* nctemp8087= p;
struct nctempchar1 *nctemp8091;
static struct nctempchar1 nctemp8092 = {{ 3}, (char*)".i\0"};
nctemp8091=&nctemp8092;
nctempchar1* nctemp8089= nctemp8091;
int nctemp8093=CodeEs(nctemp8087,nctemp8089);
struct tree* nctemp8095= p;
struct nctempchar1 *nctemp8099;
static struct nctempchar1 nctemp8100 = {{ 2}, (char*)"*\0"};
nctemp8099=&nctemp8100;
nctempchar1* nctemp8097= nctemp8099;
int nctemp8101=CodeEs(nctemp8095,nctemp8097);
struct tree* nctemp8103= p;
nctempchar1* nctemp8105= rval;
int nctemp8108=CodeEs(nctemp8103,nctemp8105);
struct tree* nctemp8110= p;
struct nctempchar1 *nctemp8114;
static struct nctempchar1 nctemp8115 = {{ 3}, (char*)".r\0"};
nctemp8114=&nctemp8115;
nctempchar1* nctemp8112= nctemp8114;
int nctemp8116=CodeEs(nctemp8110,nctemp8112);
struct tree* nctemp8118= p;
struct nctempchar1 *nctemp8122;
static struct nctempchar1 nctemp8123 = {{ 2}, (char*)"+\0"};
nctemp8122=&nctemp8123;
nctempchar1* nctemp8120= nctemp8122;
int nctemp8124=CodeEs(nctemp8118,nctemp8120);
struct tree* nctemp8126= p;
nctempchar1* nctemp8128= lval;
int nctemp8131=CodeEs(nctemp8126,nctemp8128);
struct tree* nctemp8133= p;
struct nctempchar1 *nctemp8137;
static struct nctempchar1 nctemp8138 = {{ 3}, (char*)".r\0"};
nctemp8137=&nctemp8138;
nctempchar1* nctemp8135= nctemp8137;
int nctemp8139=CodeEs(nctemp8133,nctemp8135);
struct tree* nctemp8141= p;
struct nctempchar1 *nctemp8145;
static struct nctempchar1 nctemp8146 = {{ 2}, (char*)"*\0"};
nctemp8145=&nctemp8146;
nctempchar1* nctemp8143= nctemp8145;
int nctemp8147=CodeEs(nctemp8141,nctemp8143);
struct tree* nctemp8149= p;
nctempchar1* nctemp8151= rval;
int nctemp8154=CodeEs(nctemp8149,nctemp8151);
struct tree* nctemp8156= p;
struct nctempchar1 *nctemp8160;
static struct nctempchar1 nctemp8161 = {{ 3}, (char*)".i\0"};
nctemp8160=&nctemp8161;
nctempchar1* nctemp8158= nctemp8160;
int nctemp8162=CodeEs(nctemp8156,nctemp8158);
struct tree* nctemp8164= p;
struct nctempchar1 *nctemp8168;
static struct nctempchar1 nctemp8169 = {{ 4}, (char*)";\n\0"};
nctemp8168=&nctemp8169;
nctempchar1* nctemp8166= nctemp8168;
int nctemp8170=CodeEs(nctemp8164,nctemp8166);
}
else{
nctempchar1* nctemp8174= opr;
struct nctempchar1 *nctemp8179;
static struct nctempchar1 nctemp8180 = {{ 2}, (char*)"/\0"};
nctemp8179=&nctemp8180;
nctempchar1* nctemp8177= nctemp8179;
int nctemp8181=LibeStrcmp(nctemp8174,nctemp8177);
int nctemp8171 = (nctemp8181 ==1);
if(nctemp8171)
{
struct tree* nctemp8184= p;
nctempchar1* nctemp8186= type;
int nctemp8189=CodeEs(nctemp8184,nctemp8186);
struct tree* nctemp8191= p;
struct nctempchar1 *nctemp8195;
static struct nctempchar1 nctemp8196 = {{ 2}, (char*)" \0"};
nctemp8195=&nctemp8196;
nctempchar1* nctemp8193= nctemp8195;
int nctemp8197=CodeEs(nctemp8191,nctemp8193);
struct tree* nctemp8199= p;
nctempchar1* nctemp8201= tempr;
int nctemp8204=CodeEs(nctemp8199,nctemp8201);
struct tree* nctemp8206= p;
struct nctempchar1 *nctemp8210;
static struct nctempchar1 nctemp8211 = {{ 3}, (char*)".r\0"};
nctemp8210=&nctemp8211;
nctempchar1* nctemp8208= nctemp8210;
int nctemp8212=CodeEs(nctemp8206,nctemp8208);
struct tree* nctemp8214= p;
struct nctempchar1 *nctemp8218;
static struct nctempchar1 nctemp8219 = {{ 4}, (char*)" = \0"};
nctemp8218=&nctemp8219;
nctempchar1* nctemp8216= nctemp8218;
int nctemp8220=CodeEs(nctemp8214,nctemp8216);
struct tree* nctemp8222= p;
struct nctempchar1 *nctemp8226;
static struct nctempchar1 nctemp8227 = {{ 2}, (char*)"(\0"};
nctemp8226=&nctemp8227;
nctempchar1* nctemp8224= nctemp8226;
int nctemp8228=CodeEs(nctemp8222,nctemp8224);
struct tree* nctemp8230= p;
nctempchar1* nctemp8232= lval;
int nctemp8235=CodeEs(nctemp8230,nctemp8232);
struct tree* nctemp8237= p;
struct nctempchar1 *nctemp8241;
static struct nctempchar1 nctemp8242 = {{ 3}, (char*)".r\0"};
nctemp8241=&nctemp8242;
nctempchar1* nctemp8239= nctemp8241;
int nctemp8243=CodeEs(nctemp8237,nctemp8239);
struct tree* nctemp8245= p;
struct nctempchar1 *nctemp8249;
static struct nctempchar1 nctemp8250 = {{ 2}, (char*)"*\0"};
nctemp8249=&nctemp8250;
nctempchar1* nctemp8247= nctemp8249;
int nctemp8251=CodeEs(nctemp8245,nctemp8247);
struct tree* nctemp8253= p;
nctempchar1* nctemp8255= rval;
int nctemp8258=CodeEs(nctemp8253,nctemp8255);
struct tree* nctemp8260= p;
struct nctempchar1 *nctemp8264;
static struct nctempchar1 nctemp8265 = {{ 3}, (char*)".r\0"};
nctemp8264=&nctemp8265;
nctempchar1* nctemp8262= nctemp8264;
int nctemp8266=CodeEs(nctemp8260,nctemp8262);
struct tree* nctemp8268= p;
struct nctempchar1 *nctemp8272;
static struct nctempchar1 nctemp8273 = {{ 2}, (char*)"+\0"};
nctemp8272=&nctemp8273;
nctempchar1* nctemp8270= nctemp8272;
int nctemp8274=CodeEs(nctemp8268,nctemp8270);
struct tree* nctemp8276= p;
nctempchar1* nctemp8278= lval;
int nctemp8281=CodeEs(nctemp8276,nctemp8278);
struct tree* nctemp8283= p;
struct nctempchar1 *nctemp8287;
static struct nctempchar1 nctemp8288 = {{ 3}, (char*)".i\0"};
nctemp8287=&nctemp8288;
nctempchar1* nctemp8285= nctemp8287;
int nctemp8289=CodeEs(nctemp8283,nctemp8285);
struct tree* nctemp8291= p;
struct nctempchar1 *nctemp8295;
static struct nctempchar1 nctemp8296 = {{ 2}, (char*)"*\0"};
nctemp8295=&nctemp8296;
nctempchar1* nctemp8293= nctemp8295;
int nctemp8297=CodeEs(nctemp8291,nctemp8293);
struct tree* nctemp8299= p;
nctempchar1* nctemp8301= rval;
int nctemp8304=CodeEs(nctemp8299,nctemp8301);
struct tree* nctemp8306= p;
struct nctempchar1 *nctemp8310;
static struct nctempchar1 nctemp8311 = {{ 3}, (char*)".i\0"};
nctemp8310=&nctemp8311;
nctempchar1* nctemp8308= nctemp8310;
int nctemp8312=CodeEs(nctemp8306,nctemp8308);
struct tree* nctemp8314= p;
struct nctempchar1 *nctemp8318;
static struct nctempchar1 nctemp8319 = {{ 4}, (char*)")/(\0"};
nctemp8318=&nctemp8319;
nctempchar1* nctemp8316= nctemp8318;
int nctemp8320=CodeEs(nctemp8314,nctemp8316);
struct tree* nctemp8322= p;
nctempchar1* nctemp8324= rval;
int nctemp8327=CodeEs(nctemp8322,nctemp8324);
struct tree* nctemp8329= p;
struct nctempchar1 *nctemp8333;
static struct nctempchar1 nctemp8334 = {{ 3}, (char*)".r\0"};
nctemp8333=&nctemp8334;
nctempchar1* nctemp8331= nctemp8333;
int nctemp8335=CodeEs(nctemp8329,nctemp8331);
struct tree* nctemp8337= p;
struct nctempchar1 *nctemp8341;
static struct nctempchar1 nctemp8342 = {{ 2}, (char*)"*\0"};
nctemp8341=&nctemp8342;
nctempchar1* nctemp8339= nctemp8341;
int nctemp8343=CodeEs(nctemp8337,nctemp8339);
struct tree* nctemp8345= p;
nctempchar1* nctemp8347= rval;
int nctemp8350=CodeEs(nctemp8345,nctemp8347);
struct tree* nctemp8352= p;
struct nctempchar1 *nctemp8356;
static struct nctempchar1 nctemp8357 = {{ 3}, (char*)".r\0"};
nctemp8356=&nctemp8357;
nctempchar1* nctemp8354= nctemp8356;
int nctemp8358=CodeEs(nctemp8352,nctemp8354);
struct tree* nctemp8360= p;
struct nctempchar1 *nctemp8364;
static struct nctempchar1 nctemp8365 = {{ 2}, (char*)"+\0"};
nctemp8364=&nctemp8365;
nctempchar1* nctemp8362= nctemp8364;
int nctemp8366=CodeEs(nctemp8360,nctemp8362);
struct tree* nctemp8368= p;
nctempchar1* nctemp8370= rval;
int nctemp8373=CodeEs(nctemp8368,nctemp8370);
struct tree* nctemp8375= p;
struct nctempchar1 *nctemp8379;
static struct nctempchar1 nctemp8380 = {{ 3}, (char*)".i\0"};
nctemp8379=&nctemp8380;
nctempchar1* nctemp8377= nctemp8379;
int nctemp8381=CodeEs(nctemp8375,nctemp8377);
struct tree* nctemp8383= p;
struct nctempchar1 *nctemp8387;
static struct nctempchar1 nctemp8388 = {{ 2}, (char*)"*\0"};
nctemp8387=&nctemp8388;
nctempchar1* nctemp8385= nctemp8387;
int nctemp8389=CodeEs(nctemp8383,nctemp8385);
struct tree* nctemp8391= p;
nctempchar1* nctemp8393= rval;
int nctemp8396=CodeEs(nctemp8391,nctemp8393);
struct tree* nctemp8398= p;
struct nctempchar1 *nctemp8402;
static struct nctempchar1 nctemp8403 = {{ 3}, (char*)".i\0"};
nctemp8402=&nctemp8403;
nctempchar1* nctemp8400= nctemp8402;
int nctemp8404=CodeEs(nctemp8398,nctemp8400);
struct tree* nctemp8406= p;
struct nctempchar1 *nctemp8410;
static struct nctempchar1 nctemp8411 = {{ 5}, (char*)");\n\0"};
nctemp8410=&nctemp8411;
nctempchar1* nctemp8408= nctemp8410;
int nctemp8412=CodeEs(nctemp8406,nctemp8408);
struct tree* nctemp8414= p;
nctempchar1* nctemp8416= type;
int nctemp8419=CodeEs(nctemp8414,nctemp8416);
struct tree* nctemp8421= p;
struct nctempchar1 *nctemp8425;
static struct nctempchar1 nctemp8426 = {{ 2}, (char*)" \0"};
nctemp8425=&nctemp8426;
nctempchar1* nctemp8423= nctemp8425;
int nctemp8427=CodeEs(nctemp8421,nctemp8423);
struct tree* nctemp8429= p;
nctempchar1* nctemp8431= tempr;
int nctemp8434=CodeEs(nctemp8429,nctemp8431);
struct tree* nctemp8436= p;
struct nctempchar1 *nctemp8440;
static struct nctempchar1 nctemp8441 = {{ 3}, (char*)".i\0"};
nctemp8440=&nctemp8441;
nctempchar1* nctemp8438= nctemp8440;
int nctemp8442=CodeEs(nctemp8436,nctemp8438);
struct tree* nctemp8444= p;
struct nctempchar1 *nctemp8448;
static struct nctempchar1 nctemp8449 = {{ 4}, (char*)" = \0"};
nctemp8448=&nctemp8449;
nctempchar1* nctemp8446= nctemp8448;
int nctemp8450=CodeEs(nctemp8444,nctemp8446);
struct tree* nctemp8452= p;
struct nctempchar1 *nctemp8456;
static struct nctempchar1 nctemp8457 = {{ 2}, (char*)"(\0"};
nctemp8456=&nctemp8457;
nctempchar1* nctemp8454= nctemp8456;
int nctemp8458=CodeEs(nctemp8452,nctemp8454);
struct tree* nctemp8460= p;
nctempchar1* nctemp8462= lval;
int nctemp8465=CodeEs(nctemp8460,nctemp8462);
struct tree* nctemp8467= p;
struct nctempchar1 *nctemp8471;
static struct nctempchar1 nctemp8472 = {{ 3}, (char*)".i\0"};
nctemp8471=&nctemp8472;
nctempchar1* nctemp8469= nctemp8471;
int nctemp8473=CodeEs(nctemp8467,nctemp8469);
struct tree* nctemp8475= p;
struct nctempchar1 *nctemp8479;
static struct nctempchar1 nctemp8480 = {{ 2}, (char*)"*\0"};
nctemp8479=&nctemp8480;
nctempchar1* nctemp8477= nctemp8479;
int nctemp8481=CodeEs(nctemp8475,nctemp8477);
struct tree* nctemp8483= p;
nctempchar1* nctemp8485= rval;
int nctemp8488=CodeEs(nctemp8483,nctemp8485);
struct tree* nctemp8490= p;
struct nctempchar1 *nctemp8494;
static struct nctempchar1 nctemp8495 = {{ 3}, (char*)".r\0"};
nctemp8494=&nctemp8495;
nctempchar1* nctemp8492= nctemp8494;
int nctemp8496=CodeEs(nctemp8490,nctemp8492);
struct tree* nctemp8498= p;
struct nctempchar1 *nctemp8502;
static struct nctempchar1 nctemp8503 = {{ 2}, (char*)"-\0"};
nctemp8502=&nctemp8503;
nctempchar1* nctemp8500= nctemp8502;
int nctemp8504=CodeEs(nctemp8498,nctemp8500);
struct tree* nctemp8506= p;
nctempchar1* nctemp8508= lval;
int nctemp8511=CodeEs(nctemp8506,nctemp8508);
struct tree* nctemp8513= p;
struct nctempchar1 *nctemp8517;
static struct nctempchar1 nctemp8518 = {{ 3}, (char*)".r\0"};
nctemp8517=&nctemp8518;
nctempchar1* nctemp8515= nctemp8517;
int nctemp8519=CodeEs(nctemp8513,nctemp8515);
struct tree* nctemp8521= p;
struct nctempchar1 *nctemp8525;
static struct nctempchar1 nctemp8526 = {{ 2}, (char*)"*\0"};
nctemp8525=&nctemp8526;
nctempchar1* nctemp8523= nctemp8525;
int nctemp8527=CodeEs(nctemp8521,nctemp8523);
struct tree* nctemp8529= p;
nctempchar1* nctemp8531= rval;
int nctemp8534=CodeEs(nctemp8529,nctemp8531);
struct tree* nctemp8536= p;
struct nctempchar1 *nctemp8540;
static struct nctempchar1 nctemp8541 = {{ 3}, (char*)".i\0"};
nctemp8540=&nctemp8541;
nctempchar1* nctemp8538= nctemp8540;
int nctemp8542=CodeEs(nctemp8536,nctemp8538);
struct tree* nctemp8544= p;
struct nctempchar1 *nctemp8548;
static struct nctempchar1 nctemp8549 = {{ 4}, (char*)")/(\0"};
nctemp8548=&nctemp8549;
nctempchar1* nctemp8546= nctemp8548;
int nctemp8550=CodeEs(nctemp8544,nctemp8546);
struct tree* nctemp8552= p;
nctempchar1* nctemp8554= rval;
int nctemp8557=CodeEs(nctemp8552,nctemp8554);
struct tree* nctemp8559= p;
struct nctempchar1 *nctemp8563;
static struct nctempchar1 nctemp8564 = {{ 3}, (char*)".r\0"};
nctemp8563=&nctemp8564;
nctempchar1* nctemp8561= nctemp8563;
int nctemp8565=CodeEs(nctemp8559,nctemp8561);
struct tree* nctemp8567= p;
struct nctempchar1 *nctemp8571;
static struct nctempchar1 nctemp8572 = {{ 2}, (char*)"*\0"};
nctemp8571=&nctemp8572;
nctempchar1* nctemp8569= nctemp8571;
int nctemp8573=CodeEs(nctemp8567,nctemp8569);
struct tree* nctemp8575= p;
nctempchar1* nctemp8577= rval;
int nctemp8580=CodeEs(nctemp8575,nctemp8577);
struct tree* nctemp8582= p;
struct nctempchar1 *nctemp8586;
static struct nctempchar1 nctemp8587 = {{ 3}, (char*)".r\0"};
nctemp8586=&nctemp8587;
nctempchar1* nctemp8584= nctemp8586;
int nctemp8588=CodeEs(nctemp8582,nctemp8584);
struct tree* nctemp8590= p;
struct nctempchar1 *nctemp8594;
static struct nctempchar1 nctemp8595 = {{ 2}, (char*)"+\0"};
nctemp8594=&nctemp8595;
nctempchar1* nctemp8592= nctemp8594;
int nctemp8596=CodeEs(nctemp8590,nctemp8592);
struct tree* nctemp8598= p;
nctempchar1* nctemp8600= rval;
int nctemp8603=CodeEs(nctemp8598,nctemp8600);
struct tree* nctemp8605= p;
struct nctempchar1 *nctemp8609;
static struct nctempchar1 nctemp8610 = {{ 3}, (char*)".i\0"};
nctemp8609=&nctemp8610;
nctempchar1* nctemp8607= nctemp8609;
int nctemp8611=CodeEs(nctemp8605,nctemp8607);
struct tree* nctemp8613= p;
struct nctempchar1 *nctemp8617;
static struct nctempchar1 nctemp8618 = {{ 2}, (char*)"*\0"};
nctemp8617=&nctemp8618;
nctempchar1* nctemp8615= nctemp8617;
int nctemp8619=CodeEs(nctemp8613,nctemp8615);
struct tree* nctemp8621= p;
nctempchar1* nctemp8623= rval;
int nctemp8626=CodeEs(nctemp8621,nctemp8623);
struct tree* nctemp8628= p;
struct nctempchar1 *nctemp8632;
static struct nctempchar1 nctemp8633 = {{ 3}, (char*)".i\0"};
nctemp8632=&nctemp8633;
nctempchar1* nctemp8630= nctemp8632;
int nctemp8634=CodeEs(nctemp8628,nctemp8630);
struct tree* nctemp8636= p;
struct nctempchar1 *nctemp8640;
static struct nctempchar1 nctemp8641 = {{ 5}, (char*)");\n\0"};
nctemp8640=&nctemp8641;
nctempchar1* nctemp8638= nctemp8640;
int nctemp8642=CodeEs(nctemp8636,nctemp8638);
}
}
}
}
else{
struct tree* nctemp8644= p;
nctempchar1* nctemp8646= type;
int nctemp8649=CodeEs(nctemp8644,nctemp8646);
struct tree* nctemp8651= p;
struct nctempchar1 *nctemp8655;
static struct nctempchar1 nctemp8656 = {{ 2}, (char*)" \0"};
nctemp8655=&nctemp8656;
nctempchar1* nctemp8653= nctemp8655;
int nctemp8657=CodeEs(nctemp8651,nctemp8653);
struct tree* nctemp8659= p;
nctempchar1* nctemp8661= tempr;
int nctemp8664=CodeEs(nctemp8659,nctemp8661);
struct tree* nctemp8666= p;
struct nctempchar1 *nctemp8670;
static struct nctempchar1 nctemp8671 = {{ 4}, (char*)" = \0"};
nctemp8670=&nctemp8671;
nctempchar1* nctemp8668= nctemp8670;
int nctemp8672=CodeEs(nctemp8666,nctemp8668);
struct tree* nctemp8674= p;
nctempchar1* nctemp8676= lval;
int nctemp8679=CodeEs(nctemp8674,nctemp8676);
struct tree* nctemp8681= p;
struct nctempchar1 *nctemp8685;
static struct nctempchar1 nctemp8686 = {{ 2}, (char*)" \0"};
nctemp8685=&nctemp8686;
nctempchar1* nctemp8683= nctemp8685;
int nctemp8687=CodeEs(nctemp8681,nctemp8683);
struct tree* nctemp8689= p;
struct tree* nctemp8693= p;
nctempchar1* nctemp8695=PtreeGetdef(nctemp8693);
nctempchar1* nctemp8691= nctemp8695;
int nctemp8696=CodeEs(nctemp8689,nctemp8691);
struct tree* nctemp8698= p;
struct nctempchar1 *nctemp8702;
static struct nctempchar1 nctemp8703 = {{ 2}, (char*)" \0"};
nctemp8702=&nctemp8703;
nctempchar1* nctemp8700= nctemp8702;
int nctemp8704=CodeEs(nctemp8698,nctemp8700);
struct tree* nctemp8706= p;
nctempchar1* nctemp8708= rval;
int nctemp8711=CodeEs(nctemp8706,nctemp8708);
struct tree* nctemp8713= p;
struct nctempchar1 *nctemp8717;
static struct nctempchar1 nctemp8718 = {{ 4}, (char*)";\n\0"};
nctemp8717=&nctemp8718;
nctempchar1* nctemp8715= nctemp8717;
int nctemp8719=CodeEs(nctemp8713,nctemp8715);
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
struct tree* nctemp8727= p;
nctempchar1* nctemp8729=PtreeGetname(nctemp8727);
nctempchar1* nctemp8725= nctemp8729;
struct nctempchar1 *nctemp8732;
static struct nctempchar1 nctemp8733 = {{ 8}, (char*)"binexpr\0"};
nctemp8732=&nctemp8733;
nctempchar1* nctemp8730= nctemp8732;
int nctemp8734=LibeStrcmp(nctemp8725,nctemp8730);
int nctemp8722 = (nctemp8734 ==1);
if(nctemp8722)
{
struct tree* nctemp8741= p;
nctempchar1* nctemp8743=PtreeGetype(nctemp8741);
type=nctemp8743;
nctempchar1* nctemp8749=CodeMktemp();
tempr=nctemp8749;
nctempchar1* nctemp8755=CodeMktemp();
tempi=nctemp8755;
struct tree* nctemp8760= p;
struct tree* nctemp8762=PtreeMvchild(nctemp8760);
np =nctemp8762;
struct tree* nctemp8768= np;
nctempchar1* nctemp8770=CodeUnexpr(nctemp8768);
lval=nctemp8770;
struct tree* nctemp8778= np;
struct tree* nctemp8780=PtreeMvsister(nctemp8778);
struct tree* nctemp8776= nctemp8780;
nctempchar1* nctemp8781=CodeUnexpr(nctemp8776);
rval=nctemp8781;
struct tree* nctemp8796= p;
nctempchar1* nctemp8798=PtreeGetdef(nctemp8796);
nctempchar1* nctemp8794= nctemp8798;
struct nctempchar1 *nctemp8801;
static struct nctempchar1 nctemp8802 = {{ 2}, (char*)"+\0"};
nctemp8801=&nctemp8802;
nctempchar1* nctemp8799= nctemp8801;
int nctemp8803=LibeStrcmp(nctemp8794,nctemp8799);
int nctemp8791 = (nctemp8803 ==1);
struct tree* nctemp8811= p;
nctempchar1* nctemp8813=PtreeGetdef(nctemp8811);
nctempchar1* nctemp8809= nctemp8813;
struct nctempchar1 *nctemp8816;
static struct nctempchar1 nctemp8817 = {{ 2}, (char*)"-\0"};
nctemp8816=&nctemp8817;
nctempchar1* nctemp8814= nctemp8816;
int nctemp8818=LibeStrcmp(nctemp8809,nctemp8814);
int nctemp8806 = (nctemp8818 ==1);
int nctemp8788 = (nctemp8791 || nctemp8806);
struct tree* nctemp8826= p;
nctempchar1* nctemp8828=PtreeGetdef(nctemp8826);
nctempchar1* nctemp8824= nctemp8828;
struct nctempchar1 *nctemp8831;
static struct nctempchar1 nctemp8832 = {{ 2}, (char*)"*\0"};
nctemp8831=&nctemp8832;
nctempchar1* nctemp8829= nctemp8831;
int nctemp8833=LibeStrcmp(nctemp8824,nctemp8829);
int nctemp8821 = (nctemp8833 ==1);
int nctemp8785 = (nctemp8788 || nctemp8821);
struct tree* nctemp8841= p;
nctempchar1* nctemp8843=PtreeGetdef(nctemp8841);
nctempchar1* nctemp8839= nctemp8843;
struct nctempchar1 *nctemp8846;
static struct nctempchar1 nctemp8847 = {{ 2}, (char*)"/\0"};
nctemp8846=&nctemp8847;
nctempchar1* nctemp8844= nctemp8846;
int nctemp8848=LibeStrcmp(nctemp8839,nctemp8844);
int nctemp8836 = (nctemp8848 ==1);
int nctemp8782 = (nctemp8785 || nctemp8836);
if(nctemp8782)
{
struct tree* nctemp8851= p;
nctempchar1* nctemp8853= lval;
nctempchar1* nctemp8856= rval;
nctempchar1* nctemp8859=CodeAddexpr(nctemp8851,nctemp8853,nctemp8856);
return nctemp8859;
}
else{
struct tree* nctemp8865= p;
nctempchar1* nctemp8867=PtreeGetdef(nctemp8865);
nctempchar1* nctemp8863= nctemp8867;
struct nctempchar1 *nctemp8870;
static struct nctempchar1 nctemp8871 = {{ 2}, (char*)"=\0"};
nctemp8870=&nctemp8871;
nctempchar1* nctemp8868= nctemp8870;
int nctemp8872=LibeStrcmp(nctemp8863,nctemp8868);
int nctemp8860 = (nctemp8872 ==1);
if(nctemp8860)
{
struct tree* nctemp8885= p;
nctempchar1* nctemp8887=PtreeGetype(nctemp8885);
nctempchar1* nctemp8883= nctemp8887;
struct nctempchar1 *nctemp8890;
static struct nctempchar1 nctemp8891 = {{ 8}, (char*)"complex\0"};
nctemp8890=&nctemp8891;
nctempchar1* nctemp8888= nctemp8890;
int nctemp8892=LibeStrcmp(nctemp8883,nctemp8888);
int nctemp8880 = (nctemp8892 ==1);
struct tree* nctemp8900= p;
nctempchar1* nctemp8902=PtreeGetref(nctemp8900);
nctempchar1* nctemp8898= nctemp8902;
struct nctempchar1 *nctemp8905;
static struct nctempchar1 nctemp8906 = {{ 5}, (char*)"aref\0"};
nctemp8905=&nctemp8906;
nctempchar1* nctemp8903= nctemp8905;
int nctemp8907=LibeStrcmp(nctemp8898,nctemp8903);
int nctemp8895 = (nctemp8907 ==0);
int nctemp8877 = (nctemp8880 && nctemp8895);
struct tree* nctemp8915= p;
nctempchar1* nctemp8917=PtreeGetref(nctemp8915);
nctempchar1* nctemp8913= nctemp8917;
struct nctempchar1 *nctemp8920;
static struct nctempchar1 nctemp8921 = {{ 5}, (char*)"sref\0"};
nctemp8920=&nctemp8921;
nctempchar1* nctemp8918= nctemp8920;
int nctemp8922=LibeStrcmp(nctemp8913,nctemp8918);
int nctemp8910 = (nctemp8922 ==0);
int nctemp8874 = (nctemp8877 && nctemp8910);
if(nctemp8874)
{
struct tree* nctemp8925= p;
nctempchar1* nctemp8927= lval;
int nctemp8930=CodeEs(nctemp8925,nctemp8927);
struct tree* nctemp8932= p;
struct nctempchar1 *nctemp8936;
static struct nctempchar1 nctemp8937 = {{ 4}, (char*)".r \0"};
nctemp8936=&nctemp8937;
nctempchar1* nctemp8934= nctemp8936;
int nctemp8938=CodeEs(nctemp8932,nctemp8934);
struct tree* nctemp8940= p;
struct nctempchar1 *nctemp8944;
static struct nctempchar1 nctemp8945 = {{ 2}, (char*)"=\0"};
nctemp8944=&nctemp8945;
nctempchar1* nctemp8942= nctemp8944;
int nctemp8946=CodeEs(nctemp8940,nctemp8942);
struct tree* nctemp8948= p;
nctempchar1* nctemp8950= rval;
int nctemp8953=CodeEs(nctemp8948,nctemp8950);
struct tree* nctemp8955= p;
struct nctempchar1 *nctemp8959;
static struct nctempchar1 nctemp8960 = {{ 3}, (char*)".r\0"};
nctemp8959=&nctemp8960;
nctempchar1* nctemp8957= nctemp8959;
int nctemp8961=CodeEs(nctemp8955,nctemp8957);
struct tree* nctemp8963= p;
struct nctempchar1 *nctemp8967;
static struct nctempchar1 nctemp8968 = {{ 4}, (char*)";\n\0"};
nctemp8967=&nctemp8968;
nctempchar1* nctemp8965= nctemp8967;
int nctemp8969=CodeEs(nctemp8963,nctemp8965);
struct tree* nctemp8971= p;
nctempchar1* nctemp8973= lval;
int nctemp8976=CodeEs(nctemp8971,nctemp8973);
struct tree* nctemp8978= p;
struct nctempchar1 *nctemp8982;
static struct nctempchar1 nctemp8983 = {{ 3}, (char*)".i\0"};
nctemp8982=&nctemp8983;
nctempchar1* nctemp8980= nctemp8982;
int nctemp8984=CodeEs(nctemp8978,nctemp8980);
struct tree* nctemp8986= p;
struct nctempchar1 *nctemp8990;
static struct nctempchar1 nctemp8991 = {{ 2}, (char*)"=\0"};
nctemp8990=&nctemp8991;
nctempchar1* nctemp8988= nctemp8990;
int nctemp8992=CodeEs(nctemp8986,nctemp8988);
struct tree* nctemp8994= p;
nctempchar1* nctemp8996= rval;
int nctemp8999=CodeEs(nctemp8994,nctemp8996);
struct tree* nctemp9001= p;
struct nctempchar1 *nctemp9005;
static struct nctempchar1 nctemp9006 = {{ 3}, (char*)".i\0"};
nctemp9005=&nctemp9006;
nctempchar1* nctemp9003= nctemp9005;
int nctemp9007=CodeEs(nctemp9001,nctemp9003);
struct tree* nctemp9009= p;
struct nctempchar1 *nctemp9013;
static struct nctempchar1 nctemp9014 = {{ 4}, (char*)";\n\0"};
nctemp9013=&nctemp9014;
nctempchar1* nctemp9011= nctemp9013;
int nctemp9015=CodeEs(nctemp9009,nctemp9011);
return lval;
}
else{
struct tree* nctemp9023= np;
nctempchar1* nctemp9025=PtreeGetref(nctemp9023);
nctempchar1* nctemp9021= nctemp9025;
struct nctempchar1 *nctemp9028;
static struct nctempchar1 nctemp9029 = {{ 5}, (char*)"aref\0"};
nctemp9028=&nctemp9029;
nctempchar1* nctemp9026= nctemp9028;
int nctemp9030=LibeStrcmp(nctemp9021,nctemp9026);
int nctemp9018 = (nctemp9030 ==1);
if(nctemp9018)
{
struct tree* nctemp9039= np;
struct tree* nctemp9041=PtreeMvsister(nctemp9039);
struct tree* nctemp9037= nctemp9041;
nctempchar1* nctemp9042=PtreeGetname(nctemp9037);
nctempchar1* nctemp9035= nctemp9042;
struct nctempchar1 *nctemp9045;
static struct nctempchar1 nctemp9046 = {{ 10}, (char*)"iconstant\0"};
nctemp9045=&nctemp9046;
nctempchar1* nctemp9043= nctemp9045;
int nctemp9047=LibeStrcmp(nctemp9035,nctemp9043);
struct tree* nctemp9053= np;
struct tree* nctemp9055=PtreeMvsister(nctemp9053);
struct tree* nctemp9051= nctemp9055;
nctempchar1* nctemp9056=PtreeGetdef(nctemp9051);
nctempchar1* nctemp9049= nctemp9056;
struct nctempchar1 *nctemp9059;
static struct nctempchar1 nctemp9060 = {{ 2}, (char*)"0\0"};
nctemp9059=&nctemp9060;
nctempchar1* nctemp9057= nctemp9059;
int nctemp9061=LibeStrcmp(nctemp9049,nctemp9057);
int nctemp9032 = (nctemp9047 && nctemp9061);
if(nctemp9032)
{
struct tree* nctemp9063= p;
nctempchar1* nctemp9065= lval;
int nctemp9068=CodeEs(nctemp9063,nctemp9065);
struct tree* nctemp9070= p;
struct nctempchar1 *nctemp9074;
static struct nctempchar1 nctemp9075 = {{ 3}, (char*)"=(\0"};
nctemp9074=&nctemp9075;
nctempchar1* nctemp9072= nctemp9074;
int nctemp9076=CodeEs(nctemp9070,nctemp9072);
struct tree* nctemp9078= p;
nctempchar1* nctemp9080= rval;
int nctemp9083=CodeEs(nctemp9078,nctemp9080);
struct tree* nctemp9085= p;
struct nctempchar1 *nctemp9089;
static struct nctempchar1 nctemp9090 = {{ 5}, (char*)");\n\0"};
nctemp9089=&nctemp9090;
nctempchar1* nctemp9087= nctemp9089;
int nctemp9091=CodeEs(nctemp9085,nctemp9087);
return lval;
}
else{
struct tree* nctemp9095= p;
nctempchar1* nctemp9097= lval;
int nctemp9100=CodeEs(nctemp9095,nctemp9097);
struct tree* nctemp9102= p;
struct nctempchar1 *nctemp9106;
static struct nctempchar1 nctemp9107 = {{ 2}, (char*)"=\0"};
nctemp9106=&nctemp9107;
nctempchar1* nctemp9104= nctemp9106;
int nctemp9108=CodeEs(nctemp9102,nctemp9104);
struct tree* nctemp9110= p;
nctempchar1* nctemp9112= rval;
int nctemp9115=CodeEs(nctemp9110,nctemp9112);
struct tree* nctemp9117= p;
struct nctempchar1 *nctemp9121;
static struct nctempchar1 nctemp9122 = {{ 4}, (char*)";\n\0"};
nctemp9121=&nctemp9122;
nctempchar1* nctemp9119= nctemp9121;
int nctemp9123=CodeEs(nctemp9117,nctemp9119);
return lval;
}
}
else{
struct tree* nctemp9127= p;
nctempchar1* nctemp9129= lval;
int nctemp9132=CodeEs(nctemp9127,nctemp9129);
struct tree* nctemp9134= p;
struct nctempchar1 *nctemp9138;
static struct nctempchar1 nctemp9139 = {{ 2}, (char*)" \0"};
nctemp9138=&nctemp9139;
nctempchar1* nctemp9136= nctemp9138;
int nctemp9140=CodeEs(nctemp9134,nctemp9136);
struct tree* nctemp9142= p;
struct nctempchar1 *nctemp9146;
static struct nctempchar1 nctemp9147 = {{ 2}, (char*)"=\0"};
nctemp9146=&nctemp9147;
nctempchar1* nctemp9144= nctemp9146;
int nctemp9148=CodeEs(nctemp9142,nctemp9144);
struct tree* nctemp9150= p;
nctempchar1* nctemp9152= rval;
int nctemp9155=CodeEs(nctemp9150,nctemp9152);
struct tree* nctemp9157= p;
struct nctempchar1 *nctemp9161;
static struct nctempchar1 nctemp9162 = {{ 4}, (char*)";\n\0"};
nctemp9161=&nctemp9162;
nctempchar1* nctemp9159= nctemp9161;
int nctemp9163=CodeEs(nctemp9157,nctemp9159);
return lval;
}
}
}
else{
struct tree* nctemp9174= p;
nctempchar1* nctemp9176=PtreeGetdef(nctemp9174);
nctempchar1* nctemp9172= nctemp9176;
struct nctempchar1 *nctemp9179;
static struct nctempchar1 nctemp9180 = {{ 3}, (char*)"==\0"};
nctemp9179=&nctemp9180;
nctempchar1* nctemp9177= nctemp9179;
int nctemp9181=LibeStrcmp(nctemp9172,nctemp9177);
int nctemp9169 = (nctemp9181 ==1);
struct tree* nctemp9189= p;
nctempchar1* nctemp9191=PtreeGetdef(nctemp9189);
nctempchar1* nctemp9187= nctemp9191;
struct nctempchar1 *nctemp9194;
static struct nctempchar1 nctemp9195 = {{ 3}, (char*)"!=\0"};
nctemp9194=&nctemp9195;
nctempchar1* nctemp9192= nctemp9194;
int nctemp9196=LibeStrcmp(nctemp9187,nctemp9192);
int nctemp9184 = (nctemp9196 ==1);
int nctemp9166 = (nctemp9169 || nctemp9184);
if(nctemp9166)
{
struct tree* nctemp9203= np;
nctempchar1* nctemp9205=PtreeGetref(nctemp9203);
nctempchar1* nctemp9201= nctemp9205;
struct nctempchar1 *nctemp9208;
static struct nctempchar1 nctemp9209 = {{ 5}, (char*)"aref\0"};
nctemp9208=&nctemp9209;
nctempchar1* nctemp9206= nctemp9208;
int nctemp9210=LibeStrcmp(nctemp9201,nctemp9206);
int nctemp9198 = (nctemp9210 ==1);
if(nctemp9198)
{
sp = np;
struct tree* nctemp9219= np;
struct tree* nctemp9221=PtreeMvsister(nctemp9219);
struct tree* nctemp9217= nctemp9221;
nctempchar1* nctemp9222=PtreeGetname(nctemp9217);
nctempchar1* nctemp9215= nctemp9222;
struct nctempchar1 *nctemp9225;
static struct nctempchar1 nctemp9226 = {{ 10}, (char*)"iconstant\0"};
nctemp9225=&nctemp9226;
nctempchar1* nctemp9223= nctemp9225;
int nctemp9227=LibeStrcmp(nctemp9215,nctemp9223);
struct tree* nctemp9233= np;
struct tree* nctemp9235=PtreeMvsister(nctemp9233);
struct tree* nctemp9231= nctemp9235;
nctempchar1* nctemp9236=PtreeGetdef(nctemp9231);
nctempchar1* nctemp9229= nctemp9236;
struct nctempchar1 *nctemp9239;
static struct nctempchar1 nctemp9240 = {{ 2}, (char*)"0\0"};
nctemp9239=&nctemp9240;
nctempchar1* nctemp9237= nctemp9239;
int nctemp9241=LibeStrcmp(nctemp9229,nctemp9237);
int nctemp9212 = (nctemp9227 && nctemp9241);
if(nctemp9212)
{
struct tree* nctemp9243= p;
struct nctempchar1 *nctemp9247;
static struct nctempchar1 nctemp9248 = {{ 7}, (char*)"nctemp\0"};
nctemp9247=&nctemp9248;
nctempchar1* nctemp9245= nctemp9247;
int nctemp9249=CodeEs(nctemp9243,nctemp9245);
struct tree* nctemp9251= p;
struct tree* nctemp9255= sp;
nctempchar1* nctemp9257=PtreeGetype(nctemp9255);
nctempchar1* nctemp9253= nctemp9257;
int nctemp9258=CodeEs(nctemp9251,nctemp9253);
struct tree* nctemp9262= sp;
int nctemp9264=PtreeGetrank(nctemp9262);
int nctemp9260= nctemp9264;
int nctemp9265=CodeEd(nctemp9260);
struct tree* nctemp9267= p;
struct nctempchar1 *nctemp9271;
static struct nctempchar1 nctemp9272 = {{ 3}, (char*)" *\0"};
nctemp9271=&nctemp9272;
nctempchar1* nctemp9269= nctemp9271;
int nctemp9273=CodeEs(nctemp9267,nctemp9269);
struct tree* nctemp9275= p;
nctempchar1* nctemp9277= tempi;
int nctemp9280=CodeEs(nctemp9275,nctemp9277);
struct tree* nctemp9282= p;
struct nctempchar1 *nctemp9286;
static struct nctempchar1 nctemp9287 = {{ 3}, (char*)" =\0"};
nctemp9286=&nctemp9287;
nctempchar1* nctemp9284= nctemp9286;
int nctemp9288=CodeEs(nctemp9282,nctemp9284);
struct tree* nctemp9290= p;
nctempchar1* nctemp9292= lval;
int nctemp9295=CodeEs(nctemp9290,nctemp9292);
struct tree* nctemp9297= p;
struct nctempchar1 *nctemp9301;
static struct nctempchar1 nctemp9302 = {{ 4}, (char*)";\n\0"};
nctemp9301=&nctemp9302;
nctempchar1* nctemp9299= nctemp9301;
int nctemp9303=CodeEs(nctemp9297,nctemp9299);
struct tree* nctemp9305= p;
nctempchar1* nctemp9307= type;
int nctemp9310=CodeEs(nctemp9305,nctemp9307);
struct tree* nctemp9312= p;
struct nctempchar1 *nctemp9316;
static struct nctempchar1 nctemp9317 = {{ 2}, (char*)" \0"};
nctemp9316=&nctemp9317;
nctempchar1* nctemp9314= nctemp9316;
int nctemp9318=CodeEs(nctemp9312,nctemp9314);
struct tree* nctemp9320= p;
nctempchar1* nctemp9322= tempr;
int nctemp9325=CodeEs(nctemp9320,nctemp9322);
struct tree* nctemp9327= p;
struct nctempchar1 *nctemp9331;
static struct nctempchar1 nctemp9332 = {{ 4}, (char*)" =(\0"};
nctemp9331=&nctemp9332;
nctempchar1* nctemp9329= nctemp9331;
int nctemp9333=CodeEs(nctemp9327,nctemp9329);
struct tree* nctemp9335= p;
nctempchar1* nctemp9337= tempi;
int nctemp9340=CodeEs(nctemp9335,nctemp9337);
struct tree* nctemp9342= p;
struct tree* nctemp9346= p;
nctempchar1* nctemp9348=PtreeGetdef(nctemp9346);
nctempchar1* nctemp9344= nctemp9348;
int nctemp9349=CodeEs(nctemp9342,nctemp9344);
struct tree* nctemp9351= p;
nctempchar1* nctemp9353= rval;
int nctemp9356=CodeEs(nctemp9351,nctemp9353);
struct tree* nctemp9358= p;
struct nctempchar1 *nctemp9362;
static struct nctempchar1 nctemp9363 = {{ 5}, (char*)");\n\0"};
nctemp9362=&nctemp9363;
nctempchar1* nctemp9360= nctemp9362;
int nctemp9364=CodeEs(nctemp9358,nctemp9360);
return tempr;
}
else{
struct tree* nctemp9368= p;
nctempchar1* nctemp9370= type;
int nctemp9373=CodeEs(nctemp9368,nctemp9370);
struct tree* nctemp9375= p;
struct nctempchar1 *nctemp9379;
static struct nctempchar1 nctemp9380 = {{ 2}, (char*)" \0"};
nctemp9379=&nctemp9380;
nctempchar1* nctemp9377= nctemp9379;
int nctemp9381=CodeEs(nctemp9375,nctemp9377);
struct tree* nctemp9383= p;
nctempchar1* nctemp9385= tempr;
int nctemp9388=CodeEs(nctemp9383,nctemp9385);
struct tree* nctemp9390= p;
struct nctempchar1 *nctemp9394;
static struct nctempchar1 nctemp9395 = {{ 5}, (char*)" = (\0"};
nctemp9394=&nctemp9395;
nctempchar1* nctemp9392= nctemp9394;
int nctemp9396=CodeEs(nctemp9390,nctemp9392);
struct tree* nctemp9398= p;
nctempchar1* nctemp9400= lval;
int nctemp9403=CodeEs(nctemp9398,nctemp9400);
struct tree* nctemp9405= p;
struct tree* nctemp9409= p;
nctempchar1* nctemp9411=PtreeGetdef(nctemp9409);
nctempchar1* nctemp9407= nctemp9411;
int nctemp9412=CodeEs(nctemp9405,nctemp9407);
struct tree* nctemp9414= p;
nctempchar1* nctemp9416= rval;
int nctemp9419=CodeEs(nctemp9414,nctemp9416);
struct tree* nctemp9421= p;
struct nctempchar1 *nctemp9425;
static struct nctempchar1 nctemp9426 = {{ 5}, (char*)");\n\0"};
nctemp9425=&nctemp9426;
nctempchar1* nctemp9423= nctemp9425;
int nctemp9427=CodeEs(nctemp9421,nctemp9423);
return lval;
}
}
else{
struct tree* nctemp9431= p;
nctempchar1* nctemp9433= type;
int nctemp9436=CodeEs(nctemp9431,nctemp9433);
struct tree* nctemp9438= p;
struct nctempchar1 *nctemp9442;
static struct nctempchar1 nctemp9443 = {{ 2}, (char*)" \0"};
nctemp9442=&nctemp9443;
nctempchar1* nctemp9440= nctemp9442;
int nctemp9444=CodeEs(nctemp9438,nctemp9440);
struct tree* nctemp9446= p;
nctempchar1* nctemp9448= tempr;
int nctemp9451=CodeEs(nctemp9446,nctemp9448);
struct tree* nctemp9453= p;
struct nctempchar1 *nctemp9457;
static struct nctempchar1 nctemp9458 = {{ 5}, (char*)" = (\0"};
nctemp9457=&nctemp9458;
nctempchar1* nctemp9455= nctemp9457;
int nctemp9459=CodeEs(nctemp9453,nctemp9455);
struct tree* nctemp9461= p;
nctempchar1* nctemp9463= lval;
int nctemp9466=CodeEs(nctemp9461,nctemp9463);
struct tree* nctemp9468= p;
struct nctempchar1 *nctemp9472;
static struct nctempchar1 nctemp9473 = {{ 2}, (char*)" \0"};
nctemp9472=&nctemp9473;
nctempchar1* nctemp9470= nctemp9472;
int nctemp9474=CodeEs(nctemp9468,nctemp9470);
struct tree* nctemp9476= p;
struct tree* nctemp9480= p;
nctempchar1* nctemp9482=PtreeGetdef(nctemp9480);
nctempchar1* nctemp9478= nctemp9482;
int nctemp9483=CodeEs(nctemp9476,nctemp9478);
struct tree* nctemp9485= p;
nctempchar1* nctemp9487= rval;
int nctemp9490=CodeEs(nctemp9485,nctemp9487);
struct tree* nctemp9492= p;
struct nctempchar1 *nctemp9496;
static struct nctempchar1 nctemp9497 = {{ 5}, (char*)");\n\0"};
nctemp9496=&nctemp9497;
nctempchar1* nctemp9494= nctemp9496;
int nctemp9498=CodeEs(nctemp9492,nctemp9494);
return tempr;
}
}
else{
struct tree* nctemp9502= p;
nctempchar1* nctemp9504= type;
int nctemp9507=CodeEs(nctemp9502,nctemp9504);
struct tree* nctemp9509= p;
struct nctempchar1 *nctemp9513;
static struct nctempchar1 nctemp9514 = {{ 2}, (char*)" \0"};
nctemp9513=&nctemp9514;
nctempchar1* nctemp9511= nctemp9513;
int nctemp9515=CodeEs(nctemp9509,nctemp9511);
struct tree* nctemp9517= p;
nctempchar1* nctemp9519= tempr;
int nctemp9522=CodeEs(nctemp9517,nctemp9519);
struct tree* nctemp9524= p;
struct nctempchar1 *nctemp9528;
static struct nctempchar1 nctemp9529 = {{ 5}, (char*)" = (\0"};
nctemp9528=&nctemp9529;
nctempchar1* nctemp9526= nctemp9528;
int nctemp9530=CodeEs(nctemp9524,nctemp9526);
struct tree* nctemp9532= p;
nctempchar1* nctemp9534= lval;
int nctemp9537=CodeEs(nctemp9532,nctemp9534);
struct tree* nctemp9539= p;
struct nctempchar1 *nctemp9543;
static struct nctempchar1 nctemp9544 = {{ 2}, (char*)" \0"};
nctemp9543=&nctemp9544;
nctempchar1* nctemp9541= nctemp9543;
int nctemp9545=CodeEs(nctemp9539,nctemp9541);
struct tree* nctemp9547= p;
struct tree* nctemp9551= p;
nctempchar1* nctemp9553=PtreeGetdef(nctemp9551);
nctempchar1* nctemp9549= nctemp9553;
int nctemp9554=CodeEs(nctemp9547,nctemp9549);
struct tree* nctemp9556= p;
struct nctempchar1 *nctemp9560;
static struct nctempchar1 nctemp9561 = {{ 2}, (char*)" \0"};
nctemp9560=&nctemp9561;
nctempchar1* nctemp9558= nctemp9560;
int nctemp9562=CodeEs(nctemp9556,nctemp9558);
struct tree* nctemp9564= p;
nctempchar1* nctemp9566= rval;
int nctemp9569=CodeEs(nctemp9564,nctemp9566);
struct tree* nctemp9571= p;
struct nctempchar1 *nctemp9575;
static struct nctempchar1 nctemp9576 = {{ 5}, (char*)");\n\0"};
nctemp9575=&nctemp9576;
nctempchar1* nctemp9573= nctemp9575;
int nctemp9577=CodeEs(nctemp9571,nctemp9573);
return tempr;
}
}
}
}
else{
struct tree* nctemp9581= p;
nctempchar1* nctemp9583=CodeUnexpr(nctemp9581);
return nctemp9583;
}
}
int CodeDimprod (struct tree* p,nctempchar1 *name,int n)
{
int j;
for(j = 0;j < (n - 1);j = (j + 1)){
struct tree* nctemp9585= p;
nctempchar1* nctemp9587= name;
int nctemp9590=CodeEs(nctemp9585,nctemp9587);
struct tree* nctemp9592= p;
struct nctempchar1 *nctemp9596;
static struct nctempchar1 nctemp9597 = {{ 5}, (char*)"->d[\0"};
nctemp9596=&nctemp9597;
nctempchar1* nctemp9594= nctemp9596;
int nctemp9598=CodeEs(nctemp9592,nctemp9594);
int nctemp9600= j;
int nctemp9602=CodeEd(nctemp9600);
struct tree* nctemp9604= p;
struct nctempchar1 *nctemp9608;
static struct nctempchar1 nctemp9609 = {{ 2}, (char*)"]\0"};
nctemp9608=&nctemp9609;
nctempchar1* nctemp9606= nctemp9608;
int nctemp9610=CodeEs(nctemp9604,nctemp9606);
struct tree* nctemp9612= p;
struct nctempchar1 *nctemp9616;
static struct nctempchar1 nctemp9617 = {{ 2}, (char*)"*\0"};
nctemp9616=&nctemp9617;
nctempchar1* nctemp9614= nctemp9616;
int nctemp9618=CodeEs(nctemp9612,nctemp9614);
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
struct tree* nctemp9625= p;
nctempchar1* nctemp9627=PtreeGetdef(nctemp9625);
name=nctemp9627;
nctempchar1* nctemp9632= name;
struct symbol* nctemp9635=SymLook(nctemp9632);
tp =nctemp9635;
int nctemp9636 = (tp ==0);
if(nctemp9636)
{
nctempchar1* nctemp9641= name;
int nctemp9644=CodeError(nctemp9641);
}
struct symbol* nctemp9649= tp;
int nctemp9651=SymGetrank(nctemp9649);
rank =nctemp9651;
struct tree* nctemp9656= p;
struct tree* nctemp9658=PtreeMvchild(nctemp9656);
sp =nctemp9658;
int nctemp9659 = (sp ==0);
if(nctemp9659)
{
struct tree* nctemp9664= p;
struct tree* nctemp9668= p;
nctempchar1* nctemp9670=PtreeGetdef(nctemp9668);
nctempchar1* nctemp9666= nctemp9670;
int nctemp9671=CodeEs(nctemp9664,nctemp9666);
return 1;
}
else{
struct tree* nctemp9678= sp;
nctempchar1* nctemp9680=PtreeGetname(nctemp9678);
nctempchar1* nctemp9676= nctemp9680;
struct nctempchar1 *nctemp9683;
static struct nctempchar1 nctemp9684 = {{ 9}, (char*)"exprlist\0"};
nctemp9683=&nctemp9684;
nctempchar1* nctemp9681= nctemp9683;
int nctemp9685=LibeStrcmp(nctemp9676,nctemp9681);
int nctemp9673 = (nctemp9685 ==0);
if(nctemp9673)
{
struct tree* nctemp9688= p;
struct tree* nctemp9692= p;
nctempchar1* nctemp9694=PtreeGetdef(nctemp9692);
nctempchar1* nctemp9690= nctemp9694;
int nctemp9695=CodeEs(nctemp9688,nctemp9690);
return 1;
}
}
p = sp;
struct tree* nctemp9701= p;
struct tree* nctemp9703=PtreeMvchild(nctemp9701);
p =nctemp9703;
struct tree* nctemp9705= p;
nctempchar1* nctemp9707= name;
int nctemp9710=CodeEs(nctemp9705,nctemp9707);
struct tree* nctemp9712= p;
struct nctempchar1 *nctemp9716;
static struct nctempchar1 nctemp9717 = {{ 4}, (char*)"->a\0"};
nctemp9716=&nctemp9717;
nctempchar1* nctemp9714= nctemp9716;
int nctemp9718=CodeEs(nctemp9712,nctemp9714);
struct tree* nctemp9720= p;
struct nctempchar1 *nctemp9724;
static struct nctempchar1 nctemp9725 = {{ 2}, (char*)"[\0"};
nctemp9724=&nctemp9725;
nctempchar1* nctemp9722= nctemp9724;
int nctemp9726=CodeEs(nctemp9720,nctemp9722);
q = p;
nctempchar1 *nctemp9728 =qname;
int nctemp9727 =(nctemp9728!=0);
if(nctemp9727)
{
nctempchar1* nctemp9737= qname;
nctempchar1* nctemp9740= name;
nctempchar1* nctemp9743=LibeStradd(nctemp9737,nctemp9740);
qname=nctemp9743;
}
else{
nctempchar1* nctemp9749= name;
nctempchar1* nctemp9752=LibeStrsave(nctemp9749);
qname=nctemp9752;
}
for(i = 0;i < rank;i = (i + 1)){
int nctemp9753 = (i ==0);
if(nctemp9753)
{
struct tree* nctemp9758= q;
int nctemp9760=CodeSexpr(nctemp9758);
}
else{
struct tree* nctemp9765= q;
struct tree* nctemp9767=PtreeMvsister(nctemp9765);
q =nctemp9767;
struct tree* nctemp9769= p;
struct nctempchar1 *nctemp9773;
static struct nctempchar1 nctemp9774 = {{ 2}, (char*)"+\0"};
nctemp9773=&nctemp9774;
nctempchar1* nctemp9771= nctemp9773;
int nctemp9775=CodeEs(nctemp9769,nctemp9771);
struct tree* nctemp9777= p;
nctempchar1* nctemp9779= qname;
int nctemp9787 = i + 1;
int nctemp9782= nctemp9787;
int nctemp9788=CodeDimprod(nctemp9777,nctemp9779,nctemp9782);
struct tree* nctemp9790= q;
int nctemp9792=CodeSexpr(nctemp9790);
}
}
struct tree* nctemp9794= p;
struct nctempchar1 *nctemp9798;
static struct nctempchar1 nctemp9799 = {{ 2}, (char*)"]\0"};
nctemp9798=&nctemp9799;
nctempchar1* nctemp9796= nctemp9798;
int nctemp9800=CodeEs(nctemp9794,nctemp9796);
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
struct tree* nctemp9810= p;
nctempchar1* nctemp9812=PtreeGetarray(nctemp9810);
nctempchar1* nctemp9808= nctemp9812;
struct nctempchar1 *nctemp9815;
static struct nctempchar1 nctemp9816 = {{ 6}, (char*)"array\0"};
nctemp9815=&nctemp9816;
nctempchar1* nctemp9813= nctemp9815;
int nctemp9817=LibeStrcmp(nctemp9808,nctemp9813);
int nctemp9805 = (nctemp9817 ==1);
if(nctemp9805)
{
struct tree* nctemp9820= p;
nctempchar1* nctemp9822= qname;
int nctemp9825=CodeSarray(nctemp9820,nctemp9822);
struct tree* nctemp9830= p;
struct tree* nctemp9832=PtreeMvchild(nctemp9830);
np =nctemp9832;
int nctemp9833 = (np ==0);
if(nctemp9833)
{
return 1;
}
struct tree* nctemp9842= np;
struct tree* nctemp9844=PtreeMvsister(nctemp9842);
sp =nctemp9844;
int nctemp9845 = (sp ==0);
if(nctemp9845)
{
return 1;
}
struct tree* nctemp9851= p;
struct nctempchar1 *nctemp9855;
static struct nctempchar1 nctemp9856 = {{ 2}, (char*)".\0"};
nctemp9855=&nctemp9856;
nctempchar1* nctemp9853= nctemp9855;
int nctemp9857=CodeEs(nctemp9851,nctemp9853);
struct tree* nctemp9865= p;
nctempchar1* nctemp9867=PtreeGetdef(nctemp9865);
nctempchar1* nctemp9863= nctemp9867;
struct nctempchar1 *nctemp9870;
static struct nctempchar1 nctemp9871 = {{ 2}, (char*)".\0"};
nctemp9870=&nctemp9871;
nctempchar1* nctemp9868= nctemp9870;
nctempchar1* nctemp9872=LibeStradd(nctemp9863,nctemp9868);
qname=nctemp9872;
}
else{
struct tree* nctemp9874= p;
struct tree* nctemp9878= p;
nctempchar1* nctemp9880=PtreeGetdef(nctemp9878);
nctempchar1* nctemp9876= nctemp9880;
int nctemp9881=CodeEs(nctemp9874,nctemp9876);
struct tree* nctemp9889= p;
nctempchar1* nctemp9891=PtreeGetdef(nctemp9889);
nctempchar1* nctemp9887= nctemp9891;
struct nctempchar1 *nctemp9894;
static struct nctempchar1 nctemp9895 = {{ 3}, (char*)"->\0"};
nctemp9894=&nctemp9895;
nctempchar1* nctemp9892= nctemp9894;
nctempchar1* nctemp9896=LibeStradd(nctemp9887,nctemp9892);
qname=nctemp9896;
struct tree* nctemp9901= p;
struct tree* nctemp9903=PtreeMvchild(nctemp9901);
sp =nctemp9903;
int nctemp9904 = (sp ==0);
if(nctemp9904)
{
return 1;
}
struct tree* nctemp9910= p;
struct nctempchar1 *nctemp9914;
static struct nctempchar1 nctemp9915 = {{ 3}, (char*)"->\0"};
nctemp9914=&nctemp9915;
nctempchar1* nctemp9912= nctemp9914;
int nctemp9916=CodeEs(nctemp9910,nctemp9912);
}
struct tree* nctemp9922= sp;
nctempchar1* nctemp9924=PtreeGetarray(nctemp9922);
nctempchar1* nctemp9920= nctemp9924;
struct nctempchar1 *nctemp9927;
static struct nctempchar1 nctemp9928 = {{ 6}, (char*)"array\0"};
nctemp9927=&nctemp9928;
nctempchar1* nctemp9925= nctemp9927;
int nctemp9929=LibeStrcmp(nctemp9920,nctemp9925);
int nctemp9917 = (nctemp9929 ==1);
if(nctemp9917)
{
struct symbol* nctemp9935=SymGetltp();
tp =nctemp9935;
struct symbol* nctemp9940=SymGetetp();
up =nctemp9940;
struct tree* nctemp9947= p;
nctempchar1* nctemp9949=PtreeGetdef(nctemp9947);
nctempchar1* nctemp9945= nctemp9949;
struct symbol* nctemp9950=SymLook(nctemp9945);
uup =nctemp9950;
struct symbol* nctemp9957= uup;
nctempchar1* nctemp9959=SymGetype(nctemp9957);
nctempchar1* nctemp9955= nctemp9959;
struct symbol* nctemp9960=SymLook(nctemp9955);
uup =nctemp9960;
struct symbol* nctemp9964= uup;
struct symbol* nctemp9966=SymGetable(nctemp9964);
struct symbol* nctemp9962= nctemp9966;
int nctemp9967=SymSetltp(nctemp9962);
struct tree* nctemp9969= sp;
nctempchar1* nctemp9971= qname;
int nctemp9974=CodeSarray(nctemp9969,nctemp9971);
RunFree(qname->a);
RunFree(qname);
struct symbol* nctemp9979= tp;
int nctemp9981=SymSetltp(nctemp9979);
struct symbol* nctemp9983= up;
int nctemp9985=SymSetetp(nctemp9983);
}
else{
struct tree* nctemp9987= p;
struct tree* nctemp9991= sp;
nctempchar1* nctemp9993=PtreeGetdef(nctemp9991);
nctempchar1* nctemp9989= nctemp9993;
int nctemp9994=CodeEs(nctemp9987,nctemp9989);
}
return 1;
}
int CodeSident (struct tree* p)
{
nctempchar1 *qname;
qname  = 0;
struct tree* nctemp10001= p;
nctempchar1* nctemp10003=PtreeGetstruct(nctemp10001);
nctempchar1* nctemp9999= nctemp10003;
struct nctempchar1 *nctemp10006;
static struct nctempchar1 nctemp10007 = {{ 7}, (char*)"struct\0"};
nctemp10006=&nctemp10007;
nctempchar1* nctemp10004= nctemp10006;
int nctemp10008=LibeStrcmp(nctemp9999,nctemp10004);
int nctemp9996 = (nctemp10008 ==1);
if(nctemp9996)
{
struct tree* nctemp10011= p;
int nctemp10013=CodeIdstruct(nctemp10011);
}
else{
struct tree* nctemp10019= p;
nctempchar1* nctemp10021=PtreeGetarray(nctemp10019);
nctempchar1* nctemp10017= nctemp10021;
struct nctempchar1 *nctemp10024;
static struct nctempchar1 nctemp10025 = {{ 6}, (char*)"array\0"};
nctemp10024=&nctemp10025;
nctempchar1* nctemp10022= nctemp10024;
int nctemp10026=LibeStrcmp(nctemp10017,nctemp10022);
int nctemp10014 = (nctemp10026 ==1);
if(nctemp10014)
{
struct tree* nctemp10029= p;
nctempchar1* nctemp10031= qname;
int nctemp10034=CodeSarray(nctemp10029,nctemp10031);
return 1;
}
else{
struct tree* nctemp10037= p;
struct tree* nctemp10041= p;
nctempchar1* nctemp10043=PtreeGetdef(nctemp10041);
nctempchar1* nctemp10039= nctemp10043;
int nctemp10044=CodeEs(nctemp10037,nctemp10039);
return 1;
}
}
return 1;
}
int CodeSfcall (struct tree* p)
{
struct symbol* tp;
struct tree* sp;
struct tree* nctemp10053= p;
nctempchar1* nctemp10055=PtreeGetdef(nctemp10053);
nctempchar1* nctemp10051= nctemp10055;
struct symbol* nctemp10058=SymGetetp();
struct symbol* nctemp10056= nctemp10058;
struct symbol* nctemp10059=SymLookup(nctemp10051,nctemp10056);
tp =nctemp10059;
struct tree* nctemp10064= p;
struct tree* nctemp10066=PtreeMvchild(nctemp10064);
sp =nctemp10066;
int nctemp10067 = (sp !=0);
if(nctemp10067)
{
struct tree* nctemp10076= sp;
nctempchar1* nctemp10078=PtreeGetname(nctemp10076);
nctempchar1* nctemp10074= nctemp10078;
struct nctempchar1 *nctemp10081;
static struct nctempchar1 nctemp10082 = {{ 9}, (char*)"exprlist\0"};
nctemp10081=&nctemp10082;
nctempchar1* nctemp10079= nctemp10081;
int nctemp10083=LibeStrcmp(nctemp10074,nctemp10079);
int nctemp10071 = (nctemp10083 ==1);
if(nctemp10071)
{
struct tree* nctemp10089= sp;
struct tree* nctemp10091=PtreeMvchild(nctemp10089);
sp =nctemp10091;
}
}
struct tree* nctemp10093= p;
struct symbol* nctemp10097= tp;
nctempchar1* nctemp10099=SymGetname(nctemp10097);
nctempchar1* nctemp10095= nctemp10099;
int nctemp10100=CodeEs(nctemp10093,nctemp10095);
struct tree* nctemp10102= p;
struct nctempchar1 *nctemp10106;
static struct nctempchar1 nctemp10107 = {{ 2}, (char*)"(\0"};
nctemp10106=&nctemp10107;
nctempchar1* nctemp10104= nctemp10106;
int nctemp10108=CodeEs(nctemp10102,nctemp10104);
int nctemp10109 = (sp !=0);
int nctemp10113=nctemp10109;
while(nctemp10113)
{{
struct tree* nctemp10115= sp;
int nctemp10117=CodeSexpr(nctemp10115);
struct tree* nctemp10125= sp;
struct tree* nctemp10127=PtreeMvsister(nctemp10125);
sp =nctemp10127;
int nctemp10118 = (sp !=0);
if(nctemp10118)
{
struct tree* nctemp10130= p;
struct nctempchar1 *nctemp10134;
static struct nctempchar1 nctemp10135 = {{ 2}, (char*)",\0"};
nctemp10134=&nctemp10135;
nctempchar1* nctemp10132= nctemp10134;
int nctemp10136=CodeEs(nctemp10130,nctemp10132);
}
}
int nctemp10137 = (sp !=0);
nctemp10113=nctemp10137;}struct tree* nctemp10142= p;
struct nctempchar1 *nctemp10146;
static struct nctempchar1 nctemp10147 = {{ 2}, (char*)")\0"};
nctemp10146=&nctemp10147;
nctempchar1* nctemp10144= nctemp10146;
int nctemp10148=CodeEs(nctemp10142,nctemp10144);
return 1;
}
int CodeScast (struct tree* p)
{
struct tree* np;
struct tree* sp;
struct tree* nctemp10155= p;
nctempchar1* nctemp10157=PtreeGetname(nctemp10155);
nctempchar1* nctemp10153= nctemp10157;
struct nctempchar1 *nctemp10160;
static struct nctempchar1 nctemp10161 = {{ 5}, (char*)"cast\0"};
nctemp10160=&nctemp10161;
nctempchar1* nctemp10158= nctemp10160;
int nctemp10162=LibeStrcmp(nctemp10153,nctemp10158);
int nctemp10150 = (nctemp10162 ==1);
if(nctemp10150)
{
struct tree* nctemp10168= p;
struct tree* nctemp10170=PtreeMvchild(nctemp10168);
np =nctemp10170;
struct tree* nctemp10175= np;
struct tree* nctemp10177=PtreeMvsister(nctemp10175);
sp =nctemp10177;
struct tree* nctemp10179= p;
struct nctempchar1 *nctemp10183;
static struct nctempchar1 nctemp10184 = {{ 2}, (char*)"(\0"};
nctemp10183=&nctemp10184;
nctempchar1* nctemp10181= nctemp10183;
int nctemp10185=CodeEs(nctemp10179,nctemp10181);
struct tree* nctemp10191= np;
nctempchar1* nctemp10193=PtreeGetstruct(nctemp10191);
nctempchar1* nctemp10189= nctemp10193;
struct nctempchar1 *nctemp10196;
static struct nctempchar1 nctemp10197 = {{ 7}, (char*)"struct\0"};
nctemp10196=&nctemp10197;
nctempchar1* nctemp10194= nctemp10196;
int nctemp10198=LibeStrcmp(nctemp10189,nctemp10194);
int nctemp10186 = (nctemp10198 ==1);
if(nctemp10186)
{
struct tree* nctemp10201= p;
struct nctempchar1 *nctemp10205;
static struct nctempchar1 nctemp10206 = {{ 8}, (char*)"struct \0"};
nctemp10205=&nctemp10206;
nctempchar1* nctemp10203= nctemp10205;
int nctemp10207=CodeEs(nctemp10201,nctemp10203);
}
struct tree* nctemp10209= p;
struct tree* nctemp10213= np;
nctempchar1* nctemp10215=PtreeGetdef(nctemp10213);
nctempchar1* nctemp10211= nctemp10215;
int nctemp10216=CodeEs(nctemp10209,nctemp10211);
struct tree* nctemp10222= np;
nctempchar1* nctemp10224=PtreeGetstruct(nctemp10222);
nctempchar1* nctemp10220= nctemp10224;
struct nctempchar1 *nctemp10227;
static struct nctempchar1 nctemp10228 = {{ 6}, (char*)"array\0"};
nctemp10227=&nctemp10228;
nctempchar1* nctemp10225= nctemp10227;
int nctemp10229=LibeStrcmp(nctemp10220,nctemp10225);
int nctemp10217 = (nctemp10229 ==1);
if(nctemp10217)
{
struct tree* nctemp10232= p;
struct nctempchar1 *nctemp10236;
static struct nctempchar1 nctemp10237 = {{ 2}, (char*)"*\0"};
nctemp10236=&nctemp10237;
nctempchar1* nctemp10234= nctemp10236;
int nctemp10238=CodeEs(nctemp10232,nctemp10234);
}
struct tree* nctemp10240= p;
struct nctempchar1 *nctemp10244;
static struct nctempchar1 nctemp10245 = {{ 3}, (char*)")(\0"};
nctemp10244=&nctemp10245;
nctempchar1* nctemp10242= nctemp10244;
int nctemp10246=CodeEs(nctemp10240,nctemp10242);
struct tree* nctemp10248= sp;
int nctemp10250=CodeSexpr(nctemp10248);
struct tree* nctemp10252= p;
struct nctempchar1 *nctemp10256;
static struct nctempchar1 nctemp10257 = {{ 2}, (char*)")\0"};
nctemp10256=&nctemp10257;
nctempchar1* nctemp10254= nctemp10256;
int nctemp10258=CodeEs(nctemp10252,nctemp10254);
}
return 1;
}
int CodeSprimexpr (struct tree* p)
{
struct tree* nctemp10265= p;
nctempchar1* nctemp10267=PtreeGetname(nctemp10265);
nctempchar1* nctemp10263= nctemp10267;
struct nctempchar1 *nctemp10270;
static struct nctempchar1 nctemp10271 = {{ 11}, (char*)"identifier\0"};
nctemp10270=&nctemp10271;
nctempchar1* nctemp10268= nctemp10270;
int nctemp10272=LibeStrcmp(nctemp10263,nctemp10268);
int nctemp10260 = (nctemp10272 ==1);
if(nctemp10260)
{
struct tree* nctemp10275= p;
int nctemp10277=CodeSident(nctemp10275);
}
else{
struct tree* nctemp10283= p;
nctempchar1* nctemp10285=PtreeGetname(nctemp10283);
nctempchar1* nctemp10281= nctemp10285;
struct nctempchar1 *nctemp10288;
static struct nctempchar1 nctemp10289 = {{ 6}, (char*)"fcall\0"};
nctemp10288=&nctemp10289;
nctempchar1* nctemp10286= nctemp10288;
int nctemp10290=LibeStrcmp(nctemp10281,nctemp10286);
int nctemp10278 = (nctemp10290 ==1);
if(nctemp10278)
{
struct tree* nctemp10293= p;
int nctemp10295=CodeSfcall(nctemp10293);
}
else{
struct tree* nctemp10301= p;
nctempchar1* nctemp10303=PtreeGetname(nctemp10301);
nctempchar1* nctemp10299= nctemp10303;
struct nctempchar1 *nctemp10306;
static struct nctempchar1 nctemp10307 = {{ 5}, (char*)"cast\0"};
nctemp10306=&nctemp10307;
nctempchar1* nctemp10304= nctemp10306;
int nctemp10308=LibeStrcmp(nctemp10299,nctemp10304);
int nctemp10296 = (nctemp10308 ==1);
if(nctemp10296)
{
struct tree* nctemp10311= p;
int nctemp10313=CodeScast(nctemp10311);
}
else{
struct tree* nctemp10319= p;
nctempchar1* nctemp10321=PtreeGetname(nctemp10319);
nctempchar1* nctemp10317= nctemp10321;
struct nctempchar1 *nctemp10324;
static struct nctempchar1 nctemp10325 = {{ 10}, (char*)"iconstant\0"};
nctemp10324=&nctemp10325;
nctempchar1* nctemp10322= nctemp10324;
int nctemp10326=LibeStrcmp(nctemp10317,nctemp10322);
int nctemp10314 = (nctemp10326 ==1);
if(nctemp10314)
{
struct tree* nctemp10329= p;
struct tree* nctemp10333= p;
nctempchar1* nctemp10335=PtreeGetdef(nctemp10333);
nctempchar1* nctemp10331= nctemp10335;
int nctemp10336=CodeEs(nctemp10329,nctemp10331);
}
else{
struct tree* nctemp10342= p;
nctempchar1* nctemp10344=PtreeGetname(nctemp10342);
nctempchar1* nctemp10340= nctemp10344;
struct nctempchar1 *nctemp10347;
static struct nctempchar1 nctemp10348 = {{ 10}, (char*)"sconstant\0"};
nctemp10347=&nctemp10348;
nctempchar1* nctemp10345= nctemp10347;
int nctemp10349=LibeStrcmp(nctemp10340,nctemp10345);
int nctemp10337 = (nctemp10349 ==1);
if(nctemp10337)
{
struct tree* nctemp10352= p;
struct tree* nctemp10356= p;
nctempchar1* nctemp10358=PtreeGetdef(nctemp10356);
nctempchar1* nctemp10354= nctemp10358;
int nctemp10359=CodeEs(nctemp10352,nctemp10354);
}
else{
struct tree* nctemp10365= p;
nctempchar1* nctemp10367=PtreeGetname(nctemp10365);
nctempchar1* nctemp10363= nctemp10367;
struct nctempchar1 *nctemp10370;
static struct nctempchar1 nctemp10371 = {{ 10}, (char*)"rconstant\0"};
nctemp10370=&nctemp10371;
nctempchar1* nctemp10368= nctemp10370;
int nctemp10372=LibeStrcmp(nctemp10363,nctemp10368);
int nctemp10360 = (nctemp10372 ==1);
if(nctemp10360)
{
struct tree* nctemp10375= p;
struct tree* nctemp10379= p;
nctempchar1* nctemp10381=PtreeGetdef(nctemp10379);
nctempchar1* nctemp10377= nctemp10381;
int nctemp10382=CodeEs(nctemp10375,nctemp10377);
}
else{
struct tree* nctemp10384= p;
struct nctempchar1 *nctemp10388;
static struct nctempchar1 nctemp10389 = {{ 2}, (char*)"(\0"};
nctemp10388=&nctemp10389;
nctempchar1* nctemp10386= nctemp10388;
int nctemp10390=CodeEs(nctemp10384,nctemp10386);
struct tree* nctemp10392= p;
int nctemp10394=CodeSbinexpr(nctemp10392);
struct tree* nctemp10396= p;
struct nctempchar1 *nctemp10400;
static struct nctempchar1 nctemp10401 = {{ 2}, (char*)")\0"};
nctemp10400=&nctemp10401;
nctempchar1* nctemp10398= nctemp10400;
int nctemp10402=CodeEs(nctemp10396,nctemp10398);
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
struct tree* nctemp10409= p;
nctempchar1* nctemp10411=PtreeGetname(nctemp10409);
nctempchar1* nctemp10407= nctemp10411;
struct nctempchar1 *nctemp10414;
static struct nctempchar1 nctemp10415 = {{ 7}, (char*)"unexpr\0"};
nctemp10414=&nctemp10415;
nctempchar1* nctemp10412= nctemp10414;
int nctemp10416=LibeStrcmp(nctemp10407,nctemp10412);
int nctemp10404 = (nctemp10416 ==1);
if(nctemp10404)
{
struct tree* nctemp10419= p;
struct nctempchar1 *nctemp10423;
static struct nctempchar1 nctemp10424 = {{ 3}, (char*)" -\0"};
nctemp10423=&nctemp10424;
nctempchar1* nctemp10421= nctemp10423;
int nctemp10425=CodeEs(nctemp10419,nctemp10421);
struct tree* nctemp10429= p;
struct tree* nctemp10431=PtreeMvchild(nctemp10429);
struct tree* nctemp10427= nctemp10431;
int nctemp10432=CodeSprimexpr(nctemp10427);
}
else{
struct tree* nctemp10434= p;
int nctemp10436=CodeSprimexpr(nctemp10434);
}
return 1;
}
int CodeSbinexpr (struct tree* p)
{
struct tree* np;
struct tree* nctemp10443= p;
nctempchar1* nctemp10445=PtreeGetname(nctemp10443);
nctempchar1* nctemp10441= nctemp10445;
struct nctempchar1 *nctemp10448;
static struct nctempchar1 nctemp10449 = {{ 8}, (char*)"binexpr\0"};
nctemp10448=&nctemp10449;
nctempchar1* nctemp10446= nctemp10448;
int nctemp10450=LibeStrcmp(nctemp10441,nctemp10446);
int nctemp10438 = (nctemp10450 ==1);
if(nctemp10438)
{
struct tree* nctemp10456= p;
struct tree* nctemp10458=PtreeMvchild(nctemp10456);
np =nctemp10458;
struct tree* nctemp10460= np;
int nctemp10462=CodeSunexpr(nctemp10460);
struct tree* nctemp10474= p;
nctempchar1* nctemp10476=PtreeGetdef(nctemp10474);
nctempchar1* nctemp10472= nctemp10476;
struct nctempchar1 *nctemp10479;
static struct nctempchar1 nctemp10480 = {{ 2}, (char*)"=\0"};
nctemp10479=&nctemp10480;
nctempchar1* nctemp10477= nctemp10479;
int nctemp10481=LibeStrcmp(nctemp10472,nctemp10477);
int nctemp10469 = (nctemp10481 ==1);
struct tree* nctemp10489= p;
nctempchar1* nctemp10491=PtreeGetdef(nctemp10489);
nctempchar1* nctemp10487= nctemp10491;
struct nctempchar1 *nctemp10494;
static struct nctempchar1 nctemp10495 = {{ 3}, (char*)"==\0"};
nctemp10494=&nctemp10495;
nctempchar1* nctemp10492= nctemp10494;
int nctemp10496=LibeStrcmp(nctemp10487,nctemp10492);
int nctemp10484 = (nctemp10496 ==1);
int nctemp10466 = (nctemp10469 || nctemp10484);
struct tree* nctemp10504= p;
nctempchar1* nctemp10506=PtreeGetdef(nctemp10504);
nctempchar1* nctemp10502= nctemp10506;
struct nctempchar1 *nctemp10509;
static struct nctempchar1 nctemp10510 = {{ 3}, (char*)"!=\0"};
nctemp10509=&nctemp10510;
nctempchar1* nctemp10507= nctemp10509;
int nctemp10511=LibeStrcmp(nctemp10502,nctemp10507);
int nctemp10499 = (nctemp10511 ==1);
int nctemp10463 = (nctemp10466 || nctemp10499);
if(nctemp10463)
{
struct tree* nctemp10518= np;
nctempchar1* nctemp10520=PtreeGetref(nctemp10518);
nctempchar1* nctemp10516= nctemp10520;
struct nctempchar1 *nctemp10523;
static struct nctempchar1 nctemp10524 = {{ 5}, (char*)"aref\0"};
nctemp10523=&nctemp10524;
nctempchar1* nctemp10521= nctemp10523;
int nctemp10525=LibeStrcmp(nctemp10516,nctemp10521);
int nctemp10513 = (nctemp10525 ==1);
if(nctemp10513)
{
struct tree* nctemp10534= np;
struct tree* nctemp10536=PtreeMvsister(nctemp10534);
struct tree* nctemp10532= nctemp10536;
nctempchar1* nctemp10537=PtreeGetname(nctemp10532);
nctempchar1* nctemp10530= nctemp10537;
struct nctempchar1 *nctemp10540;
static struct nctempchar1 nctemp10541 = {{ 10}, (char*)"iconstant\0"};
nctemp10540=&nctemp10541;
nctempchar1* nctemp10538= nctemp10540;
int nctemp10542=LibeStrcmp(nctemp10530,nctemp10538);
struct tree* nctemp10548= np;
struct tree* nctemp10550=PtreeMvsister(nctemp10548);
struct tree* nctemp10546= nctemp10550;
nctempchar1* nctemp10551=PtreeGetdef(nctemp10546);
nctempchar1* nctemp10544= nctemp10551;
struct nctempchar1 *nctemp10554;
static struct nctempchar1 nctemp10555 = {{ 2}, (char*)"0\0"};
nctemp10554=&nctemp10555;
nctempchar1* nctemp10552= nctemp10554;
int nctemp10556=LibeStrcmp(nctemp10544,nctemp10552);
int nctemp10527 = (nctemp10542 && nctemp10556);
if(nctemp10527)
{
struct tree* nctemp10558= p;
struct nctempchar1 *nctemp10562;
static struct nctempchar1 nctemp10563 = {{ 2}, (char*)" \0"};
nctemp10562=&nctemp10563;
nctempchar1* nctemp10560= nctemp10562;
int nctemp10564=CodeEs(nctemp10558,nctemp10560);
}
}
}
struct tree* nctemp10566= p;
struct nctempchar1 *nctemp10570;
static struct nctempchar1 nctemp10571 = {{ 2}, (char*)" \0"};
nctemp10570=&nctemp10571;
nctempchar1* nctemp10568= nctemp10570;
int nctemp10572=CodeEs(nctemp10566,nctemp10568);
struct tree* nctemp10574= p;
struct tree* nctemp10578= p;
nctempchar1* nctemp10580=PtreeGetdef(nctemp10578);
nctempchar1* nctemp10576= nctemp10580;
int nctemp10581=CodeEs(nctemp10574,nctemp10576);
struct tree* nctemp10583= p;
struct nctempchar1 *nctemp10587;
static struct nctempchar1 nctemp10588 = {{ 2}, (char*)" \0"};
nctemp10587=&nctemp10588;
nctempchar1* nctemp10585= nctemp10587;
int nctemp10589=CodeEs(nctemp10583,nctemp10585);
struct tree* nctemp10593= np;
struct tree* nctemp10595=PtreeMvsister(nctemp10593);
struct tree* nctemp10591= nctemp10595;
int nctemp10596=CodeSunexpr(nctemp10591);
}
else{
struct tree* nctemp10598= p;
int nctemp10600=CodeSunexpr(nctemp10598);
}
return 1;
}
int CodeSexpr (struct tree* p)
{
struct tree* sp;
struct tree* nctemp10606= p;
struct tree* nctemp10608=PtreeMvchild(nctemp10606);
sp =nctemp10608;
struct tree* nctemp10610= sp;
int nctemp10612=CodeSbinexpr(nctemp10610);
return 1;
}
nctempchar1 * CodeExpr (struct tree* p)
{
nctempchar1 *rval;
struct tree* sp;
struct tree* nctemp10618= p;
struct tree* nctemp10620=PtreeMvchild(nctemp10618);
sp =nctemp10620;
struct tree* nctemp10626= sp;
nctempchar1* nctemp10628=CodeBinexpr(nctemp10626);
rval=nctemp10628;
return rval;
}
int CodeSforstmnt (struct tree* p)
{
struct tree* nctemp10635= p;
struct tree* nctemp10637=PtreeMvchild(nctemp10635);
p =nctemp10637;
struct tree* nctemp10639= p;
struct nctempchar1 *nctemp10643;
static struct nctempchar1 nctemp10644 = {{ 5}, (char*)"for(\0"};
nctemp10643=&nctemp10644;
nctempchar1* nctemp10641= nctemp10643;
int nctemp10645=CodeEs(nctemp10639,nctemp10641);
struct tree* nctemp10647= p;
int nctemp10649=CodeSexpr(nctemp10647);
struct tree* nctemp10651= p;
struct nctempchar1 *nctemp10655;
static struct nctempchar1 nctemp10656 = {{ 2}, (char*)";\0"};
nctemp10655=&nctemp10656;
nctempchar1* nctemp10653= nctemp10655;
int nctemp10657=CodeEs(nctemp10651,nctemp10653);
struct tree* nctemp10662= p;
struct tree* nctemp10664=PtreeMvsister(nctemp10662);
p =nctemp10664;
struct tree* nctemp10666= p;
int nctemp10668=CodeSexpr(nctemp10666);
struct tree* nctemp10670= p;
struct nctempchar1 *nctemp10674;
static struct nctempchar1 nctemp10675 = {{ 2}, (char*)";\0"};
nctemp10674=&nctemp10675;
nctempchar1* nctemp10672= nctemp10674;
int nctemp10676=CodeEs(nctemp10670,nctemp10672);
struct tree* nctemp10681= p;
struct tree* nctemp10683=PtreeMvsister(nctemp10681);
p =nctemp10683;
struct tree* nctemp10685= p;
int nctemp10687=CodeSexpr(nctemp10685);
struct tree* nctemp10689= p;
struct nctempchar1 *nctemp10693;
static struct nctempchar1 nctemp10694 = {{ 2}, (char*)")\0"};
nctemp10693=&nctemp10694;
nctempchar1* nctemp10691= nctemp10693;
int nctemp10695=CodeEs(nctemp10689,nctemp10691);
struct tree* nctemp10700= p;
struct tree* nctemp10702=PtreeMvsister(nctemp10700);
p =nctemp10702;
struct tree* nctemp10704= p;
int nctemp10706=CodeStmnt(nctemp10704);
return 1;
}
int CodeWhilestmnt (struct tree* p)
{
nctempchar1 *cond;
nctempchar1 *tmp;
nctempchar1 *cond2;
struct tree* sp;
struct tree* nctemp10712= p;
struct tree* nctemp10714=PtreeMvchild(nctemp10712);
p =nctemp10714;
sp = p;
struct tree* nctemp10720= sp;
nctempchar1* nctemp10722=CodeExpr(nctemp10720);
cond=nctemp10722;
nctempchar1* nctemp10728=CodeMktemp();
tmp=nctemp10728;
struct tree* nctemp10730= p;
struct tree* nctemp10734= sp;
nctempchar1* nctemp10736=PtreeGetype(nctemp10734);
nctempchar1* nctemp10732= nctemp10736;
int nctemp10737=CodeEs(nctemp10730,nctemp10732);
struct tree* nctemp10739= p;
struct nctempchar1 *nctemp10743;
static struct nctempchar1 nctemp10744 = {{ 2}, (char*)" \0"};
nctemp10743=&nctemp10744;
nctempchar1* nctemp10741= nctemp10743;
int nctemp10745=CodeEs(nctemp10739,nctemp10741);
struct tree* nctemp10747= p;
nctempchar1* nctemp10749= tmp;
int nctemp10752=CodeEs(nctemp10747,nctemp10749);
struct tree* nctemp10754= p;
struct nctempchar1 *nctemp10758;
static struct nctempchar1 nctemp10759 = {{ 2}, (char*)"=\0"};
nctemp10758=&nctemp10759;
nctempchar1* nctemp10756= nctemp10758;
int nctemp10760=CodeEs(nctemp10754,nctemp10756);
struct tree* nctemp10762= p;
nctempchar1* nctemp10764= cond;
int nctemp10767=CodeEs(nctemp10762,nctemp10764);
struct tree* nctemp10769= p;
struct nctempchar1 *nctemp10773;
static struct nctempchar1 nctemp10774 = {{ 4}, (char*)";\n\0"};
nctemp10773=&nctemp10774;
nctempchar1* nctemp10771= nctemp10773;
int nctemp10775=CodeEs(nctemp10769,nctemp10771);
struct tree* nctemp10777= p;
struct nctempchar1 *nctemp10781;
static struct nctempchar1 nctemp10782 = {{ 7}, (char*)"while(\0"};
nctemp10781=&nctemp10782;
nctempchar1* nctemp10779= nctemp10781;
int nctemp10783=CodeEs(nctemp10777,nctemp10779);
struct tree* nctemp10785= p;
nctempchar1* nctemp10787= tmp;
int nctemp10790=CodeEs(nctemp10785,nctemp10787);
struct tree* nctemp10792= p;
struct nctempchar1 *nctemp10796;
static struct nctempchar1 nctemp10797 = {{ 4}, (char*)")\n\0"};
nctemp10796=&nctemp10797;
nctempchar1* nctemp10794= nctemp10796;
int nctemp10798=CodeEs(nctemp10792,nctemp10794);
struct tree* nctemp10800= p;
struct nctempchar1 *nctemp10804;
static struct nctempchar1 nctemp10805 = {{ 2}, (char*)"{\0"};
nctemp10804=&nctemp10805;
nctempchar1* nctemp10802= nctemp10804;
int nctemp10806=CodeEs(nctemp10800,nctemp10802);
struct tree* nctemp10811= p;
struct tree* nctemp10813=PtreeMvsister(nctemp10811);
p =nctemp10813;
struct tree* nctemp10815= p;
int nctemp10817=CodeStmnt(nctemp10815);
struct tree* nctemp10823= sp;
nctempchar1* nctemp10825=CodeExpr(nctemp10823);
cond2=nctemp10825;
struct tree* nctemp10827= p;
nctempchar1* nctemp10829= tmp;
int nctemp10832=CodeEs(nctemp10827,nctemp10829);
struct tree* nctemp10834= p;
struct nctempchar1 *nctemp10838;
static struct nctempchar1 nctemp10839 = {{ 2}, (char*)"=\0"};
nctemp10838=&nctemp10839;
nctempchar1* nctemp10836= nctemp10838;
int nctemp10840=CodeEs(nctemp10834,nctemp10836);
struct tree* nctemp10842= p;
nctempchar1* nctemp10844= cond2;
int nctemp10847=CodeEs(nctemp10842,nctemp10844);
struct tree* nctemp10849= p;
struct nctempchar1 *nctemp10853;
static struct nctempchar1 nctemp10854 = {{ 2}, (char*)";\0"};
nctemp10853=&nctemp10854;
nctempchar1* nctemp10851= nctemp10853;
int nctemp10855=CodeEs(nctemp10849,nctemp10851);
struct tree* nctemp10857= p;
struct nctempchar1 *nctemp10861;
static struct nctempchar1 nctemp10862 = {{ 2}, (char*)"}\0"};
nctemp10861=&nctemp10862;
nctempchar1* nctemp10859= nctemp10861;
int nctemp10863=CodeEs(nctemp10857,nctemp10859);
return 1;
}
int CodeForstmnt (struct tree* p)
{
struct tree* sp;
struct tree* np;
nctempchar1 *cond;
nctempchar1 *tmp;
struct tree* nctemp10869= p;
struct tree* nctemp10871=PtreeMvchild(nctemp10869);
p =nctemp10871;
struct tree* nctemp10873= p;
nctempchar1* nctemp10875=CodeExpr(nctemp10873);
struct tree* nctemp10880= p;
struct tree* nctemp10882=PtreeMvsister(nctemp10880);
p =nctemp10882;
np = p;
struct tree* nctemp10888= p;
nctempchar1* nctemp10890=CodeExpr(nctemp10888);
cond=nctemp10890;
struct tree* nctemp10892= p;
struct nctempchar1 *nctemp10896;
static struct nctempchar1 nctemp10897 = {{ 7}, (char*)"while(\0"};
nctemp10896=&nctemp10897;
nctempchar1* nctemp10894= nctemp10896;
int nctemp10898=CodeEs(nctemp10892,nctemp10894);
struct tree* nctemp10900= p;
nctempchar1* nctemp10902= cond;
int nctemp10905=CodeEs(nctemp10900,nctemp10902);
struct tree* nctemp10907= p;
struct nctempchar1 *nctemp10911;
static struct nctempchar1 nctemp10912 = {{ 5}, (char*)"){\n\0"};
nctemp10911=&nctemp10912;
nctempchar1* nctemp10909= nctemp10911;
int nctemp10913=CodeEs(nctemp10907,nctemp10909);
struct tree* nctemp10918= p;
struct tree* nctemp10920=PtreeMvsister(nctemp10918);
p =nctemp10920;
sp = p;
struct tree* nctemp10925= p;
struct tree* nctemp10927=PtreeMvsister(nctemp10925);
p =nctemp10927;
struct tree* nctemp10929= p;
int nctemp10931=CodeStmnt(nctemp10929);
struct tree* nctemp10933= sp;
nctempchar1* nctemp10935=CodeExpr(nctemp10933);
struct tree* nctemp10941= np;
nctempchar1* nctemp10943=CodeExpr(nctemp10941);
tmp=nctemp10943;
struct tree* nctemp10945= p;
nctempchar1* nctemp10947= cond;
int nctemp10950=CodeEs(nctemp10945,nctemp10947);
struct tree* nctemp10952= p;
struct nctempchar1 *nctemp10956;
static struct nctempchar1 nctemp10957 = {{ 2}, (char*)"=\0"};
nctemp10956=&nctemp10957;
nctempchar1* nctemp10954= nctemp10956;
int nctemp10958=CodeEs(nctemp10952,nctemp10954);
struct tree* nctemp10960= p;
nctempchar1* nctemp10962= tmp;
int nctemp10965=CodeEs(nctemp10960,nctemp10962);
struct tree* nctemp10967= p;
struct nctempchar1 *nctemp10971;
static struct nctempchar1 nctemp10972 = {{ 4}, (char*)";\n\0"};
nctemp10971=&nctemp10972;
nctempchar1* nctemp10969= nctemp10971;
int nctemp10973=CodeEs(nctemp10967,nctemp10969);
struct tree* nctemp10975= p;
struct nctempchar1 *nctemp10979;
static struct nctempchar1 nctemp10980 = {{ 4}, (char*)"}\n\0"};
nctemp10979=&nctemp10980;
nctempchar1* nctemp10977= nctemp10979;
int nctemp10981=CodeEs(nctemp10975,nctemp10977);
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
int nctemp10983 = (p ==0);
if(nctemp10983)
{
return 1;
}
struct tree* nctemp10992= p;
struct tree* nctemp10994=PtreeMvsister(nctemp10992);
p =nctemp10994;
struct tree* nctemp10996= p;
int nctemp10998= level;
int nctemp11000= rank;
int nctemp11002=CodeParallelfor(nctemp10996,nctemp10998,nctemp11000);
struct tree* nctemp11007= sp;
struct tree* nctemp11009=PtreeMvchild(nctemp11007);
rp =nctemp11009;
struct tree* nctemp11014= rp;
struct tree* nctemp11016=PtreeMvchild(nctemp11014);
qp =nctemp11016;
struct tree* nctemp11021= qp;
struct tree* nctemp11023=PtreeMvchild(nctemp11021);
qp =nctemp11023;
struct tree* nctemp11029= qp;
nctempchar1* nctemp11031=PtreeGetdef(nctemp11029);
index=nctemp11031;
struct tree* nctemp11039= qp;
struct tree* nctemp11041=PtreeMvsister(nctemp11039);
struct tree* nctemp11037= nctemp11041;
nctempchar1* nctemp11042=CodeBinexpr(nctemp11037);
init=nctemp11042;
struct tree* nctemp11047= rp;
struct tree* nctemp11049=PtreeMvsister(nctemp11047);
rrp =nctemp11049;
struct tree* nctemp11055= rrp;
nctempchar1* nctemp11057=CodeExpr(nctemp11055);
cond=nctemp11057;
int nctemp11058 = (level ==rank);
if(nctemp11058)
{
struct tree* nctemp11063= p;
struct nctempchar1 *nctemp11067;
static struct nctempchar1 nctemp11068 = {{ 30}, (char*)"\n #pragma omp parallel for\n\0"};
nctemp11067=&nctemp11068;
nctempchar1* nctemp11065= nctemp11067;
int nctemp11069=CodeEs(nctemp11063,nctemp11065);
}
struct tree* nctemp11071= rp;
struct nctempchar1 *nctemp11075;
static struct nctempchar1 nctemp11076 = {{ 5}, (char*)"for(\0"};
nctemp11075=&nctemp11076;
nctempchar1* nctemp11073= nctemp11075;
int nctemp11077=CodeEs(nctemp11071,nctemp11073);
struct tree* nctemp11079= rp;
nctempchar1* nctemp11081= index;
int nctemp11084=CodeEs(nctemp11079,nctemp11081);
struct tree* nctemp11086= rp;
struct nctempchar1 *nctemp11090;
static struct nctempchar1 nctemp11091 = {{ 2}, (char*)"=\0"};
nctemp11090=&nctemp11091;
nctempchar1* nctemp11088= nctemp11090;
int nctemp11092=CodeEs(nctemp11086,nctemp11088);
struct tree* nctemp11094= rp;
nctempchar1* nctemp11096= init;
int nctemp11099=CodeEs(nctemp11094,nctemp11096);
struct tree* nctemp11101= rp;
struct nctempchar1 *nctemp11105;
static struct nctempchar1 nctemp11106 = {{ 2}, (char*)";\0"};
nctemp11105=&nctemp11106;
nctempchar1* nctemp11103= nctemp11105;
int nctemp11107=CodeEs(nctemp11101,nctemp11103);
struct tree* nctemp11112= rp;
struct tree* nctemp11114=PtreeMvsister(nctemp11112);
rp =nctemp11114;
struct tree* nctemp11116= rp;
nctempchar1* nctemp11118= index;
int nctemp11121=CodeEs(nctemp11116,nctemp11118);
struct tree* nctemp11123= rp;
struct nctempchar1 *nctemp11127;
static struct nctempchar1 nctemp11128 = {{ 2}, (char*)"<\0"};
nctemp11127=&nctemp11128;
nctempchar1* nctemp11125= nctemp11127;
int nctemp11129=CodeEs(nctemp11123,nctemp11125);
struct tree* nctemp11131= p;
nctempchar1* nctemp11133= cond;
int nctemp11136=CodeEs(nctemp11131,nctemp11133);
struct tree* nctemp11138= rp;
struct nctempchar1 *nctemp11142;
static struct nctempchar1 nctemp11143 = {{ 2}, (char*)";\0"};
nctemp11142=&nctemp11143;
nctempchar1* nctemp11140= nctemp11142;
int nctemp11144=CodeEs(nctemp11138,nctemp11140);
struct tree* nctemp11152= rp;
struct tree* nctemp11154=PtreeMvsister(nctemp11152);
rp =nctemp11154;
int nctemp11145 = (rp !=0);
if(nctemp11145)
{
struct tree* nctemp11157= rp;
nctempchar1* nctemp11159= index;
int nctemp11162=CodeEs(nctemp11157,nctemp11159);
struct tree* nctemp11164= rp;
struct nctempchar1 *nctemp11168;
static struct nctempchar1 nctemp11169 = {{ 2}, (char*)"=\0"};
nctemp11168=&nctemp11169;
nctempchar1* nctemp11166= nctemp11168;
int nctemp11170=CodeEs(nctemp11164,nctemp11166);
struct tree* nctemp11172= rp;
nctempchar1* nctemp11174= index;
int nctemp11177=CodeEs(nctemp11172,nctemp11174);
struct tree* nctemp11179= rp;
struct nctempchar1 *nctemp11183;
static struct nctempchar1 nctemp11184 = {{ 2}, (char*)"+\0"};
nctemp11183=&nctemp11184;
nctempchar1* nctemp11181= nctemp11183;
int nctemp11185=CodeEs(nctemp11179,nctemp11181);
struct tree* nctemp11187= rp;
nctempchar1* nctemp11189=CodeExpr(nctemp11187);
}
else{
struct tree* nctemp11191= rp;
nctempchar1* nctemp11193= index;
int nctemp11196=CodeEs(nctemp11191,nctemp11193);
struct tree* nctemp11198= rp;
struct nctempchar1 *nctemp11202;
static struct nctempchar1 nctemp11203 = {{ 2}, (char*)"=\0"};
nctemp11202=&nctemp11203;
nctempchar1* nctemp11200= nctemp11202;
int nctemp11204=CodeEs(nctemp11198,nctemp11200);
struct tree* nctemp11206= rp;
nctempchar1* nctemp11208= index;
int nctemp11211=CodeEs(nctemp11206,nctemp11208);
struct tree* nctemp11213= rp;
struct nctempchar1 *nctemp11217;
static struct nctempchar1 nctemp11218 = {{ 2}, (char*)"+\0"};
nctemp11217=&nctemp11218;
nctempchar1* nctemp11215= nctemp11217;
int nctemp11219=CodeEs(nctemp11213,nctemp11215);
struct tree* nctemp11221= rp;
struct nctempchar1 *nctemp11225;
static struct nctempchar1 nctemp11226 = {{ 2}, (char*)"1\0"};
nctemp11225=&nctemp11226;
nctempchar1* nctemp11223= nctemp11225;
int nctemp11227=CodeEs(nctemp11221,nctemp11223);
}
struct tree* nctemp11229= rp;
struct nctempchar1 *nctemp11233;
static struct nctempchar1 nctemp11234 = {{ 3}, (char*)"){\0"};
nctemp11233=&nctemp11234;
nctempchar1* nctemp11231= nctemp11233;
int nctemp11235=CodeEs(nctemp11229,nctemp11231);
return 1;
}
int CodeParallelstmntcpu (struct tree* p)
{
struct tree* sp;
int rank;
int i;
sp = p;
struct tree* nctemp11241= sp;
int nctemp11243=PtreeGetrank(nctemp11241);
rank =nctemp11243;
struct tree* nctemp11248= p;
struct tree* nctemp11250=PtreeMvchild(nctemp11248);
p =nctemp11250;
struct tree* nctemp11255= p;
struct tree* nctemp11257=PtreeMvchild(nctemp11255);
p =nctemp11257;
struct tree* nctemp11259= p;
int nctemp11261= 0;
int nctemp11263= rank;
int nctemp11265=CodeParallelfor(nctemp11259,nctemp11261,nctemp11263);
struct tree* nctemp11270= sp;
struct tree* nctemp11272=PtreeMvchild(nctemp11270);
sp =nctemp11272;
struct tree* nctemp11277= sp;
struct tree* nctemp11279=PtreeMvsister(nctemp11277);
sp =nctemp11279;
struct tree* nctemp11281= sp;
int nctemp11283=CodeStmnt(nctemp11281);
for(i = 0;i < rank;i = (i + 1)){
struct tree* nctemp11285= sp;
struct nctempchar1 *nctemp11289;
static struct nctempchar1 nctemp11290 = {{ 2}, (char*)"}\0"};
nctemp11289=&nctemp11290;
nctempchar1* nctemp11287= nctemp11289;
int nctemp11291=CodeEs(nctemp11285,nctemp11287);
}
return 1;
}
nctempchar1 * CodeParprocno (struct tree* p)
{
struct tree* nctemp11294= p;
struct nctempchar1 *nctemp11298;
static struct nctempchar1 nctemp11299 = {{ 13}, (char*)"int nctempno\0"};
nctemp11298=&nctemp11299;
nctempchar1* nctemp11296= nctemp11298;
int nctemp11300=CodeEs(nctemp11294,nctemp11296);
struct tree* nctemp11302= p;
struct nctempchar1 *nctemp11306;
static struct nctempchar1 nctemp11307 = {{ 39}, (char*)"=blockIdx.x*blockDim.x + threadIdx.x; \0"};
nctemp11306=&nctemp11307;
nctempchar1* nctemp11304= nctemp11306;
int nctemp11308=CodeEs(nctemp11302,nctemp11304);
struct nctempchar1 *nctemp11310;
static struct nctempchar1 nctemp11311 = {{ 9}, (char*)"nctempno\0"};
nctemp11310=&nctemp11311;
return nctemp11310;
}
nctempchar1 * CodeParidx (struct tree* p)
{
struct tree* nctemp11316= p;
struct tree* nctemp11318=PtreeMvchild(nctemp11316);
p =nctemp11318;
struct tree* nctemp11323= p;
struct tree* nctemp11325=PtreeMvchild(nctemp11323);
p =nctemp11325;
struct tree* nctemp11330= p;
struct tree* nctemp11332=PtreeMvchild(nctemp11330);
p =nctemp11332;
struct tree* nctemp11334= p;
nctempchar1* nctemp11336=PtreeGetdef(nctemp11334);
return nctemp11336;
}
nctempchar1 * CodeParidxrank (struct tree* p,int r)
{
int i;
for(i = 0;i < (r - 1);i = (i + 1)){
struct tree* nctemp11341= p;
struct tree* nctemp11343=PtreeMvsister(nctemp11341);
p =nctemp11343;
}
struct tree* nctemp11345= p;
nctempchar1* nctemp11347=CodeParidx(nctemp11345);
return nctemp11347;
}
nctempchar1 * CodeParllim (struct tree* p)
{
nctempchar1 *tmp;
nctempchar1 *temp;
struct tree* nctemp11352= p;
struct tree* nctemp11354=PtreeMvchild(nctemp11352);
p =nctemp11354;
struct tree* nctemp11360= p;
nctempchar1* nctemp11362=CodeExpr(nctemp11360);
tmp=nctemp11362;
nctempchar1* nctemp11368=CodeMktemp();
temp=nctemp11368;
struct tree* nctemp11370= p;
struct nctempchar1 *nctemp11374;
static struct nctempchar1 nctemp11375 = {{ 5}, (char*)"int \0"};
nctemp11374=&nctemp11375;
nctempchar1* nctemp11372= nctemp11374;
int nctemp11376=CodeEs(nctemp11370,nctemp11372);
struct tree* nctemp11378= p;
nctempchar1* nctemp11380= temp;
int nctemp11383=CodeEs(nctemp11378,nctemp11380);
struct tree* nctemp11385= p;
struct nctempchar1 *nctemp11389;
static struct nctempchar1 nctemp11390 = {{ 2}, (char*)"=\0"};
nctemp11389=&nctemp11390;
nctempchar1* nctemp11387= nctemp11389;
int nctemp11391=CodeEs(nctemp11385,nctemp11387);
struct tree* nctemp11393= p;
nctempchar1* nctemp11395= tmp;
int nctemp11398=CodeEs(nctemp11393,nctemp11395);
struct tree* nctemp11400= p;
struct nctempchar1 *nctemp11404;
static struct nctempchar1 nctemp11405 = {{ 4}, (char*)";\n\0"};
nctemp11404=&nctemp11405;
nctempchar1* nctemp11402= nctemp11404;
int nctemp11406=CodeEs(nctemp11400,nctemp11402);
return temp;
}
nctempchar1 * CodeParulim (struct tree* p)
{
struct tree* nctemp11413= p;
struct tree* nctemp11415=PtreeMvchild(nctemp11413);
p =nctemp11415;
struct tree* nctemp11420= p;
struct tree* nctemp11422=PtreeMvsister(nctemp11420);
p =nctemp11422;
struct tree* nctemp11424= p;
nctempchar1* nctemp11426=CodeExpr(nctemp11424);
return nctemp11426;
}
nctempchar1 * CodeParllimrank (struct tree* p,int r)
{
int i;
for(i = 0;i < (r - 1);i = (i + 1)){
struct tree* nctemp11431= p;
struct tree* nctemp11433=PtreeMvsister(nctemp11431);
p =nctemp11433;
}
struct tree* nctemp11435= p;
nctempchar1* nctemp11437=CodeParllim(nctemp11435);
return nctemp11437;
}
nctempchar1 * CodeParulimrank (struct tree* p,int r)
{
int i;
for(i = 0;i < (r - 1);i = (i + 1)){
struct tree* nctemp11442= p;
struct tree* nctemp11444=PtreeMvsister(nctemp11442);
p =nctemp11444;
}
struct tree* nctemp11446= p;
nctempchar1* nctemp11448=CodeParulim(nctemp11446);
return nctemp11448;
}
nctempchar1 * CodeParlen (struct tree* p,nctempchar1 *llim)
{
nctempchar1 *tmp1;
nctempchar1 *tmp2;
nctempchar1 *tmp3;
nctempchar1* nctemp11454=CodeMktemp();
tmp1=nctemp11454;
struct tree* nctemp11460= p;
nctempchar1* nctemp11462=CodeParulim(nctemp11460);
tmp2=nctemp11462;
struct tree* nctemp11468= p;
nctempchar1* nctemp11470=CodeParllim(nctemp11468);
tmp3=nctemp11470;
struct tree* nctemp11472= p;
struct nctempchar1 *nctemp11476;
static struct nctempchar1 nctemp11477 = {{ 5}, (char*)"int \0"};
nctemp11476=&nctemp11477;
nctempchar1* nctemp11474= nctemp11476;
int nctemp11478=CodeEs(nctemp11472,nctemp11474);
struct tree* nctemp11480= p;
nctempchar1* nctemp11482= tmp1;
int nctemp11485=CodeEs(nctemp11480,nctemp11482);
struct tree* nctemp11487= p;
struct nctempchar1 *nctemp11491;
static struct nctempchar1 nctemp11492 = {{ 2}, (char*)"=\0"};
nctemp11491=&nctemp11492;
nctempchar1* nctemp11489= nctemp11491;
int nctemp11493=CodeEs(nctemp11487,nctemp11489);
struct tree* nctemp11495= p;
nctempchar1* nctemp11497= tmp2;
int nctemp11500=CodeEs(nctemp11495,nctemp11497);
struct tree* nctemp11502= p;
struct nctempchar1 *nctemp11506;
static struct nctempchar1 nctemp11507 = {{ 2}, (char*)"-\0"};
nctemp11506=&nctemp11507;
nctempchar1* nctemp11504= nctemp11506;
int nctemp11508=CodeEs(nctemp11502,nctemp11504);
struct tree* nctemp11510= p;
nctempchar1* nctemp11512= tmp3;
int nctemp11515=CodeEs(nctemp11510,nctemp11512);
struct tree* nctemp11517= p;
struct nctempchar1 *nctemp11521;
static struct nctempchar1 nctemp11522 = {{ 4}, (char*)";\n\0"};
nctemp11521=&nctemp11522;
nctempchar1* nctemp11519= nctemp11521;
int nctemp11523=CodeEs(nctemp11517,nctemp11519);
nctempchar1* nctemp11527= tmp3;
nctempchar1* nctemp11530= llim;
int nctemp11533=LibeStrcpy(nctemp11527,nctemp11530);
int nctemp11524 = (nctemp11533 ==0);
if(nctemp11524)
{
struct nctempchar1 *nctemp11538;
static struct nctempchar1 nctemp11539 = {{ 31}, (char*)"Internal error in CodeParlen\n\0"};
nctemp11538=&nctemp11539;
nctempchar1* nctemp11536= nctemp11538;
int nctemp11540=CodeError(nctemp11536);
}
return tmp1;
}
nctempchar1 * CodeParlenrank (struct tree* p,int r,nctempchar1 *llim)
{
int i;
nctempchar1 *tmp;
for(i = 0;i < (r - 1);i = (i + 1)){
struct tree* nctemp11547= p;
struct tree* nctemp11549=PtreeMvsister(nctemp11547);
p =nctemp11549;
}
struct tree* nctemp11555= p;
nctempchar1* nctemp11557= llim;
nctempchar1* nctemp11560=CodeParlen(nctemp11555,nctemp11557);
tmp=nctemp11560;
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
int nctemp11567=m->d[0];r =nctemp11567;
nctempchar1* nctemp11576=CodeMktemp();
nsize=nctemp11576;
struct tree* nctemp11578= p;
struct nctempchar1 *nctemp11582;
static struct nctempchar1 nctemp11583 = {{ 5}, (char*)"int \0"};
nctemp11582=&nctemp11583;
nctempchar1* nctemp11580= nctemp11582;
int nctemp11584=CodeEs(nctemp11578,nctemp11580);
struct tree* nctemp11586= p;
nctempchar1* nctemp11588= nsize;
int nctemp11591=CodeEs(nctemp11586,nctemp11588);
struct tree* nctemp11593= p;
struct nctempchar1 *nctemp11597;
static struct nctempchar1 nctemp11598 = {{ 2}, (char*)"=\0"};
nctemp11597=&nctemp11598;
nctempchar1* nctemp11595= nctemp11597;
int nctemp11599=CodeEs(nctemp11593,nctemp11595);
for(i = 0;i < r;i = (i + 1)){
int nctemp11608 = r - 1;
int nctemp11600 = (i ==nctemp11608);
if(nctemp11600)
{
struct tree* nctemp11610= p;
int nctemp11614=i;
nctempchar1* nctemp11612= m->a[nctemp11614].s;
int nctemp11617=CodeEs(nctemp11610,nctemp11612);
struct tree* nctemp11619= p;
struct nctempchar1 *nctemp11623;
static struct nctempchar1 nctemp11624 = {{ 4}, (char*)";\n\0"};
nctemp11623=&nctemp11624;
nctempchar1* nctemp11621= nctemp11623;
int nctemp11625=CodeEs(nctemp11619,nctemp11621);
}
else{
struct tree* nctemp11627= p;
int nctemp11631=i;
nctempchar1* nctemp11629= m->a[nctemp11631].s;
int nctemp11634=CodeEs(nctemp11627,nctemp11629);
struct tree* nctemp11636= p;
struct nctempchar1 *nctemp11640;
static struct nctempchar1 nctemp11641 = {{ 2}, (char*)"*\0"};
nctemp11640=&nctemp11641;
nctempchar1* nctemp11638= nctemp11640;
int nctemp11642=CodeEs(nctemp11636,nctemp11638);
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
int nctemp11646= 1;
int nctemp11648=CodeSetparallel(nctemp11646);
sp = p;
struct tree* nctemp11653= p;
int nctemp11655=PtreeGetrank(nctemp11653);
rank =nctemp11655;
int nctemp11662=rank;
struct nctempcharr1 *nctemp11661;
nctemp11661=(struct nctempcharr1*)RunMalloc(sizeof(struct nctempcharr1));
nctemp11661->d[0]=rank;
nctemp11661->a=(struct charr*)RunMalloc(sizeof(struct charr)*nctemp11662);
m=nctemp11661;
int nctemp11671=rank;
struct nctempcharr1 *nctemp11670;
nctemp11670=(struct nctempcharr1*)RunMalloc(sizeof(struct nctempcharr1));
nctemp11670->d[0]=rank;
nctemp11670->a=(struct charr*)RunMalloc(sizeof(struct charr)*nctemp11671);
i=nctemp11670;
int nctemp11680=rank;
struct nctempcharr1 *nctemp11679;
nctemp11679=(struct nctempcharr1*)RunMalloc(sizeof(struct nctempcharr1));
nctemp11679->d[0]=rank;
nctemp11679->a=(struct charr*)RunMalloc(sizeof(struct charr)*nctemp11680);
nl=nctemp11679;
struct tree* nctemp11687= p;
struct tree* nctemp11689=PtreeMvchild(nctemp11687);
p =nctemp11689;
struct tree* nctemp11694= p;
struct tree* nctemp11696=PtreeMvchild(nctemp11694);
slice =nctemp11696;
struct tree* nctemp11698= p;
struct nctempchar1 *nctemp11702;
static struct nctempchar1 nctemp11703 = {{ 4}, (char*)"{\n\0"};
nctemp11702=&nctemp11703;
nctempchar1* nctemp11700= nctemp11702;
int nctemp11704=CodeEs(nctemp11698,nctemp11700);
struct tree* nctemp11710= slice;
nctempchar1* nctemp11712=CodeParprocno(nctemp11710);
pno=nctemp11712;
for(l = 0;l < rank;l = (l + 1)){
int nctemp11716=l;
struct tree* nctemp11720= slice;
int nctemp11727 = l + 1;
int nctemp11722= nctemp11727;
nctempchar1* nctemp11728=CodeParidxrank(nctemp11720,nctemp11722);
i->a[nctemp11716].s=nctemp11728;
int nctemp11732=l;
int nctemp11737=4096;
nctempchar1 *nctemp11736;
nctemp11736=(nctempchar1*)RunMalloc(sizeof(nctempchar1));
nctemp11736->d[0]=4096;
nctemp11736->a=(char *)RunMalloc(sizeof(char)*nctemp11737);
nl->a[nctemp11732].s=nctemp11736;
int nctemp11743=l;
struct tree* nctemp11747= slice;
int nctemp11754 = l + 1;
int nctemp11749= nctemp11754;
int nctemp11757=l;
nctempchar1* nctemp11755= nl->a[nctemp11757].s;
nctempchar1* nctemp11760=CodeParlenrank(nctemp11747,nctemp11749,nctemp11755);
m->a[nctemp11743].s=nctemp11760;
}
struct tree* nctemp11766= p;
nctempcharr1* nctemp11768= m;
nctempchar1* nctemp11771=CodeParnsize(nctemp11766,nctemp11768);
nmax=nctemp11771;
struct tree* nctemp11773= p;
struct nctempchar1 *nctemp11777;
static struct nctempchar1 nctemp11778 = {{ 5}, (char*)"for(\0"};
nctemp11777=&nctemp11778;
nctempchar1* nctemp11775= nctemp11777;
int nctemp11779=CodeEs(nctemp11773,nctemp11775);
struct tree* nctemp11781= p;
nctempchar1* nctemp11783= pno;
int nctemp11786=CodeEs(nctemp11781,nctemp11783);
struct tree* nctemp11788= p;
struct nctempchar1 *nctemp11792;
static struct nctempchar1 nctemp11793 = {{ 39}, (char*)"=blockIdx.x*blockDim.x + threadIdx.x; \0"};
nctemp11792=&nctemp11793;
nctempchar1* nctemp11790= nctemp11792;
int nctemp11794=CodeEs(nctemp11788,nctemp11790);
struct tree* nctemp11796= p;
nctempchar1* nctemp11798= pno;
int nctemp11801=CodeEs(nctemp11796,nctemp11798);
struct tree* nctemp11803= p;
struct nctempchar1 *nctemp11807;
static struct nctempchar1 nctemp11808 = {{ 2}, (char*)"<\0"};
nctemp11807=&nctemp11808;
nctempchar1* nctemp11805= nctemp11807;
int nctemp11809=CodeEs(nctemp11803,nctemp11805);
struct tree* nctemp11811= p;
nctempchar1* nctemp11813= nmax;
int nctemp11816=CodeEs(nctemp11811,nctemp11813);
struct tree* nctemp11818= p;
struct nctempchar1 *nctemp11822;
static struct nctempchar1 nctemp11823 = {{ 2}, (char*)";\0"};
nctemp11822=&nctemp11823;
nctempchar1* nctemp11820= nctemp11822;
int nctemp11824=CodeEs(nctemp11818,nctemp11820);
struct tree* nctemp11826= p;
nctempchar1* nctemp11828= pno;
int nctemp11831=CodeEs(nctemp11826,nctemp11828);
struct tree* nctemp11833= p;
struct nctempchar1 *nctemp11837;
static struct nctempchar1 nctemp11838 = {{ 23}, (char*)"+=blockDim.x*gridDim.x\0"};
nctemp11837=&nctemp11838;
nctempchar1* nctemp11835= nctemp11837;
int nctemp11839=CodeEs(nctemp11833,nctemp11835);
struct tree* nctemp11841= p;
struct nctempchar1 *nctemp11845;
static struct nctempchar1 nctemp11846 = {{ 5}, (char*)"){\n\0"};
nctemp11845=&nctemp11846;
nctempchar1* nctemp11843= nctemp11845;
int nctemp11847=CodeEs(nctemp11841,nctemp11843);
struct nctempchar1 *nctemp11855;
static struct nctempchar1 nctemp11856 = {{ 2}, (char*)"1\0"};
nctemp11855=&nctemp11856;
nctempchar1* nctemp11853= nctemp11855;
nctempchar1* nctemp11857=LibeStrsave(nctemp11853);
qk=nctemp11857;
for(l = 0;l < rank;l = (l + 1)){
int nctemp11866 = rank - 1;
int nctemp11858 = (l ==nctemp11866);
if(nctemp11858)
{
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
static struct nctempchar1 nctemp11944 = {{ 2}, (char*)"+\0"};
nctemp11943=&nctemp11944;
nctempchar1* nctemp11941= nctemp11943;
int nctemp11945=CodeEs(nctemp11939,nctemp11941);
struct tree* nctemp11947= p;
int nctemp11951=l;
nctempchar1* nctemp11949= nl->a[nctemp11951].s;
int nctemp11954=CodeEs(nctemp11947,nctemp11949);
int nctemp11957=l;
RunFree(nl->a[nctemp11957].s->a);
RunFree(nl->a[nctemp11957].s);
struct tree* nctemp11961= p;
struct nctempchar1 *nctemp11965;
static struct nctempchar1 nctemp11966 = {{ 4}, (char*)";\n\0"};
nctemp11965=&nctemp11966;
nctempchar1* nctemp11963= nctemp11965;
int nctemp11967=CodeEs(nctemp11961,nctemp11963);
}
else{
struct tree* nctemp11969= p;
int nctemp11973=l;
nctempchar1* nctemp11971= i->a[nctemp11973].s;
int nctemp11976=CodeEs(nctemp11969,nctemp11971);
struct tree* nctemp11978= p;
struct nctempchar1 *nctemp11982;
static struct nctempchar1 nctemp11983 = {{ 2}, (char*)"=\0"};
nctemp11982=&nctemp11983;
nctempchar1* nctemp11980= nctemp11982;
int nctemp11984=CodeEs(nctemp11978,nctemp11980);
struct tree* nctemp11986= p;
struct nctempchar1 *nctemp11990;
static struct nctempchar1 nctemp11991 = {{ 2}, (char*)"(\0"};
nctemp11990=&nctemp11991;
nctempchar1* nctemp11988= nctemp11990;
int nctemp11992=CodeEs(nctemp11986,nctemp11988);
struct tree* nctemp11994= p;
nctempchar1* nctemp11996= pno;
int nctemp11999=CodeEs(nctemp11994,nctemp11996);
struct tree* nctemp12001= p;
struct nctempchar1 *nctemp12005;
static struct nctempchar1 nctemp12006 = {{ 2}, (char*)"/\0"};
nctemp12005=&nctemp12006;
nctempchar1* nctemp12003= nctemp12005;
int nctemp12007=CodeEs(nctemp12001,nctemp12003);
struct tree* nctemp12009= p;
struct nctempchar1 *nctemp12013;
static struct nctempchar1 nctemp12014 = {{ 2}, (char*)"(\0"};
nctemp12013=&nctemp12014;
nctempchar1* nctemp12011= nctemp12013;
int nctemp12015=CodeEs(nctemp12009,nctemp12011);
struct tree* nctemp12017= p;
nctempchar1* nctemp12019= qk;
int nctemp12022=CodeEs(nctemp12017,nctemp12019);
struct tree* nctemp12024= p;
struct nctempchar1 *nctemp12028;
static struct nctempchar1 nctemp12029 = {{ 2}, (char*)")\0"};
nctemp12028=&nctemp12029;
nctempchar1* nctemp12026= nctemp12028;
int nctemp12030=CodeEs(nctemp12024,nctemp12026);
struct tree* nctemp12032= p;
struct nctempchar1 *nctemp12036;
static struct nctempchar1 nctemp12037 = {{ 2}, (char*)")\0"};
nctemp12036=&nctemp12037;
nctempchar1* nctemp12034= nctemp12036;
int nctemp12038=CodeEs(nctemp12032,nctemp12034);
struct tree* nctemp12040= p;
struct nctempchar1 *nctemp12044;
static struct nctempchar1 nctemp12045 = {{ 2}, (char*)"%\0"};
nctemp12044=&nctemp12045;
nctempchar1* nctemp12042= nctemp12044;
int nctemp12046=CodeEs(nctemp12040,nctemp12042);
struct tree* nctemp12048= p;
int nctemp12052=l;
nctempchar1* nctemp12050= m->a[nctemp12052].s;
int nctemp12055=CodeEs(nctemp12048,nctemp12050);
struct tree* nctemp12057= p;
struct nctempchar1 *nctemp12061;
static struct nctempchar1 nctemp12062 = {{ 2}, (char*)"+\0"};
nctemp12061=&nctemp12062;
nctempchar1* nctemp12059= nctemp12061;
int nctemp12063=CodeEs(nctemp12057,nctemp12059);
struct tree* nctemp12065= p;
int nctemp12069=l;
nctempchar1* nctemp12067= nl->a[nctemp12069].s;
int nctemp12072=CodeEs(nctemp12065,nctemp12067);
int nctemp12075=l;
RunFree(nl->a[nctemp12075].s->a);
RunFree(nl->a[nctemp12075].s);
struct tree* nctemp12079= p;
struct nctempchar1 *nctemp12083;
static struct nctempchar1 nctemp12084 = {{ 4}, (char*)";\n\0"};
nctemp12083=&nctemp12084;
nctempchar1* nctemp12081= nctemp12083;
int nctemp12085=CodeEs(nctemp12079,nctemp12081);
}
nctempchar1* nctemp12091= qk;
struct nctempchar1 *nctemp12096;
static struct nctempchar1 nctemp12097 = {{ 2}, (char*)"*\0"};
nctemp12096=&nctemp12097;
nctempchar1* nctemp12094= nctemp12096;
nctempchar1* nctemp12098=LibeStradd(nctemp12091,nctemp12094);
tmp=nctemp12098;
RunFree(qk->a);
RunFree(qk);
qk = tmp;
nctempchar1* nctemp12107= qk;
int nctemp12112=l;
nctempchar1* nctemp12110= m->a[nctemp12112].s;
nctempchar1* nctemp12115=LibeStradd(nctemp12107,nctemp12110);
tmp=nctemp12115;
RunFree(qk->a);
RunFree(qk);
qk = tmp;
}
struct tree* nctemp12123= sp;
struct tree* nctemp12125=PtreeMvchild(nctemp12123);
p =nctemp12125;
struct tree* nctemp12130= p;
struct tree* nctemp12132=PtreeMvsister(nctemp12130);
p =nctemp12132;
struct tree* nctemp12134= p;
int nctemp12136=CodeCompstmnt(nctemp12134);
struct tree* nctemp12138= p;
struct nctempchar1 *nctemp12142;
static struct nctempchar1 nctemp12143 = {{ 4}, (char*)"}\n\0"};
nctemp12142=&nctemp12143;
nctempchar1* nctemp12140= nctemp12142;
int nctemp12144=CodeEs(nctemp12138,nctemp12140);
struct tree* nctemp12146= p;
struct nctempchar1 *nctemp12150;
static struct nctempchar1 nctemp12151 = {{ 4}, (char*)"}\n\0"};
nctemp12150=&nctemp12151;
nctempchar1* nctemp12148= nctemp12150;
int nctemp12152=CodeEs(nctemp12146,nctemp12148);
int nctemp12154= 0;
int nctemp12156=CodeSetparallel(nctemp12154);
return 1;
}
int CodeParallelstmnt (struct tree* p)
{
int nctemp12161=CodeGetarch();
int nctemp12158 = (nctemp12161 ==1);
if(nctemp12158)
{
struct tree* nctemp12164= p;
int nctemp12166=CodeParallelstmntcpu(nctemp12164);
}
else{
int nctemp12170=CodeGetarch();
int nctemp12167 = (nctemp12170 ==2);
if(nctemp12167)
{
struct tree* nctemp12173= p;
int nctemp12175=CodeParallelstmntgpu(nctemp12173);
}
else{
int nctemp12179=CodeGetarch();
int nctemp12176 = (nctemp12179 ==3);
if(nctemp12176)
{
struct tree* nctemp12182= p;
int nctemp12184=CodeParallelstmntgpu(nctemp12182);
}
}
}
return 1;
}
int CodeIfstmnt (struct tree* p)
{
nctempchar1 *cond;
struct tree* nctemp12190= p;
struct tree* nctemp12192=PtreeMvchild(nctemp12190);
p =nctemp12192;
struct tree* nctemp12198= p;
nctempchar1* nctemp12200=CodeExpr(nctemp12198);
cond=nctemp12200;
struct tree* nctemp12202= p;
struct nctempchar1 *nctemp12206;
static struct nctempchar1 nctemp12207 = {{ 4}, (char*)"if(\0"};
nctemp12206=&nctemp12207;
nctempchar1* nctemp12204= nctemp12206;
int nctemp12208=CodeEs(nctemp12202,nctemp12204);
struct tree* nctemp12210= p;
nctempchar1* nctemp12212= cond;
int nctemp12215=CodeEs(nctemp12210,nctemp12212);
struct tree* nctemp12217= p;
struct nctempchar1 *nctemp12221;
static struct nctempchar1 nctemp12222 = {{ 4}, (char*)")\n\0"};
nctemp12221=&nctemp12222;
nctempchar1* nctemp12219= nctemp12221;
int nctemp12223=CodeEs(nctemp12217,nctemp12219);
struct tree* nctemp12228= p;
struct tree* nctemp12230=PtreeMvsister(nctemp12228);
p =nctemp12230;
struct tree* nctemp12232= p;
int nctemp12234=CodeStmnt(nctemp12232);
struct tree* nctemp12242= p;
struct tree* nctemp12244=PtreeMvsister(nctemp12242);
p =nctemp12244;
int nctemp12235 = (p !=0);
if(nctemp12235)
{
struct tree* nctemp12251= p;
nctempchar1* nctemp12253=PtreeGetname(nctemp12251);
nctempchar1* nctemp12249= nctemp12253;
struct nctempchar1 *nctemp12256;
static struct nctempchar1 nctemp12257 = {{ 5}, (char*)"else\0"};
nctemp12256=&nctemp12257;
nctempchar1* nctemp12254= nctemp12256;
int nctemp12258=LibeStrcmp(nctemp12249,nctemp12254);
int nctemp12246 = (nctemp12258 ==1);
if(nctemp12246)
{
struct tree* nctemp12264= p;
struct tree* nctemp12266=PtreeMvchild(nctemp12264);
p =nctemp12266;
struct tree* nctemp12268= p;
struct nctempchar1 *nctemp12272;
static struct nctempchar1 nctemp12273 = {{ 5}, (char*)"else\0"};
nctemp12272=&nctemp12273;
nctempchar1* nctemp12270= nctemp12272;
int nctemp12274=CodeEs(nctemp12268,nctemp12270);
struct tree* nctemp12276= p;
int nctemp12278=CodeStmnt(nctemp12276);
}
}
return 1;
}
int CodeReturnstmnt (struct tree* p)
{
struct tree* np;
nctempchar1 *rval;
struct tree* nctemp12284= p;
struct tree* nctemp12286=PtreeMvchild(nctemp12284);
np =nctemp12286;
struct tree* nctemp12292= np;
nctempchar1* nctemp12294=CodeExpr(nctemp12292);
rval=nctemp12294;
struct tree* nctemp12296= np;
struct nctempchar1 *nctemp12300;
static struct nctempchar1 nctemp12301 = {{ 8}, (char*)"return \0"};
nctemp12300=&nctemp12301;
nctempchar1* nctemp12298= nctemp12300;
int nctemp12302=CodeEs(nctemp12296,nctemp12298);
struct tree* nctemp12304= np;
nctempchar1* nctemp12306= rval;
int nctemp12309=CodeEs(nctemp12304,nctemp12306);
struct tree* nctemp12311= np;
struct nctempchar1 *nctemp12315;
static struct nctempchar1 nctemp12316 = {{ 4}, (char*)";\n\0"};
nctemp12315=&nctemp12316;
nctempchar1* nctemp12313= nctemp12315;
int nctemp12317=CodeEs(nctemp12311,nctemp12313);
return 1;
}
int CodeCompstmnt (struct tree* p)
{
struct tree* sp;
struct tree* q;
struct tree* r;
sp = p;
struct tree* nctemp12320= p;
struct nctempchar1 *nctemp12324;
static struct nctempchar1 nctemp12325 = {{ 4}, (char*)"{\n\0"};
nctemp12324=&nctemp12325;
nctempchar1* nctemp12322= nctemp12324;
int nctemp12326=CodeEs(nctemp12320,nctemp12322);
struct tree* nctemp12331= p;
struct tree* nctemp12333=PtreeMvchild(nctemp12331);
p =nctemp12333;
int nctemp12334 = (p ==0);
if(nctemp12334)
{
struct tree* nctemp12339= sp;
struct nctempchar1 *nctemp12343;
static struct nctempchar1 nctemp12344 = {{ 4}, (char*)"}\n\0"};
nctemp12343=&nctemp12344;
nctempchar1* nctemp12341= nctemp12343;
int nctemp12345=CodeEs(nctemp12339,nctemp12341);
return 1;
}
struct tree* nctemp12348= p;
struct symbol* nctemp12352=SymGetltp();
struct symbol* nctemp12350= nctemp12352;
int nctemp12353=CodeDeclarations(nctemp12348,nctemp12350);
struct tree* nctemp12359= p;
nctempchar1* nctemp12361=PtreeGetname(nctemp12359);
nctempchar1* nctemp12357= nctemp12361;
struct nctempchar1 *nctemp12364;
static struct nctempchar1 nctemp12365 = {{ 13}, (char*)"declarations\0"};
nctemp12364=&nctemp12365;
nctempchar1* nctemp12362= nctemp12364;
int nctemp12366=LibeStrcmp(nctemp12357,nctemp12362);
int nctemp12354 = (nctemp12366 ==1);
if(nctemp12354)
{
struct tree* nctemp12372= p;
struct tree* nctemp12374=PtreeMvsister(nctemp12372);
p =nctemp12374;
}
int nctemp12375 = (p !=0);
int nctemp12379=nctemp12375;
while(nctemp12379)
{{
struct tree* nctemp12385= p;
nctempchar1* nctemp12387=PtreeGetname(nctemp12385);
nctempchar1* nctemp12383= nctemp12387;
struct nctempchar1 *nctemp12390;
static struct nctempchar1 nctemp12391 = {{ 5}, (char*)"expr\0"};
nctemp12390=&nctemp12391;
nctempchar1* nctemp12388= nctemp12390;
int nctemp12392=LibeStrcmp(nctemp12383,nctemp12388);
int nctemp12380 = (nctemp12392 ==1);
if(nctemp12380)
{
int nctemp12397=CodeGetbreak();
int nctemp12394 = (nctemp12397 ==1);
if(nctemp12394)
{
struct tree* nctemp12400= p;
nctempchar1* nctemp12402=CodeExpr(nctemp12400);
}
else{
struct tree* nctemp12406= p;
int nctemp12408=PtreeGetsimple(nctemp12406);
int nctemp12403 = (nctemp12408 ==1);
if(nctemp12403)
{
struct tree* nctemp12411= p;
int nctemp12413=CodeSexpr(nctemp12411);
struct tree* nctemp12415= p;
struct nctempchar1 *nctemp12419;
static struct nctempchar1 nctemp12420 = {{ 4}, (char*)";\n\0"};
nctemp12419=&nctemp12420;
nctempchar1* nctemp12417= nctemp12419;
int nctemp12421=CodeEs(nctemp12415,nctemp12417);
}
else{
struct tree* nctemp12423= p;
nctempchar1* nctemp12425=CodeExpr(nctemp12423);
}
}
}
struct tree* nctemp12431= p;
nctempchar1* nctemp12433=PtreeGetname(nctemp12431);
nctempchar1* nctemp12429= nctemp12433;
struct nctempchar1 *nctemp12436;
static struct nctempchar1 nctemp12437 = {{ 6}, (char*)"while\0"};
nctemp12436=&nctemp12437;
nctempchar1* nctemp12434= nctemp12436;
int nctemp12438=LibeStrcmp(nctemp12429,nctemp12434);
int nctemp12426 = (nctemp12438 ==1);
if(nctemp12426)
{
struct tree* nctemp12441= p;
int nctemp12443=CodeWhilestmnt(nctemp12441);
}
struct tree* nctemp12449= p;
nctempchar1* nctemp12451=PtreeGetname(nctemp12449);
nctempchar1* nctemp12447= nctemp12451;
struct nctempchar1 *nctemp12454;
static struct nctempchar1 nctemp12455 = {{ 4}, (char*)"for\0"};
nctemp12454=&nctemp12455;
nctempchar1* nctemp12452= nctemp12454;
int nctemp12456=LibeStrcmp(nctemp12447,nctemp12452);
int nctemp12444 = (nctemp12456 ==1);
if(nctemp12444)
{
struct tree* nctemp12462= p;
struct tree* nctemp12464=PtreeMvchild(nctemp12462);
q =nctemp12464;
struct tree* nctemp12469= q;
struct tree* nctemp12471=PtreeMvsister(nctemp12469);
r =nctemp12471;
struct tree* nctemp12478= q;
int nctemp12480=PtreeGetsimple(nctemp12478);
struct tree* nctemp12482= r;
int nctemp12484=PtreeGetsimple(nctemp12482);
int nctemp12475 = (nctemp12480 && nctemp12484);
struct tree* nctemp12488= r;
struct tree* nctemp12490=PtreeMvsister(nctemp12488);
struct tree* nctemp12486= nctemp12490;
int nctemp12491=PtreeGetsimple(nctemp12486);
int nctemp12472 = (nctemp12475 && nctemp12491);
if(nctemp12472)
{
struct tree* nctemp12493= p;
int nctemp12495=CodeSforstmnt(nctemp12493);
}
else{
struct tree* nctemp12497= q;
int nctemp12499= 0;
int nctemp12501=PtreeSetsimple(nctemp12497,nctemp12499);
struct tree* nctemp12503= r;
int nctemp12505= 0;
int nctemp12507=PtreeSetsimple(nctemp12503,nctemp12505);
struct tree* nctemp12511= r;
struct tree* nctemp12513=PtreeMvsister(nctemp12511);
struct tree* nctemp12509= nctemp12513;
int nctemp12514= 0;
int nctemp12516=PtreeSetsimple(nctemp12509,nctemp12514);
struct tree* nctemp12518= p;
int nctemp12520=CodeForstmnt(nctemp12518);
}
}
struct tree* nctemp12526= p;
nctempchar1* nctemp12528=PtreeGetname(nctemp12526);
nctempchar1* nctemp12524= nctemp12528;
struct nctempchar1 *nctemp12531;
static struct nctempchar1 nctemp12532 = {{ 9}, (char*)"parallel\0"};
nctemp12531=&nctemp12532;
nctempchar1* nctemp12529= nctemp12531;
int nctemp12533=LibeStrcmp(nctemp12524,nctemp12529);
int nctemp12521 = (nctemp12533 ==1);
if(nctemp12521)
{
struct tree* nctemp12536= p;
int nctemp12538=CodeParallelstmnt(nctemp12536);
}
struct tree* nctemp12544= p;
nctempchar1* nctemp12546=PtreeGetname(nctemp12544);
nctempchar1* nctemp12542= nctemp12546;
struct nctempchar1 *nctemp12549;
static struct nctempchar1 nctemp12550 = {{ 3}, (char*)"if\0"};
nctemp12549=&nctemp12550;
nctempchar1* nctemp12547= nctemp12549;
int nctemp12551=LibeStrcmp(nctemp12542,nctemp12547);
int nctemp12539 = (nctemp12551 ==1);
if(nctemp12539)
{
struct tree* nctemp12554= p;
int nctemp12556=CodeIfstmnt(nctemp12554);
}
struct tree* nctemp12562= p;
nctempchar1* nctemp12564=PtreeGetname(nctemp12562);
nctempchar1* nctemp12560= nctemp12564;
struct nctempchar1 *nctemp12567;
static struct nctempchar1 nctemp12568 = {{ 7}, (char*)"return\0"};
nctemp12567=&nctemp12568;
nctempchar1* nctemp12565= nctemp12567;
int nctemp12569=LibeStrcmp(nctemp12560,nctemp12565);
int nctemp12557 = (nctemp12569 ==1);
if(nctemp12557)
{
struct tree* nctemp12572= p;
int nctemp12574=CodeReturnstmnt(nctemp12572);
}
struct tree* nctemp12579= p;
struct tree* nctemp12581=PtreeMvsister(nctemp12579);
p =nctemp12581;
}
int nctemp12582 = (p !=0);
nctemp12379=nctemp12582;}struct tree* nctemp12587= sp;
struct nctempchar1 *nctemp12591;
static struct nctempchar1 nctemp12592 = {{ 4}, (char*)"}\n\0"};
nctemp12591=&nctemp12592;
nctempchar1* nctemp12589= nctemp12591;
int nctemp12593=CodeEs(nctemp12587,nctemp12589);
return 1;
}
int CodeStmnt (struct tree* p)
{
struct tree* sp;
struct tree* q;
struct tree* r;
sp = p;
struct tree* nctemp12596= p;
struct nctempchar1 *nctemp12600;
static struct nctempchar1 nctemp12601 = {{ 4}, (char*)"{\n\0"};
nctemp12600=&nctemp12601;
nctempchar1* nctemp12598= nctemp12600;
int nctemp12602=CodeEs(nctemp12596,nctemp12598);
struct tree* nctemp12608= p;
nctempchar1* nctemp12610=PtreeGetname(nctemp12608);
nctempchar1* nctemp12606= nctemp12610;
struct nctempchar1 *nctemp12613;
static struct nctempchar1 nctemp12614 = {{ 10}, (char*)"compstmnt\0"};
nctemp12613=&nctemp12614;
nctempchar1* nctemp12611= nctemp12613;
int nctemp12615=LibeStrcmp(nctemp12606,nctemp12611);
int nctemp12603 = (nctemp12615 ==1);
if(nctemp12603)
{
struct tree* nctemp12621= p;
struct tree* nctemp12623=PtreeMvchild(nctemp12621);
p =nctemp12623;
struct tree* nctemp12625= p;
struct symbol* nctemp12629=SymGetltp();
struct symbol* nctemp12627= nctemp12629;
int nctemp12630=CodeDeclarations(nctemp12625,nctemp12627);
struct tree* nctemp12636= p;
nctempchar1* nctemp12638=PtreeGetname(nctemp12636);
nctempchar1* nctemp12634= nctemp12638;
struct nctempchar1 *nctemp12641;
static struct nctempchar1 nctemp12642 = {{ 13}, (char*)"declarations\0"};
nctemp12641=&nctemp12642;
nctempchar1* nctemp12639= nctemp12641;
int nctemp12643=LibeStrcmp(nctemp12634,nctemp12639);
int nctemp12631 = (nctemp12643 ==1);
if(nctemp12631)
{
struct tree* nctemp12649= p;
struct tree* nctemp12651=PtreeMvsister(nctemp12649);
p =nctemp12651;
}
}
int nctemp12652 = (p !=0);
int nctemp12656=nctemp12652;
while(nctemp12656)
{{
struct tree* nctemp12662= p;
nctempchar1* nctemp12664=PtreeGetname(nctemp12662);
nctempchar1* nctemp12660= nctemp12664;
struct nctempchar1 *nctemp12667;
static struct nctempchar1 nctemp12668 = {{ 10}, (char*)"compstmnt\0"};
nctemp12667=&nctemp12668;
nctempchar1* nctemp12665= nctemp12667;
int nctemp12669=LibeStrcmp(nctemp12660,nctemp12665);
int nctemp12657 = (nctemp12669 ==1);
if(nctemp12657)
{
struct tree* nctemp12672= p;
int nctemp12674=CodeCompstmnt(nctemp12672);
}
struct tree* nctemp12680= p;
nctempchar1* nctemp12682=PtreeGetname(nctemp12680);
nctempchar1* nctemp12678= nctemp12682;
struct nctempchar1 *nctemp12685;
static struct nctempchar1 nctemp12686 = {{ 5}, (char*)"expr\0"};
nctemp12685=&nctemp12686;
nctempchar1* nctemp12683= nctemp12685;
int nctemp12687=LibeStrcmp(nctemp12678,nctemp12683);
int nctemp12675 = (nctemp12687 ==1);
if(nctemp12675)
{
int nctemp12692=CodeGetbreak();
int nctemp12689 = (nctemp12692 ==1);
if(nctemp12689)
{
struct tree* nctemp12695= p;
nctempchar1* nctemp12697=CodeExpr(nctemp12695);
}
else{
struct tree* nctemp12701= p;
int nctemp12703=PtreeGetsimple(nctemp12701);
int nctemp12698 = (nctemp12703 ==1);
if(nctemp12698)
{
struct tree* nctemp12706= p;
int nctemp12708=CodeSexpr(nctemp12706);
struct tree* nctemp12710= p;
struct nctempchar1 *nctemp12714;
static struct nctempchar1 nctemp12715 = {{ 4}, (char*)";\n\0"};
nctemp12714=&nctemp12715;
nctempchar1* nctemp12712= nctemp12714;
int nctemp12716=CodeEs(nctemp12710,nctemp12712);
}
else{
struct tree* nctemp12718= p;
nctempchar1* nctemp12720=CodeExpr(nctemp12718);
}
}
}
struct tree* nctemp12726= p;
nctempchar1* nctemp12728=PtreeGetname(nctemp12726);
nctempchar1* nctemp12724= nctemp12728;
struct nctempchar1 *nctemp12731;
static struct nctempchar1 nctemp12732 = {{ 6}, (char*)"while\0"};
nctemp12731=&nctemp12732;
nctempchar1* nctemp12729= nctemp12731;
int nctemp12733=LibeStrcmp(nctemp12724,nctemp12729);
int nctemp12721 = (nctemp12733 ==1);
if(nctemp12721)
{
struct tree* nctemp12736= p;
int nctemp12738=CodeWhilestmnt(nctemp12736);
}
struct tree* nctemp12744= p;
nctempchar1* nctemp12746=PtreeGetname(nctemp12744);
nctempchar1* nctemp12742= nctemp12746;
struct nctempchar1 *nctemp12749;
static struct nctempchar1 nctemp12750 = {{ 4}, (char*)"for\0"};
nctemp12749=&nctemp12750;
nctempchar1* nctemp12747= nctemp12749;
int nctemp12751=LibeStrcmp(nctemp12742,nctemp12747);
int nctemp12739 = (nctemp12751 ==1);
if(nctemp12739)
{
struct tree* nctemp12757= p;
struct tree* nctemp12759=PtreeMvchild(nctemp12757);
q =nctemp12759;
struct tree* nctemp12764= q;
struct tree* nctemp12766=PtreeMvsister(nctemp12764);
r =nctemp12766;
struct tree* nctemp12773= q;
int nctemp12775=PtreeGetsimple(nctemp12773);
struct tree* nctemp12777= r;
int nctemp12779=PtreeGetsimple(nctemp12777);
int nctemp12770 = (nctemp12775 && nctemp12779);
struct tree* nctemp12783= r;
struct tree* nctemp12785=PtreeMvsister(nctemp12783);
struct tree* nctemp12781= nctemp12785;
int nctemp12786=PtreeGetsimple(nctemp12781);
int nctemp12767 = (nctemp12770 && nctemp12786);
if(nctemp12767)
{
struct tree* nctemp12788= p;
int nctemp12790=CodeSforstmnt(nctemp12788);
}
else{
struct tree* nctemp12792= q;
int nctemp12794= 0;
int nctemp12796=PtreeSetsimple(nctemp12792,nctemp12794);
struct tree* nctemp12798= r;
int nctemp12800= 0;
int nctemp12802=PtreeSetsimple(nctemp12798,nctemp12800);
struct tree* nctemp12806= r;
struct tree* nctemp12808=PtreeMvsister(nctemp12806);
struct tree* nctemp12804= nctemp12808;
int nctemp12809= 0;
int nctemp12811=PtreeSetsimple(nctemp12804,nctemp12809);
struct tree* nctemp12813= p;
int nctemp12815=CodeForstmnt(nctemp12813);
}
}
struct tree* nctemp12821= p;
nctempchar1* nctemp12823=PtreeGetname(nctemp12821);
nctempchar1* nctemp12819= nctemp12823;
struct nctempchar1 *nctemp12826;
static struct nctempchar1 nctemp12827 = {{ 9}, (char*)"parallel\0"};
nctemp12826=&nctemp12827;
nctempchar1* nctemp12824= nctemp12826;
int nctemp12828=LibeStrcmp(nctemp12819,nctemp12824);
int nctemp12816 = (nctemp12828 ==1);
if(nctemp12816)
{
struct tree* nctemp12831= p;
int nctemp12833=CodeParallelstmnt(nctemp12831);
}
struct tree* nctemp12839= p;
nctempchar1* nctemp12841=PtreeGetname(nctemp12839);
nctempchar1* nctemp12837= nctemp12841;
struct nctempchar1 *nctemp12844;
static struct nctempchar1 nctemp12845 = {{ 3}, (char*)"if\0"};
nctemp12844=&nctemp12845;
nctempchar1* nctemp12842= nctemp12844;
int nctemp12846=LibeStrcmp(nctemp12837,nctemp12842);
int nctemp12834 = (nctemp12846 ==1);
if(nctemp12834)
{
struct tree* nctemp12849= p;
int nctemp12851=CodeIfstmnt(nctemp12849);
}
struct tree* nctemp12857= p;
nctempchar1* nctemp12859=PtreeGetname(nctemp12857);
nctempchar1* nctemp12855= nctemp12859;
struct nctempchar1 *nctemp12862;
static struct nctempchar1 nctemp12863 = {{ 7}, (char*)"return\0"};
nctemp12862=&nctemp12863;
nctempchar1* nctemp12860= nctemp12862;
int nctemp12864=LibeStrcmp(nctemp12855,nctemp12860);
int nctemp12852 = (nctemp12864 ==1);
if(nctemp12852)
{
struct tree* nctemp12867= p;
int nctemp12869=CodeReturnstmnt(nctemp12867);
}
struct tree* nctemp12874= p;
struct tree* nctemp12876=PtreeMvsister(nctemp12874);
p =nctemp12876;
}
int nctemp12877 = (p !=0);
nctemp12656=nctemp12877;}struct tree* nctemp12882= sp;
struct nctempchar1 *nctemp12886;
static struct nctempchar1 nctemp12887 = {{ 4}, (char*)"}\n\0"};
nctemp12886=&nctemp12887;
nctempchar1* nctemp12884= nctemp12886;
int nctemp12888=CodeEs(nctemp12882,nctemp12884);
return 1;
}
int CodeNewdescr (struct tree* p,nctempchar1 *pointer)
{
struct tree* nctemp12891= p;
nctempchar1* nctemp12893= pointer;
int nctemp12896=CodeEs(nctemp12891,nctemp12893);
struct tree* nctemp12898= p;
struct nctempchar1 *nctemp12902;
static struct nctempchar1 nctemp12903 = {{ 2}, (char*)"=\0"};
nctemp12902=&nctemp12903;
nctempchar1* nctemp12900= nctemp12902;
int nctemp12904=CodeEs(nctemp12898,nctemp12900);
struct tree* nctemp12906= p;
struct nctempchar1 *nctemp12910;
static struct nctempchar1 nctemp12911 = {{ 11}, (char*)"RunMalloc(\0"};
nctemp12910=&nctemp12911;
nctempchar1* nctemp12908= nctemp12910;
int nctemp12912=CodeEs(nctemp12906,nctemp12908);
struct tree* nctemp12914= p;
struct nctempchar1 *nctemp12918;
static struct nctempchar1 nctemp12919 = {{ 8}, (char*)"sizeof(\0"};
nctemp12918=&nctemp12919;
nctempchar1* nctemp12916= nctemp12918;
int nctemp12920=CodeEs(nctemp12914,nctemp12916);
struct tree* nctemp12922= p;
nctempchar1* nctemp12924= pointer;
int nctemp12927=CodeEs(nctemp12922,nctemp12924);
struct tree* nctemp12929= p;
struct nctempchar1 *nctemp12933;
static struct nctempchar1 nctemp12934 = {{ 6}, (char*)"));\n\0"};
nctemp12933=&nctemp12934;
nctempchar1* nctemp12931= nctemp12933;
int nctemp12935=CodeEs(nctemp12929,nctemp12931);
return 1;
}
int CodeFdef (struct tree* p)
{
int nctemp12940=CodeGetarch();
int nctemp12937 = (nctemp12940 ==1);
if(nctemp12937)
{
struct tree* nctemp12943= p;
int nctemp12945=CodeFdefcpu(nctemp12943);
}
else{
int nctemp12949=CodeGetarch();
int nctemp12946 = (nctemp12949 ==2);
if(nctemp12946)
{
struct tree* nctemp12958= p;
struct tree* nctemp12960=PtreeMvchild(nctemp12958);
struct tree* nctemp12956= nctemp12960;
nctempchar1* nctemp12961=PtreeGetparallel(nctemp12956);
nctempchar1* nctemp12954= nctemp12961;
struct nctempchar1 *nctemp12964;
static struct nctempchar1 nctemp12965 = {{ 9}, (char*)"parallel\0"};
nctemp12964=&nctemp12965;
nctempchar1* nctemp12962= nctemp12964;
int nctemp12966=LibeStrcmp(nctemp12954,nctemp12962);
int nctemp12951 = (nctemp12966 ==1);
if(nctemp12951)
{
struct tree* nctemp12969= p;
int nctemp12971=CodeFdefgpu(nctemp12969);
struct tree* nctemp12973= p;
int nctemp12975=CodeFdewrappergpu(nctemp12973);
}
else{
struct tree* nctemp12977= p;
int nctemp12979=CodeFdefcpu(nctemp12977);
}
}
else{
int nctemp12983=CodeGetarch();
int nctemp12980 = (nctemp12983 ==3);
if(nctemp12980)
{
struct tree* nctemp12990= p;
nctempchar1* nctemp12992=PtreeGetparallel(nctemp12990);
nctempchar1* nctemp12988= nctemp12992;
struct nctempchar1 *nctemp12995;
static struct nctempchar1 nctemp12996 = {{ 9}, (char*)"parallel\0"};
nctemp12995=&nctemp12996;
nctempchar1* nctemp12993= nctemp12995;
int nctemp12997=LibeStrcmp(nctemp12988,nctemp12993);
int nctemp12985 = (nctemp12997 ==1);
if(nctemp12985)
{
struct tree* nctemp13000= p;
int nctemp13002=CodeFdefgpu(nctemp13000);
struct tree* nctemp13004= p;
int nctemp13006=CodeFdewrappergpu(nctemp13004);
}
else{
struct tree* nctemp13008= p;
int nctemp13010=CodeFdefcpu(nctemp13008);
}
}
}
}
return 1;
}
int CodePreamblecpu ()
{
struct tree* p;
struct nctempchar1 *nctemp13018;
static struct nctempchar1 nctemp13019 = {{ 6}, (char*)"dummy\0"};
nctemp13018=&nctemp13019;
nctempchar1* nctemp13016= nctemp13018;
struct nctempchar1 *nctemp13022;
static struct nctempchar1 nctemp13023 = {{ 6}, (char*)"dummy\0"};
nctemp13022=&nctemp13023;
nctempchar1* nctemp13020= nctemp13022;
struct tree* nctemp13024=PtreeMknode(nctemp13016,nctemp13020);
p =nctemp13024;
struct tree* nctemp13026= p;
int nctemp13028= 1;
int nctemp13030=PtreeSetline(nctemp13026,nctemp13028);
struct tree* nctemp13032= p;
struct nctempchar1 *nctemp13036;
static struct nctempchar1 nctemp13037 = {{ 42}, (char*)"//  Translated by epsc  version today  \n\0"};
nctemp13036=&nctemp13037;
nctempchar1* nctemp13034= nctemp13036;
int nctemp13038=CodeEs(nctemp13032,nctemp13034);
struct tree* nctemp13040= p;
int nctemp13042= 2;
int nctemp13044=PtreeSetline(nctemp13040,nctemp13042);
struct tree* nctemp13046= p;
int nctemp13048= 3;
int nctemp13050=PtreeSetline(nctemp13046,nctemp13048);
struct tree* nctemp13052= p;
int nctemp13054= 4;
int nctemp13056=PtreeSetline(nctemp13052,nctemp13054);
struct tree* nctemp13058= p;
struct nctempchar1 *nctemp13062;
static struct nctempchar1 nctemp13063 = {{ 22}, (char*)"#include <stddef.h>\n\0"};
nctemp13062=&nctemp13063;
nctempchar1* nctemp13060= nctemp13062;
int nctemp13064=CodeEs(nctemp13058,nctemp13060);
struct tree* nctemp13066= p;
struct nctempchar1 *nctemp13070;
static struct nctempchar1 nctemp13071 = {{ 21}, (char*)"#include <stdio.h>\n\0"};
nctemp13070=&nctemp13071;
nctempchar1* nctemp13068= nctemp13070;
int nctemp13072=CodeEs(nctemp13066,nctemp13068);
struct tree* nctemp13074= p;
struct nctempchar1 *nctemp13078;
static struct nctempchar1 nctemp13079 = {{ 22}, (char*)"#include <assert.h>\n\0"};
nctemp13078=&nctemp13079;
nctempchar1* nctemp13076= nctemp13078;
int nctemp13080=CodeEs(nctemp13074,nctemp13076);
struct tree* nctemp13082= p;
struct nctempchar1 *nctemp13086;
static struct nctempchar1 nctemp13087 = {{ 48}, (char*)"typedef struct { float r; float i;} complex; \n\0"};
nctemp13086=&nctemp13087;
nctempchar1* nctemp13084= nctemp13086;
int nctemp13088=CodeEs(nctemp13082,nctemp13084);
struct tree* nctemp13090= p;
int nctemp13092= 3;
int nctemp13094=PtreeSetline(nctemp13090,nctemp13092);
struct tree* nctemp13096= p;
struct nctempchar1 *nctemp13100;
static struct nctempchar1 nctemp13101 = {{ 68}, (char*)"typedef struct nctempfloat1 { int d[1]; float *a;} nctempfloat1; \n\0"};
nctemp13100=&nctemp13101;
nctempchar1* nctemp13098= nctemp13100;
int nctemp13102=CodeEs(nctemp13096,nctemp13098);
struct tree* nctemp13104= p;
int nctemp13106= 5;
int nctemp13108=PtreeSetline(nctemp13104,nctemp13106);
struct tree* nctemp13110= p;
struct nctempchar1 *nctemp13114;
static struct nctempchar1 nctemp13115 = {{ 62}, (char*)"typedef struct nctempint1 { int d[1]; int *a;} nctempint1; \n\0"};
nctemp13114=&nctemp13115;
nctempchar1* nctemp13112= nctemp13114;
int nctemp13116=CodeEs(nctemp13110,nctemp13112);
struct tree* nctemp13118= p;
int nctemp13120= 7;
int nctemp13122=PtreeSetline(nctemp13118,nctemp13120);
struct tree* nctemp13124= p;
struct nctempchar1 *nctemp13128;
static struct nctempchar1 nctemp13129 = {{ 65}, (char*)"typedef struct nctempchar1 { int d[1]; char *a;} nctempchar1; \n\0"};
nctemp13128=&nctemp13129;
nctempchar1* nctemp13126= nctemp13128;
int nctemp13130=CodeEs(nctemp13124,nctemp13126);
struct tree* nctemp13132= p;
int nctemp13134= 7;
int nctemp13136=PtreeSetline(nctemp13132,nctemp13134);
struct tree* nctemp13138= p;
struct nctempchar1 *nctemp13142;
static struct nctempchar1 nctemp13143 = {{ 74}, (char*)"typedef struct nctempcomplex1 { int d[1]; complex *a;} nctempcomplex1; \n\0"};
nctemp13142=&nctemp13143;
nctempchar1* nctemp13140= nctemp13142;
int nctemp13144=CodeEs(nctemp13138,nctemp13140);
struct tree* nctemp13146= p;
int nctemp13148= 8;
int nctemp13150=PtreeSetline(nctemp13146,nctemp13148);
int nctemp13154=CodeArraycheck();
int nctemp13151 = (nctemp13154 ==1);
if(nctemp13151)
{
struct tree* nctemp13157= p;
struct nctempchar1 *nctemp13161;
static struct nctempchar1 nctemp13162 = {{ 55}, (char*)"static struct nctempchar1 nctempstringx = {0, NULL};\n\0"};
nctemp13161=&nctemp13162;
nctempchar1* nctemp13159= nctemp13161;
int nctemp13163=CodeEs(nctemp13157,nctemp13159);
struct tree* nctemp13165= p;
struct nctempchar1 *nctemp13169;
static struct nctempchar1 nctemp13170 = {{ 60}, (char*)"static struct nctempchar1 *nctempstring = &nctempstringx;\n\0"};
nctemp13169=&nctemp13170;
nctempchar1* nctemp13167= nctemp13169;
int nctemp13171=CodeEs(nctemp13165,nctemp13167);
struct tree* nctemp13173= p;
int nctemp13175= 8;
int nctemp13177=PtreeSetline(nctemp13173,nctemp13175);
}
struct tree* nctemp13179= p;
struct nctempchar1 *nctemp13183;
static struct nctempchar1 nctemp13184 = {{ 68}, (char*)"typedef struct nctempfloat2 { int d[2]; float *a;} nctempfloat2; \n\0"};
nctemp13183=&nctemp13184;
nctempchar1* nctemp13181= nctemp13183;
int nctemp13185=CodeEs(nctemp13179,nctemp13181);
struct tree* nctemp13187= p;
int nctemp13189= 10;
int nctemp13191=PtreeSetline(nctemp13187,nctemp13189);
struct tree* nctemp13193= p;
struct nctempchar1 *nctemp13197;
static struct nctempchar1 nctemp13198 = {{ 62}, (char*)"typedef struct nctempint2 { int d[2]; int *a;} nctempint2; \n\0"};
nctemp13197=&nctemp13198;
nctempchar1* nctemp13195= nctemp13197;
int nctemp13199=CodeEs(nctemp13193,nctemp13195);
struct tree* nctemp13201= p;
int nctemp13203= 10;
int nctemp13205=PtreeSetline(nctemp13201,nctemp13203);
struct tree* nctemp13207= p;
struct nctempchar1 *nctemp13211;
static struct nctempchar1 nctemp13212 = {{ 65}, (char*)"typedef struct nctempchar2 { int d[2]; char *a;} nctempchar2; \n\0"};
nctemp13211=&nctemp13212;
nctempchar1* nctemp13209= nctemp13211;
int nctemp13213=CodeEs(nctemp13207,nctemp13209);
struct tree* nctemp13215= p;
int nctemp13217= 12;
int nctemp13219=PtreeSetline(nctemp13215,nctemp13217);
struct tree* nctemp13221= p;
struct nctempchar1 *nctemp13225;
static struct nctempchar1 nctemp13226 = {{ 74}, (char*)"typedef struct nctempcomplex2 { int d[2]; complex *a;} nctempcomplex2; \n\0"};
nctemp13225=&nctemp13226;
nctempchar1* nctemp13223= nctemp13225;
int nctemp13227=CodeEs(nctemp13221,nctemp13223);
struct tree* nctemp13229= p;
int nctemp13231= 13;
int nctemp13233=PtreeSetline(nctemp13229,nctemp13231);
struct tree* nctemp13235= p;
struct nctempchar1 *nctemp13239;
static struct nctempchar1 nctemp13240 = {{ 68}, (char*)"typedef struct nctempfloat3 { int d[3]; float *a;} nctempfloat3; \n\0"};
nctemp13239=&nctemp13240;
nctempchar1* nctemp13237= nctemp13239;
int nctemp13241=CodeEs(nctemp13235,nctemp13237);
struct tree* nctemp13243= p;
int nctemp13245= 14;
int nctemp13247=PtreeSetline(nctemp13243,nctemp13245);
struct tree* nctemp13249= p;
struct nctempchar1 *nctemp13253;
static struct nctempchar1 nctemp13254 = {{ 62}, (char*)"typedef struct nctempint3 { int d[3]; int *a;} nctempint3; \n\0"};
nctemp13253=&nctemp13254;
nctempchar1* nctemp13251= nctemp13253;
int nctemp13255=CodeEs(nctemp13249,nctemp13251);
struct tree* nctemp13257= p;
int nctemp13259= 15;
int nctemp13261=PtreeSetline(nctemp13257,nctemp13259);
struct tree* nctemp13263= p;
struct nctempchar1 *nctemp13267;
static struct nctempchar1 nctemp13268 = {{ 65}, (char*)"typedef struct nctempchar3 { int d[3]; char *a;} nctempchar3; \n\0"};
nctemp13267=&nctemp13268;
nctempchar1* nctemp13265= nctemp13267;
int nctemp13269=CodeEs(nctemp13263,nctemp13265);
struct tree* nctemp13271= p;
int nctemp13273= 16;
int nctemp13275=PtreeSetline(nctemp13271,nctemp13273);
struct tree* nctemp13277= p;
struct nctempchar1 *nctemp13281;
static struct nctempchar1 nctemp13282 = {{ 74}, (char*)"typedef struct nctempcomplex3 { int d[3]; complex *a;} nctempcomplex3; \n\0"};
nctemp13281=&nctemp13282;
nctempchar1* nctemp13279= nctemp13281;
int nctemp13283=CodeEs(nctemp13277,nctemp13279);
struct tree* nctemp13285= p;
int nctemp13287= 17;
int nctemp13289=PtreeSetline(nctemp13285,nctemp13287);
struct tree* nctemp13291= p;
struct nctempchar1 *nctemp13295;
static struct nctempchar1 nctemp13296 = {{ 68}, (char*)"typedef struct nctempfloat4 { int d[4]; float *a;} nctempfloat4; \n\0"};
nctemp13295=&nctemp13296;
nctempchar1* nctemp13293= nctemp13295;
int nctemp13297=CodeEs(nctemp13291,nctemp13293);
struct tree* nctemp13299= p;
int nctemp13301= 18;
int nctemp13303=PtreeSetline(nctemp13299,nctemp13301);
struct tree* nctemp13305= p;
struct nctempchar1 *nctemp13309;
static struct nctempchar1 nctemp13310 = {{ 62}, (char*)"typedef struct nctempint4 { int d[4]; int *a;} nctempint4; \n\0"};
nctemp13309=&nctemp13310;
nctempchar1* nctemp13307= nctemp13309;
int nctemp13311=CodeEs(nctemp13305,nctemp13307);
struct tree* nctemp13313= p;
int nctemp13315= 19;
int nctemp13317=PtreeSetline(nctemp13313,nctemp13315);
struct tree* nctemp13319= p;
struct nctempchar1 *nctemp13323;
static struct nctempchar1 nctemp13324 = {{ 65}, (char*)"typedef struct nctempchar4 { int d[4]; char *a;} nctempchar4; \n\0"};
nctemp13323=&nctemp13324;
nctempchar1* nctemp13321= nctemp13323;
int nctemp13325=CodeEs(nctemp13319,nctemp13321);
struct tree* nctemp13327= p;
int nctemp13329= 20;
int nctemp13331=PtreeSetline(nctemp13327,nctemp13329);
struct tree* nctemp13333= p;
struct nctempchar1 *nctemp13337;
static struct nctempchar1 nctemp13338 = {{ 74}, (char*)"typedef struct nctempcomplex4 { int d[4]; complex *a;} nctempcomplex4; \n\0"};
nctemp13337=&nctemp13338;
nctempchar1* nctemp13335= nctemp13337;
int nctemp13339=CodeEs(nctemp13333,nctemp13335);
struct tree* nctemp13341= p;
struct nctempchar1 *nctemp13345;
static struct nctempchar1 nctemp13346 = {{ 22}, (char*)"#include <stdlib.h>\n\0"};
nctemp13345=&nctemp13346;
nctempchar1* nctemp13343= nctemp13345;
int nctemp13347=CodeEs(nctemp13341,nctemp13343);
struct tree* nctemp13349= p;
struct nctempchar1 *nctemp13353;
static struct nctempchar1 nctemp13354 = {{ 22}, (char*)"#include <string.h>\n\0"};
nctemp13353=&nctemp13354;
nctempchar1* nctemp13351= nctemp13353;
int nctemp13355=CodeEs(nctemp13349,nctemp13351);
struct tree* nctemp13357= p;
struct nctempchar1 *nctemp13361;
static struct nctempchar1 nctemp13362 = {{ 27}, (char*)"void *RunMalloc(int n); \n\0"};
nctemp13361=&nctemp13362;
nctempchar1* nctemp13359= nctemp13361;
int nctemp13363=CodeEs(nctemp13357,nctemp13359);
struct tree* nctemp13365= p;
struct nctempchar1 *nctemp13369;
static struct nctempchar1 nctemp13370 = {{ 25}, (char*)"int RunFree(void *n); \n\0"};
nctemp13369=&nctemp13370;
nctempchar1* nctemp13367= nctemp13369;
int nctemp13371=CodeEs(nctemp13365,nctemp13367);
return 1;
}
int CodePreamblecuda ()
{
struct tree* p;
struct nctempchar1 *nctemp13379;
static struct nctempchar1 nctemp13380 = {{ 6}, (char*)"dummy\0"};
nctemp13379=&nctemp13380;
nctempchar1* nctemp13377= nctemp13379;
struct nctempchar1 *nctemp13383;
static struct nctempchar1 nctemp13384 = {{ 6}, (char*)"dummy\0"};
nctemp13383=&nctemp13384;
nctempchar1* nctemp13381= nctemp13383;
struct tree* nctemp13385=PtreeMknode(nctemp13377,nctemp13381);
p =nctemp13385;
struct tree* nctemp13387= p;
int nctemp13389= 1;
int nctemp13391=PtreeSetline(nctemp13387,nctemp13389);
struct tree* nctemp13393= p;
struct nctempchar1 *nctemp13397;
static struct nctempchar1 nctemp13398 = {{ 50}, (char*)"//  Translated by epsc  version December 2021  \n\0"};
nctemp13397=&nctemp13398;
nctempchar1* nctemp13395= nctemp13397;
int nctemp13399=CodeEs(nctemp13393,nctemp13395);
struct tree* nctemp13401= p;
int nctemp13403= 2;
int nctemp13405=PtreeSetline(nctemp13401,nctemp13403);
struct tree* nctemp13407= p;
int nctemp13409= 3;
int nctemp13411=PtreeSetline(nctemp13407,nctemp13409);
struct tree* nctemp13413= p;
struct nctempchar1 *nctemp13417;
static struct nctempchar1 nctemp13418 = {{ 48}, (char*)"typedef struct { float r; float i;} complex; \n\0"};
nctemp13417=&nctemp13418;
nctempchar1* nctemp13415= nctemp13417;
int nctemp13419=CodeEs(nctemp13413,nctemp13415);
struct tree* nctemp13421= p;
int nctemp13423= 3;
int nctemp13425=PtreeSetline(nctemp13421,nctemp13423);
struct tree* nctemp13427= p;
struct nctempchar1 *nctemp13431;
static struct nctempchar1 nctemp13432 = {{ 68}, (char*)"typedef struct nctempfloat1 { int d[1]; float *a;} nctempfloat1; \n\0"};
nctemp13431=&nctemp13432;
nctempchar1* nctemp13429= nctemp13431;
int nctemp13433=CodeEs(nctemp13427,nctemp13429);
struct tree* nctemp13435= p;
int nctemp13437= 5;
int nctemp13439=PtreeSetline(nctemp13435,nctemp13437);
struct tree* nctemp13441= p;
struct nctempchar1 *nctemp13445;
static struct nctempchar1 nctemp13446 = {{ 62}, (char*)"typedef struct nctempint1 { int d[1]; int *a;} nctempint1; \n\0"};
nctemp13445=&nctemp13446;
nctempchar1* nctemp13443= nctemp13445;
int nctemp13447=CodeEs(nctemp13441,nctemp13443);
struct tree* nctemp13449= p;
int nctemp13451= 7;
int nctemp13453=PtreeSetline(nctemp13449,nctemp13451);
struct tree* nctemp13455= p;
struct nctempchar1 *nctemp13459;
static struct nctempchar1 nctemp13460 = {{ 65}, (char*)"typedef struct nctempchar1 { int d[1]; char *a;} nctempchar1; \n\0"};
nctemp13459=&nctemp13460;
nctempchar1* nctemp13457= nctemp13459;
int nctemp13461=CodeEs(nctemp13455,nctemp13457);
struct tree* nctemp13463= p;
int nctemp13465= 7;
int nctemp13467=PtreeSetline(nctemp13463,nctemp13465);
struct tree* nctemp13469= p;
struct nctempchar1 *nctemp13473;
static struct nctempchar1 nctemp13474 = {{ 74}, (char*)"typedef struct nctempcomplex1 { int d[1]; complex *a;} nctempcomplex1; \n\0"};
nctemp13473=&nctemp13474;
nctempchar1* nctemp13471= nctemp13473;
int nctemp13475=CodeEs(nctemp13469,nctemp13471);
struct tree* nctemp13477= p;
int nctemp13479= 8;
int nctemp13481=PtreeSetline(nctemp13477,nctemp13479);
int nctemp13485=CodeArraycheck();
int nctemp13482 = (nctemp13485 ==1);
if(nctemp13482)
{
struct tree* nctemp13488= p;
struct nctempchar1 *nctemp13492;
static struct nctempchar1 nctemp13493 = {{ 55}, (char*)"static struct nctempchar1 nctempstringx = {0, NULL};\n\0"};
nctemp13492=&nctemp13493;
nctempchar1* nctemp13490= nctemp13492;
int nctemp13494=CodeEs(nctemp13488,nctemp13490);
struct tree* nctemp13496= p;
struct nctempchar1 *nctemp13500;
static struct nctempchar1 nctemp13501 = {{ 60}, (char*)"static struct nctempchar1 *nctempstring = &nctempstringx;\n\0"};
nctemp13500=&nctemp13501;
nctempchar1* nctemp13498= nctemp13500;
int nctemp13502=CodeEs(nctemp13496,nctemp13498);
struct tree* nctemp13504= p;
int nctemp13506= 8;
int nctemp13508=PtreeSetline(nctemp13504,nctemp13506);
}
struct tree* nctemp13510= p;
struct nctempchar1 *nctemp13514;
static struct nctempchar1 nctemp13515 = {{ 68}, (char*)"typedef struct nctempfloat2 { int d[2]; float *a;} nctempfloat2; \n\0"};
nctemp13514=&nctemp13515;
nctempchar1* nctemp13512= nctemp13514;
int nctemp13516=CodeEs(nctemp13510,nctemp13512);
struct tree* nctemp13518= p;
int nctemp13520= 10;
int nctemp13522=PtreeSetline(nctemp13518,nctemp13520);
struct tree* nctemp13524= p;
struct nctempchar1 *nctemp13528;
static struct nctempchar1 nctemp13529 = {{ 62}, (char*)"typedef struct nctempint2 { int d[2]; int *a;} nctempint2; \n\0"};
nctemp13528=&nctemp13529;
nctempchar1* nctemp13526= nctemp13528;
int nctemp13530=CodeEs(nctemp13524,nctemp13526);
struct tree* nctemp13532= p;
int nctemp13534= 10;
int nctemp13536=PtreeSetline(nctemp13532,nctemp13534);
struct tree* nctemp13538= p;
struct nctempchar1 *nctemp13542;
static struct nctempchar1 nctemp13543 = {{ 65}, (char*)"typedef struct nctempchar2 { int d[2]; char *a;} nctempchar2; \n\0"};
nctemp13542=&nctemp13543;
nctempchar1* nctemp13540= nctemp13542;
int nctemp13544=CodeEs(nctemp13538,nctemp13540);
struct tree* nctemp13546= p;
int nctemp13548= 12;
int nctemp13550=PtreeSetline(nctemp13546,nctemp13548);
struct tree* nctemp13552= p;
struct nctempchar1 *nctemp13556;
static struct nctempchar1 nctemp13557 = {{ 74}, (char*)"typedef struct nctempcomplex2 { int d[2]; complex *a;} nctempcomplex2; \n\0"};
nctemp13556=&nctemp13557;
nctempchar1* nctemp13554= nctemp13556;
int nctemp13558=CodeEs(nctemp13552,nctemp13554);
struct tree* nctemp13560= p;
int nctemp13562= 13;
int nctemp13564=PtreeSetline(nctemp13560,nctemp13562);
struct tree* nctemp13566= p;
struct nctempchar1 *nctemp13570;
static struct nctempchar1 nctemp13571 = {{ 68}, (char*)"typedef struct nctempfloat3 { int d[3]; float *a;} nctempfloat3; \n\0"};
nctemp13570=&nctemp13571;
nctempchar1* nctemp13568= nctemp13570;
int nctemp13572=CodeEs(nctemp13566,nctemp13568);
struct tree* nctemp13574= p;
int nctemp13576= 14;
int nctemp13578=PtreeSetline(nctemp13574,nctemp13576);
struct tree* nctemp13580= p;
struct nctempchar1 *nctemp13584;
static struct nctempchar1 nctemp13585 = {{ 62}, (char*)"typedef struct nctempint3 { int d[3]; int *a;} nctempint3; \n\0"};
nctemp13584=&nctemp13585;
nctempchar1* nctemp13582= nctemp13584;
int nctemp13586=CodeEs(nctemp13580,nctemp13582);
struct tree* nctemp13588= p;
int nctemp13590= 15;
int nctemp13592=PtreeSetline(nctemp13588,nctemp13590);
struct tree* nctemp13594= p;
struct nctempchar1 *nctemp13598;
static struct nctempchar1 nctemp13599 = {{ 65}, (char*)"typedef struct nctempchar3 { int d[3]; char *a;} nctempchar3; \n\0"};
nctemp13598=&nctemp13599;
nctempchar1* nctemp13596= nctemp13598;
int nctemp13600=CodeEs(nctemp13594,nctemp13596);
struct tree* nctemp13602= p;
int nctemp13604= 16;
int nctemp13606=PtreeSetline(nctemp13602,nctemp13604);
struct tree* nctemp13608= p;
struct nctempchar1 *nctemp13612;
static struct nctempchar1 nctemp13613 = {{ 74}, (char*)"typedef struct nctempcomplex3 { int d[3]; complex *a;} nctempcomplex3; \n\0"};
nctemp13612=&nctemp13613;
nctempchar1* nctemp13610= nctemp13612;
int nctemp13614=CodeEs(nctemp13608,nctemp13610);
struct tree* nctemp13616= p;
int nctemp13618= 17;
int nctemp13620=PtreeSetline(nctemp13616,nctemp13618);
struct tree* nctemp13622= p;
struct nctempchar1 *nctemp13626;
static struct nctempchar1 nctemp13627 = {{ 68}, (char*)"typedef struct nctempfloat4 { int d[4]; float *a;} nctempfloat4; \n\0"};
nctemp13626=&nctemp13627;
nctempchar1* nctemp13624= nctemp13626;
int nctemp13628=CodeEs(nctemp13622,nctemp13624);
struct tree* nctemp13630= p;
int nctemp13632= 18;
int nctemp13634=PtreeSetline(nctemp13630,nctemp13632);
struct tree* nctemp13636= p;
struct nctempchar1 *nctemp13640;
static struct nctempchar1 nctemp13641 = {{ 62}, (char*)"typedef struct nctempint4 { int d[4]; int *a;} nctempint4; \n\0"};
nctemp13640=&nctemp13641;
nctempchar1* nctemp13638= nctemp13640;
int nctemp13642=CodeEs(nctemp13636,nctemp13638);
struct tree* nctemp13644= p;
int nctemp13646= 19;
int nctemp13648=PtreeSetline(nctemp13644,nctemp13646);
struct tree* nctemp13650= p;
struct nctempchar1 *nctemp13654;
static struct nctempchar1 nctemp13655 = {{ 65}, (char*)"typedef struct nctempchar4 { int d[4]; char *a;} nctempchar4; \n\0"};
nctemp13654=&nctemp13655;
nctempchar1* nctemp13652= nctemp13654;
int nctemp13656=CodeEs(nctemp13650,nctemp13652);
struct tree* nctemp13658= p;
int nctemp13660= 20;
int nctemp13662=PtreeSetline(nctemp13658,nctemp13660);
struct tree* nctemp13664= p;
struct nctempchar1 *nctemp13668;
static struct nctempchar1 nctemp13669 = {{ 74}, (char*)"typedef struct nctempcomplex4 { int d[4]; complex *a;} nctempcomplex4; \n\0"};
nctemp13668=&nctemp13669;
nctempchar1* nctemp13666= nctemp13668;
int nctemp13670=CodeEs(nctemp13664,nctemp13666);
struct tree* nctemp13672= p;
struct nctempchar1 *nctemp13676;
static struct nctempchar1 nctemp13677 = {{ 21}, (char*)"#include <stdio.h>\n\0"};
nctemp13676=&nctemp13677;
nctempchar1* nctemp13674= nctemp13676;
int nctemp13678=CodeEs(nctemp13672,nctemp13674);
struct tree* nctemp13680= p;
struct nctempchar1 *nctemp13684;
static struct nctempchar1 nctemp13685 = {{ 22}, (char*)"#include <stdlib.h>\n\0"};
nctemp13684=&nctemp13685;
nctempchar1* nctemp13682= nctemp13684;
int nctemp13686=CodeEs(nctemp13680,nctemp13682);
struct tree* nctemp13688= p;
struct nctempchar1 *nctemp13692;
static struct nctempchar1 nctemp13693 = {{ 22}, (char*)"#include <string.h>\n\0"};
nctemp13692=&nctemp13693;
nctempchar1* nctemp13690= nctemp13692;
int nctemp13694=CodeEs(nctemp13688,nctemp13690);
struct tree* nctemp13696= p;
struct nctempchar1 *nctemp13700;
static struct nctempchar1 nctemp13701 = {{ 22}, (char*)"#include <assert.h>\n\0"};
nctemp13700=&nctemp13701;
nctempchar1* nctemp13698= nctemp13700;
int nctemp13702=CodeEs(nctemp13696,nctemp13698);
struct tree* nctemp13704= p;
struct nctempchar1 *nctemp13708;
static struct nctempchar1 nctemp13709 = {{ 3}, (char*)"\n\0"};
nctemp13708=&nctemp13709;
nctempchar1* nctemp13706= nctemp13708;
int nctemp13710=CodeEs(nctemp13704,nctemp13706);
struct tree* nctemp13712= p;
struct nctempchar1 *nctemp13716;
static struct nctempchar1 nctemp13717 = {{ 23}, (char*)"void *GpuNew(int n);\n\0"};
nctemp13716=&nctemp13717;
nctempchar1* nctemp13714= nctemp13716;
int nctemp13718=CodeEs(nctemp13712,nctemp13714);
struct tree* nctemp13720= p;
struct nctempchar1 *nctemp13724;
static struct nctempchar1 nctemp13725 = {{ 28}, (char*)"void *GpuDelete(void *f);\n\0"};
nctemp13724=&nctemp13725;
nctempchar1* nctemp13722= nctemp13724;
int nctemp13726=CodeEs(nctemp13720,nctemp13722);
struct tree* nctemp13728= p;
struct nctempchar1 *nctemp13732;
static struct nctempchar1 nctemp13733 = {{ 20}, (char*)"void *GpuError();\n\0"};
nctemp13732=&nctemp13733;
nctempchar1* nctemp13730= nctemp13732;
int nctemp13734=CodeEs(nctemp13728,nctemp13730);
struct tree* nctemp13736= p;
struct nctempchar1 *nctemp13740;
static struct nctempchar1 nctemp13741 = {{ 26}, (char*)"void *RunMalloc(int n);\n\0"};
nctemp13740=&nctemp13741;
nctempchar1* nctemp13738= nctemp13740;
int nctemp13742=CodeEs(nctemp13736,nctemp13738);
struct tree* nctemp13744= p;
struct nctempchar1 *nctemp13748;
static struct nctempchar1 nctemp13749 = {{ 24}, (char*)"int RunFree(void * );\n\0"};
nctemp13748=&nctemp13749;
nctempchar1* nctemp13746= nctemp13748;
int nctemp13750=CodeEs(nctemp13744,nctemp13746);
struct tree* nctemp13752= p;
struct nctempchar1 *nctemp13756;
static struct nctempchar1 nctemp13757 = {{ 17}, (char*)"int RunSync();\n\0"};
nctemp13756=&nctemp13757;
nctempchar1* nctemp13754= nctemp13756;
int nctemp13758=CodeEs(nctemp13752,nctemp13754);
struct tree* nctemp13760= p;
struct nctempchar1 *nctemp13764;
static struct nctempchar1 nctemp13765 = {{ 18}, (char*)"int RunGetnt();\n\0"};
nctemp13764=&nctemp13765;
nctempchar1* nctemp13762= nctemp13764;
int nctemp13766=CodeEs(nctemp13760,nctemp13762);
struct tree* nctemp13768= p;
struct nctempchar1 *nctemp13772;
static struct nctempchar1 nctemp13773 = {{ 18}, (char*)"int RunGetnb();\n\0"};
nctemp13772=&nctemp13773;
nctempchar1* nctemp13770= nctemp13772;
int nctemp13774=CodeEs(nctemp13768,nctemp13770);
return 1;
}
int CodePreamblehip ()
{
struct tree* p;
struct nctempchar1 *nctemp13782;
static struct nctempchar1 nctemp13783 = {{ 6}, (char*)"dummy\0"};
nctemp13782=&nctemp13783;
nctempchar1* nctemp13780= nctemp13782;
struct nctempchar1 *nctemp13786;
static struct nctempchar1 nctemp13787 = {{ 6}, (char*)"dummy\0"};
nctemp13786=&nctemp13787;
nctempchar1* nctemp13784= nctemp13786;
struct tree* nctemp13788=PtreeMknode(nctemp13780,nctemp13784);
p =nctemp13788;
struct tree* nctemp13790= p;
int nctemp13792= 1;
int nctemp13794=PtreeSetline(nctemp13790,nctemp13792);
struct tree* nctemp13796= p;
struct nctempchar1 *nctemp13800;
static struct nctempchar1 nctemp13801 = {{ 50}, (char*)"//  Translated by epsc  version December 2021  \n\0"};
nctemp13800=&nctemp13801;
nctempchar1* nctemp13798= nctemp13800;
int nctemp13802=CodeEs(nctemp13796,nctemp13798);
struct tree* nctemp13804= p;
int nctemp13806= 2;
int nctemp13808=PtreeSetline(nctemp13804,nctemp13806);
struct tree* nctemp13810= p;
int nctemp13812= 3;
int nctemp13814=PtreeSetline(nctemp13810,nctemp13812);
struct tree* nctemp13816= p;
struct nctempchar1 *nctemp13820;
static struct nctempchar1 nctemp13821 = {{ 48}, (char*)"typedef struct { float r; float i;} complex; \n\0"};
nctemp13820=&nctemp13821;
nctempchar1* nctemp13818= nctemp13820;
int nctemp13822=CodeEs(nctemp13816,nctemp13818);
struct tree* nctemp13824= p;
int nctemp13826= 3;
int nctemp13828=PtreeSetline(nctemp13824,nctemp13826);
struct tree* nctemp13830= p;
struct nctempchar1 *nctemp13834;
static struct nctempchar1 nctemp13835 = {{ 68}, (char*)"typedef struct nctempfloat1 { int d[1]; float *a;} nctempfloat1; \n\0"};
nctemp13834=&nctemp13835;
nctempchar1* nctemp13832= nctemp13834;
int nctemp13836=CodeEs(nctemp13830,nctemp13832);
struct tree* nctemp13838= p;
int nctemp13840= 5;
int nctemp13842=PtreeSetline(nctemp13838,nctemp13840);
struct tree* nctemp13844= p;
struct nctempchar1 *nctemp13848;
static struct nctempchar1 nctemp13849 = {{ 62}, (char*)"typedef struct nctempint1 { int d[1]; int *a;} nctempint1; \n\0"};
nctemp13848=&nctemp13849;
nctempchar1* nctemp13846= nctemp13848;
int nctemp13850=CodeEs(nctemp13844,nctemp13846);
struct tree* nctemp13852= p;
int nctemp13854= 7;
int nctemp13856=PtreeSetline(nctemp13852,nctemp13854);
struct tree* nctemp13858= p;
struct nctempchar1 *nctemp13862;
static struct nctempchar1 nctemp13863 = {{ 65}, (char*)"typedef struct nctempchar1 { int d[1]; char *a;} nctempchar1; \n\0"};
nctemp13862=&nctemp13863;
nctempchar1* nctemp13860= nctemp13862;
int nctemp13864=CodeEs(nctemp13858,nctemp13860);
struct tree* nctemp13866= p;
int nctemp13868= 7;
int nctemp13870=PtreeSetline(nctemp13866,nctemp13868);
struct tree* nctemp13872= p;
struct nctempchar1 *nctemp13876;
static struct nctempchar1 nctemp13877 = {{ 74}, (char*)"typedef struct nctempcomplex1 { int d[1]; complex *a;} nctempcomplex1; \n\0"};
nctemp13876=&nctemp13877;
nctempchar1* nctemp13874= nctemp13876;
int nctemp13878=CodeEs(nctemp13872,nctemp13874);
struct tree* nctemp13880= p;
int nctemp13882= 8;
int nctemp13884=PtreeSetline(nctemp13880,nctemp13882);
int nctemp13888=CodeArraycheck();
int nctemp13885 = (nctemp13888 ==1);
if(nctemp13885)
{
struct tree* nctemp13891= p;
struct nctempchar1 *nctemp13895;
static struct nctempchar1 nctemp13896 = {{ 54}, (char*)"static struct nctempchar1 nctempstring = {0, NULL};\n\0"};
nctemp13895=&nctemp13896;
nctempchar1* nctemp13893= nctemp13895;
int nctemp13897=CodeEs(nctemp13891,nctemp13893);
struct tree* nctemp13899= p;
int nctemp13901= 8;
int nctemp13903=PtreeSetline(nctemp13899,nctemp13901);
}
struct tree* nctemp13905= p;
struct nctempchar1 *nctemp13909;
static struct nctempchar1 nctemp13910 = {{ 68}, (char*)"typedef struct nctempfloat2 { int d[2]; float *a;} nctempfloat2; \n\0"};
nctemp13909=&nctemp13910;
nctempchar1* nctemp13907= nctemp13909;
int nctemp13911=CodeEs(nctemp13905,nctemp13907);
struct tree* nctemp13913= p;
int nctemp13915= 10;
int nctemp13917=PtreeSetline(nctemp13913,nctemp13915);
struct tree* nctemp13919= p;
struct nctempchar1 *nctemp13923;
static struct nctempchar1 nctemp13924 = {{ 62}, (char*)"typedef struct nctempint2 { int d[2]; int *a;} nctempint2; \n\0"};
nctemp13923=&nctemp13924;
nctempchar1* nctemp13921= nctemp13923;
int nctemp13925=CodeEs(nctemp13919,nctemp13921);
struct tree* nctemp13927= p;
int nctemp13929= 10;
int nctemp13931=PtreeSetline(nctemp13927,nctemp13929);
struct tree* nctemp13933= p;
struct nctempchar1 *nctemp13937;
static struct nctempchar1 nctemp13938 = {{ 65}, (char*)"typedef struct nctempchar2 { int d[2]; char *a;} nctempchar2; \n\0"};
nctemp13937=&nctemp13938;
nctempchar1* nctemp13935= nctemp13937;
int nctemp13939=CodeEs(nctemp13933,nctemp13935);
struct tree* nctemp13941= p;
int nctemp13943= 12;
int nctemp13945=PtreeSetline(nctemp13941,nctemp13943);
struct tree* nctemp13947= p;
struct nctempchar1 *nctemp13951;
static struct nctempchar1 nctemp13952 = {{ 74}, (char*)"typedef struct nctempcomplex2 { int d[2]; complex *a;} nctempcomplex2; \n\0"};
nctemp13951=&nctemp13952;
nctempchar1* nctemp13949= nctemp13951;
int nctemp13953=CodeEs(nctemp13947,nctemp13949);
struct tree* nctemp13955= p;
int nctemp13957= 13;
int nctemp13959=PtreeSetline(nctemp13955,nctemp13957);
struct tree* nctemp13961= p;
struct nctempchar1 *nctemp13965;
static struct nctempchar1 nctemp13966 = {{ 68}, (char*)"typedef struct nctempfloat3 { int d[3]; float *a;} nctempfloat3; \n\0"};
nctemp13965=&nctemp13966;
nctempchar1* nctemp13963= nctemp13965;
int nctemp13967=CodeEs(nctemp13961,nctemp13963);
struct tree* nctemp13969= p;
int nctemp13971= 14;
int nctemp13973=PtreeSetline(nctemp13969,nctemp13971);
struct tree* nctemp13975= p;
struct nctempchar1 *nctemp13979;
static struct nctempchar1 nctemp13980 = {{ 62}, (char*)"typedef struct nctempint3 { int d[3]; int *a;} nctempint3; \n\0"};
nctemp13979=&nctemp13980;
nctempchar1* nctemp13977= nctemp13979;
int nctemp13981=CodeEs(nctemp13975,nctemp13977);
struct tree* nctemp13983= p;
int nctemp13985= 15;
int nctemp13987=PtreeSetline(nctemp13983,nctemp13985);
struct tree* nctemp13989= p;
struct nctempchar1 *nctemp13993;
static struct nctempchar1 nctemp13994 = {{ 65}, (char*)"typedef struct nctempchar3 { int d[3]; char *a;} nctempchar3; \n\0"};
nctemp13993=&nctemp13994;
nctempchar1* nctemp13991= nctemp13993;
int nctemp13995=CodeEs(nctemp13989,nctemp13991);
struct tree* nctemp13997= p;
int nctemp13999= 16;
int nctemp14001=PtreeSetline(nctemp13997,nctemp13999);
struct tree* nctemp14003= p;
struct nctempchar1 *nctemp14007;
static struct nctempchar1 nctemp14008 = {{ 74}, (char*)"typedef struct nctempcomplex3 { int d[3]; complex *a;} nctempcomplex3; \n\0"};
nctemp14007=&nctemp14008;
nctempchar1* nctemp14005= nctemp14007;
int nctemp14009=CodeEs(nctemp14003,nctemp14005);
struct tree* nctemp14011= p;
int nctemp14013= 17;
int nctemp14015=PtreeSetline(nctemp14011,nctemp14013);
struct tree* nctemp14017= p;
struct nctempchar1 *nctemp14021;
static struct nctempchar1 nctemp14022 = {{ 68}, (char*)"typedef struct nctempfloat4 { int d[4]; float *a;} nctempfloat4; \n\0"};
nctemp14021=&nctemp14022;
nctempchar1* nctemp14019= nctemp14021;
int nctemp14023=CodeEs(nctemp14017,nctemp14019);
struct tree* nctemp14025= p;
int nctemp14027= 18;
int nctemp14029=PtreeSetline(nctemp14025,nctemp14027);
struct tree* nctemp14031= p;
struct nctempchar1 *nctemp14035;
static struct nctempchar1 nctemp14036 = {{ 62}, (char*)"typedef struct nctempint4 { int d[4]; int *a;} nctempint4; \n\0"};
nctemp14035=&nctemp14036;
nctempchar1* nctemp14033= nctemp14035;
int nctemp14037=CodeEs(nctemp14031,nctemp14033);
struct tree* nctemp14039= p;
int nctemp14041= 19;
int nctemp14043=PtreeSetline(nctemp14039,nctemp14041);
struct tree* nctemp14045= p;
struct nctempchar1 *nctemp14049;
static struct nctempchar1 nctemp14050 = {{ 65}, (char*)"typedef struct nctempchar4 { int d[4]; char *a;} nctempchar4; \n\0"};
nctemp14049=&nctemp14050;
nctempchar1* nctemp14047= nctemp14049;
int nctemp14051=CodeEs(nctemp14045,nctemp14047);
struct tree* nctemp14053= p;
int nctemp14055= 20;
int nctemp14057=PtreeSetline(nctemp14053,nctemp14055);
struct tree* nctemp14059= p;
struct nctempchar1 *nctemp14063;
static struct nctempchar1 nctemp14064 = {{ 74}, (char*)"typedef struct nctempcomplex4 { int d[4]; complex *a;} nctempcomplex4; \n\0"};
nctemp14063=&nctemp14064;
nctempchar1* nctemp14061= nctemp14063;
int nctemp14065=CodeEs(nctemp14059,nctemp14061);
struct tree* nctemp14067= p;
struct nctempchar1 *nctemp14071;
static struct nctempchar1 nctemp14072 = {{ 21}, (char*)"#include <stdio.h>\n\0"};
nctemp14071=&nctemp14072;
nctempchar1* nctemp14069= nctemp14071;
int nctemp14073=CodeEs(nctemp14067,nctemp14069);
struct tree* nctemp14075= p;
struct nctempchar1 *nctemp14079;
static struct nctempchar1 nctemp14080 = {{ 22}, (char*)"#include <stdlib.h>\n\0"};
nctemp14079=&nctemp14080;
nctempchar1* nctemp14077= nctemp14079;
int nctemp14081=CodeEs(nctemp14075,nctemp14077);
struct tree* nctemp14083= p;
struct nctempchar1 *nctemp14087;
static struct nctempchar1 nctemp14088 = {{ 22}, (char*)"#include <string.h>\n\0"};
nctemp14087=&nctemp14088;
nctempchar1* nctemp14085= nctemp14087;
int nctemp14089=CodeEs(nctemp14083,nctemp14085);
struct tree* nctemp14091= p;
struct nctempchar1 *nctemp14095;
static struct nctempchar1 nctemp14096 = {{ 4}, (char*)"}\n\0"};
nctemp14095=&nctemp14096;
nctempchar1* nctemp14093= nctemp14095;
int nctemp14097=CodeEs(nctemp14091,nctemp14093);
struct tree* nctemp14099= p;
struct nctempchar1 *nctemp14103;
static struct nctempchar1 nctemp14104 = {{ 34}, (char*)"#include \"hip/hip_runtime.h\" \n\0"};
nctemp14103=&nctemp14104;
nctempchar1* nctemp14101= nctemp14103;
int nctemp14105=CodeEs(nctemp14099,nctemp14101);
struct tree* nctemp14107= p;
struct nctempchar1 *nctemp14111;
static struct nctempchar1 nctemp14112 = {{ 3}, (char*)"\n\0"};
nctemp14111=&nctemp14112;
nctempchar1* nctemp14109= nctemp14111;
int nctemp14113=CodeEs(nctemp14107,nctemp14109);
struct tree* nctemp14115= p;
struct nctempchar1 *nctemp14119;
static struct nctempchar1 nctemp14120 = {{ 23}, (char*)"void *GpuNew(int n);\n\0"};
nctemp14119=&nctemp14120;
nctempchar1* nctemp14117= nctemp14119;
int nctemp14121=CodeEs(nctemp14115,nctemp14117);
struct tree* nctemp14123= p;
struct nctempchar1 *nctemp14127;
static struct nctempchar1 nctemp14128 = {{ 28}, (char*)"void *GpuDelete(void *f);\n\0"};
nctemp14127=&nctemp14128;
nctempchar1* nctemp14125= nctemp14127;
int nctemp14129=CodeEs(nctemp14123,nctemp14125);
struct tree* nctemp14131= p;
struct nctempchar1 *nctemp14135;
static struct nctempchar1 nctemp14136 = {{ 20}, (char*)"void *GpuError();\n\0"};
nctemp14135=&nctemp14136;
nctempchar1* nctemp14133= nctemp14135;
int nctemp14137=CodeEs(nctemp14131,nctemp14133);
struct tree* nctemp14139= p;
struct nctempchar1 *nctemp14143;
static struct nctempchar1 nctemp14144 = {{ 26}, (char*)"void *RunMalloc(int n);\n\0"};
nctemp14143=&nctemp14144;
nctempchar1* nctemp14141= nctemp14143;
int nctemp14145=CodeEs(nctemp14139,nctemp14141);
struct tree* nctemp14147= p;
struct nctempchar1 *nctemp14151;
static struct nctempchar1 nctemp14152 = {{ 24}, (char*)"int RunFree(void *p);\n\0"};
nctemp14151=&nctemp14152;
nctempchar1* nctemp14149= nctemp14151;
int nctemp14153=CodeEs(nctemp14147,nctemp14149);
return 1;
}
int CodePreamble ()
{
int nctemp14158=CodeGetarch();
int nctemp14155 = (nctemp14158 ==1);
if(nctemp14155)
{
int nctemp14161=CodePreamblecpu();
return 1;
}
else{
int nctemp14166=CodeGetarch();
int nctemp14163 = (nctemp14166 ==2);
if(nctemp14163)
{
int nctemp14169=CodePreamblecuda();
return 1;
}
else{
int nctemp14174=CodeGetarch();
int nctemp14171 = (nctemp14174 ==3);
if(nctemp14171)
{
int nctemp14177=CodePreamblehip();
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
return 1;
}
