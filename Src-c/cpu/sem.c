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
int SemSimple;
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
int SemDeclaration (struct tree* p,struct symbol* tp)
{
struct tree* np;
struct tree* sp;
struct symbol* up;
int rank;
int l;
nctempchar1 *s;
nctempchar1 *global;
struct tree* nctemp144= p;
struct tree* nctemp148= p;
nctempchar1* nctemp150=PtreeGetdef(nctemp148);
nctempchar1* nctemp146= nctemp150;
int nctemp151=PtreeSetype(nctemp144,nctemp146);
struct tree* nctemp157= p;
nctempchar1* nctemp159=PtreeGetglobal(nctemp157);
global=nctemp159;
rank = 0;
struct tree* nctemp163= p;
nctempchar1* nctemp165=PtreeGetarray(nctemp163);
nctempchar1* nctemp161= nctemp165;
struct nctempchar1 *nctemp168;
static struct nctempchar1 nctemp169 = {{ 6}, (char*)"array\0"};
nctemp168=&nctemp169;
nctempchar1* nctemp166= nctemp168;
int nctemp170=LibeStrcmp(nctemp161,nctemp166);
if(nctemp170)
{
struct tree* nctemp175= p;
struct tree* nctemp177=PtreeMvchild(nctemp175);
np =nctemp177;
struct tree* nctemp182= np;
struct tree* nctemp184=PtreeMvchild(nctemp182);
np =nctemp184;
rank =1;
struct tree* nctemp196= np;
struct tree* nctemp198=PtreeMvsister(nctemp196);
np =nctemp198;
int nctemp189 = (np !=0);
int nctemp200=nctemp189;
while(nctemp200)
{{
int nctemp209 = rank + 1;
rank =nctemp209;
}
struct tree* nctemp217= np;
struct tree* nctemp219=PtreeMvsister(nctemp217);
np =nctemp219;
int nctemp210 = (np !=0);
nctemp200=nctemp210;}struct tree* nctemp225= p;
struct tree* nctemp227=PtreeMvchild(nctemp225);
np =nctemp227;
struct tree* nctemp232= np;
struct tree* nctemp234=PtreeMvsister(nctemp232);
np =nctemp234;
}
else{
struct tree* nctemp239= p;
struct tree* nctemp241=PtreeMvchild(nctemp239);
np =nctemp241;
}
int nctemp242 = (np !=0);
int nctemp246=nctemp242;
while(nctemp246)
{{
struct tree* nctemp248= np;
struct tree* nctemp252= p;
nctempchar1* nctemp254=PtreeGetype(nctemp252);
nctempchar1* nctemp250= nctemp254;
int nctemp255=PtreeSetype(nctemp248,nctemp250);
struct tree* nctemp265= np;
nctempchar1* nctemp267=PtreeGetdef(nctemp265);
nctempchar1* nctemp263= nctemp267;
struct symbol* nctemp268= tp;
struct symbol* nctemp270=SymMkname(nctemp263,nctemp268);
up =nctemp270;
int nctemp256 = (up ==0);
if(nctemp256)
{
struct tree* nctemp273= np;
struct nctempchar1 *nctemp277;
static struct nctempchar1 nctemp278 = {{ 21}, (char*)"Multiple declaration\0"};
nctemp277=&nctemp278;
nctempchar1* nctemp275= nctemp277;
struct tree* nctemp281= np;
nctempchar1* nctemp283=PtreeGetdef(nctemp281);
nctempchar1* nctemp279= nctemp283;
int nctemp284=SemSerror(nctemp273,nctemp275,nctemp279);
}
else{
struct symbol* nctemp286= up;
struct nctempchar1 *nctemp290;
static struct nctempchar1 nctemp291 = {{ 11}, (char*)"identifier\0"};
nctemp290=&nctemp291;
nctempchar1* nctemp288= nctemp290;
int nctemp292=SymSetident(nctemp286,nctemp288);
struct symbol* nctemp294= up;
struct tree* nctemp298= p;
nctempchar1* nctemp300=PtreeGetype(nctemp298);
nctempchar1* nctemp296= nctemp300;
int nctemp301=SymSetype(nctemp294,nctemp296);
nctempchar1* nctemp305= global;
struct nctempchar1 *nctemp310;
static struct nctempchar1 nctemp311 = {{ 7}, (char*)"global\0"};
nctemp310=&nctemp311;
nctempchar1* nctemp308= nctemp310;
int nctemp312=LibeStrcmp(nctemp305,nctemp308);
int nctemp302 = (nctemp312 ==1);
if(nctemp302)
{
struct symbol* nctemp315= up;
struct nctempchar1 *nctemp319;
static struct nctempchar1 nctemp320 = {{ 7}, (char*)"global\0"};
nctemp319=&nctemp320;
nctempchar1* nctemp317= nctemp319;
int nctemp321=SymSetglobal(nctemp315,nctemp317);
}
struct tree* nctemp327= p;
nctempchar1* nctemp329=PtreeGetype(nctemp327);
nctempchar1* nctemp325= nctemp329;
struct nctempchar1 *nctemp332;
static struct nctempchar1 nctemp333 = {{ 6}, (char*)"const\0"};
nctemp332=&nctemp333;
nctempchar1* nctemp330= nctemp332;
int nctemp334=LibeStrcmp(nctemp325,nctemp330);
int nctemp322 = (nctemp334 ==1);
if(nctemp322)
{
struct tree* nctemp340= np;
struct tree* nctemp342=PtreeMvchild(nctemp340);
sp =nctemp342;
struct tree* nctemp347= sp;
struct tree* nctemp349=PtreeMvchild(nctemp347);
sp =nctemp349;
struct tree* nctemp355= sp;
nctempchar1* nctemp357=PtreeGetname(nctemp355);
nctempchar1* nctemp353= nctemp357;
struct nctempchar1 *nctemp360;
static struct nctempchar1 nctemp361 = {{ 7}, (char*)"unexpr\0"};
nctemp360=&nctemp361;
nctempchar1* nctemp358= nctemp360;
int nctemp362=LibeStrcmp(nctemp353,nctemp358);
int nctemp350 = (nctemp362 ==1);
if(nctemp350)
{
struct tree* nctemp368= sp;
struct tree* nctemp370=PtreeMvchild(nctemp368);
sp =nctemp370;
struct tree* nctemp383= sp;
nctempchar1* nctemp385=PtreeGetdef(nctemp383);
nctempchar1* nctemp381= nctemp385;
int nctemp386=LibeStrlen(nctemp381);
int nctemp388 = nctemp386 + 1;
int nctemp390 = nctemp388 + 3;
l =nctemp390;
int nctemp397=l;
nctempchar1 *nctemp396;
nctemp396=(nctempchar1*)RunMalloc(sizeof(nctempchar1));
nctemp396->d[0]=l;
nctemp396->a=(char *)RunMalloc(sizeof(char)*nctemp397);
s=nctemp396;
struct nctempchar1 *nctemp403;
static struct nctempchar1 nctemp404 = {{ 3}, (char*)"(-\0"};
nctemp403=&nctemp404;
nctempchar1* nctemp401= nctemp403;
nctempchar1* nctemp405= s;
int nctemp408=LibeStrcpy(nctemp401,nctemp405);
struct tree* nctemp412= sp;
nctempchar1* nctemp414=PtreeGetdef(nctemp412);
nctempchar1* nctemp410= nctemp414;
nctempchar1* nctemp415= s;
int nctemp418=LibeStrcat(nctemp410,nctemp415);
struct nctempchar1 *nctemp422;
static struct nctempchar1 nctemp423 = {{ 2}, (char*)")\0"};
nctemp422=&nctemp423;
nctempchar1* nctemp420= nctemp422;
nctempchar1* nctemp424= s;
int nctemp427=LibeStrcat(nctemp420,nctemp424);
struct tree* nctemp429= sp;
nctempchar1* nctemp431= s;
int nctemp434=PtreeSetdef(nctemp429,nctemp431);
RunFree(s->a);
RunFree(s);
}
struct symbol* nctemp439= up;
struct tree* nctemp443= sp;
nctempchar1* nctemp445=PtreeGetname(nctemp443);
nctempchar1* nctemp441= nctemp445;
int nctemp446=SymSetype(nctemp439,nctemp441);
struct symbol* nctemp448= up;
struct tree* nctemp452= sp;
nctempchar1* nctemp454=PtreeGetdef(nctemp452);
nctempchar1* nctemp450= nctemp454;
int nctemp455=SymSetdescr(nctemp448,nctemp450);
struct symbol* nctemp457= up;
int nctemp459= 0;
int nctemp461=SymSetemit(nctemp457,nctemp459);
}
struct symbol* nctemp463= up;
struct nctempchar1 *nctemp467;
static struct nctempchar1 nctemp468 = {{ 5}, (char*)"lval\0"};
nctemp467=&nctemp468;
nctempchar1* nctemp465= nctemp467;
int nctemp469=SymSetlval(nctemp463,nctemp465);
struct tree* nctemp473= p;
nctempchar1* nctemp475=PtreeGetstruct(nctemp473);
nctempchar1* nctemp471= nctemp475;
struct nctempchar1 *nctemp478;
static struct nctempchar1 nctemp479 = {{ 7}, (char*)"struct\0"};
nctemp478=&nctemp479;
nctempchar1* nctemp476= nctemp478;
int nctemp480=LibeStrcmp(nctemp471,nctemp476);
if(nctemp480)
{
struct tree* nctemp486= p;
nctempchar1* nctemp488=PtreeGetype(nctemp486);
nctempchar1* nctemp484= nctemp488;
struct symbol* nctemp491=SymGetetp();
struct symbol* nctemp489= nctemp491;
struct symbol* nctemp492=SymLookup(nctemp484,nctemp489);
int nctemp481 = (nctemp492 ==0);
if(nctemp481)
{
struct tree* nctemp495= p;
struct nctempchar1 *nctemp499;
static struct nctempchar1 nctemp500 = {{ 20}, (char*)"Undefined structure\0"};
nctemp499=&nctemp500;
nctempchar1* nctemp497= nctemp499;
struct tree* nctemp503= p;
nctempchar1* nctemp505=PtreeGetype(nctemp503);
nctempchar1* nctemp501= nctemp505;
int nctemp506=SemSerror(nctemp495,nctemp497,nctemp501);
}
struct symbol* nctemp508= up;
struct tree* nctemp512= p;
nctempchar1* nctemp514=PtreeGetstruct(nctemp512);
nctempchar1* nctemp510= nctemp514;
int nctemp515=SymSetstruct(nctemp508,nctemp510);
}
struct symbol* nctemp517= up;
struct tree* nctemp521= p;
nctempchar1* nctemp523=PtreeGetarray(nctemp521);
nctempchar1* nctemp519= nctemp523;
int nctemp524=SymSetarray(nctemp517,nctemp519);
struct symbol* nctemp526= up;
int nctemp528= rank;
int nctemp530=SymSetrank(nctemp526,nctemp528);
struct tree* nctemp532= np;
int nctemp534= rank;
int nctemp536=PtreeSetrank(nctemp532,nctemp534);
}
struct tree* nctemp541= np;
struct tree* nctemp543=PtreeMvsister(nctemp541);
np =nctemp543;
}
int nctemp544 = (np !=0);
nctemp246=nctemp544;}return 1;
}
int SemDeclarations (struct tree* p,struct symbol* tp)
{
int nctemp549 = (p !=0);
int nctemp553=nctemp549;
while(nctemp553)
{{
struct tree* nctemp555= p;
struct symbol* nctemp557= tp;
int nctemp559=SemDeclaration(nctemp555,nctemp557);
struct tree* nctemp564= p;
struct tree* nctemp566=PtreeMvsister(nctemp564);
p =nctemp566;
}
int nctemp567 = (p !=0);
nctemp553=nctemp567;}return 1;
}
int SemStructdecl (struct tree* p,struct symbol* tp)
{
struct symbol* up;
struct symbol* uup;
nctempchar1 *structure;
struct tree* nctemp577= p;
nctempchar1* nctemp579=PtreeGetdef(nctemp577);
structure=nctemp579;
struct tree* nctemp584= p;
struct tree* nctemp586=PtreeMvchild(nctemp584);
p =nctemp586;
struct tree* nctemp591= p;
struct tree* nctemp593=PtreeMvchild(nctemp591);
p =nctemp593;
struct tree* nctemp597= p;
nctempchar1* nctemp599=PtreeGetname(nctemp597);
nctempchar1* nctemp595= nctemp599;
struct nctempchar1 *nctemp602;
static struct nctempchar1 nctemp603 = {{ 13}, (char*)"declarations\0"};
nctemp602=&nctemp603;
nctempchar1* nctemp600= nctemp602;
int nctemp604=LibeStrcmp(nctemp595,nctemp600);
if(nctemp604)
{
struct symbol* nctemp609=SymMktable();
up =nctemp609;
nctempchar1* nctemp617= structure;
struct symbol* nctemp620= tp;
struct symbol* nctemp622=SymMkname(nctemp617,nctemp620);
uup =nctemp622;
int nctemp610 = (uup ==0);
if(nctemp610)
{
struct tree* nctemp625= p;
struct nctempchar1 *nctemp629;
static struct nctempchar1 nctemp630 = {{ 21}, (char*)"Multiple declaration\0"};
nctemp629=&nctemp630;
nctempchar1* nctemp627= nctemp629;
nctempchar1* nctemp631= structure;
int nctemp634=SemSerror(nctemp625,nctemp627,nctemp631);
}
else{
struct symbol* nctemp636= uup;
struct symbol* nctemp638= up;
struct symbol* nctemp640=SymSetable(nctemp636,nctemp638);
struct symbol* nctemp642= uup;
struct nctempchar1 *nctemp646;
static struct nctempchar1 nctemp647 = {{ 10}, (char*)"structdef\0"};
nctemp646=&nctemp647;
nctempchar1* nctemp644= nctemp646;
int nctemp648=SymSetstruct(nctemp642,nctemp644);
struct symbol* nctemp650= uup;
nctempchar1* nctemp652= structure;
int nctemp655=SymSetype(nctemp650,nctemp652);
struct tree* nctemp659= p;
struct tree* nctemp661=PtreeMvchild(nctemp659);
struct tree* nctemp657= nctemp661;
struct symbol* nctemp662= up;
int nctemp664=SemDeclarations(nctemp657,nctemp662);
}
}
return 1;
}
int SemArgtype (struct tree* p,struct symbol* tp)
{
nctempchar1 *name;
struct tree* nctemp671= p;
nctempchar1* nctemp673=PtreeGetdef(nctemp671);
name=nctemp673;
struct symbol* nctemp679= tp;
nctempchar1* nctemp681=SymGetype(nctemp679);
nctempchar1* nctemp677= nctemp681;
struct tree* nctemp684= p;
nctempchar1* nctemp686=PtreeGetype(nctemp684);
nctempchar1* nctemp682= nctemp686;
int nctemp687=LibeStrcmp(nctemp677,nctemp682);
int nctemp674 = (nctemp687 ==0);
if(nctemp674)
{
struct tree* nctemp690= p;
struct nctempchar1 *nctemp694;
static struct nctempchar1 nctemp695 = {{ 50}, (char*)"Argument1 type does not match forward declaration\0"};
nctemp694=&nctemp695;
nctempchar1* nctemp692= nctemp694;
nctempchar1* nctemp696= name;
int nctemp699=SemSerror(nctemp690,nctemp692,nctemp696);
}
struct symbol* nctemp705= tp;
nctempchar1* nctemp707=SymGetref(nctemp705);
nctempchar1* nctemp703= nctemp707;
struct tree* nctemp710= p;
nctempchar1* nctemp712=PtreeGetref(nctemp710);
nctempchar1* nctemp708= nctemp712;
int nctemp713=LibeStrcmp(nctemp703,nctemp708);
int nctemp700 = (nctemp713 ==0);
if(nctemp700)
{
struct tree* nctemp716= p;
struct nctempchar1 *nctemp720;
static struct nctempchar1 nctemp721 = {{ 50}, (char*)"Argument2 type does not match forward declaration\0"};
nctemp720=&nctemp721;
nctempchar1* nctemp718= nctemp720;
nctempchar1* nctemp722= name;
int nctemp725=SemSerror(nctemp716,nctemp718,nctemp722);
}
struct symbol* nctemp731= tp;
nctempchar1* nctemp733=SymGetarray(nctemp731);
nctempchar1* nctemp729= nctemp733;
struct tree* nctemp736= p;
nctempchar1* nctemp738=PtreeGetarray(nctemp736);
nctempchar1* nctemp734= nctemp738;
int nctemp739=LibeStrcmp(nctemp729,nctemp734);
int nctemp726 = (nctemp739 ==0);
if(nctemp726)
{
struct tree* nctemp742= p;
struct nctempchar1 *nctemp746;
static struct nctempchar1 nctemp747 = {{ 50}, (char*)"Argument3 type does not match forward declaration\0"};
nctemp746=&nctemp747;
nctempchar1* nctemp744= nctemp746;
nctempchar1* nctemp748= name;
int nctemp751=SemSerror(nctemp742,nctemp744,nctemp748);
}
struct symbol* nctemp755= tp;
int nctemp757=SymGetrank(nctemp755);
struct tree* nctemp759= p;
int nctemp761=PtreeGetrank(nctemp759);
int nctemp752 = (nctemp757 !=nctemp761);
if(nctemp752)
{
struct tree* nctemp763= p;
struct nctempchar1 *nctemp767;
static struct nctempchar1 nctemp768 = {{ 50}, (char*)"Argument4 type does not match forward declaration\0"};
nctemp767=&nctemp768;
nctempchar1* nctemp765= nctemp767;
nctempchar1* nctemp769= name;
int nctemp772=SemSerror(nctemp763,nctemp765,nctemp769);
}
return 1;
}
int SemArray (struct tree* p,struct symbol* tp)
{
struct tree* np;
int rank;
struct tree* nctemp779= p;
nctempchar1* nctemp781=PtreeGetarray(nctemp779);
nctempchar1* nctemp777= nctemp781;
struct nctempchar1 *nctemp784;
static struct nctempchar1 nctemp785 = {{ 6}, (char*)"array\0"};
nctemp784=&nctemp785;
nctempchar1* nctemp782= nctemp784;
int nctemp786=LibeStrcmp(nctemp777,nctemp782);
int nctemp774 = (nctemp786 ==0);
if(nctemp774)
{
struct tree* nctemp789= p;
struct nctempchar1 *nctemp793;
static struct nctempchar1 nctemp794 = {{ 13}, (char*)"Not an array\0"};
nctemp793=&nctemp794;
nctempchar1* nctemp791= nctemp793;
struct tree* nctemp797= p;
nctempchar1* nctemp799=PtreeGetdef(nctemp797);
nctempchar1* nctemp795= nctemp799;
int nctemp800=SemSerror(nctemp789,nctemp791,nctemp795);
return 0;
}
struct tree* nctemp803= p;
struct nctempchar1 *nctemp807;
static struct nctempchar1 nctemp808 = {{ 11}, (char*)"identifier\0"};
nctemp807=&nctemp808;
nctempchar1* nctemp805= nctemp807;
int nctemp809=PtreeSetname(nctemp803,nctemp805);
struct tree* nctemp814= p;
struct tree* nctemp816=PtreeMvchild(nctemp814);
np =nctemp816;
struct tree* nctemp822= np;
nctempchar1* nctemp824=PtreeGetname(nctemp822);
nctempchar1* nctemp820= nctemp824;
struct nctempchar1 *nctemp827;
static struct nctempchar1 nctemp828 = {{ 9}, (char*)"exprlist\0"};
nctemp827=&nctemp828;
nctempchar1* nctemp825= nctemp827;
int nctemp829=LibeStrcmp(nctemp820,nctemp825);
int nctemp817 = (nctemp829 ==0);
if(nctemp817)
{
struct tree* nctemp832= p;
struct nctempchar1 *nctemp836;
static struct nctempchar1 nctemp837 = {{ 22}, (char*)"Missing array indexes\0"};
nctemp836=&nctemp837;
nctempchar1* nctemp834= nctemp836;
struct tree* nctemp840= p;
nctempchar1* nctemp842=PtreeGetdef(nctemp840);
nctempchar1* nctemp838= nctemp842;
int nctemp843=SemSerror(nctemp832,nctemp834,nctemp838);
return 0;
}
struct tree* nctemp852= np;
struct tree* nctemp854=PtreeMvchild(nctemp852);
np =nctemp854;
int nctemp845 = (np !=0);
if(nctemp845)
{
rank =0;
int nctemp860 = (np !=0);
int nctemp864=nctemp860;
while(nctemp864)
{{
struct tree* nctemp866= np;
struct tree* nctemp868=SemExpr(nctemp866);
struct tree* nctemp873= np;
struct tree* nctemp875=PtreeMvsister(nctemp873);
np =nctemp875;
int nctemp884 = rank + 1;
rank =nctemp884;
}
int nctemp885 = (np !=0);
nctemp864=nctemp885;}}
struct symbol* nctemp893= tp;
int nctemp895=SymGetrank(nctemp893);
int nctemp889 = (rank !=nctemp895);
if(nctemp889)
{
struct tree* nctemp897= p;
struct nctempchar1 *nctemp901;
static struct nctempchar1 nctemp902 = {{ 24}, (char*)"Illegal array dimension\0"};
nctemp901=&nctemp902;
nctempchar1* nctemp899= nctemp901;
struct tree* nctemp905= p;
nctempchar1* nctemp907=PtreeGetdef(nctemp905);
nctempchar1* nctemp903= nctemp907;
int nctemp908=SemSerror(nctemp897,nctemp899,nctemp903);
return 0;
}
struct tree* nctemp911= p;
int nctemp913= rank;
int nctemp915=PtreeSetrank(nctemp911,nctemp913);
return 1;
}
int SemStructure (struct tree* p,struct symbol* tp)
{
nctempchar1 *temp;
struct symbol* up;
struct symbol* uup;
struct tree* np;
struct tree* nctemp922= p;
nctempchar1* nctemp924=PtreeGetstruct(nctemp922);
nctempchar1* nctemp920= nctemp924;
struct nctempchar1 *nctemp927;
static struct nctempchar1 nctemp928 = {{ 7}, (char*)"struct\0"};
nctemp927=&nctemp928;
nctempchar1* nctemp925= nctemp927;
int nctemp929=LibeStrcmp(nctemp920,nctemp925);
int nctemp917 = (nctemp929 ==0);
if(nctemp917)
{
struct tree* nctemp932= p;
struct nctempchar1 *nctemp936;
static struct nctempchar1 nctemp937 = {{ 16}, (char*)"Not a structure\0"};
nctemp936=&nctemp937;
nctempchar1* nctemp934= nctemp936;
struct tree* nctemp940= p;
nctempchar1* nctemp942=PtreeGetdef(nctemp940);
nctempchar1* nctemp938= nctemp942;
int nctemp943=SemSerror(nctemp932,nctemp934,nctemp938);
return 0;
}
struct tree* nctemp946= p;
struct nctempchar1 *nctemp950;
static struct nctempchar1 nctemp951 = {{ 11}, (char*)"identifier\0"};
nctemp950=&nctemp951;
nctempchar1* nctemp948= nctemp950;
int nctemp952=PtreeSetname(nctemp946,nctemp948);
struct symbol* nctemp958= tp;
nctempchar1* nctemp960=SymGetype(nctemp958);
temp=nctemp960;
nctempchar1* nctemp968= temp;
struct symbol* nctemp971=SymLook(nctemp968);
up =nctemp971;
int nctemp961 = (up ==0);
if(nctemp961)
{
nctempchar1* nctemp980= temp;
struct symbol* nctemp983=SymLook(nctemp980);
up =nctemp983;
int nctemp973 = (up ==0);
if(nctemp973)
{
struct tree* nctemp986= p;
struct nctempchar1 *nctemp990;
static struct nctempchar1 nctemp991 = {{ 26}, (char*)"Undeclared structure type\0"};
nctemp990=&nctemp991;
nctempchar1* nctemp988= nctemp990;
struct nctempchar1 *nctemp994;
static struct nctempchar1 nctemp995 = {{ 2}, (char*)" \0"};
nctemp994=&nctemp995;
nctempchar1* nctemp992= nctemp994;
int nctemp996=SemSerror(nctemp986,nctemp988,nctemp992);
return 0;
}
}
struct symbol* nctemp1001= tp;
nctempchar1* nctemp1003=SymGetstruct(nctemp1001);
nctempchar1* nctemp999= nctemp1003;
struct nctempchar1 *nctemp1006;
static struct nctempchar1 nctemp1007 = {{ 10}, (char*)"structdef\0"};
nctemp1006=&nctemp1007;
nctempchar1* nctemp1004= nctemp1006;
int nctemp1008=LibeStrcmp(nctemp999,nctemp1004);
if(nctemp1008)
{
struct tree* nctemp1010= p;
struct nctempchar1 *nctemp1014;
static struct nctempchar1 nctemp1015 = {{ 43}, (char*)"Struct names can not be used as a variable\0"};
nctemp1014=&nctemp1015;
nctempchar1* nctemp1012= nctemp1014;
struct tree* nctemp1018= p;
nctempchar1* nctemp1020=PtreeGetdef(nctemp1018);
nctempchar1* nctemp1016= nctemp1020;
int nctemp1021=SemSerror(nctemp1010,nctemp1012,nctemp1016);
return 0;
}
struct tree* nctemp1027= p;
struct tree* nctemp1029=PtreeMvchild(nctemp1027);
np =nctemp1029;
int nctemp1030 = (np ==0);
if(nctemp1030)
{
struct tree* nctemp1035= p;
struct nctempchar1 *nctemp1039;
static struct nctempchar1 nctemp1040 = {{ 27}, (char*)"Missing structure selector\0"};
nctemp1039=&nctemp1040;
nctempchar1* nctemp1037= nctemp1039;
struct tree* nctemp1043= p;
nctempchar1* nctemp1045=PtreeGetdef(nctemp1043);
nctempchar1* nctemp1041= nctemp1045;
int nctemp1046=SemSerror(nctemp1035,nctemp1037,nctemp1041);
return 0;
}
struct tree* nctemp1051= p;
nctempchar1* nctemp1053=PtreeGetarray(nctemp1051);
nctempchar1* nctemp1049= nctemp1053;
struct nctempchar1 *nctemp1056;
static struct nctempchar1 nctemp1057 = {{ 6}, (char*)"array\0"};
nctemp1056=&nctemp1057;
nctempchar1* nctemp1054= nctemp1056;
int nctemp1058=LibeStrcmp(nctemp1049,nctemp1054);
if(nctemp1058)
{
struct tree* nctemp1063= np;
struct tree* nctemp1065=PtreeMvsister(nctemp1063);
np =nctemp1065;
}
int nctemp1066 = (np ==0);
if(nctemp1066)
{
struct tree* nctemp1071= p;
struct nctempchar1 *nctemp1075;
static struct nctempchar1 nctemp1076 = {{ 20}, (char*)"Missing array index\0"};
nctemp1075=&nctemp1076;
nctempchar1* nctemp1073= nctemp1075;
struct tree* nctemp1079= p;
nctempchar1* nctemp1081=PtreeGetdef(nctemp1079);
nctempchar1* nctemp1077= nctemp1081;
int nctemp1082=SemSerror(nctemp1071,nctemp1073,nctemp1077);
return 0;
}
struct symbol* nctemp1088= up;
struct symbol* nctemp1090=SymGetable(nctemp1088);
uup =nctemp1090;
struct tree* nctemp1100= np;
nctempchar1* nctemp1102=PtreeGetdef(nctemp1100);
nctempchar1* nctemp1098= nctemp1102;
struct symbol* nctemp1103= uup;
struct symbol* nctemp1105=SymLookup(nctemp1098,nctemp1103);
tp =nctemp1105;
int nctemp1091 = (tp ==0);
if(nctemp1091)
{
struct tree* nctemp1108= np;
struct nctempchar1 *nctemp1112;
static struct nctempchar1 nctemp1113 = {{ 28}, (char*)"Undeclared structure member\0"};
nctemp1112=&nctemp1113;
nctempchar1* nctemp1110= nctemp1112;
struct tree* nctemp1116= np;
nctempchar1* nctemp1118=PtreeGetdef(nctemp1116);
nctempchar1* nctemp1114= nctemp1118;
int nctemp1119=SemSerror(nctemp1108,nctemp1110,nctemp1114);
return 0;
}
struct symbol* nctemp1124= tp;
nctempchar1* nctemp1126=SymGetarray(nctemp1124);
nctempchar1* nctemp1122= nctemp1126;
struct nctempchar1 *nctemp1129;
static struct nctempchar1 nctemp1130 = {{ 6}, (char*)"array\0"};
nctemp1129=&nctemp1130;
nctempchar1* nctemp1127= nctemp1129;
int nctemp1131=LibeStrcmp(nctemp1122,nctemp1127);
if(nctemp1131)
{
struct tree* nctemp1135= np;
struct tree* nctemp1137=PtreeMvchild(nctemp1135);
int nctemp1132 = (nctemp1137 !=0);
if(nctemp1132)
{
struct tree* nctemp1140= np;
struct symbol* nctemp1142= tp;
int nctemp1144=SemArray(nctemp1140,nctemp1142);
struct symbol* nctemp1148= tp;
nctempchar1* nctemp1150=SymGetstruct(nctemp1148);
nctempchar1* nctemp1146= nctemp1150;
struct nctempchar1 *nctemp1153;
static struct nctempchar1 nctemp1154 = {{ 7}, (char*)"struct\0"};
nctemp1153=&nctemp1154;
nctempchar1* nctemp1151= nctemp1153;
int nctemp1155=LibeStrcmp(nctemp1146,nctemp1151);
if(nctemp1155)
{
struct tree* nctemp1157= np;
struct nctempchar1 *nctemp1161;
static struct nctempchar1 nctemp1162 = {{ 5}, (char*)"sref\0"};
nctemp1161=&nctemp1162;
nctempchar1* nctemp1159= nctemp1161;
int nctemp1163=PtreeSetref(nctemp1157,nctemp1159);
}
}
else{
struct tree* nctemp1165= np;
struct nctempchar1 *nctemp1169;
static struct nctempchar1 nctemp1170 = {{ 5}, (char*)"aref\0"};
nctemp1169=&nctemp1170;
nctempchar1* nctemp1167= nctemp1169;
int nctemp1171=PtreeSetref(nctemp1165,nctemp1167);
}
}
else{
struct symbol* nctemp1175= tp;
nctempchar1* nctemp1177=SymGetstruct(nctemp1175);
nctempchar1* nctemp1173= nctemp1177;
struct nctempchar1 *nctemp1180;
static struct nctempchar1 nctemp1181 = {{ 7}, (char*)"struct\0"};
nctemp1180=&nctemp1181;
nctempchar1* nctemp1178= nctemp1180;
int nctemp1182=LibeStrcmp(nctemp1173,nctemp1178);
if(nctemp1182)
{
struct tree* nctemp1184= np;
struct nctempchar1 *nctemp1188;
static struct nctempchar1 nctemp1189 = {{ 5}, (char*)"sref\0"};
nctemp1188=&nctemp1189;
nctempchar1* nctemp1186= nctemp1188;
int nctemp1190=PtreeSetref(nctemp1184,nctemp1186);
}
}
struct tree* nctemp1192= np;
struct symbol* nctemp1196= tp;
nctempchar1* nctemp1198=SymGetype(nctemp1196);
nctempchar1* nctemp1194= nctemp1198;
int nctemp1199=PtreeSetype(nctemp1192,nctemp1194);
struct tree* nctemp1201= np;
struct symbol* nctemp1205= tp;
nctempchar1* nctemp1207=SymGetarray(nctemp1205);
nctempchar1* nctemp1203= nctemp1207;
int nctemp1208=PtreeSetarray(nctemp1201,nctemp1203);
struct tree* nctemp1210= np;
struct symbol* nctemp1214= tp;
int nctemp1216=SymGetrank(nctemp1214);
int nctemp1212= nctemp1216;
int nctemp1217=PtreeSetrank(nctemp1210,nctemp1212);
struct tree* nctemp1219= np;
struct symbol* nctemp1223= tp;
nctempchar1* nctemp1225=SymGetlval(nctemp1223);
nctempchar1* nctemp1221= nctemp1225;
int nctemp1226=PtreeSetlval(nctemp1219,nctemp1221);
struct tree* nctemp1228= p;
struct symbol* nctemp1232= tp;
nctempchar1* nctemp1234=SymGetype(nctemp1232);
nctempchar1* nctemp1230= nctemp1234;
int nctemp1235=PtreeSetype(nctemp1228,nctemp1230);
struct tree* nctemp1237= p;
struct tree* nctemp1241= np;
nctempchar1* nctemp1243=PtreeGetref(nctemp1241);
nctempchar1* nctemp1239= nctemp1243;
int nctemp1244=PtreeSetref(nctemp1237,nctemp1239);
struct tree* nctemp1246= p;
struct symbol* nctemp1250= tp;
int nctemp1252=SymGetrank(nctemp1250);
int nctemp1248= nctemp1252;
int nctemp1253=PtreeSetrank(nctemp1246,nctemp1248);
return 1;
}
int SemId (struct tree* p)
{
struct symbol* tp;
struct tree* np;
struct tree* nctemp1264= p;
nctempchar1* nctemp1266=PtreeGetdef(nctemp1264);
nctempchar1* nctemp1262= nctemp1266;
struct symbol* nctemp1267=SymLook(nctemp1262);
tp =nctemp1267;
int nctemp1255 = (tp ==0);
if(nctemp1255)
{
struct tree* nctemp1270= p;
struct nctempchar1 *nctemp1274;
static struct nctempchar1 nctemp1275 = {{ 22}, (char*)"Undeclared identifier\0"};
nctemp1274=&nctemp1275;
nctempchar1* nctemp1272= nctemp1274;
struct tree* nctemp1278= p;
nctempchar1* nctemp1280=PtreeGetdef(nctemp1278);
nctempchar1* nctemp1276= nctemp1280;
int nctemp1281=SemSerror(nctemp1270,nctemp1272,nctemp1276);
}
struct symbol* nctemp1287= tp;
nctempchar1* nctemp1289=SymGetype(nctemp1287);
nctempchar1* nctemp1285= nctemp1289;
struct nctempchar1 *nctemp1292;
static struct nctempchar1 nctemp1293 = {{ 10}, (char*)"iconstant\0"};
nctemp1292=&nctemp1293;
nctempchar1* nctemp1290= nctemp1292;
int nctemp1294=LibeStrcmp(nctemp1285,nctemp1290);
int nctemp1282 = (nctemp1294 ==1);
if(nctemp1282)
{
struct tree* nctemp1297= p;
struct symbol* nctemp1301= tp;
nctempchar1* nctemp1303=SymGetype(nctemp1301);
nctempchar1* nctemp1299= nctemp1303;
int nctemp1304=PtreeSetname(nctemp1297,nctemp1299);
struct tree* nctemp1306= p;
struct symbol* nctemp1310= tp;
nctempchar1* nctemp1312=SymGetdescr(nctemp1310);
nctempchar1* nctemp1308= nctemp1312;
int nctemp1313=PtreeSetdef(nctemp1306,nctemp1308);
struct tree* nctemp1315= p;
struct nctempchar1 *nctemp1319;
static struct nctempchar1 nctemp1320 = {{ 4}, (char*)"int\0"};
nctemp1319=&nctemp1320;
nctempchar1* nctemp1317= nctemp1319;
int nctemp1321=PtreeSetype(nctemp1315,nctemp1317);
return 1;
}
else{
struct symbol* nctemp1328= tp;
nctempchar1* nctemp1330=SymGetype(nctemp1328);
nctempchar1* nctemp1326= nctemp1330;
struct nctempchar1 *nctemp1333;
static struct nctempchar1 nctemp1334 = {{ 10}, (char*)"rconstant\0"};
nctemp1333=&nctemp1334;
nctempchar1* nctemp1331= nctemp1333;
int nctemp1335=LibeStrcmp(nctemp1326,nctemp1331);
int nctemp1323 = (nctemp1335 ==1);
if(nctemp1323)
{
struct tree* nctemp1338= p;
struct symbol* nctemp1342= tp;
nctempchar1* nctemp1344=SymGetype(nctemp1342);
nctempchar1* nctemp1340= nctemp1344;
int nctemp1345=PtreeSetname(nctemp1338,nctemp1340);
struct tree* nctemp1347= p;
struct symbol* nctemp1351= tp;
nctempchar1* nctemp1353=SymGetdescr(nctemp1351);
nctempchar1* nctemp1349= nctemp1353;
int nctemp1354=PtreeSetdef(nctemp1347,nctemp1349);
struct tree* nctemp1356= p;
struct nctempchar1 *nctemp1360;
static struct nctempchar1 nctemp1361 = {{ 6}, (char*)"float\0"};
nctemp1360=&nctemp1361;
nctempchar1* nctemp1358= nctemp1360;
int nctemp1362=PtreeSetype(nctemp1356,nctemp1358);
return 1;
}
else{
struct symbol* nctemp1369= tp;
nctempchar1* nctemp1371=SymGetype(nctemp1369);
nctempchar1* nctemp1367= nctemp1371;
struct nctempchar1 *nctemp1374;
static struct nctempchar1 nctemp1375 = {{ 10}, (char*)"sconstant\0"};
nctemp1374=&nctemp1375;
nctempchar1* nctemp1372= nctemp1374;
int nctemp1376=LibeStrcmp(nctemp1367,nctemp1372);
int nctemp1364 = (nctemp1376 ==1);
if(nctemp1364)
{
struct tree* nctemp1379= p;
struct symbol* nctemp1383= tp;
nctempchar1* nctemp1385=SymGetype(nctemp1383);
nctempchar1* nctemp1381= nctemp1385;
int nctemp1386=PtreeSetname(nctemp1379,nctemp1381);
struct tree* nctemp1388= p;
struct symbol* nctemp1392= tp;
nctempchar1* nctemp1394=SymGetdescr(nctemp1392);
nctempchar1* nctemp1390= nctemp1394;
int nctemp1395=PtreeSetdef(nctemp1388,nctemp1390);
struct tree* nctemp1397= p;
struct nctempchar1 *nctemp1401;
static struct nctempchar1 nctemp1402 = {{ 5}, (char*)"char\0"};
nctemp1401=&nctemp1402;
nctempchar1* nctemp1399= nctemp1401;
int nctemp1403=PtreeSetype(nctemp1397,nctemp1399);
struct tree* nctemp1405= p;
struct nctempchar1 *nctemp1409;
static struct nctempchar1 nctemp1410 = {{ 6}, (char*)"array\0"};
nctemp1409=&nctemp1410;
nctempchar1* nctemp1407= nctemp1409;
int nctemp1411=PtreeSetarray(nctemp1405,nctemp1407);
struct tree* nctemp1413= p;
struct nctempchar1 *nctemp1417;
static struct nctempchar1 nctemp1418 = {{ 5}, (char*)"aref\0"};
nctemp1417=&nctemp1418;
nctempchar1* nctemp1415= nctemp1417;
int nctemp1419=PtreeSetref(nctemp1413,nctemp1415);
struct tree* nctemp1421= p;
int nctemp1423= 1;
int nctemp1425=PtreeSetrank(nctemp1421,nctemp1423);
return 1;
}
}
}
struct symbol* nctemp1430= tp;
nctempchar1* nctemp1432=SymGetstruct(nctemp1430);
nctempchar1* nctemp1428= nctemp1432;
struct nctempchar1 *nctemp1435;
static struct nctempchar1 nctemp1436 = {{ 10}, (char*)"structdef\0"};
nctemp1435=&nctemp1436;
nctempchar1* nctemp1433= nctemp1435;
int nctemp1437=LibeStrcmp(nctemp1428,nctemp1433);
if(nctemp1437)
{
struct tree* nctemp1439= p;
struct nctempchar1 *nctemp1443;
static struct nctempchar1 nctemp1444 = {{ 43}, (char*)"Struct names can not be used as a variable\0"};
nctemp1443=&nctemp1444;
nctempchar1* nctemp1441= nctemp1443;
struct tree* nctemp1447= p;
nctempchar1* nctemp1449=PtreeGetdef(nctemp1447);
nctempchar1* nctemp1445= nctemp1449;
int nctemp1450=SemSerror(nctemp1439,nctemp1441,nctemp1445);
}
struct tree* nctemp1452= p;
struct symbol* nctemp1456= tp;
nctempchar1* nctemp1458=SymGetype(nctemp1456);
nctempchar1* nctemp1454= nctemp1458;
int nctemp1459=PtreeSetype(nctemp1452,nctemp1454);
struct tree* nctemp1461= p;
struct symbol* nctemp1465= tp;
nctempchar1* nctemp1467=SymGetarray(nctemp1465);
nctempchar1* nctemp1463= nctemp1467;
int nctemp1468=PtreeSetarray(nctemp1461,nctemp1463);
struct tree* nctemp1470= p;
struct symbol* nctemp1474= tp;
int nctemp1476=SymGetrank(nctemp1474);
int nctemp1472= nctemp1476;
int nctemp1477=PtreeSetrank(nctemp1470,nctemp1472);
struct tree* nctemp1479= p;
struct symbol* nctemp1483= tp;
nctempchar1* nctemp1485=SymGetstruct(nctemp1483);
nctempchar1* nctemp1481= nctemp1485;
int nctemp1486=PtreeSetstruct(nctemp1479,nctemp1481);
struct tree* nctemp1488= p;
struct symbol* nctemp1492= tp;
nctempchar1* nctemp1494=SymGetlval(nctemp1492);
nctempchar1* nctemp1490= nctemp1494;
int nctemp1495=PtreeSetlval(nctemp1488,nctemp1490);
struct tree* nctemp1500= p;
struct tree* nctemp1502=PtreeMvchild(nctemp1500);
np =nctemp1502;
int nctemp1503 = (np !=0);
if(nctemp1503)
{
struct tree* nctemp1510= np;
nctempchar1* nctemp1512=PtreeGetname(nctemp1510);
nctempchar1* nctemp1508= nctemp1512;
struct nctempchar1 *nctemp1515;
static struct nctempchar1 nctemp1516 = {{ 9}, (char*)"exprlist\0"};
nctemp1515=&nctemp1516;
nctempchar1* nctemp1513= nctemp1515;
int nctemp1517=LibeStrcmp(nctemp1508,nctemp1513);
if(nctemp1517)
{
struct tree* nctemp1519= p;
struct symbol* nctemp1521= tp;
int nctemp1523=SemArray(nctemp1519,nctemp1521);
struct tree* nctemp1527= np;
struct tree* nctemp1529=PtreeMvsister(nctemp1527);
int nctemp1524 = (nctemp1529 !=0);
if(nctemp1524)
{
struct tree* nctemp1532= p;
struct symbol* nctemp1534= tp;
int nctemp1536=SemStructure(nctemp1532,nctemp1534);
}
else{
struct tree* nctemp1540= p;
nctempchar1* nctemp1542=PtreeGetstruct(nctemp1540);
nctempchar1* nctemp1538= nctemp1542;
struct nctempchar1 *nctemp1545;
static struct nctempchar1 nctemp1546 = {{ 7}, (char*)"struct\0"};
nctemp1545=&nctemp1546;
nctempchar1* nctemp1543= nctemp1545;
int nctemp1547=LibeStrcmp(nctemp1538,nctemp1543);
if(nctemp1547)
{
struct tree* nctemp1549= p;
struct nctempchar1 *nctemp1553;
static struct nctempchar1 nctemp1554 = {{ 5}, (char*)"sref\0"};
nctemp1553=&nctemp1554;
nctempchar1* nctemp1551= nctemp1553;
int nctemp1555=PtreeSetref(nctemp1549,nctemp1551);
}
}
}
else{
struct tree* nctemp1559= np;
nctempchar1* nctemp1561=PtreeGetname(nctemp1559);
nctempchar1* nctemp1557= nctemp1561;
struct nctempchar1 *nctemp1564;
static struct nctempchar1 nctemp1565 = {{ 9}, (char*)"selector\0"};
nctemp1564=&nctemp1565;
nctempchar1* nctemp1562= nctemp1564;
int nctemp1566=LibeStrcmp(nctemp1557,nctemp1562);
if(nctemp1566)
{
struct tree* nctemp1568= p;
struct symbol* nctemp1570= tp;
int nctemp1572=SemStructure(nctemp1568,nctemp1570);
}
}
}
else{
struct tree* nctemp1576= p;
nctempchar1* nctemp1578=PtreeGetarray(nctemp1576);
nctempchar1* nctemp1574= nctemp1578;
struct nctempchar1 *nctemp1581;
static struct nctempchar1 nctemp1582 = {{ 6}, (char*)"array\0"};
nctemp1581=&nctemp1582;
nctempchar1* nctemp1579= nctemp1581;
int nctemp1583=LibeStrcmp(nctemp1574,nctemp1579);
if(nctemp1583)
{
struct tree* nctemp1585= p;
struct nctempchar1 *nctemp1589;
static struct nctempchar1 nctemp1590 = {{ 5}, (char*)"aref\0"};
nctemp1589=&nctemp1590;
nctempchar1* nctemp1587= nctemp1589;
int nctemp1591=PtreeSetref(nctemp1585,nctemp1587);
}
else{
struct tree* nctemp1595= p;
nctempchar1* nctemp1597=PtreeGetstruct(nctemp1595);
nctempchar1* nctemp1593= nctemp1597;
struct nctempchar1 *nctemp1600;
static struct nctempchar1 nctemp1601 = {{ 7}, (char*)"struct\0"};
nctemp1600=&nctemp1601;
nctempchar1* nctemp1598= nctemp1600;
int nctemp1602=LibeStrcmp(nctemp1593,nctemp1598);
if(nctemp1602)
{
struct tree* nctemp1604= p;
struct nctempchar1 *nctemp1608;
static struct nctempchar1 nctemp1609 = {{ 5}, (char*)"sref\0"};
nctemp1608=&nctemp1609;
nctempchar1* nctemp1606= nctemp1608;
int nctemp1610=PtreeSetref(nctemp1604,nctemp1606);
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
struct tree* nctemp1615= p;
nctempchar1* nctemp1617=PtreeGetname(nctemp1615);
nctempchar1* nctemp1613= nctemp1617;
struct nctempchar1 *nctemp1620;
static struct nctempchar1 nctemp1621 = {{ 6}, (char*)"fcall\0"};
nctemp1620=&nctemp1621;
nctempchar1* nctemp1618= nctemp1620;
int nctemp1622=LibeStrcmp(nctemp1613,nctemp1618);
if(nctemp1622)
{
struct tree* nctemp1632= p;
nctempchar1* nctemp1634=PtreeGetdef(nctemp1632);
nctempchar1* nctemp1630= nctemp1634;
struct symbol* nctemp1637=SymGetetp();
struct symbol* nctemp1635= nctemp1637;
struct symbol* nctemp1638=SymLookup(nctemp1630,nctemp1635);
tp =nctemp1638;
int nctemp1623 = (tp ==0);
if(nctemp1623)
{
struct tree* nctemp1641= p;
struct nctempchar1 *nctemp1645;
static struct nctempchar1 nctemp1646 = {{ 20}, (char*)"Undeclared function\0"};
nctemp1645=&nctemp1646;
nctempchar1* nctemp1643= nctemp1645;
struct tree* nctemp1649= p;
nctempchar1* nctemp1651=PtreeGetdef(nctemp1649);
nctempchar1* nctemp1647= nctemp1651;
int nctemp1652=SemSerror(nctemp1641,nctemp1643,nctemp1647);
return 0;
}
struct symbol* nctemp1659= tp;
nctempchar1* nctemp1661=SymGetfunc(nctemp1659);
nctempchar1* nctemp1657= nctemp1661;
struct nctempchar1 *nctemp1664;
static struct nctempchar1 nctemp1665 = {{ 5}, (char*)"fdef\0"};
nctemp1664=&nctemp1665;
nctempchar1* nctemp1662= nctemp1664;
int nctemp1666=LibeStrcmp(nctemp1657,nctemp1662);
int nctemp1654 = (nctemp1666 ==0);
if(nctemp1654)
{
struct tree* nctemp1669= p;
struct nctempchar1 *nctemp1673;
static struct nctempchar1 nctemp1674 = {{ 15}, (char*)"Not a function\0"};
nctemp1673=&nctemp1674;
nctempchar1* nctemp1671= nctemp1673;
struct tree* nctemp1677= p;
nctempchar1* nctemp1679=PtreeGetdef(nctemp1677);
nctempchar1* nctemp1675= nctemp1679;
int nctemp1680=SemSerror(nctemp1669,nctemp1671,nctemp1675);
return 0;
}
struct tree* nctemp1683= p;
struct symbol* nctemp1687= tp;
nctempchar1* nctemp1689=SymGetype(nctemp1687);
nctempchar1* nctemp1685= nctemp1689;
int nctemp1690=PtreeSetype(nctemp1683,nctemp1685);
struct tree* nctemp1692= p;
struct symbol* nctemp1696= tp;
nctempchar1* nctemp1698=SymGetstruct(nctemp1696);
nctempchar1* nctemp1694= nctemp1698;
int nctemp1699=PtreeSetstruct(nctemp1692,nctemp1694);
struct tree* nctemp1701= p;
struct symbol* nctemp1705= tp;
nctempchar1* nctemp1707=SymGetarray(nctemp1705);
nctempchar1* nctemp1703= nctemp1707;
int nctemp1708=PtreeSetarray(nctemp1701,nctemp1703);
struct tree* nctemp1710= p;
struct symbol* nctemp1714= tp;
int nctemp1716=SymGetrank(nctemp1714);
int nctemp1712= nctemp1716;
int nctemp1717=PtreeSetrank(nctemp1710,nctemp1712);
struct tree* nctemp1721= p;
nctempchar1* nctemp1723=PtreeGetarray(nctemp1721);
nctempchar1* nctemp1719= nctemp1723;
struct nctempchar1 *nctemp1726;
static struct nctempchar1 nctemp1727 = {{ 6}, (char*)"array\0"};
nctemp1726=&nctemp1727;
nctempchar1* nctemp1724= nctemp1726;
int nctemp1728=LibeStrcmp(nctemp1719,nctemp1724);
if(nctemp1728)
{
struct tree* nctemp1730= p;
struct nctempchar1 *nctemp1734;
static struct nctempchar1 nctemp1735 = {{ 5}, (char*)"aref\0"};
nctemp1734=&nctemp1735;
nctempchar1* nctemp1732= nctemp1734;
int nctemp1736=PtreeSetref(nctemp1730,nctemp1732);
}
else{
struct tree* nctemp1740= p;
nctempchar1* nctemp1742=PtreeGetstruct(nctemp1740);
nctempchar1* nctemp1738= nctemp1742;
struct nctempchar1 *nctemp1745;
static struct nctempchar1 nctemp1746 = {{ 7}, (char*)"struct\0"};
nctemp1745=&nctemp1746;
nctempchar1* nctemp1743= nctemp1745;
int nctemp1747=LibeStrcmp(nctemp1738,nctemp1743);
if(nctemp1747)
{
struct tree* nctemp1749= p;
struct nctempchar1 *nctemp1753;
static struct nctempchar1 nctemp1754 = {{ 5}, (char*)"sref\0"};
nctemp1753=&nctemp1754;
nctempchar1* nctemp1751= nctemp1753;
int nctemp1755=PtreeSetref(nctemp1749,nctemp1751);
}
}
struct symbol* nctemp1760= tp;
struct symbol* nctemp1762=SymGetable(nctemp1760);
tp =nctemp1762;
struct nctempchar1 *nctemp1769;
static struct nctempchar1 nctemp1770 = {{ 9}, (char*)"#arglist\0"};
nctemp1769=&nctemp1770;
nctempchar1* nctemp1767= nctemp1769;
struct symbol* nctemp1771= tp;
struct symbol* nctemp1773=SymLookup(nctemp1767,nctemp1771);
tp =nctemp1773;
int nctemp1774 = (tp !=0);
if(nctemp1774)
{
struct symbol* nctemp1782= tp;
struct symbol* nctemp1784=SymGetable(nctemp1782);
tp =nctemp1784;
}
struct tree* nctemp1792= p;
struct tree* nctemp1794=PtreeMvchild(nctemp1792);
np =nctemp1794;
int nctemp1785 = (np ==0);
if(nctemp1785)
{
struct symbol* nctemp1803= tp;
struct symbol* nctemp1805=SymMvnext(nctemp1803);
tp =nctemp1805;
int nctemp1796 = (tp !=0);
if(nctemp1796)
{
struct tree* nctemp1808= p;
struct nctempchar1 *nctemp1812;
static struct nctempchar1 nctemp1813 = {{ 41}, (char*)"Function call does not match declaration\0"};
nctemp1812=&nctemp1813;
nctempchar1* nctemp1810= nctemp1812;
struct tree* nctemp1816= p;
nctempchar1* nctemp1818=PtreeGetdef(nctemp1816);
nctempchar1* nctemp1814= nctemp1818;
int nctemp1819=SemSerror(nctemp1808,nctemp1810,nctemp1814);
return 0;
}
return 1;
}
struct tree* nctemp1828= p;
struct tree* nctemp1830=PtreeMvchild(nctemp1828);
struct tree* nctemp1826= nctemp1830;
struct tree* nctemp1831=PtreeMvchild(nctemp1826);
np =nctemp1831;
int nctemp1832 = (np !=0);
int nctemp1836=nctemp1832;
while(nctemp1836)
{{
struct symbol* nctemp1841= tp;
struct symbol* nctemp1843=SymMvnext(nctemp1841);
tp =nctemp1843;
int nctemp1844 = (tp ==0);
if(nctemp1844)
{
struct tree* nctemp1849= p;
struct nctempchar1 *nctemp1853;
static struct nctempchar1 nctemp1854 = {{ 41}, (char*)"Function call does not match declaration\0"};
nctemp1853=&nctemp1854;
nctempchar1* nctemp1851= nctemp1853;
struct tree* nctemp1857= p;
nctempchar1* nctemp1859=PtreeGetdef(nctemp1857);
nctempchar1* nctemp1855= nctemp1859;
int nctemp1860=SemSerror(nctemp1849,nctemp1851,nctemp1855);
return 0;
}
struct symbol* nctemp1867= tp;
nctempchar1* nctemp1869=SymGetype(nctemp1867);
type=nctemp1869;
struct tree* nctemp1871= np;
struct tree* nctemp1873=SemExpr(nctemp1871);
nctempchar1* nctemp1877= type;
struct tree* nctemp1882= np;
nctempchar1* nctemp1884=PtreeGetype(nctemp1882);
nctempchar1* nctemp1880= nctemp1884;
int nctemp1885=LibeStrcmp(nctemp1877,nctemp1880);
int nctemp1874 = (nctemp1885 ==0);
if(nctemp1874)
{
struct tree* nctemp1888= p;
struct nctempchar1 *nctemp1892;
static struct nctempchar1 nctemp1893 = {{ 41}, (char*)"Function call does not match declaration\0"};
nctemp1892=&nctemp1893;
nctempchar1* nctemp1890= nctemp1892;
struct tree* nctemp1896= p;
nctempchar1* nctemp1898=PtreeGetdef(nctemp1896);
nctempchar1* nctemp1894= nctemp1898;
int nctemp1899=SemSerror(nctemp1888,nctemp1890,nctemp1894);
return 0;
}
struct symbol* nctemp1904= tp;
nctempchar1* nctemp1906=SymGetarray(nctemp1904);
nctempchar1* nctemp1902= nctemp1906;
struct nctempchar1 *nctemp1909;
static struct nctempchar1 nctemp1910 = {{ 6}, (char*)"array\0"};
nctemp1909=&nctemp1910;
nctempchar1* nctemp1907= nctemp1909;
int nctemp1911=LibeStrcmp(nctemp1902,nctemp1907);
if(nctemp1911)
{
struct tree* nctemp1917= np;
nctempchar1* nctemp1919=PtreeGetref(nctemp1917);
nctempchar1* nctemp1915= nctemp1919;
struct nctempchar1 *nctemp1922;
static struct nctempchar1 nctemp1923 = {{ 5}, (char*)"aref\0"};
nctemp1922=&nctemp1923;
nctempchar1* nctemp1920= nctemp1922;
int nctemp1924=LibeStrcmp(nctemp1915,nctemp1920);
int nctemp1912 = (nctemp1924 ==0);
if(nctemp1912)
{
struct tree* nctemp1927= p;
struct nctempchar1 *nctemp1931;
static struct nctempchar1 nctemp1932 = {{ 41}, (char*)"Function call does not match declaration\0"};
nctemp1931=&nctemp1932;
nctempchar1* nctemp1929= nctemp1931;
struct tree* nctemp1935= p;
nctempchar1* nctemp1937=PtreeGetdef(nctemp1935);
nctempchar1* nctemp1933= nctemp1937;
int nctemp1938=SemSerror(nctemp1927,nctemp1929,nctemp1933);
}
struct tree* nctemp1942= np;
int nctemp1944=PtreeGetrank(nctemp1942);
struct symbol* nctemp1946= tp;
int nctemp1948=SymGetrank(nctemp1946);
int nctemp1939 = (nctemp1944 !=nctemp1948);
if(nctemp1939)
{
struct tree* nctemp1950= p;
struct nctempchar1 *nctemp1954;
static struct nctempchar1 nctemp1955 = {{ 36}, (char*)"Illegal array rank in function call\0"};
nctemp1954=&nctemp1955;
nctempchar1* nctemp1952= nctemp1954;
struct tree* nctemp1958= p;
nctempchar1* nctemp1960=PtreeGetdef(nctemp1958);
nctempchar1* nctemp1956= nctemp1960;
int nctemp1961=SemSerror(nctemp1950,nctemp1952,nctemp1956);
}
}
struct tree* nctemp1966= np;
struct tree* nctemp1968=PtreeMvsister(nctemp1966);
np =nctemp1968;
}
int nctemp1969 = (np !=0);
nctemp1836=nctemp1969;}struct symbol* nctemp1976= tp;
struct symbol* nctemp1978=SymMvnext(nctemp1976);
int nctemp1973 = (nctemp1978 !=0);
if(nctemp1973)
{
struct tree* nctemp1981= p;
struct nctempchar1 *nctemp1985;
static struct nctempchar1 nctemp1986 = {{ 41}, (char*)"Function call does not match declaration\0"};
nctemp1985=&nctemp1986;
nctempchar1* nctemp1983= nctemp1985;
struct tree* nctemp1989= p;
nctempchar1* nctemp1991=PtreeGetdef(nctemp1989);
nctempchar1* nctemp1987= nctemp1991;
int nctemp1992=SemSerror(nctemp1981,nctemp1983,nctemp1987);
return 0;
}
}
return 1;
}
struct tree* SemExprlist (struct tree* p)
{
struct tree* nctemp1998= p;
nctempchar1* nctemp2000=PtreeGetname(nctemp1998);
nctempchar1* nctemp1996= nctemp2000;
struct nctempchar1 *nctemp2003;
static struct nctempchar1 nctemp2004 = {{ 9}, (char*)"exprlist\0"};
nctemp2003=&nctemp2004;
nctempchar1* nctemp2001= nctemp2003;
int nctemp2005=LibeStrcmp(nctemp1996,nctemp2001);
if(nctemp2005)
{
struct tree* nctemp2010= p;
struct tree* nctemp2012=PtreeMvchild(nctemp2010);
p =nctemp2012;
int nctemp2013 = (p !=0);
int nctemp2017=nctemp2013;
while(nctemp2017)
{{
struct tree* nctemp2019= p;
struct tree* nctemp2021=SemExpr(nctemp2019);
struct tree* nctemp2026= p;
struct tree* nctemp2028=PtreeMvsister(nctemp2026);
p =nctemp2028;
}
int nctemp2029 = (p !=0);
nctemp2017=nctemp2029;}}
return p;
}
int SemCopytype (struct tree* p,struct tree* np)
{
struct tree* nctemp2035= np;
struct tree* nctemp2039= p;
nctempchar1* nctemp2041=PtreeGetype(nctemp2039);
nctempchar1* nctemp2037= nctemp2041;
int nctemp2042=PtreeSetype(nctemp2035,nctemp2037);
struct tree* nctemp2044= np;
struct tree* nctemp2048= p;
nctempchar1* nctemp2050=PtreeGetstruct(nctemp2048);
nctempchar1* nctemp2046= nctemp2050;
int nctemp2051=PtreeSetstruct(nctemp2044,nctemp2046);
struct tree* nctemp2053= np;
struct tree* nctemp2057= p;
nctempchar1* nctemp2059=PtreeGetarray(nctemp2057);
nctempchar1* nctemp2055= nctemp2059;
int nctemp2060=PtreeSetarray(nctemp2053,nctemp2055);
struct tree* nctemp2062= np;
struct tree* nctemp2066= p;
nctempchar1* nctemp2068=PtreeGetref(nctemp2066);
nctempchar1* nctemp2064= nctemp2068;
int nctemp2069=PtreeSetref(nctemp2062,nctemp2064);
struct tree* nctemp2071= np;
struct tree* nctemp2075= p;
nctempchar1* nctemp2077=PtreeGetlval(nctemp2075);
nctempchar1* nctemp2073= nctemp2077;
int nctemp2078=PtreeSetlval(nctemp2071,nctemp2073);
struct tree* nctemp2080= np;
struct tree* nctemp2084= p;
int nctemp2086=PtreeGetrank(nctemp2084);
int nctemp2082= nctemp2086;
int nctemp2087=PtreeSetrank(nctemp2080,nctemp2082);
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
struct nctempchar1 *nctemp2094;
static struct nctempchar1 nctemp2095 = {{ 5}, (char*)"void\0"};
nctemp2094=&nctemp2095;
resultref=nctemp2094;
struct nctempchar1 *nctemp2101;
static struct nctempchar1 nctemp2102 = {{ 5}, (char*)"void\0"};
nctemp2101=&nctemp2102;
expref=nctemp2101;
struct tree* nctemp2106= p;
nctempchar1* nctemp2108=PtreeGetname(nctemp2106);
nctempchar1* nctemp2104= nctemp2108;
struct nctempchar1 *nctemp2111;
static struct nctempchar1 nctemp2112 = {{ 5}, (char*)"cast\0"};
nctemp2111=&nctemp2112;
nctempchar1* nctemp2109= nctemp2111;
int nctemp2113=LibeStrcmp(nctemp2104,nctemp2109);
if(nctemp2113)
{
struct tree* nctemp2118= p;
struct tree* nctemp2120=PtreeMvchild(nctemp2118);
np =nctemp2120;
struct tree* nctemp2126= np;
nctempchar1* nctemp2128=PtreeGetdef(nctemp2126);
resultype=nctemp2128;
struct tree* nctemp2130= np;
nctempchar1* nctemp2132= resultype;
int nctemp2135=PtreeSetype(nctemp2130,nctemp2132);
resultrank =0;
struct tree* nctemp2143= np;
nctempchar1* nctemp2145=PtreeGetarray(nctemp2143);
nctempchar1* nctemp2141= nctemp2145;
struct nctempchar1 *nctemp2148;
static struct nctempchar1 nctemp2149 = {{ 6}, (char*)"array\0"};
nctemp2148=&nctemp2149;
nctempchar1* nctemp2146= nctemp2148;
int nctemp2150=LibeStrcmp(nctemp2141,nctemp2146);
if(nctemp2150)
{
struct tree* nctemp2155= np;
struct tree* nctemp2157=PtreeMvchild(nctemp2155);
sp =nctemp2157;
struct tree* nctemp2162= sp;
struct tree* nctemp2164=PtreeMvchild(nctemp2162);
sp =nctemp2164;
struct tree* nctemp2169= sp;
struct tree* nctemp2171=PtreeMvchild(nctemp2169);
sp =nctemp2171;
struct tree* nctemp2173= sp;
struct tree* nctemp2175=SemExprlist(nctemp2173);
struct tree* nctemp2180= sp;
struct tree* nctemp2182=PtreeMvchild(nctemp2180);
sp =nctemp2182;
resultrank =1;
struct tree* nctemp2194= sp;
struct tree* nctemp2196=PtreeMvsister(nctemp2194);
sp =nctemp2196;
int nctemp2187 = (sp !=0);
int nctemp2198=nctemp2187;
while(nctemp2198)
{{
int nctemp2207 = resultrank + 1;
resultrank =nctemp2207;
}
struct tree* nctemp2215= sp;
struct tree* nctemp2217=PtreeMvsister(nctemp2215);
sp =nctemp2217;
int nctemp2208 = (sp !=0);
nctemp2198=nctemp2208;}struct tree* nctemp2220= np;
int nctemp2222= resultrank;
int nctemp2224=PtreeSetrank(nctemp2220,nctemp2222);
struct tree* nctemp2226= p;
int nctemp2228= resultrank;
int nctemp2230=PtreeSetrank(nctemp2226,nctemp2228);
struct tree* nctemp2232= np;
struct nctempchar1 *nctemp2236;
static struct nctempchar1 nctemp2237 = {{ 5}, (char*)"aref\0"};
nctemp2236=&nctemp2237;
nctempchar1* nctemp2234= nctemp2236;
int nctemp2238=PtreeSetref(nctemp2232,nctemp2234);
struct nctempchar1 *nctemp2246;
static struct nctempchar1 nctemp2247 = {{ 5}, (char*)"aref\0"};
nctemp2246=&nctemp2247;
nctempchar1* nctemp2244= nctemp2246;
nctempchar1* nctemp2248=LibeStrsave(nctemp2244);
resultref=nctemp2248;
}
else{
struct tree* nctemp2252= np;
nctempchar1* nctemp2254=PtreeGetstruct(nctemp2252);
nctempchar1* nctemp2250= nctemp2254;
struct nctempchar1 *nctemp2257;
static struct nctempchar1 nctemp2258 = {{ 7}, (char*)"struct\0"};
nctemp2257=&nctemp2258;
nctempchar1* nctemp2255= nctemp2257;
int nctemp2259=LibeStrcmp(nctemp2250,nctemp2255);
if(nctemp2259)
{
struct tree* nctemp2261= np;
struct nctempchar1 *nctemp2265;
static struct nctempchar1 nctemp2266 = {{ 5}, (char*)"sref\0"};
nctemp2265=&nctemp2266;
nctempchar1* nctemp2263= nctemp2265;
int nctemp2267=PtreeSetref(nctemp2261,nctemp2263);
struct nctempchar1 *nctemp2275;
static struct nctempchar1 nctemp2276 = {{ 5}, (char*)"sref\0"};
nctemp2275=&nctemp2276;
nctempchar1* nctemp2273= nctemp2275;
nctempchar1* nctemp2277=LibeStrsave(nctemp2273);
resultref=nctemp2277;
}
else{
struct nctempchar1 *nctemp2285;
static struct nctempchar1 nctemp2286 = {{ 5}, (char*)"void\0"};
nctemp2285=&nctemp2286;
nctempchar1* nctemp2283= nctemp2285;
nctempchar1* nctemp2287=LibeStrsave(nctemp2283);
resultref=nctemp2287;
}
}
struct tree* nctemp2289= np;
struct tree* nctemp2291= p;
int nctemp2293=SemCopytype(nctemp2289,nctemp2291);
struct tree* nctemp2298= np;
struct tree* nctemp2300=PtreeMvsister(nctemp2298);
np =nctemp2300;
struct tree* nctemp2302= np;
struct tree* nctemp2304=SemExpr(nctemp2302);
struct tree* nctemp2310= np;
nctempchar1* nctemp2312=PtreeGetype(nctemp2310);
exptype=nctemp2312;
struct tree* nctemp2318= np;
nctempchar1* nctemp2320=PtreeGetref(nctemp2318);
expref=nctemp2320;
nctempchar1* nctemp2324= resultref;
nctempchar1* nctemp2327= expref;
int nctemp2330=LibeStrcmp(nctemp2324,nctemp2327);
int nctemp2321 = (nctemp2330 ==0);
if(nctemp2321)
{
struct tree* nctemp2333= p;
struct nctempchar1 *nctemp2337;
static struct nctempchar1 nctemp2338 = {{ 19}, (char*)"Illegal conversion\0"};
nctemp2337=&nctemp2338;
nctempchar1* nctemp2335= nctemp2337;
struct nctempchar1 *nctemp2341;
static struct nctempchar1 nctemp2342 = {{ 2}, (char*)" \0"};
nctemp2341=&nctemp2342;
nctempchar1* nctemp2339= nctemp2341;
int nctemp2343=SemSerror(nctemp2333,nctemp2335,nctemp2339);
return 0;
}
nctempchar1* nctemp2351= resultref;
struct nctempchar1 *nctemp2356;
static struct nctempchar1 nctemp2357 = {{ 5}, (char*)"aref\0"};
nctemp2356=&nctemp2357;
nctempchar1* nctemp2354= nctemp2356;
int nctemp2358=LibeStrcmp(nctemp2351,nctemp2354);
int nctemp2348 = (nctemp2358 ==0);
nctempchar1* nctemp2364= resultref;
struct nctempchar1 *nctemp2369;
static struct nctempchar1 nctemp2370 = {{ 5}, (char*)"sref\0"};
nctemp2369=&nctemp2370;
nctempchar1* nctemp2367= nctemp2369;
int nctemp2371=LibeStrcmp(nctemp2364,nctemp2367);
int nctemp2361 = (nctemp2371 ==0);
int nctemp2345 = (nctemp2348 || nctemp2361);
if(nctemp2345)
{
nctempchar1* nctemp2374= resultype;
struct nctempchar1 *nctemp2379;
static struct nctempchar1 nctemp2380 = {{ 8}, (char*)"complex\0"};
nctemp2379=&nctemp2380;
nctempchar1* nctemp2377= nctemp2379;
int nctemp2381=LibeStrcmp(nctemp2374,nctemp2377);
if(nctemp2381)
{
struct tree* nctemp2383= p;
struct nctempchar1 *nctemp2387;
static struct nctempchar1 nctemp2388 = {{ 19}, (char*)"Illegal conversion\0"};
nctemp2387=&nctemp2388;
nctempchar1* nctemp2385= nctemp2387;
struct nctempchar1 *nctemp2391;
static struct nctempchar1 nctemp2392 = {{ 2}, (char*)" \0"};
nctemp2391=&nctemp2392;
nctempchar1* nctemp2389= nctemp2391;
int nctemp2393=SemSerror(nctemp2383,nctemp2385,nctemp2389);
}
return 0;
nctempchar1* nctemp2396= resultype;
struct nctempchar1 *nctemp2401;
static struct nctempchar1 nctemp2402 = {{ 4}, (char*)"int\0"};
nctemp2401=&nctemp2402;
nctempchar1* nctemp2399= nctemp2401;
int nctemp2403=LibeStrcmp(nctemp2396,nctemp2399);
if(nctemp2403)
{
nctempchar1* nctemp2407= exptype;
struct nctempchar1 *nctemp2412;
static struct nctempchar1 nctemp2413 = {{ 5}, (char*)"char\0"};
nctemp2412=&nctemp2413;
nctempchar1* nctemp2410= nctemp2412;
int nctemp2414=LibeStrcmp(nctemp2407,nctemp2410);
int nctemp2404 = (nctemp2414 ==0);
if(nctemp2404)
{
nctempchar1* nctemp2419= exptype;
struct nctempchar1 *nctemp2424;
static struct nctempchar1 nctemp2425 = {{ 6}, (char*)"float\0"};
nctemp2424=&nctemp2425;
nctempchar1* nctemp2422= nctemp2424;
int nctemp2426=LibeStrcmp(nctemp2419,nctemp2422);
int nctemp2416 = (nctemp2426 ==0);
if(nctemp2416)
{
struct tree* nctemp2429= p;
struct nctempchar1 *nctemp2433;
static struct nctempchar1 nctemp2434 = {{ 19}, (char*)"Illegal conversion\0"};
nctemp2433=&nctemp2434;
nctempchar1* nctemp2431= nctemp2433;
struct nctempchar1 *nctemp2437;
static struct nctempchar1 nctemp2438 = {{ 2}, (char*)" \0"};
nctemp2437=&nctemp2438;
nctempchar1* nctemp2435= nctemp2437;
int nctemp2439=SemSerror(nctemp2429,nctemp2431,nctemp2435);
}
}
return 0;
}
else{
nctempchar1* nctemp2442= resultype;
struct nctempchar1 *nctemp2447;
static struct nctempchar1 nctemp2448 = {{ 5}, (char*)"char\0"};
nctemp2447=&nctemp2448;
nctempchar1* nctemp2445= nctemp2447;
int nctemp2449=LibeStrcmp(nctemp2442,nctemp2445);
if(nctemp2449)
{
nctempchar1* nctemp2453= exptype;
struct nctempchar1 *nctemp2458;
static struct nctempchar1 nctemp2459 = {{ 4}, (char*)"int\0"};
nctemp2458=&nctemp2459;
nctempchar1* nctemp2456= nctemp2458;
int nctemp2460=LibeStrcmp(nctemp2453,nctemp2456);
int nctemp2450 = (nctemp2460 ==0);
if(nctemp2450)
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
}
return 0;
}
else{
nctempchar1* nctemp2476= resultype;
struct nctempchar1 *nctemp2481;
static struct nctempchar1 nctemp2482 = {{ 6}, (char*)"float\0"};
nctemp2481=&nctemp2482;
nctempchar1* nctemp2479= nctemp2481;
int nctemp2483=LibeStrcmp(nctemp2476,nctemp2479);
if(nctemp2483)
{
nctempchar1* nctemp2487= exptype;
struct nctempchar1 *nctemp2492;
static struct nctempchar1 nctemp2493 = {{ 4}, (char*)"int\0"};
nctemp2492=&nctemp2493;
nctempchar1* nctemp2490= nctemp2492;
int nctemp2494=LibeStrcmp(nctemp2487,nctemp2490);
int nctemp2484 = (nctemp2494 ==0);
if(nctemp2484)
{
struct tree* nctemp2497= np;
struct nctempchar1 *nctemp2501;
static struct nctempchar1 nctemp2502 = {{ 19}, (char*)"Illegal conversion\0"};
nctemp2501=&nctemp2502;
nctempchar1* nctemp2499= nctemp2501;
struct nctempchar1 *nctemp2505;
static struct nctempchar1 nctemp2506 = {{ 2}, (char*)" \0"};
nctemp2505=&nctemp2506;
nctempchar1* nctemp2503= nctemp2505;
int nctemp2507=SemSerror(nctemp2497,nctemp2499,nctemp2503);
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
struct tree* nctemp2513= p;
nctempchar1* nctemp2515=PtreeGetname(nctemp2513);
nctempchar1* nctemp2511= nctemp2515;
struct nctempchar1 *nctemp2518;
static struct nctempchar1 nctemp2519 = {{ 4}, (char*)"new\0"};
nctemp2518=&nctemp2519;
nctempchar1* nctemp2516= nctemp2518;
int nctemp2520=LibeStrcmp(nctemp2511,nctemp2516);
if(nctemp2520)
{
struct tree* nctemp2525= p;
struct tree* nctemp2527=PtreeMvchild(nctemp2525);
np =nctemp2527;
struct tree* nctemp2529= np;
nctempchar1* nctemp2531=PtreeGetdef(nctemp2529);
struct tree* nctemp2533= np;
struct tree* nctemp2537= np;
nctempchar1* nctemp2539=PtreeGetdef(nctemp2537);
nctempchar1* nctemp2535= nctemp2539;
int nctemp2540=PtreeSetype(nctemp2533,nctemp2535);
struct tree* nctemp2542= np;
struct tree* nctemp2544= p;
int nctemp2546=SemCopytype(nctemp2542,nctemp2544);
struct tree* nctemp2552= np;
nctempchar1* nctemp2554=PtreeGetarray(nctemp2552);
nctempchar1* nctemp2550= nctemp2554;
struct nctempchar1 *nctemp2557;
static struct nctempchar1 nctemp2558 = {{ 6}, (char*)"array\0"};
nctemp2557=&nctemp2558;
nctempchar1* nctemp2555= nctemp2557;
int nctemp2559=LibeStrcmp(nctemp2550,nctemp2555);
int nctemp2547 = (nctemp2559 ==0);
if(nctemp2547)
{
struct tree* nctemp2566= np;
nctempchar1* nctemp2568=PtreeGetstruct(nctemp2566);
nctempchar1* nctemp2564= nctemp2568;
struct nctempchar1 *nctemp2571;
static struct nctempchar1 nctemp2572 = {{ 7}, (char*)"struct\0"};
nctemp2571=&nctemp2572;
nctempchar1* nctemp2569= nctemp2571;
int nctemp2573=LibeStrcmp(nctemp2564,nctemp2569);
int nctemp2561 = (nctemp2573 ==0);
if(nctemp2561)
{
struct tree* nctemp2576= np;
struct nctempchar1 *nctemp2580;
static struct nctempchar1 nctemp2581 = {{ 44}, (char*)"Argument limited to array or structure type\0"};
nctemp2580=&nctemp2581;
nctempchar1* nctemp2578= nctemp2580;
struct nctempchar1 *nctemp2584;
static struct nctempchar1 nctemp2585 = {{ 3}, (char*)"  \0"};
nctemp2584=&nctemp2585;
nctempchar1* nctemp2582= nctemp2584;
int nctemp2586=SemSerror(nctemp2576,nctemp2578,nctemp2582);
}
}
struct tree* nctemp2590= np;
nctempchar1* nctemp2592=PtreeGetarray(nctemp2590);
nctempchar1* nctemp2588= nctemp2592;
struct nctempchar1 *nctemp2595;
static struct nctempchar1 nctemp2596 = {{ 6}, (char*)"array\0"};
nctemp2595=&nctemp2596;
nctempchar1* nctemp2593= nctemp2595;
int nctemp2597=LibeStrcmp(nctemp2588,nctemp2593);
if(nctemp2597)
{
struct tree* nctemp2602= np;
struct tree* nctemp2604=PtreeMvchild(nctemp2602);
sp =nctemp2604;
struct tree* nctemp2609= sp;
struct tree* nctemp2611=PtreeMvchild(nctemp2609);
sp =nctemp2611;
struct tree* nctemp2616= sp;
struct tree* nctemp2618=PtreeMvchild(nctemp2616);
sp =nctemp2618;
struct tree* nctemp2623= sp;
struct tree* nctemp2625=PtreeMvchild(nctemp2623);
sp =nctemp2625;
rank =1;
int nctemp2630 = (sp ==0);
if(nctemp2630)
{
struct tree* nctemp2635= np;
struct nctempchar1 *nctemp2639;
static struct nctempchar1 nctemp2640 = {{ 35}, (char*)"Missing array size in new operator\0"};
nctemp2639=&nctemp2640;
nctempchar1* nctemp2637= nctemp2639;
struct nctempchar1 *nctemp2643;
static struct nctempchar1 nctemp2644 = {{ 2}, (char*)" \0"};
nctemp2643=&nctemp2644;
nctempchar1* nctemp2641= nctemp2643;
int nctemp2645=SemSerror(nctemp2635,nctemp2637,nctemp2641);
}
struct tree* nctemp2647= sp;
struct tree* nctemp2649=SemExpr(nctemp2647);
struct tree* nctemp2657= sp;
struct tree* nctemp2659=PtreeMvsister(nctemp2657);
sp =nctemp2659;
int nctemp2650 = (sp !=0);
int nctemp2661=nctemp2650;
while(nctemp2661)
{{
struct tree* nctemp2663= sp;
struct tree* nctemp2665=SemExpr(nctemp2663);
int nctemp2674 = rank + 1;
rank =nctemp2674;
}
struct tree* nctemp2682= sp;
struct tree* nctemp2684=PtreeMvsister(nctemp2682);
sp =nctemp2684;
int nctemp2675 = (sp !=0);
nctemp2661=nctemp2675;}struct tree* nctemp2687= np;
int nctemp2689= rank;
int nctemp2691=PtreeSetrank(nctemp2687,nctemp2689);
struct tree* nctemp2693= p;
int nctemp2695= rank;
int nctemp2697=PtreeSetrank(nctemp2693,nctemp2695);
struct tree* nctemp2699= p;
struct nctempchar1 *nctemp2703;
static struct nctempchar1 nctemp2704 = {{ 5}, (char*)"aref\0"};
nctemp2703=&nctemp2704;
nctempchar1* nctemp2701= nctemp2703;
int nctemp2705=PtreeSetref(nctemp2699,nctemp2701);
}
else{
struct tree* nctemp2707= p;
struct nctempchar1 *nctemp2711;
static struct nctempchar1 nctemp2712 = {{ 5}, (char*)"sref\0"};
nctemp2711=&nctemp2712;
nctempchar1* nctemp2709= nctemp2711;
int nctemp2713=PtreeSetref(nctemp2707,nctemp2709);
}
}
return 1;
}
int SemDelete (struct tree* p)
{
struct tree* np;
struct tree* nctemp2718= p;
nctempchar1* nctemp2720=PtreeGetname(nctemp2718);
nctempchar1* nctemp2716= nctemp2720;
struct nctempchar1 *nctemp2723;
static struct nctempchar1 nctemp2724 = {{ 7}, (char*)"delete\0"};
nctemp2723=&nctemp2724;
nctempchar1* nctemp2721= nctemp2723;
int nctemp2725=LibeStrcmp(nctemp2716,nctemp2721);
if(nctemp2725)
{
struct tree* nctemp2730= p;
struct tree* nctemp2732=PtreeMvchild(nctemp2730);
np =nctemp2732;
struct tree* nctemp2734= np;
struct tree* nctemp2736=SemExpr(nctemp2734);
struct tree* nctemp2742= np;
nctempchar1* nctemp2744=PtreeGetref(nctemp2742);
nctempchar1* nctemp2740= nctemp2744;
struct nctempchar1 *nctemp2747;
static struct nctempchar1 nctemp2748 = {{ 5}, (char*)"aref\0"};
nctemp2747=&nctemp2748;
nctempchar1* nctemp2745= nctemp2747;
int nctemp2749=LibeStrcmp(nctemp2740,nctemp2745);
int nctemp2737 = (nctemp2749 ==0);
if(nctemp2737)
{
struct tree* nctemp2756= np;
nctempchar1* nctemp2758=PtreeGetref(nctemp2756);
nctempchar1* nctemp2754= nctemp2758;
struct nctempchar1 *nctemp2761;
static struct nctempchar1 nctemp2762 = {{ 5}, (char*)"sref\0"};
nctemp2761=&nctemp2762;
nctempchar1* nctemp2759= nctemp2761;
int nctemp2763=LibeStrcmp(nctemp2754,nctemp2759);
int nctemp2751 = (nctemp2763 ==0);
if(nctemp2751)
{
struct tree* nctemp2766= p;
struct nctempchar1 *nctemp2770;
static struct nctempchar1 nctemp2771 = {{ 25}, (char*)"not a array or structure\0"};
nctemp2770=&nctemp2771;
nctempchar1* nctemp2768= nctemp2770;
struct tree* nctemp2774= p;
nctempchar1* nctemp2776=PtreeGetdef(nctemp2774);
nctempchar1* nctemp2772= nctemp2776;
int nctemp2777=SemSerror(nctemp2766,nctemp2768,nctemp2772);
}
}
else{
struct tree* nctemp2779= p;
struct tree* nctemp2783= np;
nctempchar1* nctemp2785=PtreeGetype(nctemp2783);
nctempchar1* nctemp2781= nctemp2785;
int nctemp2786=PtreeSetype(nctemp2779,nctemp2781);
struct tree* nctemp2788= p;
struct tree* nctemp2792= np;
nctempchar1* nctemp2794=PtreeGetref(nctemp2792);
nctempchar1* nctemp2790= nctemp2794;
int nctemp2795=PtreeSetref(nctemp2788,nctemp2790);
}
}
return 1;
}
int SemCmplx (struct tree* p)
{
struct tree* np;
struct tree* nctemp2800= p;
nctempchar1* nctemp2802=PtreeGetname(nctemp2800);
nctempchar1* nctemp2798= nctemp2802;
struct nctempchar1 *nctemp2805;
static struct nctempchar1 nctemp2806 = {{ 6}, (char*)"cmplx\0"};
nctemp2805=&nctemp2806;
nctempchar1* nctemp2803= nctemp2805;
int nctemp2807=LibeStrcmp(nctemp2798,nctemp2803);
if(nctemp2807)
{
struct tree* nctemp2812= p;
struct tree* nctemp2814=PtreeMvchild(nctemp2812);
np =nctemp2814;
struct tree* nctemp2819= np;
struct tree* nctemp2821=PtreeMvchild(nctemp2819);
np =nctemp2821;
struct tree* nctemp2823= np;
struct tree* nctemp2825=SemExpr(nctemp2823);
struct tree* nctemp2831= np;
nctempchar1* nctemp2833=PtreeGetype(nctemp2831);
nctempchar1* nctemp2829= nctemp2833;
struct nctempchar1 *nctemp2836;
static struct nctempchar1 nctemp2837 = {{ 6}, (char*)"float\0"};
nctemp2836=&nctemp2837;
nctempchar1* nctemp2834= nctemp2836;
int nctemp2838=LibeStrcmp(nctemp2829,nctemp2834);
int nctemp2826 = (nctemp2838 ==0);
if(nctemp2826)
{
struct tree* nctemp2841= p;
struct nctempchar1 *nctemp2845;
static struct nctempchar1 nctemp2846 = {{ 33}, (char*)"Argument to cmplx is not a float\0"};
nctemp2845=&nctemp2846;
nctempchar1* nctemp2843= nctemp2845;
struct tree* nctemp2849= p;
nctempchar1* nctemp2851=PtreeGetdef(nctemp2849);
nctempchar1* nctemp2847= nctemp2851;
int nctemp2852=SemSerror(nctemp2841,nctemp2843,nctemp2847);
return 0;
}
struct tree* nctemp2859= np;
nctempchar1* nctemp2861=PtreeGetref(nctemp2859);
nctempchar1* nctemp2857= nctemp2861;
struct nctempchar1 *nctemp2864;
static struct nctempchar1 nctemp2865 = {{ 5}, (char*)"aref\0"};
nctemp2864=&nctemp2865;
nctempchar1* nctemp2862= nctemp2864;
int nctemp2866=LibeStrcmp(nctemp2857,nctemp2862);
struct tree* nctemp2870= np;
nctempchar1* nctemp2872=PtreeGetref(nctemp2870);
nctempchar1* nctemp2868= nctemp2872;
struct nctempchar1 *nctemp2875;
static struct nctempchar1 nctemp2876 = {{ 5}, (char*)"sref\0"};
nctemp2875=&nctemp2876;
nctempchar1* nctemp2873= nctemp2875;
int nctemp2877=LibeStrcmp(nctemp2868,nctemp2873);
int nctemp2854 = (nctemp2866 || nctemp2877);
if(nctemp2854)
{
struct tree* nctemp2879= p;
struct nctempchar1 *nctemp2883;
static struct nctempchar1 nctemp2884 = {{ 34}, (char*)"Argument to cmplx is not a scalar\0"};
nctemp2883=&nctemp2884;
nctempchar1* nctemp2881= nctemp2883;
struct tree* nctemp2887= p;
nctempchar1* nctemp2889=PtreeGetdef(nctemp2887);
nctempchar1* nctemp2885= nctemp2889;
int nctemp2890=SemSerror(nctemp2879,nctemp2881,nctemp2885);
return 0;
}
struct tree* nctemp2896= np;
struct tree* nctemp2898=PtreeMvsister(nctemp2896);
np =nctemp2898;
struct tree* nctemp2900= np;
struct tree* nctemp2902=SemExpr(nctemp2900);
struct tree* nctemp2908= np;
nctempchar1* nctemp2910=PtreeGetype(nctemp2908);
nctempchar1* nctemp2906= nctemp2910;
struct nctempchar1 *nctemp2913;
static struct nctempchar1 nctemp2914 = {{ 6}, (char*)"float\0"};
nctemp2913=&nctemp2914;
nctempchar1* nctemp2911= nctemp2913;
int nctemp2915=LibeStrcmp(nctemp2906,nctemp2911);
int nctemp2903 = (nctemp2915 ==0);
if(nctemp2903)
{
struct tree* nctemp2918= p;
struct nctempchar1 *nctemp2922;
static struct nctempchar1 nctemp2923 = {{ 33}, (char*)"Argument to cmplx is not a float\0"};
nctemp2922=&nctemp2923;
nctempchar1* nctemp2920= nctemp2922;
struct tree* nctemp2926= p;
nctempchar1* nctemp2928=PtreeGetdef(nctemp2926);
nctempchar1* nctemp2924= nctemp2928;
int nctemp2929=SemSerror(nctemp2918,nctemp2920,nctemp2924);
}
struct tree* nctemp2935= np;
nctempchar1* nctemp2937=PtreeGetref(nctemp2935);
nctempchar1* nctemp2933= nctemp2937;
struct nctempchar1 *nctemp2940;
static struct nctempchar1 nctemp2941 = {{ 5}, (char*)"aref\0"};
nctemp2940=&nctemp2941;
nctempchar1* nctemp2938= nctemp2940;
int nctemp2942=LibeStrcmp(nctemp2933,nctemp2938);
struct tree* nctemp2946= np;
nctempchar1* nctemp2948=PtreeGetref(nctemp2946);
nctempchar1* nctemp2944= nctemp2948;
struct nctempchar1 *nctemp2951;
static struct nctempchar1 nctemp2952 = {{ 5}, (char*)"sref\0"};
nctemp2951=&nctemp2952;
nctempchar1* nctemp2949= nctemp2951;
int nctemp2953=LibeStrcmp(nctemp2944,nctemp2949);
int nctemp2930 = (nctemp2942 || nctemp2953);
if(nctemp2930)
{
struct tree* nctemp2955= p;
struct nctempchar1 *nctemp2959;
static struct nctempchar1 nctemp2960 = {{ 34}, (char*)"Argument to cmplx is not a scalar\0"};
nctemp2959=&nctemp2960;
nctempchar1* nctemp2957= nctemp2959;
struct tree* nctemp2963= p;
nctempchar1* nctemp2965=PtreeGetdef(nctemp2963);
nctempchar1* nctemp2961= nctemp2965;
int nctemp2966=SemSerror(nctemp2955,nctemp2957,nctemp2961);
return 0;
}
struct tree* nctemp2969= p;
struct nctempchar1 *nctemp2973;
static struct nctempchar1 nctemp2974 = {{ 8}, (char*)"complex\0"};
nctemp2973=&nctemp2974;
nctempchar1* nctemp2971= nctemp2973;
int nctemp2975=PtreeSetype(nctemp2969,nctemp2971);
}
return 1;
}
int SemRe (struct tree* p)
{
struct tree* np;
struct tree* nctemp2980= p;
nctempchar1* nctemp2982=PtreeGetname(nctemp2980);
nctempchar1* nctemp2978= nctemp2982;
struct nctempchar1 *nctemp2985;
static struct nctempchar1 nctemp2986 = {{ 3}, (char*)"re\0"};
nctemp2985=&nctemp2986;
nctempchar1* nctemp2983= nctemp2985;
int nctemp2987=LibeStrcmp(nctemp2978,nctemp2983);
if(nctemp2987)
{
struct tree* nctemp2992= p;
struct tree* nctemp2994=PtreeMvchild(nctemp2992);
np =nctemp2994;
struct tree* nctemp2996= np;
struct tree* nctemp2998=SemExpr(nctemp2996);
struct tree* nctemp3004= np;
nctempchar1* nctemp3006=PtreeGetype(nctemp3004);
nctempchar1* nctemp3002= nctemp3006;
struct nctempchar1 *nctemp3009;
static struct nctempchar1 nctemp3010 = {{ 8}, (char*)"complex\0"};
nctemp3009=&nctemp3010;
nctempchar1* nctemp3007= nctemp3009;
int nctemp3011=LibeStrcmp(nctemp3002,nctemp3007);
int nctemp2999 = (nctemp3011 ==0);
if(nctemp2999)
{
struct tree* nctemp3014= p;
struct nctempchar1 *nctemp3018;
static struct nctempchar1 nctemp3019 = {{ 40}, (char*)"Argument to re is not a of type complex\0"};
nctemp3018=&nctemp3019;
nctempchar1* nctemp3016= nctemp3018;
struct tree* nctemp3022= p;
nctempchar1* nctemp3024=PtreeGetdef(nctemp3022);
nctempchar1* nctemp3020= nctemp3024;
int nctemp3025=SemSerror(nctemp3014,nctemp3016,nctemp3020);
return 0;
}
struct tree* nctemp3032= np;
nctempchar1* nctemp3034=PtreeGetref(nctemp3032);
nctempchar1* nctemp3030= nctemp3034;
struct nctempchar1 *nctemp3037;
static struct nctempchar1 nctemp3038 = {{ 5}, (char*)"aref\0"};
nctemp3037=&nctemp3038;
nctempchar1* nctemp3035= nctemp3037;
int nctemp3039=LibeStrcmp(nctemp3030,nctemp3035);
struct tree* nctemp3043= np;
nctempchar1* nctemp3045=PtreeGetref(nctemp3043);
nctempchar1* nctemp3041= nctemp3045;
struct nctempchar1 *nctemp3048;
static struct nctempchar1 nctemp3049 = {{ 5}, (char*)"sref\0"};
nctemp3048=&nctemp3049;
nctempchar1* nctemp3046= nctemp3048;
int nctemp3050=LibeStrcmp(nctemp3041,nctemp3046);
int nctemp3027 = (nctemp3039 || nctemp3050);
if(nctemp3027)
{
struct tree* nctemp3052= p;
struct nctempchar1 *nctemp3056;
static struct nctempchar1 nctemp3057 = {{ 31}, (char*)"Argument to re is not a scalar\0"};
nctemp3056=&nctemp3057;
nctempchar1* nctemp3054= nctemp3056;
struct tree* nctemp3060= p;
nctempchar1* nctemp3062=PtreeGetdef(nctemp3060);
nctempchar1* nctemp3058= nctemp3062;
int nctemp3063=SemSerror(nctemp3052,nctemp3054,nctemp3058);
return 0;
}
struct tree* nctemp3066= p;
struct nctempchar1 *nctemp3070;
static struct nctempchar1 nctemp3071 = {{ 6}, (char*)"float\0"};
nctemp3070=&nctemp3071;
nctempchar1* nctemp3068= nctemp3070;
int nctemp3072=PtreeSetype(nctemp3066,nctemp3068);
}
return 1;
}
int SemLen (struct tree* p)
{
struct tree* np;
struct tree* nctemp3079= p;
nctempchar1* nctemp3081=PtreeGetname(nctemp3079);
nctempchar1* nctemp3077= nctemp3081;
struct nctempchar1 *nctemp3084;
static struct nctempchar1 nctemp3085 = {{ 4}, (char*)"len\0"};
nctemp3084=&nctemp3085;
nctempchar1* nctemp3082= nctemp3084;
int nctemp3086=LibeStrcmp(nctemp3077,nctemp3082);
int nctemp3074 = (nctemp3086 ==1);
if(nctemp3074)
{
struct tree* nctemp3089= p;
struct nctempchar1 *nctemp3093;
static struct nctempchar1 nctemp3094 = {{ 4}, (char*)"int\0"};
nctemp3093=&nctemp3094;
nctempchar1* nctemp3091= nctemp3093;
int nctemp3095=PtreeSetype(nctemp3089,nctemp3091);
struct tree* nctemp3100= p;
struct tree* nctemp3102=PtreeMvchild(nctemp3100);
np =nctemp3102;
struct tree* nctemp3104= np;
struct tree* nctemp3106=SemExpr(nctemp3104);
struct tree* nctemp3112= np;
nctempchar1* nctemp3114=PtreeGetref(nctemp3112);
nctempchar1* nctemp3110= nctemp3114;
struct nctempchar1 *nctemp3117;
static struct nctempchar1 nctemp3118 = {{ 5}, (char*)"aref\0"};
nctemp3117=&nctemp3118;
nctempchar1* nctemp3115= nctemp3117;
int nctemp3119=LibeStrcmp(nctemp3110,nctemp3115);
int nctemp3107 = (nctemp3119 ==0);
if(nctemp3107)
{
struct tree* nctemp3122= p;
struct nctempchar1 *nctemp3126;
static struct nctempchar1 nctemp3127 = {{ 13}, (char*)"not an array\0"};
nctemp3126=&nctemp3127;
nctempchar1* nctemp3124= nctemp3126;
struct tree* nctemp3130= p;
nctempchar1* nctemp3132=PtreeGetdef(nctemp3130);
nctempchar1* nctemp3128= nctemp3132;
int nctemp3133=SemSerror(nctemp3122,nctemp3124,nctemp3128);
}
struct tree* nctemp3138= np;
struct tree* nctemp3140=PtreeMvsister(nctemp3138);
np =nctemp3140;
struct tree* nctemp3142= np;
struct tree* nctemp3144=SemExpr(nctemp3142);
struct tree* nctemp3148= np;
nctempchar1* nctemp3150=PtreeGetref(nctemp3148);
nctempchar1* nctemp3146= nctemp3150;
struct nctempchar1 *nctemp3153;
static struct nctempchar1 nctemp3154 = {{ 5}, (char*)"aref\0"};
nctemp3153=&nctemp3154;
nctempchar1* nctemp3151= nctemp3153;
int nctemp3155=LibeStrcmp(nctemp3146,nctemp3151);
if(nctemp3155)
{
struct tree* nctemp3157= p;
struct nctempchar1 *nctemp3161;
static struct nctempchar1 nctemp3162 = {{ 13}, (char*)"not a scalar\0"};
nctemp3161=&nctemp3162;
nctempchar1* nctemp3159= nctemp3161;
struct tree* nctemp3165= p;
nctempchar1* nctemp3167=PtreeGetdef(nctemp3165);
nctempchar1* nctemp3163= nctemp3167;
int nctemp3168=SemSerror(nctemp3157,nctemp3159,nctemp3163);
}
struct tree* nctemp3174= np;
nctempchar1* nctemp3176=PtreeGetype(nctemp3174);
nctempchar1* nctemp3172= nctemp3176;
struct nctempchar1 *nctemp3179;
static struct nctempchar1 nctemp3180 = {{ 4}, (char*)"int\0"};
nctemp3179=&nctemp3180;
nctempchar1* nctemp3177= nctemp3179;
int nctemp3181=LibeStrcmp(nctemp3172,nctemp3177);
int nctemp3169 = (nctemp3181 ==0);
if(nctemp3169)
{
struct tree* nctemp3184= p;
struct nctempchar1 *nctemp3188;
static struct nctempchar1 nctemp3189 = {{ 26}, (char*)"not an integer expression\0"};
nctemp3188=&nctemp3189;
nctempchar1* nctemp3186= nctemp3188;
struct tree* nctemp3192= p;
nctempchar1* nctemp3194=PtreeGetdef(nctemp3192);
nctempchar1* nctemp3190= nctemp3194;
int nctemp3195=SemSerror(nctemp3184,nctemp3186,nctemp3190);
}
struct tree* nctemp3203= np;
struct tree* nctemp3205=PtreeMvsister(nctemp3203);
np =nctemp3205;
int nctemp3196 = (np !=0);
if(nctemp3196)
{
struct tree* nctemp3208= p;
struct nctempchar1 *nctemp3212;
static struct nctempchar1 nctemp3213 = {{ 19}, (char*)"too many arguments\0"};
nctemp3212=&nctemp3213;
nctempchar1* nctemp3210= nctemp3212;
struct tree* nctemp3216= p;
nctempchar1* nctemp3218=PtreeGetdef(nctemp3216);
nctempchar1* nctemp3214= nctemp3218;
int nctemp3219=SemSerror(nctemp3208,nctemp3210,nctemp3214);
}
}
return 1;
}
int SemIm (struct tree* p)
{
struct tree* np;
struct tree* nctemp3224= p;
nctempchar1* nctemp3226=PtreeGetname(nctemp3224);
nctempchar1* nctemp3222= nctemp3226;
struct nctempchar1 *nctemp3229;
static struct nctempchar1 nctemp3230 = {{ 3}, (char*)"im\0"};
nctemp3229=&nctemp3230;
nctempchar1* nctemp3227= nctemp3229;
int nctemp3231=LibeStrcmp(nctemp3222,nctemp3227);
if(nctemp3231)
{
struct tree* nctemp3236= p;
struct tree* nctemp3238=PtreeMvchild(nctemp3236);
np =nctemp3238;
struct tree* nctemp3240= np;
struct tree* nctemp3242=SemExpr(nctemp3240);
struct tree* nctemp3248= np;
nctempchar1* nctemp3250=PtreeGetype(nctemp3248);
nctempchar1* nctemp3246= nctemp3250;
struct nctempchar1 *nctemp3253;
static struct nctempchar1 nctemp3254 = {{ 8}, (char*)"complex\0"};
nctemp3253=&nctemp3254;
nctempchar1* nctemp3251= nctemp3253;
int nctemp3255=LibeStrcmp(nctemp3246,nctemp3251);
int nctemp3243 = (nctemp3255 ==0);
if(nctemp3243)
{
struct tree* nctemp3258= p;
struct nctempchar1 *nctemp3262;
static struct nctempchar1 nctemp3263 = {{ 38}, (char*)"Argument to re is not of type complex\0"};
nctemp3262=&nctemp3263;
nctempchar1* nctemp3260= nctemp3262;
struct tree* nctemp3266= p;
nctempchar1* nctemp3268=PtreeGetdef(nctemp3266);
nctempchar1* nctemp3264= nctemp3268;
int nctemp3269=SemSerror(nctemp3258,nctemp3260,nctemp3264);
return 0;
}
struct tree* nctemp3276= np;
nctempchar1* nctemp3278=PtreeGetref(nctemp3276);
nctempchar1* nctemp3274= nctemp3278;
struct nctempchar1 *nctemp3281;
static struct nctempchar1 nctemp3282 = {{ 5}, (char*)"aref\0"};
nctemp3281=&nctemp3282;
nctempchar1* nctemp3279= nctemp3281;
int nctemp3283=LibeStrcmp(nctemp3274,nctemp3279);
struct tree* nctemp3287= np;
nctempchar1* nctemp3289=PtreeGetref(nctemp3287);
nctempchar1* nctemp3285= nctemp3289;
struct nctempchar1 *nctemp3292;
static struct nctempchar1 nctemp3293 = {{ 5}, (char*)"sref\0"};
nctemp3292=&nctemp3293;
nctempchar1* nctemp3290= nctemp3292;
int nctemp3294=LibeStrcmp(nctemp3285,nctemp3290);
int nctemp3271 = (nctemp3283 || nctemp3294);
if(nctemp3271)
{
struct tree* nctemp3296= p;
struct nctempchar1 *nctemp3300;
static struct nctempchar1 nctemp3301 = {{ 31}, (char*)"Argument to re is not a scalar\0"};
nctemp3300=&nctemp3301;
nctempchar1* nctemp3298= nctemp3300;
struct tree* nctemp3304= p;
nctempchar1* nctemp3306=PtreeGetdef(nctemp3304);
nctempchar1* nctemp3302= nctemp3306;
int nctemp3307=SemSerror(nctemp3296,nctemp3298,nctemp3302);
return 0;
}
struct tree* nctemp3310= p;
struct nctempchar1 *nctemp3314;
static struct nctempchar1 nctemp3315 = {{ 6}, (char*)"float\0"};
nctemp3314=&nctemp3315;
nctempchar1* nctemp3312= nctemp3314;
int nctemp3316=PtreeSetype(nctemp3310,nctemp3312);
}
return 1;
}
int SemSizeof (struct tree* p)
{
struct tree* nctemp3321= p;
nctempchar1* nctemp3323=PtreeGetname(nctemp3321);
nctempchar1* nctemp3319= nctemp3323;
struct nctempchar1 *nctemp3326;
static struct nctempchar1 nctemp3327 = {{ 7}, (char*)"sizeof\0"};
nctemp3326=&nctemp3327;
nctempchar1* nctemp3324= nctemp3326;
int nctemp3328=LibeStrcmp(nctemp3319,nctemp3324);
if(nctemp3328)
{
struct tree* nctemp3330= p;
struct nctempchar1 *nctemp3334;
static struct nctempchar1 nctemp3335 = {{ 4}, (char*)"int\0"};
nctemp3334=&nctemp3335;
nctempchar1* nctemp3332= nctemp3334;
int nctemp3336=PtreeSetype(nctemp3330,nctemp3332);
}
return 1;
}
int SemComparetype (struct tree* p,struct tree* np)
{
int rval;
rval = 1;
struct tree* nctemp3343= p;
nctempchar1* nctemp3345=PtreeGetype(nctemp3343);
nctempchar1* nctemp3341= nctemp3345;
struct tree* nctemp3348= np;
nctempchar1* nctemp3350=PtreeGetype(nctemp3348);
nctempchar1* nctemp3346= nctemp3350;
int nctemp3351=LibeStrcmp(nctemp3341,nctemp3346);
int nctemp3338 = (nctemp3351 ==0);
if(nctemp3338)
{
rval =0;
}
struct tree* nctemp3362= p;
nctempchar1* nctemp3364=PtreeGetref(nctemp3362);
nctempchar1* nctemp3360= nctemp3364;
struct tree* nctemp3367= np;
nctempchar1* nctemp3369=PtreeGetref(nctemp3367);
nctempchar1* nctemp3365= nctemp3369;
int nctemp3370=LibeStrcmp(nctemp3360,nctemp3365);
int nctemp3357 = (nctemp3370 ==0);
if(nctemp3357)
{
struct tree* nctemp3375= np;
nctempchar1* nctemp3377=PtreeGetname(nctemp3375);
nctempchar1* nctemp3373= nctemp3377;
struct nctempchar1 *nctemp3380;
static struct nctempchar1 nctemp3381 = {{ 10}, (char*)"iconstant\0"};
nctemp3380=&nctemp3381;
nctempchar1* nctemp3378= nctemp3380;
int nctemp3382=LibeStrcmp(nctemp3373,nctemp3378);
if(nctemp3382)
{
struct tree* nctemp3386= np;
nctempchar1* nctemp3388=PtreeGetdef(nctemp3386);
nctempchar1* nctemp3384= nctemp3388;
struct nctempchar1 *nctemp3391;
static struct nctempchar1 nctemp3392 = {{ 2}, (char*)"0\0"};
nctemp3391=&nctemp3392;
nctempchar1* nctemp3389= nctemp3391;
int nctemp3393=LibeStrcmp(nctemp3384,nctemp3389);
if(nctemp3393)
{
rval =1;
}
else{
rval =0;
}
}
else{
rval =0;
}
}
else{
struct tree* nctemp3411= p;
nctempchar1* nctemp3413=PtreeGetref(nctemp3411);
nctempchar1* nctemp3409= nctemp3413;
struct nctempchar1 *nctemp3416;
static struct nctempchar1 nctemp3417 = {{ 5}, (char*)"aref\0"};
nctemp3416=&nctemp3417;
nctempchar1* nctemp3414= nctemp3416;
int nctemp3418=LibeStrcmp(nctemp3409,nctemp3414);
int nctemp3406 = (nctemp3418 ==1);
if(nctemp3406)
{
struct tree* nctemp3423= p;
int nctemp3425=PtreeGetrank(nctemp3423);
struct tree* nctemp3427= np;
int nctemp3429=PtreeGetrank(nctemp3427);
int nctemp3420 = (nctemp3425 !=nctemp3429);
if(nctemp3420)
{
rval =0;
}
}
}
return rval;
}
struct tree* SemAsgexpr (struct tree* p)
{
struct tree* np;
struct tree* nctemp3439= p;
struct tree* nctemp3441=PtreeMvchild(nctemp3439);
np =nctemp3441;
struct tree* nctemp3447= np;
nctempchar1* nctemp3449=PtreeGetlval(nctemp3447);
nctempchar1* nctemp3445= nctemp3449;
struct nctempchar1 *nctemp3452;
static struct nctempchar1 nctemp3453 = {{ 5}, (char*)"lval\0"};
nctemp3452=&nctemp3453;
nctempchar1* nctemp3450= nctemp3452;
int nctemp3454=LibeStrcmp(nctemp3445,nctemp3450);
int nctemp3442 = (nctemp3454 ==0);
if(nctemp3442)
{
struct tree* nctemp3457= np;
struct nctempchar1 *nctemp3461;
static struct nctempchar1 nctemp3462 = {{ 17}, (char*)"Not a left value\0"};
nctemp3461=&nctemp3462;
nctempchar1* nctemp3459= nctemp3461;
struct tree* nctemp3465= np;
nctempchar1* nctemp3467=PtreeGetdef(nctemp3465);
nctempchar1* nctemp3463= nctemp3467;
int nctemp3468=SemSerror(nctemp3457,nctemp3459,nctemp3463);
}
else{
struct tree* nctemp3470= p;
struct nctempchar1 *nctemp3474;
static struct nctempchar1 nctemp3475 = {{ 5}, (char*)"lval\0"};
nctemp3474=&nctemp3475;
nctempchar1* nctemp3472= nctemp3474;
int nctemp3476=PtreeSetlval(nctemp3470,nctemp3472);
}
struct tree* nctemp3478= np;
struct tree* nctemp3480= p;
int nctemp3482=SemCopytype(nctemp3478,nctemp3480);
return p;
}
struct tree* SemRelexpr (struct tree* p)
{
struct tree* np;
struct tree* rp;
struct tree* nctemp3488= p;
struct tree* nctemp3490=PtreeMvchild(nctemp3488);
np =nctemp3490;
struct tree* nctemp3495= np;
struct tree* nctemp3497=PtreeMvsister(nctemp3495);
rp =nctemp3497;
struct tree* nctemp3503= p;
nctempchar1* nctemp3505=PtreeGetdef(nctemp3503);
nctempchar1* nctemp3501= nctemp3505;
struct nctempchar1 *nctemp3508;
static struct nctempchar1 nctemp3509 = {{ 3}, (char*)"==\0"};
nctemp3508=&nctemp3509;
nctempchar1* nctemp3506= nctemp3508;
int nctemp3510=LibeStrcmp(nctemp3501,nctemp3506);
int nctemp3498 = (nctemp3510 ==0);
if(nctemp3498)
{
struct tree* nctemp3517= p;
nctempchar1* nctemp3519=PtreeGetdef(nctemp3517);
nctempchar1* nctemp3515= nctemp3519;
struct nctempchar1 *nctemp3522;
static struct nctempchar1 nctemp3523 = {{ 3}, (char*)"!=\0"};
nctemp3522=&nctemp3523;
nctempchar1* nctemp3520= nctemp3522;
int nctemp3524=LibeStrcmp(nctemp3515,nctemp3520);
int nctemp3512 = (nctemp3524 ==0);
if(nctemp3512)
{
struct tree* nctemp3531= np;
nctempchar1* nctemp3533=PtreeGetref(nctemp3531);
nctempchar1* nctemp3529= nctemp3533;
struct nctempchar1 *nctemp3536;
static struct nctempchar1 nctemp3537 = {{ 5}, (char*)"aref\0"};
nctemp3536=&nctemp3537;
nctempchar1* nctemp3534= nctemp3536;
int nctemp3538=LibeStrcmp(nctemp3529,nctemp3534);
struct tree* nctemp3542= np;
nctempchar1* nctemp3544=PtreeGetref(nctemp3542);
nctempchar1* nctemp3540= nctemp3544;
struct nctempchar1 *nctemp3547;
static struct nctempchar1 nctemp3548 = {{ 5}, (char*)"sref\0"};
nctemp3547=&nctemp3548;
nctempchar1* nctemp3545= nctemp3547;
int nctemp3549=LibeStrcmp(nctemp3540,nctemp3545);
int nctemp3526 = (nctemp3538 || nctemp3549);
if(nctemp3526)
{
struct tree* nctemp3551= p;
struct nctempchar1 *nctemp3555;
static struct nctempchar1 nctemp3556 = {{ 18}, (char*)"Illegal operation\0"};
nctemp3555=&nctemp3556;
nctempchar1* nctemp3553= nctemp3555;
struct nctempchar1 *nctemp3559;
static struct nctempchar1 nctemp3560 = {{ 2}, (char*)" \0"};
nctemp3559=&nctemp3560;
nctempchar1* nctemp3557= nctemp3559;
int nctemp3561=SemSerror(nctemp3551,nctemp3553,nctemp3557);
}
else{
struct tree* nctemp3567= rp;
nctempchar1* nctemp3569=PtreeGetref(nctemp3567);
nctempchar1* nctemp3565= nctemp3569;
struct nctempchar1 *nctemp3572;
static struct nctempchar1 nctemp3573 = {{ 5}, (char*)"aref\0"};
nctemp3572=&nctemp3573;
nctempchar1* nctemp3570= nctemp3572;
int nctemp3574=LibeStrcmp(nctemp3565,nctemp3570);
struct tree* nctemp3578= np;
nctempchar1* nctemp3580=PtreeGetref(nctemp3578);
nctempchar1* nctemp3576= nctemp3580;
struct nctempchar1 *nctemp3583;
static struct nctempchar1 nctemp3584 = {{ 5}, (char*)"sref\0"};
nctemp3583=&nctemp3584;
nctempchar1* nctemp3581= nctemp3583;
int nctemp3585=LibeStrcmp(nctemp3576,nctemp3581);
int nctemp3562 = (nctemp3574 || nctemp3585);
if(nctemp3562)
{
struct tree* nctemp3587= p;
struct nctempchar1 *nctemp3591;
static struct nctempchar1 nctemp3592 = {{ 18}, (char*)"Illegal operation\0"};
nctemp3591=&nctemp3592;
nctempchar1* nctemp3589= nctemp3591;
struct nctempchar1 *nctemp3595;
static struct nctempchar1 nctemp3596 = {{ 2}, (char*)" \0"};
nctemp3595=&nctemp3596;
nctempchar1* nctemp3593= nctemp3595;
int nctemp3597=SemSerror(nctemp3587,nctemp3589,nctemp3593);
}
}
}
else{
struct tree* nctemp3601= np;
nctempchar1* nctemp3603=PtreeGetype(nctemp3601);
nctempchar1* nctemp3599= nctemp3603;
struct nctempchar1 *nctemp3606;
static struct nctempchar1 nctemp3607 = {{ 8}, (char*)"complex\0"};
nctemp3606=&nctemp3607;
nctempchar1* nctemp3604= nctemp3606;
int nctemp3608=LibeStrcmp(nctemp3599,nctemp3604);
if(nctemp3608)
{
struct tree* nctemp3610= p;
struct nctempchar1 *nctemp3614;
static struct nctempchar1 nctemp3615 = {{ 18}, (char*)"Illegal operation\0"};
nctemp3614=&nctemp3615;
nctempchar1* nctemp3612= nctemp3614;
struct nctempchar1 *nctemp3618;
static struct nctempchar1 nctemp3619 = {{ 2}, (char*)" \0"};
nctemp3618=&nctemp3619;
nctempchar1* nctemp3616= nctemp3618;
int nctemp3620=SemSerror(nctemp3610,nctemp3612,nctemp3616);
}
}
}
struct tree* nctemp3622= p;
struct nctempchar1 *nctemp3626;
static struct nctempchar1 nctemp3627 = {{ 4}, (char*)"int\0"};
nctemp3626=&nctemp3627;
nctempchar1* nctemp3624= nctemp3626;
int nctemp3628=PtreeSetype(nctemp3622,nctemp3624);
struct tree* nctemp3630= p;
struct nctempchar1 *nctemp3634;
static struct nctempchar1 nctemp3635 = {{ 5}, (char*)"void\0"};
nctemp3634=&nctemp3635;
nctempchar1* nctemp3632= nctemp3634;
int nctemp3636=PtreeSetlval(nctemp3630,nctemp3632);
struct tree* nctemp3638= p;
struct nctempchar1 *nctemp3642;
static struct nctempchar1 nctemp3643 = {{ 5}, (char*)"void\0"};
nctemp3642=&nctemp3643;
nctempchar1* nctemp3640= nctemp3642;
int nctemp3644=PtreeSetstruct(nctemp3638,nctemp3640);
return p;
}
struct tree* SemAddexpr (struct tree* p)
{
struct tree* np;
struct tree* rp;
struct tree* nctemp3650= p;
struct tree* nctemp3652=PtreeMvchild(nctemp3650);
np =nctemp3652;
struct tree* nctemp3657= np;
struct tree* nctemp3659=PtreeMvsister(nctemp3657);
rp =nctemp3659;
struct tree* nctemp3663= np;
nctempchar1* nctemp3665=PtreeGetref(nctemp3663);
nctempchar1* nctemp3661= nctemp3665;
struct nctempchar1 *nctemp3668;
static struct nctempchar1 nctemp3669 = {{ 5}, (char*)"sref\0"};
nctemp3668=&nctemp3669;
nctempchar1* nctemp3666= nctemp3668;
int nctemp3670=LibeStrcmp(nctemp3661,nctemp3666);
if(nctemp3670)
{
struct tree* nctemp3672= np;
struct nctempchar1 *nctemp3676;
static struct nctempchar1 nctemp3677 = {{ 18}, (char*)"Illegal operation\0"};
nctemp3676=&nctemp3677;
nctempchar1* nctemp3674= nctemp3676;
struct nctempchar1 *nctemp3680;
static struct nctempchar1 nctemp3681 = {{ 2}, (char*)" \0"};
nctemp3680=&nctemp3681;
nctempchar1* nctemp3678= nctemp3680;
int nctemp3682=SemSerror(nctemp3672,nctemp3674,nctemp3678);
}
else{
struct tree* nctemp3686= rp;
nctempchar1* nctemp3688=PtreeGetref(nctemp3686);
nctempchar1* nctemp3684= nctemp3688;
struct nctempchar1 *nctemp3691;
static struct nctempchar1 nctemp3692 = {{ 5}, (char*)"sref\0"};
nctemp3691=&nctemp3692;
nctempchar1* nctemp3689= nctemp3691;
int nctemp3693=LibeStrcmp(nctemp3684,nctemp3689);
if(nctemp3693)
{
struct tree* nctemp3695= np;
struct nctempchar1 *nctemp3699;
static struct nctempchar1 nctemp3700 = {{ 18}, (char*)"Illegal operation\0"};
nctemp3699=&nctemp3700;
nctempchar1* nctemp3697= nctemp3699;
struct nctempchar1 *nctemp3703;
static struct nctempchar1 nctemp3704 = {{ 2}, (char*)" \0"};
nctemp3703=&nctemp3704;
nctempchar1* nctemp3701= nctemp3703;
int nctemp3705=SemSerror(nctemp3695,nctemp3697,nctemp3701);
}
else{
struct tree* nctemp3707= np;
struct tree* nctemp3709= p;
int nctemp3711=SemCopytype(nctemp3707,nctemp3709);
struct tree* nctemp3713= p;
struct nctempchar1 *nctemp3717;
static struct nctempchar1 nctemp3718 = {{ 5}, (char*)"void\0"};
nctemp3717=&nctemp3718;
nctempchar1* nctemp3715= nctemp3717;
int nctemp3719=PtreeSetlval(nctemp3713,nctemp3715);
}
}
return p;
}
struct tree* SemBinexpr (struct tree* p)
{
struct tree* leftp;
struct tree* rightp;
struct tree* np;
np = p;
struct tree* nctemp3724= p;
nctempchar1* nctemp3726=PtreeGetname(nctemp3724);
nctempchar1* nctemp3722= nctemp3726;
struct nctempchar1 *nctemp3729;
static struct nctempchar1 nctemp3730 = {{ 8}, (char*)"binexpr\0"};
nctemp3729=&nctemp3730;
nctempchar1* nctemp3727= nctemp3729;
int nctemp3731=LibeStrcmp(nctemp3722,nctemp3727);
if(nctemp3731)
{
struct tree* nctemp3736= p;
struct tree* nctemp3738=PtreeMvchild(nctemp3736);
p =nctemp3738;
struct tree* nctemp3743= p;
struct tree* nctemp3745=SemUnexpr(nctemp3743);
leftp =nctemp3745;
struct tree* nctemp3750= p;
struct tree* nctemp3752=PtreeMvsister(nctemp3750);
p =nctemp3752;
struct tree* nctemp3757= p;
struct tree* nctemp3759=SemUnexpr(nctemp3757);
rightp =nctemp3759;
struct tree* nctemp3763= leftp;
struct tree* nctemp3765= rightp;
int nctemp3767=SemComparetype(nctemp3763,nctemp3765);
int nctemp3760 = (nctemp3767 ==0);
if(nctemp3760)
{
struct tree* nctemp3770= p;
struct nctempchar1 *nctemp3774;
static struct nctempchar1 nctemp3775 = {{ 11}, (char*)"Type error\0"};
nctemp3774=&nctemp3775;
nctempchar1* nctemp3772= nctemp3774;
struct nctempchar1 *nctemp3778;
static struct nctempchar1 nctemp3779 = {{ 2}, (char*)" \0"};
nctemp3778=&nctemp3779;
nctempchar1* nctemp3776= nctemp3778;
int nctemp3780=SemSerror(nctemp3770,nctemp3772,nctemp3776);
return p;
}
else{
struct tree* nctemp3785= np;
nctempchar1* nctemp3787=PtreeGetdef(nctemp3785);
nctempchar1* nctemp3783= nctemp3787;
struct nctempchar1 *nctemp3790;
static struct nctempchar1 nctemp3791 = {{ 2}, (char*)"=\0"};
nctemp3790=&nctemp3791;
nctempchar1* nctemp3788= nctemp3790;
int nctemp3792=LibeStrcmp(nctemp3783,nctemp3788);
if(nctemp3792)
{
struct tree* nctemp3794= np;
struct tree* nctemp3796=SemAsgexpr(nctemp3794);
}
else{
struct tree* nctemp3820= np;
nctempchar1* nctemp3822=PtreeGetdef(nctemp3820);
nctempchar1* nctemp3818= nctemp3822;
struct nctempchar1 *nctemp3825;
static struct nctempchar1 nctemp3826 = {{ 3}, (char*)"!=\0"};
nctemp3825=&nctemp3826;
nctempchar1* nctemp3823= nctemp3825;
int nctemp3827=LibeStrcmp(nctemp3818,nctemp3823);
struct tree* nctemp3831= np;
nctempchar1* nctemp3833=PtreeGetdef(nctemp3831);
nctempchar1* nctemp3829= nctemp3833;
struct nctempchar1 *nctemp3836;
static struct nctempchar1 nctemp3837 = {{ 3}, (char*)"==\0"};
nctemp3836=&nctemp3837;
nctempchar1* nctemp3834= nctemp3836;
int nctemp3838=LibeStrcmp(nctemp3829,nctemp3834);
int nctemp3815 = (nctemp3827 || nctemp3838);
struct tree* nctemp3842= np;
nctempchar1* nctemp3844=PtreeGetdef(nctemp3842);
nctempchar1* nctemp3840= nctemp3844;
struct nctempchar1 *nctemp3847;
static struct nctempchar1 nctemp3848 = {{ 3}, (char*)"||\0"};
nctemp3847=&nctemp3848;
nctempchar1* nctemp3845= nctemp3847;
int nctemp3849=LibeStrcmp(nctemp3840,nctemp3845);
int nctemp3812 = (nctemp3815 || nctemp3849);
struct tree* nctemp3853= np;
nctempchar1* nctemp3855=PtreeGetdef(nctemp3853);
nctempchar1* nctemp3851= nctemp3855;
struct nctempchar1 *nctemp3858;
static struct nctempchar1 nctemp3859 = {{ 3}, (char*)"<=\0"};
nctemp3858=&nctemp3859;
nctempchar1* nctemp3856= nctemp3858;
int nctemp3860=LibeStrcmp(nctemp3851,nctemp3856);
int nctemp3809 = (nctemp3812 || nctemp3860);
struct tree* nctemp3864= np;
nctempchar1* nctemp3866=PtreeGetdef(nctemp3864);
nctempchar1* nctemp3862= nctemp3866;
struct nctempchar1 *nctemp3869;
static struct nctempchar1 nctemp3870 = {{ 3}, (char*)">=\0"};
nctemp3869=&nctemp3870;
nctempchar1* nctemp3867= nctemp3869;
int nctemp3871=LibeStrcmp(nctemp3862,nctemp3867);
int nctemp3806 = (nctemp3809 || nctemp3871);
struct tree* nctemp3875= np;
nctempchar1* nctemp3877=PtreeGetdef(nctemp3875);
nctempchar1* nctemp3873= nctemp3877;
struct nctempchar1 *nctemp3880;
static struct nctempchar1 nctemp3881 = {{ 2}, (char*)"<\0"};
nctemp3880=&nctemp3881;
nctempchar1* nctemp3878= nctemp3880;
int nctemp3882=LibeStrcmp(nctemp3873,nctemp3878);
int nctemp3803 = (nctemp3806 || nctemp3882);
struct tree* nctemp3886= np;
nctempchar1* nctemp3888=PtreeGetdef(nctemp3886);
nctempchar1* nctemp3884= nctemp3888;
struct nctempchar1 *nctemp3891;
static struct nctempchar1 nctemp3892 = {{ 2}, (char*)">\0"};
nctemp3891=&nctemp3892;
nctempchar1* nctemp3889= nctemp3891;
int nctemp3893=LibeStrcmp(nctemp3884,nctemp3889);
int nctemp3800 = (nctemp3803 || nctemp3893);
struct tree* nctemp3897= np;
nctempchar1* nctemp3899=PtreeGetdef(nctemp3897);
nctempchar1* nctemp3895= nctemp3899;
struct nctempchar1 *nctemp3902;
static struct nctempchar1 nctemp3903 = {{ 3}, (char*)"&&\0"};
nctemp3902=&nctemp3903;
nctempchar1* nctemp3900= nctemp3902;
int nctemp3904=LibeStrcmp(nctemp3895,nctemp3900);
int nctemp3797 = (nctemp3800 || nctemp3904);
if(nctemp3797)
{
struct tree* nctemp3906= np;
struct tree* nctemp3908=SemRelexpr(nctemp3906);
}
else{
struct tree* nctemp3920= np;
nctempchar1* nctemp3922=PtreeGetdef(nctemp3920);
nctempchar1* nctemp3918= nctemp3922;
struct nctempchar1 *nctemp3925;
static struct nctempchar1 nctemp3926 = {{ 2}, (char*)"+\0"};
nctemp3925=&nctemp3926;
nctempchar1* nctemp3923= nctemp3925;
int nctemp3927=LibeStrcmp(nctemp3918,nctemp3923);
struct tree* nctemp3931= np;
nctempchar1* nctemp3933=PtreeGetdef(nctemp3931);
nctempchar1* nctemp3929= nctemp3933;
struct nctempchar1 *nctemp3936;
static struct nctempchar1 nctemp3937 = {{ 2}, (char*)"-\0"};
nctemp3936=&nctemp3937;
nctempchar1* nctemp3934= nctemp3936;
int nctemp3938=LibeStrcmp(nctemp3929,nctemp3934);
int nctemp3915 = (nctemp3927 || nctemp3938);
struct tree* nctemp3942= np;
nctempchar1* nctemp3944=PtreeGetdef(nctemp3942);
nctempchar1* nctemp3940= nctemp3944;
struct nctempchar1 *nctemp3947;
static struct nctempchar1 nctemp3948 = {{ 2}, (char*)"*\0"};
nctemp3947=&nctemp3948;
nctempchar1* nctemp3945= nctemp3947;
int nctemp3949=LibeStrcmp(nctemp3940,nctemp3945);
int nctemp3912 = (nctemp3915 || nctemp3949);
struct tree* nctemp3953= np;
nctempchar1* nctemp3955=PtreeGetdef(nctemp3953);
nctempchar1* nctemp3951= nctemp3955;
struct nctempchar1 *nctemp3958;
static struct nctempchar1 nctemp3959 = {{ 2}, (char*)"/\0"};
nctemp3958=&nctemp3959;
nctempchar1* nctemp3956= nctemp3958;
int nctemp3960=LibeStrcmp(nctemp3951,nctemp3956);
int nctemp3909 = (nctemp3912 || nctemp3960);
if(nctemp3909)
{
struct tree* nctemp3962= np;
struct tree* nctemp3964=SemAddexpr(nctemp3962);
}
}
}
return np;
}
}
else{
struct tree* nctemp3967= p;
struct tree* nctemp3969=SemUnexpr(nctemp3967);
return nctemp3969;
}
}
struct tree* SemExpr (struct tree* p)
{
struct tree* sp;
struct tree* nctemp3974= p;
struct tree* nctemp3976=PtreeMvchild(nctemp3974);
sp =nctemp3976;
struct tree* nctemp3981= sp;
struct tree* nctemp3983=SemBinexpr(nctemp3981);
sp =nctemp3983;
struct tree* nctemp3985= sp;
struct tree* nctemp3987= p;
int nctemp3989=SemCopytype(nctemp3985,nctemp3987);
struct tree* nctemp3993= p;
int nctemp3995=PtreeGetopexpr(nctemp3993);
int nctemp3990 = (nctemp3995 ==1);
if(nctemp3990)
{
int nctemp4000=SemGetsimple();
int nctemp3997 = (nctemp4000 ==0);
if(nctemp3997)
{
struct tree* nctemp4003= p;
int nctemp4005= 0;
int nctemp4007=PtreeSetsimple(nctemp4003,nctemp4005);
int nctemp4009= 1;
int nctemp4011=SemSetsimple(nctemp4009);
}
else{
struct tree* nctemp4013= p;
int nctemp4015= 1;
int nctemp4017=PtreeSetsimple(nctemp4013,nctemp4015);
}
}
return p;
}
struct tree* SemUnexpr (struct tree* p)
{
struct tree* np;
np = p;
struct tree* nctemp4022= p;
nctempchar1* nctemp4024=PtreeGetname(nctemp4022);
nctempchar1* nctemp4020= nctemp4024;
struct nctempchar1 *nctemp4027;
static struct nctempchar1 nctemp4028 = {{ 7}, (char*)"unexpr\0"};
nctemp4027=&nctemp4028;
nctempchar1* nctemp4025= nctemp4027;
int nctemp4029=LibeStrcmp(nctemp4020,nctemp4025);
if(nctemp4029)
{
struct tree* nctemp4034= p;
struct tree* nctemp4036=PtreeMvchild(nctemp4034);
p =nctemp4036;
struct tree* nctemp4041= p;
struct tree* nctemp4043=SemPrimexpr(nctemp4041);
p =nctemp4043;
struct tree* nctemp4045= p;
struct tree* nctemp4047= np;
int nctemp4049=SemCopytype(nctemp4045,nctemp4047);
return np;
}
else{
struct tree* nctemp4052= p;
struct tree* nctemp4054=SemPrimexpr(nctemp4052);
return nctemp4054;
}
}
struct tree* SemPrimexpr (struct tree* p)
{
struct tree* nctemp4058= p;
nctempchar1* nctemp4060=PtreeGetname(nctemp4058);
nctempchar1* nctemp4056= nctemp4060;
struct nctempchar1 *nctemp4063;
static struct nctempchar1 nctemp4064 = {{ 11}, (char*)"identifier\0"};
nctemp4063=&nctemp4064;
nctempchar1* nctemp4061= nctemp4063;
int nctemp4065=LibeStrcmp(nctemp4056,nctemp4061);
if(nctemp4065)
{
struct tree* nctemp4067= p;
int nctemp4069=SemId(nctemp4067);
return p;
}
else{
struct tree* nctemp4074= p;
nctempchar1* nctemp4076=PtreeGetname(nctemp4074);
nctempchar1* nctemp4072= nctemp4076;
struct nctempchar1 *nctemp4079;
static struct nctempchar1 nctemp4080 = {{ 6}, (char*)"fcall\0"};
nctemp4079=&nctemp4080;
nctempchar1* nctemp4077= nctemp4079;
int nctemp4081=LibeStrcmp(nctemp4072,nctemp4077);
if(nctemp4081)
{
int nctemp4083= 0;
int nctemp4085=SemSetsimple(nctemp4083);
struct tree* nctemp4087= p;
int nctemp4089=SemFcall(nctemp4087);
return p;
}
else{
struct tree* nctemp4094= p;
nctempchar1* nctemp4096=PtreeGetname(nctemp4094);
nctempchar1* nctemp4092= nctemp4096;
struct nctempchar1 *nctemp4099;
static struct nctempchar1 nctemp4100 = {{ 5}, (char*)"cast\0"};
nctemp4099=&nctemp4100;
nctempchar1* nctemp4097= nctemp4099;
int nctemp4101=LibeStrcmp(nctemp4092,nctemp4097);
if(nctemp4101)
{
int nctemp4103= 0;
int nctemp4105=SemSetsimple(nctemp4103);
struct tree* nctemp4107= p;
int nctemp4109=SemCast(nctemp4107);
return p;
}
else{
struct tree* nctemp4114= p;
nctempchar1* nctemp4116=PtreeGetname(nctemp4114);
nctempchar1* nctemp4112= nctemp4116;
struct nctempchar1 *nctemp4119;
static struct nctempchar1 nctemp4120 = {{ 4}, (char*)"new\0"};
nctemp4119=&nctemp4120;
nctempchar1* nctemp4117= nctemp4119;
int nctemp4121=LibeStrcmp(nctemp4112,nctemp4117);
if(nctemp4121)
{
int nctemp4123= 0;
int nctemp4125=SemSetsimple(nctemp4123);
struct tree* nctemp4127= p;
int nctemp4129=SemNew(nctemp4127);
return p;
}
else{
struct tree* nctemp4134= p;
nctempchar1* nctemp4136=PtreeGetname(nctemp4134);
nctempchar1* nctemp4132= nctemp4136;
struct nctempchar1 *nctemp4139;
static struct nctempchar1 nctemp4140 = {{ 7}, (char*)"delete\0"};
nctemp4139=&nctemp4140;
nctempchar1* nctemp4137= nctemp4139;
int nctemp4141=LibeStrcmp(nctemp4132,nctemp4137);
if(nctemp4141)
{
int nctemp4143= 0;
int nctemp4145=SemSetsimple(nctemp4143);
struct tree* nctemp4147= p;
int nctemp4149=SemDelete(nctemp4147);
return p;
}
else{
struct tree* nctemp4154= p;
nctempchar1* nctemp4156=PtreeGetname(nctemp4154);
nctempchar1* nctemp4152= nctemp4156;
struct nctempchar1 *nctemp4159;
static struct nctempchar1 nctemp4160 = {{ 6}, (char*)"cmplx\0"};
nctemp4159=&nctemp4160;
nctempchar1* nctemp4157= nctemp4159;
int nctemp4161=LibeStrcmp(nctemp4152,nctemp4157);
if(nctemp4161)
{
int nctemp4163= 0;
int nctemp4165=SemSetsimple(nctemp4163);
struct tree* nctemp4167= p;
int nctemp4169=SemCmplx(nctemp4167);
return p;
}
else{
struct tree* nctemp4174= p;
nctempchar1* nctemp4176=PtreeGetname(nctemp4174);
nctempchar1* nctemp4172= nctemp4176;
struct nctempchar1 *nctemp4179;
static struct nctempchar1 nctemp4180 = {{ 3}, (char*)"re\0"};
nctemp4179=&nctemp4180;
nctempchar1* nctemp4177= nctemp4179;
int nctemp4181=LibeStrcmp(nctemp4172,nctemp4177);
if(nctemp4181)
{
int nctemp4183= 0;
int nctemp4185=SemSetsimple(nctemp4183);
struct tree* nctemp4187= p;
int nctemp4189=SemRe(nctemp4187);
return p;
}
else{
struct tree* nctemp4194= p;
nctempchar1* nctemp4196=PtreeGetname(nctemp4194);
nctempchar1* nctemp4192= nctemp4196;
struct nctempchar1 *nctemp4199;
static struct nctempchar1 nctemp4200 = {{ 4}, (char*)"len\0"};
nctemp4199=&nctemp4200;
nctempchar1* nctemp4197= nctemp4199;
int nctemp4201=LibeStrcmp(nctemp4192,nctemp4197);
if(nctemp4201)
{
int nctemp4203= 0;
int nctemp4205=SemSetsimple(nctemp4203);
struct tree* nctemp4207= p;
int nctemp4209=SemLen(nctemp4207);
return p;
}
else{
struct tree* nctemp4214= p;
nctempchar1* nctemp4216=PtreeGetname(nctemp4214);
nctempchar1* nctemp4212= nctemp4216;
struct nctempchar1 *nctemp4219;
static struct nctempchar1 nctemp4220 = {{ 3}, (char*)"im\0"};
nctemp4219=&nctemp4220;
nctempchar1* nctemp4217= nctemp4219;
int nctemp4221=LibeStrcmp(nctemp4212,nctemp4217);
if(nctemp4221)
{
int nctemp4223= 0;
int nctemp4225=SemSetsimple(nctemp4223);
struct tree* nctemp4227= p;
int nctemp4229=SemIm(nctemp4227);
return p;
}
else{
struct tree* nctemp4234= p;
nctempchar1* nctemp4236=PtreeGetname(nctemp4234);
nctempchar1* nctemp4232= nctemp4236;
struct nctempchar1 *nctemp4239;
static struct nctempchar1 nctemp4240 = {{ 7}, (char*)"sizeof\0"};
nctemp4239=&nctemp4240;
nctempchar1* nctemp4237= nctemp4239;
int nctemp4241=LibeStrcmp(nctemp4232,nctemp4237);
if(nctemp4241)
{
int nctemp4243= 0;
int nctemp4245=SemSetsimple(nctemp4243);
struct tree* nctemp4247= p;
int nctemp4249=SemSizeof(nctemp4247);
return p;
}
else{
struct tree* nctemp4254= p;
nctempchar1* nctemp4256=PtreeGetname(nctemp4254);
nctempchar1* nctemp4252= nctemp4256;
struct nctempchar1 *nctemp4259;
static struct nctempchar1 nctemp4260 = {{ 10}, (char*)"iconstant\0"};
nctemp4259=&nctemp4260;
nctempchar1* nctemp4257= nctemp4259;
int nctemp4261=LibeStrcmp(nctemp4252,nctemp4257);
if(nctemp4261)
{
struct tree* nctemp4263= p;
struct nctempchar1 *nctemp4267;
static struct nctempchar1 nctemp4268 = {{ 4}, (char*)"int\0"};
nctemp4267=&nctemp4268;
nctempchar1* nctemp4265= nctemp4267;
int nctemp4269=PtreeSetype(nctemp4263,nctemp4265);
return p;
}
else{
struct tree* nctemp4274= p;
nctempchar1* nctemp4276=PtreeGetname(nctemp4274);
nctempchar1* nctemp4272= nctemp4276;
struct nctempchar1 *nctemp4279;
static struct nctempchar1 nctemp4280 = {{ 10}, (char*)"rconstant\0"};
nctemp4279=&nctemp4280;
nctempchar1* nctemp4277= nctemp4279;
int nctemp4281=LibeStrcmp(nctemp4272,nctemp4277);
if(nctemp4281)
{
struct tree* nctemp4283= p;
struct nctempchar1 *nctemp4287;
static struct nctempchar1 nctemp4288 = {{ 6}, (char*)"float\0"};
nctemp4287=&nctemp4288;
nctempchar1* nctemp4285= nctemp4287;
int nctemp4289=PtreeSetype(nctemp4283,nctemp4285);
return p;
}
else{
struct tree* nctemp4294= p;
nctempchar1* nctemp4296=PtreeGetname(nctemp4294);
nctempchar1* nctemp4292= nctemp4296;
struct nctempchar1 *nctemp4299;
static struct nctempchar1 nctemp4300 = {{ 10}, (char*)"sconstant\0"};
nctemp4299=&nctemp4300;
nctempchar1* nctemp4297= nctemp4299;
int nctemp4301=LibeStrcmp(nctemp4292,nctemp4297);
if(nctemp4301)
{
int nctemp4303= 0;
int nctemp4305=SemSetsimple(nctemp4303);
struct tree* nctemp4307= p;
struct nctempchar1 *nctemp4311;
static struct nctempchar1 nctemp4312 = {{ 5}, (char*)"char\0"};
nctemp4311=&nctemp4312;
nctempchar1* nctemp4309= nctemp4311;
int nctemp4313=PtreeSetype(nctemp4307,nctemp4309);
struct tree* nctemp4315= p;
struct nctempchar1 *nctemp4319;
static struct nctempchar1 nctemp4320 = {{ 5}, (char*)"aref\0"};
nctemp4319=&nctemp4320;
nctempchar1* nctemp4317= nctemp4319;
int nctemp4321=PtreeSetref(nctemp4315,nctemp4317);
struct tree* nctemp4323= p;
int nctemp4325= 1;
int nctemp4327=PtreeSetrank(nctemp4323,nctemp4325);
return p;
}
else{
struct tree* nctemp4330= p;
struct tree* nctemp4332=SemBinexpr(nctemp4330);
return nctemp4332;
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
struct tree* nctemp4334= p;
struct tree* nctemp4338= np;
nctempchar1* nctemp4340=PtreeGetparallel(nctemp4338);
nctempchar1* nctemp4336= nctemp4340;
int nctemp4341=PtreeSetparallel(nctemp4334,nctemp4336);
return 1;
}
int SemArgtypes (struct tree* p,struct symbol* tp)
{
nctempchar1 *name;
struct symbol* nctemp4348= tp;
nctempchar1* nctemp4350=SymGetname(nctemp4348);
name=nctemp4350;
struct tree* nctemp4352= p;
struct symbol* nctemp4354= tp;
int nctemp4356=SemArgtype(nctemp4352,nctemp4354);
struct tree* nctemp4361= p;
struct tree* nctemp4363=PtreeMvchild(nctemp4361);
p =nctemp4363;
struct tree* nctemp4369= p;
nctempchar1* nctemp4371=PtreeGetname(nctemp4369);
nctempchar1* nctemp4367= nctemp4371;
struct nctempchar1 *nctemp4374;
static struct nctempchar1 nctemp4375 = {{ 8}, (char*)"arglist\0"};
nctemp4374=&nctemp4375;
nctempchar1* nctemp4372= nctemp4374;
int nctemp4376=LibeStrcmp(nctemp4367,nctemp4372);
int nctemp4364 = (nctemp4376 ==0);
if(nctemp4364)
{
struct symbol* nctemp4385= tp;
struct symbol* nctemp4387=SymGetable(nctemp4385);
tp =nctemp4387;
int nctemp4378 = (tp !=0);
if(nctemp4378)
{
struct tree* nctemp4390= p;
struct nctempchar1 *nctemp4394;
static struct nctempchar1 nctemp4395 = {{ 54}, (char*)"Function arguments does not match forward declaration\0"};
nctemp4394=&nctemp4395;
nctempchar1* nctemp4392= nctemp4394;
struct tree* nctemp4398= p;
nctempchar1* nctemp4400=PtreeGetdef(nctemp4398);
nctempchar1* nctemp4396= nctemp4400;
int nctemp4401=SemSerror(nctemp4390,nctemp4392,nctemp4396);
return 0;
}
return 1;
}
struct tree* nctemp4410= p;
struct tree* nctemp4412=PtreeMvchild(nctemp4410);
struct tree* nctemp4408= nctemp4412;
struct tree* nctemp4413=PtreeMvchild(nctemp4408);
p =nctemp4413;
struct symbol* nctemp4418= tp;
struct symbol* nctemp4420=SymGetable(nctemp4418);
tp =nctemp4420;
struct nctempchar1 *nctemp4427;
static struct nctempchar1 nctemp4428 = {{ 9}, (char*)"#arglist\0"};
nctemp4427=&nctemp4428;
nctempchar1* nctemp4425= nctemp4427;
struct symbol* nctemp4429= tp;
struct symbol* nctemp4431=SymLookup(nctemp4425,nctemp4429);
tp =nctemp4431;
int nctemp4432 = (tp ==0);
if(nctemp4432)
{
struct tree* nctemp4437= p;
struct nctempchar1 *nctemp4441;
static struct nctempchar1 nctemp4442 = {{ 54}, (char*)"Function Arguments does not match forward declaration\0"};
nctemp4441=&nctemp4442;
nctempchar1* nctemp4439= nctemp4441;
nctempchar1* nctemp4443= name;
int nctemp4446=SemSerror(nctemp4437,nctemp4439,nctemp4443);
}
else{
struct symbol* nctemp4451= tp;
struct symbol* nctemp4453=SymGetable(nctemp4451);
tp =nctemp4453;
}
struct symbol* nctemp4458= tp;
struct symbol* nctemp4460=SymMvnext(nctemp4458);
tp =nctemp4460;
int nctemp4461 = (p !=0);
int nctemp4465=nctemp4461;
while(nctemp4465)
{{
struct tree* nctemp4467= p;
struct symbol* nctemp4469= tp;
int nctemp4471=SemArgtype(nctemp4467,nctemp4469);
struct tree* nctemp4476= p;
struct tree* nctemp4478=PtreeMvsister(nctemp4476);
p =nctemp4478;
struct symbol* nctemp4483= tp;
struct symbol* nctemp4485=SymMvnext(nctemp4483);
tp =nctemp4485;
}
int nctemp4486 = (p !=0);
nctemp4465=nctemp4486;}return 1;
}
int SemFdef2 (struct tree* p,struct symbol* tp)
{
struct tree* np;
struct tree* sp;
struct symbol* up;
struct symbol* ftp;
struct symbol* ltp;
struct tree* nctemp4492= p;
struct nctempchar1 *nctemp4496;
static struct nctempchar1 nctemp4497 = {{ 5}, (char*)"fdef\0"};
nctemp4496=&nctemp4497;
nctempchar1* nctemp4494= nctemp4496;
int nctemp4498=PtreeSetname(nctemp4492,nctemp4494);
struct symbol* nctemp4500= tp;
struct nctempchar1 *nctemp4504;
static struct nctempchar1 nctemp4505 = {{ 5}, (char*)"void\0"};
nctemp4504=&nctemp4505;
nctempchar1* nctemp4502= nctemp4504;
int nctemp4506=SymSetforw(nctemp4500,nctemp4502);
struct tree* nctemp4511= p;
struct tree* nctemp4513=PtreeMvchild(nctemp4511);
np =nctemp4513;
struct symbol* nctemp4518=SymMktable();
ltp =nctemp4518;
struct symbol* nctemp4520= ltp;
struct symbol* nctemp4522=SymSetltp(nctemp4520);
struct nctempchar1 *nctemp4529;
static struct nctempchar1 nctemp4530 = {{ 6}, (char*)"#self\0"};
nctemp4529=&nctemp4530;
nctempchar1* nctemp4527= nctemp4529;
struct symbol* nctemp4531= ltp;
struct symbol* nctemp4533=SymMkname(nctemp4527,nctemp4531);
up =nctemp4533;
struct symbol* nctemp4535= up;
struct tree* nctemp4539= p;
nctempchar1* nctemp4541=PtreeGetdef(nctemp4539);
nctempchar1* nctemp4537= nctemp4541;
int nctemp4542=SymSetfunc(nctemp4535,nctemp4537);
struct tree* nctemp4548= np;
nctempchar1* nctemp4550=PtreeGetname(nctemp4548);
nctempchar1* nctemp4546= nctemp4550;
struct nctempchar1 *nctemp4553;
static struct nctempchar1 nctemp4554 = {{ 8}, (char*)"arglist\0"};
nctemp4553=&nctemp4554;
nctempchar1* nctemp4551= nctemp4553;
int nctemp4555=LibeStrcmp(nctemp4546,nctemp4551);
int nctemp4543 = (nctemp4555 ==1);
if(nctemp4543)
{
struct tree* nctemp4561= np;
struct tree* nctemp4563=PtreeMvsister(nctemp4561);
sp =nctemp4563;
}
else{
sp =np;
}
struct tree* nctemp4573= np;
nctempchar1* nctemp4575=PtreeGetname(nctemp4573);
nctempchar1* nctemp4571= nctemp4575;
struct nctempchar1 *nctemp4578;
static struct nctempchar1 nctemp4579 = {{ 8}, (char*)"arglist\0"};
nctemp4578=&nctemp4579;
nctempchar1* nctemp4576= nctemp4578;
int nctemp4580=LibeStrcmp(nctemp4571,nctemp4576);
int nctemp4568 = (nctemp4580 ==1);
if(nctemp4568)
{
struct tree* nctemp4586= np;
struct tree* nctemp4588=PtreeMvchild(nctemp4586);
np =nctemp4588;
struct nctempchar1 *nctemp4595;
static struct nctempchar1 nctemp4596 = {{ 9}, (char*)"#arglist\0"};
nctemp4595=&nctemp4596;
nctempchar1* nctemp4593= nctemp4595;
struct symbol* nctemp4597= ltp;
struct symbol* nctemp4599=SymMkname(nctemp4593,nctemp4597);
up =nctemp4599;
struct symbol* nctemp4604=SymMktable();
ftp =nctemp4604;
struct symbol* nctemp4606= up;
struct symbol* nctemp4608= ftp;
struct symbol* nctemp4610=SymSetable(nctemp4606,nctemp4608);
struct tree* nctemp4612= np;
struct symbol* nctemp4614= ftp;
int nctemp4616=SemDeclarations(nctemp4612,nctemp4614);
}
struct tree* nctemp4618= p;
struct symbol* nctemp4620= tp;
int nctemp4622=SemArgtypes(nctemp4618,nctemp4620);
struct symbol* nctemp4624= tp;
int nctemp4626= 1;
int nctemp4628=SymSetemit(nctemp4624,nctemp4626);
struct tree* nctemp4630= sp;
int nctemp4632=SemCompstmnt(nctemp4630);
struct tree* nctemp4634= p;
struct tree* nctemp4636= sp;
int nctemp4638=SemCopyparallel(nctemp4634,nctemp4636);
return 1;
}
int Semisnobody (struct tree* p)
{
struct tree* np;
struct tree* nctemp4644= p;
struct tree* nctemp4646=PtreeMvchild(nctemp4644);
np =nctemp4646;
struct tree* nctemp4652= np;
nctempchar1* nctemp4654=PtreeGetname(nctemp4652);
nctempchar1* nctemp4650= nctemp4654;
struct nctempchar1 *nctemp4657;
static struct nctempchar1 nctemp4658 = {{ 8}, (char*)"arglist\0"};
nctemp4657=&nctemp4658;
nctempchar1* nctemp4655= nctemp4657;
int nctemp4659=LibeStrcmp(nctemp4650,nctemp4655);
int nctemp4647 = (nctemp4659 ==1);
if(nctemp4647)
{
struct tree* nctemp4665= np;
struct tree* nctemp4667=PtreeMvsister(nctemp4665);
np =nctemp4667;
struct tree* nctemp4672= np;
struct tree* nctemp4674=PtreeMvchild(nctemp4672);
np =nctemp4674;
int nctemp4675 = (np ==0);
if(nctemp4675)
{
return 1;
}
else{
return 0;
}
}
else{
struct tree* nctemp4686= np;
nctempchar1* nctemp4688=PtreeGetname(nctemp4686);
nctempchar1* nctemp4684= nctemp4688;
struct nctempchar1 *nctemp4691;
static struct nctempchar1 nctemp4692 = {{ 10}, (char*)"compstmnt\0"};
nctemp4691=&nctemp4692;
nctempchar1* nctemp4689= nctemp4691;
int nctemp4693=LibeStrcmp(nctemp4684,nctemp4689);
int nctemp4681 = (nctemp4693 ==1);
if(nctemp4681)
{
struct tree* nctemp4699= np;
struct tree* nctemp4701=PtreeMvchild(nctemp4699);
np =nctemp4701;
int nctemp4702 = (np ==0);
if(nctemp4702)
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
struct tree* nctemp4712= p;
nctempchar1* nctemp4714=PtreeGetarray(nctemp4712);
nctempchar1* nctemp4710= nctemp4714;
struct nctempchar1 *nctemp4717;
static struct nctempchar1 nctemp4718 = {{ 6}, (char*)"array\0"};
nctemp4717=&nctemp4718;
nctempchar1* nctemp4715= nctemp4717;
int nctemp4719=LibeStrcmp(nctemp4710,nctemp4715);
if(nctemp4719)
{
rank =1;
struct tree* nctemp4728= p;
struct tree* nctemp4730=PtreeMvchild(nctemp4728);
np =nctemp4730;
struct tree* nctemp4735= np;
struct tree* nctemp4737=PtreeMvchild(nctemp4735);
sp =nctemp4737;
struct tree* nctemp4742= np;
struct tree* nctemp4744=PtreeMvsister(nctemp4742);
np =nctemp4744;
struct tree* nctemp4752= sp;
struct tree* nctemp4754=PtreeMvsister(nctemp4752);
sp =nctemp4754;
int nctemp4745 = (sp !=0);
int nctemp4756=nctemp4745;
while(nctemp4756)
{{
int nctemp4765 = rank + 1;
rank =nctemp4765;
}
struct tree* nctemp4773= sp;
struct tree* nctemp4775=PtreeMvsister(nctemp4773);
sp =nctemp4775;
int nctemp4766 = (sp !=0);
nctemp4756=nctemp4766;}}
else{
rank =0;
struct tree* nctemp4785= p;
struct tree* nctemp4787=PtreeMvchild(nctemp4785);
np =nctemp4787;
}
struct tree* nctemp4789= p;
int nctemp4791= rank;
int nctemp4793=PtreeSetrank(nctemp4789,nctemp4791);
struct tree* nctemp4795= p;
struct tree* nctemp4797= np;
int nctemp4799=SemCopytype(nctemp4795,nctemp4797);
struct tree* nctemp4801= np;
struct tree* nctemp4805= p;
nctempchar1* nctemp4807=PtreeGetdef(nctemp4805);
nctempchar1* nctemp4803= nctemp4807;
int nctemp4808=PtreeSetype(nctemp4801,nctemp4803);
p = np;
nobody = 0;
struct tree* nctemp4812= p;
int nctemp4814=Semisnobody(nctemp4812);
int nctemp4809 = (nctemp4814 ==1);
if(nctemp4809)
{
struct tree* nctemp4817= p;
struct nctempchar1 *nctemp4821;
static struct nctempchar1 nctemp4822 = {{ 5}, (char*)"forw\0"};
nctemp4821=&nctemp4822;
nctempchar1* nctemp4819= nctemp4821;
int nctemp4823=PtreeSetforw(nctemp4817,nctemp4819);
nobody =1;
}
struct tree* nctemp4837= p;
nctempchar1* nctemp4839=PtreeGetdef(nctemp4837);
nctempchar1* nctemp4835= nctemp4839;
struct symbol* nctemp4840= tp;
struct symbol* nctemp4842=SymMkname(nctemp4835,nctemp4840);
fname =nctemp4842;
int nctemp4828 = (fname ==0);
if(nctemp4828)
{
struct tree* nctemp4850= p;
nctempchar1* nctemp4852=PtreeGetdef(nctemp4850);
nctempchar1* nctemp4848= nctemp4852;
struct symbol* nctemp4853= tp;
struct symbol* nctemp4855=SymLookup(nctemp4848,nctemp4853);
qp =nctemp4855;
struct symbol* nctemp4861= qp;
nctempchar1* nctemp4863=SymGetforw(nctemp4861);
nctempchar1* nctemp4859= nctemp4863;
struct nctempchar1 *nctemp4866;
static struct nctempchar1 nctemp4867 = {{ 5}, (char*)"forw\0"};
nctemp4866=&nctemp4867;
nctempchar1* nctemp4864= nctemp4866;
int nctemp4868=LibeStrcmp(nctemp4859,nctemp4864);
int nctemp4856 = (nctemp4868 !=1);
if(nctemp4856)
{
struct tree* nctemp4871= np;
struct nctempchar1 *nctemp4875;
static struct nctempchar1 nctemp4876 = {{ 25}, (char*)"Function already defined\0"};
nctemp4875=&nctemp4876;
nctempchar1* nctemp4873= nctemp4875;
struct tree* nctemp4879= p;
nctempchar1* nctemp4881=PtreeGetdef(nctemp4879);
nctempchar1* nctemp4877= nctemp4881;
int nctemp4882=SemSerror(nctemp4871,nctemp4873,nctemp4877);
}
else{
struct tree* nctemp4884= p;
struct symbol* nctemp4886= qp;
int nctemp4888=SemFdef2(nctemp4884,nctemp4886);
return 1;
}
}
struct symbol* nctemp4891= fname;
struct tree* nctemp4895= p;
nctempchar1* nctemp4897=PtreeGetype(nctemp4895);
nctempchar1* nctemp4893= nctemp4897;
int nctemp4898=SymSetype(nctemp4891,nctemp4893);
struct symbol* nctemp4900= fname;
struct tree* nctemp4904= p;
nctempchar1* nctemp4906=PtreeGetstruct(nctemp4904);
nctempchar1* nctemp4902= nctemp4906;
int nctemp4907=SymSetstruct(nctemp4900,nctemp4902);
struct symbol* nctemp4909= fname;
struct tree* nctemp4913= p;
nctempchar1* nctemp4915=PtreeGetarray(nctemp4913);
nctempchar1* nctemp4911= nctemp4915;
int nctemp4916=SymSetarray(nctemp4909,nctemp4911);
struct symbol* nctemp4918= fname;
struct tree* nctemp4922= p;
int nctemp4924=PtreeGetrank(nctemp4922);
int nctemp4920= nctemp4924;
int nctemp4925=SymSetrank(nctemp4918,nctemp4920);
struct symbol* nctemp4927= fname;
struct nctempchar1 *nctemp4931;
static struct nctempchar1 nctemp4932 = {{ 5}, (char*)"fdef\0"};
nctemp4931=&nctemp4932;
nctempchar1* nctemp4929= nctemp4931;
int nctemp4933=SymSetfunc(nctemp4927,nctemp4929);
int nctemp4934 = (nobody ==1);
if(nctemp4934)
{
struct symbol* nctemp4939= fname;
struct nctempchar1 *nctemp4943;
static struct nctempchar1 nctemp4944 = {{ 5}, (char*)"forw\0"};
nctemp4943=&nctemp4944;
nctempchar1* nctemp4941= nctemp4943;
int nctemp4945=SymSetforw(nctemp4939,nctemp4941);
}
struct tree* nctemp4950= p;
struct tree* nctemp4952=PtreeMvchild(nctemp4950);
np =nctemp4952;
struct symbol* nctemp4957=SymMktable();
ltp =nctemp4957;
struct symbol* nctemp4959= ltp;
struct symbol* nctemp4961=SymSetltp(nctemp4959);
struct nctempchar1 *nctemp4968;
static struct nctempchar1 nctemp4969 = {{ 6}, (char*)"#self\0"};
nctemp4968=&nctemp4969;
nctempchar1* nctemp4966= nctemp4968;
struct symbol* nctemp4970= ltp;
struct symbol* nctemp4972=SymMkname(nctemp4966,nctemp4970);
up =nctemp4972;
struct symbol* nctemp4974= up;
struct tree* nctemp4978= p;
nctempchar1* nctemp4980=PtreeGetdef(nctemp4978);
nctempchar1* nctemp4976= nctemp4980;
int nctemp4981=SymSetfunc(nctemp4974,nctemp4976);
struct tree* nctemp4987= np;
nctempchar1* nctemp4989=PtreeGetname(nctemp4987);
nctempchar1* nctemp4985= nctemp4989;
struct nctempchar1 *nctemp4992;
static struct nctempchar1 nctemp4993 = {{ 8}, (char*)"arglist\0"};
nctemp4992=&nctemp4993;
nctempchar1* nctemp4990= nctemp4992;
int nctemp4994=LibeStrcmp(nctemp4985,nctemp4990);
int nctemp4982 = (nctemp4994 ==1);
if(nctemp4982)
{
struct tree* nctemp5000= np;
struct tree* nctemp5002=PtreeMvsister(nctemp5000);
sp =nctemp5002;
}
else{
sp =np;
}
struct tree* nctemp5012= np;
nctempchar1* nctemp5014=PtreeGetname(nctemp5012);
nctempchar1* nctemp5010= nctemp5014;
struct nctempchar1 *nctemp5017;
static struct nctempchar1 nctemp5018 = {{ 8}, (char*)"arglist\0"};
nctemp5017=&nctemp5018;
nctempchar1* nctemp5015= nctemp5017;
int nctemp5019=LibeStrcmp(nctemp5010,nctemp5015);
int nctemp5007 = (nctemp5019 ==1);
if(nctemp5007)
{
struct tree* nctemp5025= np;
struct tree* nctemp5027=PtreeMvchild(nctemp5025);
np =nctemp5027;
struct nctempchar1 *nctemp5034;
static struct nctempchar1 nctemp5035 = {{ 9}, (char*)"#arglist\0"};
nctemp5034=&nctemp5035;
nctempchar1* nctemp5032= nctemp5034;
struct symbol* nctemp5036= ltp;
struct symbol* nctemp5038=SymMkname(nctemp5032,nctemp5036);
up =nctemp5038;
struct symbol* nctemp5043=SymMktable();
ftp =nctemp5043;
struct symbol* nctemp5045= up;
struct symbol* nctemp5047= ftp;
struct symbol* nctemp5049=SymSetable(nctemp5045,nctemp5047);
struct tree* nctemp5051= np;
struct symbol* nctemp5053= ftp;
int nctemp5055=SemDeclarations(nctemp5051,nctemp5053);
struct symbol* nctemp5060=SymMktable();
fsub =nctemp5060;
struct symbol* nctemp5062= fname;
struct symbol* nctemp5064= fsub;
struct symbol* nctemp5066=SymSetable(nctemp5062,nctemp5064);
struct nctempchar1 *nctemp5073;
static struct nctempchar1 nctemp5074 = {{ 9}, (char*)"#arglist\0"};
nctemp5073=&nctemp5074;
nctempchar1* nctemp5071= nctemp5073;
struct symbol* nctemp5075= fsub;
struct symbol* nctemp5077=SymMkname(nctemp5071,nctemp5075);
arg =nctemp5077;
struct symbol* nctemp5082=SymMktable();
argsub =nctemp5082;
struct symbol* nctemp5084= arg;
struct symbol* nctemp5086= argsub;
struct symbol* nctemp5088=SymSetable(nctemp5084,nctemp5086);
struct symbol* nctemp5090= ftp;
struct symbol* nctemp5092= argsub;
int nctemp5094=SymCpytble(nctemp5090,nctemp5092);
}
struct tree* nctemp5096= sp;
int nctemp5098=SemCompstmnt(nctemp5096);
struct tree* nctemp5100= p;
struct tree* nctemp5102= sp;
int nctemp5104=SemCopyparallel(nctemp5100,nctemp5102);
return 1;
}
int SemExtdecl (struct tree* p)
{
struct tree* sp;
struct tree* np;
struct tree* nctemp5109= p;
nctempchar1* nctemp5111=PtreeGetname(nctemp5109);
nctempchar1* nctemp5107= nctemp5111;
struct nctempchar1 *nctemp5114;
static struct nctempchar1 nctemp5115 = {{ 8}, (char*)"extdecl\0"};
nctemp5114=&nctemp5115;
nctempchar1* nctemp5112= nctemp5114;
int nctemp5116=LibeStrcmp(nctemp5107,nctemp5112);
if(nctemp5116)
{
struct tree* nctemp5121= p;
struct tree* nctemp5123=PtreeMvchild(nctemp5121);
np =nctemp5123;
struct tree* nctemp5125= np;
struct nctempchar1 *nctemp5129;
static struct nctempchar1 nctemp5130 = {{ 7}, (char*)"global\0"};
nctemp5129=&nctemp5130;
nctempchar1* nctemp5127= nctemp5129;
int nctemp5131=PtreeSetglobal(nctemp5125,nctemp5127);
struct tree* nctemp5137= np;
nctempchar1* nctemp5139=PtreeGetname(nctemp5137);
nctempchar1* nctemp5135= nctemp5139;
struct nctempchar1 *nctemp5142;
static struct nctempchar1 nctemp5143 = {{ 7}, (char*)"import\0"};
nctemp5142=&nctemp5143;
nctempchar1* nctemp5140= nctemp5142;
int nctemp5144=LibeStrcmp(nctemp5135,nctemp5140);
int nctemp5132 = (nctemp5144 ==1);
if(nctemp5132)
{
struct tree* nctemp5147= np;
struct symbol* nctemp5151=SymGetetp();
struct symbol* nctemp5149= nctemp5151;
int nctemp5152=SemImport(nctemp5147,nctemp5149);
return 1;
}
int nctemp5154 = (np !=0);
int nctemp5158=nctemp5154;
while(nctemp5158)
{{
struct tree* nctemp5163= np;
struct tree* nctemp5165=PtreeMvchild(nctemp5163);
sp =nctemp5165;
struct tree* nctemp5169= np;
nctempchar1* nctemp5171=PtreeGetarray(nctemp5169);
nctempchar1* nctemp5167= nctemp5171;
struct nctempchar1 *nctemp5174;
static struct nctempchar1 nctemp5175 = {{ 6}, (char*)"array\0"};
nctemp5174=&nctemp5175;
nctempchar1* nctemp5172= nctemp5174;
int nctemp5176=LibeStrcmp(nctemp5167,nctemp5172);
if(nctemp5176)
{
struct tree* nctemp5181= sp;
struct tree* nctemp5183=PtreeMvsister(nctemp5181);
sp =nctemp5183;
}
struct tree* nctemp5187= sp;
nctempchar1* nctemp5189=PtreeGetname(nctemp5187);
nctempchar1* nctemp5185= nctemp5189;
struct nctempchar1 *nctemp5192;
static struct nctempchar1 nctemp5193 = {{ 10}, (char*)"structdec\0"};
nctemp5192=&nctemp5193;
nctempchar1* nctemp5190= nctemp5192;
int nctemp5194=LibeStrcmp(nctemp5185,nctemp5190);
if(nctemp5194)
{
struct tree* nctemp5196= np;
struct symbol* nctemp5200=SymGetetp();
struct symbol* nctemp5198= nctemp5200;
int nctemp5201=SemStructdecl(nctemp5196,nctemp5198);
}
else{
struct tree* nctemp5205= sp;
nctempchar1* nctemp5207=PtreeGetname(nctemp5205);
nctempchar1* nctemp5203= nctemp5207;
struct nctempchar1 *nctemp5210;
static struct nctempchar1 nctemp5211 = {{ 5}, (char*)"fdef\0"};
nctemp5210=&nctemp5211;
nctempchar1* nctemp5208= nctemp5210;
int nctemp5212=LibeStrcmp(nctemp5203,nctemp5208);
if(nctemp5212)
{
struct tree* nctemp5214= np;
struct symbol* nctemp5218=SymGetetp();
struct symbol* nctemp5216= nctemp5218;
int nctemp5219=SemFdef(nctemp5214,nctemp5216);
}
else{
struct tree* nctemp5221= np;
struct symbol* nctemp5225=SymGetetp();
struct symbol* nctemp5223= nctemp5225;
int nctemp5226=SemDeclaration(nctemp5221,nctemp5223);
}
}
struct tree* nctemp5231= np;
struct tree* nctemp5233=PtreeMvsister(nctemp5231);
np =nctemp5233;
}
int nctemp5234 = (np !=0);
nctemp5158=nctemp5234;}}
return 1;
}
int SemSem (struct tree* p,struct symbol* tp)
{
struct symbol* ltp;
struct symbol* nctemp5240= tp;
struct symbol* nctemp5242=SymSetetp(nctemp5240);
ltp = 0;
struct symbol* nctemp5244= ltp;
struct symbol* nctemp5246=SymSetltp(nctemp5244);
int nctemp5248= 0;
int nctemp5250=SemSetsimple(nctemp5248);
struct tree* nctemp5252= p;
int nctemp5254=SemExtdecl(nctemp5252);
return 1;
}
int SemWhilestmnt (struct tree* p)
{
struct tree* q;
q = p;
struct tree* nctemp5260= p;
struct tree* nctemp5262=PtreeMvchild(nctemp5260);
p =nctemp5262;
struct tree* nctemp5264= p;
struct tree* nctemp5266=SemExpr(nctemp5264);
struct tree* nctemp5268= p;
int nctemp5270= 1;
int nctemp5272=PtreeSetopexpr(nctemp5268,nctemp5270);
struct tree* nctemp5277= p;
struct tree* nctemp5279=PtreeMvsister(nctemp5277);
p =nctemp5279;
struct tree* nctemp5281= p;
int nctemp5283=SemStmnt(nctemp5281);
struct tree* nctemp5285= q;
struct tree* nctemp5287= p;
int nctemp5289=SemCopyparallel(nctemp5285,nctemp5287);
return 1;
}
int SemForstmnt (struct tree* p)
{
struct tree* q;
q = p;
struct tree* nctemp5295= p;
struct tree* nctemp5297=PtreeMvchild(nctemp5295);
p =nctemp5297;
struct tree* nctemp5299= p;
struct tree* nctemp5301=SemExpr(nctemp5299);
struct tree* nctemp5303= p;
int nctemp5305= 1;
int nctemp5307=PtreeSetopexpr(nctemp5303,nctemp5305);
struct tree* nctemp5312= p;
struct tree* nctemp5314=PtreeMvsister(nctemp5312);
p =nctemp5314;
struct tree* nctemp5316= p;
struct tree* nctemp5318=SemExpr(nctemp5316);
struct tree* nctemp5320= p;
int nctemp5322= 1;
int nctemp5324=PtreeSetopexpr(nctemp5320,nctemp5322);
struct tree* nctemp5329= p;
struct tree* nctemp5331=PtreeMvsister(nctemp5329);
p =nctemp5331;
struct tree* nctemp5333= p;
struct tree* nctemp5335=SemExpr(nctemp5333);
struct tree* nctemp5337= p;
int nctemp5339= 1;
int nctemp5341=PtreeSetopexpr(nctemp5337,nctemp5339);
struct tree* nctemp5346= p;
struct tree* nctemp5348=PtreeMvsister(nctemp5346);
p =nctemp5348;
struct tree* nctemp5350= p;
int nctemp5352=SemStmnt(nctemp5350);
struct tree* nctemp5354= q;
struct tree* nctemp5356= p;
int nctemp5358=SemCopyparallel(nctemp5354,nctemp5356);
return 1;
}
int SemParallelstmnt (struct tree* p)
{
struct tree* sp;
struct tree* rp;
int rank;
rank = 0;
struct tree* nctemp5364= p;
struct tree* nctemp5366=PtreeMvchild(nctemp5364);
sp =nctemp5366;
struct tree* nctemp5371= sp;
struct tree* nctemp5373=PtreeMvchild(nctemp5371);
sp =nctemp5373;
int nctemp5374 = (sp !=0);
int nctemp5378=nctemp5374;
while(nctemp5378)
{{
struct tree* nctemp5383= sp;
struct tree* nctemp5385=PtreeMvchild(nctemp5383);
rp =nctemp5385;
struct tree* nctemp5387= rp;
struct tree* nctemp5389=SemExpr(nctemp5387);
struct tree* nctemp5391= rp;
int nctemp5393= 1;
int nctemp5395=PtreeSetopexpr(nctemp5391,nctemp5393);
struct tree* nctemp5400= rp;
struct tree* nctemp5402=PtreeMvsister(nctemp5400);
rp =nctemp5402;
struct tree* nctemp5404= rp;
struct tree* nctemp5406=SemExpr(nctemp5404);
struct tree* nctemp5408= rp;
int nctemp5410= 1;
int nctemp5412=PtreeSetopexpr(nctemp5408,nctemp5410);
struct tree* nctemp5420= rp;
struct tree* nctemp5422=PtreeMvsister(nctemp5420);
rp =nctemp5422;
int nctemp5413 = (rp !=0);
if(nctemp5413)
{
struct tree* nctemp5425= rp;
struct tree* nctemp5427=SemExpr(nctemp5425);
struct tree* nctemp5429= rp;
int nctemp5431= 1;
int nctemp5433=PtreeSetopexpr(nctemp5429,nctemp5431);
}
struct tree* nctemp5437= sp;
struct tree* nctemp5439=PtreeMvsister(nctemp5437);
int nctemp5434 = (nctemp5439 !=0);
if(nctemp5434)
{
struct tree* nctemp5445= sp;
struct tree* nctemp5447=PtreeMvsister(nctemp5445);
rp =nctemp5447;
}
struct tree* nctemp5452= sp;
struct tree* nctemp5454=PtreeMvsister(nctemp5452);
sp =nctemp5454;
int nctemp5463 = rank + 1;
rank =nctemp5463;
}
int nctemp5464 = (sp !=0);
nctemp5378=nctemp5464;}struct tree* nctemp5469= p;
int nctemp5471= rank;
int nctemp5473=PtreeSetrank(nctemp5469,nctemp5471);
struct tree* nctemp5478= p;
struct tree* nctemp5480=PtreeMvchild(nctemp5478);
sp =nctemp5480;
struct tree* nctemp5485= sp;
struct tree* nctemp5487=PtreeMvsister(nctemp5485);
sp =nctemp5487;
struct tree* nctemp5489= sp;
int nctemp5491=SemStmnt(nctemp5489);
return 1;
}
int SemIfstmnt (struct tree* p)
{
struct tree* q;
q = p;
struct tree* nctemp5497= p;
struct tree* nctemp5499=PtreeMvchild(nctemp5497);
p =nctemp5499;
struct tree* nctemp5501= p;
struct tree* nctemp5503=SemExpr(nctemp5501);
struct tree* nctemp5505= p;
int nctemp5507= 1;
int nctemp5509=PtreeSetopexpr(nctemp5505,nctemp5507);
struct tree* nctemp5514= p;
struct tree* nctemp5516=PtreeMvsister(nctemp5514);
p =nctemp5516;
struct tree* nctemp5518= p;
int nctemp5520=SemStmnt(nctemp5518);
struct tree* nctemp5522= q;
struct tree* nctemp5524= p;
int nctemp5526=SemCopyparallel(nctemp5522,nctemp5524);
struct tree* nctemp5534= p;
struct tree* nctemp5536=PtreeMvsister(nctemp5534);
p =nctemp5536;
int nctemp5527 = (p !=0);
if(nctemp5527)
{
struct tree* nctemp5541= p;
nctempchar1* nctemp5543=PtreeGetname(nctemp5541);
nctempchar1* nctemp5539= nctemp5543;
struct nctempchar1 *nctemp5546;
static struct nctempchar1 nctemp5547 = {{ 5}, (char*)"else\0"};
nctemp5546=&nctemp5547;
nctempchar1* nctemp5544= nctemp5546;
int nctemp5548=LibeStrcmp(nctemp5539,nctemp5544);
if(nctemp5548)
{
struct tree* nctemp5553= p;
struct tree* nctemp5555=PtreeMvchild(nctemp5553);
p =nctemp5555;
struct tree* nctemp5557= p;
int nctemp5559=SemStmnt(nctemp5557);
}
}
return 1;
}
int SemReturnstmnt (struct tree* p)
{
struct tree* sp;
struct symbol* up;
struct tree* nctemp5565= p;
struct tree* nctemp5567=PtreeMvchild(nctemp5565);
sp =nctemp5567;
int nctemp5568 = (sp !=0);
if(nctemp5568)
{
struct tree* nctemp5573= sp;
struct tree* nctemp5575=SemExpr(nctemp5573);
struct tree* nctemp5577= sp;
int nctemp5579= 1;
int nctemp5581=PtreeSetopexpr(nctemp5577,nctemp5579);
struct nctempchar1 *nctemp5588;
static struct nctempchar1 nctemp5589 = {{ 6}, (char*)"#self\0"};
nctemp5588=&nctemp5589;
nctempchar1* nctemp5586= nctemp5588;
struct symbol* nctemp5592=SymGetltp();
struct symbol* nctemp5590= nctemp5592;
struct symbol* nctemp5593=SymLookup(nctemp5586,nctemp5590);
up =nctemp5593;
struct symbol* nctemp5600= up;
nctempchar1* nctemp5602=SymGetfunc(nctemp5600);
nctempchar1* nctemp5598= nctemp5602;
struct symbol* nctemp5603=SymLook(nctemp5598);
up =nctemp5603;
struct tree* nctemp5605= p;
struct symbol* nctemp5609= up;
nctempchar1* nctemp5611=SymGetype(nctemp5609);
nctempchar1* nctemp5607= nctemp5611;
int nctemp5612=PtreeSetype(nctemp5605,nctemp5607);
struct tree* nctemp5614= p;
struct symbol* nctemp5618= up;
nctempchar1* nctemp5620=SymGetstruct(nctemp5618);
nctempchar1* nctemp5616= nctemp5620;
int nctemp5621=PtreeSetstruct(nctemp5614,nctemp5616);
struct tree* nctemp5623= p;
struct symbol* nctemp5627= up;
nctempchar1* nctemp5629=SymGetarray(nctemp5627);
nctempchar1* nctemp5625= nctemp5629;
int nctemp5630=PtreeSetarray(nctemp5623,nctemp5625);
struct tree* nctemp5632= p;
struct tree* nctemp5636= sp;
nctempchar1* nctemp5638=PtreeGetref(nctemp5636);
nctempchar1* nctemp5634= nctemp5638;
int nctemp5639=PtreeSetref(nctemp5632,nctemp5634);
struct tree* nctemp5641= p;
struct symbol* nctemp5645= up;
int nctemp5647=SymGetrank(nctemp5645);
int nctemp5643= nctemp5647;
int nctemp5648=PtreeSetrank(nctemp5641,nctemp5643);
struct tree* nctemp5652= p;
struct tree* nctemp5654= sp;
int nctemp5656=SemComparetype(nctemp5652,nctemp5654);
int nctemp5649 = (nctemp5656 ==0);
if(nctemp5649)
{
struct tree* nctemp5659= p;
struct nctempchar1 *nctemp5663;
static struct nctempchar1 nctemp5664 = {{ 26}, (char*)"Return type is incorrect \0"};
nctemp5663=&nctemp5664;
nctempchar1* nctemp5661= nctemp5663;
struct nctempchar1 *nctemp5667;
static struct nctempchar1 nctemp5668 = {{ 2}, (char*)" \0"};
nctemp5667=&nctemp5668;
nctempchar1* nctemp5665= nctemp5667;
int nctemp5669=SemSerror(nctemp5659,nctemp5661,nctemp5665);
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
struct tree* nctemp5674= p;
nctempchar1* nctemp5676=PtreeGetname(nctemp5674);
nctempchar1* nctemp5672= nctemp5676;
struct nctempchar1 *nctemp5679;
static struct nctempchar1 nctemp5680 = {{ 13}, (char*)"declarations\0"};
nctemp5679=&nctemp5680;
nctempchar1* nctemp5677= nctemp5679;
int nctemp5681=LibeStrcmp(nctemp5672,nctemp5677);
if(nctemp5681)
{
struct tree* nctemp5683= p;
struct symbol* nctemp5687=SymGetltp();
struct symbol* nctemp5685= nctemp5687;
int nctemp5688=SemDeclarations(nctemp5683,nctemp5685);
struct tree* nctemp5693= p;
struct tree* nctemp5695=PtreeMvsister(nctemp5693);
p =nctemp5695;
}
int nctemp5696 = (p !=0);
int nctemp5700=nctemp5696;
while(nctemp5700)
{{
struct tree* nctemp5704= p;
nctempchar1* nctemp5706=PtreeGetname(nctemp5704);
nctempchar1* nctemp5702= nctemp5706;
struct nctempchar1 *nctemp5709;
static struct nctempchar1 nctemp5710 = {{ 5}, (char*)"expr\0"};
nctemp5709=&nctemp5710;
nctempchar1* nctemp5707= nctemp5709;
int nctemp5711=LibeStrcmp(nctemp5702,nctemp5707);
if(nctemp5711)
{
struct tree* nctemp5713= p;
struct tree* nctemp5715=SemExpr(nctemp5713);
struct tree* nctemp5717= p;
int nctemp5719= 1;
int nctemp5721=PtreeSetopexpr(nctemp5717,nctemp5719);
}
struct tree* nctemp5725= p;
nctempchar1* nctemp5727=PtreeGetname(nctemp5725);
nctempchar1* nctemp5723= nctemp5727;
struct nctempchar1 *nctemp5730;
static struct nctempchar1 nctemp5731 = {{ 10}, (char*)"compstmnt\0"};
nctemp5730=&nctemp5731;
nctempchar1* nctemp5728= nctemp5730;
int nctemp5732=LibeStrcmp(nctemp5723,nctemp5728);
if(nctemp5732)
{
struct tree* nctemp5734= p;
int nctemp5736=SemCompstmnt(nctemp5734);
}
struct tree* nctemp5740= p;
nctempchar1* nctemp5742=PtreeGetname(nctemp5740);
nctempchar1* nctemp5738= nctemp5742;
struct nctempchar1 *nctemp5745;
static struct nctempchar1 nctemp5746 = {{ 6}, (char*)"while\0"};
nctemp5745=&nctemp5746;
nctempchar1* nctemp5743= nctemp5745;
int nctemp5747=LibeStrcmp(nctemp5738,nctemp5743);
if(nctemp5747)
{
struct tree* nctemp5749= p;
int nctemp5751=SemWhilestmnt(nctemp5749);
}
struct tree* nctemp5755= p;
nctempchar1* nctemp5757=PtreeGetname(nctemp5755);
nctempchar1* nctemp5753= nctemp5757;
struct nctempchar1 *nctemp5760;
static struct nctempchar1 nctemp5761 = {{ 4}, (char*)"for\0"};
nctemp5760=&nctemp5761;
nctempchar1* nctemp5758= nctemp5760;
int nctemp5762=LibeStrcmp(nctemp5753,nctemp5758);
if(nctemp5762)
{
struct tree* nctemp5764= p;
int nctemp5766=SemForstmnt(nctemp5764);
}
struct tree* nctemp5770= p;
nctempchar1* nctemp5772=PtreeGetname(nctemp5770);
nctempchar1* nctemp5768= nctemp5772;
struct nctempchar1 *nctemp5775;
static struct nctempchar1 nctemp5776 = {{ 9}, (char*)"parallel\0"};
nctemp5775=&nctemp5776;
nctempchar1* nctemp5773= nctemp5775;
int nctemp5777=LibeStrcmp(nctemp5768,nctemp5773);
if(nctemp5777)
{
parflag =1;
}
struct tree* nctemp5785= p;
nctempchar1* nctemp5787=PtreeGetname(nctemp5785);
nctempchar1* nctemp5783= nctemp5787;
struct nctempchar1 *nctemp5790;
static struct nctempchar1 nctemp5791 = {{ 3}, (char*)"if\0"};
nctemp5790=&nctemp5791;
nctempchar1* nctemp5788= nctemp5790;
int nctemp5792=LibeStrcmp(nctemp5783,nctemp5788);
if(nctemp5792)
{
struct tree* nctemp5794= p;
int nctemp5796=SemIfstmnt(nctemp5794);
}
struct tree* nctemp5800= p;
nctempchar1* nctemp5802=PtreeGetname(nctemp5800);
nctempchar1* nctemp5798= nctemp5802;
struct nctempchar1 *nctemp5805;
static struct nctempchar1 nctemp5806 = {{ 7}, (char*)"return\0"};
nctemp5805=&nctemp5806;
nctempchar1* nctemp5803= nctemp5805;
int nctemp5807=LibeStrcmp(nctemp5798,nctemp5803);
if(nctemp5807)
{
struct tree* nctemp5809= p;
int nctemp5811=SemReturnstmnt(nctemp5809);
}
struct tree* nctemp5816= p;
struct tree* nctemp5818=PtreeMvsister(nctemp5816);
p =nctemp5818;
}
int nctemp5819 = (p !=0);
nctemp5700=nctemp5819;}int nctemp5823 = (parflag ==1);
if(nctemp5823)
{
struct tree* nctemp5828= q;
struct nctempchar1 *nctemp5832;
static struct nctempchar1 nctemp5833 = {{ 9}, (char*)"parallel\0"};
nctemp5832=&nctemp5833;
nctempchar1* nctemp5830= nctemp5832;
int nctemp5834=PtreeSetparallel(nctemp5828,nctemp5830);
}
return 1;
}
int SemCompstmnt (struct tree* p)
{
struct tree* q;
int parflag;
parflag = 0;
q = p;
struct tree* nctemp5840= p;
struct tree* nctemp5842=PtreeMvchild(nctemp5840);
p =nctemp5842;
int nctemp5843 = (p ==0);
if(nctemp5843)
{
return 1;
}
struct tree* nctemp5851= p;
nctempchar1* nctemp5853=PtreeGetname(nctemp5851);
nctempchar1* nctemp5849= nctemp5853;
struct nctempchar1 *nctemp5856;
static struct nctempchar1 nctemp5857 = {{ 13}, (char*)"declarations\0"};
nctemp5856=&nctemp5857;
nctempchar1* nctemp5854= nctemp5856;
int nctemp5858=LibeStrcmp(nctemp5849,nctemp5854);
if(nctemp5858)
{
struct tree* nctemp5862= p;
struct tree* nctemp5864=PtreeMvchild(nctemp5862);
struct tree* nctemp5860= nctemp5864;
struct symbol* nctemp5867=SymGetltp();
struct symbol* nctemp5865= nctemp5867;
int nctemp5868=SemDeclarations(nctemp5860,nctemp5865);
struct tree* nctemp5873= p;
struct tree* nctemp5875=PtreeMvsister(nctemp5873);
p =nctemp5875;
}
int nctemp5876 = (p !=0);
int nctemp5880=nctemp5876;
while(nctemp5880)
{{
struct tree* nctemp5884= p;
nctempchar1* nctemp5886=PtreeGetname(nctemp5884);
nctempchar1* nctemp5882= nctemp5886;
struct nctempchar1 *nctemp5889;
static struct nctempchar1 nctemp5890 = {{ 5}, (char*)"expr\0"};
nctemp5889=&nctemp5890;
nctempchar1* nctemp5887= nctemp5889;
int nctemp5891=LibeStrcmp(nctemp5882,nctemp5887);
if(nctemp5891)
{
struct tree* nctemp5893= p;
int nctemp5895= 1;
int nctemp5897=PtreeSetopexpr(nctemp5893,nctemp5895);
int nctemp5899= 1;
int nctemp5901=SemSetsimple(nctemp5899);
struct tree* nctemp5903= p;
struct tree* nctemp5905=SemExpr(nctemp5903);
}
struct tree* nctemp5909= p;
nctempchar1* nctemp5911=PtreeGetname(nctemp5909);
nctempchar1* nctemp5907= nctemp5911;
struct nctempchar1 *nctemp5914;
static struct nctempchar1 nctemp5915 = {{ 6}, (char*)"while\0"};
nctemp5914=&nctemp5915;
nctempchar1* nctemp5912= nctemp5914;
int nctemp5916=LibeStrcmp(nctemp5907,nctemp5912);
if(nctemp5916)
{
struct tree* nctemp5918= p;
int nctemp5920=SemWhilestmnt(nctemp5918);
}
struct tree* nctemp5924= p;
nctempchar1* nctemp5926=PtreeGetname(nctemp5924);
nctempchar1* nctemp5922= nctemp5926;
struct nctempchar1 *nctemp5929;
static struct nctempchar1 nctemp5930 = {{ 4}, (char*)"for\0"};
nctemp5929=&nctemp5930;
nctempchar1* nctemp5927= nctemp5929;
int nctemp5931=LibeStrcmp(nctemp5922,nctemp5927);
if(nctemp5931)
{
struct tree* nctemp5933= p;
int nctemp5935=SemForstmnt(nctemp5933);
}
struct tree* nctemp5939= p;
nctempchar1* nctemp5941=PtreeGetname(nctemp5939);
nctempchar1* nctemp5937= nctemp5941;
struct nctempchar1 *nctemp5944;
static struct nctempchar1 nctemp5945 = {{ 9}, (char*)"parallel\0"};
nctemp5944=&nctemp5945;
nctempchar1* nctemp5942= nctemp5944;
int nctemp5946=LibeStrcmp(nctemp5937,nctemp5942);
if(nctemp5946)
{
struct tree* nctemp5948= p;
int nctemp5950=SemParallelstmnt(nctemp5948);
struct tree* nctemp5952= p;
struct nctempchar1 *nctemp5956;
static struct nctempchar1 nctemp5957 = {{ 9}, (char*)"parallel\0"};
nctemp5956=&nctemp5957;
nctempchar1* nctemp5954= nctemp5956;
int nctemp5958=PtreeSetparallel(nctemp5952,nctemp5954);
}
struct tree* nctemp5962= p;
nctempchar1* nctemp5964=PtreeGetname(nctemp5962);
nctempchar1* nctemp5960= nctemp5964;
struct nctempchar1 *nctemp5967;
static struct nctempchar1 nctemp5968 = {{ 3}, (char*)"if\0"};
nctemp5967=&nctemp5968;
nctempchar1* nctemp5965= nctemp5967;
int nctemp5969=LibeStrcmp(nctemp5960,nctemp5965);
if(nctemp5969)
{
struct tree* nctemp5971= p;
int nctemp5973=SemIfstmnt(nctemp5971);
}
struct tree* nctemp5977= p;
nctempchar1* nctemp5979=PtreeGetname(nctemp5977);
nctempchar1* nctemp5975= nctemp5979;
struct nctempchar1 *nctemp5982;
static struct nctempchar1 nctemp5983 = {{ 7}, (char*)"return\0"};
nctemp5982=&nctemp5983;
nctempchar1* nctemp5980= nctemp5982;
int nctemp5984=LibeStrcmp(nctemp5975,nctemp5980);
if(nctemp5984)
{
struct tree* nctemp5986= p;
int nctemp5988=SemReturnstmnt(nctemp5986);
}
struct tree* nctemp5992= p;
nctempchar1* nctemp5994=PtreeGetparallel(nctemp5992);
nctempchar1* nctemp5990= nctemp5994;
struct nctempchar1 *nctemp5997;
static struct nctempchar1 nctemp5998 = {{ 9}, (char*)"parallel\0"};
nctemp5997=&nctemp5998;
nctempchar1* nctemp5995= nctemp5997;
int nctemp5999=LibeStrcmp(nctemp5990,nctemp5995);
if(nctemp5999)
{
parflag =1;
}
struct tree* nctemp6008= p;
struct tree* nctemp6010=PtreeMvsister(nctemp6008);
p =nctemp6010;
}
int nctemp6011 = (p !=0);
nctemp5880=nctemp6011;}int nctemp6015 = (parflag ==1);
if(nctemp6015)
{
struct tree* nctemp6020= q;
struct nctempchar1 *nctemp6024;
static struct nctempchar1 nctemp6025 = {{ 9}, (char*)"parallel\0"};
nctemp6024=&nctemp6025;
nctempchar1* nctemp6022= nctemp6024;
int nctemp6026=PtreeSetparallel(nctemp6020,nctemp6022);
}
return 1;
}
