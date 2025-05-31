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
fp =3;
int nctemp6 = (p !=0);
if(nctemp6)
{
i =0;
int nctemp14 = (i < level);
int nctemp18=nctemp14;
while(nctemp18)
{{
int nctemp20= fp;
struct nctempchar1 *nctemp24;
static struct nctempchar1 nctemp25 = {{ 2}, (char*)" \0"};
nctemp24=&nctemp25;
nctempchar1* nctemp22= nctemp24;
int nctemp26=LibePuts(nctemp20,nctemp22);
int nctemp35 = i + 1;
i =nctemp35;
}
int nctemp36 = (i < level);
nctemp18=nctemp36;}int nctemp41= fp;
nctempchar1* nctemp43= p->name;
int nctemp46=LibePuts(nctemp41,nctemp43);
int nctemp48= fp;
struct nctempchar1 *nctemp52;
static struct nctempchar1 nctemp53 = {{ 2}, (char*)" \0"};
nctemp52=&nctemp53;
nctempchar1* nctemp50= nctemp52;
int nctemp54=LibePuts(nctemp48,nctemp50);
int nctemp56= fp;
nctempchar1* nctemp58= p->defn;
int nctemp61=LibePuts(nctemp56,nctemp58);
int nctemp63= fp;
struct nctempchar1 *nctemp67;
static struct nctempchar1 nctemp68 = {{ 2}, (char*)" \0"};
nctemp67=&nctemp68;
nctempchar1* nctemp65= nctemp67;
int nctemp69=LibePuts(nctemp63,nctemp65);
int nctemp71= fp;
nctempchar1* nctemp73= p->type;
int nctemp76=LibePuts(nctemp71,nctemp73);
int nctemp78= fp;
struct nctempchar1 *nctemp82;
static struct nctempchar1 nctemp83 = {{ 2}, (char*)" \0"};
nctemp82=&nctemp83;
nctempchar1* nctemp80= nctemp82;
int nctemp84=LibePuts(nctemp78,nctemp80);
int nctemp86= fp;
nctempchar1* nctemp88= p->structure;
int nctemp91=LibePuts(nctemp86,nctemp88);
int nctemp93= fp;
struct nctempchar1 *nctemp97;
static struct nctempchar1 nctemp98 = {{ 2}, (char*)" \0"};
nctemp97=&nctemp98;
nctempchar1* nctemp95= nctemp97;
int nctemp99=LibePuts(nctemp93,nctemp95);
int nctemp101= fp;
nctempchar1* nctemp103= p->array;
int nctemp106=LibePuts(nctemp101,nctemp103);
int nctemp108= fp;
struct nctempchar1 *nctemp112;
static struct nctempchar1 nctemp113 = {{ 2}, (char*)" \0"};
nctemp112=&nctemp113;
nctempchar1* nctemp110= nctemp112;
int nctemp114=LibePuts(nctemp108,nctemp110);
int nctemp116= fp;
nctempchar1* nctemp118= p->paral;
int nctemp121=LibePuts(nctemp116,nctemp118);
int nctemp123= fp;
struct nctempchar1 *nctemp127;
static struct nctempchar1 nctemp128 = {{ 2}, (char*)" \0"};
nctemp127=&nctemp128;
nctempchar1* nctemp125= nctemp127;
int nctemp129=LibePuts(nctemp123,nctemp125);
int nctemp131= fp;
nctempchar1* nctemp133= p->global;
int nctemp136=LibePuts(nctemp131,nctemp133);
int nctemp138= fp;
struct nctempchar1 *nctemp142;
static struct nctempchar1 nctemp143 = {{ 2}, (char*)" \0"};
nctemp142=&nctemp143;
nctempchar1* nctemp140= nctemp142;
int nctemp144=LibePuts(nctemp138,nctemp140);
int nctemp146= fp;
int nctemp148= p->rank;
int nctemp150=LibePuti(nctemp146,nctemp148);
int nctemp152= fp;
struct nctempchar1 *nctemp156;
static struct nctempchar1 nctemp157 = {{ 2}, (char*)" \0"};
nctemp156=&nctemp157;
nctempchar1* nctemp154= nctemp156;
int nctemp158=LibePuts(nctemp152,nctemp154);
int nctemp160= fp;
nctempchar1* nctemp162= p->forw;
int nctemp165=LibePuts(nctemp160,nctemp162);
int nctemp167= fp;
struct nctempchar1 *nctemp171;
static struct nctempchar1 nctemp172 = {{ 2}, (char*)" \0"};
nctemp171=&nctemp172;
nctempchar1* nctemp169= nctemp171;
int nctemp173=LibePuts(nctemp167,nctemp169);
int nctemp174 = (p->simple ==1);
if(nctemp174)
{
int nctemp179= fp;
struct nctempchar1 *nctemp183;
static struct nctempchar1 nctemp184 = {{ 7}, (char*)"simple\0"};
nctemp183=&nctemp184;
nctempchar1* nctemp181= nctemp183;
int nctemp185=LibePuts(nctemp179,nctemp181);
int nctemp187= fp;
struct nctempchar1 *nctemp191;
static struct nctempchar1 nctemp192 = {{ 2}, (char*)" \0"};
nctemp191=&nctemp192;
nctempchar1* nctemp189= nctemp191;
int nctemp193=LibePuts(nctemp187,nctemp189);
}
else{
int nctemp194 = (p->simple ==2);
if(nctemp194)
{
int nctemp199= fp;
struct nctempchar1 *nctemp203;
static struct nctempchar1 nctemp204 = {{ 6}, (char*)"empty\0"};
nctemp203=&nctemp204;
nctempchar1* nctemp201= nctemp203;
int nctemp205=LibePuts(nctemp199,nctemp201);
int nctemp207= fp;
struct nctempchar1 *nctemp211;
static struct nctempchar1 nctemp212 = {{ 2}, (char*)" \0"};
nctemp211=&nctemp212;
nctempchar1* nctemp209= nctemp211;
int nctemp213=LibePuts(nctemp207,nctemp209);
}
else{
int nctemp215= fp;
struct nctempchar1 *nctemp219;
static struct nctempchar1 nctemp220 = {{ 10}, (char*)"nonsimple\0"};
nctemp219=&nctemp220;
nctempchar1* nctemp217= nctemp219;
int nctemp221=LibePuts(nctemp215,nctemp217);
int nctemp223= fp;
struct nctempchar1 *nctemp227;
static struct nctempchar1 nctemp228 = {{ 2}, (char*)" \0"};
nctemp227=&nctemp228;
nctempchar1* nctemp225= nctemp227;
int nctemp229=LibePuts(nctemp223,nctemp225);
}
}
int nctemp230 = (p->topexpr ==1);
if(nctemp230)
{
int nctemp235= fp;
struct nctempchar1 *nctemp239;
static struct nctempchar1 nctemp240 = {{ 8}, (char*)"topexpr\0"};
nctemp239=&nctemp240;
nctempchar1* nctemp237= nctemp239;
int nctemp241=LibePuts(nctemp235,nctemp237);
int nctemp243= fp;
struct nctempchar1 *nctemp247;
static struct nctempchar1 nctemp248 = {{ 2}, (char*)" \0"};
nctemp247=&nctemp248;
nctempchar1* nctemp245= nctemp247;
int nctemp249=LibePuts(nctemp243,nctemp245);
}
else{
int nctemp250 = (p->topexpr ==0);
if(nctemp250)
{
int nctemp255= fp;
struct nctempchar1 *nctemp259;
static struct nctempchar1 nctemp260 = {{ 5}, (char*)"void\0"};
nctemp259=&nctemp260;
nctempchar1* nctemp257= nctemp259;
int nctemp261=LibePuts(nctemp255,nctemp257);
int nctemp263= fp;
struct nctempchar1 *nctemp267;
static struct nctempchar1 nctemp268 = {{ 2}, (char*)" \0"};
nctemp267=&nctemp268;
nctempchar1* nctemp265= nctemp267;
int nctemp269=LibePuts(nctemp263,nctemp265);
}
else{
int nctemp271= fp;
struct nctempchar1 *nctemp275;
static struct nctempchar1 nctemp276 = {{ 10}, (char*)"nonsimple\0"};
nctemp275=&nctemp276;
nctempchar1* nctemp273= nctemp275;
int nctemp277=LibePuts(nctemp271,nctemp273);
int nctemp279= fp;
struct nctempchar1 *nctemp283;
static struct nctempchar1 nctemp284 = {{ 2}, (char*)" \0"};
nctemp283=&nctemp284;
nctempchar1* nctemp281= nctemp283;
int nctemp285=LibePuts(nctemp279,nctemp281);
}
}
int nctemp287= fp;
int nctemp289= p->line;
int nctemp291=LibePuti(nctemp287,nctemp289);
int nctemp293= fp;
struct nctempchar1 *nctemp297;
static struct nctempchar1 nctemp298 = {{ 2}, (char*)" \0"};
nctemp297=&nctemp298;
nctempchar1* nctemp295= nctemp297;
int nctemp299=LibePuts(nctemp293,nctemp295);
int nctemp301= fp;
nctempchar1* nctemp303= p->tempr;
int nctemp306=LibePuts(nctemp301,nctemp303);
int nctemp308= fp;
struct nctempchar1 *nctemp312;
static struct nctempchar1 nctemp313 = {{ 2}, (char*)" \0"};
nctemp312=&nctemp313;
nctempchar1* nctemp310= nctemp312;
int nctemp314=LibePuts(nctemp308,nctemp310);
int nctemp316= fp;
nctempchar1* nctemp318= p->tempi;
int nctemp321=LibePuts(nctemp316,nctemp318);
int nctemp323= fp;
struct nctempchar1 *nctemp327;
static struct nctempchar1 nctemp328 = {{ 2}, (char*)" \0"};
nctemp327=&nctemp328;
nctempchar1* nctemp325= nctemp327;
int nctemp329=LibePuts(nctemp323,nctemp325);
int nctemp331= fp;
nctempchar1* nctemp333= p->lval;
int nctemp336=LibePuts(nctemp331,nctemp333);
int nctemp338= fp;
struct nctempchar1 *nctemp342;
static struct nctempchar1 nctemp343 = {{ 2}, (char*)" \0"};
nctemp342=&nctemp343;
nctempchar1* nctemp340= nctemp342;
int nctemp344=LibePuts(nctemp338,nctemp340);
int nctemp346= fp;
nctempchar1* nctemp348= p->ref;
int nctemp351=LibePuts(nctemp346,nctemp348);
int nctemp353= fp;
struct nctempchar1 *nctemp357;
static struct nctempchar1 nctemp358 = {{ 2}, (char*)" \0"};
nctemp357=&nctemp358;
nctempchar1* nctemp355= nctemp357;
int nctemp359=LibePuts(nctemp353,nctemp355);
int nctemp361= fp;
nctempchar1* nctemp363= p->descr;
int nctemp366=LibePuts(nctemp361,nctemp363);
int nctemp368= fp;
struct nctempchar1 *nctemp372;
static struct nctempchar1 nctemp373 = {{ 2}, (char*)" \0"};
nctemp372=&nctemp373;
nctempchar1* nctemp370= nctemp372;
int nctemp374=LibePuts(nctemp368,nctemp370);
int nctemp376= fp;
struct nctempchar1 *nctemp380;
static struct nctempchar1 nctemp381 = {{ 3}, (char*)"\n\0"};
nctemp380=&nctemp381;
nctempchar1* nctemp378= nctemp380;
int nctemp382=LibePuts(nctemp376,nctemp378);
int nctemp391 = level + 1;
level =nctemp391;
struct tree* nctemp393= p->child;
int nctemp395= level;
int nctemp397=PtreePrtree(nctemp393,nctemp395);
int nctemp406 = level - 1;
level =nctemp406;
struct tree* nctemp408= p->sister;
int nctemp410= level;
int nctemp412=PtreePrtree(nctemp408,nctemp410);
}
int nctemp414= fp;
int nctemp416=LibeFlush(nctemp414);
return 1;
}
int PtreeRmnode (struct tree* p)
{
int nctemp418 = (p ==0);
if(nctemp418)
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
int nctemp456 = (p !=0);
if(nctemp456)
{
struct tree* nctemp461= p->child;
int nctemp463=PtreeRmtree(nctemp461);
struct tree* nctemp465= p->sister;
int nctemp467=PtreeRmtree(nctemp465);
struct tree* nctemp469= p;
int nctemp471=PtreeRmnode(nctemp469);
}
return 1;
}
struct tree* PtreeMknode (nctempchar1 *name,nctempchar1 *defn)
{
struct tree* p;
struct tree *nctemp477=(struct tree*)RunMalloc(sizeof(struct tree));
p =nctemp477;
nctempchar1* nctemp484= defn;
nctempchar1* nctemp487=LibeStrsave(nctemp484);
p->defn=nctemp487;
nctempchar1* nctemp493= name;
nctempchar1* nctemp496=LibeStrsave(nctemp493);
p->name=nctemp496;
struct nctempchar1 *nctemp504;
static struct nctempchar1 nctemp505 = {{ 5}, (char*)"void\0"};
nctemp504=&nctemp505;
nctempchar1* nctemp502= nctemp504;
nctempchar1* nctemp506=LibeStrsave(nctemp502);
p->type=nctemp506;
struct nctempchar1 *nctemp514;
static struct nctempchar1 nctemp515 = {{ 5}, (char*)"void\0"};
nctemp514=&nctemp515;
nctempchar1* nctemp512= nctemp514;
nctempchar1* nctemp516=LibeStrsave(nctemp512);
p->structure=nctemp516;
p->line =0;
struct nctempchar1 *nctemp528;
static struct nctempchar1 nctemp529 = {{ 5}, (char*)"void\0"};
nctemp528=&nctemp529;
nctempchar1* nctemp526= nctemp528;
nctempchar1* nctemp530=LibeStrsave(nctemp526);
p->file=nctemp530;
struct nctempchar1 *nctemp538;
static struct nctempchar1 nctemp539 = {{ 5}, (char*)"void\0"};
nctemp538=&nctemp539;
nctempchar1* nctemp536= nctemp538;
nctempchar1* nctemp540=LibeStrsave(nctemp536);
p->tempr=nctemp540;
struct nctempchar1 *nctemp548;
static struct nctempchar1 nctemp549 = {{ 5}, (char*)"void\0"};
nctemp548=&nctemp549;
nctempchar1* nctemp546= nctemp548;
nctempchar1* nctemp550=LibeStrsave(nctemp546);
p->tempi=nctemp550;
struct nctempchar1 *nctemp558;
static struct nctempchar1 nctemp559 = {{ 5}, (char*)"void\0"};
nctemp558=&nctemp559;
nctempchar1* nctemp556= nctemp558;
nctempchar1* nctemp560=LibeStrsave(nctemp556);
p->lval=nctemp560;
struct nctempchar1 *nctemp568;
static struct nctempchar1 nctemp569 = {{ 5}, (char*)"void\0"};
nctemp568=&nctemp569;
nctempchar1* nctemp566= nctemp568;
nctempchar1* nctemp570=LibeStrsave(nctemp566);
p->array=nctemp570;
struct nctempchar1 *nctemp578;
static struct nctempchar1 nctemp579 = {{ 5}, (char*)"void\0"};
nctemp578=&nctemp579;
nctempchar1* nctemp576= nctemp578;
nctempchar1* nctemp580=LibeStrsave(nctemp576);
p->paral=nctemp580;
struct nctempchar1 *nctemp588;
static struct nctempchar1 nctemp589 = {{ 5}, (char*)"void\0"};
nctemp588=&nctemp589;
nctempchar1* nctemp586= nctemp588;
nctempchar1* nctemp590=LibeStrsave(nctemp586);
p->ref=nctemp590;
struct nctempchar1 *nctemp598;
static struct nctempchar1 nctemp599 = {{ 5}, (char*)"void\0"};
nctemp598=&nctemp599;
nctempchar1* nctemp596= nctemp598;
nctempchar1* nctemp600=LibeStrsave(nctemp596);
p->descr=nctemp600;
struct nctempchar1 *nctemp608;
static struct nctempchar1 nctemp609 = {{ 5}, (char*)"void\0"};
nctemp608=&nctemp609;
nctempchar1* nctemp606= nctemp608;
nctempchar1* nctemp610=LibeStrsave(nctemp606);
p->global=nctemp610;
struct nctempchar1 *nctemp618;
static struct nctempchar1 nctemp619 = {{ 5}, (char*)"void\0"};
nctemp618=&nctemp619;
nctempchar1* nctemp616= nctemp618;
nctempchar1* nctemp620=LibeStrsave(nctemp616);
p->forw=nctemp620;
p->rank =0;
p->simple =2;
p->child =0;
p->sister =0;
return p;
}
int PtreeAddchild (struct tree* parent,struct tree* child)
{
struct tree* p;
struct tree* prev;
p =parent->child;
int nctemp638 = (p ==0);
if(nctemp638)
{
parent->child =child;
return 1;
}
prev =parent->child;
p =p->sister;
int nctemp655 = (p !=0);
int nctemp663=nctemp655;
while(nctemp663)
{{
prev =p;
}
p =p->sister;
int nctemp668 = (p !=0);
nctemp663=nctemp668;}prev->sister =child;
return 1;
}
int PtreeAddsister (struct tree* sister,struct tree* newnode)
{
struct tree* p;
struct tree* prev;
p =sister;
prev =p;
p =p->sister;
int nctemp689 = (p !=0);
int nctemp697=nctemp689;
while(nctemp697)
{{
prev =p;
}
p =p->sister;
int nctemp702 = (p !=0);
nctemp697=nctemp702;}prev->sister =newnode;
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
t=field;
nctempchar1* nctemp728= value;
nctempchar1* nctemp731=LibeStrsave(nctemp728);
field=nctemp731;
RunFree(t->a);
RunFree(t);
return field;
}
int PtreeSetname (struct tree* p,nctempchar1 *name)
{
nctempchar1 *nctemp741 =name;
int nctemp740 =(nctemp741!=0);
int nctemp746 = (p !=0);
int nctemp737 = (nctemp740 && nctemp746);
if(nctemp737)
{
RunFree(p->name->a);
RunFree(p->name);
nctempchar1* nctemp758= name;
nctempchar1* nctemp761=LibeStrsave(nctemp758);
p->name=nctemp761;
}
return 1;
}
nctempchar1 * PtreeGetname (struct tree* p)
{
return p->name;
}
int PtreeSetdef (struct tree* p,nctempchar1 *defn)
{
nctempchar1 *nctemp769 =defn;
int nctemp768 =(nctemp769!=0);
int nctemp774 = (p !=0);
int nctemp765 = (nctemp768 && nctemp774);
if(nctemp765)
{
RunFree(p->defn->a);
RunFree(p->defn);
nctempchar1* nctemp786= defn;
nctempchar1* nctemp789=LibeStrsave(nctemp786);
p->defn=nctemp789;
}
return 1;
}
nctempchar1 * PtreeGetdef (struct tree* p)
{
return p->defn;
}
int PtreeSetype (struct tree* p,nctempchar1 *type)
{
nctempchar1 *nctemp797 =type;
int nctemp796 =(nctemp797!=0);
int nctemp802 = (p !=0);
int nctemp793 = (nctemp796 && nctemp802);
if(nctemp793)
{
RunFree(p->type->a);
RunFree(p->type);
nctempchar1* nctemp814= type;
nctempchar1* nctemp817=LibeStrsave(nctemp814);
p->type=nctemp817;
}
return 1;
}
nctempchar1 * PtreeGetype (struct tree* p)
{
return p->type;
}
int PtreeSetstruct (struct tree* p,nctempchar1 *structure)
{
nctempchar1 *nctemp825 =structure;
int nctemp824 =(nctemp825!=0);
int nctemp830 = (p !=0);
int nctemp821 = (nctemp824 && nctemp830);
if(nctemp821)
{
RunFree(p->structure->a);
RunFree(p->structure);
nctempchar1* nctemp842= structure;
nctempchar1* nctemp845=LibeStrsave(nctemp842);
p->structure=nctemp845;
}
return 1;
}
nctempchar1 * PtreeGetstruct (struct tree* p)
{
return p->structure;
}
int PtreeSetempr (struct tree* p,nctempchar1 *tempr)
{
nctempchar1 *nctemp853 =tempr;
int nctemp852 =(nctemp853!=0);
int nctemp858 = (p !=0);
int nctemp849 = (nctemp852 && nctemp858);
if(nctemp849)
{
RunFree(p->tempr->a);
RunFree(p->tempr);
nctempchar1* nctemp870= tempr;
nctempchar1* nctemp873=LibeStrsave(nctemp870);
p->tempr=nctemp873;
}
return 1;
}
nctempchar1 * PtreeGetempr (struct tree* p)
{
return p->tempr;
}
int PtreeSetempi (struct tree* p,nctempchar1 *tempi)
{
nctempchar1 *nctemp881 =tempi;
int nctemp880 =(nctemp881!=0);
int nctemp886 = (p !=0);
int nctemp877 = (nctemp880 && nctemp886);
if(nctemp877)
{
RunFree(p->tempi->a);
RunFree(p->tempi);
nctempchar1* nctemp898= tempi;
nctempchar1* nctemp901=LibeStrsave(nctemp898);
p->tempi=nctemp901;
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
p->line =line;
return 1;
}
nctempchar1 * PtreeGetfile (struct tree* p)
{
return p->file;
}
int PtreeSetfile (struct tree* p,nctempchar1 *file)
{
nctempchar1 *nctemp917 =file;
int nctemp916 =(nctemp917!=0);
int nctemp922 = (p !=0);
int nctemp913 = (nctemp916 && nctemp922);
if(nctemp913)
{
RunFree(p->file->a);
RunFree(p->file);
nctempchar1* nctemp934= file;
nctempchar1* nctemp937=LibeStrsave(nctemp934);
p->file=nctemp937;
}
return 1;
}
int PtreeSetrank (struct tree* p,int rank)
{
p->rank =rank;
return 1;
}
int PtreeGetrank (struct tree* p)
{
return p->rank;
}
int PtreeSetlval (struct tree* p,nctempchar1 *lval)
{
nctempchar1 *nctemp949 =lval;
int nctemp948 =(nctemp949!=0);
int nctemp954 = (p !=0);
int nctemp945 = (nctemp948 && nctemp954);
if(nctemp945)
{
RunFree(p->lval->a);
RunFree(p->lval);
nctempchar1* nctemp966= lval;
nctempchar1* nctemp969=LibeStrsave(nctemp966);
p->lval=nctemp969;
}
return 1;
}
nctempchar1 * PtreeGetlval (struct tree* p)
{
return p->lval;
}
int PtreeSetarray (struct tree* p,nctempchar1 *array)
{
nctempchar1 *nctemp977 =array;
int nctemp976 =(nctemp977!=0);
int nctemp982 = (p !=0);
int nctemp973 = (nctemp976 && nctemp982);
if(nctemp973)
{
RunFree(p->array->a);
RunFree(p->array);
nctempchar1* nctemp994= array;
nctempchar1* nctemp997=LibeStrsave(nctemp994);
p->array=nctemp997;
}
return 1;
}
nctempchar1 * PtreeGetarray (struct tree* p)
{
return p->array;
}
int PtreeSetparallel (struct tree* p,nctempchar1 *paral)
{
nctempchar1 *nctemp1005 =paral;
int nctemp1004 =(nctemp1005!=0);
int nctemp1010 = (p !=0);
int nctemp1001 = (nctemp1004 && nctemp1010);
if(nctemp1001)
{
RunFree(p->paral->a);
RunFree(p->paral);
nctempchar1* nctemp1022= paral;
nctempchar1* nctemp1025=LibeStrsave(nctemp1022);
p->paral=nctemp1025;
}
return 1;
}
nctempchar1 * PtreeGetparallel (struct tree* p)
{
return p->paral;
}
int PtreeSetref (struct tree* p,nctempchar1 *ref)
{
nctempchar1 *nctemp1033 =ref;
int nctemp1032 =(nctemp1033!=0);
int nctemp1038 = (p !=0);
int nctemp1029 = (nctemp1032 && nctemp1038);
if(nctemp1029)
{
RunFree(p->ref->a);
RunFree(p->ref);
nctempchar1* nctemp1050= ref;
nctempchar1* nctemp1053=LibeStrsave(nctemp1050);
p->ref=nctemp1053;
}
return 1;
}
nctempchar1 * PtreeGetref (struct tree* p)
{
return p->ref;
}
int PtreeSetdescr (struct tree* p,nctempchar1 *descr)
{
nctempchar1 *nctemp1061 =descr;
int nctemp1060 =(nctemp1061!=0);
int nctemp1066 = (p !=0);
int nctemp1057 = (nctemp1060 && nctemp1066);
if(nctemp1057)
{
RunFree(p->descr->a);
RunFree(p->descr);
nctempchar1* nctemp1078= descr;
nctempchar1* nctemp1081=LibeStrsave(nctemp1078);
p->descr=nctemp1081;
}
return 1;
}
nctempchar1 * PtreeGetdescr (struct tree* p)
{
return p->descr;
}
int PtreeSetglobal (struct tree* p,nctempchar1 *global)
{
nctempchar1 *nctemp1089 =global;
int nctemp1088 =(nctemp1089!=0);
int nctemp1094 = (p !=0);
int nctemp1085 = (nctemp1088 && nctemp1094);
if(nctemp1085)
{
RunFree(p->global->a);
RunFree(p->global);
nctempchar1* nctemp1106= global;
nctempchar1* nctemp1109=LibeStrsave(nctemp1106);
p->global=nctemp1109;
}
return 1;
}
nctempchar1 * PtreeGetglobal (struct tree* p)
{
return p->global;
}
int PtreeSetopexpr (struct tree* p,int topexpr)
{
p->topexpr =1;
return 1;
}
int PtreeGetopexpr (struct tree* p)
{
return p->topexpr;
}
int PtreeSetsimple (struct tree* p,int simple)
{
p->simple =simple;
return 1;
}
int PtreeGetsimple (struct tree* p)
{
return p->simple;
}
int PtreeSetforw (struct tree* p,nctempchar1 *forw)
{
nctempchar1 *nctemp1129 =forw;
int nctemp1128 =(nctemp1129!=0);
int nctemp1134 = (p !=0);
int nctemp1125 = (nctemp1128 && nctemp1134);
if(nctemp1125)
{
RunFree(p->forw->a);
RunFree(p->forw);
nctempchar1* nctemp1146= forw;
nctempchar1* nctemp1149=LibeStrsave(nctemp1146);
p->forw=nctemp1149;
}
return 1;
}
nctempchar1 * PtreeGetforw (struct tree* p)
{
return p->forw;
}
