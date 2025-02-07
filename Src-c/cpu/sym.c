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
SymEtp =etp;
return SymEtp;
}
struct symbol* SymGetltp ()
{
return SymLtp;
}
struct symbol* SymSetltp (struct symbol* ltp)
{
SymLtp =ltp;
return SymLtp;
}
struct symbol* SymGetstp ()
{
return SymStp;
}
struct symbol* SymSetstp (struct symbol* stp)
{
SymStp =stp;
return SymStp;
}
struct symbol* SymLookup (nctempchar1 *s,struct symbol* tp)
{
struct symbol* np;
np =tp;
int nctemp90 = (np !=0);
int nctemp94=nctemp90;
while(nctemp94)
{{
nctempchar1* nctemp98= s;
nctempchar1* nctemp101= np->name;
int nctemp104=LibeStrcmp(nctemp98,nctemp101);
int nctemp95 = (nctemp104 ==1);
if(nctemp95)
{
return np;
}
np =np->next;
}
int nctemp111 = (np !=0);
nctemp94=nctemp111;}np =0;
return np;
}
struct symbol* SymMkname (nctempchar1 *name,struct symbol* tp)
{
struct symbol* np;
struct symbol* lp;
nctempchar1* nctemp126= name;
struct symbol* nctemp129= tp;
struct symbol* nctemp131=SymLookup(nctemp126,nctemp129);
np =nctemp131;
int nctemp119 = (np ==0);
if(nctemp119)
{
struct symbol *nctemp137=(struct symbol*)RunMalloc(sizeof(struct symbol));
np =nctemp137;
int nctemp139 = (np ==0);
if(nctemp139)
{
return np;
}
nctempchar1* nctemp152= name;
nctempchar1* nctemp155=LibeStrsave(nctemp152);
np->name=nctemp155;
nctempchar1 *nctemp145 =np->name;
int nctemp144 =(nctemp145==0);
if(nctemp144)
{
np =0;
return np;
}
lp =tp->last;
lp->next =np;
tp->last =np;
np->next =0;
struct nctempchar1 *nctemp184;
static struct nctempchar1 nctemp185 = {{ 5}, (char*)"void\0"};
nctemp184=&nctemp185;
nctempchar1* nctemp182= nctemp184;
nctempchar1* nctemp186=LibeStrsave(nctemp182);
np->type=nctemp186;
struct nctempchar1 *nctemp194;
static struct nctempchar1 nctemp195 = {{ 5}, (char*)"void\0"};
nctemp194=&nctemp195;
nctempchar1* nctemp192= nctemp194;
nctempchar1* nctemp196=LibeStrsave(nctemp192);
np->func=nctemp196;
struct nctempchar1 *nctemp204;
static struct nctempchar1 nctemp205 = {{ 5}, (char*)"void\0"};
nctemp204=&nctemp205;
nctempchar1* nctemp202= nctemp204;
nctempchar1* nctemp206=LibeStrsave(nctemp202);
np->array=nctemp206;
struct nctempchar1 *nctemp214;
static struct nctempchar1 nctemp215 = {{ 5}, (char*)"void\0"};
nctemp214=&nctemp215;
nctempchar1* nctemp212= nctemp214;
nctempchar1* nctemp216=LibeStrsave(nctemp212);
np->structure=nctemp216;
np->tbl =0;
struct nctempchar1 *nctemp228;
static struct nctempchar1 nctemp229 = {{ 5}, (char*)"void\0"};
nctemp228=&nctemp229;
nctempchar1* nctemp226= nctemp228;
nctempchar1* nctemp230=LibeStrsave(nctemp226);
np->ident=nctemp230;
np->rank =0;
struct nctempchar1 *nctemp242;
static struct nctempchar1 nctemp243 = {{ 5}, (char*)"void\0"};
nctemp242=&nctemp243;
nctempchar1* nctemp240= nctemp242;
nctempchar1* nctemp244=LibeStrsave(nctemp240);
np->lval=nctemp244;
struct nctempchar1 *nctemp252;
static struct nctempchar1 nctemp253 = {{ 5}, (char*)"void\0"};
nctemp252=&nctemp253;
nctempchar1* nctemp250= nctemp252;
nctempchar1* nctemp254=LibeStrsave(nctemp250);
np->ref=nctemp254;
struct nctempchar1 *nctemp262;
static struct nctempchar1 nctemp263 = {{ 5}, (char*)"void\0"};
nctemp262=&nctemp263;
nctempchar1* nctemp260= nctemp262;
nctempchar1* nctemp264=LibeStrsave(nctemp260);
np->descr=nctemp264;
struct nctempchar1 *nctemp272;
static struct nctempchar1 nctemp273 = {{ 5}, (char*)"void\0"};
nctemp272=&nctemp273;
nctempchar1* nctemp270= nctemp272;
nctempchar1* nctemp274=LibeStrsave(nctemp270);
np->global=nctemp274;
struct nctempchar1 *nctemp282;
static struct nctempchar1 nctemp283 = {{ 5}, (char*)"void\0"};
nctemp282=&nctemp283;
nctempchar1* nctemp280= nctemp282;
nctempchar1* nctemp284=LibeStrsave(nctemp280);
np->module=nctemp284;
struct nctempchar1 *nctemp292;
static struct nctempchar1 nctemp293 = {{ 5}, (char*)"void\0"};
nctemp292=&nctemp293;
nctempchar1* nctemp290= nctemp292;
nctempchar1* nctemp294=LibeStrsave(nctemp290);
np->forw=nctemp294;
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
np =tp;
sp =0;
prev =np;
int nctemp317 = (np !=0);
int nctemp321=nctemp317;
while(nctemp321)
{{
nctempchar1* nctemp325= name;
nctempchar1* nctemp328= np->name;
int nctemp331=LibeStrcmp(nctemp325,nctemp328);
int nctemp322 = (nctemp331 ==1);
if(nctemp322)
{
sp =np;
np =0;
}
else{
prev =np;
np =np->next;
}
}
int nctemp349 = (np !=0);
nctemp321=nctemp349;}np =sp;
int nctemp357 = (np ==0);
if(nctemp357)
{
return np;
}
int nctemp362 = (np->next ==0);
if(nctemp362)
{
prev->last =prev;
}
prev->next =np->next;
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
struct symbol *nctemp410=(struct symbol*)RunMalloc(sizeof(struct symbol));
tp =nctemp410;
int nctemp412 = (tp ==0);
if(nctemp412)
{
return tp;
}
struct nctempchar1 *nctemp424;
static struct nctempchar1 nctemp425 = {{ 7}, (char*)"#first\0"};
nctemp424=&nctemp425;
nctempchar1* nctemp422= nctemp424;
nctempchar1* nctemp426=LibeStrsave(nctemp422);
tp->name=nctemp426;
struct nctempchar1 *nctemp434;
static struct nctempchar1 nctemp435 = {{ 5}, (char*)"void\0"};
nctemp434=&nctemp435;
nctempchar1* nctemp432= nctemp434;
nctempchar1* nctemp436=LibeStrsave(nctemp432);
tp->type=nctemp436;
tp->tbl =0;
struct nctempchar1 *nctemp448;
static struct nctempchar1 nctemp449 = {{ 5}, (char*)"void\0"};
nctemp448=&nctemp449;
nctempchar1* nctemp446= nctemp448;
nctempchar1* nctemp450=LibeStrsave(nctemp446);
tp->func=nctemp450;
struct nctempchar1 *nctemp458;
static struct nctempchar1 nctemp459 = {{ 5}, (char*)"void\0"};
nctemp458=&nctemp459;
nctempchar1* nctemp456= nctemp458;
nctempchar1* nctemp460=LibeStrsave(nctemp456);
tp->ref=nctemp460;
struct nctempchar1 *nctemp468;
static struct nctempchar1 nctemp469 = {{ 5}, (char*)"void\0"};
nctemp468=&nctemp469;
nctempchar1* nctemp466= nctemp468;
nctempchar1* nctemp470=LibeStrsave(nctemp466);
tp->descr=nctemp470;
struct nctempchar1 *nctemp478;
static struct nctempchar1 nctemp479 = {{ 5}, (char*)"void\0"};
nctemp478=&nctemp479;
nctempchar1* nctemp476= nctemp478;
nctempchar1* nctemp480=LibeStrsave(nctemp476);
tp->array=nctemp480;
struct nctempchar1 *nctemp488;
static struct nctempchar1 nctemp489 = {{ 5}, (char*)"void\0"};
nctemp488=&nctemp489;
nctempchar1* nctemp486= nctemp488;
nctempchar1* nctemp490=LibeStrsave(nctemp486);
tp->structure=nctemp490;
struct nctempchar1 *nctemp498;
static struct nctempchar1 nctemp499 = {{ 5}, (char*)"void\0"};
nctemp498=&nctemp499;
nctempchar1* nctemp496= nctemp498;
nctempchar1* nctemp500=LibeStrsave(nctemp496);
tp->ident=nctemp500;
struct nctempchar1 *nctemp508;
static struct nctempchar1 nctemp509 = {{ 5}, (char*)"void\0"};
nctemp508=&nctemp509;
nctempchar1* nctemp506= nctemp508;
nctempchar1* nctemp510=LibeStrsave(nctemp506);
tp->lval=nctemp510;
struct nctempchar1 *nctemp518;
static struct nctempchar1 nctemp519 = {{ 5}, (char*)"void\0"};
nctemp518=&nctemp519;
nctempchar1* nctemp516= nctemp518;
nctempchar1* nctemp520=LibeStrsave(nctemp516);
tp->global=nctemp520;
struct nctempchar1 *nctemp528;
static struct nctempchar1 nctemp529 = {{ 5}, (char*)"void\0"};
nctemp528=&nctemp529;
nctempchar1* nctemp526= nctemp528;
nctempchar1* nctemp530=LibeStrsave(nctemp526);
tp->module=nctemp530;
struct nctempchar1 *nctemp538;
static struct nctempchar1 nctemp539 = {{ 5}, (char*)"void\0"};
nctemp538=&nctemp539;
nctempchar1* nctemp536= nctemp538;
nctempchar1* nctemp540=LibeStrsave(nctemp536);
tp->forw=nctemp540;
tp->emit =1;
tp->next =0;
tp->last =tp;
return tp;
}
struct symbol* SymMvnext (struct symbol* np)
{
int nctemp554 = (np ==0);
if(nctemp554)
{
return np;
}
else{
return np->next;
}
}
struct symbol* SymSetable (struct symbol* np,struct symbol* tp)
{
np->tbl =tp;
return np;
}
int SymSetname (struct symbol* p,nctempchar1 *name)
{
nctempchar1 *nctemp569 =name;
int nctemp568 =(nctemp569!=0);
int nctemp574 = (p !=0);
int nctemp565 = (nctemp568 && nctemp574);
if(nctemp565)
{
RunFree(p->name->a);
RunFree(p->name);
nctempchar1* nctemp586= name;
nctempchar1* nctemp589=LibeStrsave(nctemp586);
p->name=nctemp589;
}
return 1;
}
int SymSetype (struct symbol* p,nctempchar1 *type)
{
nctempchar1 *nctemp595 =type;
int nctemp594 =(nctemp595!=0);
int nctemp600 = (p !=0);
int nctemp591 = (nctemp594 && nctemp600);
if(nctemp591)
{
RunFree(p->type->a);
RunFree(p->type);
nctempchar1* nctemp612= type;
nctempchar1* nctemp615=LibeStrsave(nctemp612);
p->type=nctemp615;
}
return 1;
}
nctempchar1 * SymGetype (struct symbol* np)
{
return np->type;
}
int SymSetfunc (struct symbol* p,nctempchar1 *func)
{
nctempchar1 *nctemp623 =func;
int nctemp622 =(nctemp623!=0);
int nctemp628 = (p !=0);
int nctemp619 = (nctemp622 && nctemp628);
if(nctemp619)
{
RunFree(p->func->a);
RunFree(p->func);
nctempchar1* nctemp640= func;
nctempchar1* nctemp643=LibeStrsave(nctemp640);
p->func=nctemp643;
}
return 1;
}
nctempchar1 * SymGetfunc (struct symbol* np)
{
return np->func;
}
int SymSetarray (struct symbol* p,nctempchar1 *array)
{
nctempchar1 *nctemp651 =array;
int nctemp650 =(nctemp651!=0);
int nctemp656 = (p !=0);
int nctemp647 = (nctemp650 && nctemp656);
if(nctemp647)
{
RunFree(p->array->a);
RunFree(p->array);
nctempchar1* nctemp668= array;
nctempchar1* nctemp671=LibeStrsave(nctemp668);
p->array=nctemp671;
}
return 1;
}
nctempchar1 * SymGetarray (struct symbol* np)
{
return np->array;
}
int SymSetstruct (struct symbol* p,nctempchar1 *structure)
{
nctempchar1 *nctemp679 =structure;
int nctemp678 =(nctemp679!=0);
int nctemp684 = (p !=0);
int nctemp675 = (nctemp678 && nctemp684);
if(nctemp675)
{
RunFree(p->structure->a);
RunFree(p->structure);
nctempchar1* nctemp696= structure;
nctempchar1* nctemp699=LibeStrsave(nctemp696);
p->structure=nctemp699;
}
return 1;
}
nctempchar1 * SymGetstruct (struct symbol* np)
{
return np->structure;
}
int SymSetident (struct symbol* p,nctempchar1 *ident)
{
nctempchar1 *nctemp707 =ident;
int nctemp706 =(nctemp707!=0);
int nctemp712 = (p !=0);
int nctemp703 = (nctemp706 && nctemp712);
if(nctemp703)
{
RunFree(p->ident->a);
RunFree(p->ident);
nctempchar1* nctemp724= ident;
nctempchar1* nctemp727=LibeStrsave(nctemp724);
p->ident=nctemp727;
}
return 1;
}
nctempchar1 * SymGetident (struct symbol* np)
{
return np->ident;
}
int SymSetlval (struct symbol* p,nctempchar1 *lval)
{
nctempchar1 *nctemp735 =lval;
int nctemp734 =(nctemp735!=0);
int nctemp740 = (p !=0);
int nctemp731 = (nctemp734 && nctemp740);
if(nctemp731)
{
RunFree(p->lval->a);
RunFree(p->lval);
nctempchar1* nctemp752= lval;
nctempchar1* nctemp755=LibeStrsave(nctemp752);
p->lval=nctemp755;
}
return 1;
}
nctempchar1 * SymGetlval (struct symbol* np)
{
return np->lval;
}
int SymSetrank (struct symbol* np,int rank)
{
np->rank =rank;
return 1;
}
int SymGetrank (struct symbol* np)
{
return np->rank;
}
int SymSetemit (struct symbol* np,int emit)
{
np->emit =emit;
return 1;
}
int SymGetemit (struct symbol* np)
{
return np->emit;
}
int SymSetref (struct symbol* p,nctempchar1 *ref)
{
nctempchar1 *nctemp775 =ref;
int nctemp774 =(nctemp775!=0);
int nctemp780 = (p !=0);
int nctemp771 = (nctemp774 && nctemp780);
if(nctemp771)
{
RunFree(p->ref->a);
RunFree(p->ref);
nctempchar1* nctemp792= ref;
nctempchar1* nctemp795=LibeStrsave(nctemp792);
p->ref=nctemp795;
}
return 1;
}
nctempchar1 * SymGetref (struct symbol* np)
{
return np->ref;
}
int SymSetmodule (struct symbol* p,nctempchar1 *module)
{
nctempchar1 *nctemp803 =module;
int nctemp802 =(nctemp803!=0);
int nctemp808 = (p !=0);
int nctemp799 = (nctemp802 && nctemp808);
if(nctemp799)
{
RunFree(p->module->a);
RunFree(p->module);
nctempchar1* nctemp820= module;
nctempchar1* nctemp823=LibeStrsave(nctemp820);
p->module=nctemp823;
}
return 1;
}
nctempchar1 * SymGetmodule (struct symbol* np)
{
return np->module;
}
int SymSetforw (struct symbol* p,nctempchar1 *forw)
{
nctempchar1 *nctemp831 =forw;
int nctemp830 =(nctemp831!=0);
int nctemp836 = (p !=0);
int nctemp827 = (nctemp830 && nctemp836);
if(nctemp827)
{
RunFree(p->forw->a);
RunFree(p->forw);
nctempchar1* nctemp848= forw;
nctempchar1* nctemp851=LibeStrsave(nctemp848);
p->forw=nctemp851;
}
return 1;
}
nctempchar1 * SymGetforw (struct symbol* np)
{
return np->forw;
}
int SymSetdescr (struct symbol* p,nctempchar1 *descr)
{
nctempchar1 *nctemp859 =descr;
int nctemp858 =(nctemp859!=0);
int nctemp864 = (p !=0);
int nctemp855 = (nctemp858 && nctemp864);
if(nctemp855)
{
RunFree(p->descr->a);
RunFree(p->descr);
nctempchar1* nctemp876= descr;
nctempchar1* nctemp879=LibeStrsave(nctemp876);
p->descr=nctemp879;
}
return 1;
}
nctempchar1 * SymGetdescr (struct symbol* np)
{
return np->descr;
}
int SymSetglobal (struct symbol* p,nctempchar1 *global)
{
nctempchar1 *nctemp887 =global;
int nctemp886 =(nctemp887!=0);
int nctemp892 = (p !=0);
int nctemp883 = (nctemp886 && nctemp892);
if(nctemp883)
{
RunFree(p->global->a);
RunFree(p->global);
nctempchar1* nctemp904= global;
nctempchar1* nctemp907=LibeStrsave(nctemp904);
p->global=nctemp907;
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
int nctemp911 = (p ==0);
if(nctemp911)
{
return 0;
}
prev =0;
int nctemp920 = (p !=0);
int nctemp924=nctemp920;
while(nctemp924)
{{
next =p->next;
struct nctempchar1 *nctemp934;
static struct nctempchar1 nctemp935 = {{ 9}, (char*)"#arglist\0"};
nctemp934=&nctemp935;
nctempchar1* nctemp932= nctemp934;
nctempchar1* nctemp936= p->name;
int nctemp939=LibeStrcmp(nctemp932,nctemp936);
int nctemp929 = (nctemp939 ==0);
if(nctemp929)
{
struct nctempchar1 *nctemp946;
static struct nctempchar1 nctemp947 = {{ 6}, (char*)"#self\0"};
nctemp946=&nctemp947;
nctempchar1* nctemp944= nctemp946;
nctempchar1* nctemp948= p->name;
int nctemp951=LibeStrcmp(nctemp944,nctemp948);
int nctemp941 = (nctemp951 ==0);
if(nctemp941)
{
struct nctempchar1 *nctemp958;
static struct nctempchar1 nctemp959 = {{ 7}, (char*)"#first\0"};
nctemp958=&nctemp959;
nctempchar1* nctemp956= nctemp958;
nctempchar1* nctemp960= p->name;
int nctemp963=LibeStrcmp(nctemp956,nctemp960);
int nctemp953 = (nctemp963 ==0);
if(nctemp953)
{
int nctemp965 = (p->tbl !=0);
if(nctemp965)
{
struct symbol* nctemp970= p->tbl;
int nctemp972=SymRmtable(nctemp970);
p->tbl =0;
}
int nctemp977 = (prev !=0);
if(nctemp977)
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
int nctemp1024 = (p !=0);
nctemp924=nctemp1024;}return 1;
}
struct symbol* SymLook (nctempchar1 *name)
{
struct symbol* tp;
struct symbol* ap;
nctempchar1* nctemp1036= name;
struct symbol* nctemp1039= SymEtp;
struct symbol* nctemp1041=SymLookup(nctemp1036,nctemp1039);
tp =nctemp1041;
int nctemp1029 = (tp ==0);
if(nctemp1029)
{
nctempchar1* nctemp1050= name;
struct symbol* nctemp1053= SymLtp;
struct symbol* nctemp1055=SymLookup(nctemp1050,nctemp1053);
tp =nctemp1055;
int nctemp1043 = (tp ==0);
if(nctemp1043)
{
struct nctempchar1 *nctemp1063;
static struct nctempchar1 nctemp1064 = {{ 9}, (char*)"#arglist\0"};
nctemp1063=&nctemp1064;
nctempchar1* nctemp1061= nctemp1063;
struct symbol* nctemp1065= SymLtp;
struct symbol* nctemp1067=SymLookup(nctemp1061,nctemp1065);
tp =nctemp1067;
int nctemp1068 = (tp ==0);
if(nctemp1068)
{
return tp;
}
struct symbol* nctemp1077= tp;
struct symbol* nctemp1079=SymGetable(nctemp1077);
ap =nctemp1079;
int nctemp1080 = (ap ==0);
if(nctemp1080)
{
return ap;
}
nctempchar1* nctemp1092= name;
struct symbol* nctemp1095= ap;
struct symbol* nctemp1097=SymLookup(nctemp1092,nctemp1095);
tp =nctemp1097;
int nctemp1085 = (tp ==0);
if(nctemp1085)
{
nctempchar1* nctemp1103= name;
struct symbol* nctemp1106= SymEtp;
struct symbol* nctemp1108=SymLookup(nctemp1103,nctemp1106);
tp =nctemp1108;
}
}
}
return tp;
}
int SymCpytble (struct symbol* tp,struct symbol* up)
{
struct symbol* wp;
struct symbol* nctemp1114= tp;
struct symbol* nctemp1116=SymMvnext(nctemp1114);
tp =nctemp1116;
int nctemp1117 = (tp !=0);
int nctemp1121=nctemp1117;
while(nctemp1121)
{{
struct symbol* nctemp1128= tp;
nctempchar1* nctemp1130=SymGetname(nctemp1128);
nctempchar1* nctemp1126= nctemp1130;
struct symbol* nctemp1131= up;
struct symbol* nctemp1133=SymMkname(nctemp1126,nctemp1131);
wp =nctemp1133;
struct symbol* nctemp1135= wp;
struct symbol* nctemp1139= tp;
nctempchar1* nctemp1141=SymGetype(nctemp1139);
nctempchar1* nctemp1137= nctemp1141;
int nctemp1142=SymSetype(nctemp1135,nctemp1137);
struct symbol* nctemp1144= wp;
struct symbol* nctemp1148= tp;
nctempchar1* nctemp1150=SymGetfunc(nctemp1148);
nctempchar1* nctemp1146= nctemp1150;
int nctemp1151=SymSetfunc(nctemp1144,nctemp1146);
struct symbol* nctemp1153= wp;
struct symbol* nctemp1157= tp;
nctempchar1* nctemp1159=SymGetarray(nctemp1157);
nctempchar1* nctemp1155= nctemp1159;
int nctemp1160=SymSetarray(nctemp1153,nctemp1155);
struct symbol* nctemp1162= wp;
struct symbol* nctemp1166= tp;
int nctemp1168=SymGetrank(nctemp1166);
int nctemp1164= nctemp1168;
int nctemp1169=SymSetrank(nctemp1162,nctemp1164);
struct symbol* nctemp1171= wp;
struct symbol* nctemp1175= tp;
nctempchar1* nctemp1177=SymGetstruct(nctemp1175);
nctempchar1* nctemp1173= nctemp1177;
int nctemp1178=SymSetstruct(nctemp1171,nctemp1173);
struct symbol* nctemp1180= wp;
struct symbol* nctemp1184= tp;
nctempchar1* nctemp1186=SymGetident(nctemp1184);
nctempchar1* nctemp1182= nctemp1186;
int nctemp1187=SymSetident(nctemp1180,nctemp1182);
struct symbol* nctemp1189= wp;
struct symbol* nctemp1193= tp;
nctempchar1* nctemp1195=SymGetlval(nctemp1193);
nctempchar1* nctemp1191= nctemp1195;
int nctemp1196=SymSetlval(nctemp1189,nctemp1191);
struct symbol* nctemp1198= wp;
struct symbol* nctemp1202= tp;
nctempchar1* nctemp1204=SymGetref(nctemp1202);
nctempchar1* nctemp1200= nctemp1204;
int nctemp1205=SymSetref(nctemp1198,nctemp1200);
struct symbol* nctemp1207= wp;
struct symbol* nctemp1211= tp;
nctempchar1* nctemp1213=SymGetdescr(nctemp1211);
nctempchar1* nctemp1209= nctemp1213;
int nctemp1214=SymSetdescr(nctemp1207,nctemp1209);
struct symbol* nctemp1216= wp;
struct symbol* nctemp1220= tp;
int nctemp1222=SymGetemit(nctemp1220);
int nctemp1218= nctemp1222;
int nctemp1223=SymSetemit(nctemp1216,nctemp1218);
struct symbol* nctemp1225= wp;
struct symbol* nctemp1229= tp;
nctempchar1* nctemp1231=SymGetmodule(nctemp1229);
nctempchar1* nctemp1227= nctemp1231;
int nctemp1232=SymSetmodule(nctemp1225,nctemp1227);
struct symbol* nctemp1237= tp;
struct symbol* nctemp1239=SymMvnext(nctemp1237);
tp =nctemp1239;
}
int nctemp1240 = (tp !=0);
nctemp1121=nctemp1240;}return 1;
}
struct symbol* SymAddtble (struct symbol* tp,struct symbol* sp)
{
struct symbol* start;
struct symbol* prev;
start =tp;
int nctemp1249 = (sp ==0);
if(nctemp1249)
{
return start;
}
int nctemp1254 = (tp ==0);
if(nctemp1254)
{
return start;
}
struct symbol* nctemp1262= sp;
struct symbol* nctemp1264=SymMvnext(nctemp1262);
int nctemp1259 = (nctemp1264 ==0);
if(nctemp1259)
{
return start;
}
tp->last =sp->last;
struct symbol* nctemp1275= tp;
struct symbol* nctemp1277=SymMvnext(nctemp1275);
tp =nctemp1277;
int nctemp1278 = (tp ==0);
if(nctemp1278)
{
struct symbol* nctemp1286= sp;
struct symbol* nctemp1288=SymMvnext(nctemp1286);
start->next =nctemp1288;
return start;
}
int nctemp1290 = (tp !=0);
int nctemp1294=nctemp1290;
while(nctemp1294)
{{
prev =tp;
struct symbol* nctemp1303= tp;
struct symbol* nctemp1305=SymMvnext(nctemp1303);
tp =nctemp1305;
}
int nctemp1306 = (tp !=0);
nctemp1294=nctemp1306;}tp =prev;
struct symbol* nctemp1318= sp;
struct symbol* nctemp1320=SymMvnext(nctemp1318);
tp->next =nctemp1320;
return start;
}
int SymPrsym (int fp,struct symbol* p,int level)
{
int i;
struct symbol* tp;
int nctemp1322 = (p ==0);
if(nctemp1322)
{
return 0;
}
int nctemp1327 = (p !=0);
int nctemp1331=nctemp1327;
while(nctemp1331)
{{
i =0;
int nctemp1336 = (i <= level);
int nctemp1340=nctemp1336;
while(nctemp1340)
{{
int nctemp1342= fp;
struct nctempchar1 *nctemp1346;
static struct nctempchar1 nctemp1347 = {{ 2}, (char*)" \0"};
nctemp1346=&nctemp1347;
nctempchar1* nctemp1344= nctemp1346;
int nctemp1348=LibePuts(nctemp1342,nctemp1344);
int nctemp1357 = i + 1;
i =nctemp1357;
}
int nctemp1358 = (i <= level);
nctemp1340=nctemp1358;}int nctemp1363= fp;
nctempchar1* nctemp1365= p->name;
int nctemp1368=LibePuts(nctemp1363,nctemp1365);
int nctemp1370= fp;
struct nctempchar1 *nctemp1374;
static struct nctempchar1 nctemp1375 = {{ 2}, (char*)" \0"};
nctemp1374=&nctemp1375;
nctempchar1* nctemp1372= nctemp1374;
int nctemp1376=LibePuts(nctemp1370,nctemp1372);
int nctemp1378= fp;
nctempchar1* nctemp1380= p->type;
int nctemp1383=LibePuts(nctemp1378,nctemp1380);
int nctemp1385= fp;
struct nctempchar1 *nctemp1389;
static struct nctempchar1 nctemp1390 = {{ 2}, (char*)" \0"};
nctemp1389=&nctemp1390;
nctempchar1* nctemp1387= nctemp1389;
int nctemp1391=LibePuts(nctemp1385,nctemp1387);
int nctemp1393= fp;
nctempchar1* nctemp1395= p->func;
int nctemp1398=LibePuts(nctemp1393,nctemp1395);
int nctemp1400= fp;
struct nctempchar1 *nctemp1404;
static struct nctempchar1 nctemp1405 = {{ 2}, (char*)" \0"};
nctemp1404=&nctemp1405;
nctempchar1* nctemp1402= nctemp1404;
int nctemp1406=LibePuts(nctemp1400,nctemp1402);
int nctemp1408= fp;
nctempchar1* nctemp1410= p->array;
int nctemp1413=LibePuts(nctemp1408,nctemp1410);
int nctemp1415= fp;
struct nctempchar1 *nctemp1419;
static struct nctempchar1 nctemp1420 = {{ 2}, (char*)" \0"};
nctemp1419=&nctemp1420;
nctempchar1* nctemp1417= nctemp1419;
int nctemp1421=LibePuts(nctemp1415,nctemp1417);
int nctemp1423= fp;
int nctemp1425= p->rank;
int nctemp1427=LibePuti(nctemp1423,nctemp1425);
int nctemp1429= fp;
struct nctempchar1 *nctemp1433;
static struct nctempchar1 nctemp1434 = {{ 2}, (char*)" \0"};
nctemp1433=&nctemp1434;
nctempchar1* nctemp1431= nctemp1433;
int nctemp1435=LibePuts(nctemp1429,nctemp1431);
int nctemp1437= fp;
int nctemp1439= p->emit;
int nctemp1441=LibePuti(nctemp1437,nctemp1439);
int nctemp1443= fp;
struct nctempchar1 *nctemp1447;
static struct nctempchar1 nctemp1448 = {{ 2}, (char*)" \0"};
nctemp1447=&nctemp1448;
nctempchar1* nctemp1445= nctemp1447;
int nctemp1449=LibePuts(nctemp1443,nctemp1445);
int nctemp1451= fp;
nctempchar1* nctemp1453= p->structure;
int nctemp1456=LibePuts(nctemp1451,nctemp1453);
int nctemp1458= fp;
struct nctempchar1 *nctemp1462;
static struct nctempchar1 nctemp1463 = {{ 2}, (char*)" \0"};
nctemp1462=&nctemp1463;
nctempchar1* nctemp1460= nctemp1462;
int nctemp1464=LibePuts(nctemp1458,nctemp1460);
int nctemp1466= fp;
nctempchar1* nctemp1468= p->ident;
int nctemp1471=LibePuts(nctemp1466,nctemp1468);
int nctemp1473= fp;
struct nctempchar1 *nctemp1477;
static struct nctempchar1 nctemp1478 = {{ 2}, (char*)" \0"};
nctemp1477=&nctemp1478;
nctempchar1* nctemp1475= nctemp1477;
int nctemp1479=LibePuts(nctemp1473,nctemp1475);
int nctemp1481= fp;
nctempchar1* nctemp1483= p->lval;
int nctemp1486=LibePuts(nctemp1481,nctemp1483);
int nctemp1488= fp;
struct nctempchar1 *nctemp1492;
static struct nctempchar1 nctemp1493 = {{ 2}, (char*)" \0"};
nctemp1492=&nctemp1493;
nctempchar1* nctemp1490= nctemp1492;
int nctemp1494=LibePuts(nctemp1488,nctemp1490);
int nctemp1496= fp;
nctempchar1* nctemp1498= p->ref;
int nctemp1501=LibePuts(nctemp1496,nctemp1498);
int nctemp1503= fp;
struct nctempchar1 *nctemp1507;
static struct nctempchar1 nctemp1508 = {{ 2}, (char*)" \0"};
nctemp1507=&nctemp1508;
nctempchar1* nctemp1505= nctemp1507;
int nctemp1509=LibePuts(nctemp1503,nctemp1505);
int nctemp1511= fp;
nctempchar1* nctemp1513= p->descr;
int nctemp1516=LibePuts(nctemp1511,nctemp1513);
int nctemp1518= fp;
struct nctempchar1 *nctemp1522;
static struct nctempchar1 nctemp1523 = {{ 2}, (char*)" \0"};
nctemp1522=&nctemp1523;
nctempchar1* nctemp1520= nctemp1522;
int nctemp1524=LibePuts(nctemp1518,nctemp1520);
int nctemp1526= fp;
nctempchar1* nctemp1528= p->global;
int nctemp1531=LibePuts(nctemp1526,nctemp1528);
int nctemp1533= fp;
struct nctempchar1 *nctemp1537;
static struct nctempchar1 nctemp1538 = {{ 2}, (char*)" \0"};
nctemp1537=&nctemp1538;
nctempchar1* nctemp1535= nctemp1537;
int nctemp1539=LibePuts(nctemp1533,nctemp1535);
int nctemp1541= fp;
nctempchar1* nctemp1543= p->module;
int nctemp1546=LibePuts(nctemp1541,nctemp1543);
int nctemp1548= fp;
struct nctempchar1 *nctemp1552;
static struct nctempchar1 nctemp1553 = {{ 2}, (char*)" \0"};
nctemp1552=&nctemp1553;
nctempchar1* nctemp1550= nctemp1552;
int nctemp1554=LibePuts(nctemp1548,nctemp1550);
int nctemp1556= fp;
nctempchar1* nctemp1558= p->forw;
int nctemp1561=LibePuts(nctemp1556,nctemp1558);
int nctemp1563= fp;
struct nctempchar1 *nctemp1567;
static struct nctempchar1 nctemp1568 = {{ 2}, (char*)" \0"};
nctemp1567=&nctemp1568;
nctempchar1* nctemp1565= nctemp1567;
int nctemp1569=LibePuts(nctemp1563,nctemp1565);
int nctemp1571= fp;
struct nctempchar1 *nctemp1575;
static struct nctempchar1 nctemp1576 = {{ 3}, (char*)"\n\0"};
nctemp1575=&nctemp1576;
nctempchar1* nctemp1573= nctemp1575;
int nctemp1577=LibePuts(nctemp1571,nctemp1573);
int nctemp1579= fp;
int nctemp1581=LibeFlush(nctemp1579);
int nctemp1582 = (p->tbl !=0);
if(nctemp1582)
{
tp =p->tbl;
int nctemp1598 = level + 1;
level =nctemp1598;
int nctemp1600= fp;
struct symbol* nctemp1602= tp;
int nctemp1604= level;
int nctemp1606=SymPrsym(nctemp1600,nctemp1602,nctemp1604);
int nctemp1615 = level - 1;
level =nctemp1615;
}
p =p->next;
int nctemp1621= fp;
int nctemp1623=LibeFlush(nctemp1621);
}
int nctemp1624 = (p !=0);
nctemp1331=nctemp1624;}return 1;
}
int SymExport (int fp,struct symbol* p,int level)
{
struct symbol* tq;
int nctemp1629 = (p ==0);
if(nctemp1629)
{
return 0;
}
struct symbol* nctemp1638=SymMktable();
tq =nctemp1638;
int nctemp1640= fp;
struct symbol* nctemp1642= tq;
int nctemp1644= 0;
int nctemp1646=SymPrsym(nctemp1640,nctemp1642,nctemp1644);
p =p->next;
int nctemp1651 = (p !=0);
int nctemp1655=nctemp1651;
while(nctemp1655)
{{
nctempchar1* nctemp1659= p->name;
int nctemp1662=SymIstemp(nctemp1659);
int nctemp1656 = (nctemp1662 ==0);
if(nctemp1656)
{
nctempchar1* nctemp1667= p->module;
struct nctempchar1 *nctemp1672;
static struct nctempchar1 nctemp1673 = {{ 5}, (char*)"void\0"};
nctemp1672=&nctemp1673;
nctempchar1* nctemp1670= nctemp1672;
int nctemp1674=LibeStrcmp(nctemp1667,nctemp1670);
int nctemp1664 = (nctemp1674 ==1);
if(nctemp1664)
{
int nctemp1677= fp;
struct nctempchar1 *nctemp1681;
static struct nctempchar1 nctemp1682 = {{ 2}, (char*)" \0"};
nctemp1681=&nctemp1682;
nctempchar1* nctemp1679= nctemp1681;
int nctemp1683=LibePuts(nctemp1677,nctemp1679);
int nctemp1685= fp;
nctempchar1* nctemp1687= p->name;
int nctemp1690=LibePuts(nctemp1685,nctemp1687);
int nctemp1692= fp;
struct nctempchar1 *nctemp1696;
static struct nctempchar1 nctemp1697 = {{ 2}, (char*)" \0"};
nctemp1696=&nctemp1697;
nctempchar1* nctemp1694= nctemp1696;
int nctemp1698=LibePuts(nctemp1692,nctemp1694);
int nctemp1700= fp;
nctempchar1* nctemp1702= p->type;
int nctemp1705=LibePuts(nctemp1700,nctemp1702);
int nctemp1707= fp;
struct nctempchar1 *nctemp1711;
static struct nctempchar1 nctemp1712 = {{ 2}, (char*)" \0"};
nctemp1711=&nctemp1712;
nctempchar1* nctemp1709= nctemp1711;
int nctemp1713=LibePuts(nctemp1707,nctemp1709);
int nctemp1715= fp;
nctempchar1* nctemp1717= p->func;
int nctemp1720=LibePuts(nctemp1715,nctemp1717);
int nctemp1722= fp;
struct nctempchar1 *nctemp1726;
static struct nctempchar1 nctemp1727 = {{ 2}, (char*)" \0"};
nctemp1726=&nctemp1727;
nctempchar1* nctemp1724= nctemp1726;
int nctemp1728=LibePuts(nctemp1722,nctemp1724);
int nctemp1730= fp;
nctempchar1* nctemp1732= p->array;
int nctemp1735=LibePuts(nctemp1730,nctemp1732);
int nctemp1737= fp;
struct nctempchar1 *nctemp1741;
static struct nctempchar1 nctemp1742 = {{ 2}, (char*)" \0"};
nctemp1741=&nctemp1742;
nctempchar1* nctemp1739= nctemp1741;
int nctemp1743=LibePuts(nctemp1737,nctemp1739);
int nctemp1745= fp;
int nctemp1747= p->rank;
int nctemp1749=LibePuti(nctemp1745,nctemp1747);
int nctemp1751= fp;
struct nctempchar1 *nctemp1755;
static struct nctempchar1 nctemp1756 = {{ 2}, (char*)" \0"};
nctemp1755=&nctemp1756;
nctempchar1* nctemp1753= nctemp1755;
int nctemp1757=LibePuts(nctemp1751,nctemp1753);
int nctemp1759= fp;
int nctemp1761= p->emit;
int nctemp1763=LibePuti(nctemp1759,nctemp1761);
int nctemp1765= fp;
struct nctempchar1 *nctemp1769;
static struct nctempchar1 nctemp1770 = {{ 2}, (char*)" \0"};
nctemp1769=&nctemp1770;
nctempchar1* nctemp1767= nctemp1769;
int nctemp1771=LibePuts(nctemp1765,nctemp1767);
int nctemp1773= fp;
nctempchar1* nctemp1775= p->structure;
int nctemp1778=LibePuts(nctemp1773,nctemp1775);
int nctemp1780= fp;
struct nctempchar1 *nctemp1784;
static struct nctempchar1 nctemp1785 = {{ 2}, (char*)" \0"};
nctemp1784=&nctemp1785;
nctempchar1* nctemp1782= nctemp1784;
int nctemp1786=LibePuts(nctemp1780,nctemp1782);
int nctemp1788= fp;
nctempchar1* nctemp1790= p->ident;
int nctemp1793=LibePuts(nctemp1788,nctemp1790);
int nctemp1795= fp;
struct nctempchar1 *nctemp1799;
static struct nctempchar1 nctemp1800 = {{ 2}, (char*)" \0"};
nctemp1799=&nctemp1800;
nctempchar1* nctemp1797= nctemp1799;
int nctemp1801=LibePuts(nctemp1795,nctemp1797);
int nctemp1803= fp;
nctempchar1* nctemp1805= p->lval;
int nctemp1808=LibePuts(nctemp1803,nctemp1805);
int nctemp1810= fp;
struct nctempchar1 *nctemp1814;
static struct nctempchar1 nctemp1815 = {{ 2}, (char*)" \0"};
nctemp1814=&nctemp1815;
nctempchar1* nctemp1812= nctemp1814;
int nctemp1816=LibePuts(nctemp1810,nctemp1812);
int nctemp1818= fp;
nctempchar1* nctemp1820= p->ref;
int nctemp1823=LibePuts(nctemp1818,nctemp1820);
int nctemp1825= fp;
struct nctempchar1 *nctemp1829;
static struct nctempchar1 nctemp1830 = {{ 2}, (char*)" \0"};
nctemp1829=&nctemp1830;
nctempchar1* nctemp1827= nctemp1829;
int nctemp1831=LibePuts(nctemp1825,nctemp1827);
int nctemp1833= fp;
nctempchar1* nctemp1835= p->descr;
int nctemp1838=LibePuts(nctemp1833,nctemp1835);
int nctemp1840= fp;
struct nctempchar1 *nctemp1844;
static struct nctempchar1 nctemp1845 = {{ 2}, (char*)" \0"};
nctemp1844=&nctemp1845;
nctempchar1* nctemp1842= nctemp1844;
int nctemp1846=LibePuts(nctemp1840,nctemp1842);
int nctemp1848= fp;
nctempchar1* nctemp1850= p->global;
int nctemp1853=LibePuts(nctemp1848,nctemp1850);
int nctemp1855= fp;
struct nctempchar1 *nctemp1859;
static struct nctempchar1 nctemp1860 = {{ 2}, (char*)" \0"};
nctemp1859=&nctemp1860;
nctempchar1* nctemp1857= nctemp1859;
int nctemp1861=LibePuts(nctemp1855,nctemp1857);
int nctemp1863= fp;
nctempchar1* nctemp1865= p->module;
int nctemp1868=LibePuts(nctemp1863,nctemp1865);
int nctemp1870= fp;
struct nctempchar1 *nctemp1874;
static struct nctempchar1 nctemp1875 = {{ 2}, (char*)" \0"};
nctemp1874=&nctemp1875;
nctempchar1* nctemp1872= nctemp1874;
int nctemp1876=LibePuts(nctemp1870,nctemp1872);
int nctemp1878= fp;
struct nctempchar1 *nctemp1882;
static struct nctempchar1 nctemp1883 = {{ 3}, (char*)"\n\0"};
nctemp1882=&nctemp1883;
nctempchar1* nctemp1880= nctemp1882;
int nctemp1884=LibePuts(nctemp1878,nctemp1880);
int nctemp1886= fp;
int nctemp1888=LibeFlush(nctemp1886);
int nctemp1890= fp;
struct symbol* nctemp1894= p;
struct symbol* nctemp1896=SymGetable(nctemp1894);
struct symbol* nctemp1892= nctemp1896;
int nctemp1897= 1;
int nctemp1899=SymPrsym(nctemp1890,nctemp1892,nctemp1897);
}
}
p =p->next;
}
int nctemp1904 = (p !=0);
nctemp1655=nctemp1904;}int nctemp1909= fp;
int nctemp1911=LibeFlush(nctemp1909);
return 1;
}
int Symgetline (int fp,struct symbol* np,nctempchar1 *module)
{
int indent;
int ch;
int tmp;
nctempchar1 *field;
int nctemp1919=400;
nctempchar1 *nctemp1918;
nctemp1918=(nctempchar1*)RunMalloc(sizeof(nctempchar1));
nctemp1918->d[0]=400;
nctemp1918->a=(char *)RunMalloc(sizeof(char)*nctemp1919);
field=nctemp1918;
indent =0;
ch =1;
int nctemp1937= fp;
int nctemp1939=LibeGetc(nctemp1937);
ch =nctemp1939;
int nctemp1930 = (ch ==(-1));
if(nctemp1930)
{
int nctemp1941= -1;
return nctemp1941;
}
else{
int nctemp1943= fp;
int nctemp1945=LibeUngetc(nctemp1943);
}
int nctemp1953= fp;
int nctemp1955=LibeGetc(nctemp1953);
ch =nctemp1955;
int nctemp1946 = (ch ==32);
int nctemp1957=nctemp1946;
while(nctemp1957)
{{
int nctemp1966 = indent + 1;
indent =nctemp1966;
}
int nctemp1974= fp;
int nctemp1976=LibeGetc(nctemp1974);
ch =nctemp1976;
int nctemp1967 = (ch ==32);
nctemp1957=nctemp1967;}int nctemp1979= fp;
int nctemp1981=LibeUngetc(nctemp1979);
int nctemp1983= fp;
nctempchar1* nctemp1985= field;
int nctemp1988=LibeGetw(nctemp1983,nctemp1985);
struct symbol* nctemp1990= np;
nctempchar1* nctemp1992= field;
int nctemp1995=SymSetname(nctemp1990,nctemp1992);
int nctemp1997= fp;
nctempchar1* nctemp1999= field;
int nctemp2002=LibeGetw(nctemp1997,nctemp1999);
struct symbol* nctemp2004= np;
nctempchar1* nctemp2006= field;
int nctemp2009=SymSetype(nctemp2004,nctemp2006);
int nctemp2011= fp;
nctempchar1* nctemp2013= field;
int nctemp2016=LibeGetw(nctemp2011,nctemp2013);
struct symbol* nctemp2018= np;
nctempchar1* nctemp2020= field;
int nctemp2023=SymSetfunc(nctemp2018,nctemp2020);
int nctemp2025= fp;
nctempchar1* nctemp2027= field;
int nctemp2030=LibeGetw(nctemp2025,nctemp2027);
struct symbol* nctemp2032= np;
nctempchar1* nctemp2034= field;
int nctemp2037=SymSetarray(nctemp2032,nctemp2034);
int nctemp2039= fp;
nctempchar1* nctemp2041= field;
int nctemp2044=LibeGetw(nctemp2039,nctemp2041);
struct symbol* nctemp2046= np;
nctempchar1* nctemp2050= field;
int nctemp2053=LibeAtoi(nctemp2050);
int nctemp2048= nctemp2053;
int nctemp2054=SymSetrank(nctemp2046,nctemp2048);
int nctemp2056= fp;
nctempchar1* nctemp2058= field;
int nctemp2061=LibeGetw(nctemp2056,nctemp2058);
struct symbol* nctemp2063= np;
nctempchar1* nctemp2067= field;
int nctemp2070=LibeAtoi(nctemp2067);
int nctemp2065= nctemp2070;
int nctemp2071=SymSetemit(nctemp2063,nctemp2065);
int nctemp2073= fp;
nctempchar1* nctemp2075= field;
int nctemp2078=LibeGetw(nctemp2073,nctemp2075);
struct symbol* nctemp2080= np;
nctempchar1* nctemp2082= field;
int nctemp2085=SymSetstruct(nctemp2080,nctemp2082);
int nctemp2087= fp;
nctempchar1* nctemp2089= field;
int nctemp2092=LibeGetw(nctemp2087,nctemp2089);
struct symbol* nctemp2094= np;
nctempchar1* nctemp2096= field;
int nctemp2099=SymSetident(nctemp2094,nctemp2096);
int nctemp2101= fp;
nctempchar1* nctemp2103= field;
int nctemp2106=LibeGetw(nctemp2101,nctemp2103);
struct symbol* nctemp2108= np;
nctempchar1* nctemp2110= field;
int nctemp2113=SymSetlval(nctemp2108,nctemp2110);
int nctemp2115= fp;
nctempchar1* nctemp2117= field;
int nctemp2120=LibeGetw(nctemp2115,nctemp2117);
struct symbol* nctemp2122= np;
nctempchar1* nctemp2124= field;
int nctemp2127=SymSetref(nctemp2122,nctemp2124);
int nctemp2129= fp;
nctempchar1* nctemp2131= field;
int nctemp2134=LibeGetw(nctemp2129,nctemp2131);
struct symbol* nctemp2136= np;
nctempchar1* nctemp2138= field;
int nctemp2141=SymSetdescr(nctemp2136,nctemp2138);
int nctemp2143= fp;
nctempchar1* nctemp2145= field;
int nctemp2148=LibeGetw(nctemp2143,nctemp2145);
struct symbol* nctemp2150= np;
nctempchar1* nctemp2152= field;
int nctemp2155=SymSetglobal(nctemp2150,nctemp2152);
int nctemp2157= fp;
nctempchar1* nctemp2159= field;
int nctemp2162=LibeGetw(nctemp2157,nctemp2159);
struct symbol* nctemp2164= np;
nctempchar1* nctemp2166= module;
int nctemp2169=SymSetmodule(nctemp2164,nctemp2166);
int nctemp2177= fp;
int nctemp2179=LibeGetc(nctemp2177);
ch =nctemp2179;
int nctemp2170 = (ch !=10);
int nctemp2181=nctemp2170;
while(nctemp2181)
{{
tmp =1;
}
int nctemp2193= fp;
int nctemp2195=LibeGetc(nctemp2193);
ch =nctemp2195;
int nctemp2186 = (ch !=10);
nctemp2181=nctemp2186;}return indent;
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
tbl =rtbl;
struct symbol* nctemp2206=SymMktable();
ttbl =nctemp2206;
struct symbol* nctemp2208= ttbl;
nctempchar1* nctemp2210= module;
int nctemp2213=SymSetmodule(nctemp2208,nctemp2210);
struct nctempchar1 *nctemp2220;
static struct nctempchar1 nctemp2221 = {{ 6}, (char*)"dummy\0"};
nctemp2220=&nctemp2221;
nctempchar1* nctemp2218= nctemp2220;
struct symbol* nctemp2222= ttbl;
struct symbol* nctemp2224=SymMkname(nctemp2218,nctemp2222);
mp =nctemp2224;
int nctemp2229= fp;
struct symbol* nctemp2231= mp;
nctempchar1* nctemp2233= module;
int nctemp2236=Symgetline(nctemp2229,nctemp2231,nctemp2233);
indent =nctemp2236;
oldindent =1;
indent =1;
int nctemp2246=1;
while(nctemp2246)
{{
int nctemp2251= fp;
struct symbol* nctemp2253= mp;
nctempchar1* nctemp2255= module;
int nctemp2258=Symgetline(nctemp2251,nctemp2253,nctemp2255);
indent =nctemp2258;
int nctemp2259 = (indent < 0);
if(nctemp2259)
{
return 1;
}
nctempchar1* nctemp2267= mp->name;
struct nctempchar1 *nctemp2272;
static struct nctempchar1 nctemp2273 = {{ 7}, (char*)"#first\0"};
nctemp2272=&nctemp2273;
nctempchar1* nctemp2270= nctemp2272;
int nctemp2274=LibeStrcmp(nctemp2267,nctemp2270);
int nctemp2264 = (nctemp2274 ==1);
if(nctemp2264)
{
int nctemp2280= fp;
struct symbol* nctemp2282= mp;
nctempchar1* nctemp2284= module;
int nctemp2287=Symgetline(nctemp2280,nctemp2282,nctemp2284);
indent =nctemp2287;
}
int nctemp2288 = (indent ==oldindent);
if(nctemp2288)
{
struct symbol* nctemp2293= ttbl;
struct symbol* nctemp2295= tbl;
int nctemp2297=SymCpytble(nctemp2293,nctemp2295);
oldindent =indent;
}
int nctemp2302 = (indent > oldindent);
if(nctemp2302)
{
struct symbol* nctemp2310=SymMktable();
ntbl =nctemp2310;
struct symbol* nctemp2312= ntbl;
nctempchar1* nctemp2314= module;
int nctemp2317=SymSetmodule(nctemp2312,nctemp2314);
np =tbl->last;
struct symbol* nctemp2323= np;
struct symbol* nctemp2325= ntbl;
struct symbol* nctemp2327=SymSetable(nctemp2323,nctemp2325);
tbl =ntbl;
struct symbol* nctemp2333= ttbl;
struct symbol* nctemp2335= tbl;
int nctemp2337=SymCpytble(nctemp2333,nctemp2335);
oldindent =indent;
}
int nctemp2342 = (indent < oldindent);
if(nctemp2342)
{
tbl =rtbl;
int nctemp2350 = (indent ==1);
if(nctemp2350)
{
tbl =rtbl;
}
else{
i =0;
int nctemp2362 = (i < indent);
while(nctemp2362){
{
struct symbol* nctemp2370= tbl->last;
struct symbol* nctemp2372=SymGetable(nctemp2370);
tbl =nctemp2372;
}
int nctemp2381 = i + 1;
i =nctemp2381;
int nctemp2382 = (i < indent);
nctemp2362=nctemp2382;
}
}
struct symbol* nctemp2387= ttbl;
struct symbol* nctemp2389= tbl;
int nctemp2391=SymCpytble(nctemp2387,nctemp2389);
oldindent =indent;
}
}
nctemp2246=1;}int nctemp2398= fp;
int nctemp2400=LibeClose(nctemp2398);
return 1;
}
