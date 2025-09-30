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
struct symbol* SymEtp;
struct symbol* SymLtp;
struct symbol* SymStp;
struct symbol* SymGetetp ()
{
return SymEtp;
}
int SymIstemp (nctempchar1 *name)
{
nctempchar1 *t;
int lnc;
int i;
struct nctempchar1 *nctemp11;
static struct nctempchar1 nctemp12 = {{ 7}, (char*)"nctemp\0"};
nctemp11=&nctemp12;
int nctemp9=nctemp11->d[0];int nctemp15 = nctemp9 - 1;
lnc =nctemp15;
int nctemp19=name->d[0];int nctemp16 = (nctemp19 < lnc);
if(nctemp16)
{
return 0;
}
struct nctempchar1 *nctemp32;
static struct nctempchar1 nctemp33 = {{ 7}, (char*)"nctemp\0"};
nctemp32=&nctemp33;
nctempchar1* nctemp30= nctemp32;
nctempchar1* nctemp34=LibeStrsave(nctemp30);
t=nctemp34;
for(i = 0;i < lnc;i = (i + 1)){
int nctemp38=i;
int nctemp41=i;
int nctemp35 = (name->a[nctemp38] !=t->a[nctemp41]);
if(nctemp35)
{
return 0;
}
}
RunFree(t->a);
RunFree(t);
return 1;
}
struct symbol* SymSetetp (struct symbol* etp)
{
SymEtp = etp;
return SymEtp;
}
struct symbol* SymGetltp ()
{
return SymLtp;
}
struct symbol* SymSetltp (struct symbol* ltp)
{
SymLtp = ltp;
return SymLtp;
}
struct symbol* SymGetstp ()
{
return SymStp;
}
struct symbol* SymSetstp (struct symbol* stp)
{
SymStp = stp;
return SymStp;
}
struct symbol* SymLookup (nctempchar1 *s,struct symbol* tp)
{
struct symbol* np;
np = tp;
int nctemp53 = (np !=0);
int nctemp57=nctemp53;
while(nctemp57)
{{
nctempchar1* nctemp61= s;
nctempchar1* nctemp64= np->name;
int nctemp67=LibeStrcmp(nctemp61,nctemp64);
int nctemp58 = (nctemp67 ==1);
if(nctemp58)
{
return np;
}
np = np->next;
}
int nctemp70 = (np !=0);
nctemp57=nctemp70;}np =0;
return np;
}
struct symbol* SymMkname (nctempchar1 *name,struct symbol* tp)
{
struct symbol* np;
struct symbol* lp;
nctempchar1* nctemp85= name;
struct symbol* nctemp88= tp;
struct symbol* nctemp90=SymLookup(nctemp85,nctemp88);
np =nctemp90;
int nctemp78 = (np ==0);
if(nctemp78)
{
struct symbol *nctemp96=(struct symbol*)RunMalloc(sizeof(struct symbol));
np =nctemp96;
int nctemp98 = (np ==0);
if(nctemp98)
{
return np;
}
nctempchar1* nctemp111= name;
nctempchar1* nctemp114=LibeStrsave(nctemp111);
np->name=nctemp114;
nctempchar1 *nctemp104 =np->name;
int nctemp103 =(nctemp104==0);
if(nctemp103)
{
np =0;
return np;
}
lp = tp->last;
lp->next = np;
tp->last = np;
np->next = 0;
struct nctempchar1 *nctemp127;
static struct nctempchar1 nctemp128 = {{ 5}, (char*)"void\0"};
nctemp127=&nctemp128;
nctempchar1* nctemp125= nctemp127;
nctempchar1* nctemp129=LibeStrsave(nctemp125);
np->type=nctemp129;
struct nctempchar1 *nctemp137;
static struct nctempchar1 nctemp138 = {{ 5}, (char*)"void\0"};
nctemp137=&nctemp138;
nctempchar1* nctemp135= nctemp137;
nctempchar1* nctemp139=LibeStrsave(nctemp135);
np->func=nctemp139;
struct nctempchar1 *nctemp147;
static struct nctempchar1 nctemp148 = {{ 5}, (char*)"void\0"};
nctemp147=&nctemp148;
nctempchar1* nctemp145= nctemp147;
nctempchar1* nctemp149=LibeStrsave(nctemp145);
np->array=nctemp149;
struct nctempchar1 *nctemp157;
static struct nctempchar1 nctemp158 = {{ 5}, (char*)"void\0"};
nctemp157=&nctemp158;
nctempchar1* nctemp155= nctemp157;
nctempchar1* nctemp159=LibeStrsave(nctemp155);
np->structure=nctemp159;
np->tbl = 0;
struct nctempchar1 *nctemp167;
static struct nctempchar1 nctemp168 = {{ 5}, (char*)"void\0"};
nctemp167=&nctemp168;
nctempchar1* nctemp165= nctemp167;
nctempchar1* nctemp169=LibeStrsave(nctemp165);
np->ident=nctemp169;
np->rank = 0;
struct nctempchar1 *nctemp177;
static struct nctempchar1 nctemp178 = {{ 5}, (char*)"void\0"};
nctemp177=&nctemp178;
nctempchar1* nctemp175= nctemp177;
nctempchar1* nctemp179=LibeStrsave(nctemp175);
np->lval=nctemp179;
struct nctempchar1 *nctemp187;
static struct nctempchar1 nctemp188 = {{ 5}, (char*)"void\0"};
nctemp187=&nctemp188;
nctempchar1* nctemp185= nctemp187;
nctempchar1* nctemp189=LibeStrsave(nctemp185);
np->ref=nctemp189;
struct nctempchar1 *nctemp197;
static struct nctempchar1 nctemp198 = {{ 5}, (char*)"void\0"};
nctemp197=&nctemp198;
nctempchar1* nctemp195= nctemp197;
nctempchar1* nctemp199=LibeStrsave(nctemp195);
np->descr=nctemp199;
struct nctempchar1 *nctemp207;
static struct nctempchar1 nctemp208 = {{ 5}, (char*)"void\0"};
nctemp207=&nctemp208;
nctempchar1* nctemp205= nctemp207;
nctempchar1* nctemp209=LibeStrsave(nctemp205);
np->global=nctemp209;
struct nctempchar1 *nctemp217;
static struct nctempchar1 nctemp218 = {{ 5}, (char*)"void\0"};
nctemp217=&nctemp218;
nctempchar1* nctemp215= nctemp217;
nctempchar1* nctemp219=LibeStrsave(nctemp215);
np->module=nctemp219;
struct nctempchar1 *nctemp227;
static struct nctempchar1 nctemp228 = {{ 5}, (char*)"void\0"};
nctemp227=&nctemp228;
nctempchar1* nctemp225= nctemp227;
nctempchar1* nctemp229=LibeStrsave(nctemp225);
np->forw=nctemp229;
np->emit = 1;
}
else{
np = 0;
}
return np;
}
struct symbol* SymGetable (struct symbol* np)
{
return np->tbl;
}
struct symbol* SymRmname (nctempchar1 *name,struct symbol* tp)
{
struct symbol* np;
struct symbol* sp;
struct symbol* prev;
np = tp;
sp = 0;
prev = np;
int nctemp232 = (np !=0);
int nctemp236=nctemp232;
while(nctemp236)
{{
nctempchar1* nctemp240= name;
nctempchar1* nctemp243= np->name;
int nctemp246=LibeStrcmp(nctemp240,nctemp243);
int nctemp237 = (nctemp246 ==1);
if(nctemp237)
{
sp = np;
np = 0;
}
else{
prev = np;
np = np->next;
}
}
int nctemp248 = (np !=0);
nctemp236=nctemp248;}np = sp;
int nctemp252 = (np ==0);
if(nctemp252)
{
return np;
}
int nctemp257 = (np->next ==0);
if(nctemp257)
{
prev->last = prev;
}
prev->next = np->next;
RunFree(np->name->a);
RunFree(np->name);
RunFree(np->type->a);
RunFree(np->type);
RunFree(np->func->a);
RunFree(np->func);
RunFree(np->array->a);
RunFree(np->array);
RunFree(np->structure->a);
RunFree(np->structure);
RunFree(np->ident->a);
RunFree(np->ident);
RunFree(np->lval->a);
RunFree(np->lval);
RunFree(np->ref->a);
RunFree(np->ref);
RunFree(np->descr->a);
RunFree(np->descr);
return prev;
}
nctempchar1 * SymGetname (struct symbol* np)
{
return np->name;
}
struct symbol* SymMktable ()
{
struct symbol* tp;
struct symbol *nctemp297=(struct symbol*)RunMalloc(sizeof(struct symbol));
tp =nctemp297;
int nctemp299 = (tp ==0);
if(nctemp299)
{
return tp;
}
struct nctempchar1 *nctemp311;
static struct nctempchar1 nctemp312 = {{ 7}, (char*)"#first\0"};
nctemp311=&nctemp312;
nctempchar1* nctemp309= nctemp311;
nctempchar1* nctemp313=LibeStrsave(nctemp309);
tp->name=nctemp313;
struct nctempchar1 *nctemp321;
static struct nctempchar1 nctemp322 = {{ 5}, (char*)"void\0"};
nctemp321=&nctemp322;
nctempchar1* nctemp319= nctemp321;
nctempchar1* nctemp323=LibeStrsave(nctemp319);
tp->type=nctemp323;
tp->tbl = 0;
struct nctempchar1 *nctemp331;
static struct nctempchar1 nctemp332 = {{ 5}, (char*)"void\0"};
nctemp331=&nctemp332;
nctempchar1* nctemp329= nctemp331;
nctempchar1* nctemp333=LibeStrsave(nctemp329);
tp->func=nctemp333;
struct nctempchar1 *nctemp341;
static struct nctempchar1 nctemp342 = {{ 5}, (char*)"void\0"};
nctemp341=&nctemp342;
nctempchar1* nctemp339= nctemp341;
nctempchar1* nctemp343=LibeStrsave(nctemp339);
tp->ref=nctemp343;
struct nctempchar1 *nctemp351;
static struct nctempchar1 nctemp352 = {{ 5}, (char*)"void\0"};
nctemp351=&nctemp352;
nctempchar1* nctemp349= nctemp351;
nctempchar1* nctemp353=LibeStrsave(nctemp349);
tp->descr=nctemp353;
struct nctempchar1 *nctemp361;
static struct nctempchar1 nctemp362 = {{ 5}, (char*)"void\0"};
nctemp361=&nctemp362;
nctempchar1* nctemp359= nctemp361;
nctempchar1* nctemp363=LibeStrsave(nctemp359);
tp->array=nctemp363;
struct nctempchar1 *nctemp371;
static struct nctempchar1 nctemp372 = {{ 5}, (char*)"void\0"};
nctemp371=&nctemp372;
nctempchar1* nctemp369= nctemp371;
nctempchar1* nctemp373=LibeStrsave(nctemp369);
tp->structure=nctemp373;
struct nctempchar1 *nctemp381;
static struct nctempchar1 nctemp382 = {{ 5}, (char*)"void\0"};
nctemp381=&nctemp382;
nctempchar1* nctemp379= nctemp381;
nctempchar1* nctemp383=LibeStrsave(nctemp379);
tp->ident=nctemp383;
struct nctempchar1 *nctemp391;
static struct nctempchar1 nctemp392 = {{ 5}, (char*)"void\0"};
nctemp391=&nctemp392;
nctempchar1* nctemp389= nctemp391;
nctempchar1* nctemp393=LibeStrsave(nctemp389);
tp->lval=nctemp393;
struct nctempchar1 *nctemp401;
static struct nctempchar1 nctemp402 = {{ 5}, (char*)"void\0"};
nctemp401=&nctemp402;
nctempchar1* nctemp399= nctemp401;
nctempchar1* nctemp403=LibeStrsave(nctemp399);
tp->global=nctemp403;
struct nctempchar1 *nctemp411;
static struct nctempchar1 nctemp412 = {{ 5}, (char*)"void\0"};
nctemp411=&nctemp412;
nctempchar1* nctemp409= nctemp411;
nctempchar1* nctemp413=LibeStrsave(nctemp409);
tp->module=nctemp413;
struct nctempchar1 *nctemp421;
static struct nctempchar1 nctemp422 = {{ 5}, (char*)"void\0"};
nctemp421=&nctemp422;
nctempchar1* nctemp419= nctemp421;
nctempchar1* nctemp423=LibeStrsave(nctemp419);
tp->forw=nctemp423;
tp->emit = 1;
tp->next = 0;
tp->last = tp;
return tp;
}
struct symbol* SymMvnext (struct symbol* np)
{
int nctemp425 = (np ==0);
if(nctemp425)
{
return np;
}
else{
return np->next;
}
}
struct symbol* SymSetable (struct symbol* np,struct symbol* tp)
{
np->tbl = tp;
return np;
}
int SymSetname (struct symbol* p,nctempchar1 *name)
{
nctempchar1 *nctemp436 =name;
int nctemp435 =(nctemp436!=0);
int nctemp441 = (p !=0);
int nctemp432 = (nctemp435 && nctemp441);
if(nctemp432)
{
RunFree(p->name->a);
RunFree(p->name);
nctempchar1* nctemp453= name;
nctempchar1* nctemp456=LibeStrsave(nctemp453);
p->name=nctemp456;
}
return 1;
}
int SymSetype (struct symbol* p,nctempchar1 *type)
{
nctempchar1 *nctemp462 =type;
int nctemp461 =(nctemp462!=0);
int nctemp467 = (p !=0);
int nctemp458 = (nctemp461 && nctemp467);
if(nctemp458)
{
RunFree(p->type->a);
RunFree(p->type);
nctempchar1* nctemp479= type;
nctempchar1* nctemp482=LibeStrsave(nctemp479);
p->type=nctemp482;
}
return 1;
}
nctempchar1 * SymGetype (struct symbol* np)
{
return np->type;
}
int SymSetfunc (struct symbol* p,nctempchar1 *func)
{
nctempchar1 *nctemp490 =func;
int nctemp489 =(nctemp490!=0);
int nctemp495 = (p !=0);
int nctemp486 = (nctemp489 && nctemp495);
if(nctemp486)
{
RunFree(p->func->a);
RunFree(p->func);
nctempchar1* nctemp507= func;
nctempchar1* nctemp510=LibeStrsave(nctemp507);
p->func=nctemp510;
}
return 1;
}
nctempchar1 * SymGetfunc (struct symbol* np)
{
return np->func;
}
int SymSetarray (struct symbol* p,nctempchar1 *array)
{
nctempchar1 *nctemp518 =array;
int nctemp517 =(nctemp518!=0);
int nctemp523 = (p !=0);
int nctemp514 = (nctemp517 && nctemp523);
if(nctemp514)
{
RunFree(p->array->a);
RunFree(p->array);
nctempchar1* nctemp535= array;
nctempchar1* nctemp538=LibeStrsave(nctemp535);
p->array=nctemp538;
}
return 1;
}
nctempchar1 * SymGetarray (struct symbol* np)
{
return np->array;
}
int SymSetstruct (struct symbol* p,nctempchar1 *structure)
{
nctempchar1 *nctemp546 =structure;
int nctemp545 =(nctemp546!=0);
int nctemp551 = (p !=0);
int nctemp542 = (nctemp545 && nctemp551);
if(nctemp542)
{
RunFree(p->structure->a);
RunFree(p->structure);
nctempchar1* nctemp563= structure;
nctempchar1* nctemp566=LibeStrsave(nctemp563);
p->structure=nctemp566;
}
return 1;
}
nctempchar1 * SymGetstruct (struct symbol* np)
{
return np->structure;
}
int SymSetident (struct symbol* p,nctempchar1 *ident)
{
nctempchar1 *nctemp574 =ident;
int nctemp573 =(nctemp574!=0);
int nctemp579 = (p !=0);
int nctemp570 = (nctemp573 && nctemp579);
if(nctemp570)
{
RunFree(p->ident->a);
RunFree(p->ident);
nctempchar1* nctemp591= ident;
nctempchar1* nctemp594=LibeStrsave(nctemp591);
p->ident=nctemp594;
}
return 1;
}
nctempchar1 * SymGetident (struct symbol* np)
{
return np->ident;
}
int SymSetlval (struct symbol* p,nctempchar1 *lval)
{
nctempchar1 *nctemp602 =lval;
int nctemp601 =(nctemp602!=0);
int nctemp607 = (p !=0);
int nctemp598 = (nctemp601 && nctemp607);
if(nctemp598)
{
RunFree(p->lval->a);
RunFree(p->lval);
nctempchar1* nctemp619= lval;
nctempchar1* nctemp622=LibeStrsave(nctemp619);
p->lval=nctemp622;
}
return 1;
}
nctempchar1 * SymGetlval (struct symbol* np)
{
return np->lval;
}
int SymSetrank (struct symbol* np,int rank)
{
np->rank = rank;
return 1;
}
int SymGetrank (struct symbol* np)
{
return np->rank;
}
int SymSetemit (struct symbol* np,int emit)
{
np->emit = emit;
return 1;
}
int SymGetemit (struct symbol* np)
{
return np->emit;
}
int SymSetref (struct symbol* p,nctempchar1 *ref)
{
nctempchar1 *nctemp634 =ref;
int nctemp633 =(nctemp634!=0);
int nctemp639 = (p !=0);
int nctemp630 = (nctemp633 && nctemp639);
if(nctemp630)
{
RunFree(p->ref->a);
RunFree(p->ref);
nctempchar1* nctemp651= ref;
nctempchar1* nctemp654=LibeStrsave(nctemp651);
p->ref=nctemp654;
}
return 1;
}
nctempchar1 * SymGetref (struct symbol* np)
{
return np->ref;
}
int SymSetmodule (struct symbol* p,nctempchar1 *module)
{
nctempchar1 *nctemp662 =module;
int nctemp661 =(nctemp662!=0);
int nctemp667 = (p !=0);
int nctemp658 = (nctemp661 && nctemp667);
if(nctemp658)
{
RunFree(p->module->a);
RunFree(p->module);
nctempchar1* nctemp679= module;
nctempchar1* nctemp682=LibeStrsave(nctemp679);
p->module=nctemp682;
}
return 1;
}
nctempchar1 * SymGetmodule (struct symbol* np)
{
return np->module;
}
int SymSetforw (struct symbol* p,nctempchar1 *forw)
{
nctempchar1 *nctemp690 =forw;
int nctemp689 =(nctemp690!=0);
int nctemp695 = (p !=0);
int nctemp686 = (nctemp689 && nctemp695);
if(nctemp686)
{
RunFree(p->forw->a);
RunFree(p->forw);
nctempchar1* nctemp707= forw;
nctempchar1* nctemp710=LibeStrsave(nctemp707);
p->forw=nctemp710;
}
return 1;
}
nctempchar1 * SymGetforw (struct symbol* np)
{
return np->forw;
}
int SymSetdescr (struct symbol* p,nctempchar1 *descr)
{
nctempchar1 *nctemp718 =descr;
int nctemp717 =(nctemp718!=0);
int nctemp723 = (p !=0);
int nctemp714 = (nctemp717 && nctemp723);
if(nctemp714)
{
RunFree(p->descr->a);
RunFree(p->descr);
nctempchar1* nctemp735= descr;
nctempchar1* nctemp738=LibeStrsave(nctemp735);
p->descr=nctemp738;
}
return 1;
}
nctempchar1 * SymGetdescr (struct symbol* np)
{
return np->descr;
}
int SymSetglobal (struct symbol* p,nctempchar1 *global)
{
nctempchar1 *nctemp746 =global;
int nctemp745 =(nctemp746!=0);
int nctemp751 = (p !=0);
int nctemp742 = (nctemp745 && nctemp751);
if(nctemp742)
{
RunFree(p->global->a);
RunFree(p->global);
nctempchar1* nctemp763= global;
nctempchar1* nctemp766=LibeStrsave(nctemp763);
p->global=nctemp766;
}
return 1;
}
nctempchar1 * SymGetglobal (struct symbol* np)
{
return np->global;
}
int SymRmtable (struct symbol* p)
{
struct symbol* next;
struct symbol* prev;
int nctemp770 = (p ==0);
if(nctemp770)
{
return 0;
}
prev = 0;
int nctemp775 = (p !=0);
int nctemp779=nctemp775;
while(nctemp779)
{{
next = p->next;
struct nctempchar1 *nctemp785;
static struct nctempchar1 nctemp786 = {{ 9}, (char*)"#arglist\0"};
nctemp785=&nctemp786;
nctempchar1* nctemp783= nctemp785;
nctempchar1* nctemp787= p->name;
int nctemp790=LibeStrcmp(nctemp783,nctemp787);
int nctemp780 = (nctemp790 ==0);
if(nctemp780)
{
struct nctempchar1 *nctemp797;
static struct nctempchar1 nctemp798 = {{ 6}, (char*)"#self\0"};
nctemp797=&nctemp798;
nctempchar1* nctemp795= nctemp797;
nctempchar1* nctemp799= p->name;
int nctemp802=LibeStrcmp(nctemp795,nctemp799);
int nctemp792 = (nctemp802 ==0);
if(nctemp792)
{
struct nctempchar1 *nctemp809;
static struct nctempchar1 nctemp810 = {{ 7}, (char*)"#first\0"};
nctemp809=&nctemp810;
nctempchar1* nctemp807= nctemp809;
nctempchar1* nctemp811= p->name;
int nctemp814=LibeStrcmp(nctemp807,nctemp811);
int nctemp804 = (nctemp814 ==0);
if(nctemp804)
{
int nctemp816 = (p->tbl !=0);
if(nctemp816)
{
struct symbol* nctemp821= p->tbl;
int nctemp823=SymRmtable(nctemp821);
p->tbl = 0;
}
int nctemp824 = (prev !=0);
if(nctemp824)
{
prev->next = next;
}
RunFree(p->name->a);
RunFree(p->name);
RunFree(p->type->a);
RunFree(p->type);
RunFree(p->func->a);
RunFree(p->func);
RunFree(p->array->a);
RunFree(p->array);
RunFree(p->structure->a);
RunFree(p->structure);
RunFree(p->ident->a);
RunFree(p->ident);
RunFree(p->lval->a);
RunFree(p->lval);
RunFree(p->ref->a);
RunFree(p->ref);
RunFree(p->descr->a);
RunFree(p->descr);
}
}
}
else{
prev = p;
}
p = next;
}
int nctemp859 = (p !=0);
nctemp779=nctemp859;}return 1;
}
struct symbol* SymLook (nctempchar1 *name)
{
struct symbol* tp;
struct symbol* ap;
nctempchar1* nctemp871= name;
struct symbol* nctemp874= SymEtp;
struct symbol* nctemp876=SymLookup(nctemp871,nctemp874);
tp =nctemp876;
int nctemp864 = (tp ==0);
if(nctemp864)
{
nctempchar1* nctemp885= name;
struct symbol* nctemp888= SymLtp;
struct symbol* nctemp890=SymLookup(nctemp885,nctemp888);
tp =nctemp890;
int nctemp878 = (tp ==0);
if(nctemp878)
{
struct nctempchar1 *nctemp898;
static struct nctempchar1 nctemp899 = {{ 9}, (char*)"#arglist\0"};
nctemp898=&nctemp899;
nctempchar1* nctemp896= nctemp898;
struct symbol* nctemp900= SymLtp;
struct symbol* nctemp902=SymLookup(nctemp896,nctemp900);
tp =nctemp902;
int nctemp903 = (tp ==0);
if(nctemp903)
{
return tp;
}
struct symbol* nctemp912= tp;
struct symbol* nctemp914=SymGetable(nctemp912);
ap =nctemp914;
int nctemp915 = (ap ==0);
if(nctemp915)
{
return ap;
}
nctempchar1* nctemp927= name;
struct symbol* nctemp930= ap;
struct symbol* nctemp932=SymLookup(nctemp927,nctemp930);
tp =nctemp932;
int nctemp920 = (tp ==0);
if(nctemp920)
{
nctempchar1* nctemp938= name;
struct symbol* nctemp941= SymEtp;
struct symbol* nctemp943=SymLookup(nctemp938,nctemp941);
tp =nctemp943;
}
}
}
return tp;
}
int SymCpytble (struct symbol* tp,struct symbol* up)
{
struct symbol* wp;
struct symbol* nctemp949= tp;
struct symbol* nctemp951=SymMvnext(nctemp949);
tp =nctemp951;
int nctemp952 = (tp !=0);
int nctemp956=nctemp952;
while(nctemp956)
{{
struct symbol* nctemp963= tp;
nctempchar1* nctemp965=SymGetname(nctemp963);
nctempchar1* nctemp961= nctemp965;
struct symbol* nctemp966= up;
struct symbol* nctemp968=SymMkname(nctemp961,nctemp966);
wp =nctemp968;
struct symbol* nctemp970= wp;
struct symbol* nctemp974= tp;
nctempchar1* nctemp976=SymGetype(nctemp974);
nctempchar1* nctemp972= nctemp976;
int nctemp977=SymSetype(nctemp970,nctemp972);
struct symbol* nctemp979= wp;
struct symbol* nctemp983= tp;
nctempchar1* nctemp985=SymGetfunc(nctemp983);
nctempchar1* nctemp981= nctemp985;
int nctemp986=SymSetfunc(nctemp979,nctemp981);
struct symbol* nctemp988= wp;
struct symbol* nctemp992= tp;
nctempchar1* nctemp994=SymGetarray(nctemp992);
nctempchar1* nctemp990= nctemp994;
int nctemp995=SymSetarray(nctemp988,nctemp990);
struct symbol* nctemp997= wp;
struct symbol* nctemp1001= tp;
int nctemp1003=SymGetrank(nctemp1001);
int nctemp999= nctemp1003;
int nctemp1004=SymSetrank(nctemp997,nctemp999);
struct symbol* nctemp1006= wp;
struct symbol* nctemp1010= tp;
nctempchar1* nctemp1012=SymGetstruct(nctemp1010);
nctempchar1* nctemp1008= nctemp1012;
int nctemp1013=SymSetstruct(nctemp1006,nctemp1008);
struct symbol* nctemp1015= wp;
struct symbol* nctemp1019= tp;
nctempchar1* nctemp1021=SymGetident(nctemp1019);
nctempchar1* nctemp1017= nctemp1021;
int nctemp1022=SymSetident(nctemp1015,nctemp1017);
struct symbol* nctemp1024= wp;
struct symbol* nctemp1028= tp;
nctempchar1* nctemp1030=SymGetlval(nctemp1028);
nctempchar1* nctemp1026= nctemp1030;
int nctemp1031=SymSetlval(nctemp1024,nctemp1026);
struct symbol* nctemp1033= wp;
struct symbol* nctemp1037= tp;
nctempchar1* nctemp1039=SymGetref(nctemp1037);
nctempchar1* nctemp1035= nctemp1039;
int nctemp1040=SymSetref(nctemp1033,nctemp1035);
struct symbol* nctemp1042= wp;
struct symbol* nctemp1046= tp;
nctempchar1* nctemp1048=SymGetdescr(nctemp1046);
nctempchar1* nctemp1044= nctemp1048;
int nctemp1049=SymSetdescr(nctemp1042,nctemp1044);
struct symbol* nctemp1051= wp;
struct symbol* nctemp1055= tp;
int nctemp1057=SymGetemit(nctemp1055);
int nctemp1053= nctemp1057;
int nctemp1058=SymSetemit(nctemp1051,nctemp1053);
struct symbol* nctemp1060= wp;
struct symbol* nctemp1064= tp;
nctempchar1* nctemp1066=SymGetmodule(nctemp1064);
nctempchar1* nctemp1062= nctemp1066;
int nctemp1067=SymSetmodule(nctemp1060,nctemp1062);
struct symbol* nctemp1072= tp;
struct symbol* nctemp1074=SymMvnext(nctemp1072);
tp =nctemp1074;
}
int nctemp1075 = (tp !=0);
nctemp956=nctemp1075;}return 1;
}
struct symbol* SymAddtble (struct symbol* tp,struct symbol* sp)
{
struct symbol* start;
struct symbol* prev;
start = tp;
int nctemp1080 = (sp ==0);
if(nctemp1080)
{
return start;
}
int nctemp1085 = (tp ==0);
if(nctemp1085)
{
return start;
}
struct symbol* nctemp1093= sp;
struct symbol* nctemp1095=SymMvnext(nctemp1093);
int nctemp1090 = (nctemp1095 ==0);
if(nctemp1090)
{
return start;
}
tp->last = sp->last;
struct symbol* nctemp1102= tp;
struct symbol* nctemp1104=SymMvnext(nctemp1102);
tp =nctemp1104;
int nctemp1105 = (tp ==0);
if(nctemp1105)
{
struct symbol* nctemp1113= sp;
struct symbol* nctemp1115=SymMvnext(nctemp1113);
start->next =nctemp1115;
return start;
}
int nctemp1117 = (tp !=0);
int nctemp1121=nctemp1117;
while(nctemp1121)
{{
prev = tp;
struct symbol* nctemp1126= tp;
struct symbol* nctemp1128=SymMvnext(nctemp1126);
tp =nctemp1128;
}
int nctemp1129 = (tp !=0);
nctemp1121=nctemp1129;}tp = prev;
struct symbol* nctemp1137= sp;
struct symbol* nctemp1139=SymMvnext(nctemp1137);
tp->next =nctemp1139;
return start;
}
int SymPrsym (int fp,struct symbol* p,int level)
{
int i;
struct symbol* tp;
int nctemp1141 = (p ==0);
if(nctemp1141)
{
return 0;
}
int nctemp1146 = (p !=0);
int nctemp1150=nctemp1146;
while(nctemp1150)
{{
i = 0;
int nctemp1151 = (i <= level);
int nctemp1155=nctemp1151;
while(nctemp1155)
{{
int nctemp1157= fp;
struct nctempchar1 *nctemp1161;
static struct nctempchar1 nctemp1162 = {{ 2}, (char*)" \0"};
nctemp1161=&nctemp1162;
nctempchar1* nctemp1159= nctemp1161;
int nctemp1163=LibePuts(nctemp1157,nctemp1159);
i = (i + 1);
}
int nctemp1164 = (i <= level);
nctemp1155=nctemp1164;}int nctemp1169= fp;
nctempchar1* nctemp1171= p->name;
int nctemp1174=LibePuts(nctemp1169,nctemp1171);
int nctemp1176= fp;
struct nctempchar1 *nctemp1180;
static struct nctempchar1 nctemp1181 = {{ 2}, (char*)" \0"};
nctemp1180=&nctemp1181;
nctempchar1* nctemp1178= nctemp1180;
int nctemp1182=LibePuts(nctemp1176,nctemp1178);
int nctemp1184= fp;
nctempchar1* nctemp1186= p->type;
int nctemp1189=LibePuts(nctemp1184,nctemp1186);
int nctemp1191= fp;
struct nctempchar1 *nctemp1195;
static struct nctempchar1 nctemp1196 = {{ 2}, (char*)" \0"};
nctemp1195=&nctemp1196;
nctempchar1* nctemp1193= nctemp1195;
int nctemp1197=LibePuts(nctemp1191,nctemp1193);
int nctemp1199= fp;
nctempchar1* nctemp1201= p->func;
int nctemp1204=LibePuts(nctemp1199,nctemp1201);
int nctemp1206= fp;
struct nctempchar1 *nctemp1210;
static struct nctempchar1 nctemp1211 = {{ 2}, (char*)" \0"};
nctemp1210=&nctemp1211;
nctempchar1* nctemp1208= nctemp1210;
int nctemp1212=LibePuts(nctemp1206,nctemp1208);
int nctemp1214= fp;
nctempchar1* nctemp1216= p->array;
int nctemp1219=LibePuts(nctemp1214,nctemp1216);
int nctemp1221= fp;
struct nctempchar1 *nctemp1225;
static struct nctempchar1 nctemp1226 = {{ 2}, (char*)" \0"};
nctemp1225=&nctemp1226;
nctempchar1* nctemp1223= nctemp1225;
int nctemp1227=LibePuts(nctemp1221,nctemp1223);
int nctemp1229= fp;
int nctemp1231= p->rank;
int nctemp1233=LibePuti(nctemp1229,nctemp1231);
int nctemp1235= fp;
struct nctempchar1 *nctemp1239;
static struct nctempchar1 nctemp1240 = {{ 2}, (char*)" \0"};
nctemp1239=&nctemp1240;
nctempchar1* nctemp1237= nctemp1239;
int nctemp1241=LibePuts(nctemp1235,nctemp1237);
int nctemp1243= fp;
int nctemp1245= p->emit;
int nctemp1247=LibePuti(nctemp1243,nctemp1245);
int nctemp1249= fp;
struct nctempchar1 *nctemp1253;
static struct nctempchar1 nctemp1254 = {{ 2}, (char*)" \0"};
nctemp1253=&nctemp1254;
nctempchar1* nctemp1251= nctemp1253;
int nctemp1255=LibePuts(nctemp1249,nctemp1251);
int nctemp1257= fp;
nctempchar1* nctemp1259= p->structure;
int nctemp1262=LibePuts(nctemp1257,nctemp1259);
int nctemp1264= fp;
struct nctempchar1 *nctemp1268;
static struct nctempchar1 nctemp1269 = {{ 2}, (char*)" \0"};
nctemp1268=&nctemp1269;
nctempchar1* nctemp1266= nctemp1268;
int nctemp1270=LibePuts(nctemp1264,nctemp1266);
int nctemp1272= fp;
nctempchar1* nctemp1274= p->ident;
int nctemp1277=LibePuts(nctemp1272,nctemp1274);
int nctemp1279= fp;
struct nctempchar1 *nctemp1283;
static struct nctempchar1 nctemp1284 = {{ 2}, (char*)" \0"};
nctemp1283=&nctemp1284;
nctempchar1* nctemp1281= nctemp1283;
int nctemp1285=LibePuts(nctemp1279,nctemp1281);
int nctemp1287= fp;
nctempchar1* nctemp1289= p->lval;
int nctemp1292=LibePuts(nctemp1287,nctemp1289);
int nctemp1294= fp;
struct nctempchar1 *nctemp1298;
static struct nctempchar1 nctemp1299 = {{ 2}, (char*)" \0"};
nctemp1298=&nctemp1299;
nctempchar1* nctemp1296= nctemp1298;
int nctemp1300=LibePuts(nctemp1294,nctemp1296);
int nctemp1302= fp;
nctempchar1* nctemp1304= p->ref;
int nctemp1307=LibePuts(nctemp1302,nctemp1304);
int nctemp1309= fp;
struct nctempchar1 *nctemp1313;
static struct nctempchar1 nctemp1314 = {{ 2}, (char*)" \0"};
nctemp1313=&nctemp1314;
nctempchar1* nctemp1311= nctemp1313;
int nctemp1315=LibePuts(nctemp1309,nctemp1311);
int nctemp1317= fp;
nctempchar1* nctemp1319= p->descr;
int nctemp1322=LibePuts(nctemp1317,nctemp1319);
int nctemp1324= fp;
struct nctempchar1 *nctemp1328;
static struct nctempchar1 nctemp1329 = {{ 2}, (char*)" \0"};
nctemp1328=&nctemp1329;
nctempchar1* nctemp1326= nctemp1328;
int nctemp1330=LibePuts(nctemp1324,nctemp1326);
int nctemp1332= fp;
nctempchar1* nctemp1334= p->global;
int nctemp1337=LibePuts(nctemp1332,nctemp1334);
int nctemp1339= fp;
struct nctempchar1 *nctemp1343;
static struct nctempchar1 nctemp1344 = {{ 2}, (char*)" \0"};
nctemp1343=&nctemp1344;
nctempchar1* nctemp1341= nctemp1343;
int nctemp1345=LibePuts(nctemp1339,nctemp1341);
int nctemp1347= fp;
nctempchar1* nctemp1349= p->module;
int nctemp1352=LibePuts(nctemp1347,nctemp1349);
int nctemp1354= fp;
struct nctempchar1 *nctemp1358;
static struct nctempchar1 nctemp1359 = {{ 2}, (char*)" \0"};
nctemp1358=&nctemp1359;
nctempchar1* nctemp1356= nctemp1358;
int nctemp1360=LibePuts(nctemp1354,nctemp1356);
int nctemp1362= fp;
nctempchar1* nctemp1364= p->forw;
int nctemp1367=LibePuts(nctemp1362,nctemp1364);
int nctemp1369= fp;
struct nctempchar1 *nctemp1373;
static struct nctempchar1 nctemp1374 = {{ 2}, (char*)" \0"};
nctemp1373=&nctemp1374;
nctempchar1* nctemp1371= nctemp1373;
int nctemp1375=LibePuts(nctemp1369,nctemp1371);
int nctemp1377= fp;
struct nctempchar1 *nctemp1381;
static struct nctempchar1 nctemp1382 = {{ 3}, (char*)"\n\0"};
nctemp1381=&nctemp1382;
nctempchar1* nctemp1379= nctemp1381;
int nctemp1383=LibePuts(nctemp1377,nctemp1379);
int nctemp1385= fp;
int nctemp1387=LibeFlush(nctemp1385);
int nctemp1388 = (p->tbl !=0);
if(nctemp1388)
{
tp = p->tbl;
level = (level + 1);
int nctemp1393= fp;
struct symbol* nctemp1395= tp;
int nctemp1397= level;
int nctemp1399=SymPrsym(nctemp1393,nctemp1395,nctemp1397);
level = (level - 1);
}
p = p->next;
int nctemp1401= fp;
int nctemp1403=LibeFlush(nctemp1401);
}
int nctemp1404 = (p !=0);
nctemp1150=nctemp1404;}return 1;
}
int SymExport (int fp,struct symbol* p,int level)
{
struct symbol* tq;
int nctemp1409 = (p ==0);
if(nctemp1409)
{
return 0;
}
struct symbol* nctemp1418=SymMktable();
tq =nctemp1418;
int nctemp1420= fp;
struct symbol* nctemp1422= tq;
int nctemp1424= 0;
int nctemp1426=SymPrsym(nctemp1420,nctemp1422,nctemp1424);
p = p->next;
int nctemp1427 = (p !=0);
int nctemp1431=nctemp1427;
while(nctemp1431)
{{
nctempchar1* nctemp1435= p->name;
int nctemp1438=SymIstemp(nctemp1435);
int nctemp1432 = (nctemp1438 ==0);
if(nctemp1432)
{
nctempchar1* nctemp1443= p->module;
struct nctempchar1 *nctemp1448;
static struct nctempchar1 nctemp1449 = {{ 5}, (char*)"void\0"};
nctemp1448=&nctemp1449;
nctempchar1* nctemp1446= nctemp1448;
int nctemp1450=LibeStrcmp(nctemp1443,nctemp1446);
int nctemp1440 = (nctemp1450 ==1);
if(nctemp1440)
{
int nctemp1453= fp;
struct nctempchar1 *nctemp1457;
static struct nctempchar1 nctemp1458 = {{ 2}, (char*)" \0"};
nctemp1457=&nctemp1458;
nctempchar1* nctemp1455= nctemp1457;
int nctemp1459=LibePuts(nctemp1453,nctemp1455);
int nctemp1461= fp;
nctempchar1* nctemp1463= p->name;
int nctemp1466=LibePuts(nctemp1461,nctemp1463);
int nctemp1468= fp;
struct nctempchar1 *nctemp1472;
static struct nctempchar1 nctemp1473 = {{ 2}, (char*)" \0"};
nctemp1472=&nctemp1473;
nctempchar1* nctemp1470= nctemp1472;
int nctemp1474=LibePuts(nctemp1468,nctemp1470);
int nctemp1476= fp;
nctempchar1* nctemp1478= p->type;
int nctemp1481=LibePuts(nctemp1476,nctemp1478);
int nctemp1483= fp;
struct nctempchar1 *nctemp1487;
static struct nctempchar1 nctemp1488 = {{ 2}, (char*)" \0"};
nctemp1487=&nctemp1488;
nctempchar1* nctemp1485= nctemp1487;
int nctemp1489=LibePuts(nctemp1483,nctemp1485);
int nctemp1491= fp;
nctempchar1* nctemp1493= p->func;
int nctemp1496=LibePuts(nctemp1491,nctemp1493);
int nctemp1498= fp;
struct nctempchar1 *nctemp1502;
static struct nctempchar1 nctemp1503 = {{ 2}, (char*)" \0"};
nctemp1502=&nctemp1503;
nctempchar1* nctemp1500= nctemp1502;
int nctemp1504=LibePuts(nctemp1498,nctemp1500);
int nctemp1506= fp;
nctempchar1* nctemp1508= p->array;
int nctemp1511=LibePuts(nctemp1506,nctemp1508);
int nctemp1513= fp;
struct nctempchar1 *nctemp1517;
static struct nctempchar1 nctemp1518 = {{ 2}, (char*)" \0"};
nctemp1517=&nctemp1518;
nctempchar1* nctemp1515= nctemp1517;
int nctemp1519=LibePuts(nctemp1513,nctemp1515);
int nctemp1521= fp;
int nctemp1523= p->rank;
int nctemp1525=LibePuti(nctemp1521,nctemp1523);
int nctemp1527= fp;
struct nctempchar1 *nctemp1531;
static struct nctempchar1 nctemp1532 = {{ 2}, (char*)" \0"};
nctemp1531=&nctemp1532;
nctempchar1* nctemp1529= nctemp1531;
int nctemp1533=LibePuts(nctemp1527,nctemp1529);
int nctemp1535= fp;
int nctemp1537= p->emit;
int nctemp1539=LibePuti(nctemp1535,nctemp1537);
int nctemp1541= fp;
struct nctempchar1 *nctemp1545;
static struct nctempchar1 nctemp1546 = {{ 2}, (char*)" \0"};
nctemp1545=&nctemp1546;
nctempchar1* nctemp1543= nctemp1545;
int nctemp1547=LibePuts(nctemp1541,nctemp1543);
int nctemp1549= fp;
nctempchar1* nctemp1551= p->structure;
int nctemp1554=LibePuts(nctemp1549,nctemp1551);
int nctemp1556= fp;
struct nctempchar1 *nctemp1560;
static struct nctempchar1 nctemp1561 = {{ 2}, (char*)" \0"};
nctemp1560=&nctemp1561;
nctempchar1* nctemp1558= nctemp1560;
int nctemp1562=LibePuts(nctemp1556,nctemp1558);
int nctemp1564= fp;
nctempchar1* nctemp1566= p->ident;
int nctemp1569=LibePuts(nctemp1564,nctemp1566);
int nctemp1571= fp;
struct nctempchar1 *nctemp1575;
static struct nctempchar1 nctemp1576 = {{ 2}, (char*)" \0"};
nctemp1575=&nctemp1576;
nctempchar1* nctemp1573= nctemp1575;
int nctemp1577=LibePuts(nctemp1571,nctemp1573);
int nctemp1579= fp;
nctempchar1* nctemp1581= p->lval;
int nctemp1584=LibePuts(nctemp1579,nctemp1581);
int nctemp1586= fp;
struct nctempchar1 *nctemp1590;
static struct nctempchar1 nctemp1591 = {{ 2}, (char*)" \0"};
nctemp1590=&nctemp1591;
nctempchar1* nctemp1588= nctemp1590;
int nctemp1592=LibePuts(nctemp1586,nctemp1588);
int nctemp1594= fp;
nctempchar1* nctemp1596= p->ref;
int nctemp1599=LibePuts(nctemp1594,nctemp1596);
int nctemp1601= fp;
struct nctempchar1 *nctemp1605;
static struct nctempchar1 nctemp1606 = {{ 2}, (char*)" \0"};
nctemp1605=&nctemp1606;
nctempchar1* nctemp1603= nctemp1605;
int nctemp1607=LibePuts(nctemp1601,nctemp1603);
int nctemp1609= fp;
nctempchar1* nctemp1611= p->descr;
int nctemp1614=LibePuts(nctemp1609,nctemp1611);
int nctemp1616= fp;
struct nctempchar1 *nctemp1620;
static struct nctempchar1 nctemp1621 = {{ 2}, (char*)" \0"};
nctemp1620=&nctemp1621;
nctempchar1* nctemp1618= nctemp1620;
int nctemp1622=LibePuts(nctemp1616,nctemp1618);
int nctemp1624= fp;
nctempchar1* nctemp1626= p->global;
int nctemp1629=LibePuts(nctemp1624,nctemp1626);
int nctemp1631= fp;
struct nctempchar1 *nctemp1635;
static struct nctempchar1 nctemp1636 = {{ 2}, (char*)" \0"};
nctemp1635=&nctemp1636;
nctempchar1* nctemp1633= nctemp1635;
int nctemp1637=LibePuts(nctemp1631,nctemp1633);
int nctemp1639= fp;
nctempchar1* nctemp1641= p->module;
int nctemp1644=LibePuts(nctemp1639,nctemp1641);
int nctemp1646= fp;
struct nctempchar1 *nctemp1650;
static struct nctempchar1 nctemp1651 = {{ 2}, (char*)" \0"};
nctemp1650=&nctemp1651;
nctempchar1* nctemp1648= nctemp1650;
int nctemp1652=LibePuts(nctemp1646,nctemp1648);
int nctemp1654= fp;
struct nctempchar1 *nctemp1658;
static struct nctempchar1 nctemp1659 = {{ 3}, (char*)"\n\0"};
nctemp1658=&nctemp1659;
nctempchar1* nctemp1656= nctemp1658;
int nctemp1660=LibePuts(nctemp1654,nctemp1656);
int nctemp1662= fp;
int nctemp1664=LibeFlush(nctemp1662);
int nctemp1666= fp;
struct symbol* nctemp1670= p;
struct symbol* nctemp1672=SymGetable(nctemp1670);
struct symbol* nctemp1668= nctemp1672;
int nctemp1673= 1;
int nctemp1675=SymPrsym(nctemp1666,nctemp1668,nctemp1673);
}
}
p = p->next;
}
int nctemp1676 = (p !=0);
nctemp1431=nctemp1676;}int nctemp1681= fp;
int nctemp1683=LibeFlush(nctemp1681);
return 1;
}
int Symgetline (int fp,struct symbol* np,nctempchar1 *module)
{
int indent;
int tmp;
int ch;
nctempchar1 *field;
int nctemp1691=400;
nctempchar1 *nctemp1690;
nctemp1690=(nctempchar1*)RunMalloc(sizeof(nctempchar1));
nctemp1690->d[0]=400;
nctemp1690->a=(char *)RunMalloc(sizeof(char)*nctemp1691);
field=nctemp1690;
indent = 0;
ch = 1;
int nctemp1701= fp;
int nctemp1703=LibeGetc(nctemp1701);
ch =nctemp1703;
int nctemp1694 = (ch ==(-1));
if(nctemp1694)
{
int nctemp1705= -1;
return nctemp1705;
}
else{
int nctemp1707= fp;
int nctemp1709=LibeUngetc(nctemp1707);
}
int nctemp1717= fp;
int nctemp1719=LibeGetc(nctemp1717);
ch =nctemp1719;
int nctemp1710 = (ch ==32);
int nctemp1721=nctemp1710;
while(nctemp1721)
{{
indent = (indent + 1);
}
int nctemp1729= fp;
int nctemp1731=LibeGetc(nctemp1729);
ch =nctemp1731;
int nctemp1722 = (ch ==32);
nctemp1721=nctemp1722;}int nctemp1734= fp;
int nctemp1736=LibeUngetc(nctemp1734);
int nctemp1738= fp;
nctempchar1* nctemp1740= field;
int nctemp1743=LibeGetw(nctemp1738,nctemp1740);
struct symbol* nctemp1745= np;
nctempchar1* nctemp1747= field;
int nctemp1750=SymSetname(nctemp1745,nctemp1747);
int nctemp1752= fp;
nctempchar1* nctemp1754= field;
int nctemp1757=LibeGetw(nctemp1752,nctemp1754);
struct symbol* nctemp1759= np;
nctempchar1* nctemp1761= field;
int nctemp1764=SymSetype(nctemp1759,nctemp1761);
int nctemp1766= fp;
nctempchar1* nctemp1768= field;
int nctemp1771=LibeGetw(nctemp1766,nctemp1768);
struct symbol* nctemp1773= np;
nctempchar1* nctemp1775= field;
int nctemp1778=SymSetfunc(nctemp1773,nctemp1775);
int nctemp1780= fp;
nctempchar1* nctemp1782= field;
int nctemp1785=LibeGetw(nctemp1780,nctemp1782);
struct symbol* nctemp1787= np;
nctempchar1* nctemp1789= field;
int nctemp1792=SymSetarray(nctemp1787,nctemp1789);
int nctemp1794= fp;
nctempchar1* nctemp1796= field;
int nctemp1799=LibeGetw(nctemp1794,nctemp1796);
struct symbol* nctemp1801= np;
nctempchar1* nctemp1805= field;
int nctemp1808=LibeAtoi(nctemp1805);
int nctemp1803= nctemp1808;
int nctemp1809=SymSetrank(nctemp1801,nctemp1803);
int nctemp1811= fp;
nctempchar1* nctemp1813= field;
int nctemp1816=LibeGetw(nctemp1811,nctemp1813);
struct symbol* nctemp1818= np;
nctempchar1* nctemp1822= field;
int nctemp1825=LibeAtoi(nctemp1822);
int nctemp1820= nctemp1825;
int nctemp1826=SymSetemit(nctemp1818,nctemp1820);
int nctemp1828= fp;
nctempchar1* nctemp1830= field;
int nctemp1833=LibeGetw(nctemp1828,nctemp1830);
struct symbol* nctemp1835= np;
nctempchar1* nctemp1837= field;
int nctemp1840=SymSetstruct(nctemp1835,nctemp1837);
int nctemp1842= fp;
nctempchar1* nctemp1844= field;
int nctemp1847=LibeGetw(nctemp1842,nctemp1844);
struct symbol* nctemp1849= np;
nctempchar1* nctemp1851= field;
int nctemp1854=SymSetident(nctemp1849,nctemp1851);
int nctemp1856= fp;
nctempchar1* nctemp1858= field;
int nctemp1861=LibeGetw(nctemp1856,nctemp1858);
struct symbol* nctemp1863= np;
nctempchar1* nctemp1865= field;
int nctemp1868=SymSetlval(nctemp1863,nctemp1865);
int nctemp1870= fp;
nctempchar1* nctemp1872= field;
int nctemp1875=LibeGetw(nctemp1870,nctemp1872);
struct symbol* nctemp1877= np;
nctempchar1* nctemp1879= field;
int nctemp1882=SymSetref(nctemp1877,nctemp1879);
int nctemp1884= fp;
nctempchar1* nctemp1886= field;
int nctemp1889=LibeGetw(nctemp1884,nctemp1886);
struct symbol* nctemp1891= np;
nctempchar1* nctemp1893= field;
int nctemp1896=SymSetdescr(nctemp1891,nctemp1893);
int nctemp1898= fp;
nctempchar1* nctemp1900= field;
int nctemp1903=LibeGetw(nctemp1898,nctemp1900);
struct symbol* nctemp1905= np;
nctempchar1* nctemp1907= field;
int nctemp1910=SymSetglobal(nctemp1905,nctemp1907);
int nctemp1912= fp;
nctempchar1* nctemp1914= field;
int nctemp1917=LibeGetw(nctemp1912,nctemp1914);
struct symbol* nctemp1919= np;
nctempchar1* nctemp1921= module;
int nctemp1924=SymSetmodule(nctemp1919,nctemp1921);
int nctemp1932= fp;
int nctemp1934=LibeGetc(nctemp1932);
ch =nctemp1934;
int nctemp1925 = (ch !=10);
int nctemp1936=nctemp1925;
while(nctemp1936)
{{
tmp = 1;
}
int nctemp1944= fp;
int nctemp1946=LibeGetc(nctemp1944);
ch =nctemp1946;
int nctemp1937 = (ch !=10);
nctemp1936=nctemp1937;}return indent;
}
int SymReadsym (int fp,struct symbol* rtbl,nctempchar1 *module)
{
int indent;
int oldindent;
struct symbol* tbl;
struct symbol* ntbl;
struct symbol* np;
struct symbol* mp;
struct symbol* ttbl;
int i;
tbl = rtbl;
struct symbol* nctemp1953=SymMktable();
ttbl =nctemp1953;
struct symbol* nctemp1955= ttbl;
nctempchar1* nctemp1957= module;
int nctemp1960=SymSetmodule(nctemp1955,nctemp1957);
struct nctempchar1 *nctemp1967;
static struct nctempchar1 nctemp1968 = {{ 6}, (char*)"dummy\0"};
nctemp1967=&nctemp1968;
nctempchar1* nctemp1965= nctemp1967;
struct symbol* nctemp1969= ttbl;
struct symbol* nctemp1971=SymMkname(nctemp1965,nctemp1969);
mp =nctemp1971;
int nctemp1976= fp;
struct symbol* nctemp1978= mp;
nctempchar1* nctemp1980= module;
int nctemp1983=Symgetline(nctemp1976,nctemp1978,nctemp1980);
indent =nctemp1983;
oldindent = 1;
indent = 1;
int nctemp1985=1;
while(nctemp1985)
{{
int nctemp1990= fp;
struct symbol* nctemp1992= mp;
nctempchar1* nctemp1994= module;
int nctemp1997=Symgetline(nctemp1990,nctemp1992,nctemp1994);
indent =nctemp1997;
int nctemp1998 = (indent < 0);
if(nctemp1998)
{
return 1;
}
nctempchar1* nctemp2006= mp->name;
struct nctempchar1 *nctemp2011;
static struct nctempchar1 nctemp2012 = {{ 7}, (char*)"#first\0"};
nctemp2011=&nctemp2012;
nctempchar1* nctemp2009= nctemp2011;
int nctemp2013=LibeStrcmp(nctemp2006,nctemp2009);
int nctemp2003 = (nctemp2013 ==1);
if(nctemp2003)
{
int nctemp2019= fp;
struct symbol* nctemp2021= mp;
nctempchar1* nctemp2023= module;
int nctemp2026=Symgetline(nctemp2019,nctemp2021,nctemp2023);
indent =nctemp2026;
}
int nctemp2027 = (indent ==oldindent);
if(nctemp2027)
{
struct symbol* nctemp2032= ttbl;
struct symbol* nctemp2034= tbl;
int nctemp2036=SymCpytble(nctemp2032,nctemp2034);
oldindent = indent;
}
int nctemp2037 = (indent > oldindent);
if(nctemp2037)
{
struct symbol* nctemp2045=SymMktable();
ntbl =nctemp2045;
struct symbol* nctemp2047= ntbl;
nctempchar1* nctemp2049= module;
int nctemp2052=SymSetmodule(nctemp2047,nctemp2049);
np = tbl->last;
struct symbol* nctemp2054= np;
struct symbol* nctemp2056= ntbl;
struct symbol* nctemp2058=SymSetable(nctemp2054,nctemp2056);
tbl = ntbl;
struct symbol* nctemp2060= ttbl;
struct symbol* nctemp2062= tbl;
int nctemp2064=SymCpytble(nctemp2060,nctemp2062);
oldindent = indent;
}
int nctemp2065 = (indent < oldindent);
if(nctemp2065)
{
tbl = rtbl;
int nctemp2069 = (indent ==1);
if(nctemp2069)
{
tbl = rtbl;
}
else{
for(i = 0;i < indent;i = (i + 1)){
struct symbol* nctemp2077= tbl->last;
struct symbol* nctemp2079=SymGetable(nctemp2077);
tbl =nctemp2079;
}
}
struct symbol* nctemp2081= ttbl;
struct symbol* nctemp2083= tbl;
int nctemp2085=SymCpytble(nctemp2081,nctemp2083);
oldindent = indent;
}
}
nctemp1985=1;}int nctemp2088= fp;
int nctemp2090=LibeClose(nctemp2088);
return 1;
}
}
