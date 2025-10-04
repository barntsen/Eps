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
static struct symbol* SymEtp;
int SymSetetp (struct symbol* tp)
{
SymEtp = tp;
return 1;
}
struct symbol* SymGetetp ()
{
return SymEtp;
}
static struct symbol* SymLtp;
int SymSetltp (struct symbol* tp)
{
SymLtp = tp;
return 1;
}
struct symbol* SymGetltp ()
{
return SymLtp;
}
static struct symbol* SymStp;
struct symbol* SymGetstp ()
{
return SymStp;
}
struct symbol* SymSetstp (struct symbol* stp)
{
SymStp = stp;
return SymStp;
}
int SymIstemp (nctempchar1 *name)
{
nctempchar1 *t;
int lnc;
int i;
struct nctempchar1 *nctemp16;
static struct nctempchar1 nctemp17 = {{ 7}, (char*)"nctemp\0"};
nctemp16=&nctemp17;
int nctemp14=nctemp16->d[0];int nctemp20 = nctemp14 - 1;
lnc =nctemp20;
int nctemp24=name->d[0];int nctemp21 = (nctemp24 < lnc);
if(nctemp21)
{
return 0;
}
struct nctempchar1 *nctemp37;
static struct nctempchar1 nctemp38 = {{ 7}, (char*)"nctemp\0"};
nctemp37=&nctemp38;
nctempchar1* nctemp35= nctemp37;
nctempchar1* nctemp39=LibeStrsave(nctemp35);
t=nctemp39;
for(i = 0;i < lnc;i = (i + 1)){
int nctemp43=i;
int nctemp46=i;
int nctemp40 = (name->a[nctemp43] !=t->a[nctemp46]);
if(nctemp40)
{
return 0;
}
}
RunFree(t->a);
RunFree(t);
return 1;
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
struct symbol* nctemp1069= wp;
struct symbol* nctemp1073= tp;
nctempchar1* nctemp1075=SymGetglobal(nctemp1073);
nctempchar1* nctemp1071= nctemp1075;
int nctemp1076=SymSetglobal(nctemp1069,nctemp1071);
struct symbol* nctemp1081= tp;
struct symbol* nctemp1083=SymMvnext(nctemp1081);
tp =nctemp1083;
}
int nctemp1084 = (tp !=0);
nctemp956=nctemp1084;}return 1;
}
struct symbol* SymAddtble (struct symbol* tp,struct symbol* sp)
{
struct symbol* start;
struct symbol* prev;
start = tp;
int nctemp1089 = (sp ==0);
if(nctemp1089)
{
return start;
}
int nctemp1094 = (tp ==0);
if(nctemp1094)
{
return start;
}
struct symbol* nctemp1102= sp;
struct symbol* nctemp1104=SymMvnext(nctemp1102);
int nctemp1099 = (nctemp1104 ==0);
if(nctemp1099)
{
return start;
}
tp->last = sp->last;
struct symbol* nctemp1111= tp;
struct symbol* nctemp1113=SymMvnext(nctemp1111);
tp =nctemp1113;
int nctemp1114 = (tp ==0);
if(nctemp1114)
{
struct symbol* nctemp1122= sp;
struct symbol* nctemp1124=SymMvnext(nctemp1122);
start->next =nctemp1124;
return start;
}
int nctemp1126 = (tp !=0);
int nctemp1130=nctemp1126;
while(nctemp1130)
{{
prev = tp;
struct symbol* nctemp1135= tp;
struct symbol* nctemp1137=SymMvnext(nctemp1135);
tp =nctemp1137;
}
int nctemp1138 = (tp !=0);
nctemp1130=nctemp1138;}tp = prev;
struct symbol* nctemp1146= sp;
struct symbol* nctemp1148=SymMvnext(nctemp1146);
tp->next =nctemp1148;
return start;
}
int SymPrsym (int fp,struct symbol* p,int level)
{
int i;
struct symbol* tp;
int nctemp1150 = (p ==0);
if(nctemp1150)
{
return 0;
}
int nctemp1155 = (p !=0);
int nctemp1159=nctemp1155;
while(nctemp1159)
{{
i = 0;
int nctemp1160 = (i <= level);
int nctemp1164=nctemp1160;
while(nctemp1164)
{{
int nctemp1166= fp;
struct nctempchar1 *nctemp1170;
static struct nctempchar1 nctemp1171 = {{ 2}, (char*)" \0"};
nctemp1170=&nctemp1171;
nctempchar1* nctemp1168= nctemp1170;
int nctemp1172=LibePuts(nctemp1166,nctemp1168);
i = (i + 1);
}
int nctemp1173 = (i <= level);
nctemp1164=nctemp1173;}int nctemp1178= fp;
nctempchar1* nctemp1180= p->name;
int nctemp1183=LibePuts(nctemp1178,nctemp1180);
int nctemp1185= fp;
struct nctempchar1 *nctemp1189;
static struct nctempchar1 nctemp1190 = {{ 2}, (char*)" \0"};
nctemp1189=&nctemp1190;
nctempchar1* nctemp1187= nctemp1189;
int nctemp1191=LibePuts(nctemp1185,nctemp1187);
int nctemp1193= fp;
nctempchar1* nctemp1195= p->type;
int nctemp1198=LibePuts(nctemp1193,nctemp1195);
int nctemp1200= fp;
struct nctempchar1 *nctemp1204;
static struct nctempchar1 nctemp1205 = {{ 2}, (char*)" \0"};
nctemp1204=&nctemp1205;
nctempchar1* nctemp1202= nctemp1204;
int nctemp1206=LibePuts(nctemp1200,nctemp1202);
int nctemp1208= fp;
nctempchar1* nctemp1210= p->func;
int nctemp1213=LibePuts(nctemp1208,nctemp1210);
int nctemp1215= fp;
struct nctempchar1 *nctemp1219;
static struct nctempchar1 nctemp1220 = {{ 2}, (char*)" \0"};
nctemp1219=&nctemp1220;
nctempchar1* nctemp1217= nctemp1219;
int nctemp1221=LibePuts(nctemp1215,nctemp1217);
int nctemp1223= fp;
nctempchar1* nctemp1225= p->array;
int nctemp1228=LibePuts(nctemp1223,nctemp1225);
int nctemp1230= fp;
struct nctempchar1 *nctemp1234;
static struct nctempchar1 nctemp1235 = {{ 2}, (char*)" \0"};
nctemp1234=&nctemp1235;
nctempchar1* nctemp1232= nctemp1234;
int nctemp1236=LibePuts(nctemp1230,nctemp1232);
int nctemp1238= fp;
int nctemp1240= p->rank;
int nctemp1242=LibePuti(nctemp1238,nctemp1240);
int nctemp1244= fp;
struct nctempchar1 *nctemp1248;
static struct nctempchar1 nctemp1249 = {{ 2}, (char*)" \0"};
nctemp1248=&nctemp1249;
nctempchar1* nctemp1246= nctemp1248;
int nctemp1250=LibePuts(nctemp1244,nctemp1246);
int nctemp1252= fp;
int nctemp1254= p->emit;
int nctemp1256=LibePuti(nctemp1252,nctemp1254);
int nctemp1258= fp;
struct nctempchar1 *nctemp1262;
static struct nctempchar1 nctemp1263 = {{ 2}, (char*)" \0"};
nctemp1262=&nctemp1263;
nctempchar1* nctemp1260= nctemp1262;
int nctemp1264=LibePuts(nctemp1258,nctemp1260);
int nctemp1266= fp;
nctempchar1* nctemp1268= p->structure;
int nctemp1271=LibePuts(nctemp1266,nctemp1268);
int nctemp1273= fp;
struct nctempchar1 *nctemp1277;
static struct nctempchar1 nctemp1278 = {{ 2}, (char*)" \0"};
nctemp1277=&nctemp1278;
nctempchar1* nctemp1275= nctemp1277;
int nctemp1279=LibePuts(nctemp1273,nctemp1275);
int nctemp1281= fp;
nctempchar1* nctemp1283= p->ident;
int nctemp1286=LibePuts(nctemp1281,nctemp1283);
int nctemp1288= fp;
struct nctempchar1 *nctemp1292;
static struct nctempchar1 nctemp1293 = {{ 2}, (char*)" \0"};
nctemp1292=&nctemp1293;
nctempchar1* nctemp1290= nctemp1292;
int nctemp1294=LibePuts(nctemp1288,nctemp1290);
int nctemp1296= fp;
nctempchar1* nctemp1298= p->lval;
int nctemp1301=LibePuts(nctemp1296,nctemp1298);
int nctemp1303= fp;
struct nctempchar1 *nctemp1307;
static struct nctempchar1 nctemp1308 = {{ 2}, (char*)" \0"};
nctemp1307=&nctemp1308;
nctempchar1* nctemp1305= nctemp1307;
int nctemp1309=LibePuts(nctemp1303,nctemp1305);
int nctemp1311= fp;
nctempchar1* nctemp1313= p->ref;
int nctemp1316=LibePuts(nctemp1311,nctemp1313);
int nctemp1318= fp;
struct nctempchar1 *nctemp1322;
static struct nctempchar1 nctemp1323 = {{ 2}, (char*)" \0"};
nctemp1322=&nctemp1323;
nctempchar1* nctemp1320= nctemp1322;
int nctemp1324=LibePuts(nctemp1318,nctemp1320);
int nctemp1326= fp;
nctempchar1* nctemp1328= p->descr;
int nctemp1331=LibePuts(nctemp1326,nctemp1328);
int nctemp1333= fp;
struct nctempchar1 *nctemp1337;
static struct nctempchar1 nctemp1338 = {{ 2}, (char*)" \0"};
nctemp1337=&nctemp1338;
nctempchar1* nctemp1335= nctemp1337;
int nctemp1339=LibePuts(nctemp1333,nctemp1335);
int nctemp1341= fp;
nctempchar1* nctemp1343= p->global;
int nctemp1346=LibePuts(nctemp1341,nctemp1343);
int nctemp1348= fp;
struct nctempchar1 *nctemp1352;
static struct nctempchar1 nctemp1353 = {{ 2}, (char*)" \0"};
nctemp1352=&nctemp1353;
nctempchar1* nctemp1350= nctemp1352;
int nctemp1354=LibePuts(nctemp1348,nctemp1350);
int nctemp1356= fp;
nctempchar1* nctemp1358= p->module;
int nctemp1361=LibePuts(nctemp1356,nctemp1358);
int nctemp1363= fp;
struct nctempchar1 *nctemp1367;
static struct nctempchar1 nctemp1368 = {{ 2}, (char*)" \0"};
nctemp1367=&nctemp1368;
nctempchar1* nctemp1365= nctemp1367;
int nctemp1369=LibePuts(nctemp1363,nctemp1365);
int nctemp1371= fp;
nctempchar1* nctemp1373= p->forw;
int nctemp1376=LibePuts(nctemp1371,nctemp1373);
int nctemp1378= fp;
struct nctempchar1 *nctemp1382;
static struct nctempchar1 nctemp1383 = {{ 2}, (char*)" \0"};
nctemp1382=&nctemp1383;
nctempchar1* nctemp1380= nctemp1382;
int nctemp1384=LibePuts(nctemp1378,nctemp1380);
int nctemp1386= fp;
struct nctempchar1 *nctemp1390;
static struct nctempchar1 nctemp1391 = {{ 3}, (char*)"\n\0"};
nctemp1390=&nctemp1391;
nctempchar1* nctemp1388= nctemp1390;
int nctemp1392=LibePuts(nctemp1386,nctemp1388);
int nctemp1394= fp;
int nctemp1396=LibeFlush(nctemp1394);
int nctemp1397 = (p->tbl !=0);
if(nctemp1397)
{
tp = p->tbl;
level = (level + 1);
int nctemp1402= fp;
struct symbol* nctemp1404= tp;
int nctemp1406= level;
int nctemp1408=SymPrsym(nctemp1402,nctemp1404,nctemp1406);
level = (level - 1);
}
p = p->next;
int nctemp1410= fp;
int nctemp1412=LibeFlush(nctemp1410);
}
int nctemp1413 = (p !=0);
nctemp1159=nctemp1413;}return 1;
}
int SymExport (int fp,struct symbol* p,int level)
{
struct symbol* tq;
int nctemp1418 = (p ==0);
if(nctemp1418)
{
return 0;
}
struct symbol* nctemp1427=SymMktable();
tq =nctemp1427;
int nctemp1429= fp;
struct symbol* nctemp1431= tq;
int nctemp1433= 0;
int nctemp1435=SymPrsym(nctemp1429,nctemp1431,nctemp1433);
p = p->next;
int nctemp1436 = (p !=0);
int nctemp1440=nctemp1436;
while(nctemp1440)
{{
nctempchar1* nctemp1444= p->name;
int nctemp1447=SymIstemp(nctemp1444);
int nctemp1441 = (nctemp1447 ==0);
if(nctemp1441)
{
nctempchar1* nctemp1452= p->module;
struct nctempchar1 *nctemp1457;
static struct nctempchar1 nctemp1458 = {{ 5}, (char*)"void\0"};
nctemp1457=&nctemp1458;
nctempchar1* nctemp1455= nctemp1457;
int nctemp1459=LibeStrcmp(nctemp1452,nctemp1455);
int nctemp1449 = (nctemp1459 ==1);
if(nctemp1449)
{
int nctemp1462= fp;
struct nctempchar1 *nctemp1466;
static struct nctempchar1 nctemp1467 = {{ 2}, (char*)" \0"};
nctemp1466=&nctemp1467;
nctempchar1* nctemp1464= nctemp1466;
int nctemp1468=LibePuts(nctemp1462,nctemp1464);
int nctemp1470= fp;
nctempchar1* nctemp1472= p->name;
int nctemp1475=LibePuts(nctemp1470,nctemp1472);
int nctemp1477= fp;
struct nctempchar1 *nctemp1481;
static struct nctempchar1 nctemp1482 = {{ 2}, (char*)" \0"};
nctemp1481=&nctemp1482;
nctempchar1* nctemp1479= nctemp1481;
int nctemp1483=LibePuts(nctemp1477,nctemp1479);
int nctemp1485= fp;
nctempchar1* nctemp1487= p->type;
int nctemp1490=LibePuts(nctemp1485,nctemp1487);
int nctemp1492= fp;
struct nctempchar1 *nctemp1496;
static struct nctempchar1 nctemp1497 = {{ 2}, (char*)" \0"};
nctemp1496=&nctemp1497;
nctempchar1* nctemp1494= nctemp1496;
int nctemp1498=LibePuts(nctemp1492,nctemp1494);
int nctemp1500= fp;
nctempchar1* nctemp1502= p->func;
int nctemp1505=LibePuts(nctemp1500,nctemp1502);
int nctemp1507= fp;
struct nctempchar1 *nctemp1511;
static struct nctempchar1 nctemp1512 = {{ 2}, (char*)" \0"};
nctemp1511=&nctemp1512;
nctempchar1* nctemp1509= nctemp1511;
int nctemp1513=LibePuts(nctemp1507,nctemp1509);
int nctemp1515= fp;
nctempchar1* nctemp1517= p->array;
int nctemp1520=LibePuts(nctemp1515,nctemp1517);
int nctemp1522= fp;
struct nctempchar1 *nctemp1526;
static struct nctempchar1 nctemp1527 = {{ 2}, (char*)" \0"};
nctemp1526=&nctemp1527;
nctempchar1* nctemp1524= nctemp1526;
int nctemp1528=LibePuts(nctemp1522,nctemp1524);
int nctemp1530= fp;
int nctemp1532= p->rank;
int nctemp1534=LibePuti(nctemp1530,nctemp1532);
int nctemp1536= fp;
struct nctempchar1 *nctemp1540;
static struct nctempchar1 nctemp1541 = {{ 2}, (char*)" \0"};
nctemp1540=&nctemp1541;
nctempchar1* nctemp1538= nctemp1540;
int nctemp1542=LibePuts(nctemp1536,nctemp1538);
int nctemp1544= fp;
int nctemp1546= p->emit;
int nctemp1548=LibePuti(nctemp1544,nctemp1546);
int nctemp1550= fp;
struct nctempchar1 *nctemp1554;
static struct nctempchar1 nctemp1555 = {{ 2}, (char*)" \0"};
nctemp1554=&nctemp1555;
nctempchar1* nctemp1552= nctemp1554;
int nctemp1556=LibePuts(nctemp1550,nctemp1552);
int nctemp1558= fp;
nctempchar1* nctemp1560= p->structure;
int nctemp1563=LibePuts(nctemp1558,nctemp1560);
int nctemp1565= fp;
struct nctempchar1 *nctemp1569;
static struct nctempchar1 nctemp1570 = {{ 2}, (char*)" \0"};
nctemp1569=&nctemp1570;
nctempchar1* nctemp1567= nctemp1569;
int nctemp1571=LibePuts(nctemp1565,nctemp1567);
int nctemp1573= fp;
nctempchar1* nctemp1575= p->ident;
int nctemp1578=LibePuts(nctemp1573,nctemp1575);
int nctemp1580= fp;
struct nctempchar1 *nctemp1584;
static struct nctempchar1 nctemp1585 = {{ 2}, (char*)" \0"};
nctemp1584=&nctemp1585;
nctempchar1* nctemp1582= nctemp1584;
int nctemp1586=LibePuts(nctemp1580,nctemp1582);
int nctemp1588= fp;
nctempchar1* nctemp1590= p->lval;
int nctemp1593=LibePuts(nctemp1588,nctemp1590);
int nctemp1595= fp;
struct nctempchar1 *nctemp1599;
static struct nctempchar1 nctemp1600 = {{ 2}, (char*)" \0"};
nctemp1599=&nctemp1600;
nctempchar1* nctemp1597= nctemp1599;
int nctemp1601=LibePuts(nctemp1595,nctemp1597);
int nctemp1603= fp;
nctempchar1* nctemp1605= p->ref;
int nctemp1608=LibePuts(nctemp1603,nctemp1605);
int nctemp1610= fp;
struct nctempchar1 *nctemp1614;
static struct nctempchar1 nctemp1615 = {{ 2}, (char*)" \0"};
nctemp1614=&nctemp1615;
nctempchar1* nctemp1612= nctemp1614;
int nctemp1616=LibePuts(nctemp1610,nctemp1612);
int nctemp1618= fp;
nctempchar1* nctemp1620= p->descr;
int nctemp1623=LibePuts(nctemp1618,nctemp1620);
int nctemp1625= fp;
struct nctempchar1 *nctemp1629;
static struct nctempchar1 nctemp1630 = {{ 2}, (char*)" \0"};
nctemp1629=&nctemp1630;
nctempchar1* nctemp1627= nctemp1629;
int nctemp1631=LibePuts(nctemp1625,nctemp1627);
int nctemp1633= fp;
nctempchar1* nctemp1635= p->global;
int nctemp1638=LibePuts(nctemp1633,nctemp1635);
int nctemp1640= fp;
struct nctempchar1 *nctemp1644;
static struct nctempchar1 nctemp1645 = {{ 2}, (char*)" \0"};
nctemp1644=&nctemp1645;
nctempchar1* nctemp1642= nctemp1644;
int nctemp1646=LibePuts(nctemp1640,nctemp1642);
int nctemp1648= fp;
nctempchar1* nctemp1650= p->module;
int nctemp1653=LibePuts(nctemp1648,nctemp1650);
int nctemp1655= fp;
struct nctempchar1 *nctemp1659;
static struct nctempchar1 nctemp1660 = {{ 2}, (char*)" \0"};
nctemp1659=&nctemp1660;
nctempchar1* nctemp1657= nctemp1659;
int nctemp1661=LibePuts(nctemp1655,nctemp1657);
int nctemp1663= fp;
struct nctempchar1 *nctemp1667;
static struct nctempchar1 nctemp1668 = {{ 3}, (char*)"\n\0"};
nctemp1667=&nctemp1668;
nctempchar1* nctemp1665= nctemp1667;
int nctemp1669=LibePuts(nctemp1663,nctemp1665);
int nctemp1671= fp;
int nctemp1673=LibeFlush(nctemp1671);
int nctemp1675= fp;
struct symbol* nctemp1679= p;
struct symbol* nctemp1681=SymGetable(nctemp1679);
struct symbol* nctemp1677= nctemp1681;
int nctemp1682= 1;
int nctemp1684=SymPrsym(nctemp1675,nctemp1677,nctemp1682);
}
}
p = p->next;
}
int nctemp1685 = (p !=0);
nctemp1440=nctemp1685;}int nctemp1690= fp;
int nctemp1692=LibeFlush(nctemp1690);
return 1;
}
int Symgetline (int fp,struct symbol* np,nctempchar1 *module)
{
int indent;
int ch;
nctempchar1 *field;
int tmp;
int nctemp1700=400;
nctempchar1 *nctemp1699;
nctemp1699=(nctempchar1*)RunMalloc(sizeof(nctempchar1));
nctemp1699->d[0]=400;
nctemp1699->a=(char *)RunMalloc(sizeof(char)*nctemp1700);
field=nctemp1699;
indent = 0;
ch = 1;
int nctemp1710= fp;
int nctemp1712=LibeGetc(nctemp1710);
ch =nctemp1712;
int nctemp1703 = (ch ==(-1));
if(nctemp1703)
{
int nctemp1714= -1;
return nctemp1714;
}
else{
int nctemp1716= fp;
int nctemp1718=LibeUngetc(nctemp1716);
}
int nctemp1726= fp;
int nctemp1728=LibeGetc(nctemp1726);
ch =nctemp1728;
int nctemp1719 = (ch ==32);
int nctemp1730=nctemp1719;
while(nctemp1730)
{{
indent = (indent + 1);
}
int nctemp1738= fp;
int nctemp1740=LibeGetc(nctemp1738);
ch =nctemp1740;
int nctemp1731 = (ch ==32);
nctemp1730=nctemp1731;}int nctemp1743= fp;
int nctemp1745=LibeUngetc(nctemp1743);
int nctemp1747= fp;
nctempchar1* nctemp1749= field;
int nctemp1752=LibeGetw(nctemp1747,nctemp1749);
struct symbol* nctemp1754= np;
nctempchar1* nctemp1756= field;
int nctemp1759=SymSetname(nctemp1754,nctemp1756);
int nctemp1761= fp;
nctempchar1* nctemp1763= field;
int nctemp1766=LibeGetw(nctemp1761,nctemp1763);
struct symbol* nctemp1768= np;
nctempchar1* nctemp1770= field;
int nctemp1773=SymSetype(nctemp1768,nctemp1770);
int nctemp1775= fp;
nctempchar1* nctemp1777= field;
int nctemp1780=LibeGetw(nctemp1775,nctemp1777);
struct symbol* nctemp1782= np;
nctempchar1* nctemp1784= field;
int nctemp1787=SymSetfunc(nctemp1782,nctemp1784);
int nctemp1789= fp;
nctempchar1* nctemp1791= field;
int nctemp1794=LibeGetw(nctemp1789,nctemp1791);
struct symbol* nctemp1796= np;
nctempchar1* nctemp1798= field;
int nctemp1801=SymSetarray(nctemp1796,nctemp1798);
int nctemp1803= fp;
nctempchar1* nctemp1805= field;
int nctemp1808=LibeGetw(nctemp1803,nctemp1805);
struct symbol* nctemp1810= np;
nctempchar1* nctemp1814= field;
int nctemp1817=LibeAtoi(nctemp1814);
int nctemp1812= nctemp1817;
int nctemp1818=SymSetrank(nctemp1810,nctemp1812);
int nctemp1820= fp;
nctempchar1* nctemp1822= field;
int nctemp1825=LibeGetw(nctemp1820,nctemp1822);
struct symbol* nctemp1827= np;
nctempchar1* nctemp1831= field;
int nctemp1834=LibeAtoi(nctemp1831);
int nctemp1829= nctemp1834;
int nctemp1835=SymSetemit(nctemp1827,nctemp1829);
int nctemp1837= fp;
nctempchar1* nctemp1839= field;
int nctemp1842=LibeGetw(nctemp1837,nctemp1839);
struct symbol* nctemp1844= np;
nctempchar1* nctemp1846= field;
int nctemp1849=SymSetstruct(nctemp1844,nctemp1846);
int nctemp1851= fp;
nctempchar1* nctemp1853= field;
int nctemp1856=LibeGetw(nctemp1851,nctemp1853);
struct symbol* nctemp1858= np;
nctempchar1* nctemp1860= field;
int nctemp1863=SymSetident(nctemp1858,nctemp1860);
int nctemp1865= fp;
nctempchar1* nctemp1867= field;
int nctemp1870=LibeGetw(nctemp1865,nctemp1867);
struct symbol* nctemp1872= np;
nctempchar1* nctemp1874= field;
int nctemp1877=SymSetlval(nctemp1872,nctemp1874);
int nctemp1879= fp;
nctempchar1* nctemp1881= field;
int nctemp1884=LibeGetw(nctemp1879,nctemp1881);
struct symbol* nctemp1886= np;
nctempchar1* nctemp1888= field;
int nctemp1891=SymSetref(nctemp1886,nctemp1888);
int nctemp1893= fp;
nctempchar1* nctemp1895= field;
int nctemp1898=LibeGetw(nctemp1893,nctemp1895);
struct symbol* nctemp1900= np;
nctempchar1* nctemp1902= field;
int nctemp1905=SymSetdescr(nctemp1900,nctemp1902);
int nctemp1907= fp;
nctempchar1* nctemp1909= field;
int nctemp1912=LibeGetw(nctemp1907,nctemp1909);
struct symbol* nctemp1914= np;
nctempchar1* nctemp1916= field;
int nctemp1919=SymSetglobal(nctemp1914,nctemp1916);
int nctemp1921= fp;
nctempchar1* nctemp1923= field;
int nctemp1926=LibeGetw(nctemp1921,nctemp1923);
struct symbol* nctemp1928= np;
nctempchar1* nctemp1930= module;
int nctemp1933=SymSetmodule(nctemp1928,nctemp1930);
int nctemp1941= fp;
int nctemp1943=LibeGetc(nctemp1941);
ch =nctemp1943;
int nctemp1934 = (ch !=10);
int nctemp1945=nctemp1934;
while(nctemp1945)
{{
tmp = 0;
tmp = (0 + tmp);
}
int nctemp1953= fp;
int nctemp1955=LibeGetc(nctemp1953);
ch =nctemp1955;
int nctemp1946 = (ch !=10);
nctemp1945=nctemp1946;}return indent;
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
struct symbol* nctemp1962=SymMktable();
ttbl =nctemp1962;
struct symbol* nctemp1964= ttbl;
nctempchar1* nctemp1966= module;
int nctemp1969=SymSetmodule(nctemp1964,nctemp1966);
struct nctempchar1 *nctemp1976;
static struct nctempchar1 nctemp1977 = {{ 6}, (char*)"dummy\0"};
nctemp1976=&nctemp1977;
nctempchar1* nctemp1974= nctemp1976;
struct symbol* nctemp1978= ttbl;
struct symbol* nctemp1980=SymMkname(nctemp1974,nctemp1978);
mp =nctemp1980;
int nctemp1985= fp;
struct symbol* nctemp1987= mp;
nctempchar1* nctemp1989= module;
int nctemp1992=Symgetline(nctemp1985,nctemp1987,nctemp1989);
indent =nctemp1992;
oldindent = 1;
indent = 1;
int nctemp1994=1;
while(nctemp1994)
{{
int nctemp1999= fp;
struct symbol* nctemp2001= mp;
nctempchar1* nctemp2003= module;
int nctemp2006=Symgetline(nctemp1999,nctemp2001,nctemp2003);
indent =nctemp2006;
int nctemp2007 = (indent < 0);
if(nctemp2007)
{
return 1;
}
nctempchar1* nctemp2015= mp->name;
struct nctempchar1 *nctemp2020;
static struct nctempchar1 nctemp2021 = {{ 7}, (char*)"#first\0"};
nctemp2020=&nctemp2021;
nctempchar1* nctemp2018= nctemp2020;
int nctemp2022=LibeStrcmp(nctemp2015,nctemp2018);
int nctemp2012 = (nctemp2022 ==1);
if(nctemp2012)
{
int nctemp2028= fp;
struct symbol* nctemp2030= mp;
nctempchar1* nctemp2032= module;
int nctemp2035=Symgetline(nctemp2028,nctemp2030,nctemp2032);
indent =nctemp2035;
}
int nctemp2036 = (indent ==oldindent);
if(nctemp2036)
{
struct symbol* nctemp2041= ttbl;
struct symbol* nctemp2043= tbl;
int nctemp2045=SymCpytble(nctemp2041,nctemp2043);
oldindent = indent;
}
int nctemp2046 = (indent > oldindent);
if(nctemp2046)
{
struct symbol* nctemp2054=SymMktable();
ntbl =nctemp2054;
struct symbol* nctemp2056= ntbl;
nctempchar1* nctemp2058= module;
int nctemp2061=SymSetmodule(nctemp2056,nctemp2058);
np = tbl->last;
struct symbol* nctemp2063= np;
struct symbol* nctemp2065= ntbl;
struct symbol* nctemp2067=SymSetable(nctemp2063,nctemp2065);
tbl = ntbl;
struct symbol* nctemp2069= ttbl;
struct symbol* nctemp2071= tbl;
int nctemp2073=SymCpytble(nctemp2069,nctemp2071);
oldindent = indent;
}
int nctemp2074 = (indent < oldindent);
if(nctemp2074)
{
tbl = rtbl;
int nctemp2078 = (indent ==1);
if(nctemp2078)
{
tbl = rtbl;
}
else{
for(i = 0;i < indent;i = (i + 1)){
struct symbol* nctemp2086= tbl->last;
struct symbol* nctemp2088=SymGetable(nctemp2086);
tbl =nctemp2088;
}
}
struct symbol* nctemp2090= ttbl;
struct symbol* nctemp2092= tbl;
int nctemp2094=SymCpytble(nctemp2090,nctemp2092);
oldindent = indent;
}
}
nctemp1994=1;}int nctemp2097= fp;
int nctemp2099=LibeClose(nctemp2097);
return 1;
}
