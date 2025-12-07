//  Translated by epsc  version: Sun Dec  7 16:23:36 2025

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
int SymSetetp (struct symbol* tp);
struct symbol* SymGetetp ();
int SymSetltp (struct symbol* tp);
struct symbol* SymGetltp ();
struct symbol* SymGetstp ();
struct symbol* SymSetstp (struct symbol* stp);
int SymIstemp (nctempchar1 *name);
struct symbol* SymLookup (nctempchar1 *s,struct symbol* tp);
struct symbol* SymMkname (nctempchar1 *name,struct symbol* tp);
struct symbol* SymGetable (struct symbol* np);
struct symbol* SymRmname (nctempchar1 *name,struct symbol* tp);
nctempchar1 * SymGetname (struct symbol* np);
struct symbol* SymMktable ();
struct symbol* SymMvnext (struct symbol* np);
struct symbol* SymSetable (struct symbol* np,struct symbol* tp);
int SymSetname (struct symbol* p,nctempchar1 *name);
int SymSetype (struct symbol* p,nctempchar1 *type);
nctempchar1 * SymGetype (struct symbol* np);
int SymSetfunc (struct symbol* p,nctempchar1 *func);
nctempchar1 * SymGetfunc (struct symbol* np);
int SymSetarray (struct symbol* p,nctempchar1 *array);
nctempchar1 * SymGetarray (struct symbol* np);
int SymSetstruct (struct symbol* p,nctempchar1 *structure);
nctempchar1 * SymGetstruct (struct symbol* np);
int SymSetident (struct symbol* p,nctempchar1 *ident);
nctempchar1 * SymGetident (struct symbol* np);
int SymSetlval (struct symbol* p,nctempchar1 *lval);
nctempchar1 * SymGetlval (struct symbol* np);
int SymSetrank (struct symbol* np,int rank);
int SymGetrank (struct symbol* np);
int SymSetemit (struct symbol* np,int emit);
int SymGetemit (struct symbol* np);
int SymSetref (struct symbol* p,nctempchar1 *ref);
nctempchar1 * SymGetref (struct symbol* np);
int SymSetmodule (struct symbol* p,nctempchar1 *module);
nctempchar1 * SymGetmodule (struct symbol* np);
int SymSetforw (struct symbol* p,nctempchar1 *forw);
nctempchar1 * SymGetforw (struct symbol* np);
int SymSetdescr (struct symbol* p,nctempchar1 *descr);
nctempchar1 * SymGetdescr (struct symbol* np);
int SymSetglobal (struct symbol* p,nctempchar1 *global);
nctempchar1 * SymGetglobal (struct symbol* np);
int SymRmtable (struct symbol* p);
struct symbol* SymLook (nctempchar1 *name);
int SymCpytble (struct symbol* tp,struct symbol* up);
struct symbol* SymAddtble (struct symbol* tp,struct symbol* sp);
int SymPrsym (int fp,struct symbol* p,int level);
int SymExport (int fp,struct symbol* p,int level);
int Symgetline (int fp,struct symbol* np,nctempchar1 *module);
int SymReadsym (int fp,struct symbol* rtbl,nctempchar1 *module);
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
int PtreeInit ();
int PtreePrtree (struct tree* p,int level);
int PtreeRmnode (struct tree* p);
int PtreeRmtree (struct tree* p);
struct tree* PtreeMknode (nctempchar1 *name,nctempchar1 *defn);
int PtreeAddchild (struct tree* parent,struct tree* child);
int PtreeAddsister (struct tree* sister,struct tree* newnode);
struct tree* PtreeMvsister (struct tree* p);
struct tree* PtreeMvchild (struct tree* p);
nctempchar1 * PtreeSetfield (nctempchar1 *field,nctempchar1 *value);
int PtreeSetname (struct tree* p,nctempchar1 *name);
nctempchar1 * PtreeGetname (struct tree* p);
int PtreeSetdef (struct tree* p,nctempchar1 *defn);
nctempchar1 * PtreeGetdef (struct tree* p);
int PtreeSetype (struct tree* p,nctempchar1 *type);
nctempchar1 * PtreeGetype (struct tree* p);
int PtreeSetstruct (struct tree* p,nctempchar1 *structure);
nctempchar1 * PtreeGetstruct (struct tree* p);
int PtreeSetempr (struct tree* p,nctempchar1 *tempr);
nctempchar1 * PtreeGetempr (struct tree* p);
int PtreeSetempi (struct tree* p,nctempchar1 *tempi);
nctempchar1 * PtreeGetempi (struct tree* p);
int PtreeGetline (struct tree* p);
int PtreeSetline (struct tree* p,int line);
nctempchar1 * PtreeGetfile (struct tree* p);
int PtreeSetfile (struct tree* p,nctempchar1 *file);
int PtreeSetrank (struct tree* p,int rank);
int PtreeGetrank (struct tree* p);
int PtreeSetlval (struct tree* p,nctempchar1 *lval);
nctempchar1 * PtreeGetlval (struct tree* p);
int PtreeSetarray (struct tree* p,nctempchar1 *array);
nctempchar1 * PtreeGetarray (struct tree* p);
int PtreeSetparallel (struct tree* p,nctempchar1 *paral);
nctempchar1 * PtreeGetparallel (struct tree* p);
int PtreeSetref (struct tree* p,nctempchar1 *ref);
nctempchar1 * PtreeGetref (struct tree* p);
int PtreeSetdescr (struct tree* p,nctempchar1 *descr);
nctempchar1 * PtreeGetdescr (struct tree* p);
int PtreeSetglobal (struct tree* p,nctempchar1 *global);
nctempchar1 * PtreeGetglobal (struct tree* p);
int PtreeSetopexpr (struct tree* p,int topexpr);
int PtreeGetopexpr (struct tree* p);
int PtreeSetsimple (struct tree* p,int simple);
int PtreeGetsimple (struct tree* p);
int PtreeSetforw (struct tree* p,nctempchar1 *forw);
nctempchar1 * PtreeGetforw (struct tree* p);
int ErrError (nctempchar1 *file,int line,nctempchar1 *s);
int ErrSerror (nctempchar1 *file,nctempchar1 *fname,int lineno,nctempchar1 *s1,nctempchar1 *s2);
nctempchar1 * ScanPath ();
int SemCompstmnt (struct tree* p)
;
int SemStmnt (struct tree* p)
;
struct tree* SemExpr (struct tree* p)
;
struct tree* SemUnexpr (struct tree* p)
;
struct tree* SemPrimexpr (struct tree* p)
;
static int SemSimple;
int SemSetsimple (int simple)
{
SemSimple = simple;
return 1;
}
int SemGetsimple ()
{
return SemSimple;
}
int SemSerror (struct tree* p,nctempchar1 *s1,nctempchar1 *s2)
{
struct tree* nctemp6= p;
nctempchar1* nctemp8=PtreeGetfile(nctemp6);
nctempchar1* nctemp4= nctemp8;
struct tree* nctemp11= p;
nctempchar1* nctemp13=PtreeGetdef(nctemp11);
nctempchar1* nctemp9= nctemp13;
struct tree* nctemp16= p;
int nctemp18=PtreeGetline(nctemp16);
int nctemp14= nctemp18;
nctempchar1* nctemp19= s1;
nctempchar1* nctemp22= s2;
int nctemp25=ErrSerror(nctemp4,nctemp9,nctemp14,nctemp19,nctemp22);
return 1;
}
int SemImport (struct tree* p,struct symbol* etp)
{
nctempchar1 *module;
nctempchar1 *file;
nctempchar1 *path;
nctempchar1 *sysfile;
int fd;
struct symbol* stp;
struct tree* nctemp32= p;
nctempchar1* nctemp34=PtreeGetdef(nctemp32);
module=nctemp34;
nctempchar1* nctemp40= module;
struct nctempchar1 *nctemp45;
static struct nctempchar1 nctemp46 = {{ 3}, (char*)".m\0"};
nctemp45=&nctemp46;
nctempchar1* nctemp43= nctemp45;
nctempchar1* nctemp47=LibeStradd(nctemp40,nctemp43);
file=nctemp47;
nctempchar1* nctemp52= file;
struct nctempchar1 *nctemp57;
static struct nctempchar1 nctemp58 = {{ 2}, (char*)"r\0"};
nctemp57=&nctemp58;
nctempchar1* nctemp55= nctemp57;
int nctemp59=LibeOpen(nctemp52,nctemp55);
fd =nctemp59;
int nctemp60 = (fd ==0);
if(nctemp60)
{
nctempchar1* nctemp69=ScanPath();
path=nctemp69;
nctempchar1* nctemp75= path;
nctempchar1* nctemp78= file;
nctempchar1* nctemp81=LibeStradd(nctemp75,nctemp78);
sysfile=nctemp81;
nctempchar1* nctemp86= sysfile;
struct nctempchar1 *nctemp91;
static struct nctempchar1 nctemp92 = {{ 2}, (char*)"r\0"};
nctemp91=&nctemp92;
nctempchar1* nctemp89= nctemp91;
int nctemp93=LibeOpen(nctemp86,nctemp89);
fd =nctemp93;
RunFree(sysfile->a);
RunFree(sysfile);
RunFree(path->a);
RunFree(path);
int nctemp100 = (fd ==0);
if(nctemp100)
{
struct tree* nctemp105= p;
struct nctempchar1 *nctemp109;
static struct nctempchar1 nctemp110 = {{ 24}, (char*)"Module file not found: \0"};
nctemp109=&nctemp110;
nctempchar1* nctemp107= nctemp109;
nctempchar1* nctemp111= file;
int nctemp114=SemSerror(nctemp105,nctemp107,nctemp111);
}
}
struct symbol* nctemp119=SymMktable();
stp =nctemp119;
int nctemp121= fd;
struct symbol* nctemp123= stp;
nctempchar1* nctemp125= module;
int nctemp128=SymReadsym(nctemp121,nctemp123,nctemp125);
int nctemp130= fd;
int nctemp132=LibeClose(nctemp130);
struct symbol* nctemp137= etp;
struct symbol* nctemp139= stp;
struct symbol* nctemp141=SymAddtble(nctemp137,nctemp139);
etp =nctemp141;
return 1;
}
int SemDeclaration (struct tree* p,struct symbol* tp)
{
struct tree* np;
struct tree* sp;
struct symbol* up;
int rank;
int l;
nctempchar1 *s;
nctempchar1 *global;
struct tree* nctemp144= p;
struct tree* nctemp148= p;
nctempchar1* nctemp150=PtreeGetdef(nctemp148);
nctempchar1* nctemp146= nctemp150;
int nctemp151=PtreeSetype(nctemp144,nctemp146);
struct tree* nctemp157= p;
nctempchar1* nctemp159=PtreeGetglobal(nctemp157);
global=nctemp159;
rank = 0;
struct tree* nctemp163= p;
nctempchar1* nctemp165=PtreeGetarray(nctemp163);
nctempchar1* nctemp161= nctemp165;
struct nctempchar1 *nctemp168;
static struct nctempchar1 nctemp169 = {{ 6}, (char*)"array\0"};
nctemp168=&nctemp169;
nctempchar1* nctemp166= nctemp168;
int nctemp170=LibeStrcmp(nctemp161,nctemp166);
if(nctemp170)
{
struct tree* nctemp175= p;
struct tree* nctemp177=PtreeMvchild(nctemp175);
np =nctemp177;
struct tree* nctemp182= np;
struct tree* nctemp184=PtreeMvchild(nctemp182);
np =nctemp184;
rank = 1;
struct tree* nctemp192= np;
struct tree* nctemp194=PtreeMvsister(nctemp192);
np =nctemp194;
int nctemp185 = (np !=0);
int nctemp196=nctemp185;
while(nctemp196)
{{
rank = (rank + 1);
}
struct tree* nctemp204= np;
struct tree* nctemp206=PtreeMvsister(nctemp204);
np =nctemp206;
int nctemp197 = (np !=0);
nctemp196=nctemp197;}struct tree* nctemp212= p;
struct tree* nctemp214=PtreeMvchild(nctemp212);
np =nctemp214;
struct tree* nctemp219= np;
struct tree* nctemp221=PtreeMvsister(nctemp219);
np =nctemp221;
}
else{
struct tree* nctemp226= p;
struct tree* nctemp228=PtreeMvchild(nctemp226);
np =nctemp228;
}
int nctemp229 = (np !=0);
int nctemp233=nctemp229;
while(nctemp233)
{{
struct tree* nctemp235= np;
struct tree* nctemp239= p;
nctempchar1* nctemp241=PtreeGetype(nctemp239);
nctempchar1* nctemp237= nctemp241;
int nctemp242=PtreeSetype(nctemp235,nctemp237);
struct tree* nctemp252= np;
nctempchar1* nctemp254=PtreeGetdef(nctemp252);
nctempchar1* nctemp250= nctemp254;
struct symbol* nctemp255= tp;
struct symbol* nctemp257=SymMkname(nctemp250,nctemp255);
up =nctemp257;
int nctemp243 = (up ==0);
if(nctemp243)
{
struct tree* nctemp260= np;
struct nctempchar1 *nctemp264;
static struct nctempchar1 nctemp265 = {{ 21}, (char*)"Multiple declaration\0"};
nctemp264=&nctemp265;
nctempchar1* nctemp262= nctemp264;
struct tree* nctemp268= np;
nctempchar1* nctemp270=PtreeGetdef(nctemp268);
nctempchar1* nctemp266= nctemp270;
int nctemp271=SemSerror(nctemp260,nctemp262,nctemp266);
}
else{
struct symbol* nctemp273= up;
struct nctempchar1 *nctemp277;
static struct nctempchar1 nctemp278 = {{ 11}, (char*)"identifier\0"};
nctemp277=&nctemp278;
nctempchar1* nctemp275= nctemp277;
int nctemp279=SymSetident(nctemp273,nctemp275);
struct symbol* nctemp281= up;
struct tree* nctemp285= p;
nctempchar1* nctemp287=PtreeGetype(nctemp285);
nctempchar1* nctemp283= nctemp287;
int nctemp288=SymSetype(nctemp281,nctemp283);
nctempchar1* nctemp292= global;
struct nctempchar1 *nctemp297;
static struct nctempchar1 nctemp298 = {{ 7}, (char*)"global\0"};
nctemp297=&nctemp298;
nctempchar1* nctemp295= nctemp297;
int nctemp299=LibeStrcmp(nctemp292,nctemp295);
int nctemp289 = (nctemp299 ==1);
if(nctemp289)
{
struct symbol* nctemp302= up;
struct nctempchar1 *nctemp306;
static struct nctempchar1 nctemp307 = {{ 7}, (char*)"global\0"};
nctemp306=&nctemp307;
nctempchar1* nctemp304= nctemp306;
int nctemp308=SymSetglobal(nctemp302,nctemp304);
}
struct tree* nctemp314= p;
nctempchar1* nctemp316=PtreeGetype(nctemp314);
nctempchar1* nctemp312= nctemp316;
struct nctempchar1 *nctemp319;
static struct nctempchar1 nctemp320 = {{ 6}, (char*)"const\0"};
nctemp319=&nctemp320;
nctempchar1* nctemp317= nctemp319;
int nctemp321=LibeStrcmp(nctemp312,nctemp317);
int nctemp309 = (nctemp321 ==1);
if(nctemp309)
{
struct tree* nctemp327= np;
struct tree* nctemp329=PtreeMvchild(nctemp327);
sp =nctemp329;
struct tree* nctemp334= sp;
struct tree* nctemp336=PtreeMvchild(nctemp334);
sp =nctemp336;
struct tree* nctemp342= sp;
nctempchar1* nctemp344=PtreeGetname(nctemp342);
nctempchar1* nctemp340= nctemp344;
struct nctempchar1 *nctemp347;
static struct nctempchar1 nctemp348 = {{ 7}, (char*)"unexpr\0"};
nctemp347=&nctemp348;
nctempchar1* nctemp345= nctemp347;
int nctemp349=LibeStrcmp(nctemp340,nctemp345);
int nctemp337 = (nctemp349 ==1);
if(nctemp337)
{
struct tree* nctemp355= sp;
struct tree* nctemp357=PtreeMvchild(nctemp355);
sp =nctemp357;
struct tree* nctemp370= sp;
nctempchar1* nctemp372=PtreeGetdef(nctemp370);
nctempchar1* nctemp368= nctemp372;
int nctemp373=LibeStrlen(nctemp368);
int nctemp375 = nctemp373 + 1;
int nctemp377 = nctemp375 + 3;
l =nctemp377;
int nctemp384=l;
nctempchar1 *nctemp383;
nctemp383=(nctempchar1*)RunMalloc(sizeof(nctempchar1));
nctemp383->d[0]=l;
nctemp383->a=(char *)RunMalloc(sizeof(char)*nctemp384);
s=nctemp383;
struct nctempchar1 *nctemp390;
static struct nctempchar1 nctemp391 = {{ 3}, (char*)"(-\0"};
nctemp390=&nctemp391;
nctempchar1* nctemp388= nctemp390;
nctempchar1* nctemp392= s;
int nctemp395=LibeStrcpy(nctemp388,nctemp392);
struct tree* nctemp399= sp;
nctempchar1* nctemp401=PtreeGetdef(nctemp399);
nctempchar1* nctemp397= nctemp401;
nctempchar1* nctemp402= s;
int nctemp405=LibeStrcat(nctemp397,nctemp402);
struct nctempchar1 *nctemp409;
static struct nctempchar1 nctemp410 = {{ 2}, (char*)")\0"};
nctemp409=&nctemp410;
nctempchar1* nctemp407= nctemp409;
nctempchar1* nctemp411= s;
int nctemp414=LibeStrcat(nctemp407,nctemp411);
struct tree* nctemp416= sp;
nctempchar1* nctemp418= s;
int nctemp421=PtreeSetdef(nctemp416,nctemp418);
RunFree(s->a);
RunFree(s);
}
struct symbol* nctemp426= up;
struct tree* nctemp430= sp;
nctempchar1* nctemp432=PtreeGetname(nctemp430);
nctempchar1* nctemp428= nctemp432;
int nctemp433=SymSetype(nctemp426,nctemp428);
struct symbol* nctemp435= up;
struct tree* nctemp439= sp;
nctempchar1* nctemp441=PtreeGetdef(nctemp439);
nctempchar1* nctemp437= nctemp441;
int nctemp442=SymSetdescr(nctemp435,nctemp437);
struct symbol* nctemp444= up;
int nctemp446= 0;
int nctemp448=SymSetemit(nctemp444,nctemp446);
}
struct symbol* nctemp450= up;
struct nctempchar1 *nctemp454;
static struct nctempchar1 nctemp455 = {{ 5}, (char*)"lval\0"};
nctemp454=&nctemp455;
nctempchar1* nctemp452= nctemp454;
int nctemp456=SymSetlval(nctemp450,nctemp452);
struct tree* nctemp460= p;
nctempchar1* nctemp462=PtreeGetstruct(nctemp460);
nctempchar1* nctemp458= nctemp462;
struct nctempchar1 *nctemp465;
static struct nctempchar1 nctemp466 = {{ 7}, (char*)"struct\0"};
nctemp465=&nctemp466;
nctempchar1* nctemp463= nctemp465;
int nctemp467=LibeStrcmp(nctemp458,nctemp463);
if(nctemp467)
{
struct tree* nctemp473= p;
nctempchar1* nctemp475=PtreeGetype(nctemp473);
nctempchar1* nctemp471= nctemp475;
struct symbol* nctemp478=SymGetetp();
struct symbol* nctemp476= nctemp478;
struct symbol* nctemp479=SymLookup(nctemp471,nctemp476);
int nctemp468 = (nctemp479 ==0);
if(nctemp468)
{
struct tree* nctemp482= p;
struct nctempchar1 *nctemp486;
static struct nctempchar1 nctemp487 = {{ 20}, (char*)"Undefined structure\0"};
nctemp486=&nctemp487;
nctempchar1* nctemp484= nctemp486;
struct tree* nctemp490= p;
nctempchar1* nctemp492=PtreeGetype(nctemp490);
nctempchar1* nctemp488= nctemp492;
int nctemp493=SemSerror(nctemp482,nctemp484,nctemp488);
}
struct symbol* nctemp495= up;
struct tree* nctemp499= p;
nctempchar1* nctemp501=PtreeGetstruct(nctemp499);
nctempchar1* nctemp497= nctemp501;
int nctemp502=SymSetstruct(nctemp495,nctemp497);
}
struct symbol* nctemp504= up;
struct tree* nctemp508= p;
nctempchar1* nctemp510=PtreeGetarray(nctemp508);
nctempchar1* nctemp506= nctemp510;
int nctemp511=SymSetarray(nctemp504,nctemp506);
struct symbol* nctemp513= up;
int nctemp515= rank;
int nctemp517=SymSetrank(nctemp513,nctemp515);
struct tree* nctemp519= np;
int nctemp521= rank;
int nctemp523=PtreeSetrank(nctemp519,nctemp521);
}
struct tree* nctemp528= np;
struct tree* nctemp530=PtreeMvsister(nctemp528);
np =nctemp530;
}
int nctemp531 = (np !=0);
nctemp233=nctemp531;}return 1;
}
int SemDeclarations (struct tree* p,struct symbol* tp)
{
int nctemp536 = (p !=0);
int nctemp540=nctemp536;
while(nctemp540)
{{
struct tree* nctemp542= p;
struct symbol* nctemp544= tp;
int nctemp546=SemDeclaration(nctemp542,nctemp544);
struct tree* nctemp551= p;
struct tree* nctemp553=PtreeMvsister(nctemp551);
p =nctemp553;
}
int nctemp554 = (p !=0);
nctemp540=nctemp554;}return 1;
}
int SemStructdecl (struct tree* p,struct symbol* tp)
{
struct symbol* up;
struct symbol* uup;
nctempchar1 *structure;
struct tree* nctemp564= p;
nctempchar1* nctemp566=PtreeGetdef(nctemp564);
structure=nctemp566;
struct tree* nctemp571= p;
struct tree* nctemp573=PtreeMvchild(nctemp571);
p =nctemp573;
struct tree* nctemp578= p;
struct tree* nctemp580=PtreeMvchild(nctemp578);
p =nctemp580;
struct tree* nctemp584= p;
nctempchar1* nctemp586=PtreeGetname(nctemp584);
nctempchar1* nctemp582= nctemp586;
struct nctempchar1 *nctemp589;
static struct nctempchar1 nctemp590 = {{ 13}, (char*)"declarations\0"};
nctemp589=&nctemp590;
nctempchar1* nctemp587= nctemp589;
int nctemp591=LibeStrcmp(nctemp582,nctemp587);
if(nctemp591)
{
struct symbol* nctemp596=SymMktable();
up =nctemp596;
nctempchar1* nctemp604= structure;
struct symbol* nctemp607= tp;
struct symbol* nctemp609=SymMkname(nctemp604,nctemp607);
uup =nctemp609;
int nctemp597 = (uup ==0);
if(nctemp597)
{
struct tree* nctemp612= p;
struct nctempchar1 *nctemp616;
static struct nctempchar1 nctemp617 = {{ 21}, (char*)"Multiple declaration\0"};
nctemp616=&nctemp617;
nctempchar1* nctemp614= nctemp616;
nctempchar1* nctemp618= structure;
int nctemp621=SemSerror(nctemp612,nctemp614,nctemp618);
}
else{
struct symbol* nctemp623= uup;
struct symbol* nctemp625= up;
struct symbol* nctemp627=SymSetable(nctemp623,nctemp625);
struct symbol* nctemp629= uup;
struct nctempchar1 *nctemp633;
static struct nctempchar1 nctemp634 = {{ 10}, (char*)"structdef\0"};
nctemp633=&nctemp634;
nctempchar1* nctemp631= nctemp633;
int nctemp635=SymSetstruct(nctemp629,nctemp631);
struct symbol* nctemp637= uup;
nctempchar1* nctemp639= structure;
int nctemp642=SymSetype(nctemp637,nctemp639);
struct tree* nctemp646= p;
struct tree* nctemp648=PtreeMvchild(nctemp646);
struct tree* nctemp644= nctemp648;
struct symbol* nctemp649= up;
int nctemp651=SemDeclarations(nctemp644,nctemp649);
}
}
return 1;
}
int SemArgtype (struct tree* p,struct symbol* tp)
{
nctempchar1 *name;
struct tree* nctemp658= p;
nctempchar1* nctemp660=PtreeGetdef(nctemp658);
name=nctemp660;
struct symbol* nctemp666= tp;
nctempchar1* nctemp668=SymGetype(nctemp666);
nctempchar1* nctemp664= nctemp668;
struct tree* nctemp671= p;
nctempchar1* nctemp673=PtreeGetype(nctemp671);
nctempchar1* nctemp669= nctemp673;
int nctemp674=LibeStrcmp(nctemp664,nctemp669);
int nctemp661 = (nctemp674 ==0);
if(nctemp661)
{
struct tree* nctemp677= p;
struct nctempchar1 *nctemp681;
static struct nctempchar1 nctemp682 = {{ 49}, (char*)"Argument type does not match forward declaration\0"};
nctemp681=&nctemp682;
nctempchar1* nctemp679= nctemp681;
nctempchar1* nctemp683= name;
int nctemp686=SemSerror(nctemp677,nctemp679,nctemp683);
}
struct symbol* nctemp692= tp;
nctempchar1* nctemp694=SymGetref(nctemp692);
nctempchar1* nctemp690= nctemp694;
struct tree* nctemp697= p;
nctempchar1* nctemp699=PtreeGetref(nctemp697);
nctempchar1* nctemp695= nctemp699;
int nctemp700=LibeStrcmp(nctemp690,nctemp695);
int nctemp687 = (nctemp700 ==0);
if(nctemp687)
{
struct tree* nctemp703= p;
struct nctempchar1 *nctemp707;
static struct nctempchar1 nctemp708 = {{ 49}, (char*)"Argument type does not match forward declaration\0"};
nctemp707=&nctemp708;
nctempchar1* nctemp705= nctemp707;
nctempchar1* nctemp709= name;
int nctemp712=SemSerror(nctemp703,nctemp705,nctemp709);
}
struct symbol* nctemp718= tp;
nctempchar1* nctemp720=SymGetarray(nctemp718);
nctempchar1* nctemp716= nctemp720;
struct tree* nctemp723= p;
nctempchar1* nctemp725=PtreeGetarray(nctemp723);
nctempchar1* nctemp721= nctemp725;
int nctemp726=LibeStrcmp(nctemp716,nctemp721);
int nctemp713 = (nctemp726 ==0);
if(nctemp713)
{
struct tree* nctemp729= p;
struct nctempchar1 *nctemp733;
static struct nctempchar1 nctemp734 = {{ 49}, (char*)"Argument type does not match forward declaration\0"};
nctemp733=&nctemp734;
nctempchar1* nctemp731= nctemp733;
nctempchar1* nctemp735= name;
int nctemp738=SemSerror(nctemp729,nctemp731,nctemp735);
}
struct symbol* nctemp742= tp;
int nctemp744=SymGetrank(nctemp742);
struct tree* nctemp746= p;
int nctemp748=PtreeGetrank(nctemp746);
int nctemp739 = (nctemp744 !=nctemp748);
if(nctemp739)
{
struct tree* nctemp750= p;
struct nctempchar1 *nctemp754;
static struct nctempchar1 nctemp755 = {{ 49}, (char*)"Argument type does not match forward declaration\0"};
nctemp754=&nctemp755;
nctempchar1* nctemp752= nctemp754;
nctempchar1* nctemp756= name;
int nctemp759=SemSerror(nctemp750,nctemp752,nctemp756);
}
return 1;
}
int SemArray (struct tree* p,struct symbol* tp)
{
struct tree* np;
int rank;
struct tree* nctemp766= p;
nctempchar1* nctemp768=PtreeGetarray(nctemp766);
nctempchar1* nctemp764= nctemp768;
struct nctempchar1 *nctemp771;
static struct nctempchar1 nctemp772 = {{ 6}, (char*)"array\0"};
nctemp771=&nctemp772;
nctempchar1* nctemp769= nctemp771;
int nctemp773=LibeStrcmp(nctemp764,nctemp769);
int nctemp761 = (nctemp773 ==0);
if(nctemp761)
{
struct tree* nctemp776= p;
struct nctempchar1 *nctemp780;
static struct nctempchar1 nctemp781 = {{ 13}, (char*)"Not an array\0"};
nctemp780=&nctemp781;
nctempchar1* nctemp778= nctemp780;
struct tree* nctemp784= p;
nctempchar1* nctemp786=PtreeGetdef(nctemp784);
nctempchar1* nctemp782= nctemp786;
int nctemp787=SemSerror(nctemp776,nctemp778,nctemp782);
return 0;
}
struct tree* nctemp790= p;
struct nctempchar1 *nctemp794;
static struct nctempchar1 nctemp795 = {{ 11}, (char*)"identifier\0"};
nctemp794=&nctemp795;
nctempchar1* nctemp792= nctemp794;
int nctemp796=PtreeSetname(nctemp790,nctemp792);
struct tree* nctemp801= p;
struct tree* nctemp803=PtreeMvchild(nctemp801);
np =nctemp803;
struct tree* nctemp809= np;
nctempchar1* nctemp811=PtreeGetname(nctemp809);
nctempchar1* nctemp807= nctemp811;
struct nctempchar1 *nctemp814;
static struct nctempchar1 nctemp815 = {{ 9}, (char*)"exprlist\0"};
nctemp814=&nctemp815;
nctempchar1* nctemp812= nctemp814;
int nctemp816=LibeStrcmp(nctemp807,nctemp812);
int nctemp804 = (nctemp816 ==0);
if(nctemp804)
{
struct tree* nctemp819= p;
struct nctempchar1 *nctemp823;
static struct nctempchar1 nctemp824 = {{ 22}, (char*)"Missing array indexes\0"};
nctemp823=&nctemp824;
nctempchar1* nctemp821= nctemp823;
struct tree* nctemp827= p;
nctempchar1* nctemp829=PtreeGetdef(nctemp827);
nctempchar1* nctemp825= nctemp829;
int nctemp830=SemSerror(nctemp819,nctemp821,nctemp825);
return 0;
}
struct tree* nctemp839= np;
struct tree* nctemp841=PtreeMvchild(nctemp839);
np =nctemp841;
int nctemp832 = (np !=0);
if(nctemp832)
{
rank = 0;
int nctemp843 = (np !=0);
int nctemp847=nctemp843;
while(nctemp847)
{{
struct tree* nctemp849= np;
struct tree* nctemp851=SemExpr(nctemp849);
struct tree* nctemp856= np;
struct tree* nctemp858=PtreeMvsister(nctemp856);
np =nctemp858;
rank = (rank + 1);
}
int nctemp859 = (np !=0);
nctemp847=nctemp859;}}
struct symbol* nctemp867= tp;
int nctemp869=SymGetrank(nctemp867);
int nctemp863 = (rank !=nctemp869);
if(nctemp863)
{
struct tree* nctemp871= p;
struct nctempchar1 *nctemp875;
static struct nctempchar1 nctemp876 = {{ 24}, (char*)"Illegal array dimension\0"};
nctemp875=&nctemp876;
nctempchar1* nctemp873= nctemp875;
struct tree* nctemp879= p;
nctempchar1* nctemp881=PtreeGetdef(nctemp879);
nctempchar1* nctemp877= nctemp881;
int nctemp882=SemSerror(nctemp871,nctemp873,nctemp877);
return 0;
}
struct tree* nctemp885= p;
int nctemp887= rank;
int nctemp889=PtreeSetrank(nctemp885,nctemp887);
return 1;
}
int SemStructure (struct tree* p,struct symbol* tp)
{
nctempchar1 *temp;
struct symbol* up;
struct symbol* uup;
struct tree* np;
struct tree* nctemp896= p;
nctempchar1* nctemp898=PtreeGetstruct(nctemp896);
nctempchar1* nctemp894= nctemp898;
struct nctempchar1 *nctemp901;
static struct nctempchar1 nctemp902 = {{ 7}, (char*)"struct\0"};
nctemp901=&nctemp902;
nctempchar1* nctemp899= nctemp901;
int nctemp903=LibeStrcmp(nctemp894,nctemp899);
int nctemp891 = (nctemp903 ==0);
if(nctemp891)
{
struct tree* nctemp906= p;
struct nctempchar1 *nctemp910;
static struct nctempchar1 nctemp911 = {{ 16}, (char*)"Not a structure\0"};
nctemp910=&nctemp911;
nctempchar1* nctemp908= nctemp910;
struct tree* nctemp914= p;
nctempchar1* nctemp916=PtreeGetdef(nctemp914);
nctempchar1* nctemp912= nctemp916;
int nctemp917=SemSerror(nctemp906,nctemp908,nctemp912);
return 0;
}
struct tree* nctemp920= p;
struct nctempchar1 *nctemp924;
static struct nctempchar1 nctemp925 = {{ 11}, (char*)"identifier\0"};
nctemp924=&nctemp925;
nctempchar1* nctemp922= nctemp924;
int nctemp926=PtreeSetname(nctemp920,nctemp922);
struct symbol* nctemp932= tp;
nctempchar1* nctemp934=SymGetype(nctemp932);
temp=nctemp934;
nctempchar1* nctemp942= temp;
struct symbol* nctemp945=SymLook(nctemp942);
up =nctemp945;
int nctemp935 = (up ==0);
if(nctemp935)
{
nctempchar1* nctemp954= temp;
struct symbol* nctemp957=SymLook(nctemp954);
up =nctemp957;
int nctemp947 = (up ==0);
if(nctemp947)
{
struct tree* nctemp960= p;
struct nctempchar1 *nctemp964;
static struct nctempchar1 nctemp965 = {{ 26}, (char*)"Undeclared structure type\0"};
nctemp964=&nctemp965;
nctempchar1* nctemp962= nctemp964;
struct nctempchar1 *nctemp968;
static struct nctempchar1 nctemp969 = {{ 2}, (char*)" \0"};
nctemp968=&nctemp969;
nctempchar1* nctemp966= nctemp968;
int nctemp970=SemSerror(nctemp960,nctemp962,nctemp966);
return 0;
}
}
struct symbol* nctemp975= tp;
nctempchar1* nctemp977=SymGetstruct(nctemp975);
nctempchar1* nctemp973= nctemp977;
struct nctempchar1 *nctemp980;
static struct nctempchar1 nctemp981 = {{ 10}, (char*)"structdef\0"};
nctemp980=&nctemp981;
nctempchar1* nctemp978= nctemp980;
int nctemp982=LibeStrcmp(nctemp973,nctemp978);
if(nctemp982)
{
struct tree* nctemp984= p;
struct nctempchar1 *nctemp988;
static struct nctempchar1 nctemp989 = {{ 43}, (char*)"Struct names can not be used as a variable\0"};
nctemp988=&nctemp989;
nctempchar1* nctemp986= nctemp988;
struct tree* nctemp992= p;
nctempchar1* nctemp994=PtreeGetdef(nctemp992);
nctempchar1* nctemp990= nctemp994;
int nctemp995=SemSerror(nctemp984,nctemp986,nctemp990);
return 0;
}
struct tree* nctemp1001= p;
struct tree* nctemp1003=PtreeMvchild(nctemp1001);
np =nctemp1003;
int nctemp1004 = (np ==0);
if(nctemp1004)
{
struct tree* nctemp1009= p;
struct nctempchar1 *nctemp1013;
static struct nctempchar1 nctemp1014 = {{ 27}, (char*)"Missing structure selector\0"};
nctemp1013=&nctemp1014;
nctempchar1* nctemp1011= nctemp1013;
struct tree* nctemp1017= p;
nctempchar1* nctemp1019=PtreeGetdef(nctemp1017);
nctempchar1* nctemp1015= nctemp1019;
int nctemp1020=SemSerror(nctemp1009,nctemp1011,nctemp1015);
return 0;
}
struct tree* nctemp1025= p;
nctempchar1* nctemp1027=PtreeGetarray(nctemp1025);
nctempchar1* nctemp1023= nctemp1027;
struct nctempchar1 *nctemp1030;
static struct nctempchar1 nctemp1031 = {{ 6}, (char*)"array\0"};
nctemp1030=&nctemp1031;
nctempchar1* nctemp1028= nctemp1030;
int nctemp1032=LibeStrcmp(nctemp1023,nctemp1028);
if(nctemp1032)
{
struct tree* nctemp1037= np;
struct tree* nctemp1039=PtreeMvsister(nctemp1037);
np =nctemp1039;
}
int nctemp1040 = (np ==0);
if(nctemp1040)
{
struct tree* nctemp1045= p;
struct nctempchar1 *nctemp1049;
static struct nctempchar1 nctemp1050 = {{ 20}, (char*)"Missing array index\0"};
nctemp1049=&nctemp1050;
nctempchar1* nctemp1047= nctemp1049;
struct tree* nctemp1053= p;
nctempchar1* nctemp1055=PtreeGetdef(nctemp1053);
nctempchar1* nctemp1051= nctemp1055;
int nctemp1056=SemSerror(nctemp1045,nctemp1047,nctemp1051);
return 0;
}
struct symbol* nctemp1062= up;
struct symbol* nctemp1064=SymGetable(nctemp1062);
uup =nctemp1064;
struct tree* nctemp1074= np;
nctempchar1* nctemp1076=PtreeGetdef(nctemp1074);
nctempchar1* nctemp1072= nctemp1076;
struct symbol* nctemp1077= uup;
struct symbol* nctemp1079=SymLookup(nctemp1072,nctemp1077);
tp =nctemp1079;
int nctemp1065 = (tp ==0);
if(nctemp1065)
{
struct tree* nctemp1082= np;
struct nctempchar1 *nctemp1086;
static struct nctempchar1 nctemp1087 = {{ 28}, (char*)"Undeclared structure member\0"};
nctemp1086=&nctemp1087;
nctempchar1* nctemp1084= nctemp1086;
struct tree* nctemp1090= np;
nctempchar1* nctemp1092=PtreeGetdef(nctemp1090);
nctempchar1* nctemp1088= nctemp1092;
int nctemp1093=SemSerror(nctemp1082,nctemp1084,nctemp1088);
return 0;
}
struct symbol* nctemp1098= tp;
nctempchar1* nctemp1100=SymGetarray(nctemp1098);
nctempchar1* nctemp1096= nctemp1100;
struct nctempchar1 *nctemp1103;
static struct nctempchar1 nctemp1104 = {{ 6}, (char*)"array\0"};
nctemp1103=&nctemp1104;
nctempchar1* nctemp1101= nctemp1103;
int nctemp1105=LibeStrcmp(nctemp1096,nctemp1101);
if(nctemp1105)
{
struct tree* nctemp1109= np;
struct tree* nctemp1111=PtreeMvchild(nctemp1109);
int nctemp1106 = (nctemp1111 !=0);
if(nctemp1106)
{
struct tree* nctemp1114= np;
struct symbol* nctemp1116= tp;
int nctemp1118=SemArray(nctemp1114,nctemp1116);
struct symbol* nctemp1122= tp;
nctempchar1* nctemp1124=SymGetstruct(nctemp1122);
nctempchar1* nctemp1120= nctemp1124;
struct nctempchar1 *nctemp1127;
static struct nctempchar1 nctemp1128 = {{ 7}, (char*)"struct\0"};
nctemp1127=&nctemp1128;
nctempchar1* nctemp1125= nctemp1127;
int nctemp1129=LibeStrcmp(nctemp1120,nctemp1125);
if(nctemp1129)
{
struct tree* nctemp1131= np;
struct nctempchar1 *nctemp1135;
static struct nctempchar1 nctemp1136 = {{ 5}, (char*)"sref\0"};
nctemp1135=&nctemp1136;
nctempchar1* nctemp1133= nctemp1135;
int nctemp1137=PtreeSetref(nctemp1131,nctemp1133);
}
}
else{
struct tree* nctemp1139= np;
struct nctempchar1 *nctemp1143;
static struct nctempchar1 nctemp1144 = {{ 5}, (char*)"aref\0"};
nctemp1143=&nctemp1144;
nctempchar1* nctemp1141= nctemp1143;
int nctemp1145=PtreeSetref(nctemp1139,nctemp1141);
}
}
else{
struct symbol* nctemp1149= tp;
nctempchar1* nctemp1151=SymGetstruct(nctemp1149);
nctempchar1* nctemp1147= nctemp1151;
struct nctempchar1 *nctemp1154;
static struct nctempchar1 nctemp1155 = {{ 7}, (char*)"struct\0"};
nctemp1154=&nctemp1155;
nctempchar1* nctemp1152= nctemp1154;
int nctemp1156=LibeStrcmp(nctemp1147,nctemp1152);
if(nctemp1156)
{
struct tree* nctemp1158= np;
struct nctempchar1 *nctemp1162;
static struct nctempchar1 nctemp1163 = {{ 5}, (char*)"sref\0"};
nctemp1162=&nctemp1163;
nctempchar1* nctemp1160= nctemp1162;
int nctemp1164=PtreeSetref(nctemp1158,nctemp1160);
}
}
struct tree* nctemp1166= np;
struct symbol* nctemp1170= tp;
nctempchar1* nctemp1172=SymGetype(nctemp1170);
nctempchar1* nctemp1168= nctemp1172;
int nctemp1173=PtreeSetype(nctemp1166,nctemp1168);
struct tree* nctemp1175= np;
struct symbol* nctemp1179= tp;
nctempchar1* nctemp1181=SymGetarray(nctemp1179);
nctempchar1* nctemp1177= nctemp1181;
int nctemp1182=PtreeSetarray(nctemp1175,nctemp1177);
struct tree* nctemp1184= np;
struct symbol* nctemp1188= tp;
int nctemp1190=SymGetrank(nctemp1188);
int nctemp1186= nctemp1190;
int nctemp1191=PtreeSetrank(nctemp1184,nctemp1186);
struct tree* nctemp1193= np;
struct symbol* nctemp1197= tp;
nctempchar1* nctemp1199=SymGetlval(nctemp1197);
nctempchar1* nctemp1195= nctemp1199;
int nctemp1200=PtreeSetlval(nctemp1193,nctemp1195);
struct tree* nctemp1202= p;
struct symbol* nctemp1206= tp;
nctempchar1* nctemp1208=SymGetype(nctemp1206);
nctempchar1* nctemp1204= nctemp1208;
int nctemp1209=PtreeSetype(nctemp1202,nctemp1204);
struct tree* nctemp1211= p;
struct tree* nctemp1215= np;
nctempchar1* nctemp1217=PtreeGetref(nctemp1215);
nctempchar1* nctemp1213= nctemp1217;
int nctemp1218=PtreeSetref(nctemp1211,nctemp1213);
struct tree* nctemp1220= p;
struct symbol* nctemp1224= tp;
int nctemp1226=SymGetrank(nctemp1224);
int nctemp1222= nctemp1226;
int nctemp1227=PtreeSetrank(nctemp1220,nctemp1222);
return 1;
}
int SemId (struct tree* p)
{
struct symbol* tp;
struct tree* np;
struct tree* nctemp1238= p;
nctempchar1* nctemp1240=PtreeGetdef(nctemp1238);
nctempchar1* nctemp1236= nctemp1240;
struct symbol* nctemp1241=SymLook(nctemp1236);
tp =nctemp1241;
int nctemp1229 = (tp ==0);
if(nctemp1229)
{
struct tree* nctemp1244= p;
struct nctempchar1 *nctemp1248;
static struct nctempchar1 nctemp1249 = {{ 22}, (char*)"Undeclared identifier\0"};
nctemp1248=&nctemp1249;
nctempchar1* nctemp1246= nctemp1248;
struct tree* nctemp1252= p;
nctempchar1* nctemp1254=PtreeGetdef(nctemp1252);
nctempchar1* nctemp1250= nctemp1254;
int nctemp1255=SemSerror(nctemp1244,nctemp1246,nctemp1250);
}
struct symbol* nctemp1261= tp;
nctempchar1* nctemp1263=SymGetype(nctemp1261);
nctempchar1* nctemp1259= nctemp1263;
struct nctempchar1 *nctemp1266;
static struct nctempchar1 nctemp1267 = {{ 10}, (char*)"iconstant\0"};
nctemp1266=&nctemp1267;
nctempchar1* nctemp1264= nctemp1266;
int nctemp1268=LibeStrcmp(nctemp1259,nctemp1264);
int nctemp1256 = (nctemp1268 ==1);
if(nctemp1256)
{
struct tree* nctemp1271= p;
struct symbol* nctemp1275= tp;
nctempchar1* nctemp1277=SymGetype(nctemp1275);
nctempchar1* nctemp1273= nctemp1277;
int nctemp1278=PtreeSetname(nctemp1271,nctemp1273);
struct tree* nctemp1280= p;
struct symbol* nctemp1284= tp;
nctempchar1* nctemp1286=SymGetdescr(nctemp1284);
nctempchar1* nctemp1282= nctemp1286;
int nctemp1287=PtreeSetdef(nctemp1280,nctemp1282);
struct tree* nctemp1289= p;
struct nctempchar1 *nctemp1293;
static struct nctempchar1 nctemp1294 = {{ 4}, (char*)"int\0"};
nctemp1293=&nctemp1294;
nctempchar1* nctemp1291= nctemp1293;
int nctemp1295=PtreeSetype(nctemp1289,nctemp1291);
return 1;
}
else{
struct symbol* nctemp1302= tp;
nctempchar1* nctemp1304=SymGetype(nctemp1302);
nctempchar1* nctemp1300= nctemp1304;
struct nctempchar1 *nctemp1307;
static struct nctempchar1 nctemp1308 = {{ 10}, (char*)"rconstant\0"};
nctemp1307=&nctemp1308;
nctempchar1* nctemp1305= nctemp1307;
int nctemp1309=LibeStrcmp(nctemp1300,nctemp1305);
int nctemp1297 = (nctemp1309 ==1);
if(nctemp1297)
{
struct tree* nctemp1312= p;
struct symbol* nctemp1316= tp;
nctempchar1* nctemp1318=SymGetype(nctemp1316);
nctempchar1* nctemp1314= nctemp1318;
int nctemp1319=PtreeSetname(nctemp1312,nctemp1314);
struct tree* nctemp1321= p;
struct symbol* nctemp1325= tp;
nctempchar1* nctemp1327=SymGetdescr(nctemp1325);
nctempchar1* nctemp1323= nctemp1327;
int nctemp1328=PtreeSetdef(nctemp1321,nctemp1323);
struct tree* nctemp1330= p;
struct nctempchar1 *nctemp1334;
static struct nctempchar1 nctemp1335 = {{ 6}, (char*)"float\0"};
nctemp1334=&nctemp1335;
nctempchar1* nctemp1332= nctemp1334;
int nctemp1336=PtreeSetype(nctemp1330,nctemp1332);
return 1;
}
else{
struct symbol* nctemp1343= tp;
nctempchar1* nctemp1345=SymGetype(nctemp1343);
nctempchar1* nctemp1341= nctemp1345;
struct nctempchar1 *nctemp1348;
static struct nctempchar1 nctemp1349 = {{ 10}, (char*)"sconstant\0"};
nctemp1348=&nctemp1349;
nctempchar1* nctemp1346= nctemp1348;
int nctemp1350=LibeStrcmp(nctemp1341,nctemp1346);
int nctemp1338 = (nctemp1350 ==1);
if(nctemp1338)
{
struct tree* nctemp1353= p;
struct symbol* nctemp1357= tp;
nctempchar1* nctemp1359=SymGetype(nctemp1357);
nctempchar1* nctemp1355= nctemp1359;
int nctemp1360=PtreeSetname(nctemp1353,nctemp1355);
struct tree* nctemp1362= p;
struct symbol* nctemp1366= tp;
nctempchar1* nctemp1368=SymGetdescr(nctemp1366);
nctempchar1* nctemp1364= nctemp1368;
int nctemp1369=PtreeSetdef(nctemp1362,nctemp1364);
struct tree* nctemp1371= p;
struct nctempchar1 *nctemp1375;
static struct nctempchar1 nctemp1376 = {{ 5}, (char*)"char\0"};
nctemp1375=&nctemp1376;
nctempchar1* nctemp1373= nctemp1375;
int nctemp1377=PtreeSetype(nctemp1371,nctemp1373);
struct tree* nctemp1379= p;
struct nctempchar1 *nctemp1383;
static struct nctempchar1 nctemp1384 = {{ 6}, (char*)"array\0"};
nctemp1383=&nctemp1384;
nctempchar1* nctemp1381= nctemp1383;
int nctemp1385=PtreeSetarray(nctemp1379,nctemp1381);
struct tree* nctemp1387= p;
struct nctempchar1 *nctemp1391;
static struct nctempchar1 nctemp1392 = {{ 5}, (char*)"aref\0"};
nctemp1391=&nctemp1392;
nctempchar1* nctemp1389= nctemp1391;
int nctemp1393=PtreeSetref(nctemp1387,nctemp1389);
struct tree* nctemp1395= p;
int nctemp1397= 1;
int nctemp1399=PtreeSetrank(nctemp1395,nctemp1397);
return 1;
}
}
}
struct symbol* nctemp1404= tp;
nctempchar1* nctemp1406=SymGetstruct(nctemp1404);
nctempchar1* nctemp1402= nctemp1406;
struct nctempchar1 *nctemp1409;
static struct nctempchar1 nctemp1410 = {{ 10}, (char*)"structdef\0"};
nctemp1409=&nctemp1410;
nctempchar1* nctemp1407= nctemp1409;
int nctemp1411=LibeStrcmp(nctemp1402,nctemp1407);
if(nctemp1411)
{
struct tree* nctemp1413= p;
struct nctempchar1 *nctemp1417;
static struct nctempchar1 nctemp1418 = {{ 43}, (char*)"Struct names can not be used as a variable\0"};
nctemp1417=&nctemp1418;
nctempchar1* nctemp1415= nctemp1417;
struct tree* nctemp1421= p;
nctempchar1* nctemp1423=PtreeGetdef(nctemp1421);
nctempchar1* nctemp1419= nctemp1423;
int nctemp1424=SemSerror(nctemp1413,nctemp1415,nctemp1419);
}
struct tree* nctemp1426= p;
struct symbol* nctemp1430= tp;
nctempchar1* nctemp1432=SymGetype(nctemp1430);
nctempchar1* nctemp1428= nctemp1432;
int nctemp1433=PtreeSetype(nctemp1426,nctemp1428);
struct tree* nctemp1435= p;
struct symbol* nctemp1439= tp;
nctempchar1* nctemp1441=SymGetarray(nctemp1439);
nctempchar1* nctemp1437= nctemp1441;
int nctemp1442=PtreeSetarray(nctemp1435,nctemp1437);
struct tree* nctemp1444= p;
struct symbol* nctemp1448= tp;
int nctemp1450=SymGetrank(nctemp1448);
int nctemp1446= nctemp1450;
int nctemp1451=PtreeSetrank(nctemp1444,nctemp1446);
struct tree* nctemp1453= p;
struct symbol* nctemp1457= tp;
nctempchar1* nctemp1459=SymGetstruct(nctemp1457);
nctempchar1* nctemp1455= nctemp1459;
int nctemp1460=PtreeSetstruct(nctemp1453,nctemp1455);
struct tree* nctemp1462= p;
struct symbol* nctemp1466= tp;
nctempchar1* nctemp1468=SymGetlval(nctemp1466);
nctempchar1* nctemp1464= nctemp1468;
int nctemp1469=PtreeSetlval(nctemp1462,nctemp1464);
struct tree* nctemp1474= p;
struct tree* nctemp1476=PtreeMvchild(nctemp1474);
np =nctemp1476;
int nctemp1477 = (np !=0);
if(nctemp1477)
{
struct tree* nctemp1484= np;
nctempchar1* nctemp1486=PtreeGetname(nctemp1484);
nctempchar1* nctemp1482= nctemp1486;
struct nctempchar1 *nctemp1489;
static struct nctempchar1 nctemp1490 = {{ 9}, (char*)"exprlist\0"};
nctemp1489=&nctemp1490;
nctempchar1* nctemp1487= nctemp1489;
int nctemp1491=LibeStrcmp(nctemp1482,nctemp1487);
if(nctemp1491)
{
struct tree* nctemp1493= p;
struct symbol* nctemp1495= tp;
int nctemp1497=SemArray(nctemp1493,nctemp1495);
struct tree* nctemp1501= np;
struct tree* nctemp1503=PtreeMvsister(nctemp1501);
int nctemp1498 = (nctemp1503 !=0);
if(nctemp1498)
{
struct tree* nctemp1506= p;
struct symbol* nctemp1508= tp;
int nctemp1510=SemStructure(nctemp1506,nctemp1508);
}
else{
struct tree* nctemp1514= p;
nctempchar1* nctemp1516=PtreeGetstruct(nctemp1514);
nctempchar1* nctemp1512= nctemp1516;
struct nctempchar1 *nctemp1519;
static struct nctempchar1 nctemp1520 = {{ 7}, (char*)"struct\0"};
nctemp1519=&nctemp1520;
nctempchar1* nctemp1517= nctemp1519;
int nctemp1521=LibeStrcmp(nctemp1512,nctemp1517);
if(nctemp1521)
{
struct tree* nctemp1523= p;
struct nctempchar1 *nctemp1527;
static struct nctempchar1 nctemp1528 = {{ 5}, (char*)"sref\0"};
nctemp1527=&nctemp1528;
nctempchar1* nctemp1525= nctemp1527;
int nctemp1529=PtreeSetref(nctemp1523,nctemp1525);
}
}
}
else{
struct tree* nctemp1533= np;
nctempchar1* nctemp1535=PtreeGetname(nctemp1533);
nctempchar1* nctemp1531= nctemp1535;
struct nctempchar1 *nctemp1538;
static struct nctempchar1 nctemp1539 = {{ 9}, (char*)"selector\0"};
nctemp1538=&nctemp1539;
nctempchar1* nctemp1536= nctemp1538;
int nctemp1540=LibeStrcmp(nctemp1531,nctemp1536);
if(nctemp1540)
{
struct tree* nctemp1542= p;
struct symbol* nctemp1544= tp;
int nctemp1546=SemStructure(nctemp1542,nctemp1544);
}
}
}
else{
struct tree* nctemp1550= p;
nctempchar1* nctemp1552=PtreeGetarray(nctemp1550);
nctempchar1* nctemp1548= nctemp1552;
struct nctempchar1 *nctemp1555;
static struct nctempchar1 nctemp1556 = {{ 6}, (char*)"array\0"};
nctemp1555=&nctemp1556;
nctempchar1* nctemp1553= nctemp1555;
int nctemp1557=LibeStrcmp(nctemp1548,nctemp1553);
if(nctemp1557)
{
struct tree* nctemp1559= p;
struct nctempchar1 *nctemp1563;
static struct nctempchar1 nctemp1564 = {{ 5}, (char*)"aref\0"};
nctemp1563=&nctemp1564;
nctempchar1* nctemp1561= nctemp1563;
int nctemp1565=PtreeSetref(nctemp1559,nctemp1561);
}
else{
struct tree* nctemp1569= p;
nctempchar1* nctemp1571=PtreeGetstruct(nctemp1569);
nctempchar1* nctemp1567= nctemp1571;
struct nctempchar1 *nctemp1574;
static struct nctempchar1 nctemp1575 = {{ 7}, (char*)"struct\0"};
nctemp1574=&nctemp1575;
nctempchar1* nctemp1572= nctemp1574;
int nctemp1576=LibeStrcmp(nctemp1567,nctemp1572);
if(nctemp1576)
{
struct tree* nctemp1578= p;
struct nctempchar1 *nctemp1582;
static struct nctempchar1 nctemp1583 = {{ 5}, (char*)"sref\0"};
nctemp1582=&nctemp1583;
nctempchar1* nctemp1580= nctemp1582;
int nctemp1584=PtreeSetref(nctemp1578,nctemp1580);
}
}
}
return 1;
}
int SemFcall (struct tree* p)
{
struct tree* np;
struct symbol* tp;
nctempchar1 *type;
struct tree* nctemp1589= p;
nctempchar1* nctemp1591=PtreeGetname(nctemp1589);
nctempchar1* nctemp1587= nctemp1591;
struct nctempchar1 *nctemp1594;
static struct nctempchar1 nctemp1595 = {{ 6}, (char*)"fcall\0"};
nctemp1594=&nctemp1595;
nctempchar1* nctemp1592= nctemp1594;
int nctemp1596=LibeStrcmp(nctemp1587,nctemp1592);
if(nctemp1596)
{
struct tree* nctemp1606= p;
nctempchar1* nctemp1608=PtreeGetdef(nctemp1606);
nctempchar1* nctemp1604= nctemp1608;
struct symbol* nctemp1611=SymGetetp();
struct symbol* nctemp1609= nctemp1611;
struct symbol* nctemp1612=SymLookup(nctemp1604,nctemp1609);
tp =nctemp1612;
int nctemp1597 = (tp ==0);
if(nctemp1597)
{
struct tree* nctemp1615= p;
struct nctempchar1 *nctemp1619;
static struct nctempchar1 nctemp1620 = {{ 20}, (char*)"Undeclared function\0"};
nctemp1619=&nctemp1620;
nctempchar1* nctemp1617= nctemp1619;
struct tree* nctemp1623= p;
nctempchar1* nctemp1625=PtreeGetdef(nctemp1623);
nctempchar1* nctemp1621= nctemp1625;
int nctemp1626=SemSerror(nctemp1615,nctemp1617,nctemp1621);
return 0;
}
struct symbol* nctemp1633= tp;
nctempchar1* nctemp1635=SymGetfunc(nctemp1633);
nctempchar1* nctemp1631= nctemp1635;
struct nctempchar1 *nctemp1638;
static struct nctempchar1 nctemp1639 = {{ 5}, (char*)"fdef\0"};
nctemp1638=&nctemp1639;
nctempchar1* nctemp1636= nctemp1638;
int nctemp1640=LibeStrcmp(nctemp1631,nctemp1636);
int nctemp1628 = (nctemp1640 ==0);
if(nctemp1628)
{
struct tree* nctemp1643= p;
struct nctempchar1 *nctemp1647;
static struct nctempchar1 nctemp1648 = {{ 15}, (char*)"Not a function\0"};
nctemp1647=&nctemp1648;
nctempchar1* nctemp1645= nctemp1647;
struct tree* nctemp1651= p;
nctempchar1* nctemp1653=PtreeGetdef(nctemp1651);
nctempchar1* nctemp1649= nctemp1653;
int nctemp1654=SemSerror(nctemp1643,nctemp1645,nctemp1649);
return 0;
}
struct tree* nctemp1657= p;
struct symbol* nctemp1661= tp;
nctempchar1* nctemp1663=SymGetype(nctemp1661);
nctempchar1* nctemp1659= nctemp1663;
int nctemp1664=PtreeSetype(nctemp1657,nctemp1659);
struct tree* nctemp1666= p;
struct symbol* nctemp1670= tp;
nctempchar1* nctemp1672=SymGetstruct(nctemp1670);
nctempchar1* nctemp1668= nctemp1672;
int nctemp1673=PtreeSetstruct(nctemp1666,nctemp1668);
struct tree* nctemp1675= p;
struct symbol* nctemp1679= tp;
nctempchar1* nctemp1681=SymGetarray(nctemp1679);
nctempchar1* nctemp1677= nctemp1681;
int nctemp1682=PtreeSetarray(nctemp1675,nctemp1677);
struct tree* nctemp1684= p;
struct symbol* nctemp1688= tp;
int nctemp1690=SymGetrank(nctemp1688);
int nctemp1686= nctemp1690;
int nctemp1691=PtreeSetrank(nctemp1684,nctemp1686);
struct tree* nctemp1695= p;
nctempchar1* nctemp1697=PtreeGetarray(nctemp1695);
nctempchar1* nctemp1693= nctemp1697;
struct nctempchar1 *nctemp1700;
static struct nctempchar1 nctemp1701 = {{ 6}, (char*)"array\0"};
nctemp1700=&nctemp1701;
nctempchar1* nctemp1698= nctemp1700;
int nctemp1702=LibeStrcmp(nctemp1693,nctemp1698);
if(nctemp1702)
{
struct tree* nctemp1704= p;
struct nctempchar1 *nctemp1708;
static struct nctempchar1 nctemp1709 = {{ 5}, (char*)"aref\0"};
nctemp1708=&nctemp1709;
nctempchar1* nctemp1706= nctemp1708;
int nctemp1710=PtreeSetref(nctemp1704,nctemp1706);
}
else{
struct tree* nctemp1714= p;
nctempchar1* nctemp1716=PtreeGetstruct(nctemp1714);
nctempchar1* nctemp1712= nctemp1716;
struct nctempchar1 *nctemp1719;
static struct nctempchar1 nctemp1720 = {{ 7}, (char*)"struct\0"};
nctemp1719=&nctemp1720;
nctempchar1* nctemp1717= nctemp1719;
int nctemp1721=LibeStrcmp(nctemp1712,nctemp1717);
if(nctemp1721)
{
struct tree* nctemp1723= p;
struct nctempchar1 *nctemp1727;
static struct nctempchar1 nctemp1728 = {{ 5}, (char*)"sref\0"};
nctemp1727=&nctemp1728;
nctempchar1* nctemp1725= nctemp1727;
int nctemp1729=PtreeSetref(nctemp1723,nctemp1725);
}
}
struct symbol* nctemp1734= tp;
struct symbol* nctemp1736=SymGetable(nctemp1734);
tp =nctemp1736;
struct nctempchar1 *nctemp1743;
static struct nctempchar1 nctemp1744 = {{ 9}, (char*)"#arglist\0"};
nctemp1743=&nctemp1744;
nctempchar1* nctemp1741= nctemp1743;
struct symbol* nctemp1745= tp;
struct symbol* nctemp1747=SymLookup(nctemp1741,nctemp1745);
tp =nctemp1747;
int nctemp1748 = (tp !=0);
if(nctemp1748)
{
struct symbol* nctemp1756= tp;
struct symbol* nctemp1758=SymGetable(nctemp1756);
tp =nctemp1758;
}
struct tree* nctemp1766= p;
struct tree* nctemp1768=PtreeMvchild(nctemp1766);
np =nctemp1768;
int nctemp1759 = (np ==0);
if(nctemp1759)
{
struct symbol* nctemp1777= tp;
struct symbol* nctemp1779=SymMvnext(nctemp1777);
tp =nctemp1779;
int nctemp1770 = (tp !=0);
if(nctemp1770)
{
struct tree* nctemp1782= p;
struct nctempchar1 *nctemp1786;
static struct nctempchar1 nctemp1787 = {{ 41}, (char*)"Function call does not match declaration\0"};
nctemp1786=&nctemp1787;
nctempchar1* nctemp1784= nctemp1786;
struct tree* nctemp1790= p;
nctempchar1* nctemp1792=PtreeGetdef(nctemp1790);
nctempchar1* nctemp1788= nctemp1792;
int nctemp1793=SemSerror(nctemp1782,nctemp1784,nctemp1788);
return 0;
}
return 1;
}
struct tree* nctemp1802= p;
struct tree* nctemp1804=PtreeMvchild(nctemp1802);
struct tree* nctemp1800= nctemp1804;
struct tree* nctemp1805=PtreeMvchild(nctemp1800);
np =nctemp1805;
int nctemp1806 = (np !=0);
int nctemp1810=nctemp1806;
while(nctemp1810)
{{
struct symbol* nctemp1815= tp;
struct symbol* nctemp1817=SymMvnext(nctemp1815);
tp =nctemp1817;
int nctemp1818 = (tp ==0);
if(nctemp1818)
{
struct tree* nctemp1823= p;
struct nctempchar1 *nctemp1827;
static struct nctempchar1 nctemp1828 = {{ 41}, (char*)"Function call does not match declaration\0"};
nctemp1827=&nctemp1828;
nctempchar1* nctemp1825= nctemp1827;
struct tree* nctemp1831= p;
nctempchar1* nctemp1833=PtreeGetdef(nctemp1831);
nctempchar1* nctemp1829= nctemp1833;
int nctemp1834=SemSerror(nctemp1823,nctemp1825,nctemp1829);
return 0;
}
struct symbol* nctemp1841= tp;
nctempchar1* nctemp1843=SymGetype(nctemp1841);
type=nctemp1843;
struct tree* nctemp1845= np;
struct tree* nctemp1847=SemExpr(nctemp1845);
nctempchar1* nctemp1851= type;
struct tree* nctemp1856= np;
nctempchar1* nctemp1858=PtreeGetype(nctemp1856);
nctempchar1* nctemp1854= nctemp1858;
int nctemp1859=LibeStrcmp(nctemp1851,nctemp1854);
int nctemp1848 = (nctemp1859 ==0);
if(nctemp1848)
{
struct tree* nctemp1862= p;
struct nctempchar1 *nctemp1866;
static struct nctempchar1 nctemp1867 = {{ 41}, (char*)"Function call does not match declaration\0"};
nctemp1866=&nctemp1867;
nctempchar1* nctemp1864= nctemp1866;
struct tree* nctemp1870= p;
nctempchar1* nctemp1872=PtreeGetdef(nctemp1870);
nctempchar1* nctemp1868= nctemp1872;
int nctemp1873=SemSerror(nctemp1862,nctemp1864,nctemp1868);
return 0;
}
struct symbol* nctemp1878= tp;
nctempchar1* nctemp1880=SymGetarray(nctemp1878);
nctempchar1* nctemp1876= nctemp1880;
struct nctempchar1 *nctemp1883;
static struct nctempchar1 nctemp1884 = {{ 6}, (char*)"array\0"};
nctemp1883=&nctemp1884;
nctempchar1* nctemp1881= nctemp1883;
int nctemp1885=LibeStrcmp(nctemp1876,nctemp1881);
if(nctemp1885)
{
struct tree* nctemp1891= np;
nctempchar1* nctemp1893=PtreeGetref(nctemp1891);
nctempchar1* nctemp1889= nctemp1893;
struct nctempchar1 *nctemp1896;
static struct nctempchar1 nctemp1897 = {{ 5}, (char*)"aref\0"};
nctemp1896=&nctemp1897;
nctempchar1* nctemp1894= nctemp1896;
int nctemp1898=LibeStrcmp(nctemp1889,nctemp1894);
int nctemp1886 = (nctemp1898 ==0);
if(nctemp1886)
{
struct tree* nctemp1901= p;
struct nctempchar1 *nctemp1905;
static struct nctempchar1 nctemp1906 = {{ 41}, (char*)"Function call does not match declaration\0"};
nctemp1905=&nctemp1906;
nctempchar1* nctemp1903= nctemp1905;
struct tree* nctemp1909= p;
nctempchar1* nctemp1911=PtreeGetdef(nctemp1909);
nctempchar1* nctemp1907= nctemp1911;
int nctemp1912=SemSerror(nctemp1901,nctemp1903,nctemp1907);
}
struct tree* nctemp1916= np;
int nctemp1918=PtreeGetrank(nctemp1916);
struct symbol* nctemp1920= tp;
int nctemp1922=SymGetrank(nctemp1920);
int nctemp1913 = (nctemp1918 !=nctemp1922);
if(nctemp1913)
{
struct tree* nctemp1924= p;
struct nctempchar1 *nctemp1928;
static struct nctempchar1 nctemp1929 = {{ 36}, (char*)"Illegal array rank in function call\0"};
nctemp1928=&nctemp1929;
nctempchar1* nctemp1926= nctemp1928;
struct tree* nctemp1932= p;
nctempchar1* nctemp1934=PtreeGetdef(nctemp1932);
nctempchar1* nctemp1930= nctemp1934;
int nctemp1935=SemSerror(nctemp1924,nctemp1926,nctemp1930);
}
}
struct tree* nctemp1940= np;
struct tree* nctemp1942=PtreeMvsister(nctemp1940);
np =nctemp1942;
}
int nctemp1943 = (np !=0);
nctemp1810=nctemp1943;}struct symbol* nctemp1950= tp;
struct symbol* nctemp1952=SymMvnext(nctemp1950);
int nctemp1947 = (nctemp1952 !=0);
if(nctemp1947)
{
struct tree* nctemp1955= p;
struct nctempchar1 *nctemp1959;
static struct nctempchar1 nctemp1960 = {{ 41}, (char*)"Function call does not match declaration\0"};
nctemp1959=&nctemp1960;
nctempchar1* nctemp1957= nctemp1959;
struct tree* nctemp1963= p;
nctempchar1* nctemp1965=PtreeGetdef(nctemp1963);
nctempchar1* nctemp1961= nctemp1965;
int nctemp1966=SemSerror(nctemp1955,nctemp1957,nctemp1961);
return 0;
}
}
return 1;
}
struct tree* SemExprlist (struct tree* p)
{
struct tree* nctemp1972= p;
nctempchar1* nctemp1974=PtreeGetname(nctemp1972);
nctempchar1* nctemp1970= nctemp1974;
struct nctempchar1 *nctemp1977;
static struct nctempchar1 nctemp1978 = {{ 9}, (char*)"exprlist\0"};
nctemp1977=&nctemp1978;
nctempchar1* nctemp1975= nctemp1977;
int nctemp1979=LibeStrcmp(nctemp1970,nctemp1975);
if(nctemp1979)
{
struct tree* nctemp1984= p;
struct tree* nctemp1986=PtreeMvchild(nctemp1984);
p =nctemp1986;
int nctemp1987 = (p !=0);
int nctemp1991=nctemp1987;
while(nctemp1991)
{{
struct tree* nctemp1993= p;
struct tree* nctemp1995=SemExpr(nctemp1993);
struct tree* nctemp2000= p;
struct tree* nctemp2002=PtreeMvsister(nctemp2000);
p =nctemp2002;
}
int nctemp2003 = (p !=0);
nctemp1991=nctemp2003;}}
return p;
}
int SemCopytype (struct tree* p,struct tree* np)
{
struct tree* nctemp2009= np;
struct tree* nctemp2013= p;
nctempchar1* nctemp2015=PtreeGetype(nctemp2013);
nctempchar1* nctemp2011= nctemp2015;
int nctemp2016=PtreeSetype(nctemp2009,nctemp2011);
struct tree* nctemp2018= np;
struct tree* nctemp2022= p;
nctempchar1* nctemp2024=PtreeGetstruct(nctemp2022);
nctempchar1* nctemp2020= nctemp2024;
int nctemp2025=PtreeSetstruct(nctemp2018,nctemp2020);
struct tree* nctemp2027= np;
struct tree* nctemp2031= p;
nctempchar1* nctemp2033=PtreeGetarray(nctemp2031);
nctempchar1* nctemp2029= nctemp2033;
int nctemp2034=PtreeSetarray(nctemp2027,nctemp2029);
struct tree* nctemp2036= np;
struct tree* nctemp2040= p;
nctempchar1* nctemp2042=PtreeGetref(nctemp2040);
nctempchar1* nctemp2038= nctemp2042;
int nctemp2043=PtreeSetref(nctemp2036,nctemp2038);
struct tree* nctemp2045= np;
struct tree* nctemp2049= p;
nctempchar1* nctemp2051=PtreeGetlval(nctemp2049);
nctempchar1* nctemp2047= nctemp2051;
int nctemp2052=PtreeSetlval(nctemp2045,nctemp2047);
struct tree* nctemp2054= np;
struct tree* nctemp2058= p;
int nctemp2060=PtreeGetrank(nctemp2058);
int nctemp2056= nctemp2060;
int nctemp2061=PtreeSetrank(nctemp2054,nctemp2056);
return 1;
}
int SemCast (struct tree* p)
{
struct tree* sp;
struct tree* np;
int resultrank;
nctempchar1 *resultype;
nctempchar1 *exptype;
nctempchar1 *resultref;
nctempchar1 *expref;
struct nctempchar1 *nctemp2068;
static struct nctempchar1 nctemp2069 = {{ 5}, (char*)"void\0"};
nctemp2068=&nctemp2069;
resultref=nctemp2068;
struct nctempchar1 *nctemp2075;
static struct nctempchar1 nctemp2076 = {{ 5}, (char*)"void\0"};
nctemp2075=&nctemp2076;
expref=nctemp2075;
struct tree* nctemp2080= p;
nctempchar1* nctemp2082=PtreeGetname(nctemp2080);
nctempchar1* nctemp2078= nctemp2082;
struct nctempchar1 *nctemp2085;
static struct nctempchar1 nctemp2086 = {{ 5}, (char*)"cast\0"};
nctemp2085=&nctemp2086;
nctempchar1* nctemp2083= nctemp2085;
int nctemp2087=LibeStrcmp(nctemp2078,nctemp2083);
if(nctemp2087)
{
struct tree* nctemp2092= p;
struct tree* nctemp2094=PtreeMvchild(nctemp2092);
np =nctemp2094;
struct tree* nctemp2100= np;
nctempchar1* nctemp2102=PtreeGetdef(nctemp2100);
resultype=nctemp2102;
struct tree* nctemp2104= np;
nctempchar1* nctemp2106= resultype;
int nctemp2109=PtreeSetype(nctemp2104,nctemp2106);
resultrank = 0;
struct tree* nctemp2113= np;
nctempchar1* nctemp2115=PtreeGetarray(nctemp2113);
nctempchar1* nctemp2111= nctemp2115;
struct nctempchar1 *nctemp2118;
static struct nctempchar1 nctemp2119 = {{ 6}, (char*)"array\0"};
nctemp2118=&nctemp2119;
nctempchar1* nctemp2116= nctemp2118;
int nctemp2120=LibeStrcmp(nctemp2111,nctemp2116);
if(nctemp2120)
{
struct tree* nctemp2125= np;
struct tree* nctemp2127=PtreeMvchild(nctemp2125);
sp =nctemp2127;
struct tree* nctemp2132= sp;
struct tree* nctemp2134=PtreeMvchild(nctemp2132);
sp =nctemp2134;
struct tree* nctemp2139= sp;
struct tree* nctemp2141=PtreeMvchild(nctemp2139);
sp =nctemp2141;
struct tree* nctemp2143= sp;
struct tree* nctemp2145=SemExprlist(nctemp2143);
struct tree* nctemp2150= sp;
struct tree* nctemp2152=PtreeMvchild(nctemp2150);
sp =nctemp2152;
resultrank = 1;
struct tree* nctemp2160= sp;
struct tree* nctemp2162=PtreeMvsister(nctemp2160);
sp =nctemp2162;
int nctemp2153 = (sp !=0);
int nctemp2164=nctemp2153;
while(nctemp2164)
{{
resultrank = (resultrank + 1);
}
struct tree* nctemp2172= sp;
struct tree* nctemp2174=PtreeMvsister(nctemp2172);
sp =nctemp2174;
int nctemp2165 = (sp !=0);
nctemp2164=nctemp2165;}struct tree* nctemp2177= np;
int nctemp2179= resultrank;
int nctemp2181=PtreeSetrank(nctemp2177,nctemp2179);
struct tree* nctemp2183= p;
int nctemp2185= resultrank;
int nctemp2187=PtreeSetrank(nctemp2183,nctemp2185);
struct tree* nctemp2189= np;
struct nctempchar1 *nctemp2193;
static struct nctempchar1 nctemp2194 = {{ 5}, (char*)"aref\0"};
nctemp2193=&nctemp2194;
nctempchar1* nctemp2191= nctemp2193;
int nctemp2195=PtreeSetref(nctemp2189,nctemp2191);
struct nctempchar1 *nctemp2203;
static struct nctempchar1 nctemp2204 = {{ 5}, (char*)"aref\0"};
nctemp2203=&nctemp2204;
nctempchar1* nctemp2201= nctemp2203;
nctempchar1* nctemp2205=LibeStrsave(nctemp2201);
resultref=nctemp2205;
}
else{
struct tree* nctemp2209= np;
nctempchar1* nctemp2211=PtreeGetstruct(nctemp2209);
nctempchar1* nctemp2207= nctemp2211;
struct nctempchar1 *nctemp2214;
static struct nctempchar1 nctemp2215 = {{ 7}, (char*)"struct\0"};
nctemp2214=&nctemp2215;
nctempchar1* nctemp2212= nctemp2214;
int nctemp2216=LibeStrcmp(nctemp2207,nctemp2212);
if(nctemp2216)
{
struct tree* nctemp2218= np;
struct nctempchar1 *nctemp2222;
static struct nctempchar1 nctemp2223 = {{ 5}, (char*)"sref\0"};
nctemp2222=&nctemp2223;
nctempchar1* nctemp2220= nctemp2222;
int nctemp2224=PtreeSetref(nctemp2218,nctemp2220);
struct nctempchar1 *nctemp2232;
static struct nctempchar1 nctemp2233 = {{ 5}, (char*)"sref\0"};
nctemp2232=&nctemp2233;
nctempchar1* nctemp2230= nctemp2232;
nctempchar1* nctemp2234=LibeStrsave(nctemp2230);
resultref=nctemp2234;
}
else{
struct nctempchar1 *nctemp2242;
static struct nctempchar1 nctemp2243 = {{ 5}, (char*)"void\0"};
nctemp2242=&nctemp2243;
nctempchar1* nctemp2240= nctemp2242;
nctempchar1* nctemp2244=LibeStrsave(nctemp2240);
resultref=nctemp2244;
}
}
struct tree* nctemp2246= np;
struct tree* nctemp2248= p;
int nctemp2250=SemCopytype(nctemp2246,nctemp2248);
struct tree* nctemp2255= np;
struct tree* nctemp2257=PtreeMvsister(nctemp2255);
np =nctemp2257;
struct tree* nctemp2259= np;
struct tree* nctemp2261=SemExpr(nctemp2259);
struct tree* nctemp2267= np;
nctempchar1* nctemp2269=PtreeGetype(nctemp2267);
exptype=nctemp2269;
struct tree* nctemp2275= np;
nctempchar1* nctemp2277=PtreeGetref(nctemp2275);
expref=nctemp2277;
nctempchar1* nctemp2281= resultref;
nctempchar1* nctemp2284= expref;
int nctemp2287=LibeStrcmp(nctemp2281,nctemp2284);
int nctemp2278 = (nctemp2287 ==0);
if(nctemp2278)
{
struct tree* nctemp2290= p;
struct nctempchar1 *nctemp2294;
static struct nctempchar1 nctemp2295 = {{ 19}, (char*)"Illegal conversion\0"};
nctemp2294=&nctemp2295;
nctempchar1* nctemp2292= nctemp2294;
struct nctempchar1 *nctemp2298;
static struct nctempchar1 nctemp2299 = {{ 2}, (char*)" \0"};
nctemp2298=&nctemp2299;
nctempchar1* nctemp2296= nctemp2298;
int nctemp2300=SemSerror(nctemp2290,nctemp2292,nctemp2296);
return 0;
}
nctempchar1* nctemp2308= resultref;
struct nctempchar1 *nctemp2313;
static struct nctempchar1 nctemp2314 = {{ 5}, (char*)"aref\0"};
nctemp2313=&nctemp2314;
nctempchar1* nctemp2311= nctemp2313;
int nctemp2315=LibeStrcmp(nctemp2308,nctemp2311);
int nctemp2305 = (nctemp2315 ==0);
nctempchar1* nctemp2321= resultref;
struct nctempchar1 *nctemp2326;
static struct nctempchar1 nctemp2327 = {{ 5}, (char*)"sref\0"};
nctemp2326=&nctemp2327;
nctempchar1* nctemp2324= nctemp2326;
int nctemp2328=LibeStrcmp(nctemp2321,nctemp2324);
int nctemp2318 = (nctemp2328 ==0);
int nctemp2302 = (nctemp2305 || nctemp2318);
if(nctemp2302)
{
nctempchar1* nctemp2331= resultype;
struct nctempchar1 *nctemp2336;
static struct nctempchar1 nctemp2337 = {{ 8}, (char*)"complex\0"};
nctemp2336=&nctemp2337;
nctempchar1* nctemp2334= nctemp2336;
int nctemp2338=LibeStrcmp(nctemp2331,nctemp2334);
if(nctemp2338)
{
struct tree* nctemp2340= p;
struct nctempchar1 *nctemp2344;
static struct nctempchar1 nctemp2345 = {{ 19}, (char*)"Illegal conversion\0"};
nctemp2344=&nctemp2345;
nctempchar1* nctemp2342= nctemp2344;
struct nctempchar1 *nctemp2348;
static struct nctempchar1 nctemp2349 = {{ 2}, (char*)" \0"};
nctemp2348=&nctemp2349;
nctempchar1* nctemp2346= nctemp2348;
int nctemp2350=SemSerror(nctemp2340,nctemp2342,nctemp2346);
}
return 0;
nctempchar1* nctemp2353= resultype;
struct nctempchar1 *nctemp2358;
static struct nctempchar1 nctemp2359 = {{ 4}, (char*)"int\0"};
nctemp2358=&nctemp2359;
nctempchar1* nctemp2356= nctemp2358;
int nctemp2360=LibeStrcmp(nctemp2353,nctemp2356);
if(nctemp2360)
{
nctempchar1* nctemp2364= exptype;
struct nctempchar1 *nctemp2369;
static struct nctempchar1 nctemp2370 = {{ 5}, (char*)"char\0"};
nctemp2369=&nctemp2370;
nctempchar1* nctemp2367= nctemp2369;
int nctemp2371=LibeStrcmp(nctemp2364,nctemp2367);
int nctemp2361 = (nctemp2371 ==0);
if(nctemp2361)
{
nctempchar1* nctemp2376= exptype;
struct nctempchar1 *nctemp2381;
static struct nctempchar1 nctemp2382 = {{ 6}, (char*)"float\0"};
nctemp2381=&nctemp2382;
nctempchar1* nctemp2379= nctemp2381;
int nctemp2383=LibeStrcmp(nctemp2376,nctemp2379);
int nctemp2373 = (nctemp2383 ==0);
if(nctemp2373)
{
struct tree* nctemp2386= p;
struct nctempchar1 *nctemp2390;
static struct nctempchar1 nctemp2391 = {{ 19}, (char*)"Illegal conversion\0"};
nctemp2390=&nctemp2391;
nctempchar1* nctemp2388= nctemp2390;
struct nctempchar1 *nctemp2394;
static struct nctempchar1 nctemp2395 = {{ 2}, (char*)" \0"};
nctemp2394=&nctemp2395;
nctempchar1* nctemp2392= nctemp2394;
int nctemp2396=SemSerror(nctemp2386,nctemp2388,nctemp2392);
}
}
return 0;
}
else{
nctempchar1* nctemp2399= resultype;
struct nctempchar1 *nctemp2404;
static struct nctempchar1 nctemp2405 = {{ 5}, (char*)"char\0"};
nctemp2404=&nctemp2405;
nctempchar1* nctemp2402= nctemp2404;
int nctemp2406=LibeStrcmp(nctemp2399,nctemp2402);
if(nctemp2406)
{
nctempchar1* nctemp2410= exptype;
struct nctempchar1 *nctemp2415;
static struct nctempchar1 nctemp2416 = {{ 4}, (char*)"int\0"};
nctemp2415=&nctemp2416;
nctempchar1* nctemp2413= nctemp2415;
int nctemp2417=LibeStrcmp(nctemp2410,nctemp2413);
int nctemp2407 = (nctemp2417 ==0);
if(nctemp2407)
{
struct tree* nctemp2420= p;
struct nctempchar1 *nctemp2424;
static struct nctempchar1 nctemp2425 = {{ 19}, (char*)"Illegal conversion\0"};
nctemp2424=&nctemp2425;
nctempchar1* nctemp2422= nctemp2424;
struct nctempchar1 *nctemp2428;
static struct nctempchar1 nctemp2429 = {{ 2}, (char*)" \0"};
nctemp2428=&nctemp2429;
nctempchar1* nctemp2426= nctemp2428;
int nctemp2430=SemSerror(nctemp2420,nctemp2422,nctemp2426);
}
return 0;
}
else{
nctempchar1* nctemp2433= resultype;
struct nctempchar1 *nctemp2438;
static struct nctempchar1 nctemp2439 = {{ 6}, (char*)"float\0"};
nctemp2438=&nctemp2439;
nctempchar1* nctemp2436= nctemp2438;
int nctemp2440=LibeStrcmp(nctemp2433,nctemp2436);
if(nctemp2440)
{
nctempchar1* nctemp2444= exptype;
struct nctempchar1 *nctemp2449;
static struct nctempchar1 nctemp2450 = {{ 4}, (char*)"int\0"};
nctemp2449=&nctemp2450;
nctempchar1* nctemp2447= nctemp2449;
int nctemp2451=LibeStrcmp(nctemp2444,nctemp2447);
int nctemp2441 = (nctemp2451 ==0);
if(nctemp2441)
{
struct tree* nctemp2454= np;
struct nctempchar1 *nctemp2458;
static struct nctempchar1 nctemp2459 = {{ 19}, (char*)"Illegal conversion\0"};
nctemp2458=&nctemp2459;
nctempchar1* nctemp2456= nctemp2458;
struct nctempchar1 *nctemp2462;
static struct nctempchar1 nctemp2463 = {{ 2}, (char*)" \0"};
nctemp2462=&nctemp2463;
nctempchar1* nctemp2460= nctemp2462;
int nctemp2464=SemSerror(nctemp2454,nctemp2456,nctemp2460);
}
return 0;
}
}
}
}
}
return 1;
}
int SemNew (struct tree* p)
{
struct tree* np;
struct tree* sp;
int rank;
struct tree* nctemp2470= p;
nctempchar1* nctemp2472=PtreeGetname(nctemp2470);
nctempchar1* nctemp2468= nctemp2472;
struct nctempchar1 *nctemp2475;
static struct nctempchar1 nctemp2476 = {{ 4}, (char*)"new\0"};
nctemp2475=&nctemp2476;
nctempchar1* nctemp2473= nctemp2475;
int nctemp2477=LibeStrcmp(nctemp2468,nctemp2473);
if(nctemp2477)
{
struct tree* nctemp2482= p;
struct tree* nctemp2484=PtreeMvchild(nctemp2482);
np =nctemp2484;
struct tree* nctemp2486= np;
nctempchar1* nctemp2488=PtreeGetdef(nctemp2486);
struct tree* nctemp2490= np;
struct tree* nctemp2494= np;
nctempchar1* nctemp2496=PtreeGetdef(nctemp2494);
nctempchar1* nctemp2492= nctemp2496;
int nctemp2497=PtreeSetype(nctemp2490,nctemp2492);
struct tree* nctemp2499= np;
struct tree* nctemp2501= p;
int nctemp2503=SemCopytype(nctemp2499,nctemp2501);
struct tree* nctemp2509= np;
nctempchar1* nctemp2511=PtreeGetarray(nctemp2509);
nctempchar1* nctemp2507= nctemp2511;
struct nctempchar1 *nctemp2514;
static struct nctempchar1 nctemp2515 = {{ 6}, (char*)"array\0"};
nctemp2514=&nctemp2515;
nctempchar1* nctemp2512= nctemp2514;
int nctemp2516=LibeStrcmp(nctemp2507,nctemp2512);
int nctemp2504 = (nctemp2516 ==0);
if(nctemp2504)
{
struct tree* nctemp2523= np;
nctempchar1* nctemp2525=PtreeGetstruct(nctemp2523);
nctempchar1* nctemp2521= nctemp2525;
struct nctempchar1 *nctemp2528;
static struct nctempchar1 nctemp2529 = {{ 7}, (char*)"struct\0"};
nctemp2528=&nctemp2529;
nctempchar1* nctemp2526= nctemp2528;
int nctemp2530=LibeStrcmp(nctemp2521,nctemp2526);
int nctemp2518 = (nctemp2530 ==0);
if(nctemp2518)
{
struct tree* nctemp2533= np;
struct nctempchar1 *nctemp2537;
static struct nctempchar1 nctemp2538 = {{ 44}, (char*)"Argument limited to array or structure type\0"};
nctemp2537=&nctemp2538;
nctempchar1* nctemp2535= nctemp2537;
struct nctempchar1 *nctemp2541;
static struct nctempchar1 nctemp2542 = {{ 3}, (char*)"  \0"};
nctemp2541=&nctemp2542;
nctempchar1* nctemp2539= nctemp2541;
int nctemp2543=SemSerror(nctemp2533,nctemp2535,nctemp2539);
}
}
struct tree* nctemp2547= np;
nctempchar1* nctemp2549=PtreeGetarray(nctemp2547);
nctempchar1* nctemp2545= nctemp2549;
struct nctempchar1 *nctemp2552;
static struct nctempchar1 nctemp2553 = {{ 6}, (char*)"array\0"};
nctemp2552=&nctemp2553;
nctempchar1* nctemp2550= nctemp2552;
int nctemp2554=LibeStrcmp(nctemp2545,nctemp2550);
if(nctemp2554)
{
struct tree* nctemp2559= np;
struct tree* nctemp2561=PtreeMvchild(nctemp2559);
sp =nctemp2561;
struct tree* nctemp2566= sp;
struct tree* nctemp2568=PtreeMvchild(nctemp2566);
sp =nctemp2568;
struct tree* nctemp2573= sp;
struct tree* nctemp2575=PtreeMvchild(nctemp2573);
sp =nctemp2575;
struct tree* nctemp2580= sp;
struct tree* nctemp2582=PtreeMvchild(nctemp2580);
sp =nctemp2582;
rank = 1;
int nctemp2583 = (sp ==0);
if(nctemp2583)
{
struct tree* nctemp2588= np;
struct nctempchar1 *nctemp2592;
static struct nctempchar1 nctemp2593 = {{ 35}, (char*)"Missing array size in new operator\0"};
nctemp2592=&nctemp2593;
nctempchar1* nctemp2590= nctemp2592;
struct nctempchar1 *nctemp2596;
static struct nctempchar1 nctemp2597 = {{ 2}, (char*)" \0"};
nctemp2596=&nctemp2597;
nctempchar1* nctemp2594= nctemp2596;
int nctemp2598=SemSerror(nctemp2588,nctemp2590,nctemp2594);
}
struct tree* nctemp2600= sp;
struct tree* nctemp2602=SemExpr(nctemp2600);
struct tree* nctemp2610= sp;
struct tree* nctemp2612=PtreeMvsister(nctemp2610);
sp =nctemp2612;
int nctemp2603 = (sp !=0);
int nctemp2614=nctemp2603;
while(nctemp2614)
{{
struct tree* nctemp2616= sp;
struct tree* nctemp2618=SemExpr(nctemp2616);
rank = (rank + 1);
}
struct tree* nctemp2626= sp;
struct tree* nctemp2628=PtreeMvsister(nctemp2626);
sp =nctemp2628;
int nctemp2619 = (sp !=0);
nctemp2614=nctemp2619;}struct tree* nctemp2631= np;
int nctemp2633= rank;
int nctemp2635=PtreeSetrank(nctemp2631,nctemp2633);
struct tree* nctemp2637= p;
int nctemp2639= rank;
int nctemp2641=PtreeSetrank(nctemp2637,nctemp2639);
struct tree* nctemp2643= p;
struct nctempchar1 *nctemp2647;
static struct nctempchar1 nctemp2648 = {{ 5}, (char*)"aref\0"};
nctemp2647=&nctemp2648;
nctempchar1* nctemp2645= nctemp2647;
int nctemp2649=PtreeSetref(nctemp2643,nctemp2645);
}
else{
struct tree* nctemp2651= p;
struct nctempchar1 *nctemp2655;
static struct nctempchar1 nctemp2656 = {{ 5}, (char*)"sref\0"};
nctemp2655=&nctemp2656;
nctempchar1* nctemp2653= nctemp2655;
int nctemp2657=PtreeSetref(nctemp2651,nctemp2653);
}
}
return 1;
}
int SemDelete (struct tree* p)
{
struct tree* np;
struct tree* nctemp2662= p;
nctempchar1* nctemp2664=PtreeGetname(nctemp2662);
nctempchar1* nctemp2660= nctemp2664;
struct nctempchar1 *nctemp2667;
static struct nctempchar1 nctemp2668 = {{ 7}, (char*)"delete\0"};
nctemp2667=&nctemp2668;
nctempchar1* nctemp2665= nctemp2667;
int nctemp2669=LibeStrcmp(nctemp2660,nctemp2665);
if(nctemp2669)
{
struct tree* nctemp2674= p;
struct tree* nctemp2676=PtreeMvchild(nctemp2674);
np =nctemp2676;
struct tree* nctemp2678= np;
struct tree* nctemp2680=SemExpr(nctemp2678);
struct tree* nctemp2686= np;
nctempchar1* nctemp2688=PtreeGetref(nctemp2686);
nctempchar1* nctemp2684= nctemp2688;
struct nctempchar1 *nctemp2691;
static struct nctempchar1 nctemp2692 = {{ 5}, (char*)"aref\0"};
nctemp2691=&nctemp2692;
nctempchar1* nctemp2689= nctemp2691;
int nctemp2693=LibeStrcmp(nctemp2684,nctemp2689);
int nctemp2681 = (nctemp2693 ==0);
if(nctemp2681)
{
struct tree* nctemp2700= np;
nctempchar1* nctemp2702=PtreeGetref(nctemp2700);
nctempchar1* nctemp2698= nctemp2702;
struct nctempchar1 *nctemp2705;
static struct nctempchar1 nctemp2706 = {{ 5}, (char*)"sref\0"};
nctemp2705=&nctemp2706;
nctempchar1* nctemp2703= nctemp2705;
int nctemp2707=LibeStrcmp(nctemp2698,nctemp2703);
int nctemp2695 = (nctemp2707 ==0);
if(nctemp2695)
{
struct tree* nctemp2710= p;
struct nctempchar1 *nctemp2714;
static struct nctempchar1 nctemp2715 = {{ 25}, (char*)"not a array or structure\0"};
nctemp2714=&nctemp2715;
nctempchar1* nctemp2712= nctemp2714;
struct tree* nctemp2718= p;
nctempchar1* nctemp2720=PtreeGetdef(nctemp2718);
nctempchar1* nctemp2716= nctemp2720;
int nctemp2721=SemSerror(nctemp2710,nctemp2712,nctemp2716);
}
}
else{
struct tree* nctemp2723= p;
struct tree* nctemp2727= np;
nctempchar1* nctemp2729=PtreeGetype(nctemp2727);
nctempchar1* nctemp2725= nctemp2729;
int nctemp2730=PtreeSetype(nctemp2723,nctemp2725);
struct tree* nctemp2732= p;
struct tree* nctemp2736= np;
nctempchar1* nctemp2738=PtreeGetref(nctemp2736);
nctempchar1* nctemp2734= nctemp2738;
int nctemp2739=PtreeSetref(nctemp2732,nctemp2734);
}
}
return 1;
}
int SemCmplx (struct tree* p)
{
struct tree* np;
struct tree* nctemp2744= p;
nctempchar1* nctemp2746=PtreeGetname(nctemp2744);
nctempchar1* nctemp2742= nctemp2746;
struct nctempchar1 *nctemp2749;
static struct nctempchar1 nctemp2750 = {{ 6}, (char*)"cmplx\0"};
nctemp2749=&nctemp2750;
nctempchar1* nctemp2747= nctemp2749;
int nctemp2751=LibeStrcmp(nctemp2742,nctemp2747);
if(nctemp2751)
{
struct tree* nctemp2756= p;
struct tree* nctemp2758=PtreeMvchild(nctemp2756);
np =nctemp2758;
struct tree* nctemp2763= np;
struct tree* nctemp2765=PtreeMvchild(nctemp2763);
np =nctemp2765;
struct tree* nctemp2767= np;
struct tree* nctemp2769=SemExpr(nctemp2767);
struct tree* nctemp2775= np;
nctempchar1* nctemp2777=PtreeGetype(nctemp2775);
nctempchar1* nctemp2773= nctemp2777;
struct nctempchar1 *nctemp2780;
static struct nctempchar1 nctemp2781 = {{ 6}, (char*)"float\0"};
nctemp2780=&nctemp2781;
nctempchar1* nctemp2778= nctemp2780;
int nctemp2782=LibeStrcmp(nctemp2773,nctemp2778);
int nctemp2770 = (nctemp2782 ==0);
if(nctemp2770)
{
struct tree* nctemp2785= p;
struct nctempchar1 *nctemp2789;
static struct nctempchar1 nctemp2790 = {{ 33}, (char*)"Argument to cmplx is not a float\0"};
nctemp2789=&nctemp2790;
nctempchar1* nctemp2787= nctemp2789;
struct tree* nctemp2793= p;
nctempchar1* nctemp2795=PtreeGetdef(nctemp2793);
nctempchar1* nctemp2791= nctemp2795;
int nctemp2796=SemSerror(nctemp2785,nctemp2787,nctemp2791);
return 0;
}
struct tree* nctemp2803= np;
nctempchar1* nctemp2805=PtreeGetref(nctemp2803);
nctempchar1* nctemp2801= nctemp2805;
struct nctempchar1 *nctemp2808;
static struct nctempchar1 nctemp2809 = {{ 5}, (char*)"aref\0"};
nctemp2808=&nctemp2809;
nctempchar1* nctemp2806= nctemp2808;
int nctemp2810=LibeStrcmp(nctemp2801,nctemp2806);
struct tree* nctemp2814= np;
nctempchar1* nctemp2816=PtreeGetref(nctemp2814);
nctempchar1* nctemp2812= nctemp2816;
struct nctempchar1 *nctemp2819;
static struct nctempchar1 nctemp2820 = {{ 5}, (char*)"sref\0"};
nctemp2819=&nctemp2820;
nctempchar1* nctemp2817= nctemp2819;
int nctemp2821=LibeStrcmp(nctemp2812,nctemp2817);
int nctemp2798 = (nctemp2810 || nctemp2821);
if(nctemp2798)
{
struct tree* nctemp2823= p;
struct nctempchar1 *nctemp2827;
static struct nctempchar1 nctemp2828 = {{ 34}, (char*)"Argument to cmplx is not a scalar\0"};
nctemp2827=&nctemp2828;
nctempchar1* nctemp2825= nctemp2827;
struct tree* nctemp2831= p;
nctempchar1* nctemp2833=PtreeGetdef(nctemp2831);
nctempchar1* nctemp2829= nctemp2833;
int nctemp2834=SemSerror(nctemp2823,nctemp2825,nctemp2829);
return 0;
}
struct tree* nctemp2840= np;
struct tree* nctemp2842=PtreeMvsister(nctemp2840);
np =nctemp2842;
struct tree* nctemp2844= np;
struct tree* nctemp2846=SemExpr(nctemp2844);
struct tree* nctemp2852= np;
nctempchar1* nctemp2854=PtreeGetype(nctemp2852);
nctempchar1* nctemp2850= nctemp2854;
struct nctempchar1 *nctemp2857;
static struct nctempchar1 nctemp2858 = {{ 6}, (char*)"float\0"};
nctemp2857=&nctemp2858;
nctempchar1* nctemp2855= nctemp2857;
int nctemp2859=LibeStrcmp(nctemp2850,nctemp2855);
int nctemp2847 = (nctemp2859 ==0);
if(nctemp2847)
{
struct tree* nctemp2862= p;
struct nctempchar1 *nctemp2866;
static struct nctempchar1 nctemp2867 = {{ 33}, (char*)"Argument to cmplx is not a float\0"};
nctemp2866=&nctemp2867;
nctempchar1* nctemp2864= nctemp2866;
struct tree* nctemp2870= p;
nctempchar1* nctemp2872=PtreeGetdef(nctemp2870);
nctempchar1* nctemp2868= nctemp2872;
int nctemp2873=SemSerror(nctemp2862,nctemp2864,nctemp2868);
}
struct tree* nctemp2879= np;
nctempchar1* nctemp2881=PtreeGetref(nctemp2879);
nctempchar1* nctemp2877= nctemp2881;
struct nctempchar1 *nctemp2884;
static struct nctempchar1 nctemp2885 = {{ 5}, (char*)"aref\0"};
nctemp2884=&nctemp2885;
nctempchar1* nctemp2882= nctemp2884;
int nctemp2886=LibeStrcmp(nctemp2877,nctemp2882);
struct tree* nctemp2890= np;
nctempchar1* nctemp2892=PtreeGetref(nctemp2890);
nctempchar1* nctemp2888= nctemp2892;
struct nctempchar1 *nctemp2895;
static struct nctempchar1 nctemp2896 = {{ 5}, (char*)"sref\0"};
nctemp2895=&nctemp2896;
nctempchar1* nctemp2893= nctemp2895;
int nctemp2897=LibeStrcmp(nctemp2888,nctemp2893);
int nctemp2874 = (nctemp2886 || nctemp2897);
if(nctemp2874)
{
struct tree* nctemp2899= p;
struct nctempchar1 *nctemp2903;
static struct nctempchar1 nctemp2904 = {{ 34}, (char*)"Argument to cmplx is not a scalar\0"};
nctemp2903=&nctemp2904;
nctempchar1* nctemp2901= nctemp2903;
struct tree* nctemp2907= p;
nctempchar1* nctemp2909=PtreeGetdef(nctemp2907);
nctempchar1* nctemp2905= nctemp2909;
int nctemp2910=SemSerror(nctemp2899,nctemp2901,nctemp2905);
return 0;
}
struct tree* nctemp2913= p;
struct nctempchar1 *nctemp2917;
static struct nctempchar1 nctemp2918 = {{ 8}, (char*)"complex\0"};
nctemp2917=&nctemp2918;
nctempchar1* nctemp2915= nctemp2917;
int nctemp2919=PtreeSetype(nctemp2913,nctemp2915);
}
return 1;
}
int SemRe (struct tree* p)
{
struct tree* np;
struct tree* nctemp2924= p;
nctempchar1* nctemp2926=PtreeGetname(nctemp2924);
nctempchar1* nctemp2922= nctemp2926;
struct nctempchar1 *nctemp2929;
static struct nctempchar1 nctemp2930 = {{ 3}, (char*)"re\0"};
nctemp2929=&nctemp2930;
nctempchar1* nctemp2927= nctemp2929;
int nctemp2931=LibeStrcmp(nctemp2922,nctemp2927);
if(nctemp2931)
{
struct tree* nctemp2936= p;
struct tree* nctemp2938=PtreeMvchild(nctemp2936);
np =nctemp2938;
struct tree* nctemp2940= np;
struct tree* nctemp2942=SemExpr(nctemp2940);
struct tree* nctemp2948= np;
nctempchar1* nctemp2950=PtreeGetype(nctemp2948);
nctempchar1* nctemp2946= nctemp2950;
struct nctempchar1 *nctemp2953;
static struct nctempchar1 nctemp2954 = {{ 8}, (char*)"complex\0"};
nctemp2953=&nctemp2954;
nctempchar1* nctemp2951= nctemp2953;
int nctemp2955=LibeStrcmp(nctemp2946,nctemp2951);
int nctemp2943 = (nctemp2955 ==0);
if(nctemp2943)
{
struct tree* nctemp2958= p;
struct nctempchar1 *nctemp2962;
static struct nctempchar1 nctemp2963 = {{ 40}, (char*)"Argument to re is not a of type complex\0"};
nctemp2962=&nctemp2963;
nctempchar1* nctemp2960= nctemp2962;
struct tree* nctemp2966= p;
nctempchar1* nctemp2968=PtreeGetdef(nctemp2966);
nctempchar1* nctemp2964= nctemp2968;
int nctemp2969=SemSerror(nctemp2958,nctemp2960,nctemp2964);
return 0;
}
struct tree* nctemp2976= np;
nctempchar1* nctemp2978=PtreeGetref(nctemp2976);
nctempchar1* nctemp2974= nctemp2978;
struct nctempchar1 *nctemp2981;
static struct nctempchar1 nctemp2982 = {{ 5}, (char*)"aref\0"};
nctemp2981=&nctemp2982;
nctempchar1* nctemp2979= nctemp2981;
int nctemp2983=LibeStrcmp(nctemp2974,nctemp2979);
struct tree* nctemp2987= np;
nctempchar1* nctemp2989=PtreeGetref(nctemp2987);
nctempchar1* nctemp2985= nctemp2989;
struct nctempchar1 *nctemp2992;
static struct nctempchar1 nctemp2993 = {{ 5}, (char*)"sref\0"};
nctemp2992=&nctemp2993;
nctempchar1* nctemp2990= nctemp2992;
int nctemp2994=LibeStrcmp(nctemp2985,nctemp2990);
int nctemp2971 = (nctemp2983 || nctemp2994);
if(nctemp2971)
{
struct tree* nctemp2996= p;
struct nctempchar1 *nctemp3000;
static struct nctempchar1 nctemp3001 = {{ 31}, (char*)"Argument to re is not a scalar\0"};
nctemp3000=&nctemp3001;
nctempchar1* nctemp2998= nctemp3000;
struct tree* nctemp3004= p;
nctempchar1* nctemp3006=PtreeGetdef(nctemp3004);
nctempchar1* nctemp3002= nctemp3006;
int nctemp3007=SemSerror(nctemp2996,nctemp2998,nctemp3002);
return 0;
}
struct tree* nctemp3010= p;
struct nctempchar1 *nctemp3014;
static struct nctempchar1 nctemp3015 = {{ 6}, (char*)"float\0"};
nctemp3014=&nctemp3015;
nctempchar1* nctemp3012= nctemp3014;
int nctemp3016=PtreeSetype(nctemp3010,nctemp3012);
}
return 1;
}
int SemLen (struct tree* p)
{
struct tree* np;
struct tree* nctemp3023= p;
nctempchar1* nctemp3025=PtreeGetname(nctemp3023);
nctempchar1* nctemp3021= nctemp3025;
struct nctempchar1 *nctemp3028;
static struct nctempchar1 nctemp3029 = {{ 4}, (char*)"len\0"};
nctemp3028=&nctemp3029;
nctempchar1* nctemp3026= nctemp3028;
int nctemp3030=LibeStrcmp(nctemp3021,nctemp3026);
int nctemp3018 = (nctemp3030 ==1);
if(nctemp3018)
{
struct tree* nctemp3033= p;
struct nctempchar1 *nctemp3037;
static struct nctempchar1 nctemp3038 = {{ 4}, (char*)"int\0"};
nctemp3037=&nctemp3038;
nctempchar1* nctemp3035= nctemp3037;
int nctemp3039=PtreeSetype(nctemp3033,nctemp3035);
struct tree* nctemp3044= p;
struct tree* nctemp3046=PtreeMvchild(nctemp3044);
np =nctemp3046;
struct tree* nctemp3048= np;
struct tree* nctemp3050=SemExpr(nctemp3048);
struct tree* nctemp3056= np;
nctempchar1* nctemp3058=PtreeGetref(nctemp3056);
nctempchar1* nctemp3054= nctemp3058;
struct nctempchar1 *nctemp3061;
static struct nctempchar1 nctemp3062 = {{ 5}, (char*)"aref\0"};
nctemp3061=&nctemp3062;
nctempchar1* nctemp3059= nctemp3061;
int nctemp3063=LibeStrcmp(nctemp3054,nctemp3059);
int nctemp3051 = (nctemp3063 ==0);
if(nctemp3051)
{
struct tree* nctemp3066= p;
struct nctempchar1 *nctemp3070;
static struct nctempchar1 nctemp3071 = {{ 13}, (char*)"not an array\0"};
nctemp3070=&nctemp3071;
nctempchar1* nctemp3068= nctemp3070;
struct tree* nctemp3074= p;
nctempchar1* nctemp3076=PtreeGetdef(nctemp3074);
nctempchar1* nctemp3072= nctemp3076;
int nctemp3077=SemSerror(nctemp3066,nctemp3068,nctemp3072);
}
struct tree* nctemp3082= np;
struct tree* nctemp3084=PtreeMvsister(nctemp3082);
np =nctemp3084;
struct tree* nctemp3086= np;
struct tree* nctemp3088=SemExpr(nctemp3086);
struct tree* nctemp3092= np;
nctempchar1* nctemp3094=PtreeGetref(nctemp3092);
nctempchar1* nctemp3090= nctemp3094;
struct nctempchar1 *nctemp3097;
static struct nctempchar1 nctemp3098 = {{ 5}, (char*)"aref\0"};
nctemp3097=&nctemp3098;
nctempchar1* nctemp3095= nctemp3097;
int nctemp3099=LibeStrcmp(nctemp3090,nctemp3095);
if(nctemp3099)
{
struct tree* nctemp3101= p;
struct nctempchar1 *nctemp3105;
static struct nctempchar1 nctemp3106 = {{ 13}, (char*)"not a scalar\0"};
nctemp3105=&nctemp3106;
nctempchar1* nctemp3103= nctemp3105;
struct tree* nctemp3109= p;
nctempchar1* nctemp3111=PtreeGetdef(nctemp3109);
nctempchar1* nctemp3107= nctemp3111;
int nctemp3112=SemSerror(nctemp3101,nctemp3103,nctemp3107);
}
struct tree* nctemp3118= np;
nctempchar1* nctemp3120=PtreeGetype(nctemp3118);
nctempchar1* nctemp3116= nctemp3120;
struct nctempchar1 *nctemp3123;
static struct nctempchar1 nctemp3124 = {{ 4}, (char*)"int\0"};
nctemp3123=&nctemp3124;
nctempchar1* nctemp3121= nctemp3123;
int nctemp3125=LibeStrcmp(nctemp3116,nctemp3121);
int nctemp3113 = (nctemp3125 ==0);
if(nctemp3113)
{
struct tree* nctemp3128= p;
struct nctempchar1 *nctemp3132;
static struct nctempchar1 nctemp3133 = {{ 26}, (char*)"not an integer expression\0"};
nctemp3132=&nctemp3133;
nctempchar1* nctemp3130= nctemp3132;
struct tree* nctemp3136= p;
nctempchar1* nctemp3138=PtreeGetdef(nctemp3136);
nctempchar1* nctemp3134= nctemp3138;
int nctemp3139=SemSerror(nctemp3128,nctemp3130,nctemp3134);
}
struct tree* nctemp3147= np;
struct tree* nctemp3149=PtreeMvsister(nctemp3147);
np =nctemp3149;
int nctemp3140 = (np !=0);
if(nctemp3140)
{
struct tree* nctemp3152= p;
struct nctempchar1 *nctemp3156;
static struct nctempchar1 nctemp3157 = {{ 19}, (char*)"too many arguments\0"};
nctemp3156=&nctemp3157;
nctempchar1* nctemp3154= nctemp3156;
struct tree* nctemp3160= p;
nctempchar1* nctemp3162=PtreeGetdef(nctemp3160);
nctempchar1* nctemp3158= nctemp3162;
int nctemp3163=SemSerror(nctemp3152,nctemp3154,nctemp3158);
}
}
return 1;
}
int SemIm (struct tree* p)
{
struct tree* np;
struct tree* nctemp3168= p;
nctempchar1* nctemp3170=PtreeGetname(nctemp3168);
nctempchar1* nctemp3166= nctemp3170;
struct nctempchar1 *nctemp3173;
static struct nctempchar1 nctemp3174 = {{ 3}, (char*)"im\0"};
nctemp3173=&nctemp3174;
nctempchar1* nctemp3171= nctemp3173;
int nctemp3175=LibeStrcmp(nctemp3166,nctemp3171);
if(nctemp3175)
{
struct tree* nctemp3180= p;
struct tree* nctemp3182=PtreeMvchild(nctemp3180);
np =nctemp3182;
struct tree* nctemp3184= np;
struct tree* nctemp3186=SemExpr(nctemp3184);
struct tree* nctemp3192= np;
nctempchar1* nctemp3194=PtreeGetype(nctemp3192);
nctempchar1* nctemp3190= nctemp3194;
struct nctempchar1 *nctemp3197;
static struct nctempchar1 nctemp3198 = {{ 8}, (char*)"complex\0"};
nctemp3197=&nctemp3198;
nctempchar1* nctemp3195= nctemp3197;
int nctemp3199=LibeStrcmp(nctemp3190,nctemp3195);
int nctemp3187 = (nctemp3199 ==0);
if(nctemp3187)
{
struct tree* nctemp3202= p;
struct nctempchar1 *nctemp3206;
static struct nctempchar1 nctemp3207 = {{ 38}, (char*)"Argument to re is not of type complex\0"};
nctemp3206=&nctemp3207;
nctempchar1* nctemp3204= nctemp3206;
struct tree* nctemp3210= p;
nctempchar1* nctemp3212=PtreeGetdef(nctemp3210);
nctempchar1* nctemp3208= nctemp3212;
int nctemp3213=SemSerror(nctemp3202,nctemp3204,nctemp3208);
return 0;
}
struct tree* nctemp3220= np;
nctempchar1* nctemp3222=PtreeGetref(nctemp3220);
nctempchar1* nctemp3218= nctemp3222;
struct nctempchar1 *nctemp3225;
static struct nctempchar1 nctemp3226 = {{ 5}, (char*)"aref\0"};
nctemp3225=&nctemp3226;
nctempchar1* nctemp3223= nctemp3225;
int nctemp3227=LibeStrcmp(nctemp3218,nctemp3223);
struct tree* nctemp3231= np;
nctempchar1* nctemp3233=PtreeGetref(nctemp3231);
nctempchar1* nctemp3229= nctemp3233;
struct nctempchar1 *nctemp3236;
static struct nctempchar1 nctemp3237 = {{ 5}, (char*)"sref\0"};
nctemp3236=&nctemp3237;
nctempchar1* nctemp3234= nctemp3236;
int nctemp3238=LibeStrcmp(nctemp3229,nctemp3234);
int nctemp3215 = (nctemp3227 || nctemp3238);
if(nctemp3215)
{
struct tree* nctemp3240= p;
struct nctempchar1 *nctemp3244;
static struct nctempchar1 nctemp3245 = {{ 31}, (char*)"Argument to re is not a scalar\0"};
nctemp3244=&nctemp3245;
nctempchar1* nctemp3242= nctemp3244;
struct tree* nctemp3248= p;
nctempchar1* nctemp3250=PtreeGetdef(nctemp3248);
nctempchar1* nctemp3246= nctemp3250;
int nctemp3251=SemSerror(nctemp3240,nctemp3242,nctemp3246);
return 0;
}
struct tree* nctemp3254= p;
struct nctempchar1 *nctemp3258;
static struct nctempchar1 nctemp3259 = {{ 6}, (char*)"float\0"};
nctemp3258=&nctemp3259;
nctempchar1* nctemp3256= nctemp3258;
int nctemp3260=PtreeSetype(nctemp3254,nctemp3256);
}
return 1;
}
int SemSizeof (struct tree* p)
{
struct tree* nctemp3265= p;
nctempchar1* nctemp3267=PtreeGetname(nctemp3265);
nctempchar1* nctemp3263= nctemp3267;
struct nctempchar1 *nctemp3270;
static struct nctempchar1 nctemp3271 = {{ 7}, (char*)"sizeof\0"};
nctemp3270=&nctemp3271;
nctempchar1* nctemp3268= nctemp3270;
int nctemp3272=LibeStrcmp(nctemp3263,nctemp3268);
if(nctemp3272)
{
struct tree* nctemp3274= p;
struct nctempchar1 *nctemp3278;
static struct nctempchar1 nctemp3279 = {{ 4}, (char*)"int\0"};
nctemp3278=&nctemp3279;
nctempchar1* nctemp3276= nctemp3278;
int nctemp3280=PtreeSetype(nctemp3274,nctemp3276);
}
return 1;
}
int SemComparetype (struct tree* p,struct tree* np)
{
int rval;
rval = 1;
struct tree* nctemp3287= p;
nctempchar1* nctemp3289=PtreeGetype(nctemp3287);
nctempchar1* nctemp3285= nctemp3289;
struct tree* nctemp3292= np;
nctempchar1* nctemp3294=PtreeGetype(nctemp3292);
nctempchar1* nctemp3290= nctemp3294;
int nctemp3295=LibeStrcmp(nctemp3285,nctemp3290);
int nctemp3282 = (nctemp3295 ==0);
if(nctemp3282)
{
rval = 0;
}
struct tree* nctemp3302= p;
nctempchar1* nctemp3304=PtreeGetref(nctemp3302);
nctempchar1* nctemp3300= nctemp3304;
struct tree* nctemp3307= np;
nctempchar1* nctemp3309=PtreeGetref(nctemp3307);
nctempchar1* nctemp3305= nctemp3309;
int nctemp3310=LibeStrcmp(nctemp3300,nctemp3305);
int nctemp3297 = (nctemp3310 ==0);
if(nctemp3297)
{
struct tree* nctemp3315= np;
nctempchar1* nctemp3317=PtreeGetname(nctemp3315);
nctempchar1* nctemp3313= nctemp3317;
struct nctempchar1 *nctemp3320;
static struct nctempchar1 nctemp3321 = {{ 10}, (char*)"iconstant\0"};
nctemp3320=&nctemp3321;
nctempchar1* nctemp3318= nctemp3320;
int nctemp3322=LibeStrcmp(nctemp3313,nctemp3318);
if(nctemp3322)
{
struct tree* nctemp3326= np;
nctempchar1* nctemp3328=PtreeGetdef(nctemp3326);
nctempchar1* nctemp3324= nctemp3328;
struct nctempchar1 *nctemp3331;
static struct nctempchar1 nctemp3332 = {{ 2}, (char*)"0\0"};
nctemp3331=&nctemp3332;
nctempchar1* nctemp3329= nctemp3331;
int nctemp3333=LibeStrcmp(nctemp3324,nctemp3329);
if(nctemp3333)
{
rval = 1;
}
else{
rval = 0;
}
}
else{
rval = 0;
}
}
else{
struct tree* nctemp3339= p;
nctempchar1* nctemp3341=PtreeGetref(nctemp3339);
nctempchar1* nctemp3337= nctemp3341;
struct nctempchar1 *nctemp3344;
static struct nctempchar1 nctemp3345 = {{ 5}, (char*)"aref\0"};
nctemp3344=&nctemp3345;
nctempchar1* nctemp3342= nctemp3344;
int nctemp3346=LibeStrcmp(nctemp3337,nctemp3342);
int nctemp3334 = (nctemp3346 ==1);
if(nctemp3334)
{
struct tree* nctemp3351= p;
int nctemp3353=PtreeGetrank(nctemp3351);
struct tree* nctemp3355= np;
int nctemp3357=PtreeGetrank(nctemp3355);
int nctemp3348 = (nctemp3353 !=nctemp3357);
if(nctemp3348)
{
rval = 0;
}
}
}
return rval;
}
struct tree* SemAsgexpr (struct tree* p)
{
struct tree* np;
struct tree* nctemp3363= p;
struct tree* nctemp3365=PtreeMvchild(nctemp3363);
np =nctemp3365;
struct tree* nctemp3371= np;
nctempchar1* nctemp3373=PtreeGetlval(nctemp3371);
nctempchar1* nctemp3369= nctemp3373;
struct nctempchar1 *nctemp3376;
static struct nctempchar1 nctemp3377 = {{ 5}, (char*)"lval\0"};
nctemp3376=&nctemp3377;
nctempchar1* nctemp3374= nctemp3376;
int nctemp3378=LibeStrcmp(nctemp3369,nctemp3374);
int nctemp3366 = (nctemp3378 ==0);
if(nctemp3366)
{
struct tree* nctemp3381= np;
struct nctempchar1 *nctemp3385;
static struct nctempchar1 nctemp3386 = {{ 17}, (char*)"Not a left value\0"};
nctemp3385=&nctemp3386;
nctempchar1* nctemp3383= nctemp3385;
struct tree* nctemp3389= np;
nctempchar1* nctemp3391=PtreeGetdef(nctemp3389);
nctempchar1* nctemp3387= nctemp3391;
int nctemp3392=SemSerror(nctemp3381,nctemp3383,nctemp3387);
}
else{
struct tree* nctemp3394= p;
struct nctempchar1 *nctemp3398;
static struct nctempchar1 nctemp3399 = {{ 5}, (char*)"lval\0"};
nctemp3398=&nctemp3399;
nctempchar1* nctemp3396= nctemp3398;
int nctemp3400=PtreeSetlval(nctemp3394,nctemp3396);
}
struct tree* nctemp3402= np;
struct tree* nctemp3404= p;
int nctemp3406=SemCopytype(nctemp3402,nctemp3404);
return p;
}
struct tree* SemRelexpr (struct tree* p)
{
struct tree* np;
struct tree* rp;
struct tree* nctemp3412= p;
struct tree* nctemp3414=PtreeMvchild(nctemp3412);
np =nctemp3414;
struct tree* nctemp3419= np;
struct tree* nctemp3421=PtreeMvsister(nctemp3419);
rp =nctemp3421;
struct tree* nctemp3427= p;
nctempchar1* nctemp3429=PtreeGetdef(nctemp3427);
nctempchar1* nctemp3425= nctemp3429;
struct nctempchar1 *nctemp3432;
static struct nctempchar1 nctemp3433 = {{ 3}, (char*)"==\0"};
nctemp3432=&nctemp3433;
nctempchar1* nctemp3430= nctemp3432;
int nctemp3434=LibeStrcmp(nctemp3425,nctemp3430);
int nctemp3422 = (nctemp3434 ==0);
if(nctemp3422)
{
struct tree* nctemp3441= p;
nctempchar1* nctemp3443=PtreeGetdef(nctemp3441);
nctempchar1* nctemp3439= nctemp3443;
struct nctempchar1 *nctemp3446;
static struct nctempchar1 nctemp3447 = {{ 3}, (char*)"!=\0"};
nctemp3446=&nctemp3447;
nctempchar1* nctemp3444= nctemp3446;
int nctemp3448=LibeStrcmp(nctemp3439,nctemp3444);
int nctemp3436 = (nctemp3448 ==0);
if(nctemp3436)
{
struct tree* nctemp3455= np;
nctempchar1* nctemp3457=PtreeGetref(nctemp3455);
nctempchar1* nctemp3453= nctemp3457;
struct nctempchar1 *nctemp3460;
static struct nctempchar1 nctemp3461 = {{ 5}, (char*)"aref\0"};
nctemp3460=&nctemp3461;
nctempchar1* nctemp3458= nctemp3460;
int nctemp3462=LibeStrcmp(nctemp3453,nctemp3458);
struct tree* nctemp3466= np;
nctempchar1* nctemp3468=PtreeGetref(nctemp3466);
nctempchar1* nctemp3464= nctemp3468;
struct nctempchar1 *nctemp3471;
static struct nctempchar1 nctemp3472 = {{ 5}, (char*)"sref\0"};
nctemp3471=&nctemp3472;
nctempchar1* nctemp3469= nctemp3471;
int nctemp3473=LibeStrcmp(nctemp3464,nctemp3469);
int nctemp3450 = (nctemp3462 || nctemp3473);
if(nctemp3450)
{
struct tree* nctemp3475= p;
struct nctempchar1 *nctemp3479;
static struct nctempchar1 nctemp3480 = {{ 18}, (char*)"Illegal operation\0"};
nctemp3479=&nctemp3480;
nctempchar1* nctemp3477= nctemp3479;
struct nctempchar1 *nctemp3483;
static struct nctempchar1 nctemp3484 = {{ 2}, (char*)" \0"};
nctemp3483=&nctemp3484;
nctempchar1* nctemp3481= nctemp3483;
int nctemp3485=SemSerror(nctemp3475,nctemp3477,nctemp3481);
}
else{
struct tree* nctemp3491= rp;
nctempchar1* nctemp3493=PtreeGetref(nctemp3491);
nctempchar1* nctemp3489= nctemp3493;
struct nctempchar1 *nctemp3496;
static struct nctempchar1 nctemp3497 = {{ 5}, (char*)"aref\0"};
nctemp3496=&nctemp3497;
nctempchar1* nctemp3494= nctemp3496;
int nctemp3498=LibeStrcmp(nctemp3489,nctemp3494);
struct tree* nctemp3502= np;
nctempchar1* nctemp3504=PtreeGetref(nctemp3502);
nctempchar1* nctemp3500= nctemp3504;
struct nctempchar1 *nctemp3507;
static struct nctempchar1 nctemp3508 = {{ 5}, (char*)"sref\0"};
nctemp3507=&nctemp3508;
nctempchar1* nctemp3505= nctemp3507;
int nctemp3509=LibeStrcmp(nctemp3500,nctemp3505);
int nctemp3486 = (nctemp3498 || nctemp3509);
if(nctemp3486)
{
struct tree* nctemp3511= p;
struct nctempchar1 *nctemp3515;
static struct nctempchar1 nctemp3516 = {{ 18}, (char*)"Illegal operation\0"};
nctemp3515=&nctemp3516;
nctempchar1* nctemp3513= nctemp3515;
struct nctempchar1 *nctemp3519;
static struct nctempchar1 nctemp3520 = {{ 2}, (char*)" \0"};
nctemp3519=&nctemp3520;
nctempchar1* nctemp3517= nctemp3519;
int nctemp3521=SemSerror(nctemp3511,nctemp3513,nctemp3517);
}
}
}
else{
struct tree* nctemp3525= np;
nctempchar1* nctemp3527=PtreeGetype(nctemp3525);
nctempchar1* nctemp3523= nctemp3527;
struct nctempchar1 *nctemp3530;
static struct nctempchar1 nctemp3531 = {{ 8}, (char*)"complex\0"};
nctemp3530=&nctemp3531;
nctempchar1* nctemp3528= nctemp3530;
int nctemp3532=LibeStrcmp(nctemp3523,nctemp3528);
if(nctemp3532)
{
struct tree* nctemp3534= p;
struct nctempchar1 *nctemp3538;
static struct nctempchar1 nctemp3539 = {{ 18}, (char*)"Illegal operation\0"};
nctemp3538=&nctemp3539;
nctempchar1* nctemp3536= nctemp3538;
struct nctempchar1 *nctemp3542;
static struct nctempchar1 nctemp3543 = {{ 2}, (char*)" \0"};
nctemp3542=&nctemp3543;
nctempchar1* nctemp3540= nctemp3542;
int nctemp3544=SemSerror(nctemp3534,nctemp3536,nctemp3540);
}
}
}
struct tree* nctemp3546= p;
struct nctempchar1 *nctemp3550;
static struct nctempchar1 nctemp3551 = {{ 4}, (char*)"int\0"};
nctemp3550=&nctemp3551;
nctempchar1* nctemp3548= nctemp3550;
int nctemp3552=PtreeSetype(nctemp3546,nctemp3548);
struct tree* nctemp3554= p;
struct nctempchar1 *nctemp3558;
static struct nctempchar1 nctemp3559 = {{ 5}, (char*)"void\0"};
nctemp3558=&nctemp3559;
nctempchar1* nctemp3556= nctemp3558;
int nctemp3560=PtreeSetlval(nctemp3554,nctemp3556);
struct tree* nctemp3562= p;
struct nctempchar1 *nctemp3566;
static struct nctempchar1 nctemp3567 = {{ 5}, (char*)"void\0"};
nctemp3566=&nctemp3567;
nctempchar1* nctemp3564= nctemp3566;
int nctemp3568=PtreeSetstruct(nctemp3562,nctemp3564);
return p;
}
struct tree* SemAddexpr (struct tree* p)
{
struct tree* np;
struct tree* rp;
struct tree* nctemp3574= p;
struct tree* nctemp3576=PtreeMvchild(nctemp3574);
np =nctemp3576;
struct tree* nctemp3581= np;
struct tree* nctemp3583=PtreeMvsister(nctemp3581);
rp =nctemp3583;
struct tree* nctemp3587= np;
nctempchar1* nctemp3589=PtreeGetref(nctemp3587);
nctempchar1* nctemp3585= nctemp3589;
struct nctempchar1 *nctemp3592;
static struct nctempchar1 nctemp3593 = {{ 5}, (char*)"sref\0"};
nctemp3592=&nctemp3593;
nctempchar1* nctemp3590= nctemp3592;
int nctemp3594=LibeStrcmp(nctemp3585,nctemp3590);
if(nctemp3594)
{
struct tree* nctemp3596= np;
struct nctempchar1 *nctemp3600;
static struct nctempchar1 nctemp3601 = {{ 18}, (char*)"Illegal operation\0"};
nctemp3600=&nctemp3601;
nctempchar1* nctemp3598= nctemp3600;
struct nctempchar1 *nctemp3604;
static struct nctempchar1 nctemp3605 = {{ 2}, (char*)" \0"};
nctemp3604=&nctemp3605;
nctempchar1* nctemp3602= nctemp3604;
int nctemp3606=SemSerror(nctemp3596,nctemp3598,nctemp3602);
}
else{
struct tree* nctemp3610= rp;
nctempchar1* nctemp3612=PtreeGetref(nctemp3610);
nctempchar1* nctemp3608= nctemp3612;
struct nctempchar1 *nctemp3615;
static struct nctempchar1 nctemp3616 = {{ 5}, (char*)"sref\0"};
nctemp3615=&nctemp3616;
nctempchar1* nctemp3613= nctemp3615;
int nctemp3617=LibeStrcmp(nctemp3608,nctemp3613);
if(nctemp3617)
{
struct tree* nctemp3619= np;
struct nctempchar1 *nctemp3623;
static struct nctempchar1 nctemp3624 = {{ 18}, (char*)"Illegal operation\0"};
nctemp3623=&nctemp3624;
nctempchar1* nctemp3621= nctemp3623;
struct nctempchar1 *nctemp3627;
static struct nctempchar1 nctemp3628 = {{ 2}, (char*)" \0"};
nctemp3627=&nctemp3628;
nctempchar1* nctemp3625= nctemp3627;
int nctemp3629=SemSerror(nctemp3619,nctemp3621,nctemp3625);
}
else{
struct tree* nctemp3631= np;
struct tree* nctemp3633= p;
int nctemp3635=SemCopytype(nctemp3631,nctemp3633);
struct tree* nctemp3637= p;
struct nctempchar1 *nctemp3641;
static struct nctempchar1 nctemp3642 = {{ 5}, (char*)"void\0"};
nctemp3641=&nctemp3642;
nctempchar1* nctemp3639= nctemp3641;
int nctemp3643=PtreeSetlval(nctemp3637,nctemp3639);
}
}
return p;
}
struct tree* SemBinexpr (struct tree* p)
{
struct tree* leftp;
struct tree* rightp;
struct tree* np;
np = p;
struct tree* nctemp3648= p;
nctempchar1* nctemp3650=PtreeGetname(nctemp3648);
nctempchar1* nctemp3646= nctemp3650;
struct nctempchar1 *nctemp3653;
static struct nctempchar1 nctemp3654 = {{ 8}, (char*)"binexpr\0"};
nctemp3653=&nctemp3654;
nctempchar1* nctemp3651= nctemp3653;
int nctemp3655=LibeStrcmp(nctemp3646,nctemp3651);
if(nctemp3655)
{
struct tree* nctemp3660= p;
struct tree* nctemp3662=PtreeMvchild(nctemp3660);
p =nctemp3662;
struct tree* nctemp3667= p;
struct tree* nctemp3669=SemUnexpr(nctemp3667);
leftp =nctemp3669;
struct tree* nctemp3674= p;
struct tree* nctemp3676=PtreeMvsister(nctemp3674);
p =nctemp3676;
struct tree* nctemp3681= p;
struct tree* nctemp3683=SemUnexpr(nctemp3681);
rightp =nctemp3683;
struct tree* nctemp3687= leftp;
struct tree* nctemp3689= rightp;
int nctemp3691=SemComparetype(nctemp3687,nctemp3689);
int nctemp3684 = (nctemp3691 ==0);
if(nctemp3684)
{
struct tree* nctemp3694= p;
struct nctempchar1 *nctemp3698;
static struct nctempchar1 nctemp3699 = {{ 11}, (char*)"Type error\0"};
nctemp3698=&nctemp3699;
nctempchar1* nctemp3696= nctemp3698;
struct nctempchar1 *nctemp3702;
static struct nctempchar1 nctemp3703 = {{ 2}, (char*)" \0"};
nctemp3702=&nctemp3703;
nctempchar1* nctemp3700= nctemp3702;
int nctemp3704=SemSerror(nctemp3694,nctemp3696,nctemp3700);
return p;
}
else{
struct tree* nctemp3709= np;
nctempchar1* nctemp3711=PtreeGetdef(nctemp3709);
nctempchar1* nctemp3707= nctemp3711;
struct nctempchar1 *nctemp3714;
static struct nctempchar1 nctemp3715 = {{ 2}, (char*)"=\0"};
nctemp3714=&nctemp3715;
nctempchar1* nctemp3712= nctemp3714;
int nctemp3716=LibeStrcmp(nctemp3707,nctemp3712);
if(nctemp3716)
{
struct tree* nctemp3718= np;
struct tree* nctemp3720=SemAsgexpr(nctemp3718);
}
else{
struct tree* nctemp3744= np;
nctempchar1* nctemp3746=PtreeGetdef(nctemp3744);
nctempchar1* nctemp3742= nctemp3746;
struct nctempchar1 *nctemp3749;
static struct nctempchar1 nctemp3750 = {{ 3}, (char*)"!=\0"};
nctemp3749=&nctemp3750;
nctempchar1* nctemp3747= nctemp3749;
int nctemp3751=LibeStrcmp(nctemp3742,nctemp3747);
struct tree* nctemp3755= np;
nctempchar1* nctemp3757=PtreeGetdef(nctemp3755);
nctempchar1* nctemp3753= nctemp3757;
struct nctempchar1 *nctemp3760;
static struct nctempchar1 nctemp3761 = {{ 3}, (char*)"==\0"};
nctemp3760=&nctemp3761;
nctempchar1* nctemp3758= nctemp3760;
int nctemp3762=LibeStrcmp(nctemp3753,nctemp3758);
int nctemp3739 = (nctemp3751 || nctemp3762);
struct tree* nctemp3766= np;
nctempchar1* nctemp3768=PtreeGetdef(nctemp3766);
nctempchar1* nctemp3764= nctemp3768;
struct nctempchar1 *nctemp3771;
static struct nctempchar1 nctemp3772 = {{ 3}, (char*)"||\0"};
nctemp3771=&nctemp3772;
nctempchar1* nctemp3769= nctemp3771;
int nctemp3773=LibeStrcmp(nctemp3764,nctemp3769);
int nctemp3736 = (nctemp3739 || nctemp3773);
struct tree* nctemp3777= np;
nctempchar1* nctemp3779=PtreeGetdef(nctemp3777);
nctempchar1* nctemp3775= nctemp3779;
struct nctempchar1 *nctemp3782;
static struct nctempchar1 nctemp3783 = {{ 3}, (char*)"<=\0"};
nctemp3782=&nctemp3783;
nctempchar1* nctemp3780= nctemp3782;
int nctemp3784=LibeStrcmp(nctemp3775,nctemp3780);
int nctemp3733 = (nctemp3736 || nctemp3784);
struct tree* nctemp3788= np;
nctempchar1* nctemp3790=PtreeGetdef(nctemp3788);
nctempchar1* nctemp3786= nctemp3790;
struct nctempchar1 *nctemp3793;
static struct nctempchar1 nctemp3794 = {{ 3}, (char*)">=\0"};
nctemp3793=&nctemp3794;
nctempchar1* nctemp3791= nctemp3793;
int nctemp3795=LibeStrcmp(nctemp3786,nctemp3791);
int nctemp3730 = (nctemp3733 || nctemp3795);
struct tree* nctemp3799= np;
nctempchar1* nctemp3801=PtreeGetdef(nctemp3799);
nctempchar1* nctemp3797= nctemp3801;
struct nctempchar1 *nctemp3804;
static struct nctempchar1 nctemp3805 = {{ 2}, (char*)"<\0"};
nctemp3804=&nctemp3805;
nctempchar1* nctemp3802= nctemp3804;
int nctemp3806=LibeStrcmp(nctemp3797,nctemp3802);
int nctemp3727 = (nctemp3730 || nctemp3806);
struct tree* nctemp3810= np;
nctempchar1* nctemp3812=PtreeGetdef(nctemp3810);
nctempchar1* nctemp3808= nctemp3812;
struct nctempchar1 *nctemp3815;
static struct nctempchar1 nctemp3816 = {{ 2}, (char*)">\0"};
nctemp3815=&nctemp3816;
nctempchar1* nctemp3813= nctemp3815;
int nctemp3817=LibeStrcmp(nctemp3808,nctemp3813);
int nctemp3724 = (nctemp3727 || nctemp3817);
struct tree* nctemp3821= np;
nctempchar1* nctemp3823=PtreeGetdef(nctemp3821);
nctempchar1* nctemp3819= nctemp3823;
struct nctempchar1 *nctemp3826;
static struct nctempchar1 nctemp3827 = {{ 3}, (char*)"&&\0"};
nctemp3826=&nctemp3827;
nctempchar1* nctemp3824= nctemp3826;
int nctemp3828=LibeStrcmp(nctemp3819,nctemp3824);
int nctemp3721 = (nctemp3724 || nctemp3828);
if(nctemp3721)
{
struct tree* nctemp3830= np;
struct tree* nctemp3832=SemRelexpr(nctemp3830);
}
else{
struct tree* nctemp3844= np;
nctempchar1* nctemp3846=PtreeGetdef(nctemp3844);
nctempchar1* nctemp3842= nctemp3846;
struct nctempchar1 *nctemp3849;
static struct nctempchar1 nctemp3850 = {{ 2}, (char*)"+\0"};
nctemp3849=&nctemp3850;
nctempchar1* nctemp3847= nctemp3849;
int nctemp3851=LibeStrcmp(nctemp3842,nctemp3847);
struct tree* nctemp3855= np;
nctempchar1* nctemp3857=PtreeGetdef(nctemp3855);
nctempchar1* nctemp3853= nctemp3857;
struct nctempchar1 *nctemp3860;
static struct nctempchar1 nctemp3861 = {{ 2}, (char*)"-\0"};
nctemp3860=&nctemp3861;
nctempchar1* nctemp3858= nctemp3860;
int nctemp3862=LibeStrcmp(nctemp3853,nctemp3858);
int nctemp3839 = (nctemp3851 || nctemp3862);
struct tree* nctemp3866= np;
nctempchar1* nctemp3868=PtreeGetdef(nctemp3866);
nctempchar1* nctemp3864= nctemp3868;
struct nctempchar1 *nctemp3871;
static struct nctempchar1 nctemp3872 = {{ 2}, (char*)"*\0"};
nctemp3871=&nctemp3872;
nctempchar1* nctemp3869= nctemp3871;
int nctemp3873=LibeStrcmp(nctemp3864,nctemp3869);
int nctemp3836 = (nctemp3839 || nctemp3873);
struct tree* nctemp3877= np;
nctempchar1* nctemp3879=PtreeGetdef(nctemp3877);
nctempchar1* nctemp3875= nctemp3879;
struct nctempchar1 *nctemp3882;
static struct nctempchar1 nctemp3883 = {{ 2}, (char*)"/\0"};
nctemp3882=&nctemp3883;
nctempchar1* nctemp3880= nctemp3882;
int nctemp3884=LibeStrcmp(nctemp3875,nctemp3880);
int nctemp3833 = (nctemp3836 || nctemp3884);
if(nctemp3833)
{
struct tree* nctemp3886= np;
struct tree* nctemp3888=SemAddexpr(nctemp3886);
}
}
}
return np;
}
}
else{
struct tree* nctemp3891= p;
struct tree* nctemp3893=SemUnexpr(nctemp3891);
return nctemp3893;
}
}
struct tree* SemExpr (struct tree* p)
{
struct tree* sp;
struct tree* nctemp3898= p;
struct tree* nctemp3900=PtreeMvchild(nctemp3898);
sp =nctemp3900;
struct tree* nctemp3905= sp;
struct tree* nctemp3907=SemBinexpr(nctemp3905);
sp =nctemp3907;
struct tree* nctemp3909= sp;
struct tree* nctemp3911= p;
int nctemp3913=SemCopytype(nctemp3909,nctemp3911);
struct tree* nctemp3917= p;
int nctemp3919=PtreeGetopexpr(nctemp3917);
int nctemp3914 = (nctemp3919 ==1);
if(nctemp3914)
{
int nctemp3924=SemGetsimple();
int nctemp3921 = (nctemp3924 ==0);
if(nctemp3921)
{
struct tree* nctemp3927= p;
int nctemp3929= 0;
int nctemp3931=PtreeSetsimple(nctemp3927,nctemp3929);
int nctemp3933= 1;
int nctemp3935=SemSetsimple(nctemp3933);
}
else{
struct tree* nctemp3937= p;
int nctemp3939= 1;
int nctemp3941=PtreeSetsimple(nctemp3937,nctemp3939);
}
}
return p;
}
struct tree* SemUnexpr (struct tree* p)
{
struct tree* np;
np = p;
struct tree* nctemp3946= p;
nctempchar1* nctemp3948=PtreeGetname(nctemp3946);
nctempchar1* nctemp3944= nctemp3948;
struct nctempchar1 *nctemp3951;
static struct nctempchar1 nctemp3952 = {{ 7}, (char*)"unexpr\0"};
nctemp3951=&nctemp3952;
nctempchar1* nctemp3949= nctemp3951;
int nctemp3953=LibeStrcmp(nctemp3944,nctemp3949);
if(nctemp3953)
{
struct tree* nctemp3958= p;
struct tree* nctemp3960=PtreeMvchild(nctemp3958);
p =nctemp3960;
struct tree* nctemp3965= p;
struct tree* nctemp3967=SemPrimexpr(nctemp3965);
p =nctemp3967;
struct tree* nctemp3969= p;
struct tree* nctemp3971= np;
int nctemp3973=SemCopytype(nctemp3969,nctemp3971);
return np;
}
else{
struct tree* nctemp3976= p;
struct tree* nctemp3978=SemPrimexpr(nctemp3976);
return nctemp3978;
}
}
struct tree* SemPrimexpr (struct tree* p)
{
struct tree* nctemp3982= p;
nctempchar1* nctemp3984=PtreeGetname(nctemp3982);
nctempchar1* nctemp3980= nctemp3984;
struct nctempchar1 *nctemp3987;
static struct nctempchar1 nctemp3988 = {{ 11}, (char*)"identifier\0"};
nctemp3987=&nctemp3988;
nctempchar1* nctemp3985= nctemp3987;
int nctemp3989=LibeStrcmp(nctemp3980,nctemp3985);
if(nctemp3989)
{
struct tree* nctemp3991= p;
int nctemp3993=SemId(nctemp3991);
return p;
}
else{
struct tree* nctemp3998= p;
nctempchar1* nctemp4000=PtreeGetname(nctemp3998);
nctempchar1* nctemp3996= nctemp4000;
struct nctempchar1 *nctemp4003;
static struct nctempchar1 nctemp4004 = {{ 6}, (char*)"fcall\0"};
nctemp4003=&nctemp4004;
nctempchar1* nctemp4001= nctemp4003;
int nctemp4005=LibeStrcmp(nctemp3996,nctemp4001);
if(nctemp4005)
{
int nctemp4007= 0;
int nctemp4009=SemSetsimple(nctemp4007);
struct tree* nctemp4011= p;
int nctemp4013=SemFcall(nctemp4011);
return p;
}
else{
struct tree* nctemp4018= p;
nctempchar1* nctemp4020=PtreeGetname(nctemp4018);
nctempchar1* nctemp4016= nctemp4020;
struct nctempchar1 *nctemp4023;
static struct nctempchar1 nctemp4024 = {{ 5}, (char*)"cast\0"};
nctemp4023=&nctemp4024;
nctempchar1* nctemp4021= nctemp4023;
int nctemp4025=LibeStrcmp(nctemp4016,nctemp4021);
if(nctemp4025)
{
int nctemp4027= 0;
int nctemp4029=SemSetsimple(nctemp4027);
struct tree* nctemp4031= p;
int nctemp4033=SemCast(nctemp4031);
return p;
}
else{
struct tree* nctemp4038= p;
nctempchar1* nctemp4040=PtreeGetname(nctemp4038);
nctempchar1* nctemp4036= nctemp4040;
struct nctempchar1 *nctemp4043;
static struct nctempchar1 nctemp4044 = {{ 4}, (char*)"new\0"};
nctemp4043=&nctemp4044;
nctempchar1* nctemp4041= nctemp4043;
int nctemp4045=LibeStrcmp(nctemp4036,nctemp4041);
if(nctemp4045)
{
int nctemp4047= 0;
int nctemp4049=SemSetsimple(nctemp4047);
struct tree* nctemp4051= p;
int nctemp4053=SemNew(nctemp4051);
return p;
}
else{
struct tree* nctemp4058= p;
nctempchar1* nctemp4060=PtreeGetname(nctemp4058);
nctempchar1* nctemp4056= nctemp4060;
struct nctempchar1 *nctemp4063;
static struct nctempchar1 nctemp4064 = {{ 7}, (char*)"delete\0"};
nctemp4063=&nctemp4064;
nctempchar1* nctemp4061= nctemp4063;
int nctemp4065=LibeStrcmp(nctemp4056,nctemp4061);
if(nctemp4065)
{
int nctemp4067= 0;
int nctemp4069=SemSetsimple(nctemp4067);
struct tree* nctemp4071= p;
int nctemp4073=SemDelete(nctemp4071);
return p;
}
else{
struct tree* nctemp4078= p;
nctempchar1* nctemp4080=PtreeGetname(nctemp4078);
nctempchar1* nctemp4076= nctemp4080;
struct nctempchar1 *nctemp4083;
static struct nctempchar1 nctemp4084 = {{ 6}, (char*)"cmplx\0"};
nctemp4083=&nctemp4084;
nctempchar1* nctemp4081= nctemp4083;
int nctemp4085=LibeStrcmp(nctemp4076,nctemp4081);
if(nctemp4085)
{
int nctemp4087= 0;
int nctemp4089=SemSetsimple(nctemp4087);
struct tree* nctemp4091= p;
int nctemp4093=SemCmplx(nctemp4091);
return p;
}
else{
struct tree* nctemp4098= p;
nctempchar1* nctemp4100=PtreeGetname(nctemp4098);
nctempchar1* nctemp4096= nctemp4100;
struct nctempchar1 *nctemp4103;
static struct nctempchar1 nctemp4104 = {{ 3}, (char*)"re\0"};
nctemp4103=&nctemp4104;
nctempchar1* nctemp4101= nctemp4103;
int nctemp4105=LibeStrcmp(nctemp4096,nctemp4101);
if(nctemp4105)
{
int nctemp4107= 0;
int nctemp4109=SemSetsimple(nctemp4107);
struct tree* nctemp4111= p;
int nctemp4113=SemRe(nctemp4111);
return p;
}
else{
struct tree* nctemp4118= p;
nctempchar1* nctemp4120=PtreeGetname(nctemp4118);
nctempchar1* nctemp4116= nctemp4120;
struct nctempchar1 *nctemp4123;
static struct nctempchar1 nctemp4124 = {{ 4}, (char*)"len\0"};
nctemp4123=&nctemp4124;
nctempchar1* nctemp4121= nctemp4123;
int nctemp4125=LibeStrcmp(nctemp4116,nctemp4121);
if(nctemp4125)
{
int nctemp4127= 0;
int nctemp4129=SemSetsimple(nctemp4127);
struct tree* nctemp4131= p;
int nctemp4133=SemLen(nctemp4131);
return p;
}
else{
struct tree* nctemp4138= p;
nctempchar1* nctemp4140=PtreeGetname(nctemp4138);
nctempchar1* nctemp4136= nctemp4140;
struct nctempchar1 *nctemp4143;
static struct nctempchar1 nctemp4144 = {{ 3}, (char*)"im\0"};
nctemp4143=&nctemp4144;
nctempchar1* nctemp4141= nctemp4143;
int nctemp4145=LibeStrcmp(nctemp4136,nctemp4141);
if(nctemp4145)
{
int nctemp4147= 0;
int nctemp4149=SemSetsimple(nctemp4147);
struct tree* nctemp4151= p;
int nctemp4153=SemIm(nctemp4151);
return p;
}
else{
struct tree* nctemp4158= p;
nctempchar1* nctemp4160=PtreeGetname(nctemp4158);
nctempchar1* nctemp4156= nctemp4160;
struct nctempchar1 *nctemp4163;
static struct nctempchar1 nctemp4164 = {{ 7}, (char*)"sizeof\0"};
nctemp4163=&nctemp4164;
nctempchar1* nctemp4161= nctemp4163;
int nctemp4165=LibeStrcmp(nctemp4156,nctemp4161);
if(nctemp4165)
{
int nctemp4167= 0;
int nctemp4169=SemSetsimple(nctemp4167);
struct tree* nctemp4171= p;
int nctemp4173=SemSizeof(nctemp4171);
return p;
}
else{
struct tree* nctemp4178= p;
nctempchar1* nctemp4180=PtreeGetname(nctemp4178);
nctempchar1* nctemp4176= nctemp4180;
struct nctempchar1 *nctemp4183;
static struct nctempchar1 nctemp4184 = {{ 10}, (char*)"iconstant\0"};
nctemp4183=&nctemp4184;
nctempchar1* nctemp4181= nctemp4183;
int nctemp4185=LibeStrcmp(nctemp4176,nctemp4181);
if(nctemp4185)
{
struct tree* nctemp4187= p;
struct nctempchar1 *nctemp4191;
static struct nctempchar1 nctemp4192 = {{ 4}, (char*)"int\0"};
nctemp4191=&nctemp4192;
nctempchar1* nctemp4189= nctemp4191;
int nctemp4193=PtreeSetype(nctemp4187,nctemp4189);
return p;
}
else{
struct tree* nctemp4198= p;
nctempchar1* nctemp4200=PtreeGetname(nctemp4198);
nctempchar1* nctemp4196= nctemp4200;
struct nctempchar1 *nctemp4203;
static struct nctempchar1 nctemp4204 = {{ 10}, (char*)"rconstant\0"};
nctemp4203=&nctemp4204;
nctempchar1* nctemp4201= nctemp4203;
int nctemp4205=LibeStrcmp(nctemp4196,nctemp4201);
if(nctemp4205)
{
struct tree* nctemp4207= p;
struct nctempchar1 *nctemp4211;
static struct nctempchar1 nctemp4212 = {{ 6}, (char*)"float\0"};
nctemp4211=&nctemp4212;
nctempchar1* nctemp4209= nctemp4211;
int nctemp4213=PtreeSetype(nctemp4207,nctemp4209);
return p;
}
else{
struct tree* nctemp4218= p;
nctempchar1* nctemp4220=PtreeGetname(nctemp4218);
nctempchar1* nctemp4216= nctemp4220;
struct nctempchar1 *nctemp4223;
static struct nctempchar1 nctemp4224 = {{ 10}, (char*)"sconstant\0"};
nctemp4223=&nctemp4224;
nctempchar1* nctemp4221= nctemp4223;
int nctemp4225=LibeStrcmp(nctemp4216,nctemp4221);
if(nctemp4225)
{
int nctemp4227= 0;
int nctemp4229=SemSetsimple(nctemp4227);
struct tree* nctemp4231= p;
struct nctempchar1 *nctemp4235;
static struct nctempchar1 nctemp4236 = {{ 5}, (char*)"char\0"};
nctemp4235=&nctemp4236;
nctempchar1* nctemp4233= nctemp4235;
int nctemp4237=PtreeSetype(nctemp4231,nctemp4233);
struct tree* nctemp4239= p;
struct nctempchar1 *nctemp4243;
static struct nctempchar1 nctemp4244 = {{ 5}, (char*)"aref\0"};
nctemp4243=&nctemp4244;
nctempchar1* nctemp4241= nctemp4243;
int nctemp4245=PtreeSetref(nctemp4239,nctemp4241);
struct tree* nctemp4247= p;
int nctemp4249= 1;
int nctemp4251=PtreeSetrank(nctemp4247,nctemp4249);
return p;
}
else{
struct tree* nctemp4254= p;
struct tree* nctemp4256=SemBinexpr(nctemp4254);
return nctemp4256;
}
}
}
}
}
}
}
}
}
}
}
}
}
}
int SemCopyparallel (struct tree* p,struct tree* np)
{
struct tree* nctemp4258= p;
struct tree* nctemp4262= np;
nctempchar1* nctemp4264=PtreeGetparallel(nctemp4262);
nctempchar1* nctemp4260= nctemp4264;
int nctemp4265=PtreeSetparallel(nctemp4258,nctemp4260);
return 1;
}
int SemArgtypes (struct tree* p,struct symbol* tp)
{
nctempchar1 *name;
struct symbol* nctemp4272= tp;
nctempchar1* nctemp4274=SymGetname(nctemp4272);
name=nctemp4274;
struct tree* nctemp4276= p;
struct symbol* nctemp4278= tp;
int nctemp4280=SemArgtype(nctemp4276,nctemp4278);
struct tree* nctemp4285= p;
struct tree* nctemp4287=PtreeMvchild(nctemp4285);
p =nctemp4287;
struct tree* nctemp4293= p;
nctempchar1* nctemp4295=PtreeGetname(nctemp4293);
nctempchar1* nctemp4291= nctemp4295;
struct nctempchar1 *nctemp4298;
static struct nctempchar1 nctemp4299 = {{ 8}, (char*)"arglist\0"};
nctemp4298=&nctemp4299;
nctempchar1* nctemp4296= nctemp4298;
int nctemp4300=LibeStrcmp(nctemp4291,nctemp4296);
int nctemp4288 = (nctemp4300 ==0);
if(nctemp4288)
{
struct symbol* nctemp4309= tp;
struct symbol* nctemp4311=SymGetable(nctemp4309);
tp =nctemp4311;
int nctemp4302 = (tp !=0);
if(nctemp4302)
{
struct tree* nctemp4314= p;
struct nctempchar1 *nctemp4318;
static struct nctempchar1 nctemp4319 = {{ 54}, (char*)"Function arguments does not match forward declaration\0"};
nctemp4318=&nctemp4319;
nctempchar1* nctemp4316= nctemp4318;
struct tree* nctemp4322= p;
nctempchar1* nctemp4324=PtreeGetdef(nctemp4322);
nctempchar1* nctemp4320= nctemp4324;
int nctemp4325=SemSerror(nctemp4314,nctemp4316,nctemp4320);
return 0;
}
return 1;
}
struct tree* nctemp4334= p;
struct tree* nctemp4336=PtreeMvchild(nctemp4334);
struct tree* nctemp4332= nctemp4336;
struct tree* nctemp4337=PtreeMvchild(nctemp4332);
p =nctemp4337;
struct symbol* nctemp4342= tp;
struct symbol* nctemp4344=SymGetable(nctemp4342);
tp =nctemp4344;
struct nctempchar1 *nctemp4351;
static struct nctempchar1 nctemp4352 = {{ 9}, (char*)"#arglist\0"};
nctemp4351=&nctemp4352;
nctempchar1* nctemp4349= nctemp4351;
struct symbol* nctemp4353= tp;
struct symbol* nctemp4355=SymLookup(nctemp4349,nctemp4353);
tp =nctemp4355;
int nctemp4356 = (tp ==0);
if(nctemp4356)
{
struct tree* nctemp4361= p;
struct nctempchar1 *nctemp4365;
static struct nctempchar1 nctemp4366 = {{ 54}, (char*)"Function Arguments does not match forward declaration\0"};
nctemp4365=&nctemp4366;
nctempchar1* nctemp4363= nctemp4365;
nctempchar1* nctemp4367= name;
int nctemp4370=SemSerror(nctemp4361,nctemp4363,nctemp4367);
}
else{
struct symbol* nctemp4375= tp;
struct symbol* nctemp4377=SymGetable(nctemp4375);
tp =nctemp4377;
}
struct symbol* nctemp4382= tp;
struct symbol* nctemp4384=SymMvnext(nctemp4382);
tp =nctemp4384;
int nctemp4385 = (p !=0);
int nctemp4389=nctemp4385;
while(nctemp4389)
{{
struct tree* nctemp4391= p;
struct symbol* nctemp4393= tp;
int nctemp4395=SemArgtype(nctemp4391,nctemp4393);
struct tree* nctemp4400= p;
struct tree* nctemp4402=PtreeMvsister(nctemp4400);
p =nctemp4402;
struct symbol* nctemp4407= tp;
struct symbol* nctemp4409=SymMvnext(nctemp4407);
tp =nctemp4409;
}
int nctemp4410 = (p !=0);
nctemp4389=nctemp4410;}return 1;
}
int SemFdef2 (struct tree* p,struct symbol* tp)
{
struct tree* np;
struct tree* sp;
struct symbol* up;
struct symbol* ftp;
struct symbol* ltp;
struct tree* nctemp4416= p;
struct nctempchar1 *nctemp4420;
static struct nctempchar1 nctemp4421 = {{ 5}, (char*)"fdef\0"};
nctemp4420=&nctemp4421;
nctempchar1* nctemp4418= nctemp4420;
int nctemp4422=PtreeSetname(nctemp4416,nctemp4418);
struct symbol* nctemp4424= tp;
struct nctempchar1 *nctemp4428;
static struct nctempchar1 nctemp4429 = {{ 5}, (char*)"void\0"};
nctemp4428=&nctemp4429;
nctempchar1* nctemp4426= nctemp4428;
int nctemp4430=SymSetforw(nctemp4424,nctemp4426);
struct tree* nctemp4435= p;
struct tree* nctemp4437=PtreeMvchild(nctemp4435);
np =nctemp4437;
struct symbol* nctemp4442=SymMktable();
ltp =nctemp4442;
struct symbol* nctemp4444= ltp;
int nctemp4446=SymSetltp(nctemp4444);
struct nctempchar1 *nctemp4453;
static struct nctempchar1 nctemp4454 = {{ 6}, (char*)"#self\0"};
nctemp4453=&nctemp4454;
nctempchar1* nctemp4451= nctemp4453;
struct symbol* nctemp4455= ltp;
struct symbol* nctemp4457=SymMkname(nctemp4451,nctemp4455);
up =nctemp4457;
struct symbol* nctemp4459= up;
struct tree* nctemp4463= p;
nctempchar1* nctemp4465=PtreeGetdef(nctemp4463);
nctempchar1* nctemp4461= nctemp4465;
int nctemp4466=SymSetfunc(nctemp4459,nctemp4461);
struct tree* nctemp4472= np;
nctempchar1* nctemp4474=PtreeGetname(nctemp4472);
nctempchar1* nctemp4470= nctemp4474;
struct nctempchar1 *nctemp4477;
static struct nctempchar1 nctemp4478 = {{ 8}, (char*)"arglist\0"};
nctemp4477=&nctemp4478;
nctempchar1* nctemp4475= nctemp4477;
int nctemp4479=LibeStrcmp(nctemp4470,nctemp4475);
int nctemp4467 = (nctemp4479 ==1);
if(nctemp4467)
{
struct tree* nctemp4485= np;
struct tree* nctemp4487=PtreeMvsister(nctemp4485);
sp =nctemp4487;
}
else{
sp = np;
}
struct tree* nctemp4493= np;
nctempchar1* nctemp4495=PtreeGetname(nctemp4493);
nctempchar1* nctemp4491= nctemp4495;
struct nctempchar1 *nctemp4498;
static struct nctempchar1 nctemp4499 = {{ 8}, (char*)"arglist\0"};
nctemp4498=&nctemp4499;
nctempchar1* nctemp4496= nctemp4498;
int nctemp4500=LibeStrcmp(nctemp4491,nctemp4496);
int nctemp4488 = (nctemp4500 ==1);
if(nctemp4488)
{
struct tree* nctemp4506= np;
struct tree* nctemp4508=PtreeMvchild(nctemp4506);
np =nctemp4508;
struct nctempchar1 *nctemp4515;
static struct nctempchar1 nctemp4516 = {{ 9}, (char*)"#arglist\0"};
nctemp4515=&nctemp4516;
nctempchar1* nctemp4513= nctemp4515;
struct symbol* nctemp4517= ltp;
struct symbol* nctemp4519=SymMkname(nctemp4513,nctemp4517);
up =nctemp4519;
struct symbol* nctemp4524=SymMktable();
ftp =nctemp4524;
struct symbol* nctemp4526= up;
struct symbol* nctemp4528= ftp;
struct symbol* nctemp4530=SymSetable(nctemp4526,nctemp4528);
struct tree* nctemp4532= np;
struct symbol* nctemp4534= ftp;
int nctemp4536=SemDeclarations(nctemp4532,nctemp4534);
}
struct tree* nctemp4538= p;
struct symbol* nctemp4540= tp;
int nctemp4542=SemArgtypes(nctemp4538,nctemp4540);
struct symbol* nctemp4544= tp;
int nctemp4546= 1;
int nctemp4548=SymSetemit(nctemp4544,nctemp4546);
struct tree* nctemp4550= sp;
int nctemp4552=SemCompstmnt(nctemp4550);
struct tree* nctemp4554= p;
struct tree* nctemp4556= sp;
int nctemp4558=SemCopyparallel(nctemp4554,nctemp4556);
return 1;
}
int Semisnobody (struct tree* p)
{
struct tree* np;
struct tree* nctemp4564= p;
struct tree* nctemp4566=PtreeMvchild(nctemp4564);
np =nctemp4566;
struct tree* nctemp4572= np;
nctempchar1* nctemp4574=PtreeGetname(nctemp4572);
nctempchar1* nctemp4570= nctemp4574;
struct nctempchar1 *nctemp4577;
static struct nctempchar1 nctemp4578 = {{ 8}, (char*)"arglist\0"};
nctemp4577=&nctemp4578;
nctempchar1* nctemp4575= nctemp4577;
int nctemp4579=LibeStrcmp(nctemp4570,nctemp4575);
int nctemp4567 = (nctemp4579 ==1);
if(nctemp4567)
{
struct tree* nctemp4585= np;
struct tree* nctemp4587=PtreeMvsister(nctemp4585);
np =nctemp4587;
struct tree* nctemp4592= np;
struct tree* nctemp4594=PtreeMvchild(nctemp4592);
np =nctemp4594;
int nctemp4595 = (np ==0);
if(nctemp4595)
{
return 1;
}
else{
return 0;
}
}
else{
struct tree* nctemp4606= np;
nctempchar1* nctemp4608=PtreeGetname(nctemp4606);
nctempchar1* nctemp4604= nctemp4608;
struct nctempchar1 *nctemp4611;
static struct nctempchar1 nctemp4612 = {{ 10}, (char*)"compstmnt\0"};
nctemp4611=&nctemp4612;
nctempchar1* nctemp4609= nctemp4611;
int nctemp4613=LibeStrcmp(nctemp4604,nctemp4609);
int nctemp4601 = (nctemp4613 ==1);
if(nctemp4601)
{
struct tree* nctemp4619= np;
struct tree* nctemp4621=PtreeMvchild(nctemp4619);
np =nctemp4621;
int nctemp4622 = (np ==0);
if(nctemp4622)
{
return 1;
}
else{
return 0;
}
}
}
return 0;
}
int SemFdef (struct tree* p,struct symbol* tp)
{
struct tree* np;
struct tree* sp;
struct symbol* fname;
struct symbol* fsub;
struct symbol* arg;
struct symbol* argsub;
struct symbol* up;
struct symbol* ftp;
struct symbol* ltp;
struct symbol* qp;
int rank;
int nobody;
struct tree* nctemp4632= p;
nctempchar1* nctemp4634=PtreeGetarray(nctemp4632);
nctempchar1* nctemp4630= nctemp4634;
struct nctempchar1 *nctemp4637;
static struct nctempchar1 nctemp4638 = {{ 6}, (char*)"array\0"};
nctemp4637=&nctemp4638;
nctempchar1* nctemp4635= nctemp4637;
int nctemp4639=LibeStrcmp(nctemp4630,nctemp4635);
if(nctemp4639)
{
rank = 1;
struct tree* nctemp4644= p;
struct tree* nctemp4646=PtreeMvchild(nctemp4644);
np =nctemp4646;
struct tree* nctemp4651= np;
struct tree* nctemp4653=PtreeMvchild(nctemp4651);
sp =nctemp4653;
struct tree* nctemp4658= np;
struct tree* nctemp4660=PtreeMvsister(nctemp4658);
np =nctemp4660;
struct tree* nctemp4668= sp;
struct tree* nctemp4670=PtreeMvsister(nctemp4668);
sp =nctemp4670;
int nctemp4661 = (sp !=0);
int nctemp4672=nctemp4661;
while(nctemp4672)
{{
rank = (rank + 1);
}
struct tree* nctemp4680= sp;
struct tree* nctemp4682=PtreeMvsister(nctemp4680);
sp =nctemp4682;
int nctemp4673 = (sp !=0);
nctemp4672=nctemp4673;}}
else{
rank = 0;
struct tree* nctemp4688= p;
struct tree* nctemp4690=PtreeMvchild(nctemp4688);
np =nctemp4690;
}
struct tree* nctemp4692= p;
int nctemp4694= rank;
int nctemp4696=PtreeSetrank(nctemp4692,nctemp4694);
struct tree* nctemp4698= p;
struct tree* nctemp4700= np;
int nctemp4702=SemCopytype(nctemp4698,nctemp4700);
struct tree* nctemp4704= np;
struct tree* nctemp4708= p;
nctempchar1* nctemp4710=PtreeGetdef(nctemp4708);
nctempchar1* nctemp4706= nctemp4710;
int nctemp4711=PtreeSetype(nctemp4704,nctemp4706);
p = np;
nobody = 0;
struct tree* nctemp4715= p;
int nctemp4717=Semisnobody(nctemp4715);
int nctemp4712 = (nctemp4717 ==1);
if(nctemp4712)
{
struct tree* nctemp4720= p;
struct nctempchar1 *nctemp4724;
static struct nctempchar1 nctemp4725 = {{ 5}, (char*)"forw\0"};
nctemp4724=&nctemp4725;
nctempchar1* nctemp4722= nctemp4724;
int nctemp4726=PtreeSetforw(nctemp4720,nctemp4722);
nobody = 1;
}
struct tree* nctemp4736= p;
nctempchar1* nctemp4738=PtreeGetdef(nctemp4736);
nctempchar1* nctemp4734= nctemp4738;
struct symbol* nctemp4739= tp;
struct symbol* nctemp4741=SymMkname(nctemp4734,nctemp4739);
fname =nctemp4741;
int nctemp4727 = (fname ==0);
if(nctemp4727)
{
struct tree* nctemp4749= p;
nctempchar1* nctemp4751=PtreeGetdef(nctemp4749);
nctempchar1* nctemp4747= nctemp4751;
struct symbol* nctemp4752= tp;
struct symbol* nctemp4754=SymLookup(nctemp4747,nctemp4752);
qp =nctemp4754;
struct symbol* nctemp4760= qp;
nctempchar1* nctemp4762=SymGetforw(nctemp4760);
nctempchar1* nctemp4758= nctemp4762;
struct nctempchar1 *nctemp4765;
static struct nctempchar1 nctemp4766 = {{ 5}, (char*)"forw\0"};
nctemp4765=&nctemp4766;
nctempchar1* nctemp4763= nctemp4765;
int nctemp4767=LibeStrcmp(nctemp4758,nctemp4763);
int nctemp4755 = (nctemp4767 !=1);
if(nctemp4755)
{
struct tree* nctemp4770= np;
struct nctempchar1 *nctemp4774;
static struct nctempchar1 nctemp4775 = {{ 25}, (char*)"Function already defined\0"};
nctemp4774=&nctemp4775;
nctempchar1* nctemp4772= nctemp4774;
struct tree* nctemp4778= p;
nctempchar1* nctemp4780=PtreeGetdef(nctemp4778);
nctempchar1* nctemp4776= nctemp4780;
int nctemp4781=SemSerror(nctemp4770,nctemp4772,nctemp4776);
}
else{
struct tree* nctemp4783= p;
struct symbol* nctemp4785= qp;
int nctemp4787=SemFdef2(nctemp4783,nctemp4785);
return 1;
}
}
struct symbol* nctemp4790= fname;
struct tree* nctemp4794= p;
nctempchar1* nctemp4796=PtreeGetype(nctemp4794);
nctempchar1* nctemp4792= nctemp4796;
int nctemp4797=SymSetype(nctemp4790,nctemp4792);
struct symbol* nctemp4799= fname;
struct tree* nctemp4803= p;
nctempchar1* nctemp4805=PtreeGetstruct(nctemp4803);
nctempchar1* nctemp4801= nctemp4805;
int nctemp4806=SymSetstruct(nctemp4799,nctemp4801);
struct symbol* nctemp4808= fname;
struct tree* nctemp4812= p;
nctempchar1* nctemp4814=PtreeGetarray(nctemp4812);
nctempchar1* nctemp4810= nctemp4814;
int nctemp4815=SymSetarray(nctemp4808,nctemp4810);
struct symbol* nctemp4817= fname;
struct tree* nctemp4821= p;
int nctemp4823=PtreeGetrank(nctemp4821);
int nctemp4819= nctemp4823;
int nctemp4824=SymSetrank(nctemp4817,nctemp4819);
struct symbol* nctemp4826= fname;
struct nctempchar1 *nctemp4830;
static struct nctempchar1 nctemp4831 = {{ 5}, (char*)"fdef\0"};
nctemp4830=&nctemp4831;
nctempchar1* nctemp4828= nctemp4830;
int nctemp4832=SymSetfunc(nctemp4826,nctemp4828);
int nctemp4833 = (nobody ==1);
if(nctemp4833)
{
struct symbol* nctemp4838= fname;
struct nctempchar1 *nctemp4842;
static struct nctempchar1 nctemp4843 = {{ 5}, (char*)"forw\0"};
nctemp4842=&nctemp4843;
nctempchar1* nctemp4840= nctemp4842;
int nctemp4844=SymSetforw(nctemp4838,nctemp4840);
}
struct tree* nctemp4849= p;
struct tree* nctemp4851=PtreeMvchild(nctemp4849);
np =nctemp4851;
struct symbol* nctemp4856=SymMktable();
ltp =nctemp4856;
struct symbol* nctemp4858= ltp;
int nctemp4860=SymSetltp(nctemp4858);
struct nctempchar1 *nctemp4867;
static struct nctempchar1 nctemp4868 = {{ 6}, (char*)"#self\0"};
nctemp4867=&nctemp4868;
nctempchar1* nctemp4865= nctemp4867;
struct symbol* nctemp4869= ltp;
struct symbol* nctemp4871=SymMkname(nctemp4865,nctemp4869);
up =nctemp4871;
struct symbol* nctemp4873= up;
struct tree* nctemp4877= p;
nctempchar1* nctemp4879=PtreeGetdef(nctemp4877);
nctempchar1* nctemp4875= nctemp4879;
int nctemp4880=SymSetfunc(nctemp4873,nctemp4875);
struct tree* nctemp4886= np;
nctempchar1* nctemp4888=PtreeGetname(nctemp4886);
nctempchar1* nctemp4884= nctemp4888;
struct nctempchar1 *nctemp4891;
static struct nctempchar1 nctemp4892 = {{ 8}, (char*)"arglist\0"};
nctemp4891=&nctemp4892;
nctempchar1* nctemp4889= nctemp4891;
int nctemp4893=LibeStrcmp(nctemp4884,nctemp4889);
int nctemp4881 = (nctemp4893 ==1);
if(nctemp4881)
{
struct tree* nctemp4899= np;
struct tree* nctemp4901=PtreeMvsister(nctemp4899);
sp =nctemp4901;
}
else{
sp = np;
}
struct tree* nctemp4907= np;
nctempchar1* nctemp4909=PtreeGetname(nctemp4907);
nctempchar1* nctemp4905= nctemp4909;
struct nctempchar1 *nctemp4912;
static struct nctempchar1 nctemp4913 = {{ 8}, (char*)"arglist\0"};
nctemp4912=&nctemp4913;
nctempchar1* nctemp4910= nctemp4912;
int nctemp4914=LibeStrcmp(nctemp4905,nctemp4910);
int nctemp4902 = (nctemp4914 ==1);
if(nctemp4902)
{
struct tree* nctemp4920= np;
struct tree* nctemp4922=PtreeMvchild(nctemp4920);
np =nctemp4922;
struct nctempchar1 *nctemp4929;
static struct nctempchar1 nctemp4930 = {{ 9}, (char*)"#arglist\0"};
nctemp4929=&nctemp4930;
nctempchar1* nctemp4927= nctemp4929;
struct symbol* nctemp4931= ltp;
struct symbol* nctemp4933=SymMkname(nctemp4927,nctemp4931);
up =nctemp4933;
struct symbol* nctemp4938=SymMktable();
ftp =nctemp4938;
struct symbol* nctemp4940= up;
struct symbol* nctemp4942= ftp;
struct symbol* nctemp4944=SymSetable(nctemp4940,nctemp4942);
struct tree* nctemp4946= np;
struct symbol* nctemp4948= ftp;
int nctemp4950=SemDeclarations(nctemp4946,nctemp4948);
struct symbol* nctemp4955=SymMktable();
fsub =nctemp4955;
struct symbol* nctemp4957= fname;
struct symbol* nctemp4959= fsub;
struct symbol* nctemp4961=SymSetable(nctemp4957,nctemp4959);
struct nctempchar1 *nctemp4968;
static struct nctempchar1 nctemp4969 = {{ 9}, (char*)"#arglist\0"};
nctemp4968=&nctemp4969;
nctempchar1* nctemp4966= nctemp4968;
struct symbol* nctemp4970= fsub;
struct symbol* nctemp4972=SymMkname(nctemp4966,nctemp4970);
arg =nctemp4972;
struct symbol* nctemp4977=SymMktable();
argsub =nctemp4977;
struct symbol* nctemp4979= arg;
struct symbol* nctemp4981= argsub;
struct symbol* nctemp4983=SymSetable(nctemp4979,nctemp4981);
struct symbol* nctemp4985= ftp;
struct symbol* nctemp4987= argsub;
int nctemp4989=SymCpytble(nctemp4985,nctemp4987);
}
struct tree* nctemp4991= sp;
int nctemp4993=SemCompstmnt(nctemp4991);
struct tree* nctemp4995= p;
struct tree* nctemp4997= sp;
int nctemp4999=SemCopyparallel(nctemp4995,nctemp4997);
return 1;
}
int SemExtdecl (struct tree* p)
{
struct tree* sp;
struct tree* np;
struct tree* nctemp5004= p;
nctempchar1* nctemp5006=PtreeGetname(nctemp5004);
nctempchar1* nctemp5002= nctemp5006;
struct nctempchar1 *nctemp5009;
static struct nctempchar1 nctemp5010 = {{ 8}, (char*)"extdecl\0"};
nctemp5009=&nctemp5010;
nctempchar1* nctemp5007= nctemp5009;
int nctemp5011=LibeStrcmp(nctemp5002,nctemp5007);
if(nctemp5011)
{
struct tree* nctemp5016= p;
struct tree* nctemp5018=PtreeMvchild(nctemp5016);
np =nctemp5018;
struct tree* nctemp5020= np;
struct nctempchar1 *nctemp5024;
static struct nctempchar1 nctemp5025 = {{ 7}, (char*)"global\0"};
nctemp5024=&nctemp5025;
nctempchar1* nctemp5022= nctemp5024;
int nctemp5026=PtreeSetglobal(nctemp5020,nctemp5022);
struct tree* nctemp5032= np;
nctempchar1* nctemp5034=PtreeGetname(nctemp5032);
nctempchar1* nctemp5030= nctemp5034;
struct nctempchar1 *nctemp5037;
static struct nctempchar1 nctemp5038 = {{ 7}, (char*)"import\0"};
nctemp5037=&nctemp5038;
nctempchar1* nctemp5035= nctemp5037;
int nctemp5039=LibeStrcmp(nctemp5030,nctemp5035);
int nctemp5027 = (nctemp5039 ==1);
if(nctemp5027)
{
struct tree* nctemp5042= np;
struct symbol* nctemp5046=SymGetetp();
struct symbol* nctemp5044= nctemp5046;
int nctemp5047=SemImport(nctemp5042,nctemp5044);
return 1;
}
int nctemp5049 = (np !=0);
int nctemp5053=nctemp5049;
while(nctemp5053)
{{
struct tree* nctemp5058= np;
struct tree* nctemp5060=PtreeMvchild(nctemp5058);
sp =nctemp5060;
struct tree* nctemp5064= np;
nctempchar1* nctemp5066=PtreeGetarray(nctemp5064);
nctempchar1* nctemp5062= nctemp5066;
struct nctempchar1 *nctemp5069;
static struct nctempchar1 nctemp5070 = {{ 6}, (char*)"array\0"};
nctemp5069=&nctemp5070;
nctempchar1* nctemp5067= nctemp5069;
int nctemp5071=LibeStrcmp(nctemp5062,nctemp5067);
if(nctemp5071)
{
struct tree* nctemp5076= sp;
struct tree* nctemp5078=PtreeMvsister(nctemp5076);
sp =nctemp5078;
}
struct tree* nctemp5082= sp;
nctempchar1* nctemp5084=PtreeGetname(nctemp5082);
nctempchar1* nctemp5080= nctemp5084;
struct nctempchar1 *nctemp5087;
static struct nctempchar1 nctemp5088 = {{ 10}, (char*)"structdec\0"};
nctemp5087=&nctemp5088;
nctempchar1* nctemp5085= nctemp5087;
int nctemp5089=LibeStrcmp(nctemp5080,nctemp5085);
if(nctemp5089)
{
struct tree* nctemp5091= np;
struct symbol* nctemp5095=SymGetetp();
struct symbol* nctemp5093= nctemp5095;
int nctemp5096=SemStructdecl(nctemp5091,nctemp5093);
}
else{
struct tree* nctemp5100= sp;
nctempchar1* nctemp5102=PtreeGetname(nctemp5100);
nctempchar1* nctemp5098= nctemp5102;
struct nctempchar1 *nctemp5105;
static struct nctempchar1 nctemp5106 = {{ 5}, (char*)"fdef\0"};
nctemp5105=&nctemp5106;
nctempchar1* nctemp5103= nctemp5105;
int nctemp5107=LibeStrcmp(nctemp5098,nctemp5103);
if(nctemp5107)
{
struct tree* nctemp5109= np;
struct symbol* nctemp5113=SymGetetp();
struct symbol* nctemp5111= nctemp5113;
int nctemp5114=SemFdef(nctemp5109,nctemp5111);
}
else{
struct tree* nctemp5116= np;
struct symbol* nctemp5120=SymGetetp();
struct symbol* nctemp5118= nctemp5120;
int nctemp5121=SemDeclaration(nctemp5116,nctemp5118);
}
}
struct tree* nctemp5126= np;
struct tree* nctemp5128=PtreeMvsister(nctemp5126);
np =nctemp5128;
}
int nctemp5129 = (np !=0);
nctemp5053=nctemp5129;}}
return 1;
}
int SemSem (struct tree* p,struct symbol* tp)
{
struct symbol* ltp;
struct symbol* nctemp5135= tp;
int nctemp5137=SymSetetp(nctemp5135);
ltp = 0;
struct symbol* nctemp5139= ltp;
int nctemp5141=SymSetltp(nctemp5139);
int nctemp5143= 0;
int nctemp5145=SemSetsimple(nctemp5143);
struct tree* nctemp5147= p;
int nctemp5149=SemExtdecl(nctemp5147);
return 1;
}
int SemWhilestmnt (struct tree* p)
{
struct tree* q;
q = p;
struct tree* nctemp5155= p;
struct tree* nctemp5157=PtreeMvchild(nctemp5155);
p =nctemp5157;
struct tree* nctemp5159= p;
struct tree* nctemp5161=SemExpr(nctemp5159);
struct tree* nctemp5163= p;
int nctemp5165= 1;
int nctemp5167=PtreeSetopexpr(nctemp5163,nctemp5165);
struct tree* nctemp5172= p;
struct tree* nctemp5174=PtreeMvsister(nctemp5172);
p =nctemp5174;
struct tree* nctemp5176= p;
int nctemp5178=SemStmnt(nctemp5176);
struct tree* nctemp5180= q;
struct tree* nctemp5182= p;
int nctemp5184=SemCopyparallel(nctemp5180,nctemp5182);
return 1;
}
int SemForstmnt (struct tree* p)
{
struct tree* q;
q = p;
struct tree* nctemp5190= p;
struct tree* nctemp5192=PtreeMvchild(nctemp5190);
p =nctemp5192;
struct tree* nctemp5194= p;
int nctemp5196= 1;
int nctemp5198=PtreeSetopexpr(nctemp5194,nctemp5196);
int nctemp5200= 1;
int nctemp5202=SemSetsimple(nctemp5200);
struct tree* nctemp5204= p;
struct tree* nctemp5206=SemExpr(nctemp5204);
struct tree* nctemp5211= p;
struct tree* nctemp5213=PtreeMvsister(nctemp5211);
p =nctemp5213;
struct tree* nctemp5215= p;
int nctemp5217= 1;
int nctemp5219=PtreeSetopexpr(nctemp5215,nctemp5217);
int nctemp5221= 1;
int nctemp5223=SemSetsimple(nctemp5221);
struct tree* nctemp5225= p;
struct tree* nctemp5227=SemExpr(nctemp5225);
struct tree* nctemp5232= p;
struct tree* nctemp5234=PtreeMvsister(nctemp5232);
p =nctemp5234;
struct tree* nctemp5236= p;
int nctemp5238= 1;
int nctemp5240=PtreeSetopexpr(nctemp5236,nctemp5238);
int nctemp5242= 1;
int nctemp5244=SemSetsimple(nctemp5242);
struct tree* nctemp5246= p;
struct tree* nctemp5248=SemExpr(nctemp5246);
struct tree* nctemp5253= p;
struct tree* nctemp5255=PtreeMvsister(nctemp5253);
p =nctemp5255;
struct tree* nctemp5257= p;
int nctemp5259=SemStmnt(nctemp5257);
struct tree* nctemp5261= q;
struct tree* nctemp5263= p;
int nctemp5265=SemCopyparallel(nctemp5261,nctemp5263);
return 1;
}
int SemParallelstmnt (struct tree* p)
{
struct tree* sp;
struct tree* rp;
int rank;
rank = 0;
struct tree* nctemp5271= p;
struct tree* nctemp5273=PtreeMvchild(nctemp5271);
sp =nctemp5273;
struct tree* nctemp5278= sp;
struct tree* nctemp5280=PtreeMvchild(nctemp5278);
sp =nctemp5280;
int nctemp5281 = (sp !=0);
int nctemp5285=nctemp5281;
while(nctemp5285)
{{
struct tree* nctemp5290= sp;
struct tree* nctemp5292=PtreeMvchild(nctemp5290);
rp =nctemp5292;
struct tree* nctemp5294= rp;
struct tree* nctemp5296=SemExpr(nctemp5294);
struct tree* nctemp5298= rp;
int nctemp5300= 1;
int nctemp5302=PtreeSetopexpr(nctemp5298,nctemp5300);
struct tree* nctemp5307= rp;
struct tree* nctemp5309=PtreeMvsister(nctemp5307);
rp =nctemp5309;
struct tree* nctemp5311= rp;
struct tree* nctemp5313=SemExpr(nctemp5311);
struct tree* nctemp5315= rp;
int nctemp5317= 1;
int nctemp5319=PtreeSetopexpr(nctemp5315,nctemp5317);
struct tree* nctemp5327= rp;
struct tree* nctemp5329=PtreeMvsister(nctemp5327);
rp =nctemp5329;
int nctemp5320 = (rp !=0);
if(nctemp5320)
{
struct tree* nctemp5332= rp;
struct tree* nctemp5334=SemExpr(nctemp5332);
struct tree* nctemp5336= rp;
int nctemp5338= 1;
int nctemp5340=PtreeSetopexpr(nctemp5336,nctemp5338);
}
struct tree* nctemp5344= sp;
struct tree* nctemp5346=PtreeMvsister(nctemp5344);
int nctemp5341 = (nctemp5346 !=0);
if(nctemp5341)
{
struct tree* nctemp5352= sp;
struct tree* nctemp5354=PtreeMvsister(nctemp5352);
rp =nctemp5354;
}
struct tree* nctemp5359= sp;
struct tree* nctemp5361=PtreeMvsister(nctemp5359);
sp =nctemp5361;
rank = (rank + 1);
}
int nctemp5362 = (sp !=0);
nctemp5285=nctemp5362;}struct tree* nctemp5367= p;
int nctemp5369= rank;
int nctemp5371=PtreeSetrank(nctemp5367,nctemp5369);
struct tree* nctemp5376= p;
struct tree* nctemp5378=PtreeMvchild(nctemp5376);
sp =nctemp5378;
struct tree* nctemp5383= sp;
struct tree* nctemp5385=PtreeMvsister(nctemp5383);
sp =nctemp5385;
struct tree* nctemp5387= sp;
int nctemp5389=SemStmnt(nctemp5387);
return 1;
}
int SemIfstmnt (struct tree* p)
{
struct tree* q;
q = p;
struct tree* nctemp5395= p;
struct tree* nctemp5397=PtreeMvchild(nctemp5395);
p =nctemp5397;
struct tree* nctemp5399= p;
struct tree* nctemp5401=SemExpr(nctemp5399);
struct tree* nctemp5403= p;
int nctemp5405= 1;
int nctemp5407=PtreeSetopexpr(nctemp5403,nctemp5405);
struct tree* nctemp5412= p;
struct tree* nctemp5414=PtreeMvsister(nctemp5412);
p =nctemp5414;
struct tree* nctemp5416= p;
int nctemp5418=SemStmnt(nctemp5416);
struct tree* nctemp5420= q;
struct tree* nctemp5422= p;
int nctemp5424=SemCopyparallel(nctemp5420,nctemp5422);
struct tree* nctemp5432= p;
struct tree* nctemp5434=PtreeMvsister(nctemp5432);
p =nctemp5434;
int nctemp5425 = (p !=0);
if(nctemp5425)
{
struct tree* nctemp5439= p;
nctempchar1* nctemp5441=PtreeGetname(nctemp5439);
nctempchar1* nctemp5437= nctemp5441;
struct nctempchar1 *nctemp5444;
static struct nctempchar1 nctemp5445 = {{ 5}, (char*)"else\0"};
nctemp5444=&nctemp5445;
nctempchar1* nctemp5442= nctemp5444;
int nctemp5446=LibeStrcmp(nctemp5437,nctemp5442);
if(nctemp5446)
{
struct tree* nctemp5451= p;
struct tree* nctemp5453=PtreeMvchild(nctemp5451);
p =nctemp5453;
struct tree* nctemp5455= p;
int nctemp5457=SemStmnt(nctemp5455);
}
}
return 1;
}
int SemReturnstmnt (struct tree* p)
{
struct tree* sp;
struct symbol* up;
struct tree* nctemp5463= p;
struct tree* nctemp5465=PtreeMvchild(nctemp5463);
sp =nctemp5465;
int nctemp5466 = (sp !=0);
if(nctemp5466)
{
struct tree* nctemp5471= sp;
struct tree* nctemp5473=SemExpr(nctemp5471);
struct tree* nctemp5475= sp;
int nctemp5477= 1;
int nctemp5479=PtreeSetopexpr(nctemp5475,nctemp5477);
struct nctempchar1 *nctemp5486;
static struct nctempchar1 nctemp5487 = {{ 6}, (char*)"#self\0"};
nctemp5486=&nctemp5487;
nctempchar1* nctemp5484= nctemp5486;
struct symbol* nctemp5490=SymGetltp();
struct symbol* nctemp5488= nctemp5490;
struct symbol* nctemp5491=SymLookup(nctemp5484,nctemp5488);
up =nctemp5491;
struct symbol* nctemp5498= up;
nctempchar1* nctemp5500=SymGetfunc(nctemp5498);
nctempchar1* nctemp5496= nctemp5500;
struct symbol* nctemp5501=SymLook(nctemp5496);
up =nctemp5501;
struct tree* nctemp5503= p;
struct symbol* nctemp5507= up;
nctempchar1* nctemp5509=SymGetype(nctemp5507);
nctempchar1* nctemp5505= nctemp5509;
int nctemp5510=PtreeSetype(nctemp5503,nctemp5505);
struct tree* nctemp5512= p;
struct symbol* nctemp5516= up;
nctempchar1* nctemp5518=SymGetstruct(nctemp5516);
nctempchar1* nctemp5514= nctemp5518;
int nctemp5519=PtreeSetstruct(nctemp5512,nctemp5514);
struct tree* nctemp5521= p;
struct symbol* nctemp5525= up;
nctempchar1* nctemp5527=SymGetarray(nctemp5525);
nctempchar1* nctemp5523= nctemp5527;
int nctemp5528=PtreeSetarray(nctemp5521,nctemp5523);
struct tree* nctemp5530= p;
struct tree* nctemp5534= sp;
nctempchar1* nctemp5536=PtreeGetref(nctemp5534);
nctempchar1* nctemp5532= nctemp5536;
int nctemp5537=PtreeSetref(nctemp5530,nctemp5532);
struct tree* nctemp5539= p;
struct symbol* nctemp5543= up;
int nctemp5545=SymGetrank(nctemp5543);
int nctemp5541= nctemp5545;
int nctemp5546=PtreeSetrank(nctemp5539,nctemp5541);
struct tree* nctemp5550= p;
struct tree* nctemp5552= sp;
int nctemp5554=SemComparetype(nctemp5550,nctemp5552);
int nctemp5547 = (nctemp5554 ==0);
if(nctemp5547)
{
struct tree* nctemp5557= p;
struct nctempchar1 *nctemp5561;
static struct nctempchar1 nctemp5562 = {{ 26}, (char*)"Return type is incorrect \0"};
nctemp5561=&nctemp5562;
nctempchar1* nctemp5559= nctemp5561;
struct nctempchar1 *nctemp5565;
static struct nctempchar1 nctemp5566 = {{ 2}, (char*)" \0"};
nctemp5565=&nctemp5566;
nctempchar1* nctemp5563= nctemp5565;
int nctemp5567=SemSerror(nctemp5557,nctemp5559,nctemp5563);
}
}
return 1;
}
int SemStmnt (struct tree* p)
{
struct tree* q;
int parflag;
parflag = 0;
q = p;
struct tree* nctemp5572= p;
nctempchar1* nctemp5574=PtreeGetname(nctemp5572);
nctempchar1* nctemp5570= nctemp5574;
struct nctempchar1 *nctemp5577;
static struct nctempchar1 nctemp5578 = {{ 13}, (char*)"declarations\0"};
nctemp5577=&nctemp5578;
nctempchar1* nctemp5575= nctemp5577;
int nctemp5579=LibeStrcmp(nctemp5570,nctemp5575);
if(nctemp5579)
{
struct tree* nctemp5581= p;
struct symbol* nctemp5585=SymGetltp();
struct symbol* nctemp5583= nctemp5585;
int nctemp5586=SemDeclarations(nctemp5581,nctemp5583);
struct tree* nctemp5591= p;
struct tree* nctemp5593=PtreeMvsister(nctemp5591);
p =nctemp5593;
}
int nctemp5594 = (p !=0);
int nctemp5598=nctemp5594;
while(nctemp5598)
{{
struct tree* nctemp5602= p;
nctempchar1* nctemp5604=PtreeGetname(nctemp5602);
nctempchar1* nctemp5600= nctemp5604;
struct nctempchar1 *nctemp5607;
static struct nctempchar1 nctemp5608 = {{ 5}, (char*)"expr\0"};
nctemp5607=&nctemp5608;
nctempchar1* nctemp5605= nctemp5607;
int nctemp5609=LibeStrcmp(nctemp5600,nctemp5605);
if(nctemp5609)
{
struct tree* nctemp5611= p;
int nctemp5613= 1;
int nctemp5615=PtreeSetopexpr(nctemp5611,nctemp5613);
int nctemp5617= 1;
int nctemp5619=SemSetsimple(nctemp5617);
struct tree* nctemp5621= p;
struct tree* nctemp5623=SemExpr(nctemp5621);
struct tree* nctemp5625= p;
int nctemp5627= 1;
int nctemp5629=PtreeSetopexpr(nctemp5625,nctemp5627);
}
struct tree* nctemp5633= p;
nctempchar1* nctemp5635=PtreeGetname(nctemp5633);
nctempchar1* nctemp5631= nctemp5635;
struct nctempchar1 *nctemp5638;
static struct nctempchar1 nctemp5639 = {{ 10}, (char*)"compstmnt\0"};
nctemp5638=&nctemp5639;
nctempchar1* nctemp5636= nctemp5638;
int nctemp5640=LibeStrcmp(nctemp5631,nctemp5636);
if(nctemp5640)
{
struct tree* nctemp5642= p;
int nctemp5644=SemCompstmnt(nctemp5642);
}
struct tree* nctemp5648= p;
nctempchar1* nctemp5650=PtreeGetname(nctemp5648);
nctempchar1* nctemp5646= nctemp5650;
struct nctempchar1 *nctemp5653;
static struct nctempchar1 nctemp5654 = {{ 6}, (char*)"while\0"};
nctemp5653=&nctemp5654;
nctempchar1* nctemp5651= nctemp5653;
int nctemp5655=LibeStrcmp(nctemp5646,nctemp5651);
if(nctemp5655)
{
struct tree* nctemp5657= p;
int nctemp5659=SemWhilestmnt(nctemp5657);
}
struct tree* nctemp5663= p;
nctempchar1* nctemp5665=PtreeGetname(nctemp5663);
nctempchar1* nctemp5661= nctemp5665;
struct nctempchar1 *nctemp5668;
static struct nctempchar1 nctemp5669 = {{ 4}, (char*)"for\0"};
nctemp5668=&nctemp5669;
nctempchar1* nctemp5666= nctemp5668;
int nctemp5670=LibeStrcmp(nctemp5661,nctemp5666);
if(nctemp5670)
{
struct tree* nctemp5672= p;
int nctemp5674=SemForstmnt(nctemp5672);
}
struct tree* nctemp5678= p;
nctempchar1* nctemp5680=PtreeGetname(nctemp5678);
nctempchar1* nctemp5676= nctemp5680;
struct nctempchar1 *nctemp5683;
static struct nctempchar1 nctemp5684 = {{ 9}, (char*)"parallel\0"};
nctemp5683=&nctemp5684;
nctempchar1* nctemp5681= nctemp5683;
int nctemp5685=LibeStrcmp(nctemp5676,nctemp5681);
if(nctemp5685)
{
parflag = 1;
}
struct tree* nctemp5689= p;
nctempchar1* nctemp5691=PtreeGetname(nctemp5689);
nctempchar1* nctemp5687= nctemp5691;
struct nctempchar1 *nctemp5694;
static struct nctempchar1 nctemp5695 = {{ 3}, (char*)"if\0"};
nctemp5694=&nctemp5695;
nctempchar1* nctemp5692= nctemp5694;
int nctemp5696=LibeStrcmp(nctemp5687,nctemp5692);
if(nctemp5696)
{
struct tree* nctemp5698= p;
int nctemp5700=SemIfstmnt(nctemp5698);
}
struct tree* nctemp5704= p;
nctempchar1* nctemp5706=PtreeGetname(nctemp5704);
nctempchar1* nctemp5702= nctemp5706;
struct nctempchar1 *nctemp5709;
static struct nctempchar1 nctemp5710 = {{ 7}, (char*)"return\0"};
nctemp5709=&nctemp5710;
nctempchar1* nctemp5707= nctemp5709;
int nctemp5711=LibeStrcmp(nctemp5702,nctemp5707);
if(nctemp5711)
{
struct tree* nctemp5713= p;
int nctemp5715=SemReturnstmnt(nctemp5713);
}
struct tree* nctemp5720= p;
struct tree* nctemp5722=PtreeMvsister(nctemp5720);
p =nctemp5722;
}
int nctemp5723 = (p !=0);
nctemp5598=nctemp5723;}int nctemp5727 = (parflag ==1);
if(nctemp5727)
{
struct tree* nctemp5732= q;
struct nctempchar1 *nctemp5736;
static struct nctempchar1 nctemp5737 = {{ 9}, (char*)"parallel\0"};
nctemp5736=&nctemp5737;
nctempchar1* nctemp5734= nctemp5736;
int nctemp5738=PtreeSetparallel(nctemp5732,nctemp5734);
}
return 1;
}
int SemCompstmnt (struct tree* p)
{
struct tree* q;
int parflag;
parflag = 0;
q = p;
struct tree* nctemp5744= p;
struct tree* nctemp5746=PtreeMvchild(nctemp5744);
p =nctemp5746;
int nctemp5747 = (p ==0);
if(nctemp5747)
{
return 1;
}
struct tree* nctemp5755= p;
nctempchar1* nctemp5757=PtreeGetname(nctemp5755);
nctempchar1* nctemp5753= nctemp5757;
struct nctempchar1 *nctemp5760;
static struct nctempchar1 nctemp5761 = {{ 13}, (char*)"declarations\0"};
nctemp5760=&nctemp5761;
nctempchar1* nctemp5758= nctemp5760;
int nctemp5762=LibeStrcmp(nctemp5753,nctemp5758);
if(nctemp5762)
{
struct tree* nctemp5766= p;
struct tree* nctemp5768=PtreeMvchild(nctemp5766);
struct tree* nctemp5764= nctemp5768;
struct symbol* nctemp5771=SymGetltp();
struct symbol* nctemp5769= nctemp5771;
int nctemp5772=SemDeclarations(nctemp5764,nctemp5769);
struct tree* nctemp5777= p;
struct tree* nctemp5779=PtreeMvsister(nctemp5777);
p =nctemp5779;
}
int nctemp5780 = (p !=0);
int nctemp5784=nctemp5780;
while(nctemp5784)
{{
struct tree* nctemp5788= p;
nctempchar1* nctemp5790=PtreeGetname(nctemp5788);
nctempchar1* nctemp5786= nctemp5790;
struct nctempchar1 *nctemp5793;
static struct nctempchar1 nctemp5794 = {{ 5}, (char*)"expr\0"};
nctemp5793=&nctemp5794;
nctempchar1* nctemp5791= nctemp5793;
int nctemp5795=LibeStrcmp(nctemp5786,nctemp5791);
if(nctemp5795)
{
struct tree* nctemp5797= p;
int nctemp5799= 1;
int nctemp5801=PtreeSetopexpr(nctemp5797,nctemp5799);
int nctemp5803= 1;
int nctemp5805=SemSetsimple(nctemp5803);
struct tree* nctemp5807= p;
struct tree* nctemp5809=SemExpr(nctemp5807);
}
struct tree* nctemp5813= p;
nctempchar1* nctemp5815=PtreeGetname(nctemp5813);
nctempchar1* nctemp5811= nctemp5815;
struct nctempchar1 *nctemp5818;
static struct nctempchar1 nctemp5819 = {{ 6}, (char*)"while\0"};
nctemp5818=&nctemp5819;
nctempchar1* nctemp5816= nctemp5818;
int nctemp5820=LibeStrcmp(nctemp5811,nctemp5816);
if(nctemp5820)
{
struct tree* nctemp5822= p;
int nctemp5824=SemWhilestmnt(nctemp5822);
}
struct tree* nctemp5828= p;
nctempchar1* nctemp5830=PtreeGetname(nctemp5828);
nctempchar1* nctemp5826= nctemp5830;
struct nctempchar1 *nctemp5833;
static struct nctempchar1 nctemp5834 = {{ 4}, (char*)"for\0"};
nctemp5833=&nctemp5834;
nctempchar1* nctemp5831= nctemp5833;
int nctemp5835=LibeStrcmp(nctemp5826,nctemp5831);
if(nctemp5835)
{
struct tree* nctemp5837= p;
int nctemp5839=SemForstmnt(nctemp5837);
}
struct tree* nctemp5843= p;
nctempchar1* nctemp5845=PtreeGetname(nctemp5843);
nctempchar1* nctemp5841= nctemp5845;
struct nctempchar1 *nctemp5848;
static struct nctempchar1 nctemp5849 = {{ 9}, (char*)"parallel\0"};
nctemp5848=&nctemp5849;
nctempchar1* nctemp5846= nctemp5848;
int nctemp5850=LibeStrcmp(nctemp5841,nctemp5846);
if(nctemp5850)
{
struct tree* nctemp5852= p;
int nctemp5854=SemParallelstmnt(nctemp5852);
struct tree* nctemp5856= p;
struct nctempchar1 *nctemp5860;
static struct nctempchar1 nctemp5861 = {{ 9}, (char*)"parallel\0"};
nctemp5860=&nctemp5861;
nctempchar1* nctemp5858= nctemp5860;
int nctemp5862=PtreeSetparallel(nctemp5856,nctemp5858);
}
struct tree* nctemp5866= p;
nctempchar1* nctemp5868=PtreeGetname(nctemp5866);
nctempchar1* nctemp5864= nctemp5868;
struct nctempchar1 *nctemp5871;
static struct nctempchar1 nctemp5872 = {{ 3}, (char*)"if\0"};
nctemp5871=&nctemp5872;
nctempchar1* nctemp5869= nctemp5871;
int nctemp5873=LibeStrcmp(nctemp5864,nctemp5869);
if(nctemp5873)
{
struct tree* nctemp5875= p;
int nctemp5877=SemIfstmnt(nctemp5875);
}
struct tree* nctemp5881= p;
nctempchar1* nctemp5883=PtreeGetname(nctemp5881);
nctempchar1* nctemp5879= nctemp5883;
struct nctempchar1 *nctemp5886;
static struct nctempchar1 nctemp5887 = {{ 7}, (char*)"return\0"};
nctemp5886=&nctemp5887;
nctempchar1* nctemp5884= nctemp5886;
int nctemp5888=LibeStrcmp(nctemp5879,nctemp5884);
if(nctemp5888)
{
struct tree* nctemp5890= p;
int nctemp5892=SemReturnstmnt(nctemp5890);
}
struct tree* nctemp5896= p;
nctempchar1* nctemp5898=PtreeGetparallel(nctemp5896);
nctempchar1* nctemp5894= nctemp5898;
struct nctempchar1 *nctemp5901;
static struct nctempchar1 nctemp5902 = {{ 9}, (char*)"parallel\0"};
nctemp5901=&nctemp5902;
nctempchar1* nctemp5899= nctemp5901;
int nctemp5903=LibeStrcmp(nctemp5894,nctemp5899);
if(nctemp5903)
{
parflag = 1;
}
struct tree* nctemp5908= p;
struct tree* nctemp5910=PtreeMvsister(nctemp5908);
p =nctemp5910;
}
int nctemp5911 = (p !=0);
nctemp5784=nctemp5911;}int nctemp5915 = (parflag ==1);
if(nctemp5915)
{
struct tree* nctemp5920= q;
struct nctempchar1 *nctemp5924;
static struct nctempchar1 nctemp5925 = {{ 9}, (char*)"parallel\0"};
nctemp5924=&nctemp5925;
nctempchar1* nctemp5922= nctemp5924;
int nctemp5926=PtreeSetparallel(nctemp5920,nctemp5922);
}
return 1;
}
