//  Translated by epsc  version: Mon Mar 16 23:06:54 2026

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
nctempchar1 * LibeDate ();
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
int SymPrsym (int fp,struct symbol* p,int level);
int SymIstemp (nctempchar1 *name);
struct symbol* SymLookup (nctempchar1 *s,struct symbol* tp);
struct symbol* SymGetable (struct symbol* np);
struct symbol* SymMkname (nctempchar1 *name,struct symbol* tp);
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
nctempchar1 * ScanPath ();
int SemCompstmnt (struct tree* p)
;
int SemStmnt (struct tree* p)
;
struct tree* SemExpr (struct tree* p)
;
struct tree* SemUnexpr (struct tree* p)
;
struct tree* SemPrimexpr (struct tree* p)
;
static int SemParallel;
int SemGetparallel ()
{
return SemParallel;
}
int SemSetparallel (int flag)
{
SemParallel = flag;
return 1;
}
static int SemReturn;
int SemGetreturn ()
{
return SemReturn;
}
int SemSetreturn (int flag)
{
SemReturn = flag;
return 1;
}
static int SemSimple;
int SemSetsimple (int simple)
{
SemSimple = simple;
return 1;
}
int SemGetsimple ()
{
return SemSimple;
}
int SemSerror (struct tree* p,nctempchar1 *s1,nctempchar1 *s2)
{
struct tree* nctemp10= p;
nctempchar1* nctemp12=PtreeGetfile(nctemp10);
nctempchar1* nctemp8= nctemp12;
struct tree* nctemp15= p;
nctempchar1* nctemp17=PtreeGetdef(nctemp15);
nctempchar1* nctemp13= nctemp17;
struct tree* nctemp20= p;
int nctemp22=PtreeGetline(nctemp20);
int nctemp18= nctemp22;
nctempchar1* nctemp23= s1;
nctempchar1* nctemp26= s2;
int nctemp29=ErrSerror(nctemp8,nctemp13,nctemp18,nctemp23,nctemp26);
return 1;
}
int SemImport (struct tree* p,struct symbol* etp)
{
nctempchar1 *module;
nctempchar1 *file;
nctempchar1 *path;
nctempchar1 *sysfile;
int fd;
struct symbol* stp;
struct tree* nctemp36= p;
nctempchar1* nctemp38=PtreeGetdef(nctemp36);
module=nctemp38;
nctempchar1* nctemp44= module;
struct nctempchar1 *nctemp49;
static struct nctempchar1 nctemp50 = {{ 3}, (char*)".m\0"};
nctemp49=&nctemp50;
nctempchar1* nctemp47= nctemp49;
nctempchar1* nctemp51=LibeStradd(nctemp44,nctemp47);
file=nctemp51;
nctempchar1* nctemp56= file;
struct nctempchar1 *nctemp61;
static struct nctempchar1 nctemp62 = {{ 2}, (char*)"r\0"};
nctemp61=&nctemp62;
nctempchar1* nctemp59= nctemp61;
int nctemp63=LibeOpen(nctemp56,nctemp59);
fd =nctemp63;
int nctemp64 = (fd ==0);
if(nctemp64)
{
nctempchar1* nctemp73=ScanPath();
path=nctemp73;
nctempchar1* nctemp79= path;
nctempchar1* nctemp82= file;
nctempchar1* nctemp85=LibeStradd(nctemp79,nctemp82);
sysfile=nctemp85;
nctempchar1* nctemp90= sysfile;
struct nctempchar1 *nctemp95;
static struct nctempchar1 nctemp96 = {{ 2}, (char*)"r\0"};
nctemp95=&nctemp96;
nctempchar1* nctemp93= nctemp95;
int nctemp97=LibeOpen(nctemp90,nctemp93);
fd =nctemp97;
RunFree(sysfile->a);
RunFree(sysfile);
RunFree(path->a);
RunFree(path);
int nctemp104 = (fd ==0);
if(nctemp104)
{
struct tree* nctemp109= p;
struct nctempchar1 *nctemp113;
static struct nctempchar1 nctemp114 = {{ 24}, (char*)"Module file not found: \0"};
nctemp113=&nctemp114;
nctempchar1* nctemp111= nctemp113;
nctempchar1* nctemp115= file;
int nctemp118=SemSerror(nctemp109,nctemp111,nctemp115);
}
}
struct symbol* nctemp123=SymMktable();
stp =nctemp123;
int nctemp125= fd;
struct symbol* nctemp127= stp;
nctempchar1* nctemp129= module;
int nctemp132=SymReadsym(nctemp125,nctemp127,nctemp129);
int nctemp134= fd;
int nctemp136=LibeClose(nctemp134);
struct symbol* nctemp141= etp;
struct symbol* nctemp143= stp;
struct symbol* nctemp145=SymAddtble(nctemp141,nctemp143);
etp =nctemp145;
return 1;
}
int SemAutodeclar (struct tree* identifier,struct symbol* local,struct symbol* global)
{
struct symbol* entry;
struct tree* nctemp156= identifier;
nctempchar1* nctemp158=PtreeGetdef(nctemp156);
nctempchar1* nctemp154= nctemp158;
struct symbol* nctemp159=SymLook(nctemp154);
entry =nctemp159;
int nctemp147 = (entry !=0);
if(nctemp147)
{
return 1;
}
struct tree* nctemp168= identifier;
nctempchar1* nctemp170=PtreeGetdef(nctemp168);
nctempchar1* nctemp166= nctemp170;
struct symbol* nctemp171= local;
struct symbol* nctemp173=SymMkname(nctemp166,nctemp171);
entry =nctemp173;
struct symbol* nctemp175= entry;
struct nctempchar1 *nctemp179;
static struct nctempchar1 nctemp180 = {{ 11}, (char*)"identifier\0"};
nctemp179=&nctemp180;
nctempchar1* nctemp177= nctemp179;
int nctemp181=SymSetident(nctemp175,nctemp177);
struct symbol* nctemp183= entry;
struct tree* nctemp187= identifier;
nctempchar1* nctemp189=PtreeGetype(nctemp187);
nctempchar1* nctemp185= nctemp189;
int nctemp190=SymSetype(nctemp183,nctemp185);
struct symbol* nctemp192= entry;
struct nctempchar1 *nctemp196;
static struct nctempchar1 nctemp197 = {{ 5}, (char*)"lval\0"};
nctemp196=&nctemp197;
nctempchar1* nctemp194= nctemp196;
int nctemp198=SymSetlval(nctemp192,nctemp194);
struct symbol* nctemp200= entry;
struct tree* nctemp204= identifier;
nctempchar1* nctemp206=PtreeGetarray(nctemp204);
nctempchar1* nctemp202= nctemp206;
int nctemp207=SymSetarray(nctemp200,nctemp202);
struct symbol* nctemp209= entry;
struct tree* nctemp213= identifier;
nctempchar1* nctemp215=PtreeGetstruct(nctemp213);
nctempchar1* nctemp211= nctemp215;
int nctemp216=SymSetstruct(nctemp209,nctemp211);
struct symbol* nctemp218= entry;
struct tree* nctemp222= identifier;
nctempchar1* nctemp224=PtreeGetref(nctemp222);
nctempchar1* nctemp220= nctemp224;
int nctemp225=SymSetref(nctemp218,nctemp220);
struct symbol* nctemp227= entry;
struct tree* nctemp231= identifier;
int nctemp233=PtreeGetrank(nctemp231);
int nctemp229= nctemp233;
int nctemp234=SymSetrank(nctemp227,nctemp229);
return 1;
}
int SemDeclaration (struct tree* p,struct symbol* tp)
{
struct tree* np;
struct tree* sp;
struct symbol* up;
int rank;
int l;
nctempchar1 *s;
nctempchar1 *global;
struct tree* nctemp237= p;
struct tree* nctemp241= p;
nctempchar1* nctemp243=PtreeGetdef(nctemp241);
nctempchar1* nctemp239= nctemp243;
int nctemp244=PtreeSetype(nctemp237,nctemp239);
struct tree* nctemp250= p;
nctempchar1* nctemp252=PtreeGetglobal(nctemp250);
global=nctemp252;
rank = 0;
struct tree* nctemp256= p;
nctempchar1* nctemp258=PtreeGetarray(nctemp256);
nctempchar1* nctemp254= nctemp258;
struct nctempchar1 *nctemp261;
static struct nctempchar1 nctemp262 = {{ 6}, (char*)"array\0"};
nctemp261=&nctemp262;
nctempchar1* nctemp259= nctemp261;
int nctemp263=LibeStrcmp(nctemp254,nctemp259);
if(nctemp263)
{
struct tree* nctemp268= p;
struct tree* nctemp270=PtreeMvchild(nctemp268);
np =nctemp270;
struct tree* nctemp275= np;
struct tree* nctemp277=PtreeMvchild(nctemp275);
np =nctemp277;
rank = 1;
struct tree* nctemp285= np;
struct tree* nctemp287=PtreeMvsister(nctemp285);
np =nctemp287;
int nctemp278 = (np !=0);
int nctemp289=nctemp278;
while(nctemp289)
{{
rank = (rank + 1);
}
struct tree* nctemp297= np;
struct tree* nctemp299=PtreeMvsister(nctemp297);
np =nctemp299;
int nctemp290 = (np !=0);
nctemp289=nctemp290;}struct tree* nctemp305= p;
struct tree* nctemp307=PtreeMvchild(nctemp305);
np =nctemp307;
struct tree* nctemp312= np;
struct tree* nctemp314=PtreeMvsister(nctemp312);
np =nctemp314;
}
else{
struct tree* nctemp319= p;
struct tree* nctemp321=PtreeMvchild(nctemp319);
np =nctemp321;
}
int nctemp322 = (np !=0);
int nctemp326=nctemp322;
while(nctemp326)
{{
struct tree* nctemp328= np;
struct tree* nctemp332= p;
nctempchar1* nctemp334=PtreeGetype(nctemp332);
nctempchar1* nctemp330= nctemp334;
int nctemp335=PtreeSetype(nctemp328,nctemp330);
struct tree* nctemp345= np;
nctempchar1* nctemp347=PtreeGetdef(nctemp345);
nctempchar1* nctemp343= nctemp347;
struct symbol* nctemp348= tp;
struct symbol* nctemp350=SymMkname(nctemp343,nctemp348);
up =nctemp350;
int nctemp336 = (up ==0);
if(nctemp336)
{
struct tree* nctemp353= np;
struct nctempchar1 *nctemp357;
static struct nctempchar1 nctemp358 = {{ 21}, (char*)"Multiple declaration\0"};
nctemp357=&nctemp358;
nctempchar1* nctemp355= nctemp357;
struct tree* nctemp361= np;
nctempchar1* nctemp363=PtreeGetdef(nctemp361);
nctempchar1* nctemp359= nctemp363;
int nctemp364=SemSerror(nctemp353,nctemp355,nctemp359);
}
else{
struct symbol* nctemp366= up;
struct nctempchar1 *nctemp370;
static struct nctempchar1 nctemp371 = {{ 11}, (char*)"identifier\0"};
nctemp370=&nctemp371;
nctempchar1* nctemp368= nctemp370;
int nctemp372=SymSetident(nctemp366,nctemp368);
struct symbol* nctemp374= up;
struct tree* nctemp378= p;
nctempchar1* nctemp380=PtreeGetype(nctemp378);
nctempchar1* nctemp376= nctemp380;
int nctemp381=SymSetype(nctemp374,nctemp376);
nctempchar1* nctemp385= global;
struct nctempchar1 *nctemp390;
static struct nctempchar1 nctemp391 = {{ 7}, (char*)"global\0"};
nctemp390=&nctemp391;
nctempchar1* nctemp388= nctemp390;
int nctemp392=LibeStrcmp(nctemp385,nctemp388);
int nctemp382 = (nctemp392 ==1);
if(nctemp382)
{
struct symbol* nctemp395= up;
struct nctempchar1 *nctemp399;
static struct nctempchar1 nctemp400 = {{ 7}, (char*)"global\0"};
nctemp399=&nctemp400;
nctempchar1* nctemp397= nctemp399;
int nctemp401=SymSetglobal(nctemp395,nctemp397);
}
struct tree* nctemp407= p;
nctempchar1* nctemp409=PtreeGetype(nctemp407);
nctempchar1* nctemp405= nctemp409;
struct nctempchar1 *nctemp412;
static struct nctempchar1 nctemp413 = {{ 6}, (char*)"const\0"};
nctemp412=&nctemp413;
nctempchar1* nctemp410= nctemp412;
int nctemp414=LibeStrcmp(nctemp405,nctemp410);
int nctemp402 = (nctemp414 ==1);
if(nctemp402)
{
struct tree* nctemp420= np;
struct tree* nctemp422=PtreeMvchild(nctemp420);
sp =nctemp422;
struct tree* nctemp427= sp;
struct tree* nctemp429=PtreeMvchild(nctemp427);
sp =nctemp429;
struct tree* nctemp435= sp;
nctempchar1* nctemp437=PtreeGetname(nctemp435);
nctempchar1* nctemp433= nctemp437;
struct nctempchar1 *nctemp440;
static struct nctempchar1 nctemp441 = {{ 7}, (char*)"unexpr\0"};
nctemp440=&nctemp441;
nctempchar1* nctemp438= nctemp440;
int nctemp442=LibeStrcmp(nctemp433,nctemp438);
int nctemp430 = (nctemp442 ==1);
if(nctemp430)
{
struct tree* nctemp448= sp;
struct tree* nctemp450=PtreeMvchild(nctemp448);
sp =nctemp450;
struct tree* nctemp463= sp;
nctempchar1* nctemp465=PtreeGetdef(nctemp463);
nctempchar1* nctemp461= nctemp465;
int nctemp466=LibeStrlen(nctemp461);
int nctemp468 = nctemp466 + 1;
int nctemp470 = nctemp468 + 3;
l =nctemp470;
int nctemp477=l;
nctempchar1 *nctemp476;
nctemp476=(nctempchar1*)RunMalloc(sizeof(nctempchar1));
nctemp476->d[0]=l;
nctemp476->a=(char *)RunMalloc(sizeof(char)*nctemp477);
s=nctemp476;
struct nctempchar1 *nctemp483;
static struct nctempchar1 nctemp484 = {{ 3}, (char*)"(-\0"};
nctemp483=&nctemp484;
nctempchar1* nctemp481= nctemp483;
nctempchar1* nctemp485= s;
int nctemp488=LibeStrcpy(nctemp481,nctemp485);
struct tree* nctemp492= sp;
nctempchar1* nctemp494=PtreeGetdef(nctemp492);
nctempchar1* nctemp490= nctemp494;
nctempchar1* nctemp495= s;
int nctemp498=LibeStrcat(nctemp490,nctemp495);
struct nctempchar1 *nctemp502;
static struct nctempchar1 nctemp503 = {{ 2}, (char*)")\0"};
nctemp502=&nctemp503;
nctempchar1* nctemp500= nctemp502;
nctempchar1* nctemp504= s;
int nctemp507=LibeStrcat(nctemp500,nctemp504);
struct tree* nctemp509= sp;
nctempchar1* nctemp511= s;
int nctemp514=PtreeSetdef(nctemp509,nctemp511);
RunFree(s->a);
RunFree(s);
}
struct symbol* nctemp519= up;
struct tree* nctemp523= sp;
nctempchar1* nctemp525=PtreeGetname(nctemp523);
nctempchar1* nctemp521= nctemp525;
int nctemp526=SymSetype(nctemp519,nctemp521);
struct symbol* nctemp528= up;
struct tree* nctemp532= sp;
nctempchar1* nctemp534=PtreeGetdef(nctemp532);
nctempchar1* nctemp530= nctemp534;
int nctemp535=SymSetdescr(nctemp528,nctemp530);
struct symbol* nctemp537= up;
int nctemp539= 0;
int nctemp541=SymSetemit(nctemp537,nctemp539);
}
struct symbol* nctemp543= up;
struct nctempchar1 *nctemp547;
static struct nctempchar1 nctemp548 = {{ 5}, (char*)"lval\0"};
nctemp547=&nctemp548;
nctempchar1* nctemp545= nctemp547;
int nctemp549=SymSetlval(nctemp543,nctemp545);
struct tree* nctemp553= p;
nctempchar1* nctemp555=PtreeGetstruct(nctemp553);
nctempchar1* nctemp551= nctemp555;
struct nctempchar1 *nctemp558;
static struct nctempchar1 nctemp559 = {{ 7}, (char*)"struct\0"};
nctemp558=&nctemp559;
nctempchar1* nctemp556= nctemp558;
int nctemp560=LibeStrcmp(nctemp551,nctemp556);
if(nctemp560)
{
struct tree* nctemp566= p;
nctempchar1* nctemp568=PtreeGetype(nctemp566);
nctempchar1* nctemp564= nctemp568;
struct symbol* nctemp571=SymGetetp();
struct symbol* nctemp569= nctemp571;
struct symbol* nctemp572=SymLookup(nctemp564,nctemp569);
int nctemp561 = (nctemp572 ==0);
if(nctemp561)
{
struct tree* nctemp575= p;
struct nctempchar1 *nctemp579;
static struct nctempchar1 nctemp580 = {{ 20}, (char*)"Undefined structure\0"};
nctemp579=&nctemp580;
nctempchar1* nctemp577= nctemp579;
struct tree* nctemp583= p;
nctempchar1* nctemp585=PtreeGetype(nctemp583);
nctempchar1* nctemp581= nctemp585;
int nctemp586=SemSerror(nctemp575,nctemp577,nctemp581);
}
struct symbol* nctemp588= up;
struct tree* nctemp592= p;
nctempchar1* nctemp594=PtreeGetstruct(nctemp592);
nctempchar1* nctemp590= nctemp594;
int nctemp595=SymSetstruct(nctemp588,nctemp590);
}
struct symbol* nctemp597= up;
struct tree* nctemp601= p;
nctempchar1* nctemp603=PtreeGetarray(nctemp601);
nctempchar1* nctemp599= nctemp603;
int nctemp604=SymSetarray(nctemp597,nctemp599);
struct symbol* nctemp606= up;
int nctemp608= rank;
int nctemp610=SymSetrank(nctemp606,nctemp608);
struct tree* nctemp612= np;
int nctemp614= rank;
int nctemp616=PtreeSetrank(nctemp612,nctemp614);
}
struct tree* nctemp621= np;
struct tree* nctemp623=PtreeMvsister(nctemp621);
np =nctemp623;
}
int nctemp624 = (np !=0);
nctemp326=nctemp624;}return 1;
}
int SemDeclarations (struct tree* p,struct symbol* tp)
{
int nctemp629 = (p !=0);
int nctemp633=nctemp629;
while(nctemp633)
{{
struct tree* nctemp635= p;
struct symbol* nctemp637= tp;
int nctemp639=SemDeclaration(nctemp635,nctemp637);
struct tree* nctemp644= p;
struct tree* nctemp646=PtreeMvsister(nctemp644);
p =nctemp646;
}
int nctemp647 = (p !=0);
nctemp633=nctemp647;}return 1;
}
int SemStructdecl (struct tree* p,struct symbol* tp)
{
struct symbol* up;
struct symbol* uup;
nctempchar1 *structure;
struct tree* nctemp657= p;
nctempchar1* nctemp659=PtreeGetdef(nctemp657);
structure=nctemp659;
struct tree* nctemp664= p;
struct tree* nctemp666=PtreeMvchild(nctemp664);
p =nctemp666;
struct tree* nctemp671= p;
struct tree* nctemp673=PtreeMvchild(nctemp671);
p =nctemp673;
struct tree* nctemp677= p;
nctempchar1* nctemp679=PtreeGetname(nctemp677);
nctempchar1* nctemp675= nctemp679;
struct nctempchar1 *nctemp682;
static struct nctempchar1 nctemp683 = {{ 13}, (char*)"declarations\0"};
nctemp682=&nctemp683;
nctempchar1* nctemp680= nctemp682;
int nctemp684=LibeStrcmp(nctemp675,nctemp680);
if(nctemp684)
{
struct symbol* nctemp689=SymMktable();
up =nctemp689;
nctempchar1* nctemp697= structure;
struct symbol* nctemp700= tp;
struct symbol* nctemp702=SymMkname(nctemp697,nctemp700);
uup =nctemp702;
int nctemp690 = (uup ==0);
if(nctemp690)
{
struct tree* nctemp705= p;
struct nctempchar1 *nctemp709;
static struct nctempchar1 nctemp710 = {{ 21}, (char*)"Multiple declaration\0"};
nctemp709=&nctemp710;
nctempchar1* nctemp707= nctemp709;
nctempchar1* nctemp711= structure;
int nctemp714=SemSerror(nctemp705,nctemp707,nctemp711);
}
else{
struct symbol* nctemp716= uup;
struct symbol* nctemp718= up;
struct symbol* nctemp720=SymSetable(nctemp716,nctemp718);
struct symbol* nctemp722= uup;
struct nctempchar1 *nctemp726;
static struct nctempchar1 nctemp727 = {{ 10}, (char*)"structdef\0"};
nctemp726=&nctemp727;
nctempchar1* nctemp724= nctemp726;
int nctemp728=SymSetstruct(nctemp722,nctemp724);
struct symbol* nctemp730= uup;
nctempchar1* nctemp732= structure;
int nctemp735=SymSetype(nctemp730,nctemp732);
struct tree* nctemp739= p;
struct tree* nctemp741=PtreeMvchild(nctemp739);
struct tree* nctemp737= nctemp741;
struct symbol* nctemp742= up;
int nctemp744=SemDeclarations(nctemp737,nctemp742);
}
}
return 1;
}
int SemArgtype (struct tree* p,struct symbol* tp)
{
nctempchar1 *name;
struct tree* nctemp751= p;
nctempchar1* nctemp753=PtreeGetdef(nctemp751);
name=nctemp753;
struct symbol* nctemp759= tp;
nctempchar1* nctemp761=SymGetype(nctemp759);
nctempchar1* nctemp757= nctemp761;
struct tree* nctemp764= p;
nctempchar1* nctemp766=PtreeGetype(nctemp764);
nctempchar1* nctemp762= nctemp766;
int nctemp767=LibeStrcmp(nctemp757,nctemp762);
int nctemp754 = (nctemp767 ==0);
if(nctemp754)
{
struct tree* nctemp770= p;
struct nctempchar1 *nctemp774;
static struct nctempchar1 nctemp775 = {{ 49}, (char*)"Argument type does not match forward declaration\0"};
nctemp774=&nctemp775;
nctempchar1* nctemp772= nctemp774;
nctempchar1* nctemp776= name;
int nctemp779=SemSerror(nctemp770,nctemp772,nctemp776);
}
struct symbol* nctemp785= tp;
nctempchar1* nctemp787=SymGetref(nctemp785);
nctempchar1* nctemp783= nctemp787;
struct tree* nctemp790= p;
nctempchar1* nctemp792=PtreeGetref(nctemp790);
nctempchar1* nctemp788= nctemp792;
int nctemp793=LibeStrcmp(nctemp783,nctemp788);
int nctemp780 = (nctemp793 ==0);
if(nctemp780)
{
struct tree* nctemp796= p;
struct nctempchar1 *nctemp800;
static struct nctempchar1 nctemp801 = {{ 49}, (char*)"Argument type does not match forward declaration\0"};
nctemp800=&nctemp801;
nctempchar1* nctemp798= nctemp800;
nctempchar1* nctemp802= name;
int nctemp805=SemSerror(nctemp796,nctemp798,nctemp802);
}
struct symbol* nctemp811= tp;
nctempchar1* nctemp813=SymGetarray(nctemp811);
nctempchar1* nctemp809= nctemp813;
struct tree* nctemp816= p;
nctempchar1* nctemp818=PtreeGetarray(nctemp816);
nctempchar1* nctemp814= nctemp818;
int nctemp819=LibeStrcmp(nctemp809,nctemp814);
int nctemp806 = (nctemp819 ==0);
if(nctemp806)
{
struct tree* nctemp822= p;
struct nctempchar1 *nctemp826;
static struct nctempchar1 nctemp827 = {{ 49}, (char*)"Argument type does not match forward declaration\0"};
nctemp826=&nctemp827;
nctempchar1* nctemp824= nctemp826;
nctempchar1* nctemp828= name;
int nctemp831=SemSerror(nctemp822,nctemp824,nctemp828);
}
struct symbol* nctemp835= tp;
int nctemp837=SymGetrank(nctemp835);
struct tree* nctemp839= p;
int nctemp841=PtreeGetrank(nctemp839);
int nctemp832 = (nctemp837 !=nctemp841);
if(nctemp832)
{
struct tree* nctemp843= p;
struct nctempchar1 *nctemp847;
static struct nctempchar1 nctemp848 = {{ 49}, (char*)"Argument type does not match forward declaration\0"};
nctemp847=&nctemp848;
nctempchar1* nctemp845= nctemp847;
nctempchar1* nctemp849= name;
int nctemp852=SemSerror(nctemp843,nctemp845,nctemp849);
}
return 1;
}
int SemArray (struct tree* p,struct symbol* tp)
{
struct tree* np;
int rank;
struct tree* nctemp859= p;
nctempchar1* nctemp861=PtreeGetarray(nctemp859);
nctempchar1* nctemp857= nctemp861;
struct nctempchar1 *nctemp864;
static struct nctempchar1 nctemp865 = {{ 6}, (char*)"array\0"};
nctemp864=&nctemp865;
nctempchar1* nctemp862= nctemp864;
int nctemp866=LibeStrcmp(nctemp857,nctemp862);
int nctemp854 = (nctemp866 ==0);
if(nctemp854)
{
struct tree* nctemp869= p;
struct nctempchar1 *nctemp873;
static struct nctempchar1 nctemp874 = {{ 13}, (char*)"Not an array\0"};
nctemp873=&nctemp874;
nctempchar1* nctemp871= nctemp873;
struct tree* nctemp877= p;
nctempchar1* nctemp879=PtreeGetdef(nctemp877);
nctempchar1* nctemp875= nctemp879;
int nctemp880=SemSerror(nctemp869,nctemp871,nctemp875);
return 0;
}
struct tree* nctemp883= p;
struct nctempchar1 *nctemp887;
static struct nctempchar1 nctemp888 = {{ 11}, (char*)"identifier\0"};
nctemp887=&nctemp888;
nctempchar1* nctemp885= nctemp887;
int nctemp889=PtreeSetname(nctemp883,nctemp885);
struct tree* nctemp894= p;
struct tree* nctemp896=PtreeMvchild(nctemp894);
np =nctemp896;
struct tree* nctemp902= np;
nctempchar1* nctemp904=PtreeGetname(nctemp902);
nctempchar1* nctemp900= nctemp904;
struct nctempchar1 *nctemp907;
static struct nctempchar1 nctemp908 = {{ 9}, (char*)"exprlist\0"};
nctemp907=&nctemp908;
nctempchar1* nctemp905= nctemp907;
int nctemp909=LibeStrcmp(nctemp900,nctemp905);
int nctemp897 = (nctemp909 ==0);
if(nctemp897)
{
struct tree* nctemp912= p;
struct nctempchar1 *nctemp916;
static struct nctempchar1 nctemp917 = {{ 22}, (char*)"Missing array indexes\0"};
nctemp916=&nctemp917;
nctempchar1* nctemp914= nctemp916;
struct tree* nctemp920= p;
nctempchar1* nctemp922=PtreeGetdef(nctemp920);
nctempchar1* nctemp918= nctemp922;
int nctemp923=SemSerror(nctemp912,nctemp914,nctemp918);
return 0;
}
struct tree* nctemp932= np;
struct tree* nctemp934=PtreeMvchild(nctemp932);
np =nctemp934;
int nctemp925 = (np !=0);
if(nctemp925)
{
rank = 0;
int nctemp936 = (np !=0);
int nctemp940=nctemp936;
while(nctemp940)
{{
struct tree* nctemp942= np;
struct tree* nctemp944=SemExpr(nctemp942);
struct tree* nctemp949= np;
struct tree* nctemp951=PtreeMvsister(nctemp949);
np =nctemp951;
rank = (rank + 1);
}
int nctemp952 = (np !=0);
nctemp940=nctemp952;}}
struct symbol* nctemp960= tp;
int nctemp962=SymGetrank(nctemp960);
int nctemp956 = (rank !=nctemp962);
if(nctemp956)
{
struct tree* nctemp964= p;
struct nctempchar1 *nctemp968;
static struct nctempchar1 nctemp969 = {{ 24}, (char*)"Illegal array dimension\0"};
nctemp968=&nctemp969;
nctempchar1* nctemp966= nctemp968;
struct tree* nctemp972= p;
nctempchar1* nctemp974=PtreeGetdef(nctemp972);
nctempchar1* nctemp970= nctemp974;
int nctemp975=SemSerror(nctemp964,nctemp966,nctemp970);
return 0;
}
struct tree* nctemp978= p;
int nctemp980= rank;
int nctemp982=PtreeSetrank(nctemp978,nctemp980);
return 1;
}
int SemStructure (struct tree* p,struct symbol* tp)
{
nctempchar1 *temp;
struct symbol* up;
struct symbol* uup;
struct tree* np;
struct tree* nctemp989= p;
nctempchar1* nctemp991=PtreeGetstruct(nctemp989);
nctempchar1* nctemp987= nctemp991;
struct nctempchar1 *nctemp994;
static struct nctempchar1 nctemp995 = {{ 7}, (char*)"struct\0"};
nctemp994=&nctemp995;
nctempchar1* nctemp992= nctemp994;
int nctemp996=LibeStrcmp(nctemp987,nctemp992);
int nctemp984 = (nctemp996 ==0);
if(nctemp984)
{
struct tree* nctemp999= p;
struct nctempchar1 *nctemp1003;
static struct nctempchar1 nctemp1004 = {{ 16}, (char*)"Not a structure\0"};
nctemp1003=&nctemp1004;
nctempchar1* nctemp1001= nctemp1003;
struct tree* nctemp1007= p;
nctempchar1* nctemp1009=PtreeGetdef(nctemp1007);
nctempchar1* nctemp1005= nctemp1009;
int nctemp1010=SemSerror(nctemp999,nctemp1001,nctemp1005);
return 0;
}
struct tree* nctemp1013= p;
struct nctempchar1 *nctemp1017;
static struct nctempchar1 nctemp1018 = {{ 11}, (char*)"identifier\0"};
nctemp1017=&nctemp1018;
nctempchar1* nctemp1015= nctemp1017;
int nctemp1019=PtreeSetname(nctemp1013,nctemp1015);
struct symbol* nctemp1025= tp;
nctempchar1* nctemp1027=SymGetype(nctemp1025);
temp=nctemp1027;
nctempchar1* nctemp1035= temp;
struct symbol* nctemp1038=SymLook(nctemp1035);
up =nctemp1038;
int nctemp1028 = (up ==0);
if(nctemp1028)
{
nctempchar1* nctemp1047= temp;
struct symbol* nctemp1050=SymLook(nctemp1047);
up =nctemp1050;
int nctemp1040 = (up ==0);
if(nctemp1040)
{
struct tree* nctemp1053= p;
struct nctempchar1 *nctemp1057;
static struct nctempchar1 nctemp1058 = {{ 26}, (char*)"Undeclared structure type\0"};
nctemp1057=&nctemp1058;
nctempchar1* nctemp1055= nctemp1057;
struct nctempchar1 *nctemp1061;
static struct nctempchar1 nctemp1062 = {{ 2}, (char*)" \0"};
nctemp1061=&nctemp1062;
nctempchar1* nctemp1059= nctemp1061;
int nctemp1063=SemSerror(nctemp1053,nctemp1055,nctemp1059);
return 0;
}
}
struct symbol* nctemp1068= tp;
nctempchar1* nctemp1070=SymGetstruct(nctemp1068);
nctempchar1* nctemp1066= nctemp1070;
struct nctempchar1 *nctemp1073;
static struct nctempchar1 nctemp1074 = {{ 10}, (char*)"structdef\0"};
nctemp1073=&nctemp1074;
nctempchar1* nctemp1071= nctemp1073;
int nctemp1075=LibeStrcmp(nctemp1066,nctemp1071);
if(nctemp1075)
{
struct tree* nctemp1077= p;
struct nctempchar1 *nctemp1081;
static struct nctempchar1 nctemp1082 = {{ 43}, (char*)"Struct names can not be used as a variable\0"};
nctemp1081=&nctemp1082;
nctempchar1* nctemp1079= nctemp1081;
struct tree* nctemp1085= p;
nctempchar1* nctemp1087=PtreeGetdef(nctemp1085);
nctempchar1* nctemp1083= nctemp1087;
int nctemp1088=SemSerror(nctemp1077,nctemp1079,nctemp1083);
return 0;
}
struct tree* nctemp1094= p;
struct tree* nctemp1096=PtreeMvchild(nctemp1094);
np =nctemp1096;
int nctemp1097 = (np ==0);
if(nctemp1097)
{
struct tree* nctemp1102= p;
struct nctempchar1 *nctemp1106;
static struct nctempchar1 nctemp1107 = {{ 27}, (char*)"Missing structure selector\0"};
nctemp1106=&nctemp1107;
nctempchar1* nctemp1104= nctemp1106;
struct tree* nctemp1110= p;
nctempchar1* nctemp1112=PtreeGetdef(nctemp1110);
nctempchar1* nctemp1108= nctemp1112;
int nctemp1113=SemSerror(nctemp1102,nctemp1104,nctemp1108);
return 0;
}
struct tree* nctemp1118= p;
nctempchar1* nctemp1120=PtreeGetarray(nctemp1118);
nctempchar1* nctemp1116= nctemp1120;
struct nctempchar1 *nctemp1123;
static struct nctempchar1 nctemp1124 = {{ 6}, (char*)"array\0"};
nctemp1123=&nctemp1124;
nctempchar1* nctemp1121= nctemp1123;
int nctemp1125=LibeStrcmp(nctemp1116,nctemp1121);
if(nctemp1125)
{
struct tree* nctemp1130= np;
struct tree* nctemp1132=PtreeMvsister(nctemp1130);
np =nctemp1132;
}
int nctemp1133 = (np ==0);
if(nctemp1133)
{
struct tree* nctemp1138= p;
struct nctempchar1 *nctemp1142;
static struct nctempchar1 nctemp1143 = {{ 20}, (char*)"Missing array index\0"};
nctemp1142=&nctemp1143;
nctempchar1* nctemp1140= nctemp1142;
struct tree* nctemp1146= p;
nctempchar1* nctemp1148=PtreeGetdef(nctemp1146);
nctempchar1* nctemp1144= nctemp1148;
int nctemp1149=SemSerror(nctemp1138,nctemp1140,nctemp1144);
return 0;
}
struct symbol* nctemp1155= up;
struct symbol* nctemp1157=SymGetable(nctemp1155);
uup =nctemp1157;
struct tree* nctemp1167= np;
nctempchar1* nctemp1169=PtreeGetdef(nctemp1167);
nctempchar1* nctemp1165= nctemp1169;
struct symbol* nctemp1170= uup;
struct symbol* nctemp1172=SymLookup(nctemp1165,nctemp1170);
tp =nctemp1172;
int nctemp1158 = (tp ==0);
if(nctemp1158)
{
struct tree* nctemp1175= np;
struct nctempchar1 *nctemp1179;
static struct nctempchar1 nctemp1180 = {{ 28}, (char*)"Undeclared structure member\0"};
nctemp1179=&nctemp1180;
nctempchar1* nctemp1177= nctemp1179;
struct tree* nctemp1183= np;
nctempchar1* nctemp1185=PtreeGetdef(nctemp1183);
nctempchar1* nctemp1181= nctemp1185;
int nctemp1186=SemSerror(nctemp1175,nctemp1177,nctemp1181);
return 0;
}
struct symbol* nctemp1191= tp;
nctempchar1* nctemp1193=SymGetarray(nctemp1191);
nctempchar1* nctemp1189= nctemp1193;
struct nctempchar1 *nctemp1196;
static struct nctempchar1 nctemp1197 = {{ 6}, (char*)"array\0"};
nctemp1196=&nctemp1197;
nctempchar1* nctemp1194= nctemp1196;
int nctemp1198=LibeStrcmp(nctemp1189,nctemp1194);
if(nctemp1198)
{
struct tree* nctemp1202= np;
struct tree* nctemp1204=PtreeMvchild(nctemp1202);
int nctemp1199 = (nctemp1204 !=0);
if(nctemp1199)
{
struct tree* nctemp1207= np;
struct symbol* nctemp1209= tp;
int nctemp1211=SemArray(nctemp1207,nctemp1209);
struct symbol* nctemp1215= tp;
nctempchar1* nctemp1217=SymGetstruct(nctemp1215);
nctempchar1* nctemp1213= nctemp1217;
struct nctempchar1 *nctemp1220;
static struct nctempchar1 nctemp1221 = {{ 7}, (char*)"struct\0"};
nctemp1220=&nctemp1221;
nctempchar1* nctemp1218= nctemp1220;
int nctemp1222=LibeStrcmp(nctemp1213,nctemp1218);
if(nctemp1222)
{
struct tree* nctemp1224= np;
struct nctempchar1 *nctemp1228;
static struct nctempchar1 nctemp1229 = {{ 5}, (char*)"sref\0"};
nctemp1228=&nctemp1229;
nctempchar1* nctemp1226= nctemp1228;
int nctemp1230=PtreeSetref(nctemp1224,nctemp1226);
}
}
else{
struct tree* nctemp1232= np;
struct nctempchar1 *nctemp1236;
static struct nctempchar1 nctemp1237 = {{ 5}, (char*)"aref\0"};
nctemp1236=&nctemp1237;
nctempchar1* nctemp1234= nctemp1236;
int nctemp1238=PtreeSetref(nctemp1232,nctemp1234);
}
}
else{
struct symbol* nctemp1242= tp;
nctempchar1* nctemp1244=SymGetstruct(nctemp1242);
nctempchar1* nctemp1240= nctemp1244;
struct nctempchar1 *nctemp1247;
static struct nctempchar1 nctemp1248 = {{ 7}, (char*)"struct\0"};
nctemp1247=&nctemp1248;
nctempchar1* nctemp1245= nctemp1247;
int nctemp1249=LibeStrcmp(nctemp1240,nctemp1245);
if(nctemp1249)
{
struct tree* nctemp1251= np;
struct nctempchar1 *nctemp1255;
static struct nctempchar1 nctemp1256 = {{ 5}, (char*)"sref\0"};
nctemp1255=&nctemp1256;
nctempchar1* nctemp1253= nctemp1255;
int nctemp1257=PtreeSetref(nctemp1251,nctemp1253);
}
}
struct tree* nctemp1259= np;
struct symbol* nctemp1263= tp;
nctempchar1* nctemp1265=SymGetype(nctemp1263);
nctempchar1* nctemp1261= nctemp1265;
int nctemp1266=PtreeSetype(nctemp1259,nctemp1261);
struct tree* nctemp1268= np;
struct symbol* nctemp1272= tp;
nctempchar1* nctemp1274=SymGetarray(nctemp1272);
nctempchar1* nctemp1270= nctemp1274;
int nctemp1275=PtreeSetarray(nctemp1268,nctemp1270);
struct tree* nctemp1277= np;
struct symbol* nctemp1281= tp;
int nctemp1283=SymGetrank(nctemp1281);
int nctemp1279= nctemp1283;
int nctemp1284=PtreeSetrank(nctemp1277,nctemp1279);
struct tree* nctemp1286= np;
struct symbol* nctemp1290= tp;
nctempchar1* nctemp1292=SymGetlval(nctemp1290);
nctempchar1* nctemp1288= nctemp1292;
int nctemp1293=PtreeSetlval(nctemp1286,nctemp1288);
struct tree* nctemp1295= p;
struct symbol* nctemp1299= tp;
nctempchar1* nctemp1301=SymGetype(nctemp1299);
nctempchar1* nctemp1297= nctemp1301;
int nctemp1302=PtreeSetype(nctemp1295,nctemp1297);
struct tree* nctemp1304= p;
struct tree* nctemp1308= np;
nctempchar1* nctemp1310=PtreeGetref(nctemp1308);
nctempchar1* nctemp1306= nctemp1310;
int nctemp1311=PtreeSetref(nctemp1304,nctemp1306);
struct tree* nctemp1313= p;
struct symbol* nctemp1317= tp;
int nctemp1319=SymGetrank(nctemp1317);
int nctemp1315= nctemp1319;
int nctemp1320=PtreeSetrank(nctemp1313,nctemp1315);
return 1;
}
int SemId (struct tree* p)
{
struct symbol* tp;
struct tree* np;
struct tree* nctemp1331= p;
nctempchar1* nctemp1333=PtreeGetdef(nctemp1331);
nctempchar1* nctemp1329= nctemp1333;
struct symbol* nctemp1334=SymLook(nctemp1329);
tp =nctemp1334;
int nctemp1322 = (tp ==0);
if(nctemp1322)
{
struct tree* nctemp1337= p;
struct nctempchar1 *nctemp1341;
static struct nctempchar1 nctemp1342 = {{ 22}, (char*)"Undeclared identifier\0"};
nctemp1341=&nctemp1342;
nctempchar1* nctemp1339= nctemp1341;
struct tree* nctemp1345= p;
nctempchar1* nctemp1347=PtreeGetdef(nctemp1345);
nctempchar1* nctemp1343= nctemp1347;
int nctemp1348=SemSerror(nctemp1337,nctemp1339,nctemp1343);
}
struct symbol* nctemp1354= tp;
nctempchar1* nctemp1356=SymGetype(nctemp1354);
nctempchar1* nctemp1352= nctemp1356;
struct nctempchar1 *nctemp1359;
static struct nctempchar1 nctemp1360 = {{ 10}, (char*)"iconstant\0"};
nctemp1359=&nctemp1360;
nctempchar1* nctemp1357= nctemp1359;
int nctemp1361=LibeStrcmp(nctemp1352,nctemp1357);
int nctemp1349 = (nctemp1361 ==1);
if(nctemp1349)
{
struct tree* nctemp1364= p;
struct symbol* nctemp1368= tp;
nctempchar1* nctemp1370=SymGetype(nctemp1368);
nctempchar1* nctemp1366= nctemp1370;
int nctemp1371=PtreeSetname(nctemp1364,nctemp1366);
struct tree* nctemp1373= p;
struct symbol* nctemp1377= tp;
nctempchar1* nctemp1379=SymGetdescr(nctemp1377);
nctempchar1* nctemp1375= nctemp1379;
int nctemp1380=PtreeSetdef(nctemp1373,nctemp1375);
struct tree* nctemp1382= p;
struct nctempchar1 *nctemp1386;
static struct nctempchar1 nctemp1387 = {{ 4}, (char*)"int\0"};
nctemp1386=&nctemp1387;
nctempchar1* nctemp1384= nctemp1386;
int nctemp1388=PtreeSetype(nctemp1382,nctemp1384);
return 1;
}
else{
struct symbol* nctemp1395= tp;
nctempchar1* nctemp1397=SymGetype(nctemp1395);
nctempchar1* nctemp1393= nctemp1397;
struct nctempchar1 *nctemp1400;
static struct nctempchar1 nctemp1401 = {{ 10}, (char*)"rconstant\0"};
nctemp1400=&nctemp1401;
nctempchar1* nctemp1398= nctemp1400;
int nctemp1402=LibeStrcmp(nctemp1393,nctemp1398);
int nctemp1390 = (nctemp1402 ==1);
if(nctemp1390)
{
struct tree* nctemp1405= p;
struct symbol* nctemp1409= tp;
nctempchar1* nctemp1411=SymGetype(nctemp1409);
nctempchar1* nctemp1407= nctemp1411;
int nctemp1412=PtreeSetname(nctemp1405,nctemp1407);
struct tree* nctemp1414= p;
struct symbol* nctemp1418= tp;
nctempchar1* nctemp1420=SymGetdescr(nctemp1418);
nctempchar1* nctemp1416= nctemp1420;
int nctemp1421=PtreeSetdef(nctemp1414,nctemp1416);
struct tree* nctemp1423= p;
struct nctempchar1 *nctemp1427;
static struct nctempchar1 nctemp1428 = {{ 6}, (char*)"float\0"};
nctemp1427=&nctemp1428;
nctempchar1* nctemp1425= nctemp1427;
int nctemp1429=PtreeSetype(nctemp1423,nctemp1425);
return 1;
}
else{
struct symbol* nctemp1436= tp;
nctempchar1* nctemp1438=SymGetype(nctemp1436);
nctempchar1* nctemp1434= nctemp1438;
struct nctempchar1 *nctemp1441;
static struct nctempchar1 nctemp1442 = {{ 10}, (char*)"sconstant\0"};
nctemp1441=&nctemp1442;
nctempchar1* nctemp1439= nctemp1441;
int nctemp1443=LibeStrcmp(nctemp1434,nctemp1439);
int nctemp1431 = (nctemp1443 ==1);
if(nctemp1431)
{
struct tree* nctemp1446= p;
struct symbol* nctemp1450= tp;
nctempchar1* nctemp1452=SymGetype(nctemp1450);
nctempchar1* nctemp1448= nctemp1452;
int nctemp1453=PtreeSetname(nctemp1446,nctemp1448);
struct tree* nctemp1455= p;
struct symbol* nctemp1459= tp;
nctempchar1* nctemp1461=SymGetdescr(nctemp1459);
nctempchar1* nctemp1457= nctemp1461;
int nctemp1462=PtreeSetdef(nctemp1455,nctemp1457);
struct tree* nctemp1464= p;
struct nctempchar1 *nctemp1468;
static struct nctempchar1 nctemp1469 = {{ 5}, (char*)"char\0"};
nctemp1468=&nctemp1469;
nctempchar1* nctemp1466= nctemp1468;
int nctemp1470=PtreeSetype(nctemp1464,nctemp1466);
struct tree* nctemp1472= p;
struct nctempchar1 *nctemp1476;
static struct nctempchar1 nctemp1477 = {{ 6}, (char*)"array\0"};
nctemp1476=&nctemp1477;
nctempchar1* nctemp1474= nctemp1476;
int nctemp1478=PtreeSetarray(nctemp1472,nctemp1474);
struct tree* nctemp1480= p;
struct nctempchar1 *nctemp1484;
static struct nctempchar1 nctemp1485 = {{ 5}, (char*)"aref\0"};
nctemp1484=&nctemp1485;
nctempchar1* nctemp1482= nctemp1484;
int nctemp1486=PtreeSetref(nctemp1480,nctemp1482);
struct tree* nctemp1488= p;
int nctemp1490= 1;
int nctemp1492=PtreeSetrank(nctemp1488,nctemp1490);
return 1;
}
}
}
struct symbol* nctemp1497= tp;
nctempchar1* nctemp1499=SymGetstruct(nctemp1497);
nctempchar1* nctemp1495= nctemp1499;
struct nctempchar1 *nctemp1502;
static struct nctempchar1 nctemp1503 = {{ 10}, (char*)"structdef\0"};
nctemp1502=&nctemp1503;
nctempchar1* nctemp1500= nctemp1502;
int nctemp1504=LibeStrcmp(nctemp1495,nctemp1500);
if(nctemp1504)
{
struct tree* nctemp1506= p;
struct nctempchar1 *nctemp1510;
static struct nctempchar1 nctemp1511 = {{ 43}, (char*)"Struct names can not be used as a variable\0"};
nctemp1510=&nctemp1511;
nctempchar1* nctemp1508= nctemp1510;
struct tree* nctemp1514= p;
nctempchar1* nctemp1516=PtreeGetdef(nctemp1514);
nctempchar1* nctemp1512= nctemp1516;
int nctemp1517=SemSerror(nctemp1506,nctemp1508,nctemp1512);
}
struct tree* nctemp1519= p;
struct symbol* nctemp1523= tp;
nctempchar1* nctemp1525=SymGetype(nctemp1523);
nctempchar1* nctemp1521= nctemp1525;
int nctemp1526=PtreeSetype(nctemp1519,nctemp1521);
struct tree* nctemp1528= p;
struct symbol* nctemp1532= tp;
nctempchar1* nctemp1534=SymGetarray(nctemp1532);
nctempchar1* nctemp1530= nctemp1534;
int nctemp1535=PtreeSetarray(nctemp1528,nctemp1530);
struct tree* nctemp1537= p;
struct symbol* nctemp1541= tp;
int nctemp1543=SymGetrank(nctemp1541);
int nctemp1539= nctemp1543;
int nctemp1544=PtreeSetrank(nctemp1537,nctemp1539);
struct tree* nctemp1546= p;
struct symbol* nctemp1550= tp;
nctempchar1* nctemp1552=SymGetstruct(nctemp1550);
nctempchar1* nctemp1548= nctemp1552;
int nctemp1553=PtreeSetstruct(nctemp1546,nctemp1548);
struct tree* nctemp1555= p;
struct symbol* nctemp1559= tp;
nctempchar1* nctemp1561=SymGetlval(nctemp1559);
nctempchar1* nctemp1557= nctemp1561;
int nctemp1562=PtreeSetlval(nctemp1555,nctemp1557);
struct tree* nctemp1567= p;
struct tree* nctemp1569=PtreeMvchild(nctemp1567);
np =nctemp1569;
int nctemp1570 = (np !=0);
if(nctemp1570)
{
struct tree* nctemp1577= np;
nctempchar1* nctemp1579=PtreeGetname(nctemp1577);
nctempchar1* nctemp1575= nctemp1579;
struct nctempchar1 *nctemp1582;
static struct nctempchar1 nctemp1583 = {{ 9}, (char*)"exprlist\0"};
nctemp1582=&nctemp1583;
nctempchar1* nctemp1580= nctemp1582;
int nctemp1584=LibeStrcmp(nctemp1575,nctemp1580);
if(nctemp1584)
{
struct tree* nctemp1586= p;
struct symbol* nctemp1588= tp;
int nctemp1590=SemArray(nctemp1586,nctemp1588);
struct tree* nctemp1594= np;
struct tree* nctemp1596=PtreeMvsister(nctemp1594);
int nctemp1591 = (nctemp1596 !=0);
if(nctemp1591)
{
struct tree* nctemp1599= p;
struct symbol* nctemp1601= tp;
int nctemp1603=SemStructure(nctemp1599,nctemp1601);
}
else{
struct tree* nctemp1607= p;
nctempchar1* nctemp1609=PtreeGetstruct(nctemp1607);
nctempchar1* nctemp1605= nctemp1609;
struct nctempchar1 *nctemp1612;
static struct nctempchar1 nctemp1613 = {{ 7}, (char*)"struct\0"};
nctemp1612=&nctemp1613;
nctempchar1* nctemp1610= nctemp1612;
int nctemp1614=LibeStrcmp(nctemp1605,nctemp1610);
if(nctemp1614)
{
struct tree* nctemp1616= p;
struct nctempchar1 *nctemp1620;
static struct nctempchar1 nctemp1621 = {{ 5}, (char*)"sref\0"};
nctemp1620=&nctemp1621;
nctempchar1* nctemp1618= nctemp1620;
int nctemp1622=PtreeSetref(nctemp1616,nctemp1618);
}
}
}
else{
struct tree* nctemp1626= np;
nctempchar1* nctemp1628=PtreeGetname(nctemp1626);
nctempchar1* nctemp1624= nctemp1628;
struct nctempchar1 *nctemp1631;
static struct nctempchar1 nctemp1632 = {{ 9}, (char*)"selector\0"};
nctemp1631=&nctemp1632;
nctempchar1* nctemp1629= nctemp1631;
int nctemp1633=LibeStrcmp(nctemp1624,nctemp1629);
if(nctemp1633)
{
struct tree* nctemp1635= p;
struct symbol* nctemp1637= tp;
int nctemp1639=SemStructure(nctemp1635,nctemp1637);
}
}
}
else{
struct tree* nctemp1643= p;
nctempchar1* nctemp1645=PtreeGetarray(nctemp1643);
nctempchar1* nctemp1641= nctemp1645;
struct nctempchar1 *nctemp1648;
static struct nctempchar1 nctemp1649 = {{ 6}, (char*)"array\0"};
nctemp1648=&nctemp1649;
nctempchar1* nctemp1646= nctemp1648;
int nctemp1650=LibeStrcmp(nctemp1641,nctemp1646);
if(nctemp1650)
{
struct tree* nctemp1652= p;
struct nctempchar1 *nctemp1656;
static struct nctempchar1 nctemp1657 = {{ 5}, (char*)"aref\0"};
nctemp1656=&nctemp1657;
nctempchar1* nctemp1654= nctemp1656;
int nctemp1658=PtreeSetref(nctemp1652,nctemp1654);
}
else{
struct tree* nctemp1662= p;
nctempchar1* nctemp1664=PtreeGetstruct(nctemp1662);
nctempchar1* nctemp1660= nctemp1664;
struct nctempchar1 *nctemp1667;
static struct nctempchar1 nctemp1668 = {{ 7}, (char*)"struct\0"};
nctemp1667=&nctemp1668;
nctempchar1* nctemp1665= nctemp1667;
int nctemp1669=LibeStrcmp(nctemp1660,nctemp1665);
if(nctemp1669)
{
struct tree* nctemp1671= p;
struct nctempchar1 *nctemp1675;
static struct nctempchar1 nctemp1676 = {{ 5}, (char*)"sref\0"};
nctemp1675=&nctemp1676;
nctempchar1* nctemp1673= nctemp1675;
int nctemp1677=PtreeSetref(nctemp1671,nctemp1673);
}
}
}
return 1;
}
int SemFcall (struct tree* p)
{
struct tree* np;
struct symbol* tp;
nctempchar1 *type;
struct tree* nctemp1682= p;
nctempchar1* nctemp1684=PtreeGetname(nctemp1682);
nctempchar1* nctemp1680= nctemp1684;
struct nctempchar1 *nctemp1687;
static struct nctempchar1 nctemp1688 = {{ 6}, (char*)"fcall\0"};
nctemp1687=&nctemp1688;
nctempchar1* nctemp1685= nctemp1687;
int nctemp1689=LibeStrcmp(nctemp1680,nctemp1685);
if(nctemp1689)
{
struct tree* nctemp1699= p;
nctempchar1* nctemp1701=PtreeGetdef(nctemp1699);
nctempchar1* nctemp1697= nctemp1701;
struct symbol* nctemp1704=SymGetetp();
struct symbol* nctemp1702= nctemp1704;
struct symbol* nctemp1705=SymLookup(nctemp1697,nctemp1702);
tp =nctemp1705;
int nctemp1690 = (tp ==0);
if(nctemp1690)
{
struct tree* nctemp1708= p;
struct nctempchar1 *nctemp1712;
static struct nctempchar1 nctemp1713 = {{ 20}, (char*)"Undeclared function\0"};
nctemp1712=&nctemp1713;
nctempchar1* nctemp1710= nctemp1712;
struct tree* nctemp1716= p;
nctempchar1* nctemp1718=PtreeGetdef(nctemp1716);
nctempchar1* nctemp1714= nctemp1718;
int nctemp1719=SemSerror(nctemp1708,nctemp1710,nctemp1714);
return 0;
}
struct symbol* nctemp1726= tp;
nctempchar1* nctemp1728=SymGetfunc(nctemp1726);
nctempchar1* nctemp1724= nctemp1728;
struct nctempchar1 *nctemp1731;
static struct nctempchar1 nctemp1732 = {{ 5}, (char*)"fdef\0"};
nctemp1731=&nctemp1732;
nctempchar1* nctemp1729= nctemp1731;
int nctemp1733=LibeStrcmp(nctemp1724,nctemp1729);
int nctemp1721 = (nctemp1733 ==0);
if(nctemp1721)
{
struct tree* nctemp1736= p;
struct nctempchar1 *nctemp1740;
static struct nctempchar1 nctemp1741 = {{ 15}, (char*)"Not a function\0"};
nctemp1740=&nctemp1741;
nctempchar1* nctemp1738= nctemp1740;
struct tree* nctemp1744= p;
nctempchar1* nctemp1746=PtreeGetdef(nctemp1744);
nctempchar1* nctemp1742= nctemp1746;
int nctemp1747=SemSerror(nctemp1736,nctemp1738,nctemp1742);
return 0;
}
struct tree* nctemp1750= p;
struct symbol* nctemp1754= tp;
nctempchar1* nctemp1756=SymGetype(nctemp1754);
nctempchar1* nctemp1752= nctemp1756;
int nctemp1757=PtreeSetype(nctemp1750,nctemp1752);
struct tree* nctemp1759= p;
struct symbol* nctemp1763= tp;
nctempchar1* nctemp1765=SymGetstruct(nctemp1763);
nctempchar1* nctemp1761= nctemp1765;
int nctemp1766=PtreeSetstruct(nctemp1759,nctemp1761);
struct tree* nctemp1768= p;
struct symbol* nctemp1772= tp;
nctempchar1* nctemp1774=SymGetarray(nctemp1772);
nctempchar1* nctemp1770= nctemp1774;
int nctemp1775=PtreeSetarray(nctemp1768,nctemp1770);
struct tree* nctemp1777= p;
struct symbol* nctemp1781= tp;
int nctemp1783=SymGetrank(nctemp1781);
int nctemp1779= nctemp1783;
int nctemp1784=PtreeSetrank(nctemp1777,nctemp1779);
struct tree* nctemp1788= p;
nctempchar1* nctemp1790=PtreeGetarray(nctemp1788);
nctempchar1* nctemp1786= nctemp1790;
struct nctempchar1 *nctemp1793;
static struct nctempchar1 nctemp1794 = {{ 6}, (char*)"array\0"};
nctemp1793=&nctemp1794;
nctempchar1* nctemp1791= nctemp1793;
int nctemp1795=LibeStrcmp(nctemp1786,nctemp1791);
if(nctemp1795)
{
struct tree* nctemp1797= p;
struct nctempchar1 *nctemp1801;
static struct nctempchar1 nctemp1802 = {{ 5}, (char*)"aref\0"};
nctemp1801=&nctemp1802;
nctempchar1* nctemp1799= nctemp1801;
int nctemp1803=PtreeSetref(nctemp1797,nctemp1799);
}
else{
struct tree* nctemp1807= p;
nctempchar1* nctemp1809=PtreeGetstruct(nctemp1807);
nctempchar1* nctemp1805= nctemp1809;
struct nctempchar1 *nctemp1812;
static struct nctempchar1 nctemp1813 = {{ 7}, (char*)"struct\0"};
nctemp1812=&nctemp1813;
nctempchar1* nctemp1810= nctemp1812;
int nctemp1814=LibeStrcmp(nctemp1805,nctemp1810);
if(nctemp1814)
{
struct tree* nctemp1816= p;
struct nctempchar1 *nctemp1820;
static struct nctempchar1 nctemp1821 = {{ 5}, (char*)"sref\0"};
nctemp1820=&nctemp1821;
nctempchar1* nctemp1818= nctemp1820;
int nctemp1822=PtreeSetref(nctemp1816,nctemp1818);
}
}
struct symbol* nctemp1827= tp;
struct symbol* nctemp1829=SymGetable(nctemp1827);
tp =nctemp1829;
struct nctempchar1 *nctemp1836;
static struct nctempchar1 nctemp1837 = {{ 9}, (char*)"#arglist\0"};
nctemp1836=&nctemp1837;
nctempchar1* nctemp1834= nctemp1836;
struct symbol* nctemp1838= tp;
struct symbol* nctemp1840=SymLookup(nctemp1834,nctemp1838);
tp =nctemp1840;
int nctemp1841 = (tp !=0);
if(nctemp1841)
{
struct symbol* nctemp1849= tp;
struct symbol* nctemp1851=SymGetable(nctemp1849);
tp =nctemp1851;
}
struct tree* nctemp1859= p;
struct tree* nctemp1861=PtreeMvchild(nctemp1859);
np =nctemp1861;
int nctemp1852 = (np ==0);
if(nctemp1852)
{
struct symbol* nctemp1870= tp;
struct symbol* nctemp1872=SymMvnext(nctemp1870);
tp =nctemp1872;
int nctemp1863 = (tp !=0);
if(nctemp1863)
{
struct tree* nctemp1875= p;
struct nctempchar1 *nctemp1879;
static struct nctempchar1 nctemp1880 = {{ 41}, (char*)"Function call does not match declaration\0"};
nctemp1879=&nctemp1880;
nctempchar1* nctemp1877= nctemp1879;
struct tree* nctemp1883= p;
nctempchar1* nctemp1885=PtreeGetdef(nctemp1883);
nctempchar1* nctemp1881= nctemp1885;
int nctemp1886=SemSerror(nctemp1875,nctemp1877,nctemp1881);
return 0;
}
return 1;
}
struct tree* nctemp1895= p;
struct tree* nctemp1897=PtreeMvchild(nctemp1895);
struct tree* nctemp1893= nctemp1897;
struct tree* nctemp1898=PtreeMvchild(nctemp1893);
np =nctemp1898;
int nctemp1899 = (np !=0);
int nctemp1903=nctemp1899;
while(nctemp1903)
{{
struct symbol* nctemp1908= tp;
struct symbol* nctemp1910=SymMvnext(nctemp1908);
tp =nctemp1910;
int nctemp1911 = (tp ==0);
if(nctemp1911)
{
struct tree* nctemp1916= p;
struct nctempchar1 *nctemp1920;
static struct nctempchar1 nctemp1921 = {{ 41}, (char*)"Function call does not match declaration\0"};
nctemp1920=&nctemp1921;
nctempchar1* nctemp1918= nctemp1920;
struct tree* nctemp1924= p;
nctempchar1* nctemp1926=PtreeGetdef(nctemp1924);
nctempchar1* nctemp1922= nctemp1926;
int nctemp1927=SemSerror(nctemp1916,nctemp1918,nctemp1922);
return 0;
}
struct symbol* nctemp1934= tp;
nctempchar1* nctemp1936=SymGetype(nctemp1934);
type=nctemp1936;
struct tree* nctemp1938= np;
struct tree* nctemp1940=SemExpr(nctemp1938);
nctempchar1* nctemp1944= type;
struct tree* nctemp1949= np;
nctempchar1* nctemp1951=PtreeGetype(nctemp1949);
nctempchar1* nctemp1947= nctemp1951;
int nctemp1952=LibeStrcmp(nctemp1944,nctemp1947);
int nctemp1941 = (nctemp1952 ==0);
if(nctemp1941)
{
struct tree* nctemp1955= p;
struct nctempchar1 *nctemp1959;
static struct nctempchar1 nctemp1960 = {{ 41}, (char*)"Function call does not match declaration\0"};
nctemp1959=&nctemp1960;
nctempchar1* nctemp1957= nctemp1959;
struct tree* nctemp1963= p;
nctempchar1* nctemp1965=PtreeGetdef(nctemp1963);
nctempchar1* nctemp1961= nctemp1965;
int nctemp1966=SemSerror(nctemp1955,nctemp1957,nctemp1961);
return 0;
}
struct symbol* nctemp1971= tp;
nctempchar1* nctemp1973=SymGetarray(nctemp1971);
nctempchar1* nctemp1969= nctemp1973;
struct nctempchar1 *nctemp1976;
static struct nctempchar1 nctemp1977 = {{ 6}, (char*)"array\0"};
nctemp1976=&nctemp1977;
nctempchar1* nctemp1974= nctemp1976;
int nctemp1978=LibeStrcmp(nctemp1969,nctemp1974);
if(nctemp1978)
{
struct tree* nctemp1984= np;
nctempchar1* nctemp1986=PtreeGetref(nctemp1984);
nctempchar1* nctemp1982= nctemp1986;
struct nctempchar1 *nctemp1989;
static struct nctempchar1 nctemp1990 = {{ 5}, (char*)"aref\0"};
nctemp1989=&nctemp1990;
nctempchar1* nctemp1987= nctemp1989;
int nctemp1991=LibeStrcmp(nctemp1982,nctemp1987);
int nctemp1979 = (nctemp1991 ==0);
if(nctemp1979)
{
struct tree* nctemp1994= p;
struct nctempchar1 *nctemp1998;
static struct nctempchar1 nctemp1999 = {{ 41}, (char*)"Function call does not match declaration\0"};
nctemp1998=&nctemp1999;
nctempchar1* nctemp1996= nctemp1998;
struct tree* nctemp2002= p;
nctempchar1* nctemp2004=PtreeGetdef(nctemp2002);
nctempchar1* nctemp2000= nctemp2004;
int nctemp2005=SemSerror(nctemp1994,nctemp1996,nctemp2000);
}
struct tree* nctemp2009= np;
int nctemp2011=PtreeGetrank(nctemp2009);
struct symbol* nctemp2013= tp;
int nctemp2015=SymGetrank(nctemp2013);
int nctemp2006 = (nctemp2011 !=nctemp2015);
if(nctemp2006)
{
struct tree* nctemp2017= p;
struct nctempchar1 *nctemp2021;
static struct nctempchar1 nctemp2022 = {{ 36}, (char*)"Illegal array rank in function call\0"};
nctemp2021=&nctemp2022;
nctempchar1* nctemp2019= nctemp2021;
struct tree* nctemp2025= p;
nctempchar1* nctemp2027=PtreeGetdef(nctemp2025);
nctempchar1* nctemp2023= nctemp2027;
int nctemp2028=SemSerror(nctemp2017,nctemp2019,nctemp2023);
}
}
struct tree* nctemp2033= np;
struct tree* nctemp2035=PtreeMvsister(nctemp2033);
np =nctemp2035;
}
int nctemp2036 = (np !=0);
nctemp1903=nctemp2036;}struct symbol* nctemp2043= tp;
struct symbol* nctemp2045=SymMvnext(nctemp2043);
int nctemp2040 = (nctemp2045 !=0);
if(nctemp2040)
{
struct tree* nctemp2048= p;
struct nctempchar1 *nctemp2052;
static struct nctempchar1 nctemp2053 = {{ 41}, (char*)"Function call does not match declaration\0"};
nctemp2052=&nctemp2053;
nctempchar1* nctemp2050= nctemp2052;
struct tree* nctemp2056= p;
nctempchar1* nctemp2058=PtreeGetdef(nctemp2056);
nctempchar1* nctemp2054= nctemp2058;
int nctemp2059=SemSerror(nctemp2048,nctemp2050,nctemp2054);
return 0;
}
}
return 1;
}
struct tree* SemExprlist (struct tree* p)
{
struct tree* nctemp2065= p;
nctempchar1* nctemp2067=PtreeGetname(nctemp2065);
nctempchar1* nctemp2063= nctemp2067;
struct nctempchar1 *nctemp2070;
static struct nctempchar1 nctemp2071 = {{ 9}, (char*)"exprlist\0"};
nctemp2070=&nctemp2071;
nctempchar1* nctemp2068= nctemp2070;
int nctemp2072=LibeStrcmp(nctemp2063,nctemp2068);
if(nctemp2072)
{
struct tree* nctemp2077= p;
struct tree* nctemp2079=PtreeMvchild(nctemp2077);
p =nctemp2079;
int nctemp2080 = (p !=0);
int nctemp2084=nctemp2080;
while(nctemp2084)
{{
struct tree* nctemp2086= p;
struct tree* nctemp2088=SemExpr(nctemp2086);
struct tree* nctemp2093= p;
struct tree* nctemp2095=PtreeMvsister(nctemp2093);
p =nctemp2095;
}
int nctemp2096 = (p !=0);
nctemp2084=nctemp2096;}}
return p;
}
int SemCopytype (struct tree* p,struct tree* np)
{
struct tree* nctemp2102= np;
struct tree* nctemp2106= p;
nctempchar1* nctemp2108=PtreeGetype(nctemp2106);
nctempchar1* nctemp2104= nctemp2108;
int nctemp2109=PtreeSetype(nctemp2102,nctemp2104);
struct tree* nctemp2111= np;
struct tree* nctemp2115= p;
nctempchar1* nctemp2117=PtreeGetstruct(nctemp2115);
nctempchar1* nctemp2113= nctemp2117;
int nctemp2118=PtreeSetstruct(nctemp2111,nctemp2113);
struct tree* nctemp2120= np;
struct tree* nctemp2124= p;
nctempchar1* nctemp2126=PtreeGetarray(nctemp2124);
nctempchar1* nctemp2122= nctemp2126;
int nctemp2127=PtreeSetarray(nctemp2120,nctemp2122);
struct tree* nctemp2129= np;
struct tree* nctemp2133= p;
nctempchar1* nctemp2135=PtreeGetref(nctemp2133);
nctempchar1* nctemp2131= nctemp2135;
int nctemp2136=PtreeSetref(nctemp2129,nctemp2131);
struct tree* nctemp2138= np;
struct tree* nctemp2142= p;
nctempchar1* nctemp2144=PtreeGetlval(nctemp2142);
nctempchar1* nctemp2140= nctemp2144;
int nctemp2145=PtreeSetlval(nctemp2138,nctemp2140);
struct tree* nctemp2147= np;
struct tree* nctemp2151= p;
int nctemp2153=PtreeGetrank(nctemp2151);
int nctemp2149= nctemp2153;
int nctemp2154=PtreeSetrank(nctemp2147,nctemp2149);
return 1;
}
int SemCopytype2 (struct tree* p,struct tree* np)
{
struct tree* nctemp2157= np;
struct tree* nctemp2161= p;
nctempchar1* nctemp2163=PtreeGetype(nctemp2161);
nctempchar1* nctemp2159= nctemp2163;
int nctemp2164=PtreeSetype(nctemp2157,nctemp2159);
struct tree* nctemp2173= p;
nctempchar1* nctemp2175=PtreeGetref(nctemp2173);
nctempchar1* nctemp2171= nctemp2175;
struct nctempchar1 *nctemp2178;
static struct nctempchar1 nctemp2179 = {{ 5}, (char*)"sref\0"};
nctemp2178=&nctemp2179;
nctempchar1* nctemp2176= nctemp2178;
int nctemp2180=LibeStrcmp(nctemp2171,nctemp2176);
int nctemp2168 = (nctemp2180 ==1);
struct tree* nctemp2188= p;
nctempchar1* nctemp2190=PtreeGetref(nctemp2188);
nctempchar1* nctemp2186= nctemp2190;
struct nctempchar1 *nctemp2193;
static struct nctempchar1 nctemp2194 = {{ 5}, (char*)"aref\0"};
nctemp2193=&nctemp2194;
nctempchar1* nctemp2191= nctemp2193;
int nctemp2195=LibeStrcmp(nctemp2186,nctemp2191);
int nctemp2183 = (nctemp2195 ==1);
int nctemp2165 = (nctemp2168 || nctemp2183);
if(nctemp2165)
{
struct tree* nctemp2198= np;
struct tree* nctemp2202= p;
nctempchar1* nctemp2204=PtreeGetstruct(nctemp2202);
nctempchar1* nctemp2200= nctemp2204;
int nctemp2205=PtreeSetstruct(nctemp2198,nctemp2200);
struct tree* nctemp2207= np;
struct tree* nctemp2211= p;
nctempchar1* nctemp2213=PtreeGetarray(nctemp2211);
nctempchar1* nctemp2209= nctemp2213;
int nctemp2214=PtreeSetarray(nctemp2207,nctemp2209);
struct tree* nctemp2216= np;
struct tree* nctemp2220= p;
nctempchar1* nctemp2222=PtreeGetref(nctemp2220);
nctempchar1* nctemp2218= nctemp2222;
int nctemp2223=PtreeSetref(nctemp2216,nctemp2218);
struct tree* nctemp2225= np;
struct tree* nctemp2229= p;
nctempchar1* nctemp2231=PtreeGetlval(nctemp2229);
nctempchar1* nctemp2227= nctemp2231;
int nctemp2232=PtreeSetlval(nctemp2225,nctemp2227);
struct tree* nctemp2234= np;
struct tree* nctemp2238= p;
int nctemp2240=PtreeGetrank(nctemp2238);
int nctemp2236= nctemp2240;
int nctemp2241=PtreeSetrank(nctemp2234,nctemp2236);
}
return 1;
}
int SemCast (struct tree* p)
{
struct tree* sp;
struct tree* np;
int resultrank;
nctempchar1 *resultype;
nctempchar1 *exptype;
nctempchar1 *resultref;
nctempchar1 *expref;
struct nctempchar1 *nctemp2248;
static struct nctempchar1 nctemp2249 = {{ 5}, (char*)"void\0"};
nctemp2248=&nctemp2249;
resultref=nctemp2248;
struct nctempchar1 *nctemp2255;
static struct nctempchar1 nctemp2256 = {{ 5}, (char*)"void\0"};
nctemp2255=&nctemp2256;
expref=nctemp2255;
struct tree* nctemp2260= p;
nctempchar1* nctemp2262=PtreeGetname(nctemp2260);
nctempchar1* nctemp2258= nctemp2262;
struct nctempchar1 *nctemp2265;
static struct nctempchar1 nctemp2266 = {{ 5}, (char*)"cast\0"};
nctemp2265=&nctemp2266;
nctempchar1* nctemp2263= nctemp2265;
int nctemp2267=LibeStrcmp(nctemp2258,nctemp2263);
if(nctemp2267)
{
struct tree* nctemp2272= p;
struct tree* nctemp2274=PtreeMvchild(nctemp2272);
np =nctemp2274;
struct tree* nctemp2280= np;
nctempchar1* nctemp2282=PtreeGetdef(nctemp2280);
resultype=nctemp2282;
struct tree* nctemp2284= np;
nctempchar1* nctemp2286= resultype;
int nctemp2289=PtreeSetype(nctemp2284,nctemp2286);
resultrank = 0;
struct tree* nctemp2293= np;
nctempchar1* nctemp2295=PtreeGetarray(nctemp2293);
nctempchar1* nctemp2291= nctemp2295;
struct nctempchar1 *nctemp2298;
static struct nctempchar1 nctemp2299 = {{ 6}, (char*)"array\0"};
nctemp2298=&nctemp2299;
nctempchar1* nctemp2296= nctemp2298;
int nctemp2300=LibeStrcmp(nctemp2291,nctemp2296);
if(nctemp2300)
{
struct tree* nctemp2305= np;
struct tree* nctemp2307=PtreeMvchild(nctemp2305);
sp =nctemp2307;
struct tree* nctemp2312= sp;
struct tree* nctemp2314=PtreeMvchild(nctemp2312);
sp =nctemp2314;
struct tree* nctemp2319= sp;
struct tree* nctemp2321=PtreeMvchild(nctemp2319);
sp =nctemp2321;
struct tree* nctemp2323= sp;
struct tree* nctemp2325=SemExprlist(nctemp2323);
struct tree* nctemp2330= sp;
struct tree* nctemp2332=PtreeMvchild(nctemp2330);
sp =nctemp2332;
resultrank = 1;
struct tree* nctemp2340= sp;
struct tree* nctemp2342=PtreeMvsister(nctemp2340);
sp =nctemp2342;
int nctemp2333 = (sp !=0);
int nctemp2344=nctemp2333;
while(nctemp2344)
{{
resultrank = (resultrank + 1);
}
struct tree* nctemp2352= sp;
struct tree* nctemp2354=PtreeMvsister(nctemp2352);
sp =nctemp2354;
int nctemp2345 = (sp !=0);
nctemp2344=nctemp2345;}struct tree* nctemp2357= np;
int nctemp2359= resultrank;
int nctemp2361=PtreeSetrank(nctemp2357,nctemp2359);
struct tree* nctemp2363= p;
int nctemp2365= resultrank;
int nctemp2367=PtreeSetrank(nctemp2363,nctemp2365);
struct tree* nctemp2369= np;
struct nctempchar1 *nctemp2373;
static struct nctempchar1 nctemp2374 = {{ 5}, (char*)"aref\0"};
nctemp2373=&nctemp2374;
nctempchar1* nctemp2371= nctemp2373;
int nctemp2375=PtreeSetref(nctemp2369,nctemp2371);
struct nctempchar1 *nctemp2383;
static struct nctempchar1 nctemp2384 = {{ 5}, (char*)"aref\0"};
nctemp2383=&nctemp2384;
nctempchar1* nctemp2381= nctemp2383;
nctempchar1* nctemp2385=LibeStrsave(nctemp2381);
resultref=nctemp2385;
}
else{
struct tree* nctemp2389= np;
nctempchar1* nctemp2391=PtreeGetstruct(nctemp2389);
nctempchar1* nctemp2387= nctemp2391;
struct nctempchar1 *nctemp2394;
static struct nctempchar1 nctemp2395 = {{ 7}, (char*)"struct\0"};
nctemp2394=&nctemp2395;
nctempchar1* nctemp2392= nctemp2394;
int nctemp2396=LibeStrcmp(nctemp2387,nctemp2392);
if(nctemp2396)
{
struct tree* nctemp2398= np;
struct nctempchar1 *nctemp2402;
static struct nctempchar1 nctemp2403 = {{ 5}, (char*)"sref\0"};
nctemp2402=&nctemp2403;
nctempchar1* nctemp2400= nctemp2402;
int nctemp2404=PtreeSetref(nctemp2398,nctemp2400);
struct nctempchar1 *nctemp2412;
static struct nctempchar1 nctemp2413 = {{ 5}, (char*)"sref\0"};
nctemp2412=&nctemp2413;
nctempchar1* nctemp2410= nctemp2412;
nctempchar1* nctemp2414=LibeStrsave(nctemp2410);
resultref=nctemp2414;
}
else{
struct nctempchar1 *nctemp2422;
static struct nctempchar1 nctemp2423 = {{ 5}, (char*)"void\0"};
nctemp2422=&nctemp2423;
nctempchar1* nctemp2420= nctemp2422;
nctempchar1* nctemp2424=LibeStrsave(nctemp2420);
resultref=nctemp2424;
}
}
struct tree* nctemp2426= np;
struct tree* nctemp2428= p;
int nctemp2430=SemCopytype(nctemp2426,nctemp2428);
struct tree* nctemp2435= np;
struct tree* nctemp2437=PtreeMvsister(nctemp2435);
np =nctemp2437;
struct tree* nctemp2439= np;
struct tree* nctemp2441=SemExpr(nctemp2439);
struct tree* nctemp2447= np;
nctempchar1* nctemp2449=PtreeGetype(nctemp2447);
exptype=nctemp2449;
struct tree* nctemp2455= np;
nctempchar1* nctemp2457=PtreeGetref(nctemp2455);
expref=nctemp2457;
nctempchar1* nctemp2461= resultref;
nctempchar1* nctemp2464= expref;
int nctemp2467=LibeStrcmp(nctemp2461,nctemp2464);
int nctemp2458 = (nctemp2467 ==0);
if(nctemp2458)
{
struct tree* nctemp2470= p;
struct nctempchar1 *nctemp2474;
static struct nctempchar1 nctemp2475 = {{ 19}, (char*)"Illegal conversion\0"};
nctemp2474=&nctemp2475;
nctempchar1* nctemp2472= nctemp2474;
struct nctempchar1 *nctemp2478;
static struct nctempchar1 nctemp2479 = {{ 2}, (char*)" \0"};
nctemp2478=&nctemp2479;
nctempchar1* nctemp2476= nctemp2478;
int nctemp2480=SemSerror(nctemp2470,nctemp2472,nctemp2476);
return 0;
}
nctempchar1* nctemp2488= resultref;
struct nctempchar1 *nctemp2493;
static struct nctempchar1 nctemp2494 = {{ 5}, (char*)"aref\0"};
nctemp2493=&nctemp2494;
nctempchar1* nctemp2491= nctemp2493;
int nctemp2495=LibeStrcmp(nctemp2488,nctemp2491);
int nctemp2485 = (nctemp2495 ==0);
nctempchar1* nctemp2501= resultref;
struct nctempchar1 *nctemp2506;
static struct nctempchar1 nctemp2507 = {{ 5}, (char*)"sref\0"};
nctemp2506=&nctemp2507;
nctempchar1* nctemp2504= nctemp2506;
int nctemp2508=LibeStrcmp(nctemp2501,nctemp2504);
int nctemp2498 = (nctemp2508 ==0);
int nctemp2482 = (nctemp2485 || nctemp2498);
if(nctemp2482)
{
nctempchar1* nctemp2511= resultype;
struct nctempchar1 *nctemp2516;
static struct nctempchar1 nctemp2517 = {{ 8}, (char*)"complex\0"};
nctemp2516=&nctemp2517;
nctempchar1* nctemp2514= nctemp2516;
int nctemp2518=LibeStrcmp(nctemp2511,nctemp2514);
if(nctemp2518)
{
struct tree* nctemp2520= p;
struct nctempchar1 *nctemp2524;
static struct nctempchar1 nctemp2525 = {{ 19}, (char*)"Illegal conversion\0"};
nctemp2524=&nctemp2525;
nctempchar1* nctemp2522= nctemp2524;
struct nctempchar1 *nctemp2528;
static struct nctempchar1 nctemp2529 = {{ 2}, (char*)" \0"};
nctemp2528=&nctemp2529;
nctempchar1* nctemp2526= nctemp2528;
int nctemp2530=SemSerror(nctemp2520,nctemp2522,nctemp2526);
}
return 0;
nctempchar1* nctemp2533= resultype;
struct nctempchar1 *nctemp2538;
static struct nctempchar1 nctemp2539 = {{ 4}, (char*)"int\0"};
nctemp2538=&nctemp2539;
nctempchar1* nctemp2536= nctemp2538;
int nctemp2540=LibeStrcmp(nctemp2533,nctemp2536);
if(nctemp2540)
{
nctempchar1* nctemp2544= exptype;
struct nctempchar1 *nctemp2549;
static struct nctempchar1 nctemp2550 = {{ 5}, (char*)"char\0"};
nctemp2549=&nctemp2550;
nctempchar1* nctemp2547= nctemp2549;
int nctemp2551=LibeStrcmp(nctemp2544,nctemp2547);
int nctemp2541 = (nctemp2551 ==0);
if(nctemp2541)
{
nctempchar1* nctemp2556= exptype;
struct nctempchar1 *nctemp2561;
static struct nctempchar1 nctemp2562 = {{ 6}, (char*)"float\0"};
nctemp2561=&nctemp2562;
nctempchar1* nctemp2559= nctemp2561;
int nctemp2563=LibeStrcmp(nctemp2556,nctemp2559);
int nctemp2553 = (nctemp2563 ==0);
if(nctemp2553)
{
struct tree* nctemp2566= p;
struct nctempchar1 *nctemp2570;
static struct nctempchar1 nctemp2571 = {{ 19}, (char*)"Illegal conversion\0"};
nctemp2570=&nctemp2571;
nctempchar1* nctemp2568= nctemp2570;
struct nctempchar1 *nctemp2574;
static struct nctempchar1 nctemp2575 = {{ 2}, (char*)" \0"};
nctemp2574=&nctemp2575;
nctempchar1* nctemp2572= nctemp2574;
int nctemp2576=SemSerror(nctemp2566,nctemp2568,nctemp2572);
}
}
return 0;
}
else{
nctempchar1* nctemp2579= resultype;
struct nctempchar1 *nctemp2584;
static struct nctempchar1 nctemp2585 = {{ 5}, (char*)"char\0"};
nctemp2584=&nctemp2585;
nctempchar1* nctemp2582= nctemp2584;
int nctemp2586=LibeStrcmp(nctemp2579,nctemp2582);
if(nctemp2586)
{
nctempchar1* nctemp2590= exptype;
struct nctempchar1 *nctemp2595;
static struct nctempchar1 nctemp2596 = {{ 4}, (char*)"int\0"};
nctemp2595=&nctemp2596;
nctempchar1* nctemp2593= nctemp2595;
int nctemp2597=LibeStrcmp(nctemp2590,nctemp2593);
int nctemp2587 = (nctemp2597 ==0);
if(nctemp2587)
{
struct tree* nctemp2600= p;
struct nctempchar1 *nctemp2604;
static struct nctempchar1 nctemp2605 = {{ 19}, (char*)"Illegal conversion\0"};
nctemp2604=&nctemp2605;
nctempchar1* nctemp2602= nctemp2604;
struct nctempchar1 *nctemp2608;
static struct nctempchar1 nctemp2609 = {{ 2}, (char*)" \0"};
nctemp2608=&nctemp2609;
nctempchar1* nctemp2606= nctemp2608;
int nctemp2610=SemSerror(nctemp2600,nctemp2602,nctemp2606);
}
return 0;
}
else{
nctempchar1* nctemp2613= resultype;
struct nctempchar1 *nctemp2618;
static struct nctempchar1 nctemp2619 = {{ 6}, (char*)"float\0"};
nctemp2618=&nctemp2619;
nctempchar1* nctemp2616= nctemp2618;
int nctemp2620=LibeStrcmp(nctemp2613,nctemp2616);
if(nctemp2620)
{
nctempchar1* nctemp2624= exptype;
struct nctempchar1 *nctemp2629;
static struct nctempchar1 nctemp2630 = {{ 4}, (char*)"int\0"};
nctemp2629=&nctemp2630;
nctempchar1* nctemp2627= nctemp2629;
int nctemp2631=LibeStrcmp(nctemp2624,nctemp2627);
int nctemp2621 = (nctemp2631 ==0);
if(nctemp2621)
{
struct tree* nctemp2634= np;
struct nctempchar1 *nctemp2638;
static struct nctempchar1 nctemp2639 = {{ 19}, (char*)"Illegal conversion\0"};
nctemp2638=&nctemp2639;
nctempchar1* nctemp2636= nctemp2638;
struct nctempchar1 *nctemp2642;
static struct nctempchar1 nctemp2643 = {{ 2}, (char*)" \0"};
nctemp2642=&nctemp2643;
nctempchar1* nctemp2640= nctemp2642;
int nctemp2644=SemSerror(nctemp2634,nctemp2636,nctemp2640);
}
return 0;
}
}
}
}
}
return 1;
}
int SemNew (struct tree* p)
{
struct tree* np;
struct tree* sp;
int rank;
struct tree* nctemp2650= p;
nctempchar1* nctemp2652=PtreeGetname(nctemp2650);
nctempchar1* nctemp2648= nctemp2652;
struct nctempchar1 *nctemp2655;
static struct nctempchar1 nctemp2656 = {{ 4}, (char*)"new\0"};
nctemp2655=&nctemp2656;
nctempchar1* nctemp2653= nctemp2655;
int nctemp2657=LibeStrcmp(nctemp2648,nctemp2653);
if(nctemp2657)
{
struct tree* nctemp2662= p;
struct tree* nctemp2664=PtreeMvchild(nctemp2662);
np =nctemp2664;
struct tree* nctemp2666= np;
nctempchar1* nctemp2668=PtreeGetdef(nctemp2666);
struct tree* nctemp2670= np;
struct tree* nctemp2674= np;
nctempchar1* nctemp2676=PtreeGetdef(nctemp2674);
nctempchar1* nctemp2672= nctemp2676;
int nctemp2677=PtreeSetype(nctemp2670,nctemp2672);
struct tree* nctemp2679= np;
struct tree* nctemp2681= p;
int nctemp2683=SemCopytype(nctemp2679,nctemp2681);
struct tree* nctemp2689= np;
nctempchar1* nctemp2691=PtreeGetarray(nctemp2689);
nctempchar1* nctemp2687= nctemp2691;
struct nctempchar1 *nctemp2694;
static struct nctempchar1 nctemp2695 = {{ 6}, (char*)"array\0"};
nctemp2694=&nctemp2695;
nctempchar1* nctemp2692= nctemp2694;
int nctemp2696=LibeStrcmp(nctemp2687,nctemp2692);
int nctemp2684 = (nctemp2696 ==0);
if(nctemp2684)
{
struct tree* nctemp2703= np;
nctempchar1* nctemp2705=PtreeGetstruct(nctemp2703);
nctempchar1* nctemp2701= nctemp2705;
struct nctempchar1 *nctemp2708;
static struct nctempchar1 nctemp2709 = {{ 7}, (char*)"struct\0"};
nctemp2708=&nctemp2709;
nctempchar1* nctemp2706= nctemp2708;
int nctemp2710=LibeStrcmp(nctemp2701,nctemp2706);
int nctemp2698 = (nctemp2710 ==0);
if(nctemp2698)
{
struct tree* nctemp2713= np;
struct nctempchar1 *nctemp2717;
static struct nctempchar1 nctemp2718 = {{ 44}, (char*)"Argument limited to array or structure type\0"};
nctemp2717=&nctemp2718;
nctempchar1* nctemp2715= nctemp2717;
struct nctempchar1 *nctemp2721;
static struct nctempchar1 nctemp2722 = {{ 3}, (char*)"  \0"};
nctemp2721=&nctemp2722;
nctempchar1* nctemp2719= nctemp2721;
int nctemp2723=SemSerror(nctemp2713,nctemp2715,nctemp2719);
}
}
struct tree* nctemp2727= np;
nctempchar1* nctemp2729=PtreeGetarray(nctemp2727);
nctempchar1* nctemp2725= nctemp2729;
struct nctempchar1 *nctemp2732;
static struct nctempchar1 nctemp2733 = {{ 6}, (char*)"array\0"};
nctemp2732=&nctemp2733;
nctempchar1* nctemp2730= nctemp2732;
int nctemp2734=LibeStrcmp(nctemp2725,nctemp2730);
if(nctemp2734)
{
struct tree* nctemp2739= np;
struct tree* nctemp2741=PtreeMvchild(nctemp2739);
sp =nctemp2741;
struct tree* nctemp2746= sp;
struct tree* nctemp2748=PtreeMvchild(nctemp2746);
sp =nctemp2748;
struct tree* nctemp2753= sp;
struct tree* nctemp2755=PtreeMvchild(nctemp2753);
sp =nctemp2755;
struct tree* nctemp2760= sp;
struct tree* nctemp2762=PtreeMvchild(nctemp2760);
sp =nctemp2762;
rank = 1;
int nctemp2763 = (sp ==0);
if(nctemp2763)
{
struct tree* nctemp2768= np;
struct nctempchar1 *nctemp2772;
static struct nctempchar1 nctemp2773 = {{ 35}, (char*)"Missing array size in new operator\0"};
nctemp2772=&nctemp2773;
nctempchar1* nctemp2770= nctemp2772;
struct nctempchar1 *nctemp2776;
static struct nctempchar1 nctemp2777 = {{ 2}, (char*)" \0"};
nctemp2776=&nctemp2777;
nctempchar1* nctemp2774= nctemp2776;
int nctemp2778=SemSerror(nctemp2768,nctemp2770,nctemp2774);
}
struct tree* nctemp2780= sp;
struct tree* nctemp2782=SemExpr(nctemp2780);
struct tree* nctemp2790= sp;
struct tree* nctemp2792=PtreeMvsister(nctemp2790);
sp =nctemp2792;
int nctemp2783 = (sp !=0);
int nctemp2794=nctemp2783;
while(nctemp2794)
{{
struct tree* nctemp2796= sp;
struct tree* nctemp2798=SemExpr(nctemp2796);
rank = (rank + 1);
}
struct tree* nctemp2806= sp;
struct tree* nctemp2808=PtreeMvsister(nctemp2806);
sp =nctemp2808;
int nctemp2799 = (sp !=0);
nctemp2794=nctemp2799;}struct tree* nctemp2811= np;
int nctemp2813= rank;
int nctemp2815=PtreeSetrank(nctemp2811,nctemp2813);
struct tree* nctemp2817= p;
int nctemp2819= rank;
int nctemp2821=PtreeSetrank(nctemp2817,nctemp2819);
struct tree* nctemp2823= p;
struct nctempchar1 *nctemp2827;
static struct nctempchar1 nctemp2828 = {{ 5}, (char*)"aref\0"};
nctemp2827=&nctemp2828;
nctempchar1* nctemp2825= nctemp2827;
int nctemp2829=PtreeSetref(nctemp2823,nctemp2825);
}
else{
struct tree* nctemp2831= p;
struct nctempchar1 *nctemp2835;
static struct nctempchar1 nctemp2836 = {{ 5}, (char*)"sref\0"};
nctemp2835=&nctemp2836;
nctempchar1* nctemp2833= nctemp2835;
int nctemp2837=PtreeSetref(nctemp2831,nctemp2833);
}
}
return 1;
}
int SemDelete (struct tree* p)
{
struct tree* np;
struct tree* nctemp2842= p;
nctempchar1* nctemp2844=PtreeGetname(nctemp2842);
nctempchar1* nctemp2840= nctemp2844;
struct nctempchar1 *nctemp2847;
static struct nctempchar1 nctemp2848 = {{ 7}, (char*)"delete\0"};
nctemp2847=&nctemp2848;
nctempchar1* nctemp2845= nctemp2847;
int nctemp2849=LibeStrcmp(nctemp2840,nctemp2845);
if(nctemp2849)
{
struct tree* nctemp2854= p;
struct tree* nctemp2856=PtreeMvchild(nctemp2854);
np =nctemp2856;
struct tree* nctemp2858= np;
struct tree* nctemp2860=SemExpr(nctemp2858);
struct tree* nctemp2866= np;
nctempchar1* nctemp2868=PtreeGetref(nctemp2866);
nctempchar1* nctemp2864= nctemp2868;
struct nctempchar1 *nctemp2871;
static struct nctempchar1 nctemp2872 = {{ 5}, (char*)"aref\0"};
nctemp2871=&nctemp2872;
nctempchar1* nctemp2869= nctemp2871;
int nctemp2873=LibeStrcmp(nctemp2864,nctemp2869);
int nctemp2861 = (nctemp2873 ==0);
if(nctemp2861)
{
struct tree* nctemp2880= np;
nctempchar1* nctemp2882=PtreeGetref(nctemp2880);
nctempchar1* nctemp2878= nctemp2882;
struct nctempchar1 *nctemp2885;
static struct nctempchar1 nctemp2886 = {{ 5}, (char*)"sref\0"};
nctemp2885=&nctemp2886;
nctempchar1* nctemp2883= nctemp2885;
int nctemp2887=LibeStrcmp(nctemp2878,nctemp2883);
int nctemp2875 = (nctemp2887 ==0);
if(nctemp2875)
{
struct tree* nctemp2890= p;
struct nctempchar1 *nctemp2894;
static struct nctempchar1 nctemp2895 = {{ 25}, (char*)"not a array or structure\0"};
nctemp2894=&nctemp2895;
nctempchar1* nctemp2892= nctemp2894;
struct tree* nctemp2898= p;
nctempchar1* nctemp2900=PtreeGetdef(nctemp2898);
nctempchar1* nctemp2896= nctemp2900;
int nctemp2901=SemSerror(nctemp2890,nctemp2892,nctemp2896);
}
}
else{
struct tree* nctemp2903= p;
struct tree* nctemp2907= np;
nctempchar1* nctemp2909=PtreeGetype(nctemp2907);
nctempchar1* nctemp2905= nctemp2909;
int nctemp2910=PtreeSetype(nctemp2903,nctemp2905);
struct tree* nctemp2912= p;
struct tree* nctemp2916= np;
nctempchar1* nctemp2918=PtreeGetref(nctemp2916);
nctempchar1* nctemp2914= nctemp2918;
int nctemp2919=PtreeSetref(nctemp2912,nctemp2914);
}
}
return 1;
}
int SemCmplx (struct tree* p)
{
struct tree* np;
struct tree* nctemp2924= p;
nctempchar1* nctemp2926=PtreeGetname(nctemp2924);
nctempchar1* nctemp2922= nctemp2926;
struct nctempchar1 *nctemp2929;
static struct nctempchar1 nctemp2930 = {{ 6}, (char*)"cmplx\0"};
nctemp2929=&nctemp2930;
nctempchar1* nctemp2927= nctemp2929;
int nctemp2931=LibeStrcmp(nctemp2922,nctemp2927);
if(nctemp2931)
{
struct tree* nctemp2936= p;
struct tree* nctemp2938=PtreeMvchild(nctemp2936);
np =nctemp2938;
struct tree* nctemp2943= np;
struct tree* nctemp2945=PtreeMvchild(nctemp2943);
np =nctemp2945;
struct tree* nctemp2947= np;
struct tree* nctemp2949=SemExpr(nctemp2947);
struct tree* nctemp2955= np;
nctempchar1* nctemp2957=PtreeGetype(nctemp2955);
nctempchar1* nctemp2953= nctemp2957;
struct nctempchar1 *nctemp2960;
static struct nctempchar1 nctemp2961 = {{ 6}, (char*)"float\0"};
nctemp2960=&nctemp2961;
nctempchar1* nctemp2958= nctemp2960;
int nctemp2962=LibeStrcmp(nctemp2953,nctemp2958);
int nctemp2950 = (nctemp2962 ==0);
if(nctemp2950)
{
struct tree* nctemp2965= p;
struct nctempchar1 *nctemp2969;
static struct nctempchar1 nctemp2970 = {{ 33}, (char*)"Argument to cmplx is not a float\0"};
nctemp2969=&nctemp2970;
nctempchar1* nctemp2967= nctemp2969;
struct tree* nctemp2973= p;
nctempchar1* nctemp2975=PtreeGetdef(nctemp2973);
nctempchar1* nctemp2971= nctemp2975;
int nctemp2976=SemSerror(nctemp2965,nctemp2967,nctemp2971);
return 0;
}
struct tree* nctemp2983= np;
nctempchar1* nctemp2985=PtreeGetref(nctemp2983);
nctempchar1* nctemp2981= nctemp2985;
struct nctempchar1 *nctemp2988;
static struct nctempchar1 nctemp2989 = {{ 5}, (char*)"aref\0"};
nctemp2988=&nctemp2989;
nctempchar1* nctemp2986= nctemp2988;
int nctemp2990=LibeStrcmp(nctemp2981,nctemp2986);
struct tree* nctemp2994= np;
nctempchar1* nctemp2996=PtreeGetref(nctemp2994);
nctempchar1* nctemp2992= nctemp2996;
struct nctempchar1 *nctemp2999;
static struct nctempchar1 nctemp3000 = {{ 5}, (char*)"sref\0"};
nctemp2999=&nctemp3000;
nctempchar1* nctemp2997= nctemp2999;
int nctemp3001=LibeStrcmp(nctemp2992,nctemp2997);
int nctemp2978 = (nctemp2990 || nctemp3001);
if(nctemp2978)
{
struct tree* nctemp3003= p;
struct nctempchar1 *nctemp3007;
static struct nctempchar1 nctemp3008 = {{ 34}, (char*)"Argument to cmplx is not a scalar\0"};
nctemp3007=&nctemp3008;
nctempchar1* nctemp3005= nctemp3007;
struct tree* nctemp3011= p;
nctempchar1* nctemp3013=PtreeGetdef(nctemp3011);
nctempchar1* nctemp3009= nctemp3013;
int nctemp3014=SemSerror(nctemp3003,nctemp3005,nctemp3009);
return 0;
}
struct tree* nctemp3020= np;
struct tree* nctemp3022=PtreeMvsister(nctemp3020);
np =nctemp3022;
struct tree* nctemp3024= np;
struct tree* nctemp3026=SemExpr(nctemp3024);
struct tree* nctemp3032= np;
nctempchar1* nctemp3034=PtreeGetype(nctemp3032);
nctempchar1* nctemp3030= nctemp3034;
struct nctempchar1 *nctemp3037;
static struct nctempchar1 nctemp3038 = {{ 6}, (char*)"float\0"};
nctemp3037=&nctemp3038;
nctempchar1* nctemp3035= nctemp3037;
int nctemp3039=LibeStrcmp(nctemp3030,nctemp3035);
int nctemp3027 = (nctemp3039 ==0);
if(nctemp3027)
{
struct tree* nctemp3042= p;
struct nctempchar1 *nctemp3046;
static struct nctempchar1 nctemp3047 = {{ 33}, (char*)"Argument to cmplx is not a float\0"};
nctemp3046=&nctemp3047;
nctempchar1* nctemp3044= nctemp3046;
struct tree* nctemp3050= p;
nctempchar1* nctemp3052=PtreeGetdef(nctemp3050);
nctempchar1* nctemp3048= nctemp3052;
int nctemp3053=SemSerror(nctemp3042,nctemp3044,nctemp3048);
}
struct tree* nctemp3059= np;
nctempchar1* nctemp3061=PtreeGetref(nctemp3059);
nctempchar1* nctemp3057= nctemp3061;
struct nctempchar1 *nctemp3064;
static struct nctempchar1 nctemp3065 = {{ 5}, (char*)"aref\0"};
nctemp3064=&nctemp3065;
nctempchar1* nctemp3062= nctemp3064;
int nctemp3066=LibeStrcmp(nctemp3057,nctemp3062);
struct tree* nctemp3070= np;
nctempchar1* nctemp3072=PtreeGetref(nctemp3070);
nctempchar1* nctemp3068= nctemp3072;
struct nctempchar1 *nctemp3075;
static struct nctempchar1 nctemp3076 = {{ 5}, (char*)"sref\0"};
nctemp3075=&nctemp3076;
nctempchar1* nctemp3073= nctemp3075;
int nctemp3077=LibeStrcmp(nctemp3068,nctemp3073);
int nctemp3054 = (nctemp3066 || nctemp3077);
if(nctemp3054)
{
struct tree* nctemp3079= p;
struct nctempchar1 *nctemp3083;
static struct nctempchar1 nctemp3084 = {{ 34}, (char*)"Argument to cmplx is not a scalar\0"};
nctemp3083=&nctemp3084;
nctempchar1* nctemp3081= nctemp3083;
struct tree* nctemp3087= p;
nctempchar1* nctemp3089=PtreeGetdef(nctemp3087);
nctempchar1* nctemp3085= nctemp3089;
int nctemp3090=SemSerror(nctemp3079,nctemp3081,nctemp3085);
return 0;
}
struct tree* nctemp3093= p;
struct nctempchar1 *nctemp3097;
static struct nctempchar1 nctemp3098 = {{ 8}, (char*)"complex\0"};
nctemp3097=&nctemp3098;
nctempchar1* nctemp3095= nctemp3097;
int nctemp3099=PtreeSetype(nctemp3093,nctemp3095);
}
return 1;
}
int SemRe (struct tree* p)
{
struct tree* np;
struct tree* nctemp3104= p;
nctempchar1* nctemp3106=PtreeGetname(nctemp3104);
nctempchar1* nctemp3102= nctemp3106;
struct nctempchar1 *nctemp3109;
static struct nctempchar1 nctemp3110 = {{ 3}, (char*)"re\0"};
nctemp3109=&nctemp3110;
nctempchar1* nctemp3107= nctemp3109;
int nctemp3111=LibeStrcmp(nctemp3102,nctemp3107);
if(nctemp3111)
{
struct tree* nctemp3116= p;
struct tree* nctemp3118=PtreeMvchild(nctemp3116);
np =nctemp3118;
struct tree* nctemp3120= np;
struct tree* nctemp3122=SemExpr(nctemp3120);
struct tree* nctemp3128= np;
nctempchar1* nctemp3130=PtreeGetype(nctemp3128);
nctempchar1* nctemp3126= nctemp3130;
struct nctempchar1 *nctemp3133;
static struct nctempchar1 nctemp3134 = {{ 8}, (char*)"complex\0"};
nctemp3133=&nctemp3134;
nctempchar1* nctemp3131= nctemp3133;
int nctemp3135=LibeStrcmp(nctemp3126,nctemp3131);
int nctemp3123 = (nctemp3135 ==0);
if(nctemp3123)
{
struct tree* nctemp3138= p;
struct nctempchar1 *nctemp3142;
static struct nctempchar1 nctemp3143 = {{ 40}, (char*)"Argument to re is not a of type complex\0"};
nctemp3142=&nctemp3143;
nctempchar1* nctemp3140= nctemp3142;
struct tree* nctemp3146= p;
nctempchar1* nctemp3148=PtreeGetdef(nctemp3146);
nctempchar1* nctemp3144= nctemp3148;
int nctemp3149=SemSerror(nctemp3138,nctemp3140,nctemp3144);
return 0;
}
struct tree* nctemp3156= np;
nctempchar1* nctemp3158=PtreeGetref(nctemp3156);
nctempchar1* nctemp3154= nctemp3158;
struct nctempchar1 *nctemp3161;
static struct nctempchar1 nctemp3162 = {{ 5}, (char*)"aref\0"};
nctemp3161=&nctemp3162;
nctempchar1* nctemp3159= nctemp3161;
int nctemp3163=LibeStrcmp(nctemp3154,nctemp3159);
struct tree* nctemp3167= np;
nctempchar1* nctemp3169=PtreeGetref(nctemp3167);
nctempchar1* nctemp3165= nctemp3169;
struct nctempchar1 *nctemp3172;
static struct nctempchar1 nctemp3173 = {{ 5}, (char*)"sref\0"};
nctemp3172=&nctemp3173;
nctempchar1* nctemp3170= nctemp3172;
int nctemp3174=LibeStrcmp(nctemp3165,nctemp3170);
int nctemp3151 = (nctemp3163 || nctemp3174);
if(nctemp3151)
{
struct tree* nctemp3176= p;
struct nctempchar1 *nctemp3180;
static struct nctempchar1 nctemp3181 = {{ 31}, (char*)"Argument to re is not a scalar\0"};
nctemp3180=&nctemp3181;
nctempchar1* nctemp3178= nctemp3180;
struct tree* nctemp3184= p;
nctempchar1* nctemp3186=PtreeGetdef(nctemp3184);
nctempchar1* nctemp3182= nctemp3186;
int nctemp3187=SemSerror(nctemp3176,nctemp3178,nctemp3182);
return 0;
}
struct tree* nctemp3190= p;
struct nctempchar1 *nctemp3194;
static struct nctempchar1 nctemp3195 = {{ 6}, (char*)"float\0"};
nctemp3194=&nctemp3195;
nctempchar1* nctemp3192= nctemp3194;
int nctemp3196=PtreeSetype(nctemp3190,nctemp3192);
}
return 1;
}
int SemLen (struct tree* p)
{
struct tree* np;
struct tree* nctemp3203= p;
nctempchar1* nctemp3205=PtreeGetname(nctemp3203);
nctempchar1* nctemp3201= nctemp3205;
struct nctempchar1 *nctemp3208;
static struct nctempchar1 nctemp3209 = {{ 4}, (char*)"len\0"};
nctemp3208=&nctemp3209;
nctempchar1* nctemp3206= nctemp3208;
int nctemp3210=LibeStrcmp(nctemp3201,nctemp3206);
int nctemp3198 = (nctemp3210 ==1);
if(nctemp3198)
{
struct tree* nctemp3213= p;
struct nctempchar1 *nctemp3217;
static struct nctempchar1 nctemp3218 = {{ 4}, (char*)"int\0"};
nctemp3217=&nctemp3218;
nctempchar1* nctemp3215= nctemp3217;
int nctemp3219=PtreeSetype(nctemp3213,nctemp3215);
struct tree* nctemp3224= p;
struct tree* nctemp3226=PtreeMvchild(nctemp3224);
np =nctemp3226;
struct tree* nctemp3228= np;
struct tree* nctemp3230=SemExpr(nctemp3228);
struct tree* nctemp3236= np;
nctempchar1* nctemp3238=PtreeGetref(nctemp3236);
nctempchar1* nctemp3234= nctemp3238;
struct nctempchar1 *nctemp3241;
static struct nctempchar1 nctemp3242 = {{ 5}, (char*)"aref\0"};
nctemp3241=&nctemp3242;
nctempchar1* nctemp3239= nctemp3241;
int nctemp3243=LibeStrcmp(nctemp3234,nctemp3239);
int nctemp3231 = (nctemp3243 ==0);
if(nctemp3231)
{
struct tree* nctemp3246= p;
struct nctempchar1 *nctemp3250;
static struct nctempchar1 nctemp3251 = {{ 13}, (char*)"not an array\0"};
nctemp3250=&nctemp3251;
nctempchar1* nctemp3248= nctemp3250;
struct tree* nctemp3254= p;
nctempchar1* nctemp3256=PtreeGetdef(nctemp3254);
nctempchar1* nctemp3252= nctemp3256;
int nctemp3257=SemSerror(nctemp3246,nctemp3248,nctemp3252);
}
struct tree* nctemp3262= np;
struct tree* nctemp3264=PtreeMvsister(nctemp3262);
np =nctemp3264;
struct tree* nctemp3266= np;
struct tree* nctemp3268=SemExpr(nctemp3266);
struct tree* nctemp3272= np;
nctempchar1* nctemp3274=PtreeGetref(nctemp3272);
nctempchar1* nctemp3270= nctemp3274;
struct nctempchar1 *nctemp3277;
static struct nctempchar1 nctemp3278 = {{ 5}, (char*)"aref\0"};
nctemp3277=&nctemp3278;
nctempchar1* nctemp3275= nctemp3277;
int nctemp3279=LibeStrcmp(nctemp3270,nctemp3275);
if(nctemp3279)
{
struct tree* nctemp3281= p;
struct nctempchar1 *nctemp3285;
static struct nctempchar1 nctemp3286 = {{ 13}, (char*)"not a scalar\0"};
nctemp3285=&nctemp3286;
nctempchar1* nctemp3283= nctemp3285;
struct tree* nctemp3289= p;
nctempchar1* nctemp3291=PtreeGetdef(nctemp3289);
nctempchar1* nctemp3287= nctemp3291;
int nctemp3292=SemSerror(nctemp3281,nctemp3283,nctemp3287);
}
struct tree* nctemp3298= np;
nctempchar1* nctemp3300=PtreeGetype(nctemp3298);
nctempchar1* nctemp3296= nctemp3300;
struct nctempchar1 *nctemp3303;
static struct nctempchar1 nctemp3304 = {{ 4}, (char*)"int\0"};
nctemp3303=&nctemp3304;
nctempchar1* nctemp3301= nctemp3303;
int nctemp3305=LibeStrcmp(nctemp3296,nctemp3301);
int nctemp3293 = (nctemp3305 ==0);
if(nctemp3293)
{
struct tree* nctemp3308= p;
struct nctempchar1 *nctemp3312;
static struct nctempchar1 nctemp3313 = {{ 26}, (char*)"not an integer expression\0"};
nctemp3312=&nctemp3313;
nctempchar1* nctemp3310= nctemp3312;
struct tree* nctemp3316= p;
nctempchar1* nctemp3318=PtreeGetdef(nctemp3316);
nctempchar1* nctemp3314= nctemp3318;
int nctemp3319=SemSerror(nctemp3308,nctemp3310,nctemp3314);
}
struct tree* nctemp3327= np;
struct tree* nctemp3329=PtreeMvsister(nctemp3327);
np =nctemp3329;
int nctemp3320 = (np !=0);
if(nctemp3320)
{
struct tree* nctemp3332= p;
struct nctempchar1 *nctemp3336;
static struct nctempchar1 nctemp3337 = {{ 19}, (char*)"too many arguments\0"};
nctemp3336=&nctemp3337;
nctempchar1* nctemp3334= nctemp3336;
struct tree* nctemp3340= p;
nctempchar1* nctemp3342=PtreeGetdef(nctemp3340);
nctempchar1* nctemp3338= nctemp3342;
int nctemp3343=SemSerror(nctemp3332,nctemp3334,nctemp3338);
}
}
return 1;
}
int SemIm (struct tree* p)
{
struct tree* np;
struct tree* nctemp3348= p;
nctempchar1* nctemp3350=PtreeGetname(nctemp3348);
nctempchar1* nctemp3346= nctemp3350;
struct nctempchar1 *nctemp3353;
static struct nctempchar1 nctemp3354 = {{ 3}, (char*)"im\0"};
nctemp3353=&nctemp3354;
nctempchar1* nctemp3351= nctemp3353;
int nctemp3355=LibeStrcmp(nctemp3346,nctemp3351);
if(nctemp3355)
{
struct tree* nctemp3360= p;
struct tree* nctemp3362=PtreeMvchild(nctemp3360);
np =nctemp3362;
struct tree* nctemp3364= np;
struct tree* nctemp3366=SemExpr(nctemp3364);
struct tree* nctemp3372= np;
nctempchar1* nctemp3374=PtreeGetype(nctemp3372);
nctempchar1* nctemp3370= nctemp3374;
struct nctempchar1 *nctemp3377;
static struct nctempchar1 nctemp3378 = {{ 8}, (char*)"complex\0"};
nctemp3377=&nctemp3378;
nctempchar1* nctemp3375= nctemp3377;
int nctemp3379=LibeStrcmp(nctemp3370,nctemp3375);
int nctemp3367 = (nctemp3379 ==0);
if(nctemp3367)
{
struct tree* nctemp3382= p;
struct nctempchar1 *nctemp3386;
static struct nctempchar1 nctemp3387 = {{ 38}, (char*)"Argument to re is not of type complex\0"};
nctemp3386=&nctemp3387;
nctempchar1* nctemp3384= nctemp3386;
struct tree* nctemp3390= p;
nctempchar1* nctemp3392=PtreeGetdef(nctemp3390);
nctempchar1* nctemp3388= nctemp3392;
int nctemp3393=SemSerror(nctemp3382,nctemp3384,nctemp3388);
return 0;
}
struct tree* nctemp3400= np;
nctempchar1* nctemp3402=PtreeGetref(nctemp3400);
nctempchar1* nctemp3398= nctemp3402;
struct nctempchar1 *nctemp3405;
static struct nctempchar1 nctemp3406 = {{ 5}, (char*)"aref\0"};
nctemp3405=&nctemp3406;
nctempchar1* nctemp3403= nctemp3405;
int nctemp3407=LibeStrcmp(nctemp3398,nctemp3403);
struct tree* nctemp3411= np;
nctempchar1* nctemp3413=PtreeGetref(nctemp3411);
nctempchar1* nctemp3409= nctemp3413;
struct nctempchar1 *nctemp3416;
static struct nctempchar1 nctemp3417 = {{ 5}, (char*)"sref\0"};
nctemp3416=&nctemp3417;
nctempchar1* nctemp3414= nctemp3416;
int nctemp3418=LibeStrcmp(nctemp3409,nctemp3414);
int nctemp3395 = (nctemp3407 || nctemp3418);
if(nctemp3395)
{
struct tree* nctemp3420= p;
struct nctempchar1 *nctemp3424;
static struct nctempchar1 nctemp3425 = {{ 31}, (char*)"Argument to re is not a scalar\0"};
nctemp3424=&nctemp3425;
nctempchar1* nctemp3422= nctemp3424;
struct tree* nctemp3428= p;
nctempchar1* nctemp3430=PtreeGetdef(nctemp3428);
nctempchar1* nctemp3426= nctemp3430;
int nctemp3431=SemSerror(nctemp3420,nctemp3422,nctemp3426);
return 0;
}
struct tree* nctemp3434= p;
struct nctempchar1 *nctemp3438;
static struct nctempchar1 nctemp3439 = {{ 6}, (char*)"float\0"};
nctemp3438=&nctemp3439;
nctempchar1* nctemp3436= nctemp3438;
int nctemp3440=PtreeSetype(nctemp3434,nctemp3436);
}
return 1;
}
int SemSizeof (struct tree* p)
{
struct tree* nctemp3445= p;
nctempchar1* nctemp3447=PtreeGetname(nctemp3445);
nctempchar1* nctemp3443= nctemp3447;
struct nctempchar1 *nctemp3450;
static struct nctempchar1 nctemp3451 = {{ 7}, (char*)"sizeof\0"};
nctemp3450=&nctemp3451;
nctempchar1* nctemp3448= nctemp3450;
int nctemp3452=LibeStrcmp(nctemp3443,nctemp3448);
if(nctemp3452)
{
struct tree* nctemp3454= p;
struct nctempchar1 *nctemp3458;
static struct nctempchar1 nctemp3459 = {{ 4}, (char*)"int\0"};
nctemp3458=&nctemp3459;
nctempchar1* nctemp3456= nctemp3458;
int nctemp3460=PtreeSetype(nctemp3454,nctemp3456);
}
return 1;
}
int SemComparetype (struct tree* p,struct tree* np)
{
int rval;
rval = 1;
struct tree* nctemp3467= p;
nctempchar1* nctemp3469=PtreeGetype(nctemp3467);
nctempchar1* nctemp3465= nctemp3469;
struct tree* nctemp3472= np;
nctempchar1* nctemp3474=PtreeGetype(nctemp3472);
nctempchar1* nctemp3470= nctemp3474;
int nctemp3475=LibeStrcmp(nctemp3465,nctemp3470);
int nctemp3462 = (nctemp3475 ==0);
if(nctemp3462)
{
rval = 0;
}
struct tree* nctemp3482= p;
nctempchar1* nctemp3484=PtreeGetref(nctemp3482);
nctempchar1* nctemp3480= nctemp3484;
struct tree* nctemp3487= np;
nctempchar1* nctemp3489=PtreeGetref(nctemp3487);
nctempchar1* nctemp3485= nctemp3489;
int nctemp3490=LibeStrcmp(nctemp3480,nctemp3485);
int nctemp3477 = (nctemp3490 ==0);
if(nctemp3477)
{
struct tree* nctemp3495= np;
nctempchar1* nctemp3497=PtreeGetname(nctemp3495);
nctempchar1* nctemp3493= nctemp3497;
struct nctempchar1 *nctemp3500;
static struct nctempchar1 nctemp3501 = {{ 10}, (char*)"iconstant\0"};
nctemp3500=&nctemp3501;
nctempchar1* nctemp3498= nctemp3500;
int nctemp3502=LibeStrcmp(nctemp3493,nctemp3498);
if(nctemp3502)
{
struct tree* nctemp3506= np;
nctempchar1* nctemp3508=PtreeGetdef(nctemp3506);
nctempchar1* nctemp3504= nctemp3508;
struct nctempchar1 *nctemp3511;
static struct nctempchar1 nctemp3512 = {{ 2}, (char*)"0\0"};
nctemp3511=&nctemp3512;
nctempchar1* nctemp3509= nctemp3511;
int nctemp3513=LibeStrcmp(nctemp3504,nctemp3509);
if(nctemp3513)
{
rval = 1;
}
else{
rval = 0;
}
}
else{
rval = 0;
}
}
else{
struct tree* nctemp3519= p;
nctempchar1* nctemp3521=PtreeGetref(nctemp3519);
nctempchar1* nctemp3517= nctemp3521;
struct nctempchar1 *nctemp3524;
static struct nctempchar1 nctemp3525 = {{ 5}, (char*)"aref\0"};
nctemp3524=&nctemp3525;
nctempchar1* nctemp3522= nctemp3524;
int nctemp3526=LibeStrcmp(nctemp3517,nctemp3522);
int nctemp3514 = (nctemp3526 ==1);
if(nctemp3514)
{
struct tree* nctemp3531= p;
int nctemp3533=PtreeGetrank(nctemp3531);
struct tree* nctemp3535= np;
int nctemp3537=PtreeGetrank(nctemp3535);
int nctemp3528 = (nctemp3533 !=nctemp3537);
if(nctemp3528)
{
rval = 0;
}
}
}
return rval;
}
struct tree* SemAsgexpr (struct tree* p)
{
struct tree* np;
struct tree* nctemp3543= p;
struct tree* nctemp3545=PtreeMvchild(nctemp3543);
np =nctemp3545;
struct tree* nctemp3551= np;
nctempchar1* nctemp3553=PtreeGetlval(nctemp3551);
nctempchar1* nctemp3549= nctemp3553;
struct nctempchar1 *nctemp3556;
static struct nctempchar1 nctemp3557 = {{ 5}, (char*)"lval\0"};
nctemp3556=&nctemp3557;
nctempchar1* nctemp3554= nctemp3556;
int nctemp3558=LibeStrcmp(nctemp3549,nctemp3554);
int nctemp3546 = (nctemp3558 ==0);
if(nctemp3546)
{
struct tree* nctemp3561= np;
struct nctempchar1 *nctemp3565;
static struct nctempchar1 nctemp3566 = {{ 17}, (char*)"Not a left value\0"};
nctemp3565=&nctemp3566;
nctempchar1* nctemp3563= nctemp3565;
struct tree* nctemp3569= np;
nctempchar1* nctemp3571=PtreeGetdef(nctemp3569);
nctempchar1* nctemp3567= nctemp3571;
int nctemp3572=SemSerror(nctemp3561,nctemp3563,nctemp3567);
}
else{
struct tree* nctemp3574= p;
struct nctempchar1 *nctemp3578;
static struct nctempchar1 nctemp3579 = {{ 5}, (char*)"lval\0"};
nctemp3578=&nctemp3579;
nctempchar1* nctemp3576= nctemp3578;
int nctemp3580=PtreeSetlval(nctemp3574,nctemp3576);
}
struct tree* nctemp3582= np;
struct tree* nctemp3584= p;
int nctemp3586=SemCopytype(nctemp3582,nctemp3584);
return p;
}
struct tree* SemRelexpr (struct tree* p)
{
struct tree* np;
struct tree* rp;
struct tree* nctemp3592= p;
struct tree* nctemp3594=PtreeMvchild(nctemp3592);
np =nctemp3594;
struct tree* nctemp3599= np;
struct tree* nctemp3601=PtreeMvsister(nctemp3599);
rp =nctemp3601;
struct tree* nctemp3607= p;
nctempchar1* nctemp3609=PtreeGetdef(nctemp3607);
nctempchar1* nctemp3605= nctemp3609;
struct nctempchar1 *nctemp3612;
static struct nctempchar1 nctemp3613 = {{ 3}, (char*)"==\0"};
nctemp3612=&nctemp3613;
nctempchar1* nctemp3610= nctemp3612;
int nctemp3614=LibeStrcmp(nctemp3605,nctemp3610);
int nctemp3602 = (nctemp3614 ==0);
if(nctemp3602)
{
struct tree* nctemp3621= p;
nctempchar1* nctemp3623=PtreeGetdef(nctemp3621);
nctempchar1* nctemp3619= nctemp3623;
struct nctempchar1 *nctemp3626;
static struct nctempchar1 nctemp3627 = {{ 3}, (char*)"!=\0"};
nctemp3626=&nctemp3627;
nctempchar1* nctemp3624= nctemp3626;
int nctemp3628=LibeStrcmp(nctemp3619,nctemp3624);
int nctemp3616 = (nctemp3628 ==0);
if(nctemp3616)
{
struct tree* nctemp3635= np;
nctempchar1* nctemp3637=PtreeGetref(nctemp3635);
nctempchar1* nctemp3633= nctemp3637;
struct nctempchar1 *nctemp3640;
static struct nctempchar1 nctemp3641 = {{ 5}, (char*)"aref\0"};
nctemp3640=&nctemp3641;
nctempchar1* nctemp3638= nctemp3640;
int nctemp3642=LibeStrcmp(nctemp3633,nctemp3638);
struct tree* nctemp3646= np;
nctempchar1* nctemp3648=PtreeGetref(nctemp3646);
nctempchar1* nctemp3644= nctemp3648;
struct nctempchar1 *nctemp3651;
static struct nctempchar1 nctemp3652 = {{ 5}, (char*)"sref\0"};
nctemp3651=&nctemp3652;
nctempchar1* nctemp3649= nctemp3651;
int nctemp3653=LibeStrcmp(nctemp3644,nctemp3649);
int nctemp3630 = (nctemp3642 || nctemp3653);
if(nctemp3630)
{
struct tree* nctemp3655= p;
struct nctempchar1 *nctemp3659;
static struct nctempchar1 nctemp3660 = {{ 18}, (char*)"Illegal operation\0"};
nctemp3659=&nctemp3660;
nctempchar1* nctemp3657= nctemp3659;
struct nctempchar1 *nctemp3663;
static struct nctempchar1 nctemp3664 = {{ 2}, (char*)" \0"};
nctemp3663=&nctemp3664;
nctempchar1* nctemp3661= nctemp3663;
int nctemp3665=SemSerror(nctemp3655,nctemp3657,nctemp3661);
}
else{
struct tree* nctemp3671= rp;
nctempchar1* nctemp3673=PtreeGetref(nctemp3671);
nctempchar1* nctemp3669= nctemp3673;
struct nctempchar1 *nctemp3676;
static struct nctempchar1 nctemp3677 = {{ 5}, (char*)"aref\0"};
nctemp3676=&nctemp3677;
nctempchar1* nctemp3674= nctemp3676;
int nctemp3678=LibeStrcmp(nctemp3669,nctemp3674);
struct tree* nctemp3682= np;
nctempchar1* nctemp3684=PtreeGetref(nctemp3682);
nctempchar1* nctemp3680= nctemp3684;
struct nctempchar1 *nctemp3687;
static struct nctempchar1 nctemp3688 = {{ 5}, (char*)"sref\0"};
nctemp3687=&nctemp3688;
nctempchar1* nctemp3685= nctemp3687;
int nctemp3689=LibeStrcmp(nctemp3680,nctemp3685);
int nctemp3666 = (nctemp3678 || nctemp3689);
if(nctemp3666)
{
struct tree* nctemp3691= p;
struct nctempchar1 *nctemp3695;
static struct nctempchar1 nctemp3696 = {{ 18}, (char*)"Illegal operation\0"};
nctemp3695=&nctemp3696;
nctempchar1* nctemp3693= nctemp3695;
struct nctempchar1 *nctemp3699;
static struct nctempchar1 nctemp3700 = {{ 2}, (char*)" \0"};
nctemp3699=&nctemp3700;
nctempchar1* nctemp3697= nctemp3699;
int nctemp3701=SemSerror(nctemp3691,nctemp3693,nctemp3697);
}
}
}
else{
struct tree* nctemp3705= np;
nctempchar1* nctemp3707=PtreeGetype(nctemp3705);
nctempchar1* nctemp3703= nctemp3707;
struct nctempchar1 *nctemp3710;
static struct nctempchar1 nctemp3711 = {{ 8}, (char*)"complex\0"};
nctemp3710=&nctemp3711;
nctempchar1* nctemp3708= nctemp3710;
int nctemp3712=LibeStrcmp(nctemp3703,nctemp3708);
if(nctemp3712)
{
struct tree* nctemp3714= p;
struct nctempchar1 *nctemp3718;
static struct nctempchar1 nctemp3719 = {{ 18}, (char*)"Illegal operation\0"};
nctemp3718=&nctemp3719;
nctempchar1* nctemp3716= nctemp3718;
struct nctempchar1 *nctemp3722;
static struct nctempchar1 nctemp3723 = {{ 2}, (char*)" \0"};
nctemp3722=&nctemp3723;
nctempchar1* nctemp3720= nctemp3722;
int nctemp3724=SemSerror(nctemp3714,nctemp3716,nctemp3720);
}
}
}
struct tree* nctemp3726= p;
struct nctempchar1 *nctemp3730;
static struct nctempchar1 nctemp3731 = {{ 4}, (char*)"int\0"};
nctemp3730=&nctemp3731;
nctempchar1* nctemp3728= nctemp3730;
int nctemp3732=PtreeSetype(nctemp3726,nctemp3728);
struct tree* nctemp3734= p;
struct nctempchar1 *nctemp3738;
static struct nctempchar1 nctemp3739 = {{ 5}, (char*)"void\0"};
nctemp3738=&nctemp3739;
nctempchar1* nctemp3736= nctemp3738;
int nctemp3740=PtreeSetlval(nctemp3734,nctemp3736);
struct tree* nctemp3742= p;
struct nctempchar1 *nctemp3746;
static struct nctempchar1 nctemp3747 = {{ 5}, (char*)"void\0"};
nctemp3746=&nctemp3747;
nctempchar1* nctemp3744= nctemp3746;
int nctemp3748=PtreeSetstruct(nctemp3742,nctemp3744);
return p;
}
struct tree* SemAddexpr (struct tree* p)
{
struct tree* np;
struct tree* rp;
struct tree* nctemp3754= p;
struct tree* nctemp3756=PtreeMvchild(nctemp3754);
np =nctemp3756;
struct tree* nctemp3761= np;
struct tree* nctemp3763=PtreeMvsister(nctemp3761);
rp =nctemp3763;
struct tree* nctemp3767= np;
nctempchar1* nctemp3769=PtreeGetref(nctemp3767);
nctempchar1* nctemp3765= nctemp3769;
struct nctempchar1 *nctemp3772;
static struct nctempchar1 nctemp3773 = {{ 5}, (char*)"sref\0"};
nctemp3772=&nctemp3773;
nctempchar1* nctemp3770= nctemp3772;
int nctemp3774=LibeStrcmp(nctemp3765,nctemp3770);
if(nctemp3774)
{
struct tree* nctemp3776= np;
struct nctempchar1 *nctemp3780;
static struct nctempchar1 nctemp3781 = {{ 18}, (char*)"Illegal operation\0"};
nctemp3780=&nctemp3781;
nctempchar1* nctemp3778= nctemp3780;
struct nctempchar1 *nctemp3784;
static struct nctempchar1 nctemp3785 = {{ 2}, (char*)" \0"};
nctemp3784=&nctemp3785;
nctempchar1* nctemp3782= nctemp3784;
int nctemp3786=SemSerror(nctemp3776,nctemp3778,nctemp3782);
}
else{
struct tree* nctemp3790= rp;
nctempchar1* nctemp3792=PtreeGetref(nctemp3790);
nctempchar1* nctemp3788= nctemp3792;
struct nctempchar1 *nctemp3795;
static struct nctempchar1 nctemp3796 = {{ 5}, (char*)"sref\0"};
nctemp3795=&nctemp3796;
nctempchar1* nctemp3793= nctemp3795;
int nctemp3797=LibeStrcmp(nctemp3788,nctemp3793);
if(nctemp3797)
{
struct tree* nctemp3799= np;
struct nctempchar1 *nctemp3803;
static struct nctempchar1 nctemp3804 = {{ 18}, (char*)"Illegal operation\0"};
nctemp3803=&nctemp3804;
nctempchar1* nctemp3801= nctemp3803;
struct nctempchar1 *nctemp3807;
static struct nctempchar1 nctemp3808 = {{ 2}, (char*)" \0"};
nctemp3807=&nctemp3808;
nctempchar1* nctemp3805= nctemp3807;
int nctemp3809=SemSerror(nctemp3799,nctemp3801,nctemp3805);
}
else{
struct tree* nctemp3811= np;
struct tree* nctemp3813= p;
int nctemp3815=SemCopytype(nctemp3811,nctemp3813);
struct tree* nctemp3817= p;
struct nctempchar1 *nctemp3821;
static struct nctempchar1 nctemp3822 = {{ 5}, (char*)"void\0"};
nctemp3821=&nctemp3822;
nctempchar1* nctemp3819= nctemp3821;
int nctemp3823=PtreeSetlval(nctemp3817,nctemp3819);
}
}
return p;
}
struct tree* SemBinexpr (struct tree* p)
{
struct tree* leftp;
struct tree* rightp;
struct tree* np;
struct tree* right;
np = p;
struct tree* nctemp3828= p;
nctempchar1* nctemp3830=PtreeGetname(nctemp3828);
nctempchar1* nctemp3826= nctemp3830;
struct nctempchar1 *nctemp3833;
static struct nctempchar1 nctemp3834 = {{ 8}, (char*)"binexpr\0"};
nctemp3833=&nctemp3834;
nctempchar1* nctemp3831= nctemp3833;
int nctemp3835=LibeStrcmp(nctemp3826,nctemp3831);
if(nctemp3835)
{
struct tree* nctemp3840= p;
struct tree* nctemp3842=PtreeMvchild(nctemp3840);
p =nctemp3842;
struct tree* nctemp3847= p;
struct tree* nctemp3849=PtreeMvsister(nctemp3847);
p =nctemp3849;
right = p;
struct tree* nctemp3854= p;
struct tree* nctemp3856=SemUnexpr(nctemp3854);
rightp =nctemp3856;
struct tree* nctemp3861= np;
struct tree* nctemp3863=PtreeMvchild(nctemp3861);
p =nctemp3863;
struct tree* nctemp3869= np;
nctempchar1* nctemp3871=PtreeGetdef(nctemp3869);
nctempchar1* nctemp3867= nctemp3871;
struct nctempchar1 *nctemp3874;
static struct nctempchar1 nctemp3875 = {{ 2}, (char*)"=\0"};
nctemp3874=&nctemp3875;
nctempchar1* nctemp3872= nctemp3874;
int nctemp3876=LibeStrcmp(nctemp3867,nctemp3872);
int nctemp3864 = (nctemp3876 ==1);
if(nctemp3864)
{
struct tree* nctemp3883= p;
nctempchar1* nctemp3885=PtreeGetname(nctemp3883);
nctempchar1* nctemp3881= nctemp3885;
struct nctempchar1 *nctemp3888;
static struct nctempchar1 nctemp3889 = {{ 11}, (char*)"identifier\0"};
nctemp3888=&nctemp3889;
nctempchar1* nctemp3886= nctemp3888;
int nctemp3890=LibeStrcmp(nctemp3881,nctemp3886);
int nctemp3878 = (nctemp3890 ==1);
if(nctemp3878)
{
struct tree* nctemp3895= p;
struct tree* nctemp3897=PtreeMvchild(nctemp3895);
int nctemp3892 = (nctemp3897 ==0);
if(nctemp3892)
{
struct tree* nctemp3900= right;
struct tree* nctemp3902= p;
int nctemp3904=SemCopytype2(nctemp3900,nctemp3902);
struct tree* nctemp3906= p;
struct symbol* nctemp3910=SymGetltp();
struct symbol* nctemp3908= nctemp3910;
struct symbol* nctemp3913=SymGetetp();
struct symbol* nctemp3911= nctemp3913;
int nctemp3914=SemAutodeclar(nctemp3906,nctemp3908,nctemp3911);
}
}
}
struct tree* nctemp3919= p;
struct tree* nctemp3921=SemUnexpr(nctemp3919);
leftp =nctemp3921;
struct tree* nctemp3925= leftp;
struct tree* nctemp3927= rightp;
int nctemp3929=SemComparetype(nctemp3925,nctemp3927);
int nctemp3922 = (nctemp3929 ==0);
if(nctemp3922)
{
struct tree* nctemp3932= p;
struct nctempchar1 *nctemp3936;
static struct nctempchar1 nctemp3937 = {{ 11}, (char*)"Type error\0"};
nctemp3936=&nctemp3937;
nctempchar1* nctemp3934= nctemp3936;
struct nctempchar1 *nctemp3940;
static struct nctempchar1 nctemp3941 = {{ 2}, (char*)" \0"};
nctemp3940=&nctemp3941;
nctempchar1* nctemp3938= nctemp3940;
int nctemp3942=SemSerror(nctemp3932,nctemp3934,nctemp3938);
return p;
}
else{
struct tree* nctemp3947= np;
nctempchar1* nctemp3949=PtreeGetdef(nctemp3947);
nctempchar1* nctemp3945= nctemp3949;
struct nctempchar1 *nctemp3952;
static struct nctempchar1 nctemp3953 = {{ 2}, (char*)"=\0"};
nctemp3952=&nctemp3953;
nctempchar1* nctemp3950= nctemp3952;
int nctemp3954=LibeStrcmp(nctemp3945,nctemp3950);
if(nctemp3954)
{
struct tree* nctemp3956= np;
struct tree* nctemp3958=SemAsgexpr(nctemp3956);
}
else{
struct tree* nctemp3982= np;
nctempchar1* nctemp3984=PtreeGetdef(nctemp3982);
nctempchar1* nctemp3980= nctemp3984;
struct nctempchar1 *nctemp3987;
static struct nctempchar1 nctemp3988 = {{ 3}, (char*)"!=\0"};
nctemp3987=&nctemp3988;
nctempchar1* nctemp3985= nctemp3987;
int nctemp3989=LibeStrcmp(nctemp3980,nctemp3985);
struct tree* nctemp3993= np;
nctempchar1* nctemp3995=PtreeGetdef(nctemp3993);
nctempchar1* nctemp3991= nctemp3995;
struct nctempchar1 *nctemp3998;
static struct nctempchar1 nctemp3999 = {{ 3}, (char*)"==\0"};
nctemp3998=&nctemp3999;
nctempchar1* nctemp3996= nctemp3998;
int nctemp4000=LibeStrcmp(nctemp3991,nctemp3996);
int nctemp3977 = (nctemp3989 || nctemp4000);
struct tree* nctemp4004= np;
nctempchar1* nctemp4006=PtreeGetdef(nctemp4004);
nctempchar1* nctemp4002= nctemp4006;
struct nctempchar1 *nctemp4009;
static struct nctempchar1 nctemp4010 = {{ 3}, (char*)"||\0"};
nctemp4009=&nctemp4010;
nctempchar1* nctemp4007= nctemp4009;
int nctemp4011=LibeStrcmp(nctemp4002,nctemp4007);
int nctemp3974 = (nctemp3977 || nctemp4011);
struct tree* nctemp4015= np;
nctempchar1* nctemp4017=PtreeGetdef(nctemp4015);
nctempchar1* nctemp4013= nctemp4017;
struct nctempchar1 *nctemp4020;
static struct nctempchar1 nctemp4021 = {{ 3}, (char*)"<=\0"};
nctemp4020=&nctemp4021;
nctempchar1* nctemp4018= nctemp4020;
int nctemp4022=LibeStrcmp(nctemp4013,nctemp4018);
int nctemp3971 = (nctemp3974 || nctemp4022);
struct tree* nctemp4026= np;
nctempchar1* nctemp4028=PtreeGetdef(nctemp4026);
nctempchar1* nctemp4024= nctemp4028;
struct nctempchar1 *nctemp4031;
static struct nctempchar1 nctemp4032 = {{ 3}, (char*)">=\0"};
nctemp4031=&nctemp4032;
nctempchar1* nctemp4029= nctemp4031;
int nctemp4033=LibeStrcmp(nctemp4024,nctemp4029);
int nctemp3968 = (nctemp3971 || nctemp4033);
struct tree* nctemp4037= np;
nctempchar1* nctemp4039=PtreeGetdef(nctemp4037);
nctempchar1* nctemp4035= nctemp4039;
struct nctempchar1 *nctemp4042;
static struct nctempchar1 nctemp4043 = {{ 2}, (char*)"<\0"};
nctemp4042=&nctemp4043;
nctempchar1* nctemp4040= nctemp4042;
int nctemp4044=LibeStrcmp(nctemp4035,nctemp4040);
int nctemp3965 = (nctemp3968 || nctemp4044);
struct tree* nctemp4048= np;
nctempchar1* nctemp4050=PtreeGetdef(nctemp4048);
nctempchar1* nctemp4046= nctemp4050;
struct nctempchar1 *nctemp4053;
static struct nctempchar1 nctemp4054 = {{ 2}, (char*)">\0"};
nctemp4053=&nctemp4054;
nctempchar1* nctemp4051= nctemp4053;
int nctemp4055=LibeStrcmp(nctemp4046,nctemp4051);
int nctemp3962 = (nctemp3965 || nctemp4055);
struct tree* nctemp4059= np;
nctempchar1* nctemp4061=PtreeGetdef(nctemp4059);
nctempchar1* nctemp4057= nctemp4061;
struct nctempchar1 *nctemp4064;
static struct nctempchar1 nctemp4065 = {{ 3}, (char*)"&&\0"};
nctemp4064=&nctemp4065;
nctempchar1* nctemp4062= nctemp4064;
int nctemp4066=LibeStrcmp(nctemp4057,nctemp4062);
int nctemp3959 = (nctemp3962 || nctemp4066);
if(nctemp3959)
{
struct tree* nctemp4068= np;
struct tree* nctemp4070=SemRelexpr(nctemp4068);
}
else{
struct tree* nctemp4082= np;
nctempchar1* nctemp4084=PtreeGetdef(nctemp4082);
nctempchar1* nctemp4080= nctemp4084;
struct nctempchar1 *nctemp4087;
static struct nctempchar1 nctemp4088 = {{ 2}, (char*)"+\0"};
nctemp4087=&nctemp4088;
nctempchar1* nctemp4085= nctemp4087;
int nctemp4089=LibeStrcmp(nctemp4080,nctemp4085);
struct tree* nctemp4093= np;
nctempchar1* nctemp4095=PtreeGetdef(nctemp4093);
nctempchar1* nctemp4091= nctemp4095;
struct nctempchar1 *nctemp4098;
static struct nctempchar1 nctemp4099 = {{ 2}, (char*)"-\0"};
nctemp4098=&nctemp4099;
nctempchar1* nctemp4096= nctemp4098;
int nctemp4100=LibeStrcmp(nctemp4091,nctemp4096);
int nctemp4077 = (nctemp4089 || nctemp4100);
struct tree* nctemp4104= np;
nctempchar1* nctemp4106=PtreeGetdef(nctemp4104);
nctempchar1* nctemp4102= nctemp4106;
struct nctempchar1 *nctemp4109;
static struct nctempchar1 nctemp4110 = {{ 2}, (char*)"*\0"};
nctemp4109=&nctemp4110;
nctempchar1* nctemp4107= nctemp4109;
int nctemp4111=LibeStrcmp(nctemp4102,nctemp4107);
int nctemp4074 = (nctemp4077 || nctemp4111);
struct tree* nctemp4115= np;
nctempchar1* nctemp4117=PtreeGetdef(nctemp4115);
nctempchar1* nctemp4113= nctemp4117;
struct nctempchar1 *nctemp4120;
static struct nctempchar1 nctemp4121 = {{ 2}, (char*)"/\0"};
nctemp4120=&nctemp4121;
nctempchar1* nctemp4118= nctemp4120;
int nctemp4122=LibeStrcmp(nctemp4113,nctemp4118);
int nctemp4071 = (nctemp4074 || nctemp4122);
if(nctemp4071)
{
struct tree* nctemp4124= np;
struct tree* nctemp4126=SemAddexpr(nctemp4124);
}
}
}
return np;
}
}
else{
struct tree* nctemp4129= p;
struct tree* nctemp4131=SemUnexpr(nctemp4129);
return nctemp4131;
}
}
struct tree* SemExpr (struct tree* p)
{
struct tree* sp;
struct tree* nctemp4136= p;
struct tree* nctemp4138=PtreeMvchild(nctemp4136);
sp =nctemp4138;
struct tree* nctemp4143= sp;
struct tree* nctemp4145=SemBinexpr(nctemp4143);
sp =nctemp4145;
struct tree* nctemp4147= sp;
struct tree* nctemp4149= p;
int nctemp4151=SemCopytype(nctemp4147,nctemp4149);
struct tree* nctemp4155= p;
int nctemp4157=PtreeGetopexpr(nctemp4155);
int nctemp4152 = (nctemp4157 ==1);
if(nctemp4152)
{
int nctemp4162=SemGetsimple();
int nctemp4159 = (nctemp4162 ==0);
if(nctemp4159)
{
struct tree* nctemp4165= p;
int nctemp4167= 0;
int nctemp4169=PtreeSetsimple(nctemp4165,nctemp4167);
int nctemp4171= 1;
int nctemp4173=SemSetsimple(nctemp4171);
}
else{
struct tree* nctemp4175= p;
int nctemp4177= 1;
int nctemp4179=PtreeSetsimple(nctemp4175,nctemp4177);
}
}
return p;
}
struct tree* SemUnexpr (struct tree* p)
{
struct tree* np;
np = p;
struct tree* nctemp4184= p;
nctempchar1* nctemp4186=PtreeGetname(nctemp4184);
nctempchar1* nctemp4182= nctemp4186;
struct nctempchar1 *nctemp4189;
static struct nctempchar1 nctemp4190 = {{ 7}, (char*)"unexpr\0"};
nctemp4189=&nctemp4190;
nctempchar1* nctemp4187= nctemp4189;
int nctemp4191=LibeStrcmp(nctemp4182,nctemp4187);
if(nctemp4191)
{
struct tree* nctemp4196= p;
struct tree* nctemp4198=PtreeMvchild(nctemp4196);
p =nctemp4198;
struct tree* nctemp4203= p;
struct tree* nctemp4205=SemPrimexpr(nctemp4203);
p =nctemp4205;
struct tree* nctemp4207= p;
struct tree* nctemp4209= np;
int nctemp4211=SemCopytype(nctemp4207,nctemp4209);
return np;
}
else{
struct tree* nctemp4214= p;
struct tree* nctemp4216=SemPrimexpr(nctemp4214);
return nctemp4216;
}
}
struct tree* SemPrimexpr (struct tree* p)
{
struct tree* nctemp4220= p;
nctempchar1* nctemp4222=PtreeGetname(nctemp4220);
nctempchar1* nctemp4218= nctemp4222;
struct nctempchar1 *nctemp4225;
static struct nctempchar1 nctemp4226 = {{ 11}, (char*)"identifier\0"};
nctemp4225=&nctemp4226;
nctempchar1* nctemp4223= nctemp4225;
int nctemp4227=LibeStrcmp(nctemp4218,nctemp4223);
if(nctemp4227)
{
struct tree* nctemp4229= p;
int nctemp4231=SemId(nctemp4229);
return p;
}
else{
struct tree* nctemp4236= p;
nctempchar1* nctemp4238=PtreeGetname(nctemp4236);
nctempchar1* nctemp4234= nctemp4238;
struct nctempchar1 *nctemp4241;
static struct nctempchar1 nctemp4242 = {{ 6}, (char*)"fcall\0"};
nctemp4241=&nctemp4242;
nctempchar1* nctemp4239= nctemp4241;
int nctemp4243=LibeStrcmp(nctemp4234,nctemp4239);
if(nctemp4243)
{
int nctemp4245= 0;
int nctemp4247=SemSetsimple(nctemp4245);
struct tree* nctemp4249= p;
int nctemp4251=SemFcall(nctemp4249);
return p;
}
else{
struct tree* nctemp4256= p;
nctempchar1* nctemp4258=PtreeGetname(nctemp4256);
nctempchar1* nctemp4254= nctemp4258;
struct nctempchar1 *nctemp4261;
static struct nctempchar1 nctemp4262 = {{ 5}, (char*)"cast\0"};
nctemp4261=&nctemp4262;
nctempchar1* nctemp4259= nctemp4261;
int nctemp4263=LibeStrcmp(nctemp4254,nctemp4259);
if(nctemp4263)
{
int nctemp4265= 0;
int nctemp4267=SemSetsimple(nctemp4265);
struct tree* nctemp4269= p;
int nctemp4271=SemCast(nctemp4269);
return p;
}
else{
struct tree* nctemp4276= p;
nctempchar1* nctemp4278=PtreeGetname(nctemp4276);
nctempchar1* nctemp4274= nctemp4278;
struct nctempchar1 *nctemp4281;
static struct nctempchar1 nctemp4282 = {{ 4}, (char*)"new\0"};
nctemp4281=&nctemp4282;
nctempchar1* nctemp4279= nctemp4281;
int nctemp4283=LibeStrcmp(nctemp4274,nctemp4279);
if(nctemp4283)
{
int nctemp4285= 0;
int nctemp4287=SemSetsimple(nctemp4285);
struct tree* nctemp4289= p;
int nctemp4291=SemNew(nctemp4289);
return p;
}
else{
struct tree* nctemp4296= p;
nctempchar1* nctemp4298=PtreeGetname(nctemp4296);
nctempchar1* nctemp4294= nctemp4298;
struct nctempchar1 *nctemp4301;
static struct nctempchar1 nctemp4302 = {{ 7}, (char*)"delete\0"};
nctemp4301=&nctemp4302;
nctempchar1* nctemp4299= nctemp4301;
int nctemp4303=LibeStrcmp(nctemp4294,nctemp4299);
if(nctemp4303)
{
int nctemp4305= 0;
int nctemp4307=SemSetsimple(nctemp4305);
struct tree* nctemp4309= p;
int nctemp4311=SemDelete(nctemp4309);
return p;
}
else{
struct tree* nctemp4316= p;
nctempchar1* nctemp4318=PtreeGetname(nctemp4316);
nctempchar1* nctemp4314= nctemp4318;
struct nctempchar1 *nctemp4321;
static struct nctempchar1 nctemp4322 = {{ 6}, (char*)"cmplx\0"};
nctemp4321=&nctemp4322;
nctempchar1* nctemp4319= nctemp4321;
int nctemp4323=LibeStrcmp(nctemp4314,nctemp4319);
if(nctemp4323)
{
int nctemp4325= 0;
int nctemp4327=SemSetsimple(nctemp4325);
struct tree* nctemp4329= p;
int nctemp4331=SemCmplx(nctemp4329);
return p;
}
else{
struct tree* nctemp4336= p;
nctempchar1* nctemp4338=PtreeGetname(nctemp4336);
nctempchar1* nctemp4334= nctemp4338;
struct nctempchar1 *nctemp4341;
static struct nctempchar1 nctemp4342 = {{ 3}, (char*)"re\0"};
nctemp4341=&nctemp4342;
nctempchar1* nctemp4339= nctemp4341;
int nctemp4343=LibeStrcmp(nctemp4334,nctemp4339);
if(nctemp4343)
{
int nctemp4345= 0;
int nctemp4347=SemSetsimple(nctemp4345);
struct tree* nctemp4349= p;
int nctemp4351=SemRe(nctemp4349);
return p;
}
else{
struct tree* nctemp4356= p;
nctempchar1* nctemp4358=PtreeGetname(nctemp4356);
nctempchar1* nctemp4354= nctemp4358;
struct nctempchar1 *nctemp4361;
static struct nctempchar1 nctemp4362 = {{ 4}, (char*)"len\0"};
nctemp4361=&nctemp4362;
nctempchar1* nctemp4359= nctemp4361;
int nctemp4363=LibeStrcmp(nctemp4354,nctemp4359);
if(nctemp4363)
{
int nctemp4365= 0;
int nctemp4367=SemSetsimple(nctemp4365);
struct tree* nctemp4369= p;
int nctemp4371=SemLen(nctemp4369);
return p;
}
else{
struct tree* nctemp4376= p;
nctempchar1* nctemp4378=PtreeGetname(nctemp4376);
nctempchar1* nctemp4374= nctemp4378;
struct nctempchar1 *nctemp4381;
static struct nctempchar1 nctemp4382 = {{ 3}, (char*)"im\0"};
nctemp4381=&nctemp4382;
nctempchar1* nctemp4379= nctemp4381;
int nctemp4383=LibeStrcmp(nctemp4374,nctemp4379);
if(nctemp4383)
{
int nctemp4385= 0;
int nctemp4387=SemSetsimple(nctemp4385);
struct tree* nctemp4389= p;
int nctemp4391=SemIm(nctemp4389);
return p;
}
else{
struct tree* nctemp4396= p;
nctempchar1* nctemp4398=PtreeGetname(nctemp4396);
nctempchar1* nctemp4394= nctemp4398;
struct nctempchar1 *nctemp4401;
static struct nctempchar1 nctemp4402 = {{ 7}, (char*)"sizeof\0"};
nctemp4401=&nctemp4402;
nctempchar1* nctemp4399= nctemp4401;
int nctemp4403=LibeStrcmp(nctemp4394,nctemp4399);
if(nctemp4403)
{
int nctemp4405= 0;
int nctemp4407=SemSetsimple(nctemp4405);
struct tree* nctemp4409= p;
int nctemp4411=SemSizeof(nctemp4409);
return p;
}
else{
struct tree* nctemp4416= p;
nctempchar1* nctemp4418=PtreeGetname(nctemp4416);
nctempchar1* nctemp4414= nctemp4418;
struct nctempchar1 *nctemp4421;
static struct nctempchar1 nctemp4422 = {{ 10}, (char*)"iconstant\0"};
nctemp4421=&nctemp4422;
nctempchar1* nctemp4419= nctemp4421;
int nctemp4423=LibeStrcmp(nctemp4414,nctemp4419);
if(nctemp4423)
{
struct tree* nctemp4425= p;
struct nctempchar1 *nctemp4429;
static struct nctempchar1 nctemp4430 = {{ 4}, (char*)"int\0"};
nctemp4429=&nctemp4430;
nctempchar1* nctemp4427= nctemp4429;
int nctemp4431=PtreeSetype(nctemp4425,nctemp4427);
return p;
}
else{
struct tree* nctemp4436= p;
nctempchar1* nctemp4438=PtreeGetname(nctemp4436);
nctempchar1* nctemp4434= nctemp4438;
struct nctempchar1 *nctemp4441;
static struct nctempchar1 nctemp4442 = {{ 10}, (char*)"rconstant\0"};
nctemp4441=&nctemp4442;
nctempchar1* nctemp4439= nctemp4441;
int nctemp4443=LibeStrcmp(nctemp4434,nctemp4439);
if(nctemp4443)
{
struct tree* nctemp4445= p;
struct nctempchar1 *nctemp4449;
static struct nctempchar1 nctemp4450 = {{ 6}, (char*)"float\0"};
nctemp4449=&nctemp4450;
nctempchar1* nctemp4447= nctemp4449;
int nctemp4451=PtreeSetype(nctemp4445,nctemp4447);
return p;
}
else{
struct tree* nctemp4456= p;
nctempchar1* nctemp4458=PtreeGetname(nctemp4456);
nctempchar1* nctemp4454= nctemp4458;
struct nctempchar1 *nctemp4461;
static struct nctempchar1 nctemp4462 = {{ 10}, (char*)"sconstant\0"};
nctemp4461=&nctemp4462;
nctempchar1* nctemp4459= nctemp4461;
int nctemp4463=LibeStrcmp(nctemp4454,nctemp4459);
if(nctemp4463)
{
int nctemp4465= 0;
int nctemp4467=SemSetsimple(nctemp4465);
struct tree* nctemp4469= p;
struct nctempchar1 *nctemp4473;
static struct nctempchar1 nctemp4474 = {{ 5}, (char*)"char\0"};
nctemp4473=&nctemp4474;
nctempchar1* nctemp4471= nctemp4473;
int nctemp4475=PtreeSetype(nctemp4469,nctemp4471);
struct tree* nctemp4477= p;
struct nctempchar1 *nctemp4481;
static struct nctempchar1 nctemp4482 = {{ 5}, (char*)"aref\0"};
nctemp4481=&nctemp4482;
nctempchar1* nctemp4479= nctemp4481;
int nctemp4483=PtreeSetref(nctemp4477,nctemp4479);
struct tree* nctemp4485= p;
struct nctempchar1 *nctemp4489;
static struct nctempchar1 nctemp4490 = {{ 6}, (char*)"array\0"};
nctemp4489=&nctemp4490;
nctempchar1* nctemp4487= nctemp4489;
int nctemp4491=PtreeSetarray(nctemp4485,nctemp4487);
struct tree* nctemp4493= p;
int nctemp4495= 1;
int nctemp4497=PtreeSetrank(nctemp4493,nctemp4495);
return p;
}
else{
struct tree* nctemp4500= p;
struct tree* nctemp4502=SemBinexpr(nctemp4500);
return nctemp4502;
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
int SemCopyparallel (struct tree* p,struct tree* np)
{
struct tree* nctemp4504= p;
struct tree* nctemp4508= np;
nctempchar1* nctemp4510=PtreeGetparallel(nctemp4508);
nctempchar1* nctemp4506= nctemp4510;
int nctemp4511=PtreeSetparallel(nctemp4504,nctemp4506);
return 1;
}
int SemArgtypes (struct tree* p,struct symbol* tp)
{
nctempchar1 *name;
struct symbol* nctemp4518= tp;
nctempchar1* nctemp4520=SymGetname(nctemp4518);
name=nctemp4520;
struct tree* nctemp4522= p;
struct symbol* nctemp4524= tp;
int nctemp4526=SemArgtype(nctemp4522,nctemp4524);
struct tree* nctemp4531= p;
struct tree* nctemp4533=PtreeMvchild(nctemp4531);
p =nctemp4533;
struct tree* nctemp4539= p;
nctempchar1* nctemp4541=PtreeGetname(nctemp4539);
nctempchar1* nctemp4537= nctemp4541;
struct nctempchar1 *nctemp4544;
static struct nctempchar1 nctemp4545 = {{ 8}, (char*)"arglist\0"};
nctemp4544=&nctemp4545;
nctempchar1* nctemp4542= nctemp4544;
int nctemp4546=LibeStrcmp(nctemp4537,nctemp4542);
int nctemp4534 = (nctemp4546 ==0);
if(nctemp4534)
{
struct symbol* nctemp4555= tp;
struct symbol* nctemp4557=SymGetable(nctemp4555);
tp =nctemp4557;
int nctemp4548 = (tp !=0);
if(nctemp4548)
{
struct tree* nctemp4560= p;
struct nctempchar1 *nctemp4564;
static struct nctempchar1 nctemp4565 = {{ 54}, (char*)"Function arguments does not match forward declaration\0"};
nctemp4564=&nctemp4565;
nctempchar1* nctemp4562= nctemp4564;
struct tree* nctemp4568= p;
nctempchar1* nctemp4570=PtreeGetdef(nctemp4568);
nctempchar1* nctemp4566= nctemp4570;
int nctemp4571=SemSerror(nctemp4560,nctemp4562,nctemp4566);
return 0;
}
return 1;
}
struct tree* nctemp4580= p;
struct tree* nctemp4582=PtreeMvchild(nctemp4580);
struct tree* nctemp4578= nctemp4582;
struct tree* nctemp4583=PtreeMvchild(nctemp4578);
p =nctemp4583;
struct symbol* nctemp4588= tp;
struct symbol* nctemp4590=SymGetable(nctemp4588);
tp =nctemp4590;
struct nctempchar1 *nctemp4597;
static struct nctempchar1 nctemp4598 = {{ 9}, (char*)"#arglist\0"};
nctemp4597=&nctemp4598;
nctempchar1* nctemp4595= nctemp4597;
struct symbol* nctemp4599= tp;
struct symbol* nctemp4601=SymLookup(nctemp4595,nctemp4599);
tp =nctemp4601;
int nctemp4602 = (tp ==0);
if(nctemp4602)
{
struct tree* nctemp4607= p;
struct nctempchar1 *nctemp4611;
static struct nctempchar1 nctemp4612 = {{ 54}, (char*)"Function Arguments does not match forward declaration\0"};
nctemp4611=&nctemp4612;
nctempchar1* nctemp4609= nctemp4611;
nctempchar1* nctemp4613= name;
int nctemp4616=SemSerror(nctemp4607,nctemp4609,nctemp4613);
}
else{
struct symbol* nctemp4621= tp;
struct symbol* nctemp4623=SymGetable(nctemp4621);
tp =nctemp4623;
}
struct symbol* nctemp4628= tp;
struct symbol* nctemp4630=SymMvnext(nctemp4628);
tp =nctemp4630;
int nctemp4631 = (p !=0);
int nctemp4635=nctemp4631;
while(nctemp4635)
{{
struct tree* nctemp4637= p;
struct symbol* nctemp4639= tp;
int nctemp4641=SemArgtype(nctemp4637,nctemp4639);
struct tree* nctemp4646= p;
struct tree* nctemp4648=PtreeMvsister(nctemp4646);
p =nctemp4648;
struct symbol* nctemp4653= tp;
struct symbol* nctemp4655=SymMvnext(nctemp4653);
tp =nctemp4655;
}
int nctemp4656 = (p !=0);
nctemp4635=nctemp4656;}return 1;
}
int SemFdef2 (struct tree* p,struct symbol* tp)
{
struct tree* np;
struct tree* sp;
struct symbol* up;
struct symbol* ftp;
struct symbol* ltp;
struct tree* nctemp4662= p;
struct nctempchar1 *nctemp4666;
static struct nctempchar1 nctemp4667 = {{ 5}, (char*)"fdef\0"};
nctemp4666=&nctemp4667;
nctempchar1* nctemp4664= nctemp4666;
int nctemp4668=PtreeSetname(nctemp4662,nctemp4664);
struct symbol* nctemp4670= tp;
struct nctempchar1 *nctemp4674;
static struct nctempchar1 nctemp4675 = {{ 5}, (char*)"void\0"};
nctemp4674=&nctemp4675;
nctempchar1* nctemp4672= nctemp4674;
int nctemp4676=SymSetforw(nctemp4670,nctemp4672);
struct tree* nctemp4681= p;
struct tree* nctemp4683=PtreeMvchild(nctemp4681);
np =nctemp4683;
struct symbol* nctemp4688=SymMktable();
ltp =nctemp4688;
struct symbol* nctemp4690= ltp;
int nctemp4692=SymSetltp(nctemp4690);
struct nctempchar1 *nctemp4699;
static struct nctempchar1 nctemp4700 = {{ 6}, (char*)"#self\0"};
nctemp4699=&nctemp4700;
nctempchar1* nctemp4697= nctemp4699;
struct symbol* nctemp4701= ltp;
struct symbol* nctemp4703=SymMkname(nctemp4697,nctemp4701);
up =nctemp4703;
struct symbol* nctemp4705= up;
struct tree* nctemp4709= p;
nctempchar1* nctemp4711=PtreeGetdef(nctemp4709);
nctempchar1* nctemp4707= nctemp4711;
int nctemp4712=SymSetfunc(nctemp4705,nctemp4707);
struct tree* nctemp4718= np;
nctempchar1* nctemp4720=PtreeGetname(nctemp4718);
nctempchar1* nctemp4716= nctemp4720;
struct nctempchar1 *nctemp4723;
static struct nctempchar1 nctemp4724 = {{ 8}, (char*)"arglist\0"};
nctemp4723=&nctemp4724;
nctempchar1* nctemp4721= nctemp4723;
int nctemp4725=LibeStrcmp(nctemp4716,nctemp4721);
int nctemp4713 = (nctemp4725 ==1);
if(nctemp4713)
{
struct tree* nctemp4731= np;
struct tree* nctemp4733=PtreeMvsister(nctemp4731);
sp =nctemp4733;
}
else{
sp = np;
}
struct tree* nctemp4739= np;
nctempchar1* nctemp4741=PtreeGetname(nctemp4739);
nctempchar1* nctemp4737= nctemp4741;
struct nctempchar1 *nctemp4744;
static struct nctempchar1 nctemp4745 = {{ 8}, (char*)"arglist\0"};
nctemp4744=&nctemp4745;
nctempchar1* nctemp4742= nctemp4744;
int nctemp4746=LibeStrcmp(nctemp4737,nctemp4742);
int nctemp4734 = (nctemp4746 ==1);
if(nctemp4734)
{
struct tree* nctemp4752= np;
struct tree* nctemp4754=PtreeMvchild(nctemp4752);
np =nctemp4754;
struct nctempchar1 *nctemp4761;
static struct nctempchar1 nctemp4762 = {{ 9}, (char*)"#arglist\0"};
nctemp4761=&nctemp4762;
nctempchar1* nctemp4759= nctemp4761;
struct symbol* nctemp4763= ltp;
struct symbol* nctemp4765=SymMkname(nctemp4759,nctemp4763);
up =nctemp4765;
struct symbol* nctemp4770=SymMktable();
ftp =nctemp4770;
struct symbol* nctemp4772= up;
struct symbol* nctemp4774= ftp;
struct symbol* nctemp4776=SymSetable(nctemp4772,nctemp4774);
struct tree* nctemp4778= np;
struct symbol* nctemp4780= ftp;
int nctemp4782=SemDeclarations(nctemp4778,nctemp4780);
}
struct tree* nctemp4784= p;
struct symbol* nctemp4786= tp;
int nctemp4788=SemArgtypes(nctemp4784,nctemp4786);
struct symbol* nctemp4790= tp;
int nctemp4792= 1;
int nctemp4794=SymSetemit(nctemp4790,nctemp4792);
struct tree* nctemp4796= sp;
int nctemp4798=SemCompstmnt(nctemp4796);
struct tree* nctemp4800= p;
struct tree* nctemp4802= sp;
int nctemp4804=SemCopyparallel(nctemp4800,nctemp4802);
return 1;
}
int Semisnobody (struct tree* p)
{
struct tree* np;
struct tree* nctemp4810= p;
struct tree* nctemp4812=PtreeMvchild(nctemp4810);
np =nctemp4812;
struct tree* nctemp4818= np;
nctempchar1* nctemp4820=PtreeGetname(nctemp4818);
nctempchar1* nctemp4816= nctemp4820;
struct nctempchar1 *nctemp4823;
static struct nctempchar1 nctemp4824 = {{ 8}, (char*)"arglist\0"};
nctemp4823=&nctemp4824;
nctempchar1* nctemp4821= nctemp4823;
int nctemp4825=LibeStrcmp(nctemp4816,nctemp4821);
int nctemp4813 = (nctemp4825 ==1);
if(nctemp4813)
{
struct tree* nctemp4831= np;
struct tree* nctemp4833=PtreeMvsister(nctemp4831);
np =nctemp4833;
struct tree* nctemp4838= np;
struct tree* nctemp4840=PtreeMvchild(nctemp4838);
np =nctemp4840;
int nctemp4841 = (np ==0);
if(nctemp4841)
{
return 1;
}
else{
return 0;
}
}
else{
struct tree* nctemp4852= np;
nctempchar1* nctemp4854=PtreeGetname(nctemp4852);
nctempchar1* nctemp4850= nctemp4854;
struct nctempchar1 *nctemp4857;
static struct nctempchar1 nctemp4858 = {{ 10}, (char*)"compstmnt\0"};
nctemp4857=&nctemp4858;
nctempchar1* nctemp4855= nctemp4857;
int nctemp4859=LibeStrcmp(nctemp4850,nctemp4855);
int nctemp4847 = (nctemp4859 ==1);
if(nctemp4847)
{
struct tree* nctemp4865= np;
struct tree* nctemp4867=PtreeMvchild(nctemp4865);
np =nctemp4867;
int nctemp4868 = (np ==0);
if(nctemp4868)
{
return 1;
}
else{
return 0;
}
}
}
return 0;
}
int SemFdef (struct tree* p,struct symbol* tp)
{
struct tree* np;
struct tree* sp;
struct symbol* fname;
struct symbol* fsub;
struct symbol* arg;
struct symbol* argsub;
struct symbol* up;
struct symbol* ftp;
struct symbol* ltp;
struct symbol* qp;
int rank;
int nobody;
struct tree* nctemp4878= p;
nctempchar1* nctemp4880=PtreeGetarray(nctemp4878);
nctempchar1* nctemp4876= nctemp4880;
struct nctempchar1 *nctemp4883;
static struct nctempchar1 nctemp4884 = {{ 6}, (char*)"array\0"};
nctemp4883=&nctemp4884;
nctempchar1* nctemp4881= nctemp4883;
int nctemp4885=LibeStrcmp(nctemp4876,nctemp4881);
if(nctemp4885)
{
rank = 1;
struct tree* nctemp4890= p;
struct tree* nctemp4892=PtreeMvchild(nctemp4890);
np =nctemp4892;
struct tree* nctemp4897= np;
struct tree* nctemp4899=PtreeMvchild(nctemp4897);
sp =nctemp4899;
struct tree* nctemp4904= np;
struct tree* nctemp4906=PtreeMvsister(nctemp4904);
np =nctemp4906;
struct tree* nctemp4914= sp;
struct tree* nctemp4916=PtreeMvsister(nctemp4914);
sp =nctemp4916;
int nctemp4907 = (sp !=0);
int nctemp4918=nctemp4907;
while(nctemp4918)
{{
rank = (rank + 1);
}
struct tree* nctemp4926= sp;
struct tree* nctemp4928=PtreeMvsister(nctemp4926);
sp =nctemp4928;
int nctemp4919 = (sp !=0);
nctemp4918=nctemp4919;}}
else{
rank = 0;
struct tree* nctemp4934= p;
struct tree* nctemp4936=PtreeMvchild(nctemp4934);
np =nctemp4936;
}
struct tree* nctemp4938= p;
int nctemp4940= rank;
int nctemp4942=PtreeSetrank(nctemp4938,nctemp4940);
struct tree* nctemp4944= p;
struct tree* nctemp4946= np;
int nctemp4948=SemCopytype(nctemp4944,nctemp4946);
struct tree* nctemp4950= np;
struct tree* nctemp4954= p;
nctempchar1* nctemp4956=PtreeGetdef(nctemp4954);
nctempchar1* nctemp4952= nctemp4956;
int nctemp4957=PtreeSetype(nctemp4950,nctemp4952);
p = np;
nobody = 0;
struct tree* nctemp4961= p;
int nctemp4963=Semisnobody(nctemp4961);
int nctemp4958 = (nctemp4963 ==1);
if(nctemp4958)
{
struct tree* nctemp4966= p;
struct nctempchar1 *nctemp4970;
static struct nctempchar1 nctemp4971 = {{ 5}, (char*)"forw\0"};
nctemp4970=&nctemp4971;
nctempchar1* nctemp4968= nctemp4970;
int nctemp4972=PtreeSetforw(nctemp4966,nctemp4968);
nobody = 1;
}
struct tree* nctemp4982= p;
nctempchar1* nctemp4984=PtreeGetdef(nctemp4982);
nctempchar1* nctemp4980= nctemp4984;
struct symbol* nctemp4985= tp;
struct symbol* nctemp4987=SymMkname(nctemp4980,nctemp4985);
fname =nctemp4987;
int nctemp4973 = (fname ==0);
if(nctemp4973)
{
struct tree* nctemp4995= p;
nctempchar1* nctemp4997=PtreeGetdef(nctemp4995);
nctempchar1* nctemp4993= nctemp4997;
struct symbol* nctemp4998= tp;
struct symbol* nctemp5000=SymLookup(nctemp4993,nctemp4998);
qp =nctemp5000;
struct symbol* nctemp5006= qp;
nctempchar1* nctemp5008=SymGetforw(nctemp5006);
nctempchar1* nctemp5004= nctemp5008;
struct nctempchar1 *nctemp5011;
static struct nctempchar1 nctemp5012 = {{ 5}, (char*)"forw\0"};
nctemp5011=&nctemp5012;
nctempchar1* nctemp5009= nctemp5011;
int nctemp5013=LibeStrcmp(nctemp5004,nctemp5009);
int nctemp5001 = (nctemp5013 !=1);
if(nctemp5001)
{
struct tree* nctemp5016= np;
struct nctempchar1 *nctemp5020;
static struct nctempchar1 nctemp5021 = {{ 25}, (char*)"Function already defined\0"};
nctemp5020=&nctemp5021;
nctempchar1* nctemp5018= nctemp5020;
struct tree* nctemp5024= p;
nctempchar1* nctemp5026=PtreeGetdef(nctemp5024);
nctempchar1* nctemp5022= nctemp5026;
int nctemp5027=SemSerror(nctemp5016,nctemp5018,nctemp5022);
}
else{
struct tree* nctemp5029= p;
struct symbol* nctemp5031= qp;
int nctemp5033=SemFdef2(nctemp5029,nctemp5031);
return 1;
}
}
struct symbol* nctemp5036= fname;
struct tree* nctemp5040= p;
nctempchar1* nctemp5042=PtreeGetype(nctemp5040);
nctempchar1* nctemp5038= nctemp5042;
int nctemp5043=SymSetype(nctemp5036,nctemp5038);
struct symbol* nctemp5045= fname;
struct tree* nctemp5049= p;
nctempchar1* nctemp5051=PtreeGetstruct(nctemp5049);
nctempchar1* nctemp5047= nctemp5051;
int nctemp5052=SymSetstruct(nctemp5045,nctemp5047);
struct symbol* nctemp5054= fname;
struct tree* nctemp5058= p;
nctempchar1* nctemp5060=PtreeGetarray(nctemp5058);
nctempchar1* nctemp5056= nctemp5060;
int nctemp5061=SymSetarray(nctemp5054,nctemp5056);
struct symbol* nctemp5063= fname;
struct tree* nctemp5067= p;
int nctemp5069=PtreeGetrank(nctemp5067);
int nctemp5065= nctemp5069;
int nctemp5070=SymSetrank(nctemp5063,nctemp5065);
struct symbol* nctemp5072= fname;
struct nctempchar1 *nctemp5076;
static struct nctempchar1 nctemp5077 = {{ 5}, (char*)"fdef\0"};
nctemp5076=&nctemp5077;
nctempchar1* nctemp5074= nctemp5076;
int nctemp5078=SymSetfunc(nctemp5072,nctemp5074);
int nctemp5079 = (nobody ==1);
if(nctemp5079)
{
struct symbol* nctemp5084= fname;
struct nctempchar1 *nctemp5088;
static struct nctempchar1 nctemp5089 = {{ 5}, (char*)"forw\0"};
nctemp5088=&nctemp5089;
nctempchar1* nctemp5086= nctemp5088;
int nctemp5090=SymSetforw(nctemp5084,nctemp5086);
}
struct tree* nctemp5095= p;
struct tree* nctemp5097=PtreeMvchild(nctemp5095);
np =nctemp5097;
struct symbol* nctemp5102=SymMktable();
ltp =nctemp5102;
struct symbol* nctemp5104= ltp;
int nctemp5106=SymSetltp(nctemp5104);
struct nctempchar1 *nctemp5113;
static struct nctempchar1 nctemp5114 = {{ 6}, (char*)"#self\0"};
nctemp5113=&nctemp5114;
nctempchar1* nctemp5111= nctemp5113;
struct symbol* nctemp5115= ltp;
struct symbol* nctemp5117=SymMkname(nctemp5111,nctemp5115);
up =nctemp5117;
struct symbol* nctemp5119= up;
struct tree* nctemp5123= p;
nctempchar1* nctemp5125=PtreeGetdef(nctemp5123);
nctempchar1* nctemp5121= nctemp5125;
int nctemp5126=SymSetfunc(nctemp5119,nctemp5121);
struct tree* nctemp5132= np;
nctempchar1* nctemp5134=PtreeGetname(nctemp5132);
nctempchar1* nctemp5130= nctemp5134;
struct nctempchar1 *nctemp5137;
static struct nctempchar1 nctemp5138 = {{ 8}, (char*)"arglist\0"};
nctemp5137=&nctemp5138;
nctempchar1* nctemp5135= nctemp5137;
int nctemp5139=LibeStrcmp(nctemp5130,nctemp5135);
int nctemp5127 = (nctemp5139 ==1);
if(nctemp5127)
{
struct tree* nctemp5145= np;
struct tree* nctemp5147=PtreeMvsister(nctemp5145);
sp =nctemp5147;
}
else{
sp = np;
}
struct tree* nctemp5153= np;
nctempchar1* nctemp5155=PtreeGetname(nctemp5153);
nctempchar1* nctemp5151= nctemp5155;
struct nctempchar1 *nctemp5158;
static struct nctempchar1 nctemp5159 = {{ 8}, (char*)"arglist\0"};
nctemp5158=&nctemp5159;
nctempchar1* nctemp5156= nctemp5158;
int nctemp5160=LibeStrcmp(nctemp5151,nctemp5156);
int nctemp5148 = (nctemp5160 ==1);
if(nctemp5148)
{
struct tree* nctemp5166= np;
struct tree* nctemp5168=PtreeMvchild(nctemp5166);
np =nctemp5168;
struct nctempchar1 *nctemp5175;
static struct nctempchar1 nctemp5176 = {{ 9}, (char*)"#arglist\0"};
nctemp5175=&nctemp5176;
nctempchar1* nctemp5173= nctemp5175;
struct symbol* nctemp5177= ltp;
struct symbol* nctemp5179=SymMkname(nctemp5173,nctemp5177);
up =nctemp5179;
struct symbol* nctemp5184=SymMktable();
ftp =nctemp5184;
struct symbol* nctemp5186= up;
struct symbol* nctemp5188= ftp;
struct symbol* nctemp5190=SymSetable(nctemp5186,nctemp5188);
struct tree* nctemp5192= np;
struct symbol* nctemp5194= ftp;
int nctemp5196=SemDeclarations(nctemp5192,nctemp5194);
struct symbol* nctemp5201=SymMktable();
fsub =nctemp5201;
struct symbol* nctemp5203= fname;
struct symbol* nctemp5205= fsub;
struct symbol* nctemp5207=SymSetable(nctemp5203,nctemp5205);
struct nctempchar1 *nctemp5214;
static struct nctempchar1 nctemp5215 = {{ 9}, (char*)"#arglist\0"};
nctemp5214=&nctemp5215;
nctempchar1* nctemp5212= nctemp5214;
struct symbol* nctemp5216= fsub;
struct symbol* nctemp5218=SymMkname(nctemp5212,nctemp5216);
arg =nctemp5218;
struct symbol* nctemp5223=SymMktable();
argsub =nctemp5223;
struct symbol* nctemp5225= arg;
struct symbol* nctemp5227= argsub;
struct symbol* nctemp5229=SymSetable(nctemp5225,nctemp5227);
struct symbol* nctemp5231= ftp;
struct symbol* nctemp5233= argsub;
int nctemp5235=SymCpytble(nctemp5231,nctemp5233);
}
struct tree* nctemp5237= sp;
int nctemp5239=SemCompstmnt(nctemp5237);
struct tree* nctemp5241= p;
struct tree* nctemp5243= sp;
int nctemp5245=SemCopyparallel(nctemp5241,nctemp5243);
return 1;
}
int SemExtdecl (struct tree* p)
{
struct tree* sp;
struct tree* np;
struct tree* nctemp5250= p;
nctempchar1* nctemp5252=PtreeGetname(nctemp5250);
nctempchar1* nctemp5248= nctemp5252;
struct nctempchar1 *nctemp5255;
static struct nctempchar1 nctemp5256 = {{ 8}, (char*)"extdecl\0"};
nctemp5255=&nctemp5256;
nctempchar1* nctemp5253= nctemp5255;
int nctemp5257=LibeStrcmp(nctemp5248,nctemp5253);
if(nctemp5257)
{
struct tree* nctemp5262= p;
struct tree* nctemp5264=PtreeMvchild(nctemp5262);
np =nctemp5264;
struct tree* nctemp5266= np;
struct nctempchar1 *nctemp5270;
static struct nctempchar1 nctemp5271 = {{ 7}, (char*)"global\0"};
nctemp5270=&nctemp5271;
nctempchar1* nctemp5268= nctemp5270;
int nctemp5272=PtreeSetglobal(nctemp5266,nctemp5268);
struct tree* nctemp5278= np;
nctempchar1* nctemp5280=PtreeGetname(nctemp5278);
nctempchar1* nctemp5276= nctemp5280;
struct nctempchar1 *nctemp5283;
static struct nctempchar1 nctemp5284 = {{ 7}, (char*)"import\0"};
nctemp5283=&nctemp5284;
nctempchar1* nctemp5281= nctemp5283;
int nctemp5285=LibeStrcmp(nctemp5276,nctemp5281);
int nctemp5273 = (nctemp5285 ==1);
if(nctemp5273)
{
struct tree* nctemp5288= np;
struct symbol* nctemp5292=SymGetetp();
struct symbol* nctemp5290= nctemp5292;
int nctemp5293=SemImport(nctemp5288,nctemp5290);
return 1;
}
int nctemp5295 = (np !=0);
int nctemp5299=nctemp5295;
while(nctemp5299)
{{
struct tree* nctemp5304= np;
struct tree* nctemp5306=PtreeMvchild(nctemp5304);
sp =nctemp5306;
struct tree* nctemp5310= np;
nctempchar1* nctemp5312=PtreeGetarray(nctemp5310);
nctempchar1* nctemp5308= nctemp5312;
struct nctempchar1 *nctemp5315;
static struct nctempchar1 nctemp5316 = {{ 6}, (char*)"array\0"};
nctemp5315=&nctemp5316;
nctempchar1* nctemp5313= nctemp5315;
int nctemp5317=LibeStrcmp(nctemp5308,nctemp5313);
if(nctemp5317)
{
struct tree* nctemp5322= sp;
struct tree* nctemp5324=PtreeMvsister(nctemp5322);
sp =nctemp5324;
}
struct tree* nctemp5328= sp;
nctempchar1* nctemp5330=PtreeGetname(nctemp5328);
nctempchar1* nctemp5326= nctemp5330;
struct nctempchar1 *nctemp5333;
static struct nctempchar1 nctemp5334 = {{ 10}, (char*)"structdec\0"};
nctemp5333=&nctemp5334;
nctempchar1* nctemp5331= nctemp5333;
int nctemp5335=LibeStrcmp(nctemp5326,nctemp5331);
if(nctemp5335)
{
struct tree* nctemp5337= np;
struct symbol* nctemp5341=SymGetetp();
struct symbol* nctemp5339= nctemp5341;
int nctemp5342=SemStructdecl(nctemp5337,nctemp5339);
}
else{
struct tree* nctemp5346= sp;
nctempchar1* nctemp5348=PtreeGetname(nctemp5346);
nctempchar1* nctemp5344= nctemp5348;
struct nctempchar1 *nctemp5351;
static struct nctempchar1 nctemp5352 = {{ 5}, (char*)"fdef\0"};
nctemp5351=&nctemp5352;
nctempchar1* nctemp5349= nctemp5351;
int nctemp5353=LibeStrcmp(nctemp5344,nctemp5349);
if(nctemp5353)
{
struct tree* nctemp5355= np;
struct symbol* nctemp5359=SymGetetp();
struct symbol* nctemp5357= nctemp5359;
int nctemp5360=SemFdef(nctemp5355,nctemp5357);
}
else{
struct tree* nctemp5362= np;
struct symbol* nctemp5366=SymGetetp();
struct symbol* nctemp5364= nctemp5366;
int nctemp5367=SemDeclaration(nctemp5362,nctemp5364);
}
}
struct tree* nctemp5372= np;
struct tree* nctemp5374=PtreeMvsister(nctemp5372);
np =nctemp5374;
}
int nctemp5375 = (np !=0);
nctemp5299=nctemp5375;}}
return 1;
}
int SemSem (struct tree* p,struct symbol* tp)
{
struct symbol* ltp;
struct symbol* nctemp5381= tp;
int nctemp5383=SymSetetp(nctemp5381);
ltp = 0;
struct symbol* nctemp5385= ltp;
int nctemp5387=SymSetltp(nctemp5385);
int nctemp5389= 0;
int nctemp5391=SemSetsimple(nctemp5389);
struct tree* nctemp5393= p;
int nctemp5395=SemExtdecl(nctemp5393);
return 1;
}
int SemWhilestmnt (struct tree* p)
{
struct tree* q;
q = p;
struct tree* nctemp5401= p;
struct tree* nctemp5403=PtreeMvchild(nctemp5401);
p =nctemp5403;
struct tree* nctemp5405= p;
struct tree* nctemp5407=SemExpr(nctemp5405);
struct tree* nctemp5409= p;
int nctemp5411= 1;
int nctemp5413=PtreeSetopexpr(nctemp5409,nctemp5411);
struct tree* nctemp5418= p;
struct tree* nctemp5420=PtreeMvsister(nctemp5418);
p =nctemp5420;
struct tree* nctemp5422= p;
int nctemp5424=SemStmnt(nctemp5422);
struct tree* nctemp5426= q;
struct tree* nctemp5428= p;
int nctemp5430=SemCopyparallel(nctemp5426,nctemp5428);
return 1;
}
int SemForstmnt (struct tree* p)
{
struct tree* q;
q = p;
struct tree* nctemp5436= p;
struct tree* nctemp5438=PtreeMvchild(nctemp5436);
p =nctemp5438;
struct tree* nctemp5440= p;
int nctemp5442= 1;
int nctemp5444=PtreeSetopexpr(nctemp5440,nctemp5442);
int nctemp5446= 1;
int nctemp5448=SemSetsimple(nctemp5446);
struct tree* nctemp5450= p;
struct tree* nctemp5452=SemExpr(nctemp5450);
struct tree* nctemp5457= p;
struct tree* nctemp5459=PtreeMvsister(nctemp5457);
p =nctemp5459;
struct tree* nctemp5461= p;
int nctemp5463= 1;
int nctemp5465=PtreeSetopexpr(nctemp5461,nctemp5463);
int nctemp5467= 1;
int nctemp5469=SemSetsimple(nctemp5467);
struct tree* nctemp5471= p;
struct tree* nctemp5473=SemExpr(nctemp5471);
struct tree* nctemp5478= p;
struct tree* nctemp5480=PtreeMvsister(nctemp5478);
p =nctemp5480;
struct tree* nctemp5482= p;
int nctemp5484= 1;
int nctemp5486=PtreeSetopexpr(nctemp5482,nctemp5484);
int nctemp5488= 1;
int nctemp5490=SemSetsimple(nctemp5488);
struct tree* nctemp5492= p;
struct tree* nctemp5494=SemExpr(nctemp5492);
struct tree* nctemp5499= p;
struct tree* nctemp5501=PtreeMvsister(nctemp5499);
p =nctemp5501;
struct tree* nctemp5503= p;
int nctemp5505=SemStmnt(nctemp5503);
struct tree* nctemp5507= q;
struct tree* nctemp5509= p;
int nctemp5511=SemCopyparallel(nctemp5507,nctemp5509);
return 1;
}
int SemParallelstmnt (struct tree* p)
{
struct tree* sp;
struct tree* rp;
int rank;
rank = 0;
struct tree* nctemp5517= p;
struct tree* nctemp5519=PtreeMvchild(nctemp5517);
sp =nctemp5519;
struct tree* nctemp5524= sp;
struct tree* nctemp5526=PtreeMvchild(nctemp5524);
sp =nctemp5526;
int nctemp5527 = (sp !=0);
int nctemp5531=nctemp5527;
while(nctemp5531)
{{
struct tree* nctemp5536= sp;
struct tree* nctemp5538=PtreeMvchild(nctemp5536);
rp =nctemp5538;
struct tree* nctemp5540= rp;
struct tree* nctemp5542=SemExpr(nctemp5540);
struct tree* nctemp5544= rp;
int nctemp5546= 1;
int nctemp5548=PtreeSetopexpr(nctemp5544,nctemp5546);
struct tree* nctemp5553= rp;
struct tree* nctemp5555=PtreeMvsister(nctemp5553);
rp =nctemp5555;
struct tree* nctemp5557= rp;
struct tree* nctemp5559=SemExpr(nctemp5557);
struct tree* nctemp5561= rp;
int nctemp5563= 1;
int nctemp5565=PtreeSetopexpr(nctemp5561,nctemp5563);
struct tree* nctemp5573= rp;
struct tree* nctemp5575=PtreeMvsister(nctemp5573);
rp =nctemp5575;
int nctemp5566 = (rp !=0);
if(nctemp5566)
{
struct tree* nctemp5578= rp;
struct tree* nctemp5580=SemExpr(nctemp5578);
struct tree* nctemp5582= rp;
int nctemp5584= 1;
int nctemp5586=PtreeSetopexpr(nctemp5582,nctemp5584);
}
struct tree* nctemp5590= sp;
struct tree* nctemp5592=PtreeMvsister(nctemp5590);
int nctemp5587 = (nctemp5592 !=0);
if(nctemp5587)
{
struct tree* nctemp5598= sp;
struct tree* nctemp5600=PtreeMvsister(nctemp5598);
rp =nctemp5600;
}
struct tree* nctemp5605= sp;
struct tree* nctemp5607=PtreeMvsister(nctemp5605);
sp =nctemp5607;
rank = (rank + 1);
}
int nctemp5608 = (sp !=0);
nctemp5531=nctemp5608;}struct tree* nctemp5613= p;
int nctemp5615= rank;
int nctemp5617=PtreeSetrank(nctemp5613,nctemp5615);
struct tree* nctemp5622= p;
struct tree* nctemp5624=PtreeMvchild(nctemp5622);
sp =nctemp5624;
struct tree* nctemp5629= sp;
struct tree* nctemp5631=PtreeMvsister(nctemp5629);
sp =nctemp5631;
struct tree* nctemp5633= sp;
int nctemp5635=SemStmnt(nctemp5633);
return 1;
}
int SemIfstmnt (struct tree* p)
{
struct tree* q;
q = p;
struct tree* nctemp5641= p;
struct tree* nctemp5643=PtreeMvchild(nctemp5641);
p =nctemp5643;
struct tree* nctemp5645= p;
struct tree* nctemp5647=SemExpr(nctemp5645);
struct tree* nctemp5649= p;
int nctemp5651= 1;
int nctemp5653=PtreeSetopexpr(nctemp5649,nctemp5651);
struct tree* nctemp5658= p;
struct tree* nctemp5660=PtreeMvsister(nctemp5658);
p =nctemp5660;
struct tree* nctemp5662= p;
int nctemp5664=SemStmnt(nctemp5662);
struct tree* nctemp5666= q;
struct tree* nctemp5668= p;
int nctemp5670=SemCopyparallel(nctemp5666,nctemp5668);
struct tree* nctemp5678= p;
struct tree* nctemp5680=PtreeMvsister(nctemp5678);
p =nctemp5680;
int nctemp5671 = (p !=0);
if(nctemp5671)
{
struct tree* nctemp5685= p;
nctempchar1* nctemp5687=PtreeGetname(nctemp5685);
nctempchar1* nctemp5683= nctemp5687;
struct nctempchar1 *nctemp5690;
static struct nctempchar1 nctemp5691 = {{ 5}, (char*)"else\0"};
nctemp5690=&nctemp5691;
nctempchar1* nctemp5688= nctemp5690;
int nctemp5692=LibeStrcmp(nctemp5683,nctemp5688);
if(nctemp5692)
{
struct tree* nctemp5697= p;
struct tree* nctemp5699=PtreeMvchild(nctemp5697);
p =nctemp5699;
struct tree* nctemp5701= p;
int nctemp5703=SemStmnt(nctemp5701);
}
}
return 1;
}
int SemReturnstmnt (struct tree* p)
{
struct tree* sp;
struct symbol* up;
struct tree* nctemp5709= p;
struct tree* nctemp5711=PtreeMvchild(nctemp5709);
sp =nctemp5711;
int nctemp5712 = (sp !=0);
if(nctemp5712)
{
struct tree* nctemp5717= sp;
struct tree* nctemp5719=SemExpr(nctemp5717);
struct tree* nctemp5721= sp;
int nctemp5723= 1;
int nctemp5725=PtreeSetopexpr(nctemp5721,nctemp5723);
struct nctempchar1 *nctemp5732;
static struct nctempchar1 nctemp5733 = {{ 6}, (char*)"#self\0"};
nctemp5732=&nctemp5733;
nctempchar1* nctemp5730= nctemp5732;
struct symbol* nctemp5736=SymGetltp();
struct symbol* nctemp5734= nctemp5736;
struct symbol* nctemp5737=SymLookup(nctemp5730,nctemp5734);
up =nctemp5737;
struct symbol* nctemp5744= up;
nctempchar1* nctemp5746=SymGetfunc(nctemp5744);
nctempchar1* nctemp5742= nctemp5746;
struct symbol* nctemp5747=SymLook(nctemp5742);
up =nctemp5747;
struct tree* nctemp5749= p;
struct symbol* nctemp5753= up;
nctempchar1* nctemp5755=SymGetype(nctemp5753);
nctempchar1* nctemp5751= nctemp5755;
int nctemp5756=PtreeSetype(nctemp5749,nctemp5751);
struct tree* nctemp5758= p;
struct symbol* nctemp5762= up;
nctempchar1* nctemp5764=SymGetstruct(nctemp5762);
nctempchar1* nctemp5760= nctemp5764;
int nctemp5765=PtreeSetstruct(nctemp5758,nctemp5760);
struct tree* nctemp5767= p;
struct symbol* nctemp5771= up;
nctempchar1* nctemp5773=SymGetarray(nctemp5771);
nctempchar1* nctemp5769= nctemp5773;
int nctemp5774=PtreeSetarray(nctemp5767,nctemp5769);
struct tree* nctemp5776= p;
struct tree* nctemp5780= sp;
nctempchar1* nctemp5782=PtreeGetref(nctemp5780);
nctempchar1* nctemp5778= nctemp5782;
int nctemp5783=PtreeSetref(nctemp5776,nctemp5778);
struct tree* nctemp5785= p;
struct symbol* nctemp5789= up;
int nctemp5791=SymGetrank(nctemp5789);
int nctemp5787= nctemp5791;
int nctemp5792=PtreeSetrank(nctemp5785,nctemp5787);
struct tree* nctemp5796= p;
struct tree* nctemp5798= sp;
int nctemp5800=SemComparetype(nctemp5796,nctemp5798);
int nctemp5793 = (nctemp5800 ==0);
if(nctemp5793)
{
struct tree* nctemp5803= p;
struct nctempchar1 *nctemp5807;
static struct nctempchar1 nctemp5808 = {{ 26}, (char*)"Return type is incorrect \0"};
nctemp5807=&nctemp5808;
nctempchar1* nctemp5805= nctemp5807;
struct nctempchar1 *nctemp5811;
static struct nctempchar1 nctemp5812 = {{ 2}, (char*)" \0"};
nctemp5811=&nctemp5812;
nctempchar1* nctemp5809= nctemp5811;
int nctemp5813=SemSerror(nctemp5803,nctemp5805,nctemp5809);
}
}
return 1;
}
int SemStmnt (struct tree* p)
{
struct tree* q;
int parflag;
parflag = 0;
q = p;
struct tree* nctemp5818= p;
nctempchar1* nctemp5820=PtreeGetname(nctemp5818);
nctempchar1* nctemp5816= nctemp5820;
struct nctempchar1 *nctemp5823;
static struct nctempchar1 nctemp5824 = {{ 13}, (char*)"declarations\0"};
nctemp5823=&nctemp5824;
nctempchar1* nctemp5821= nctemp5823;
int nctemp5825=LibeStrcmp(nctemp5816,nctemp5821);
if(nctemp5825)
{
struct tree* nctemp5827= p;
struct symbol* nctemp5831=SymGetltp();
struct symbol* nctemp5829= nctemp5831;
int nctemp5832=SemDeclarations(nctemp5827,nctemp5829);
struct tree* nctemp5837= p;
struct tree* nctemp5839=PtreeMvsister(nctemp5837);
p =nctemp5839;
}
int nctemp5840 = (p !=0);
int nctemp5844=nctemp5840;
while(nctemp5844)
{{
struct tree* nctemp5848= p;
nctempchar1* nctemp5850=PtreeGetname(nctemp5848);
nctempchar1* nctemp5846= nctemp5850;
struct nctempchar1 *nctemp5853;
static struct nctempchar1 nctemp5854 = {{ 5}, (char*)"expr\0"};
nctemp5853=&nctemp5854;
nctempchar1* nctemp5851= nctemp5853;
int nctemp5855=LibeStrcmp(nctemp5846,nctemp5851);
if(nctemp5855)
{
struct tree* nctemp5857= p;
int nctemp5859= 1;
int nctemp5861=PtreeSetopexpr(nctemp5857,nctemp5859);
int nctemp5863= 1;
int nctemp5865=SemSetsimple(nctemp5863);
struct tree* nctemp5867= p;
struct tree* nctemp5869=SemExpr(nctemp5867);
struct tree* nctemp5871= p;
int nctemp5873= 1;
int nctemp5875=PtreeSetopexpr(nctemp5871,nctemp5873);
}
struct tree* nctemp5879= p;
nctempchar1* nctemp5881=PtreeGetname(nctemp5879);
nctempchar1* nctemp5877= nctemp5881;
struct nctempchar1 *nctemp5884;
static struct nctempchar1 nctemp5885 = {{ 10}, (char*)"compstmnt\0"};
nctemp5884=&nctemp5885;
nctempchar1* nctemp5882= nctemp5884;
int nctemp5886=LibeStrcmp(nctemp5877,nctemp5882);
if(nctemp5886)
{
struct tree* nctemp5888= p;
int nctemp5890=SemCompstmnt(nctemp5888);
}
struct tree* nctemp5894= p;
nctempchar1* nctemp5896=PtreeGetname(nctemp5894);
nctempchar1* nctemp5892= nctemp5896;
struct nctempchar1 *nctemp5899;
static struct nctempchar1 nctemp5900 = {{ 6}, (char*)"while\0"};
nctemp5899=&nctemp5900;
nctempchar1* nctemp5897= nctemp5899;
int nctemp5901=LibeStrcmp(nctemp5892,nctemp5897);
if(nctemp5901)
{
struct tree* nctemp5903= p;
int nctemp5905=SemWhilestmnt(nctemp5903);
}
struct tree* nctemp5909= p;
nctempchar1* nctemp5911=PtreeGetname(nctemp5909);
nctempchar1* nctemp5907= nctemp5911;
struct nctempchar1 *nctemp5914;
static struct nctempchar1 nctemp5915 = {{ 4}, (char*)"for\0"};
nctemp5914=&nctemp5915;
nctempchar1* nctemp5912= nctemp5914;
int nctemp5916=LibeStrcmp(nctemp5907,nctemp5912);
if(nctemp5916)
{
struct tree* nctemp5918= p;
int nctemp5920=SemForstmnt(nctemp5918);
}
struct tree* nctemp5924= p;
nctempchar1* nctemp5926=PtreeGetname(nctemp5924);
nctempchar1* nctemp5922= nctemp5926;
struct nctempchar1 *nctemp5929;
static struct nctempchar1 nctemp5930 = {{ 9}, (char*)"parallel\0"};
nctemp5929=&nctemp5930;
nctempchar1* nctemp5927= nctemp5929;
int nctemp5931=LibeStrcmp(nctemp5922,nctemp5927);
if(nctemp5931)
{
parflag = 1;
}
struct tree* nctemp5935= p;
nctempchar1* nctemp5937=PtreeGetname(nctemp5935);
nctempchar1* nctemp5933= nctemp5937;
struct nctempchar1 *nctemp5940;
static struct nctempchar1 nctemp5941 = {{ 3}, (char*)"if\0"};
nctemp5940=&nctemp5941;
nctempchar1* nctemp5938= nctemp5940;
int nctemp5942=LibeStrcmp(nctemp5933,nctemp5938);
if(nctemp5942)
{
struct tree* nctemp5944= p;
int nctemp5946=SemIfstmnt(nctemp5944);
}
struct tree* nctemp5950= p;
nctempchar1* nctemp5952=PtreeGetname(nctemp5950);
nctempchar1* nctemp5948= nctemp5952;
struct nctempchar1 *nctemp5955;
static struct nctempchar1 nctemp5956 = {{ 7}, (char*)"return\0"};
nctemp5955=&nctemp5956;
nctempchar1* nctemp5953= nctemp5955;
int nctemp5957=LibeStrcmp(nctemp5948,nctemp5953);
if(nctemp5957)
{
struct tree* nctemp5959= p;
int nctemp5961=SemReturnstmnt(nctemp5959);
}
struct tree* nctemp5966= p;
struct tree* nctemp5968=PtreeMvsister(nctemp5966);
p =nctemp5968;
}
int nctemp5969 = (p !=0);
nctemp5844=nctemp5969;}int nctemp5973 = (parflag ==1);
if(nctemp5973)
{
struct tree* nctemp5978= q;
struct nctempchar1 *nctemp5982;
static struct nctempchar1 nctemp5983 = {{ 9}, (char*)"parallel\0"};
nctemp5982=&nctemp5983;
nctempchar1* nctemp5980= nctemp5982;
int nctemp5984=PtreeSetparallel(nctemp5978,nctemp5980);
}
return 1;
}
int SemCompstmnt (struct tree* p)
{
struct tree* q;
int parflag;
parflag = 0;
q = p;
struct tree* nctemp5990= p;
struct tree* nctemp5992=PtreeMvchild(nctemp5990);
p =nctemp5992;
int nctemp5993 = (p ==0);
if(nctemp5993)
{
return 1;
}
struct tree* nctemp6001= p;
nctempchar1* nctemp6003=PtreeGetname(nctemp6001);
nctempchar1* nctemp5999= nctemp6003;
struct nctempchar1 *nctemp6006;
static struct nctempchar1 nctemp6007 = {{ 13}, (char*)"declarations\0"};
nctemp6006=&nctemp6007;
nctempchar1* nctemp6004= nctemp6006;
int nctemp6008=LibeStrcmp(nctemp5999,nctemp6004);
if(nctemp6008)
{
struct tree* nctemp6012= p;
struct tree* nctemp6014=PtreeMvchild(nctemp6012);
struct tree* nctemp6010= nctemp6014;
struct symbol* nctemp6017=SymGetltp();
struct symbol* nctemp6015= nctemp6017;
int nctemp6018=SemDeclarations(nctemp6010,nctemp6015);
struct tree* nctemp6023= p;
struct tree* nctemp6025=PtreeMvsister(nctemp6023);
p =nctemp6025;
}
int nctemp6026 = (p !=0);
int nctemp6030=nctemp6026;
while(nctemp6030)
{{
struct tree* nctemp6034= p;
nctempchar1* nctemp6036=PtreeGetname(nctemp6034);
nctempchar1* nctemp6032= nctemp6036;
struct nctempchar1 *nctemp6039;
static struct nctempchar1 nctemp6040 = {{ 5}, (char*)"expr\0"};
nctemp6039=&nctemp6040;
nctempchar1* nctemp6037= nctemp6039;
int nctemp6041=LibeStrcmp(nctemp6032,nctemp6037);
if(nctemp6041)
{
struct tree* nctemp6043= p;
int nctemp6045= 1;
int nctemp6047=PtreeSetopexpr(nctemp6043,nctemp6045);
int nctemp6049= 1;
int nctemp6051=SemSetsimple(nctemp6049);
struct tree* nctemp6053= p;
struct tree* nctemp6055=SemExpr(nctemp6053);
}
struct tree* nctemp6059= p;
nctempchar1* nctemp6061=PtreeGetname(nctemp6059);
nctempchar1* nctemp6057= nctemp6061;
struct nctempchar1 *nctemp6064;
static struct nctempchar1 nctemp6065 = {{ 6}, (char*)"while\0"};
nctemp6064=&nctemp6065;
nctempchar1* nctemp6062= nctemp6064;
int nctemp6066=LibeStrcmp(nctemp6057,nctemp6062);
if(nctemp6066)
{
struct tree* nctemp6068= p;
int nctemp6070=SemWhilestmnt(nctemp6068);
}
struct tree* nctemp6074= p;
nctempchar1* nctemp6076=PtreeGetname(nctemp6074);
nctempchar1* nctemp6072= nctemp6076;
struct nctempchar1 *nctemp6079;
static struct nctempchar1 nctemp6080 = {{ 4}, (char*)"for\0"};
nctemp6079=&nctemp6080;
nctempchar1* nctemp6077= nctemp6079;
int nctemp6081=LibeStrcmp(nctemp6072,nctemp6077);
if(nctemp6081)
{
struct tree* nctemp6083= p;
int nctemp6085=SemForstmnt(nctemp6083);
}
struct tree* nctemp6089= p;
nctempchar1* nctemp6091=PtreeGetname(nctemp6089);
nctempchar1* nctemp6087= nctemp6091;
struct nctempchar1 *nctemp6094;
static struct nctempchar1 nctemp6095 = {{ 9}, (char*)"parallel\0"};
nctemp6094=&nctemp6095;
nctempchar1* nctemp6092= nctemp6094;
int nctemp6096=LibeStrcmp(nctemp6087,nctemp6092);
if(nctemp6096)
{
struct tree* nctemp6098= p;
int nctemp6100=SemParallelstmnt(nctemp6098);
struct tree* nctemp6102= p;
struct nctempchar1 *nctemp6106;
static struct nctempchar1 nctemp6107 = {{ 9}, (char*)"parallel\0"};
nctemp6106=&nctemp6107;
nctempchar1* nctemp6104= nctemp6106;
int nctemp6108=PtreeSetparallel(nctemp6102,nctemp6104);
}
struct tree* nctemp6112= p;
nctempchar1* nctemp6114=PtreeGetname(nctemp6112);
nctempchar1* nctemp6110= nctemp6114;
struct nctempchar1 *nctemp6117;
static struct nctempchar1 nctemp6118 = {{ 3}, (char*)"if\0"};
nctemp6117=&nctemp6118;
nctempchar1* nctemp6115= nctemp6117;
int nctemp6119=LibeStrcmp(nctemp6110,nctemp6115);
if(nctemp6119)
{
struct tree* nctemp6121= p;
int nctemp6123=SemIfstmnt(nctemp6121);
}
struct tree* nctemp6127= p;
nctempchar1* nctemp6129=PtreeGetname(nctemp6127);
nctempchar1* nctemp6125= nctemp6129;
struct nctempchar1 *nctemp6132;
static struct nctempchar1 nctemp6133 = {{ 7}, (char*)"return\0"};
nctemp6132=&nctemp6133;
nctempchar1* nctemp6130= nctemp6132;
int nctemp6134=LibeStrcmp(nctemp6125,nctemp6130);
if(nctemp6134)
{
struct tree* nctemp6136= p;
int nctemp6138=SemReturnstmnt(nctemp6136);
}
struct tree* nctemp6142= p;
nctempchar1* nctemp6144=PtreeGetparallel(nctemp6142);
nctempchar1* nctemp6140= nctemp6144;
struct nctempchar1 *nctemp6147;
static struct nctempchar1 nctemp6148 = {{ 9}, (char*)"parallel\0"};
nctemp6147=&nctemp6148;
nctempchar1* nctemp6145= nctemp6147;
int nctemp6149=LibeStrcmp(nctemp6140,nctemp6145);
if(nctemp6149)
{
parflag = 1;
}
struct tree* nctemp6154= p;
struct tree* nctemp6156=PtreeMvsister(nctemp6154);
p =nctemp6156;
}
int nctemp6157 = (p !=0);
nctemp6030=nctemp6157;}int nctemp6161 = (parflag ==1);
if(nctemp6161)
{
struct tree* nctemp6166= q;
struct nctempchar1 *nctemp6170;
static struct nctempchar1 nctemp6171 = {{ 9}, (char*)"parallel\0"};
nctemp6170=&nctemp6171;
nctempchar1* nctemp6168= nctemp6170;
int nctemp6172=PtreeSetparallel(nctemp6166,nctemp6168);
}
return 1;
}
