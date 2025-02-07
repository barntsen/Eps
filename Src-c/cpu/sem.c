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
;
struct symbol* SymEtp;
struct symbol* SymLtp;
struct symbol* SymStp;
struct symbol* SymGetetp ();
int SymIstemp (nctempchar1 *name);
struct symbol* SymSetetp (struct symbol* etp);
struct symbol* SymGetltp ();
struct symbol* SymSetltp (struct symbol* ltp);
struct symbol* SymGetstp ();
struct symbol* SymSetstp (struct symbol* stp);
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
int PtreeInit ();
int PtreeRmnode (struct tree* p);
int PtreeRmtree (struct tree* p);
struct tree* PtreeMknode (nctempchar1 *name,nctempchar1 *def);
int PtreeAddchild (struct tree* parent,struct tree* child);
int PtreeAddsister (struct tree* sister,struct tree* newnode);
struct tree* PtreeMvsister (struct tree* p);
struct tree* PtreeMvchild (struct tree* p);
nctempchar1 * PtreeSetfield (nctempchar1 *field,nctempchar1 *value);
int PtreeSetname (struct tree* p,nctempchar1 *name);
nctempchar1 * PtreeGetname (struct tree* p);
int PtreeSetdef (struct tree* p,nctempchar1 *def);
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
int PtreePrtree (struct tree* p,int level);
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
int SemSerror (struct tree* p,nctempchar1 *s1,nctempchar1 *s2)
{
struct tree* nctemp4= p;
nctempchar1* nctemp6=PtreeGetfile(nctemp4);
nctempchar1* nctemp2= nctemp6;
struct tree* nctemp9= p;
nctempchar1* nctemp11=PtreeGetdef(nctemp9);
nctempchar1* nctemp7= nctemp11;
struct tree* nctemp14= p;
int nctemp16=PtreeGetline(nctemp14);
int nctemp12= nctemp16;
nctempchar1* nctemp17= s1;
nctempchar1* nctemp20= s2;
int nctemp23=ErrSerror(nctemp2,nctemp7,nctemp12,nctemp17,nctemp20);
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
struct tree* nctemp30= p;
nctempchar1* nctemp32=PtreeGetdef(nctemp30);
module=nctemp32;
nctempchar1* nctemp38= module;
struct nctempchar1 *nctemp43;
static struct nctempchar1 nctemp44 = {{ 3}, (char*)".m\0"};
nctemp43=&nctemp44;
nctempchar1* nctemp41= nctemp43;
nctempchar1* nctemp45=LibeStradd(nctemp38,nctemp41);
file=nctemp45;
nctempchar1* nctemp50= file;
struct nctempchar1 *nctemp55;
static struct nctempchar1 nctemp56 = {{ 2}, (char*)"r\0"};
nctemp55=&nctemp56;
nctempchar1* nctemp53= nctemp55;
int nctemp57=LibeOpen(nctemp50,nctemp53);
fd =nctemp57;
int nctemp58 = (fd ==0);
if(nctemp58)
{
nctempchar1* nctemp67=ScanPath();
path=nctemp67;
nctempchar1* nctemp73= path;
nctempchar1* nctemp76= file;
nctempchar1* nctemp79=LibeStradd(nctemp73,nctemp76);
sysfile=nctemp79;
nctempchar1* nctemp84= sysfile;
struct nctempchar1 *nctemp89;
static struct nctempchar1 nctemp90 = {{ 2}, (char*)"r\0"};
nctemp89=&nctemp90;
nctempchar1* nctemp87= nctemp89;
int nctemp91=LibeOpen(nctemp84,nctemp87);
fd =nctemp91;
RunFree(sysfile->a);
RunFree(sysfile);
RunFree(path->a);
RunFree(path);
int nctemp98 = (fd ==0);
if(nctemp98)
{
struct tree* nctemp103= p;
struct nctempchar1 *nctemp107;
static struct nctempchar1 nctemp108 = {{ 24}, (char*)"Module file not found: \0"};
nctemp107=&nctemp108;
nctempchar1* nctemp105= nctemp107;
nctempchar1* nctemp109= file;
int nctemp112=SemSerror(nctemp103,nctemp105,nctemp109);
}
}
struct symbol* nctemp117=SymMktable();
stp =nctemp117;
int nctemp119= fd;
struct symbol* nctemp121= stp;
nctempchar1* nctemp123= module;
int nctemp126=SymReadsym(nctemp119,nctemp121,nctemp123);
int nctemp128= fd;
int nctemp130=LibeClose(nctemp128);
struct symbol* nctemp135= etp;
struct symbol* nctemp137= stp;
struct symbol* nctemp139=SymAddtble(nctemp135,nctemp137);
etp =nctemp139;
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
struct tree* nctemp142= p;
struct tree* nctemp146= p;
nctempchar1* nctemp148=PtreeGetdef(nctemp146);
nctempchar1* nctemp144= nctemp148;
int nctemp149=PtreeSetype(nctemp142,nctemp144);
struct tree* nctemp155= p;
nctempchar1* nctemp157=PtreeGetglobal(nctemp155);
global=nctemp157;
rank =0;
struct tree* nctemp165= p;
nctempchar1* nctemp167=PtreeGetarray(nctemp165);
nctempchar1* nctemp163= nctemp167;
struct nctempchar1 *nctemp170;
static struct nctempchar1 nctemp171 = {{ 6}, (char*)"array\0"};
nctemp170=&nctemp171;
nctempchar1* nctemp168= nctemp170;
int nctemp172=LibeStrcmp(nctemp163,nctemp168);
if(nctemp172)
{
struct tree* nctemp177= p;
struct tree* nctemp179=PtreeMvchild(nctemp177);
np =nctemp179;
struct tree* nctemp184= np;
struct tree* nctemp186=PtreeMvchild(nctemp184);
np =nctemp186;
rank =1;
struct tree* nctemp198= np;
struct tree* nctemp200=PtreeMvsister(nctemp198);
np =nctemp200;
int nctemp191 = (np !=0);
int nctemp202=nctemp191;
while(nctemp202)
{{
int nctemp211 = rank + 1;
rank =nctemp211;
}
struct tree* nctemp219= np;
struct tree* nctemp221=PtreeMvsister(nctemp219);
np =nctemp221;
int nctemp212 = (np !=0);
nctemp202=nctemp212;}struct tree* nctemp227= p;
struct tree* nctemp229=PtreeMvchild(nctemp227);
np =nctemp229;
struct tree* nctemp234= np;
struct tree* nctemp236=PtreeMvsister(nctemp234);
np =nctemp236;
}
else{
struct tree* nctemp241= p;
struct tree* nctemp243=PtreeMvchild(nctemp241);
np =nctemp243;
}
int nctemp244 = (np !=0);
int nctemp248=nctemp244;
while(nctemp248)
{{
struct tree* nctemp250= np;
struct tree* nctemp254= p;
nctempchar1* nctemp256=PtreeGetype(nctemp254);
nctempchar1* nctemp252= nctemp256;
int nctemp257=PtreeSetype(nctemp250,nctemp252);
struct tree* nctemp267= np;
nctempchar1* nctemp269=PtreeGetdef(nctemp267);
nctempchar1* nctemp265= nctemp269;
struct symbol* nctemp270= tp;
struct symbol* nctemp272=SymMkname(nctemp265,nctemp270);
up =nctemp272;
int nctemp258 = (up ==0);
if(nctemp258)
{
struct tree* nctemp275= np;
struct nctempchar1 *nctemp279;
static struct nctempchar1 nctemp280 = {{ 21}, (char*)"Multiple declaration\0"};
nctemp279=&nctemp280;
nctempchar1* nctemp277= nctemp279;
struct tree* nctemp283= np;
nctempchar1* nctemp285=PtreeGetdef(nctemp283);
nctempchar1* nctemp281= nctemp285;
int nctemp286=SemSerror(nctemp275,nctemp277,nctemp281);
}
else{
struct symbol* nctemp288= up;
struct nctempchar1 *nctemp292;
static struct nctempchar1 nctemp293 = {{ 11}, (char*)"identifier\0"};
nctemp292=&nctemp293;
nctempchar1* nctemp290= nctemp292;
int nctemp294=SymSetident(nctemp288,nctemp290);
struct symbol* nctemp296= up;
struct tree* nctemp300= p;
nctempchar1* nctemp302=PtreeGetype(nctemp300);
nctempchar1* nctemp298= nctemp302;
int nctemp303=SymSetype(nctemp296,nctemp298);
nctempchar1* nctemp307= global;
struct nctempchar1 *nctemp312;
static struct nctempchar1 nctemp313 = {{ 7}, (char*)"global\0"};
nctemp312=&nctemp313;
nctempchar1* nctemp310= nctemp312;
int nctemp314=LibeStrcmp(nctemp307,nctemp310);
int nctemp304 = (nctemp314 ==1);
if(nctemp304)
{
struct symbol* nctemp317= up;
struct nctempchar1 *nctemp321;
static struct nctempchar1 nctemp322 = {{ 7}, (char*)"global\0"};
nctemp321=&nctemp322;
nctempchar1* nctemp319= nctemp321;
int nctemp323=SymSetglobal(nctemp317,nctemp319);
}
struct tree* nctemp329= p;
nctempchar1* nctemp331=PtreeGetype(nctemp329);
nctempchar1* nctemp327= nctemp331;
struct nctempchar1 *nctemp334;
static struct nctempchar1 nctemp335 = {{ 6}, (char*)"const\0"};
nctemp334=&nctemp335;
nctempchar1* nctemp332= nctemp334;
int nctemp336=LibeStrcmp(nctemp327,nctemp332);
int nctemp324 = (nctemp336 ==1);
if(nctemp324)
{
struct tree* nctemp342= np;
struct tree* nctemp344=PtreeMvchild(nctemp342);
sp =nctemp344;
struct tree* nctemp349= sp;
struct tree* nctemp351=PtreeMvchild(nctemp349);
sp =nctemp351;
struct tree* nctemp357= sp;
nctempchar1* nctemp359=PtreeGetname(nctemp357);
nctempchar1* nctemp355= nctemp359;
struct nctempchar1 *nctemp362;
static struct nctempchar1 nctemp363 = {{ 7}, (char*)"unexpr\0"};
nctemp362=&nctemp363;
nctempchar1* nctemp360= nctemp362;
int nctemp364=LibeStrcmp(nctemp355,nctemp360);
int nctemp352 = (nctemp364 ==1);
if(nctemp352)
{
struct tree* nctemp370= sp;
struct tree* nctemp372=PtreeMvchild(nctemp370);
sp =nctemp372;
struct tree* nctemp385= sp;
nctempchar1* nctemp387=PtreeGetdef(nctemp385);
nctempchar1* nctemp383= nctemp387;
int nctemp388=LibeStrlen(nctemp383);
int nctemp390 = nctemp388 + 1;
int nctemp392 = nctemp390 + 3;
l =nctemp392;
int nctemp399=l;
nctempchar1 *nctemp398;
nctemp398=(nctempchar1*)RunMalloc(sizeof(nctempchar1));
nctemp398->d[0]=l;
nctemp398->a=(char *)RunMalloc(sizeof(char)*nctemp399);
s=nctemp398;
struct nctempchar1 *nctemp405;
static struct nctempchar1 nctemp406 = {{ 3}, (char*)"(-\0"};
nctemp405=&nctemp406;
nctempchar1* nctemp403= nctemp405;
nctempchar1* nctemp407= s;
int nctemp410=LibeStrcpy(nctemp403,nctemp407);
struct tree* nctemp414= sp;
nctempchar1* nctemp416=PtreeGetdef(nctemp414);
nctempchar1* nctemp412= nctemp416;
nctempchar1* nctemp417= s;
int nctemp420=LibeStrcat(nctemp412,nctemp417);
struct nctempchar1 *nctemp424;
static struct nctempchar1 nctemp425 = {{ 2}, (char*)")\0"};
nctemp424=&nctemp425;
nctempchar1* nctemp422= nctemp424;
nctempchar1* nctemp426= s;
int nctemp429=LibeStrcat(nctemp422,nctemp426);
struct tree* nctemp431= sp;
nctempchar1* nctemp433= s;
int nctemp436=PtreeSetdef(nctemp431,nctemp433);
RunFree(s->a);
RunFree(s);
}
struct symbol* nctemp441= up;
struct tree* nctemp445= sp;
nctempchar1* nctemp447=PtreeGetname(nctemp445);
nctempchar1* nctemp443= nctemp447;
int nctemp448=SymSetype(nctemp441,nctemp443);
struct symbol* nctemp450= up;
struct tree* nctemp454= sp;
nctempchar1* nctemp456=PtreeGetdef(nctemp454);
nctempchar1* nctemp452= nctemp456;
int nctemp457=SymSetdescr(nctemp450,nctemp452);
struct symbol* nctemp459= up;
int nctemp461= 0;
int nctemp463=SymSetemit(nctemp459,nctemp461);
}
struct symbol* nctemp465= up;
struct nctempchar1 *nctemp469;
static struct nctempchar1 nctemp470 = {{ 5}, (char*)"lval\0"};
nctemp469=&nctemp470;
nctempchar1* nctemp467= nctemp469;
int nctemp471=SymSetlval(nctemp465,nctemp467);
struct tree* nctemp475= p;
nctempchar1* nctemp477=PtreeGetstruct(nctemp475);
nctempchar1* nctemp473= nctemp477;
struct nctempchar1 *nctemp480;
static struct nctempchar1 nctemp481 = {{ 7}, (char*)"struct\0"};
nctemp480=&nctemp481;
nctempchar1* nctemp478= nctemp480;
int nctemp482=LibeStrcmp(nctemp473,nctemp478);
if(nctemp482)
{
struct tree* nctemp488= p;
nctempchar1* nctemp490=PtreeGetype(nctemp488);
nctempchar1* nctemp486= nctemp490;
struct symbol* nctemp493=SymGetetp();
struct symbol* nctemp491= nctemp493;
struct symbol* nctemp494=SymLookup(nctemp486,nctemp491);
int nctemp483 = (nctemp494 ==0);
if(nctemp483)
{
struct tree* nctemp497= p;
struct nctempchar1 *nctemp501;
static struct nctempchar1 nctemp502 = {{ 20}, (char*)"Undefined structure\0"};
nctemp501=&nctemp502;
nctempchar1* nctemp499= nctemp501;
struct tree* nctemp505= p;
nctempchar1* nctemp507=PtreeGetype(nctemp505);
nctempchar1* nctemp503= nctemp507;
int nctemp508=SemSerror(nctemp497,nctemp499,nctemp503);
}
struct symbol* nctemp510= up;
struct tree* nctemp514= p;
nctempchar1* nctemp516=PtreeGetstruct(nctemp514);
nctempchar1* nctemp512= nctemp516;
int nctemp517=SymSetstruct(nctemp510,nctemp512);
}
struct symbol* nctemp519= up;
struct tree* nctemp523= p;
nctempchar1* nctemp525=PtreeGetarray(nctemp523);
nctempchar1* nctemp521= nctemp525;
int nctemp526=SymSetarray(nctemp519,nctemp521);
struct symbol* nctemp528= up;
int nctemp530= rank;
int nctemp532=SymSetrank(nctemp528,nctemp530);
struct tree* nctemp534= np;
int nctemp536= rank;
int nctemp538=PtreeSetrank(nctemp534,nctemp536);
}
struct tree* nctemp543= np;
struct tree* nctemp545=PtreeMvsister(nctemp543);
np =nctemp545;
}
int nctemp546 = (np !=0);
nctemp248=nctemp546;}return 1;
}
int SemDeclarations (struct tree* p,struct symbol* tp)
{
int nctemp551 = (p !=0);
int nctemp555=nctemp551;
while(nctemp555)
{{
struct tree* nctemp557= p;
struct symbol* nctemp559= tp;
int nctemp561=SemDeclaration(nctemp557,nctemp559);
struct tree* nctemp566= p;
struct tree* nctemp568=PtreeMvsister(nctemp566);
p =nctemp568;
}
int nctemp569 = (p !=0);
nctemp555=nctemp569;}return 1;
}
int SemStructdecl (struct tree* p,struct symbol* tp)
{
struct symbol* up;
struct symbol* uup;
nctempchar1 *structure;
struct tree* nctemp579= p;
nctempchar1* nctemp581=PtreeGetdef(nctemp579);
structure=nctemp581;
struct tree* nctemp586= p;
struct tree* nctemp588=PtreeMvchild(nctemp586);
p =nctemp588;
struct tree* nctemp593= p;
struct tree* nctemp595=PtreeMvchild(nctemp593);
p =nctemp595;
struct tree* nctemp599= p;
nctempchar1* nctemp601=PtreeGetname(nctemp599);
nctempchar1* nctemp597= nctemp601;
struct nctempchar1 *nctemp604;
static struct nctempchar1 nctemp605 = {{ 13}, (char*)"declarations\0"};
nctemp604=&nctemp605;
nctempchar1* nctemp602= nctemp604;
int nctemp606=LibeStrcmp(nctemp597,nctemp602);
if(nctemp606)
{
struct symbol* nctemp611=SymMktable();
up =nctemp611;
nctempchar1* nctemp619= structure;
struct symbol* nctemp622= tp;
struct symbol* nctemp624=SymMkname(nctemp619,nctemp622);
uup =nctemp624;
int nctemp612 = (uup ==0);
if(nctemp612)
{
struct tree* nctemp627= p;
struct nctempchar1 *nctemp631;
static struct nctempchar1 nctemp632 = {{ 21}, (char*)"Multiple declaration\0"};
nctemp631=&nctemp632;
nctempchar1* nctemp629= nctemp631;
nctempchar1* nctemp633= structure;
int nctemp636=SemSerror(nctemp627,nctemp629,nctemp633);
}
else{
struct symbol* nctemp638= uup;
struct symbol* nctemp640= up;
struct symbol* nctemp642=SymSetable(nctemp638,nctemp640);
struct symbol* nctemp644= uup;
struct nctempchar1 *nctemp648;
static struct nctempchar1 nctemp649 = {{ 10}, (char*)"structdef\0"};
nctemp648=&nctemp649;
nctempchar1* nctemp646= nctemp648;
int nctemp650=SymSetstruct(nctemp644,nctemp646);
struct symbol* nctemp652= uup;
nctempchar1* nctemp654= structure;
int nctemp657=SymSetype(nctemp652,nctemp654);
struct tree* nctemp661= p;
struct tree* nctemp663=PtreeMvchild(nctemp661);
struct tree* nctemp659= nctemp663;
struct symbol* nctemp664= up;
int nctemp666=SemDeclarations(nctemp659,nctemp664);
}
}
return 1;
}
int SemArgtype (struct tree* p,struct symbol* tp)
{
nctempchar1 *name;
struct tree* nctemp673= p;
nctempchar1* nctemp675=PtreeGetdef(nctemp673);
name=nctemp675;
struct symbol* nctemp681= tp;
nctempchar1* nctemp683=SymGetype(nctemp681);
nctempchar1* nctemp679= nctemp683;
struct tree* nctemp686= p;
nctempchar1* nctemp688=PtreeGetype(nctemp686);
nctempchar1* nctemp684= nctemp688;
int nctemp689=LibeStrcmp(nctemp679,nctemp684);
int nctemp676 = (nctemp689 ==0);
if(nctemp676)
{
struct tree* nctemp692= p;
struct nctempchar1 *nctemp696;
static struct nctempchar1 nctemp697 = {{ 50}, (char*)"Argument1 type does not match forward declaration\0"};
nctemp696=&nctemp697;
nctempchar1* nctemp694= nctemp696;
nctempchar1* nctemp698= name;
int nctemp701=SemSerror(nctemp692,nctemp694,nctemp698);
}
struct symbol* nctemp707= tp;
nctempchar1* nctemp709=SymGetref(nctemp707);
nctempchar1* nctemp705= nctemp709;
struct tree* nctemp712= p;
nctempchar1* nctemp714=PtreeGetref(nctemp712);
nctempchar1* nctemp710= nctemp714;
int nctemp715=LibeStrcmp(nctemp705,nctemp710);
int nctemp702 = (nctemp715 ==0);
if(nctemp702)
{
struct tree* nctemp718= p;
struct nctempchar1 *nctemp722;
static struct nctempchar1 nctemp723 = {{ 50}, (char*)"Argument2 type does not match forward declaration\0"};
nctemp722=&nctemp723;
nctempchar1* nctemp720= nctemp722;
nctempchar1* nctemp724= name;
int nctemp727=SemSerror(nctemp718,nctemp720,nctemp724);
}
struct symbol* nctemp733= tp;
nctempchar1* nctemp735=SymGetarray(nctemp733);
nctempchar1* nctemp731= nctemp735;
struct tree* nctemp738= p;
nctempchar1* nctemp740=PtreeGetarray(nctemp738);
nctempchar1* nctemp736= nctemp740;
int nctemp741=LibeStrcmp(nctemp731,nctemp736);
int nctemp728 = (nctemp741 ==0);
if(nctemp728)
{
struct tree* nctemp744= p;
struct nctempchar1 *nctemp748;
static struct nctempchar1 nctemp749 = {{ 50}, (char*)"Argument3 type does not match forward declaration\0"};
nctemp748=&nctemp749;
nctempchar1* nctemp746= nctemp748;
nctempchar1* nctemp750= name;
int nctemp753=SemSerror(nctemp744,nctemp746,nctemp750);
}
struct symbol* nctemp757= tp;
int nctemp759=SymGetrank(nctemp757);
struct tree* nctemp761= p;
int nctemp763=PtreeGetrank(nctemp761);
int nctemp754 = (nctemp759 !=nctemp763);
if(nctemp754)
{
struct tree* nctemp765= p;
struct nctempchar1 *nctemp769;
static struct nctempchar1 nctemp770 = {{ 50}, (char*)"Argument4 type does not match forward declaration\0"};
nctemp769=&nctemp770;
nctempchar1* nctemp767= nctemp769;
nctempchar1* nctemp771= name;
int nctemp774=SemSerror(nctemp765,nctemp767,nctemp771);
}
return 1;
}
int SemArray (struct tree* p,struct symbol* tp)
{
struct tree* np;
int rank;
struct tree* nctemp781= p;
nctempchar1* nctemp783=PtreeGetarray(nctemp781);
nctempchar1* nctemp779= nctemp783;
struct nctempchar1 *nctemp786;
static struct nctempchar1 nctemp787 = {{ 6}, (char*)"array\0"};
nctemp786=&nctemp787;
nctempchar1* nctemp784= nctemp786;
int nctemp788=LibeStrcmp(nctemp779,nctemp784);
int nctemp776 = (nctemp788 ==0);
if(nctemp776)
{
struct tree* nctemp791= p;
struct nctempchar1 *nctemp795;
static struct nctempchar1 nctemp796 = {{ 13}, (char*)"Not an array\0"};
nctemp795=&nctemp796;
nctempchar1* nctemp793= nctemp795;
struct tree* nctemp799= p;
nctempchar1* nctemp801=PtreeGetdef(nctemp799);
nctempchar1* nctemp797= nctemp801;
int nctemp802=SemSerror(nctemp791,nctemp793,nctemp797);
return 0;
}
struct tree* nctemp805= p;
struct nctempchar1 *nctemp809;
static struct nctempchar1 nctemp810 = {{ 11}, (char*)"identifier\0"};
nctemp809=&nctemp810;
nctempchar1* nctemp807= nctemp809;
int nctemp811=PtreeSetname(nctemp805,nctemp807);
struct tree* nctemp816= p;
struct tree* nctemp818=PtreeMvchild(nctemp816);
np =nctemp818;
struct tree* nctemp824= np;
nctempchar1* nctemp826=PtreeGetname(nctemp824);
nctempchar1* nctemp822= nctemp826;
struct nctempchar1 *nctemp829;
static struct nctempchar1 nctemp830 = {{ 9}, (char*)"exprlist\0"};
nctemp829=&nctemp830;
nctempchar1* nctemp827= nctemp829;
int nctemp831=LibeStrcmp(nctemp822,nctemp827);
int nctemp819 = (nctemp831 ==0);
if(nctemp819)
{
struct tree* nctemp834= p;
struct nctempchar1 *nctemp838;
static struct nctempchar1 nctemp839 = {{ 22}, (char*)"Missing array indexes\0"};
nctemp838=&nctemp839;
nctempchar1* nctemp836= nctemp838;
struct tree* nctemp842= p;
nctempchar1* nctemp844=PtreeGetdef(nctemp842);
nctempchar1* nctemp840= nctemp844;
int nctemp845=SemSerror(nctemp834,nctemp836,nctemp840);
return 0;
}
struct tree* nctemp854= np;
struct tree* nctemp856=PtreeMvchild(nctemp854);
np =nctemp856;
int nctemp847 = (np !=0);
if(nctemp847)
{
rank =0;
int nctemp862 = (np !=0);
int nctemp866=nctemp862;
while(nctemp866)
{{
struct tree* nctemp868= np;
struct tree* nctemp870=SemExpr(nctemp868);
struct tree* nctemp875= np;
struct tree* nctemp877=PtreeMvsister(nctemp875);
np =nctemp877;
int nctemp886 = rank + 1;
rank =nctemp886;
}
int nctemp887 = (np !=0);
nctemp866=nctemp887;}}
struct symbol* nctemp895= tp;
int nctemp897=SymGetrank(nctemp895);
int nctemp891 = (rank !=nctemp897);
if(nctemp891)
{
struct tree* nctemp899= p;
struct nctempchar1 *nctemp903;
static struct nctempchar1 nctemp904 = {{ 24}, (char*)"Illegal array dimension\0"};
nctemp903=&nctemp904;
nctempchar1* nctemp901= nctemp903;
struct tree* nctemp907= p;
nctempchar1* nctemp909=PtreeGetdef(nctemp907);
nctempchar1* nctemp905= nctemp909;
int nctemp910=SemSerror(nctemp899,nctemp901,nctemp905);
return 0;
}
struct tree* nctemp913= p;
int nctemp915= rank;
int nctemp917=PtreeSetrank(nctemp913,nctemp915);
return 1;
}
int SemStructure (struct tree* p,struct symbol* tp)
{
nctempchar1 *temp;
struct symbol* up;
struct symbol* uup;
struct tree* np;
struct tree* nctemp924= p;
nctempchar1* nctemp926=PtreeGetstruct(nctemp924);
nctempchar1* nctemp922= nctemp926;
struct nctempchar1 *nctemp929;
static struct nctempchar1 nctemp930 = {{ 7}, (char*)"struct\0"};
nctemp929=&nctemp930;
nctempchar1* nctemp927= nctemp929;
int nctemp931=LibeStrcmp(nctemp922,nctemp927);
int nctemp919 = (nctemp931 ==0);
if(nctemp919)
{
struct tree* nctemp934= p;
struct nctempchar1 *nctemp938;
static struct nctempchar1 nctemp939 = {{ 16}, (char*)"Not a structure\0"};
nctemp938=&nctemp939;
nctempchar1* nctemp936= nctemp938;
struct tree* nctemp942= p;
nctempchar1* nctemp944=PtreeGetdef(nctemp942);
nctempchar1* nctemp940= nctemp944;
int nctemp945=SemSerror(nctemp934,nctemp936,nctemp940);
return 0;
}
struct tree* nctemp948= p;
struct nctempchar1 *nctemp952;
static struct nctempchar1 nctemp953 = {{ 11}, (char*)"identifier\0"};
nctemp952=&nctemp953;
nctempchar1* nctemp950= nctemp952;
int nctemp954=PtreeSetname(nctemp948,nctemp950);
struct symbol* nctemp960= tp;
nctempchar1* nctemp962=SymGetype(nctemp960);
temp=nctemp962;
nctempchar1* nctemp970= temp;
struct symbol* nctemp973=SymLook(nctemp970);
up =nctemp973;
int nctemp963 = (up ==0);
if(nctemp963)
{
nctempchar1* nctemp982= temp;
struct symbol* nctemp985=SymLook(nctemp982);
up =nctemp985;
int nctemp975 = (up ==0);
if(nctemp975)
{
struct tree* nctemp988= p;
struct nctempchar1 *nctemp992;
static struct nctempchar1 nctemp993 = {{ 26}, (char*)"Undeclared structure type\0"};
nctemp992=&nctemp993;
nctempchar1* nctemp990= nctemp992;
struct nctempchar1 *nctemp996;
static struct nctempchar1 nctemp997 = {{ 2}, (char*)" \0"};
nctemp996=&nctemp997;
nctempchar1* nctemp994= nctemp996;
int nctemp998=SemSerror(nctemp988,nctemp990,nctemp994);
return 0;
}
}
struct symbol* nctemp1003= tp;
nctempchar1* nctemp1005=SymGetstruct(nctemp1003);
nctempchar1* nctemp1001= nctemp1005;
struct nctempchar1 *nctemp1008;
static struct nctempchar1 nctemp1009 = {{ 10}, (char*)"structdef\0"};
nctemp1008=&nctemp1009;
nctempchar1* nctemp1006= nctemp1008;
int nctemp1010=LibeStrcmp(nctemp1001,nctemp1006);
if(nctemp1010)
{
struct tree* nctemp1012= p;
struct nctempchar1 *nctemp1016;
static struct nctempchar1 nctemp1017 = {{ 43}, (char*)"Struct names can not be used as a variable\0"};
nctemp1016=&nctemp1017;
nctempchar1* nctemp1014= nctemp1016;
struct tree* nctemp1020= p;
nctempchar1* nctemp1022=PtreeGetdef(nctemp1020);
nctempchar1* nctemp1018= nctemp1022;
int nctemp1023=SemSerror(nctemp1012,nctemp1014,nctemp1018);
return 0;
}
struct tree* nctemp1029= p;
struct tree* nctemp1031=PtreeMvchild(nctemp1029);
np =nctemp1031;
int nctemp1032 = (np ==0);
if(nctemp1032)
{
struct tree* nctemp1037= p;
struct nctempchar1 *nctemp1041;
static struct nctempchar1 nctemp1042 = {{ 27}, (char*)"Missing structure selector\0"};
nctemp1041=&nctemp1042;
nctempchar1* nctemp1039= nctemp1041;
struct tree* nctemp1045= p;
nctempchar1* nctemp1047=PtreeGetdef(nctemp1045);
nctempchar1* nctemp1043= nctemp1047;
int nctemp1048=SemSerror(nctemp1037,nctemp1039,nctemp1043);
return 0;
}
struct tree* nctemp1053= p;
nctempchar1* nctemp1055=PtreeGetarray(nctemp1053);
nctempchar1* nctemp1051= nctemp1055;
struct nctempchar1 *nctemp1058;
static struct nctempchar1 nctemp1059 = {{ 6}, (char*)"array\0"};
nctemp1058=&nctemp1059;
nctempchar1* nctemp1056= nctemp1058;
int nctemp1060=LibeStrcmp(nctemp1051,nctemp1056);
if(nctemp1060)
{
struct tree* nctemp1065= np;
struct tree* nctemp1067=PtreeMvsister(nctemp1065);
np =nctemp1067;
}
int nctemp1068 = (np ==0);
if(nctemp1068)
{
struct tree* nctemp1073= p;
struct nctempchar1 *nctemp1077;
static struct nctempchar1 nctemp1078 = {{ 20}, (char*)"Missing array index\0"};
nctemp1077=&nctemp1078;
nctempchar1* nctemp1075= nctemp1077;
struct tree* nctemp1081= p;
nctempchar1* nctemp1083=PtreeGetdef(nctemp1081);
nctempchar1* nctemp1079= nctemp1083;
int nctemp1084=SemSerror(nctemp1073,nctemp1075,nctemp1079);
return 0;
}
struct symbol* nctemp1090= up;
struct symbol* nctemp1092=SymGetable(nctemp1090);
uup =nctemp1092;
struct tree* nctemp1102= np;
nctempchar1* nctemp1104=PtreeGetdef(nctemp1102);
nctempchar1* nctemp1100= nctemp1104;
struct symbol* nctemp1105= uup;
struct symbol* nctemp1107=SymLookup(nctemp1100,nctemp1105);
tp =nctemp1107;
int nctemp1093 = (tp ==0);
if(nctemp1093)
{
struct tree* nctemp1110= np;
struct nctempchar1 *nctemp1114;
static struct nctempchar1 nctemp1115 = {{ 28}, (char*)"Undeclared structure member\0"};
nctemp1114=&nctemp1115;
nctempchar1* nctemp1112= nctemp1114;
struct tree* nctemp1118= np;
nctempchar1* nctemp1120=PtreeGetdef(nctemp1118);
nctempchar1* nctemp1116= nctemp1120;
int nctemp1121=SemSerror(nctemp1110,nctemp1112,nctemp1116);
return 0;
}
struct symbol* nctemp1126= tp;
nctempchar1* nctemp1128=SymGetarray(nctemp1126);
nctempchar1* nctemp1124= nctemp1128;
struct nctempchar1 *nctemp1131;
static struct nctempchar1 nctemp1132 = {{ 6}, (char*)"array\0"};
nctemp1131=&nctemp1132;
nctempchar1* nctemp1129= nctemp1131;
int nctemp1133=LibeStrcmp(nctemp1124,nctemp1129);
if(nctemp1133)
{
struct tree* nctemp1137= np;
struct tree* nctemp1139=PtreeMvchild(nctemp1137);
int nctemp1134 = (nctemp1139 !=0);
if(nctemp1134)
{
struct tree* nctemp1142= np;
struct symbol* nctemp1144= tp;
int nctemp1146=SemArray(nctemp1142,nctemp1144);
struct symbol* nctemp1150= tp;
nctempchar1* nctemp1152=SymGetstruct(nctemp1150);
nctempchar1* nctemp1148= nctemp1152;
struct nctempchar1 *nctemp1155;
static struct nctempchar1 nctemp1156 = {{ 7}, (char*)"struct\0"};
nctemp1155=&nctemp1156;
nctempchar1* nctemp1153= nctemp1155;
int nctemp1157=LibeStrcmp(nctemp1148,nctemp1153);
if(nctemp1157)
{
struct tree* nctemp1159= np;
struct nctempchar1 *nctemp1163;
static struct nctempchar1 nctemp1164 = {{ 5}, (char*)"sref\0"};
nctemp1163=&nctemp1164;
nctempchar1* nctemp1161= nctemp1163;
int nctemp1165=PtreeSetref(nctemp1159,nctemp1161);
}
}
else{
struct tree* nctemp1167= np;
struct nctempchar1 *nctemp1171;
static struct nctempchar1 nctemp1172 = {{ 5}, (char*)"aref\0"};
nctemp1171=&nctemp1172;
nctempchar1* nctemp1169= nctemp1171;
int nctemp1173=PtreeSetref(nctemp1167,nctemp1169);
}
}
else{
struct symbol* nctemp1177= tp;
nctempchar1* nctemp1179=SymGetstruct(nctemp1177);
nctempchar1* nctemp1175= nctemp1179;
struct nctempchar1 *nctemp1182;
static struct nctempchar1 nctemp1183 = {{ 7}, (char*)"struct\0"};
nctemp1182=&nctemp1183;
nctempchar1* nctemp1180= nctemp1182;
int nctemp1184=LibeStrcmp(nctemp1175,nctemp1180);
if(nctemp1184)
{
struct tree* nctemp1186= np;
struct nctempchar1 *nctemp1190;
static struct nctempchar1 nctemp1191 = {{ 5}, (char*)"sref\0"};
nctemp1190=&nctemp1191;
nctempchar1* nctemp1188= nctemp1190;
int nctemp1192=PtreeSetref(nctemp1186,nctemp1188);
}
}
struct tree* nctemp1194= np;
struct symbol* nctemp1198= tp;
nctempchar1* nctemp1200=SymGetype(nctemp1198);
nctempchar1* nctemp1196= nctemp1200;
int nctemp1201=PtreeSetype(nctemp1194,nctemp1196);
struct tree* nctemp1203= np;
struct symbol* nctemp1207= tp;
nctempchar1* nctemp1209=SymGetarray(nctemp1207);
nctempchar1* nctemp1205= nctemp1209;
int nctemp1210=PtreeSetarray(nctemp1203,nctemp1205);
struct tree* nctemp1212= np;
struct symbol* nctemp1216= tp;
int nctemp1218=SymGetrank(nctemp1216);
int nctemp1214= nctemp1218;
int nctemp1219=PtreeSetrank(nctemp1212,nctemp1214);
struct tree* nctemp1221= np;
struct symbol* nctemp1225= tp;
nctempchar1* nctemp1227=SymGetlval(nctemp1225);
nctempchar1* nctemp1223= nctemp1227;
int nctemp1228=PtreeSetlval(nctemp1221,nctemp1223);
struct tree* nctemp1230= p;
struct symbol* nctemp1234= tp;
nctempchar1* nctemp1236=SymGetype(nctemp1234);
nctempchar1* nctemp1232= nctemp1236;
int nctemp1237=PtreeSetype(nctemp1230,nctemp1232);
struct tree* nctemp1239= p;
struct tree* nctemp1243= np;
nctempchar1* nctemp1245=PtreeGetref(nctemp1243);
nctempchar1* nctemp1241= nctemp1245;
int nctemp1246=PtreeSetref(nctemp1239,nctemp1241);
struct tree* nctemp1248= p;
struct symbol* nctemp1252= tp;
int nctemp1254=SymGetrank(nctemp1252);
int nctemp1250= nctemp1254;
int nctemp1255=PtreeSetrank(nctemp1248,nctemp1250);
return 1;
}
int SemId (struct tree* p)
{
struct symbol* tp;
struct tree* np;
struct tree* nctemp1266= p;
nctempchar1* nctemp1268=PtreeGetdef(nctemp1266);
nctempchar1* nctemp1264= nctemp1268;
struct symbol* nctemp1269=SymLook(nctemp1264);
tp =nctemp1269;
int nctemp1257 = (tp ==0);
if(nctemp1257)
{
struct tree* nctemp1272= p;
struct nctempchar1 *nctemp1276;
static struct nctempchar1 nctemp1277 = {{ 22}, (char*)"Undeclared identifier\0"};
nctemp1276=&nctemp1277;
nctempchar1* nctemp1274= nctemp1276;
struct tree* nctemp1280= p;
nctempchar1* nctemp1282=PtreeGetdef(nctemp1280);
nctempchar1* nctemp1278= nctemp1282;
int nctemp1283=SemSerror(nctemp1272,nctemp1274,nctemp1278);
}
struct symbol* nctemp1289= tp;
nctempchar1* nctemp1291=SymGetype(nctemp1289);
nctempchar1* nctemp1287= nctemp1291;
struct nctempchar1 *nctemp1294;
static struct nctempchar1 nctemp1295 = {{ 10}, (char*)"iconstant\0"};
nctemp1294=&nctemp1295;
nctempchar1* nctemp1292= nctemp1294;
int nctemp1296=LibeStrcmp(nctemp1287,nctemp1292);
int nctemp1284 = (nctemp1296 ==1);
if(nctemp1284)
{
struct tree* nctemp1299= p;
struct symbol* nctemp1303= tp;
nctempchar1* nctemp1305=SymGetype(nctemp1303);
nctempchar1* nctemp1301= nctemp1305;
int nctemp1306=PtreeSetname(nctemp1299,nctemp1301);
struct tree* nctemp1308= p;
struct symbol* nctemp1312= tp;
nctempchar1* nctemp1314=SymGetdescr(nctemp1312);
nctempchar1* nctemp1310= nctemp1314;
int nctemp1315=PtreeSetdef(nctemp1308,nctemp1310);
struct tree* nctemp1317= p;
struct nctempchar1 *nctemp1321;
static struct nctempchar1 nctemp1322 = {{ 4}, (char*)"int\0"};
nctemp1321=&nctemp1322;
nctempchar1* nctemp1319= nctemp1321;
int nctemp1323=PtreeSetype(nctemp1317,nctemp1319);
return 1;
}
else{
struct symbol* nctemp1330= tp;
nctempchar1* nctemp1332=SymGetype(nctemp1330);
nctempchar1* nctemp1328= nctemp1332;
struct nctempchar1 *nctemp1335;
static struct nctempchar1 nctemp1336 = {{ 10}, (char*)"rconstant\0"};
nctemp1335=&nctemp1336;
nctempchar1* nctemp1333= nctemp1335;
int nctemp1337=LibeStrcmp(nctemp1328,nctemp1333);
int nctemp1325 = (nctemp1337 ==1);
if(nctemp1325)
{
struct tree* nctemp1340= p;
struct symbol* nctemp1344= tp;
nctempchar1* nctemp1346=SymGetype(nctemp1344);
nctempchar1* nctemp1342= nctemp1346;
int nctemp1347=PtreeSetname(nctemp1340,nctemp1342);
struct tree* nctemp1349= p;
struct symbol* nctemp1353= tp;
nctempchar1* nctemp1355=SymGetdescr(nctemp1353);
nctempchar1* nctemp1351= nctemp1355;
int nctemp1356=PtreeSetdef(nctemp1349,nctemp1351);
struct tree* nctemp1358= p;
struct nctempchar1 *nctemp1362;
static struct nctempchar1 nctemp1363 = {{ 6}, (char*)"float\0"};
nctemp1362=&nctemp1363;
nctempchar1* nctemp1360= nctemp1362;
int nctemp1364=PtreeSetype(nctemp1358,nctemp1360);
return 1;
}
else{
struct symbol* nctemp1371= tp;
nctempchar1* nctemp1373=SymGetype(nctemp1371);
nctempchar1* nctemp1369= nctemp1373;
struct nctempchar1 *nctemp1376;
static struct nctempchar1 nctemp1377 = {{ 10}, (char*)"sconstant\0"};
nctemp1376=&nctemp1377;
nctempchar1* nctemp1374= nctemp1376;
int nctemp1378=LibeStrcmp(nctemp1369,nctemp1374);
int nctemp1366 = (nctemp1378 ==1);
if(nctemp1366)
{
struct tree* nctemp1381= p;
struct symbol* nctemp1385= tp;
nctempchar1* nctemp1387=SymGetype(nctemp1385);
nctempchar1* nctemp1383= nctemp1387;
int nctemp1388=PtreeSetname(nctemp1381,nctemp1383);
struct tree* nctemp1390= p;
struct symbol* nctemp1394= tp;
nctempchar1* nctemp1396=SymGetdescr(nctemp1394);
nctempchar1* nctemp1392= nctemp1396;
int nctemp1397=PtreeSetdef(nctemp1390,nctemp1392);
struct tree* nctemp1399= p;
struct nctempchar1 *nctemp1403;
static struct nctempchar1 nctemp1404 = {{ 5}, (char*)"char\0"};
nctemp1403=&nctemp1404;
nctempchar1* nctemp1401= nctemp1403;
int nctemp1405=PtreeSetype(nctemp1399,nctemp1401);
struct tree* nctemp1407= p;
struct nctempchar1 *nctemp1411;
static struct nctempchar1 nctemp1412 = {{ 6}, (char*)"array\0"};
nctemp1411=&nctemp1412;
nctempchar1* nctemp1409= nctemp1411;
int nctemp1413=PtreeSetarray(nctemp1407,nctemp1409);
struct tree* nctemp1415= p;
struct nctempchar1 *nctemp1419;
static struct nctempchar1 nctemp1420 = {{ 5}, (char*)"aref\0"};
nctemp1419=&nctemp1420;
nctempchar1* nctemp1417= nctemp1419;
int nctemp1421=PtreeSetref(nctemp1415,nctemp1417);
struct tree* nctemp1423= p;
int nctemp1425= 1;
int nctemp1427=PtreeSetrank(nctemp1423,nctemp1425);
return 1;
}
}
}
struct symbol* nctemp1432= tp;
nctempchar1* nctemp1434=SymGetstruct(nctemp1432);
nctempchar1* nctemp1430= nctemp1434;
struct nctempchar1 *nctemp1437;
static struct nctempchar1 nctemp1438 = {{ 10}, (char*)"structdef\0"};
nctemp1437=&nctemp1438;
nctempchar1* nctemp1435= nctemp1437;
int nctemp1439=LibeStrcmp(nctemp1430,nctemp1435);
if(nctemp1439)
{
struct tree* nctemp1441= p;
struct nctempchar1 *nctemp1445;
static struct nctempchar1 nctemp1446 = {{ 43}, (char*)"Struct names can not be used as a variable\0"};
nctemp1445=&nctemp1446;
nctempchar1* nctemp1443= nctemp1445;
struct tree* nctemp1449= p;
nctempchar1* nctemp1451=PtreeGetdef(nctemp1449);
nctempchar1* nctemp1447= nctemp1451;
int nctemp1452=SemSerror(nctemp1441,nctemp1443,nctemp1447);
}
struct tree* nctemp1454= p;
struct symbol* nctemp1458= tp;
nctempchar1* nctemp1460=SymGetype(nctemp1458);
nctempchar1* nctemp1456= nctemp1460;
int nctemp1461=PtreeSetype(nctemp1454,nctemp1456);
struct tree* nctemp1463= p;
struct symbol* nctemp1467= tp;
nctempchar1* nctemp1469=SymGetarray(nctemp1467);
nctempchar1* nctemp1465= nctemp1469;
int nctemp1470=PtreeSetarray(nctemp1463,nctemp1465);
struct tree* nctemp1472= p;
struct symbol* nctemp1476= tp;
int nctemp1478=SymGetrank(nctemp1476);
int nctemp1474= nctemp1478;
int nctemp1479=PtreeSetrank(nctemp1472,nctemp1474);
struct tree* nctemp1481= p;
struct symbol* nctemp1485= tp;
nctempchar1* nctemp1487=SymGetstruct(nctemp1485);
nctempchar1* nctemp1483= nctemp1487;
int nctemp1488=PtreeSetstruct(nctemp1481,nctemp1483);
struct tree* nctemp1490= p;
struct symbol* nctemp1494= tp;
nctempchar1* nctemp1496=SymGetlval(nctemp1494);
nctempchar1* nctemp1492= nctemp1496;
int nctemp1497=PtreeSetlval(nctemp1490,nctemp1492);
struct tree* nctemp1502= p;
struct tree* nctemp1504=PtreeMvchild(nctemp1502);
np =nctemp1504;
int nctemp1505 = (np !=0);
if(nctemp1505)
{
struct tree* nctemp1512= np;
nctempchar1* nctemp1514=PtreeGetname(nctemp1512);
nctempchar1* nctemp1510= nctemp1514;
struct nctempchar1 *nctemp1517;
static struct nctempchar1 nctemp1518 = {{ 9}, (char*)"exprlist\0"};
nctemp1517=&nctemp1518;
nctempchar1* nctemp1515= nctemp1517;
int nctemp1519=LibeStrcmp(nctemp1510,nctemp1515);
if(nctemp1519)
{
struct tree* nctemp1521= p;
struct symbol* nctemp1523= tp;
int nctemp1525=SemArray(nctemp1521,nctemp1523);
struct tree* nctemp1529= np;
struct tree* nctemp1531=PtreeMvsister(nctemp1529);
int nctemp1526 = (nctemp1531 !=0);
if(nctemp1526)
{
struct tree* nctemp1534= p;
struct symbol* nctemp1536= tp;
int nctemp1538=SemStructure(nctemp1534,nctemp1536);
}
else{
struct tree* nctemp1542= p;
nctempchar1* nctemp1544=PtreeGetstruct(nctemp1542);
nctempchar1* nctemp1540= nctemp1544;
struct nctempchar1 *nctemp1547;
static struct nctempchar1 nctemp1548 = {{ 7}, (char*)"struct\0"};
nctemp1547=&nctemp1548;
nctempchar1* nctemp1545= nctemp1547;
int nctemp1549=LibeStrcmp(nctemp1540,nctemp1545);
if(nctemp1549)
{
struct tree* nctemp1551= p;
struct nctempchar1 *nctemp1555;
static struct nctempchar1 nctemp1556 = {{ 5}, (char*)"sref\0"};
nctemp1555=&nctemp1556;
nctempchar1* nctemp1553= nctemp1555;
int nctemp1557=PtreeSetref(nctemp1551,nctemp1553);
}
}
}
else{
struct tree* nctemp1561= np;
nctempchar1* nctemp1563=PtreeGetname(nctemp1561);
nctempchar1* nctemp1559= nctemp1563;
struct nctempchar1 *nctemp1566;
static struct nctempchar1 nctemp1567 = {{ 9}, (char*)"selector\0"};
nctemp1566=&nctemp1567;
nctempchar1* nctemp1564= nctemp1566;
int nctemp1568=LibeStrcmp(nctemp1559,nctemp1564);
if(nctemp1568)
{
struct tree* nctemp1570= p;
struct symbol* nctemp1572= tp;
int nctemp1574=SemStructure(nctemp1570,nctemp1572);
}
}
}
else{
struct tree* nctemp1578= p;
nctempchar1* nctemp1580=PtreeGetarray(nctemp1578);
nctempchar1* nctemp1576= nctemp1580;
struct nctempchar1 *nctemp1583;
static struct nctempchar1 nctemp1584 = {{ 6}, (char*)"array\0"};
nctemp1583=&nctemp1584;
nctempchar1* nctemp1581= nctemp1583;
int nctemp1585=LibeStrcmp(nctemp1576,nctemp1581);
if(nctemp1585)
{
struct tree* nctemp1587= p;
struct nctempchar1 *nctemp1591;
static struct nctempchar1 nctemp1592 = {{ 5}, (char*)"aref\0"};
nctemp1591=&nctemp1592;
nctempchar1* nctemp1589= nctemp1591;
int nctemp1593=PtreeSetref(nctemp1587,nctemp1589);
}
else{
struct tree* nctemp1597= p;
nctempchar1* nctemp1599=PtreeGetstruct(nctemp1597);
nctempchar1* nctemp1595= nctemp1599;
struct nctempchar1 *nctemp1602;
static struct nctempchar1 nctemp1603 = {{ 7}, (char*)"struct\0"};
nctemp1602=&nctemp1603;
nctempchar1* nctemp1600= nctemp1602;
int nctemp1604=LibeStrcmp(nctemp1595,nctemp1600);
if(nctemp1604)
{
struct tree* nctemp1606= p;
struct nctempchar1 *nctemp1610;
static struct nctempchar1 nctemp1611 = {{ 5}, (char*)"sref\0"};
nctemp1610=&nctemp1611;
nctempchar1* nctemp1608= nctemp1610;
int nctemp1612=PtreeSetref(nctemp1606,nctemp1608);
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
struct tree* nctemp1617= p;
nctempchar1* nctemp1619=PtreeGetname(nctemp1617);
nctempchar1* nctemp1615= nctemp1619;
struct nctempchar1 *nctemp1622;
static struct nctempchar1 nctemp1623 = {{ 6}, (char*)"fcall\0"};
nctemp1622=&nctemp1623;
nctempchar1* nctemp1620= nctemp1622;
int nctemp1624=LibeStrcmp(nctemp1615,nctemp1620);
if(nctemp1624)
{
struct tree* nctemp1634= p;
nctempchar1* nctemp1636=PtreeGetdef(nctemp1634);
nctempchar1* nctemp1632= nctemp1636;
struct symbol* nctemp1639=SymGetetp();
struct symbol* nctemp1637= nctemp1639;
struct symbol* nctemp1640=SymLookup(nctemp1632,nctemp1637);
tp =nctemp1640;
int nctemp1625 = (tp ==0);
if(nctemp1625)
{
struct tree* nctemp1643= p;
struct nctempchar1 *nctemp1647;
static struct nctempchar1 nctemp1648 = {{ 20}, (char*)"Undeclared function\0"};
nctemp1647=&nctemp1648;
nctempchar1* nctemp1645= nctemp1647;
struct tree* nctemp1651= p;
nctempchar1* nctemp1653=PtreeGetdef(nctemp1651);
nctempchar1* nctemp1649= nctemp1653;
int nctemp1654=SemSerror(nctemp1643,nctemp1645,nctemp1649);
return 0;
}
struct symbol* nctemp1661= tp;
nctempchar1* nctemp1663=SymGetfunc(nctemp1661);
nctempchar1* nctemp1659= nctemp1663;
struct nctempchar1 *nctemp1666;
static struct nctempchar1 nctemp1667 = {{ 5}, (char*)"fdef\0"};
nctemp1666=&nctemp1667;
nctempchar1* nctemp1664= nctemp1666;
int nctemp1668=LibeStrcmp(nctemp1659,nctemp1664);
int nctemp1656 = (nctemp1668 ==0);
if(nctemp1656)
{
struct tree* nctemp1671= p;
struct nctempchar1 *nctemp1675;
static struct nctempchar1 nctemp1676 = {{ 15}, (char*)"Not a function\0"};
nctemp1675=&nctemp1676;
nctempchar1* nctemp1673= nctemp1675;
struct tree* nctemp1679= p;
nctempchar1* nctemp1681=PtreeGetdef(nctemp1679);
nctempchar1* nctemp1677= nctemp1681;
int nctemp1682=SemSerror(nctemp1671,nctemp1673,nctemp1677);
return 0;
}
struct tree* nctemp1685= p;
struct symbol* nctemp1689= tp;
nctempchar1* nctemp1691=SymGetype(nctemp1689);
nctempchar1* nctemp1687= nctemp1691;
int nctemp1692=PtreeSetype(nctemp1685,nctemp1687);
struct tree* nctemp1694= p;
struct symbol* nctemp1698= tp;
nctempchar1* nctemp1700=SymGetstruct(nctemp1698);
nctempchar1* nctemp1696= nctemp1700;
int nctemp1701=PtreeSetstruct(nctemp1694,nctemp1696);
struct tree* nctemp1703= p;
struct symbol* nctemp1707= tp;
nctempchar1* nctemp1709=SymGetarray(nctemp1707);
nctempchar1* nctemp1705= nctemp1709;
int nctemp1710=PtreeSetarray(nctemp1703,nctemp1705);
struct tree* nctemp1712= p;
struct symbol* nctemp1716= tp;
int nctemp1718=SymGetrank(nctemp1716);
int nctemp1714= nctemp1718;
int nctemp1719=PtreeSetrank(nctemp1712,nctemp1714);
struct tree* nctemp1723= p;
nctempchar1* nctemp1725=PtreeGetarray(nctemp1723);
nctempchar1* nctemp1721= nctemp1725;
struct nctempchar1 *nctemp1728;
static struct nctempchar1 nctemp1729 = {{ 6}, (char*)"array\0"};
nctemp1728=&nctemp1729;
nctempchar1* nctemp1726= nctemp1728;
int nctemp1730=LibeStrcmp(nctemp1721,nctemp1726);
if(nctemp1730)
{
struct tree* nctemp1732= p;
struct nctempchar1 *nctemp1736;
static struct nctempchar1 nctemp1737 = {{ 5}, (char*)"aref\0"};
nctemp1736=&nctemp1737;
nctempchar1* nctemp1734= nctemp1736;
int nctemp1738=PtreeSetref(nctemp1732,nctemp1734);
}
else{
struct tree* nctemp1742= p;
nctempchar1* nctemp1744=PtreeGetstruct(nctemp1742);
nctempchar1* nctemp1740= nctemp1744;
struct nctempchar1 *nctemp1747;
static struct nctempchar1 nctemp1748 = {{ 7}, (char*)"struct\0"};
nctemp1747=&nctemp1748;
nctempchar1* nctemp1745= nctemp1747;
int nctemp1749=LibeStrcmp(nctemp1740,nctemp1745);
if(nctemp1749)
{
struct tree* nctemp1751= p;
struct nctempchar1 *nctemp1755;
static struct nctempchar1 nctemp1756 = {{ 5}, (char*)"sref\0"};
nctemp1755=&nctemp1756;
nctempchar1* nctemp1753= nctemp1755;
int nctemp1757=PtreeSetref(nctemp1751,nctemp1753);
}
}
struct symbol* nctemp1762= tp;
struct symbol* nctemp1764=SymGetable(nctemp1762);
tp =nctemp1764;
struct nctempchar1 *nctemp1771;
static struct nctempchar1 nctemp1772 = {{ 9}, (char*)"#arglist\0"};
nctemp1771=&nctemp1772;
nctempchar1* nctemp1769= nctemp1771;
struct symbol* nctemp1773= tp;
struct symbol* nctemp1775=SymLookup(nctemp1769,nctemp1773);
tp =nctemp1775;
int nctemp1776 = (tp !=0);
if(nctemp1776)
{
struct symbol* nctemp1784= tp;
struct symbol* nctemp1786=SymGetable(nctemp1784);
tp =nctemp1786;
}
struct tree* nctemp1794= p;
struct tree* nctemp1796=PtreeMvchild(nctemp1794);
np =nctemp1796;
int nctemp1787 = (np ==0);
if(nctemp1787)
{
struct symbol* nctemp1805= tp;
struct symbol* nctemp1807=SymMvnext(nctemp1805);
tp =nctemp1807;
int nctemp1798 = (tp !=0);
if(nctemp1798)
{
struct tree* nctemp1810= p;
struct nctempchar1 *nctemp1814;
static struct nctempchar1 nctemp1815 = {{ 41}, (char*)"Function call does not match declaration\0"};
nctemp1814=&nctemp1815;
nctempchar1* nctemp1812= nctemp1814;
struct tree* nctemp1818= p;
nctempchar1* nctemp1820=PtreeGetdef(nctemp1818);
nctempchar1* nctemp1816= nctemp1820;
int nctemp1821=SemSerror(nctemp1810,nctemp1812,nctemp1816);
return 0;
}
return 1;
}
struct tree* nctemp1830= p;
struct tree* nctemp1832=PtreeMvchild(nctemp1830);
struct tree* nctemp1828= nctemp1832;
struct tree* nctemp1833=PtreeMvchild(nctemp1828);
np =nctemp1833;
int nctemp1834 = (np !=0);
int nctemp1838=nctemp1834;
while(nctemp1838)
{{
struct symbol* nctemp1843= tp;
struct symbol* nctemp1845=SymMvnext(nctemp1843);
tp =nctemp1845;
int nctemp1846 = (tp ==0);
if(nctemp1846)
{
struct tree* nctemp1851= p;
struct nctempchar1 *nctemp1855;
static struct nctempchar1 nctemp1856 = {{ 41}, (char*)"Function call does not match declaration\0"};
nctemp1855=&nctemp1856;
nctempchar1* nctemp1853= nctemp1855;
struct tree* nctemp1859= p;
nctempchar1* nctemp1861=PtreeGetdef(nctemp1859);
nctempchar1* nctemp1857= nctemp1861;
int nctemp1862=SemSerror(nctemp1851,nctemp1853,nctemp1857);
return 0;
}
struct symbol* nctemp1869= tp;
nctempchar1* nctemp1871=SymGetype(nctemp1869);
type=nctemp1871;
struct tree* nctemp1873= np;
struct tree* nctemp1875=SemExpr(nctemp1873);
nctempchar1* nctemp1879= type;
struct tree* nctemp1884= np;
nctempchar1* nctemp1886=PtreeGetype(nctemp1884);
nctempchar1* nctemp1882= nctemp1886;
int nctemp1887=LibeStrcmp(nctemp1879,nctemp1882);
int nctemp1876 = (nctemp1887 ==0);
if(nctemp1876)
{
struct tree* nctemp1890= p;
struct nctempchar1 *nctemp1894;
static struct nctempchar1 nctemp1895 = {{ 41}, (char*)"Function call does not match declaration\0"};
nctemp1894=&nctemp1895;
nctempchar1* nctemp1892= nctemp1894;
struct tree* nctemp1898= p;
nctempchar1* nctemp1900=PtreeGetdef(nctemp1898);
nctempchar1* nctemp1896= nctemp1900;
int nctemp1901=SemSerror(nctemp1890,nctemp1892,nctemp1896);
return 0;
}
struct symbol* nctemp1906= tp;
nctempchar1* nctemp1908=SymGetarray(nctemp1906);
nctempchar1* nctemp1904= nctemp1908;
struct nctempchar1 *nctemp1911;
static struct nctempchar1 nctemp1912 = {{ 6}, (char*)"array\0"};
nctemp1911=&nctemp1912;
nctempchar1* nctemp1909= nctemp1911;
int nctemp1913=LibeStrcmp(nctemp1904,nctemp1909);
if(nctemp1913)
{
struct tree* nctemp1919= np;
nctempchar1* nctemp1921=PtreeGetref(nctemp1919);
nctempchar1* nctemp1917= nctemp1921;
struct nctempchar1 *nctemp1924;
static struct nctempchar1 nctemp1925 = {{ 5}, (char*)"aref\0"};
nctemp1924=&nctemp1925;
nctempchar1* nctemp1922= nctemp1924;
int nctemp1926=LibeStrcmp(nctemp1917,nctemp1922);
int nctemp1914 = (nctemp1926 ==0);
if(nctemp1914)
{
struct tree* nctemp1929= p;
struct nctempchar1 *nctemp1933;
static struct nctempchar1 nctemp1934 = {{ 41}, (char*)"Function call does not match declaration\0"};
nctemp1933=&nctemp1934;
nctempchar1* nctemp1931= nctemp1933;
struct tree* nctemp1937= p;
nctempchar1* nctemp1939=PtreeGetdef(nctemp1937);
nctempchar1* nctemp1935= nctemp1939;
int nctemp1940=SemSerror(nctemp1929,nctemp1931,nctemp1935);
}
struct tree* nctemp1944= np;
int nctemp1946=PtreeGetrank(nctemp1944);
struct symbol* nctemp1948= tp;
int nctemp1950=SymGetrank(nctemp1948);
int nctemp1941 = (nctemp1946 !=nctemp1950);
if(nctemp1941)
{
struct tree* nctemp1952= p;
struct nctempchar1 *nctemp1956;
static struct nctempchar1 nctemp1957 = {{ 36}, (char*)"Illegal array rank in function call\0"};
nctemp1956=&nctemp1957;
nctempchar1* nctemp1954= nctemp1956;
struct tree* nctemp1960= p;
nctempchar1* nctemp1962=PtreeGetdef(nctemp1960);
nctempchar1* nctemp1958= nctemp1962;
int nctemp1963=SemSerror(nctemp1952,nctemp1954,nctemp1958);
}
}
struct tree* nctemp1968= np;
struct tree* nctemp1970=PtreeMvsister(nctemp1968);
np =nctemp1970;
}
int nctemp1971 = (np !=0);
nctemp1838=nctemp1971;}struct symbol* nctemp1978= tp;
struct symbol* nctemp1980=SymMvnext(nctemp1978);
int nctemp1975 = (nctemp1980 !=0);
if(nctemp1975)
{
struct tree* nctemp1983= p;
struct nctempchar1 *nctemp1987;
static struct nctempchar1 nctemp1988 = {{ 41}, (char*)"Function call does not match declaration\0"};
nctemp1987=&nctemp1988;
nctempchar1* nctemp1985= nctemp1987;
struct tree* nctemp1991= p;
nctempchar1* nctemp1993=PtreeGetdef(nctemp1991);
nctempchar1* nctemp1989= nctemp1993;
int nctemp1994=SemSerror(nctemp1983,nctemp1985,nctemp1989);
return 0;
}
}
return 1;
}
struct tree* SemExprlist (struct tree* p)
{
struct tree* nctemp2000= p;
nctempchar1* nctemp2002=PtreeGetname(nctemp2000);
nctempchar1* nctemp1998= nctemp2002;
struct nctempchar1 *nctemp2005;
static struct nctempchar1 nctemp2006 = {{ 9}, (char*)"exprlist\0"};
nctemp2005=&nctemp2006;
nctempchar1* nctemp2003= nctemp2005;
int nctemp2007=LibeStrcmp(nctemp1998,nctemp2003);
if(nctemp2007)
{
struct tree* nctemp2012= p;
struct tree* nctemp2014=PtreeMvchild(nctemp2012);
p =nctemp2014;
int nctemp2015 = (p !=0);
int nctemp2019=nctemp2015;
while(nctemp2019)
{{
struct tree* nctemp2021= p;
struct tree* nctemp2023=SemExpr(nctemp2021);
struct tree* nctemp2028= p;
struct tree* nctemp2030=PtreeMvsister(nctemp2028);
p =nctemp2030;
}
int nctemp2031 = (p !=0);
nctemp2019=nctemp2031;}}
return p;
}
int SemCopytype (struct tree* p,struct tree* np)
{
struct tree* nctemp2037= np;
struct tree* nctemp2041= p;
nctempchar1* nctemp2043=PtreeGetype(nctemp2041);
nctempchar1* nctemp2039= nctemp2043;
int nctemp2044=PtreeSetype(nctemp2037,nctemp2039);
struct tree* nctemp2046= np;
struct tree* nctemp2050= p;
nctempchar1* nctemp2052=PtreeGetstruct(nctemp2050);
nctempchar1* nctemp2048= nctemp2052;
int nctemp2053=PtreeSetstruct(nctemp2046,nctemp2048);
struct tree* nctemp2055= np;
struct tree* nctemp2059= p;
nctempchar1* nctemp2061=PtreeGetarray(nctemp2059);
nctempchar1* nctemp2057= nctemp2061;
int nctemp2062=PtreeSetarray(nctemp2055,nctemp2057);
struct tree* nctemp2064= np;
struct tree* nctemp2068= p;
nctempchar1* nctemp2070=PtreeGetref(nctemp2068);
nctempchar1* nctemp2066= nctemp2070;
int nctemp2071=PtreeSetref(nctemp2064,nctemp2066);
struct tree* nctemp2073= np;
struct tree* nctemp2077= p;
nctempchar1* nctemp2079=PtreeGetlval(nctemp2077);
nctempchar1* nctemp2075= nctemp2079;
int nctemp2080=PtreeSetlval(nctemp2073,nctemp2075);
struct tree* nctemp2082= np;
struct tree* nctemp2086= p;
int nctemp2088=PtreeGetrank(nctemp2086);
int nctemp2084= nctemp2088;
int nctemp2089=PtreeSetrank(nctemp2082,nctemp2084);
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
struct nctempchar1 *nctemp2096;
static struct nctempchar1 nctemp2097 = {{ 5}, (char*)"void\0"};
nctemp2096=&nctemp2097;
resultref=nctemp2096;
struct nctempchar1 *nctemp2103;
static struct nctempchar1 nctemp2104 = {{ 5}, (char*)"void\0"};
nctemp2103=&nctemp2104;
expref=nctemp2103;
struct tree* nctemp2108= p;
nctempchar1* nctemp2110=PtreeGetname(nctemp2108);
nctempchar1* nctemp2106= nctemp2110;
struct nctempchar1 *nctemp2113;
static struct nctempchar1 nctemp2114 = {{ 5}, (char*)"cast\0"};
nctemp2113=&nctemp2114;
nctempchar1* nctemp2111= nctemp2113;
int nctemp2115=LibeStrcmp(nctemp2106,nctemp2111);
if(nctemp2115)
{
struct tree* nctemp2120= p;
struct tree* nctemp2122=PtreeMvchild(nctemp2120);
np =nctemp2122;
struct tree* nctemp2128= np;
nctempchar1* nctemp2130=PtreeGetdef(nctemp2128);
resultype=nctemp2130;
struct tree* nctemp2132= np;
nctempchar1* nctemp2134= resultype;
int nctemp2137=PtreeSetype(nctemp2132,nctemp2134);
resultrank =0;
struct tree* nctemp2145= np;
nctempchar1* nctemp2147=PtreeGetarray(nctemp2145);
nctempchar1* nctemp2143= nctemp2147;
struct nctempchar1 *nctemp2150;
static struct nctempchar1 nctemp2151 = {{ 6}, (char*)"array\0"};
nctemp2150=&nctemp2151;
nctempchar1* nctemp2148= nctemp2150;
int nctemp2152=LibeStrcmp(nctemp2143,nctemp2148);
if(nctemp2152)
{
struct tree* nctemp2157= np;
struct tree* nctemp2159=PtreeMvchild(nctemp2157);
sp =nctemp2159;
struct tree* nctemp2164= sp;
struct tree* nctemp2166=PtreeMvchild(nctemp2164);
sp =nctemp2166;
struct tree* nctemp2171= sp;
struct tree* nctemp2173=PtreeMvchild(nctemp2171);
sp =nctemp2173;
struct tree* nctemp2175= sp;
struct tree* nctemp2177=SemExprlist(nctemp2175);
struct tree* nctemp2182= sp;
struct tree* nctemp2184=PtreeMvchild(nctemp2182);
sp =nctemp2184;
resultrank =1;
struct tree* nctemp2196= sp;
struct tree* nctemp2198=PtreeMvsister(nctemp2196);
sp =nctemp2198;
int nctemp2189 = (sp !=0);
int nctemp2200=nctemp2189;
while(nctemp2200)
{{
int nctemp2209 = resultrank + 1;
resultrank =nctemp2209;
}
struct tree* nctemp2217= sp;
struct tree* nctemp2219=PtreeMvsister(nctemp2217);
sp =nctemp2219;
int nctemp2210 = (sp !=0);
nctemp2200=nctemp2210;}struct tree* nctemp2222= np;
int nctemp2224= resultrank;
int nctemp2226=PtreeSetrank(nctemp2222,nctemp2224);
struct tree* nctemp2228= p;
int nctemp2230= resultrank;
int nctemp2232=PtreeSetrank(nctemp2228,nctemp2230);
struct tree* nctemp2234= np;
struct nctempchar1 *nctemp2238;
static struct nctempchar1 nctemp2239 = {{ 5}, (char*)"aref\0"};
nctemp2238=&nctemp2239;
nctempchar1* nctemp2236= nctemp2238;
int nctemp2240=PtreeSetref(nctemp2234,nctemp2236);
struct nctempchar1 *nctemp2248;
static struct nctempchar1 nctemp2249 = {{ 5}, (char*)"aref\0"};
nctemp2248=&nctemp2249;
nctempchar1* nctemp2246= nctemp2248;
nctempchar1* nctemp2250=LibeStrsave(nctemp2246);
resultref=nctemp2250;
}
else{
struct tree* nctemp2254= np;
nctempchar1* nctemp2256=PtreeGetstruct(nctemp2254);
nctempchar1* nctemp2252= nctemp2256;
struct nctempchar1 *nctemp2259;
static struct nctempchar1 nctemp2260 = {{ 7}, (char*)"struct\0"};
nctemp2259=&nctemp2260;
nctempchar1* nctemp2257= nctemp2259;
int nctemp2261=LibeStrcmp(nctemp2252,nctemp2257);
if(nctemp2261)
{
struct tree* nctemp2263= np;
struct nctempchar1 *nctemp2267;
static struct nctempchar1 nctemp2268 = {{ 5}, (char*)"sref\0"};
nctemp2267=&nctemp2268;
nctempchar1* nctemp2265= nctemp2267;
int nctemp2269=PtreeSetref(nctemp2263,nctemp2265);
struct nctempchar1 *nctemp2277;
static struct nctempchar1 nctemp2278 = {{ 5}, (char*)"sref\0"};
nctemp2277=&nctemp2278;
nctempchar1* nctemp2275= nctemp2277;
nctempchar1* nctemp2279=LibeStrsave(nctemp2275);
resultref=nctemp2279;
}
else{
struct nctempchar1 *nctemp2287;
static struct nctempchar1 nctemp2288 = {{ 5}, (char*)"void\0"};
nctemp2287=&nctemp2288;
nctempchar1* nctemp2285= nctemp2287;
nctempchar1* nctemp2289=LibeStrsave(nctemp2285);
resultref=nctemp2289;
}
}
struct tree* nctemp2291= np;
struct tree* nctemp2293= p;
int nctemp2295=SemCopytype(nctemp2291,nctemp2293);
struct tree* nctemp2300= np;
struct tree* nctemp2302=PtreeMvsister(nctemp2300);
np =nctemp2302;
struct tree* nctemp2304= np;
struct tree* nctemp2306=SemExpr(nctemp2304);
struct tree* nctemp2312= np;
nctempchar1* nctemp2314=PtreeGetype(nctemp2312);
exptype=nctemp2314;
struct tree* nctemp2320= np;
nctempchar1* nctemp2322=PtreeGetref(nctemp2320);
expref=nctemp2322;
nctempchar1* nctemp2326= resultref;
nctempchar1* nctemp2329= expref;
int nctemp2332=LibeStrcmp(nctemp2326,nctemp2329);
int nctemp2323 = (nctemp2332 ==0);
if(nctemp2323)
{
struct tree* nctemp2335= p;
struct nctempchar1 *nctemp2339;
static struct nctempchar1 nctemp2340 = {{ 19}, (char*)"Illegal conversion\0"};
nctemp2339=&nctemp2340;
nctempchar1* nctemp2337= nctemp2339;
struct nctempchar1 *nctemp2343;
static struct nctempchar1 nctemp2344 = {{ 2}, (char*)" \0"};
nctemp2343=&nctemp2344;
nctempchar1* nctemp2341= nctemp2343;
int nctemp2345=SemSerror(nctemp2335,nctemp2337,nctemp2341);
return 0;
}
nctempchar1* nctemp2353= resultref;
struct nctempchar1 *nctemp2358;
static struct nctempchar1 nctemp2359 = {{ 5}, (char*)"aref\0"};
nctemp2358=&nctemp2359;
nctempchar1* nctemp2356= nctemp2358;
int nctemp2360=LibeStrcmp(nctemp2353,nctemp2356);
int nctemp2350 = (nctemp2360 ==0);
nctempchar1* nctemp2366= resultref;
struct nctempchar1 *nctemp2371;
static struct nctempchar1 nctemp2372 = {{ 5}, (char*)"sref\0"};
nctemp2371=&nctemp2372;
nctempchar1* nctemp2369= nctemp2371;
int nctemp2373=LibeStrcmp(nctemp2366,nctemp2369);
int nctemp2363 = (nctemp2373 ==0);
int nctemp2347 = (nctemp2350 || nctemp2363);
if(nctemp2347)
{
nctempchar1* nctemp2376= resultype;
struct nctempchar1 *nctemp2381;
static struct nctempchar1 nctemp2382 = {{ 8}, (char*)"complex\0"};
nctemp2381=&nctemp2382;
nctempchar1* nctemp2379= nctemp2381;
int nctemp2383=LibeStrcmp(nctemp2376,nctemp2379);
if(nctemp2383)
{
struct tree* nctemp2385= p;
struct nctempchar1 *nctemp2389;
static struct nctempchar1 nctemp2390 = {{ 19}, (char*)"Illegal conversion\0"};
nctemp2389=&nctemp2390;
nctempchar1* nctemp2387= nctemp2389;
struct nctempchar1 *nctemp2393;
static struct nctempchar1 nctemp2394 = {{ 2}, (char*)" \0"};
nctemp2393=&nctemp2394;
nctempchar1* nctemp2391= nctemp2393;
int nctemp2395=SemSerror(nctemp2385,nctemp2387,nctemp2391);
}
return 0;
nctempchar1* nctemp2398= resultype;
struct nctempchar1 *nctemp2403;
static struct nctempchar1 nctemp2404 = {{ 4}, (char*)"int\0"};
nctemp2403=&nctemp2404;
nctempchar1* nctemp2401= nctemp2403;
int nctemp2405=LibeStrcmp(nctemp2398,nctemp2401);
if(nctemp2405)
{
nctempchar1* nctemp2409= exptype;
struct nctempchar1 *nctemp2414;
static struct nctempchar1 nctemp2415 = {{ 5}, (char*)"char\0"};
nctemp2414=&nctemp2415;
nctempchar1* nctemp2412= nctemp2414;
int nctemp2416=LibeStrcmp(nctemp2409,nctemp2412);
int nctemp2406 = (nctemp2416 ==0);
if(nctemp2406)
{
nctempchar1* nctemp2421= exptype;
struct nctempchar1 *nctemp2426;
static struct nctempchar1 nctemp2427 = {{ 6}, (char*)"float\0"};
nctemp2426=&nctemp2427;
nctempchar1* nctemp2424= nctemp2426;
int nctemp2428=LibeStrcmp(nctemp2421,nctemp2424);
int nctemp2418 = (nctemp2428 ==0);
if(nctemp2418)
{
struct tree* nctemp2431= p;
struct nctempchar1 *nctemp2435;
static struct nctempchar1 nctemp2436 = {{ 19}, (char*)"Illegal conversion\0"};
nctemp2435=&nctemp2436;
nctempchar1* nctemp2433= nctemp2435;
struct nctempchar1 *nctemp2439;
static struct nctempchar1 nctemp2440 = {{ 2}, (char*)" \0"};
nctemp2439=&nctemp2440;
nctempchar1* nctemp2437= nctemp2439;
int nctemp2441=SemSerror(nctemp2431,nctemp2433,nctemp2437);
}
}
return 0;
}
else{
nctempchar1* nctemp2444= resultype;
struct nctempchar1 *nctemp2449;
static struct nctempchar1 nctemp2450 = {{ 5}, (char*)"char\0"};
nctemp2449=&nctemp2450;
nctempchar1* nctemp2447= nctemp2449;
int nctemp2451=LibeStrcmp(nctemp2444,nctemp2447);
if(nctemp2451)
{
nctempchar1* nctemp2455= exptype;
struct nctempchar1 *nctemp2460;
static struct nctempchar1 nctemp2461 = {{ 4}, (char*)"int\0"};
nctemp2460=&nctemp2461;
nctempchar1* nctemp2458= nctemp2460;
int nctemp2462=LibeStrcmp(nctemp2455,nctemp2458);
int nctemp2452 = (nctemp2462 ==0);
if(nctemp2452)
{
struct tree* nctemp2465= p;
struct nctempchar1 *nctemp2469;
static struct nctempchar1 nctemp2470 = {{ 19}, (char*)"Illegal conversion\0"};
nctemp2469=&nctemp2470;
nctempchar1* nctemp2467= nctemp2469;
struct nctempchar1 *nctemp2473;
static struct nctempchar1 nctemp2474 = {{ 2}, (char*)" \0"};
nctemp2473=&nctemp2474;
nctempchar1* nctemp2471= nctemp2473;
int nctemp2475=SemSerror(nctemp2465,nctemp2467,nctemp2471);
}
return 0;
}
else{
nctempchar1* nctemp2478= resultype;
struct nctempchar1 *nctemp2483;
static struct nctempchar1 nctemp2484 = {{ 6}, (char*)"float\0"};
nctemp2483=&nctemp2484;
nctempchar1* nctemp2481= nctemp2483;
int nctemp2485=LibeStrcmp(nctemp2478,nctemp2481);
if(nctemp2485)
{
nctempchar1* nctemp2489= exptype;
struct nctempchar1 *nctemp2494;
static struct nctempchar1 nctemp2495 = {{ 4}, (char*)"int\0"};
nctemp2494=&nctemp2495;
nctempchar1* nctemp2492= nctemp2494;
int nctemp2496=LibeStrcmp(nctemp2489,nctemp2492);
int nctemp2486 = (nctemp2496 ==0);
if(nctemp2486)
{
struct tree* nctemp2499= np;
struct nctempchar1 *nctemp2503;
static struct nctempchar1 nctemp2504 = {{ 19}, (char*)"Illegal conversion\0"};
nctemp2503=&nctemp2504;
nctempchar1* nctemp2501= nctemp2503;
struct nctempchar1 *nctemp2507;
static struct nctempchar1 nctemp2508 = {{ 2}, (char*)" \0"};
nctemp2507=&nctemp2508;
nctempchar1* nctemp2505= nctemp2507;
int nctemp2509=SemSerror(nctemp2499,nctemp2501,nctemp2505);
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
struct tree* nctemp2515= p;
nctempchar1* nctemp2517=PtreeGetname(nctemp2515);
nctempchar1* nctemp2513= nctemp2517;
struct nctempchar1 *nctemp2520;
static struct nctempchar1 nctemp2521 = {{ 4}, (char*)"new\0"};
nctemp2520=&nctemp2521;
nctempchar1* nctemp2518= nctemp2520;
int nctemp2522=LibeStrcmp(nctemp2513,nctemp2518);
if(nctemp2522)
{
struct tree* nctemp2527= p;
struct tree* nctemp2529=PtreeMvchild(nctemp2527);
np =nctemp2529;
struct tree* nctemp2531= np;
nctempchar1* nctemp2533=PtreeGetdef(nctemp2531);
struct tree* nctemp2535= np;
struct tree* nctemp2539= np;
nctempchar1* nctemp2541=PtreeGetdef(nctemp2539);
nctempchar1* nctemp2537= nctemp2541;
int nctemp2542=PtreeSetype(nctemp2535,nctemp2537);
struct tree* nctemp2544= np;
struct tree* nctemp2546= p;
int nctemp2548=SemCopytype(nctemp2544,nctemp2546);
struct tree* nctemp2554= np;
nctempchar1* nctemp2556=PtreeGetarray(nctemp2554);
nctempchar1* nctemp2552= nctemp2556;
struct nctempchar1 *nctemp2559;
static struct nctempchar1 nctemp2560 = {{ 6}, (char*)"array\0"};
nctemp2559=&nctemp2560;
nctempchar1* nctemp2557= nctemp2559;
int nctemp2561=LibeStrcmp(nctemp2552,nctemp2557);
int nctemp2549 = (nctemp2561 ==0);
if(nctemp2549)
{
struct tree* nctemp2568= np;
nctempchar1* nctemp2570=PtreeGetstruct(nctemp2568);
nctempchar1* nctemp2566= nctemp2570;
struct nctempchar1 *nctemp2573;
static struct nctempchar1 nctemp2574 = {{ 7}, (char*)"struct\0"};
nctemp2573=&nctemp2574;
nctempchar1* nctemp2571= nctemp2573;
int nctemp2575=LibeStrcmp(nctemp2566,nctemp2571);
int nctemp2563 = (nctemp2575 ==0);
if(nctemp2563)
{
struct tree* nctemp2578= np;
struct nctempchar1 *nctemp2582;
static struct nctempchar1 nctemp2583 = {{ 44}, (char*)"Argument limited to array or structure type\0"};
nctemp2582=&nctemp2583;
nctempchar1* nctemp2580= nctemp2582;
struct nctempchar1 *nctemp2586;
static struct nctempchar1 nctemp2587 = {{ 3}, (char*)"  \0"};
nctemp2586=&nctemp2587;
nctempchar1* nctemp2584= nctemp2586;
int nctemp2588=SemSerror(nctemp2578,nctemp2580,nctemp2584);
}
}
struct tree* nctemp2592= np;
nctempchar1* nctemp2594=PtreeGetarray(nctemp2592);
nctempchar1* nctemp2590= nctemp2594;
struct nctempchar1 *nctemp2597;
static struct nctempchar1 nctemp2598 = {{ 6}, (char*)"array\0"};
nctemp2597=&nctemp2598;
nctempchar1* nctemp2595= nctemp2597;
int nctemp2599=LibeStrcmp(nctemp2590,nctemp2595);
if(nctemp2599)
{
struct tree* nctemp2604= np;
struct tree* nctemp2606=PtreeMvchild(nctemp2604);
sp =nctemp2606;
struct tree* nctemp2611= sp;
struct tree* nctemp2613=PtreeMvchild(nctemp2611);
sp =nctemp2613;
struct tree* nctemp2618= sp;
struct tree* nctemp2620=PtreeMvchild(nctemp2618);
sp =nctemp2620;
struct tree* nctemp2625= sp;
struct tree* nctemp2627=PtreeMvchild(nctemp2625);
sp =nctemp2627;
rank =1;
int nctemp2632 = (sp ==0);
if(nctemp2632)
{
struct tree* nctemp2637= np;
struct nctempchar1 *nctemp2641;
static struct nctempchar1 nctemp2642 = {{ 35}, (char*)"Missing array size in new operator\0"};
nctemp2641=&nctemp2642;
nctempchar1* nctemp2639= nctemp2641;
struct nctempchar1 *nctemp2645;
static struct nctempchar1 nctemp2646 = {{ 2}, (char*)" \0"};
nctemp2645=&nctemp2646;
nctempchar1* nctemp2643= nctemp2645;
int nctemp2647=SemSerror(nctemp2637,nctemp2639,nctemp2643);
}
struct tree* nctemp2649= sp;
struct tree* nctemp2651=SemExpr(nctemp2649);
struct tree* nctemp2659= sp;
struct tree* nctemp2661=PtreeMvsister(nctemp2659);
sp =nctemp2661;
int nctemp2652 = (sp !=0);
int nctemp2663=nctemp2652;
while(nctemp2663)
{{
struct tree* nctemp2665= sp;
struct tree* nctemp2667=SemExpr(nctemp2665);
int nctemp2676 = rank + 1;
rank =nctemp2676;
}
struct tree* nctemp2684= sp;
struct tree* nctemp2686=PtreeMvsister(nctemp2684);
sp =nctemp2686;
int nctemp2677 = (sp !=0);
nctemp2663=nctemp2677;}struct tree* nctemp2689= np;
int nctemp2691= rank;
int nctemp2693=PtreeSetrank(nctemp2689,nctemp2691);
struct tree* nctemp2695= p;
int nctemp2697= rank;
int nctemp2699=PtreeSetrank(nctemp2695,nctemp2697);
struct tree* nctemp2701= p;
struct nctempchar1 *nctemp2705;
static struct nctempchar1 nctemp2706 = {{ 5}, (char*)"aref\0"};
nctemp2705=&nctemp2706;
nctempchar1* nctemp2703= nctemp2705;
int nctemp2707=PtreeSetref(nctemp2701,nctemp2703);
}
else{
struct tree* nctemp2709= p;
struct nctempchar1 *nctemp2713;
static struct nctempchar1 nctemp2714 = {{ 5}, (char*)"sref\0"};
nctemp2713=&nctemp2714;
nctempchar1* nctemp2711= nctemp2713;
int nctemp2715=PtreeSetref(nctemp2709,nctemp2711);
}
}
return 1;
}
int SemDelete (struct tree* p)
{
struct tree* np;
struct tree* nctemp2720= p;
nctempchar1* nctemp2722=PtreeGetname(nctemp2720);
nctempchar1* nctemp2718= nctemp2722;
struct nctempchar1 *nctemp2725;
static struct nctempchar1 nctemp2726 = {{ 7}, (char*)"delete\0"};
nctemp2725=&nctemp2726;
nctempchar1* nctemp2723= nctemp2725;
int nctemp2727=LibeStrcmp(nctemp2718,nctemp2723);
if(nctemp2727)
{
struct tree* nctemp2732= p;
struct tree* nctemp2734=PtreeMvchild(nctemp2732);
np =nctemp2734;
struct tree* nctemp2736= np;
struct tree* nctemp2738=SemExpr(nctemp2736);
struct tree* nctemp2744= np;
nctempchar1* nctemp2746=PtreeGetref(nctemp2744);
nctempchar1* nctemp2742= nctemp2746;
struct nctempchar1 *nctemp2749;
static struct nctempchar1 nctemp2750 = {{ 5}, (char*)"aref\0"};
nctemp2749=&nctemp2750;
nctempchar1* nctemp2747= nctemp2749;
int nctemp2751=LibeStrcmp(nctemp2742,nctemp2747);
int nctemp2739 = (nctemp2751 ==0);
if(nctemp2739)
{
struct tree* nctemp2758= np;
nctempchar1* nctemp2760=PtreeGetref(nctemp2758);
nctempchar1* nctemp2756= nctemp2760;
struct nctempchar1 *nctemp2763;
static struct nctempchar1 nctemp2764 = {{ 5}, (char*)"sref\0"};
nctemp2763=&nctemp2764;
nctempchar1* nctemp2761= nctemp2763;
int nctemp2765=LibeStrcmp(nctemp2756,nctemp2761);
int nctemp2753 = (nctemp2765 ==0);
if(nctemp2753)
{
struct tree* nctemp2768= p;
struct nctempchar1 *nctemp2772;
static struct nctempchar1 nctemp2773 = {{ 25}, (char*)"not a array or structure\0"};
nctemp2772=&nctemp2773;
nctempchar1* nctemp2770= nctemp2772;
struct tree* nctemp2776= p;
nctempchar1* nctemp2778=PtreeGetdef(nctemp2776);
nctempchar1* nctemp2774= nctemp2778;
int nctemp2779=SemSerror(nctemp2768,nctemp2770,nctemp2774);
}
}
else{
struct tree* nctemp2781= p;
struct tree* nctemp2785= np;
nctempchar1* nctemp2787=PtreeGetype(nctemp2785);
nctempchar1* nctemp2783= nctemp2787;
int nctemp2788=PtreeSetype(nctemp2781,nctemp2783);
struct tree* nctemp2790= p;
struct tree* nctemp2794= np;
nctempchar1* nctemp2796=PtreeGetref(nctemp2794);
nctempchar1* nctemp2792= nctemp2796;
int nctemp2797=PtreeSetref(nctemp2790,nctemp2792);
}
}
return 1;
}
int SemCmplx (struct tree* p)
{
struct tree* np;
struct tree* nctemp2802= p;
nctempchar1* nctemp2804=PtreeGetname(nctemp2802);
nctempchar1* nctemp2800= nctemp2804;
struct nctempchar1 *nctemp2807;
static struct nctempchar1 nctemp2808 = {{ 6}, (char*)"cmplx\0"};
nctemp2807=&nctemp2808;
nctempchar1* nctemp2805= nctemp2807;
int nctemp2809=LibeStrcmp(nctemp2800,nctemp2805);
if(nctemp2809)
{
struct tree* nctemp2814= p;
struct tree* nctemp2816=PtreeMvchild(nctemp2814);
np =nctemp2816;
struct tree* nctemp2821= np;
struct tree* nctemp2823=PtreeMvchild(nctemp2821);
np =nctemp2823;
struct tree* nctemp2825= np;
struct tree* nctemp2827=SemExpr(nctemp2825);
struct tree* nctemp2833= np;
nctempchar1* nctemp2835=PtreeGetype(nctemp2833);
nctempchar1* nctemp2831= nctemp2835;
struct nctempchar1 *nctemp2838;
static struct nctempchar1 nctemp2839 = {{ 6}, (char*)"float\0"};
nctemp2838=&nctemp2839;
nctempchar1* nctemp2836= nctemp2838;
int nctemp2840=LibeStrcmp(nctemp2831,nctemp2836);
int nctemp2828 = (nctemp2840 ==0);
if(nctemp2828)
{
struct tree* nctemp2843= p;
struct nctempchar1 *nctemp2847;
static struct nctempchar1 nctemp2848 = {{ 33}, (char*)"Argument to cmplx is not a float\0"};
nctemp2847=&nctemp2848;
nctempchar1* nctemp2845= nctemp2847;
struct tree* nctemp2851= p;
nctempchar1* nctemp2853=PtreeGetdef(nctemp2851);
nctempchar1* nctemp2849= nctemp2853;
int nctemp2854=SemSerror(nctemp2843,nctemp2845,nctemp2849);
return 0;
}
struct tree* nctemp2861= np;
nctempchar1* nctemp2863=PtreeGetref(nctemp2861);
nctempchar1* nctemp2859= nctemp2863;
struct nctempchar1 *nctemp2866;
static struct nctempchar1 nctemp2867 = {{ 5}, (char*)"aref\0"};
nctemp2866=&nctemp2867;
nctempchar1* nctemp2864= nctemp2866;
int nctemp2868=LibeStrcmp(nctemp2859,nctemp2864);
struct tree* nctemp2872= np;
nctempchar1* nctemp2874=PtreeGetref(nctemp2872);
nctempchar1* nctemp2870= nctemp2874;
struct nctempchar1 *nctemp2877;
static struct nctempchar1 nctemp2878 = {{ 5}, (char*)"sref\0"};
nctemp2877=&nctemp2878;
nctempchar1* nctemp2875= nctemp2877;
int nctemp2879=LibeStrcmp(nctemp2870,nctemp2875);
int nctemp2856 = (nctemp2868 || nctemp2879);
if(nctemp2856)
{
struct tree* nctemp2881= p;
struct nctempchar1 *nctemp2885;
static struct nctempchar1 nctemp2886 = {{ 34}, (char*)"Argument to cmplx is not a scalar\0"};
nctemp2885=&nctemp2886;
nctempchar1* nctemp2883= nctemp2885;
struct tree* nctemp2889= p;
nctempchar1* nctemp2891=PtreeGetdef(nctemp2889);
nctempchar1* nctemp2887= nctemp2891;
int nctemp2892=SemSerror(nctemp2881,nctemp2883,nctemp2887);
return 0;
}
struct tree* nctemp2898= np;
struct tree* nctemp2900=PtreeMvsister(nctemp2898);
np =nctemp2900;
struct tree* nctemp2902= np;
struct tree* nctemp2904=SemExpr(nctemp2902);
struct tree* nctemp2910= np;
nctempchar1* nctemp2912=PtreeGetype(nctemp2910);
nctempchar1* nctemp2908= nctemp2912;
struct nctempchar1 *nctemp2915;
static struct nctempchar1 nctemp2916 = {{ 6}, (char*)"float\0"};
nctemp2915=&nctemp2916;
nctempchar1* nctemp2913= nctemp2915;
int nctemp2917=LibeStrcmp(nctemp2908,nctemp2913);
int nctemp2905 = (nctemp2917 ==0);
if(nctemp2905)
{
struct tree* nctemp2920= p;
struct nctempchar1 *nctemp2924;
static struct nctempchar1 nctemp2925 = {{ 33}, (char*)"Argument to cmplx is not a float\0"};
nctemp2924=&nctemp2925;
nctempchar1* nctemp2922= nctemp2924;
struct tree* nctemp2928= p;
nctempchar1* nctemp2930=PtreeGetdef(nctemp2928);
nctempchar1* nctemp2926= nctemp2930;
int nctemp2931=SemSerror(nctemp2920,nctemp2922,nctemp2926);
}
struct tree* nctemp2937= np;
nctempchar1* nctemp2939=PtreeGetref(nctemp2937);
nctempchar1* nctemp2935= nctemp2939;
struct nctempchar1 *nctemp2942;
static struct nctempchar1 nctemp2943 = {{ 5}, (char*)"aref\0"};
nctemp2942=&nctemp2943;
nctempchar1* nctemp2940= nctemp2942;
int nctemp2944=LibeStrcmp(nctemp2935,nctemp2940);
struct tree* nctemp2948= np;
nctempchar1* nctemp2950=PtreeGetref(nctemp2948);
nctempchar1* nctemp2946= nctemp2950;
struct nctempchar1 *nctemp2953;
static struct nctempchar1 nctemp2954 = {{ 5}, (char*)"sref\0"};
nctemp2953=&nctemp2954;
nctempchar1* nctemp2951= nctemp2953;
int nctemp2955=LibeStrcmp(nctemp2946,nctemp2951);
int nctemp2932 = (nctemp2944 || nctemp2955);
if(nctemp2932)
{
struct tree* nctemp2957= p;
struct nctempchar1 *nctemp2961;
static struct nctempchar1 nctemp2962 = {{ 34}, (char*)"Argument to cmplx is not a scalar\0"};
nctemp2961=&nctemp2962;
nctempchar1* nctemp2959= nctemp2961;
struct tree* nctemp2965= p;
nctempchar1* nctemp2967=PtreeGetdef(nctemp2965);
nctempchar1* nctemp2963= nctemp2967;
int nctemp2968=SemSerror(nctemp2957,nctemp2959,nctemp2963);
return 0;
}
struct tree* nctemp2971= p;
struct nctempchar1 *nctemp2975;
static struct nctempchar1 nctemp2976 = {{ 8}, (char*)"complex\0"};
nctemp2975=&nctemp2976;
nctempchar1* nctemp2973= nctemp2975;
int nctemp2977=PtreeSetype(nctemp2971,nctemp2973);
}
return 1;
}
int SemRe (struct tree* p)
{
struct tree* np;
struct tree* nctemp2982= p;
nctempchar1* nctemp2984=PtreeGetname(nctemp2982);
nctempchar1* nctemp2980= nctemp2984;
struct nctempchar1 *nctemp2987;
static struct nctempchar1 nctemp2988 = {{ 3}, (char*)"re\0"};
nctemp2987=&nctemp2988;
nctempchar1* nctemp2985= nctemp2987;
int nctemp2989=LibeStrcmp(nctemp2980,nctemp2985);
if(nctemp2989)
{
struct tree* nctemp2994= p;
struct tree* nctemp2996=PtreeMvchild(nctemp2994);
np =nctemp2996;
struct tree* nctemp2998= np;
struct tree* nctemp3000=SemExpr(nctemp2998);
struct tree* nctemp3006= np;
nctempchar1* nctemp3008=PtreeGetype(nctemp3006);
nctempchar1* nctemp3004= nctemp3008;
struct nctempchar1 *nctemp3011;
static struct nctempchar1 nctemp3012 = {{ 8}, (char*)"complex\0"};
nctemp3011=&nctemp3012;
nctempchar1* nctemp3009= nctemp3011;
int nctemp3013=LibeStrcmp(nctemp3004,nctemp3009);
int nctemp3001 = (nctemp3013 ==0);
if(nctemp3001)
{
struct tree* nctemp3016= p;
struct nctempchar1 *nctemp3020;
static struct nctempchar1 nctemp3021 = {{ 40}, (char*)"Argument to re is not a of type complex\0"};
nctemp3020=&nctemp3021;
nctempchar1* nctemp3018= nctemp3020;
struct tree* nctemp3024= p;
nctempchar1* nctemp3026=PtreeGetdef(nctemp3024);
nctempchar1* nctemp3022= nctemp3026;
int nctemp3027=SemSerror(nctemp3016,nctemp3018,nctemp3022);
return 0;
}
struct tree* nctemp3034= np;
nctempchar1* nctemp3036=PtreeGetref(nctemp3034);
nctempchar1* nctemp3032= nctemp3036;
struct nctempchar1 *nctemp3039;
static struct nctempchar1 nctemp3040 = {{ 5}, (char*)"aref\0"};
nctemp3039=&nctemp3040;
nctempchar1* nctemp3037= nctemp3039;
int nctemp3041=LibeStrcmp(nctemp3032,nctemp3037);
struct tree* nctemp3045= np;
nctempchar1* nctemp3047=PtreeGetref(nctemp3045);
nctempchar1* nctemp3043= nctemp3047;
struct nctempchar1 *nctemp3050;
static struct nctempchar1 nctemp3051 = {{ 5}, (char*)"sref\0"};
nctemp3050=&nctemp3051;
nctempchar1* nctemp3048= nctemp3050;
int nctemp3052=LibeStrcmp(nctemp3043,nctemp3048);
int nctemp3029 = (nctemp3041 || nctemp3052);
if(nctemp3029)
{
struct tree* nctemp3054= p;
struct nctempchar1 *nctemp3058;
static struct nctempchar1 nctemp3059 = {{ 31}, (char*)"Argument to re is not a scalar\0"};
nctemp3058=&nctemp3059;
nctempchar1* nctemp3056= nctemp3058;
struct tree* nctemp3062= p;
nctempchar1* nctemp3064=PtreeGetdef(nctemp3062);
nctempchar1* nctemp3060= nctemp3064;
int nctemp3065=SemSerror(nctemp3054,nctemp3056,nctemp3060);
return 0;
}
struct tree* nctemp3068= p;
struct nctempchar1 *nctemp3072;
static struct nctempchar1 nctemp3073 = {{ 6}, (char*)"float\0"};
nctemp3072=&nctemp3073;
nctempchar1* nctemp3070= nctemp3072;
int nctemp3074=PtreeSetype(nctemp3068,nctemp3070);
}
return 1;
}
int SemLen (struct tree* p)
{
struct tree* np;
struct tree* nctemp3081= p;
nctempchar1* nctemp3083=PtreeGetname(nctemp3081);
nctempchar1* nctemp3079= nctemp3083;
struct nctempchar1 *nctemp3086;
static struct nctempchar1 nctemp3087 = {{ 4}, (char*)"len\0"};
nctemp3086=&nctemp3087;
nctempchar1* nctemp3084= nctemp3086;
int nctemp3088=LibeStrcmp(nctemp3079,nctemp3084);
int nctemp3076 = (nctemp3088 ==1);
if(nctemp3076)
{
struct tree* nctemp3091= p;
struct nctempchar1 *nctemp3095;
static struct nctempchar1 nctemp3096 = {{ 4}, (char*)"int\0"};
nctemp3095=&nctemp3096;
nctempchar1* nctemp3093= nctemp3095;
int nctemp3097=PtreeSetype(nctemp3091,nctemp3093);
struct tree* nctemp3102= p;
struct tree* nctemp3104=PtreeMvchild(nctemp3102);
np =nctemp3104;
struct tree* nctemp3106= np;
struct tree* nctemp3108=SemExpr(nctemp3106);
struct tree* nctemp3114= np;
nctempchar1* nctemp3116=PtreeGetref(nctemp3114);
nctempchar1* nctemp3112= nctemp3116;
struct nctempchar1 *nctemp3119;
static struct nctempchar1 nctemp3120 = {{ 5}, (char*)"aref\0"};
nctemp3119=&nctemp3120;
nctempchar1* nctemp3117= nctemp3119;
int nctemp3121=LibeStrcmp(nctemp3112,nctemp3117);
int nctemp3109 = (nctemp3121 ==0);
if(nctemp3109)
{
struct tree* nctemp3124= p;
struct nctempchar1 *nctemp3128;
static struct nctempchar1 nctemp3129 = {{ 13}, (char*)"not an array\0"};
nctemp3128=&nctemp3129;
nctempchar1* nctemp3126= nctemp3128;
struct tree* nctemp3132= p;
nctempchar1* nctemp3134=PtreeGetdef(nctemp3132);
nctempchar1* nctemp3130= nctemp3134;
int nctemp3135=SemSerror(nctemp3124,nctemp3126,nctemp3130);
}
struct tree* nctemp3140= np;
struct tree* nctemp3142=PtreeMvsister(nctemp3140);
np =nctemp3142;
struct tree* nctemp3144= np;
struct tree* nctemp3146=SemExpr(nctemp3144);
struct tree* nctemp3150= np;
nctempchar1* nctemp3152=PtreeGetref(nctemp3150);
nctempchar1* nctemp3148= nctemp3152;
struct nctempchar1 *nctemp3155;
static struct nctempchar1 nctemp3156 = {{ 5}, (char*)"aref\0"};
nctemp3155=&nctemp3156;
nctempchar1* nctemp3153= nctemp3155;
int nctemp3157=LibeStrcmp(nctemp3148,nctemp3153);
if(nctemp3157)
{
struct tree* nctemp3159= p;
struct nctempchar1 *nctemp3163;
static struct nctempchar1 nctemp3164 = {{ 13}, (char*)"not a scalar\0"};
nctemp3163=&nctemp3164;
nctempchar1* nctemp3161= nctemp3163;
struct tree* nctemp3167= p;
nctempchar1* nctemp3169=PtreeGetdef(nctemp3167);
nctempchar1* nctemp3165= nctemp3169;
int nctemp3170=SemSerror(nctemp3159,nctemp3161,nctemp3165);
}
struct tree* nctemp3176= np;
nctempchar1* nctemp3178=PtreeGetype(nctemp3176);
nctempchar1* nctemp3174= nctemp3178;
struct nctempchar1 *nctemp3181;
static struct nctempchar1 nctemp3182 = {{ 4}, (char*)"int\0"};
nctemp3181=&nctemp3182;
nctempchar1* nctemp3179= nctemp3181;
int nctemp3183=LibeStrcmp(nctemp3174,nctemp3179);
int nctemp3171 = (nctemp3183 ==0);
if(nctemp3171)
{
struct tree* nctemp3186= p;
struct nctempchar1 *nctemp3190;
static struct nctempchar1 nctemp3191 = {{ 26}, (char*)"not an integer expression\0"};
nctemp3190=&nctemp3191;
nctempchar1* nctemp3188= nctemp3190;
struct tree* nctemp3194= p;
nctempchar1* nctemp3196=PtreeGetdef(nctemp3194);
nctempchar1* nctemp3192= nctemp3196;
int nctemp3197=SemSerror(nctemp3186,nctemp3188,nctemp3192);
}
struct tree* nctemp3205= np;
struct tree* nctemp3207=PtreeMvsister(nctemp3205);
np =nctemp3207;
int nctemp3198 = (np !=0);
if(nctemp3198)
{
struct tree* nctemp3210= p;
struct nctempchar1 *nctemp3214;
static struct nctempchar1 nctemp3215 = {{ 19}, (char*)"too many arguments\0"};
nctemp3214=&nctemp3215;
nctempchar1* nctemp3212= nctemp3214;
struct tree* nctemp3218= p;
nctempchar1* nctemp3220=PtreeGetdef(nctemp3218);
nctempchar1* nctemp3216= nctemp3220;
int nctemp3221=SemSerror(nctemp3210,nctemp3212,nctemp3216);
}
}
return 1;
}
int SemIm (struct tree* p)
{
struct tree* np;
struct tree* nctemp3226= p;
nctempchar1* nctemp3228=PtreeGetname(nctemp3226);
nctempchar1* nctemp3224= nctemp3228;
struct nctempchar1 *nctemp3231;
static struct nctempchar1 nctemp3232 = {{ 3}, (char*)"im\0"};
nctemp3231=&nctemp3232;
nctempchar1* nctemp3229= nctemp3231;
int nctemp3233=LibeStrcmp(nctemp3224,nctemp3229);
if(nctemp3233)
{
struct tree* nctemp3238= p;
struct tree* nctemp3240=PtreeMvchild(nctemp3238);
np =nctemp3240;
struct tree* nctemp3242= np;
struct tree* nctemp3244=SemExpr(nctemp3242);
struct tree* nctemp3250= np;
nctempchar1* nctemp3252=PtreeGetype(nctemp3250);
nctempchar1* nctemp3248= nctemp3252;
struct nctempchar1 *nctemp3255;
static struct nctempchar1 nctemp3256 = {{ 8}, (char*)"complex\0"};
nctemp3255=&nctemp3256;
nctempchar1* nctemp3253= nctemp3255;
int nctemp3257=LibeStrcmp(nctemp3248,nctemp3253);
int nctemp3245 = (nctemp3257 ==0);
if(nctemp3245)
{
struct tree* nctemp3260= p;
struct nctempchar1 *nctemp3264;
static struct nctempchar1 nctemp3265 = {{ 38}, (char*)"Argument to re is not of type complex\0"};
nctemp3264=&nctemp3265;
nctempchar1* nctemp3262= nctemp3264;
struct tree* nctemp3268= p;
nctempchar1* nctemp3270=PtreeGetdef(nctemp3268);
nctempchar1* nctemp3266= nctemp3270;
int nctemp3271=SemSerror(nctemp3260,nctemp3262,nctemp3266);
return 0;
}
struct tree* nctemp3278= np;
nctempchar1* nctemp3280=PtreeGetref(nctemp3278);
nctempchar1* nctemp3276= nctemp3280;
struct nctempchar1 *nctemp3283;
static struct nctempchar1 nctemp3284 = {{ 5}, (char*)"aref\0"};
nctemp3283=&nctemp3284;
nctempchar1* nctemp3281= nctemp3283;
int nctemp3285=LibeStrcmp(nctemp3276,nctemp3281);
struct tree* nctemp3289= np;
nctempchar1* nctemp3291=PtreeGetref(nctemp3289);
nctempchar1* nctemp3287= nctemp3291;
struct nctempchar1 *nctemp3294;
static struct nctempchar1 nctemp3295 = {{ 5}, (char*)"sref\0"};
nctemp3294=&nctemp3295;
nctempchar1* nctemp3292= nctemp3294;
int nctemp3296=LibeStrcmp(nctemp3287,nctemp3292);
int nctemp3273 = (nctemp3285 || nctemp3296);
if(nctemp3273)
{
struct tree* nctemp3298= p;
struct nctempchar1 *nctemp3302;
static struct nctempchar1 nctemp3303 = {{ 31}, (char*)"Argument to re is not a scalar\0"};
nctemp3302=&nctemp3303;
nctempchar1* nctemp3300= nctemp3302;
struct tree* nctemp3306= p;
nctempchar1* nctemp3308=PtreeGetdef(nctemp3306);
nctempchar1* nctemp3304= nctemp3308;
int nctemp3309=SemSerror(nctemp3298,nctemp3300,nctemp3304);
return 0;
}
struct tree* nctemp3312= p;
struct nctempchar1 *nctemp3316;
static struct nctempchar1 nctemp3317 = {{ 6}, (char*)"float\0"};
nctemp3316=&nctemp3317;
nctempchar1* nctemp3314= nctemp3316;
int nctemp3318=PtreeSetype(nctemp3312,nctemp3314);
}
return 1;
}
int SemSizeof (struct tree* p)
{
struct tree* nctemp3323= p;
nctempchar1* nctemp3325=PtreeGetname(nctemp3323);
nctempchar1* nctemp3321= nctemp3325;
struct nctempchar1 *nctemp3328;
static struct nctempchar1 nctemp3329 = {{ 7}, (char*)"sizeof\0"};
nctemp3328=&nctemp3329;
nctempchar1* nctemp3326= nctemp3328;
int nctemp3330=LibeStrcmp(nctemp3321,nctemp3326);
if(nctemp3330)
{
struct tree* nctemp3332= p;
struct nctempchar1 *nctemp3336;
static struct nctempchar1 nctemp3337 = {{ 4}, (char*)"int\0"};
nctemp3336=&nctemp3337;
nctempchar1* nctemp3334= nctemp3336;
int nctemp3338=PtreeSetype(nctemp3332,nctemp3334);
}
return 1;
}
int SemComparetype (struct tree* p,struct tree* np)
{
int rval;
rval =1;
struct tree* nctemp3349= p;
nctempchar1* nctemp3351=PtreeGetype(nctemp3349);
nctempchar1* nctemp3347= nctemp3351;
struct tree* nctemp3354= np;
nctempchar1* nctemp3356=PtreeGetype(nctemp3354);
nctempchar1* nctemp3352= nctemp3356;
int nctemp3357=LibeStrcmp(nctemp3347,nctemp3352);
int nctemp3344 = (nctemp3357 ==0);
if(nctemp3344)
{
rval =0;
}
struct tree* nctemp3368= p;
nctempchar1* nctemp3370=PtreeGetref(nctemp3368);
nctempchar1* nctemp3366= nctemp3370;
struct tree* nctemp3373= np;
nctempchar1* nctemp3375=PtreeGetref(nctemp3373);
nctempchar1* nctemp3371= nctemp3375;
int nctemp3376=LibeStrcmp(nctemp3366,nctemp3371);
int nctemp3363 = (nctemp3376 ==0);
if(nctemp3363)
{
struct tree* nctemp3381= np;
nctempchar1* nctemp3383=PtreeGetname(nctemp3381);
nctempchar1* nctemp3379= nctemp3383;
struct nctempchar1 *nctemp3386;
static struct nctempchar1 nctemp3387 = {{ 10}, (char*)"iconstant\0"};
nctemp3386=&nctemp3387;
nctempchar1* nctemp3384= nctemp3386;
int nctemp3388=LibeStrcmp(nctemp3379,nctemp3384);
if(nctemp3388)
{
struct tree* nctemp3392= np;
nctempchar1* nctemp3394=PtreeGetdef(nctemp3392);
nctempchar1* nctemp3390= nctemp3394;
struct nctempchar1 *nctemp3397;
static struct nctempchar1 nctemp3398 = {{ 2}, (char*)"0\0"};
nctemp3397=&nctemp3398;
nctempchar1* nctemp3395= nctemp3397;
int nctemp3399=LibeStrcmp(nctemp3390,nctemp3395);
if(nctemp3399)
{
rval =1;
}
else{
rval =0;
}
}
else{
rval =0;
}
}
else{
struct tree* nctemp3417= p;
nctempchar1* nctemp3419=PtreeGetref(nctemp3417);
nctempchar1* nctemp3415= nctemp3419;
struct nctempchar1 *nctemp3422;
static struct nctempchar1 nctemp3423 = {{ 5}, (char*)"aref\0"};
nctemp3422=&nctemp3423;
nctempchar1* nctemp3420= nctemp3422;
int nctemp3424=LibeStrcmp(nctemp3415,nctemp3420);
int nctemp3412 = (nctemp3424 ==1);
if(nctemp3412)
{
struct tree* nctemp3429= p;
int nctemp3431=PtreeGetrank(nctemp3429);
struct tree* nctemp3433= np;
int nctemp3435=PtreeGetrank(nctemp3433);
int nctemp3426 = (nctemp3431 !=nctemp3435);
if(nctemp3426)
{
rval =0;
}
}
}
return rval;
}
struct tree* SemAsgexpr (struct tree* p)
{
struct tree* np;
struct tree* nctemp3445= p;
struct tree* nctemp3447=PtreeMvchild(nctemp3445);
np =nctemp3447;
struct tree* nctemp3453= np;
nctempchar1* nctemp3455=PtreeGetlval(nctemp3453);
nctempchar1* nctemp3451= nctemp3455;
struct nctempchar1 *nctemp3458;
static struct nctempchar1 nctemp3459 = {{ 5}, (char*)"lval\0"};
nctemp3458=&nctemp3459;
nctempchar1* nctemp3456= nctemp3458;
int nctemp3460=LibeStrcmp(nctemp3451,nctemp3456);
int nctemp3448 = (nctemp3460 ==0);
if(nctemp3448)
{
struct tree* nctemp3463= np;
struct nctempchar1 *nctemp3467;
static struct nctempchar1 nctemp3468 = {{ 17}, (char*)"Not a left value\0"};
nctemp3467=&nctemp3468;
nctempchar1* nctemp3465= nctemp3467;
struct tree* nctemp3471= np;
nctempchar1* nctemp3473=PtreeGetdef(nctemp3471);
nctempchar1* nctemp3469= nctemp3473;
int nctemp3474=SemSerror(nctemp3463,nctemp3465,nctemp3469);
}
else{
struct tree* nctemp3476= p;
struct nctempchar1 *nctemp3480;
static struct nctempchar1 nctemp3481 = {{ 5}, (char*)"lval\0"};
nctemp3480=&nctemp3481;
nctempchar1* nctemp3478= nctemp3480;
int nctemp3482=PtreeSetlval(nctemp3476,nctemp3478);
}
struct tree* nctemp3484= np;
struct tree* nctemp3486= p;
int nctemp3488=SemCopytype(nctemp3484,nctemp3486);
return p;
}
struct tree* SemRelexpr (struct tree* p)
{
struct tree* np;
struct tree* rp;
struct tree* nctemp3494= p;
struct tree* nctemp3496=PtreeMvchild(nctemp3494);
np =nctemp3496;
struct tree* nctemp3501= np;
struct tree* nctemp3503=PtreeMvsister(nctemp3501);
rp =nctemp3503;
struct tree* nctemp3509= p;
nctempchar1* nctemp3511=PtreeGetdef(nctemp3509);
nctempchar1* nctemp3507= nctemp3511;
struct nctempchar1 *nctemp3514;
static struct nctempchar1 nctemp3515 = {{ 3}, (char*)"==\0"};
nctemp3514=&nctemp3515;
nctempchar1* nctemp3512= nctemp3514;
int nctemp3516=LibeStrcmp(nctemp3507,nctemp3512);
int nctemp3504 = (nctemp3516 ==0);
if(nctemp3504)
{
struct tree* nctemp3523= p;
nctempchar1* nctemp3525=PtreeGetdef(nctemp3523);
nctempchar1* nctemp3521= nctemp3525;
struct nctempchar1 *nctemp3528;
static struct nctempchar1 nctemp3529 = {{ 3}, (char*)"!=\0"};
nctemp3528=&nctemp3529;
nctempchar1* nctemp3526= nctemp3528;
int nctemp3530=LibeStrcmp(nctemp3521,nctemp3526);
int nctemp3518 = (nctemp3530 ==0);
if(nctemp3518)
{
struct tree* nctemp3537= np;
nctempchar1* nctemp3539=PtreeGetref(nctemp3537);
nctempchar1* nctemp3535= nctemp3539;
struct nctempchar1 *nctemp3542;
static struct nctempchar1 nctemp3543 = {{ 5}, (char*)"aref\0"};
nctemp3542=&nctemp3543;
nctempchar1* nctemp3540= nctemp3542;
int nctemp3544=LibeStrcmp(nctemp3535,nctemp3540);
struct tree* nctemp3548= np;
nctempchar1* nctemp3550=PtreeGetref(nctemp3548);
nctempchar1* nctemp3546= nctemp3550;
struct nctempchar1 *nctemp3553;
static struct nctempchar1 nctemp3554 = {{ 5}, (char*)"sref\0"};
nctemp3553=&nctemp3554;
nctempchar1* nctemp3551= nctemp3553;
int nctemp3555=LibeStrcmp(nctemp3546,nctemp3551);
int nctemp3532 = (nctemp3544 || nctemp3555);
if(nctemp3532)
{
struct tree* nctemp3557= p;
struct nctempchar1 *nctemp3561;
static struct nctempchar1 nctemp3562 = {{ 18}, (char*)"Illegal operation\0"};
nctemp3561=&nctemp3562;
nctempchar1* nctemp3559= nctemp3561;
struct nctempchar1 *nctemp3565;
static struct nctempchar1 nctemp3566 = {{ 2}, (char*)" \0"};
nctemp3565=&nctemp3566;
nctempchar1* nctemp3563= nctemp3565;
int nctemp3567=SemSerror(nctemp3557,nctemp3559,nctemp3563);
}
else{
struct tree* nctemp3573= rp;
nctempchar1* nctemp3575=PtreeGetref(nctemp3573);
nctempchar1* nctemp3571= nctemp3575;
struct nctempchar1 *nctemp3578;
static struct nctempchar1 nctemp3579 = {{ 5}, (char*)"aref\0"};
nctemp3578=&nctemp3579;
nctempchar1* nctemp3576= nctemp3578;
int nctemp3580=LibeStrcmp(nctemp3571,nctemp3576);
struct tree* nctemp3584= np;
nctempchar1* nctemp3586=PtreeGetref(nctemp3584);
nctempchar1* nctemp3582= nctemp3586;
struct nctempchar1 *nctemp3589;
static struct nctempchar1 nctemp3590 = {{ 5}, (char*)"sref\0"};
nctemp3589=&nctemp3590;
nctempchar1* nctemp3587= nctemp3589;
int nctemp3591=LibeStrcmp(nctemp3582,nctemp3587);
int nctemp3568 = (nctemp3580 || nctemp3591);
if(nctemp3568)
{
struct tree* nctemp3593= p;
struct nctempchar1 *nctemp3597;
static struct nctempchar1 nctemp3598 = {{ 18}, (char*)"Illegal operation\0"};
nctemp3597=&nctemp3598;
nctempchar1* nctemp3595= nctemp3597;
struct nctempchar1 *nctemp3601;
static struct nctempchar1 nctemp3602 = {{ 2}, (char*)" \0"};
nctemp3601=&nctemp3602;
nctempchar1* nctemp3599= nctemp3601;
int nctemp3603=SemSerror(nctemp3593,nctemp3595,nctemp3599);
}
}
}
else{
struct tree* nctemp3607= np;
nctempchar1* nctemp3609=PtreeGetype(nctemp3607);
nctempchar1* nctemp3605= nctemp3609;
struct nctempchar1 *nctemp3612;
static struct nctempchar1 nctemp3613 = {{ 8}, (char*)"complex\0"};
nctemp3612=&nctemp3613;
nctempchar1* nctemp3610= nctemp3612;
int nctemp3614=LibeStrcmp(nctemp3605,nctemp3610);
if(nctemp3614)
{
struct tree* nctemp3616= p;
struct nctempchar1 *nctemp3620;
static struct nctempchar1 nctemp3621 = {{ 18}, (char*)"Illegal operation\0"};
nctemp3620=&nctemp3621;
nctempchar1* nctemp3618= nctemp3620;
struct nctempchar1 *nctemp3624;
static struct nctempchar1 nctemp3625 = {{ 2}, (char*)" \0"};
nctemp3624=&nctemp3625;
nctempchar1* nctemp3622= nctemp3624;
int nctemp3626=SemSerror(nctemp3616,nctemp3618,nctemp3622);
}
}
}
struct tree* nctemp3628= p;
struct nctempchar1 *nctemp3632;
static struct nctempchar1 nctemp3633 = {{ 4}, (char*)"int\0"};
nctemp3632=&nctemp3633;
nctempchar1* nctemp3630= nctemp3632;
int nctemp3634=PtreeSetype(nctemp3628,nctemp3630);
struct tree* nctemp3636= p;
struct nctempchar1 *nctemp3640;
static struct nctempchar1 nctemp3641 = {{ 5}, (char*)"void\0"};
nctemp3640=&nctemp3641;
nctempchar1* nctemp3638= nctemp3640;
int nctemp3642=PtreeSetlval(nctemp3636,nctemp3638);
struct tree* nctemp3644= p;
struct nctempchar1 *nctemp3648;
static struct nctempchar1 nctemp3649 = {{ 5}, (char*)"void\0"};
nctemp3648=&nctemp3649;
nctempchar1* nctemp3646= nctemp3648;
int nctemp3650=PtreeSetstruct(nctemp3644,nctemp3646);
return p;
}
struct tree* SemAddexpr (struct tree* p)
{
struct tree* np;
struct tree* rp;
struct tree* nctemp3656= p;
struct tree* nctemp3658=PtreeMvchild(nctemp3656);
np =nctemp3658;
struct tree* nctemp3663= np;
struct tree* nctemp3665=PtreeMvsister(nctemp3663);
rp =nctemp3665;
struct tree* nctemp3669= np;
nctempchar1* nctemp3671=PtreeGetref(nctemp3669);
nctempchar1* nctemp3667= nctemp3671;
struct nctempchar1 *nctemp3674;
static struct nctempchar1 nctemp3675 = {{ 5}, (char*)"sref\0"};
nctemp3674=&nctemp3675;
nctempchar1* nctemp3672= nctemp3674;
int nctemp3676=LibeStrcmp(nctemp3667,nctemp3672);
if(nctemp3676)
{
struct tree* nctemp3678= np;
struct nctempchar1 *nctemp3682;
static struct nctempchar1 nctemp3683 = {{ 18}, (char*)"Illegal operation\0"};
nctemp3682=&nctemp3683;
nctempchar1* nctemp3680= nctemp3682;
struct nctempchar1 *nctemp3686;
static struct nctempchar1 nctemp3687 = {{ 2}, (char*)" \0"};
nctemp3686=&nctemp3687;
nctempchar1* nctemp3684= nctemp3686;
int nctemp3688=SemSerror(nctemp3678,nctemp3680,nctemp3684);
}
else{
struct tree* nctemp3692= rp;
nctempchar1* nctemp3694=PtreeGetref(nctemp3692);
nctempchar1* nctemp3690= nctemp3694;
struct nctempchar1 *nctemp3697;
static struct nctempchar1 nctemp3698 = {{ 5}, (char*)"sref\0"};
nctemp3697=&nctemp3698;
nctempchar1* nctemp3695= nctemp3697;
int nctemp3699=LibeStrcmp(nctemp3690,nctemp3695);
if(nctemp3699)
{
struct tree* nctemp3701= np;
struct nctempchar1 *nctemp3705;
static struct nctempchar1 nctemp3706 = {{ 18}, (char*)"Illegal operation\0"};
nctemp3705=&nctemp3706;
nctempchar1* nctemp3703= nctemp3705;
struct nctempchar1 *nctemp3709;
static struct nctempchar1 nctemp3710 = {{ 2}, (char*)" \0"};
nctemp3709=&nctemp3710;
nctempchar1* nctemp3707= nctemp3709;
int nctemp3711=SemSerror(nctemp3701,nctemp3703,nctemp3707);
}
else{
struct tree* nctemp3713= np;
struct tree* nctemp3715= p;
int nctemp3717=SemCopytype(nctemp3713,nctemp3715);
struct tree* nctemp3719= p;
struct nctempchar1 *nctemp3723;
static struct nctempchar1 nctemp3724 = {{ 5}, (char*)"void\0"};
nctemp3723=&nctemp3724;
nctempchar1* nctemp3721= nctemp3723;
int nctemp3725=PtreeSetlval(nctemp3719,nctemp3721);
}
}
return p;
}
struct tree* SemBinexpr (struct tree* p)
{
struct tree* leftp;
struct tree* rightp;
struct tree* np;
np =p;
struct tree* nctemp3734= p;
nctempchar1* nctemp3736=PtreeGetname(nctemp3734);
nctempchar1* nctemp3732= nctemp3736;
struct nctempchar1 *nctemp3739;
static struct nctempchar1 nctemp3740 = {{ 8}, (char*)"binexpr\0"};
nctemp3739=&nctemp3740;
nctempchar1* nctemp3737= nctemp3739;
int nctemp3741=LibeStrcmp(nctemp3732,nctemp3737);
if(nctemp3741)
{
struct tree* nctemp3746= p;
struct tree* nctemp3748=PtreeMvchild(nctemp3746);
p =nctemp3748;
struct tree* nctemp3753= p;
struct tree* nctemp3755=SemUnexpr(nctemp3753);
leftp =nctemp3755;
struct tree* nctemp3760= p;
struct tree* nctemp3762=PtreeMvsister(nctemp3760);
p =nctemp3762;
struct tree* nctemp3767= p;
struct tree* nctemp3769=SemUnexpr(nctemp3767);
rightp =nctemp3769;
struct tree* nctemp3773= leftp;
struct tree* nctemp3775= rightp;
int nctemp3777=SemComparetype(nctemp3773,nctemp3775);
int nctemp3770 = (nctemp3777 ==0);
if(nctemp3770)
{
struct tree* nctemp3780= p;
struct nctempchar1 *nctemp3784;
static struct nctempchar1 nctemp3785 = {{ 11}, (char*)"Type error\0"};
nctemp3784=&nctemp3785;
nctempchar1* nctemp3782= nctemp3784;
struct nctempchar1 *nctemp3788;
static struct nctempchar1 nctemp3789 = {{ 2}, (char*)" \0"};
nctemp3788=&nctemp3789;
nctempchar1* nctemp3786= nctemp3788;
int nctemp3790=SemSerror(nctemp3780,nctemp3782,nctemp3786);
return p;
}
else{
struct tree* nctemp3795= np;
nctempchar1* nctemp3797=PtreeGetdef(nctemp3795);
nctempchar1* nctemp3793= nctemp3797;
struct nctempchar1 *nctemp3800;
static struct nctempchar1 nctemp3801 = {{ 2}, (char*)"=\0"};
nctemp3800=&nctemp3801;
nctempchar1* nctemp3798= nctemp3800;
int nctemp3802=LibeStrcmp(nctemp3793,nctemp3798);
if(nctemp3802)
{
struct tree* nctemp3804= np;
struct tree* nctemp3806=SemAsgexpr(nctemp3804);
}
else{
struct tree* nctemp3830= np;
nctempchar1* nctemp3832=PtreeGetdef(nctemp3830);
nctempchar1* nctemp3828= nctemp3832;
struct nctempchar1 *nctemp3835;
static struct nctempchar1 nctemp3836 = {{ 3}, (char*)"!=\0"};
nctemp3835=&nctemp3836;
nctempchar1* nctemp3833= nctemp3835;
int nctemp3837=LibeStrcmp(nctemp3828,nctemp3833);
struct tree* nctemp3841= np;
nctempchar1* nctemp3843=PtreeGetdef(nctemp3841);
nctempchar1* nctemp3839= nctemp3843;
struct nctempchar1 *nctemp3846;
static struct nctempchar1 nctemp3847 = {{ 3}, (char*)"==\0"};
nctemp3846=&nctemp3847;
nctempchar1* nctemp3844= nctemp3846;
int nctemp3848=LibeStrcmp(nctemp3839,nctemp3844);
int nctemp3825 = (nctemp3837 || nctemp3848);
struct tree* nctemp3852= np;
nctempchar1* nctemp3854=PtreeGetdef(nctemp3852);
nctempchar1* nctemp3850= nctemp3854;
struct nctempchar1 *nctemp3857;
static struct nctempchar1 nctemp3858 = {{ 3}, (char*)"||\0"};
nctemp3857=&nctemp3858;
nctempchar1* nctemp3855= nctemp3857;
int nctemp3859=LibeStrcmp(nctemp3850,nctemp3855);
int nctemp3822 = (nctemp3825 || nctemp3859);
struct tree* nctemp3863= np;
nctempchar1* nctemp3865=PtreeGetdef(nctemp3863);
nctempchar1* nctemp3861= nctemp3865;
struct nctempchar1 *nctemp3868;
static struct nctempchar1 nctemp3869 = {{ 3}, (char*)"<=\0"};
nctemp3868=&nctemp3869;
nctempchar1* nctemp3866= nctemp3868;
int nctemp3870=LibeStrcmp(nctemp3861,nctemp3866);
int nctemp3819 = (nctemp3822 || nctemp3870);
struct tree* nctemp3874= np;
nctempchar1* nctemp3876=PtreeGetdef(nctemp3874);
nctempchar1* nctemp3872= nctemp3876;
struct nctempchar1 *nctemp3879;
static struct nctempchar1 nctemp3880 = {{ 3}, (char*)">=\0"};
nctemp3879=&nctemp3880;
nctempchar1* nctemp3877= nctemp3879;
int nctemp3881=LibeStrcmp(nctemp3872,nctemp3877);
int nctemp3816 = (nctemp3819 || nctemp3881);
struct tree* nctemp3885= np;
nctempchar1* nctemp3887=PtreeGetdef(nctemp3885);
nctempchar1* nctemp3883= nctemp3887;
struct nctempchar1 *nctemp3890;
static struct nctempchar1 nctemp3891 = {{ 2}, (char*)"<\0"};
nctemp3890=&nctemp3891;
nctempchar1* nctemp3888= nctemp3890;
int nctemp3892=LibeStrcmp(nctemp3883,nctemp3888);
int nctemp3813 = (nctemp3816 || nctemp3892);
struct tree* nctemp3896= np;
nctempchar1* nctemp3898=PtreeGetdef(nctemp3896);
nctempchar1* nctemp3894= nctemp3898;
struct nctempchar1 *nctemp3901;
static struct nctempchar1 nctemp3902 = {{ 2}, (char*)">\0"};
nctemp3901=&nctemp3902;
nctempchar1* nctemp3899= nctemp3901;
int nctemp3903=LibeStrcmp(nctemp3894,nctemp3899);
int nctemp3810 = (nctemp3813 || nctemp3903);
struct tree* nctemp3907= np;
nctempchar1* nctemp3909=PtreeGetdef(nctemp3907);
nctempchar1* nctemp3905= nctemp3909;
struct nctempchar1 *nctemp3912;
static struct nctempchar1 nctemp3913 = {{ 3}, (char*)"&&\0"};
nctemp3912=&nctemp3913;
nctempchar1* nctemp3910= nctemp3912;
int nctemp3914=LibeStrcmp(nctemp3905,nctemp3910);
int nctemp3807 = (nctemp3810 || nctemp3914);
if(nctemp3807)
{
struct tree* nctemp3916= np;
struct tree* nctemp3918=SemRelexpr(nctemp3916);
}
else{
struct tree* nctemp3930= np;
nctempchar1* nctemp3932=PtreeGetdef(nctemp3930);
nctempchar1* nctemp3928= nctemp3932;
struct nctempchar1 *nctemp3935;
static struct nctempchar1 nctemp3936 = {{ 2}, (char*)"+\0"};
nctemp3935=&nctemp3936;
nctempchar1* nctemp3933= nctemp3935;
int nctemp3937=LibeStrcmp(nctemp3928,nctemp3933);
struct tree* nctemp3941= np;
nctempchar1* nctemp3943=PtreeGetdef(nctemp3941);
nctempchar1* nctemp3939= nctemp3943;
struct nctempchar1 *nctemp3946;
static struct nctempchar1 nctemp3947 = {{ 2}, (char*)"-\0"};
nctemp3946=&nctemp3947;
nctempchar1* nctemp3944= nctemp3946;
int nctemp3948=LibeStrcmp(nctemp3939,nctemp3944);
int nctemp3925 = (nctemp3937 || nctemp3948);
struct tree* nctemp3952= np;
nctempchar1* nctemp3954=PtreeGetdef(nctemp3952);
nctempchar1* nctemp3950= nctemp3954;
struct nctempchar1 *nctemp3957;
static struct nctempchar1 nctemp3958 = {{ 2}, (char*)"*\0"};
nctemp3957=&nctemp3958;
nctempchar1* nctemp3955= nctemp3957;
int nctemp3959=LibeStrcmp(nctemp3950,nctemp3955);
int nctemp3922 = (nctemp3925 || nctemp3959);
struct tree* nctemp3963= np;
nctempchar1* nctemp3965=PtreeGetdef(nctemp3963);
nctempchar1* nctemp3961= nctemp3965;
struct nctempchar1 *nctemp3968;
static struct nctempchar1 nctemp3969 = {{ 2}, (char*)"/\0"};
nctemp3968=&nctemp3969;
nctempchar1* nctemp3966= nctemp3968;
int nctemp3970=LibeStrcmp(nctemp3961,nctemp3966);
int nctemp3919 = (nctemp3922 || nctemp3970);
if(nctemp3919)
{
struct tree* nctemp3972= np;
struct tree* nctemp3974=SemAddexpr(nctemp3972);
}
}
}
return np;
}
}
else{
struct tree* nctemp3977= p;
struct tree* nctemp3979=SemUnexpr(nctemp3977);
return nctemp3979;
}
}
struct tree* SemExpr (struct tree* p)
{
struct tree* sp;
struct tree* nctemp3984= p;
struct tree* nctemp3986=PtreeMvchild(nctemp3984);
sp =nctemp3986;
struct tree* nctemp3991= sp;
struct tree* nctemp3993=SemBinexpr(nctemp3991);
sp =nctemp3993;
struct tree* nctemp3995= sp;
struct tree* nctemp3997= p;
int nctemp3999=SemCopytype(nctemp3995,nctemp3997);
return p;
}
struct tree* SemUnexpr (struct tree* p)
{
struct tree* np;
np =p;
struct tree* nctemp4008= p;
nctempchar1* nctemp4010=PtreeGetname(nctemp4008);
nctempchar1* nctemp4006= nctemp4010;
struct nctempchar1 *nctemp4013;
static struct nctempchar1 nctemp4014 = {{ 7}, (char*)"unexpr\0"};
nctemp4013=&nctemp4014;
nctempchar1* nctemp4011= nctemp4013;
int nctemp4015=LibeStrcmp(nctemp4006,nctemp4011);
if(nctemp4015)
{
struct tree* nctemp4020= p;
struct tree* nctemp4022=PtreeMvchild(nctemp4020);
p =nctemp4022;
struct tree* nctemp4027= p;
struct tree* nctemp4029=SemPrimexpr(nctemp4027);
p =nctemp4029;
struct tree* nctemp4031= p;
struct tree* nctemp4033= np;
int nctemp4035=SemCopytype(nctemp4031,nctemp4033);
return np;
}
else{
struct tree* nctemp4038= p;
struct tree* nctemp4040=SemPrimexpr(nctemp4038);
return nctemp4040;
}
}
struct tree* SemPrimexpr (struct tree* p)
{
struct tree* nctemp4044= p;
nctempchar1* nctemp4046=PtreeGetname(nctemp4044);
nctempchar1* nctemp4042= nctemp4046;
struct nctempchar1 *nctemp4049;
static struct nctempchar1 nctemp4050 = {{ 11}, (char*)"identifier\0"};
nctemp4049=&nctemp4050;
nctempchar1* nctemp4047= nctemp4049;
int nctemp4051=LibeStrcmp(nctemp4042,nctemp4047);
if(nctemp4051)
{
struct tree* nctemp4053= p;
int nctemp4055=SemId(nctemp4053);
return p;
}
else{
struct tree* nctemp4060= p;
nctempchar1* nctemp4062=PtreeGetname(nctemp4060);
nctempchar1* nctemp4058= nctemp4062;
struct nctempchar1 *nctemp4065;
static struct nctempchar1 nctemp4066 = {{ 6}, (char*)"fcall\0"};
nctemp4065=&nctemp4066;
nctempchar1* nctemp4063= nctemp4065;
int nctemp4067=LibeStrcmp(nctemp4058,nctemp4063);
if(nctemp4067)
{
struct tree* nctemp4069= p;
int nctemp4071=SemFcall(nctemp4069);
return p;
}
else{
struct tree* nctemp4076= p;
nctempchar1* nctemp4078=PtreeGetname(nctemp4076);
nctempchar1* nctemp4074= nctemp4078;
struct nctempchar1 *nctemp4081;
static struct nctempchar1 nctemp4082 = {{ 5}, (char*)"cast\0"};
nctemp4081=&nctemp4082;
nctempchar1* nctemp4079= nctemp4081;
int nctemp4083=LibeStrcmp(nctemp4074,nctemp4079);
if(nctemp4083)
{
struct tree* nctemp4085= p;
int nctemp4087=SemCast(nctemp4085);
return p;
}
else{
struct tree* nctemp4092= p;
nctempchar1* nctemp4094=PtreeGetname(nctemp4092);
nctempchar1* nctemp4090= nctemp4094;
struct nctempchar1 *nctemp4097;
static struct nctempchar1 nctemp4098 = {{ 4}, (char*)"new\0"};
nctemp4097=&nctemp4098;
nctempchar1* nctemp4095= nctemp4097;
int nctemp4099=LibeStrcmp(nctemp4090,nctemp4095);
if(nctemp4099)
{
struct tree* nctemp4101= p;
int nctemp4103=SemNew(nctemp4101);
return p;
}
else{
struct tree* nctemp4108= p;
nctempchar1* nctemp4110=PtreeGetname(nctemp4108);
nctempchar1* nctemp4106= nctemp4110;
struct nctempchar1 *nctemp4113;
static struct nctempchar1 nctemp4114 = {{ 7}, (char*)"delete\0"};
nctemp4113=&nctemp4114;
nctempchar1* nctemp4111= nctemp4113;
int nctemp4115=LibeStrcmp(nctemp4106,nctemp4111);
if(nctemp4115)
{
struct tree* nctemp4117= p;
int nctemp4119=SemDelete(nctemp4117);
return p;
}
else{
struct tree* nctemp4124= p;
nctempchar1* nctemp4126=PtreeGetname(nctemp4124);
nctempchar1* nctemp4122= nctemp4126;
struct nctempchar1 *nctemp4129;
static struct nctempchar1 nctemp4130 = {{ 6}, (char*)"cmplx\0"};
nctemp4129=&nctemp4130;
nctempchar1* nctemp4127= nctemp4129;
int nctemp4131=LibeStrcmp(nctemp4122,nctemp4127);
if(nctemp4131)
{
struct tree* nctemp4133= p;
int nctemp4135=SemCmplx(nctemp4133);
return p;
}
else{
struct tree* nctemp4140= p;
nctempchar1* nctemp4142=PtreeGetname(nctemp4140);
nctempchar1* nctemp4138= nctemp4142;
struct nctempchar1 *nctemp4145;
static struct nctempchar1 nctemp4146 = {{ 3}, (char*)"re\0"};
nctemp4145=&nctemp4146;
nctempchar1* nctemp4143= nctemp4145;
int nctemp4147=LibeStrcmp(nctemp4138,nctemp4143);
if(nctemp4147)
{
struct tree* nctemp4149= p;
int nctemp4151=SemRe(nctemp4149);
return p;
}
else{
struct tree* nctemp4156= p;
nctempchar1* nctemp4158=PtreeGetname(nctemp4156);
nctempchar1* nctemp4154= nctemp4158;
struct nctempchar1 *nctemp4161;
static struct nctempchar1 nctemp4162 = {{ 4}, (char*)"len\0"};
nctemp4161=&nctemp4162;
nctempchar1* nctemp4159= nctemp4161;
int nctemp4163=LibeStrcmp(nctemp4154,nctemp4159);
if(nctemp4163)
{
struct tree* nctemp4165= p;
int nctemp4167=SemLen(nctemp4165);
return p;
}
else{
struct tree* nctemp4172= p;
nctempchar1* nctemp4174=PtreeGetname(nctemp4172);
nctempchar1* nctemp4170= nctemp4174;
struct nctempchar1 *nctemp4177;
static struct nctempchar1 nctemp4178 = {{ 3}, (char*)"im\0"};
nctemp4177=&nctemp4178;
nctempchar1* nctemp4175= nctemp4177;
int nctemp4179=LibeStrcmp(nctemp4170,nctemp4175);
if(nctemp4179)
{
struct tree* nctemp4181= p;
int nctemp4183=SemIm(nctemp4181);
return p;
}
else{
struct tree* nctemp4188= p;
nctempchar1* nctemp4190=PtreeGetname(nctemp4188);
nctempchar1* nctemp4186= nctemp4190;
struct nctempchar1 *nctemp4193;
static struct nctempchar1 nctemp4194 = {{ 7}, (char*)"sizeof\0"};
nctemp4193=&nctemp4194;
nctempchar1* nctemp4191= nctemp4193;
int nctemp4195=LibeStrcmp(nctemp4186,nctemp4191);
if(nctemp4195)
{
struct tree* nctemp4197= p;
int nctemp4199=SemSizeof(nctemp4197);
return p;
}
else{
struct tree* nctemp4204= p;
nctempchar1* nctemp4206=PtreeGetname(nctemp4204);
nctempchar1* nctemp4202= nctemp4206;
struct nctempchar1 *nctemp4209;
static struct nctempchar1 nctemp4210 = {{ 10}, (char*)"iconstant\0"};
nctemp4209=&nctemp4210;
nctempchar1* nctemp4207= nctemp4209;
int nctemp4211=LibeStrcmp(nctemp4202,nctemp4207);
if(nctemp4211)
{
struct tree* nctemp4213= p;
struct nctempchar1 *nctemp4217;
static struct nctempchar1 nctemp4218 = {{ 4}, (char*)"int\0"};
nctemp4217=&nctemp4218;
nctempchar1* nctemp4215= nctemp4217;
int nctemp4219=PtreeSetype(nctemp4213,nctemp4215);
return p;
}
else{
struct tree* nctemp4224= p;
nctempchar1* nctemp4226=PtreeGetname(nctemp4224);
nctempchar1* nctemp4222= nctemp4226;
struct nctempchar1 *nctemp4229;
static struct nctempchar1 nctemp4230 = {{ 10}, (char*)"rconstant\0"};
nctemp4229=&nctemp4230;
nctempchar1* nctemp4227= nctemp4229;
int nctemp4231=LibeStrcmp(nctemp4222,nctemp4227);
if(nctemp4231)
{
struct tree* nctemp4233= p;
struct nctempchar1 *nctemp4237;
static struct nctempchar1 nctemp4238 = {{ 6}, (char*)"float\0"};
nctemp4237=&nctemp4238;
nctempchar1* nctemp4235= nctemp4237;
int nctemp4239=PtreeSetype(nctemp4233,nctemp4235);
return p;
}
else{
struct tree* nctemp4244= p;
nctempchar1* nctemp4246=PtreeGetname(nctemp4244);
nctempchar1* nctemp4242= nctemp4246;
struct nctempchar1 *nctemp4249;
static struct nctempchar1 nctemp4250 = {{ 10}, (char*)"sconstant\0"};
nctemp4249=&nctemp4250;
nctempchar1* nctemp4247= nctemp4249;
int nctemp4251=LibeStrcmp(nctemp4242,nctemp4247);
if(nctemp4251)
{
struct tree* nctemp4253= p;
struct nctempchar1 *nctemp4257;
static struct nctempchar1 nctemp4258 = {{ 5}, (char*)"char\0"};
nctemp4257=&nctemp4258;
nctempchar1* nctemp4255= nctemp4257;
int nctemp4259=PtreeSetype(nctemp4253,nctemp4255);
struct tree* nctemp4261= p;
struct nctempchar1 *nctemp4265;
static struct nctempchar1 nctemp4266 = {{ 5}, (char*)"aref\0"};
nctemp4265=&nctemp4266;
nctempchar1* nctemp4263= nctemp4265;
int nctemp4267=PtreeSetref(nctemp4261,nctemp4263);
struct tree* nctemp4269= p;
int nctemp4271= 1;
int nctemp4273=PtreeSetrank(nctemp4269,nctemp4271);
return p;
}
else{
struct tree* nctemp4276= p;
struct tree* nctemp4278=SemBinexpr(nctemp4276);
return nctemp4278;
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
struct tree* nctemp4280= p;
struct tree* nctemp4284= np;
nctempchar1* nctemp4286=PtreeGetparallel(nctemp4284);
nctempchar1* nctemp4282= nctemp4286;
int nctemp4287=PtreeSetparallel(nctemp4280,nctemp4282);
return 1;
}
int SemArgtypes (struct tree* p,struct symbol* tp)
{
nctempchar1 *name;
struct symbol* nctemp4294= tp;
nctempchar1* nctemp4296=SymGetname(nctemp4294);
name=nctemp4296;
struct tree* nctemp4298= p;
struct symbol* nctemp4300= tp;
int nctemp4302=SemArgtype(nctemp4298,nctemp4300);
struct tree* nctemp4307= p;
struct tree* nctemp4309=PtreeMvchild(nctemp4307);
p =nctemp4309;
struct tree* nctemp4315= p;
nctempchar1* nctemp4317=PtreeGetname(nctemp4315);
nctempchar1* nctemp4313= nctemp4317;
struct nctempchar1 *nctemp4320;
static struct nctempchar1 nctemp4321 = {{ 8}, (char*)"arglist\0"};
nctemp4320=&nctemp4321;
nctempchar1* nctemp4318= nctemp4320;
int nctemp4322=LibeStrcmp(nctemp4313,nctemp4318);
int nctemp4310 = (nctemp4322 ==0);
if(nctemp4310)
{
struct symbol* nctemp4331= tp;
struct symbol* nctemp4333=SymGetable(nctemp4331);
tp =nctemp4333;
int nctemp4324 = (tp !=0);
if(nctemp4324)
{
struct tree* nctemp4336= p;
struct nctempchar1 *nctemp4340;
static struct nctempchar1 nctemp4341 = {{ 54}, (char*)"Function arguments does not match forward declaration\0"};
nctemp4340=&nctemp4341;
nctempchar1* nctemp4338= nctemp4340;
struct tree* nctemp4344= p;
nctempchar1* nctemp4346=PtreeGetdef(nctemp4344);
nctempchar1* nctemp4342= nctemp4346;
int nctemp4347=SemSerror(nctemp4336,nctemp4338,nctemp4342);
return 0;
}
return 1;
}
struct tree* nctemp4356= p;
struct tree* nctemp4358=PtreeMvchild(nctemp4356);
struct tree* nctemp4354= nctemp4358;
struct tree* nctemp4359=PtreeMvchild(nctemp4354);
p =nctemp4359;
struct symbol* nctemp4364= tp;
struct symbol* nctemp4366=SymGetable(nctemp4364);
tp =nctemp4366;
struct nctempchar1 *nctemp4373;
static struct nctempchar1 nctemp4374 = {{ 9}, (char*)"#arglist\0"};
nctemp4373=&nctemp4374;
nctempchar1* nctemp4371= nctemp4373;
struct symbol* nctemp4375= tp;
struct symbol* nctemp4377=SymLookup(nctemp4371,nctemp4375);
tp =nctemp4377;
int nctemp4378 = (tp ==0);
if(nctemp4378)
{
struct tree* nctemp4383= p;
struct nctempchar1 *nctemp4387;
static struct nctempchar1 nctemp4388 = {{ 54}, (char*)"Function Arguments does not match forward declaration\0"};
nctemp4387=&nctemp4388;
nctempchar1* nctemp4385= nctemp4387;
nctempchar1* nctemp4389= name;
int nctemp4392=SemSerror(nctemp4383,nctemp4385,nctemp4389);
}
else{
struct symbol* nctemp4397= tp;
struct symbol* nctemp4399=SymGetable(nctemp4397);
tp =nctemp4399;
}
struct symbol* nctemp4404= tp;
struct symbol* nctemp4406=SymMvnext(nctemp4404);
tp =nctemp4406;
int nctemp4407 = (p !=0);
int nctemp4411=nctemp4407;
while(nctemp4411)
{{
struct tree* nctemp4413= p;
struct symbol* nctemp4415= tp;
int nctemp4417=SemArgtype(nctemp4413,nctemp4415);
struct tree* nctemp4422= p;
struct tree* nctemp4424=PtreeMvsister(nctemp4422);
p =nctemp4424;
struct symbol* nctemp4429= tp;
struct symbol* nctemp4431=SymMvnext(nctemp4429);
tp =nctemp4431;
}
int nctemp4432 = (p !=0);
nctemp4411=nctemp4432;}return 1;
}
int SemFdef2 (struct tree* p,struct symbol* tp)
{
struct tree* np;
struct tree* sp;
struct symbol* up;
struct symbol* ftp;
struct symbol* ltp;
struct tree* nctemp4438= p;
struct nctempchar1 *nctemp4442;
static struct nctempchar1 nctemp4443 = {{ 5}, (char*)"fdef\0"};
nctemp4442=&nctemp4443;
nctempchar1* nctemp4440= nctemp4442;
int nctemp4444=PtreeSetname(nctemp4438,nctemp4440);
struct symbol* nctemp4446= tp;
struct nctempchar1 *nctemp4450;
static struct nctempchar1 nctemp4451 = {{ 5}, (char*)"void\0"};
nctemp4450=&nctemp4451;
nctempchar1* nctemp4448= nctemp4450;
int nctemp4452=SymSetforw(nctemp4446,nctemp4448);
struct tree* nctemp4457= p;
struct tree* nctemp4459=PtreeMvchild(nctemp4457);
np =nctemp4459;
struct symbol* nctemp4464=SymMktable();
ltp =nctemp4464;
struct symbol* nctemp4466= ltp;
struct symbol* nctemp4468=SymSetltp(nctemp4466);
struct nctempchar1 *nctemp4475;
static struct nctempchar1 nctemp4476 = {{ 6}, (char*)"#self\0"};
nctemp4475=&nctemp4476;
nctempchar1* nctemp4473= nctemp4475;
struct symbol* nctemp4477= ltp;
struct symbol* nctemp4479=SymMkname(nctemp4473,nctemp4477);
up =nctemp4479;
struct symbol* nctemp4481= up;
struct tree* nctemp4485= p;
nctempchar1* nctemp4487=PtreeGetdef(nctemp4485);
nctempchar1* nctemp4483= nctemp4487;
int nctemp4488=SymSetfunc(nctemp4481,nctemp4483);
struct tree* nctemp4494= np;
nctempchar1* nctemp4496=PtreeGetname(nctemp4494);
nctempchar1* nctemp4492= nctemp4496;
struct nctempchar1 *nctemp4499;
static struct nctempchar1 nctemp4500 = {{ 8}, (char*)"arglist\0"};
nctemp4499=&nctemp4500;
nctempchar1* nctemp4497= nctemp4499;
int nctemp4501=LibeStrcmp(nctemp4492,nctemp4497);
int nctemp4489 = (nctemp4501 ==1);
if(nctemp4489)
{
struct tree* nctemp4507= np;
struct tree* nctemp4509=PtreeMvsister(nctemp4507);
sp =nctemp4509;
}
else{
sp =np;
}
struct tree* nctemp4519= np;
nctempchar1* nctemp4521=PtreeGetname(nctemp4519);
nctempchar1* nctemp4517= nctemp4521;
struct nctempchar1 *nctemp4524;
static struct nctempchar1 nctemp4525 = {{ 8}, (char*)"arglist\0"};
nctemp4524=&nctemp4525;
nctempchar1* nctemp4522= nctemp4524;
int nctemp4526=LibeStrcmp(nctemp4517,nctemp4522);
int nctemp4514 = (nctemp4526 ==1);
if(nctemp4514)
{
struct tree* nctemp4532= np;
struct tree* nctemp4534=PtreeMvchild(nctemp4532);
np =nctemp4534;
struct nctempchar1 *nctemp4541;
static struct nctempchar1 nctemp4542 = {{ 9}, (char*)"#arglist\0"};
nctemp4541=&nctemp4542;
nctempchar1* nctemp4539= nctemp4541;
struct symbol* nctemp4543= ltp;
struct symbol* nctemp4545=SymMkname(nctemp4539,nctemp4543);
up =nctemp4545;
struct symbol* nctemp4550=SymMktable();
ftp =nctemp4550;
struct symbol* nctemp4552= up;
struct symbol* nctemp4554= ftp;
struct symbol* nctemp4556=SymSetable(nctemp4552,nctemp4554);
struct tree* nctemp4558= np;
struct symbol* nctemp4560= ftp;
int nctemp4562=SemDeclarations(nctemp4558,nctemp4560);
}
struct tree* nctemp4564= p;
struct symbol* nctemp4566= tp;
int nctemp4568=SemArgtypes(nctemp4564,nctemp4566);
struct symbol* nctemp4570= tp;
int nctemp4572= 1;
int nctemp4574=SymSetemit(nctemp4570,nctemp4572);
struct tree* nctemp4576= sp;
int nctemp4578=SemCompstmnt(nctemp4576);
struct tree* nctemp4580= p;
struct tree* nctemp4582= sp;
int nctemp4584=SemCopyparallel(nctemp4580,nctemp4582);
return 1;
}
int Semisnobody (struct tree* p)
{
struct tree* np;
struct tree* nctemp4590= p;
struct tree* nctemp4592=PtreeMvchild(nctemp4590);
np =nctemp4592;
struct tree* nctemp4598= np;
nctempchar1* nctemp4600=PtreeGetname(nctemp4598);
nctempchar1* nctemp4596= nctemp4600;
struct nctempchar1 *nctemp4603;
static struct nctempchar1 nctemp4604 = {{ 8}, (char*)"arglist\0"};
nctemp4603=&nctemp4604;
nctempchar1* nctemp4601= nctemp4603;
int nctemp4605=LibeStrcmp(nctemp4596,nctemp4601);
int nctemp4593 = (nctemp4605 ==1);
if(nctemp4593)
{
struct tree* nctemp4611= np;
struct tree* nctemp4613=PtreeMvsister(nctemp4611);
np =nctemp4613;
struct tree* nctemp4618= np;
struct tree* nctemp4620=PtreeMvchild(nctemp4618);
np =nctemp4620;
int nctemp4621 = (np ==0);
if(nctemp4621)
{
return 1;
}
else{
return 0;
}
}
else{
struct tree* nctemp4632= np;
nctempchar1* nctemp4634=PtreeGetname(nctemp4632);
nctempchar1* nctemp4630= nctemp4634;
struct nctempchar1 *nctemp4637;
static struct nctempchar1 nctemp4638 = {{ 10}, (char*)"compstmnt\0"};
nctemp4637=&nctemp4638;
nctempchar1* nctemp4635= nctemp4637;
int nctemp4639=LibeStrcmp(nctemp4630,nctemp4635);
int nctemp4627 = (nctemp4639 ==1);
if(nctemp4627)
{
struct tree* nctemp4645= np;
struct tree* nctemp4647=PtreeMvchild(nctemp4645);
np =nctemp4647;
int nctemp4648 = (np ==0);
if(nctemp4648)
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
struct tree* nctemp4658= p;
nctempchar1* nctemp4660=PtreeGetarray(nctemp4658);
nctempchar1* nctemp4656= nctemp4660;
struct nctempchar1 *nctemp4663;
static struct nctempchar1 nctemp4664 = {{ 6}, (char*)"array\0"};
nctemp4663=&nctemp4664;
nctempchar1* nctemp4661= nctemp4663;
int nctemp4665=LibeStrcmp(nctemp4656,nctemp4661);
if(nctemp4665)
{
rank =1;
struct tree* nctemp4674= p;
struct tree* nctemp4676=PtreeMvchild(nctemp4674);
np =nctemp4676;
struct tree* nctemp4681= np;
struct tree* nctemp4683=PtreeMvchild(nctemp4681);
sp =nctemp4683;
struct tree* nctemp4688= np;
struct tree* nctemp4690=PtreeMvsister(nctemp4688);
np =nctemp4690;
struct tree* nctemp4698= sp;
struct tree* nctemp4700=PtreeMvsister(nctemp4698);
sp =nctemp4700;
int nctemp4691 = (sp !=0);
int nctemp4702=nctemp4691;
while(nctemp4702)
{{
int nctemp4711 = rank + 1;
rank =nctemp4711;
}
struct tree* nctemp4719= sp;
struct tree* nctemp4721=PtreeMvsister(nctemp4719);
sp =nctemp4721;
int nctemp4712 = (sp !=0);
nctemp4702=nctemp4712;}}
else{
rank =0;
struct tree* nctemp4731= p;
struct tree* nctemp4733=PtreeMvchild(nctemp4731);
np =nctemp4733;
}
struct tree* nctemp4735= p;
int nctemp4737= rank;
int nctemp4739=PtreeSetrank(nctemp4735,nctemp4737);
struct tree* nctemp4741= p;
struct tree* nctemp4743= np;
int nctemp4745=SemCopytype(nctemp4741,nctemp4743);
struct tree* nctemp4747= np;
struct tree* nctemp4751= p;
nctempchar1* nctemp4753=PtreeGetdef(nctemp4751);
nctempchar1* nctemp4749= nctemp4753;
int nctemp4754=PtreeSetype(nctemp4747,nctemp4749);
p =np;
nobody =0;
struct tree* nctemp4766= p;
int nctemp4768=Semisnobody(nctemp4766);
int nctemp4763 = (nctemp4768 ==1);
if(nctemp4763)
{
struct tree* nctemp4771= p;
struct nctempchar1 *nctemp4775;
static struct nctempchar1 nctemp4776 = {{ 5}, (char*)"forw\0"};
nctemp4775=&nctemp4776;
nctempchar1* nctemp4773= nctemp4775;
int nctemp4777=PtreeSetforw(nctemp4771,nctemp4773);
nobody =1;
}
struct tree* nctemp4791= p;
nctempchar1* nctemp4793=PtreeGetdef(nctemp4791);
nctempchar1* nctemp4789= nctemp4793;
struct symbol* nctemp4794= tp;
struct symbol* nctemp4796=SymMkname(nctemp4789,nctemp4794);
fname =nctemp4796;
int nctemp4782 = (fname ==0);
if(nctemp4782)
{
struct tree* nctemp4804= p;
nctempchar1* nctemp4806=PtreeGetdef(nctemp4804);
nctempchar1* nctemp4802= nctemp4806;
struct symbol* nctemp4807= tp;
struct symbol* nctemp4809=SymLookup(nctemp4802,nctemp4807);
qp =nctemp4809;
struct symbol* nctemp4815= qp;
nctempchar1* nctemp4817=SymGetforw(nctemp4815);
nctempchar1* nctemp4813= nctemp4817;
struct nctempchar1 *nctemp4820;
static struct nctempchar1 nctemp4821 = {{ 5}, (char*)"forw\0"};
nctemp4820=&nctemp4821;
nctempchar1* nctemp4818= nctemp4820;
int nctemp4822=LibeStrcmp(nctemp4813,nctemp4818);
int nctemp4810 = (nctemp4822 !=1);
if(nctemp4810)
{
struct tree* nctemp4825= np;
struct nctempchar1 *nctemp4829;
static struct nctempchar1 nctemp4830 = {{ 25}, (char*)"Function already defined\0"};
nctemp4829=&nctemp4830;
nctempchar1* nctemp4827= nctemp4829;
struct tree* nctemp4833= p;
nctempchar1* nctemp4835=PtreeGetdef(nctemp4833);
nctempchar1* nctemp4831= nctemp4835;
int nctemp4836=SemSerror(nctemp4825,nctemp4827,nctemp4831);
}
else{
struct tree* nctemp4838= p;
struct symbol* nctemp4840= qp;
int nctemp4842=SemFdef2(nctemp4838,nctemp4840);
return 1;
}
}
struct symbol* nctemp4845= fname;
struct tree* nctemp4849= p;
nctempchar1* nctemp4851=PtreeGetype(nctemp4849);
nctempchar1* nctemp4847= nctemp4851;
int nctemp4852=SymSetype(nctemp4845,nctemp4847);
struct symbol* nctemp4854= fname;
struct tree* nctemp4858= p;
nctempchar1* nctemp4860=PtreeGetstruct(nctemp4858);
nctempchar1* nctemp4856= nctemp4860;
int nctemp4861=SymSetstruct(nctemp4854,nctemp4856);
struct symbol* nctemp4863= fname;
struct tree* nctemp4867= p;
nctempchar1* nctemp4869=PtreeGetarray(nctemp4867);
nctempchar1* nctemp4865= nctemp4869;
int nctemp4870=SymSetarray(nctemp4863,nctemp4865);
struct symbol* nctemp4872= fname;
struct tree* nctemp4876= p;
int nctemp4878=PtreeGetrank(nctemp4876);
int nctemp4874= nctemp4878;
int nctemp4879=SymSetrank(nctemp4872,nctemp4874);
struct symbol* nctemp4881= fname;
struct nctempchar1 *nctemp4885;
static struct nctempchar1 nctemp4886 = {{ 5}, (char*)"fdef\0"};
nctemp4885=&nctemp4886;
nctempchar1* nctemp4883= nctemp4885;
int nctemp4887=SymSetfunc(nctemp4881,nctemp4883);
int nctemp4888 = (nobody ==1);
if(nctemp4888)
{
struct symbol* nctemp4893= fname;
struct nctempchar1 *nctemp4897;
static struct nctempchar1 nctemp4898 = {{ 5}, (char*)"forw\0"};
nctemp4897=&nctemp4898;
nctempchar1* nctemp4895= nctemp4897;
int nctemp4899=SymSetforw(nctemp4893,nctemp4895);
}
struct tree* nctemp4904= p;
struct tree* nctemp4906=PtreeMvchild(nctemp4904);
np =nctemp4906;
struct symbol* nctemp4911=SymMktable();
ltp =nctemp4911;
struct symbol* nctemp4913= ltp;
struct symbol* nctemp4915=SymSetltp(nctemp4913);
struct nctempchar1 *nctemp4922;
static struct nctempchar1 nctemp4923 = {{ 6}, (char*)"#self\0"};
nctemp4922=&nctemp4923;
nctempchar1* nctemp4920= nctemp4922;
struct symbol* nctemp4924= ltp;
struct symbol* nctemp4926=SymMkname(nctemp4920,nctemp4924);
up =nctemp4926;
struct symbol* nctemp4928= up;
struct tree* nctemp4932= p;
nctempchar1* nctemp4934=PtreeGetdef(nctemp4932);
nctempchar1* nctemp4930= nctemp4934;
int nctemp4935=SymSetfunc(nctemp4928,nctemp4930);
struct tree* nctemp4941= np;
nctempchar1* nctemp4943=PtreeGetname(nctemp4941);
nctempchar1* nctemp4939= nctemp4943;
struct nctempchar1 *nctemp4946;
static struct nctempchar1 nctemp4947 = {{ 8}, (char*)"arglist\0"};
nctemp4946=&nctemp4947;
nctempchar1* nctemp4944= nctemp4946;
int nctemp4948=LibeStrcmp(nctemp4939,nctemp4944);
int nctemp4936 = (nctemp4948 ==1);
if(nctemp4936)
{
struct tree* nctemp4954= np;
struct tree* nctemp4956=PtreeMvsister(nctemp4954);
sp =nctemp4956;
}
else{
sp =np;
}
struct tree* nctemp4966= np;
nctempchar1* nctemp4968=PtreeGetname(nctemp4966);
nctempchar1* nctemp4964= nctemp4968;
struct nctempchar1 *nctemp4971;
static struct nctempchar1 nctemp4972 = {{ 8}, (char*)"arglist\0"};
nctemp4971=&nctemp4972;
nctempchar1* nctemp4969= nctemp4971;
int nctemp4973=LibeStrcmp(nctemp4964,nctemp4969);
int nctemp4961 = (nctemp4973 ==1);
if(nctemp4961)
{
struct tree* nctemp4979= np;
struct tree* nctemp4981=PtreeMvchild(nctemp4979);
np =nctemp4981;
struct nctempchar1 *nctemp4988;
static struct nctempchar1 nctemp4989 = {{ 9}, (char*)"#arglist\0"};
nctemp4988=&nctemp4989;
nctempchar1* nctemp4986= nctemp4988;
struct symbol* nctemp4990= ltp;
struct symbol* nctemp4992=SymMkname(nctemp4986,nctemp4990);
up =nctemp4992;
struct symbol* nctemp4997=SymMktable();
ftp =nctemp4997;
struct symbol* nctemp4999= up;
struct symbol* nctemp5001= ftp;
struct symbol* nctemp5003=SymSetable(nctemp4999,nctemp5001);
struct tree* nctemp5005= np;
struct symbol* nctemp5007= ftp;
int nctemp5009=SemDeclarations(nctemp5005,nctemp5007);
struct symbol* nctemp5014=SymMktable();
fsub =nctemp5014;
struct symbol* nctemp5016= fname;
struct symbol* nctemp5018= fsub;
struct symbol* nctemp5020=SymSetable(nctemp5016,nctemp5018);
struct nctempchar1 *nctemp5027;
static struct nctempchar1 nctemp5028 = {{ 9}, (char*)"#arglist\0"};
nctemp5027=&nctemp5028;
nctempchar1* nctemp5025= nctemp5027;
struct symbol* nctemp5029= fsub;
struct symbol* nctemp5031=SymMkname(nctemp5025,nctemp5029);
arg =nctemp5031;
struct symbol* nctemp5036=SymMktable();
argsub =nctemp5036;
struct symbol* nctemp5038= arg;
struct symbol* nctemp5040= argsub;
struct symbol* nctemp5042=SymSetable(nctemp5038,nctemp5040);
struct symbol* nctemp5044= ftp;
struct symbol* nctemp5046= argsub;
int nctemp5048=SymCpytble(nctemp5044,nctemp5046);
}
struct tree* nctemp5050= sp;
int nctemp5052=SemCompstmnt(nctemp5050);
struct tree* nctemp5054= p;
struct tree* nctemp5056= sp;
int nctemp5058=SemCopyparallel(nctemp5054,nctemp5056);
return 1;
}
int SemExtdecl (struct tree* p)
{
struct tree* sp;
struct tree* np;
struct tree* nctemp5063= p;
nctempchar1* nctemp5065=PtreeGetname(nctemp5063);
nctempchar1* nctemp5061= nctemp5065;
struct nctempchar1 *nctemp5068;
static struct nctempchar1 nctemp5069 = {{ 8}, (char*)"extdecl\0"};
nctemp5068=&nctemp5069;
nctempchar1* nctemp5066= nctemp5068;
int nctemp5070=LibeStrcmp(nctemp5061,nctemp5066);
if(nctemp5070)
{
struct tree* nctemp5075= p;
struct tree* nctemp5077=PtreeMvchild(nctemp5075);
np =nctemp5077;
struct tree* nctemp5079= np;
struct nctempchar1 *nctemp5083;
static struct nctempchar1 nctemp5084 = {{ 7}, (char*)"global\0"};
nctemp5083=&nctemp5084;
nctempchar1* nctemp5081= nctemp5083;
int nctemp5085=PtreeSetglobal(nctemp5079,nctemp5081);
struct tree* nctemp5091= np;
nctempchar1* nctemp5093=PtreeGetname(nctemp5091);
nctempchar1* nctemp5089= nctemp5093;
struct nctempchar1 *nctemp5096;
static struct nctempchar1 nctemp5097 = {{ 7}, (char*)"import\0"};
nctemp5096=&nctemp5097;
nctempchar1* nctemp5094= nctemp5096;
int nctemp5098=LibeStrcmp(nctemp5089,nctemp5094);
int nctemp5086 = (nctemp5098 ==1);
if(nctemp5086)
{
struct tree* nctemp5101= np;
struct symbol* nctemp5105=SymGetetp();
struct symbol* nctemp5103= nctemp5105;
int nctemp5106=SemImport(nctemp5101,nctemp5103);
return 1;
}
int nctemp5108 = (np !=0);
int nctemp5112=nctemp5108;
while(nctemp5112)
{{
struct tree* nctemp5117= np;
struct tree* nctemp5119=PtreeMvchild(nctemp5117);
sp =nctemp5119;
struct tree* nctemp5123= np;
nctempchar1* nctemp5125=PtreeGetarray(nctemp5123);
nctempchar1* nctemp5121= nctemp5125;
struct nctempchar1 *nctemp5128;
static struct nctempchar1 nctemp5129 = {{ 6}, (char*)"array\0"};
nctemp5128=&nctemp5129;
nctempchar1* nctemp5126= nctemp5128;
int nctemp5130=LibeStrcmp(nctemp5121,nctemp5126);
if(nctemp5130)
{
struct tree* nctemp5135= sp;
struct tree* nctemp5137=PtreeMvsister(nctemp5135);
sp =nctemp5137;
}
struct tree* nctemp5141= sp;
nctempchar1* nctemp5143=PtreeGetname(nctemp5141);
nctempchar1* nctemp5139= nctemp5143;
struct nctempchar1 *nctemp5146;
static struct nctempchar1 nctemp5147 = {{ 10}, (char*)"structdec\0"};
nctemp5146=&nctemp5147;
nctempchar1* nctemp5144= nctemp5146;
int nctemp5148=LibeStrcmp(nctemp5139,nctemp5144);
if(nctemp5148)
{
struct tree* nctemp5150= np;
struct symbol* nctemp5154=SymGetetp();
struct symbol* nctemp5152= nctemp5154;
int nctemp5155=SemStructdecl(nctemp5150,nctemp5152);
}
else{
struct tree* nctemp5159= sp;
nctempchar1* nctemp5161=PtreeGetname(nctemp5159);
nctempchar1* nctemp5157= nctemp5161;
struct nctempchar1 *nctemp5164;
static struct nctempchar1 nctemp5165 = {{ 5}, (char*)"fdef\0"};
nctemp5164=&nctemp5165;
nctempchar1* nctemp5162= nctemp5164;
int nctemp5166=LibeStrcmp(nctemp5157,nctemp5162);
if(nctemp5166)
{
struct tree* nctemp5168= np;
struct symbol* nctemp5172=SymGetetp();
struct symbol* nctemp5170= nctemp5172;
int nctemp5173=SemFdef(nctemp5168,nctemp5170);
}
else{
struct tree* nctemp5175= np;
struct symbol* nctemp5179=SymGetetp();
struct symbol* nctemp5177= nctemp5179;
int nctemp5180=SemDeclaration(nctemp5175,nctemp5177);
}
}
struct tree* nctemp5185= np;
struct tree* nctemp5187=PtreeMvsister(nctemp5185);
np =nctemp5187;
}
int nctemp5188 = (np !=0);
nctemp5112=nctemp5188;}}
return 1;
}
int SemSem (struct tree* p,struct symbol* tp)
{
struct symbol* ltp;
struct symbol* nctemp5194= tp;
struct symbol* nctemp5196=SymSetetp(nctemp5194);
ltp =0;
struct symbol* nctemp5202= ltp;
struct symbol* nctemp5204=SymSetltp(nctemp5202);
struct tree* nctemp5206= p;
int nctemp5208=SemExtdecl(nctemp5206);
return 1;
}
int SemWhilestmnt (struct tree* p)
{
struct tree* q;
q =p;
struct tree* nctemp5218= p;
struct tree* nctemp5220=PtreeMvchild(nctemp5218);
p =nctemp5220;
struct tree* nctemp5222= p;
struct tree* nctemp5224=SemExpr(nctemp5222);
struct tree* nctemp5226= p;
int nctemp5228= 1;
int nctemp5230=PtreeSetopexpr(nctemp5226,nctemp5228);
struct tree* nctemp5235= p;
struct tree* nctemp5237=PtreeMvsister(nctemp5235);
p =nctemp5237;
struct tree* nctemp5239= p;
int nctemp5241=SemStmnt(nctemp5239);
struct tree* nctemp5243= q;
struct tree* nctemp5245= p;
int nctemp5247=SemCopyparallel(nctemp5243,nctemp5245);
return 1;
}
int SemForstmnt (struct tree* p)
{
struct tree* q;
q =p;
struct tree* nctemp5257= p;
struct tree* nctemp5259=PtreeMvchild(nctemp5257);
p =nctemp5259;
struct tree* nctemp5261= p;
struct tree* nctemp5263=SemExpr(nctemp5261);
struct tree* nctemp5265= p;
int nctemp5267= 1;
int nctemp5269=PtreeSetopexpr(nctemp5265,nctemp5267);
struct tree* nctemp5274= p;
struct tree* nctemp5276=PtreeMvsister(nctemp5274);
p =nctemp5276;
struct tree* nctemp5278= p;
struct tree* nctemp5280=SemExpr(nctemp5278);
struct tree* nctemp5282= p;
int nctemp5284= 1;
int nctemp5286=PtreeSetopexpr(nctemp5282,nctemp5284);
struct tree* nctemp5291= p;
struct tree* nctemp5293=PtreeMvsister(nctemp5291);
p =nctemp5293;
struct tree* nctemp5295= p;
struct tree* nctemp5297=SemExpr(nctemp5295);
struct tree* nctemp5299= p;
int nctemp5301= 1;
int nctemp5303=PtreeSetopexpr(nctemp5299,nctemp5301);
struct tree* nctemp5308= p;
struct tree* nctemp5310=PtreeMvsister(nctemp5308);
p =nctemp5310;
struct tree* nctemp5312= p;
int nctemp5314=SemStmnt(nctemp5312);
struct tree* nctemp5316= q;
struct tree* nctemp5318= p;
int nctemp5320=SemCopyparallel(nctemp5316,nctemp5318);
return 1;
}
int SemParallelstmnt (struct tree* p)
{
struct tree* sp;
struct tree* rp;
int rank;
rank =0;
struct tree* nctemp5330= p;
struct tree* nctemp5332=PtreeMvchild(nctemp5330);
sp =nctemp5332;
struct tree* nctemp5337= sp;
struct tree* nctemp5339=PtreeMvchild(nctemp5337);
sp =nctemp5339;
int nctemp5340 = (sp !=0);
int nctemp5344=nctemp5340;
while(nctemp5344)
{{
struct tree* nctemp5349= sp;
struct tree* nctemp5351=PtreeMvchild(nctemp5349);
rp =nctemp5351;
struct tree* nctemp5353= rp;
struct tree* nctemp5355=SemExpr(nctemp5353);
struct tree* nctemp5357= rp;
int nctemp5359= 1;
int nctemp5361=PtreeSetopexpr(nctemp5357,nctemp5359);
struct tree* nctemp5366= rp;
struct tree* nctemp5368=PtreeMvsister(nctemp5366);
rp =nctemp5368;
struct tree* nctemp5370= rp;
struct tree* nctemp5372=SemExpr(nctemp5370);
struct tree* nctemp5374= rp;
int nctemp5376= 1;
int nctemp5378=PtreeSetopexpr(nctemp5374,nctemp5376);
struct tree* nctemp5386= rp;
struct tree* nctemp5388=PtreeMvsister(nctemp5386);
rp =nctemp5388;
int nctemp5379 = (rp !=0);
if(nctemp5379)
{
struct tree* nctemp5391= rp;
struct tree* nctemp5393=SemExpr(nctemp5391);
struct tree* nctemp5395= rp;
int nctemp5397= 1;
int nctemp5399=PtreeSetopexpr(nctemp5395,nctemp5397);
}
struct tree* nctemp5403= sp;
struct tree* nctemp5405=PtreeMvsister(nctemp5403);
int nctemp5400 = (nctemp5405 !=0);
if(nctemp5400)
{
struct tree* nctemp5411= sp;
struct tree* nctemp5413=PtreeMvsister(nctemp5411);
rp =nctemp5413;
}
struct tree* nctemp5418= sp;
struct tree* nctemp5420=PtreeMvsister(nctemp5418);
sp =nctemp5420;
int nctemp5429 = rank + 1;
rank =nctemp5429;
}
int nctemp5430 = (sp !=0);
nctemp5344=nctemp5430;}struct tree* nctemp5435= p;
int nctemp5437= rank;
int nctemp5439=PtreeSetrank(nctemp5435,nctemp5437);
struct tree* nctemp5444= p;
struct tree* nctemp5446=PtreeMvchild(nctemp5444);
sp =nctemp5446;
struct tree* nctemp5451= sp;
struct tree* nctemp5453=PtreeMvsister(nctemp5451);
sp =nctemp5453;
struct tree* nctemp5455= sp;
int nctemp5457=SemStmnt(nctemp5455);
return 1;
}
int SemIfstmnt (struct tree* p)
{
struct tree* q;
q =p;
struct tree* nctemp5467= p;
struct tree* nctemp5469=PtreeMvchild(nctemp5467);
p =nctemp5469;
struct tree* nctemp5471= p;
struct tree* nctemp5473=SemExpr(nctemp5471);
struct tree* nctemp5475= p;
int nctemp5477= 1;
int nctemp5479=PtreeSetopexpr(nctemp5475,nctemp5477);
struct tree* nctemp5484= p;
struct tree* nctemp5486=PtreeMvsister(nctemp5484);
p =nctemp5486;
struct tree* nctemp5488= p;
int nctemp5490=SemStmnt(nctemp5488);
struct tree* nctemp5492= q;
struct tree* nctemp5494= p;
int nctemp5496=SemCopyparallel(nctemp5492,nctemp5494);
struct tree* nctemp5504= p;
struct tree* nctemp5506=PtreeMvsister(nctemp5504);
p =nctemp5506;
int nctemp5497 = (p !=0);
if(nctemp5497)
{
struct tree* nctemp5511= p;
nctempchar1* nctemp5513=PtreeGetname(nctemp5511);
nctempchar1* nctemp5509= nctemp5513;
struct nctempchar1 *nctemp5516;
static struct nctempchar1 nctemp5517 = {{ 5}, (char*)"else\0"};
nctemp5516=&nctemp5517;
nctempchar1* nctemp5514= nctemp5516;
int nctemp5518=LibeStrcmp(nctemp5509,nctemp5514);
if(nctemp5518)
{
struct tree* nctemp5523= p;
struct tree* nctemp5525=PtreeMvchild(nctemp5523);
p =nctemp5525;
struct tree* nctemp5527= p;
int nctemp5529=SemStmnt(nctemp5527);
}
}
return 1;
}
int SemReturnstmnt (struct tree* p)
{
struct tree* sp;
struct symbol* up;
struct tree* nctemp5535= p;
struct tree* nctemp5537=PtreeMvchild(nctemp5535);
sp =nctemp5537;
int nctemp5538 = (sp !=0);
if(nctemp5538)
{
struct tree* nctemp5543= sp;
struct tree* nctemp5545=SemExpr(nctemp5543);
struct tree* nctemp5547= sp;
int nctemp5549= 1;
int nctemp5551=PtreeSetopexpr(nctemp5547,nctemp5549);
struct nctempchar1 *nctemp5558;
static struct nctempchar1 nctemp5559 = {{ 6}, (char*)"#self\0"};
nctemp5558=&nctemp5559;
nctempchar1* nctemp5556= nctemp5558;
struct symbol* nctemp5562=SymGetltp();
struct symbol* nctemp5560= nctemp5562;
struct symbol* nctemp5563=SymLookup(nctemp5556,nctemp5560);
up =nctemp5563;
struct symbol* nctemp5570= up;
nctempchar1* nctemp5572=SymGetfunc(nctemp5570);
nctempchar1* nctemp5568= nctemp5572;
struct symbol* nctemp5573=SymLook(nctemp5568);
up =nctemp5573;
struct tree* nctemp5575= p;
struct symbol* nctemp5579= up;
nctempchar1* nctemp5581=SymGetype(nctemp5579);
nctempchar1* nctemp5577= nctemp5581;
int nctemp5582=PtreeSetype(nctemp5575,nctemp5577);
struct tree* nctemp5584= p;
struct symbol* nctemp5588= up;
nctempchar1* nctemp5590=SymGetstruct(nctemp5588);
nctempchar1* nctemp5586= nctemp5590;
int nctemp5591=PtreeSetstruct(nctemp5584,nctemp5586);
struct tree* nctemp5593= p;
struct symbol* nctemp5597= up;
nctempchar1* nctemp5599=SymGetarray(nctemp5597);
nctempchar1* nctemp5595= nctemp5599;
int nctemp5600=PtreeSetarray(nctemp5593,nctemp5595);
struct tree* nctemp5602= p;
struct tree* nctemp5606= sp;
nctempchar1* nctemp5608=PtreeGetref(nctemp5606);
nctempchar1* nctemp5604= nctemp5608;
int nctemp5609=PtreeSetref(nctemp5602,nctemp5604);
struct tree* nctemp5611= p;
struct symbol* nctemp5615= up;
int nctemp5617=SymGetrank(nctemp5615);
int nctemp5613= nctemp5617;
int nctemp5618=PtreeSetrank(nctemp5611,nctemp5613);
struct tree* nctemp5622= p;
struct tree* nctemp5624= sp;
int nctemp5626=SemComparetype(nctemp5622,nctemp5624);
int nctemp5619 = (nctemp5626 ==0);
if(nctemp5619)
{
struct tree* nctemp5629= p;
struct nctempchar1 *nctemp5633;
static struct nctempchar1 nctemp5634 = {{ 26}, (char*)"Return type is incorrect \0"};
nctemp5633=&nctemp5634;
nctempchar1* nctemp5631= nctemp5633;
struct nctempchar1 *nctemp5637;
static struct nctempchar1 nctemp5638 = {{ 2}, (char*)" \0"};
nctemp5637=&nctemp5638;
nctempchar1* nctemp5635= nctemp5637;
int nctemp5639=SemSerror(nctemp5629,nctemp5631,nctemp5635);
}
}
return 1;
}
int SemStmnt (struct tree* p)
{
struct tree* q;
int parflag;
parflag =0;
q =p;
struct tree* nctemp5652= p;
nctempchar1* nctemp5654=PtreeGetname(nctemp5652);
nctempchar1* nctemp5650= nctemp5654;
struct nctempchar1 *nctemp5657;
static struct nctempchar1 nctemp5658 = {{ 13}, (char*)"declarations\0"};
nctemp5657=&nctemp5658;
nctempchar1* nctemp5655= nctemp5657;
int nctemp5659=LibeStrcmp(nctemp5650,nctemp5655);
if(nctemp5659)
{
struct tree* nctemp5661= p;
struct symbol* nctemp5665=SymGetltp();
struct symbol* nctemp5663= nctemp5665;
int nctemp5666=SemDeclarations(nctemp5661,nctemp5663);
struct tree* nctemp5671= p;
struct tree* nctemp5673=PtreeMvsister(nctemp5671);
p =nctemp5673;
}
int nctemp5674 = (p !=0);
int nctemp5678=nctemp5674;
while(nctemp5678)
{{
struct tree* nctemp5682= p;
nctempchar1* nctemp5684=PtreeGetname(nctemp5682);
nctempchar1* nctemp5680= nctemp5684;
struct nctempchar1 *nctemp5687;
static struct nctempchar1 nctemp5688 = {{ 5}, (char*)"expr\0"};
nctemp5687=&nctemp5688;
nctempchar1* nctemp5685= nctemp5687;
int nctemp5689=LibeStrcmp(nctemp5680,nctemp5685);
if(nctemp5689)
{
struct tree* nctemp5691= p;
struct tree* nctemp5693=SemExpr(nctemp5691);
struct tree* nctemp5695= p;
int nctemp5697= 1;
int nctemp5699=PtreeSetopexpr(nctemp5695,nctemp5697);
}
struct tree* nctemp5703= p;
nctempchar1* nctemp5705=PtreeGetname(nctemp5703);
nctempchar1* nctemp5701= nctemp5705;
struct nctempchar1 *nctemp5708;
static struct nctempchar1 nctemp5709 = {{ 10}, (char*)"compstmnt\0"};
nctemp5708=&nctemp5709;
nctempchar1* nctemp5706= nctemp5708;
int nctemp5710=LibeStrcmp(nctemp5701,nctemp5706);
if(nctemp5710)
{
struct tree* nctemp5712= p;
int nctemp5714=SemCompstmnt(nctemp5712);
}
struct tree* nctemp5718= p;
nctempchar1* nctemp5720=PtreeGetname(nctemp5718);
nctempchar1* nctemp5716= nctemp5720;
struct nctempchar1 *nctemp5723;
static struct nctempchar1 nctemp5724 = {{ 6}, (char*)"while\0"};
nctemp5723=&nctemp5724;
nctempchar1* nctemp5721= nctemp5723;
int nctemp5725=LibeStrcmp(nctemp5716,nctemp5721);
if(nctemp5725)
{
struct tree* nctemp5727= p;
int nctemp5729=SemWhilestmnt(nctemp5727);
}
struct tree* nctemp5733= p;
nctempchar1* nctemp5735=PtreeGetname(nctemp5733);
nctempchar1* nctemp5731= nctemp5735;
struct nctempchar1 *nctemp5738;
static struct nctempchar1 nctemp5739 = {{ 4}, (char*)"for\0"};
nctemp5738=&nctemp5739;
nctempchar1* nctemp5736= nctemp5738;
int nctemp5740=LibeStrcmp(nctemp5731,nctemp5736);
if(nctemp5740)
{
struct tree* nctemp5742= p;
int nctemp5744=SemForstmnt(nctemp5742);
}
struct tree* nctemp5748= p;
nctempchar1* nctemp5750=PtreeGetname(nctemp5748);
nctempchar1* nctemp5746= nctemp5750;
struct nctempchar1 *nctemp5753;
static struct nctempchar1 nctemp5754 = {{ 9}, (char*)"parallel\0"};
nctemp5753=&nctemp5754;
nctempchar1* nctemp5751= nctemp5753;
int nctemp5755=LibeStrcmp(nctemp5746,nctemp5751);
if(nctemp5755)
{
parflag =1;
}
struct tree* nctemp5763= p;
nctempchar1* nctemp5765=PtreeGetname(nctemp5763);
nctempchar1* nctemp5761= nctemp5765;
struct nctempchar1 *nctemp5768;
static struct nctempchar1 nctemp5769 = {{ 3}, (char*)"if\0"};
nctemp5768=&nctemp5769;
nctempchar1* nctemp5766= nctemp5768;
int nctemp5770=LibeStrcmp(nctemp5761,nctemp5766);
if(nctemp5770)
{
struct tree* nctemp5772= p;
int nctemp5774=SemIfstmnt(nctemp5772);
}
struct tree* nctemp5778= p;
nctempchar1* nctemp5780=PtreeGetname(nctemp5778);
nctempchar1* nctemp5776= nctemp5780;
struct nctempchar1 *nctemp5783;
static struct nctempchar1 nctemp5784 = {{ 7}, (char*)"return\0"};
nctemp5783=&nctemp5784;
nctempchar1* nctemp5781= nctemp5783;
int nctemp5785=LibeStrcmp(nctemp5776,nctemp5781);
if(nctemp5785)
{
struct tree* nctemp5787= p;
int nctemp5789=SemReturnstmnt(nctemp5787);
}
struct tree* nctemp5794= p;
struct tree* nctemp5796=PtreeMvsister(nctemp5794);
p =nctemp5796;
}
int nctemp5797 = (p !=0);
nctemp5678=nctemp5797;}int nctemp5801 = (parflag ==1);
if(nctemp5801)
{
struct tree* nctemp5806= q;
struct nctempchar1 *nctemp5810;
static struct nctempchar1 nctemp5811 = {{ 9}, (char*)"parallel\0"};
nctemp5810=&nctemp5811;
nctempchar1* nctemp5808= nctemp5810;
int nctemp5812=PtreeSetparallel(nctemp5806,nctemp5808);
}
return 1;
}
int SemCompstmnt (struct tree* p)
{
struct tree* q;
int parflag;
parflag =0;
q =p;
struct tree* nctemp5826= p;
struct tree* nctemp5828=PtreeMvchild(nctemp5826);
p =nctemp5828;
int nctemp5829 = (p ==0);
if(nctemp5829)
{
return 1;
}
struct tree* nctemp5837= p;
nctempchar1* nctemp5839=PtreeGetname(nctemp5837);
nctempchar1* nctemp5835= nctemp5839;
struct nctempchar1 *nctemp5842;
static struct nctempchar1 nctemp5843 = {{ 13}, (char*)"declarations\0"};
nctemp5842=&nctemp5843;
nctempchar1* nctemp5840= nctemp5842;
int nctemp5844=LibeStrcmp(nctemp5835,nctemp5840);
if(nctemp5844)
{
struct tree* nctemp5848= p;
struct tree* nctemp5850=PtreeMvchild(nctemp5848);
struct tree* nctemp5846= nctemp5850;
struct symbol* nctemp5853=SymGetltp();
struct symbol* nctemp5851= nctemp5853;
int nctemp5854=SemDeclarations(nctemp5846,nctemp5851);
struct tree* nctemp5859= p;
struct tree* nctemp5861=PtreeMvsister(nctemp5859);
p =nctemp5861;
}
int nctemp5862 = (p !=0);
int nctemp5866=nctemp5862;
while(nctemp5866)
{{
struct tree* nctemp5870= p;
nctempchar1* nctemp5872=PtreeGetname(nctemp5870);
nctempchar1* nctemp5868= nctemp5872;
struct nctempchar1 *nctemp5875;
static struct nctempchar1 nctemp5876 = {{ 5}, (char*)"expr\0"};
nctemp5875=&nctemp5876;
nctempchar1* nctemp5873= nctemp5875;
int nctemp5877=LibeStrcmp(nctemp5868,nctemp5873);
if(nctemp5877)
{
struct tree* nctemp5879= p;
struct tree* nctemp5881=SemExpr(nctemp5879);
struct tree* nctemp5883= p;
int nctemp5885= 1;
int nctemp5887=PtreeSetopexpr(nctemp5883,nctemp5885);
}
struct tree* nctemp5891= p;
nctempchar1* nctemp5893=PtreeGetname(nctemp5891);
nctempchar1* nctemp5889= nctemp5893;
struct nctempchar1 *nctemp5896;
static struct nctempchar1 nctemp5897 = {{ 6}, (char*)"while\0"};
nctemp5896=&nctemp5897;
nctempchar1* nctemp5894= nctemp5896;
int nctemp5898=LibeStrcmp(nctemp5889,nctemp5894);
if(nctemp5898)
{
struct tree* nctemp5900= p;
int nctemp5902=SemWhilestmnt(nctemp5900);
}
struct tree* nctemp5906= p;
nctempchar1* nctemp5908=PtreeGetname(nctemp5906);
nctempchar1* nctemp5904= nctemp5908;
struct nctempchar1 *nctemp5911;
static struct nctempchar1 nctemp5912 = {{ 4}, (char*)"for\0"};
nctemp5911=&nctemp5912;
nctempchar1* nctemp5909= nctemp5911;
int nctemp5913=LibeStrcmp(nctemp5904,nctemp5909);
if(nctemp5913)
{
struct tree* nctemp5915= p;
int nctemp5917=SemForstmnt(nctemp5915);
}
struct tree* nctemp5921= p;
nctempchar1* nctemp5923=PtreeGetname(nctemp5921);
nctempchar1* nctemp5919= nctemp5923;
struct nctempchar1 *nctemp5926;
static struct nctempchar1 nctemp5927 = {{ 9}, (char*)"parallel\0"};
nctemp5926=&nctemp5927;
nctempchar1* nctemp5924= nctemp5926;
int nctemp5928=LibeStrcmp(nctemp5919,nctemp5924);
if(nctemp5928)
{
struct tree* nctemp5930= p;
int nctemp5932=SemParallelstmnt(nctemp5930);
struct tree* nctemp5934= p;
struct nctempchar1 *nctemp5938;
static struct nctempchar1 nctemp5939 = {{ 9}, (char*)"parallel\0"};
nctemp5938=&nctemp5939;
nctempchar1* nctemp5936= nctemp5938;
int nctemp5940=PtreeSetparallel(nctemp5934,nctemp5936);
}
struct tree* nctemp5944= p;
nctempchar1* nctemp5946=PtreeGetname(nctemp5944);
nctempchar1* nctemp5942= nctemp5946;
struct nctempchar1 *nctemp5949;
static struct nctempchar1 nctemp5950 = {{ 3}, (char*)"if\0"};
nctemp5949=&nctemp5950;
nctempchar1* nctemp5947= nctemp5949;
int nctemp5951=LibeStrcmp(nctemp5942,nctemp5947);
if(nctemp5951)
{
struct tree* nctemp5953= p;
int nctemp5955=SemIfstmnt(nctemp5953);
}
struct tree* nctemp5959= p;
nctempchar1* nctemp5961=PtreeGetname(nctemp5959);
nctempchar1* nctemp5957= nctemp5961;
struct nctempchar1 *nctemp5964;
static struct nctempchar1 nctemp5965 = {{ 7}, (char*)"return\0"};
nctemp5964=&nctemp5965;
nctempchar1* nctemp5962= nctemp5964;
int nctemp5966=LibeStrcmp(nctemp5957,nctemp5962);
if(nctemp5966)
{
struct tree* nctemp5968= p;
int nctemp5970=SemReturnstmnt(nctemp5968);
}
struct tree* nctemp5974= p;
nctempchar1* nctemp5976=PtreeGetparallel(nctemp5974);
nctempchar1* nctemp5972= nctemp5976;
struct nctempchar1 *nctemp5979;
static struct nctempchar1 nctemp5980 = {{ 9}, (char*)"parallel\0"};
nctemp5979=&nctemp5980;
nctempchar1* nctemp5977= nctemp5979;
int nctemp5981=LibeStrcmp(nctemp5972,nctemp5977);
if(nctemp5981)
{
parflag =1;
}
struct tree* nctemp5990= p;
struct tree* nctemp5992=PtreeMvsister(nctemp5990);
p =nctemp5992;
}
int nctemp5993 = (p !=0);
nctemp5866=nctemp5993;}int nctemp5997 = (parflag ==1);
if(nctemp5997)
{
struct tree* nctemp6002= q;
struct nctempchar1 *nctemp6006;
static struct nctempchar1 nctemp6007 = {{ 9}, (char*)"parallel\0"};
nctemp6006=&nctemp6007;
nctempchar1* nctemp6004= nctemp6006;
int nctemp6008=PtreeSetparallel(nctemp6002,nctemp6004);
}
return 1;
}
