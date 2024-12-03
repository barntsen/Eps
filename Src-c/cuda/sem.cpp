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
int PtreeRmnode (struct tree* p);
int PtreeRmtree (struct tree* p);
struct tree* PtreeMknode (nctempchar1 *name,nctempchar1 *def);
int PtreeAddchild (struct tree* parent,struct tree* child);
int PtreeAddsister (struct tree* sister,struct tree* newnode);
struct tree* PtreeMvsister (struct tree* p);
struct tree* PtreeMvchild (struct tree* p);
nctempchar1 * PtreeSetfield (nctempchar1 *field,nctempchar1 *value);
int PtreeSetname (struct tree* p,nctempchar1 *name);
nctempchar1 * PtreeGetname (struct tree* p);
int PtreeSetdef (struct tree* p,nctempchar1 *def);
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
int PtreePrtree (struct tree* p,int level);
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
int SemSerror (struct tree* p,nctempchar1 *s1,nctempchar1 *s2)
{
struct tree* nctemp4= p;
nctempchar1* nctemp6=PtreeGetfile(nctemp4);
nctempchar1* nctemp2= nctemp6;
struct tree* nctemp9= p;
nctempchar1* nctemp11=PtreeGetdef(nctemp9);
nctempchar1* nctemp7= nctemp11;
struct tree* nctemp14= p;
int nctemp16=PtreeGetline(nctemp14);
int nctemp12= nctemp16;
nctempchar1* nctemp17= s1;
nctempchar1* nctemp20= s2;
int nctemp23=ErrSerror(nctemp2,nctemp7,nctemp12,nctemp17,nctemp20);
return 1;
}
int SemImport (struct tree* p,struct symbol* etp)
{
nctempchar1 *module;
nctempchar1 *file;
nctempchar1 *path;
nctempchar1 *sysfile;
nctempchar1 *name;
int fd;
struct symbol* stp;
struct symbol* sp;
struct symbol* tp;
struct symbol* prev;
struct tree* nctemp30= p;
nctempchar1* nctemp32=PtreeGetdef(nctemp30);
module=nctemp32;
nctempchar1* nctemp38= module;
struct nctempchar1 *nctemp43;
static struct nctempchar1 nctemp44 = {{ 3}, (char*)".m\0"};
nctemp43=&nctemp44;
nctempchar1* nctemp41= nctemp43;
nctempchar1* nctemp45=LibeStradd(nctemp38,nctemp41);
file=nctemp45;
nctempchar1* nctemp50= file;
struct nctempchar1 *nctemp55;
static struct nctempchar1 nctemp56 = {{ 2}, (char*)"r\0"};
nctemp55=&nctemp56;
nctempchar1* nctemp53= nctemp55;
int nctemp57=LibeOpen(nctemp50,nctemp53);
fd =nctemp57;
int nctemp58 = (fd ==0);
if(nctemp58)
{
nctempchar1* nctemp67=ScanPath();
path=nctemp67;
nctempchar1* nctemp73= path;
nctempchar1* nctemp76= file;
nctempchar1* nctemp79=LibeStradd(nctemp73,nctemp76);
sysfile=nctemp79;
nctempchar1* nctemp84= sysfile;
struct nctempchar1 *nctemp89;
static struct nctempchar1 nctemp90 = {{ 2}, (char*)"r\0"};
nctemp89=&nctemp90;
nctempchar1* nctemp87= nctemp89;
int nctemp91=LibeOpen(nctemp84,nctemp87);
fd =nctemp91;
RunFree(sysfile->a);
RunFree(sysfile);
RunFree(path->a);
RunFree(path);
int nctemp98 = (fd ==0);
if(nctemp98)
{
struct tree* nctemp103= p;
struct nctempchar1 *nctemp107;
static struct nctempchar1 nctemp108 = {{ 24}, (char*)"Module file not found: \0"};
nctemp107=&nctemp108;
nctempchar1* nctemp105= nctemp107;
nctempchar1* nctemp109= file;
int nctemp112=SemSerror(nctemp103,nctemp105,nctemp109);
}
}
struct symbol* nctemp117=SymMktable();
stp =nctemp117;
int nctemp119= fd;
struct symbol* nctemp121= stp;
nctempchar1* nctemp123= module;
int nctemp126=SymReadsym(nctemp119,nctemp121,nctemp123);
int nctemp128= fd;
int nctemp130=LibeClose(nctemp128);
struct symbol* nctemp135= stp;
struct symbol* nctemp137=SymMvnext(nctemp135);
tp =nctemp137;
int nctemp138 = (tp !=0);
int nctemp142=nctemp138;
while(nctemp142)
{{
nctempchar1* nctemp146= name;
struct symbol* nctemp149= etp;
struct symbol* nctemp151=SymLookup(nctemp146,nctemp149);
int nctemp143 = (nctemp151 !=0);
if(nctemp143)
{
prev =tp;
struct symbol* nctemp161= tp;
struct symbol* nctemp163=SymMvnext(nctemp161);
tp =nctemp163;
nctempchar1* nctemp165= name;
struct symbol* nctemp168= stp;
struct symbol* nctemp170=SymRmname(nctemp165,nctemp168);
}
else{
struct symbol* nctemp175= tp;
struct symbol* nctemp177=SymMvnext(nctemp175);
tp =nctemp177;
}
}
int nctemp178 = (tp !=0);
nctemp142=nctemp178;}struct symbol* nctemp186= etp;
struct symbol* nctemp188= stp;
struct symbol* nctemp190=SymAddtble(nctemp186,nctemp188);
etp =nctemp190;
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
struct tree* nctemp193= p;
struct tree* nctemp197= p;
nctempchar1* nctemp199=PtreeGetdef(nctemp197);
nctempchar1* nctemp195= nctemp199;
int nctemp200=PtreeSetype(nctemp193,nctemp195);
struct tree* nctemp206= p;
nctempchar1* nctemp208=PtreeGetglobal(nctemp206);
global=nctemp208;
rank =0;
struct tree* nctemp216= p;
nctempchar1* nctemp218=PtreeGetarray(nctemp216);
nctempchar1* nctemp214= nctemp218;
struct nctempchar1 *nctemp221;
static struct nctempchar1 nctemp222 = {{ 6}, (char*)"array\0"};
nctemp221=&nctemp222;
nctempchar1* nctemp219= nctemp221;
int nctemp223=LibeStrcmp(nctemp214,nctemp219);
if(nctemp223)
{
struct tree* nctemp228= p;
struct tree* nctemp230=PtreeMvchild(nctemp228);
np =nctemp230;
struct tree* nctemp235= np;
struct tree* nctemp237=PtreeMvchild(nctemp235);
np =nctemp237;
rank =1;
struct tree* nctemp249= np;
struct tree* nctemp251=PtreeMvsister(nctemp249);
np =nctemp251;
int nctemp242 = (np !=0);
int nctemp253=nctemp242;
while(nctemp253)
{{
int nctemp262 = rank + 1;
rank =nctemp262;
}
struct tree* nctemp270= np;
struct tree* nctemp272=PtreeMvsister(nctemp270);
np =nctemp272;
int nctemp263 = (np !=0);
nctemp253=nctemp263;}struct tree* nctemp278= p;
struct tree* nctemp280=PtreeMvchild(nctemp278);
np =nctemp280;
struct tree* nctemp285= np;
struct tree* nctemp287=PtreeMvsister(nctemp285);
np =nctemp287;
}
else{
struct tree* nctemp292= p;
struct tree* nctemp294=PtreeMvchild(nctemp292);
np =nctemp294;
}
int nctemp295 = (np !=0);
int nctemp299=nctemp295;
while(nctemp299)
{{
struct tree* nctemp301= np;
struct tree* nctemp305= p;
nctempchar1* nctemp307=PtreeGetype(nctemp305);
nctempchar1* nctemp303= nctemp307;
int nctemp308=PtreeSetype(nctemp301,nctemp303);
struct tree* nctemp318= np;
nctempchar1* nctemp320=PtreeGetdef(nctemp318);
nctempchar1* nctemp316= nctemp320;
struct symbol* nctemp321= tp;
struct symbol* nctemp323=SymMkname(nctemp316,nctemp321);
up =nctemp323;
int nctemp309 = (up ==0);
if(nctemp309)
{
struct tree* nctemp326= np;
struct nctempchar1 *nctemp330;
static struct nctempchar1 nctemp331 = {{ 21}, (char*)"Multiple declaration\0"};
nctemp330=&nctemp331;
nctempchar1* nctemp328= nctemp330;
struct tree* nctemp334= np;
nctempchar1* nctemp336=PtreeGetdef(nctemp334);
nctempchar1* nctemp332= nctemp336;
int nctemp337=SemSerror(nctemp326,nctemp328,nctemp332);
}
else{
struct symbol* nctemp339= up;
struct nctempchar1 *nctemp343;
static struct nctempchar1 nctemp344 = {{ 11}, (char*)"identifier\0"};
nctemp343=&nctemp344;
nctempchar1* nctemp341= nctemp343;
int nctemp345=SymSetident(nctemp339,nctemp341);
struct symbol* nctemp347= up;
struct tree* nctemp351= p;
nctempchar1* nctemp353=PtreeGetype(nctemp351);
nctempchar1* nctemp349= nctemp353;
int nctemp354=SymSetype(nctemp347,nctemp349);
nctempchar1* nctemp358= global;
struct nctempchar1 *nctemp363;
static struct nctempchar1 nctemp364 = {{ 7}, (char*)"global\0"};
nctemp363=&nctemp364;
nctempchar1* nctemp361= nctemp363;
int nctemp365=LibeStrcmp(nctemp358,nctemp361);
int nctemp355 = (nctemp365 ==1);
if(nctemp355)
{
struct symbol* nctemp368= up;
struct nctempchar1 *nctemp372;
static struct nctempchar1 nctemp373 = {{ 7}, (char*)"global\0"};
nctemp372=&nctemp373;
nctempchar1* nctemp370= nctemp372;
int nctemp374=SymSetglobal(nctemp368,nctemp370);
}
struct tree* nctemp380= p;
nctempchar1* nctemp382=PtreeGetype(nctemp380);
nctempchar1* nctemp378= nctemp382;
struct nctempchar1 *nctemp385;
static struct nctempchar1 nctemp386 = {{ 6}, (char*)"const\0"};
nctemp385=&nctemp386;
nctempchar1* nctemp383= nctemp385;
int nctemp387=LibeStrcmp(nctemp378,nctemp383);
int nctemp375 = (nctemp387 ==1);
if(nctemp375)
{
struct tree* nctemp393= np;
struct tree* nctemp395=PtreeMvchild(nctemp393);
sp =nctemp395;
struct tree* nctemp400= sp;
struct tree* nctemp402=PtreeMvchild(nctemp400);
sp =nctemp402;
struct tree* nctemp408= sp;
nctempchar1* nctemp410=PtreeGetname(nctemp408);
nctempchar1* nctemp406= nctemp410;
struct nctempchar1 *nctemp413;
static struct nctempchar1 nctemp414 = {{ 7}, (char*)"unexpr\0"};
nctemp413=&nctemp414;
nctempchar1* nctemp411= nctemp413;
int nctemp415=LibeStrcmp(nctemp406,nctemp411);
int nctemp403 = (nctemp415 ==1);
if(nctemp403)
{
struct tree* nctemp421= sp;
struct tree* nctemp423=PtreeMvchild(nctemp421);
sp =nctemp423;
struct tree* nctemp436= sp;
nctempchar1* nctemp438=PtreeGetdef(nctemp436);
nctempchar1* nctemp434= nctemp438;
int nctemp439=LibeStrlen(nctemp434);
int nctemp441 = nctemp439 + 1;
int nctemp443 = nctemp441 + 3;
l =nctemp443;
int nctemp450=l;
nctempchar1 *nctemp449;
nctemp449=(nctempchar1*)RunMalloc(sizeof(nctempchar1));
nctemp449->d[0]=l;
nctemp449->a=(char *)RunMalloc(sizeof(char)*nctemp450);
s=nctemp449;
struct nctempchar1 *nctemp456;
static struct nctempchar1 nctemp457 = {{ 3}, (char*)"(-\0"};
nctemp456=&nctemp457;
nctempchar1* nctemp454= nctemp456;
nctempchar1* nctemp458= s;
int nctemp461=LibeStrcpy(nctemp454,nctemp458);
struct tree* nctemp465= sp;
nctempchar1* nctemp467=PtreeGetdef(nctemp465);
nctempchar1* nctemp463= nctemp467;
nctempchar1* nctemp468= s;
int nctemp471=LibeStrcat(nctemp463,nctemp468);
struct nctempchar1 *nctemp475;
static struct nctempchar1 nctemp476 = {{ 2}, (char*)")\0"};
nctemp475=&nctemp476;
nctempchar1* nctemp473= nctemp475;
nctempchar1* nctemp477= s;
int nctemp480=LibeStrcat(nctemp473,nctemp477);
struct tree* nctemp482= sp;
nctempchar1* nctemp484= s;
int nctemp487=PtreeSetdef(nctemp482,nctemp484);
RunFree(s->a);
RunFree(s);
}
struct symbol* nctemp492= up;
struct tree* nctemp496= sp;
nctempchar1* nctemp498=PtreeGetname(nctemp496);
nctempchar1* nctemp494= nctemp498;
int nctemp499=SymSetype(nctemp492,nctemp494);
struct symbol* nctemp501= up;
struct tree* nctemp505= sp;
nctempchar1* nctemp507=PtreeGetdef(nctemp505);
nctempchar1* nctemp503= nctemp507;
int nctemp508=SymSetdescr(nctemp501,nctemp503);
struct symbol* nctemp510= up;
int nctemp512= 0;
int nctemp514=SymSetemit(nctemp510,nctemp512);
}
struct symbol* nctemp516= up;
struct nctempchar1 *nctemp520;
static struct nctempchar1 nctemp521 = {{ 5}, (char*)"lval\0"};
nctemp520=&nctemp521;
nctempchar1* nctemp518= nctemp520;
int nctemp522=SymSetlval(nctemp516,nctemp518);
struct tree* nctemp526= p;
nctempchar1* nctemp528=PtreeGetstruct(nctemp526);
nctempchar1* nctemp524= nctemp528;
struct nctempchar1 *nctemp531;
static struct nctempchar1 nctemp532 = {{ 7}, (char*)"struct\0"};
nctemp531=&nctemp532;
nctempchar1* nctemp529= nctemp531;
int nctemp533=LibeStrcmp(nctemp524,nctemp529);
if(nctemp533)
{
struct tree* nctemp539= p;
nctempchar1* nctemp541=PtreeGetype(nctemp539);
nctempchar1* nctemp537= nctemp541;
struct symbol* nctemp544=SymGetetp();
struct symbol* nctemp542= nctemp544;
struct symbol* nctemp545=SymLookup(nctemp537,nctemp542);
int nctemp534 = (nctemp545 ==0);
if(nctemp534)
{
struct tree* nctemp548= p;
struct nctempchar1 *nctemp552;
static struct nctempchar1 nctemp553 = {{ 20}, (char*)"Undefined structure\0"};
nctemp552=&nctemp553;
nctempchar1* nctemp550= nctemp552;
struct tree* nctemp556= p;
nctempchar1* nctemp558=PtreeGetype(nctemp556);
nctempchar1* nctemp554= nctemp558;
int nctemp559=SemSerror(nctemp548,nctemp550,nctemp554);
}
struct symbol* nctemp561= up;
struct tree* nctemp565= p;
nctempchar1* nctemp567=PtreeGetstruct(nctemp565);
nctempchar1* nctemp563= nctemp567;
int nctemp568=SymSetstruct(nctemp561,nctemp563);
}
struct symbol* nctemp570= up;
struct tree* nctemp574= p;
nctempchar1* nctemp576=PtreeGetarray(nctemp574);
nctempchar1* nctemp572= nctemp576;
int nctemp577=SymSetarray(nctemp570,nctemp572);
struct symbol* nctemp579= up;
int nctemp581= rank;
int nctemp583=SymSetrank(nctemp579,nctemp581);
struct tree* nctemp585= np;
int nctemp587= rank;
int nctemp589=PtreeSetrank(nctemp585,nctemp587);
}
struct tree* nctemp594= np;
struct tree* nctemp596=PtreeMvsister(nctemp594);
np =nctemp596;
}
int nctemp597 = (np !=0);
nctemp299=nctemp597;}return 1;
}
int SemDeclarations (struct tree* p,struct symbol* tp)
{
int nctemp602 = (p !=0);
int nctemp606=nctemp602;
while(nctemp606)
{{
struct tree* nctemp608= p;
struct symbol* nctemp610= tp;
int nctemp612=SemDeclaration(nctemp608,nctemp610);
struct tree* nctemp617= p;
struct tree* nctemp619=PtreeMvsister(nctemp617);
p =nctemp619;
}
int nctemp620 = (p !=0);
nctemp606=nctemp620;}return 1;
}
int SemStructdecl (struct tree* p,struct symbol* tp)
{
struct symbol* up;
struct symbol* uup;
nctempchar1 *structure;
struct tree* nctemp630= p;
nctempchar1* nctemp632=PtreeGetdef(nctemp630);
structure=nctemp632;
struct tree* nctemp637= p;
struct tree* nctemp639=PtreeMvchild(nctemp637);
p =nctemp639;
struct tree* nctemp644= p;
struct tree* nctemp646=PtreeMvchild(nctemp644);
p =nctemp646;
struct tree* nctemp650= p;
nctempchar1* nctemp652=PtreeGetname(nctemp650);
nctempchar1* nctemp648= nctemp652;
struct nctempchar1 *nctemp655;
static struct nctempchar1 nctemp656 = {{ 13}, (char*)"declarations\0"};
nctemp655=&nctemp656;
nctempchar1* nctemp653= nctemp655;
int nctemp657=LibeStrcmp(nctemp648,nctemp653);
if(nctemp657)
{
struct symbol* nctemp662=SymMktable();
up =nctemp662;
nctempchar1* nctemp670= structure;
struct symbol* nctemp673= tp;
struct symbol* nctemp675=SymMkname(nctemp670,nctemp673);
uup =nctemp675;
int nctemp663 = (uup ==0);
if(nctemp663)
{
struct tree* nctemp678= p;
struct nctempchar1 *nctemp682;
static struct nctempchar1 nctemp683 = {{ 21}, (char*)"Multiple declaration\0"};
nctemp682=&nctemp683;
nctempchar1* nctemp680= nctemp682;
nctempchar1* nctemp684= structure;
int nctemp687=SemSerror(nctemp678,nctemp680,nctemp684);
}
else{
struct symbol* nctemp689= uup;
struct symbol* nctemp691= up;
struct symbol* nctemp693=SymSetable(nctemp689,nctemp691);
struct symbol* nctemp695= uup;
struct nctempchar1 *nctemp699;
static struct nctempchar1 nctemp700 = {{ 10}, (char*)"structdef\0"};
nctemp699=&nctemp700;
nctempchar1* nctemp697= nctemp699;
int nctemp701=SymSetstruct(nctemp695,nctemp697);
struct symbol* nctemp703= uup;
nctempchar1* nctemp705= structure;
int nctemp708=SymSetype(nctemp703,nctemp705);
struct tree* nctemp712= p;
struct tree* nctemp714=PtreeMvchild(nctemp712);
struct tree* nctemp710= nctemp714;
struct symbol* nctemp715= up;
int nctemp717=SemDeclarations(nctemp710,nctemp715);
}
}
return 1;
}
int SemArgtype (struct tree* p,struct symbol* tp)
{
nctempchar1 *name;
struct tree* nctemp724= p;
nctempchar1* nctemp726=PtreeGetdef(nctemp724);
name=nctemp726;
struct symbol* nctemp732= tp;
nctempchar1* nctemp734=SymGetype(nctemp732);
nctempchar1* nctemp730= nctemp734;
struct tree* nctemp737= p;
nctempchar1* nctemp739=PtreeGetype(nctemp737);
nctempchar1* nctemp735= nctemp739;
int nctemp740=LibeStrcmp(nctemp730,nctemp735);
int nctemp727 = (nctemp740 ==0);
if(nctemp727)
{
struct tree* nctemp743= p;
struct nctempchar1 *nctemp747;
static struct nctempchar1 nctemp748 = {{ 50}, (char*)"Argument1 type does not match forward declaration\0"};
nctemp747=&nctemp748;
nctempchar1* nctemp745= nctemp747;
nctempchar1* nctemp749= name;
int nctemp752=SemSerror(nctemp743,nctemp745,nctemp749);
}
struct symbol* nctemp758= tp;
nctempchar1* nctemp760=SymGetref(nctemp758);
nctempchar1* nctemp756= nctemp760;
struct tree* nctemp763= p;
nctempchar1* nctemp765=PtreeGetref(nctemp763);
nctempchar1* nctemp761= nctemp765;
int nctemp766=LibeStrcmp(nctemp756,nctemp761);
int nctemp753 = (nctemp766 ==0);
if(nctemp753)
{
struct tree* nctemp769= p;
struct nctempchar1 *nctemp773;
static struct nctempchar1 nctemp774 = {{ 50}, (char*)"Argument2 type does not match forward declaration\0"};
nctemp773=&nctemp774;
nctempchar1* nctemp771= nctemp773;
nctempchar1* nctemp775= name;
int nctemp778=SemSerror(nctemp769,nctemp771,nctemp775);
}
struct symbol* nctemp784= tp;
nctempchar1* nctemp786=SymGetarray(nctemp784);
nctempchar1* nctemp782= nctemp786;
struct tree* nctemp789= p;
nctempchar1* nctemp791=PtreeGetarray(nctemp789);
nctempchar1* nctemp787= nctemp791;
int nctemp792=LibeStrcmp(nctemp782,nctemp787);
int nctemp779 = (nctemp792 ==0);
if(nctemp779)
{
struct tree* nctemp795= p;
struct nctempchar1 *nctemp799;
static struct nctempchar1 nctemp800 = {{ 50}, (char*)"Argument3 type does not match forward declaration\0"};
nctemp799=&nctemp800;
nctempchar1* nctemp797= nctemp799;
nctempchar1* nctemp801= name;
int nctemp804=SemSerror(nctemp795,nctemp797,nctemp801);
}
struct symbol* nctemp808= tp;
int nctemp810=SymGetrank(nctemp808);
struct tree* nctemp812= p;
int nctemp814=PtreeGetrank(nctemp812);
int nctemp805 = (nctemp810 !=nctemp814);
if(nctemp805)
{
struct tree* nctemp816= p;
struct nctempchar1 *nctemp820;
static struct nctempchar1 nctemp821 = {{ 50}, (char*)"Argument4 type does not match forward declaration\0"};
nctemp820=&nctemp821;
nctempchar1* nctemp818= nctemp820;
nctempchar1* nctemp822= name;
int nctemp825=SemSerror(nctemp816,nctemp818,nctemp822);
}
return 1;
}
int SemArray (struct tree* p,struct symbol* tp)
{
struct tree* np;
int rank;
struct tree* nctemp832= p;
nctempchar1* nctemp834=PtreeGetarray(nctemp832);
nctempchar1* nctemp830= nctemp834;
struct nctempchar1 *nctemp837;
static struct nctempchar1 nctemp838 = {{ 6}, (char*)"array\0"};
nctemp837=&nctemp838;
nctempchar1* nctemp835= nctemp837;
int nctemp839=LibeStrcmp(nctemp830,nctemp835);
int nctemp827 = (nctemp839 ==0);
if(nctemp827)
{
struct tree* nctemp842= p;
struct nctempchar1 *nctemp846;
static struct nctempchar1 nctemp847 = {{ 13}, (char*)"Not an array\0"};
nctemp846=&nctemp847;
nctempchar1* nctemp844= nctemp846;
struct tree* nctemp850= p;
nctempchar1* nctemp852=PtreeGetdef(nctemp850);
nctempchar1* nctemp848= nctemp852;
int nctemp853=SemSerror(nctemp842,nctemp844,nctemp848);
return 0;
}
struct tree* nctemp856= p;
struct nctempchar1 *nctemp860;
static struct nctempchar1 nctemp861 = {{ 11}, (char*)"identifier\0"};
nctemp860=&nctemp861;
nctempchar1* nctemp858= nctemp860;
int nctemp862=PtreeSetname(nctemp856,nctemp858);
struct tree* nctemp867= p;
struct tree* nctemp869=PtreeMvchild(nctemp867);
np =nctemp869;
struct tree* nctemp875= np;
nctempchar1* nctemp877=PtreeGetname(nctemp875);
nctempchar1* nctemp873= nctemp877;
struct nctempchar1 *nctemp880;
static struct nctempchar1 nctemp881 = {{ 9}, (char*)"exprlist\0"};
nctemp880=&nctemp881;
nctempchar1* nctemp878= nctemp880;
int nctemp882=LibeStrcmp(nctemp873,nctemp878);
int nctemp870 = (nctemp882 ==0);
if(nctemp870)
{
struct tree* nctemp885= p;
struct nctempchar1 *nctemp889;
static struct nctempchar1 nctemp890 = {{ 22}, (char*)"Missing array indexes\0"};
nctemp889=&nctemp890;
nctempchar1* nctemp887= nctemp889;
struct tree* nctemp893= p;
nctempchar1* nctemp895=PtreeGetdef(nctemp893);
nctempchar1* nctemp891= nctemp895;
int nctemp896=SemSerror(nctemp885,nctemp887,nctemp891);
return 0;
}
struct tree* nctemp905= np;
struct tree* nctemp907=PtreeMvchild(nctemp905);
np =nctemp907;
int nctemp898 = (np !=0);
if(nctemp898)
{
rank =0;
int nctemp913 = (np !=0);
int nctemp917=nctemp913;
while(nctemp917)
{{
struct tree* nctemp919= np;
struct tree* nctemp921=SemExpr(nctemp919);
struct tree* nctemp926= np;
struct tree* nctemp928=PtreeMvsister(nctemp926);
np =nctemp928;
int nctemp937 = rank + 1;
rank =nctemp937;
}
int nctemp938 = (np !=0);
nctemp917=nctemp938;}}
struct symbol* nctemp946= tp;
int nctemp948=SymGetrank(nctemp946);
int nctemp942 = (rank !=nctemp948);
if(nctemp942)
{
struct tree* nctemp950= p;
struct nctempchar1 *nctemp954;
static struct nctempchar1 nctemp955 = {{ 24}, (char*)"Illegal array dimension\0"};
nctemp954=&nctemp955;
nctempchar1* nctemp952= nctemp954;
struct tree* nctemp958= p;
nctempchar1* nctemp960=PtreeGetdef(nctemp958);
nctempchar1* nctemp956= nctemp960;
int nctemp961=SemSerror(nctemp950,nctemp952,nctemp956);
return 0;
}
struct tree* nctemp964= p;
int nctemp966= rank;
int nctemp968=PtreeSetrank(nctemp964,nctemp966);
return 1;
}
int SemStructure (struct tree* p,struct symbol* tp)
{
nctempchar1 *temp;
struct symbol* up;
struct symbol* uup;
struct tree* np;
struct tree* nctemp975= p;
nctempchar1* nctemp977=PtreeGetstruct(nctemp975);
nctempchar1* nctemp973= nctemp977;
struct nctempchar1 *nctemp980;
static struct nctempchar1 nctemp981 = {{ 7}, (char*)"struct\0"};
nctemp980=&nctemp981;
nctempchar1* nctemp978= nctemp980;
int nctemp982=LibeStrcmp(nctemp973,nctemp978);
int nctemp970 = (nctemp982 ==0);
if(nctemp970)
{
struct tree* nctemp985= p;
struct nctempchar1 *nctemp989;
static struct nctempchar1 nctemp990 = {{ 16}, (char*)"Not a structure\0"};
nctemp989=&nctemp990;
nctempchar1* nctemp987= nctemp989;
struct tree* nctemp993= p;
nctempchar1* nctemp995=PtreeGetdef(nctemp993);
nctempchar1* nctemp991= nctemp995;
int nctemp996=SemSerror(nctemp985,nctemp987,nctemp991);
return 0;
}
struct tree* nctemp999= p;
struct nctempchar1 *nctemp1003;
static struct nctempchar1 nctemp1004 = {{ 11}, (char*)"identifier\0"};
nctemp1003=&nctemp1004;
nctempchar1* nctemp1001= nctemp1003;
int nctemp1005=PtreeSetname(nctemp999,nctemp1001);
struct symbol* nctemp1011= tp;
nctempchar1* nctemp1013=SymGetype(nctemp1011);
temp=nctemp1013;
nctempchar1* nctemp1021= temp;
struct symbol* nctemp1024=SymLook(nctemp1021);
up =nctemp1024;
int nctemp1014 = (up ==0);
if(nctemp1014)
{
nctempchar1* nctemp1033= temp;
struct symbol* nctemp1036=SymLook(nctemp1033);
up =nctemp1036;
int nctemp1026 = (up ==0);
if(nctemp1026)
{
struct tree* nctemp1039= p;
struct nctempchar1 *nctemp1043;
static struct nctempchar1 nctemp1044 = {{ 26}, (char*)"Undeclared structure type\0"};
nctemp1043=&nctemp1044;
nctempchar1* nctemp1041= nctemp1043;
struct nctempchar1 *nctemp1047;
static struct nctempchar1 nctemp1048 = {{ 2}, (char*)" \0"};
nctemp1047=&nctemp1048;
nctempchar1* nctemp1045= nctemp1047;
int nctemp1049=SemSerror(nctemp1039,nctemp1041,nctemp1045);
return 0;
}
}
struct symbol* nctemp1054= tp;
nctempchar1* nctemp1056=SymGetstruct(nctemp1054);
nctempchar1* nctemp1052= nctemp1056;
struct nctempchar1 *nctemp1059;
static struct nctempchar1 nctemp1060 = {{ 10}, (char*)"structdef\0"};
nctemp1059=&nctemp1060;
nctempchar1* nctemp1057= nctemp1059;
int nctemp1061=LibeStrcmp(nctemp1052,nctemp1057);
if(nctemp1061)
{
struct tree* nctemp1063= p;
struct nctempchar1 *nctemp1067;
static struct nctempchar1 nctemp1068 = {{ 43}, (char*)"Struct names can not be used as a variable\0"};
nctemp1067=&nctemp1068;
nctempchar1* nctemp1065= nctemp1067;
struct tree* nctemp1071= p;
nctempchar1* nctemp1073=PtreeGetdef(nctemp1071);
nctempchar1* nctemp1069= nctemp1073;
int nctemp1074=SemSerror(nctemp1063,nctemp1065,nctemp1069);
return 0;
}
struct tree* nctemp1080= p;
struct tree* nctemp1082=PtreeMvchild(nctemp1080);
np =nctemp1082;
int nctemp1083 = (np ==0);
if(nctemp1083)
{
struct tree* nctemp1088= p;
struct nctempchar1 *nctemp1092;
static struct nctempchar1 nctemp1093 = {{ 27}, (char*)"Missing structure selector\0"};
nctemp1092=&nctemp1093;
nctempchar1* nctemp1090= nctemp1092;
struct tree* nctemp1096= p;
nctempchar1* nctemp1098=PtreeGetdef(nctemp1096);
nctempchar1* nctemp1094= nctemp1098;
int nctemp1099=SemSerror(nctemp1088,nctemp1090,nctemp1094);
return 0;
}
struct tree* nctemp1104= p;
nctempchar1* nctemp1106=PtreeGetarray(nctemp1104);
nctempchar1* nctemp1102= nctemp1106;
struct nctempchar1 *nctemp1109;
static struct nctempchar1 nctemp1110 = {{ 6}, (char*)"array\0"};
nctemp1109=&nctemp1110;
nctempchar1* nctemp1107= nctemp1109;
int nctemp1111=LibeStrcmp(nctemp1102,nctemp1107);
if(nctemp1111)
{
struct tree* nctemp1116= np;
struct tree* nctemp1118=PtreeMvsister(nctemp1116);
np =nctemp1118;
}
int nctemp1119 = (np ==0);
if(nctemp1119)
{
struct tree* nctemp1124= p;
struct nctempchar1 *nctemp1128;
static struct nctempchar1 nctemp1129 = {{ 20}, (char*)"Missing array index\0"};
nctemp1128=&nctemp1129;
nctempchar1* nctemp1126= nctemp1128;
struct tree* nctemp1132= p;
nctempchar1* nctemp1134=PtreeGetdef(nctemp1132);
nctempchar1* nctemp1130= nctemp1134;
int nctemp1135=SemSerror(nctemp1124,nctemp1126,nctemp1130);
return 0;
}
struct symbol* nctemp1141= up;
struct symbol* nctemp1143=SymGetable(nctemp1141);
uup =nctemp1143;
struct tree* nctemp1153= np;
nctempchar1* nctemp1155=PtreeGetdef(nctemp1153);
nctempchar1* nctemp1151= nctemp1155;
struct symbol* nctemp1156= uup;
struct symbol* nctemp1158=SymLookup(nctemp1151,nctemp1156);
tp =nctemp1158;
int nctemp1144 = (tp ==0);
if(nctemp1144)
{
struct tree* nctemp1161= np;
struct nctempchar1 *nctemp1165;
static struct nctempchar1 nctemp1166 = {{ 28}, (char*)"Undeclared structure member\0"};
nctemp1165=&nctemp1166;
nctempchar1* nctemp1163= nctemp1165;
struct tree* nctemp1169= np;
nctempchar1* nctemp1171=PtreeGetdef(nctemp1169);
nctempchar1* nctemp1167= nctemp1171;
int nctemp1172=SemSerror(nctemp1161,nctemp1163,nctemp1167);
return 0;
}
struct symbol* nctemp1177= tp;
nctempchar1* nctemp1179=SymGetarray(nctemp1177);
nctempchar1* nctemp1175= nctemp1179;
struct nctempchar1 *nctemp1182;
static struct nctempchar1 nctemp1183 = {{ 6}, (char*)"array\0"};
nctemp1182=&nctemp1183;
nctempchar1* nctemp1180= nctemp1182;
int nctemp1184=LibeStrcmp(nctemp1175,nctemp1180);
if(nctemp1184)
{
struct tree* nctemp1188= np;
struct tree* nctemp1190=PtreeMvchild(nctemp1188);
int nctemp1185 = (nctemp1190 !=0);
if(nctemp1185)
{
struct tree* nctemp1193= np;
struct symbol* nctemp1195= tp;
int nctemp1197=SemArray(nctemp1193,nctemp1195);
struct symbol* nctemp1201= tp;
nctempchar1* nctemp1203=SymGetstruct(nctemp1201);
nctempchar1* nctemp1199= nctemp1203;
struct nctempchar1 *nctemp1206;
static struct nctempchar1 nctemp1207 = {{ 7}, (char*)"struct\0"};
nctemp1206=&nctemp1207;
nctempchar1* nctemp1204= nctemp1206;
int nctemp1208=LibeStrcmp(nctemp1199,nctemp1204);
if(nctemp1208)
{
struct tree* nctemp1210= np;
struct nctempchar1 *nctemp1214;
static struct nctempchar1 nctemp1215 = {{ 5}, (char*)"sref\0"};
nctemp1214=&nctemp1215;
nctempchar1* nctemp1212= nctemp1214;
int nctemp1216=PtreeSetref(nctemp1210,nctemp1212);
}
}
else{
struct tree* nctemp1218= np;
struct nctempchar1 *nctemp1222;
static struct nctempchar1 nctemp1223 = {{ 5}, (char*)"aref\0"};
nctemp1222=&nctemp1223;
nctempchar1* nctemp1220= nctemp1222;
int nctemp1224=PtreeSetref(nctemp1218,nctemp1220);
}
}
else{
struct symbol* nctemp1228= tp;
nctempchar1* nctemp1230=SymGetstruct(nctemp1228);
nctempchar1* nctemp1226= nctemp1230;
struct nctempchar1 *nctemp1233;
static struct nctempchar1 nctemp1234 = {{ 7}, (char*)"struct\0"};
nctemp1233=&nctemp1234;
nctempchar1* nctemp1231= nctemp1233;
int nctemp1235=LibeStrcmp(nctemp1226,nctemp1231);
if(nctemp1235)
{
struct tree* nctemp1237= np;
struct nctempchar1 *nctemp1241;
static struct nctempchar1 nctemp1242 = {{ 5}, (char*)"sref\0"};
nctemp1241=&nctemp1242;
nctempchar1* nctemp1239= nctemp1241;
int nctemp1243=PtreeSetref(nctemp1237,nctemp1239);
}
}
struct tree* nctemp1245= np;
struct symbol* nctemp1249= tp;
nctempchar1* nctemp1251=SymGetype(nctemp1249);
nctempchar1* nctemp1247= nctemp1251;
int nctemp1252=PtreeSetype(nctemp1245,nctemp1247);
struct tree* nctemp1254= np;
struct symbol* nctemp1258= tp;
nctempchar1* nctemp1260=SymGetarray(nctemp1258);
nctempchar1* nctemp1256= nctemp1260;
int nctemp1261=PtreeSetarray(nctemp1254,nctemp1256);
struct tree* nctemp1263= np;
struct symbol* nctemp1267= tp;
int nctemp1269=SymGetrank(nctemp1267);
int nctemp1265= nctemp1269;
int nctemp1270=PtreeSetrank(nctemp1263,nctemp1265);
struct tree* nctemp1272= np;
struct symbol* nctemp1276= tp;
nctempchar1* nctemp1278=SymGetlval(nctemp1276);
nctempchar1* nctemp1274= nctemp1278;
int nctemp1279=PtreeSetlval(nctemp1272,nctemp1274);
struct tree* nctemp1281= p;
struct symbol* nctemp1285= tp;
nctempchar1* nctemp1287=SymGetype(nctemp1285);
nctempchar1* nctemp1283= nctemp1287;
int nctemp1288=PtreeSetype(nctemp1281,nctemp1283);
struct tree* nctemp1290= p;
struct tree* nctemp1294= np;
nctempchar1* nctemp1296=PtreeGetref(nctemp1294);
nctempchar1* nctemp1292= nctemp1296;
int nctemp1297=PtreeSetref(nctemp1290,nctemp1292);
struct tree* nctemp1299= p;
struct symbol* nctemp1303= tp;
int nctemp1305=SymGetrank(nctemp1303);
int nctemp1301= nctemp1305;
int nctemp1306=PtreeSetrank(nctemp1299,nctemp1301);
return 1;
}
int SemId (struct tree* p)
{
struct symbol* tp;
struct tree* np;
struct tree* nctemp1317= p;
nctempchar1* nctemp1319=PtreeGetdef(nctemp1317);
nctempchar1* nctemp1315= nctemp1319;
struct symbol* nctemp1320=SymLook(nctemp1315);
tp =nctemp1320;
int nctemp1308 = (tp ==0);
if(nctemp1308)
{
struct tree* nctemp1323= p;
struct nctempchar1 *nctemp1327;
static struct nctempchar1 nctemp1328 = {{ 22}, (char*)"Undeclared identifier\0"};
nctemp1327=&nctemp1328;
nctempchar1* nctemp1325= nctemp1327;
struct tree* nctemp1331= p;
nctempchar1* nctemp1333=PtreeGetdef(nctemp1331);
nctempchar1* nctemp1329= nctemp1333;
int nctemp1334=SemSerror(nctemp1323,nctemp1325,nctemp1329);
}
struct symbol* nctemp1340= tp;
nctempchar1* nctemp1342=SymGetype(nctemp1340);
nctempchar1* nctemp1338= nctemp1342;
struct nctempchar1 *nctemp1345;
static struct nctempchar1 nctemp1346 = {{ 10}, (char*)"iconstant\0"};
nctemp1345=&nctemp1346;
nctempchar1* nctemp1343= nctemp1345;
int nctemp1347=LibeStrcmp(nctemp1338,nctemp1343);
int nctemp1335 = (nctemp1347 ==1);
if(nctemp1335)
{
struct tree* nctemp1350= p;
struct symbol* nctemp1354= tp;
nctempchar1* nctemp1356=SymGetype(nctemp1354);
nctempchar1* nctemp1352= nctemp1356;
int nctemp1357=PtreeSetname(nctemp1350,nctemp1352);
struct tree* nctemp1359= p;
struct symbol* nctemp1363= tp;
nctempchar1* nctemp1365=SymGetdescr(nctemp1363);
nctempchar1* nctemp1361= nctemp1365;
int nctemp1366=PtreeSetdef(nctemp1359,nctemp1361);
struct tree* nctemp1368= p;
struct nctempchar1 *nctemp1372;
static struct nctempchar1 nctemp1373 = {{ 4}, (char*)"int\0"};
nctemp1372=&nctemp1373;
nctempchar1* nctemp1370= nctemp1372;
int nctemp1374=PtreeSetype(nctemp1368,nctemp1370);
return 1;
}
else{
struct symbol* nctemp1381= tp;
nctempchar1* nctemp1383=SymGetype(nctemp1381);
nctempchar1* nctemp1379= nctemp1383;
struct nctempchar1 *nctemp1386;
static struct nctempchar1 nctemp1387 = {{ 10}, (char*)"rconstant\0"};
nctemp1386=&nctemp1387;
nctempchar1* nctemp1384= nctemp1386;
int nctemp1388=LibeStrcmp(nctemp1379,nctemp1384);
int nctemp1376 = (nctemp1388 ==1);
if(nctemp1376)
{
struct tree* nctemp1391= p;
struct symbol* nctemp1395= tp;
nctempchar1* nctemp1397=SymGetype(nctemp1395);
nctempchar1* nctemp1393= nctemp1397;
int nctemp1398=PtreeSetname(nctemp1391,nctemp1393);
struct tree* nctemp1400= p;
struct symbol* nctemp1404= tp;
nctempchar1* nctemp1406=SymGetdescr(nctemp1404);
nctempchar1* nctemp1402= nctemp1406;
int nctemp1407=PtreeSetdef(nctemp1400,nctemp1402);
struct tree* nctemp1409= p;
struct nctempchar1 *nctemp1413;
static struct nctempchar1 nctemp1414 = {{ 6}, (char*)"float\0"};
nctemp1413=&nctemp1414;
nctempchar1* nctemp1411= nctemp1413;
int nctemp1415=PtreeSetype(nctemp1409,nctemp1411);
return 1;
}
else{
struct symbol* nctemp1422= tp;
nctempchar1* nctemp1424=SymGetype(nctemp1422);
nctempchar1* nctemp1420= nctemp1424;
struct nctempchar1 *nctemp1427;
static struct nctempchar1 nctemp1428 = {{ 10}, (char*)"sconstant\0"};
nctemp1427=&nctemp1428;
nctempchar1* nctemp1425= nctemp1427;
int nctemp1429=LibeStrcmp(nctemp1420,nctemp1425);
int nctemp1417 = (nctemp1429 ==1);
if(nctemp1417)
{
struct tree* nctemp1432= p;
struct symbol* nctemp1436= tp;
nctempchar1* nctemp1438=SymGetype(nctemp1436);
nctempchar1* nctemp1434= nctemp1438;
int nctemp1439=PtreeSetname(nctemp1432,nctemp1434);
struct tree* nctemp1441= p;
struct symbol* nctemp1445= tp;
nctempchar1* nctemp1447=SymGetdescr(nctemp1445);
nctempchar1* nctemp1443= nctemp1447;
int nctemp1448=PtreeSetdef(nctemp1441,nctemp1443);
struct tree* nctemp1450= p;
struct nctempchar1 *nctemp1454;
static struct nctempchar1 nctemp1455 = {{ 5}, (char*)"char\0"};
nctemp1454=&nctemp1455;
nctempchar1* nctemp1452= nctemp1454;
int nctemp1456=PtreeSetype(nctemp1450,nctemp1452);
struct tree* nctemp1458= p;
struct nctempchar1 *nctemp1462;
static struct nctempchar1 nctemp1463 = {{ 6}, (char*)"array\0"};
nctemp1462=&nctemp1463;
nctempchar1* nctemp1460= nctemp1462;
int nctemp1464=PtreeSetarray(nctemp1458,nctemp1460);
struct tree* nctemp1466= p;
struct nctempchar1 *nctemp1470;
static struct nctempchar1 nctemp1471 = {{ 5}, (char*)"aref\0"};
nctemp1470=&nctemp1471;
nctempchar1* nctemp1468= nctemp1470;
int nctemp1472=PtreeSetref(nctemp1466,nctemp1468);
struct tree* nctemp1474= p;
int nctemp1476= 1;
int nctemp1478=PtreeSetrank(nctemp1474,nctemp1476);
return 1;
}
}
}
struct symbol* nctemp1483= tp;
nctempchar1* nctemp1485=SymGetstruct(nctemp1483);
nctempchar1* nctemp1481= nctemp1485;
struct nctempchar1 *nctemp1488;
static struct nctempchar1 nctemp1489 = {{ 10}, (char*)"structdef\0"};
nctemp1488=&nctemp1489;
nctempchar1* nctemp1486= nctemp1488;
int nctemp1490=LibeStrcmp(nctemp1481,nctemp1486);
if(nctemp1490)
{
struct tree* nctemp1492= p;
struct nctempchar1 *nctemp1496;
static struct nctempchar1 nctemp1497 = {{ 43}, (char*)"Struct names can not be used as a variable\0"};
nctemp1496=&nctemp1497;
nctempchar1* nctemp1494= nctemp1496;
struct tree* nctemp1500= p;
nctempchar1* nctemp1502=PtreeGetdef(nctemp1500);
nctempchar1* nctemp1498= nctemp1502;
int nctemp1503=SemSerror(nctemp1492,nctemp1494,nctemp1498);
}
struct tree* nctemp1505= p;
struct symbol* nctemp1509= tp;
nctempchar1* nctemp1511=SymGetype(nctemp1509);
nctempchar1* nctemp1507= nctemp1511;
int nctemp1512=PtreeSetype(nctemp1505,nctemp1507);
struct tree* nctemp1514= p;
struct symbol* nctemp1518= tp;
nctempchar1* nctemp1520=SymGetarray(nctemp1518);
nctempchar1* nctemp1516= nctemp1520;
int nctemp1521=PtreeSetarray(nctemp1514,nctemp1516);
struct tree* nctemp1523= p;
struct symbol* nctemp1527= tp;
int nctemp1529=SymGetrank(nctemp1527);
int nctemp1525= nctemp1529;
int nctemp1530=PtreeSetrank(nctemp1523,nctemp1525);
struct tree* nctemp1532= p;
struct symbol* nctemp1536= tp;
nctempchar1* nctemp1538=SymGetstruct(nctemp1536);
nctempchar1* nctemp1534= nctemp1538;
int nctemp1539=PtreeSetstruct(nctemp1532,nctemp1534);
struct tree* nctemp1541= p;
struct symbol* nctemp1545= tp;
nctempchar1* nctemp1547=SymGetlval(nctemp1545);
nctempchar1* nctemp1543= nctemp1547;
int nctemp1548=PtreeSetlval(nctemp1541,nctemp1543);
struct tree* nctemp1553= p;
struct tree* nctemp1555=PtreeMvchild(nctemp1553);
np =nctemp1555;
int nctemp1556 = (np !=0);
if(nctemp1556)
{
struct tree* nctemp1563= np;
nctempchar1* nctemp1565=PtreeGetname(nctemp1563);
nctempchar1* nctemp1561= nctemp1565;
struct nctempchar1 *nctemp1568;
static struct nctempchar1 nctemp1569 = {{ 9}, (char*)"exprlist\0"};
nctemp1568=&nctemp1569;
nctempchar1* nctemp1566= nctemp1568;
int nctemp1570=LibeStrcmp(nctemp1561,nctemp1566);
if(nctemp1570)
{
struct tree* nctemp1572= p;
struct symbol* nctemp1574= tp;
int nctemp1576=SemArray(nctemp1572,nctemp1574);
struct tree* nctemp1580= np;
struct tree* nctemp1582=PtreeMvsister(nctemp1580);
int nctemp1577 = (nctemp1582 !=0);
if(nctemp1577)
{
struct tree* nctemp1585= p;
struct symbol* nctemp1587= tp;
int nctemp1589=SemStructure(nctemp1585,nctemp1587);
}
else{
struct tree* nctemp1593= p;
nctempchar1* nctemp1595=PtreeGetstruct(nctemp1593);
nctempchar1* nctemp1591= nctemp1595;
struct nctempchar1 *nctemp1598;
static struct nctempchar1 nctemp1599 = {{ 7}, (char*)"struct\0"};
nctemp1598=&nctemp1599;
nctempchar1* nctemp1596= nctemp1598;
int nctemp1600=LibeStrcmp(nctemp1591,nctemp1596);
if(nctemp1600)
{
struct tree* nctemp1602= p;
struct nctempchar1 *nctemp1606;
static struct nctempchar1 nctemp1607 = {{ 5}, (char*)"sref\0"};
nctemp1606=&nctemp1607;
nctempchar1* nctemp1604= nctemp1606;
int nctemp1608=PtreeSetref(nctemp1602,nctemp1604);
}
}
}
else{
struct tree* nctemp1612= np;
nctempchar1* nctemp1614=PtreeGetname(nctemp1612);
nctempchar1* nctemp1610= nctemp1614;
struct nctempchar1 *nctemp1617;
static struct nctempchar1 nctemp1618 = {{ 9}, (char*)"selector\0"};
nctemp1617=&nctemp1618;
nctempchar1* nctemp1615= nctemp1617;
int nctemp1619=LibeStrcmp(nctemp1610,nctemp1615);
if(nctemp1619)
{
struct tree* nctemp1621= p;
struct symbol* nctemp1623= tp;
int nctemp1625=SemStructure(nctemp1621,nctemp1623);
}
}
}
else{
struct tree* nctemp1629= p;
nctempchar1* nctemp1631=PtreeGetarray(nctemp1629);
nctempchar1* nctemp1627= nctemp1631;
struct nctempchar1 *nctemp1634;
static struct nctempchar1 nctemp1635 = {{ 6}, (char*)"array\0"};
nctemp1634=&nctemp1635;
nctempchar1* nctemp1632= nctemp1634;
int nctemp1636=LibeStrcmp(nctemp1627,nctemp1632);
if(nctemp1636)
{
struct tree* nctemp1638= p;
struct nctempchar1 *nctemp1642;
static struct nctempchar1 nctemp1643 = {{ 5}, (char*)"aref\0"};
nctemp1642=&nctemp1643;
nctempchar1* nctemp1640= nctemp1642;
int nctemp1644=PtreeSetref(nctemp1638,nctemp1640);
}
else{
struct tree* nctemp1648= p;
nctempchar1* nctemp1650=PtreeGetstruct(nctemp1648);
nctempchar1* nctemp1646= nctemp1650;
struct nctempchar1 *nctemp1653;
static struct nctempchar1 nctemp1654 = {{ 7}, (char*)"struct\0"};
nctemp1653=&nctemp1654;
nctempchar1* nctemp1651= nctemp1653;
int nctemp1655=LibeStrcmp(nctemp1646,nctemp1651);
if(nctemp1655)
{
struct tree* nctemp1657= p;
struct nctempchar1 *nctemp1661;
static struct nctempchar1 nctemp1662 = {{ 5}, (char*)"sref\0"};
nctemp1661=&nctemp1662;
nctempchar1* nctemp1659= nctemp1661;
int nctemp1663=PtreeSetref(nctemp1657,nctemp1659);
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
struct tree* nctemp1668= p;
nctempchar1* nctemp1670=PtreeGetname(nctemp1668);
nctempchar1* nctemp1666= nctemp1670;
struct nctempchar1 *nctemp1673;
static struct nctempchar1 nctemp1674 = {{ 6}, (char*)"fcall\0"};
nctemp1673=&nctemp1674;
nctempchar1* nctemp1671= nctemp1673;
int nctemp1675=LibeStrcmp(nctemp1666,nctemp1671);
if(nctemp1675)
{
struct tree* nctemp1685= p;
nctempchar1* nctemp1687=PtreeGetdef(nctemp1685);
nctempchar1* nctemp1683= nctemp1687;
struct symbol* nctemp1690=SymGetetp();
struct symbol* nctemp1688= nctemp1690;
struct symbol* nctemp1691=SymLookup(nctemp1683,nctemp1688);
tp =nctemp1691;
int nctemp1676 = (tp ==0);
if(nctemp1676)
{
struct tree* nctemp1694= p;
struct nctempchar1 *nctemp1698;
static struct nctempchar1 nctemp1699 = {{ 20}, (char*)"Undeclared function\0"};
nctemp1698=&nctemp1699;
nctempchar1* nctemp1696= nctemp1698;
struct tree* nctemp1702= p;
nctempchar1* nctemp1704=PtreeGetdef(nctemp1702);
nctempchar1* nctemp1700= nctemp1704;
int nctemp1705=SemSerror(nctemp1694,nctemp1696,nctemp1700);
return 0;
}
struct symbol* nctemp1712= tp;
nctempchar1* nctemp1714=SymGetfunc(nctemp1712);
nctempchar1* nctemp1710= nctemp1714;
struct nctempchar1 *nctemp1717;
static struct nctempchar1 nctemp1718 = {{ 5}, (char*)"fdef\0"};
nctemp1717=&nctemp1718;
nctempchar1* nctemp1715= nctemp1717;
int nctemp1719=LibeStrcmp(nctemp1710,nctemp1715);
int nctemp1707 = (nctemp1719 ==0);
if(nctemp1707)
{
struct tree* nctemp1722= p;
struct nctempchar1 *nctemp1726;
static struct nctempchar1 nctemp1727 = {{ 15}, (char*)"Not a function\0"};
nctemp1726=&nctemp1727;
nctempchar1* nctemp1724= nctemp1726;
struct tree* nctemp1730= p;
nctempchar1* nctemp1732=PtreeGetdef(nctemp1730);
nctempchar1* nctemp1728= nctemp1732;
int nctemp1733=SemSerror(nctemp1722,nctemp1724,nctemp1728);
return 0;
}
struct tree* nctemp1736= p;
struct symbol* nctemp1740= tp;
nctempchar1* nctemp1742=SymGetype(nctemp1740);
nctempchar1* nctemp1738= nctemp1742;
int nctemp1743=PtreeSetype(nctemp1736,nctemp1738);
struct tree* nctemp1745= p;
struct symbol* nctemp1749= tp;
nctempchar1* nctemp1751=SymGetstruct(nctemp1749);
nctempchar1* nctemp1747= nctemp1751;
int nctemp1752=PtreeSetstruct(nctemp1745,nctemp1747);
struct tree* nctemp1754= p;
struct symbol* nctemp1758= tp;
nctempchar1* nctemp1760=SymGetarray(nctemp1758);
nctempchar1* nctemp1756= nctemp1760;
int nctemp1761=PtreeSetarray(nctemp1754,nctemp1756);
struct tree* nctemp1763= p;
struct symbol* nctemp1767= tp;
int nctemp1769=SymGetrank(nctemp1767);
int nctemp1765= nctemp1769;
int nctemp1770=PtreeSetrank(nctemp1763,nctemp1765);
struct tree* nctemp1774= p;
nctempchar1* nctemp1776=PtreeGetarray(nctemp1774);
nctempchar1* nctemp1772= nctemp1776;
struct nctempchar1 *nctemp1779;
static struct nctempchar1 nctemp1780 = {{ 6}, (char*)"array\0"};
nctemp1779=&nctemp1780;
nctempchar1* nctemp1777= nctemp1779;
int nctemp1781=LibeStrcmp(nctemp1772,nctemp1777);
if(nctemp1781)
{
struct tree* nctemp1783= p;
struct nctempchar1 *nctemp1787;
static struct nctempchar1 nctemp1788 = {{ 5}, (char*)"aref\0"};
nctemp1787=&nctemp1788;
nctempchar1* nctemp1785= nctemp1787;
int nctemp1789=PtreeSetref(nctemp1783,nctemp1785);
}
else{
struct tree* nctemp1793= p;
nctempchar1* nctemp1795=PtreeGetstruct(nctemp1793);
nctempchar1* nctemp1791= nctemp1795;
struct nctempchar1 *nctemp1798;
static struct nctempchar1 nctemp1799 = {{ 7}, (char*)"struct\0"};
nctemp1798=&nctemp1799;
nctempchar1* nctemp1796= nctemp1798;
int nctemp1800=LibeStrcmp(nctemp1791,nctemp1796);
if(nctemp1800)
{
struct tree* nctemp1802= p;
struct nctempchar1 *nctemp1806;
static struct nctempchar1 nctemp1807 = {{ 5}, (char*)"sref\0"};
nctemp1806=&nctemp1807;
nctempchar1* nctemp1804= nctemp1806;
int nctemp1808=PtreeSetref(nctemp1802,nctemp1804);
}
}
struct symbol* nctemp1813= tp;
struct symbol* nctemp1815=SymGetable(nctemp1813);
tp =nctemp1815;
struct nctempchar1 *nctemp1822;
static struct nctempchar1 nctemp1823 = {{ 9}, (char*)"#arglist\0"};
nctemp1822=&nctemp1823;
nctempchar1* nctemp1820= nctemp1822;
struct symbol* nctemp1824= tp;
struct symbol* nctemp1826=SymLookup(nctemp1820,nctemp1824);
tp =nctemp1826;
int nctemp1827 = (tp !=0);
if(nctemp1827)
{
struct symbol* nctemp1835= tp;
struct symbol* nctemp1837=SymGetable(nctemp1835);
tp =nctemp1837;
}
struct tree* nctemp1845= p;
struct tree* nctemp1847=PtreeMvchild(nctemp1845);
np =nctemp1847;
int nctemp1838 = (np ==0);
if(nctemp1838)
{
struct symbol* nctemp1856= tp;
struct symbol* nctemp1858=SymMvnext(nctemp1856);
tp =nctemp1858;
int nctemp1849 = (tp !=0);
if(nctemp1849)
{
struct tree* nctemp1861= p;
struct nctempchar1 *nctemp1865;
static struct nctempchar1 nctemp1866 = {{ 41}, (char*)"Function call does not match declaration\0"};
nctemp1865=&nctemp1866;
nctempchar1* nctemp1863= nctemp1865;
struct tree* nctemp1869= p;
nctempchar1* nctemp1871=PtreeGetdef(nctemp1869);
nctempchar1* nctemp1867= nctemp1871;
int nctemp1872=SemSerror(nctemp1861,nctemp1863,nctemp1867);
return 0;
}
return 1;
}
struct tree* nctemp1881= p;
struct tree* nctemp1883=PtreeMvchild(nctemp1881);
struct tree* nctemp1879= nctemp1883;
struct tree* nctemp1884=PtreeMvchild(nctemp1879);
np =nctemp1884;
int nctemp1885 = (np !=0);
int nctemp1889=nctemp1885;
while(nctemp1889)
{{
struct symbol* nctemp1894= tp;
struct symbol* nctemp1896=SymMvnext(nctemp1894);
tp =nctemp1896;
int nctemp1897 = (tp ==0);
if(nctemp1897)
{
struct tree* nctemp1902= p;
struct nctempchar1 *nctemp1906;
static struct nctempchar1 nctemp1907 = {{ 41}, (char*)"Function call does not match declaration\0"};
nctemp1906=&nctemp1907;
nctempchar1* nctemp1904= nctemp1906;
struct tree* nctemp1910= p;
nctempchar1* nctemp1912=PtreeGetdef(nctemp1910);
nctempchar1* nctemp1908= nctemp1912;
int nctemp1913=SemSerror(nctemp1902,nctemp1904,nctemp1908);
return 0;
}
struct symbol* nctemp1920= tp;
nctempchar1* nctemp1922=SymGetype(nctemp1920);
type=nctemp1922;
struct tree* nctemp1924= np;
struct tree* nctemp1926=SemExpr(nctemp1924);
nctempchar1* nctemp1930= type;
struct tree* nctemp1935= np;
nctempchar1* nctemp1937=PtreeGetype(nctemp1935);
nctempchar1* nctemp1933= nctemp1937;
int nctemp1938=LibeStrcmp(nctemp1930,nctemp1933);
int nctemp1927 = (nctemp1938 ==0);
if(nctemp1927)
{
struct tree* nctemp1941= p;
struct nctempchar1 *nctemp1945;
static struct nctempchar1 nctemp1946 = {{ 41}, (char*)"Function call does not match declaration\0"};
nctemp1945=&nctemp1946;
nctempchar1* nctemp1943= nctemp1945;
struct tree* nctemp1949= p;
nctempchar1* nctemp1951=PtreeGetdef(nctemp1949);
nctempchar1* nctemp1947= nctemp1951;
int nctemp1952=SemSerror(nctemp1941,nctemp1943,nctemp1947);
return 0;
}
struct symbol* nctemp1957= tp;
nctempchar1* nctemp1959=SymGetarray(nctemp1957);
nctempchar1* nctemp1955= nctemp1959;
struct nctempchar1 *nctemp1962;
static struct nctempchar1 nctemp1963 = {{ 6}, (char*)"array\0"};
nctemp1962=&nctemp1963;
nctempchar1* nctemp1960= nctemp1962;
int nctemp1964=LibeStrcmp(nctemp1955,nctemp1960);
if(nctemp1964)
{
struct tree* nctemp1970= np;
nctempchar1* nctemp1972=PtreeGetref(nctemp1970);
nctempchar1* nctemp1968= nctemp1972;
struct nctempchar1 *nctemp1975;
static struct nctempchar1 nctemp1976 = {{ 5}, (char*)"aref\0"};
nctemp1975=&nctemp1976;
nctempchar1* nctemp1973= nctemp1975;
int nctemp1977=LibeStrcmp(nctemp1968,nctemp1973);
int nctemp1965 = (nctemp1977 ==0);
if(nctemp1965)
{
struct tree* nctemp1980= p;
struct nctempchar1 *nctemp1984;
static struct nctempchar1 nctemp1985 = {{ 41}, (char*)"Function call does not match declaration\0"};
nctemp1984=&nctemp1985;
nctempchar1* nctemp1982= nctemp1984;
struct tree* nctemp1988= p;
nctempchar1* nctemp1990=PtreeGetdef(nctemp1988);
nctempchar1* nctemp1986= nctemp1990;
int nctemp1991=SemSerror(nctemp1980,nctemp1982,nctemp1986);
}
struct tree* nctemp1995= np;
int nctemp1997=PtreeGetrank(nctemp1995);
struct symbol* nctemp1999= tp;
int nctemp2001=SymGetrank(nctemp1999);
int nctemp1992 = (nctemp1997 !=nctemp2001);
if(nctemp1992)
{
struct tree* nctemp2003= p;
struct nctempchar1 *nctemp2007;
static struct nctempchar1 nctemp2008 = {{ 36}, (char*)"Illegal array rank in function call\0"};
nctemp2007=&nctemp2008;
nctempchar1* nctemp2005= nctemp2007;
struct tree* nctemp2011= p;
nctempchar1* nctemp2013=PtreeGetdef(nctemp2011);
nctempchar1* nctemp2009= nctemp2013;
int nctemp2014=SemSerror(nctemp2003,nctemp2005,nctemp2009);
}
}
struct tree* nctemp2019= np;
struct tree* nctemp2021=PtreeMvsister(nctemp2019);
np =nctemp2021;
}
int nctemp2022 = (np !=0);
nctemp1889=nctemp2022;}struct symbol* nctemp2029= tp;
struct symbol* nctemp2031=SymMvnext(nctemp2029);
int nctemp2026 = (nctemp2031 !=0);
if(nctemp2026)
{
struct tree* nctemp2034= p;
struct nctempchar1 *nctemp2038;
static struct nctempchar1 nctemp2039 = {{ 41}, (char*)"Function call does not match declaration\0"};
nctemp2038=&nctemp2039;
nctempchar1* nctemp2036= nctemp2038;
struct tree* nctemp2042= p;
nctempchar1* nctemp2044=PtreeGetdef(nctemp2042);
nctempchar1* nctemp2040= nctemp2044;
int nctemp2045=SemSerror(nctemp2034,nctemp2036,nctemp2040);
return 0;
}
}
return 1;
}
struct tree* SemExprlist (struct tree* p)
{
struct tree* nctemp2051= p;
nctempchar1* nctemp2053=PtreeGetname(nctemp2051);
nctempchar1* nctemp2049= nctemp2053;
struct nctempchar1 *nctemp2056;
static struct nctempchar1 nctemp2057 = {{ 9}, (char*)"exprlist\0"};
nctemp2056=&nctemp2057;
nctempchar1* nctemp2054= nctemp2056;
int nctemp2058=LibeStrcmp(nctemp2049,nctemp2054);
if(nctemp2058)
{
struct tree* nctemp2063= p;
struct tree* nctemp2065=PtreeMvchild(nctemp2063);
p =nctemp2065;
int nctemp2066 = (p !=0);
int nctemp2070=nctemp2066;
while(nctemp2070)
{{
struct tree* nctemp2072= p;
struct tree* nctemp2074=SemExpr(nctemp2072);
struct tree* nctemp2079= p;
struct tree* nctemp2081=PtreeMvsister(nctemp2079);
p =nctemp2081;
}
int nctemp2082 = (p !=0);
nctemp2070=nctemp2082;}}
return p;
}
int SemCopytype (struct tree* p,struct tree* np)
{
struct tree* nctemp2088= np;
struct tree* nctemp2092= p;
nctempchar1* nctemp2094=PtreeGetype(nctemp2092);
nctempchar1* nctemp2090= nctemp2094;
int nctemp2095=PtreeSetype(nctemp2088,nctemp2090);
struct tree* nctemp2097= np;
struct tree* nctemp2101= p;
nctempchar1* nctemp2103=PtreeGetstruct(nctemp2101);
nctempchar1* nctemp2099= nctemp2103;
int nctemp2104=PtreeSetstruct(nctemp2097,nctemp2099);
struct tree* nctemp2106= np;
struct tree* nctemp2110= p;
nctempchar1* nctemp2112=PtreeGetarray(nctemp2110);
nctempchar1* nctemp2108= nctemp2112;
int nctemp2113=PtreeSetarray(nctemp2106,nctemp2108);
struct tree* nctemp2115= np;
struct tree* nctemp2119= p;
nctempchar1* nctemp2121=PtreeGetref(nctemp2119);
nctempchar1* nctemp2117= nctemp2121;
int nctemp2122=PtreeSetref(nctemp2115,nctemp2117);
struct tree* nctemp2124= np;
struct tree* nctemp2128= p;
nctempchar1* nctemp2130=PtreeGetlval(nctemp2128);
nctempchar1* nctemp2126= nctemp2130;
int nctemp2131=PtreeSetlval(nctemp2124,nctemp2126);
struct tree* nctemp2133= np;
struct tree* nctemp2137= p;
int nctemp2139=PtreeGetrank(nctemp2137);
int nctemp2135= nctemp2139;
int nctemp2140=PtreeSetrank(nctemp2133,nctemp2135);
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
struct nctempchar1 *nctemp2147;
static struct nctempchar1 nctemp2148 = {{ 5}, (char*)"void\0"};
nctemp2147=&nctemp2148;
resultref=nctemp2147;
struct nctempchar1 *nctemp2154;
static struct nctempchar1 nctemp2155 = {{ 5}, (char*)"void\0"};
nctemp2154=&nctemp2155;
expref=nctemp2154;
struct tree* nctemp2159= p;
nctempchar1* nctemp2161=PtreeGetname(nctemp2159);
nctempchar1* nctemp2157= nctemp2161;
struct nctempchar1 *nctemp2164;
static struct nctempchar1 nctemp2165 = {{ 5}, (char*)"cast\0"};
nctemp2164=&nctemp2165;
nctempchar1* nctemp2162= nctemp2164;
int nctemp2166=LibeStrcmp(nctemp2157,nctemp2162);
if(nctemp2166)
{
struct tree* nctemp2171= p;
struct tree* nctemp2173=PtreeMvchild(nctemp2171);
np =nctemp2173;
struct tree* nctemp2179= np;
nctempchar1* nctemp2181=PtreeGetdef(nctemp2179);
resultype=nctemp2181;
struct tree* nctemp2183= np;
nctempchar1* nctemp2185= resultype;
int nctemp2188=PtreeSetype(nctemp2183,nctemp2185);
resultrank =0;
struct tree* nctemp2196= np;
nctempchar1* nctemp2198=PtreeGetarray(nctemp2196);
nctempchar1* nctemp2194= nctemp2198;
struct nctempchar1 *nctemp2201;
static struct nctempchar1 nctemp2202 = {{ 6}, (char*)"array\0"};
nctemp2201=&nctemp2202;
nctempchar1* nctemp2199= nctemp2201;
int nctemp2203=LibeStrcmp(nctemp2194,nctemp2199);
if(nctemp2203)
{
struct tree* nctemp2208= np;
struct tree* nctemp2210=PtreeMvchild(nctemp2208);
sp =nctemp2210;
struct tree* nctemp2215= sp;
struct tree* nctemp2217=PtreeMvchild(nctemp2215);
sp =nctemp2217;
struct tree* nctemp2222= sp;
struct tree* nctemp2224=PtreeMvchild(nctemp2222);
sp =nctemp2224;
struct tree* nctemp2226= sp;
struct tree* nctemp2228=SemExprlist(nctemp2226);
struct tree* nctemp2233= sp;
struct tree* nctemp2235=PtreeMvchild(nctemp2233);
sp =nctemp2235;
resultrank =1;
struct tree* nctemp2247= sp;
struct tree* nctemp2249=PtreeMvsister(nctemp2247);
sp =nctemp2249;
int nctemp2240 = (sp !=0);
int nctemp2251=nctemp2240;
while(nctemp2251)
{{
int nctemp2260 = resultrank + 1;
resultrank =nctemp2260;
}
struct tree* nctemp2268= sp;
struct tree* nctemp2270=PtreeMvsister(nctemp2268);
sp =nctemp2270;
int nctemp2261 = (sp !=0);
nctemp2251=nctemp2261;}struct tree* nctemp2273= np;
int nctemp2275= resultrank;
int nctemp2277=PtreeSetrank(nctemp2273,nctemp2275);
struct tree* nctemp2279= p;
int nctemp2281= resultrank;
int nctemp2283=PtreeSetrank(nctemp2279,nctemp2281);
struct tree* nctemp2285= np;
struct nctempchar1 *nctemp2289;
static struct nctempchar1 nctemp2290 = {{ 5}, (char*)"aref\0"};
nctemp2289=&nctemp2290;
nctempchar1* nctemp2287= nctemp2289;
int nctemp2291=PtreeSetref(nctemp2285,nctemp2287);
struct nctempchar1 *nctemp2299;
static struct nctempchar1 nctemp2300 = {{ 5}, (char*)"aref\0"};
nctemp2299=&nctemp2300;
nctempchar1* nctemp2297= nctemp2299;
nctempchar1* nctemp2301=LibeStrsave(nctemp2297);
resultref=nctemp2301;
}
else{
struct tree* nctemp2305= np;
nctempchar1* nctemp2307=PtreeGetstruct(nctemp2305);
nctempchar1* nctemp2303= nctemp2307;
struct nctempchar1 *nctemp2310;
static struct nctempchar1 nctemp2311 = {{ 7}, (char*)"struct\0"};
nctemp2310=&nctemp2311;
nctempchar1* nctemp2308= nctemp2310;
int nctemp2312=LibeStrcmp(nctemp2303,nctemp2308);
if(nctemp2312)
{
struct tree* nctemp2314= np;
struct nctempchar1 *nctemp2318;
static struct nctempchar1 nctemp2319 = {{ 5}, (char*)"sref\0"};
nctemp2318=&nctemp2319;
nctempchar1* nctemp2316= nctemp2318;
int nctemp2320=PtreeSetref(nctemp2314,nctemp2316);
struct nctempchar1 *nctemp2328;
static struct nctempchar1 nctemp2329 = {{ 5}, (char*)"sref\0"};
nctemp2328=&nctemp2329;
nctempchar1* nctemp2326= nctemp2328;
nctempchar1* nctemp2330=LibeStrsave(nctemp2326);
resultref=nctemp2330;
}
else{
struct nctempchar1 *nctemp2338;
static struct nctempchar1 nctemp2339 = {{ 5}, (char*)"void\0"};
nctemp2338=&nctemp2339;
nctempchar1* nctemp2336= nctemp2338;
nctempchar1* nctemp2340=LibeStrsave(nctemp2336);
resultref=nctemp2340;
}
}
struct tree* nctemp2342= np;
struct tree* nctemp2344= p;
int nctemp2346=SemCopytype(nctemp2342,nctemp2344);
struct tree* nctemp2351= np;
struct tree* nctemp2353=PtreeMvsister(nctemp2351);
np =nctemp2353;
struct tree* nctemp2355= np;
struct tree* nctemp2357=SemExpr(nctemp2355);
struct tree* nctemp2363= np;
nctempchar1* nctemp2365=PtreeGetype(nctemp2363);
exptype=nctemp2365;
struct tree* nctemp2371= np;
nctempchar1* nctemp2373=PtreeGetref(nctemp2371);
expref=nctemp2373;
nctempchar1* nctemp2377= resultref;
nctempchar1* nctemp2380= expref;
int nctemp2383=LibeStrcmp(nctemp2377,nctemp2380);
int nctemp2374 = (nctemp2383 ==0);
if(nctemp2374)
{
struct tree* nctemp2386= p;
struct nctempchar1 *nctemp2390;
static struct nctempchar1 nctemp2391 = {{ 19}, (char*)"Illegal conversion\0"};
nctemp2390=&nctemp2391;
nctempchar1* nctemp2388= nctemp2390;
struct nctempchar1 *nctemp2394;
static struct nctempchar1 nctemp2395 = {{ 2}, (char*)" \0"};
nctemp2394=&nctemp2395;
nctempchar1* nctemp2392= nctemp2394;
int nctemp2396=SemSerror(nctemp2386,nctemp2388,nctemp2392);
return 0;
}
nctempchar1* nctemp2404= resultref;
struct nctempchar1 *nctemp2409;
static struct nctempchar1 nctemp2410 = {{ 5}, (char*)"aref\0"};
nctemp2409=&nctemp2410;
nctempchar1* nctemp2407= nctemp2409;
int nctemp2411=LibeStrcmp(nctemp2404,nctemp2407);
int nctemp2401 = (nctemp2411 ==0);
nctempchar1* nctemp2417= resultref;
struct nctempchar1 *nctemp2422;
static struct nctempchar1 nctemp2423 = {{ 5}, (char*)"sref\0"};
nctemp2422=&nctemp2423;
nctempchar1* nctemp2420= nctemp2422;
int nctemp2424=LibeStrcmp(nctemp2417,nctemp2420);
int nctemp2414 = (nctemp2424 ==0);
int nctemp2398 = (nctemp2401 || nctemp2414);
if(nctemp2398)
{
nctempchar1* nctemp2427= resultype;
struct nctempchar1 *nctemp2432;
static struct nctempchar1 nctemp2433 = {{ 8}, (char*)"complex\0"};
nctemp2432=&nctemp2433;
nctempchar1* nctemp2430= nctemp2432;
int nctemp2434=LibeStrcmp(nctemp2427,nctemp2430);
if(nctemp2434)
{
struct tree* nctemp2436= p;
struct nctempchar1 *nctemp2440;
static struct nctempchar1 nctemp2441 = {{ 19}, (char*)"Illegal conversion\0"};
nctemp2440=&nctemp2441;
nctempchar1* nctemp2438= nctemp2440;
struct nctempchar1 *nctemp2444;
static struct nctempchar1 nctemp2445 = {{ 2}, (char*)" \0"};
nctemp2444=&nctemp2445;
nctempchar1* nctemp2442= nctemp2444;
int nctemp2446=SemSerror(nctemp2436,nctemp2438,nctemp2442);
}
return 0;
nctempchar1* nctemp2449= resultype;
struct nctempchar1 *nctemp2454;
static struct nctempchar1 nctemp2455 = {{ 4}, (char*)"int\0"};
nctemp2454=&nctemp2455;
nctempchar1* nctemp2452= nctemp2454;
int nctemp2456=LibeStrcmp(nctemp2449,nctemp2452);
if(nctemp2456)
{
nctempchar1* nctemp2460= exptype;
struct nctempchar1 *nctemp2465;
static struct nctempchar1 nctemp2466 = {{ 5}, (char*)"char\0"};
nctemp2465=&nctemp2466;
nctempchar1* nctemp2463= nctemp2465;
int nctemp2467=LibeStrcmp(nctemp2460,nctemp2463);
int nctemp2457 = (nctemp2467 ==0);
if(nctemp2457)
{
nctempchar1* nctemp2472= exptype;
struct nctempchar1 *nctemp2477;
static struct nctempchar1 nctemp2478 = {{ 6}, (char*)"float\0"};
nctemp2477=&nctemp2478;
nctempchar1* nctemp2475= nctemp2477;
int nctemp2479=LibeStrcmp(nctemp2472,nctemp2475);
int nctemp2469 = (nctemp2479 ==0);
if(nctemp2469)
{
struct tree* nctemp2482= p;
struct nctempchar1 *nctemp2486;
static struct nctempchar1 nctemp2487 = {{ 19}, (char*)"Illegal conversion\0"};
nctemp2486=&nctemp2487;
nctempchar1* nctemp2484= nctemp2486;
struct nctempchar1 *nctemp2490;
static struct nctempchar1 nctemp2491 = {{ 2}, (char*)" \0"};
nctemp2490=&nctemp2491;
nctempchar1* nctemp2488= nctemp2490;
int nctemp2492=SemSerror(nctemp2482,nctemp2484,nctemp2488);
}
}
return 0;
}
else{
nctempchar1* nctemp2495= resultype;
struct nctempchar1 *nctemp2500;
static struct nctempchar1 nctemp2501 = {{ 5}, (char*)"char\0"};
nctemp2500=&nctemp2501;
nctempchar1* nctemp2498= nctemp2500;
int nctemp2502=LibeStrcmp(nctemp2495,nctemp2498);
if(nctemp2502)
{
nctempchar1* nctemp2506= exptype;
struct nctempchar1 *nctemp2511;
static struct nctempchar1 nctemp2512 = {{ 4}, (char*)"int\0"};
nctemp2511=&nctemp2512;
nctempchar1* nctemp2509= nctemp2511;
int nctemp2513=LibeStrcmp(nctemp2506,nctemp2509);
int nctemp2503 = (nctemp2513 ==0);
if(nctemp2503)
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
}
else{
nctempchar1* nctemp2529= resultype;
struct nctempchar1 *nctemp2534;
static struct nctempchar1 nctemp2535 = {{ 6}, (char*)"float\0"};
nctemp2534=&nctemp2535;
nctempchar1* nctemp2532= nctemp2534;
int nctemp2536=LibeStrcmp(nctemp2529,nctemp2532);
if(nctemp2536)
{
nctempchar1* nctemp2540= exptype;
struct nctempchar1 *nctemp2545;
static struct nctempchar1 nctemp2546 = {{ 4}, (char*)"int\0"};
nctemp2545=&nctemp2546;
nctempchar1* nctemp2543= nctemp2545;
int nctemp2547=LibeStrcmp(nctemp2540,nctemp2543);
int nctemp2537 = (nctemp2547 ==0);
if(nctemp2537)
{
struct tree* nctemp2550= np;
struct nctempchar1 *nctemp2554;
static struct nctempchar1 nctemp2555 = {{ 19}, (char*)"Illegal conversion\0"};
nctemp2554=&nctemp2555;
nctempchar1* nctemp2552= nctemp2554;
struct nctempchar1 *nctemp2558;
static struct nctempchar1 nctemp2559 = {{ 2}, (char*)" \0"};
nctemp2558=&nctemp2559;
nctempchar1* nctemp2556= nctemp2558;
int nctemp2560=SemSerror(nctemp2550,nctemp2552,nctemp2556);
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
struct tree* nctemp2566= p;
nctempchar1* nctemp2568=PtreeGetname(nctemp2566);
nctempchar1* nctemp2564= nctemp2568;
struct nctempchar1 *nctemp2571;
static struct nctempchar1 nctemp2572 = {{ 4}, (char*)"new\0"};
nctemp2571=&nctemp2572;
nctempchar1* nctemp2569= nctemp2571;
int nctemp2573=LibeStrcmp(nctemp2564,nctemp2569);
if(nctemp2573)
{
struct tree* nctemp2578= p;
struct tree* nctemp2580=PtreeMvchild(nctemp2578);
np =nctemp2580;
struct tree* nctemp2582= np;
nctempchar1* nctemp2584=PtreeGetdef(nctemp2582);
struct tree* nctemp2586= np;
struct tree* nctemp2590= np;
nctempchar1* nctemp2592=PtreeGetdef(nctemp2590);
nctempchar1* nctemp2588= nctemp2592;
int nctemp2593=PtreeSetype(nctemp2586,nctemp2588);
struct tree* nctemp2595= np;
struct tree* nctemp2597= p;
int nctemp2599=SemCopytype(nctemp2595,nctemp2597);
struct tree* nctemp2605= np;
nctempchar1* nctemp2607=PtreeGetarray(nctemp2605);
nctempchar1* nctemp2603= nctemp2607;
struct nctempchar1 *nctemp2610;
static struct nctempchar1 nctemp2611 = {{ 6}, (char*)"array\0"};
nctemp2610=&nctemp2611;
nctempchar1* nctemp2608= nctemp2610;
int nctemp2612=LibeStrcmp(nctemp2603,nctemp2608);
int nctemp2600 = (nctemp2612 ==0);
if(nctemp2600)
{
struct tree* nctemp2619= np;
nctempchar1* nctemp2621=PtreeGetstruct(nctemp2619);
nctempchar1* nctemp2617= nctemp2621;
struct nctempchar1 *nctemp2624;
static struct nctempchar1 nctemp2625 = {{ 7}, (char*)"struct\0"};
nctemp2624=&nctemp2625;
nctempchar1* nctemp2622= nctemp2624;
int nctemp2626=LibeStrcmp(nctemp2617,nctemp2622);
int nctemp2614 = (nctemp2626 ==0);
if(nctemp2614)
{
struct tree* nctemp2629= np;
struct nctempchar1 *nctemp2633;
static struct nctempchar1 nctemp2634 = {{ 44}, (char*)"Argument limited to array or structure type\0"};
nctemp2633=&nctemp2634;
nctempchar1* nctemp2631= nctemp2633;
struct nctempchar1 *nctemp2637;
static struct nctempchar1 nctemp2638 = {{ 3}, (char*)"  \0"};
nctemp2637=&nctemp2638;
nctempchar1* nctemp2635= nctemp2637;
int nctemp2639=SemSerror(nctemp2629,nctemp2631,nctemp2635);
}
}
struct tree* nctemp2643= np;
nctempchar1* nctemp2645=PtreeGetarray(nctemp2643);
nctempchar1* nctemp2641= nctemp2645;
struct nctempchar1 *nctemp2648;
static struct nctempchar1 nctemp2649 = {{ 6}, (char*)"array\0"};
nctemp2648=&nctemp2649;
nctempchar1* nctemp2646= nctemp2648;
int nctemp2650=LibeStrcmp(nctemp2641,nctemp2646);
if(nctemp2650)
{
struct tree* nctemp2655= np;
struct tree* nctemp2657=PtreeMvchild(nctemp2655);
sp =nctemp2657;
struct tree* nctemp2662= sp;
struct tree* nctemp2664=PtreeMvchild(nctemp2662);
sp =nctemp2664;
struct tree* nctemp2669= sp;
struct tree* nctemp2671=PtreeMvchild(nctemp2669);
sp =nctemp2671;
struct tree* nctemp2676= sp;
struct tree* nctemp2678=PtreeMvchild(nctemp2676);
sp =nctemp2678;
rank =1;
int nctemp2683 = (sp ==0);
if(nctemp2683)
{
struct tree* nctemp2688= np;
struct nctempchar1 *nctemp2692;
static struct nctempchar1 nctemp2693 = {{ 35}, (char*)"Missing array size in new operator\0"};
nctemp2692=&nctemp2693;
nctempchar1* nctemp2690= nctemp2692;
struct nctempchar1 *nctemp2696;
static struct nctempchar1 nctemp2697 = {{ 2}, (char*)" \0"};
nctemp2696=&nctemp2697;
nctempchar1* nctemp2694= nctemp2696;
int nctemp2698=SemSerror(nctemp2688,nctemp2690,nctemp2694);
}
struct tree* nctemp2700= sp;
struct tree* nctemp2702=SemExpr(nctemp2700);
struct tree* nctemp2710= sp;
struct tree* nctemp2712=PtreeMvsister(nctemp2710);
sp =nctemp2712;
int nctemp2703 = (sp !=0);
int nctemp2714=nctemp2703;
while(nctemp2714)
{{
struct tree* nctemp2716= sp;
struct tree* nctemp2718=SemExpr(nctemp2716);
int nctemp2727 = rank + 1;
rank =nctemp2727;
}
struct tree* nctemp2735= sp;
struct tree* nctemp2737=PtreeMvsister(nctemp2735);
sp =nctemp2737;
int nctemp2728 = (sp !=0);
nctemp2714=nctemp2728;}struct tree* nctemp2740= np;
int nctemp2742= rank;
int nctemp2744=PtreeSetrank(nctemp2740,nctemp2742);
struct tree* nctemp2746= p;
int nctemp2748= rank;
int nctemp2750=PtreeSetrank(nctemp2746,nctemp2748);
struct tree* nctemp2752= p;
struct nctempchar1 *nctemp2756;
static struct nctempchar1 nctemp2757 = {{ 5}, (char*)"aref\0"};
nctemp2756=&nctemp2757;
nctempchar1* nctemp2754= nctemp2756;
int nctemp2758=PtreeSetref(nctemp2752,nctemp2754);
}
else{
struct tree* nctemp2760= p;
struct nctempchar1 *nctemp2764;
static struct nctempchar1 nctemp2765 = {{ 5}, (char*)"sref\0"};
nctemp2764=&nctemp2765;
nctempchar1* nctemp2762= nctemp2764;
int nctemp2766=PtreeSetref(nctemp2760,nctemp2762);
}
}
return 1;
}
int SemDelete (struct tree* p)
{
struct tree* np;
struct tree* nctemp2771= p;
nctempchar1* nctemp2773=PtreeGetname(nctemp2771);
nctempchar1* nctemp2769= nctemp2773;
struct nctempchar1 *nctemp2776;
static struct nctempchar1 nctemp2777 = {{ 7}, (char*)"delete\0"};
nctemp2776=&nctemp2777;
nctempchar1* nctemp2774= nctemp2776;
int nctemp2778=LibeStrcmp(nctemp2769,nctemp2774);
if(nctemp2778)
{
struct tree* nctemp2783= p;
struct tree* nctemp2785=PtreeMvchild(nctemp2783);
np =nctemp2785;
struct tree* nctemp2787= np;
struct tree* nctemp2789=SemExpr(nctemp2787);
struct tree* nctemp2795= np;
nctempchar1* nctemp2797=PtreeGetref(nctemp2795);
nctempchar1* nctemp2793= nctemp2797;
struct nctempchar1 *nctemp2800;
static struct nctempchar1 nctemp2801 = {{ 5}, (char*)"aref\0"};
nctemp2800=&nctemp2801;
nctempchar1* nctemp2798= nctemp2800;
int nctemp2802=LibeStrcmp(nctemp2793,nctemp2798);
int nctemp2790 = (nctemp2802 ==0);
if(nctemp2790)
{
struct tree* nctemp2809= np;
nctempchar1* nctemp2811=PtreeGetref(nctemp2809);
nctempchar1* nctemp2807= nctemp2811;
struct nctempchar1 *nctemp2814;
static struct nctempchar1 nctemp2815 = {{ 5}, (char*)"sref\0"};
nctemp2814=&nctemp2815;
nctempchar1* nctemp2812= nctemp2814;
int nctemp2816=LibeStrcmp(nctemp2807,nctemp2812);
int nctemp2804 = (nctemp2816 ==0);
if(nctemp2804)
{
struct tree* nctemp2819= p;
struct nctempchar1 *nctemp2823;
static struct nctempchar1 nctemp2824 = {{ 25}, (char*)"not a array or structure\0"};
nctemp2823=&nctemp2824;
nctempchar1* nctemp2821= nctemp2823;
struct tree* nctemp2827= p;
nctempchar1* nctemp2829=PtreeGetdef(nctemp2827);
nctempchar1* nctemp2825= nctemp2829;
int nctemp2830=SemSerror(nctemp2819,nctemp2821,nctemp2825);
}
}
else{
struct tree* nctemp2832= p;
struct tree* nctemp2836= np;
nctempchar1* nctemp2838=PtreeGetype(nctemp2836);
nctempchar1* nctemp2834= nctemp2838;
int nctemp2839=PtreeSetype(nctemp2832,nctemp2834);
struct tree* nctemp2841= p;
struct tree* nctemp2845= np;
nctempchar1* nctemp2847=PtreeGetref(nctemp2845);
nctempchar1* nctemp2843= nctemp2847;
int nctemp2848=PtreeSetref(nctemp2841,nctemp2843);
}
}
return 1;
}
int SemCmplx (struct tree* p)
{
struct tree* np;
struct tree* nctemp2853= p;
nctempchar1* nctemp2855=PtreeGetname(nctemp2853);
nctempchar1* nctemp2851= nctemp2855;
struct nctempchar1 *nctemp2858;
static struct nctempchar1 nctemp2859 = {{ 6}, (char*)"cmplx\0"};
nctemp2858=&nctemp2859;
nctempchar1* nctemp2856= nctemp2858;
int nctemp2860=LibeStrcmp(nctemp2851,nctemp2856);
if(nctemp2860)
{
struct tree* nctemp2865= p;
struct tree* nctemp2867=PtreeMvchild(nctemp2865);
np =nctemp2867;
struct tree* nctemp2872= np;
struct tree* nctemp2874=PtreeMvchild(nctemp2872);
np =nctemp2874;
struct tree* nctemp2876= np;
struct tree* nctemp2878=SemExpr(nctemp2876);
struct tree* nctemp2884= np;
nctempchar1* nctemp2886=PtreeGetype(nctemp2884);
nctempchar1* nctemp2882= nctemp2886;
struct nctempchar1 *nctemp2889;
static struct nctempchar1 nctemp2890 = {{ 6}, (char*)"float\0"};
nctemp2889=&nctemp2890;
nctempchar1* nctemp2887= nctemp2889;
int nctemp2891=LibeStrcmp(nctemp2882,nctemp2887);
int nctemp2879 = (nctemp2891 ==0);
if(nctemp2879)
{
struct tree* nctemp2894= p;
struct nctempchar1 *nctemp2898;
static struct nctempchar1 nctemp2899 = {{ 33}, (char*)"Argument to cmplx is not a float\0"};
nctemp2898=&nctemp2899;
nctempchar1* nctemp2896= nctemp2898;
struct tree* nctemp2902= p;
nctempchar1* nctemp2904=PtreeGetdef(nctemp2902);
nctempchar1* nctemp2900= nctemp2904;
int nctemp2905=SemSerror(nctemp2894,nctemp2896,nctemp2900);
return 0;
}
struct tree* nctemp2912= np;
nctempchar1* nctemp2914=PtreeGetref(nctemp2912);
nctempchar1* nctemp2910= nctemp2914;
struct nctempchar1 *nctemp2917;
static struct nctempchar1 nctemp2918 = {{ 5}, (char*)"aref\0"};
nctemp2917=&nctemp2918;
nctempchar1* nctemp2915= nctemp2917;
int nctemp2919=LibeStrcmp(nctemp2910,nctemp2915);
struct tree* nctemp2923= np;
nctempchar1* nctemp2925=PtreeGetref(nctemp2923);
nctempchar1* nctemp2921= nctemp2925;
struct nctempchar1 *nctemp2928;
static struct nctempchar1 nctemp2929 = {{ 5}, (char*)"sref\0"};
nctemp2928=&nctemp2929;
nctempchar1* nctemp2926= nctemp2928;
int nctemp2930=LibeStrcmp(nctemp2921,nctemp2926);
int nctemp2907 = (nctemp2919 || nctemp2930);
if(nctemp2907)
{
struct tree* nctemp2932= p;
struct nctempchar1 *nctemp2936;
static struct nctempchar1 nctemp2937 = {{ 34}, (char*)"Argument to cmplx is not a scalar\0"};
nctemp2936=&nctemp2937;
nctempchar1* nctemp2934= nctemp2936;
struct tree* nctemp2940= p;
nctempchar1* nctemp2942=PtreeGetdef(nctemp2940);
nctempchar1* nctemp2938= nctemp2942;
int nctemp2943=SemSerror(nctemp2932,nctemp2934,nctemp2938);
return 0;
}
struct tree* nctemp2949= np;
struct tree* nctemp2951=PtreeMvsister(nctemp2949);
np =nctemp2951;
struct tree* nctemp2953= np;
struct tree* nctemp2955=SemExpr(nctemp2953);
struct tree* nctemp2961= np;
nctempchar1* nctemp2963=PtreeGetype(nctemp2961);
nctempchar1* nctemp2959= nctemp2963;
struct nctempchar1 *nctemp2966;
static struct nctempchar1 nctemp2967 = {{ 6}, (char*)"float\0"};
nctemp2966=&nctemp2967;
nctempchar1* nctemp2964= nctemp2966;
int nctemp2968=LibeStrcmp(nctemp2959,nctemp2964);
int nctemp2956 = (nctemp2968 ==0);
if(nctemp2956)
{
struct tree* nctemp2971= p;
struct nctempchar1 *nctemp2975;
static struct nctempchar1 nctemp2976 = {{ 33}, (char*)"Argument to cmplx is not a float\0"};
nctemp2975=&nctemp2976;
nctempchar1* nctemp2973= nctemp2975;
struct tree* nctemp2979= p;
nctempchar1* nctemp2981=PtreeGetdef(nctemp2979);
nctempchar1* nctemp2977= nctemp2981;
int nctemp2982=SemSerror(nctemp2971,nctemp2973,nctemp2977);
}
struct tree* nctemp2988= np;
nctempchar1* nctemp2990=PtreeGetref(nctemp2988);
nctempchar1* nctemp2986= nctemp2990;
struct nctempchar1 *nctemp2993;
static struct nctempchar1 nctemp2994 = {{ 5}, (char*)"aref\0"};
nctemp2993=&nctemp2994;
nctempchar1* nctemp2991= nctemp2993;
int nctemp2995=LibeStrcmp(nctemp2986,nctemp2991);
struct tree* nctemp2999= np;
nctempchar1* nctemp3001=PtreeGetref(nctemp2999);
nctempchar1* nctemp2997= nctemp3001;
struct nctempchar1 *nctemp3004;
static struct nctempchar1 nctemp3005 = {{ 5}, (char*)"sref\0"};
nctemp3004=&nctemp3005;
nctempchar1* nctemp3002= nctemp3004;
int nctemp3006=LibeStrcmp(nctemp2997,nctemp3002);
int nctemp2983 = (nctemp2995 || nctemp3006);
if(nctemp2983)
{
struct tree* nctemp3008= p;
struct nctempchar1 *nctemp3012;
static struct nctempchar1 nctemp3013 = {{ 34}, (char*)"Argument to cmplx is not a scalar\0"};
nctemp3012=&nctemp3013;
nctempchar1* nctemp3010= nctemp3012;
struct tree* nctemp3016= p;
nctempchar1* nctemp3018=PtreeGetdef(nctemp3016);
nctempchar1* nctemp3014= nctemp3018;
int nctemp3019=SemSerror(nctemp3008,nctemp3010,nctemp3014);
return 0;
}
struct tree* nctemp3022= p;
struct nctempchar1 *nctemp3026;
static struct nctempchar1 nctemp3027 = {{ 8}, (char*)"complex\0"};
nctemp3026=&nctemp3027;
nctempchar1* nctemp3024= nctemp3026;
int nctemp3028=PtreeSetype(nctemp3022,nctemp3024);
}
return 1;
}
int SemRe (struct tree* p)
{
struct tree* np;
struct tree* nctemp3033= p;
nctempchar1* nctemp3035=PtreeGetname(nctemp3033);
nctempchar1* nctemp3031= nctemp3035;
struct nctempchar1 *nctemp3038;
static struct nctempchar1 nctemp3039 = {{ 3}, (char*)"re\0"};
nctemp3038=&nctemp3039;
nctempchar1* nctemp3036= nctemp3038;
int nctemp3040=LibeStrcmp(nctemp3031,nctemp3036);
if(nctemp3040)
{
struct tree* nctemp3045= p;
struct tree* nctemp3047=PtreeMvchild(nctemp3045);
np =nctemp3047;
struct tree* nctemp3049= np;
struct tree* nctemp3051=SemExpr(nctemp3049);
struct tree* nctemp3057= np;
nctempchar1* nctemp3059=PtreeGetype(nctemp3057);
nctempchar1* nctemp3055= nctemp3059;
struct nctempchar1 *nctemp3062;
static struct nctempchar1 nctemp3063 = {{ 8}, (char*)"complex\0"};
nctemp3062=&nctemp3063;
nctempchar1* nctemp3060= nctemp3062;
int nctemp3064=LibeStrcmp(nctemp3055,nctemp3060);
int nctemp3052 = (nctemp3064 ==0);
if(nctemp3052)
{
struct tree* nctemp3067= p;
struct nctempchar1 *nctemp3071;
static struct nctempchar1 nctemp3072 = {{ 40}, (char*)"Argument to re is not a of type complex\0"};
nctemp3071=&nctemp3072;
nctempchar1* nctemp3069= nctemp3071;
struct tree* nctemp3075= p;
nctempchar1* nctemp3077=PtreeGetdef(nctemp3075);
nctempchar1* nctemp3073= nctemp3077;
int nctemp3078=SemSerror(nctemp3067,nctemp3069,nctemp3073);
return 0;
}
struct tree* nctemp3085= np;
nctempchar1* nctemp3087=PtreeGetref(nctemp3085);
nctempchar1* nctemp3083= nctemp3087;
struct nctempchar1 *nctemp3090;
static struct nctempchar1 nctemp3091 = {{ 5}, (char*)"aref\0"};
nctemp3090=&nctemp3091;
nctempchar1* nctemp3088= nctemp3090;
int nctemp3092=LibeStrcmp(nctemp3083,nctemp3088);
struct tree* nctemp3096= np;
nctempchar1* nctemp3098=PtreeGetref(nctemp3096);
nctempchar1* nctemp3094= nctemp3098;
struct nctempchar1 *nctemp3101;
static struct nctempchar1 nctemp3102 = {{ 5}, (char*)"sref\0"};
nctemp3101=&nctemp3102;
nctempchar1* nctemp3099= nctemp3101;
int nctemp3103=LibeStrcmp(nctemp3094,nctemp3099);
int nctemp3080 = (nctemp3092 || nctemp3103);
if(nctemp3080)
{
struct tree* nctemp3105= p;
struct nctempchar1 *nctemp3109;
static struct nctempchar1 nctemp3110 = {{ 31}, (char*)"Argument to re is not a scalar\0"};
nctemp3109=&nctemp3110;
nctempchar1* nctemp3107= nctemp3109;
struct tree* nctemp3113= p;
nctempchar1* nctemp3115=PtreeGetdef(nctemp3113);
nctempchar1* nctemp3111= nctemp3115;
int nctemp3116=SemSerror(nctemp3105,nctemp3107,nctemp3111);
return 0;
}
struct tree* nctemp3119= p;
struct nctempchar1 *nctemp3123;
static struct nctempchar1 nctemp3124 = {{ 6}, (char*)"float\0"};
nctemp3123=&nctemp3124;
nctempchar1* nctemp3121= nctemp3123;
int nctemp3125=PtreeSetype(nctemp3119,nctemp3121);
}
return 1;
}
int SemLen (struct tree* p)
{
struct tree* np;
struct tree* nctemp3132= p;
nctempchar1* nctemp3134=PtreeGetname(nctemp3132);
nctempchar1* nctemp3130= nctemp3134;
struct nctempchar1 *nctemp3137;
static struct nctempchar1 nctemp3138 = {{ 4}, (char*)"len\0"};
nctemp3137=&nctemp3138;
nctempchar1* nctemp3135= nctemp3137;
int nctemp3139=LibeStrcmp(nctemp3130,nctemp3135);
int nctemp3127 = (nctemp3139 ==1);
if(nctemp3127)
{
struct tree* nctemp3142= p;
struct nctempchar1 *nctemp3146;
static struct nctempchar1 nctemp3147 = {{ 4}, (char*)"int\0"};
nctemp3146=&nctemp3147;
nctempchar1* nctemp3144= nctemp3146;
int nctemp3148=PtreeSetype(nctemp3142,nctemp3144);
struct tree* nctemp3153= p;
struct tree* nctemp3155=PtreeMvchild(nctemp3153);
np =nctemp3155;
struct tree* nctemp3157= np;
struct tree* nctemp3159=SemExpr(nctemp3157);
struct tree* nctemp3165= np;
nctempchar1* nctemp3167=PtreeGetref(nctemp3165);
nctempchar1* nctemp3163= nctemp3167;
struct nctempchar1 *nctemp3170;
static struct nctempchar1 nctemp3171 = {{ 5}, (char*)"aref\0"};
nctemp3170=&nctemp3171;
nctempchar1* nctemp3168= nctemp3170;
int nctemp3172=LibeStrcmp(nctemp3163,nctemp3168);
int nctemp3160 = (nctemp3172 ==0);
if(nctemp3160)
{
struct tree* nctemp3175= p;
struct nctempchar1 *nctemp3179;
static struct nctempchar1 nctemp3180 = {{ 13}, (char*)"not an array\0"};
nctemp3179=&nctemp3180;
nctempchar1* nctemp3177= nctemp3179;
struct tree* nctemp3183= p;
nctempchar1* nctemp3185=PtreeGetdef(nctemp3183);
nctempchar1* nctemp3181= nctemp3185;
int nctemp3186=SemSerror(nctemp3175,nctemp3177,nctemp3181);
}
struct tree* nctemp3191= np;
struct tree* nctemp3193=PtreeMvsister(nctemp3191);
np =nctemp3193;
struct tree* nctemp3195= np;
struct tree* nctemp3197=SemExpr(nctemp3195);
struct tree* nctemp3201= np;
nctempchar1* nctemp3203=PtreeGetref(nctemp3201);
nctempchar1* nctemp3199= nctemp3203;
struct nctempchar1 *nctemp3206;
static struct nctempchar1 nctemp3207 = {{ 5}, (char*)"aref\0"};
nctemp3206=&nctemp3207;
nctempchar1* nctemp3204= nctemp3206;
int nctemp3208=LibeStrcmp(nctemp3199,nctemp3204);
if(nctemp3208)
{
struct tree* nctemp3210= p;
struct nctempchar1 *nctemp3214;
static struct nctempchar1 nctemp3215 = {{ 13}, (char*)"not a scalar\0"};
nctemp3214=&nctemp3215;
nctempchar1* nctemp3212= nctemp3214;
struct tree* nctemp3218= p;
nctempchar1* nctemp3220=PtreeGetdef(nctemp3218);
nctempchar1* nctemp3216= nctemp3220;
int nctemp3221=SemSerror(nctemp3210,nctemp3212,nctemp3216);
}
struct tree* nctemp3227= np;
nctempchar1* nctemp3229=PtreeGetype(nctemp3227);
nctempchar1* nctemp3225= nctemp3229;
struct nctempchar1 *nctemp3232;
static struct nctempchar1 nctemp3233 = {{ 4}, (char*)"int\0"};
nctemp3232=&nctemp3233;
nctempchar1* nctemp3230= nctemp3232;
int nctemp3234=LibeStrcmp(nctemp3225,nctemp3230);
int nctemp3222 = (nctemp3234 ==0);
if(nctemp3222)
{
struct tree* nctemp3237= p;
struct nctempchar1 *nctemp3241;
static struct nctempchar1 nctemp3242 = {{ 26}, (char*)"not an integer expression\0"};
nctemp3241=&nctemp3242;
nctempchar1* nctemp3239= nctemp3241;
struct tree* nctemp3245= p;
nctempchar1* nctemp3247=PtreeGetdef(nctemp3245);
nctempchar1* nctemp3243= nctemp3247;
int nctemp3248=SemSerror(nctemp3237,nctemp3239,nctemp3243);
}
struct tree* nctemp3256= np;
struct tree* nctemp3258=PtreeMvsister(nctemp3256);
np =nctemp3258;
int nctemp3249 = (np !=0);
if(nctemp3249)
{
struct tree* nctemp3261= p;
struct nctempchar1 *nctemp3265;
static struct nctempchar1 nctemp3266 = {{ 19}, (char*)"too many arguments\0"};
nctemp3265=&nctemp3266;
nctempchar1* nctemp3263= nctemp3265;
struct tree* nctemp3269= p;
nctempchar1* nctemp3271=PtreeGetdef(nctemp3269);
nctempchar1* nctemp3267= nctemp3271;
int nctemp3272=SemSerror(nctemp3261,nctemp3263,nctemp3267);
}
}
return 1;
}
int SemIm (struct tree* p)
{
struct tree* np;
struct tree* nctemp3277= p;
nctempchar1* nctemp3279=PtreeGetname(nctemp3277);
nctempchar1* nctemp3275= nctemp3279;
struct nctempchar1 *nctemp3282;
static struct nctempchar1 nctemp3283 = {{ 3}, (char*)"im\0"};
nctemp3282=&nctemp3283;
nctempchar1* nctemp3280= nctemp3282;
int nctemp3284=LibeStrcmp(nctemp3275,nctemp3280);
if(nctemp3284)
{
struct tree* nctemp3289= p;
struct tree* nctemp3291=PtreeMvchild(nctemp3289);
np =nctemp3291;
struct tree* nctemp3293= np;
struct tree* nctemp3295=SemExpr(nctemp3293);
struct tree* nctemp3301= np;
nctempchar1* nctemp3303=PtreeGetype(nctemp3301);
nctempchar1* nctemp3299= nctemp3303;
struct nctempchar1 *nctemp3306;
static struct nctempchar1 nctemp3307 = {{ 8}, (char*)"complex\0"};
nctemp3306=&nctemp3307;
nctempchar1* nctemp3304= nctemp3306;
int nctemp3308=LibeStrcmp(nctemp3299,nctemp3304);
int nctemp3296 = (nctemp3308 ==0);
if(nctemp3296)
{
struct tree* nctemp3311= p;
struct nctempchar1 *nctemp3315;
static struct nctempchar1 nctemp3316 = {{ 38}, (char*)"Argument to re is not of type complex\0"};
nctemp3315=&nctemp3316;
nctempchar1* nctemp3313= nctemp3315;
struct tree* nctemp3319= p;
nctempchar1* nctemp3321=PtreeGetdef(nctemp3319);
nctempchar1* nctemp3317= nctemp3321;
int nctemp3322=SemSerror(nctemp3311,nctemp3313,nctemp3317);
return 0;
}
struct tree* nctemp3329= np;
nctempchar1* nctemp3331=PtreeGetref(nctemp3329);
nctempchar1* nctemp3327= nctemp3331;
struct nctempchar1 *nctemp3334;
static struct nctempchar1 nctemp3335 = {{ 5}, (char*)"aref\0"};
nctemp3334=&nctemp3335;
nctempchar1* nctemp3332= nctemp3334;
int nctemp3336=LibeStrcmp(nctemp3327,nctemp3332);
struct tree* nctemp3340= np;
nctempchar1* nctemp3342=PtreeGetref(nctemp3340);
nctempchar1* nctemp3338= nctemp3342;
struct nctempchar1 *nctemp3345;
static struct nctempchar1 nctemp3346 = {{ 5}, (char*)"sref\0"};
nctemp3345=&nctemp3346;
nctempchar1* nctemp3343= nctemp3345;
int nctemp3347=LibeStrcmp(nctemp3338,nctemp3343);
int nctemp3324 = (nctemp3336 || nctemp3347);
if(nctemp3324)
{
struct tree* nctemp3349= p;
struct nctempchar1 *nctemp3353;
static struct nctempchar1 nctemp3354 = {{ 31}, (char*)"Argument to re is not a scalar\0"};
nctemp3353=&nctemp3354;
nctempchar1* nctemp3351= nctemp3353;
struct tree* nctemp3357= p;
nctempchar1* nctemp3359=PtreeGetdef(nctemp3357);
nctempchar1* nctemp3355= nctemp3359;
int nctemp3360=SemSerror(nctemp3349,nctemp3351,nctemp3355);
return 0;
}
struct tree* nctemp3363= p;
struct nctempchar1 *nctemp3367;
static struct nctempchar1 nctemp3368 = {{ 6}, (char*)"float\0"};
nctemp3367=&nctemp3368;
nctempchar1* nctemp3365= nctemp3367;
int nctemp3369=PtreeSetype(nctemp3363,nctemp3365);
}
return 1;
}
int SemSizeof (struct tree* p)
{
struct tree* nctemp3374= p;
nctempchar1* nctemp3376=PtreeGetname(nctemp3374);
nctempchar1* nctemp3372= nctemp3376;
struct nctempchar1 *nctemp3379;
static struct nctempchar1 nctemp3380 = {{ 7}, (char*)"sizeof\0"};
nctemp3379=&nctemp3380;
nctempchar1* nctemp3377= nctemp3379;
int nctemp3381=LibeStrcmp(nctemp3372,nctemp3377);
if(nctemp3381)
{
struct tree* nctemp3383= p;
struct nctempchar1 *nctemp3387;
static struct nctempchar1 nctemp3388 = {{ 4}, (char*)"int\0"};
nctemp3387=&nctemp3388;
nctempchar1* nctemp3385= nctemp3387;
int nctemp3389=PtreeSetype(nctemp3383,nctemp3385);
}
return 1;
}
int SemComparetype (struct tree* p,struct tree* np)
{
int rval;
rval =1;
struct tree* nctemp3400= p;
nctempchar1* nctemp3402=PtreeGetype(nctemp3400);
nctempchar1* nctemp3398= nctemp3402;
struct tree* nctemp3405= np;
nctempchar1* nctemp3407=PtreeGetype(nctemp3405);
nctempchar1* nctemp3403= nctemp3407;
int nctemp3408=LibeStrcmp(nctemp3398,nctemp3403);
int nctemp3395 = (nctemp3408 ==0);
if(nctemp3395)
{
rval =0;
}
struct tree* nctemp3419= p;
nctempchar1* nctemp3421=PtreeGetref(nctemp3419);
nctempchar1* nctemp3417= nctemp3421;
struct tree* nctemp3424= np;
nctempchar1* nctemp3426=PtreeGetref(nctemp3424);
nctempchar1* nctemp3422= nctemp3426;
int nctemp3427=LibeStrcmp(nctemp3417,nctemp3422);
int nctemp3414 = (nctemp3427 ==0);
if(nctemp3414)
{
struct tree* nctemp3432= np;
nctempchar1* nctemp3434=PtreeGetname(nctemp3432);
nctempchar1* nctemp3430= nctemp3434;
struct nctempchar1 *nctemp3437;
static struct nctempchar1 nctemp3438 = {{ 10}, (char*)"iconstant\0"};
nctemp3437=&nctemp3438;
nctempchar1* nctemp3435= nctemp3437;
int nctemp3439=LibeStrcmp(nctemp3430,nctemp3435);
if(nctemp3439)
{
struct tree* nctemp3443= np;
nctempchar1* nctemp3445=PtreeGetdef(nctemp3443);
nctempchar1* nctemp3441= nctemp3445;
struct nctempchar1 *nctemp3448;
static struct nctempchar1 nctemp3449 = {{ 2}, (char*)"0\0"};
nctemp3448=&nctemp3449;
nctempchar1* nctemp3446= nctemp3448;
int nctemp3450=LibeStrcmp(nctemp3441,nctemp3446);
if(nctemp3450)
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
struct tree* nctemp3468= p;
nctempchar1* nctemp3470=PtreeGetref(nctemp3468);
nctempchar1* nctemp3466= nctemp3470;
struct nctempchar1 *nctemp3473;
static struct nctempchar1 nctemp3474 = {{ 5}, (char*)"aref\0"};
nctemp3473=&nctemp3474;
nctempchar1* nctemp3471= nctemp3473;
int nctemp3475=LibeStrcmp(nctemp3466,nctemp3471);
int nctemp3463 = (nctemp3475 ==1);
if(nctemp3463)
{
struct tree* nctemp3480= p;
int nctemp3482=PtreeGetrank(nctemp3480);
struct tree* nctemp3484= np;
int nctemp3486=PtreeGetrank(nctemp3484);
int nctemp3477 = (nctemp3482 !=nctemp3486);
if(nctemp3477)
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
struct tree* nctemp3496= p;
struct tree* nctemp3498=PtreeMvchild(nctemp3496);
np =nctemp3498;
struct tree* nctemp3504= np;
nctempchar1* nctemp3506=PtreeGetlval(nctemp3504);
nctempchar1* nctemp3502= nctemp3506;
struct nctempchar1 *nctemp3509;
static struct nctempchar1 nctemp3510 = {{ 5}, (char*)"lval\0"};
nctemp3509=&nctemp3510;
nctempchar1* nctemp3507= nctemp3509;
int nctemp3511=LibeStrcmp(nctemp3502,nctemp3507);
int nctemp3499 = (nctemp3511 ==0);
if(nctemp3499)
{
struct tree* nctemp3514= np;
struct nctempchar1 *nctemp3518;
static struct nctempchar1 nctemp3519 = {{ 17}, (char*)"Not a left value\0"};
nctemp3518=&nctemp3519;
nctempchar1* nctemp3516= nctemp3518;
struct tree* nctemp3522= np;
nctempchar1* nctemp3524=PtreeGetdef(nctemp3522);
nctempchar1* nctemp3520= nctemp3524;
int nctemp3525=SemSerror(nctemp3514,nctemp3516,nctemp3520);
}
else{
struct tree* nctemp3527= p;
struct nctempchar1 *nctemp3531;
static struct nctempchar1 nctemp3532 = {{ 5}, (char*)"lval\0"};
nctemp3531=&nctemp3532;
nctempchar1* nctemp3529= nctemp3531;
int nctemp3533=PtreeSetlval(nctemp3527,nctemp3529);
}
struct tree* nctemp3535= np;
struct tree* nctemp3537= p;
int nctemp3539=SemCopytype(nctemp3535,nctemp3537);
return p;
}
struct tree* SemRelexpr (struct tree* p)
{
struct tree* np;
struct tree* rp;
struct tree* nctemp3545= p;
struct tree* nctemp3547=PtreeMvchild(nctemp3545);
np =nctemp3547;
struct tree* nctemp3552= np;
struct tree* nctemp3554=PtreeMvsister(nctemp3552);
rp =nctemp3554;
struct tree* nctemp3560= p;
nctempchar1* nctemp3562=PtreeGetdef(nctemp3560);
nctempchar1* nctemp3558= nctemp3562;
struct nctempchar1 *nctemp3565;
static struct nctempchar1 nctemp3566 = {{ 3}, (char*)"==\0"};
nctemp3565=&nctemp3566;
nctempchar1* nctemp3563= nctemp3565;
int nctemp3567=LibeStrcmp(nctemp3558,nctemp3563);
int nctemp3555 = (nctemp3567 ==0);
if(nctemp3555)
{
struct tree* nctemp3574= p;
nctempchar1* nctemp3576=PtreeGetdef(nctemp3574);
nctempchar1* nctemp3572= nctemp3576;
struct nctempchar1 *nctemp3579;
static struct nctempchar1 nctemp3580 = {{ 3}, (char*)"!=\0"};
nctemp3579=&nctemp3580;
nctempchar1* nctemp3577= nctemp3579;
int nctemp3581=LibeStrcmp(nctemp3572,nctemp3577);
int nctemp3569 = (nctemp3581 ==0);
if(nctemp3569)
{
struct tree* nctemp3588= np;
nctempchar1* nctemp3590=PtreeGetref(nctemp3588);
nctempchar1* nctemp3586= nctemp3590;
struct nctempchar1 *nctemp3593;
static struct nctempchar1 nctemp3594 = {{ 5}, (char*)"aref\0"};
nctemp3593=&nctemp3594;
nctempchar1* nctemp3591= nctemp3593;
int nctemp3595=LibeStrcmp(nctemp3586,nctemp3591);
struct tree* nctemp3599= np;
nctempchar1* nctemp3601=PtreeGetref(nctemp3599);
nctempchar1* nctemp3597= nctemp3601;
struct nctempchar1 *nctemp3604;
static struct nctempchar1 nctemp3605 = {{ 5}, (char*)"sref\0"};
nctemp3604=&nctemp3605;
nctempchar1* nctemp3602= nctemp3604;
int nctemp3606=LibeStrcmp(nctemp3597,nctemp3602);
int nctemp3583 = (nctemp3595 || nctemp3606);
if(nctemp3583)
{
struct tree* nctemp3608= p;
struct nctempchar1 *nctemp3612;
static struct nctempchar1 nctemp3613 = {{ 18}, (char*)"Illegal operation\0"};
nctemp3612=&nctemp3613;
nctempchar1* nctemp3610= nctemp3612;
struct nctempchar1 *nctemp3616;
static struct nctempchar1 nctemp3617 = {{ 2}, (char*)" \0"};
nctemp3616=&nctemp3617;
nctempchar1* nctemp3614= nctemp3616;
int nctemp3618=SemSerror(nctemp3608,nctemp3610,nctemp3614);
}
else{
struct tree* nctemp3624= rp;
nctempchar1* nctemp3626=PtreeGetref(nctemp3624);
nctempchar1* nctemp3622= nctemp3626;
struct nctempchar1 *nctemp3629;
static struct nctempchar1 nctemp3630 = {{ 5}, (char*)"aref\0"};
nctemp3629=&nctemp3630;
nctempchar1* nctemp3627= nctemp3629;
int nctemp3631=LibeStrcmp(nctemp3622,nctemp3627);
struct tree* nctemp3635= np;
nctempchar1* nctemp3637=PtreeGetref(nctemp3635);
nctempchar1* nctemp3633= nctemp3637;
struct nctempchar1 *nctemp3640;
static struct nctempchar1 nctemp3641 = {{ 5}, (char*)"sref\0"};
nctemp3640=&nctemp3641;
nctempchar1* nctemp3638= nctemp3640;
int nctemp3642=LibeStrcmp(nctemp3633,nctemp3638);
int nctemp3619 = (nctemp3631 || nctemp3642);
if(nctemp3619)
{
struct tree* nctemp3644= p;
struct nctempchar1 *nctemp3648;
static struct nctempchar1 nctemp3649 = {{ 18}, (char*)"Illegal operation\0"};
nctemp3648=&nctemp3649;
nctempchar1* nctemp3646= nctemp3648;
struct nctempchar1 *nctemp3652;
static struct nctempchar1 nctemp3653 = {{ 2}, (char*)" \0"};
nctemp3652=&nctemp3653;
nctempchar1* nctemp3650= nctemp3652;
int nctemp3654=SemSerror(nctemp3644,nctemp3646,nctemp3650);
}
}
}
else{
struct tree* nctemp3658= np;
nctempchar1* nctemp3660=PtreeGetype(nctemp3658);
nctempchar1* nctemp3656= nctemp3660;
struct nctempchar1 *nctemp3663;
static struct nctempchar1 nctemp3664 = {{ 8}, (char*)"complex\0"};
nctemp3663=&nctemp3664;
nctempchar1* nctemp3661= nctemp3663;
int nctemp3665=LibeStrcmp(nctemp3656,nctemp3661);
if(nctemp3665)
{
struct tree* nctemp3667= p;
struct nctempchar1 *nctemp3671;
static struct nctempchar1 nctemp3672 = {{ 18}, (char*)"Illegal operation\0"};
nctemp3671=&nctemp3672;
nctempchar1* nctemp3669= nctemp3671;
struct nctempchar1 *nctemp3675;
static struct nctempchar1 nctemp3676 = {{ 2}, (char*)" \0"};
nctemp3675=&nctemp3676;
nctempchar1* nctemp3673= nctemp3675;
int nctemp3677=SemSerror(nctemp3667,nctemp3669,nctemp3673);
}
}
}
struct tree* nctemp3679= p;
struct nctempchar1 *nctemp3683;
static struct nctempchar1 nctemp3684 = {{ 4}, (char*)"int\0"};
nctemp3683=&nctemp3684;
nctempchar1* nctemp3681= nctemp3683;
int nctemp3685=PtreeSetype(nctemp3679,nctemp3681);
struct tree* nctemp3687= p;
struct nctempchar1 *nctemp3691;
static struct nctempchar1 nctemp3692 = {{ 5}, (char*)"void\0"};
nctemp3691=&nctemp3692;
nctempchar1* nctemp3689= nctemp3691;
int nctemp3693=PtreeSetlval(nctemp3687,nctemp3689);
struct tree* nctemp3695= p;
struct nctempchar1 *nctemp3699;
static struct nctempchar1 nctemp3700 = {{ 5}, (char*)"void\0"};
nctemp3699=&nctemp3700;
nctempchar1* nctemp3697= nctemp3699;
int nctemp3701=PtreeSetstruct(nctemp3695,nctemp3697);
return p;
}
struct tree* SemAddexpr (struct tree* p)
{
struct tree* np;
struct tree* rp;
struct tree* nctemp3707= p;
struct tree* nctemp3709=PtreeMvchild(nctemp3707);
np =nctemp3709;
struct tree* nctemp3714= np;
struct tree* nctemp3716=PtreeMvsister(nctemp3714);
rp =nctemp3716;
struct tree* nctemp3720= np;
nctempchar1* nctemp3722=PtreeGetref(nctemp3720);
nctempchar1* nctemp3718= nctemp3722;
struct nctempchar1 *nctemp3725;
static struct nctempchar1 nctemp3726 = {{ 5}, (char*)"sref\0"};
nctemp3725=&nctemp3726;
nctempchar1* nctemp3723= nctemp3725;
int nctemp3727=LibeStrcmp(nctemp3718,nctemp3723);
if(nctemp3727)
{
struct tree* nctemp3729= np;
struct nctempchar1 *nctemp3733;
static struct nctempchar1 nctemp3734 = {{ 18}, (char*)"Illegal operation\0"};
nctemp3733=&nctemp3734;
nctempchar1* nctemp3731= nctemp3733;
struct nctempchar1 *nctemp3737;
static struct nctempchar1 nctemp3738 = {{ 2}, (char*)" \0"};
nctemp3737=&nctemp3738;
nctempchar1* nctemp3735= nctemp3737;
int nctemp3739=SemSerror(nctemp3729,nctemp3731,nctemp3735);
}
else{
struct tree* nctemp3743= rp;
nctempchar1* nctemp3745=PtreeGetref(nctemp3743);
nctempchar1* nctemp3741= nctemp3745;
struct nctempchar1 *nctemp3748;
static struct nctempchar1 nctemp3749 = {{ 5}, (char*)"sref\0"};
nctemp3748=&nctemp3749;
nctempchar1* nctemp3746= nctemp3748;
int nctemp3750=LibeStrcmp(nctemp3741,nctemp3746);
if(nctemp3750)
{
struct tree* nctemp3752= np;
struct nctempchar1 *nctemp3756;
static struct nctempchar1 nctemp3757 = {{ 18}, (char*)"Illegal operation\0"};
nctemp3756=&nctemp3757;
nctempchar1* nctemp3754= nctemp3756;
struct nctempchar1 *nctemp3760;
static struct nctempchar1 nctemp3761 = {{ 2}, (char*)" \0"};
nctemp3760=&nctemp3761;
nctempchar1* nctemp3758= nctemp3760;
int nctemp3762=SemSerror(nctemp3752,nctemp3754,nctemp3758);
}
else{
struct tree* nctemp3764= np;
struct tree* nctemp3766= p;
int nctemp3768=SemCopytype(nctemp3764,nctemp3766);
struct tree* nctemp3770= p;
struct nctempchar1 *nctemp3774;
static struct nctempchar1 nctemp3775 = {{ 5}, (char*)"void\0"};
nctemp3774=&nctemp3775;
nctempchar1* nctemp3772= nctemp3774;
int nctemp3776=PtreeSetlval(nctemp3770,nctemp3772);
}
}
return p;
}
struct tree* SemBinexpr (struct tree* p)
{
struct tree* leftp;
struct tree* rightp;
struct tree* np;
np =p;
struct tree* nctemp3785= p;
nctempchar1* nctemp3787=PtreeGetname(nctemp3785);
nctempchar1* nctemp3783= nctemp3787;
struct nctempchar1 *nctemp3790;
static struct nctempchar1 nctemp3791 = {{ 8}, (char*)"binexpr\0"};
nctemp3790=&nctemp3791;
nctempchar1* nctemp3788= nctemp3790;
int nctemp3792=LibeStrcmp(nctemp3783,nctemp3788);
if(nctemp3792)
{
struct tree* nctemp3797= p;
struct tree* nctemp3799=PtreeMvchild(nctemp3797);
p =nctemp3799;
struct tree* nctemp3804= p;
struct tree* nctemp3806=SemUnexpr(nctemp3804);
leftp =nctemp3806;
struct tree* nctemp3811= p;
struct tree* nctemp3813=PtreeMvsister(nctemp3811);
p =nctemp3813;
struct tree* nctemp3818= p;
struct tree* nctemp3820=SemUnexpr(nctemp3818);
rightp =nctemp3820;
struct tree* nctemp3824= leftp;
struct tree* nctemp3826= rightp;
int nctemp3828=SemComparetype(nctemp3824,nctemp3826);
int nctemp3821 = (nctemp3828 ==0);
if(nctemp3821)
{
struct tree* nctemp3831= p;
struct nctempchar1 *nctemp3835;
static struct nctempchar1 nctemp3836 = {{ 11}, (char*)"Type error\0"};
nctemp3835=&nctemp3836;
nctempchar1* nctemp3833= nctemp3835;
struct nctempchar1 *nctemp3839;
static struct nctempchar1 nctemp3840 = {{ 2}, (char*)" \0"};
nctemp3839=&nctemp3840;
nctempchar1* nctemp3837= nctemp3839;
int nctemp3841=SemSerror(nctemp3831,nctemp3833,nctemp3837);
return p;
}
else{
struct tree* nctemp3846= np;
nctempchar1* nctemp3848=PtreeGetdef(nctemp3846);
nctempchar1* nctemp3844= nctemp3848;
struct nctempchar1 *nctemp3851;
static struct nctempchar1 nctemp3852 = {{ 2}, (char*)"=\0"};
nctemp3851=&nctemp3852;
nctempchar1* nctemp3849= nctemp3851;
int nctemp3853=LibeStrcmp(nctemp3844,nctemp3849);
if(nctemp3853)
{
struct tree* nctemp3855= np;
struct tree* nctemp3857=SemAsgexpr(nctemp3855);
}
else{
struct tree* nctemp3881= np;
nctempchar1* nctemp3883=PtreeGetdef(nctemp3881);
nctempchar1* nctemp3879= nctemp3883;
struct nctempchar1 *nctemp3886;
static struct nctempchar1 nctemp3887 = {{ 3}, (char*)"!=\0"};
nctemp3886=&nctemp3887;
nctempchar1* nctemp3884= nctemp3886;
int nctemp3888=LibeStrcmp(nctemp3879,nctemp3884);
struct tree* nctemp3892= np;
nctempchar1* nctemp3894=PtreeGetdef(nctemp3892);
nctempchar1* nctemp3890= nctemp3894;
struct nctempchar1 *nctemp3897;
static struct nctempchar1 nctemp3898 = {{ 3}, (char*)"==\0"};
nctemp3897=&nctemp3898;
nctempchar1* nctemp3895= nctemp3897;
int nctemp3899=LibeStrcmp(nctemp3890,nctemp3895);
int nctemp3876 = (nctemp3888 || nctemp3899);
struct tree* nctemp3903= np;
nctempchar1* nctemp3905=PtreeGetdef(nctemp3903);
nctempchar1* nctemp3901= nctemp3905;
struct nctempchar1 *nctemp3908;
static struct nctempchar1 nctemp3909 = {{ 3}, (char*)"||\0"};
nctemp3908=&nctemp3909;
nctempchar1* nctemp3906= nctemp3908;
int nctemp3910=LibeStrcmp(nctemp3901,nctemp3906);
int nctemp3873 = (nctemp3876 || nctemp3910);
struct tree* nctemp3914= np;
nctempchar1* nctemp3916=PtreeGetdef(nctemp3914);
nctempchar1* nctemp3912= nctemp3916;
struct nctempchar1 *nctemp3919;
static struct nctempchar1 nctemp3920 = {{ 3}, (char*)"<=\0"};
nctemp3919=&nctemp3920;
nctempchar1* nctemp3917= nctemp3919;
int nctemp3921=LibeStrcmp(nctemp3912,nctemp3917);
int nctemp3870 = (nctemp3873 || nctemp3921);
struct tree* nctemp3925= np;
nctempchar1* nctemp3927=PtreeGetdef(nctemp3925);
nctempchar1* nctemp3923= nctemp3927;
struct nctempchar1 *nctemp3930;
static struct nctempchar1 nctemp3931 = {{ 3}, (char*)">=\0"};
nctemp3930=&nctemp3931;
nctempchar1* nctemp3928= nctemp3930;
int nctemp3932=LibeStrcmp(nctemp3923,nctemp3928);
int nctemp3867 = (nctemp3870 || nctemp3932);
struct tree* nctemp3936= np;
nctempchar1* nctemp3938=PtreeGetdef(nctemp3936);
nctempchar1* nctemp3934= nctemp3938;
struct nctempchar1 *nctemp3941;
static struct nctempchar1 nctemp3942 = {{ 2}, (char*)"<\0"};
nctemp3941=&nctemp3942;
nctempchar1* nctemp3939= nctemp3941;
int nctemp3943=LibeStrcmp(nctemp3934,nctemp3939);
int nctemp3864 = (nctemp3867 || nctemp3943);
struct tree* nctemp3947= np;
nctempchar1* nctemp3949=PtreeGetdef(nctemp3947);
nctempchar1* nctemp3945= nctemp3949;
struct nctempchar1 *nctemp3952;
static struct nctempchar1 nctemp3953 = {{ 2}, (char*)">\0"};
nctemp3952=&nctemp3953;
nctempchar1* nctemp3950= nctemp3952;
int nctemp3954=LibeStrcmp(nctemp3945,nctemp3950);
int nctemp3861 = (nctemp3864 || nctemp3954);
struct tree* nctemp3958= np;
nctempchar1* nctemp3960=PtreeGetdef(nctemp3958);
nctempchar1* nctemp3956= nctemp3960;
struct nctempchar1 *nctemp3963;
static struct nctempchar1 nctemp3964 = {{ 3}, (char*)"&&\0"};
nctemp3963=&nctemp3964;
nctempchar1* nctemp3961= nctemp3963;
int nctemp3965=LibeStrcmp(nctemp3956,nctemp3961);
int nctemp3858 = (nctemp3861 || nctemp3965);
if(nctemp3858)
{
struct tree* nctemp3967= np;
struct tree* nctemp3969=SemRelexpr(nctemp3967);
}
else{
struct tree* nctemp3981= np;
nctempchar1* nctemp3983=PtreeGetdef(nctemp3981);
nctempchar1* nctemp3979= nctemp3983;
struct nctempchar1 *nctemp3986;
static struct nctempchar1 nctemp3987 = {{ 2}, (char*)"+\0"};
nctemp3986=&nctemp3987;
nctempchar1* nctemp3984= nctemp3986;
int nctemp3988=LibeStrcmp(nctemp3979,nctemp3984);
struct tree* nctemp3992= np;
nctempchar1* nctemp3994=PtreeGetdef(nctemp3992);
nctempchar1* nctemp3990= nctemp3994;
struct nctempchar1 *nctemp3997;
static struct nctempchar1 nctemp3998 = {{ 2}, (char*)"-\0"};
nctemp3997=&nctemp3998;
nctempchar1* nctemp3995= nctemp3997;
int nctemp3999=LibeStrcmp(nctemp3990,nctemp3995);
int nctemp3976 = (nctemp3988 || nctemp3999);
struct tree* nctemp4003= np;
nctempchar1* nctemp4005=PtreeGetdef(nctemp4003);
nctempchar1* nctemp4001= nctemp4005;
struct nctempchar1 *nctemp4008;
static struct nctempchar1 nctemp4009 = {{ 2}, (char*)"*\0"};
nctemp4008=&nctemp4009;
nctempchar1* nctemp4006= nctemp4008;
int nctemp4010=LibeStrcmp(nctemp4001,nctemp4006);
int nctemp3973 = (nctemp3976 || nctemp4010);
struct tree* nctemp4014= np;
nctempchar1* nctemp4016=PtreeGetdef(nctemp4014);
nctempchar1* nctemp4012= nctemp4016;
struct nctempchar1 *nctemp4019;
static struct nctempchar1 nctemp4020 = {{ 2}, (char*)"/\0"};
nctemp4019=&nctemp4020;
nctempchar1* nctemp4017= nctemp4019;
int nctemp4021=LibeStrcmp(nctemp4012,nctemp4017);
int nctemp3970 = (nctemp3973 || nctemp4021);
if(nctemp3970)
{
struct tree* nctemp4023= np;
struct tree* nctemp4025=SemAddexpr(nctemp4023);
}
}
}
return np;
}
}
else{
struct tree* nctemp4028= p;
struct tree* nctemp4030=SemUnexpr(nctemp4028);
return nctemp4030;
}
}
struct tree* SemExpr (struct tree* p)
{
struct tree* sp;
struct tree* nctemp4035= p;
struct tree* nctemp4037=PtreeMvchild(nctemp4035);
sp =nctemp4037;
struct tree* nctemp4042= sp;
struct tree* nctemp4044=SemBinexpr(nctemp4042);
sp =nctemp4044;
struct tree* nctemp4046= sp;
struct tree* nctemp4048= p;
int nctemp4050=SemCopytype(nctemp4046,nctemp4048);
return p;
}
struct tree* SemUnexpr (struct tree* p)
{
struct tree* np;
np =p;
struct tree* nctemp4059= p;
nctempchar1* nctemp4061=PtreeGetname(nctemp4059);
nctempchar1* nctemp4057= nctemp4061;
struct nctempchar1 *nctemp4064;
static struct nctempchar1 nctemp4065 = {{ 7}, (char*)"unexpr\0"};
nctemp4064=&nctemp4065;
nctempchar1* nctemp4062= nctemp4064;
int nctemp4066=LibeStrcmp(nctemp4057,nctemp4062);
if(nctemp4066)
{
struct tree* nctemp4071= p;
struct tree* nctemp4073=PtreeMvchild(nctemp4071);
p =nctemp4073;
struct tree* nctemp4078= p;
struct tree* nctemp4080=SemPrimexpr(nctemp4078);
p =nctemp4080;
struct tree* nctemp4082= p;
struct tree* nctemp4084= np;
int nctemp4086=SemCopytype(nctemp4082,nctemp4084);
return np;
}
else{
struct tree* nctemp4089= p;
struct tree* nctemp4091=SemPrimexpr(nctemp4089);
return nctemp4091;
}
}
struct tree* SemPrimexpr (struct tree* p)
{
struct tree* nctemp4095= p;
nctempchar1* nctemp4097=PtreeGetname(nctemp4095);
nctempchar1* nctemp4093= nctemp4097;
struct nctempchar1 *nctemp4100;
static struct nctempchar1 nctemp4101 = {{ 11}, (char*)"identifier\0"};
nctemp4100=&nctemp4101;
nctempchar1* nctemp4098= nctemp4100;
int nctemp4102=LibeStrcmp(nctemp4093,nctemp4098);
if(nctemp4102)
{
struct tree* nctemp4104= p;
int nctemp4106=SemId(nctemp4104);
return p;
}
else{
struct tree* nctemp4111= p;
nctempchar1* nctemp4113=PtreeGetname(nctemp4111);
nctempchar1* nctemp4109= nctemp4113;
struct nctempchar1 *nctemp4116;
static struct nctempchar1 nctemp4117 = {{ 6}, (char*)"fcall\0"};
nctemp4116=&nctemp4117;
nctempchar1* nctemp4114= nctemp4116;
int nctemp4118=LibeStrcmp(nctemp4109,nctemp4114);
if(nctemp4118)
{
struct tree* nctemp4120= p;
int nctemp4122=SemFcall(nctemp4120);
return p;
}
else{
struct tree* nctemp4127= p;
nctempchar1* nctemp4129=PtreeGetname(nctemp4127);
nctempchar1* nctemp4125= nctemp4129;
struct nctempchar1 *nctemp4132;
static struct nctempchar1 nctemp4133 = {{ 5}, (char*)"cast\0"};
nctemp4132=&nctemp4133;
nctempchar1* nctemp4130= nctemp4132;
int nctemp4134=LibeStrcmp(nctemp4125,nctemp4130);
if(nctemp4134)
{
struct tree* nctemp4136= p;
int nctemp4138=SemCast(nctemp4136);
return p;
}
else{
struct tree* nctemp4143= p;
nctempchar1* nctemp4145=PtreeGetname(nctemp4143);
nctempchar1* nctemp4141= nctemp4145;
struct nctempchar1 *nctemp4148;
static struct nctempchar1 nctemp4149 = {{ 4}, (char*)"new\0"};
nctemp4148=&nctemp4149;
nctempchar1* nctemp4146= nctemp4148;
int nctemp4150=LibeStrcmp(nctemp4141,nctemp4146);
if(nctemp4150)
{
struct tree* nctemp4152= p;
int nctemp4154=SemNew(nctemp4152);
return p;
}
else{
struct tree* nctemp4159= p;
nctempchar1* nctemp4161=PtreeGetname(nctemp4159);
nctempchar1* nctemp4157= nctemp4161;
struct nctempchar1 *nctemp4164;
static struct nctempchar1 nctemp4165 = {{ 7}, (char*)"delete\0"};
nctemp4164=&nctemp4165;
nctempchar1* nctemp4162= nctemp4164;
int nctemp4166=LibeStrcmp(nctemp4157,nctemp4162);
if(nctemp4166)
{
struct tree* nctemp4168= p;
int nctemp4170=SemDelete(nctemp4168);
return p;
}
else{
struct tree* nctemp4175= p;
nctempchar1* nctemp4177=PtreeGetname(nctemp4175);
nctempchar1* nctemp4173= nctemp4177;
struct nctempchar1 *nctemp4180;
static struct nctempchar1 nctemp4181 = {{ 6}, (char*)"cmplx\0"};
nctemp4180=&nctemp4181;
nctempchar1* nctemp4178= nctemp4180;
int nctemp4182=LibeStrcmp(nctemp4173,nctemp4178);
if(nctemp4182)
{
struct tree* nctemp4184= p;
int nctemp4186=SemCmplx(nctemp4184);
return p;
}
else{
struct tree* nctemp4191= p;
nctempchar1* nctemp4193=PtreeGetname(nctemp4191);
nctempchar1* nctemp4189= nctemp4193;
struct nctempchar1 *nctemp4196;
static struct nctempchar1 nctemp4197 = {{ 3}, (char*)"re\0"};
nctemp4196=&nctemp4197;
nctempchar1* nctemp4194= nctemp4196;
int nctemp4198=LibeStrcmp(nctemp4189,nctemp4194);
if(nctemp4198)
{
struct tree* nctemp4200= p;
int nctemp4202=SemRe(nctemp4200);
return p;
}
else{
struct tree* nctemp4207= p;
nctempchar1* nctemp4209=PtreeGetname(nctemp4207);
nctempchar1* nctemp4205= nctemp4209;
struct nctempchar1 *nctemp4212;
static struct nctempchar1 nctemp4213 = {{ 4}, (char*)"len\0"};
nctemp4212=&nctemp4213;
nctempchar1* nctemp4210= nctemp4212;
int nctemp4214=LibeStrcmp(nctemp4205,nctemp4210);
if(nctemp4214)
{
struct tree* nctemp4216= p;
int nctemp4218=SemLen(nctemp4216);
return p;
}
else{
struct tree* nctemp4223= p;
nctempchar1* nctemp4225=PtreeGetname(nctemp4223);
nctempchar1* nctemp4221= nctemp4225;
struct nctempchar1 *nctemp4228;
static struct nctempchar1 nctemp4229 = {{ 3}, (char*)"im\0"};
nctemp4228=&nctemp4229;
nctempchar1* nctemp4226= nctemp4228;
int nctemp4230=LibeStrcmp(nctemp4221,nctemp4226);
if(nctemp4230)
{
struct tree* nctemp4232= p;
int nctemp4234=SemIm(nctemp4232);
return p;
}
else{
struct tree* nctemp4239= p;
nctempchar1* nctemp4241=PtreeGetname(nctemp4239);
nctempchar1* nctemp4237= nctemp4241;
struct nctempchar1 *nctemp4244;
static struct nctempchar1 nctemp4245 = {{ 7}, (char*)"sizeof\0"};
nctemp4244=&nctemp4245;
nctempchar1* nctemp4242= nctemp4244;
int nctemp4246=LibeStrcmp(nctemp4237,nctemp4242);
if(nctemp4246)
{
struct tree* nctemp4248= p;
int nctemp4250=SemSizeof(nctemp4248);
return p;
}
else{
struct tree* nctemp4255= p;
nctempchar1* nctemp4257=PtreeGetname(nctemp4255);
nctempchar1* nctemp4253= nctemp4257;
struct nctempchar1 *nctemp4260;
static struct nctempchar1 nctemp4261 = {{ 10}, (char*)"iconstant\0"};
nctemp4260=&nctemp4261;
nctempchar1* nctemp4258= nctemp4260;
int nctemp4262=LibeStrcmp(nctemp4253,nctemp4258);
if(nctemp4262)
{
struct tree* nctemp4264= p;
struct nctempchar1 *nctemp4268;
static struct nctempchar1 nctemp4269 = {{ 4}, (char*)"int\0"};
nctemp4268=&nctemp4269;
nctempchar1* nctemp4266= nctemp4268;
int nctemp4270=PtreeSetype(nctemp4264,nctemp4266);
return p;
}
else{
struct tree* nctemp4275= p;
nctempchar1* nctemp4277=PtreeGetname(nctemp4275);
nctempchar1* nctemp4273= nctemp4277;
struct nctempchar1 *nctemp4280;
static struct nctempchar1 nctemp4281 = {{ 10}, (char*)"rconstant\0"};
nctemp4280=&nctemp4281;
nctempchar1* nctemp4278= nctemp4280;
int nctemp4282=LibeStrcmp(nctemp4273,nctemp4278);
if(nctemp4282)
{
struct tree* nctemp4284= p;
struct nctempchar1 *nctemp4288;
static struct nctempchar1 nctemp4289 = {{ 6}, (char*)"float\0"};
nctemp4288=&nctemp4289;
nctempchar1* nctemp4286= nctemp4288;
int nctemp4290=PtreeSetype(nctemp4284,nctemp4286);
return p;
}
else{
struct tree* nctemp4295= p;
nctempchar1* nctemp4297=PtreeGetname(nctemp4295);
nctempchar1* nctemp4293= nctemp4297;
struct nctempchar1 *nctemp4300;
static struct nctempchar1 nctemp4301 = {{ 10}, (char*)"sconstant\0"};
nctemp4300=&nctemp4301;
nctempchar1* nctemp4298= nctemp4300;
int nctemp4302=LibeStrcmp(nctemp4293,nctemp4298);
if(nctemp4302)
{
struct tree* nctemp4304= p;
struct nctempchar1 *nctemp4308;
static struct nctempchar1 nctemp4309 = {{ 5}, (char*)"char\0"};
nctemp4308=&nctemp4309;
nctempchar1* nctemp4306= nctemp4308;
int nctemp4310=PtreeSetype(nctemp4304,nctemp4306);
struct tree* nctemp4312= p;
struct nctempchar1 *nctemp4316;
static struct nctempchar1 nctemp4317 = {{ 5}, (char*)"aref\0"};
nctemp4316=&nctemp4317;
nctempchar1* nctemp4314= nctemp4316;
int nctemp4318=PtreeSetref(nctemp4312,nctemp4314);
struct tree* nctemp4320= p;
int nctemp4322= 1;
int nctemp4324=PtreeSetrank(nctemp4320,nctemp4322);
return p;
}
else{
struct tree* nctemp4327= p;
struct tree* nctemp4329=SemBinexpr(nctemp4327);
return nctemp4329;
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
struct tree* nctemp4331= p;
struct tree* nctemp4335= np;
nctempchar1* nctemp4337=PtreeGetparallel(nctemp4335);
nctempchar1* nctemp4333= nctemp4337;
int nctemp4338=PtreeSetparallel(nctemp4331,nctemp4333);
return 1;
}
int SemArgtypes (struct tree* p,struct symbol* tp)
{
nctempchar1 *name;
struct symbol* nctemp4345= tp;
nctempchar1* nctemp4347=SymGetname(nctemp4345);
name=nctemp4347;
struct tree* nctemp4349= p;
struct symbol* nctemp4351= tp;
int nctemp4353=SemArgtype(nctemp4349,nctemp4351);
struct tree* nctemp4358= p;
struct tree* nctemp4360=PtreeMvchild(nctemp4358);
p =nctemp4360;
struct tree* nctemp4366= p;
nctempchar1* nctemp4368=PtreeGetname(nctemp4366);
nctempchar1* nctemp4364= nctemp4368;
struct nctempchar1 *nctemp4371;
static struct nctempchar1 nctemp4372 = {{ 8}, (char*)"arglist\0"};
nctemp4371=&nctemp4372;
nctempchar1* nctemp4369= nctemp4371;
int nctemp4373=LibeStrcmp(nctemp4364,nctemp4369);
int nctemp4361 = (nctemp4373 ==0);
if(nctemp4361)
{
struct symbol* nctemp4382= tp;
struct symbol* nctemp4384=SymGetable(nctemp4382);
tp =nctemp4384;
int nctemp4375 = (tp !=0);
if(nctemp4375)
{
struct tree* nctemp4387= p;
struct nctempchar1 *nctemp4391;
static struct nctempchar1 nctemp4392 = {{ 54}, (char*)"Function arguments does not match forward declaration\0"};
nctemp4391=&nctemp4392;
nctempchar1* nctemp4389= nctemp4391;
struct tree* nctemp4395= p;
nctempchar1* nctemp4397=PtreeGetdef(nctemp4395);
nctempchar1* nctemp4393= nctemp4397;
int nctemp4398=SemSerror(nctemp4387,nctemp4389,nctemp4393);
return 0;
}
return 1;
}
struct tree* nctemp4407= p;
struct tree* nctemp4409=PtreeMvchild(nctemp4407);
struct tree* nctemp4405= nctemp4409;
struct tree* nctemp4410=PtreeMvchild(nctemp4405);
p =nctemp4410;
struct symbol* nctemp4415= tp;
struct symbol* nctemp4417=SymGetable(nctemp4415);
tp =nctemp4417;
struct nctempchar1 *nctemp4424;
static struct nctempchar1 nctemp4425 = {{ 9}, (char*)"#arglist\0"};
nctemp4424=&nctemp4425;
nctempchar1* nctemp4422= nctemp4424;
struct symbol* nctemp4426= tp;
struct symbol* nctemp4428=SymLookup(nctemp4422,nctemp4426);
tp =nctemp4428;
int nctemp4429 = (tp ==0);
if(nctemp4429)
{
struct tree* nctemp4434= p;
struct nctempchar1 *nctemp4438;
static struct nctempchar1 nctemp4439 = {{ 54}, (char*)"Function Arguments does not match forward declaration\0"};
nctemp4438=&nctemp4439;
nctempchar1* nctemp4436= nctemp4438;
nctempchar1* nctemp4440= name;
int nctemp4443=SemSerror(nctemp4434,nctemp4436,nctemp4440);
}
else{
struct symbol* nctemp4448= tp;
struct symbol* nctemp4450=SymGetable(nctemp4448);
tp =nctemp4450;
}
struct symbol* nctemp4455= tp;
struct symbol* nctemp4457=SymMvnext(nctemp4455);
tp =nctemp4457;
int nctemp4458 = (p !=0);
int nctemp4462=nctemp4458;
while(nctemp4462)
{{
struct tree* nctemp4464= p;
struct symbol* nctemp4466= tp;
int nctemp4468=SemArgtype(nctemp4464,nctemp4466);
struct tree* nctemp4473= p;
struct tree* nctemp4475=PtreeMvsister(nctemp4473);
p =nctemp4475;
struct symbol* nctemp4480= tp;
struct symbol* nctemp4482=SymMvnext(nctemp4480);
tp =nctemp4482;
}
int nctemp4483 = (p !=0);
nctemp4462=nctemp4483;}return 1;
}
int SemFdef2 (struct tree* p,struct symbol* tp)
{
struct tree* np;
struct tree* sp;
struct symbol* fname;
struct symbol* fsub;
struct symbol* arg;
struct symbol* argsub;
struct symbol* args;
struct symbol* up;
struct symbol* ftp;
struct symbol* uup;
struct symbol* ltp;
struct symbol* atp;
nctempchar1 *type;
int rank;
struct tree* nctemp4489= p;
struct nctempchar1 *nctemp4493;
static struct nctempchar1 nctemp4494 = {{ 5}, (char*)"fdef\0"};
nctemp4493=&nctemp4494;
nctempchar1* nctemp4491= nctemp4493;
int nctemp4495=PtreeSetname(nctemp4489,nctemp4491);
struct symbol* nctemp4497= tp;
struct nctempchar1 *nctemp4501;
static struct nctempchar1 nctemp4502 = {{ 5}, (char*)"void\0"};
nctemp4501=&nctemp4502;
nctempchar1* nctemp4499= nctemp4501;
int nctemp4503=SymSetforw(nctemp4497,nctemp4499);
struct tree* nctemp4508= p;
struct tree* nctemp4510=PtreeMvchild(nctemp4508);
np =nctemp4510;
struct symbol* nctemp4515=SymMktable();
ltp =nctemp4515;
struct symbol* nctemp4517= ltp;
struct symbol* nctemp4519=SymSetltp(nctemp4517);
struct nctempchar1 *nctemp4526;
static struct nctempchar1 nctemp4527 = {{ 6}, (char*)"#self\0"};
nctemp4526=&nctemp4527;
nctempchar1* nctemp4524= nctemp4526;
struct symbol* nctemp4528= ltp;
struct symbol* nctemp4530=SymMkname(nctemp4524,nctemp4528);
up =nctemp4530;
struct symbol* nctemp4532= up;
struct tree* nctemp4536= p;
nctempchar1* nctemp4538=PtreeGetdef(nctemp4536);
nctempchar1* nctemp4534= nctemp4538;
int nctemp4539=SymSetfunc(nctemp4532,nctemp4534);
struct tree* nctemp4545= np;
nctempchar1* nctemp4547=PtreeGetname(nctemp4545);
nctempchar1* nctemp4543= nctemp4547;
struct nctempchar1 *nctemp4550;
static struct nctempchar1 nctemp4551 = {{ 8}, (char*)"arglist\0"};
nctemp4550=&nctemp4551;
nctempchar1* nctemp4548= nctemp4550;
int nctemp4552=LibeStrcmp(nctemp4543,nctemp4548);
int nctemp4540 = (nctemp4552 ==1);
if(nctemp4540)
{
struct tree* nctemp4558= np;
struct tree* nctemp4560=PtreeMvsister(nctemp4558);
sp =nctemp4560;
}
else{
sp =np;
}
struct tree* nctemp4570= np;
nctempchar1* nctemp4572=PtreeGetname(nctemp4570);
nctempchar1* nctemp4568= nctemp4572;
struct nctempchar1 *nctemp4575;
static struct nctempchar1 nctemp4576 = {{ 8}, (char*)"arglist\0"};
nctemp4575=&nctemp4576;
nctempchar1* nctemp4573= nctemp4575;
int nctemp4577=LibeStrcmp(nctemp4568,nctemp4573);
int nctemp4565 = (nctemp4577 ==1);
if(nctemp4565)
{
struct tree* nctemp4583= np;
struct tree* nctemp4585=PtreeMvchild(nctemp4583);
np =nctemp4585;
struct nctempchar1 *nctemp4592;
static struct nctempchar1 nctemp4593 = {{ 9}, (char*)"#arglist\0"};
nctemp4592=&nctemp4593;
nctempchar1* nctemp4590= nctemp4592;
struct symbol* nctemp4594= ltp;
struct symbol* nctemp4596=SymMkname(nctemp4590,nctemp4594);
up =nctemp4596;
struct symbol* nctemp4601=SymMktable();
ftp =nctemp4601;
struct symbol* nctemp4603= up;
struct symbol* nctemp4605= ftp;
struct symbol* nctemp4607=SymSetable(nctemp4603,nctemp4605);
struct tree* nctemp4609= np;
struct symbol* nctemp4611= ftp;
int nctemp4613=SemDeclarations(nctemp4609,nctemp4611);
}
struct tree* nctemp4615= p;
struct symbol* nctemp4617= tp;
int nctemp4619=SemArgtypes(nctemp4615,nctemp4617);
struct symbol* nctemp4621= tp;
int nctemp4623= 1;
int nctemp4625=SymSetemit(nctemp4621,nctemp4623);
struct tree* nctemp4627= sp;
int nctemp4629=SemCompstmnt(nctemp4627);
struct tree* nctemp4631= p;
struct tree* nctemp4633= sp;
int nctemp4635=SemCopyparallel(nctemp4631,nctemp4633);
return 1;
}
int Semisnobody (struct tree* p)
{
struct tree* np;
struct tree* nctemp4641= p;
struct tree* nctemp4643=PtreeMvchild(nctemp4641);
np =nctemp4643;
struct tree* nctemp4649= np;
nctempchar1* nctemp4651=PtreeGetname(nctemp4649);
nctempchar1* nctemp4647= nctemp4651;
struct nctempchar1 *nctemp4654;
static struct nctempchar1 nctemp4655 = {{ 8}, (char*)"arglist\0"};
nctemp4654=&nctemp4655;
nctempchar1* nctemp4652= nctemp4654;
int nctemp4656=LibeStrcmp(nctemp4647,nctemp4652);
int nctemp4644 = (nctemp4656 ==1);
if(nctemp4644)
{
struct tree* nctemp4662= np;
struct tree* nctemp4664=PtreeMvsister(nctemp4662);
np =nctemp4664;
struct tree* nctemp4669= np;
struct tree* nctemp4671=PtreeMvchild(nctemp4669);
np =nctemp4671;
int nctemp4672 = (np ==0);
if(nctemp4672)
{
return 1;
}
else{
return 0;
}
}
else{
struct tree* nctemp4683= np;
nctempchar1* nctemp4685=PtreeGetname(nctemp4683);
nctempchar1* nctemp4681= nctemp4685;
struct nctempchar1 *nctemp4688;
static struct nctempchar1 nctemp4689 = {{ 10}, (char*)"compstmnt\0"};
nctemp4688=&nctemp4689;
nctempchar1* nctemp4686= nctemp4688;
int nctemp4690=LibeStrcmp(nctemp4681,nctemp4686);
int nctemp4678 = (nctemp4690 ==1);
if(nctemp4678)
{
struct tree* nctemp4696= np;
struct tree* nctemp4698=PtreeMvchild(nctemp4696);
np =nctemp4698;
int nctemp4699 = (np ==0);
if(nctemp4699)
{
return 1;
}
else{
return 0;
}
}
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
struct symbol* args;
struct symbol* up;
struct symbol* ftp;
struct symbol* uup;
struct symbol* ltp;
struct symbol* atp;
struct symbol* qp;
nctempchar1 *type;
int rank;
int nobody;
struct tree* nctemp4708= p;
nctempchar1* nctemp4710=PtreeGetarray(nctemp4708);
nctempchar1* nctemp4706= nctemp4710;
struct nctempchar1 *nctemp4713;
static struct nctempchar1 nctemp4714 = {{ 6}, (char*)"array\0"};
nctemp4713=&nctemp4714;
nctempchar1* nctemp4711= nctemp4713;
int nctemp4715=LibeStrcmp(nctemp4706,nctemp4711);
if(nctemp4715)
{
rank =1;
struct tree* nctemp4724= p;
struct tree* nctemp4726=PtreeMvchild(nctemp4724);
np =nctemp4726;
struct tree* nctemp4731= np;
struct tree* nctemp4733=PtreeMvchild(nctemp4731);
sp =nctemp4733;
struct tree* nctemp4738= np;
struct tree* nctemp4740=PtreeMvsister(nctemp4738);
np =nctemp4740;
struct tree* nctemp4748= sp;
struct tree* nctemp4750=PtreeMvsister(nctemp4748);
sp =nctemp4750;
int nctemp4741 = (sp !=0);
int nctemp4752=nctemp4741;
while(nctemp4752)
{{
int nctemp4761 = rank + 1;
rank =nctemp4761;
}
struct tree* nctemp4769= sp;
struct tree* nctemp4771=PtreeMvsister(nctemp4769);
sp =nctemp4771;
int nctemp4762 = (sp !=0);
nctemp4752=nctemp4762;}}
else{
rank =0;
struct tree* nctemp4781= p;
struct tree* nctemp4783=PtreeMvchild(nctemp4781);
np =nctemp4783;
}
struct tree* nctemp4785= p;
int nctemp4787= rank;
int nctemp4789=PtreeSetrank(nctemp4785,nctemp4787);
struct tree* nctemp4791= p;
struct tree* nctemp4793= np;
int nctemp4795=SemCopytype(nctemp4791,nctemp4793);
struct tree* nctemp4797= np;
struct tree* nctemp4801= p;
nctempchar1* nctemp4803=PtreeGetdef(nctemp4801);
nctempchar1* nctemp4799= nctemp4803;
int nctemp4804=PtreeSetype(nctemp4797,nctemp4799);
p =np;
nobody =0;
struct tree* nctemp4816= p;
int nctemp4818=Semisnobody(nctemp4816);
int nctemp4813 = (nctemp4818 ==1);
if(nctemp4813)
{
struct tree* nctemp4821= p;
struct nctempchar1 *nctemp4825;
static struct nctempchar1 nctemp4826 = {{ 5}, (char*)"forw\0"};
nctemp4825=&nctemp4826;
nctempchar1* nctemp4823= nctemp4825;
int nctemp4827=PtreeSetforw(nctemp4821,nctemp4823);
nobody =1;
}
struct tree* nctemp4841= p;
nctempchar1* nctemp4843=PtreeGetdef(nctemp4841);
nctempchar1* nctemp4839= nctemp4843;
struct symbol* nctemp4844= tp;
struct symbol* nctemp4846=SymMkname(nctemp4839,nctemp4844);
fname =nctemp4846;
int nctemp4832 = (fname ==0);
if(nctemp4832)
{
struct tree* nctemp4854= p;
nctempchar1* nctemp4856=PtreeGetdef(nctemp4854);
nctempchar1* nctemp4852= nctemp4856;
struct symbol* nctemp4857= tp;
struct symbol* nctemp4859=SymLookup(nctemp4852,nctemp4857);
qp =nctemp4859;
struct symbol* nctemp4865= qp;
nctempchar1* nctemp4867=SymGetforw(nctemp4865);
nctempchar1* nctemp4863= nctemp4867;
struct nctempchar1 *nctemp4870;
static struct nctempchar1 nctemp4871 = {{ 5}, (char*)"forw\0"};
nctemp4870=&nctemp4871;
nctempchar1* nctemp4868= nctemp4870;
int nctemp4872=LibeStrcmp(nctemp4863,nctemp4868);
int nctemp4860 = (nctemp4872 !=1);
if(nctemp4860)
{
struct tree* nctemp4875= np;
struct nctempchar1 *nctemp4879;
static struct nctempchar1 nctemp4880 = {{ 25}, (char*)"Function already defined\0"};
nctemp4879=&nctemp4880;
nctempchar1* nctemp4877= nctemp4879;
struct tree* nctemp4883= p;
nctempchar1* nctemp4885=PtreeGetdef(nctemp4883);
nctempchar1* nctemp4881= nctemp4885;
int nctemp4886=SemSerror(nctemp4875,nctemp4877,nctemp4881);
}
else{
struct tree* nctemp4888= p;
struct symbol* nctemp4890= qp;
int nctemp4892=SemFdef2(nctemp4888,nctemp4890);
return 1;
}
}
struct symbol* nctemp4895= fname;
struct tree* nctemp4899= p;
nctempchar1* nctemp4901=PtreeGetype(nctemp4899);
nctempchar1* nctemp4897= nctemp4901;
int nctemp4902=SymSetype(nctemp4895,nctemp4897);
struct symbol* nctemp4904= fname;
struct tree* nctemp4908= p;
nctempchar1* nctemp4910=PtreeGetstruct(nctemp4908);
nctempchar1* nctemp4906= nctemp4910;
int nctemp4911=SymSetstruct(nctemp4904,nctemp4906);
struct symbol* nctemp4913= fname;
struct tree* nctemp4917= p;
nctempchar1* nctemp4919=PtreeGetarray(nctemp4917);
nctempchar1* nctemp4915= nctemp4919;
int nctemp4920=SymSetarray(nctemp4913,nctemp4915);
struct symbol* nctemp4922= fname;
struct tree* nctemp4926= p;
int nctemp4928=PtreeGetrank(nctemp4926);
int nctemp4924= nctemp4928;
int nctemp4929=SymSetrank(nctemp4922,nctemp4924);
struct symbol* nctemp4931= fname;
struct nctempchar1 *nctemp4935;
static struct nctempchar1 nctemp4936 = {{ 5}, (char*)"fdef\0"};
nctemp4935=&nctemp4936;
nctempchar1* nctemp4933= nctemp4935;
int nctemp4937=SymSetfunc(nctemp4931,nctemp4933);
int nctemp4938 = (nobody ==1);
if(nctemp4938)
{
struct symbol* nctemp4943= fname;
struct nctempchar1 *nctemp4947;
static struct nctempchar1 nctemp4948 = {{ 5}, (char*)"forw\0"};
nctemp4947=&nctemp4948;
nctempchar1* nctemp4945= nctemp4947;
int nctemp4949=SymSetforw(nctemp4943,nctemp4945);
}
struct tree* nctemp4954= p;
struct tree* nctemp4956=PtreeMvchild(nctemp4954);
np =nctemp4956;
struct symbol* nctemp4961=SymMktable();
ltp =nctemp4961;
struct symbol* nctemp4963= ltp;
struct symbol* nctemp4965=SymSetltp(nctemp4963);
struct nctempchar1 *nctemp4972;
static struct nctempchar1 nctemp4973 = {{ 6}, (char*)"#self\0"};
nctemp4972=&nctemp4973;
nctempchar1* nctemp4970= nctemp4972;
struct symbol* nctemp4974= ltp;
struct symbol* nctemp4976=SymMkname(nctemp4970,nctemp4974);
up =nctemp4976;
struct symbol* nctemp4978= up;
struct tree* nctemp4982= p;
nctempchar1* nctemp4984=PtreeGetdef(nctemp4982);
nctempchar1* nctemp4980= nctemp4984;
int nctemp4985=SymSetfunc(nctemp4978,nctemp4980);
struct tree* nctemp4991= np;
nctempchar1* nctemp4993=PtreeGetname(nctemp4991);
nctempchar1* nctemp4989= nctemp4993;
struct nctempchar1 *nctemp4996;
static struct nctempchar1 nctemp4997 = {{ 8}, (char*)"arglist\0"};
nctemp4996=&nctemp4997;
nctempchar1* nctemp4994= nctemp4996;
int nctemp4998=LibeStrcmp(nctemp4989,nctemp4994);
int nctemp4986 = (nctemp4998 ==1);
if(nctemp4986)
{
struct tree* nctemp5004= np;
struct tree* nctemp5006=PtreeMvsister(nctemp5004);
sp =nctemp5006;
}
else{
sp =np;
}
struct tree* nctemp5016= np;
nctempchar1* nctemp5018=PtreeGetname(nctemp5016);
nctempchar1* nctemp5014= nctemp5018;
struct nctempchar1 *nctemp5021;
static struct nctempchar1 nctemp5022 = {{ 8}, (char*)"arglist\0"};
nctemp5021=&nctemp5022;
nctempchar1* nctemp5019= nctemp5021;
int nctemp5023=LibeStrcmp(nctemp5014,nctemp5019);
int nctemp5011 = (nctemp5023 ==1);
if(nctemp5011)
{
struct tree* nctemp5029= np;
struct tree* nctemp5031=PtreeMvchild(nctemp5029);
np =nctemp5031;
struct nctempchar1 *nctemp5038;
static struct nctempchar1 nctemp5039 = {{ 9}, (char*)"#arglist\0"};
nctemp5038=&nctemp5039;
nctempchar1* nctemp5036= nctemp5038;
struct symbol* nctemp5040= ltp;
struct symbol* nctemp5042=SymMkname(nctemp5036,nctemp5040);
up =nctemp5042;
struct symbol* nctemp5047=SymMktable();
ftp =nctemp5047;
struct symbol* nctemp5049= up;
struct symbol* nctemp5051= ftp;
struct symbol* nctemp5053=SymSetable(nctemp5049,nctemp5051);
struct tree* nctemp5055= np;
struct symbol* nctemp5057= ftp;
int nctemp5059=SemDeclarations(nctemp5055,nctemp5057);
struct symbol* nctemp5064=SymMktable();
fsub =nctemp5064;
struct symbol* nctemp5066= fname;
struct symbol* nctemp5068= fsub;
struct symbol* nctemp5070=SymSetable(nctemp5066,nctemp5068);
struct nctempchar1 *nctemp5077;
static struct nctempchar1 nctemp5078 = {{ 9}, (char*)"#arglist\0"};
nctemp5077=&nctemp5078;
nctempchar1* nctemp5075= nctemp5077;
struct symbol* nctemp5079= fsub;
struct symbol* nctemp5081=SymMkname(nctemp5075,nctemp5079);
arg =nctemp5081;
struct symbol* nctemp5086=SymMktable();
argsub =nctemp5086;
struct symbol* nctemp5088= arg;
struct symbol* nctemp5090= argsub;
struct symbol* nctemp5092=SymSetable(nctemp5088,nctemp5090);
struct symbol* nctemp5094= ftp;
struct symbol* nctemp5096= argsub;
int nctemp5098=SymCpytble(nctemp5094,nctemp5096);
}
struct tree* nctemp5100= sp;
int nctemp5102=SemCompstmnt(nctemp5100);
struct tree* nctemp5104= p;
struct tree* nctemp5106= sp;
int nctemp5108=SemCopyparallel(nctemp5104,nctemp5106);
return 1;
}
int SemExtdecl (struct tree* p)
{
struct tree* sp;
struct tree* np;
struct tree* nctemp5113= p;
nctempchar1* nctemp5115=PtreeGetname(nctemp5113);
nctempchar1* nctemp5111= nctemp5115;
struct nctempchar1 *nctemp5118;
static struct nctempchar1 nctemp5119 = {{ 8}, (char*)"extdecl\0"};
nctemp5118=&nctemp5119;
nctempchar1* nctemp5116= nctemp5118;
int nctemp5120=LibeStrcmp(nctemp5111,nctemp5116);
if(nctemp5120)
{
struct tree* nctemp5125= p;
struct tree* nctemp5127=PtreeMvchild(nctemp5125);
np =nctemp5127;
struct tree* nctemp5129= np;
struct nctempchar1 *nctemp5133;
static struct nctempchar1 nctemp5134 = {{ 7}, (char*)"global\0"};
nctemp5133=&nctemp5134;
nctempchar1* nctemp5131= nctemp5133;
int nctemp5135=PtreeSetglobal(nctemp5129,nctemp5131);
struct tree* nctemp5141= np;
nctempchar1* nctemp5143=PtreeGetname(nctemp5141);
nctempchar1* nctemp5139= nctemp5143;
struct nctempchar1 *nctemp5146;
static struct nctempchar1 nctemp5147 = {{ 7}, (char*)"import\0"};
nctemp5146=&nctemp5147;
nctempchar1* nctemp5144= nctemp5146;
int nctemp5148=LibeStrcmp(nctemp5139,nctemp5144);
int nctemp5136 = (nctemp5148 ==1);
if(nctemp5136)
{
struct tree* nctemp5151= np;
struct symbol* nctemp5155=SymGetetp();
struct symbol* nctemp5153= nctemp5155;
int nctemp5156=SemImport(nctemp5151,nctemp5153);
return 1;
}
int nctemp5158 = (np !=0);
int nctemp5162=nctemp5158;
while(nctemp5162)
{{
struct tree* nctemp5167= np;
struct tree* nctemp5169=PtreeMvchild(nctemp5167);
sp =nctemp5169;
struct tree* nctemp5173= np;
nctempchar1* nctemp5175=PtreeGetarray(nctemp5173);
nctempchar1* nctemp5171= nctemp5175;
struct nctempchar1 *nctemp5178;
static struct nctempchar1 nctemp5179 = {{ 6}, (char*)"array\0"};
nctemp5178=&nctemp5179;
nctempchar1* nctemp5176= nctemp5178;
int nctemp5180=LibeStrcmp(nctemp5171,nctemp5176);
if(nctemp5180)
{
struct tree* nctemp5185= sp;
struct tree* nctemp5187=PtreeMvsister(nctemp5185);
sp =nctemp5187;
}
struct tree* nctemp5191= sp;
nctempchar1* nctemp5193=PtreeGetname(nctemp5191);
nctempchar1* nctemp5189= nctemp5193;
struct nctempchar1 *nctemp5196;
static struct nctempchar1 nctemp5197 = {{ 10}, (char*)"structdec\0"};
nctemp5196=&nctemp5197;
nctempchar1* nctemp5194= nctemp5196;
int nctemp5198=LibeStrcmp(nctemp5189,nctemp5194);
if(nctemp5198)
{
struct tree* nctemp5200= np;
struct symbol* nctemp5204=SymGetetp();
struct symbol* nctemp5202= nctemp5204;
int nctemp5205=SemStructdecl(nctemp5200,nctemp5202);
}
else{
struct tree* nctemp5209= sp;
nctempchar1* nctemp5211=PtreeGetname(nctemp5209);
nctempchar1* nctemp5207= nctemp5211;
struct nctempchar1 *nctemp5214;
static struct nctempchar1 nctemp5215 = {{ 5}, (char*)"fdef\0"};
nctemp5214=&nctemp5215;
nctempchar1* nctemp5212= nctemp5214;
int nctemp5216=LibeStrcmp(nctemp5207,nctemp5212);
if(nctemp5216)
{
struct tree* nctemp5218= np;
struct symbol* nctemp5222=SymGetetp();
struct symbol* nctemp5220= nctemp5222;
int nctemp5223=SemFdef(nctemp5218,nctemp5220);
}
else{
struct tree* nctemp5225= np;
struct symbol* nctemp5229=SymGetetp();
struct symbol* nctemp5227= nctemp5229;
int nctemp5230=SemDeclaration(nctemp5225,nctemp5227);
}
}
struct tree* nctemp5235= np;
struct tree* nctemp5237=PtreeMvsister(nctemp5235);
np =nctemp5237;
}
int nctemp5238 = (np !=0);
nctemp5162=nctemp5238;}}
return 1;
}
int SemSem (struct tree* p,struct symbol* tp)
{
struct symbol* ltp;
struct symbol* nctemp5244= tp;
struct symbol* nctemp5246=SymSetetp(nctemp5244);
ltp =0;
struct symbol* nctemp5252= ltp;
struct symbol* nctemp5254=SymSetltp(nctemp5252);
struct tree* nctemp5256= p;
int nctemp5258=SemExtdecl(nctemp5256);
return 1;
}
int SemWhilestmnt (struct tree* p)
{
struct tree* q;
q =p;
struct tree* nctemp5268= p;
struct tree* nctemp5270=PtreeMvchild(nctemp5268);
p =nctemp5270;
struct tree* nctemp5272= p;
struct tree* nctemp5274=SemExpr(nctemp5272);
struct tree* nctemp5276= p;
int nctemp5278= 1;
int nctemp5280=PtreeSetopexpr(nctemp5276,nctemp5278);
struct tree* nctemp5285= p;
struct tree* nctemp5287=PtreeMvsister(nctemp5285);
p =nctemp5287;
struct tree* nctemp5289= p;
int nctemp5291=SemStmnt(nctemp5289);
struct tree* nctemp5293= q;
struct tree* nctemp5295= p;
int nctemp5297=SemCopyparallel(nctemp5293,nctemp5295);
return 1;
}
int SemForstmnt (struct tree* p)
{
struct tree* q;
q =p;
struct tree* nctemp5307= p;
struct tree* nctemp5309=PtreeMvchild(nctemp5307);
p =nctemp5309;
struct tree* nctemp5311= p;
struct tree* nctemp5313=SemExpr(nctemp5311);
struct tree* nctemp5315= p;
int nctemp5317= 1;
int nctemp5319=PtreeSetopexpr(nctemp5315,nctemp5317);
struct tree* nctemp5324= p;
struct tree* nctemp5326=PtreeMvsister(nctemp5324);
p =nctemp5326;
struct tree* nctemp5328= p;
struct tree* nctemp5330=SemExpr(nctemp5328);
struct tree* nctemp5332= p;
int nctemp5334= 1;
int nctemp5336=PtreeSetopexpr(nctemp5332,nctemp5334);
struct tree* nctemp5341= p;
struct tree* nctemp5343=PtreeMvsister(nctemp5341);
p =nctemp5343;
struct tree* nctemp5345= p;
struct tree* nctemp5347=SemExpr(nctemp5345);
struct tree* nctemp5349= p;
int nctemp5351= 1;
int nctemp5353=PtreeSetopexpr(nctemp5349,nctemp5351);
struct tree* nctemp5358= p;
struct tree* nctemp5360=PtreeMvsister(nctemp5358);
p =nctemp5360;
struct tree* nctemp5362= p;
int nctemp5364=SemStmnt(nctemp5362);
struct tree* nctemp5366= q;
struct tree* nctemp5368= p;
int nctemp5370=SemCopyparallel(nctemp5366,nctemp5368);
return 1;
}
int SemParallelstmnt (struct tree* p)
{
struct tree* sp;
struct tree* rp;
int rank;
rank =0;
struct tree* nctemp5380= p;
struct tree* nctemp5382=PtreeMvchild(nctemp5380);
sp =nctemp5382;
struct tree* nctemp5387= sp;
struct tree* nctemp5389=PtreeMvchild(nctemp5387);
sp =nctemp5389;
int nctemp5390 = (sp !=0);
int nctemp5394=nctemp5390;
while(nctemp5394)
{{
struct tree* nctemp5399= sp;
struct tree* nctemp5401=PtreeMvchild(nctemp5399);
rp =nctemp5401;
struct tree* nctemp5403= rp;
struct tree* nctemp5405=SemExpr(nctemp5403);
struct tree* nctemp5407= rp;
int nctemp5409= 1;
int nctemp5411=PtreeSetopexpr(nctemp5407,nctemp5409);
struct tree* nctemp5416= rp;
struct tree* nctemp5418=PtreeMvsister(nctemp5416);
rp =nctemp5418;
struct tree* nctemp5420= rp;
struct tree* nctemp5422=SemExpr(nctemp5420);
struct tree* nctemp5424= rp;
int nctemp5426= 1;
int nctemp5428=PtreeSetopexpr(nctemp5424,nctemp5426);
struct tree* nctemp5436= rp;
struct tree* nctemp5438=PtreeMvsister(nctemp5436);
rp =nctemp5438;
int nctemp5429 = (rp !=0);
if(nctemp5429)
{
struct tree* nctemp5441= rp;
struct tree* nctemp5443=SemExpr(nctemp5441);
struct tree* nctemp5445= rp;
int nctemp5447= 1;
int nctemp5449=PtreeSetopexpr(nctemp5445,nctemp5447);
}
struct tree* nctemp5453= sp;
struct tree* nctemp5455=PtreeMvsister(nctemp5453);
int nctemp5450 = (nctemp5455 !=0);
if(nctemp5450)
{
struct tree* nctemp5461= sp;
struct tree* nctemp5463=PtreeMvsister(nctemp5461);
rp =nctemp5463;
}
struct tree* nctemp5468= sp;
struct tree* nctemp5470=PtreeMvsister(nctemp5468);
sp =nctemp5470;
int nctemp5479 = rank + 1;
rank =nctemp5479;
}
int nctemp5480 = (sp !=0);
nctemp5394=nctemp5480;}struct tree* nctemp5485= p;
int nctemp5487= rank;
int nctemp5489=PtreeSetrank(nctemp5485,nctemp5487);
struct tree* nctemp5494= p;
struct tree* nctemp5496=PtreeMvchild(nctemp5494);
sp =nctemp5496;
struct tree* nctemp5501= sp;
struct tree* nctemp5503=PtreeMvsister(nctemp5501);
sp =nctemp5503;
struct tree* nctemp5505= sp;
int nctemp5507=SemStmnt(nctemp5505);
return 1;
}
int SemIfstmnt (struct tree* p)
{
struct tree* q;
q =p;
struct tree* nctemp5517= p;
struct tree* nctemp5519=PtreeMvchild(nctemp5517);
p =nctemp5519;
struct tree* nctemp5521= p;
struct tree* nctemp5523=SemExpr(nctemp5521);
struct tree* nctemp5525= p;
int nctemp5527= 1;
int nctemp5529=PtreeSetopexpr(nctemp5525,nctemp5527);
struct tree* nctemp5534= p;
struct tree* nctemp5536=PtreeMvsister(nctemp5534);
p =nctemp5536;
struct tree* nctemp5538= p;
int nctemp5540=SemStmnt(nctemp5538);
struct tree* nctemp5542= q;
struct tree* nctemp5544= p;
int nctemp5546=SemCopyparallel(nctemp5542,nctemp5544);
struct tree* nctemp5554= p;
struct tree* nctemp5556=PtreeMvsister(nctemp5554);
p =nctemp5556;
int nctemp5547 = (p !=0);
if(nctemp5547)
{
struct tree* nctemp5561= p;
nctempchar1* nctemp5563=PtreeGetname(nctemp5561);
nctempchar1* nctemp5559= nctemp5563;
struct nctempchar1 *nctemp5566;
static struct nctempchar1 nctemp5567 = {{ 5}, (char*)"else\0"};
nctemp5566=&nctemp5567;
nctempchar1* nctemp5564= nctemp5566;
int nctemp5568=LibeStrcmp(nctemp5559,nctemp5564);
if(nctemp5568)
{
struct tree* nctemp5573= p;
struct tree* nctemp5575=PtreeMvchild(nctemp5573);
p =nctemp5575;
struct tree* nctemp5577= p;
int nctemp5579=SemStmnt(nctemp5577);
}
}
return 1;
}
int SemReturnstmnt (struct tree* p)
{
struct tree* sp;
struct symbol* up;
struct tree* nctemp5585= p;
struct tree* nctemp5587=PtreeMvchild(nctemp5585);
sp =nctemp5587;
int nctemp5588 = (sp !=0);
if(nctemp5588)
{
struct tree* nctemp5593= sp;
struct tree* nctemp5595=SemExpr(nctemp5593);
struct tree* nctemp5597= sp;
int nctemp5599= 1;
int nctemp5601=PtreeSetopexpr(nctemp5597,nctemp5599);
struct nctempchar1 *nctemp5608;
static struct nctempchar1 nctemp5609 = {{ 6}, (char*)"#self\0"};
nctemp5608=&nctemp5609;
nctempchar1* nctemp5606= nctemp5608;
struct symbol* nctemp5612=SymGetltp();
struct symbol* nctemp5610= nctemp5612;
struct symbol* nctemp5613=SymLookup(nctemp5606,nctemp5610);
up =nctemp5613;
struct symbol* nctemp5620= up;
nctempchar1* nctemp5622=SymGetfunc(nctemp5620);
nctempchar1* nctemp5618= nctemp5622;
struct symbol* nctemp5623=SymLook(nctemp5618);
up =nctemp5623;
struct tree* nctemp5625= p;
struct symbol* nctemp5629= up;
nctempchar1* nctemp5631=SymGetype(nctemp5629);
nctempchar1* nctemp5627= nctemp5631;
int nctemp5632=PtreeSetype(nctemp5625,nctemp5627);
struct tree* nctemp5634= p;
struct symbol* nctemp5638= up;
nctempchar1* nctemp5640=SymGetstruct(nctemp5638);
nctempchar1* nctemp5636= nctemp5640;
int nctemp5641=PtreeSetstruct(nctemp5634,nctemp5636);
struct tree* nctemp5643= p;
struct symbol* nctemp5647= up;
nctempchar1* nctemp5649=SymGetarray(nctemp5647);
nctempchar1* nctemp5645= nctemp5649;
int nctemp5650=PtreeSetarray(nctemp5643,nctemp5645);
struct tree* nctemp5652= p;
struct tree* nctemp5656= sp;
nctempchar1* nctemp5658=PtreeGetref(nctemp5656);
nctempchar1* nctemp5654= nctemp5658;
int nctemp5659=PtreeSetref(nctemp5652,nctemp5654);
struct tree* nctemp5661= p;
struct symbol* nctemp5665= up;
int nctemp5667=SymGetrank(nctemp5665);
int nctemp5663= nctemp5667;
int nctemp5668=PtreeSetrank(nctemp5661,nctemp5663);
struct tree* nctemp5672= p;
struct tree* nctemp5674= sp;
int nctemp5676=SemComparetype(nctemp5672,nctemp5674);
int nctemp5669 = (nctemp5676 ==0);
if(nctemp5669)
{
struct tree* nctemp5679= p;
struct nctempchar1 *nctemp5683;
static struct nctempchar1 nctemp5684 = {{ 26}, (char*)"Return type is incorrect \0"};
nctemp5683=&nctemp5684;
nctempchar1* nctemp5681= nctemp5683;
struct nctempchar1 *nctemp5687;
static struct nctempchar1 nctemp5688 = {{ 2}, (char*)" \0"};
nctemp5687=&nctemp5688;
nctempchar1* nctemp5685= nctemp5687;
int nctemp5689=SemSerror(nctemp5679,nctemp5681,nctemp5685);
}
}
return 1;
}
int SemStmnt (struct tree* p)
{
struct tree* q;
int parflag;
parflag =0;
q =p;
struct tree* nctemp5702= p;
nctempchar1* nctemp5704=PtreeGetname(nctemp5702);
nctempchar1* nctemp5700= nctemp5704;
struct nctempchar1 *nctemp5707;
static struct nctempchar1 nctemp5708 = {{ 13}, (char*)"declarations\0"};
nctemp5707=&nctemp5708;
nctempchar1* nctemp5705= nctemp5707;
int nctemp5709=LibeStrcmp(nctemp5700,nctemp5705);
if(nctemp5709)
{
struct tree* nctemp5711= p;
struct symbol* nctemp5715=SymGetltp();
struct symbol* nctemp5713= nctemp5715;
int nctemp5716=SemDeclarations(nctemp5711,nctemp5713);
struct tree* nctemp5721= p;
struct tree* nctemp5723=PtreeMvsister(nctemp5721);
p =nctemp5723;
}
int nctemp5724 = (p !=0);
int nctemp5728=nctemp5724;
while(nctemp5728)
{{
struct tree* nctemp5732= p;
nctempchar1* nctemp5734=PtreeGetname(nctemp5732);
nctempchar1* nctemp5730= nctemp5734;
struct nctempchar1 *nctemp5737;
static struct nctempchar1 nctemp5738 = {{ 5}, (char*)"expr\0"};
nctemp5737=&nctemp5738;
nctempchar1* nctemp5735= nctemp5737;
int nctemp5739=LibeStrcmp(nctemp5730,nctemp5735);
if(nctemp5739)
{
struct tree* nctemp5741= p;
struct tree* nctemp5743=SemExpr(nctemp5741);
struct tree* nctemp5745= p;
int nctemp5747= 1;
int nctemp5749=PtreeSetopexpr(nctemp5745,nctemp5747);
}
struct tree* nctemp5753= p;
nctempchar1* nctemp5755=PtreeGetname(nctemp5753);
nctempchar1* nctemp5751= nctemp5755;
struct nctempchar1 *nctemp5758;
static struct nctempchar1 nctemp5759 = {{ 10}, (char*)"compstmnt\0"};
nctemp5758=&nctemp5759;
nctempchar1* nctemp5756= nctemp5758;
int nctemp5760=LibeStrcmp(nctemp5751,nctemp5756);
if(nctemp5760)
{
struct tree* nctemp5762= p;
int nctemp5764=SemCompstmnt(nctemp5762);
}
struct tree* nctemp5768= p;
nctempchar1* nctemp5770=PtreeGetname(nctemp5768);
nctempchar1* nctemp5766= nctemp5770;
struct nctempchar1 *nctemp5773;
static struct nctempchar1 nctemp5774 = {{ 6}, (char*)"while\0"};
nctemp5773=&nctemp5774;
nctempchar1* nctemp5771= nctemp5773;
int nctemp5775=LibeStrcmp(nctemp5766,nctemp5771);
if(nctemp5775)
{
struct tree* nctemp5777= p;
int nctemp5779=SemWhilestmnt(nctemp5777);
}
struct tree* nctemp5783= p;
nctempchar1* nctemp5785=PtreeGetname(nctemp5783);
nctempchar1* nctemp5781= nctemp5785;
struct nctempchar1 *nctemp5788;
static struct nctempchar1 nctemp5789 = {{ 4}, (char*)"for\0"};
nctemp5788=&nctemp5789;
nctempchar1* nctemp5786= nctemp5788;
int nctemp5790=LibeStrcmp(nctemp5781,nctemp5786);
if(nctemp5790)
{
struct tree* nctemp5792= p;
int nctemp5794=SemForstmnt(nctemp5792);
}
struct tree* nctemp5798= p;
nctempchar1* nctemp5800=PtreeGetname(nctemp5798);
nctempchar1* nctemp5796= nctemp5800;
struct nctempchar1 *nctemp5803;
static struct nctempchar1 nctemp5804 = {{ 9}, (char*)"parallel\0"};
nctemp5803=&nctemp5804;
nctempchar1* nctemp5801= nctemp5803;
int nctemp5805=LibeStrcmp(nctemp5796,nctemp5801);
if(nctemp5805)
{
parflag =1;
}
struct tree* nctemp5813= p;
nctempchar1* nctemp5815=PtreeGetname(nctemp5813);
nctempchar1* nctemp5811= nctemp5815;
struct nctempchar1 *nctemp5818;
static struct nctempchar1 nctemp5819 = {{ 3}, (char*)"if\0"};
nctemp5818=&nctemp5819;
nctempchar1* nctemp5816= nctemp5818;
int nctemp5820=LibeStrcmp(nctemp5811,nctemp5816);
if(nctemp5820)
{
struct tree* nctemp5822= p;
int nctemp5824=SemIfstmnt(nctemp5822);
}
struct tree* nctemp5828= p;
nctempchar1* nctemp5830=PtreeGetname(nctemp5828);
nctempchar1* nctemp5826= nctemp5830;
struct nctempchar1 *nctemp5833;
static struct nctempchar1 nctemp5834 = {{ 7}, (char*)"return\0"};
nctemp5833=&nctemp5834;
nctempchar1* nctemp5831= nctemp5833;
int nctemp5835=LibeStrcmp(nctemp5826,nctemp5831);
if(nctemp5835)
{
struct tree* nctemp5837= p;
int nctemp5839=SemReturnstmnt(nctemp5837);
}
struct tree* nctemp5844= p;
struct tree* nctemp5846=PtreeMvsister(nctemp5844);
p =nctemp5846;
}
int nctemp5847 = (p !=0);
nctemp5728=nctemp5847;}int nctemp5851 = (parflag ==1);
if(nctemp5851)
{
struct tree* nctemp5856= q;
struct nctempchar1 *nctemp5860;
static struct nctempchar1 nctemp5861 = {{ 9}, (char*)"parallel\0"};
nctemp5860=&nctemp5861;
nctempchar1* nctemp5858= nctemp5860;
int nctemp5862=PtreeSetparallel(nctemp5856,nctemp5858);
}
return 1;
}
int SemCompstmnt (struct tree* p)
{
struct tree* q;
int parflag;
parflag =0;
q =p;
struct tree* nctemp5876= p;
struct tree* nctemp5878=PtreeMvchild(nctemp5876);
p =nctemp5878;
int nctemp5879 = (p ==0);
if(nctemp5879)
{
return 1;
}
struct tree* nctemp5887= p;
nctempchar1* nctemp5889=PtreeGetname(nctemp5887);
nctempchar1* nctemp5885= nctemp5889;
struct nctempchar1 *nctemp5892;
static struct nctempchar1 nctemp5893 = {{ 13}, (char*)"declarations\0"};
nctemp5892=&nctemp5893;
nctempchar1* nctemp5890= nctemp5892;
int nctemp5894=LibeStrcmp(nctemp5885,nctemp5890);
if(nctemp5894)
{
struct tree* nctemp5898= p;
struct tree* nctemp5900=PtreeMvchild(nctemp5898);
struct tree* nctemp5896= nctemp5900;
struct symbol* nctemp5903=SymGetltp();
struct symbol* nctemp5901= nctemp5903;
int nctemp5904=SemDeclarations(nctemp5896,nctemp5901);
struct tree* nctemp5909= p;
struct tree* nctemp5911=PtreeMvsister(nctemp5909);
p =nctemp5911;
}
int nctemp5912 = (p !=0);
int nctemp5916=nctemp5912;
while(nctemp5916)
{{
struct tree* nctemp5920= p;
nctempchar1* nctemp5922=PtreeGetname(nctemp5920);
nctempchar1* nctemp5918= nctemp5922;
struct nctempchar1 *nctemp5925;
static struct nctempchar1 nctemp5926 = {{ 5}, (char*)"expr\0"};
nctemp5925=&nctemp5926;
nctempchar1* nctemp5923= nctemp5925;
int nctemp5927=LibeStrcmp(nctemp5918,nctemp5923);
if(nctemp5927)
{
struct tree* nctemp5929= p;
struct tree* nctemp5931=SemExpr(nctemp5929);
struct tree* nctemp5933= p;
int nctemp5935= 1;
int nctemp5937=PtreeSetopexpr(nctemp5933,nctemp5935);
}
struct tree* nctemp5941= p;
nctempchar1* nctemp5943=PtreeGetname(nctemp5941);
nctempchar1* nctemp5939= nctemp5943;
struct nctempchar1 *nctemp5946;
static struct nctempchar1 nctemp5947 = {{ 6}, (char*)"while\0"};
nctemp5946=&nctemp5947;
nctempchar1* nctemp5944= nctemp5946;
int nctemp5948=LibeStrcmp(nctemp5939,nctemp5944);
if(nctemp5948)
{
struct tree* nctemp5950= p;
int nctemp5952=SemWhilestmnt(nctemp5950);
}
struct tree* nctemp5956= p;
nctempchar1* nctemp5958=PtreeGetname(nctemp5956);
nctempchar1* nctemp5954= nctemp5958;
struct nctempchar1 *nctemp5961;
static struct nctempchar1 nctemp5962 = {{ 4}, (char*)"for\0"};
nctemp5961=&nctemp5962;
nctempchar1* nctemp5959= nctemp5961;
int nctemp5963=LibeStrcmp(nctemp5954,nctemp5959);
if(nctemp5963)
{
struct tree* nctemp5965= p;
int nctemp5967=SemForstmnt(nctemp5965);
}
struct tree* nctemp5971= p;
nctempchar1* nctemp5973=PtreeGetname(nctemp5971);
nctempchar1* nctemp5969= nctemp5973;
struct nctempchar1 *nctemp5976;
static struct nctempchar1 nctemp5977 = {{ 9}, (char*)"parallel\0"};
nctemp5976=&nctemp5977;
nctempchar1* nctemp5974= nctemp5976;
int nctemp5978=LibeStrcmp(nctemp5969,nctemp5974);
if(nctemp5978)
{
struct tree* nctemp5980= p;
int nctemp5982=SemParallelstmnt(nctemp5980);
struct tree* nctemp5984= p;
struct nctempchar1 *nctemp5988;
static struct nctempchar1 nctemp5989 = {{ 9}, (char*)"parallel\0"};
nctemp5988=&nctemp5989;
nctempchar1* nctemp5986= nctemp5988;
int nctemp5990=PtreeSetparallel(nctemp5984,nctemp5986);
}
struct tree* nctemp5994= p;
nctempchar1* nctemp5996=PtreeGetname(nctemp5994);
nctempchar1* nctemp5992= nctemp5996;
struct nctempchar1 *nctemp5999;
static struct nctempchar1 nctemp6000 = {{ 3}, (char*)"if\0"};
nctemp5999=&nctemp6000;
nctempchar1* nctemp5997= nctemp5999;
int nctemp6001=LibeStrcmp(nctemp5992,nctemp5997);
if(nctemp6001)
{
struct tree* nctemp6003= p;
int nctemp6005=SemIfstmnt(nctemp6003);
}
struct tree* nctemp6009= p;
nctempchar1* nctemp6011=PtreeGetname(nctemp6009);
nctempchar1* nctemp6007= nctemp6011;
struct nctempchar1 *nctemp6014;
static struct nctempchar1 nctemp6015 = {{ 7}, (char*)"return\0"};
nctemp6014=&nctemp6015;
nctempchar1* nctemp6012= nctemp6014;
int nctemp6016=LibeStrcmp(nctemp6007,nctemp6012);
if(nctemp6016)
{
struct tree* nctemp6018= p;
int nctemp6020=SemReturnstmnt(nctemp6018);
}
struct tree* nctemp6024= p;
nctempchar1* nctemp6026=PtreeGetparallel(nctemp6024);
nctempchar1* nctemp6022= nctemp6026;
struct nctempchar1 *nctemp6029;
static struct nctempchar1 nctemp6030 = {{ 9}, (char*)"parallel\0"};
nctemp6029=&nctemp6030;
nctempchar1* nctemp6027= nctemp6029;
int nctemp6031=LibeStrcmp(nctemp6022,nctemp6027);
if(nctemp6031)
{
parflag =1;
}
struct tree* nctemp6040= p;
struct tree* nctemp6042=PtreeMvsister(nctemp6040);
p =nctemp6042;
}
int nctemp6043 = (p !=0);
nctemp5916=nctemp6043;}int nctemp6047 = (parflag ==1);
if(nctemp6047)
{
struct tree* nctemp6052= q;
struct nctempchar1 *nctemp6056;
static struct nctempchar1 nctemp6057 = {{ 9}, (char*)"parallel\0"};
nctemp6056=&nctemp6057;
nctempchar1* nctemp6054= nctemp6056;
int nctemp6058=PtreeSetparallel(nctemp6052,nctemp6054);
}
return 1;
}
}
