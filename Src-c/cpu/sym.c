//  Translated by epsc  version today  
#include <stddef.h>
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
int LibeArrayex (int line,nctempchar1 *name,int ival,int index,int bound);
int LibeClearerr ();
int LibeGeterrno ();
nctempchar1* LibeGeterrstr ();
struct MainArg {nctempchar1 *arg;
};
typedef struct nctempMainArg1 {int d[1]; struct MainArg *a; } nctempMainArg1;
struct nctempMainArg2 {int d[2]; struct MainArg *a; } ;
struct nctempMainArg3 {int d[3]; struct MainArg *a; } ;
struct nctempMainArg4 {int d[4]; struct MainArg *a; } ;
int Main (struct nctempMainArg1 *MainArgs);
int LibeInit ();
int LibeDelete ();
int LibeExit ();
nctempchar1* LibeGetenv (nctempchar1 *name);
int LibeOpen (nctempchar1 *name,nctempchar1 *mode);
int LibeClose (int fp);
int LibeGetc (int fp);
int LibeUngetc (int fp);
int LibeGetw (int fp,nctempchar1 *text);
int LibePs (nctempchar1 *s);
int LibePi (int n);
int LibePf (float r);
int LibePutf (int fp,float r,nctempchar1 *form);
int LibePutc (int fp,int c);
int LibePuts (int fp,nctempchar1 *s);
int LibePuti (int fp,int ival);
int LibeRead (int fp,int n,nctempchar1 *array);
int LibeWrite (int fp,int n,nctempchar1 *array);
int LibeSeek (int fp,int pos,int flag);
int LibeFlush (int fp);
int LibeStrlen (nctempchar1 *s);
int LibeStrcmp (nctempchar1 *s,nctempchar1 *t);
int LibeStrev (nctempchar1 *s);
nctempchar1* LibeStrsave (nctempchar1 *s);
int LibeStrcpy (nctempchar1 *s,nctempchar1 *t);
int LibeStrcat (nctempchar1 *s,nctempchar1 *t);
nctempchar1* LibeStradd (nctempchar1 *t,nctempchar1 *s);
int LibeIsalpha (int c);
int LibeIsdigit (int c);
int LibeIsalnum (int c);
int LibeAtoi (nctempchar1 *s);
int LibeItoa (int n,nctempchar1 *s);
int LibeItoh (int n,nctempchar1 *s);
float LibeAtof (nctempchar1 *s);
int LibeFtoa (float f,nctempchar1 *fmt,nctempchar1 *s);
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
int LibeSetnb (int n);
int LibeSetnt (int n);
int LibeGetnb ();
int LibeGetnt ();
int LibeMod (int n,int r);
float LibeSqrt (float x);
float LibeLn (float x);
float LibeExp (float x);
float LibeSin (float x);
float LibeCos (float x);
float LibeTan (float x);
float LibeArcsin (float x);
float LibeArccos (float x);
float LibeArctan (float x);
float LibePow (float base,float exponent);
int LibeSystem (nctempchar1 *cmd);
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
int PtreeRmtree (struct tree* p);
int PtreeRmnode (struct tree* p);
struct tree* PtreeMknode (nctempchar1 *name,nctempchar1 *def);
int PtreeAddchild (struct tree* parent,struct tree* child);
int PtreeAddsister (struct tree* sister,struct tree* newnode);
struct tree* PtreeMvsister (struct tree* p);
struct tree* PtreeMvchild (struct tree* p);
int PtreeSetname (struct tree* p,nctempchar1 *name);
nctempchar1* PtreeGetname (struct tree* p);
int PtreeSetdef (struct tree* p,nctempchar1 *def);
nctempchar1* PtreeGetdef (struct tree* p);
int PtreeSetype (struct tree* p,nctempchar1 *type);
nctempchar1* PtreeGetype (struct tree* p);
int PtreeSetstruct (struct tree* p,nctempchar1 *structure);
nctempchar1* PtreeGetstruct (struct tree* p);
int PtreeSetempr (struct tree* p,nctempchar1 *tempr);
nctempchar1* PtreeGetempr (struct tree* p);
int PtreeSetempi (struct tree* p,nctempchar1 *tempi);
nctempchar1* PtreeGetempi (struct tree* p);
int PtreeGetline (struct tree* p);
int PtreeSetline (struct tree* p,int line);
nctempchar1* PtreeGetfile (struct tree* p);
int PtreeSetrank (struct tree* p,int rank);
int PtreeGetrank (struct tree* p);
int PtreeSetlval (struct tree* p,nctempchar1 *lval);
nctempchar1* PtreeGetlval (struct tree* p);
int PtreeSetarray (struct tree* p,nctempchar1 *array);
nctempchar1* PtreeGetarray (struct tree* p);
int PtreeSetparallel (struct tree* p,nctempchar1 *paral);
nctempchar1* PtreeGetparallel (struct tree* p);
int PtreeSetref (struct tree* p,nctempchar1 *ref);
nctempchar1* PtreeGetref (struct tree* p);
int PtreeSetdescr (struct tree* p,nctempchar1 *descr);
nctempchar1* PtreeGetdescr (struct tree* p);
int PtreeSetglobal (struct tree* p,nctempchar1 *descr);
nctempchar1* PtreeGetglobal (struct tree* p);
int PtreeSetopexpr (struct tree* p,int topexpr);
int PtreeGetopexpr (struct tree* p);
int PtreeSetsimple (struct tree* p,int simple);
int PtreeGetsimple (struct tree* p);
int PtreePrtree (struct tree* p,int level);
int ErrError (nctempchar1 *s);
int ErrSerror (struct tree* p,nctempchar1 *s1,nctempchar1 *s2);
int ErrPanic (nctempchar1 *s);
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
int emit;
struct symbol* tbl;
struct symbol* next;
struct symbol* last;
};
typedef struct nctempsymbol1 {int d[1]; struct symbol *a; } nctempsymbol1;
struct nctempsymbol2 {int d[2]; struct symbol *a; } ;
struct nctempsymbol3 {int d[3]; struct symbol *a; } ;
struct nctempsymbol4 {int d[4]; struct symbol *a; } ;
struct symbol* SymGetetp ();
struct symbol* SymSetetp (struct symbol* etp);
struct symbol* SymGetltp ();
struct symbol* SymSetltp (struct symbol* etp);
struct symbol* SymGetstp ();
struct symbol* SymSetstp (struct symbol* etp);
struct symbol* SymMktable ();
struct symbol* SymSetable (struct symbol* np,struct symbol* tp);
struct symbol* SymGetable (struct symbol* np);
struct symbol* SymMkname (nctempchar1 *name,struct symbol* tp);
struct symbol* SymRmname (nctempchar1 *name,struct symbol* tp);
int SymRmtable (struct symbol* p);
int SymRmsubtables (struct symbol* p);
nctempchar1* SymGetname (struct symbol* np);
struct symbol* SymLookup (nctempchar1 *s,struct symbol* tp);
int SymSetype (struct symbol* np,nctempchar1 *type);
nctempchar1* SymGetype (struct symbol* np);
int SymSetident (struct symbol* np,nctempchar1 *ident);
nctempchar1* SymGetident (struct symbol* np);
int SymSetlval (struct symbol* np,nctempchar1 *lval);
nctempchar1* SymGetlval (struct symbol* np);
int SymSetref (struct symbol* np,nctempchar1 *ref);
nctempchar1* SymGetref (struct symbol* np);
int SymSetfunc (struct symbol* np,nctempchar1 *func);
nctempchar1* SymGetfunc (struct symbol* np);
int SymSetarray (struct symbol* np,nctempchar1 *array);
nctempchar1* SymGetarray (struct symbol* np);
int SymSetrank (struct symbol* np,int rank);
int SymGetrank (struct symbol* np);
int SymSetemit (struct symbol* np,int emit);
int SymGetemit (struct symbol* np);
int SymSetstruct (struct symbol* np,nctempchar1 *structure);
nctempchar1* SymGetstruct (struct symbol* np);
int SymSetdescr (struct symbol* np,nctempchar1 *descr);
nctempchar1* SymGetdescr (struct symbol* np);
int SymSetglobal (struct symbol* np,nctempchar1 *descr);
nctempchar1* SymGetglobal (struct symbol* np);
struct symbol* SymMvnext (struct symbol* np);
struct symbol* SymLook (nctempchar1 *name);
int SymPrsym (struct symbol* p,int level);
int SymCpytble (struct symbol* tp,struct symbol* up);
nctempchar1* SymSetfield (nctempchar1 *field,nctempchar1 *value);
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
struct nctempchar1 *nctemp79;
static struct nctempchar1 nctemp80 = {{ 14}, (char*)"Out of memory\0"};
nctemp79=&nctemp80;
nctempchar1* nctemp77= nctemp79;
int nctemp81=ErrPanic(nctemp77);
return np;
}
nctempchar1* nctemp91= name;
nctempchar1* nctemp94=LibeStrsave(nctemp91);
np->name=nctemp94;
nctempchar1 *nctemp84 =np->name;
int nctemp83 =(nctemp84==0);
if(nctemp83)
{
struct nctempchar1 *nctemp99;
static struct nctempchar1 nctemp100 = {{ 14}, (char*)"Out of memory\0"};
nctemp99=&nctemp100;
nctempchar1* nctemp97= nctemp99;
int nctemp101=ErrPanic(nctemp97);
np =0;
return np;
}
lp =tp->last;
lp->next =np;
tp->last =np;
np->next =0;
struct nctempchar1 *nctemp129;
static struct nctempchar1 nctemp130 = {{ 5}, (char*)"void\0"};
nctemp129=&nctemp130;
nctempchar1* nctemp127= nctemp129;
nctempchar1* nctemp131=LibeStrsave(nctemp127);
np->type=nctemp131;
struct nctempchar1 *nctemp139;
static struct nctempchar1 nctemp140 = {{ 5}, (char*)"void\0"};
nctemp139=&nctemp140;
nctempchar1* nctemp137= nctemp139;
nctempchar1* nctemp141=LibeStrsave(nctemp137);
np->func=nctemp141;
struct nctempchar1 *nctemp149;
static struct nctempchar1 nctemp150 = {{ 5}, (char*)"void\0"};
nctemp149=&nctemp150;
nctempchar1* nctemp147= nctemp149;
nctempchar1* nctemp151=LibeStrsave(nctemp147);
np->array=nctemp151;
struct nctempchar1 *nctemp159;
static struct nctempchar1 nctemp160 = {{ 5}, (char*)"void\0"};
nctemp159=&nctemp160;
nctempchar1* nctemp157= nctemp159;
nctempchar1* nctemp161=LibeStrsave(nctemp157);
np->structure=nctemp161;
np->tbl =0;
struct nctempchar1 *nctemp173;
static struct nctempchar1 nctemp174 = {{ 5}, (char*)"void\0"};
nctemp173=&nctemp174;
nctempchar1* nctemp171= nctemp173;
nctempchar1* nctemp175=LibeStrsave(nctemp171);
np->ident=nctemp175;
np->rank =0;
struct nctempchar1 *nctemp187;
static struct nctempchar1 nctemp188 = {{ 5}, (char*)"void\0"};
nctemp187=&nctemp188;
nctempchar1* nctemp185= nctemp187;
nctempchar1* nctemp189=LibeStrsave(nctemp185);
np->lval=nctemp189;
struct nctempchar1 *nctemp197;
static struct nctempchar1 nctemp198 = {{ 5}, (char*)"void\0"};
nctemp197=&nctemp198;
nctempchar1* nctemp195= nctemp197;
nctempchar1* nctemp199=LibeStrsave(nctemp195);
np->ref=nctemp199;
struct nctempchar1 *nctemp207;
static struct nctempchar1 nctemp208 = {{ 5}, (char*)"void\0"};
nctemp207=&nctemp208;
nctempchar1* nctemp205= nctemp207;
nctempchar1* nctemp209=LibeStrsave(nctemp205);
np->descr=nctemp209;
struct nctempchar1 *nctemp217;
static struct nctempchar1 nctemp218 = {{ 5}, (char*)"void\0"};
nctemp217=&nctemp218;
nctempchar1* nctemp215= nctemp217;
nctempchar1* nctemp219=LibeStrsave(nctemp215);
np->global=nctemp219;
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
int nctemp241 = (np !=0);
int nctemp245=nctemp241;
while(nctemp245)
{{
nctempchar1* nctemp249= name;
nctempchar1* nctemp252= np->name;
int nctemp255=LibeStrcmp(nctemp249,nctemp252);
int nctemp246 = (nctemp255 ==1);
if(nctemp246)
{
sp =np;
np =0;
}
else{
prev =np;
np =np->next;
}
}
int nctemp273 = (np !=0);
nctemp245=nctemp273;}np =sp;
int nctemp281 = (np ==0);
if(nctemp281)
{
return np;
}
int nctemp286 = (np->next ==0);
if(nctemp286)
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
struct symbol *nctemp334=(struct symbol*)RunMalloc(sizeof(struct symbol));
tp =nctemp334;
int nctemp336 = (tp ==0);
if(nctemp336)
{
struct nctempchar1 *nctemp343;
static struct nctempchar1 nctemp344 = {{ 14}, (char*)"Out of memory\0"};
nctemp343=&nctemp344;
nctempchar1* nctemp341= nctemp343;
int nctemp345=ErrPanic(nctemp341);
return tp;
}
struct nctempchar1 *nctemp354;
static struct nctempchar1 nctemp355 = {{ 7}, (char*)"#first\0"};
nctemp354=&nctemp355;
nctempchar1* nctemp352= nctemp354;
nctempchar1* nctemp356=LibeStrsave(nctemp352);
tp->name=nctemp356;
struct nctempchar1 *nctemp364;
static struct nctempchar1 nctemp365 = {{ 5}, (char*)"void\0"};
nctemp364=&nctemp365;
nctempchar1* nctemp362= nctemp364;
nctempchar1* nctemp366=LibeStrsave(nctemp362);
tp->type=nctemp366;
tp->tbl =0;
struct nctempchar1 *nctemp378;
static struct nctempchar1 nctemp379 = {{ 5}, (char*)"void\0"};
nctemp378=&nctemp379;
nctempchar1* nctemp376= nctemp378;
nctempchar1* nctemp380=LibeStrsave(nctemp376);
tp->func=nctemp380;
struct nctempchar1 *nctemp388;
static struct nctempchar1 nctemp389 = {{ 5}, (char*)"void\0"};
nctemp388=&nctemp389;
nctempchar1* nctemp386= nctemp388;
nctempchar1* nctemp390=LibeStrsave(nctemp386);
tp->ref=nctemp390;
struct nctempchar1 *nctemp398;
static struct nctempchar1 nctemp399 = {{ 5}, (char*)"void\0"};
nctemp398=&nctemp399;
nctempchar1* nctemp396= nctemp398;
nctempchar1* nctemp400=LibeStrsave(nctemp396);
tp->descr=nctemp400;
struct nctempchar1 *nctemp408;
static struct nctempchar1 nctemp409 = {{ 5}, (char*)"void\0"};
nctemp408=&nctemp409;
nctempchar1* nctemp406= nctemp408;
nctempchar1* nctemp410=LibeStrsave(nctemp406);
tp->array=nctemp410;
struct nctempchar1 *nctemp418;
static struct nctempchar1 nctemp419 = {{ 5}, (char*)"void\0"};
nctemp418=&nctemp419;
nctempchar1* nctemp416= nctemp418;
nctempchar1* nctemp420=LibeStrsave(nctemp416);
tp->structure=nctemp420;
struct nctempchar1 *nctemp428;
static struct nctempchar1 nctemp429 = {{ 5}, (char*)"void\0"};
nctemp428=&nctemp429;
nctempchar1* nctemp426= nctemp428;
nctempchar1* nctemp430=LibeStrsave(nctemp426);
tp->ident=nctemp430;
struct nctempchar1 *nctemp438;
static struct nctempchar1 nctemp439 = {{ 5}, (char*)"void\0"};
nctemp438=&nctemp439;
nctempchar1* nctemp436= nctemp438;
nctempchar1* nctemp440=LibeStrsave(nctemp436);
tp->lval=nctemp440;
struct nctempchar1 *nctemp448;
static struct nctempchar1 nctemp449 = {{ 5}, (char*)"void\0"};
nctemp448=&nctemp449;
nctempchar1* nctemp446= nctemp448;
nctempchar1* nctemp450=LibeStrsave(nctemp446);
tp->global=nctemp450;
tp->emit =1;
tp->next =0;
tp->last =tp;
return tp;
}
struct symbol* SymMvnext (struct symbol* np)
{
int nctemp464 = (np ==0);
if(nctemp464)
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
int SymSetype (struct symbol* np,nctempchar1 *type)
{
nctempchar1* nctemp481= np->type;
nctempchar1* nctemp484= type;
nctempchar1* nctemp487=SymSetfield(nctemp481,nctemp484);
np->type=nctemp487;
return 1;
}
nctempchar1 * SymGetype (struct symbol* np)
{
return np->type;
}
int SymSetfunc (struct symbol* np,nctempchar1 *func)
{
nctempchar1* nctemp496= np->func;
nctempchar1* nctemp499= func;
nctempchar1* nctemp502=SymSetfield(nctemp496,nctemp499);
np->func=nctemp502;
return 1;
}
nctempchar1 * SymGetfunc (struct symbol* np)
{
return np->func;
}
int SymSetarray (struct symbol* np,nctempchar1 *array)
{
nctempchar1* nctemp511= np->array;
nctempchar1* nctemp514= array;
nctempchar1* nctemp517=SymSetfield(nctemp511,nctemp514);
np->array=nctemp517;
return 1;
}
nctempchar1 * SymGetarray (struct symbol* np)
{
return np->array;
}
int SymSetstruct (struct symbol* np,nctempchar1 *structure)
{
nctempchar1* nctemp526= np->structure;
nctempchar1* nctemp529= structure;
nctempchar1* nctemp532=SymSetfield(nctemp526,nctemp529);
np->structure=nctemp532;
return 1;
}
nctempchar1 * SymGetstruct (struct symbol* np)
{
return np->structure;
}
int SymSetident (struct symbol* np,nctempchar1 *ident)
{
nctempchar1* nctemp541= np->ident;
nctempchar1* nctemp544= ident;
nctempchar1* nctemp547=SymSetfield(nctemp541,nctemp544);
np->ident=nctemp547;
return 1;
}
nctempchar1 * SymGetident (struct symbol* np)
{
return np->ident;
}
int SymSetlval (struct symbol* np,nctempchar1 *lval)
{
nctempchar1* nctemp556= np->lval;
nctempchar1* nctemp559= lval;
nctempchar1* nctemp562=SymSetfield(nctemp556,nctemp559);
np->lval=nctemp562;
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
nctempchar1* nctemp583= np->ref;
nctempchar1* nctemp586= ref;
nctempchar1* nctemp589=SymSetfield(nctemp583,nctemp586);
np->ref=nctemp589;
return 1;
}
nctempchar1 * SymGetref (struct symbol* np)
{
return np->ref;
}
int SymSetdescr (struct symbol* np,nctempchar1 *descr)
{
nctempchar1* nctemp598= np->descr;
nctempchar1* nctemp601= descr;
nctempchar1* nctemp604=SymSetfield(nctemp598,nctemp601);
np->descr=nctemp604;
return 1;
}
nctempchar1 * SymGetdescr (struct symbol* np)
{
return np->descr;
}
int SymSetglobal (struct symbol* np,nctempchar1 *global)
{
nctempchar1* nctemp613= np->global;
nctempchar1* nctemp616= global;
nctempchar1* nctemp619=SymSetfield(nctemp613,nctemp616);
np->global=nctemp619;
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
int nctemp623 = (p ==0);
if(nctemp623)
{
return 0;
}
prev =0;
int nctemp632 = (p !=0);
int nctemp636=nctemp632;
while(nctemp636)
{{
next =p->next;
struct nctempchar1 *nctemp646;
static struct nctempchar1 nctemp647 = {{ 9}, (char*)"#arglist\0"};
nctemp646=&nctemp647;
nctempchar1* nctemp644= nctemp646;
nctempchar1* nctemp648= p->name;
int nctemp651=LibeStrcmp(nctemp644,nctemp648);
int nctemp641 = (nctemp651 ==0);
if(nctemp641)
{
struct nctempchar1 *nctemp658;
static struct nctempchar1 nctemp659 = {{ 6}, (char*)"#self\0"};
nctemp658=&nctemp659;
nctempchar1* nctemp656= nctemp658;
nctempchar1* nctemp660= p->name;
int nctemp663=LibeStrcmp(nctemp656,nctemp660);
int nctemp653 = (nctemp663 ==0);
if(nctemp653)
{
struct nctempchar1 *nctemp670;
static struct nctempchar1 nctemp671 = {{ 7}, (char*)"#first\0"};
nctemp670=&nctemp671;
nctempchar1* nctemp668= nctemp670;
nctempchar1* nctemp672= p->name;
int nctemp675=LibeStrcmp(nctemp668,nctemp672);
int nctemp665 = (nctemp675 ==0);
if(nctemp665)
{
int nctemp677 = (p->tbl !=0);
if(nctemp677)
{
struct symbol* nctemp682= p->tbl;
int nctemp684=SymRmtable(nctemp682);
p->tbl =0;
}
int nctemp689 = (prev !=0);
if(nctemp689)
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
int nctemp736 = (p !=0);
nctemp636=nctemp736;}return 1;
}
struct symbol* SymLook (nctempchar1 *name)
{
struct symbol* tp;
struct symbol* ap;
nctempchar1* nctemp748= name;
struct symbol* nctemp751= SymEtp;
struct symbol* nctemp753=SymLookup(nctemp748,nctemp751);
tp =nctemp753;
int nctemp741 = (tp ==0);
if(nctemp741)
{
nctempchar1* nctemp762= name;
struct symbol* nctemp765= SymLtp;
struct symbol* nctemp767=SymLookup(nctemp762,nctemp765);
tp =nctemp767;
int nctemp755 = (tp ==0);
if(nctemp755)
{
struct nctempchar1 *nctemp775;
static struct nctempchar1 nctemp776 = {{ 9}, (char*)"#arglist\0"};
nctemp775=&nctemp776;
nctempchar1* nctemp773= nctemp775;
struct symbol* nctemp777= SymLtp;
struct symbol* nctemp779=SymLookup(nctemp773,nctemp777);
tp =nctemp779;
int nctemp780 = (tp ==0);
if(nctemp780)
{
return tp;
}
struct symbol* nctemp789= tp;
struct symbol* nctemp791=SymGetable(nctemp789);
ap =nctemp791;
int nctemp792 = (ap ==0);
if(nctemp792)
{
return ap;
}
nctempchar1* nctemp804= name;
struct symbol* nctemp807= ap;
struct symbol* nctemp809=SymLookup(nctemp804,nctemp807);
tp =nctemp809;
int nctemp797 = (tp ==0);
if(nctemp797)
{
nctempchar1* nctemp815= name;
struct symbol* nctemp818= SymEtp;
struct symbol* nctemp820=SymLookup(nctemp815,nctemp818);
tp =nctemp820;
}
}
}
return tp;
}
nctempchar1 * SymSetfield (nctempchar1 *field,nctempchar1 *value)
{
nctempchar1 *nctemp823 =field;
int nctemp822 =(nctemp823!=0);
if(nctemp822)
{
RunFree(field->a);
RunFree(field);
}
nctempchar1 *nctemp831 =value;
int nctemp830 =(nctemp831==0);
if(nctemp830)
{
field=(0);
}
else{
nctempchar1* nctemp848= value;
nctempchar1* nctemp851=LibeStrsave(nctemp848);
field=nctemp851;
nctempchar1 *nctemp841 =field;
int nctemp840 =(nctemp841==0);
if(nctemp840)
{
struct nctempchar1 *nctemp856;
static struct nctempchar1 nctemp857 = {{ 14}, (char*)"Out of memory\0"};
nctemp856=&nctemp857;
nctempchar1* nctemp854= nctemp856;
int nctemp858=ErrPanic(nctemp854);
return field;
}
}
return field;
}
int SymCpytble (struct symbol* tp,struct symbol* up)
{
struct symbol* wp;
struct symbol* nctemp867= tp;
struct symbol* nctemp869=SymMvnext(nctemp867);
tp =nctemp869;
int nctemp870 = (tp !=0);
int nctemp874=nctemp870;
while(nctemp874)
{{
struct symbol* nctemp881= tp;
nctempchar1* nctemp883=SymGetname(nctemp881);
nctempchar1* nctemp879= nctemp883;
struct symbol* nctemp884= up;
struct symbol* nctemp886=SymMkname(nctemp879,nctemp884);
wp =nctemp886;
struct symbol* nctemp888= wp;
struct symbol* nctemp892= tp;
nctempchar1* nctemp894=SymGetype(nctemp892);
nctempchar1* nctemp890= nctemp894;
int nctemp895=SymSetype(nctemp888,nctemp890);
struct symbol* nctemp897= wp;
struct symbol* nctemp901= tp;
nctempchar1* nctemp903=SymGetfunc(nctemp901);
nctempchar1* nctemp899= nctemp903;
int nctemp904=SymSetfunc(nctemp897,nctemp899);
struct symbol* nctemp906= wp;
struct symbol* nctemp910= tp;
nctempchar1* nctemp912=SymGetarray(nctemp910);
nctempchar1* nctemp908= nctemp912;
int nctemp913=SymSetarray(nctemp906,nctemp908);
struct symbol* nctemp915= wp;
struct symbol* nctemp919= tp;
int nctemp921=SymGetrank(nctemp919);
int nctemp917= nctemp921;
int nctemp922=SymSetrank(nctemp915,nctemp917);
struct symbol* nctemp924= wp;
struct symbol* nctemp928= tp;
nctempchar1* nctemp930=SymGetstruct(nctemp928);
nctempchar1* nctemp926= nctemp930;
int nctemp931=SymSetstruct(nctemp924,nctemp926);
struct symbol* nctemp933= wp;
struct symbol* nctemp937= tp;
nctempchar1* nctemp939=SymGetident(nctemp937);
nctempchar1* nctemp935= nctemp939;
int nctemp940=SymSetident(nctemp933,nctemp935);
struct symbol* nctemp942= wp;
struct symbol* nctemp946= tp;
nctempchar1* nctemp948=SymGetlval(nctemp946);
nctempchar1* nctemp944= nctemp948;
int nctemp949=SymSetlval(nctemp942,nctemp944);
struct symbol* nctemp951= wp;
struct symbol* nctemp955= tp;
nctempchar1* nctemp957=SymGetref(nctemp955);
nctempchar1* nctemp953= nctemp957;
int nctemp958=SymSetref(nctemp951,nctemp953);
struct symbol* nctemp960= wp;
struct symbol* nctemp964= tp;
nctempchar1* nctemp966=SymGetdescr(nctemp964);
nctempchar1* nctemp962= nctemp966;
int nctemp967=SymSetdescr(nctemp960,nctemp962);
struct symbol* nctemp969= wp;
struct symbol* nctemp973= tp;
int nctemp975=SymGetemit(nctemp973);
int nctemp971= nctemp975;
int nctemp976=SymSetemit(nctemp969,nctemp971);
struct symbol* nctemp981= tp;
struct symbol* nctemp983=SymMvnext(nctemp981);
tp =nctemp983;
}
int nctemp984 = (tp !=0);
nctemp874=nctemp984;}return 1;
}
int SymPrsym (struct symbol* p,int level)
{
int i;
int fp;
struct symbol* tp;
fp =3;
int nctemp993 = (p ==0);
if(nctemp993)
{
return 0;
}
int nctemp998 = (p !=0);
int nctemp1002=nctemp998;
while(nctemp1002)
{{
i =0;
int nctemp1007 = (i <= level);
int nctemp1011=nctemp1007;
while(nctemp1011)
{{
int nctemp1013= fp;
struct nctempchar1 *nctemp1017;
static struct nctempchar1 nctemp1018 = {{ 2}, (char*)" \0"};
nctemp1017=&nctemp1018;
nctempchar1* nctemp1015= nctemp1017;
int nctemp1019=LibePuts(nctemp1013,nctemp1015);
int nctemp1028 = i + 1;
i =nctemp1028;
}
int nctemp1029 = (i <= level);
nctemp1011=nctemp1029;}int nctemp1034= fp;
nctempchar1* nctemp1036= p->name;
int nctemp1039=LibePuts(nctemp1034,nctemp1036);
int nctemp1041= fp;
struct nctempchar1 *nctemp1045;
static struct nctempchar1 nctemp1046 = {{ 2}, (char*)" \0"};
nctemp1045=&nctemp1046;
nctempchar1* nctemp1043= nctemp1045;
int nctemp1047=LibePuts(nctemp1041,nctemp1043);
int nctemp1049= fp;
nctempchar1* nctemp1051= p->type;
int nctemp1054=LibePuts(nctemp1049,nctemp1051);
int nctemp1056= fp;
struct nctempchar1 *nctemp1060;
static struct nctempchar1 nctemp1061 = {{ 2}, (char*)" \0"};
nctemp1060=&nctemp1061;
nctempchar1* nctemp1058= nctemp1060;
int nctemp1062=LibePuts(nctemp1056,nctemp1058);
int nctemp1064= fp;
nctempchar1* nctemp1066= p->func;
int nctemp1069=LibePuts(nctemp1064,nctemp1066);
int nctemp1071= fp;
struct nctempchar1 *nctemp1075;
static struct nctempchar1 nctemp1076 = {{ 2}, (char*)" \0"};
nctemp1075=&nctemp1076;
nctempchar1* nctemp1073= nctemp1075;
int nctemp1077=LibePuts(nctemp1071,nctemp1073);
int nctemp1079= fp;
nctempchar1* nctemp1081= p->array;
int nctemp1084=LibePuts(nctemp1079,nctemp1081);
int nctemp1086= fp;
struct nctempchar1 *nctemp1090;
static struct nctempchar1 nctemp1091 = {{ 2}, (char*)" \0"};
nctemp1090=&nctemp1091;
nctempchar1* nctemp1088= nctemp1090;
int nctemp1092=LibePuts(nctemp1086,nctemp1088);
int nctemp1094= fp;
int nctemp1096= p->rank;
int nctemp1098=LibePuti(nctemp1094,nctemp1096);
int nctemp1100= fp;
struct nctempchar1 *nctemp1104;
static struct nctempchar1 nctemp1105 = {{ 2}, (char*)" \0"};
nctemp1104=&nctemp1105;
nctempchar1* nctemp1102= nctemp1104;
int nctemp1106=LibePuts(nctemp1100,nctemp1102);
int nctemp1108= fp;
int nctemp1110= p->emit;
int nctemp1112=LibePuti(nctemp1108,nctemp1110);
int nctemp1114= fp;
struct nctempchar1 *nctemp1118;
static struct nctempchar1 nctemp1119 = {{ 2}, (char*)" \0"};
nctemp1118=&nctemp1119;
nctempchar1* nctemp1116= nctemp1118;
int nctemp1120=LibePuts(nctemp1114,nctemp1116);
int nctemp1122= fp;
nctempchar1* nctemp1124= p->structure;
int nctemp1127=LibePuts(nctemp1122,nctemp1124);
int nctemp1129= fp;
struct nctempchar1 *nctemp1133;
static struct nctempchar1 nctemp1134 = {{ 2}, (char*)" \0"};
nctemp1133=&nctemp1134;
nctempchar1* nctemp1131= nctemp1133;
int nctemp1135=LibePuts(nctemp1129,nctemp1131);
int nctemp1137= fp;
nctempchar1* nctemp1139= p->ident;
int nctemp1142=LibePuts(nctemp1137,nctemp1139);
int nctemp1144= fp;
struct nctempchar1 *nctemp1148;
static struct nctempchar1 nctemp1149 = {{ 2}, (char*)" \0"};
nctemp1148=&nctemp1149;
nctempchar1* nctemp1146= nctemp1148;
int nctemp1150=LibePuts(nctemp1144,nctemp1146);
int nctemp1152= fp;
nctempchar1* nctemp1154= p->lval;
int nctemp1157=LibePuts(nctemp1152,nctemp1154);
int nctemp1159= fp;
struct nctempchar1 *nctemp1163;
static struct nctempchar1 nctemp1164 = {{ 2}, (char*)" \0"};
nctemp1163=&nctemp1164;
nctempchar1* nctemp1161= nctemp1163;
int nctemp1165=LibePuts(nctemp1159,nctemp1161);
int nctemp1167= fp;
nctempchar1* nctemp1169= p->ref;
int nctemp1172=LibePuts(nctemp1167,nctemp1169);
int nctemp1174= fp;
struct nctempchar1 *nctemp1178;
static struct nctempchar1 nctemp1179 = {{ 2}, (char*)" \0"};
nctemp1178=&nctemp1179;
nctempchar1* nctemp1176= nctemp1178;
int nctemp1180=LibePuts(nctemp1174,nctemp1176);
int nctemp1182= fp;
nctempchar1* nctemp1184= p->descr;
int nctemp1187=LibePuts(nctemp1182,nctemp1184);
int nctemp1189= fp;
struct nctempchar1 *nctemp1193;
static struct nctempchar1 nctemp1194 = {{ 2}, (char*)" \0"};
nctemp1193=&nctemp1194;
nctempchar1* nctemp1191= nctemp1193;
int nctemp1195=LibePuts(nctemp1189,nctemp1191);
int nctemp1197= fp;
nctempchar1* nctemp1199= p->global;
int nctemp1202=LibePuts(nctemp1197,nctemp1199);
int nctemp1204= fp;
struct nctempchar1 *nctemp1208;
static struct nctempchar1 nctemp1209 = {{ 2}, (char*)" \0"};
nctemp1208=&nctemp1209;
nctempchar1* nctemp1206= nctemp1208;
int nctemp1210=LibePuts(nctemp1204,nctemp1206);
int nctemp1212= fp;
struct nctempchar1 *nctemp1216;
static struct nctempchar1 nctemp1217 = {{ 3}, (char*)"\n\0"};
nctemp1216=&nctemp1217;
nctempchar1* nctemp1214= nctemp1216;
int nctemp1218=LibePuts(nctemp1212,nctemp1214);
int nctemp1220= fp;
int nctemp1222=LibeFlush(nctemp1220);
int nctemp1223 = (p->tbl !=0);
if(nctemp1223)
{
tp =p->tbl;
int nctemp1239 = level + 1;
level =nctemp1239;
struct symbol* nctemp1241= tp;
int nctemp1243= level;
int nctemp1245=SymPrsym(nctemp1241,nctemp1243);
int nctemp1254 = level - 1;
level =nctemp1254;
}
p =p->next;
}
int nctemp1259 = (p !=0);
nctemp1002=nctemp1259;}int nctemp1264= fp;
int nctemp1266=LibeFlush(nctemp1264);
return 1;
}
