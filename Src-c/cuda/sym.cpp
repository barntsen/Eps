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
char nctemp5673;
char nctemp5845;
char nctemp5861;
char nctemp5902;
char nctemp5994;
char nctemp6010;
char nctemp6053;
char nctemp6137;
int nctemp6138;
int nctemp6139;
int nctemp6140;
int nctemp6141;
int nctemp6142;
int nctemp6143;
int nctemp6144;
char nctemp6391;
char nctemp6420;
char nctemp6484;
char nctemp6490;
char nctemp6496;
char nctemp6577;
int nctemp6578;
int nctemp6579;
int nctemp6580;
int nctemp6581;
int nctemp6582;
int nctemp6583;
int nctemp6584;
char nctemp6645;
int nctemp6646;
int nctemp6647;
int nctemp6648;
char nctemp6655;
int nctemp6656;
int nctemp6657;
int nctemp6658;
int nctemp6659;
int nctemp6660;
int nctemp6661;
int nctemp6662;
char nctemp6884;
int nctemp6885;
int nctemp6886;
int nctemp6887;
char nctemp6924;
int nctemp6925;
int nctemp6926;
int nctemp6927;
char nctemp7350;
char nctemp7395;
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
int nctemp23 = (np !=0);
int nctemp27=nctemp23;
while(nctemp27)
{{
nctempchar1* nctemp31= s;
nctempchar1* nctemp34= np->name;
int nctemp37=LibeStrcmp(nctemp31,nctemp34);
int nctemp28 = (nctemp37 ==1);
if(nctemp28)
{
return np;
}
np =np->next;
}
int nctemp44 = (np !=0);
nctemp27=nctemp44;}np =0;
return np;
}
struct symbol* SymMkname (nctempchar1 *name,struct symbol* tp)
{
struct symbol* np;
struct symbol* lp;
nctempchar1* nctemp59= name;
struct symbol* nctemp62= tp;
struct symbol* nctemp64=SymLookup(nctemp59,nctemp62);
np =nctemp64;
int nctemp52 = (np ==0);
if(nctemp52)
{
struct symbol *nctemp70=(struct symbol*)RunMalloc(sizeof(struct symbol));
np =nctemp70;
int nctemp72 = (np ==0);
if(nctemp72)
{
return np;
}
nctempchar1* nctemp85= name;
nctempchar1* nctemp88=LibeStrsave(nctemp85);
np->name=nctemp88;
nctempchar1 *nctemp78 =np->name;
int nctemp77 =(nctemp78==0);
if(nctemp77)
{
np =0;
return np;
}
lp =tp->last;
lp->next =np;
tp->last =np;
np->next =0;
struct nctempchar1 *nctemp117;
static struct nctempchar1 nctemp118 = {{ 5}, (char*)"void\0"};
nctemp117=&nctemp118;
nctempchar1* nctemp115= nctemp117;
nctempchar1* nctemp119=LibeStrsave(nctemp115);
np->type=nctemp119;
struct nctempchar1 *nctemp127;
static struct nctempchar1 nctemp128 = {{ 5}, (char*)"void\0"};
nctemp127=&nctemp128;
nctempchar1* nctemp125= nctemp127;
nctempchar1* nctemp129=LibeStrsave(nctemp125);
np->func=nctemp129;
struct nctempchar1 *nctemp137;
static struct nctempchar1 nctemp138 = {{ 5}, (char*)"void\0"};
nctemp137=&nctemp138;
nctempchar1* nctemp135= nctemp137;
nctempchar1* nctemp139=LibeStrsave(nctemp135);
np->array=nctemp139;
struct nctempchar1 *nctemp147;
static struct nctempchar1 nctemp148 = {{ 5}, (char*)"void\0"};
nctemp147=&nctemp148;
nctempchar1* nctemp145= nctemp147;
nctempchar1* nctemp149=LibeStrsave(nctemp145);
np->structure=nctemp149;
np->tbl =0;
struct nctempchar1 *nctemp161;
static struct nctempchar1 nctemp162 = {{ 5}, (char*)"void\0"};
nctemp161=&nctemp162;
nctempchar1* nctemp159= nctemp161;
nctempchar1* nctemp163=LibeStrsave(nctemp159);
np->ident=nctemp163;
np->rank =0;
struct nctempchar1 *nctemp175;
static struct nctempchar1 nctemp176 = {{ 5}, (char*)"void\0"};
nctemp175=&nctemp176;
nctempchar1* nctemp173= nctemp175;
nctempchar1* nctemp177=LibeStrsave(nctemp173);
np->lval=nctemp177;
struct nctempchar1 *nctemp185;
static struct nctempchar1 nctemp186 = {{ 5}, (char*)"void\0"};
nctemp185=&nctemp186;
nctempchar1* nctemp183= nctemp185;
nctempchar1* nctemp187=LibeStrsave(nctemp183);
np->ref=nctemp187;
struct nctempchar1 *nctemp195;
static struct nctempchar1 nctemp196 = {{ 5}, (char*)"void\0"};
nctemp195=&nctemp196;
nctempchar1* nctemp193= nctemp195;
nctempchar1* nctemp197=LibeStrsave(nctemp193);
np->descr=nctemp197;
struct nctempchar1 *nctemp205;
static struct nctempchar1 nctemp206 = {{ 5}, (char*)"void\0"};
nctemp205=&nctemp206;
nctempchar1* nctemp203= nctemp205;
nctempchar1* nctemp207=LibeStrsave(nctemp203);
np->global=nctemp207;
struct nctempchar1 *nctemp215;
static struct nctempchar1 nctemp216 = {{ 5}, (char*)"void\0"};
nctemp215=&nctemp216;
nctempchar1* nctemp213= nctemp215;
nctempchar1* nctemp217=LibeStrsave(nctemp213);
np->module=nctemp217;
struct nctempchar1 *nctemp225;
static struct nctempchar1 nctemp226 = {{ 5}, (char*)"void\0"};
nctemp225=&nctemp226;
nctempchar1* nctemp223= nctemp225;
nctempchar1* nctemp227=LibeStrsave(nctemp223);
np->forw=nctemp227;
np->emit =1;
}
else{
np =0;
}
return np;
}
struct symbol* SymRmname (nctempchar1 *name,struct symbol* tp)
{
struct symbol* np;
struct symbol* sp;
struct symbol* prev;
np =tp;
sp =0;
prev =np;
int nctemp249 = (np !=0);
int nctemp253=nctemp249;
while(nctemp253)
{{
nctempchar1* nctemp257= name;
nctempchar1* nctemp260= np->name;
int nctemp263=LibeStrcmp(nctemp257,nctemp260);
int nctemp254 = (nctemp263 ==1);
if(nctemp254)
{
sp =np;
np =0;
}
else{
prev =np;
np =np->next;
}
}
int nctemp281 = (np !=0);
nctemp253=nctemp281;}np =sp;
int nctemp289 = (np ==0);
if(nctemp289)
{
return np;
}
int nctemp294 = (np->next ==0);
if(nctemp294)
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
struct symbol *nctemp342=(struct symbol*)RunMalloc(sizeof(struct symbol));
tp =nctemp342;
int nctemp344 = (tp ==0);
if(nctemp344)
{
return tp;
}
struct nctempchar1 *nctemp356;
static struct nctempchar1 nctemp357 = {{ 7}, (char*)"#first\0"};
nctemp356=&nctemp357;
nctempchar1* nctemp354= nctemp356;
nctempchar1* nctemp358=LibeStrsave(nctemp354);
tp->name=nctemp358;
struct nctempchar1 *nctemp366;
static struct nctempchar1 nctemp367 = {{ 5}, (char*)"void\0"};
nctemp366=&nctemp367;
nctempchar1* nctemp364= nctemp366;
nctempchar1* nctemp368=LibeStrsave(nctemp364);
tp->type=nctemp368;
tp->tbl =0;
struct nctempchar1 *nctemp380;
static struct nctempchar1 nctemp381 = {{ 5}, (char*)"void\0"};
nctemp380=&nctemp381;
nctempchar1* nctemp378= nctemp380;
nctempchar1* nctemp382=LibeStrsave(nctemp378);
tp->func=nctemp382;
struct nctempchar1 *nctemp390;
static struct nctempchar1 nctemp391 = {{ 5}, (char*)"void\0"};
nctemp390=&nctemp391;
nctempchar1* nctemp388= nctemp390;
nctempchar1* nctemp392=LibeStrsave(nctemp388);
tp->ref=nctemp392;
struct nctempchar1 *nctemp400;
static struct nctempchar1 nctemp401 = {{ 5}, (char*)"void\0"};
nctemp400=&nctemp401;
nctempchar1* nctemp398= nctemp400;
nctempchar1* nctemp402=LibeStrsave(nctemp398);
tp->descr=nctemp402;
struct nctempchar1 *nctemp410;
static struct nctempchar1 nctemp411 = {{ 5}, (char*)"void\0"};
nctemp410=&nctemp411;
nctempchar1* nctemp408= nctemp410;
nctempchar1* nctemp412=LibeStrsave(nctemp408);
tp->array=nctemp412;
struct nctempchar1 *nctemp420;
static struct nctempchar1 nctemp421 = {{ 5}, (char*)"void\0"};
nctemp420=&nctemp421;
nctempchar1* nctemp418= nctemp420;
nctempchar1* nctemp422=LibeStrsave(nctemp418);
tp->structure=nctemp422;
struct nctempchar1 *nctemp430;
static struct nctempchar1 nctemp431 = {{ 5}, (char*)"void\0"};
nctemp430=&nctemp431;
nctempchar1* nctemp428= nctemp430;
nctempchar1* nctemp432=LibeStrsave(nctemp428);
tp->ident=nctemp432;
struct nctempchar1 *nctemp440;
static struct nctempchar1 nctemp441 = {{ 5}, (char*)"void\0"};
nctemp440=&nctemp441;
nctempchar1* nctemp438= nctemp440;
nctempchar1* nctemp442=LibeStrsave(nctemp438);
tp->lval=nctemp442;
struct nctempchar1 *nctemp450;
static struct nctempchar1 nctemp451 = {{ 5}, (char*)"void\0"};
nctemp450=&nctemp451;
nctempchar1* nctemp448= nctemp450;
nctempchar1* nctemp452=LibeStrsave(nctemp448);
tp->global=nctemp452;
struct nctempchar1 *nctemp460;
static struct nctempchar1 nctemp461 = {{ 5}, (char*)"void\0"};
nctemp460=&nctemp461;
nctempchar1* nctemp458= nctemp460;
nctempchar1* nctemp462=LibeStrsave(nctemp458);
tp->module=nctemp462;
struct nctempchar1 *nctemp470;
static struct nctempchar1 nctemp471 = {{ 5}, (char*)"void\0"};
nctemp470=&nctemp471;
nctempchar1* nctemp468= nctemp470;
nctempchar1* nctemp472=LibeStrsave(nctemp468);
tp->forw=nctemp472;
tp->emit =1;
tp->next =0;
tp->last =tp;
return tp;
}
struct symbol* SymMvnext (struct symbol* np)
{
int nctemp486 = (np ==0);
if(nctemp486)
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
struct symbol* SymGetable (struct symbol* np)
{
return np->tbl;
}
nctempchar1 * SymSetfield (nctempchar1 *field,nctempchar1 *value)
{
nctempchar1 *nctemp499 =field;
int nctemp498 =(nctemp499!=0);
if(nctemp498)
{
RunFree(field->a);
RunFree(field);
}
nctempchar1 *nctemp507 =value;
int nctemp506 =(nctemp507==0);
if(nctemp506)
{
field=(0);
}
else{
nctempchar1* nctemp521= value;
nctempchar1* nctemp524=LibeStrsave(nctemp521);
field=nctemp524;
}
return field;
}
int SymSetype (struct symbol* np,nctempchar1 *type)
{
nctempchar1* nctemp532= np->type;
nctempchar1* nctemp535= type;
nctempchar1* nctemp538=SymSetfield(nctemp532,nctemp535);
np->type=nctemp538;
return 1;
}
nctempchar1 * SymGetype (struct symbol* np)
{
return np->type;
}
int SymSetfunc (struct symbol* np,nctempchar1 *func)
{
nctempchar1* nctemp547= np->func;
nctempchar1* nctemp550= func;
nctempchar1* nctemp553=SymSetfield(nctemp547,nctemp550);
np->func=nctemp553;
return 1;
}
nctempchar1 * SymGetfunc (struct symbol* np)
{
return np->func;
}
int SymSetarray (struct symbol* np,nctempchar1 *array)
{
nctempchar1* nctemp562= np->array;
nctempchar1* nctemp565= array;
nctempchar1* nctemp568=SymSetfield(nctemp562,nctemp565);
np->array=nctemp568;
return 1;
}
nctempchar1 * SymGetarray (struct symbol* np)
{
return np->array;
}
int SymSetstruct (struct symbol* np,nctempchar1 *structure)
{
nctempchar1* nctemp577= np->structure;
nctempchar1* nctemp580= structure;
nctempchar1* nctemp583=SymSetfield(nctemp577,nctemp580);
np->structure=nctemp583;
return 1;
}
nctempchar1 * SymGetstruct (struct symbol* np)
{
return np->structure;
}
int SymSetident (struct symbol* np,nctempchar1 *ident)
{
nctempchar1* nctemp592= np->ident;
nctempchar1* nctemp595= ident;
nctempchar1* nctemp598=SymSetfield(nctemp592,nctemp595);
np->ident=nctemp598;
return 1;
}
nctempchar1 * SymGetident (struct symbol* np)
{
return np->ident;
}
int SymSetlval (struct symbol* np,nctempchar1 *lval)
{
nctempchar1* nctemp607= np->lval;
nctempchar1* nctemp610= lval;
nctempchar1* nctemp613=SymSetfield(nctemp607,nctemp610);
np->lval=nctemp613;
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
int SymSetref (struct symbol* np,nctempchar1 *ref)
{
nctempchar1* nctemp634= np->ref;
nctempchar1* nctemp637= ref;
nctempchar1* nctemp640=SymSetfield(nctemp634,nctemp637);
np->ref=nctemp640;
return 1;
}
nctempchar1 * SymGetref (struct symbol* np)
{
return np->ref;
}
int SymSetmodule (struct symbol* np,nctempchar1 *module)
{
nctempchar1* nctemp649= np->module;
nctempchar1* nctemp652= module;
nctempchar1* nctemp655=SymSetfield(nctemp649,nctemp652);
np->module=nctemp655;
return 1;
}
nctempchar1 * SymGetmodule (struct symbol* np)
{
return np->module;
}
int SymSetforw (struct symbol* np,nctempchar1 *forw)
{
nctempchar1* nctemp664= np->forw;
nctempchar1* nctemp667= forw;
nctempchar1* nctemp670=SymSetfield(nctemp664,nctemp667);
np->forw=nctemp670;
return 1;
}
nctempchar1 * SymGetforw (struct symbol* np)
{
return np->forw;
}
int SymSetdescr (struct symbol* np,nctempchar1 *descr)
{
nctempchar1* nctemp679= np->descr;
nctempchar1* nctemp682= descr;
nctempchar1* nctemp685=SymSetfield(nctemp679,nctemp682);
np->descr=nctemp685;
return 1;
}
nctempchar1 * SymGetdescr (struct symbol* np)
{
return np->descr;
}
int SymSetglobal (struct symbol* np,nctempchar1 *global)
{
nctempchar1* nctemp694= np->global;
nctempchar1* nctemp697= global;
nctempchar1* nctemp700=SymSetfield(nctemp694,nctemp697);
np->global=nctemp700;
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
int nctemp704 = (p ==0);
if(nctemp704)
{
return 0;
}
prev =0;
int nctemp713 = (p !=0);
int nctemp717=nctemp713;
while(nctemp717)
{{
next =p->next;
struct nctempchar1 *nctemp727;
static struct nctempchar1 nctemp728 = {{ 9}, (char*)"#arglist\0"};
nctemp727=&nctemp728;
nctempchar1* nctemp725= nctemp727;
nctempchar1* nctemp729= p->name;
int nctemp732=LibeStrcmp(nctemp725,nctemp729);
int nctemp722 = (nctemp732 ==0);
if(nctemp722)
{
struct nctempchar1 *nctemp739;
static struct nctempchar1 nctemp740 = {{ 6}, (char*)"#self\0"};
nctemp739=&nctemp740;
nctempchar1* nctemp737= nctemp739;
nctempchar1* nctemp741= p->name;
int nctemp744=LibeStrcmp(nctemp737,nctemp741);
int nctemp734 = (nctemp744 ==0);
if(nctemp734)
{
struct nctempchar1 *nctemp751;
static struct nctempchar1 nctemp752 = {{ 7}, (char*)"#first\0"};
nctemp751=&nctemp752;
nctempchar1* nctemp749= nctemp751;
nctempchar1* nctemp753= p->name;
int nctemp756=LibeStrcmp(nctemp749,nctemp753);
int nctemp746 = (nctemp756 ==0);
if(nctemp746)
{
int nctemp758 = (p->tbl !=0);
if(nctemp758)
{
struct symbol* nctemp763= p->tbl;
int nctemp765=SymRmtable(nctemp763);
p->tbl =0;
}
int nctemp770 = (prev !=0);
if(nctemp770)
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
int nctemp817 = (p !=0);
nctemp717=nctemp817;}return 1;
}
struct symbol* SymLook (nctempchar1 *name)
{
struct symbol* tp;
struct symbol* ap;
nctempchar1* nctemp829= name;
struct symbol* nctemp832= SymEtp;
struct symbol* nctemp834=SymLookup(nctemp829,nctemp832);
tp =nctemp834;
int nctemp822 = (tp ==0);
if(nctemp822)
{
nctempchar1* nctemp843= name;
struct symbol* nctemp846= SymLtp;
struct symbol* nctemp848=SymLookup(nctemp843,nctemp846);
tp =nctemp848;
int nctemp836 = (tp ==0);
if(nctemp836)
{
struct nctempchar1 *nctemp856;
static struct nctempchar1 nctemp857 = {{ 9}, (char*)"#arglist\0"};
nctemp856=&nctemp857;
nctempchar1* nctemp854= nctemp856;
struct symbol* nctemp858= SymLtp;
struct symbol* nctemp860=SymLookup(nctemp854,nctemp858);
tp =nctemp860;
int nctemp861 = (tp ==0);
if(nctemp861)
{
return tp;
}
struct symbol* nctemp870= tp;
struct symbol* nctemp872=SymGetable(nctemp870);
ap =nctemp872;
int nctemp873 = (ap ==0);
if(nctemp873)
{
return ap;
}
nctempchar1* nctemp885= name;
struct symbol* nctemp888= ap;
struct symbol* nctemp890=SymLookup(nctemp885,nctemp888);
tp =nctemp890;
int nctemp878 = (tp ==0);
if(nctemp878)
{
nctempchar1* nctemp896= name;
struct symbol* nctemp899= SymEtp;
struct symbol* nctemp901=SymLookup(nctemp896,nctemp899);
tp =nctemp901;
}
}
}
return tp;
}
int SymCpytble (struct symbol* tp,struct symbol* up)
{
struct symbol* wp;
struct symbol* nctemp907= tp;
struct symbol* nctemp909=SymMvnext(nctemp907);
tp =nctemp909;
int nctemp910 = (tp !=0);
int nctemp914=nctemp910;
while(nctemp914)
{{
struct symbol* nctemp921= tp;
nctempchar1* nctemp923=SymGetname(nctemp921);
nctempchar1* nctemp919= nctemp923;
struct symbol* nctemp924= up;
struct symbol* nctemp926=SymMkname(nctemp919,nctemp924);
wp =nctemp926;
struct symbol* nctemp928= wp;
struct symbol* nctemp932= tp;
nctempchar1* nctemp934=SymGetype(nctemp932);
nctempchar1* nctemp930= nctemp934;
int nctemp935=SymSetype(nctemp928,nctemp930);
struct symbol* nctemp937= wp;
struct symbol* nctemp941= tp;
nctempchar1* nctemp943=SymGetfunc(nctemp941);
nctempchar1* nctemp939= nctemp943;
int nctemp944=SymSetfunc(nctemp937,nctemp939);
struct symbol* nctemp946= wp;
struct symbol* nctemp950= tp;
nctempchar1* nctemp952=SymGetarray(nctemp950);
nctempchar1* nctemp948= nctemp952;
int nctemp953=SymSetarray(nctemp946,nctemp948);
struct symbol* nctemp955= wp;
struct symbol* nctemp959= tp;
int nctemp961=SymGetrank(nctemp959);
int nctemp957= nctemp961;
int nctemp962=SymSetrank(nctemp955,nctemp957);
struct symbol* nctemp964= wp;
struct symbol* nctemp968= tp;
nctempchar1* nctemp970=SymGetstruct(nctemp968);
nctempchar1* nctemp966= nctemp970;
int nctemp971=SymSetstruct(nctemp964,nctemp966);
struct symbol* nctemp973= wp;
struct symbol* nctemp977= tp;
nctempchar1* nctemp979=SymGetident(nctemp977);
nctempchar1* nctemp975= nctemp979;
int nctemp980=SymSetident(nctemp973,nctemp975);
struct symbol* nctemp982= wp;
struct symbol* nctemp986= tp;
nctempchar1* nctemp988=SymGetlval(nctemp986);
nctempchar1* nctemp984= nctemp988;
int nctemp989=SymSetlval(nctemp982,nctemp984);
struct symbol* nctemp991= wp;
struct symbol* nctemp995= tp;
nctempchar1* nctemp997=SymGetref(nctemp995);
nctempchar1* nctemp993= nctemp997;
int nctemp998=SymSetref(nctemp991,nctemp993);
struct symbol* nctemp1000= wp;
struct symbol* nctemp1004= tp;
nctempchar1* nctemp1006=SymGetdescr(nctemp1004);
nctempchar1* nctemp1002= nctemp1006;
int nctemp1007=SymSetdescr(nctemp1000,nctemp1002);
struct symbol* nctemp1009= wp;
struct symbol* nctemp1013= tp;
int nctemp1015=SymGetemit(nctemp1013);
int nctemp1011= nctemp1015;
int nctemp1016=SymSetemit(nctemp1009,nctemp1011);
struct symbol* nctemp1018= wp;
struct symbol* nctemp1022= tp;
nctempchar1* nctemp1024=SymGetmodule(nctemp1022);
nctempchar1* nctemp1020= nctemp1024;
int nctemp1025=SymSetmodule(nctemp1018,nctemp1020);
struct symbol* nctemp1030= tp;
struct symbol* nctemp1032=SymMvnext(nctemp1030);
tp =nctemp1032;
}
int nctemp1033 = (tp !=0);
nctemp914=nctemp1033;}return 1;
}
struct symbol* SymAddtble (struct symbol* tp,struct symbol* sp)
{
struct symbol* start;
struct symbol* start2;
struct symbol* prev;
start =tp;
int nctemp1042 = (sp ==0);
if(nctemp1042)
{
return start;
}
int nctemp1047 = (tp ==0);
if(nctemp1047)
{
return start;
}
struct symbol* nctemp1055= sp;
struct symbol* nctemp1057=SymMvnext(nctemp1055);
int nctemp1052 = (nctemp1057 ==0);
if(nctemp1052)
{
return start;
}
tp->last =sp->last;
struct symbol* nctemp1068= tp;
struct symbol* nctemp1070=SymMvnext(nctemp1068);
tp =nctemp1070;
int nctemp1071 = (tp ==0);
if(nctemp1071)
{
struct symbol* nctemp1079= sp;
struct symbol* nctemp1081=SymMvnext(nctemp1079);
start->next =nctemp1081;
return start;
}
int nctemp1083 = (tp !=0);
int nctemp1087=nctemp1083;
while(nctemp1087)
{{
prev =tp;
struct symbol* nctemp1096= tp;
struct symbol* nctemp1098=SymMvnext(nctemp1096);
tp =nctemp1098;
}
int nctemp1099 = (tp !=0);
nctemp1087=nctemp1099;}tp =prev;
struct symbol* nctemp1111= sp;
struct symbol* nctemp1113=SymMvnext(nctemp1111);
tp->next =nctemp1113;
return start;
}
int SymPrsym (int fp,struct symbol* p,int level)
{
int i;
struct symbol* tp;
int nctemp1115 = (p ==0);
if(nctemp1115)
{
return 0;
}
int nctemp1120 = (p !=0);
int nctemp1124=nctemp1120;
while(nctemp1124)
{{
i =0;
int nctemp1129 = (i <= level);
int nctemp1133=nctemp1129;
while(nctemp1133)
{{
int nctemp1135= fp;
struct nctempchar1 *nctemp1139;
static struct nctempchar1 nctemp1140 = {{ 2}, (char*)" \0"};
nctemp1139=&nctemp1140;
nctempchar1* nctemp1137= nctemp1139;
int nctemp1141=LibePuts(nctemp1135,nctemp1137);
int nctemp1150 = i + 1;
i =nctemp1150;
}
int nctemp1151 = (i <= level);
nctemp1133=nctemp1151;}int nctemp1156= fp;
nctempchar1* nctemp1158= p->name;
int nctemp1161=LibePuts(nctemp1156,nctemp1158);
int nctemp1163= fp;
struct nctempchar1 *nctemp1167;
static struct nctempchar1 nctemp1168 = {{ 2}, (char*)" \0"};
nctemp1167=&nctemp1168;
nctempchar1* nctemp1165= nctemp1167;
int nctemp1169=LibePuts(nctemp1163,nctemp1165);
int nctemp1171= fp;
nctempchar1* nctemp1173= p->type;
int nctemp1176=LibePuts(nctemp1171,nctemp1173);
int nctemp1178= fp;
struct nctempchar1 *nctemp1182;
static struct nctempchar1 nctemp1183 = {{ 2}, (char*)" \0"};
nctemp1182=&nctemp1183;
nctempchar1* nctemp1180= nctemp1182;
int nctemp1184=LibePuts(nctemp1178,nctemp1180);
int nctemp1186= fp;
nctempchar1* nctemp1188= p->func;
int nctemp1191=LibePuts(nctemp1186,nctemp1188);
int nctemp1193= fp;
struct nctempchar1 *nctemp1197;
static struct nctempchar1 nctemp1198 = {{ 2}, (char*)" \0"};
nctemp1197=&nctemp1198;
nctempchar1* nctemp1195= nctemp1197;
int nctemp1199=LibePuts(nctemp1193,nctemp1195);
int nctemp1201= fp;
nctempchar1* nctemp1203= p->array;
int nctemp1206=LibePuts(nctemp1201,nctemp1203);
int nctemp1208= fp;
struct nctempchar1 *nctemp1212;
static struct nctempchar1 nctemp1213 = {{ 2}, (char*)" \0"};
nctemp1212=&nctemp1213;
nctempchar1* nctemp1210= nctemp1212;
int nctemp1214=LibePuts(nctemp1208,nctemp1210);
int nctemp1216= fp;
int nctemp1218= p->rank;
int nctemp1220=LibePuti(nctemp1216,nctemp1218);
int nctemp1222= fp;
struct nctempchar1 *nctemp1226;
static struct nctempchar1 nctemp1227 = {{ 2}, (char*)" \0"};
nctemp1226=&nctemp1227;
nctempchar1* nctemp1224= nctemp1226;
int nctemp1228=LibePuts(nctemp1222,nctemp1224);
int nctemp1230= fp;
int nctemp1232= p->emit;
int nctemp1234=LibePuti(nctemp1230,nctemp1232);
int nctemp1236= fp;
struct nctempchar1 *nctemp1240;
static struct nctempchar1 nctemp1241 = {{ 2}, (char*)" \0"};
nctemp1240=&nctemp1241;
nctempchar1* nctemp1238= nctemp1240;
int nctemp1242=LibePuts(nctemp1236,nctemp1238);
int nctemp1244= fp;
nctempchar1* nctemp1246= p->structure;
int nctemp1249=LibePuts(nctemp1244,nctemp1246);
int nctemp1251= fp;
struct nctempchar1 *nctemp1255;
static struct nctempchar1 nctemp1256 = {{ 2}, (char*)" \0"};
nctemp1255=&nctemp1256;
nctempchar1* nctemp1253= nctemp1255;
int nctemp1257=LibePuts(nctemp1251,nctemp1253);
int nctemp1259= fp;
nctempchar1* nctemp1261= p->ident;
int nctemp1264=LibePuts(nctemp1259,nctemp1261);
int nctemp1266= fp;
struct nctempchar1 *nctemp1270;
static struct nctempchar1 nctemp1271 = {{ 2}, (char*)" \0"};
nctemp1270=&nctemp1271;
nctempchar1* nctemp1268= nctemp1270;
int nctemp1272=LibePuts(nctemp1266,nctemp1268);
int nctemp1274= fp;
nctempchar1* nctemp1276= p->lval;
int nctemp1279=LibePuts(nctemp1274,nctemp1276);
int nctemp1281= fp;
struct nctempchar1 *nctemp1285;
static struct nctempchar1 nctemp1286 = {{ 2}, (char*)" \0"};
nctemp1285=&nctemp1286;
nctempchar1* nctemp1283= nctemp1285;
int nctemp1287=LibePuts(nctemp1281,nctemp1283);
int nctemp1289= fp;
nctempchar1* nctemp1291= p->ref;
int nctemp1294=LibePuts(nctemp1289,nctemp1291);
int nctemp1296= fp;
struct nctempchar1 *nctemp1300;
static struct nctempchar1 nctemp1301 = {{ 2}, (char*)" \0"};
nctemp1300=&nctemp1301;
nctempchar1* nctemp1298= nctemp1300;
int nctemp1302=LibePuts(nctemp1296,nctemp1298);
int nctemp1304= fp;
nctempchar1* nctemp1306= p->descr;
int nctemp1309=LibePuts(nctemp1304,nctemp1306);
int nctemp1311= fp;
struct nctempchar1 *nctemp1315;
static struct nctempchar1 nctemp1316 = {{ 2}, (char*)" \0"};
nctemp1315=&nctemp1316;
nctempchar1* nctemp1313= nctemp1315;
int nctemp1317=LibePuts(nctemp1311,nctemp1313);
int nctemp1319= fp;
nctempchar1* nctemp1321= p->global;
int nctemp1324=LibePuts(nctemp1319,nctemp1321);
int nctemp1326= fp;
struct nctempchar1 *nctemp1330;
static struct nctempchar1 nctemp1331 = {{ 2}, (char*)" \0"};
nctemp1330=&nctemp1331;
nctempchar1* nctemp1328= nctemp1330;
int nctemp1332=LibePuts(nctemp1326,nctemp1328);
int nctemp1334= fp;
nctempchar1* nctemp1336= p->module;
int nctemp1339=LibePuts(nctemp1334,nctemp1336);
int nctemp1341= fp;
struct nctempchar1 *nctemp1345;
static struct nctempchar1 nctemp1346 = {{ 2}, (char*)" \0"};
nctemp1345=&nctemp1346;
nctempchar1* nctemp1343= nctemp1345;
int nctemp1347=LibePuts(nctemp1341,nctemp1343);
int nctemp1349= fp;
nctempchar1* nctemp1351= p->forw;
int nctemp1354=LibePuts(nctemp1349,nctemp1351);
int nctemp1356= fp;
struct nctempchar1 *nctemp1360;
static struct nctempchar1 nctemp1361 = {{ 2}, (char*)" \0"};
nctemp1360=&nctemp1361;
nctempchar1* nctemp1358= nctemp1360;
int nctemp1362=LibePuts(nctemp1356,nctemp1358);
int nctemp1364= fp;
struct nctempchar1 *nctemp1368;
static struct nctempchar1 nctemp1369 = {{ 3}, (char*)"\n\0"};
nctemp1368=&nctemp1369;
nctempchar1* nctemp1366= nctemp1368;
int nctemp1370=LibePuts(nctemp1364,nctemp1366);
int nctemp1372= fp;
int nctemp1374=LibeFlush(nctemp1372);
int nctemp1375 = (p->tbl !=0);
if(nctemp1375)
{
tp =p->tbl;
int nctemp1391 = level + 1;
level =nctemp1391;
int nctemp1393= fp;
struct symbol* nctemp1395= tp;
int nctemp1397= level;
int nctemp1399=SymPrsym(nctemp1393,nctemp1395,nctemp1397);
int nctemp1408 = level - 1;
level =nctemp1408;
}
p =p->next;
}
int nctemp1413 = (p !=0);
nctemp1124=nctemp1413;}int nctemp1418= fp;
int nctemp1420=LibeFlush(nctemp1418);
return 1;
}
int SymExport (int fp,struct symbol* p,int level)
{
int i;
struct symbol* tp;
struct symbol* tq;
int nctemp1422 = (p ==0);
if(nctemp1422)
{
return 0;
}
struct symbol* nctemp1431=SymMktable();
tq =nctemp1431;
int nctemp1433= fp;
struct symbol* nctemp1435= tq;
int nctemp1437= 0;
int nctemp1439=SymPrsym(nctemp1433,nctemp1435,nctemp1437);
p =p->next;
int nctemp1444 = (p !=0);
int nctemp1448=nctemp1444;
while(nctemp1448)
{{
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
p =p->next;
}
int nctemp1689 = (p !=0);
nctemp1448=nctemp1689;}int nctemp1694= fp;
int nctemp1696=LibeFlush(nctemp1694);
return 1;
}
int Symgetline (int fp,struct symbol* np,nctempchar1 *module)
{
int indent;
int ch;
int tmp;
nctempchar1 *field;
int nctemp1704=400;
nctempchar1 *nctemp1703;
nctemp1703=(nctempchar1*)RunMalloc(sizeof(nctempchar1));
nctemp1703->d[0]=400;
nctemp1703->a=(char *)RunMalloc(sizeof(char)*nctemp1704);
field=nctemp1703;
indent =0;
ch =1;
int nctemp1722= fp;
int nctemp1724=LibeGetc(nctemp1722);
ch =nctemp1724;
int nctemp1715 = (ch ==(-1));
if(nctemp1715)
{
int nctemp1726= -1;
return nctemp1726;
}
else{
int nctemp1728= fp;
int nctemp1730=LibeUngetc(nctemp1728);
}
int nctemp1738= fp;
int nctemp1740=LibeGetc(nctemp1738);
ch =nctemp1740;
int nctemp1731 = (ch ==32);
int nctemp1742=nctemp1731;
while(nctemp1742)
{{
int nctemp1751 = indent + 1;
indent =nctemp1751;
}
int nctemp1759= fp;
int nctemp1761=LibeGetc(nctemp1759);
ch =nctemp1761;
int nctemp1752 = (ch ==32);
nctemp1742=nctemp1752;}int nctemp1764= fp;
int nctemp1766=LibeUngetc(nctemp1764);
int nctemp1768= fp;
nctempchar1* nctemp1770= field;
int nctemp1773=LibeGetw(nctemp1768,nctemp1770);
nctempchar1* nctemp1775= np->name;
nctempchar1* nctemp1778= field;
nctempchar1* nctemp1781=SymSetfield(nctemp1775,nctemp1778);
int nctemp1783= fp;
nctempchar1* nctemp1785= field;
int nctemp1788=LibeGetw(nctemp1783,nctemp1785);
struct symbol* nctemp1790= np;
nctempchar1* nctemp1792= field;
int nctemp1795=SymSetype(nctemp1790,nctemp1792);
int nctemp1797= fp;
nctempchar1* nctemp1799= field;
int nctemp1802=LibeGetw(nctemp1797,nctemp1799);
struct symbol* nctemp1804= np;
nctempchar1* nctemp1806= field;
int nctemp1809=SymSetfunc(nctemp1804,nctemp1806);
int nctemp1811= fp;
nctempchar1* nctemp1813= field;
int nctemp1816=LibeGetw(nctemp1811,nctemp1813);
struct symbol* nctemp1818= np;
nctempchar1* nctemp1820= field;
int nctemp1823=SymSetarray(nctemp1818,nctemp1820);
int nctemp1825= fp;
nctempchar1* nctemp1827= field;
int nctemp1830=LibeGetw(nctemp1825,nctemp1827);
struct symbol* nctemp1832= np;
nctempchar1* nctemp1836= field;
int nctemp1839=LibeAtoi(nctemp1836);
int nctemp1834= nctemp1839;
int nctemp1840=SymSetrank(nctemp1832,nctemp1834);
int nctemp1842= fp;
nctempchar1* nctemp1844= field;
int nctemp1847=LibeGetw(nctemp1842,nctemp1844);
struct symbol* nctemp1849= np;
nctempchar1* nctemp1853= field;
int nctemp1856=LibeAtoi(nctemp1853);
int nctemp1851= nctemp1856;
int nctemp1857=SymSetemit(nctemp1849,nctemp1851);
int nctemp1859= fp;
nctempchar1* nctemp1861= field;
int nctemp1864=LibeGetw(nctemp1859,nctemp1861);
struct symbol* nctemp1866= np;
nctempchar1* nctemp1868= field;
int nctemp1871=SymSetstruct(nctemp1866,nctemp1868);
int nctemp1873= fp;
nctempchar1* nctemp1875= field;
int nctemp1878=LibeGetw(nctemp1873,nctemp1875);
struct symbol* nctemp1880= np;
nctempchar1* nctemp1882= field;
int nctemp1885=SymSetident(nctemp1880,nctemp1882);
int nctemp1887= fp;
nctempchar1* nctemp1889= field;
int nctemp1892=LibeGetw(nctemp1887,nctemp1889);
struct symbol* nctemp1894= np;
nctempchar1* nctemp1896= field;
int nctemp1899=SymSetlval(nctemp1894,nctemp1896);
int nctemp1901= fp;
nctempchar1* nctemp1903= field;
int nctemp1906=LibeGetw(nctemp1901,nctemp1903);
struct symbol* nctemp1908= np;
nctempchar1* nctemp1910= field;
int nctemp1913=SymSetref(nctemp1908,nctemp1910);
int nctemp1915= fp;
nctempchar1* nctemp1917= field;
int nctemp1920=LibeGetw(nctemp1915,nctemp1917);
struct symbol* nctemp1922= np;
nctempchar1* nctemp1924= field;
int nctemp1927=SymSetdescr(nctemp1922,nctemp1924);
int nctemp1929= fp;
nctempchar1* nctemp1931= field;
int nctemp1934=LibeGetw(nctemp1929,nctemp1931);
struct symbol* nctemp1936= np;
nctempchar1* nctemp1938= field;
int nctemp1941=SymSetglobal(nctemp1936,nctemp1938);
int nctemp1943= fp;
nctempchar1* nctemp1945= field;
int nctemp1948=LibeGetw(nctemp1943,nctemp1945);
struct symbol* nctemp1950= np;
nctempchar1* nctemp1952= module;
int nctemp1955=SymSetmodule(nctemp1950,nctemp1952);
int nctemp1963= fp;
int nctemp1965=LibeGetc(nctemp1963);
ch =nctemp1965;
int nctemp1956 = (ch !=10);
int nctemp1967=nctemp1956;
while(nctemp1967)
{{
tmp =1;
}
int nctemp1979= fp;
int nctemp1981=LibeGetc(nctemp1979);
ch =nctemp1981;
int nctemp1972 = (ch !=10);
nctemp1967=nctemp1972;}return indent;
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
struct symbol* nctemp1992=SymMktable();
ttbl =nctemp1992;
struct symbol* nctemp1994= ttbl;
nctempchar1* nctemp1996= module;
int nctemp1999=SymSetmodule(nctemp1994,nctemp1996);
struct nctempchar1 *nctemp2006;
static struct nctempchar1 nctemp2007 = {{ 6}, (char*)"dummy\0"};
nctemp2006=&nctemp2007;
nctempchar1* nctemp2004= nctemp2006;
struct symbol* nctemp2008= ttbl;
struct symbol* nctemp2010=SymMkname(nctemp2004,nctemp2008);
mp =nctemp2010;
int nctemp2015= fp;
struct symbol* nctemp2017= mp;
nctempchar1* nctemp2019= module;
int nctemp2022=Symgetline(nctemp2015,nctemp2017,nctemp2019);
indent =nctemp2022;
oldindent =1;
indent =1;
int nctemp2032=1;
while(nctemp2032)
{{
int nctemp2037= fp;
struct symbol* nctemp2039= mp;
nctempchar1* nctemp2041= module;
int nctemp2044=Symgetline(nctemp2037,nctemp2039,nctemp2041);
indent =nctemp2044;
int nctemp2045 = (indent < 0);
if(nctemp2045)
{
return 1;
}
nctempchar1* nctemp2053= mp->name;
struct nctempchar1 *nctemp2058;
static struct nctempchar1 nctemp2059 = {{ 7}, (char*)"#first\0"};
nctemp2058=&nctemp2059;
nctempchar1* nctemp2056= nctemp2058;
int nctemp2060=LibeStrcmp(nctemp2053,nctemp2056);
int nctemp2050 = (nctemp2060 ==1);
if(nctemp2050)
{
int nctemp2066= fp;
struct symbol* nctemp2068= mp;
nctempchar1* nctemp2070= module;
int nctemp2073=Symgetline(nctemp2066,nctemp2068,nctemp2070);
indent =nctemp2073;
}
int nctemp2074 = (indent ==oldindent);
if(nctemp2074)
{
struct symbol* nctemp2079= ttbl;
struct symbol* nctemp2081= tbl;
int nctemp2083=SymCpytble(nctemp2079,nctemp2081);
oldindent =indent;
}
int nctemp2088 = (indent > oldindent);
if(nctemp2088)
{
struct symbol* nctemp2096=SymMktable();
ntbl =nctemp2096;
struct symbol* nctemp2098= ntbl;
nctempchar1* nctemp2100= module;
int nctemp2103=SymSetmodule(nctemp2098,nctemp2100);
np =tbl->last;
struct symbol* nctemp2109= np;
struct symbol* nctemp2111= ntbl;
struct symbol* nctemp2113=SymSetable(nctemp2109,nctemp2111);
tbl =ntbl;
struct symbol* nctemp2119= ttbl;
struct symbol* nctemp2121= tbl;
int nctemp2123=SymCpytble(nctemp2119,nctemp2121);
oldindent =indent;
}
int nctemp2128 = (indent < oldindent);
if(nctemp2128)
{
tbl =rtbl;
int nctemp2136 = (indent ==1);
if(nctemp2136)
{
tbl =rtbl;
}
else{
i =0;
int nctemp2148 = (i < indent);
while(nctemp2148){
{
struct symbol* nctemp2156= tbl->last;
struct symbol* nctemp2158=SymGetable(nctemp2156);
tbl =nctemp2158;
}
int nctemp2167 = i + 1;
i =nctemp2167;
int nctemp2168 = (i < indent);
nctemp2148=nctemp2168;
}
}
struct symbol* nctemp2173= ttbl;
struct symbol* nctemp2175= tbl;
int nctemp2177=SymCpytble(nctemp2173,nctemp2175);
oldindent =indent;
}
}
nctemp2032=1;}int nctemp2184= fp;
int nctemp2186=LibeClose(nctemp2184);
return 1;
}
}
