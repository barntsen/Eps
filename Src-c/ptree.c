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
i = 0;
int nctemp6 = (i < level);
int nctemp10=nctemp6;
while(nctemp10)
{{
int nctemp12= fp;
struct nctempchar1 *nctemp16;
static struct nctempchar1 nctemp17 = {{ 2}, (char*)" \0"};
nctemp16=&nctemp17;
nctempchar1* nctemp14= nctemp16;
int nctemp18=LibePuts(nctemp12,nctemp14);
i = (i + 1);
}
int nctemp19 = (i < level);
nctemp10=nctemp19;}int nctemp24= fp;
nctempchar1* nctemp26= p->name;
int nctemp29=LibePuts(nctemp24,nctemp26);
int nctemp31= fp;
struct nctempchar1 *nctemp35;
static struct nctempchar1 nctemp36 = {{ 2}, (char*)" \0"};
nctemp35=&nctemp36;
nctempchar1* nctemp33= nctemp35;
int nctemp37=LibePuts(nctemp31,nctemp33);
int nctemp39= fp;
nctempchar1* nctemp41= p->defn;
int nctemp44=LibePuts(nctemp39,nctemp41);
int nctemp46= fp;
struct nctempchar1 *nctemp50;
static struct nctempchar1 nctemp51 = {{ 2}, (char*)" \0"};
nctemp50=&nctemp51;
nctempchar1* nctemp48= nctemp50;
int nctemp52=LibePuts(nctemp46,nctemp48);
int nctemp54= fp;
nctempchar1* nctemp56= p->type;
int nctemp59=LibePuts(nctemp54,nctemp56);
int nctemp61= fp;
struct nctempchar1 *nctemp65;
static struct nctempchar1 nctemp66 = {{ 2}, (char*)" \0"};
nctemp65=&nctemp66;
nctempchar1* nctemp63= nctemp65;
int nctemp67=LibePuts(nctemp61,nctemp63);
int nctemp69= fp;
nctempchar1* nctemp71= p->structure;
int nctemp74=LibePuts(nctemp69,nctemp71);
int nctemp76= fp;
struct nctempchar1 *nctemp80;
static struct nctempchar1 nctemp81 = {{ 2}, (char*)" \0"};
nctemp80=&nctemp81;
nctempchar1* nctemp78= nctemp80;
int nctemp82=LibePuts(nctemp76,nctemp78);
int nctemp84= fp;
nctempchar1* nctemp86= p->array;
int nctemp89=LibePuts(nctemp84,nctemp86);
int nctemp91= fp;
struct nctempchar1 *nctemp95;
static struct nctempchar1 nctemp96 = {{ 2}, (char*)" \0"};
nctemp95=&nctemp96;
nctempchar1* nctemp93= nctemp95;
int nctemp97=LibePuts(nctemp91,nctemp93);
int nctemp99= fp;
nctempchar1* nctemp101= p->paral;
int nctemp104=LibePuts(nctemp99,nctemp101);
int nctemp106= fp;
struct nctempchar1 *nctemp110;
static struct nctempchar1 nctemp111 = {{ 2}, (char*)" \0"};
nctemp110=&nctemp111;
nctempchar1* nctemp108= nctemp110;
int nctemp112=LibePuts(nctemp106,nctemp108);
int nctemp114= fp;
nctempchar1* nctemp116= p->global;
int nctemp119=LibePuts(nctemp114,nctemp116);
int nctemp121= fp;
struct nctempchar1 *nctemp125;
static struct nctempchar1 nctemp126 = {{ 2}, (char*)" \0"};
nctemp125=&nctemp126;
nctempchar1* nctemp123= nctemp125;
int nctemp127=LibePuts(nctemp121,nctemp123);
int nctemp129= fp;
int nctemp131= p->rank;
int nctemp133=LibePuti(nctemp129,nctemp131);
int nctemp135= fp;
struct nctempchar1 *nctemp139;
static struct nctempchar1 nctemp140 = {{ 2}, (char*)" \0"};
nctemp139=&nctemp140;
nctempchar1* nctemp137= nctemp139;
int nctemp141=LibePuts(nctemp135,nctemp137);
int nctemp143= fp;
nctempchar1* nctemp145= p->forw;
int nctemp148=LibePuts(nctemp143,nctemp145);
int nctemp150= fp;
struct nctempchar1 *nctemp154;
static struct nctempchar1 nctemp155 = {{ 2}, (char*)" \0"};
nctemp154=&nctemp155;
nctempchar1* nctemp152= nctemp154;
int nctemp156=LibePuts(nctemp150,nctemp152);
int nctemp157 = (p->simple ==1);
if(nctemp157)
{
int nctemp162= fp;
struct nctempchar1 *nctemp166;
static struct nctempchar1 nctemp167 = {{ 7}, (char*)"simple\0"};
nctemp166=&nctemp167;
nctempchar1* nctemp164= nctemp166;
int nctemp168=LibePuts(nctemp162,nctemp164);
int nctemp170= fp;
struct nctempchar1 *nctemp174;
static struct nctempchar1 nctemp175 = {{ 2}, (char*)" \0"};
nctemp174=&nctemp175;
nctempchar1* nctemp172= nctemp174;
int nctemp176=LibePuts(nctemp170,nctemp172);
}
else{
int nctemp177 = (p->simple ==2);
if(nctemp177)
{
int nctemp182= fp;
struct nctempchar1 *nctemp186;
static struct nctempchar1 nctemp187 = {{ 6}, (char*)"empty\0"};
nctemp186=&nctemp187;
nctempchar1* nctemp184= nctemp186;
int nctemp188=LibePuts(nctemp182,nctemp184);
int nctemp190= fp;
struct nctempchar1 *nctemp194;
static struct nctempchar1 nctemp195 = {{ 2}, (char*)" \0"};
nctemp194=&nctemp195;
nctempchar1* nctemp192= nctemp194;
int nctemp196=LibePuts(nctemp190,nctemp192);
}
else{
int nctemp198= fp;
struct nctempchar1 *nctemp202;
static struct nctempchar1 nctemp203 = {{ 10}, (char*)"nonsimple\0"};
nctemp202=&nctemp203;
nctempchar1* nctemp200= nctemp202;
int nctemp204=LibePuts(nctemp198,nctemp200);
int nctemp206= fp;
struct nctempchar1 *nctemp210;
static struct nctempchar1 nctemp211 = {{ 2}, (char*)" \0"};
nctemp210=&nctemp211;
nctempchar1* nctemp208= nctemp210;
int nctemp212=LibePuts(nctemp206,nctemp208);
}
}
int nctemp213 = (p->topexpr ==1);
if(nctemp213)
{
int nctemp218= fp;
struct nctempchar1 *nctemp222;
static struct nctempchar1 nctemp223 = {{ 8}, (char*)"topexpr\0"};
nctemp222=&nctemp223;
nctempchar1* nctemp220= nctemp222;
int nctemp224=LibePuts(nctemp218,nctemp220);
int nctemp226= fp;
struct nctempchar1 *nctemp230;
static struct nctempchar1 nctemp231 = {{ 2}, (char*)" \0"};
nctemp230=&nctemp231;
nctempchar1* nctemp228= nctemp230;
int nctemp232=LibePuts(nctemp226,nctemp228);
}
else{
int nctemp233 = (p->topexpr ==0);
if(nctemp233)
{
int nctemp238= fp;
struct nctempchar1 *nctemp242;
static struct nctempchar1 nctemp243 = {{ 5}, (char*)"void\0"};
nctemp242=&nctemp243;
nctempchar1* nctemp240= nctemp242;
int nctemp244=LibePuts(nctemp238,nctemp240);
int nctemp246= fp;
struct nctempchar1 *nctemp250;
static struct nctempchar1 nctemp251 = {{ 2}, (char*)" \0"};
nctemp250=&nctemp251;
nctempchar1* nctemp248= nctemp250;
int nctemp252=LibePuts(nctemp246,nctemp248);
}
else{
int nctemp254= fp;
struct nctempchar1 *nctemp258;
static struct nctempchar1 nctemp259 = {{ 10}, (char*)"nonsimple\0"};
nctemp258=&nctemp259;
nctempchar1* nctemp256= nctemp258;
int nctemp260=LibePuts(nctemp254,nctemp256);
int nctemp262= fp;
struct nctempchar1 *nctemp266;
static struct nctempchar1 nctemp267 = {{ 2}, (char*)" \0"};
nctemp266=&nctemp267;
nctempchar1* nctemp264= nctemp266;
int nctemp268=LibePuts(nctemp262,nctemp264);
}
}
int nctemp270= fp;
int nctemp272= p->line;
int nctemp274=LibePuti(nctemp270,nctemp272);
int nctemp276= fp;
struct nctempchar1 *nctemp280;
static struct nctempchar1 nctemp281 = {{ 2}, (char*)" \0"};
nctemp280=&nctemp281;
nctempchar1* nctemp278= nctemp280;
int nctemp282=LibePuts(nctemp276,nctemp278);
int nctemp284= fp;
nctempchar1* nctemp286= p->tempr;
int nctemp289=LibePuts(nctemp284,nctemp286);
int nctemp291= fp;
struct nctempchar1 *nctemp295;
static struct nctempchar1 nctemp296 = {{ 2}, (char*)" \0"};
nctemp295=&nctemp296;
nctempchar1* nctemp293= nctemp295;
int nctemp297=LibePuts(nctemp291,nctemp293);
int nctemp299= fp;
nctempchar1* nctemp301= p->tempi;
int nctemp304=LibePuts(nctemp299,nctemp301);
int nctemp306= fp;
struct nctempchar1 *nctemp310;
static struct nctempchar1 nctemp311 = {{ 2}, (char*)" \0"};
nctemp310=&nctemp311;
nctempchar1* nctemp308= nctemp310;
int nctemp312=LibePuts(nctemp306,nctemp308);
int nctemp314= fp;
nctempchar1* nctemp316= p->lval;
int nctemp319=LibePuts(nctemp314,nctemp316);
int nctemp321= fp;
struct nctempchar1 *nctemp325;
static struct nctempchar1 nctemp326 = {{ 2}, (char*)" \0"};
nctemp325=&nctemp326;
nctempchar1* nctemp323= nctemp325;
int nctemp327=LibePuts(nctemp321,nctemp323);
int nctemp329= fp;
nctempchar1* nctemp331= p->ref;
int nctemp334=LibePuts(nctemp329,nctemp331);
int nctemp336= fp;
struct nctempchar1 *nctemp340;
static struct nctempchar1 nctemp341 = {{ 2}, (char*)" \0"};
nctemp340=&nctemp341;
nctempchar1* nctemp338= nctemp340;
int nctemp342=LibePuts(nctemp336,nctemp338);
int nctemp344= fp;
nctempchar1* nctemp346= p->descr;
int nctemp349=LibePuts(nctemp344,nctemp346);
int nctemp351= fp;
struct nctempchar1 *nctemp355;
static struct nctempchar1 nctemp356 = {{ 2}, (char*)" \0"};
nctemp355=&nctemp356;
nctempchar1* nctemp353= nctemp355;
int nctemp357=LibePuts(nctemp351,nctemp353);
int nctemp359= fp;
struct nctempchar1 *nctemp363;
static struct nctempchar1 nctemp364 = {{ 3}, (char*)"\n\0"};
nctemp363=&nctemp364;
nctempchar1* nctemp361= nctemp363;
int nctemp365=LibePuts(nctemp359,nctemp361);
level = (level + 1);
struct tree* nctemp367= p->child;
int nctemp369= level;
int nctemp371=PtreePrtree(nctemp367,nctemp369);
level = (level - 1);
struct tree* nctemp373= p->sister;
int nctemp375= level;
int nctemp377=PtreePrtree(nctemp373,nctemp375);
}
int nctemp379= fp;
int nctemp381=LibeFlush(nctemp379);
return 1;
}
int PtreeRmnode (struct tree* p)
{
int nctemp383 = (p ==0);
if(nctemp383)
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
int nctemp421 = (p !=0);
if(nctemp421)
{
struct tree* nctemp426= p->child;
int nctemp428=PtreeRmtree(nctemp426);
struct tree* nctemp430= p->sister;
int nctemp432=PtreeRmtree(nctemp430);
struct tree* nctemp434= p;
int nctemp436=PtreeRmnode(nctemp434);
}
return 1;
}
struct tree* PtreeMknode (nctempchar1 *name,nctempchar1 *defn)
{
struct tree* p;
struct tree *nctemp442=(struct tree*)RunMalloc(sizeof(struct tree));
p =nctemp442;
nctempchar1* nctemp449= defn;
nctempchar1* nctemp452=LibeStrsave(nctemp449);
p->defn=nctemp452;
nctempchar1* nctemp458= name;
nctempchar1* nctemp461=LibeStrsave(nctemp458);
p->name=nctemp461;
struct nctempchar1 *nctemp469;
static struct nctempchar1 nctemp470 = {{ 5}, (char*)"void\0"};
nctemp469=&nctemp470;
nctempchar1* nctemp467= nctemp469;
nctempchar1* nctemp471=LibeStrsave(nctemp467);
p->type=nctemp471;
struct nctempchar1 *nctemp479;
static struct nctempchar1 nctemp480 = {{ 5}, (char*)"void\0"};
nctemp479=&nctemp480;
nctempchar1* nctemp477= nctemp479;
nctempchar1* nctemp481=LibeStrsave(nctemp477);
p->structure=nctemp481;
p->line = 0;
struct nctempchar1 *nctemp489;
static struct nctempchar1 nctemp490 = {{ 5}, (char*)"void\0"};
nctemp489=&nctemp490;
nctempchar1* nctemp487= nctemp489;
nctempchar1* nctemp491=LibeStrsave(nctemp487);
p->file=nctemp491;
struct nctempchar1 *nctemp499;
static struct nctempchar1 nctemp500 = {{ 5}, (char*)"void\0"};
nctemp499=&nctemp500;
nctempchar1* nctemp497= nctemp499;
nctempchar1* nctemp501=LibeStrsave(nctemp497);
p->tempr=nctemp501;
struct nctempchar1 *nctemp509;
static struct nctempchar1 nctemp510 = {{ 5}, (char*)"void\0"};
nctemp509=&nctemp510;
nctempchar1* nctemp507= nctemp509;
nctempchar1* nctemp511=LibeStrsave(nctemp507);
p->tempi=nctemp511;
struct nctempchar1 *nctemp519;
static struct nctempchar1 nctemp520 = {{ 5}, (char*)"void\0"};
nctemp519=&nctemp520;
nctempchar1* nctemp517= nctemp519;
nctempchar1* nctemp521=LibeStrsave(nctemp517);
p->lval=nctemp521;
struct nctempchar1 *nctemp529;
static struct nctempchar1 nctemp530 = {{ 5}, (char*)"void\0"};
nctemp529=&nctemp530;
nctempchar1* nctemp527= nctemp529;
nctempchar1* nctemp531=LibeStrsave(nctemp527);
p->array=nctemp531;
struct nctempchar1 *nctemp539;
static struct nctempchar1 nctemp540 = {{ 5}, (char*)"void\0"};
nctemp539=&nctemp540;
nctempchar1* nctemp537= nctemp539;
nctempchar1* nctemp541=LibeStrsave(nctemp537);
p->paral=nctemp541;
struct nctempchar1 *nctemp549;
static struct nctempchar1 nctemp550 = {{ 5}, (char*)"void\0"};
nctemp549=&nctemp550;
nctempchar1* nctemp547= nctemp549;
nctempchar1* nctemp551=LibeStrsave(nctemp547);
p->ref=nctemp551;
struct nctempchar1 *nctemp559;
static struct nctempchar1 nctemp560 = {{ 5}, (char*)"void\0"};
nctemp559=&nctemp560;
nctempchar1* nctemp557= nctemp559;
nctempchar1* nctemp561=LibeStrsave(nctemp557);
p->descr=nctemp561;
struct nctempchar1 *nctemp569;
static struct nctempchar1 nctemp570 = {{ 5}, (char*)"void\0"};
nctemp569=&nctemp570;
nctempchar1* nctemp567= nctemp569;
nctempchar1* nctemp571=LibeStrsave(nctemp567);
p->global=nctemp571;
struct nctempchar1 *nctemp579;
static struct nctempchar1 nctemp580 = {{ 5}, (char*)"void\0"};
nctemp579=&nctemp580;
nctempchar1* nctemp577= nctemp579;
nctempchar1* nctemp581=LibeStrsave(nctemp577);
p->forw=nctemp581;
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
int nctemp583 = (p ==0);
if(nctemp583)
{
parent->child = child;
return 1;
}
prev = parent->child;
p =p->sister;
int nctemp592 = (p !=0);
int nctemp600=nctemp592;
while(nctemp600)
{{
prev = p;
}
p =p->sister;
int nctemp601 = (p !=0);
nctemp600=nctemp601;}prev->sister = child;
return 1;
}
int PtreeAddsister (struct tree* sister,struct tree* newnode)
{
struct tree* p;
struct tree* prev;
p = sister;
prev = p;
p =p->sister;
int nctemp610 = (p !=0);
int nctemp618=nctemp610;
while(nctemp618)
{{
prev = p;
}
p =p->sister;
int nctemp619 = (p !=0);
nctemp618=nctemp619;}prev->sister = newnode;
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
nctempchar1* nctemp635= value;
nctempchar1* nctemp638=LibeStrsave(nctemp635);
field=nctemp638;
RunFree(t->a);
RunFree(t);
return field;
}
int PtreeSetname (struct tree* p,nctempchar1 *name)
{
nctempchar1 *nctemp648 =name;
int nctemp647 =(nctemp648!=0);
int nctemp653 = (p !=0);
int nctemp644 = (nctemp647 && nctemp653);
if(nctemp644)
{
RunFree(p->name->a);
RunFree(p->name);
nctempchar1* nctemp665= name;
nctempchar1* nctemp668=LibeStrsave(nctemp665);
p->name=nctemp668;
}
return 1;
}
nctempchar1 * PtreeGetname (struct tree* p)
{
return p->name;
}
int PtreeSetdef (struct tree* p,nctempchar1 *defn)
{
nctempchar1 *nctemp676 =defn;
int nctemp675 =(nctemp676!=0);
int nctemp681 = (p !=0);
int nctemp672 = (nctemp675 && nctemp681);
if(nctemp672)
{
RunFree(p->defn->a);
RunFree(p->defn);
nctempchar1* nctemp693= defn;
nctempchar1* nctemp696=LibeStrsave(nctemp693);
p->defn=nctemp696;
}
return 1;
}
nctempchar1 * PtreeGetdef (struct tree* p)
{
return p->defn;
}
int PtreeSetype (struct tree* p,nctempchar1 *type)
{
nctempchar1 *nctemp704 =type;
int nctemp703 =(nctemp704!=0);
int nctemp709 = (p !=0);
int nctemp700 = (nctemp703 && nctemp709);
if(nctemp700)
{
RunFree(p->type->a);
RunFree(p->type);
nctempchar1* nctemp721= type;
nctempchar1* nctemp724=LibeStrsave(nctemp721);
p->type=nctemp724;
}
return 1;
}
nctempchar1 * PtreeGetype (struct tree* p)
{
return p->type;
}
int PtreeSetstruct (struct tree* p,nctempchar1 *structure)
{
nctempchar1 *nctemp732 =structure;
int nctemp731 =(nctemp732!=0);
int nctemp737 = (p !=0);
int nctemp728 = (nctemp731 && nctemp737);
if(nctemp728)
{
RunFree(p->structure->a);
RunFree(p->structure);
nctempchar1* nctemp749= structure;
nctempchar1* nctemp752=LibeStrsave(nctemp749);
p->structure=nctemp752;
}
return 1;
}
nctempchar1 * PtreeGetstruct (struct tree* p)
{
return p->structure;
}
int PtreeSetempr (struct tree* p,nctempchar1 *tempr)
{
nctempchar1 *nctemp760 =tempr;
int nctemp759 =(nctemp760!=0);
int nctemp765 = (p !=0);
int nctemp756 = (nctemp759 && nctemp765);
if(nctemp756)
{
RunFree(p->tempr->a);
RunFree(p->tempr);
nctempchar1* nctemp777= tempr;
nctempchar1* nctemp780=LibeStrsave(nctemp777);
p->tempr=nctemp780;
}
return 1;
}
nctempchar1 * PtreeGetempr (struct tree* p)
{
return p->tempr;
}
int PtreeSetempi (struct tree* p,nctempchar1 *tempi)
{
nctempchar1 *nctemp788 =tempi;
int nctemp787 =(nctemp788!=0);
int nctemp793 = (p !=0);
int nctemp784 = (nctemp787 && nctemp793);
if(nctemp784)
{
RunFree(p->tempi->a);
RunFree(p->tempi);
nctempchar1* nctemp805= tempi;
nctempchar1* nctemp808=LibeStrsave(nctemp805);
p->tempi=nctemp808;
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
nctempchar1 *nctemp820 =file;
int nctemp819 =(nctemp820!=0);
int nctemp825 = (p !=0);
int nctemp816 = (nctemp819 && nctemp825);
if(nctemp816)
{
RunFree(p->file->a);
RunFree(p->file);
nctempchar1* nctemp837= file;
nctempchar1* nctemp840=LibeStrsave(nctemp837);
p->file=nctemp840;
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
nctempchar1 *nctemp848 =lval;
int nctemp847 =(nctemp848!=0);
int nctemp853 = (p !=0);
int nctemp844 = (nctemp847 && nctemp853);
if(nctemp844)
{
RunFree(p->lval->a);
RunFree(p->lval);
nctempchar1* nctemp865= lval;
nctempchar1* nctemp868=LibeStrsave(nctemp865);
p->lval=nctemp868;
}
return 1;
}
nctempchar1 * PtreeGetlval (struct tree* p)
{
return p->lval;
}
int PtreeSetarray (struct tree* p,nctempchar1 *array)
{
nctempchar1 *nctemp876 =array;
int nctemp875 =(nctemp876!=0);
int nctemp881 = (p !=0);
int nctemp872 = (nctemp875 && nctemp881);
if(nctemp872)
{
RunFree(p->array->a);
RunFree(p->array);
nctempchar1* nctemp893= array;
nctempchar1* nctemp896=LibeStrsave(nctemp893);
p->array=nctemp896;
}
return 1;
}
nctempchar1 * PtreeGetarray (struct tree* p)
{
return p->array;
}
int PtreeSetparallel (struct tree* p,nctempchar1 *paral)
{
nctempchar1 *nctemp904 =paral;
int nctemp903 =(nctemp904!=0);
int nctemp909 = (p !=0);
int nctemp900 = (nctemp903 && nctemp909);
if(nctemp900)
{
RunFree(p->paral->a);
RunFree(p->paral);
nctempchar1* nctemp921= paral;
nctempchar1* nctemp924=LibeStrsave(nctemp921);
p->paral=nctemp924;
}
return 1;
}
nctempchar1 * PtreeGetparallel (struct tree* p)
{
return p->paral;
}
int PtreeSetref (struct tree* p,nctempchar1 *ref)
{
nctempchar1 *nctemp932 =ref;
int nctemp931 =(nctemp932!=0);
int nctemp937 = (p !=0);
int nctemp928 = (nctemp931 && nctemp937);
if(nctemp928)
{
RunFree(p->ref->a);
RunFree(p->ref);
nctempchar1* nctemp949= ref;
nctempchar1* nctemp952=LibeStrsave(nctemp949);
p->ref=nctemp952;
}
return 1;
}
nctempchar1 * PtreeGetref (struct tree* p)
{
return p->ref;
}
int PtreeSetdescr (struct tree* p,nctempchar1 *descr)
{
nctempchar1 *nctemp960 =descr;
int nctemp959 =(nctemp960!=0);
int nctemp965 = (p !=0);
int nctemp956 = (nctemp959 && nctemp965);
if(nctemp956)
{
RunFree(p->descr->a);
RunFree(p->descr);
nctempchar1* nctemp977= descr;
nctempchar1* nctemp980=LibeStrsave(nctemp977);
p->descr=nctemp980;
}
return 1;
}
nctempchar1 * PtreeGetdescr (struct tree* p)
{
return p->descr;
}
int PtreeSetglobal (struct tree* p,nctempchar1 *global)
{
nctempchar1 *nctemp988 =global;
int nctemp987 =(nctemp988!=0);
int nctemp993 = (p !=0);
int nctemp984 = (nctemp987 && nctemp993);
if(nctemp984)
{
RunFree(p->global->a);
RunFree(p->global);
nctempchar1* nctemp1005= global;
nctempchar1* nctemp1008=LibeStrsave(nctemp1005);
p->global=nctemp1008;
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
nctempchar1 *nctemp1020 =forw;
int nctemp1019 =(nctemp1020!=0);
int nctemp1025 = (p !=0);
int nctemp1016 = (nctemp1019 && nctemp1025);
if(nctemp1016)
{
RunFree(p->forw->a);
RunFree(p->forw);
nctempchar1* nctemp1037= forw;
nctempchar1* nctemp1040=LibeStrsave(nctemp1037);
p->forw=nctemp1040;
}
return 1;
}
nctempchar1 * PtreeGetforw (struct tree* p)
{
return p->forw;
}
