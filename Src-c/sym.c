//  Translated by epsc  version: Fri Jan  2 16:12:14 2026

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
static struct symbol* SymEtp;
static struct symbol* SymLtp;
static struct symbol* SymStp;
int SymSetetp (struct symbol* tp)
{
SymEtp = tp;
return 1;
}
struct symbol* SymGetetp ()
{
return SymEtp;
}
int SymSetltp (struct symbol* tp)
{
SymLtp = tp;
return 1;
}
struct symbol* SymGetltp ()
{
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
int SymPrsym (int fp,struct symbol* p,int level)
{
int i;
struct symbol* tp;
int nctemp7 = (p ==0);
if(nctemp7)
{
return 0;
}
int nctemp12 = (p !=0);
int nctemp16=nctemp12;
while(nctemp16)
{{
i = 0;
int nctemp17 = (i <= level);
int nctemp21=nctemp17;
while(nctemp21)
{{
int nctemp23= fp;
struct nctempchar1 *nctemp27;
static struct nctempchar1 nctemp28 = {{ 2}, (char*)" \0"};
nctemp27=&nctemp28;
nctempchar1* nctemp25= nctemp27;
int nctemp29=LibePuts(nctemp23,nctemp25);
i = (i + 1);
}
int nctemp30 = (i <= level);
nctemp21=nctemp30;}int nctemp35= fp;
nctempchar1* nctemp37= p->name;
int nctemp40=LibePuts(nctemp35,nctemp37);
int nctemp42= fp;
struct nctempchar1 *nctemp46;
static struct nctempchar1 nctemp47 = {{ 2}, (char*)" \0"};
nctemp46=&nctemp47;
nctempchar1* nctemp44= nctemp46;
int nctemp48=LibePuts(nctemp42,nctemp44);
int nctemp50= fp;
nctempchar1* nctemp52= p->type;
int nctemp55=LibePuts(nctemp50,nctemp52);
int nctemp57= fp;
struct nctempchar1 *nctemp61;
static struct nctempchar1 nctemp62 = {{ 2}, (char*)" \0"};
nctemp61=&nctemp62;
nctempchar1* nctemp59= nctemp61;
int nctemp63=LibePuts(nctemp57,nctemp59);
int nctemp65= fp;
nctempchar1* nctemp67= p->func;
int nctemp70=LibePuts(nctemp65,nctemp67);
int nctemp72= fp;
struct nctempchar1 *nctemp76;
static struct nctempchar1 nctemp77 = {{ 2}, (char*)" \0"};
nctemp76=&nctemp77;
nctempchar1* nctemp74= nctemp76;
int nctemp78=LibePuts(nctemp72,nctemp74);
int nctemp80= fp;
nctempchar1* nctemp82= p->array;
int nctemp85=LibePuts(nctemp80,nctemp82);
int nctemp87= fp;
struct nctempchar1 *nctemp91;
static struct nctempchar1 nctemp92 = {{ 2}, (char*)" \0"};
nctemp91=&nctemp92;
nctempchar1* nctemp89= nctemp91;
int nctemp93=LibePuts(nctemp87,nctemp89);
int nctemp95= fp;
int nctemp97= p->rank;
int nctemp99=LibePuti(nctemp95,nctemp97);
int nctemp101= fp;
struct nctempchar1 *nctemp105;
static struct nctempchar1 nctemp106 = {{ 2}, (char*)" \0"};
nctemp105=&nctemp106;
nctempchar1* nctemp103= nctemp105;
int nctemp107=LibePuts(nctemp101,nctemp103);
int nctemp109= fp;
int nctemp111= p->emit;
int nctemp113=LibePuti(nctemp109,nctemp111);
int nctemp115= fp;
struct nctempchar1 *nctemp119;
static struct nctempchar1 nctemp120 = {{ 2}, (char*)" \0"};
nctemp119=&nctemp120;
nctempchar1* nctemp117= nctemp119;
int nctemp121=LibePuts(nctemp115,nctemp117);
int nctemp123= fp;
nctempchar1* nctemp125= p->structure;
int nctemp128=LibePuts(nctemp123,nctemp125);
int nctemp130= fp;
struct nctempchar1 *nctemp134;
static struct nctempchar1 nctemp135 = {{ 2}, (char*)" \0"};
nctemp134=&nctemp135;
nctempchar1* nctemp132= nctemp134;
int nctemp136=LibePuts(nctemp130,nctemp132);
int nctemp138= fp;
nctempchar1* nctemp140= p->ident;
int nctemp143=LibePuts(nctemp138,nctemp140);
int nctemp145= fp;
struct nctempchar1 *nctemp149;
static struct nctempchar1 nctemp150 = {{ 2}, (char*)" \0"};
nctemp149=&nctemp150;
nctempchar1* nctemp147= nctemp149;
int nctemp151=LibePuts(nctemp145,nctemp147);
int nctemp153= fp;
nctempchar1* nctemp155= p->lval;
int nctemp158=LibePuts(nctemp153,nctemp155);
int nctemp160= fp;
struct nctempchar1 *nctemp164;
static struct nctempchar1 nctemp165 = {{ 2}, (char*)" \0"};
nctemp164=&nctemp165;
nctempchar1* nctemp162= nctemp164;
int nctemp166=LibePuts(nctemp160,nctemp162);
int nctemp168= fp;
nctempchar1* nctemp170= p->ref;
int nctemp173=LibePuts(nctemp168,nctemp170);
int nctemp175= fp;
struct nctempchar1 *nctemp179;
static struct nctempchar1 nctemp180 = {{ 2}, (char*)" \0"};
nctemp179=&nctemp180;
nctempchar1* nctemp177= nctemp179;
int nctemp181=LibePuts(nctemp175,nctemp177);
int nctemp183= fp;
nctempchar1* nctemp185= p->descr;
int nctemp188=LibePuts(nctemp183,nctemp185);
int nctemp190= fp;
struct nctempchar1 *nctemp194;
static struct nctempchar1 nctemp195 = {{ 2}, (char*)" \0"};
nctemp194=&nctemp195;
nctempchar1* nctemp192= nctemp194;
int nctemp196=LibePuts(nctemp190,nctemp192);
int nctemp198= fp;
nctempchar1* nctemp200= p->global;
int nctemp203=LibePuts(nctemp198,nctemp200);
int nctemp205= fp;
struct nctempchar1 *nctemp209;
static struct nctempchar1 nctemp210 = {{ 2}, (char*)" \0"};
nctemp209=&nctemp210;
nctempchar1* nctemp207= nctemp209;
int nctemp211=LibePuts(nctemp205,nctemp207);
int nctemp213= fp;
nctempchar1* nctemp215= p->module;
int nctemp218=LibePuts(nctemp213,nctemp215);
int nctemp220= fp;
struct nctempchar1 *nctemp224;
static struct nctempchar1 nctemp225 = {{ 2}, (char*)" \0"};
nctemp224=&nctemp225;
nctempchar1* nctemp222= nctemp224;
int nctemp226=LibePuts(nctemp220,nctemp222);
int nctemp228= fp;
nctempchar1* nctemp230= p->forw;
int nctemp233=LibePuts(nctemp228,nctemp230);
int nctemp235= fp;
struct nctempchar1 *nctemp239;
static struct nctempchar1 nctemp240 = {{ 2}, (char*)" \0"};
nctemp239=&nctemp240;
nctempchar1* nctemp237= nctemp239;
int nctemp241=LibePuts(nctemp235,nctemp237);
int nctemp243= fp;
struct nctempchar1 *nctemp247;
static struct nctempchar1 nctemp248 = {{ 3}, (char*)"\n\0"};
nctemp247=&nctemp248;
nctempchar1* nctemp245= nctemp247;
int nctemp249=LibePuts(nctemp243,nctemp245);
int nctemp251= fp;
int nctemp253=LibeFlush(nctemp251);
int nctemp254 = (p->tbl !=0);
if(nctemp254)
{
tp = p->tbl;
level = (level + 1);
int nctemp259= fp;
struct symbol* nctemp261= tp;
int nctemp263= level;
int nctemp265=SymPrsym(nctemp259,nctemp261,nctemp263);
level = (level - 1);
}
p = p->next;
int nctemp267= fp;
int nctemp269=LibeFlush(nctemp267);
}
int nctemp270 = (p !=0);
nctemp16=nctemp270;}return 1;
}
int SymIstemp (nctempchar1 *name)
{
nctempchar1 *t;
int lnc;
int i;
struct nctempchar1 *nctemp284;
static struct nctempchar1 nctemp285 = {{ 7}, (char*)"nctemp\0"};
nctemp284=&nctemp285;
int nctemp282=nctemp284->d[0];int nctemp288 = nctemp282 - 1;
lnc =nctemp288;
int nctemp292=name->d[0];int nctemp289 = (nctemp292 < lnc);
if(nctemp289)
{
return 0;
}
struct nctempchar1 *nctemp305;
static struct nctempchar1 nctemp306 = {{ 7}, (char*)"nctemp\0"};
nctemp305=&nctemp306;
nctempchar1* nctemp303= nctemp305;
nctempchar1* nctemp307=LibeStrsave(nctemp303);
t=nctemp307;
for(i = 0;i < lnc;i = (i + 1)){
int nctemp311=i;
int nctemp314=i;
int nctemp308 = (name->a[nctemp311] !=t->a[nctemp314]);
if(nctemp308)
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
int nctemp321 = (np !=0);
int nctemp325=nctemp321;
while(nctemp325)
{{
nctempchar1* nctemp329= s;
nctempchar1* nctemp332= np->name;
int nctemp335=LibeStrcmp(nctemp329,nctemp332);
int nctemp326 = (nctemp335 ==1);
if(nctemp326)
{
return np;
}
np = np->next;
}
int nctemp338 = (np !=0);
nctemp325=nctemp338;}np =0;
return np;
}
struct symbol* SymGetable (struct symbol* np)
{
return np->tbl;
}
struct symbol* SymMkname (nctempchar1 *name,struct symbol* tp)
{
struct symbol* np;
struct symbol* lp;
struct nctempchar1 *nctemp356;
static struct nctempchar1 nctemp357 = {{ 9}, (char*)"#arglist\0"};
nctemp356=&nctemp357;
nctempchar1* nctemp354= nctemp356;
struct symbol* nctemp358= tp;
struct symbol* nctemp360=SymLookup(nctemp354,nctemp358);
np =nctemp360;
int nctemp347 = (np !=0);
if(nctemp347)
{
struct symbol* nctemp366= np;
struct symbol* nctemp368=SymGetable(nctemp366);
np =nctemp368;
nctempchar1* nctemp376= name;
struct symbol* nctemp379= np;
struct symbol* nctemp381=SymLookup(nctemp376,nctemp379);
np =nctemp381;
int nctemp369 = (np !=0);
if(nctemp369)
{
np =0;
return np;
}
}
nctempchar1* nctemp394= name;
struct symbol* nctemp397= tp;
struct symbol* nctemp399=SymLookup(nctemp394,nctemp397);
np =nctemp399;
int nctemp387 = (np ==0);
if(nctemp387)
{
struct symbol *nctemp405=(struct symbol*)RunMalloc(sizeof(struct symbol));
np =nctemp405;
int nctemp407 = (np ==0);
if(nctemp407)
{
return np;
}
nctempchar1* nctemp420= name;
nctempchar1* nctemp423=LibeStrsave(nctemp420);
np->name=nctemp423;
nctempchar1 *nctemp413 =np->name;
int nctemp412 =(nctemp413==0);
if(nctemp412)
{
np =0;
return np;
}
lp = tp->last;
lp->next = np;
tp->last = np;
np->next = 0;
struct nctempchar1 *nctemp436;
static struct nctempchar1 nctemp437 = {{ 5}, (char*)"void\0"};
nctemp436=&nctemp437;
nctempchar1* nctemp434= nctemp436;
nctempchar1* nctemp438=LibeStrsave(nctemp434);
np->type=nctemp438;
struct nctempchar1 *nctemp446;
static struct nctempchar1 nctemp447 = {{ 5}, (char*)"void\0"};
nctemp446=&nctemp447;
nctempchar1* nctemp444= nctemp446;
nctempchar1* nctemp448=LibeStrsave(nctemp444);
np->func=nctemp448;
struct nctempchar1 *nctemp456;
static struct nctempchar1 nctemp457 = {{ 5}, (char*)"void\0"};
nctemp456=&nctemp457;
nctempchar1* nctemp454= nctemp456;
nctempchar1* nctemp458=LibeStrsave(nctemp454);
np->array=nctemp458;
struct nctempchar1 *nctemp466;
static struct nctempchar1 nctemp467 = {{ 5}, (char*)"void\0"};
nctemp466=&nctemp467;
nctempchar1* nctemp464= nctemp466;
nctempchar1* nctemp468=LibeStrsave(nctemp464);
np->structure=nctemp468;
np->tbl = 0;
struct nctempchar1 *nctemp476;
static struct nctempchar1 nctemp477 = {{ 5}, (char*)"void\0"};
nctemp476=&nctemp477;
nctempchar1* nctemp474= nctemp476;
nctempchar1* nctemp478=LibeStrsave(nctemp474);
np->ident=nctemp478;
np->rank = 0;
struct nctempchar1 *nctemp486;
static struct nctempchar1 nctemp487 = {{ 5}, (char*)"void\0"};
nctemp486=&nctemp487;
nctempchar1* nctemp484= nctemp486;
nctempchar1* nctemp488=LibeStrsave(nctemp484);
np->lval=nctemp488;
struct nctempchar1 *nctemp496;
static struct nctempchar1 nctemp497 = {{ 5}, (char*)"void\0"};
nctemp496=&nctemp497;
nctempchar1* nctemp494= nctemp496;
nctempchar1* nctemp498=LibeStrsave(nctemp494);
np->ref=nctemp498;
struct nctempchar1 *nctemp506;
static struct nctempchar1 nctemp507 = {{ 5}, (char*)"void\0"};
nctemp506=&nctemp507;
nctempchar1* nctemp504= nctemp506;
nctempchar1* nctemp508=LibeStrsave(nctemp504);
np->descr=nctemp508;
struct nctempchar1 *nctemp516;
static struct nctempchar1 nctemp517 = {{ 5}, (char*)"void\0"};
nctemp516=&nctemp517;
nctempchar1* nctemp514= nctemp516;
nctempchar1* nctemp518=LibeStrsave(nctemp514);
np->global=nctemp518;
struct nctempchar1 *nctemp526;
static struct nctempchar1 nctemp527 = {{ 5}, (char*)"void\0"};
nctemp526=&nctemp527;
nctempchar1* nctemp524= nctemp526;
nctempchar1* nctemp528=LibeStrsave(nctemp524);
np->module=nctemp528;
struct nctempchar1 *nctemp536;
static struct nctempchar1 nctemp537 = {{ 5}, (char*)"void\0"};
nctemp536=&nctemp537;
nctempchar1* nctemp534= nctemp536;
nctempchar1* nctemp538=LibeStrsave(nctemp534);
np->forw=nctemp538;
np->emit = 1;
}
else{
np = 0;
}
return np;
}
struct symbol* SymRmname (nctempchar1 *name,struct symbol* tp)
{
struct symbol* np;
struct symbol* sp;
struct symbol* prev;
np = tp;
sp = 0;
prev = np;
int nctemp540 = (np !=0);
int nctemp544=nctemp540;
while(nctemp544)
{{
nctempchar1* nctemp548= name;
nctempchar1* nctemp551= np->name;
int nctemp554=LibeStrcmp(nctemp548,nctemp551);
int nctemp545 = (nctemp554 ==1);
if(nctemp545)
{
sp = np;
np = 0;
}
else{
prev = np;
np = np->next;
}
}
int nctemp556 = (np !=0);
nctemp544=nctemp556;}np = sp;
int nctemp560 = (np ==0);
if(nctemp560)
{
return np;
}
int nctemp565 = (np->next ==0);
if(nctemp565)
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
struct symbol *nctemp605=(struct symbol*)RunMalloc(sizeof(struct symbol));
tp =nctemp605;
int nctemp607 = (tp ==0);
if(nctemp607)
{
return tp;
}
struct nctempchar1 *nctemp619;
static struct nctempchar1 nctemp620 = {{ 7}, (char*)"#first\0"};
nctemp619=&nctemp620;
nctempchar1* nctemp617= nctemp619;
nctempchar1* nctemp621=LibeStrsave(nctemp617);
tp->name=nctemp621;
struct nctempchar1 *nctemp629;
static struct nctempchar1 nctemp630 = {{ 5}, (char*)"void\0"};
nctemp629=&nctemp630;
nctempchar1* nctemp627= nctemp629;
nctempchar1* nctemp631=LibeStrsave(nctemp627);
tp->type=nctemp631;
tp->tbl = 0;
struct nctempchar1 *nctemp639;
static struct nctempchar1 nctemp640 = {{ 5}, (char*)"void\0"};
nctemp639=&nctemp640;
nctempchar1* nctemp637= nctemp639;
nctempchar1* nctemp641=LibeStrsave(nctemp637);
tp->func=nctemp641;
struct nctempchar1 *nctemp649;
static struct nctempchar1 nctemp650 = {{ 5}, (char*)"void\0"};
nctemp649=&nctemp650;
nctempchar1* nctemp647= nctemp649;
nctempchar1* nctemp651=LibeStrsave(nctemp647);
tp->ref=nctemp651;
struct nctempchar1 *nctemp659;
static struct nctempchar1 nctemp660 = {{ 5}, (char*)"void\0"};
nctemp659=&nctemp660;
nctempchar1* nctemp657= nctemp659;
nctempchar1* nctemp661=LibeStrsave(nctemp657);
tp->descr=nctemp661;
struct nctempchar1 *nctemp669;
static struct nctempchar1 nctemp670 = {{ 5}, (char*)"void\0"};
nctemp669=&nctemp670;
nctempchar1* nctemp667= nctemp669;
nctempchar1* nctemp671=LibeStrsave(nctemp667);
tp->array=nctemp671;
struct nctempchar1 *nctemp679;
static struct nctempchar1 nctemp680 = {{ 5}, (char*)"void\0"};
nctemp679=&nctemp680;
nctempchar1* nctemp677= nctemp679;
nctempchar1* nctemp681=LibeStrsave(nctemp677);
tp->structure=nctemp681;
struct nctempchar1 *nctemp689;
static struct nctempchar1 nctemp690 = {{ 5}, (char*)"void\0"};
nctemp689=&nctemp690;
nctempchar1* nctemp687= nctemp689;
nctempchar1* nctemp691=LibeStrsave(nctemp687);
tp->ident=nctemp691;
struct nctempchar1 *nctemp699;
static struct nctempchar1 nctemp700 = {{ 5}, (char*)"void\0"};
nctemp699=&nctemp700;
nctempchar1* nctemp697= nctemp699;
nctempchar1* nctemp701=LibeStrsave(nctemp697);
tp->lval=nctemp701;
struct nctempchar1 *nctemp709;
static struct nctempchar1 nctemp710 = {{ 5}, (char*)"void\0"};
nctemp709=&nctemp710;
nctempchar1* nctemp707= nctemp709;
nctempchar1* nctemp711=LibeStrsave(nctemp707);
tp->global=nctemp711;
struct nctempchar1 *nctemp719;
static struct nctempchar1 nctemp720 = {{ 5}, (char*)"void\0"};
nctemp719=&nctemp720;
nctempchar1* nctemp717= nctemp719;
nctempchar1* nctemp721=LibeStrsave(nctemp717);
tp->module=nctemp721;
struct nctempchar1 *nctemp729;
static struct nctempchar1 nctemp730 = {{ 5}, (char*)"void\0"};
nctemp729=&nctemp730;
nctempchar1* nctemp727= nctemp729;
nctempchar1* nctemp731=LibeStrsave(nctemp727);
tp->forw=nctemp731;
tp->emit = 1;
tp->next = 0;
tp->last = tp;
return tp;
}
struct symbol* SymMvnext (struct symbol* np)
{
int nctemp733 = (np ==0);
if(nctemp733)
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
nctempchar1 *nctemp744 =name;
int nctemp743 =(nctemp744!=0);
int nctemp749 = (p !=0);
int nctemp740 = (nctemp743 && nctemp749);
if(nctemp740)
{
RunFree(p->name->a);
RunFree(p->name);
nctempchar1* nctemp761= name;
nctempchar1* nctemp764=LibeStrsave(nctemp761);
p->name=nctemp764;
}
return 1;
}
int SymSetype (struct symbol* p,nctempchar1 *type)
{
nctempchar1 *nctemp770 =type;
int nctemp769 =(nctemp770!=0);
int nctemp775 = (p !=0);
int nctemp766 = (nctemp769 && nctemp775);
if(nctemp766)
{
RunFree(p->type->a);
RunFree(p->type);
nctempchar1* nctemp787= type;
nctempchar1* nctemp790=LibeStrsave(nctemp787);
p->type=nctemp790;
}
return 1;
}
nctempchar1 * SymGetype (struct symbol* np)
{
return np->type;
}
int SymSetfunc (struct symbol* p,nctempchar1 *func)
{
nctempchar1 *nctemp798 =func;
int nctemp797 =(nctemp798!=0);
int nctemp803 = (p !=0);
int nctemp794 = (nctemp797 && nctemp803);
if(nctemp794)
{
RunFree(p->func->a);
RunFree(p->func);
nctempchar1* nctemp815= func;
nctempchar1* nctemp818=LibeStrsave(nctemp815);
p->func=nctemp818;
}
return 1;
}
nctempchar1 * SymGetfunc (struct symbol* np)
{
return np->func;
}
int SymSetarray (struct symbol* p,nctempchar1 *array)
{
nctempchar1 *nctemp826 =array;
int nctemp825 =(nctemp826!=0);
int nctemp831 = (p !=0);
int nctemp822 = (nctemp825 && nctemp831);
if(nctemp822)
{
RunFree(p->array->a);
RunFree(p->array);
nctempchar1* nctemp843= array;
nctempchar1* nctemp846=LibeStrsave(nctemp843);
p->array=nctemp846;
}
return 1;
}
nctempchar1 * SymGetarray (struct symbol* np)
{
return np->array;
}
int SymSetstruct (struct symbol* p,nctempchar1 *structure)
{
nctempchar1 *nctemp854 =structure;
int nctemp853 =(nctemp854!=0);
int nctemp859 = (p !=0);
int nctemp850 = (nctemp853 && nctemp859);
if(nctemp850)
{
RunFree(p->structure->a);
RunFree(p->structure);
nctempchar1* nctemp871= structure;
nctempchar1* nctemp874=LibeStrsave(nctemp871);
p->structure=nctemp874;
}
return 1;
}
nctempchar1 * SymGetstruct (struct symbol* np)
{
return np->structure;
}
int SymSetident (struct symbol* p,nctempchar1 *ident)
{
nctempchar1 *nctemp882 =ident;
int nctemp881 =(nctemp882!=0);
int nctemp887 = (p !=0);
int nctemp878 = (nctemp881 && nctemp887);
if(nctemp878)
{
RunFree(p->ident->a);
RunFree(p->ident);
nctempchar1* nctemp899= ident;
nctempchar1* nctemp902=LibeStrsave(nctemp899);
p->ident=nctemp902;
}
return 1;
}
nctempchar1 * SymGetident (struct symbol* np)
{
return np->ident;
}
int SymSetlval (struct symbol* p,nctempchar1 *lval)
{
nctempchar1 *nctemp910 =lval;
int nctemp909 =(nctemp910!=0);
int nctemp915 = (p !=0);
int nctemp906 = (nctemp909 && nctemp915);
if(nctemp906)
{
RunFree(p->lval->a);
RunFree(p->lval);
nctempchar1* nctemp927= lval;
nctempchar1* nctemp930=LibeStrsave(nctemp927);
p->lval=nctemp930;
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
nctempchar1 *nctemp942 =ref;
int nctemp941 =(nctemp942!=0);
int nctemp947 = (p !=0);
int nctemp938 = (nctemp941 && nctemp947);
if(nctemp938)
{
RunFree(p->ref->a);
RunFree(p->ref);
nctempchar1* nctemp959= ref;
nctempchar1* nctemp962=LibeStrsave(nctemp959);
p->ref=nctemp962;
}
return 1;
}
nctempchar1 * SymGetref (struct symbol* np)
{
return np->ref;
}
int SymSetmodule (struct symbol* p,nctempchar1 *module)
{
nctempchar1 *nctemp970 =module;
int nctemp969 =(nctemp970!=0);
int nctemp975 = (p !=0);
int nctemp966 = (nctemp969 && nctemp975);
if(nctemp966)
{
RunFree(p->module->a);
RunFree(p->module);
nctempchar1* nctemp987= module;
nctempchar1* nctemp990=LibeStrsave(nctemp987);
p->module=nctemp990;
}
return 1;
}
nctempchar1 * SymGetmodule (struct symbol* np)
{
return np->module;
}
int SymSetforw (struct symbol* p,nctempchar1 *forw)
{
nctempchar1 *nctemp998 =forw;
int nctemp997 =(nctemp998!=0);
int nctemp1003 = (p !=0);
int nctemp994 = (nctemp997 && nctemp1003);
if(nctemp994)
{
RunFree(p->forw->a);
RunFree(p->forw);
nctempchar1* nctemp1015= forw;
nctempchar1* nctemp1018=LibeStrsave(nctemp1015);
p->forw=nctemp1018;
}
return 1;
}
nctempchar1 * SymGetforw (struct symbol* np)
{
return np->forw;
}
int SymSetdescr (struct symbol* p,nctempchar1 *descr)
{
nctempchar1 *nctemp1026 =descr;
int nctemp1025 =(nctemp1026!=0);
int nctemp1031 = (p !=0);
int nctemp1022 = (nctemp1025 && nctemp1031);
if(nctemp1022)
{
RunFree(p->descr->a);
RunFree(p->descr);
nctempchar1* nctemp1043= descr;
nctempchar1* nctemp1046=LibeStrsave(nctemp1043);
p->descr=nctemp1046;
}
return 1;
}
nctempchar1 * SymGetdescr (struct symbol* np)
{
return np->descr;
}
int SymSetglobal (struct symbol* p,nctempchar1 *global)
{
nctempchar1 *nctemp1054 =global;
int nctemp1053 =(nctemp1054!=0);
int nctemp1059 = (p !=0);
int nctemp1050 = (nctemp1053 && nctemp1059);
if(nctemp1050)
{
RunFree(p->global->a);
RunFree(p->global);
nctempchar1* nctemp1071= global;
nctempchar1* nctemp1074=LibeStrsave(nctemp1071);
p->global=nctemp1074;
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
int nctemp1078 = (p ==0);
if(nctemp1078)
{
return 0;
}
prev = 0;
int nctemp1083 = (p !=0);
int nctemp1087=nctemp1083;
while(nctemp1087)
{{
next = p->next;
struct nctempchar1 *nctemp1093;
static struct nctempchar1 nctemp1094 = {{ 9}, (char*)"#arglist\0"};
nctemp1093=&nctemp1094;
nctempchar1* nctemp1091= nctemp1093;
nctempchar1* nctemp1095= p->name;
int nctemp1098=LibeStrcmp(nctemp1091,nctemp1095);
int nctemp1088 = (nctemp1098 ==0);
if(nctemp1088)
{
struct nctempchar1 *nctemp1105;
static struct nctempchar1 nctemp1106 = {{ 6}, (char*)"#self\0"};
nctemp1105=&nctemp1106;
nctempchar1* nctemp1103= nctemp1105;
nctempchar1* nctemp1107= p->name;
int nctemp1110=LibeStrcmp(nctemp1103,nctemp1107);
int nctemp1100 = (nctemp1110 ==0);
if(nctemp1100)
{
struct nctempchar1 *nctemp1117;
static struct nctempchar1 nctemp1118 = {{ 7}, (char*)"#first\0"};
nctemp1117=&nctemp1118;
nctempchar1* nctemp1115= nctemp1117;
nctempchar1* nctemp1119= p->name;
int nctemp1122=LibeStrcmp(nctemp1115,nctemp1119);
int nctemp1112 = (nctemp1122 ==0);
if(nctemp1112)
{
int nctemp1124 = (p->tbl !=0);
if(nctemp1124)
{
struct symbol* nctemp1129= p->tbl;
int nctemp1131=SymRmtable(nctemp1129);
p->tbl = 0;
}
int nctemp1132 = (prev !=0);
if(nctemp1132)
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
int nctemp1167 = (p !=0);
nctemp1087=nctemp1167;}return 1;
}
struct symbol* SymLook (nctempchar1 *name)
{
struct symbol* tp;
struct symbol* ap;
nctempchar1* nctemp1179= name;
struct symbol* nctemp1184=SymGetetp();
struct symbol* nctemp1182= nctemp1184;
struct symbol* nctemp1185=SymLookup(nctemp1179,nctemp1182);
tp =nctemp1185;
int nctemp1172 = (tp ==0);
if(nctemp1172)
{
nctempchar1* nctemp1194= name;
struct symbol* nctemp1199=SymGetltp();
struct symbol* nctemp1197= nctemp1199;
struct symbol* nctemp1200=SymLookup(nctemp1194,nctemp1197);
tp =nctemp1200;
int nctemp1187 = (tp ==0);
if(nctemp1187)
{
struct nctempchar1 *nctemp1208;
static struct nctempchar1 nctemp1209 = {{ 9}, (char*)"#arglist\0"};
nctemp1208=&nctemp1209;
nctempchar1* nctemp1206= nctemp1208;
struct symbol* nctemp1212=SymGetltp();
struct symbol* nctemp1210= nctemp1212;
struct symbol* nctemp1213=SymLookup(nctemp1206,nctemp1210);
tp =nctemp1213;
int nctemp1214 = (tp ==0);
if(nctemp1214)
{
return tp;
}
struct symbol* nctemp1223= tp;
struct symbol* nctemp1225=SymGetable(nctemp1223);
ap =nctemp1225;
int nctemp1226 = (ap ==0);
if(nctemp1226)
{
return ap;
}
nctempchar1* nctemp1238= name;
struct symbol* nctemp1241= ap;
struct symbol* nctemp1243=SymLookup(nctemp1238,nctemp1241);
tp =nctemp1243;
int nctemp1231 = (tp ==0);
if(nctemp1231)
{
nctempchar1* nctemp1249= name;
struct symbol* nctemp1254=SymGetetp();
struct symbol* nctemp1252= nctemp1254;
struct symbol* nctemp1255=SymLookup(nctemp1249,nctemp1252);
tp =nctemp1255;
}
}
}
return tp;
}
int SymCpytble (struct symbol* tp,struct symbol* up)
{
struct symbol* wp;
struct symbol* nctemp1261= tp;
struct symbol* nctemp1263=SymMvnext(nctemp1261);
tp =nctemp1263;
int nctemp1264 = (tp !=0);
int nctemp1268=nctemp1264;
while(nctemp1268)
{{
struct symbol* nctemp1275= tp;
nctempchar1* nctemp1277=SymGetname(nctemp1275);
nctempchar1* nctemp1273= nctemp1277;
struct symbol* nctemp1278= up;
struct symbol* nctemp1280=SymMkname(nctemp1273,nctemp1278);
wp =nctemp1280;
struct symbol* nctemp1282= wp;
struct symbol* nctemp1286= tp;
nctempchar1* nctemp1288=SymGetype(nctemp1286);
nctempchar1* nctemp1284= nctemp1288;
int nctemp1289=SymSetype(nctemp1282,nctemp1284);
struct symbol* nctemp1291= wp;
struct symbol* nctemp1295= tp;
nctempchar1* nctemp1297=SymGetfunc(nctemp1295);
nctempchar1* nctemp1293= nctemp1297;
int nctemp1298=SymSetfunc(nctemp1291,nctemp1293);
struct symbol* nctemp1300= wp;
struct symbol* nctemp1304= tp;
nctempchar1* nctemp1306=SymGetarray(nctemp1304);
nctempchar1* nctemp1302= nctemp1306;
int nctemp1307=SymSetarray(nctemp1300,nctemp1302);
struct symbol* nctemp1309= wp;
struct symbol* nctemp1313= tp;
int nctemp1315=SymGetrank(nctemp1313);
int nctemp1311= nctemp1315;
int nctemp1316=SymSetrank(nctemp1309,nctemp1311);
struct symbol* nctemp1318= wp;
struct symbol* nctemp1322= tp;
nctempchar1* nctemp1324=SymGetstruct(nctemp1322);
nctempchar1* nctemp1320= nctemp1324;
int nctemp1325=SymSetstruct(nctemp1318,nctemp1320);
struct symbol* nctemp1327= wp;
struct symbol* nctemp1331= tp;
nctempchar1* nctemp1333=SymGetident(nctemp1331);
nctempchar1* nctemp1329= nctemp1333;
int nctemp1334=SymSetident(nctemp1327,nctemp1329);
struct symbol* nctemp1336= wp;
struct symbol* nctemp1340= tp;
nctempchar1* nctemp1342=SymGetlval(nctemp1340);
nctempchar1* nctemp1338= nctemp1342;
int nctemp1343=SymSetlval(nctemp1336,nctemp1338);
struct symbol* nctemp1345= wp;
struct symbol* nctemp1349= tp;
nctempchar1* nctemp1351=SymGetref(nctemp1349);
nctempchar1* nctemp1347= nctemp1351;
int nctemp1352=SymSetref(nctemp1345,nctemp1347);
struct symbol* nctemp1354= wp;
struct symbol* nctemp1358= tp;
nctempchar1* nctemp1360=SymGetdescr(nctemp1358);
nctempchar1* nctemp1356= nctemp1360;
int nctemp1361=SymSetdescr(nctemp1354,nctemp1356);
struct symbol* nctemp1363= wp;
struct symbol* nctemp1367= tp;
int nctemp1369=SymGetemit(nctemp1367);
int nctemp1365= nctemp1369;
int nctemp1370=SymSetemit(nctemp1363,nctemp1365);
struct symbol* nctemp1372= wp;
struct symbol* nctemp1376= tp;
nctempchar1* nctemp1378=SymGetmodule(nctemp1376);
nctempchar1* nctemp1374= nctemp1378;
int nctemp1379=SymSetmodule(nctemp1372,nctemp1374);
struct symbol* nctemp1381= wp;
struct symbol* nctemp1385= tp;
nctempchar1* nctemp1387=SymGetglobal(nctemp1385);
nctempchar1* nctemp1383= nctemp1387;
int nctemp1388=SymSetglobal(nctemp1381,nctemp1383);
struct symbol* nctemp1393= tp;
struct symbol* nctemp1395=SymMvnext(nctemp1393);
tp =nctemp1395;
}
int nctemp1396 = (tp !=0);
nctemp1268=nctemp1396;}return 1;
}
struct symbol* SymAddtble (struct symbol* tp,struct symbol* sp)
{
struct symbol* start;
struct symbol* prev;
start = tp;
int nctemp1401 = (sp ==0);
if(nctemp1401)
{
return start;
}
int nctemp1406 = (tp ==0);
if(nctemp1406)
{
return start;
}
struct symbol* nctemp1414= sp;
struct symbol* nctemp1416=SymMvnext(nctemp1414);
int nctemp1411 = (nctemp1416 ==0);
if(nctemp1411)
{
return start;
}
tp->last = sp->last;
struct symbol* nctemp1423= tp;
struct symbol* nctemp1425=SymMvnext(nctemp1423);
tp =nctemp1425;
int nctemp1426 = (tp ==0);
if(nctemp1426)
{
struct symbol* nctemp1434= sp;
struct symbol* nctemp1436=SymMvnext(nctemp1434);
start->next =nctemp1436;
return start;
}
int nctemp1438 = (tp !=0);
int nctemp1442=nctemp1438;
while(nctemp1442)
{{
prev = tp;
struct symbol* nctemp1447= tp;
struct symbol* nctemp1449=SymMvnext(nctemp1447);
tp =nctemp1449;
}
int nctemp1450 = (tp !=0);
nctemp1442=nctemp1450;}tp = prev;
struct symbol* nctemp1458= sp;
struct symbol* nctemp1460=SymMvnext(nctemp1458);
tp->next =nctemp1460;
return start;
}
int SymExport (int fp,struct symbol* p,int level)
{
struct symbol* tq;
int nctemp1462 = (p ==0);
if(nctemp1462)
{
return 0;
}
struct symbol* nctemp1471=SymMktable();
tq =nctemp1471;
int nctemp1473= fp;
struct symbol* nctemp1475= tq;
int nctemp1477= 0;
int nctemp1479=SymPrsym(nctemp1473,nctemp1475,nctemp1477);
p = p->next;
int nctemp1480 = (p !=0);
int nctemp1484=nctemp1480;
while(nctemp1484)
{{
nctempchar1* nctemp1488= p->name;
int nctemp1491=SymIstemp(nctemp1488);
int nctemp1485 = (nctemp1491 ==0);
if(nctemp1485)
{
nctempchar1* nctemp1496= p->module;
struct nctempchar1 *nctemp1501;
static struct nctempchar1 nctemp1502 = {{ 5}, (char*)"void\0"};
nctemp1501=&nctemp1502;
nctempchar1* nctemp1499= nctemp1501;
int nctemp1503=LibeStrcmp(nctemp1496,nctemp1499);
int nctemp1493 = (nctemp1503 ==1);
if(nctemp1493)
{
int nctemp1506= fp;
struct nctempchar1 *nctemp1510;
static struct nctempchar1 nctemp1511 = {{ 2}, (char*)" \0"};
nctemp1510=&nctemp1511;
nctempchar1* nctemp1508= nctemp1510;
int nctemp1512=LibePuts(nctemp1506,nctemp1508);
int nctemp1514= fp;
nctempchar1* nctemp1516= p->name;
int nctemp1519=LibePuts(nctemp1514,nctemp1516);
int nctemp1521= fp;
struct nctempchar1 *nctemp1525;
static struct nctempchar1 nctemp1526 = {{ 2}, (char*)" \0"};
nctemp1525=&nctemp1526;
nctempchar1* nctemp1523= nctemp1525;
int nctemp1527=LibePuts(nctemp1521,nctemp1523);
int nctemp1529= fp;
nctempchar1* nctemp1531= p->type;
int nctemp1534=LibePuts(nctemp1529,nctemp1531);
int nctemp1536= fp;
struct nctempchar1 *nctemp1540;
static struct nctempchar1 nctemp1541 = {{ 2}, (char*)" \0"};
nctemp1540=&nctemp1541;
nctempchar1* nctemp1538= nctemp1540;
int nctemp1542=LibePuts(nctemp1536,nctemp1538);
int nctemp1544= fp;
nctempchar1* nctemp1546= p->func;
int nctemp1549=LibePuts(nctemp1544,nctemp1546);
int nctemp1551= fp;
struct nctempchar1 *nctemp1555;
static struct nctempchar1 nctemp1556 = {{ 2}, (char*)" \0"};
nctemp1555=&nctemp1556;
nctempchar1* nctemp1553= nctemp1555;
int nctemp1557=LibePuts(nctemp1551,nctemp1553);
int nctemp1559= fp;
nctempchar1* nctemp1561= p->array;
int nctemp1564=LibePuts(nctemp1559,nctemp1561);
int nctemp1566= fp;
struct nctempchar1 *nctemp1570;
static struct nctempchar1 nctemp1571 = {{ 2}, (char*)" \0"};
nctemp1570=&nctemp1571;
nctempchar1* nctemp1568= nctemp1570;
int nctemp1572=LibePuts(nctemp1566,nctemp1568);
int nctemp1574= fp;
int nctemp1576= p->rank;
int nctemp1578=LibePuti(nctemp1574,nctemp1576);
int nctemp1580= fp;
struct nctempchar1 *nctemp1584;
static struct nctempchar1 nctemp1585 = {{ 2}, (char*)" \0"};
nctemp1584=&nctemp1585;
nctempchar1* nctemp1582= nctemp1584;
int nctemp1586=LibePuts(nctemp1580,nctemp1582);
int nctemp1588= fp;
int nctemp1590= p->emit;
int nctemp1592=LibePuti(nctemp1588,nctemp1590);
int nctemp1594= fp;
struct nctempchar1 *nctemp1598;
static struct nctempchar1 nctemp1599 = {{ 2}, (char*)" \0"};
nctemp1598=&nctemp1599;
nctempchar1* nctemp1596= nctemp1598;
int nctemp1600=LibePuts(nctemp1594,nctemp1596);
int nctemp1602= fp;
nctempchar1* nctemp1604= p->structure;
int nctemp1607=LibePuts(nctemp1602,nctemp1604);
int nctemp1609= fp;
struct nctempchar1 *nctemp1613;
static struct nctempchar1 nctemp1614 = {{ 2}, (char*)" \0"};
nctemp1613=&nctemp1614;
nctempchar1* nctemp1611= nctemp1613;
int nctemp1615=LibePuts(nctemp1609,nctemp1611);
int nctemp1617= fp;
nctempchar1* nctemp1619= p->ident;
int nctemp1622=LibePuts(nctemp1617,nctemp1619);
int nctemp1624= fp;
struct nctempchar1 *nctemp1628;
static struct nctempchar1 nctemp1629 = {{ 2}, (char*)" \0"};
nctemp1628=&nctemp1629;
nctempchar1* nctemp1626= nctemp1628;
int nctemp1630=LibePuts(nctemp1624,nctemp1626);
int nctemp1632= fp;
nctempchar1* nctemp1634= p->lval;
int nctemp1637=LibePuts(nctemp1632,nctemp1634);
int nctemp1639= fp;
struct nctempchar1 *nctemp1643;
static struct nctempchar1 nctemp1644 = {{ 2}, (char*)" \0"};
nctemp1643=&nctemp1644;
nctempchar1* nctemp1641= nctemp1643;
int nctemp1645=LibePuts(nctemp1639,nctemp1641);
int nctemp1647= fp;
nctempchar1* nctemp1649= p->ref;
int nctemp1652=LibePuts(nctemp1647,nctemp1649);
int nctemp1654= fp;
struct nctempchar1 *nctemp1658;
static struct nctempchar1 nctemp1659 = {{ 2}, (char*)" \0"};
nctemp1658=&nctemp1659;
nctempchar1* nctemp1656= nctemp1658;
int nctemp1660=LibePuts(nctemp1654,nctemp1656);
int nctemp1662= fp;
nctempchar1* nctemp1664= p->descr;
int nctemp1667=LibePuts(nctemp1662,nctemp1664);
int nctemp1669= fp;
struct nctempchar1 *nctemp1673;
static struct nctempchar1 nctemp1674 = {{ 2}, (char*)" \0"};
nctemp1673=&nctemp1674;
nctempchar1* nctemp1671= nctemp1673;
int nctemp1675=LibePuts(nctemp1669,nctemp1671);
int nctemp1677= fp;
nctempchar1* nctemp1679= p->global;
int nctemp1682=LibePuts(nctemp1677,nctemp1679);
int nctemp1684= fp;
struct nctempchar1 *nctemp1688;
static struct nctempchar1 nctemp1689 = {{ 2}, (char*)" \0"};
nctemp1688=&nctemp1689;
nctempchar1* nctemp1686= nctemp1688;
int nctemp1690=LibePuts(nctemp1684,nctemp1686);
int nctemp1692= fp;
nctempchar1* nctemp1694= p->module;
int nctemp1697=LibePuts(nctemp1692,nctemp1694);
int nctemp1699= fp;
struct nctempchar1 *nctemp1703;
static struct nctempchar1 nctemp1704 = {{ 2}, (char*)" \0"};
nctemp1703=&nctemp1704;
nctempchar1* nctemp1701= nctemp1703;
int nctemp1705=LibePuts(nctemp1699,nctemp1701);
int nctemp1707= fp;
struct nctempchar1 *nctemp1711;
static struct nctempchar1 nctemp1712 = {{ 3}, (char*)"\n\0"};
nctemp1711=&nctemp1712;
nctempchar1* nctemp1709= nctemp1711;
int nctemp1713=LibePuts(nctemp1707,nctemp1709);
int nctemp1715= fp;
int nctemp1717=LibeFlush(nctemp1715);
int nctemp1719= fp;
struct symbol* nctemp1723= p;
struct symbol* nctemp1725=SymGetable(nctemp1723);
struct symbol* nctemp1721= nctemp1725;
int nctemp1726= 1;
int nctemp1728=SymPrsym(nctemp1719,nctemp1721,nctemp1726);
}
}
p = p->next;
}
int nctemp1729 = (p !=0);
nctemp1484=nctemp1729;}int nctemp1734= fp;
int nctemp1736=LibeFlush(nctemp1734);
return 1;
}
int Symgetline (int fp,struct symbol* np,nctempchar1 *module)
{
int indent;
int ch;
nctempchar1 *field;
int tmp;
int nctemp1744=400;
nctempchar1 *nctemp1743;
nctemp1743=(nctempchar1*)RunMalloc(sizeof(nctempchar1));
nctemp1743->d[0]=400;
nctemp1743->a=(char *)RunMalloc(sizeof(char)*nctemp1744);
field=nctemp1743;
indent = 0;
ch = 1;
int nctemp1754= fp;
int nctemp1756=LibeGetc(nctemp1754);
ch =nctemp1756;
int nctemp1747 = (ch ==(-1));
if(nctemp1747)
{
int nctemp1758= -1;
return nctemp1758;
}
else{
int nctemp1760= fp;
int nctemp1762=LibeUngetc(nctemp1760);
}
int nctemp1770= fp;
int nctemp1772=LibeGetc(nctemp1770);
ch =nctemp1772;
int nctemp1763 = (ch ==32);
int nctemp1774=nctemp1763;
while(nctemp1774)
{{
indent = (indent + 1);
}
int nctemp1782= fp;
int nctemp1784=LibeGetc(nctemp1782);
ch =nctemp1784;
int nctemp1775 = (ch ==32);
nctemp1774=nctemp1775;}int nctemp1787= fp;
int nctemp1789=LibeUngetc(nctemp1787);
int nctemp1791= fp;
nctempchar1* nctemp1793= field;
int nctemp1796=LibeGetw(nctemp1791,nctemp1793);
struct symbol* nctemp1798= np;
nctempchar1* nctemp1800= field;
int nctemp1803=SymSetname(nctemp1798,nctemp1800);
int nctemp1805= fp;
nctempchar1* nctemp1807= field;
int nctemp1810=LibeGetw(nctemp1805,nctemp1807);
struct symbol* nctemp1812= np;
nctempchar1* nctemp1814= field;
int nctemp1817=SymSetype(nctemp1812,nctemp1814);
int nctemp1819= fp;
nctempchar1* nctemp1821= field;
int nctemp1824=LibeGetw(nctemp1819,nctemp1821);
struct symbol* nctemp1826= np;
nctempchar1* nctemp1828= field;
int nctemp1831=SymSetfunc(nctemp1826,nctemp1828);
int nctemp1833= fp;
nctempchar1* nctemp1835= field;
int nctemp1838=LibeGetw(nctemp1833,nctemp1835);
struct symbol* nctemp1840= np;
nctempchar1* nctemp1842= field;
int nctemp1845=SymSetarray(nctemp1840,nctemp1842);
int nctemp1847= fp;
nctempchar1* nctemp1849= field;
int nctemp1852=LibeGetw(nctemp1847,nctemp1849);
struct symbol* nctemp1854= np;
nctempchar1* nctemp1858= field;
int nctemp1861=LibeAtoi(nctemp1858);
int nctemp1856= nctemp1861;
int nctemp1862=SymSetrank(nctemp1854,nctemp1856);
int nctemp1864= fp;
nctempchar1* nctemp1866= field;
int nctemp1869=LibeGetw(nctemp1864,nctemp1866);
struct symbol* nctemp1871= np;
nctempchar1* nctemp1875= field;
int nctemp1878=LibeAtoi(nctemp1875);
int nctemp1873= nctemp1878;
int nctemp1879=SymSetemit(nctemp1871,nctemp1873);
int nctemp1881= fp;
nctempchar1* nctemp1883= field;
int nctemp1886=LibeGetw(nctemp1881,nctemp1883);
struct symbol* nctemp1888= np;
nctempchar1* nctemp1890= field;
int nctemp1893=SymSetstruct(nctemp1888,nctemp1890);
int nctemp1895= fp;
nctempchar1* nctemp1897= field;
int nctemp1900=LibeGetw(nctemp1895,nctemp1897);
struct symbol* nctemp1902= np;
nctempchar1* nctemp1904= field;
int nctemp1907=SymSetident(nctemp1902,nctemp1904);
int nctemp1909= fp;
nctempchar1* nctemp1911= field;
int nctemp1914=LibeGetw(nctemp1909,nctemp1911);
struct symbol* nctemp1916= np;
nctempchar1* nctemp1918= field;
int nctemp1921=SymSetlval(nctemp1916,nctemp1918);
int nctemp1923= fp;
nctempchar1* nctemp1925= field;
int nctemp1928=LibeGetw(nctemp1923,nctemp1925);
struct symbol* nctemp1930= np;
nctempchar1* nctemp1932= field;
int nctemp1935=SymSetref(nctemp1930,nctemp1932);
int nctemp1937= fp;
nctempchar1* nctemp1939= field;
int nctemp1942=LibeGetw(nctemp1937,nctemp1939);
struct symbol* nctemp1944= np;
nctempchar1* nctemp1946= field;
int nctemp1949=SymSetdescr(nctemp1944,nctemp1946);
int nctemp1951= fp;
nctempchar1* nctemp1953= field;
int nctemp1956=LibeGetw(nctemp1951,nctemp1953);
struct symbol* nctemp1958= np;
nctempchar1* nctemp1960= field;
int nctemp1963=SymSetglobal(nctemp1958,nctemp1960);
int nctemp1965= fp;
nctempchar1* nctemp1967= field;
int nctemp1970=LibeGetw(nctemp1965,nctemp1967);
struct symbol* nctemp1972= np;
nctempchar1* nctemp1974= module;
int nctemp1977=SymSetmodule(nctemp1972,nctemp1974);
int nctemp1985= fp;
int nctemp1987=LibeGetc(nctemp1985);
ch =nctemp1987;
int nctemp1978 = (ch !=10);
int nctemp1989=nctemp1978;
while(nctemp1989)
{{
tmp = 0;
tmp = (0 + tmp);
}
int nctemp1997= fp;
int nctemp1999=LibeGetc(nctemp1997);
ch =nctemp1999;
int nctemp1990 = (ch !=10);
nctemp1989=nctemp1990;}return indent;
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
struct symbol* nctemp2006=SymMktable();
ttbl =nctemp2006;
struct symbol* nctemp2008= ttbl;
nctempchar1* nctemp2010= module;
int nctemp2013=SymSetmodule(nctemp2008,nctemp2010);
struct nctempchar1 *nctemp2020;
static struct nctempchar1 nctemp2021 = {{ 6}, (char*)"dummy\0"};
nctemp2020=&nctemp2021;
nctempchar1* nctemp2018= nctemp2020;
struct symbol* nctemp2022= ttbl;
struct symbol* nctemp2024=SymMkname(nctemp2018,nctemp2022);
mp =nctemp2024;
int nctemp2029= fp;
struct symbol* nctemp2031= mp;
nctempchar1* nctemp2033= module;
int nctemp2036=Symgetline(nctemp2029,nctemp2031,nctemp2033);
indent =nctemp2036;
oldindent = 1;
indent = 1;
int nctemp2038=1;
while(nctemp2038)
{{
int nctemp2043= fp;
struct symbol* nctemp2045= mp;
nctempchar1* nctemp2047= module;
int nctemp2050=Symgetline(nctemp2043,nctemp2045,nctemp2047);
indent =nctemp2050;
int nctemp2051 = (indent < 0);
if(nctemp2051)
{
return 1;
}
nctempchar1* nctemp2059= mp->name;
struct nctempchar1 *nctemp2064;
static struct nctempchar1 nctemp2065 = {{ 7}, (char*)"#first\0"};
nctemp2064=&nctemp2065;
nctempchar1* nctemp2062= nctemp2064;
int nctemp2066=LibeStrcmp(nctemp2059,nctemp2062);
int nctemp2056 = (nctemp2066 ==1);
if(nctemp2056)
{
int nctemp2072= fp;
struct symbol* nctemp2074= mp;
nctempchar1* nctemp2076= module;
int nctemp2079=Symgetline(nctemp2072,nctemp2074,nctemp2076);
indent =nctemp2079;
}
int nctemp2080 = (indent ==oldindent);
if(nctemp2080)
{
struct symbol* nctemp2085= ttbl;
struct symbol* nctemp2087= tbl;
int nctemp2089=SymCpytble(nctemp2085,nctemp2087);
oldindent = indent;
}
int nctemp2090 = (indent > oldindent);
if(nctemp2090)
{
struct symbol* nctemp2098=SymMktable();
ntbl =nctemp2098;
struct symbol* nctemp2100= ntbl;
nctempchar1* nctemp2102= module;
int nctemp2105=SymSetmodule(nctemp2100,nctemp2102);
np = tbl->last;
struct symbol* nctemp2107= np;
struct symbol* nctemp2109= ntbl;
struct symbol* nctemp2111=SymSetable(nctemp2107,nctemp2109);
tbl = ntbl;
struct symbol* nctemp2113= ttbl;
struct symbol* nctemp2115= tbl;
int nctemp2117=SymCpytble(nctemp2113,nctemp2115);
oldindent = indent;
}
int nctemp2118 = (indent < oldindent);
if(nctemp2118)
{
tbl = rtbl;
int nctemp2122 = (indent ==1);
if(nctemp2122)
{
tbl = rtbl;
}
else{
for(i = 0;i < indent;i = (i + 1)){
struct symbol* nctemp2130= tbl->last;
struct symbol* nctemp2132=SymGetable(nctemp2130);
tbl =nctemp2132;
}
}
struct symbol* nctemp2134= ttbl;
struct symbol* nctemp2136= tbl;
int nctemp2138=SymCpytble(nctemp2134,nctemp2136);
oldindent = indent;
}
}
nctemp2038=1;}int nctemp2141= fp;
int nctemp2143=LibeClose(nctemp2141);
return 1;
}
