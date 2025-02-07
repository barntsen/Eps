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
int PtreeRmnode (struct tree* p)
{
int nctemp2 = (p ==0);
if(nctemp2)
{
return 1;
}
RunFree(p->name->a);
RunFree(p->name);
RunFree(p->def->a);
RunFree(p->def);
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
int nctemp40 = (p !=0);
if(nctemp40)
{
struct tree* nctemp45= p->child;
int nctemp47=PtreeRmtree(nctemp45);
struct tree* nctemp49= p->sister;
int nctemp51=PtreeRmtree(nctemp49);
struct tree* nctemp53= p;
int nctemp55=PtreeRmnode(nctemp53);
}
return 1;
}
struct tree* PtreeMknode (nctempchar1 *name,nctempchar1 *def)
{
struct tree* p;
struct tree *nctemp61=(struct tree*)RunMalloc(sizeof(struct tree));
p =nctemp61;
nctempchar1* nctemp68= def;
nctempchar1* nctemp71=LibeStrsave(nctemp68);
p->def=nctemp71;
nctempchar1* nctemp77= name;
nctempchar1* nctemp80=LibeStrsave(nctemp77);
p->name=nctemp80;
struct nctempchar1 *nctemp88;
static struct nctempchar1 nctemp89 = {{ 5}, (char*)"void\0"};
nctemp88=&nctemp89;
nctempchar1* nctemp86= nctemp88;
nctempchar1* nctemp90=LibeStrsave(nctemp86);
p->type=nctemp90;
struct nctempchar1 *nctemp98;
static struct nctempchar1 nctemp99 = {{ 5}, (char*)"void\0"};
nctemp98=&nctemp99;
nctempchar1* nctemp96= nctemp98;
nctempchar1* nctemp100=LibeStrsave(nctemp96);
p->structure=nctemp100;
p->line =0;
struct nctempchar1 *nctemp112;
static struct nctempchar1 nctemp113 = {{ 5}, (char*)"void\0"};
nctemp112=&nctemp113;
nctempchar1* nctemp110= nctemp112;
nctempchar1* nctemp114=LibeStrsave(nctemp110);
p->file=nctemp114;
struct nctempchar1 *nctemp122;
static struct nctempchar1 nctemp123 = {{ 5}, (char*)"void\0"};
nctemp122=&nctemp123;
nctempchar1* nctemp120= nctemp122;
nctempchar1* nctemp124=LibeStrsave(nctemp120);
p->tempr=nctemp124;
struct nctempchar1 *nctemp132;
static struct nctempchar1 nctemp133 = {{ 5}, (char*)"void\0"};
nctemp132=&nctemp133;
nctempchar1* nctemp130= nctemp132;
nctempchar1* nctemp134=LibeStrsave(nctemp130);
p->tempi=nctemp134;
struct nctempchar1 *nctemp142;
static struct nctempchar1 nctemp143 = {{ 5}, (char*)"void\0"};
nctemp142=&nctemp143;
nctempchar1* nctemp140= nctemp142;
nctempchar1* nctemp144=LibeStrsave(nctemp140);
p->lval=nctemp144;
struct nctempchar1 *nctemp152;
static struct nctempchar1 nctemp153 = {{ 5}, (char*)"void\0"};
nctemp152=&nctemp153;
nctempchar1* nctemp150= nctemp152;
nctempchar1* nctemp154=LibeStrsave(nctemp150);
p->array=nctemp154;
struct nctempchar1 *nctemp162;
static struct nctempchar1 nctemp163 = {{ 5}, (char*)"void\0"};
nctemp162=&nctemp163;
nctempchar1* nctemp160= nctemp162;
nctempchar1* nctemp164=LibeStrsave(nctemp160);
p->paral=nctemp164;
struct nctempchar1 *nctemp172;
static struct nctempchar1 nctemp173 = {{ 5}, (char*)"void\0"};
nctemp172=&nctemp173;
nctempchar1* nctemp170= nctemp172;
nctempchar1* nctemp174=LibeStrsave(nctemp170);
p->ref=nctemp174;
struct nctempchar1 *nctemp182;
static struct nctempchar1 nctemp183 = {{ 5}, (char*)"void\0"};
nctemp182=&nctemp183;
nctempchar1* nctemp180= nctemp182;
nctempchar1* nctemp184=LibeStrsave(nctemp180);
p->descr=nctemp184;
struct nctempchar1 *nctemp192;
static struct nctempchar1 nctemp193 = {{ 5}, (char*)"void\0"};
nctemp192=&nctemp193;
nctempchar1* nctemp190= nctemp192;
nctempchar1* nctemp194=LibeStrsave(nctemp190);
p->global=nctemp194;
struct nctempchar1 *nctemp202;
static struct nctempchar1 nctemp203 = {{ 5}, (char*)"void\0"};
nctemp202=&nctemp203;
nctempchar1* nctemp200= nctemp202;
nctempchar1* nctemp204=LibeStrsave(nctemp200);
p->forw=nctemp204;
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
int nctemp222 = (p ==0);
if(nctemp222)
{
parent->child =child;
return 1;
}
prev =parent->child;
p =p->sister;
int nctemp239 = (p !=0);
int nctemp247=nctemp239;
while(nctemp247)
{{
prev =p;
}
p =p->sister;
int nctemp252 = (p !=0);
nctemp247=nctemp252;}prev->sister =child;
return 1;
}
int PtreeAddsister (struct tree* sister,struct tree* newnode)
{
struct tree* p;
struct tree* prev;
p =sister;
prev =p;
p =p->sister;
int nctemp273 = (p !=0);
int nctemp281=nctemp273;
while(nctemp281)
{{
prev =p;
}
p =p->sister;
int nctemp286 = (p !=0);
nctemp281=nctemp286;}prev->sister =newnode;
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
nctempchar1* nctemp312= value;
nctempchar1* nctemp315=LibeStrsave(nctemp312);
field=nctemp315;
RunFree(t->a);
RunFree(t);
return field;
}
int PtreeSetname (struct tree* p,nctempchar1 *name)
{
nctempchar1 *nctemp325 =name;
int nctemp324 =(nctemp325!=0);
int nctemp330 = (p !=0);
int nctemp321 = (nctemp324 && nctemp330);
if(nctemp321)
{
RunFree(p->name->a);
RunFree(p->name);
nctempchar1* nctemp342= name;
nctempchar1* nctemp345=LibeStrsave(nctemp342);
p->name=nctemp345;
}
return 1;
}
nctempchar1 * PtreeGetname (struct tree* p)
{
return p->name;
}
int PtreeSetdef (struct tree* p,nctempchar1 *def)
{
nctempchar1 *nctemp353 =def;
int nctemp352 =(nctemp353!=0);
int nctemp358 = (p !=0);
int nctemp349 = (nctemp352 && nctemp358);
if(nctemp349)
{
RunFree(p->def->a);
RunFree(p->def);
nctempchar1* nctemp370= def;
nctempchar1* nctemp373=LibeStrsave(nctemp370);
p->def=nctemp373;
}
return 1;
}
nctempchar1 * PtreeGetdef (struct tree* p)
{
return p->def;
}
int PtreeSetype (struct tree* p,nctempchar1 *type)
{
nctempchar1 *nctemp381 =type;
int nctemp380 =(nctemp381!=0);
int nctemp386 = (p !=0);
int nctemp377 = (nctemp380 && nctemp386);
if(nctemp377)
{
RunFree(p->type->a);
RunFree(p->type);
nctempchar1* nctemp398= type;
nctempchar1* nctemp401=LibeStrsave(nctemp398);
p->type=nctemp401;
}
return 1;
}
nctempchar1 * PtreeGetype (struct tree* p)
{
return p->type;
}
int PtreeSetstruct (struct tree* p,nctempchar1 *structure)
{
nctempchar1 *nctemp409 =structure;
int nctemp408 =(nctemp409!=0);
int nctemp414 = (p !=0);
int nctemp405 = (nctemp408 && nctemp414);
if(nctemp405)
{
RunFree(p->structure->a);
RunFree(p->structure);
nctempchar1* nctemp426= structure;
nctempchar1* nctemp429=LibeStrsave(nctemp426);
p->structure=nctemp429;
}
return 1;
}
nctempchar1 * PtreeGetstruct (struct tree* p)
{
return p->structure;
}
int PtreeSetempr (struct tree* p,nctempchar1 *tempr)
{
nctempchar1 *nctemp437 =tempr;
int nctemp436 =(nctemp437!=0);
int nctemp442 = (p !=0);
int nctemp433 = (nctemp436 && nctemp442);
if(nctemp433)
{
RunFree(p->tempr->a);
RunFree(p->tempr);
nctempchar1* nctemp454= tempr;
nctempchar1* nctemp457=LibeStrsave(nctemp454);
p->tempr=nctemp457;
}
return 1;
}
nctempchar1 * PtreeGetempr (struct tree* p)
{
return p->tempr;
}
int PtreeSetempi (struct tree* p,nctempchar1 *tempi)
{
nctempchar1 *nctemp465 =tempi;
int nctemp464 =(nctemp465!=0);
int nctemp470 = (p !=0);
int nctemp461 = (nctemp464 && nctemp470);
if(nctemp461)
{
RunFree(p->tempi->a);
RunFree(p->tempi);
nctempchar1* nctemp482= tempi;
nctempchar1* nctemp485=LibeStrsave(nctemp482);
p->tempi=nctemp485;
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
nctempchar1 *nctemp501 =file;
int nctemp500 =(nctemp501!=0);
int nctemp506 = (p !=0);
int nctemp497 = (nctemp500 && nctemp506);
if(nctemp497)
{
RunFree(p->file->a);
RunFree(p->file);
nctempchar1* nctemp518= file;
nctempchar1* nctemp521=LibeStrsave(nctemp518);
p->file=nctemp521;
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
nctempchar1 *nctemp533 =lval;
int nctemp532 =(nctemp533!=0);
int nctemp538 = (p !=0);
int nctemp529 = (nctemp532 && nctemp538);
if(nctemp529)
{
RunFree(p->lval->a);
RunFree(p->lval);
nctempchar1* nctemp550= lval;
nctempchar1* nctemp553=LibeStrsave(nctemp550);
p->lval=nctemp553;
}
return 1;
}
nctempchar1 * PtreeGetlval (struct tree* p)
{
return p->lval;
}
int PtreeSetarray (struct tree* p,nctempchar1 *array)
{
nctempchar1 *nctemp561 =array;
int nctemp560 =(nctemp561!=0);
int nctemp566 = (p !=0);
int nctemp557 = (nctemp560 && nctemp566);
if(nctemp557)
{
RunFree(p->array->a);
RunFree(p->array);
nctempchar1* nctemp578= array;
nctempchar1* nctemp581=LibeStrsave(nctemp578);
p->array=nctemp581;
}
return 1;
}
nctempchar1 * PtreeGetarray (struct tree* p)
{
return p->array;
}
int PtreeSetparallel (struct tree* p,nctempchar1 *paral)
{
nctempchar1 *nctemp589 =paral;
int nctemp588 =(nctemp589!=0);
int nctemp594 = (p !=0);
int nctemp585 = (nctemp588 && nctemp594);
if(nctemp585)
{
RunFree(p->paral->a);
RunFree(p->paral);
nctempchar1* nctemp606= paral;
nctempchar1* nctemp609=LibeStrsave(nctemp606);
p->paral=nctemp609;
}
return 1;
}
nctempchar1 * PtreeGetparallel (struct tree* p)
{
return p->paral;
}
int PtreeSetref (struct tree* p,nctempchar1 *ref)
{
nctempchar1 *nctemp617 =ref;
int nctemp616 =(nctemp617!=0);
int nctemp622 = (p !=0);
int nctemp613 = (nctemp616 && nctemp622);
if(nctemp613)
{
RunFree(p->ref->a);
RunFree(p->ref);
nctempchar1* nctemp634= ref;
nctempchar1* nctemp637=LibeStrsave(nctemp634);
p->ref=nctemp637;
}
return 1;
}
nctempchar1 * PtreeGetref (struct tree* p)
{
return p->ref;
}
int PtreeSetdescr (struct tree* p,nctempchar1 *descr)
{
nctempchar1 *nctemp645 =descr;
int nctemp644 =(nctemp645!=0);
int nctemp650 = (p !=0);
int nctemp641 = (nctemp644 && nctemp650);
if(nctemp641)
{
RunFree(p->descr->a);
RunFree(p->descr);
nctempchar1* nctemp662= descr;
nctempchar1* nctemp665=LibeStrsave(nctemp662);
p->descr=nctemp665;
}
return 1;
}
nctempchar1 * PtreeGetdescr (struct tree* p)
{
return p->descr;
}
int PtreeSetglobal (struct tree* p,nctempchar1 *global)
{
nctempchar1 *nctemp673 =global;
int nctemp672 =(nctemp673!=0);
int nctemp678 = (p !=0);
int nctemp669 = (nctemp672 && nctemp678);
if(nctemp669)
{
RunFree(p->global->a);
RunFree(p->global);
nctempchar1* nctemp690= global;
nctempchar1* nctemp693=LibeStrsave(nctemp690);
p->global=nctemp693;
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
nctempchar1 *nctemp713 =forw;
int nctemp712 =(nctemp713!=0);
int nctemp718 = (p !=0);
int nctemp709 = (nctemp712 && nctemp718);
if(nctemp709)
{
RunFree(p->forw->a);
RunFree(p->forw);
nctempchar1* nctemp730= forw;
nctempchar1* nctemp733=LibeStrsave(nctemp730);
p->forw=nctemp733;
}
return 1;
}
nctempchar1 * PtreeGetforw (struct tree* p)
{
return p->forw;
}
int PtreePrtree (struct tree* p,int level)
{
int i;
int fp;
fp =3;
int nctemp741 = (p !=0);
if(nctemp741)
{
i =0;
int nctemp749 = (i < level);
int nctemp753=nctemp749;
while(nctemp753)
{{
int nctemp755= fp;
struct nctempchar1 *nctemp759;
static struct nctempchar1 nctemp760 = {{ 2}, (char*)" \0"};
nctemp759=&nctemp760;
nctempchar1* nctemp757= nctemp759;
int nctemp761=LibePuts(nctemp755,nctemp757);
int nctemp770 = i + 1;
i =nctemp770;
}
int nctemp771 = (i < level);
nctemp753=nctemp771;}int nctemp776= fp;
nctempchar1* nctemp778= p->name;
int nctemp781=LibePuts(nctemp776,nctemp778);
int nctemp783= fp;
struct nctempchar1 *nctemp787;
static struct nctempchar1 nctemp788 = {{ 2}, (char*)" \0"};
nctemp787=&nctemp788;
nctempchar1* nctemp785= nctemp787;
int nctemp789=LibePuts(nctemp783,nctemp785);
int nctemp791= fp;
nctempchar1* nctemp793= p->def;
int nctemp796=LibePuts(nctemp791,nctemp793);
int nctemp798= fp;
struct nctempchar1 *nctemp802;
static struct nctempchar1 nctemp803 = {{ 2}, (char*)" \0"};
nctemp802=&nctemp803;
nctempchar1* nctemp800= nctemp802;
int nctemp804=LibePuts(nctemp798,nctemp800);
int nctemp806= fp;
nctempchar1* nctemp808= p->type;
int nctemp811=LibePuts(nctemp806,nctemp808);
int nctemp813= fp;
struct nctempchar1 *nctemp817;
static struct nctempchar1 nctemp818 = {{ 2}, (char*)" \0"};
nctemp817=&nctemp818;
nctempchar1* nctemp815= nctemp817;
int nctemp819=LibePuts(nctemp813,nctemp815);
int nctemp821= fp;
nctempchar1* nctemp823= p->structure;
int nctemp826=LibePuts(nctemp821,nctemp823);
int nctemp828= fp;
struct nctempchar1 *nctemp832;
static struct nctempchar1 nctemp833 = {{ 2}, (char*)" \0"};
nctemp832=&nctemp833;
nctempchar1* nctemp830= nctemp832;
int nctemp834=LibePuts(nctemp828,nctemp830);
int nctemp836= fp;
nctempchar1* nctemp838= p->array;
int nctemp841=LibePuts(nctemp836,nctemp838);
int nctemp843= fp;
struct nctempchar1 *nctemp847;
static struct nctempchar1 nctemp848 = {{ 2}, (char*)" \0"};
nctemp847=&nctemp848;
nctempchar1* nctemp845= nctemp847;
int nctemp849=LibePuts(nctemp843,nctemp845);
int nctemp851= fp;
nctempchar1* nctemp853= p->paral;
int nctemp856=LibePuts(nctemp851,nctemp853);
int nctemp858= fp;
struct nctempchar1 *nctemp862;
static struct nctempchar1 nctemp863 = {{ 2}, (char*)" \0"};
nctemp862=&nctemp863;
nctempchar1* nctemp860= nctemp862;
int nctemp864=LibePuts(nctemp858,nctemp860);
int nctemp866= fp;
nctempchar1* nctemp868= p->global;
int nctemp871=LibePuts(nctemp866,nctemp868);
int nctemp873= fp;
struct nctempchar1 *nctemp877;
static struct nctempchar1 nctemp878 = {{ 2}, (char*)" \0"};
nctemp877=&nctemp878;
nctempchar1* nctemp875= nctemp877;
int nctemp879=LibePuts(nctemp873,nctemp875);
int nctemp881= fp;
int nctemp883= p->rank;
int nctemp885=LibePuti(nctemp881,nctemp883);
int nctemp887= fp;
struct nctempchar1 *nctemp891;
static struct nctempchar1 nctemp892 = {{ 2}, (char*)" \0"};
nctemp891=&nctemp892;
nctempchar1* nctemp889= nctemp891;
int nctemp893=LibePuts(nctemp887,nctemp889);
int nctemp895= fp;
nctempchar1* nctemp897= p->forw;
int nctemp900=LibePuts(nctemp895,nctemp897);
int nctemp902= fp;
struct nctempchar1 *nctemp906;
static struct nctempchar1 nctemp907 = {{ 2}, (char*)" \0"};
nctemp906=&nctemp907;
nctempchar1* nctemp904= nctemp906;
int nctemp908=LibePuts(nctemp902,nctemp904);
int nctemp909 = (p->simple ==1);
if(nctemp909)
{
int nctemp914= fp;
struct nctempchar1 *nctemp918;
static struct nctempchar1 nctemp919 = {{ 7}, (char*)"simple\0"};
nctemp918=&nctemp919;
nctempchar1* nctemp916= nctemp918;
int nctemp920=LibePuts(nctemp914,nctemp916);
int nctemp922= fp;
struct nctempchar1 *nctemp926;
static struct nctempchar1 nctemp927 = {{ 2}, (char*)" \0"};
nctemp926=&nctemp927;
nctempchar1* nctemp924= nctemp926;
int nctemp928=LibePuts(nctemp922,nctemp924);
}
else{
int nctemp929 = (p->simple ==2);
if(nctemp929)
{
int nctemp934= fp;
struct nctempchar1 *nctemp938;
static struct nctempchar1 nctemp939 = {{ 6}, (char*)"empty\0"};
nctemp938=&nctemp939;
nctempchar1* nctemp936= nctemp938;
int nctemp940=LibePuts(nctemp934,nctemp936);
int nctemp942= fp;
struct nctempchar1 *nctemp946;
static struct nctempchar1 nctemp947 = {{ 2}, (char*)" \0"};
nctemp946=&nctemp947;
nctempchar1* nctemp944= nctemp946;
int nctemp948=LibePuts(nctemp942,nctemp944);
}
else{
int nctemp950= fp;
struct nctempchar1 *nctemp954;
static struct nctempchar1 nctemp955 = {{ 10}, (char*)"nonsimple\0"};
nctemp954=&nctemp955;
nctempchar1* nctemp952= nctemp954;
int nctemp956=LibePuts(nctemp950,nctemp952);
int nctemp958= fp;
struct nctempchar1 *nctemp962;
static struct nctempchar1 nctemp963 = {{ 2}, (char*)" \0"};
nctemp962=&nctemp963;
nctempchar1* nctemp960= nctemp962;
int nctemp964=LibePuts(nctemp958,nctemp960);
}
}
int nctemp965 = (p->topexpr ==1);
if(nctemp965)
{
int nctemp970= fp;
struct nctempchar1 *nctemp974;
static struct nctempchar1 nctemp975 = {{ 8}, (char*)"topexpr\0"};
nctemp974=&nctemp975;
nctempchar1* nctemp972= nctemp974;
int nctemp976=LibePuts(nctemp970,nctemp972);
int nctemp978= fp;
struct nctempchar1 *nctemp982;
static struct nctempchar1 nctemp983 = {{ 2}, (char*)" \0"};
nctemp982=&nctemp983;
nctempchar1* nctemp980= nctemp982;
int nctemp984=LibePuts(nctemp978,nctemp980);
}
else{
int nctemp985 = (p->topexpr ==0);
if(nctemp985)
{
int nctemp990= fp;
struct nctempchar1 *nctemp994;
static struct nctempchar1 nctemp995 = {{ 5}, (char*)"void\0"};
nctemp994=&nctemp995;
nctempchar1* nctemp992= nctemp994;
int nctemp996=LibePuts(nctemp990,nctemp992);
int nctemp998= fp;
struct nctempchar1 *nctemp1002;
static struct nctempchar1 nctemp1003 = {{ 2}, (char*)" \0"};
nctemp1002=&nctemp1003;
nctempchar1* nctemp1000= nctemp1002;
int nctemp1004=LibePuts(nctemp998,nctemp1000);
}
else{
int nctemp1006= fp;
struct nctempchar1 *nctemp1010;
static struct nctempchar1 nctemp1011 = {{ 10}, (char*)"nonsimple\0"};
nctemp1010=&nctemp1011;
nctempchar1* nctemp1008= nctemp1010;
int nctemp1012=LibePuts(nctemp1006,nctemp1008);
int nctemp1014= fp;
struct nctempchar1 *nctemp1018;
static struct nctempchar1 nctemp1019 = {{ 2}, (char*)" \0"};
nctemp1018=&nctemp1019;
nctempchar1* nctemp1016= nctemp1018;
int nctemp1020=LibePuts(nctemp1014,nctemp1016);
}
}
int nctemp1022= fp;
int nctemp1024= p->line;
int nctemp1026=LibePuti(nctemp1022,nctemp1024);
int nctemp1028= fp;
struct nctempchar1 *nctemp1032;
static struct nctempchar1 nctemp1033 = {{ 2}, (char*)" \0"};
nctemp1032=&nctemp1033;
nctempchar1* nctemp1030= nctemp1032;
int nctemp1034=LibePuts(nctemp1028,nctemp1030);
int nctemp1036= fp;
nctempchar1* nctemp1038= p->tempr;
int nctemp1041=LibePuts(nctemp1036,nctemp1038);
int nctemp1043= fp;
struct nctempchar1 *nctemp1047;
static struct nctempchar1 nctemp1048 = {{ 2}, (char*)" \0"};
nctemp1047=&nctemp1048;
nctempchar1* nctemp1045= nctemp1047;
int nctemp1049=LibePuts(nctemp1043,nctemp1045);
int nctemp1051= fp;
nctempchar1* nctemp1053= p->tempi;
int nctemp1056=LibePuts(nctemp1051,nctemp1053);
int nctemp1058= fp;
struct nctempchar1 *nctemp1062;
static struct nctempchar1 nctemp1063 = {{ 2}, (char*)" \0"};
nctemp1062=&nctemp1063;
nctempchar1* nctemp1060= nctemp1062;
int nctemp1064=LibePuts(nctemp1058,nctemp1060);
int nctemp1066= fp;
nctempchar1* nctemp1068= p->lval;
int nctemp1071=LibePuts(nctemp1066,nctemp1068);
int nctemp1073= fp;
struct nctempchar1 *nctemp1077;
static struct nctempchar1 nctemp1078 = {{ 2}, (char*)" \0"};
nctemp1077=&nctemp1078;
nctempchar1* nctemp1075= nctemp1077;
int nctemp1079=LibePuts(nctemp1073,nctemp1075);
int nctemp1081= fp;
nctempchar1* nctemp1083= p->ref;
int nctemp1086=LibePuts(nctemp1081,nctemp1083);
int nctemp1088= fp;
struct nctempchar1 *nctemp1092;
static struct nctempchar1 nctemp1093 = {{ 2}, (char*)" \0"};
nctemp1092=&nctemp1093;
nctempchar1* nctemp1090= nctemp1092;
int nctemp1094=LibePuts(nctemp1088,nctemp1090);
int nctemp1096= fp;
nctempchar1* nctemp1098= p->descr;
int nctemp1101=LibePuts(nctemp1096,nctemp1098);
int nctemp1103= fp;
struct nctempchar1 *nctemp1107;
static struct nctempchar1 nctemp1108 = {{ 2}, (char*)" \0"};
nctemp1107=&nctemp1108;
nctempchar1* nctemp1105= nctemp1107;
int nctemp1109=LibePuts(nctemp1103,nctemp1105);
int nctemp1111= fp;
struct nctempchar1 *nctemp1115;
static struct nctempchar1 nctemp1116 = {{ 3}, (char*)"\n\0"};
nctemp1115=&nctemp1116;
nctempchar1* nctemp1113= nctemp1115;
int nctemp1117=LibePuts(nctemp1111,nctemp1113);
int nctemp1126 = level + 1;
level =nctemp1126;
struct tree* nctemp1128= p->child;
int nctemp1130= level;
int nctemp1132=PtreePrtree(nctemp1128,nctemp1130);
int nctemp1141 = level - 1;
level =nctemp1141;
struct tree* nctemp1143= p->sister;
int nctemp1145= level;
int nctemp1147=PtreePrtree(nctemp1143,nctemp1145);
}
int nctemp1149= fp;
int nctemp1151=LibeFlush(nctemp1149);
return 1;
}
