//  Translated by epsc  version: Sat Jun 20 16:48:06 2026

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
{
return SemParallel;
}
}
int SemSetparallel (int flag)
{
{
SemParallel = flag;
return 1;
}
}
static int SemReturn;
int SemGetreturn ()
{
{
return SemReturn;
}
}
int SemSetreturn (int flag)
{
{
SemReturn = flag;
return 1;
}
}
static int SemSimple;
int SemSetsimple (int simple)
{
{
SemSimple = simple;
return 1;
}
}
int SemGetsimple ()
{
{
return SemSimple;
}
}
int SemSerror (struct tree* p,nctempchar1 *s1,nctempchar1 *s2)
{
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
}
int SemImport (struct tree* p,struct symbol* etp)
{
nctempchar1 *module;
nctempchar1 *file;
nctempchar1 *path;
nctempchar1 *sysfile;
int fd;
struct symbol* stp;
{
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
}
int SemAutodeclar (struct tree* identifier,struct symbol* local,struct symbol* global)
{
struct symbol* entry;
{
struct tree* nctemp156= identifier;
nctempchar1* nctemp158=PtreeGetdef(nctemp156);
nctempchar1* nctemp154= nctemp158;
struct symbol* nctemp159=SymLook(nctemp154);
entry =nctemp159;
int nctemp147 = (entry !=0);
if(nctemp147)
{
{
return 1;
}
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
{
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
{
rank = (rank + 1);
}
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
}
else{
{
struct tree* nctemp319= p;
struct tree* nctemp321=PtreeMvchild(nctemp319);
np =nctemp321;
}
}
int nctemp322 = (np !=0);
int nctemp326=nctemp322;
while(nctemp326)
{{
{
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
}
else{
{
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
{
struct symbol* nctemp395= up;
struct nctempchar1 *nctemp399;
static struct nctempchar1 nctemp400 = {{ 7}, (char*)"global\0"};
nctemp399=&nctemp400;
nctempchar1* nctemp397= nctemp399;
int nctemp401=SymSetglobal(nctemp395,nctemp397);
}
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
{
struct tree* nctemp420= np;
struct tree* nctemp422=PtreeMvchild(nctemp420);
sp =nctemp422;
struct tree* nctemp428= sp;
nctempchar1* nctemp430=PtreeGetname(nctemp428);
nctempchar1* nctemp426= nctemp430;
struct nctempchar1 *nctemp433;
static struct nctempchar1 nctemp434 = {{ 7}, (char*)"unexpr\0"};
nctemp433=&nctemp434;
nctempchar1* nctemp431= nctemp433;
int nctemp435=LibeStrcmp(nctemp426,nctemp431);
int nctemp423 = (nctemp435 ==1);
if(nctemp423)
{
{
struct tree* nctemp441= sp;
struct tree* nctemp443=PtreeMvchild(nctemp441);
sp =nctemp443;
struct tree* nctemp456= sp;
nctempchar1* nctemp458=PtreeGetdef(nctemp456);
nctempchar1* nctemp454= nctemp458;
int nctemp459=LibeStrlen(nctemp454);
int nctemp461 = nctemp459 + 1;
int nctemp463 = nctemp461 + 3;
l =nctemp463;
int nctemp470=l;
nctempchar1 *nctemp469;
nctemp469=(nctempchar1*)RunMalloc(sizeof(nctempchar1));
nctemp469->d[0]=l;
nctemp469->a=(char *)RunMalloc(sizeof(char)*nctemp470);
s=nctemp469;
struct nctempchar1 *nctemp476;
static struct nctempchar1 nctemp477 = {{ 3}, (char*)"(-\0"};
nctemp476=&nctemp477;
nctempchar1* nctemp474= nctemp476;
nctempchar1* nctemp478= s;
int nctemp481=LibeStrcpy(nctemp474,nctemp478);
struct tree* nctemp485= sp;
nctempchar1* nctemp487=PtreeGetdef(nctemp485);
nctempchar1* nctemp483= nctemp487;
nctempchar1* nctemp488= s;
int nctemp491=LibeStrcat(nctemp483,nctemp488);
struct nctempchar1 *nctemp495;
static struct nctempchar1 nctemp496 = {{ 2}, (char*)")\0"};
nctemp495=&nctemp496;
nctempchar1* nctemp493= nctemp495;
nctempchar1* nctemp497= s;
int nctemp500=LibeStrcat(nctemp493,nctemp497);
struct tree* nctemp502= sp;
nctempchar1* nctemp504= s;
int nctemp507=PtreeSetdef(nctemp502,nctemp504);
RunFree(s->a);
RunFree(s);
}
}
struct symbol* nctemp512= up;
struct tree* nctemp516= sp;
nctempchar1* nctemp518=PtreeGetname(nctemp516);
nctempchar1* nctemp514= nctemp518;
int nctemp519=SymSetype(nctemp512,nctemp514);
struct symbol* nctemp521= up;
struct tree* nctemp525= sp;
nctempchar1* nctemp527=PtreeGetdef(nctemp525);
nctempchar1* nctemp523= nctemp527;
int nctemp528=SymSetdescr(nctemp521,nctemp523);
struct symbol* nctemp530= up;
int nctemp532= 0;
int nctemp534=SymSetemit(nctemp530,nctemp532);
}
}
struct symbol* nctemp536= up;
struct nctempchar1 *nctemp540;
static struct nctempchar1 nctemp541 = {{ 5}, (char*)"lval\0"};
nctemp540=&nctemp541;
nctempchar1* nctemp538= nctemp540;
int nctemp542=SymSetlval(nctemp536,nctemp538);
struct tree* nctemp546= p;
nctempchar1* nctemp548=PtreeGetstruct(nctemp546);
nctempchar1* nctemp544= nctemp548;
struct nctempchar1 *nctemp551;
static struct nctempchar1 nctemp552 = {{ 7}, (char*)"struct\0"};
nctemp551=&nctemp552;
nctempchar1* nctemp549= nctemp551;
int nctemp553=LibeStrcmp(nctemp544,nctemp549);
if(nctemp553)
{
{
struct tree* nctemp559= p;
nctempchar1* nctemp561=PtreeGetype(nctemp559);
nctempchar1* nctemp557= nctemp561;
struct symbol* nctemp564=SymGetetp();
struct symbol* nctemp562= nctemp564;
struct symbol* nctemp565=SymLookup(nctemp557,nctemp562);
int nctemp554 = (nctemp565 ==0);
if(nctemp554)
{
{
struct tree* nctemp568= p;
struct nctempchar1 *nctemp572;
static struct nctempchar1 nctemp573 = {{ 20}, (char*)"Undefined structure\0"};
nctemp572=&nctemp573;
nctempchar1* nctemp570= nctemp572;
struct tree* nctemp576= p;
nctempchar1* nctemp578=PtreeGetype(nctemp576);
nctempchar1* nctemp574= nctemp578;
int nctemp579=SemSerror(nctemp568,nctemp570,nctemp574);
}
}
struct symbol* nctemp581= up;
struct tree* nctemp585= p;
nctempchar1* nctemp587=PtreeGetstruct(nctemp585);
nctempchar1* nctemp583= nctemp587;
int nctemp588=SymSetstruct(nctemp581,nctemp583);
}
}
struct symbol* nctemp590= up;
struct tree* nctemp594= p;
nctempchar1* nctemp596=PtreeGetarray(nctemp594);
nctempchar1* nctemp592= nctemp596;
int nctemp597=SymSetarray(nctemp590,nctemp592);
struct symbol* nctemp599= up;
int nctemp601= rank;
int nctemp603=SymSetrank(nctemp599,nctemp601);
struct tree* nctemp605= np;
int nctemp607= rank;
int nctemp609=PtreeSetrank(nctemp605,nctemp607);
}
}
struct tree* nctemp614= np;
struct tree* nctemp616=PtreeMvsister(nctemp614);
np =nctemp616;
}
}
int nctemp617 = (np !=0);
nctemp326=nctemp617;}return 1;
}
}
int SemDeclarations (struct tree* p,struct symbol* tp)
{
{
int nctemp622 = (p !=0);
int nctemp626=nctemp622;
while(nctemp626)
{{
{
struct tree* nctemp628= p;
struct symbol* nctemp630= tp;
int nctemp632=SemDeclaration(nctemp628,nctemp630);
struct tree* nctemp637= p;
struct tree* nctemp639=PtreeMvsister(nctemp637);
p =nctemp639;
}
}
int nctemp640 = (p !=0);
nctemp626=nctemp640;}return 1;
}
}
int SemStructdecl (struct tree* p,struct symbol* tp)
{
struct symbol* up;
struct symbol* uup;
nctempchar1 *structure;
{
struct tree* nctemp650= p;
nctempchar1* nctemp652=PtreeGetdef(nctemp650);
structure=nctemp652;
struct tree* nctemp657= p;
struct tree* nctemp659=PtreeMvchild(nctemp657);
p =nctemp659;
struct tree* nctemp664= p;
struct tree* nctemp666=PtreeMvchild(nctemp664);
p =nctemp666;
struct tree* nctemp670= p;
nctempchar1* nctemp672=PtreeGetname(nctemp670);
nctempchar1* nctemp668= nctemp672;
struct nctempchar1 *nctemp675;
static struct nctempchar1 nctemp676 = {{ 13}, (char*)"declarations\0"};
nctemp675=&nctemp676;
nctempchar1* nctemp673= nctemp675;
int nctemp677=LibeStrcmp(nctemp668,nctemp673);
if(nctemp677)
{
{
struct symbol* nctemp682=SymMktable();
up =nctemp682;
nctempchar1* nctemp690= structure;
struct symbol* nctemp693= tp;
struct symbol* nctemp695=SymMkname(nctemp690,nctemp693);
uup =nctemp695;
int nctemp683 = (uup ==0);
if(nctemp683)
{
{
struct tree* nctemp698= p;
struct nctempchar1 *nctemp702;
static struct nctempchar1 nctemp703 = {{ 21}, (char*)"Multiple declaration\0"};
nctemp702=&nctemp703;
nctempchar1* nctemp700= nctemp702;
nctempchar1* nctemp704= structure;
int nctemp707=SemSerror(nctemp698,nctemp700,nctemp704);
}
}
else{
{
struct symbol* nctemp709= uup;
struct symbol* nctemp711= up;
struct symbol* nctemp713=SymSetable(nctemp709,nctemp711);
struct symbol* nctemp715= uup;
struct nctempchar1 *nctemp719;
static struct nctempchar1 nctemp720 = {{ 10}, (char*)"structdef\0"};
nctemp719=&nctemp720;
nctempchar1* nctemp717= nctemp719;
int nctemp721=SymSetstruct(nctemp715,nctemp717);
struct symbol* nctemp723= uup;
nctempchar1* nctemp725= structure;
int nctemp728=SymSetype(nctemp723,nctemp725);
struct tree* nctemp732= p;
struct tree* nctemp734=PtreeMvchild(nctemp732);
struct tree* nctemp730= nctemp734;
struct symbol* nctemp735= up;
int nctemp737=SemDeclarations(nctemp730,nctemp735);
}
}
}
}
return 1;
}
}
int SemArgtype (struct tree* p,struct symbol* tp)
{
nctempchar1 *name;
{
struct tree* nctemp744= p;
nctempchar1* nctemp746=PtreeGetdef(nctemp744);
name=nctemp746;
struct symbol* nctemp752= tp;
nctempchar1* nctemp754=SymGetype(nctemp752);
nctempchar1* nctemp750= nctemp754;
struct tree* nctemp757= p;
nctempchar1* nctemp759=PtreeGetype(nctemp757);
nctempchar1* nctemp755= nctemp759;
int nctemp760=LibeStrcmp(nctemp750,nctemp755);
int nctemp747 = (nctemp760 ==0);
if(nctemp747)
{
{
struct tree* nctemp763= p;
struct nctempchar1 *nctemp767;
static struct nctempchar1 nctemp768 = {{ 49}, (char*)"Argument type does not match forward declaration\0"};
nctemp767=&nctemp768;
nctempchar1* nctemp765= nctemp767;
nctempchar1* nctemp769= name;
int nctemp772=SemSerror(nctemp763,nctemp765,nctemp769);
}
}
struct symbol* nctemp778= tp;
nctempchar1* nctemp780=SymGetref(nctemp778);
nctempchar1* nctemp776= nctemp780;
struct tree* nctemp783= p;
nctempchar1* nctemp785=PtreeGetref(nctemp783);
nctempchar1* nctemp781= nctemp785;
int nctemp786=LibeStrcmp(nctemp776,nctemp781);
int nctemp773 = (nctemp786 ==0);
if(nctemp773)
{
{
struct tree* nctemp789= p;
struct nctempchar1 *nctemp793;
static struct nctempchar1 nctemp794 = {{ 49}, (char*)"Argument type does not match forward declaration\0"};
nctemp793=&nctemp794;
nctempchar1* nctemp791= nctemp793;
nctempchar1* nctemp795= name;
int nctemp798=SemSerror(nctemp789,nctemp791,nctemp795);
}
}
struct symbol* nctemp804= tp;
nctempchar1* nctemp806=SymGetarray(nctemp804);
nctempchar1* nctemp802= nctemp806;
struct tree* nctemp809= p;
nctempchar1* nctemp811=PtreeGetarray(nctemp809);
nctempchar1* nctemp807= nctemp811;
int nctemp812=LibeStrcmp(nctemp802,nctemp807);
int nctemp799 = (nctemp812 ==0);
if(nctemp799)
{
{
struct tree* nctemp815= p;
struct nctempchar1 *nctemp819;
static struct nctempchar1 nctemp820 = {{ 49}, (char*)"Argument type does not match forward declaration\0"};
nctemp819=&nctemp820;
nctempchar1* nctemp817= nctemp819;
nctempchar1* nctemp821= name;
int nctemp824=SemSerror(nctemp815,nctemp817,nctemp821);
}
}
struct symbol* nctemp828= tp;
int nctemp830=SymGetrank(nctemp828);
struct tree* nctemp832= p;
int nctemp834=PtreeGetrank(nctemp832);
int nctemp825 = (nctemp830 !=nctemp834);
if(nctemp825)
{
{
struct tree* nctemp836= p;
struct nctempchar1 *nctemp840;
static struct nctempchar1 nctemp841 = {{ 49}, (char*)"Argument type does not match forward declaration\0"};
nctemp840=&nctemp841;
nctempchar1* nctemp838= nctemp840;
nctempchar1* nctemp842= name;
int nctemp845=SemSerror(nctemp836,nctemp838,nctemp842);
}
}
return 1;
}
}
int SemArray (struct tree* p,struct symbol* tp)
{
struct tree* np;
int rank;
{
struct tree* nctemp852= p;
nctempchar1* nctemp854=PtreeGetarray(nctemp852);
nctempchar1* nctemp850= nctemp854;
struct nctempchar1 *nctemp857;
static struct nctempchar1 nctemp858 = {{ 6}, (char*)"array\0"};
nctemp857=&nctemp858;
nctempchar1* nctemp855= nctemp857;
int nctemp859=LibeStrcmp(nctemp850,nctemp855);
int nctemp847 = (nctemp859 ==0);
if(nctemp847)
{
{
struct tree* nctemp862= p;
struct nctempchar1 *nctemp866;
static struct nctempchar1 nctemp867 = {{ 13}, (char*)"Not an array\0"};
nctemp866=&nctemp867;
nctempchar1* nctemp864= nctemp866;
struct tree* nctemp870= p;
nctempchar1* nctemp872=PtreeGetdef(nctemp870);
nctempchar1* nctemp868= nctemp872;
int nctemp873=SemSerror(nctemp862,nctemp864,nctemp868);
return 0;
}
}
struct tree* nctemp876= p;
struct nctempchar1 *nctemp880;
static struct nctempchar1 nctemp881 = {{ 11}, (char*)"identifier\0"};
nctemp880=&nctemp881;
nctempchar1* nctemp878= nctemp880;
int nctemp882=PtreeSetname(nctemp876,nctemp878);
struct tree* nctemp887= p;
struct tree* nctemp889=PtreeMvchild(nctemp887);
np =nctemp889;
struct tree* nctemp895= np;
nctempchar1* nctemp897=PtreeGetname(nctemp895);
nctempchar1* nctemp893= nctemp897;
struct nctempchar1 *nctemp900;
static struct nctempchar1 nctemp901 = {{ 9}, (char*)"exprlist\0"};
nctemp900=&nctemp901;
nctempchar1* nctemp898= nctemp900;
int nctemp902=LibeStrcmp(nctemp893,nctemp898);
int nctemp890 = (nctemp902 ==0);
if(nctemp890)
{
{
struct tree* nctemp905= p;
struct nctempchar1 *nctemp909;
static struct nctempchar1 nctemp910 = {{ 22}, (char*)"Missing array indexes\0"};
nctemp909=&nctemp910;
nctempchar1* nctemp907= nctemp909;
struct tree* nctemp913= p;
nctempchar1* nctemp915=PtreeGetdef(nctemp913);
nctempchar1* nctemp911= nctemp915;
int nctemp916=SemSerror(nctemp905,nctemp907,nctemp911);
return 0;
}
}
struct tree* nctemp925= np;
struct tree* nctemp927=PtreeMvchild(nctemp925);
np =nctemp927;
int nctemp918 = (np !=0);
if(nctemp918)
{
{
rank = 0;
int nctemp929 = (np !=0);
int nctemp933=nctemp929;
while(nctemp933)
{{
{
struct tree* nctemp935= np;
struct tree* nctemp937=SemExpr(nctemp935);
struct tree* nctemp942= np;
struct tree* nctemp944=PtreeMvsister(nctemp942);
np =nctemp944;
rank = (rank + 1);
}
}
int nctemp945 = (np !=0);
nctemp933=nctemp945;}}
}
struct symbol* nctemp953= tp;
int nctemp955=SymGetrank(nctemp953);
int nctemp949 = (rank !=nctemp955);
if(nctemp949)
{
{
struct tree* nctemp957= p;
struct nctempchar1 *nctemp961;
static struct nctempchar1 nctemp962 = {{ 24}, (char*)"Illegal array dimension\0"};
nctemp961=&nctemp962;
nctempchar1* nctemp959= nctemp961;
struct tree* nctemp965= p;
nctempchar1* nctemp967=PtreeGetdef(nctemp965);
nctempchar1* nctemp963= nctemp967;
int nctemp968=SemSerror(nctemp957,nctemp959,nctemp963);
return 0;
}
}
struct tree* nctemp971= p;
int nctemp973= rank;
int nctemp975=PtreeSetrank(nctemp971,nctemp973);
return 1;
}
}
int SemStructure (struct tree* p,struct symbol* tp)
{
nctempchar1 *temp;
struct symbol* up;
struct symbol* uup;
struct tree* np;
{
struct tree* nctemp982= p;
nctempchar1* nctemp984=PtreeGetstruct(nctemp982);
nctempchar1* nctemp980= nctemp984;
struct nctempchar1 *nctemp987;
static struct nctempchar1 nctemp988 = {{ 7}, (char*)"struct\0"};
nctemp987=&nctemp988;
nctempchar1* nctemp985= nctemp987;
int nctemp989=LibeStrcmp(nctemp980,nctemp985);
int nctemp977 = (nctemp989 ==0);
if(nctemp977)
{
{
struct tree* nctemp992= p;
struct nctempchar1 *nctemp996;
static struct nctempchar1 nctemp997 = {{ 16}, (char*)"Not a structure\0"};
nctemp996=&nctemp997;
nctempchar1* nctemp994= nctemp996;
struct tree* nctemp1000= p;
nctempchar1* nctemp1002=PtreeGetdef(nctemp1000);
nctempchar1* nctemp998= nctemp1002;
int nctemp1003=SemSerror(nctemp992,nctemp994,nctemp998);
return 0;
}
}
struct tree* nctemp1006= p;
struct nctempchar1 *nctemp1010;
static struct nctempchar1 nctemp1011 = {{ 11}, (char*)"identifier\0"};
nctemp1010=&nctemp1011;
nctempchar1* nctemp1008= nctemp1010;
int nctemp1012=PtreeSetname(nctemp1006,nctemp1008);
struct symbol* nctemp1018= tp;
nctempchar1* nctemp1020=SymGetype(nctemp1018);
temp=nctemp1020;
nctempchar1* nctemp1028= temp;
struct symbol* nctemp1031=SymLook(nctemp1028);
up =nctemp1031;
int nctemp1021 = (up ==0);
if(nctemp1021)
{
{
nctempchar1* nctemp1040= temp;
struct symbol* nctemp1043=SymLook(nctemp1040);
up =nctemp1043;
int nctemp1033 = (up ==0);
if(nctemp1033)
{
{
struct tree* nctemp1046= p;
struct nctempchar1 *nctemp1050;
static struct nctempchar1 nctemp1051 = {{ 26}, (char*)"Undeclared structure type\0"};
nctemp1050=&nctemp1051;
nctempchar1* nctemp1048= nctemp1050;
struct nctempchar1 *nctemp1054;
static struct nctempchar1 nctemp1055 = {{ 2}, (char*)" \0"};
nctemp1054=&nctemp1055;
nctempchar1* nctemp1052= nctemp1054;
int nctemp1056=SemSerror(nctemp1046,nctemp1048,nctemp1052);
return 0;
}
}
}
}
struct symbol* nctemp1061= tp;
nctempchar1* nctemp1063=SymGetstruct(nctemp1061);
nctempchar1* nctemp1059= nctemp1063;
struct nctempchar1 *nctemp1066;
static struct nctempchar1 nctemp1067 = {{ 10}, (char*)"structdef\0"};
nctemp1066=&nctemp1067;
nctempchar1* nctemp1064= nctemp1066;
int nctemp1068=LibeStrcmp(nctemp1059,nctemp1064);
if(nctemp1068)
{
{
struct tree* nctemp1070= p;
struct nctempchar1 *nctemp1074;
static struct nctempchar1 nctemp1075 = {{ 43}, (char*)"Struct names can not be used as a variable\0"};
nctemp1074=&nctemp1075;
nctempchar1* nctemp1072= nctemp1074;
struct tree* nctemp1078= p;
nctempchar1* nctemp1080=PtreeGetdef(nctemp1078);
nctempchar1* nctemp1076= nctemp1080;
int nctemp1081=SemSerror(nctemp1070,nctemp1072,nctemp1076);
return 0;
}
}
struct tree* nctemp1087= p;
struct tree* nctemp1089=PtreeMvchild(nctemp1087);
np =nctemp1089;
int nctemp1090 = (np ==0);
if(nctemp1090)
{
{
struct tree* nctemp1095= p;
struct nctempchar1 *nctemp1099;
static struct nctempchar1 nctemp1100 = {{ 27}, (char*)"Missing structure selector\0"};
nctemp1099=&nctemp1100;
nctempchar1* nctemp1097= nctemp1099;
struct tree* nctemp1103= p;
nctempchar1* nctemp1105=PtreeGetdef(nctemp1103);
nctempchar1* nctemp1101= nctemp1105;
int nctemp1106=SemSerror(nctemp1095,nctemp1097,nctemp1101);
return 0;
}
}
struct tree* nctemp1111= p;
nctempchar1* nctemp1113=PtreeGetarray(nctemp1111);
nctempchar1* nctemp1109= nctemp1113;
struct nctempchar1 *nctemp1116;
static struct nctempchar1 nctemp1117 = {{ 6}, (char*)"array\0"};
nctemp1116=&nctemp1117;
nctempchar1* nctemp1114= nctemp1116;
int nctemp1118=LibeStrcmp(nctemp1109,nctemp1114);
if(nctemp1118)
{
{
struct tree* nctemp1123= np;
struct tree* nctemp1125=PtreeMvsister(nctemp1123);
np =nctemp1125;
}
}
int nctemp1126 = (np ==0);
if(nctemp1126)
{
{
struct tree* nctemp1131= p;
struct nctempchar1 *nctemp1135;
static struct nctempchar1 nctemp1136 = {{ 20}, (char*)"Missing array index\0"};
nctemp1135=&nctemp1136;
nctempchar1* nctemp1133= nctemp1135;
struct tree* nctemp1139= p;
nctempchar1* nctemp1141=PtreeGetdef(nctemp1139);
nctempchar1* nctemp1137= nctemp1141;
int nctemp1142=SemSerror(nctemp1131,nctemp1133,nctemp1137);
return 0;
}
}
struct symbol* nctemp1148= up;
struct symbol* nctemp1150=SymGetable(nctemp1148);
uup =nctemp1150;
struct tree* nctemp1160= np;
nctempchar1* nctemp1162=PtreeGetdef(nctemp1160);
nctempchar1* nctemp1158= nctemp1162;
struct symbol* nctemp1163= uup;
struct symbol* nctemp1165=SymLookup(nctemp1158,nctemp1163);
tp =nctemp1165;
int nctemp1151 = (tp ==0);
if(nctemp1151)
{
{
struct tree* nctemp1168= np;
struct nctempchar1 *nctemp1172;
static struct nctempchar1 nctemp1173 = {{ 28}, (char*)"Undeclared structure member\0"};
nctemp1172=&nctemp1173;
nctempchar1* nctemp1170= nctemp1172;
struct tree* nctemp1176= np;
nctempchar1* nctemp1178=PtreeGetdef(nctemp1176);
nctempchar1* nctemp1174= nctemp1178;
int nctemp1179=SemSerror(nctemp1168,nctemp1170,nctemp1174);
return 0;
}
}
struct symbol* nctemp1184= tp;
nctempchar1* nctemp1186=SymGetarray(nctemp1184);
nctempchar1* nctemp1182= nctemp1186;
struct nctempchar1 *nctemp1189;
static struct nctempchar1 nctemp1190 = {{ 6}, (char*)"array\0"};
nctemp1189=&nctemp1190;
nctempchar1* nctemp1187= nctemp1189;
int nctemp1191=LibeStrcmp(nctemp1182,nctemp1187);
if(nctemp1191)
{
{
struct tree* nctemp1195= np;
struct tree* nctemp1197=PtreeMvchild(nctemp1195);
int nctemp1192 = (nctemp1197 !=0);
if(nctemp1192)
{
{
struct tree* nctemp1200= np;
struct symbol* nctemp1202= tp;
int nctemp1204=SemArray(nctemp1200,nctemp1202);
struct symbol* nctemp1208= tp;
nctempchar1* nctemp1210=SymGetstruct(nctemp1208);
nctempchar1* nctemp1206= nctemp1210;
struct nctempchar1 *nctemp1213;
static struct nctempchar1 nctemp1214 = {{ 7}, (char*)"struct\0"};
nctemp1213=&nctemp1214;
nctempchar1* nctemp1211= nctemp1213;
int nctemp1215=LibeStrcmp(nctemp1206,nctemp1211);
if(nctemp1215)
{
{
struct tree* nctemp1217= np;
struct nctempchar1 *nctemp1221;
static struct nctempchar1 nctemp1222 = {{ 5}, (char*)"sref\0"};
nctemp1221=&nctemp1222;
nctempchar1* nctemp1219= nctemp1221;
int nctemp1223=PtreeSetref(nctemp1217,nctemp1219);
}
}
}
}
else{
{
struct tree* nctemp1225= np;
struct nctempchar1 *nctemp1229;
static struct nctempchar1 nctemp1230 = {{ 5}, (char*)"aref\0"};
nctemp1229=&nctemp1230;
nctempchar1* nctemp1227= nctemp1229;
int nctemp1231=PtreeSetref(nctemp1225,nctemp1227);
}
}
}
}
else{
{
struct symbol* nctemp1235= tp;
nctempchar1* nctemp1237=SymGetstruct(nctemp1235);
nctempchar1* nctemp1233= nctemp1237;
struct nctempchar1 *nctemp1240;
static struct nctempchar1 nctemp1241 = {{ 7}, (char*)"struct\0"};
nctemp1240=&nctemp1241;
nctempchar1* nctemp1238= nctemp1240;
int nctemp1242=LibeStrcmp(nctemp1233,nctemp1238);
if(nctemp1242)
{
{
struct tree* nctemp1244= np;
struct nctempchar1 *nctemp1248;
static struct nctempchar1 nctemp1249 = {{ 5}, (char*)"sref\0"};
nctemp1248=&nctemp1249;
nctempchar1* nctemp1246= nctemp1248;
int nctemp1250=PtreeSetref(nctemp1244,nctemp1246);
}
}
}
}
struct tree* nctemp1252= np;
struct symbol* nctemp1256= tp;
nctempchar1* nctemp1258=SymGetype(nctemp1256);
nctempchar1* nctemp1254= nctemp1258;
int nctemp1259=PtreeSetype(nctemp1252,nctemp1254);
struct tree* nctemp1261= np;
struct symbol* nctemp1265= tp;
nctempchar1* nctemp1267=SymGetarray(nctemp1265);
nctempchar1* nctemp1263= nctemp1267;
int nctemp1268=PtreeSetarray(nctemp1261,nctemp1263);
struct tree* nctemp1270= np;
struct symbol* nctemp1274= tp;
int nctemp1276=SymGetrank(nctemp1274);
int nctemp1272= nctemp1276;
int nctemp1277=PtreeSetrank(nctemp1270,nctemp1272);
struct tree* nctemp1279= np;
struct symbol* nctemp1283= tp;
nctempchar1* nctemp1285=SymGetlval(nctemp1283);
nctempchar1* nctemp1281= nctemp1285;
int nctemp1286=PtreeSetlval(nctemp1279,nctemp1281);
struct tree* nctemp1288= p;
struct symbol* nctemp1292= tp;
nctempchar1* nctemp1294=SymGetype(nctemp1292);
nctempchar1* nctemp1290= nctemp1294;
int nctemp1295=PtreeSetype(nctemp1288,nctemp1290);
struct tree* nctemp1297= p;
struct tree* nctemp1301= np;
nctempchar1* nctemp1303=PtreeGetref(nctemp1301);
nctempchar1* nctemp1299= nctemp1303;
int nctemp1304=PtreeSetref(nctemp1297,nctemp1299);
struct tree* nctemp1306= p;
struct symbol* nctemp1310= tp;
int nctemp1312=SymGetrank(nctemp1310);
int nctemp1308= nctemp1312;
int nctemp1313=PtreeSetrank(nctemp1306,nctemp1308);
return 1;
}
}
int SemId (struct tree* p)
{
struct symbol* tp;
struct tree* np;
{
struct tree* nctemp1324= p;
nctempchar1* nctemp1326=PtreeGetdef(nctemp1324);
nctempchar1* nctemp1322= nctemp1326;
struct symbol* nctemp1327=SymLook(nctemp1322);
tp =nctemp1327;
int nctemp1315 = (tp ==0);
if(nctemp1315)
{
{
struct tree* nctemp1330= p;
struct nctempchar1 *nctemp1334;
static struct nctempchar1 nctemp1335 = {{ 22}, (char*)"Undeclared identifier\0"};
nctemp1334=&nctemp1335;
nctempchar1* nctemp1332= nctemp1334;
struct tree* nctemp1338= p;
nctempchar1* nctemp1340=PtreeGetdef(nctemp1338);
nctempchar1* nctemp1336= nctemp1340;
int nctemp1341=SemSerror(nctemp1330,nctemp1332,nctemp1336);
}
}
struct symbol* nctemp1347= tp;
nctempchar1* nctemp1349=SymGetype(nctemp1347);
nctempchar1* nctemp1345= nctemp1349;
struct nctempchar1 *nctemp1352;
static struct nctempchar1 nctemp1353 = {{ 10}, (char*)"iconstant\0"};
nctemp1352=&nctemp1353;
nctempchar1* nctemp1350= nctemp1352;
int nctemp1354=LibeStrcmp(nctemp1345,nctemp1350);
int nctemp1342 = (nctemp1354 ==1);
if(nctemp1342)
{
{
struct tree* nctemp1357= p;
struct symbol* nctemp1361= tp;
nctempchar1* nctemp1363=SymGetype(nctemp1361);
nctempchar1* nctemp1359= nctemp1363;
int nctemp1364=PtreeSetname(nctemp1357,nctemp1359);
struct tree* nctemp1366= p;
struct symbol* nctemp1370= tp;
nctempchar1* nctemp1372=SymGetdescr(nctemp1370);
nctempchar1* nctemp1368= nctemp1372;
int nctemp1373=PtreeSetdef(nctemp1366,nctemp1368);
struct tree* nctemp1375= p;
struct nctempchar1 *nctemp1379;
static struct nctempchar1 nctemp1380 = {{ 4}, (char*)"int\0"};
nctemp1379=&nctemp1380;
nctempchar1* nctemp1377= nctemp1379;
int nctemp1381=PtreeSetype(nctemp1375,nctemp1377);
return 1;
}
}
else{
{
struct symbol* nctemp1388= tp;
nctempchar1* nctemp1390=SymGetype(nctemp1388);
nctempchar1* nctemp1386= nctemp1390;
struct nctempchar1 *nctemp1393;
static struct nctempchar1 nctemp1394 = {{ 10}, (char*)"rconstant\0"};
nctemp1393=&nctemp1394;
nctempchar1* nctemp1391= nctemp1393;
int nctemp1395=LibeStrcmp(nctemp1386,nctemp1391);
int nctemp1383 = (nctemp1395 ==1);
if(nctemp1383)
{
{
struct tree* nctemp1398= p;
struct symbol* nctemp1402= tp;
nctempchar1* nctemp1404=SymGetype(nctemp1402);
nctempchar1* nctemp1400= nctemp1404;
int nctemp1405=PtreeSetname(nctemp1398,nctemp1400);
struct tree* nctemp1407= p;
struct symbol* nctemp1411= tp;
nctempchar1* nctemp1413=SymGetdescr(nctemp1411);
nctempchar1* nctemp1409= nctemp1413;
int nctemp1414=PtreeSetdef(nctemp1407,nctemp1409);
struct tree* nctemp1416= p;
struct nctempchar1 *nctemp1420;
static struct nctempchar1 nctemp1421 = {{ 6}, (char*)"float\0"};
nctemp1420=&nctemp1421;
nctempchar1* nctemp1418= nctemp1420;
int nctemp1422=PtreeSetype(nctemp1416,nctemp1418);
return 1;
}
}
else{
{
struct symbol* nctemp1429= tp;
nctempchar1* nctemp1431=SymGetype(nctemp1429);
nctempchar1* nctemp1427= nctemp1431;
struct nctempchar1 *nctemp1434;
static struct nctempchar1 nctemp1435 = {{ 10}, (char*)"sconstant\0"};
nctemp1434=&nctemp1435;
nctempchar1* nctemp1432= nctemp1434;
int nctemp1436=LibeStrcmp(nctemp1427,nctemp1432);
int nctemp1424 = (nctemp1436 ==1);
if(nctemp1424)
{
{
struct tree* nctemp1439= p;
struct symbol* nctemp1443= tp;
nctempchar1* nctemp1445=SymGetype(nctemp1443);
nctempchar1* nctemp1441= nctemp1445;
int nctemp1446=PtreeSetname(nctemp1439,nctemp1441);
struct tree* nctemp1448= p;
struct symbol* nctemp1452= tp;
nctempchar1* nctemp1454=SymGetdescr(nctemp1452);
nctempchar1* nctemp1450= nctemp1454;
int nctemp1455=PtreeSetdef(nctemp1448,nctemp1450);
struct tree* nctemp1457= p;
struct nctempchar1 *nctemp1461;
static struct nctempchar1 nctemp1462 = {{ 5}, (char*)"char\0"};
nctemp1461=&nctemp1462;
nctempchar1* nctemp1459= nctemp1461;
int nctemp1463=PtreeSetype(nctemp1457,nctemp1459);
struct tree* nctemp1465= p;
struct nctempchar1 *nctemp1469;
static struct nctempchar1 nctemp1470 = {{ 6}, (char*)"array\0"};
nctemp1469=&nctemp1470;
nctempchar1* nctemp1467= nctemp1469;
int nctemp1471=PtreeSetarray(nctemp1465,nctemp1467);
struct tree* nctemp1473= p;
struct nctempchar1 *nctemp1477;
static struct nctempchar1 nctemp1478 = {{ 5}, (char*)"aref\0"};
nctemp1477=&nctemp1478;
nctempchar1* nctemp1475= nctemp1477;
int nctemp1479=PtreeSetref(nctemp1473,nctemp1475);
struct tree* nctemp1481= p;
int nctemp1483= 1;
int nctemp1485=PtreeSetrank(nctemp1481,nctemp1483);
return 1;
}
}
}
}
}
}
struct symbol* nctemp1490= tp;
nctempchar1* nctemp1492=SymGetstruct(nctemp1490);
nctempchar1* nctemp1488= nctemp1492;
struct nctempchar1 *nctemp1495;
static struct nctempchar1 nctemp1496 = {{ 10}, (char*)"structdef\0"};
nctemp1495=&nctemp1496;
nctempchar1* nctemp1493= nctemp1495;
int nctemp1497=LibeStrcmp(nctemp1488,nctemp1493);
if(nctemp1497)
{
{
struct tree* nctemp1499= p;
struct nctempchar1 *nctemp1503;
static struct nctempchar1 nctemp1504 = {{ 43}, (char*)"Struct names can not be used as a variable\0"};
nctemp1503=&nctemp1504;
nctempchar1* nctemp1501= nctemp1503;
struct tree* nctemp1507= p;
nctempchar1* nctemp1509=PtreeGetdef(nctemp1507);
nctempchar1* nctemp1505= nctemp1509;
int nctemp1510=SemSerror(nctemp1499,nctemp1501,nctemp1505);
}
}
struct tree* nctemp1512= p;
struct symbol* nctemp1516= tp;
nctempchar1* nctemp1518=SymGetype(nctemp1516);
nctempchar1* nctemp1514= nctemp1518;
int nctemp1519=PtreeSetype(nctemp1512,nctemp1514);
struct tree* nctemp1521= p;
struct symbol* nctemp1525= tp;
nctempchar1* nctemp1527=SymGetarray(nctemp1525);
nctempchar1* nctemp1523= nctemp1527;
int nctemp1528=PtreeSetarray(nctemp1521,nctemp1523);
struct tree* nctemp1530= p;
struct symbol* nctemp1534= tp;
int nctemp1536=SymGetrank(nctemp1534);
int nctemp1532= nctemp1536;
int nctemp1537=PtreeSetrank(nctemp1530,nctemp1532);
struct tree* nctemp1539= p;
struct symbol* nctemp1543= tp;
nctempchar1* nctemp1545=SymGetstruct(nctemp1543);
nctempchar1* nctemp1541= nctemp1545;
int nctemp1546=PtreeSetstruct(nctemp1539,nctemp1541);
struct tree* nctemp1548= p;
struct symbol* nctemp1552= tp;
nctempchar1* nctemp1554=SymGetlval(nctemp1552);
nctempchar1* nctemp1550= nctemp1554;
int nctemp1555=PtreeSetlval(nctemp1548,nctemp1550);
struct tree* nctemp1560= p;
struct tree* nctemp1562=PtreeMvchild(nctemp1560);
np =nctemp1562;
int nctemp1563 = (np !=0);
if(nctemp1563)
{
{
struct tree* nctemp1570= np;
nctempchar1* nctemp1572=PtreeGetname(nctemp1570);
nctempchar1* nctemp1568= nctemp1572;
struct nctempchar1 *nctemp1575;
static struct nctempchar1 nctemp1576 = {{ 9}, (char*)"exprlist\0"};
nctemp1575=&nctemp1576;
nctempchar1* nctemp1573= nctemp1575;
int nctemp1577=LibeStrcmp(nctemp1568,nctemp1573);
if(nctemp1577)
{
{
struct tree* nctemp1579= p;
struct symbol* nctemp1581= tp;
int nctemp1583=SemArray(nctemp1579,nctemp1581);
struct tree* nctemp1587= np;
struct tree* nctemp1589=PtreeMvsister(nctemp1587);
int nctemp1584 = (nctemp1589 !=0);
if(nctemp1584)
{
{
struct tree* nctemp1592= p;
struct symbol* nctemp1594= tp;
int nctemp1596=SemStructure(nctemp1592,nctemp1594);
}
}
else{
{
struct tree* nctemp1600= p;
nctempchar1* nctemp1602=PtreeGetstruct(nctemp1600);
nctempchar1* nctemp1598= nctemp1602;
struct nctempchar1 *nctemp1605;
static struct nctempchar1 nctemp1606 = {{ 7}, (char*)"struct\0"};
nctemp1605=&nctemp1606;
nctempchar1* nctemp1603= nctemp1605;
int nctemp1607=LibeStrcmp(nctemp1598,nctemp1603);
if(nctemp1607)
{
{
struct tree* nctemp1609= p;
struct nctempchar1 *nctemp1613;
static struct nctempchar1 nctemp1614 = {{ 5}, (char*)"sref\0"};
nctemp1613=&nctemp1614;
nctempchar1* nctemp1611= nctemp1613;
int nctemp1615=PtreeSetref(nctemp1609,nctemp1611);
}
}
}
}
}
}
else{
{
struct tree* nctemp1619= np;
nctempchar1* nctemp1621=PtreeGetname(nctemp1619);
nctempchar1* nctemp1617= nctemp1621;
struct nctempchar1 *nctemp1624;
static struct nctempchar1 nctemp1625 = {{ 9}, (char*)"selector\0"};
nctemp1624=&nctemp1625;
nctempchar1* nctemp1622= nctemp1624;
int nctemp1626=LibeStrcmp(nctemp1617,nctemp1622);
if(nctemp1626)
{
{
struct tree* nctemp1628= p;
struct symbol* nctemp1630= tp;
int nctemp1632=SemStructure(nctemp1628,nctemp1630);
}
}
}
}
}
}
else{
{
struct tree* nctemp1636= p;
nctempchar1* nctemp1638=PtreeGetarray(nctemp1636);
nctempchar1* nctemp1634= nctemp1638;
struct nctempchar1 *nctemp1641;
static struct nctempchar1 nctemp1642 = {{ 6}, (char*)"array\0"};
nctemp1641=&nctemp1642;
nctempchar1* nctemp1639= nctemp1641;
int nctemp1643=LibeStrcmp(nctemp1634,nctemp1639);
if(nctemp1643)
{
{
struct tree* nctemp1645= p;
struct nctempchar1 *nctemp1649;
static struct nctempchar1 nctemp1650 = {{ 5}, (char*)"aref\0"};
nctemp1649=&nctemp1650;
nctempchar1* nctemp1647= nctemp1649;
int nctemp1651=PtreeSetref(nctemp1645,nctemp1647);
}
}
else{
{
struct tree* nctemp1655= p;
nctempchar1* nctemp1657=PtreeGetstruct(nctemp1655);
nctempchar1* nctemp1653= nctemp1657;
struct nctempchar1 *nctemp1660;
static struct nctempchar1 nctemp1661 = {{ 7}, (char*)"struct\0"};
nctemp1660=&nctemp1661;
nctempchar1* nctemp1658= nctemp1660;
int nctemp1662=LibeStrcmp(nctemp1653,nctemp1658);
if(nctemp1662)
{
{
struct tree* nctemp1664= p;
struct nctempchar1 *nctemp1668;
static struct nctempchar1 nctemp1669 = {{ 5}, (char*)"sref\0"};
nctemp1668=&nctemp1669;
nctempchar1* nctemp1666= nctemp1668;
int nctemp1670=PtreeSetref(nctemp1664,nctemp1666);
}
}
}
}
}
}
return 1;
}
}
int SemFcall (struct tree* p)
{
struct tree* np;
struct symbol* tp;
nctempchar1 *type;
{
struct tree* nctemp1675= p;
nctempchar1* nctemp1677=PtreeGetname(nctemp1675);
nctempchar1* nctemp1673= nctemp1677;
struct nctempchar1 *nctemp1680;
static struct nctempchar1 nctemp1681 = {{ 6}, (char*)"fcall\0"};
nctemp1680=&nctemp1681;
nctempchar1* nctemp1678= nctemp1680;
int nctemp1682=LibeStrcmp(nctemp1673,nctemp1678);
if(nctemp1682)
{
{
struct tree* nctemp1692= p;
nctempchar1* nctemp1694=PtreeGetdef(nctemp1692);
nctempchar1* nctemp1690= nctemp1694;
struct symbol* nctemp1697=SymGetetp();
struct symbol* nctemp1695= nctemp1697;
struct symbol* nctemp1698=SymLookup(nctemp1690,nctemp1695);
tp =nctemp1698;
int nctemp1683 = (tp ==0);
if(nctemp1683)
{
{
struct tree* nctemp1701= p;
struct nctempchar1 *nctemp1705;
static struct nctempchar1 nctemp1706 = {{ 20}, (char*)"Undeclared function\0"};
nctemp1705=&nctemp1706;
nctempchar1* nctemp1703= nctemp1705;
struct tree* nctemp1709= p;
nctempchar1* nctemp1711=PtreeGetdef(nctemp1709);
nctempchar1* nctemp1707= nctemp1711;
int nctemp1712=SemSerror(nctemp1701,nctemp1703,nctemp1707);
return 0;
}
}
struct symbol* nctemp1719= tp;
nctempchar1* nctemp1721=SymGetfunc(nctemp1719);
nctempchar1* nctemp1717= nctemp1721;
struct nctempchar1 *nctemp1724;
static struct nctempchar1 nctemp1725 = {{ 5}, (char*)"fdef\0"};
nctemp1724=&nctemp1725;
nctempchar1* nctemp1722= nctemp1724;
int nctemp1726=LibeStrcmp(nctemp1717,nctemp1722);
int nctemp1714 = (nctemp1726 ==0);
if(nctemp1714)
{
{
struct tree* nctemp1729= p;
struct nctempchar1 *nctemp1733;
static struct nctempchar1 nctemp1734 = {{ 15}, (char*)"Not a function\0"};
nctemp1733=&nctemp1734;
nctempchar1* nctemp1731= nctemp1733;
struct tree* nctemp1737= p;
nctempchar1* nctemp1739=PtreeGetdef(nctemp1737);
nctempchar1* nctemp1735= nctemp1739;
int nctemp1740=SemSerror(nctemp1729,nctemp1731,nctemp1735);
return 0;
}
}
struct tree* nctemp1743= p;
struct symbol* nctemp1747= tp;
nctempchar1* nctemp1749=SymGetype(nctemp1747);
nctempchar1* nctemp1745= nctemp1749;
int nctemp1750=PtreeSetype(nctemp1743,nctemp1745);
struct tree* nctemp1752= p;
struct symbol* nctemp1756= tp;
nctempchar1* nctemp1758=SymGetstruct(nctemp1756);
nctempchar1* nctemp1754= nctemp1758;
int nctemp1759=PtreeSetstruct(nctemp1752,nctemp1754);
struct tree* nctemp1761= p;
struct symbol* nctemp1765= tp;
nctempchar1* nctemp1767=SymGetarray(nctemp1765);
nctempchar1* nctemp1763= nctemp1767;
int nctemp1768=PtreeSetarray(nctemp1761,nctemp1763);
struct tree* nctemp1770= p;
struct symbol* nctemp1774= tp;
int nctemp1776=SymGetrank(nctemp1774);
int nctemp1772= nctemp1776;
int nctemp1777=PtreeSetrank(nctemp1770,nctemp1772);
struct tree* nctemp1781= p;
nctempchar1* nctemp1783=PtreeGetarray(nctemp1781);
nctempchar1* nctemp1779= nctemp1783;
struct nctempchar1 *nctemp1786;
static struct nctempchar1 nctemp1787 = {{ 6}, (char*)"array\0"};
nctemp1786=&nctemp1787;
nctempchar1* nctemp1784= nctemp1786;
int nctemp1788=LibeStrcmp(nctemp1779,nctemp1784);
if(nctemp1788)
{
{
struct tree* nctemp1790= p;
struct nctempchar1 *nctemp1794;
static struct nctempchar1 nctemp1795 = {{ 5}, (char*)"aref\0"};
nctemp1794=&nctemp1795;
nctempchar1* nctemp1792= nctemp1794;
int nctemp1796=PtreeSetref(nctemp1790,nctemp1792);
}
}
else{
{
struct tree* nctemp1800= p;
nctempchar1* nctemp1802=PtreeGetstruct(nctemp1800);
nctempchar1* nctemp1798= nctemp1802;
struct nctempchar1 *nctemp1805;
static struct nctempchar1 nctemp1806 = {{ 7}, (char*)"struct\0"};
nctemp1805=&nctemp1806;
nctempchar1* nctemp1803= nctemp1805;
int nctemp1807=LibeStrcmp(nctemp1798,nctemp1803);
if(nctemp1807)
{
{
struct tree* nctemp1809= p;
struct nctempchar1 *nctemp1813;
static struct nctempchar1 nctemp1814 = {{ 5}, (char*)"sref\0"};
nctemp1813=&nctemp1814;
nctempchar1* nctemp1811= nctemp1813;
int nctemp1815=PtreeSetref(nctemp1809,nctemp1811);
}
}
}
}
struct symbol* nctemp1820= tp;
struct symbol* nctemp1822=SymGetable(nctemp1820);
tp =nctemp1822;
struct nctempchar1 *nctemp1829;
static struct nctempchar1 nctemp1830 = {{ 9}, (char*)"#arglist\0"};
nctemp1829=&nctemp1830;
nctempchar1* nctemp1827= nctemp1829;
struct symbol* nctemp1831= tp;
struct symbol* nctemp1833=SymLookup(nctemp1827,nctemp1831);
tp =nctemp1833;
int nctemp1834 = (tp !=0);
if(nctemp1834)
{
{
struct symbol* nctemp1842= tp;
struct symbol* nctemp1844=SymGetable(nctemp1842);
tp =nctemp1844;
}
}
struct tree* nctemp1852= p;
struct tree* nctemp1854=PtreeMvchild(nctemp1852);
np =nctemp1854;
int nctemp1845 = (np ==0);
if(nctemp1845)
{
{
struct symbol* nctemp1863= tp;
struct symbol* nctemp1865=SymMvnext(nctemp1863);
tp =nctemp1865;
int nctemp1856 = (tp !=0);
if(nctemp1856)
{
{
struct tree* nctemp1868= p;
struct nctempchar1 *nctemp1872;
static struct nctempchar1 nctemp1873 = {{ 41}, (char*)"Function call does not match declaration\0"};
nctemp1872=&nctemp1873;
nctempchar1* nctemp1870= nctemp1872;
struct tree* nctemp1876= p;
nctempchar1* nctemp1878=PtreeGetdef(nctemp1876);
nctempchar1* nctemp1874= nctemp1878;
int nctemp1879=SemSerror(nctemp1868,nctemp1870,nctemp1874);
return 0;
}
}
return 1;
}
}
struct tree* nctemp1888= p;
struct tree* nctemp1890=PtreeMvchild(nctemp1888);
struct tree* nctemp1886= nctemp1890;
struct tree* nctemp1891=PtreeMvchild(nctemp1886);
np =nctemp1891;
int nctemp1892 = (np !=0);
int nctemp1896=nctemp1892;
while(nctemp1896)
{{
{
struct symbol* nctemp1901= tp;
struct symbol* nctemp1903=SymMvnext(nctemp1901);
tp =nctemp1903;
int nctemp1904 = (tp ==0);
if(nctemp1904)
{
{
struct tree* nctemp1909= p;
struct nctempchar1 *nctemp1913;
static struct nctempchar1 nctemp1914 = {{ 41}, (char*)"Function call does not match declaration\0"};
nctemp1913=&nctemp1914;
nctempchar1* nctemp1911= nctemp1913;
struct tree* nctemp1917= p;
nctempchar1* nctemp1919=PtreeGetdef(nctemp1917);
nctempchar1* nctemp1915= nctemp1919;
int nctemp1920=SemSerror(nctemp1909,nctemp1911,nctemp1915);
return 0;
}
}
struct symbol* nctemp1927= tp;
nctempchar1* nctemp1929=SymGetype(nctemp1927);
type=nctemp1929;
struct tree* nctemp1931= np;
struct tree* nctemp1933=SemExpr(nctemp1931);
nctempchar1* nctemp1937= type;
struct tree* nctemp1942= np;
nctempchar1* nctemp1944=PtreeGetype(nctemp1942);
nctempchar1* nctemp1940= nctemp1944;
int nctemp1945=LibeStrcmp(nctemp1937,nctemp1940);
int nctemp1934 = (nctemp1945 ==0);
if(nctemp1934)
{
{
struct tree* nctemp1948= p;
struct nctempchar1 *nctemp1952;
static struct nctempchar1 nctemp1953 = {{ 41}, (char*)"Function call does not match declaration\0"};
nctemp1952=&nctemp1953;
nctempchar1* nctemp1950= nctemp1952;
struct tree* nctemp1956= p;
nctempchar1* nctemp1958=PtreeGetdef(nctemp1956);
nctempchar1* nctemp1954= nctemp1958;
int nctemp1959=SemSerror(nctemp1948,nctemp1950,nctemp1954);
return 0;
}
}
struct symbol* nctemp1964= tp;
nctempchar1* nctemp1966=SymGetarray(nctemp1964);
nctempchar1* nctemp1962= nctemp1966;
struct nctempchar1 *nctemp1969;
static struct nctempchar1 nctemp1970 = {{ 6}, (char*)"array\0"};
nctemp1969=&nctemp1970;
nctempchar1* nctemp1967= nctemp1969;
int nctemp1971=LibeStrcmp(nctemp1962,nctemp1967);
if(nctemp1971)
{
{
struct tree* nctemp1977= np;
nctempchar1* nctemp1979=PtreeGetref(nctemp1977);
nctempchar1* nctemp1975= nctemp1979;
struct nctempchar1 *nctemp1982;
static struct nctempchar1 nctemp1983 = {{ 5}, (char*)"aref\0"};
nctemp1982=&nctemp1983;
nctempchar1* nctemp1980= nctemp1982;
int nctemp1984=LibeStrcmp(nctemp1975,nctemp1980);
int nctemp1972 = (nctemp1984 ==0);
if(nctemp1972)
{
{
struct tree* nctemp1987= p;
struct nctempchar1 *nctemp1991;
static struct nctempchar1 nctemp1992 = {{ 41}, (char*)"Function call does not match declaration\0"};
nctemp1991=&nctemp1992;
nctempchar1* nctemp1989= nctemp1991;
struct tree* nctemp1995= p;
nctempchar1* nctemp1997=PtreeGetdef(nctemp1995);
nctempchar1* nctemp1993= nctemp1997;
int nctemp1998=SemSerror(nctemp1987,nctemp1989,nctemp1993);
}
}
struct tree* nctemp2002= np;
int nctemp2004=PtreeGetrank(nctemp2002);
struct symbol* nctemp2006= tp;
int nctemp2008=SymGetrank(nctemp2006);
int nctemp1999 = (nctemp2004 !=nctemp2008);
if(nctemp1999)
{
{
struct tree* nctemp2010= p;
struct nctempchar1 *nctemp2014;
static struct nctempchar1 nctemp2015 = {{ 36}, (char*)"Illegal array rank in function call\0"};
nctemp2014=&nctemp2015;
nctempchar1* nctemp2012= nctemp2014;
struct tree* nctemp2018= p;
nctempchar1* nctemp2020=PtreeGetdef(nctemp2018);
nctempchar1* nctemp2016= nctemp2020;
int nctemp2021=SemSerror(nctemp2010,nctemp2012,nctemp2016);
}
}
}
}
struct tree* nctemp2026= np;
struct tree* nctemp2028=PtreeMvsister(nctemp2026);
np =nctemp2028;
}
}
int nctemp2029 = (np !=0);
nctemp1896=nctemp2029;}struct symbol* nctemp2036= tp;
struct symbol* nctemp2038=SymMvnext(nctemp2036);
int nctemp2033 = (nctemp2038 !=0);
if(nctemp2033)
{
{
struct tree* nctemp2041= p;
struct nctempchar1 *nctemp2045;
static struct nctempchar1 nctemp2046 = {{ 41}, (char*)"Function call does not match declaration\0"};
nctemp2045=&nctemp2046;
nctempchar1* nctemp2043= nctemp2045;
struct tree* nctemp2049= p;
nctempchar1* nctemp2051=PtreeGetdef(nctemp2049);
nctempchar1* nctemp2047= nctemp2051;
int nctemp2052=SemSerror(nctemp2041,nctemp2043,nctemp2047);
return 0;
}
}
}
}
return 1;
}
}
struct tree* SemExprlist (struct tree* p)
{
{
struct tree* nctemp2058= p;
nctempchar1* nctemp2060=PtreeGetname(nctemp2058);
nctempchar1* nctemp2056= nctemp2060;
struct nctempchar1 *nctemp2063;
static struct nctempchar1 nctemp2064 = {{ 9}, (char*)"exprlist\0"};
nctemp2063=&nctemp2064;
nctempchar1* nctemp2061= nctemp2063;
int nctemp2065=LibeStrcmp(nctemp2056,nctemp2061);
if(nctemp2065)
{
{
struct tree* nctemp2070= p;
struct tree* nctemp2072=PtreeMvchild(nctemp2070);
p =nctemp2072;
int nctemp2073 = (p !=0);
int nctemp2077=nctemp2073;
while(nctemp2077)
{{
{
struct tree* nctemp2079= p;
struct tree* nctemp2081=SemExpr(nctemp2079);
struct tree* nctemp2086= p;
struct tree* nctemp2088=PtreeMvsister(nctemp2086);
p =nctemp2088;
}
}
int nctemp2089 = (p !=0);
nctemp2077=nctemp2089;}}
}
return p;
}
}
int SemCopytype (struct tree* p,struct tree* np)
{
{
struct tree* nctemp2095= np;
struct tree* nctemp2099= p;
nctempchar1* nctemp2101=PtreeGetype(nctemp2099);
nctempchar1* nctemp2097= nctemp2101;
int nctemp2102=PtreeSetype(nctemp2095,nctemp2097);
struct tree* nctemp2104= np;
struct tree* nctemp2108= p;
nctempchar1* nctemp2110=PtreeGetstruct(nctemp2108);
nctempchar1* nctemp2106= nctemp2110;
int nctemp2111=PtreeSetstruct(nctemp2104,nctemp2106);
struct tree* nctemp2113= np;
struct tree* nctemp2117= p;
nctempchar1* nctemp2119=PtreeGetarray(nctemp2117);
nctempchar1* nctemp2115= nctemp2119;
int nctemp2120=PtreeSetarray(nctemp2113,nctemp2115);
struct tree* nctemp2122= np;
struct tree* nctemp2126= p;
nctempchar1* nctemp2128=PtreeGetref(nctemp2126);
nctempchar1* nctemp2124= nctemp2128;
int nctemp2129=PtreeSetref(nctemp2122,nctemp2124);
struct tree* nctemp2131= np;
struct tree* nctemp2135= p;
nctempchar1* nctemp2137=PtreeGetlval(nctemp2135);
nctempchar1* nctemp2133= nctemp2137;
int nctemp2138=PtreeSetlval(nctemp2131,nctemp2133);
struct tree* nctemp2140= np;
struct tree* nctemp2144= p;
int nctemp2146=PtreeGetrank(nctemp2144);
int nctemp2142= nctemp2146;
int nctemp2147=PtreeSetrank(nctemp2140,nctemp2142);
return 1;
}
}
int SemCopytype2 (struct tree* p,struct tree* np)
{
{
struct tree* nctemp2150= np;
struct tree* nctemp2154= p;
nctempchar1* nctemp2156=PtreeGetype(nctemp2154);
nctempchar1* nctemp2152= nctemp2156;
int nctemp2157=PtreeSetype(nctemp2150,nctemp2152);
struct tree* nctemp2166= p;
nctempchar1* nctemp2168=PtreeGetref(nctemp2166);
nctempchar1* nctemp2164= nctemp2168;
struct nctempchar1 *nctemp2171;
static struct nctempchar1 nctemp2172 = {{ 5}, (char*)"sref\0"};
nctemp2171=&nctemp2172;
nctempchar1* nctemp2169= nctemp2171;
int nctemp2173=LibeStrcmp(nctemp2164,nctemp2169);
int nctemp2161 = (nctemp2173 ==1);
struct tree* nctemp2181= p;
nctempchar1* nctemp2183=PtreeGetref(nctemp2181);
nctempchar1* nctemp2179= nctemp2183;
struct nctempchar1 *nctemp2186;
static struct nctempchar1 nctemp2187 = {{ 5}, (char*)"aref\0"};
nctemp2186=&nctemp2187;
nctempchar1* nctemp2184= nctemp2186;
int nctemp2188=LibeStrcmp(nctemp2179,nctemp2184);
int nctemp2176 = (nctemp2188 ==1);
int nctemp2158 = (nctemp2161 || nctemp2176);
if(nctemp2158)
{
{
struct tree* nctemp2191= np;
struct tree* nctemp2195= p;
nctempchar1* nctemp2197=PtreeGetstruct(nctemp2195);
nctempchar1* nctemp2193= nctemp2197;
int nctemp2198=PtreeSetstruct(nctemp2191,nctemp2193);
struct tree* nctemp2200= np;
struct tree* nctemp2204= p;
nctempchar1* nctemp2206=PtreeGetarray(nctemp2204);
nctempchar1* nctemp2202= nctemp2206;
int nctemp2207=PtreeSetarray(nctemp2200,nctemp2202);
struct tree* nctemp2209= np;
struct tree* nctemp2213= p;
nctempchar1* nctemp2215=PtreeGetref(nctemp2213);
nctempchar1* nctemp2211= nctemp2215;
int nctemp2216=PtreeSetref(nctemp2209,nctemp2211);
struct tree* nctemp2218= np;
struct tree* nctemp2222= p;
nctempchar1* nctemp2224=PtreeGetlval(nctemp2222);
nctempchar1* nctemp2220= nctemp2224;
int nctemp2225=PtreeSetlval(nctemp2218,nctemp2220);
struct tree* nctemp2227= np;
struct tree* nctemp2231= p;
int nctemp2233=PtreeGetrank(nctemp2231);
int nctemp2229= nctemp2233;
int nctemp2234=PtreeSetrank(nctemp2227,nctemp2229);
}
}
return 1;
}
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
{
struct nctempchar1 *nctemp2241;
static struct nctempchar1 nctemp2242 = {{ 5}, (char*)"void\0"};
nctemp2241=&nctemp2242;
resultref=nctemp2241;
struct nctempchar1 *nctemp2248;
static struct nctempchar1 nctemp2249 = {{ 5}, (char*)"void\0"};
nctemp2248=&nctemp2249;
expref=nctemp2248;
struct tree* nctemp2253= p;
nctempchar1* nctemp2255=PtreeGetname(nctemp2253);
nctempchar1* nctemp2251= nctemp2255;
struct nctempchar1 *nctemp2258;
static struct nctempchar1 nctemp2259 = {{ 5}, (char*)"cast\0"};
nctemp2258=&nctemp2259;
nctempchar1* nctemp2256= nctemp2258;
int nctemp2260=LibeStrcmp(nctemp2251,nctemp2256);
if(nctemp2260)
{
{
struct tree* nctemp2265= p;
struct tree* nctemp2267=PtreeMvchild(nctemp2265);
np =nctemp2267;
struct tree* nctemp2273= np;
nctempchar1* nctemp2275=PtreeGetdef(nctemp2273);
resultype=nctemp2275;
struct tree* nctemp2277= np;
nctempchar1* nctemp2279= resultype;
int nctemp2282=PtreeSetype(nctemp2277,nctemp2279);
resultrank = 0;
struct tree* nctemp2286= np;
nctempchar1* nctemp2288=PtreeGetarray(nctemp2286);
nctempchar1* nctemp2284= nctemp2288;
struct nctempchar1 *nctemp2291;
static struct nctempchar1 nctemp2292 = {{ 6}, (char*)"array\0"};
nctemp2291=&nctemp2292;
nctempchar1* nctemp2289= nctemp2291;
int nctemp2293=LibeStrcmp(nctemp2284,nctemp2289);
if(nctemp2293)
{
{
struct tree* nctemp2298= np;
struct tree* nctemp2300=PtreeMvchild(nctemp2298);
sp =nctemp2300;
struct tree* nctemp2305= sp;
struct tree* nctemp2307=PtreeMvchild(nctemp2305);
sp =nctemp2307;
struct tree* nctemp2312= sp;
struct tree* nctemp2314=PtreeMvchild(nctemp2312);
sp =nctemp2314;
struct tree* nctemp2316= sp;
struct tree* nctemp2318=SemExprlist(nctemp2316);
struct tree* nctemp2323= sp;
struct tree* nctemp2325=PtreeMvchild(nctemp2323);
sp =nctemp2325;
resultrank = 1;
struct tree* nctemp2333= sp;
struct tree* nctemp2335=PtreeMvsister(nctemp2333);
sp =nctemp2335;
int nctemp2326 = (sp !=0);
int nctemp2337=nctemp2326;
while(nctemp2337)
{{
{
resultrank = (resultrank + 1);
}
}
struct tree* nctemp2345= sp;
struct tree* nctemp2347=PtreeMvsister(nctemp2345);
sp =nctemp2347;
int nctemp2338 = (sp !=0);
nctemp2337=nctemp2338;}struct tree* nctemp2350= np;
int nctemp2352= resultrank;
int nctemp2354=PtreeSetrank(nctemp2350,nctemp2352);
struct tree* nctemp2356= p;
int nctemp2358= resultrank;
int nctemp2360=PtreeSetrank(nctemp2356,nctemp2358);
struct tree* nctemp2362= np;
struct nctempchar1 *nctemp2366;
static struct nctempchar1 nctemp2367 = {{ 5}, (char*)"aref\0"};
nctemp2366=&nctemp2367;
nctempchar1* nctemp2364= nctemp2366;
int nctemp2368=PtreeSetref(nctemp2362,nctemp2364);
struct nctempchar1 *nctemp2376;
static struct nctempchar1 nctemp2377 = {{ 5}, (char*)"aref\0"};
nctemp2376=&nctemp2377;
nctempchar1* nctemp2374= nctemp2376;
nctempchar1* nctemp2378=LibeStrsave(nctemp2374);
resultref=nctemp2378;
}
}
else{
{
struct tree* nctemp2382= np;
nctempchar1* nctemp2384=PtreeGetstruct(nctemp2382);
nctempchar1* nctemp2380= nctemp2384;
struct nctempchar1 *nctemp2387;
static struct nctempchar1 nctemp2388 = {{ 7}, (char*)"struct\0"};
nctemp2387=&nctemp2388;
nctempchar1* nctemp2385= nctemp2387;
int nctemp2389=LibeStrcmp(nctemp2380,nctemp2385);
if(nctemp2389)
{
{
struct tree* nctemp2391= np;
struct nctempchar1 *nctemp2395;
static struct nctempchar1 nctemp2396 = {{ 5}, (char*)"sref\0"};
nctemp2395=&nctemp2396;
nctempchar1* nctemp2393= nctemp2395;
int nctemp2397=PtreeSetref(nctemp2391,nctemp2393);
struct nctempchar1 *nctemp2405;
static struct nctempchar1 nctemp2406 = {{ 5}, (char*)"sref\0"};
nctemp2405=&nctemp2406;
nctempchar1* nctemp2403= nctemp2405;
nctempchar1* nctemp2407=LibeStrsave(nctemp2403);
resultref=nctemp2407;
}
}
else{
{
struct nctempchar1 *nctemp2415;
static struct nctempchar1 nctemp2416 = {{ 5}, (char*)"void\0"};
nctemp2415=&nctemp2416;
nctempchar1* nctemp2413= nctemp2415;
nctempchar1* nctemp2417=LibeStrsave(nctemp2413);
resultref=nctemp2417;
}
}
}
}
struct tree* nctemp2419= np;
struct tree* nctemp2421= p;
int nctemp2423=SemCopytype(nctemp2419,nctemp2421);
struct tree* nctemp2428= np;
struct tree* nctemp2430=PtreeMvsister(nctemp2428);
np =nctemp2430;
struct tree* nctemp2432= np;
struct tree* nctemp2434=SemExpr(nctemp2432);
struct tree* nctemp2440= np;
nctempchar1* nctemp2442=PtreeGetype(nctemp2440);
exptype=nctemp2442;
struct tree* nctemp2448= np;
nctempchar1* nctemp2450=PtreeGetref(nctemp2448);
expref=nctemp2450;
nctempchar1* nctemp2454= resultref;
nctempchar1* nctemp2457= expref;
int nctemp2460=LibeStrcmp(nctemp2454,nctemp2457);
int nctemp2451 = (nctemp2460 ==0);
if(nctemp2451)
{
{
struct tree* nctemp2463= p;
struct nctempchar1 *nctemp2467;
static struct nctempchar1 nctemp2468 = {{ 19}, (char*)"Illegal conversion\0"};
nctemp2467=&nctemp2468;
nctempchar1* nctemp2465= nctemp2467;
struct nctempchar1 *nctemp2471;
static struct nctempchar1 nctemp2472 = {{ 2}, (char*)" \0"};
nctemp2471=&nctemp2472;
nctempchar1* nctemp2469= nctemp2471;
int nctemp2473=SemSerror(nctemp2463,nctemp2465,nctemp2469);
return 0;
}
}
nctempchar1* nctemp2481= resultref;
struct nctempchar1 *nctemp2486;
static struct nctempchar1 nctemp2487 = {{ 5}, (char*)"aref\0"};
nctemp2486=&nctemp2487;
nctempchar1* nctemp2484= nctemp2486;
int nctemp2488=LibeStrcmp(nctemp2481,nctemp2484);
int nctemp2478 = (nctemp2488 ==0);
nctempchar1* nctemp2494= resultref;
struct nctempchar1 *nctemp2499;
static struct nctempchar1 nctemp2500 = {{ 5}, (char*)"sref\0"};
nctemp2499=&nctemp2500;
nctempchar1* nctemp2497= nctemp2499;
int nctemp2501=LibeStrcmp(nctemp2494,nctemp2497);
int nctemp2491 = (nctemp2501 ==0);
int nctemp2475 = (nctemp2478 || nctemp2491);
if(nctemp2475)
{
{
nctempchar1* nctemp2504= resultype;
struct nctempchar1 *nctemp2509;
static struct nctempchar1 nctemp2510 = {{ 8}, (char*)"complex\0"};
nctemp2509=&nctemp2510;
nctempchar1* nctemp2507= nctemp2509;
int nctemp2511=LibeStrcmp(nctemp2504,nctemp2507);
if(nctemp2511)
{
{
struct tree* nctemp2513= p;
struct nctempchar1 *nctemp2517;
static struct nctempchar1 nctemp2518 = {{ 19}, (char*)"Illegal conversion\0"};
nctemp2517=&nctemp2518;
nctempchar1* nctemp2515= nctemp2517;
struct nctempchar1 *nctemp2521;
static struct nctempchar1 nctemp2522 = {{ 2}, (char*)" \0"};
nctemp2521=&nctemp2522;
nctempchar1* nctemp2519= nctemp2521;
int nctemp2523=SemSerror(nctemp2513,nctemp2515,nctemp2519);
}
}
return 0;
nctempchar1* nctemp2526= resultype;
struct nctempchar1 *nctemp2531;
static struct nctempchar1 nctemp2532 = {{ 4}, (char*)"int\0"};
nctemp2531=&nctemp2532;
nctempchar1* nctemp2529= nctemp2531;
int nctemp2533=LibeStrcmp(nctemp2526,nctemp2529);
if(nctemp2533)
{
{
nctempchar1* nctemp2537= exptype;
struct nctempchar1 *nctemp2542;
static struct nctempchar1 nctemp2543 = {{ 5}, (char*)"char\0"};
nctemp2542=&nctemp2543;
nctempchar1* nctemp2540= nctemp2542;
int nctemp2544=LibeStrcmp(nctemp2537,nctemp2540);
int nctemp2534 = (nctemp2544 ==0);
if(nctemp2534)
{
{
nctempchar1* nctemp2549= exptype;
struct nctempchar1 *nctemp2554;
static struct nctempchar1 nctemp2555 = {{ 6}, (char*)"float\0"};
nctemp2554=&nctemp2555;
nctempchar1* nctemp2552= nctemp2554;
int nctemp2556=LibeStrcmp(nctemp2549,nctemp2552);
int nctemp2546 = (nctemp2556 ==0);
if(nctemp2546)
{
{
struct tree* nctemp2559= p;
struct nctempchar1 *nctemp2563;
static struct nctempchar1 nctemp2564 = {{ 19}, (char*)"Illegal conversion\0"};
nctemp2563=&nctemp2564;
nctempchar1* nctemp2561= nctemp2563;
struct nctempchar1 *nctemp2567;
static struct nctempchar1 nctemp2568 = {{ 2}, (char*)" \0"};
nctemp2567=&nctemp2568;
nctempchar1* nctemp2565= nctemp2567;
int nctemp2569=SemSerror(nctemp2559,nctemp2561,nctemp2565);
}
}
}
}
return 0;
}
}
else{
{
nctempchar1* nctemp2572= resultype;
struct nctempchar1 *nctemp2577;
static struct nctempchar1 nctemp2578 = {{ 5}, (char*)"char\0"};
nctemp2577=&nctemp2578;
nctempchar1* nctemp2575= nctemp2577;
int nctemp2579=LibeStrcmp(nctemp2572,nctemp2575);
if(nctemp2579)
{
{
nctempchar1* nctemp2583= exptype;
struct nctempchar1 *nctemp2588;
static struct nctempchar1 nctemp2589 = {{ 4}, (char*)"int\0"};
nctemp2588=&nctemp2589;
nctempchar1* nctemp2586= nctemp2588;
int nctemp2590=LibeStrcmp(nctemp2583,nctemp2586);
int nctemp2580 = (nctemp2590 ==0);
if(nctemp2580)
{
{
struct tree* nctemp2593= p;
struct nctempchar1 *nctemp2597;
static struct nctempchar1 nctemp2598 = {{ 19}, (char*)"Illegal conversion\0"};
nctemp2597=&nctemp2598;
nctempchar1* nctemp2595= nctemp2597;
struct nctempchar1 *nctemp2601;
static struct nctempchar1 nctemp2602 = {{ 2}, (char*)" \0"};
nctemp2601=&nctemp2602;
nctempchar1* nctemp2599= nctemp2601;
int nctemp2603=SemSerror(nctemp2593,nctemp2595,nctemp2599);
}
}
return 0;
}
}
else{
{
nctempchar1* nctemp2606= resultype;
struct nctempchar1 *nctemp2611;
static struct nctempchar1 nctemp2612 = {{ 6}, (char*)"float\0"};
nctemp2611=&nctemp2612;
nctempchar1* nctemp2609= nctemp2611;
int nctemp2613=LibeStrcmp(nctemp2606,nctemp2609);
if(nctemp2613)
{
{
nctempchar1* nctemp2617= exptype;
struct nctempchar1 *nctemp2622;
static struct nctempchar1 nctemp2623 = {{ 4}, (char*)"int\0"};
nctemp2622=&nctemp2623;
nctempchar1* nctemp2620= nctemp2622;
int nctemp2624=LibeStrcmp(nctemp2617,nctemp2620);
int nctemp2614 = (nctemp2624 ==0);
if(nctemp2614)
{
{
struct tree* nctemp2627= np;
struct nctempchar1 *nctemp2631;
static struct nctempchar1 nctemp2632 = {{ 19}, (char*)"Illegal conversion\0"};
nctemp2631=&nctemp2632;
nctempchar1* nctemp2629= nctemp2631;
struct nctempchar1 *nctemp2635;
static struct nctempchar1 nctemp2636 = {{ 2}, (char*)" \0"};
nctemp2635=&nctemp2636;
nctempchar1* nctemp2633= nctemp2635;
int nctemp2637=SemSerror(nctemp2627,nctemp2629,nctemp2633);
}
}
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
return 1;
}
}
int SemNew (struct tree* p)
{
struct tree* np;
struct tree* sp;
int rank;
{
struct tree* nctemp2643= p;
nctempchar1* nctemp2645=PtreeGetname(nctemp2643);
nctempchar1* nctemp2641= nctemp2645;
struct nctempchar1 *nctemp2648;
static struct nctempchar1 nctemp2649 = {{ 4}, (char*)"new\0"};
nctemp2648=&nctemp2649;
nctempchar1* nctemp2646= nctemp2648;
int nctemp2650=LibeStrcmp(nctemp2641,nctemp2646);
if(nctemp2650)
{
{
struct tree* nctemp2655= p;
struct tree* nctemp2657=PtreeMvchild(nctemp2655);
np =nctemp2657;
struct tree* nctemp2659= np;
nctempchar1* nctemp2661=PtreeGetdef(nctemp2659);
struct tree* nctemp2663= np;
struct tree* nctemp2667= np;
nctempchar1* nctemp2669=PtreeGetdef(nctemp2667);
nctempchar1* nctemp2665= nctemp2669;
int nctemp2670=PtreeSetype(nctemp2663,nctemp2665);
struct tree* nctemp2672= np;
struct tree* nctemp2674= p;
int nctemp2676=SemCopytype(nctemp2672,nctemp2674);
struct tree* nctemp2682= np;
nctempchar1* nctemp2684=PtreeGetarray(nctemp2682);
nctempchar1* nctemp2680= nctemp2684;
struct nctempchar1 *nctemp2687;
static struct nctempchar1 nctemp2688 = {{ 6}, (char*)"array\0"};
nctemp2687=&nctemp2688;
nctempchar1* nctemp2685= nctemp2687;
int nctemp2689=LibeStrcmp(nctemp2680,nctemp2685);
int nctemp2677 = (nctemp2689 ==0);
if(nctemp2677)
{
{
struct tree* nctemp2696= np;
nctempchar1* nctemp2698=PtreeGetstruct(nctemp2696);
nctempchar1* nctemp2694= nctemp2698;
struct nctempchar1 *nctemp2701;
static struct nctempchar1 nctemp2702 = {{ 7}, (char*)"struct\0"};
nctemp2701=&nctemp2702;
nctempchar1* nctemp2699= nctemp2701;
int nctemp2703=LibeStrcmp(nctemp2694,nctemp2699);
int nctemp2691 = (nctemp2703 ==0);
if(nctemp2691)
{
{
struct tree* nctemp2706= np;
struct nctempchar1 *nctemp2710;
static struct nctempchar1 nctemp2711 = {{ 44}, (char*)"Argument limited to array or structure type\0"};
nctemp2710=&nctemp2711;
nctempchar1* nctemp2708= nctemp2710;
struct nctempchar1 *nctemp2714;
static struct nctempchar1 nctemp2715 = {{ 3}, (char*)"  \0"};
nctemp2714=&nctemp2715;
nctempchar1* nctemp2712= nctemp2714;
int nctemp2716=SemSerror(nctemp2706,nctemp2708,nctemp2712);
}
}
}
}
struct tree* nctemp2720= np;
nctempchar1* nctemp2722=PtreeGetarray(nctemp2720);
nctempchar1* nctemp2718= nctemp2722;
struct nctempchar1 *nctemp2725;
static struct nctempchar1 nctemp2726 = {{ 6}, (char*)"array\0"};
nctemp2725=&nctemp2726;
nctempchar1* nctemp2723= nctemp2725;
int nctemp2727=LibeStrcmp(nctemp2718,nctemp2723);
if(nctemp2727)
{
{
struct tree* nctemp2732= np;
struct tree* nctemp2734=PtreeMvchild(nctemp2732);
sp =nctemp2734;
struct tree* nctemp2739= sp;
struct tree* nctemp2741=PtreeMvchild(nctemp2739);
sp =nctemp2741;
struct tree* nctemp2746= sp;
struct tree* nctemp2748=PtreeMvchild(nctemp2746);
sp =nctemp2748;
struct tree* nctemp2753= sp;
struct tree* nctemp2755=PtreeMvchild(nctemp2753);
sp =nctemp2755;
rank = 1;
int nctemp2756 = (sp ==0);
if(nctemp2756)
{
{
struct tree* nctemp2761= np;
struct nctempchar1 *nctemp2765;
static struct nctempchar1 nctemp2766 = {{ 35}, (char*)"Missing array size in new operator\0"};
nctemp2765=&nctemp2766;
nctempchar1* nctemp2763= nctemp2765;
struct nctempchar1 *nctemp2769;
static struct nctempchar1 nctemp2770 = {{ 2}, (char*)" \0"};
nctemp2769=&nctemp2770;
nctempchar1* nctemp2767= nctemp2769;
int nctemp2771=SemSerror(nctemp2761,nctemp2763,nctemp2767);
}
}
struct tree* nctemp2773= sp;
struct tree* nctemp2775=SemExpr(nctemp2773);
struct tree* nctemp2783= sp;
struct tree* nctemp2785=PtreeMvsister(nctemp2783);
sp =nctemp2785;
int nctemp2776 = (sp !=0);
int nctemp2787=nctemp2776;
while(nctemp2787)
{{
{
struct tree* nctemp2789= sp;
struct tree* nctemp2791=SemExpr(nctemp2789);
rank = (rank + 1);
}
}
struct tree* nctemp2799= sp;
struct tree* nctemp2801=PtreeMvsister(nctemp2799);
sp =nctemp2801;
int nctemp2792 = (sp !=0);
nctemp2787=nctemp2792;}struct tree* nctemp2804= np;
int nctemp2806= rank;
int nctemp2808=PtreeSetrank(nctemp2804,nctemp2806);
struct tree* nctemp2810= p;
int nctemp2812= rank;
int nctemp2814=PtreeSetrank(nctemp2810,nctemp2812);
struct tree* nctemp2816= p;
struct nctempchar1 *nctemp2820;
static struct nctempchar1 nctemp2821 = {{ 5}, (char*)"aref\0"};
nctemp2820=&nctemp2821;
nctempchar1* nctemp2818= nctemp2820;
int nctemp2822=PtreeSetref(nctemp2816,nctemp2818);
}
}
else{
{
struct tree* nctemp2824= p;
struct nctempchar1 *nctemp2828;
static struct nctempchar1 nctemp2829 = {{ 5}, (char*)"sref\0"};
nctemp2828=&nctemp2829;
nctempchar1* nctemp2826= nctemp2828;
int nctemp2830=PtreeSetref(nctemp2824,nctemp2826);
}
}
}
}
return 1;
}
}
int SemDelete (struct tree* p)
{
struct tree* np;
{
struct tree* nctemp2835= p;
nctempchar1* nctemp2837=PtreeGetname(nctemp2835);
nctempchar1* nctemp2833= nctemp2837;
struct nctempchar1 *nctemp2840;
static struct nctempchar1 nctemp2841 = {{ 7}, (char*)"delete\0"};
nctemp2840=&nctemp2841;
nctempchar1* nctemp2838= nctemp2840;
int nctemp2842=LibeStrcmp(nctemp2833,nctemp2838);
if(nctemp2842)
{
{
struct tree* nctemp2847= p;
struct tree* nctemp2849=PtreeMvchild(nctemp2847);
np =nctemp2849;
struct tree* nctemp2851= np;
struct tree* nctemp2853=SemExpr(nctemp2851);
struct tree* nctemp2859= np;
nctempchar1* nctemp2861=PtreeGetref(nctemp2859);
nctempchar1* nctemp2857= nctemp2861;
struct nctempchar1 *nctemp2864;
static struct nctempchar1 nctemp2865 = {{ 5}, (char*)"aref\0"};
nctemp2864=&nctemp2865;
nctempchar1* nctemp2862= nctemp2864;
int nctemp2866=LibeStrcmp(nctemp2857,nctemp2862);
int nctemp2854 = (nctemp2866 ==0);
if(nctemp2854)
{
{
struct tree* nctemp2873= np;
nctempchar1* nctemp2875=PtreeGetref(nctemp2873);
nctempchar1* nctemp2871= nctemp2875;
struct nctempchar1 *nctemp2878;
static struct nctempchar1 nctemp2879 = {{ 5}, (char*)"sref\0"};
nctemp2878=&nctemp2879;
nctempchar1* nctemp2876= nctemp2878;
int nctemp2880=LibeStrcmp(nctemp2871,nctemp2876);
int nctemp2868 = (nctemp2880 ==0);
if(nctemp2868)
{
{
struct tree* nctemp2883= p;
struct nctempchar1 *nctemp2887;
static struct nctempchar1 nctemp2888 = {{ 25}, (char*)"not a array or structure\0"};
nctemp2887=&nctemp2888;
nctempchar1* nctemp2885= nctemp2887;
struct tree* nctemp2891= p;
nctempchar1* nctemp2893=PtreeGetdef(nctemp2891);
nctempchar1* nctemp2889= nctemp2893;
int nctemp2894=SemSerror(nctemp2883,nctemp2885,nctemp2889);
}
}
}
}
else{
{
struct tree* nctemp2896= p;
struct tree* nctemp2900= np;
nctempchar1* nctemp2902=PtreeGetype(nctemp2900);
nctempchar1* nctemp2898= nctemp2902;
int nctemp2903=PtreeSetype(nctemp2896,nctemp2898);
struct tree* nctemp2905= p;
struct tree* nctemp2909= np;
nctempchar1* nctemp2911=PtreeGetref(nctemp2909);
nctempchar1* nctemp2907= nctemp2911;
int nctemp2912=PtreeSetref(nctemp2905,nctemp2907);
}
}
}
}
return 1;
}
}
int SemCmplx (struct tree* p)
{
struct tree* np;
{
struct tree* nctemp2917= p;
nctempchar1* nctemp2919=PtreeGetname(nctemp2917);
nctempchar1* nctemp2915= nctemp2919;
struct nctempchar1 *nctemp2922;
static struct nctempchar1 nctemp2923 = {{ 6}, (char*)"cmplx\0"};
nctemp2922=&nctemp2923;
nctempchar1* nctemp2920= nctemp2922;
int nctemp2924=LibeStrcmp(nctemp2915,nctemp2920);
if(nctemp2924)
{
{
struct tree* nctemp2929= p;
struct tree* nctemp2931=PtreeMvchild(nctemp2929);
np =nctemp2931;
struct tree* nctemp2936= np;
struct tree* nctemp2938=PtreeMvchild(nctemp2936);
np =nctemp2938;
struct tree* nctemp2940= np;
struct tree* nctemp2942=SemExpr(nctemp2940);
struct tree* nctemp2948= np;
nctempchar1* nctemp2950=PtreeGetype(nctemp2948);
nctempchar1* nctemp2946= nctemp2950;
struct nctempchar1 *nctemp2953;
static struct nctempchar1 nctemp2954 = {{ 6}, (char*)"float\0"};
nctemp2953=&nctemp2954;
nctempchar1* nctemp2951= nctemp2953;
int nctemp2955=LibeStrcmp(nctemp2946,nctemp2951);
int nctemp2943 = (nctemp2955 ==0);
if(nctemp2943)
{
{
struct tree* nctemp2958= p;
struct nctempchar1 *nctemp2962;
static struct nctempchar1 nctemp2963 = {{ 33}, (char*)"Argument to cmplx is not a float\0"};
nctemp2962=&nctemp2963;
nctempchar1* nctemp2960= nctemp2962;
struct tree* nctemp2966= p;
nctempchar1* nctemp2968=PtreeGetdef(nctemp2966);
nctempchar1* nctemp2964= nctemp2968;
int nctemp2969=SemSerror(nctemp2958,nctemp2960,nctemp2964);
return 0;
}
}
struct tree* nctemp2976= np;
nctempchar1* nctemp2978=PtreeGetref(nctemp2976);
nctempchar1* nctemp2974= nctemp2978;
struct nctempchar1 *nctemp2981;
static struct nctempchar1 nctemp2982 = {{ 5}, (char*)"aref\0"};
nctemp2981=&nctemp2982;
nctempchar1* nctemp2979= nctemp2981;
int nctemp2983=LibeStrcmp(nctemp2974,nctemp2979);
struct tree* nctemp2987= np;
nctempchar1* nctemp2989=PtreeGetref(nctemp2987);
nctempchar1* nctemp2985= nctemp2989;
struct nctempchar1 *nctemp2992;
static struct nctempchar1 nctemp2993 = {{ 5}, (char*)"sref\0"};
nctemp2992=&nctemp2993;
nctempchar1* nctemp2990= nctemp2992;
int nctemp2994=LibeStrcmp(nctemp2985,nctemp2990);
int nctemp2971 = (nctemp2983 || nctemp2994);
if(nctemp2971)
{
{
struct tree* nctemp2996= p;
struct nctempchar1 *nctemp3000;
static struct nctempchar1 nctemp3001 = {{ 34}, (char*)"Argument to cmplx is not a scalar\0"};
nctemp3000=&nctemp3001;
nctempchar1* nctemp2998= nctemp3000;
struct tree* nctemp3004= p;
nctempchar1* nctemp3006=PtreeGetdef(nctemp3004);
nctempchar1* nctemp3002= nctemp3006;
int nctemp3007=SemSerror(nctemp2996,nctemp2998,nctemp3002);
return 0;
}
}
struct tree* nctemp3013= np;
struct tree* nctemp3015=PtreeMvsister(nctemp3013);
np =nctemp3015;
struct tree* nctemp3017= np;
struct tree* nctemp3019=SemExpr(nctemp3017);
struct tree* nctemp3025= np;
nctempchar1* nctemp3027=PtreeGetype(nctemp3025);
nctempchar1* nctemp3023= nctemp3027;
struct nctempchar1 *nctemp3030;
static struct nctempchar1 nctemp3031 = {{ 6}, (char*)"float\0"};
nctemp3030=&nctemp3031;
nctempchar1* nctemp3028= nctemp3030;
int nctemp3032=LibeStrcmp(nctemp3023,nctemp3028);
int nctemp3020 = (nctemp3032 ==0);
if(nctemp3020)
{
{
struct tree* nctemp3035= p;
struct nctempchar1 *nctemp3039;
static struct nctempchar1 nctemp3040 = {{ 33}, (char*)"Argument to cmplx is not a float\0"};
nctemp3039=&nctemp3040;
nctempchar1* nctemp3037= nctemp3039;
struct tree* nctemp3043= p;
nctempchar1* nctemp3045=PtreeGetdef(nctemp3043);
nctempchar1* nctemp3041= nctemp3045;
int nctemp3046=SemSerror(nctemp3035,nctemp3037,nctemp3041);
}
}
struct tree* nctemp3052= np;
nctempchar1* nctemp3054=PtreeGetref(nctemp3052);
nctempchar1* nctemp3050= nctemp3054;
struct nctempchar1 *nctemp3057;
static struct nctempchar1 nctemp3058 = {{ 5}, (char*)"aref\0"};
nctemp3057=&nctemp3058;
nctempchar1* nctemp3055= nctemp3057;
int nctemp3059=LibeStrcmp(nctemp3050,nctemp3055);
struct tree* nctemp3063= np;
nctempchar1* nctemp3065=PtreeGetref(nctemp3063);
nctempchar1* nctemp3061= nctemp3065;
struct nctempchar1 *nctemp3068;
static struct nctempchar1 nctemp3069 = {{ 5}, (char*)"sref\0"};
nctemp3068=&nctemp3069;
nctempchar1* nctemp3066= nctemp3068;
int nctemp3070=LibeStrcmp(nctemp3061,nctemp3066);
int nctemp3047 = (nctemp3059 || nctemp3070);
if(nctemp3047)
{
{
struct tree* nctemp3072= p;
struct nctempchar1 *nctemp3076;
static struct nctempchar1 nctemp3077 = {{ 34}, (char*)"Argument to cmplx is not a scalar\0"};
nctemp3076=&nctemp3077;
nctempchar1* nctemp3074= nctemp3076;
struct tree* nctemp3080= p;
nctempchar1* nctemp3082=PtreeGetdef(nctemp3080);
nctempchar1* nctemp3078= nctemp3082;
int nctemp3083=SemSerror(nctemp3072,nctemp3074,nctemp3078);
return 0;
}
}
struct tree* nctemp3086= p;
struct nctempchar1 *nctemp3090;
static struct nctempchar1 nctemp3091 = {{ 8}, (char*)"complex\0"};
nctemp3090=&nctemp3091;
nctempchar1* nctemp3088= nctemp3090;
int nctemp3092=PtreeSetype(nctemp3086,nctemp3088);
}
}
return 1;
}
}
int SemRe (struct tree* p)
{
struct tree* np;
{
struct tree* nctemp3097= p;
nctempchar1* nctemp3099=PtreeGetname(nctemp3097);
nctempchar1* nctemp3095= nctemp3099;
struct nctempchar1 *nctemp3102;
static struct nctempchar1 nctemp3103 = {{ 3}, (char*)"re\0"};
nctemp3102=&nctemp3103;
nctempchar1* nctemp3100= nctemp3102;
int nctemp3104=LibeStrcmp(nctemp3095,nctemp3100);
if(nctemp3104)
{
{
struct tree* nctemp3109= p;
struct tree* nctemp3111=PtreeMvchild(nctemp3109);
np =nctemp3111;
struct tree* nctemp3113= np;
struct tree* nctemp3115=SemExpr(nctemp3113);
struct tree* nctemp3121= np;
nctempchar1* nctemp3123=PtreeGetype(nctemp3121);
nctempchar1* nctemp3119= nctemp3123;
struct nctempchar1 *nctemp3126;
static struct nctempchar1 nctemp3127 = {{ 8}, (char*)"complex\0"};
nctemp3126=&nctemp3127;
nctempchar1* nctemp3124= nctemp3126;
int nctemp3128=LibeStrcmp(nctemp3119,nctemp3124);
int nctemp3116 = (nctemp3128 ==0);
if(nctemp3116)
{
{
struct tree* nctemp3131= p;
struct nctempchar1 *nctemp3135;
static struct nctempchar1 nctemp3136 = {{ 40}, (char*)"Argument to re is not a of type complex\0"};
nctemp3135=&nctemp3136;
nctempchar1* nctemp3133= nctemp3135;
struct tree* nctemp3139= p;
nctempchar1* nctemp3141=PtreeGetdef(nctemp3139);
nctempchar1* nctemp3137= nctemp3141;
int nctemp3142=SemSerror(nctemp3131,nctemp3133,nctemp3137);
return 0;
}
}
struct tree* nctemp3149= np;
nctempchar1* nctemp3151=PtreeGetref(nctemp3149);
nctempchar1* nctemp3147= nctemp3151;
struct nctempchar1 *nctemp3154;
static struct nctempchar1 nctemp3155 = {{ 5}, (char*)"aref\0"};
nctemp3154=&nctemp3155;
nctempchar1* nctemp3152= nctemp3154;
int nctemp3156=LibeStrcmp(nctemp3147,nctemp3152);
struct tree* nctemp3160= np;
nctempchar1* nctemp3162=PtreeGetref(nctemp3160);
nctempchar1* nctemp3158= nctemp3162;
struct nctempchar1 *nctemp3165;
static struct nctempchar1 nctemp3166 = {{ 5}, (char*)"sref\0"};
nctemp3165=&nctemp3166;
nctempchar1* nctemp3163= nctemp3165;
int nctemp3167=LibeStrcmp(nctemp3158,nctemp3163);
int nctemp3144 = (nctemp3156 || nctemp3167);
if(nctemp3144)
{
{
struct tree* nctemp3169= p;
struct nctempchar1 *nctemp3173;
static struct nctempchar1 nctemp3174 = {{ 31}, (char*)"Argument to re is not a scalar\0"};
nctemp3173=&nctemp3174;
nctempchar1* nctemp3171= nctemp3173;
struct tree* nctemp3177= p;
nctempchar1* nctemp3179=PtreeGetdef(nctemp3177);
nctempchar1* nctemp3175= nctemp3179;
int nctemp3180=SemSerror(nctemp3169,nctemp3171,nctemp3175);
return 0;
}
}
struct tree* nctemp3183= p;
struct nctempchar1 *nctemp3187;
static struct nctempchar1 nctemp3188 = {{ 6}, (char*)"float\0"};
nctemp3187=&nctemp3188;
nctempchar1* nctemp3185= nctemp3187;
int nctemp3189=PtreeSetype(nctemp3183,nctemp3185);
}
}
return 1;
}
}
int SemLen (struct tree* p)
{
struct tree* np;
{
struct tree* nctemp3196= p;
nctempchar1* nctemp3198=PtreeGetname(nctemp3196);
nctempchar1* nctemp3194= nctemp3198;
struct nctempchar1 *nctemp3201;
static struct nctempchar1 nctemp3202 = {{ 4}, (char*)"len\0"};
nctemp3201=&nctemp3202;
nctempchar1* nctemp3199= nctemp3201;
int nctemp3203=LibeStrcmp(nctemp3194,nctemp3199);
int nctemp3191 = (nctemp3203 ==1);
if(nctemp3191)
{
{
struct tree* nctemp3206= p;
struct nctempchar1 *nctemp3210;
static struct nctempchar1 nctemp3211 = {{ 4}, (char*)"int\0"};
nctemp3210=&nctemp3211;
nctempchar1* nctemp3208= nctemp3210;
int nctemp3212=PtreeSetype(nctemp3206,nctemp3208);
struct tree* nctemp3217= p;
struct tree* nctemp3219=PtreeMvchild(nctemp3217);
np =nctemp3219;
struct tree* nctemp3221= np;
struct tree* nctemp3223=SemExpr(nctemp3221);
struct tree* nctemp3229= np;
nctempchar1* nctemp3231=PtreeGetref(nctemp3229);
nctempchar1* nctemp3227= nctemp3231;
struct nctempchar1 *nctemp3234;
static struct nctempchar1 nctemp3235 = {{ 5}, (char*)"aref\0"};
nctemp3234=&nctemp3235;
nctempchar1* nctemp3232= nctemp3234;
int nctemp3236=LibeStrcmp(nctemp3227,nctemp3232);
int nctemp3224 = (nctemp3236 ==0);
if(nctemp3224)
{
{
struct tree* nctemp3239= p;
struct nctempchar1 *nctemp3243;
static struct nctempchar1 nctemp3244 = {{ 13}, (char*)"not an array\0"};
nctemp3243=&nctemp3244;
nctempchar1* nctemp3241= nctemp3243;
struct tree* nctemp3247= p;
nctempchar1* nctemp3249=PtreeGetdef(nctemp3247);
nctempchar1* nctemp3245= nctemp3249;
int nctemp3250=SemSerror(nctemp3239,nctemp3241,nctemp3245);
}
}
struct tree* nctemp3255= np;
struct tree* nctemp3257=PtreeMvsister(nctemp3255);
np =nctemp3257;
struct tree* nctemp3259= np;
struct tree* nctemp3261=SemExpr(nctemp3259);
struct tree* nctemp3265= np;
nctempchar1* nctemp3267=PtreeGetref(nctemp3265);
nctempchar1* nctemp3263= nctemp3267;
struct nctempchar1 *nctemp3270;
static struct nctempchar1 nctemp3271 = {{ 5}, (char*)"aref\0"};
nctemp3270=&nctemp3271;
nctempchar1* nctemp3268= nctemp3270;
int nctemp3272=LibeStrcmp(nctemp3263,nctemp3268);
if(nctemp3272)
{
{
struct tree* nctemp3274= p;
struct nctempchar1 *nctemp3278;
static struct nctempchar1 nctemp3279 = {{ 13}, (char*)"not a scalar\0"};
nctemp3278=&nctemp3279;
nctempchar1* nctemp3276= nctemp3278;
struct tree* nctemp3282= p;
nctempchar1* nctemp3284=PtreeGetdef(nctemp3282);
nctempchar1* nctemp3280= nctemp3284;
int nctemp3285=SemSerror(nctemp3274,nctemp3276,nctemp3280);
}
}
struct tree* nctemp3291= np;
nctempchar1* nctemp3293=PtreeGetype(nctemp3291);
nctempchar1* nctemp3289= nctemp3293;
struct nctempchar1 *nctemp3296;
static struct nctempchar1 nctemp3297 = {{ 4}, (char*)"int\0"};
nctemp3296=&nctemp3297;
nctempchar1* nctemp3294= nctemp3296;
int nctemp3298=LibeStrcmp(nctemp3289,nctemp3294);
int nctemp3286 = (nctemp3298 ==0);
if(nctemp3286)
{
{
struct tree* nctemp3301= p;
struct nctempchar1 *nctemp3305;
static struct nctempchar1 nctemp3306 = {{ 26}, (char*)"not an integer expression\0"};
nctemp3305=&nctemp3306;
nctempchar1* nctemp3303= nctemp3305;
struct tree* nctemp3309= p;
nctempchar1* nctemp3311=PtreeGetdef(nctemp3309);
nctempchar1* nctemp3307= nctemp3311;
int nctemp3312=SemSerror(nctemp3301,nctemp3303,nctemp3307);
}
}
struct tree* nctemp3320= np;
struct tree* nctemp3322=PtreeMvsister(nctemp3320);
np =nctemp3322;
int nctemp3313 = (np !=0);
if(nctemp3313)
{
{
struct tree* nctemp3325= p;
struct nctempchar1 *nctemp3329;
static struct nctempchar1 nctemp3330 = {{ 19}, (char*)"too many arguments\0"};
nctemp3329=&nctemp3330;
nctempchar1* nctemp3327= nctemp3329;
struct tree* nctemp3333= p;
nctempchar1* nctemp3335=PtreeGetdef(nctemp3333);
nctempchar1* nctemp3331= nctemp3335;
int nctemp3336=SemSerror(nctemp3325,nctemp3327,nctemp3331);
}
}
}
}
return 1;
}
}
int SemIm (struct tree* p)
{
struct tree* np;
{
struct tree* nctemp3341= p;
nctempchar1* nctemp3343=PtreeGetname(nctemp3341);
nctempchar1* nctemp3339= nctemp3343;
struct nctempchar1 *nctemp3346;
static struct nctempchar1 nctemp3347 = {{ 3}, (char*)"im\0"};
nctemp3346=&nctemp3347;
nctempchar1* nctemp3344= nctemp3346;
int nctemp3348=LibeStrcmp(nctemp3339,nctemp3344);
if(nctemp3348)
{
{
struct tree* nctemp3353= p;
struct tree* nctemp3355=PtreeMvchild(nctemp3353);
np =nctemp3355;
struct tree* nctemp3357= np;
struct tree* nctemp3359=SemExpr(nctemp3357);
struct tree* nctemp3365= np;
nctempchar1* nctemp3367=PtreeGetype(nctemp3365);
nctempchar1* nctemp3363= nctemp3367;
struct nctempchar1 *nctemp3370;
static struct nctempchar1 nctemp3371 = {{ 8}, (char*)"complex\0"};
nctemp3370=&nctemp3371;
nctempchar1* nctemp3368= nctemp3370;
int nctemp3372=LibeStrcmp(nctemp3363,nctemp3368);
int nctemp3360 = (nctemp3372 ==0);
if(nctemp3360)
{
{
struct tree* nctemp3375= p;
struct nctempchar1 *nctemp3379;
static struct nctempchar1 nctemp3380 = {{ 38}, (char*)"Argument to re is not of type complex\0"};
nctemp3379=&nctemp3380;
nctempchar1* nctemp3377= nctemp3379;
struct tree* nctemp3383= p;
nctempchar1* nctemp3385=PtreeGetdef(nctemp3383);
nctempchar1* nctemp3381= nctemp3385;
int nctemp3386=SemSerror(nctemp3375,nctemp3377,nctemp3381);
return 0;
}
}
struct tree* nctemp3393= np;
nctempchar1* nctemp3395=PtreeGetref(nctemp3393);
nctempchar1* nctemp3391= nctemp3395;
struct nctempchar1 *nctemp3398;
static struct nctempchar1 nctemp3399 = {{ 5}, (char*)"aref\0"};
nctemp3398=&nctemp3399;
nctempchar1* nctemp3396= nctemp3398;
int nctemp3400=LibeStrcmp(nctemp3391,nctemp3396);
struct tree* nctemp3404= np;
nctempchar1* nctemp3406=PtreeGetref(nctemp3404);
nctempchar1* nctemp3402= nctemp3406;
struct nctempchar1 *nctemp3409;
static struct nctempchar1 nctemp3410 = {{ 5}, (char*)"sref\0"};
nctemp3409=&nctemp3410;
nctempchar1* nctemp3407= nctemp3409;
int nctemp3411=LibeStrcmp(nctemp3402,nctemp3407);
int nctemp3388 = (nctemp3400 || nctemp3411);
if(nctemp3388)
{
{
struct tree* nctemp3413= p;
struct nctempchar1 *nctemp3417;
static struct nctempchar1 nctemp3418 = {{ 31}, (char*)"Argument to re is not a scalar\0"};
nctemp3417=&nctemp3418;
nctempchar1* nctemp3415= nctemp3417;
struct tree* nctemp3421= p;
nctempchar1* nctemp3423=PtreeGetdef(nctemp3421);
nctempchar1* nctemp3419= nctemp3423;
int nctemp3424=SemSerror(nctemp3413,nctemp3415,nctemp3419);
return 0;
}
}
struct tree* nctemp3427= p;
struct nctempchar1 *nctemp3431;
static struct nctempchar1 nctemp3432 = {{ 6}, (char*)"float\0"};
nctemp3431=&nctemp3432;
nctempchar1* nctemp3429= nctemp3431;
int nctemp3433=PtreeSetype(nctemp3427,nctemp3429);
}
}
return 1;
}
}
int SemSizeof (struct tree* p)
{
{
struct tree* nctemp3438= p;
nctempchar1* nctemp3440=PtreeGetname(nctemp3438);
nctempchar1* nctemp3436= nctemp3440;
struct nctempchar1 *nctemp3443;
static struct nctempchar1 nctemp3444 = {{ 7}, (char*)"sizeof\0"};
nctemp3443=&nctemp3444;
nctempchar1* nctemp3441= nctemp3443;
int nctemp3445=LibeStrcmp(nctemp3436,nctemp3441);
if(nctemp3445)
{
{
struct tree* nctemp3447= p;
struct nctempchar1 *nctemp3451;
static struct nctempchar1 nctemp3452 = {{ 4}, (char*)"int\0"};
nctemp3451=&nctemp3452;
nctempchar1* nctemp3449= nctemp3451;
int nctemp3453=PtreeSetype(nctemp3447,nctemp3449);
}
}
return 1;
}
}
int SemComparetype (struct tree* p,struct tree* np)
{
int rval;
{
rval = 1;
struct tree* nctemp3460= p;
nctempchar1* nctemp3462=PtreeGetype(nctemp3460);
nctempchar1* nctemp3458= nctemp3462;
struct tree* nctemp3465= np;
nctempchar1* nctemp3467=PtreeGetype(nctemp3465);
nctempchar1* nctemp3463= nctemp3467;
int nctemp3468=LibeStrcmp(nctemp3458,nctemp3463);
int nctemp3455 = (nctemp3468 ==0);
if(nctemp3455)
{
{
rval = 0;
}
}
struct tree* nctemp3475= p;
nctempchar1* nctemp3477=PtreeGetref(nctemp3475);
nctempchar1* nctemp3473= nctemp3477;
struct tree* nctemp3480= np;
nctempchar1* nctemp3482=PtreeGetref(nctemp3480);
nctempchar1* nctemp3478= nctemp3482;
int nctemp3483=LibeStrcmp(nctemp3473,nctemp3478);
int nctemp3470 = (nctemp3483 ==0);
if(nctemp3470)
{
{
struct tree* nctemp3488= np;
nctempchar1* nctemp3490=PtreeGetname(nctemp3488);
nctempchar1* nctemp3486= nctemp3490;
struct nctempchar1 *nctemp3493;
static struct nctempchar1 nctemp3494 = {{ 10}, (char*)"iconstant\0"};
nctemp3493=&nctemp3494;
nctempchar1* nctemp3491= nctemp3493;
int nctemp3495=LibeStrcmp(nctemp3486,nctemp3491);
if(nctemp3495)
{
{
struct tree* nctemp3499= np;
nctempchar1* nctemp3501=PtreeGetdef(nctemp3499);
nctempchar1* nctemp3497= nctemp3501;
struct nctempchar1 *nctemp3504;
static struct nctempchar1 nctemp3505 = {{ 2}, (char*)"0\0"};
nctemp3504=&nctemp3505;
nctempchar1* nctemp3502= nctemp3504;
int nctemp3506=LibeStrcmp(nctemp3497,nctemp3502);
if(nctemp3506)
{
{
rval = 1;
}
}
else{
{
rval = 0;
}
}
}
}
else{
{
rval = 0;
}
}
}
}
else{
{
struct tree* nctemp3512= p;
nctempchar1* nctemp3514=PtreeGetref(nctemp3512);
nctempchar1* nctemp3510= nctemp3514;
struct nctempchar1 *nctemp3517;
static struct nctempchar1 nctemp3518 = {{ 5}, (char*)"aref\0"};
nctemp3517=&nctemp3518;
nctempchar1* nctemp3515= nctemp3517;
int nctemp3519=LibeStrcmp(nctemp3510,nctemp3515);
int nctemp3507 = (nctemp3519 ==1);
if(nctemp3507)
{
{
struct tree* nctemp3524= p;
int nctemp3526=PtreeGetrank(nctemp3524);
struct tree* nctemp3528= np;
int nctemp3530=PtreeGetrank(nctemp3528);
int nctemp3521 = (nctemp3526 !=nctemp3530);
if(nctemp3521)
{
{
rval = 0;
}
}
}
}
}
}
return rval;
}
}
struct tree* SemAsgexpr (struct tree* p)
{
struct tree* np;
{
struct tree* nctemp3536= p;
struct tree* nctemp3538=PtreeMvchild(nctemp3536);
np =nctemp3538;
struct tree* nctemp3544= np;
nctempchar1* nctemp3546=PtreeGetlval(nctemp3544);
nctempchar1* nctemp3542= nctemp3546;
struct nctempchar1 *nctemp3549;
static struct nctempchar1 nctemp3550 = {{ 5}, (char*)"lval\0"};
nctemp3549=&nctemp3550;
nctempchar1* nctemp3547= nctemp3549;
int nctemp3551=LibeStrcmp(nctemp3542,nctemp3547);
int nctemp3539 = (nctemp3551 ==0);
if(nctemp3539)
{
{
struct tree* nctemp3554= np;
struct nctempchar1 *nctemp3558;
static struct nctempchar1 nctemp3559 = {{ 17}, (char*)"Not a left value\0"};
nctemp3558=&nctemp3559;
nctempchar1* nctemp3556= nctemp3558;
struct tree* nctemp3562= np;
nctempchar1* nctemp3564=PtreeGetdef(nctemp3562);
nctempchar1* nctemp3560= nctemp3564;
int nctemp3565=SemSerror(nctemp3554,nctemp3556,nctemp3560);
}
}
else{
{
struct tree* nctemp3567= p;
struct nctempchar1 *nctemp3571;
static struct nctempchar1 nctemp3572 = {{ 5}, (char*)"lval\0"};
nctemp3571=&nctemp3572;
nctempchar1* nctemp3569= nctemp3571;
int nctemp3573=PtreeSetlval(nctemp3567,nctemp3569);
}
}
struct tree* nctemp3575= np;
struct tree* nctemp3577= p;
int nctemp3579=SemCopytype(nctemp3575,nctemp3577);
return p;
}
}
struct tree* SemRelexpr (struct tree* p)
{
struct tree* np;
struct tree* rp;
{
struct tree* nctemp3585= p;
struct tree* nctemp3587=PtreeMvchild(nctemp3585);
np =nctemp3587;
struct tree* nctemp3592= np;
struct tree* nctemp3594=PtreeMvsister(nctemp3592);
rp =nctemp3594;
struct tree* nctemp3600= p;
nctempchar1* nctemp3602=PtreeGetdef(nctemp3600);
nctempchar1* nctemp3598= nctemp3602;
struct nctempchar1 *nctemp3605;
static struct nctempchar1 nctemp3606 = {{ 3}, (char*)"==\0"};
nctemp3605=&nctemp3606;
nctempchar1* nctemp3603= nctemp3605;
int nctemp3607=LibeStrcmp(nctemp3598,nctemp3603);
int nctemp3595 = (nctemp3607 ==0);
if(nctemp3595)
{
{
struct tree* nctemp3614= p;
nctempchar1* nctemp3616=PtreeGetdef(nctemp3614);
nctempchar1* nctemp3612= nctemp3616;
struct nctempchar1 *nctemp3619;
static struct nctempchar1 nctemp3620 = {{ 3}, (char*)"!=\0"};
nctemp3619=&nctemp3620;
nctempchar1* nctemp3617= nctemp3619;
int nctemp3621=LibeStrcmp(nctemp3612,nctemp3617);
int nctemp3609 = (nctemp3621 ==0);
if(nctemp3609)
{
{
struct tree* nctemp3628= np;
nctempchar1* nctemp3630=PtreeGetref(nctemp3628);
nctempchar1* nctemp3626= nctemp3630;
struct nctempchar1 *nctemp3633;
static struct nctempchar1 nctemp3634 = {{ 5}, (char*)"aref\0"};
nctemp3633=&nctemp3634;
nctempchar1* nctemp3631= nctemp3633;
int nctemp3635=LibeStrcmp(nctemp3626,nctemp3631);
struct tree* nctemp3639= np;
nctempchar1* nctemp3641=PtreeGetref(nctemp3639);
nctempchar1* nctemp3637= nctemp3641;
struct nctempchar1 *nctemp3644;
static struct nctempchar1 nctemp3645 = {{ 5}, (char*)"sref\0"};
nctemp3644=&nctemp3645;
nctempchar1* nctemp3642= nctemp3644;
int nctemp3646=LibeStrcmp(nctemp3637,nctemp3642);
int nctemp3623 = (nctemp3635 || nctemp3646);
if(nctemp3623)
{
{
struct tree* nctemp3648= p;
struct nctempchar1 *nctemp3652;
static struct nctempchar1 nctemp3653 = {{ 18}, (char*)"Illegal operation\0"};
nctemp3652=&nctemp3653;
nctempchar1* nctemp3650= nctemp3652;
struct nctempchar1 *nctemp3656;
static struct nctempchar1 nctemp3657 = {{ 2}, (char*)" \0"};
nctemp3656=&nctemp3657;
nctempchar1* nctemp3654= nctemp3656;
int nctemp3658=SemSerror(nctemp3648,nctemp3650,nctemp3654);
}
}
else{
{
struct tree* nctemp3664= rp;
nctempchar1* nctemp3666=PtreeGetref(nctemp3664);
nctempchar1* nctemp3662= nctemp3666;
struct nctempchar1 *nctemp3669;
static struct nctempchar1 nctemp3670 = {{ 5}, (char*)"aref\0"};
nctemp3669=&nctemp3670;
nctempchar1* nctemp3667= nctemp3669;
int nctemp3671=LibeStrcmp(nctemp3662,nctemp3667);
struct tree* nctemp3675= np;
nctempchar1* nctemp3677=PtreeGetref(nctemp3675);
nctempchar1* nctemp3673= nctemp3677;
struct nctempchar1 *nctemp3680;
static struct nctempchar1 nctemp3681 = {{ 5}, (char*)"sref\0"};
nctemp3680=&nctemp3681;
nctempchar1* nctemp3678= nctemp3680;
int nctemp3682=LibeStrcmp(nctemp3673,nctemp3678);
int nctemp3659 = (nctemp3671 || nctemp3682);
if(nctemp3659)
{
{
struct tree* nctemp3684= p;
struct nctempchar1 *nctemp3688;
static struct nctempchar1 nctemp3689 = {{ 18}, (char*)"Illegal operation\0"};
nctemp3688=&nctemp3689;
nctempchar1* nctemp3686= nctemp3688;
struct nctempchar1 *nctemp3692;
static struct nctempchar1 nctemp3693 = {{ 2}, (char*)" \0"};
nctemp3692=&nctemp3693;
nctempchar1* nctemp3690= nctemp3692;
int nctemp3694=SemSerror(nctemp3684,nctemp3686,nctemp3690);
}
}
}
}
}
}
else{
{
struct tree* nctemp3698= np;
nctempchar1* nctemp3700=PtreeGetype(nctemp3698);
nctempchar1* nctemp3696= nctemp3700;
struct nctempchar1 *nctemp3703;
static struct nctempchar1 nctemp3704 = {{ 8}, (char*)"complex\0"};
nctemp3703=&nctemp3704;
nctempchar1* nctemp3701= nctemp3703;
int nctemp3705=LibeStrcmp(nctemp3696,nctemp3701);
if(nctemp3705)
{
{
struct tree* nctemp3707= p;
struct nctempchar1 *nctemp3711;
static struct nctempchar1 nctemp3712 = {{ 18}, (char*)"Illegal operation\0"};
nctemp3711=&nctemp3712;
nctempchar1* nctemp3709= nctemp3711;
struct nctempchar1 *nctemp3715;
static struct nctempchar1 nctemp3716 = {{ 2}, (char*)" \0"};
nctemp3715=&nctemp3716;
nctempchar1* nctemp3713= nctemp3715;
int nctemp3717=SemSerror(nctemp3707,nctemp3709,nctemp3713);
}
}
}
}
}
}
struct tree* nctemp3719= p;
struct nctempchar1 *nctemp3723;
static struct nctempchar1 nctemp3724 = {{ 4}, (char*)"int\0"};
nctemp3723=&nctemp3724;
nctempchar1* nctemp3721= nctemp3723;
int nctemp3725=PtreeSetype(nctemp3719,nctemp3721);
struct tree* nctemp3727= p;
struct nctempchar1 *nctemp3731;
static struct nctempchar1 nctemp3732 = {{ 5}, (char*)"void\0"};
nctemp3731=&nctemp3732;
nctempchar1* nctemp3729= nctemp3731;
int nctemp3733=PtreeSetlval(nctemp3727,nctemp3729);
struct tree* nctemp3735= p;
struct nctempchar1 *nctemp3739;
static struct nctempchar1 nctemp3740 = {{ 5}, (char*)"void\0"};
nctemp3739=&nctemp3740;
nctempchar1* nctemp3737= nctemp3739;
int nctemp3741=PtreeSetstruct(nctemp3735,nctemp3737);
return p;
}
}
struct tree* SemAddexpr (struct tree* p)
{
struct tree* np;
struct tree* rp;
{
struct tree* nctemp3747= p;
struct tree* nctemp3749=PtreeMvchild(nctemp3747);
np =nctemp3749;
struct tree* nctemp3754= np;
struct tree* nctemp3756=PtreeMvsister(nctemp3754);
rp =nctemp3756;
struct tree* nctemp3760= np;
nctempchar1* nctemp3762=PtreeGetref(nctemp3760);
nctempchar1* nctemp3758= nctemp3762;
struct nctempchar1 *nctemp3765;
static struct nctempchar1 nctemp3766 = {{ 5}, (char*)"sref\0"};
nctemp3765=&nctemp3766;
nctempchar1* nctemp3763= nctemp3765;
int nctemp3767=LibeStrcmp(nctemp3758,nctemp3763);
if(nctemp3767)
{
{
struct tree* nctemp3769= np;
struct nctempchar1 *nctemp3773;
static struct nctempchar1 nctemp3774 = {{ 18}, (char*)"Illegal operation\0"};
nctemp3773=&nctemp3774;
nctempchar1* nctemp3771= nctemp3773;
struct nctempchar1 *nctemp3777;
static struct nctempchar1 nctemp3778 = {{ 2}, (char*)" \0"};
nctemp3777=&nctemp3778;
nctempchar1* nctemp3775= nctemp3777;
int nctemp3779=SemSerror(nctemp3769,nctemp3771,nctemp3775);
}
}
else{
{
struct tree* nctemp3783= rp;
nctempchar1* nctemp3785=PtreeGetref(nctemp3783);
nctempchar1* nctemp3781= nctemp3785;
struct nctempchar1 *nctemp3788;
static struct nctempchar1 nctemp3789 = {{ 5}, (char*)"sref\0"};
nctemp3788=&nctemp3789;
nctempchar1* nctemp3786= nctemp3788;
int nctemp3790=LibeStrcmp(nctemp3781,nctemp3786);
if(nctemp3790)
{
{
struct tree* nctemp3792= np;
struct nctempchar1 *nctemp3796;
static struct nctempchar1 nctemp3797 = {{ 18}, (char*)"Illegal operation\0"};
nctemp3796=&nctemp3797;
nctempchar1* nctemp3794= nctemp3796;
struct nctempchar1 *nctemp3800;
static struct nctempchar1 nctemp3801 = {{ 2}, (char*)" \0"};
nctemp3800=&nctemp3801;
nctempchar1* nctemp3798= nctemp3800;
int nctemp3802=SemSerror(nctemp3792,nctemp3794,nctemp3798);
}
}
else{
{
struct tree* nctemp3804= np;
struct tree* nctemp3806= p;
int nctemp3808=SemCopytype(nctemp3804,nctemp3806);
struct tree* nctemp3810= p;
struct nctempchar1 *nctemp3814;
static struct nctempchar1 nctemp3815 = {{ 5}, (char*)"void\0"};
nctemp3814=&nctemp3815;
nctempchar1* nctemp3812= nctemp3814;
int nctemp3816=PtreeSetlval(nctemp3810,nctemp3812);
}
}
}
}
return p;
}
}
struct tree* SemBinexpr (struct tree* p)
{
struct tree* leftp;
struct tree* rightp;
struct tree* np;
struct tree* right;
{
np = p;
struct tree* nctemp3821= p;
nctempchar1* nctemp3823=PtreeGetname(nctemp3821);
nctempchar1* nctemp3819= nctemp3823;
struct nctempchar1 *nctemp3826;
static struct nctempchar1 nctemp3827 = {{ 8}, (char*)"binexpr\0"};
nctemp3826=&nctemp3827;
nctempchar1* nctemp3824= nctemp3826;
int nctemp3828=LibeStrcmp(nctemp3819,nctemp3824);
if(nctemp3828)
{
{
struct tree* nctemp3833= p;
struct tree* nctemp3835=PtreeMvchild(nctemp3833);
p =nctemp3835;
struct tree* nctemp3840= p;
struct tree* nctemp3842=PtreeMvsister(nctemp3840);
p =nctemp3842;
right = p;
struct tree* nctemp3847= p;
struct tree* nctemp3849=SemUnexpr(nctemp3847);
rightp =nctemp3849;
struct tree* nctemp3854= np;
struct tree* nctemp3856=PtreeMvchild(nctemp3854);
p =nctemp3856;
struct tree* nctemp3862= np;
nctempchar1* nctemp3864=PtreeGetdef(nctemp3862);
nctempchar1* nctemp3860= nctemp3864;
struct nctempchar1 *nctemp3867;
static struct nctempchar1 nctemp3868 = {{ 2}, (char*)"=\0"};
nctemp3867=&nctemp3868;
nctempchar1* nctemp3865= nctemp3867;
int nctemp3869=LibeStrcmp(nctemp3860,nctemp3865);
int nctemp3857 = (nctemp3869 ==1);
if(nctemp3857)
{
{
struct tree* nctemp3876= p;
nctempchar1* nctemp3878=PtreeGetname(nctemp3876);
nctempchar1* nctemp3874= nctemp3878;
struct nctempchar1 *nctemp3881;
static struct nctempchar1 nctemp3882 = {{ 11}, (char*)"identifier\0"};
nctemp3881=&nctemp3882;
nctempchar1* nctemp3879= nctemp3881;
int nctemp3883=LibeStrcmp(nctemp3874,nctemp3879);
int nctemp3871 = (nctemp3883 ==1);
if(nctemp3871)
{
{
struct tree* nctemp3888= p;
struct tree* nctemp3890=PtreeMvchild(nctemp3888);
int nctemp3885 = (nctemp3890 ==0);
if(nctemp3885)
{
{
struct tree* nctemp3893= right;
struct tree* nctemp3895= p;
int nctemp3897=SemCopytype2(nctemp3893,nctemp3895);
struct tree* nctemp3899= p;
struct symbol* nctemp3903=SymGetltp();
struct symbol* nctemp3901= nctemp3903;
struct symbol* nctemp3906=SymGetetp();
struct symbol* nctemp3904= nctemp3906;
int nctemp3907=SemAutodeclar(nctemp3899,nctemp3901,nctemp3904);
}
}
}
}
}
}
struct tree* nctemp3912= p;
struct tree* nctemp3914=SemUnexpr(nctemp3912);
leftp =nctemp3914;
struct tree* nctemp3918= leftp;
struct tree* nctemp3920= rightp;
int nctemp3922=SemComparetype(nctemp3918,nctemp3920);
int nctemp3915 = (nctemp3922 ==0);
if(nctemp3915)
{
{
struct tree* nctemp3925= p;
struct nctempchar1 *nctemp3929;
static struct nctempchar1 nctemp3930 = {{ 11}, (char*)"Type error\0"};
nctemp3929=&nctemp3930;
nctempchar1* nctemp3927= nctemp3929;
struct nctempchar1 *nctemp3933;
static struct nctempchar1 nctemp3934 = {{ 2}, (char*)" \0"};
nctemp3933=&nctemp3934;
nctempchar1* nctemp3931= nctemp3933;
int nctemp3935=SemSerror(nctemp3925,nctemp3927,nctemp3931);
return p;
}
}
else{
{
struct tree* nctemp3940= np;
nctempchar1* nctemp3942=PtreeGetdef(nctemp3940);
nctempchar1* nctemp3938= nctemp3942;
struct nctempchar1 *nctemp3945;
static struct nctempchar1 nctemp3946 = {{ 2}, (char*)"=\0"};
nctemp3945=&nctemp3946;
nctempchar1* nctemp3943= nctemp3945;
int nctemp3947=LibeStrcmp(nctemp3938,nctemp3943);
if(nctemp3947)
{
{
struct tree* nctemp3949= np;
struct tree* nctemp3951=SemAsgexpr(nctemp3949);
}
}
else{
{
struct tree* nctemp3975= np;
nctempchar1* nctemp3977=PtreeGetdef(nctemp3975);
nctempchar1* nctemp3973= nctemp3977;
struct nctempchar1 *nctemp3980;
static struct nctempchar1 nctemp3981 = {{ 3}, (char*)"!=\0"};
nctemp3980=&nctemp3981;
nctempchar1* nctemp3978= nctemp3980;
int nctemp3982=LibeStrcmp(nctemp3973,nctemp3978);
struct tree* nctemp3986= np;
nctempchar1* nctemp3988=PtreeGetdef(nctemp3986);
nctempchar1* nctemp3984= nctemp3988;
struct nctempchar1 *nctemp3991;
static struct nctempchar1 nctemp3992 = {{ 3}, (char*)"==\0"};
nctemp3991=&nctemp3992;
nctempchar1* nctemp3989= nctemp3991;
int nctemp3993=LibeStrcmp(nctemp3984,nctemp3989);
int nctemp3970 = (nctemp3982 || nctemp3993);
struct tree* nctemp3997= np;
nctempchar1* nctemp3999=PtreeGetdef(nctemp3997);
nctempchar1* nctemp3995= nctemp3999;
struct nctempchar1 *nctemp4002;
static struct nctempchar1 nctemp4003 = {{ 3}, (char*)"||\0"};
nctemp4002=&nctemp4003;
nctempchar1* nctemp4000= nctemp4002;
int nctemp4004=LibeStrcmp(nctemp3995,nctemp4000);
int nctemp3967 = (nctemp3970 || nctemp4004);
struct tree* nctemp4008= np;
nctempchar1* nctemp4010=PtreeGetdef(nctemp4008);
nctempchar1* nctemp4006= nctemp4010;
struct nctempchar1 *nctemp4013;
static struct nctempchar1 nctemp4014 = {{ 3}, (char*)"<=\0"};
nctemp4013=&nctemp4014;
nctempchar1* nctemp4011= nctemp4013;
int nctemp4015=LibeStrcmp(nctemp4006,nctemp4011);
int nctemp3964 = (nctemp3967 || nctemp4015);
struct tree* nctemp4019= np;
nctempchar1* nctemp4021=PtreeGetdef(nctemp4019);
nctempchar1* nctemp4017= nctemp4021;
struct nctempchar1 *nctemp4024;
static struct nctempchar1 nctemp4025 = {{ 3}, (char*)">=\0"};
nctemp4024=&nctemp4025;
nctempchar1* nctemp4022= nctemp4024;
int nctemp4026=LibeStrcmp(nctemp4017,nctemp4022);
int nctemp3961 = (nctemp3964 || nctemp4026);
struct tree* nctemp4030= np;
nctempchar1* nctemp4032=PtreeGetdef(nctemp4030);
nctempchar1* nctemp4028= nctemp4032;
struct nctempchar1 *nctemp4035;
static struct nctempchar1 nctemp4036 = {{ 2}, (char*)"<\0"};
nctemp4035=&nctemp4036;
nctempchar1* nctemp4033= nctemp4035;
int nctemp4037=LibeStrcmp(nctemp4028,nctemp4033);
int nctemp3958 = (nctemp3961 || nctemp4037);
struct tree* nctemp4041= np;
nctempchar1* nctemp4043=PtreeGetdef(nctemp4041);
nctempchar1* nctemp4039= nctemp4043;
struct nctempchar1 *nctemp4046;
static struct nctempchar1 nctemp4047 = {{ 2}, (char*)">\0"};
nctemp4046=&nctemp4047;
nctempchar1* nctemp4044= nctemp4046;
int nctemp4048=LibeStrcmp(nctemp4039,nctemp4044);
int nctemp3955 = (nctemp3958 || nctemp4048);
struct tree* nctemp4052= np;
nctempchar1* nctemp4054=PtreeGetdef(nctemp4052);
nctempchar1* nctemp4050= nctemp4054;
struct nctempchar1 *nctemp4057;
static struct nctempchar1 nctemp4058 = {{ 3}, (char*)"&&\0"};
nctemp4057=&nctemp4058;
nctempchar1* nctemp4055= nctemp4057;
int nctemp4059=LibeStrcmp(nctemp4050,nctemp4055);
int nctemp3952 = (nctemp3955 || nctemp4059);
if(nctemp3952)
{
{
struct tree* nctemp4061= np;
struct tree* nctemp4063=SemRelexpr(nctemp4061);
}
}
else{
{
struct tree* nctemp4075= np;
nctempchar1* nctemp4077=PtreeGetdef(nctemp4075);
nctempchar1* nctemp4073= nctemp4077;
struct nctempchar1 *nctemp4080;
static struct nctempchar1 nctemp4081 = {{ 2}, (char*)"+\0"};
nctemp4080=&nctemp4081;
nctempchar1* nctemp4078= nctemp4080;
int nctemp4082=LibeStrcmp(nctemp4073,nctemp4078);
struct tree* nctemp4086= np;
nctempchar1* nctemp4088=PtreeGetdef(nctemp4086);
nctempchar1* nctemp4084= nctemp4088;
struct nctempchar1 *nctemp4091;
static struct nctempchar1 nctemp4092 = {{ 2}, (char*)"-\0"};
nctemp4091=&nctemp4092;
nctempchar1* nctemp4089= nctemp4091;
int nctemp4093=LibeStrcmp(nctemp4084,nctemp4089);
int nctemp4070 = (nctemp4082 || nctemp4093);
struct tree* nctemp4097= np;
nctempchar1* nctemp4099=PtreeGetdef(nctemp4097);
nctempchar1* nctemp4095= nctemp4099;
struct nctempchar1 *nctemp4102;
static struct nctempchar1 nctemp4103 = {{ 2}, (char*)"*\0"};
nctemp4102=&nctemp4103;
nctempchar1* nctemp4100= nctemp4102;
int nctemp4104=LibeStrcmp(nctemp4095,nctemp4100);
int nctemp4067 = (nctemp4070 || nctemp4104);
struct tree* nctemp4108= np;
nctempchar1* nctemp4110=PtreeGetdef(nctemp4108);
nctempchar1* nctemp4106= nctemp4110;
struct nctempchar1 *nctemp4113;
static struct nctempchar1 nctemp4114 = {{ 2}, (char*)"/\0"};
nctemp4113=&nctemp4114;
nctempchar1* nctemp4111= nctemp4113;
int nctemp4115=LibeStrcmp(nctemp4106,nctemp4111);
int nctemp4064 = (nctemp4067 || nctemp4115);
if(nctemp4064)
{
{
struct tree* nctemp4117= np;
struct tree* nctemp4119=SemAddexpr(nctemp4117);
}
}
}
}
}
}
return np;
}
}
}
}
else{
{
struct tree* nctemp4122= p;
struct tree* nctemp4124=SemUnexpr(nctemp4122);
return nctemp4124;
}
}
}
}
struct tree* SemExpr (struct tree* p)
{
struct tree* sp;
{
struct tree* nctemp4129= p;
struct tree* nctemp4131=PtreeMvchild(nctemp4129);
sp =nctemp4131;
struct tree* nctemp4136= sp;
struct tree* nctemp4138=SemBinexpr(nctemp4136);
sp =nctemp4138;
struct tree* nctemp4140= sp;
struct tree* nctemp4142= p;
int nctemp4144=SemCopytype(nctemp4140,nctemp4142);
struct tree* nctemp4148= p;
int nctemp4150=PtreeGetopexpr(nctemp4148);
int nctemp4145 = (nctemp4150 ==1);
if(nctemp4145)
{
{
int nctemp4155=SemGetsimple();
int nctemp4152 = (nctemp4155 ==0);
if(nctemp4152)
{
{
struct tree* nctemp4158= p;
int nctemp4160= 0;
int nctemp4162=PtreeSetsimple(nctemp4158,nctemp4160);
int nctemp4164= 1;
int nctemp4166=SemSetsimple(nctemp4164);
}
}
else{
{
struct tree* nctemp4168= p;
int nctemp4170= 1;
int nctemp4172=PtreeSetsimple(nctemp4168,nctemp4170);
}
}
}
}
return p;
}
}
struct tree* SemUnexpr (struct tree* p)
{
struct tree* np;
{
np = p;
struct tree* nctemp4177= p;
nctempchar1* nctemp4179=PtreeGetname(nctemp4177);
nctempchar1* nctemp4175= nctemp4179;
struct nctempchar1 *nctemp4182;
static struct nctempchar1 nctemp4183 = {{ 7}, (char*)"unexpr\0"};
nctemp4182=&nctemp4183;
nctempchar1* nctemp4180= nctemp4182;
int nctemp4184=LibeStrcmp(nctemp4175,nctemp4180);
if(nctemp4184)
{
{
struct tree* nctemp4189= p;
struct tree* nctemp4191=PtreeMvchild(nctemp4189);
p =nctemp4191;
struct tree* nctemp4196= p;
struct tree* nctemp4198=SemPrimexpr(nctemp4196);
p =nctemp4198;
struct tree* nctemp4200= p;
struct tree* nctemp4202= np;
int nctemp4204=SemCopytype(nctemp4200,nctemp4202);
return np;
}
}
else{
{
struct tree* nctemp4207= p;
struct tree* nctemp4209=SemPrimexpr(nctemp4207);
return nctemp4209;
}
}
}
}
struct tree* SemPrimexpr (struct tree* p)
{
{
struct tree* nctemp4213= p;
nctempchar1* nctemp4215=PtreeGetname(nctemp4213);
nctempchar1* nctemp4211= nctemp4215;
struct nctempchar1 *nctemp4218;
static struct nctempchar1 nctemp4219 = {{ 11}, (char*)"identifier\0"};
nctemp4218=&nctemp4219;
nctempchar1* nctemp4216= nctemp4218;
int nctemp4220=LibeStrcmp(nctemp4211,nctemp4216);
if(nctemp4220)
{
{
struct tree* nctemp4222= p;
int nctemp4224=SemId(nctemp4222);
return p;
}
}
else{
{
struct tree* nctemp4229= p;
nctempchar1* nctemp4231=PtreeGetname(nctemp4229);
nctempchar1* nctemp4227= nctemp4231;
struct nctempchar1 *nctemp4234;
static struct nctempchar1 nctemp4235 = {{ 6}, (char*)"fcall\0"};
nctemp4234=&nctemp4235;
nctempchar1* nctemp4232= nctemp4234;
int nctemp4236=LibeStrcmp(nctemp4227,nctemp4232);
if(nctemp4236)
{
{
int nctemp4238= 0;
int nctemp4240=SemSetsimple(nctemp4238);
struct tree* nctemp4242= p;
int nctemp4244=SemFcall(nctemp4242);
return p;
}
}
else{
{
struct tree* nctemp4249= p;
nctempchar1* nctemp4251=PtreeGetname(nctemp4249);
nctempchar1* nctemp4247= nctemp4251;
struct nctempchar1 *nctemp4254;
static struct nctempchar1 nctemp4255 = {{ 5}, (char*)"cast\0"};
nctemp4254=&nctemp4255;
nctempchar1* nctemp4252= nctemp4254;
int nctemp4256=LibeStrcmp(nctemp4247,nctemp4252);
if(nctemp4256)
{
{
int nctemp4258= 0;
int nctemp4260=SemSetsimple(nctemp4258);
struct tree* nctemp4262= p;
int nctemp4264=SemCast(nctemp4262);
return p;
}
}
else{
{
struct tree* nctemp4269= p;
nctempchar1* nctemp4271=PtreeGetname(nctemp4269);
nctempchar1* nctemp4267= nctemp4271;
struct nctempchar1 *nctemp4274;
static struct nctempchar1 nctemp4275 = {{ 4}, (char*)"new\0"};
nctemp4274=&nctemp4275;
nctempchar1* nctemp4272= nctemp4274;
int nctemp4276=LibeStrcmp(nctemp4267,nctemp4272);
if(nctemp4276)
{
{
int nctemp4278= 0;
int nctemp4280=SemSetsimple(nctemp4278);
struct tree* nctemp4282= p;
int nctemp4284=SemNew(nctemp4282);
return p;
}
}
else{
{
struct tree* nctemp4289= p;
nctempchar1* nctemp4291=PtreeGetname(nctemp4289);
nctempchar1* nctemp4287= nctemp4291;
struct nctempchar1 *nctemp4294;
static struct nctempchar1 nctemp4295 = {{ 7}, (char*)"delete\0"};
nctemp4294=&nctemp4295;
nctempchar1* nctemp4292= nctemp4294;
int nctemp4296=LibeStrcmp(nctemp4287,nctemp4292);
if(nctemp4296)
{
{
int nctemp4298= 0;
int nctemp4300=SemSetsimple(nctemp4298);
struct tree* nctemp4302= p;
int nctemp4304=SemDelete(nctemp4302);
return p;
}
}
else{
{
struct tree* nctemp4309= p;
nctempchar1* nctemp4311=PtreeGetname(nctemp4309);
nctempchar1* nctemp4307= nctemp4311;
struct nctempchar1 *nctemp4314;
static struct nctempchar1 nctemp4315 = {{ 6}, (char*)"cmplx\0"};
nctemp4314=&nctemp4315;
nctempchar1* nctemp4312= nctemp4314;
int nctemp4316=LibeStrcmp(nctemp4307,nctemp4312);
if(nctemp4316)
{
{
int nctemp4318= 0;
int nctemp4320=SemSetsimple(nctemp4318);
struct tree* nctemp4322= p;
int nctemp4324=SemCmplx(nctemp4322);
return p;
}
}
else{
{
struct tree* nctemp4329= p;
nctempchar1* nctemp4331=PtreeGetname(nctemp4329);
nctempchar1* nctemp4327= nctemp4331;
struct nctempchar1 *nctemp4334;
static struct nctempchar1 nctemp4335 = {{ 3}, (char*)"re\0"};
nctemp4334=&nctemp4335;
nctempchar1* nctemp4332= nctemp4334;
int nctemp4336=LibeStrcmp(nctemp4327,nctemp4332);
if(nctemp4336)
{
{
int nctemp4338= 0;
int nctemp4340=SemSetsimple(nctemp4338);
struct tree* nctemp4342= p;
int nctemp4344=SemRe(nctemp4342);
return p;
}
}
else{
{
struct tree* nctemp4349= p;
nctempchar1* nctemp4351=PtreeGetname(nctemp4349);
nctempchar1* nctemp4347= nctemp4351;
struct nctempchar1 *nctemp4354;
static struct nctempchar1 nctemp4355 = {{ 4}, (char*)"len\0"};
nctemp4354=&nctemp4355;
nctempchar1* nctemp4352= nctemp4354;
int nctemp4356=LibeStrcmp(nctemp4347,nctemp4352);
if(nctemp4356)
{
{
int nctemp4358= 0;
int nctemp4360=SemSetsimple(nctemp4358);
struct tree* nctemp4362= p;
int nctemp4364=SemLen(nctemp4362);
return p;
}
}
else{
{
struct tree* nctemp4369= p;
nctempchar1* nctemp4371=PtreeGetname(nctemp4369);
nctempchar1* nctemp4367= nctemp4371;
struct nctempchar1 *nctemp4374;
static struct nctempchar1 nctemp4375 = {{ 3}, (char*)"im\0"};
nctemp4374=&nctemp4375;
nctempchar1* nctemp4372= nctemp4374;
int nctemp4376=LibeStrcmp(nctemp4367,nctemp4372);
if(nctemp4376)
{
{
int nctemp4378= 0;
int nctemp4380=SemSetsimple(nctemp4378);
struct tree* nctemp4382= p;
int nctemp4384=SemIm(nctemp4382);
return p;
}
}
else{
{
struct tree* nctemp4389= p;
nctempchar1* nctemp4391=PtreeGetname(nctemp4389);
nctempchar1* nctemp4387= nctemp4391;
struct nctempchar1 *nctemp4394;
static struct nctempchar1 nctemp4395 = {{ 7}, (char*)"sizeof\0"};
nctemp4394=&nctemp4395;
nctempchar1* nctemp4392= nctemp4394;
int nctemp4396=LibeStrcmp(nctemp4387,nctemp4392);
if(nctemp4396)
{
{
int nctemp4398= 0;
int nctemp4400=SemSetsimple(nctemp4398);
struct tree* nctemp4402= p;
int nctemp4404=SemSizeof(nctemp4402);
return p;
}
}
else{
{
struct tree* nctemp4409= p;
nctempchar1* nctemp4411=PtreeGetname(nctemp4409);
nctempchar1* nctemp4407= nctemp4411;
struct nctempchar1 *nctemp4414;
static struct nctempchar1 nctemp4415 = {{ 10}, (char*)"iconstant\0"};
nctemp4414=&nctemp4415;
nctempchar1* nctemp4412= nctemp4414;
int nctemp4416=LibeStrcmp(nctemp4407,nctemp4412);
if(nctemp4416)
{
{
struct tree* nctemp4418= p;
struct nctempchar1 *nctemp4422;
static struct nctempchar1 nctemp4423 = {{ 4}, (char*)"int\0"};
nctemp4422=&nctemp4423;
nctempchar1* nctemp4420= nctemp4422;
int nctemp4424=PtreeSetype(nctemp4418,nctemp4420);
return p;
}
}
else{
{
struct tree* nctemp4429= p;
nctempchar1* nctemp4431=PtreeGetname(nctemp4429);
nctempchar1* nctemp4427= nctemp4431;
struct nctempchar1 *nctemp4434;
static struct nctempchar1 nctemp4435 = {{ 10}, (char*)"rconstant\0"};
nctemp4434=&nctemp4435;
nctempchar1* nctemp4432= nctemp4434;
int nctemp4436=LibeStrcmp(nctemp4427,nctemp4432);
if(nctemp4436)
{
{
struct tree* nctemp4438= p;
struct nctempchar1 *nctemp4442;
static struct nctempchar1 nctemp4443 = {{ 6}, (char*)"float\0"};
nctemp4442=&nctemp4443;
nctempchar1* nctemp4440= nctemp4442;
int nctemp4444=PtreeSetype(nctemp4438,nctemp4440);
return p;
}
}
else{
{
struct tree* nctemp4449= p;
nctempchar1* nctemp4451=PtreeGetname(nctemp4449);
nctempchar1* nctemp4447= nctemp4451;
struct nctempchar1 *nctemp4454;
static struct nctempchar1 nctemp4455 = {{ 10}, (char*)"sconstant\0"};
nctemp4454=&nctemp4455;
nctempchar1* nctemp4452= nctemp4454;
int nctemp4456=LibeStrcmp(nctemp4447,nctemp4452);
if(nctemp4456)
{
{
int nctemp4458= 0;
int nctemp4460=SemSetsimple(nctemp4458);
struct tree* nctemp4462= p;
struct nctempchar1 *nctemp4466;
static struct nctempchar1 nctemp4467 = {{ 5}, (char*)"char\0"};
nctemp4466=&nctemp4467;
nctempchar1* nctemp4464= nctemp4466;
int nctemp4468=PtreeSetype(nctemp4462,nctemp4464);
struct tree* nctemp4470= p;
struct nctempchar1 *nctemp4474;
static struct nctempchar1 nctemp4475 = {{ 5}, (char*)"aref\0"};
nctemp4474=&nctemp4475;
nctempchar1* nctemp4472= nctemp4474;
int nctemp4476=PtreeSetref(nctemp4470,nctemp4472);
struct tree* nctemp4478= p;
struct nctempchar1 *nctemp4482;
static struct nctempchar1 nctemp4483 = {{ 6}, (char*)"array\0"};
nctemp4482=&nctemp4483;
nctempchar1* nctemp4480= nctemp4482;
int nctemp4484=PtreeSetarray(nctemp4478,nctemp4480);
struct tree* nctemp4486= p;
int nctemp4488= 1;
int nctemp4490=PtreeSetrank(nctemp4486,nctemp4488);
return p;
}
}
else{
{
struct tree* nctemp4493= p;
struct tree* nctemp4495=SemBinexpr(nctemp4493);
return nctemp4495;
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
}
}
}
}
int SemCopyparallel (struct tree* p,struct tree* np)
{
{
struct tree* nctemp4497= p;
struct tree* nctemp4501= np;
nctempchar1* nctemp4503=PtreeGetparallel(nctemp4501);
nctempchar1* nctemp4499= nctemp4503;
int nctemp4504=PtreeSetparallel(nctemp4497,nctemp4499);
return 1;
}
}
int SemArgtypes (struct tree* p,struct symbol* tp)
{
nctempchar1 *name;
{
struct symbol* nctemp4511= tp;
nctempchar1* nctemp4513=SymGetname(nctemp4511);
name=nctemp4513;
struct tree* nctemp4515= p;
struct symbol* nctemp4517= tp;
int nctemp4519=SemArgtype(nctemp4515,nctemp4517);
struct tree* nctemp4524= p;
struct tree* nctemp4526=PtreeMvchild(nctemp4524);
p =nctemp4526;
struct tree* nctemp4532= p;
nctempchar1* nctemp4534=PtreeGetname(nctemp4532);
nctempchar1* nctemp4530= nctemp4534;
struct nctempchar1 *nctemp4537;
static struct nctempchar1 nctemp4538 = {{ 8}, (char*)"arglist\0"};
nctemp4537=&nctemp4538;
nctempchar1* nctemp4535= nctemp4537;
int nctemp4539=LibeStrcmp(nctemp4530,nctemp4535);
int nctemp4527 = (nctemp4539 ==0);
if(nctemp4527)
{
{
struct symbol* nctemp4548= tp;
struct symbol* nctemp4550=SymGetable(nctemp4548);
tp =nctemp4550;
int nctemp4541 = (tp !=0);
if(nctemp4541)
{
{
struct tree* nctemp4553= p;
struct nctempchar1 *nctemp4557;
static struct nctempchar1 nctemp4558 = {{ 54}, (char*)"Function arguments does not match forward declaration\0"};
nctemp4557=&nctemp4558;
nctempchar1* nctemp4555= nctemp4557;
struct tree* nctemp4561= p;
nctempchar1* nctemp4563=PtreeGetdef(nctemp4561);
nctempchar1* nctemp4559= nctemp4563;
int nctemp4564=SemSerror(nctemp4553,nctemp4555,nctemp4559);
return 0;
}
}
return 1;
}
}
struct tree* nctemp4573= p;
struct tree* nctemp4575=PtreeMvchild(nctemp4573);
struct tree* nctemp4571= nctemp4575;
struct tree* nctemp4576=PtreeMvchild(nctemp4571);
p =nctemp4576;
struct symbol* nctemp4581= tp;
struct symbol* nctemp4583=SymGetable(nctemp4581);
tp =nctemp4583;
struct nctempchar1 *nctemp4590;
static struct nctempchar1 nctemp4591 = {{ 9}, (char*)"#arglist\0"};
nctemp4590=&nctemp4591;
nctempchar1* nctemp4588= nctemp4590;
struct symbol* nctemp4592= tp;
struct symbol* nctemp4594=SymLookup(nctemp4588,nctemp4592);
tp =nctemp4594;
int nctemp4595 = (tp ==0);
if(nctemp4595)
{
{
struct tree* nctemp4600= p;
struct nctempchar1 *nctemp4604;
static struct nctempchar1 nctemp4605 = {{ 54}, (char*)"Function Arguments does not match forward declaration\0"};
nctemp4604=&nctemp4605;
nctempchar1* nctemp4602= nctemp4604;
nctempchar1* nctemp4606= name;
int nctemp4609=SemSerror(nctemp4600,nctemp4602,nctemp4606);
}
}
else{
{
struct symbol* nctemp4614= tp;
struct symbol* nctemp4616=SymGetable(nctemp4614);
tp =nctemp4616;
}
}
struct symbol* nctemp4621= tp;
struct symbol* nctemp4623=SymMvnext(nctemp4621);
tp =nctemp4623;
int nctemp4624 = (p !=0);
int nctemp4628=nctemp4624;
while(nctemp4628)
{{
{
struct tree* nctemp4630= p;
struct symbol* nctemp4632= tp;
int nctemp4634=SemArgtype(nctemp4630,nctemp4632);
struct tree* nctemp4639= p;
struct tree* nctemp4641=PtreeMvsister(nctemp4639);
p =nctemp4641;
struct symbol* nctemp4646= tp;
struct symbol* nctemp4648=SymMvnext(nctemp4646);
tp =nctemp4648;
}
}
int nctemp4649 = (p !=0);
nctemp4628=nctemp4649;}return 1;
}
}
int SemFdef2 (struct tree* p,struct symbol* tp)
{
struct tree* np;
struct tree* sp;
struct symbol* up;
struct symbol* ftp;
struct symbol* ltp;
{
struct tree* nctemp4655= p;
struct nctempchar1 *nctemp4659;
static struct nctempchar1 nctemp4660 = {{ 5}, (char*)"fdef\0"};
nctemp4659=&nctemp4660;
nctempchar1* nctemp4657= nctemp4659;
int nctemp4661=PtreeSetname(nctemp4655,nctemp4657);
struct symbol* nctemp4663= tp;
struct nctempchar1 *nctemp4667;
static struct nctempchar1 nctemp4668 = {{ 5}, (char*)"void\0"};
nctemp4667=&nctemp4668;
nctempchar1* nctemp4665= nctemp4667;
int nctemp4669=SymSetforw(nctemp4663,nctemp4665);
struct tree* nctemp4674= p;
struct tree* nctemp4676=PtreeMvchild(nctemp4674);
np =nctemp4676;
struct symbol* nctemp4681=SymMktable();
ltp =nctemp4681;
struct symbol* nctemp4683= ltp;
int nctemp4685=SymSetltp(nctemp4683);
struct nctempchar1 *nctemp4692;
static struct nctempchar1 nctemp4693 = {{ 6}, (char*)"#self\0"};
nctemp4692=&nctemp4693;
nctempchar1* nctemp4690= nctemp4692;
struct symbol* nctemp4694= ltp;
struct symbol* nctemp4696=SymMkname(nctemp4690,nctemp4694);
up =nctemp4696;
struct symbol* nctemp4698= up;
struct tree* nctemp4702= p;
nctempchar1* nctemp4704=PtreeGetdef(nctemp4702);
nctempchar1* nctemp4700= nctemp4704;
int nctemp4705=SymSetfunc(nctemp4698,nctemp4700);
struct tree* nctemp4711= np;
nctempchar1* nctemp4713=PtreeGetname(nctemp4711);
nctempchar1* nctemp4709= nctemp4713;
struct nctempchar1 *nctemp4716;
static struct nctempchar1 nctemp4717 = {{ 8}, (char*)"arglist\0"};
nctemp4716=&nctemp4717;
nctempchar1* nctemp4714= nctemp4716;
int nctemp4718=LibeStrcmp(nctemp4709,nctemp4714);
int nctemp4706 = (nctemp4718 ==1);
if(nctemp4706)
{
{
struct tree* nctemp4724= np;
struct tree* nctemp4726=PtreeMvsister(nctemp4724);
sp =nctemp4726;
}
}
else{
{
sp = np;
}
}
struct tree* nctemp4732= np;
nctempchar1* nctemp4734=PtreeGetname(nctemp4732);
nctempchar1* nctemp4730= nctemp4734;
struct nctempchar1 *nctemp4737;
static struct nctempchar1 nctemp4738 = {{ 8}, (char*)"arglist\0"};
nctemp4737=&nctemp4738;
nctempchar1* nctemp4735= nctemp4737;
int nctemp4739=LibeStrcmp(nctemp4730,nctemp4735);
int nctemp4727 = (nctemp4739 ==1);
if(nctemp4727)
{
{
struct tree* nctemp4745= np;
struct tree* nctemp4747=PtreeMvchild(nctemp4745);
np =nctemp4747;
struct nctempchar1 *nctemp4754;
static struct nctempchar1 nctemp4755 = {{ 9}, (char*)"#arglist\0"};
nctemp4754=&nctemp4755;
nctempchar1* nctemp4752= nctemp4754;
struct symbol* nctemp4756= ltp;
struct symbol* nctemp4758=SymMkname(nctemp4752,nctemp4756);
up =nctemp4758;
struct symbol* nctemp4763=SymMktable();
ftp =nctemp4763;
struct symbol* nctemp4765= up;
struct symbol* nctemp4767= ftp;
struct symbol* nctemp4769=SymSetable(nctemp4765,nctemp4767);
struct tree* nctemp4771= np;
struct symbol* nctemp4773= ftp;
int nctemp4775=SemDeclarations(nctemp4771,nctemp4773);
}
}
struct tree* nctemp4777= p;
struct symbol* nctemp4779= tp;
int nctemp4781=SemArgtypes(nctemp4777,nctemp4779);
struct symbol* nctemp4783= tp;
int nctemp4785= 1;
int nctemp4787=SymSetemit(nctemp4783,nctemp4785);
struct tree* nctemp4789= sp;
int nctemp4791=SemCompstmnt(nctemp4789);
struct tree* nctemp4793= p;
struct tree* nctemp4795= sp;
int nctemp4797=SemCopyparallel(nctemp4793,nctemp4795);
return 1;
}
}
int Semisnobody (struct tree* p)
{
struct tree* np;
{
struct tree* nctemp4803= p;
struct tree* nctemp4805=PtreeMvchild(nctemp4803);
np =nctemp4805;
struct tree* nctemp4811= np;
nctempchar1* nctemp4813=PtreeGetname(nctemp4811);
nctempchar1* nctemp4809= nctemp4813;
struct nctempchar1 *nctemp4816;
static struct nctempchar1 nctemp4817 = {{ 8}, (char*)"arglist\0"};
nctemp4816=&nctemp4817;
nctempchar1* nctemp4814= nctemp4816;
int nctemp4818=LibeStrcmp(nctemp4809,nctemp4814);
int nctemp4806 = (nctemp4818 ==1);
if(nctemp4806)
{
{
struct tree* nctemp4824= np;
struct tree* nctemp4826=PtreeMvsister(nctemp4824);
np =nctemp4826;
struct tree* nctemp4831= np;
struct tree* nctemp4833=PtreeMvchild(nctemp4831);
np =nctemp4833;
int nctemp4834 = (np ==0);
if(nctemp4834)
{
{
return 1;
}
}
else{
{
return 0;
}
}
}
}
else{
{
struct tree* nctemp4845= np;
nctempchar1* nctemp4847=PtreeGetname(nctemp4845);
nctempchar1* nctemp4843= nctemp4847;
struct nctempchar1 *nctemp4850;
static struct nctempchar1 nctemp4851 = {{ 10}, (char*)"compstmnt\0"};
nctemp4850=&nctemp4851;
nctempchar1* nctemp4848= nctemp4850;
int nctemp4852=LibeStrcmp(nctemp4843,nctemp4848);
int nctemp4840 = (nctemp4852 ==1);
if(nctemp4840)
{
{
struct tree* nctemp4858= np;
struct tree* nctemp4860=PtreeMvchild(nctemp4858);
np =nctemp4860;
int nctemp4861 = (np ==0);
if(nctemp4861)
{
{
return 1;
}
}
else{
{
return 0;
}
}
}
}
}
}
return 0;
}
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
{
struct tree* nctemp4871= p;
nctempchar1* nctemp4873=PtreeGetarray(nctemp4871);
nctempchar1* nctemp4869= nctemp4873;
struct nctempchar1 *nctemp4876;
static struct nctempchar1 nctemp4877 = {{ 6}, (char*)"array\0"};
nctemp4876=&nctemp4877;
nctempchar1* nctemp4874= nctemp4876;
int nctemp4878=LibeStrcmp(nctemp4869,nctemp4874);
if(nctemp4878)
{
{
rank = 1;
struct tree* nctemp4883= p;
struct tree* nctemp4885=PtreeMvchild(nctemp4883);
np =nctemp4885;
struct tree* nctemp4890= np;
struct tree* nctemp4892=PtreeMvchild(nctemp4890);
sp =nctemp4892;
struct tree* nctemp4897= np;
struct tree* nctemp4899=PtreeMvsister(nctemp4897);
np =nctemp4899;
struct tree* nctemp4907= sp;
struct tree* nctemp4909=PtreeMvsister(nctemp4907);
sp =nctemp4909;
int nctemp4900 = (sp !=0);
int nctemp4911=nctemp4900;
while(nctemp4911)
{{
{
rank = (rank + 1);
}
}
struct tree* nctemp4919= sp;
struct tree* nctemp4921=PtreeMvsister(nctemp4919);
sp =nctemp4921;
int nctemp4912 = (sp !=0);
nctemp4911=nctemp4912;}}
}
else{
{
rank = 0;
struct tree* nctemp4927= p;
struct tree* nctemp4929=PtreeMvchild(nctemp4927);
np =nctemp4929;
}
}
struct tree* nctemp4931= p;
int nctemp4933= rank;
int nctemp4935=PtreeSetrank(nctemp4931,nctemp4933);
struct tree* nctemp4937= p;
struct tree* nctemp4939= np;
int nctemp4941=SemCopytype(nctemp4937,nctemp4939);
struct tree* nctemp4943= np;
struct tree* nctemp4947= p;
nctempchar1* nctemp4949=PtreeGetdef(nctemp4947);
nctempchar1* nctemp4945= nctemp4949;
int nctemp4950=PtreeSetype(nctemp4943,nctemp4945);
p = np;
nobody = 0;
struct tree* nctemp4954= p;
int nctemp4956=Semisnobody(nctemp4954);
int nctemp4951 = (nctemp4956 ==1);
if(nctemp4951)
{
{
struct tree* nctemp4959= p;
struct nctempchar1 *nctemp4963;
static struct nctempchar1 nctemp4964 = {{ 5}, (char*)"forw\0"};
nctemp4963=&nctemp4964;
nctempchar1* nctemp4961= nctemp4963;
int nctemp4965=PtreeSetforw(nctemp4959,nctemp4961);
nobody = 1;
}
}
struct tree* nctemp4975= p;
nctempchar1* nctemp4977=PtreeGetdef(nctemp4975);
nctempchar1* nctemp4973= nctemp4977;
struct symbol* nctemp4978= tp;
struct symbol* nctemp4980=SymMkname(nctemp4973,nctemp4978);
fname =nctemp4980;
int nctemp4966 = (fname ==0);
if(nctemp4966)
{
{
struct tree* nctemp4988= p;
nctempchar1* nctemp4990=PtreeGetdef(nctemp4988);
nctempchar1* nctemp4986= nctemp4990;
struct symbol* nctemp4991= tp;
struct symbol* nctemp4993=SymLookup(nctemp4986,nctemp4991);
qp =nctemp4993;
struct symbol* nctemp4999= qp;
nctempchar1* nctemp5001=SymGetforw(nctemp4999);
nctempchar1* nctemp4997= nctemp5001;
struct nctempchar1 *nctemp5004;
static struct nctempchar1 nctemp5005 = {{ 5}, (char*)"forw\0"};
nctemp5004=&nctemp5005;
nctempchar1* nctemp5002= nctemp5004;
int nctemp5006=LibeStrcmp(nctemp4997,nctemp5002);
int nctemp4994 = (nctemp5006 !=1);
if(nctemp4994)
{
{
struct tree* nctemp5009= np;
struct nctempchar1 *nctemp5013;
static struct nctempchar1 nctemp5014 = {{ 25}, (char*)"Function already defined\0"};
nctemp5013=&nctemp5014;
nctempchar1* nctemp5011= nctemp5013;
struct tree* nctemp5017= p;
nctempchar1* nctemp5019=PtreeGetdef(nctemp5017);
nctempchar1* nctemp5015= nctemp5019;
int nctemp5020=SemSerror(nctemp5009,nctemp5011,nctemp5015);
}
}
else{
{
struct tree* nctemp5022= p;
struct symbol* nctemp5024= qp;
int nctemp5026=SemFdef2(nctemp5022,nctemp5024);
return 1;
}
}
}
}
struct symbol* nctemp5029= fname;
struct tree* nctemp5033= p;
nctempchar1* nctemp5035=PtreeGetype(nctemp5033);
nctempchar1* nctemp5031= nctemp5035;
int nctemp5036=SymSetype(nctemp5029,nctemp5031);
struct symbol* nctemp5038= fname;
struct tree* nctemp5042= p;
nctempchar1* nctemp5044=PtreeGetstruct(nctemp5042);
nctempchar1* nctemp5040= nctemp5044;
int nctemp5045=SymSetstruct(nctemp5038,nctemp5040);
struct symbol* nctemp5047= fname;
struct tree* nctemp5051= p;
nctempchar1* nctemp5053=PtreeGetarray(nctemp5051);
nctempchar1* nctemp5049= nctemp5053;
int nctemp5054=SymSetarray(nctemp5047,nctemp5049);
struct symbol* nctemp5056= fname;
struct tree* nctemp5060= p;
int nctemp5062=PtreeGetrank(nctemp5060);
int nctemp5058= nctemp5062;
int nctemp5063=SymSetrank(nctemp5056,nctemp5058);
struct symbol* nctemp5065= fname;
struct nctempchar1 *nctemp5069;
static struct nctempchar1 nctemp5070 = {{ 5}, (char*)"fdef\0"};
nctemp5069=&nctemp5070;
nctempchar1* nctemp5067= nctemp5069;
int nctemp5071=SymSetfunc(nctemp5065,nctemp5067);
int nctemp5072 = (nobody ==1);
if(nctemp5072)
{
{
struct symbol* nctemp5077= fname;
struct nctempchar1 *nctemp5081;
static struct nctempchar1 nctemp5082 = {{ 5}, (char*)"forw\0"};
nctemp5081=&nctemp5082;
nctempchar1* nctemp5079= nctemp5081;
int nctemp5083=SymSetforw(nctemp5077,nctemp5079);
}
}
struct tree* nctemp5088= p;
struct tree* nctemp5090=PtreeMvchild(nctemp5088);
np =nctemp5090;
struct symbol* nctemp5095=SymMktable();
ltp =nctemp5095;
struct symbol* nctemp5097= ltp;
int nctemp5099=SymSetltp(nctemp5097);
struct nctempchar1 *nctemp5106;
static struct nctempchar1 nctemp5107 = {{ 6}, (char*)"#self\0"};
nctemp5106=&nctemp5107;
nctempchar1* nctemp5104= nctemp5106;
struct symbol* nctemp5108= ltp;
struct symbol* nctemp5110=SymMkname(nctemp5104,nctemp5108);
up =nctemp5110;
struct symbol* nctemp5112= up;
struct tree* nctemp5116= p;
nctempchar1* nctemp5118=PtreeGetdef(nctemp5116);
nctempchar1* nctemp5114= nctemp5118;
int nctemp5119=SymSetfunc(nctemp5112,nctemp5114);
struct tree* nctemp5125= np;
nctempchar1* nctemp5127=PtreeGetname(nctemp5125);
nctempchar1* nctemp5123= nctemp5127;
struct nctempchar1 *nctemp5130;
static struct nctempchar1 nctemp5131 = {{ 8}, (char*)"arglist\0"};
nctemp5130=&nctemp5131;
nctempchar1* nctemp5128= nctemp5130;
int nctemp5132=LibeStrcmp(nctemp5123,nctemp5128);
int nctemp5120 = (nctemp5132 ==1);
if(nctemp5120)
{
{
struct tree* nctemp5138= np;
struct tree* nctemp5140=PtreeMvsister(nctemp5138);
sp =nctemp5140;
}
}
else{
{
sp = np;
}
}
struct tree* nctemp5146= np;
nctempchar1* nctemp5148=PtreeGetname(nctemp5146);
nctempchar1* nctemp5144= nctemp5148;
struct nctempchar1 *nctemp5151;
static struct nctempchar1 nctemp5152 = {{ 8}, (char*)"arglist\0"};
nctemp5151=&nctemp5152;
nctempchar1* nctemp5149= nctemp5151;
int nctemp5153=LibeStrcmp(nctemp5144,nctemp5149);
int nctemp5141 = (nctemp5153 ==1);
if(nctemp5141)
{
{
struct tree* nctemp5159= np;
struct tree* nctemp5161=PtreeMvchild(nctemp5159);
np =nctemp5161;
struct nctempchar1 *nctemp5168;
static struct nctempchar1 nctemp5169 = {{ 9}, (char*)"#arglist\0"};
nctemp5168=&nctemp5169;
nctempchar1* nctemp5166= nctemp5168;
struct symbol* nctemp5170= ltp;
struct symbol* nctemp5172=SymMkname(nctemp5166,nctemp5170);
up =nctemp5172;
struct symbol* nctemp5177=SymMktable();
ftp =nctemp5177;
struct symbol* nctemp5179= up;
struct symbol* nctemp5181= ftp;
struct symbol* nctemp5183=SymSetable(nctemp5179,nctemp5181);
struct tree* nctemp5185= np;
struct symbol* nctemp5187= ftp;
int nctemp5189=SemDeclarations(nctemp5185,nctemp5187);
struct symbol* nctemp5194=SymMktable();
fsub =nctemp5194;
struct symbol* nctemp5196= fname;
struct symbol* nctemp5198= fsub;
struct symbol* nctemp5200=SymSetable(nctemp5196,nctemp5198);
struct nctempchar1 *nctemp5207;
static struct nctempchar1 nctemp5208 = {{ 9}, (char*)"#arglist\0"};
nctemp5207=&nctemp5208;
nctempchar1* nctemp5205= nctemp5207;
struct symbol* nctemp5209= fsub;
struct symbol* nctemp5211=SymMkname(nctemp5205,nctemp5209);
arg =nctemp5211;
struct symbol* nctemp5216=SymMktable();
argsub =nctemp5216;
struct symbol* nctemp5218= arg;
struct symbol* nctemp5220= argsub;
struct symbol* nctemp5222=SymSetable(nctemp5218,nctemp5220);
struct symbol* nctemp5224= ftp;
struct symbol* nctemp5226= argsub;
int nctemp5228=SymCpytble(nctemp5224,nctemp5226);
}
}
struct tree* nctemp5230= sp;
int nctemp5232=SemCompstmnt(nctemp5230);
struct tree* nctemp5234= p;
struct tree* nctemp5236= sp;
int nctemp5238=SemCopyparallel(nctemp5234,nctemp5236);
return 1;
}
}
int SemExtdecl (struct tree* p)
{
struct tree* sp;
struct tree* np;
{
struct tree* nctemp5243= p;
nctempchar1* nctemp5245=PtreeGetname(nctemp5243);
nctempchar1* nctemp5241= nctemp5245;
struct nctempchar1 *nctemp5248;
static struct nctempchar1 nctemp5249 = {{ 8}, (char*)"extdecl\0"};
nctemp5248=&nctemp5249;
nctempchar1* nctemp5246= nctemp5248;
int nctemp5250=LibeStrcmp(nctemp5241,nctemp5246);
if(nctemp5250)
{
{
struct tree* nctemp5255= p;
struct tree* nctemp5257=PtreeMvchild(nctemp5255);
np =nctemp5257;
struct tree* nctemp5259= np;
struct nctempchar1 *nctemp5263;
static struct nctempchar1 nctemp5264 = {{ 7}, (char*)"global\0"};
nctemp5263=&nctemp5264;
nctempchar1* nctemp5261= nctemp5263;
int nctemp5265=PtreeSetglobal(nctemp5259,nctemp5261);
struct tree* nctemp5271= np;
nctempchar1* nctemp5273=PtreeGetname(nctemp5271);
nctempchar1* nctemp5269= nctemp5273;
struct nctempchar1 *nctemp5276;
static struct nctempchar1 nctemp5277 = {{ 7}, (char*)"import\0"};
nctemp5276=&nctemp5277;
nctempchar1* nctemp5274= nctemp5276;
int nctemp5278=LibeStrcmp(nctemp5269,nctemp5274);
int nctemp5266 = (nctemp5278 ==1);
if(nctemp5266)
{
{
struct tree* nctemp5281= np;
struct symbol* nctemp5285=SymGetetp();
struct symbol* nctemp5283= nctemp5285;
int nctemp5286=SemImport(nctemp5281,nctemp5283);
return 1;
}
}
int nctemp5288 = (np !=0);
int nctemp5292=nctemp5288;
while(nctemp5292)
{{
{
struct tree* nctemp5297= np;
struct tree* nctemp5299=PtreeMvchild(nctemp5297);
sp =nctemp5299;
struct tree* nctemp5303= np;
nctempchar1* nctemp5305=PtreeGetarray(nctemp5303);
nctempchar1* nctemp5301= nctemp5305;
struct nctempchar1 *nctemp5308;
static struct nctempchar1 nctemp5309 = {{ 6}, (char*)"array\0"};
nctemp5308=&nctemp5309;
nctempchar1* nctemp5306= nctemp5308;
int nctemp5310=LibeStrcmp(nctemp5301,nctemp5306);
if(nctemp5310)
{
{
struct tree* nctemp5315= sp;
struct tree* nctemp5317=PtreeMvsister(nctemp5315);
sp =nctemp5317;
}
}
struct tree* nctemp5321= sp;
nctempchar1* nctemp5323=PtreeGetname(nctemp5321);
nctempchar1* nctemp5319= nctemp5323;
struct nctempchar1 *nctemp5326;
static struct nctempchar1 nctemp5327 = {{ 10}, (char*)"structdec\0"};
nctemp5326=&nctemp5327;
nctempchar1* nctemp5324= nctemp5326;
int nctemp5328=LibeStrcmp(nctemp5319,nctemp5324);
if(nctemp5328)
{
{
struct tree* nctemp5330= np;
struct symbol* nctemp5334=SymGetetp();
struct symbol* nctemp5332= nctemp5334;
int nctemp5335=SemStructdecl(nctemp5330,nctemp5332);
}
}
else{
{
struct tree* nctemp5339= sp;
nctempchar1* nctemp5341=PtreeGetname(nctemp5339);
nctempchar1* nctemp5337= nctemp5341;
struct nctempchar1 *nctemp5344;
static struct nctempchar1 nctemp5345 = {{ 5}, (char*)"fdef\0"};
nctemp5344=&nctemp5345;
nctempchar1* nctemp5342= nctemp5344;
int nctemp5346=LibeStrcmp(nctemp5337,nctemp5342);
if(nctemp5346)
{
{
struct tree* nctemp5348= np;
struct symbol* nctemp5352=SymGetetp();
struct symbol* nctemp5350= nctemp5352;
int nctemp5353=SemFdef(nctemp5348,nctemp5350);
}
}
else{
{
struct tree* nctemp5355= np;
struct symbol* nctemp5359=SymGetetp();
struct symbol* nctemp5357= nctemp5359;
int nctemp5360=SemDeclaration(nctemp5355,nctemp5357);
}
}
}
}
struct tree* nctemp5365= np;
struct tree* nctemp5367=PtreeMvsister(nctemp5365);
np =nctemp5367;
}
}
int nctemp5368 = (np !=0);
nctemp5292=nctemp5368;}}
}
return 1;
}
}
int SemSem (struct tree* p,struct symbol* tp)
{
struct symbol* ltp;
{
struct symbol* nctemp5374= tp;
int nctemp5376=SymSetetp(nctemp5374);
ltp = 0;
struct symbol* nctemp5378= ltp;
int nctemp5380=SymSetltp(nctemp5378);
int nctemp5382= 0;
int nctemp5384=SemSetsimple(nctemp5382);
struct tree* nctemp5386= p;
int nctemp5388=SemExtdecl(nctemp5386);
return 1;
}
}
int SemWhilestmnt (struct tree* p)
{
struct tree* q;
{
q = p;
struct tree* nctemp5394= p;
struct tree* nctemp5396=PtreeMvchild(nctemp5394);
p =nctemp5396;
struct tree* nctemp5398= p;
struct tree* nctemp5400=SemExpr(nctemp5398);
struct tree* nctemp5402= p;
int nctemp5404= 1;
int nctemp5406=PtreeSetopexpr(nctemp5402,nctemp5404);
struct tree* nctemp5411= p;
struct tree* nctemp5413=PtreeMvsister(nctemp5411);
p =nctemp5413;
struct tree* nctemp5415= p;
int nctemp5417=SemCompstmnt(nctemp5415);
struct tree* nctemp5419= q;
struct tree* nctemp5421= p;
int nctemp5423=SemCopyparallel(nctemp5419,nctemp5421);
return 1;
}
}
int SemForstmnt (struct tree* p)
{
struct tree* q;
{
q = p;
struct tree* nctemp5429= p;
struct tree* nctemp5431=PtreeMvchild(nctemp5429);
p =nctemp5431;
struct tree* nctemp5433= p;
int nctemp5435= 1;
int nctemp5437=PtreeSetopexpr(nctemp5433,nctemp5435);
int nctemp5439= 1;
int nctemp5441=SemSetsimple(nctemp5439);
struct tree* nctemp5443= p;
struct tree* nctemp5445=SemExpr(nctemp5443);
struct tree* nctemp5450= p;
struct tree* nctemp5452=PtreeMvsister(nctemp5450);
p =nctemp5452;
struct tree* nctemp5454= p;
int nctemp5456= 1;
int nctemp5458=PtreeSetopexpr(nctemp5454,nctemp5456);
int nctemp5460= 1;
int nctemp5462=SemSetsimple(nctemp5460);
struct tree* nctemp5464= p;
struct tree* nctemp5466=SemExpr(nctemp5464);
struct tree* nctemp5471= p;
struct tree* nctemp5473=PtreeMvsister(nctemp5471);
p =nctemp5473;
struct tree* nctemp5475= p;
int nctemp5477= 1;
int nctemp5479=PtreeSetopexpr(nctemp5475,nctemp5477);
int nctemp5481= 1;
int nctemp5483=SemSetsimple(nctemp5481);
struct tree* nctemp5485= p;
struct tree* nctemp5487=SemExpr(nctemp5485);
struct tree* nctemp5492= p;
struct tree* nctemp5494=PtreeMvsister(nctemp5492);
p =nctemp5494;
struct tree* nctemp5496= p;
int nctemp5498=SemCompstmnt(nctemp5496);
struct tree* nctemp5500= q;
struct tree* nctemp5502= p;
int nctemp5504=SemCopyparallel(nctemp5500,nctemp5502);
return 1;
}
}
int SemParallelstmnt (struct tree* p)
{
struct tree* sp;
struct tree* rp;
int rank;
{
rank = 0;
struct tree* nctemp5510= p;
struct tree* nctemp5512=PtreeMvchild(nctemp5510);
sp =nctemp5512;
struct tree* nctemp5517= sp;
struct tree* nctemp5519=PtreeMvchild(nctemp5517);
sp =nctemp5519;
int nctemp5520 = (sp !=0);
int nctemp5524=nctemp5520;
while(nctemp5524)
{{
{
struct tree* nctemp5529= sp;
struct tree* nctemp5531=PtreeMvchild(nctemp5529);
rp =nctemp5531;
struct tree* nctemp5533= rp;
struct tree* nctemp5535=SemExpr(nctemp5533);
struct tree* nctemp5537= rp;
int nctemp5539= 1;
int nctemp5541=PtreeSetopexpr(nctemp5537,nctemp5539);
struct tree* nctemp5546= rp;
struct tree* nctemp5548=PtreeMvsister(nctemp5546);
rp =nctemp5548;
struct tree* nctemp5550= rp;
struct tree* nctemp5552=SemExpr(nctemp5550);
struct tree* nctemp5554= rp;
int nctemp5556= 1;
int nctemp5558=PtreeSetopexpr(nctemp5554,nctemp5556);
struct tree* nctemp5566= rp;
struct tree* nctemp5568=PtreeMvsister(nctemp5566);
rp =nctemp5568;
int nctemp5559 = (rp !=0);
if(nctemp5559)
{
{
struct tree* nctemp5571= rp;
struct tree* nctemp5573=SemExpr(nctemp5571);
struct tree* nctemp5575= rp;
int nctemp5577= 1;
int nctemp5579=PtreeSetopexpr(nctemp5575,nctemp5577);
}
}
struct tree* nctemp5583= sp;
struct tree* nctemp5585=PtreeMvsister(nctemp5583);
int nctemp5580 = (nctemp5585 !=0);
if(nctemp5580)
{
{
struct tree* nctemp5591= sp;
struct tree* nctemp5593=PtreeMvsister(nctemp5591);
rp =nctemp5593;
}
}
struct tree* nctemp5598= sp;
struct tree* nctemp5600=PtreeMvsister(nctemp5598);
sp =nctemp5600;
rank = (rank + 1);
}
}
int nctemp5601 = (sp !=0);
nctemp5524=nctemp5601;}struct tree* nctemp5606= p;
int nctemp5608= rank;
int nctemp5610=PtreeSetrank(nctemp5606,nctemp5608);
struct tree* nctemp5615= p;
struct tree* nctemp5617=PtreeMvchild(nctemp5615);
sp =nctemp5617;
struct tree* nctemp5622= sp;
struct tree* nctemp5624=PtreeMvsister(nctemp5622);
sp =nctemp5624;
struct tree* nctemp5626= sp;
int nctemp5628=SemCompstmnt(nctemp5626);
return 1;
}
}
int SemIfstmnt (struct tree* p)
{
struct tree* q;
{
q = p;
struct tree* nctemp5634= p;
struct tree* nctemp5636=PtreeMvchild(nctemp5634);
p =nctemp5636;
struct tree* nctemp5638= p;
struct tree* nctemp5640=SemExpr(nctemp5638);
struct tree* nctemp5642= p;
int nctemp5644= 1;
int nctemp5646=PtreeSetopexpr(nctemp5642,nctemp5644);
struct tree* nctemp5651= p;
struct tree* nctemp5653=PtreeMvsister(nctemp5651);
p =nctemp5653;
struct tree* nctemp5655= p;
int nctemp5657=SemCompstmnt(nctemp5655);
struct tree* nctemp5659= q;
struct tree* nctemp5661= p;
int nctemp5663=SemCopyparallel(nctemp5659,nctemp5661);
struct tree* nctemp5671= p;
struct tree* nctemp5673=PtreeMvsister(nctemp5671);
p =nctemp5673;
int nctemp5664 = (p ==0);
if(nctemp5664)
{
{
return 1;
}
}
struct tree* nctemp5679= p;
nctempchar1* nctemp5681=PtreeGetname(nctemp5679);
nctempchar1* nctemp5677= nctemp5681;
struct nctempchar1 *nctemp5684;
static struct nctempchar1 nctemp5685 = {{ 5}, (char*)"else\0"};
nctemp5684=&nctemp5685;
nctempchar1* nctemp5682= nctemp5684;
int nctemp5686=LibeStrcmp(nctemp5677,nctemp5682);
if(nctemp5686)
{
{
struct tree* nctemp5691= p;
struct tree* nctemp5693=PtreeMvchild(nctemp5691);
p =nctemp5693;
struct tree* nctemp5695= p;
int nctemp5697=SemCompstmnt(nctemp5695);
}
}
return 1;
}
}
int SemReturnstmnt (struct tree* p)
{
struct tree* sp;
struct symbol* up;
{
struct tree* nctemp5703= p;
struct tree* nctemp5705=PtreeMvchild(nctemp5703);
sp =nctemp5705;
int nctemp5706 = (sp !=0);
if(nctemp5706)
{
{
struct tree* nctemp5711= sp;
struct tree* nctemp5713=SemExpr(nctemp5711);
struct tree* nctemp5715= sp;
int nctemp5717= 1;
int nctemp5719=PtreeSetopexpr(nctemp5715,nctemp5717);
struct nctempchar1 *nctemp5726;
static struct nctempchar1 nctemp5727 = {{ 6}, (char*)"#self\0"};
nctemp5726=&nctemp5727;
nctempchar1* nctemp5724= nctemp5726;
struct symbol* nctemp5730=SymGetltp();
struct symbol* nctemp5728= nctemp5730;
struct symbol* nctemp5731=SymLookup(nctemp5724,nctemp5728);
up =nctemp5731;
struct symbol* nctemp5738= up;
nctempchar1* nctemp5740=SymGetfunc(nctemp5738);
nctempchar1* nctemp5736= nctemp5740;
struct symbol* nctemp5741=SymLook(nctemp5736);
up =nctemp5741;
struct tree* nctemp5743= p;
struct symbol* nctemp5747= up;
nctempchar1* nctemp5749=SymGetype(nctemp5747);
nctempchar1* nctemp5745= nctemp5749;
int nctemp5750=PtreeSetype(nctemp5743,nctemp5745);
struct tree* nctemp5752= p;
struct symbol* nctemp5756= up;
nctempchar1* nctemp5758=SymGetstruct(nctemp5756);
nctempchar1* nctemp5754= nctemp5758;
int nctemp5759=PtreeSetstruct(nctemp5752,nctemp5754);
struct tree* nctemp5761= p;
struct symbol* nctemp5765= up;
nctempchar1* nctemp5767=SymGetarray(nctemp5765);
nctempchar1* nctemp5763= nctemp5767;
int nctemp5768=PtreeSetarray(nctemp5761,nctemp5763);
struct tree* nctemp5770= p;
struct tree* nctemp5774= sp;
nctempchar1* nctemp5776=PtreeGetref(nctemp5774);
nctempchar1* nctemp5772= nctemp5776;
int nctemp5777=PtreeSetref(nctemp5770,nctemp5772);
struct tree* nctemp5779= p;
struct symbol* nctemp5783= up;
int nctemp5785=SymGetrank(nctemp5783);
int nctemp5781= nctemp5785;
int nctemp5786=PtreeSetrank(nctemp5779,nctemp5781);
struct tree* nctemp5790= p;
struct tree* nctemp5792= sp;
int nctemp5794=SemComparetype(nctemp5790,nctemp5792);
int nctemp5787 = (nctemp5794 ==0);
if(nctemp5787)
{
{
struct tree* nctemp5797= p;
struct nctempchar1 *nctemp5801;
static struct nctempchar1 nctemp5802 = {{ 26}, (char*)"Return type is incorrect \0"};
nctemp5801=&nctemp5802;
nctempchar1* nctemp5799= nctemp5801;
struct nctempchar1 *nctemp5805;
static struct nctempchar1 nctemp5806 = {{ 2}, (char*)" \0"};
nctemp5805=&nctemp5806;
nctempchar1* nctemp5803= nctemp5805;
int nctemp5807=SemSerror(nctemp5797,nctemp5799,nctemp5803);
}
}
}
}
return 1;
}
}
int SemStmnt (struct tree* p)
{
struct tree* q;
int parflag;
{
parflag = 0;
q = p;
int nctemp5809 = (p !=0);
int nctemp5813=nctemp5809;
while(nctemp5813)
{{
{
struct tree* nctemp5817= p;
nctempchar1* nctemp5819=PtreeGetname(nctemp5817);
nctempchar1* nctemp5815= nctemp5819;
struct nctempchar1 *nctemp5822;
static struct nctempchar1 nctemp5823 = {{ 5}, (char*)"expr\0"};
nctemp5822=&nctemp5823;
nctempchar1* nctemp5820= nctemp5822;
int nctemp5824=LibeStrcmp(nctemp5815,nctemp5820);
if(nctemp5824)
{
{
struct tree* nctemp5826= p;
int nctemp5828= 1;
int nctemp5830=PtreeSetopexpr(nctemp5826,nctemp5828);
int nctemp5832= 1;
int nctemp5834=SemSetsimple(nctemp5832);
struct tree* nctemp5836= p;
struct tree* nctemp5838=SemExpr(nctemp5836);
struct tree* nctemp5840= p;
int nctemp5842= 1;
int nctemp5844=PtreeSetopexpr(nctemp5840,nctemp5842);
}
}
struct tree* nctemp5848= p;
nctempchar1* nctemp5850=PtreeGetname(nctemp5848);
nctempchar1* nctemp5846= nctemp5850;
struct nctempchar1 *nctemp5853;
static struct nctempchar1 nctemp5854 = {{ 6}, (char*)"while\0"};
nctemp5853=&nctemp5854;
nctempchar1* nctemp5851= nctemp5853;
int nctemp5855=LibeStrcmp(nctemp5846,nctemp5851);
if(nctemp5855)
{
{
struct tree* nctemp5857= p;
int nctemp5859=SemWhilestmnt(nctemp5857);
}
}
struct tree* nctemp5863= p;
nctempchar1* nctemp5865=PtreeGetname(nctemp5863);
nctempchar1* nctemp5861= nctemp5865;
struct nctempchar1 *nctemp5868;
static struct nctempchar1 nctemp5869 = {{ 4}, (char*)"for\0"};
nctemp5868=&nctemp5869;
nctempchar1* nctemp5866= nctemp5868;
int nctemp5870=LibeStrcmp(nctemp5861,nctemp5866);
if(nctemp5870)
{
{
struct tree* nctemp5872= p;
int nctemp5874=SemForstmnt(nctemp5872);
}
}
struct tree* nctemp5878= p;
nctempchar1* nctemp5880=PtreeGetname(nctemp5878);
nctempchar1* nctemp5876= nctemp5880;
struct nctempchar1 *nctemp5883;
static struct nctempchar1 nctemp5884 = {{ 9}, (char*)"parallel\0"};
nctemp5883=&nctemp5884;
nctempchar1* nctemp5881= nctemp5883;
int nctemp5885=LibeStrcmp(nctemp5876,nctemp5881);
if(nctemp5885)
{
{
struct tree* nctemp5887= p;
int nctemp5889=SemParallelstmnt(nctemp5887);
parflag = 1;
}
}
struct tree* nctemp5893= p;
nctempchar1* nctemp5895=PtreeGetname(nctemp5893);
nctempchar1* nctemp5891= nctemp5895;
struct nctempchar1 *nctemp5898;
static struct nctempchar1 nctemp5899 = {{ 3}, (char*)"if\0"};
nctemp5898=&nctemp5899;
nctempchar1* nctemp5896= nctemp5898;
int nctemp5900=LibeStrcmp(nctemp5891,nctemp5896);
if(nctemp5900)
{
{
struct tree* nctemp5902= p;
int nctemp5904=SemIfstmnt(nctemp5902);
}
}
struct tree* nctemp5908= p;
nctempchar1* nctemp5910=PtreeGetname(nctemp5908);
nctempchar1* nctemp5906= nctemp5910;
struct nctempchar1 *nctemp5913;
static struct nctempchar1 nctemp5914 = {{ 7}, (char*)"return\0"};
nctemp5913=&nctemp5914;
nctempchar1* nctemp5911= nctemp5913;
int nctemp5915=LibeStrcmp(nctemp5906,nctemp5911);
if(nctemp5915)
{
{
struct tree* nctemp5917= p;
int nctemp5919=SemReturnstmnt(nctemp5917);
}
}
struct tree* nctemp5924= p;
struct tree* nctemp5926=PtreeMvsister(nctemp5924);
p =nctemp5926;
}
}
int nctemp5927 = (p !=0);
nctemp5813=nctemp5927;}int nctemp5931 = (parflag ==1);
if(nctemp5931)
{
{
struct tree* nctemp5936= q;
struct nctempchar1 *nctemp5940;
static struct nctempchar1 nctemp5941 = {{ 9}, (char*)"parallel\0"};
nctemp5940=&nctemp5941;
nctempchar1* nctemp5938= nctemp5940;
int nctemp5942=PtreeSetparallel(nctemp5936,nctemp5938);
}
}
return 1;
}
}
int SemCompstmnt (struct tree* p)
{
struct tree* q;
int parflag;
{
q = p;
struct tree* nctemp5948= p;
struct tree* nctemp5950=PtreeMvchild(nctemp5948);
p =nctemp5950;
int nctemp5951 = (p ==0);
if(nctemp5951)
{
{
return 1;
}
}
struct tree* nctemp5959= p;
nctempchar1* nctemp5961=PtreeGetname(nctemp5959);
nctempchar1* nctemp5957= nctemp5961;
struct nctempchar1 *nctemp5964;
static struct nctempchar1 nctemp5965 = {{ 13}, (char*)"declarations\0"};
nctemp5964=&nctemp5965;
nctempchar1* nctemp5962= nctemp5964;
int nctemp5966=LibeStrcmp(nctemp5957,nctemp5962);
if(nctemp5966)
{
{
struct tree* nctemp5970= p;
struct tree* nctemp5972=PtreeMvchild(nctemp5970);
struct tree* nctemp5968= nctemp5972;
struct symbol* nctemp5975=SymGetltp();
struct symbol* nctemp5973= nctemp5975;
int nctemp5976=SemDeclarations(nctemp5968,nctemp5973);
struct tree* nctemp5981= p;
struct tree* nctemp5983=PtreeMvsister(nctemp5981);
p =nctemp5983;
}
}
struct tree* nctemp5985= p;
int nctemp5987=SemStmnt(nctemp5985);
struct tree* nctemp5989= q;
struct tree* nctemp5991= p;
int nctemp5993=SemCopyparallel(nctemp5989,nctemp5991);
return 1;
}
}
