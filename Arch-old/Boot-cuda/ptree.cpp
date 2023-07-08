/*  Translated by epsc  version December 2021 */
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
extern "C" {
#include <stdlib.h>
#include <string.h>
}
#define NBLOCKS 256
#define NTHREADS 64000
void *GpuNew(int n);
void *GpuDelete(void *f);
void *GpuError();
int LibeArrayex (int line,nctempchar1 *name,int ival,int index,int bound);
int LibeClearerr ();
int LibeGeterrno ();
nctempchar1* LibeGeterrstr ();
struct MainArg {nctempchar1 *arg;
};
struct nctempMainArg1 {int d[1]; struct MainArg *a; } ;
struct nctempMainArg2 {int d[2]; struct MainArg *a; } ;
struct nctempMainArg3 {int d[3]; struct MainArg *a; } ;
struct nctempMainArg4 {int d[4]; struct MainArg *a; } ;
int Main (struct nctempMainArg1 *MainArgs);
int LibeInit ();
int LibeExit ();
nctempchar1* LibeGetenv (nctempchar1 *name);
int LibeOpen (nctempchar1 *name,nctempchar1 *mode);
int LibeClose (int fp);
int LibeGetc (int fp);
int LibeUngetc (int fp);
int LibeGetw (int fp,nctempchar1 *text);
int LibePutc (int fp,int c);
int LibePuts (int fp,nctempchar1 *s);
int LibePuti (int fp,int ival);
int LibePutf (int fp,float fval);
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
int LibeClock ();
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
int ScanInit (nctempchar1 *infile);
int ScanGetok ();
int ScanSetline (int lineno);
int ScanGetline ();
int ScanIncline ();
nctempchar1* ScanGetext ();
nctempchar1* ScanGetfile ();
nctempchar1* ScanSetfile (nctempchar1 *fname);
nctempchar1* ScanPath ();
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
struct nctemptree1 {int d[1]; struct tree *a; } ;
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
nctempchar1* PtreeSetfield (nctempchar1 *field,nctempchar1 *value);
int PtreeInit ()
{
return 1;
}
int PtreeRmtree (struct tree* p)
{
int nctemp2 = (p !=0);
if(nctemp2)
{
struct tree* nctemp7= p->child;
int nctemp9=PtreeRmtree(nctemp7);
struct tree* nctemp11= p->sister;
int nctemp13=PtreeRmtree(nctemp11);
struct tree* nctemp15= p;
int nctemp17=PtreeRmnode(nctemp15);
}
return 1;
}
int PtreeRmnode (struct tree* p)
{
int nctemp19 = (p ==0);
if(nctemp19)
{
return 1;
}
GpuDelete(p->name->a);
GpuDelete(p->def->a);
GpuDelete(p->type->a);
GpuDelete(p->structure->a);
GpuDelete(p->tempr->a);
GpuDelete(p->tempi->a);
GpuDelete(p->lval->a);
GpuDelete(p->array->a);
GpuDelete(p->ref->a);
GpuDelete(p->descr->a);
return 1;
}
struct tree* PtreeMknode (nctempchar1 *name,nctempchar1 *def)
{
struct tree* p;
struct tree *nctemp64=(struct tree*)GpuNew(sizeof(struct tree));
p =nctemp64;
int nctemp57 = (p ==0);
if(nctemp57)
{
struct nctempchar1 *nctemp70;
struct nctempchar1 nctemp71 = {{ 14}, (char*)"Out of memory"};
nctemp70=&nctemp71;
nctempchar1* nctemp68= nctemp70;
int nctemp72=ErrPanic(nctemp68);
}
nctempchar1* nctemp81= def;
nctempchar1* nctemp84=LibeStrsave(nctemp81);
p->def=nctemp84;
nctempchar1 *nctemp74 =p->def;
int nctemp73 =(nctemp74==0);
if(nctemp73)
{
struct nctempchar1 *nctemp89;
struct nctempchar1 nctemp90 = {{ 14}, (char*)"Out of memory"};
nctemp89=&nctemp90;
nctempchar1* nctemp87= nctemp89;
int nctemp91=ErrPanic(nctemp87);
}
nctempchar1* nctemp100= name;
nctempchar1* nctemp103=LibeStrsave(nctemp100);
p->name=nctemp103;
nctempchar1 *nctemp93 =p->name;
int nctemp92 =(nctemp93==0);
if(nctemp92)
{
struct nctempchar1 *nctemp108;
struct nctempchar1 nctemp109 = {{ 14}, (char*)"Out of memory"};
nctemp108=&nctemp109;
nctempchar1* nctemp106= nctemp108;
int nctemp110=ErrPanic(nctemp106);
}
struct nctempchar1 *nctemp118;
struct nctempchar1 nctemp119 = {{ 5}, (char*)"void"};
nctemp118=&nctemp119;
nctempchar1* nctemp116= nctemp118;
nctempchar1* nctemp120=LibeStrsave(nctemp116);
p->type=nctemp120;
struct nctempchar1 *nctemp128;
struct nctempchar1 nctemp129 = {{ 5}, (char*)"void"};
nctemp128=&nctemp129;
nctempchar1* nctemp126= nctemp128;
nctempchar1* nctemp130=LibeStrsave(nctemp126);
p->structure=nctemp130;
int nctemp135=ScanGetline();
p->line =nctemp135;
nctempchar1* nctemp143=ScanGetfile();
nctempchar1* nctemp141= nctemp143;
nctempchar1* nctemp144=LibeStrsave(nctemp141);
p->file=nctemp144;
struct nctempchar1 *nctemp152;
struct nctempchar1 nctemp153 = {{ 5}, (char*)"void"};
nctemp152=&nctemp153;
nctempchar1* nctemp150= nctemp152;
nctempchar1* nctemp154=LibeStrsave(nctemp150);
p->tempr=nctemp154;
struct nctempchar1 *nctemp162;
struct nctempchar1 nctemp163 = {{ 5}, (char*)"void"};
nctemp162=&nctemp163;
nctempchar1* nctemp160= nctemp162;
nctempchar1* nctemp164=LibeStrsave(nctemp160);
p->tempi=nctemp164;
struct nctempchar1 *nctemp172;
struct nctempchar1 nctemp173 = {{ 5}, (char*)"void"};
nctemp172=&nctemp173;
nctempchar1* nctemp170= nctemp172;
nctempchar1* nctemp174=LibeStrsave(nctemp170);
p->lval=nctemp174;
struct nctempchar1 *nctemp182;
struct nctempchar1 nctemp183 = {{ 5}, (char*)"void"};
nctemp182=&nctemp183;
nctempchar1* nctemp180= nctemp182;
nctempchar1* nctemp184=LibeStrsave(nctemp180);
p->array=nctemp184;
struct nctempchar1 *nctemp192;
struct nctempchar1 nctemp193 = {{ 5}, (char*)"void"};
nctemp192=&nctemp193;
nctempchar1* nctemp190= nctemp192;
nctempchar1* nctemp194=LibeStrsave(nctemp190);
p->paral=nctemp194;
struct nctempchar1 *nctemp202;
struct nctempchar1 nctemp203 = {{ 5}, (char*)"void"};
nctemp202=&nctemp203;
nctempchar1* nctemp200= nctemp202;
nctempchar1* nctemp204=LibeStrsave(nctemp200);
p->ref=nctemp204;
struct nctempchar1 *nctemp212;
struct nctempchar1 nctemp213 = {{ 5}, (char*)"void"};
nctemp212=&nctemp213;
nctempchar1* nctemp210= nctemp212;
nctempchar1* nctemp214=LibeStrsave(nctemp210);
p->descr=nctemp214;
struct nctempchar1 *nctemp222;
struct nctempchar1 nctemp223 = {{ 5}, (char*)"void"};
nctemp222=&nctemp223;
nctempchar1* nctemp220= nctemp222;
nctempchar1* nctemp224=LibeStrsave(nctemp220);
p->global=nctemp224;
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
int nctemp242 = (p ==0);
if(nctemp242)
{
parent->child =child;
return 1;
}
prev =parent->child;
p =p->sister;
int nctemp259 = (p !=0);
int nctemp267=nctemp259;
while(nctemp267)
{{
prev =p;
}
p =p->sister;
int nctemp272 = (p !=0);
nctemp267=nctemp272;}prev->sister =child;
return 1;
}
int PtreeAddsister (struct tree* sister,struct tree* newnode)
{
struct tree* p;
struct tree* prev;
p =sister;
prev =p;
p =p->sister;
int nctemp293 = (p !=0);
int nctemp301=nctemp293;
while(nctemp301)
{{
prev =p;
}
p =p->sister;
int nctemp306 = (p !=0);
nctemp301=nctemp306;}prev->sister =newnode;
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
int PtreeSetname (struct tree* p,nctempchar1 *name)
{
nctempchar1* nctemp326= p->name;
nctempchar1* nctemp329= name;
nctempchar1* nctemp332=PtreeSetfield(nctemp326,nctemp329);
p->name=nctemp332;
return 1;
}
nctempchar1 * PtreeGetname (struct tree* p)
{
return p->name;
}
int PtreeSetdef (struct tree* p,nctempchar1 *def)
{
nctempchar1* nctemp341= p->def;
nctempchar1* nctemp344= def;
nctempchar1* nctemp347=PtreeSetfield(nctemp341,nctemp344);
p->def=nctemp347;
return 1;
}
nctempchar1 * PtreeGetdef (struct tree* p)
{
return p->def;
}
int PtreeSetype (struct tree* p,nctempchar1 *type)
{
nctempchar1* nctemp356= p->type;
nctempchar1* nctemp359= type;
nctempchar1* nctemp362=PtreeSetfield(nctemp356,nctemp359);
p->type=nctemp362;
return 1;
}
nctempchar1 * PtreeGetype (struct tree* p)
{
return p->type;
}
int PtreeSetstruct (struct tree* p,nctempchar1 *structure)
{
nctempchar1* nctemp371= p->structure;
nctempchar1* nctemp374= structure;
nctempchar1* nctemp377=PtreeSetfield(nctemp371,nctemp374);
p->structure=nctemp377;
return 1;
}
nctempchar1 * PtreeGetstruct (struct tree* p)
{
return p->structure;
}
int PtreeSetempr (struct tree* p,nctempchar1 *tempr)
{
nctempchar1* nctemp386= p->tempr;
nctempchar1* nctemp389= tempr;
nctempchar1* nctemp392=PtreeSetfield(nctemp386,nctemp389);
p->tempr=nctemp392;
return 1;
}
nctempchar1 * PtreeGetempr (struct tree* p)
{
return p->tempr;
}
int PtreeSetempi (struct tree* p,nctempchar1 *tempi)
{
nctempchar1* nctemp401= p->tempi;
nctempchar1* nctemp404= tempi;
nctempchar1* nctemp407=PtreeSetfield(nctemp401,nctemp404);
p->tempi=nctemp407;
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
nctempchar1* nctemp430= p->lval;
nctempchar1* nctemp433= lval;
nctempchar1* nctemp436=PtreeSetfield(nctemp430,nctemp433);
p->lval=nctemp436;
return 1;
}
nctempchar1 * PtreeGetlval (struct tree* p)
{
return p->lval;
}
int PtreeSetarray (struct tree* p,nctempchar1 *array)
{
nctempchar1* nctemp445= p->array;
nctempchar1* nctemp448= array;
nctempchar1* nctemp451=PtreeSetfield(nctemp445,nctemp448);
p->array=nctemp451;
return 1;
}
nctempchar1 * PtreeGetarray (struct tree* p)
{
return p->array;
}
int PtreeSetparallel (struct tree* p,nctempchar1 *paral)
{
nctempchar1* nctemp460= p->paral;
nctempchar1* nctemp463= paral;
nctempchar1* nctemp466=PtreeSetfield(nctemp460,nctemp463);
p->paral=nctemp466;
return 1;
}
nctempchar1 * PtreeGetparallel (struct tree* p)
{
return p->paral;
}
int PtreeSetref (struct tree* p,nctempchar1 *ref)
{
nctempchar1* nctemp475= p->ref;
nctempchar1* nctemp478= ref;
nctempchar1* nctemp481=PtreeSetfield(nctemp475,nctemp478);
p->ref=nctemp481;
return 1;
}
nctempchar1 * PtreeGetref (struct tree* p)
{
return p->ref;
}
int PtreeSetdescr (struct tree* p,nctempchar1 *descr)
{
nctempchar1* nctemp490= p->descr;
nctempchar1* nctemp493= descr;
nctempchar1* nctemp496=PtreeSetfield(nctemp490,nctemp493);
p->descr=nctemp496;
return 1;
}
nctempchar1 * PtreeGetdescr (struct tree* p)
{
return p->descr;
}
int PtreeSetglobal (struct tree* p,nctempchar1 *global)
{
nctempchar1* nctemp505= p->global;
nctempchar1* nctemp508= global;
nctempchar1* nctemp511=PtreeSetfield(nctemp505,nctemp508);
p->global=nctemp511;
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
nctempchar1 * PtreeSetfield (nctempchar1 *field,nctempchar1 *value)
{
nctempchar1 *nctemp528 =field;
int nctemp527 =(nctemp528!=0);
if(nctemp527)
{
GpuDelete(field->a);
}
nctempchar1 *nctemp536 =value;
int nctemp535 =(nctemp536==0);
if(nctemp535)
{
field=(0);
}
else{
nctempchar1* nctemp553= value;
nctempchar1* nctemp556=LibeStrsave(nctemp553);
field=nctemp556;
nctempchar1 *nctemp546 =field;
int nctemp545 =(nctemp546==0);
if(nctemp545)
{
struct nctempchar1 *nctemp561;
struct nctempchar1 nctemp562 = {{ 14}, (char*)"Out of memory"};
nctemp561=&nctemp562;
nctempchar1* nctemp559= nctemp561;
int nctemp563=ErrPanic(nctemp559);
}
}
return field;
}
int PtreePrtree (struct tree* p,int level)
{
int i;
int fp;
fp =3;
int nctemp570 = (p !=0);
if(nctemp570)
{
i =0;
int nctemp578 = (i < level);
int nctemp582=nctemp578;
while(nctemp582)
{{
int nctemp584= fp;
struct nctempchar1 *nctemp588;
struct nctempchar1 nctemp589 = {{ 2}, (char*)" "};
nctemp588=&nctemp589;
nctempchar1* nctemp586= nctemp588;
int nctemp590=LibePuts(nctemp584,nctemp586);
int nctemp599 = i + 1;
i =nctemp599;
}
int nctemp600 = (i < level);
nctemp582=nctemp600;}int nctemp605= fp;
nctempchar1* nctemp607= p->name;
int nctemp610=LibePuts(nctemp605,nctemp607);
int nctemp612= fp;
struct nctempchar1 *nctemp616;
struct nctempchar1 nctemp617 = {{ 2}, (char*)" "};
nctemp616=&nctemp617;
nctempchar1* nctemp614= nctemp616;
int nctemp618=LibePuts(nctemp612,nctemp614);
int nctemp620= fp;
nctempchar1* nctemp622= p->def;
int nctemp625=LibePuts(nctemp620,nctemp622);
int nctemp627= fp;
struct nctempchar1 *nctemp631;
struct nctempchar1 nctemp632 = {{ 2}, (char*)" "};
nctemp631=&nctemp632;
nctempchar1* nctemp629= nctemp631;
int nctemp633=LibePuts(nctemp627,nctemp629);
int nctemp635= fp;
nctempchar1* nctemp637= p->type;
int nctemp640=LibePuts(nctemp635,nctemp637);
int nctemp642= fp;
struct nctempchar1 *nctemp646;
struct nctempchar1 nctemp647 = {{ 2}, (char*)" "};
nctemp646=&nctemp647;
nctempchar1* nctemp644= nctemp646;
int nctemp648=LibePuts(nctemp642,nctemp644);
int nctemp650= fp;
nctempchar1* nctemp652= p->structure;
int nctemp655=LibePuts(nctemp650,nctemp652);
int nctemp657= fp;
struct nctempchar1 *nctemp661;
struct nctempchar1 nctemp662 = {{ 2}, (char*)" "};
nctemp661=&nctemp662;
nctempchar1* nctemp659= nctemp661;
int nctemp663=LibePuts(nctemp657,nctemp659);
int nctemp665= fp;
nctempchar1* nctemp667= p->array;
int nctemp670=LibePuts(nctemp665,nctemp667);
int nctemp672= fp;
struct nctempchar1 *nctemp676;
struct nctempchar1 nctemp677 = {{ 2}, (char*)" "};
nctemp676=&nctemp677;
nctempchar1* nctemp674= nctemp676;
int nctemp678=LibePuts(nctemp672,nctemp674);
int nctemp680= fp;
nctempchar1* nctemp682= p->paral;
int nctemp685=LibePuts(nctemp680,nctemp682);
int nctemp687= fp;
struct nctempchar1 *nctemp691;
struct nctempchar1 nctemp692 = {{ 2}, (char*)" "};
nctemp691=&nctemp692;
nctempchar1* nctemp689= nctemp691;
int nctemp693=LibePuts(nctemp687,nctemp689);
int nctemp695= fp;
nctempchar1* nctemp697= p->global;
int nctemp700=LibePuts(nctemp695,nctemp697);
int nctemp702= fp;
struct nctempchar1 *nctemp706;
struct nctempchar1 nctemp707 = {{ 2}, (char*)" "};
nctemp706=&nctemp707;
nctempchar1* nctemp704= nctemp706;
int nctemp708=LibePuts(nctemp702,nctemp704);
int nctemp710= fp;
int nctemp712= p->rank;
int nctemp714=LibePuti(nctemp710,nctemp712);
int nctemp716= fp;
struct nctempchar1 *nctemp720;
struct nctempchar1 nctemp721 = {{ 2}, (char*)" "};
nctemp720=&nctemp721;
nctempchar1* nctemp718= nctemp720;
int nctemp722=LibePuts(nctemp716,nctemp718);
int nctemp723 = (p->simple ==1);
if(nctemp723)
{
int nctemp728= fp;
struct nctempchar1 *nctemp732;
struct nctempchar1 nctemp733 = {{ 7}, (char*)"simple"};
nctemp732=&nctemp733;
nctempchar1* nctemp730= nctemp732;
int nctemp734=LibePuts(nctemp728,nctemp730);
int nctemp736= fp;
struct nctempchar1 *nctemp740;
struct nctempchar1 nctemp741 = {{ 2}, (char*)" "};
nctemp740=&nctemp741;
nctempchar1* nctemp738= nctemp740;
int nctemp742=LibePuts(nctemp736,nctemp738);
}
else{
int nctemp743 = (p->simple ==2);
if(nctemp743)
{
int nctemp748= fp;
struct nctempchar1 *nctemp752;
struct nctempchar1 nctemp753 = {{ 6}, (char*)"empty"};
nctemp752=&nctemp753;
nctempchar1* nctemp750= nctemp752;
int nctemp754=LibePuts(nctemp748,nctemp750);
int nctemp756= fp;
struct nctempchar1 *nctemp760;
struct nctempchar1 nctemp761 = {{ 2}, (char*)" "};
nctemp760=&nctemp761;
nctempchar1* nctemp758= nctemp760;
int nctemp762=LibePuts(nctemp756,nctemp758);
}
else{
int nctemp764= fp;
struct nctempchar1 *nctemp768;
struct nctempchar1 nctemp769 = {{ 10}, (char*)"nonsimple"};
nctemp768=&nctemp769;
nctempchar1* nctemp766= nctemp768;
int nctemp770=LibePuts(nctemp764,nctemp766);
int nctemp772= fp;
struct nctempchar1 *nctemp776;
struct nctempchar1 nctemp777 = {{ 2}, (char*)" "};
nctemp776=&nctemp777;
nctempchar1* nctemp774= nctemp776;
int nctemp778=LibePuts(nctemp772,nctemp774);
}
}
int nctemp779 = (p->topexpr ==1);
if(nctemp779)
{
int nctemp784= fp;
struct nctempchar1 *nctemp788;
struct nctempchar1 nctemp789 = {{ 8}, (char*)"topexpr"};
nctemp788=&nctemp789;
nctempchar1* nctemp786= nctemp788;
int nctemp790=LibePuts(nctemp784,nctemp786);
int nctemp792= fp;
struct nctempchar1 *nctemp796;
struct nctempchar1 nctemp797 = {{ 2}, (char*)" "};
nctemp796=&nctemp797;
nctempchar1* nctemp794= nctemp796;
int nctemp798=LibePuts(nctemp792,nctemp794);
}
else{
int nctemp799 = (p->topexpr ==0);
if(nctemp799)
{
int nctemp804= fp;
struct nctempchar1 *nctemp808;
struct nctempchar1 nctemp809 = {{ 5}, (char*)"void"};
nctemp808=&nctemp809;
nctempchar1* nctemp806= nctemp808;
int nctemp810=LibePuts(nctemp804,nctemp806);
int nctemp812= fp;
struct nctempchar1 *nctemp816;
struct nctempchar1 nctemp817 = {{ 2}, (char*)" "};
nctemp816=&nctemp817;
nctempchar1* nctemp814= nctemp816;
int nctemp818=LibePuts(nctemp812,nctemp814);
}
else{
int nctemp820= fp;
struct nctempchar1 *nctemp824;
struct nctempchar1 nctemp825 = {{ 10}, (char*)"nonsimple"};
nctemp824=&nctemp825;
nctempchar1* nctemp822= nctemp824;
int nctemp826=LibePuts(nctemp820,nctemp822);
int nctemp828= fp;
struct nctempchar1 *nctemp832;
struct nctempchar1 nctemp833 = {{ 2}, (char*)" "};
nctemp832=&nctemp833;
nctempchar1* nctemp830= nctemp832;
int nctemp834=LibePuts(nctemp828,nctemp830);
}
}
int nctemp836= fp;
int nctemp838= p->line;
int nctemp840=LibePuti(nctemp836,nctemp838);
int nctemp842= fp;
struct nctempchar1 *nctemp846;
struct nctempchar1 nctemp847 = {{ 2}, (char*)" "};
nctemp846=&nctemp847;
nctempchar1* nctemp844= nctemp846;
int nctemp848=LibePuts(nctemp842,nctemp844);
int nctemp850= fp;
nctempchar1* nctemp852= p->tempr;
int nctemp855=LibePuts(nctemp850,nctemp852);
int nctemp857= fp;
struct nctempchar1 *nctemp861;
struct nctempchar1 nctemp862 = {{ 2}, (char*)" "};
nctemp861=&nctemp862;
nctempchar1* nctemp859= nctemp861;
int nctemp863=LibePuts(nctemp857,nctemp859);
int nctemp865= fp;
nctempchar1* nctemp867= p->tempi;
int nctemp870=LibePuts(nctemp865,nctemp867);
int nctemp872= fp;
struct nctempchar1 *nctemp876;
struct nctempchar1 nctemp877 = {{ 2}, (char*)" "};
nctemp876=&nctemp877;
nctempchar1* nctemp874= nctemp876;
int nctemp878=LibePuts(nctemp872,nctemp874);
int nctemp880= fp;
nctempchar1* nctemp882= p->lval;
int nctemp885=LibePuts(nctemp880,nctemp882);
int nctemp887= fp;
struct nctempchar1 *nctemp891;
struct nctempchar1 nctemp892 = {{ 2}, (char*)" "};
nctemp891=&nctemp892;
nctempchar1* nctemp889= nctemp891;
int nctemp893=LibePuts(nctemp887,nctemp889);
int nctemp895= fp;
nctempchar1* nctemp897= p->ref;
int nctemp900=LibePuts(nctemp895,nctemp897);
int nctemp902= fp;
struct nctempchar1 *nctemp906;
struct nctempchar1 nctemp907 = {{ 2}, (char*)" "};
nctemp906=&nctemp907;
nctempchar1* nctemp904= nctemp906;
int nctemp908=LibePuts(nctemp902,nctemp904);
int nctemp910= fp;
nctempchar1* nctemp912= p->descr;
int nctemp915=LibePuts(nctemp910,nctemp912);
int nctemp917= fp;
struct nctempchar1 *nctemp921;
struct nctempchar1 nctemp922 = {{ 2}, (char*)" "};
nctemp921=&nctemp922;
nctempchar1* nctemp919= nctemp921;
int nctemp923=LibePuts(nctemp917,nctemp919);
int nctemp925= fp;
struct nctempchar1 *nctemp929;
struct nctempchar1 nctemp930 = {{ 3}, (char*)"\n"};
nctemp929=&nctemp930;
nctempchar1* nctemp927= nctemp929;
int nctemp931=LibePuts(nctemp925,nctemp927);
int nctemp940 = level + 1;
level =nctemp940;
struct tree* nctemp942= p->child;
int nctemp944= level;
int nctemp946=PtreePrtree(nctemp942,nctemp944);
int nctemp955 = level - 1;
level =nctemp955;
struct tree* nctemp957= p->sister;
int nctemp959= level;
int nctemp961=PtreePrtree(nctemp957,nctemp959);
}
int nctemp963= fp;
int nctemp965=LibeFlush(nctemp963);
return 1;
}
