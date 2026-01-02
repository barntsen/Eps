//  Translated by epsc  version: Fri Jan  2 12:13:59 2026

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
struct tree* nctemp6= p;
nctempchar1* nctemp8=PtreeGetfile(nctemp6);
nctempchar1* nctemp4= nctemp8;
struct tree* nctemp11= p;
nctempchar1* nctemp13=PtreeGetdef(nctemp11);
nctempchar1* nctemp9= nctemp13;
struct tree* nctemp16= p;
int nctemp18=PtreeGetline(nctemp16);
int nctemp14= nctemp18;
nctempchar1* nctemp19= s1;
nctempchar1* nctemp22= s2;
int nctemp25=ErrSerror(nctemp4,nctemp9,nctemp14,nctemp19,nctemp22);
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
struct tree* nctemp32= p;
nctempchar1* nctemp34=PtreeGetdef(nctemp32);
module=nctemp34;
nctempchar1* nctemp40= module;
struct nctempchar1 *nctemp45;
static struct nctempchar1 nctemp46 = {{ 3}, (char*)".m\0"};
nctemp45=&nctemp46;
nctempchar1* nctemp43= nctemp45;
nctempchar1* nctemp47=LibeStradd(nctemp40,nctemp43);
file=nctemp47;
nctempchar1* nctemp52= file;
struct nctempchar1 *nctemp57;
static struct nctempchar1 nctemp58 = {{ 2}, (char*)"r\0"};
nctemp57=&nctemp58;
nctempchar1* nctemp55= nctemp57;
int nctemp59=LibeOpen(nctemp52,nctemp55);
fd =nctemp59;
int nctemp60 = (fd ==0);
if(nctemp60)
{
nctempchar1* nctemp69=ScanPath();
path=nctemp69;
nctempchar1* nctemp75= path;
nctempchar1* nctemp78= file;
nctempchar1* nctemp81=LibeStradd(nctemp75,nctemp78);
sysfile=nctemp81;
nctempchar1* nctemp86= sysfile;
struct nctempchar1 *nctemp91;
static struct nctempchar1 nctemp92 = {{ 2}, (char*)"r\0"};
nctemp91=&nctemp92;
nctempchar1* nctemp89= nctemp91;
int nctemp93=LibeOpen(nctemp86,nctemp89);
fd =nctemp93;
RunFree(sysfile->a);
RunFree(sysfile);
RunFree(path->a);
RunFree(path);
int nctemp100 = (fd ==0);
if(nctemp100)
{
struct tree* nctemp105= p;
struct nctempchar1 *nctemp109;
static struct nctempchar1 nctemp110 = {{ 24}, (char*)"Module file not found: \0"};
nctemp109=&nctemp110;
nctempchar1* nctemp107= nctemp109;
nctempchar1* nctemp111= file;
int nctemp114=SemSerror(nctemp105,nctemp107,nctemp111);
}
}
struct symbol* nctemp119=SymMktable();
stp =nctemp119;
int nctemp121= fd;
struct symbol* nctemp123= stp;
nctempchar1* nctemp125= module;
int nctemp128=SymReadsym(nctemp121,nctemp123,nctemp125);
int nctemp130= fd;
int nctemp132=LibeClose(nctemp130);
struct symbol* nctemp137= etp;
struct symbol* nctemp139= stp;
struct symbol* nctemp141=SymAddtble(nctemp137,nctemp139);
etp =nctemp141;
return 1;
}
int SemAutodeclar (struct tree* identifier,struct symbol* local,struct symbol* global)
{
struct symbol* entry;
struct tree* nctemp152= identifier;
nctempchar1* nctemp154=PtreeGetdef(nctemp152);
nctempchar1* nctemp150= nctemp154;
struct symbol* nctemp155=SymLook(nctemp150);
entry =nctemp155;
int nctemp143 = (entry !=0);
if(nctemp143)
{
return 1;
}
struct tree* nctemp164= identifier;
nctempchar1* nctemp166=PtreeGetdef(nctemp164);
nctempchar1* nctemp162= nctemp166;
struct symbol* nctemp167= local;
struct symbol* nctemp169=SymMkname(nctemp162,nctemp167);
entry =nctemp169;
struct symbol* nctemp171= entry;
struct nctempchar1 *nctemp175;
static struct nctempchar1 nctemp176 = {{ 11}, (char*)"identifier\0"};
nctemp175=&nctemp176;
nctempchar1* nctemp173= nctemp175;
int nctemp177=SymSetident(nctemp171,nctemp173);
struct symbol* nctemp179= entry;
struct tree* nctemp183= identifier;
nctempchar1* nctemp185=PtreeGetype(nctemp183);
nctempchar1* nctemp181= nctemp185;
int nctemp186=SymSetype(nctemp179,nctemp181);
struct symbol* nctemp188= entry;
struct nctempchar1 *nctemp192;
static struct nctempchar1 nctemp193 = {{ 5}, (char*)"lval\0"};
nctemp192=&nctemp193;
nctempchar1* nctemp190= nctemp192;
int nctemp194=SymSetlval(nctemp188,nctemp190);
struct symbol* nctemp196= entry;
struct tree* nctemp200= identifier;
nctempchar1* nctemp202=PtreeGetarray(nctemp200);
nctempchar1* nctemp198= nctemp202;
int nctemp203=SymSetarray(nctemp196,nctemp198);
struct symbol* nctemp205= entry;
struct tree* nctemp209= identifier;
nctempchar1* nctemp211=PtreeGetstruct(nctemp209);
nctempchar1* nctemp207= nctemp211;
int nctemp212=SymSetstruct(nctemp205,nctemp207);
struct symbol* nctemp214= entry;
struct tree* nctemp218= identifier;
nctempchar1* nctemp220=PtreeGetref(nctemp218);
nctempchar1* nctemp216= nctemp220;
int nctemp221=SymSetref(nctemp214,nctemp216);
struct symbol* nctemp223= entry;
struct tree* nctemp227= identifier;
int nctemp229=PtreeGetrank(nctemp227);
int nctemp225= nctemp229;
int nctemp230=SymSetrank(nctemp223,nctemp225);
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
struct tree* nctemp233= p;
struct tree* nctemp237= p;
nctempchar1* nctemp239=PtreeGetdef(nctemp237);
nctempchar1* nctemp235= nctemp239;
int nctemp240=PtreeSetype(nctemp233,nctemp235);
struct tree* nctemp246= p;
nctempchar1* nctemp248=PtreeGetglobal(nctemp246);
global=nctemp248;
rank = 0;
struct tree* nctemp252= p;
nctempchar1* nctemp254=PtreeGetarray(nctemp252);
nctempchar1* nctemp250= nctemp254;
struct nctempchar1 *nctemp257;
static struct nctempchar1 nctemp258 = {{ 6}, (char*)"array\0"};
nctemp257=&nctemp258;
nctempchar1* nctemp255= nctemp257;
int nctemp259=LibeStrcmp(nctemp250,nctemp255);
if(nctemp259)
{
struct tree* nctemp264= p;
struct tree* nctemp266=PtreeMvchild(nctemp264);
np =nctemp266;
struct tree* nctemp271= np;
struct tree* nctemp273=PtreeMvchild(nctemp271);
np =nctemp273;
rank = 1;
struct tree* nctemp281= np;
struct tree* nctemp283=PtreeMvsister(nctemp281);
np =nctemp283;
int nctemp274 = (np !=0);
int nctemp285=nctemp274;
while(nctemp285)
{{
rank = (rank + 1);
}
struct tree* nctemp293= np;
struct tree* nctemp295=PtreeMvsister(nctemp293);
np =nctemp295;
int nctemp286 = (np !=0);
nctemp285=nctemp286;}struct tree* nctemp301= p;
struct tree* nctemp303=PtreeMvchild(nctemp301);
np =nctemp303;
struct tree* nctemp308= np;
struct tree* nctemp310=PtreeMvsister(nctemp308);
np =nctemp310;
}
else{
struct tree* nctemp315= p;
struct tree* nctemp317=PtreeMvchild(nctemp315);
np =nctemp317;
}
int nctemp318 = (np !=0);
int nctemp322=nctemp318;
while(nctemp322)
{{
struct tree* nctemp324= np;
struct tree* nctemp328= p;
nctempchar1* nctemp330=PtreeGetype(nctemp328);
nctempchar1* nctemp326= nctemp330;
int nctemp331=PtreeSetype(nctemp324,nctemp326);
struct tree* nctemp341= np;
nctempchar1* nctemp343=PtreeGetdef(nctemp341);
nctempchar1* nctemp339= nctemp343;
struct symbol* nctemp344= tp;
struct symbol* nctemp346=SymMkname(nctemp339,nctemp344);
up =nctemp346;
int nctemp332 = (up ==0);
if(nctemp332)
{
struct tree* nctemp349= np;
struct nctempchar1 *nctemp353;
static struct nctempchar1 nctemp354 = {{ 21}, (char*)"Multiple declaration\0"};
nctemp353=&nctemp354;
nctempchar1* nctemp351= nctemp353;
struct tree* nctemp357= np;
nctempchar1* nctemp359=PtreeGetdef(nctemp357);
nctempchar1* nctemp355= nctemp359;
int nctemp360=SemSerror(nctemp349,nctemp351,nctemp355);
}
else{
struct symbol* nctemp362= up;
struct nctempchar1 *nctemp366;
static struct nctempchar1 nctemp367 = {{ 11}, (char*)"identifier\0"};
nctemp366=&nctemp367;
nctempchar1* nctemp364= nctemp366;
int nctemp368=SymSetident(nctemp362,nctemp364);
struct symbol* nctemp370= up;
struct tree* nctemp374= p;
nctempchar1* nctemp376=PtreeGetype(nctemp374);
nctempchar1* nctemp372= nctemp376;
int nctemp377=SymSetype(nctemp370,nctemp372);
nctempchar1* nctemp381= global;
struct nctempchar1 *nctemp386;
static struct nctempchar1 nctemp387 = {{ 7}, (char*)"global\0"};
nctemp386=&nctemp387;
nctempchar1* nctemp384= nctemp386;
int nctemp388=LibeStrcmp(nctemp381,nctemp384);
int nctemp378 = (nctemp388 ==1);
if(nctemp378)
{
struct symbol* nctemp391= up;
struct nctempchar1 *nctemp395;
static struct nctempchar1 nctemp396 = {{ 7}, (char*)"global\0"};
nctemp395=&nctemp396;
nctempchar1* nctemp393= nctemp395;
int nctemp397=SymSetglobal(nctemp391,nctemp393);
}
struct tree* nctemp403= p;
nctempchar1* nctemp405=PtreeGetype(nctemp403);
nctempchar1* nctemp401= nctemp405;
struct nctempchar1 *nctemp408;
static struct nctempchar1 nctemp409 = {{ 6}, (char*)"const\0"};
nctemp408=&nctemp409;
nctempchar1* nctemp406= nctemp408;
int nctemp410=LibeStrcmp(nctemp401,nctemp406);
int nctemp398 = (nctemp410 ==1);
if(nctemp398)
{
struct tree* nctemp416= np;
struct tree* nctemp418=PtreeMvchild(nctemp416);
sp =nctemp418;
struct tree* nctemp423= sp;
struct tree* nctemp425=PtreeMvchild(nctemp423);
sp =nctemp425;
struct tree* nctemp431= sp;
nctempchar1* nctemp433=PtreeGetname(nctemp431);
nctempchar1* nctemp429= nctemp433;
struct nctempchar1 *nctemp436;
static struct nctempchar1 nctemp437 = {{ 7}, (char*)"unexpr\0"};
nctemp436=&nctemp437;
nctempchar1* nctemp434= nctemp436;
int nctemp438=LibeStrcmp(nctemp429,nctemp434);
int nctemp426 = (nctemp438 ==1);
if(nctemp426)
{
struct tree* nctemp444= sp;
struct tree* nctemp446=PtreeMvchild(nctemp444);
sp =nctemp446;
struct tree* nctemp459= sp;
nctempchar1* nctemp461=PtreeGetdef(nctemp459);
nctempchar1* nctemp457= nctemp461;
int nctemp462=LibeStrlen(nctemp457);
int nctemp464 = nctemp462 + 1;
int nctemp466 = nctemp464 + 3;
l =nctemp466;
int nctemp473=l;
nctempchar1 *nctemp472;
nctemp472=(nctempchar1*)RunMalloc(sizeof(nctempchar1));
nctemp472->d[0]=l;
nctemp472->a=(char *)RunMalloc(sizeof(char)*nctemp473);
s=nctemp472;
struct nctempchar1 *nctemp479;
static struct nctempchar1 nctemp480 = {{ 3}, (char*)"(-\0"};
nctemp479=&nctemp480;
nctempchar1* nctemp477= nctemp479;
nctempchar1* nctemp481= s;
int nctemp484=LibeStrcpy(nctemp477,nctemp481);
struct tree* nctemp488= sp;
nctempchar1* nctemp490=PtreeGetdef(nctemp488);
nctempchar1* nctemp486= nctemp490;
nctempchar1* nctemp491= s;
int nctemp494=LibeStrcat(nctemp486,nctemp491);
struct nctempchar1 *nctemp498;
static struct nctempchar1 nctemp499 = {{ 2}, (char*)")\0"};
nctemp498=&nctemp499;
nctempchar1* nctemp496= nctemp498;
nctempchar1* nctemp500= s;
int nctemp503=LibeStrcat(nctemp496,nctemp500);
struct tree* nctemp505= sp;
nctempchar1* nctemp507= s;
int nctemp510=PtreeSetdef(nctemp505,nctemp507);
RunFree(s->a);
RunFree(s);
}
struct symbol* nctemp515= up;
struct tree* nctemp519= sp;
nctempchar1* nctemp521=PtreeGetname(nctemp519);
nctempchar1* nctemp517= nctemp521;
int nctemp522=SymSetype(nctemp515,nctemp517);
struct symbol* nctemp524= up;
struct tree* nctemp528= sp;
nctempchar1* nctemp530=PtreeGetdef(nctemp528);
nctempchar1* nctemp526= nctemp530;
int nctemp531=SymSetdescr(nctemp524,nctemp526);
struct symbol* nctemp533= up;
int nctemp535= 0;
int nctemp537=SymSetemit(nctemp533,nctemp535);
}
struct symbol* nctemp539= up;
struct nctempchar1 *nctemp543;
static struct nctempchar1 nctemp544 = {{ 5}, (char*)"lval\0"};
nctemp543=&nctemp544;
nctempchar1* nctemp541= nctemp543;
int nctemp545=SymSetlval(nctemp539,nctemp541);
struct tree* nctemp549= p;
nctempchar1* nctemp551=PtreeGetstruct(nctemp549);
nctempchar1* nctemp547= nctemp551;
struct nctempchar1 *nctemp554;
static struct nctempchar1 nctemp555 = {{ 7}, (char*)"struct\0"};
nctemp554=&nctemp555;
nctempchar1* nctemp552= nctemp554;
int nctemp556=LibeStrcmp(nctemp547,nctemp552);
if(nctemp556)
{
struct tree* nctemp562= p;
nctempchar1* nctemp564=PtreeGetype(nctemp562);
nctempchar1* nctemp560= nctemp564;
struct symbol* nctemp567=SymGetetp();
struct symbol* nctemp565= nctemp567;
struct symbol* nctemp568=SymLookup(nctemp560,nctemp565);
int nctemp557 = (nctemp568 ==0);
if(nctemp557)
{
struct tree* nctemp571= p;
struct nctempchar1 *nctemp575;
static struct nctempchar1 nctemp576 = {{ 20}, (char*)"Undefined structure\0"};
nctemp575=&nctemp576;
nctempchar1* nctemp573= nctemp575;
struct tree* nctemp579= p;
nctempchar1* nctemp581=PtreeGetype(nctemp579);
nctempchar1* nctemp577= nctemp581;
int nctemp582=SemSerror(nctemp571,nctemp573,nctemp577);
}
struct symbol* nctemp584= up;
struct tree* nctemp588= p;
nctempchar1* nctemp590=PtreeGetstruct(nctemp588);
nctempchar1* nctemp586= nctemp590;
int nctemp591=SymSetstruct(nctemp584,nctemp586);
}
struct symbol* nctemp593= up;
struct tree* nctemp597= p;
nctempchar1* nctemp599=PtreeGetarray(nctemp597);
nctempchar1* nctemp595= nctemp599;
int nctemp600=SymSetarray(nctemp593,nctemp595);
struct symbol* nctemp602= up;
int nctemp604= rank;
int nctemp606=SymSetrank(nctemp602,nctemp604);
struct tree* nctemp608= np;
int nctemp610= rank;
int nctemp612=PtreeSetrank(nctemp608,nctemp610);
}
struct tree* nctemp617= np;
struct tree* nctemp619=PtreeMvsister(nctemp617);
np =nctemp619;
}
int nctemp620 = (np !=0);
nctemp322=nctemp620;}return 1;
}
int SemDeclarations (struct tree* p,struct symbol* tp)
{
int nctemp625 = (p !=0);
int nctemp629=nctemp625;
while(nctemp629)
{{
struct tree* nctemp631= p;
struct symbol* nctemp633= tp;
int nctemp635=SemDeclaration(nctemp631,nctemp633);
struct tree* nctemp640= p;
struct tree* nctemp642=PtreeMvsister(nctemp640);
p =nctemp642;
}
int nctemp643 = (p !=0);
nctemp629=nctemp643;}return 1;
}
int SemStructdecl (struct tree* p,struct symbol* tp)
{
struct symbol* up;
struct symbol* uup;
nctempchar1 *structure;
struct tree* nctemp653= p;
nctempchar1* nctemp655=PtreeGetdef(nctemp653);
structure=nctemp655;
struct tree* nctemp660= p;
struct tree* nctemp662=PtreeMvchild(nctemp660);
p =nctemp662;
struct tree* nctemp667= p;
struct tree* nctemp669=PtreeMvchild(nctemp667);
p =nctemp669;
struct tree* nctemp673= p;
nctempchar1* nctemp675=PtreeGetname(nctemp673);
nctempchar1* nctemp671= nctemp675;
struct nctempchar1 *nctemp678;
static struct nctempchar1 nctemp679 = {{ 13}, (char*)"declarations\0"};
nctemp678=&nctemp679;
nctempchar1* nctemp676= nctemp678;
int nctemp680=LibeStrcmp(nctemp671,nctemp676);
if(nctemp680)
{
struct symbol* nctemp685=SymMktable();
up =nctemp685;
nctempchar1* nctemp693= structure;
struct symbol* nctemp696= tp;
struct symbol* nctemp698=SymMkname(nctemp693,nctemp696);
uup =nctemp698;
int nctemp686 = (uup ==0);
if(nctemp686)
{
struct tree* nctemp701= p;
struct nctempchar1 *nctemp705;
static struct nctempchar1 nctemp706 = {{ 21}, (char*)"Multiple declaration\0"};
nctemp705=&nctemp706;
nctempchar1* nctemp703= nctemp705;
nctempchar1* nctemp707= structure;
int nctemp710=SemSerror(nctemp701,nctemp703,nctemp707);
}
else{
struct symbol* nctemp712= uup;
struct symbol* nctemp714= up;
struct symbol* nctemp716=SymSetable(nctemp712,nctemp714);
struct symbol* nctemp718= uup;
struct nctempchar1 *nctemp722;
static struct nctempchar1 nctemp723 = {{ 10}, (char*)"structdef\0"};
nctemp722=&nctemp723;
nctempchar1* nctemp720= nctemp722;
int nctemp724=SymSetstruct(nctemp718,nctemp720);
struct symbol* nctemp726= uup;
nctempchar1* nctemp728= structure;
int nctemp731=SymSetype(nctemp726,nctemp728);
struct tree* nctemp735= p;
struct tree* nctemp737=PtreeMvchild(nctemp735);
struct tree* nctemp733= nctemp737;
struct symbol* nctemp738= up;
int nctemp740=SemDeclarations(nctemp733,nctemp738);
}
}
return 1;
}
int SemArgtype (struct tree* p,struct symbol* tp)
{
nctempchar1 *name;
struct tree* nctemp747= p;
nctempchar1* nctemp749=PtreeGetdef(nctemp747);
name=nctemp749;
struct symbol* nctemp755= tp;
nctempchar1* nctemp757=SymGetype(nctemp755);
nctempchar1* nctemp753= nctemp757;
struct tree* nctemp760= p;
nctempchar1* nctemp762=PtreeGetype(nctemp760);
nctempchar1* nctemp758= nctemp762;
int nctemp763=LibeStrcmp(nctemp753,nctemp758);
int nctemp750 = (nctemp763 ==0);
if(nctemp750)
{
struct tree* nctemp766= p;
struct nctempchar1 *nctemp770;
static struct nctempchar1 nctemp771 = {{ 49}, (char*)"Argument type does not match forward declaration\0"};
nctemp770=&nctemp771;
nctempchar1* nctemp768= nctemp770;
nctempchar1* nctemp772= name;
int nctemp775=SemSerror(nctemp766,nctemp768,nctemp772);
}
struct symbol* nctemp781= tp;
nctempchar1* nctemp783=SymGetref(nctemp781);
nctempchar1* nctemp779= nctemp783;
struct tree* nctemp786= p;
nctempchar1* nctemp788=PtreeGetref(nctemp786);
nctempchar1* nctemp784= nctemp788;
int nctemp789=LibeStrcmp(nctemp779,nctemp784);
int nctemp776 = (nctemp789 ==0);
if(nctemp776)
{
struct tree* nctemp792= p;
struct nctempchar1 *nctemp796;
static struct nctempchar1 nctemp797 = {{ 49}, (char*)"Argument type does not match forward declaration\0"};
nctemp796=&nctemp797;
nctempchar1* nctemp794= nctemp796;
nctempchar1* nctemp798= name;
int nctemp801=SemSerror(nctemp792,nctemp794,nctemp798);
}
struct symbol* nctemp807= tp;
nctempchar1* nctemp809=SymGetarray(nctemp807);
nctempchar1* nctemp805= nctemp809;
struct tree* nctemp812= p;
nctempchar1* nctemp814=PtreeGetarray(nctemp812);
nctempchar1* nctemp810= nctemp814;
int nctemp815=LibeStrcmp(nctemp805,nctemp810);
int nctemp802 = (nctemp815 ==0);
if(nctemp802)
{
struct tree* nctemp818= p;
struct nctempchar1 *nctemp822;
static struct nctempchar1 nctemp823 = {{ 49}, (char*)"Argument type does not match forward declaration\0"};
nctemp822=&nctemp823;
nctempchar1* nctemp820= nctemp822;
nctempchar1* nctemp824= name;
int nctemp827=SemSerror(nctemp818,nctemp820,nctemp824);
}
struct symbol* nctemp831= tp;
int nctemp833=SymGetrank(nctemp831);
struct tree* nctemp835= p;
int nctemp837=PtreeGetrank(nctemp835);
int nctemp828 = (nctemp833 !=nctemp837);
if(nctemp828)
{
struct tree* nctemp839= p;
struct nctempchar1 *nctemp843;
static struct nctempchar1 nctemp844 = {{ 49}, (char*)"Argument type does not match forward declaration\0"};
nctemp843=&nctemp844;
nctempchar1* nctemp841= nctemp843;
nctempchar1* nctemp845= name;
int nctemp848=SemSerror(nctemp839,nctemp841,nctemp845);
}
return 1;
}
int SemArray (struct tree* p,struct symbol* tp)
{
struct tree* np;
int rank;
struct tree* nctemp855= p;
nctempchar1* nctemp857=PtreeGetarray(nctemp855);
nctempchar1* nctemp853= nctemp857;
struct nctempchar1 *nctemp860;
static struct nctempchar1 nctemp861 = {{ 6}, (char*)"array\0"};
nctemp860=&nctemp861;
nctempchar1* nctemp858= nctemp860;
int nctemp862=LibeStrcmp(nctemp853,nctemp858);
int nctemp850 = (nctemp862 ==0);
if(nctemp850)
{
struct tree* nctemp865= p;
struct nctempchar1 *nctemp869;
static struct nctempchar1 nctemp870 = {{ 13}, (char*)"Not an array\0"};
nctemp869=&nctemp870;
nctempchar1* nctemp867= nctemp869;
struct tree* nctemp873= p;
nctempchar1* nctemp875=PtreeGetdef(nctemp873);
nctempchar1* nctemp871= nctemp875;
int nctemp876=SemSerror(nctemp865,nctemp867,nctemp871);
return 0;
}
struct tree* nctemp879= p;
struct nctempchar1 *nctemp883;
static struct nctempchar1 nctemp884 = {{ 11}, (char*)"identifier\0"};
nctemp883=&nctemp884;
nctempchar1* nctemp881= nctemp883;
int nctemp885=PtreeSetname(nctemp879,nctemp881);
struct tree* nctemp890= p;
struct tree* nctemp892=PtreeMvchild(nctemp890);
np =nctemp892;
struct tree* nctemp898= np;
nctempchar1* nctemp900=PtreeGetname(nctemp898);
nctempchar1* nctemp896= nctemp900;
struct nctempchar1 *nctemp903;
static struct nctempchar1 nctemp904 = {{ 9}, (char*)"exprlist\0"};
nctemp903=&nctemp904;
nctempchar1* nctemp901= nctemp903;
int nctemp905=LibeStrcmp(nctemp896,nctemp901);
int nctemp893 = (nctemp905 ==0);
if(nctemp893)
{
struct tree* nctemp908= p;
struct nctempchar1 *nctemp912;
static struct nctempchar1 nctemp913 = {{ 22}, (char*)"Missing array indexes\0"};
nctemp912=&nctemp913;
nctempchar1* nctemp910= nctemp912;
struct tree* nctemp916= p;
nctempchar1* nctemp918=PtreeGetdef(nctemp916);
nctempchar1* nctemp914= nctemp918;
int nctemp919=SemSerror(nctemp908,nctemp910,nctemp914);
return 0;
}
struct tree* nctemp928= np;
struct tree* nctemp930=PtreeMvchild(nctemp928);
np =nctemp930;
int nctemp921 = (np !=0);
if(nctemp921)
{
rank = 0;
int nctemp932 = (np !=0);
int nctemp936=nctemp932;
while(nctemp936)
{{
struct tree* nctemp938= np;
struct tree* nctemp940=SemExpr(nctemp938);
struct tree* nctemp945= np;
struct tree* nctemp947=PtreeMvsister(nctemp945);
np =nctemp947;
rank = (rank + 1);
}
int nctemp948 = (np !=0);
nctemp936=nctemp948;}}
struct symbol* nctemp956= tp;
int nctemp958=SymGetrank(nctemp956);
int nctemp952 = (rank !=nctemp958);
if(nctemp952)
{
struct tree* nctemp960= p;
struct nctempchar1 *nctemp964;
static struct nctempchar1 nctemp965 = {{ 24}, (char*)"Illegal array dimension\0"};
nctemp964=&nctemp965;
nctempchar1* nctemp962= nctemp964;
struct tree* nctemp968= p;
nctempchar1* nctemp970=PtreeGetdef(nctemp968);
nctempchar1* nctemp966= nctemp970;
int nctemp971=SemSerror(nctemp960,nctemp962,nctemp966);
return 0;
}
struct tree* nctemp974= p;
int nctemp976= rank;
int nctemp978=PtreeSetrank(nctemp974,nctemp976);
return 1;
}
int SemStructure (struct tree* p,struct symbol* tp)
{
nctempchar1 *temp;
struct symbol* up;
struct symbol* uup;
struct tree* np;
struct tree* nctemp985= p;
nctempchar1* nctemp987=PtreeGetstruct(nctemp985);
nctempchar1* nctemp983= nctemp987;
struct nctempchar1 *nctemp990;
static struct nctempchar1 nctemp991 = {{ 7}, (char*)"struct\0"};
nctemp990=&nctemp991;
nctempchar1* nctemp988= nctemp990;
int nctemp992=LibeStrcmp(nctemp983,nctemp988);
int nctemp980 = (nctemp992 ==0);
if(nctemp980)
{
struct tree* nctemp995= p;
struct nctempchar1 *nctemp999;
static struct nctempchar1 nctemp1000 = {{ 16}, (char*)"Not a structure\0"};
nctemp999=&nctemp1000;
nctempchar1* nctemp997= nctemp999;
struct tree* nctemp1003= p;
nctempchar1* nctemp1005=PtreeGetdef(nctemp1003);
nctempchar1* nctemp1001= nctemp1005;
int nctemp1006=SemSerror(nctemp995,nctemp997,nctemp1001);
return 0;
}
struct tree* nctemp1009= p;
struct nctempchar1 *nctemp1013;
static struct nctempchar1 nctemp1014 = {{ 11}, (char*)"identifier\0"};
nctemp1013=&nctemp1014;
nctempchar1* nctemp1011= nctemp1013;
int nctemp1015=PtreeSetname(nctemp1009,nctemp1011);
struct symbol* nctemp1021= tp;
nctempchar1* nctemp1023=SymGetype(nctemp1021);
temp=nctemp1023;
nctempchar1* nctemp1031= temp;
struct symbol* nctemp1034=SymLook(nctemp1031);
up =nctemp1034;
int nctemp1024 = (up ==0);
if(nctemp1024)
{
nctempchar1* nctemp1043= temp;
struct symbol* nctemp1046=SymLook(nctemp1043);
up =nctemp1046;
int nctemp1036 = (up ==0);
if(nctemp1036)
{
struct tree* nctemp1049= p;
struct nctempchar1 *nctemp1053;
static struct nctempchar1 nctemp1054 = {{ 26}, (char*)"Undeclared structure type\0"};
nctemp1053=&nctemp1054;
nctempchar1* nctemp1051= nctemp1053;
struct nctempchar1 *nctemp1057;
static struct nctempchar1 nctemp1058 = {{ 2}, (char*)" \0"};
nctemp1057=&nctemp1058;
nctempchar1* nctemp1055= nctemp1057;
int nctemp1059=SemSerror(nctemp1049,nctemp1051,nctemp1055);
return 0;
}
}
struct symbol* nctemp1064= tp;
nctempchar1* nctemp1066=SymGetstruct(nctemp1064);
nctempchar1* nctemp1062= nctemp1066;
struct nctempchar1 *nctemp1069;
static struct nctempchar1 nctemp1070 = {{ 10}, (char*)"structdef\0"};
nctemp1069=&nctemp1070;
nctempchar1* nctemp1067= nctemp1069;
int nctemp1071=LibeStrcmp(nctemp1062,nctemp1067);
if(nctemp1071)
{
struct tree* nctemp1073= p;
struct nctempchar1 *nctemp1077;
static struct nctempchar1 nctemp1078 = {{ 43}, (char*)"Struct names can not be used as a variable\0"};
nctemp1077=&nctemp1078;
nctempchar1* nctemp1075= nctemp1077;
struct tree* nctemp1081= p;
nctempchar1* nctemp1083=PtreeGetdef(nctemp1081);
nctempchar1* nctemp1079= nctemp1083;
int nctemp1084=SemSerror(nctemp1073,nctemp1075,nctemp1079);
return 0;
}
struct tree* nctemp1090= p;
struct tree* nctemp1092=PtreeMvchild(nctemp1090);
np =nctemp1092;
int nctemp1093 = (np ==0);
if(nctemp1093)
{
struct tree* nctemp1098= p;
struct nctempchar1 *nctemp1102;
static struct nctempchar1 nctemp1103 = {{ 27}, (char*)"Missing structure selector\0"};
nctemp1102=&nctemp1103;
nctempchar1* nctemp1100= nctemp1102;
struct tree* nctemp1106= p;
nctempchar1* nctemp1108=PtreeGetdef(nctemp1106);
nctempchar1* nctemp1104= nctemp1108;
int nctemp1109=SemSerror(nctemp1098,nctemp1100,nctemp1104);
return 0;
}
struct tree* nctemp1114= p;
nctempchar1* nctemp1116=PtreeGetarray(nctemp1114);
nctempchar1* nctemp1112= nctemp1116;
struct nctempchar1 *nctemp1119;
static struct nctempchar1 nctemp1120 = {{ 6}, (char*)"array\0"};
nctemp1119=&nctemp1120;
nctempchar1* nctemp1117= nctemp1119;
int nctemp1121=LibeStrcmp(nctemp1112,nctemp1117);
if(nctemp1121)
{
struct tree* nctemp1126= np;
struct tree* nctemp1128=PtreeMvsister(nctemp1126);
np =nctemp1128;
}
int nctemp1129 = (np ==0);
if(nctemp1129)
{
struct tree* nctemp1134= p;
struct nctempchar1 *nctemp1138;
static struct nctempchar1 nctemp1139 = {{ 20}, (char*)"Missing array index\0"};
nctemp1138=&nctemp1139;
nctempchar1* nctemp1136= nctemp1138;
struct tree* nctemp1142= p;
nctempchar1* nctemp1144=PtreeGetdef(nctemp1142);
nctempchar1* nctemp1140= nctemp1144;
int nctemp1145=SemSerror(nctemp1134,nctemp1136,nctemp1140);
return 0;
}
struct symbol* nctemp1151= up;
struct symbol* nctemp1153=SymGetable(nctemp1151);
uup =nctemp1153;
struct tree* nctemp1163= np;
nctempchar1* nctemp1165=PtreeGetdef(nctemp1163);
nctempchar1* nctemp1161= nctemp1165;
struct symbol* nctemp1166= uup;
struct symbol* nctemp1168=SymLookup(nctemp1161,nctemp1166);
tp =nctemp1168;
int nctemp1154 = (tp ==0);
if(nctemp1154)
{
struct tree* nctemp1171= np;
struct nctempchar1 *nctemp1175;
static struct nctempchar1 nctemp1176 = {{ 28}, (char*)"Undeclared structure member\0"};
nctemp1175=&nctemp1176;
nctempchar1* nctemp1173= nctemp1175;
struct tree* nctemp1179= np;
nctempchar1* nctemp1181=PtreeGetdef(nctemp1179);
nctempchar1* nctemp1177= nctemp1181;
int nctemp1182=SemSerror(nctemp1171,nctemp1173,nctemp1177);
return 0;
}
struct symbol* nctemp1187= tp;
nctempchar1* nctemp1189=SymGetarray(nctemp1187);
nctempchar1* nctemp1185= nctemp1189;
struct nctempchar1 *nctemp1192;
static struct nctempchar1 nctemp1193 = {{ 6}, (char*)"array\0"};
nctemp1192=&nctemp1193;
nctempchar1* nctemp1190= nctemp1192;
int nctemp1194=LibeStrcmp(nctemp1185,nctemp1190);
if(nctemp1194)
{
struct tree* nctemp1198= np;
struct tree* nctemp1200=PtreeMvchild(nctemp1198);
int nctemp1195 = (nctemp1200 !=0);
if(nctemp1195)
{
struct tree* nctemp1203= np;
struct symbol* nctemp1205= tp;
int nctemp1207=SemArray(nctemp1203,nctemp1205);
struct symbol* nctemp1211= tp;
nctempchar1* nctemp1213=SymGetstruct(nctemp1211);
nctempchar1* nctemp1209= nctemp1213;
struct nctempchar1 *nctemp1216;
static struct nctempchar1 nctemp1217 = {{ 7}, (char*)"struct\0"};
nctemp1216=&nctemp1217;
nctempchar1* nctemp1214= nctemp1216;
int nctemp1218=LibeStrcmp(nctemp1209,nctemp1214);
if(nctemp1218)
{
struct tree* nctemp1220= np;
struct nctempchar1 *nctemp1224;
static struct nctempchar1 nctemp1225 = {{ 5}, (char*)"sref\0"};
nctemp1224=&nctemp1225;
nctempchar1* nctemp1222= nctemp1224;
int nctemp1226=PtreeSetref(nctemp1220,nctemp1222);
}
}
else{
struct tree* nctemp1228= np;
struct nctempchar1 *nctemp1232;
static struct nctempchar1 nctemp1233 = {{ 5}, (char*)"aref\0"};
nctemp1232=&nctemp1233;
nctempchar1* nctemp1230= nctemp1232;
int nctemp1234=PtreeSetref(nctemp1228,nctemp1230);
}
}
else{
struct symbol* nctemp1238= tp;
nctempchar1* nctemp1240=SymGetstruct(nctemp1238);
nctempchar1* nctemp1236= nctemp1240;
struct nctempchar1 *nctemp1243;
static struct nctempchar1 nctemp1244 = {{ 7}, (char*)"struct\0"};
nctemp1243=&nctemp1244;
nctempchar1* nctemp1241= nctemp1243;
int nctemp1245=LibeStrcmp(nctemp1236,nctemp1241);
if(nctemp1245)
{
struct tree* nctemp1247= np;
struct nctempchar1 *nctemp1251;
static struct nctempchar1 nctemp1252 = {{ 5}, (char*)"sref\0"};
nctemp1251=&nctemp1252;
nctempchar1* nctemp1249= nctemp1251;
int nctemp1253=PtreeSetref(nctemp1247,nctemp1249);
}
}
struct tree* nctemp1255= np;
struct symbol* nctemp1259= tp;
nctempchar1* nctemp1261=SymGetype(nctemp1259);
nctempchar1* nctemp1257= nctemp1261;
int nctemp1262=PtreeSetype(nctemp1255,nctemp1257);
struct tree* nctemp1264= np;
struct symbol* nctemp1268= tp;
nctempchar1* nctemp1270=SymGetarray(nctemp1268);
nctempchar1* nctemp1266= nctemp1270;
int nctemp1271=PtreeSetarray(nctemp1264,nctemp1266);
struct tree* nctemp1273= np;
struct symbol* nctemp1277= tp;
int nctemp1279=SymGetrank(nctemp1277);
int nctemp1275= nctemp1279;
int nctemp1280=PtreeSetrank(nctemp1273,nctemp1275);
struct tree* nctemp1282= np;
struct symbol* nctemp1286= tp;
nctempchar1* nctemp1288=SymGetlval(nctemp1286);
nctempchar1* nctemp1284= nctemp1288;
int nctemp1289=PtreeSetlval(nctemp1282,nctemp1284);
struct tree* nctemp1291= p;
struct symbol* nctemp1295= tp;
nctempchar1* nctemp1297=SymGetype(nctemp1295);
nctempchar1* nctemp1293= nctemp1297;
int nctemp1298=PtreeSetype(nctemp1291,nctemp1293);
struct tree* nctemp1300= p;
struct tree* nctemp1304= np;
nctempchar1* nctemp1306=PtreeGetref(nctemp1304);
nctempchar1* nctemp1302= nctemp1306;
int nctemp1307=PtreeSetref(nctemp1300,nctemp1302);
struct tree* nctemp1309= p;
struct symbol* nctemp1313= tp;
int nctemp1315=SymGetrank(nctemp1313);
int nctemp1311= nctemp1315;
int nctemp1316=PtreeSetrank(nctemp1309,nctemp1311);
return 1;
}
int SemId (struct tree* p)
{
struct symbol* tp;
struct tree* np;
struct tree* nctemp1327= p;
nctempchar1* nctemp1329=PtreeGetdef(nctemp1327);
nctempchar1* nctemp1325= nctemp1329;
struct symbol* nctemp1330=SymLook(nctemp1325);
tp =nctemp1330;
int nctemp1318 = (tp ==0);
if(nctemp1318)
{
struct tree* nctemp1333= p;
struct nctempchar1 *nctemp1337;
static struct nctempchar1 nctemp1338 = {{ 22}, (char*)"Undeclared identifier\0"};
nctemp1337=&nctemp1338;
nctempchar1* nctemp1335= nctemp1337;
struct tree* nctemp1341= p;
nctempchar1* nctemp1343=PtreeGetdef(nctemp1341);
nctempchar1* nctemp1339= nctemp1343;
int nctemp1344=SemSerror(nctemp1333,nctemp1335,nctemp1339);
}
struct symbol* nctemp1350= tp;
nctempchar1* nctemp1352=SymGetype(nctemp1350);
nctempchar1* nctemp1348= nctemp1352;
struct nctempchar1 *nctemp1355;
static struct nctempchar1 nctemp1356 = {{ 10}, (char*)"iconstant\0"};
nctemp1355=&nctemp1356;
nctempchar1* nctemp1353= nctemp1355;
int nctemp1357=LibeStrcmp(nctemp1348,nctemp1353);
int nctemp1345 = (nctemp1357 ==1);
if(nctemp1345)
{
struct tree* nctemp1360= p;
struct symbol* nctemp1364= tp;
nctempchar1* nctemp1366=SymGetype(nctemp1364);
nctempchar1* nctemp1362= nctemp1366;
int nctemp1367=PtreeSetname(nctemp1360,nctemp1362);
struct tree* nctemp1369= p;
struct symbol* nctemp1373= tp;
nctempchar1* nctemp1375=SymGetdescr(nctemp1373);
nctempchar1* nctemp1371= nctemp1375;
int nctemp1376=PtreeSetdef(nctemp1369,nctemp1371);
struct tree* nctemp1378= p;
struct nctempchar1 *nctemp1382;
static struct nctempchar1 nctemp1383 = {{ 4}, (char*)"int\0"};
nctemp1382=&nctemp1383;
nctempchar1* nctemp1380= nctemp1382;
int nctemp1384=PtreeSetype(nctemp1378,nctemp1380);
return 1;
}
else{
struct symbol* nctemp1391= tp;
nctempchar1* nctemp1393=SymGetype(nctemp1391);
nctempchar1* nctemp1389= nctemp1393;
struct nctempchar1 *nctemp1396;
static struct nctempchar1 nctemp1397 = {{ 10}, (char*)"rconstant\0"};
nctemp1396=&nctemp1397;
nctempchar1* nctemp1394= nctemp1396;
int nctemp1398=LibeStrcmp(nctemp1389,nctemp1394);
int nctemp1386 = (nctemp1398 ==1);
if(nctemp1386)
{
struct tree* nctemp1401= p;
struct symbol* nctemp1405= tp;
nctempchar1* nctemp1407=SymGetype(nctemp1405);
nctempchar1* nctemp1403= nctemp1407;
int nctemp1408=PtreeSetname(nctemp1401,nctemp1403);
struct tree* nctemp1410= p;
struct symbol* nctemp1414= tp;
nctempchar1* nctemp1416=SymGetdescr(nctemp1414);
nctempchar1* nctemp1412= nctemp1416;
int nctemp1417=PtreeSetdef(nctemp1410,nctemp1412);
struct tree* nctemp1419= p;
struct nctempchar1 *nctemp1423;
static struct nctempchar1 nctemp1424 = {{ 6}, (char*)"float\0"};
nctemp1423=&nctemp1424;
nctempchar1* nctemp1421= nctemp1423;
int nctemp1425=PtreeSetype(nctemp1419,nctemp1421);
return 1;
}
else{
struct symbol* nctemp1432= tp;
nctempchar1* nctemp1434=SymGetype(nctemp1432);
nctempchar1* nctemp1430= nctemp1434;
struct nctempchar1 *nctemp1437;
static struct nctempchar1 nctemp1438 = {{ 10}, (char*)"sconstant\0"};
nctemp1437=&nctemp1438;
nctempchar1* nctemp1435= nctemp1437;
int nctemp1439=LibeStrcmp(nctemp1430,nctemp1435);
int nctemp1427 = (nctemp1439 ==1);
if(nctemp1427)
{
struct tree* nctemp1442= p;
struct symbol* nctemp1446= tp;
nctempchar1* nctemp1448=SymGetype(nctemp1446);
nctempchar1* nctemp1444= nctemp1448;
int nctemp1449=PtreeSetname(nctemp1442,nctemp1444);
struct tree* nctemp1451= p;
struct symbol* nctemp1455= tp;
nctempchar1* nctemp1457=SymGetdescr(nctemp1455);
nctempchar1* nctemp1453= nctemp1457;
int nctemp1458=PtreeSetdef(nctemp1451,nctemp1453);
struct tree* nctemp1460= p;
struct nctempchar1 *nctemp1464;
static struct nctempchar1 nctemp1465 = {{ 5}, (char*)"char\0"};
nctemp1464=&nctemp1465;
nctempchar1* nctemp1462= nctemp1464;
int nctemp1466=PtreeSetype(nctemp1460,nctemp1462);
struct tree* nctemp1468= p;
struct nctempchar1 *nctemp1472;
static struct nctempchar1 nctemp1473 = {{ 6}, (char*)"array\0"};
nctemp1472=&nctemp1473;
nctempchar1* nctemp1470= nctemp1472;
int nctemp1474=PtreeSetarray(nctemp1468,nctemp1470);
struct tree* nctemp1476= p;
struct nctempchar1 *nctemp1480;
static struct nctempchar1 nctemp1481 = {{ 5}, (char*)"aref\0"};
nctemp1480=&nctemp1481;
nctempchar1* nctemp1478= nctemp1480;
int nctemp1482=PtreeSetref(nctemp1476,nctemp1478);
struct tree* nctemp1484= p;
int nctemp1486= 1;
int nctemp1488=PtreeSetrank(nctemp1484,nctemp1486);
return 1;
}
}
}
struct symbol* nctemp1493= tp;
nctempchar1* nctemp1495=SymGetstruct(nctemp1493);
nctempchar1* nctemp1491= nctemp1495;
struct nctempchar1 *nctemp1498;
static struct nctempchar1 nctemp1499 = {{ 10}, (char*)"structdef\0"};
nctemp1498=&nctemp1499;
nctempchar1* nctemp1496= nctemp1498;
int nctemp1500=LibeStrcmp(nctemp1491,nctemp1496);
if(nctemp1500)
{
struct tree* nctemp1502= p;
struct nctempchar1 *nctemp1506;
static struct nctempchar1 nctemp1507 = {{ 43}, (char*)"Struct names can not be used as a variable\0"};
nctemp1506=&nctemp1507;
nctempchar1* nctemp1504= nctemp1506;
struct tree* nctemp1510= p;
nctempchar1* nctemp1512=PtreeGetdef(nctemp1510);
nctempchar1* nctemp1508= nctemp1512;
int nctemp1513=SemSerror(nctemp1502,nctemp1504,nctemp1508);
}
struct tree* nctemp1515= p;
struct symbol* nctemp1519= tp;
nctempchar1* nctemp1521=SymGetype(nctemp1519);
nctempchar1* nctemp1517= nctemp1521;
int nctemp1522=PtreeSetype(nctemp1515,nctemp1517);
struct tree* nctemp1524= p;
struct symbol* nctemp1528= tp;
nctempchar1* nctemp1530=SymGetarray(nctemp1528);
nctempchar1* nctemp1526= nctemp1530;
int nctemp1531=PtreeSetarray(nctemp1524,nctemp1526);
struct tree* nctemp1533= p;
struct symbol* nctemp1537= tp;
int nctemp1539=SymGetrank(nctemp1537);
int nctemp1535= nctemp1539;
int nctemp1540=PtreeSetrank(nctemp1533,nctemp1535);
struct tree* nctemp1542= p;
struct symbol* nctemp1546= tp;
nctempchar1* nctemp1548=SymGetstruct(nctemp1546);
nctempchar1* nctemp1544= nctemp1548;
int nctemp1549=PtreeSetstruct(nctemp1542,nctemp1544);
struct tree* nctemp1551= p;
struct symbol* nctemp1555= tp;
nctempchar1* nctemp1557=SymGetlval(nctemp1555);
nctempchar1* nctemp1553= nctemp1557;
int nctemp1558=PtreeSetlval(nctemp1551,nctemp1553);
struct tree* nctemp1563= p;
struct tree* nctemp1565=PtreeMvchild(nctemp1563);
np =nctemp1565;
int nctemp1566 = (np !=0);
if(nctemp1566)
{
struct tree* nctemp1573= np;
nctempchar1* nctemp1575=PtreeGetname(nctemp1573);
nctempchar1* nctemp1571= nctemp1575;
struct nctempchar1 *nctemp1578;
static struct nctempchar1 nctemp1579 = {{ 9}, (char*)"exprlist\0"};
nctemp1578=&nctemp1579;
nctempchar1* nctemp1576= nctemp1578;
int nctemp1580=LibeStrcmp(nctemp1571,nctemp1576);
if(nctemp1580)
{
struct tree* nctemp1582= p;
struct symbol* nctemp1584= tp;
int nctemp1586=SemArray(nctemp1582,nctemp1584);
struct tree* nctemp1590= np;
struct tree* nctemp1592=PtreeMvsister(nctemp1590);
int nctemp1587 = (nctemp1592 !=0);
if(nctemp1587)
{
struct tree* nctemp1595= p;
struct symbol* nctemp1597= tp;
int nctemp1599=SemStructure(nctemp1595,nctemp1597);
}
else{
struct tree* nctemp1603= p;
nctempchar1* nctemp1605=PtreeGetstruct(nctemp1603);
nctempchar1* nctemp1601= nctemp1605;
struct nctempchar1 *nctemp1608;
static struct nctempchar1 nctemp1609 = {{ 7}, (char*)"struct\0"};
nctemp1608=&nctemp1609;
nctempchar1* nctemp1606= nctemp1608;
int nctemp1610=LibeStrcmp(nctemp1601,nctemp1606);
if(nctemp1610)
{
struct tree* nctemp1612= p;
struct nctempchar1 *nctemp1616;
static struct nctempchar1 nctemp1617 = {{ 5}, (char*)"sref\0"};
nctemp1616=&nctemp1617;
nctempchar1* nctemp1614= nctemp1616;
int nctemp1618=PtreeSetref(nctemp1612,nctemp1614);
}
}
}
else{
struct tree* nctemp1622= np;
nctempchar1* nctemp1624=PtreeGetname(nctemp1622);
nctempchar1* nctemp1620= nctemp1624;
struct nctempchar1 *nctemp1627;
static struct nctempchar1 nctemp1628 = {{ 9}, (char*)"selector\0"};
nctemp1627=&nctemp1628;
nctempchar1* nctemp1625= nctemp1627;
int nctemp1629=LibeStrcmp(nctemp1620,nctemp1625);
if(nctemp1629)
{
struct tree* nctemp1631= p;
struct symbol* nctemp1633= tp;
int nctemp1635=SemStructure(nctemp1631,nctemp1633);
}
}
}
else{
struct tree* nctemp1639= p;
nctempchar1* nctemp1641=PtreeGetarray(nctemp1639);
nctempchar1* nctemp1637= nctemp1641;
struct nctempchar1 *nctemp1644;
static struct nctempchar1 nctemp1645 = {{ 6}, (char*)"array\0"};
nctemp1644=&nctemp1645;
nctempchar1* nctemp1642= nctemp1644;
int nctemp1646=LibeStrcmp(nctemp1637,nctemp1642);
if(nctemp1646)
{
struct tree* nctemp1648= p;
struct nctempchar1 *nctemp1652;
static struct nctempchar1 nctemp1653 = {{ 5}, (char*)"aref\0"};
nctemp1652=&nctemp1653;
nctempchar1* nctemp1650= nctemp1652;
int nctemp1654=PtreeSetref(nctemp1648,nctemp1650);
}
else{
struct tree* nctemp1658= p;
nctempchar1* nctemp1660=PtreeGetstruct(nctemp1658);
nctempchar1* nctemp1656= nctemp1660;
struct nctempchar1 *nctemp1663;
static struct nctempchar1 nctemp1664 = {{ 7}, (char*)"struct\0"};
nctemp1663=&nctemp1664;
nctempchar1* nctemp1661= nctemp1663;
int nctemp1665=LibeStrcmp(nctemp1656,nctemp1661);
if(nctemp1665)
{
struct tree* nctemp1667= p;
struct nctempchar1 *nctemp1671;
static struct nctempchar1 nctemp1672 = {{ 5}, (char*)"sref\0"};
nctemp1671=&nctemp1672;
nctempchar1* nctemp1669= nctemp1671;
int nctemp1673=PtreeSetref(nctemp1667,nctemp1669);
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
struct tree* nctemp1678= p;
nctempchar1* nctemp1680=PtreeGetname(nctemp1678);
nctempchar1* nctemp1676= nctemp1680;
struct nctempchar1 *nctemp1683;
static struct nctempchar1 nctemp1684 = {{ 6}, (char*)"fcall\0"};
nctemp1683=&nctemp1684;
nctempchar1* nctemp1681= nctemp1683;
int nctemp1685=LibeStrcmp(nctemp1676,nctemp1681);
if(nctemp1685)
{
struct tree* nctemp1695= p;
nctempchar1* nctemp1697=PtreeGetdef(nctemp1695);
nctempchar1* nctemp1693= nctemp1697;
struct symbol* nctemp1700=SymGetetp();
struct symbol* nctemp1698= nctemp1700;
struct symbol* nctemp1701=SymLookup(nctemp1693,nctemp1698);
tp =nctemp1701;
int nctemp1686 = (tp ==0);
if(nctemp1686)
{
struct tree* nctemp1704= p;
struct nctempchar1 *nctemp1708;
static struct nctempchar1 nctemp1709 = {{ 20}, (char*)"Undeclared function\0"};
nctemp1708=&nctemp1709;
nctempchar1* nctemp1706= nctemp1708;
struct tree* nctemp1712= p;
nctempchar1* nctemp1714=PtreeGetdef(nctemp1712);
nctempchar1* nctemp1710= nctemp1714;
int nctemp1715=SemSerror(nctemp1704,nctemp1706,nctemp1710);
return 0;
}
struct symbol* nctemp1722= tp;
nctempchar1* nctemp1724=SymGetfunc(nctemp1722);
nctempchar1* nctemp1720= nctemp1724;
struct nctempchar1 *nctemp1727;
static struct nctempchar1 nctemp1728 = {{ 5}, (char*)"fdef\0"};
nctemp1727=&nctemp1728;
nctempchar1* nctemp1725= nctemp1727;
int nctemp1729=LibeStrcmp(nctemp1720,nctemp1725);
int nctemp1717 = (nctemp1729 ==0);
if(nctemp1717)
{
struct tree* nctemp1732= p;
struct nctempchar1 *nctemp1736;
static struct nctempchar1 nctemp1737 = {{ 15}, (char*)"Not a function\0"};
nctemp1736=&nctemp1737;
nctempchar1* nctemp1734= nctemp1736;
struct tree* nctemp1740= p;
nctempchar1* nctemp1742=PtreeGetdef(nctemp1740);
nctempchar1* nctemp1738= nctemp1742;
int nctemp1743=SemSerror(nctemp1732,nctemp1734,nctemp1738);
return 0;
}
struct tree* nctemp1746= p;
struct symbol* nctemp1750= tp;
nctempchar1* nctemp1752=SymGetype(nctemp1750);
nctempchar1* nctemp1748= nctemp1752;
int nctemp1753=PtreeSetype(nctemp1746,nctemp1748);
struct tree* nctemp1755= p;
struct symbol* nctemp1759= tp;
nctempchar1* nctemp1761=SymGetstruct(nctemp1759);
nctempchar1* nctemp1757= nctemp1761;
int nctemp1762=PtreeSetstruct(nctemp1755,nctemp1757);
struct tree* nctemp1764= p;
struct symbol* nctemp1768= tp;
nctempchar1* nctemp1770=SymGetarray(nctemp1768);
nctempchar1* nctemp1766= nctemp1770;
int nctemp1771=PtreeSetarray(nctemp1764,nctemp1766);
struct tree* nctemp1773= p;
struct symbol* nctemp1777= tp;
int nctemp1779=SymGetrank(nctemp1777);
int nctemp1775= nctemp1779;
int nctemp1780=PtreeSetrank(nctemp1773,nctemp1775);
struct tree* nctemp1784= p;
nctempchar1* nctemp1786=PtreeGetarray(nctemp1784);
nctempchar1* nctemp1782= nctemp1786;
struct nctempchar1 *nctemp1789;
static struct nctempchar1 nctemp1790 = {{ 6}, (char*)"array\0"};
nctemp1789=&nctemp1790;
nctempchar1* nctemp1787= nctemp1789;
int nctemp1791=LibeStrcmp(nctemp1782,nctemp1787);
if(nctemp1791)
{
struct tree* nctemp1793= p;
struct nctempchar1 *nctemp1797;
static struct nctempchar1 nctemp1798 = {{ 5}, (char*)"aref\0"};
nctemp1797=&nctemp1798;
nctempchar1* nctemp1795= nctemp1797;
int nctemp1799=PtreeSetref(nctemp1793,nctemp1795);
}
else{
struct tree* nctemp1803= p;
nctempchar1* nctemp1805=PtreeGetstruct(nctemp1803);
nctempchar1* nctemp1801= nctemp1805;
struct nctempchar1 *nctemp1808;
static struct nctempchar1 nctemp1809 = {{ 7}, (char*)"struct\0"};
nctemp1808=&nctemp1809;
nctempchar1* nctemp1806= nctemp1808;
int nctemp1810=LibeStrcmp(nctemp1801,nctemp1806);
if(nctemp1810)
{
struct tree* nctemp1812= p;
struct nctempchar1 *nctemp1816;
static struct nctempchar1 nctemp1817 = {{ 5}, (char*)"sref\0"};
nctemp1816=&nctemp1817;
nctempchar1* nctemp1814= nctemp1816;
int nctemp1818=PtreeSetref(nctemp1812,nctemp1814);
}
}
struct symbol* nctemp1823= tp;
struct symbol* nctemp1825=SymGetable(nctemp1823);
tp =nctemp1825;
struct nctempchar1 *nctemp1832;
static struct nctempchar1 nctemp1833 = {{ 9}, (char*)"#arglist\0"};
nctemp1832=&nctemp1833;
nctempchar1* nctemp1830= nctemp1832;
struct symbol* nctemp1834= tp;
struct symbol* nctemp1836=SymLookup(nctemp1830,nctemp1834);
tp =nctemp1836;
int nctemp1837 = (tp !=0);
if(nctemp1837)
{
struct symbol* nctemp1845= tp;
struct symbol* nctemp1847=SymGetable(nctemp1845);
tp =nctemp1847;
}
struct tree* nctemp1855= p;
struct tree* nctemp1857=PtreeMvchild(nctemp1855);
np =nctemp1857;
int nctemp1848 = (np ==0);
if(nctemp1848)
{
struct symbol* nctemp1866= tp;
struct symbol* nctemp1868=SymMvnext(nctemp1866);
tp =nctemp1868;
int nctemp1859 = (tp !=0);
if(nctemp1859)
{
struct tree* nctemp1871= p;
struct nctempchar1 *nctemp1875;
static struct nctempchar1 nctemp1876 = {{ 41}, (char*)"Function call does not match declaration\0"};
nctemp1875=&nctemp1876;
nctempchar1* nctemp1873= nctemp1875;
struct tree* nctemp1879= p;
nctempchar1* nctemp1881=PtreeGetdef(nctemp1879);
nctempchar1* nctemp1877= nctemp1881;
int nctemp1882=SemSerror(nctemp1871,nctemp1873,nctemp1877);
return 0;
}
return 1;
}
struct tree* nctemp1891= p;
struct tree* nctemp1893=PtreeMvchild(nctemp1891);
struct tree* nctemp1889= nctemp1893;
struct tree* nctemp1894=PtreeMvchild(nctemp1889);
np =nctemp1894;
int nctemp1895 = (np !=0);
int nctemp1899=nctemp1895;
while(nctemp1899)
{{
struct symbol* nctemp1904= tp;
struct symbol* nctemp1906=SymMvnext(nctemp1904);
tp =nctemp1906;
int nctemp1907 = (tp ==0);
if(nctemp1907)
{
struct tree* nctemp1912= p;
struct nctempchar1 *nctemp1916;
static struct nctempchar1 nctemp1917 = {{ 41}, (char*)"Function call does not match declaration\0"};
nctemp1916=&nctemp1917;
nctempchar1* nctemp1914= nctemp1916;
struct tree* nctemp1920= p;
nctempchar1* nctemp1922=PtreeGetdef(nctemp1920);
nctempchar1* nctemp1918= nctemp1922;
int nctemp1923=SemSerror(nctemp1912,nctemp1914,nctemp1918);
return 0;
}
struct symbol* nctemp1930= tp;
nctempchar1* nctemp1932=SymGetype(nctemp1930);
type=nctemp1932;
struct tree* nctemp1934= np;
struct tree* nctemp1936=SemExpr(nctemp1934);
nctempchar1* nctemp1940= type;
struct tree* nctemp1945= np;
nctempchar1* nctemp1947=PtreeGetype(nctemp1945);
nctempchar1* nctemp1943= nctemp1947;
int nctemp1948=LibeStrcmp(nctemp1940,nctemp1943);
int nctemp1937 = (nctemp1948 ==0);
if(nctemp1937)
{
struct tree* nctemp1951= p;
struct nctempchar1 *nctemp1955;
static struct nctempchar1 nctemp1956 = {{ 41}, (char*)"Function call does not match declaration\0"};
nctemp1955=&nctemp1956;
nctempchar1* nctemp1953= nctemp1955;
struct tree* nctemp1959= p;
nctempchar1* nctemp1961=PtreeGetdef(nctemp1959);
nctempchar1* nctemp1957= nctemp1961;
int nctemp1962=SemSerror(nctemp1951,nctemp1953,nctemp1957);
return 0;
}
struct symbol* nctemp1967= tp;
nctempchar1* nctemp1969=SymGetarray(nctemp1967);
nctempchar1* nctemp1965= nctemp1969;
struct nctempchar1 *nctemp1972;
static struct nctempchar1 nctemp1973 = {{ 6}, (char*)"array\0"};
nctemp1972=&nctemp1973;
nctempchar1* nctemp1970= nctemp1972;
int nctemp1974=LibeStrcmp(nctemp1965,nctemp1970);
if(nctemp1974)
{
struct tree* nctemp1980= np;
nctempchar1* nctemp1982=PtreeGetref(nctemp1980);
nctempchar1* nctemp1978= nctemp1982;
struct nctempchar1 *nctemp1985;
static struct nctempchar1 nctemp1986 = {{ 5}, (char*)"aref\0"};
nctemp1985=&nctemp1986;
nctempchar1* nctemp1983= nctemp1985;
int nctemp1987=LibeStrcmp(nctemp1978,nctemp1983);
int nctemp1975 = (nctemp1987 ==0);
if(nctemp1975)
{
struct tree* nctemp1990= p;
struct nctempchar1 *nctemp1994;
static struct nctempchar1 nctemp1995 = {{ 41}, (char*)"Function call does not match declaration\0"};
nctemp1994=&nctemp1995;
nctempchar1* nctemp1992= nctemp1994;
struct tree* nctemp1998= p;
nctempchar1* nctemp2000=PtreeGetdef(nctemp1998);
nctempchar1* nctemp1996= nctemp2000;
int nctemp2001=SemSerror(nctemp1990,nctemp1992,nctemp1996);
}
struct tree* nctemp2005= np;
int nctemp2007=PtreeGetrank(nctemp2005);
struct symbol* nctemp2009= tp;
int nctemp2011=SymGetrank(nctemp2009);
int nctemp2002 = (nctemp2007 !=nctemp2011);
if(nctemp2002)
{
struct tree* nctemp2013= p;
struct nctempchar1 *nctemp2017;
static struct nctempchar1 nctemp2018 = {{ 36}, (char*)"Illegal array rank in function call\0"};
nctemp2017=&nctemp2018;
nctempchar1* nctemp2015= nctemp2017;
struct tree* nctemp2021= p;
nctempchar1* nctemp2023=PtreeGetdef(nctemp2021);
nctempchar1* nctemp2019= nctemp2023;
int nctemp2024=SemSerror(nctemp2013,nctemp2015,nctemp2019);
}
}
struct tree* nctemp2029= np;
struct tree* nctemp2031=PtreeMvsister(nctemp2029);
np =nctemp2031;
}
int nctemp2032 = (np !=0);
nctemp1899=nctemp2032;}struct symbol* nctemp2039= tp;
struct symbol* nctemp2041=SymMvnext(nctemp2039);
int nctemp2036 = (nctemp2041 !=0);
if(nctemp2036)
{
struct tree* nctemp2044= p;
struct nctempchar1 *nctemp2048;
static struct nctempchar1 nctemp2049 = {{ 41}, (char*)"Function call does not match declaration\0"};
nctemp2048=&nctemp2049;
nctempchar1* nctemp2046= nctemp2048;
struct tree* nctemp2052= p;
nctempchar1* nctemp2054=PtreeGetdef(nctemp2052);
nctempchar1* nctemp2050= nctemp2054;
int nctemp2055=SemSerror(nctemp2044,nctemp2046,nctemp2050);
return 0;
}
}
return 1;
}
struct tree* SemExprlist (struct tree* p)
{
struct tree* nctemp2061= p;
nctempchar1* nctemp2063=PtreeGetname(nctemp2061);
nctempchar1* nctemp2059= nctemp2063;
struct nctempchar1 *nctemp2066;
static struct nctempchar1 nctemp2067 = {{ 9}, (char*)"exprlist\0"};
nctemp2066=&nctemp2067;
nctempchar1* nctemp2064= nctemp2066;
int nctemp2068=LibeStrcmp(nctemp2059,nctemp2064);
if(nctemp2068)
{
struct tree* nctemp2073= p;
struct tree* nctemp2075=PtreeMvchild(nctemp2073);
p =nctemp2075;
int nctemp2076 = (p !=0);
int nctemp2080=nctemp2076;
while(nctemp2080)
{{
struct tree* nctemp2082= p;
struct tree* nctemp2084=SemExpr(nctemp2082);
struct tree* nctemp2089= p;
struct tree* nctemp2091=PtreeMvsister(nctemp2089);
p =nctemp2091;
}
int nctemp2092 = (p !=0);
nctemp2080=nctemp2092;}}
return p;
}
int SemCopytype (struct tree* p,struct tree* np)
{
struct tree* nctemp2098= np;
struct tree* nctemp2102= p;
nctempchar1* nctemp2104=PtreeGetype(nctemp2102);
nctempchar1* nctemp2100= nctemp2104;
int nctemp2105=PtreeSetype(nctemp2098,nctemp2100);
struct tree* nctemp2107= np;
struct tree* nctemp2111= p;
nctempchar1* nctemp2113=PtreeGetstruct(nctemp2111);
nctempchar1* nctemp2109= nctemp2113;
int nctemp2114=PtreeSetstruct(nctemp2107,nctemp2109);
struct tree* nctemp2116= np;
struct tree* nctemp2120= p;
nctempchar1* nctemp2122=PtreeGetarray(nctemp2120);
nctempchar1* nctemp2118= nctemp2122;
int nctemp2123=PtreeSetarray(nctemp2116,nctemp2118);
struct tree* nctemp2125= np;
struct tree* nctemp2129= p;
nctempchar1* nctemp2131=PtreeGetref(nctemp2129);
nctempchar1* nctemp2127= nctemp2131;
int nctemp2132=PtreeSetref(nctemp2125,nctemp2127);
struct tree* nctemp2134= np;
struct tree* nctemp2138= p;
nctempchar1* nctemp2140=PtreeGetlval(nctemp2138);
nctempchar1* nctemp2136= nctemp2140;
int nctemp2141=PtreeSetlval(nctemp2134,nctemp2136);
struct tree* nctemp2143= np;
struct tree* nctemp2147= p;
int nctemp2149=PtreeGetrank(nctemp2147);
int nctemp2145= nctemp2149;
int nctemp2150=PtreeSetrank(nctemp2143,nctemp2145);
return 1;
}
int SemCopytype2 (struct tree* p,struct tree* np)
{
struct tree* nctemp2153= np;
struct tree* nctemp2157= p;
nctempchar1* nctemp2159=PtreeGetype(nctemp2157);
nctempchar1* nctemp2155= nctemp2159;
int nctemp2160=PtreeSetype(nctemp2153,nctemp2155);
struct tree* nctemp2169= p;
nctempchar1* nctemp2171=PtreeGetref(nctemp2169);
nctempchar1* nctemp2167= nctemp2171;
struct nctempchar1 *nctemp2174;
static struct nctempchar1 nctemp2175 = {{ 5}, (char*)"sref\0"};
nctemp2174=&nctemp2175;
nctempchar1* nctemp2172= nctemp2174;
int nctemp2176=LibeStrcmp(nctemp2167,nctemp2172);
int nctemp2164 = (nctemp2176 ==1);
struct tree* nctemp2184= p;
nctempchar1* nctemp2186=PtreeGetref(nctemp2184);
nctempchar1* nctemp2182= nctemp2186;
struct nctempchar1 *nctemp2189;
static struct nctempchar1 nctemp2190 = {{ 5}, (char*)"aref\0"};
nctemp2189=&nctemp2190;
nctempchar1* nctemp2187= nctemp2189;
int nctemp2191=LibeStrcmp(nctemp2182,nctemp2187);
int nctemp2179 = (nctemp2191 ==1);
int nctemp2161 = (nctemp2164 || nctemp2179);
if(nctemp2161)
{
struct tree* nctemp2194= np;
struct tree* nctemp2198= p;
nctempchar1* nctemp2200=PtreeGetstruct(nctemp2198);
nctempchar1* nctemp2196= nctemp2200;
int nctemp2201=PtreeSetstruct(nctemp2194,nctemp2196);
struct tree* nctemp2203= np;
struct tree* nctemp2207= p;
nctempchar1* nctemp2209=PtreeGetarray(nctemp2207);
nctempchar1* nctemp2205= nctemp2209;
int nctemp2210=PtreeSetarray(nctemp2203,nctemp2205);
struct tree* nctemp2212= np;
struct tree* nctemp2216= p;
nctempchar1* nctemp2218=PtreeGetref(nctemp2216);
nctempchar1* nctemp2214= nctemp2218;
int nctemp2219=PtreeSetref(nctemp2212,nctemp2214);
struct tree* nctemp2221= np;
struct tree* nctemp2225= p;
nctempchar1* nctemp2227=PtreeGetlval(nctemp2225);
nctempchar1* nctemp2223= nctemp2227;
int nctemp2228=PtreeSetlval(nctemp2221,nctemp2223);
struct tree* nctemp2230= np;
struct tree* nctemp2234= p;
int nctemp2236=PtreeGetrank(nctemp2234);
int nctemp2232= nctemp2236;
int nctemp2237=PtreeSetrank(nctemp2230,nctemp2232);
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
struct nctempchar1 *nctemp2244;
static struct nctempchar1 nctemp2245 = {{ 5}, (char*)"void\0"};
nctemp2244=&nctemp2245;
resultref=nctemp2244;
struct nctempchar1 *nctemp2251;
static struct nctempchar1 nctemp2252 = {{ 5}, (char*)"void\0"};
nctemp2251=&nctemp2252;
expref=nctemp2251;
struct tree* nctemp2256= p;
nctempchar1* nctemp2258=PtreeGetname(nctemp2256);
nctempchar1* nctemp2254= nctemp2258;
struct nctempchar1 *nctemp2261;
static struct nctempchar1 nctemp2262 = {{ 5}, (char*)"cast\0"};
nctemp2261=&nctemp2262;
nctempchar1* nctemp2259= nctemp2261;
int nctemp2263=LibeStrcmp(nctemp2254,nctemp2259);
if(nctemp2263)
{
struct tree* nctemp2268= p;
struct tree* nctemp2270=PtreeMvchild(nctemp2268);
np =nctemp2270;
struct tree* nctemp2276= np;
nctempchar1* nctemp2278=PtreeGetdef(nctemp2276);
resultype=nctemp2278;
struct tree* nctemp2280= np;
nctempchar1* nctemp2282= resultype;
int nctemp2285=PtreeSetype(nctemp2280,nctemp2282);
resultrank = 0;
struct tree* nctemp2289= np;
nctempchar1* nctemp2291=PtreeGetarray(nctemp2289);
nctempchar1* nctemp2287= nctemp2291;
struct nctempchar1 *nctemp2294;
static struct nctempchar1 nctemp2295 = {{ 6}, (char*)"array\0"};
nctemp2294=&nctemp2295;
nctempchar1* nctemp2292= nctemp2294;
int nctemp2296=LibeStrcmp(nctemp2287,nctemp2292);
if(nctemp2296)
{
struct tree* nctemp2301= np;
struct tree* nctemp2303=PtreeMvchild(nctemp2301);
sp =nctemp2303;
struct tree* nctemp2308= sp;
struct tree* nctemp2310=PtreeMvchild(nctemp2308);
sp =nctemp2310;
struct tree* nctemp2315= sp;
struct tree* nctemp2317=PtreeMvchild(nctemp2315);
sp =nctemp2317;
struct tree* nctemp2319= sp;
struct tree* nctemp2321=SemExprlist(nctemp2319);
struct tree* nctemp2326= sp;
struct tree* nctemp2328=PtreeMvchild(nctemp2326);
sp =nctemp2328;
resultrank = 1;
struct tree* nctemp2336= sp;
struct tree* nctemp2338=PtreeMvsister(nctemp2336);
sp =nctemp2338;
int nctemp2329 = (sp !=0);
int nctemp2340=nctemp2329;
while(nctemp2340)
{{
resultrank = (resultrank + 1);
}
struct tree* nctemp2348= sp;
struct tree* nctemp2350=PtreeMvsister(nctemp2348);
sp =nctemp2350;
int nctemp2341 = (sp !=0);
nctemp2340=nctemp2341;}struct tree* nctemp2353= np;
int nctemp2355= resultrank;
int nctemp2357=PtreeSetrank(nctemp2353,nctemp2355);
struct tree* nctemp2359= p;
int nctemp2361= resultrank;
int nctemp2363=PtreeSetrank(nctemp2359,nctemp2361);
struct tree* nctemp2365= np;
struct nctempchar1 *nctemp2369;
static struct nctempchar1 nctemp2370 = {{ 5}, (char*)"aref\0"};
nctemp2369=&nctemp2370;
nctempchar1* nctemp2367= nctemp2369;
int nctemp2371=PtreeSetref(nctemp2365,nctemp2367);
struct nctempchar1 *nctemp2379;
static struct nctempchar1 nctemp2380 = {{ 5}, (char*)"aref\0"};
nctemp2379=&nctemp2380;
nctempchar1* nctemp2377= nctemp2379;
nctempchar1* nctemp2381=LibeStrsave(nctemp2377);
resultref=nctemp2381;
}
else{
struct tree* nctemp2385= np;
nctempchar1* nctemp2387=PtreeGetstruct(nctemp2385);
nctempchar1* nctemp2383= nctemp2387;
struct nctempchar1 *nctemp2390;
static struct nctempchar1 nctemp2391 = {{ 7}, (char*)"struct\0"};
nctemp2390=&nctemp2391;
nctempchar1* nctemp2388= nctemp2390;
int nctemp2392=LibeStrcmp(nctemp2383,nctemp2388);
if(nctemp2392)
{
struct tree* nctemp2394= np;
struct nctempchar1 *nctemp2398;
static struct nctempchar1 nctemp2399 = {{ 5}, (char*)"sref\0"};
nctemp2398=&nctemp2399;
nctempchar1* nctemp2396= nctemp2398;
int nctemp2400=PtreeSetref(nctemp2394,nctemp2396);
struct nctempchar1 *nctemp2408;
static struct nctempchar1 nctemp2409 = {{ 5}, (char*)"sref\0"};
nctemp2408=&nctemp2409;
nctempchar1* nctemp2406= nctemp2408;
nctempchar1* nctemp2410=LibeStrsave(nctemp2406);
resultref=nctemp2410;
}
else{
struct nctempchar1 *nctemp2418;
static struct nctempchar1 nctemp2419 = {{ 5}, (char*)"void\0"};
nctemp2418=&nctemp2419;
nctempchar1* nctemp2416= nctemp2418;
nctempchar1* nctemp2420=LibeStrsave(nctemp2416);
resultref=nctemp2420;
}
}
struct tree* nctemp2422= np;
struct tree* nctemp2424= p;
int nctemp2426=SemCopytype(nctemp2422,nctemp2424);
struct tree* nctemp2431= np;
struct tree* nctemp2433=PtreeMvsister(nctemp2431);
np =nctemp2433;
struct tree* nctemp2435= np;
struct tree* nctemp2437=SemExpr(nctemp2435);
struct tree* nctemp2443= np;
nctempchar1* nctemp2445=PtreeGetype(nctemp2443);
exptype=nctemp2445;
struct tree* nctemp2451= np;
nctempchar1* nctemp2453=PtreeGetref(nctemp2451);
expref=nctemp2453;
nctempchar1* nctemp2457= resultref;
nctempchar1* nctemp2460= expref;
int nctemp2463=LibeStrcmp(nctemp2457,nctemp2460);
int nctemp2454 = (nctemp2463 ==0);
if(nctemp2454)
{
struct tree* nctemp2466= p;
struct nctempchar1 *nctemp2470;
static struct nctempchar1 nctemp2471 = {{ 19}, (char*)"Illegal conversion\0"};
nctemp2470=&nctemp2471;
nctempchar1* nctemp2468= nctemp2470;
struct nctempchar1 *nctemp2474;
static struct nctempchar1 nctemp2475 = {{ 2}, (char*)" \0"};
nctemp2474=&nctemp2475;
nctempchar1* nctemp2472= nctemp2474;
int nctemp2476=SemSerror(nctemp2466,nctemp2468,nctemp2472);
return 0;
}
nctempchar1* nctemp2484= resultref;
struct nctempchar1 *nctemp2489;
static struct nctempchar1 nctemp2490 = {{ 5}, (char*)"aref\0"};
nctemp2489=&nctemp2490;
nctempchar1* nctemp2487= nctemp2489;
int nctemp2491=LibeStrcmp(nctemp2484,nctemp2487);
int nctemp2481 = (nctemp2491 ==0);
nctempchar1* nctemp2497= resultref;
struct nctempchar1 *nctemp2502;
static struct nctempchar1 nctemp2503 = {{ 5}, (char*)"sref\0"};
nctemp2502=&nctemp2503;
nctempchar1* nctemp2500= nctemp2502;
int nctemp2504=LibeStrcmp(nctemp2497,nctemp2500);
int nctemp2494 = (nctemp2504 ==0);
int nctemp2478 = (nctemp2481 || nctemp2494);
if(nctemp2478)
{
nctempchar1* nctemp2507= resultype;
struct nctempchar1 *nctemp2512;
static struct nctempchar1 nctemp2513 = {{ 8}, (char*)"complex\0"};
nctemp2512=&nctemp2513;
nctempchar1* nctemp2510= nctemp2512;
int nctemp2514=LibeStrcmp(nctemp2507,nctemp2510);
if(nctemp2514)
{
struct tree* nctemp2516= p;
struct nctempchar1 *nctemp2520;
static struct nctempchar1 nctemp2521 = {{ 19}, (char*)"Illegal conversion\0"};
nctemp2520=&nctemp2521;
nctempchar1* nctemp2518= nctemp2520;
struct nctempchar1 *nctemp2524;
static struct nctempchar1 nctemp2525 = {{ 2}, (char*)" \0"};
nctemp2524=&nctemp2525;
nctempchar1* nctemp2522= nctemp2524;
int nctemp2526=SemSerror(nctemp2516,nctemp2518,nctemp2522);
}
return 0;
nctempchar1* nctemp2529= resultype;
struct nctempchar1 *nctemp2534;
static struct nctempchar1 nctemp2535 = {{ 4}, (char*)"int\0"};
nctemp2534=&nctemp2535;
nctempchar1* nctemp2532= nctemp2534;
int nctemp2536=LibeStrcmp(nctemp2529,nctemp2532);
if(nctemp2536)
{
nctempchar1* nctemp2540= exptype;
struct nctempchar1 *nctemp2545;
static struct nctempchar1 nctemp2546 = {{ 5}, (char*)"char\0"};
nctemp2545=&nctemp2546;
nctempchar1* nctemp2543= nctemp2545;
int nctemp2547=LibeStrcmp(nctemp2540,nctemp2543);
int nctemp2537 = (nctemp2547 ==0);
if(nctemp2537)
{
nctempchar1* nctemp2552= exptype;
struct nctempchar1 *nctemp2557;
static struct nctempchar1 nctemp2558 = {{ 6}, (char*)"float\0"};
nctemp2557=&nctemp2558;
nctempchar1* nctemp2555= nctemp2557;
int nctemp2559=LibeStrcmp(nctemp2552,nctemp2555);
int nctemp2549 = (nctemp2559 ==0);
if(nctemp2549)
{
struct tree* nctemp2562= p;
struct nctempchar1 *nctemp2566;
static struct nctempchar1 nctemp2567 = {{ 19}, (char*)"Illegal conversion\0"};
nctemp2566=&nctemp2567;
nctempchar1* nctemp2564= nctemp2566;
struct nctempchar1 *nctemp2570;
static struct nctempchar1 nctemp2571 = {{ 2}, (char*)" \0"};
nctemp2570=&nctemp2571;
nctempchar1* nctemp2568= nctemp2570;
int nctemp2572=SemSerror(nctemp2562,nctemp2564,nctemp2568);
}
}
return 0;
}
else{
nctempchar1* nctemp2575= resultype;
struct nctempchar1 *nctemp2580;
static struct nctempchar1 nctemp2581 = {{ 5}, (char*)"char\0"};
nctemp2580=&nctemp2581;
nctempchar1* nctemp2578= nctemp2580;
int nctemp2582=LibeStrcmp(nctemp2575,nctemp2578);
if(nctemp2582)
{
nctempchar1* nctemp2586= exptype;
struct nctempchar1 *nctemp2591;
static struct nctempchar1 nctemp2592 = {{ 4}, (char*)"int\0"};
nctemp2591=&nctemp2592;
nctempchar1* nctemp2589= nctemp2591;
int nctemp2593=LibeStrcmp(nctemp2586,nctemp2589);
int nctemp2583 = (nctemp2593 ==0);
if(nctemp2583)
{
struct tree* nctemp2596= p;
struct nctempchar1 *nctemp2600;
static struct nctempchar1 nctemp2601 = {{ 19}, (char*)"Illegal conversion\0"};
nctemp2600=&nctemp2601;
nctempchar1* nctemp2598= nctemp2600;
struct nctempchar1 *nctemp2604;
static struct nctempchar1 nctemp2605 = {{ 2}, (char*)" \0"};
nctemp2604=&nctemp2605;
nctempchar1* nctemp2602= nctemp2604;
int nctemp2606=SemSerror(nctemp2596,nctemp2598,nctemp2602);
}
return 0;
}
else{
nctempchar1* nctemp2609= resultype;
struct nctempchar1 *nctemp2614;
static struct nctempchar1 nctemp2615 = {{ 6}, (char*)"float\0"};
nctemp2614=&nctemp2615;
nctempchar1* nctemp2612= nctemp2614;
int nctemp2616=LibeStrcmp(nctemp2609,nctemp2612);
if(nctemp2616)
{
nctempchar1* nctemp2620= exptype;
struct nctempchar1 *nctemp2625;
static struct nctempchar1 nctemp2626 = {{ 4}, (char*)"int\0"};
nctemp2625=&nctemp2626;
nctempchar1* nctemp2623= nctemp2625;
int nctemp2627=LibeStrcmp(nctemp2620,nctemp2623);
int nctemp2617 = (nctemp2627 ==0);
if(nctemp2617)
{
struct tree* nctemp2630= np;
struct nctempchar1 *nctemp2634;
static struct nctempchar1 nctemp2635 = {{ 19}, (char*)"Illegal conversion\0"};
nctemp2634=&nctemp2635;
nctempchar1* nctemp2632= nctemp2634;
struct nctempchar1 *nctemp2638;
static struct nctempchar1 nctemp2639 = {{ 2}, (char*)" \0"};
nctemp2638=&nctemp2639;
nctempchar1* nctemp2636= nctemp2638;
int nctemp2640=SemSerror(nctemp2630,nctemp2632,nctemp2636);
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
struct tree* nctemp2646= p;
nctempchar1* nctemp2648=PtreeGetname(nctemp2646);
nctempchar1* nctemp2644= nctemp2648;
struct nctempchar1 *nctemp2651;
static struct nctempchar1 nctemp2652 = {{ 4}, (char*)"new\0"};
nctemp2651=&nctemp2652;
nctempchar1* nctemp2649= nctemp2651;
int nctemp2653=LibeStrcmp(nctemp2644,nctemp2649);
if(nctemp2653)
{
struct tree* nctemp2658= p;
struct tree* nctemp2660=PtreeMvchild(nctemp2658);
np =nctemp2660;
struct tree* nctemp2662= np;
nctempchar1* nctemp2664=PtreeGetdef(nctemp2662);
struct tree* nctemp2666= np;
struct tree* nctemp2670= np;
nctempchar1* nctemp2672=PtreeGetdef(nctemp2670);
nctempchar1* nctemp2668= nctemp2672;
int nctemp2673=PtreeSetype(nctemp2666,nctemp2668);
struct tree* nctemp2675= np;
struct tree* nctemp2677= p;
int nctemp2679=SemCopytype(nctemp2675,nctemp2677);
struct tree* nctemp2685= np;
nctempchar1* nctemp2687=PtreeGetarray(nctemp2685);
nctempchar1* nctemp2683= nctemp2687;
struct nctempchar1 *nctemp2690;
static struct nctempchar1 nctemp2691 = {{ 6}, (char*)"array\0"};
nctemp2690=&nctemp2691;
nctempchar1* nctemp2688= nctemp2690;
int nctemp2692=LibeStrcmp(nctemp2683,nctemp2688);
int nctemp2680 = (nctemp2692 ==0);
if(nctemp2680)
{
struct tree* nctemp2699= np;
nctempchar1* nctemp2701=PtreeGetstruct(nctemp2699);
nctempchar1* nctemp2697= nctemp2701;
struct nctempchar1 *nctemp2704;
static struct nctempchar1 nctemp2705 = {{ 7}, (char*)"struct\0"};
nctemp2704=&nctemp2705;
nctempchar1* nctemp2702= nctemp2704;
int nctemp2706=LibeStrcmp(nctemp2697,nctemp2702);
int nctemp2694 = (nctemp2706 ==0);
if(nctemp2694)
{
struct tree* nctemp2709= np;
struct nctempchar1 *nctemp2713;
static struct nctempchar1 nctemp2714 = {{ 44}, (char*)"Argument limited to array or structure type\0"};
nctemp2713=&nctemp2714;
nctempchar1* nctemp2711= nctemp2713;
struct nctempchar1 *nctemp2717;
static struct nctempchar1 nctemp2718 = {{ 3}, (char*)"  \0"};
nctemp2717=&nctemp2718;
nctempchar1* nctemp2715= nctemp2717;
int nctemp2719=SemSerror(nctemp2709,nctemp2711,nctemp2715);
}
}
struct tree* nctemp2723= np;
nctempchar1* nctemp2725=PtreeGetarray(nctemp2723);
nctempchar1* nctemp2721= nctemp2725;
struct nctempchar1 *nctemp2728;
static struct nctempchar1 nctemp2729 = {{ 6}, (char*)"array\0"};
nctemp2728=&nctemp2729;
nctempchar1* nctemp2726= nctemp2728;
int nctemp2730=LibeStrcmp(nctemp2721,nctemp2726);
if(nctemp2730)
{
struct tree* nctemp2735= np;
struct tree* nctemp2737=PtreeMvchild(nctemp2735);
sp =nctemp2737;
struct tree* nctemp2742= sp;
struct tree* nctemp2744=PtreeMvchild(nctemp2742);
sp =nctemp2744;
struct tree* nctemp2749= sp;
struct tree* nctemp2751=PtreeMvchild(nctemp2749);
sp =nctemp2751;
struct tree* nctemp2756= sp;
struct tree* nctemp2758=PtreeMvchild(nctemp2756);
sp =nctemp2758;
rank = 1;
int nctemp2759 = (sp ==0);
if(nctemp2759)
{
struct tree* nctemp2764= np;
struct nctempchar1 *nctemp2768;
static struct nctempchar1 nctemp2769 = {{ 35}, (char*)"Missing array size in new operator\0"};
nctemp2768=&nctemp2769;
nctempchar1* nctemp2766= nctemp2768;
struct nctempchar1 *nctemp2772;
static struct nctempchar1 nctemp2773 = {{ 2}, (char*)" \0"};
nctemp2772=&nctemp2773;
nctempchar1* nctemp2770= nctemp2772;
int nctemp2774=SemSerror(nctemp2764,nctemp2766,nctemp2770);
}
struct tree* nctemp2776= sp;
struct tree* nctemp2778=SemExpr(nctemp2776);
struct tree* nctemp2786= sp;
struct tree* nctemp2788=PtreeMvsister(nctemp2786);
sp =nctemp2788;
int nctemp2779 = (sp !=0);
int nctemp2790=nctemp2779;
while(nctemp2790)
{{
struct tree* nctemp2792= sp;
struct tree* nctemp2794=SemExpr(nctemp2792);
rank = (rank + 1);
}
struct tree* nctemp2802= sp;
struct tree* nctemp2804=PtreeMvsister(nctemp2802);
sp =nctemp2804;
int nctemp2795 = (sp !=0);
nctemp2790=nctemp2795;}struct tree* nctemp2807= np;
int nctemp2809= rank;
int nctemp2811=PtreeSetrank(nctemp2807,nctemp2809);
struct tree* nctemp2813= p;
int nctemp2815= rank;
int nctemp2817=PtreeSetrank(nctemp2813,nctemp2815);
struct tree* nctemp2819= p;
struct nctempchar1 *nctemp2823;
static struct nctempchar1 nctemp2824 = {{ 5}, (char*)"aref\0"};
nctemp2823=&nctemp2824;
nctempchar1* nctemp2821= nctemp2823;
int nctemp2825=PtreeSetref(nctemp2819,nctemp2821);
}
else{
struct tree* nctemp2827= p;
struct nctempchar1 *nctemp2831;
static struct nctempchar1 nctemp2832 = {{ 5}, (char*)"sref\0"};
nctemp2831=&nctemp2832;
nctempchar1* nctemp2829= nctemp2831;
int nctemp2833=PtreeSetref(nctemp2827,nctemp2829);
}
}
return 1;
}
int SemDelete (struct tree* p)
{
struct tree* np;
struct tree* nctemp2838= p;
nctempchar1* nctemp2840=PtreeGetname(nctemp2838);
nctempchar1* nctemp2836= nctemp2840;
struct nctempchar1 *nctemp2843;
static struct nctempchar1 nctemp2844 = {{ 7}, (char*)"delete\0"};
nctemp2843=&nctemp2844;
nctempchar1* nctemp2841= nctemp2843;
int nctemp2845=LibeStrcmp(nctemp2836,nctemp2841);
if(nctemp2845)
{
struct tree* nctemp2850= p;
struct tree* nctemp2852=PtreeMvchild(nctemp2850);
np =nctemp2852;
struct tree* nctemp2854= np;
struct tree* nctemp2856=SemExpr(nctemp2854);
struct tree* nctemp2862= np;
nctempchar1* nctemp2864=PtreeGetref(nctemp2862);
nctempchar1* nctemp2860= nctemp2864;
struct nctempchar1 *nctemp2867;
static struct nctempchar1 nctemp2868 = {{ 5}, (char*)"aref\0"};
nctemp2867=&nctemp2868;
nctempchar1* nctemp2865= nctemp2867;
int nctemp2869=LibeStrcmp(nctemp2860,nctemp2865);
int nctemp2857 = (nctemp2869 ==0);
if(nctemp2857)
{
struct tree* nctemp2876= np;
nctempchar1* nctemp2878=PtreeGetref(nctemp2876);
nctempchar1* nctemp2874= nctemp2878;
struct nctempchar1 *nctemp2881;
static struct nctempchar1 nctemp2882 = {{ 5}, (char*)"sref\0"};
nctemp2881=&nctemp2882;
nctempchar1* nctemp2879= nctemp2881;
int nctemp2883=LibeStrcmp(nctemp2874,nctemp2879);
int nctemp2871 = (nctemp2883 ==0);
if(nctemp2871)
{
struct tree* nctemp2886= p;
struct nctempchar1 *nctemp2890;
static struct nctempchar1 nctemp2891 = {{ 25}, (char*)"not a array or structure\0"};
nctemp2890=&nctemp2891;
nctempchar1* nctemp2888= nctemp2890;
struct tree* nctemp2894= p;
nctempchar1* nctemp2896=PtreeGetdef(nctemp2894);
nctempchar1* nctemp2892= nctemp2896;
int nctemp2897=SemSerror(nctemp2886,nctemp2888,nctemp2892);
}
}
else{
struct tree* nctemp2899= p;
struct tree* nctemp2903= np;
nctempchar1* nctemp2905=PtreeGetype(nctemp2903);
nctempchar1* nctemp2901= nctemp2905;
int nctemp2906=PtreeSetype(nctemp2899,nctemp2901);
struct tree* nctemp2908= p;
struct tree* nctemp2912= np;
nctempchar1* nctemp2914=PtreeGetref(nctemp2912);
nctempchar1* nctemp2910= nctemp2914;
int nctemp2915=PtreeSetref(nctemp2908,nctemp2910);
}
}
return 1;
}
int SemCmplx (struct tree* p)
{
struct tree* np;
struct tree* nctemp2920= p;
nctempchar1* nctemp2922=PtreeGetname(nctemp2920);
nctempchar1* nctemp2918= nctemp2922;
struct nctempchar1 *nctemp2925;
static struct nctempchar1 nctemp2926 = {{ 6}, (char*)"cmplx\0"};
nctemp2925=&nctemp2926;
nctempchar1* nctemp2923= nctemp2925;
int nctemp2927=LibeStrcmp(nctemp2918,nctemp2923);
if(nctemp2927)
{
struct tree* nctemp2932= p;
struct tree* nctemp2934=PtreeMvchild(nctemp2932);
np =nctemp2934;
struct tree* nctemp2939= np;
struct tree* nctemp2941=PtreeMvchild(nctemp2939);
np =nctemp2941;
struct tree* nctemp2943= np;
struct tree* nctemp2945=SemExpr(nctemp2943);
struct tree* nctemp2951= np;
nctempchar1* nctemp2953=PtreeGetype(nctemp2951);
nctempchar1* nctemp2949= nctemp2953;
struct nctempchar1 *nctemp2956;
static struct nctempchar1 nctemp2957 = {{ 6}, (char*)"float\0"};
nctemp2956=&nctemp2957;
nctempchar1* nctemp2954= nctemp2956;
int nctemp2958=LibeStrcmp(nctemp2949,nctemp2954);
int nctemp2946 = (nctemp2958 ==0);
if(nctemp2946)
{
struct tree* nctemp2961= p;
struct nctempchar1 *nctemp2965;
static struct nctempchar1 nctemp2966 = {{ 33}, (char*)"Argument to cmplx is not a float\0"};
nctemp2965=&nctemp2966;
nctempchar1* nctemp2963= nctemp2965;
struct tree* nctemp2969= p;
nctempchar1* nctemp2971=PtreeGetdef(nctemp2969);
nctempchar1* nctemp2967= nctemp2971;
int nctemp2972=SemSerror(nctemp2961,nctemp2963,nctemp2967);
return 0;
}
struct tree* nctemp2979= np;
nctempchar1* nctemp2981=PtreeGetref(nctemp2979);
nctempchar1* nctemp2977= nctemp2981;
struct nctempchar1 *nctemp2984;
static struct nctempchar1 nctemp2985 = {{ 5}, (char*)"aref\0"};
nctemp2984=&nctemp2985;
nctempchar1* nctemp2982= nctemp2984;
int nctemp2986=LibeStrcmp(nctemp2977,nctemp2982);
struct tree* nctemp2990= np;
nctempchar1* nctemp2992=PtreeGetref(nctemp2990);
nctempchar1* nctemp2988= nctemp2992;
struct nctempchar1 *nctemp2995;
static struct nctempchar1 nctemp2996 = {{ 5}, (char*)"sref\0"};
nctemp2995=&nctemp2996;
nctempchar1* nctemp2993= nctemp2995;
int nctemp2997=LibeStrcmp(nctemp2988,nctemp2993);
int nctemp2974 = (nctemp2986 || nctemp2997);
if(nctemp2974)
{
struct tree* nctemp2999= p;
struct nctempchar1 *nctemp3003;
static struct nctempchar1 nctemp3004 = {{ 34}, (char*)"Argument to cmplx is not a scalar\0"};
nctemp3003=&nctemp3004;
nctempchar1* nctemp3001= nctemp3003;
struct tree* nctemp3007= p;
nctempchar1* nctemp3009=PtreeGetdef(nctemp3007);
nctempchar1* nctemp3005= nctemp3009;
int nctemp3010=SemSerror(nctemp2999,nctemp3001,nctemp3005);
return 0;
}
struct tree* nctemp3016= np;
struct tree* nctemp3018=PtreeMvsister(nctemp3016);
np =nctemp3018;
struct tree* nctemp3020= np;
struct tree* nctemp3022=SemExpr(nctemp3020);
struct tree* nctemp3028= np;
nctempchar1* nctemp3030=PtreeGetype(nctemp3028);
nctempchar1* nctemp3026= nctemp3030;
struct nctempchar1 *nctemp3033;
static struct nctempchar1 nctemp3034 = {{ 6}, (char*)"float\0"};
nctemp3033=&nctemp3034;
nctempchar1* nctemp3031= nctemp3033;
int nctemp3035=LibeStrcmp(nctemp3026,nctemp3031);
int nctemp3023 = (nctemp3035 ==0);
if(nctemp3023)
{
struct tree* nctemp3038= p;
struct nctempchar1 *nctemp3042;
static struct nctempchar1 nctemp3043 = {{ 33}, (char*)"Argument to cmplx is not a float\0"};
nctemp3042=&nctemp3043;
nctempchar1* nctemp3040= nctemp3042;
struct tree* nctemp3046= p;
nctempchar1* nctemp3048=PtreeGetdef(nctemp3046);
nctempchar1* nctemp3044= nctemp3048;
int nctemp3049=SemSerror(nctemp3038,nctemp3040,nctemp3044);
}
struct tree* nctemp3055= np;
nctempchar1* nctemp3057=PtreeGetref(nctemp3055);
nctempchar1* nctemp3053= nctemp3057;
struct nctempchar1 *nctemp3060;
static struct nctempchar1 nctemp3061 = {{ 5}, (char*)"aref\0"};
nctemp3060=&nctemp3061;
nctempchar1* nctemp3058= nctemp3060;
int nctemp3062=LibeStrcmp(nctemp3053,nctemp3058);
struct tree* nctemp3066= np;
nctempchar1* nctemp3068=PtreeGetref(nctemp3066);
nctempchar1* nctemp3064= nctemp3068;
struct nctempchar1 *nctemp3071;
static struct nctempchar1 nctemp3072 = {{ 5}, (char*)"sref\0"};
nctemp3071=&nctemp3072;
nctempchar1* nctemp3069= nctemp3071;
int nctemp3073=LibeStrcmp(nctemp3064,nctemp3069);
int nctemp3050 = (nctemp3062 || nctemp3073);
if(nctemp3050)
{
struct tree* nctemp3075= p;
struct nctempchar1 *nctemp3079;
static struct nctempchar1 nctemp3080 = {{ 34}, (char*)"Argument to cmplx is not a scalar\0"};
nctemp3079=&nctemp3080;
nctempchar1* nctemp3077= nctemp3079;
struct tree* nctemp3083= p;
nctempchar1* nctemp3085=PtreeGetdef(nctemp3083);
nctempchar1* nctemp3081= nctemp3085;
int nctemp3086=SemSerror(nctemp3075,nctemp3077,nctemp3081);
return 0;
}
struct tree* nctemp3089= p;
struct nctempchar1 *nctemp3093;
static struct nctempchar1 nctemp3094 = {{ 8}, (char*)"complex\0"};
nctemp3093=&nctemp3094;
nctempchar1* nctemp3091= nctemp3093;
int nctemp3095=PtreeSetype(nctemp3089,nctemp3091);
}
return 1;
}
int SemRe (struct tree* p)
{
struct tree* np;
struct tree* nctemp3100= p;
nctempchar1* nctemp3102=PtreeGetname(nctemp3100);
nctempchar1* nctemp3098= nctemp3102;
struct nctempchar1 *nctemp3105;
static struct nctempchar1 nctemp3106 = {{ 3}, (char*)"re\0"};
nctemp3105=&nctemp3106;
nctempchar1* nctemp3103= nctemp3105;
int nctemp3107=LibeStrcmp(nctemp3098,nctemp3103);
if(nctemp3107)
{
struct tree* nctemp3112= p;
struct tree* nctemp3114=PtreeMvchild(nctemp3112);
np =nctemp3114;
struct tree* nctemp3116= np;
struct tree* nctemp3118=SemExpr(nctemp3116);
struct tree* nctemp3124= np;
nctempchar1* nctemp3126=PtreeGetype(nctemp3124);
nctempchar1* nctemp3122= nctemp3126;
struct nctempchar1 *nctemp3129;
static struct nctempchar1 nctemp3130 = {{ 8}, (char*)"complex\0"};
nctemp3129=&nctemp3130;
nctempchar1* nctemp3127= nctemp3129;
int nctemp3131=LibeStrcmp(nctemp3122,nctemp3127);
int nctemp3119 = (nctemp3131 ==0);
if(nctemp3119)
{
struct tree* nctemp3134= p;
struct nctempchar1 *nctemp3138;
static struct nctempchar1 nctemp3139 = {{ 40}, (char*)"Argument to re is not a of type complex\0"};
nctemp3138=&nctemp3139;
nctempchar1* nctemp3136= nctemp3138;
struct tree* nctemp3142= p;
nctempchar1* nctemp3144=PtreeGetdef(nctemp3142);
nctempchar1* nctemp3140= nctemp3144;
int nctemp3145=SemSerror(nctemp3134,nctemp3136,nctemp3140);
return 0;
}
struct tree* nctemp3152= np;
nctempchar1* nctemp3154=PtreeGetref(nctemp3152);
nctempchar1* nctemp3150= nctemp3154;
struct nctempchar1 *nctemp3157;
static struct nctempchar1 nctemp3158 = {{ 5}, (char*)"aref\0"};
nctemp3157=&nctemp3158;
nctempchar1* nctemp3155= nctemp3157;
int nctemp3159=LibeStrcmp(nctemp3150,nctemp3155);
struct tree* nctemp3163= np;
nctempchar1* nctemp3165=PtreeGetref(nctemp3163);
nctempchar1* nctemp3161= nctemp3165;
struct nctempchar1 *nctemp3168;
static struct nctempchar1 nctemp3169 = {{ 5}, (char*)"sref\0"};
nctemp3168=&nctemp3169;
nctempchar1* nctemp3166= nctemp3168;
int nctemp3170=LibeStrcmp(nctemp3161,nctemp3166);
int nctemp3147 = (nctemp3159 || nctemp3170);
if(nctemp3147)
{
struct tree* nctemp3172= p;
struct nctempchar1 *nctemp3176;
static struct nctempchar1 nctemp3177 = {{ 31}, (char*)"Argument to re is not a scalar\0"};
nctemp3176=&nctemp3177;
nctempchar1* nctemp3174= nctemp3176;
struct tree* nctemp3180= p;
nctempchar1* nctemp3182=PtreeGetdef(nctemp3180);
nctempchar1* nctemp3178= nctemp3182;
int nctemp3183=SemSerror(nctemp3172,nctemp3174,nctemp3178);
return 0;
}
struct tree* nctemp3186= p;
struct nctempchar1 *nctemp3190;
static struct nctempchar1 nctemp3191 = {{ 6}, (char*)"float\0"};
nctemp3190=&nctemp3191;
nctempchar1* nctemp3188= nctemp3190;
int nctemp3192=PtreeSetype(nctemp3186,nctemp3188);
}
return 1;
}
int SemLen (struct tree* p)
{
struct tree* np;
struct tree* nctemp3199= p;
nctempchar1* nctemp3201=PtreeGetname(nctemp3199);
nctempchar1* nctemp3197= nctemp3201;
struct nctempchar1 *nctemp3204;
static struct nctempchar1 nctemp3205 = {{ 4}, (char*)"len\0"};
nctemp3204=&nctemp3205;
nctempchar1* nctemp3202= nctemp3204;
int nctemp3206=LibeStrcmp(nctemp3197,nctemp3202);
int nctemp3194 = (nctemp3206 ==1);
if(nctemp3194)
{
struct tree* nctemp3209= p;
struct nctempchar1 *nctemp3213;
static struct nctempchar1 nctemp3214 = {{ 4}, (char*)"int\0"};
nctemp3213=&nctemp3214;
nctempchar1* nctemp3211= nctemp3213;
int nctemp3215=PtreeSetype(nctemp3209,nctemp3211);
struct tree* nctemp3220= p;
struct tree* nctemp3222=PtreeMvchild(nctemp3220);
np =nctemp3222;
struct tree* nctemp3224= np;
struct tree* nctemp3226=SemExpr(nctemp3224);
struct tree* nctemp3232= np;
nctempchar1* nctemp3234=PtreeGetref(nctemp3232);
nctempchar1* nctemp3230= nctemp3234;
struct nctempchar1 *nctemp3237;
static struct nctempchar1 nctemp3238 = {{ 5}, (char*)"aref\0"};
nctemp3237=&nctemp3238;
nctempchar1* nctemp3235= nctemp3237;
int nctemp3239=LibeStrcmp(nctemp3230,nctemp3235);
int nctemp3227 = (nctemp3239 ==0);
if(nctemp3227)
{
struct tree* nctemp3242= p;
struct nctempchar1 *nctemp3246;
static struct nctempchar1 nctemp3247 = {{ 13}, (char*)"not an array\0"};
nctemp3246=&nctemp3247;
nctempchar1* nctemp3244= nctemp3246;
struct tree* nctemp3250= p;
nctempchar1* nctemp3252=PtreeGetdef(nctemp3250);
nctempchar1* nctemp3248= nctemp3252;
int nctemp3253=SemSerror(nctemp3242,nctemp3244,nctemp3248);
}
struct tree* nctemp3258= np;
struct tree* nctemp3260=PtreeMvsister(nctemp3258);
np =nctemp3260;
struct tree* nctemp3262= np;
struct tree* nctemp3264=SemExpr(nctemp3262);
struct tree* nctemp3268= np;
nctempchar1* nctemp3270=PtreeGetref(nctemp3268);
nctempchar1* nctemp3266= nctemp3270;
struct nctempchar1 *nctemp3273;
static struct nctempchar1 nctemp3274 = {{ 5}, (char*)"aref\0"};
nctemp3273=&nctemp3274;
nctempchar1* nctemp3271= nctemp3273;
int nctemp3275=LibeStrcmp(nctemp3266,nctemp3271);
if(nctemp3275)
{
struct tree* nctemp3277= p;
struct nctempchar1 *nctemp3281;
static struct nctempchar1 nctemp3282 = {{ 13}, (char*)"not a scalar\0"};
nctemp3281=&nctemp3282;
nctempchar1* nctemp3279= nctemp3281;
struct tree* nctemp3285= p;
nctempchar1* nctemp3287=PtreeGetdef(nctemp3285);
nctempchar1* nctemp3283= nctemp3287;
int nctemp3288=SemSerror(nctemp3277,nctemp3279,nctemp3283);
}
struct tree* nctemp3294= np;
nctempchar1* nctemp3296=PtreeGetype(nctemp3294);
nctempchar1* nctemp3292= nctemp3296;
struct nctempchar1 *nctemp3299;
static struct nctempchar1 nctemp3300 = {{ 4}, (char*)"int\0"};
nctemp3299=&nctemp3300;
nctempchar1* nctemp3297= nctemp3299;
int nctemp3301=LibeStrcmp(nctemp3292,nctemp3297);
int nctemp3289 = (nctemp3301 ==0);
if(nctemp3289)
{
struct tree* nctemp3304= p;
struct nctempchar1 *nctemp3308;
static struct nctempchar1 nctemp3309 = {{ 26}, (char*)"not an integer expression\0"};
nctemp3308=&nctemp3309;
nctempchar1* nctemp3306= nctemp3308;
struct tree* nctemp3312= p;
nctempchar1* nctemp3314=PtreeGetdef(nctemp3312);
nctempchar1* nctemp3310= nctemp3314;
int nctemp3315=SemSerror(nctemp3304,nctemp3306,nctemp3310);
}
struct tree* nctemp3323= np;
struct tree* nctemp3325=PtreeMvsister(nctemp3323);
np =nctemp3325;
int nctemp3316 = (np !=0);
if(nctemp3316)
{
struct tree* nctemp3328= p;
struct nctempchar1 *nctemp3332;
static struct nctempchar1 nctemp3333 = {{ 19}, (char*)"too many arguments\0"};
nctemp3332=&nctemp3333;
nctempchar1* nctemp3330= nctemp3332;
struct tree* nctemp3336= p;
nctempchar1* nctemp3338=PtreeGetdef(nctemp3336);
nctempchar1* nctemp3334= nctemp3338;
int nctemp3339=SemSerror(nctemp3328,nctemp3330,nctemp3334);
}
}
return 1;
}
int SemIm (struct tree* p)
{
struct tree* np;
struct tree* nctemp3344= p;
nctempchar1* nctemp3346=PtreeGetname(nctemp3344);
nctempchar1* nctemp3342= nctemp3346;
struct nctempchar1 *nctemp3349;
static struct nctempchar1 nctemp3350 = {{ 3}, (char*)"im\0"};
nctemp3349=&nctemp3350;
nctempchar1* nctemp3347= nctemp3349;
int nctemp3351=LibeStrcmp(nctemp3342,nctemp3347);
if(nctemp3351)
{
struct tree* nctemp3356= p;
struct tree* nctemp3358=PtreeMvchild(nctemp3356);
np =nctemp3358;
struct tree* nctemp3360= np;
struct tree* nctemp3362=SemExpr(nctemp3360);
struct tree* nctemp3368= np;
nctempchar1* nctemp3370=PtreeGetype(nctemp3368);
nctempchar1* nctemp3366= nctemp3370;
struct nctempchar1 *nctemp3373;
static struct nctempchar1 nctemp3374 = {{ 8}, (char*)"complex\0"};
nctemp3373=&nctemp3374;
nctempchar1* nctemp3371= nctemp3373;
int nctemp3375=LibeStrcmp(nctemp3366,nctemp3371);
int nctemp3363 = (nctemp3375 ==0);
if(nctemp3363)
{
struct tree* nctemp3378= p;
struct nctempchar1 *nctemp3382;
static struct nctempchar1 nctemp3383 = {{ 38}, (char*)"Argument to re is not of type complex\0"};
nctemp3382=&nctemp3383;
nctempchar1* nctemp3380= nctemp3382;
struct tree* nctemp3386= p;
nctempchar1* nctemp3388=PtreeGetdef(nctemp3386);
nctempchar1* nctemp3384= nctemp3388;
int nctemp3389=SemSerror(nctemp3378,nctemp3380,nctemp3384);
return 0;
}
struct tree* nctemp3396= np;
nctempchar1* nctemp3398=PtreeGetref(nctemp3396);
nctempchar1* nctemp3394= nctemp3398;
struct nctempchar1 *nctemp3401;
static struct nctempchar1 nctemp3402 = {{ 5}, (char*)"aref\0"};
nctemp3401=&nctemp3402;
nctempchar1* nctemp3399= nctemp3401;
int nctemp3403=LibeStrcmp(nctemp3394,nctemp3399);
struct tree* nctemp3407= np;
nctempchar1* nctemp3409=PtreeGetref(nctemp3407);
nctempchar1* nctemp3405= nctemp3409;
struct nctempchar1 *nctemp3412;
static struct nctempchar1 nctemp3413 = {{ 5}, (char*)"sref\0"};
nctemp3412=&nctemp3413;
nctempchar1* nctemp3410= nctemp3412;
int nctemp3414=LibeStrcmp(nctemp3405,nctemp3410);
int nctemp3391 = (nctemp3403 || nctemp3414);
if(nctemp3391)
{
struct tree* nctemp3416= p;
struct nctempchar1 *nctemp3420;
static struct nctempchar1 nctemp3421 = {{ 31}, (char*)"Argument to re is not a scalar\0"};
nctemp3420=&nctemp3421;
nctempchar1* nctemp3418= nctemp3420;
struct tree* nctemp3424= p;
nctempchar1* nctemp3426=PtreeGetdef(nctemp3424);
nctempchar1* nctemp3422= nctemp3426;
int nctemp3427=SemSerror(nctemp3416,nctemp3418,nctemp3422);
return 0;
}
struct tree* nctemp3430= p;
struct nctempchar1 *nctemp3434;
static struct nctempchar1 nctemp3435 = {{ 6}, (char*)"float\0"};
nctemp3434=&nctemp3435;
nctempchar1* nctemp3432= nctemp3434;
int nctemp3436=PtreeSetype(nctemp3430,nctemp3432);
}
return 1;
}
int SemSizeof (struct tree* p)
{
struct tree* nctemp3441= p;
nctempchar1* nctemp3443=PtreeGetname(nctemp3441);
nctempchar1* nctemp3439= nctemp3443;
struct nctempchar1 *nctemp3446;
static struct nctempchar1 nctemp3447 = {{ 7}, (char*)"sizeof\0"};
nctemp3446=&nctemp3447;
nctempchar1* nctemp3444= nctemp3446;
int nctemp3448=LibeStrcmp(nctemp3439,nctemp3444);
if(nctemp3448)
{
struct tree* nctemp3450= p;
struct nctempchar1 *nctemp3454;
static struct nctempchar1 nctemp3455 = {{ 4}, (char*)"int\0"};
nctemp3454=&nctemp3455;
nctempchar1* nctemp3452= nctemp3454;
int nctemp3456=PtreeSetype(nctemp3450,nctemp3452);
}
return 1;
}
int SemComparetype (struct tree* p,struct tree* np)
{
int rval;
rval = 1;
struct tree* nctemp3463= p;
nctempchar1* nctemp3465=PtreeGetype(nctemp3463);
nctempchar1* nctemp3461= nctemp3465;
struct tree* nctemp3468= np;
nctempchar1* nctemp3470=PtreeGetype(nctemp3468);
nctempchar1* nctemp3466= nctemp3470;
int nctemp3471=LibeStrcmp(nctemp3461,nctemp3466);
int nctemp3458 = (nctemp3471 ==0);
if(nctemp3458)
{
rval = 0;
}
struct tree* nctemp3478= p;
nctempchar1* nctemp3480=PtreeGetref(nctemp3478);
nctempchar1* nctemp3476= nctemp3480;
struct tree* nctemp3483= np;
nctempchar1* nctemp3485=PtreeGetref(nctemp3483);
nctempchar1* nctemp3481= nctemp3485;
int nctemp3486=LibeStrcmp(nctemp3476,nctemp3481);
int nctemp3473 = (nctemp3486 ==0);
if(nctemp3473)
{
struct tree* nctemp3491= np;
nctempchar1* nctemp3493=PtreeGetname(nctemp3491);
nctempchar1* nctemp3489= nctemp3493;
struct nctempchar1 *nctemp3496;
static struct nctempchar1 nctemp3497 = {{ 10}, (char*)"iconstant\0"};
nctemp3496=&nctemp3497;
nctempchar1* nctemp3494= nctemp3496;
int nctemp3498=LibeStrcmp(nctemp3489,nctemp3494);
if(nctemp3498)
{
struct tree* nctemp3502= np;
nctempchar1* nctemp3504=PtreeGetdef(nctemp3502);
nctempchar1* nctemp3500= nctemp3504;
struct nctempchar1 *nctemp3507;
static struct nctempchar1 nctemp3508 = {{ 2}, (char*)"0\0"};
nctemp3507=&nctemp3508;
nctempchar1* nctemp3505= nctemp3507;
int nctemp3509=LibeStrcmp(nctemp3500,nctemp3505);
if(nctemp3509)
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
struct tree* nctemp3515= p;
nctempchar1* nctemp3517=PtreeGetref(nctemp3515);
nctempchar1* nctemp3513= nctemp3517;
struct nctempchar1 *nctemp3520;
static struct nctempchar1 nctemp3521 = {{ 5}, (char*)"aref\0"};
nctemp3520=&nctemp3521;
nctempchar1* nctemp3518= nctemp3520;
int nctemp3522=LibeStrcmp(nctemp3513,nctemp3518);
int nctemp3510 = (nctemp3522 ==1);
if(nctemp3510)
{
struct tree* nctemp3527= p;
int nctemp3529=PtreeGetrank(nctemp3527);
struct tree* nctemp3531= np;
int nctemp3533=PtreeGetrank(nctemp3531);
int nctemp3524 = (nctemp3529 !=nctemp3533);
if(nctemp3524)
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
struct tree* nctemp3539= p;
struct tree* nctemp3541=PtreeMvchild(nctemp3539);
np =nctemp3541;
struct tree* nctemp3547= np;
nctempchar1* nctemp3549=PtreeGetlval(nctemp3547);
nctempchar1* nctemp3545= nctemp3549;
struct nctempchar1 *nctemp3552;
static struct nctempchar1 nctemp3553 = {{ 5}, (char*)"lval\0"};
nctemp3552=&nctemp3553;
nctempchar1* nctemp3550= nctemp3552;
int nctemp3554=LibeStrcmp(nctemp3545,nctemp3550);
int nctemp3542 = (nctemp3554 ==0);
if(nctemp3542)
{
struct tree* nctemp3557= np;
struct nctempchar1 *nctemp3561;
static struct nctempchar1 nctemp3562 = {{ 17}, (char*)"Not a left value\0"};
nctemp3561=&nctemp3562;
nctempchar1* nctemp3559= nctemp3561;
struct tree* nctemp3565= np;
nctempchar1* nctemp3567=PtreeGetdef(nctemp3565);
nctempchar1* nctemp3563= nctemp3567;
int nctemp3568=SemSerror(nctemp3557,nctemp3559,nctemp3563);
}
else{
struct tree* nctemp3570= p;
struct nctempchar1 *nctemp3574;
static struct nctempchar1 nctemp3575 = {{ 5}, (char*)"lval\0"};
nctemp3574=&nctemp3575;
nctempchar1* nctemp3572= nctemp3574;
int nctemp3576=PtreeSetlval(nctemp3570,nctemp3572);
}
struct tree* nctemp3578= np;
struct tree* nctemp3580= p;
int nctemp3582=SemCopytype(nctemp3578,nctemp3580);
return p;
}
struct tree* SemRelexpr (struct tree* p)
{
struct tree* np;
struct tree* rp;
struct tree* nctemp3588= p;
struct tree* nctemp3590=PtreeMvchild(nctemp3588);
np =nctemp3590;
struct tree* nctemp3595= np;
struct tree* nctemp3597=PtreeMvsister(nctemp3595);
rp =nctemp3597;
struct tree* nctemp3603= p;
nctempchar1* nctemp3605=PtreeGetdef(nctemp3603);
nctempchar1* nctemp3601= nctemp3605;
struct nctempchar1 *nctemp3608;
static struct nctempchar1 nctemp3609 = {{ 3}, (char*)"==\0"};
nctemp3608=&nctemp3609;
nctempchar1* nctemp3606= nctemp3608;
int nctemp3610=LibeStrcmp(nctemp3601,nctemp3606);
int nctemp3598 = (nctemp3610 ==0);
if(nctemp3598)
{
struct tree* nctemp3617= p;
nctempchar1* nctemp3619=PtreeGetdef(nctemp3617);
nctempchar1* nctemp3615= nctemp3619;
struct nctempchar1 *nctemp3622;
static struct nctempchar1 nctemp3623 = {{ 3}, (char*)"!=\0"};
nctemp3622=&nctemp3623;
nctempchar1* nctemp3620= nctemp3622;
int nctemp3624=LibeStrcmp(nctemp3615,nctemp3620);
int nctemp3612 = (nctemp3624 ==0);
if(nctemp3612)
{
struct tree* nctemp3631= np;
nctempchar1* nctemp3633=PtreeGetref(nctemp3631);
nctempchar1* nctemp3629= nctemp3633;
struct nctempchar1 *nctemp3636;
static struct nctempchar1 nctemp3637 = {{ 5}, (char*)"aref\0"};
nctemp3636=&nctemp3637;
nctempchar1* nctemp3634= nctemp3636;
int nctemp3638=LibeStrcmp(nctemp3629,nctemp3634);
struct tree* nctemp3642= np;
nctempchar1* nctemp3644=PtreeGetref(nctemp3642);
nctempchar1* nctemp3640= nctemp3644;
struct nctempchar1 *nctemp3647;
static struct nctempchar1 nctemp3648 = {{ 5}, (char*)"sref\0"};
nctemp3647=&nctemp3648;
nctempchar1* nctemp3645= nctemp3647;
int nctemp3649=LibeStrcmp(nctemp3640,nctemp3645);
int nctemp3626 = (nctemp3638 || nctemp3649);
if(nctemp3626)
{
struct tree* nctemp3651= p;
struct nctempchar1 *nctemp3655;
static struct nctempchar1 nctemp3656 = {{ 18}, (char*)"Illegal operation\0"};
nctemp3655=&nctemp3656;
nctempchar1* nctemp3653= nctemp3655;
struct nctempchar1 *nctemp3659;
static struct nctempchar1 nctemp3660 = {{ 2}, (char*)" \0"};
nctemp3659=&nctemp3660;
nctempchar1* nctemp3657= nctemp3659;
int nctemp3661=SemSerror(nctemp3651,nctemp3653,nctemp3657);
}
else{
struct tree* nctemp3667= rp;
nctempchar1* nctemp3669=PtreeGetref(nctemp3667);
nctempchar1* nctemp3665= nctemp3669;
struct nctempchar1 *nctemp3672;
static struct nctempchar1 nctemp3673 = {{ 5}, (char*)"aref\0"};
nctemp3672=&nctemp3673;
nctempchar1* nctemp3670= nctemp3672;
int nctemp3674=LibeStrcmp(nctemp3665,nctemp3670);
struct tree* nctemp3678= np;
nctempchar1* nctemp3680=PtreeGetref(nctemp3678);
nctempchar1* nctemp3676= nctemp3680;
struct nctempchar1 *nctemp3683;
static struct nctempchar1 nctemp3684 = {{ 5}, (char*)"sref\0"};
nctemp3683=&nctemp3684;
nctempchar1* nctemp3681= nctemp3683;
int nctemp3685=LibeStrcmp(nctemp3676,nctemp3681);
int nctemp3662 = (nctemp3674 || nctemp3685);
if(nctemp3662)
{
struct tree* nctemp3687= p;
struct nctempchar1 *nctemp3691;
static struct nctempchar1 nctemp3692 = {{ 18}, (char*)"Illegal operation\0"};
nctemp3691=&nctemp3692;
nctempchar1* nctemp3689= nctemp3691;
struct nctempchar1 *nctemp3695;
static struct nctempchar1 nctemp3696 = {{ 2}, (char*)" \0"};
nctemp3695=&nctemp3696;
nctempchar1* nctemp3693= nctemp3695;
int nctemp3697=SemSerror(nctemp3687,nctemp3689,nctemp3693);
}
}
}
else{
struct tree* nctemp3701= np;
nctempchar1* nctemp3703=PtreeGetype(nctemp3701);
nctempchar1* nctemp3699= nctemp3703;
struct nctempchar1 *nctemp3706;
static struct nctempchar1 nctemp3707 = {{ 8}, (char*)"complex\0"};
nctemp3706=&nctemp3707;
nctempchar1* nctemp3704= nctemp3706;
int nctemp3708=LibeStrcmp(nctemp3699,nctemp3704);
if(nctemp3708)
{
struct tree* nctemp3710= p;
struct nctempchar1 *nctemp3714;
static struct nctempchar1 nctemp3715 = {{ 18}, (char*)"Illegal operation\0"};
nctemp3714=&nctemp3715;
nctempchar1* nctemp3712= nctemp3714;
struct nctempchar1 *nctemp3718;
static struct nctempchar1 nctemp3719 = {{ 2}, (char*)" \0"};
nctemp3718=&nctemp3719;
nctempchar1* nctemp3716= nctemp3718;
int nctemp3720=SemSerror(nctemp3710,nctemp3712,nctemp3716);
}
}
}
struct tree* nctemp3722= p;
struct nctempchar1 *nctemp3726;
static struct nctempchar1 nctemp3727 = {{ 4}, (char*)"int\0"};
nctemp3726=&nctemp3727;
nctempchar1* nctemp3724= nctemp3726;
int nctemp3728=PtreeSetype(nctemp3722,nctemp3724);
struct tree* nctemp3730= p;
struct nctempchar1 *nctemp3734;
static struct nctempchar1 nctemp3735 = {{ 5}, (char*)"void\0"};
nctemp3734=&nctemp3735;
nctempchar1* nctemp3732= nctemp3734;
int nctemp3736=PtreeSetlval(nctemp3730,nctemp3732);
struct tree* nctemp3738= p;
struct nctempchar1 *nctemp3742;
static struct nctempchar1 nctemp3743 = {{ 5}, (char*)"void\0"};
nctemp3742=&nctemp3743;
nctempchar1* nctemp3740= nctemp3742;
int nctemp3744=PtreeSetstruct(nctemp3738,nctemp3740);
return p;
}
struct tree* SemAddexpr (struct tree* p)
{
struct tree* np;
struct tree* rp;
struct tree* nctemp3750= p;
struct tree* nctemp3752=PtreeMvchild(nctemp3750);
np =nctemp3752;
struct tree* nctemp3757= np;
struct tree* nctemp3759=PtreeMvsister(nctemp3757);
rp =nctemp3759;
struct tree* nctemp3763= np;
nctempchar1* nctemp3765=PtreeGetref(nctemp3763);
nctempchar1* nctemp3761= nctemp3765;
struct nctempchar1 *nctemp3768;
static struct nctempchar1 nctemp3769 = {{ 5}, (char*)"sref\0"};
nctemp3768=&nctemp3769;
nctempchar1* nctemp3766= nctemp3768;
int nctemp3770=LibeStrcmp(nctemp3761,nctemp3766);
if(nctemp3770)
{
struct tree* nctemp3772= np;
struct nctempchar1 *nctemp3776;
static struct nctempchar1 nctemp3777 = {{ 18}, (char*)"Illegal operation\0"};
nctemp3776=&nctemp3777;
nctempchar1* nctemp3774= nctemp3776;
struct nctempchar1 *nctemp3780;
static struct nctempchar1 nctemp3781 = {{ 2}, (char*)" \0"};
nctemp3780=&nctemp3781;
nctempchar1* nctemp3778= nctemp3780;
int nctemp3782=SemSerror(nctemp3772,nctemp3774,nctemp3778);
}
else{
struct tree* nctemp3786= rp;
nctempchar1* nctemp3788=PtreeGetref(nctemp3786);
nctempchar1* nctemp3784= nctemp3788;
struct nctempchar1 *nctemp3791;
static struct nctempchar1 nctemp3792 = {{ 5}, (char*)"sref\0"};
nctemp3791=&nctemp3792;
nctempchar1* nctemp3789= nctemp3791;
int nctemp3793=LibeStrcmp(nctemp3784,nctemp3789);
if(nctemp3793)
{
struct tree* nctemp3795= np;
struct nctempchar1 *nctemp3799;
static struct nctempchar1 nctemp3800 = {{ 18}, (char*)"Illegal operation\0"};
nctemp3799=&nctemp3800;
nctempchar1* nctemp3797= nctemp3799;
struct nctempchar1 *nctemp3803;
static struct nctempchar1 nctemp3804 = {{ 2}, (char*)" \0"};
nctemp3803=&nctemp3804;
nctempchar1* nctemp3801= nctemp3803;
int nctemp3805=SemSerror(nctemp3795,nctemp3797,nctemp3801);
}
else{
struct tree* nctemp3807= np;
struct tree* nctemp3809= p;
int nctemp3811=SemCopytype(nctemp3807,nctemp3809);
struct tree* nctemp3813= p;
struct nctempchar1 *nctemp3817;
static struct nctempchar1 nctemp3818 = {{ 5}, (char*)"void\0"};
nctemp3817=&nctemp3818;
nctempchar1* nctemp3815= nctemp3817;
int nctemp3819=PtreeSetlval(nctemp3813,nctemp3815);
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
struct tree* nctemp3824= p;
nctempchar1* nctemp3826=PtreeGetname(nctemp3824);
nctempchar1* nctemp3822= nctemp3826;
struct nctempchar1 *nctemp3829;
static struct nctempchar1 nctemp3830 = {{ 8}, (char*)"binexpr\0"};
nctemp3829=&nctemp3830;
nctempchar1* nctemp3827= nctemp3829;
int nctemp3831=LibeStrcmp(nctemp3822,nctemp3827);
if(nctemp3831)
{
struct tree* nctemp3836= p;
struct tree* nctemp3838=PtreeMvchild(nctemp3836);
p =nctemp3838;
struct tree* nctemp3843= p;
struct tree* nctemp3845=PtreeMvsister(nctemp3843);
p =nctemp3845;
right = p;
struct tree* nctemp3850= p;
struct tree* nctemp3852=SemUnexpr(nctemp3850);
rightp =nctemp3852;
struct tree* nctemp3857= np;
struct tree* nctemp3859=PtreeMvchild(nctemp3857);
p =nctemp3859;
struct tree* nctemp3865= np;
nctempchar1* nctemp3867=PtreeGetdef(nctemp3865);
nctempchar1* nctemp3863= nctemp3867;
struct nctempchar1 *nctemp3870;
static struct nctempchar1 nctemp3871 = {{ 2}, (char*)"=\0"};
nctemp3870=&nctemp3871;
nctempchar1* nctemp3868= nctemp3870;
int nctemp3872=LibeStrcmp(nctemp3863,nctemp3868);
int nctemp3860 = (nctemp3872 ==1);
if(nctemp3860)
{
struct tree* nctemp3879= p;
nctempchar1* nctemp3881=PtreeGetname(nctemp3879);
nctempchar1* nctemp3877= nctemp3881;
struct nctempchar1 *nctemp3884;
static struct nctempchar1 nctemp3885 = {{ 11}, (char*)"identifier\0"};
nctemp3884=&nctemp3885;
nctempchar1* nctemp3882= nctemp3884;
int nctemp3886=LibeStrcmp(nctemp3877,nctemp3882);
int nctemp3874 = (nctemp3886 ==1);
if(nctemp3874)
{
struct tree* nctemp3891= p;
struct tree* nctemp3893=PtreeMvchild(nctemp3891);
int nctemp3888 = (nctemp3893 ==0);
if(nctemp3888)
{
struct tree* nctemp3896= right;
struct tree* nctemp3898= p;
int nctemp3900=SemCopytype2(nctemp3896,nctemp3898);
struct tree* nctemp3902= p;
struct symbol* nctemp3906=SymGetltp();
struct symbol* nctemp3904= nctemp3906;
struct symbol* nctemp3909=SymGetetp();
struct symbol* nctemp3907= nctemp3909;
int nctemp3910=SemAutodeclar(nctemp3902,nctemp3904,nctemp3907);
}
}
}
struct tree* nctemp3915= p;
struct tree* nctemp3917=SemUnexpr(nctemp3915);
leftp =nctemp3917;
struct tree* nctemp3921= leftp;
struct tree* nctemp3923= rightp;
int nctemp3925=SemComparetype(nctemp3921,nctemp3923);
int nctemp3918 = (nctemp3925 ==0);
if(nctemp3918)
{
struct tree* nctemp3928= p;
struct nctempchar1 *nctemp3932;
static struct nctempchar1 nctemp3933 = {{ 11}, (char*)"Type error\0"};
nctemp3932=&nctemp3933;
nctempchar1* nctemp3930= nctemp3932;
struct nctempchar1 *nctemp3936;
static struct nctempchar1 nctemp3937 = {{ 2}, (char*)" \0"};
nctemp3936=&nctemp3937;
nctempchar1* nctemp3934= nctemp3936;
int nctemp3938=SemSerror(nctemp3928,nctemp3930,nctemp3934);
return p;
}
else{
struct tree* nctemp3943= np;
nctempchar1* nctemp3945=PtreeGetdef(nctemp3943);
nctempchar1* nctemp3941= nctemp3945;
struct nctempchar1 *nctemp3948;
static struct nctempchar1 nctemp3949 = {{ 2}, (char*)"=\0"};
nctemp3948=&nctemp3949;
nctempchar1* nctemp3946= nctemp3948;
int nctemp3950=LibeStrcmp(nctemp3941,nctemp3946);
if(nctemp3950)
{
struct tree* nctemp3952= np;
struct tree* nctemp3954=SemAsgexpr(nctemp3952);
}
else{
struct tree* nctemp3978= np;
nctempchar1* nctemp3980=PtreeGetdef(nctemp3978);
nctempchar1* nctemp3976= nctemp3980;
struct nctempchar1 *nctemp3983;
static struct nctempchar1 nctemp3984 = {{ 3}, (char*)"!=\0"};
nctemp3983=&nctemp3984;
nctempchar1* nctemp3981= nctemp3983;
int nctemp3985=LibeStrcmp(nctemp3976,nctemp3981);
struct tree* nctemp3989= np;
nctempchar1* nctemp3991=PtreeGetdef(nctemp3989);
nctempchar1* nctemp3987= nctemp3991;
struct nctempchar1 *nctemp3994;
static struct nctempchar1 nctemp3995 = {{ 3}, (char*)"==\0"};
nctemp3994=&nctemp3995;
nctempchar1* nctemp3992= nctemp3994;
int nctemp3996=LibeStrcmp(nctemp3987,nctemp3992);
int nctemp3973 = (nctemp3985 || nctemp3996);
struct tree* nctemp4000= np;
nctempchar1* nctemp4002=PtreeGetdef(nctemp4000);
nctempchar1* nctemp3998= nctemp4002;
struct nctempchar1 *nctemp4005;
static struct nctempchar1 nctemp4006 = {{ 3}, (char*)"||\0"};
nctemp4005=&nctemp4006;
nctempchar1* nctemp4003= nctemp4005;
int nctemp4007=LibeStrcmp(nctemp3998,nctemp4003);
int nctemp3970 = (nctemp3973 || nctemp4007);
struct tree* nctemp4011= np;
nctempchar1* nctemp4013=PtreeGetdef(nctemp4011);
nctempchar1* nctemp4009= nctemp4013;
struct nctempchar1 *nctemp4016;
static struct nctempchar1 nctemp4017 = {{ 3}, (char*)"<=\0"};
nctemp4016=&nctemp4017;
nctempchar1* nctemp4014= nctemp4016;
int nctemp4018=LibeStrcmp(nctemp4009,nctemp4014);
int nctemp3967 = (nctemp3970 || nctemp4018);
struct tree* nctemp4022= np;
nctempchar1* nctemp4024=PtreeGetdef(nctemp4022);
nctempchar1* nctemp4020= nctemp4024;
struct nctempchar1 *nctemp4027;
static struct nctempchar1 nctemp4028 = {{ 3}, (char*)">=\0"};
nctemp4027=&nctemp4028;
nctempchar1* nctemp4025= nctemp4027;
int nctemp4029=LibeStrcmp(nctemp4020,nctemp4025);
int nctemp3964 = (nctemp3967 || nctemp4029);
struct tree* nctemp4033= np;
nctempchar1* nctemp4035=PtreeGetdef(nctemp4033);
nctempchar1* nctemp4031= nctemp4035;
struct nctempchar1 *nctemp4038;
static struct nctempchar1 nctemp4039 = {{ 2}, (char*)"<\0"};
nctemp4038=&nctemp4039;
nctempchar1* nctemp4036= nctemp4038;
int nctemp4040=LibeStrcmp(nctemp4031,nctemp4036);
int nctemp3961 = (nctemp3964 || nctemp4040);
struct tree* nctemp4044= np;
nctempchar1* nctemp4046=PtreeGetdef(nctemp4044);
nctempchar1* nctemp4042= nctemp4046;
struct nctempchar1 *nctemp4049;
static struct nctempchar1 nctemp4050 = {{ 2}, (char*)">\0"};
nctemp4049=&nctemp4050;
nctempchar1* nctemp4047= nctemp4049;
int nctemp4051=LibeStrcmp(nctemp4042,nctemp4047);
int nctemp3958 = (nctemp3961 || nctemp4051);
struct tree* nctemp4055= np;
nctempchar1* nctemp4057=PtreeGetdef(nctemp4055);
nctempchar1* nctemp4053= nctemp4057;
struct nctempchar1 *nctemp4060;
static struct nctempchar1 nctemp4061 = {{ 3}, (char*)"&&\0"};
nctemp4060=&nctemp4061;
nctempchar1* nctemp4058= nctemp4060;
int nctemp4062=LibeStrcmp(nctemp4053,nctemp4058);
int nctemp3955 = (nctemp3958 || nctemp4062);
if(nctemp3955)
{
struct tree* nctemp4064= np;
struct tree* nctemp4066=SemRelexpr(nctemp4064);
}
else{
struct tree* nctemp4078= np;
nctempchar1* nctemp4080=PtreeGetdef(nctemp4078);
nctempchar1* nctemp4076= nctemp4080;
struct nctempchar1 *nctemp4083;
static struct nctempchar1 nctemp4084 = {{ 2}, (char*)"+\0"};
nctemp4083=&nctemp4084;
nctempchar1* nctemp4081= nctemp4083;
int nctemp4085=LibeStrcmp(nctemp4076,nctemp4081);
struct tree* nctemp4089= np;
nctempchar1* nctemp4091=PtreeGetdef(nctemp4089);
nctempchar1* nctemp4087= nctemp4091;
struct nctempchar1 *nctemp4094;
static struct nctempchar1 nctemp4095 = {{ 2}, (char*)"-\0"};
nctemp4094=&nctemp4095;
nctempchar1* nctemp4092= nctemp4094;
int nctemp4096=LibeStrcmp(nctemp4087,nctemp4092);
int nctemp4073 = (nctemp4085 || nctemp4096);
struct tree* nctemp4100= np;
nctempchar1* nctemp4102=PtreeGetdef(nctemp4100);
nctempchar1* nctemp4098= nctemp4102;
struct nctempchar1 *nctemp4105;
static struct nctempchar1 nctemp4106 = {{ 2}, (char*)"*\0"};
nctemp4105=&nctemp4106;
nctempchar1* nctemp4103= nctemp4105;
int nctemp4107=LibeStrcmp(nctemp4098,nctemp4103);
int nctemp4070 = (nctemp4073 || nctemp4107);
struct tree* nctemp4111= np;
nctempchar1* nctemp4113=PtreeGetdef(nctemp4111);
nctempchar1* nctemp4109= nctemp4113;
struct nctempchar1 *nctemp4116;
static struct nctempchar1 nctemp4117 = {{ 2}, (char*)"/\0"};
nctemp4116=&nctemp4117;
nctempchar1* nctemp4114= nctemp4116;
int nctemp4118=LibeStrcmp(nctemp4109,nctemp4114);
int nctemp4067 = (nctemp4070 || nctemp4118);
if(nctemp4067)
{
struct tree* nctemp4120= np;
struct tree* nctemp4122=SemAddexpr(nctemp4120);
}
}
}
return np;
}
}
else{
struct tree* nctemp4125= p;
struct tree* nctemp4127=SemUnexpr(nctemp4125);
return nctemp4127;
}
}
struct tree* SemExpr (struct tree* p)
{
struct tree* sp;
struct tree* nctemp4132= p;
struct tree* nctemp4134=PtreeMvchild(nctemp4132);
sp =nctemp4134;
struct tree* nctemp4139= sp;
struct tree* nctemp4141=SemBinexpr(nctemp4139);
sp =nctemp4141;
struct tree* nctemp4143= sp;
struct tree* nctemp4145= p;
int nctemp4147=SemCopytype(nctemp4143,nctemp4145);
struct tree* nctemp4151= p;
int nctemp4153=PtreeGetopexpr(nctemp4151);
int nctemp4148 = (nctemp4153 ==1);
if(nctemp4148)
{
int nctemp4158=SemGetsimple();
int nctemp4155 = (nctemp4158 ==0);
if(nctemp4155)
{
struct tree* nctemp4161= p;
int nctemp4163= 0;
int nctemp4165=PtreeSetsimple(nctemp4161,nctemp4163);
int nctemp4167= 1;
int nctemp4169=SemSetsimple(nctemp4167);
}
else{
struct tree* nctemp4171= p;
int nctemp4173= 1;
int nctemp4175=PtreeSetsimple(nctemp4171,nctemp4173);
}
}
return p;
}
struct tree* SemUnexpr (struct tree* p)
{
struct tree* np;
np = p;
struct tree* nctemp4180= p;
nctempchar1* nctemp4182=PtreeGetname(nctemp4180);
nctempchar1* nctemp4178= nctemp4182;
struct nctempchar1 *nctemp4185;
static struct nctempchar1 nctemp4186 = {{ 7}, (char*)"unexpr\0"};
nctemp4185=&nctemp4186;
nctempchar1* nctemp4183= nctemp4185;
int nctemp4187=LibeStrcmp(nctemp4178,nctemp4183);
if(nctemp4187)
{
struct tree* nctemp4192= p;
struct tree* nctemp4194=PtreeMvchild(nctemp4192);
p =nctemp4194;
struct tree* nctemp4199= p;
struct tree* nctemp4201=SemPrimexpr(nctemp4199);
p =nctemp4201;
struct tree* nctemp4203= p;
struct tree* nctemp4205= np;
int nctemp4207=SemCopytype(nctemp4203,nctemp4205);
return np;
}
else{
struct tree* nctemp4210= p;
struct tree* nctemp4212=SemPrimexpr(nctemp4210);
return nctemp4212;
}
}
struct tree* SemPrimexpr (struct tree* p)
{
struct tree* nctemp4216= p;
nctempchar1* nctemp4218=PtreeGetname(nctemp4216);
nctempchar1* nctemp4214= nctemp4218;
struct nctempchar1 *nctemp4221;
static struct nctempchar1 nctemp4222 = {{ 11}, (char*)"identifier\0"};
nctemp4221=&nctemp4222;
nctempchar1* nctemp4219= nctemp4221;
int nctemp4223=LibeStrcmp(nctemp4214,nctemp4219);
if(nctemp4223)
{
struct tree* nctemp4225= p;
int nctemp4227=SemId(nctemp4225);
return p;
}
else{
struct tree* nctemp4232= p;
nctempchar1* nctemp4234=PtreeGetname(nctemp4232);
nctempchar1* nctemp4230= nctemp4234;
struct nctempchar1 *nctemp4237;
static struct nctempchar1 nctemp4238 = {{ 6}, (char*)"fcall\0"};
nctemp4237=&nctemp4238;
nctempchar1* nctemp4235= nctemp4237;
int nctemp4239=LibeStrcmp(nctemp4230,nctemp4235);
if(nctemp4239)
{
int nctemp4241= 0;
int nctemp4243=SemSetsimple(nctemp4241);
struct tree* nctemp4245= p;
int nctemp4247=SemFcall(nctemp4245);
return p;
}
else{
struct tree* nctemp4252= p;
nctempchar1* nctemp4254=PtreeGetname(nctemp4252);
nctempchar1* nctemp4250= nctemp4254;
struct nctempchar1 *nctemp4257;
static struct nctempchar1 nctemp4258 = {{ 5}, (char*)"cast\0"};
nctemp4257=&nctemp4258;
nctempchar1* nctemp4255= nctemp4257;
int nctemp4259=LibeStrcmp(nctemp4250,nctemp4255);
if(nctemp4259)
{
int nctemp4261= 0;
int nctemp4263=SemSetsimple(nctemp4261);
struct tree* nctemp4265= p;
int nctemp4267=SemCast(nctemp4265);
return p;
}
else{
struct tree* nctemp4272= p;
nctempchar1* nctemp4274=PtreeGetname(nctemp4272);
nctempchar1* nctemp4270= nctemp4274;
struct nctempchar1 *nctemp4277;
static struct nctempchar1 nctemp4278 = {{ 4}, (char*)"new\0"};
nctemp4277=&nctemp4278;
nctempchar1* nctemp4275= nctemp4277;
int nctemp4279=LibeStrcmp(nctemp4270,nctemp4275);
if(nctemp4279)
{
int nctemp4281= 0;
int nctemp4283=SemSetsimple(nctemp4281);
struct tree* nctemp4285= p;
int nctemp4287=SemNew(nctemp4285);
return p;
}
else{
struct tree* nctemp4292= p;
nctempchar1* nctemp4294=PtreeGetname(nctemp4292);
nctempchar1* nctemp4290= nctemp4294;
struct nctempchar1 *nctemp4297;
static struct nctempchar1 nctemp4298 = {{ 7}, (char*)"delete\0"};
nctemp4297=&nctemp4298;
nctempchar1* nctemp4295= nctemp4297;
int nctemp4299=LibeStrcmp(nctemp4290,nctemp4295);
if(nctemp4299)
{
int nctemp4301= 0;
int nctemp4303=SemSetsimple(nctemp4301);
struct tree* nctemp4305= p;
int nctemp4307=SemDelete(nctemp4305);
return p;
}
else{
struct tree* nctemp4312= p;
nctempchar1* nctemp4314=PtreeGetname(nctemp4312);
nctempchar1* nctemp4310= nctemp4314;
struct nctempchar1 *nctemp4317;
static struct nctempchar1 nctemp4318 = {{ 6}, (char*)"cmplx\0"};
nctemp4317=&nctemp4318;
nctempchar1* nctemp4315= nctemp4317;
int nctemp4319=LibeStrcmp(nctemp4310,nctemp4315);
if(nctemp4319)
{
int nctemp4321= 0;
int nctemp4323=SemSetsimple(nctemp4321);
struct tree* nctemp4325= p;
int nctemp4327=SemCmplx(nctemp4325);
return p;
}
else{
struct tree* nctemp4332= p;
nctempchar1* nctemp4334=PtreeGetname(nctemp4332);
nctempchar1* nctemp4330= nctemp4334;
struct nctempchar1 *nctemp4337;
static struct nctempchar1 nctemp4338 = {{ 3}, (char*)"re\0"};
nctemp4337=&nctemp4338;
nctempchar1* nctemp4335= nctemp4337;
int nctemp4339=LibeStrcmp(nctemp4330,nctemp4335);
if(nctemp4339)
{
int nctemp4341= 0;
int nctemp4343=SemSetsimple(nctemp4341);
struct tree* nctemp4345= p;
int nctemp4347=SemRe(nctemp4345);
return p;
}
else{
struct tree* nctemp4352= p;
nctempchar1* nctemp4354=PtreeGetname(nctemp4352);
nctempchar1* nctemp4350= nctemp4354;
struct nctempchar1 *nctemp4357;
static struct nctempchar1 nctemp4358 = {{ 4}, (char*)"len\0"};
nctemp4357=&nctemp4358;
nctempchar1* nctemp4355= nctemp4357;
int nctemp4359=LibeStrcmp(nctemp4350,nctemp4355);
if(nctemp4359)
{
int nctemp4361= 0;
int nctemp4363=SemSetsimple(nctemp4361);
struct tree* nctemp4365= p;
int nctemp4367=SemLen(nctemp4365);
return p;
}
else{
struct tree* nctemp4372= p;
nctempchar1* nctemp4374=PtreeGetname(nctemp4372);
nctempchar1* nctemp4370= nctemp4374;
struct nctempchar1 *nctemp4377;
static struct nctempchar1 nctemp4378 = {{ 3}, (char*)"im\0"};
nctemp4377=&nctemp4378;
nctempchar1* nctemp4375= nctemp4377;
int nctemp4379=LibeStrcmp(nctemp4370,nctemp4375);
if(nctemp4379)
{
int nctemp4381= 0;
int nctemp4383=SemSetsimple(nctemp4381);
struct tree* nctemp4385= p;
int nctemp4387=SemIm(nctemp4385);
return p;
}
else{
struct tree* nctemp4392= p;
nctempchar1* nctemp4394=PtreeGetname(nctemp4392);
nctempchar1* nctemp4390= nctemp4394;
struct nctempchar1 *nctemp4397;
static struct nctempchar1 nctemp4398 = {{ 7}, (char*)"sizeof\0"};
nctemp4397=&nctemp4398;
nctempchar1* nctemp4395= nctemp4397;
int nctemp4399=LibeStrcmp(nctemp4390,nctemp4395);
if(nctemp4399)
{
int nctemp4401= 0;
int nctemp4403=SemSetsimple(nctemp4401);
struct tree* nctemp4405= p;
int nctemp4407=SemSizeof(nctemp4405);
return p;
}
else{
struct tree* nctemp4412= p;
nctempchar1* nctemp4414=PtreeGetname(nctemp4412);
nctempchar1* nctemp4410= nctemp4414;
struct nctempchar1 *nctemp4417;
static struct nctempchar1 nctemp4418 = {{ 10}, (char*)"iconstant\0"};
nctemp4417=&nctemp4418;
nctempchar1* nctemp4415= nctemp4417;
int nctemp4419=LibeStrcmp(nctemp4410,nctemp4415);
if(nctemp4419)
{
struct tree* nctemp4421= p;
struct nctempchar1 *nctemp4425;
static struct nctempchar1 nctemp4426 = {{ 4}, (char*)"int\0"};
nctemp4425=&nctemp4426;
nctempchar1* nctemp4423= nctemp4425;
int nctemp4427=PtreeSetype(nctemp4421,nctemp4423);
return p;
}
else{
struct tree* nctemp4432= p;
nctempchar1* nctemp4434=PtreeGetname(nctemp4432);
nctempchar1* nctemp4430= nctemp4434;
struct nctempchar1 *nctemp4437;
static struct nctempchar1 nctemp4438 = {{ 10}, (char*)"rconstant\0"};
nctemp4437=&nctemp4438;
nctempchar1* nctemp4435= nctemp4437;
int nctemp4439=LibeStrcmp(nctemp4430,nctemp4435);
if(nctemp4439)
{
struct tree* nctemp4441= p;
struct nctempchar1 *nctemp4445;
static struct nctempchar1 nctemp4446 = {{ 6}, (char*)"float\0"};
nctemp4445=&nctemp4446;
nctempchar1* nctemp4443= nctemp4445;
int nctemp4447=PtreeSetype(nctemp4441,nctemp4443);
return p;
}
else{
struct tree* nctemp4452= p;
nctempchar1* nctemp4454=PtreeGetname(nctemp4452);
nctempchar1* nctemp4450= nctemp4454;
struct nctempchar1 *nctemp4457;
static struct nctempchar1 nctemp4458 = {{ 10}, (char*)"sconstant\0"};
nctemp4457=&nctemp4458;
nctempchar1* nctemp4455= nctemp4457;
int nctemp4459=LibeStrcmp(nctemp4450,nctemp4455);
if(nctemp4459)
{
int nctemp4461= 0;
int nctemp4463=SemSetsimple(nctemp4461);
struct tree* nctemp4465= p;
struct nctempchar1 *nctemp4469;
static struct nctempchar1 nctemp4470 = {{ 5}, (char*)"char\0"};
nctemp4469=&nctemp4470;
nctempchar1* nctemp4467= nctemp4469;
int nctemp4471=PtreeSetype(nctemp4465,nctemp4467);
struct tree* nctemp4473= p;
struct nctempchar1 *nctemp4477;
static struct nctempchar1 nctemp4478 = {{ 5}, (char*)"aref\0"};
nctemp4477=&nctemp4478;
nctempchar1* nctemp4475= nctemp4477;
int nctemp4479=PtreeSetref(nctemp4473,nctemp4475);
struct tree* nctemp4481= p;
int nctemp4483= 1;
int nctemp4485=PtreeSetrank(nctemp4481,nctemp4483);
return p;
}
else{
struct tree* nctemp4488= p;
struct tree* nctemp4490=SemBinexpr(nctemp4488);
return nctemp4490;
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
struct tree* nctemp4492= p;
struct tree* nctemp4496= np;
nctempchar1* nctemp4498=PtreeGetparallel(nctemp4496);
nctempchar1* nctemp4494= nctemp4498;
int nctemp4499=PtreeSetparallel(nctemp4492,nctemp4494);
return 1;
}
int SemArgtypes (struct tree* p,struct symbol* tp)
{
nctempchar1 *name;
struct symbol* nctemp4506= tp;
nctempchar1* nctemp4508=SymGetname(nctemp4506);
name=nctemp4508;
struct tree* nctemp4510= p;
struct symbol* nctemp4512= tp;
int nctemp4514=SemArgtype(nctemp4510,nctemp4512);
struct tree* nctemp4519= p;
struct tree* nctemp4521=PtreeMvchild(nctemp4519);
p =nctemp4521;
struct tree* nctemp4527= p;
nctempchar1* nctemp4529=PtreeGetname(nctemp4527);
nctempchar1* nctemp4525= nctemp4529;
struct nctempchar1 *nctemp4532;
static struct nctempchar1 nctemp4533 = {{ 8}, (char*)"arglist\0"};
nctemp4532=&nctemp4533;
nctempchar1* nctemp4530= nctemp4532;
int nctemp4534=LibeStrcmp(nctemp4525,nctemp4530);
int nctemp4522 = (nctemp4534 ==0);
if(nctemp4522)
{
struct symbol* nctemp4543= tp;
struct symbol* nctemp4545=SymGetable(nctemp4543);
tp =nctemp4545;
int nctemp4536 = (tp !=0);
if(nctemp4536)
{
struct tree* nctemp4548= p;
struct nctempchar1 *nctemp4552;
static struct nctempchar1 nctemp4553 = {{ 54}, (char*)"Function arguments does not match forward declaration\0"};
nctemp4552=&nctemp4553;
nctempchar1* nctemp4550= nctemp4552;
struct tree* nctemp4556= p;
nctempchar1* nctemp4558=PtreeGetdef(nctemp4556);
nctempchar1* nctemp4554= nctemp4558;
int nctemp4559=SemSerror(nctemp4548,nctemp4550,nctemp4554);
return 0;
}
return 1;
}
struct tree* nctemp4568= p;
struct tree* nctemp4570=PtreeMvchild(nctemp4568);
struct tree* nctemp4566= nctemp4570;
struct tree* nctemp4571=PtreeMvchild(nctemp4566);
p =nctemp4571;
struct symbol* nctemp4576= tp;
struct symbol* nctemp4578=SymGetable(nctemp4576);
tp =nctemp4578;
struct nctempchar1 *nctemp4585;
static struct nctempchar1 nctemp4586 = {{ 9}, (char*)"#arglist\0"};
nctemp4585=&nctemp4586;
nctempchar1* nctemp4583= nctemp4585;
struct symbol* nctemp4587= tp;
struct symbol* nctemp4589=SymLookup(nctemp4583,nctemp4587);
tp =nctemp4589;
int nctemp4590 = (tp ==0);
if(nctemp4590)
{
struct tree* nctemp4595= p;
struct nctempchar1 *nctemp4599;
static struct nctempchar1 nctemp4600 = {{ 54}, (char*)"Function Arguments does not match forward declaration\0"};
nctemp4599=&nctemp4600;
nctempchar1* nctemp4597= nctemp4599;
nctempchar1* nctemp4601= name;
int nctemp4604=SemSerror(nctemp4595,nctemp4597,nctemp4601);
}
else{
struct symbol* nctemp4609= tp;
struct symbol* nctemp4611=SymGetable(nctemp4609);
tp =nctemp4611;
}
struct symbol* nctemp4616= tp;
struct symbol* nctemp4618=SymMvnext(nctemp4616);
tp =nctemp4618;
int nctemp4619 = (p !=0);
int nctemp4623=nctemp4619;
while(nctemp4623)
{{
struct tree* nctemp4625= p;
struct symbol* nctemp4627= tp;
int nctemp4629=SemArgtype(nctemp4625,nctemp4627);
struct tree* nctemp4634= p;
struct tree* nctemp4636=PtreeMvsister(nctemp4634);
p =nctemp4636;
struct symbol* nctemp4641= tp;
struct symbol* nctemp4643=SymMvnext(nctemp4641);
tp =nctemp4643;
}
int nctemp4644 = (p !=0);
nctemp4623=nctemp4644;}return 1;
}
int SemFdef2 (struct tree* p,struct symbol* tp)
{
struct tree* np;
struct tree* sp;
struct symbol* up;
struct symbol* ftp;
struct symbol* ltp;
struct tree* nctemp4650= p;
struct nctempchar1 *nctemp4654;
static struct nctempchar1 nctemp4655 = {{ 5}, (char*)"fdef\0"};
nctemp4654=&nctemp4655;
nctempchar1* nctemp4652= nctemp4654;
int nctemp4656=PtreeSetname(nctemp4650,nctemp4652);
struct symbol* nctemp4658= tp;
struct nctempchar1 *nctemp4662;
static struct nctempchar1 nctemp4663 = {{ 5}, (char*)"void\0"};
nctemp4662=&nctemp4663;
nctempchar1* nctemp4660= nctemp4662;
int nctemp4664=SymSetforw(nctemp4658,nctemp4660);
struct tree* nctemp4669= p;
struct tree* nctemp4671=PtreeMvchild(nctemp4669);
np =nctemp4671;
struct symbol* nctemp4676=SymMktable();
ltp =nctemp4676;
struct symbol* nctemp4678= ltp;
int nctemp4680=SymSetltp(nctemp4678);
struct nctempchar1 *nctemp4687;
static struct nctempchar1 nctemp4688 = {{ 6}, (char*)"#self\0"};
nctemp4687=&nctemp4688;
nctempchar1* nctemp4685= nctemp4687;
struct symbol* nctemp4689= ltp;
struct symbol* nctemp4691=SymMkname(nctemp4685,nctemp4689);
up =nctemp4691;
struct symbol* nctemp4693= up;
struct tree* nctemp4697= p;
nctempchar1* nctemp4699=PtreeGetdef(nctemp4697);
nctempchar1* nctemp4695= nctemp4699;
int nctemp4700=SymSetfunc(nctemp4693,nctemp4695);
struct tree* nctemp4706= np;
nctempchar1* nctemp4708=PtreeGetname(nctemp4706);
nctempchar1* nctemp4704= nctemp4708;
struct nctempchar1 *nctemp4711;
static struct nctempchar1 nctemp4712 = {{ 8}, (char*)"arglist\0"};
nctemp4711=&nctemp4712;
nctempchar1* nctemp4709= nctemp4711;
int nctemp4713=LibeStrcmp(nctemp4704,nctemp4709);
int nctemp4701 = (nctemp4713 ==1);
if(nctemp4701)
{
struct tree* nctemp4719= np;
struct tree* nctemp4721=PtreeMvsister(nctemp4719);
sp =nctemp4721;
}
else{
sp = np;
}
struct tree* nctemp4727= np;
nctempchar1* nctemp4729=PtreeGetname(nctemp4727);
nctempchar1* nctemp4725= nctemp4729;
struct nctempchar1 *nctemp4732;
static struct nctempchar1 nctemp4733 = {{ 8}, (char*)"arglist\0"};
nctemp4732=&nctemp4733;
nctempchar1* nctemp4730= nctemp4732;
int nctemp4734=LibeStrcmp(nctemp4725,nctemp4730);
int nctemp4722 = (nctemp4734 ==1);
if(nctemp4722)
{
struct tree* nctemp4740= np;
struct tree* nctemp4742=PtreeMvchild(nctemp4740);
np =nctemp4742;
struct nctempchar1 *nctemp4749;
static struct nctempchar1 nctemp4750 = {{ 9}, (char*)"#arglist\0"};
nctemp4749=&nctemp4750;
nctempchar1* nctemp4747= nctemp4749;
struct symbol* nctemp4751= ltp;
struct symbol* nctemp4753=SymMkname(nctemp4747,nctemp4751);
up =nctemp4753;
struct symbol* nctemp4758=SymMktable();
ftp =nctemp4758;
struct symbol* nctemp4760= up;
struct symbol* nctemp4762= ftp;
struct symbol* nctemp4764=SymSetable(nctemp4760,nctemp4762);
struct tree* nctemp4766= np;
struct symbol* nctemp4768= ftp;
int nctemp4770=SemDeclarations(nctemp4766,nctemp4768);
}
struct tree* nctemp4772= p;
struct symbol* nctemp4774= tp;
int nctemp4776=SemArgtypes(nctemp4772,nctemp4774);
struct symbol* nctemp4778= tp;
int nctemp4780= 1;
int nctemp4782=SymSetemit(nctemp4778,nctemp4780);
struct tree* nctemp4784= sp;
int nctemp4786=SemCompstmnt(nctemp4784);
struct tree* nctemp4788= p;
struct tree* nctemp4790= sp;
int nctemp4792=SemCopyparallel(nctemp4788,nctemp4790);
return 1;
}
int Semisnobody (struct tree* p)
{
struct tree* np;
struct tree* nctemp4798= p;
struct tree* nctemp4800=PtreeMvchild(nctemp4798);
np =nctemp4800;
struct tree* nctemp4806= np;
nctempchar1* nctemp4808=PtreeGetname(nctemp4806);
nctempchar1* nctemp4804= nctemp4808;
struct nctempchar1 *nctemp4811;
static struct nctempchar1 nctemp4812 = {{ 8}, (char*)"arglist\0"};
nctemp4811=&nctemp4812;
nctempchar1* nctemp4809= nctemp4811;
int nctemp4813=LibeStrcmp(nctemp4804,nctemp4809);
int nctemp4801 = (nctemp4813 ==1);
if(nctemp4801)
{
struct tree* nctemp4819= np;
struct tree* nctemp4821=PtreeMvsister(nctemp4819);
np =nctemp4821;
struct tree* nctemp4826= np;
struct tree* nctemp4828=PtreeMvchild(nctemp4826);
np =nctemp4828;
int nctemp4829 = (np ==0);
if(nctemp4829)
{
return 1;
}
else{
return 0;
}
}
else{
struct tree* nctemp4840= np;
nctempchar1* nctemp4842=PtreeGetname(nctemp4840);
nctempchar1* nctemp4838= nctemp4842;
struct nctempchar1 *nctemp4845;
static struct nctempchar1 nctemp4846 = {{ 10}, (char*)"compstmnt\0"};
nctemp4845=&nctemp4846;
nctempchar1* nctemp4843= nctemp4845;
int nctemp4847=LibeStrcmp(nctemp4838,nctemp4843);
int nctemp4835 = (nctemp4847 ==1);
if(nctemp4835)
{
struct tree* nctemp4853= np;
struct tree* nctemp4855=PtreeMvchild(nctemp4853);
np =nctemp4855;
int nctemp4856 = (np ==0);
if(nctemp4856)
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
struct tree* nctemp4866= p;
nctempchar1* nctemp4868=PtreeGetarray(nctemp4866);
nctempchar1* nctemp4864= nctemp4868;
struct nctempchar1 *nctemp4871;
static struct nctempchar1 nctemp4872 = {{ 6}, (char*)"array\0"};
nctemp4871=&nctemp4872;
nctempchar1* nctemp4869= nctemp4871;
int nctemp4873=LibeStrcmp(nctemp4864,nctemp4869);
if(nctemp4873)
{
rank = 1;
struct tree* nctemp4878= p;
struct tree* nctemp4880=PtreeMvchild(nctemp4878);
np =nctemp4880;
struct tree* nctemp4885= np;
struct tree* nctemp4887=PtreeMvchild(nctemp4885);
sp =nctemp4887;
struct tree* nctemp4892= np;
struct tree* nctemp4894=PtreeMvsister(nctemp4892);
np =nctemp4894;
struct tree* nctemp4902= sp;
struct tree* nctemp4904=PtreeMvsister(nctemp4902);
sp =nctemp4904;
int nctemp4895 = (sp !=0);
int nctemp4906=nctemp4895;
while(nctemp4906)
{{
rank = (rank + 1);
}
struct tree* nctemp4914= sp;
struct tree* nctemp4916=PtreeMvsister(nctemp4914);
sp =nctemp4916;
int nctemp4907 = (sp !=0);
nctemp4906=nctemp4907;}}
else{
rank = 0;
struct tree* nctemp4922= p;
struct tree* nctemp4924=PtreeMvchild(nctemp4922);
np =nctemp4924;
}
struct tree* nctemp4926= p;
int nctemp4928= rank;
int nctemp4930=PtreeSetrank(nctemp4926,nctemp4928);
struct tree* nctemp4932= p;
struct tree* nctemp4934= np;
int nctemp4936=SemCopytype(nctemp4932,nctemp4934);
struct tree* nctemp4938= np;
struct tree* nctemp4942= p;
nctempchar1* nctemp4944=PtreeGetdef(nctemp4942);
nctempchar1* nctemp4940= nctemp4944;
int nctemp4945=PtreeSetype(nctemp4938,nctemp4940);
p = np;
nobody = 0;
struct tree* nctemp4949= p;
int nctemp4951=Semisnobody(nctemp4949);
int nctemp4946 = (nctemp4951 ==1);
if(nctemp4946)
{
struct tree* nctemp4954= p;
struct nctempchar1 *nctemp4958;
static struct nctempchar1 nctemp4959 = {{ 5}, (char*)"forw\0"};
nctemp4958=&nctemp4959;
nctempchar1* nctemp4956= nctemp4958;
int nctemp4960=PtreeSetforw(nctemp4954,nctemp4956);
nobody = 1;
}
struct tree* nctemp4970= p;
nctempchar1* nctemp4972=PtreeGetdef(nctemp4970);
nctempchar1* nctemp4968= nctemp4972;
struct symbol* nctemp4973= tp;
struct symbol* nctemp4975=SymMkname(nctemp4968,nctemp4973);
fname =nctemp4975;
int nctemp4961 = (fname ==0);
if(nctemp4961)
{
struct tree* nctemp4983= p;
nctempchar1* nctemp4985=PtreeGetdef(nctemp4983);
nctempchar1* nctemp4981= nctemp4985;
struct symbol* nctemp4986= tp;
struct symbol* nctemp4988=SymLookup(nctemp4981,nctemp4986);
qp =nctemp4988;
struct symbol* nctemp4994= qp;
nctempchar1* nctemp4996=SymGetforw(nctemp4994);
nctempchar1* nctemp4992= nctemp4996;
struct nctempchar1 *nctemp4999;
static struct nctempchar1 nctemp5000 = {{ 5}, (char*)"forw\0"};
nctemp4999=&nctemp5000;
nctempchar1* nctemp4997= nctemp4999;
int nctemp5001=LibeStrcmp(nctemp4992,nctemp4997);
int nctemp4989 = (nctemp5001 !=1);
if(nctemp4989)
{
struct tree* nctemp5004= np;
struct nctempchar1 *nctemp5008;
static struct nctempchar1 nctemp5009 = {{ 25}, (char*)"Function already defined\0"};
nctemp5008=&nctemp5009;
nctempchar1* nctemp5006= nctemp5008;
struct tree* nctemp5012= p;
nctempchar1* nctemp5014=PtreeGetdef(nctemp5012);
nctempchar1* nctemp5010= nctemp5014;
int nctemp5015=SemSerror(nctemp5004,nctemp5006,nctemp5010);
}
else{
struct tree* nctemp5017= p;
struct symbol* nctemp5019= qp;
int nctemp5021=SemFdef2(nctemp5017,nctemp5019);
return 1;
}
}
struct symbol* nctemp5024= fname;
struct tree* nctemp5028= p;
nctempchar1* nctemp5030=PtreeGetype(nctemp5028);
nctempchar1* nctemp5026= nctemp5030;
int nctemp5031=SymSetype(nctemp5024,nctemp5026);
struct symbol* nctemp5033= fname;
struct tree* nctemp5037= p;
nctempchar1* nctemp5039=PtreeGetstruct(nctemp5037);
nctempchar1* nctemp5035= nctemp5039;
int nctemp5040=SymSetstruct(nctemp5033,nctemp5035);
struct symbol* nctemp5042= fname;
struct tree* nctemp5046= p;
nctempchar1* nctemp5048=PtreeGetarray(nctemp5046);
nctempchar1* nctemp5044= nctemp5048;
int nctemp5049=SymSetarray(nctemp5042,nctemp5044);
struct symbol* nctemp5051= fname;
struct tree* nctemp5055= p;
int nctemp5057=PtreeGetrank(nctemp5055);
int nctemp5053= nctemp5057;
int nctemp5058=SymSetrank(nctemp5051,nctemp5053);
struct symbol* nctemp5060= fname;
struct nctempchar1 *nctemp5064;
static struct nctempchar1 nctemp5065 = {{ 5}, (char*)"fdef\0"};
nctemp5064=&nctemp5065;
nctempchar1* nctemp5062= nctemp5064;
int nctemp5066=SymSetfunc(nctemp5060,nctemp5062);
int nctemp5067 = (nobody ==1);
if(nctemp5067)
{
struct symbol* nctemp5072= fname;
struct nctempchar1 *nctemp5076;
static struct nctempchar1 nctemp5077 = {{ 5}, (char*)"forw\0"};
nctemp5076=&nctemp5077;
nctempchar1* nctemp5074= nctemp5076;
int nctemp5078=SymSetforw(nctemp5072,nctemp5074);
}
struct tree* nctemp5083= p;
struct tree* nctemp5085=PtreeMvchild(nctemp5083);
np =nctemp5085;
struct symbol* nctemp5090=SymMktable();
ltp =nctemp5090;
struct symbol* nctemp5092= ltp;
int nctemp5094=SymSetltp(nctemp5092);
struct nctempchar1 *nctemp5101;
static struct nctempchar1 nctemp5102 = {{ 6}, (char*)"#self\0"};
nctemp5101=&nctemp5102;
nctempchar1* nctemp5099= nctemp5101;
struct symbol* nctemp5103= ltp;
struct symbol* nctemp5105=SymMkname(nctemp5099,nctemp5103);
up =nctemp5105;
struct symbol* nctemp5107= up;
struct tree* nctemp5111= p;
nctempchar1* nctemp5113=PtreeGetdef(nctemp5111);
nctempchar1* nctemp5109= nctemp5113;
int nctemp5114=SymSetfunc(nctemp5107,nctemp5109);
struct tree* nctemp5120= np;
nctempchar1* nctemp5122=PtreeGetname(nctemp5120);
nctempchar1* nctemp5118= nctemp5122;
struct nctempchar1 *nctemp5125;
static struct nctempchar1 nctemp5126 = {{ 8}, (char*)"arglist\0"};
nctemp5125=&nctemp5126;
nctempchar1* nctemp5123= nctemp5125;
int nctemp5127=LibeStrcmp(nctemp5118,nctemp5123);
int nctemp5115 = (nctemp5127 ==1);
if(nctemp5115)
{
struct tree* nctemp5133= np;
struct tree* nctemp5135=PtreeMvsister(nctemp5133);
sp =nctemp5135;
}
else{
sp = np;
}
struct tree* nctemp5141= np;
nctempchar1* nctemp5143=PtreeGetname(nctemp5141);
nctempchar1* nctemp5139= nctemp5143;
struct nctempchar1 *nctemp5146;
static struct nctempchar1 nctemp5147 = {{ 8}, (char*)"arglist\0"};
nctemp5146=&nctemp5147;
nctempchar1* nctemp5144= nctemp5146;
int nctemp5148=LibeStrcmp(nctemp5139,nctemp5144);
int nctemp5136 = (nctemp5148 ==1);
if(nctemp5136)
{
struct tree* nctemp5154= np;
struct tree* nctemp5156=PtreeMvchild(nctemp5154);
np =nctemp5156;
struct nctempchar1 *nctemp5163;
static struct nctempchar1 nctemp5164 = {{ 9}, (char*)"#arglist\0"};
nctemp5163=&nctemp5164;
nctempchar1* nctemp5161= nctemp5163;
struct symbol* nctemp5165= ltp;
struct symbol* nctemp5167=SymMkname(nctemp5161,nctemp5165);
up =nctemp5167;
struct symbol* nctemp5172=SymMktable();
ftp =nctemp5172;
struct symbol* nctemp5174= up;
struct symbol* nctemp5176= ftp;
struct symbol* nctemp5178=SymSetable(nctemp5174,nctemp5176);
struct tree* nctemp5180= np;
struct symbol* nctemp5182= ftp;
int nctemp5184=SemDeclarations(nctemp5180,nctemp5182);
struct symbol* nctemp5189=SymMktable();
fsub =nctemp5189;
struct symbol* nctemp5191= fname;
struct symbol* nctemp5193= fsub;
struct symbol* nctemp5195=SymSetable(nctemp5191,nctemp5193);
struct nctempchar1 *nctemp5202;
static struct nctempchar1 nctemp5203 = {{ 9}, (char*)"#arglist\0"};
nctemp5202=&nctemp5203;
nctempchar1* nctemp5200= nctemp5202;
struct symbol* nctemp5204= fsub;
struct symbol* nctemp5206=SymMkname(nctemp5200,nctemp5204);
arg =nctemp5206;
struct symbol* nctemp5211=SymMktable();
argsub =nctemp5211;
struct symbol* nctemp5213= arg;
struct symbol* nctemp5215= argsub;
struct symbol* nctemp5217=SymSetable(nctemp5213,nctemp5215);
struct symbol* nctemp5219= ftp;
struct symbol* nctemp5221= argsub;
int nctemp5223=SymCpytble(nctemp5219,nctemp5221);
}
struct tree* nctemp5225= sp;
int nctemp5227=SemCompstmnt(nctemp5225);
struct tree* nctemp5229= p;
struct tree* nctemp5231= sp;
int nctemp5233=SemCopyparallel(nctemp5229,nctemp5231);
return 1;
}
int SemExtdecl (struct tree* p)
{
struct tree* sp;
struct tree* np;
struct tree* nctemp5238= p;
nctempchar1* nctemp5240=PtreeGetname(nctemp5238);
nctempchar1* nctemp5236= nctemp5240;
struct nctempchar1 *nctemp5243;
static struct nctempchar1 nctemp5244 = {{ 8}, (char*)"extdecl\0"};
nctemp5243=&nctemp5244;
nctempchar1* nctemp5241= nctemp5243;
int nctemp5245=LibeStrcmp(nctemp5236,nctemp5241);
if(nctemp5245)
{
struct tree* nctemp5250= p;
struct tree* nctemp5252=PtreeMvchild(nctemp5250);
np =nctemp5252;
struct tree* nctemp5254= np;
struct nctempchar1 *nctemp5258;
static struct nctempchar1 nctemp5259 = {{ 7}, (char*)"global\0"};
nctemp5258=&nctemp5259;
nctempchar1* nctemp5256= nctemp5258;
int nctemp5260=PtreeSetglobal(nctemp5254,nctemp5256);
struct tree* nctemp5266= np;
nctempchar1* nctemp5268=PtreeGetname(nctemp5266);
nctempchar1* nctemp5264= nctemp5268;
struct nctempchar1 *nctemp5271;
static struct nctempchar1 nctemp5272 = {{ 7}, (char*)"import\0"};
nctemp5271=&nctemp5272;
nctempchar1* nctemp5269= nctemp5271;
int nctemp5273=LibeStrcmp(nctemp5264,nctemp5269);
int nctemp5261 = (nctemp5273 ==1);
if(nctemp5261)
{
struct tree* nctemp5276= np;
struct symbol* nctemp5280=SymGetetp();
struct symbol* nctemp5278= nctemp5280;
int nctemp5281=SemImport(nctemp5276,nctemp5278);
return 1;
}
int nctemp5283 = (np !=0);
int nctemp5287=nctemp5283;
while(nctemp5287)
{{
struct tree* nctemp5292= np;
struct tree* nctemp5294=PtreeMvchild(nctemp5292);
sp =nctemp5294;
struct tree* nctemp5298= np;
nctempchar1* nctemp5300=PtreeGetarray(nctemp5298);
nctempchar1* nctemp5296= nctemp5300;
struct nctempchar1 *nctemp5303;
static struct nctempchar1 nctemp5304 = {{ 6}, (char*)"array\0"};
nctemp5303=&nctemp5304;
nctempchar1* nctemp5301= nctemp5303;
int nctemp5305=LibeStrcmp(nctemp5296,nctemp5301);
if(nctemp5305)
{
struct tree* nctemp5310= sp;
struct tree* nctemp5312=PtreeMvsister(nctemp5310);
sp =nctemp5312;
}
struct tree* nctemp5316= sp;
nctempchar1* nctemp5318=PtreeGetname(nctemp5316);
nctempchar1* nctemp5314= nctemp5318;
struct nctempchar1 *nctemp5321;
static struct nctempchar1 nctemp5322 = {{ 10}, (char*)"structdec\0"};
nctemp5321=&nctemp5322;
nctempchar1* nctemp5319= nctemp5321;
int nctemp5323=LibeStrcmp(nctemp5314,nctemp5319);
if(nctemp5323)
{
struct tree* nctemp5325= np;
struct symbol* nctemp5329=SymGetetp();
struct symbol* nctemp5327= nctemp5329;
int nctemp5330=SemStructdecl(nctemp5325,nctemp5327);
}
else{
struct tree* nctemp5334= sp;
nctempchar1* nctemp5336=PtreeGetname(nctemp5334);
nctempchar1* nctemp5332= nctemp5336;
struct nctempchar1 *nctemp5339;
static struct nctempchar1 nctemp5340 = {{ 5}, (char*)"fdef\0"};
nctemp5339=&nctemp5340;
nctempchar1* nctemp5337= nctemp5339;
int nctemp5341=LibeStrcmp(nctemp5332,nctemp5337);
if(nctemp5341)
{
struct tree* nctemp5343= np;
struct symbol* nctemp5347=SymGetetp();
struct symbol* nctemp5345= nctemp5347;
int nctemp5348=SemFdef(nctemp5343,nctemp5345);
}
else{
struct tree* nctemp5350= np;
struct symbol* nctemp5354=SymGetetp();
struct symbol* nctemp5352= nctemp5354;
int nctemp5355=SemDeclaration(nctemp5350,nctemp5352);
}
}
struct tree* nctemp5360= np;
struct tree* nctemp5362=PtreeMvsister(nctemp5360);
np =nctemp5362;
}
int nctemp5363 = (np !=0);
nctemp5287=nctemp5363;}}
return 1;
}
int SemSem (struct tree* p,struct symbol* tp)
{
struct symbol* ltp;
struct symbol* nctemp5369= tp;
int nctemp5371=SymSetetp(nctemp5369);
ltp = 0;
struct symbol* nctemp5373= ltp;
int nctemp5375=SymSetltp(nctemp5373);
int nctemp5377= 0;
int nctemp5379=SemSetsimple(nctemp5377);
struct tree* nctemp5381= p;
int nctemp5383=SemExtdecl(nctemp5381);
return 1;
}
int SemWhilestmnt (struct tree* p)
{
struct tree* q;
q = p;
struct tree* nctemp5389= p;
struct tree* nctemp5391=PtreeMvchild(nctemp5389);
p =nctemp5391;
struct tree* nctemp5393= p;
struct tree* nctemp5395=SemExpr(nctemp5393);
struct tree* nctemp5397= p;
int nctemp5399= 1;
int nctemp5401=PtreeSetopexpr(nctemp5397,nctemp5399);
struct tree* nctemp5406= p;
struct tree* nctemp5408=PtreeMvsister(nctemp5406);
p =nctemp5408;
struct tree* nctemp5410= p;
int nctemp5412=SemStmnt(nctemp5410);
struct tree* nctemp5414= q;
struct tree* nctemp5416= p;
int nctemp5418=SemCopyparallel(nctemp5414,nctemp5416);
return 1;
}
int SemForstmnt (struct tree* p)
{
struct tree* q;
q = p;
struct tree* nctemp5424= p;
struct tree* nctemp5426=PtreeMvchild(nctemp5424);
p =nctemp5426;
struct tree* nctemp5428= p;
int nctemp5430= 1;
int nctemp5432=PtreeSetopexpr(nctemp5428,nctemp5430);
int nctemp5434= 1;
int nctemp5436=SemSetsimple(nctemp5434);
struct tree* nctemp5438= p;
struct tree* nctemp5440=SemExpr(nctemp5438);
struct tree* nctemp5445= p;
struct tree* nctemp5447=PtreeMvsister(nctemp5445);
p =nctemp5447;
struct tree* nctemp5449= p;
int nctemp5451= 1;
int nctemp5453=PtreeSetopexpr(nctemp5449,nctemp5451);
int nctemp5455= 1;
int nctemp5457=SemSetsimple(nctemp5455);
struct tree* nctemp5459= p;
struct tree* nctemp5461=SemExpr(nctemp5459);
struct tree* nctemp5466= p;
struct tree* nctemp5468=PtreeMvsister(nctemp5466);
p =nctemp5468;
struct tree* nctemp5470= p;
int nctemp5472= 1;
int nctemp5474=PtreeSetopexpr(nctemp5470,nctemp5472);
int nctemp5476= 1;
int nctemp5478=SemSetsimple(nctemp5476);
struct tree* nctemp5480= p;
struct tree* nctemp5482=SemExpr(nctemp5480);
struct tree* nctemp5487= p;
struct tree* nctemp5489=PtreeMvsister(nctemp5487);
p =nctemp5489;
struct tree* nctemp5491= p;
int nctemp5493=SemStmnt(nctemp5491);
struct tree* nctemp5495= q;
struct tree* nctemp5497= p;
int nctemp5499=SemCopyparallel(nctemp5495,nctemp5497);
return 1;
}
int SemParallelstmnt (struct tree* p)
{
struct tree* sp;
struct tree* rp;
int rank;
rank = 0;
struct tree* nctemp5505= p;
struct tree* nctemp5507=PtreeMvchild(nctemp5505);
sp =nctemp5507;
struct tree* nctemp5512= sp;
struct tree* nctemp5514=PtreeMvchild(nctemp5512);
sp =nctemp5514;
int nctemp5515 = (sp !=0);
int nctemp5519=nctemp5515;
while(nctemp5519)
{{
struct tree* nctemp5524= sp;
struct tree* nctemp5526=PtreeMvchild(nctemp5524);
rp =nctemp5526;
struct tree* nctemp5528= rp;
struct tree* nctemp5530=SemExpr(nctemp5528);
struct tree* nctemp5532= rp;
int nctemp5534= 1;
int nctemp5536=PtreeSetopexpr(nctemp5532,nctemp5534);
struct tree* nctemp5541= rp;
struct tree* nctemp5543=PtreeMvsister(nctemp5541);
rp =nctemp5543;
struct tree* nctemp5545= rp;
struct tree* nctemp5547=SemExpr(nctemp5545);
struct tree* nctemp5549= rp;
int nctemp5551= 1;
int nctemp5553=PtreeSetopexpr(nctemp5549,nctemp5551);
struct tree* nctemp5561= rp;
struct tree* nctemp5563=PtreeMvsister(nctemp5561);
rp =nctemp5563;
int nctemp5554 = (rp !=0);
if(nctemp5554)
{
struct tree* nctemp5566= rp;
struct tree* nctemp5568=SemExpr(nctemp5566);
struct tree* nctemp5570= rp;
int nctemp5572= 1;
int nctemp5574=PtreeSetopexpr(nctemp5570,nctemp5572);
}
struct tree* nctemp5578= sp;
struct tree* nctemp5580=PtreeMvsister(nctemp5578);
int nctemp5575 = (nctemp5580 !=0);
if(nctemp5575)
{
struct tree* nctemp5586= sp;
struct tree* nctemp5588=PtreeMvsister(nctemp5586);
rp =nctemp5588;
}
struct tree* nctemp5593= sp;
struct tree* nctemp5595=PtreeMvsister(nctemp5593);
sp =nctemp5595;
rank = (rank + 1);
}
int nctemp5596 = (sp !=0);
nctemp5519=nctemp5596;}struct tree* nctemp5601= p;
int nctemp5603= rank;
int nctemp5605=PtreeSetrank(nctemp5601,nctemp5603);
struct tree* nctemp5610= p;
struct tree* nctemp5612=PtreeMvchild(nctemp5610);
sp =nctemp5612;
struct tree* nctemp5617= sp;
struct tree* nctemp5619=PtreeMvsister(nctemp5617);
sp =nctemp5619;
struct tree* nctemp5621= sp;
int nctemp5623=SemStmnt(nctemp5621);
return 1;
}
int SemIfstmnt (struct tree* p)
{
struct tree* q;
q = p;
struct tree* nctemp5629= p;
struct tree* nctemp5631=PtreeMvchild(nctemp5629);
p =nctemp5631;
struct tree* nctemp5633= p;
struct tree* nctemp5635=SemExpr(nctemp5633);
struct tree* nctemp5637= p;
int nctemp5639= 1;
int nctemp5641=PtreeSetopexpr(nctemp5637,nctemp5639);
struct tree* nctemp5646= p;
struct tree* nctemp5648=PtreeMvsister(nctemp5646);
p =nctemp5648;
struct tree* nctemp5650= p;
int nctemp5652=SemStmnt(nctemp5650);
struct tree* nctemp5654= q;
struct tree* nctemp5656= p;
int nctemp5658=SemCopyparallel(nctemp5654,nctemp5656);
struct tree* nctemp5666= p;
struct tree* nctemp5668=PtreeMvsister(nctemp5666);
p =nctemp5668;
int nctemp5659 = (p !=0);
if(nctemp5659)
{
struct tree* nctemp5673= p;
nctempchar1* nctemp5675=PtreeGetname(nctemp5673);
nctempchar1* nctemp5671= nctemp5675;
struct nctempchar1 *nctemp5678;
static struct nctempchar1 nctemp5679 = {{ 5}, (char*)"else\0"};
nctemp5678=&nctemp5679;
nctempchar1* nctemp5676= nctemp5678;
int nctemp5680=LibeStrcmp(nctemp5671,nctemp5676);
if(nctemp5680)
{
struct tree* nctemp5685= p;
struct tree* nctemp5687=PtreeMvchild(nctemp5685);
p =nctemp5687;
struct tree* nctemp5689= p;
int nctemp5691=SemStmnt(nctemp5689);
}
}
return 1;
}
int SemReturnstmnt (struct tree* p)
{
struct tree* sp;
struct symbol* up;
struct tree* nctemp5697= p;
struct tree* nctemp5699=PtreeMvchild(nctemp5697);
sp =nctemp5699;
int nctemp5700 = (sp !=0);
if(nctemp5700)
{
struct tree* nctemp5705= sp;
struct tree* nctemp5707=SemExpr(nctemp5705);
struct tree* nctemp5709= sp;
int nctemp5711= 1;
int nctemp5713=PtreeSetopexpr(nctemp5709,nctemp5711);
struct nctempchar1 *nctemp5720;
static struct nctempchar1 nctemp5721 = {{ 6}, (char*)"#self\0"};
nctemp5720=&nctemp5721;
nctempchar1* nctemp5718= nctemp5720;
struct symbol* nctemp5724=SymGetltp();
struct symbol* nctemp5722= nctemp5724;
struct symbol* nctemp5725=SymLookup(nctemp5718,nctemp5722);
up =nctemp5725;
struct symbol* nctemp5732= up;
nctempchar1* nctemp5734=SymGetfunc(nctemp5732);
nctempchar1* nctemp5730= nctemp5734;
struct symbol* nctemp5735=SymLook(nctemp5730);
up =nctemp5735;
struct tree* nctemp5737= p;
struct symbol* nctemp5741= up;
nctempchar1* nctemp5743=SymGetype(nctemp5741);
nctempchar1* nctemp5739= nctemp5743;
int nctemp5744=PtreeSetype(nctemp5737,nctemp5739);
struct tree* nctemp5746= p;
struct symbol* nctemp5750= up;
nctempchar1* nctemp5752=SymGetstruct(nctemp5750);
nctempchar1* nctemp5748= nctemp5752;
int nctemp5753=PtreeSetstruct(nctemp5746,nctemp5748);
struct tree* nctemp5755= p;
struct symbol* nctemp5759= up;
nctempchar1* nctemp5761=SymGetarray(nctemp5759);
nctempchar1* nctemp5757= nctemp5761;
int nctemp5762=PtreeSetarray(nctemp5755,nctemp5757);
struct tree* nctemp5764= p;
struct tree* nctemp5768= sp;
nctempchar1* nctemp5770=PtreeGetref(nctemp5768);
nctempchar1* nctemp5766= nctemp5770;
int nctemp5771=PtreeSetref(nctemp5764,nctemp5766);
struct tree* nctemp5773= p;
struct symbol* nctemp5777= up;
int nctemp5779=SymGetrank(nctemp5777);
int nctemp5775= nctemp5779;
int nctemp5780=PtreeSetrank(nctemp5773,nctemp5775);
struct tree* nctemp5784= p;
struct tree* nctemp5786= sp;
int nctemp5788=SemComparetype(nctemp5784,nctemp5786);
int nctemp5781 = (nctemp5788 ==0);
if(nctemp5781)
{
struct tree* nctemp5791= p;
struct nctempchar1 *nctemp5795;
static struct nctempchar1 nctemp5796 = {{ 26}, (char*)"Return type is incorrect \0"};
nctemp5795=&nctemp5796;
nctempchar1* nctemp5793= nctemp5795;
struct nctempchar1 *nctemp5799;
static struct nctempchar1 nctemp5800 = {{ 2}, (char*)" \0"};
nctemp5799=&nctemp5800;
nctempchar1* nctemp5797= nctemp5799;
int nctemp5801=SemSerror(nctemp5791,nctemp5793,nctemp5797);
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
struct tree* nctemp5806= p;
nctempchar1* nctemp5808=PtreeGetname(nctemp5806);
nctempchar1* nctemp5804= nctemp5808;
struct nctempchar1 *nctemp5811;
static struct nctempchar1 nctemp5812 = {{ 13}, (char*)"declarations\0"};
nctemp5811=&nctemp5812;
nctempchar1* nctemp5809= nctemp5811;
int nctemp5813=LibeStrcmp(nctemp5804,nctemp5809);
if(nctemp5813)
{
struct tree* nctemp5815= p;
struct symbol* nctemp5819=SymGetltp();
struct symbol* nctemp5817= nctemp5819;
int nctemp5820=SemDeclarations(nctemp5815,nctemp5817);
struct tree* nctemp5825= p;
struct tree* nctemp5827=PtreeMvsister(nctemp5825);
p =nctemp5827;
}
int nctemp5828 = (p !=0);
int nctemp5832=nctemp5828;
while(nctemp5832)
{{
struct tree* nctemp5836= p;
nctempchar1* nctemp5838=PtreeGetname(nctemp5836);
nctempchar1* nctemp5834= nctemp5838;
struct nctempchar1 *nctemp5841;
static struct nctempchar1 nctemp5842 = {{ 5}, (char*)"expr\0"};
nctemp5841=&nctemp5842;
nctempchar1* nctemp5839= nctemp5841;
int nctemp5843=LibeStrcmp(nctemp5834,nctemp5839);
if(nctemp5843)
{
struct tree* nctemp5845= p;
int nctemp5847= 1;
int nctemp5849=PtreeSetopexpr(nctemp5845,nctemp5847);
int nctemp5851= 1;
int nctemp5853=SemSetsimple(nctemp5851);
struct tree* nctemp5855= p;
struct tree* nctemp5857=SemExpr(nctemp5855);
struct tree* nctemp5859= p;
int nctemp5861= 1;
int nctemp5863=PtreeSetopexpr(nctemp5859,nctemp5861);
}
struct tree* nctemp5867= p;
nctempchar1* nctemp5869=PtreeGetname(nctemp5867);
nctempchar1* nctemp5865= nctemp5869;
struct nctempchar1 *nctemp5872;
static struct nctempchar1 nctemp5873 = {{ 10}, (char*)"compstmnt\0"};
nctemp5872=&nctemp5873;
nctempchar1* nctemp5870= nctemp5872;
int nctemp5874=LibeStrcmp(nctemp5865,nctemp5870);
if(nctemp5874)
{
struct tree* nctemp5876= p;
int nctemp5878=SemCompstmnt(nctemp5876);
}
struct tree* nctemp5882= p;
nctempchar1* nctemp5884=PtreeGetname(nctemp5882);
nctempchar1* nctemp5880= nctemp5884;
struct nctempchar1 *nctemp5887;
static struct nctempchar1 nctemp5888 = {{ 6}, (char*)"while\0"};
nctemp5887=&nctemp5888;
nctempchar1* nctemp5885= nctemp5887;
int nctemp5889=LibeStrcmp(nctemp5880,nctemp5885);
if(nctemp5889)
{
struct tree* nctemp5891= p;
int nctemp5893=SemWhilestmnt(nctemp5891);
}
struct tree* nctemp5897= p;
nctempchar1* nctemp5899=PtreeGetname(nctemp5897);
nctempchar1* nctemp5895= nctemp5899;
struct nctempchar1 *nctemp5902;
static struct nctempchar1 nctemp5903 = {{ 4}, (char*)"for\0"};
nctemp5902=&nctemp5903;
nctempchar1* nctemp5900= nctemp5902;
int nctemp5904=LibeStrcmp(nctemp5895,nctemp5900);
if(nctemp5904)
{
struct tree* nctemp5906= p;
int nctemp5908=SemForstmnt(nctemp5906);
}
struct tree* nctemp5912= p;
nctempchar1* nctemp5914=PtreeGetname(nctemp5912);
nctempchar1* nctemp5910= nctemp5914;
struct nctempchar1 *nctemp5917;
static struct nctempchar1 nctemp5918 = {{ 9}, (char*)"parallel\0"};
nctemp5917=&nctemp5918;
nctempchar1* nctemp5915= nctemp5917;
int nctemp5919=LibeStrcmp(nctemp5910,nctemp5915);
if(nctemp5919)
{
parflag = 1;
}
struct tree* nctemp5923= p;
nctempchar1* nctemp5925=PtreeGetname(nctemp5923);
nctempchar1* nctemp5921= nctemp5925;
struct nctempchar1 *nctemp5928;
static struct nctempchar1 nctemp5929 = {{ 3}, (char*)"if\0"};
nctemp5928=&nctemp5929;
nctempchar1* nctemp5926= nctemp5928;
int nctemp5930=LibeStrcmp(nctemp5921,nctemp5926);
if(nctemp5930)
{
struct tree* nctemp5932= p;
int nctemp5934=SemIfstmnt(nctemp5932);
}
struct tree* nctemp5938= p;
nctempchar1* nctemp5940=PtreeGetname(nctemp5938);
nctempchar1* nctemp5936= nctemp5940;
struct nctempchar1 *nctemp5943;
static struct nctempchar1 nctemp5944 = {{ 7}, (char*)"return\0"};
nctemp5943=&nctemp5944;
nctempchar1* nctemp5941= nctemp5943;
int nctemp5945=LibeStrcmp(nctemp5936,nctemp5941);
if(nctemp5945)
{
struct tree* nctemp5947= p;
int nctemp5949=SemReturnstmnt(nctemp5947);
}
struct tree* nctemp5954= p;
struct tree* nctemp5956=PtreeMvsister(nctemp5954);
p =nctemp5956;
}
int nctemp5957 = (p !=0);
nctemp5832=nctemp5957;}int nctemp5961 = (parflag ==1);
if(nctemp5961)
{
struct tree* nctemp5966= q;
struct nctempchar1 *nctemp5970;
static struct nctempchar1 nctemp5971 = {{ 9}, (char*)"parallel\0"};
nctemp5970=&nctemp5971;
nctempchar1* nctemp5968= nctemp5970;
int nctemp5972=PtreeSetparallel(nctemp5966,nctemp5968);
}
return 1;
}
int SemCompstmnt (struct tree* p)
{
struct tree* q;
int parflag;
parflag = 0;
q = p;
struct tree* nctemp5978= p;
struct tree* nctemp5980=PtreeMvchild(nctemp5978);
p =nctemp5980;
int nctemp5981 = (p ==0);
if(nctemp5981)
{
return 1;
}
struct tree* nctemp5989= p;
nctempchar1* nctemp5991=PtreeGetname(nctemp5989);
nctempchar1* nctemp5987= nctemp5991;
struct nctempchar1 *nctemp5994;
static struct nctempchar1 nctemp5995 = {{ 13}, (char*)"declarations\0"};
nctemp5994=&nctemp5995;
nctempchar1* nctemp5992= nctemp5994;
int nctemp5996=LibeStrcmp(nctemp5987,nctemp5992);
if(nctemp5996)
{
struct tree* nctemp6000= p;
struct tree* nctemp6002=PtreeMvchild(nctemp6000);
struct tree* nctemp5998= nctemp6002;
struct symbol* nctemp6005=SymGetltp();
struct symbol* nctemp6003= nctemp6005;
int nctemp6006=SemDeclarations(nctemp5998,nctemp6003);
struct tree* nctemp6011= p;
struct tree* nctemp6013=PtreeMvsister(nctemp6011);
p =nctemp6013;
}
int nctemp6014 = (p !=0);
int nctemp6018=nctemp6014;
while(nctemp6018)
{{
struct tree* nctemp6022= p;
nctempchar1* nctemp6024=PtreeGetname(nctemp6022);
nctempchar1* nctemp6020= nctemp6024;
struct nctempchar1 *nctemp6027;
static struct nctempchar1 nctemp6028 = {{ 5}, (char*)"expr\0"};
nctemp6027=&nctemp6028;
nctempchar1* nctemp6025= nctemp6027;
int nctemp6029=LibeStrcmp(nctemp6020,nctemp6025);
if(nctemp6029)
{
struct tree* nctemp6031= p;
int nctemp6033= 1;
int nctemp6035=PtreeSetopexpr(nctemp6031,nctemp6033);
int nctemp6037= 1;
int nctemp6039=SemSetsimple(nctemp6037);
struct tree* nctemp6041= p;
struct tree* nctemp6043=SemExpr(nctemp6041);
}
struct tree* nctemp6047= p;
nctempchar1* nctemp6049=PtreeGetname(nctemp6047);
nctempchar1* nctemp6045= nctemp6049;
struct nctempchar1 *nctemp6052;
static struct nctempchar1 nctemp6053 = {{ 6}, (char*)"while\0"};
nctemp6052=&nctemp6053;
nctempchar1* nctemp6050= nctemp6052;
int nctemp6054=LibeStrcmp(nctemp6045,nctemp6050);
if(nctemp6054)
{
struct tree* nctemp6056= p;
int nctemp6058=SemWhilestmnt(nctemp6056);
}
struct tree* nctemp6062= p;
nctempchar1* nctemp6064=PtreeGetname(nctemp6062);
nctempchar1* nctemp6060= nctemp6064;
struct nctempchar1 *nctemp6067;
static struct nctempchar1 nctemp6068 = {{ 4}, (char*)"for\0"};
nctemp6067=&nctemp6068;
nctempchar1* nctemp6065= nctemp6067;
int nctemp6069=LibeStrcmp(nctemp6060,nctemp6065);
if(nctemp6069)
{
struct tree* nctemp6071= p;
int nctemp6073=SemForstmnt(nctemp6071);
}
struct tree* nctemp6077= p;
nctempchar1* nctemp6079=PtreeGetname(nctemp6077);
nctempchar1* nctemp6075= nctemp6079;
struct nctempchar1 *nctemp6082;
static struct nctempchar1 nctemp6083 = {{ 9}, (char*)"parallel\0"};
nctemp6082=&nctemp6083;
nctempchar1* nctemp6080= nctemp6082;
int nctemp6084=LibeStrcmp(nctemp6075,nctemp6080);
if(nctemp6084)
{
struct tree* nctemp6086= p;
int nctemp6088=SemParallelstmnt(nctemp6086);
struct tree* nctemp6090= p;
struct nctempchar1 *nctemp6094;
static struct nctempchar1 nctemp6095 = {{ 9}, (char*)"parallel\0"};
nctemp6094=&nctemp6095;
nctempchar1* nctemp6092= nctemp6094;
int nctemp6096=PtreeSetparallel(nctemp6090,nctemp6092);
}
struct tree* nctemp6100= p;
nctempchar1* nctemp6102=PtreeGetname(nctemp6100);
nctempchar1* nctemp6098= nctemp6102;
struct nctempchar1 *nctemp6105;
static struct nctempchar1 nctemp6106 = {{ 3}, (char*)"if\0"};
nctemp6105=&nctemp6106;
nctempchar1* nctemp6103= nctemp6105;
int nctemp6107=LibeStrcmp(nctemp6098,nctemp6103);
if(nctemp6107)
{
struct tree* nctemp6109= p;
int nctemp6111=SemIfstmnt(nctemp6109);
}
struct tree* nctemp6115= p;
nctempchar1* nctemp6117=PtreeGetname(nctemp6115);
nctempchar1* nctemp6113= nctemp6117;
struct nctempchar1 *nctemp6120;
static struct nctempchar1 nctemp6121 = {{ 7}, (char*)"return\0"};
nctemp6120=&nctemp6121;
nctempchar1* nctemp6118= nctemp6120;
int nctemp6122=LibeStrcmp(nctemp6113,nctemp6118);
if(nctemp6122)
{
struct tree* nctemp6124= p;
int nctemp6126=SemReturnstmnt(nctemp6124);
}
struct tree* nctemp6130= p;
nctempchar1* nctemp6132=PtreeGetparallel(nctemp6130);
nctempchar1* nctemp6128= nctemp6132;
struct nctempchar1 *nctemp6135;
static struct nctempchar1 nctemp6136 = {{ 9}, (char*)"parallel\0"};
nctemp6135=&nctemp6136;
nctempchar1* nctemp6133= nctemp6135;
int nctemp6137=LibeStrcmp(nctemp6128,nctemp6133);
if(nctemp6137)
{
parflag = 1;
}
struct tree* nctemp6142= p;
struct tree* nctemp6144=PtreeMvsister(nctemp6142);
p =nctemp6144;
}
int nctemp6145 = (p !=0);
nctemp6018=nctemp6145;}int nctemp6149 = (parflag ==1);
if(nctemp6149)
{
struct tree* nctemp6154= q;
struct nctempchar1 *nctemp6158;
static struct nctempchar1 nctemp6159 = {{ 9}, (char*)"parallel\0"};
nctemp6158=&nctemp6159;
nctempchar1* nctemp6156= nctemp6158;
int nctemp6160=PtreeSetparallel(nctemp6154,nctemp6156);
}
return 1;
}
