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
;
;
;
;
;
;
;
;
;
int ScanIndent;
int ScanIndentsave;
int ScanIndentinit;
nctempchar1 *ScanText;
nctempchar1 *ScanBuffer;
int ScanLine;
int ScanLinesave;
int ScanFp;
nctempchar1 *ScanFile;
nctempint1 *ScanStack;
int ScanSp;
;
int ScanContline;
int ScanEnd;
int ScanGetline ();
nctempchar1 * ScanGetfile ();
int ScanError (nctempchar1 *s);
int ScanPush (int l);
int ScanPop ();
int ScanInit (nctempchar1 *infile);
int ScanGetch ();
int ScanIncline ();
int ScanUngetch ();
int ScanBlank ();
int ScanWhite ();
int ScanComment ();
int ScanLcomment ();
int ScanFtail (int p);
int ScanLex ();
nctempchar1 * ScanSetfile (nctempchar1 *fname);
int ScanGetok ();
nctempchar1 * ScanGetext ();
int ScanSetline (int lineno);
int ScanGetword (nctempchar1 *ttext);
int CodeCompstmnt (struct tree* p)
;
int CodeStmnt (struct tree* p)
;
nctempchar1 * CodeBinexpr (struct tree* p)
;
nctempchar1 * CodeExpr (struct tree* p)
;
int CodeError (nctempchar1 *s)
{
nctempchar1* nctemp4=ScanGetfile();
nctempchar1* nctemp2= nctemp4;
int nctemp7=ScanGetline();
int nctemp5= nctemp7;
nctempchar1* nctemp8= s;
int nctemp11=ErrError(nctemp2,nctemp5,nctemp8);
return 1;
}
int CodeArch;
int CodeSetarch (int arch)
{
CodeArch =arch;
return 1;
}
int CodeGetarch ()
{
return CodeArch;
}
int CodeLine;
int CodeParallel;
int CodeSetparallel (int flag)
{
CodeParallel =flag;
return flag;
}
int CodeGetparallel ()
{
return CodeParallel;
}
int CodeAddress;
nctempchar1 * CodeItemp (int cntrl)
{
nctempchar1 *s1;
nctempchar1 *s2;
int nctemp31=16;
nctempchar1 *nctemp30;
nctemp30=(nctempchar1*)RunMalloc(sizeof(nctempchar1));
nctemp30->d[0]=16;
nctemp30->a=(char *)RunMalloc(sizeof(char)*nctemp31);
s1=nctemp30;
int nctemp40=16;
nctempchar1 *nctemp39;
nctemp39=(nctempchar1*)RunMalloc(sizeof(nctempchar1));
nctemp39->d[0]=16;
nctemp39->a=(char *)RunMalloc(sizeof(char)*nctemp40);
s2=nctemp39;
struct nctempchar1 *nctemp46;
static struct nctempchar1 nctemp47 = {{ 7}, (char*)"nctemp\0"};
nctemp46=&nctemp47;
nctempchar1* nctemp44= nctemp46;
nctempchar1* nctemp48= s2;
int nctemp51=LibeStrcpy(nctemp44,nctemp48);
int nctemp55= -1;
int nctemp52 = (cntrl ==nctemp55);
if(nctemp52)
{
CodeAddress =0;
}
else{
int nctemp68 = CodeAddress + 1;
CodeAddress =nctemp68;
}
int nctemp69 = (CodeAddress > 999999);
if(nctemp69)
{
struct nctempchar1 *nctemp76;
static struct nctempchar1 nctemp77 = {{ 32}, (char*)"I am running out of temporaries\0"};
nctemp76=&nctemp77;
nctempchar1* nctemp74= nctemp76;
int nctemp78=CodeError(nctemp74);
}
int nctemp80= CodeAddress;
nctempchar1* nctemp82= s1;
int nctemp85=LibeItoa(nctemp80,nctemp82);
nctempchar1* nctemp87= s1;
nctempchar1* nctemp90= s2;
int nctemp93=LibeStrcat(nctemp87,nctemp90);
return s2;
}
int CodeInit ()
{
int nctemp97= 0;
int nctemp99=CodeSetparallel(nctemp97);
CodeLine =0;
int nctemp106= -1;
int nctemp105= nctemp106;
nctempchar1* nctemp107=CodeItemp(nctemp105);
int nctemp109= 1;
int nctemp111=CodeSetarch(nctemp109);
return 1;
}
int CodeFdout;
int CodeSetfdout (int fd)
{
CodeFdout =fd;
return 1;
}
int CodeGetfdout ()
{
return CodeFdout;
}
int CodeDebugflag;
int CodeDebug ()
{
return CodeDebugflag;
}
int CodeEs (struct tree* p,nctempchar1 *s)
{
int fdo;
nctempchar1 *f;
int nctemp124=CodeGetfdout();
fdo =nctemp124;
int nctemp128=CodeDebug();
int nctemp125 = (nctemp128 ==1);
if(nctemp125)
{
int nctemp130 = (p !=0);
if(nctemp130)
{
struct tree* nctemp137= p;
int nctemp139=PtreeGetline(nctemp137);
int nctemp134 = (nctemp139 !=CodeLine);
if(nctemp134)
{
int nctemp142= fdo;
struct nctempchar1 *nctemp146;
static struct nctempchar1 nctemp147 = {{ 3}, (char*)"\n\0"};
nctemp146=&nctemp147;
nctempchar1* nctemp144= nctemp146;
int nctemp148=LibePuts(nctemp142,nctemp144);
int nctemp150= fdo;
struct nctempchar1 *nctemp154;
static struct nctempchar1 nctemp155 = {{ 7}, (char*)"#line \0"};
nctemp154=&nctemp155;
nctempchar1* nctemp152= nctemp154;
int nctemp156=LibePuts(nctemp150,nctemp152);
int nctemp158= fdo;
struct tree* nctemp162= p;
int nctemp164=PtreeGetline(nctemp162);
int nctemp160= nctemp164;
int nctemp165=LibePuti(nctemp158,nctemp160);
int nctemp167= fdo;
struct nctempchar1 *nctemp171;
static struct nctempchar1 nctemp172 = {{ 3}, (char*)"  \0"};
nctemp171=&nctemp172;
nctempchar1* nctemp169= nctemp171;
int nctemp173=LibePuts(nctemp167,nctemp169);
int nctemp175= fdo;
int nctemp177= 34;
int nctemp179=LibePutc(nctemp175,nctemp177);
struct tree* nctemp185= p;
nctempchar1* nctemp187=PtreeGetfile(nctemp185);
f=nctemp187;
int nctemp189= fdo;
nctempchar1* nctemp191= f;
int nctemp194=LibePuts(nctemp189,nctemp191);
int nctemp196= fdo;
int nctemp198= 34;
int nctemp200=LibePutc(nctemp196,nctemp198);
int nctemp202= fdo;
struct nctempchar1 *nctemp206;
static struct nctempchar1 nctemp207 = {{ 3}, (char*)"\n\0"};
nctemp206=&nctemp207;
nctempchar1* nctemp204= nctemp206;
int nctemp208=LibePuts(nctemp202,nctemp204);
struct tree* nctemp213= p;
int nctemp215=PtreeGetline(nctemp213);
CodeLine =nctemp215;
}
}
}
int nctemp217= fdo;
nctempchar1* nctemp219= s;
int nctemp222=LibePuts(nctemp217,nctemp219);
int nctemp224= fdo;
int nctemp226=LibeFlush(nctemp224);
return 1;
}
int CodeEd (int d)
{
int fdo;
int nctemp232=CodeGetfdout();
fdo =nctemp232;
int nctemp234= fdo;
int nctemp236= d;
int nctemp238=LibePuti(nctemp234,nctemp236);
return 1;
}
int CodeEc (int d)
{
int fdo;
int nctemp244=CodeGetfdout();
fdo =nctemp244;
int nctemp246= fdo;
int nctemp248= d;
int nctemp250=LibePutc(nctemp246,nctemp248);
return 1;
}
int CodeEsr (nctempchar1 *s)
{
int i;
int l;
int fdo;
int nctemp256=CodeGetfdout();
fdo =nctemp256;
nctempchar1* nctemp261= s;
int nctemp264=LibeStrlen(nctemp261);
l =nctemp264;
i =1;
int nctemp277 = l - 1;
int nctemp269 = (i < nctemp277);
while(nctemp269){
{
int nctemp279= fdo;
int nctemp286=i;
int nctemp283=(int)(s->a[nctemp286]);
int nctemp281= nctemp283;
int nctemp288=LibePutc(nctemp279,nctemp281);
}
int nctemp297 = i + 1;
i =nctemp297;
int nctemp306 = l - 1;
int nctemp298 = (i < nctemp306);
nctemp269=nctemp298;
}
int nctemp308= fdo;
int nctemp310=LibeFlush(nctemp308);
return 1;
}
int CodeIdeclaration (struct tree* p,struct symbol* tp)
{
struct symbol* nctemp317= tp;
nctempchar1* nctemp319=SymGetype(nctemp317);
nctempchar1* nctemp315= nctemp319;
struct nctempchar1 *nctemp322;
static struct nctempchar1 nctemp323 = {{ 10}, (char*)"rconstant\0"};
nctemp322=&nctemp323;
nctempchar1* nctemp320= nctemp322;
int nctemp324=LibeStrcmp(nctemp315,nctemp320);
int nctemp312 = (nctemp324 ==1);
if(nctemp312)
{
return 1;
}
struct symbol* nctemp332= tp;
nctempchar1* nctemp334=SymGetype(nctemp332);
nctempchar1* nctemp330= nctemp334;
struct nctempchar1 *nctemp337;
static struct nctempchar1 nctemp338 = {{ 10}, (char*)"iconstant\0"};
nctemp337=&nctemp338;
nctempchar1* nctemp335= nctemp337;
int nctemp339=LibeStrcmp(nctemp330,nctemp335);
int nctemp327 = (nctemp339 ==1);
if(nctemp327)
{
return 1;
}
struct symbol* nctemp347= tp;
nctempchar1* nctemp349=SymGetype(nctemp347);
nctempchar1* nctemp345= nctemp349;
struct nctempchar1 *nctemp352;
static struct nctempchar1 nctemp353 = {{ 10}, (char*)"sconstant\0"};
nctemp352=&nctemp353;
nctempchar1* nctemp350= nctemp352;
int nctemp354=LibeStrcmp(nctemp345,nctemp350);
int nctemp342 = (nctemp354 ==1);
if(nctemp342)
{
return 1;
}
struct symbol* nctemp362= tp;
nctempchar1* nctemp364=SymGetstruct(nctemp362);
nctempchar1* nctemp360= nctemp364;
struct nctempchar1 *nctemp367;
static struct nctempchar1 nctemp368 = {{ 10}, (char*)"structdef\0"};
nctemp367=&nctemp368;
nctempchar1* nctemp365= nctemp367;
int nctemp369=LibeStrcmp(nctemp360,nctemp365);
int nctemp357 = (nctemp369 ==1);
if(nctemp357)
{
struct tree* nctemp372= p;
struct nctempchar1 *nctemp376;
static struct nctempchar1 nctemp377 = {{ 8}, (char*)"struct \0"};
nctemp376=&nctemp377;
nctempchar1* nctemp374= nctemp376;
int nctemp378=CodeEs(nctemp372,nctemp374);
}
struct symbol* nctemp384= tp;
nctempchar1* nctemp386=SymGetstruct(nctemp384);
nctempchar1* nctemp382= nctemp386;
struct nctempchar1 *nctemp389;
static struct nctempchar1 nctemp390 = {{ 7}, (char*)"struct\0"};
nctemp389=&nctemp390;
nctempchar1* nctemp387= nctemp389;
int nctemp391=LibeStrcmp(nctemp382,nctemp387);
int nctemp379 = (nctemp391 ==1);
if(nctemp379)
{
struct symbol* nctemp398= tp;
nctempchar1* nctemp400=SymGetarray(nctemp398);
nctempchar1* nctemp396= nctemp400;
struct nctempchar1 *nctemp403;
static struct nctempchar1 nctemp404 = {{ 6}, (char*)"array\0"};
nctemp403=&nctemp404;
nctempchar1* nctemp401= nctemp403;
int nctemp405=LibeStrcmp(nctemp396,nctemp401);
int nctemp393 = (nctemp405 ==1);
if(nctemp393)
{
struct tree* nctemp408= p;
struct nctempchar1 *nctemp412;
static struct nctempchar1 nctemp413 = {{ 14}, (char*)"struct nctemp\0"};
nctemp412=&nctemp413;
nctempchar1* nctemp410= nctemp412;
int nctemp414=CodeEs(nctemp408,nctemp410);
struct tree* nctemp416= p;
struct symbol* nctemp420= tp;
nctempchar1* nctemp422=SymGetype(nctemp420);
nctempchar1* nctemp418= nctemp422;
int nctemp423=CodeEs(nctemp416,nctemp418);
struct symbol* nctemp427= tp;
int nctemp429=SymGetrank(nctemp427);
int nctemp425= nctemp429;
int nctemp430=CodeEd(nctemp425);
struct tree* nctemp432= p;
struct nctempchar1 *nctemp436;
static struct nctempchar1 nctemp437 = {{ 3}, (char*)" *\0"};
nctemp436=&nctemp437;
nctempchar1* nctemp434= nctemp436;
int nctemp438=CodeEs(nctemp432,nctemp434);
struct tree* nctemp440= p;
struct symbol* nctemp444= tp;
nctempchar1* nctemp446=SymGetname(nctemp444);
nctempchar1* nctemp442= nctemp446;
int nctemp447=CodeEs(nctemp440,nctemp442);
}
else{
struct tree* nctemp449= p;
struct nctempchar1 *nctemp453;
static struct nctempchar1 nctemp454 = {{ 8}, (char*)"struct \0"};
nctemp453=&nctemp454;
nctempchar1* nctemp451= nctemp453;
int nctemp455=CodeEs(nctemp449,nctemp451);
struct tree* nctemp457= p;
struct symbol* nctemp461= tp;
nctempchar1* nctemp463=SymGetype(nctemp461);
nctempchar1* nctemp459= nctemp463;
int nctemp464=CodeEs(nctemp457,nctemp459);
struct tree* nctemp466= p;
struct nctempchar1 *nctemp470;
static struct nctempchar1 nctemp471 = {{ 2}, (char*)"*\0"};
nctemp470=&nctemp471;
nctempchar1* nctemp468= nctemp470;
int nctemp472=CodeEs(nctemp466,nctemp468);
struct tree* nctemp474= p;
struct nctempchar1 *nctemp478;
static struct nctempchar1 nctemp479 = {{ 2}, (char*)" \0"};
nctemp478=&nctemp479;
nctempchar1* nctemp476= nctemp478;
int nctemp480=CodeEs(nctemp474,nctemp476);
struct tree* nctemp482= p;
struct symbol* nctemp486= tp;
nctempchar1* nctemp488=SymGetname(nctemp486);
nctempchar1* nctemp484= nctemp488;
int nctemp489=CodeEs(nctemp482,nctemp484);
}
}
else{
struct symbol* nctemp495= tp;
nctempchar1* nctemp497=SymGetarray(nctemp495);
nctempchar1* nctemp493= nctemp497;
struct nctempchar1 *nctemp500;
static struct nctempchar1 nctemp501 = {{ 6}, (char*)"array\0"};
nctemp500=&nctemp501;
nctempchar1* nctemp498= nctemp500;
int nctemp502=LibeStrcmp(nctemp493,nctemp498);
int nctemp490 = (nctemp502 ==1);
if(nctemp490)
{
struct tree* nctemp505= p;
struct nctempchar1 *nctemp509;
static struct nctempchar1 nctemp510 = {{ 7}, (char*)"nctemp\0"};
nctemp509=&nctemp510;
nctempchar1* nctemp507= nctemp509;
int nctemp511=CodeEs(nctemp505,nctemp507);
struct tree* nctemp513= p;
struct symbol* nctemp517= tp;
nctempchar1* nctemp519=SymGetype(nctemp517);
nctempchar1* nctemp515= nctemp519;
int nctemp520=CodeEs(nctemp513,nctemp515);
struct symbol* nctemp524= tp;
int nctemp526=SymGetrank(nctemp524);
int nctemp522= nctemp526;
int nctemp527=CodeEd(nctemp522);
struct tree* nctemp529= p;
struct nctempchar1 *nctemp533;
static struct nctempchar1 nctemp534 = {{ 3}, (char*)" *\0"};
nctemp533=&nctemp534;
nctempchar1* nctemp531= nctemp533;
int nctemp535=CodeEs(nctemp529,nctemp531);
struct tree* nctemp537= p;
struct symbol* nctemp541= tp;
nctempchar1* nctemp543=SymGetname(nctemp541);
nctempchar1* nctemp539= nctemp543;
int nctemp544=CodeEs(nctemp537,nctemp539);
}
else{
struct tree* nctemp546= p;
struct symbol* nctemp550= tp;
nctempchar1* nctemp552=SymGetype(nctemp550);
nctempchar1* nctemp548= nctemp552;
int nctemp553=CodeEs(nctemp546,nctemp548);
struct tree* nctemp555= p;
struct nctempchar1 *nctemp559;
static struct nctempchar1 nctemp560 = {{ 2}, (char*)" \0"};
nctemp559=&nctemp560;
nctempchar1* nctemp557= nctemp559;
int nctemp561=CodeEs(nctemp555,nctemp557);
struct tree* nctemp563= p;
struct symbol* nctemp567= tp;
nctempchar1* nctemp569=SymGetname(nctemp567);
nctempchar1* nctemp565= nctemp569;
int nctemp570=CodeEs(nctemp563,nctemp565);
}
}
return 1;
}
int CodeIdeclarations (struct tree* p,struct symbol* tp)
{
int nctemp572 = (tp !=0);
int nctemp576=nctemp572;
while(nctemp576)
{{
struct tree* nctemp578= p;
struct symbol* nctemp580= tp;
int nctemp582=CodeIdeclaration(nctemp578,nctemp580);
struct tree* nctemp584= p;
struct nctempchar1 *nctemp588;
static struct nctempchar1 nctemp589 = {{ 4}, (char*)";\n\0"};
nctemp588=&nctemp589;
nctempchar1* nctemp586= nctemp588;
int nctemp590=CodeEs(nctemp584,nctemp586);
struct symbol* nctemp595= tp;
struct symbol* nctemp597=SymMvnext(nctemp595);
tp =nctemp597;
}
int nctemp598 = (tp !=0);
nctemp576=nctemp598;}return 1;
}
int CodeStructdefsym (struct tree* p,struct symbol* tp)
{
struct symbol* up;
struct tree* nctemp604= p;
struct nctempchar1 *nctemp608;
static struct nctempchar1 nctemp609 = {{ 8}, (char*)"struct \0"};
nctemp608=&nctemp609;
nctempchar1* nctemp606= nctemp608;
int nctemp610=CodeEs(nctemp604,nctemp606);
struct tree* nctemp612= p;
struct symbol* nctemp616= tp;
nctempchar1* nctemp618=SymGetype(nctemp616);
nctempchar1* nctemp614= nctemp618;
int nctemp619=CodeEs(nctemp612,nctemp614);
struct tree* nctemp621= p;
struct nctempchar1 *nctemp625;
static struct nctempchar1 nctemp626 = {{ 3}, (char*)" {\0"};
nctemp625=&nctemp626;
nctempchar1* nctemp623= nctemp625;
int nctemp627=CodeEs(nctemp621,nctemp623);
struct symbol* nctemp632= tp;
struct symbol* nctemp634=SymGetable(nctemp632);
up =nctemp634;
struct symbol* nctemp639= up;
struct symbol* nctemp641=SymMvnext(nctemp639);
up =nctemp641;
struct tree* nctemp643= p;
struct symbol* nctemp645= up;
int nctemp647=CodeIdeclarations(nctemp643,nctemp645);
struct tree* nctemp649= p;
struct nctempchar1 *nctemp653;
static struct nctempchar1 nctemp654 = {{ 5}, (char*)"};\n\0"};
nctemp653=&nctemp654;
nctempchar1* nctemp651= nctemp653;
int nctemp655=CodeEs(nctemp649,nctemp651);
struct tree* nctemp657= p;
struct nctempchar1 *nctemp661;
static struct nctempchar1 nctemp662 = {{ 16}, (char*)"typedef struct \0"};
nctemp661=&nctemp662;
nctempchar1* nctemp659= nctemp661;
int nctemp663=CodeEs(nctemp657,nctemp659);
struct tree* nctemp665= p;
struct nctempchar1 *nctemp669;
static struct nctempchar1 nctemp670 = {{ 7}, (char*)"nctemp\0"};
nctemp669=&nctemp670;
nctempchar1* nctemp667= nctemp669;
int nctemp671=CodeEs(nctemp665,nctemp667);
struct tree* nctemp673= p;
struct symbol* nctemp677= tp;
nctempchar1* nctemp679=SymGetype(nctemp677);
nctempchar1* nctemp675= nctemp679;
int nctemp680=CodeEs(nctemp673,nctemp675);
struct tree* nctemp682= p;
struct nctempchar1 *nctemp686;
static struct nctempchar1 nctemp687 = {{ 2}, (char*)"1\0"};
nctemp686=&nctemp687;
nctempchar1* nctemp684= nctemp686;
int nctemp688=CodeEs(nctemp682,nctemp684);
struct tree* nctemp690= p;
struct nctempchar1 *nctemp694;
static struct nctempchar1 nctemp695 = {{ 20}, (char*)" {int d[1]; struct \0"};
nctemp694=&nctemp695;
nctempchar1* nctemp692= nctemp694;
int nctemp696=CodeEs(nctemp690,nctemp692);
struct tree* nctemp698= p;
struct symbol* nctemp702= tp;
nctempchar1* nctemp704=SymGetype(nctemp702);
nctempchar1* nctemp700= nctemp704;
int nctemp705=CodeEs(nctemp698,nctemp700);
struct tree* nctemp707= p;
struct nctempchar1 *nctemp711;
static struct nctempchar1 nctemp712 = {{ 6}, (char*)" *a; \0"};
nctemp711=&nctemp712;
nctempchar1* nctemp709= nctemp711;
int nctemp713=CodeEs(nctemp707,nctemp709);
struct tree* nctemp715= p;
struct nctempchar1 *nctemp719;
static struct nctempchar1 nctemp720 = {{ 3}, (char*)"} \0"};
nctemp719=&nctemp720;
nctempchar1* nctemp717= nctemp719;
int nctemp721=CodeEs(nctemp715,nctemp717);
struct tree* nctemp723= p;
struct nctempchar1 *nctemp727;
static struct nctempchar1 nctemp728 = {{ 7}, (char*)"nctemp\0"};
nctemp727=&nctemp728;
nctempchar1* nctemp725= nctemp727;
int nctemp729=CodeEs(nctemp723,nctemp725);
struct tree* nctemp731= p;
struct symbol* nctemp735= tp;
nctempchar1* nctemp737=SymGetype(nctemp735);
nctempchar1* nctemp733= nctemp737;
int nctemp738=CodeEs(nctemp731,nctemp733);
struct tree* nctemp740= p;
struct nctempchar1 *nctemp744;
static struct nctempchar1 nctemp745 = {{ 2}, (char*)"1\0"};
nctemp744=&nctemp745;
nctempchar1* nctemp742= nctemp744;
int nctemp746=CodeEs(nctemp740,nctemp742);
struct tree* nctemp748= p;
struct nctempchar1 *nctemp752;
static struct nctempchar1 nctemp753 = {{ 4}, (char*)";\n\0"};
nctemp752=&nctemp753;
nctempchar1* nctemp750= nctemp752;
int nctemp754=CodeEs(nctemp748,nctemp750);
struct tree* nctemp756= p;
struct nctempchar1 *nctemp760;
static struct nctempchar1 nctemp761 = {{ 8}, (char*)"struct \0"};
nctemp760=&nctemp761;
nctempchar1* nctemp758= nctemp760;
int nctemp762=CodeEs(nctemp756,nctemp758);
struct tree* nctemp764= p;
struct nctempchar1 *nctemp768;
static struct nctempchar1 nctemp769 = {{ 7}, (char*)"nctemp\0"};
nctemp768=&nctemp769;
nctempchar1* nctemp766= nctemp768;
int nctemp770=CodeEs(nctemp764,nctemp766);
struct tree* nctemp772= p;
struct symbol* nctemp776= tp;
nctempchar1* nctemp778=SymGetype(nctemp776);
nctempchar1* nctemp774= nctemp778;
int nctemp779=CodeEs(nctemp772,nctemp774);
struct tree* nctemp781= p;
struct nctempchar1 *nctemp785;
static struct nctempchar1 nctemp786 = {{ 2}, (char*)"2\0"};
nctemp785=&nctemp786;
nctempchar1* nctemp783= nctemp785;
int nctemp787=CodeEs(nctemp781,nctemp783);
struct tree* nctemp789= p;
struct nctempchar1 *nctemp793;
static struct nctempchar1 nctemp794 = {{ 20}, (char*)" {int d[2]; struct \0"};
nctemp793=&nctemp794;
nctempchar1* nctemp791= nctemp793;
int nctemp795=CodeEs(nctemp789,nctemp791);
struct tree* nctemp797= p;
struct symbol* nctemp801= tp;
nctempchar1* nctemp803=SymGetype(nctemp801);
nctempchar1* nctemp799= nctemp803;
int nctemp804=CodeEs(nctemp797,nctemp799);
struct tree* nctemp806= p;
struct nctempchar1 *nctemp810;
static struct nctempchar1 nctemp811 = {{ 6}, (char*)" *a; \0"};
nctemp810=&nctemp811;
nctempchar1* nctemp808= nctemp810;
int nctemp812=CodeEs(nctemp806,nctemp808);
struct tree* nctemp814= p;
struct nctempchar1 *nctemp818;
static struct nctempchar1 nctemp819 = {{ 3}, (char*)"} \0"};
nctemp818=&nctemp819;
nctempchar1* nctemp816= nctemp818;
int nctemp820=CodeEs(nctemp814,nctemp816);
struct tree* nctemp822= p;
struct nctempchar1 *nctemp826;
static struct nctempchar1 nctemp827 = {{ 4}, (char*)";\n\0"};
nctemp826=&nctemp827;
nctempchar1* nctemp824= nctemp826;
int nctemp828=CodeEs(nctemp822,nctemp824);
struct tree* nctemp830= p;
struct nctempchar1 *nctemp834;
static struct nctempchar1 nctemp835 = {{ 8}, (char*)"struct \0"};
nctemp834=&nctemp835;
nctempchar1* nctemp832= nctemp834;
int nctemp836=CodeEs(nctemp830,nctemp832);
struct tree* nctemp838= p;
struct nctempchar1 *nctemp842;
static struct nctempchar1 nctemp843 = {{ 7}, (char*)"nctemp\0"};
nctemp842=&nctemp843;
nctempchar1* nctemp840= nctemp842;
int nctemp844=CodeEs(nctemp838,nctemp840);
struct tree* nctemp846= p;
struct symbol* nctemp850= tp;
nctempchar1* nctemp852=SymGetype(nctemp850);
nctempchar1* nctemp848= nctemp852;
int nctemp853=CodeEs(nctemp846,nctemp848);
struct tree* nctemp855= p;
struct nctempchar1 *nctemp859;
static struct nctempchar1 nctemp860 = {{ 2}, (char*)"3\0"};
nctemp859=&nctemp860;
nctempchar1* nctemp857= nctemp859;
int nctemp861=CodeEs(nctemp855,nctemp857);
struct tree* nctemp863= p;
struct nctempchar1 *nctemp867;
static struct nctempchar1 nctemp868 = {{ 20}, (char*)" {int d[3]; struct \0"};
nctemp867=&nctemp868;
nctempchar1* nctemp865= nctemp867;
int nctemp869=CodeEs(nctemp863,nctemp865);
struct tree* nctemp871= p;
struct symbol* nctemp875= tp;
nctempchar1* nctemp877=SymGetype(nctemp875);
nctempchar1* nctemp873= nctemp877;
int nctemp878=CodeEs(nctemp871,nctemp873);
struct tree* nctemp880= p;
struct nctempchar1 *nctemp884;
static struct nctempchar1 nctemp885 = {{ 6}, (char*)" *a; \0"};
nctemp884=&nctemp885;
nctempchar1* nctemp882= nctemp884;
int nctemp886=CodeEs(nctemp880,nctemp882);
struct tree* nctemp888= p;
struct nctempchar1 *nctemp892;
static struct nctempchar1 nctemp893 = {{ 3}, (char*)"} \0"};
nctemp892=&nctemp893;
nctempchar1* nctemp890= nctemp892;
int nctemp894=CodeEs(nctemp888,nctemp890);
struct tree* nctemp896= p;
struct nctempchar1 *nctemp900;
static struct nctempchar1 nctemp901 = {{ 4}, (char*)";\n\0"};
nctemp900=&nctemp901;
nctempchar1* nctemp898= nctemp900;
int nctemp902=CodeEs(nctemp896,nctemp898);
struct tree* nctemp904= p;
struct nctempchar1 *nctemp908;
static struct nctempchar1 nctemp909 = {{ 8}, (char*)"struct \0"};
nctemp908=&nctemp909;
nctempchar1* nctemp906= nctemp908;
int nctemp910=CodeEs(nctemp904,nctemp906);
struct tree* nctemp912= p;
struct nctempchar1 *nctemp916;
static struct nctempchar1 nctemp917 = {{ 7}, (char*)"nctemp\0"};
nctemp916=&nctemp917;
nctempchar1* nctemp914= nctemp916;
int nctemp918=CodeEs(nctemp912,nctemp914);
struct tree* nctemp920= p;
struct symbol* nctemp924= tp;
nctempchar1* nctemp926=SymGetype(nctemp924);
nctempchar1* nctemp922= nctemp926;
int nctemp927=CodeEs(nctemp920,nctemp922);
struct tree* nctemp929= p;
struct nctempchar1 *nctemp933;
static struct nctempchar1 nctemp934 = {{ 2}, (char*)"4\0"};
nctemp933=&nctemp934;
nctempchar1* nctemp931= nctemp933;
int nctemp935=CodeEs(nctemp929,nctemp931);
struct tree* nctemp937= p;
struct nctempchar1 *nctemp941;
static struct nctempchar1 nctemp942 = {{ 20}, (char*)" {int d[4]; struct \0"};
nctemp941=&nctemp942;
nctempchar1* nctemp939= nctemp941;
int nctemp943=CodeEs(nctemp937,nctemp939);
struct tree* nctemp945= p;
struct symbol* nctemp949= tp;
nctempchar1* nctemp951=SymGetype(nctemp949);
nctempchar1* nctemp947= nctemp951;
int nctemp952=CodeEs(nctemp945,nctemp947);
struct tree* nctemp954= p;
struct nctempchar1 *nctemp958;
static struct nctempchar1 nctemp959 = {{ 6}, (char*)" *a; \0"};
nctemp958=&nctemp959;
nctempchar1* nctemp956= nctemp958;
int nctemp960=CodeEs(nctemp954,nctemp956);
struct tree* nctemp962= p;
struct nctempchar1 *nctemp966;
static struct nctempchar1 nctemp967 = {{ 3}, (char*)"} \0"};
nctemp966=&nctemp967;
nctempchar1* nctemp964= nctemp966;
int nctemp968=CodeEs(nctemp962,nctemp964);
struct tree* nctemp970= p;
struct nctempchar1 *nctemp974;
static struct nctempchar1 nctemp975 = {{ 4}, (char*)";\n\0"};
nctemp974=&nctemp975;
nctempchar1* nctemp972= nctemp974;
int nctemp976=CodeEs(nctemp970,nctemp972);
return 1;
}
int CodeFdefcpusym (struct tree* p,struct symbol* tp)
{
struct symbol* nctemp983= tp;
nctempchar1* nctemp985=SymGetstruct(nctemp983);
nctempchar1* nctemp981= nctemp985;
struct nctempchar1 *nctemp988;
static struct nctempchar1 nctemp989 = {{ 7}, (char*)"struct\0"};
nctemp988=&nctemp989;
nctempchar1* nctemp986= nctemp988;
int nctemp990=LibeStrcmp(nctemp981,nctemp986);
int nctemp978 = (nctemp990 ==1);
if(nctemp978)
{
struct tree* nctemp993= p;
struct nctempchar1 *nctemp997;
static struct nctempchar1 nctemp998 = {{ 8}, (char*)"struct \0"};
nctemp997=&nctemp998;
nctempchar1* nctemp995= nctemp997;
int nctemp999=CodeEs(nctemp993,nctemp995);
}
struct symbol* nctemp1005= tp;
nctempchar1* nctemp1007=SymGetarray(nctemp1005);
nctempchar1* nctemp1003= nctemp1007;
struct nctempchar1 *nctemp1010;
static struct nctempchar1 nctemp1011 = {{ 6}, (char*)"array\0"};
nctemp1010=&nctemp1011;
nctempchar1* nctemp1008= nctemp1010;
int nctemp1012=LibeStrcmp(nctemp1003,nctemp1008);
int nctemp1000 = (nctemp1012 ==1);
if(nctemp1000)
{
struct tree* nctemp1015= p;
struct nctempchar1 *nctemp1019;
static struct nctempchar1 nctemp1020 = {{ 7}, (char*)"nctemp\0"};
nctemp1019=&nctemp1020;
nctempchar1* nctemp1017= nctemp1019;
int nctemp1021=CodeEs(nctemp1015,nctemp1017);
}
struct tree* nctemp1023= p;
struct symbol* nctemp1027= tp;
nctempchar1* nctemp1029=SymGetype(nctemp1027);
nctempchar1* nctemp1025= nctemp1029;
int nctemp1030=CodeEs(nctemp1023,nctemp1025);
struct symbol* nctemp1036= tp;
nctempchar1* nctemp1038=SymGetarray(nctemp1036);
nctempchar1* nctemp1034= nctemp1038;
struct nctempchar1 *nctemp1041;
static struct nctempchar1 nctemp1042 = {{ 6}, (char*)"array\0"};
nctemp1041=&nctemp1042;
nctempchar1* nctemp1039= nctemp1041;
int nctemp1043=LibeStrcmp(nctemp1034,nctemp1039);
int nctemp1031 = (nctemp1043 ==1);
if(nctemp1031)
{
struct symbol* nctemp1048= tp;
int nctemp1050=SymGetrank(nctemp1048);
int nctemp1046= nctemp1050;
int nctemp1051=CodeEd(nctemp1046);
struct tree* nctemp1053= p;
struct nctempchar1 *nctemp1057;
static struct nctempchar1 nctemp1058 = {{ 3}, (char*)" *\0"};
nctemp1057=&nctemp1058;
nctempchar1* nctemp1055= nctemp1057;
int nctemp1059=CodeEs(nctemp1053,nctemp1055);
}
struct symbol* nctemp1065= tp;
nctempchar1* nctemp1067=SymGetstruct(nctemp1065);
nctempchar1* nctemp1063= nctemp1067;
struct nctempchar1 *nctemp1070;
static struct nctempchar1 nctemp1071 = {{ 7}, (char*)"struct\0"};
nctemp1070=&nctemp1071;
nctempchar1* nctemp1068= nctemp1070;
int nctemp1072=LibeStrcmp(nctemp1063,nctemp1068);
int nctemp1060 = (nctemp1072 ==1);
if(nctemp1060)
{
struct tree* nctemp1075= p;
struct nctempchar1 *nctemp1079;
static struct nctempchar1 nctemp1080 = {{ 2}, (char*)"*\0"};
nctemp1079=&nctemp1080;
nctempchar1* nctemp1077= nctemp1079;
int nctemp1081=CodeEs(nctemp1075,nctemp1077);
}
struct tree* nctemp1083= p;
struct nctempchar1 *nctemp1087;
static struct nctempchar1 nctemp1088 = {{ 2}, (char*)" \0"};
nctemp1087=&nctemp1088;
nctempchar1* nctemp1085= nctemp1087;
int nctemp1089=CodeEs(nctemp1083,nctemp1085);
struct tree* nctemp1091= p;
struct symbol* nctemp1095= tp;
nctempchar1* nctemp1097=SymGetname(nctemp1095);
nctempchar1* nctemp1093= nctemp1097;
int nctemp1098=CodeEs(nctemp1091,nctemp1093);
struct tree* nctemp1100= p;
struct nctempchar1 *nctemp1104;
static struct nctempchar1 nctemp1105 = {{ 3}, (char*)" (\0"};
nctemp1104=&nctemp1105;
nctempchar1* nctemp1102= nctemp1104;
int nctemp1106=CodeEs(nctemp1100,nctemp1102);
struct symbol* nctemp1111= tp;
struct symbol* nctemp1113=SymGetable(nctemp1111);
tp =nctemp1113;
int nctemp1114 = (tp ==0);
if(nctemp1114)
{
struct tree* nctemp1119= p;
struct nctempchar1 *nctemp1123;
static struct nctempchar1 nctemp1124 = {{ 5}, (char*)");\n\0"};
nctemp1123=&nctemp1124;
nctempchar1* nctemp1121= nctemp1123;
int nctemp1125=CodeEs(nctemp1119,nctemp1121);
return 1;
}
struct symbol* nctemp1131= tp;
struct symbol* nctemp1133=SymMvnext(nctemp1131);
tp =nctemp1133;
struct symbol* nctemp1138= tp;
struct symbol* nctemp1140=SymGetable(nctemp1138);
tp =nctemp1140;
int nctemp1141 = (tp ==0);
if(nctemp1141)
{
return 1;
}
struct symbol* nctemp1150= tp;
struct symbol* nctemp1152=SymMvnext(nctemp1150);
tp =nctemp1152;
int nctemp1153 = (tp !=0);
int nctemp1157=nctemp1153;
while(nctemp1157)
{{
struct tree* nctemp1159= p;
struct symbol* nctemp1161= tp;
int nctemp1163=CodeIdeclaration(nctemp1159,nctemp1161);
struct symbol* nctemp1168= tp;
struct symbol* nctemp1170=SymMvnext(nctemp1168);
tp =nctemp1170;
int nctemp1171 = (tp !=0);
if(nctemp1171)
{
struct tree* nctemp1176= p;
struct nctempchar1 *nctemp1180;
static struct nctempchar1 nctemp1181 = {{ 2}, (char*)",\0"};
nctemp1180=&nctemp1181;
nctempchar1* nctemp1178= nctemp1180;
int nctemp1182=CodeEs(nctemp1176,nctemp1178);
}
else{
struct tree* nctemp1184= p;
struct nctempchar1 *nctemp1188;
static struct nctempchar1 nctemp1189 = {{ 5}, (char*)");\n\0"};
nctemp1188=&nctemp1189;
nctempchar1* nctemp1186= nctemp1188;
int nctemp1190=CodeEs(nctemp1184,nctemp1186);
}
}
int nctemp1191 = (tp !=0);
nctemp1157=nctemp1191;}return 1;
}
int CodeImport (struct tree* p,struct symbol* tp)
{
nctempchar1 *module;
struct tree* nctemp1201= p;
nctempchar1* nctemp1203=PtreeGetdef(nctemp1201);
module=nctemp1203;
struct symbol* nctemp1208= tp;
struct symbol* nctemp1210=SymMvnext(nctemp1208);
tp =nctemp1210;
int nctemp1211 = (tp !=0);
int nctemp1215=nctemp1211;
while(nctemp1215)
{{
struct symbol* nctemp1221= tp;
nctempchar1* nctemp1223=SymGetmodule(nctemp1221);
nctempchar1* nctemp1219= nctemp1223;
nctempchar1* nctemp1224= module;
int nctemp1227=LibeStrcmp(nctemp1219,nctemp1224);
int nctemp1216 = (nctemp1227 ==1);
if(nctemp1216)
{
struct symbol* nctemp1234= tp;
nctempchar1* nctemp1236=SymGetstruct(nctemp1234);
nctempchar1* nctemp1232= nctemp1236;
struct nctempchar1 *nctemp1239;
static struct nctempchar1 nctemp1240 = {{ 10}, (char*)"structdef\0"};
nctemp1239=&nctemp1240;
nctempchar1* nctemp1237= nctemp1239;
int nctemp1241=LibeStrcmp(nctemp1232,nctemp1237);
int nctemp1229 = (nctemp1241 ==1);
if(nctemp1229)
{
struct tree* nctemp1244= p;
struct symbol* nctemp1246= tp;
int nctemp1248=CodeStructdefsym(nctemp1244,nctemp1246);
}
else{
struct symbol* nctemp1254= tp;
nctempchar1* nctemp1256=SymGetfunc(nctemp1254);
nctempchar1* nctemp1252= nctemp1256;
struct nctempchar1 *nctemp1259;
static struct nctempchar1 nctemp1260 = {{ 5}, (char*)"fdef\0"};
nctemp1259=&nctemp1260;
nctempchar1* nctemp1257= nctemp1259;
int nctemp1261=LibeStrcmp(nctemp1252,nctemp1257);
int nctemp1249 = (nctemp1261 ==1);
if(nctemp1249)
{
struct tree* nctemp1264= p;
struct symbol* nctemp1266= tp;
int nctemp1268=CodeFdefcpusym(nctemp1264,nctemp1266);
}
else{
struct tree* nctemp1270= p;
struct symbol* nctemp1272= tp;
int nctemp1274=CodeIdeclaration(nctemp1270,nctemp1272);
struct tree* nctemp1276= p;
struct nctempchar1 *nctemp1280;
static struct nctempchar1 nctemp1281 = {{ 4}, (char*)";\n\0"};
nctemp1280=&nctemp1281;
nctempchar1* nctemp1278= nctemp1280;
int nctemp1282=CodeEs(nctemp1276,nctemp1278);
}
}
}
struct symbol* nctemp1287= tp;
struct symbol* nctemp1289=SymMvnext(nctemp1287);
tp =nctemp1289;
}
int nctemp1290 = (tp !=0);
nctemp1215=nctemp1290;}return 1;
}
int CodeStructdef (struct tree* p,struct symbol* tp)
;
int CodeFdef (struct tree* p)
;
int CodeFdefcpu (struct tree* p)
{
struct symbol* tp;
int noarg;
int forw;
noarg =0;
forw =0;
struct tree* nctemp1308= p;
nctempchar1* nctemp1310=PtreeGetarray(nctemp1308);
nctempchar1* nctemp1306= nctemp1310;
struct nctempchar1 *nctemp1313;
static struct nctempchar1 nctemp1314 = {{ 6}, (char*)"array\0"};
nctemp1313=&nctemp1314;
nctempchar1* nctemp1311= nctemp1313;
int nctemp1315=LibeStrcmp(nctemp1306,nctemp1311);
int nctemp1303 = (nctemp1315 ==1);
if(nctemp1303)
{
struct tree* nctemp1321= p;
struct tree* nctemp1323=PtreeMvchild(nctemp1321);
p =nctemp1323;
struct tree* nctemp1328= p;
struct tree* nctemp1330=PtreeMvsister(nctemp1328);
p =nctemp1330;
struct tree* nctemp1336= p;
nctempchar1* nctemp1338=PtreeGetforw(nctemp1336);
nctempchar1* nctemp1334= nctemp1338;
struct nctempchar1 *nctemp1341;
static struct nctempchar1 nctemp1342 = {{ 5}, (char*)"forw\0"};
nctemp1341=&nctemp1342;
nctempchar1* nctemp1339= nctemp1341;
int nctemp1343=LibeStrcmp(nctemp1334,nctemp1339);
int nctemp1331 = (nctemp1343 ==1);
if(nctemp1331)
{
forw =1;
}
}
else{
struct tree* nctemp1353= p;
struct tree* nctemp1355=PtreeMvchild(nctemp1353);
p =nctemp1355;
struct tree* nctemp1361= p;
nctempchar1* nctemp1363=PtreeGetforw(nctemp1361);
nctempchar1* nctemp1359= nctemp1363;
struct nctempchar1 *nctemp1366;
static struct nctempchar1 nctemp1367 = {{ 5}, (char*)"forw\0"};
nctemp1366=&nctemp1367;
nctempchar1* nctemp1364= nctemp1366;
int nctemp1368=LibeStrcmp(nctemp1359,nctemp1364);
int nctemp1356 = (nctemp1368 ==1);
if(nctemp1356)
{
forw =1;
}
}
struct tree* nctemp1380= p;
nctempchar1* nctemp1382=PtreeGetdef(nctemp1380);
nctempchar1* nctemp1378= nctemp1382;
struct symbol* nctemp1385=SymGetetp();
struct symbol* nctemp1383= nctemp1385;
struct symbol* nctemp1386=SymLookup(nctemp1378,nctemp1383);
tp =nctemp1386;
struct symbol* nctemp1392= tp;
nctempchar1* nctemp1394=SymGetstruct(nctemp1392);
nctempchar1* nctemp1390= nctemp1394;
struct nctempchar1 *nctemp1397;
static struct nctempchar1 nctemp1398 = {{ 7}, (char*)"struct\0"};
nctemp1397=&nctemp1398;
nctempchar1* nctemp1395= nctemp1397;
int nctemp1399=LibeStrcmp(nctemp1390,nctemp1395);
int nctemp1387 = (nctemp1399 ==1);
if(nctemp1387)
{
struct tree* nctemp1402= p;
struct nctempchar1 *nctemp1406;
static struct nctempchar1 nctemp1407 = {{ 8}, (char*)"struct \0"};
nctemp1406=&nctemp1407;
nctempchar1* nctemp1404= nctemp1406;
int nctemp1408=CodeEs(nctemp1402,nctemp1404);
}
struct symbol* nctemp1414= tp;
nctempchar1* nctemp1416=SymGetarray(nctemp1414);
nctempchar1* nctemp1412= nctemp1416;
struct nctempchar1 *nctemp1419;
static struct nctempchar1 nctemp1420 = {{ 6}, (char*)"array\0"};
nctemp1419=&nctemp1420;
nctempchar1* nctemp1417= nctemp1419;
int nctemp1421=LibeStrcmp(nctemp1412,nctemp1417);
int nctemp1409 = (nctemp1421 ==1);
if(nctemp1409)
{
struct tree* nctemp1424= p;
struct nctempchar1 *nctemp1428;
static struct nctempchar1 nctemp1429 = {{ 7}, (char*)"nctemp\0"};
nctemp1428=&nctemp1429;
nctempchar1* nctemp1426= nctemp1428;
int nctemp1430=CodeEs(nctemp1424,nctemp1426);
}
struct tree* nctemp1432= p;
struct symbol* nctemp1436= tp;
nctempchar1* nctemp1438=SymGetype(nctemp1436);
nctempchar1* nctemp1434= nctemp1438;
int nctemp1439=CodeEs(nctemp1432,nctemp1434);
struct symbol* nctemp1445= tp;
nctempchar1* nctemp1447=SymGetarray(nctemp1445);
nctempchar1* nctemp1443= nctemp1447;
struct nctempchar1 *nctemp1450;
static struct nctempchar1 nctemp1451 = {{ 6}, (char*)"array\0"};
nctemp1450=&nctemp1451;
nctempchar1* nctemp1448= nctemp1450;
int nctemp1452=LibeStrcmp(nctemp1443,nctemp1448);
int nctemp1440 = (nctemp1452 ==1);
if(nctemp1440)
{
struct symbol* nctemp1457= tp;
int nctemp1459=SymGetrank(nctemp1457);
int nctemp1455= nctemp1459;
int nctemp1460=CodeEd(nctemp1455);
struct tree* nctemp1462= p;
struct nctempchar1 *nctemp1466;
static struct nctempchar1 nctemp1467 = {{ 3}, (char*)" *\0"};
nctemp1466=&nctemp1467;
nctempchar1* nctemp1464= nctemp1466;
int nctemp1468=CodeEs(nctemp1462,nctemp1464);
}
struct symbol* nctemp1474= tp;
nctempchar1* nctemp1476=SymGetstruct(nctemp1474);
nctempchar1* nctemp1472= nctemp1476;
struct nctempchar1 *nctemp1479;
static struct nctempchar1 nctemp1480 = {{ 7}, (char*)"struct\0"};
nctemp1479=&nctemp1480;
nctempchar1* nctemp1477= nctemp1479;
int nctemp1481=LibeStrcmp(nctemp1472,nctemp1477);
int nctemp1469 = (nctemp1481 ==1);
if(nctemp1469)
{
struct tree* nctemp1484= p;
struct nctempchar1 *nctemp1488;
static struct nctempchar1 nctemp1489 = {{ 2}, (char*)"*\0"};
nctemp1488=&nctemp1489;
nctempchar1* nctemp1486= nctemp1488;
int nctemp1490=CodeEs(nctemp1484,nctemp1486);
}
struct tree* nctemp1492= p;
struct nctempchar1 *nctemp1496;
static struct nctempchar1 nctemp1497 = {{ 2}, (char*)" \0"};
nctemp1496=&nctemp1497;
nctempchar1* nctemp1494= nctemp1496;
int nctemp1498=CodeEs(nctemp1492,nctemp1494);
struct tree* nctemp1500= p;
struct symbol* nctemp1504= tp;
nctempchar1* nctemp1506=SymGetname(nctemp1504);
nctempchar1* nctemp1502= nctemp1506;
int nctemp1507=CodeEs(nctemp1500,nctemp1502);
struct tree* nctemp1509= p;
struct nctempchar1 *nctemp1513;
static struct nctempchar1 nctemp1514 = {{ 3}, (char*)" (\0"};
nctemp1513=&nctemp1514;
nctempchar1* nctemp1511= nctemp1513;
int nctemp1515=CodeEs(nctemp1509,nctemp1511);
struct tree* nctemp1519= p;
struct tree* nctemp1521=PtreeMvchild(nctemp1519);
int nctemp1516 = (nctemp1521 !=0);
if(nctemp1516)
{
struct tree* nctemp1527= p;
struct tree* nctemp1529=PtreeMvchild(nctemp1527);
p =nctemp1529;
}
struct tree* nctemp1535= p;
nctempchar1* nctemp1537=PtreeGetname(nctemp1535);
nctempchar1* nctemp1533= nctemp1537;
struct nctempchar1 *nctemp1540;
static struct nctempchar1 nctemp1541 = {{ 8}, (char*)"arglist\0"};
nctemp1540=&nctemp1541;
nctempchar1* nctemp1538= nctemp1540;
int nctemp1542=LibeStrcmp(nctemp1533,nctemp1538);
int nctemp1530 = (nctemp1542 ==1);
if(nctemp1530)
{
struct symbol* nctemp1548= tp;
struct symbol* nctemp1550=SymGetable(nctemp1548);
tp =nctemp1550;
struct nctempchar1 *nctemp1557;
static struct nctempchar1 nctemp1558 = {{ 9}, (char*)"#arglist\0"};
nctemp1557=&nctemp1558;
nctempchar1* nctemp1555= nctemp1557;
struct symbol* nctemp1559= tp;
struct symbol* nctemp1561=SymLookup(nctemp1555,nctemp1559);
tp =nctemp1561;
struct symbol* nctemp1566= tp;
struct symbol* nctemp1568=SymGetable(nctemp1566);
tp =nctemp1568;
struct symbol* nctemp1576= tp;
struct symbol* nctemp1578=SymMvnext(nctemp1576);
tp =nctemp1578;
int nctemp1569 = (tp !=0);
int nctemp1580=nctemp1569;
while(nctemp1580)
{{
struct tree* nctemp1582= p;
struct symbol* nctemp1584= tp;
int nctemp1586=CodeIdeclaration(nctemp1582,nctemp1584);
struct symbol* nctemp1590= tp;
struct symbol* nctemp1592=SymMvnext(nctemp1590);
int nctemp1587 = (nctemp1592 !=0);
if(nctemp1587)
{
struct tree* nctemp1595= p;
struct nctempchar1 *nctemp1599;
static struct nctempchar1 nctemp1600 = {{ 2}, (char*)",\0"};
nctemp1599=&nctemp1600;
nctempchar1* nctemp1597= nctemp1599;
int nctemp1601=CodeEs(nctemp1595,nctemp1597);
}
int nctemp1610 = noarg + 1;
noarg =nctemp1610;
}
struct symbol* nctemp1618= tp;
struct symbol* nctemp1620=SymMvnext(nctemp1618);
tp =nctemp1620;
int nctemp1611 = (tp !=0);
nctemp1580=nctemp1611;}}
struct tree* nctemp1623= p;
struct nctempchar1 *nctemp1627;
static struct nctempchar1 nctemp1628 = {{ 4}, (char*)")\n\0"};
nctemp1627=&nctemp1628;
nctempchar1* nctemp1625= nctemp1627;
int nctemp1629=CodeEs(nctemp1623,nctemp1625);
int nctemp1630 = (forw ==1);
if(nctemp1630)
{
struct tree* nctemp1635= p;
struct nctempchar1 *nctemp1639;
static struct nctempchar1 nctemp1640 = {{ 4}, (char*)";\n\0"};
nctemp1639=&nctemp1640;
nctempchar1* nctemp1637= nctemp1639;
int nctemp1641=CodeEs(nctemp1635,nctemp1637);
return 1;
}
struct tree* nctemp1646= p;
struct tree* nctemp1648=PtreeMvsister(nctemp1646);
int nctemp1643 = (nctemp1648 !=0);
if(nctemp1643)
{
struct tree* nctemp1653= p;
struct tree* nctemp1655=PtreeMvsister(nctemp1653);
struct tree* nctemp1651= nctemp1655;
int nctemp1656=CodeCompstmnt(nctemp1651);
}
else{
struct tree* nctemp1658= p;
int nctemp1660=CodeCompstmnt(nctemp1658);
}
return 1;
}
int CodeFdeclkernel (struct tree* p)
{
struct symbol* tp;
int noarg;
noarg =0;
struct tree* nctemp1672= p;
nctempchar1* nctemp1674=PtreeGetdef(nctemp1672);
nctempchar1* nctemp1670= nctemp1674;
struct symbol* nctemp1677=SymGetetp();
struct symbol* nctemp1675= nctemp1677;
struct symbol* nctemp1678=SymLookup(nctemp1670,nctemp1675);
tp =nctemp1678;
struct symbol* nctemp1682= tp;
struct symbol* nctemp1684=SymGetable(nctemp1682);
struct symbol* nctemp1680= nctemp1684;
struct symbol* nctemp1685=SymSetltp(nctemp1680);
struct tree* nctemp1687= p;
struct nctempchar1 *nctemp1691;
static struct nctempchar1 nctemp1692 = {{ 12}, (char*)"__global__ \0"};
nctemp1691=&nctemp1692;
nctempchar1* nctemp1689= nctemp1691;
int nctemp1693=CodeEs(nctemp1687,nctemp1689);
struct tree* nctemp1695= p;
struct nctempchar1 *nctemp1699;
static struct nctempchar1 nctemp1700 = {{ 5}, (char*)"void\0"};
nctemp1699=&nctemp1700;
nctempchar1* nctemp1697= nctemp1699;
int nctemp1701=CodeEs(nctemp1695,nctemp1697);
struct symbol* nctemp1707= tp;
nctempchar1* nctemp1709=SymGetarray(nctemp1707);
nctempchar1* nctemp1705= nctemp1709;
struct nctempchar1 *nctemp1712;
static struct nctempchar1 nctemp1713 = {{ 6}, (char*)"array\0"};
nctemp1712=&nctemp1713;
nctempchar1* nctemp1710= nctemp1712;
int nctemp1714=LibeStrcmp(nctemp1705,nctemp1710);
int nctemp1702 = (nctemp1714 ==1);
if(nctemp1702)
{
struct symbol* nctemp1719= tp;
int nctemp1721=SymGetrank(nctemp1719);
int nctemp1717= nctemp1721;
int nctemp1722=CodeEd(nctemp1717);
}
struct symbol* nctemp1728= tp;
nctempchar1* nctemp1730=SymGetstruct(nctemp1728);
nctempchar1* nctemp1726= nctemp1730;
struct nctempchar1 *nctemp1733;
static struct nctempchar1 nctemp1734 = {{ 7}, (char*)"struct\0"};
nctemp1733=&nctemp1734;
nctempchar1* nctemp1731= nctemp1733;
int nctemp1735=LibeStrcmp(nctemp1726,nctemp1731);
int nctemp1723 = (nctemp1735 ==1);
if(nctemp1723)
{
struct tree* nctemp1738= p;
struct nctempchar1 *nctemp1742;
static struct nctempchar1 nctemp1743 = {{ 2}, (char*)"*\0"};
nctemp1742=&nctemp1743;
nctempchar1* nctemp1740= nctemp1742;
int nctemp1744=CodeEs(nctemp1738,nctemp1740);
}
struct tree* nctemp1746= p;
struct nctempchar1 *nctemp1750;
static struct nctempchar1 nctemp1751 = {{ 2}, (char*)" \0"};
nctemp1750=&nctemp1751;
nctempchar1* nctemp1748= nctemp1750;
int nctemp1752=CodeEs(nctemp1746,nctemp1748);
struct tree* nctemp1754= p;
struct nctempchar1 *nctemp1758;
static struct nctempchar1 nctemp1759 = {{ 8}, (char*)"kernel_\0"};
nctemp1758=&nctemp1759;
nctempchar1* nctemp1756= nctemp1758;
int nctemp1760=CodeEs(nctemp1754,nctemp1756);
struct tree* nctemp1762= p;
struct symbol* nctemp1766= tp;
nctempchar1* nctemp1768=SymGetname(nctemp1766);
nctempchar1* nctemp1764= nctemp1768;
int nctemp1769=CodeEs(nctemp1762,nctemp1764);
struct tree* nctemp1771= p;
struct nctempchar1 *nctemp1775;
static struct nctempchar1 nctemp1776 = {{ 3}, (char*)" (\0"};
nctemp1775=&nctemp1776;
nctempchar1* nctemp1773= nctemp1775;
int nctemp1777=CodeEs(nctemp1771,nctemp1773);
struct tree* nctemp1782= p;
struct tree* nctemp1784=PtreeMvchild(nctemp1782);
p =nctemp1784;
struct tree* nctemp1790= p;
nctempchar1* nctemp1792=PtreeGetname(nctemp1790);
nctempchar1* nctemp1788= nctemp1792;
struct nctempchar1 *nctemp1795;
static struct nctempchar1 nctemp1796 = {{ 8}, (char*)"arglist\0"};
nctemp1795=&nctemp1796;
nctempchar1* nctemp1793= nctemp1795;
int nctemp1797=LibeStrcmp(nctemp1788,nctemp1793);
int nctemp1785 = (nctemp1797 ==1);
if(nctemp1785)
{
struct symbol* nctemp1803= tp;
struct symbol* nctemp1805=SymGetable(nctemp1803);
tp =nctemp1805;
struct nctempchar1 *nctemp1812;
static struct nctempchar1 nctemp1813 = {{ 9}, (char*)"#arglist\0"};
nctemp1812=&nctemp1813;
nctempchar1* nctemp1810= nctemp1812;
struct symbol* nctemp1814= tp;
struct symbol* nctemp1816=SymLookup(nctemp1810,nctemp1814);
tp =nctemp1816;
struct symbol* nctemp1821= tp;
struct symbol* nctemp1823=SymGetable(nctemp1821);
tp =nctemp1823;
struct symbol* nctemp1831= tp;
struct symbol* nctemp1833=SymMvnext(nctemp1831);
tp =nctemp1833;
int nctemp1824 = (tp !=0);
int nctemp1835=nctemp1824;
while(nctemp1835)
{{
struct tree* nctemp1837= p;
struct symbol* nctemp1839= tp;
int nctemp1841=CodeIdeclaration(nctemp1837,nctemp1839);
struct symbol* nctemp1845= tp;
struct symbol* nctemp1847=SymMvnext(nctemp1845);
int nctemp1842 = (nctemp1847 !=0);
if(nctemp1842)
{
struct tree* nctemp1850= p;
struct nctempchar1 *nctemp1854;
static struct nctempchar1 nctemp1855 = {{ 2}, (char*)",\0"};
nctemp1854=&nctemp1855;
nctempchar1* nctemp1852= nctemp1854;
int nctemp1856=CodeEs(nctemp1850,nctemp1852);
}
int nctemp1865 = noarg + 1;
noarg =nctemp1865;
}
struct symbol* nctemp1873= tp;
struct symbol* nctemp1875=SymMvnext(nctemp1873);
tp =nctemp1875;
int nctemp1866 = (tp !=0);
nctemp1835=nctemp1866;}}
struct tree* nctemp1878= p;
struct nctempchar1 *nctemp1882;
static struct nctempchar1 nctemp1883 = {{ 5}, (char*)");\n\0"};
nctemp1882=&nctemp1883;
nctempchar1* nctemp1880= nctemp1882;
int nctemp1884=CodeEs(nctemp1878,nctemp1880);
return 1;
}
int CodeFdefgpu (struct tree* p)
{
struct symbol* tp;
int noarg;
int forw;
noarg =0;
forw =0;
struct tree* nctemp1899= p;
nctempchar1* nctemp1901=PtreeGetarray(nctemp1899);
nctempchar1* nctemp1897= nctemp1901;
struct nctempchar1 *nctemp1904;
static struct nctempchar1 nctemp1905 = {{ 6}, (char*)"array\0"};
nctemp1904=&nctemp1905;
nctempchar1* nctemp1902= nctemp1904;
int nctemp1906=LibeStrcmp(nctemp1897,nctemp1902);
int nctemp1894 = (nctemp1906 ==1);
if(nctemp1894)
{
struct tree* nctemp1912= p;
struct tree* nctemp1914=PtreeMvchild(nctemp1912);
p =nctemp1914;
struct tree* nctemp1919= p;
struct tree* nctemp1921=PtreeMvsister(nctemp1919);
p =nctemp1921;
struct tree* nctemp1927= p;
nctempchar1* nctemp1929=PtreeGetforw(nctemp1927);
nctempchar1* nctemp1925= nctemp1929;
struct nctempchar1 *nctemp1932;
static struct nctempchar1 nctemp1933 = {{ 5}, (char*)"forw\0"};
nctemp1932=&nctemp1933;
nctempchar1* nctemp1930= nctemp1932;
int nctemp1934=LibeStrcmp(nctemp1925,nctemp1930);
int nctemp1922 = (nctemp1934 ==1);
if(nctemp1922)
{
forw =1;
}
}
else{
struct tree* nctemp1944= p;
struct tree* nctemp1946=PtreeMvchild(nctemp1944);
p =nctemp1946;
struct tree* nctemp1952= p;
nctempchar1* nctemp1954=PtreeGetforw(nctemp1952);
nctempchar1* nctemp1950= nctemp1954;
struct nctempchar1 *nctemp1957;
static struct nctempchar1 nctemp1958 = {{ 5}, (char*)"forw\0"};
nctemp1957=&nctemp1958;
nctempchar1* nctemp1955= nctemp1957;
int nctemp1959=LibeStrcmp(nctemp1950,nctemp1955);
int nctemp1947 = (nctemp1959 ==1);
if(nctemp1947)
{
forw =1;
}
}
struct tree* nctemp1971= p;
nctempchar1* nctemp1973=PtreeGetdef(nctemp1971);
nctempchar1* nctemp1969= nctemp1973;
struct symbol* nctemp1976=SymGetetp();
struct symbol* nctemp1974= nctemp1976;
struct symbol* nctemp1977=SymLookup(nctemp1969,nctemp1974);
tp =nctemp1977;
struct tree* nctemp1979= p;
struct nctempchar1 *nctemp1983;
static struct nctempchar1 nctemp1984 = {{ 11}, (char*)"__global__\0"};
nctemp1983=&nctemp1984;
nctempchar1* nctemp1981= nctemp1983;
int nctemp1985=CodeEs(nctemp1979,nctemp1981);
struct tree* nctemp1987= p;
struct nctempchar1 *nctemp1991;
static struct nctempchar1 nctemp1992 = {{ 6}, (char*)" void\0"};
nctemp1991=&nctemp1992;
nctempchar1* nctemp1989= nctemp1991;
int nctemp1993=CodeEs(nctemp1987,nctemp1989);
struct tree* nctemp1995= p;
struct nctempchar1 *nctemp1999;
static struct nctempchar1 nctemp2000 = {{ 2}, (char*)" \0"};
nctemp1999=&nctemp2000;
nctempchar1* nctemp1997= nctemp1999;
int nctemp2001=CodeEs(nctemp1995,nctemp1997);
struct tree* nctemp2003= p;
struct nctempchar1 *nctemp2007;
static struct nctempchar1 nctemp2008 = {{ 8}, (char*)"kernel_\0"};
nctemp2007=&nctemp2008;
nctempchar1* nctemp2005= nctemp2007;
int nctemp2009=CodeEs(nctemp2003,nctemp2005);
struct tree* nctemp2011= p;
struct symbol* nctemp2015= tp;
nctempchar1* nctemp2017=SymGetname(nctemp2015);
nctempchar1* nctemp2013= nctemp2017;
int nctemp2018=CodeEs(nctemp2011,nctemp2013);
struct tree* nctemp2020= p;
struct nctempchar1 *nctemp2024;
static struct nctempchar1 nctemp2025 = {{ 3}, (char*)" (\0"};
nctemp2024=&nctemp2025;
nctempchar1* nctemp2022= nctemp2024;
int nctemp2026=CodeEs(nctemp2020,nctemp2022);
struct tree* nctemp2030= p;
struct tree* nctemp2032=PtreeMvchild(nctemp2030);
int nctemp2027 = (nctemp2032 !=0);
if(nctemp2027)
{
struct tree* nctemp2038= p;
struct tree* nctemp2040=PtreeMvchild(nctemp2038);
p =nctemp2040;
}
struct tree* nctemp2046= p;
nctempchar1* nctemp2048=PtreeGetname(nctemp2046);
nctempchar1* nctemp2044= nctemp2048;
struct nctempchar1 *nctemp2051;
static struct nctempchar1 nctemp2052 = {{ 8}, (char*)"arglist\0"};
nctemp2051=&nctemp2052;
nctempchar1* nctemp2049= nctemp2051;
int nctemp2053=LibeStrcmp(nctemp2044,nctemp2049);
int nctemp2041 = (nctemp2053 ==1);
if(nctemp2041)
{
struct symbol* nctemp2059= tp;
struct symbol* nctemp2061=SymGetable(nctemp2059);
tp =nctemp2061;
struct nctempchar1 *nctemp2068;
static struct nctempchar1 nctemp2069 = {{ 9}, (char*)"#arglist\0"};
nctemp2068=&nctemp2069;
nctempchar1* nctemp2066= nctemp2068;
struct symbol* nctemp2070= tp;
struct symbol* nctemp2072=SymLookup(nctemp2066,nctemp2070);
tp =nctemp2072;
struct symbol* nctemp2077= tp;
struct symbol* nctemp2079=SymGetable(nctemp2077);
tp =nctemp2079;
struct symbol* nctemp2087= tp;
struct symbol* nctemp2089=SymMvnext(nctemp2087);
tp =nctemp2089;
int nctemp2080 = (tp !=0);
int nctemp2091=nctemp2080;
while(nctemp2091)
{{
struct tree* nctemp2093= p;
struct symbol* nctemp2095= tp;
int nctemp2097=CodeIdeclaration(nctemp2093,nctemp2095);
struct symbol* nctemp2101= tp;
struct symbol* nctemp2103=SymMvnext(nctemp2101);
int nctemp2098 = (nctemp2103 !=0);
if(nctemp2098)
{
struct tree* nctemp2106= p;
struct nctempchar1 *nctemp2110;
static struct nctempchar1 nctemp2111 = {{ 2}, (char*)",\0"};
nctemp2110=&nctemp2111;
nctempchar1* nctemp2108= nctemp2110;
int nctemp2112=CodeEs(nctemp2106,nctemp2108);
}
int nctemp2121 = noarg + 1;
noarg =nctemp2121;
}
struct symbol* nctemp2129= tp;
struct symbol* nctemp2131=SymMvnext(nctemp2129);
tp =nctemp2131;
int nctemp2122 = (tp !=0);
nctemp2091=nctemp2122;}}
struct tree* nctemp2134= p;
struct nctempchar1 *nctemp2138;
static struct nctempchar1 nctemp2139 = {{ 4}, (char*)")\n\0"};
nctemp2138=&nctemp2139;
nctempchar1* nctemp2136= nctemp2138;
int nctemp2140=CodeEs(nctemp2134,nctemp2136);
int nctemp2141 = (forw ==1);
if(nctemp2141)
{
struct tree* nctemp2146= p;
struct nctempchar1 *nctemp2150;
static struct nctempchar1 nctemp2151 = {{ 4}, (char*)";\n\0"};
nctemp2150=&nctemp2151;
nctempchar1* nctemp2148= nctemp2150;
int nctemp2152=CodeEs(nctemp2146,nctemp2148);
return 1;
}
struct tree* nctemp2157= p;
struct tree* nctemp2159=PtreeMvsister(nctemp2157);
int nctemp2154 = (nctemp2159 !=0);
if(nctemp2154)
{
struct tree* nctemp2164= p;
struct tree* nctemp2166=PtreeMvsister(nctemp2164);
struct tree* nctemp2162= nctemp2166;
int nctemp2167=CodeCompstmnt(nctemp2162);
}
else{
struct tree* nctemp2169= p;
int nctemp2171=CodeCompstmnt(nctemp2169);
}
return 1;
}
int CodeFdewrappergpu (struct tree* p)
{
struct tree* top;
struct symbol* tp;
struct symbol* toptp;
int noarg;
struct tree* nctemp2177= p;
struct tree* nctemp2179=PtreeMvchild(nctemp2177);
p =nctemp2179;
noarg =0;
struct tree* nctemp2190= p;
nctempchar1* nctemp2192=PtreeGetdef(nctemp2190);
nctempchar1* nctemp2188= nctemp2192;
struct symbol* nctemp2195=SymGetetp();
struct symbol* nctemp2193= nctemp2195;
struct symbol* nctemp2196=SymLookup(nctemp2188,nctemp2193);
tp =nctemp2196;
struct symbol* nctemp2200= tp;
struct symbol* nctemp2202=SymGetable(nctemp2200);
struct symbol* nctemp2198= nctemp2202;
struct symbol* nctemp2203=SymSetltp(nctemp2198);
struct symbol* nctemp2209= tp;
nctempchar1* nctemp2211=SymGetstruct(nctemp2209);
nctempchar1* nctemp2207= nctemp2211;
struct nctempchar1 *nctemp2214;
static struct nctempchar1 nctemp2215 = {{ 7}, (char*)"struct\0"};
nctemp2214=&nctemp2215;
nctempchar1* nctemp2212= nctemp2214;
int nctemp2216=LibeStrcmp(nctemp2207,nctemp2212);
int nctemp2204 = (nctemp2216 ==1);
if(nctemp2204)
{
struct tree* nctemp2219= p;
struct nctempchar1 *nctemp2223;
static struct nctempchar1 nctemp2224 = {{ 8}, (char*)"struct \0"};
nctemp2223=&nctemp2224;
nctempchar1* nctemp2221= nctemp2223;
int nctemp2225=CodeEs(nctemp2219,nctemp2221);
}
struct symbol* nctemp2231= tp;
nctempchar1* nctemp2233=SymGetarray(nctemp2231);
nctempchar1* nctemp2229= nctemp2233;
struct nctempchar1 *nctemp2236;
static struct nctempchar1 nctemp2237 = {{ 6}, (char*)"array\0"};
nctemp2236=&nctemp2237;
nctempchar1* nctemp2234= nctemp2236;
int nctemp2238=LibeStrcmp(nctemp2229,nctemp2234);
int nctemp2226 = (nctemp2238 ==1);
if(nctemp2226)
{
struct tree* nctemp2241= p;
struct nctempchar1 *nctemp2245;
static struct nctempchar1 nctemp2246 = {{ 7}, (char*)"nctemp\0"};
nctemp2245=&nctemp2246;
nctempchar1* nctemp2243= nctemp2245;
int nctemp2247=CodeEs(nctemp2241,nctemp2243);
}
struct tree* nctemp2249= p;
struct symbol* nctemp2253= tp;
nctempchar1* nctemp2255=SymGetype(nctemp2253);
nctempchar1* nctemp2251= nctemp2255;
int nctemp2256=CodeEs(nctemp2249,nctemp2251);
struct symbol* nctemp2262= tp;
nctempchar1* nctemp2264=SymGetarray(nctemp2262);
nctempchar1* nctemp2260= nctemp2264;
struct nctempchar1 *nctemp2267;
static struct nctempchar1 nctemp2268 = {{ 6}, (char*)"array\0"};
nctemp2267=&nctemp2268;
nctempchar1* nctemp2265= nctemp2267;
int nctemp2269=LibeStrcmp(nctemp2260,nctemp2265);
int nctemp2257 = (nctemp2269 ==1);
if(nctemp2257)
{
struct symbol* nctemp2274= tp;
int nctemp2276=SymGetrank(nctemp2274);
int nctemp2272= nctemp2276;
int nctemp2277=CodeEd(nctemp2272);
}
struct symbol* nctemp2283= tp;
nctempchar1* nctemp2285=SymGetstruct(nctemp2283);
nctempchar1* nctemp2281= nctemp2285;
struct nctempchar1 *nctemp2288;
static struct nctempchar1 nctemp2289 = {{ 7}, (char*)"struct\0"};
nctemp2288=&nctemp2289;
nctempchar1* nctemp2286= nctemp2288;
int nctemp2290=LibeStrcmp(nctemp2281,nctemp2286);
int nctemp2278 = (nctemp2290 ==1);
if(nctemp2278)
{
struct tree* nctemp2293= p;
struct nctempchar1 *nctemp2297;
static struct nctempchar1 nctemp2298 = {{ 2}, (char*)"*\0"};
nctemp2297=&nctemp2298;
nctempchar1* nctemp2295= nctemp2297;
int nctemp2299=CodeEs(nctemp2293,nctemp2295);
}
top =p;
toptp =tp;
struct tree* nctemp2309= p;
struct nctempchar1 *nctemp2313;
static struct nctempchar1 nctemp2314 = {{ 2}, (char*)" \0"};
nctemp2313=&nctemp2314;
nctempchar1* nctemp2311= nctemp2313;
int nctemp2315=CodeEs(nctemp2309,nctemp2311);
struct tree* nctemp2317= p;
struct symbol* nctemp2321= tp;
nctempchar1* nctemp2323=SymGetname(nctemp2321);
nctempchar1* nctemp2319= nctemp2323;
int nctemp2324=CodeEs(nctemp2317,nctemp2319);
struct tree* nctemp2326= p;
struct nctempchar1 *nctemp2330;
static struct nctempchar1 nctemp2331 = {{ 3}, (char*)" (\0"};
nctemp2330=&nctemp2331;
nctempchar1* nctemp2328= nctemp2330;
int nctemp2332=CodeEs(nctemp2326,nctemp2328);
struct tree* nctemp2337= p;
struct tree* nctemp2339=PtreeMvchild(nctemp2337);
p =nctemp2339;
struct tree* nctemp2345= p;
nctempchar1* nctemp2347=PtreeGetname(nctemp2345);
nctempchar1* nctemp2343= nctemp2347;
struct nctempchar1 *nctemp2350;
static struct nctempchar1 nctemp2351 = {{ 8}, (char*)"arglist\0"};
nctemp2350=&nctemp2351;
nctempchar1* nctemp2348= nctemp2350;
int nctemp2352=LibeStrcmp(nctemp2343,nctemp2348);
int nctemp2340 = (nctemp2352 ==1);
if(nctemp2340)
{
struct symbol* nctemp2358= tp;
struct symbol* nctemp2360=SymGetable(nctemp2358);
tp =nctemp2360;
struct nctempchar1 *nctemp2367;
static struct nctempchar1 nctemp2368 = {{ 9}, (char*)"#arglist\0"};
nctemp2367=&nctemp2368;
nctempchar1* nctemp2365= nctemp2367;
struct symbol* nctemp2369= tp;
struct symbol* nctemp2371=SymLookup(nctemp2365,nctemp2369);
tp =nctemp2371;
struct symbol* nctemp2376= tp;
struct symbol* nctemp2378=SymGetable(nctemp2376);
tp =nctemp2378;
struct symbol* nctemp2386= tp;
struct symbol* nctemp2388=SymMvnext(nctemp2386);
tp =nctemp2388;
int nctemp2379 = (tp !=0);
int nctemp2390=nctemp2379;
while(nctemp2390)
{{
struct tree* nctemp2392= p;
struct symbol* nctemp2394= tp;
int nctemp2396=CodeIdeclaration(nctemp2392,nctemp2394);
struct symbol* nctemp2400= tp;
struct symbol* nctemp2402=SymMvnext(nctemp2400);
int nctemp2397 = (nctemp2402 !=0);
if(nctemp2397)
{
struct tree* nctemp2405= p;
struct nctempchar1 *nctemp2409;
static struct nctempchar1 nctemp2410 = {{ 2}, (char*)",\0"};
nctemp2409=&nctemp2410;
nctempchar1* nctemp2407= nctemp2409;
int nctemp2411=CodeEs(nctemp2405,nctemp2407);
}
int nctemp2420 = noarg + 1;
noarg =nctemp2420;
}
struct symbol* nctemp2428= tp;
struct symbol* nctemp2430=SymMvnext(nctemp2428);
tp =nctemp2430;
int nctemp2421 = (tp !=0);
nctemp2390=nctemp2421;}}
struct tree* nctemp2433= p;
struct nctempchar1 *nctemp2437;
static struct nctempchar1 nctemp2438 = {{ 4}, (char*)")\n\0"};
nctemp2437=&nctemp2438;
nctempchar1* nctemp2435= nctemp2437;
int nctemp2439=CodeEs(nctemp2433,nctemp2435);
struct tree* nctemp2441= p;
struct nctempchar1 *nctemp2445;
static struct nctempchar1 nctemp2446 = {{ 4}, (char*)"{\n\0"};
nctemp2445=&nctemp2446;
nctempchar1* nctemp2443= nctemp2445;
int nctemp2447=CodeEs(nctemp2441,nctemp2443);
p =top;
tp =toptp;
struct tree* nctemp2457= p;
struct nctempchar1 *nctemp2461;
static struct nctempchar1 nctemp2462 = {{ 10}, (char*)"  kernel_\0"};
nctemp2461=&nctemp2462;
nctempchar1* nctemp2459= nctemp2461;
int nctemp2463=CodeEs(nctemp2457,nctemp2459);
struct tree* nctemp2465= p;
struct symbol* nctemp2469= tp;
nctempchar1* nctemp2471=SymGetname(nctemp2469);
nctempchar1* nctemp2467= nctemp2471;
int nctemp2472=CodeEs(nctemp2465,nctemp2467);
struct tree* nctemp2474= p;
struct nctempchar1 *nctemp2478;
static struct nctempchar1 nctemp2479 = {{ 31}, (char*)"<<< RunGetnb(),RunGetnt() >>>(\0"};
nctemp2478=&nctemp2479;
nctempchar1* nctemp2476= nctemp2478;
int nctemp2480=CodeEs(nctemp2474,nctemp2476);
struct tree* nctemp2485= p;
struct tree* nctemp2487=PtreeMvchild(nctemp2485);
p =nctemp2487;
struct tree* nctemp2493= p;
nctempchar1* nctemp2495=PtreeGetname(nctemp2493);
nctempchar1* nctemp2491= nctemp2495;
struct nctempchar1 *nctemp2498;
static struct nctempchar1 nctemp2499 = {{ 8}, (char*)"arglist\0"};
nctemp2498=&nctemp2499;
nctempchar1* nctemp2496= nctemp2498;
int nctemp2500=LibeStrcmp(nctemp2491,nctemp2496);
int nctemp2488 = (nctemp2500 ==1);
if(nctemp2488)
{
struct symbol* nctemp2506= tp;
struct symbol* nctemp2508=SymGetable(nctemp2506);
tp =nctemp2508;
struct nctempchar1 *nctemp2515;
static struct nctempchar1 nctemp2516 = {{ 9}, (char*)"#arglist\0"};
nctemp2515=&nctemp2516;
nctempchar1* nctemp2513= nctemp2515;
struct symbol* nctemp2517= tp;
struct symbol* nctemp2519=SymLookup(nctemp2513,nctemp2517);
tp =nctemp2519;
struct symbol* nctemp2524= tp;
struct symbol* nctemp2526=SymGetable(nctemp2524);
tp =nctemp2526;
struct symbol* nctemp2534= tp;
struct symbol* nctemp2536=SymMvnext(nctemp2534);
tp =nctemp2536;
int nctemp2527 = (tp !=0);
int nctemp2538=nctemp2527;
while(nctemp2538)
{{
struct tree* nctemp2540= p;
struct symbol* nctemp2544= tp;
nctempchar1* nctemp2546=SymGetname(nctemp2544);
nctempchar1* nctemp2542= nctemp2546;
int nctemp2547=CodeEs(nctemp2540,nctemp2542);
struct symbol* nctemp2551= tp;
struct symbol* nctemp2553=SymMvnext(nctemp2551);
int nctemp2548 = (nctemp2553 !=0);
if(nctemp2548)
{
struct tree* nctemp2556= p;
struct nctempchar1 *nctemp2560;
static struct nctempchar1 nctemp2561 = {{ 2}, (char*)",\0"};
nctemp2560=&nctemp2561;
nctempchar1* nctemp2558= nctemp2560;
int nctemp2562=CodeEs(nctemp2556,nctemp2558);
}
int nctemp2571 = noarg + 1;
noarg =nctemp2571;
}
struct symbol* nctemp2579= tp;
struct symbol* nctemp2581=SymMvnext(nctemp2579);
tp =nctemp2581;
int nctemp2572 = (tp !=0);
nctemp2538=nctemp2572;}}
struct tree* nctemp2584= p;
struct nctempchar1 *nctemp2588;
static struct nctempchar1 nctemp2589 = {{ 5}, (char*)");\n\0"};
nctemp2588=&nctemp2589;
nctempchar1* nctemp2586= nctemp2588;
int nctemp2590=CodeEs(nctemp2584,nctemp2586);
struct tree* nctemp2592= p;
struct nctempchar1 *nctemp2596;
static struct nctempchar1 nctemp2597 = {{ 14}, (char*)"GpuError();\n\0"};
nctemp2596=&nctemp2597;
nctempchar1* nctemp2594= nctemp2596;
int nctemp2598=CodeEs(nctemp2592,nctemp2594);
struct tree* nctemp2600= p;
struct nctempchar1 *nctemp2604;
static struct nctempchar1 nctemp2605 = {{ 13}, (char*)"return(1);\n\0"};
nctemp2604=&nctemp2605;
nctempchar1* nctemp2602= nctemp2604;
int nctemp2606=CodeEs(nctemp2600,nctemp2602);
struct tree* nctemp2608= p;
struct nctempchar1 *nctemp2612;
static struct nctempchar1 nctemp2613 = {{ 4}, (char*)"}\n\0"};
nctemp2612=&nctemp2613;
nctempchar1* nctemp2610= nctemp2612;
int nctemp2614=CodeEs(nctemp2608,nctemp2610);
return 1;
}
int CodeGdeclarations (struct tree* p,struct symbol* tp)
{
struct symbol* nctemp2620= tp;
struct symbol* nctemp2622=SymMvnext(nctemp2620);
tp =nctemp2622;
int nctemp2623 = (tp !=0);
int nctemp2627=nctemp2623;
while(nctemp2627)
{{
struct nctempchar1 *nctemp2633;
static struct nctempchar1 nctemp2634 = {{ 9}, (char*)"#arglist\0"};
nctemp2633=&nctemp2634;
nctempchar1* nctemp2631= nctemp2633;
struct symbol* nctemp2637= tp;
nctempchar1* nctemp2639=SymGetname(nctemp2637);
nctempchar1* nctemp2635= nctemp2639;
int nctemp2640=LibeStrcmp(nctemp2631,nctemp2635);
int nctemp2628 = (nctemp2640 ==0);
if(nctemp2628)
{
struct symbol* nctemp2645= tp;
int nctemp2647=SymGetemit(nctemp2645);
int nctemp2642 = (nctemp2647 ==1);
if(nctemp2642)
{
struct symbol* nctemp2654= tp;
nctempchar1* nctemp2656=SymGetstruct(nctemp2654);
nctempchar1* nctemp2652= nctemp2656;
struct nctempchar1 *nctemp2659;
static struct nctempchar1 nctemp2660 = {{ 10}, (char*)"structdef\0"};
nctemp2659=&nctemp2660;
nctempchar1* nctemp2657= nctemp2659;
int nctemp2661=LibeStrcmp(nctemp2652,nctemp2657);
int nctemp2649 = (nctemp2661 ==1);
if(nctemp2649)
{
struct tree* nctemp2664= p;
struct symbol* nctemp2666= tp;
int nctemp2668=CodeStructdef(nctemp2664,nctemp2666);
}
else{
struct symbol* nctemp2674= tp;
nctempchar1* nctemp2676=SymGetfunc(nctemp2674);
nctempchar1* nctemp2672= nctemp2676;
struct nctempchar1 *nctemp2679;
static struct nctempchar1 nctemp2680 = {{ 5}, (char*)"fdef\0"};
nctemp2679=&nctemp2680;
nctempchar1* nctemp2677= nctemp2679;
int nctemp2681=LibeStrcmp(nctemp2672,nctemp2677);
int nctemp2669 = (nctemp2681 ==1);
if(nctemp2669)
{
struct tree* nctemp2684= p;
int nctemp2686=CodeFdef(nctemp2684);
}
else{
struct symbol* nctemp2692= tp;
nctempchar1* nctemp2694=SymGetname(nctemp2692);
nctempchar1* nctemp2690= nctemp2694;
struct nctempchar1 *nctemp2697;
static struct nctempchar1 nctemp2698 = {{ 6}, (char*)"#self\0"};
nctemp2697=&nctemp2698;
nctempchar1* nctemp2695= nctemp2697;
int nctemp2699=LibeStrcmp(nctemp2690,nctemp2695);
int nctemp2687 = (nctemp2699 ==0);
if(nctemp2687)
{
struct tree* nctemp2702= p;
struct symbol* nctemp2704= tp;
int nctemp2706=CodeIdeclaration(nctemp2702,nctemp2704);
struct tree* nctemp2708= p;
struct nctempchar1 *nctemp2712;
static struct nctempchar1 nctemp2713 = {{ 4}, (char*)";\n\0"};
nctemp2712=&nctemp2713;
nctempchar1* nctemp2710= nctemp2712;
int nctemp2714=CodeEs(nctemp2708,nctemp2710);
}
}
}
struct symbol* nctemp2716= tp;
int nctemp2718= 0;
int nctemp2720=SymSetemit(nctemp2716,nctemp2718);
}
}
struct symbol* nctemp2725= tp;
struct symbol* nctemp2727=SymMvnext(nctemp2725);
tp =nctemp2727;
}
int nctemp2728 = (tp !=0);
nctemp2627=nctemp2728;}return 1;
}
int CodeDeclarations (struct tree* p,struct symbol* tp)
{
struct tree* np;
int nctemp2733 = (p !=0);
if(nctemp2733)
{
struct tree* nctemp2741= p;
struct tree* nctemp2743=PtreeMvchild(nctemp2741);
np =nctemp2743;
}
else{
np =p;
}
struct tree* nctemp2749= np;
struct symbol* nctemp2751= tp;
int nctemp2753=CodeGdeclarations(nctemp2749,nctemp2751);
return 1;
}
int CodeCode (struct tree* p,struct symbol* tp)
{
struct tree* np;
struct tree* nctemp2759= p;
struct tree* nctemp2761=PtreeMvchild(nctemp2759);
np =nctemp2761;
struct tree* nctemp2765= np;
nctempchar1* nctemp2767=PtreeGetname(nctemp2765);
nctempchar1* nctemp2763= nctemp2767;
struct nctempchar1 *nctemp2770;
static struct nctempchar1 nctemp2771 = {{ 7}, (char*)"import\0"};
nctemp2770=&nctemp2771;
nctempchar1* nctemp2768= nctemp2770;
int nctemp2772=LibeStrcmp(nctemp2763,nctemp2768);
if(nctemp2772)
{
struct tree* nctemp2774= np;
struct symbol* nctemp2776= tp;
int nctemp2778=CodeImport(nctemp2774,nctemp2776);
}
struct tree* nctemp2780= p;
struct symbol* nctemp2782= tp;
int nctemp2784=CodeDeclarations(nctemp2780,nctemp2782);
return 1;
}
int CodeArraytest;
int CodeArraycheck ()
{
return CodeArraytest;
}
int CodeArraycheckon ()
{
CodeArraytest =1;
return 1;
}
int CodeArraycheckoff ()
{
CodeArraytest =0;
return 1;
}
int CodeDebugon ()
{
CodeDebugflag =1;
return 1;
}
nctempchar1 * CodeMktemp ()
{
int nctemp2803= 0;
nctempchar1* nctemp2805=CodeItemp(nctemp2803);
return nctemp2805;
}
int CodeDebugoff ()
{
CodeDebugflag =0;
return 1;
}
nctempchar1 * CodeNewtemp (nctempchar1 *type)
{
nctempchar1 *temp;
struct symbol* tp;
nctempchar1* nctemp2816=CodeMktemp();
temp=nctemp2816;
nctempchar1* nctemp2821= temp;
struct symbol* nctemp2826=SymGetltp();
struct symbol* nctemp2824= nctemp2826;
struct symbol* nctemp2827=SymMkname(nctemp2821,nctemp2824);
tp =nctemp2827;
struct symbol* nctemp2829= tp;
nctempchar1* nctemp2831= type;
int nctemp2834=SymSetype(nctemp2829,nctemp2831);
struct symbol* nctemp2836= tp;
int nctemp2838= 0;
int nctemp2840=SymSetemit(nctemp2836,nctemp2838);
return temp;
}
struct symbol* CodeNewsymbol (nctempchar1 *type,nctempchar1 *name)
{
struct symbol* tp;
nctempchar1* nctemp2847= name;
struct symbol* nctemp2852=SymGetltp();
struct symbol* nctemp2850= nctemp2852;
struct symbol* nctemp2853=SymMkname(nctemp2847,nctemp2850);
tp =nctemp2853;
struct symbol* nctemp2855= tp;
nctempchar1* nctemp2857= type;
int nctemp2860=SymSetype(nctemp2855,nctemp2857);
struct symbol* nctemp2862= tp;
int nctemp2864= 0;
int nctemp2866=SymSetemit(nctemp2862,nctemp2864);
return tp;
}
nctempchar1 * CodeMkstring (struct tree* p)
{
struct symbol* sp;
nctempchar1 *tmp;
nctempchar1* nctemp2873=CodeMktemp();
tmp=nctemp2873;
nctempchar1* nctemp2878= tmp;
struct symbol* nctemp2883=SymGetltp();
struct symbol* nctemp2881= nctemp2883;
struct symbol* nctemp2884=SymMkname(nctemp2878,nctemp2881);
sp =nctemp2884;
struct symbol* nctemp2886= sp;
int nctemp2888= 1;
int nctemp2890=SymSetrank(nctemp2886,nctemp2888);
struct symbol* nctemp2892= sp;
struct nctempchar1 *nctemp2896;
static struct nctempchar1 nctemp2897 = {{ 5}, (char*)"char\0"};
nctemp2896=&nctemp2897;
nctempchar1* nctemp2894= nctemp2896;
int nctemp2898=SymSetype(nctemp2892,nctemp2894);
struct symbol* nctemp2900= sp;
struct nctempchar1 *nctemp2904;
static struct nctempchar1 nctemp2905 = {{ 6}, (char*)"array\0"};
nctemp2904=&nctemp2905;
nctempchar1* nctemp2902= nctemp2904;
int nctemp2906=SymSetarray(nctemp2900,nctemp2902);
return tmp;
}
nctempchar1 * CodeSconstant (struct tree* p)
{
nctempchar1 *tmp;
nctempchar1 *tmp2;
int l;
nctempchar1* nctemp2914=CodeMktemp();
tmp2=nctemp2914;
struct tree* nctemp2916= p;
struct nctempchar1 *nctemp2920;
static struct nctempchar1 nctemp2921 = {{ 21}, (char*)"struct nctempchar1 *\0"};
nctemp2920=&nctemp2921;
nctempchar1* nctemp2918= nctemp2920;
int nctemp2922=CodeEs(nctemp2916,nctemp2918);
struct tree* nctemp2924= p;
nctempchar1* nctemp2926= tmp2;
int nctemp2929=CodeEs(nctemp2924,nctemp2926);
struct tree* nctemp2931= p;
struct nctempchar1 *nctemp2935;
static struct nctempchar1 nctemp2936 = {{ 4}, (char*)";\n\0"};
nctemp2935=&nctemp2936;
nctempchar1* nctemp2933= nctemp2935;
int nctemp2937=CodeEs(nctemp2931,nctemp2933);
nctempchar1* nctemp2943=CodeMktemp();
tmp=nctemp2943;
struct tree* nctemp2945= p;
struct nctempchar1 *nctemp2949;
static struct nctempchar1 nctemp2950 = {{ 27}, (char*)"static struct nctempchar1 \0"};
nctemp2949=&nctemp2950;
nctempchar1* nctemp2947= nctemp2949;
int nctemp2951=CodeEs(nctemp2945,nctemp2947);
struct tree* nctemp2953= p;
nctempchar1* nctemp2955= tmp;
int nctemp2958=CodeEs(nctemp2953,nctemp2955);
struct tree* nctemp2960= p;
struct nctempchar1 *nctemp2964;
static struct nctempchar1 nctemp2965 = {{ 4}, (char*)" = \0"};
nctemp2964=&nctemp2965;
nctempchar1* nctemp2962= nctemp2964;
int nctemp2966=CodeEs(nctemp2960,nctemp2962);
struct tree* nctemp2968= p;
struct nctempchar1 *nctemp2972;
static struct nctempchar1 nctemp2973 = {{ 4}, (char*)"{{ \0"};
nctemp2972=&nctemp2973;
nctempchar1* nctemp2970= nctemp2972;
int nctemp2974=CodeEs(nctemp2968,nctemp2970);
struct tree* nctemp2984= p;
nctempchar1* nctemp2986=PtreeGetdef(nctemp2984);
nctempchar1* nctemp2982= nctemp2986;
int nctemp2987=LibeStrlen(nctemp2982);
int nctemp2989 = nctemp2987 - 1;
l =nctemp2989;
int nctemp2991= l;
int nctemp2993=CodeEd(nctemp2991);
struct tree* nctemp2995= p;
struct nctempchar1 *nctemp2999;
static struct nctempchar1 nctemp3000 = {{ 11}, (char*)"}, (char*)\0"};
nctemp2999=&nctemp3000;
nctempchar1* nctemp2997= nctemp2999;
int nctemp3001=CodeEs(nctemp2995,nctemp2997);
int nctemp3003= 34;
int nctemp3005=CodeEc(nctemp3003);
struct tree* nctemp3009= p;
nctempchar1* nctemp3011=PtreeGetdef(nctemp3009);
nctempchar1* nctemp3007= nctemp3011;
int nctemp3012=CodeEsr(nctemp3007);
int nctemp3014= 92;
int nctemp3016=CodeEc(nctemp3014);
int nctemp3018= 48;
int nctemp3020=CodeEc(nctemp3018);
int nctemp3022= 34;
int nctemp3024=CodeEc(nctemp3022);
struct tree* nctemp3026= p;
struct nctempchar1 *nctemp3030;
static struct nctempchar1 nctemp3031 = {{ 5}, (char*)"};\n\0"};
nctemp3030=&nctemp3031;
nctempchar1* nctemp3028= nctemp3030;
int nctemp3032=CodeEs(nctemp3026,nctemp3028);
struct tree* nctemp3034= p;
nctempchar1* nctemp3036= tmp2;
int nctemp3039=CodeEs(nctemp3034,nctemp3036);
struct tree* nctemp3041= p;
struct nctempchar1 *nctemp3045;
static struct nctempchar1 nctemp3046 = {{ 3}, (char*)"=&\0"};
nctemp3045=&nctemp3046;
nctempchar1* nctemp3043= nctemp3045;
int nctemp3047=CodeEs(nctemp3041,nctemp3043);
struct tree* nctemp3049= p;
nctempchar1* nctemp3051= tmp;
int nctemp3054=CodeEs(nctemp3049,nctemp3051);
struct tree* nctemp3056= p;
struct nctempchar1 *nctemp3060;
static struct nctempchar1 nctemp3061 = {{ 4}, (char*)";\n\0"};
nctemp3060=&nctemp3061;
nctempchar1* nctemp3058= nctemp3060;
int nctemp3062=CodeEs(nctemp3056,nctemp3058);
return tmp2;
}
int CodeStructdef (struct tree* p,struct symbol* tp)
{
struct symbol* up;
struct tree* nctemp3066= p;
struct nctempchar1 *nctemp3070;
static struct nctempchar1 nctemp3071 = {{ 8}, (char*)"struct \0"};
nctemp3070=&nctemp3071;
nctempchar1* nctemp3068= nctemp3070;
int nctemp3072=CodeEs(nctemp3066,nctemp3068);
struct tree* nctemp3074= p;
struct symbol* nctemp3078= tp;
nctempchar1* nctemp3080=SymGetype(nctemp3078);
nctempchar1* nctemp3076= nctemp3080;
int nctemp3081=CodeEs(nctemp3074,nctemp3076);
struct tree* nctemp3083= p;
struct nctempchar1 *nctemp3087;
static struct nctempchar1 nctemp3088 = {{ 3}, (char*)" {\0"};
nctemp3087=&nctemp3088;
nctempchar1* nctemp3085= nctemp3087;
int nctemp3089=CodeEs(nctemp3083,nctemp3085);
struct symbol* nctemp3094= tp;
struct symbol* nctemp3096=SymGetable(nctemp3094);
up =nctemp3096;
struct symbol* nctemp3101= up;
struct symbol* nctemp3103=SymMvnext(nctemp3101);
up =nctemp3103;
struct tree* nctemp3105= p;
struct symbol* nctemp3107= up;
int nctemp3109=CodeIdeclarations(nctemp3105,nctemp3107);
struct tree* nctemp3111= p;
struct nctempchar1 *nctemp3115;
static struct nctempchar1 nctemp3116 = {{ 5}, (char*)"};\n\0"};
nctemp3115=&nctemp3116;
nctempchar1* nctemp3113= nctemp3115;
int nctemp3117=CodeEs(nctemp3111,nctemp3113);
struct tree* nctemp3119= p;
struct nctempchar1 *nctemp3123;
static struct nctempchar1 nctemp3124 = {{ 16}, (char*)"typedef struct \0"};
nctemp3123=&nctemp3124;
nctempchar1* nctemp3121= nctemp3123;
int nctemp3125=CodeEs(nctemp3119,nctemp3121);
struct tree* nctemp3127= p;
struct nctempchar1 *nctemp3131;
static struct nctempchar1 nctemp3132 = {{ 7}, (char*)"nctemp\0"};
nctemp3131=&nctemp3132;
nctempchar1* nctemp3129= nctemp3131;
int nctemp3133=CodeEs(nctemp3127,nctemp3129);
struct tree* nctemp3135= p;
struct symbol* nctemp3139= tp;
nctempchar1* nctemp3141=SymGetype(nctemp3139);
nctempchar1* nctemp3137= nctemp3141;
int nctemp3142=CodeEs(nctemp3135,nctemp3137);
struct tree* nctemp3144= p;
struct nctempchar1 *nctemp3148;
static struct nctempchar1 nctemp3149 = {{ 2}, (char*)"1\0"};
nctemp3148=&nctemp3149;
nctempchar1* nctemp3146= nctemp3148;
int nctemp3150=CodeEs(nctemp3144,nctemp3146);
struct tree* nctemp3152= p;
struct nctempchar1 *nctemp3156;
static struct nctempchar1 nctemp3157 = {{ 20}, (char*)" {int d[1]; struct \0"};
nctemp3156=&nctemp3157;
nctempchar1* nctemp3154= nctemp3156;
int nctemp3158=CodeEs(nctemp3152,nctemp3154);
struct tree* nctemp3160= p;
struct symbol* nctemp3164= tp;
nctempchar1* nctemp3166=SymGetype(nctemp3164);
nctempchar1* nctemp3162= nctemp3166;
int nctemp3167=CodeEs(nctemp3160,nctemp3162);
struct tree* nctemp3169= p;
struct nctempchar1 *nctemp3173;
static struct nctempchar1 nctemp3174 = {{ 6}, (char*)" *a; \0"};
nctemp3173=&nctemp3174;
nctempchar1* nctemp3171= nctemp3173;
int nctemp3175=CodeEs(nctemp3169,nctemp3171);
struct tree* nctemp3177= p;
struct nctempchar1 *nctemp3181;
static struct nctempchar1 nctemp3182 = {{ 3}, (char*)"} \0"};
nctemp3181=&nctemp3182;
nctempchar1* nctemp3179= nctemp3181;
int nctemp3183=CodeEs(nctemp3177,nctemp3179);
struct tree* nctemp3185= p;
struct nctempchar1 *nctemp3189;
static struct nctempchar1 nctemp3190 = {{ 7}, (char*)"nctemp\0"};
nctemp3189=&nctemp3190;
nctempchar1* nctemp3187= nctemp3189;
int nctemp3191=CodeEs(nctemp3185,nctemp3187);
struct tree* nctemp3193= p;
struct symbol* nctemp3197= tp;
nctempchar1* nctemp3199=SymGetype(nctemp3197);
nctempchar1* nctemp3195= nctemp3199;
int nctemp3200=CodeEs(nctemp3193,nctemp3195);
struct tree* nctemp3202= p;
struct nctempchar1 *nctemp3206;
static struct nctempchar1 nctemp3207 = {{ 2}, (char*)"1\0"};
nctemp3206=&nctemp3207;
nctempchar1* nctemp3204= nctemp3206;
int nctemp3208=CodeEs(nctemp3202,nctemp3204);
struct tree* nctemp3210= p;
struct nctempchar1 *nctemp3214;
static struct nctempchar1 nctemp3215 = {{ 4}, (char*)";\n\0"};
nctemp3214=&nctemp3215;
nctempchar1* nctemp3212= nctemp3214;
int nctemp3216=CodeEs(nctemp3210,nctemp3212);
struct tree* nctemp3218= p;
struct nctempchar1 *nctemp3222;
static struct nctempchar1 nctemp3223 = {{ 8}, (char*)"struct \0"};
nctemp3222=&nctemp3223;
nctempchar1* nctemp3220= nctemp3222;
int nctemp3224=CodeEs(nctemp3218,nctemp3220);
struct tree* nctemp3226= p;
struct nctempchar1 *nctemp3230;
static struct nctempchar1 nctemp3231 = {{ 7}, (char*)"nctemp\0"};
nctemp3230=&nctemp3231;
nctempchar1* nctemp3228= nctemp3230;
int nctemp3232=CodeEs(nctemp3226,nctemp3228);
struct tree* nctemp3234= p;
struct symbol* nctemp3238= tp;
nctempchar1* nctemp3240=SymGetype(nctemp3238);
nctempchar1* nctemp3236= nctemp3240;
int nctemp3241=CodeEs(nctemp3234,nctemp3236);
struct tree* nctemp3243= p;
struct nctempchar1 *nctemp3247;
static struct nctempchar1 nctemp3248 = {{ 2}, (char*)"2\0"};
nctemp3247=&nctemp3248;
nctempchar1* nctemp3245= nctemp3247;
int nctemp3249=CodeEs(nctemp3243,nctemp3245);
struct tree* nctemp3251= p;
struct nctempchar1 *nctemp3255;
static struct nctempchar1 nctemp3256 = {{ 20}, (char*)" {int d[2]; struct \0"};
nctemp3255=&nctemp3256;
nctempchar1* nctemp3253= nctemp3255;
int nctemp3257=CodeEs(nctemp3251,nctemp3253);
struct tree* nctemp3259= p;
struct symbol* nctemp3263= tp;
nctempchar1* nctemp3265=SymGetype(nctemp3263);
nctempchar1* nctemp3261= nctemp3265;
int nctemp3266=CodeEs(nctemp3259,nctemp3261);
struct tree* nctemp3268= p;
struct nctempchar1 *nctemp3272;
static struct nctempchar1 nctemp3273 = {{ 6}, (char*)" *a; \0"};
nctemp3272=&nctemp3273;
nctempchar1* nctemp3270= nctemp3272;
int nctemp3274=CodeEs(nctemp3268,nctemp3270);
struct tree* nctemp3276= p;
struct nctempchar1 *nctemp3280;
static struct nctempchar1 nctemp3281 = {{ 3}, (char*)"} \0"};
nctemp3280=&nctemp3281;
nctempchar1* nctemp3278= nctemp3280;
int nctemp3282=CodeEs(nctemp3276,nctemp3278);
struct tree* nctemp3284= p;
struct nctempchar1 *nctemp3288;
static struct nctempchar1 nctemp3289 = {{ 4}, (char*)";\n\0"};
nctemp3288=&nctemp3289;
nctempchar1* nctemp3286= nctemp3288;
int nctemp3290=CodeEs(nctemp3284,nctemp3286);
struct tree* nctemp3292= p;
struct nctempchar1 *nctemp3296;
static struct nctempchar1 nctemp3297 = {{ 8}, (char*)"struct \0"};
nctemp3296=&nctemp3297;
nctempchar1* nctemp3294= nctemp3296;
int nctemp3298=CodeEs(nctemp3292,nctemp3294);
struct tree* nctemp3300= p;
struct nctempchar1 *nctemp3304;
static struct nctempchar1 nctemp3305 = {{ 7}, (char*)"nctemp\0"};
nctemp3304=&nctemp3305;
nctempchar1* nctemp3302= nctemp3304;
int nctemp3306=CodeEs(nctemp3300,nctemp3302);
struct tree* nctemp3308= p;
struct symbol* nctemp3312= tp;
nctempchar1* nctemp3314=SymGetype(nctemp3312);
nctempchar1* nctemp3310= nctemp3314;
int nctemp3315=CodeEs(nctemp3308,nctemp3310);
struct tree* nctemp3317= p;
struct nctempchar1 *nctemp3321;
static struct nctempchar1 nctemp3322 = {{ 2}, (char*)"3\0"};
nctemp3321=&nctemp3322;
nctempchar1* nctemp3319= nctemp3321;
int nctemp3323=CodeEs(nctemp3317,nctemp3319);
struct tree* nctemp3325= p;
struct nctempchar1 *nctemp3329;
static struct nctempchar1 nctemp3330 = {{ 20}, (char*)" {int d[3]; struct \0"};
nctemp3329=&nctemp3330;
nctempchar1* nctemp3327= nctemp3329;
int nctemp3331=CodeEs(nctemp3325,nctemp3327);
struct tree* nctemp3333= p;
struct symbol* nctemp3337= tp;
nctempchar1* nctemp3339=SymGetype(nctemp3337);
nctempchar1* nctemp3335= nctemp3339;
int nctemp3340=CodeEs(nctemp3333,nctemp3335);
struct tree* nctemp3342= p;
struct nctempchar1 *nctemp3346;
static struct nctempchar1 nctemp3347 = {{ 6}, (char*)" *a; \0"};
nctemp3346=&nctemp3347;
nctempchar1* nctemp3344= nctemp3346;
int nctemp3348=CodeEs(nctemp3342,nctemp3344);
struct tree* nctemp3350= p;
struct nctempchar1 *nctemp3354;
static struct nctempchar1 nctemp3355 = {{ 3}, (char*)"} \0"};
nctemp3354=&nctemp3355;
nctempchar1* nctemp3352= nctemp3354;
int nctemp3356=CodeEs(nctemp3350,nctemp3352);
struct tree* nctemp3358= p;
struct nctempchar1 *nctemp3362;
static struct nctempchar1 nctemp3363 = {{ 4}, (char*)";\n\0"};
nctemp3362=&nctemp3363;
nctempchar1* nctemp3360= nctemp3362;
int nctemp3364=CodeEs(nctemp3358,nctemp3360);
struct tree* nctemp3366= p;
struct nctempchar1 *nctemp3370;
static struct nctempchar1 nctemp3371 = {{ 8}, (char*)"struct \0"};
nctemp3370=&nctemp3371;
nctempchar1* nctemp3368= nctemp3370;
int nctemp3372=CodeEs(nctemp3366,nctemp3368);
struct tree* nctemp3374= p;
struct nctempchar1 *nctemp3378;
static struct nctempchar1 nctemp3379 = {{ 7}, (char*)"nctemp\0"};
nctemp3378=&nctemp3379;
nctempchar1* nctemp3376= nctemp3378;
int nctemp3380=CodeEs(nctemp3374,nctemp3376);
struct tree* nctemp3382= p;
struct symbol* nctemp3386= tp;
nctempchar1* nctemp3388=SymGetype(nctemp3386);
nctempchar1* nctemp3384= nctemp3388;
int nctemp3389=CodeEs(nctemp3382,nctemp3384);
struct tree* nctemp3391= p;
struct nctempchar1 *nctemp3395;
static struct nctempchar1 nctemp3396 = {{ 2}, (char*)"4\0"};
nctemp3395=&nctemp3396;
nctempchar1* nctemp3393= nctemp3395;
int nctemp3397=CodeEs(nctemp3391,nctemp3393);
struct tree* nctemp3399= p;
struct nctempchar1 *nctemp3403;
static struct nctempchar1 nctemp3404 = {{ 20}, (char*)" {int d[4]; struct \0"};
nctemp3403=&nctemp3404;
nctempchar1* nctemp3401= nctemp3403;
int nctemp3405=CodeEs(nctemp3399,nctemp3401);
struct tree* nctemp3407= p;
struct symbol* nctemp3411= tp;
nctempchar1* nctemp3413=SymGetype(nctemp3411);
nctempchar1* nctemp3409= nctemp3413;
int nctemp3414=CodeEs(nctemp3407,nctemp3409);
struct tree* nctemp3416= p;
struct nctempchar1 *nctemp3420;
static struct nctempchar1 nctemp3421 = {{ 6}, (char*)" *a; \0"};
nctemp3420=&nctemp3421;
nctempchar1* nctemp3418= nctemp3420;
int nctemp3422=CodeEs(nctemp3416,nctemp3418);
struct tree* nctemp3424= p;
struct nctempchar1 *nctemp3428;
static struct nctempchar1 nctemp3429 = {{ 3}, (char*)"} \0"};
nctemp3428=&nctemp3429;
nctempchar1* nctemp3426= nctemp3428;
int nctemp3430=CodeEs(nctemp3424,nctemp3426);
struct tree* nctemp3432= p;
struct nctempchar1 *nctemp3436;
static struct nctempchar1 nctemp3437 = {{ 4}, (char*)";\n\0"};
nctemp3436=&nctemp3437;
nctempchar1* nctemp3434= nctemp3436;
int nctemp3438=CodeEs(nctemp3432,nctemp3434);
return 1;
}
int CodeFdeclaration (struct tree* p,struct symbol* tp)
{
int noargs;
struct symbol* nctemp3445= tp;
nctempchar1* nctemp3447=SymGetstruct(nctemp3445);
nctempchar1* nctemp3443= nctemp3447;
struct nctempchar1 *nctemp3450;
static struct nctempchar1 nctemp3451 = {{ 7}, (char*)"struct\0"};
nctemp3450=&nctemp3451;
nctempchar1* nctemp3448= nctemp3450;
int nctemp3452=LibeStrcmp(nctemp3443,nctemp3448);
int nctemp3440 = (nctemp3452 ==1);
if(nctemp3440)
{
struct tree* nctemp3455= p;
struct nctempchar1 *nctemp3459;
static struct nctempchar1 nctemp3460 = {{ 8}, (char*)"struct \0"};
nctemp3459=&nctemp3460;
nctempchar1* nctemp3457= nctemp3459;
int nctemp3461=CodeEs(nctemp3455,nctemp3457);
}
struct symbol* nctemp3467= tp;
nctempchar1* nctemp3469=SymGetarray(nctemp3467);
nctempchar1* nctemp3465= nctemp3469;
struct nctempchar1 *nctemp3472;
static struct nctempchar1 nctemp3473 = {{ 6}, (char*)"array\0"};
nctemp3472=&nctemp3473;
nctempchar1* nctemp3470= nctemp3472;
int nctemp3474=LibeStrcmp(nctemp3465,nctemp3470);
int nctemp3462 = (nctemp3474 ==1);
if(nctemp3462)
{
struct tree* nctemp3477= p;
struct nctempchar1 *nctemp3481;
static struct nctempchar1 nctemp3482 = {{ 7}, (char*)"nctemp\0"};
nctemp3481=&nctemp3482;
nctempchar1* nctemp3479= nctemp3481;
int nctemp3483=CodeEs(nctemp3477,nctemp3479);
}
struct tree* nctemp3485= p;
struct symbol* nctemp3489= tp;
nctempchar1* nctemp3491=SymGetype(nctemp3489);
nctempchar1* nctemp3487= nctemp3491;
int nctemp3492=CodeEs(nctemp3485,nctemp3487);
struct symbol* nctemp3498= tp;
nctempchar1* nctemp3500=SymGetarray(nctemp3498);
nctempchar1* nctemp3496= nctemp3500;
struct nctempchar1 *nctemp3503;
static struct nctempchar1 nctemp3504 = {{ 6}, (char*)"array\0"};
nctemp3503=&nctemp3504;
nctempchar1* nctemp3501= nctemp3503;
int nctemp3505=LibeStrcmp(nctemp3496,nctemp3501);
int nctemp3493 = (nctemp3505 ==1);
if(nctemp3493)
{
struct symbol* nctemp3510= tp;
int nctemp3512=SymGetrank(nctemp3510);
int nctemp3508= nctemp3512;
int nctemp3513=CodeEd(nctemp3508);
struct tree* nctemp3515= p;
struct nctempchar1 *nctemp3519;
static struct nctempchar1 nctemp3520 = {{ 2}, (char*)"*\0"};
nctemp3519=&nctemp3520;
nctempchar1* nctemp3517= nctemp3519;
int nctemp3521=CodeEs(nctemp3515,nctemp3517);
}
struct symbol* nctemp3527= tp;
nctempchar1* nctemp3529=SymGetstruct(nctemp3527);
nctempchar1* nctemp3525= nctemp3529;
struct nctempchar1 *nctemp3532;
static struct nctempchar1 nctemp3533 = {{ 7}, (char*)"struct\0"};
nctemp3532=&nctemp3533;
nctempchar1* nctemp3530= nctemp3532;
int nctemp3534=LibeStrcmp(nctemp3525,nctemp3530);
int nctemp3522 = (nctemp3534 ==1);
if(nctemp3522)
{
struct tree* nctemp3537= p;
struct nctempchar1 *nctemp3541;
static struct nctempchar1 nctemp3542 = {{ 2}, (char*)"*\0"};
nctemp3541=&nctemp3542;
nctempchar1* nctemp3539= nctemp3541;
int nctemp3543=CodeEs(nctemp3537,nctemp3539);
}
struct tree* nctemp3545= p;
struct nctempchar1 *nctemp3549;
static struct nctempchar1 nctemp3550 = {{ 2}, (char*)" \0"};
nctemp3549=&nctemp3550;
nctempchar1* nctemp3547= nctemp3549;
int nctemp3551=CodeEs(nctemp3545,nctemp3547);
struct tree* nctemp3553= p;
struct symbol* nctemp3557= tp;
nctempchar1* nctemp3559=SymGetname(nctemp3557);
nctempchar1* nctemp3555= nctemp3559;
int nctemp3560=CodeEs(nctemp3553,nctemp3555);
struct tree* nctemp3562= p;
struct nctempchar1 *nctemp3566;
static struct nctempchar1 nctemp3567 = {{ 3}, (char*)" (\0"};
nctemp3566=&nctemp3567;
nctempchar1* nctemp3564= nctemp3566;
int nctemp3568=CodeEs(nctemp3562,nctemp3564);
struct symbol* nctemp3573= tp;
struct symbol* nctemp3575=SymGetable(nctemp3573);
tp =nctemp3575;
struct nctempchar1 *nctemp3582;
static struct nctempchar1 nctemp3583 = {{ 9}, (char*)"#arglist\0"};
nctemp3582=&nctemp3583;
nctempchar1* nctemp3580= nctemp3582;
struct symbol* nctemp3584= tp;
struct symbol* nctemp3586=SymLookup(nctemp3580,nctemp3584);
tp =nctemp3586;
struct symbol* nctemp3591= tp;
struct symbol* nctemp3593=SymGetable(nctemp3591);
tp =nctemp3593;
noargs =0;
struct symbol* nctemp3605= tp;
struct symbol* nctemp3607=SymMvnext(nctemp3605);
tp =nctemp3607;
int nctemp3598 = (tp !=0);
int nctemp3609=nctemp3598;
while(nctemp3609)
{{
struct tree* nctemp3611= p;
struct symbol* nctemp3613= tp;
int nctemp3615=CodeIdeclaration(nctemp3611,nctemp3613);
struct symbol* nctemp3619= tp;
struct symbol* nctemp3621=SymMvnext(nctemp3619);
int nctemp3616 = (nctemp3621 !=0);
if(nctemp3616)
{
struct tree* nctemp3624= p;
struct nctempchar1 *nctemp3628;
static struct nctempchar1 nctemp3629 = {{ 2}, (char*)",\0"};
nctemp3628=&nctemp3629;
nctempchar1* nctemp3626= nctemp3628;
int nctemp3630=CodeEs(nctemp3624,nctemp3626);
}
int nctemp3639 = noargs + 1;
noargs =nctemp3639;
}
struct symbol* nctemp3647= tp;
struct symbol* nctemp3649=SymMvnext(nctemp3647);
tp =nctemp3649;
int nctemp3640 = (tp !=0);
nctemp3609=nctemp3640;}struct tree* nctemp3652= p;
struct nctempchar1 *nctemp3656;
static struct nctempchar1 nctemp3657 = {{ 5}, (char*)");\n\0"};
nctemp3656=&nctemp3657;
nctempchar1* nctemp3654= nctemp3656;
int nctemp3658=CodeEs(nctemp3652,nctemp3654);
return 1;
}
int CodeWdeclaration (struct tree* p)
{
struct tree* np;
struct tree* nctemp3664= p;
struct tree* nctemp3666=PtreeMvchild(nctemp3664);
np =nctemp3666;
int nctemp3667 = (np !=0);
int nctemp3671=nctemp3667;
while(nctemp3671)
{{
struct tree* nctemp3677= np;
nctempchar1* nctemp3679=PtreeGetname(nctemp3677);
nctempchar1* nctemp3675= nctemp3679;
struct nctempchar1 *nctemp3682;
static struct nctempchar1 nctemp3683 = {{ 5}, (char*)"fdef\0"};
nctemp3682=&nctemp3683;
nctempchar1* nctemp3680= nctemp3682;
int nctemp3684=LibeStrcmp(nctemp3675,nctemp3680);
int nctemp3672 = (nctemp3684 ==1);
if(nctemp3672)
{
struct tree* nctemp3687= np;
int nctemp3689=CodeFdef(nctemp3687);
}
struct tree* nctemp3694= np;
struct tree* nctemp3696=PtreeMvsister(nctemp3694);
np =nctemp3696;
}
int nctemp3697 = (np !=0);
nctemp3671=nctemp3697;}return 1;
}
int CodeWdeclarations (struct tree* p)
{
int nctemp3702 = (p !=0);
int nctemp3706=nctemp3702;
while(nctemp3706)
{{
struct tree* nctemp3715= p;
nctempchar1* nctemp3717=PtreeGetname(nctemp3715);
nctempchar1* nctemp3713= nctemp3717;
struct nctempchar1 *nctemp3720;
static struct nctempchar1 nctemp3721 = {{ 5}, (char*)"type\0"};
nctemp3720=&nctemp3721;
nctempchar1* nctemp3718= nctemp3720;
int nctemp3722=LibeStrcmp(nctemp3713,nctemp3718);
int nctemp3710 = (nctemp3722 ==1);
struct tree* nctemp3730= p;
nctempchar1* nctemp3732=PtreeGetname(nctemp3730);
nctempchar1* nctemp3728= nctemp3732;
struct nctempchar1 *nctemp3735;
static struct nctempchar1 nctemp3736 = {{ 7}, (char*)"struct\0"};
nctemp3735=&nctemp3736;
nctempchar1* nctemp3733= nctemp3735;
int nctemp3737=LibeStrcmp(nctemp3728,nctemp3733);
int nctemp3725 = (nctemp3737 ==1);
int nctemp3707 = (nctemp3710 || nctemp3725);
if(nctemp3707)
{
struct tree* nctemp3740= p;
int nctemp3742=CodeWdeclaration(nctemp3740);
}
struct tree* nctemp3747= p;
struct tree* nctemp3749=PtreeMvsister(nctemp3747);
p =nctemp3749;
}
int nctemp3750 = (p !=0);
nctemp3706=nctemp3750;}return 1;
}
int CodeArrayex (int line,nctempchar1 *qual,nctempchar1 *sel,nctempchar1 *name,nctempchar1 *ival,int index)
{
struct tree* p;
nctempchar1 *tmp;
nctempchar1 *qname;
struct nctempchar1 *nctemp3761;
static struct nctempchar1 nctemp3762 = {{ 6}, (char*)"dummy\0"};
nctemp3761=&nctemp3762;
nctempchar1* nctemp3759= nctemp3761;
struct nctempchar1 *nctemp3765;
static struct nctempchar1 nctemp3766 = {{ 6}, (char*)"dummy\0"};
nctemp3765=&nctemp3766;
nctempchar1* nctemp3763= nctemp3765;
struct tree* nctemp3767=PtreeMknode(nctemp3759,nctemp3763);
p =nctemp3767;
struct tree* nctemp3769= p;
int nctemp3771= line;
int nctemp3773=PtreeSetline(nctemp3769,nctemp3771);
nctempchar1 *nctemp3775 =qual;
int nctemp3774 =(nctemp3775!=0);
if(nctemp3774)
{
nctempchar1* nctemp3784= qual;
struct nctempchar1 *nctemp3789;
static struct nctempchar1 nctemp3790 = {{ 3}, (char*)"->\0"};
nctemp3789=&nctemp3790;
nctempchar1* nctemp3787= nctemp3789;
nctempchar1* nctemp3791=LibeStradd(nctemp3784,nctemp3787);
tmp=nctemp3791;
nctempchar1* nctemp3797= tmp;
nctempchar1* nctemp3800= name;
nctempchar1* nctemp3803=LibeStradd(nctemp3797,nctemp3800);
qname=nctemp3803;
RunFree(tmp->a);
RunFree(tmp);
}
struct tree* nctemp3808= p;
struct nctempchar1 *nctemp3812;
static struct nctempchar1 nctemp3813 = {{ 7}, (char*)"if((0>\0"};
nctemp3812=&nctemp3813;
nctempchar1* nctemp3810= nctemp3812;
int nctemp3814=CodeEs(nctemp3808,nctemp3810);
struct tree* nctemp3816= p;
nctempchar1* nctemp3818= ival;
int nctemp3821=CodeEs(nctemp3816,nctemp3818);
struct tree* nctemp3823= p;
struct nctempchar1 *nctemp3827;
static struct nctempchar1 nctemp3828 = {{ 5}, (char*)")||(\0"};
nctemp3827=&nctemp3828;
nctempchar1* nctemp3825= nctemp3827;
int nctemp3829=CodeEs(nctemp3823,nctemp3825);
struct tree* nctemp3831= p;
nctempchar1* nctemp3833= ival;
int nctemp3836=CodeEs(nctemp3831,nctemp3833);
struct tree* nctemp3838= p;
struct nctempchar1 *nctemp3842;
static struct nctempchar1 nctemp3843 = {{ 3}, (char*)">=\0"};
nctemp3842=&nctemp3843;
nctempchar1* nctemp3840= nctemp3842;
int nctemp3844=CodeEs(nctemp3838,nctemp3840);
nctempchar1 *nctemp3846 =qual;
int nctemp3845 =(nctemp3846!=0);
if(nctemp3845)
{
struct tree* nctemp3851= p;
nctempchar1* nctemp3853= qual;
int nctemp3856=CodeEs(nctemp3851,nctemp3853);
struct tree* nctemp3858= p;
nctempchar1* nctemp3860= sel;
int nctemp3863=CodeEs(nctemp3858,nctemp3860);
}
struct tree* nctemp3865= p;
nctempchar1* nctemp3867= name;
int nctemp3870=CodeEs(nctemp3865,nctemp3867);
struct tree* nctemp3872= p;
struct nctempchar1 *nctemp3876;
static struct nctempchar1 nctemp3877 = {{ 5}, (char*)"->d[\0"};
nctemp3876=&nctemp3877;
nctempchar1* nctemp3874= nctemp3876;
int nctemp3878=CodeEs(nctemp3872,nctemp3874);
int nctemp3880= index;
int nctemp3882=CodeEd(nctemp3880);
struct tree* nctemp3884= p;
struct nctempchar1 *nctemp3888;
static struct nctempchar1 nctemp3889 = {{ 7}, (char*)"])){\n\0"};
nctemp3888=&nctemp3889;
nctempchar1* nctemp3886= nctemp3888;
int nctemp3890=CodeEs(nctemp3884,nctemp3886);
struct tree* nctemp3892= p;
struct nctempchar1 *nctemp3896;
static struct nctempchar1 nctemp3897 = {{ 67}, (char*)"printf(\"***Out of bounds error (file,array,line,index,rank,bound:\0"};
nctemp3896=&nctemp3897;
nctempchar1* nctemp3894= nctemp3896;
int nctemp3898=CodeEs(nctemp3892,nctemp3894);
struct tree* nctemp3900= p;
nctempchar1* nctemp3904=ScanGetfile();
nctempchar1* nctemp3902= nctemp3904;
int nctemp3905=CodeEs(nctemp3900,nctemp3902);
struct tree* nctemp3907= p;
struct nctempchar1 *nctemp3911;
static struct nctempchar1 nctemp3912 = {{ 2}, (char*)" \0"};
nctemp3911=&nctemp3912;
nctempchar1* nctemp3909= nctemp3911;
int nctemp3913=CodeEs(nctemp3907,nctemp3909);
struct tree* nctemp3915= p;
nctempchar1* nctemp3917= qname;
int nctemp3920=CodeEs(nctemp3915,nctemp3917);
struct tree* nctemp3922= p;
struct nctempchar1 *nctemp3926;
static struct nctempchar1 nctemp3927 = {{ 17}, (char*)" %d %d %d %d \\n\0"};
nctemp3926=&nctemp3927;
nctempchar1* nctemp3924= nctemp3926;
int nctemp3928=CodeEs(nctemp3922,nctemp3924);
struct tree* nctemp3930= p;
struct nctempchar1 *nctemp3934;
static struct nctempchar1 nctemp3935 = {{ 6}, (char*)" \" ,\0"};
nctemp3934=&nctemp3935;
nctempchar1* nctemp3932= nctemp3934;
int nctemp3936=CodeEs(nctemp3930,nctemp3932);
int nctemp3938= line;
int nctemp3940=CodeEd(nctemp3938);
struct tree* nctemp3942= p;
struct nctempchar1 *nctemp3946;
static struct nctempchar1 nctemp3947 = {{ 2}, (char*)",\0"};
nctemp3946=&nctemp3947;
nctempchar1* nctemp3944= nctemp3946;
int nctemp3948=CodeEs(nctemp3942,nctemp3944);
struct tree* nctemp3950= p;
nctempchar1* nctemp3952= ival;
int nctemp3955=CodeEs(nctemp3950,nctemp3952);
struct tree* nctemp3957= p;
struct nctempchar1 *nctemp3961;
static struct nctempchar1 nctemp3962 = {{ 2}, (char*)",\0"};
nctemp3961=&nctemp3962;
nctempchar1* nctemp3959= nctemp3961;
int nctemp3963=CodeEs(nctemp3957,nctemp3959);
int nctemp3965= index;
int nctemp3967=CodeEd(nctemp3965);
struct tree* nctemp3969= p;
struct nctempchar1 *nctemp3973;
static struct nctempchar1 nctemp3974 = {{ 2}, (char*)",\0"};
nctemp3973=&nctemp3974;
nctempchar1* nctemp3971= nctemp3973;
int nctemp3975=CodeEs(nctemp3969,nctemp3971);
struct tree* nctemp3977= p;
nctempchar1* nctemp3979= qname;
int nctemp3982=CodeEs(nctemp3977,nctemp3979);
struct tree* nctemp3984= p;
struct nctempchar1 *nctemp3988;
static struct nctempchar1 nctemp3989 = {{ 5}, (char*)"->d[\0"};
nctemp3988=&nctemp3989;
nctempchar1* nctemp3986= nctemp3988;
int nctemp3990=CodeEs(nctemp3984,nctemp3986);
int nctemp3992= index;
int nctemp3994=CodeEd(nctemp3992);
struct tree* nctemp3996= p;
struct nctempchar1 *nctemp4000;
static struct nctempchar1 nctemp4001 = {{ 4}, (char*)"]-1\0"};
nctemp4000=&nctemp4001;
nctempchar1* nctemp3998= nctemp4000;
int nctemp4002=CodeEs(nctemp3996,nctemp3998);
struct tree* nctemp4004= p;
struct nctempchar1 *nctemp4008;
static struct nctempchar1 nctemp4009 = {{ 3}, (char*)");\0"};
nctemp4008=&nctemp4009;
nctempchar1* nctemp4006= nctemp4008;
int nctemp4010=CodeEs(nctemp4004,nctemp4006);
struct tree* nctemp4012= p;
struct nctempchar1 *nctemp4016;
static struct nctempchar1 nctemp4017 = {{ 6}, (char*)"\n}\n\0"};
nctemp4016=&nctemp4017;
nctempchar1* nctemp4014= nctemp4016;
int nctemp4018=CodeEs(nctemp4012,nctemp4014);
RunFree(qname->a);
RunFree(qname);
return 1;
}
nctempchar1 * CodeArray (struct tree* p,nctempchar1 *qual,nctempchar1 *sel)
{
nctempchar1 *name;
nctempchar1 *temp;
nctempchar1 *temp2;
struct symbol* tp;
struct tree* sp;
int rank;
int size;
nctempchar1 *rval;
int i;
struct tree* nctemp4028= p;
nctempchar1* nctemp4030=PtreeGetdef(nctemp4028);
name=nctemp4030;
nctempchar1* nctemp4036=CodeMktemp();
temp=nctemp4036;
nctempchar1* nctemp4041= name;
struct symbol* nctemp4044=SymLook(nctemp4041);
tp =nctemp4044;
int nctemp4045 = (tp ==0);
if(nctemp4045)
{
nctempchar1* nctemp4050= name;
int nctemp4053=CodeError(nctemp4050);
}
struct tree* nctemp4058= p;
struct tree* nctemp4060=PtreeMvchild(nctemp4058);
sp =nctemp4060;
int nctemp4061 = (sp ==0);
if(nctemp4061)
{
struct tree* nctemp4066= p;
nctempchar1* nctemp4068=PtreeGetdef(nctemp4066);
return nctemp4068;
}
else{
struct tree* nctemp4074= sp;
nctempchar1* nctemp4076=PtreeGetname(nctemp4074);
nctempchar1* nctemp4072= nctemp4076;
struct nctempchar1 *nctemp4079;
static struct nctempchar1 nctemp4080 = {{ 9}, (char*)"exprlist\0"};
nctemp4079=&nctemp4080;
nctempchar1* nctemp4077= nctemp4079;
int nctemp4081=LibeStrcmp(nctemp4072,nctemp4077);
int nctemp4069 = (nctemp4081 ==0);
if(nctemp4069)
{
struct tree* nctemp4084= p;
nctempchar1* nctemp4086=PtreeGetdef(nctemp4084);
return nctemp4086;
}
}
struct symbol* nctemp4091= tp;
int nctemp4093=SymGetrank(nctemp4091);
rank =nctemp4093;
struct tree* nctemp4098= p;
struct tree* nctemp4100=PtreeMvchild(nctemp4098);
p =nctemp4100;
struct tree* nctemp4105= p;
struct tree* nctemp4107=PtreeMvchild(nctemp4105);
p =nctemp4107;
sp =p;
i =0;
int nctemp4116 = (i < rank);
while(nctemp4116){
{
int nctemp4120 = (i ==0);
if(nctemp4120)
{
struct tree* nctemp4129= p;
nctempchar1* nctemp4131=CodeExpr(nctemp4129);
temp2=nctemp4131;
struct tree* nctemp4133= p;
struct tree* nctemp4137= p;
nctempchar1* nctemp4139=PtreeGetype(nctemp4137);
nctempchar1* nctemp4135= nctemp4139;
int nctemp4140=CodeEs(nctemp4133,nctemp4135);
struct tree* nctemp4142= p;
struct nctempchar1 *nctemp4146;
static struct nctempchar1 nctemp4147 = {{ 2}, (char*)" \0"};
nctemp4146=&nctemp4147;
nctempchar1* nctemp4144= nctemp4146;
int nctemp4148=CodeEs(nctemp4142,nctemp4144);
struct tree* nctemp4150= p;
nctempchar1* nctemp4152= temp;
int nctemp4155=CodeEs(nctemp4150,nctemp4152);
struct tree* nctemp4157= p;
struct nctempchar1 *nctemp4161;
static struct nctempchar1 nctemp4162 = {{ 2}, (char*)"=\0"};
nctemp4161=&nctemp4162;
nctempchar1* nctemp4159= nctemp4161;
int nctemp4163=CodeEs(nctemp4157,nctemp4159);
struct tree* nctemp4165= p;
nctempchar1* nctemp4167= temp2;
int nctemp4170=CodeEs(nctemp4165,nctemp4167);
struct tree* nctemp4172= p;
struct nctempchar1 *nctemp4176;
static struct nctempchar1 nctemp4177 = {{ 4}, (char*)";\n\0"};
nctemp4176=&nctemp4177;
nctempchar1* nctemp4174= nctemp4176;
int nctemp4178=CodeEs(nctemp4172,nctemp4174);
int nctemp4180=CodeArraycheck();
if(nctemp4180)
{
struct tree* nctemp4184= p;
int nctemp4186=PtreeGetline(nctemp4184);
int nctemp4182= nctemp4186;
nctempchar1* nctemp4187= qual;
nctempchar1* nctemp4190= sel;
nctempchar1* nctemp4193= name;
nctempchar1* nctemp4196= temp2;
int nctemp4199= i;
int nctemp4201=CodeArrayex(nctemp4182,nctemp4187,nctemp4190,nctemp4193,nctemp4196,nctemp4199);
}
}
else{
struct tree* nctemp4207= sp;
nctempchar1* nctemp4209=CodeExpr(nctemp4207);
temp2=nctemp4209;
struct tree* nctemp4211= p;
nctempchar1* nctemp4213= temp;
int nctemp4216=CodeEs(nctemp4211,nctemp4213);
struct tree* nctemp4218= p;
struct nctempchar1 *nctemp4222;
static struct nctempchar1 nctemp4223 = {{ 2}, (char*)"=\0"};
nctemp4222=&nctemp4223;
nctempchar1* nctemp4220= nctemp4222;
int nctemp4224=CodeEs(nctemp4218,nctemp4220);
struct tree* nctemp4226= p;
nctempchar1* nctemp4228= temp2;
int nctemp4231=CodeEs(nctemp4226,nctemp4228);
struct tree* nctemp4233= p;
struct nctempchar1 *nctemp4237;
static struct nctempchar1 nctemp4238 = {{ 2}, (char*)"*\0"};
nctemp4237=&nctemp4238;
nctempchar1* nctemp4235= nctemp4237;
int nctemp4239=CodeEs(nctemp4233,nctemp4235);
nctempchar1 *nctemp4241 =qual;
int nctemp4240 =(nctemp4241!=0);
if(nctemp4240)
{
struct tree* nctemp4246= p;
nctempchar1* nctemp4248= qual;
int nctemp4251=CodeEs(nctemp4246,nctemp4248);
}
nctempchar1 *nctemp4253 =sel;
int nctemp4252 =(nctemp4253!=0);
if(nctemp4252)
{
struct tree* nctemp4258= p;
nctempchar1* nctemp4260= sel;
int nctemp4263=CodeEs(nctemp4258,nctemp4260);
}
struct tree* nctemp4265= p;
nctempchar1* nctemp4267= name;
int nctemp4270=CodeEs(nctemp4265,nctemp4267);
struct tree* nctemp4272= p;
struct nctempchar1 *nctemp4276;
static struct nctempchar1 nctemp4277 = {{ 4}, (char*)"->d\0"};
nctemp4276=&nctemp4277;
nctempchar1* nctemp4274= nctemp4276;
int nctemp4278=CodeEs(nctemp4272,nctemp4274);
struct tree* nctemp4280= p;
struct nctempchar1 *nctemp4284;
static struct nctempchar1 nctemp4285 = {{ 2}, (char*)"[\0"};
nctemp4284=&nctemp4285;
nctempchar1* nctemp4282= nctemp4284;
int nctemp4286=CodeEs(nctemp4280,nctemp4282);
int nctemp4293 = i - 1;
int nctemp4288= nctemp4293;
int nctemp4294=CodeEd(nctemp4288);
struct tree* nctemp4296= p;
struct nctempchar1 *nctemp4300;
static struct nctempchar1 nctemp4301 = {{ 2}, (char*)"]\0"};
nctemp4300=&nctemp4301;
nctempchar1* nctemp4298= nctemp4300;
int nctemp4302=CodeEs(nctemp4296,nctemp4298);
struct tree* nctemp4304= p;
struct nctempchar1 *nctemp4308;
static struct nctempchar1 nctemp4309 = {{ 2}, (char*)"+\0"};
nctemp4308=&nctemp4309;
nctempchar1* nctemp4306= nctemp4308;
int nctemp4310=CodeEs(nctemp4304,nctemp4306);
struct tree* nctemp4312= p;
nctempchar1* nctemp4314= temp;
int nctemp4317=CodeEs(nctemp4312,nctemp4314);
struct tree* nctemp4319= p;
struct nctempchar1 *nctemp4323;
static struct nctempchar1 nctemp4324 = {{ 4}, (char*)";\n\0"};
nctemp4323=&nctemp4324;
nctempchar1* nctemp4321= nctemp4323;
int nctemp4325=CodeEs(nctemp4319,nctemp4321);
int nctemp4327=CodeArraycheck();
if(nctemp4327)
{
struct tree* nctemp4331= p;
int nctemp4333=PtreeGetline(nctemp4331);
int nctemp4329= nctemp4333;
nctempchar1* nctemp4334= qual;
nctempchar1* nctemp4337= sel;
nctempchar1* nctemp4340= name;
nctempchar1* nctemp4343= temp2;
int nctemp4346= i;
int nctemp4348=CodeArrayex(nctemp4329,nctemp4334,nctemp4337,nctemp4340,nctemp4343,nctemp4346);
}
}
int nctemp4349 = (sp !=0);
if(nctemp4349)
{
struct tree* nctemp4357= sp;
struct tree* nctemp4359=PtreeMvsister(nctemp4357);
sp =nctemp4359;
}
}
int nctemp4368 = i + 1;
i =nctemp4368;
int nctemp4369 = (i < rank);
nctemp4116=nctemp4369;
}
nctempchar1* nctemp4383= name;
int nctemp4386=LibeStrlen(nctemp4383);
nctempchar1* nctemp4388= temp;
int nctemp4391=LibeStrlen(nctemp4388);
int nctemp4392 = nctemp4386 + nctemp4391;
int nctemp4394 = nctemp4392 + 6;
size =nctemp4394;
int nctemp4401=size;
nctempchar1 *nctemp4400;
nctemp4400=(nctempchar1*)RunMalloc(sizeof(nctempchar1));
nctemp4400->d[0]=size;
nctemp4400->a=(char *)RunMalloc(sizeof(char)*nctemp4401);
rval=nctemp4400;
nctempchar1* nctemp4405= name;
nctempchar1* nctemp4408= rval;
int nctemp4411=LibeStrcpy(nctemp4405,nctemp4408);
struct nctempchar1 *nctemp4415;
static struct nctempchar1 nctemp4416 = {{ 4}, (char*)"->a\0"};
nctemp4415=&nctemp4416;
nctempchar1* nctemp4413= nctemp4415;
nctempchar1* nctemp4417= rval;
int nctemp4420=LibeStrcat(nctemp4413,nctemp4417);
struct nctempchar1 *nctemp4424;
static struct nctempchar1 nctemp4425 = {{ 2}, (char*)"[\0"};
nctemp4424=&nctemp4425;
nctempchar1* nctemp4422= nctemp4424;
nctempchar1* nctemp4426= rval;
int nctemp4429=LibeStrcat(nctemp4422,nctemp4426);
nctempchar1* nctemp4431= temp;
nctempchar1* nctemp4434= rval;
int nctemp4437=LibeStrcat(nctemp4431,nctemp4434);
struct nctempchar1 *nctemp4441;
static struct nctempchar1 nctemp4442 = {{ 2}, (char*)"]\0"};
nctemp4441=&nctemp4442;
nctempchar1* nctemp4439= nctemp4441;
nctempchar1* nctemp4443= rval;
int nctemp4446=LibeStrcat(nctemp4439,nctemp4443);
return rval;
}
nctempchar1 * CodeQident (nctempchar1 *qual,nctempchar1 *ident)
{
int lq;
int li;
nctempchar1 *name;
nctempchar1* nctemp4453= qual;
int nctemp4456=LibeStrlen(nctemp4453);
lq =nctemp4456;
nctempchar1* nctemp4461= ident;
int nctemp4464=LibeStrlen(nctemp4461);
li =nctemp4464;
int nctemp4479 = lq + li;
int nctemp4481 = nctemp4479 + 2;
int nctemp4471=nctemp4481;
nctempchar1 *nctemp4470;
nctemp4470=(nctempchar1*)RunMalloc(sizeof(nctempchar1));
int nctemp4489 = lq + li;
int nctemp4491 = nctemp4489 + 2;
nctemp4470->d[0]=nctemp4491;
nctemp4470->a=(char *)RunMalloc(sizeof(char)*nctemp4471);
name=nctemp4470;
nctempchar1* nctemp4493= qual;
nctempchar1* nctemp4496= name;
int nctemp4499=LibeStrcpy(nctemp4493,nctemp4496);
struct nctempchar1 *nctemp4503;
static struct nctempchar1 nctemp4504 = {{ 2}, (char*)".\0"};
nctemp4503=&nctemp4504;
nctempchar1* nctemp4501= nctemp4503;
nctempchar1* nctemp4505= name;
int nctemp4508=LibeStrcat(nctemp4501,nctemp4505);
nctempchar1* nctemp4510= ident;
nctempchar1* nctemp4513= name;
int nctemp4516=LibeStrcat(nctemp4510,nctemp4513);
return name;
}
nctempchar1 * CodeQident2 (nctempchar1 *qual,nctempchar1 *ident)
{
int lq;
int li;
nctempchar1 *name;
nctempchar1* nctemp4523= qual;
int nctemp4526=LibeStrlen(nctemp4523);
lq =nctemp4526;
nctempchar1* nctemp4531= ident;
int nctemp4534=LibeStrlen(nctemp4531);
li =nctemp4534;
int nctemp4549 = lq + li;
int nctemp4551 = nctemp4549 + 3;
int nctemp4541=nctemp4551;
nctempchar1 *nctemp4540;
nctemp4540=(nctempchar1*)RunMalloc(sizeof(nctempchar1));
int nctemp4559 = lq + li;
int nctemp4561 = nctemp4559 + 3;
nctemp4540->d[0]=nctemp4561;
nctemp4540->a=(char *)RunMalloc(sizeof(char)*nctemp4541);
name=nctemp4540;
nctempchar1* nctemp4563= qual;
nctempchar1* nctemp4566= name;
int nctemp4569=LibeStrcpy(nctemp4563,nctemp4566);
struct nctempchar1 *nctemp4573;
static struct nctempchar1 nctemp4574 = {{ 3}, (char*)"->\0"};
nctemp4573=&nctemp4574;
nctempchar1* nctemp4571= nctemp4573;
nctempchar1* nctemp4575= name;
int nctemp4578=LibeStrcat(nctemp4571,nctemp4575);
nctempchar1* nctemp4580= ident;
nctempchar1* nctemp4583= name;
int nctemp4586=LibeStrcat(nctemp4580,nctemp4583);
return name;
}
nctempchar1 * CodeIdent (struct tree* p)
{
nctempchar1 *qual;
nctempchar1 *name;
struct symbol* tp;
struct symbol* up;
struct symbol* uup;
struct tree* np;
qual=(0);
struct tree* nctemp4599= p;
nctempchar1* nctemp4601=PtreeGetstruct(nctemp4599);
nctempchar1* nctemp4597= nctemp4601;
struct nctempchar1 *nctemp4604;
static struct nctempchar1 nctemp4605 = {{ 7}, (char*)"struct\0"};
nctemp4604=&nctemp4605;
nctempchar1* nctemp4602= nctemp4604;
int nctemp4606=LibeStrcmp(nctemp4597,nctemp4602);
int nctemp4594 = (nctemp4606 ==1);
if(nctemp4594)
{
struct tree* nctemp4613= p;
nctempchar1* nctemp4615=PtreeGetarray(nctemp4613);
nctempchar1* nctemp4611= nctemp4615;
struct nctempchar1 *nctemp4618;
static struct nctempchar1 nctemp4619 = {{ 6}, (char*)"array\0"};
nctemp4618=&nctemp4619;
nctempchar1* nctemp4616= nctemp4618;
int nctemp4620=LibeStrcmp(nctemp4611,nctemp4616);
int nctemp4608 = (nctemp4620 ==1);
if(nctemp4608)
{
struct tree* nctemp4627= p;
nctempchar1* nctemp4629= qual;
struct nctempchar1 *nctemp4634;
static struct nctempchar1 nctemp4635 = {{ 2}, (char*)".\0"};
nctemp4634=&nctemp4635;
nctempchar1* nctemp4632= nctemp4634;
nctempchar1* nctemp4636=CodeArray(nctemp4627,nctemp4629,nctemp4632);
qual=nctemp4636;
struct tree* nctemp4641= p;
struct tree* nctemp4643=PtreeMvchild(nctemp4641);
np =nctemp4643;
int nctemp4644 = (np ==0);
if(nctemp4644)
{
return qual;
}
struct tree* nctemp4654= np;
struct tree* nctemp4656=PtreeMvsister(nctemp4654);
np =nctemp4656;
int nctemp4657 = (np ==0);
if(nctemp4657)
{
return qual;
}
}
else{
struct tree* nctemp4668= p;
nctempchar1* nctemp4670=PtreeGetdef(nctemp4668);
qual=nctemp4670;
struct tree* nctemp4678= p;
struct tree* nctemp4680=PtreeMvchild(nctemp4678);
np =nctemp4680;
int nctemp4671 = (np ==0);
if(nctemp4671)
{
return qual;
}
}
struct tree* nctemp4689= np;
nctempchar1* nctemp4691=PtreeGetarray(nctemp4689);
nctempchar1* nctemp4687= nctemp4691;
struct nctempchar1 *nctemp4694;
static struct nctempchar1 nctemp4695 = {{ 6}, (char*)"array\0"};
nctemp4694=&nctemp4695;
nctempchar1* nctemp4692= nctemp4694;
int nctemp4696=LibeStrcmp(nctemp4687,nctemp4692);
int nctemp4684 = (nctemp4696 ==1);
if(nctemp4684)
{
struct symbol* nctemp4702=SymGetltp();
tp =nctemp4702;
struct symbol* nctemp4707=SymGetetp();
up =nctemp4707;
struct tree* nctemp4714= p;
nctempchar1* nctemp4716=PtreeGetdef(nctemp4714);
nctempchar1* nctemp4712= nctemp4716;
struct symbol* nctemp4717=SymLook(nctemp4712);
uup =nctemp4717;
struct symbol* nctemp4724= uup;
nctempchar1* nctemp4726=SymGetype(nctemp4724);
nctempchar1* nctemp4722= nctemp4726;
struct symbol* nctemp4727=SymLook(nctemp4722);
uup =nctemp4727;
struct symbol* nctemp4731= uup;
struct symbol* nctemp4733=SymGetable(nctemp4731);
struct symbol* nctemp4729= nctemp4733;
struct symbol* nctemp4734=SymSetltp(nctemp4729);
struct tree* nctemp4740= p;
nctempchar1* nctemp4742=PtreeGetarray(nctemp4740);
nctempchar1* nctemp4738= nctemp4742;
struct nctempchar1 *nctemp4745;
static struct nctempchar1 nctemp4746 = {{ 6}, (char*)"array\0"};
nctemp4745=&nctemp4746;
nctempchar1* nctemp4743= nctemp4745;
int nctemp4747=LibeStrcmp(nctemp4738,nctemp4743);
int nctemp4735 = (nctemp4747 ==1);
if(nctemp4735)
{
struct tree* nctemp4754= np;
nctempchar1* nctemp4756= qual;
struct nctempchar1 *nctemp4761;
static struct nctempchar1 nctemp4762 = {{ 2}, (char*)".\0"};
nctemp4761=&nctemp4762;
nctempchar1* nctemp4759= nctemp4761;
nctempchar1* nctemp4763=CodeArray(nctemp4754,nctemp4756,nctemp4759);
name=nctemp4763;
}
else{
struct tree* nctemp4769= np;
nctempchar1* nctemp4771= qual;
struct nctempchar1 *nctemp4776;
static struct nctempchar1 nctemp4777 = {{ 3}, (char*)"->\0"};
nctemp4776=&nctemp4777;
nctempchar1* nctemp4774= nctemp4776;
nctempchar1* nctemp4778=CodeArray(nctemp4769,nctemp4771,nctemp4774);
name=nctemp4778;
}
struct symbol* nctemp4780= tp;
struct symbol* nctemp4782=SymSetltp(nctemp4780);
struct symbol* nctemp4784= up;
struct symbol* nctemp4786=SymSetetp(nctemp4784);
}
else{
struct tree* nctemp4792= np;
nctempchar1* nctemp4794=PtreeGetdef(nctemp4792);
name=nctemp4794;
}
struct tree* nctemp4800= p;
nctempchar1* nctemp4802=PtreeGetarray(nctemp4800);
nctempchar1* nctemp4798= nctemp4802;
struct nctempchar1 *nctemp4805;
static struct nctempchar1 nctemp4806 = {{ 6}, (char*)"array\0"};
nctemp4805=&nctemp4806;
nctempchar1* nctemp4803= nctemp4805;
int nctemp4807=LibeStrcmp(nctemp4798,nctemp4803);
int nctemp4795 = (nctemp4807 ==1);
if(nctemp4795)
{
nctempchar1* nctemp4810= qual;
nctempchar1* nctemp4813= name;
nctempchar1* nctemp4816=CodeQident(nctemp4810,nctemp4813);
return nctemp4816;
}
else{
nctempchar1* nctemp4818= qual;
nctempchar1* nctemp4821= name;
nctempchar1* nctemp4824=CodeQident2(nctemp4818,nctemp4821);
return nctemp4824;
}
}
else{
struct tree* nctemp4830= p;
nctempchar1* nctemp4832=PtreeGetarray(nctemp4830);
nctempchar1* nctemp4828= nctemp4832;
struct nctempchar1 *nctemp4835;
static struct nctempchar1 nctemp4836 = {{ 6}, (char*)"array\0"};
nctemp4835=&nctemp4836;
nctempchar1* nctemp4833= nctemp4835;
int nctemp4837=LibeStrcmp(nctemp4828,nctemp4833);
int nctemp4825 = (nctemp4837 ==1);
if(nctemp4825)
{
name=(0);
qual=(0);
struct tree* nctemp4854= p;
nctempchar1* nctemp4856= qual;
nctempchar1* nctemp4859= name;
nctempchar1* nctemp4862=CodeArray(nctemp4854,nctemp4856,nctemp4859);
qual=nctemp4862;
return qual;
}
else{
struct tree* nctemp4866= p;
nctempchar1* nctemp4868=PtreeGetdef(nctemp4866);
return nctemp4868;
}
}
}
nctempchar1 * CodeNew (struct tree* p)
{
struct tree* sp;
struct tree* top;
nctempchar1 *type;
nctempchar1 *totdim;
nctempchar1 *dim;
nctempchar1 *pointer;
nctempchar1 *structflag;
nctempchar1 *arrayflag;
int rank;
int i;
nctempchar1* nctemp4874=CodeMktemp();
pointer=nctemp4874;
nctempchar1* nctemp4880=CodeMktemp();
totdim=nctemp4880;
struct tree* nctemp4885= p;
struct tree* nctemp4887=PtreeMvchild(nctemp4885);
p =nctemp4887;
struct tree* nctemp4893= p;
nctempchar1* nctemp4895=PtreeGetdef(nctemp4893);
type=nctemp4895;
struct tree* nctemp4901= p;
nctempchar1* nctemp4903=PtreeGetstruct(nctemp4901);
structflag=nctemp4903;
struct tree* nctemp4909= p;
nctempchar1* nctemp4911=PtreeGetarray(nctemp4909);
arrayflag=nctemp4911;
struct tree* nctemp4917= p;
nctempchar1* nctemp4919=PtreeGetarray(nctemp4917);
nctempchar1* nctemp4915= nctemp4919;
struct nctempchar1 *nctemp4922;
static struct nctempchar1 nctemp4923 = {{ 6}, (char*)"array\0"};
nctemp4922=&nctemp4923;
nctempchar1* nctemp4920= nctemp4922;
int nctemp4924=LibeStrcmp(nctemp4915,nctemp4920);
int nctemp4912 = (nctemp4924 ==1);
if(nctemp4912)
{
struct tree* nctemp4930= p;
struct tree* nctemp4932=PtreeMvchild(nctemp4930);
p =nctemp4932;
struct tree* nctemp4937= p;
struct tree* nctemp4939=PtreeMvchild(nctemp4937);
p =nctemp4939;
struct tree* nctemp4944= p;
struct tree* nctemp4946=PtreeMvchild(nctemp4944);
p =nctemp4946;
struct tree* nctemp4951= p;
struct tree* nctemp4953=PtreeMvchild(nctemp4951);
p =nctemp4953;
sp =p;
top =p;
rank =1;
struct tree* nctemp4973= p;
struct tree* nctemp4975=PtreeMvsister(nctemp4973);
p =nctemp4975;
int nctemp4966 = (p !=0);
int nctemp4977=nctemp4966;
while(nctemp4977)
{{
int nctemp4986 = rank + 1;
rank =nctemp4986;
}
struct tree* nctemp4994= p;
struct tree* nctemp4996=PtreeMvsister(nctemp4994);
p =nctemp4996;
int nctemp4987 = (p !=0);
nctemp4977=nctemp4987;}int nctemp4998 = (rank > 4);
if(nctemp4998)
{
struct nctempchar1 *nctemp5005;
static struct nctempchar1 nctemp5006 = {{ 29}, (char*)"Array dimension is too large\0"};
nctemp5005=&nctemp5006;
nctempchar1* nctemp5003= nctemp5005;
int nctemp5007=CodeError(nctemp5003);
}
p =sp;
i =0;
int nctemp5016 = (p !=0);
int nctemp5020=nctemp5016;
while(nctemp5020)
{{
struct tree* nctemp5026= p;
nctempchar1* nctemp5028=CodeExpr(nctemp5026);
dim=nctemp5028;
int nctemp5029 = (i ==0);
if(nctemp5029)
{
struct tree* nctemp5034= p;
struct tree* nctemp5038= p;
nctempchar1* nctemp5040=PtreeGetype(nctemp5038);
nctempchar1* nctemp5036= nctemp5040;
int nctemp5041=CodeEs(nctemp5034,nctemp5036);
struct tree* nctemp5043= p;
struct nctempchar1 *nctemp5047;
static struct nctempchar1 nctemp5048 = {{ 2}, (char*)" \0"};
nctemp5047=&nctemp5048;
nctempchar1* nctemp5045= nctemp5047;
int nctemp5049=CodeEs(nctemp5043,nctemp5045);
struct tree* nctemp5051= p;
nctempchar1* nctemp5053= totdim;
int nctemp5056=CodeEs(nctemp5051,nctemp5053);
struct tree* nctemp5058= p;
struct nctempchar1 *nctemp5062;
static struct nctempchar1 nctemp5063 = {{ 2}, (char*)"=\0"};
nctemp5062=&nctemp5063;
nctempchar1* nctemp5060= nctemp5062;
int nctemp5064=CodeEs(nctemp5058,nctemp5060);
struct tree* nctemp5066= p;
nctempchar1* nctemp5068= dim;
int nctemp5071=CodeEs(nctemp5066,nctemp5068);
}
else{
struct tree* nctemp5073= p;
nctempchar1* nctemp5075= totdim;
int nctemp5078=CodeEs(nctemp5073,nctemp5075);
struct tree* nctemp5080= p;
struct nctempchar1 *nctemp5084;
static struct nctempchar1 nctemp5085 = {{ 2}, (char*)"=\0"};
nctemp5084=&nctemp5085;
nctempchar1* nctemp5082= nctemp5084;
int nctemp5086=CodeEs(nctemp5080,nctemp5082);
struct tree* nctemp5088= p;
nctempchar1* nctemp5090= totdim;
int nctemp5093=CodeEs(nctemp5088,nctemp5090);
struct tree* nctemp5095= p;
struct nctempchar1 *nctemp5099;
static struct nctempchar1 nctemp5100 = {{ 2}, (char*)"*\0"};
nctemp5099=&nctemp5100;
nctempchar1* nctemp5097= nctemp5099;
int nctemp5101=CodeEs(nctemp5095,nctemp5097);
struct tree* nctemp5103= p;
nctempchar1* nctemp5105= dim;
int nctemp5108=CodeEs(nctemp5103,nctemp5105);
}
struct tree* nctemp5110= p;
struct nctempchar1 *nctemp5114;
static struct nctempchar1 nctemp5115 = {{ 4}, (char*)";\n\0"};
nctemp5114=&nctemp5115;
nctempchar1* nctemp5112= nctemp5114;
int nctemp5116=CodeEs(nctemp5110,nctemp5112);
int nctemp5125 = i + 1;
i =nctemp5125;
struct tree* nctemp5130= p;
struct tree* nctemp5132=PtreeMvsister(nctemp5130);
p =nctemp5132;
}
int nctemp5133 = (p !=0);
nctemp5020=nctemp5133;}}
nctempchar1* nctemp5143= structflag;
struct nctempchar1 *nctemp5148;
static struct nctempchar1 nctemp5149 = {{ 7}, (char*)"struct\0"};
nctemp5148=&nctemp5149;
nctempchar1* nctemp5146= nctemp5148;
int nctemp5150=LibeStrcmp(nctemp5143,nctemp5146);
int nctemp5140 = (nctemp5150 ==1);
nctempchar1* nctemp5156= arrayflag;
struct nctempchar1 *nctemp5161;
static struct nctempchar1 nctemp5162 = {{ 6}, (char*)"array\0"};
nctemp5161=&nctemp5162;
nctempchar1* nctemp5159= nctemp5161;
int nctemp5163=LibeStrcmp(nctemp5156,nctemp5159);
int nctemp5153 = (nctemp5163 ==0);
int nctemp5137 = (nctemp5140 && nctemp5153);
if(nctemp5137)
{
struct tree* nctemp5166= p;
struct nctempchar1 *nctemp5170;
static struct nctempchar1 nctemp5171 = {{ 8}, (char*)"struct \0"};
nctemp5170=&nctemp5171;
nctempchar1* nctemp5168= nctemp5170;
int nctemp5172=CodeEs(nctemp5166,nctemp5168);
struct tree* nctemp5174= p;
nctempchar1* nctemp5176= type;
int nctemp5179=CodeEs(nctemp5174,nctemp5176);
struct tree* nctemp5181= p;
struct nctempchar1 *nctemp5185;
static struct nctempchar1 nctemp5186 = {{ 3}, (char*)" *\0"};
nctemp5185=&nctemp5186;
nctempchar1* nctemp5183= nctemp5185;
int nctemp5187=CodeEs(nctemp5181,nctemp5183);
struct tree* nctemp5189= p;
nctempchar1* nctemp5191= pointer;
int nctemp5194=CodeEs(nctemp5189,nctemp5191);
struct tree* nctemp5196= p;
struct nctempchar1 *nctemp5200;
static struct nctempchar1 nctemp5201 = {{ 2}, (char*)"=\0"};
nctemp5200=&nctemp5201;
nctempchar1* nctemp5198= nctemp5200;
int nctemp5202=CodeEs(nctemp5196,nctemp5198);
struct tree* nctemp5204= p;
struct nctempchar1 *nctemp5208;
static struct nctempchar1 nctemp5209 = {{ 2}, (char*)"(\0"};
nctemp5208=&nctemp5209;
nctempchar1* nctemp5206= nctemp5208;
int nctemp5210=CodeEs(nctemp5204,nctemp5206);
struct tree* nctemp5212= p;
struct nctempchar1 *nctemp5216;
static struct nctempchar1 nctemp5217 = {{ 8}, (char*)"struct \0"};
nctemp5216=&nctemp5217;
nctempchar1* nctemp5214= nctemp5216;
int nctemp5218=CodeEs(nctemp5212,nctemp5214);
struct tree* nctemp5220= p;
nctempchar1* nctemp5222= type;
int nctemp5225=CodeEs(nctemp5220,nctemp5222);
struct tree* nctemp5227= p;
struct nctempchar1 *nctemp5231;
static struct nctempchar1 nctemp5232 = {{ 3}, (char*)"*)\0"};
nctemp5231=&nctemp5232;
nctempchar1* nctemp5229= nctemp5231;
int nctemp5233=CodeEs(nctemp5227,nctemp5229);
struct tree* nctemp5235= p;
struct nctempchar1 *nctemp5239;
static struct nctempchar1 nctemp5240 = {{ 11}, (char*)"RunMalloc(\0"};
nctemp5239=&nctemp5240;
nctempchar1* nctemp5237= nctemp5239;
int nctemp5241=CodeEs(nctemp5235,nctemp5237);
struct tree* nctemp5243= p;
struct nctempchar1 *nctemp5247;
static struct nctempchar1 nctemp5248 = {{ 8}, (char*)"sizeof(\0"};
nctemp5247=&nctemp5248;
nctempchar1* nctemp5245= nctemp5247;
int nctemp5249=CodeEs(nctemp5243,nctemp5245);
struct tree* nctemp5251= p;
struct nctempchar1 *nctemp5255;
static struct nctempchar1 nctemp5256 = {{ 8}, (char*)"struct \0"};
nctemp5255=&nctemp5256;
nctempchar1* nctemp5253= nctemp5255;
int nctemp5257=CodeEs(nctemp5251,nctemp5253);
struct tree* nctemp5259= p;
nctempchar1* nctemp5261= type;
int nctemp5264=CodeEs(nctemp5259,nctemp5261);
struct tree* nctemp5266= p;
struct nctempchar1 *nctemp5270;
static struct nctempchar1 nctemp5271 = {{ 6}, (char*)"));\n\0"};
nctemp5270=&nctemp5271;
nctempchar1* nctemp5268= nctemp5270;
int nctemp5272=CodeEs(nctemp5266,nctemp5268);
}
nctempchar1* nctemp5279= structflag;
struct nctempchar1 *nctemp5284;
static struct nctempchar1 nctemp5285 = {{ 7}, (char*)"struct\0"};
nctemp5284=&nctemp5285;
nctempchar1* nctemp5282= nctemp5284;
int nctemp5286=LibeStrcmp(nctemp5279,nctemp5282);
int nctemp5276 = (nctemp5286 ==1);
nctempchar1* nctemp5292= arrayflag;
struct nctempchar1 *nctemp5297;
static struct nctempchar1 nctemp5298 = {{ 6}, (char*)"array\0"};
nctemp5297=&nctemp5298;
nctempchar1* nctemp5295= nctemp5297;
int nctemp5299=LibeStrcmp(nctemp5292,nctemp5295);
int nctemp5289 = (nctemp5299 ==1);
int nctemp5273 = (nctemp5276 && nctemp5289);
if(nctemp5273)
{
struct tree* nctemp5302= p;
struct nctempchar1 *nctemp5306;
static struct nctempchar1 nctemp5307 = {{ 14}, (char*)"struct nctemp\0"};
nctemp5306=&nctemp5307;
nctempchar1* nctemp5304= nctemp5306;
int nctemp5308=CodeEs(nctemp5302,nctemp5304);
struct tree* nctemp5310= p;
nctempchar1* nctemp5312= type;
int nctemp5315=CodeEs(nctemp5310,nctemp5312);
int nctemp5317= rank;
int nctemp5319=CodeEd(nctemp5317);
struct tree* nctemp5321= p;
struct nctempchar1 *nctemp5325;
static struct nctempchar1 nctemp5326 = {{ 3}, (char*)" *\0"};
nctemp5325=&nctemp5326;
nctempchar1* nctemp5323= nctemp5325;
int nctemp5327=CodeEs(nctemp5321,nctemp5323);
struct tree* nctemp5329= p;
nctempchar1* nctemp5331= pointer;
int nctemp5334=CodeEs(nctemp5329,nctemp5331);
struct tree* nctemp5336= p;
struct nctempchar1 *nctemp5340;
static struct nctempchar1 nctemp5341 = {{ 4}, (char*)";\n\0"};
nctemp5340=&nctemp5341;
nctempchar1* nctemp5338= nctemp5340;
int nctemp5342=CodeEs(nctemp5336,nctemp5338);
struct tree* nctemp5344= p;
nctempchar1* nctemp5346= pointer;
int nctemp5349=CodeEs(nctemp5344,nctemp5346);
struct tree* nctemp5351= p;
struct nctempchar1 *nctemp5355;
static struct nctempchar1 nctemp5356 = {{ 2}, (char*)"=\0"};
nctemp5355=&nctemp5356;
nctempchar1* nctemp5353= nctemp5355;
int nctemp5357=CodeEs(nctemp5351,nctemp5353);
struct tree* nctemp5359= p;
struct nctempchar1 *nctemp5363;
static struct nctempchar1 nctemp5364 = {{ 2}, (char*)"(\0"};
nctemp5363=&nctemp5364;
nctempchar1* nctemp5361= nctemp5363;
int nctemp5365=CodeEs(nctemp5359,nctemp5361);
struct tree* nctemp5367= p;
struct nctempchar1 *nctemp5371;
static struct nctempchar1 nctemp5372 = {{ 14}, (char*)"struct nctemp\0"};
nctemp5371=&nctemp5372;
nctempchar1* nctemp5369= nctemp5371;
int nctemp5373=CodeEs(nctemp5367,nctemp5369);
struct tree* nctemp5375= p;
nctempchar1* nctemp5377= type;
int nctemp5380=CodeEs(nctemp5375,nctemp5377);
int nctemp5382= rank;
int nctemp5384=CodeEd(nctemp5382);
struct tree* nctemp5386= p;
struct nctempchar1 *nctemp5390;
static struct nctempchar1 nctemp5391 = {{ 3}, (char*)"*)\0"};
nctemp5390=&nctemp5391;
nctempchar1* nctemp5388= nctemp5390;
int nctemp5392=CodeEs(nctemp5386,nctemp5388);
struct tree* nctemp5394= p;
struct nctempchar1 *nctemp5398;
static struct nctempchar1 nctemp5399 = {{ 11}, (char*)"RunMalloc(\0"};
nctemp5398=&nctemp5399;
nctempchar1* nctemp5396= nctemp5398;
int nctemp5400=CodeEs(nctemp5394,nctemp5396);
struct tree* nctemp5402= p;
struct nctempchar1 *nctemp5406;
static struct nctempchar1 nctemp5407 = {{ 21}, (char*)"sizeof(struct nctemp\0"};
nctemp5406=&nctemp5407;
nctempchar1* nctemp5404= nctemp5406;
int nctemp5408=CodeEs(nctemp5402,nctemp5404);
struct tree* nctemp5410= p;
nctempchar1* nctemp5412= type;
int nctemp5415=CodeEs(nctemp5410,nctemp5412);
int nctemp5417= rank;
int nctemp5419=CodeEd(nctemp5417);
struct tree* nctemp5421= p;
struct nctempchar1 *nctemp5425;
static struct nctempchar1 nctemp5426 = {{ 6}, (char*)"));\n\0"};
nctemp5425=&nctemp5426;
nctempchar1* nctemp5423= nctemp5425;
int nctemp5427=CodeEs(nctemp5421,nctemp5423);
i =0;
p =sp;
int nctemp5436 = (p !=0);
int nctemp5440=nctemp5436;
while(nctemp5440)
{{
struct tree* nctemp5446= sp;
nctempchar1* nctemp5448=CodeExpr(nctemp5446);
dim=nctemp5448;
struct tree* nctemp5450= sp;
nctempchar1* nctemp5452= pointer;
int nctemp5455=CodeEs(nctemp5450,nctemp5452);
struct tree* nctemp5457= sp;
struct nctempchar1 *nctemp5461;
static struct nctempchar1 nctemp5462 = {{ 4}, (char*)"->d\0"};
nctemp5461=&nctemp5462;
nctempchar1* nctemp5459= nctemp5461;
int nctemp5463=CodeEs(nctemp5457,nctemp5459);
struct tree* nctemp5465= sp;
struct nctempchar1 *nctemp5469;
static struct nctempchar1 nctemp5470 = {{ 2}, (char*)"[\0"};
nctemp5469=&nctemp5470;
nctempchar1* nctemp5467= nctemp5469;
int nctemp5471=CodeEs(nctemp5465,nctemp5467);
int nctemp5473= i;
int nctemp5475=CodeEd(nctemp5473);
struct tree* nctemp5477= sp;
struct nctempchar1 *nctemp5481;
static struct nctempchar1 nctemp5482 = {{ 3}, (char*)"]=\0"};
nctemp5481=&nctemp5482;
nctempchar1* nctemp5479= nctemp5481;
int nctemp5483=CodeEs(nctemp5477,nctemp5479);
struct tree* nctemp5485= sp;
nctempchar1* nctemp5487= dim;
int nctemp5490=CodeEs(nctemp5485,nctemp5487);
struct tree* nctemp5492= sp;
struct nctempchar1 *nctemp5496;
static struct nctempchar1 nctemp5497 = {{ 4}, (char*)";\n\0"};
nctemp5496=&nctemp5497;
nctempchar1* nctemp5494= nctemp5496;
int nctemp5498=CodeEs(nctemp5492,nctemp5494);
int nctemp5507 = i + 1;
i =nctemp5507;
struct tree* nctemp5512= p;
struct tree* nctemp5514=PtreeMvsister(nctemp5512);
p =nctemp5514;
}
int nctemp5515 = (p !=0);
nctemp5440=nctemp5515;}struct tree* nctemp5520= sp;
nctempchar1* nctemp5522= pointer;
int nctemp5525=CodeEs(nctemp5520,nctemp5522);
struct tree* nctemp5527= sp;
struct nctempchar1 *nctemp5531;
static struct nctempchar1 nctemp5532 = {{ 4}, (char*)"->a\0"};
nctemp5531=&nctemp5532;
nctempchar1* nctemp5529= nctemp5531;
int nctemp5533=CodeEs(nctemp5527,nctemp5529);
struct tree* nctemp5535= sp;
struct nctempchar1 *nctemp5539;
static struct nctempchar1 nctemp5540 = {{ 2}, (char*)"=\0"};
nctemp5539=&nctemp5540;
nctempchar1* nctemp5537= nctemp5539;
int nctemp5541=CodeEs(nctemp5535,nctemp5537);
struct tree* nctemp5543= sp;
struct nctempchar1 *nctemp5547;
static struct nctempchar1 nctemp5548 = {{ 9}, (char*)"(struct \0"};
nctemp5547=&nctemp5548;
nctempchar1* nctemp5545= nctemp5547;
int nctemp5549=CodeEs(nctemp5543,nctemp5545);
struct tree* nctemp5551= sp;
nctempchar1* nctemp5553= type;
int nctemp5556=CodeEs(nctemp5551,nctemp5553);
struct tree* nctemp5558= sp;
struct nctempchar1 *nctemp5562;
static struct nctempchar1 nctemp5563 = {{ 3}, (char*)"*)\0"};
nctemp5562=&nctemp5563;
nctempchar1* nctemp5560= nctemp5562;
int nctemp5564=CodeEs(nctemp5558,nctemp5560);
struct tree* nctemp5566= sp;
struct nctempchar1 *nctemp5570;
static struct nctempchar1 nctemp5571 = {{ 18}, (char*)"RunMalloc(sizeof(\0"};
nctemp5570=&nctemp5571;
nctempchar1* nctemp5568= nctemp5570;
int nctemp5572=CodeEs(nctemp5566,nctemp5568);
struct tree* nctemp5574= sp;
struct nctempchar1 *nctemp5578;
static struct nctempchar1 nctemp5579 = {{ 8}, (char*)"struct \0"};
nctemp5578=&nctemp5579;
nctempchar1* nctemp5576= nctemp5578;
int nctemp5580=CodeEs(nctemp5574,nctemp5576);
struct tree* nctemp5582= sp;
nctempchar1* nctemp5584= type;
int nctemp5587=CodeEs(nctemp5582,nctemp5584);
struct tree* nctemp5589= sp;
struct nctempchar1 *nctemp5593;
static struct nctempchar1 nctemp5594 = {{ 2}, (char*)")\0"};
nctemp5593=&nctemp5594;
nctempchar1* nctemp5591= nctemp5593;
int nctemp5595=CodeEs(nctemp5589,nctemp5591);
struct tree* nctemp5597= sp;
struct nctempchar1 *nctemp5601;
static struct nctempchar1 nctemp5602 = {{ 2}, (char*)"*\0"};
nctemp5601=&nctemp5602;
nctempchar1* nctemp5599= nctemp5601;
int nctemp5603=CodeEs(nctemp5597,nctemp5599);
struct tree* nctemp5605= sp;
nctempchar1* nctemp5607= totdim;
int nctemp5610=CodeEs(nctemp5605,nctemp5607);
struct tree* nctemp5612= sp;
struct nctempchar1 *nctemp5616;
static struct nctempchar1 nctemp5617 = {{ 5}, (char*)");\n\0"};
nctemp5616=&nctemp5617;
nctempchar1* nctemp5614= nctemp5616;
int nctemp5618=CodeEs(nctemp5612,nctemp5614);
}
nctempchar1* nctemp5625= structflag;
struct nctempchar1 *nctemp5630;
static struct nctempchar1 nctemp5631 = {{ 7}, (char*)"struct\0"};
nctemp5630=&nctemp5631;
nctempchar1* nctemp5628= nctemp5630;
int nctemp5632=LibeStrcmp(nctemp5625,nctemp5628);
int nctemp5622 = (nctemp5632 ==0);
nctempchar1* nctemp5638= arrayflag;
struct nctempchar1 *nctemp5643;
static struct nctempchar1 nctemp5644 = {{ 6}, (char*)"array\0"};
nctemp5643=&nctemp5644;
nctempchar1* nctemp5641= nctemp5643;
int nctemp5645=LibeStrcmp(nctemp5638,nctemp5641);
int nctemp5635 = (nctemp5645 ==1);
int nctemp5619 = (nctemp5622 && nctemp5635);
if(nctemp5619)
{
int nctemp5648= 4;
int nctemp5650=LibeFlush(nctemp5648);
struct tree* nctemp5652= sp;
struct nctempchar1 *nctemp5656;
static struct nctempchar1 nctemp5657 = {{ 7}, (char*)"nctemp\0"};
nctemp5656=&nctemp5657;
nctempchar1* nctemp5654= nctemp5656;
int nctemp5658=CodeEs(nctemp5652,nctemp5654);
struct tree* nctemp5660= sp;
nctempchar1* nctemp5662= type;
int nctemp5665=CodeEs(nctemp5660,nctemp5662);
int nctemp5667= rank;
int nctemp5669=CodeEd(nctemp5667);
struct tree* nctemp5671= sp;
struct nctempchar1 *nctemp5675;
static struct nctempchar1 nctemp5676 = {{ 3}, (char*)" *\0"};
nctemp5675=&nctemp5676;
nctempchar1* nctemp5673= nctemp5675;
int nctemp5677=CodeEs(nctemp5671,nctemp5673);
struct tree* nctemp5679= sp;
nctempchar1* nctemp5681= pointer;
int nctemp5684=CodeEs(nctemp5679,nctemp5681);
struct tree* nctemp5686= sp;
struct nctempchar1 *nctemp5690;
static struct nctempchar1 nctemp5691 = {{ 4}, (char*)";\n\0"};
nctemp5690=&nctemp5691;
nctempchar1* nctemp5688= nctemp5690;
int nctemp5692=CodeEs(nctemp5686,nctemp5688);
p =top;
i =0;
struct tree* nctemp5702= p;
nctempchar1* nctemp5704= pointer;
int nctemp5707=CodeEs(nctemp5702,nctemp5704);
struct tree* nctemp5709= p;
struct nctempchar1 *nctemp5713;
static struct nctempchar1 nctemp5714 = {{ 2}, (char*)"=\0"};
nctemp5713=&nctemp5714;
nctempchar1* nctemp5711= nctemp5713;
int nctemp5715=CodeEs(nctemp5709,nctemp5711);
struct tree* nctemp5717= p;
struct nctempchar1 *nctemp5721;
static struct nctempchar1 nctemp5722 = {{ 2}, (char*)"(\0"};
nctemp5721=&nctemp5722;
nctempchar1* nctemp5719= nctemp5721;
int nctemp5723=CodeEs(nctemp5717,nctemp5719);
struct tree* nctemp5725= p;
struct nctempchar1 *nctemp5729;
static struct nctempchar1 nctemp5730 = {{ 7}, (char*)"nctemp\0"};
nctemp5729=&nctemp5730;
nctempchar1* nctemp5727= nctemp5729;
int nctemp5731=CodeEs(nctemp5725,nctemp5727);
struct tree* nctemp5733= p;
nctempchar1* nctemp5735= type;
int nctemp5738=CodeEs(nctemp5733,nctemp5735);
int nctemp5740= rank;
int nctemp5742=CodeEd(nctemp5740);
struct tree* nctemp5744= p;
struct nctempchar1 *nctemp5748;
static struct nctempchar1 nctemp5749 = {{ 3}, (char*)"*)\0"};
nctemp5748=&nctemp5749;
nctempchar1* nctemp5746= nctemp5748;
int nctemp5750=CodeEs(nctemp5744,nctemp5746);
struct tree* nctemp5752= p;
struct nctempchar1 *nctemp5756;
static struct nctempchar1 nctemp5757 = {{ 11}, (char*)"RunMalloc(\0"};
nctemp5756=&nctemp5757;
nctempchar1* nctemp5754= nctemp5756;
int nctemp5758=CodeEs(nctemp5752,nctemp5754);
struct tree* nctemp5760= p;
struct nctempchar1 *nctemp5764;
static struct nctempchar1 nctemp5765 = {{ 14}, (char*)"sizeof(nctemp\0"};
nctemp5764=&nctemp5765;
nctempchar1* nctemp5762= nctemp5764;
int nctemp5766=CodeEs(nctemp5760,nctemp5762);
struct tree* nctemp5768= p;
nctempchar1* nctemp5770= type;
int nctemp5773=CodeEs(nctemp5768,nctemp5770);
int nctemp5775= rank;
int nctemp5777=CodeEd(nctemp5775);
struct tree* nctemp5779= p;
struct nctempchar1 *nctemp5783;
static struct nctempchar1 nctemp5784 = {{ 6}, (char*)"));\n\0"};
nctemp5783=&nctemp5784;
nctempchar1* nctemp5781= nctemp5783;
int nctemp5785=CodeEs(nctemp5779,nctemp5781);
int nctemp5786 = (p !=0);
int nctemp5790=nctemp5786;
while(nctemp5790)
{{
struct tree* nctemp5796= p;
nctempchar1* nctemp5798=CodeExpr(nctemp5796);
dim=nctemp5798;
struct tree* nctemp5800= p;
nctempchar1* nctemp5802= pointer;
int nctemp5805=CodeEs(nctemp5800,nctemp5802);
struct tree* nctemp5807= p;
struct nctempchar1 *nctemp5811;
static struct nctempchar1 nctemp5812 = {{ 4}, (char*)"->d\0"};
nctemp5811=&nctemp5812;
nctempchar1* nctemp5809= nctemp5811;
int nctemp5813=CodeEs(nctemp5807,nctemp5809);
struct tree* nctemp5815= p;
struct nctempchar1 *nctemp5819;
static struct nctempchar1 nctemp5820 = {{ 2}, (char*)"[\0"};
nctemp5819=&nctemp5820;
nctempchar1* nctemp5817= nctemp5819;
int nctemp5821=CodeEs(nctemp5815,nctemp5817);
int nctemp5823= i;
int nctemp5825=CodeEd(nctemp5823);
struct tree* nctemp5827= p;
struct nctempchar1 *nctemp5831;
static struct nctempchar1 nctemp5832 = {{ 3}, (char*)"]=\0"};
nctemp5831=&nctemp5832;
nctempchar1* nctemp5829= nctemp5831;
int nctemp5833=CodeEs(nctemp5827,nctemp5829);
struct tree* nctemp5835= p;
nctempchar1* nctemp5837= dim;
int nctemp5840=CodeEs(nctemp5835,nctemp5837);
struct tree* nctemp5842= p;
struct nctempchar1 *nctemp5846;
static struct nctempchar1 nctemp5847 = {{ 4}, (char*)";\n\0"};
nctemp5846=&nctemp5847;
nctempchar1* nctemp5844= nctemp5846;
int nctemp5848=CodeEs(nctemp5842,nctemp5844);
int nctemp5857 = i + 1;
i =nctemp5857;
struct tree* nctemp5862= p;
struct tree* nctemp5864=PtreeMvsister(nctemp5862);
p =nctemp5864;
}
int nctemp5865 = (p !=0);
nctemp5790=nctemp5865;}p =top;
struct tree* nctemp5874= p;
nctempchar1* nctemp5876= pointer;
int nctemp5879=CodeEs(nctemp5874,nctemp5876);
struct tree* nctemp5881= p;
struct nctempchar1 *nctemp5885;
static struct nctempchar1 nctemp5886 = {{ 4}, (char*)"->a\0"};
nctemp5885=&nctemp5886;
nctempchar1* nctemp5883= nctemp5885;
int nctemp5887=CodeEs(nctemp5881,nctemp5883);
struct tree* nctemp5889= p;
struct nctempchar1 *nctemp5893;
static struct nctempchar1 nctemp5894 = {{ 3}, (char*)"=(\0"};
nctemp5893=&nctemp5894;
nctempchar1* nctemp5891= nctemp5893;
int nctemp5895=CodeEs(nctemp5889,nctemp5891);
struct tree* nctemp5897= p;
nctempchar1* nctemp5899= type;
int nctemp5902=CodeEs(nctemp5897,nctemp5899);
struct tree* nctemp5904= p;
struct nctempchar1 *nctemp5908;
static struct nctempchar1 nctemp5909 = {{ 4}, (char*)" *)\0"};
nctemp5908=&nctemp5909;
nctempchar1* nctemp5906= nctemp5908;
int nctemp5910=CodeEs(nctemp5904,nctemp5906);
struct tree* nctemp5912= p;
struct nctempchar1 *nctemp5916;
static struct nctempchar1 nctemp5917 = {{ 18}, (char*)"RunMalloc(sizeof(\0"};
nctemp5916=&nctemp5917;
nctempchar1* nctemp5914= nctemp5916;
int nctemp5918=CodeEs(nctemp5912,nctemp5914);
struct tree* nctemp5920= p;
nctempchar1* nctemp5922= type;
int nctemp5925=CodeEs(nctemp5920,nctemp5922);
struct tree* nctemp5927= p;
struct nctempchar1 *nctemp5931;
static struct nctempchar1 nctemp5932 = {{ 2}, (char*)")\0"};
nctemp5931=&nctemp5932;
nctempchar1* nctemp5929= nctemp5931;
int nctemp5933=CodeEs(nctemp5927,nctemp5929);
struct tree* nctemp5935= p;
struct nctempchar1 *nctemp5939;
static struct nctempchar1 nctemp5940 = {{ 2}, (char*)"*\0"};
nctemp5939=&nctemp5940;
nctempchar1* nctemp5937= nctemp5939;
int nctemp5941=CodeEs(nctemp5935,nctemp5937);
struct tree* nctemp5943= p;
nctempchar1* nctemp5945= totdim;
int nctemp5948=CodeEs(nctemp5943,nctemp5945);
struct tree* nctemp5950= p;
struct nctempchar1 *nctemp5954;
static struct nctempchar1 nctemp5955 = {{ 5}, (char*)");\n\0"};
nctemp5954=&nctemp5955;
nctempchar1* nctemp5952= nctemp5954;
int nctemp5956=CodeEs(nctemp5950,nctemp5952);
}
return pointer;
}
nctempchar1 * CodeDelete (struct tree* p)
{
nctempchar1 *tmp;
struct tree* nctemp5963= p;
struct tree* nctemp5965=PtreeMvchild(nctemp5963);
p =nctemp5965;
struct tree* nctemp5970= p;
struct tree* nctemp5972=PtreeMvchild(nctemp5970);
p =nctemp5972;
struct tree* nctemp5978= p;
nctempchar1* nctemp5980=CodeBinexpr(nctemp5978);
tmp=nctemp5980;
struct tree* nctemp5984= p;
nctempchar1* nctemp5986=PtreeGetref(nctemp5984);
nctempchar1* nctemp5982= nctemp5986;
struct nctempchar1 *nctemp5989;
static struct nctempchar1 nctemp5990 = {{ 5}, (char*)"aref\0"};
nctemp5989=&nctemp5990;
nctempchar1* nctemp5987= nctemp5989;
int nctemp5991=LibeStrcmp(nctemp5982,nctemp5987);
if(nctemp5991)
{
struct tree* nctemp5993= p;
struct nctempchar1 *nctemp5997;
static struct nctempchar1 nctemp5998 = {{ 9}, (char*)"RunFree(\0"};
nctemp5997=&nctemp5998;
nctempchar1* nctemp5995= nctemp5997;
int nctemp5999=CodeEs(nctemp5993,nctemp5995);
struct tree* nctemp6001= p;
nctempchar1* nctemp6003= tmp;
int nctemp6006=CodeEs(nctemp6001,nctemp6003);
struct tree* nctemp6008= p;
struct nctempchar1 *nctemp6012;
static struct nctempchar1 nctemp6013 = {{ 8}, (char*)"->a);\n\0"};
nctemp6012=&nctemp6013;
nctempchar1* nctemp6010= nctemp6012;
int nctemp6014=CodeEs(nctemp6008,nctemp6010);
struct tree* nctemp6016= p;
struct nctempchar1 *nctemp6020;
static struct nctempchar1 nctemp6021 = {{ 9}, (char*)"RunFree(\0"};
nctemp6020=&nctemp6021;
nctempchar1* nctemp6018= nctemp6020;
int nctemp6022=CodeEs(nctemp6016,nctemp6018);
struct tree* nctemp6024= p;
nctempchar1* nctemp6026= tmp;
int nctemp6029=CodeEs(nctemp6024,nctemp6026);
struct tree* nctemp6031= p;
struct nctempchar1 *nctemp6035;
static struct nctempchar1 nctemp6036 = {{ 5}, (char*)");\n\0"};
nctemp6035=&nctemp6036;
nctempchar1* nctemp6033= nctemp6035;
int nctemp6037=CodeEs(nctemp6031,nctemp6033);
}
return tmp;
}
nctempchar1 * CodeLen (struct tree* p)
{
struct tree* np;
struct tree* sp;
nctempchar1 *temp;
nctempchar1 *index;
nctempchar1 *tempr;
nctempchar1* nctemp6045=CodeMktemp();
tempr=nctemp6045;
struct tree* nctemp6050= p;
struct tree* nctemp6052=PtreeMvchild(nctemp6050);
np =nctemp6052;
struct tree* nctemp6058= np;
nctempchar1* nctemp6060=CodeExpr(nctemp6058);
temp=nctemp6060;
struct tree* nctemp6065= np;
struct tree* nctemp6067=PtreeMvsister(nctemp6065);
sp =nctemp6067;
struct tree* nctemp6073= sp;
nctempchar1* nctemp6075=CodeExpr(nctemp6073);
index=nctemp6075;
struct tree* nctemp6077= p;
struct tree* nctemp6081= p;
nctempchar1* nctemp6083=PtreeGetype(nctemp6081);
nctempchar1* nctemp6079= nctemp6083;
int nctemp6084=CodeEs(nctemp6077,nctemp6079);
struct tree* nctemp6086= p;
struct nctempchar1 *nctemp6090;
static struct nctempchar1 nctemp6091 = {{ 2}, (char*)" \0"};
nctemp6090=&nctemp6091;
nctempchar1* nctemp6088= nctemp6090;
int nctemp6092=CodeEs(nctemp6086,nctemp6088);
struct tree* nctemp6094= p;
nctempchar1* nctemp6096= tempr;
int nctemp6099=CodeEs(nctemp6094,nctemp6096);
struct tree* nctemp6101= p;
struct nctempchar1 *nctemp6105;
static struct nctempchar1 nctemp6106 = {{ 2}, (char*)"=\0"};
nctemp6105=&nctemp6106;
nctempchar1* nctemp6103= nctemp6105;
int nctemp6107=CodeEs(nctemp6101,nctemp6103);
struct tree* nctemp6109= p;
nctempchar1* nctemp6111= temp;
int nctemp6114=CodeEs(nctemp6109,nctemp6111);
struct tree* nctemp6116= p;
struct nctempchar1 *nctemp6120;
static struct nctempchar1 nctemp6121 = {{ 4}, (char*)"->d\0"};
nctemp6120=&nctemp6121;
nctempchar1* nctemp6118= nctemp6120;
int nctemp6122=CodeEs(nctemp6116,nctemp6118);
struct tree* nctemp6124= p;
struct nctempchar1 *nctemp6128;
static struct nctempchar1 nctemp6129 = {{ 2}, (char*)"[\0"};
nctemp6128=&nctemp6129;
nctempchar1* nctemp6126= nctemp6128;
int nctemp6130=CodeEs(nctemp6124,nctemp6126);
struct tree* nctemp6132= p;
nctempchar1* nctemp6134= index;
int nctemp6137=CodeEs(nctemp6132,nctemp6134);
struct tree* nctemp6139= p;
struct nctempchar1 *nctemp6143;
static struct nctempchar1 nctemp6144 = {{ 3}, (char*)"];\0"};
nctemp6143=&nctemp6144;
nctempchar1* nctemp6141= nctemp6143;
int nctemp6145=CodeEs(nctemp6139,nctemp6141);
return tempr;
}
nctempchar1 * CodeCmplx (struct tree* p)
{
struct tree* np;
struct tree* sp;
nctempchar1 *q;
nctempchar1 *r;
nctempchar1 *tempr;
nctempchar1* nctemp6153=CodeMktemp();
tempr=nctemp6153;
struct tree* nctemp6158= p;
struct tree* nctemp6160=PtreeMvchild(nctemp6158);
np =nctemp6160;
struct tree* nctemp6165= np;
struct tree* nctemp6167=PtreeMvchild(nctemp6165);
np =nctemp6167;
struct tree* nctemp6173= np;
nctempchar1* nctemp6175=CodeExpr(nctemp6173);
q=nctemp6175;
struct tree* nctemp6180= np;
struct tree* nctemp6182=PtreeMvsister(nctemp6180);
sp =nctemp6182;
struct tree* nctemp6188= sp;
nctempchar1* nctemp6190=CodeExpr(nctemp6188);
r=nctemp6190;
struct tree* nctemp6192= p;
struct tree* nctemp6196= p;
nctempchar1* nctemp6198=PtreeGetype(nctemp6196);
nctempchar1* nctemp6194= nctemp6198;
int nctemp6199=CodeEs(nctemp6192,nctemp6194);
struct tree* nctemp6201= p;
struct nctempchar1 *nctemp6205;
static struct nctempchar1 nctemp6206 = {{ 2}, (char*)" \0"};
nctemp6205=&nctemp6206;
nctempchar1* nctemp6203= nctemp6205;
int nctemp6207=CodeEs(nctemp6201,nctemp6203);
struct tree* nctemp6209= p;
nctempchar1* nctemp6211= tempr;
int nctemp6214=CodeEs(nctemp6209,nctemp6211);
struct tree* nctemp6216= p;
struct nctempchar1 *nctemp6220;
static struct nctempchar1 nctemp6221 = {{ 3}, (char*)".r\0"};
nctemp6220=&nctemp6221;
nctempchar1* nctemp6218= nctemp6220;
int nctemp6222=CodeEs(nctemp6216,nctemp6218);
struct tree* nctemp6224= p;
struct nctempchar1 *nctemp6228;
static struct nctempchar1 nctemp6229 = {{ 3}, (char*)" =\0"};
nctemp6228=&nctemp6229;
nctempchar1* nctemp6226= nctemp6228;
int nctemp6230=CodeEs(nctemp6224,nctemp6226);
struct tree* nctemp6232= p;
nctempchar1* nctemp6234= q;
int nctemp6237=CodeEs(nctemp6232,nctemp6234);
struct tree* nctemp6239= p;
struct nctempchar1 *nctemp6243;
static struct nctempchar1 nctemp6244 = {{ 2}, (char*)";\0"};
nctemp6243=&nctemp6244;
nctempchar1* nctemp6241= nctemp6243;
int nctemp6245=CodeEs(nctemp6239,nctemp6241);
struct tree* nctemp6247= p;
struct tree* nctemp6251= p;
nctempchar1* nctemp6253=PtreeGetype(nctemp6251);
nctempchar1* nctemp6249= nctemp6253;
int nctemp6254=CodeEs(nctemp6247,nctemp6249);
struct tree* nctemp6256= p;
struct nctempchar1 *nctemp6260;
static struct nctempchar1 nctemp6261 = {{ 2}, (char*)" \0"};
nctemp6260=&nctemp6261;
nctempchar1* nctemp6258= nctemp6260;
int nctemp6262=CodeEs(nctemp6256,nctemp6258);
struct tree* nctemp6264= p;
nctempchar1* nctemp6266= tempr;
int nctemp6269=CodeEs(nctemp6264,nctemp6266);
struct tree* nctemp6271= p;
struct nctempchar1 *nctemp6275;
static struct nctempchar1 nctemp6276 = {{ 3}, (char*)".i\0"};
nctemp6275=&nctemp6276;
nctempchar1* nctemp6273= nctemp6275;
int nctemp6277=CodeEs(nctemp6271,nctemp6273);
struct tree* nctemp6279= p;
struct nctempchar1 *nctemp6283;
static struct nctempchar1 nctemp6284 = {{ 2}, (char*)"=\0"};
nctemp6283=&nctemp6284;
nctempchar1* nctemp6281= nctemp6283;
int nctemp6285=CodeEs(nctemp6279,nctemp6281);
struct tree* nctemp6287= p;
nctempchar1* nctemp6289= r;
int nctemp6292=CodeEs(nctemp6287,nctemp6289);
struct tree* nctemp6294= p;
struct nctempchar1 *nctemp6298;
static struct nctempchar1 nctemp6299 = {{ 2}, (char*)";\0"};
nctemp6298=&nctemp6299;
nctempchar1* nctemp6296= nctemp6298;
int nctemp6300=CodeEs(nctemp6294,nctemp6296);
return tempr;
}
nctempchar1 * CodeIm (struct tree* p)
{
struct tree* np;
nctempchar1 *q;
nctempchar1 *tempr;
nctempchar1* nctemp6308=CodeMktemp();
tempr=nctemp6308;
struct tree* nctemp6313= p;
struct tree* nctemp6315=PtreeMvchild(nctemp6313);
np =nctemp6315;
struct tree* nctemp6321= np;
nctempchar1* nctemp6323=CodeExpr(nctemp6321);
q=nctemp6323;
struct tree* nctemp6325= p;
struct tree* nctemp6329= p;
nctempchar1* nctemp6331=PtreeGetype(nctemp6329);
nctempchar1* nctemp6327= nctemp6331;
int nctemp6332=CodeEs(nctemp6325,nctemp6327);
struct tree* nctemp6334= p;
struct nctempchar1 *nctemp6338;
static struct nctempchar1 nctemp6339 = {{ 2}, (char*)" \0"};
nctemp6338=&nctemp6339;
nctempchar1* nctemp6336= nctemp6338;
int nctemp6340=CodeEs(nctemp6334,nctemp6336);
struct tree* nctemp6342= p;
nctempchar1* nctemp6344= tempr;
int nctemp6347=CodeEs(nctemp6342,nctemp6344);
struct tree* nctemp6349= p;
struct nctempchar1 *nctemp6353;
static struct nctempchar1 nctemp6354 = {{ 3}, (char*)" =\0"};
nctemp6353=&nctemp6354;
nctempchar1* nctemp6351= nctemp6353;
int nctemp6355=CodeEs(nctemp6349,nctemp6351);
struct tree* nctemp6357= p;
nctempchar1* nctemp6359= q;
int nctemp6362=CodeEs(nctemp6357,nctemp6359);
struct tree* nctemp6364= p;
struct nctempchar1 *nctemp6368;
static struct nctempchar1 nctemp6369 = {{ 5}, (char*)".i  \0"};
nctemp6368=&nctemp6369;
nctempchar1* nctemp6366= nctemp6368;
int nctemp6370=CodeEs(nctemp6364,nctemp6366);
struct tree* nctemp6372= p;
struct nctempchar1 *nctemp6376;
static struct nctempchar1 nctemp6377 = {{ 4}, (char*)";\n\0"};
nctemp6376=&nctemp6377;
nctempchar1* nctemp6374= nctemp6376;
int nctemp6378=CodeEs(nctemp6372,nctemp6374);
return tempr;
}
nctempchar1 * CodeRe (struct tree* p)
{
struct tree* np;
nctempchar1 *q;
nctempchar1 *tmp;
struct tree* nctemp6385= p;
struct tree* nctemp6387=PtreeMvchild(nctemp6385);
np =nctemp6387;
struct tree* nctemp6393= np;
nctempchar1* nctemp6395=CodeExpr(nctemp6393);
q=nctemp6395;
nctempchar1* nctemp6401=CodeMktemp();
tmp=nctemp6401;
struct tree* nctemp6403= p;
struct tree* nctemp6407= p;
nctempchar1* nctemp6409=PtreeGetype(nctemp6407);
nctempchar1* nctemp6405= nctemp6409;
int nctemp6410=CodeEs(nctemp6403,nctemp6405);
struct tree* nctemp6412= p;
struct nctempchar1 *nctemp6416;
static struct nctempchar1 nctemp6417 = {{ 2}, (char*)" \0"};
nctemp6416=&nctemp6417;
nctempchar1* nctemp6414= nctemp6416;
int nctemp6418=CodeEs(nctemp6412,nctemp6414);
struct tree* nctemp6420= p;
nctempchar1* nctemp6422= tmp;
int nctemp6425=CodeEs(nctemp6420,nctemp6422);
struct tree* nctemp6427= p;
struct nctempchar1 *nctemp6431;
static struct nctempchar1 nctemp6432 = {{ 3}, (char*)" =\0"};
nctemp6431=&nctemp6432;
nctempchar1* nctemp6429= nctemp6431;
int nctemp6433=CodeEs(nctemp6427,nctemp6429);
struct tree* nctemp6435= p;
nctempchar1* nctemp6437= q;
int nctemp6440=CodeEs(nctemp6435,nctemp6437);
struct tree* nctemp6442= p;
struct nctempchar1 *nctemp6446;
static struct nctempchar1 nctemp6447 = {{ 5}, (char*)".r  \0"};
nctemp6446=&nctemp6447;
nctempchar1* nctemp6444= nctemp6446;
int nctemp6448=CodeEs(nctemp6442,nctemp6444);
struct tree* nctemp6450= p;
struct nctempchar1 *nctemp6454;
static struct nctempchar1 nctemp6455 = {{ 4}, (char*)";\n\0"};
nctemp6454=&nctemp6455;
nctempchar1* nctemp6452= nctemp6454;
int nctemp6456=CodeEs(nctemp6450,nctemp6452);
return tmp;
}
nctempchar1 * CodeFcall (struct tree* p)
{
struct symbol* tp;
struct tree* sp;
nctempchar1 *temp;
nctempchar1 *ntemp;
int noargs;
noargs =0;
struct tree* nctemp6469= p;
nctempchar1* nctemp6471=PtreeGetdef(nctemp6469);
nctempchar1* nctemp6467= nctemp6471;
struct symbol* nctemp6474=SymGetetp();
struct symbol* nctemp6472= nctemp6474;
struct symbol* nctemp6475=SymLookup(nctemp6467,nctemp6472);
tp =nctemp6475;
struct tree* nctemp6480= p;
struct tree* nctemp6482=PtreeMvchild(nctemp6480);
sp =nctemp6482;
int nctemp6483 = (sp !=0);
if(nctemp6483)
{
struct tree* nctemp6492= sp;
nctempchar1* nctemp6494=PtreeGetname(nctemp6492);
nctempchar1* nctemp6490= nctemp6494;
struct nctempchar1 *nctemp6497;
static struct nctempchar1 nctemp6498 = {{ 9}, (char*)"exprlist\0"};
nctemp6497=&nctemp6498;
nctempchar1* nctemp6495= nctemp6497;
int nctemp6499=LibeStrcmp(nctemp6490,nctemp6495);
int nctemp6487 = (nctemp6499 ==1);
if(nctemp6487)
{
struct tree* nctemp6505= sp;
struct tree* nctemp6507=PtreeMvchild(nctemp6505);
sp =nctemp6507;
}
}
int nctemp6508 = (sp !=0);
int nctemp6512=nctemp6508;
while(nctemp6512)
{{
nctempchar1* nctemp6518=CodeMktemp();
ntemp=nctemp6518;
struct tree* nctemp6520= sp;
nctempchar1* nctemp6522= ntemp;
int nctemp6525=PtreeSetempr(nctemp6520,nctemp6522);
struct tree* nctemp6531= sp;
nctempchar1* nctemp6533=CodeExpr(nctemp6531);
temp=nctemp6533;
struct tree* nctemp6539= sp;
nctempchar1* nctemp6541=PtreeGetref(nctemp6539);
nctempchar1* nctemp6537= nctemp6541;
struct nctempchar1 *nctemp6544;
static struct nctempchar1 nctemp6545 = {{ 5}, (char*)"aref\0"};
nctemp6544=&nctemp6545;
nctempchar1* nctemp6542= nctemp6544;
int nctemp6546=LibeStrcmp(nctemp6537,nctemp6542);
int nctemp6534 = (nctemp6546 ==1);
if(nctemp6534)
{
struct tree* nctemp6549= sp;
struct nctempchar1 *nctemp6553;
static struct nctempchar1 nctemp6554 = {{ 7}, (char*)"nctemp\0"};
nctemp6553=&nctemp6554;
nctempchar1* nctemp6551= nctemp6553;
int nctemp6555=CodeEs(nctemp6549,nctemp6551);
struct tree* nctemp6557= sp;
struct tree* nctemp6561= sp;
nctempchar1* nctemp6563=PtreeGetype(nctemp6561);
nctempchar1* nctemp6559= nctemp6563;
int nctemp6564=CodeEs(nctemp6557,nctemp6559);
struct tree* nctemp6568= sp;
int nctemp6570=PtreeGetrank(nctemp6568);
int nctemp6566= nctemp6570;
int nctemp6571=CodeEd(nctemp6566);
struct tree* nctemp6573= sp;
struct nctempchar1 *nctemp6577;
static struct nctempchar1 nctemp6578 = {{ 2}, (char*)"*\0"};
nctemp6577=&nctemp6578;
nctempchar1* nctemp6575= nctemp6577;
int nctemp6579=CodeEs(nctemp6573,nctemp6575);
}
else{
struct tree* nctemp6585= sp;
nctempchar1* nctemp6587=PtreeGetref(nctemp6585);
nctempchar1* nctemp6583= nctemp6587;
struct nctempchar1 *nctemp6590;
static struct nctempchar1 nctemp6591 = {{ 5}, (char*)"sref\0"};
nctemp6590=&nctemp6591;
nctempchar1* nctemp6588= nctemp6590;
int nctemp6592=LibeStrcmp(nctemp6583,nctemp6588);
int nctemp6580 = (nctemp6592 ==1);
if(nctemp6580)
{
struct tree* nctemp6595= sp;
struct nctempchar1 *nctemp6599;
static struct nctempchar1 nctemp6600 = {{ 8}, (char*)"struct \0"};
nctemp6599=&nctemp6600;
nctempchar1* nctemp6597= nctemp6599;
int nctemp6601=CodeEs(nctemp6595,nctemp6597);
struct tree* nctemp6603= sp;
struct tree* nctemp6607= sp;
nctempchar1* nctemp6609=PtreeGetype(nctemp6607);
nctempchar1* nctemp6605= nctemp6609;
int nctemp6610=CodeEs(nctemp6603,nctemp6605);
struct tree* nctemp6612= sp;
struct nctempchar1 *nctemp6616;
static struct nctempchar1 nctemp6617 = {{ 2}, (char*)"*\0"};
nctemp6616=&nctemp6617;
nctempchar1* nctemp6614= nctemp6616;
int nctemp6618=CodeEs(nctemp6612,nctemp6614);
}
else{
struct tree* nctemp6620= sp;
struct tree* nctemp6624= sp;
nctempchar1* nctemp6626=PtreeGetype(nctemp6624);
nctempchar1* nctemp6622= nctemp6626;
int nctemp6627=CodeEs(nctemp6620,nctemp6622);
}
}
struct tree* nctemp6629= sp;
struct nctempchar1 *nctemp6633;
static struct nctempchar1 nctemp6634 = {{ 2}, (char*)" \0"};
nctemp6633=&nctemp6634;
nctempchar1* nctemp6631= nctemp6633;
int nctemp6635=CodeEs(nctemp6629,nctemp6631);
struct tree* nctemp6637= sp;
nctempchar1* nctemp6639= ntemp;
int nctemp6642=CodeEs(nctemp6637,nctemp6639);
struct tree* nctemp6644= sp;
struct nctempchar1 *nctemp6648;
static struct nctempchar1 nctemp6649 = {{ 3}, (char*)"= \0"};
nctemp6648=&nctemp6649;
nctempchar1* nctemp6646= nctemp6648;
int nctemp6650=CodeEs(nctemp6644,nctemp6646);
struct tree* nctemp6652= sp;
nctempchar1* nctemp6654= temp;
int nctemp6657=CodeEs(nctemp6652,nctemp6654);
struct tree* nctemp6659= sp;
struct nctempchar1 *nctemp6663;
static struct nctempchar1 nctemp6664 = {{ 4}, (char*)";\n\0"};
nctemp6663=&nctemp6664;
nctempchar1* nctemp6661= nctemp6663;
int nctemp6665=CodeEs(nctemp6659,nctemp6661);
struct tree* nctemp6670= sp;
struct tree* nctemp6672=PtreeMvsister(nctemp6670);
sp =nctemp6672;
}
int nctemp6673 = (sp !=0);
nctemp6512=nctemp6673;}nctempchar1* nctemp6682=CodeMktemp();
ntemp=nctemp6682;
struct tree* nctemp6688= p;
nctempchar1* nctemp6690=PtreeGetref(nctemp6688);
nctempchar1* nctemp6686= nctemp6690;
struct nctempchar1 *nctemp6693;
static struct nctempchar1 nctemp6694 = {{ 5}, (char*)"aref\0"};
nctemp6693=&nctemp6694;
nctempchar1* nctemp6691= nctemp6693;
int nctemp6695=LibeStrcmp(nctemp6686,nctemp6691);
int nctemp6683 = (nctemp6695 ==1);
if(nctemp6683)
{
struct tree* nctemp6698= p;
struct nctempchar1 *nctemp6702;
static struct nctempchar1 nctemp6703 = {{ 7}, (char*)"nctemp\0"};
nctemp6702=&nctemp6703;
nctempchar1* nctemp6700= nctemp6702;
int nctemp6704=CodeEs(nctemp6698,nctemp6700);
struct tree* nctemp6706= p;
struct tree* nctemp6710= p;
nctempchar1* nctemp6712=PtreeGetype(nctemp6710);
nctempchar1* nctemp6708= nctemp6712;
int nctemp6713=CodeEs(nctemp6706,nctemp6708);
struct tree* nctemp6717= p;
int nctemp6719=PtreeGetrank(nctemp6717);
int nctemp6715= nctemp6719;
int nctemp6720=CodeEd(nctemp6715);
struct tree* nctemp6722= p;
struct nctempchar1 *nctemp6726;
static struct nctempchar1 nctemp6727 = {{ 2}, (char*)"*\0"};
nctemp6726=&nctemp6727;
nctempchar1* nctemp6724= nctemp6726;
int nctemp6728=CodeEs(nctemp6722,nctemp6724);
}
else{
struct tree* nctemp6734= p;
nctempchar1* nctemp6736=PtreeGetref(nctemp6734);
nctempchar1* nctemp6732= nctemp6736;
struct nctempchar1 *nctemp6739;
static struct nctempchar1 nctemp6740 = {{ 5}, (char*)"sref\0"};
nctemp6739=&nctemp6740;
nctempchar1* nctemp6737= nctemp6739;
int nctemp6741=LibeStrcmp(nctemp6732,nctemp6737);
int nctemp6729 = (nctemp6741 ==1);
if(nctemp6729)
{
struct tree* nctemp6744= p;
struct nctempchar1 *nctemp6748;
static struct nctempchar1 nctemp6749 = {{ 8}, (char*)"struct \0"};
nctemp6748=&nctemp6749;
nctempchar1* nctemp6746= nctemp6748;
int nctemp6750=CodeEs(nctemp6744,nctemp6746);
struct tree* nctemp6752= p;
struct tree* nctemp6756= p;
nctempchar1* nctemp6758=PtreeGetype(nctemp6756);
nctempchar1* nctemp6754= nctemp6758;
int nctemp6759=CodeEs(nctemp6752,nctemp6754);
struct tree* nctemp6761= p;
struct nctempchar1 *nctemp6765;
static struct nctempchar1 nctemp6766 = {{ 2}, (char*)"*\0"};
nctemp6765=&nctemp6766;
nctempchar1* nctemp6763= nctemp6765;
int nctemp6767=CodeEs(nctemp6761,nctemp6763);
}
else{
struct tree* nctemp6769= p;
struct tree* nctemp6773= p;
nctempchar1* nctemp6775=PtreeGetype(nctemp6773);
nctempchar1* nctemp6771= nctemp6775;
int nctemp6776=CodeEs(nctemp6769,nctemp6771);
}
}
struct tree* nctemp6778= p;
struct nctempchar1 *nctemp6782;
static struct nctempchar1 nctemp6783 = {{ 2}, (char*)" \0"};
nctemp6782=&nctemp6783;
nctempchar1* nctemp6780= nctemp6782;
int nctemp6784=CodeEs(nctemp6778,nctemp6780);
struct tree* nctemp6786= p;
nctempchar1* nctemp6788= ntemp;
int nctemp6791=CodeEs(nctemp6786,nctemp6788);
struct tree* nctemp6793= p;
struct nctempchar1 *nctemp6797;
static struct nctempchar1 nctemp6798 = {{ 2}, (char*)"=\0"};
nctemp6797=&nctemp6798;
nctempchar1* nctemp6795= nctemp6797;
int nctemp6799=CodeEs(nctemp6793,nctemp6795);
struct tree* nctemp6801= p;
struct symbol* nctemp6805= tp;
nctempchar1* nctemp6807=SymGetname(nctemp6805);
nctempchar1* nctemp6803= nctemp6807;
int nctemp6808=CodeEs(nctemp6801,nctemp6803);
struct tree* nctemp6810= p;
struct nctempchar1 *nctemp6814;
static struct nctempchar1 nctemp6815 = {{ 2}, (char*)"(\0"};
nctemp6814=&nctemp6815;
nctempchar1* nctemp6812= nctemp6814;
int nctemp6816=CodeEs(nctemp6810,nctemp6812);
struct tree* nctemp6821= p;
struct tree* nctemp6823=PtreeMvchild(nctemp6821);
sp =nctemp6823;
int nctemp6824 = (sp !=0);
if(nctemp6824)
{
struct tree* nctemp6832= sp;
struct tree* nctemp6834=PtreeMvchild(nctemp6832);
sp =nctemp6834;
}
int nctemp6835 = (sp !=0);
int nctemp6839=nctemp6835;
while(nctemp6839)
{{
struct tree* nctemp6841= p;
struct tree* nctemp6845= sp;
nctempchar1* nctemp6847=PtreeGetempr(nctemp6845);
nctempchar1* nctemp6843= nctemp6847;
int nctemp6848=CodeEs(nctemp6841,nctemp6843);
struct tree* nctemp6856= sp;
struct tree* nctemp6858=PtreeMvsister(nctemp6856);
sp =nctemp6858;
int nctemp6849 = (sp !=0);
if(nctemp6849)
{
struct tree* nctemp6861= p;
struct nctempchar1 *nctemp6865;
static struct nctempchar1 nctemp6866 = {{ 2}, (char*)",\0"};
nctemp6865=&nctemp6866;
nctempchar1* nctemp6863= nctemp6865;
int nctemp6867=CodeEs(nctemp6861,nctemp6863);
}
int nctemp6876 = noargs + 1;
noargs =nctemp6876;
}
int nctemp6877 = (sp !=0);
nctemp6839=nctemp6877;}struct tree* nctemp6882= p;
struct nctempchar1 *nctemp6886;
static struct nctempchar1 nctemp6887 = {{ 5}, (char*)");\n\0"};
nctemp6886=&nctemp6887;
nctempchar1* nctemp6884= nctemp6886;
int nctemp6888=CodeEs(nctemp6882,nctemp6884);
return ntemp;
}
nctempchar1 * CodeCast (struct tree* p)
{
struct tree* np;
struct tree* sp;
struct tree* tp;
nctempchar1 *expr;
int rank;
int i;
nctempchar1 *dim;
nctempchar1 *pointer;
nctempchar1 *descr;
nctempchar1 *tmp;
nctempchar1 *type;
nctempchar1* nctemp6896=CodeMktemp();
pointer=nctemp6896;
nctempchar1* nctemp6902=CodeMktemp();
descr=nctemp6902;
struct tree* nctemp6908= p;
nctempchar1* nctemp6910=PtreeGetype(nctemp6908);
type=nctemp6910;
struct tree* nctemp6916= p;
nctempchar1* nctemp6918=PtreeGetname(nctemp6916);
nctempchar1* nctemp6914= nctemp6918;
struct nctempchar1 *nctemp6921;
static struct nctempchar1 nctemp6922 = {{ 5}, (char*)"cast\0"};
nctemp6921=&nctemp6922;
nctempchar1* nctemp6919= nctemp6921;
int nctemp6923=LibeStrcmp(nctemp6914,nctemp6919);
int nctemp6911 = (nctemp6923 ==1);
if(nctemp6911)
{
struct tree* nctemp6929= p;
struct tree* nctemp6931=PtreeMvchild(nctemp6929);
np =nctemp6931;
struct tree* nctemp6936= np;
struct tree* nctemp6938=PtreeMvsister(nctemp6936);
sp =nctemp6938;
struct tree* nctemp6944= sp;
nctempchar1* nctemp6946=CodeExpr(nctemp6944);
expr=nctemp6946;
struct tree* nctemp6952= np;
nctempchar1* nctemp6954=PtreeGetref(nctemp6952);
nctempchar1* nctemp6950= nctemp6954;
struct nctempchar1 *nctemp6957;
static struct nctempchar1 nctemp6958 = {{ 5}, (char*)"sref\0"};
nctemp6957=&nctemp6958;
nctempchar1* nctemp6955= nctemp6957;
int nctemp6959=LibeStrcmp(nctemp6950,nctemp6955);
int nctemp6947 = (nctemp6959 ==1);
if(nctemp6947)
{
nctempchar1* nctemp6966=CodeMktemp();
tmp=nctemp6966;
struct tree* nctemp6968= p;
nctempchar1* nctemp6970= type;
int nctemp6973=CodeEs(nctemp6968,nctemp6970);
struct tree* nctemp6975= p;
struct nctempchar1 *nctemp6979;
static struct nctempchar1 nctemp6980 = {{ 2}, (char*)" \0"};
nctemp6979=&nctemp6980;
nctempchar1* nctemp6977= nctemp6979;
int nctemp6981=CodeEs(nctemp6975,nctemp6977);
struct tree* nctemp6983= p;
nctempchar1* nctemp6985= tmp;
int nctemp6988=CodeEs(nctemp6983,nctemp6985);
struct tree* nctemp6990= p;
struct nctempchar1 *nctemp6994;
static struct nctempchar1 nctemp6995 = {{ 2}, (char*)"=\0"};
nctemp6994=&nctemp6995;
nctempchar1* nctemp6992= nctemp6994;
int nctemp6996=CodeEs(nctemp6990,nctemp6992);
struct tree* nctemp6998= p;
struct nctempchar1 *nctemp7002;
static struct nctempchar1 nctemp7003 = {{ 9}, (char*)"(struct \0"};
nctemp7002=&nctemp7003;
nctempchar1* nctemp7000= nctemp7002;
int nctemp7004=CodeEs(nctemp6998,nctemp7000);
struct tree* nctemp7006= p;
struct tree* nctemp7010= np;
nctempchar1* nctemp7012=PtreeGetype(nctemp7010);
nctempchar1* nctemp7008= nctemp7012;
int nctemp7013=CodeEs(nctemp7006,nctemp7008);
struct tree* nctemp7015= p;
struct nctempchar1 *nctemp7019;
static struct nctempchar1 nctemp7020 = {{ 4}, (char*)"*)(\0"};
nctemp7019=&nctemp7020;
nctempchar1* nctemp7017= nctemp7019;
int nctemp7021=CodeEs(nctemp7015,nctemp7017);
struct tree* nctemp7023= p;
nctempchar1* nctemp7025= expr;
int nctemp7028=CodeEs(nctemp7023,nctemp7025);
struct tree* nctemp7030= p;
struct nctempchar1 *nctemp7034;
static struct nctempchar1 nctemp7035 = {{ 5}, (char*)");\n\0"};
nctemp7034=&nctemp7035;
nctempchar1* nctemp7032= nctemp7034;
int nctemp7036=CodeEs(nctemp7030,nctemp7032);
}
else{
struct tree* nctemp7042= np;
nctempchar1* nctemp7044=PtreeGetref(nctemp7042);
nctempchar1* nctemp7040= nctemp7044;
struct nctempchar1 *nctemp7047;
static struct nctempchar1 nctemp7048 = {{ 5}, (char*)"aref\0"};
nctemp7047=&nctemp7048;
nctempchar1* nctemp7045= nctemp7047;
int nctemp7049=LibeStrcmp(nctemp7040,nctemp7045);
int nctemp7037 = (nctemp7049 ==1);
if(nctemp7037)
{
struct tree* nctemp7055= np;
struct tree* nctemp7057=PtreeMvchild(nctemp7055);
np =nctemp7057;
struct tree* nctemp7062= np;
struct tree* nctemp7064=PtreeMvchild(nctemp7062);
np =nctemp7064;
struct tree* nctemp7069= np;
struct tree* nctemp7071=PtreeMvchild(nctemp7069);
np =nctemp7071;
struct tree* nctemp7076= np;
struct tree* nctemp7078=PtreeMvchild(nctemp7076);
np =nctemp7078;
tp =np;
rank =1;
struct tree* nctemp7094= np;
struct tree* nctemp7096=PtreeMvsister(nctemp7094);
np =nctemp7096;
int nctemp7087 = (np !=0);
int nctemp7098=nctemp7087;
while(nctemp7098)
{{
int nctemp7107 = rank + 1;
rank =nctemp7107;
}
struct tree* nctemp7115= np;
struct tree* nctemp7117=PtreeMvsister(nctemp7115);
np =nctemp7117;
int nctemp7108 = (np !=0);
nctemp7098=nctemp7108;}int nctemp7119 = (rank > 4);
if(nctemp7119)
{
struct nctempchar1 *nctemp7126;
static struct nctempchar1 nctemp7127 = {{ 29}, (char*)"Array dimension is too large\0"};
nctemp7126=&nctemp7127;
nctempchar1* nctemp7124= nctemp7126;
int nctemp7128=CodeError(nctemp7124);
}
p =tp;
struct tree* nctemp7134= p;
struct nctempchar1 *nctemp7138;
static struct nctempchar1 nctemp7139 = {{ 7}, (char*)"nctemp\0"};
nctemp7138=&nctemp7139;
nctempchar1* nctemp7136= nctemp7138;
int nctemp7140=CodeEs(nctemp7134,nctemp7136);
struct tree* nctemp7142= p;
nctempchar1* nctemp7144= type;
int nctemp7147=CodeEs(nctemp7142,nctemp7144);
int nctemp7149= rank;
int nctemp7151=CodeEd(nctemp7149);
struct tree* nctemp7153= p;
struct nctempchar1 *nctemp7157;
static struct nctempchar1 nctemp7158 = {{ 2}, (char*)" \0"};
nctemp7157=&nctemp7158;
nctempchar1* nctemp7155= nctemp7157;
int nctemp7159=CodeEs(nctemp7153,nctemp7155);
struct tree* nctemp7161= sp;
nctempchar1* nctemp7163= descr;
int nctemp7166=CodeEs(nctemp7161,nctemp7163);
struct tree* nctemp7168= sp;
struct nctempchar1 *nctemp7172;
static struct nctempchar1 nctemp7173 = {{ 4}, (char*)";\n\0"};
nctemp7172=&nctemp7173;
nctempchar1* nctemp7170= nctemp7172;
int nctemp7174=CodeEs(nctemp7168,nctemp7170);
struct tree* nctemp7176= p;
struct nctempchar1 *nctemp7180;
static struct nctempchar1 nctemp7181 = {{ 7}, (char*)"nctemp\0"};
nctemp7180=&nctemp7181;
nctempchar1* nctemp7178= nctemp7180;
int nctemp7182=CodeEs(nctemp7176,nctemp7178);
struct tree* nctemp7184= p;
nctempchar1* nctemp7186= type;
int nctemp7189=CodeEs(nctemp7184,nctemp7186);
int nctemp7191= rank;
int nctemp7193=CodeEd(nctemp7191);
struct tree* nctemp7195= p;
struct nctempchar1 *nctemp7199;
static struct nctempchar1 nctemp7200 = {{ 3}, (char*)" *\0"};
nctemp7199=&nctemp7200;
nctempchar1* nctemp7197= nctemp7199;
int nctemp7201=CodeEs(nctemp7195,nctemp7197);
struct tree* nctemp7203= sp;
nctempchar1* nctemp7205= pointer;
int nctemp7208=CodeEs(nctemp7203,nctemp7205);
struct tree* nctemp7210= p;
struct nctempchar1 *nctemp7214;
static struct nctempchar1 nctemp7215 = {{ 4}, (char*)";\n\0"};
nctemp7214=&nctemp7215;
nctempchar1* nctemp7212= nctemp7214;
int nctemp7216=CodeEs(nctemp7210,nctemp7212);
struct tree* nctemp7218= sp;
nctempchar1* nctemp7220= descr;
int nctemp7223=CodeEs(nctemp7218,nctemp7220);
struct tree* nctemp7225= sp;
struct nctempchar1 *nctemp7229;
static struct nctempchar1 nctemp7230 = {{ 2}, (char*)"=\0"};
nctemp7229=&nctemp7230;
nctempchar1* nctemp7227= nctemp7229;
int nctemp7231=CodeEs(nctemp7225,nctemp7227);
struct tree* nctemp7233= sp;
struct nctempchar1 *nctemp7237;
static struct nctempchar1 nctemp7238 = {{ 3}, (char*)"*(\0"};
nctemp7237=&nctemp7238;
nctempchar1* nctemp7235= nctemp7237;
int nctemp7239=CodeEs(nctemp7233,nctemp7235);
struct tree* nctemp7241= p;
struct nctempchar1 *nctemp7245;
static struct nctempchar1 nctemp7246 = {{ 7}, (char*)"nctemp\0"};
nctemp7245=&nctemp7246;
nctempchar1* nctemp7243= nctemp7245;
int nctemp7247=CodeEs(nctemp7241,nctemp7243);
struct tree* nctemp7249= sp;
nctempchar1* nctemp7251= type;
int nctemp7254=CodeEs(nctemp7249,nctemp7251);
int nctemp7256= rank;
int nctemp7258=CodeEd(nctemp7256);
struct tree* nctemp7260= sp;
struct nctempchar1 *nctemp7264;
static struct nctempchar1 nctemp7265 = {{ 4}, (char*)"*)(\0"};
nctemp7264=&nctemp7265;
nctempchar1* nctemp7262= nctemp7264;
int nctemp7266=CodeEs(nctemp7260,nctemp7262);
struct tree* nctemp7268= sp;
nctempchar1* nctemp7270= expr;
int nctemp7273=CodeEs(nctemp7268,nctemp7270);
struct tree* nctemp7275= sp;
struct nctempchar1 *nctemp7279;
static struct nctempchar1 nctemp7280 = {{ 5}, (char*)");\n\0"};
nctemp7279=&nctemp7280;
nctempchar1* nctemp7277= nctemp7279;
int nctemp7281=CodeEs(nctemp7275,nctemp7277);
p =tp;
i =0;
int nctemp7290 = (p !=0);
int nctemp7294=nctemp7290;
while(nctemp7294)
{{
struct tree* nctemp7300= p;
nctempchar1* nctemp7302=CodeExpr(nctemp7300);
dim=nctemp7302;
struct tree* nctemp7304= sp;
nctempchar1* nctemp7306= descr;
int nctemp7309=CodeEs(nctemp7304,nctemp7306);
struct tree* nctemp7311= sp;
struct nctempchar1 *nctemp7315;
static struct nctempchar1 nctemp7316 = {{ 3}, (char*)".d\0"};
nctemp7315=&nctemp7316;
nctempchar1* nctemp7313= nctemp7315;
int nctemp7317=CodeEs(nctemp7311,nctemp7313);
struct tree* nctemp7319= sp;
struct nctempchar1 *nctemp7323;
static struct nctempchar1 nctemp7324 = {{ 2}, (char*)"[\0"};
nctemp7323=&nctemp7324;
nctempchar1* nctemp7321= nctemp7323;
int nctemp7325=CodeEs(nctemp7319,nctemp7321);
int nctemp7327= i;
int nctemp7329=CodeEd(nctemp7327);
struct tree* nctemp7331= sp;
struct nctempchar1 *nctemp7335;
static struct nctempchar1 nctemp7336 = {{ 3}, (char*)"]=\0"};
nctemp7335=&nctemp7336;
nctempchar1* nctemp7333= nctemp7335;
int nctemp7337=CodeEs(nctemp7331,nctemp7333);
struct tree* nctemp7339= sp;
nctempchar1* nctemp7341= dim;
int nctemp7344=CodeEs(nctemp7339,nctemp7341);
struct tree* nctemp7346= sp;
struct nctempchar1 *nctemp7350;
static struct nctempchar1 nctemp7351 = {{ 4}, (char*)";\n\0"};
nctemp7350=&nctemp7351;
nctempchar1* nctemp7348= nctemp7350;
int nctemp7352=CodeEs(nctemp7346,nctemp7348);
int nctemp7361 = i + 1;
i =nctemp7361;
struct tree* nctemp7366= p;
struct tree* nctemp7368=PtreeMvsister(nctemp7366);
p =nctemp7368;
}
int nctemp7369 = (p !=0);
nctemp7294=nctemp7369;}struct tree* nctemp7374= sp;
nctempchar1* nctemp7376= pointer;
int nctemp7379=CodeEs(nctemp7374,nctemp7376);
struct tree* nctemp7381= sp;
struct nctempchar1 *nctemp7385;
static struct nctempchar1 nctemp7386 = {{ 3}, (char*)"=&\0"};
nctemp7385=&nctemp7386;
nctempchar1* nctemp7383= nctemp7385;
int nctemp7387=CodeEs(nctemp7381,nctemp7383);
struct tree* nctemp7389= sp;
nctempchar1* nctemp7391= descr;
int nctemp7394=CodeEs(nctemp7389,nctemp7391);
struct tree* nctemp7396= sp;
struct nctempchar1 *nctemp7400;
static struct nctempchar1 nctemp7401 = {{ 4}, (char*)";\n\0"};
nctemp7400=&nctemp7401;
nctempchar1* nctemp7398= nctemp7400;
int nctemp7402=CodeEs(nctemp7396,nctemp7398);
}
else{
struct tree* nctemp7404= p;
nctempchar1* nctemp7406= type;
int nctemp7409=CodeEs(nctemp7404,nctemp7406);
struct tree* nctemp7411= p;
struct nctempchar1 *nctemp7415;
static struct nctempchar1 nctemp7416 = {{ 2}, (char*)" \0"};
nctemp7415=&nctemp7416;
nctempchar1* nctemp7413= nctemp7415;
int nctemp7417=CodeEs(nctemp7411,nctemp7413);
struct tree* nctemp7419= p;
nctempchar1* nctemp7421= pointer;
int nctemp7424=CodeEs(nctemp7419,nctemp7421);
struct tree* nctemp7426= p;
struct nctempchar1 *nctemp7430;
static struct nctempchar1 nctemp7431 = {{ 2}, (char*)"=\0"};
nctemp7430=&nctemp7431;
nctempchar1* nctemp7428= nctemp7430;
int nctemp7432=CodeEs(nctemp7426,nctemp7428);
struct tree* nctemp7434= p;
struct nctempchar1 *nctemp7438;
static struct nctempchar1 nctemp7439 = {{ 2}, (char*)"(\0"};
nctemp7438=&nctemp7439;
nctempchar1* nctemp7436= nctemp7438;
int nctemp7440=CodeEs(nctemp7434,nctemp7436);
struct tree* nctemp7442= p;
struct tree* nctemp7446= np;
nctempchar1* nctemp7448=PtreeGetype(nctemp7446);
nctempchar1* nctemp7444= nctemp7448;
int nctemp7449=CodeEs(nctemp7442,nctemp7444);
struct tree* nctemp7451= p;
struct nctempchar1 *nctemp7455;
static struct nctempchar1 nctemp7456 = {{ 3}, (char*)")(\0"};
nctemp7455=&nctemp7456;
nctempchar1* nctemp7453= nctemp7455;
int nctemp7457=CodeEs(nctemp7451,nctemp7453);
struct tree* nctemp7459= p;
nctempchar1* nctemp7461= expr;
int nctemp7464=CodeEs(nctemp7459,nctemp7461);
struct tree* nctemp7466= p;
struct nctempchar1 *nctemp7470;
static struct nctempchar1 nctemp7471 = {{ 5}, (char*)");\n\0"};
nctemp7470=&nctemp7471;
nctempchar1* nctemp7468= nctemp7470;
int nctemp7472=CodeEs(nctemp7466,nctemp7468);
}
}
}
return pointer;
}
nctempchar1 * CodePrimexpr (struct tree* p)
{
struct tree* nctemp7480= p;
nctempchar1* nctemp7482=PtreeGetname(nctemp7480);
nctempchar1* nctemp7478= nctemp7482;
struct nctempchar1 *nctemp7485;
static struct nctempchar1 nctemp7486 = {{ 11}, (char*)"identifier\0"};
nctemp7485=&nctemp7486;
nctempchar1* nctemp7483= nctemp7485;
int nctemp7487=LibeStrcmp(nctemp7478,nctemp7483);
int nctemp7475 = (nctemp7487 ==1);
if(nctemp7475)
{
struct tree* nctemp7490= p;
nctempchar1* nctemp7492=CodeIdent(nctemp7490);
return nctemp7492;
}
else{
struct tree* nctemp7498= p;
nctempchar1* nctemp7500=PtreeGetname(nctemp7498);
nctempchar1* nctemp7496= nctemp7500;
struct nctempchar1 *nctemp7503;
static struct nctempchar1 nctemp7504 = {{ 4}, (char*)"new\0"};
nctemp7503=&nctemp7504;
nctempchar1* nctemp7501= nctemp7503;
int nctemp7505=LibeStrcmp(nctemp7496,nctemp7501);
int nctemp7493 = (nctemp7505 ==1);
if(nctemp7493)
{
struct tree* nctemp7508= p;
nctempchar1* nctemp7510=CodeNew(nctemp7508);
return nctemp7510;
}
else{
struct tree* nctemp7516= p;
nctempchar1* nctemp7518=PtreeGetname(nctemp7516);
nctempchar1* nctemp7514= nctemp7518;
struct nctempchar1 *nctemp7521;
static struct nctempchar1 nctemp7522 = {{ 7}, (char*)"delete\0"};
nctemp7521=&nctemp7522;
nctempchar1* nctemp7519= nctemp7521;
int nctemp7523=LibeStrcmp(nctemp7514,nctemp7519);
int nctemp7511 = (nctemp7523 ==1);
if(nctemp7511)
{
struct tree* nctemp7526= p;
nctempchar1* nctemp7528=CodeDelete(nctemp7526);
return nctemp7528;
}
else{
struct tree* nctemp7534= p;
nctempchar1* nctemp7536=PtreeGetname(nctemp7534);
nctempchar1* nctemp7532= nctemp7536;
struct nctempchar1 *nctemp7539;
static struct nctempchar1 nctemp7540 = {{ 4}, (char*)"len\0"};
nctemp7539=&nctemp7540;
nctempchar1* nctemp7537= nctemp7539;
int nctemp7541=LibeStrcmp(nctemp7532,nctemp7537);
int nctemp7529 = (nctemp7541 ==1);
if(nctemp7529)
{
struct tree* nctemp7544= p;
nctempchar1* nctemp7546=CodeLen(nctemp7544);
return nctemp7546;
}
else{
struct tree* nctemp7552= p;
nctempchar1* nctemp7554=PtreeGetname(nctemp7552);
nctempchar1* nctemp7550= nctemp7554;
struct nctempchar1 *nctemp7557;
static struct nctempchar1 nctemp7558 = {{ 6}, (char*)"cmplx\0"};
nctemp7557=&nctemp7558;
nctempchar1* nctemp7555= nctemp7557;
int nctemp7559=LibeStrcmp(nctemp7550,nctemp7555);
int nctemp7547 = (nctemp7559 ==1);
if(nctemp7547)
{
struct tree* nctemp7562= p;
nctempchar1* nctemp7564=CodeCmplx(nctemp7562);
return nctemp7564;
}
else{
struct tree* nctemp7570= p;
nctempchar1* nctemp7572=PtreeGetname(nctemp7570);
nctempchar1* nctemp7568= nctemp7572;
struct nctempchar1 *nctemp7575;
static struct nctempchar1 nctemp7576 = {{ 3}, (char*)"im\0"};
nctemp7575=&nctemp7576;
nctempchar1* nctemp7573= nctemp7575;
int nctemp7577=LibeStrcmp(nctemp7568,nctemp7573);
int nctemp7565 = (nctemp7577 ==1);
if(nctemp7565)
{
struct tree* nctemp7580= p;
nctempchar1* nctemp7582=CodeIm(nctemp7580);
return nctemp7582;
}
else{
struct tree* nctemp7588= p;
nctempchar1* nctemp7590=PtreeGetname(nctemp7588);
nctempchar1* nctemp7586= nctemp7590;
struct nctempchar1 *nctemp7593;
static struct nctempchar1 nctemp7594 = {{ 3}, (char*)"re\0"};
nctemp7593=&nctemp7594;
nctempchar1* nctemp7591= nctemp7593;
int nctemp7595=LibeStrcmp(nctemp7586,nctemp7591);
int nctemp7583 = (nctemp7595 ==1);
if(nctemp7583)
{
struct tree* nctemp7598= p;
nctempchar1* nctemp7600=CodeRe(nctemp7598);
return nctemp7600;
}
else{
struct tree* nctemp7606= p;
nctempchar1* nctemp7608=PtreeGetname(nctemp7606);
nctempchar1* nctemp7604= nctemp7608;
struct nctempchar1 *nctemp7611;
static struct nctempchar1 nctemp7612 = {{ 6}, (char*)"fcall\0"};
nctemp7611=&nctemp7612;
nctempchar1* nctemp7609= nctemp7611;
int nctemp7613=LibeStrcmp(nctemp7604,nctemp7609);
int nctemp7601 = (nctemp7613 ==1);
if(nctemp7601)
{
struct tree* nctemp7616= p;
nctempchar1* nctemp7618=CodeFcall(nctemp7616);
return nctemp7618;
}
else{
struct tree* nctemp7624= p;
nctempchar1* nctemp7626=PtreeGetname(nctemp7624);
nctempchar1* nctemp7622= nctemp7626;
struct nctempchar1 *nctemp7629;
static struct nctempchar1 nctemp7630 = {{ 5}, (char*)"cast\0"};
nctemp7629=&nctemp7630;
nctempchar1* nctemp7627= nctemp7629;
int nctemp7631=LibeStrcmp(nctemp7622,nctemp7627);
int nctemp7619 = (nctemp7631 ==1);
if(nctemp7619)
{
struct tree* nctemp7634= p;
nctempchar1* nctemp7636=CodeCast(nctemp7634);
return nctemp7636;
}
else{
struct tree* nctemp7642= p;
nctempchar1* nctemp7644=PtreeGetname(nctemp7642);
nctempchar1* nctemp7640= nctemp7644;
struct nctempchar1 *nctemp7647;
static struct nctempchar1 nctemp7648 = {{ 10}, (char*)"iconstant\0"};
nctemp7647=&nctemp7648;
nctempchar1* nctemp7645= nctemp7647;
int nctemp7649=LibeStrcmp(nctemp7640,nctemp7645);
int nctemp7637 = (nctemp7649 ==1);
if(nctemp7637)
{
struct tree* nctemp7652= p;
nctempchar1* nctemp7654=PtreeGetdef(nctemp7652);
return nctemp7654;
}
else{
struct tree* nctemp7660= p;
nctempchar1* nctemp7662=PtreeGetname(nctemp7660);
nctempchar1* nctemp7658= nctemp7662;
struct nctempchar1 *nctemp7665;
static struct nctempchar1 nctemp7666 = {{ 10}, (char*)"rconstant\0"};
nctemp7665=&nctemp7666;
nctempchar1* nctemp7663= nctemp7665;
int nctemp7667=LibeStrcmp(nctemp7658,nctemp7663);
int nctemp7655 = (nctemp7667 ==1);
if(nctemp7655)
{
struct tree* nctemp7670= p;
nctempchar1* nctemp7672=PtreeGetdef(nctemp7670);
return nctemp7672;
}
else{
struct tree* nctemp7678= p;
nctempchar1* nctemp7680=PtreeGetname(nctemp7678);
nctempchar1* nctemp7676= nctemp7680;
struct nctempchar1 *nctemp7683;
static struct nctempchar1 nctemp7684 = {{ 10}, (char*)"sconstant\0"};
nctemp7683=&nctemp7684;
nctempchar1* nctemp7681= nctemp7683;
int nctemp7685=LibeStrcmp(nctemp7676,nctemp7681);
int nctemp7673 = (nctemp7685 ==1);
if(nctemp7673)
{
struct tree* nctemp7688= p;
nctempchar1* nctemp7690=CodeSconstant(nctemp7688);
return nctemp7690;
}
else{
struct tree* nctemp7692= p;
nctempchar1* nctemp7694=CodeBinexpr(nctemp7692);
return nctemp7694;
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
nctempchar1 * CodeUnexpr (struct tree* p)
{
nctempchar1 *tmp;
nctempchar1 *tempr;
nctempchar1* nctemp7700=CodeMktemp();
tempr=nctemp7700;
struct tree* nctemp7706= p;
nctempchar1* nctemp7708=PtreeGetname(nctemp7706);
nctempchar1* nctemp7704= nctemp7708;
struct nctempchar1 *nctemp7711;
static struct nctempchar1 nctemp7712 = {{ 7}, (char*)"unexpr\0"};
nctemp7711=&nctemp7712;
nctempchar1* nctemp7709= nctemp7711;
int nctemp7713=LibeStrcmp(nctemp7704,nctemp7709);
int nctemp7701 = (nctemp7713 ==1);
if(nctemp7701)
{
struct tree* nctemp7720= p;
nctempchar1* nctemp7722=PtreeGetype(nctemp7720);
nctempchar1* nctemp7718= nctemp7722;
struct nctempchar1 *nctemp7725;
static struct nctempchar1 nctemp7726 = {{ 8}, (char*)"complex\0"};
nctemp7725=&nctemp7726;
nctempchar1* nctemp7723= nctemp7725;
int nctemp7727=LibeStrcmp(nctemp7718,nctemp7723);
int nctemp7715 = (nctemp7727 ==1);
if(nctemp7715)
{
struct tree* nctemp7736= p;
struct tree* nctemp7738=PtreeMvchild(nctemp7736);
struct tree* nctemp7734= nctemp7738;
nctempchar1* nctemp7739=CodePrimexpr(nctemp7734);
tmp=nctemp7739;
struct tree* nctemp7741= p;
struct nctempchar1 *nctemp7745;
static struct nctempchar1 nctemp7746 = {{ 4}, (char*)";\n\0"};
nctemp7745=&nctemp7746;
nctempchar1* nctemp7743= nctemp7745;
int nctemp7747=CodeEs(nctemp7741,nctemp7743);
struct tree* nctemp7749= p;
nctempchar1* nctemp7751= tempr;
int nctemp7754=CodeEs(nctemp7749,nctemp7751);
struct tree* nctemp7756= p;
struct nctempchar1 *nctemp7760;
static struct nctempchar1 nctemp7761 = {{ 3}, (char*)".r\0"};
nctemp7760=&nctemp7761;
nctempchar1* nctemp7758= nctemp7760;
int nctemp7762=CodeEs(nctemp7756,nctemp7758);
struct tree* nctemp7764= p;
struct nctempchar1 *nctemp7768;
static struct nctempchar1 nctemp7769 = {{ 4}, (char*)"= -\0"};
nctemp7768=&nctemp7769;
nctempchar1* nctemp7766= nctemp7768;
int nctemp7770=CodeEs(nctemp7764,nctemp7766);
struct tree* nctemp7772= p;
nctempchar1* nctemp7774= tmp;
int nctemp7777=CodeEs(nctemp7772,nctemp7774);
struct tree* nctemp7779= p;
struct nctempchar1 *nctemp7783;
static struct nctempchar1 nctemp7784 = {{ 3}, (char*)".r\0"};
nctemp7783=&nctemp7784;
nctempchar1* nctemp7781= nctemp7783;
int nctemp7785=CodeEs(nctemp7779,nctemp7781);
struct tree* nctemp7787= p;
struct nctempchar1 *nctemp7791;
static struct nctempchar1 nctemp7792 = {{ 4}, (char*)";\n\0"};
nctemp7791=&nctemp7792;
nctempchar1* nctemp7789= nctemp7791;
int nctemp7793=CodeEs(nctemp7787,nctemp7789);
struct tree* nctemp7795= p;
nctempchar1* nctemp7797= tempr;
int nctemp7800=CodeEs(nctemp7795,nctemp7797);
struct tree* nctemp7802= p;
struct nctempchar1 *nctemp7806;
static struct nctempchar1 nctemp7807 = {{ 3}, (char*)".i\0"};
nctemp7806=&nctemp7807;
nctempchar1* nctemp7804= nctemp7806;
int nctemp7808=CodeEs(nctemp7802,nctemp7804);
struct tree* nctemp7810= p;
struct nctempchar1 *nctemp7814;
static struct nctempchar1 nctemp7815 = {{ 4}, (char*)"= -\0"};
nctemp7814=&nctemp7815;
nctempchar1* nctemp7812= nctemp7814;
int nctemp7816=CodeEs(nctemp7810,nctemp7812);
struct tree* nctemp7818= p;
nctempchar1* nctemp7820= tmp;
int nctemp7823=CodeEs(nctemp7818,nctemp7820);
struct tree* nctemp7825= p;
struct nctempchar1 *nctemp7829;
static struct nctempchar1 nctemp7830 = {{ 3}, (char*)".i\0"};
nctemp7829=&nctemp7830;
nctempchar1* nctemp7827= nctemp7829;
int nctemp7831=CodeEs(nctemp7825,nctemp7827);
struct tree* nctemp7833= p;
struct nctempchar1 *nctemp7837;
static struct nctempchar1 nctemp7838 = {{ 4}, (char*)";\n\0"};
nctemp7837=&nctemp7838;
nctempchar1* nctemp7835= nctemp7837;
int nctemp7839=CodeEs(nctemp7833,nctemp7835);
return tempr;
}
else{
struct tree* nctemp7849= p;
struct tree* nctemp7851=PtreeMvchild(nctemp7849);
struct tree* nctemp7847= nctemp7851;
nctempchar1* nctemp7852=CodePrimexpr(nctemp7847);
tmp=nctemp7852;
struct tree* nctemp7854= p;
struct tree* nctemp7858= p;
nctempchar1* nctemp7860=PtreeGetype(nctemp7858);
nctempchar1* nctemp7856= nctemp7860;
int nctemp7861=CodeEs(nctemp7854,nctemp7856);
struct tree* nctemp7863= p;
struct nctempchar1 *nctemp7867;
static struct nctempchar1 nctemp7868 = {{ 2}, (char*)" \0"};
nctemp7867=&nctemp7868;
nctempchar1* nctemp7865= nctemp7867;
int nctemp7869=CodeEs(nctemp7863,nctemp7865);
struct tree* nctemp7871= p;
nctempchar1* nctemp7873= tempr;
int nctemp7876=CodeEs(nctemp7871,nctemp7873);
struct tree* nctemp7878= p;
struct nctempchar1 *nctemp7882;
static struct nctempchar1 nctemp7883 = {{ 4}, (char*)"= -\0"};
nctemp7882=&nctemp7883;
nctempchar1* nctemp7880= nctemp7882;
int nctemp7884=CodeEs(nctemp7878,nctemp7880);
struct tree* nctemp7886= p;
nctempchar1* nctemp7888= tmp;
int nctemp7891=CodeEs(nctemp7886,nctemp7888);
struct tree* nctemp7893= p;
struct nctempchar1 *nctemp7897;
static struct nctempchar1 nctemp7898 = {{ 4}, (char*)";\n\0"};
nctemp7897=&nctemp7898;
nctempchar1* nctemp7895= nctemp7897;
int nctemp7899=CodeEs(nctemp7893,nctemp7895);
return tempr;
}
}
else{
struct tree* nctemp7903= p;
nctempchar1* nctemp7905=CodePrimexpr(nctemp7903);
return nctemp7905;
}
}
nctempchar1 * CodeAddexpr (struct tree* p,nctempchar1 *lval,nctempchar1 *rval)
{
nctempchar1 *type;
nctempchar1 *tempr;
nctempchar1 *opr;
struct tree* nctemp7911= p;
nctempchar1* nctemp7913=PtreeGetype(nctemp7911);
type=nctemp7913;
nctempchar1* nctemp7919=CodeMktemp();
tempr=nctemp7919;
struct tree* nctemp7925= p;
nctempchar1* nctemp7927=PtreeGetdef(nctemp7925);
opr=nctemp7927;
nctempchar1* nctemp7931= type;
struct nctempchar1 *nctemp7936;
static struct nctempchar1 nctemp7937 = {{ 8}, (char*)"complex\0"};
nctemp7936=&nctemp7937;
nctempchar1* nctemp7934= nctemp7936;
int nctemp7938=LibeStrcmp(nctemp7931,nctemp7934);
int nctemp7928 = (nctemp7938 ==1);
if(nctemp7928)
{
nctempchar1* nctemp7946= opr;
struct nctempchar1 *nctemp7951;
static struct nctempchar1 nctemp7952 = {{ 2}, (char*)"+\0"};
nctemp7951=&nctemp7952;
nctempchar1* nctemp7949= nctemp7951;
int nctemp7953=LibeStrcmp(nctemp7946,nctemp7949);
int nctemp7943 = (nctemp7953 ==1);
nctempchar1* nctemp7959= opr;
struct nctempchar1 *nctemp7964;
static struct nctempchar1 nctemp7965 = {{ 2}, (char*)"-\0"};
nctemp7964=&nctemp7965;
nctempchar1* nctemp7962= nctemp7964;
int nctemp7966=LibeStrcmp(nctemp7959,nctemp7962);
int nctemp7956 = (nctemp7966 ==1);
int nctemp7940 = (nctemp7943 || nctemp7956);
if(nctemp7940)
{
struct tree* nctemp7969= p;
nctempchar1* nctemp7971= type;
int nctemp7974=CodeEs(nctemp7969,nctemp7971);
struct tree* nctemp7976= p;
struct nctempchar1 *nctemp7980;
static struct nctempchar1 nctemp7981 = {{ 2}, (char*)" \0"};
nctemp7980=&nctemp7981;
nctempchar1* nctemp7978= nctemp7980;
int nctemp7982=CodeEs(nctemp7976,nctemp7978);
struct tree* nctemp7984= p;
nctempchar1* nctemp7986= tempr;
int nctemp7989=CodeEs(nctemp7984,nctemp7986);
struct tree* nctemp7991= p;
struct nctempchar1 *nctemp7995;
static struct nctempchar1 nctemp7996 = {{ 3}, (char*)".r\0"};
nctemp7995=&nctemp7996;
nctempchar1* nctemp7993= nctemp7995;
int nctemp7997=CodeEs(nctemp7991,nctemp7993);
struct tree* nctemp7999= p;
struct nctempchar1 *nctemp8003;
static struct nctempchar1 nctemp8004 = {{ 4}, (char*)" = \0"};
nctemp8003=&nctemp8004;
nctempchar1* nctemp8001= nctemp8003;
int nctemp8005=CodeEs(nctemp7999,nctemp8001);
struct tree* nctemp8007= p;
nctempchar1* nctemp8009= lval;
int nctemp8012=CodeEs(nctemp8007,nctemp8009);
struct tree* nctemp8014= p;
struct nctempchar1 *nctemp8018;
static struct nctempchar1 nctemp8019 = {{ 3}, (char*)".r\0"};
nctemp8018=&nctemp8019;
nctempchar1* nctemp8016= nctemp8018;
int nctemp8020=CodeEs(nctemp8014,nctemp8016);
struct tree* nctemp8022= p;
struct nctempchar1 *nctemp8026;
static struct nctempchar1 nctemp8027 = {{ 2}, (char*)" \0"};
nctemp8026=&nctemp8027;
nctempchar1* nctemp8024= nctemp8026;
int nctemp8028=CodeEs(nctemp8022,nctemp8024);
struct tree* nctemp8030= p;
struct tree* nctemp8034= p;
nctempchar1* nctemp8036=PtreeGetdef(nctemp8034);
nctempchar1* nctemp8032= nctemp8036;
int nctemp8037=CodeEs(nctemp8030,nctemp8032);
struct tree* nctemp8039= p;
struct nctempchar1 *nctemp8043;
static struct nctempchar1 nctemp8044 = {{ 2}, (char*)" \0"};
nctemp8043=&nctemp8044;
nctempchar1* nctemp8041= nctemp8043;
int nctemp8045=CodeEs(nctemp8039,nctemp8041);
struct tree* nctemp8047= p;
nctempchar1* nctemp8049= rval;
int nctemp8052=CodeEs(nctemp8047,nctemp8049);
struct tree* nctemp8054= p;
struct nctempchar1 *nctemp8058;
static struct nctempchar1 nctemp8059 = {{ 3}, (char*)".r\0"};
nctemp8058=&nctemp8059;
nctempchar1* nctemp8056= nctemp8058;
int nctemp8060=CodeEs(nctemp8054,nctemp8056);
struct tree* nctemp8062= p;
struct nctempchar1 *nctemp8066;
static struct nctempchar1 nctemp8067 = {{ 4}, (char*)";\n\0"};
nctemp8066=&nctemp8067;
nctempchar1* nctemp8064= nctemp8066;
int nctemp8068=CodeEs(nctemp8062,nctemp8064);
struct tree* nctemp8070= p;
nctempchar1* nctemp8072= type;
int nctemp8075=CodeEs(nctemp8070,nctemp8072);
struct tree* nctemp8077= p;
struct nctempchar1 *nctemp8081;
static struct nctempchar1 nctemp8082 = {{ 2}, (char*)" \0"};
nctemp8081=&nctemp8082;
nctempchar1* nctemp8079= nctemp8081;
int nctemp8083=CodeEs(nctemp8077,nctemp8079);
struct tree* nctemp8085= p;
nctempchar1* nctemp8087= tempr;
int nctemp8090=CodeEs(nctemp8085,nctemp8087);
struct tree* nctemp8092= p;
struct nctempchar1 *nctemp8096;
static struct nctempchar1 nctemp8097 = {{ 3}, (char*)".i\0"};
nctemp8096=&nctemp8097;
nctempchar1* nctemp8094= nctemp8096;
int nctemp8098=CodeEs(nctemp8092,nctemp8094);
struct tree* nctemp8100= p;
struct nctempchar1 *nctemp8104;
static struct nctempchar1 nctemp8105 = {{ 4}, (char*)" = \0"};
nctemp8104=&nctemp8105;
nctempchar1* nctemp8102= nctemp8104;
int nctemp8106=CodeEs(nctemp8100,nctemp8102);
struct tree* nctemp8108= p;
nctempchar1* nctemp8110= lval;
int nctemp8113=CodeEs(nctemp8108,nctemp8110);
struct tree* nctemp8115= p;
struct nctempchar1 *nctemp8119;
static struct nctempchar1 nctemp8120 = {{ 3}, (char*)".i\0"};
nctemp8119=&nctemp8120;
nctempchar1* nctemp8117= nctemp8119;
int nctemp8121=CodeEs(nctemp8115,nctemp8117);
struct tree* nctemp8123= p;
struct nctempchar1 *nctemp8127;
static struct nctempchar1 nctemp8128 = {{ 2}, (char*)" \0"};
nctemp8127=&nctemp8128;
nctempchar1* nctemp8125= nctemp8127;
int nctemp8129=CodeEs(nctemp8123,nctemp8125);
struct tree* nctemp8131= p;
struct tree* nctemp8135= p;
nctempchar1* nctemp8137=PtreeGetdef(nctemp8135);
nctempchar1* nctemp8133= nctemp8137;
int nctemp8138=CodeEs(nctemp8131,nctemp8133);
struct tree* nctemp8140= p;
struct nctempchar1 *nctemp8144;
static struct nctempchar1 nctemp8145 = {{ 2}, (char*)" \0"};
nctemp8144=&nctemp8145;
nctempchar1* nctemp8142= nctemp8144;
int nctemp8146=CodeEs(nctemp8140,nctemp8142);
struct tree* nctemp8148= p;
nctempchar1* nctemp8150= rval;
int nctemp8153=CodeEs(nctemp8148,nctemp8150);
struct tree* nctemp8155= p;
struct nctempchar1 *nctemp8159;
static struct nctempchar1 nctemp8160 = {{ 3}, (char*)".i\0"};
nctemp8159=&nctemp8160;
nctempchar1* nctemp8157= nctemp8159;
int nctemp8161=CodeEs(nctemp8155,nctemp8157);
struct tree* nctemp8163= p;
struct nctempchar1 *nctemp8167;
static struct nctempchar1 nctemp8168 = {{ 4}, (char*)";\n\0"};
nctemp8167=&nctemp8168;
nctempchar1* nctemp8165= nctemp8167;
int nctemp8169=CodeEs(nctemp8163,nctemp8165);
}
else{
nctempchar1* nctemp8173= opr;
struct nctempchar1 *nctemp8178;
static struct nctempchar1 nctemp8179 = {{ 2}, (char*)"*\0"};
nctemp8178=&nctemp8179;
nctempchar1* nctemp8176= nctemp8178;
int nctemp8180=LibeStrcmp(nctemp8173,nctemp8176);
int nctemp8170 = (nctemp8180 ==1);
if(nctemp8170)
{
struct tree* nctemp8183= p;
nctempchar1* nctemp8185= type;
int nctemp8188=CodeEs(nctemp8183,nctemp8185);
struct tree* nctemp8190= p;
struct nctempchar1 *nctemp8194;
static struct nctempchar1 nctemp8195 = {{ 2}, (char*)" \0"};
nctemp8194=&nctemp8195;
nctempchar1* nctemp8192= nctemp8194;
int nctemp8196=CodeEs(nctemp8190,nctemp8192);
struct tree* nctemp8198= p;
nctempchar1* nctemp8200= tempr;
int nctemp8203=CodeEs(nctemp8198,nctemp8200);
struct tree* nctemp8205= p;
struct nctempchar1 *nctemp8209;
static struct nctempchar1 nctemp8210 = {{ 3}, (char*)".r\0"};
nctemp8209=&nctemp8210;
nctempchar1* nctemp8207= nctemp8209;
int nctemp8211=CodeEs(nctemp8205,nctemp8207);
struct tree* nctemp8213= p;
struct nctempchar1 *nctemp8217;
static struct nctempchar1 nctemp8218 = {{ 4}, (char*)" = \0"};
nctemp8217=&nctemp8218;
nctempchar1* nctemp8215= nctemp8217;
int nctemp8219=CodeEs(nctemp8213,nctemp8215);
struct tree* nctemp8221= p;
nctempchar1* nctemp8223= lval;
int nctemp8226=CodeEs(nctemp8221,nctemp8223);
struct tree* nctemp8228= p;
struct nctempchar1 *nctemp8232;
static struct nctempchar1 nctemp8233 = {{ 3}, (char*)".r\0"};
nctemp8232=&nctemp8233;
nctempchar1* nctemp8230= nctemp8232;
int nctemp8234=CodeEs(nctemp8228,nctemp8230);
struct tree* nctemp8236= p;
struct nctempchar1 *nctemp8240;
static struct nctempchar1 nctemp8241 = {{ 2}, (char*)"*\0"};
nctemp8240=&nctemp8241;
nctempchar1* nctemp8238= nctemp8240;
int nctemp8242=CodeEs(nctemp8236,nctemp8238);
struct tree* nctemp8244= p;
nctempchar1* nctemp8246= rval;
int nctemp8249=CodeEs(nctemp8244,nctemp8246);
struct tree* nctemp8251= p;
struct nctempchar1 *nctemp8255;
static struct nctempchar1 nctemp8256 = {{ 3}, (char*)".r\0"};
nctemp8255=&nctemp8256;
nctempchar1* nctemp8253= nctemp8255;
int nctemp8257=CodeEs(nctemp8251,nctemp8253);
struct tree* nctemp8259= p;
struct nctempchar1 *nctemp8263;
static struct nctempchar1 nctemp8264 = {{ 2}, (char*)"-\0"};
nctemp8263=&nctemp8264;
nctempchar1* nctemp8261= nctemp8263;
int nctemp8265=CodeEs(nctemp8259,nctemp8261);
struct tree* nctemp8267= p;
nctempchar1* nctemp8269= lval;
int nctemp8272=CodeEs(nctemp8267,nctemp8269);
struct tree* nctemp8274= p;
struct nctempchar1 *nctemp8278;
static struct nctempchar1 nctemp8279 = {{ 3}, (char*)".i\0"};
nctemp8278=&nctemp8279;
nctempchar1* nctemp8276= nctemp8278;
int nctemp8280=CodeEs(nctemp8274,nctemp8276);
struct tree* nctemp8282= p;
struct nctempchar1 *nctemp8286;
static struct nctempchar1 nctemp8287 = {{ 2}, (char*)"*\0"};
nctemp8286=&nctemp8287;
nctempchar1* nctemp8284= nctemp8286;
int nctemp8288=CodeEs(nctemp8282,nctemp8284);
struct tree* nctemp8290= p;
nctempchar1* nctemp8292= rval;
int nctemp8295=CodeEs(nctemp8290,nctemp8292);
struct tree* nctemp8297= p;
struct nctempchar1 *nctemp8301;
static struct nctempchar1 nctemp8302 = {{ 3}, (char*)".i\0"};
nctemp8301=&nctemp8302;
nctempchar1* nctemp8299= nctemp8301;
int nctemp8303=CodeEs(nctemp8297,nctemp8299);
struct tree* nctemp8305= p;
struct nctempchar1 *nctemp8309;
static struct nctempchar1 nctemp8310 = {{ 4}, (char*)";\n\0"};
nctemp8309=&nctemp8310;
nctempchar1* nctemp8307= nctemp8309;
int nctemp8311=CodeEs(nctemp8305,nctemp8307);
struct tree* nctemp8313= p;
nctempchar1* nctemp8315= type;
int nctemp8318=CodeEs(nctemp8313,nctemp8315);
struct tree* nctemp8320= p;
struct nctempchar1 *nctemp8324;
static struct nctempchar1 nctemp8325 = {{ 2}, (char*)" \0"};
nctemp8324=&nctemp8325;
nctempchar1* nctemp8322= nctemp8324;
int nctemp8326=CodeEs(nctemp8320,nctemp8322);
struct tree* nctemp8328= p;
nctempchar1* nctemp8330= tempr;
int nctemp8333=CodeEs(nctemp8328,nctemp8330);
struct tree* nctemp8335= p;
struct nctempchar1 *nctemp8339;
static struct nctempchar1 nctemp8340 = {{ 3}, (char*)".i\0"};
nctemp8339=&nctemp8340;
nctempchar1* nctemp8337= nctemp8339;
int nctemp8341=CodeEs(nctemp8335,nctemp8337);
struct tree* nctemp8343= p;
struct nctempchar1 *nctemp8347;
static struct nctempchar1 nctemp8348 = {{ 4}, (char*)" = \0"};
nctemp8347=&nctemp8348;
nctempchar1* nctemp8345= nctemp8347;
int nctemp8349=CodeEs(nctemp8343,nctemp8345);
struct tree* nctemp8351= p;
nctempchar1* nctemp8353= lval;
int nctemp8356=CodeEs(nctemp8351,nctemp8353);
struct tree* nctemp8358= p;
struct nctempchar1 *nctemp8362;
static struct nctempchar1 nctemp8363 = {{ 3}, (char*)".i\0"};
nctemp8362=&nctemp8363;
nctempchar1* nctemp8360= nctemp8362;
int nctemp8364=CodeEs(nctemp8358,nctemp8360);
struct tree* nctemp8366= p;
struct nctempchar1 *nctemp8370;
static struct nctempchar1 nctemp8371 = {{ 2}, (char*)"*\0"};
nctemp8370=&nctemp8371;
nctempchar1* nctemp8368= nctemp8370;
int nctemp8372=CodeEs(nctemp8366,nctemp8368);
struct tree* nctemp8374= p;
nctempchar1* nctemp8376= rval;
int nctemp8379=CodeEs(nctemp8374,nctemp8376);
struct tree* nctemp8381= p;
struct nctempchar1 *nctemp8385;
static struct nctempchar1 nctemp8386 = {{ 3}, (char*)".r\0"};
nctemp8385=&nctemp8386;
nctempchar1* nctemp8383= nctemp8385;
int nctemp8387=CodeEs(nctemp8381,nctemp8383);
struct tree* nctemp8389= p;
struct nctempchar1 *nctemp8393;
static struct nctempchar1 nctemp8394 = {{ 2}, (char*)"+\0"};
nctemp8393=&nctemp8394;
nctempchar1* nctemp8391= nctemp8393;
int nctemp8395=CodeEs(nctemp8389,nctemp8391);
struct tree* nctemp8397= p;
nctempchar1* nctemp8399= lval;
int nctemp8402=CodeEs(nctemp8397,nctemp8399);
struct tree* nctemp8404= p;
struct nctempchar1 *nctemp8408;
static struct nctempchar1 nctemp8409 = {{ 3}, (char*)".r\0"};
nctemp8408=&nctemp8409;
nctempchar1* nctemp8406= nctemp8408;
int nctemp8410=CodeEs(nctemp8404,nctemp8406);
struct tree* nctemp8412= p;
struct nctempchar1 *nctemp8416;
static struct nctempchar1 nctemp8417 = {{ 2}, (char*)"*\0"};
nctemp8416=&nctemp8417;
nctempchar1* nctemp8414= nctemp8416;
int nctemp8418=CodeEs(nctemp8412,nctemp8414);
struct tree* nctemp8420= p;
nctempchar1* nctemp8422= rval;
int nctemp8425=CodeEs(nctemp8420,nctemp8422);
struct tree* nctemp8427= p;
struct nctempchar1 *nctemp8431;
static struct nctempchar1 nctemp8432 = {{ 3}, (char*)".i\0"};
nctemp8431=&nctemp8432;
nctempchar1* nctemp8429= nctemp8431;
int nctemp8433=CodeEs(nctemp8427,nctemp8429);
struct tree* nctemp8435= p;
struct nctempchar1 *nctemp8439;
static struct nctempchar1 nctemp8440 = {{ 4}, (char*)";\n\0"};
nctemp8439=&nctemp8440;
nctempchar1* nctemp8437= nctemp8439;
int nctemp8441=CodeEs(nctemp8435,nctemp8437);
}
else{
nctempchar1* nctemp8445= opr;
struct nctempchar1 *nctemp8450;
static struct nctempchar1 nctemp8451 = {{ 2}, (char*)"/\0"};
nctemp8450=&nctemp8451;
nctempchar1* nctemp8448= nctemp8450;
int nctemp8452=LibeStrcmp(nctemp8445,nctemp8448);
int nctemp8442 = (nctemp8452 ==1);
if(nctemp8442)
{
struct tree* nctemp8455= p;
nctempchar1* nctemp8457= type;
int nctemp8460=CodeEs(nctemp8455,nctemp8457);
struct tree* nctemp8462= p;
struct nctempchar1 *nctemp8466;
static struct nctempchar1 nctemp8467 = {{ 2}, (char*)" \0"};
nctemp8466=&nctemp8467;
nctempchar1* nctemp8464= nctemp8466;
int nctemp8468=CodeEs(nctemp8462,nctemp8464);
struct tree* nctemp8470= p;
nctempchar1* nctemp8472= tempr;
int nctemp8475=CodeEs(nctemp8470,nctemp8472);
struct tree* nctemp8477= p;
struct nctempchar1 *nctemp8481;
static struct nctempchar1 nctemp8482 = {{ 3}, (char*)".r\0"};
nctemp8481=&nctemp8482;
nctempchar1* nctemp8479= nctemp8481;
int nctemp8483=CodeEs(nctemp8477,nctemp8479);
struct tree* nctemp8485= p;
struct nctempchar1 *nctemp8489;
static struct nctempchar1 nctemp8490 = {{ 4}, (char*)" = \0"};
nctemp8489=&nctemp8490;
nctempchar1* nctemp8487= nctemp8489;
int nctemp8491=CodeEs(nctemp8485,nctemp8487);
struct tree* nctemp8493= p;
struct nctempchar1 *nctemp8497;
static struct nctempchar1 nctemp8498 = {{ 2}, (char*)"(\0"};
nctemp8497=&nctemp8498;
nctempchar1* nctemp8495= nctemp8497;
int nctemp8499=CodeEs(nctemp8493,nctemp8495);
struct tree* nctemp8501= p;
nctempchar1* nctemp8503= lval;
int nctemp8506=CodeEs(nctemp8501,nctemp8503);
struct tree* nctemp8508= p;
struct nctempchar1 *nctemp8512;
static struct nctempchar1 nctemp8513 = {{ 3}, (char*)".r\0"};
nctemp8512=&nctemp8513;
nctempchar1* nctemp8510= nctemp8512;
int nctemp8514=CodeEs(nctemp8508,nctemp8510);
struct tree* nctemp8516= p;
struct nctempchar1 *nctemp8520;
static struct nctempchar1 nctemp8521 = {{ 2}, (char*)"*\0"};
nctemp8520=&nctemp8521;
nctempchar1* nctemp8518= nctemp8520;
int nctemp8522=CodeEs(nctemp8516,nctemp8518);
struct tree* nctemp8524= p;
nctempchar1* nctemp8526= rval;
int nctemp8529=CodeEs(nctemp8524,nctemp8526);
struct tree* nctemp8531= p;
struct nctempchar1 *nctemp8535;
static struct nctempchar1 nctemp8536 = {{ 3}, (char*)".r\0"};
nctemp8535=&nctemp8536;
nctempchar1* nctemp8533= nctemp8535;
int nctemp8537=CodeEs(nctemp8531,nctemp8533);
struct tree* nctemp8539= p;
struct nctempchar1 *nctemp8543;
static struct nctempchar1 nctemp8544 = {{ 2}, (char*)"+\0"};
nctemp8543=&nctemp8544;
nctempchar1* nctemp8541= nctemp8543;
int nctemp8545=CodeEs(nctemp8539,nctemp8541);
struct tree* nctemp8547= p;
nctempchar1* nctemp8549= lval;
int nctemp8552=CodeEs(nctemp8547,nctemp8549);
struct tree* nctemp8554= p;
struct nctempchar1 *nctemp8558;
static struct nctempchar1 nctemp8559 = {{ 3}, (char*)".i\0"};
nctemp8558=&nctemp8559;
nctempchar1* nctemp8556= nctemp8558;
int nctemp8560=CodeEs(nctemp8554,nctemp8556);
struct tree* nctemp8562= p;
struct nctempchar1 *nctemp8566;
static struct nctempchar1 nctemp8567 = {{ 2}, (char*)"*\0"};
nctemp8566=&nctemp8567;
nctempchar1* nctemp8564= nctemp8566;
int nctemp8568=CodeEs(nctemp8562,nctemp8564);
struct tree* nctemp8570= p;
nctempchar1* nctemp8572= rval;
int nctemp8575=CodeEs(nctemp8570,nctemp8572);
struct tree* nctemp8577= p;
struct nctempchar1 *nctemp8581;
static struct nctempchar1 nctemp8582 = {{ 3}, (char*)".i\0"};
nctemp8581=&nctemp8582;
nctempchar1* nctemp8579= nctemp8581;
int nctemp8583=CodeEs(nctemp8577,nctemp8579);
struct tree* nctemp8585= p;
struct nctempchar1 *nctemp8589;
static struct nctempchar1 nctemp8590 = {{ 4}, (char*)")/(\0"};
nctemp8589=&nctemp8590;
nctempchar1* nctemp8587= nctemp8589;
int nctemp8591=CodeEs(nctemp8585,nctemp8587);
struct tree* nctemp8593= p;
nctempchar1* nctemp8595= rval;
int nctemp8598=CodeEs(nctemp8593,nctemp8595);
struct tree* nctemp8600= p;
struct nctempchar1 *nctemp8604;
static struct nctempchar1 nctemp8605 = {{ 3}, (char*)".r\0"};
nctemp8604=&nctemp8605;
nctempchar1* nctemp8602= nctemp8604;
int nctemp8606=CodeEs(nctemp8600,nctemp8602);
struct tree* nctemp8608= p;
struct nctempchar1 *nctemp8612;
static struct nctempchar1 nctemp8613 = {{ 2}, (char*)"*\0"};
nctemp8612=&nctemp8613;
nctempchar1* nctemp8610= nctemp8612;
int nctemp8614=CodeEs(nctemp8608,nctemp8610);
struct tree* nctemp8616= p;
nctempchar1* nctemp8618= rval;
int nctemp8621=CodeEs(nctemp8616,nctemp8618);
struct tree* nctemp8623= p;
struct nctempchar1 *nctemp8627;
static struct nctempchar1 nctemp8628 = {{ 3}, (char*)".r\0"};
nctemp8627=&nctemp8628;
nctempchar1* nctemp8625= nctemp8627;
int nctemp8629=CodeEs(nctemp8623,nctemp8625);
struct tree* nctemp8631= p;
struct nctempchar1 *nctemp8635;
static struct nctempchar1 nctemp8636 = {{ 2}, (char*)"+\0"};
nctemp8635=&nctemp8636;
nctempchar1* nctemp8633= nctemp8635;
int nctemp8637=CodeEs(nctemp8631,nctemp8633);
struct tree* nctemp8639= p;
nctempchar1* nctemp8641= rval;
int nctemp8644=CodeEs(nctemp8639,nctemp8641);
struct tree* nctemp8646= p;
struct nctempchar1 *nctemp8650;
static struct nctempchar1 nctemp8651 = {{ 3}, (char*)".i\0"};
nctemp8650=&nctemp8651;
nctempchar1* nctemp8648= nctemp8650;
int nctemp8652=CodeEs(nctemp8646,nctemp8648);
struct tree* nctemp8654= p;
struct nctempchar1 *nctemp8658;
static struct nctempchar1 nctemp8659 = {{ 2}, (char*)"*\0"};
nctemp8658=&nctemp8659;
nctempchar1* nctemp8656= nctemp8658;
int nctemp8660=CodeEs(nctemp8654,nctemp8656);
struct tree* nctemp8662= p;
nctempchar1* nctemp8664= rval;
int nctemp8667=CodeEs(nctemp8662,nctemp8664);
struct tree* nctemp8669= p;
struct nctempchar1 *nctemp8673;
static struct nctempchar1 nctemp8674 = {{ 3}, (char*)".i\0"};
nctemp8673=&nctemp8674;
nctempchar1* nctemp8671= nctemp8673;
int nctemp8675=CodeEs(nctemp8669,nctemp8671);
struct tree* nctemp8677= p;
struct nctempchar1 *nctemp8681;
static struct nctempchar1 nctemp8682 = {{ 5}, (char*)");\n\0"};
nctemp8681=&nctemp8682;
nctempchar1* nctemp8679= nctemp8681;
int nctemp8683=CodeEs(nctemp8677,nctemp8679);
struct tree* nctemp8685= p;
nctempchar1* nctemp8687= type;
int nctemp8690=CodeEs(nctemp8685,nctemp8687);
struct tree* nctemp8692= p;
struct nctempchar1 *nctemp8696;
static struct nctempchar1 nctemp8697 = {{ 2}, (char*)" \0"};
nctemp8696=&nctemp8697;
nctempchar1* nctemp8694= nctemp8696;
int nctemp8698=CodeEs(nctemp8692,nctemp8694);
struct tree* nctemp8700= p;
nctempchar1* nctemp8702= tempr;
int nctemp8705=CodeEs(nctemp8700,nctemp8702);
struct tree* nctemp8707= p;
struct nctempchar1 *nctemp8711;
static struct nctempchar1 nctemp8712 = {{ 3}, (char*)".i\0"};
nctemp8711=&nctemp8712;
nctempchar1* nctemp8709= nctemp8711;
int nctemp8713=CodeEs(nctemp8707,nctemp8709);
struct tree* nctemp8715= p;
struct nctempchar1 *nctemp8719;
static struct nctempchar1 nctemp8720 = {{ 4}, (char*)" = \0"};
nctemp8719=&nctemp8720;
nctempchar1* nctemp8717= nctemp8719;
int nctemp8721=CodeEs(nctemp8715,nctemp8717);
struct tree* nctemp8723= p;
struct nctempchar1 *nctemp8727;
static struct nctempchar1 nctemp8728 = {{ 2}, (char*)"(\0"};
nctemp8727=&nctemp8728;
nctempchar1* nctemp8725= nctemp8727;
int nctemp8729=CodeEs(nctemp8723,nctemp8725);
struct tree* nctemp8731= p;
nctempchar1* nctemp8733= lval;
int nctemp8736=CodeEs(nctemp8731,nctemp8733);
struct tree* nctemp8738= p;
struct nctempchar1 *nctemp8742;
static struct nctempchar1 nctemp8743 = {{ 3}, (char*)".i\0"};
nctemp8742=&nctemp8743;
nctempchar1* nctemp8740= nctemp8742;
int nctemp8744=CodeEs(nctemp8738,nctemp8740);
struct tree* nctemp8746= p;
struct nctempchar1 *nctemp8750;
static struct nctempchar1 nctemp8751 = {{ 2}, (char*)"*\0"};
nctemp8750=&nctemp8751;
nctempchar1* nctemp8748= nctemp8750;
int nctemp8752=CodeEs(nctemp8746,nctemp8748);
struct tree* nctemp8754= p;
nctempchar1* nctemp8756= rval;
int nctemp8759=CodeEs(nctemp8754,nctemp8756);
struct tree* nctemp8761= p;
struct nctempchar1 *nctemp8765;
static struct nctempchar1 nctemp8766 = {{ 3}, (char*)".r\0"};
nctemp8765=&nctemp8766;
nctempchar1* nctemp8763= nctemp8765;
int nctemp8767=CodeEs(nctemp8761,nctemp8763);
struct tree* nctemp8769= p;
struct nctempchar1 *nctemp8773;
static struct nctempchar1 nctemp8774 = {{ 2}, (char*)"-\0"};
nctemp8773=&nctemp8774;
nctempchar1* nctemp8771= nctemp8773;
int nctemp8775=CodeEs(nctemp8769,nctemp8771);
struct tree* nctemp8777= p;
nctempchar1* nctemp8779= lval;
int nctemp8782=CodeEs(nctemp8777,nctemp8779);
struct tree* nctemp8784= p;
struct nctempchar1 *nctemp8788;
static struct nctempchar1 nctemp8789 = {{ 3}, (char*)".r\0"};
nctemp8788=&nctemp8789;
nctempchar1* nctemp8786= nctemp8788;
int nctemp8790=CodeEs(nctemp8784,nctemp8786);
struct tree* nctemp8792= p;
struct nctempchar1 *nctemp8796;
static struct nctempchar1 nctemp8797 = {{ 2}, (char*)"*\0"};
nctemp8796=&nctemp8797;
nctempchar1* nctemp8794= nctemp8796;
int nctemp8798=CodeEs(nctemp8792,nctemp8794);
struct tree* nctemp8800= p;
nctempchar1* nctemp8802= rval;
int nctemp8805=CodeEs(nctemp8800,nctemp8802);
struct tree* nctemp8807= p;
struct nctempchar1 *nctemp8811;
static struct nctempchar1 nctemp8812 = {{ 3}, (char*)".i\0"};
nctemp8811=&nctemp8812;
nctempchar1* nctemp8809= nctemp8811;
int nctemp8813=CodeEs(nctemp8807,nctemp8809);
struct tree* nctemp8815= p;
struct nctempchar1 *nctemp8819;
static struct nctempchar1 nctemp8820 = {{ 4}, (char*)")/(\0"};
nctemp8819=&nctemp8820;
nctempchar1* nctemp8817= nctemp8819;
int nctemp8821=CodeEs(nctemp8815,nctemp8817);
struct tree* nctemp8823= p;
nctempchar1* nctemp8825= rval;
int nctemp8828=CodeEs(nctemp8823,nctemp8825);
struct tree* nctemp8830= p;
struct nctempchar1 *nctemp8834;
static struct nctempchar1 nctemp8835 = {{ 3}, (char*)".r\0"};
nctemp8834=&nctemp8835;
nctempchar1* nctemp8832= nctemp8834;
int nctemp8836=CodeEs(nctemp8830,nctemp8832);
struct tree* nctemp8838= p;
struct nctempchar1 *nctemp8842;
static struct nctempchar1 nctemp8843 = {{ 2}, (char*)"*\0"};
nctemp8842=&nctemp8843;
nctempchar1* nctemp8840= nctemp8842;
int nctemp8844=CodeEs(nctemp8838,nctemp8840);
struct tree* nctemp8846= p;
nctempchar1* nctemp8848= rval;
int nctemp8851=CodeEs(nctemp8846,nctemp8848);
struct tree* nctemp8853= p;
struct nctempchar1 *nctemp8857;
static struct nctempchar1 nctemp8858 = {{ 3}, (char*)".r\0"};
nctemp8857=&nctemp8858;
nctempchar1* nctemp8855= nctemp8857;
int nctemp8859=CodeEs(nctemp8853,nctemp8855);
struct tree* nctemp8861= p;
struct nctempchar1 *nctemp8865;
static struct nctempchar1 nctemp8866 = {{ 2}, (char*)"+\0"};
nctemp8865=&nctemp8866;
nctempchar1* nctemp8863= nctemp8865;
int nctemp8867=CodeEs(nctemp8861,nctemp8863);
struct tree* nctemp8869= p;
nctempchar1* nctemp8871= rval;
int nctemp8874=CodeEs(nctemp8869,nctemp8871);
struct tree* nctemp8876= p;
struct nctempchar1 *nctemp8880;
static struct nctempchar1 nctemp8881 = {{ 3}, (char*)".i\0"};
nctemp8880=&nctemp8881;
nctempchar1* nctemp8878= nctemp8880;
int nctemp8882=CodeEs(nctemp8876,nctemp8878);
struct tree* nctemp8884= p;
struct nctempchar1 *nctemp8888;
static struct nctempchar1 nctemp8889 = {{ 2}, (char*)"*\0"};
nctemp8888=&nctemp8889;
nctempchar1* nctemp8886= nctemp8888;
int nctemp8890=CodeEs(nctemp8884,nctemp8886);
struct tree* nctemp8892= p;
nctempchar1* nctemp8894= rval;
int nctemp8897=CodeEs(nctemp8892,nctemp8894);
struct tree* nctemp8899= p;
struct nctempchar1 *nctemp8903;
static struct nctempchar1 nctemp8904 = {{ 3}, (char*)".i\0"};
nctemp8903=&nctemp8904;
nctempchar1* nctemp8901= nctemp8903;
int nctemp8905=CodeEs(nctemp8899,nctemp8901);
struct tree* nctemp8907= p;
struct nctempchar1 *nctemp8911;
static struct nctempchar1 nctemp8912 = {{ 5}, (char*)");\n\0"};
nctemp8911=&nctemp8912;
nctempchar1* nctemp8909= nctemp8911;
int nctemp8913=CodeEs(nctemp8907,nctemp8909);
}
}
}
}
else{
struct tree* nctemp8915= p;
nctempchar1* nctemp8917= type;
int nctemp8920=CodeEs(nctemp8915,nctemp8917);
struct tree* nctemp8922= p;
struct nctempchar1 *nctemp8926;
static struct nctempchar1 nctemp8927 = {{ 2}, (char*)" \0"};
nctemp8926=&nctemp8927;
nctempchar1* nctemp8924= nctemp8926;
int nctemp8928=CodeEs(nctemp8922,nctemp8924);
struct tree* nctemp8930= p;
nctempchar1* nctemp8932= tempr;
int nctemp8935=CodeEs(nctemp8930,nctemp8932);
struct tree* nctemp8937= p;
struct nctempchar1 *nctemp8941;
static struct nctempchar1 nctemp8942 = {{ 4}, (char*)" = \0"};
nctemp8941=&nctemp8942;
nctempchar1* nctemp8939= nctemp8941;
int nctemp8943=CodeEs(nctemp8937,nctemp8939);
struct tree* nctemp8945= p;
nctempchar1* nctemp8947= lval;
int nctemp8950=CodeEs(nctemp8945,nctemp8947);
struct tree* nctemp8952= p;
struct nctempchar1 *nctemp8956;
static struct nctempchar1 nctemp8957 = {{ 2}, (char*)" \0"};
nctemp8956=&nctemp8957;
nctempchar1* nctemp8954= nctemp8956;
int nctemp8958=CodeEs(nctemp8952,nctemp8954);
struct tree* nctemp8960= p;
struct tree* nctemp8964= p;
nctempchar1* nctemp8966=PtreeGetdef(nctemp8964);
nctempchar1* nctemp8962= nctemp8966;
int nctemp8967=CodeEs(nctemp8960,nctemp8962);
struct tree* nctemp8969= p;
struct nctempchar1 *nctemp8973;
static struct nctempchar1 nctemp8974 = {{ 2}, (char*)" \0"};
nctemp8973=&nctemp8974;
nctempchar1* nctemp8971= nctemp8973;
int nctemp8975=CodeEs(nctemp8969,nctemp8971);
struct tree* nctemp8977= p;
nctempchar1* nctemp8979= rval;
int nctemp8982=CodeEs(nctemp8977,nctemp8979);
struct tree* nctemp8984= p;
struct nctempchar1 *nctemp8988;
static struct nctempchar1 nctemp8989 = {{ 4}, (char*)";\n\0"};
nctemp8988=&nctemp8989;
nctempchar1* nctemp8986= nctemp8988;
int nctemp8990=CodeEs(nctemp8984,nctemp8986);
}
return tempr;
}
nctempchar1 * CodeBinexpr (struct tree* p)
{
nctempchar1 *lval;
nctempchar1 *rval;
nctempchar1 *tempr;
nctempchar1 *tempi;
nctempchar1 *type;
struct tree* np;
struct tree* sp;
struct tree* nctemp8998= p;
nctempchar1* nctemp9000=PtreeGetname(nctemp8998);
nctempchar1* nctemp8996= nctemp9000;
struct nctempchar1 *nctemp9003;
static struct nctempchar1 nctemp9004 = {{ 8}, (char*)"binexpr\0"};
nctemp9003=&nctemp9004;
nctempchar1* nctemp9001= nctemp9003;
int nctemp9005=LibeStrcmp(nctemp8996,nctemp9001);
int nctemp8993 = (nctemp9005 ==1);
if(nctemp8993)
{
struct tree* nctemp9012= p;
nctempchar1* nctemp9014=PtreeGetype(nctemp9012);
type=nctemp9014;
nctempchar1* nctemp9020=CodeMktemp();
tempr=nctemp9020;
nctempchar1* nctemp9026=CodeMktemp();
tempi=nctemp9026;
struct tree* nctemp9031= p;
struct tree* nctemp9033=PtreeMvchild(nctemp9031);
np =nctemp9033;
struct tree* nctemp9039= np;
nctempchar1* nctemp9041=CodeUnexpr(nctemp9039);
lval=nctemp9041;
struct tree* nctemp9049= np;
struct tree* nctemp9051=PtreeMvsister(nctemp9049);
struct tree* nctemp9047= nctemp9051;
nctempchar1* nctemp9052=CodeUnexpr(nctemp9047);
rval=nctemp9052;
struct tree* nctemp9067= p;
nctempchar1* nctemp9069=PtreeGetdef(nctemp9067);
nctempchar1* nctemp9065= nctemp9069;
struct nctempchar1 *nctemp9072;
static struct nctempchar1 nctemp9073 = {{ 2}, (char*)"+\0"};
nctemp9072=&nctemp9073;
nctempchar1* nctemp9070= nctemp9072;
int nctemp9074=LibeStrcmp(nctemp9065,nctemp9070);
int nctemp9062 = (nctemp9074 ==1);
struct tree* nctemp9082= p;
nctempchar1* nctemp9084=PtreeGetdef(nctemp9082);
nctempchar1* nctemp9080= nctemp9084;
struct nctempchar1 *nctemp9087;
static struct nctempchar1 nctemp9088 = {{ 2}, (char*)"-\0"};
nctemp9087=&nctemp9088;
nctempchar1* nctemp9085= nctemp9087;
int nctemp9089=LibeStrcmp(nctemp9080,nctemp9085);
int nctemp9077 = (nctemp9089 ==1);
int nctemp9059 = (nctemp9062 || nctemp9077);
struct tree* nctemp9097= p;
nctempchar1* nctemp9099=PtreeGetdef(nctemp9097);
nctempchar1* nctemp9095= nctemp9099;
struct nctempchar1 *nctemp9102;
static struct nctempchar1 nctemp9103 = {{ 2}, (char*)"*\0"};
nctemp9102=&nctemp9103;
nctempchar1* nctemp9100= nctemp9102;
int nctemp9104=LibeStrcmp(nctemp9095,nctemp9100);
int nctemp9092 = (nctemp9104 ==1);
int nctemp9056 = (nctemp9059 || nctemp9092);
struct tree* nctemp9112= p;
nctempchar1* nctemp9114=PtreeGetdef(nctemp9112);
nctempchar1* nctemp9110= nctemp9114;
struct nctempchar1 *nctemp9117;
static struct nctempchar1 nctemp9118 = {{ 2}, (char*)"/\0"};
nctemp9117=&nctemp9118;
nctempchar1* nctemp9115= nctemp9117;
int nctemp9119=LibeStrcmp(nctemp9110,nctemp9115);
int nctemp9107 = (nctemp9119 ==1);
int nctemp9053 = (nctemp9056 || nctemp9107);
if(nctemp9053)
{
struct tree* nctemp9122= p;
nctempchar1* nctemp9124= lval;
nctempchar1* nctemp9127= rval;
nctempchar1* nctemp9130=CodeAddexpr(nctemp9122,nctemp9124,nctemp9127);
return nctemp9130;
}
else{
struct tree* nctemp9136= p;
nctempchar1* nctemp9138=PtreeGetdef(nctemp9136);
nctempchar1* nctemp9134= nctemp9138;
struct nctempchar1 *nctemp9141;
static struct nctempchar1 nctemp9142 = {{ 2}, (char*)"=\0"};
nctemp9141=&nctemp9142;
nctempchar1* nctemp9139= nctemp9141;
int nctemp9143=LibeStrcmp(nctemp9134,nctemp9139);
int nctemp9131 = (nctemp9143 ==1);
if(nctemp9131)
{
struct tree* nctemp9156= p;
nctempchar1* nctemp9158=PtreeGetype(nctemp9156);
nctempchar1* nctemp9154= nctemp9158;
struct nctempchar1 *nctemp9161;
static struct nctempchar1 nctemp9162 = {{ 8}, (char*)"complex\0"};
nctemp9161=&nctemp9162;
nctempchar1* nctemp9159= nctemp9161;
int nctemp9163=LibeStrcmp(nctemp9154,nctemp9159);
int nctemp9151 = (nctemp9163 ==1);
struct tree* nctemp9171= p;
nctempchar1* nctemp9173=PtreeGetref(nctemp9171);
nctempchar1* nctemp9169= nctemp9173;
struct nctempchar1 *nctemp9176;
static struct nctempchar1 nctemp9177 = {{ 5}, (char*)"aref\0"};
nctemp9176=&nctemp9177;
nctempchar1* nctemp9174= nctemp9176;
int nctemp9178=LibeStrcmp(nctemp9169,nctemp9174);
int nctemp9166 = (nctemp9178 ==0);
int nctemp9148 = (nctemp9151 && nctemp9166);
struct tree* nctemp9186= p;
nctempchar1* nctemp9188=PtreeGetref(nctemp9186);
nctempchar1* nctemp9184= nctemp9188;
struct nctempchar1 *nctemp9191;
static struct nctempchar1 nctemp9192 = {{ 5}, (char*)"sref\0"};
nctemp9191=&nctemp9192;
nctempchar1* nctemp9189= nctemp9191;
int nctemp9193=LibeStrcmp(nctemp9184,nctemp9189);
int nctemp9181 = (nctemp9193 ==0);
int nctemp9145 = (nctemp9148 && nctemp9181);
if(nctemp9145)
{
struct tree* nctemp9196= p;
nctempchar1* nctemp9198= lval;
int nctemp9201=CodeEs(nctemp9196,nctemp9198);
struct tree* nctemp9203= p;
struct nctempchar1 *nctemp9207;
static struct nctempchar1 nctemp9208 = {{ 4}, (char*)".r \0"};
nctemp9207=&nctemp9208;
nctempchar1* nctemp9205= nctemp9207;
int nctemp9209=CodeEs(nctemp9203,nctemp9205);
struct tree* nctemp9211= p;
struct nctempchar1 *nctemp9215;
static struct nctempchar1 nctemp9216 = {{ 2}, (char*)"=\0"};
nctemp9215=&nctemp9216;
nctempchar1* nctemp9213= nctemp9215;
int nctemp9217=CodeEs(nctemp9211,nctemp9213);
struct tree* nctemp9219= p;
nctempchar1* nctemp9221= rval;
int nctemp9224=CodeEs(nctemp9219,nctemp9221);
struct tree* nctemp9226= p;
struct nctempchar1 *nctemp9230;
static struct nctempchar1 nctemp9231 = {{ 3}, (char*)".r\0"};
nctemp9230=&nctemp9231;
nctempchar1* nctemp9228= nctemp9230;
int nctemp9232=CodeEs(nctemp9226,nctemp9228);
struct tree* nctemp9234= p;
struct nctempchar1 *nctemp9238;
static struct nctempchar1 nctemp9239 = {{ 4}, (char*)";\n\0"};
nctemp9238=&nctemp9239;
nctempchar1* nctemp9236= nctemp9238;
int nctemp9240=CodeEs(nctemp9234,nctemp9236);
struct tree* nctemp9242= p;
nctempchar1* nctemp9244= lval;
int nctemp9247=CodeEs(nctemp9242,nctemp9244);
struct tree* nctemp9249= p;
struct nctempchar1 *nctemp9253;
static struct nctempchar1 nctemp9254 = {{ 3}, (char*)".i\0"};
nctemp9253=&nctemp9254;
nctempchar1* nctemp9251= nctemp9253;
int nctemp9255=CodeEs(nctemp9249,nctemp9251);
struct tree* nctemp9257= p;
struct nctempchar1 *nctemp9261;
static struct nctempchar1 nctemp9262 = {{ 2}, (char*)"=\0"};
nctemp9261=&nctemp9262;
nctempchar1* nctemp9259= nctemp9261;
int nctemp9263=CodeEs(nctemp9257,nctemp9259);
struct tree* nctemp9265= p;
nctempchar1* nctemp9267= rval;
int nctemp9270=CodeEs(nctemp9265,nctemp9267);
struct tree* nctemp9272= p;
struct nctempchar1 *nctemp9276;
static struct nctempchar1 nctemp9277 = {{ 3}, (char*)".i\0"};
nctemp9276=&nctemp9277;
nctempchar1* nctemp9274= nctemp9276;
int nctemp9278=CodeEs(nctemp9272,nctemp9274);
struct tree* nctemp9280= p;
struct nctempchar1 *nctemp9284;
static struct nctempchar1 nctemp9285 = {{ 4}, (char*)";\n\0"};
nctemp9284=&nctemp9285;
nctempchar1* nctemp9282= nctemp9284;
int nctemp9286=CodeEs(nctemp9280,nctemp9282);
return lval;
}
else{
struct tree* nctemp9294= np;
nctempchar1* nctemp9296=PtreeGetref(nctemp9294);
nctempchar1* nctemp9292= nctemp9296;
struct nctempchar1 *nctemp9299;
static struct nctempchar1 nctemp9300 = {{ 5}, (char*)"aref\0"};
nctemp9299=&nctemp9300;
nctempchar1* nctemp9297= nctemp9299;
int nctemp9301=LibeStrcmp(nctemp9292,nctemp9297);
int nctemp9289 = (nctemp9301 ==1);
if(nctemp9289)
{
struct tree* nctemp9310= np;
struct tree* nctemp9312=PtreeMvsister(nctemp9310);
struct tree* nctemp9308= nctemp9312;
nctempchar1* nctemp9313=PtreeGetname(nctemp9308);
nctempchar1* nctemp9306= nctemp9313;
struct nctempchar1 *nctemp9316;
static struct nctempchar1 nctemp9317 = {{ 10}, (char*)"iconstant\0"};
nctemp9316=&nctemp9317;
nctempchar1* nctemp9314= nctemp9316;
int nctemp9318=LibeStrcmp(nctemp9306,nctemp9314);
struct tree* nctemp9324= np;
struct tree* nctemp9326=PtreeMvsister(nctemp9324);
struct tree* nctemp9322= nctemp9326;
nctempchar1* nctemp9327=PtreeGetdef(nctemp9322);
nctempchar1* nctemp9320= nctemp9327;
struct nctempchar1 *nctemp9330;
static struct nctempchar1 nctemp9331 = {{ 2}, (char*)"0\0"};
nctemp9330=&nctemp9331;
nctempchar1* nctemp9328= nctemp9330;
int nctemp9332=LibeStrcmp(nctemp9320,nctemp9328);
int nctemp9303 = (nctemp9318 && nctemp9332);
if(nctemp9303)
{
struct tree* nctemp9334= p;
nctempchar1* nctemp9336= lval;
int nctemp9339=CodeEs(nctemp9334,nctemp9336);
struct tree* nctemp9341= p;
struct nctempchar1 *nctemp9345;
static struct nctempchar1 nctemp9346 = {{ 3}, (char*)"=(\0"};
nctemp9345=&nctemp9346;
nctempchar1* nctemp9343= nctemp9345;
int nctemp9347=CodeEs(nctemp9341,nctemp9343);
struct tree* nctemp9349= p;
nctempchar1* nctemp9351= rval;
int nctemp9354=CodeEs(nctemp9349,nctemp9351);
struct tree* nctemp9356= p;
struct nctempchar1 *nctemp9360;
static struct nctempchar1 nctemp9361 = {{ 5}, (char*)");\n\0"};
nctemp9360=&nctemp9361;
nctempchar1* nctemp9358= nctemp9360;
int nctemp9362=CodeEs(nctemp9356,nctemp9358);
return lval;
}
else{
struct tree* nctemp9366= p;
nctempchar1* nctemp9368= lval;
int nctemp9371=CodeEs(nctemp9366,nctemp9368);
struct tree* nctemp9373= p;
struct nctempchar1 *nctemp9377;
static struct nctempchar1 nctemp9378 = {{ 2}, (char*)"=\0"};
nctemp9377=&nctemp9378;
nctempchar1* nctemp9375= nctemp9377;
int nctemp9379=CodeEs(nctemp9373,nctemp9375);
struct tree* nctemp9381= p;
nctempchar1* nctemp9383= rval;
int nctemp9386=CodeEs(nctemp9381,nctemp9383);
struct tree* nctemp9388= p;
struct nctempchar1 *nctemp9392;
static struct nctempchar1 nctemp9393 = {{ 4}, (char*)";\n\0"};
nctemp9392=&nctemp9393;
nctempchar1* nctemp9390= nctemp9392;
int nctemp9394=CodeEs(nctemp9388,nctemp9390);
return lval;
}
}
else{
struct tree* nctemp9398= p;
nctempchar1* nctemp9400= lval;
int nctemp9403=CodeEs(nctemp9398,nctemp9400);
struct tree* nctemp9405= p;
struct nctempchar1 *nctemp9409;
static struct nctempchar1 nctemp9410 = {{ 2}, (char*)" \0"};
nctemp9409=&nctemp9410;
nctempchar1* nctemp9407= nctemp9409;
int nctemp9411=CodeEs(nctemp9405,nctemp9407);
struct tree* nctemp9413= p;
struct nctempchar1 *nctemp9417;
static struct nctempchar1 nctemp9418 = {{ 2}, (char*)"=\0"};
nctemp9417=&nctemp9418;
nctempchar1* nctemp9415= nctemp9417;
int nctemp9419=CodeEs(nctemp9413,nctemp9415);
struct tree* nctemp9421= p;
nctempchar1* nctemp9423= rval;
int nctemp9426=CodeEs(nctemp9421,nctemp9423);
struct tree* nctemp9428= p;
struct nctempchar1 *nctemp9432;
static struct nctempchar1 nctemp9433 = {{ 4}, (char*)";\n\0"};
nctemp9432=&nctemp9433;
nctempchar1* nctemp9430= nctemp9432;
int nctemp9434=CodeEs(nctemp9428,nctemp9430);
return lval;
}
}
}
else{
struct tree* nctemp9445= p;
nctempchar1* nctemp9447=PtreeGetdef(nctemp9445);
nctempchar1* nctemp9443= nctemp9447;
struct nctempchar1 *nctemp9450;
static struct nctempchar1 nctemp9451 = {{ 3}, (char*)"==\0"};
nctemp9450=&nctemp9451;
nctempchar1* nctemp9448= nctemp9450;
int nctemp9452=LibeStrcmp(nctemp9443,nctemp9448);
int nctemp9440 = (nctemp9452 ==1);
struct tree* nctemp9460= p;
nctempchar1* nctemp9462=PtreeGetdef(nctemp9460);
nctempchar1* nctemp9458= nctemp9462;
struct nctempchar1 *nctemp9465;
static struct nctempchar1 nctemp9466 = {{ 3}, (char*)"!=\0"};
nctemp9465=&nctemp9466;
nctempchar1* nctemp9463= nctemp9465;
int nctemp9467=LibeStrcmp(nctemp9458,nctemp9463);
int nctemp9455 = (nctemp9467 ==1);
int nctemp9437 = (nctemp9440 || nctemp9455);
if(nctemp9437)
{
struct tree* nctemp9474= np;
nctempchar1* nctemp9476=PtreeGetref(nctemp9474);
nctempchar1* nctemp9472= nctemp9476;
struct nctempchar1 *nctemp9479;
static struct nctempchar1 nctemp9480 = {{ 5}, (char*)"aref\0"};
nctemp9479=&nctemp9480;
nctempchar1* nctemp9477= nctemp9479;
int nctemp9481=LibeStrcmp(nctemp9472,nctemp9477);
int nctemp9469 = (nctemp9481 ==1);
if(nctemp9469)
{
sp =np;
struct tree* nctemp9494= np;
struct tree* nctemp9496=PtreeMvsister(nctemp9494);
struct tree* nctemp9492= nctemp9496;
nctempchar1* nctemp9497=PtreeGetname(nctemp9492);
nctempchar1* nctemp9490= nctemp9497;
struct nctempchar1 *nctemp9500;
static struct nctempchar1 nctemp9501 = {{ 10}, (char*)"iconstant\0"};
nctemp9500=&nctemp9501;
nctempchar1* nctemp9498= nctemp9500;
int nctemp9502=LibeStrcmp(nctemp9490,nctemp9498);
struct tree* nctemp9508= np;
struct tree* nctemp9510=PtreeMvsister(nctemp9508);
struct tree* nctemp9506= nctemp9510;
nctempchar1* nctemp9511=PtreeGetdef(nctemp9506);
nctempchar1* nctemp9504= nctemp9511;
struct nctempchar1 *nctemp9514;
static struct nctempchar1 nctemp9515 = {{ 2}, (char*)"0\0"};
nctemp9514=&nctemp9515;
nctempchar1* nctemp9512= nctemp9514;
int nctemp9516=LibeStrcmp(nctemp9504,nctemp9512);
int nctemp9487 = (nctemp9502 && nctemp9516);
if(nctemp9487)
{
struct tree* nctemp9518= p;
struct nctempchar1 *nctemp9522;
static struct nctempchar1 nctemp9523 = {{ 7}, (char*)"nctemp\0"};
nctemp9522=&nctemp9523;
nctempchar1* nctemp9520= nctemp9522;
int nctemp9524=CodeEs(nctemp9518,nctemp9520);
struct tree* nctemp9526= p;
struct tree* nctemp9530= sp;
nctempchar1* nctemp9532=PtreeGetype(nctemp9530);
nctempchar1* nctemp9528= nctemp9532;
int nctemp9533=CodeEs(nctemp9526,nctemp9528);
struct tree* nctemp9537= sp;
int nctemp9539=PtreeGetrank(nctemp9537);
int nctemp9535= nctemp9539;
int nctemp9540=CodeEd(nctemp9535);
struct tree* nctemp9542= p;
struct nctempchar1 *nctemp9546;
static struct nctempchar1 nctemp9547 = {{ 3}, (char*)" *\0"};
nctemp9546=&nctemp9547;
nctempchar1* nctemp9544= nctemp9546;
int nctemp9548=CodeEs(nctemp9542,nctemp9544);
struct tree* nctemp9550= p;
nctempchar1* nctemp9552= tempi;
int nctemp9555=CodeEs(nctemp9550,nctemp9552);
struct tree* nctemp9557= p;
struct nctempchar1 *nctemp9561;
static struct nctempchar1 nctemp9562 = {{ 3}, (char*)" =\0"};
nctemp9561=&nctemp9562;
nctempchar1* nctemp9559= nctemp9561;
int nctemp9563=CodeEs(nctemp9557,nctemp9559);
struct tree* nctemp9565= p;
nctempchar1* nctemp9567= lval;
int nctemp9570=CodeEs(nctemp9565,nctemp9567);
struct tree* nctemp9572= p;
struct nctempchar1 *nctemp9576;
static struct nctempchar1 nctemp9577 = {{ 4}, (char*)";\n\0"};
nctemp9576=&nctemp9577;
nctempchar1* nctemp9574= nctemp9576;
int nctemp9578=CodeEs(nctemp9572,nctemp9574);
struct tree* nctemp9580= p;
nctempchar1* nctemp9582= type;
int nctemp9585=CodeEs(nctemp9580,nctemp9582);
struct tree* nctemp9587= p;
struct nctempchar1 *nctemp9591;
static struct nctempchar1 nctemp9592 = {{ 2}, (char*)" \0"};
nctemp9591=&nctemp9592;
nctempchar1* nctemp9589= nctemp9591;
int nctemp9593=CodeEs(nctemp9587,nctemp9589);
struct tree* nctemp9595= p;
nctempchar1* nctemp9597= tempr;
int nctemp9600=CodeEs(nctemp9595,nctemp9597);
struct tree* nctemp9602= p;
struct nctempchar1 *nctemp9606;
static struct nctempchar1 nctemp9607 = {{ 4}, (char*)" =(\0"};
nctemp9606=&nctemp9607;
nctempchar1* nctemp9604= nctemp9606;
int nctemp9608=CodeEs(nctemp9602,nctemp9604);
struct tree* nctemp9610= p;
nctempchar1* nctemp9612= tempi;
int nctemp9615=CodeEs(nctemp9610,nctemp9612);
struct tree* nctemp9617= p;
struct tree* nctemp9621= p;
nctempchar1* nctemp9623=PtreeGetdef(nctemp9621);
nctempchar1* nctemp9619= nctemp9623;
int nctemp9624=CodeEs(nctemp9617,nctemp9619);
struct tree* nctemp9626= p;
nctempchar1* nctemp9628= rval;
int nctemp9631=CodeEs(nctemp9626,nctemp9628);
struct tree* nctemp9633= p;
struct nctempchar1 *nctemp9637;
static struct nctempchar1 nctemp9638 = {{ 5}, (char*)");\n\0"};
nctemp9637=&nctemp9638;
nctempchar1* nctemp9635= nctemp9637;
int nctemp9639=CodeEs(nctemp9633,nctemp9635);
return tempr;
}
else{
struct tree* nctemp9643= p;
nctempchar1* nctemp9645= type;
int nctemp9648=CodeEs(nctemp9643,nctemp9645);
struct tree* nctemp9650= p;
struct nctempchar1 *nctemp9654;
static struct nctempchar1 nctemp9655 = {{ 2}, (char*)" \0"};
nctemp9654=&nctemp9655;
nctempchar1* nctemp9652= nctemp9654;
int nctemp9656=CodeEs(nctemp9650,nctemp9652);
struct tree* nctemp9658= p;
nctempchar1* nctemp9660= tempr;
int nctemp9663=CodeEs(nctemp9658,nctemp9660);
struct tree* nctemp9665= p;
struct nctempchar1 *nctemp9669;
static struct nctempchar1 nctemp9670 = {{ 5}, (char*)" = (\0"};
nctemp9669=&nctemp9670;
nctempchar1* nctemp9667= nctemp9669;
int nctemp9671=CodeEs(nctemp9665,nctemp9667);
struct tree* nctemp9673= p;
nctempchar1* nctemp9675= lval;
int nctemp9678=CodeEs(nctemp9673,nctemp9675);
struct tree* nctemp9680= p;
struct tree* nctemp9684= p;
nctempchar1* nctemp9686=PtreeGetdef(nctemp9684);
nctempchar1* nctemp9682= nctemp9686;
int nctemp9687=CodeEs(nctemp9680,nctemp9682);
struct tree* nctemp9689= p;
nctempchar1* nctemp9691= rval;
int nctemp9694=CodeEs(nctemp9689,nctemp9691);
struct tree* nctemp9696= p;
struct nctempchar1 *nctemp9700;
static struct nctempchar1 nctemp9701 = {{ 5}, (char*)");\n\0"};
nctemp9700=&nctemp9701;
nctempchar1* nctemp9698= nctemp9700;
int nctemp9702=CodeEs(nctemp9696,nctemp9698);
return lval;
}
}
else{
struct tree* nctemp9706= p;
nctempchar1* nctemp9708= type;
int nctemp9711=CodeEs(nctemp9706,nctemp9708);
struct tree* nctemp9713= p;
struct nctempchar1 *nctemp9717;
static struct nctempchar1 nctemp9718 = {{ 2}, (char*)" \0"};
nctemp9717=&nctemp9718;
nctempchar1* nctemp9715= nctemp9717;
int nctemp9719=CodeEs(nctemp9713,nctemp9715);
struct tree* nctemp9721= p;
nctempchar1* nctemp9723= tempr;
int nctemp9726=CodeEs(nctemp9721,nctemp9723);
struct tree* nctemp9728= p;
struct nctempchar1 *nctemp9732;
static struct nctempchar1 nctemp9733 = {{ 5}, (char*)" = (\0"};
nctemp9732=&nctemp9733;
nctempchar1* nctemp9730= nctemp9732;
int nctemp9734=CodeEs(nctemp9728,nctemp9730);
struct tree* nctemp9736= p;
nctempchar1* nctemp9738= lval;
int nctemp9741=CodeEs(nctemp9736,nctemp9738);
struct tree* nctemp9743= p;
struct nctempchar1 *nctemp9747;
static struct nctempchar1 nctemp9748 = {{ 2}, (char*)" \0"};
nctemp9747=&nctemp9748;
nctempchar1* nctemp9745= nctemp9747;
int nctemp9749=CodeEs(nctemp9743,nctemp9745);
struct tree* nctemp9751= p;
struct tree* nctemp9755= p;
nctempchar1* nctemp9757=PtreeGetdef(nctemp9755);
nctempchar1* nctemp9753= nctemp9757;
int nctemp9758=CodeEs(nctemp9751,nctemp9753);
struct tree* nctemp9760= p;
nctempchar1* nctemp9762= rval;
int nctemp9765=CodeEs(nctemp9760,nctemp9762);
struct tree* nctemp9767= p;
struct nctempchar1 *nctemp9771;
static struct nctempchar1 nctemp9772 = {{ 5}, (char*)");\n\0"};
nctemp9771=&nctemp9772;
nctempchar1* nctemp9769= nctemp9771;
int nctemp9773=CodeEs(nctemp9767,nctemp9769);
return tempr;
}
}
else{
struct tree* nctemp9777= p;
nctempchar1* nctemp9779= type;
int nctemp9782=CodeEs(nctemp9777,nctemp9779);
struct tree* nctemp9784= p;
struct nctempchar1 *nctemp9788;
static struct nctempchar1 nctemp9789 = {{ 2}, (char*)" \0"};
nctemp9788=&nctemp9789;
nctempchar1* nctemp9786= nctemp9788;
int nctemp9790=CodeEs(nctemp9784,nctemp9786);
struct tree* nctemp9792= p;
nctempchar1* nctemp9794= tempr;
int nctemp9797=CodeEs(nctemp9792,nctemp9794);
struct tree* nctemp9799= p;
struct nctempchar1 *nctemp9803;
static struct nctempchar1 nctemp9804 = {{ 5}, (char*)" = (\0"};
nctemp9803=&nctemp9804;
nctempchar1* nctemp9801= nctemp9803;
int nctemp9805=CodeEs(nctemp9799,nctemp9801);
struct tree* nctemp9807= p;
nctempchar1* nctemp9809= lval;
int nctemp9812=CodeEs(nctemp9807,nctemp9809);
struct tree* nctemp9814= p;
struct nctempchar1 *nctemp9818;
static struct nctempchar1 nctemp9819 = {{ 2}, (char*)" \0"};
nctemp9818=&nctemp9819;
nctempchar1* nctemp9816= nctemp9818;
int nctemp9820=CodeEs(nctemp9814,nctemp9816);
struct tree* nctemp9822= p;
struct tree* nctemp9826= p;
nctempchar1* nctemp9828=PtreeGetdef(nctemp9826);
nctempchar1* nctemp9824= nctemp9828;
int nctemp9829=CodeEs(nctemp9822,nctemp9824);
struct tree* nctemp9831= p;
struct nctempchar1 *nctemp9835;
static struct nctempchar1 nctemp9836 = {{ 2}, (char*)" \0"};
nctemp9835=&nctemp9836;
nctempchar1* nctemp9833= nctemp9835;
int nctemp9837=CodeEs(nctemp9831,nctemp9833);
struct tree* nctemp9839= p;
nctempchar1* nctemp9841= rval;
int nctemp9844=CodeEs(nctemp9839,nctemp9841);
struct tree* nctemp9846= p;
struct nctempchar1 *nctemp9850;
static struct nctempchar1 nctemp9851 = {{ 5}, (char*)");\n\0"};
nctemp9850=&nctemp9851;
nctempchar1* nctemp9848= nctemp9850;
int nctemp9852=CodeEs(nctemp9846,nctemp9848);
return tempr;
}
}
}
}
else{
struct tree* nctemp9856= p;
nctempchar1* nctemp9858=CodeUnexpr(nctemp9856);
return nctemp9858;
}
}
nctempchar1 * CodeExpr (struct tree* p)
{
struct tree* sp;
nctempchar1 *rval;
struct tree* nctemp9863= p;
struct tree* nctemp9865=PtreeMvchild(nctemp9863);
sp =nctemp9865;
struct tree* nctemp9871= sp;
nctempchar1* nctemp9873=CodeBinexpr(nctemp9871);
rval=nctemp9873;
return rval;
}
int CodeWhilestmnt (struct tree* p)
{
nctempchar1 *cond;
nctempchar1 *tmp;
nctempchar1 *cond2;
struct tree* sp;
struct tree* nctemp9880= p;
struct tree* nctemp9882=PtreeMvchild(nctemp9880);
p =nctemp9882;
sp =p;
struct tree* nctemp9892= sp;
nctempchar1* nctemp9894=CodeExpr(nctemp9892);
cond=nctemp9894;
nctempchar1* nctemp9900=CodeMktemp();
tmp=nctemp9900;
struct tree* nctemp9902= p;
struct tree* nctemp9906= sp;
nctempchar1* nctemp9908=PtreeGetype(nctemp9906);
nctempchar1* nctemp9904= nctemp9908;
int nctemp9909=CodeEs(nctemp9902,nctemp9904);
struct tree* nctemp9911= p;
struct nctempchar1 *nctemp9915;
static struct nctempchar1 nctemp9916 = {{ 2}, (char*)" \0"};
nctemp9915=&nctemp9916;
nctempchar1* nctemp9913= nctemp9915;
int nctemp9917=CodeEs(nctemp9911,nctemp9913);
struct tree* nctemp9919= p;
nctempchar1* nctemp9921= tmp;
int nctemp9924=CodeEs(nctemp9919,nctemp9921);
struct tree* nctemp9926= p;
struct nctempchar1 *nctemp9930;
static struct nctempchar1 nctemp9931 = {{ 2}, (char*)"=\0"};
nctemp9930=&nctemp9931;
nctempchar1* nctemp9928= nctemp9930;
int nctemp9932=CodeEs(nctemp9926,nctemp9928);
struct tree* nctemp9934= p;
nctempchar1* nctemp9936= cond;
int nctemp9939=CodeEs(nctemp9934,nctemp9936);
struct tree* nctemp9941= p;
struct nctempchar1 *nctemp9945;
static struct nctempchar1 nctemp9946 = {{ 4}, (char*)";\n\0"};
nctemp9945=&nctemp9946;
nctempchar1* nctemp9943= nctemp9945;
int nctemp9947=CodeEs(nctemp9941,nctemp9943);
struct tree* nctemp9949= p;
struct nctempchar1 *nctemp9953;
static struct nctempchar1 nctemp9954 = {{ 7}, (char*)"while(\0"};
nctemp9953=&nctemp9954;
nctempchar1* nctemp9951= nctemp9953;
int nctemp9955=CodeEs(nctemp9949,nctemp9951);
struct tree* nctemp9957= p;
nctempchar1* nctemp9959= tmp;
int nctemp9962=CodeEs(nctemp9957,nctemp9959);
struct tree* nctemp9964= p;
struct nctempchar1 *nctemp9968;
static struct nctempchar1 nctemp9969 = {{ 4}, (char*)")\n\0"};
nctemp9968=&nctemp9969;
nctempchar1* nctemp9966= nctemp9968;
int nctemp9970=CodeEs(nctemp9964,nctemp9966);
struct tree* nctemp9972= p;
struct nctempchar1 *nctemp9976;
static struct nctempchar1 nctemp9977 = {{ 2}, (char*)"{\0"};
nctemp9976=&nctemp9977;
nctempchar1* nctemp9974= nctemp9976;
int nctemp9978=CodeEs(nctemp9972,nctemp9974);
struct tree* nctemp9983= p;
struct tree* nctemp9985=PtreeMvsister(nctemp9983);
p =nctemp9985;
struct tree* nctemp9987= p;
int nctemp9989=CodeStmnt(nctemp9987);
struct tree* nctemp9995= sp;
nctempchar1* nctemp9997=CodeExpr(nctemp9995);
cond2=nctemp9997;
struct tree* nctemp9999= p;
nctempchar1* nctemp10001= tmp;
int nctemp10004=CodeEs(nctemp9999,nctemp10001);
struct tree* nctemp10006= p;
struct nctempchar1 *nctemp10010;
static struct nctempchar1 nctemp10011 = {{ 2}, (char*)"=\0"};
nctemp10010=&nctemp10011;
nctempchar1* nctemp10008= nctemp10010;
int nctemp10012=CodeEs(nctemp10006,nctemp10008);
struct tree* nctemp10014= p;
nctempchar1* nctemp10016= cond2;
int nctemp10019=CodeEs(nctemp10014,nctemp10016);
struct tree* nctemp10021= p;
struct nctempchar1 *nctemp10025;
static struct nctempchar1 nctemp10026 = {{ 2}, (char*)";\0"};
nctemp10025=&nctemp10026;
nctempchar1* nctemp10023= nctemp10025;
int nctemp10027=CodeEs(nctemp10021,nctemp10023);
struct tree* nctemp10029= p;
struct nctempchar1 *nctemp10033;
static struct nctempchar1 nctemp10034 = {{ 2}, (char*)"}\0"};
nctemp10033=&nctemp10034;
nctempchar1* nctemp10031= nctemp10033;
int nctemp10035=CodeEs(nctemp10029,nctemp10031);
return 1;
}
int CodeForstmnt (struct tree* p)
{
struct tree* sp;
struct tree* np;
nctempchar1 *cond;
nctempchar1 *tmp;
struct tree* nctemp10041= p;
struct tree* nctemp10043=PtreeMvchild(nctemp10041);
p =nctemp10043;
struct tree* nctemp10045= p;
nctempchar1* nctemp10047=CodeExpr(nctemp10045);
struct tree* nctemp10052= p;
struct tree* nctemp10054=PtreeMvsister(nctemp10052);
p =nctemp10054;
np =p;
struct tree* nctemp10064= p;
nctempchar1* nctemp10066=CodeExpr(nctemp10064);
cond=nctemp10066;
struct tree* nctemp10068= p;
struct nctempchar1 *nctemp10072;
static struct nctempchar1 nctemp10073 = {{ 7}, (char*)"while(\0"};
nctemp10072=&nctemp10073;
nctempchar1* nctemp10070= nctemp10072;
int nctemp10074=CodeEs(nctemp10068,nctemp10070);
struct tree* nctemp10076= p;
nctempchar1* nctemp10078= cond;
int nctemp10081=CodeEs(nctemp10076,nctemp10078);
struct tree* nctemp10083= p;
struct nctempchar1 *nctemp10087;
static struct nctempchar1 nctemp10088 = {{ 5}, (char*)"){\n\0"};
nctemp10087=&nctemp10088;
nctempchar1* nctemp10085= nctemp10087;
int nctemp10089=CodeEs(nctemp10083,nctemp10085);
struct tree* nctemp10094= p;
struct tree* nctemp10096=PtreeMvsister(nctemp10094);
p =nctemp10096;
sp =p;
struct tree* nctemp10105= p;
struct tree* nctemp10107=PtreeMvsister(nctemp10105);
p =nctemp10107;
struct tree* nctemp10109= p;
int nctemp10111=CodeStmnt(nctemp10109);
struct tree* nctemp10113= sp;
nctempchar1* nctemp10115=CodeExpr(nctemp10113);
struct tree* nctemp10121= np;
nctempchar1* nctemp10123=CodeExpr(nctemp10121);
tmp=nctemp10123;
struct tree* nctemp10125= p;
nctempchar1* nctemp10127= cond;
int nctemp10130=CodeEs(nctemp10125,nctemp10127);
struct tree* nctemp10132= p;
struct nctempchar1 *nctemp10136;
static struct nctempchar1 nctemp10137 = {{ 2}, (char*)"=\0"};
nctemp10136=&nctemp10137;
nctempchar1* nctemp10134= nctemp10136;
int nctemp10138=CodeEs(nctemp10132,nctemp10134);
struct tree* nctemp10140= p;
nctempchar1* nctemp10142= tmp;
int nctemp10145=CodeEs(nctemp10140,nctemp10142);
struct tree* nctemp10147= p;
struct nctempchar1 *nctemp10151;
static struct nctempchar1 nctemp10152 = {{ 4}, (char*)";\n\0"};
nctemp10151=&nctemp10152;
nctempchar1* nctemp10149= nctemp10151;
int nctemp10153=CodeEs(nctemp10147,nctemp10149);
struct tree* nctemp10155= p;
struct nctempchar1 *nctemp10159;
static struct nctempchar1 nctemp10160 = {{ 4}, (char*)"}\n\0"};
nctemp10159=&nctemp10160;
nctempchar1* nctemp10157= nctemp10159;
int nctemp10161=CodeEs(nctemp10155,nctemp10157);
return 1;
}
int CodeParallelfor (struct tree* p,int level,int rank)
{
struct tree* sp;
struct tree* rp;
struct tree* qp;
struct tree* rrp;
nctempchar1 *index;
nctempchar1 *init;
nctempchar1 *cond;
sp =p;
int nctemp10175 = level + 1;
level =nctemp10175;
int nctemp10176 = (p ==0);
if(nctemp10176)
{
return 1;
}
struct tree* nctemp10185= p;
struct tree* nctemp10187=PtreeMvsister(nctemp10185);
p =nctemp10187;
struct tree* nctemp10189= p;
int nctemp10191= level;
int nctemp10193= rank;
int nctemp10195=CodeParallelfor(nctemp10189,nctemp10191,nctemp10193);
struct tree* nctemp10200= sp;
struct tree* nctemp10202=PtreeMvchild(nctemp10200);
rp =nctemp10202;
struct tree* nctemp10207= rp;
struct tree* nctemp10209=PtreeMvchild(nctemp10207);
qp =nctemp10209;
struct tree* nctemp10214= qp;
struct tree* nctemp10216=PtreeMvchild(nctemp10214);
qp =nctemp10216;
struct tree* nctemp10222= qp;
nctempchar1* nctemp10224=PtreeGetdef(nctemp10222);
index=nctemp10224;
struct tree* nctemp10232= qp;
struct tree* nctemp10234=PtreeMvsister(nctemp10232);
struct tree* nctemp10230= nctemp10234;
nctempchar1* nctemp10235=CodeBinexpr(nctemp10230);
init=nctemp10235;
struct tree* nctemp10240= rp;
struct tree* nctemp10242=PtreeMvsister(nctemp10240);
rrp =nctemp10242;
struct tree* nctemp10248= rrp;
nctempchar1* nctemp10250=CodeExpr(nctemp10248);
cond=nctemp10250;
int nctemp10251 = (level ==rank);
if(nctemp10251)
{
struct tree* nctemp10256= p;
struct nctempchar1 *nctemp10260;
static struct nctempchar1 nctemp10261 = {{ 30}, (char*)"\n #pragma omp parallel for\n\0"};
nctemp10260=&nctemp10261;
nctempchar1* nctemp10258= nctemp10260;
int nctemp10262=CodeEs(nctemp10256,nctemp10258);
}
struct tree* nctemp10264= rp;
struct nctempchar1 *nctemp10268;
static struct nctempchar1 nctemp10269 = {{ 5}, (char*)"for(\0"};
nctemp10268=&nctemp10269;
nctempchar1* nctemp10266= nctemp10268;
int nctemp10270=CodeEs(nctemp10264,nctemp10266);
struct tree* nctemp10272= rp;
nctempchar1* nctemp10274= index;
int nctemp10277=CodeEs(nctemp10272,nctemp10274);
struct tree* nctemp10279= rp;
struct nctempchar1 *nctemp10283;
static struct nctempchar1 nctemp10284 = {{ 2}, (char*)"=\0"};
nctemp10283=&nctemp10284;
nctempchar1* nctemp10281= nctemp10283;
int nctemp10285=CodeEs(nctemp10279,nctemp10281);
struct tree* nctemp10287= rp;
nctempchar1* nctemp10289= init;
int nctemp10292=CodeEs(nctemp10287,nctemp10289);
struct tree* nctemp10294= rp;
struct nctempchar1 *nctemp10298;
static struct nctempchar1 nctemp10299 = {{ 2}, (char*)";\0"};
nctemp10298=&nctemp10299;
nctempchar1* nctemp10296= nctemp10298;
int nctemp10300=CodeEs(nctemp10294,nctemp10296);
struct tree* nctemp10305= rp;
struct tree* nctemp10307=PtreeMvsister(nctemp10305);
rp =nctemp10307;
struct tree* nctemp10309= rp;
nctempchar1* nctemp10311= index;
int nctemp10314=CodeEs(nctemp10309,nctemp10311);
struct tree* nctemp10316= rp;
struct nctempchar1 *nctemp10320;
static struct nctempchar1 nctemp10321 = {{ 2}, (char*)"<\0"};
nctemp10320=&nctemp10321;
nctempchar1* nctemp10318= nctemp10320;
int nctemp10322=CodeEs(nctemp10316,nctemp10318);
struct tree* nctemp10324= p;
nctempchar1* nctemp10326= cond;
int nctemp10329=CodeEs(nctemp10324,nctemp10326);
struct tree* nctemp10331= rp;
struct nctempchar1 *nctemp10335;
static struct nctempchar1 nctemp10336 = {{ 2}, (char*)";\0"};
nctemp10335=&nctemp10336;
nctempchar1* nctemp10333= nctemp10335;
int nctemp10337=CodeEs(nctemp10331,nctemp10333);
struct tree* nctemp10345= rp;
struct tree* nctemp10347=PtreeMvsister(nctemp10345);
rp =nctemp10347;
int nctemp10338 = (rp !=0);
if(nctemp10338)
{
struct tree* nctemp10350= rp;
nctempchar1* nctemp10352= index;
int nctemp10355=CodeEs(nctemp10350,nctemp10352);
struct tree* nctemp10357= rp;
struct nctempchar1 *nctemp10361;
static struct nctempchar1 nctemp10362 = {{ 2}, (char*)"=\0"};
nctemp10361=&nctemp10362;
nctempchar1* nctemp10359= nctemp10361;
int nctemp10363=CodeEs(nctemp10357,nctemp10359);
struct tree* nctemp10365= rp;
nctempchar1* nctemp10367= index;
int nctemp10370=CodeEs(nctemp10365,nctemp10367);
struct tree* nctemp10372= rp;
struct nctempchar1 *nctemp10376;
static struct nctempchar1 nctemp10377 = {{ 2}, (char*)"+\0"};
nctemp10376=&nctemp10377;
nctempchar1* nctemp10374= nctemp10376;
int nctemp10378=CodeEs(nctemp10372,nctemp10374);
struct tree* nctemp10380= rp;
nctempchar1* nctemp10382=CodeExpr(nctemp10380);
}
else{
struct tree* nctemp10384= rp;
nctempchar1* nctemp10386= index;
int nctemp10389=CodeEs(nctemp10384,nctemp10386);
struct tree* nctemp10391= rp;
struct nctempchar1 *nctemp10395;
static struct nctempchar1 nctemp10396 = {{ 2}, (char*)"=\0"};
nctemp10395=&nctemp10396;
nctempchar1* nctemp10393= nctemp10395;
int nctemp10397=CodeEs(nctemp10391,nctemp10393);
struct tree* nctemp10399= rp;
nctempchar1* nctemp10401= index;
int nctemp10404=CodeEs(nctemp10399,nctemp10401);
struct tree* nctemp10406= rp;
struct nctempchar1 *nctemp10410;
static struct nctempchar1 nctemp10411 = {{ 2}, (char*)"+\0"};
nctemp10410=&nctemp10411;
nctempchar1* nctemp10408= nctemp10410;
int nctemp10412=CodeEs(nctemp10406,nctemp10408);
struct tree* nctemp10414= rp;
struct nctempchar1 *nctemp10418;
static struct nctempchar1 nctemp10419 = {{ 2}, (char*)"1\0"};
nctemp10418=&nctemp10419;
nctempchar1* nctemp10416= nctemp10418;
int nctemp10420=CodeEs(nctemp10414,nctemp10416);
}
struct tree* nctemp10422= rp;
struct nctempchar1 *nctemp10426;
static struct nctempchar1 nctemp10427 = {{ 3}, (char*)"){\0"};
nctemp10426=&nctemp10427;
nctempchar1* nctemp10424= nctemp10426;
int nctemp10428=CodeEs(nctemp10422,nctemp10424);
return 1;
}
int CodeParallelstmntcpu (struct tree* p)
{
struct tree* sp;
int rank;
int i;
sp =p;
struct tree* nctemp10438= sp;
int nctemp10440=PtreeGetrank(nctemp10438);
rank =nctemp10440;
struct tree* nctemp10445= p;
struct tree* nctemp10447=PtreeMvchild(nctemp10445);
p =nctemp10447;
struct tree* nctemp10452= p;
struct tree* nctemp10454=PtreeMvchild(nctemp10452);
p =nctemp10454;
struct tree* nctemp10456= p;
int nctemp10458= 0;
int nctemp10460= rank;
int nctemp10462=CodeParallelfor(nctemp10456,nctemp10458,nctemp10460);
struct tree* nctemp10467= sp;
struct tree* nctemp10469=PtreeMvchild(nctemp10467);
sp =nctemp10469;
struct tree* nctemp10474= sp;
struct tree* nctemp10476=PtreeMvsister(nctemp10474);
sp =nctemp10476;
struct tree* nctemp10478= sp;
int nctemp10480=CodeStmnt(nctemp10478);
i =0;
int nctemp10485 = (i < rank);
while(nctemp10485){
{
struct tree* nctemp10490= sp;
struct nctempchar1 *nctemp10494;
static struct nctempchar1 nctemp10495 = {{ 2}, (char*)"}\0"};
nctemp10494=&nctemp10495;
nctempchar1* nctemp10492= nctemp10494;
int nctemp10496=CodeEs(nctemp10490,nctemp10492);
}
int nctemp10505 = i + 1;
i =nctemp10505;
int nctemp10506 = (i < rank);
nctemp10485=nctemp10506;
}
return 1;
}
nctempchar1 * CodeParprocno (struct tree* p)
{
struct tree* nctemp10512= p;
struct nctempchar1 *nctemp10516;
static struct nctempchar1 nctemp10517 = {{ 13}, (char*)"int nctempno\0"};
nctemp10516=&nctemp10517;
nctempchar1* nctemp10514= nctemp10516;
int nctemp10518=CodeEs(nctemp10512,nctemp10514);
struct tree* nctemp10520= p;
struct nctempchar1 *nctemp10524;
static struct nctempchar1 nctemp10525 = {{ 39}, (char*)"=blockIdx.x*blockDim.x + threadIdx.x; \0"};
nctemp10524=&nctemp10525;
nctempchar1* nctemp10522= nctemp10524;
int nctemp10526=CodeEs(nctemp10520,nctemp10522);
struct nctempchar1 *nctemp10528;
static struct nctempchar1 nctemp10529 = {{ 9}, (char*)"nctempno\0"};
nctemp10528=&nctemp10529;
return nctemp10528;
}
nctempchar1 * CodeParidx (struct tree* p)
{
struct tree* nctemp10534= p;
struct tree* nctemp10536=PtreeMvchild(nctemp10534);
p =nctemp10536;
struct tree* nctemp10541= p;
struct tree* nctemp10543=PtreeMvchild(nctemp10541);
p =nctemp10543;
struct tree* nctemp10548= p;
struct tree* nctemp10550=PtreeMvchild(nctemp10548);
p =nctemp10550;
struct tree* nctemp10552= p;
nctempchar1* nctemp10554=PtreeGetdef(nctemp10552);
return nctemp10554;
}
nctempchar1 * CodeParidxrank (struct tree* p,int r)
{
int i;
i =0;
int nctemp10567 = r - 1;
int nctemp10559 = (i < nctemp10567);
while(nctemp10559){
{
struct tree* nctemp10572= p;
struct tree* nctemp10574=PtreeMvsister(nctemp10572);
p =nctemp10574;
}
int nctemp10583 = i + 1;
i =nctemp10583;
int nctemp10592 = r - 1;
int nctemp10584 = (i < nctemp10592);
nctemp10559=nctemp10584;
}
struct tree* nctemp10594= p;
nctempchar1* nctemp10596=CodeParidx(nctemp10594);
return nctemp10596;
}
nctempchar1 * CodeParllim (struct tree* p)
{
nctempchar1 *tmp;
nctempchar1 *temp;
struct tree* nctemp10601= p;
struct tree* nctemp10603=PtreeMvchild(nctemp10601);
p =nctemp10603;
struct tree* nctemp10609= p;
nctempchar1* nctemp10611=CodeExpr(nctemp10609);
tmp=nctemp10611;
nctempchar1* nctemp10617=CodeMktemp();
temp=nctemp10617;
struct tree* nctemp10619= p;
struct nctempchar1 *nctemp10623;
static struct nctempchar1 nctemp10624 = {{ 5}, (char*)"int \0"};
nctemp10623=&nctemp10624;
nctempchar1* nctemp10621= nctemp10623;
int nctemp10625=CodeEs(nctemp10619,nctemp10621);
struct tree* nctemp10627= p;
nctempchar1* nctemp10629= temp;
int nctemp10632=CodeEs(nctemp10627,nctemp10629);
struct tree* nctemp10634= p;
struct nctempchar1 *nctemp10638;
static struct nctempchar1 nctemp10639 = {{ 2}, (char*)"=\0"};
nctemp10638=&nctemp10639;
nctempchar1* nctemp10636= nctemp10638;
int nctemp10640=CodeEs(nctemp10634,nctemp10636);
struct tree* nctemp10642= p;
nctempchar1* nctemp10644= tmp;
int nctemp10647=CodeEs(nctemp10642,nctemp10644);
struct tree* nctemp10649= p;
struct nctempchar1 *nctemp10653;
static struct nctempchar1 nctemp10654 = {{ 4}, (char*)";\n\0"};
nctemp10653=&nctemp10654;
nctempchar1* nctemp10651= nctemp10653;
int nctemp10655=CodeEs(nctemp10649,nctemp10651);
return temp;
}
nctempchar1 * CodeParulim (struct tree* p)
{
struct tree* nctemp10662= p;
struct tree* nctemp10664=PtreeMvchild(nctemp10662);
p =nctemp10664;
struct tree* nctemp10669= p;
struct tree* nctemp10671=PtreeMvsister(nctemp10669);
p =nctemp10671;
struct tree* nctemp10673= p;
nctempchar1* nctemp10675=CodeExpr(nctemp10673);
return nctemp10675;
}
nctempchar1 * CodeParllimrank (struct tree* p,int r)
{
int i;
i =0;
int nctemp10688 = r - 1;
int nctemp10680 = (i < nctemp10688);
while(nctemp10680){
{
struct tree* nctemp10693= p;
struct tree* nctemp10695=PtreeMvsister(nctemp10693);
p =nctemp10695;
}
int nctemp10704 = i + 1;
i =nctemp10704;
int nctemp10713 = r - 1;
int nctemp10705 = (i < nctemp10713);
nctemp10680=nctemp10705;
}
struct tree* nctemp10715= p;
nctempchar1* nctemp10717=CodeParllim(nctemp10715);
return nctemp10717;
}
nctempchar1 * CodeParulimrank (struct tree* p,int r)
{
int i;
i =0;
int nctemp10730 = r - 1;
int nctemp10722 = (i < nctemp10730);
while(nctemp10722){
{
struct tree* nctemp10735= p;
struct tree* nctemp10737=PtreeMvsister(nctemp10735);
p =nctemp10737;
}
int nctemp10746 = i + 1;
i =nctemp10746;
int nctemp10755 = r - 1;
int nctemp10747 = (i < nctemp10755);
nctemp10722=nctemp10747;
}
struct tree* nctemp10757= p;
nctempchar1* nctemp10759=CodeParulim(nctemp10757);
return nctemp10759;
}
nctempchar1 * CodeParlen (struct tree* p,nctempchar1 *llim)
{
nctempchar1 *tmp1;
nctempchar1 *tmp2;
nctempchar1 *tmp3;
nctempchar1* nctemp10765=CodeMktemp();
tmp1=nctemp10765;
struct tree* nctemp10771= p;
nctempchar1* nctemp10773=CodeParulim(nctemp10771);
tmp2=nctemp10773;
struct tree* nctemp10779= p;
nctempchar1* nctemp10781=CodeParllim(nctemp10779);
tmp3=nctemp10781;
struct tree* nctemp10783= p;
struct nctempchar1 *nctemp10787;
static struct nctempchar1 nctemp10788 = {{ 5}, (char*)"int \0"};
nctemp10787=&nctemp10788;
nctempchar1* nctemp10785= nctemp10787;
int nctemp10789=CodeEs(nctemp10783,nctemp10785);
struct tree* nctemp10791= p;
nctempchar1* nctemp10793= tmp1;
int nctemp10796=CodeEs(nctemp10791,nctemp10793);
struct tree* nctemp10798= p;
struct nctempchar1 *nctemp10802;
static struct nctempchar1 nctemp10803 = {{ 2}, (char*)"=\0"};
nctemp10802=&nctemp10803;
nctempchar1* nctemp10800= nctemp10802;
int nctemp10804=CodeEs(nctemp10798,nctemp10800);
struct tree* nctemp10806= p;
nctempchar1* nctemp10808= tmp2;
int nctemp10811=CodeEs(nctemp10806,nctemp10808);
struct tree* nctemp10813= p;
struct nctempchar1 *nctemp10817;
static struct nctempchar1 nctemp10818 = {{ 2}, (char*)"-\0"};
nctemp10817=&nctemp10818;
nctempchar1* nctemp10815= nctemp10817;
int nctemp10819=CodeEs(nctemp10813,nctemp10815);
struct tree* nctemp10821= p;
nctempchar1* nctemp10823= tmp3;
int nctemp10826=CodeEs(nctemp10821,nctemp10823);
struct tree* nctemp10828= p;
struct nctempchar1 *nctemp10832;
static struct nctempchar1 nctemp10833 = {{ 4}, (char*)";\n\0"};
nctemp10832=&nctemp10833;
nctempchar1* nctemp10830= nctemp10832;
int nctemp10834=CodeEs(nctemp10828,nctemp10830);
nctempchar1* nctemp10838= tmp3;
nctempchar1* nctemp10841= llim;
int nctemp10844=LibeStrcpy(nctemp10838,nctemp10841);
int nctemp10835 = (nctemp10844 ==0);
if(nctemp10835)
{
struct nctempchar1 *nctemp10849;
static struct nctempchar1 nctemp10850 = {{ 31}, (char*)"Internal error in CodeParlen\n\0"};
nctemp10849=&nctemp10850;
nctempchar1* nctemp10847= nctemp10849;
int nctemp10851=CodeError(nctemp10847);
}
return tmp1;
}
nctempchar1 * CodeParlenrank (struct tree* p,int r,nctempchar1 *llim)
{
int i;
nctempchar1 *tmp;
i =0;
int nctemp10866 = r - 1;
int nctemp10858 = (i < nctemp10866);
while(nctemp10858){
{
struct tree* nctemp10871= p;
struct tree* nctemp10873=PtreeMvsister(nctemp10871);
p =nctemp10873;
}
int nctemp10882 = i + 1;
i =nctemp10882;
int nctemp10891 = r - 1;
int nctemp10883 = (i < nctemp10891);
nctemp10858=nctemp10883;
}
struct tree* nctemp10897= p;
nctempchar1* nctemp10899= llim;
nctempchar1* nctemp10902=CodeParlen(nctemp10897,nctemp10899);
tmp=nctemp10902;
return tmp;
}
struct charr {nctempchar1 *s;
};
typedef struct nctempcharr1 {int d[1]; struct charr *a; } nctempcharr1;
struct nctempcharr2 {int d[2]; struct charr *a; } ;
struct nctempcharr3 {int d[3]; struct charr *a; } ;
struct nctempcharr4 {int d[4]; struct charr *a; } ;
nctempchar1 * CodeParnsize (struct tree* p,struct nctempcharr1 *m)
{
int i;
int r;
nctempchar1 *nsize;
int nctemp10909=m->d[0];r =nctemp10909;
nctempchar1* nctemp10918=CodeMktemp();
nsize=nctemp10918;
struct tree* nctemp10920= p;
struct nctempchar1 *nctemp10924;
static struct nctempchar1 nctemp10925 = {{ 5}, (char*)"int \0"};
nctemp10924=&nctemp10925;
nctempchar1* nctemp10922= nctemp10924;
int nctemp10926=CodeEs(nctemp10920,nctemp10922);
struct tree* nctemp10928= p;
nctempchar1* nctemp10930= nsize;
int nctemp10933=CodeEs(nctemp10928,nctemp10930);
struct tree* nctemp10935= p;
struct nctempchar1 *nctemp10939;
static struct nctempchar1 nctemp10940 = {{ 2}, (char*)"=\0"};
nctemp10939=&nctemp10940;
nctempchar1* nctemp10937= nctemp10939;
int nctemp10941=CodeEs(nctemp10935,nctemp10937);
i =0;
int nctemp10946 = (i < r);
while(nctemp10946){
{
int nctemp10958 = r - 1;
int nctemp10950 = (i ==nctemp10958);
if(nctemp10950)
{
struct tree* nctemp10960= p;
int nctemp10964=i;
nctempchar1* nctemp10962= m->a[nctemp10964].s;
int nctemp10967=CodeEs(nctemp10960,nctemp10962);
struct tree* nctemp10969= p;
struct nctempchar1 *nctemp10973;
static struct nctempchar1 nctemp10974 = {{ 4}, (char*)";\n\0"};
nctemp10973=&nctemp10974;
nctempchar1* nctemp10971= nctemp10973;
int nctemp10975=CodeEs(nctemp10969,nctemp10971);
}
else{
struct tree* nctemp10977= p;
int nctemp10981=i;
nctempchar1* nctemp10979= m->a[nctemp10981].s;
int nctemp10984=CodeEs(nctemp10977,nctemp10979);
struct tree* nctemp10986= p;
struct nctempchar1 *nctemp10990;
static struct nctempchar1 nctemp10991 = {{ 2}, (char*)"*\0"};
nctemp10990=&nctemp10991;
nctempchar1* nctemp10988= nctemp10990;
int nctemp10992=CodeEs(nctemp10986,nctemp10988);
}
}
int nctemp11001 = i + 1;
i =nctemp11001;
int nctemp11002 = (i < r);
nctemp10946=nctemp11002;
}
return nsize;
}
int CodeParallelstmntgpu (struct tree* p)
{
struct tree* sp;
struct tree* slice;
nctempchar1 *pno;
nctempchar1 *nmax;
nctempchar1 *qk;
nctempchar1 *tmp;
int rank;
int l;
struct nctempcharr1 *m;
struct nctempcharr1 *i;
struct nctempcharr1 *nl;
int nctemp11009= 1;
int nctemp11011=CodeSetparallel(nctemp11009);
sp =p;
struct tree* nctemp11020= p;
int nctemp11022=PtreeGetrank(nctemp11020);
rank =nctemp11022;
int nctemp11029=rank;
struct nctempcharr1 *nctemp11028;
nctemp11028=(struct nctempcharr1*)RunMalloc(sizeof(struct nctempcharr1));
nctemp11028->d[0]=rank;
nctemp11028->a=(struct charr*)RunMalloc(sizeof(struct charr)*nctemp11029);
m=nctemp11028;
int nctemp11038=rank;
struct nctempcharr1 *nctemp11037;
nctemp11037=(struct nctempcharr1*)RunMalloc(sizeof(struct nctempcharr1));
nctemp11037->d[0]=rank;
nctemp11037->a=(struct charr*)RunMalloc(sizeof(struct charr)*nctemp11038);
i=nctemp11037;
int nctemp11047=rank;
struct nctempcharr1 *nctemp11046;
nctemp11046=(struct nctempcharr1*)RunMalloc(sizeof(struct nctempcharr1));
nctemp11046->d[0]=rank;
nctemp11046->a=(struct charr*)RunMalloc(sizeof(struct charr)*nctemp11047);
nl=nctemp11046;
struct tree* nctemp11054= p;
struct tree* nctemp11056=PtreeMvchild(nctemp11054);
p =nctemp11056;
struct tree* nctemp11061= p;
struct tree* nctemp11063=PtreeMvchild(nctemp11061);
slice =nctemp11063;
struct tree* nctemp11065= p;
struct nctempchar1 *nctemp11069;
static struct nctempchar1 nctemp11070 = {{ 4}, (char*)"{\n\0"};
nctemp11069=&nctemp11070;
nctempchar1* nctemp11067= nctemp11069;
int nctemp11071=CodeEs(nctemp11065,nctemp11067);
struct tree* nctemp11077= slice;
nctempchar1* nctemp11079=CodeParprocno(nctemp11077);
pno=nctemp11079;
l =0;
int nctemp11084 = (l < rank);
while(nctemp11084){
{
int nctemp11091=l;
struct tree* nctemp11095= slice;
int nctemp11102 = l + 1;
int nctemp11097= nctemp11102;
nctempchar1* nctemp11103=CodeParidxrank(nctemp11095,nctemp11097);
i->a[nctemp11091].s=nctemp11103;
int nctemp11107=l;
int nctemp11112=4096;
nctempchar1 *nctemp11111;
nctemp11111=(nctempchar1*)RunMalloc(sizeof(nctempchar1));
nctemp11111->d[0]=4096;
nctemp11111->a=(char *)RunMalloc(sizeof(char)*nctemp11112);
nl->a[nctemp11107].s=nctemp11111;
int nctemp11118=l;
struct tree* nctemp11122= slice;
int nctemp11129 = l + 1;
int nctemp11124= nctemp11129;
int nctemp11132=l;
nctempchar1* nctemp11130= nl->a[nctemp11132].s;
nctempchar1* nctemp11135=CodeParlenrank(nctemp11122,nctemp11124,nctemp11130);
m->a[nctemp11118].s=nctemp11135;
}
int nctemp11144 = l + 1;
l =nctemp11144;
int nctemp11145 = (l < rank);
nctemp11084=nctemp11145;
}
struct tree* nctemp11154= p;
nctempcharr1* nctemp11156= m;
nctempchar1* nctemp11159=CodeParnsize(nctemp11154,nctemp11156);
nmax=nctemp11159;
struct tree* nctemp11161= p;
struct nctempchar1 *nctemp11165;
static struct nctempchar1 nctemp11166 = {{ 5}, (char*)"for(\0"};
nctemp11165=&nctemp11166;
nctempchar1* nctemp11163= nctemp11165;
int nctemp11167=CodeEs(nctemp11161,nctemp11163);
struct tree* nctemp11169= p;
nctempchar1* nctemp11171= pno;
int nctemp11174=CodeEs(nctemp11169,nctemp11171);
struct tree* nctemp11176= p;
struct nctempchar1 *nctemp11180;
static struct nctempchar1 nctemp11181 = {{ 39}, (char*)"=blockIdx.x*blockDim.x + threadIdx.x; \0"};
nctemp11180=&nctemp11181;
nctempchar1* nctemp11178= nctemp11180;
int nctemp11182=CodeEs(nctemp11176,nctemp11178);
struct tree* nctemp11184= p;
nctempchar1* nctemp11186= pno;
int nctemp11189=CodeEs(nctemp11184,nctemp11186);
struct tree* nctemp11191= p;
struct nctempchar1 *nctemp11195;
static struct nctempchar1 nctemp11196 = {{ 2}, (char*)"<\0"};
nctemp11195=&nctemp11196;
nctempchar1* nctemp11193= nctemp11195;
int nctemp11197=CodeEs(nctemp11191,nctemp11193);
struct tree* nctemp11199= p;
nctempchar1* nctemp11201= nmax;
int nctemp11204=CodeEs(nctemp11199,nctemp11201);
struct tree* nctemp11206= p;
struct nctempchar1 *nctemp11210;
static struct nctempchar1 nctemp11211 = {{ 2}, (char*)";\0"};
nctemp11210=&nctemp11211;
nctempchar1* nctemp11208= nctemp11210;
int nctemp11212=CodeEs(nctemp11206,nctemp11208);
struct tree* nctemp11214= p;
nctempchar1* nctemp11216= pno;
int nctemp11219=CodeEs(nctemp11214,nctemp11216);
struct tree* nctemp11221= p;
struct nctempchar1 *nctemp11225;
static struct nctempchar1 nctemp11226 = {{ 23}, (char*)"+=blockDim.x*gridDim.x\0"};
nctemp11225=&nctemp11226;
nctempchar1* nctemp11223= nctemp11225;
int nctemp11227=CodeEs(nctemp11221,nctemp11223);
struct tree* nctemp11229= p;
struct nctempchar1 *nctemp11233;
static struct nctempchar1 nctemp11234 = {{ 5}, (char*)"){\n\0"};
nctemp11233=&nctemp11234;
nctempchar1* nctemp11231= nctemp11233;
int nctemp11235=CodeEs(nctemp11229,nctemp11231);
struct nctempchar1 *nctemp11243;
static struct nctempchar1 nctemp11244 = {{ 2}, (char*)"1\0"};
nctemp11243=&nctemp11244;
nctempchar1* nctemp11241= nctemp11243;
nctempchar1* nctemp11245=LibeStrsave(nctemp11241);
qk=nctemp11245;
l =0;
int nctemp11250 = (l < rank);
while(nctemp11250){
{
int nctemp11262 = rank - 1;
int nctemp11254 = (l ==nctemp11262);
if(nctemp11254)
{
struct tree* nctemp11264= p;
int nctemp11268=l;
nctempchar1* nctemp11266= i->a[nctemp11268].s;
int nctemp11271=CodeEs(nctemp11264,nctemp11266);
struct tree* nctemp11273= p;
struct nctempchar1 *nctemp11277;
static struct nctempchar1 nctemp11278 = {{ 2}, (char*)"=\0"};
nctemp11277=&nctemp11278;
nctempchar1* nctemp11275= nctemp11277;
int nctemp11279=CodeEs(nctemp11273,nctemp11275);
struct tree* nctemp11281= p;
struct nctempchar1 *nctemp11285;
static struct nctempchar1 nctemp11286 = {{ 2}, (char*)"(\0"};
nctemp11285=&nctemp11286;
nctempchar1* nctemp11283= nctemp11285;
int nctemp11287=CodeEs(nctemp11281,nctemp11283);
struct tree* nctemp11289= p;
nctempchar1* nctemp11291= pno;
int nctemp11294=CodeEs(nctemp11289,nctemp11291);
struct tree* nctemp11296= p;
struct nctempchar1 *nctemp11300;
static struct nctempchar1 nctemp11301 = {{ 2}, (char*)"/\0"};
nctemp11300=&nctemp11301;
nctempchar1* nctemp11298= nctemp11300;
int nctemp11302=CodeEs(nctemp11296,nctemp11298);
struct tree* nctemp11304= p;
struct nctempchar1 *nctemp11308;
static struct nctempchar1 nctemp11309 = {{ 2}, (char*)"(\0"};
nctemp11308=&nctemp11309;
nctempchar1* nctemp11306= nctemp11308;
int nctemp11310=CodeEs(nctemp11304,nctemp11306);
struct tree* nctemp11312= p;
nctempchar1* nctemp11314= qk;
int nctemp11317=CodeEs(nctemp11312,nctemp11314);
struct tree* nctemp11319= p;
struct nctempchar1 *nctemp11323;
static struct nctempchar1 nctemp11324 = {{ 2}, (char*)")\0"};
nctemp11323=&nctemp11324;
nctempchar1* nctemp11321= nctemp11323;
int nctemp11325=CodeEs(nctemp11319,nctemp11321);
struct tree* nctemp11327= p;
struct nctempchar1 *nctemp11331;
static struct nctempchar1 nctemp11332 = {{ 2}, (char*)")\0"};
nctemp11331=&nctemp11332;
nctempchar1* nctemp11329= nctemp11331;
int nctemp11333=CodeEs(nctemp11327,nctemp11329);
struct tree* nctemp11335= p;
struct nctempchar1 *nctemp11339;
static struct nctempchar1 nctemp11340 = {{ 2}, (char*)"+\0"};
nctemp11339=&nctemp11340;
nctempchar1* nctemp11337= nctemp11339;
int nctemp11341=CodeEs(nctemp11335,nctemp11337);
struct tree* nctemp11343= p;
int nctemp11347=l;
nctempchar1* nctemp11345= nl->a[nctemp11347].s;
int nctemp11350=CodeEs(nctemp11343,nctemp11345);
int nctemp11353=l;
RunFree(nl->a[nctemp11353].s->a);
RunFree(nl->a[nctemp11353].s);
struct tree* nctemp11357= p;
struct nctempchar1 *nctemp11361;
static struct nctempchar1 nctemp11362 = {{ 4}, (char*)";\n\0"};
nctemp11361=&nctemp11362;
nctempchar1* nctemp11359= nctemp11361;
int nctemp11363=CodeEs(nctemp11357,nctemp11359);
}
else{
struct tree* nctemp11365= p;
int nctemp11369=l;
nctempchar1* nctemp11367= i->a[nctemp11369].s;
int nctemp11372=CodeEs(nctemp11365,nctemp11367);
struct tree* nctemp11374= p;
struct nctempchar1 *nctemp11378;
static struct nctempchar1 nctemp11379 = {{ 2}, (char*)"=\0"};
nctemp11378=&nctemp11379;
nctempchar1* nctemp11376= nctemp11378;
int nctemp11380=CodeEs(nctemp11374,nctemp11376);
struct tree* nctemp11382= p;
struct nctempchar1 *nctemp11386;
static struct nctempchar1 nctemp11387 = {{ 2}, (char*)"(\0"};
nctemp11386=&nctemp11387;
nctempchar1* nctemp11384= nctemp11386;
int nctemp11388=CodeEs(nctemp11382,nctemp11384);
struct tree* nctemp11390= p;
nctempchar1* nctemp11392= pno;
int nctemp11395=CodeEs(nctemp11390,nctemp11392);
struct tree* nctemp11397= p;
struct nctempchar1 *nctemp11401;
static struct nctempchar1 nctemp11402 = {{ 2}, (char*)"/\0"};
nctemp11401=&nctemp11402;
nctempchar1* nctemp11399= nctemp11401;
int nctemp11403=CodeEs(nctemp11397,nctemp11399);
struct tree* nctemp11405= p;
struct nctempchar1 *nctemp11409;
static struct nctempchar1 nctemp11410 = {{ 2}, (char*)"(\0"};
nctemp11409=&nctemp11410;
nctempchar1* nctemp11407= nctemp11409;
int nctemp11411=CodeEs(nctemp11405,nctemp11407);
struct tree* nctemp11413= p;
nctempchar1* nctemp11415= qk;
int nctemp11418=CodeEs(nctemp11413,nctemp11415);
struct tree* nctemp11420= p;
struct nctempchar1 *nctemp11424;
static struct nctempchar1 nctemp11425 = {{ 2}, (char*)")\0"};
nctemp11424=&nctemp11425;
nctempchar1* nctemp11422= nctemp11424;
int nctemp11426=CodeEs(nctemp11420,nctemp11422);
struct tree* nctemp11428= p;
struct nctempchar1 *nctemp11432;
static struct nctempchar1 nctemp11433 = {{ 2}, (char*)")\0"};
nctemp11432=&nctemp11433;
nctempchar1* nctemp11430= nctemp11432;
int nctemp11434=CodeEs(nctemp11428,nctemp11430);
struct tree* nctemp11436= p;
struct nctempchar1 *nctemp11440;
static struct nctempchar1 nctemp11441 = {{ 2}, (char*)"%\0"};
nctemp11440=&nctemp11441;
nctempchar1* nctemp11438= nctemp11440;
int nctemp11442=CodeEs(nctemp11436,nctemp11438);
struct tree* nctemp11444= p;
int nctemp11448=l;
nctempchar1* nctemp11446= m->a[nctemp11448].s;
int nctemp11451=CodeEs(nctemp11444,nctemp11446);
struct tree* nctemp11453= p;
struct nctempchar1 *nctemp11457;
static struct nctempchar1 nctemp11458 = {{ 2}, (char*)"+\0"};
nctemp11457=&nctemp11458;
nctempchar1* nctemp11455= nctemp11457;
int nctemp11459=CodeEs(nctemp11453,nctemp11455);
struct tree* nctemp11461= p;
int nctemp11465=l;
nctempchar1* nctemp11463= nl->a[nctemp11465].s;
int nctemp11468=CodeEs(nctemp11461,nctemp11463);
int nctemp11471=l;
RunFree(nl->a[nctemp11471].s->a);
RunFree(nl->a[nctemp11471].s);
struct tree* nctemp11475= p;
struct nctempchar1 *nctemp11479;
static struct nctempchar1 nctemp11480 = {{ 4}, (char*)";\n\0"};
nctemp11479=&nctemp11480;
nctempchar1* nctemp11477= nctemp11479;
int nctemp11481=CodeEs(nctemp11475,nctemp11477);
}
nctempchar1* nctemp11487= qk;
struct nctempchar1 *nctemp11492;
static struct nctempchar1 nctemp11493 = {{ 2}, (char*)"*\0"};
nctemp11492=&nctemp11493;
nctempchar1* nctemp11490= nctemp11492;
nctempchar1* nctemp11494=LibeStradd(nctemp11487,nctemp11490);
tmp=nctemp11494;
RunFree(qk->a);
RunFree(qk);
qk=tmp;
nctempchar1* nctemp11509= qk;
int nctemp11514=l;
nctempchar1* nctemp11512= m->a[nctemp11514].s;
nctempchar1* nctemp11517=LibeStradd(nctemp11509,nctemp11512);
tmp=nctemp11517;
RunFree(qk->a);
RunFree(qk);
qk=tmp;
}
int nctemp11535 = l + 1;
l =nctemp11535;
int nctemp11536 = (l < rank);
nctemp11250=nctemp11536;
}
struct tree* nctemp11544= sp;
struct tree* nctemp11546=PtreeMvchild(nctemp11544);
p =nctemp11546;
struct tree* nctemp11551= p;
struct tree* nctemp11553=PtreeMvsister(nctemp11551);
p =nctemp11553;
struct tree* nctemp11555= p;
int nctemp11557=CodeCompstmnt(nctemp11555);
struct tree* nctemp11559= p;
struct nctempchar1 *nctemp11563;
static struct nctempchar1 nctemp11564 = {{ 4}, (char*)"}\n\0"};
nctemp11563=&nctemp11564;
nctempchar1* nctemp11561= nctemp11563;
int nctemp11565=CodeEs(nctemp11559,nctemp11561);
struct tree* nctemp11567= p;
struct nctempchar1 *nctemp11571;
static struct nctempchar1 nctemp11572 = {{ 4}, (char*)"}\n\0"};
nctemp11571=&nctemp11572;
nctempchar1* nctemp11569= nctemp11571;
int nctemp11573=CodeEs(nctemp11567,nctemp11569);
int nctemp11575= 0;
int nctemp11577=CodeSetparallel(nctemp11575);
return 1;
}
int CodeParallelstmnt (struct tree* p)
{
int nctemp11582=CodeGetarch();
int nctemp11579 = (nctemp11582 ==1);
if(nctemp11579)
{
struct tree* nctemp11585= p;
int nctemp11587=CodeParallelstmntcpu(nctemp11585);
}
else{
int nctemp11591=CodeGetarch();
int nctemp11588 = (nctemp11591 ==2);
if(nctemp11588)
{
struct tree* nctemp11594= p;
int nctemp11596=CodeParallelstmntgpu(nctemp11594);
}
else{
int nctemp11600=CodeGetarch();
int nctemp11597 = (nctemp11600 ==3);
if(nctemp11597)
{
struct tree* nctemp11603= p;
int nctemp11605=CodeParallelstmntgpu(nctemp11603);
}
}
}
return 1;
}
int CodeIfstmnt (struct tree* p)
{
nctempchar1 *cond;
struct tree* nctemp11611= p;
struct tree* nctemp11613=PtreeMvchild(nctemp11611);
p =nctemp11613;
struct tree* nctemp11619= p;
nctempchar1* nctemp11621=CodeExpr(nctemp11619);
cond=nctemp11621;
struct tree* nctemp11623= p;
struct nctempchar1 *nctemp11627;
static struct nctempchar1 nctemp11628 = {{ 4}, (char*)"if(\0"};
nctemp11627=&nctemp11628;
nctempchar1* nctemp11625= nctemp11627;
int nctemp11629=CodeEs(nctemp11623,nctemp11625);
struct tree* nctemp11631= p;
nctempchar1* nctemp11633= cond;
int nctemp11636=CodeEs(nctemp11631,nctemp11633);
struct tree* nctemp11638= p;
struct nctempchar1 *nctemp11642;
static struct nctempchar1 nctemp11643 = {{ 4}, (char*)")\n\0"};
nctemp11642=&nctemp11643;
nctempchar1* nctemp11640= nctemp11642;
int nctemp11644=CodeEs(nctemp11638,nctemp11640);
struct tree* nctemp11649= p;
struct tree* nctemp11651=PtreeMvsister(nctemp11649);
p =nctemp11651;
struct tree* nctemp11653= p;
int nctemp11655=CodeStmnt(nctemp11653);
struct tree* nctemp11663= p;
struct tree* nctemp11665=PtreeMvsister(nctemp11663);
p =nctemp11665;
int nctemp11656 = (p !=0);
if(nctemp11656)
{
struct tree* nctemp11672= p;
nctempchar1* nctemp11674=PtreeGetname(nctemp11672);
nctempchar1* nctemp11670= nctemp11674;
struct nctempchar1 *nctemp11677;
static struct nctempchar1 nctemp11678 = {{ 5}, (char*)"else\0"};
nctemp11677=&nctemp11678;
nctempchar1* nctemp11675= nctemp11677;
int nctemp11679=LibeStrcmp(nctemp11670,nctemp11675);
int nctemp11667 = (nctemp11679 ==1);
if(nctemp11667)
{
struct tree* nctemp11685= p;
struct tree* nctemp11687=PtreeMvchild(nctemp11685);
p =nctemp11687;
struct tree* nctemp11689= p;
struct nctempchar1 *nctemp11693;
static struct nctempchar1 nctemp11694 = {{ 5}, (char*)"else\0"};
nctemp11693=&nctemp11694;
nctempchar1* nctemp11691= nctemp11693;
int nctemp11695=CodeEs(nctemp11689,nctemp11691);
struct tree* nctemp11697= p;
int nctemp11699=CodeStmnt(nctemp11697);
}
}
return 1;
}
int CodeReturnstmnt (struct tree* p)
{
struct tree* np;
nctempchar1 *rval;
struct tree* nctemp11705= p;
struct tree* nctemp11707=PtreeMvchild(nctemp11705);
np =nctemp11707;
struct tree* nctemp11713= np;
nctempchar1* nctemp11715=CodeExpr(nctemp11713);
rval=nctemp11715;
struct tree* nctemp11717= np;
struct nctempchar1 *nctemp11721;
static struct nctempchar1 nctemp11722 = {{ 8}, (char*)"return \0"};
nctemp11721=&nctemp11722;
nctempchar1* nctemp11719= nctemp11721;
int nctemp11723=CodeEs(nctemp11717,nctemp11719);
struct tree* nctemp11725= np;
nctempchar1* nctemp11727= rval;
int nctemp11730=CodeEs(nctemp11725,nctemp11727);
struct tree* nctemp11732= np;
struct nctempchar1 *nctemp11736;
static struct nctempchar1 nctemp11737 = {{ 4}, (char*)";\n\0"};
nctemp11736=&nctemp11737;
nctempchar1* nctemp11734= nctemp11736;
int nctemp11738=CodeEs(nctemp11732,nctemp11734);
return 1;
}
int CodeCompstmnt (struct tree* p)
{
struct tree* sp;
struct tree* q;
sp =p;
struct tree* nctemp11745= p;
struct nctempchar1 *nctemp11749;
static struct nctempchar1 nctemp11750 = {{ 4}, (char*)"{\n\0"};
nctemp11749=&nctemp11750;
nctempchar1* nctemp11747= nctemp11749;
int nctemp11751=CodeEs(nctemp11745,nctemp11747);
struct tree* nctemp11756= p;
struct tree* nctemp11758=PtreeMvchild(nctemp11756);
p =nctemp11758;
int nctemp11759 = (p ==0);
if(nctemp11759)
{
struct tree* nctemp11764= sp;
struct nctempchar1 *nctemp11768;
static struct nctempchar1 nctemp11769 = {{ 4}, (char*)"}\n\0"};
nctemp11768=&nctemp11769;
nctempchar1* nctemp11766= nctemp11768;
int nctemp11770=CodeEs(nctemp11764,nctemp11766);
return 1;
}
struct tree* nctemp11773= p;
struct symbol* nctemp11777=SymGetltp();
struct symbol* nctemp11775= nctemp11777;
int nctemp11778=CodeDeclarations(nctemp11773,nctemp11775);
struct tree* nctemp11784= p;
nctempchar1* nctemp11786=PtreeGetname(nctemp11784);
nctempchar1* nctemp11782= nctemp11786;
struct nctempchar1 *nctemp11789;
static struct nctempchar1 nctemp11790 = {{ 13}, (char*)"declarations\0"};
nctemp11789=&nctemp11790;
nctempchar1* nctemp11787= nctemp11789;
int nctemp11791=LibeStrcmp(nctemp11782,nctemp11787);
int nctemp11779 = (nctemp11791 ==1);
if(nctemp11779)
{
struct tree* nctemp11797= p;
struct tree* nctemp11799=PtreeMvsister(nctemp11797);
p =nctemp11799;
}
int nctemp11800 = (p !=0);
int nctemp11804=nctemp11800;
while(nctemp11804)
{{
struct tree* nctemp11810= p;
nctempchar1* nctemp11812=PtreeGetname(nctemp11810);
nctempchar1* nctemp11808= nctemp11812;
struct nctempchar1 *nctemp11815;
static struct nctempchar1 nctemp11816 = {{ 5}, (char*)"expr\0"};
nctemp11815=&nctemp11816;
nctempchar1* nctemp11813= nctemp11815;
int nctemp11817=LibeStrcmp(nctemp11808,nctemp11813);
int nctemp11805 = (nctemp11817 ==1);
if(nctemp11805)
{
struct tree* nctemp11820= p;
nctempchar1* nctemp11822=CodeExpr(nctemp11820);
}
struct tree* nctemp11828= p;
nctempchar1* nctemp11830=PtreeGetname(nctemp11828);
nctempchar1* nctemp11826= nctemp11830;
struct nctempchar1 *nctemp11833;
static struct nctempchar1 nctemp11834 = {{ 6}, (char*)"while\0"};
nctemp11833=&nctemp11834;
nctempchar1* nctemp11831= nctemp11833;
int nctemp11835=LibeStrcmp(nctemp11826,nctemp11831);
int nctemp11823 = (nctemp11835 ==1);
if(nctemp11823)
{
struct tree* nctemp11838= p;
int nctemp11840=CodeWhilestmnt(nctemp11838);
}
struct tree* nctemp11846= p;
nctempchar1* nctemp11848=PtreeGetname(nctemp11846);
nctempchar1* nctemp11844= nctemp11848;
struct nctempchar1 *nctemp11851;
static struct nctempchar1 nctemp11852 = {{ 4}, (char*)"for\0"};
nctemp11851=&nctemp11852;
nctempchar1* nctemp11849= nctemp11851;
int nctemp11853=LibeStrcmp(nctemp11844,nctemp11849);
int nctemp11841 = (nctemp11853 ==1);
if(nctemp11841)
{
struct tree* nctemp11859= p;
struct tree* nctemp11861=PtreeMvchild(nctemp11859);
q =nctemp11861;
struct tree* nctemp11863= q;
struct tree* nctemp11865=PtreeMvsister(nctemp11863);
struct tree* nctemp11867= p;
int nctemp11869=CodeForstmnt(nctemp11867);
}
struct tree* nctemp11875= p;
nctempchar1* nctemp11877=PtreeGetname(nctemp11875);
nctempchar1* nctemp11873= nctemp11877;
struct nctempchar1 *nctemp11880;
static struct nctempchar1 nctemp11881 = {{ 9}, (char*)"parallel\0"};
nctemp11880=&nctemp11881;
nctempchar1* nctemp11878= nctemp11880;
int nctemp11882=LibeStrcmp(nctemp11873,nctemp11878);
int nctemp11870 = (nctemp11882 ==1);
if(nctemp11870)
{
struct tree* nctemp11885= p;
int nctemp11887=CodeParallelstmnt(nctemp11885);
}
struct tree* nctemp11893= p;
nctempchar1* nctemp11895=PtreeGetname(nctemp11893);
nctempchar1* nctemp11891= nctemp11895;
struct nctempchar1 *nctemp11898;
static struct nctempchar1 nctemp11899 = {{ 3}, (char*)"if\0"};
nctemp11898=&nctemp11899;
nctempchar1* nctemp11896= nctemp11898;
int nctemp11900=LibeStrcmp(nctemp11891,nctemp11896);
int nctemp11888 = (nctemp11900 ==1);
if(nctemp11888)
{
struct tree* nctemp11903= p;
int nctemp11905=CodeIfstmnt(nctemp11903);
}
struct tree* nctemp11911= p;
nctempchar1* nctemp11913=PtreeGetname(nctemp11911);
nctempchar1* nctemp11909= nctemp11913;
struct nctempchar1 *nctemp11916;
static struct nctempchar1 nctemp11917 = {{ 7}, (char*)"return\0"};
nctemp11916=&nctemp11917;
nctempchar1* nctemp11914= nctemp11916;
int nctemp11918=LibeStrcmp(nctemp11909,nctemp11914);
int nctemp11906 = (nctemp11918 ==1);
if(nctemp11906)
{
struct tree* nctemp11921= p;
int nctemp11923=CodeReturnstmnt(nctemp11921);
}
struct tree* nctemp11928= p;
struct tree* nctemp11930=PtreeMvsister(nctemp11928);
p =nctemp11930;
}
int nctemp11931 = (p !=0);
nctemp11804=nctemp11931;}struct tree* nctemp11936= sp;
struct nctempchar1 *nctemp11940;
static struct nctempchar1 nctemp11941 = {{ 4}, (char*)"}\n\0"};
nctemp11940=&nctemp11941;
nctempchar1* nctemp11938= nctemp11940;
int nctemp11942=CodeEs(nctemp11936,nctemp11938);
return 1;
}
int CodeStmnt (struct tree* p)
{
struct tree* sp;
sp =p;
struct tree* nctemp11949= p;
struct nctempchar1 *nctemp11953;
static struct nctempchar1 nctemp11954 = {{ 4}, (char*)"{\n\0"};
nctemp11953=&nctemp11954;
nctempchar1* nctemp11951= nctemp11953;
int nctemp11955=CodeEs(nctemp11949,nctemp11951);
struct tree* nctemp11961= p;
nctempchar1* nctemp11963=PtreeGetname(nctemp11961);
nctempchar1* nctemp11959= nctemp11963;
struct nctempchar1 *nctemp11966;
static struct nctempchar1 nctemp11967 = {{ 10}, (char*)"compstmnt\0"};
nctemp11966=&nctemp11967;
nctempchar1* nctemp11964= nctemp11966;
int nctemp11968=LibeStrcmp(nctemp11959,nctemp11964);
int nctemp11956 = (nctemp11968 ==1);
if(nctemp11956)
{
struct tree* nctemp11974= p;
struct tree* nctemp11976=PtreeMvchild(nctemp11974);
p =nctemp11976;
struct tree* nctemp11978= p;
struct symbol* nctemp11982=SymGetltp();
struct symbol* nctemp11980= nctemp11982;
int nctemp11983=CodeDeclarations(nctemp11978,nctemp11980);
struct tree* nctemp11989= p;
nctempchar1* nctemp11991=PtreeGetname(nctemp11989);
nctempchar1* nctemp11987= nctemp11991;
struct nctempchar1 *nctemp11994;
static struct nctempchar1 nctemp11995 = {{ 13}, (char*)"declarations\0"};
nctemp11994=&nctemp11995;
nctempchar1* nctemp11992= nctemp11994;
int nctemp11996=LibeStrcmp(nctemp11987,nctemp11992);
int nctemp11984 = (nctemp11996 ==1);
if(nctemp11984)
{
struct tree* nctemp12002= p;
struct tree* nctemp12004=PtreeMvsister(nctemp12002);
p =nctemp12004;
}
}
int nctemp12005 = (p !=0);
int nctemp12009=nctemp12005;
while(nctemp12009)
{{
struct tree* nctemp12015= p;
nctempchar1* nctemp12017=PtreeGetname(nctemp12015);
nctempchar1* nctemp12013= nctemp12017;
struct nctempchar1 *nctemp12020;
static struct nctempchar1 nctemp12021 = {{ 10}, (char*)"compstmnt\0"};
nctemp12020=&nctemp12021;
nctempchar1* nctemp12018= nctemp12020;
int nctemp12022=LibeStrcmp(nctemp12013,nctemp12018);
int nctemp12010 = (nctemp12022 ==1);
if(nctemp12010)
{
struct tree* nctemp12025= p;
int nctemp12027=CodeCompstmnt(nctemp12025);
}
struct tree* nctemp12033= p;
nctempchar1* nctemp12035=PtreeGetname(nctemp12033);
nctempchar1* nctemp12031= nctemp12035;
struct nctempchar1 *nctemp12038;
static struct nctempchar1 nctemp12039 = {{ 5}, (char*)"expr\0"};
nctemp12038=&nctemp12039;
nctempchar1* nctemp12036= nctemp12038;
int nctemp12040=LibeStrcmp(nctemp12031,nctemp12036);
int nctemp12028 = (nctemp12040 ==1);
if(nctemp12028)
{
struct tree* nctemp12043= p;
nctempchar1* nctemp12045=CodeExpr(nctemp12043);
}
struct tree* nctemp12051= p;
nctempchar1* nctemp12053=PtreeGetname(nctemp12051);
nctempchar1* nctemp12049= nctemp12053;
struct nctempchar1 *nctemp12056;
static struct nctempchar1 nctemp12057 = {{ 6}, (char*)"while\0"};
nctemp12056=&nctemp12057;
nctempchar1* nctemp12054= nctemp12056;
int nctemp12058=LibeStrcmp(nctemp12049,nctemp12054);
int nctemp12046 = (nctemp12058 ==1);
if(nctemp12046)
{
struct tree* nctemp12061= p;
int nctemp12063=CodeWhilestmnt(nctemp12061);
}
struct tree* nctemp12069= p;
nctempchar1* nctemp12071=PtreeGetname(nctemp12069);
nctempchar1* nctemp12067= nctemp12071;
struct nctempchar1 *nctemp12074;
static struct nctempchar1 nctemp12075 = {{ 4}, (char*)"for\0"};
nctemp12074=&nctemp12075;
nctempchar1* nctemp12072= nctemp12074;
int nctemp12076=LibeStrcmp(nctemp12067,nctemp12072);
int nctemp12064 = (nctemp12076 ==1);
if(nctemp12064)
{
struct tree* nctemp12079= p;
int nctemp12081=CodeForstmnt(nctemp12079);
}
struct tree* nctemp12087= p;
nctempchar1* nctemp12089=PtreeGetname(nctemp12087);
nctempchar1* nctemp12085= nctemp12089;
struct nctempchar1 *nctemp12092;
static struct nctempchar1 nctemp12093 = {{ 9}, (char*)"parallel\0"};
nctemp12092=&nctemp12093;
nctempchar1* nctemp12090= nctemp12092;
int nctemp12094=LibeStrcmp(nctemp12085,nctemp12090);
int nctemp12082 = (nctemp12094 ==1);
if(nctemp12082)
{
struct tree* nctemp12097= p;
int nctemp12099=CodeParallelstmnt(nctemp12097);
}
struct tree* nctemp12105= p;
nctempchar1* nctemp12107=PtreeGetname(nctemp12105);
nctempchar1* nctemp12103= nctemp12107;
struct nctempchar1 *nctemp12110;
static struct nctempchar1 nctemp12111 = {{ 3}, (char*)"if\0"};
nctemp12110=&nctemp12111;
nctempchar1* nctemp12108= nctemp12110;
int nctemp12112=LibeStrcmp(nctemp12103,nctemp12108);
int nctemp12100 = (nctemp12112 ==1);
if(nctemp12100)
{
struct tree* nctemp12115= p;
int nctemp12117=CodeIfstmnt(nctemp12115);
}
struct tree* nctemp12123= p;
nctempchar1* nctemp12125=PtreeGetname(nctemp12123);
nctempchar1* nctemp12121= nctemp12125;
struct nctempchar1 *nctemp12128;
static struct nctempchar1 nctemp12129 = {{ 7}, (char*)"return\0"};
nctemp12128=&nctemp12129;
nctempchar1* nctemp12126= nctemp12128;
int nctemp12130=LibeStrcmp(nctemp12121,nctemp12126);
int nctemp12118 = (nctemp12130 ==1);
if(nctemp12118)
{
struct tree* nctemp12133= p;
int nctemp12135=CodeReturnstmnt(nctemp12133);
}
struct tree* nctemp12140= p;
struct tree* nctemp12142=PtreeMvsister(nctemp12140);
p =nctemp12142;
}
int nctemp12143 = (p !=0);
nctemp12009=nctemp12143;}struct tree* nctemp12148= sp;
struct nctempchar1 *nctemp12152;
static struct nctempchar1 nctemp12153 = {{ 4}, (char*)"}\n\0"};
nctemp12152=&nctemp12153;
nctempchar1* nctemp12150= nctemp12152;
int nctemp12154=CodeEs(nctemp12148,nctemp12150);
return 1;
}
int CodeNewdescr (struct tree* p,nctempchar1 *pointer)
{
struct tree* nctemp12157= p;
nctempchar1* nctemp12159= pointer;
int nctemp12162=CodeEs(nctemp12157,nctemp12159);
struct tree* nctemp12164= p;
struct nctempchar1 *nctemp12168;
static struct nctempchar1 nctemp12169 = {{ 2}, (char*)"=\0"};
nctemp12168=&nctemp12169;
nctempchar1* nctemp12166= nctemp12168;
int nctemp12170=CodeEs(nctemp12164,nctemp12166);
struct tree* nctemp12172= p;
struct nctempchar1 *nctemp12176;
static struct nctempchar1 nctemp12177 = {{ 11}, (char*)"RunMalloc(\0"};
nctemp12176=&nctemp12177;
nctempchar1* nctemp12174= nctemp12176;
int nctemp12178=CodeEs(nctemp12172,nctemp12174);
struct tree* nctemp12180= p;
struct nctempchar1 *nctemp12184;
static struct nctempchar1 nctemp12185 = {{ 8}, (char*)"sizeof(\0"};
nctemp12184=&nctemp12185;
nctempchar1* nctemp12182= nctemp12184;
int nctemp12186=CodeEs(nctemp12180,nctemp12182);
struct tree* nctemp12188= p;
nctempchar1* nctemp12190= pointer;
int nctemp12193=CodeEs(nctemp12188,nctemp12190);
struct tree* nctemp12195= p;
struct nctempchar1 *nctemp12199;
static struct nctempchar1 nctemp12200 = {{ 6}, (char*)"));\n\0"};
nctemp12199=&nctemp12200;
nctempchar1* nctemp12197= nctemp12199;
int nctemp12201=CodeEs(nctemp12195,nctemp12197);
return 1;
}
int CodeFdef (struct tree* p)
{
int nctemp12206=CodeGetarch();
int nctemp12203 = (nctemp12206 ==1);
if(nctemp12203)
{
struct tree* nctemp12209= p;
int nctemp12211=CodeFdefcpu(nctemp12209);
}
else{
int nctemp12215=CodeGetarch();
int nctemp12212 = (nctemp12215 ==2);
if(nctemp12212)
{
struct tree* nctemp12224= p;
struct tree* nctemp12226=PtreeMvchild(nctemp12224);
struct tree* nctemp12222= nctemp12226;
nctempchar1* nctemp12227=PtreeGetparallel(nctemp12222);
nctempchar1* nctemp12220= nctemp12227;
struct nctempchar1 *nctemp12230;
static struct nctempchar1 nctemp12231 = {{ 9}, (char*)"parallel\0"};
nctemp12230=&nctemp12231;
nctempchar1* nctemp12228= nctemp12230;
int nctemp12232=LibeStrcmp(nctemp12220,nctemp12228);
int nctemp12217 = (nctemp12232 ==1);
if(nctemp12217)
{
struct tree* nctemp12235= p;
int nctemp12237=CodeFdefgpu(nctemp12235);
struct tree* nctemp12239= p;
int nctemp12241=CodeFdewrappergpu(nctemp12239);
}
else{
struct tree* nctemp12243= p;
int nctemp12245=CodeFdefcpu(nctemp12243);
}
}
else{
int nctemp12249=CodeGetarch();
int nctemp12246 = (nctemp12249 ==3);
if(nctemp12246)
{
struct tree* nctemp12256= p;
nctempchar1* nctemp12258=PtreeGetparallel(nctemp12256);
nctempchar1* nctemp12254= nctemp12258;
struct nctempchar1 *nctemp12261;
static struct nctempchar1 nctemp12262 = {{ 9}, (char*)"parallel\0"};
nctemp12261=&nctemp12262;
nctempchar1* nctemp12259= nctemp12261;
int nctemp12263=LibeStrcmp(nctemp12254,nctemp12259);
int nctemp12251 = (nctemp12263 ==1);
if(nctemp12251)
{
struct tree* nctemp12266= p;
int nctemp12268=CodeFdefgpu(nctemp12266);
struct tree* nctemp12270= p;
int nctemp12272=CodeFdewrappergpu(nctemp12270);
}
else{
struct tree* nctemp12274= p;
int nctemp12276=CodeFdefcpu(nctemp12274);
}
}
}
}
return 1;
}
int CodePreamblecpu ()
{
struct tree* p;
struct nctempchar1 *nctemp12284;
static struct nctempchar1 nctemp12285 = {{ 6}, (char*)"dummy\0"};
nctemp12284=&nctemp12285;
nctempchar1* nctemp12282= nctemp12284;
struct nctempchar1 *nctemp12288;
static struct nctempchar1 nctemp12289 = {{ 6}, (char*)"dummy\0"};
nctemp12288=&nctemp12289;
nctempchar1* nctemp12286= nctemp12288;
struct tree* nctemp12290=PtreeMknode(nctemp12282,nctemp12286);
p =nctemp12290;
struct tree* nctemp12292= p;
int nctemp12294= 1;
int nctemp12296=PtreeSetline(nctemp12292,nctemp12294);
struct tree* nctemp12298= p;
struct nctempchar1 *nctemp12302;
static struct nctempchar1 nctemp12303 = {{ 42}, (char*)"//  Translated by epsc  version today  \n\0"};
nctemp12302=&nctemp12303;
nctempchar1* nctemp12300= nctemp12302;
int nctemp12304=CodeEs(nctemp12298,nctemp12300);
struct tree* nctemp12306= p;
int nctemp12308= 2;
int nctemp12310=PtreeSetline(nctemp12306,nctemp12308);
struct tree* nctemp12312= p;
int nctemp12314= 3;
int nctemp12316=PtreeSetline(nctemp12312,nctemp12314);
struct tree* nctemp12318= p;
int nctemp12320= 4;
int nctemp12322=PtreeSetline(nctemp12318,nctemp12320);
struct tree* nctemp12324= p;
struct nctempchar1 *nctemp12328;
static struct nctempchar1 nctemp12329 = {{ 22}, (char*)"#include <stddef.h>\n\0"};
nctemp12328=&nctemp12329;
nctempchar1* nctemp12326= nctemp12328;
int nctemp12330=CodeEs(nctemp12324,nctemp12326);
struct tree* nctemp12332= p;
struct nctempchar1 *nctemp12336;
static struct nctempchar1 nctemp12337 = {{ 21}, (char*)"#include <stdio.h>\n\0"};
nctemp12336=&nctemp12337;
nctempchar1* nctemp12334= nctemp12336;
int nctemp12338=CodeEs(nctemp12332,nctemp12334);
struct tree* nctemp12340= p;
struct nctempchar1 *nctemp12344;
static struct nctempchar1 nctemp12345 = {{ 22}, (char*)"#include <assert.h>\n\0"};
nctemp12344=&nctemp12345;
nctempchar1* nctemp12342= nctemp12344;
int nctemp12346=CodeEs(nctemp12340,nctemp12342);
struct tree* nctemp12348= p;
struct nctempchar1 *nctemp12352;
static struct nctempchar1 nctemp12353 = {{ 48}, (char*)"typedef struct { float r; float i;} complex; \n\0"};
nctemp12352=&nctemp12353;
nctempchar1* nctemp12350= nctemp12352;
int nctemp12354=CodeEs(nctemp12348,nctemp12350);
struct tree* nctemp12356= p;
int nctemp12358= 3;
int nctemp12360=PtreeSetline(nctemp12356,nctemp12358);
struct tree* nctemp12362= p;
struct nctempchar1 *nctemp12366;
static struct nctempchar1 nctemp12367 = {{ 68}, (char*)"typedef struct nctempfloat1 { int d[1]; float *a;} nctempfloat1; \n\0"};
nctemp12366=&nctemp12367;
nctempchar1* nctemp12364= nctemp12366;
int nctemp12368=CodeEs(nctemp12362,nctemp12364);
struct tree* nctemp12370= p;
int nctemp12372= 5;
int nctemp12374=PtreeSetline(nctemp12370,nctemp12372);
struct tree* nctemp12376= p;
struct nctempchar1 *nctemp12380;
static struct nctempchar1 nctemp12381 = {{ 62}, (char*)"typedef struct nctempint1 { int d[1]; int *a;} nctempint1; \n\0"};
nctemp12380=&nctemp12381;
nctempchar1* nctemp12378= nctemp12380;
int nctemp12382=CodeEs(nctemp12376,nctemp12378);
struct tree* nctemp12384= p;
int nctemp12386= 7;
int nctemp12388=PtreeSetline(nctemp12384,nctemp12386);
struct tree* nctemp12390= p;
struct nctempchar1 *nctemp12394;
static struct nctempchar1 nctemp12395 = {{ 65}, (char*)"typedef struct nctempchar1 { int d[1]; char *a;} nctempchar1; \n\0"};
nctemp12394=&nctemp12395;
nctempchar1* nctemp12392= nctemp12394;
int nctemp12396=CodeEs(nctemp12390,nctemp12392);
struct tree* nctemp12398= p;
int nctemp12400= 7;
int nctemp12402=PtreeSetline(nctemp12398,nctemp12400);
struct tree* nctemp12404= p;
struct nctempchar1 *nctemp12408;
static struct nctempchar1 nctemp12409 = {{ 74}, (char*)"typedef struct nctempcomplex1 { int d[1]; complex *a;} nctempcomplex1; \n\0"};
nctemp12408=&nctemp12409;
nctempchar1* nctemp12406= nctemp12408;
int nctemp12410=CodeEs(nctemp12404,nctemp12406);
struct tree* nctemp12412= p;
int nctemp12414= 8;
int nctemp12416=PtreeSetline(nctemp12412,nctemp12414);
int nctemp12420=CodeArraycheck();
int nctemp12417 = (nctemp12420 ==1);
if(nctemp12417)
{
struct tree* nctemp12423= p;
struct nctempchar1 *nctemp12427;
static struct nctempchar1 nctemp12428 = {{ 55}, (char*)"static struct nctempchar1 nctempstringx = {0, NULL};\n\0"};
nctemp12427=&nctemp12428;
nctempchar1* nctemp12425= nctemp12427;
int nctemp12429=CodeEs(nctemp12423,nctemp12425);
struct tree* nctemp12431= p;
struct nctempchar1 *nctemp12435;
static struct nctempchar1 nctemp12436 = {{ 60}, (char*)"static struct nctempchar1 *nctempstring = &nctempstringx;\n\0"};
nctemp12435=&nctemp12436;
nctempchar1* nctemp12433= nctemp12435;
int nctemp12437=CodeEs(nctemp12431,nctemp12433);
struct tree* nctemp12439= p;
int nctemp12441= 8;
int nctemp12443=PtreeSetline(nctemp12439,nctemp12441);
}
struct tree* nctemp12445= p;
struct nctempchar1 *nctemp12449;
static struct nctempchar1 nctemp12450 = {{ 68}, (char*)"typedef struct nctempfloat2 { int d[2]; float *a;} nctempfloat2; \n\0"};
nctemp12449=&nctemp12450;
nctempchar1* nctemp12447= nctemp12449;
int nctemp12451=CodeEs(nctemp12445,nctemp12447);
struct tree* nctemp12453= p;
int nctemp12455= 10;
int nctemp12457=PtreeSetline(nctemp12453,nctemp12455);
struct tree* nctemp12459= p;
struct nctempchar1 *nctemp12463;
static struct nctempchar1 nctemp12464 = {{ 62}, (char*)"typedef struct nctempint2 { int d[2]; int *a;} nctempint2; \n\0"};
nctemp12463=&nctemp12464;
nctempchar1* nctemp12461= nctemp12463;
int nctemp12465=CodeEs(nctemp12459,nctemp12461);
struct tree* nctemp12467= p;
int nctemp12469= 10;
int nctemp12471=PtreeSetline(nctemp12467,nctemp12469);
struct tree* nctemp12473= p;
struct nctempchar1 *nctemp12477;
static struct nctempchar1 nctemp12478 = {{ 65}, (char*)"typedef struct nctempchar2 { int d[2]; char *a;} nctempchar2; \n\0"};
nctemp12477=&nctemp12478;
nctempchar1* nctemp12475= nctemp12477;
int nctemp12479=CodeEs(nctemp12473,nctemp12475);
struct tree* nctemp12481= p;
int nctemp12483= 12;
int nctemp12485=PtreeSetline(nctemp12481,nctemp12483);
struct tree* nctemp12487= p;
struct nctempchar1 *nctemp12491;
static struct nctempchar1 nctemp12492 = {{ 74}, (char*)"typedef struct nctempcomplex2 { int d[2]; complex *a;} nctempcomplex2; \n\0"};
nctemp12491=&nctemp12492;
nctempchar1* nctemp12489= nctemp12491;
int nctemp12493=CodeEs(nctemp12487,nctemp12489);
struct tree* nctemp12495= p;
int nctemp12497= 13;
int nctemp12499=PtreeSetline(nctemp12495,nctemp12497);
struct tree* nctemp12501= p;
struct nctempchar1 *nctemp12505;
static struct nctempchar1 nctemp12506 = {{ 68}, (char*)"typedef struct nctempfloat3 { int d[3]; float *a;} nctempfloat3; \n\0"};
nctemp12505=&nctemp12506;
nctempchar1* nctemp12503= nctemp12505;
int nctemp12507=CodeEs(nctemp12501,nctemp12503);
struct tree* nctemp12509= p;
int nctemp12511= 14;
int nctemp12513=PtreeSetline(nctemp12509,nctemp12511);
struct tree* nctemp12515= p;
struct nctempchar1 *nctemp12519;
static struct nctempchar1 nctemp12520 = {{ 62}, (char*)"typedef struct nctempint3 { int d[3]; int *a;} nctempint3; \n\0"};
nctemp12519=&nctemp12520;
nctempchar1* nctemp12517= nctemp12519;
int nctemp12521=CodeEs(nctemp12515,nctemp12517);
struct tree* nctemp12523= p;
int nctemp12525= 15;
int nctemp12527=PtreeSetline(nctemp12523,nctemp12525);
struct tree* nctemp12529= p;
struct nctempchar1 *nctemp12533;
static struct nctempchar1 nctemp12534 = {{ 65}, (char*)"typedef struct nctempchar3 { int d[3]; char *a;} nctempchar3; \n\0"};
nctemp12533=&nctemp12534;
nctempchar1* nctemp12531= nctemp12533;
int nctemp12535=CodeEs(nctemp12529,nctemp12531);
struct tree* nctemp12537= p;
int nctemp12539= 16;
int nctemp12541=PtreeSetline(nctemp12537,nctemp12539);
struct tree* nctemp12543= p;
struct nctempchar1 *nctemp12547;
static struct nctempchar1 nctemp12548 = {{ 74}, (char*)"typedef struct nctempcomplex3 { int d[3]; complex *a;} nctempcomplex3; \n\0"};
nctemp12547=&nctemp12548;
nctempchar1* nctemp12545= nctemp12547;
int nctemp12549=CodeEs(nctemp12543,nctemp12545);
struct tree* nctemp12551= p;
int nctemp12553= 17;
int nctemp12555=PtreeSetline(nctemp12551,nctemp12553);
struct tree* nctemp12557= p;
struct nctempchar1 *nctemp12561;
static struct nctempchar1 nctemp12562 = {{ 68}, (char*)"typedef struct nctempfloat4 { int d[4]; float *a;} nctempfloat4; \n\0"};
nctemp12561=&nctemp12562;
nctempchar1* nctemp12559= nctemp12561;
int nctemp12563=CodeEs(nctemp12557,nctemp12559);
struct tree* nctemp12565= p;
int nctemp12567= 18;
int nctemp12569=PtreeSetline(nctemp12565,nctemp12567);
struct tree* nctemp12571= p;
struct nctempchar1 *nctemp12575;
static struct nctempchar1 nctemp12576 = {{ 62}, (char*)"typedef struct nctempint4 { int d[4]; int *a;} nctempint4; \n\0"};
nctemp12575=&nctemp12576;
nctempchar1* nctemp12573= nctemp12575;
int nctemp12577=CodeEs(nctemp12571,nctemp12573);
struct tree* nctemp12579= p;
int nctemp12581= 19;
int nctemp12583=PtreeSetline(nctemp12579,nctemp12581);
struct tree* nctemp12585= p;
struct nctempchar1 *nctemp12589;
static struct nctempchar1 nctemp12590 = {{ 65}, (char*)"typedef struct nctempchar4 { int d[4]; char *a;} nctempchar4; \n\0"};
nctemp12589=&nctemp12590;
nctempchar1* nctemp12587= nctemp12589;
int nctemp12591=CodeEs(nctemp12585,nctemp12587);
struct tree* nctemp12593= p;
int nctemp12595= 20;
int nctemp12597=PtreeSetline(nctemp12593,nctemp12595);
struct tree* nctemp12599= p;
struct nctempchar1 *nctemp12603;
static struct nctempchar1 nctemp12604 = {{ 74}, (char*)"typedef struct nctempcomplex4 { int d[4]; complex *a;} nctempcomplex4; \n\0"};
nctemp12603=&nctemp12604;
nctempchar1* nctemp12601= nctemp12603;
int nctemp12605=CodeEs(nctemp12599,nctemp12601);
struct tree* nctemp12607= p;
struct nctempchar1 *nctemp12611;
static struct nctempchar1 nctemp12612 = {{ 22}, (char*)"#include <stdlib.h>\n\0"};
nctemp12611=&nctemp12612;
nctempchar1* nctemp12609= nctemp12611;
int nctemp12613=CodeEs(nctemp12607,nctemp12609);
struct tree* nctemp12615= p;
struct nctempchar1 *nctemp12619;
static struct nctempchar1 nctemp12620 = {{ 22}, (char*)"#include <string.h>\n\0"};
nctemp12619=&nctemp12620;
nctempchar1* nctemp12617= nctemp12619;
int nctemp12621=CodeEs(nctemp12615,nctemp12617);
struct tree* nctemp12623= p;
struct nctempchar1 *nctemp12627;
static struct nctempchar1 nctemp12628 = {{ 27}, (char*)"void *RunMalloc(int n); \n\0"};
nctemp12627=&nctemp12628;
nctempchar1* nctemp12625= nctemp12627;
int nctemp12629=CodeEs(nctemp12623,nctemp12625);
struct tree* nctemp12631= p;
struct nctempchar1 *nctemp12635;
static struct nctempchar1 nctemp12636 = {{ 25}, (char*)"int RunFree(void *n); \n\0"};
nctemp12635=&nctemp12636;
nctempchar1* nctemp12633= nctemp12635;
int nctemp12637=CodeEs(nctemp12631,nctemp12633);
return 1;
}
int CodePreamblecuda ()
{
struct tree* p;
struct nctempchar1 *nctemp12645;
static struct nctempchar1 nctemp12646 = {{ 6}, (char*)"dummy\0"};
nctemp12645=&nctemp12646;
nctempchar1* nctemp12643= nctemp12645;
struct nctempchar1 *nctemp12649;
static struct nctempchar1 nctemp12650 = {{ 6}, (char*)"dummy\0"};
nctemp12649=&nctemp12650;
nctempchar1* nctemp12647= nctemp12649;
struct tree* nctemp12651=PtreeMknode(nctemp12643,nctemp12647);
p =nctemp12651;
struct tree* nctemp12653= p;
int nctemp12655= 1;
int nctemp12657=PtreeSetline(nctemp12653,nctemp12655);
struct tree* nctemp12659= p;
struct nctempchar1 *nctemp12663;
static struct nctempchar1 nctemp12664 = {{ 50}, (char*)"//  Translated by epsc  version December 2021  \n\0"};
nctemp12663=&nctemp12664;
nctempchar1* nctemp12661= nctemp12663;
int nctemp12665=CodeEs(nctemp12659,nctemp12661);
struct tree* nctemp12667= p;
int nctemp12669= 2;
int nctemp12671=PtreeSetline(nctemp12667,nctemp12669);
struct tree* nctemp12673= p;
int nctemp12675= 3;
int nctemp12677=PtreeSetline(nctemp12673,nctemp12675);
struct tree* nctemp12679= p;
struct nctempchar1 *nctemp12683;
static struct nctempchar1 nctemp12684 = {{ 17}, (char*)"extern \"C\" {\n\0"};
nctemp12683=&nctemp12684;
nctempchar1* nctemp12681= nctemp12683;
int nctemp12685=CodeEs(nctemp12679,nctemp12681);
struct tree* nctemp12687= p;
struct nctempchar1 *nctemp12691;
static struct nctempchar1 nctemp12692 = {{ 48}, (char*)"typedef struct { float r; float i;} complex; \n\0"};
nctemp12691=&nctemp12692;
nctempchar1* nctemp12689= nctemp12691;
int nctemp12693=CodeEs(nctemp12687,nctemp12689);
struct tree* nctemp12695= p;
int nctemp12697= 3;
int nctemp12699=PtreeSetline(nctemp12695,nctemp12697);
struct tree* nctemp12701= p;
struct nctempchar1 *nctemp12705;
static struct nctempchar1 nctemp12706 = {{ 68}, (char*)"typedef struct nctempfloat1 { int d[1]; float *a;} nctempfloat1; \n\0"};
nctemp12705=&nctemp12706;
nctempchar1* nctemp12703= nctemp12705;
int nctemp12707=CodeEs(nctemp12701,nctemp12703);
struct tree* nctemp12709= p;
int nctemp12711= 5;
int nctemp12713=PtreeSetline(nctemp12709,nctemp12711);
struct tree* nctemp12715= p;
struct nctempchar1 *nctemp12719;
static struct nctempchar1 nctemp12720 = {{ 62}, (char*)"typedef struct nctempint1 { int d[1]; int *a;} nctempint1; \n\0"};
nctemp12719=&nctemp12720;
nctempchar1* nctemp12717= nctemp12719;
int nctemp12721=CodeEs(nctemp12715,nctemp12717);
struct tree* nctemp12723= p;
int nctemp12725= 7;
int nctemp12727=PtreeSetline(nctemp12723,nctemp12725);
struct tree* nctemp12729= p;
struct nctempchar1 *nctemp12733;
static struct nctempchar1 nctemp12734 = {{ 65}, (char*)"typedef struct nctempchar1 { int d[1]; char *a;} nctempchar1; \n\0"};
nctemp12733=&nctemp12734;
nctempchar1* nctemp12731= nctemp12733;
int nctemp12735=CodeEs(nctemp12729,nctemp12731);
struct tree* nctemp12737= p;
int nctemp12739= 7;
int nctemp12741=PtreeSetline(nctemp12737,nctemp12739);
struct tree* nctemp12743= p;
struct nctempchar1 *nctemp12747;
static struct nctempchar1 nctemp12748 = {{ 74}, (char*)"typedef struct nctempcomplex1 { int d[1]; complex *a;} nctempcomplex1; \n\0"};
nctemp12747=&nctemp12748;
nctempchar1* nctemp12745= nctemp12747;
int nctemp12749=CodeEs(nctemp12743,nctemp12745);
struct tree* nctemp12751= p;
int nctemp12753= 8;
int nctemp12755=PtreeSetline(nctemp12751,nctemp12753);
int nctemp12759=CodeArraycheck();
int nctemp12756 = (nctemp12759 ==1);
if(nctemp12756)
{
struct tree* nctemp12762= p;
struct nctempchar1 *nctemp12766;
static struct nctempchar1 nctemp12767 = {{ 55}, (char*)"static struct nctempchar1 nctempstringx = {0, NULL};\n\0"};
nctemp12766=&nctemp12767;
nctempchar1* nctemp12764= nctemp12766;
int nctemp12768=CodeEs(nctemp12762,nctemp12764);
struct tree* nctemp12770= p;
struct nctempchar1 *nctemp12774;
static struct nctempchar1 nctemp12775 = {{ 60}, (char*)"static struct nctempchar1 *nctempstring = &nctempstringx;\n\0"};
nctemp12774=&nctemp12775;
nctempchar1* nctemp12772= nctemp12774;
int nctemp12776=CodeEs(nctemp12770,nctemp12772);
struct tree* nctemp12778= p;
int nctemp12780= 8;
int nctemp12782=PtreeSetline(nctemp12778,nctemp12780);
}
struct tree* nctemp12784= p;
struct nctempchar1 *nctemp12788;
static struct nctempchar1 nctemp12789 = {{ 68}, (char*)"typedef struct nctempfloat2 { int d[2]; float *a;} nctempfloat2; \n\0"};
nctemp12788=&nctemp12789;
nctempchar1* nctemp12786= nctemp12788;
int nctemp12790=CodeEs(nctemp12784,nctemp12786);
struct tree* nctemp12792= p;
int nctemp12794= 10;
int nctemp12796=PtreeSetline(nctemp12792,nctemp12794);
struct tree* nctemp12798= p;
struct nctempchar1 *nctemp12802;
static struct nctempchar1 nctemp12803 = {{ 62}, (char*)"typedef struct nctempint2 { int d[2]; int *a;} nctempint2; \n\0"};
nctemp12802=&nctemp12803;
nctempchar1* nctemp12800= nctemp12802;
int nctemp12804=CodeEs(nctemp12798,nctemp12800);
struct tree* nctemp12806= p;
int nctemp12808= 10;
int nctemp12810=PtreeSetline(nctemp12806,nctemp12808);
struct tree* nctemp12812= p;
struct nctempchar1 *nctemp12816;
static struct nctempchar1 nctemp12817 = {{ 65}, (char*)"typedef struct nctempchar2 { int d[2]; char *a;} nctempchar2; \n\0"};
nctemp12816=&nctemp12817;
nctempchar1* nctemp12814= nctemp12816;
int nctemp12818=CodeEs(nctemp12812,nctemp12814);
struct tree* nctemp12820= p;
int nctemp12822= 12;
int nctemp12824=PtreeSetline(nctemp12820,nctemp12822);
struct tree* nctemp12826= p;
struct nctempchar1 *nctemp12830;
static struct nctempchar1 nctemp12831 = {{ 74}, (char*)"typedef struct nctempcomplex2 { int d[2]; complex *a;} nctempcomplex2; \n\0"};
nctemp12830=&nctemp12831;
nctempchar1* nctemp12828= nctemp12830;
int nctemp12832=CodeEs(nctemp12826,nctemp12828);
struct tree* nctemp12834= p;
int nctemp12836= 13;
int nctemp12838=PtreeSetline(nctemp12834,nctemp12836);
struct tree* nctemp12840= p;
struct nctempchar1 *nctemp12844;
static struct nctempchar1 nctemp12845 = {{ 68}, (char*)"typedef struct nctempfloat3 { int d[3]; float *a;} nctempfloat3; \n\0"};
nctemp12844=&nctemp12845;
nctempchar1* nctemp12842= nctemp12844;
int nctemp12846=CodeEs(nctemp12840,nctemp12842);
struct tree* nctemp12848= p;
int nctemp12850= 14;
int nctemp12852=PtreeSetline(nctemp12848,nctemp12850);
struct tree* nctemp12854= p;
struct nctempchar1 *nctemp12858;
static struct nctempchar1 nctemp12859 = {{ 62}, (char*)"typedef struct nctempint3 { int d[3]; int *a;} nctempint3; \n\0"};
nctemp12858=&nctemp12859;
nctempchar1* nctemp12856= nctemp12858;
int nctemp12860=CodeEs(nctemp12854,nctemp12856);
struct tree* nctemp12862= p;
int nctemp12864= 15;
int nctemp12866=PtreeSetline(nctemp12862,nctemp12864);
struct tree* nctemp12868= p;
struct nctempchar1 *nctemp12872;
static struct nctempchar1 nctemp12873 = {{ 65}, (char*)"typedef struct nctempchar3 { int d[3]; char *a;} nctempchar3; \n\0"};
nctemp12872=&nctemp12873;
nctempchar1* nctemp12870= nctemp12872;
int nctemp12874=CodeEs(nctemp12868,nctemp12870);
struct tree* nctemp12876= p;
int nctemp12878= 16;
int nctemp12880=PtreeSetline(nctemp12876,nctemp12878);
struct tree* nctemp12882= p;
struct nctempchar1 *nctemp12886;
static struct nctempchar1 nctemp12887 = {{ 74}, (char*)"typedef struct nctempcomplex3 { int d[3]; complex *a;} nctempcomplex3; \n\0"};
nctemp12886=&nctemp12887;
nctempchar1* nctemp12884= nctemp12886;
int nctemp12888=CodeEs(nctemp12882,nctemp12884);
struct tree* nctemp12890= p;
int nctemp12892= 17;
int nctemp12894=PtreeSetline(nctemp12890,nctemp12892);
struct tree* nctemp12896= p;
struct nctempchar1 *nctemp12900;
static struct nctempchar1 nctemp12901 = {{ 68}, (char*)"typedef struct nctempfloat4 { int d[4]; float *a;} nctempfloat4; \n\0"};
nctemp12900=&nctemp12901;
nctempchar1* nctemp12898= nctemp12900;
int nctemp12902=CodeEs(nctemp12896,nctemp12898);
struct tree* nctemp12904= p;
int nctemp12906= 18;
int nctemp12908=PtreeSetline(nctemp12904,nctemp12906);
struct tree* nctemp12910= p;
struct nctempchar1 *nctemp12914;
static struct nctempchar1 nctemp12915 = {{ 62}, (char*)"typedef struct nctempint4 { int d[4]; int *a;} nctempint4; \n\0"};
nctemp12914=&nctemp12915;
nctempchar1* nctemp12912= nctemp12914;
int nctemp12916=CodeEs(nctemp12910,nctemp12912);
struct tree* nctemp12918= p;
int nctemp12920= 19;
int nctemp12922=PtreeSetline(nctemp12918,nctemp12920);
struct tree* nctemp12924= p;
struct nctempchar1 *nctemp12928;
static struct nctempchar1 nctemp12929 = {{ 65}, (char*)"typedef struct nctempchar4 { int d[4]; char *a;} nctempchar4; \n\0"};
nctemp12928=&nctemp12929;
nctempchar1* nctemp12926= nctemp12928;
int nctemp12930=CodeEs(nctemp12924,nctemp12926);
struct tree* nctemp12932= p;
int nctemp12934= 20;
int nctemp12936=PtreeSetline(nctemp12932,nctemp12934);
struct tree* nctemp12938= p;
struct nctempchar1 *nctemp12942;
static struct nctempchar1 nctemp12943 = {{ 74}, (char*)"typedef struct nctempcomplex4 { int d[4]; complex *a;} nctempcomplex4; \n\0"};
nctemp12942=&nctemp12943;
nctempchar1* nctemp12940= nctemp12942;
int nctemp12944=CodeEs(nctemp12938,nctemp12940);
struct tree* nctemp12946= p;
struct nctempchar1 *nctemp12950;
static struct nctempchar1 nctemp12951 = {{ 21}, (char*)"#include <stdio.h>\n\0"};
nctemp12950=&nctemp12951;
nctempchar1* nctemp12948= nctemp12950;
int nctemp12952=CodeEs(nctemp12946,nctemp12948);
struct tree* nctemp12954= p;
struct nctempchar1 *nctemp12958;
static struct nctempchar1 nctemp12959 = {{ 22}, (char*)"#include <stdlib.h>\n\0"};
nctemp12958=&nctemp12959;
nctempchar1* nctemp12956= nctemp12958;
int nctemp12960=CodeEs(nctemp12954,nctemp12956);
struct tree* nctemp12962= p;
struct nctempchar1 *nctemp12966;
static struct nctempchar1 nctemp12967 = {{ 22}, (char*)"#include <string.h>\n\0"};
nctemp12966=&nctemp12967;
nctempchar1* nctemp12964= nctemp12966;
int nctemp12968=CodeEs(nctemp12962,nctemp12964);
struct tree* nctemp12970= p;
struct nctempchar1 *nctemp12974;
static struct nctempchar1 nctemp12975 = {{ 22}, (char*)"#include <assert.h>\n\0"};
nctemp12974=&nctemp12975;
nctempchar1* nctemp12972= nctemp12974;
int nctemp12976=CodeEs(nctemp12970,nctemp12972);
struct tree* nctemp12978= p;
struct nctempchar1 *nctemp12982;
static struct nctempchar1 nctemp12983 = {{ 3}, (char*)"\n\0"};
nctemp12982=&nctemp12983;
nctempchar1* nctemp12980= nctemp12982;
int nctemp12984=CodeEs(nctemp12978,nctemp12980);
struct tree* nctemp12986= p;
struct nctempchar1 *nctemp12990;
static struct nctempchar1 nctemp12991 = {{ 23}, (char*)"void *GpuNew(int n);\n\0"};
nctemp12990=&nctemp12991;
nctempchar1* nctemp12988= nctemp12990;
int nctemp12992=CodeEs(nctemp12986,nctemp12988);
struct tree* nctemp12994= p;
struct nctempchar1 *nctemp12998;
static struct nctempchar1 nctemp12999 = {{ 28}, (char*)"void *GpuDelete(void *f);\n\0"};
nctemp12998=&nctemp12999;
nctempchar1* nctemp12996= nctemp12998;
int nctemp13000=CodeEs(nctemp12994,nctemp12996);
struct tree* nctemp13002= p;
struct nctempchar1 *nctemp13006;
static struct nctempchar1 nctemp13007 = {{ 20}, (char*)"void *GpuError();\n\0"};
nctemp13006=&nctemp13007;
nctempchar1* nctemp13004= nctemp13006;
int nctemp13008=CodeEs(nctemp13002,nctemp13004);
struct tree* nctemp13010= p;
struct nctempchar1 *nctemp13014;
static struct nctempchar1 nctemp13015 = {{ 26}, (char*)"void *RunMalloc(int n);\n\0"};
nctemp13014=&nctemp13015;
nctempchar1* nctemp13012= nctemp13014;
int nctemp13016=CodeEs(nctemp13010,nctemp13012);
struct tree* nctemp13018= p;
struct nctempchar1 *nctemp13022;
static struct nctempchar1 nctemp13023 = {{ 24}, (char*)"int RunFree(void * );\n\0"};
nctemp13022=&nctemp13023;
nctempchar1* nctemp13020= nctemp13022;
int nctemp13024=CodeEs(nctemp13018,nctemp13020);
struct tree* nctemp13026= p;
struct nctempchar1 *nctemp13030;
static struct nctempchar1 nctemp13031 = {{ 17}, (char*)"int RunSync();\n\0"};
nctemp13030=&nctemp13031;
nctempchar1* nctemp13028= nctemp13030;
int nctemp13032=CodeEs(nctemp13026,nctemp13028);
struct tree* nctemp13034= p;
struct nctempchar1 *nctemp13038;
static struct nctempchar1 nctemp13039 = {{ 18}, (char*)"int RunGetnt();\n\0"};
nctemp13038=&nctemp13039;
nctempchar1* nctemp13036= nctemp13038;
int nctemp13040=CodeEs(nctemp13034,nctemp13036);
struct tree* nctemp13042= p;
struct nctempchar1 *nctemp13046;
static struct nctempchar1 nctemp13047 = {{ 18}, (char*)"int RunGetnb();\n\0"};
nctemp13046=&nctemp13047;
nctempchar1* nctemp13044= nctemp13046;
int nctemp13048=CodeEs(nctemp13042,nctemp13044);
return 1;
}
int CodePreamblehip ()
{
struct tree* p;
struct nctempchar1 *nctemp13056;
static struct nctempchar1 nctemp13057 = {{ 6}, (char*)"dummy\0"};
nctemp13056=&nctemp13057;
nctempchar1* nctemp13054= nctemp13056;
struct nctempchar1 *nctemp13060;
static struct nctempchar1 nctemp13061 = {{ 6}, (char*)"dummy\0"};
nctemp13060=&nctemp13061;
nctempchar1* nctemp13058= nctemp13060;
struct tree* nctemp13062=PtreeMknode(nctemp13054,nctemp13058);
p =nctemp13062;
struct tree* nctemp13064= p;
int nctemp13066= 1;
int nctemp13068=PtreeSetline(nctemp13064,nctemp13066);
struct tree* nctemp13070= p;
struct nctempchar1 *nctemp13074;
static struct nctempchar1 nctemp13075 = {{ 50}, (char*)"//  Translated by epsc  version December 2021  \n\0"};
nctemp13074=&nctemp13075;
nctempchar1* nctemp13072= nctemp13074;
int nctemp13076=CodeEs(nctemp13070,nctemp13072);
struct tree* nctemp13078= p;
int nctemp13080= 2;
int nctemp13082=PtreeSetline(nctemp13078,nctemp13080);
struct tree* nctemp13084= p;
int nctemp13086= 3;
int nctemp13088=PtreeSetline(nctemp13084,nctemp13086);
struct tree* nctemp13090= p;
struct nctempchar1 *nctemp13094;
static struct nctempchar1 nctemp13095 = {{ 48}, (char*)"typedef struct { float r; float i;} complex; \n\0"};
nctemp13094=&nctemp13095;
nctempchar1* nctemp13092= nctemp13094;
int nctemp13096=CodeEs(nctemp13090,nctemp13092);
struct tree* nctemp13098= p;
int nctemp13100= 3;
int nctemp13102=PtreeSetline(nctemp13098,nctemp13100);
struct tree* nctemp13104= p;
struct nctempchar1 *nctemp13108;
static struct nctempchar1 nctemp13109 = {{ 68}, (char*)"typedef struct nctempfloat1 { int d[1]; float *a;} nctempfloat1; \n\0"};
nctemp13108=&nctemp13109;
nctempchar1* nctemp13106= nctemp13108;
int nctemp13110=CodeEs(nctemp13104,nctemp13106);
struct tree* nctemp13112= p;
int nctemp13114= 5;
int nctemp13116=PtreeSetline(nctemp13112,nctemp13114);
struct tree* nctemp13118= p;
struct nctempchar1 *nctemp13122;
static struct nctempchar1 nctemp13123 = {{ 62}, (char*)"typedef struct nctempint1 { int d[1]; int *a;} nctempint1; \n\0"};
nctemp13122=&nctemp13123;
nctempchar1* nctemp13120= nctemp13122;
int nctemp13124=CodeEs(nctemp13118,nctemp13120);
struct tree* nctemp13126= p;
int nctemp13128= 7;
int nctemp13130=PtreeSetline(nctemp13126,nctemp13128);
struct tree* nctemp13132= p;
struct nctempchar1 *nctemp13136;
static struct nctempchar1 nctemp13137 = {{ 65}, (char*)"typedef struct nctempchar1 { int d[1]; char *a;} nctempchar1; \n\0"};
nctemp13136=&nctemp13137;
nctempchar1* nctemp13134= nctemp13136;
int nctemp13138=CodeEs(nctemp13132,nctemp13134);
struct tree* nctemp13140= p;
int nctemp13142= 7;
int nctemp13144=PtreeSetline(nctemp13140,nctemp13142);
struct tree* nctemp13146= p;
struct nctempchar1 *nctemp13150;
static struct nctempchar1 nctemp13151 = {{ 74}, (char*)"typedef struct nctempcomplex1 { int d[1]; complex *a;} nctempcomplex1; \n\0"};
nctemp13150=&nctemp13151;
nctempchar1* nctemp13148= nctemp13150;
int nctemp13152=CodeEs(nctemp13146,nctemp13148);
struct tree* nctemp13154= p;
int nctemp13156= 8;
int nctemp13158=PtreeSetline(nctemp13154,nctemp13156);
int nctemp13162=CodeArraycheck();
int nctemp13159 = (nctemp13162 ==1);
if(nctemp13159)
{
struct tree* nctemp13165= p;
struct nctempchar1 *nctemp13169;
static struct nctempchar1 nctemp13170 = {{ 54}, (char*)"static struct nctempchar1 nctempstring = {0, NULL};\n\0"};
nctemp13169=&nctemp13170;
nctempchar1* nctemp13167= nctemp13169;
int nctemp13171=CodeEs(nctemp13165,nctemp13167);
struct tree* nctemp13173= p;
int nctemp13175= 8;
int nctemp13177=PtreeSetline(nctemp13173,nctemp13175);
}
struct tree* nctemp13179= p;
struct nctempchar1 *nctemp13183;
static struct nctempchar1 nctemp13184 = {{ 68}, (char*)"typedef struct nctempfloat2 { int d[2]; float *a;} nctempfloat2; \n\0"};
nctemp13183=&nctemp13184;
nctempchar1* nctemp13181= nctemp13183;
int nctemp13185=CodeEs(nctemp13179,nctemp13181);
struct tree* nctemp13187= p;
int nctemp13189= 10;
int nctemp13191=PtreeSetline(nctemp13187,nctemp13189);
struct tree* nctemp13193= p;
struct nctempchar1 *nctemp13197;
static struct nctempchar1 nctemp13198 = {{ 62}, (char*)"typedef struct nctempint2 { int d[2]; int *a;} nctempint2; \n\0"};
nctemp13197=&nctemp13198;
nctempchar1* nctemp13195= nctemp13197;
int nctemp13199=CodeEs(nctemp13193,nctemp13195);
struct tree* nctemp13201= p;
int nctemp13203= 10;
int nctemp13205=PtreeSetline(nctemp13201,nctemp13203);
struct tree* nctemp13207= p;
struct nctempchar1 *nctemp13211;
static struct nctempchar1 nctemp13212 = {{ 65}, (char*)"typedef struct nctempchar2 { int d[2]; char *a;} nctempchar2; \n\0"};
nctemp13211=&nctemp13212;
nctempchar1* nctemp13209= nctemp13211;
int nctemp13213=CodeEs(nctemp13207,nctemp13209);
struct tree* nctemp13215= p;
int nctemp13217= 12;
int nctemp13219=PtreeSetline(nctemp13215,nctemp13217);
struct tree* nctemp13221= p;
struct nctempchar1 *nctemp13225;
static struct nctempchar1 nctemp13226 = {{ 74}, (char*)"typedef struct nctempcomplex2 { int d[2]; complex *a;} nctempcomplex2; \n\0"};
nctemp13225=&nctemp13226;
nctempchar1* nctemp13223= nctemp13225;
int nctemp13227=CodeEs(nctemp13221,nctemp13223);
struct tree* nctemp13229= p;
int nctemp13231= 13;
int nctemp13233=PtreeSetline(nctemp13229,nctemp13231);
struct tree* nctemp13235= p;
struct nctempchar1 *nctemp13239;
static struct nctempchar1 nctemp13240 = {{ 68}, (char*)"typedef struct nctempfloat3 { int d[3]; float *a;} nctempfloat3; \n\0"};
nctemp13239=&nctemp13240;
nctempchar1* nctemp13237= nctemp13239;
int nctemp13241=CodeEs(nctemp13235,nctemp13237);
struct tree* nctemp13243= p;
int nctemp13245= 14;
int nctemp13247=PtreeSetline(nctemp13243,nctemp13245);
struct tree* nctemp13249= p;
struct nctempchar1 *nctemp13253;
static struct nctempchar1 nctemp13254 = {{ 62}, (char*)"typedef struct nctempint3 { int d[3]; int *a;} nctempint3; \n\0"};
nctemp13253=&nctemp13254;
nctempchar1* nctemp13251= nctemp13253;
int nctemp13255=CodeEs(nctemp13249,nctemp13251);
struct tree* nctemp13257= p;
int nctemp13259= 15;
int nctemp13261=PtreeSetline(nctemp13257,nctemp13259);
struct tree* nctemp13263= p;
struct nctempchar1 *nctemp13267;
static struct nctempchar1 nctemp13268 = {{ 65}, (char*)"typedef struct nctempchar3 { int d[3]; char *a;} nctempchar3; \n\0"};
nctemp13267=&nctemp13268;
nctempchar1* nctemp13265= nctemp13267;
int nctemp13269=CodeEs(nctemp13263,nctemp13265);
struct tree* nctemp13271= p;
int nctemp13273= 16;
int nctemp13275=PtreeSetline(nctemp13271,nctemp13273);
struct tree* nctemp13277= p;
struct nctempchar1 *nctemp13281;
static struct nctempchar1 nctemp13282 = {{ 74}, (char*)"typedef struct nctempcomplex3 { int d[3]; complex *a;} nctempcomplex3; \n\0"};
nctemp13281=&nctemp13282;
nctempchar1* nctemp13279= nctemp13281;
int nctemp13283=CodeEs(nctemp13277,nctemp13279);
struct tree* nctemp13285= p;
int nctemp13287= 17;
int nctemp13289=PtreeSetline(nctemp13285,nctemp13287);
struct tree* nctemp13291= p;
struct nctempchar1 *nctemp13295;
static struct nctempchar1 nctemp13296 = {{ 68}, (char*)"typedef struct nctempfloat4 { int d[4]; float *a;} nctempfloat4; \n\0"};
nctemp13295=&nctemp13296;
nctempchar1* nctemp13293= nctemp13295;
int nctemp13297=CodeEs(nctemp13291,nctemp13293);
struct tree* nctemp13299= p;
int nctemp13301= 18;
int nctemp13303=PtreeSetline(nctemp13299,nctemp13301);
struct tree* nctemp13305= p;
struct nctempchar1 *nctemp13309;
static struct nctempchar1 nctemp13310 = {{ 62}, (char*)"typedef struct nctempint4 { int d[4]; int *a;} nctempint4; \n\0"};
nctemp13309=&nctemp13310;
nctempchar1* nctemp13307= nctemp13309;
int nctemp13311=CodeEs(nctemp13305,nctemp13307);
struct tree* nctemp13313= p;
int nctemp13315= 19;
int nctemp13317=PtreeSetline(nctemp13313,nctemp13315);
struct tree* nctemp13319= p;
struct nctempchar1 *nctemp13323;
static struct nctempchar1 nctemp13324 = {{ 65}, (char*)"typedef struct nctempchar4 { int d[4]; char *a;} nctempchar4; \n\0"};
nctemp13323=&nctemp13324;
nctempchar1* nctemp13321= nctemp13323;
int nctemp13325=CodeEs(nctemp13319,nctemp13321);
struct tree* nctemp13327= p;
int nctemp13329= 20;
int nctemp13331=PtreeSetline(nctemp13327,nctemp13329);
struct tree* nctemp13333= p;
struct nctempchar1 *nctemp13337;
static struct nctempchar1 nctemp13338 = {{ 74}, (char*)"typedef struct nctempcomplex4 { int d[4]; complex *a;} nctempcomplex4; \n\0"};
nctemp13337=&nctemp13338;
nctempchar1* nctemp13335= nctemp13337;
int nctemp13339=CodeEs(nctemp13333,nctemp13335);
struct tree* nctemp13341= p;
struct nctempchar1 *nctemp13345;
static struct nctempchar1 nctemp13346 = {{ 21}, (char*)"#include <stdio.h>\n\0"};
nctemp13345=&nctemp13346;
nctempchar1* nctemp13343= nctemp13345;
int nctemp13347=CodeEs(nctemp13341,nctemp13343);
struct tree* nctemp13349= p;
struct nctempchar1 *nctemp13353;
static struct nctempchar1 nctemp13354 = {{ 17}, (char*)"extern \"C\" {\n\0"};
nctemp13353=&nctemp13354;
nctempchar1* nctemp13351= nctemp13353;
int nctemp13355=CodeEs(nctemp13349,nctemp13351);
struct tree* nctemp13357= p;
struct nctempchar1 *nctemp13361;
static struct nctempchar1 nctemp13362 = {{ 22}, (char*)"#include <stdlib.h>\n\0"};
nctemp13361=&nctemp13362;
nctempchar1* nctemp13359= nctemp13361;
int nctemp13363=CodeEs(nctemp13357,nctemp13359);
struct tree* nctemp13365= p;
struct nctempchar1 *nctemp13369;
static struct nctempchar1 nctemp13370 = {{ 22}, (char*)"#include <string.h>\n\0"};
nctemp13369=&nctemp13370;
nctempchar1* nctemp13367= nctemp13369;
int nctemp13371=CodeEs(nctemp13365,nctemp13367);
struct tree* nctemp13373= p;
struct nctempchar1 *nctemp13377;
static struct nctempchar1 nctemp13378 = {{ 4}, (char*)"}\n\0"};
nctemp13377=&nctemp13378;
nctempchar1* nctemp13375= nctemp13377;
int nctemp13379=CodeEs(nctemp13373,nctemp13375);
struct tree* nctemp13381= p;
struct nctempchar1 *nctemp13385;
static struct nctempchar1 nctemp13386 = {{ 34}, (char*)"#include \"hip/hip_runtime.h\" \n\0"};
nctemp13385=&nctemp13386;
nctempchar1* nctemp13383= nctemp13385;
int nctemp13387=CodeEs(nctemp13381,nctemp13383);
struct tree* nctemp13389= p;
struct nctempchar1 *nctemp13393;
static struct nctempchar1 nctemp13394 = {{ 3}, (char*)"\n\0"};
nctemp13393=&nctemp13394;
nctempchar1* nctemp13391= nctemp13393;
int nctemp13395=CodeEs(nctemp13389,nctemp13391);
struct tree* nctemp13397= p;
struct nctempchar1 *nctemp13401;
static struct nctempchar1 nctemp13402 = {{ 23}, (char*)"void *GpuNew(int n);\n\0"};
nctemp13401=&nctemp13402;
nctempchar1* nctemp13399= nctemp13401;
int nctemp13403=CodeEs(nctemp13397,nctemp13399);
struct tree* nctemp13405= p;
struct nctempchar1 *nctemp13409;
static struct nctempchar1 nctemp13410 = {{ 28}, (char*)"void *GpuDelete(void *f);\n\0"};
nctemp13409=&nctemp13410;
nctempchar1* nctemp13407= nctemp13409;
int nctemp13411=CodeEs(nctemp13405,nctemp13407);
struct tree* nctemp13413= p;
struct nctempchar1 *nctemp13417;
static struct nctempchar1 nctemp13418 = {{ 20}, (char*)"void *GpuError();\n\0"};
nctemp13417=&nctemp13418;
nctempchar1* nctemp13415= nctemp13417;
int nctemp13419=CodeEs(nctemp13413,nctemp13415);
struct tree* nctemp13421= p;
struct nctempchar1 *nctemp13425;
static struct nctempchar1 nctemp13426 = {{ 26}, (char*)"void *RunMalloc(int n);\n\0"};
nctemp13425=&nctemp13426;
nctempchar1* nctemp13423= nctemp13425;
int nctemp13427=CodeEs(nctemp13421,nctemp13423);
struct tree* nctemp13429= p;
struct nctempchar1 *nctemp13433;
static struct nctempchar1 nctemp13434 = {{ 24}, (char*)"int RunFree(void *p);\n\0"};
nctemp13433=&nctemp13434;
nctempchar1* nctemp13431= nctemp13433;
int nctemp13435=CodeEs(nctemp13429,nctemp13431);
return 1;
}
int CodePreamble ()
{
int nctemp13440=CodeGetarch();
int nctemp13437 = (nctemp13440 ==1);
if(nctemp13437)
{
int nctemp13443=CodePreamblecpu();
return 1;
}
else{
int nctemp13448=CodeGetarch();
int nctemp13445 = (nctemp13448 ==2);
if(nctemp13445)
{
int nctemp13451=CodePreamblecuda();
return 1;
}
else{
int nctemp13456=CodeGetarch();
int nctemp13453 = (nctemp13456 ==3);
if(nctemp13453)
{
int nctemp13459=CodePreamblehip();
return 1;
}
else{
return 0;
}
}
}
}
int CodePostamble ()
{
int fdo;
int nctemp13466=CodeGetfdout();
fdo =nctemp13466;
int nctemp13470=CodeGetarch();
int nctemp13467 = (nctemp13470 ==2);
if(nctemp13467)
{
int nctemp13473= fdo;
struct nctempchar1 *nctemp13477;
static struct nctempchar1 nctemp13478 = {{ 4}, (char*)"}\n\0"};
nctemp13477=&nctemp13478;
nctempchar1* nctemp13475= nctemp13477;
int nctemp13479=LibePuts(nctemp13473,nctemp13475);
return 1;
}
else{
int nctemp13484=CodeGetarch();
int nctemp13481 = (nctemp13484 ==3);
if(nctemp13481)
{
int nctemp13487= fdo;
struct nctempchar1 *nctemp13491;
static struct nctempchar1 nctemp13492 = {{ 4}, (char*)"}\n\0"};
nctemp13491=&nctemp13492;
nctempchar1* nctemp13489= nctemp13491;
int nctemp13493=LibePuts(nctemp13487,nctemp13489);
return 1;
}
else{
return 0;
}
}
}
}
