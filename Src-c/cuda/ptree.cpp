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
int ErrError (nctempchar1 *file,int line,nctempchar1 *s);
int ErrSerror (nctempchar1 *file,nctempchar1 *fname,int lineno,nctempchar1 *s1,nctempchar1 *s2);
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
int PtreeInit ()
{
return 1;
}
int PtreePrtree (struct tree* p,int level)
{
int i;
int fp;
fp = 3;
int nctemp2 = (p !=0);
if(nctemp2)
{
i =0;
int nctemp10 = (i < level);
int nctemp14=nctemp10;
while(nctemp14)
{{
int nctemp16= fp;
struct nctempchar1 *nctemp20;
static struct nctempchar1 nctemp21 = {{ 2}, (char*)" \0"};
nctemp20=&nctemp21;
nctempchar1* nctemp18= nctemp20;
int nctemp22=LibePuts(nctemp16,nctemp18);
int nctemp31 = i + 1;
i =nctemp31;
}
int nctemp32 = (i < level);
nctemp14=nctemp32;}int nctemp37= fp;
nctempchar1* nctemp39= p->name;
int nctemp42=LibePuts(nctemp37,nctemp39);
int nctemp44= fp;
struct nctempchar1 *nctemp48;
static struct nctempchar1 nctemp49 = {{ 2}, (char*)" \0"};
nctemp48=&nctemp49;
nctempchar1* nctemp46= nctemp48;
int nctemp50=LibePuts(nctemp44,nctemp46);
int nctemp52= fp;
nctempchar1* nctemp54= p->defn;
int nctemp57=LibePuts(nctemp52,nctemp54);
int nctemp59= fp;
struct nctempchar1 *nctemp63;
static struct nctempchar1 nctemp64 = {{ 2}, (char*)" \0"};
nctemp63=&nctemp64;
nctempchar1* nctemp61= nctemp63;
int nctemp65=LibePuts(nctemp59,nctemp61);
int nctemp67= fp;
nctempchar1* nctemp69= p->type;
int nctemp72=LibePuts(nctemp67,nctemp69);
int nctemp74= fp;
struct nctempchar1 *nctemp78;
static struct nctempchar1 nctemp79 = {{ 2}, (char*)" \0"};
nctemp78=&nctemp79;
nctempchar1* nctemp76= nctemp78;
int nctemp80=LibePuts(nctemp74,nctemp76);
int nctemp82= fp;
nctempchar1* nctemp84= p->structure;
int nctemp87=LibePuts(nctemp82,nctemp84);
int nctemp89= fp;
struct nctempchar1 *nctemp93;
static struct nctempchar1 nctemp94 = {{ 2}, (char*)" \0"};
nctemp93=&nctemp94;
nctempchar1* nctemp91= nctemp93;
int nctemp95=LibePuts(nctemp89,nctemp91);
int nctemp97= fp;
nctempchar1* nctemp99= p->array;
int nctemp102=LibePuts(nctemp97,nctemp99);
int nctemp104= fp;
struct nctempchar1 *nctemp108;
static struct nctempchar1 nctemp109 = {{ 2}, (char*)" \0"};
nctemp108=&nctemp109;
nctempchar1* nctemp106= nctemp108;
int nctemp110=LibePuts(nctemp104,nctemp106);
int nctemp112= fp;
nctempchar1* nctemp114= p->paral;
int nctemp117=LibePuts(nctemp112,nctemp114);
int nctemp119= fp;
struct nctempchar1 *nctemp123;
static struct nctempchar1 nctemp124 = {{ 2}, (char*)" \0"};
nctemp123=&nctemp124;
nctempchar1* nctemp121= nctemp123;
int nctemp125=LibePuts(nctemp119,nctemp121);
int nctemp127= fp;
nctempchar1* nctemp129= p->global;
int nctemp132=LibePuts(nctemp127,nctemp129);
int nctemp134= fp;
struct nctempchar1 *nctemp138;
static struct nctempchar1 nctemp139 = {{ 2}, (char*)" \0"};
nctemp138=&nctemp139;
nctempchar1* nctemp136= nctemp138;
int nctemp140=LibePuts(nctemp134,nctemp136);
int nctemp142= fp;
int nctemp144= p->rank;
int nctemp146=LibePuti(nctemp142,nctemp144);
int nctemp148= fp;
struct nctempchar1 *nctemp152;
static struct nctempchar1 nctemp153 = {{ 2}, (char*)" \0"};
nctemp152=&nctemp153;
nctempchar1* nctemp150= nctemp152;
int nctemp154=LibePuts(nctemp148,nctemp150);
int nctemp156= fp;
nctempchar1* nctemp158= p->forw;
int nctemp161=LibePuts(nctemp156,nctemp158);
int nctemp163= fp;
struct nctempchar1 *nctemp167;
static struct nctempchar1 nctemp168 = {{ 2}, (char*)" \0"};
nctemp167=&nctemp168;
nctempchar1* nctemp165= nctemp167;
int nctemp169=LibePuts(nctemp163,nctemp165);
int nctemp170 = (p->simple ==1);
if(nctemp170)
{
int nctemp175= fp;
struct nctempchar1 *nctemp179;
static struct nctempchar1 nctemp180 = {{ 7}, (char*)"simple\0"};
nctemp179=&nctemp180;
nctempchar1* nctemp177= nctemp179;
int nctemp181=LibePuts(nctemp175,nctemp177);
int nctemp183= fp;
struct nctempchar1 *nctemp187;
static struct nctempchar1 nctemp188 = {{ 2}, (char*)" \0"};
nctemp187=&nctemp188;
nctempchar1* nctemp185= nctemp187;
int nctemp189=LibePuts(nctemp183,nctemp185);
}
else{
int nctemp190 = (p->simple ==2);
if(nctemp190)
{
int nctemp195= fp;
struct nctempchar1 *nctemp199;
static struct nctempchar1 nctemp200 = {{ 6}, (char*)"empty\0"};
nctemp199=&nctemp200;
nctempchar1* nctemp197= nctemp199;
int nctemp201=LibePuts(nctemp195,nctemp197);
int nctemp203= fp;
struct nctempchar1 *nctemp207;
static struct nctempchar1 nctemp208 = {{ 2}, (char*)" \0"};
nctemp207=&nctemp208;
nctempchar1* nctemp205= nctemp207;
int nctemp209=LibePuts(nctemp203,nctemp205);
}
else{
int nctemp211= fp;
struct nctempchar1 *nctemp215;
static struct nctempchar1 nctemp216 = {{ 10}, (char*)"nonsimple\0"};
nctemp215=&nctemp216;
nctempchar1* nctemp213= nctemp215;
int nctemp217=LibePuts(nctemp211,nctemp213);
int nctemp219= fp;
struct nctempchar1 *nctemp223;
static struct nctempchar1 nctemp224 = {{ 2}, (char*)" \0"};
nctemp223=&nctemp224;
nctempchar1* nctemp221= nctemp223;
int nctemp225=LibePuts(nctemp219,nctemp221);
}
}
int nctemp226 = (p->topexpr ==1);
if(nctemp226)
{
int nctemp231= fp;
struct nctempchar1 *nctemp235;
static struct nctempchar1 nctemp236 = {{ 8}, (char*)"topexpr\0"};
nctemp235=&nctemp236;
nctempchar1* nctemp233= nctemp235;
int nctemp237=LibePuts(nctemp231,nctemp233);
int nctemp239= fp;
struct nctempchar1 *nctemp243;
static struct nctempchar1 nctemp244 = {{ 2}, (char*)" \0"};
nctemp243=&nctemp244;
nctempchar1* nctemp241= nctemp243;
int nctemp245=LibePuts(nctemp239,nctemp241);
}
else{
int nctemp246 = (p->topexpr ==0);
if(nctemp246)
{
int nctemp251= fp;
struct nctempchar1 *nctemp255;
static struct nctempchar1 nctemp256 = {{ 5}, (char*)"void\0"};
nctemp255=&nctemp256;
nctempchar1* nctemp253= nctemp255;
int nctemp257=LibePuts(nctemp251,nctemp253);
int nctemp259= fp;
struct nctempchar1 *nctemp263;
static struct nctempchar1 nctemp264 = {{ 2}, (char*)" \0"};
nctemp263=&nctemp264;
nctempchar1* nctemp261= nctemp263;
int nctemp265=LibePuts(nctemp259,nctemp261);
}
else{
int nctemp267= fp;
struct nctempchar1 *nctemp271;
static struct nctempchar1 nctemp272 = {{ 10}, (char*)"nonsimple\0"};
nctemp271=&nctemp272;
nctempchar1* nctemp269= nctemp271;
int nctemp273=LibePuts(nctemp267,nctemp269);
int nctemp275= fp;
struct nctempchar1 *nctemp279;
static struct nctempchar1 nctemp280 = {{ 2}, (char*)" \0"};
nctemp279=&nctemp280;
nctempchar1* nctemp277= nctemp279;
int nctemp281=LibePuts(nctemp275,nctemp277);
}
}
int nctemp283= fp;
int nctemp285= p->line;
int nctemp287=LibePuti(nctemp283,nctemp285);
int nctemp289= fp;
struct nctempchar1 *nctemp293;
static struct nctempchar1 nctemp294 = {{ 2}, (char*)" \0"};
nctemp293=&nctemp294;
nctempchar1* nctemp291= nctemp293;
int nctemp295=LibePuts(nctemp289,nctemp291);
int nctemp297= fp;
nctempchar1* nctemp299= p->tempr;
int nctemp302=LibePuts(nctemp297,nctemp299);
int nctemp304= fp;
struct nctempchar1 *nctemp308;
static struct nctempchar1 nctemp309 = {{ 2}, (char*)" \0"};
nctemp308=&nctemp309;
nctempchar1* nctemp306= nctemp308;
int nctemp310=LibePuts(nctemp304,nctemp306);
int nctemp312= fp;
nctempchar1* nctemp314= p->tempi;
int nctemp317=LibePuts(nctemp312,nctemp314);
int nctemp319= fp;
struct nctempchar1 *nctemp323;
static struct nctempchar1 nctemp324 = {{ 2}, (char*)" \0"};
nctemp323=&nctemp324;
nctempchar1* nctemp321= nctemp323;
int nctemp325=LibePuts(nctemp319,nctemp321);
int nctemp327= fp;
nctempchar1* nctemp329= p->lval;
int nctemp332=LibePuts(nctemp327,nctemp329);
int nctemp334= fp;
struct nctempchar1 *nctemp338;
static struct nctempchar1 nctemp339 = {{ 2}, (char*)" \0"};
nctemp338=&nctemp339;
nctempchar1* nctemp336= nctemp338;
int nctemp340=LibePuts(nctemp334,nctemp336);
int nctemp342= fp;
nctempchar1* nctemp344= p->ref;
int nctemp347=LibePuts(nctemp342,nctemp344);
int nctemp349= fp;
struct nctempchar1 *nctemp353;
static struct nctempchar1 nctemp354 = {{ 2}, (char*)" \0"};
nctemp353=&nctemp354;
nctempchar1* nctemp351= nctemp353;
int nctemp355=LibePuts(nctemp349,nctemp351);
int nctemp357= fp;
nctempchar1* nctemp359= p->descr;
int nctemp362=LibePuts(nctemp357,nctemp359);
int nctemp364= fp;
struct nctempchar1 *nctemp368;
static struct nctempchar1 nctemp369 = {{ 2}, (char*)" \0"};
nctemp368=&nctemp369;
nctempchar1* nctemp366= nctemp368;
int nctemp370=LibePuts(nctemp364,nctemp366);
int nctemp372= fp;
struct nctempchar1 *nctemp376;
static struct nctempchar1 nctemp377 = {{ 3}, (char*)"\n\0"};
nctemp376=&nctemp377;
nctempchar1* nctemp374= nctemp376;
int nctemp378=LibePuts(nctemp372,nctemp374);
int nctemp387 = level + 1;
level =nctemp387;
struct tree* nctemp389= p->child;
int nctemp391= level;
int nctemp393=PtreePrtree(nctemp389,nctemp391);
int nctemp402 = level - 1;
level =nctemp402;
struct tree* nctemp404= p->sister;
int nctemp406= level;
int nctemp408=PtreePrtree(nctemp404,nctemp406);
}
int nctemp410= fp;
int nctemp412=LibeFlush(nctemp410);
return 1;
}
int PtreeRmnode (struct tree* p)
{
int nctemp414 = (p ==0);
if(nctemp414)
{
return 1;
}
RunFree(p->name->a);
RunFree(p->name);
RunFree(p->defn->a);
RunFree(p->defn);
RunFree(p->type->a);
RunFree(p->type);
RunFree(p->structure->a);
RunFree(p->structure);
RunFree(p->tempr->a);
RunFree(p->tempr);
RunFree(p->tempi->a);
RunFree(p->tempi);
RunFree(p->lval->a);
RunFree(p->lval);
RunFree(p->array->a);
RunFree(p->array);
RunFree(p->ref->a);
RunFree(p->ref);
RunFree(p->descr->a);
RunFree(p->descr);
return 1;
}
int PtreeRmtree (struct tree* p)
{
int nctemp452 = (p !=0);
if(nctemp452)
{
struct tree* nctemp457= p->child;
int nctemp459=PtreeRmtree(nctemp457);
struct tree* nctemp461= p->sister;
int nctemp463=PtreeRmtree(nctemp461);
struct tree* nctemp465= p;
int nctemp467=PtreeRmnode(nctemp465);
}
return 1;
}
struct tree* PtreeMknode (nctempchar1 *name,nctempchar1 *defn)
{
struct tree* p;
struct tree *nctemp473=(struct tree*)RunMalloc(sizeof(struct tree));
p =nctemp473;
nctempchar1* nctemp480= defn;
nctempchar1* nctemp483=LibeStrsave(nctemp480);
p->defn=nctemp483;
nctempchar1* nctemp489= name;
nctempchar1* nctemp492=LibeStrsave(nctemp489);
p->name=nctemp492;
struct nctempchar1 *nctemp500;
static struct nctempchar1 nctemp501 = {{ 5}, (char*)"void\0"};
nctemp500=&nctemp501;
nctempchar1* nctemp498= nctemp500;
nctempchar1* nctemp502=LibeStrsave(nctemp498);
p->type=nctemp502;
struct nctempchar1 *nctemp510;
static struct nctempchar1 nctemp511 = {{ 5}, (char*)"void\0"};
nctemp510=&nctemp511;
nctempchar1* nctemp508= nctemp510;
nctempchar1* nctemp512=LibeStrsave(nctemp508);
p->structure=nctemp512;
p->line = 0;
struct nctempchar1 *nctemp520;
static struct nctempchar1 nctemp521 = {{ 5}, (char*)"void\0"};
nctemp520=&nctemp521;
nctempchar1* nctemp518= nctemp520;
nctempchar1* nctemp522=LibeStrsave(nctemp518);
p->file=nctemp522;
struct nctempchar1 *nctemp530;
static struct nctempchar1 nctemp531 = {{ 5}, (char*)"void\0"};
nctemp530=&nctemp531;
nctempchar1* nctemp528= nctemp530;
nctempchar1* nctemp532=LibeStrsave(nctemp528);
p->tempr=nctemp532;
struct nctempchar1 *nctemp540;
static struct nctempchar1 nctemp541 = {{ 5}, (char*)"void\0"};
nctemp540=&nctemp541;
nctempchar1* nctemp538= nctemp540;
nctempchar1* nctemp542=LibeStrsave(nctemp538);
p->tempi=nctemp542;
struct nctempchar1 *nctemp550;
static struct nctempchar1 nctemp551 = {{ 5}, (char*)"void\0"};
nctemp550=&nctemp551;
nctempchar1* nctemp548= nctemp550;
nctempchar1* nctemp552=LibeStrsave(nctemp548);
p->lval=nctemp552;
struct nctempchar1 *nctemp560;
static struct nctempchar1 nctemp561 = {{ 5}, (char*)"void\0"};
nctemp560=&nctemp561;
nctempchar1* nctemp558= nctemp560;
nctempchar1* nctemp562=LibeStrsave(nctemp558);
p->array=nctemp562;
struct nctempchar1 *nctemp570;
static struct nctempchar1 nctemp571 = {{ 5}, (char*)"void\0"};
nctemp570=&nctemp571;
nctempchar1* nctemp568= nctemp570;
nctempchar1* nctemp572=LibeStrsave(nctemp568);
p->paral=nctemp572;
struct nctempchar1 *nctemp580;
static struct nctempchar1 nctemp581 = {{ 5}, (char*)"void\0"};
nctemp580=&nctemp581;
nctempchar1* nctemp578= nctemp580;
nctempchar1* nctemp582=LibeStrsave(nctemp578);
p->ref=nctemp582;
struct nctempchar1 *nctemp590;
static struct nctempchar1 nctemp591 = {{ 5}, (char*)"void\0"};
nctemp590=&nctemp591;
nctempchar1* nctemp588= nctemp590;
nctempchar1* nctemp592=LibeStrsave(nctemp588);
p->descr=nctemp592;
struct nctempchar1 *nctemp600;
static struct nctempchar1 nctemp601 = {{ 5}, (char*)"void\0"};
nctemp600=&nctemp601;
nctempchar1* nctemp598= nctemp600;
nctempchar1* nctemp602=LibeStrsave(nctemp598);
p->global=nctemp602;
struct nctempchar1 *nctemp610;
static struct nctempchar1 nctemp611 = {{ 5}, (char*)"void\0"};
nctemp610=&nctemp611;
nctempchar1* nctemp608= nctemp610;
nctempchar1* nctemp612=LibeStrsave(nctemp608);
p->forw=nctemp612;
p->rank = 0;
p->simple = 2;
p->child = 0;
p->sister = 0;
return p;
}
int PtreeAddchild (struct tree* parent,struct tree* child)
{
struct tree* p;
struct tree* prev;
p =parent->child;
int nctemp614 = (p ==0);
if(nctemp614)
{
parent->child =child;
return 1;
}
prev = parent->child;
p =p->sister;
int nctemp627 = (p !=0);
int nctemp635=nctemp627;
while(nctemp635)
{{
prev =p;
}
p =p->sister;
int nctemp640 = (p !=0);
nctemp635=nctemp640;}prev->sister = child;
return 1;
}
int PtreeAddsister (struct tree* sister,struct tree* newnode)
{
struct tree* p;
struct tree* prev;
p = sister;
prev = p;
p =p->sister;
int nctemp649 = (p !=0);
int nctemp657=nctemp649;
while(nctemp657)
{{
prev =p;
}
p =p->sister;
int nctemp662 = (p !=0);
nctemp657=nctemp662;}prev->sister = newnode;
return 1;
}
struct tree* PtreeMvsister (struct tree* p)
{
return p->sister;
}
struct tree* PtreeMvchild (struct tree* p)
{
return p->child;
}
nctempchar1 * PtreeSetfield (nctempchar1 *field,nctempchar1 *value)
{
nctempchar1 *t;
t = field;
nctempchar1* nctemp678= value;
nctempchar1* nctemp681=LibeStrsave(nctemp678);
field=nctemp681;
RunFree(t->a);
RunFree(t);
return field;
}
int PtreeSetname (struct tree* p,nctempchar1 *name)
{
nctempchar1 *nctemp691 =name;
int nctemp690 =(nctemp691!=0);
int nctemp696 = (p !=0);
int nctemp687 = (nctemp690 && nctemp696);
if(nctemp687)
{
RunFree(p->name->a);
RunFree(p->name);
nctempchar1* nctemp708= name;
nctempchar1* nctemp711=LibeStrsave(nctemp708);
p->name=nctemp711;
}
return 1;
}
nctempchar1 * PtreeGetname (struct tree* p)
{
return p->name;
}
int PtreeSetdef (struct tree* p,nctempchar1 *defn)
{
nctempchar1 *nctemp719 =defn;
int nctemp718 =(nctemp719!=0);
int nctemp724 = (p !=0);
int nctemp715 = (nctemp718 && nctemp724);
if(nctemp715)
{
RunFree(p->defn->a);
RunFree(p->defn);
nctempchar1* nctemp736= defn;
nctempchar1* nctemp739=LibeStrsave(nctemp736);
p->defn=nctemp739;
}
return 1;
}
nctempchar1 * PtreeGetdef (struct tree* p)
{
return p->defn;
}
int PtreeSetype (struct tree* p,nctempchar1 *type)
{
nctempchar1 *nctemp747 =type;
int nctemp746 =(nctemp747!=0);
int nctemp752 = (p !=0);
int nctemp743 = (nctemp746 && nctemp752);
if(nctemp743)
{
RunFree(p->type->a);
RunFree(p->type);
nctempchar1* nctemp764= type;
nctempchar1* nctemp767=LibeStrsave(nctemp764);
p->type=nctemp767;
}
return 1;
}
nctempchar1 * PtreeGetype (struct tree* p)
{
return p->type;
}
int PtreeSetstruct (struct tree* p,nctempchar1 *structure)
{
nctempchar1 *nctemp775 =structure;
int nctemp774 =(nctemp775!=0);
int nctemp780 = (p !=0);
int nctemp771 = (nctemp774 && nctemp780);
if(nctemp771)
{
RunFree(p->structure->a);
RunFree(p->structure);
nctempchar1* nctemp792= structure;
nctempchar1* nctemp795=LibeStrsave(nctemp792);
p->structure=nctemp795;
}
return 1;
}
nctempchar1 * PtreeGetstruct (struct tree* p)
{
return p->structure;
}
int PtreeSetempr (struct tree* p,nctempchar1 *tempr)
{
nctempchar1 *nctemp803 =tempr;
int nctemp802 =(nctemp803!=0);
int nctemp808 = (p !=0);
int nctemp799 = (nctemp802 && nctemp808);
if(nctemp799)
{
RunFree(p->tempr->a);
RunFree(p->tempr);
nctempchar1* nctemp820= tempr;
nctempchar1* nctemp823=LibeStrsave(nctemp820);
p->tempr=nctemp823;
}
return 1;
}
nctempchar1 * PtreeGetempr (struct tree* p)
{
return p->tempr;
}
int PtreeSetempi (struct tree* p,nctempchar1 *tempi)
{
nctempchar1 *nctemp831 =tempi;
int nctemp830 =(nctemp831!=0);
int nctemp836 = (p !=0);
int nctemp827 = (nctemp830 && nctemp836);
if(nctemp827)
{
RunFree(p->tempi->a);
RunFree(p->tempi);
nctempchar1* nctemp848= tempi;
nctempchar1* nctemp851=LibeStrsave(nctemp848);
p->tempi=nctemp851;
}
return 1;
}
nctempchar1 * PtreeGetempi (struct tree* p)
{
return p->tempi;
}
int PtreeGetline (struct tree* p)
{
return p->line;
}
int PtreeSetline (struct tree* p,int line)
{
p->line = line;
return 1;
}
nctempchar1 * PtreeGetfile (struct tree* p)
{
return p->file;
}
int PtreeSetfile (struct tree* p,nctempchar1 *file)
{
nctempchar1 *nctemp863 =file;
int nctemp862 =(nctemp863!=0);
int nctemp868 = (p !=0);
int nctemp859 = (nctemp862 && nctemp868);
if(nctemp859)
{
RunFree(p->file->a);
RunFree(p->file);
nctempchar1* nctemp880= file;
nctempchar1* nctemp883=LibeStrsave(nctemp880);
p->file=nctemp883;
}
return 1;
}
int PtreeSetrank (struct tree* p,int rank)
{
p->rank = rank;
return 1;
}
int PtreeGetrank (struct tree* p)
{
return p->rank;
}
int PtreeSetlval (struct tree* p,nctempchar1 *lval)
{
nctempchar1 *nctemp891 =lval;
int nctemp890 =(nctemp891!=0);
int nctemp896 = (p !=0);
int nctemp887 = (nctemp890 && nctemp896);
if(nctemp887)
{
RunFree(p->lval->a);
RunFree(p->lval);
nctempchar1* nctemp908= lval;
nctempchar1* nctemp911=LibeStrsave(nctemp908);
p->lval=nctemp911;
}
return 1;
}
nctempchar1 * PtreeGetlval (struct tree* p)
{
return p->lval;
}
int PtreeSetarray (struct tree* p,nctempchar1 *array)
{
nctempchar1 *nctemp919 =array;
int nctemp918 =(nctemp919!=0);
int nctemp924 = (p !=0);
int nctemp915 = (nctemp918 && nctemp924);
if(nctemp915)
{
RunFree(p->array->a);
RunFree(p->array);
nctempchar1* nctemp936= array;
nctempchar1* nctemp939=LibeStrsave(nctemp936);
p->array=nctemp939;
}
return 1;
}
nctempchar1 * PtreeGetarray (struct tree* p)
{
return p->array;
}
int PtreeSetparallel (struct tree* p,nctempchar1 *paral)
{
nctempchar1 *nctemp947 =paral;
int nctemp946 =(nctemp947!=0);
int nctemp952 = (p !=0);
int nctemp943 = (nctemp946 && nctemp952);
if(nctemp943)
{
RunFree(p->paral->a);
RunFree(p->paral);
nctempchar1* nctemp964= paral;
nctempchar1* nctemp967=LibeStrsave(nctemp964);
p->paral=nctemp967;
}
return 1;
}
nctempchar1 * PtreeGetparallel (struct tree* p)
{
return p->paral;
}
int PtreeSetref (struct tree* p,nctempchar1 *ref)
{
nctempchar1 *nctemp975 =ref;
int nctemp974 =(nctemp975!=0);
int nctemp980 = (p !=0);
int nctemp971 = (nctemp974 && nctemp980);
if(nctemp971)
{
RunFree(p->ref->a);
RunFree(p->ref);
nctempchar1* nctemp992= ref;
nctempchar1* nctemp995=LibeStrsave(nctemp992);
p->ref=nctemp995;
}
return 1;
}
nctempchar1 * PtreeGetref (struct tree* p)
{
return p->ref;
}
int PtreeSetdescr (struct tree* p,nctempchar1 *descr)
{
nctempchar1 *nctemp1003 =descr;
int nctemp1002 =(nctemp1003!=0);
int nctemp1008 = (p !=0);
int nctemp999 = (nctemp1002 && nctemp1008);
if(nctemp999)
{
RunFree(p->descr->a);
RunFree(p->descr);
nctempchar1* nctemp1020= descr;
nctempchar1* nctemp1023=LibeStrsave(nctemp1020);
p->descr=nctemp1023;
}
return 1;
}
nctempchar1 * PtreeGetdescr (struct tree* p)
{
return p->descr;
}
int PtreeSetglobal (struct tree* p,nctempchar1 *global)
{
nctempchar1 *nctemp1031 =global;
int nctemp1030 =(nctemp1031!=0);
int nctemp1036 = (p !=0);
int nctemp1027 = (nctemp1030 && nctemp1036);
if(nctemp1027)
{
RunFree(p->global->a);
RunFree(p->global);
nctempchar1* nctemp1048= global;
nctempchar1* nctemp1051=LibeStrsave(nctemp1048);
p->global=nctemp1051;
}
return 1;
}
nctempchar1 * PtreeGetglobal (struct tree* p)
{
return p->global;
}
int PtreeSetopexpr (struct tree* p,int topexpr)
{
p->topexpr = 1;
return 1;
}
int PtreeGetopexpr (struct tree* p)
{
return p->topexpr;
}
int PtreeSetsimple (struct tree* p,int simple)
{
p->simple = simple;
return 1;
}
int PtreeGetsimple (struct tree* p)
{
return p->simple;
}
int PtreeSetforw (struct tree* p,nctempchar1 *forw)
{
nctempchar1 *nctemp1063 =forw;
int nctemp1062 =(nctemp1063!=0);
int nctemp1068 = (p !=0);
int nctemp1059 = (nctemp1062 && nctemp1068);
if(nctemp1059)
{
RunFree(p->forw->a);
RunFree(p->forw);
nctempchar1* nctemp1080= forw;
nctempchar1* nctemp1083=LibeStrsave(nctemp1080);
p->forw=nctemp1083;
}
return 1;
}
nctempchar1 * PtreeGetforw (struct tree* p)
{
return p->forw;
}
}
