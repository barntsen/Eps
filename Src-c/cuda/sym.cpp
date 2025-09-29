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
i =0;
int nctemp39 = (i < lnc);
while(nctemp39){
{
int nctemp46=i;
int nctemp49=i;
int nctemp43 = (name->a[nctemp46] !=t->a[nctemp49]);
if(nctemp43)
{
return 0;
}
}
int nctemp60 = i + 1;
i =nctemp60;
int nctemp61 = (i < lnc);
nctemp39=nctemp61;
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
int nctemp74 = (np !=0);
int nctemp78=nctemp74;
while(nctemp78)
{{
nctempchar1* nctemp82= s;
nctempchar1* nctemp85= np->name;
int nctemp88=LibeStrcmp(nctemp82,nctemp85);
int nctemp79 = (nctemp88 ==1);
if(nctemp79)
{
return np;
}
np =np->next;
}
int nctemp95 = (np !=0);
nctemp78=nctemp95;}np =0;
return np;
}
struct symbol* SymMkname (nctempchar1 *name,struct symbol* tp)
{
struct symbol* np;
struct symbol* lp;
nctempchar1* nctemp110= name;
struct symbol* nctemp113= tp;
struct symbol* nctemp115=SymLookup(nctemp110,nctemp113);
np =nctemp115;
int nctemp103 = (np ==0);
if(nctemp103)
{
struct symbol *nctemp121=(struct symbol*)RunMalloc(sizeof(struct symbol));
np =nctemp121;
int nctemp123 = (np ==0);
if(nctemp123)
{
return np;
}
nctempchar1* nctemp136= name;
nctempchar1* nctemp139=LibeStrsave(nctemp136);
np->name=nctemp139;
nctempchar1 *nctemp129 =np->name;
int nctemp128 =(nctemp129==0);
if(nctemp128)
{
np =0;
return np;
}
lp =tp->last;
lp->next =np;
tp->last =np;
np->next =0;
struct nctempchar1 *nctemp168;
static struct nctempchar1 nctemp169 = {{ 5}, (char*)"void\0"};
nctemp168=&nctemp169;
nctempchar1* nctemp166= nctemp168;
nctempchar1* nctemp170=LibeStrsave(nctemp166);
np->type=nctemp170;
struct nctempchar1 *nctemp178;
static struct nctempchar1 nctemp179 = {{ 5}, (char*)"void\0"};
nctemp178=&nctemp179;
nctempchar1* nctemp176= nctemp178;
nctempchar1* nctemp180=LibeStrsave(nctemp176);
np->func=nctemp180;
struct nctempchar1 *nctemp188;
static struct nctempchar1 nctemp189 = {{ 5}, (char*)"void\0"};
nctemp188=&nctemp189;
nctempchar1* nctemp186= nctemp188;
nctempchar1* nctemp190=LibeStrsave(nctemp186);
np->array=nctemp190;
struct nctempchar1 *nctemp198;
static struct nctempchar1 nctemp199 = {{ 5}, (char*)"void\0"};
nctemp198=&nctemp199;
nctempchar1* nctemp196= nctemp198;
nctempchar1* nctemp200=LibeStrsave(nctemp196);
np->structure=nctemp200;
np->tbl =0;
struct nctempchar1 *nctemp212;
static struct nctempchar1 nctemp213 = {{ 5}, (char*)"void\0"};
nctemp212=&nctemp213;
nctempchar1* nctemp210= nctemp212;
nctempchar1* nctemp214=LibeStrsave(nctemp210);
np->ident=nctemp214;
np->rank =0;
struct nctempchar1 *nctemp226;
static struct nctempchar1 nctemp227 = {{ 5}, (char*)"void\0"};
nctemp226=&nctemp227;
nctempchar1* nctemp224= nctemp226;
nctempchar1* nctemp228=LibeStrsave(nctemp224);
np->lval=nctemp228;
struct nctempchar1 *nctemp236;
static struct nctempchar1 nctemp237 = {{ 5}, (char*)"void\0"};
nctemp236=&nctemp237;
nctempchar1* nctemp234= nctemp236;
nctempchar1* nctemp238=LibeStrsave(nctemp234);
np->ref=nctemp238;
struct nctempchar1 *nctemp246;
static struct nctempchar1 nctemp247 = {{ 5}, (char*)"void\0"};
nctemp246=&nctemp247;
nctempchar1* nctemp244= nctemp246;
nctempchar1* nctemp248=LibeStrsave(nctemp244);
np->descr=nctemp248;
struct nctempchar1 *nctemp256;
static struct nctempchar1 nctemp257 = {{ 5}, (char*)"void\0"};
nctemp256=&nctemp257;
nctempchar1* nctemp254= nctemp256;
nctempchar1* nctemp258=LibeStrsave(nctemp254);
np->global=nctemp258;
struct nctempchar1 *nctemp266;
static struct nctempchar1 nctemp267 = {{ 5}, (char*)"void\0"};
nctemp266=&nctemp267;
nctempchar1* nctemp264= nctemp266;
nctempchar1* nctemp268=LibeStrsave(nctemp264);
np->module=nctemp268;
struct nctempchar1 *nctemp276;
static struct nctempchar1 nctemp277 = {{ 5}, (char*)"void\0"};
nctemp276=&nctemp277;
nctempchar1* nctemp274= nctemp276;
nctempchar1* nctemp278=LibeStrsave(nctemp274);
np->forw=nctemp278;
np->emit =1;
}
else{
np =0;
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
int nctemp289 = (np !=0);
int nctemp293=nctemp289;
while(nctemp293)
{{
nctempchar1* nctemp297= name;
nctempchar1* nctemp300= np->name;
int nctemp303=LibeStrcmp(nctemp297,nctemp300);
int nctemp294 = (nctemp303 ==1);
if(nctemp294)
{
sp =np;
np =0;
}
else{
prev =np;
np =np->next;
}
}
int nctemp321 = (np !=0);
nctemp293=nctemp321;}np = sp;
int nctemp325 = (np ==0);
if(nctemp325)
{
return np;
}
int nctemp330 = (np->next ==0);
if(nctemp330)
{
prev->last =prev;
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
struct symbol *nctemp374=(struct symbol*)RunMalloc(sizeof(struct symbol));
tp =nctemp374;
int nctemp376 = (tp ==0);
if(nctemp376)
{
return tp;
}
struct nctempchar1 *nctemp388;
static struct nctempchar1 nctemp389 = {{ 7}, (char*)"#first\0"};
nctemp388=&nctemp389;
nctempchar1* nctemp386= nctemp388;
nctempchar1* nctemp390=LibeStrsave(nctemp386);
tp->name=nctemp390;
struct nctempchar1 *nctemp398;
static struct nctempchar1 nctemp399 = {{ 5}, (char*)"void\0"};
nctemp398=&nctemp399;
nctempchar1* nctemp396= nctemp398;
nctempchar1* nctemp400=LibeStrsave(nctemp396);
tp->type=nctemp400;
tp->tbl = 0;
struct nctempchar1 *nctemp408;
static struct nctempchar1 nctemp409 = {{ 5}, (char*)"void\0"};
nctemp408=&nctemp409;
nctempchar1* nctemp406= nctemp408;
nctempchar1* nctemp410=LibeStrsave(nctemp406);
tp->func=nctemp410;
struct nctempchar1 *nctemp418;
static struct nctempchar1 nctemp419 = {{ 5}, (char*)"void\0"};
nctemp418=&nctemp419;
nctempchar1* nctemp416= nctemp418;
nctempchar1* nctemp420=LibeStrsave(nctemp416);
tp->ref=nctemp420;
struct nctempchar1 *nctemp428;
static struct nctempchar1 nctemp429 = {{ 5}, (char*)"void\0"};
nctemp428=&nctemp429;
nctempchar1* nctemp426= nctemp428;
nctempchar1* nctemp430=LibeStrsave(nctemp426);
tp->descr=nctemp430;
struct nctempchar1 *nctemp438;
static struct nctempchar1 nctemp439 = {{ 5}, (char*)"void\0"};
nctemp438=&nctemp439;
nctempchar1* nctemp436= nctemp438;
nctempchar1* nctemp440=LibeStrsave(nctemp436);
tp->array=nctemp440;
struct nctempchar1 *nctemp448;
static struct nctempchar1 nctemp449 = {{ 5}, (char*)"void\0"};
nctemp448=&nctemp449;
nctempchar1* nctemp446= nctemp448;
nctempchar1* nctemp450=LibeStrsave(nctemp446);
tp->structure=nctemp450;
struct nctempchar1 *nctemp458;
static struct nctempchar1 nctemp459 = {{ 5}, (char*)"void\0"};
nctemp458=&nctemp459;
nctempchar1* nctemp456= nctemp458;
nctempchar1* nctemp460=LibeStrsave(nctemp456);
tp->ident=nctemp460;
struct nctempchar1 *nctemp468;
static struct nctempchar1 nctemp469 = {{ 5}, (char*)"void\0"};
nctemp468=&nctemp469;
nctempchar1* nctemp466= nctemp468;
nctempchar1* nctemp470=LibeStrsave(nctemp466);
tp->lval=nctemp470;
struct nctempchar1 *nctemp478;
static struct nctempchar1 nctemp479 = {{ 5}, (char*)"void\0"};
nctemp478=&nctemp479;
nctempchar1* nctemp476= nctemp478;
nctempchar1* nctemp480=LibeStrsave(nctemp476);
tp->global=nctemp480;
struct nctempchar1 *nctemp488;
static struct nctempchar1 nctemp489 = {{ 5}, (char*)"void\0"};
nctemp488=&nctemp489;
nctempchar1* nctemp486= nctemp488;
nctempchar1* nctemp490=LibeStrsave(nctemp486);
tp->module=nctemp490;
struct nctempchar1 *nctemp498;
static struct nctempchar1 nctemp499 = {{ 5}, (char*)"void\0"};
nctemp498=&nctemp499;
nctempchar1* nctemp496= nctemp498;
nctempchar1* nctemp500=LibeStrsave(nctemp496);
tp->forw=nctemp500;
tp->emit = 1;
tp->next = 0;
tp->last = tp;
return tp;
}
struct symbol* SymMvnext (struct symbol* np)
{
int nctemp502 = (np ==0);
if(nctemp502)
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
nctempchar1 *nctemp513 =name;
int nctemp512 =(nctemp513!=0);
int nctemp518 = (p !=0);
int nctemp509 = (nctemp512 && nctemp518);
if(nctemp509)
{
RunFree(p->name->a);
RunFree(p->name);
nctempchar1* nctemp530= name;
nctempchar1* nctemp533=LibeStrsave(nctemp530);
p->name=nctemp533;
}
return 1;
}
int SymSetype (struct symbol* p,nctempchar1 *type)
{
nctempchar1 *nctemp539 =type;
int nctemp538 =(nctemp539!=0);
int nctemp544 = (p !=0);
int nctemp535 = (nctemp538 && nctemp544);
if(nctemp535)
{
RunFree(p->type->a);
RunFree(p->type);
nctempchar1* nctemp556= type;
nctempchar1* nctemp559=LibeStrsave(nctemp556);
p->type=nctemp559;
}
return 1;
}
nctempchar1 * SymGetype (struct symbol* np)
{
return np->type;
}
int SymSetfunc (struct symbol* p,nctempchar1 *func)
{
nctempchar1 *nctemp567 =func;
int nctemp566 =(nctemp567!=0);
int nctemp572 = (p !=0);
int nctemp563 = (nctemp566 && nctemp572);
if(nctemp563)
{
RunFree(p->func->a);
RunFree(p->func);
nctempchar1* nctemp584= func;
nctempchar1* nctemp587=LibeStrsave(nctemp584);
p->func=nctemp587;
}
return 1;
}
nctempchar1 * SymGetfunc (struct symbol* np)
{
return np->func;
}
int SymSetarray (struct symbol* p,nctempchar1 *array)
{
nctempchar1 *nctemp595 =array;
int nctemp594 =(nctemp595!=0);
int nctemp600 = (p !=0);
int nctemp591 = (nctemp594 && nctemp600);
if(nctemp591)
{
RunFree(p->array->a);
RunFree(p->array);
nctempchar1* nctemp612= array;
nctempchar1* nctemp615=LibeStrsave(nctemp612);
p->array=nctemp615;
}
return 1;
}
nctempchar1 * SymGetarray (struct symbol* np)
{
return np->array;
}
int SymSetstruct (struct symbol* p,nctempchar1 *structure)
{
nctempchar1 *nctemp623 =structure;
int nctemp622 =(nctemp623!=0);
int nctemp628 = (p !=0);
int nctemp619 = (nctemp622 && nctemp628);
if(nctemp619)
{
RunFree(p->structure->a);
RunFree(p->structure);
nctempchar1* nctemp640= structure;
nctempchar1* nctemp643=LibeStrsave(nctemp640);
p->structure=nctemp643;
}
return 1;
}
nctempchar1 * SymGetstruct (struct symbol* np)
{
return np->structure;
}
int SymSetident (struct symbol* p,nctempchar1 *ident)
{
nctempchar1 *nctemp651 =ident;
int nctemp650 =(nctemp651!=0);
int nctemp656 = (p !=0);
int nctemp647 = (nctemp650 && nctemp656);
if(nctemp647)
{
RunFree(p->ident->a);
RunFree(p->ident);
nctempchar1* nctemp668= ident;
nctempchar1* nctemp671=LibeStrsave(nctemp668);
p->ident=nctemp671;
}
return 1;
}
nctempchar1 * SymGetident (struct symbol* np)
{
return np->ident;
}
int SymSetlval (struct symbol* p,nctempchar1 *lval)
{
nctempchar1 *nctemp679 =lval;
int nctemp678 =(nctemp679!=0);
int nctemp684 = (p !=0);
int nctemp675 = (nctemp678 && nctemp684);
if(nctemp675)
{
RunFree(p->lval->a);
RunFree(p->lval);
nctempchar1* nctemp696= lval;
nctempchar1* nctemp699=LibeStrsave(nctemp696);
p->lval=nctemp699;
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
nctempchar1 *nctemp711 =ref;
int nctemp710 =(nctemp711!=0);
int nctemp716 = (p !=0);
int nctemp707 = (nctemp710 && nctemp716);
if(nctemp707)
{
RunFree(p->ref->a);
RunFree(p->ref);
nctempchar1* nctemp728= ref;
nctempchar1* nctemp731=LibeStrsave(nctemp728);
p->ref=nctemp731;
}
return 1;
}
nctempchar1 * SymGetref (struct symbol* np)
{
return np->ref;
}
int SymSetmodule (struct symbol* p,nctempchar1 *module)
{
nctempchar1 *nctemp739 =module;
int nctemp738 =(nctemp739!=0);
int nctemp744 = (p !=0);
int nctemp735 = (nctemp738 && nctemp744);
if(nctemp735)
{
RunFree(p->module->a);
RunFree(p->module);
nctempchar1* nctemp756= module;
nctempchar1* nctemp759=LibeStrsave(nctemp756);
p->module=nctemp759;
}
return 1;
}
nctempchar1 * SymGetmodule (struct symbol* np)
{
return np->module;
}
int SymSetforw (struct symbol* p,nctempchar1 *forw)
{
nctempchar1 *nctemp767 =forw;
int nctemp766 =(nctemp767!=0);
int nctemp772 = (p !=0);
int nctemp763 = (nctemp766 && nctemp772);
if(nctemp763)
{
RunFree(p->forw->a);
RunFree(p->forw);
nctempchar1* nctemp784= forw;
nctempchar1* nctemp787=LibeStrsave(nctemp784);
p->forw=nctemp787;
}
return 1;
}
nctempchar1 * SymGetforw (struct symbol* np)
{
return np->forw;
}
int SymSetdescr (struct symbol* p,nctempchar1 *descr)
{
nctempchar1 *nctemp795 =descr;
int nctemp794 =(nctemp795!=0);
int nctemp800 = (p !=0);
int nctemp791 = (nctemp794 && nctemp800);
if(nctemp791)
{
RunFree(p->descr->a);
RunFree(p->descr);
nctempchar1* nctemp812= descr;
nctempchar1* nctemp815=LibeStrsave(nctemp812);
p->descr=nctemp815;
}
return 1;
}
nctempchar1 * SymGetdescr (struct symbol* np)
{
return np->descr;
}
int SymSetglobal (struct symbol* p,nctempchar1 *global)
{
nctempchar1 *nctemp823 =global;
int nctemp822 =(nctemp823!=0);
int nctemp828 = (p !=0);
int nctemp819 = (nctemp822 && nctemp828);
if(nctemp819)
{
RunFree(p->global->a);
RunFree(p->global);
nctempchar1* nctemp840= global;
nctempchar1* nctemp843=LibeStrsave(nctemp840);
p->global=nctemp843;
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
int nctemp847 = (p ==0);
if(nctemp847)
{
return 0;
}
prev = 0;
int nctemp852 = (p !=0);
int nctemp856=nctemp852;
while(nctemp856)
{{
next =p->next;
struct nctempchar1 *nctemp866;
static struct nctempchar1 nctemp867 = {{ 9}, (char*)"#arglist\0"};
nctemp866=&nctemp867;
nctempchar1* nctemp864= nctemp866;
nctempchar1* nctemp868= p->name;
int nctemp871=LibeStrcmp(nctemp864,nctemp868);
int nctemp861 = (nctemp871 ==0);
if(nctemp861)
{
struct nctempchar1 *nctemp878;
static struct nctempchar1 nctemp879 = {{ 6}, (char*)"#self\0"};
nctemp878=&nctemp879;
nctempchar1* nctemp876= nctemp878;
nctempchar1* nctemp880= p->name;
int nctemp883=LibeStrcmp(nctemp876,nctemp880);
int nctemp873 = (nctemp883 ==0);
if(nctemp873)
{
struct nctempchar1 *nctemp890;
static struct nctempchar1 nctemp891 = {{ 7}, (char*)"#first\0"};
nctemp890=&nctemp891;
nctempchar1* nctemp888= nctemp890;
nctempchar1* nctemp892= p->name;
int nctemp895=LibeStrcmp(nctemp888,nctemp892);
int nctemp885 = (nctemp895 ==0);
if(nctemp885)
{
int nctemp897 = (p->tbl !=0);
if(nctemp897)
{
struct symbol* nctemp902= p->tbl;
int nctemp904=SymRmtable(nctemp902);
p->tbl =0;
}
int nctemp909 = (prev !=0);
if(nctemp909)
{
prev->next =next;
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
prev =p;
}
p =next;
}
int nctemp956 = (p !=0);
nctemp856=nctemp956;}return 1;
}
struct symbol* SymLook (nctempchar1 *name)
{
struct symbol* tp;
struct symbol* ap;
nctempchar1* nctemp968= name;
struct symbol* nctemp971= SymEtp;
struct symbol* nctemp973=SymLookup(nctemp968,nctemp971);
tp =nctemp973;
int nctemp961 = (tp ==0);
if(nctemp961)
{
nctempchar1* nctemp982= name;
struct symbol* nctemp985= SymLtp;
struct symbol* nctemp987=SymLookup(nctemp982,nctemp985);
tp =nctemp987;
int nctemp975 = (tp ==0);
if(nctemp975)
{
struct nctempchar1 *nctemp995;
static struct nctempchar1 nctemp996 = {{ 9}, (char*)"#arglist\0"};
nctemp995=&nctemp996;
nctempchar1* nctemp993= nctemp995;
struct symbol* nctemp997= SymLtp;
struct symbol* nctemp999=SymLookup(nctemp993,nctemp997);
tp =nctemp999;
int nctemp1000 = (tp ==0);
if(nctemp1000)
{
return tp;
}
struct symbol* nctemp1009= tp;
struct symbol* nctemp1011=SymGetable(nctemp1009);
ap =nctemp1011;
int nctemp1012 = (ap ==0);
if(nctemp1012)
{
return ap;
}
nctempchar1* nctemp1024= name;
struct symbol* nctemp1027= ap;
struct symbol* nctemp1029=SymLookup(nctemp1024,nctemp1027);
tp =nctemp1029;
int nctemp1017 = (tp ==0);
if(nctemp1017)
{
nctempchar1* nctemp1035= name;
struct symbol* nctemp1038= SymEtp;
struct symbol* nctemp1040=SymLookup(nctemp1035,nctemp1038);
tp =nctemp1040;
}
}
}
return tp;
}
int SymCpytble (struct symbol* tp,struct symbol* up)
{
struct symbol* wp;
struct symbol* nctemp1046= tp;
struct symbol* nctemp1048=SymMvnext(nctemp1046);
tp =nctemp1048;
int nctemp1049 = (tp !=0);
int nctemp1053=nctemp1049;
while(nctemp1053)
{{
struct symbol* nctemp1060= tp;
nctempchar1* nctemp1062=SymGetname(nctemp1060);
nctempchar1* nctemp1058= nctemp1062;
struct symbol* nctemp1063= up;
struct symbol* nctemp1065=SymMkname(nctemp1058,nctemp1063);
wp =nctemp1065;
struct symbol* nctemp1067= wp;
struct symbol* nctemp1071= tp;
nctempchar1* nctemp1073=SymGetype(nctemp1071);
nctempchar1* nctemp1069= nctemp1073;
int nctemp1074=SymSetype(nctemp1067,nctemp1069);
struct symbol* nctemp1076= wp;
struct symbol* nctemp1080= tp;
nctempchar1* nctemp1082=SymGetfunc(nctemp1080);
nctempchar1* nctemp1078= nctemp1082;
int nctemp1083=SymSetfunc(nctemp1076,nctemp1078);
struct symbol* nctemp1085= wp;
struct symbol* nctemp1089= tp;
nctempchar1* nctemp1091=SymGetarray(nctemp1089);
nctempchar1* nctemp1087= nctemp1091;
int nctemp1092=SymSetarray(nctemp1085,nctemp1087);
struct symbol* nctemp1094= wp;
struct symbol* nctemp1098= tp;
int nctemp1100=SymGetrank(nctemp1098);
int nctemp1096= nctemp1100;
int nctemp1101=SymSetrank(nctemp1094,nctemp1096);
struct symbol* nctemp1103= wp;
struct symbol* nctemp1107= tp;
nctempchar1* nctemp1109=SymGetstruct(nctemp1107);
nctempchar1* nctemp1105= nctemp1109;
int nctemp1110=SymSetstruct(nctemp1103,nctemp1105);
struct symbol* nctemp1112= wp;
struct symbol* nctemp1116= tp;
nctempchar1* nctemp1118=SymGetident(nctemp1116);
nctempchar1* nctemp1114= nctemp1118;
int nctemp1119=SymSetident(nctemp1112,nctemp1114);
struct symbol* nctemp1121= wp;
struct symbol* nctemp1125= tp;
nctempchar1* nctemp1127=SymGetlval(nctemp1125);
nctempchar1* nctemp1123= nctemp1127;
int nctemp1128=SymSetlval(nctemp1121,nctemp1123);
struct symbol* nctemp1130= wp;
struct symbol* nctemp1134= tp;
nctempchar1* nctemp1136=SymGetref(nctemp1134);
nctempchar1* nctemp1132= nctemp1136;
int nctemp1137=SymSetref(nctemp1130,nctemp1132);
struct symbol* nctemp1139= wp;
struct symbol* nctemp1143= tp;
nctempchar1* nctemp1145=SymGetdescr(nctemp1143);
nctempchar1* nctemp1141= nctemp1145;
int nctemp1146=SymSetdescr(nctemp1139,nctemp1141);
struct symbol* nctemp1148= wp;
struct symbol* nctemp1152= tp;
int nctemp1154=SymGetemit(nctemp1152);
int nctemp1150= nctemp1154;
int nctemp1155=SymSetemit(nctemp1148,nctemp1150);
struct symbol* nctemp1157= wp;
struct symbol* nctemp1161= tp;
nctempchar1* nctemp1163=SymGetmodule(nctemp1161);
nctempchar1* nctemp1159= nctemp1163;
int nctemp1164=SymSetmodule(nctemp1157,nctemp1159);
struct symbol* nctemp1169= tp;
struct symbol* nctemp1171=SymMvnext(nctemp1169);
tp =nctemp1171;
}
int nctemp1172 = (tp !=0);
nctemp1053=nctemp1172;}return 1;
}
struct symbol* SymAddtble (struct symbol* tp,struct symbol* sp)
{
struct symbol* start;
struct symbol* prev;
start = tp;
int nctemp1177 = (sp ==0);
if(nctemp1177)
{
return start;
}
int nctemp1182 = (tp ==0);
if(nctemp1182)
{
return start;
}
struct symbol* nctemp1190= sp;
struct symbol* nctemp1192=SymMvnext(nctemp1190);
int nctemp1187 = (nctemp1192 ==0);
if(nctemp1187)
{
return start;
}
tp->last = sp->last;
struct symbol* nctemp1199= tp;
struct symbol* nctemp1201=SymMvnext(nctemp1199);
tp =nctemp1201;
int nctemp1202 = (tp ==0);
if(nctemp1202)
{
struct symbol* nctemp1210= sp;
struct symbol* nctemp1212=SymMvnext(nctemp1210);
start->next =nctemp1212;
return start;
}
int nctemp1214 = (tp !=0);
int nctemp1218=nctemp1214;
while(nctemp1218)
{{
prev =tp;
struct symbol* nctemp1227= tp;
struct symbol* nctemp1229=SymMvnext(nctemp1227);
tp =nctemp1229;
}
int nctemp1230 = (tp !=0);
nctemp1218=nctemp1230;}tp = prev;
struct symbol* nctemp1238= sp;
struct symbol* nctemp1240=SymMvnext(nctemp1238);
tp->next =nctemp1240;
return start;
}
int SymPrsym (int fp,struct symbol* p,int level)
{
int i;
struct symbol* tp;
int nctemp1242 = (p ==0);
if(nctemp1242)
{
return 0;
}
int nctemp1247 = (p !=0);
int nctemp1251=nctemp1247;
while(nctemp1251)
{{
i =0;
int nctemp1256 = (i <= level);
int nctemp1260=nctemp1256;
while(nctemp1260)
{{
int nctemp1262= fp;
struct nctempchar1 *nctemp1266;
static struct nctempchar1 nctemp1267 = {{ 2}, (char*)" \0"};
nctemp1266=&nctemp1267;
nctempchar1* nctemp1264= nctemp1266;
int nctemp1268=LibePuts(nctemp1262,nctemp1264);
int nctemp1277 = i + 1;
i =nctemp1277;
}
int nctemp1278 = (i <= level);
nctemp1260=nctemp1278;}int nctemp1283= fp;
nctempchar1* nctemp1285= p->name;
int nctemp1288=LibePuts(nctemp1283,nctemp1285);
int nctemp1290= fp;
struct nctempchar1 *nctemp1294;
static struct nctempchar1 nctemp1295 = {{ 2}, (char*)" \0"};
nctemp1294=&nctemp1295;
nctempchar1* nctemp1292= nctemp1294;
int nctemp1296=LibePuts(nctemp1290,nctemp1292);
int nctemp1298= fp;
nctempchar1* nctemp1300= p->type;
int nctemp1303=LibePuts(nctemp1298,nctemp1300);
int nctemp1305= fp;
struct nctempchar1 *nctemp1309;
static struct nctempchar1 nctemp1310 = {{ 2}, (char*)" \0"};
nctemp1309=&nctemp1310;
nctempchar1* nctemp1307= nctemp1309;
int nctemp1311=LibePuts(nctemp1305,nctemp1307);
int nctemp1313= fp;
nctempchar1* nctemp1315= p->func;
int nctemp1318=LibePuts(nctemp1313,nctemp1315);
int nctemp1320= fp;
struct nctempchar1 *nctemp1324;
static struct nctempchar1 nctemp1325 = {{ 2}, (char*)" \0"};
nctemp1324=&nctemp1325;
nctempchar1* nctemp1322= nctemp1324;
int nctemp1326=LibePuts(nctemp1320,nctemp1322);
int nctemp1328= fp;
nctempchar1* nctemp1330= p->array;
int nctemp1333=LibePuts(nctemp1328,nctemp1330);
int nctemp1335= fp;
struct nctempchar1 *nctemp1339;
static struct nctempchar1 nctemp1340 = {{ 2}, (char*)" \0"};
nctemp1339=&nctemp1340;
nctempchar1* nctemp1337= nctemp1339;
int nctemp1341=LibePuts(nctemp1335,nctemp1337);
int nctemp1343= fp;
int nctemp1345= p->rank;
int nctemp1347=LibePuti(nctemp1343,nctemp1345);
int nctemp1349= fp;
struct nctempchar1 *nctemp1353;
static struct nctempchar1 nctemp1354 = {{ 2}, (char*)" \0"};
nctemp1353=&nctemp1354;
nctempchar1* nctemp1351= nctemp1353;
int nctemp1355=LibePuts(nctemp1349,nctemp1351);
int nctemp1357= fp;
int nctemp1359= p->emit;
int nctemp1361=LibePuti(nctemp1357,nctemp1359);
int nctemp1363= fp;
struct nctempchar1 *nctemp1367;
static struct nctempchar1 nctemp1368 = {{ 2}, (char*)" \0"};
nctemp1367=&nctemp1368;
nctempchar1* nctemp1365= nctemp1367;
int nctemp1369=LibePuts(nctemp1363,nctemp1365);
int nctemp1371= fp;
nctempchar1* nctemp1373= p->structure;
int nctemp1376=LibePuts(nctemp1371,nctemp1373);
int nctemp1378= fp;
struct nctempchar1 *nctemp1382;
static struct nctempchar1 nctemp1383 = {{ 2}, (char*)" \0"};
nctemp1382=&nctemp1383;
nctempchar1* nctemp1380= nctemp1382;
int nctemp1384=LibePuts(nctemp1378,nctemp1380);
int nctemp1386= fp;
nctempchar1* nctemp1388= p->ident;
int nctemp1391=LibePuts(nctemp1386,nctemp1388);
int nctemp1393= fp;
struct nctempchar1 *nctemp1397;
static struct nctempchar1 nctemp1398 = {{ 2}, (char*)" \0"};
nctemp1397=&nctemp1398;
nctempchar1* nctemp1395= nctemp1397;
int nctemp1399=LibePuts(nctemp1393,nctemp1395);
int nctemp1401= fp;
nctempchar1* nctemp1403= p->lval;
int nctemp1406=LibePuts(nctemp1401,nctemp1403);
int nctemp1408= fp;
struct nctempchar1 *nctemp1412;
static struct nctempchar1 nctemp1413 = {{ 2}, (char*)" \0"};
nctemp1412=&nctemp1413;
nctempchar1* nctemp1410= nctemp1412;
int nctemp1414=LibePuts(nctemp1408,nctemp1410);
int nctemp1416= fp;
nctempchar1* nctemp1418= p->ref;
int nctemp1421=LibePuts(nctemp1416,nctemp1418);
int nctemp1423= fp;
struct nctempchar1 *nctemp1427;
static struct nctempchar1 nctemp1428 = {{ 2}, (char*)" \0"};
nctemp1427=&nctemp1428;
nctempchar1* nctemp1425= nctemp1427;
int nctemp1429=LibePuts(nctemp1423,nctemp1425);
int nctemp1431= fp;
nctempchar1* nctemp1433= p->descr;
int nctemp1436=LibePuts(nctemp1431,nctemp1433);
int nctemp1438= fp;
struct nctempchar1 *nctemp1442;
static struct nctempchar1 nctemp1443 = {{ 2}, (char*)" \0"};
nctemp1442=&nctemp1443;
nctempchar1* nctemp1440= nctemp1442;
int nctemp1444=LibePuts(nctemp1438,nctemp1440);
int nctemp1446= fp;
nctempchar1* nctemp1448= p->global;
int nctemp1451=LibePuts(nctemp1446,nctemp1448);
int nctemp1453= fp;
struct nctempchar1 *nctemp1457;
static struct nctempchar1 nctemp1458 = {{ 2}, (char*)" \0"};
nctemp1457=&nctemp1458;
nctempchar1* nctemp1455= nctemp1457;
int nctemp1459=LibePuts(nctemp1453,nctemp1455);
int nctemp1461= fp;
nctempchar1* nctemp1463= p->module;
int nctemp1466=LibePuts(nctemp1461,nctemp1463);
int nctemp1468= fp;
struct nctempchar1 *nctemp1472;
static struct nctempchar1 nctemp1473 = {{ 2}, (char*)" \0"};
nctemp1472=&nctemp1473;
nctempchar1* nctemp1470= nctemp1472;
int nctemp1474=LibePuts(nctemp1468,nctemp1470);
int nctemp1476= fp;
nctempchar1* nctemp1478= p->forw;
int nctemp1481=LibePuts(nctemp1476,nctemp1478);
int nctemp1483= fp;
struct nctempchar1 *nctemp1487;
static struct nctempchar1 nctemp1488 = {{ 2}, (char*)" \0"};
nctemp1487=&nctemp1488;
nctempchar1* nctemp1485= nctemp1487;
int nctemp1489=LibePuts(nctemp1483,nctemp1485);
int nctemp1491= fp;
struct nctempchar1 *nctemp1495;
static struct nctempchar1 nctemp1496 = {{ 3}, (char*)"\n\0"};
nctemp1495=&nctemp1496;
nctempchar1* nctemp1493= nctemp1495;
int nctemp1497=LibePuts(nctemp1491,nctemp1493);
int nctemp1499= fp;
int nctemp1501=LibeFlush(nctemp1499);
int nctemp1502 = (p->tbl !=0);
if(nctemp1502)
{
tp =p->tbl;
int nctemp1518 = level + 1;
level =nctemp1518;
int nctemp1520= fp;
struct symbol* nctemp1522= tp;
int nctemp1524= level;
int nctemp1526=SymPrsym(nctemp1520,nctemp1522,nctemp1524);
int nctemp1535 = level - 1;
level =nctemp1535;
}
p =p->next;
int nctemp1541= fp;
int nctemp1543=LibeFlush(nctemp1541);
}
int nctemp1544 = (p !=0);
nctemp1251=nctemp1544;}return 1;
}
int SymExport (int fp,struct symbol* p,int level)
{
struct symbol* tq;
int nctemp1549 = (p ==0);
if(nctemp1549)
{
return 0;
}
struct symbol* nctemp1558=SymMktable();
tq =nctemp1558;
int nctemp1560= fp;
struct symbol* nctemp1562= tq;
int nctemp1564= 0;
int nctemp1566=SymPrsym(nctemp1560,nctemp1562,nctemp1564);
p = p->next;
int nctemp1567 = (p !=0);
int nctemp1571=nctemp1567;
while(nctemp1571)
{{
nctempchar1* nctemp1575= p->name;
int nctemp1578=SymIstemp(nctemp1575);
int nctemp1572 = (nctemp1578 ==0);
if(nctemp1572)
{
nctempchar1* nctemp1583= p->module;
struct nctempchar1 *nctemp1588;
static struct nctempchar1 nctemp1589 = {{ 5}, (char*)"void\0"};
nctemp1588=&nctemp1589;
nctempchar1* nctemp1586= nctemp1588;
int nctemp1590=LibeStrcmp(nctemp1583,nctemp1586);
int nctemp1580 = (nctemp1590 ==1);
if(nctemp1580)
{
int nctemp1593= fp;
struct nctempchar1 *nctemp1597;
static struct nctempchar1 nctemp1598 = {{ 2}, (char*)" \0"};
nctemp1597=&nctemp1598;
nctempchar1* nctemp1595= nctemp1597;
int nctemp1599=LibePuts(nctemp1593,nctemp1595);
int nctemp1601= fp;
nctempchar1* nctemp1603= p->name;
int nctemp1606=LibePuts(nctemp1601,nctemp1603);
int nctemp1608= fp;
struct nctempchar1 *nctemp1612;
static struct nctempchar1 nctemp1613 = {{ 2}, (char*)" \0"};
nctemp1612=&nctemp1613;
nctempchar1* nctemp1610= nctemp1612;
int nctemp1614=LibePuts(nctemp1608,nctemp1610);
int nctemp1616= fp;
nctempchar1* nctemp1618= p->type;
int nctemp1621=LibePuts(nctemp1616,nctemp1618);
int nctemp1623= fp;
struct nctempchar1 *nctemp1627;
static struct nctempchar1 nctemp1628 = {{ 2}, (char*)" \0"};
nctemp1627=&nctemp1628;
nctempchar1* nctemp1625= nctemp1627;
int nctemp1629=LibePuts(nctemp1623,nctemp1625);
int nctemp1631= fp;
nctempchar1* nctemp1633= p->func;
int nctemp1636=LibePuts(nctemp1631,nctemp1633);
int nctemp1638= fp;
struct nctempchar1 *nctemp1642;
static struct nctempchar1 nctemp1643 = {{ 2}, (char*)" \0"};
nctemp1642=&nctemp1643;
nctempchar1* nctemp1640= nctemp1642;
int nctemp1644=LibePuts(nctemp1638,nctemp1640);
int nctemp1646= fp;
nctempchar1* nctemp1648= p->array;
int nctemp1651=LibePuts(nctemp1646,nctemp1648);
int nctemp1653= fp;
struct nctempchar1 *nctemp1657;
static struct nctempchar1 nctemp1658 = {{ 2}, (char*)" \0"};
nctemp1657=&nctemp1658;
nctempchar1* nctemp1655= nctemp1657;
int nctemp1659=LibePuts(nctemp1653,nctemp1655);
int nctemp1661= fp;
int nctemp1663= p->rank;
int nctemp1665=LibePuti(nctemp1661,nctemp1663);
int nctemp1667= fp;
struct nctempchar1 *nctemp1671;
static struct nctempchar1 nctemp1672 = {{ 2}, (char*)" \0"};
nctemp1671=&nctemp1672;
nctempchar1* nctemp1669= nctemp1671;
int nctemp1673=LibePuts(nctemp1667,nctemp1669);
int nctemp1675= fp;
int nctemp1677= p->emit;
int nctemp1679=LibePuti(nctemp1675,nctemp1677);
int nctemp1681= fp;
struct nctempchar1 *nctemp1685;
static struct nctempchar1 nctemp1686 = {{ 2}, (char*)" \0"};
nctemp1685=&nctemp1686;
nctempchar1* nctemp1683= nctemp1685;
int nctemp1687=LibePuts(nctemp1681,nctemp1683);
int nctemp1689= fp;
nctempchar1* nctemp1691= p->structure;
int nctemp1694=LibePuts(nctemp1689,nctemp1691);
int nctemp1696= fp;
struct nctempchar1 *nctemp1700;
static struct nctempchar1 nctemp1701 = {{ 2}, (char*)" \0"};
nctemp1700=&nctemp1701;
nctempchar1* nctemp1698= nctemp1700;
int nctemp1702=LibePuts(nctemp1696,nctemp1698);
int nctemp1704= fp;
nctempchar1* nctemp1706= p->ident;
int nctemp1709=LibePuts(nctemp1704,nctemp1706);
int nctemp1711= fp;
struct nctempchar1 *nctemp1715;
static struct nctempchar1 nctemp1716 = {{ 2}, (char*)" \0"};
nctemp1715=&nctemp1716;
nctempchar1* nctemp1713= nctemp1715;
int nctemp1717=LibePuts(nctemp1711,nctemp1713);
int nctemp1719= fp;
nctempchar1* nctemp1721= p->lval;
int nctemp1724=LibePuts(nctemp1719,nctemp1721);
int nctemp1726= fp;
struct nctempchar1 *nctemp1730;
static struct nctempchar1 nctemp1731 = {{ 2}, (char*)" \0"};
nctemp1730=&nctemp1731;
nctempchar1* nctemp1728= nctemp1730;
int nctemp1732=LibePuts(nctemp1726,nctemp1728);
int nctemp1734= fp;
nctempchar1* nctemp1736= p->ref;
int nctemp1739=LibePuts(nctemp1734,nctemp1736);
int nctemp1741= fp;
struct nctempchar1 *nctemp1745;
static struct nctempchar1 nctemp1746 = {{ 2}, (char*)" \0"};
nctemp1745=&nctemp1746;
nctempchar1* nctemp1743= nctemp1745;
int nctemp1747=LibePuts(nctemp1741,nctemp1743);
int nctemp1749= fp;
nctempchar1* nctemp1751= p->descr;
int nctemp1754=LibePuts(nctemp1749,nctemp1751);
int nctemp1756= fp;
struct nctempchar1 *nctemp1760;
static struct nctempchar1 nctemp1761 = {{ 2}, (char*)" \0"};
nctemp1760=&nctemp1761;
nctempchar1* nctemp1758= nctemp1760;
int nctemp1762=LibePuts(nctemp1756,nctemp1758);
int nctemp1764= fp;
nctempchar1* nctemp1766= p->global;
int nctemp1769=LibePuts(nctemp1764,nctemp1766);
int nctemp1771= fp;
struct nctempchar1 *nctemp1775;
static struct nctempchar1 nctemp1776 = {{ 2}, (char*)" \0"};
nctemp1775=&nctemp1776;
nctempchar1* nctemp1773= nctemp1775;
int nctemp1777=LibePuts(nctemp1771,nctemp1773);
int nctemp1779= fp;
nctempchar1* nctemp1781= p->module;
int nctemp1784=LibePuts(nctemp1779,nctemp1781);
int nctemp1786= fp;
struct nctempchar1 *nctemp1790;
static struct nctempchar1 nctemp1791 = {{ 2}, (char*)" \0"};
nctemp1790=&nctemp1791;
nctempchar1* nctemp1788= nctemp1790;
int nctemp1792=LibePuts(nctemp1786,nctemp1788);
int nctemp1794= fp;
struct nctempchar1 *nctemp1798;
static struct nctempchar1 nctemp1799 = {{ 3}, (char*)"\n\0"};
nctemp1798=&nctemp1799;
nctempchar1* nctemp1796= nctemp1798;
int nctemp1800=LibePuts(nctemp1794,nctemp1796);
int nctemp1802= fp;
int nctemp1804=LibeFlush(nctemp1802);
int nctemp1806= fp;
struct symbol* nctemp1810= p;
struct symbol* nctemp1812=SymGetable(nctemp1810);
struct symbol* nctemp1808= nctemp1812;
int nctemp1813= 1;
int nctemp1815=SymPrsym(nctemp1806,nctemp1808,nctemp1813);
}
}
p =p->next;
}
int nctemp1820 = (p !=0);
nctemp1571=nctemp1820;}int nctemp1825= fp;
int nctemp1827=LibeFlush(nctemp1825);
return 1;
}
int Symgetline (int fp,struct symbol* np,nctempchar1 *module)
{
int indent;
int tmp;
int ch;
nctempchar1 *field;
int nctemp1835=400;
nctempchar1 *nctemp1834;
nctemp1834=(nctempchar1*)RunMalloc(sizeof(nctempchar1));
nctemp1834->d[0]=400;
nctemp1834->a=(char *)RunMalloc(sizeof(char)*nctemp1835);
field=nctemp1834;
indent = 0;
ch = 1;
int nctemp1845= fp;
int nctemp1847=LibeGetc(nctemp1845);
ch =nctemp1847;
int nctemp1838 = (ch ==(-1));
if(nctemp1838)
{
int nctemp1849= -1;
return nctemp1849;
}
else{
int nctemp1851= fp;
int nctemp1853=LibeUngetc(nctemp1851);
}
int nctemp1861= fp;
int nctemp1863=LibeGetc(nctemp1861);
ch =nctemp1863;
int nctemp1854 = (ch ==32);
int nctemp1865=nctemp1854;
while(nctemp1865)
{{
int nctemp1874 = indent + 1;
indent =nctemp1874;
}
int nctemp1882= fp;
int nctemp1884=LibeGetc(nctemp1882);
ch =nctemp1884;
int nctemp1875 = (ch ==32);
nctemp1865=nctemp1875;}int nctemp1887= fp;
int nctemp1889=LibeUngetc(nctemp1887);
int nctemp1891= fp;
nctempchar1* nctemp1893= field;
int nctemp1896=LibeGetw(nctemp1891,nctemp1893);
struct symbol* nctemp1898= np;
nctempchar1* nctemp1900= field;
int nctemp1903=SymSetname(nctemp1898,nctemp1900);
int nctemp1905= fp;
nctempchar1* nctemp1907= field;
int nctemp1910=LibeGetw(nctemp1905,nctemp1907);
struct symbol* nctemp1912= np;
nctempchar1* nctemp1914= field;
int nctemp1917=SymSetype(nctemp1912,nctemp1914);
int nctemp1919= fp;
nctempchar1* nctemp1921= field;
int nctemp1924=LibeGetw(nctemp1919,nctemp1921);
struct symbol* nctemp1926= np;
nctempchar1* nctemp1928= field;
int nctemp1931=SymSetfunc(nctemp1926,nctemp1928);
int nctemp1933= fp;
nctempchar1* nctemp1935= field;
int nctemp1938=LibeGetw(nctemp1933,nctemp1935);
struct symbol* nctemp1940= np;
nctempchar1* nctemp1942= field;
int nctemp1945=SymSetarray(nctemp1940,nctemp1942);
int nctemp1947= fp;
nctempchar1* nctemp1949= field;
int nctemp1952=LibeGetw(nctemp1947,nctemp1949);
struct symbol* nctemp1954= np;
nctempchar1* nctemp1958= field;
int nctemp1961=LibeAtoi(nctemp1958);
int nctemp1956= nctemp1961;
int nctemp1962=SymSetrank(nctemp1954,nctemp1956);
int nctemp1964= fp;
nctempchar1* nctemp1966= field;
int nctemp1969=LibeGetw(nctemp1964,nctemp1966);
struct symbol* nctemp1971= np;
nctempchar1* nctemp1975= field;
int nctemp1978=LibeAtoi(nctemp1975);
int nctemp1973= nctemp1978;
int nctemp1979=SymSetemit(nctemp1971,nctemp1973);
int nctemp1981= fp;
nctempchar1* nctemp1983= field;
int nctemp1986=LibeGetw(nctemp1981,nctemp1983);
struct symbol* nctemp1988= np;
nctempchar1* nctemp1990= field;
int nctemp1993=SymSetstruct(nctemp1988,nctemp1990);
int nctemp1995= fp;
nctempchar1* nctemp1997= field;
int nctemp2000=LibeGetw(nctemp1995,nctemp1997);
struct symbol* nctemp2002= np;
nctempchar1* nctemp2004= field;
int nctemp2007=SymSetident(nctemp2002,nctemp2004);
int nctemp2009= fp;
nctempchar1* nctemp2011= field;
int nctemp2014=LibeGetw(nctemp2009,nctemp2011);
struct symbol* nctemp2016= np;
nctempchar1* nctemp2018= field;
int nctemp2021=SymSetlval(nctemp2016,nctemp2018);
int nctemp2023= fp;
nctempchar1* nctemp2025= field;
int nctemp2028=LibeGetw(nctemp2023,nctemp2025);
struct symbol* nctemp2030= np;
nctempchar1* nctemp2032= field;
int nctemp2035=SymSetref(nctemp2030,nctemp2032);
int nctemp2037= fp;
nctempchar1* nctemp2039= field;
int nctemp2042=LibeGetw(nctemp2037,nctemp2039);
struct symbol* nctemp2044= np;
nctempchar1* nctemp2046= field;
int nctemp2049=SymSetdescr(nctemp2044,nctemp2046);
int nctemp2051= fp;
nctempchar1* nctemp2053= field;
int nctemp2056=LibeGetw(nctemp2051,nctemp2053);
struct symbol* nctemp2058= np;
nctempchar1* nctemp2060= field;
int nctemp2063=SymSetglobal(nctemp2058,nctemp2060);
int nctemp2065= fp;
nctempchar1* nctemp2067= field;
int nctemp2070=LibeGetw(nctemp2065,nctemp2067);
struct symbol* nctemp2072= np;
nctempchar1* nctemp2074= module;
int nctemp2077=SymSetmodule(nctemp2072,nctemp2074);
int nctemp2085= fp;
int nctemp2087=LibeGetc(nctemp2085);
ch =nctemp2087;
int nctemp2078 = (ch !=10);
int nctemp2089=nctemp2078;
while(nctemp2089)
{{
tmp =1;
}
int nctemp2101= fp;
int nctemp2103=LibeGetc(nctemp2101);
ch =nctemp2103;
int nctemp2094 = (ch !=10);
nctemp2089=nctemp2094;}return indent;
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
struct symbol* nctemp2110=SymMktable();
ttbl =nctemp2110;
struct symbol* nctemp2112= ttbl;
nctempchar1* nctemp2114= module;
int nctemp2117=SymSetmodule(nctemp2112,nctemp2114);
struct nctempchar1 *nctemp2124;
static struct nctempchar1 nctemp2125 = {{ 6}, (char*)"dummy\0"};
nctemp2124=&nctemp2125;
nctempchar1* nctemp2122= nctemp2124;
struct symbol* nctemp2126= ttbl;
struct symbol* nctemp2128=SymMkname(nctemp2122,nctemp2126);
mp =nctemp2128;
int nctemp2133= fp;
struct symbol* nctemp2135= mp;
nctempchar1* nctemp2137= module;
int nctemp2140=Symgetline(nctemp2133,nctemp2135,nctemp2137);
indent =nctemp2140;
oldindent = 1;
indent = 1;
int nctemp2142=1;
while(nctemp2142)
{{
int nctemp2147= fp;
struct symbol* nctemp2149= mp;
nctempchar1* nctemp2151= module;
int nctemp2154=Symgetline(nctemp2147,nctemp2149,nctemp2151);
indent =nctemp2154;
int nctemp2155 = (indent < 0);
if(nctemp2155)
{
return 1;
}
nctempchar1* nctemp2163= mp->name;
struct nctempchar1 *nctemp2168;
static struct nctempchar1 nctemp2169 = {{ 7}, (char*)"#first\0"};
nctemp2168=&nctemp2169;
nctempchar1* nctemp2166= nctemp2168;
int nctemp2170=LibeStrcmp(nctemp2163,nctemp2166);
int nctemp2160 = (nctemp2170 ==1);
if(nctemp2160)
{
int nctemp2176= fp;
struct symbol* nctemp2178= mp;
nctempchar1* nctemp2180= module;
int nctemp2183=Symgetline(nctemp2176,nctemp2178,nctemp2180);
indent =nctemp2183;
}
int nctemp2184 = (indent ==oldindent);
if(nctemp2184)
{
struct symbol* nctemp2189= ttbl;
struct symbol* nctemp2191= tbl;
int nctemp2193=SymCpytble(nctemp2189,nctemp2191);
oldindent =indent;
}
int nctemp2198 = (indent > oldindent);
if(nctemp2198)
{
struct symbol* nctemp2206=SymMktable();
ntbl =nctemp2206;
struct symbol* nctemp2208= ntbl;
nctempchar1* nctemp2210= module;
int nctemp2213=SymSetmodule(nctemp2208,nctemp2210);
np =tbl->last;
struct symbol* nctemp2219= np;
struct symbol* nctemp2221= ntbl;
struct symbol* nctemp2223=SymSetable(nctemp2219,nctemp2221);
tbl =ntbl;
struct symbol* nctemp2229= ttbl;
struct symbol* nctemp2231= tbl;
int nctemp2233=SymCpytble(nctemp2229,nctemp2231);
oldindent =indent;
}
int nctemp2238 = (indent < oldindent);
if(nctemp2238)
{
tbl =rtbl;
int nctemp2246 = (indent ==1);
if(nctemp2246)
{
tbl =rtbl;
}
else{
i =0;
int nctemp2258 = (i < indent);
while(nctemp2258){
{
struct symbol* nctemp2266= tbl->last;
struct symbol* nctemp2268=SymGetable(nctemp2266);
tbl =nctemp2268;
}
int nctemp2277 = i + 1;
i =nctemp2277;
int nctemp2278 = (i < indent);
nctemp2258=nctemp2278;
}
}
struct symbol* nctemp2283= ttbl;
struct symbol* nctemp2285= tbl;
int nctemp2287=SymCpytble(nctemp2283,nctemp2285);
oldindent =indent;
}
}
nctemp2142=1;}int nctemp2294= fp;
int nctemp2296=LibeClose(nctemp2294);
return 1;
}
}
