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
CodeAddress =0;
}
else{
int nctemp63 = CodeAddress + 1;
CodeAddress =nctemp63;
}
int nctemp64 = (CodeAddress > 999999);
if(nctemp64)
{
struct nctempchar1 *nctemp71;
static struct nctempchar1 nctemp72 = {{ 32}, (char*)"I am running out of temporaries\0"};
nctemp71=&nctemp72;
nctempchar1* nctemp69= nctemp71;
int nctemp73=CodeError(nctemp69);
}
int nctemp75= CodeAddress;
nctempchar1* nctemp77= s1;
int nctemp80=LibeItoa(nctemp75,nctemp77);
nctempchar1* nctemp82= s1;
nctempchar1* nctemp85= s2;
int nctemp88=LibeStrcat(nctemp82,nctemp85);
return s2;
}
int CodeInit ()
{
int nctemp92= 0;
int nctemp94=CodeSetparallel(nctemp92);
CodeLine = 0;
int nctemp97= -1;
int nctemp96= nctemp97;
nctempchar1* nctemp98=CodeItemp(nctemp96);
CodeBreak = 0;
int nctemp100= 1;
int nctemp102=CodeSetarch(nctemp100);
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
int nctemp111=CodeGetfdout();
fdo =nctemp111;
int nctemp115=CodeDebug();
int nctemp112 = (nctemp115 ==1);
if(nctemp112)
{
int nctemp117 = (p !=0);
if(nctemp117)
{
struct tree* nctemp124= p;
int nctemp126=PtreeGetline(nctemp124);
int nctemp121 = (nctemp126 !=CodeLine);
if(nctemp121)
{
int nctemp129= fdo;
struct nctempchar1 *nctemp133;
static struct nctempchar1 nctemp134 = {{ 3}, (char*)"\n\0"};
nctemp133=&nctemp134;
nctempchar1* nctemp131= nctemp133;
int nctemp135=LibePuts(nctemp129,nctemp131);
int nctemp137= fdo;
struct nctempchar1 *nctemp141;
static struct nctempchar1 nctemp142 = {{ 7}, (char*)"#line \0"};
nctemp141=&nctemp142;
nctempchar1* nctemp139= nctemp141;
int nctemp143=LibePuts(nctemp137,nctemp139);
int nctemp145= fdo;
struct tree* nctemp149= p;
int nctemp151=PtreeGetline(nctemp149);
int nctemp147= nctemp151;
int nctemp152=LibePuti(nctemp145,nctemp147);
int nctemp154= fdo;
struct nctempchar1 *nctemp158;
static struct nctempchar1 nctemp159 = {{ 3}, (char*)"  \0"};
nctemp158=&nctemp159;
nctempchar1* nctemp156= nctemp158;
int nctemp160=LibePuts(nctemp154,nctemp156);
int nctemp162= fdo;
int nctemp164= 34;
int nctemp166=LibePutc(nctemp162,nctemp164);
struct tree* nctemp172= p;
nctempchar1* nctemp174=PtreeGetfile(nctemp172);
f=nctemp174;
int nctemp176= fdo;
nctempchar1* nctemp178= f;
int nctemp181=LibePuts(nctemp176,nctemp178);
int nctemp183= fdo;
int nctemp185= 34;
int nctemp187=LibePutc(nctemp183,nctemp185);
int nctemp189= fdo;
struct nctempchar1 *nctemp193;
static struct nctempchar1 nctemp194 = {{ 3}, (char*)"\n\0"};
nctemp193=&nctemp194;
nctempchar1* nctemp191= nctemp193;
int nctemp195=LibePuts(nctemp189,nctemp191);
struct tree* nctemp200= p;
int nctemp202=PtreeGetline(nctemp200);
CodeLine =nctemp202;
}
}
}
int nctemp204= fdo;
nctempchar1* nctemp206= s;
int nctemp209=LibePuts(nctemp204,nctemp206);
int nctemp211= fdo;
int nctemp213=LibeFlush(nctemp211);
return 1;
}
int CodeEd (int d)
{
int fdo;
int nctemp219=CodeGetfdout();
fdo =nctemp219;
int nctemp221= fdo;
int nctemp223= d;
int nctemp225=LibePuti(nctemp221,nctemp223);
return 1;
}
int CodeEc (int d)
{
int fdo;
int nctemp231=CodeGetfdout();
fdo =nctemp231;
int nctemp233= fdo;
int nctemp235= d;
int nctemp237=LibePutc(nctemp233,nctemp235);
return 1;
}
int CodeEsr (nctempchar1 *s)
{
int i;
int l;
int fdo;
int nctemp243=CodeGetfdout();
fdo =nctemp243;
nctempchar1* nctemp248= s;
int nctemp251=LibeStrlen(nctemp248);
l =nctemp251;
i =1;
int nctemp264 = l - 1;
int nctemp256 = (i < nctemp264);
while(nctemp256){
{
int nctemp266= fdo;
int nctemp273=i;
int nctemp270=(int)(s->a[nctemp273]);
int nctemp268= nctemp270;
int nctemp275=LibePutc(nctemp266,nctemp268);
}
int nctemp284 = i + 1;
i =nctemp284;
int nctemp293 = l - 1;
int nctemp285 = (i < nctemp293);
nctemp256=nctemp285;
}
int nctemp295= fdo;
int nctemp297=LibeFlush(nctemp295);
return 1;
}
int CodeIdeclaration (struct tree* p,struct symbol* tp)
{
struct symbol* nctemp304= tp;
nctempchar1* nctemp306=SymGetype(nctemp304);
nctempchar1* nctemp302= nctemp306;
struct nctempchar1 *nctemp309;
static struct nctempchar1 nctemp310 = {{ 10}, (char*)"rconstant\0"};
nctemp309=&nctemp310;
nctempchar1* nctemp307= nctemp309;
int nctemp311=LibeStrcmp(nctemp302,nctemp307);
int nctemp299 = (nctemp311 ==1);
if(nctemp299)
{
return 1;
}
struct symbol* nctemp319= tp;
nctempchar1* nctemp321=SymGetype(nctemp319);
nctempchar1* nctemp317= nctemp321;
struct nctempchar1 *nctemp324;
static struct nctempchar1 nctemp325 = {{ 10}, (char*)"iconstant\0"};
nctemp324=&nctemp325;
nctempchar1* nctemp322= nctemp324;
int nctemp326=LibeStrcmp(nctemp317,nctemp322);
int nctemp314 = (nctemp326 ==1);
if(nctemp314)
{
return 1;
}
struct symbol* nctemp334= tp;
nctempchar1* nctemp336=SymGetype(nctemp334);
nctempchar1* nctemp332= nctemp336;
struct nctempchar1 *nctemp339;
static struct nctempchar1 nctemp340 = {{ 10}, (char*)"sconstant\0"};
nctemp339=&nctemp340;
nctempchar1* nctemp337= nctemp339;
int nctemp341=LibeStrcmp(nctemp332,nctemp337);
int nctemp329 = (nctemp341 ==1);
if(nctemp329)
{
return 1;
}
struct symbol* nctemp349= tp;
nctempchar1* nctemp351=SymGetstruct(nctemp349);
nctempchar1* nctemp347= nctemp351;
struct nctempchar1 *nctemp354;
static struct nctempchar1 nctemp355 = {{ 10}, (char*)"structdef\0"};
nctemp354=&nctemp355;
nctempchar1* nctemp352= nctemp354;
int nctemp356=LibeStrcmp(nctemp347,nctemp352);
int nctemp344 = (nctemp356 ==1);
if(nctemp344)
{
struct tree* nctemp359= p;
struct nctempchar1 *nctemp363;
static struct nctempchar1 nctemp364 = {{ 8}, (char*)"struct \0"};
nctemp363=&nctemp364;
nctempchar1* nctemp361= nctemp363;
int nctemp365=CodeEs(nctemp359,nctemp361);
}
struct symbol* nctemp371= tp;
nctempchar1* nctemp373=SymGetstruct(nctemp371);
nctempchar1* nctemp369= nctemp373;
struct nctempchar1 *nctemp376;
static struct nctempchar1 nctemp377 = {{ 7}, (char*)"struct\0"};
nctemp376=&nctemp377;
nctempchar1* nctemp374= nctemp376;
int nctemp378=LibeStrcmp(nctemp369,nctemp374);
int nctemp366 = (nctemp378 ==1);
if(nctemp366)
{
struct symbol* nctemp385= tp;
nctempchar1* nctemp387=SymGetarray(nctemp385);
nctempchar1* nctemp383= nctemp387;
struct nctempchar1 *nctemp390;
static struct nctempchar1 nctemp391 = {{ 6}, (char*)"array\0"};
nctemp390=&nctemp391;
nctempchar1* nctemp388= nctemp390;
int nctemp392=LibeStrcmp(nctemp383,nctemp388);
int nctemp380 = (nctemp392 ==1);
if(nctemp380)
{
struct tree* nctemp395= p;
struct nctempchar1 *nctemp399;
static struct nctempchar1 nctemp400 = {{ 14}, (char*)"struct nctemp\0"};
nctemp399=&nctemp400;
nctempchar1* nctemp397= nctemp399;
int nctemp401=CodeEs(nctemp395,nctemp397);
struct tree* nctemp403= p;
struct symbol* nctemp407= tp;
nctempchar1* nctemp409=SymGetype(nctemp407);
nctempchar1* nctemp405= nctemp409;
int nctemp410=CodeEs(nctemp403,nctemp405);
struct symbol* nctemp414= tp;
int nctemp416=SymGetrank(nctemp414);
int nctemp412= nctemp416;
int nctemp417=CodeEd(nctemp412);
struct tree* nctemp419= p;
struct nctempchar1 *nctemp423;
static struct nctempchar1 nctemp424 = {{ 3}, (char*)" *\0"};
nctemp423=&nctemp424;
nctempchar1* nctemp421= nctemp423;
int nctemp425=CodeEs(nctemp419,nctemp421);
struct tree* nctemp427= p;
struct symbol* nctemp431= tp;
nctempchar1* nctemp433=SymGetname(nctemp431);
nctempchar1* nctemp429= nctemp433;
int nctemp434=CodeEs(nctemp427,nctemp429);
}
else{
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
struct tree* nctemp492= p;
struct nctempchar1 *nctemp496;
static struct nctempchar1 nctemp497 = {{ 7}, (char*)"nctemp\0"};
nctemp496=&nctemp497;
nctempchar1* nctemp494= nctemp496;
int nctemp498=CodeEs(nctemp492,nctemp494);
struct tree* nctemp500= p;
struct symbol* nctemp504= tp;
nctempchar1* nctemp506=SymGetype(nctemp504);
nctempchar1* nctemp502= nctemp506;
int nctemp507=CodeEs(nctemp500,nctemp502);
struct symbol* nctemp511= tp;
int nctemp513=SymGetrank(nctemp511);
int nctemp509= nctemp513;
int nctemp514=CodeEd(nctemp509);
struct tree* nctemp516= p;
struct nctempchar1 *nctemp520;
static struct nctempchar1 nctemp521 = {{ 3}, (char*)" *\0"};
nctemp520=&nctemp521;
nctempchar1* nctemp518= nctemp520;
int nctemp522=CodeEs(nctemp516,nctemp518);
struct tree* nctemp524= p;
struct symbol* nctemp528= tp;
nctempchar1* nctemp530=SymGetname(nctemp528);
nctempchar1* nctemp526= nctemp530;
int nctemp531=CodeEs(nctemp524,nctemp526);
}
else{
struct tree* nctemp533= p;
struct symbol* nctemp537= tp;
nctempchar1* nctemp539=SymGetype(nctemp537);
nctempchar1* nctemp535= nctemp539;
int nctemp540=CodeEs(nctemp533,nctemp535);
struct tree* nctemp542= p;
struct nctempchar1 *nctemp546;
static struct nctempchar1 nctemp547 = {{ 2}, (char*)" \0"};
nctemp546=&nctemp547;
nctempchar1* nctemp544= nctemp546;
int nctemp548=CodeEs(nctemp542,nctemp544);
struct tree* nctemp550= p;
struct symbol* nctemp554= tp;
nctempchar1* nctemp556=SymGetname(nctemp554);
nctempchar1* nctemp552= nctemp556;
int nctemp557=CodeEs(nctemp550,nctemp552);
}
}
return 1;
}
int CodeIdeclarations (struct tree* p,struct symbol* tp)
{
int nctemp559 = (tp !=0);
int nctemp563=nctemp559;
while(nctemp563)
{{
struct tree* nctemp565= p;
struct symbol* nctemp567= tp;
int nctemp569=CodeIdeclaration(nctemp565,nctemp567);
struct tree* nctemp571= p;
struct nctempchar1 *nctemp575;
static struct nctempchar1 nctemp576 = {{ 4}, (char*)";\n\0"};
nctemp575=&nctemp576;
nctempchar1* nctemp573= nctemp575;
int nctemp577=CodeEs(nctemp571,nctemp573);
struct symbol* nctemp582= tp;
struct symbol* nctemp584=SymMvnext(nctemp582);
tp =nctemp584;
}
int nctemp585 = (tp !=0);
nctemp563=nctemp585;}return 1;
}
int CodeStructdefsym (struct tree* p,struct symbol* tp)
{
struct symbol* up;
struct tree* nctemp591= p;
struct nctempchar1 *nctemp595;
static struct nctempchar1 nctemp596 = {{ 8}, (char*)"struct \0"};
nctemp595=&nctemp596;
nctempchar1* nctemp593= nctemp595;
int nctemp597=CodeEs(nctemp591,nctemp593);
struct tree* nctemp599= p;
struct symbol* nctemp603= tp;
nctempchar1* nctemp605=SymGetype(nctemp603);
nctempchar1* nctemp601= nctemp605;
int nctemp606=CodeEs(nctemp599,nctemp601);
struct tree* nctemp608= p;
struct nctempchar1 *nctemp612;
static struct nctempchar1 nctemp613 = {{ 3}, (char*)" {\0"};
nctemp612=&nctemp613;
nctempchar1* nctemp610= nctemp612;
int nctemp614=CodeEs(nctemp608,nctemp610);
struct symbol* nctemp619= tp;
struct symbol* nctemp621=SymGetable(nctemp619);
up =nctemp621;
struct symbol* nctemp626= up;
struct symbol* nctemp628=SymMvnext(nctemp626);
up =nctemp628;
struct tree* nctemp630= p;
struct symbol* nctemp632= up;
int nctemp634=CodeIdeclarations(nctemp630,nctemp632);
struct tree* nctemp636= p;
struct nctempchar1 *nctemp640;
static struct nctempchar1 nctemp641 = {{ 5}, (char*)"};\n\0"};
nctemp640=&nctemp641;
nctempchar1* nctemp638= nctemp640;
int nctemp642=CodeEs(nctemp636,nctemp638);
struct tree* nctemp644= p;
struct nctempchar1 *nctemp648;
static struct nctempchar1 nctemp649 = {{ 16}, (char*)"typedef struct \0"};
nctemp648=&nctemp649;
nctempchar1* nctemp646= nctemp648;
int nctemp650=CodeEs(nctemp644,nctemp646);
struct tree* nctemp652= p;
struct nctempchar1 *nctemp656;
static struct nctempchar1 nctemp657 = {{ 7}, (char*)"nctemp\0"};
nctemp656=&nctemp657;
nctempchar1* nctemp654= nctemp656;
int nctemp658=CodeEs(nctemp652,nctemp654);
struct tree* nctemp660= p;
struct symbol* nctemp664= tp;
nctempchar1* nctemp666=SymGetype(nctemp664);
nctempchar1* nctemp662= nctemp666;
int nctemp667=CodeEs(nctemp660,nctemp662);
struct tree* nctemp669= p;
struct nctempchar1 *nctemp673;
static struct nctempchar1 nctemp674 = {{ 2}, (char*)"1\0"};
nctemp673=&nctemp674;
nctempchar1* nctemp671= nctemp673;
int nctemp675=CodeEs(nctemp669,nctemp671);
struct tree* nctemp677= p;
struct nctempchar1 *nctemp681;
static struct nctempchar1 nctemp682 = {{ 20}, (char*)" {int d[1]; struct \0"};
nctemp681=&nctemp682;
nctempchar1* nctemp679= nctemp681;
int nctemp683=CodeEs(nctemp677,nctemp679);
struct tree* nctemp685= p;
struct symbol* nctemp689= tp;
nctempchar1* nctemp691=SymGetype(nctemp689);
nctempchar1* nctemp687= nctemp691;
int nctemp692=CodeEs(nctemp685,nctemp687);
struct tree* nctemp694= p;
struct nctempchar1 *nctemp698;
static struct nctempchar1 nctemp699 = {{ 6}, (char*)" *a; \0"};
nctemp698=&nctemp699;
nctempchar1* nctemp696= nctemp698;
int nctemp700=CodeEs(nctemp694,nctemp696);
struct tree* nctemp702= p;
struct nctempchar1 *nctemp706;
static struct nctempchar1 nctemp707 = {{ 3}, (char*)"} \0"};
nctemp706=&nctemp707;
nctempchar1* nctemp704= nctemp706;
int nctemp708=CodeEs(nctemp702,nctemp704);
struct tree* nctemp710= p;
struct nctempchar1 *nctemp714;
static struct nctempchar1 nctemp715 = {{ 7}, (char*)"nctemp\0"};
nctemp714=&nctemp715;
nctempchar1* nctemp712= nctemp714;
int nctemp716=CodeEs(nctemp710,nctemp712);
struct tree* nctemp718= p;
struct symbol* nctemp722= tp;
nctempchar1* nctemp724=SymGetype(nctemp722);
nctempchar1* nctemp720= nctemp724;
int nctemp725=CodeEs(nctemp718,nctemp720);
struct tree* nctemp727= p;
struct nctempchar1 *nctemp731;
static struct nctempchar1 nctemp732 = {{ 2}, (char*)"1\0"};
nctemp731=&nctemp732;
nctempchar1* nctemp729= nctemp731;
int nctemp733=CodeEs(nctemp727,nctemp729);
struct tree* nctemp735= p;
struct nctempchar1 *nctemp739;
static struct nctempchar1 nctemp740 = {{ 4}, (char*)";\n\0"};
nctemp739=&nctemp740;
nctempchar1* nctemp737= nctemp739;
int nctemp741=CodeEs(nctemp735,nctemp737);
struct tree* nctemp743= p;
struct nctempchar1 *nctemp747;
static struct nctempchar1 nctemp748 = {{ 8}, (char*)"struct \0"};
nctemp747=&nctemp748;
nctempchar1* nctemp745= nctemp747;
int nctemp749=CodeEs(nctemp743,nctemp745);
struct tree* nctemp751= p;
struct nctempchar1 *nctemp755;
static struct nctempchar1 nctemp756 = {{ 7}, (char*)"nctemp\0"};
nctemp755=&nctemp756;
nctempchar1* nctemp753= nctemp755;
int nctemp757=CodeEs(nctemp751,nctemp753);
struct tree* nctemp759= p;
struct symbol* nctemp763= tp;
nctempchar1* nctemp765=SymGetype(nctemp763);
nctempchar1* nctemp761= nctemp765;
int nctemp766=CodeEs(nctemp759,nctemp761);
struct tree* nctemp768= p;
struct nctempchar1 *nctemp772;
static struct nctempchar1 nctemp773 = {{ 2}, (char*)"2\0"};
nctemp772=&nctemp773;
nctempchar1* nctemp770= nctemp772;
int nctemp774=CodeEs(nctemp768,nctemp770);
struct tree* nctemp776= p;
struct nctempchar1 *nctemp780;
static struct nctempchar1 nctemp781 = {{ 20}, (char*)" {int d[2]; struct \0"};
nctemp780=&nctemp781;
nctempchar1* nctemp778= nctemp780;
int nctemp782=CodeEs(nctemp776,nctemp778);
struct tree* nctemp784= p;
struct symbol* nctemp788= tp;
nctempchar1* nctemp790=SymGetype(nctemp788);
nctempchar1* nctemp786= nctemp790;
int nctemp791=CodeEs(nctemp784,nctemp786);
struct tree* nctemp793= p;
struct nctempchar1 *nctemp797;
static struct nctempchar1 nctemp798 = {{ 6}, (char*)" *a; \0"};
nctemp797=&nctemp798;
nctempchar1* nctemp795= nctemp797;
int nctemp799=CodeEs(nctemp793,nctemp795);
struct tree* nctemp801= p;
struct nctempchar1 *nctemp805;
static struct nctempchar1 nctemp806 = {{ 3}, (char*)"} \0"};
nctemp805=&nctemp806;
nctempchar1* nctemp803= nctemp805;
int nctemp807=CodeEs(nctemp801,nctemp803);
struct tree* nctemp809= p;
struct nctempchar1 *nctemp813;
static struct nctempchar1 nctemp814 = {{ 4}, (char*)";\n\0"};
nctemp813=&nctemp814;
nctempchar1* nctemp811= nctemp813;
int nctemp815=CodeEs(nctemp809,nctemp811);
struct tree* nctemp817= p;
struct nctempchar1 *nctemp821;
static struct nctempchar1 nctemp822 = {{ 8}, (char*)"struct \0"};
nctemp821=&nctemp822;
nctempchar1* nctemp819= nctemp821;
int nctemp823=CodeEs(nctemp817,nctemp819);
struct tree* nctemp825= p;
struct nctempchar1 *nctemp829;
static struct nctempchar1 nctemp830 = {{ 7}, (char*)"nctemp\0"};
nctemp829=&nctemp830;
nctempchar1* nctemp827= nctemp829;
int nctemp831=CodeEs(nctemp825,nctemp827);
struct tree* nctemp833= p;
struct symbol* nctemp837= tp;
nctempchar1* nctemp839=SymGetype(nctemp837);
nctempchar1* nctemp835= nctemp839;
int nctemp840=CodeEs(nctemp833,nctemp835);
struct tree* nctemp842= p;
struct nctempchar1 *nctemp846;
static struct nctempchar1 nctemp847 = {{ 2}, (char*)"3\0"};
nctemp846=&nctemp847;
nctempchar1* nctemp844= nctemp846;
int nctemp848=CodeEs(nctemp842,nctemp844);
struct tree* nctemp850= p;
struct nctempchar1 *nctemp854;
static struct nctempchar1 nctemp855 = {{ 20}, (char*)" {int d[3]; struct \0"};
nctemp854=&nctemp855;
nctempchar1* nctemp852= nctemp854;
int nctemp856=CodeEs(nctemp850,nctemp852);
struct tree* nctemp858= p;
struct symbol* nctemp862= tp;
nctempchar1* nctemp864=SymGetype(nctemp862);
nctempchar1* nctemp860= nctemp864;
int nctemp865=CodeEs(nctemp858,nctemp860);
struct tree* nctemp867= p;
struct nctempchar1 *nctemp871;
static struct nctempchar1 nctemp872 = {{ 6}, (char*)" *a; \0"};
nctemp871=&nctemp872;
nctempchar1* nctemp869= nctemp871;
int nctemp873=CodeEs(nctemp867,nctemp869);
struct tree* nctemp875= p;
struct nctempchar1 *nctemp879;
static struct nctempchar1 nctemp880 = {{ 3}, (char*)"} \0"};
nctemp879=&nctemp880;
nctempchar1* nctemp877= nctemp879;
int nctemp881=CodeEs(nctemp875,nctemp877);
struct tree* nctemp883= p;
struct nctempchar1 *nctemp887;
static struct nctempchar1 nctemp888 = {{ 4}, (char*)";\n\0"};
nctemp887=&nctemp888;
nctempchar1* nctemp885= nctemp887;
int nctemp889=CodeEs(nctemp883,nctemp885);
struct tree* nctemp891= p;
struct nctempchar1 *nctemp895;
static struct nctempchar1 nctemp896 = {{ 8}, (char*)"struct \0"};
nctemp895=&nctemp896;
nctempchar1* nctemp893= nctemp895;
int nctemp897=CodeEs(nctemp891,nctemp893);
struct tree* nctemp899= p;
struct nctempchar1 *nctemp903;
static struct nctempchar1 nctemp904 = {{ 7}, (char*)"nctemp\0"};
nctemp903=&nctemp904;
nctempchar1* nctemp901= nctemp903;
int nctemp905=CodeEs(nctemp899,nctemp901);
struct tree* nctemp907= p;
struct symbol* nctemp911= tp;
nctempchar1* nctemp913=SymGetype(nctemp911);
nctempchar1* nctemp909= nctemp913;
int nctemp914=CodeEs(nctemp907,nctemp909);
struct tree* nctemp916= p;
struct nctempchar1 *nctemp920;
static struct nctempchar1 nctemp921 = {{ 2}, (char*)"4\0"};
nctemp920=&nctemp921;
nctempchar1* nctemp918= nctemp920;
int nctemp922=CodeEs(nctemp916,nctemp918);
struct tree* nctemp924= p;
struct nctempchar1 *nctemp928;
static struct nctempchar1 nctemp929 = {{ 20}, (char*)" {int d[4]; struct \0"};
nctemp928=&nctemp929;
nctempchar1* nctemp926= nctemp928;
int nctemp930=CodeEs(nctemp924,nctemp926);
struct tree* nctemp932= p;
struct symbol* nctemp936= tp;
nctempchar1* nctemp938=SymGetype(nctemp936);
nctempchar1* nctemp934= nctemp938;
int nctemp939=CodeEs(nctemp932,nctemp934);
struct tree* nctemp941= p;
struct nctempchar1 *nctemp945;
static struct nctempchar1 nctemp946 = {{ 6}, (char*)" *a; \0"};
nctemp945=&nctemp946;
nctempchar1* nctemp943= nctemp945;
int nctemp947=CodeEs(nctemp941,nctemp943);
struct tree* nctemp949= p;
struct nctempchar1 *nctemp953;
static struct nctempchar1 nctemp954 = {{ 3}, (char*)"} \0"};
nctemp953=&nctemp954;
nctempchar1* nctemp951= nctemp953;
int nctemp955=CodeEs(nctemp949,nctemp951);
struct tree* nctemp957= p;
struct nctempchar1 *nctemp961;
static struct nctempchar1 nctemp962 = {{ 4}, (char*)";\n\0"};
nctemp961=&nctemp962;
nctempchar1* nctemp959= nctemp961;
int nctemp963=CodeEs(nctemp957,nctemp959);
return 1;
}
int CodeFdefcpusym (struct tree* p,struct symbol* tp)
{
struct symbol* nctemp970= tp;
nctempchar1* nctemp972=SymGetstruct(nctemp970);
nctempchar1* nctemp968= nctemp972;
struct nctempchar1 *nctemp975;
static struct nctempchar1 nctemp976 = {{ 7}, (char*)"struct\0"};
nctemp975=&nctemp976;
nctempchar1* nctemp973= nctemp975;
int nctemp977=LibeStrcmp(nctemp968,nctemp973);
int nctemp965 = (nctemp977 ==1);
if(nctemp965)
{
struct tree* nctemp980= p;
struct nctempchar1 *nctemp984;
static struct nctempchar1 nctemp985 = {{ 8}, (char*)"struct \0"};
nctemp984=&nctemp985;
nctempchar1* nctemp982= nctemp984;
int nctemp986=CodeEs(nctemp980,nctemp982);
}
struct symbol* nctemp992= tp;
nctempchar1* nctemp994=SymGetarray(nctemp992);
nctempchar1* nctemp990= nctemp994;
struct nctempchar1 *nctemp997;
static struct nctempchar1 nctemp998 = {{ 6}, (char*)"array\0"};
nctemp997=&nctemp998;
nctempchar1* nctemp995= nctemp997;
int nctemp999=LibeStrcmp(nctemp990,nctemp995);
int nctemp987 = (nctemp999 ==1);
if(nctemp987)
{
struct tree* nctemp1002= p;
struct nctempchar1 *nctemp1006;
static struct nctempchar1 nctemp1007 = {{ 7}, (char*)"nctemp\0"};
nctemp1006=&nctemp1007;
nctempchar1* nctemp1004= nctemp1006;
int nctemp1008=CodeEs(nctemp1002,nctemp1004);
}
struct tree* nctemp1010= p;
struct symbol* nctemp1014= tp;
nctempchar1* nctemp1016=SymGetype(nctemp1014);
nctempchar1* nctemp1012= nctemp1016;
int nctemp1017=CodeEs(nctemp1010,nctemp1012);
struct symbol* nctemp1023= tp;
nctempchar1* nctemp1025=SymGetarray(nctemp1023);
nctempchar1* nctemp1021= nctemp1025;
struct nctempchar1 *nctemp1028;
static struct nctempchar1 nctemp1029 = {{ 6}, (char*)"array\0"};
nctemp1028=&nctemp1029;
nctempchar1* nctemp1026= nctemp1028;
int nctemp1030=LibeStrcmp(nctemp1021,nctemp1026);
int nctemp1018 = (nctemp1030 ==1);
if(nctemp1018)
{
struct symbol* nctemp1035= tp;
int nctemp1037=SymGetrank(nctemp1035);
int nctemp1033= nctemp1037;
int nctemp1038=CodeEd(nctemp1033);
struct tree* nctemp1040= p;
struct nctempchar1 *nctemp1044;
static struct nctempchar1 nctemp1045 = {{ 3}, (char*)" *\0"};
nctemp1044=&nctemp1045;
nctempchar1* nctemp1042= nctemp1044;
int nctemp1046=CodeEs(nctemp1040,nctemp1042);
}
struct symbol* nctemp1052= tp;
nctempchar1* nctemp1054=SymGetstruct(nctemp1052);
nctempchar1* nctemp1050= nctemp1054;
struct nctempchar1 *nctemp1057;
static struct nctempchar1 nctemp1058 = {{ 7}, (char*)"struct\0"};
nctemp1057=&nctemp1058;
nctempchar1* nctemp1055= nctemp1057;
int nctemp1059=LibeStrcmp(nctemp1050,nctemp1055);
int nctemp1047 = (nctemp1059 ==1);
if(nctemp1047)
{
struct tree* nctemp1062= p;
struct nctempchar1 *nctemp1066;
static struct nctempchar1 nctemp1067 = {{ 2}, (char*)"*\0"};
nctemp1066=&nctemp1067;
nctempchar1* nctemp1064= nctemp1066;
int nctemp1068=CodeEs(nctemp1062,nctemp1064);
}
struct tree* nctemp1070= p;
struct nctempchar1 *nctemp1074;
static struct nctempchar1 nctemp1075 = {{ 2}, (char*)" \0"};
nctemp1074=&nctemp1075;
nctempchar1* nctemp1072= nctemp1074;
int nctemp1076=CodeEs(nctemp1070,nctemp1072);
struct tree* nctemp1078= p;
struct symbol* nctemp1082= tp;
nctempchar1* nctemp1084=SymGetname(nctemp1082);
nctempchar1* nctemp1080= nctemp1084;
int nctemp1085=CodeEs(nctemp1078,nctemp1080);
struct tree* nctemp1087= p;
struct nctempchar1 *nctemp1091;
static struct nctempchar1 nctemp1092 = {{ 3}, (char*)" (\0"};
nctemp1091=&nctemp1092;
nctempchar1* nctemp1089= nctemp1091;
int nctemp1093=CodeEs(nctemp1087,nctemp1089);
struct symbol* nctemp1098= tp;
struct symbol* nctemp1100=SymGetable(nctemp1098);
tp =nctemp1100;
int nctemp1101 = (tp ==0);
if(nctemp1101)
{
struct tree* nctemp1106= p;
struct nctempchar1 *nctemp1110;
static struct nctempchar1 nctemp1111 = {{ 5}, (char*)");\n\0"};
nctemp1110=&nctemp1111;
nctempchar1* nctemp1108= nctemp1110;
int nctemp1112=CodeEs(nctemp1106,nctemp1108);
return 1;
}
struct symbol* nctemp1118= tp;
struct symbol* nctemp1120=SymMvnext(nctemp1118);
tp =nctemp1120;
struct symbol* nctemp1125= tp;
struct symbol* nctemp1127=SymGetable(nctemp1125);
tp =nctemp1127;
int nctemp1128 = (tp ==0);
if(nctemp1128)
{
return 1;
}
struct symbol* nctemp1137= tp;
struct symbol* nctemp1139=SymMvnext(nctemp1137);
tp =nctemp1139;
int nctemp1140 = (tp !=0);
int nctemp1144=nctemp1140;
while(nctemp1144)
{{
struct tree* nctemp1146= p;
struct symbol* nctemp1148= tp;
int nctemp1150=CodeIdeclaration(nctemp1146,nctemp1148);
struct symbol* nctemp1155= tp;
struct symbol* nctemp1157=SymMvnext(nctemp1155);
tp =nctemp1157;
int nctemp1158 = (tp !=0);
if(nctemp1158)
{
struct tree* nctemp1163= p;
struct nctempchar1 *nctemp1167;
static struct nctempchar1 nctemp1168 = {{ 2}, (char*)",\0"};
nctemp1167=&nctemp1168;
nctempchar1* nctemp1165= nctemp1167;
int nctemp1169=CodeEs(nctemp1163,nctemp1165);
}
else{
struct tree* nctemp1171= p;
struct nctempchar1 *nctemp1175;
static struct nctempchar1 nctemp1176 = {{ 5}, (char*)");\n\0"};
nctemp1175=&nctemp1176;
nctempchar1* nctemp1173= nctemp1175;
int nctemp1177=CodeEs(nctemp1171,nctemp1173);
}
}
int nctemp1178 = (tp !=0);
nctemp1144=nctemp1178;}return 1;
}
int CodeImport (struct tree* p,struct symbol* tp)
{
nctempchar1 *module;
struct tree* nctemp1188= p;
nctempchar1* nctemp1190=PtreeGetdef(nctemp1188);
module=nctemp1190;
struct symbol* nctemp1195= tp;
struct symbol* nctemp1197=SymMvnext(nctemp1195);
tp =nctemp1197;
int nctemp1198 = (tp !=0);
int nctemp1202=nctemp1198;
while(nctemp1202)
{{
struct symbol* nctemp1208= tp;
nctempchar1* nctemp1210=SymGetmodule(nctemp1208);
nctempchar1* nctemp1206= nctemp1210;
nctempchar1* nctemp1211= module;
int nctemp1214=LibeStrcmp(nctemp1206,nctemp1211);
int nctemp1203 = (nctemp1214 ==1);
if(nctemp1203)
{
struct symbol* nctemp1221= tp;
nctempchar1* nctemp1223=SymGetstruct(nctemp1221);
nctempchar1* nctemp1219= nctemp1223;
struct nctempchar1 *nctemp1226;
static struct nctempchar1 nctemp1227 = {{ 10}, (char*)"structdef\0"};
nctemp1226=&nctemp1227;
nctempchar1* nctemp1224= nctemp1226;
int nctemp1228=LibeStrcmp(nctemp1219,nctemp1224);
int nctemp1216 = (nctemp1228 ==1);
if(nctemp1216)
{
struct tree* nctemp1231= p;
struct symbol* nctemp1233= tp;
int nctemp1235=CodeStructdefsym(nctemp1231,nctemp1233);
}
else{
struct symbol* nctemp1241= tp;
nctempchar1* nctemp1243=SymGetfunc(nctemp1241);
nctempchar1* nctemp1239= nctemp1243;
struct nctempchar1 *nctemp1246;
static struct nctempchar1 nctemp1247 = {{ 5}, (char*)"fdef\0"};
nctemp1246=&nctemp1247;
nctempchar1* nctemp1244= nctemp1246;
int nctemp1248=LibeStrcmp(nctemp1239,nctemp1244);
int nctemp1236 = (nctemp1248 ==1);
if(nctemp1236)
{
struct tree* nctemp1251= p;
struct symbol* nctemp1253= tp;
int nctemp1255=CodeFdefcpusym(nctemp1251,nctemp1253);
}
else{
struct tree* nctemp1257= p;
struct symbol* nctemp1259= tp;
int nctemp1261=CodeIdeclaration(nctemp1257,nctemp1259);
struct tree* nctemp1263= p;
struct nctempchar1 *nctemp1267;
static struct nctempchar1 nctemp1268 = {{ 4}, (char*)";\n\0"};
nctemp1267=&nctemp1268;
nctempchar1* nctemp1265= nctemp1267;
int nctemp1269=CodeEs(nctemp1263,nctemp1265);
}
}
}
struct symbol* nctemp1274= tp;
struct symbol* nctemp1276=SymMvnext(nctemp1274);
tp =nctemp1276;
}
int nctemp1277 = (tp !=0);
nctemp1202=nctemp1277;}return 1;
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
struct tree* nctemp1287= p;
nctempchar1* nctemp1289=PtreeGetarray(nctemp1287);
nctempchar1* nctemp1285= nctemp1289;
struct nctempchar1 *nctemp1292;
static struct nctempchar1 nctemp1293 = {{ 6}, (char*)"array\0"};
nctemp1292=&nctemp1293;
nctempchar1* nctemp1290= nctemp1292;
int nctemp1294=LibeStrcmp(nctemp1285,nctemp1290);
int nctemp1282 = (nctemp1294 ==1);
if(nctemp1282)
{
struct tree* nctemp1300= p;
struct tree* nctemp1302=PtreeMvchild(nctemp1300);
p =nctemp1302;
struct tree* nctemp1307= p;
struct tree* nctemp1309=PtreeMvsister(nctemp1307);
p =nctemp1309;
struct tree* nctemp1315= p;
nctempchar1* nctemp1317=PtreeGetforw(nctemp1315);
nctempchar1* nctemp1313= nctemp1317;
struct nctempchar1 *nctemp1320;
static struct nctempchar1 nctemp1321 = {{ 5}, (char*)"forw\0"};
nctemp1320=&nctemp1321;
nctempchar1* nctemp1318= nctemp1320;
int nctemp1322=LibeStrcmp(nctemp1313,nctemp1318);
int nctemp1310 = (nctemp1322 ==1);
if(nctemp1310)
{
forw =1;
}
}
else{
struct tree* nctemp1332= p;
struct tree* nctemp1334=PtreeMvchild(nctemp1332);
p =nctemp1334;
struct tree* nctemp1340= p;
nctempchar1* nctemp1342=PtreeGetforw(nctemp1340);
nctempchar1* nctemp1338= nctemp1342;
struct nctempchar1 *nctemp1345;
static struct nctempchar1 nctemp1346 = {{ 5}, (char*)"forw\0"};
nctemp1345=&nctemp1346;
nctempchar1* nctemp1343= nctemp1345;
int nctemp1347=LibeStrcmp(nctemp1338,nctemp1343);
int nctemp1335 = (nctemp1347 ==1);
if(nctemp1335)
{
forw =1;
}
}
struct tree* nctemp1359= p;
nctempchar1* nctemp1361=PtreeGetdef(nctemp1359);
nctempchar1* nctemp1357= nctemp1361;
struct symbol* nctemp1364=SymGetetp();
struct symbol* nctemp1362= nctemp1364;
struct symbol* nctemp1365=SymLookup(nctemp1357,nctemp1362);
tp =nctemp1365;
struct symbol* nctemp1371= tp;
nctempchar1* nctemp1373=SymGetstruct(nctemp1371);
nctempchar1* nctemp1369= nctemp1373;
struct nctempchar1 *nctemp1376;
static struct nctempchar1 nctemp1377 = {{ 7}, (char*)"struct\0"};
nctemp1376=&nctemp1377;
nctempchar1* nctemp1374= nctemp1376;
int nctemp1378=LibeStrcmp(nctemp1369,nctemp1374);
int nctemp1366 = (nctemp1378 ==1);
if(nctemp1366)
{
struct tree* nctemp1381= p;
struct nctempchar1 *nctemp1385;
static struct nctempchar1 nctemp1386 = {{ 8}, (char*)"struct \0"};
nctemp1385=&nctemp1386;
nctempchar1* nctemp1383= nctemp1385;
int nctemp1387=CodeEs(nctemp1381,nctemp1383);
}
struct symbol* nctemp1393= tp;
nctempchar1* nctemp1395=SymGetarray(nctemp1393);
nctempchar1* nctemp1391= nctemp1395;
struct nctempchar1 *nctemp1398;
static struct nctempchar1 nctemp1399 = {{ 6}, (char*)"array\0"};
nctemp1398=&nctemp1399;
nctempchar1* nctemp1396= nctemp1398;
int nctemp1400=LibeStrcmp(nctemp1391,nctemp1396);
int nctemp1388 = (nctemp1400 ==1);
if(nctemp1388)
{
struct tree* nctemp1403= p;
struct nctempchar1 *nctemp1407;
static struct nctempchar1 nctemp1408 = {{ 7}, (char*)"nctemp\0"};
nctemp1407=&nctemp1408;
nctempchar1* nctemp1405= nctemp1407;
int nctemp1409=CodeEs(nctemp1403,nctemp1405);
}
struct tree* nctemp1411= p;
struct symbol* nctemp1415= tp;
nctempchar1* nctemp1417=SymGetype(nctemp1415);
nctempchar1* nctemp1413= nctemp1417;
int nctemp1418=CodeEs(nctemp1411,nctemp1413);
struct symbol* nctemp1424= tp;
nctempchar1* nctemp1426=SymGetarray(nctemp1424);
nctempchar1* nctemp1422= nctemp1426;
struct nctempchar1 *nctemp1429;
static struct nctempchar1 nctemp1430 = {{ 6}, (char*)"array\0"};
nctemp1429=&nctemp1430;
nctempchar1* nctemp1427= nctemp1429;
int nctemp1431=LibeStrcmp(nctemp1422,nctemp1427);
int nctemp1419 = (nctemp1431 ==1);
if(nctemp1419)
{
struct symbol* nctemp1436= tp;
int nctemp1438=SymGetrank(nctemp1436);
int nctemp1434= nctemp1438;
int nctemp1439=CodeEd(nctemp1434);
struct tree* nctemp1441= p;
struct nctempchar1 *nctemp1445;
static struct nctempchar1 nctemp1446 = {{ 3}, (char*)" *\0"};
nctemp1445=&nctemp1446;
nctempchar1* nctemp1443= nctemp1445;
int nctemp1447=CodeEs(nctemp1441,nctemp1443);
}
struct symbol* nctemp1453= tp;
nctempchar1* nctemp1455=SymGetstruct(nctemp1453);
nctempchar1* nctemp1451= nctemp1455;
struct nctempchar1 *nctemp1458;
static struct nctempchar1 nctemp1459 = {{ 7}, (char*)"struct\0"};
nctemp1458=&nctemp1459;
nctempchar1* nctemp1456= nctemp1458;
int nctemp1460=LibeStrcmp(nctemp1451,nctemp1456);
int nctemp1448 = (nctemp1460 ==1);
if(nctemp1448)
{
struct tree* nctemp1463= p;
struct nctempchar1 *nctemp1467;
static struct nctempchar1 nctemp1468 = {{ 2}, (char*)"*\0"};
nctemp1467=&nctemp1468;
nctempchar1* nctemp1465= nctemp1467;
int nctemp1469=CodeEs(nctemp1463,nctemp1465);
}
struct tree* nctemp1471= p;
struct nctempchar1 *nctemp1475;
static struct nctempchar1 nctemp1476 = {{ 2}, (char*)" \0"};
nctemp1475=&nctemp1476;
nctempchar1* nctemp1473= nctemp1475;
int nctemp1477=CodeEs(nctemp1471,nctemp1473);
struct tree* nctemp1479= p;
struct symbol* nctemp1483= tp;
nctempchar1* nctemp1485=SymGetname(nctemp1483);
nctempchar1* nctemp1481= nctemp1485;
int nctemp1486=CodeEs(nctemp1479,nctemp1481);
struct tree* nctemp1488= p;
struct nctempchar1 *nctemp1492;
static struct nctempchar1 nctemp1493 = {{ 3}, (char*)" (\0"};
nctemp1492=&nctemp1493;
nctempchar1* nctemp1490= nctemp1492;
int nctemp1494=CodeEs(nctemp1488,nctemp1490);
struct tree* nctemp1498= p;
struct tree* nctemp1500=PtreeMvchild(nctemp1498);
int nctemp1495 = (nctemp1500 !=0);
if(nctemp1495)
{
struct tree* nctemp1506= p;
struct tree* nctemp1508=PtreeMvchild(nctemp1506);
p =nctemp1508;
}
struct tree* nctemp1514= p;
nctempchar1* nctemp1516=PtreeGetname(nctemp1514);
nctempchar1* nctemp1512= nctemp1516;
struct nctempchar1 *nctemp1519;
static struct nctempchar1 nctemp1520 = {{ 8}, (char*)"arglist\0"};
nctemp1519=&nctemp1520;
nctempchar1* nctemp1517= nctemp1519;
int nctemp1521=LibeStrcmp(nctemp1512,nctemp1517);
int nctemp1509 = (nctemp1521 ==1);
if(nctemp1509)
{
struct symbol* nctemp1527= tp;
struct symbol* nctemp1529=SymGetable(nctemp1527);
tp =nctemp1529;
struct nctempchar1 *nctemp1536;
static struct nctempchar1 nctemp1537 = {{ 9}, (char*)"#arglist\0"};
nctemp1536=&nctemp1537;
nctempchar1* nctemp1534= nctemp1536;
struct symbol* nctemp1538= tp;
struct symbol* nctemp1540=SymLookup(nctemp1534,nctemp1538);
tp =nctemp1540;
struct symbol* nctemp1545= tp;
struct symbol* nctemp1547=SymGetable(nctemp1545);
tp =nctemp1547;
struct symbol* nctemp1555= tp;
struct symbol* nctemp1557=SymMvnext(nctemp1555);
tp =nctemp1557;
int nctemp1548 = (tp !=0);
int nctemp1559=nctemp1548;
while(nctemp1559)
{{
struct tree* nctemp1561= p;
struct symbol* nctemp1563= tp;
int nctemp1565=CodeIdeclaration(nctemp1561,nctemp1563);
struct symbol* nctemp1569= tp;
struct symbol* nctemp1571=SymMvnext(nctemp1569);
int nctemp1566 = (nctemp1571 !=0);
if(nctemp1566)
{
struct tree* nctemp1574= p;
struct nctempchar1 *nctemp1578;
static struct nctempchar1 nctemp1579 = {{ 2}, (char*)",\0"};
nctemp1578=&nctemp1579;
nctempchar1* nctemp1576= nctemp1578;
int nctemp1580=CodeEs(nctemp1574,nctemp1576);
}
int nctemp1589 = noarg + 1;
noarg =nctemp1589;
}
struct symbol* nctemp1597= tp;
struct symbol* nctemp1599=SymMvnext(nctemp1597);
tp =nctemp1599;
int nctemp1590 = (tp !=0);
nctemp1559=nctemp1590;}}
struct tree* nctemp1602= p;
struct nctempchar1 *nctemp1606;
static struct nctempchar1 nctemp1607 = {{ 4}, (char*)")\n\0"};
nctemp1606=&nctemp1607;
nctempchar1* nctemp1604= nctemp1606;
int nctemp1608=CodeEs(nctemp1602,nctemp1604);
int nctemp1609 = (forw ==1);
if(nctemp1609)
{
struct tree* nctemp1614= p;
struct nctempchar1 *nctemp1618;
static struct nctempchar1 nctemp1619 = {{ 4}, (char*)";\n\0"};
nctemp1618=&nctemp1619;
nctempchar1* nctemp1616= nctemp1618;
int nctemp1620=CodeEs(nctemp1614,nctemp1616);
return 1;
}
struct tree* nctemp1625= p;
struct tree* nctemp1627=PtreeMvsister(nctemp1625);
int nctemp1622 = (nctemp1627 !=0);
if(nctemp1622)
{
struct tree* nctemp1632= p;
struct tree* nctemp1634=PtreeMvsister(nctemp1632);
struct tree* nctemp1630= nctemp1634;
int nctemp1635=CodeCompstmnt(nctemp1630);
}
else{
struct tree* nctemp1637= p;
int nctemp1639=CodeCompstmnt(nctemp1637);
}
return 1;
}
int CodeFdeclkernel (struct tree* p)
{
struct symbol* tp;
int noarg;
noarg = 0;
struct tree* nctemp1647= p;
nctempchar1* nctemp1649=PtreeGetdef(nctemp1647);
nctempchar1* nctemp1645= nctemp1649;
struct symbol* nctemp1652=SymGetetp();
struct symbol* nctemp1650= nctemp1652;
struct symbol* nctemp1653=SymLookup(nctemp1645,nctemp1650);
tp =nctemp1653;
struct symbol* nctemp1657= tp;
struct symbol* nctemp1659=SymGetable(nctemp1657);
struct symbol* nctemp1655= nctemp1659;
struct symbol* nctemp1660=SymSetltp(nctemp1655);
struct tree* nctemp1662= p;
struct nctempchar1 *nctemp1666;
static struct nctempchar1 nctemp1667 = {{ 12}, (char*)"__global__ \0"};
nctemp1666=&nctemp1667;
nctempchar1* nctemp1664= nctemp1666;
int nctemp1668=CodeEs(nctemp1662,nctemp1664);
struct tree* nctemp1670= p;
struct nctempchar1 *nctemp1674;
static struct nctempchar1 nctemp1675 = {{ 5}, (char*)"void\0"};
nctemp1674=&nctemp1675;
nctempchar1* nctemp1672= nctemp1674;
int nctemp1676=CodeEs(nctemp1670,nctemp1672);
struct symbol* nctemp1682= tp;
nctempchar1* nctemp1684=SymGetarray(nctemp1682);
nctempchar1* nctemp1680= nctemp1684;
struct nctempchar1 *nctemp1687;
static struct nctempchar1 nctemp1688 = {{ 6}, (char*)"array\0"};
nctemp1687=&nctemp1688;
nctempchar1* nctemp1685= nctemp1687;
int nctemp1689=LibeStrcmp(nctemp1680,nctemp1685);
int nctemp1677 = (nctemp1689 ==1);
if(nctemp1677)
{
struct symbol* nctemp1694= tp;
int nctemp1696=SymGetrank(nctemp1694);
int nctemp1692= nctemp1696;
int nctemp1697=CodeEd(nctemp1692);
}
struct symbol* nctemp1703= tp;
nctempchar1* nctemp1705=SymGetstruct(nctemp1703);
nctempchar1* nctemp1701= nctemp1705;
struct nctempchar1 *nctemp1708;
static struct nctempchar1 nctemp1709 = {{ 7}, (char*)"struct\0"};
nctemp1708=&nctemp1709;
nctempchar1* nctemp1706= nctemp1708;
int nctemp1710=LibeStrcmp(nctemp1701,nctemp1706);
int nctemp1698 = (nctemp1710 ==1);
if(nctemp1698)
{
struct tree* nctemp1713= p;
struct nctempchar1 *nctemp1717;
static struct nctempchar1 nctemp1718 = {{ 2}, (char*)"*\0"};
nctemp1717=&nctemp1718;
nctempchar1* nctemp1715= nctemp1717;
int nctemp1719=CodeEs(nctemp1713,nctemp1715);
}
struct tree* nctemp1721= p;
struct nctempchar1 *nctemp1725;
static struct nctempchar1 nctemp1726 = {{ 2}, (char*)" \0"};
nctemp1725=&nctemp1726;
nctempchar1* nctemp1723= nctemp1725;
int nctemp1727=CodeEs(nctemp1721,nctemp1723);
struct tree* nctemp1729= p;
struct nctempchar1 *nctemp1733;
static struct nctempchar1 nctemp1734 = {{ 8}, (char*)"kernel_\0"};
nctemp1733=&nctemp1734;
nctempchar1* nctemp1731= nctemp1733;
int nctemp1735=CodeEs(nctemp1729,nctemp1731);
struct tree* nctemp1737= p;
struct symbol* nctemp1741= tp;
nctempchar1* nctemp1743=SymGetname(nctemp1741);
nctempchar1* nctemp1739= nctemp1743;
int nctemp1744=CodeEs(nctemp1737,nctemp1739);
struct tree* nctemp1746= p;
struct nctempchar1 *nctemp1750;
static struct nctempchar1 nctemp1751 = {{ 3}, (char*)" (\0"};
nctemp1750=&nctemp1751;
nctempchar1* nctemp1748= nctemp1750;
int nctemp1752=CodeEs(nctemp1746,nctemp1748);
struct tree* nctemp1757= p;
struct tree* nctemp1759=PtreeMvchild(nctemp1757);
p =nctemp1759;
struct tree* nctemp1765= p;
nctempchar1* nctemp1767=PtreeGetname(nctemp1765);
nctempchar1* nctemp1763= nctemp1767;
struct nctempchar1 *nctemp1770;
static struct nctempchar1 nctemp1771 = {{ 8}, (char*)"arglist\0"};
nctemp1770=&nctemp1771;
nctempchar1* nctemp1768= nctemp1770;
int nctemp1772=LibeStrcmp(nctemp1763,nctemp1768);
int nctemp1760 = (nctemp1772 ==1);
if(nctemp1760)
{
struct symbol* nctemp1778= tp;
struct symbol* nctemp1780=SymGetable(nctemp1778);
tp =nctemp1780;
struct nctempchar1 *nctemp1787;
static struct nctempchar1 nctemp1788 = {{ 9}, (char*)"#arglist\0"};
nctemp1787=&nctemp1788;
nctempchar1* nctemp1785= nctemp1787;
struct symbol* nctemp1789= tp;
struct symbol* nctemp1791=SymLookup(nctemp1785,nctemp1789);
tp =nctemp1791;
struct symbol* nctemp1796= tp;
struct symbol* nctemp1798=SymGetable(nctemp1796);
tp =nctemp1798;
struct symbol* nctemp1806= tp;
struct symbol* nctemp1808=SymMvnext(nctemp1806);
tp =nctemp1808;
int nctemp1799 = (tp !=0);
int nctemp1810=nctemp1799;
while(nctemp1810)
{{
struct tree* nctemp1812= p;
struct symbol* nctemp1814= tp;
int nctemp1816=CodeIdeclaration(nctemp1812,nctemp1814);
struct symbol* nctemp1820= tp;
struct symbol* nctemp1822=SymMvnext(nctemp1820);
int nctemp1817 = (nctemp1822 !=0);
if(nctemp1817)
{
struct tree* nctemp1825= p;
struct nctempchar1 *nctemp1829;
static struct nctempchar1 nctemp1830 = {{ 2}, (char*)",\0"};
nctemp1829=&nctemp1830;
nctempchar1* nctemp1827= nctemp1829;
int nctemp1831=CodeEs(nctemp1825,nctemp1827);
}
int nctemp1840 = noarg + 1;
noarg =nctemp1840;
}
struct symbol* nctemp1848= tp;
struct symbol* nctemp1850=SymMvnext(nctemp1848);
tp =nctemp1850;
int nctemp1841 = (tp !=0);
nctemp1810=nctemp1841;}}
struct tree* nctemp1853= p;
struct nctempchar1 *nctemp1857;
static struct nctempchar1 nctemp1858 = {{ 5}, (char*)");\n\0"};
nctemp1857=&nctemp1858;
nctempchar1* nctemp1855= nctemp1857;
int nctemp1859=CodeEs(nctemp1853,nctemp1855);
return 1;
}
int CodeFdefgpu (struct tree* p)
{
struct symbol* tp;
int noarg;
int forw;
noarg = 0;
forw = 0;
struct tree* nctemp1866= p;
nctempchar1* nctemp1868=PtreeGetarray(nctemp1866);
nctempchar1* nctemp1864= nctemp1868;
struct nctempchar1 *nctemp1871;
static struct nctempchar1 nctemp1872 = {{ 6}, (char*)"array\0"};
nctemp1871=&nctemp1872;
nctempchar1* nctemp1869= nctemp1871;
int nctemp1873=LibeStrcmp(nctemp1864,nctemp1869);
int nctemp1861 = (nctemp1873 ==1);
if(nctemp1861)
{
struct tree* nctemp1879= p;
struct tree* nctemp1881=PtreeMvchild(nctemp1879);
p =nctemp1881;
struct tree* nctemp1886= p;
struct tree* nctemp1888=PtreeMvsister(nctemp1886);
p =nctemp1888;
struct tree* nctemp1894= p;
nctempchar1* nctemp1896=PtreeGetforw(nctemp1894);
nctempchar1* nctemp1892= nctemp1896;
struct nctempchar1 *nctemp1899;
static struct nctempchar1 nctemp1900 = {{ 5}, (char*)"forw\0"};
nctemp1899=&nctemp1900;
nctempchar1* nctemp1897= nctemp1899;
int nctemp1901=LibeStrcmp(nctemp1892,nctemp1897);
int nctemp1889 = (nctemp1901 ==1);
if(nctemp1889)
{
forw =1;
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
forw =1;
}
}
struct tree* nctemp1938= p;
nctempchar1* nctemp1940=PtreeGetdef(nctemp1938);
nctempchar1* nctemp1936= nctemp1940;
struct symbol* nctemp1943=SymGetetp();
struct symbol* nctemp1941= nctemp1943;
struct symbol* nctemp1944=SymLookup(nctemp1936,nctemp1941);
tp =nctemp1944;
struct tree* nctemp1946= p;
struct nctempchar1 *nctemp1950;
static struct nctempchar1 nctemp1951 = {{ 11}, (char*)"__global__\0"};
nctemp1950=&nctemp1951;
nctempchar1* nctemp1948= nctemp1950;
int nctemp1952=CodeEs(nctemp1946,nctemp1948);
struct tree* nctemp1954= p;
struct nctempchar1 *nctemp1958;
static struct nctempchar1 nctemp1959 = {{ 6}, (char*)" void\0"};
nctemp1958=&nctemp1959;
nctempchar1* nctemp1956= nctemp1958;
int nctemp1960=CodeEs(nctemp1954,nctemp1956);
struct tree* nctemp1962= p;
struct nctempchar1 *nctemp1966;
static struct nctempchar1 nctemp1967 = {{ 2}, (char*)" \0"};
nctemp1966=&nctemp1967;
nctempchar1* nctemp1964= nctemp1966;
int nctemp1968=CodeEs(nctemp1962,nctemp1964);
struct tree* nctemp1970= p;
struct nctempchar1 *nctemp1974;
static struct nctempchar1 nctemp1975 = {{ 8}, (char*)"kernel_\0"};
nctemp1974=&nctemp1975;
nctempchar1* nctemp1972= nctemp1974;
int nctemp1976=CodeEs(nctemp1970,nctemp1972);
struct tree* nctemp1978= p;
struct symbol* nctemp1982= tp;
nctempchar1* nctemp1984=SymGetname(nctemp1982);
nctempchar1* nctemp1980= nctemp1984;
int nctemp1985=CodeEs(nctemp1978,nctemp1980);
struct tree* nctemp1987= p;
struct nctempchar1 *nctemp1991;
static struct nctempchar1 nctemp1992 = {{ 3}, (char*)" (\0"};
nctemp1991=&nctemp1992;
nctempchar1* nctemp1989= nctemp1991;
int nctemp1993=CodeEs(nctemp1987,nctemp1989);
struct tree* nctemp1997= p;
struct tree* nctemp1999=PtreeMvchild(nctemp1997);
int nctemp1994 = (nctemp1999 !=0);
if(nctemp1994)
{
struct tree* nctemp2005= p;
struct tree* nctemp2007=PtreeMvchild(nctemp2005);
p =nctemp2007;
}
struct tree* nctemp2013= p;
nctempchar1* nctemp2015=PtreeGetname(nctemp2013);
nctempchar1* nctemp2011= nctemp2015;
struct nctempchar1 *nctemp2018;
static struct nctempchar1 nctemp2019 = {{ 8}, (char*)"arglist\0"};
nctemp2018=&nctemp2019;
nctempchar1* nctemp2016= nctemp2018;
int nctemp2020=LibeStrcmp(nctemp2011,nctemp2016);
int nctemp2008 = (nctemp2020 ==1);
if(nctemp2008)
{
struct symbol* nctemp2026= tp;
struct symbol* nctemp2028=SymGetable(nctemp2026);
tp =nctemp2028;
struct nctempchar1 *nctemp2035;
static struct nctempchar1 nctemp2036 = {{ 9}, (char*)"#arglist\0"};
nctemp2035=&nctemp2036;
nctempchar1* nctemp2033= nctemp2035;
struct symbol* nctemp2037= tp;
struct symbol* nctemp2039=SymLookup(nctemp2033,nctemp2037);
tp =nctemp2039;
struct symbol* nctemp2044= tp;
struct symbol* nctemp2046=SymGetable(nctemp2044);
tp =nctemp2046;
struct symbol* nctemp2054= tp;
struct symbol* nctemp2056=SymMvnext(nctemp2054);
tp =nctemp2056;
int nctemp2047 = (tp !=0);
int nctemp2058=nctemp2047;
while(nctemp2058)
{{
struct tree* nctemp2060= p;
struct symbol* nctemp2062= tp;
int nctemp2064=CodeIdeclaration(nctemp2060,nctemp2062);
struct symbol* nctemp2068= tp;
struct symbol* nctemp2070=SymMvnext(nctemp2068);
int nctemp2065 = (nctemp2070 !=0);
if(nctemp2065)
{
struct tree* nctemp2073= p;
struct nctempchar1 *nctemp2077;
static struct nctempchar1 nctemp2078 = {{ 2}, (char*)",\0"};
nctemp2077=&nctemp2078;
nctempchar1* nctemp2075= nctemp2077;
int nctemp2079=CodeEs(nctemp2073,nctemp2075);
}
int nctemp2088 = noarg + 1;
noarg =nctemp2088;
}
struct symbol* nctemp2096= tp;
struct symbol* nctemp2098=SymMvnext(nctemp2096);
tp =nctemp2098;
int nctemp2089 = (tp !=0);
nctemp2058=nctemp2089;}}
struct tree* nctemp2101= p;
struct nctempchar1 *nctemp2105;
static struct nctempchar1 nctemp2106 = {{ 4}, (char*)")\n\0"};
nctemp2105=&nctemp2106;
nctempchar1* nctemp2103= nctemp2105;
int nctemp2107=CodeEs(nctemp2101,nctemp2103);
int nctemp2108 = (forw ==1);
if(nctemp2108)
{
struct tree* nctemp2113= p;
struct nctempchar1 *nctemp2117;
static struct nctempchar1 nctemp2118 = {{ 4}, (char*)";\n\0"};
nctemp2117=&nctemp2118;
nctempchar1* nctemp2115= nctemp2117;
int nctemp2119=CodeEs(nctemp2113,nctemp2115);
return 1;
}
struct tree* nctemp2124= p;
struct tree* nctemp2126=PtreeMvsister(nctemp2124);
int nctemp2121 = (nctemp2126 !=0);
if(nctemp2121)
{
struct tree* nctemp2131= p;
struct tree* nctemp2133=PtreeMvsister(nctemp2131);
struct tree* nctemp2129= nctemp2133;
int nctemp2134=CodeCompstmnt(nctemp2129);
}
else{
struct tree* nctemp2136= p;
int nctemp2138=CodeCompstmnt(nctemp2136);
}
return 1;
}
int CodeFdewrappergpu (struct tree* p)
{
struct tree* top;
struct symbol* tp;
struct symbol* toptp;
int noarg;
struct tree* nctemp2144= p;
struct tree* nctemp2146=PtreeMvchild(nctemp2144);
p =nctemp2146;
noarg = 0;
struct tree* nctemp2153= p;
nctempchar1* nctemp2155=PtreeGetdef(nctemp2153);
nctempchar1* nctemp2151= nctemp2155;
struct symbol* nctemp2158=SymGetetp();
struct symbol* nctemp2156= nctemp2158;
struct symbol* nctemp2159=SymLookup(nctemp2151,nctemp2156);
tp =nctemp2159;
struct symbol* nctemp2163= tp;
struct symbol* nctemp2165=SymGetable(nctemp2163);
struct symbol* nctemp2161= nctemp2165;
struct symbol* nctemp2166=SymSetltp(nctemp2161);
struct symbol* nctemp2172= tp;
nctempchar1* nctemp2174=SymGetstruct(nctemp2172);
nctempchar1* nctemp2170= nctemp2174;
struct nctempchar1 *nctemp2177;
static struct nctempchar1 nctemp2178 = {{ 7}, (char*)"struct\0"};
nctemp2177=&nctemp2178;
nctempchar1* nctemp2175= nctemp2177;
int nctemp2179=LibeStrcmp(nctemp2170,nctemp2175);
int nctemp2167 = (nctemp2179 ==1);
if(nctemp2167)
{
struct tree* nctemp2182= p;
struct nctempchar1 *nctemp2186;
static struct nctempchar1 nctemp2187 = {{ 8}, (char*)"struct \0"};
nctemp2186=&nctemp2187;
nctempchar1* nctemp2184= nctemp2186;
int nctemp2188=CodeEs(nctemp2182,nctemp2184);
}
struct symbol* nctemp2194= tp;
nctempchar1* nctemp2196=SymGetarray(nctemp2194);
nctempchar1* nctemp2192= nctemp2196;
struct nctempchar1 *nctemp2199;
static struct nctempchar1 nctemp2200 = {{ 6}, (char*)"array\0"};
nctemp2199=&nctemp2200;
nctempchar1* nctemp2197= nctemp2199;
int nctemp2201=LibeStrcmp(nctemp2192,nctemp2197);
int nctemp2189 = (nctemp2201 ==1);
if(nctemp2189)
{
struct tree* nctemp2204= p;
struct nctempchar1 *nctemp2208;
static struct nctempchar1 nctemp2209 = {{ 7}, (char*)"nctemp\0"};
nctemp2208=&nctemp2209;
nctempchar1* nctemp2206= nctemp2208;
int nctemp2210=CodeEs(nctemp2204,nctemp2206);
}
struct tree* nctemp2212= p;
struct symbol* nctemp2216= tp;
nctempchar1* nctemp2218=SymGetype(nctemp2216);
nctempchar1* nctemp2214= nctemp2218;
int nctemp2219=CodeEs(nctemp2212,nctemp2214);
struct symbol* nctemp2225= tp;
nctempchar1* nctemp2227=SymGetarray(nctemp2225);
nctempchar1* nctemp2223= nctemp2227;
struct nctempchar1 *nctemp2230;
static struct nctempchar1 nctemp2231 = {{ 6}, (char*)"array\0"};
nctemp2230=&nctemp2231;
nctempchar1* nctemp2228= nctemp2230;
int nctemp2232=LibeStrcmp(nctemp2223,nctemp2228);
int nctemp2220 = (nctemp2232 ==1);
if(nctemp2220)
{
struct symbol* nctemp2237= tp;
int nctemp2239=SymGetrank(nctemp2237);
int nctemp2235= nctemp2239;
int nctemp2240=CodeEd(nctemp2235);
}
struct symbol* nctemp2246= tp;
nctempchar1* nctemp2248=SymGetstruct(nctemp2246);
nctempchar1* nctemp2244= nctemp2248;
struct nctempchar1 *nctemp2251;
static struct nctempchar1 nctemp2252 = {{ 7}, (char*)"struct\0"};
nctemp2251=&nctemp2252;
nctempchar1* nctemp2249= nctemp2251;
int nctemp2253=LibeStrcmp(nctemp2244,nctemp2249);
int nctemp2241 = (nctemp2253 ==1);
if(nctemp2241)
{
struct tree* nctemp2256= p;
struct nctempchar1 *nctemp2260;
static struct nctempchar1 nctemp2261 = {{ 2}, (char*)"*\0"};
nctemp2260=&nctemp2261;
nctempchar1* nctemp2258= nctemp2260;
int nctemp2262=CodeEs(nctemp2256,nctemp2258);
}
top = p;
toptp = tp;
struct tree* nctemp2264= p;
struct nctempchar1 *nctemp2268;
static struct nctempchar1 nctemp2269 = {{ 2}, (char*)" \0"};
nctemp2268=&nctemp2269;
nctempchar1* nctemp2266= nctemp2268;
int nctemp2270=CodeEs(nctemp2264,nctemp2266);
struct tree* nctemp2272= p;
struct symbol* nctemp2276= tp;
nctempchar1* nctemp2278=SymGetname(nctemp2276);
nctempchar1* nctemp2274= nctemp2278;
int nctemp2279=CodeEs(nctemp2272,nctemp2274);
struct tree* nctemp2281= p;
struct nctempchar1 *nctemp2285;
static struct nctempchar1 nctemp2286 = {{ 3}, (char*)" (\0"};
nctemp2285=&nctemp2286;
nctempchar1* nctemp2283= nctemp2285;
int nctemp2287=CodeEs(nctemp2281,nctemp2283);
struct tree* nctemp2292= p;
struct tree* nctemp2294=PtreeMvchild(nctemp2292);
p =nctemp2294;
struct tree* nctemp2300= p;
nctempchar1* nctemp2302=PtreeGetname(nctemp2300);
nctempchar1* nctemp2298= nctemp2302;
struct nctempchar1 *nctemp2305;
static struct nctempchar1 nctemp2306 = {{ 8}, (char*)"arglist\0"};
nctemp2305=&nctemp2306;
nctempchar1* nctemp2303= nctemp2305;
int nctemp2307=LibeStrcmp(nctemp2298,nctemp2303);
int nctemp2295 = (nctemp2307 ==1);
if(nctemp2295)
{
struct symbol* nctemp2313= tp;
struct symbol* nctemp2315=SymGetable(nctemp2313);
tp =nctemp2315;
struct nctempchar1 *nctemp2322;
static struct nctempchar1 nctemp2323 = {{ 9}, (char*)"#arglist\0"};
nctemp2322=&nctemp2323;
nctempchar1* nctemp2320= nctemp2322;
struct symbol* nctemp2324= tp;
struct symbol* nctemp2326=SymLookup(nctemp2320,nctemp2324);
tp =nctemp2326;
struct symbol* nctemp2331= tp;
struct symbol* nctemp2333=SymGetable(nctemp2331);
tp =nctemp2333;
struct symbol* nctemp2341= tp;
struct symbol* nctemp2343=SymMvnext(nctemp2341);
tp =nctemp2343;
int nctemp2334 = (tp !=0);
int nctemp2345=nctemp2334;
while(nctemp2345)
{{
struct tree* nctemp2347= p;
struct symbol* nctemp2349= tp;
int nctemp2351=CodeIdeclaration(nctemp2347,nctemp2349);
struct symbol* nctemp2355= tp;
struct symbol* nctemp2357=SymMvnext(nctemp2355);
int nctemp2352 = (nctemp2357 !=0);
if(nctemp2352)
{
struct tree* nctemp2360= p;
struct nctempchar1 *nctemp2364;
static struct nctempchar1 nctemp2365 = {{ 2}, (char*)",\0"};
nctemp2364=&nctemp2365;
nctempchar1* nctemp2362= nctemp2364;
int nctemp2366=CodeEs(nctemp2360,nctemp2362);
}
int nctemp2375 = noarg + 1;
noarg =nctemp2375;
}
struct symbol* nctemp2383= tp;
struct symbol* nctemp2385=SymMvnext(nctemp2383);
tp =nctemp2385;
int nctemp2376 = (tp !=0);
nctemp2345=nctemp2376;}}
struct tree* nctemp2388= p;
struct nctempchar1 *nctemp2392;
static struct nctempchar1 nctemp2393 = {{ 4}, (char*)")\n\0"};
nctemp2392=&nctemp2393;
nctempchar1* nctemp2390= nctemp2392;
int nctemp2394=CodeEs(nctemp2388,nctemp2390);
struct tree* nctemp2396= p;
struct nctempchar1 *nctemp2400;
static struct nctempchar1 nctemp2401 = {{ 4}, (char*)"{\n\0"};
nctemp2400=&nctemp2401;
nctempchar1* nctemp2398= nctemp2400;
int nctemp2402=CodeEs(nctemp2396,nctemp2398);
p = top;
tp = toptp;
struct tree* nctemp2404= p;
struct nctempchar1 *nctemp2408;
static struct nctempchar1 nctemp2409 = {{ 10}, (char*)"  kernel_\0"};
nctemp2408=&nctemp2409;
nctempchar1* nctemp2406= nctemp2408;
int nctemp2410=CodeEs(nctemp2404,nctemp2406);
struct tree* nctemp2412= p;
struct symbol* nctemp2416= tp;
nctempchar1* nctemp2418=SymGetname(nctemp2416);
nctempchar1* nctemp2414= nctemp2418;
int nctemp2419=CodeEs(nctemp2412,nctemp2414);
struct tree* nctemp2421= p;
struct nctempchar1 *nctemp2425;
static struct nctempchar1 nctemp2426 = {{ 31}, (char*)"<<< RunGetnb(),RunGetnt() >>>(\0"};
nctemp2425=&nctemp2426;
nctempchar1* nctemp2423= nctemp2425;
int nctemp2427=CodeEs(nctemp2421,nctemp2423);
struct tree* nctemp2432= p;
struct tree* nctemp2434=PtreeMvchild(nctemp2432);
p =nctemp2434;
struct tree* nctemp2440= p;
nctempchar1* nctemp2442=PtreeGetname(nctemp2440);
nctempchar1* nctemp2438= nctemp2442;
struct nctempchar1 *nctemp2445;
static struct nctempchar1 nctemp2446 = {{ 8}, (char*)"arglist\0"};
nctemp2445=&nctemp2446;
nctempchar1* nctemp2443= nctemp2445;
int nctemp2447=LibeStrcmp(nctemp2438,nctemp2443);
int nctemp2435 = (nctemp2447 ==1);
if(nctemp2435)
{
struct symbol* nctemp2453= tp;
struct symbol* nctemp2455=SymGetable(nctemp2453);
tp =nctemp2455;
struct nctempchar1 *nctemp2462;
static struct nctempchar1 nctemp2463 = {{ 9}, (char*)"#arglist\0"};
nctemp2462=&nctemp2463;
nctempchar1* nctemp2460= nctemp2462;
struct symbol* nctemp2464= tp;
struct symbol* nctemp2466=SymLookup(nctemp2460,nctemp2464);
tp =nctemp2466;
struct symbol* nctemp2471= tp;
struct symbol* nctemp2473=SymGetable(nctemp2471);
tp =nctemp2473;
struct symbol* nctemp2481= tp;
struct symbol* nctemp2483=SymMvnext(nctemp2481);
tp =nctemp2483;
int nctemp2474 = (tp !=0);
int nctemp2485=nctemp2474;
while(nctemp2485)
{{
struct tree* nctemp2487= p;
struct symbol* nctemp2491= tp;
nctempchar1* nctemp2493=SymGetname(nctemp2491);
nctempchar1* nctemp2489= nctemp2493;
int nctemp2494=CodeEs(nctemp2487,nctemp2489);
struct symbol* nctemp2498= tp;
struct symbol* nctemp2500=SymMvnext(nctemp2498);
int nctemp2495 = (nctemp2500 !=0);
if(nctemp2495)
{
struct tree* nctemp2503= p;
struct nctempchar1 *nctemp2507;
static struct nctempchar1 nctemp2508 = {{ 2}, (char*)",\0"};
nctemp2507=&nctemp2508;
nctempchar1* nctemp2505= nctemp2507;
int nctemp2509=CodeEs(nctemp2503,nctemp2505);
}
int nctemp2518 = noarg + 1;
noarg =nctemp2518;
}
struct symbol* nctemp2526= tp;
struct symbol* nctemp2528=SymMvnext(nctemp2526);
tp =nctemp2528;
int nctemp2519 = (tp !=0);
nctemp2485=nctemp2519;}}
struct tree* nctemp2531= p;
struct nctempchar1 *nctemp2535;
static struct nctempchar1 nctemp2536 = {{ 5}, (char*)");\n\0"};
nctemp2535=&nctemp2536;
nctempchar1* nctemp2533= nctemp2535;
int nctemp2537=CodeEs(nctemp2531,nctemp2533);
struct tree* nctemp2539= p;
struct nctempchar1 *nctemp2543;
static struct nctempchar1 nctemp2544 = {{ 14}, (char*)"GpuError();\n\0"};
nctemp2543=&nctemp2544;
nctempchar1* nctemp2541= nctemp2543;
int nctemp2545=CodeEs(nctemp2539,nctemp2541);
struct tree* nctemp2547= p;
struct nctempchar1 *nctemp2551;
static struct nctempchar1 nctemp2552 = {{ 13}, (char*)"return(1);\n\0"};
nctemp2551=&nctemp2552;
nctempchar1* nctemp2549= nctemp2551;
int nctemp2553=CodeEs(nctemp2547,nctemp2549);
struct tree* nctemp2555= p;
struct nctempchar1 *nctemp2559;
static struct nctempchar1 nctemp2560 = {{ 4}, (char*)"}\n\0"};
nctemp2559=&nctemp2560;
nctempchar1* nctemp2557= nctemp2559;
int nctemp2561=CodeEs(nctemp2555,nctemp2557);
return 1;
}
int CodeGdeclarations (struct tree* p,struct symbol* tp)
{
struct symbol* nctemp2567= tp;
struct symbol* nctemp2569=SymMvnext(nctemp2567);
tp =nctemp2569;
int nctemp2570 = (tp !=0);
int nctemp2574=nctemp2570;
while(nctemp2574)
{{
struct nctempchar1 *nctemp2580;
static struct nctempchar1 nctemp2581 = {{ 9}, (char*)"#arglist\0"};
nctemp2580=&nctemp2581;
nctempchar1* nctemp2578= nctemp2580;
struct symbol* nctemp2584= tp;
nctempchar1* nctemp2586=SymGetname(nctemp2584);
nctempchar1* nctemp2582= nctemp2586;
int nctemp2587=LibeStrcmp(nctemp2578,nctemp2582);
int nctemp2575 = (nctemp2587 ==0);
if(nctemp2575)
{
struct symbol* nctemp2592= tp;
int nctemp2594=SymGetemit(nctemp2592);
int nctemp2589 = (nctemp2594 ==1);
if(nctemp2589)
{
struct symbol* nctemp2601= tp;
nctempchar1* nctemp2603=SymGetstruct(nctemp2601);
nctempchar1* nctemp2599= nctemp2603;
struct nctempchar1 *nctemp2606;
static struct nctempchar1 nctemp2607 = {{ 10}, (char*)"structdef\0"};
nctemp2606=&nctemp2607;
nctempchar1* nctemp2604= nctemp2606;
int nctemp2608=LibeStrcmp(nctemp2599,nctemp2604);
int nctemp2596 = (nctemp2608 ==1);
if(nctemp2596)
{
struct tree* nctemp2611= p;
struct symbol* nctemp2613= tp;
int nctemp2615=CodeStructdef(nctemp2611,nctemp2613);
}
else{
struct symbol* nctemp2621= tp;
nctempchar1* nctemp2623=SymGetfunc(nctemp2621);
nctempchar1* nctemp2619= nctemp2623;
struct nctempchar1 *nctemp2626;
static struct nctempchar1 nctemp2627 = {{ 5}, (char*)"fdef\0"};
nctemp2626=&nctemp2627;
nctempchar1* nctemp2624= nctemp2626;
int nctemp2628=LibeStrcmp(nctemp2619,nctemp2624);
int nctemp2616 = (nctemp2628 ==1);
if(nctemp2616)
{
struct tree* nctemp2631= p;
int nctemp2633=CodeFdef(nctemp2631);
}
else{
struct symbol* nctemp2639= tp;
nctempchar1* nctemp2641=SymGetname(nctemp2639);
nctempchar1* nctemp2637= nctemp2641;
struct nctempchar1 *nctemp2644;
static struct nctempchar1 nctemp2645 = {{ 6}, (char*)"#self\0"};
nctemp2644=&nctemp2645;
nctempchar1* nctemp2642= nctemp2644;
int nctemp2646=LibeStrcmp(nctemp2637,nctemp2642);
int nctemp2634 = (nctemp2646 ==0);
if(nctemp2634)
{
struct tree* nctemp2649= p;
struct symbol* nctemp2651= tp;
int nctemp2653=CodeIdeclaration(nctemp2649,nctemp2651);
struct tree* nctemp2655= p;
struct nctempchar1 *nctemp2659;
static struct nctempchar1 nctemp2660 = {{ 4}, (char*)";\n\0"};
nctemp2659=&nctemp2660;
nctempchar1* nctemp2657= nctemp2659;
int nctemp2661=CodeEs(nctemp2655,nctemp2657);
}
}
}
struct symbol* nctemp2663= tp;
int nctemp2665= 0;
int nctemp2667=SymSetemit(nctemp2663,nctemp2665);
}
}
struct symbol* nctemp2672= tp;
struct symbol* nctemp2674=SymMvnext(nctemp2672);
tp =nctemp2674;
}
int nctemp2675 = (tp !=0);
nctemp2574=nctemp2675;}return 1;
}
int CodeDeclarations (struct tree* p,struct symbol* tp)
{
struct tree* np;
int nctemp2680 = (p !=0);
if(nctemp2680)
{
struct tree* nctemp2688= p;
struct tree* nctemp2690=PtreeMvchild(nctemp2688);
np =nctemp2690;
}
else{
np =p;
}
struct tree* nctemp2696= np;
struct symbol* nctemp2698= tp;
int nctemp2700=CodeGdeclarations(nctemp2696,nctemp2698);
return 1;
}
int CodeCode (struct tree* p,struct symbol* tp)
{
struct tree* np;
struct tree* nctemp2706= p;
struct tree* nctemp2708=PtreeMvchild(nctemp2706);
np =nctemp2708;
struct tree* nctemp2712= np;
nctempchar1* nctemp2714=PtreeGetname(nctemp2712);
nctempchar1* nctemp2710= nctemp2714;
struct nctempchar1 *nctemp2717;
static struct nctempchar1 nctemp2718 = {{ 7}, (char*)"import\0"};
nctemp2717=&nctemp2718;
nctempchar1* nctemp2715= nctemp2717;
int nctemp2719=LibeStrcmp(nctemp2710,nctemp2715);
if(nctemp2719)
{
struct tree* nctemp2721= np;
struct symbol* nctemp2723= tp;
int nctemp2725=CodeImport(nctemp2721,nctemp2723);
}
struct tree* nctemp2727= p;
struct symbol* nctemp2729= tp;
int nctemp2731=CodeDeclarations(nctemp2727,nctemp2729);
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
int nctemp2738= 0;
nctempchar1* nctemp2740=CodeItemp(nctemp2738);
return nctemp2740;
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
nctempchar1* nctemp2747=CodeMktemp();
temp=nctemp2747;
nctempchar1* nctemp2752= temp;
struct symbol* nctemp2757=SymGetltp();
struct symbol* nctemp2755= nctemp2757;
struct symbol* nctemp2758=SymMkname(nctemp2752,nctemp2755);
tp =nctemp2758;
struct symbol* nctemp2760= tp;
nctempchar1* nctemp2762= type;
int nctemp2765=SymSetype(nctemp2760,nctemp2762);
struct symbol* nctemp2767= tp;
int nctemp2769= 0;
int nctemp2771=SymSetemit(nctemp2767,nctemp2769);
return temp;
}
struct symbol* CodeNewsymbol (nctempchar1 *type,nctempchar1 *name)
{
struct symbol* tp;
nctempchar1* nctemp2778= name;
struct symbol* nctemp2783=SymGetltp();
struct symbol* nctemp2781= nctemp2783;
struct symbol* nctemp2784=SymMkname(nctemp2778,nctemp2781);
tp =nctemp2784;
struct symbol* nctemp2786= tp;
nctempchar1* nctemp2788= type;
int nctemp2791=SymSetype(nctemp2786,nctemp2788);
struct symbol* nctemp2793= tp;
int nctemp2795= 0;
int nctemp2797=SymSetemit(nctemp2793,nctemp2795);
return tp;
}
nctempchar1 * CodeMkstring (struct tree* p)
{
struct symbol* sp;
nctempchar1 *tmp;
nctempchar1* nctemp2804=CodeMktemp();
tmp=nctemp2804;
nctempchar1* nctemp2809= tmp;
struct symbol* nctemp2814=SymGetltp();
struct symbol* nctemp2812= nctemp2814;
struct symbol* nctemp2815=SymMkname(nctemp2809,nctemp2812);
sp =nctemp2815;
struct symbol* nctemp2817= sp;
int nctemp2819= 1;
int nctemp2821=SymSetrank(nctemp2817,nctemp2819);
struct symbol* nctemp2823= sp;
struct nctempchar1 *nctemp2827;
static struct nctempchar1 nctemp2828 = {{ 5}, (char*)"char\0"};
nctemp2827=&nctemp2828;
nctempchar1* nctemp2825= nctemp2827;
int nctemp2829=SymSetype(nctemp2823,nctemp2825);
struct symbol* nctemp2831= sp;
struct nctempchar1 *nctemp2835;
static struct nctempchar1 nctemp2836 = {{ 6}, (char*)"array\0"};
nctemp2835=&nctemp2836;
nctempchar1* nctemp2833= nctemp2835;
int nctemp2837=SymSetarray(nctemp2831,nctemp2833);
return tmp;
}
nctempchar1 * CodeSconstant (struct tree* p)
{
nctempchar1 *tmp;
nctempchar1 *tmp2;
int l;
nctempchar1* nctemp2845=CodeMktemp();
tmp2=nctemp2845;
struct tree* nctemp2847= p;
struct nctempchar1 *nctemp2851;
static struct nctempchar1 nctemp2852 = {{ 21}, (char*)"struct nctempchar1 *\0"};
nctemp2851=&nctemp2852;
nctempchar1* nctemp2849= nctemp2851;
int nctemp2853=CodeEs(nctemp2847,nctemp2849);
struct tree* nctemp2855= p;
nctempchar1* nctemp2857= tmp2;
int nctemp2860=CodeEs(nctemp2855,nctemp2857);
struct tree* nctemp2862= p;
struct nctempchar1 *nctemp2866;
static struct nctempchar1 nctemp2867 = {{ 4}, (char*)";\n\0"};
nctemp2866=&nctemp2867;
nctempchar1* nctemp2864= nctemp2866;
int nctemp2868=CodeEs(nctemp2862,nctemp2864);
nctempchar1* nctemp2874=CodeMktemp();
tmp=nctemp2874;
struct tree* nctemp2876= p;
struct nctempchar1 *nctemp2880;
static struct nctempchar1 nctemp2881 = {{ 27}, (char*)"static struct nctempchar1 \0"};
nctemp2880=&nctemp2881;
nctempchar1* nctemp2878= nctemp2880;
int nctemp2882=CodeEs(nctemp2876,nctemp2878);
struct tree* nctemp2884= p;
nctempchar1* nctemp2886= tmp;
int nctemp2889=CodeEs(nctemp2884,nctemp2886);
struct tree* nctemp2891= p;
struct nctempchar1 *nctemp2895;
static struct nctempchar1 nctemp2896 = {{ 4}, (char*)" = \0"};
nctemp2895=&nctemp2896;
nctempchar1* nctemp2893= nctemp2895;
int nctemp2897=CodeEs(nctemp2891,nctemp2893);
struct tree* nctemp2899= p;
struct nctempchar1 *nctemp2903;
static struct nctempchar1 nctemp2904 = {{ 4}, (char*)"{{ \0"};
nctemp2903=&nctemp2904;
nctempchar1* nctemp2901= nctemp2903;
int nctemp2905=CodeEs(nctemp2899,nctemp2901);
struct tree* nctemp2915= p;
nctempchar1* nctemp2917=PtreeGetdef(nctemp2915);
nctempchar1* nctemp2913= nctemp2917;
int nctemp2918=LibeStrlen(nctemp2913);
int nctemp2920 = nctemp2918 - 1;
l =nctemp2920;
int nctemp2922= l;
int nctemp2924=CodeEd(nctemp2922);
struct tree* nctemp2926= p;
struct nctempchar1 *nctemp2930;
static struct nctempchar1 nctemp2931 = {{ 11}, (char*)"}, (char*)\0"};
nctemp2930=&nctemp2931;
nctempchar1* nctemp2928= nctemp2930;
int nctemp2932=CodeEs(nctemp2926,nctemp2928);
int nctemp2934= 34;
int nctemp2936=CodeEc(nctemp2934);
struct tree* nctemp2940= p;
nctempchar1* nctemp2942=PtreeGetdef(nctemp2940);
nctempchar1* nctemp2938= nctemp2942;
int nctemp2943=CodeEsr(nctemp2938);
int nctemp2945= 92;
int nctemp2947=CodeEc(nctemp2945);
int nctemp2949= 48;
int nctemp2951=CodeEc(nctemp2949);
int nctemp2953= 34;
int nctemp2955=CodeEc(nctemp2953);
struct tree* nctemp2957= p;
struct nctempchar1 *nctemp2961;
static struct nctempchar1 nctemp2962 = {{ 5}, (char*)"};\n\0"};
nctemp2961=&nctemp2962;
nctempchar1* nctemp2959= nctemp2961;
int nctemp2963=CodeEs(nctemp2957,nctemp2959);
struct tree* nctemp2965= p;
nctempchar1* nctemp2967= tmp2;
int nctemp2970=CodeEs(nctemp2965,nctemp2967);
struct tree* nctemp2972= p;
struct nctempchar1 *nctemp2976;
static struct nctempchar1 nctemp2977 = {{ 3}, (char*)"=&\0"};
nctemp2976=&nctemp2977;
nctempchar1* nctemp2974= nctemp2976;
int nctemp2978=CodeEs(nctemp2972,nctemp2974);
struct tree* nctemp2980= p;
nctempchar1* nctemp2982= tmp;
int nctemp2985=CodeEs(nctemp2980,nctemp2982);
struct tree* nctemp2987= p;
struct nctempchar1 *nctemp2991;
static struct nctempchar1 nctemp2992 = {{ 4}, (char*)";\n\0"};
nctemp2991=&nctemp2992;
nctempchar1* nctemp2989= nctemp2991;
int nctemp2993=CodeEs(nctemp2987,nctemp2989);
return tmp2;
}
int CodeStructdef (struct tree* p,struct symbol* tp)
{
struct symbol* up;
struct tree* nctemp2997= p;
struct nctempchar1 *nctemp3001;
static struct nctempchar1 nctemp3002 = {{ 8}, (char*)"struct \0"};
nctemp3001=&nctemp3002;
nctempchar1* nctemp2999= nctemp3001;
int nctemp3003=CodeEs(nctemp2997,nctemp2999);
struct tree* nctemp3005= p;
struct symbol* nctemp3009= tp;
nctempchar1* nctemp3011=SymGetype(nctemp3009);
nctempchar1* nctemp3007= nctemp3011;
int nctemp3012=CodeEs(nctemp3005,nctemp3007);
struct tree* nctemp3014= p;
struct nctempchar1 *nctemp3018;
static struct nctempchar1 nctemp3019 = {{ 3}, (char*)" {\0"};
nctemp3018=&nctemp3019;
nctempchar1* nctemp3016= nctemp3018;
int nctemp3020=CodeEs(nctemp3014,nctemp3016);
struct symbol* nctemp3025= tp;
struct symbol* nctemp3027=SymGetable(nctemp3025);
up =nctemp3027;
struct symbol* nctemp3032= up;
struct symbol* nctemp3034=SymMvnext(nctemp3032);
up =nctemp3034;
struct tree* nctemp3036= p;
struct symbol* nctemp3038= up;
int nctemp3040=CodeIdeclarations(nctemp3036,nctemp3038);
struct tree* nctemp3042= p;
struct nctempchar1 *nctemp3046;
static struct nctempchar1 nctemp3047 = {{ 5}, (char*)"};\n\0"};
nctemp3046=&nctemp3047;
nctempchar1* nctemp3044= nctemp3046;
int nctemp3048=CodeEs(nctemp3042,nctemp3044);
struct tree* nctemp3050= p;
struct nctempchar1 *nctemp3054;
static struct nctempchar1 nctemp3055 = {{ 16}, (char*)"typedef struct \0"};
nctemp3054=&nctemp3055;
nctempchar1* nctemp3052= nctemp3054;
int nctemp3056=CodeEs(nctemp3050,nctemp3052);
struct tree* nctemp3058= p;
struct nctempchar1 *nctemp3062;
static struct nctempchar1 nctemp3063 = {{ 7}, (char*)"nctemp\0"};
nctemp3062=&nctemp3063;
nctempchar1* nctemp3060= nctemp3062;
int nctemp3064=CodeEs(nctemp3058,nctemp3060);
struct tree* nctemp3066= p;
struct symbol* nctemp3070= tp;
nctempchar1* nctemp3072=SymGetype(nctemp3070);
nctempchar1* nctemp3068= nctemp3072;
int nctemp3073=CodeEs(nctemp3066,nctemp3068);
struct tree* nctemp3075= p;
struct nctempchar1 *nctemp3079;
static struct nctempchar1 nctemp3080 = {{ 2}, (char*)"1\0"};
nctemp3079=&nctemp3080;
nctempchar1* nctemp3077= nctemp3079;
int nctemp3081=CodeEs(nctemp3075,nctemp3077);
struct tree* nctemp3083= p;
struct nctempchar1 *nctemp3087;
static struct nctempchar1 nctemp3088 = {{ 20}, (char*)" {int d[1]; struct \0"};
nctemp3087=&nctemp3088;
nctempchar1* nctemp3085= nctemp3087;
int nctemp3089=CodeEs(nctemp3083,nctemp3085);
struct tree* nctemp3091= p;
struct symbol* nctemp3095= tp;
nctempchar1* nctemp3097=SymGetype(nctemp3095);
nctempchar1* nctemp3093= nctemp3097;
int nctemp3098=CodeEs(nctemp3091,nctemp3093);
struct tree* nctemp3100= p;
struct nctempchar1 *nctemp3104;
static struct nctempchar1 nctemp3105 = {{ 6}, (char*)" *a; \0"};
nctemp3104=&nctemp3105;
nctempchar1* nctemp3102= nctemp3104;
int nctemp3106=CodeEs(nctemp3100,nctemp3102);
struct tree* nctemp3108= p;
struct nctempchar1 *nctemp3112;
static struct nctempchar1 nctemp3113 = {{ 3}, (char*)"} \0"};
nctemp3112=&nctemp3113;
nctempchar1* nctemp3110= nctemp3112;
int nctemp3114=CodeEs(nctemp3108,nctemp3110);
struct tree* nctemp3116= p;
struct nctempchar1 *nctemp3120;
static struct nctempchar1 nctemp3121 = {{ 7}, (char*)"nctemp\0"};
nctemp3120=&nctemp3121;
nctempchar1* nctemp3118= nctemp3120;
int nctemp3122=CodeEs(nctemp3116,nctemp3118);
struct tree* nctemp3124= p;
struct symbol* nctemp3128= tp;
nctempchar1* nctemp3130=SymGetype(nctemp3128);
nctempchar1* nctemp3126= nctemp3130;
int nctemp3131=CodeEs(nctemp3124,nctemp3126);
struct tree* nctemp3133= p;
struct nctempchar1 *nctemp3137;
static struct nctempchar1 nctemp3138 = {{ 2}, (char*)"1\0"};
nctemp3137=&nctemp3138;
nctempchar1* nctemp3135= nctemp3137;
int nctemp3139=CodeEs(nctemp3133,nctemp3135);
struct tree* nctemp3141= p;
struct nctempchar1 *nctemp3145;
static struct nctempchar1 nctemp3146 = {{ 4}, (char*)";\n\0"};
nctemp3145=&nctemp3146;
nctempchar1* nctemp3143= nctemp3145;
int nctemp3147=CodeEs(nctemp3141,nctemp3143);
struct tree* nctemp3149= p;
struct nctempchar1 *nctemp3153;
static struct nctempchar1 nctemp3154 = {{ 8}, (char*)"struct \0"};
nctemp3153=&nctemp3154;
nctempchar1* nctemp3151= nctemp3153;
int nctemp3155=CodeEs(nctemp3149,nctemp3151);
struct tree* nctemp3157= p;
struct nctempchar1 *nctemp3161;
static struct nctempchar1 nctemp3162 = {{ 7}, (char*)"nctemp\0"};
nctemp3161=&nctemp3162;
nctempchar1* nctemp3159= nctemp3161;
int nctemp3163=CodeEs(nctemp3157,nctemp3159);
struct tree* nctemp3165= p;
struct symbol* nctemp3169= tp;
nctempchar1* nctemp3171=SymGetype(nctemp3169);
nctempchar1* nctemp3167= nctemp3171;
int nctemp3172=CodeEs(nctemp3165,nctemp3167);
struct tree* nctemp3174= p;
struct nctempchar1 *nctemp3178;
static struct nctempchar1 nctemp3179 = {{ 2}, (char*)"2\0"};
nctemp3178=&nctemp3179;
nctempchar1* nctemp3176= nctemp3178;
int nctemp3180=CodeEs(nctemp3174,nctemp3176);
struct tree* nctemp3182= p;
struct nctempchar1 *nctemp3186;
static struct nctempchar1 nctemp3187 = {{ 20}, (char*)" {int d[2]; struct \0"};
nctemp3186=&nctemp3187;
nctempchar1* nctemp3184= nctemp3186;
int nctemp3188=CodeEs(nctemp3182,nctemp3184);
struct tree* nctemp3190= p;
struct symbol* nctemp3194= tp;
nctempchar1* nctemp3196=SymGetype(nctemp3194);
nctempchar1* nctemp3192= nctemp3196;
int nctemp3197=CodeEs(nctemp3190,nctemp3192);
struct tree* nctemp3199= p;
struct nctempchar1 *nctemp3203;
static struct nctempchar1 nctemp3204 = {{ 6}, (char*)" *a; \0"};
nctemp3203=&nctemp3204;
nctempchar1* nctemp3201= nctemp3203;
int nctemp3205=CodeEs(nctemp3199,nctemp3201);
struct tree* nctemp3207= p;
struct nctempchar1 *nctemp3211;
static struct nctempchar1 nctemp3212 = {{ 3}, (char*)"} \0"};
nctemp3211=&nctemp3212;
nctempchar1* nctemp3209= nctemp3211;
int nctemp3213=CodeEs(nctemp3207,nctemp3209);
struct tree* nctemp3215= p;
struct nctempchar1 *nctemp3219;
static struct nctempchar1 nctemp3220 = {{ 4}, (char*)";\n\0"};
nctemp3219=&nctemp3220;
nctempchar1* nctemp3217= nctemp3219;
int nctemp3221=CodeEs(nctemp3215,nctemp3217);
struct tree* nctemp3223= p;
struct nctempchar1 *nctemp3227;
static struct nctempchar1 nctemp3228 = {{ 8}, (char*)"struct \0"};
nctemp3227=&nctemp3228;
nctempchar1* nctemp3225= nctemp3227;
int nctemp3229=CodeEs(nctemp3223,nctemp3225);
struct tree* nctemp3231= p;
struct nctempchar1 *nctemp3235;
static struct nctempchar1 nctemp3236 = {{ 7}, (char*)"nctemp\0"};
nctemp3235=&nctemp3236;
nctempchar1* nctemp3233= nctemp3235;
int nctemp3237=CodeEs(nctemp3231,nctemp3233);
struct tree* nctemp3239= p;
struct symbol* nctemp3243= tp;
nctempchar1* nctemp3245=SymGetype(nctemp3243);
nctempchar1* nctemp3241= nctemp3245;
int nctemp3246=CodeEs(nctemp3239,nctemp3241);
struct tree* nctemp3248= p;
struct nctempchar1 *nctemp3252;
static struct nctempchar1 nctemp3253 = {{ 2}, (char*)"3\0"};
nctemp3252=&nctemp3253;
nctempchar1* nctemp3250= nctemp3252;
int nctemp3254=CodeEs(nctemp3248,nctemp3250);
struct tree* nctemp3256= p;
struct nctempchar1 *nctemp3260;
static struct nctempchar1 nctemp3261 = {{ 20}, (char*)" {int d[3]; struct \0"};
nctemp3260=&nctemp3261;
nctempchar1* nctemp3258= nctemp3260;
int nctemp3262=CodeEs(nctemp3256,nctemp3258);
struct tree* nctemp3264= p;
struct symbol* nctemp3268= tp;
nctempchar1* nctemp3270=SymGetype(nctemp3268);
nctempchar1* nctemp3266= nctemp3270;
int nctemp3271=CodeEs(nctemp3264,nctemp3266);
struct tree* nctemp3273= p;
struct nctempchar1 *nctemp3277;
static struct nctempchar1 nctemp3278 = {{ 6}, (char*)" *a; \0"};
nctemp3277=&nctemp3278;
nctempchar1* nctemp3275= nctemp3277;
int nctemp3279=CodeEs(nctemp3273,nctemp3275);
struct tree* nctemp3281= p;
struct nctempchar1 *nctemp3285;
static struct nctempchar1 nctemp3286 = {{ 3}, (char*)"} \0"};
nctemp3285=&nctemp3286;
nctempchar1* nctemp3283= nctemp3285;
int nctemp3287=CodeEs(nctemp3281,nctemp3283);
struct tree* nctemp3289= p;
struct nctempchar1 *nctemp3293;
static struct nctempchar1 nctemp3294 = {{ 4}, (char*)";\n\0"};
nctemp3293=&nctemp3294;
nctempchar1* nctemp3291= nctemp3293;
int nctemp3295=CodeEs(nctemp3289,nctemp3291);
struct tree* nctemp3297= p;
struct nctempchar1 *nctemp3301;
static struct nctempchar1 nctemp3302 = {{ 8}, (char*)"struct \0"};
nctemp3301=&nctemp3302;
nctempchar1* nctemp3299= nctemp3301;
int nctemp3303=CodeEs(nctemp3297,nctemp3299);
struct tree* nctemp3305= p;
struct nctempchar1 *nctemp3309;
static struct nctempchar1 nctemp3310 = {{ 7}, (char*)"nctemp\0"};
nctemp3309=&nctemp3310;
nctempchar1* nctemp3307= nctemp3309;
int nctemp3311=CodeEs(nctemp3305,nctemp3307);
struct tree* nctemp3313= p;
struct symbol* nctemp3317= tp;
nctempchar1* nctemp3319=SymGetype(nctemp3317);
nctempchar1* nctemp3315= nctemp3319;
int nctemp3320=CodeEs(nctemp3313,nctemp3315);
struct tree* nctemp3322= p;
struct nctempchar1 *nctemp3326;
static struct nctempchar1 nctemp3327 = {{ 2}, (char*)"4\0"};
nctemp3326=&nctemp3327;
nctempchar1* nctemp3324= nctemp3326;
int nctemp3328=CodeEs(nctemp3322,nctemp3324);
struct tree* nctemp3330= p;
struct nctempchar1 *nctemp3334;
static struct nctempchar1 nctemp3335 = {{ 20}, (char*)" {int d[4]; struct \0"};
nctemp3334=&nctemp3335;
nctempchar1* nctemp3332= nctemp3334;
int nctemp3336=CodeEs(nctemp3330,nctemp3332);
struct tree* nctemp3338= p;
struct symbol* nctemp3342= tp;
nctempchar1* nctemp3344=SymGetype(nctemp3342);
nctempchar1* nctemp3340= nctemp3344;
int nctemp3345=CodeEs(nctemp3338,nctemp3340);
struct tree* nctemp3347= p;
struct nctempchar1 *nctemp3351;
static struct nctempchar1 nctemp3352 = {{ 6}, (char*)" *a; \0"};
nctemp3351=&nctemp3352;
nctempchar1* nctemp3349= nctemp3351;
int nctemp3353=CodeEs(nctemp3347,nctemp3349);
struct tree* nctemp3355= p;
struct nctempchar1 *nctemp3359;
static struct nctempchar1 nctemp3360 = {{ 3}, (char*)"} \0"};
nctemp3359=&nctemp3360;
nctempchar1* nctemp3357= nctemp3359;
int nctemp3361=CodeEs(nctemp3355,nctemp3357);
struct tree* nctemp3363= p;
struct nctempchar1 *nctemp3367;
static struct nctempchar1 nctemp3368 = {{ 4}, (char*)";\n\0"};
nctemp3367=&nctemp3368;
nctempchar1* nctemp3365= nctemp3367;
int nctemp3369=CodeEs(nctemp3363,nctemp3365);
return 1;
}
int CodeFdeclaration (struct tree* p,struct symbol* tp)
{
int noargs;
struct symbol* nctemp3376= tp;
nctempchar1* nctemp3378=SymGetstruct(nctemp3376);
nctempchar1* nctemp3374= nctemp3378;
struct nctempchar1 *nctemp3381;
static struct nctempchar1 nctemp3382 = {{ 7}, (char*)"struct\0"};
nctemp3381=&nctemp3382;
nctempchar1* nctemp3379= nctemp3381;
int nctemp3383=LibeStrcmp(nctemp3374,nctemp3379);
int nctemp3371 = (nctemp3383 ==1);
if(nctemp3371)
{
struct tree* nctemp3386= p;
struct nctempchar1 *nctemp3390;
static struct nctempchar1 nctemp3391 = {{ 8}, (char*)"struct \0"};
nctemp3390=&nctemp3391;
nctempchar1* nctemp3388= nctemp3390;
int nctemp3392=CodeEs(nctemp3386,nctemp3388);
}
struct symbol* nctemp3398= tp;
nctempchar1* nctemp3400=SymGetarray(nctemp3398);
nctempchar1* nctemp3396= nctemp3400;
struct nctempchar1 *nctemp3403;
static struct nctempchar1 nctemp3404 = {{ 6}, (char*)"array\0"};
nctemp3403=&nctemp3404;
nctempchar1* nctemp3401= nctemp3403;
int nctemp3405=LibeStrcmp(nctemp3396,nctemp3401);
int nctemp3393 = (nctemp3405 ==1);
if(nctemp3393)
{
struct tree* nctemp3408= p;
struct nctempchar1 *nctemp3412;
static struct nctempchar1 nctemp3413 = {{ 7}, (char*)"nctemp\0"};
nctemp3412=&nctemp3413;
nctempchar1* nctemp3410= nctemp3412;
int nctemp3414=CodeEs(nctemp3408,nctemp3410);
}
struct tree* nctemp3416= p;
struct symbol* nctemp3420= tp;
nctempchar1* nctemp3422=SymGetype(nctemp3420);
nctempchar1* nctemp3418= nctemp3422;
int nctemp3423=CodeEs(nctemp3416,nctemp3418);
struct symbol* nctemp3429= tp;
nctempchar1* nctemp3431=SymGetarray(nctemp3429);
nctempchar1* nctemp3427= nctemp3431;
struct nctempchar1 *nctemp3434;
static struct nctempchar1 nctemp3435 = {{ 6}, (char*)"array\0"};
nctemp3434=&nctemp3435;
nctempchar1* nctemp3432= nctemp3434;
int nctemp3436=LibeStrcmp(nctemp3427,nctemp3432);
int nctemp3424 = (nctemp3436 ==1);
if(nctemp3424)
{
struct symbol* nctemp3441= tp;
int nctemp3443=SymGetrank(nctemp3441);
int nctemp3439= nctemp3443;
int nctemp3444=CodeEd(nctemp3439);
struct tree* nctemp3446= p;
struct nctempchar1 *nctemp3450;
static struct nctempchar1 nctemp3451 = {{ 2}, (char*)"*\0"};
nctemp3450=&nctemp3451;
nctempchar1* nctemp3448= nctemp3450;
int nctemp3452=CodeEs(nctemp3446,nctemp3448);
}
struct symbol* nctemp3458= tp;
nctempchar1* nctemp3460=SymGetstruct(nctemp3458);
nctempchar1* nctemp3456= nctemp3460;
struct nctempchar1 *nctemp3463;
static struct nctempchar1 nctemp3464 = {{ 7}, (char*)"struct\0"};
nctemp3463=&nctemp3464;
nctempchar1* nctemp3461= nctemp3463;
int nctemp3465=LibeStrcmp(nctemp3456,nctemp3461);
int nctemp3453 = (nctemp3465 ==1);
if(nctemp3453)
{
struct tree* nctemp3468= p;
struct nctempchar1 *nctemp3472;
static struct nctempchar1 nctemp3473 = {{ 2}, (char*)"*\0"};
nctemp3472=&nctemp3473;
nctempchar1* nctemp3470= nctemp3472;
int nctemp3474=CodeEs(nctemp3468,nctemp3470);
}
struct tree* nctemp3476= p;
struct nctempchar1 *nctemp3480;
static struct nctempchar1 nctemp3481 = {{ 2}, (char*)" \0"};
nctemp3480=&nctemp3481;
nctempchar1* nctemp3478= nctemp3480;
int nctemp3482=CodeEs(nctemp3476,nctemp3478);
struct tree* nctemp3484= p;
struct symbol* nctemp3488= tp;
nctempchar1* nctemp3490=SymGetname(nctemp3488);
nctempchar1* nctemp3486= nctemp3490;
int nctemp3491=CodeEs(nctemp3484,nctemp3486);
struct tree* nctemp3493= p;
struct nctempchar1 *nctemp3497;
static struct nctempchar1 nctemp3498 = {{ 3}, (char*)" (\0"};
nctemp3497=&nctemp3498;
nctempchar1* nctemp3495= nctemp3497;
int nctemp3499=CodeEs(nctemp3493,nctemp3495);
struct symbol* nctemp3504= tp;
struct symbol* nctemp3506=SymGetable(nctemp3504);
tp =nctemp3506;
struct nctempchar1 *nctemp3513;
static struct nctempchar1 nctemp3514 = {{ 9}, (char*)"#arglist\0"};
nctemp3513=&nctemp3514;
nctempchar1* nctemp3511= nctemp3513;
struct symbol* nctemp3515= tp;
struct symbol* nctemp3517=SymLookup(nctemp3511,nctemp3515);
tp =nctemp3517;
struct symbol* nctemp3522= tp;
struct symbol* nctemp3524=SymGetable(nctemp3522);
tp =nctemp3524;
noargs = 0;
struct symbol* nctemp3532= tp;
struct symbol* nctemp3534=SymMvnext(nctemp3532);
tp =nctemp3534;
int nctemp3525 = (tp !=0);
int nctemp3536=nctemp3525;
while(nctemp3536)
{{
struct tree* nctemp3538= p;
struct symbol* nctemp3540= tp;
int nctemp3542=CodeIdeclaration(nctemp3538,nctemp3540);
struct symbol* nctemp3546= tp;
struct symbol* nctemp3548=SymMvnext(nctemp3546);
int nctemp3543 = (nctemp3548 !=0);
if(nctemp3543)
{
struct tree* nctemp3551= p;
struct nctempchar1 *nctemp3555;
static struct nctempchar1 nctemp3556 = {{ 2}, (char*)",\0"};
nctemp3555=&nctemp3556;
nctempchar1* nctemp3553= nctemp3555;
int nctemp3557=CodeEs(nctemp3551,nctemp3553);
}
int nctemp3566 = noargs + 1;
noargs =nctemp3566;
}
struct symbol* nctemp3574= tp;
struct symbol* nctemp3576=SymMvnext(nctemp3574);
tp =nctemp3576;
int nctemp3567 = (tp !=0);
nctemp3536=nctemp3567;}struct tree* nctemp3579= p;
struct nctempchar1 *nctemp3583;
static struct nctempchar1 nctemp3584 = {{ 5}, (char*)");\n\0"};
nctemp3583=&nctemp3584;
nctempchar1* nctemp3581= nctemp3583;
int nctemp3585=CodeEs(nctemp3579,nctemp3581);
return 1;
}
int CodeWdeclaration (struct tree* p)
{
struct tree* np;
struct tree* nctemp3591= p;
struct tree* nctemp3593=PtreeMvchild(nctemp3591);
np =nctemp3593;
int nctemp3594 = (np !=0);
int nctemp3598=nctemp3594;
while(nctemp3598)
{{
struct tree* nctemp3604= np;
nctempchar1* nctemp3606=PtreeGetname(nctemp3604);
nctempchar1* nctemp3602= nctemp3606;
struct nctempchar1 *nctemp3609;
static struct nctempchar1 nctemp3610 = {{ 5}, (char*)"fdef\0"};
nctemp3609=&nctemp3610;
nctempchar1* nctemp3607= nctemp3609;
int nctemp3611=LibeStrcmp(nctemp3602,nctemp3607);
int nctemp3599 = (nctemp3611 ==1);
if(nctemp3599)
{
struct tree* nctemp3614= np;
int nctemp3616=CodeFdef(nctemp3614);
}
struct tree* nctemp3621= np;
struct tree* nctemp3623=PtreeMvsister(nctemp3621);
np =nctemp3623;
}
int nctemp3624 = (np !=0);
nctemp3598=nctemp3624;}return 1;
}
int CodeWdeclarations (struct tree* p)
{
int nctemp3629 = (p !=0);
int nctemp3633=nctemp3629;
while(nctemp3633)
{{
struct tree* nctemp3642= p;
nctempchar1* nctemp3644=PtreeGetname(nctemp3642);
nctempchar1* nctemp3640= nctemp3644;
struct nctempchar1 *nctemp3647;
static struct nctempchar1 nctemp3648 = {{ 5}, (char*)"type\0"};
nctemp3647=&nctemp3648;
nctempchar1* nctemp3645= nctemp3647;
int nctemp3649=LibeStrcmp(nctemp3640,nctemp3645);
int nctemp3637 = (nctemp3649 ==1);
struct tree* nctemp3657= p;
nctempchar1* nctemp3659=PtreeGetname(nctemp3657);
nctempchar1* nctemp3655= nctemp3659;
struct nctempchar1 *nctemp3662;
static struct nctempchar1 nctemp3663 = {{ 7}, (char*)"struct\0"};
nctemp3662=&nctemp3663;
nctempchar1* nctemp3660= nctemp3662;
int nctemp3664=LibeStrcmp(nctemp3655,nctemp3660);
int nctemp3652 = (nctemp3664 ==1);
int nctemp3634 = (nctemp3637 || nctemp3652);
if(nctemp3634)
{
struct tree* nctemp3667= p;
int nctemp3669=CodeWdeclaration(nctemp3667);
}
struct tree* nctemp3674= p;
struct tree* nctemp3676=PtreeMvsister(nctemp3674);
p =nctemp3676;
}
int nctemp3677 = (p !=0);
nctemp3633=nctemp3677;}return 1;
}
int CodeArrayex (int line,nctempchar1 *qual,nctempchar1 *sel,nctempchar1 *name,nctempchar1 *ival,int index)
{
struct tree* p;
nctempchar1 *tmp;
nctempchar1 *qname;
struct nctempchar1 *nctemp3688;
static struct nctempchar1 nctemp3689 = {{ 6}, (char*)"dummy\0"};
nctemp3688=&nctemp3689;
nctempchar1* nctemp3686= nctemp3688;
struct nctempchar1 *nctemp3692;
static struct nctempchar1 nctemp3693 = {{ 6}, (char*)"dummy\0"};
nctemp3692=&nctemp3693;
nctempchar1* nctemp3690= nctemp3692;
struct tree* nctemp3694=PtreeMknode(nctemp3686,nctemp3690);
p =nctemp3694;
struct tree* nctemp3696= p;
int nctemp3698= line;
int nctemp3700=PtreeSetline(nctemp3696,nctemp3698);
qname = name;
nctempchar1 *nctemp3702 =qual;
int nctemp3701 =(nctemp3702!=0);
if(nctemp3701)
{
nctempchar1* nctemp3711= qual;
struct nctempchar1 *nctemp3716;
static struct nctempchar1 nctemp3717 = {{ 3}, (char*)"->\0"};
nctemp3716=&nctemp3717;
nctempchar1* nctemp3714= nctemp3716;
nctempchar1* nctemp3718=LibeStradd(nctemp3711,nctemp3714);
tmp=nctemp3718;
nctempchar1* nctemp3724= tmp;
nctempchar1* nctemp3727= name;
nctempchar1* nctemp3730=LibeStradd(nctemp3724,nctemp3727);
qname=nctemp3730;
RunFree(tmp->a);
RunFree(tmp);
}
struct tree* nctemp3735= p;
struct nctempchar1 *nctemp3739;
static struct nctempchar1 nctemp3740 = {{ 7}, (char*)"if((0>\0"};
nctemp3739=&nctemp3740;
nctempchar1* nctemp3737= nctemp3739;
int nctemp3741=CodeEs(nctemp3735,nctemp3737);
struct tree* nctemp3743= p;
nctempchar1* nctemp3745= ival;
int nctemp3748=CodeEs(nctemp3743,nctemp3745);
struct tree* nctemp3750= p;
struct nctempchar1 *nctemp3754;
static struct nctempchar1 nctemp3755 = {{ 5}, (char*)")||(\0"};
nctemp3754=&nctemp3755;
nctempchar1* nctemp3752= nctemp3754;
int nctemp3756=CodeEs(nctemp3750,nctemp3752);
struct tree* nctemp3758= p;
nctempchar1* nctemp3760= ival;
int nctemp3763=CodeEs(nctemp3758,nctemp3760);
struct tree* nctemp3765= p;
struct nctempchar1 *nctemp3769;
static struct nctempchar1 nctemp3770 = {{ 3}, (char*)">=\0"};
nctemp3769=&nctemp3770;
nctempchar1* nctemp3767= nctemp3769;
int nctemp3771=CodeEs(nctemp3765,nctemp3767);
nctempchar1 *nctemp3773 =qual;
int nctemp3772 =(nctemp3773!=0);
if(nctemp3772)
{
struct tree* nctemp3778= p;
nctempchar1* nctemp3780= qual;
int nctemp3783=CodeEs(nctemp3778,nctemp3780);
struct tree* nctemp3785= p;
nctempchar1* nctemp3787= sel;
int nctemp3790=CodeEs(nctemp3785,nctemp3787);
}
struct tree* nctemp3792= p;
nctempchar1* nctemp3794= name;
int nctemp3797=CodeEs(nctemp3792,nctemp3794);
struct tree* nctemp3799= p;
struct nctempchar1 *nctemp3803;
static struct nctempchar1 nctemp3804 = {{ 5}, (char*)"->d[\0"};
nctemp3803=&nctemp3804;
nctempchar1* nctemp3801= nctemp3803;
int nctemp3805=CodeEs(nctemp3799,nctemp3801);
int nctemp3807= index;
int nctemp3809=CodeEd(nctemp3807);
struct tree* nctemp3811= p;
struct nctempchar1 *nctemp3815;
static struct nctempchar1 nctemp3816 = {{ 7}, (char*)"])){\n\0"};
nctemp3815=&nctemp3816;
nctempchar1* nctemp3813= nctemp3815;
int nctemp3817=CodeEs(nctemp3811,nctemp3813);
struct tree* nctemp3819= p;
struct nctempchar1 *nctemp3823;
static struct nctempchar1 nctemp3824 = {{ 67}, (char*)"printf(\"***Out of bounds error (file,array,line,index,rank,bound:\0"};
nctemp3823=&nctemp3824;
nctempchar1* nctemp3821= nctemp3823;
int nctemp3825=CodeEs(nctemp3819,nctemp3821);
struct tree* nctemp3827= p;
nctempchar1* nctemp3831=ScanGetfile();
nctempchar1* nctemp3829= nctemp3831;
int nctemp3832=CodeEs(nctemp3827,nctemp3829);
struct tree* nctemp3834= p;
struct nctempchar1 *nctemp3838;
static struct nctempchar1 nctemp3839 = {{ 2}, (char*)" \0"};
nctemp3838=&nctemp3839;
nctempchar1* nctemp3836= nctemp3838;
int nctemp3840=CodeEs(nctemp3834,nctemp3836);
struct tree* nctemp3842= p;
nctempchar1* nctemp3844= qname;
int nctemp3847=CodeEs(nctemp3842,nctemp3844);
struct tree* nctemp3849= p;
struct nctempchar1 *nctemp3853;
static struct nctempchar1 nctemp3854 = {{ 17}, (char*)" %d %d %d %d \\n\0"};
nctemp3853=&nctemp3854;
nctempchar1* nctemp3851= nctemp3853;
int nctemp3855=CodeEs(nctemp3849,nctemp3851);
struct tree* nctemp3857= p;
struct nctempchar1 *nctemp3861;
static struct nctempchar1 nctemp3862 = {{ 6}, (char*)" \" ,\0"};
nctemp3861=&nctemp3862;
nctempchar1* nctemp3859= nctemp3861;
int nctemp3863=CodeEs(nctemp3857,nctemp3859);
int nctemp3865= line;
int nctemp3867=CodeEd(nctemp3865);
struct tree* nctemp3869= p;
struct nctempchar1 *nctemp3873;
static struct nctempchar1 nctemp3874 = {{ 2}, (char*)",\0"};
nctemp3873=&nctemp3874;
nctempchar1* nctemp3871= nctemp3873;
int nctemp3875=CodeEs(nctemp3869,nctemp3871);
struct tree* nctemp3877= p;
nctempchar1* nctemp3879= ival;
int nctemp3882=CodeEs(nctemp3877,nctemp3879);
struct tree* nctemp3884= p;
struct nctempchar1 *nctemp3888;
static struct nctempchar1 nctemp3889 = {{ 2}, (char*)",\0"};
nctemp3888=&nctemp3889;
nctempchar1* nctemp3886= nctemp3888;
int nctemp3890=CodeEs(nctemp3884,nctemp3886);
int nctemp3892= index;
int nctemp3894=CodeEd(nctemp3892);
struct tree* nctemp3896= p;
struct nctempchar1 *nctemp3900;
static struct nctempchar1 nctemp3901 = {{ 2}, (char*)",\0"};
nctemp3900=&nctemp3901;
nctempchar1* nctemp3898= nctemp3900;
int nctemp3902=CodeEs(nctemp3896,nctemp3898);
struct tree* nctemp3904= p;
nctempchar1* nctemp3906= qname;
int nctemp3909=CodeEs(nctemp3904,nctemp3906);
struct tree* nctemp3911= p;
struct nctempchar1 *nctemp3915;
static struct nctempchar1 nctemp3916 = {{ 5}, (char*)"->d[\0"};
nctemp3915=&nctemp3916;
nctempchar1* nctemp3913= nctemp3915;
int nctemp3917=CodeEs(nctemp3911,nctemp3913);
int nctemp3919= index;
int nctemp3921=CodeEd(nctemp3919);
struct tree* nctemp3923= p;
struct nctempchar1 *nctemp3927;
static struct nctempchar1 nctemp3928 = {{ 4}, (char*)"]-1\0"};
nctemp3927=&nctemp3928;
nctempchar1* nctemp3925= nctemp3927;
int nctemp3929=CodeEs(nctemp3923,nctemp3925);
struct tree* nctemp3931= p;
struct nctempchar1 *nctemp3935;
static struct nctempchar1 nctemp3936 = {{ 3}, (char*)");\0"};
nctemp3935=&nctemp3936;
nctempchar1* nctemp3933= nctemp3935;
int nctemp3937=CodeEs(nctemp3931,nctemp3933);
struct tree* nctemp3939= p;
struct nctempchar1 *nctemp3943;
static struct nctempchar1 nctemp3944 = {{ 6}, (char*)"\n}\n\0"};
nctemp3943=&nctemp3944;
nctempchar1* nctemp3941= nctemp3943;
int nctemp3945=CodeEs(nctemp3939,nctemp3941);
nctempchar1 *nctemp3947 =qual;
int nctemp3946 =(nctemp3947!=0);
if(nctemp3946)
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
struct tree* nctemp3960= p;
nctempchar1* nctemp3962=PtreeGetdef(nctemp3960);
name=nctemp3962;
nctempchar1* nctemp3968=CodeMktemp();
temp=nctemp3968;
nctempchar1* nctemp3973= name;
struct symbol* nctemp3976=SymLook(nctemp3973);
tp =nctemp3976;
int nctemp3977 = (tp ==0);
if(nctemp3977)
{
nctempchar1* nctemp3982= name;
int nctemp3985=CodeError(nctemp3982);
}
struct tree* nctemp3990= p;
struct tree* nctemp3992=PtreeMvchild(nctemp3990);
sp =nctemp3992;
int nctemp3993 = (sp ==0);
if(nctemp3993)
{
struct tree* nctemp3998= p;
nctempchar1* nctemp4000=PtreeGetdef(nctemp3998);
return nctemp4000;
}
else{
struct tree* nctemp4006= sp;
nctempchar1* nctemp4008=PtreeGetname(nctemp4006);
nctempchar1* nctemp4004= nctemp4008;
struct nctempchar1 *nctemp4011;
static struct nctempchar1 nctemp4012 = {{ 9}, (char*)"exprlist\0"};
nctemp4011=&nctemp4012;
nctempchar1* nctemp4009= nctemp4011;
int nctemp4013=LibeStrcmp(nctemp4004,nctemp4009);
int nctemp4001 = (nctemp4013 ==0);
if(nctemp4001)
{
struct tree* nctemp4016= p;
nctempchar1* nctemp4018=PtreeGetdef(nctemp4016);
return nctemp4018;
}
}
struct symbol* nctemp4023= tp;
int nctemp4025=SymGetrank(nctemp4023);
rank =nctemp4025;
struct tree* nctemp4030= p;
struct tree* nctemp4032=PtreeMvchild(nctemp4030);
p =nctemp4032;
struct tree* nctemp4037= p;
struct tree* nctemp4039=PtreeMvchild(nctemp4037);
p =nctemp4039;
sp = p;
i =0;
int nctemp4044 = (i < rank);
while(nctemp4044){
{
int nctemp4048 = (i ==0);
if(nctemp4048)
{
struct tree* nctemp4057= p;
nctempchar1* nctemp4059=CodeExpr(nctemp4057);
temp2=nctemp4059;
struct tree* nctemp4061= p;
struct tree* nctemp4065= p;
nctempchar1* nctemp4067=PtreeGetype(nctemp4065);
nctempchar1* nctemp4063= nctemp4067;
int nctemp4068=CodeEs(nctemp4061,nctemp4063);
struct tree* nctemp4070= p;
struct nctempchar1 *nctemp4074;
static struct nctempchar1 nctemp4075 = {{ 2}, (char*)" \0"};
nctemp4074=&nctemp4075;
nctempchar1* nctemp4072= nctemp4074;
int nctemp4076=CodeEs(nctemp4070,nctemp4072);
struct tree* nctemp4078= p;
nctempchar1* nctemp4080= temp;
int nctemp4083=CodeEs(nctemp4078,nctemp4080);
struct tree* nctemp4085= p;
struct nctempchar1 *nctemp4089;
static struct nctempchar1 nctemp4090 = {{ 2}, (char*)"=\0"};
nctemp4089=&nctemp4090;
nctempchar1* nctemp4087= nctemp4089;
int nctemp4091=CodeEs(nctemp4085,nctemp4087);
struct tree* nctemp4093= p;
nctempchar1* nctemp4095= temp2;
int nctemp4098=CodeEs(nctemp4093,nctemp4095);
struct tree* nctemp4100= p;
struct nctempchar1 *nctemp4104;
static struct nctempchar1 nctemp4105 = {{ 4}, (char*)";\n\0"};
nctemp4104=&nctemp4105;
nctempchar1* nctemp4102= nctemp4104;
int nctemp4106=CodeEs(nctemp4100,nctemp4102);
int nctemp4108=CodeArraycheck();
if(nctemp4108)
{
struct tree* nctemp4112= p;
int nctemp4114=PtreeGetline(nctemp4112);
int nctemp4110= nctemp4114;
nctempchar1* nctemp4115= qual;
nctempchar1* nctemp4118= sel;
nctempchar1* nctemp4121= name;
nctempchar1* nctemp4124= temp2;
int nctemp4127= i;
int nctemp4129=CodeArrayex(nctemp4110,nctemp4115,nctemp4118,nctemp4121,nctemp4124,nctemp4127);
}
}
else{
struct tree* nctemp4135= sp;
nctempchar1* nctemp4137=CodeExpr(nctemp4135);
temp2=nctemp4137;
struct tree* nctemp4139= p;
nctempchar1* nctemp4141= temp;
int nctemp4144=CodeEs(nctemp4139,nctemp4141);
struct tree* nctemp4146= p;
struct nctempchar1 *nctemp4150;
static struct nctempchar1 nctemp4151 = {{ 2}, (char*)"=\0"};
nctemp4150=&nctemp4151;
nctempchar1* nctemp4148= nctemp4150;
int nctemp4152=CodeEs(nctemp4146,nctemp4148);
struct tree* nctemp4154= p;
nctempchar1* nctemp4156= temp2;
int nctemp4159=CodeEs(nctemp4154,nctemp4156);
struct tree* nctemp4161= p;
struct nctempchar1 *nctemp4165;
static struct nctempchar1 nctemp4166 = {{ 2}, (char*)"*\0"};
nctemp4165=&nctemp4166;
nctempchar1* nctemp4163= nctemp4165;
int nctemp4167=CodeEs(nctemp4161,nctemp4163);
nctempchar1 *nctemp4169 =qual;
int nctemp4168 =(nctemp4169!=0);
if(nctemp4168)
{
struct tree* nctemp4174= p;
nctempchar1* nctemp4176= qual;
int nctemp4179=CodeEs(nctemp4174,nctemp4176);
}
nctempchar1 *nctemp4181 =sel;
int nctemp4180 =(nctemp4181!=0);
if(nctemp4180)
{
struct tree* nctemp4186= p;
nctempchar1* nctemp4188= sel;
int nctemp4191=CodeEs(nctemp4186,nctemp4188);
}
struct tree* nctemp4193= p;
nctempchar1* nctemp4195= name;
int nctemp4198=CodeEs(nctemp4193,nctemp4195);
struct tree* nctemp4200= p;
struct nctempchar1 *nctemp4204;
static struct nctempchar1 nctemp4205 = {{ 4}, (char*)"->d\0"};
nctemp4204=&nctemp4205;
nctempchar1* nctemp4202= nctemp4204;
int nctemp4206=CodeEs(nctemp4200,nctemp4202);
struct tree* nctemp4208= p;
struct nctempchar1 *nctemp4212;
static struct nctempchar1 nctemp4213 = {{ 2}, (char*)"[\0"};
nctemp4212=&nctemp4213;
nctempchar1* nctemp4210= nctemp4212;
int nctemp4214=CodeEs(nctemp4208,nctemp4210);
int nctemp4221 = i - 1;
int nctemp4216= nctemp4221;
int nctemp4222=CodeEd(nctemp4216);
struct tree* nctemp4224= p;
struct nctempchar1 *nctemp4228;
static struct nctempchar1 nctemp4229 = {{ 2}, (char*)"]\0"};
nctemp4228=&nctemp4229;
nctempchar1* nctemp4226= nctemp4228;
int nctemp4230=CodeEs(nctemp4224,nctemp4226);
struct tree* nctemp4232= p;
struct nctempchar1 *nctemp4236;
static struct nctempchar1 nctemp4237 = {{ 2}, (char*)"+\0"};
nctemp4236=&nctemp4237;
nctempchar1* nctemp4234= nctemp4236;
int nctemp4238=CodeEs(nctemp4232,nctemp4234);
struct tree* nctemp4240= p;
nctempchar1* nctemp4242= temp;
int nctemp4245=CodeEs(nctemp4240,nctemp4242);
struct tree* nctemp4247= p;
struct nctempchar1 *nctemp4251;
static struct nctempchar1 nctemp4252 = {{ 4}, (char*)";\n\0"};
nctemp4251=&nctemp4252;
nctempchar1* nctemp4249= nctemp4251;
int nctemp4253=CodeEs(nctemp4247,nctemp4249);
int nctemp4255=CodeArraycheck();
if(nctemp4255)
{
struct tree* nctemp4259= p;
int nctemp4261=PtreeGetline(nctemp4259);
int nctemp4257= nctemp4261;
nctempchar1* nctemp4262= qual;
nctempchar1* nctemp4265= sel;
nctempchar1* nctemp4268= name;
nctempchar1* nctemp4271= temp2;
int nctemp4274= i;
int nctemp4276=CodeArrayex(nctemp4257,nctemp4262,nctemp4265,nctemp4268,nctemp4271,nctemp4274);
}
}
int nctemp4277 = (sp !=0);
if(nctemp4277)
{
struct tree* nctemp4285= sp;
struct tree* nctemp4287=PtreeMvsister(nctemp4285);
sp =nctemp4287;
}
}
int nctemp4296 = i + 1;
i =nctemp4296;
int nctemp4297 = (i < rank);
nctemp4044=nctemp4297;
}
nctempchar1* nctemp4311= name;
int nctemp4314=LibeStrlen(nctemp4311);
nctempchar1* nctemp4316= temp;
int nctemp4319=LibeStrlen(nctemp4316);
int nctemp4320 = nctemp4314 + nctemp4319;
int nctemp4322 = nctemp4320 + 6;
size =nctemp4322;
int nctemp4329=size;
nctempchar1 *nctemp4328;
nctemp4328=(nctempchar1*)RunMalloc(sizeof(nctempchar1));
nctemp4328->d[0]=size;
nctemp4328->a=(char *)RunMalloc(sizeof(char)*nctemp4329);
rval=nctemp4328;
nctempchar1* nctemp4333= name;
nctempchar1* nctemp4336= rval;
int nctemp4339=LibeStrcpy(nctemp4333,nctemp4336);
struct nctempchar1 *nctemp4343;
static struct nctempchar1 nctemp4344 = {{ 4}, (char*)"->a\0"};
nctemp4343=&nctemp4344;
nctempchar1* nctemp4341= nctemp4343;
nctempchar1* nctemp4345= rval;
int nctemp4348=LibeStrcat(nctemp4341,nctemp4345);
struct nctempchar1 *nctemp4352;
static struct nctempchar1 nctemp4353 = {{ 2}, (char*)"[\0"};
nctemp4352=&nctemp4353;
nctempchar1* nctemp4350= nctemp4352;
nctempchar1* nctemp4354= rval;
int nctemp4357=LibeStrcat(nctemp4350,nctemp4354);
nctempchar1* nctemp4359= temp;
nctempchar1* nctemp4362= rval;
int nctemp4365=LibeStrcat(nctemp4359,nctemp4362);
struct nctempchar1 *nctemp4369;
static struct nctempchar1 nctemp4370 = {{ 2}, (char*)"]\0"};
nctemp4369=&nctemp4370;
nctempchar1* nctemp4367= nctemp4369;
nctempchar1* nctemp4371= rval;
int nctemp4374=LibeStrcat(nctemp4367,nctemp4371);
return rval;
}
nctempchar1 * CodeQident (nctempchar1 *qual,nctempchar1 *ident)
{
int lq;
int li;
nctempchar1 *name;
nctempchar1* nctemp4381= qual;
int nctemp4384=LibeStrlen(nctemp4381);
lq =nctemp4384;
nctempchar1* nctemp4389= ident;
int nctemp4392=LibeStrlen(nctemp4389);
li =nctemp4392;
int nctemp4407 = lq + li;
int nctemp4409 = nctemp4407 + 2;
int nctemp4399=nctemp4409;
nctempchar1 *nctemp4398;
nctemp4398=(nctempchar1*)RunMalloc(sizeof(nctempchar1));
int nctemp4417 = lq + li;
int nctemp4419 = nctemp4417 + 2;
nctemp4398->d[0]=nctemp4419;
nctemp4398->a=(char *)RunMalloc(sizeof(char)*nctemp4399);
name=nctemp4398;
nctempchar1* nctemp4421= qual;
nctempchar1* nctemp4424= name;
int nctemp4427=LibeStrcpy(nctemp4421,nctemp4424);
struct nctempchar1 *nctemp4431;
static struct nctempchar1 nctemp4432 = {{ 2}, (char*)".\0"};
nctemp4431=&nctemp4432;
nctempchar1* nctemp4429= nctemp4431;
nctempchar1* nctemp4433= name;
int nctemp4436=LibeStrcat(nctemp4429,nctemp4433);
nctempchar1* nctemp4438= ident;
nctempchar1* nctemp4441= name;
int nctemp4444=LibeStrcat(nctemp4438,nctemp4441);
return name;
}
nctempchar1 * CodeQident2 (nctempchar1 *qual,nctempchar1 *ident)
{
int lq;
int li;
nctempchar1 *name;
nctempchar1* nctemp4451= qual;
int nctemp4454=LibeStrlen(nctemp4451);
lq =nctemp4454;
nctempchar1* nctemp4459= ident;
int nctemp4462=LibeStrlen(nctemp4459);
li =nctemp4462;
int nctemp4477 = lq + li;
int nctemp4479 = nctemp4477 + 3;
int nctemp4469=nctemp4479;
nctempchar1 *nctemp4468;
nctemp4468=(nctempchar1*)RunMalloc(sizeof(nctempchar1));
int nctemp4487 = lq + li;
int nctemp4489 = nctemp4487 + 3;
nctemp4468->d[0]=nctemp4489;
nctemp4468->a=(char *)RunMalloc(sizeof(char)*nctemp4469);
name=nctemp4468;
nctempchar1* nctemp4491= qual;
nctempchar1* nctemp4494= name;
int nctemp4497=LibeStrcpy(nctemp4491,nctemp4494);
struct nctempchar1 *nctemp4501;
static struct nctempchar1 nctemp4502 = {{ 3}, (char*)"->\0"};
nctemp4501=&nctemp4502;
nctempchar1* nctemp4499= nctemp4501;
nctempchar1* nctemp4503= name;
int nctemp4506=LibeStrcat(nctemp4499,nctemp4503);
nctempchar1* nctemp4508= ident;
nctempchar1* nctemp4511= name;
int nctemp4514=LibeStrcat(nctemp4508,nctemp4511);
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
struct tree* nctemp4522= p;
nctempchar1* nctemp4524=PtreeGetstruct(nctemp4522);
nctempchar1* nctemp4520= nctemp4524;
struct nctempchar1 *nctemp4527;
static struct nctempchar1 nctemp4528 = {{ 7}, (char*)"struct\0"};
nctemp4527=&nctemp4528;
nctempchar1* nctemp4525= nctemp4527;
int nctemp4529=LibeStrcmp(nctemp4520,nctemp4525);
int nctemp4517 = (nctemp4529 ==1);
if(nctemp4517)
{
struct tree* nctemp4536= p;
nctempchar1* nctemp4538=PtreeGetarray(nctemp4536);
nctempchar1* nctemp4534= nctemp4538;
struct nctempchar1 *nctemp4541;
static struct nctempchar1 nctemp4542 = {{ 6}, (char*)"array\0"};
nctemp4541=&nctemp4542;
nctempchar1* nctemp4539= nctemp4541;
int nctemp4543=LibeStrcmp(nctemp4534,nctemp4539);
int nctemp4531 = (nctemp4543 ==1);
if(nctemp4531)
{
struct tree* nctemp4550= p;
nctempchar1* nctemp4552= qual;
struct nctempchar1 *nctemp4557;
static struct nctempchar1 nctemp4558 = {{ 2}, (char*)".\0"};
nctemp4557=&nctemp4558;
nctempchar1* nctemp4555= nctemp4557;
nctempchar1* nctemp4559=CodeArray(nctemp4550,nctemp4552,nctemp4555);
qual=nctemp4559;
struct tree* nctemp4564= p;
struct tree* nctemp4566=PtreeMvchild(nctemp4564);
np =nctemp4566;
int nctemp4567 = (np ==0);
if(nctemp4567)
{
return qual;
}
struct tree* nctemp4577= np;
struct tree* nctemp4579=PtreeMvsister(nctemp4577);
np =nctemp4579;
int nctemp4580 = (np ==0);
if(nctemp4580)
{
return qual;
}
}
else{
struct tree* nctemp4591= p;
nctempchar1* nctemp4593=PtreeGetdef(nctemp4591);
qual=nctemp4593;
struct tree* nctemp4601= p;
struct tree* nctemp4603=PtreeMvchild(nctemp4601);
np =nctemp4603;
int nctemp4594 = (np ==0);
if(nctemp4594)
{
return qual;
}
}
struct tree* nctemp4612= np;
nctempchar1* nctemp4614=PtreeGetarray(nctemp4612);
nctempchar1* nctemp4610= nctemp4614;
struct nctempchar1 *nctemp4617;
static struct nctempchar1 nctemp4618 = {{ 6}, (char*)"array\0"};
nctemp4617=&nctemp4618;
nctempchar1* nctemp4615= nctemp4617;
int nctemp4619=LibeStrcmp(nctemp4610,nctemp4615);
int nctemp4607 = (nctemp4619 ==1);
if(nctemp4607)
{
struct symbol* nctemp4625=SymGetltp();
tp =nctemp4625;
struct symbol* nctemp4630=SymGetetp();
up =nctemp4630;
struct tree* nctemp4637= p;
nctempchar1* nctemp4639=PtreeGetdef(nctemp4637);
nctempchar1* nctemp4635= nctemp4639;
struct symbol* nctemp4640=SymLook(nctemp4635);
uup =nctemp4640;
struct symbol* nctemp4647= uup;
nctempchar1* nctemp4649=SymGetype(nctemp4647);
nctempchar1* nctemp4645= nctemp4649;
struct symbol* nctemp4650=SymLook(nctemp4645);
uup =nctemp4650;
struct symbol* nctemp4654= uup;
struct symbol* nctemp4656=SymGetable(nctemp4654);
struct symbol* nctemp4652= nctemp4656;
struct symbol* nctemp4657=SymSetltp(nctemp4652);
struct tree* nctemp4663= p;
nctempchar1* nctemp4665=PtreeGetarray(nctemp4663);
nctempchar1* nctemp4661= nctemp4665;
struct nctempchar1 *nctemp4668;
static struct nctempchar1 nctemp4669 = {{ 6}, (char*)"array\0"};
nctemp4668=&nctemp4669;
nctempchar1* nctemp4666= nctemp4668;
int nctemp4670=LibeStrcmp(nctemp4661,nctemp4666);
int nctemp4658 = (nctemp4670 ==1);
if(nctemp4658)
{
struct tree* nctemp4677= np;
nctempchar1* nctemp4679= qual;
struct nctempchar1 *nctemp4684;
static struct nctempchar1 nctemp4685 = {{ 2}, (char*)".\0"};
nctemp4684=&nctemp4685;
nctempchar1* nctemp4682= nctemp4684;
nctempchar1* nctemp4686=CodeArray(nctemp4677,nctemp4679,nctemp4682);
name=nctemp4686;
}
else{
struct tree* nctemp4692= np;
nctempchar1* nctemp4694= qual;
struct nctempchar1 *nctemp4699;
static struct nctempchar1 nctemp4700 = {{ 3}, (char*)"->\0"};
nctemp4699=&nctemp4700;
nctempchar1* nctemp4697= nctemp4699;
nctempchar1* nctemp4701=CodeArray(nctemp4692,nctemp4694,nctemp4697);
name=nctemp4701;
}
struct symbol* nctemp4703= tp;
struct symbol* nctemp4705=SymSetltp(nctemp4703);
struct symbol* nctemp4707= up;
struct symbol* nctemp4709=SymSetetp(nctemp4707);
}
else{
struct tree* nctemp4715= np;
nctempchar1* nctemp4717=PtreeGetdef(nctemp4715);
name=nctemp4717;
}
struct tree* nctemp4723= p;
nctempchar1* nctemp4725=PtreeGetarray(nctemp4723);
nctempchar1* nctemp4721= nctemp4725;
struct nctempchar1 *nctemp4728;
static struct nctempchar1 nctemp4729 = {{ 6}, (char*)"array\0"};
nctemp4728=&nctemp4729;
nctempchar1* nctemp4726= nctemp4728;
int nctemp4730=LibeStrcmp(nctemp4721,nctemp4726);
int nctemp4718 = (nctemp4730 ==1);
if(nctemp4718)
{
nctempchar1* nctemp4733= qual;
nctempchar1* nctemp4736= name;
nctempchar1* nctemp4739=CodeQident(nctemp4733,nctemp4736);
return nctemp4739;
}
else{
nctempchar1* nctemp4741= qual;
nctempchar1* nctemp4744= name;
nctempchar1* nctemp4747=CodeQident2(nctemp4741,nctemp4744);
return nctemp4747;
}
}
else{
struct tree* nctemp4753= p;
nctempchar1* nctemp4755=PtreeGetarray(nctemp4753);
nctempchar1* nctemp4751= nctemp4755;
struct nctempchar1 *nctemp4758;
static struct nctempchar1 nctemp4759 = {{ 6}, (char*)"array\0"};
nctemp4758=&nctemp4759;
nctempchar1* nctemp4756= nctemp4758;
int nctemp4760=LibeStrcmp(nctemp4751,nctemp4756);
int nctemp4748 = (nctemp4760 ==1);
if(nctemp4748)
{
name=(0);
qual=(0);
struct tree* nctemp4777= p;
nctempchar1* nctemp4779= qual;
nctempchar1* nctemp4782= name;
nctempchar1* nctemp4785=CodeArray(nctemp4777,nctemp4779,nctemp4782);
qual=nctemp4785;
return qual;
}
else{
struct tree* nctemp4789= p;
nctempchar1* nctemp4791=PtreeGetdef(nctemp4789);
return nctemp4791;
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
nctempchar1* nctemp4797=CodeMktemp();
pointer=nctemp4797;
nctempchar1* nctemp4803=CodeMktemp();
totdim=nctemp4803;
struct tree* nctemp4808= p;
struct tree* nctemp4810=PtreeMvchild(nctemp4808);
p =nctemp4810;
struct tree* nctemp4816= p;
nctempchar1* nctemp4818=PtreeGetdef(nctemp4816);
type=nctemp4818;
struct tree* nctemp4824= p;
nctempchar1* nctemp4826=PtreeGetstruct(nctemp4824);
structflag=nctemp4826;
struct tree* nctemp4832= p;
nctempchar1* nctemp4834=PtreeGetarray(nctemp4832);
arrayflag=nctemp4834;
struct tree* nctemp4840= p;
nctempchar1* nctemp4842=PtreeGetarray(nctemp4840);
nctempchar1* nctemp4838= nctemp4842;
struct nctempchar1 *nctemp4845;
static struct nctempchar1 nctemp4846 = {{ 6}, (char*)"array\0"};
nctemp4845=&nctemp4846;
nctempchar1* nctemp4843= nctemp4845;
int nctemp4847=LibeStrcmp(nctemp4838,nctemp4843);
int nctemp4835 = (nctemp4847 ==1);
if(nctemp4835)
{
struct tree* nctemp4853= p;
struct tree* nctemp4855=PtreeMvchild(nctemp4853);
p =nctemp4855;
struct tree* nctemp4860= p;
struct tree* nctemp4862=PtreeMvchild(nctemp4860);
p =nctemp4862;
struct tree* nctemp4867= p;
struct tree* nctemp4869=PtreeMvchild(nctemp4867);
p =nctemp4869;
struct tree* nctemp4874= p;
struct tree* nctemp4876=PtreeMvchild(nctemp4874);
p =nctemp4876;
sp =p;
top =p;
rank =1;
struct tree* nctemp4896= p;
struct tree* nctemp4898=PtreeMvsister(nctemp4896);
p =nctemp4898;
int nctemp4889 = (p !=0);
int nctemp4900=nctemp4889;
while(nctemp4900)
{{
int nctemp4909 = rank + 1;
rank =nctemp4909;
}
struct tree* nctemp4917= p;
struct tree* nctemp4919=PtreeMvsister(nctemp4917);
p =nctemp4919;
int nctemp4910 = (p !=0);
nctemp4900=nctemp4910;}int nctemp4921 = (rank > 4);
if(nctemp4921)
{
struct nctempchar1 *nctemp4928;
static struct nctempchar1 nctemp4929 = {{ 29}, (char*)"Array dimension is too large\0"};
nctemp4928=&nctemp4929;
nctempchar1* nctemp4926= nctemp4928;
int nctemp4930=CodeError(nctemp4926);
}
p =sp;
i =0;
int nctemp4939 = (p !=0);
int nctemp4943=nctemp4939;
while(nctemp4943)
{{
struct tree* nctemp4949= p;
nctempchar1* nctemp4951=CodeExpr(nctemp4949);
dim=nctemp4951;
int nctemp4952 = (i ==0);
if(nctemp4952)
{
struct tree* nctemp4957= p;
struct tree* nctemp4961= p;
nctempchar1* nctemp4963=PtreeGetype(nctemp4961);
nctempchar1* nctemp4959= nctemp4963;
int nctemp4964=CodeEs(nctemp4957,nctemp4959);
struct tree* nctemp4966= p;
struct nctempchar1 *nctemp4970;
static struct nctempchar1 nctemp4971 = {{ 2}, (char*)" \0"};
nctemp4970=&nctemp4971;
nctempchar1* nctemp4968= nctemp4970;
int nctemp4972=CodeEs(nctemp4966,nctemp4968);
struct tree* nctemp4974= p;
nctempchar1* nctemp4976= totdim;
int nctemp4979=CodeEs(nctemp4974,nctemp4976);
struct tree* nctemp4981= p;
struct nctempchar1 *nctemp4985;
static struct nctempchar1 nctemp4986 = {{ 2}, (char*)"=\0"};
nctemp4985=&nctemp4986;
nctempchar1* nctemp4983= nctemp4985;
int nctemp4987=CodeEs(nctemp4981,nctemp4983);
struct tree* nctemp4989= p;
nctempchar1* nctemp4991= dim;
int nctemp4994=CodeEs(nctemp4989,nctemp4991);
}
else{
struct tree* nctemp4996= p;
nctempchar1* nctemp4998= totdim;
int nctemp5001=CodeEs(nctemp4996,nctemp4998);
struct tree* nctemp5003= p;
struct nctempchar1 *nctemp5007;
static struct nctempchar1 nctemp5008 = {{ 2}, (char*)"=\0"};
nctemp5007=&nctemp5008;
nctempchar1* nctemp5005= nctemp5007;
int nctemp5009=CodeEs(nctemp5003,nctemp5005);
struct tree* nctemp5011= p;
nctempchar1* nctemp5013= totdim;
int nctemp5016=CodeEs(nctemp5011,nctemp5013);
struct tree* nctemp5018= p;
struct nctempchar1 *nctemp5022;
static struct nctempchar1 nctemp5023 = {{ 2}, (char*)"*\0"};
nctemp5022=&nctemp5023;
nctempchar1* nctemp5020= nctemp5022;
int nctemp5024=CodeEs(nctemp5018,nctemp5020);
struct tree* nctemp5026= p;
nctempchar1* nctemp5028= dim;
int nctemp5031=CodeEs(nctemp5026,nctemp5028);
}
struct tree* nctemp5033= p;
struct nctempchar1 *nctemp5037;
static struct nctempchar1 nctemp5038 = {{ 4}, (char*)";\n\0"};
nctemp5037=&nctemp5038;
nctempchar1* nctemp5035= nctemp5037;
int nctemp5039=CodeEs(nctemp5033,nctemp5035);
int nctemp5048 = i + 1;
i =nctemp5048;
struct tree* nctemp5053= p;
struct tree* nctemp5055=PtreeMvsister(nctemp5053);
p =nctemp5055;
}
int nctemp5056 = (p !=0);
nctemp4943=nctemp5056;}}
nctempchar1* nctemp5066= structflag;
struct nctempchar1 *nctemp5071;
static struct nctempchar1 nctemp5072 = {{ 7}, (char*)"struct\0"};
nctemp5071=&nctemp5072;
nctempchar1* nctemp5069= nctemp5071;
int nctemp5073=LibeStrcmp(nctemp5066,nctemp5069);
int nctemp5063 = (nctemp5073 ==1);
nctempchar1* nctemp5079= arrayflag;
struct nctempchar1 *nctemp5084;
static struct nctempchar1 nctemp5085 = {{ 6}, (char*)"array\0"};
nctemp5084=&nctemp5085;
nctempchar1* nctemp5082= nctemp5084;
int nctemp5086=LibeStrcmp(nctemp5079,nctemp5082);
int nctemp5076 = (nctemp5086 ==0);
int nctemp5060 = (nctemp5063 && nctemp5076);
if(nctemp5060)
{
struct tree* nctemp5089= p;
struct nctempchar1 *nctemp5093;
static struct nctempchar1 nctemp5094 = {{ 8}, (char*)"struct \0"};
nctemp5093=&nctemp5094;
nctempchar1* nctemp5091= nctemp5093;
int nctemp5095=CodeEs(nctemp5089,nctemp5091);
struct tree* nctemp5097= p;
nctempchar1* nctemp5099= type;
int nctemp5102=CodeEs(nctemp5097,nctemp5099);
struct tree* nctemp5104= p;
struct nctempchar1 *nctemp5108;
static struct nctempchar1 nctemp5109 = {{ 3}, (char*)" *\0"};
nctemp5108=&nctemp5109;
nctempchar1* nctemp5106= nctemp5108;
int nctemp5110=CodeEs(nctemp5104,nctemp5106);
struct tree* nctemp5112= p;
nctempchar1* nctemp5114= pointer;
int nctemp5117=CodeEs(nctemp5112,nctemp5114);
struct tree* nctemp5119= p;
struct nctempchar1 *nctemp5123;
static struct nctempchar1 nctemp5124 = {{ 2}, (char*)"=\0"};
nctemp5123=&nctemp5124;
nctempchar1* nctemp5121= nctemp5123;
int nctemp5125=CodeEs(nctemp5119,nctemp5121);
struct tree* nctemp5127= p;
struct nctempchar1 *nctemp5131;
static struct nctempchar1 nctemp5132 = {{ 2}, (char*)"(\0"};
nctemp5131=&nctemp5132;
nctempchar1* nctemp5129= nctemp5131;
int nctemp5133=CodeEs(nctemp5127,nctemp5129);
struct tree* nctemp5135= p;
struct nctempchar1 *nctemp5139;
static struct nctempchar1 nctemp5140 = {{ 8}, (char*)"struct \0"};
nctemp5139=&nctemp5140;
nctempchar1* nctemp5137= nctemp5139;
int nctemp5141=CodeEs(nctemp5135,nctemp5137);
struct tree* nctemp5143= p;
nctempchar1* nctemp5145= type;
int nctemp5148=CodeEs(nctemp5143,nctemp5145);
struct tree* nctemp5150= p;
struct nctempchar1 *nctemp5154;
static struct nctempchar1 nctemp5155 = {{ 3}, (char*)"*)\0"};
nctemp5154=&nctemp5155;
nctempchar1* nctemp5152= nctemp5154;
int nctemp5156=CodeEs(nctemp5150,nctemp5152);
struct tree* nctemp5158= p;
struct nctempchar1 *nctemp5162;
static struct nctempchar1 nctemp5163 = {{ 11}, (char*)"RunMalloc(\0"};
nctemp5162=&nctemp5163;
nctempchar1* nctemp5160= nctemp5162;
int nctemp5164=CodeEs(nctemp5158,nctemp5160);
struct tree* nctemp5166= p;
struct nctempchar1 *nctemp5170;
static struct nctempchar1 nctemp5171 = {{ 8}, (char*)"sizeof(\0"};
nctemp5170=&nctemp5171;
nctempchar1* nctemp5168= nctemp5170;
int nctemp5172=CodeEs(nctemp5166,nctemp5168);
struct tree* nctemp5174= p;
struct nctempchar1 *nctemp5178;
static struct nctempchar1 nctemp5179 = {{ 8}, (char*)"struct \0"};
nctemp5178=&nctemp5179;
nctempchar1* nctemp5176= nctemp5178;
int nctemp5180=CodeEs(nctemp5174,nctemp5176);
struct tree* nctemp5182= p;
nctempchar1* nctemp5184= type;
int nctemp5187=CodeEs(nctemp5182,nctemp5184);
struct tree* nctemp5189= p;
struct nctempchar1 *nctemp5193;
static struct nctempchar1 nctemp5194 = {{ 6}, (char*)"));\n\0"};
nctemp5193=&nctemp5194;
nctempchar1* nctemp5191= nctemp5193;
int nctemp5195=CodeEs(nctemp5189,nctemp5191);
}
nctempchar1* nctemp5202= structflag;
struct nctempchar1 *nctemp5207;
static struct nctempchar1 nctemp5208 = {{ 7}, (char*)"struct\0"};
nctemp5207=&nctemp5208;
nctempchar1* nctemp5205= nctemp5207;
int nctemp5209=LibeStrcmp(nctemp5202,nctemp5205);
int nctemp5199 = (nctemp5209 ==1);
nctempchar1* nctemp5215= arrayflag;
struct nctempchar1 *nctemp5220;
static struct nctempchar1 nctemp5221 = {{ 6}, (char*)"array\0"};
nctemp5220=&nctemp5221;
nctempchar1* nctemp5218= nctemp5220;
int nctemp5222=LibeStrcmp(nctemp5215,nctemp5218);
int nctemp5212 = (nctemp5222 ==1);
int nctemp5196 = (nctemp5199 && nctemp5212);
if(nctemp5196)
{
struct tree* nctemp5225= p;
struct nctempchar1 *nctemp5229;
static struct nctempchar1 nctemp5230 = {{ 14}, (char*)"struct nctemp\0"};
nctemp5229=&nctemp5230;
nctempchar1* nctemp5227= nctemp5229;
int nctemp5231=CodeEs(nctemp5225,nctemp5227);
struct tree* nctemp5233= p;
nctempchar1* nctemp5235= type;
int nctemp5238=CodeEs(nctemp5233,nctemp5235);
int nctemp5240= rank;
int nctemp5242=CodeEd(nctemp5240);
struct tree* nctemp5244= p;
struct nctempchar1 *nctemp5248;
static struct nctempchar1 nctemp5249 = {{ 3}, (char*)" *\0"};
nctemp5248=&nctemp5249;
nctempchar1* nctemp5246= nctemp5248;
int nctemp5250=CodeEs(nctemp5244,nctemp5246);
struct tree* nctemp5252= p;
nctempchar1* nctemp5254= pointer;
int nctemp5257=CodeEs(nctemp5252,nctemp5254);
struct tree* nctemp5259= p;
struct nctempchar1 *nctemp5263;
static struct nctempchar1 nctemp5264 = {{ 4}, (char*)";\n\0"};
nctemp5263=&nctemp5264;
nctempchar1* nctemp5261= nctemp5263;
int nctemp5265=CodeEs(nctemp5259,nctemp5261);
struct tree* nctemp5267= p;
nctempchar1* nctemp5269= pointer;
int nctemp5272=CodeEs(nctemp5267,nctemp5269);
struct tree* nctemp5274= p;
struct nctempchar1 *nctemp5278;
static struct nctempchar1 nctemp5279 = {{ 2}, (char*)"=\0"};
nctemp5278=&nctemp5279;
nctempchar1* nctemp5276= nctemp5278;
int nctemp5280=CodeEs(nctemp5274,nctemp5276);
struct tree* nctemp5282= p;
struct nctempchar1 *nctemp5286;
static struct nctempchar1 nctemp5287 = {{ 2}, (char*)"(\0"};
nctemp5286=&nctemp5287;
nctempchar1* nctemp5284= nctemp5286;
int nctemp5288=CodeEs(nctemp5282,nctemp5284);
struct tree* nctemp5290= p;
struct nctempchar1 *nctemp5294;
static struct nctempchar1 nctemp5295 = {{ 14}, (char*)"struct nctemp\0"};
nctemp5294=&nctemp5295;
nctempchar1* nctemp5292= nctemp5294;
int nctemp5296=CodeEs(nctemp5290,nctemp5292);
struct tree* nctemp5298= p;
nctempchar1* nctemp5300= type;
int nctemp5303=CodeEs(nctemp5298,nctemp5300);
int nctemp5305= rank;
int nctemp5307=CodeEd(nctemp5305);
struct tree* nctemp5309= p;
struct nctempchar1 *nctemp5313;
static struct nctempchar1 nctemp5314 = {{ 3}, (char*)"*)\0"};
nctemp5313=&nctemp5314;
nctempchar1* nctemp5311= nctemp5313;
int nctemp5315=CodeEs(nctemp5309,nctemp5311);
struct tree* nctemp5317= p;
struct nctempchar1 *nctemp5321;
static struct nctempchar1 nctemp5322 = {{ 11}, (char*)"RunMalloc(\0"};
nctemp5321=&nctemp5322;
nctempchar1* nctemp5319= nctemp5321;
int nctemp5323=CodeEs(nctemp5317,nctemp5319);
struct tree* nctemp5325= p;
struct nctempchar1 *nctemp5329;
static struct nctempchar1 nctemp5330 = {{ 21}, (char*)"sizeof(struct nctemp\0"};
nctemp5329=&nctemp5330;
nctempchar1* nctemp5327= nctemp5329;
int nctemp5331=CodeEs(nctemp5325,nctemp5327);
struct tree* nctemp5333= p;
nctempchar1* nctemp5335= type;
int nctemp5338=CodeEs(nctemp5333,nctemp5335);
int nctemp5340= rank;
int nctemp5342=CodeEd(nctemp5340);
struct tree* nctemp5344= p;
struct nctempchar1 *nctemp5348;
static struct nctempchar1 nctemp5349 = {{ 6}, (char*)"));\n\0"};
nctemp5348=&nctemp5349;
nctempchar1* nctemp5346= nctemp5348;
int nctemp5350=CodeEs(nctemp5344,nctemp5346);
i =0;
p =sp;
int nctemp5359 = (p !=0);
int nctemp5363=nctemp5359;
while(nctemp5363)
{{
struct tree* nctemp5369= sp;
nctempchar1* nctemp5371=CodeExpr(nctemp5369);
dim=nctemp5371;
struct tree* nctemp5373= sp;
nctempchar1* nctemp5375= pointer;
int nctemp5378=CodeEs(nctemp5373,nctemp5375);
struct tree* nctemp5380= sp;
struct nctempchar1 *nctemp5384;
static struct nctempchar1 nctemp5385 = {{ 4}, (char*)"->d\0"};
nctemp5384=&nctemp5385;
nctempchar1* nctemp5382= nctemp5384;
int nctemp5386=CodeEs(nctemp5380,nctemp5382);
struct tree* nctemp5388= sp;
struct nctempchar1 *nctemp5392;
static struct nctempchar1 nctemp5393 = {{ 2}, (char*)"[\0"};
nctemp5392=&nctemp5393;
nctempchar1* nctemp5390= nctemp5392;
int nctemp5394=CodeEs(nctemp5388,nctemp5390);
int nctemp5396= i;
int nctemp5398=CodeEd(nctemp5396);
struct tree* nctemp5400= sp;
struct nctempchar1 *nctemp5404;
static struct nctempchar1 nctemp5405 = {{ 3}, (char*)"]=\0"};
nctemp5404=&nctemp5405;
nctempchar1* nctemp5402= nctemp5404;
int nctemp5406=CodeEs(nctemp5400,nctemp5402);
struct tree* nctemp5408= sp;
nctempchar1* nctemp5410= dim;
int nctemp5413=CodeEs(nctemp5408,nctemp5410);
struct tree* nctemp5415= sp;
struct nctempchar1 *nctemp5419;
static struct nctempchar1 nctemp5420 = {{ 4}, (char*)";\n\0"};
nctemp5419=&nctemp5420;
nctempchar1* nctemp5417= nctemp5419;
int nctemp5421=CodeEs(nctemp5415,nctemp5417);
int nctemp5430 = i + 1;
i =nctemp5430;
struct tree* nctemp5435= p;
struct tree* nctemp5437=PtreeMvsister(nctemp5435);
p =nctemp5437;
}
int nctemp5438 = (p !=0);
nctemp5363=nctemp5438;}struct tree* nctemp5443= sp;
nctempchar1* nctemp5445= pointer;
int nctemp5448=CodeEs(nctemp5443,nctemp5445);
struct tree* nctemp5450= sp;
struct nctempchar1 *nctemp5454;
static struct nctempchar1 nctemp5455 = {{ 4}, (char*)"->a\0"};
nctemp5454=&nctemp5455;
nctempchar1* nctemp5452= nctemp5454;
int nctemp5456=CodeEs(nctemp5450,nctemp5452);
struct tree* nctemp5458= sp;
struct nctempchar1 *nctemp5462;
static struct nctempchar1 nctemp5463 = {{ 2}, (char*)"=\0"};
nctemp5462=&nctemp5463;
nctempchar1* nctemp5460= nctemp5462;
int nctemp5464=CodeEs(nctemp5458,nctemp5460);
struct tree* nctemp5466= sp;
struct nctempchar1 *nctemp5470;
static struct nctempchar1 nctemp5471 = {{ 9}, (char*)"(struct \0"};
nctemp5470=&nctemp5471;
nctempchar1* nctemp5468= nctemp5470;
int nctemp5472=CodeEs(nctemp5466,nctemp5468);
struct tree* nctemp5474= sp;
nctempchar1* nctemp5476= type;
int nctemp5479=CodeEs(nctemp5474,nctemp5476);
struct tree* nctemp5481= sp;
struct nctempchar1 *nctemp5485;
static struct nctempchar1 nctemp5486 = {{ 3}, (char*)"*)\0"};
nctemp5485=&nctemp5486;
nctempchar1* nctemp5483= nctemp5485;
int nctemp5487=CodeEs(nctemp5481,nctemp5483);
struct tree* nctemp5489= sp;
struct nctempchar1 *nctemp5493;
static struct nctempchar1 nctemp5494 = {{ 18}, (char*)"RunMalloc(sizeof(\0"};
nctemp5493=&nctemp5494;
nctempchar1* nctemp5491= nctemp5493;
int nctemp5495=CodeEs(nctemp5489,nctemp5491);
struct tree* nctemp5497= sp;
struct nctempchar1 *nctemp5501;
static struct nctempchar1 nctemp5502 = {{ 8}, (char*)"struct \0"};
nctemp5501=&nctemp5502;
nctempchar1* nctemp5499= nctemp5501;
int nctemp5503=CodeEs(nctemp5497,nctemp5499);
struct tree* nctemp5505= sp;
nctempchar1* nctemp5507= type;
int nctemp5510=CodeEs(nctemp5505,nctemp5507);
struct tree* nctemp5512= sp;
struct nctempchar1 *nctemp5516;
static struct nctempchar1 nctemp5517 = {{ 2}, (char*)")\0"};
nctemp5516=&nctemp5517;
nctempchar1* nctemp5514= nctemp5516;
int nctemp5518=CodeEs(nctemp5512,nctemp5514);
struct tree* nctemp5520= sp;
struct nctempchar1 *nctemp5524;
static struct nctempchar1 nctemp5525 = {{ 2}, (char*)"*\0"};
nctemp5524=&nctemp5525;
nctempchar1* nctemp5522= nctemp5524;
int nctemp5526=CodeEs(nctemp5520,nctemp5522);
struct tree* nctemp5528= sp;
nctempchar1* nctemp5530= totdim;
int nctemp5533=CodeEs(nctemp5528,nctemp5530);
struct tree* nctemp5535= sp;
struct nctempchar1 *nctemp5539;
static struct nctempchar1 nctemp5540 = {{ 5}, (char*)");\n\0"};
nctemp5539=&nctemp5540;
nctempchar1* nctemp5537= nctemp5539;
int nctemp5541=CodeEs(nctemp5535,nctemp5537);
}
nctempchar1* nctemp5548= structflag;
struct nctempchar1 *nctemp5553;
static struct nctempchar1 nctemp5554 = {{ 7}, (char*)"struct\0"};
nctemp5553=&nctemp5554;
nctempchar1* nctemp5551= nctemp5553;
int nctemp5555=LibeStrcmp(nctemp5548,nctemp5551);
int nctemp5545 = (nctemp5555 ==0);
nctempchar1* nctemp5561= arrayflag;
struct nctempchar1 *nctemp5566;
static struct nctempchar1 nctemp5567 = {{ 6}, (char*)"array\0"};
nctemp5566=&nctemp5567;
nctempchar1* nctemp5564= nctemp5566;
int nctemp5568=LibeStrcmp(nctemp5561,nctemp5564);
int nctemp5558 = (nctemp5568 ==1);
int nctemp5542 = (nctemp5545 && nctemp5558);
if(nctemp5542)
{
int nctemp5571= 4;
int nctemp5573=LibeFlush(nctemp5571);
struct tree* nctemp5575= sp;
struct nctempchar1 *nctemp5579;
static struct nctempchar1 nctemp5580 = {{ 7}, (char*)"nctemp\0"};
nctemp5579=&nctemp5580;
nctempchar1* nctemp5577= nctemp5579;
int nctemp5581=CodeEs(nctemp5575,nctemp5577);
struct tree* nctemp5583= sp;
nctempchar1* nctemp5585= type;
int nctemp5588=CodeEs(nctemp5583,nctemp5585);
int nctemp5590= rank;
int nctemp5592=CodeEd(nctemp5590);
struct tree* nctemp5594= sp;
struct nctempchar1 *nctemp5598;
static struct nctempchar1 nctemp5599 = {{ 3}, (char*)" *\0"};
nctemp5598=&nctemp5599;
nctempchar1* nctemp5596= nctemp5598;
int nctemp5600=CodeEs(nctemp5594,nctemp5596);
struct tree* nctemp5602= sp;
nctempchar1* nctemp5604= pointer;
int nctemp5607=CodeEs(nctemp5602,nctemp5604);
struct tree* nctemp5609= sp;
struct nctempchar1 *nctemp5613;
static struct nctempchar1 nctemp5614 = {{ 4}, (char*)";\n\0"};
nctemp5613=&nctemp5614;
nctempchar1* nctemp5611= nctemp5613;
int nctemp5615=CodeEs(nctemp5609,nctemp5611);
p =top;
i =0;
struct tree* nctemp5625= p;
nctempchar1* nctemp5627= pointer;
int nctemp5630=CodeEs(nctemp5625,nctemp5627);
struct tree* nctemp5632= p;
struct nctempchar1 *nctemp5636;
static struct nctempchar1 nctemp5637 = {{ 2}, (char*)"=\0"};
nctemp5636=&nctemp5637;
nctempchar1* nctemp5634= nctemp5636;
int nctemp5638=CodeEs(nctemp5632,nctemp5634);
struct tree* nctemp5640= p;
struct nctempchar1 *nctemp5644;
static struct nctempchar1 nctemp5645 = {{ 2}, (char*)"(\0"};
nctemp5644=&nctemp5645;
nctempchar1* nctemp5642= nctemp5644;
int nctemp5646=CodeEs(nctemp5640,nctemp5642);
struct tree* nctemp5648= p;
struct nctempchar1 *nctemp5652;
static struct nctempchar1 nctemp5653 = {{ 7}, (char*)"nctemp\0"};
nctemp5652=&nctemp5653;
nctempchar1* nctemp5650= nctemp5652;
int nctemp5654=CodeEs(nctemp5648,nctemp5650);
struct tree* nctemp5656= p;
nctempchar1* nctemp5658= type;
int nctemp5661=CodeEs(nctemp5656,nctemp5658);
int nctemp5663= rank;
int nctemp5665=CodeEd(nctemp5663);
struct tree* nctemp5667= p;
struct nctempchar1 *nctemp5671;
static struct nctempchar1 nctemp5672 = {{ 3}, (char*)"*)\0"};
nctemp5671=&nctemp5672;
nctempchar1* nctemp5669= nctemp5671;
int nctemp5673=CodeEs(nctemp5667,nctemp5669);
struct tree* nctemp5675= p;
struct nctempchar1 *nctemp5679;
static struct nctempchar1 nctemp5680 = {{ 11}, (char*)"RunMalloc(\0"};
nctemp5679=&nctemp5680;
nctempchar1* nctemp5677= nctemp5679;
int nctemp5681=CodeEs(nctemp5675,nctemp5677);
struct tree* nctemp5683= p;
struct nctempchar1 *nctemp5687;
static struct nctempchar1 nctemp5688 = {{ 14}, (char*)"sizeof(nctemp\0"};
nctemp5687=&nctemp5688;
nctempchar1* nctemp5685= nctemp5687;
int nctemp5689=CodeEs(nctemp5683,nctemp5685);
struct tree* nctemp5691= p;
nctempchar1* nctemp5693= type;
int nctemp5696=CodeEs(nctemp5691,nctemp5693);
int nctemp5698= rank;
int nctemp5700=CodeEd(nctemp5698);
struct tree* nctemp5702= p;
struct nctempchar1 *nctemp5706;
static struct nctempchar1 nctemp5707 = {{ 6}, (char*)"));\n\0"};
nctemp5706=&nctemp5707;
nctempchar1* nctemp5704= nctemp5706;
int nctemp5708=CodeEs(nctemp5702,nctemp5704);
int nctemp5709 = (p !=0);
int nctemp5713=nctemp5709;
while(nctemp5713)
{{
struct tree* nctemp5719= p;
nctempchar1* nctemp5721=CodeExpr(nctemp5719);
dim=nctemp5721;
struct tree* nctemp5723= p;
nctempchar1* nctemp5725= pointer;
int nctemp5728=CodeEs(nctemp5723,nctemp5725);
struct tree* nctemp5730= p;
struct nctempchar1 *nctemp5734;
static struct nctempchar1 nctemp5735 = {{ 4}, (char*)"->d\0"};
nctemp5734=&nctemp5735;
nctempchar1* nctemp5732= nctemp5734;
int nctemp5736=CodeEs(nctemp5730,nctemp5732);
struct tree* nctemp5738= p;
struct nctempchar1 *nctemp5742;
static struct nctempchar1 nctemp5743 = {{ 2}, (char*)"[\0"};
nctemp5742=&nctemp5743;
nctempchar1* nctemp5740= nctemp5742;
int nctemp5744=CodeEs(nctemp5738,nctemp5740);
int nctemp5746= i;
int nctemp5748=CodeEd(nctemp5746);
struct tree* nctemp5750= p;
struct nctempchar1 *nctemp5754;
static struct nctempchar1 nctemp5755 = {{ 3}, (char*)"]=\0"};
nctemp5754=&nctemp5755;
nctempchar1* nctemp5752= nctemp5754;
int nctemp5756=CodeEs(nctemp5750,nctemp5752);
struct tree* nctemp5758= p;
nctempchar1* nctemp5760= dim;
int nctemp5763=CodeEs(nctemp5758,nctemp5760);
struct tree* nctemp5765= p;
struct nctempchar1 *nctemp5769;
static struct nctempchar1 nctemp5770 = {{ 4}, (char*)";\n\0"};
nctemp5769=&nctemp5770;
nctempchar1* nctemp5767= nctemp5769;
int nctemp5771=CodeEs(nctemp5765,nctemp5767);
int nctemp5780 = i + 1;
i =nctemp5780;
struct tree* nctemp5785= p;
struct tree* nctemp5787=PtreeMvsister(nctemp5785);
p =nctemp5787;
}
int nctemp5788 = (p !=0);
nctemp5713=nctemp5788;}p =top;
struct tree* nctemp5797= p;
nctempchar1* nctemp5799= pointer;
int nctemp5802=CodeEs(nctemp5797,nctemp5799);
struct tree* nctemp5804= p;
struct nctempchar1 *nctemp5808;
static struct nctempchar1 nctemp5809 = {{ 4}, (char*)"->a\0"};
nctemp5808=&nctemp5809;
nctempchar1* nctemp5806= nctemp5808;
int nctemp5810=CodeEs(nctemp5804,nctemp5806);
struct tree* nctemp5812= p;
struct nctempchar1 *nctemp5816;
static struct nctempchar1 nctemp5817 = {{ 3}, (char*)"=(\0"};
nctemp5816=&nctemp5817;
nctempchar1* nctemp5814= nctemp5816;
int nctemp5818=CodeEs(nctemp5812,nctemp5814);
struct tree* nctemp5820= p;
nctempchar1* nctemp5822= type;
int nctemp5825=CodeEs(nctemp5820,nctemp5822);
struct tree* nctemp5827= p;
struct nctempchar1 *nctemp5831;
static struct nctempchar1 nctemp5832 = {{ 4}, (char*)" *)\0"};
nctemp5831=&nctemp5832;
nctempchar1* nctemp5829= nctemp5831;
int nctemp5833=CodeEs(nctemp5827,nctemp5829);
struct tree* nctemp5835= p;
struct nctempchar1 *nctemp5839;
static struct nctempchar1 nctemp5840 = {{ 18}, (char*)"RunMalloc(sizeof(\0"};
nctemp5839=&nctemp5840;
nctempchar1* nctemp5837= nctemp5839;
int nctemp5841=CodeEs(nctemp5835,nctemp5837);
struct tree* nctemp5843= p;
nctempchar1* nctemp5845= type;
int nctemp5848=CodeEs(nctemp5843,nctemp5845);
struct tree* nctemp5850= p;
struct nctempchar1 *nctemp5854;
static struct nctempchar1 nctemp5855 = {{ 2}, (char*)")\0"};
nctemp5854=&nctemp5855;
nctempchar1* nctemp5852= nctemp5854;
int nctemp5856=CodeEs(nctemp5850,nctemp5852);
struct tree* nctemp5858= p;
struct nctempchar1 *nctemp5862;
static struct nctempchar1 nctemp5863 = {{ 2}, (char*)"*\0"};
nctemp5862=&nctemp5863;
nctempchar1* nctemp5860= nctemp5862;
int nctemp5864=CodeEs(nctemp5858,nctemp5860);
struct tree* nctemp5866= p;
nctempchar1* nctemp5868= totdim;
int nctemp5871=CodeEs(nctemp5866,nctemp5868);
struct tree* nctemp5873= p;
struct nctempchar1 *nctemp5877;
static struct nctempchar1 nctemp5878 = {{ 5}, (char*)");\n\0"};
nctemp5877=&nctemp5878;
nctempchar1* nctemp5875= nctemp5877;
int nctemp5879=CodeEs(nctemp5873,nctemp5875);
}
return pointer;
}
nctempchar1 * CodeDelete (struct tree* p)
{
nctempchar1 *tmp;
struct tree* nctemp5886= p;
struct tree* nctemp5888=PtreeMvchild(nctemp5886);
p =nctemp5888;
struct tree* nctemp5893= p;
struct tree* nctemp5895=PtreeMvchild(nctemp5893);
p =nctemp5895;
struct tree* nctemp5901= p;
nctempchar1* nctemp5903=CodeBinexpr(nctemp5901);
tmp=nctemp5903;
struct tree* nctemp5907= p;
nctempchar1* nctemp5909=PtreeGetref(nctemp5907);
nctempchar1* nctemp5905= nctemp5909;
struct nctempchar1 *nctemp5912;
static struct nctempchar1 nctemp5913 = {{ 5}, (char*)"aref\0"};
nctemp5912=&nctemp5913;
nctempchar1* nctemp5910= nctemp5912;
int nctemp5914=LibeStrcmp(nctemp5905,nctemp5910);
if(nctemp5914)
{
struct tree* nctemp5916= p;
struct nctempchar1 *nctemp5920;
static struct nctempchar1 nctemp5921 = {{ 9}, (char*)"RunFree(\0"};
nctemp5920=&nctemp5921;
nctempchar1* nctemp5918= nctemp5920;
int nctemp5922=CodeEs(nctemp5916,nctemp5918);
struct tree* nctemp5924= p;
nctempchar1* nctemp5926= tmp;
int nctemp5929=CodeEs(nctemp5924,nctemp5926);
struct tree* nctemp5931= p;
struct nctempchar1 *nctemp5935;
static struct nctempchar1 nctemp5936 = {{ 8}, (char*)"->a);\n\0"};
nctemp5935=&nctemp5936;
nctempchar1* nctemp5933= nctemp5935;
int nctemp5937=CodeEs(nctemp5931,nctemp5933);
struct tree* nctemp5939= p;
struct nctempchar1 *nctemp5943;
static struct nctempchar1 nctemp5944 = {{ 9}, (char*)"RunFree(\0"};
nctemp5943=&nctemp5944;
nctempchar1* nctemp5941= nctemp5943;
int nctemp5945=CodeEs(nctemp5939,nctemp5941);
struct tree* nctemp5947= p;
nctempchar1* nctemp5949= tmp;
int nctemp5952=CodeEs(nctemp5947,nctemp5949);
struct tree* nctemp5954= p;
struct nctempchar1 *nctemp5958;
static struct nctempchar1 nctemp5959 = {{ 5}, (char*)");\n\0"};
nctemp5958=&nctemp5959;
nctempchar1* nctemp5956= nctemp5958;
int nctemp5960=CodeEs(nctemp5954,nctemp5956);
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
nctempchar1* nctemp5968=CodeMktemp();
tempr=nctemp5968;
struct tree* nctemp5973= p;
struct tree* nctemp5975=PtreeMvchild(nctemp5973);
np =nctemp5975;
struct tree* nctemp5981= np;
nctempchar1* nctemp5983=CodeExpr(nctemp5981);
temp=nctemp5983;
struct tree* nctemp5988= np;
struct tree* nctemp5990=PtreeMvsister(nctemp5988);
sp =nctemp5990;
struct tree* nctemp5996= sp;
nctempchar1* nctemp5998=CodeExpr(nctemp5996);
index=nctemp5998;
struct tree* nctemp6000= p;
struct tree* nctemp6004= p;
nctempchar1* nctemp6006=PtreeGetype(nctemp6004);
nctempchar1* nctemp6002= nctemp6006;
int nctemp6007=CodeEs(nctemp6000,nctemp6002);
struct tree* nctemp6009= p;
struct nctempchar1 *nctemp6013;
static struct nctempchar1 nctemp6014 = {{ 2}, (char*)" \0"};
nctemp6013=&nctemp6014;
nctempchar1* nctemp6011= nctemp6013;
int nctemp6015=CodeEs(nctemp6009,nctemp6011);
struct tree* nctemp6017= p;
nctempchar1* nctemp6019= tempr;
int nctemp6022=CodeEs(nctemp6017,nctemp6019);
struct tree* nctemp6024= p;
struct nctempchar1 *nctemp6028;
static struct nctempchar1 nctemp6029 = {{ 2}, (char*)"=\0"};
nctemp6028=&nctemp6029;
nctempchar1* nctemp6026= nctemp6028;
int nctemp6030=CodeEs(nctemp6024,nctemp6026);
struct tree* nctemp6032= p;
nctempchar1* nctemp6034= temp;
int nctemp6037=CodeEs(nctemp6032,nctemp6034);
struct tree* nctemp6039= p;
struct nctempchar1 *nctemp6043;
static struct nctempchar1 nctemp6044 = {{ 4}, (char*)"->d\0"};
nctemp6043=&nctemp6044;
nctempchar1* nctemp6041= nctemp6043;
int nctemp6045=CodeEs(nctemp6039,nctemp6041);
struct tree* nctemp6047= p;
struct nctempchar1 *nctemp6051;
static struct nctempchar1 nctemp6052 = {{ 2}, (char*)"[\0"};
nctemp6051=&nctemp6052;
nctempchar1* nctemp6049= nctemp6051;
int nctemp6053=CodeEs(nctemp6047,nctemp6049);
struct tree* nctemp6055= p;
nctempchar1* nctemp6057= index;
int nctemp6060=CodeEs(nctemp6055,nctemp6057);
struct tree* nctemp6062= p;
struct nctempchar1 *nctemp6066;
static struct nctempchar1 nctemp6067 = {{ 3}, (char*)"];\0"};
nctemp6066=&nctemp6067;
nctempchar1* nctemp6064= nctemp6066;
int nctemp6068=CodeEs(nctemp6062,nctemp6064);
return tempr;
}
nctempchar1 * CodeCmplx (struct tree* p)
{
struct tree* np;
struct tree* sp;
nctempchar1 *q;
nctempchar1 *r;
nctempchar1 *tempr;
nctempchar1* nctemp6076=CodeMktemp();
tempr=nctemp6076;
struct tree* nctemp6081= p;
struct tree* nctemp6083=PtreeMvchild(nctemp6081);
np =nctemp6083;
struct tree* nctemp6088= np;
struct tree* nctemp6090=PtreeMvchild(nctemp6088);
np =nctemp6090;
struct tree* nctemp6096= np;
nctempchar1* nctemp6098=CodeExpr(nctemp6096);
q=nctemp6098;
struct tree* nctemp6103= np;
struct tree* nctemp6105=PtreeMvsister(nctemp6103);
sp =nctemp6105;
struct tree* nctemp6111= sp;
nctempchar1* nctemp6113=CodeExpr(nctemp6111);
r=nctemp6113;
struct tree* nctemp6115= p;
struct tree* nctemp6119= p;
nctempchar1* nctemp6121=PtreeGetype(nctemp6119);
nctempchar1* nctemp6117= nctemp6121;
int nctemp6122=CodeEs(nctemp6115,nctemp6117);
struct tree* nctemp6124= p;
struct nctempchar1 *nctemp6128;
static struct nctempchar1 nctemp6129 = {{ 2}, (char*)" \0"};
nctemp6128=&nctemp6129;
nctempchar1* nctemp6126= nctemp6128;
int nctemp6130=CodeEs(nctemp6124,nctemp6126);
struct tree* nctemp6132= p;
nctempchar1* nctemp6134= tempr;
int nctemp6137=CodeEs(nctemp6132,nctemp6134);
struct tree* nctemp6139= p;
struct nctempchar1 *nctemp6143;
static struct nctempchar1 nctemp6144 = {{ 3}, (char*)".r\0"};
nctemp6143=&nctemp6144;
nctempchar1* nctemp6141= nctemp6143;
int nctemp6145=CodeEs(nctemp6139,nctemp6141);
struct tree* nctemp6147= p;
struct nctempchar1 *nctemp6151;
static struct nctempchar1 nctemp6152 = {{ 3}, (char*)" =\0"};
nctemp6151=&nctemp6152;
nctempchar1* nctemp6149= nctemp6151;
int nctemp6153=CodeEs(nctemp6147,nctemp6149);
struct tree* nctemp6155= p;
nctempchar1* nctemp6157= q;
int nctemp6160=CodeEs(nctemp6155,nctemp6157);
struct tree* nctemp6162= p;
struct nctempchar1 *nctemp6166;
static struct nctempchar1 nctemp6167 = {{ 2}, (char*)";\0"};
nctemp6166=&nctemp6167;
nctempchar1* nctemp6164= nctemp6166;
int nctemp6168=CodeEs(nctemp6162,nctemp6164);
struct tree* nctemp6170= p;
struct tree* nctemp6174= p;
nctempchar1* nctemp6176=PtreeGetype(nctemp6174);
nctempchar1* nctemp6172= nctemp6176;
int nctemp6177=CodeEs(nctemp6170,nctemp6172);
struct tree* nctemp6179= p;
struct nctempchar1 *nctemp6183;
static struct nctempchar1 nctemp6184 = {{ 2}, (char*)" \0"};
nctemp6183=&nctemp6184;
nctempchar1* nctemp6181= nctemp6183;
int nctemp6185=CodeEs(nctemp6179,nctemp6181);
struct tree* nctemp6187= p;
nctempchar1* nctemp6189= tempr;
int nctemp6192=CodeEs(nctemp6187,nctemp6189);
struct tree* nctemp6194= p;
struct nctempchar1 *nctemp6198;
static struct nctempchar1 nctemp6199 = {{ 3}, (char*)".i\0"};
nctemp6198=&nctemp6199;
nctempchar1* nctemp6196= nctemp6198;
int nctemp6200=CodeEs(nctemp6194,nctemp6196);
struct tree* nctemp6202= p;
struct nctempchar1 *nctemp6206;
static struct nctempchar1 nctemp6207 = {{ 2}, (char*)"=\0"};
nctemp6206=&nctemp6207;
nctempchar1* nctemp6204= nctemp6206;
int nctemp6208=CodeEs(nctemp6202,nctemp6204);
struct tree* nctemp6210= p;
nctempchar1* nctemp6212= r;
int nctemp6215=CodeEs(nctemp6210,nctemp6212);
struct tree* nctemp6217= p;
struct nctempchar1 *nctemp6221;
static struct nctempchar1 nctemp6222 = {{ 2}, (char*)";\0"};
nctemp6221=&nctemp6222;
nctempchar1* nctemp6219= nctemp6221;
int nctemp6223=CodeEs(nctemp6217,nctemp6219);
return tempr;
}
nctempchar1 * CodeIm (struct tree* p)
{
struct tree* np;
nctempchar1 *q;
nctempchar1 *tempr;
nctempchar1* nctemp6231=CodeMktemp();
tempr=nctemp6231;
struct tree* nctemp6236= p;
struct tree* nctemp6238=PtreeMvchild(nctemp6236);
np =nctemp6238;
struct tree* nctemp6244= np;
nctempchar1* nctemp6246=CodeExpr(nctemp6244);
q=nctemp6246;
struct tree* nctemp6248= p;
struct tree* nctemp6252= p;
nctempchar1* nctemp6254=PtreeGetype(nctemp6252);
nctempchar1* nctemp6250= nctemp6254;
int nctemp6255=CodeEs(nctemp6248,nctemp6250);
struct tree* nctemp6257= p;
struct nctempchar1 *nctemp6261;
static struct nctempchar1 nctemp6262 = {{ 2}, (char*)" \0"};
nctemp6261=&nctemp6262;
nctempchar1* nctemp6259= nctemp6261;
int nctemp6263=CodeEs(nctemp6257,nctemp6259);
struct tree* nctemp6265= p;
nctempchar1* nctemp6267= tempr;
int nctemp6270=CodeEs(nctemp6265,nctemp6267);
struct tree* nctemp6272= p;
struct nctempchar1 *nctemp6276;
static struct nctempchar1 nctemp6277 = {{ 3}, (char*)" =\0"};
nctemp6276=&nctemp6277;
nctempchar1* nctemp6274= nctemp6276;
int nctemp6278=CodeEs(nctemp6272,nctemp6274);
struct tree* nctemp6280= p;
nctempchar1* nctemp6282= q;
int nctemp6285=CodeEs(nctemp6280,nctemp6282);
struct tree* nctemp6287= p;
struct nctempchar1 *nctemp6291;
static struct nctempchar1 nctemp6292 = {{ 5}, (char*)".i  \0"};
nctemp6291=&nctemp6292;
nctempchar1* nctemp6289= nctemp6291;
int nctemp6293=CodeEs(nctemp6287,nctemp6289);
struct tree* nctemp6295= p;
struct nctempchar1 *nctemp6299;
static struct nctempchar1 nctemp6300 = {{ 4}, (char*)";\n\0"};
nctemp6299=&nctemp6300;
nctempchar1* nctemp6297= nctemp6299;
int nctemp6301=CodeEs(nctemp6295,nctemp6297);
return tempr;
}
nctempchar1 * CodeRe (struct tree* p)
{
struct tree* np;
nctempchar1 *q;
nctempchar1 *tmp;
struct tree* nctemp6308= p;
struct tree* nctemp6310=PtreeMvchild(nctemp6308);
np =nctemp6310;
struct tree* nctemp6316= np;
nctempchar1* nctemp6318=CodeExpr(nctemp6316);
q=nctemp6318;
nctempchar1* nctemp6324=CodeMktemp();
tmp=nctemp6324;
struct tree* nctemp6326= p;
struct tree* nctemp6330= p;
nctempchar1* nctemp6332=PtreeGetype(nctemp6330);
nctempchar1* nctemp6328= nctemp6332;
int nctemp6333=CodeEs(nctemp6326,nctemp6328);
struct tree* nctemp6335= p;
struct nctempchar1 *nctemp6339;
static struct nctempchar1 nctemp6340 = {{ 2}, (char*)" \0"};
nctemp6339=&nctemp6340;
nctempchar1* nctemp6337= nctemp6339;
int nctemp6341=CodeEs(nctemp6335,nctemp6337);
struct tree* nctemp6343= p;
nctempchar1* nctemp6345= tmp;
int nctemp6348=CodeEs(nctemp6343,nctemp6345);
struct tree* nctemp6350= p;
struct nctempchar1 *nctemp6354;
static struct nctempchar1 nctemp6355 = {{ 3}, (char*)" =\0"};
nctemp6354=&nctemp6355;
nctempchar1* nctemp6352= nctemp6354;
int nctemp6356=CodeEs(nctemp6350,nctemp6352);
struct tree* nctemp6358= p;
nctempchar1* nctemp6360= q;
int nctemp6363=CodeEs(nctemp6358,nctemp6360);
struct tree* nctemp6365= p;
struct nctempchar1 *nctemp6369;
static struct nctempchar1 nctemp6370 = {{ 5}, (char*)".r  \0"};
nctemp6369=&nctemp6370;
nctempchar1* nctemp6367= nctemp6369;
int nctemp6371=CodeEs(nctemp6365,nctemp6367);
struct tree* nctemp6373= p;
struct nctempchar1 *nctemp6377;
static struct nctempchar1 nctemp6378 = {{ 4}, (char*)";\n\0"};
nctemp6377=&nctemp6378;
nctempchar1* nctemp6375= nctemp6377;
int nctemp6379=CodeEs(nctemp6373,nctemp6375);
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
struct tree* nctemp6388= p;
nctempchar1* nctemp6390=PtreeGetdef(nctemp6388);
nctempchar1* nctemp6386= nctemp6390;
struct symbol* nctemp6393=SymGetetp();
struct symbol* nctemp6391= nctemp6393;
struct symbol* nctemp6394=SymLookup(nctemp6386,nctemp6391);
tp =nctemp6394;
struct tree* nctemp6399= p;
struct tree* nctemp6401=PtreeMvchild(nctemp6399);
sp =nctemp6401;
int nctemp6402 = (sp !=0);
if(nctemp6402)
{
struct tree* nctemp6411= sp;
nctempchar1* nctemp6413=PtreeGetname(nctemp6411);
nctempchar1* nctemp6409= nctemp6413;
struct nctempchar1 *nctemp6416;
static struct nctempchar1 nctemp6417 = {{ 9}, (char*)"exprlist\0"};
nctemp6416=&nctemp6417;
nctempchar1* nctemp6414= nctemp6416;
int nctemp6418=LibeStrcmp(nctemp6409,nctemp6414);
int nctemp6406 = (nctemp6418 ==1);
if(nctemp6406)
{
struct tree* nctemp6424= sp;
struct tree* nctemp6426=PtreeMvchild(nctemp6424);
sp =nctemp6426;
}
}
int nctemp6427 = (sp !=0);
int nctemp6431=nctemp6427;
while(nctemp6431)
{{
nctempchar1* nctemp6437=CodeMktemp();
ntemp=nctemp6437;
struct tree* nctemp6439= sp;
nctempchar1* nctemp6441= ntemp;
int nctemp6444=PtreeSetempr(nctemp6439,nctemp6441);
struct tree* nctemp6450= sp;
nctempchar1* nctemp6452=CodeExpr(nctemp6450);
temp=nctemp6452;
struct tree* nctemp6458= sp;
nctempchar1* nctemp6460=PtreeGetref(nctemp6458);
nctempchar1* nctemp6456= nctemp6460;
struct nctempchar1 *nctemp6463;
static struct nctempchar1 nctemp6464 = {{ 5}, (char*)"aref\0"};
nctemp6463=&nctemp6464;
nctempchar1* nctemp6461= nctemp6463;
int nctemp6465=LibeStrcmp(nctemp6456,nctemp6461);
int nctemp6453 = (nctemp6465 ==1);
if(nctemp6453)
{
struct tree* nctemp6468= sp;
struct nctempchar1 *nctemp6472;
static struct nctempchar1 nctemp6473 = {{ 7}, (char*)"nctemp\0"};
nctemp6472=&nctemp6473;
nctempchar1* nctemp6470= nctemp6472;
int nctemp6474=CodeEs(nctemp6468,nctemp6470);
struct tree* nctemp6476= sp;
struct tree* nctemp6480= sp;
nctempchar1* nctemp6482=PtreeGetype(nctemp6480);
nctempchar1* nctemp6478= nctemp6482;
int nctemp6483=CodeEs(nctemp6476,nctemp6478);
struct tree* nctemp6487= sp;
int nctemp6489=PtreeGetrank(nctemp6487);
int nctemp6485= nctemp6489;
int nctemp6490=CodeEd(nctemp6485);
struct tree* nctemp6492= sp;
struct nctempchar1 *nctemp6496;
static struct nctempchar1 nctemp6497 = {{ 2}, (char*)"*\0"};
nctemp6496=&nctemp6497;
nctempchar1* nctemp6494= nctemp6496;
int nctemp6498=CodeEs(nctemp6492,nctemp6494);
}
else{
struct tree* nctemp6504= sp;
nctempchar1* nctemp6506=PtreeGetref(nctemp6504);
nctempchar1* nctemp6502= nctemp6506;
struct nctempchar1 *nctemp6509;
static struct nctempchar1 nctemp6510 = {{ 5}, (char*)"sref\0"};
nctemp6509=&nctemp6510;
nctempchar1* nctemp6507= nctemp6509;
int nctemp6511=LibeStrcmp(nctemp6502,nctemp6507);
int nctemp6499 = (nctemp6511 ==1);
if(nctemp6499)
{
struct tree* nctemp6514= sp;
struct nctempchar1 *nctemp6518;
static struct nctempchar1 nctemp6519 = {{ 8}, (char*)"struct \0"};
nctemp6518=&nctemp6519;
nctempchar1* nctemp6516= nctemp6518;
int nctemp6520=CodeEs(nctemp6514,nctemp6516);
struct tree* nctemp6522= sp;
struct tree* nctemp6526= sp;
nctempchar1* nctemp6528=PtreeGetype(nctemp6526);
nctempchar1* nctemp6524= nctemp6528;
int nctemp6529=CodeEs(nctemp6522,nctemp6524);
struct tree* nctemp6531= sp;
struct nctempchar1 *nctemp6535;
static struct nctempchar1 nctemp6536 = {{ 2}, (char*)"*\0"};
nctemp6535=&nctemp6536;
nctempchar1* nctemp6533= nctemp6535;
int nctemp6537=CodeEs(nctemp6531,nctemp6533);
}
else{
struct tree* nctemp6539= sp;
struct tree* nctemp6543= sp;
nctempchar1* nctemp6545=PtreeGetype(nctemp6543);
nctempchar1* nctemp6541= nctemp6545;
int nctemp6546=CodeEs(nctemp6539,nctemp6541);
}
}
struct tree* nctemp6548= sp;
struct nctempchar1 *nctemp6552;
static struct nctempchar1 nctemp6553 = {{ 2}, (char*)" \0"};
nctemp6552=&nctemp6553;
nctempchar1* nctemp6550= nctemp6552;
int nctemp6554=CodeEs(nctemp6548,nctemp6550);
struct tree* nctemp6556= sp;
nctempchar1* nctemp6558= ntemp;
int nctemp6561=CodeEs(nctemp6556,nctemp6558);
struct tree* nctemp6563= sp;
struct nctempchar1 *nctemp6567;
static struct nctempchar1 nctemp6568 = {{ 3}, (char*)"= \0"};
nctemp6567=&nctemp6568;
nctempchar1* nctemp6565= nctemp6567;
int nctemp6569=CodeEs(nctemp6563,nctemp6565);
struct tree* nctemp6571= sp;
nctempchar1* nctemp6573= temp;
int nctemp6576=CodeEs(nctemp6571,nctemp6573);
struct tree* nctemp6578= sp;
struct nctempchar1 *nctemp6582;
static struct nctempchar1 nctemp6583 = {{ 4}, (char*)";\n\0"};
nctemp6582=&nctemp6583;
nctempchar1* nctemp6580= nctemp6582;
int nctemp6584=CodeEs(nctemp6578,nctemp6580);
struct tree* nctemp6589= sp;
struct tree* nctemp6591=PtreeMvsister(nctemp6589);
sp =nctemp6591;
}
int nctemp6592 = (sp !=0);
nctemp6431=nctemp6592;}nctempchar1* nctemp6601=CodeMktemp();
ntemp=nctemp6601;
struct tree* nctemp6607= p;
nctempchar1* nctemp6609=PtreeGetref(nctemp6607);
nctempchar1* nctemp6605= nctemp6609;
struct nctempchar1 *nctemp6612;
static struct nctempchar1 nctemp6613 = {{ 5}, (char*)"aref\0"};
nctemp6612=&nctemp6613;
nctempchar1* nctemp6610= nctemp6612;
int nctemp6614=LibeStrcmp(nctemp6605,nctemp6610);
int nctemp6602 = (nctemp6614 ==1);
if(nctemp6602)
{
struct tree* nctemp6617= p;
struct nctempchar1 *nctemp6621;
static struct nctempchar1 nctemp6622 = {{ 7}, (char*)"nctemp\0"};
nctemp6621=&nctemp6622;
nctempchar1* nctemp6619= nctemp6621;
int nctemp6623=CodeEs(nctemp6617,nctemp6619);
struct tree* nctemp6625= p;
struct tree* nctemp6629= p;
nctempchar1* nctemp6631=PtreeGetype(nctemp6629);
nctempchar1* nctemp6627= nctemp6631;
int nctemp6632=CodeEs(nctemp6625,nctemp6627);
struct tree* nctemp6636= p;
int nctemp6638=PtreeGetrank(nctemp6636);
int nctemp6634= nctemp6638;
int nctemp6639=CodeEd(nctemp6634);
struct tree* nctemp6641= p;
struct nctempchar1 *nctemp6645;
static struct nctempchar1 nctemp6646 = {{ 2}, (char*)"*\0"};
nctemp6645=&nctemp6646;
nctempchar1* nctemp6643= nctemp6645;
int nctemp6647=CodeEs(nctemp6641,nctemp6643);
}
else{
struct tree* nctemp6653= p;
nctempchar1* nctemp6655=PtreeGetref(nctemp6653);
nctempchar1* nctemp6651= nctemp6655;
struct nctempchar1 *nctemp6658;
static struct nctempchar1 nctemp6659 = {{ 5}, (char*)"sref\0"};
nctemp6658=&nctemp6659;
nctempchar1* nctemp6656= nctemp6658;
int nctemp6660=LibeStrcmp(nctemp6651,nctemp6656);
int nctemp6648 = (nctemp6660 ==1);
if(nctemp6648)
{
struct tree* nctemp6663= p;
struct nctempchar1 *nctemp6667;
static struct nctempchar1 nctemp6668 = {{ 8}, (char*)"struct \0"};
nctemp6667=&nctemp6668;
nctempchar1* nctemp6665= nctemp6667;
int nctemp6669=CodeEs(nctemp6663,nctemp6665);
struct tree* nctemp6671= p;
struct tree* nctemp6675= p;
nctempchar1* nctemp6677=PtreeGetype(nctemp6675);
nctempchar1* nctemp6673= nctemp6677;
int nctemp6678=CodeEs(nctemp6671,nctemp6673);
struct tree* nctemp6680= p;
struct nctempchar1 *nctemp6684;
static struct nctempchar1 nctemp6685 = {{ 2}, (char*)"*\0"};
nctemp6684=&nctemp6685;
nctempchar1* nctemp6682= nctemp6684;
int nctemp6686=CodeEs(nctemp6680,nctemp6682);
}
else{
struct tree* nctemp6688= p;
struct tree* nctemp6692= p;
nctempchar1* nctemp6694=PtreeGetype(nctemp6692);
nctempchar1* nctemp6690= nctemp6694;
int nctemp6695=CodeEs(nctemp6688,nctemp6690);
}
}
struct tree* nctemp6697= p;
struct nctempchar1 *nctemp6701;
static struct nctempchar1 nctemp6702 = {{ 2}, (char*)" \0"};
nctemp6701=&nctemp6702;
nctempchar1* nctemp6699= nctemp6701;
int nctemp6703=CodeEs(nctemp6697,nctemp6699);
struct tree* nctemp6705= p;
nctempchar1* nctemp6707= ntemp;
int nctemp6710=CodeEs(nctemp6705,nctemp6707);
struct tree* nctemp6712= p;
struct nctempchar1 *nctemp6716;
static struct nctempchar1 nctemp6717 = {{ 2}, (char*)"=\0"};
nctemp6716=&nctemp6717;
nctempchar1* nctemp6714= nctemp6716;
int nctemp6718=CodeEs(nctemp6712,nctemp6714);
struct tree* nctemp6720= p;
struct symbol* nctemp6724= tp;
nctempchar1* nctemp6726=SymGetname(nctemp6724);
nctempchar1* nctemp6722= nctemp6726;
int nctemp6727=CodeEs(nctemp6720,nctemp6722);
struct tree* nctemp6729= p;
struct nctempchar1 *nctemp6733;
static struct nctempchar1 nctemp6734 = {{ 2}, (char*)"(\0"};
nctemp6733=&nctemp6734;
nctempchar1* nctemp6731= nctemp6733;
int nctemp6735=CodeEs(nctemp6729,nctemp6731);
struct tree* nctemp6740= p;
struct tree* nctemp6742=PtreeMvchild(nctemp6740);
sp =nctemp6742;
int nctemp6743 = (sp !=0);
if(nctemp6743)
{
struct tree* nctemp6751= sp;
struct tree* nctemp6753=PtreeMvchild(nctemp6751);
sp =nctemp6753;
}
int nctemp6754 = (sp !=0);
int nctemp6758=nctemp6754;
while(nctemp6758)
{{
struct tree* nctemp6760= p;
struct tree* nctemp6764= sp;
nctempchar1* nctemp6766=PtreeGetempr(nctemp6764);
nctempchar1* nctemp6762= nctemp6766;
int nctemp6767=CodeEs(nctemp6760,nctemp6762);
struct tree* nctemp6775= sp;
struct tree* nctemp6777=PtreeMvsister(nctemp6775);
sp =nctemp6777;
int nctemp6768 = (sp !=0);
if(nctemp6768)
{
struct tree* nctemp6780= p;
struct nctempchar1 *nctemp6784;
static struct nctempchar1 nctemp6785 = {{ 2}, (char*)",\0"};
nctemp6784=&nctemp6785;
nctempchar1* nctemp6782= nctemp6784;
int nctemp6786=CodeEs(nctemp6780,nctemp6782);
}
int nctemp6795 = noargs + 1;
noargs =nctemp6795;
}
int nctemp6796 = (sp !=0);
nctemp6758=nctemp6796;}struct tree* nctemp6801= p;
struct nctempchar1 *nctemp6805;
static struct nctempchar1 nctemp6806 = {{ 5}, (char*)");\n\0"};
nctemp6805=&nctemp6806;
nctempchar1* nctemp6803= nctemp6805;
int nctemp6807=CodeEs(nctemp6801,nctemp6803);
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
nctempchar1* nctemp6815=CodeMktemp();
pointer=nctemp6815;
nctempchar1* nctemp6821=CodeMktemp();
descr=nctemp6821;
struct tree* nctemp6827= p;
nctempchar1* nctemp6829=PtreeGetype(nctemp6827);
type=nctemp6829;
struct tree* nctemp6835= p;
nctempchar1* nctemp6837=PtreeGetname(nctemp6835);
nctempchar1* nctemp6833= nctemp6837;
struct nctempchar1 *nctemp6840;
static struct nctempchar1 nctemp6841 = {{ 5}, (char*)"cast\0"};
nctemp6840=&nctemp6841;
nctempchar1* nctemp6838= nctemp6840;
int nctemp6842=LibeStrcmp(nctemp6833,nctemp6838);
int nctemp6830 = (nctemp6842 ==1);
if(nctemp6830)
{
struct tree* nctemp6848= p;
struct tree* nctemp6850=PtreeMvchild(nctemp6848);
np =nctemp6850;
struct tree* nctemp6855= np;
struct tree* nctemp6857=PtreeMvsister(nctemp6855);
sp =nctemp6857;
struct tree* nctemp6863= sp;
nctempchar1* nctemp6865=CodeExpr(nctemp6863);
expr=nctemp6865;
struct tree* nctemp6871= np;
nctempchar1* nctemp6873=PtreeGetref(nctemp6871);
nctempchar1* nctemp6869= nctemp6873;
struct nctempchar1 *nctemp6876;
static struct nctempchar1 nctemp6877 = {{ 5}, (char*)"sref\0"};
nctemp6876=&nctemp6877;
nctempchar1* nctemp6874= nctemp6876;
int nctemp6878=LibeStrcmp(nctemp6869,nctemp6874);
int nctemp6866 = (nctemp6878 ==1);
if(nctemp6866)
{
nctempchar1* nctemp6885=CodeMktemp();
tmp=nctemp6885;
struct tree* nctemp6887= p;
nctempchar1* nctemp6889= type;
int nctemp6892=CodeEs(nctemp6887,nctemp6889);
struct tree* nctemp6894= p;
struct nctempchar1 *nctemp6898;
static struct nctempchar1 nctemp6899 = {{ 2}, (char*)" \0"};
nctemp6898=&nctemp6899;
nctempchar1* nctemp6896= nctemp6898;
int nctemp6900=CodeEs(nctemp6894,nctemp6896);
struct tree* nctemp6902= p;
nctempchar1* nctemp6904= tmp;
int nctemp6907=CodeEs(nctemp6902,nctemp6904);
struct tree* nctemp6909= p;
struct nctempchar1 *nctemp6913;
static struct nctempchar1 nctemp6914 = {{ 2}, (char*)"=\0"};
nctemp6913=&nctemp6914;
nctempchar1* nctemp6911= nctemp6913;
int nctemp6915=CodeEs(nctemp6909,nctemp6911);
struct tree* nctemp6917= p;
struct nctempchar1 *nctemp6921;
static struct nctempchar1 nctemp6922 = {{ 9}, (char*)"(struct \0"};
nctemp6921=&nctemp6922;
nctempchar1* nctemp6919= nctemp6921;
int nctemp6923=CodeEs(nctemp6917,nctemp6919);
struct tree* nctemp6925= p;
struct tree* nctemp6929= np;
nctempchar1* nctemp6931=PtreeGetype(nctemp6929);
nctempchar1* nctemp6927= nctemp6931;
int nctemp6932=CodeEs(nctemp6925,nctemp6927);
struct tree* nctemp6934= p;
struct nctempchar1 *nctemp6938;
static struct nctempchar1 nctemp6939 = {{ 4}, (char*)"*)(\0"};
nctemp6938=&nctemp6939;
nctempchar1* nctemp6936= nctemp6938;
int nctemp6940=CodeEs(nctemp6934,nctemp6936);
struct tree* nctemp6942= p;
nctempchar1* nctemp6944= expr;
int nctemp6947=CodeEs(nctemp6942,nctemp6944);
struct tree* nctemp6949= p;
struct nctempchar1 *nctemp6953;
static struct nctempchar1 nctemp6954 = {{ 5}, (char*)");\n\0"};
nctemp6953=&nctemp6954;
nctempchar1* nctemp6951= nctemp6953;
int nctemp6955=CodeEs(nctemp6949,nctemp6951);
}
else{
struct tree* nctemp6961= np;
nctempchar1* nctemp6963=PtreeGetref(nctemp6961);
nctempchar1* nctemp6959= nctemp6963;
struct nctempchar1 *nctemp6966;
static struct nctempchar1 nctemp6967 = {{ 5}, (char*)"aref\0"};
nctemp6966=&nctemp6967;
nctempchar1* nctemp6964= nctemp6966;
int nctemp6968=LibeStrcmp(nctemp6959,nctemp6964);
int nctemp6956 = (nctemp6968 ==1);
if(nctemp6956)
{
struct tree* nctemp6974= np;
struct tree* nctemp6976=PtreeMvchild(nctemp6974);
np =nctemp6976;
struct tree* nctemp6981= np;
struct tree* nctemp6983=PtreeMvchild(nctemp6981);
np =nctemp6983;
struct tree* nctemp6988= np;
struct tree* nctemp6990=PtreeMvchild(nctemp6988);
np =nctemp6990;
struct tree* nctemp6995= np;
struct tree* nctemp6997=PtreeMvchild(nctemp6995);
np =nctemp6997;
tp =np;
rank =1;
struct tree* nctemp7013= np;
struct tree* nctemp7015=PtreeMvsister(nctemp7013);
np =nctemp7015;
int nctemp7006 = (np !=0);
int nctemp7017=nctemp7006;
while(nctemp7017)
{{
int nctemp7026 = rank + 1;
rank =nctemp7026;
}
struct tree* nctemp7034= np;
struct tree* nctemp7036=PtreeMvsister(nctemp7034);
np =nctemp7036;
int nctemp7027 = (np !=0);
nctemp7017=nctemp7027;}int nctemp7038 = (rank > 4);
if(nctemp7038)
{
struct nctempchar1 *nctemp7045;
static struct nctempchar1 nctemp7046 = {{ 29}, (char*)"Array dimension is too large\0"};
nctemp7045=&nctemp7046;
nctempchar1* nctemp7043= nctemp7045;
int nctemp7047=CodeError(nctemp7043);
}
p =tp;
struct tree* nctemp7053= p;
struct nctempchar1 *nctemp7057;
static struct nctempchar1 nctemp7058 = {{ 7}, (char*)"nctemp\0"};
nctemp7057=&nctemp7058;
nctempchar1* nctemp7055= nctemp7057;
int nctemp7059=CodeEs(nctemp7053,nctemp7055);
struct tree* nctemp7061= p;
nctempchar1* nctemp7063= type;
int nctemp7066=CodeEs(nctemp7061,nctemp7063);
int nctemp7068= rank;
int nctemp7070=CodeEd(nctemp7068);
struct tree* nctemp7072= p;
struct nctempchar1 *nctemp7076;
static struct nctempchar1 nctemp7077 = {{ 2}, (char*)" \0"};
nctemp7076=&nctemp7077;
nctempchar1* nctemp7074= nctemp7076;
int nctemp7078=CodeEs(nctemp7072,nctemp7074);
struct tree* nctemp7080= sp;
nctempchar1* nctemp7082= descr;
int nctemp7085=CodeEs(nctemp7080,nctemp7082);
struct tree* nctemp7087= sp;
struct nctempchar1 *nctemp7091;
static struct nctempchar1 nctemp7092 = {{ 4}, (char*)";\n\0"};
nctemp7091=&nctemp7092;
nctempchar1* nctemp7089= nctemp7091;
int nctemp7093=CodeEs(nctemp7087,nctemp7089);
struct tree* nctemp7095= p;
struct nctempchar1 *nctemp7099;
static struct nctempchar1 nctemp7100 = {{ 7}, (char*)"nctemp\0"};
nctemp7099=&nctemp7100;
nctempchar1* nctemp7097= nctemp7099;
int nctemp7101=CodeEs(nctemp7095,nctemp7097);
struct tree* nctemp7103= p;
nctempchar1* nctemp7105= type;
int nctemp7108=CodeEs(nctemp7103,nctemp7105);
int nctemp7110= rank;
int nctemp7112=CodeEd(nctemp7110);
struct tree* nctemp7114= p;
struct nctempchar1 *nctemp7118;
static struct nctempchar1 nctemp7119 = {{ 3}, (char*)" *\0"};
nctemp7118=&nctemp7119;
nctempchar1* nctemp7116= nctemp7118;
int nctemp7120=CodeEs(nctemp7114,nctemp7116);
struct tree* nctemp7122= sp;
nctempchar1* nctemp7124= pointer;
int nctemp7127=CodeEs(nctemp7122,nctemp7124);
struct tree* nctemp7129= p;
struct nctempchar1 *nctemp7133;
static struct nctempchar1 nctemp7134 = {{ 4}, (char*)";\n\0"};
nctemp7133=&nctemp7134;
nctempchar1* nctemp7131= nctemp7133;
int nctemp7135=CodeEs(nctemp7129,nctemp7131);
struct tree* nctemp7137= sp;
nctempchar1* nctemp7139= descr;
int nctemp7142=CodeEs(nctemp7137,nctemp7139);
struct tree* nctemp7144= sp;
struct nctempchar1 *nctemp7148;
static struct nctempchar1 nctemp7149 = {{ 2}, (char*)"=\0"};
nctemp7148=&nctemp7149;
nctempchar1* nctemp7146= nctemp7148;
int nctemp7150=CodeEs(nctemp7144,nctemp7146);
struct tree* nctemp7152= sp;
struct nctempchar1 *nctemp7156;
static struct nctempchar1 nctemp7157 = {{ 3}, (char*)"*(\0"};
nctemp7156=&nctemp7157;
nctempchar1* nctemp7154= nctemp7156;
int nctemp7158=CodeEs(nctemp7152,nctemp7154);
struct tree* nctemp7160= p;
struct nctempchar1 *nctemp7164;
static struct nctempchar1 nctemp7165 = {{ 7}, (char*)"nctemp\0"};
nctemp7164=&nctemp7165;
nctempchar1* nctemp7162= nctemp7164;
int nctemp7166=CodeEs(nctemp7160,nctemp7162);
struct tree* nctemp7168= sp;
nctempchar1* nctemp7170= type;
int nctemp7173=CodeEs(nctemp7168,nctemp7170);
int nctemp7175= rank;
int nctemp7177=CodeEd(nctemp7175);
struct tree* nctemp7179= sp;
struct nctempchar1 *nctemp7183;
static struct nctempchar1 nctemp7184 = {{ 4}, (char*)"*)(\0"};
nctemp7183=&nctemp7184;
nctempchar1* nctemp7181= nctemp7183;
int nctemp7185=CodeEs(nctemp7179,nctemp7181);
struct tree* nctemp7187= sp;
nctempchar1* nctemp7189= expr;
int nctemp7192=CodeEs(nctemp7187,nctemp7189);
struct tree* nctemp7194= sp;
struct nctempchar1 *nctemp7198;
static struct nctempchar1 nctemp7199 = {{ 5}, (char*)");\n\0"};
nctemp7198=&nctemp7199;
nctempchar1* nctemp7196= nctemp7198;
int nctemp7200=CodeEs(nctemp7194,nctemp7196);
p =tp;
i =0;
int nctemp7209 = (p !=0);
int nctemp7213=nctemp7209;
while(nctemp7213)
{{
struct tree* nctemp7219= p;
nctempchar1* nctemp7221=CodeExpr(nctemp7219);
dim=nctemp7221;
struct tree* nctemp7223= sp;
nctempchar1* nctemp7225= descr;
int nctemp7228=CodeEs(nctemp7223,nctemp7225);
struct tree* nctemp7230= sp;
struct nctempchar1 *nctemp7234;
static struct nctempchar1 nctemp7235 = {{ 3}, (char*)".d\0"};
nctemp7234=&nctemp7235;
nctempchar1* nctemp7232= nctemp7234;
int nctemp7236=CodeEs(nctemp7230,nctemp7232);
struct tree* nctemp7238= sp;
struct nctempchar1 *nctemp7242;
static struct nctempchar1 nctemp7243 = {{ 2}, (char*)"[\0"};
nctemp7242=&nctemp7243;
nctempchar1* nctemp7240= nctemp7242;
int nctemp7244=CodeEs(nctemp7238,nctemp7240);
int nctemp7246= i;
int nctemp7248=CodeEd(nctemp7246);
struct tree* nctemp7250= sp;
struct nctempchar1 *nctemp7254;
static struct nctempchar1 nctemp7255 = {{ 3}, (char*)"]=\0"};
nctemp7254=&nctemp7255;
nctempchar1* nctemp7252= nctemp7254;
int nctemp7256=CodeEs(nctemp7250,nctemp7252);
struct tree* nctemp7258= sp;
nctempchar1* nctemp7260= dim;
int nctemp7263=CodeEs(nctemp7258,nctemp7260);
struct tree* nctemp7265= sp;
struct nctempchar1 *nctemp7269;
static struct nctempchar1 nctemp7270 = {{ 4}, (char*)";\n\0"};
nctemp7269=&nctemp7270;
nctempchar1* nctemp7267= nctemp7269;
int nctemp7271=CodeEs(nctemp7265,nctemp7267);
int nctemp7280 = i + 1;
i =nctemp7280;
struct tree* nctemp7285= p;
struct tree* nctemp7287=PtreeMvsister(nctemp7285);
p =nctemp7287;
}
int nctemp7288 = (p !=0);
nctemp7213=nctemp7288;}struct tree* nctemp7293= sp;
nctempchar1* nctemp7295= pointer;
int nctemp7298=CodeEs(nctemp7293,nctemp7295);
struct tree* nctemp7300= sp;
struct nctempchar1 *nctemp7304;
static struct nctempchar1 nctemp7305 = {{ 3}, (char*)"=&\0"};
nctemp7304=&nctemp7305;
nctempchar1* nctemp7302= nctemp7304;
int nctemp7306=CodeEs(nctemp7300,nctemp7302);
struct tree* nctemp7308= sp;
nctempchar1* nctemp7310= descr;
int nctemp7313=CodeEs(nctemp7308,nctemp7310);
struct tree* nctemp7315= sp;
struct nctempchar1 *nctemp7319;
static struct nctempchar1 nctemp7320 = {{ 4}, (char*)";\n\0"};
nctemp7319=&nctemp7320;
nctempchar1* nctemp7317= nctemp7319;
int nctemp7321=CodeEs(nctemp7315,nctemp7317);
}
else{
struct tree* nctemp7323= p;
nctempchar1* nctemp7325= type;
int nctemp7328=CodeEs(nctemp7323,nctemp7325);
struct tree* nctemp7330= p;
struct nctempchar1 *nctemp7334;
static struct nctempchar1 nctemp7335 = {{ 2}, (char*)" \0"};
nctemp7334=&nctemp7335;
nctempchar1* nctemp7332= nctemp7334;
int nctemp7336=CodeEs(nctemp7330,nctemp7332);
struct tree* nctemp7338= p;
nctempchar1* nctemp7340= pointer;
int nctemp7343=CodeEs(nctemp7338,nctemp7340);
struct tree* nctemp7345= p;
struct nctempchar1 *nctemp7349;
static struct nctempchar1 nctemp7350 = {{ 2}, (char*)"=\0"};
nctemp7349=&nctemp7350;
nctempchar1* nctemp7347= nctemp7349;
int nctemp7351=CodeEs(nctemp7345,nctemp7347);
struct tree* nctemp7353= p;
struct nctempchar1 *nctemp7357;
static struct nctempchar1 nctemp7358 = {{ 2}, (char*)"(\0"};
nctemp7357=&nctemp7358;
nctempchar1* nctemp7355= nctemp7357;
int nctemp7359=CodeEs(nctemp7353,nctemp7355);
struct tree* nctemp7361= p;
struct tree* nctemp7365= np;
nctempchar1* nctemp7367=PtreeGetype(nctemp7365);
nctempchar1* nctemp7363= nctemp7367;
int nctemp7368=CodeEs(nctemp7361,nctemp7363);
struct tree* nctemp7370= p;
struct nctempchar1 *nctemp7374;
static struct nctempchar1 nctemp7375 = {{ 3}, (char*)")(\0"};
nctemp7374=&nctemp7375;
nctempchar1* nctemp7372= nctemp7374;
int nctemp7376=CodeEs(nctemp7370,nctemp7372);
struct tree* nctemp7378= p;
nctempchar1* nctemp7380= expr;
int nctemp7383=CodeEs(nctemp7378,nctemp7380);
struct tree* nctemp7385= p;
struct nctempchar1 *nctemp7389;
static struct nctempchar1 nctemp7390 = {{ 5}, (char*)");\n\0"};
nctemp7389=&nctemp7390;
nctempchar1* nctemp7387= nctemp7389;
int nctemp7391=CodeEs(nctemp7385,nctemp7387);
}
}
}
return pointer;
}
nctempchar1 * CodePrimexpr (struct tree* p)
{
struct tree* nctemp7399= p;
nctempchar1* nctemp7401=PtreeGetname(nctemp7399);
nctempchar1* nctemp7397= nctemp7401;
struct nctempchar1 *nctemp7404;
static struct nctempchar1 nctemp7405 = {{ 11}, (char*)"identifier\0"};
nctemp7404=&nctemp7405;
nctempchar1* nctemp7402= nctemp7404;
int nctemp7406=LibeStrcmp(nctemp7397,nctemp7402);
int nctemp7394 = (nctemp7406 ==1);
if(nctemp7394)
{
struct tree* nctemp7409= p;
nctempchar1* nctemp7411=CodeIdent(nctemp7409);
return nctemp7411;
}
else{
struct tree* nctemp7417= p;
nctempchar1* nctemp7419=PtreeGetname(nctemp7417);
nctempchar1* nctemp7415= nctemp7419;
struct nctempchar1 *nctemp7422;
static struct nctempchar1 nctemp7423 = {{ 4}, (char*)"new\0"};
nctemp7422=&nctemp7423;
nctempchar1* nctemp7420= nctemp7422;
int nctemp7424=LibeStrcmp(nctemp7415,nctemp7420);
int nctemp7412 = (nctemp7424 ==1);
if(nctemp7412)
{
struct tree* nctemp7427= p;
nctempchar1* nctemp7429=CodeNew(nctemp7427);
return nctemp7429;
}
else{
struct tree* nctemp7435= p;
nctempchar1* nctemp7437=PtreeGetname(nctemp7435);
nctempchar1* nctemp7433= nctemp7437;
struct nctempchar1 *nctemp7440;
static struct nctempchar1 nctemp7441 = {{ 7}, (char*)"delete\0"};
nctemp7440=&nctemp7441;
nctempchar1* nctemp7438= nctemp7440;
int nctemp7442=LibeStrcmp(nctemp7433,nctemp7438);
int nctemp7430 = (nctemp7442 ==1);
if(nctemp7430)
{
struct tree* nctemp7445= p;
nctempchar1* nctemp7447=CodeDelete(nctemp7445);
return nctemp7447;
}
else{
struct tree* nctemp7453= p;
nctempchar1* nctemp7455=PtreeGetname(nctemp7453);
nctempchar1* nctemp7451= nctemp7455;
struct nctempchar1 *nctemp7458;
static struct nctempchar1 nctemp7459 = {{ 4}, (char*)"len\0"};
nctemp7458=&nctemp7459;
nctempchar1* nctemp7456= nctemp7458;
int nctemp7460=LibeStrcmp(nctemp7451,nctemp7456);
int nctemp7448 = (nctemp7460 ==1);
if(nctemp7448)
{
struct tree* nctemp7463= p;
nctempchar1* nctemp7465=CodeLen(nctemp7463);
return nctemp7465;
}
else{
struct tree* nctemp7471= p;
nctempchar1* nctemp7473=PtreeGetname(nctemp7471);
nctempchar1* nctemp7469= nctemp7473;
struct nctempchar1 *nctemp7476;
static struct nctempchar1 nctemp7477 = {{ 6}, (char*)"cmplx\0"};
nctemp7476=&nctemp7477;
nctempchar1* nctemp7474= nctemp7476;
int nctemp7478=LibeStrcmp(nctemp7469,nctemp7474);
int nctemp7466 = (nctemp7478 ==1);
if(nctemp7466)
{
struct tree* nctemp7481= p;
nctempchar1* nctemp7483=CodeCmplx(nctemp7481);
return nctemp7483;
}
else{
struct tree* nctemp7489= p;
nctempchar1* nctemp7491=PtreeGetname(nctemp7489);
nctempchar1* nctemp7487= nctemp7491;
struct nctempchar1 *nctemp7494;
static struct nctempchar1 nctemp7495 = {{ 3}, (char*)"im\0"};
nctemp7494=&nctemp7495;
nctempchar1* nctemp7492= nctemp7494;
int nctemp7496=LibeStrcmp(nctemp7487,nctemp7492);
int nctemp7484 = (nctemp7496 ==1);
if(nctemp7484)
{
struct tree* nctemp7499= p;
nctempchar1* nctemp7501=CodeIm(nctemp7499);
return nctemp7501;
}
else{
struct tree* nctemp7507= p;
nctempchar1* nctemp7509=PtreeGetname(nctemp7507);
nctempchar1* nctemp7505= nctemp7509;
struct nctempchar1 *nctemp7512;
static struct nctempchar1 nctemp7513 = {{ 3}, (char*)"re\0"};
nctemp7512=&nctemp7513;
nctempchar1* nctemp7510= nctemp7512;
int nctemp7514=LibeStrcmp(nctemp7505,nctemp7510);
int nctemp7502 = (nctemp7514 ==1);
if(nctemp7502)
{
struct tree* nctemp7517= p;
nctempchar1* nctemp7519=CodeRe(nctemp7517);
return nctemp7519;
}
else{
struct tree* nctemp7525= p;
nctempchar1* nctemp7527=PtreeGetname(nctemp7525);
nctempchar1* nctemp7523= nctemp7527;
struct nctempchar1 *nctemp7530;
static struct nctempchar1 nctemp7531 = {{ 6}, (char*)"fcall\0"};
nctemp7530=&nctemp7531;
nctempchar1* nctemp7528= nctemp7530;
int nctemp7532=LibeStrcmp(nctemp7523,nctemp7528);
int nctemp7520 = (nctemp7532 ==1);
if(nctemp7520)
{
struct tree* nctemp7535= p;
nctempchar1* nctemp7537=CodeFcall(nctemp7535);
return nctemp7537;
}
else{
struct tree* nctemp7543= p;
nctempchar1* nctemp7545=PtreeGetname(nctemp7543);
nctempchar1* nctemp7541= nctemp7545;
struct nctempchar1 *nctemp7548;
static struct nctempchar1 nctemp7549 = {{ 5}, (char*)"cast\0"};
nctemp7548=&nctemp7549;
nctempchar1* nctemp7546= nctemp7548;
int nctemp7550=LibeStrcmp(nctemp7541,nctemp7546);
int nctemp7538 = (nctemp7550 ==1);
if(nctemp7538)
{
struct tree* nctemp7553= p;
nctempchar1* nctemp7555=CodeCast(nctemp7553);
return nctemp7555;
}
else{
struct tree* nctemp7561= p;
nctempchar1* nctemp7563=PtreeGetname(nctemp7561);
nctempchar1* nctemp7559= nctemp7563;
struct nctempchar1 *nctemp7566;
static struct nctempchar1 nctemp7567 = {{ 10}, (char*)"iconstant\0"};
nctemp7566=&nctemp7567;
nctempchar1* nctemp7564= nctemp7566;
int nctemp7568=LibeStrcmp(nctemp7559,nctemp7564);
int nctemp7556 = (nctemp7568 ==1);
if(nctemp7556)
{
struct tree* nctemp7571= p;
nctempchar1* nctemp7573=PtreeGetdef(nctemp7571);
return nctemp7573;
}
else{
struct tree* nctemp7579= p;
nctempchar1* nctemp7581=PtreeGetname(nctemp7579);
nctempchar1* nctemp7577= nctemp7581;
struct nctempchar1 *nctemp7584;
static struct nctempchar1 nctemp7585 = {{ 10}, (char*)"rconstant\0"};
nctemp7584=&nctemp7585;
nctempchar1* nctemp7582= nctemp7584;
int nctemp7586=LibeStrcmp(nctemp7577,nctemp7582);
int nctemp7574 = (nctemp7586 ==1);
if(nctemp7574)
{
struct tree* nctemp7589= p;
nctempchar1* nctemp7591=PtreeGetdef(nctemp7589);
return nctemp7591;
}
else{
struct tree* nctemp7597= p;
nctempchar1* nctemp7599=PtreeGetname(nctemp7597);
nctempchar1* nctemp7595= nctemp7599;
struct nctempchar1 *nctemp7602;
static struct nctempchar1 nctemp7603 = {{ 10}, (char*)"sconstant\0"};
nctemp7602=&nctemp7603;
nctempchar1* nctemp7600= nctemp7602;
int nctemp7604=LibeStrcmp(nctemp7595,nctemp7600);
int nctemp7592 = (nctemp7604 ==1);
if(nctemp7592)
{
struct tree* nctemp7607= p;
nctempchar1* nctemp7609=CodeSconstant(nctemp7607);
return nctemp7609;
}
else{
struct tree* nctemp7611= p;
nctempchar1* nctemp7613=CodeBinexpr(nctemp7611);
return nctemp7613;
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
nctempchar1* nctemp7619=CodeMktemp();
tempr=nctemp7619;
struct tree* nctemp7625= p;
nctempchar1* nctemp7627=PtreeGetname(nctemp7625);
nctempchar1* nctemp7623= nctemp7627;
struct nctempchar1 *nctemp7630;
static struct nctempchar1 nctemp7631 = {{ 7}, (char*)"unexpr\0"};
nctemp7630=&nctemp7631;
nctempchar1* nctemp7628= nctemp7630;
int nctemp7632=LibeStrcmp(nctemp7623,nctemp7628);
int nctemp7620 = (nctemp7632 ==1);
if(nctemp7620)
{
struct tree* nctemp7639= p;
nctempchar1* nctemp7641=PtreeGetype(nctemp7639);
nctempchar1* nctemp7637= nctemp7641;
struct nctempchar1 *nctemp7644;
static struct nctempchar1 nctemp7645 = {{ 8}, (char*)"complex\0"};
nctemp7644=&nctemp7645;
nctempchar1* nctemp7642= nctemp7644;
int nctemp7646=LibeStrcmp(nctemp7637,nctemp7642);
int nctemp7634 = (nctemp7646 ==1);
if(nctemp7634)
{
struct tree* nctemp7655= p;
struct tree* nctemp7657=PtreeMvchild(nctemp7655);
struct tree* nctemp7653= nctemp7657;
nctempchar1* nctemp7658=CodePrimexpr(nctemp7653);
tmp=nctemp7658;
struct tree* nctemp7660= p;
struct nctempchar1 *nctemp7664;
static struct nctempchar1 nctemp7665 = {{ 4}, (char*)";\n\0"};
nctemp7664=&nctemp7665;
nctempchar1* nctemp7662= nctemp7664;
int nctemp7666=CodeEs(nctemp7660,nctemp7662);
struct tree* nctemp7668= p;
nctempchar1* nctemp7670= tempr;
int nctemp7673=CodeEs(nctemp7668,nctemp7670);
struct tree* nctemp7675= p;
struct nctempchar1 *nctemp7679;
static struct nctempchar1 nctemp7680 = {{ 3}, (char*)".r\0"};
nctemp7679=&nctemp7680;
nctempchar1* nctemp7677= nctemp7679;
int nctemp7681=CodeEs(nctemp7675,nctemp7677);
struct tree* nctemp7683= p;
struct nctempchar1 *nctemp7687;
static struct nctempchar1 nctemp7688 = {{ 4}, (char*)"= -\0"};
nctemp7687=&nctemp7688;
nctempchar1* nctemp7685= nctemp7687;
int nctemp7689=CodeEs(nctemp7683,nctemp7685);
struct tree* nctemp7691= p;
nctempchar1* nctemp7693= tmp;
int nctemp7696=CodeEs(nctemp7691,nctemp7693);
struct tree* nctemp7698= p;
struct nctempchar1 *nctemp7702;
static struct nctempchar1 nctemp7703 = {{ 3}, (char*)".r\0"};
nctemp7702=&nctemp7703;
nctempchar1* nctemp7700= nctemp7702;
int nctemp7704=CodeEs(nctemp7698,nctemp7700);
struct tree* nctemp7706= p;
struct nctempchar1 *nctemp7710;
static struct nctempchar1 nctemp7711 = {{ 4}, (char*)";\n\0"};
nctemp7710=&nctemp7711;
nctempchar1* nctemp7708= nctemp7710;
int nctemp7712=CodeEs(nctemp7706,nctemp7708);
struct tree* nctemp7714= p;
nctempchar1* nctemp7716= tempr;
int nctemp7719=CodeEs(nctemp7714,nctemp7716);
struct tree* nctemp7721= p;
struct nctempchar1 *nctemp7725;
static struct nctempchar1 nctemp7726 = {{ 3}, (char*)".i\0"};
nctemp7725=&nctemp7726;
nctempchar1* nctemp7723= nctemp7725;
int nctemp7727=CodeEs(nctemp7721,nctemp7723);
struct tree* nctemp7729= p;
struct nctempchar1 *nctemp7733;
static struct nctempchar1 nctemp7734 = {{ 4}, (char*)"= -\0"};
nctemp7733=&nctemp7734;
nctempchar1* nctemp7731= nctemp7733;
int nctemp7735=CodeEs(nctemp7729,nctemp7731);
struct tree* nctemp7737= p;
nctempchar1* nctemp7739= tmp;
int nctemp7742=CodeEs(nctemp7737,nctemp7739);
struct tree* nctemp7744= p;
struct nctempchar1 *nctemp7748;
static struct nctempchar1 nctemp7749 = {{ 3}, (char*)".i\0"};
nctemp7748=&nctemp7749;
nctempchar1* nctemp7746= nctemp7748;
int nctemp7750=CodeEs(nctemp7744,nctemp7746);
struct tree* nctemp7752= p;
struct nctempchar1 *nctemp7756;
static struct nctempchar1 nctemp7757 = {{ 4}, (char*)";\n\0"};
nctemp7756=&nctemp7757;
nctempchar1* nctemp7754= nctemp7756;
int nctemp7758=CodeEs(nctemp7752,nctemp7754);
return tempr;
}
else{
struct tree* nctemp7768= p;
struct tree* nctemp7770=PtreeMvchild(nctemp7768);
struct tree* nctemp7766= nctemp7770;
nctempchar1* nctemp7771=CodePrimexpr(nctemp7766);
tmp=nctemp7771;
struct tree* nctemp7773= p;
struct tree* nctemp7777= p;
nctempchar1* nctemp7779=PtreeGetype(nctemp7777);
nctempchar1* nctemp7775= nctemp7779;
int nctemp7780=CodeEs(nctemp7773,nctemp7775);
struct tree* nctemp7782= p;
struct nctempchar1 *nctemp7786;
static struct nctempchar1 nctemp7787 = {{ 2}, (char*)" \0"};
nctemp7786=&nctemp7787;
nctempchar1* nctemp7784= nctemp7786;
int nctemp7788=CodeEs(nctemp7782,nctemp7784);
struct tree* nctemp7790= p;
nctempchar1* nctemp7792= tempr;
int nctemp7795=CodeEs(nctemp7790,nctemp7792);
struct tree* nctemp7797= p;
struct nctempchar1 *nctemp7801;
static struct nctempchar1 nctemp7802 = {{ 4}, (char*)"= -\0"};
nctemp7801=&nctemp7802;
nctempchar1* nctemp7799= nctemp7801;
int nctemp7803=CodeEs(nctemp7797,nctemp7799);
struct tree* nctemp7805= p;
nctempchar1* nctemp7807= tmp;
int nctemp7810=CodeEs(nctemp7805,nctemp7807);
struct tree* nctemp7812= p;
struct nctempchar1 *nctemp7816;
static struct nctempchar1 nctemp7817 = {{ 4}, (char*)";\n\0"};
nctemp7816=&nctemp7817;
nctempchar1* nctemp7814= nctemp7816;
int nctemp7818=CodeEs(nctemp7812,nctemp7814);
return tempr;
}
}
else{
struct tree* nctemp7822= p;
nctempchar1* nctemp7824=CodePrimexpr(nctemp7822);
return nctemp7824;
}
}
nctempchar1 * CodeAddexpr (struct tree* p,nctempchar1 *lval,nctempchar1 *rval)
{
nctempchar1 *type;
nctempchar1 *tempr;
nctempchar1 *opr;
struct tree* nctemp7830= p;
nctempchar1* nctemp7832=PtreeGetype(nctemp7830);
type=nctemp7832;
nctempchar1* nctemp7838=CodeMktemp();
tempr=nctemp7838;
struct tree* nctemp7844= p;
nctempchar1* nctemp7846=PtreeGetdef(nctemp7844);
opr=nctemp7846;
nctempchar1* nctemp7850= type;
struct nctempchar1 *nctemp7855;
static struct nctempchar1 nctemp7856 = {{ 8}, (char*)"complex\0"};
nctemp7855=&nctemp7856;
nctempchar1* nctemp7853= nctemp7855;
int nctemp7857=LibeStrcmp(nctemp7850,nctemp7853);
int nctemp7847 = (nctemp7857 ==1);
if(nctemp7847)
{
nctempchar1* nctemp7865= opr;
struct nctempchar1 *nctemp7870;
static struct nctempchar1 nctemp7871 = {{ 2}, (char*)"+\0"};
nctemp7870=&nctemp7871;
nctempchar1* nctemp7868= nctemp7870;
int nctemp7872=LibeStrcmp(nctemp7865,nctemp7868);
int nctemp7862 = (nctemp7872 ==1);
nctempchar1* nctemp7878= opr;
struct nctempchar1 *nctemp7883;
static struct nctempchar1 nctemp7884 = {{ 2}, (char*)"-\0"};
nctemp7883=&nctemp7884;
nctempchar1* nctemp7881= nctemp7883;
int nctemp7885=LibeStrcmp(nctemp7878,nctemp7881);
int nctemp7875 = (nctemp7885 ==1);
int nctemp7859 = (nctemp7862 || nctemp7875);
if(nctemp7859)
{
struct tree* nctemp7888= p;
nctempchar1* nctemp7890= type;
int nctemp7893=CodeEs(nctemp7888,nctemp7890);
struct tree* nctemp7895= p;
struct nctempchar1 *nctemp7899;
static struct nctempchar1 nctemp7900 = {{ 2}, (char*)" \0"};
nctemp7899=&nctemp7900;
nctempchar1* nctemp7897= nctemp7899;
int nctemp7901=CodeEs(nctemp7895,nctemp7897);
struct tree* nctemp7903= p;
nctempchar1* nctemp7905= tempr;
int nctemp7908=CodeEs(nctemp7903,nctemp7905);
struct tree* nctemp7910= p;
struct nctempchar1 *nctemp7914;
static struct nctempchar1 nctemp7915 = {{ 3}, (char*)".r\0"};
nctemp7914=&nctemp7915;
nctempchar1* nctemp7912= nctemp7914;
int nctemp7916=CodeEs(nctemp7910,nctemp7912);
struct tree* nctemp7918= p;
struct nctempchar1 *nctemp7922;
static struct nctempchar1 nctemp7923 = {{ 4}, (char*)" = \0"};
nctemp7922=&nctemp7923;
nctempchar1* nctemp7920= nctemp7922;
int nctemp7924=CodeEs(nctemp7918,nctemp7920);
struct tree* nctemp7926= p;
nctempchar1* nctemp7928= lval;
int nctemp7931=CodeEs(nctemp7926,nctemp7928);
struct tree* nctemp7933= p;
struct nctempchar1 *nctemp7937;
static struct nctempchar1 nctemp7938 = {{ 3}, (char*)".r\0"};
nctemp7937=&nctemp7938;
nctempchar1* nctemp7935= nctemp7937;
int nctemp7939=CodeEs(nctemp7933,nctemp7935);
struct tree* nctemp7941= p;
struct nctempchar1 *nctemp7945;
static struct nctempchar1 nctemp7946 = {{ 2}, (char*)" \0"};
nctemp7945=&nctemp7946;
nctempchar1* nctemp7943= nctemp7945;
int nctemp7947=CodeEs(nctemp7941,nctemp7943);
struct tree* nctemp7949= p;
struct tree* nctemp7953= p;
nctempchar1* nctemp7955=PtreeGetdef(nctemp7953);
nctempchar1* nctemp7951= nctemp7955;
int nctemp7956=CodeEs(nctemp7949,nctemp7951);
struct tree* nctemp7958= p;
struct nctempchar1 *nctemp7962;
static struct nctempchar1 nctemp7963 = {{ 2}, (char*)" \0"};
nctemp7962=&nctemp7963;
nctempchar1* nctemp7960= nctemp7962;
int nctemp7964=CodeEs(nctemp7958,nctemp7960);
struct tree* nctemp7966= p;
nctempchar1* nctemp7968= rval;
int nctemp7971=CodeEs(nctemp7966,nctemp7968);
struct tree* nctemp7973= p;
struct nctempchar1 *nctemp7977;
static struct nctempchar1 nctemp7978 = {{ 3}, (char*)".r\0"};
nctemp7977=&nctemp7978;
nctempchar1* nctemp7975= nctemp7977;
int nctemp7979=CodeEs(nctemp7973,nctemp7975);
struct tree* nctemp7981= p;
struct nctempchar1 *nctemp7985;
static struct nctempchar1 nctemp7986 = {{ 4}, (char*)";\n\0"};
nctemp7985=&nctemp7986;
nctempchar1* nctemp7983= nctemp7985;
int nctemp7987=CodeEs(nctemp7981,nctemp7983);
struct tree* nctemp7989= p;
nctempchar1* nctemp7991= type;
int nctemp7994=CodeEs(nctemp7989,nctemp7991);
struct tree* nctemp7996= p;
struct nctempchar1 *nctemp8000;
static struct nctempchar1 nctemp8001 = {{ 2}, (char*)" \0"};
nctemp8000=&nctemp8001;
nctempchar1* nctemp7998= nctemp8000;
int nctemp8002=CodeEs(nctemp7996,nctemp7998);
struct tree* nctemp8004= p;
nctempchar1* nctemp8006= tempr;
int nctemp8009=CodeEs(nctemp8004,nctemp8006);
struct tree* nctemp8011= p;
struct nctempchar1 *nctemp8015;
static struct nctempchar1 nctemp8016 = {{ 3}, (char*)".i\0"};
nctemp8015=&nctemp8016;
nctempchar1* nctemp8013= nctemp8015;
int nctemp8017=CodeEs(nctemp8011,nctemp8013);
struct tree* nctemp8019= p;
struct nctempchar1 *nctemp8023;
static struct nctempchar1 nctemp8024 = {{ 4}, (char*)" = \0"};
nctemp8023=&nctemp8024;
nctempchar1* nctemp8021= nctemp8023;
int nctemp8025=CodeEs(nctemp8019,nctemp8021);
struct tree* nctemp8027= p;
nctempchar1* nctemp8029= lval;
int nctemp8032=CodeEs(nctemp8027,nctemp8029);
struct tree* nctemp8034= p;
struct nctempchar1 *nctemp8038;
static struct nctempchar1 nctemp8039 = {{ 3}, (char*)".i\0"};
nctemp8038=&nctemp8039;
nctempchar1* nctemp8036= nctemp8038;
int nctemp8040=CodeEs(nctemp8034,nctemp8036);
struct tree* nctemp8042= p;
struct nctempchar1 *nctemp8046;
static struct nctempchar1 nctemp8047 = {{ 2}, (char*)" \0"};
nctemp8046=&nctemp8047;
nctempchar1* nctemp8044= nctemp8046;
int nctemp8048=CodeEs(nctemp8042,nctemp8044);
struct tree* nctemp8050= p;
struct tree* nctemp8054= p;
nctempchar1* nctemp8056=PtreeGetdef(nctemp8054);
nctempchar1* nctemp8052= nctemp8056;
int nctemp8057=CodeEs(nctemp8050,nctemp8052);
struct tree* nctemp8059= p;
struct nctempchar1 *nctemp8063;
static struct nctempchar1 nctemp8064 = {{ 2}, (char*)" \0"};
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
static struct nctempchar1 nctemp8098 = {{ 2}, (char*)"*\0"};
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
static struct nctempchar1 nctemp8175 = {{ 3}, (char*)".r\0"};
nctemp8174=&nctemp8175;
nctempchar1* nctemp8172= nctemp8174;
int nctemp8176=CodeEs(nctemp8170,nctemp8172);
struct tree* nctemp8178= p;
struct nctempchar1 *nctemp8182;
static struct nctempchar1 nctemp8183 = {{ 2}, (char*)"-\0"};
nctemp8182=&nctemp8183;
nctempchar1* nctemp8180= nctemp8182;
int nctemp8184=CodeEs(nctemp8178,nctemp8180);
struct tree* nctemp8186= p;
nctempchar1* nctemp8188= lval;
int nctemp8191=CodeEs(nctemp8186,nctemp8188);
struct tree* nctemp8193= p;
struct nctempchar1 *nctemp8197;
static struct nctempchar1 nctemp8198 = {{ 3}, (char*)".i\0"};
nctemp8197=&nctemp8198;
nctempchar1* nctemp8195= nctemp8197;
int nctemp8199=CodeEs(nctemp8193,nctemp8195);
struct tree* nctemp8201= p;
struct nctempchar1 *nctemp8205;
static struct nctempchar1 nctemp8206 = {{ 2}, (char*)"*\0"};
nctemp8205=&nctemp8206;
nctempchar1* nctemp8203= nctemp8205;
int nctemp8207=CodeEs(nctemp8201,nctemp8203);
struct tree* nctemp8209= p;
nctempchar1* nctemp8211= rval;
int nctemp8214=CodeEs(nctemp8209,nctemp8211);
struct tree* nctemp8216= p;
struct nctempchar1 *nctemp8220;
static struct nctempchar1 nctemp8221 = {{ 3}, (char*)".i\0"};
nctemp8220=&nctemp8221;
nctempchar1* nctemp8218= nctemp8220;
int nctemp8222=CodeEs(nctemp8216,nctemp8218);
struct tree* nctemp8224= p;
struct nctempchar1 *nctemp8228;
static struct nctempchar1 nctemp8229 = {{ 4}, (char*)";\n\0"};
nctemp8228=&nctemp8229;
nctempchar1* nctemp8226= nctemp8228;
int nctemp8230=CodeEs(nctemp8224,nctemp8226);
struct tree* nctemp8232= p;
nctempchar1* nctemp8234= type;
int nctemp8237=CodeEs(nctemp8232,nctemp8234);
struct tree* nctemp8239= p;
struct nctempchar1 *nctemp8243;
static struct nctempchar1 nctemp8244 = {{ 2}, (char*)" \0"};
nctemp8243=&nctemp8244;
nctempchar1* nctemp8241= nctemp8243;
int nctemp8245=CodeEs(nctemp8239,nctemp8241);
struct tree* nctemp8247= p;
nctempchar1* nctemp8249= tempr;
int nctemp8252=CodeEs(nctemp8247,nctemp8249);
struct tree* nctemp8254= p;
struct nctempchar1 *nctemp8258;
static struct nctempchar1 nctemp8259 = {{ 3}, (char*)".i\0"};
nctemp8258=&nctemp8259;
nctempchar1* nctemp8256= nctemp8258;
int nctemp8260=CodeEs(nctemp8254,nctemp8256);
struct tree* nctemp8262= p;
struct nctempchar1 *nctemp8266;
static struct nctempchar1 nctemp8267 = {{ 4}, (char*)" = \0"};
nctemp8266=&nctemp8267;
nctempchar1* nctemp8264= nctemp8266;
int nctemp8268=CodeEs(nctemp8262,nctemp8264);
struct tree* nctemp8270= p;
nctempchar1* nctemp8272= lval;
int nctemp8275=CodeEs(nctemp8270,nctemp8272);
struct tree* nctemp8277= p;
struct nctempchar1 *nctemp8281;
static struct nctempchar1 nctemp8282 = {{ 3}, (char*)".i\0"};
nctemp8281=&nctemp8282;
nctempchar1* nctemp8279= nctemp8281;
int nctemp8283=CodeEs(nctemp8277,nctemp8279);
struct tree* nctemp8285= p;
struct nctempchar1 *nctemp8289;
static struct nctempchar1 nctemp8290 = {{ 2}, (char*)"*\0"};
nctemp8289=&nctemp8290;
nctempchar1* nctemp8287= nctemp8289;
int nctemp8291=CodeEs(nctemp8285,nctemp8287);
struct tree* nctemp8293= p;
nctempchar1* nctemp8295= rval;
int nctemp8298=CodeEs(nctemp8293,nctemp8295);
struct tree* nctemp8300= p;
struct nctempchar1 *nctemp8304;
static struct nctempchar1 nctemp8305 = {{ 3}, (char*)".r\0"};
nctemp8304=&nctemp8305;
nctempchar1* nctemp8302= nctemp8304;
int nctemp8306=CodeEs(nctemp8300,nctemp8302);
struct tree* nctemp8308= p;
struct nctempchar1 *nctemp8312;
static struct nctempchar1 nctemp8313 = {{ 2}, (char*)"+\0"};
nctemp8312=&nctemp8313;
nctempchar1* nctemp8310= nctemp8312;
int nctemp8314=CodeEs(nctemp8308,nctemp8310);
struct tree* nctemp8316= p;
nctempchar1* nctemp8318= lval;
int nctemp8321=CodeEs(nctemp8316,nctemp8318);
struct tree* nctemp8323= p;
struct nctempchar1 *nctemp8327;
static struct nctempchar1 nctemp8328 = {{ 3}, (char*)".r\0"};
nctemp8327=&nctemp8328;
nctempchar1* nctemp8325= nctemp8327;
int nctemp8329=CodeEs(nctemp8323,nctemp8325);
struct tree* nctemp8331= p;
struct nctempchar1 *nctemp8335;
static struct nctempchar1 nctemp8336 = {{ 2}, (char*)"*\0"};
nctemp8335=&nctemp8336;
nctempchar1* nctemp8333= nctemp8335;
int nctemp8337=CodeEs(nctemp8331,nctemp8333);
struct tree* nctemp8339= p;
nctempchar1* nctemp8341= rval;
int nctemp8344=CodeEs(nctemp8339,nctemp8341);
struct tree* nctemp8346= p;
struct nctempchar1 *nctemp8350;
static struct nctempchar1 nctemp8351 = {{ 3}, (char*)".i\0"};
nctemp8350=&nctemp8351;
nctempchar1* nctemp8348= nctemp8350;
int nctemp8352=CodeEs(nctemp8346,nctemp8348);
struct tree* nctemp8354= p;
struct nctempchar1 *nctemp8358;
static struct nctempchar1 nctemp8359 = {{ 4}, (char*)";\n\0"};
nctemp8358=&nctemp8359;
nctempchar1* nctemp8356= nctemp8358;
int nctemp8360=CodeEs(nctemp8354,nctemp8356);
}
else{
nctempchar1* nctemp8364= opr;
struct nctempchar1 *nctemp8369;
static struct nctempchar1 nctemp8370 = {{ 2}, (char*)"/\0"};
nctemp8369=&nctemp8370;
nctempchar1* nctemp8367= nctemp8369;
int nctemp8371=LibeStrcmp(nctemp8364,nctemp8367);
int nctemp8361 = (nctemp8371 ==1);
if(nctemp8361)
{
struct tree* nctemp8374= p;
nctempchar1* nctemp8376= type;
int nctemp8379=CodeEs(nctemp8374,nctemp8376);
struct tree* nctemp8381= p;
struct nctempchar1 *nctemp8385;
static struct nctempchar1 nctemp8386 = {{ 2}, (char*)" \0"};
nctemp8385=&nctemp8386;
nctempchar1* nctemp8383= nctemp8385;
int nctemp8387=CodeEs(nctemp8381,nctemp8383);
struct tree* nctemp8389= p;
nctempchar1* nctemp8391= tempr;
int nctemp8394=CodeEs(nctemp8389,nctemp8391);
struct tree* nctemp8396= p;
struct nctempchar1 *nctemp8400;
static struct nctempchar1 nctemp8401 = {{ 3}, (char*)".r\0"};
nctemp8400=&nctemp8401;
nctempchar1* nctemp8398= nctemp8400;
int nctemp8402=CodeEs(nctemp8396,nctemp8398);
struct tree* nctemp8404= p;
struct nctempchar1 *nctemp8408;
static struct nctempchar1 nctemp8409 = {{ 4}, (char*)" = \0"};
nctemp8408=&nctemp8409;
nctempchar1* nctemp8406= nctemp8408;
int nctemp8410=CodeEs(nctemp8404,nctemp8406);
struct tree* nctemp8412= p;
struct nctempchar1 *nctemp8416;
static struct nctempchar1 nctemp8417 = {{ 2}, (char*)"(\0"};
nctemp8416=&nctemp8417;
nctempchar1* nctemp8414= nctemp8416;
int nctemp8418=CodeEs(nctemp8412,nctemp8414);
struct tree* nctemp8420= p;
nctempchar1* nctemp8422= lval;
int nctemp8425=CodeEs(nctemp8420,nctemp8422);
struct tree* nctemp8427= p;
struct nctempchar1 *nctemp8431;
static struct nctempchar1 nctemp8432 = {{ 3}, (char*)".r\0"};
nctemp8431=&nctemp8432;
nctempchar1* nctemp8429= nctemp8431;
int nctemp8433=CodeEs(nctemp8427,nctemp8429);
struct tree* nctemp8435= p;
struct nctempchar1 *nctemp8439;
static struct nctempchar1 nctemp8440 = {{ 2}, (char*)"*\0"};
nctemp8439=&nctemp8440;
nctempchar1* nctemp8437= nctemp8439;
int nctemp8441=CodeEs(nctemp8435,nctemp8437);
struct tree* nctemp8443= p;
nctempchar1* nctemp8445= rval;
int nctemp8448=CodeEs(nctemp8443,nctemp8445);
struct tree* nctemp8450= p;
struct nctempchar1 *nctemp8454;
static struct nctempchar1 nctemp8455 = {{ 3}, (char*)".r\0"};
nctemp8454=&nctemp8455;
nctempchar1* nctemp8452= nctemp8454;
int nctemp8456=CodeEs(nctemp8450,nctemp8452);
struct tree* nctemp8458= p;
struct nctempchar1 *nctemp8462;
static struct nctempchar1 nctemp8463 = {{ 2}, (char*)"+\0"};
nctemp8462=&nctemp8463;
nctempchar1* nctemp8460= nctemp8462;
int nctemp8464=CodeEs(nctemp8458,nctemp8460);
struct tree* nctemp8466= p;
nctempchar1* nctemp8468= lval;
int nctemp8471=CodeEs(nctemp8466,nctemp8468);
struct tree* nctemp8473= p;
struct nctempchar1 *nctemp8477;
static struct nctempchar1 nctemp8478 = {{ 3}, (char*)".i\0"};
nctemp8477=&nctemp8478;
nctempchar1* nctemp8475= nctemp8477;
int nctemp8479=CodeEs(nctemp8473,nctemp8475);
struct tree* nctemp8481= p;
struct nctempchar1 *nctemp8485;
static struct nctempchar1 nctemp8486 = {{ 2}, (char*)"*\0"};
nctemp8485=&nctemp8486;
nctempchar1* nctemp8483= nctemp8485;
int nctemp8487=CodeEs(nctemp8481,nctemp8483);
struct tree* nctemp8489= p;
nctempchar1* nctemp8491= rval;
int nctemp8494=CodeEs(nctemp8489,nctemp8491);
struct tree* nctemp8496= p;
struct nctempchar1 *nctemp8500;
static struct nctempchar1 nctemp8501 = {{ 3}, (char*)".i\0"};
nctemp8500=&nctemp8501;
nctempchar1* nctemp8498= nctemp8500;
int nctemp8502=CodeEs(nctemp8496,nctemp8498);
struct tree* nctemp8504= p;
struct nctempchar1 *nctemp8508;
static struct nctempchar1 nctemp8509 = {{ 4}, (char*)")/(\0"};
nctemp8508=&nctemp8509;
nctempchar1* nctemp8506= nctemp8508;
int nctemp8510=CodeEs(nctemp8504,nctemp8506);
struct tree* nctemp8512= p;
nctempchar1* nctemp8514= rval;
int nctemp8517=CodeEs(nctemp8512,nctemp8514);
struct tree* nctemp8519= p;
struct nctempchar1 *nctemp8523;
static struct nctempchar1 nctemp8524 = {{ 3}, (char*)".r\0"};
nctemp8523=&nctemp8524;
nctempchar1* nctemp8521= nctemp8523;
int nctemp8525=CodeEs(nctemp8519,nctemp8521);
struct tree* nctemp8527= p;
struct nctempchar1 *nctemp8531;
static struct nctempchar1 nctemp8532 = {{ 2}, (char*)"*\0"};
nctemp8531=&nctemp8532;
nctempchar1* nctemp8529= nctemp8531;
int nctemp8533=CodeEs(nctemp8527,nctemp8529);
struct tree* nctemp8535= p;
nctempchar1* nctemp8537= rval;
int nctemp8540=CodeEs(nctemp8535,nctemp8537);
struct tree* nctemp8542= p;
struct nctempchar1 *nctemp8546;
static struct nctempchar1 nctemp8547 = {{ 3}, (char*)".r\0"};
nctemp8546=&nctemp8547;
nctempchar1* nctemp8544= nctemp8546;
int nctemp8548=CodeEs(nctemp8542,nctemp8544);
struct tree* nctemp8550= p;
struct nctempchar1 *nctemp8554;
static struct nctempchar1 nctemp8555 = {{ 2}, (char*)"+\0"};
nctemp8554=&nctemp8555;
nctempchar1* nctemp8552= nctemp8554;
int nctemp8556=CodeEs(nctemp8550,nctemp8552);
struct tree* nctemp8558= p;
nctempchar1* nctemp8560= rval;
int nctemp8563=CodeEs(nctemp8558,nctemp8560);
struct tree* nctemp8565= p;
struct nctempchar1 *nctemp8569;
static struct nctempchar1 nctemp8570 = {{ 3}, (char*)".i\0"};
nctemp8569=&nctemp8570;
nctempchar1* nctemp8567= nctemp8569;
int nctemp8571=CodeEs(nctemp8565,nctemp8567);
struct tree* nctemp8573= p;
struct nctempchar1 *nctemp8577;
static struct nctempchar1 nctemp8578 = {{ 2}, (char*)"*\0"};
nctemp8577=&nctemp8578;
nctempchar1* nctemp8575= nctemp8577;
int nctemp8579=CodeEs(nctemp8573,nctemp8575);
struct tree* nctemp8581= p;
nctempchar1* nctemp8583= rval;
int nctemp8586=CodeEs(nctemp8581,nctemp8583);
struct tree* nctemp8588= p;
struct nctempchar1 *nctemp8592;
static struct nctempchar1 nctemp8593 = {{ 3}, (char*)".i\0"};
nctemp8592=&nctemp8593;
nctempchar1* nctemp8590= nctemp8592;
int nctemp8594=CodeEs(nctemp8588,nctemp8590);
struct tree* nctemp8596= p;
struct nctempchar1 *nctemp8600;
static struct nctempchar1 nctemp8601 = {{ 5}, (char*)");\n\0"};
nctemp8600=&nctemp8601;
nctempchar1* nctemp8598= nctemp8600;
int nctemp8602=CodeEs(nctemp8596,nctemp8598);
struct tree* nctemp8604= p;
nctempchar1* nctemp8606= type;
int nctemp8609=CodeEs(nctemp8604,nctemp8606);
struct tree* nctemp8611= p;
struct nctempchar1 *nctemp8615;
static struct nctempchar1 nctemp8616 = {{ 2}, (char*)" \0"};
nctemp8615=&nctemp8616;
nctempchar1* nctemp8613= nctemp8615;
int nctemp8617=CodeEs(nctemp8611,nctemp8613);
struct tree* nctemp8619= p;
nctempchar1* nctemp8621= tempr;
int nctemp8624=CodeEs(nctemp8619,nctemp8621);
struct tree* nctemp8626= p;
struct nctempchar1 *nctemp8630;
static struct nctempchar1 nctemp8631 = {{ 3}, (char*)".i\0"};
nctemp8630=&nctemp8631;
nctempchar1* nctemp8628= nctemp8630;
int nctemp8632=CodeEs(nctemp8626,nctemp8628);
struct tree* nctemp8634= p;
struct nctempchar1 *nctemp8638;
static struct nctempchar1 nctemp8639 = {{ 4}, (char*)" = \0"};
nctemp8638=&nctemp8639;
nctempchar1* nctemp8636= nctemp8638;
int nctemp8640=CodeEs(nctemp8634,nctemp8636);
struct tree* nctemp8642= p;
struct nctempchar1 *nctemp8646;
static struct nctempchar1 nctemp8647 = {{ 2}, (char*)"(\0"};
nctemp8646=&nctemp8647;
nctempchar1* nctemp8644= nctemp8646;
int nctemp8648=CodeEs(nctemp8642,nctemp8644);
struct tree* nctemp8650= p;
nctempchar1* nctemp8652= lval;
int nctemp8655=CodeEs(nctemp8650,nctemp8652);
struct tree* nctemp8657= p;
struct nctempchar1 *nctemp8661;
static struct nctempchar1 nctemp8662 = {{ 3}, (char*)".i\0"};
nctemp8661=&nctemp8662;
nctempchar1* nctemp8659= nctemp8661;
int nctemp8663=CodeEs(nctemp8657,nctemp8659);
struct tree* nctemp8665= p;
struct nctempchar1 *nctemp8669;
static struct nctempchar1 nctemp8670 = {{ 2}, (char*)"*\0"};
nctemp8669=&nctemp8670;
nctempchar1* nctemp8667= nctemp8669;
int nctemp8671=CodeEs(nctemp8665,nctemp8667);
struct tree* nctemp8673= p;
nctempchar1* nctemp8675= rval;
int nctemp8678=CodeEs(nctemp8673,nctemp8675);
struct tree* nctemp8680= p;
struct nctempchar1 *nctemp8684;
static struct nctempchar1 nctemp8685 = {{ 3}, (char*)".r\0"};
nctemp8684=&nctemp8685;
nctempchar1* nctemp8682= nctemp8684;
int nctemp8686=CodeEs(nctemp8680,nctemp8682);
struct tree* nctemp8688= p;
struct nctempchar1 *nctemp8692;
static struct nctempchar1 nctemp8693 = {{ 2}, (char*)"-\0"};
nctemp8692=&nctemp8693;
nctempchar1* nctemp8690= nctemp8692;
int nctemp8694=CodeEs(nctemp8688,nctemp8690);
struct tree* nctemp8696= p;
nctempchar1* nctemp8698= lval;
int nctemp8701=CodeEs(nctemp8696,nctemp8698);
struct tree* nctemp8703= p;
struct nctempchar1 *nctemp8707;
static struct nctempchar1 nctemp8708 = {{ 3}, (char*)".r\0"};
nctemp8707=&nctemp8708;
nctempchar1* nctemp8705= nctemp8707;
int nctemp8709=CodeEs(nctemp8703,nctemp8705);
struct tree* nctemp8711= p;
struct nctempchar1 *nctemp8715;
static struct nctempchar1 nctemp8716 = {{ 2}, (char*)"*\0"};
nctemp8715=&nctemp8716;
nctempchar1* nctemp8713= nctemp8715;
int nctemp8717=CodeEs(nctemp8711,nctemp8713);
struct tree* nctemp8719= p;
nctempchar1* nctemp8721= rval;
int nctemp8724=CodeEs(nctemp8719,nctemp8721);
struct tree* nctemp8726= p;
struct nctempchar1 *nctemp8730;
static struct nctempchar1 nctemp8731 = {{ 3}, (char*)".i\0"};
nctemp8730=&nctemp8731;
nctempchar1* nctemp8728= nctemp8730;
int nctemp8732=CodeEs(nctemp8726,nctemp8728);
struct tree* nctemp8734= p;
struct nctempchar1 *nctemp8738;
static struct nctempchar1 nctemp8739 = {{ 4}, (char*)")/(\0"};
nctemp8738=&nctemp8739;
nctempchar1* nctemp8736= nctemp8738;
int nctemp8740=CodeEs(nctemp8734,nctemp8736);
struct tree* nctemp8742= p;
nctempchar1* nctemp8744= rval;
int nctemp8747=CodeEs(nctemp8742,nctemp8744);
struct tree* nctemp8749= p;
struct nctempchar1 *nctemp8753;
static struct nctempchar1 nctemp8754 = {{ 3}, (char*)".r\0"};
nctemp8753=&nctemp8754;
nctempchar1* nctemp8751= nctemp8753;
int nctemp8755=CodeEs(nctemp8749,nctemp8751);
struct tree* nctemp8757= p;
struct nctempchar1 *nctemp8761;
static struct nctempchar1 nctemp8762 = {{ 2}, (char*)"*\0"};
nctemp8761=&nctemp8762;
nctempchar1* nctemp8759= nctemp8761;
int nctemp8763=CodeEs(nctemp8757,nctemp8759);
struct tree* nctemp8765= p;
nctempchar1* nctemp8767= rval;
int nctemp8770=CodeEs(nctemp8765,nctemp8767);
struct tree* nctemp8772= p;
struct nctempchar1 *nctemp8776;
static struct nctempchar1 nctemp8777 = {{ 3}, (char*)".r\0"};
nctemp8776=&nctemp8777;
nctempchar1* nctemp8774= nctemp8776;
int nctemp8778=CodeEs(nctemp8772,nctemp8774);
struct tree* nctemp8780= p;
struct nctempchar1 *nctemp8784;
static struct nctempchar1 nctemp8785 = {{ 2}, (char*)"+\0"};
nctemp8784=&nctemp8785;
nctempchar1* nctemp8782= nctemp8784;
int nctemp8786=CodeEs(nctemp8780,nctemp8782);
struct tree* nctemp8788= p;
nctempchar1* nctemp8790= rval;
int nctemp8793=CodeEs(nctemp8788,nctemp8790);
struct tree* nctemp8795= p;
struct nctempchar1 *nctemp8799;
static struct nctempchar1 nctemp8800 = {{ 3}, (char*)".i\0"};
nctemp8799=&nctemp8800;
nctempchar1* nctemp8797= nctemp8799;
int nctemp8801=CodeEs(nctemp8795,nctemp8797);
struct tree* nctemp8803= p;
struct nctempchar1 *nctemp8807;
static struct nctempchar1 nctemp8808 = {{ 2}, (char*)"*\0"};
nctemp8807=&nctemp8808;
nctempchar1* nctemp8805= nctemp8807;
int nctemp8809=CodeEs(nctemp8803,nctemp8805);
struct tree* nctemp8811= p;
nctempchar1* nctemp8813= rval;
int nctemp8816=CodeEs(nctemp8811,nctemp8813);
struct tree* nctemp8818= p;
struct nctempchar1 *nctemp8822;
static struct nctempchar1 nctemp8823 = {{ 3}, (char*)".i\0"};
nctemp8822=&nctemp8823;
nctempchar1* nctemp8820= nctemp8822;
int nctemp8824=CodeEs(nctemp8818,nctemp8820);
struct tree* nctemp8826= p;
struct nctempchar1 *nctemp8830;
static struct nctempchar1 nctemp8831 = {{ 5}, (char*)");\n\0"};
nctemp8830=&nctemp8831;
nctempchar1* nctemp8828= nctemp8830;
int nctemp8832=CodeEs(nctemp8826,nctemp8828);
}
}
}
}
else{
struct tree* nctemp8834= p;
nctempchar1* nctemp8836= type;
int nctemp8839=CodeEs(nctemp8834,nctemp8836);
struct tree* nctemp8841= p;
struct nctempchar1 *nctemp8845;
static struct nctempchar1 nctemp8846 = {{ 2}, (char*)" \0"};
nctemp8845=&nctemp8846;
nctempchar1* nctemp8843= nctemp8845;
int nctemp8847=CodeEs(nctemp8841,nctemp8843);
struct tree* nctemp8849= p;
nctempchar1* nctemp8851= tempr;
int nctemp8854=CodeEs(nctemp8849,nctemp8851);
struct tree* nctemp8856= p;
struct nctempchar1 *nctemp8860;
static struct nctempchar1 nctemp8861 = {{ 4}, (char*)" = \0"};
nctemp8860=&nctemp8861;
nctempchar1* nctemp8858= nctemp8860;
int nctemp8862=CodeEs(nctemp8856,nctemp8858);
struct tree* nctemp8864= p;
nctempchar1* nctemp8866= lval;
int nctemp8869=CodeEs(nctemp8864,nctemp8866);
struct tree* nctemp8871= p;
struct nctempchar1 *nctemp8875;
static struct nctempchar1 nctemp8876 = {{ 2}, (char*)" \0"};
nctemp8875=&nctemp8876;
nctempchar1* nctemp8873= nctemp8875;
int nctemp8877=CodeEs(nctemp8871,nctemp8873);
struct tree* nctemp8879= p;
struct tree* nctemp8883= p;
nctempchar1* nctemp8885=PtreeGetdef(nctemp8883);
nctempchar1* nctemp8881= nctemp8885;
int nctemp8886=CodeEs(nctemp8879,nctemp8881);
struct tree* nctemp8888= p;
struct nctempchar1 *nctemp8892;
static struct nctempchar1 nctemp8893 = {{ 2}, (char*)" \0"};
nctemp8892=&nctemp8893;
nctempchar1* nctemp8890= nctemp8892;
int nctemp8894=CodeEs(nctemp8888,nctemp8890);
struct tree* nctemp8896= p;
nctempchar1* nctemp8898= rval;
int nctemp8901=CodeEs(nctemp8896,nctemp8898);
struct tree* nctemp8903= p;
struct nctempchar1 *nctemp8907;
static struct nctempchar1 nctemp8908 = {{ 4}, (char*)";\n\0"};
nctemp8907=&nctemp8908;
nctempchar1* nctemp8905= nctemp8907;
int nctemp8909=CodeEs(nctemp8903,nctemp8905);
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
struct tree* nctemp8917= p;
nctempchar1* nctemp8919=PtreeGetname(nctemp8917);
nctempchar1* nctemp8915= nctemp8919;
struct nctempchar1 *nctemp8922;
static struct nctempchar1 nctemp8923 = {{ 8}, (char*)"binexpr\0"};
nctemp8922=&nctemp8923;
nctempchar1* nctemp8920= nctemp8922;
int nctemp8924=LibeStrcmp(nctemp8915,nctemp8920);
int nctemp8912 = (nctemp8924 ==1);
if(nctemp8912)
{
struct tree* nctemp8931= p;
nctempchar1* nctemp8933=PtreeGetype(nctemp8931);
type=nctemp8933;
nctempchar1* nctemp8939=CodeMktemp();
tempr=nctemp8939;
nctempchar1* nctemp8945=CodeMktemp();
tempi=nctemp8945;
struct tree* nctemp8950= p;
struct tree* nctemp8952=PtreeMvchild(nctemp8950);
np =nctemp8952;
struct tree* nctemp8958= np;
nctempchar1* nctemp8960=CodeUnexpr(nctemp8958);
lval=nctemp8960;
struct tree* nctemp8968= np;
struct tree* nctemp8970=PtreeMvsister(nctemp8968);
struct tree* nctemp8966= nctemp8970;
nctempchar1* nctemp8971=CodeUnexpr(nctemp8966);
rval=nctemp8971;
struct tree* nctemp8986= p;
nctempchar1* nctemp8988=PtreeGetdef(nctemp8986);
nctempchar1* nctemp8984= nctemp8988;
struct nctempchar1 *nctemp8991;
static struct nctempchar1 nctemp8992 = {{ 2}, (char*)"+\0"};
nctemp8991=&nctemp8992;
nctempchar1* nctemp8989= nctemp8991;
int nctemp8993=LibeStrcmp(nctemp8984,nctemp8989);
int nctemp8981 = (nctemp8993 ==1);
struct tree* nctemp9001= p;
nctempchar1* nctemp9003=PtreeGetdef(nctemp9001);
nctempchar1* nctemp8999= nctemp9003;
struct nctempchar1 *nctemp9006;
static struct nctempchar1 nctemp9007 = {{ 2}, (char*)"-\0"};
nctemp9006=&nctemp9007;
nctempchar1* nctemp9004= nctemp9006;
int nctemp9008=LibeStrcmp(nctemp8999,nctemp9004);
int nctemp8996 = (nctemp9008 ==1);
int nctemp8978 = (nctemp8981 || nctemp8996);
struct tree* nctemp9016= p;
nctempchar1* nctemp9018=PtreeGetdef(nctemp9016);
nctempchar1* nctemp9014= nctemp9018;
struct nctempchar1 *nctemp9021;
static struct nctempchar1 nctemp9022 = {{ 2}, (char*)"*\0"};
nctemp9021=&nctemp9022;
nctempchar1* nctemp9019= nctemp9021;
int nctemp9023=LibeStrcmp(nctemp9014,nctemp9019);
int nctemp9011 = (nctemp9023 ==1);
int nctemp8975 = (nctemp8978 || nctemp9011);
struct tree* nctemp9031= p;
nctempchar1* nctemp9033=PtreeGetdef(nctemp9031);
nctempchar1* nctemp9029= nctemp9033;
struct nctempchar1 *nctemp9036;
static struct nctempchar1 nctemp9037 = {{ 2}, (char*)"/\0"};
nctemp9036=&nctemp9037;
nctempchar1* nctemp9034= nctemp9036;
int nctemp9038=LibeStrcmp(nctemp9029,nctemp9034);
int nctemp9026 = (nctemp9038 ==1);
int nctemp8972 = (nctemp8975 || nctemp9026);
if(nctemp8972)
{
struct tree* nctemp9041= p;
nctempchar1* nctemp9043= lval;
nctempchar1* nctemp9046= rval;
nctempchar1* nctemp9049=CodeAddexpr(nctemp9041,nctemp9043,nctemp9046);
return nctemp9049;
}
else{
struct tree* nctemp9055= p;
nctempchar1* nctemp9057=PtreeGetdef(nctemp9055);
nctempchar1* nctemp9053= nctemp9057;
struct nctempchar1 *nctemp9060;
static struct nctempchar1 nctemp9061 = {{ 2}, (char*)"=\0"};
nctemp9060=&nctemp9061;
nctempchar1* nctemp9058= nctemp9060;
int nctemp9062=LibeStrcmp(nctemp9053,nctemp9058);
int nctemp9050 = (nctemp9062 ==1);
if(nctemp9050)
{
struct tree* nctemp9075= p;
nctempchar1* nctemp9077=PtreeGetype(nctemp9075);
nctempchar1* nctemp9073= nctemp9077;
struct nctempchar1 *nctemp9080;
static struct nctempchar1 nctemp9081 = {{ 8}, (char*)"complex\0"};
nctemp9080=&nctemp9081;
nctempchar1* nctemp9078= nctemp9080;
int nctemp9082=LibeStrcmp(nctemp9073,nctemp9078);
int nctemp9070 = (nctemp9082 ==1);
struct tree* nctemp9090= p;
nctempchar1* nctemp9092=PtreeGetref(nctemp9090);
nctempchar1* nctemp9088= nctemp9092;
struct nctempchar1 *nctemp9095;
static struct nctempchar1 nctemp9096 = {{ 5}, (char*)"aref\0"};
nctemp9095=&nctemp9096;
nctempchar1* nctemp9093= nctemp9095;
int nctemp9097=LibeStrcmp(nctemp9088,nctemp9093);
int nctemp9085 = (nctemp9097 ==0);
int nctemp9067 = (nctemp9070 && nctemp9085);
struct tree* nctemp9105= p;
nctempchar1* nctemp9107=PtreeGetref(nctemp9105);
nctempchar1* nctemp9103= nctemp9107;
struct nctempchar1 *nctemp9110;
static struct nctempchar1 nctemp9111 = {{ 5}, (char*)"sref\0"};
nctemp9110=&nctemp9111;
nctempchar1* nctemp9108= nctemp9110;
int nctemp9112=LibeStrcmp(nctemp9103,nctemp9108);
int nctemp9100 = (nctemp9112 ==0);
int nctemp9064 = (nctemp9067 && nctemp9100);
if(nctemp9064)
{
struct tree* nctemp9115= p;
nctempchar1* nctemp9117= lval;
int nctemp9120=CodeEs(nctemp9115,nctemp9117);
struct tree* nctemp9122= p;
struct nctempchar1 *nctemp9126;
static struct nctempchar1 nctemp9127 = {{ 4}, (char*)".r \0"};
nctemp9126=&nctemp9127;
nctempchar1* nctemp9124= nctemp9126;
int nctemp9128=CodeEs(nctemp9122,nctemp9124);
struct tree* nctemp9130= p;
struct nctempchar1 *nctemp9134;
static struct nctempchar1 nctemp9135 = {{ 2}, (char*)"=\0"};
nctemp9134=&nctemp9135;
nctempchar1* nctemp9132= nctemp9134;
int nctemp9136=CodeEs(nctemp9130,nctemp9132);
struct tree* nctemp9138= p;
nctempchar1* nctemp9140= rval;
int nctemp9143=CodeEs(nctemp9138,nctemp9140);
struct tree* nctemp9145= p;
struct nctempchar1 *nctemp9149;
static struct nctempchar1 nctemp9150 = {{ 3}, (char*)".r\0"};
nctemp9149=&nctemp9150;
nctempchar1* nctemp9147= nctemp9149;
int nctemp9151=CodeEs(nctemp9145,nctemp9147);
struct tree* nctemp9153= p;
struct nctempchar1 *nctemp9157;
static struct nctempchar1 nctemp9158 = {{ 4}, (char*)";\n\0"};
nctemp9157=&nctemp9158;
nctempchar1* nctemp9155= nctemp9157;
int nctemp9159=CodeEs(nctemp9153,nctemp9155);
struct tree* nctemp9161= p;
nctempchar1* nctemp9163= lval;
int nctemp9166=CodeEs(nctemp9161,nctemp9163);
struct tree* nctemp9168= p;
struct nctempchar1 *nctemp9172;
static struct nctempchar1 nctemp9173 = {{ 3}, (char*)".i\0"};
nctemp9172=&nctemp9173;
nctempchar1* nctemp9170= nctemp9172;
int nctemp9174=CodeEs(nctemp9168,nctemp9170);
struct tree* nctemp9176= p;
struct nctempchar1 *nctemp9180;
static struct nctempchar1 nctemp9181 = {{ 2}, (char*)"=\0"};
nctemp9180=&nctemp9181;
nctempchar1* nctemp9178= nctemp9180;
int nctemp9182=CodeEs(nctemp9176,nctemp9178);
struct tree* nctemp9184= p;
nctempchar1* nctemp9186= rval;
int nctemp9189=CodeEs(nctemp9184,nctemp9186);
struct tree* nctemp9191= p;
struct nctempchar1 *nctemp9195;
static struct nctempchar1 nctemp9196 = {{ 3}, (char*)".i\0"};
nctemp9195=&nctemp9196;
nctempchar1* nctemp9193= nctemp9195;
int nctemp9197=CodeEs(nctemp9191,nctemp9193);
struct tree* nctemp9199= p;
struct nctempchar1 *nctemp9203;
static struct nctempchar1 nctemp9204 = {{ 4}, (char*)";\n\0"};
nctemp9203=&nctemp9204;
nctempchar1* nctemp9201= nctemp9203;
int nctemp9205=CodeEs(nctemp9199,nctemp9201);
return lval;
}
else{
struct tree* nctemp9213= np;
nctempchar1* nctemp9215=PtreeGetref(nctemp9213);
nctempchar1* nctemp9211= nctemp9215;
struct nctempchar1 *nctemp9218;
static struct nctempchar1 nctemp9219 = {{ 5}, (char*)"aref\0"};
nctemp9218=&nctemp9219;
nctempchar1* nctemp9216= nctemp9218;
int nctemp9220=LibeStrcmp(nctemp9211,nctemp9216);
int nctemp9208 = (nctemp9220 ==1);
if(nctemp9208)
{
struct tree* nctemp9229= np;
struct tree* nctemp9231=PtreeMvsister(nctemp9229);
struct tree* nctemp9227= nctemp9231;
nctempchar1* nctemp9232=PtreeGetname(nctemp9227);
nctempchar1* nctemp9225= nctemp9232;
struct nctempchar1 *nctemp9235;
static struct nctempchar1 nctemp9236 = {{ 10}, (char*)"iconstant\0"};
nctemp9235=&nctemp9236;
nctempchar1* nctemp9233= nctemp9235;
int nctemp9237=LibeStrcmp(nctemp9225,nctemp9233);
struct tree* nctemp9243= np;
struct tree* nctemp9245=PtreeMvsister(nctemp9243);
struct tree* nctemp9241= nctemp9245;
nctempchar1* nctemp9246=PtreeGetdef(nctemp9241);
nctempchar1* nctemp9239= nctemp9246;
struct nctempchar1 *nctemp9249;
static struct nctempchar1 nctemp9250 = {{ 2}, (char*)"0\0"};
nctemp9249=&nctemp9250;
nctempchar1* nctemp9247= nctemp9249;
int nctemp9251=LibeStrcmp(nctemp9239,nctemp9247);
int nctemp9222 = (nctemp9237 && nctemp9251);
if(nctemp9222)
{
struct tree* nctemp9253= p;
nctempchar1* nctemp9255= lval;
int nctemp9258=CodeEs(nctemp9253,nctemp9255);
struct tree* nctemp9260= p;
struct nctempchar1 *nctemp9264;
static struct nctempchar1 nctemp9265 = {{ 3}, (char*)"=(\0"};
nctemp9264=&nctemp9265;
nctempchar1* nctemp9262= nctemp9264;
int nctemp9266=CodeEs(nctemp9260,nctemp9262);
struct tree* nctemp9268= p;
nctempchar1* nctemp9270= rval;
int nctemp9273=CodeEs(nctemp9268,nctemp9270);
struct tree* nctemp9275= p;
struct nctempchar1 *nctemp9279;
static struct nctempchar1 nctemp9280 = {{ 5}, (char*)");\n\0"};
nctemp9279=&nctemp9280;
nctempchar1* nctemp9277= nctemp9279;
int nctemp9281=CodeEs(nctemp9275,nctemp9277);
return lval;
}
else{
struct tree* nctemp9285= p;
nctempchar1* nctemp9287= lval;
int nctemp9290=CodeEs(nctemp9285,nctemp9287);
struct tree* nctemp9292= p;
struct nctempchar1 *nctemp9296;
static struct nctempchar1 nctemp9297 = {{ 2}, (char*)"=\0"};
nctemp9296=&nctemp9297;
nctempchar1* nctemp9294= nctemp9296;
int nctemp9298=CodeEs(nctemp9292,nctemp9294);
struct tree* nctemp9300= p;
nctempchar1* nctemp9302= rval;
int nctemp9305=CodeEs(nctemp9300,nctemp9302);
struct tree* nctemp9307= p;
struct nctempchar1 *nctemp9311;
static struct nctempchar1 nctemp9312 = {{ 4}, (char*)";\n\0"};
nctemp9311=&nctemp9312;
nctempchar1* nctemp9309= nctemp9311;
int nctemp9313=CodeEs(nctemp9307,nctemp9309);
return lval;
}
}
else{
struct tree* nctemp9317= p;
nctempchar1* nctemp9319= lval;
int nctemp9322=CodeEs(nctemp9317,nctemp9319);
struct tree* nctemp9324= p;
struct nctempchar1 *nctemp9328;
static struct nctempchar1 nctemp9329 = {{ 2}, (char*)" \0"};
nctemp9328=&nctemp9329;
nctempchar1* nctemp9326= nctemp9328;
int nctemp9330=CodeEs(nctemp9324,nctemp9326);
struct tree* nctemp9332= p;
struct nctempchar1 *nctemp9336;
static struct nctempchar1 nctemp9337 = {{ 2}, (char*)"=\0"};
nctemp9336=&nctemp9337;
nctempchar1* nctemp9334= nctemp9336;
int nctemp9338=CodeEs(nctemp9332,nctemp9334);
struct tree* nctemp9340= p;
nctempchar1* nctemp9342= rval;
int nctemp9345=CodeEs(nctemp9340,nctemp9342);
struct tree* nctemp9347= p;
struct nctempchar1 *nctemp9351;
static struct nctempchar1 nctemp9352 = {{ 4}, (char*)";\n\0"};
nctemp9351=&nctemp9352;
nctempchar1* nctemp9349= nctemp9351;
int nctemp9353=CodeEs(nctemp9347,nctemp9349);
return lval;
}
}
}
else{
struct tree* nctemp9364= p;
nctempchar1* nctemp9366=PtreeGetdef(nctemp9364);
nctempchar1* nctemp9362= nctemp9366;
struct nctempchar1 *nctemp9369;
static struct nctempchar1 nctemp9370 = {{ 3}, (char*)"==\0"};
nctemp9369=&nctemp9370;
nctempchar1* nctemp9367= nctemp9369;
int nctemp9371=LibeStrcmp(nctemp9362,nctemp9367);
int nctemp9359 = (nctemp9371 ==1);
struct tree* nctemp9379= p;
nctempchar1* nctemp9381=PtreeGetdef(nctemp9379);
nctempchar1* nctemp9377= nctemp9381;
struct nctempchar1 *nctemp9384;
static struct nctempchar1 nctemp9385 = {{ 3}, (char*)"!=\0"};
nctemp9384=&nctemp9385;
nctempchar1* nctemp9382= nctemp9384;
int nctemp9386=LibeStrcmp(nctemp9377,nctemp9382);
int nctemp9374 = (nctemp9386 ==1);
int nctemp9356 = (nctemp9359 || nctemp9374);
if(nctemp9356)
{
struct tree* nctemp9393= np;
nctempchar1* nctemp9395=PtreeGetref(nctemp9393);
nctempchar1* nctemp9391= nctemp9395;
struct nctempchar1 *nctemp9398;
static struct nctempchar1 nctemp9399 = {{ 5}, (char*)"aref\0"};
nctemp9398=&nctemp9399;
nctempchar1* nctemp9396= nctemp9398;
int nctemp9400=LibeStrcmp(nctemp9391,nctemp9396);
int nctemp9388 = (nctemp9400 ==1);
if(nctemp9388)
{
sp =np;
struct tree* nctemp9413= np;
struct tree* nctemp9415=PtreeMvsister(nctemp9413);
struct tree* nctemp9411= nctemp9415;
nctempchar1* nctemp9416=PtreeGetname(nctemp9411);
nctempchar1* nctemp9409= nctemp9416;
struct nctempchar1 *nctemp9419;
static struct nctempchar1 nctemp9420 = {{ 10}, (char*)"iconstant\0"};
nctemp9419=&nctemp9420;
nctempchar1* nctemp9417= nctemp9419;
int nctemp9421=LibeStrcmp(nctemp9409,nctemp9417);
struct tree* nctemp9427= np;
struct tree* nctemp9429=PtreeMvsister(nctemp9427);
struct tree* nctemp9425= nctemp9429;
nctempchar1* nctemp9430=PtreeGetdef(nctemp9425);
nctempchar1* nctemp9423= nctemp9430;
struct nctempchar1 *nctemp9433;
static struct nctempchar1 nctemp9434 = {{ 2}, (char*)"0\0"};
nctemp9433=&nctemp9434;
nctempchar1* nctemp9431= nctemp9433;
int nctemp9435=LibeStrcmp(nctemp9423,nctemp9431);
int nctemp9406 = (nctemp9421 && nctemp9435);
if(nctemp9406)
{
struct tree* nctemp9437= p;
struct nctempchar1 *nctemp9441;
static struct nctempchar1 nctemp9442 = {{ 7}, (char*)"nctemp\0"};
nctemp9441=&nctemp9442;
nctempchar1* nctemp9439= nctemp9441;
int nctemp9443=CodeEs(nctemp9437,nctemp9439);
struct tree* nctemp9445= p;
struct tree* nctemp9449= sp;
nctempchar1* nctemp9451=PtreeGetype(nctemp9449);
nctempchar1* nctemp9447= nctemp9451;
int nctemp9452=CodeEs(nctemp9445,nctemp9447);
struct tree* nctemp9456= sp;
int nctemp9458=PtreeGetrank(nctemp9456);
int nctemp9454= nctemp9458;
int nctemp9459=CodeEd(nctemp9454);
struct tree* nctemp9461= p;
struct nctempchar1 *nctemp9465;
static struct nctempchar1 nctemp9466 = {{ 3}, (char*)" *\0"};
nctemp9465=&nctemp9466;
nctempchar1* nctemp9463= nctemp9465;
int nctemp9467=CodeEs(nctemp9461,nctemp9463);
struct tree* nctemp9469= p;
nctempchar1* nctemp9471= tempi;
int nctemp9474=CodeEs(nctemp9469,nctemp9471);
struct tree* nctemp9476= p;
struct nctempchar1 *nctemp9480;
static struct nctempchar1 nctemp9481 = {{ 3}, (char*)" =\0"};
nctemp9480=&nctemp9481;
nctempchar1* nctemp9478= nctemp9480;
int nctemp9482=CodeEs(nctemp9476,nctemp9478);
struct tree* nctemp9484= p;
nctempchar1* nctemp9486= lval;
int nctemp9489=CodeEs(nctemp9484,nctemp9486);
struct tree* nctemp9491= p;
struct nctempchar1 *nctemp9495;
static struct nctempchar1 nctemp9496 = {{ 4}, (char*)";\n\0"};
nctemp9495=&nctemp9496;
nctempchar1* nctemp9493= nctemp9495;
int nctemp9497=CodeEs(nctemp9491,nctemp9493);
struct tree* nctemp9499= p;
nctempchar1* nctemp9501= type;
int nctemp9504=CodeEs(nctemp9499,nctemp9501);
struct tree* nctemp9506= p;
struct nctempchar1 *nctemp9510;
static struct nctempchar1 nctemp9511 = {{ 2}, (char*)" \0"};
nctemp9510=&nctemp9511;
nctempchar1* nctemp9508= nctemp9510;
int nctemp9512=CodeEs(nctemp9506,nctemp9508);
struct tree* nctemp9514= p;
nctempchar1* nctemp9516= tempr;
int nctemp9519=CodeEs(nctemp9514,nctemp9516);
struct tree* nctemp9521= p;
struct nctempchar1 *nctemp9525;
static struct nctempchar1 nctemp9526 = {{ 4}, (char*)" =(\0"};
nctemp9525=&nctemp9526;
nctempchar1* nctemp9523= nctemp9525;
int nctemp9527=CodeEs(nctemp9521,nctemp9523);
struct tree* nctemp9529= p;
nctempchar1* nctemp9531= tempi;
int nctemp9534=CodeEs(nctemp9529,nctemp9531);
struct tree* nctemp9536= p;
struct tree* nctemp9540= p;
nctempchar1* nctemp9542=PtreeGetdef(nctemp9540);
nctempchar1* nctemp9538= nctemp9542;
int nctemp9543=CodeEs(nctemp9536,nctemp9538);
struct tree* nctemp9545= p;
nctempchar1* nctemp9547= rval;
int nctemp9550=CodeEs(nctemp9545,nctemp9547);
struct tree* nctemp9552= p;
struct nctempchar1 *nctemp9556;
static struct nctempchar1 nctemp9557 = {{ 5}, (char*)");\n\0"};
nctemp9556=&nctemp9557;
nctempchar1* nctemp9554= nctemp9556;
int nctemp9558=CodeEs(nctemp9552,nctemp9554);
return tempr;
}
else{
struct tree* nctemp9562= p;
nctempchar1* nctemp9564= type;
int nctemp9567=CodeEs(nctemp9562,nctemp9564);
struct tree* nctemp9569= p;
struct nctempchar1 *nctemp9573;
static struct nctempchar1 nctemp9574 = {{ 2}, (char*)" \0"};
nctemp9573=&nctemp9574;
nctempchar1* nctemp9571= nctemp9573;
int nctemp9575=CodeEs(nctemp9569,nctemp9571);
struct tree* nctemp9577= p;
nctempchar1* nctemp9579= tempr;
int nctemp9582=CodeEs(nctemp9577,nctemp9579);
struct tree* nctemp9584= p;
struct nctempchar1 *nctemp9588;
static struct nctempchar1 nctemp9589 = {{ 5}, (char*)" = (\0"};
nctemp9588=&nctemp9589;
nctempchar1* nctemp9586= nctemp9588;
int nctemp9590=CodeEs(nctemp9584,nctemp9586);
struct tree* nctemp9592= p;
nctempchar1* nctemp9594= lval;
int nctemp9597=CodeEs(nctemp9592,nctemp9594);
struct tree* nctemp9599= p;
struct tree* nctemp9603= p;
nctempchar1* nctemp9605=PtreeGetdef(nctemp9603);
nctempchar1* nctemp9601= nctemp9605;
int nctemp9606=CodeEs(nctemp9599,nctemp9601);
struct tree* nctemp9608= p;
nctempchar1* nctemp9610= rval;
int nctemp9613=CodeEs(nctemp9608,nctemp9610);
struct tree* nctemp9615= p;
struct nctempchar1 *nctemp9619;
static struct nctempchar1 nctemp9620 = {{ 5}, (char*)");\n\0"};
nctemp9619=&nctemp9620;
nctempchar1* nctemp9617= nctemp9619;
int nctemp9621=CodeEs(nctemp9615,nctemp9617);
return lval;
}
}
else{
struct tree* nctemp9625= p;
nctempchar1* nctemp9627= type;
int nctemp9630=CodeEs(nctemp9625,nctemp9627);
struct tree* nctemp9632= p;
struct nctempchar1 *nctemp9636;
static struct nctempchar1 nctemp9637 = {{ 2}, (char*)" \0"};
nctemp9636=&nctemp9637;
nctempchar1* nctemp9634= nctemp9636;
int nctemp9638=CodeEs(nctemp9632,nctemp9634);
struct tree* nctemp9640= p;
nctempchar1* nctemp9642= tempr;
int nctemp9645=CodeEs(nctemp9640,nctemp9642);
struct tree* nctemp9647= p;
struct nctempchar1 *nctemp9651;
static struct nctempchar1 nctemp9652 = {{ 5}, (char*)" = (\0"};
nctemp9651=&nctemp9652;
nctempchar1* nctemp9649= nctemp9651;
int nctemp9653=CodeEs(nctemp9647,nctemp9649);
struct tree* nctemp9655= p;
nctempchar1* nctemp9657= lval;
int nctemp9660=CodeEs(nctemp9655,nctemp9657);
struct tree* nctemp9662= p;
struct nctempchar1 *nctemp9666;
static struct nctempchar1 nctemp9667 = {{ 2}, (char*)" \0"};
nctemp9666=&nctemp9667;
nctempchar1* nctemp9664= nctemp9666;
int nctemp9668=CodeEs(nctemp9662,nctemp9664);
struct tree* nctemp9670= p;
struct tree* nctemp9674= p;
nctempchar1* nctemp9676=PtreeGetdef(nctemp9674);
nctempchar1* nctemp9672= nctemp9676;
int nctemp9677=CodeEs(nctemp9670,nctemp9672);
struct tree* nctemp9679= p;
nctempchar1* nctemp9681= rval;
int nctemp9684=CodeEs(nctemp9679,nctemp9681);
struct tree* nctemp9686= p;
struct nctempchar1 *nctemp9690;
static struct nctempchar1 nctemp9691 = {{ 5}, (char*)");\n\0"};
nctemp9690=&nctemp9691;
nctempchar1* nctemp9688= nctemp9690;
int nctemp9692=CodeEs(nctemp9686,nctemp9688);
return tempr;
}
}
else{
struct tree* nctemp9696= p;
nctempchar1* nctemp9698= type;
int nctemp9701=CodeEs(nctemp9696,nctemp9698);
struct tree* nctemp9703= p;
struct nctempchar1 *nctemp9707;
static struct nctempchar1 nctemp9708 = {{ 2}, (char*)" \0"};
nctemp9707=&nctemp9708;
nctempchar1* nctemp9705= nctemp9707;
int nctemp9709=CodeEs(nctemp9703,nctemp9705);
struct tree* nctemp9711= p;
nctempchar1* nctemp9713= tempr;
int nctemp9716=CodeEs(nctemp9711,nctemp9713);
struct tree* nctemp9718= p;
struct nctempchar1 *nctemp9722;
static struct nctempchar1 nctemp9723 = {{ 5}, (char*)" = (\0"};
nctemp9722=&nctemp9723;
nctempchar1* nctemp9720= nctemp9722;
int nctemp9724=CodeEs(nctemp9718,nctemp9720);
struct tree* nctemp9726= p;
nctempchar1* nctemp9728= lval;
int nctemp9731=CodeEs(nctemp9726,nctemp9728);
struct tree* nctemp9733= p;
struct nctempchar1 *nctemp9737;
static struct nctempchar1 nctemp9738 = {{ 2}, (char*)" \0"};
nctemp9737=&nctemp9738;
nctempchar1* nctemp9735= nctemp9737;
int nctemp9739=CodeEs(nctemp9733,nctemp9735);
struct tree* nctemp9741= p;
struct tree* nctemp9745= p;
nctempchar1* nctemp9747=PtreeGetdef(nctemp9745);
nctempchar1* nctemp9743= nctemp9747;
int nctemp9748=CodeEs(nctemp9741,nctemp9743);
struct tree* nctemp9750= p;
struct nctempchar1 *nctemp9754;
static struct nctempchar1 nctemp9755 = {{ 2}, (char*)" \0"};
nctemp9754=&nctemp9755;
nctempchar1* nctemp9752= nctemp9754;
int nctemp9756=CodeEs(nctemp9750,nctemp9752);
struct tree* nctemp9758= p;
nctempchar1* nctemp9760= rval;
int nctemp9763=CodeEs(nctemp9758,nctemp9760);
struct tree* nctemp9765= p;
struct nctempchar1 *nctemp9769;
static struct nctempchar1 nctemp9770 = {{ 5}, (char*)");\n\0"};
nctemp9769=&nctemp9770;
nctempchar1* nctemp9767= nctemp9769;
int nctemp9771=CodeEs(nctemp9765,nctemp9767);
return tempr;
}
}
}
}
else{
struct tree* nctemp9775= p;
nctempchar1* nctemp9777=CodeUnexpr(nctemp9775);
return nctemp9777;
}
}
int CodeDimprod (struct tree* p,nctempchar1 *name,int n)
{
int j;
j =0;
int nctemp9790 = n - 1;
int nctemp9782 = (j < nctemp9790);
while(nctemp9782){
{
struct tree* nctemp9792= p;
nctempchar1* nctemp9794= name;
int nctemp9797=CodeEs(nctemp9792,nctemp9794);
struct tree* nctemp9799= p;
struct nctempchar1 *nctemp9803;
static struct nctempchar1 nctemp9804 = {{ 5}, (char*)"->d[\0"};
nctemp9803=&nctemp9804;
nctempchar1* nctemp9801= nctemp9803;
int nctemp9805=CodeEs(nctemp9799,nctemp9801);
int nctemp9807= j;
int nctemp9809=CodeEd(nctemp9807);
struct tree* nctemp9811= p;
struct nctempchar1 *nctemp9815;
static struct nctempchar1 nctemp9816 = {{ 2}, (char*)"]\0"};
nctemp9815=&nctemp9816;
nctempchar1* nctemp9813= nctemp9815;
int nctemp9817=CodeEs(nctemp9811,nctemp9813);
struct tree* nctemp9819= p;
struct nctempchar1 *nctemp9823;
static struct nctempchar1 nctemp9824 = {{ 2}, (char*)"*\0"};
nctemp9823=&nctemp9824;
nctempchar1* nctemp9821= nctemp9823;
int nctemp9825=CodeEs(nctemp9819,nctemp9821);
}
int nctemp9834 = j + 1;
j =nctemp9834;
int nctemp9843 = n - 1;
int nctemp9835 = (j < nctemp9843);
nctemp9782=nctemp9835;
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
struct tree* nctemp9850= p;
nctempchar1* nctemp9852=PtreeGetdef(nctemp9850);
name=nctemp9852;
nctempchar1* nctemp9857= name;
struct symbol* nctemp9860=SymLook(nctemp9857);
tp =nctemp9860;
int nctemp9861 = (tp ==0);
if(nctemp9861)
{
nctempchar1* nctemp9866= name;
int nctemp9869=CodeError(nctemp9866);
}
struct symbol* nctemp9874= tp;
int nctemp9876=SymGetrank(nctemp9874);
rank =nctemp9876;
struct tree* nctemp9881= p;
struct tree* nctemp9883=PtreeMvchild(nctemp9881);
sp =nctemp9883;
int nctemp9884 = (sp ==0);
if(nctemp9884)
{
struct tree* nctemp9889= p;
struct tree* nctemp9893= p;
nctempchar1* nctemp9895=PtreeGetdef(nctemp9893);
nctempchar1* nctemp9891= nctemp9895;
int nctemp9896=CodeEs(nctemp9889,nctemp9891);
return 1;
}
else{
struct tree* nctemp9903= sp;
nctempchar1* nctemp9905=PtreeGetname(nctemp9903);
nctempchar1* nctemp9901= nctemp9905;
struct nctempchar1 *nctemp9908;
static struct nctempchar1 nctemp9909 = {{ 9}, (char*)"exprlist\0"};
nctemp9908=&nctemp9909;
nctempchar1* nctemp9906= nctemp9908;
int nctemp9910=LibeStrcmp(nctemp9901,nctemp9906);
int nctemp9898 = (nctemp9910 ==0);
if(nctemp9898)
{
struct tree* nctemp9913= p;
struct tree* nctemp9917= p;
nctempchar1* nctemp9919=PtreeGetdef(nctemp9917);
nctempchar1* nctemp9915= nctemp9919;
int nctemp9920=CodeEs(nctemp9913,nctemp9915);
return 1;
}
}
p = sp;
struct tree* nctemp9926= p;
struct tree* nctemp9928=PtreeMvchild(nctemp9926);
p =nctemp9928;
struct tree* nctemp9930= p;
nctempchar1* nctemp9932= name;
int nctemp9935=CodeEs(nctemp9930,nctemp9932);
struct tree* nctemp9937= p;
struct nctempchar1 *nctemp9941;
static struct nctempchar1 nctemp9942 = {{ 4}, (char*)"->a\0"};
nctemp9941=&nctemp9942;
nctempchar1* nctemp9939= nctemp9941;
int nctemp9943=CodeEs(nctemp9937,nctemp9939);
struct tree* nctemp9945= p;
struct nctempchar1 *nctemp9949;
static struct nctempchar1 nctemp9950 = {{ 2}, (char*)"[\0"};
nctemp9949=&nctemp9950;
nctempchar1* nctemp9947= nctemp9949;
int nctemp9951=CodeEs(nctemp9945,nctemp9947);
q = p;
nctempchar1 *nctemp9953 =qname;
int nctemp9952 =(nctemp9953!=0);
if(nctemp9952)
{
nctempchar1* nctemp9962= qname;
nctempchar1* nctemp9965= name;
nctempchar1* nctemp9968=LibeStradd(nctemp9962,nctemp9965);
qname=nctemp9968;
}
else{
nctempchar1* nctemp9974= name;
nctempchar1* nctemp9977=LibeStrsave(nctemp9974);
qname=nctemp9977;
}
i =0;
int nctemp9982 = (i < rank);
while(nctemp9982){
{
int nctemp9986 = (i ==0);
if(nctemp9986)
{
struct tree* nctemp9991= q;
int nctemp9993=CodeSexpr(nctemp9991);
}
else{
struct tree* nctemp9998= q;
struct tree* nctemp10000=PtreeMvsister(nctemp9998);
q =nctemp10000;
struct tree* nctemp10002= p;
struct nctempchar1 *nctemp10006;
static struct nctempchar1 nctemp10007 = {{ 2}, (char*)"+\0"};
nctemp10006=&nctemp10007;
nctempchar1* nctemp10004= nctemp10006;
int nctemp10008=CodeEs(nctemp10002,nctemp10004);
struct tree* nctemp10010= p;
nctempchar1* nctemp10012= qname;
int nctemp10020 = i + 1;
int nctemp10015= nctemp10020;
int nctemp10021=CodeDimprod(nctemp10010,nctemp10012,nctemp10015);
struct tree* nctemp10023= q;
int nctemp10025=CodeSexpr(nctemp10023);
}
}
int nctemp10034 = i + 1;
i =nctemp10034;
int nctemp10035 = (i < rank);
nctemp9982=nctemp10035;
}
struct tree* nctemp10040= p;
struct nctempchar1 *nctemp10044;
static struct nctempchar1 nctemp10045 = {{ 2}, (char*)"]\0"};
nctemp10044=&nctemp10045;
nctempchar1* nctemp10042= nctemp10044;
int nctemp10046=CodeEs(nctemp10040,nctemp10042);
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
struct tree* nctemp10056= p;
nctempchar1* nctemp10058=PtreeGetarray(nctemp10056);
nctempchar1* nctemp10054= nctemp10058;
struct nctempchar1 *nctemp10061;
static struct nctempchar1 nctemp10062 = {{ 6}, (char*)"array\0"};
nctemp10061=&nctemp10062;
nctempchar1* nctemp10059= nctemp10061;
int nctemp10063=LibeStrcmp(nctemp10054,nctemp10059);
int nctemp10051 = (nctemp10063 ==1);
if(nctemp10051)
{
struct tree* nctemp10066= p;
nctempchar1* nctemp10068= qname;
int nctemp10071=CodeSarray(nctemp10066,nctemp10068);
struct tree* nctemp10076= p;
struct tree* nctemp10078=PtreeMvchild(nctemp10076);
np =nctemp10078;
int nctemp10079 = (np ==0);
if(nctemp10079)
{
return 1;
}
struct tree* nctemp10088= np;
struct tree* nctemp10090=PtreeMvsister(nctemp10088);
sp =nctemp10090;
int nctemp10091 = (sp ==0);
if(nctemp10091)
{
return 1;
}
struct tree* nctemp10097= p;
struct nctempchar1 *nctemp10101;
static struct nctempchar1 nctemp10102 = {{ 2}, (char*)".\0"};
nctemp10101=&nctemp10102;
nctempchar1* nctemp10099= nctemp10101;
int nctemp10103=CodeEs(nctemp10097,nctemp10099);
struct tree* nctemp10111= p;
nctempchar1* nctemp10113=PtreeGetdef(nctemp10111);
nctempchar1* nctemp10109= nctemp10113;
struct nctempchar1 *nctemp10116;
static struct nctempchar1 nctemp10117 = {{ 2}, (char*)".\0"};
nctemp10116=&nctemp10117;
nctempchar1* nctemp10114= nctemp10116;
nctempchar1* nctemp10118=LibeStradd(nctemp10109,nctemp10114);
qname=nctemp10118;
}
else{
struct tree* nctemp10120= p;
struct tree* nctemp10124= p;
nctempchar1* nctemp10126=PtreeGetdef(nctemp10124);
nctempchar1* nctemp10122= nctemp10126;
int nctemp10127=CodeEs(nctemp10120,nctemp10122);
struct tree* nctemp10135= p;
nctempchar1* nctemp10137=PtreeGetdef(nctemp10135);
nctempchar1* nctemp10133= nctemp10137;
struct nctempchar1 *nctemp10140;
static struct nctempchar1 nctemp10141 = {{ 3}, (char*)"->\0"};
nctemp10140=&nctemp10141;
nctempchar1* nctemp10138= nctemp10140;
nctempchar1* nctemp10142=LibeStradd(nctemp10133,nctemp10138);
qname=nctemp10142;
struct tree* nctemp10147= p;
struct tree* nctemp10149=PtreeMvchild(nctemp10147);
sp =nctemp10149;
int nctemp10150 = (sp ==0);
if(nctemp10150)
{
return 1;
}
struct tree* nctemp10156= p;
struct nctempchar1 *nctemp10160;
static struct nctempchar1 nctemp10161 = {{ 3}, (char*)"->\0"};
nctemp10160=&nctemp10161;
nctempchar1* nctemp10158= nctemp10160;
int nctemp10162=CodeEs(nctemp10156,nctemp10158);
}
struct tree* nctemp10168= sp;
nctempchar1* nctemp10170=PtreeGetarray(nctemp10168);
nctempchar1* nctemp10166= nctemp10170;
struct nctempchar1 *nctemp10173;
static struct nctempchar1 nctemp10174 = {{ 6}, (char*)"array\0"};
nctemp10173=&nctemp10174;
nctempchar1* nctemp10171= nctemp10173;
int nctemp10175=LibeStrcmp(nctemp10166,nctemp10171);
int nctemp10163 = (nctemp10175 ==1);
if(nctemp10163)
{
tp =SymLtp;
up =SymEtp;
struct tree* nctemp10191= p;
nctempchar1* nctemp10193=PtreeGetdef(nctemp10191);
nctempchar1* nctemp10189= nctemp10193;
struct symbol* nctemp10194=SymLook(nctemp10189);
uup =nctemp10194;
struct symbol* nctemp10201= uup;
nctempchar1* nctemp10203=SymGetype(nctemp10201);
nctempchar1* nctemp10199= nctemp10203;
struct symbol* nctemp10204=SymLook(nctemp10199);
uup =nctemp10204;
struct symbol* nctemp10209= uup;
struct symbol* nctemp10211=SymGetable(nctemp10209);
SymLtp =nctemp10211;
struct tree* nctemp10213= sp;
nctempchar1* nctemp10215= qname;
int nctemp10218=CodeSarray(nctemp10213,nctemp10215);
RunFree(qname->a);
RunFree(qname);
SymLtp =tp;
SymEtp =up;
}
else{
struct tree* nctemp10231= p;
struct tree* nctemp10235= sp;
nctempchar1* nctemp10237=PtreeGetdef(nctemp10235);
nctempchar1* nctemp10233= nctemp10237;
int nctemp10238=CodeEs(nctemp10231,nctemp10233);
}
return 1;
}
int CodeSident (struct tree* p)
{
nctempchar1 *qname;
qname  = 0;
struct tree* nctemp10245= p;
nctempchar1* nctemp10247=PtreeGetstruct(nctemp10245);
nctempchar1* nctemp10243= nctemp10247;
struct nctempchar1 *nctemp10250;
static struct nctempchar1 nctemp10251 = {{ 7}, (char*)"struct\0"};
nctemp10250=&nctemp10251;
nctempchar1* nctemp10248= nctemp10250;
int nctemp10252=LibeStrcmp(nctemp10243,nctemp10248);
int nctemp10240 = (nctemp10252 ==1);
if(nctemp10240)
{
struct tree* nctemp10255= p;
int nctemp10257=CodeIdstruct(nctemp10255);
}
else{
struct tree* nctemp10263= p;
nctempchar1* nctemp10265=PtreeGetarray(nctemp10263);
nctempchar1* nctemp10261= nctemp10265;
struct nctempchar1 *nctemp10268;
static struct nctempchar1 nctemp10269 = {{ 6}, (char*)"array\0"};
nctemp10268=&nctemp10269;
nctempchar1* nctemp10266= nctemp10268;
int nctemp10270=LibeStrcmp(nctemp10261,nctemp10266);
int nctemp10258 = (nctemp10270 ==1);
if(nctemp10258)
{
struct tree* nctemp10273= p;
nctempchar1* nctemp10275= qname;
int nctemp10278=CodeSarray(nctemp10273,nctemp10275);
return 1;
}
else{
struct tree* nctemp10281= p;
struct tree* nctemp10285= p;
nctempchar1* nctemp10287=PtreeGetdef(nctemp10285);
nctempchar1* nctemp10283= nctemp10287;
int nctemp10288=CodeEs(nctemp10281,nctemp10283);
return 1;
}
}
return 1;
}
int CodeSfcall (struct tree* p)
{
struct symbol* tp;
struct tree* sp;
struct tree* nctemp10297= p;
nctempchar1* nctemp10299=PtreeGetdef(nctemp10297);
nctempchar1* nctemp10295= nctemp10299;
struct symbol* nctemp10300= SymEtp;
struct symbol* nctemp10302=SymLookup(nctemp10295,nctemp10300);
tp =nctemp10302;
struct tree* nctemp10307= p;
struct tree* nctemp10309=PtreeMvchild(nctemp10307);
sp =nctemp10309;
int nctemp10310 = (sp !=0);
if(nctemp10310)
{
struct tree* nctemp10319= sp;
nctempchar1* nctemp10321=PtreeGetname(nctemp10319);
nctempchar1* nctemp10317= nctemp10321;
struct nctempchar1 *nctemp10324;
static struct nctempchar1 nctemp10325 = {{ 9}, (char*)"exprlist\0"};
nctemp10324=&nctemp10325;
nctempchar1* nctemp10322= nctemp10324;
int nctemp10326=LibeStrcmp(nctemp10317,nctemp10322);
int nctemp10314 = (nctemp10326 ==1);
if(nctemp10314)
{
struct tree* nctemp10332= sp;
struct tree* nctemp10334=PtreeMvchild(nctemp10332);
sp =nctemp10334;
}
}
struct tree* nctemp10336= p;
struct symbol* nctemp10340= tp;
nctempchar1* nctemp10342=SymGetname(nctemp10340);
nctempchar1* nctemp10338= nctemp10342;
int nctemp10343=CodeEs(nctemp10336,nctemp10338);
struct tree* nctemp10345= p;
struct nctempchar1 *nctemp10349;
static struct nctempchar1 nctemp10350 = {{ 2}, (char*)"(\0"};
nctemp10349=&nctemp10350;
nctempchar1* nctemp10347= nctemp10349;
int nctemp10351=CodeEs(nctemp10345,nctemp10347);
int nctemp10352 = (sp !=0);
int nctemp10356=nctemp10352;
while(nctemp10356)
{{
struct tree* nctemp10358= sp;
int nctemp10360=CodeSexpr(nctemp10358);
struct tree* nctemp10368= sp;
struct tree* nctemp10370=PtreeMvsister(nctemp10368);
sp =nctemp10370;
int nctemp10361 = (sp !=0);
if(nctemp10361)
{
struct tree* nctemp10373= p;
struct nctempchar1 *nctemp10377;
static struct nctempchar1 nctemp10378 = {{ 2}, (char*)",\0"};
nctemp10377=&nctemp10378;
nctempchar1* nctemp10375= nctemp10377;
int nctemp10379=CodeEs(nctemp10373,nctemp10375);
}
}
int nctemp10380 = (sp !=0);
nctemp10356=nctemp10380;}struct tree* nctemp10385= p;
struct nctempchar1 *nctemp10389;
static struct nctempchar1 nctemp10390 = {{ 2}, (char*)")\0"};
nctemp10389=&nctemp10390;
nctempchar1* nctemp10387= nctemp10389;
int nctemp10391=CodeEs(nctemp10385,nctemp10387);
return 1;
}
int CodeScast (struct tree* p)
{
struct tree* np;
struct tree* sp;
struct tree* nctemp10398= p;
nctempchar1* nctemp10400=PtreeGetname(nctemp10398);
nctempchar1* nctemp10396= nctemp10400;
struct nctempchar1 *nctemp10403;
static struct nctempchar1 nctemp10404 = {{ 5}, (char*)"cast\0"};
nctemp10403=&nctemp10404;
nctempchar1* nctemp10401= nctemp10403;
int nctemp10405=LibeStrcmp(nctemp10396,nctemp10401);
int nctemp10393 = (nctemp10405 ==1);
if(nctemp10393)
{
struct tree* nctemp10411= p;
struct tree* nctemp10413=PtreeMvchild(nctemp10411);
np =nctemp10413;
struct tree* nctemp10418= np;
struct tree* nctemp10420=PtreeMvsister(nctemp10418);
sp =nctemp10420;
struct tree* nctemp10422= p;
struct nctempchar1 *nctemp10426;
static struct nctempchar1 nctemp10427 = {{ 2}, (char*)"(\0"};
nctemp10426=&nctemp10427;
nctempchar1* nctemp10424= nctemp10426;
int nctemp10428=CodeEs(nctemp10422,nctemp10424);
struct tree* nctemp10434= np;
nctempchar1* nctemp10436=PtreeGetstruct(nctemp10434);
nctempchar1* nctemp10432= nctemp10436;
struct nctempchar1 *nctemp10439;
static struct nctempchar1 nctemp10440 = {{ 7}, (char*)"struct\0"};
nctemp10439=&nctemp10440;
nctempchar1* nctemp10437= nctemp10439;
int nctemp10441=LibeStrcmp(nctemp10432,nctemp10437);
int nctemp10429 = (nctemp10441 ==1);
if(nctemp10429)
{
struct tree* nctemp10444= p;
struct nctempchar1 *nctemp10448;
static struct nctempchar1 nctemp10449 = {{ 8}, (char*)"struct \0"};
nctemp10448=&nctemp10449;
nctempchar1* nctemp10446= nctemp10448;
int nctemp10450=CodeEs(nctemp10444,nctemp10446);
}
struct tree* nctemp10452= p;
struct tree* nctemp10456= np;
nctempchar1* nctemp10458=PtreeGetdef(nctemp10456);
nctempchar1* nctemp10454= nctemp10458;
int nctemp10459=CodeEs(nctemp10452,nctemp10454);
struct tree* nctemp10465= np;
nctempchar1* nctemp10467=PtreeGetstruct(nctemp10465);
nctempchar1* nctemp10463= nctemp10467;
struct nctempchar1 *nctemp10470;
static struct nctempchar1 nctemp10471 = {{ 6}, (char*)"array\0"};
nctemp10470=&nctemp10471;
nctempchar1* nctemp10468= nctemp10470;
int nctemp10472=LibeStrcmp(nctemp10463,nctemp10468);
int nctemp10460 = (nctemp10472 ==1);
if(nctemp10460)
{
struct tree* nctemp10475= p;
struct nctempchar1 *nctemp10479;
static struct nctempchar1 nctemp10480 = {{ 2}, (char*)"*\0"};
nctemp10479=&nctemp10480;
nctempchar1* nctemp10477= nctemp10479;
int nctemp10481=CodeEs(nctemp10475,nctemp10477);
}
struct tree* nctemp10483= p;
struct nctempchar1 *nctemp10487;
static struct nctempchar1 nctemp10488 = {{ 3}, (char*)")(\0"};
nctemp10487=&nctemp10488;
nctempchar1* nctemp10485= nctemp10487;
int nctemp10489=CodeEs(nctemp10483,nctemp10485);
struct tree* nctemp10491= sp;
int nctemp10493=CodeSexpr(nctemp10491);
struct tree* nctemp10495= p;
struct nctempchar1 *nctemp10499;
static struct nctempchar1 nctemp10500 = {{ 2}, (char*)")\0"};
nctemp10499=&nctemp10500;
nctempchar1* nctemp10497= nctemp10499;
int nctemp10501=CodeEs(nctemp10495,nctemp10497);
}
return 1;
}
int CodeSprimexpr (struct tree* p)
{
struct tree* nctemp10508= p;
nctempchar1* nctemp10510=PtreeGetname(nctemp10508);
nctempchar1* nctemp10506= nctemp10510;
struct nctempchar1 *nctemp10513;
static struct nctempchar1 nctemp10514 = {{ 11}, (char*)"identifier\0"};
nctemp10513=&nctemp10514;
nctempchar1* nctemp10511= nctemp10513;
int nctemp10515=LibeStrcmp(nctemp10506,nctemp10511);
int nctemp10503 = (nctemp10515 ==1);
if(nctemp10503)
{
struct tree* nctemp10518= p;
int nctemp10520=CodeSident(nctemp10518);
}
else{
struct tree* nctemp10526= p;
nctempchar1* nctemp10528=PtreeGetname(nctemp10526);
nctempchar1* nctemp10524= nctemp10528;
struct nctempchar1 *nctemp10531;
static struct nctempchar1 nctemp10532 = {{ 6}, (char*)"fcall\0"};
nctemp10531=&nctemp10532;
nctempchar1* nctemp10529= nctemp10531;
int nctemp10533=LibeStrcmp(nctemp10524,nctemp10529);
int nctemp10521 = (nctemp10533 ==1);
if(nctemp10521)
{
struct tree* nctemp10536= p;
int nctemp10538=CodeSfcall(nctemp10536);
}
else{
struct tree* nctemp10544= p;
nctempchar1* nctemp10546=PtreeGetname(nctemp10544);
nctempchar1* nctemp10542= nctemp10546;
struct nctempchar1 *nctemp10549;
static struct nctempchar1 nctemp10550 = {{ 5}, (char*)"cast\0"};
nctemp10549=&nctemp10550;
nctempchar1* nctemp10547= nctemp10549;
int nctemp10551=LibeStrcmp(nctemp10542,nctemp10547);
int nctemp10539 = (nctemp10551 ==1);
if(nctemp10539)
{
struct tree* nctemp10554= p;
int nctemp10556=CodeScast(nctemp10554);
}
else{
struct tree* nctemp10562= p;
nctempchar1* nctemp10564=PtreeGetname(nctemp10562);
nctempchar1* nctemp10560= nctemp10564;
struct nctempchar1 *nctemp10567;
static struct nctempchar1 nctemp10568 = {{ 10}, (char*)"iconstant\0"};
nctemp10567=&nctemp10568;
nctempchar1* nctemp10565= nctemp10567;
int nctemp10569=LibeStrcmp(nctemp10560,nctemp10565);
int nctemp10557 = (nctemp10569 ==1);
if(nctemp10557)
{
struct tree* nctemp10572= p;
struct tree* nctemp10576= p;
nctempchar1* nctemp10578=PtreeGetdef(nctemp10576);
nctempchar1* nctemp10574= nctemp10578;
int nctemp10579=CodeEs(nctemp10572,nctemp10574);
}
else{
struct tree* nctemp10585= p;
nctempchar1* nctemp10587=PtreeGetname(nctemp10585);
nctempchar1* nctemp10583= nctemp10587;
struct nctempchar1 *nctemp10590;
static struct nctempchar1 nctemp10591 = {{ 10}, (char*)"sconstant\0"};
nctemp10590=&nctemp10591;
nctempchar1* nctemp10588= nctemp10590;
int nctemp10592=LibeStrcmp(nctemp10583,nctemp10588);
int nctemp10580 = (nctemp10592 ==1);
if(nctemp10580)
{
struct tree* nctemp10595= p;
struct tree* nctemp10599= p;
nctempchar1* nctemp10601=PtreeGetdef(nctemp10599);
nctempchar1* nctemp10597= nctemp10601;
int nctemp10602=CodeEs(nctemp10595,nctemp10597);
}
else{
struct tree* nctemp10608= p;
nctempchar1* nctemp10610=PtreeGetname(nctemp10608);
nctempchar1* nctemp10606= nctemp10610;
struct nctempchar1 *nctemp10613;
static struct nctempchar1 nctemp10614 = {{ 10}, (char*)"rconstant\0"};
nctemp10613=&nctemp10614;
nctempchar1* nctemp10611= nctemp10613;
int nctemp10615=LibeStrcmp(nctemp10606,nctemp10611);
int nctemp10603 = (nctemp10615 ==1);
if(nctemp10603)
{
struct tree* nctemp10618= p;
struct tree* nctemp10622= p;
nctempchar1* nctemp10624=PtreeGetdef(nctemp10622);
nctempchar1* nctemp10620= nctemp10624;
int nctemp10625=CodeEs(nctemp10618,nctemp10620);
}
else{
struct tree* nctemp10627= p;
struct nctempchar1 *nctemp10631;
static struct nctempchar1 nctemp10632 = {{ 2}, (char*)"(\0"};
nctemp10631=&nctemp10632;
nctempchar1* nctemp10629= nctemp10631;
int nctemp10633=CodeEs(nctemp10627,nctemp10629);
struct tree* nctemp10635= p;
int nctemp10637=CodeSbinexpr(nctemp10635);
struct tree* nctemp10639= p;
struct nctempchar1 *nctemp10643;
static struct nctempchar1 nctemp10644 = {{ 2}, (char*)")\0"};
nctemp10643=&nctemp10644;
nctempchar1* nctemp10641= nctemp10643;
int nctemp10645=CodeEs(nctemp10639,nctemp10641);
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
struct tree* nctemp10652= p;
nctempchar1* nctemp10654=PtreeGetname(nctemp10652);
nctempchar1* nctemp10650= nctemp10654;
struct nctempchar1 *nctemp10657;
static struct nctempchar1 nctemp10658 = {{ 7}, (char*)"unexpr\0"};
nctemp10657=&nctemp10658;
nctempchar1* nctemp10655= nctemp10657;
int nctemp10659=LibeStrcmp(nctemp10650,nctemp10655);
int nctemp10647 = (nctemp10659 ==1);
if(nctemp10647)
{
struct tree* nctemp10662= p;
struct nctempchar1 *nctemp10666;
static struct nctempchar1 nctemp10667 = {{ 3}, (char*)" -\0"};
nctemp10666=&nctemp10667;
nctempchar1* nctemp10664= nctemp10666;
int nctemp10668=CodeEs(nctemp10662,nctemp10664);
struct tree* nctemp10672= p;
struct tree* nctemp10674=PtreeMvchild(nctemp10672);
struct tree* nctemp10670= nctemp10674;
int nctemp10675=CodeSprimexpr(nctemp10670);
}
else{
struct tree* nctemp10677= p;
int nctemp10679=CodeSprimexpr(nctemp10677);
}
return 1;
}
int CodeSbinexpr (struct tree* p)
{
struct tree* np;
struct tree* nctemp10686= p;
nctempchar1* nctemp10688=PtreeGetname(nctemp10686);
nctempchar1* nctemp10684= nctemp10688;
struct nctempchar1 *nctemp10691;
static struct nctempchar1 nctemp10692 = {{ 8}, (char*)"binexpr\0"};
nctemp10691=&nctemp10692;
nctempchar1* nctemp10689= nctemp10691;
int nctemp10693=LibeStrcmp(nctemp10684,nctemp10689);
int nctemp10681 = (nctemp10693 ==1);
if(nctemp10681)
{
struct tree* nctemp10699= p;
struct tree* nctemp10701=PtreeMvchild(nctemp10699);
np =nctemp10701;
struct tree* nctemp10703= np;
int nctemp10705=CodeSunexpr(nctemp10703);
struct tree* nctemp10717= p;
nctempchar1* nctemp10719=PtreeGetdef(nctemp10717);
nctempchar1* nctemp10715= nctemp10719;
struct nctempchar1 *nctemp10722;
static struct nctempchar1 nctemp10723 = {{ 2}, (char*)"=\0"};
nctemp10722=&nctemp10723;
nctempchar1* nctemp10720= nctemp10722;
int nctemp10724=LibeStrcmp(nctemp10715,nctemp10720);
int nctemp10712 = (nctemp10724 ==1);
struct tree* nctemp10732= p;
nctempchar1* nctemp10734=PtreeGetdef(nctemp10732);
nctempchar1* nctemp10730= nctemp10734;
struct nctempchar1 *nctemp10737;
static struct nctempchar1 nctemp10738 = {{ 3}, (char*)"==\0"};
nctemp10737=&nctemp10738;
nctempchar1* nctemp10735= nctemp10737;
int nctemp10739=LibeStrcmp(nctemp10730,nctemp10735);
int nctemp10727 = (nctemp10739 ==1);
int nctemp10709 = (nctemp10712 || nctemp10727);
struct tree* nctemp10747= p;
nctempchar1* nctemp10749=PtreeGetdef(nctemp10747);
nctempchar1* nctemp10745= nctemp10749;
struct nctempchar1 *nctemp10752;
static struct nctempchar1 nctemp10753 = {{ 3}, (char*)"!=\0"};
nctemp10752=&nctemp10753;
nctempchar1* nctemp10750= nctemp10752;
int nctemp10754=LibeStrcmp(nctemp10745,nctemp10750);
int nctemp10742 = (nctemp10754 ==1);
int nctemp10706 = (nctemp10709 || nctemp10742);
if(nctemp10706)
{
struct tree* nctemp10761= np;
nctempchar1* nctemp10763=PtreeGetref(nctemp10761);
nctempchar1* nctemp10759= nctemp10763;
struct nctempchar1 *nctemp10766;
static struct nctempchar1 nctemp10767 = {{ 5}, (char*)"aref\0"};
nctemp10766=&nctemp10767;
nctempchar1* nctemp10764= nctemp10766;
int nctemp10768=LibeStrcmp(nctemp10759,nctemp10764);
int nctemp10756 = (nctemp10768 ==1);
if(nctemp10756)
{
struct tree* nctemp10777= np;
struct tree* nctemp10779=PtreeMvsister(nctemp10777);
struct tree* nctemp10775= nctemp10779;
nctempchar1* nctemp10780=PtreeGetname(nctemp10775);
nctempchar1* nctemp10773= nctemp10780;
struct nctempchar1 *nctemp10783;
static struct nctempchar1 nctemp10784 = {{ 10}, (char*)"iconstant\0"};
nctemp10783=&nctemp10784;
nctempchar1* nctemp10781= nctemp10783;
int nctemp10785=LibeStrcmp(nctemp10773,nctemp10781);
struct tree* nctemp10791= np;
struct tree* nctemp10793=PtreeMvsister(nctemp10791);
struct tree* nctemp10789= nctemp10793;
nctempchar1* nctemp10794=PtreeGetdef(nctemp10789);
nctempchar1* nctemp10787= nctemp10794;
struct nctempchar1 *nctemp10797;
static struct nctempchar1 nctemp10798 = {{ 2}, (char*)"0\0"};
nctemp10797=&nctemp10798;
nctempchar1* nctemp10795= nctemp10797;
int nctemp10799=LibeStrcmp(nctemp10787,nctemp10795);
int nctemp10770 = (nctemp10785 && nctemp10799);
if(nctemp10770)
{
struct tree* nctemp10801= p;
struct nctempchar1 *nctemp10805;
static struct nctempchar1 nctemp10806 = {{ 2}, (char*)" \0"};
nctemp10805=&nctemp10806;
nctempchar1* nctemp10803= nctemp10805;
int nctemp10807=CodeEs(nctemp10801,nctemp10803);
}
}
}
struct tree* nctemp10809= p;
struct nctempchar1 *nctemp10813;
static struct nctempchar1 nctemp10814 = {{ 2}, (char*)" \0"};
nctemp10813=&nctemp10814;
nctempchar1* nctemp10811= nctemp10813;
int nctemp10815=CodeEs(nctemp10809,nctemp10811);
struct tree* nctemp10817= p;
struct tree* nctemp10821= p;
nctempchar1* nctemp10823=PtreeGetdef(nctemp10821);
nctempchar1* nctemp10819= nctemp10823;
int nctemp10824=CodeEs(nctemp10817,nctemp10819);
struct tree* nctemp10826= p;
struct nctempchar1 *nctemp10830;
static struct nctempchar1 nctemp10831 = {{ 2}, (char*)" \0"};
nctemp10830=&nctemp10831;
nctempchar1* nctemp10828= nctemp10830;
int nctemp10832=CodeEs(nctemp10826,nctemp10828);
struct tree* nctemp10836= np;
struct tree* nctemp10838=PtreeMvsister(nctemp10836);
struct tree* nctemp10834= nctemp10838;
int nctemp10839=CodeSunexpr(nctemp10834);
}
else{
struct tree* nctemp10841= p;
int nctemp10843=CodeSunexpr(nctemp10841);
}
return 1;
}
int CodeSexpr (struct tree* p)
{
struct tree* sp;
nctempchar1 *rval;
struct tree* nctemp10849= p;
struct tree* nctemp10851=PtreeMvchild(nctemp10849);
sp =nctemp10851;
struct tree* nctemp10853= sp;
int nctemp10855=CodeSbinexpr(nctemp10853);
return 1;
}
nctempchar1 * CodeExpr (struct tree* p)
{
nctempchar1 *rval;
struct tree* sp;
struct tree* nctemp10861= p;
struct tree* nctemp10863=PtreeMvchild(nctemp10861);
sp =nctemp10863;
struct tree* nctemp10869= sp;
nctempchar1* nctemp10871=CodeBinexpr(nctemp10869);
rval=nctemp10871;
return rval;
}
int CodeWhilestmnt (struct tree* p)
{
nctempchar1 *cond;
nctempchar1 *tmp;
nctempchar1 *cond2;
struct tree* sp;
struct tree* nctemp10878= p;
struct tree* nctemp10880=PtreeMvchild(nctemp10878);
p =nctemp10880;
sp = p;
struct tree* nctemp10886= sp;
nctempchar1* nctemp10888=CodeExpr(nctemp10886);
cond=nctemp10888;
nctempchar1* nctemp10894=CodeMktemp();
tmp=nctemp10894;
struct tree* nctemp10896= p;
struct tree* nctemp10900= sp;
nctempchar1* nctemp10902=PtreeGetype(nctemp10900);
nctempchar1* nctemp10898= nctemp10902;
int nctemp10903=CodeEs(nctemp10896,nctemp10898);
struct tree* nctemp10905= p;
struct nctempchar1 *nctemp10909;
static struct nctempchar1 nctemp10910 = {{ 2}, (char*)" \0"};
nctemp10909=&nctemp10910;
nctempchar1* nctemp10907= nctemp10909;
int nctemp10911=CodeEs(nctemp10905,nctemp10907);
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
nctempchar1* nctemp10930= cond;
int nctemp10933=CodeEs(nctemp10928,nctemp10930);
struct tree* nctemp10935= p;
struct nctempchar1 *nctemp10939;
static struct nctempchar1 nctemp10940 = {{ 4}, (char*)";\n\0"};
nctemp10939=&nctemp10940;
nctempchar1* nctemp10937= nctemp10939;
int nctemp10941=CodeEs(nctemp10935,nctemp10937);
struct tree* nctemp10943= p;
struct nctempchar1 *nctemp10947;
static struct nctempchar1 nctemp10948 = {{ 7}, (char*)"while(\0"};
nctemp10947=&nctemp10948;
nctempchar1* nctemp10945= nctemp10947;
int nctemp10949=CodeEs(nctemp10943,nctemp10945);
struct tree* nctemp10951= p;
nctempchar1* nctemp10953= tmp;
int nctemp10956=CodeEs(nctemp10951,nctemp10953);
struct tree* nctemp10958= p;
struct nctempchar1 *nctemp10962;
static struct nctempchar1 nctemp10963 = {{ 4}, (char*)")\n\0"};
nctemp10962=&nctemp10963;
nctempchar1* nctemp10960= nctemp10962;
int nctemp10964=CodeEs(nctemp10958,nctemp10960);
struct tree* nctemp10966= p;
struct nctempchar1 *nctemp10970;
static struct nctempchar1 nctemp10971 = {{ 2}, (char*)"{\0"};
nctemp10970=&nctemp10971;
nctempchar1* nctemp10968= nctemp10970;
int nctemp10972=CodeEs(nctemp10966,nctemp10968);
struct tree* nctemp10977= p;
struct tree* nctemp10979=PtreeMvsister(nctemp10977);
p =nctemp10979;
struct tree* nctemp10981= p;
int nctemp10983=CodeStmnt(nctemp10981);
struct tree* nctemp10989= sp;
nctempchar1* nctemp10991=CodeExpr(nctemp10989);
cond2=nctemp10991;
struct tree* nctemp10993= p;
nctempchar1* nctemp10995= tmp;
int nctemp10998=CodeEs(nctemp10993,nctemp10995);
struct tree* nctemp11000= p;
struct nctempchar1 *nctemp11004;
static struct nctempchar1 nctemp11005 = {{ 2}, (char*)"=\0"};
nctemp11004=&nctemp11005;
nctempchar1* nctemp11002= nctemp11004;
int nctemp11006=CodeEs(nctemp11000,nctemp11002);
struct tree* nctemp11008= p;
nctempchar1* nctemp11010= cond2;
int nctemp11013=CodeEs(nctemp11008,nctemp11010);
struct tree* nctemp11015= p;
struct nctempchar1 *nctemp11019;
static struct nctempchar1 nctemp11020 = {{ 2}, (char*)";\0"};
nctemp11019=&nctemp11020;
nctempchar1* nctemp11017= nctemp11019;
int nctemp11021=CodeEs(nctemp11015,nctemp11017);
struct tree* nctemp11023= p;
struct nctempchar1 *nctemp11027;
static struct nctempchar1 nctemp11028 = {{ 2}, (char*)"}\0"};
nctemp11027=&nctemp11028;
nctempchar1* nctemp11025= nctemp11027;
int nctemp11029=CodeEs(nctemp11023,nctemp11025);
return 1;
}
int CodeForstmnt (struct tree* p)
{
struct tree* sp;
struct tree* np;
nctempchar1 *cond;
nctempchar1 *tmp;
struct tree* nctemp11035= p;
struct tree* nctemp11037=PtreeMvchild(nctemp11035);
p =nctemp11037;
struct tree* nctemp11039= p;
nctempchar1* nctemp11041=CodeExpr(nctemp11039);
struct tree* nctemp11046= p;
struct tree* nctemp11048=PtreeMvsister(nctemp11046);
p =nctemp11048;
np = p;
struct tree* nctemp11054= p;
nctempchar1* nctemp11056=CodeExpr(nctemp11054);
cond=nctemp11056;
struct tree* nctemp11058= p;
struct nctempchar1 *nctemp11062;
static struct nctempchar1 nctemp11063 = {{ 7}, (char*)"while(\0"};
nctemp11062=&nctemp11063;
nctempchar1* nctemp11060= nctemp11062;
int nctemp11064=CodeEs(nctemp11058,nctemp11060);
struct tree* nctemp11066= p;
nctempchar1* nctemp11068= cond;
int nctemp11071=CodeEs(nctemp11066,nctemp11068);
struct tree* nctemp11073= p;
struct nctempchar1 *nctemp11077;
static struct nctempchar1 nctemp11078 = {{ 5}, (char*)"){\n\0"};
nctemp11077=&nctemp11078;
nctempchar1* nctemp11075= nctemp11077;
int nctemp11079=CodeEs(nctemp11073,nctemp11075);
struct tree* nctemp11084= p;
struct tree* nctemp11086=PtreeMvsister(nctemp11084);
p =nctemp11086;
sp = p;
struct tree* nctemp11091= p;
struct tree* nctemp11093=PtreeMvsister(nctemp11091);
p =nctemp11093;
struct tree* nctemp11095= p;
int nctemp11097=CodeStmnt(nctemp11095);
struct tree* nctemp11099= sp;
nctempchar1* nctemp11101=CodeExpr(nctemp11099);
struct tree* nctemp11107= np;
nctempchar1* nctemp11109=CodeExpr(nctemp11107);
tmp=nctemp11109;
struct tree* nctemp11111= p;
nctempchar1* nctemp11113= cond;
int nctemp11116=CodeEs(nctemp11111,nctemp11113);
struct tree* nctemp11118= p;
struct nctempchar1 *nctemp11122;
static struct nctempchar1 nctemp11123 = {{ 2}, (char*)"=\0"};
nctemp11122=&nctemp11123;
nctempchar1* nctemp11120= nctemp11122;
int nctemp11124=CodeEs(nctemp11118,nctemp11120);
struct tree* nctemp11126= p;
nctempchar1* nctemp11128= tmp;
int nctemp11131=CodeEs(nctemp11126,nctemp11128);
struct tree* nctemp11133= p;
struct nctempchar1 *nctemp11137;
static struct nctempchar1 nctemp11138 = {{ 4}, (char*)";\n\0"};
nctemp11137=&nctemp11138;
nctempchar1* nctemp11135= nctemp11137;
int nctemp11139=CodeEs(nctemp11133,nctemp11135);
struct tree* nctemp11141= p;
struct nctempchar1 *nctemp11145;
static struct nctempchar1 nctemp11146 = {{ 4}, (char*)"}\n\0"};
nctemp11145=&nctemp11146;
nctempchar1* nctemp11143= nctemp11145;
int nctemp11147=CodeEs(nctemp11141,nctemp11143);
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
int nctemp11149 = (p ==0);
if(nctemp11149)
{
return 1;
}
struct tree* nctemp11158= p;
struct tree* nctemp11160=PtreeMvsister(nctemp11158);
p =nctemp11160;
struct tree* nctemp11162= p;
int nctemp11164= level;
int nctemp11166= rank;
int nctemp11168=CodeParallelfor(nctemp11162,nctemp11164,nctemp11166);
struct tree* nctemp11173= sp;
struct tree* nctemp11175=PtreeMvchild(nctemp11173);
rp =nctemp11175;
struct tree* nctemp11180= rp;
struct tree* nctemp11182=PtreeMvchild(nctemp11180);
qp =nctemp11182;
struct tree* nctemp11187= qp;
struct tree* nctemp11189=PtreeMvchild(nctemp11187);
qp =nctemp11189;
struct tree* nctemp11195= qp;
nctempchar1* nctemp11197=PtreeGetdef(nctemp11195);
index=nctemp11197;
struct tree* nctemp11205= qp;
struct tree* nctemp11207=PtreeMvsister(nctemp11205);
struct tree* nctemp11203= nctemp11207;
nctempchar1* nctemp11208=CodeBinexpr(nctemp11203);
init=nctemp11208;
struct tree* nctemp11213= rp;
struct tree* nctemp11215=PtreeMvsister(nctemp11213);
rrp =nctemp11215;
struct tree* nctemp11221= rrp;
nctempchar1* nctemp11223=CodeExpr(nctemp11221);
cond=nctemp11223;
int nctemp11224 = (level ==rank);
if(nctemp11224)
{
struct tree* nctemp11229= p;
struct nctempchar1 *nctemp11233;
static struct nctempchar1 nctemp11234 = {{ 30}, (char*)"\n #pragma omp parallel for\n\0"};
nctemp11233=&nctemp11234;
nctempchar1* nctemp11231= nctemp11233;
int nctemp11235=CodeEs(nctemp11229,nctemp11231);
}
struct tree* nctemp11237= rp;
struct nctempchar1 *nctemp11241;
static struct nctempchar1 nctemp11242 = {{ 5}, (char*)"for(\0"};
nctemp11241=&nctemp11242;
nctempchar1* nctemp11239= nctemp11241;
int nctemp11243=CodeEs(nctemp11237,nctemp11239);
struct tree* nctemp11245= rp;
nctempchar1* nctemp11247= index;
int nctemp11250=CodeEs(nctemp11245,nctemp11247);
struct tree* nctemp11252= rp;
struct nctempchar1 *nctemp11256;
static struct nctempchar1 nctemp11257 = {{ 2}, (char*)"=\0"};
nctemp11256=&nctemp11257;
nctempchar1* nctemp11254= nctemp11256;
int nctemp11258=CodeEs(nctemp11252,nctemp11254);
struct tree* nctemp11260= rp;
nctempchar1* nctemp11262= init;
int nctemp11265=CodeEs(nctemp11260,nctemp11262);
struct tree* nctemp11267= rp;
struct nctempchar1 *nctemp11271;
static struct nctempchar1 nctemp11272 = {{ 2}, (char*)";\0"};
nctemp11271=&nctemp11272;
nctempchar1* nctemp11269= nctemp11271;
int nctemp11273=CodeEs(nctemp11267,nctemp11269);
struct tree* nctemp11278= rp;
struct tree* nctemp11280=PtreeMvsister(nctemp11278);
rp =nctemp11280;
struct tree* nctemp11282= rp;
nctempchar1* nctemp11284= index;
int nctemp11287=CodeEs(nctemp11282,nctemp11284);
struct tree* nctemp11289= rp;
struct nctempchar1 *nctemp11293;
static struct nctempchar1 nctemp11294 = {{ 2}, (char*)"<\0"};
nctemp11293=&nctemp11294;
nctempchar1* nctemp11291= nctemp11293;
int nctemp11295=CodeEs(nctemp11289,nctemp11291);
struct tree* nctemp11297= p;
nctempchar1* nctemp11299= cond;
int nctemp11302=CodeEs(nctemp11297,nctemp11299);
struct tree* nctemp11304= rp;
struct nctempchar1 *nctemp11308;
static struct nctempchar1 nctemp11309 = {{ 2}, (char*)";\0"};
nctemp11308=&nctemp11309;
nctempchar1* nctemp11306= nctemp11308;
int nctemp11310=CodeEs(nctemp11304,nctemp11306);
struct tree* nctemp11318= rp;
struct tree* nctemp11320=PtreeMvsister(nctemp11318);
rp =nctemp11320;
int nctemp11311 = (rp !=0);
if(nctemp11311)
{
struct tree* nctemp11323= rp;
nctempchar1* nctemp11325= index;
int nctemp11328=CodeEs(nctemp11323,nctemp11325);
struct tree* nctemp11330= rp;
struct nctempchar1 *nctemp11334;
static struct nctempchar1 nctemp11335 = {{ 2}, (char*)"=\0"};
nctemp11334=&nctemp11335;
nctempchar1* nctemp11332= nctemp11334;
int nctemp11336=CodeEs(nctemp11330,nctemp11332);
struct tree* nctemp11338= rp;
nctempchar1* nctemp11340= index;
int nctemp11343=CodeEs(nctemp11338,nctemp11340);
struct tree* nctemp11345= rp;
struct nctempchar1 *nctemp11349;
static struct nctempchar1 nctemp11350 = {{ 2}, (char*)"+\0"};
nctemp11349=&nctemp11350;
nctempchar1* nctemp11347= nctemp11349;
int nctemp11351=CodeEs(nctemp11345,nctemp11347);
struct tree* nctemp11353= rp;
nctempchar1* nctemp11355=CodeExpr(nctemp11353);
}
else{
struct tree* nctemp11357= rp;
nctempchar1* nctemp11359= index;
int nctemp11362=CodeEs(nctemp11357,nctemp11359);
struct tree* nctemp11364= rp;
struct nctempchar1 *nctemp11368;
static struct nctempchar1 nctemp11369 = {{ 2}, (char*)"=\0"};
nctemp11368=&nctemp11369;
nctempchar1* nctemp11366= nctemp11368;
int nctemp11370=CodeEs(nctemp11364,nctemp11366);
struct tree* nctemp11372= rp;
nctempchar1* nctemp11374= index;
int nctemp11377=CodeEs(nctemp11372,nctemp11374);
struct tree* nctemp11379= rp;
struct nctempchar1 *nctemp11383;
static struct nctempchar1 nctemp11384 = {{ 2}, (char*)"+\0"};
nctemp11383=&nctemp11384;
nctempchar1* nctemp11381= nctemp11383;
int nctemp11385=CodeEs(nctemp11379,nctemp11381);
struct tree* nctemp11387= rp;
struct nctempchar1 *nctemp11391;
static struct nctempchar1 nctemp11392 = {{ 2}, (char*)"1\0"};
nctemp11391=&nctemp11392;
nctempchar1* nctemp11389= nctemp11391;
int nctemp11393=CodeEs(nctemp11387,nctemp11389);
}
struct tree* nctemp11395= rp;
struct nctempchar1 *nctemp11399;
static struct nctempchar1 nctemp11400 = {{ 3}, (char*)"){\0"};
nctemp11399=&nctemp11400;
nctempchar1* nctemp11397= nctemp11399;
int nctemp11401=CodeEs(nctemp11395,nctemp11397);
return 1;
}
int CodeParallelstmntcpu (struct tree* p)
{
struct tree* sp;
int rank;
int i;
sp = p;
struct tree* nctemp11407= sp;
int nctemp11409=PtreeGetrank(nctemp11407);
rank =nctemp11409;
struct tree* nctemp11414= p;
struct tree* nctemp11416=PtreeMvchild(nctemp11414);
p =nctemp11416;
struct tree* nctemp11421= p;
struct tree* nctemp11423=PtreeMvchild(nctemp11421);
p =nctemp11423;
struct tree* nctemp11425= p;
int nctemp11427= 0;
int nctemp11429= rank;
int nctemp11431=CodeParallelfor(nctemp11425,nctemp11427,nctemp11429);
struct tree* nctemp11436= sp;
struct tree* nctemp11438=PtreeMvchild(nctemp11436);
sp =nctemp11438;
struct tree* nctemp11443= sp;
struct tree* nctemp11445=PtreeMvsister(nctemp11443);
sp =nctemp11445;
struct tree* nctemp11447= sp;
int nctemp11449=CodeStmnt(nctemp11447);
i =0;
int nctemp11454 = (i < rank);
while(nctemp11454){
{
struct tree* nctemp11459= sp;
struct nctempchar1 *nctemp11463;
static struct nctempchar1 nctemp11464 = {{ 2}, (char*)"}\0"};
nctemp11463=&nctemp11464;
nctempchar1* nctemp11461= nctemp11463;
int nctemp11465=CodeEs(nctemp11459,nctemp11461);
}
int nctemp11474 = i + 1;
i =nctemp11474;
int nctemp11475 = (i < rank);
nctemp11454=nctemp11475;
}
return 1;
}
nctempchar1 * CodeParprocno (struct tree* p)
{
struct tree* nctemp11481= p;
struct nctempchar1 *nctemp11485;
static struct nctempchar1 nctemp11486 = {{ 13}, (char*)"int nctempno\0"};
nctemp11485=&nctemp11486;
nctempchar1* nctemp11483= nctemp11485;
int nctemp11487=CodeEs(nctemp11481,nctemp11483);
struct tree* nctemp11489= p;
struct nctempchar1 *nctemp11493;
static struct nctempchar1 nctemp11494 = {{ 39}, (char*)"=blockIdx.x*blockDim.x + threadIdx.x; \0"};
nctemp11493=&nctemp11494;
nctempchar1* nctemp11491= nctemp11493;
int nctemp11495=CodeEs(nctemp11489,nctemp11491);
struct nctempchar1 *nctemp11497;
static struct nctempchar1 nctemp11498 = {{ 9}, (char*)"nctempno\0"};
nctemp11497=&nctemp11498;
return nctemp11497;
}
nctempchar1 * CodeParidx (struct tree* p)
{
struct tree* nctemp11503= p;
struct tree* nctemp11505=PtreeMvchild(nctemp11503);
p =nctemp11505;
struct tree* nctemp11510= p;
struct tree* nctemp11512=PtreeMvchild(nctemp11510);
p =nctemp11512;
struct tree* nctemp11517= p;
struct tree* nctemp11519=PtreeMvchild(nctemp11517);
p =nctemp11519;
struct tree* nctemp11521= p;
nctempchar1* nctemp11523=PtreeGetdef(nctemp11521);
return nctemp11523;
}
nctempchar1 * CodeParidxrank (struct tree* p,int r)
{
int i;
i =0;
int nctemp11536 = r - 1;
int nctemp11528 = (i < nctemp11536);
while(nctemp11528){
{
struct tree* nctemp11541= p;
struct tree* nctemp11543=PtreeMvsister(nctemp11541);
p =nctemp11543;
}
int nctemp11552 = i + 1;
i =nctemp11552;
int nctemp11561 = r - 1;
int nctemp11553 = (i < nctemp11561);
nctemp11528=nctemp11553;
}
struct tree* nctemp11563= p;
nctempchar1* nctemp11565=CodeParidx(nctemp11563);
return nctemp11565;
}
nctempchar1 * CodeParllim (struct tree* p)
{
nctempchar1 *tmp;
nctempchar1 *temp;
struct tree* nctemp11570= p;
struct tree* nctemp11572=PtreeMvchild(nctemp11570);
p =nctemp11572;
struct tree* nctemp11578= p;
nctempchar1* nctemp11580=CodeExpr(nctemp11578);
tmp=nctemp11580;
nctempchar1* nctemp11586=CodeMktemp();
temp=nctemp11586;
struct tree* nctemp11588= p;
struct nctempchar1 *nctemp11592;
static struct nctempchar1 nctemp11593 = {{ 5}, (char*)"int \0"};
nctemp11592=&nctemp11593;
nctempchar1* nctemp11590= nctemp11592;
int nctemp11594=CodeEs(nctemp11588,nctemp11590);
struct tree* nctemp11596= p;
nctempchar1* nctemp11598= temp;
int nctemp11601=CodeEs(nctemp11596,nctemp11598);
struct tree* nctemp11603= p;
struct nctempchar1 *nctemp11607;
static struct nctempchar1 nctemp11608 = {{ 2}, (char*)"=\0"};
nctemp11607=&nctemp11608;
nctempchar1* nctemp11605= nctemp11607;
int nctemp11609=CodeEs(nctemp11603,nctemp11605);
struct tree* nctemp11611= p;
nctempchar1* nctemp11613= tmp;
int nctemp11616=CodeEs(nctemp11611,nctemp11613);
struct tree* nctemp11618= p;
struct nctempchar1 *nctemp11622;
static struct nctempchar1 nctemp11623 = {{ 4}, (char*)";\n\0"};
nctemp11622=&nctemp11623;
nctempchar1* nctemp11620= nctemp11622;
int nctemp11624=CodeEs(nctemp11618,nctemp11620);
return temp;
}
nctempchar1 * CodeParulim (struct tree* p)
{
struct tree* nctemp11631= p;
struct tree* nctemp11633=PtreeMvchild(nctemp11631);
p =nctemp11633;
struct tree* nctemp11638= p;
struct tree* nctemp11640=PtreeMvsister(nctemp11638);
p =nctemp11640;
struct tree* nctemp11642= p;
nctempchar1* nctemp11644=CodeExpr(nctemp11642);
return nctemp11644;
}
nctempchar1 * CodeParllimrank (struct tree* p,int r)
{
int i;
i =0;
int nctemp11657 = r - 1;
int nctemp11649 = (i < nctemp11657);
while(nctemp11649){
{
struct tree* nctemp11662= p;
struct tree* nctemp11664=PtreeMvsister(nctemp11662);
p =nctemp11664;
}
int nctemp11673 = i + 1;
i =nctemp11673;
int nctemp11682 = r - 1;
int nctemp11674 = (i < nctemp11682);
nctemp11649=nctemp11674;
}
struct tree* nctemp11684= p;
nctempchar1* nctemp11686=CodeParllim(nctemp11684);
return nctemp11686;
}
nctempchar1 * CodeParulimrank (struct tree* p,int r)
{
int i;
i =0;
int nctemp11699 = r - 1;
int nctemp11691 = (i < nctemp11699);
while(nctemp11691){
{
struct tree* nctemp11704= p;
struct tree* nctemp11706=PtreeMvsister(nctemp11704);
p =nctemp11706;
}
int nctemp11715 = i + 1;
i =nctemp11715;
int nctemp11724 = r - 1;
int nctemp11716 = (i < nctemp11724);
nctemp11691=nctemp11716;
}
struct tree* nctemp11726= p;
nctempchar1* nctemp11728=CodeParulim(nctemp11726);
return nctemp11728;
}
nctempchar1 * CodeParlen (struct tree* p,nctempchar1 *llim)
{
nctempchar1 *tmp1;
nctempchar1 *tmp2;
nctempchar1 *tmp3;
nctempchar1* nctemp11734=CodeMktemp();
tmp1=nctemp11734;
struct tree* nctemp11740= p;
nctempchar1* nctemp11742=CodeParulim(nctemp11740);
tmp2=nctemp11742;
struct tree* nctemp11748= p;
nctempchar1* nctemp11750=CodeParllim(nctemp11748);
tmp3=nctemp11750;
struct tree* nctemp11752= p;
struct nctempchar1 *nctemp11756;
static struct nctempchar1 nctemp11757 = {{ 5}, (char*)"int \0"};
nctemp11756=&nctemp11757;
nctempchar1* nctemp11754= nctemp11756;
int nctemp11758=CodeEs(nctemp11752,nctemp11754);
struct tree* nctemp11760= p;
nctempchar1* nctemp11762= tmp1;
int nctemp11765=CodeEs(nctemp11760,nctemp11762);
struct tree* nctemp11767= p;
struct nctempchar1 *nctemp11771;
static struct nctempchar1 nctemp11772 = {{ 2}, (char*)"=\0"};
nctemp11771=&nctemp11772;
nctempchar1* nctemp11769= nctemp11771;
int nctemp11773=CodeEs(nctemp11767,nctemp11769);
struct tree* nctemp11775= p;
nctempchar1* nctemp11777= tmp2;
int nctemp11780=CodeEs(nctemp11775,nctemp11777);
struct tree* nctemp11782= p;
struct nctempchar1 *nctemp11786;
static struct nctempchar1 nctemp11787 = {{ 2}, (char*)"-\0"};
nctemp11786=&nctemp11787;
nctempchar1* nctemp11784= nctemp11786;
int nctemp11788=CodeEs(nctemp11782,nctemp11784);
struct tree* nctemp11790= p;
nctempchar1* nctemp11792= tmp3;
int nctemp11795=CodeEs(nctemp11790,nctemp11792);
struct tree* nctemp11797= p;
struct nctempchar1 *nctemp11801;
static struct nctempchar1 nctemp11802 = {{ 4}, (char*)";\n\0"};
nctemp11801=&nctemp11802;
nctempchar1* nctemp11799= nctemp11801;
int nctemp11803=CodeEs(nctemp11797,nctemp11799);
nctempchar1* nctemp11807= tmp3;
nctempchar1* nctemp11810= llim;
int nctemp11813=LibeStrcpy(nctemp11807,nctemp11810);
int nctemp11804 = (nctemp11813 ==0);
if(nctemp11804)
{
struct nctempchar1 *nctemp11818;
static struct nctempchar1 nctemp11819 = {{ 31}, (char*)"Internal error in CodeParlen\n\0"};
nctemp11818=&nctemp11819;
nctempchar1* nctemp11816= nctemp11818;
int nctemp11820=CodeError(nctemp11816);
}
return tmp1;
}
nctempchar1 * CodeParlenrank (struct tree* p,int r,nctempchar1 *llim)
{
int i;
nctempchar1 *tmp;
i =0;
int nctemp11835 = r - 1;
int nctemp11827 = (i < nctemp11835);
while(nctemp11827){
{
struct tree* nctemp11840= p;
struct tree* nctemp11842=PtreeMvsister(nctemp11840);
p =nctemp11842;
}
int nctemp11851 = i + 1;
i =nctemp11851;
int nctemp11860 = r - 1;
int nctemp11852 = (i < nctemp11860);
nctemp11827=nctemp11852;
}
struct tree* nctemp11866= p;
nctempchar1* nctemp11868= llim;
nctempchar1* nctemp11871=CodeParlen(nctemp11866,nctemp11868);
tmp=nctemp11871;
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
int nctemp11878=m->d[0];r =nctemp11878;
nctempchar1* nctemp11887=CodeMktemp();
nsize=nctemp11887;
struct tree* nctemp11889= p;
struct nctempchar1 *nctemp11893;
static struct nctempchar1 nctemp11894 = {{ 5}, (char*)"int \0"};
nctemp11893=&nctemp11894;
nctempchar1* nctemp11891= nctemp11893;
int nctemp11895=CodeEs(nctemp11889,nctemp11891);
struct tree* nctemp11897= p;
nctempchar1* nctemp11899= nsize;
int nctemp11902=CodeEs(nctemp11897,nctemp11899);
struct tree* nctemp11904= p;
struct nctempchar1 *nctemp11908;
static struct nctempchar1 nctemp11909 = {{ 2}, (char*)"=\0"};
nctemp11908=&nctemp11909;
nctempchar1* nctemp11906= nctemp11908;
int nctemp11910=CodeEs(nctemp11904,nctemp11906);
i =0;
int nctemp11915 = (i < r);
while(nctemp11915){
{
int nctemp11927 = r - 1;
int nctemp11919 = (i ==nctemp11927);
if(nctemp11919)
{
struct tree* nctemp11929= p;
int nctemp11933=i;
nctempchar1* nctemp11931= m->a[nctemp11933].s;
int nctemp11936=CodeEs(nctemp11929,nctemp11931);
struct tree* nctemp11938= p;
struct nctempchar1 *nctemp11942;
static struct nctempchar1 nctemp11943 = {{ 4}, (char*)";\n\0"};
nctemp11942=&nctemp11943;
nctempchar1* nctemp11940= nctemp11942;
int nctemp11944=CodeEs(nctemp11938,nctemp11940);
}
else{
struct tree* nctemp11946= p;
int nctemp11950=i;
nctempchar1* nctemp11948= m->a[nctemp11950].s;
int nctemp11953=CodeEs(nctemp11946,nctemp11948);
struct tree* nctemp11955= p;
struct nctempchar1 *nctemp11959;
static struct nctempchar1 nctemp11960 = {{ 2}, (char*)"*\0"};
nctemp11959=&nctemp11960;
nctempchar1* nctemp11957= nctemp11959;
int nctemp11961=CodeEs(nctemp11955,nctemp11957);
}
}
int nctemp11970 = i + 1;
i =nctemp11970;
int nctemp11971 = (i < r);
nctemp11915=nctemp11971;
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
int nctemp11978= 1;
int nctemp11980=CodeSetparallel(nctemp11978);
sp = p;
struct tree* nctemp11985= p;
int nctemp11987=PtreeGetrank(nctemp11985);
rank =nctemp11987;
int nctemp11994=rank;
struct nctempcharr1 *nctemp11993;
nctemp11993=(struct nctempcharr1*)RunMalloc(sizeof(struct nctempcharr1));
nctemp11993->d[0]=rank;
nctemp11993->a=(struct charr*)RunMalloc(sizeof(struct charr)*nctemp11994);
m=nctemp11993;
int nctemp12003=rank;
struct nctempcharr1 *nctemp12002;
nctemp12002=(struct nctempcharr1*)RunMalloc(sizeof(struct nctempcharr1));
nctemp12002->d[0]=rank;
nctemp12002->a=(struct charr*)RunMalloc(sizeof(struct charr)*nctemp12003);
i=nctemp12002;
int nctemp12012=rank;
struct nctempcharr1 *nctemp12011;
nctemp12011=(struct nctempcharr1*)RunMalloc(sizeof(struct nctempcharr1));
nctemp12011->d[0]=rank;
nctemp12011->a=(struct charr*)RunMalloc(sizeof(struct charr)*nctemp12012);
nl=nctemp12011;
struct tree* nctemp12019= p;
struct tree* nctemp12021=PtreeMvchild(nctemp12019);
p =nctemp12021;
struct tree* nctemp12026= p;
struct tree* nctemp12028=PtreeMvchild(nctemp12026);
slice =nctemp12028;
struct tree* nctemp12030= p;
struct nctempchar1 *nctemp12034;
static struct nctempchar1 nctemp12035 = {{ 4}, (char*)"{\n\0"};
nctemp12034=&nctemp12035;
nctempchar1* nctemp12032= nctemp12034;
int nctemp12036=CodeEs(nctemp12030,nctemp12032);
struct tree* nctemp12042= slice;
nctempchar1* nctemp12044=CodeParprocno(nctemp12042);
pno=nctemp12044;
l =0;
int nctemp12049 = (l < rank);
while(nctemp12049){
{
int nctemp12056=l;
struct tree* nctemp12060= slice;
int nctemp12067 = l + 1;
int nctemp12062= nctemp12067;
nctempchar1* nctemp12068=CodeParidxrank(nctemp12060,nctemp12062);
i->a[nctemp12056].s=nctemp12068;
int nctemp12072=l;
int nctemp12077=4096;
nctempchar1 *nctemp12076;
nctemp12076=(nctempchar1*)RunMalloc(sizeof(nctempchar1));
nctemp12076->d[0]=4096;
nctemp12076->a=(char *)RunMalloc(sizeof(char)*nctemp12077);
nl->a[nctemp12072].s=nctemp12076;
int nctemp12083=l;
struct tree* nctemp12087= slice;
int nctemp12094 = l + 1;
int nctemp12089= nctemp12094;
int nctemp12097=l;
nctempchar1* nctemp12095= nl->a[nctemp12097].s;
nctempchar1* nctemp12100=CodeParlenrank(nctemp12087,nctemp12089,nctemp12095);
m->a[nctemp12083].s=nctemp12100;
}
int nctemp12109 = l + 1;
l =nctemp12109;
int nctemp12110 = (l < rank);
nctemp12049=nctemp12110;
}
struct tree* nctemp12119= p;
nctempcharr1* nctemp12121= m;
nctempchar1* nctemp12124=CodeParnsize(nctemp12119,nctemp12121);
nmax=nctemp12124;
struct tree* nctemp12126= p;
struct nctempchar1 *nctemp12130;
static struct nctempchar1 nctemp12131 = {{ 5}, (char*)"for(\0"};
nctemp12130=&nctemp12131;
nctempchar1* nctemp12128= nctemp12130;
int nctemp12132=CodeEs(nctemp12126,nctemp12128);
struct tree* nctemp12134= p;
nctempchar1* nctemp12136= pno;
int nctemp12139=CodeEs(nctemp12134,nctemp12136);
struct tree* nctemp12141= p;
struct nctempchar1 *nctemp12145;
static struct nctempchar1 nctemp12146 = {{ 39}, (char*)"=blockIdx.x*blockDim.x + threadIdx.x; \0"};
nctemp12145=&nctemp12146;
nctempchar1* nctemp12143= nctemp12145;
int nctemp12147=CodeEs(nctemp12141,nctemp12143);
struct tree* nctemp12149= p;
nctempchar1* nctemp12151= pno;
int nctemp12154=CodeEs(nctemp12149,nctemp12151);
struct tree* nctemp12156= p;
struct nctempchar1 *nctemp12160;
static struct nctempchar1 nctemp12161 = {{ 2}, (char*)"<\0"};
nctemp12160=&nctemp12161;
nctempchar1* nctemp12158= nctemp12160;
int nctemp12162=CodeEs(nctemp12156,nctemp12158);
struct tree* nctemp12164= p;
nctempchar1* nctemp12166= nmax;
int nctemp12169=CodeEs(nctemp12164,nctemp12166);
struct tree* nctemp12171= p;
struct nctempchar1 *nctemp12175;
static struct nctempchar1 nctemp12176 = {{ 2}, (char*)";\0"};
nctemp12175=&nctemp12176;
nctempchar1* nctemp12173= nctemp12175;
int nctemp12177=CodeEs(nctemp12171,nctemp12173);
struct tree* nctemp12179= p;
nctempchar1* nctemp12181= pno;
int nctemp12184=CodeEs(nctemp12179,nctemp12181);
struct tree* nctemp12186= p;
struct nctempchar1 *nctemp12190;
static struct nctempchar1 nctemp12191 = {{ 23}, (char*)"+=blockDim.x*gridDim.x\0"};
nctemp12190=&nctemp12191;
nctempchar1* nctemp12188= nctemp12190;
int nctemp12192=CodeEs(nctemp12186,nctemp12188);
struct tree* nctemp12194= p;
struct nctempchar1 *nctemp12198;
static struct nctempchar1 nctemp12199 = {{ 5}, (char*)"){\n\0"};
nctemp12198=&nctemp12199;
nctempchar1* nctemp12196= nctemp12198;
int nctemp12200=CodeEs(nctemp12194,nctemp12196);
struct nctempchar1 *nctemp12208;
static struct nctempchar1 nctemp12209 = {{ 2}, (char*)"1\0"};
nctemp12208=&nctemp12209;
nctempchar1* nctemp12206= nctemp12208;
nctempchar1* nctemp12210=LibeStrsave(nctemp12206);
qk=nctemp12210;
l =0;
int nctemp12215 = (l < rank);
while(nctemp12215){
{
int nctemp12227 = rank - 1;
int nctemp12219 = (l ==nctemp12227);
if(nctemp12219)
{
struct tree* nctemp12229= p;
int nctemp12233=l;
nctempchar1* nctemp12231= i->a[nctemp12233].s;
int nctemp12236=CodeEs(nctemp12229,nctemp12231);
struct tree* nctemp12238= p;
struct nctempchar1 *nctemp12242;
static struct nctempchar1 nctemp12243 = {{ 2}, (char*)"=\0"};
nctemp12242=&nctemp12243;
nctempchar1* nctemp12240= nctemp12242;
int nctemp12244=CodeEs(nctemp12238,nctemp12240);
struct tree* nctemp12246= p;
struct nctempchar1 *nctemp12250;
static struct nctempchar1 nctemp12251 = {{ 2}, (char*)"(\0"};
nctemp12250=&nctemp12251;
nctempchar1* nctemp12248= nctemp12250;
int nctemp12252=CodeEs(nctemp12246,nctemp12248);
struct tree* nctemp12254= p;
nctempchar1* nctemp12256= pno;
int nctemp12259=CodeEs(nctemp12254,nctemp12256);
struct tree* nctemp12261= p;
struct nctempchar1 *nctemp12265;
static struct nctempchar1 nctemp12266 = {{ 2}, (char*)"/\0"};
nctemp12265=&nctemp12266;
nctempchar1* nctemp12263= nctemp12265;
int nctemp12267=CodeEs(nctemp12261,nctemp12263);
struct tree* nctemp12269= p;
struct nctempchar1 *nctemp12273;
static struct nctempchar1 nctemp12274 = {{ 2}, (char*)"(\0"};
nctemp12273=&nctemp12274;
nctempchar1* nctemp12271= nctemp12273;
int nctemp12275=CodeEs(nctemp12269,nctemp12271);
struct tree* nctemp12277= p;
nctempchar1* nctemp12279= qk;
int nctemp12282=CodeEs(nctemp12277,nctemp12279);
struct tree* nctemp12284= p;
struct nctempchar1 *nctemp12288;
static struct nctempchar1 nctemp12289 = {{ 2}, (char*)")\0"};
nctemp12288=&nctemp12289;
nctempchar1* nctemp12286= nctemp12288;
int nctemp12290=CodeEs(nctemp12284,nctemp12286);
struct tree* nctemp12292= p;
struct nctempchar1 *nctemp12296;
static struct nctempchar1 nctemp12297 = {{ 2}, (char*)")\0"};
nctemp12296=&nctemp12297;
nctempchar1* nctemp12294= nctemp12296;
int nctemp12298=CodeEs(nctemp12292,nctemp12294);
struct tree* nctemp12300= p;
struct nctempchar1 *nctemp12304;
static struct nctempchar1 nctemp12305 = {{ 2}, (char*)"+\0"};
nctemp12304=&nctemp12305;
nctempchar1* nctemp12302= nctemp12304;
int nctemp12306=CodeEs(nctemp12300,nctemp12302);
struct tree* nctemp12308= p;
int nctemp12312=l;
nctempchar1* nctemp12310= nl->a[nctemp12312].s;
int nctemp12315=CodeEs(nctemp12308,nctemp12310);
int nctemp12318=l;
RunFree(nl->a[nctemp12318].s->a);
RunFree(nl->a[nctemp12318].s);
struct tree* nctemp12322= p;
struct nctempchar1 *nctemp12326;
static struct nctempchar1 nctemp12327 = {{ 4}, (char*)";\n\0"};
nctemp12326=&nctemp12327;
nctempchar1* nctemp12324= nctemp12326;
int nctemp12328=CodeEs(nctemp12322,nctemp12324);
}
else{
struct tree* nctemp12330= p;
int nctemp12334=l;
nctempchar1* nctemp12332= i->a[nctemp12334].s;
int nctemp12337=CodeEs(nctemp12330,nctemp12332);
struct tree* nctemp12339= p;
struct nctempchar1 *nctemp12343;
static struct nctempchar1 nctemp12344 = {{ 2}, (char*)"=\0"};
nctemp12343=&nctemp12344;
nctempchar1* nctemp12341= nctemp12343;
int nctemp12345=CodeEs(nctemp12339,nctemp12341);
struct tree* nctemp12347= p;
struct nctempchar1 *nctemp12351;
static struct nctempchar1 nctemp12352 = {{ 2}, (char*)"(\0"};
nctemp12351=&nctemp12352;
nctempchar1* nctemp12349= nctemp12351;
int nctemp12353=CodeEs(nctemp12347,nctemp12349);
struct tree* nctemp12355= p;
nctempchar1* nctemp12357= pno;
int nctemp12360=CodeEs(nctemp12355,nctemp12357);
struct tree* nctemp12362= p;
struct nctempchar1 *nctemp12366;
static struct nctempchar1 nctemp12367 = {{ 2}, (char*)"/\0"};
nctemp12366=&nctemp12367;
nctempchar1* nctemp12364= nctemp12366;
int nctemp12368=CodeEs(nctemp12362,nctemp12364);
struct tree* nctemp12370= p;
struct nctempchar1 *nctemp12374;
static struct nctempchar1 nctemp12375 = {{ 2}, (char*)"(\0"};
nctemp12374=&nctemp12375;
nctempchar1* nctemp12372= nctemp12374;
int nctemp12376=CodeEs(nctemp12370,nctemp12372);
struct tree* nctemp12378= p;
nctempchar1* nctemp12380= qk;
int nctemp12383=CodeEs(nctemp12378,nctemp12380);
struct tree* nctemp12385= p;
struct nctempchar1 *nctemp12389;
static struct nctempchar1 nctemp12390 = {{ 2}, (char*)")\0"};
nctemp12389=&nctemp12390;
nctempchar1* nctemp12387= nctemp12389;
int nctemp12391=CodeEs(nctemp12385,nctemp12387);
struct tree* nctemp12393= p;
struct nctempchar1 *nctemp12397;
static struct nctempchar1 nctemp12398 = {{ 2}, (char*)")\0"};
nctemp12397=&nctemp12398;
nctempchar1* nctemp12395= nctemp12397;
int nctemp12399=CodeEs(nctemp12393,nctemp12395);
struct tree* nctemp12401= p;
struct nctempchar1 *nctemp12405;
static struct nctempchar1 nctemp12406 = {{ 2}, (char*)"%\0"};
nctemp12405=&nctemp12406;
nctempchar1* nctemp12403= nctemp12405;
int nctemp12407=CodeEs(nctemp12401,nctemp12403);
struct tree* nctemp12409= p;
int nctemp12413=l;
nctempchar1* nctemp12411= m->a[nctemp12413].s;
int nctemp12416=CodeEs(nctemp12409,nctemp12411);
struct tree* nctemp12418= p;
struct nctempchar1 *nctemp12422;
static struct nctempchar1 nctemp12423 = {{ 2}, (char*)"+\0"};
nctemp12422=&nctemp12423;
nctempchar1* nctemp12420= nctemp12422;
int nctemp12424=CodeEs(nctemp12418,nctemp12420);
struct tree* nctemp12426= p;
int nctemp12430=l;
nctempchar1* nctemp12428= nl->a[nctemp12430].s;
int nctemp12433=CodeEs(nctemp12426,nctemp12428);
int nctemp12436=l;
RunFree(nl->a[nctemp12436].s->a);
RunFree(nl->a[nctemp12436].s);
struct tree* nctemp12440= p;
struct nctempchar1 *nctemp12444;
static struct nctempchar1 nctemp12445 = {{ 4}, (char*)";\n\0"};
nctemp12444=&nctemp12445;
nctempchar1* nctemp12442= nctemp12444;
int nctemp12446=CodeEs(nctemp12440,nctemp12442);
}
nctempchar1* nctemp12452= qk;
struct nctempchar1 *nctemp12457;
static struct nctempchar1 nctemp12458 = {{ 2}, (char*)"*\0"};
nctemp12457=&nctemp12458;
nctempchar1* nctemp12455= nctemp12457;
nctempchar1* nctemp12459=LibeStradd(nctemp12452,nctemp12455);
tmp=nctemp12459;
RunFree(qk->a);
RunFree(qk);
qk=tmp;
nctempchar1* nctemp12474= qk;
int nctemp12479=l;
nctempchar1* nctemp12477= m->a[nctemp12479].s;
nctempchar1* nctemp12482=LibeStradd(nctemp12474,nctemp12477);
tmp=nctemp12482;
RunFree(qk->a);
RunFree(qk);
qk=tmp;
}
int nctemp12500 = l + 1;
l =nctemp12500;
int nctemp12501 = (l < rank);
nctemp12215=nctemp12501;
}
struct tree* nctemp12509= sp;
struct tree* nctemp12511=PtreeMvchild(nctemp12509);
p =nctemp12511;
struct tree* nctemp12516= p;
struct tree* nctemp12518=PtreeMvsister(nctemp12516);
p =nctemp12518;
struct tree* nctemp12520= p;
int nctemp12522=CodeCompstmnt(nctemp12520);
struct tree* nctemp12524= p;
struct nctempchar1 *nctemp12528;
static struct nctempchar1 nctemp12529 = {{ 4}, (char*)"}\n\0"};
nctemp12528=&nctemp12529;
nctempchar1* nctemp12526= nctemp12528;
int nctemp12530=CodeEs(nctemp12524,nctemp12526);
struct tree* nctemp12532= p;
struct nctempchar1 *nctemp12536;
static struct nctempchar1 nctemp12537 = {{ 4}, (char*)"}\n\0"};
nctemp12536=&nctemp12537;
nctempchar1* nctemp12534= nctemp12536;
int nctemp12538=CodeEs(nctemp12532,nctemp12534);
int nctemp12540= 0;
int nctemp12542=CodeSetparallel(nctemp12540);
return 1;
}
int CodeParallelstmnt (struct tree* p)
{
int nctemp12547=CodeGetarch();
int nctemp12544 = (nctemp12547 ==1);
if(nctemp12544)
{
struct tree* nctemp12550= p;
int nctemp12552=CodeParallelstmntcpu(nctemp12550);
}
else{
int nctemp12556=CodeGetarch();
int nctemp12553 = (nctemp12556 ==2);
if(nctemp12553)
{
struct tree* nctemp12559= p;
int nctemp12561=CodeParallelstmntgpu(nctemp12559);
}
else{
int nctemp12565=CodeGetarch();
int nctemp12562 = (nctemp12565 ==3);
if(nctemp12562)
{
struct tree* nctemp12568= p;
int nctemp12570=CodeParallelstmntgpu(nctemp12568);
}
}
}
return 1;
}
int CodeIfstmnt (struct tree* p)
{
nctempchar1 *cond;
struct tree* nctemp12576= p;
struct tree* nctemp12578=PtreeMvchild(nctemp12576);
p =nctemp12578;
struct tree* nctemp12584= p;
nctempchar1* nctemp12586=CodeExpr(nctemp12584);
cond=nctemp12586;
struct tree* nctemp12588= p;
struct nctempchar1 *nctemp12592;
static struct nctempchar1 nctemp12593 = {{ 4}, (char*)"if(\0"};
nctemp12592=&nctemp12593;
nctempchar1* nctemp12590= nctemp12592;
int nctemp12594=CodeEs(nctemp12588,nctemp12590);
struct tree* nctemp12596= p;
nctempchar1* nctemp12598= cond;
int nctemp12601=CodeEs(nctemp12596,nctemp12598);
struct tree* nctemp12603= p;
struct nctempchar1 *nctemp12607;
static struct nctempchar1 nctemp12608 = {{ 4}, (char*)")\n\0"};
nctemp12607=&nctemp12608;
nctempchar1* nctemp12605= nctemp12607;
int nctemp12609=CodeEs(nctemp12603,nctemp12605);
struct tree* nctemp12614= p;
struct tree* nctemp12616=PtreeMvsister(nctemp12614);
p =nctemp12616;
struct tree* nctemp12618= p;
int nctemp12620=CodeStmnt(nctemp12618);
struct tree* nctemp12628= p;
struct tree* nctemp12630=PtreeMvsister(nctemp12628);
p =nctemp12630;
int nctemp12621 = (p !=0);
if(nctemp12621)
{
struct tree* nctemp12637= p;
nctempchar1* nctemp12639=PtreeGetname(nctemp12637);
nctempchar1* nctemp12635= nctemp12639;
struct nctempchar1 *nctemp12642;
static struct nctempchar1 nctemp12643 = {{ 5}, (char*)"else\0"};
nctemp12642=&nctemp12643;
nctempchar1* nctemp12640= nctemp12642;
int nctemp12644=LibeStrcmp(nctemp12635,nctemp12640);
int nctemp12632 = (nctemp12644 ==1);
if(nctemp12632)
{
struct tree* nctemp12650= p;
struct tree* nctemp12652=PtreeMvchild(nctemp12650);
p =nctemp12652;
struct tree* nctemp12654= p;
struct nctempchar1 *nctemp12658;
static struct nctempchar1 nctemp12659 = {{ 5}, (char*)"else\0"};
nctemp12658=&nctemp12659;
nctempchar1* nctemp12656= nctemp12658;
int nctemp12660=CodeEs(nctemp12654,nctemp12656);
struct tree* nctemp12662= p;
int nctemp12664=CodeStmnt(nctemp12662);
}
}
return 1;
}
int CodeReturnstmnt (struct tree* p)
{
struct tree* np;
nctempchar1 *rval;
struct tree* nctemp12670= p;
struct tree* nctemp12672=PtreeMvchild(nctemp12670);
np =nctemp12672;
struct tree* nctemp12678= np;
nctempchar1* nctemp12680=CodeExpr(nctemp12678);
rval=nctemp12680;
struct tree* nctemp12682= np;
struct nctempchar1 *nctemp12686;
static struct nctempchar1 nctemp12687 = {{ 8}, (char*)"return \0"};
nctemp12686=&nctemp12687;
nctempchar1* nctemp12684= nctemp12686;
int nctemp12688=CodeEs(nctemp12682,nctemp12684);
struct tree* nctemp12690= np;
nctempchar1* nctemp12692= rval;
int nctemp12695=CodeEs(nctemp12690,nctemp12692);
struct tree* nctemp12697= np;
struct nctempchar1 *nctemp12701;
static struct nctempchar1 nctemp12702 = {{ 4}, (char*)";\n\0"};
nctemp12701=&nctemp12702;
nctempchar1* nctemp12699= nctemp12701;
int nctemp12703=CodeEs(nctemp12697,nctemp12699);
return 1;
}
int CodeCompstmnt (struct tree* p)
{
struct tree* sp;
struct tree* q;
sp = p;
struct tree* nctemp12706= p;
struct nctempchar1 *nctemp12710;
static struct nctempchar1 nctemp12711 = {{ 4}, (char*)"{\n\0"};
nctemp12710=&nctemp12711;
nctempchar1* nctemp12708= nctemp12710;
int nctemp12712=CodeEs(nctemp12706,nctemp12708);
struct tree* nctemp12717= p;
struct tree* nctemp12719=PtreeMvchild(nctemp12717);
p =nctemp12719;
int nctemp12720 = (p ==0);
if(nctemp12720)
{
struct tree* nctemp12725= sp;
struct nctempchar1 *nctemp12729;
static struct nctempchar1 nctemp12730 = {{ 4}, (char*)"}\n\0"};
nctemp12729=&nctemp12730;
nctempchar1* nctemp12727= nctemp12729;
int nctemp12731=CodeEs(nctemp12725,nctemp12727);
return 1;
}
struct tree* nctemp12734= p;
struct symbol* nctemp12738=SymGetltp();
struct symbol* nctemp12736= nctemp12738;
int nctemp12739=CodeDeclarations(nctemp12734,nctemp12736);
struct tree* nctemp12745= p;
nctempchar1* nctemp12747=PtreeGetname(nctemp12745);
nctempchar1* nctemp12743= nctemp12747;
struct nctempchar1 *nctemp12750;
static struct nctempchar1 nctemp12751 = {{ 13}, (char*)"declarations\0"};
nctemp12750=&nctemp12751;
nctempchar1* nctemp12748= nctemp12750;
int nctemp12752=LibeStrcmp(nctemp12743,nctemp12748);
int nctemp12740 = (nctemp12752 ==1);
if(nctemp12740)
{
struct tree* nctemp12758= p;
struct tree* nctemp12760=PtreeMvsister(nctemp12758);
p =nctemp12760;
}
int nctemp12761 = (p !=0);
int nctemp12765=nctemp12761;
while(nctemp12765)
{{
struct tree* nctemp12771= p;
nctempchar1* nctemp12773=PtreeGetname(nctemp12771);
nctempchar1* nctemp12769= nctemp12773;
struct nctempchar1 *nctemp12776;
static struct nctempchar1 nctemp12777 = {{ 5}, (char*)"expr\0"};
nctemp12776=&nctemp12777;
nctempchar1* nctemp12774= nctemp12776;
int nctemp12778=LibeStrcmp(nctemp12769,nctemp12774);
int nctemp12766 = (nctemp12778 ==1);
if(nctemp12766)
{
int nctemp12783=CodeGetbreak();
int nctemp12780 = (nctemp12783 ==1);
if(nctemp12780)
{
struct tree* nctemp12786= p;
nctempchar1* nctemp12788=CodeExpr(nctemp12786);
}
else{
struct tree* nctemp12792= p;
int nctemp12794=PtreeGetsimple(nctemp12792);
int nctemp12789 = (nctemp12794 ==1);
if(nctemp12789)
{
struct tree* nctemp12797= p;
int nctemp12799=CodeSexpr(nctemp12797);
struct tree* nctemp12801= p;
struct nctempchar1 *nctemp12805;
static struct nctempchar1 nctemp12806 = {{ 4}, (char*)";\n\0"};
nctemp12805=&nctemp12806;
nctempchar1* nctemp12803= nctemp12805;
int nctemp12807=CodeEs(nctemp12801,nctemp12803);
}
else{
struct tree* nctemp12809= p;
nctempchar1* nctemp12811=CodeExpr(nctemp12809);
}
}
}
struct tree* nctemp12817= p;
nctempchar1* nctemp12819=PtreeGetname(nctemp12817);
nctempchar1* nctemp12815= nctemp12819;
struct nctempchar1 *nctemp12822;
static struct nctempchar1 nctemp12823 = {{ 6}, (char*)"while\0"};
nctemp12822=&nctemp12823;
nctempchar1* nctemp12820= nctemp12822;
int nctemp12824=LibeStrcmp(nctemp12815,nctemp12820);
int nctemp12812 = (nctemp12824 ==1);
if(nctemp12812)
{
struct tree* nctemp12827= p;
int nctemp12829=CodeWhilestmnt(nctemp12827);
}
struct tree* nctemp12835= p;
nctempchar1* nctemp12837=PtreeGetname(nctemp12835);
nctempchar1* nctemp12833= nctemp12837;
struct nctempchar1 *nctemp12840;
static struct nctempchar1 nctemp12841 = {{ 4}, (char*)"for\0"};
nctemp12840=&nctemp12841;
nctempchar1* nctemp12838= nctemp12840;
int nctemp12842=LibeStrcmp(nctemp12833,nctemp12838);
int nctemp12830 = (nctemp12842 ==1);
if(nctemp12830)
{
struct tree* nctemp12848= p;
struct tree* nctemp12850=PtreeMvchild(nctemp12848);
q =nctemp12850;
struct tree* nctemp12852= q;
struct tree* nctemp12854=PtreeMvsister(nctemp12852);
struct tree* nctemp12856= p;
int nctemp12858=CodeForstmnt(nctemp12856);
}
struct tree* nctemp12864= p;
nctempchar1* nctemp12866=PtreeGetname(nctemp12864);
nctempchar1* nctemp12862= nctemp12866;
struct nctempchar1 *nctemp12869;
static struct nctempchar1 nctemp12870 = {{ 9}, (char*)"parallel\0"};
nctemp12869=&nctemp12870;
nctempchar1* nctemp12867= nctemp12869;
int nctemp12871=LibeStrcmp(nctemp12862,nctemp12867);
int nctemp12859 = (nctemp12871 ==1);
if(nctemp12859)
{
struct tree* nctemp12874= p;
int nctemp12876=CodeParallelstmnt(nctemp12874);
}
struct tree* nctemp12882= p;
nctempchar1* nctemp12884=PtreeGetname(nctemp12882);
nctempchar1* nctemp12880= nctemp12884;
struct nctempchar1 *nctemp12887;
static struct nctempchar1 nctemp12888 = {{ 3}, (char*)"if\0"};
nctemp12887=&nctemp12888;
nctempchar1* nctemp12885= nctemp12887;
int nctemp12889=LibeStrcmp(nctemp12880,nctemp12885);
int nctemp12877 = (nctemp12889 ==1);
if(nctemp12877)
{
struct tree* nctemp12892= p;
int nctemp12894=CodeIfstmnt(nctemp12892);
}
struct tree* nctemp12900= p;
nctempchar1* nctemp12902=PtreeGetname(nctemp12900);
nctempchar1* nctemp12898= nctemp12902;
struct nctempchar1 *nctemp12905;
static struct nctempchar1 nctemp12906 = {{ 7}, (char*)"return\0"};
nctemp12905=&nctemp12906;
nctempchar1* nctemp12903= nctemp12905;
int nctemp12907=LibeStrcmp(nctemp12898,nctemp12903);
int nctemp12895 = (nctemp12907 ==1);
if(nctemp12895)
{
struct tree* nctemp12910= p;
int nctemp12912=CodeReturnstmnt(nctemp12910);
}
struct tree* nctemp12917= p;
struct tree* nctemp12919=PtreeMvsister(nctemp12917);
p =nctemp12919;
}
int nctemp12920 = (p !=0);
nctemp12765=nctemp12920;}struct tree* nctemp12925= sp;
struct nctempchar1 *nctemp12929;
static struct nctempchar1 nctemp12930 = {{ 4}, (char*)"}\n\0"};
nctemp12929=&nctemp12930;
nctempchar1* nctemp12927= nctemp12929;
int nctemp12931=CodeEs(nctemp12925,nctemp12927);
return 1;
}
int CodeStmnt (struct tree* p)
{
struct tree* sp;
sp = p;
struct tree* nctemp12934= p;
struct nctempchar1 *nctemp12938;
static struct nctempchar1 nctemp12939 = {{ 4}, (char*)"{\n\0"};
nctemp12938=&nctemp12939;
nctempchar1* nctemp12936= nctemp12938;
int nctemp12940=CodeEs(nctemp12934,nctemp12936);
struct tree* nctemp12946= p;
nctempchar1* nctemp12948=PtreeGetname(nctemp12946);
nctempchar1* nctemp12944= nctemp12948;
struct nctempchar1 *nctemp12951;
static struct nctempchar1 nctemp12952 = {{ 10}, (char*)"compstmnt\0"};
nctemp12951=&nctemp12952;
nctempchar1* nctemp12949= nctemp12951;
int nctemp12953=LibeStrcmp(nctemp12944,nctemp12949);
int nctemp12941 = (nctemp12953 ==1);
if(nctemp12941)
{
struct tree* nctemp12959= p;
struct tree* nctemp12961=PtreeMvchild(nctemp12959);
p =nctemp12961;
struct tree* nctemp12963= p;
struct symbol* nctemp12967=SymGetltp();
struct symbol* nctemp12965= nctemp12967;
int nctemp12968=CodeDeclarations(nctemp12963,nctemp12965);
struct tree* nctemp12974= p;
nctempchar1* nctemp12976=PtreeGetname(nctemp12974);
nctempchar1* nctemp12972= nctemp12976;
struct nctempchar1 *nctemp12979;
static struct nctempchar1 nctemp12980 = {{ 13}, (char*)"declarations\0"};
nctemp12979=&nctemp12980;
nctempchar1* nctemp12977= nctemp12979;
int nctemp12981=LibeStrcmp(nctemp12972,nctemp12977);
int nctemp12969 = (nctemp12981 ==1);
if(nctemp12969)
{
struct tree* nctemp12987= p;
struct tree* nctemp12989=PtreeMvsister(nctemp12987);
p =nctemp12989;
}
}
int nctemp12990 = (p !=0);
int nctemp12994=nctemp12990;
while(nctemp12994)
{{
struct tree* nctemp13000= p;
nctempchar1* nctemp13002=PtreeGetname(nctemp13000);
nctempchar1* nctemp12998= nctemp13002;
struct nctempchar1 *nctemp13005;
static struct nctempchar1 nctemp13006 = {{ 10}, (char*)"compstmnt\0"};
nctemp13005=&nctemp13006;
nctempchar1* nctemp13003= nctemp13005;
int nctemp13007=LibeStrcmp(nctemp12998,nctemp13003);
int nctemp12995 = (nctemp13007 ==1);
if(nctemp12995)
{
struct tree* nctemp13010= p;
int nctemp13012=CodeCompstmnt(nctemp13010);
}
struct tree* nctemp13018= p;
nctempchar1* nctemp13020=PtreeGetname(nctemp13018);
nctempchar1* nctemp13016= nctemp13020;
struct nctempchar1 *nctemp13023;
static struct nctempchar1 nctemp13024 = {{ 5}, (char*)"expr\0"};
nctemp13023=&nctemp13024;
nctempchar1* nctemp13021= nctemp13023;
int nctemp13025=LibeStrcmp(nctemp13016,nctemp13021);
int nctemp13013 = (nctemp13025 ==1);
if(nctemp13013)
{
struct tree* nctemp13028= p;
nctempchar1* nctemp13030=CodeExpr(nctemp13028);
}
struct tree* nctemp13036= p;
nctempchar1* nctemp13038=PtreeGetname(nctemp13036);
nctempchar1* nctemp13034= nctemp13038;
struct nctempchar1 *nctemp13041;
static struct nctempchar1 nctemp13042 = {{ 6}, (char*)"while\0"};
nctemp13041=&nctemp13042;
nctempchar1* nctemp13039= nctemp13041;
int nctemp13043=LibeStrcmp(nctemp13034,nctemp13039);
int nctemp13031 = (nctemp13043 ==1);
if(nctemp13031)
{
struct tree* nctemp13046= p;
int nctemp13048=CodeWhilestmnt(nctemp13046);
}
struct tree* nctemp13054= p;
nctempchar1* nctemp13056=PtreeGetname(nctemp13054);
nctempchar1* nctemp13052= nctemp13056;
struct nctempchar1 *nctemp13059;
static struct nctempchar1 nctemp13060 = {{ 4}, (char*)"for\0"};
nctemp13059=&nctemp13060;
nctempchar1* nctemp13057= nctemp13059;
int nctemp13061=LibeStrcmp(nctemp13052,nctemp13057);
int nctemp13049 = (nctemp13061 ==1);
if(nctemp13049)
{
struct tree* nctemp13064= p;
int nctemp13066=CodeForstmnt(nctemp13064);
}
struct tree* nctemp13072= p;
nctempchar1* nctemp13074=PtreeGetname(nctemp13072);
nctempchar1* nctemp13070= nctemp13074;
struct nctempchar1 *nctemp13077;
static struct nctempchar1 nctemp13078 = {{ 9}, (char*)"parallel\0"};
nctemp13077=&nctemp13078;
nctempchar1* nctemp13075= nctemp13077;
int nctemp13079=LibeStrcmp(nctemp13070,nctemp13075);
int nctemp13067 = (nctemp13079 ==1);
if(nctemp13067)
{
struct tree* nctemp13082= p;
int nctemp13084=CodeParallelstmnt(nctemp13082);
}
struct tree* nctemp13090= p;
nctempchar1* nctemp13092=PtreeGetname(nctemp13090);
nctempchar1* nctemp13088= nctemp13092;
struct nctempchar1 *nctemp13095;
static struct nctempchar1 nctemp13096 = {{ 3}, (char*)"if\0"};
nctemp13095=&nctemp13096;
nctempchar1* nctemp13093= nctemp13095;
int nctemp13097=LibeStrcmp(nctemp13088,nctemp13093);
int nctemp13085 = (nctemp13097 ==1);
if(nctemp13085)
{
struct tree* nctemp13100= p;
int nctemp13102=CodeIfstmnt(nctemp13100);
}
struct tree* nctemp13108= p;
nctempchar1* nctemp13110=PtreeGetname(nctemp13108);
nctempchar1* nctemp13106= nctemp13110;
struct nctempchar1 *nctemp13113;
static struct nctempchar1 nctemp13114 = {{ 7}, (char*)"return\0"};
nctemp13113=&nctemp13114;
nctempchar1* nctemp13111= nctemp13113;
int nctemp13115=LibeStrcmp(nctemp13106,nctemp13111);
int nctemp13103 = (nctemp13115 ==1);
if(nctemp13103)
{
struct tree* nctemp13118= p;
int nctemp13120=CodeReturnstmnt(nctemp13118);
}
struct tree* nctemp13125= p;
struct tree* nctemp13127=PtreeMvsister(nctemp13125);
p =nctemp13127;
}
int nctemp13128 = (p !=0);
nctemp12994=nctemp13128;}struct tree* nctemp13133= sp;
struct nctempchar1 *nctemp13137;
static struct nctempchar1 nctemp13138 = {{ 4}, (char*)"}\n\0"};
nctemp13137=&nctemp13138;
nctempchar1* nctemp13135= nctemp13137;
int nctemp13139=CodeEs(nctemp13133,nctemp13135);
return 1;
}
int CodeNewdescr (struct tree* p,nctempchar1 *pointer)
{
struct tree* nctemp13142= p;
nctempchar1* nctemp13144= pointer;
int nctemp13147=CodeEs(nctemp13142,nctemp13144);
struct tree* nctemp13149= p;
struct nctempchar1 *nctemp13153;
static struct nctempchar1 nctemp13154 = {{ 2}, (char*)"=\0"};
nctemp13153=&nctemp13154;
nctempchar1* nctemp13151= nctemp13153;
int nctemp13155=CodeEs(nctemp13149,nctemp13151);
struct tree* nctemp13157= p;
struct nctempchar1 *nctemp13161;
static struct nctempchar1 nctemp13162 = {{ 11}, (char*)"RunMalloc(\0"};
nctemp13161=&nctemp13162;
nctempchar1* nctemp13159= nctemp13161;
int nctemp13163=CodeEs(nctemp13157,nctemp13159);
struct tree* nctemp13165= p;
struct nctempchar1 *nctemp13169;
static struct nctempchar1 nctemp13170 = {{ 8}, (char*)"sizeof(\0"};
nctemp13169=&nctemp13170;
nctempchar1* nctemp13167= nctemp13169;
int nctemp13171=CodeEs(nctemp13165,nctemp13167);
struct tree* nctemp13173= p;
nctempchar1* nctemp13175= pointer;
int nctemp13178=CodeEs(nctemp13173,nctemp13175);
struct tree* nctemp13180= p;
struct nctempchar1 *nctemp13184;
static struct nctempchar1 nctemp13185 = {{ 6}, (char*)"));\n\0"};
nctemp13184=&nctemp13185;
nctempchar1* nctemp13182= nctemp13184;
int nctemp13186=CodeEs(nctemp13180,nctemp13182);
return 1;
}
int CodeFdef (struct tree* p)
{
int nctemp13191=CodeGetarch();
int nctemp13188 = (nctemp13191 ==1);
if(nctemp13188)
{
struct tree* nctemp13194= p;
int nctemp13196=CodeFdefcpu(nctemp13194);
}
else{
int nctemp13200=CodeGetarch();
int nctemp13197 = (nctemp13200 ==2);
if(nctemp13197)
{
struct tree* nctemp13209= p;
struct tree* nctemp13211=PtreeMvchild(nctemp13209);
struct tree* nctemp13207= nctemp13211;
nctempchar1* nctemp13212=PtreeGetparallel(nctemp13207);
nctempchar1* nctemp13205= nctemp13212;
struct nctempchar1 *nctemp13215;
static struct nctempchar1 nctemp13216 = {{ 9}, (char*)"parallel\0"};
nctemp13215=&nctemp13216;
nctempchar1* nctemp13213= nctemp13215;
int nctemp13217=LibeStrcmp(nctemp13205,nctemp13213);
int nctemp13202 = (nctemp13217 ==1);
if(nctemp13202)
{
struct tree* nctemp13220= p;
int nctemp13222=CodeFdefgpu(nctemp13220);
struct tree* nctemp13224= p;
int nctemp13226=CodeFdewrappergpu(nctemp13224);
}
else{
struct tree* nctemp13228= p;
int nctemp13230=CodeFdefcpu(nctemp13228);
}
}
else{
int nctemp13234=CodeGetarch();
int nctemp13231 = (nctemp13234 ==3);
if(nctemp13231)
{
struct tree* nctemp13241= p;
nctempchar1* nctemp13243=PtreeGetparallel(nctemp13241);
nctempchar1* nctemp13239= nctemp13243;
struct nctempchar1 *nctemp13246;
static struct nctempchar1 nctemp13247 = {{ 9}, (char*)"parallel\0"};
nctemp13246=&nctemp13247;
nctempchar1* nctemp13244= nctemp13246;
int nctemp13248=LibeStrcmp(nctemp13239,nctemp13244);
int nctemp13236 = (nctemp13248 ==1);
if(nctemp13236)
{
struct tree* nctemp13251= p;
int nctemp13253=CodeFdefgpu(nctemp13251);
struct tree* nctemp13255= p;
int nctemp13257=CodeFdewrappergpu(nctemp13255);
}
else{
struct tree* nctemp13259= p;
int nctemp13261=CodeFdefcpu(nctemp13259);
}
}
}
}
return 1;
}
int CodePreamblecpu ()
{
struct tree* p;
struct nctempchar1 *nctemp13269;
static struct nctempchar1 nctemp13270 = {{ 6}, (char*)"dummy\0"};
nctemp13269=&nctemp13270;
nctempchar1* nctemp13267= nctemp13269;
struct nctempchar1 *nctemp13273;
static struct nctempchar1 nctemp13274 = {{ 6}, (char*)"dummy\0"};
nctemp13273=&nctemp13274;
nctempchar1* nctemp13271= nctemp13273;
struct tree* nctemp13275=PtreeMknode(nctemp13267,nctemp13271);
p =nctemp13275;
struct tree* nctemp13277= p;
int nctemp13279= 1;
int nctemp13281=PtreeSetline(nctemp13277,nctemp13279);
struct tree* nctemp13283= p;
struct nctempchar1 *nctemp13287;
static struct nctempchar1 nctemp13288 = {{ 42}, (char*)"//  Translated by epsc  version today  \n\0"};
nctemp13287=&nctemp13288;
nctempchar1* nctemp13285= nctemp13287;
int nctemp13289=CodeEs(nctemp13283,nctemp13285);
struct tree* nctemp13291= p;
int nctemp13293= 2;
int nctemp13295=PtreeSetline(nctemp13291,nctemp13293);
struct tree* nctemp13297= p;
int nctemp13299= 3;
int nctemp13301=PtreeSetline(nctemp13297,nctemp13299);
struct tree* nctemp13303= p;
int nctemp13305= 4;
int nctemp13307=PtreeSetline(nctemp13303,nctemp13305);
struct tree* nctemp13309= p;
struct nctempchar1 *nctemp13313;
static struct nctempchar1 nctemp13314 = {{ 22}, (char*)"#include <stddef.h>\n\0"};
nctemp13313=&nctemp13314;
nctempchar1* nctemp13311= nctemp13313;
int nctemp13315=CodeEs(nctemp13309,nctemp13311);
struct tree* nctemp13317= p;
struct nctempchar1 *nctemp13321;
static struct nctempchar1 nctemp13322 = {{ 21}, (char*)"#include <stdio.h>\n\0"};
nctemp13321=&nctemp13322;
nctempchar1* nctemp13319= nctemp13321;
int nctemp13323=CodeEs(nctemp13317,nctemp13319);
struct tree* nctemp13325= p;
struct nctempchar1 *nctemp13329;
static struct nctempchar1 nctemp13330 = {{ 22}, (char*)"#include <assert.h>\n\0"};
nctemp13329=&nctemp13330;
nctempchar1* nctemp13327= nctemp13329;
int nctemp13331=CodeEs(nctemp13325,nctemp13327);
struct tree* nctemp13333= p;
struct nctempchar1 *nctemp13337;
static struct nctempchar1 nctemp13338 = {{ 48}, (char*)"typedef struct { float r; float i;} complex; \n\0"};
nctemp13337=&nctemp13338;
nctempchar1* nctemp13335= nctemp13337;
int nctemp13339=CodeEs(nctemp13333,nctemp13335);
struct tree* nctemp13341= p;
int nctemp13343= 3;
int nctemp13345=PtreeSetline(nctemp13341,nctemp13343);
struct tree* nctemp13347= p;
struct nctempchar1 *nctemp13351;
static struct nctempchar1 nctemp13352 = {{ 68}, (char*)"typedef struct nctempfloat1 { int d[1]; float *a;} nctempfloat1; \n\0"};
nctemp13351=&nctemp13352;
nctempchar1* nctemp13349= nctemp13351;
int nctemp13353=CodeEs(nctemp13347,nctemp13349);
struct tree* nctemp13355= p;
int nctemp13357= 5;
int nctemp13359=PtreeSetline(nctemp13355,nctemp13357);
struct tree* nctemp13361= p;
struct nctempchar1 *nctemp13365;
static struct nctempchar1 nctemp13366 = {{ 62}, (char*)"typedef struct nctempint1 { int d[1]; int *a;} nctempint1; \n\0"};
nctemp13365=&nctemp13366;
nctempchar1* nctemp13363= nctemp13365;
int nctemp13367=CodeEs(nctemp13361,nctemp13363);
struct tree* nctemp13369= p;
int nctemp13371= 7;
int nctemp13373=PtreeSetline(nctemp13369,nctemp13371);
struct tree* nctemp13375= p;
struct nctempchar1 *nctemp13379;
static struct nctempchar1 nctemp13380 = {{ 65}, (char*)"typedef struct nctempchar1 { int d[1]; char *a;} nctempchar1; \n\0"};
nctemp13379=&nctemp13380;
nctempchar1* nctemp13377= nctemp13379;
int nctemp13381=CodeEs(nctemp13375,nctemp13377);
struct tree* nctemp13383= p;
int nctemp13385= 7;
int nctemp13387=PtreeSetline(nctemp13383,nctemp13385);
struct tree* nctemp13389= p;
struct nctempchar1 *nctemp13393;
static struct nctempchar1 nctemp13394 = {{ 74}, (char*)"typedef struct nctempcomplex1 { int d[1]; complex *a;} nctempcomplex1; \n\0"};
nctemp13393=&nctemp13394;
nctempchar1* nctemp13391= nctemp13393;
int nctemp13395=CodeEs(nctemp13389,nctemp13391);
struct tree* nctemp13397= p;
int nctemp13399= 8;
int nctemp13401=PtreeSetline(nctemp13397,nctemp13399);
int nctemp13405=CodeArraycheck();
int nctemp13402 = (nctemp13405 ==1);
if(nctemp13402)
{
struct tree* nctemp13408= p;
struct nctempchar1 *nctemp13412;
static struct nctempchar1 nctemp13413 = {{ 55}, (char*)"static struct nctempchar1 nctempstringx = {0, NULL};\n\0"};
nctemp13412=&nctemp13413;
nctempchar1* nctemp13410= nctemp13412;
int nctemp13414=CodeEs(nctemp13408,nctemp13410);
struct tree* nctemp13416= p;
struct nctempchar1 *nctemp13420;
static struct nctempchar1 nctemp13421 = {{ 60}, (char*)"static struct nctempchar1 *nctempstring = &nctempstringx;\n\0"};
nctemp13420=&nctemp13421;
nctempchar1* nctemp13418= nctemp13420;
int nctemp13422=CodeEs(nctemp13416,nctemp13418);
struct tree* nctemp13424= p;
int nctemp13426= 8;
int nctemp13428=PtreeSetline(nctemp13424,nctemp13426);
}
struct tree* nctemp13430= p;
struct nctempchar1 *nctemp13434;
static struct nctempchar1 nctemp13435 = {{ 68}, (char*)"typedef struct nctempfloat2 { int d[2]; float *a;} nctempfloat2; \n\0"};
nctemp13434=&nctemp13435;
nctempchar1* nctemp13432= nctemp13434;
int nctemp13436=CodeEs(nctemp13430,nctemp13432);
struct tree* nctemp13438= p;
int nctemp13440= 10;
int nctemp13442=PtreeSetline(nctemp13438,nctemp13440);
struct tree* nctemp13444= p;
struct nctempchar1 *nctemp13448;
static struct nctempchar1 nctemp13449 = {{ 62}, (char*)"typedef struct nctempint2 { int d[2]; int *a;} nctempint2; \n\0"};
nctemp13448=&nctemp13449;
nctempchar1* nctemp13446= nctemp13448;
int nctemp13450=CodeEs(nctemp13444,nctemp13446);
struct tree* nctemp13452= p;
int nctemp13454= 10;
int nctemp13456=PtreeSetline(nctemp13452,nctemp13454);
struct tree* nctemp13458= p;
struct nctempchar1 *nctemp13462;
static struct nctempchar1 nctemp13463 = {{ 65}, (char*)"typedef struct nctempchar2 { int d[2]; char *a;} nctempchar2; \n\0"};
nctemp13462=&nctemp13463;
nctempchar1* nctemp13460= nctemp13462;
int nctemp13464=CodeEs(nctemp13458,nctemp13460);
struct tree* nctemp13466= p;
int nctemp13468= 12;
int nctemp13470=PtreeSetline(nctemp13466,nctemp13468);
struct tree* nctemp13472= p;
struct nctempchar1 *nctemp13476;
static struct nctempchar1 nctemp13477 = {{ 74}, (char*)"typedef struct nctempcomplex2 { int d[2]; complex *a;} nctempcomplex2; \n\0"};
nctemp13476=&nctemp13477;
nctempchar1* nctemp13474= nctemp13476;
int nctemp13478=CodeEs(nctemp13472,nctemp13474);
struct tree* nctemp13480= p;
int nctemp13482= 13;
int nctemp13484=PtreeSetline(nctemp13480,nctemp13482);
struct tree* nctemp13486= p;
struct nctempchar1 *nctemp13490;
static struct nctempchar1 nctemp13491 = {{ 68}, (char*)"typedef struct nctempfloat3 { int d[3]; float *a;} nctempfloat3; \n\0"};
nctemp13490=&nctemp13491;
nctempchar1* nctemp13488= nctemp13490;
int nctemp13492=CodeEs(nctemp13486,nctemp13488);
struct tree* nctemp13494= p;
int nctemp13496= 14;
int nctemp13498=PtreeSetline(nctemp13494,nctemp13496);
struct tree* nctemp13500= p;
struct nctempchar1 *nctemp13504;
static struct nctempchar1 nctemp13505 = {{ 62}, (char*)"typedef struct nctempint3 { int d[3]; int *a;} nctempint3; \n\0"};
nctemp13504=&nctemp13505;
nctempchar1* nctemp13502= nctemp13504;
int nctemp13506=CodeEs(nctemp13500,nctemp13502);
struct tree* nctemp13508= p;
int nctemp13510= 15;
int nctemp13512=PtreeSetline(nctemp13508,nctemp13510);
struct tree* nctemp13514= p;
struct nctempchar1 *nctemp13518;
static struct nctempchar1 nctemp13519 = {{ 65}, (char*)"typedef struct nctempchar3 { int d[3]; char *a;} nctempchar3; \n\0"};
nctemp13518=&nctemp13519;
nctempchar1* nctemp13516= nctemp13518;
int nctemp13520=CodeEs(nctemp13514,nctemp13516);
struct tree* nctemp13522= p;
int nctemp13524= 16;
int nctemp13526=PtreeSetline(nctemp13522,nctemp13524);
struct tree* nctemp13528= p;
struct nctempchar1 *nctemp13532;
static struct nctempchar1 nctemp13533 = {{ 74}, (char*)"typedef struct nctempcomplex3 { int d[3]; complex *a;} nctempcomplex3; \n\0"};
nctemp13532=&nctemp13533;
nctempchar1* nctemp13530= nctemp13532;
int nctemp13534=CodeEs(nctemp13528,nctemp13530);
struct tree* nctemp13536= p;
int nctemp13538= 17;
int nctemp13540=PtreeSetline(nctemp13536,nctemp13538);
struct tree* nctemp13542= p;
struct nctempchar1 *nctemp13546;
static struct nctempchar1 nctemp13547 = {{ 68}, (char*)"typedef struct nctempfloat4 { int d[4]; float *a;} nctempfloat4; \n\0"};
nctemp13546=&nctemp13547;
nctempchar1* nctemp13544= nctemp13546;
int nctemp13548=CodeEs(nctemp13542,nctemp13544);
struct tree* nctemp13550= p;
int nctemp13552= 18;
int nctemp13554=PtreeSetline(nctemp13550,nctemp13552);
struct tree* nctemp13556= p;
struct nctempchar1 *nctemp13560;
static struct nctempchar1 nctemp13561 = {{ 62}, (char*)"typedef struct nctempint4 { int d[4]; int *a;} nctempint4; \n\0"};
nctemp13560=&nctemp13561;
nctempchar1* nctemp13558= nctemp13560;
int nctemp13562=CodeEs(nctemp13556,nctemp13558);
struct tree* nctemp13564= p;
int nctemp13566= 19;
int nctemp13568=PtreeSetline(nctemp13564,nctemp13566);
struct tree* nctemp13570= p;
struct nctempchar1 *nctemp13574;
static struct nctempchar1 nctemp13575 = {{ 65}, (char*)"typedef struct nctempchar4 { int d[4]; char *a;} nctempchar4; \n\0"};
nctemp13574=&nctemp13575;
nctempchar1* nctemp13572= nctemp13574;
int nctemp13576=CodeEs(nctemp13570,nctemp13572);
struct tree* nctemp13578= p;
int nctemp13580= 20;
int nctemp13582=PtreeSetline(nctemp13578,nctemp13580);
struct tree* nctemp13584= p;
struct nctempchar1 *nctemp13588;
static struct nctempchar1 nctemp13589 = {{ 74}, (char*)"typedef struct nctempcomplex4 { int d[4]; complex *a;} nctempcomplex4; \n\0"};
nctemp13588=&nctemp13589;
nctempchar1* nctemp13586= nctemp13588;
int nctemp13590=CodeEs(nctemp13584,nctemp13586);
struct tree* nctemp13592= p;
struct nctempchar1 *nctemp13596;
static struct nctempchar1 nctemp13597 = {{ 22}, (char*)"#include <stdlib.h>\n\0"};
nctemp13596=&nctemp13597;
nctempchar1* nctemp13594= nctemp13596;
int nctemp13598=CodeEs(nctemp13592,nctemp13594);
struct tree* nctemp13600= p;
struct nctempchar1 *nctemp13604;
static struct nctempchar1 nctemp13605 = {{ 22}, (char*)"#include <string.h>\n\0"};
nctemp13604=&nctemp13605;
nctempchar1* nctemp13602= nctemp13604;
int nctemp13606=CodeEs(nctemp13600,nctemp13602);
struct tree* nctemp13608= p;
struct nctempchar1 *nctemp13612;
static struct nctempchar1 nctemp13613 = {{ 27}, (char*)"void *RunMalloc(int n); \n\0"};
nctemp13612=&nctemp13613;
nctempchar1* nctemp13610= nctemp13612;
int nctemp13614=CodeEs(nctemp13608,nctemp13610);
struct tree* nctemp13616= p;
struct nctempchar1 *nctemp13620;
static struct nctempchar1 nctemp13621 = {{ 25}, (char*)"int RunFree(void *n); \n\0"};
nctemp13620=&nctemp13621;
nctempchar1* nctemp13618= nctemp13620;
int nctemp13622=CodeEs(nctemp13616,nctemp13618);
return 1;
}
int CodePreamblecuda ()
{
struct tree* p;
struct nctempchar1 *nctemp13630;
static struct nctempchar1 nctemp13631 = {{ 6}, (char*)"dummy\0"};
nctemp13630=&nctemp13631;
nctempchar1* nctemp13628= nctemp13630;
struct nctempchar1 *nctemp13634;
static struct nctempchar1 nctemp13635 = {{ 6}, (char*)"dummy\0"};
nctemp13634=&nctemp13635;
nctempchar1* nctemp13632= nctemp13634;
struct tree* nctemp13636=PtreeMknode(nctemp13628,nctemp13632);
p =nctemp13636;
struct tree* nctemp13638= p;
int nctemp13640= 1;
int nctemp13642=PtreeSetline(nctemp13638,nctemp13640);
struct tree* nctemp13644= p;
struct nctempchar1 *nctemp13648;
static struct nctempchar1 nctemp13649 = {{ 50}, (char*)"//  Translated by epsc  version December 2021  \n\0"};
nctemp13648=&nctemp13649;
nctempchar1* nctemp13646= nctemp13648;
int nctemp13650=CodeEs(nctemp13644,nctemp13646);
struct tree* nctemp13652= p;
int nctemp13654= 2;
int nctemp13656=PtreeSetline(nctemp13652,nctemp13654);
struct tree* nctemp13658= p;
int nctemp13660= 3;
int nctemp13662=PtreeSetline(nctemp13658,nctemp13660);
struct tree* nctemp13664= p;
struct nctempchar1 *nctemp13668;
static struct nctempchar1 nctemp13669 = {{ 17}, (char*)"extern \"C\" {\n\0"};
nctemp13668=&nctemp13669;
nctempchar1* nctemp13666= nctemp13668;
int nctemp13670=CodeEs(nctemp13664,nctemp13666);
struct tree* nctemp13672= p;
struct nctempchar1 *nctemp13676;
static struct nctempchar1 nctemp13677 = {{ 48}, (char*)"typedef struct { float r; float i;} complex; \n\0"};
nctemp13676=&nctemp13677;
nctempchar1* nctemp13674= nctemp13676;
int nctemp13678=CodeEs(nctemp13672,nctemp13674);
struct tree* nctemp13680= p;
int nctemp13682= 3;
int nctemp13684=PtreeSetline(nctemp13680,nctemp13682);
struct tree* nctemp13686= p;
struct nctempchar1 *nctemp13690;
static struct nctempchar1 nctemp13691 = {{ 68}, (char*)"typedef struct nctempfloat1 { int d[1]; float *a;} nctempfloat1; \n\0"};
nctemp13690=&nctemp13691;
nctempchar1* nctemp13688= nctemp13690;
int nctemp13692=CodeEs(nctemp13686,nctemp13688);
struct tree* nctemp13694= p;
int nctemp13696= 5;
int nctemp13698=PtreeSetline(nctemp13694,nctemp13696);
struct tree* nctemp13700= p;
struct nctempchar1 *nctemp13704;
static struct nctempchar1 nctemp13705 = {{ 62}, (char*)"typedef struct nctempint1 { int d[1]; int *a;} nctempint1; \n\0"};
nctemp13704=&nctemp13705;
nctempchar1* nctemp13702= nctemp13704;
int nctemp13706=CodeEs(nctemp13700,nctemp13702);
struct tree* nctemp13708= p;
int nctemp13710= 7;
int nctemp13712=PtreeSetline(nctemp13708,nctemp13710);
struct tree* nctemp13714= p;
struct nctempchar1 *nctemp13718;
static struct nctempchar1 nctemp13719 = {{ 65}, (char*)"typedef struct nctempchar1 { int d[1]; char *a;} nctempchar1; \n\0"};
nctemp13718=&nctemp13719;
nctempchar1* nctemp13716= nctemp13718;
int nctemp13720=CodeEs(nctemp13714,nctemp13716);
struct tree* nctemp13722= p;
int nctemp13724= 7;
int nctemp13726=PtreeSetline(nctemp13722,nctemp13724);
struct tree* nctemp13728= p;
struct nctempchar1 *nctemp13732;
static struct nctempchar1 nctemp13733 = {{ 74}, (char*)"typedef struct nctempcomplex1 { int d[1]; complex *a;} nctempcomplex1; \n\0"};
nctemp13732=&nctemp13733;
nctempchar1* nctemp13730= nctemp13732;
int nctemp13734=CodeEs(nctemp13728,nctemp13730);
struct tree* nctemp13736= p;
int nctemp13738= 8;
int nctemp13740=PtreeSetline(nctemp13736,nctemp13738);
int nctemp13744=CodeArraycheck();
int nctemp13741 = (nctemp13744 ==1);
if(nctemp13741)
{
struct tree* nctemp13747= p;
struct nctempchar1 *nctemp13751;
static struct nctempchar1 nctemp13752 = {{ 55}, (char*)"static struct nctempchar1 nctempstringx = {0, NULL};\n\0"};
nctemp13751=&nctemp13752;
nctempchar1* nctemp13749= nctemp13751;
int nctemp13753=CodeEs(nctemp13747,nctemp13749);
struct tree* nctemp13755= p;
struct nctempchar1 *nctemp13759;
static struct nctempchar1 nctemp13760 = {{ 60}, (char*)"static struct nctempchar1 *nctempstring = &nctempstringx;\n\0"};
nctemp13759=&nctemp13760;
nctempchar1* nctemp13757= nctemp13759;
int nctemp13761=CodeEs(nctemp13755,nctemp13757);
struct tree* nctemp13763= p;
int nctemp13765= 8;
int nctemp13767=PtreeSetline(nctemp13763,nctemp13765);
}
struct tree* nctemp13769= p;
struct nctempchar1 *nctemp13773;
static struct nctempchar1 nctemp13774 = {{ 68}, (char*)"typedef struct nctempfloat2 { int d[2]; float *a;} nctempfloat2; \n\0"};
nctemp13773=&nctemp13774;
nctempchar1* nctemp13771= nctemp13773;
int nctemp13775=CodeEs(nctemp13769,nctemp13771);
struct tree* nctemp13777= p;
int nctemp13779= 10;
int nctemp13781=PtreeSetline(nctemp13777,nctemp13779);
struct tree* nctemp13783= p;
struct nctempchar1 *nctemp13787;
static struct nctempchar1 nctemp13788 = {{ 62}, (char*)"typedef struct nctempint2 { int d[2]; int *a;} nctempint2; \n\0"};
nctemp13787=&nctemp13788;
nctempchar1* nctemp13785= nctemp13787;
int nctemp13789=CodeEs(nctemp13783,nctemp13785);
struct tree* nctemp13791= p;
int nctemp13793= 10;
int nctemp13795=PtreeSetline(nctemp13791,nctemp13793);
struct tree* nctemp13797= p;
struct nctempchar1 *nctemp13801;
static struct nctempchar1 nctemp13802 = {{ 65}, (char*)"typedef struct nctempchar2 { int d[2]; char *a;} nctempchar2; \n\0"};
nctemp13801=&nctemp13802;
nctempchar1* nctemp13799= nctemp13801;
int nctemp13803=CodeEs(nctemp13797,nctemp13799);
struct tree* nctemp13805= p;
int nctemp13807= 12;
int nctemp13809=PtreeSetline(nctemp13805,nctemp13807);
struct tree* nctemp13811= p;
struct nctempchar1 *nctemp13815;
static struct nctempchar1 nctemp13816 = {{ 74}, (char*)"typedef struct nctempcomplex2 { int d[2]; complex *a;} nctempcomplex2; \n\0"};
nctemp13815=&nctemp13816;
nctempchar1* nctemp13813= nctemp13815;
int nctemp13817=CodeEs(nctemp13811,nctemp13813);
struct tree* nctemp13819= p;
int nctemp13821= 13;
int nctemp13823=PtreeSetline(nctemp13819,nctemp13821);
struct tree* nctemp13825= p;
struct nctempchar1 *nctemp13829;
static struct nctempchar1 nctemp13830 = {{ 68}, (char*)"typedef struct nctempfloat3 { int d[3]; float *a;} nctempfloat3; \n\0"};
nctemp13829=&nctemp13830;
nctempchar1* nctemp13827= nctemp13829;
int nctemp13831=CodeEs(nctemp13825,nctemp13827);
struct tree* nctemp13833= p;
int nctemp13835= 14;
int nctemp13837=PtreeSetline(nctemp13833,nctemp13835);
struct tree* nctemp13839= p;
struct nctempchar1 *nctemp13843;
static struct nctempchar1 nctemp13844 = {{ 62}, (char*)"typedef struct nctempint3 { int d[3]; int *a;} nctempint3; \n\0"};
nctemp13843=&nctemp13844;
nctempchar1* nctemp13841= nctemp13843;
int nctemp13845=CodeEs(nctemp13839,nctemp13841);
struct tree* nctemp13847= p;
int nctemp13849= 15;
int nctemp13851=PtreeSetline(nctemp13847,nctemp13849);
struct tree* nctemp13853= p;
struct nctempchar1 *nctemp13857;
static struct nctempchar1 nctemp13858 = {{ 65}, (char*)"typedef struct nctempchar3 { int d[3]; char *a;} nctempchar3; \n\0"};
nctemp13857=&nctemp13858;
nctempchar1* nctemp13855= nctemp13857;
int nctemp13859=CodeEs(nctemp13853,nctemp13855);
struct tree* nctemp13861= p;
int nctemp13863= 16;
int nctemp13865=PtreeSetline(nctemp13861,nctemp13863);
struct tree* nctemp13867= p;
struct nctempchar1 *nctemp13871;
static struct nctempchar1 nctemp13872 = {{ 74}, (char*)"typedef struct nctempcomplex3 { int d[3]; complex *a;} nctempcomplex3; \n\0"};
nctemp13871=&nctemp13872;
nctempchar1* nctemp13869= nctemp13871;
int nctemp13873=CodeEs(nctemp13867,nctemp13869);
struct tree* nctemp13875= p;
int nctemp13877= 17;
int nctemp13879=PtreeSetline(nctemp13875,nctemp13877);
struct tree* nctemp13881= p;
struct nctempchar1 *nctemp13885;
static struct nctempchar1 nctemp13886 = {{ 68}, (char*)"typedef struct nctempfloat4 { int d[4]; float *a;} nctempfloat4; \n\0"};
nctemp13885=&nctemp13886;
nctempchar1* nctemp13883= nctemp13885;
int nctemp13887=CodeEs(nctemp13881,nctemp13883);
struct tree* nctemp13889= p;
int nctemp13891= 18;
int nctemp13893=PtreeSetline(nctemp13889,nctemp13891);
struct tree* nctemp13895= p;
struct nctempchar1 *nctemp13899;
static struct nctempchar1 nctemp13900 = {{ 62}, (char*)"typedef struct nctempint4 { int d[4]; int *a;} nctempint4; \n\0"};
nctemp13899=&nctemp13900;
nctempchar1* nctemp13897= nctemp13899;
int nctemp13901=CodeEs(nctemp13895,nctemp13897);
struct tree* nctemp13903= p;
int nctemp13905= 19;
int nctemp13907=PtreeSetline(nctemp13903,nctemp13905);
struct tree* nctemp13909= p;
struct nctempchar1 *nctemp13913;
static struct nctempchar1 nctemp13914 = {{ 65}, (char*)"typedef struct nctempchar4 { int d[4]; char *a;} nctempchar4; \n\0"};
nctemp13913=&nctemp13914;
nctempchar1* nctemp13911= nctemp13913;
int nctemp13915=CodeEs(nctemp13909,nctemp13911);
struct tree* nctemp13917= p;
int nctemp13919= 20;
int nctemp13921=PtreeSetline(nctemp13917,nctemp13919);
struct tree* nctemp13923= p;
struct nctempchar1 *nctemp13927;
static struct nctempchar1 nctemp13928 = {{ 74}, (char*)"typedef struct nctempcomplex4 { int d[4]; complex *a;} nctempcomplex4; \n\0"};
nctemp13927=&nctemp13928;
nctempchar1* nctemp13925= nctemp13927;
int nctemp13929=CodeEs(nctemp13923,nctemp13925);
struct tree* nctemp13931= p;
struct nctempchar1 *nctemp13935;
static struct nctempchar1 nctemp13936 = {{ 21}, (char*)"#include <stdio.h>\n\0"};
nctemp13935=&nctemp13936;
nctempchar1* nctemp13933= nctemp13935;
int nctemp13937=CodeEs(nctemp13931,nctemp13933);
struct tree* nctemp13939= p;
struct nctempchar1 *nctemp13943;
static struct nctempchar1 nctemp13944 = {{ 22}, (char*)"#include <stdlib.h>\n\0"};
nctemp13943=&nctemp13944;
nctempchar1* nctemp13941= nctemp13943;
int nctemp13945=CodeEs(nctemp13939,nctemp13941);
struct tree* nctemp13947= p;
struct nctempchar1 *nctemp13951;
static struct nctempchar1 nctemp13952 = {{ 22}, (char*)"#include <string.h>\n\0"};
nctemp13951=&nctemp13952;
nctempchar1* nctemp13949= nctemp13951;
int nctemp13953=CodeEs(nctemp13947,nctemp13949);
struct tree* nctemp13955= p;
struct nctempchar1 *nctemp13959;
static struct nctempchar1 nctemp13960 = {{ 22}, (char*)"#include <assert.h>\n\0"};
nctemp13959=&nctemp13960;
nctempchar1* nctemp13957= nctemp13959;
int nctemp13961=CodeEs(nctemp13955,nctemp13957);
struct tree* nctemp13963= p;
struct nctempchar1 *nctemp13967;
static struct nctempchar1 nctemp13968 = {{ 3}, (char*)"\n\0"};
nctemp13967=&nctemp13968;
nctempchar1* nctemp13965= nctemp13967;
int nctemp13969=CodeEs(nctemp13963,nctemp13965);
struct tree* nctemp13971= p;
struct nctempchar1 *nctemp13975;
static struct nctempchar1 nctemp13976 = {{ 23}, (char*)"void *GpuNew(int n);\n\0"};
nctemp13975=&nctemp13976;
nctempchar1* nctemp13973= nctemp13975;
int nctemp13977=CodeEs(nctemp13971,nctemp13973);
struct tree* nctemp13979= p;
struct nctempchar1 *nctemp13983;
static struct nctempchar1 nctemp13984 = {{ 28}, (char*)"void *GpuDelete(void *f);\n\0"};
nctemp13983=&nctemp13984;
nctempchar1* nctemp13981= nctemp13983;
int nctemp13985=CodeEs(nctemp13979,nctemp13981);
struct tree* nctemp13987= p;
struct nctempchar1 *nctemp13991;
static struct nctempchar1 nctemp13992 = {{ 20}, (char*)"void *GpuError();\n\0"};
nctemp13991=&nctemp13992;
nctempchar1* nctemp13989= nctemp13991;
int nctemp13993=CodeEs(nctemp13987,nctemp13989);
struct tree* nctemp13995= p;
struct nctempchar1 *nctemp13999;
static struct nctempchar1 nctemp14000 = {{ 26}, (char*)"void *RunMalloc(int n);\n\0"};
nctemp13999=&nctemp14000;
nctempchar1* nctemp13997= nctemp13999;
int nctemp14001=CodeEs(nctemp13995,nctemp13997);
struct tree* nctemp14003= p;
struct nctempchar1 *nctemp14007;
static struct nctempchar1 nctemp14008 = {{ 24}, (char*)"int RunFree(void * );\n\0"};
nctemp14007=&nctemp14008;
nctempchar1* nctemp14005= nctemp14007;
int nctemp14009=CodeEs(nctemp14003,nctemp14005);
struct tree* nctemp14011= p;
struct nctempchar1 *nctemp14015;
static struct nctempchar1 nctemp14016 = {{ 17}, (char*)"int RunSync();\n\0"};
nctemp14015=&nctemp14016;
nctempchar1* nctemp14013= nctemp14015;
int nctemp14017=CodeEs(nctemp14011,nctemp14013);
struct tree* nctemp14019= p;
struct nctempchar1 *nctemp14023;
static struct nctempchar1 nctemp14024 = {{ 18}, (char*)"int RunGetnt();\n\0"};
nctemp14023=&nctemp14024;
nctempchar1* nctemp14021= nctemp14023;
int nctemp14025=CodeEs(nctemp14019,nctemp14021);
struct tree* nctemp14027= p;
struct nctempchar1 *nctemp14031;
static struct nctempchar1 nctemp14032 = {{ 18}, (char*)"int RunGetnb();\n\0"};
nctemp14031=&nctemp14032;
nctempchar1* nctemp14029= nctemp14031;
int nctemp14033=CodeEs(nctemp14027,nctemp14029);
return 1;
}
int CodePreamblehip ()
{
struct tree* p;
struct nctempchar1 *nctemp14041;
static struct nctempchar1 nctemp14042 = {{ 6}, (char*)"dummy\0"};
nctemp14041=&nctemp14042;
nctempchar1* nctemp14039= nctemp14041;
struct nctempchar1 *nctemp14045;
static struct nctempchar1 nctemp14046 = {{ 6}, (char*)"dummy\0"};
nctemp14045=&nctemp14046;
nctempchar1* nctemp14043= nctemp14045;
struct tree* nctemp14047=PtreeMknode(nctemp14039,nctemp14043);
p =nctemp14047;
struct tree* nctemp14049= p;
int nctemp14051= 1;
int nctemp14053=PtreeSetline(nctemp14049,nctemp14051);
struct tree* nctemp14055= p;
struct nctempchar1 *nctemp14059;
static struct nctempchar1 nctemp14060 = {{ 50}, (char*)"//  Translated by epsc  version December 2021  \n\0"};
nctemp14059=&nctemp14060;
nctempchar1* nctemp14057= nctemp14059;
int nctemp14061=CodeEs(nctemp14055,nctemp14057);
struct tree* nctemp14063= p;
int nctemp14065= 2;
int nctemp14067=PtreeSetline(nctemp14063,nctemp14065);
struct tree* nctemp14069= p;
int nctemp14071= 3;
int nctemp14073=PtreeSetline(nctemp14069,nctemp14071);
struct tree* nctemp14075= p;
struct nctempchar1 *nctemp14079;
static struct nctempchar1 nctemp14080 = {{ 48}, (char*)"typedef struct { float r; float i;} complex; \n\0"};
nctemp14079=&nctemp14080;
nctempchar1* nctemp14077= nctemp14079;
int nctemp14081=CodeEs(nctemp14075,nctemp14077);
struct tree* nctemp14083= p;
int nctemp14085= 3;
int nctemp14087=PtreeSetline(nctemp14083,nctemp14085);
struct tree* nctemp14089= p;
struct nctempchar1 *nctemp14093;
static struct nctempchar1 nctemp14094 = {{ 68}, (char*)"typedef struct nctempfloat1 { int d[1]; float *a;} nctempfloat1; \n\0"};
nctemp14093=&nctemp14094;
nctempchar1* nctemp14091= nctemp14093;
int nctemp14095=CodeEs(nctemp14089,nctemp14091);
struct tree* nctemp14097= p;
int nctemp14099= 5;
int nctemp14101=PtreeSetline(nctemp14097,nctemp14099);
struct tree* nctemp14103= p;
struct nctempchar1 *nctemp14107;
static struct nctempchar1 nctemp14108 = {{ 62}, (char*)"typedef struct nctempint1 { int d[1]; int *a;} nctempint1; \n\0"};
nctemp14107=&nctemp14108;
nctempchar1* nctemp14105= nctemp14107;
int nctemp14109=CodeEs(nctemp14103,nctemp14105);
struct tree* nctemp14111= p;
int nctemp14113= 7;
int nctemp14115=PtreeSetline(nctemp14111,nctemp14113);
struct tree* nctemp14117= p;
struct nctempchar1 *nctemp14121;
static struct nctempchar1 nctemp14122 = {{ 65}, (char*)"typedef struct nctempchar1 { int d[1]; char *a;} nctempchar1; \n\0"};
nctemp14121=&nctemp14122;
nctempchar1* nctemp14119= nctemp14121;
int nctemp14123=CodeEs(nctemp14117,nctemp14119);
struct tree* nctemp14125= p;
int nctemp14127= 7;
int nctemp14129=PtreeSetline(nctemp14125,nctemp14127);
struct tree* nctemp14131= p;
struct nctempchar1 *nctemp14135;
static struct nctempchar1 nctemp14136 = {{ 74}, (char*)"typedef struct nctempcomplex1 { int d[1]; complex *a;} nctempcomplex1; \n\0"};
nctemp14135=&nctemp14136;
nctempchar1* nctemp14133= nctemp14135;
int nctemp14137=CodeEs(nctemp14131,nctemp14133);
struct tree* nctemp14139= p;
int nctemp14141= 8;
int nctemp14143=PtreeSetline(nctemp14139,nctemp14141);
int nctemp14147=CodeArraycheck();
int nctemp14144 = (nctemp14147 ==1);
if(nctemp14144)
{
struct tree* nctemp14150= p;
struct nctempchar1 *nctemp14154;
static struct nctempchar1 nctemp14155 = {{ 54}, (char*)"static struct nctempchar1 nctempstring = {0, NULL};\n\0"};
nctemp14154=&nctemp14155;
nctempchar1* nctemp14152= nctemp14154;
int nctemp14156=CodeEs(nctemp14150,nctemp14152);
struct tree* nctemp14158= p;
int nctemp14160= 8;
int nctemp14162=PtreeSetline(nctemp14158,nctemp14160);
}
struct tree* nctemp14164= p;
struct nctempchar1 *nctemp14168;
static struct nctempchar1 nctemp14169 = {{ 68}, (char*)"typedef struct nctempfloat2 { int d[2]; float *a;} nctempfloat2; \n\0"};
nctemp14168=&nctemp14169;
nctempchar1* nctemp14166= nctemp14168;
int nctemp14170=CodeEs(nctemp14164,nctemp14166);
struct tree* nctemp14172= p;
int nctemp14174= 10;
int nctemp14176=PtreeSetline(nctemp14172,nctemp14174);
struct tree* nctemp14178= p;
struct nctempchar1 *nctemp14182;
static struct nctempchar1 nctemp14183 = {{ 62}, (char*)"typedef struct nctempint2 { int d[2]; int *a;} nctempint2; \n\0"};
nctemp14182=&nctemp14183;
nctempchar1* nctemp14180= nctemp14182;
int nctemp14184=CodeEs(nctemp14178,nctemp14180);
struct tree* nctemp14186= p;
int nctemp14188= 10;
int nctemp14190=PtreeSetline(nctemp14186,nctemp14188);
struct tree* nctemp14192= p;
struct nctempchar1 *nctemp14196;
static struct nctempchar1 nctemp14197 = {{ 65}, (char*)"typedef struct nctempchar2 { int d[2]; char *a;} nctempchar2; \n\0"};
nctemp14196=&nctemp14197;
nctempchar1* nctemp14194= nctemp14196;
int nctemp14198=CodeEs(nctemp14192,nctemp14194);
struct tree* nctemp14200= p;
int nctemp14202= 12;
int nctemp14204=PtreeSetline(nctemp14200,nctemp14202);
struct tree* nctemp14206= p;
struct nctempchar1 *nctemp14210;
static struct nctempchar1 nctemp14211 = {{ 74}, (char*)"typedef struct nctempcomplex2 { int d[2]; complex *a;} nctempcomplex2; \n\0"};
nctemp14210=&nctemp14211;
nctempchar1* nctemp14208= nctemp14210;
int nctemp14212=CodeEs(nctemp14206,nctemp14208);
struct tree* nctemp14214= p;
int nctemp14216= 13;
int nctemp14218=PtreeSetline(nctemp14214,nctemp14216);
struct tree* nctemp14220= p;
struct nctempchar1 *nctemp14224;
static struct nctempchar1 nctemp14225 = {{ 68}, (char*)"typedef struct nctempfloat3 { int d[3]; float *a;} nctempfloat3; \n\0"};
nctemp14224=&nctemp14225;
nctempchar1* nctemp14222= nctemp14224;
int nctemp14226=CodeEs(nctemp14220,nctemp14222);
struct tree* nctemp14228= p;
int nctemp14230= 14;
int nctemp14232=PtreeSetline(nctemp14228,nctemp14230);
struct tree* nctemp14234= p;
struct nctempchar1 *nctemp14238;
static struct nctempchar1 nctemp14239 = {{ 62}, (char*)"typedef struct nctempint3 { int d[3]; int *a;} nctempint3; \n\0"};
nctemp14238=&nctemp14239;
nctempchar1* nctemp14236= nctemp14238;
int nctemp14240=CodeEs(nctemp14234,nctemp14236);
struct tree* nctemp14242= p;
int nctemp14244= 15;
int nctemp14246=PtreeSetline(nctemp14242,nctemp14244);
struct tree* nctemp14248= p;
struct nctempchar1 *nctemp14252;
static struct nctempchar1 nctemp14253 = {{ 65}, (char*)"typedef struct nctempchar3 { int d[3]; char *a;} nctempchar3; \n\0"};
nctemp14252=&nctemp14253;
nctempchar1* nctemp14250= nctemp14252;
int nctemp14254=CodeEs(nctemp14248,nctemp14250);
struct tree* nctemp14256= p;
int nctemp14258= 16;
int nctemp14260=PtreeSetline(nctemp14256,nctemp14258);
struct tree* nctemp14262= p;
struct nctempchar1 *nctemp14266;
static struct nctempchar1 nctemp14267 = {{ 74}, (char*)"typedef struct nctempcomplex3 { int d[3]; complex *a;} nctempcomplex3; \n\0"};
nctemp14266=&nctemp14267;
nctempchar1* nctemp14264= nctemp14266;
int nctemp14268=CodeEs(nctemp14262,nctemp14264);
struct tree* nctemp14270= p;
int nctemp14272= 17;
int nctemp14274=PtreeSetline(nctemp14270,nctemp14272);
struct tree* nctemp14276= p;
struct nctempchar1 *nctemp14280;
static struct nctempchar1 nctemp14281 = {{ 68}, (char*)"typedef struct nctempfloat4 { int d[4]; float *a;} nctempfloat4; \n\0"};
nctemp14280=&nctemp14281;
nctempchar1* nctemp14278= nctemp14280;
int nctemp14282=CodeEs(nctemp14276,nctemp14278);
struct tree* nctemp14284= p;
int nctemp14286= 18;
int nctemp14288=PtreeSetline(nctemp14284,nctemp14286);
struct tree* nctemp14290= p;
struct nctempchar1 *nctemp14294;
static struct nctempchar1 nctemp14295 = {{ 62}, (char*)"typedef struct nctempint4 { int d[4]; int *a;} nctempint4; \n\0"};
nctemp14294=&nctemp14295;
nctempchar1* nctemp14292= nctemp14294;
int nctemp14296=CodeEs(nctemp14290,nctemp14292);
struct tree* nctemp14298= p;
int nctemp14300= 19;
int nctemp14302=PtreeSetline(nctemp14298,nctemp14300);
struct tree* nctemp14304= p;
struct nctempchar1 *nctemp14308;
static struct nctempchar1 nctemp14309 = {{ 65}, (char*)"typedef struct nctempchar4 { int d[4]; char *a;} nctempchar4; \n\0"};
nctemp14308=&nctemp14309;
nctempchar1* nctemp14306= nctemp14308;
int nctemp14310=CodeEs(nctemp14304,nctemp14306);
struct tree* nctemp14312= p;
int nctemp14314= 20;
int nctemp14316=PtreeSetline(nctemp14312,nctemp14314);
struct tree* nctemp14318= p;
struct nctempchar1 *nctemp14322;
static struct nctempchar1 nctemp14323 = {{ 74}, (char*)"typedef struct nctempcomplex4 { int d[4]; complex *a;} nctempcomplex4; \n\0"};
nctemp14322=&nctemp14323;
nctempchar1* nctemp14320= nctemp14322;
int nctemp14324=CodeEs(nctemp14318,nctemp14320);
struct tree* nctemp14326= p;
struct nctempchar1 *nctemp14330;
static struct nctempchar1 nctemp14331 = {{ 21}, (char*)"#include <stdio.h>\n\0"};
nctemp14330=&nctemp14331;
nctempchar1* nctemp14328= nctemp14330;
int nctemp14332=CodeEs(nctemp14326,nctemp14328);
struct tree* nctemp14334= p;
struct nctempchar1 *nctemp14338;
static struct nctempchar1 nctemp14339 = {{ 17}, (char*)"extern \"C\" {\n\0"};
nctemp14338=&nctemp14339;
nctempchar1* nctemp14336= nctemp14338;
int nctemp14340=CodeEs(nctemp14334,nctemp14336);
struct tree* nctemp14342= p;
struct nctempchar1 *nctemp14346;
static struct nctempchar1 nctemp14347 = {{ 22}, (char*)"#include <stdlib.h>\n\0"};
nctemp14346=&nctemp14347;
nctempchar1* nctemp14344= nctemp14346;
int nctemp14348=CodeEs(nctemp14342,nctemp14344);
struct tree* nctemp14350= p;
struct nctempchar1 *nctemp14354;
static struct nctempchar1 nctemp14355 = {{ 22}, (char*)"#include <string.h>\n\0"};
nctemp14354=&nctemp14355;
nctempchar1* nctemp14352= nctemp14354;
int nctemp14356=CodeEs(nctemp14350,nctemp14352);
struct tree* nctemp14358= p;
struct nctempchar1 *nctemp14362;
static struct nctempchar1 nctemp14363 = {{ 4}, (char*)"}\n\0"};
nctemp14362=&nctemp14363;
nctempchar1* nctemp14360= nctemp14362;
int nctemp14364=CodeEs(nctemp14358,nctemp14360);
struct tree* nctemp14366= p;
struct nctempchar1 *nctemp14370;
static struct nctempchar1 nctemp14371 = {{ 34}, (char*)"#include \"hip/hip_runtime.h\" \n\0"};
nctemp14370=&nctemp14371;
nctempchar1* nctemp14368= nctemp14370;
int nctemp14372=CodeEs(nctemp14366,nctemp14368);
struct tree* nctemp14374= p;
struct nctempchar1 *nctemp14378;
static struct nctempchar1 nctemp14379 = {{ 3}, (char*)"\n\0"};
nctemp14378=&nctemp14379;
nctempchar1* nctemp14376= nctemp14378;
int nctemp14380=CodeEs(nctemp14374,nctemp14376);
struct tree* nctemp14382= p;
struct nctempchar1 *nctemp14386;
static struct nctempchar1 nctemp14387 = {{ 23}, (char*)"void *GpuNew(int n);\n\0"};
nctemp14386=&nctemp14387;
nctempchar1* nctemp14384= nctemp14386;
int nctemp14388=CodeEs(nctemp14382,nctemp14384);
struct tree* nctemp14390= p;
struct nctempchar1 *nctemp14394;
static struct nctempchar1 nctemp14395 = {{ 28}, (char*)"void *GpuDelete(void *f);\n\0"};
nctemp14394=&nctemp14395;
nctempchar1* nctemp14392= nctemp14394;
int nctemp14396=CodeEs(nctemp14390,nctemp14392);
struct tree* nctemp14398= p;
struct nctempchar1 *nctemp14402;
static struct nctempchar1 nctemp14403 = {{ 20}, (char*)"void *GpuError();\n\0"};
nctemp14402=&nctemp14403;
nctempchar1* nctemp14400= nctemp14402;
int nctemp14404=CodeEs(nctemp14398,nctemp14400);
struct tree* nctemp14406= p;
struct nctempchar1 *nctemp14410;
static struct nctempchar1 nctemp14411 = {{ 26}, (char*)"void *RunMalloc(int n);\n\0"};
nctemp14410=&nctemp14411;
nctempchar1* nctemp14408= nctemp14410;
int nctemp14412=CodeEs(nctemp14406,nctemp14408);
struct tree* nctemp14414= p;
struct nctempchar1 *nctemp14418;
static struct nctempchar1 nctemp14419 = {{ 24}, (char*)"int RunFree(void *p);\n\0"};
nctemp14418=&nctemp14419;
nctempchar1* nctemp14416= nctemp14418;
int nctemp14420=CodeEs(nctemp14414,nctemp14416);
return 1;
}
int CodePreamble ()
{
int nctemp14425=CodeGetarch();
int nctemp14422 = (nctemp14425 ==1);
if(nctemp14422)
{
int nctemp14428=CodePreamblecpu();
return 1;
}
else{
int nctemp14433=CodeGetarch();
int nctemp14430 = (nctemp14433 ==2);
if(nctemp14430)
{
int nctemp14436=CodePreamblecuda();
return 1;
}
else{
int nctemp14441=CodeGetarch();
int nctemp14438 = (nctemp14441 ==3);
if(nctemp14438)
{
int nctemp14444=CodePreamblehip();
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
int nctemp14451=CodeGetfdout();
fdo =nctemp14451;
int nctemp14455=CodeGetarch();
int nctemp14452 = (nctemp14455 ==2);
if(nctemp14452)
{
int nctemp14458= fdo;
struct nctempchar1 *nctemp14462;
static struct nctempchar1 nctemp14463 = {{ 4}, (char*)"}\n\0"};
nctemp14462=&nctemp14463;
nctempchar1* nctemp14460= nctemp14462;
int nctemp14464=LibePuts(nctemp14458,nctemp14460);
return 1;
}
else{
int nctemp14469=CodeGetarch();
int nctemp14466 = (nctemp14469 ==3);
if(nctemp14466)
{
int nctemp14472= fdo;
struct nctempchar1 *nctemp14476;
static struct nctempchar1 nctemp14477 = {{ 4}, (char*)"}\n\0"};
nctemp14476=&nctemp14477;
nctempchar1* nctemp14474= nctemp14476;
int nctemp14478=LibePuts(nctemp14472,nctemp14474);
return 1;
}
else{
return 0;
}
}
}
