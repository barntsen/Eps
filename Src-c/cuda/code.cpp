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
int PtreePrtree (struct tree* p,int level);
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
int nctemp69 = (CodeAddress > 99999);
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
struct tree* nctemp3775= p;
struct nctempchar1 *nctemp3779;
static struct nctempchar1 nctemp3780 = {{ 7}, (char*)"if((0>\0"};
nctemp3779=&nctemp3780;
nctempchar1* nctemp3777= nctemp3779;
int nctemp3781=CodeEs(nctemp3775,nctemp3777);
struct tree* nctemp3783= p;
nctempchar1* nctemp3785= ival;
int nctemp3788=CodeEs(nctemp3783,nctemp3785);
struct tree* nctemp3790= p;
struct nctempchar1 *nctemp3794;
static struct nctempchar1 nctemp3795 = {{ 5}, (char*)")||(\0"};
nctemp3794=&nctemp3795;
nctempchar1* nctemp3792= nctemp3794;
int nctemp3796=CodeEs(nctemp3790,nctemp3792);
struct tree* nctemp3798= p;
nctempchar1* nctemp3800= ival;
int nctemp3803=CodeEs(nctemp3798,nctemp3800);
struct tree* nctemp3805= p;
struct nctempchar1 *nctemp3809;
static struct nctempchar1 nctemp3810 = {{ 3}, (char*)">=\0"};
nctemp3809=&nctemp3810;
nctempchar1* nctemp3807= nctemp3809;
int nctemp3811=CodeEs(nctemp3805,nctemp3807);
nctempchar1 *nctemp3813 =qual;
int nctemp3812 =(nctemp3813!=0);
if(nctemp3812)
{
struct tree* nctemp3818= p;
nctempchar1* nctemp3820= qual;
int nctemp3823=CodeEs(nctemp3818,nctemp3820);
struct tree* nctemp3825= p;
nctempchar1* nctemp3827= sel;
int nctemp3830=CodeEs(nctemp3825,nctemp3827);
}
struct tree* nctemp3832= p;
nctempchar1* nctemp3834= name;
int nctemp3837=CodeEs(nctemp3832,nctemp3834);
struct tree* nctemp3839= p;
struct nctempchar1 *nctemp3843;
static struct nctempchar1 nctemp3844 = {{ 5}, (char*)"->d[\0"};
nctemp3843=&nctemp3844;
nctempchar1* nctemp3841= nctemp3843;
int nctemp3845=CodeEs(nctemp3839,nctemp3841);
int nctemp3847= index;
int nctemp3849=CodeEd(nctemp3847);
struct tree* nctemp3851= p;
struct nctempchar1 *nctemp3855;
static struct nctempchar1 nctemp3856 = {{ 7}, (char*)"])){\n\0"};
nctemp3855=&nctemp3856;
nctempchar1* nctemp3853= nctemp3855;
int nctemp3857=CodeEs(nctemp3851,nctemp3853);
struct tree* nctemp3859= p;
struct nctempchar1 *nctemp3863;
static struct nctempchar1 nctemp3864 = {{ 47}, (char*)"printf(\"***Array out of bounds error: \\n\");\0"};
nctemp3863=&nctemp3864;
nctempchar1* nctemp3861= nctemp3863;
int nctemp3865=CodeEs(nctemp3859,nctemp3861);
struct tree* nctemp3867= p;
struct nctempchar1 *nctemp3871;
static struct nctempchar1 nctemp3872 = {{ 3}, (char*)"\n\0"};
nctemp3871=&nctemp3872;
nctempchar1* nctemp3869= nctemp3871;
int nctemp3873=CodeEs(nctemp3867,nctemp3869);
struct tree* nctemp3875= p;
struct nctempchar1 *nctemp3879;
static struct nctempchar1 nctemp3880 = {{ 26}, (char*)"printf(\" File name: \");\0"};
nctemp3879=&nctemp3880;
nctempchar1* nctemp3877= nctemp3879;
int nctemp3881=CodeEs(nctemp3875,nctemp3877);
struct tree* nctemp3883= p;
struct nctempchar1 *nctemp3887;
static struct nctempchar1 nctemp3888 = {{ 10}, (char*)"printf(\"\0"};
nctemp3887=&nctemp3888;
nctempchar1* nctemp3885= nctemp3887;
int nctemp3889=CodeEs(nctemp3883,nctemp3885);
struct tree* nctemp3891= p;
nctempchar1* nctemp3895=ScanGetfile();
nctempchar1* nctemp3893= nctemp3895;
int nctemp3896=CodeEs(nctemp3891,nctemp3893);
struct tree* nctemp3898= p;
struct nctempchar1 *nctemp3902;
static struct nctempchar1 nctemp3903 = {{ 10}, (char*)"\\n\");\n\0"};
nctemp3902=&nctemp3903;
nctempchar1* nctemp3900= nctemp3902;
int nctemp3904=CodeEs(nctemp3898,nctemp3900);
struct tree* nctemp3906= p;
struct nctempchar1 *nctemp3910;
static struct nctempchar1 nctemp3911 = {{ 30}, (char*)"printf(\" Variable name: \");\0"};
nctemp3910=&nctemp3911;
nctempchar1* nctemp3908= nctemp3910;
int nctemp3912=CodeEs(nctemp3906,nctemp3908);
struct tree* nctemp3914= p;
struct nctempchar1 *nctemp3918;
static struct nctempchar1 nctemp3919 = {{ 10}, (char*)"printf(\"\0"};
nctemp3918=&nctemp3919;
nctempchar1* nctemp3916= nctemp3918;
int nctemp3920=CodeEs(nctemp3914,nctemp3916);
struct tree* nctemp3922= p;
nctempchar1* nctemp3924= name;
int nctemp3927=CodeEs(nctemp3922,nctemp3924);
struct tree* nctemp3929= p;
struct nctempchar1 *nctemp3933;
static struct nctempchar1 nctemp3934 = {{ 10}, (char*)"\\n\");\n\0"};
nctemp3933=&nctemp3934;
nctempchar1* nctemp3931= nctemp3933;
int nctemp3935=CodeEs(nctemp3929,nctemp3931);
struct tree* nctemp3937= p;
struct nctempchar1 *nctemp3941;
static struct nctempchar1 nctemp3942 = {{ 33}, (char*)"printf(\" Index value: %d \\n\",\0"};
nctemp3941=&nctemp3942;
nctempchar1* nctemp3939= nctemp3941;
int nctemp3943=CodeEs(nctemp3937,nctemp3939);
struct tree* nctemp3945= p;
nctempchar1* nctemp3947= ival;
int nctemp3950=CodeEs(nctemp3945,nctemp3947);
struct tree* nctemp3952= p;
struct nctempchar1 *nctemp3956;
static struct nctempchar1 nctemp3957 = {{ 5}, (char*)");\n\0"};
nctemp3956=&nctemp3957;
nctempchar1* nctemp3954= nctemp3956;
int nctemp3958=CodeEs(nctemp3952,nctemp3954);
struct tree* nctemp3960= p;
struct nctempchar1 *nctemp3964;
static struct nctempchar1 nctemp3965 = {{ 21}, (char*)"printf(\" Index no: \0"};
nctemp3964=&nctemp3965;
nctempchar1* nctemp3962= nctemp3964;
int nctemp3966=CodeEs(nctemp3960,nctemp3962);
int nctemp3968= index;
int nctemp3970=CodeEd(nctemp3968);
struct tree* nctemp3972= p;
struct nctempchar1 *nctemp3976;
static struct nctempchar1 nctemp3977 = {{ 4}, (char*)"\\n\0"};
nctemp3976=&nctemp3977;
nctempchar1* nctemp3974= nctemp3976;
int nctemp3978=CodeEs(nctemp3972,nctemp3974);
struct tree* nctemp3980= p;
struct nctempchar1 *nctemp3984;
static struct nctempchar1 nctemp3985 = {{ 5}, (char*)"\");\0"};
nctemp3984=&nctemp3985;
nctempchar1* nctemp3982= nctemp3984;
int nctemp3986=CodeEs(nctemp3980,nctemp3982);
struct tree* nctemp3988= p;
struct nctempchar1 *nctemp3992;
static struct nctempchar1 nctemp3993 = {{ 33}, (char*)"printf(\" Upper bound: %d\\n\" ,\0"};
nctemp3992=&nctemp3993;
nctempchar1* nctemp3990= nctemp3992;
int nctemp3994=CodeEs(nctemp3988,nctemp3990);
struct tree* nctemp3996= p;
nctempchar1* nctemp3998= name;
int nctemp4001=CodeEs(nctemp3996,nctemp3998);
struct tree* nctemp4003= p;
struct nctempchar1 *nctemp4007;
static struct nctempchar1 nctemp4008 = {{ 5}, (char*)"->d[\0"};
nctemp4007=&nctemp4008;
nctempchar1* nctemp4005= nctemp4007;
int nctemp4009=CodeEs(nctemp4003,nctemp4005);
int nctemp4011= index;
int nctemp4013=CodeEd(nctemp4011);
struct tree* nctemp4015= p;
struct nctempchar1 *nctemp4019;
static struct nctempchar1 nctemp4020 = {{ 6}, (char*)"]-1);\0"};
nctemp4019=&nctemp4020;
nctempchar1* nctemp4017= nctemp4019;
int nctemp4021=CodeEs(nctemp4015,nctemp4017);
struct tree* nctemp4023= p;
struct nctempchar1 *nctemp4027;
static struct nctempchar1 nctemp4028 = {{ 3}, (char*)"\n\0"};
nctemp4027=&nctemp4028;
nctempchar1* nctemp4025= nctemp4027;
int nctemp4029=CodeEs(nctemp4023,nctemp4025);
struct tree* nctemp4031= p;
struct nctempchar1 *nctemp4035;
static struct nctempchar1 nctemp4036 = {{ 10}, (char*)"assert(0)\0"};
nctemp4035=&nctemp4036;
nctempchar1* nctemp4033= nctemp4035;
int nctemp4037=CodeEs(nctemp4031,nctemp4033);
struct tree* nctemp4039= p;
struct nctempchar1 *nctemp4043;
static struct nctempchar1 nctemp4044 = {{ 4}, (char*)";\n\0"};
nctemp4043=&nctemp4044;
nctempchar1* nctemp4041= nctemp4043;
int nctemp4045=CodeEs(nctemp4039,nctemp4041);
struct tree* nctemp4047= p;
struct nctempchar1 *nctemp4051;
static struct nctempchar1 nctemp4052 = {{ 6}, (char*)"\n}\n\0"};
nctemp4051=&nctemp4052;
nctempchar1* nctemp4049= nctemp4051;
int nctemp4053=CodeEs(nctemp4047,nctemp4049);
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
struct tree* nctemp4060= p;
nctempchar1* nctemp4062=PtreeGetdef(nctemp4060);
name=nctemp4062;
nctempchar1* nctemp4068=CodeMktemp();
temp=nctemp4068;
nctempchar1* nctemp4073= name;
struct symbol* nctemp4076=SymLook(nctemp4073);
tp =nctemp4076;
int nctemp4077 = (tp ==0);
if(nctemp4077)
{
nctempchar1* nctemp4082= name;
int nctemp4085=CodeError(nctemp4082);
}
struct tree* nctemp4090= p;
struct tree* nctemp4092=PtreeMvchild(nctemp4090);
sp =nctemp4092;
int nctemp4093 = (sp ==0);
if(nctemp4093)
{
struct tree* nctemp4098= p;
nctempchar1* nctemp4100=PtreeGetdef(nctemp4098);
return nctemp4100;
}
else{
struct tree* nctemp4106= sp;
nctempchar1* nctemp4108=PtreeGetname(nctemp4106);
nctempchar1* nctemp4104= nctemp4108;
struct nctempchar1 *nctemp4111;
static struct nctempchar1 nctemp4112 = {{ 9}, (char*)"exprlist\0"};
nctemp4111=&nctemp4112;
nctempchar1* nctemp4109= nctemp4111;
int nctemp4113=LibeStrcmp(nctemp4104,nctemp4109);
int nctemp4101 = (nctemp4113 ==0);
if(nctemp4101)
{
struct tree* nctemp4116= p;
nctempchar1* nctemp4118=PtreeGetdef(nctemp4116);
return nctemp4118;
}
}
struct symbol* nctemp4123= tp;
int nctemp4125=SymGetrank(nctemp4123);
rank =nctemp4125;
struct tree* nctemp4130= p;
struct tree* nctemp4132=PtreeMvchild(nctemp4130);
p =nctemp4132;
struct tree* nctemp4137= p;
struct tree* nctemp4139=PtreeMvchild(nctemp4137);
p =nctemp4139;
sp =p;
i =0;
int nctemp4148 = (i < rank);
while(nctemp4148){
{
int nctemp4152 = (i ==0);
if(nctemp4152)
{
struct tree* nctemp4161= p;
nctempchar1* nctemp4163=CodeExpr(nctemp4161);
temp2=nctemp4163;
struct tree* nctemp4165= p;
struct tree* nctemp4169= p;
nctempchar1* nctemp4171=PtreeGetype(nctemp4169);
nctempchar1* nctemp4167= nctemp4171;
int nctemp4172=CodeEs(nctemp4165,nctemp4167);
struct tree* nctemp4174= p;
struct nctempchar1 *nctemp4178;
static struct nctempchar1 nctemp4179 = {{ 2}, (char*)" \0"};
nctemp4178=&nctemp4179;
nctempchar1* nctemp4176= nctemp4178;
int nctemp4180=CodeEs(nctemp4174,nctemp4176);
struct tree* nctemp4182= p;
nctempchar1* nctemp4184= temp;
int nctemp4187=CodeEs(nctemp4182,nctemp4184);
struct tree* nctemp4189= p;
struct nctempchar1 *nctemp4193;
static struct nctempchar1 nctemp4194 = {{ 2}, (char*)"=\0"};
nctemp4193=&nctemp4194;
nctempchar1* nctemp4191= nctemp4193;
int nctemp4195=CodeEs(nctemp4189,nctemp4191);
struct tree* nctemp4197= p;
nctempchar1* nctemp4199= temp2;
int nctemp4202=CodeEs(nctemp4197,nctemp4199);
struct tree* nctemp4204= p;
struct nctempchar1 *nctemp4208;
static struct nctempchar1 nctemp4209 = {{ 4}, (char*)";\n\0"};
nctemp4208=&nctemp4209;
nctempchar1* nctemp4206= nctemp4208;
int nctemp4210=CodeEs(nctemp4204,nctemp4206);
int nctemp4212=CodeArraycheck();
if(nctemp4212)
{
struct tree* nctemp4216= p;
int nctemp4218=PtreeGetline(nctemp4216);
int nctemp4214= nctemp4218;
nctempchar1* nctemp4219= qual;
nctempchar1* nctemp4222= sel;
nctempchar1* nctemp4225= name;
nctempchar1* nctemp4228= temp2;
int nctemp4231= i;
int nctemp4233=CodeArrayex(nctemp4214,nctemp4219,nctemp4222,nctemp4225,nctemp4228,nctemp4231);
}
}
else{
struct tree* nctemp4239= sp;
nctempchar1* nctemp4241=CodeExpr(nctemp4239);
temp2=nctemp4241;
struct tree* nctemp4243= p;
nctempchar1* nctemp4245= temp;
int nctemp4248=CodeEs(nctemp4243,nctemp4245);
struct tree* nctemp4250= p;
struct nctempchar1 *nctemp4254;
static struct nctempchar1 nctemp4255 = {{ 2}, (char*)"=\0"};
nctemp4254=&nctemp4255;
nctempchar1* nctemp4252= nctemp4254;
int nctemp4256=CodeEs(nctemp4250,nctemp4252);
struct tree* nctemp4258= p;
nctempchar1* nctemp4260= temp2;
int nctemp4263=CodeEs(nctemp4258,nctemp4260);
struct tree* nctemp4265= p;
struct nctempchar1 *nctemp4269;
static struct nctempchar1 nctemp4270 = {{ 2}, (char*)"*\0"};
nctemp4269=&nctemp4270;
nctempchar1* nctemp4267= nctemp4269;
int nctemp4271=CodeEs(nctemp4265,nctemp4267);
nctempchar1 *nctemp4273 =qual;
int nctemp4272 =(nctemp4273!=0);
if(nctemp4272)
{
struct tree* nctemp4278= p;
nctempchar1* nctemp4280= qual;
int nctemp4283=CodeEs(nctemp4278,nctemp4280);
}
nctempchar1 *nctemp4285 =sel;
int nctemp4284 =(nctemp4285!=0);
if(nctemp4284)
{
struct tree* nctemp4290= p;
nctempchar1* nctemp4292= sel;
int nctemp4295=CodeEs(nctemp4290,nctemp4292);
}
struct tree* nctemp4297= p;
nctempchar1* nctemp4299= name;
int nctemp4302=CodeEs(nctemp4297,nctemp4299);
struct tree* nctemp4304= p;
struct nctempchar1 *nctemp4308;
static struct nctempchar1 nctemp4309 = {{ 4}, (char*)"->d\0"};
nctemp4308=&nctemp4309;
nctempchar1* nctemp4306= nctemp4308;
int nctemp4310=CodeEs(nctemp4304,nctemp4306);
struct tree* nctemp4312= p;
struct nctempchar1 *nctemp4316;
static struct nctempchar1 nctemp4317 = {{ 2}, (char*)"[\0"};
nctemp4316=&nctemp4317;
nctempchar1* nctemp4314= nctemp4316;
int nctemp4318=CodeEs(nctemp4312,nctemp4314);
int nctemp4325 = i - 1;
int nctemp4320= nctemp4325;
int nctemp4326=CodeEd(nctemp4320);
struct tree* nctemp4328= p;
struct nctempchar1 *nctemp4332;
static struct nctempchar1 nctemp4333 = {{ 2}, (char*)"]\0"};
nctemp4332=&nctemp4333;
nctempchar1* nctemp4330= nctemp4332;
int nctemp4334=CodeEs(nctemp4328,nctemp4330);
struct tree* nctemp4336= p;
struct nctempchar1 *nctemp4340;
static struct nctempchar1 nctemp4341 = {{ 2}, (char*)"+\0"};
nctemp4340=&nctemp4341;
nctempchar1* nctemp4338= nctemp4340;
int nctemp4342=CodeEs(nctemp4336,nctemp4338);
struct tree* nctemp4344= p;
nctempchar1* nctemp4346= temp;
int nctemp4349=CodeEs(nctemp4344,nctemp4346);
struct tree* nctemp4351= p;
struct nctempchar1 *nctemp4355;
static struct nctempchar1 nctemp4356 = {{ 4}, (char*)";\n\0"};
nctemp4355=&nctemp4356;
nctempchar1* nctemp4353= nctemp4355;
int nctemp4357=CodeEs(nctemp4351,nctemp4353);
int nctemp4359=CodeArraycheck();
if(nctemp4359)
{
struct tree* nctemp4363= p;
int nctemp4365=PtreeGetline(nctemp4363);
int nctemp4361= nctemp4365;
nctempchar1* nctemp4366= qual;
nctempchar1* nctemp4369= sel;
nctempchar1* nctemp4372= name;
nctempchar1* nctemp4375= temp2;
int nctemp4378= i;
int nctemp4380=CodeArrayex(nctemp4361,nctemp4366,nctemp4369,nctemp4372,nctemp4375,nctemp4378);
}
}
int nctemp4381 = (sp !=0);
if(nctemp4381)
{
struct tree* nctemp4389= sp;
struct tree* nctemp4391=PtreeMvsister(nctemp4389);
sp =nctemp4391;
}
}
int nctemp4400 = i + 1;
i =nctemp4400;
int nctemp4401 = (i < rank);
nctemp4148=nctemp4401;
}
nctempchar1* nctemp4415= name;
int nctemp4418=LibeStrlen(nctemp4415);
nctempchar1* nctemp4420= temp;
int nctemp4423=LibeStrlen(nctemp4420);
int nctemp4424 = nctemp4418 + nctemp4423;
int nctemp4426 = nctemp4424 + 6;
size =nctemp4426;
int nctemp4433=size;
nctempchar1 *nctemp4432;
nctemp4432=(nctempchar1*)RunMalloc(sizeof(nctempchar1));
nctemp4432->d[0]=size;
nctemp4432->a=(char *)RunMalloc(sizeof(char)*nctemp4433);
rval=nctemp4432;
nctempchar1* nctemp4437= name;
nctempchar1* nctemp4440= rval;
int nctemp4443=LibeStrcpy(nctemp4437,nctemp4440);
struct nctempchar1 *nctemp4447;
static struct nctempchar1 nctemp4448 = {{ 4}, (char*)"->a\0"};
nctemp4447=&nctemp4448;
nctempchar1* nctemp4445= nctemp4447;
nctempchar1* nctemp4449= rval;
int nctemp4452=LibeStrcat(nctemp4445,nctemp4449);
struct nctempchar1 *nctemp4456;
static struct nctempchar1 nctemp4457 = {{ 2}, (char*)"[\0"};
nctemp4456=&nctemp4457;
nctempchar1* nctemp4454= nctemp4456;
nctempchar1* nctemp4458= rval;
int nctemp4461=LibeStrcat(nctemp4454,nctemp4458);
nctempchar1* nctemp4463= temp;
nctempchar1* nctemp4466= rval;
int nctemp4469=LibeStrcat(nctemp4463,nctemp4466);
struct nctempchar1 *nctemp4473;
static struct nctempchar1 nctemp4474 = {{ 2}, (char*)"]\0"};
nctemp4473=&nctemp4474;
nctempchar1* nctemp4471= nctemp4473;
nctempchar1* nctemp4475= rval;
int nctemp4478=LibeStrcat(nctemp4471,nctemp4475);
return rval;
}
nctempchar1 * CodeQident (nctempchar1 *qual,nctempchar1 *ident)
{
int lq;
int li;
nctempchar1 *name;
nctempchar1* nctemp4485= qual;
int nctemp4488=LibeStrlen(nctemp4485);
lq =nctemp4488;
nctempchar1* nctemp4493= ident;
int nctemp4496=LibeStrlen(nctemp4493);
li =nctemp4496;
int nctemp4511 = lq + li;
int nctemp4513 = nctemp4511 + 2;
int nctemp4503=nctemp4513;
nctempchar1 *nctemp4502;
nctemp4502=(nctempchar1*)RunMalloc(sizeof(nctempchar1));
int nctemp4521 = lq + li;
int nctemp4523 = nctemp4521 + 2;
nctemp4502->d[0]=nctemp4523;
nctemp4502->a=(char *)RunMalloc(sizeof(char)*nctemp4503);
name=nctemp4502;
nctempchar1* nctemp4525= qual;
nctempchar1* nctemp4528= name;
int nctemp4531=LibeStrcpy(nctemp4525,nctemp4528);
struct nctempchar1 *nctemp4535;
static struct nctempchar1 nctemp4536 = {{ 2}, (char*)".\0"};
nctemp4535=&nctemp4536;
nctempchar1* nctemp4533= nctemp4535;
nctempchar1* nctemp4537= name;
int nctemp4540=LibeStrcat(nctemp4533,nctemp4537);
nctempchar1* nctemp4542= ident;
nctempchar1* nctemp4545= name;
int nctemp4548=LibeStrcat(nctemp4542,nctemp4545);
return name;
}
nctempchar1 * CodeQident2 (nctempchar1 *qual,nctempchar1 *ident)
{
int lq;
int li;
nctempchar1 *name;
nctempchar1* nctemp4555= qual;
int nctemp4558=LibeStrlen(nctemp4555);
lq =nctemp4558;
nctempchar1* nctemp4563= ident;
int nctemp4566=LibeStrlen(nctemp4563);
li =nctemp4566;
int nctemp4581 = lq + li;
int nctemp4583 = nctemp4581 + 3;
int nctemp4573=nctemp4583;
nctempchar1 *nctemp4572;
nctemp4572=(nctempchar1*)RunMalloc(sizeof(nctempchar1));
int nctemp4591 = lq + li;
int nctemp4593 = nctemp4591 + 3;
nctemp4572->d[0]=nctemp4593;
nctemp4572->a=(char *)RunMalloc(sizeof(char)*nctemp4573);
name=nctemp4572;
nctempchar1* nctemp4595= qual;
nctempchar1* nctemp4598= name;
int nctemp4601=LibeStrcpy(nctemp4595,nctemp4598);
struct nctempchar1 *nctemp4605;
static struct nctempchar1 nctemp4606 = {{ 3}, (char*)"->\0"};
nctemp4605=&nctemp4606;
nctempchar1* nctemp4603= nctemp4605;
nctempchar1* nctemp4607= name;
int nctemp4610=LibeStrcat(nctemp4603,nctemp4607);
nctempchar1* nctemp4612= ident;
nctempchar1* nctemp4615= name;
int nctemp4618=LibeStrcat(nctemp4612,nctemp4615);
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
struct tree* nctemp4631= p;
nctempchar1* nctemp4633=PtreeGetstruct(nctemp4631);
nctempchar1* nctemp4629= nctemp4633;
struct nctempchar1 *nctemp4636;
static struct nctempchar1 nctemp4637 = {{ 7}, (char*)"struct\0"};
nctemp4636=&nctemp4637;
nctempchar1* nctemp4634= nctemp4636;
int nctemp4638=LibeStrcmp(nctemp4629,nctemp4634);
int nctemp4626 = (nctemp4638 ==1);
if(nctemp4626)
{
struct tree* nctemp4645= p;
nctempchar1* nctemp4647=PtreeGetarray(nctemp4645);
nctempchar1* nctemp4643= nctemp4647;
struct nctempchar1 *nctemp4650;
static struct nctempchar1 nctemp4651 = {{ 6}, (char*)"array\0"};
nctemp4650=&nctemp4651;
nctempchar1* nctemp4648= nctemp4650;
int nctemp4652=LibeStrcmp(nctemp4643,nctemp4648);
int nctemp4640 = (nctemp4652 ==1);
if(nctemp4640)
{
struct tree* nctemp4659= p;
nctempchar1* nctemp4661= qual;
struct nctempchar1 *nctemp4666;
static struct nctempchar1 nctemp4667 = {{ 2}, (char*)".\0"};
nctemp4666=&nctemp4667;
nctempchar1* nctemp4664= nctemp4666;
nctempchar1* nctemp4668=CodeArray(nctemp4659,nctemp4661,nctemp4664);
qual=nctemp4668;
struct tree* nctemp4673= p;
struct tree* nctemp4675=PtreeMvchild(nctemp4673);
np =nctemp4675;
int nctemp4676 = (np ==0);
if(nctemp4676)
{
return qual;
}
struct tree* nctemp4686= np;
struct tree* nctemp4688=PtreeMvsister(nctemp4686);
np =nctemp4688;
int nctemp4689 = (np ==0);
if(nctemp4689)
{
return qual;
}
}
else{
struct tree* nctemp4700= p;
nctempchar1* nctemp4702=PtreeGetdef(nctemp4700);
qual=nctemp4702;
struct tree* nctemp4710= p;
struct tree* nctemp4712=PtreeMvchild(nctemp4710);
np =nctemp4712;
int nctemp4703 = (np ==0);
if(nctemp4703)
{
return qual;
}
}
struct tree* nctemp4721= np;
nctempchar1* nctemp4723=PtreeGetarray(nctemp4721);
nctempchar1* nctemp4719= nctemp4723;
struct nctempchar1 *nctemp4726;
static struct nctempchar1 nctemp4727 = {{ 6}, (char*)"array\0"};
nctemp4726=&nctemp4727;
nctempchar1* nctemp4724= nctemp4726;
int nctemp4728=LibeStrcmp(nctemp4719,nctemp4724);
int nctemp4716 = (nctemp4728 ==1);
if(nctemp4716)
{
struct symbol* nctemp4734=SymGetltp();
tp =nctemp4734;
struct symbol* nctemp4739=SymGetetp();
up =nctemp4739;
struct tree* nctemp4746= p;
nctempchar1* nctemp4748=PtreeGetdef(nctemp4746);
nctempchar1* nctemp4744= nctemp4748;
struct symbol* nctemp4749=SymLook(nctemp4744);
uup =nctemp4749;
struct symbol* nctemp4756= uup;
nctempchar1* nctemp4758=SymGetype(nctemp4756);
nctempchar1* nctemp4754= nctemp4758;
struct symbol* nctemp4759=SymLook(nctemp4754);
uup =nctemp4759;
struct symbol* nctemp4763= uup;
struct symbol* nctemp4765=SymGetable(nctemp4763);
struct symbol* nctemp4761= nctemp4765;
struct symbol* nctemp4766=SymSetltp(nctemp4761);
struct tree* nctemp4772= p;
nctempchar1* nctemp4774=PtreeGetarray(nctemp4772);
nctempchar1* nctemp4770= nctemp4774;
struct nctempchar1 *nctemp4777;
static struct nctempchar1 nctemp4778 = {{ 6}, (char*)"array\0"};
nctemp4777=&nctemp4778;
nctempchar1* nctemp4775= nctemp4777;
int nctemp4779=LibeStrcmp(nctemp4770,nctemp4775);
int nctemp4767 = (nctemp4779 ==1);
if(nctemp4767)
{
struct tree* nctemp4786= np;
nctempchar1* nctemp4788= qual;
struct nctempchar1 *nctemp4793;
static struct nctempchar1 nctemp4794 = {{ 2}, (char*)".\0"};
nctemp4793=&nctemp4794;
nctempchar1* nctemp4791= nctemp4793;
nctempchar1* nctemp4795=CodeArray(nctemp4786,nctemp4788,nctemp4791);
name=nctemp4795;
}
else{
struct tree* nctemp4801= np;
nctempchar1* nctemp4803= qual;
struct nctempchar1 *nctemp4808;
static struct nctempchar1 nctemp4809 = {{ 3}, (char*)"->\0"};
nctemp4808=&nctemp4809;
nctempchar1* nctemp4806= nctemp4808;
nctempchar1* nctemp4810=CodeArray(nctemp4801,nctemp4803,nctemp4806);
name=nctemp4810;
}
struct symbol* nctemp4812= tp;
struct symbol* nctemp4814=SymSetltp(nctemp4812);
struct symbol* nctemp4816= up;
struct symbol* nctemp4818=SymSetetp(nctemp4816);
}
else{
struct tree* nctemp4824= np;
nctempchar1* nctemp4826=PtreeGetdef(nctemp4824);
name=nctemp4826;
}
struct tree* nctemp4832= p;
nctempchar1* nctemp4834=PtreeGetarray(nctemp4832);
nctempchar1* nctemp4830= nctemp4834;
struct nctempchar1 *nctemp4837;
static struct nctempchar1 nctemp4838 = {{ 6}, (char*)"array\0"};
nctemp4837=&nctemp4838;
nctempchar1* nctemp4835= nctemp4837;
int nctemp4839=LibeStrcmp(nctemp4830,nctemp4835);
int nctemp4827 = (nctemp4839 ==1);
if(nctemp4827)
{
nctempchar1* nctemp4842= qual;
nctempchar1* nctemp4845= name;
nctempchar1* nctemp4848=CodeQident(nctemp4842,nctemp4845);
return nctemp4848;
}
else{
nctempchar1* nctemp4850= qual;
nctempchar1* nctemp4853= name;
nctempchar1* nctemp4856=CodeQident2(nctemp4850,nctemp4853);
return nctemp4856;
}
}
else{
struct tree* nctemp4862= p;
nctempchar1* nctemp4864=PtreeGetarray(nctemp4862);
nctempchar1* nctemp4860= nctemp4864;
struct nctempchar1 *nctemp4867;
static struct nctempchar1 nctemp4868 = {{ 6}, (char*)"array\0"};
nctemp4867=&nctemp4868;
nctempchar1* nctemp4865= nctemp4867;
int nctemp4869=LibeStrcmp(nctemp4860,nctemp4865);
int nctemp4857 = (nctemp4869 ==1);
if(nctemp4857)
{
name=(0);
qual=(0);
struct tree* nctemp4886= p;
nctempchar1* nctemp4888= qual;
nctempchar1* nctemp4891= name;
nctempchar1* nctemp4894=CodeArray(nctemp4886,nctemp4888,nctemp4891);
qual=nctemp4894;
return qual;
}
else{
struct tree* nctemp4898= p;
nctempchar1* nctemp4900=PtreeGetdef(nctemp4898);
return nctemp4900;
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
nctempchar1* nctemp4906=CodeMktemp();
pointer=nctemp4906;
nctempchar1* nctemp4912=CodeMktemp();
totdim=nctemp4912;
struct tree* nctemp4917= p;
struct tree* nctemp4919=PtreeMvchild(nctemp4917);
p =nctemp4919;
struct tree* nctemp4925= p;
nctempchar1* nctemp4927=PtreeGetdef(nctemp4925);
type=nctemp4927;
struct tree* nctemp4933= p;
nctempchar1* nctemp4935=PtreeGetstruct(nctemp4933);
structflag=nctemp4935;
struct tree* nctemp4941= p;
nctempchar1* nctemp4943=PtreeGetarray(nctemp4941);
arrayflag=nctemp4943;
struct tree* nctemp4949= p;
nctempchar1* nctemp4951=PtreeGetarray(nctemp4949);
nctempchar1* nctemp4947= nctemp4951;
struct nctempchar1 *nctemp4954;
static struct nctempchar1 nctemp4955 = {{ 6}, (char*)"array\0"};
nctemp4954=&nctemp4955;
nctempchar1* nctemp4952= nctemp4954;
int nctemp4956=LibeStrcmp(nctemp4947,nctemp4952);
int nctemp4944 = (nctemp4956 ==1);
if(nctemp4944)
{
struct tree* nctemp4962= p;
struct tree* nctemp4964=PtreeMvchild(nctemp4962);
p =nctemp4964;
struct tree* nctemp4969= p;
struct tree* nctemp4971=PtreeMvchild(nctemp4969);
p =nctemp4971;
struct tree* nctemp4976= p;
struct tree* nctemp4978=PtreeMvchild(nctemp4976);
p =nctemp4978;
struct tree* nctemp4983= p;
struct tree* nctemp4985=PtreeMvchild(nctemp4983);
p =nctemp4985;
sp =p;
top =p;
rank =1;
struct tree* nctemp5005= p;
struct tree* nctemp5007=PtreeMvsister(nctemp5005);
p =nctemp5007;
int nctemp4998 = (p !=0);
int nctemp5009=nctemp4998;
while(nctemp5009)
{{
int nctemp5018 = rank + 1;
rank =nctemp5018;
}
struct tree* nctemp5026= p;
struct tree* nctemp5028=PtreeMvsister(nctemp5026);
p =nctemp5028;
int nctemp5019 = (p !=0);
nctemp5009=nctemp5019;}int nctemp5030 = (rank > 4);
if(nctemp5030)
{
struct nctempchar1 *nctemp5037;
static struct nctempchar1 nctemp5038 = {{ 29}, (char*)"Array dimension is too large\0"};
nctemp5037=&nctemp5038;
nctempchar1* nctemp5035= nctemp5037;
int nctemp5039=CodeError(nctemp5035);
}
p =sp;
i =0;
int nctemp5048 = (p !=0);
int nctemp5052=nctemp5048;
while(nctemp5052)
{{
struct tree* nctemp5058= p;
nctempchar1* nctemp5060=CodeExpr(nctemp5058);
dim=nctemp5060;
int nctemp5061 = (i ==0);
if(nctemp5061)
{
struct tree* nctemp5066= p;
struct tree* nctemp5070= p;
nctempchar1* nctemp5072=PtreeGetype(nctemp5070);
nctempchar1* nctemp5068= nctemp5072;
int nctemp5073=CodeEs(nctemp5066,nctemp5068);
struct tree* nctemp5075= p;
struct nctempchar1 *nctemp5079;
static struct nctempchar1 nctemp5080 = {{ 2}, (char*)" \0"};
nctemp5079=&nctemp5080;
nctempchar1* nctemp5077= nctemp5079;
int nctemp5081=CodeEs(nctemp5075,nctemp5077);
struct tree* nctemp5083= p;
nctempchar1* nctemp5085= totdim;
int nctemp5088=CodeEs(nctemp5083,nctemp5085);
struct tree* nctemp5090= p;
struct nctempchar1 *nctemp5094;
static struct nctempchar1 nctemp5095 = {{ 2}, (char*)"=\0"};
nctemp5094=&nctemp5095;
nctempchar1* nctemp5092= nctemp5094;
int nctemp5096=CodeEs(nctemp5090,nctemp5092);
struct tree* nctemp5098= p;
nctempchar1* nctemp5100= dim;
int nctemp5103=CodeEs(nctemp5098,nctemp5100);
}
else{
struct tree* nctemp5105= p;
nctempchar1* nctemp5107= totdim;
int nctemp5110=CodeEs(nctemp5105,nctemp5107);
struct tree* nctemp5112= p;
struct nctempchar1 *nctemp5116;
static struct nctempchar1 nctemp5117 = {{ 2}, (char*)"=\0"};
nctemp5116=&nctemp5117;
nctempchar1* nctemp5114= nctemp5116;
int nctemp5118=CodeEs(nctemp5112,nctemp5114);
struct tree* nctemp5120= p;
nctempchar1* nctemp5122= totdim;
int nctemp5125=CodeEs(nctemp5120,nctemp5122);
struct tree* nctemp5127= p;
struct nctempchar1 *nctemp5131;
static struct nctempchar1 nctemp5132 = {{ 2}, (char*)"*\0"};
nctemp5131=&nctemp5132;
nctempchar1* nctemp5129= nctemp5131;
int nctemp5133=CodeEs(nctemp5127,nctemp5129);
struct tree* nctemp5135= p;
nctempchar1* nctemp5137= dim;
int nctemp5140=CodeEs(nctemp5135,nctemp5137);
}
struct tree* nctemp5142= p;
struct nctempchar1 *nctemp5146;
static struct nctempchar1 nctemp5147 = {{ 4}, (char*)";\n\0"};
nctemp5146=&nctemp5147;
nctempchar1* nctemp5144= nctemp5146;
int nctemp5148=CodeEs(nctemp5142,nctemp5144);
int nctemp5157 = i + 1;
i =nctemp5157;
struct tree* nctemp5162= p;
struct tree* nctemp5164=PtreeMvsister(nctemp5162);
p =nctemp5164;
}
int nctemp5165 = (p !=0);
nctemp5052=nctemp5165;}}
nctempchar1* nctemp5175= structflag;
struct nctempchar1 *nctemp5180;
static struct nctempchar1 nctemp5181 = {{ 7}, (char*)"struct\0"};
nctemp5180=&nctemp5181;
nctempchar1* nctemp5178= nctemp5180;
int nctemp5182=LibeStrcmp(nctemp5175,nctemp5178);
int nctemp5172 = (nctemp5182 ==1);
nctempchar1* nctemp5188= arrayflag;
struct nctempchar1 *nctemp5193;
static struct nctempchar1 nctemp5194 = {{ 6}, (char*)"array\0"};
nctemp5193=&nctemp5194;
nctempchar1* nctemp5191= nctemp5193;
int nctemp5195=LibeStrcmp(nctemp5188,nctemp5191);
int nctemp5185 = (nctemp5195 ==0);
int nctemp5169 = (nctemp5172 && nctemp5185);
if(nctemp5169)
{
struct tree* nctemp5198= p;
struct nctempchar1 *nctemp5202;
static struct nctempchar1 nctemp5203 = {{ 8}, (char*)"struct \0"};
nctemp5202=&nctemp5203;
nctempchar1* nctemp5200= nctemp5202;
int nctemp5204=CodeEs(nctemp5198,nctemp5200);
struct tree* nctemp5206= p;
nctempchar1* nctemp5208= type;
int nctemp5211=CodeEs(nctemp5206,nctemp5208);
struct tree* nctemp5213= p;
struct nctempchar1 *nctemp5217;
static struct nctempchar1 nctemp5218 = {{ 3}, (char*)" *\0"};
nctemp5217=&nctemp5218;
nctempchar1* nctemp5215= nctemp5217;
int nctemp5219=CodeEs(nctemp5213,nctemp5215);
struct tree* nctemp5221= p;
nctempchar1* nctemp5223= pointer;
int nctemp5226=CodeEs(nctemp5221,nctemp5223);
struct tree* nctemp5228= p;
struct nctempchar1 *nctemp5232;
static struct nctempchar1 nctemp5233 = {{ 2}, (char*)"=\0"};
nctemp5232=&nctemp5233;
nctempchar1* nctemp5230= nctemp5232;
int nctemp5234=CodeEs(nctemp5228,nctemp5230);
struct tree* nctemp5236= p;
struct nctempchar1 *nctemp5240;
static struct nctempchar1 nctemp5241 = {{ 2}, (char*)"(\0"};
nctemp5240=&nctemp5241;
nctempchar1* nctemp5238= nctemp5240;
int nctemp5242=CodeEs(nctemp5236,nctemp5238);
struct tree* nctemp5244= p;
struct nctempchar1 *nctemp5248;
static struct nctempchar1 nctemp5249 = {{ 8}, (char*)"struct \0"};
nctemp5248=&nctemp5249;
nctempchar1* nctemp5246= nctemp5248;
int nctemp5250=CodeEs(nctemp5244,nctemp5246);
struct tree* nctemp5252= p;
nctempchar1* nctemp5254= type;
int nctemp5257=CodeEs(nctemp5252,nctemp5254);
struct tree* nctemp5259= p;
struct nctempchar1 *nctemp5263;
static struct nctempchar1 nctemp5264 = {{ 3}, (char*)"*)\0"};
nctemp5263=&nctemp5264;
nctempchar1* nctemp5261= nctemp5263;
int nctemp5265=CodeEs(nctemp5259,nctemp5261);
struct tree* nctemp5267= p;
struct nctempchar1 *nctemp5271;
static struct nctempchar1 nctemp5272 = {{ 11}, (char*)"RunMalloc(\0"};
nctemp5271=&nctemp5272;
nctempchar1* nctemp5269= nctemp5271;
int nctemp5273=CodeEs(nctemp5267,nctemp5269);
struct tree* nctemp5275= p;
struct nctempchar1 *nctemp5279;
static struct nctempchar1 nctemp5280 = {{ 8}, (char*)"sizeof(\0"};
nctemp5279=&nctemp5280;
nctempchar1* nctemp5277= nctemp5279;
int nctemp5281=CodeEs(nctemp5275,nctemp5277);
struct tree* nctemp5283= p;
struct nctempchar1 *nctemp5287;
static struct nctempchar1 nctemp5288 = {{ 8}, (char*)"struct \0"};
nctemp5287=&nctemp5288;
nctempchar1* nctemp5285= nctemp5287;
int nctemp5289=CodeEs(nctemp5283,nctemp5285);
struct tree* nctemp5291= p;
nctempchar1* nctemp5293= type;
int nctemp5296=CodeEs(nctemp5291,nctemp5293);
struct tree* nctemp5298= p;
struct nctempchar1 *nctemp5302;
static struct nctempchar1 nctemp5303 = {{ 6}, (char*)"));\n\0"};
nctemp5302=&nctemp5303;
nctempchar1* nctemp5300= nctemp5302;
int nctemp5304=CodeEs(nctemp5298,nctemp5300);
}
nctempchar1* nctemp5311= structflag;
struct nctempchar1 *nctemp5316;
static struct nctempchar1 nctemp5317 = {{ 7}, (char*)"struct\0"};
nctemp5316=&nctemp5317;
nctempchar1* nctemp5314= nctemp5316;
int nctemp5318=LibeStrcmp(nctemp5311,nctemp5314);
int nctemp5308 = (nctemp5318 ==1);
nctempchar1* nctemp5324= arrayflag;
struct nctempchar1 *nctemp5329;
static struct nctempchar1 nctemp5330 = {{ 6}, (char*)"array\0"};
nctemp5329=&nctemp5330;
nctempchar1* nctemp5327= nctemp5329;
int nctemp5331=LibeStrcmp(nctemp5324,nctemp5327);
int nctemp5321 = (nctemp5331 ==1);
int nctemp5305 = (nctemp5308 && nctemp5321);
if(nctemp5305)
{
struct tree* nctemp5334= p;
struct nctempchar1 *nctemp5338;
static struct nctempchar1 nctemp5339 = {{ 14}, (char*)"struct nctemp\0"};
nctemp5338=&nctemp5339;
nctempchar1* nctemp5336= nctemp5338;
int nctemp5340=CodeEs(nctemp5334,nctemp5336);
struct tree* nctemp5342= p;
nctempchar1* nctemp5344= type;
int nctemp5347=CodeEs(nctemp5342,nctemp5344);
int nctemp5349= rank;
int nctemp5351=CodeEd(nctemp5349);
struct tree* nctemp5353= p;
struct nctempchar1 *nctemp5357;
static struct nctempchar1 nctemp5358 = {{ 3}, (char*)" *\0"};
nctemp5357=&nctemp5358;
nctempchar1* nctemp5355= nctemp5357;
int nctemp5359=CodeEs(nctemp5353,nctemp5355);
struct tree* nctemp5361= p;
nctempchar1* nctemp5363= pointer;
int nctemp5366=CodeEs(nctemp5361,nctemp5363);
struct tree* nctemp5368= p;
struct nctempchar1 *nctemp5372;
static struct nctempchar1 nctemp5373 = {{ 4}, (char*)";\n\0"};
nctemp5372=&nctemp5373;
nctempchar1* nctemp5370= nctemp5372;
int nctemp5374=CodeEs(nctemp5368,nctemp5370);
struct tree* nctemp5376= p;
nctempchar1* nctemp5378= pointer;
int nctemp5381=CodeEs(nctemp5376,nctemp5378);
struct tree* nctemp5383= p;
struct nctempchar1 *nctemp5387;
static struct nctempchar1 nctemp5388 = {{ 2}, (char*)"=\0"};
nctemp5387=&nctemp5388;
nctempchar1* nctemp5385= nctemp5387;
int nctemp5389=CodeEs(nctemp5383,nctemp5385);
struct tree* nctemp5391= p;
struct nctempchar1 *nctemp5395;
static struct nctempchar1 nctemp5396 = {{ 2}, (char*)"(\0"};
nctemp5395=&nctemp5396;
nctempchar1* nctemp5393= nctemp5395;
int nctemp5397=CodeEs(nctemp5391,nctemp5393);
struct tree* nctemp5399= p;
struct nctempchar1 *nctemp5403;
static struct nctempchar1 nctemp5404 = {{ 14}, (char*)"struct nctemp\0"};
nctemp5403=&nctemp5404;
nctempchar1* nctemp5401= nctemp5403;
int nctemp5405=CodeEs(nctemp5399,nctemp5401);
struct tree* nctemp5407= p;
nctempchar1* nctemp5409= type;
int nctemp5412=CodeEs(nctemp5407,nctemp5409);
int nctemp5414= rank;
int nctemp5416=CodeEd(nctemp5414);
struct tree* nctemp5418= p;
struct nctempchar1 *nctemp5422;
static struct nctempchar1 nctemp5423 = {{ 3}, (char*)"*)\0"};
nctemp5422=&nctemp5423;
nctempchar1* nctemp5420= nctemp5422;
int nctemp5424=CodeEs(nctemp5418,nctemp5420);
struct tree* nctemp5426= p;
struct nctempchar1 *nctemp5430;
static struct nctempchar1 nctemp5431 = {{ 11}, (char*)"RunMalloc(\0"};
nctemp5430=&nctemp5431;
nctempchar1* nctemp5428= nctemp5430;
int nctemp5432=CodeEs(nctemp5426,nctemp5428);
struct tree* nctemp5434= p;
struct nctempchar1 *nctemp5438;
static struct nctempchar1 nctemp5439 = {{ 21}, (char*)"sizeof(struct nctemp\0"};
nctemp5438=&nctemp5439;
nctempchar1* nctemp5436= nctemp5438;
int nctemp5440=CodeEs(nctemp5434,nctemp5436);
struct tree* nctemp5442= p;
nctempchar1* nctemp5444= type;
int nctemp5447=CodeEs(nctemp5442,nctemp5444);
int nctemp5449= rank;
int nctemp5451=CodeEd(nctemp5449);
struct tree* nctemp5453= p;
struct nctempchar1 *nctemp5457;
static struct nctempchar1 nctemp5458 = {{ 6}, (char*)"));\n\0"};
nctemp5457=&nctemp5458;
nctempchar1* nctemp5455= nctemp5457;
int nctemp5459=CodeEs(nctemp5453,nctemp5455);
i =0;
p =sp;
int nctemp5468 = (p !=0);
int nctemp5472=nctemp5468;
while(nctemp5472)
{{
struct tree* nctemp5478= sp;
nctempchar1* nctemp5480=CodeExpr(nctemp5478);
dim=nctemp5480;
struct tree* nctemp5482= sp;
nctempchar1* nctemp5484= pointer;
int nctemp5487=CodeEs(nctemp5482,nctemp5484);
struct tree* nctemp5489= sp;
struct nctempchar1 *nctemp5493;
static struct nctempchar1 nctemp5494 = {{ 4}, (char*)"->d\0"};
nctemp5493=&nctemp5494;
nctempchar1* nctemp5491= nctemp5493;
int nctemp5495=CodeEs(nctemp5489,nctemp5491);
struct tree* nctemp5497= sp;
struct nctempchar1 *nctemp5501;
static struct nctempchar1 nctemp5502 = {{ 2}, (char*)"[\0"};
nctemp5501=&nctemp5502;
nctempchar1* nctemp5499= nctemp5501;
int nctemp5503=CodeEs(nctemp5497,nctemp5499);
int nctemp5505= i;
int nctemp5507=CodeEd(nctemp5505);
struct tree* nctemp5509= sp;
struct nctempchar1 *nctemp5513;
static struct nctempchar1 nctemp5514 = {{ 3}, (char*)"]=\0"};
nctemp5513=&nctemp5514;
nctempchar1* nctemp5511= nctemp5513;
int nctemp5515=CodeEs(nctemp5509,nctemp5511);
struct tree* nctemp5517= sp;
nctempchar1* nctemp5519= dim;
int nctemp5522=CodeEs(nctemp5517,nctemp5519);
struct tree* nctemp5524= sp;
struct nctempchar1 *nctemp5528;
static struct nctempchar1 nctemp5529 = {{ 4}, (char*)";\n\0"};
nctemp5528=&nctemp5529;
nctempchar1* nctemp5526= nctemp5528;
int nctemp5530=CodeEs(nctemp5524,nctemp5526);
int nctemp5539 = i + 1;
i =nctemp5539;
struct tree* nctemp5544= p;
struct tree* nctemp5546=PtreeMvsister(nctemp5544);
p =nctemp5546;
}
int nctemp5547 = (p !=0);
nctemp5472=nctemp5547;}struct tree* nctemp5552= sp;
nctempchar1* nctemp5554= pointer;
int nctemp5557=CodeEs(nctemp5552,nctemp5554);
struct tree* nctemp5559= sp;
struct nctempchar1 *nctemp5563;
static struct nctempchar1 nctemp5564 = {{ 4}, (char*)"->a\0"};
nctemp5563=&nctemp5564;
nctempchar1* nctemp5561= nctemp5563;
int nctemp5565=CodeEs(nctemp5559,nctemp5561);
struct tree* nctemp5567= sp;
struct nctempchar1 *nctemp5571;
static struct nctempchar1 nctemp5572 = {{ 2}, (char*)"=\0"};
nctemp5571=&nctemp5572;
nctempchar1* nctemp5569= nctemp5571;
int nctemp5573=CodeEs(nctemp5567,nctemp5569);
struct tree* nctemp5575= sp;
struct nctempchar1 *nctemp5579;
static struct nctempchar1 nctemp5580 = {{ 9}, (char*)"(struct \0"};
nctemp5579=&nctemp5580;
nctempchar1* nctemp5577= nctemp5579;
int nctemp5581=CodeEs(nctemp5575,nctemp5577);
struct tree* nctemp5583= sp;
nctempchar1* nctemp5585= type;
int nctemp5588=CodeEs(nctemp5583,nctemp5585);
struct tree* nctemp5590= sp;
struct nctempchar1 *nctemp5594;
static struct nctempchar1 nctemp5595 = {{ 3}, (char*)"*)\0"};
nctemp5594=&nctemp5595;
nctempchar1* nctemp5592= nctemp5594;
int nctemp5596=CodeEs(nctemp5590,nctemp5592);
struct tree* nctemp5598= sp;
struct nctempchar1 *nctemp5602;
static struct nctempchar1 nctemp5603 = {{ 18}, (char*)"RunMalloc(sizeof(\0"};
nctemp5602=&nctemp5603;
nctempchar1* nctemp5600= nctemp5602;
int nctemp5604=CodeEs(nctemp5598,nctemp5600);
struct tree* nctemp5606= sp;
struct nctempchar1 *nctemp5610;
static struct nctempchar1 nctemp5611 = {{ 8}, (char*)"struct \0"};
nctemp5610=&nctemp5611;
nctempchar1* nctemp5608= nctemp5610;
int nctemp5612=CodeEs(nctemp5606,nctemp5608);
struct tree* nctemp5614= sp;
nctempchar1* nctemp5616= type;
int nctemp5619=CodeEs(nctemp5614,nctemp5616);
struct tree* nctemp5621= sp;
struct nctempchar1 *nctemp5625;
static struct nctempchar1 nctemp5626 = {{ 2}, (char*)")\0"};
nctemp5625=&nctemp5626;
nctempchar1* nctemp5623= nctemp5625;
int nctemp5627=CodeEs(nctemp5621,nctemp5623);
struct tree* nctemp5629= sp;
struct nctempchar1 *nctemp5633;
static struct nctempchar1 nctemp5634 = {{ 2}, (char*)"*\0"};
nctemp5633=&nctemp5634;
nctempchar1* nctemp5631= nctemp5633;
int nctemp5635=CodeEs(nctemp5629,nctemp5631);
struct tree* nctemp5637= sp;
nctempchar1* nctemp5639= totdim;
int nctemp5642=CodeEs(nctemp5637,nctemp5639);
struct tree* nctemp5644= sp;
struct nctempchar1 *nctemp5648;
static struct nctempchar1 nctemp5649 = {{ 5}, (char*)");\n\0"};
nctemp5648=&nctemp5649;
nctempchar1* nctemp5646= nctemp5648;
int nctemp5650=CodeEs(nctemp5644,nctemp5646);
}
nctempchar1* nctemp5657= structflag;
struct nctempchar1 *nctemp5662;
static struct nctempchar1 nctemp5663 = {{ 7}, (char*)"struct\0"};
nctemp5662=&nctemp5663;
nctempchar1* nctemp5660= nctemp5662;
int nctemp5664=LibeStrcmp(nctemp5657,nctemp5660);
int nctemp5654 = (nctemp5664 ==0);
nctempchar1* nctemp5670= arrayflag;
struct nctempchar1 *nctemp5675;
static struct nctempchar1 nctemp5676 = {{ 6}, (char*)"array\0"};
nctemp5675=&nctemp5676;
nctempchar1* nctemp5673= nctemp5675;
int nctemp5677=LibeStrcmp(nctemp5670,nctemp5673);
int nctemp5667 = (nctemp5677 ==1);
int nctemp5651 = (nctemp5654 && nctemp5667);
if(nctemp5651)
{
int nctemp5680= 4;
int nctemp5682=LibeFlush(nctemp5680);
struct tree* nctemp5684= sp;
struct nctempchar1 *nctemp5688;
static struct nctempchar1 nctemp5689 = {{ 7}, (char*)"nctemp\0"};
nctemp5688=&nctemp5689;
nctempchar1* nctemp5686= nctemp5688;
int nctemp5690=CodeEs(nctemp5684,nctemp5686);
struct tree* nctemp5692= sp;
nctempchar1* nctemp5694= type;
int nctemp5697=CodeEs(nctemp5692,nctemp5694);
int nctemp5699= rank;
int nctemp5701=CodeEd(nctemp5699);
struct tree* nctemp5703= sp;
struct nctempchar1 *nctemp5707;
static struct nctempchar1 nctemp5708 = {{ 3}, (char*)" *\0"};
nctemp5707=&nctemp5708;
nctempchar1* nctemp5705= nctemp5707;
int nctemp5709=CodeEs(nctemp5703,nctemp5705);
struct tree* nctemp5711= sp;
nctempchar1* nctemp5713= pointer;
int nctemp5716=CodeEs(nctemp5711,nctemp5713);
struct tree* nctemp5718= sp;
struct nctempchar1 *nctemp5722;
static struct nctempchar1 nctemp5723 = {{ 4}, (char*)";\n\0"};
nctemp5722=&nctemp5723;
nctempchar1* nctemp5720= nctemp5722;
int nctemp5724=CodeEs(nctemp5718,nctemp5720);
p =top;
i =0;
struct tree* nctemp5734= p;
nctempchar1* nctemp5736= pointer;
int nctemp5739=CodeEs(nctemp5734,nctemp5736);
struct tree* nctemp5741= p;
struct nctempchar1 *nctemp5745;
static struct nctempchar1 nctemp5746 = {{ 2}, (char*)"=\0"};
nctemp5745=&nctemp5746;
nctempchar1* nctemp5743= nctemp5745;
int nctemp5747=CodeEs(nctemp5741,nctemp5743);
struct tree* nctemp5749= p;
struct nctempchar1 *nctemp5753;
static struct nctempchar1 nctemp5754 = {{ 2}, (char*)"(\0"};
nctemp5753=&nctemp5754;
nctempchar1* nctemp5751= nctemp5753;
int nctemp5755=CodeEs(nctemp5749,nctemp5751);
struct tree* nctemp5757= p;
struct nctempchar1 *nctemp5761;
static struct nctempchar1 nctemp5762 = {{ 7}, (char*)"nctemp\0"};
nctemp5761=&nctemp5762;
nctempchar1* nctemp5759= nctemp5761;
int nctemp5763=CodeEs(nctemp5757,nctemp5759);
struct tree* nctemp5765= p;
nctempchar1* nctemp5767= type;
int nctemp5770=CodeEs(nctemp5765,nctemp5767);
int nctemp5772= rank;
int nctemp5774=CodeEd(nctemp5772);
struct tree* nctemp5776= p;
struct nctempchar1 *nctemp5780;
static struct nctempchar1 nctemp5781 = {{ 3}, (char*)"*)\0"};
nctemp5780=&nctemp5781;
nctempchar1* nctemp5778= nctemp5780;
int nctemp5782=CodeEs(nctemp5776,nctemp5778);
struct tree* nctemp5784= p;
struct nctempchar1 *nctemp5788;
static struct nctempchar1 nctemp5789 = {{ 11}, (char*)"RunMalloc(\0"};
nctemp5788=&nctemp5789;
nctempchar1* nctemp5786= nctemp5788;
int nctemp5790=CodeEs(nctemp5784,nctemp5786);
struct tree* nctemp5792= p;
struct nctempchar1 *nctemp5796;
static struct nctempchar1 nctemp5797 = {{ 14}, (char*)"sizeof(nctemp\0"};
nctemp5796=&nctemp5797;
nctempchar1* nctemp5794= nctemp5796;
int nctemp5798=CodeEs(nctemp5792,nctemp5794);
struct tree* nctemp5800= p;
nctempchar1* nctemp5802= type;
int nctemp5805=CodeEs(nctemp5800,nctemp5802);
int nctemp5807= rank;
int nctemp5809=CodeEd(nctemp5807);
struct tree* nctemp5811= p;
struct nctempchar1 *nctemp5815;
static struct nctempchar1 nctemp5816 = {{ 6}, (char*)"));\n\0"};
nctemp5815=&nctemp5816;
nctempchar1* nctemp5813= nctemp5815;
int nctemp5817=CodeEs(nctemp5811,nctemp5813);
int nctemp5818 = (p !=0);
int nctemp5822=nctemp5818;
while(nctemp5822)
{{
struct tree* nctemp5828= p;
nctempchar1* nctemp5830=CodeExpr(nctemp5828);
dim=nctemp5830;
struct tree* nctemp5832= p;
nctempchar1* nctemp5834= pointer;
int nctemp5837=CodeEs(nctemp5832,nctemp5834);
struct tree* nctemp5839= p;
struct nctempchar1 *nctemp5843;
static struct nctempchar1 nctemp5844 = {{ 4}, (char*)"->d\0"};
nctemp5843=&nctemp5844;
nctempchar1* nctemp5841= nctemp5843;
int nctemp5845=CodeEs(nctemp5839,nctemp5841);
struct tree* nctemp5847= p;
struct nctempchar1 *nctemp5851;
static struct nctempchar1 nctemp5852 = {{ 2}, (char*)"[\0"};
nctemp5851=&nctemp5852;
nctempchar1* nctemp5849= nctemp5851;
int nctemp5853=CodeEs(nctemp5847,nctemp5849);
int nctemp5855= i;
int nctemp5857=CodeEd(nctemp5855);
struct tree* nctemp5859= p;
struct nctempchar1 *nctemp5863;
static struct nctempchar1 nctemp5864 = {{ 3}, (char*)"]=\0"};
nctemp5863=&nctemp5864;
nctempchar1* nctemp5861= nctemp5863;
int nctemp5865=CodeEs(nctemp5859,nctemp5861);
struct tree* nctemp5867= p;
nctempchar1* nctemp5869= dim;
int nctemp5872=CodeEs(nctemp5867,nctemp5869);
struct tree* nctemp5874= p;
struct nctempchar1 *nctemp5878;
static struct nctempchar1 nctemp5879 = {{ 4}, (char*)";\n\0"};
nctemp5878=&nctemp5879;
nctempchar1* nctemp5876= nctemp5878;
int nctemp5880=CodeEs(nctemp5874,nctemp5876);
int nctemp5889 = i + 1;
i =nctemp5889;
struct tree* nctemp5894= p;
struct tree* nctemp5896=PtreeMvsister(nctemp5894);
p =nctemp5896;
}
int nctemp5897 = (p !=0);
nctemp5822=nctemp5897;}p =top;
struct tree* nctemp5906= p;
nctempchar1* nctemp5908= pointer;
int nctemp5911=CodeEs(nctemp5906,nctemp5908);
struct tree* nctemp5913= p;
struct nctempchar1 *nctemp5917;
static struct nctempchar1 nctemp5918 = {{ 4}, (char*)"->a\0"};
nctemp5917=&nctemp5918;
nctempchar1* nctemp5915= nctemp5917;
int nctemp5919=CodeEs(nctemp5913,nctemp5915);
struct tree* nctemp5921= p;
struct nctempchar1 *nctemp5925;
static struct nctempchar1 nctemp5926 = {{ 3}, (char*)"=(\0"};
nctemp5925=&nctemp5926;
nctempchar1* nctemp5923= nctemp5925;
int nctemp5927=CodeEs(nctemp5921,nctemp5923);
struct tree* nctemp5929= p;
nctempchar1* nctemp5931= type;
int nctemp5934=CodeEs(nctemp5929,nctemp5931);
struct tree* nctemp5936= p;
struct nctempchar1 *nctemp5940;
static struct nctempchar1 nctemp5941 = {{ 4}, (char*)" *)\0"};
nctemp5940=&nctemp5941;
nctempchar1* nctemp5938= nctemp5940;
int nctemp5942=CodeEs(nctemp5936,nctemp5938);
struct tree* nctemp5944= p;
struct nctempchar1 *nctemp5948;
static struct nctempchar1 nctemp5949 = {{ 18}, (char*)"RunMalloc(sizeof(\0"};
nctemp5948=&nctemp5949;
nctempchar1* nctemp5946= nctemp5948;
int nctemp5950=CodeEs(nctemp5944,nctemp5946);
struct tree* nctemp5952= p;
nctempchar1* nctemp5954= type;
int nctemp5957=CodeEs(nctemp5952,nctemp5954);
struct tree* nctemp5959= p;
struct nctempchar1 *nctemp5963;
static struct nctempchar1 nctemp5964 = {{ 2}, (char*)")\0"};
nctemp5963=&nctemp5964;
nctempchar1* nctemp5961= nctemp5963;
int nctemp5965=CodeEs(nctemp5959,nctemp5961);
struct tree* nctemp5967= p;
struct nctempchar1 *nctemp5971;
static struct nctempchar1 nctemp5972 = {{ 2}, (char*)"*\0"};
nctemp5971=&nctemp5972;
nctempchar1* nctemp5969= nctemp5971;
int nctemp5973=CodeEs(nctemp5967,nctemp5969);
struct tree* nctemp5975= p;
nctempchar1* nctemp5977= totdim;
int nctemp5980=CodeEs(nctemp5975,nctemp5977);
struct tree* nctemp5982= p;
struct nctempchar1 *nctemp5986;
static struct nctempchar1 nctemp5987 = {{ 5}, (char*)");\n\0"};
nctemp5986=&nctemp5987;
nctempchar1* nctemp5984= nctemp5986;
int nctemp5988=CodeEs(nctemp5982,nctemp5984);
}
return pointer;
}
nctempchar1 * CodeDelete (struct tree* p)
{
nctempchar1 *tmp;
struct tree* nctemp5995= p;
struct tree* nctemp5997=PtreeMvchild(nctemp5995);
p =nctemp5997;
struct tree* nctemp6002= p;
struct tree* nctemp6004=PtreeMvchild(nctemp6002);
p =nctemp6004;
struct tree* nctemp6010= p;
nctempchar1* nctemp6012=CodeBinexpr(nctemp6010);
tmp=nctemp6012;
struct tree* nctemp6016= p;
nctempchar1* nctemp6018=PtreeGetref(nctemp6016);
nctempchar1* nctemp6014= nctemp6018;
struct nctempchar1 *nctemp6021;
static struct nctempchar1 nctemp6022 = {{ 5}, (char*)"aref\0"};
nctemp6021=&nctemp6022;
nctempchar1* nctemp6019= nctemp6021;
int nctemp6023=LibeStrcmp(nctemp6014,nctemp6019);
if(nctemp6023)
{
struct tree* nctemp6025= p;
struct nctempchar1 *nctemp6029;
static struct nctempchar1 nctemp6030 = {{ 9}, (char*)"RunFree(\0"};
nctemp6029=&nctemp6030;
nctempchar1* nctemp6027= nctemp6029;
int nctemp6031=CodeEs(nctemp6025,nctemp6027);
struct tree* nctemp6033= p;
nctempchar1* nctemp6035= tmp;
int nctemp6038=CodeEs(nctemp6033,nctemp6035);
struct tree* nctemp6040= p;
struct nctempchar1 *nctemp6044;
static struct nctempchar1 nctemp6045 = {{ 8}, (char*)"->a);\n\0"};
nctemp6044=&nctemp6045;
nctempchar1* nctemp6042= nctemp6044;
int nctemp6046=CodeEs(nctemp6040,nctemp6042);
struct tree* nctemp6048= p;
struct nctempchar1 *nctemp6052;
static struct nctempchar1 nctemp6053 = {{ 9}, (char*)"RunFree(\0"};
nctemp6052=&nctemp6053;
nctempchar1* nctemp6050= nctemp6052;
int nctemp6054=CodeEs(nctemp6048,nctemp6050);
struct tree* nctemp6056= p;
nctempchar1* nctemp6058= tmp;
int nctemp6061=CodeEs(nctemp6056,nctemp6058);
struct tree* nctemp6063= p;
struct nctempchar1 *nctemp6067;
static struct nctempchar1 nctemp6068 = {{ 5}, (char*)");\n\0"};
nctemp6067=&nctemp6068;
nctempchar1* nctemp6065= nctemp6067;
int nctemp6069=CodeEs(nctemp6063,nctemp6065);
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
nctempchar1* nctemp6077=CodeMktemp();
tempr=nctemp6077;
struct tree* nctemp6082= p;
struct tree* nctemp6084=PtreeMvchild(nctemp6082);
np =nctemp6084;
struct tree* nctemp6090= np;
nctempchar1* nctemp6092=CodeExpr(nctemp6090);
temp=nctemp6092;
struct tree* nctemp6097= np;
struct tree* nctemp6099=PtreeMvsister(nctemp6097);
sp =nctemp6099;
struct tree* nctemp6105= sp;
nctempchar1* nctemp6107=CodeExpr(nctemp6105);
index=nctemp6107;
struct tree* nctemp6109= p;
struct tree* nctemp6113= p;
nctempchar1* nctemp6115=PtreeGetype(nctemp6113);
nctempchar1* nctemp6111= nctemp6115;
int nctemp6116=CodeEs(nctemp6109,nctemp6111);
struct tree* nctemp6118= p;
struct nctempchar1 *nctemp6122;
static struct nctempchar1 nctemp6123 = {{ 2}, (char*)" \0"};
nctemp6122=&nctemp6123;
nctempchar1* nctemp6120= nctemp6122;
int nctemp6124=CodeEs(nctemp6118,nctemp6120);
struct tree* nctemp6126= p;
nctempchar1* nctemp6128= tempr;
int nctemp6131=CodeEs(nctemp6126,nctemp6128);
struct tree* nctemp6133= p;
struct nctempchar1 *nctemp6137;
static struct nctempchar1 nctemp6138 = {{ 2}, (char*)"=\0"};
nctemp6137=&nctemp6138;
nctempchar1* nctemp6135= nctemp6137;
int nctemp6139=CodeEs(nctemp6133,nctemp6135);
struct tree* nctemp6141= p;
nctempchar1* nctemp6143= temp;
int nctemp6146=CodeEs(nctemp6141,nctemp6143);
struct tree* nctemp6148= p;
struct nctempchar1 *nctemp6152;
static struct nctempchar1 nctemp6153 = {{ 4}, (char*)"->d\0"};
nctemp6152=&nctemp6153;
nctempchar1* nctemp6150= nctemp6152;
int nctemp6154=CodeEs(nctemp6148,nctemp6150);
struct tree* nctemp6156= p;
struct nctempchar1 *nctemp6160;
static struct nctempchar1 nctemp6161 = {{ 2}, (char*)"[\0"};
nctemp6160=&nctemp6161;
nctempchar1* nctemp6158= nctemp6160;
int nctemp6162=CodeEs(nctemp6156,nctemp6158);
struct tree* nctemp6164= p;
nctempchar1* nctemp6166= index;
int nctemp6169=CodeEs(nctemp6164,nctemp6166);
struct tree* nctemp6171= p;
struct nctempchar1 *nctemp6175;
static struct nctempchar1 nctemp6176 = {{ 3}, (char*)"];\0"};
nctemp6175=&nctemp6176;
nctempchar1* nctemp6173= nctemp6175;
int nctemp6177=CodeEs(nctemp6171,nctemp6173);
return tempr;
}
nctempchar1 * CodeCmplx (struct tree* p)
{
struct tree* np;
struct tree* sp;
nctempchar1 *q;
nctempchar1 *r;
nctempchar1 *tempr;
nctempchar1* nctemp6185=CodeMktemp();
tempr=nctemp6185;
struct tree* nctemp6190= p;
struct tree* nctemp6192=PtreeMvchild(nctemp6190);
np =nctemp6192;
struct tree* nctemp6197= np;
struct tree* nctemp6199=PtreeMvchild(nctemp6197);
np =nctemp6199;
struct tree* nctemp6205= np;
nctempchar1* nctemp6207=CodeExpr(nctemp6205);
q=nctemp6207;
struct tree* nctemp6212= np;
struct tree* nctemp6214=PtreeMvsister(nctemp6212);
sp =nctemp6214;
struct tree* nctemp6220= sp;
nctempchar1* nctemp6222=CodeExpr(nctemp6220);
r=nctemp6222;
struct tree* nctemp6224= p;
struct tree* nctemp6228= p;
nctempchar1* nctemp6230=PtreeGetype(nctemp6228);
nctempchar1* nctemp6226= nctemp6230;
int nctemp6231=CodeEs(nctemp6224,nctemp6226);
struct tree* nctemp6233= p;
struct nctempchar1 *nctemp6237;
static struct nctempchar1 nctemp6238 = {{ 2}, (char*)" \0"};
nctemp6237=&nctemp6238;
nctempchar1* nctemp6235= nctemp6237;
int nctemp6239=CodeEs(nctemp6233,nctemp6235);
struct tree* nctemp6241= p;
nctempchar1* nctemp6243= tempr;
int nctemp6246=CodeEs(nctemp6241,nctemp6243);
struct tree* nctemp6248= p;
struct nctempchar1 *nctemp6252;
static struct nctempchar1 nctemp6253 = {{ 3}, (char*)".r\0"};
nctemp6252=&nctemp6253;
nctempchar1* nctemp6250= nctemp6252;
int nctemp6254=CodeEs(nctemp6248,nctemp6250);
struct tree* nctemp6256= p;
struct nctempchar1 *nctemp6260;
static struct nctempchar1 nctemp6261 = {{ 3}, (char*)" =\0"};
nctemp6260=&nctemp6261;
nctempchar1* nctemp6258= nctemp6260;
int nctemp6262=CodeEs(nctemp6256,nctemp6258);
struct tree* nctemp6264= p;
nctempchar1* nctemp6266= q;
int nctemp6269=CodeEs(nctemp6264,nctemp6266);
struct tree* nctemp6271= p;
struct nctempchar1 *nctemp6275;
static struct nctempchar1 nctemp6276 = {{ 2}, (char*)";\0"};
nctemp6275=&nctemp6276;
nctempchar1* nctemp6273= nctemp6275;
int nctemp6277=CodeEs(nctemp6271,nctemp6273);
struct tree* nctemp6279= p;
struct tree* nctemp6283= p;
nctempchar1* nctemp6285=PtreeGetype(nctemp6283);
nctempchar1* nctemp6281= nctemp6285;
int nctemp6286=CodeEs(nctemp6279,nctemp6281);
struct tree* nctemp6288= p;
struct nctempchar1 *nctemp6292;
static struct nctempchar1 nctemp6293 = {{ 2}, (char*)" \0"};
nctemp6292=&nctemp6293;
nctempchar1* nctemp6290= nctemp6292;
int nctemp6294=CodeEs(nctemp6288,nctemp6290);
struct tree* nctemp6296= p;
nctempchar1* nctemp6298= tempr;
int nctemp6301=CodeEs(nctemp6296,nctemp6298);
struct tree* nctemp6303= p;
struct nctempchar1 *nctemp6307;
static struct nctempchar1 nctemp6308 = {{ 3}, (char*)".i\0"};
nctemp6307=&nctemp6308;
nctempchar1* nctemp6305= nctemp6307;
int nctemp6309=CodeEs(nctemp6303,nctemp6305);
struct tree* nctemp6311= p;
struct nctempchar1 *nctemp6315;
static struct nctempchar1 nctemp6316 = {{ 2}, (char*)"=\0"};
nctemp6315=&nctemp6316;
nctempchar1* nctemp6313= nctemp6315;
int nctemp6317=CodeEs(nctemp6311,nctemp6313);
struct tree* nctemp6319= p;
nctempchar1* nctemp6321= r;
int nctemp6324=CodeEs(nctemp6319,nctemp6321);
struct tree* nctemp6326= p;
struct nctempchar1 *nctemp6330;
static struct nctempchar1 nctemp6331 = {{ 2}, (char*)";\0"};
nctemp6330=&nctemp6331;
nctempchar1* nctemp6328= nctemp6330;
int nctemp6332=CodeEs(nctemp6326,nctemp6328);
return tempr;
}
nctempchar1 * CodeIm (struct tree* p)
{
struct tree* np;
nctempchar1 *q;
nctempchar1 *tempr;
nctempchar1* nctemp6340=CodeMktemp();
tempr=nctemp6340;
struct tree* nctemp6345= p;
struct tree* nctemp6347=PtreeMvchild(nctemp6345);
np =nctemp6347;
struct tree* nctemp6353= np;
nctempchar1* nctemp6355=CodeExpr(nctemp6353);
q=nctemp6355;
struct tree* nctemp6357= p;
struct tree* nctemp6361= p;
nctempchar1* nctemp6363=PtreeGetype(nctemp6361);
nctempchar1* nctemp6359= nctemp6363;
int nctemp6364=CodeEs(nctemp6357,nctemp6359);
struct tree* nctemp6366= p;
struct nctempchar1 *nctemp6370;
static struct nctempchar1 nctemp6371 = {{ 2}, (char*)" \0"};
nctemp6370=&nctemp6371;
nctempchar1* nctemp6368= nctemp6370;
int nctemp6372=CodeEs(nctemp6366,nctemp6368);
struct tree* nctemp6374= p;
nctempchar1* nctemp6376= tempr;
int nctemp6379=CodeEs(nctemp6374,nctemp6376);
struct tree* nctemp6381= p;
struct nctempchar1 *nctemp6385;
static struct nctempchar1 nctemp6386 = {{ 3}, (char*)" =\0"};
nctemp6385=&nctemp6386;
nctempchar1* nctemp6383= nctemp6385;
int nctemp6387=CodeEs(nctemp6381,nctemp6383);
struct tree* nctemp6389= p;
nctempchar1* nctemp6391= q;
int nctemp6394=CodeEs(nctemp6389,nctemp6391);
struct tree* nctemp6396= p;
struct nctempchar1 *nctemp6400;
static struct nctempchar1 nctemp6401 = {{ 5}, (char*)".i  \0"};
nctemp6400=&nctemp6401;
nctempchar1* nctemp6398= nctemp6400;
int nctemp6402=CodeEs(nctemp6396,nctemp6398);
struct tree* nctemp6404= p;
struct nctempchar1 *nctemp6408;
static struct nctempchar1 nctemp6409 = {{ 4}, (char*)";\n\0"};
nctemp6408=&nctemp6409;
nctempchar1* nctemp6406= nctemp6408;
int nctemp6410=CodeEs(nctemp6404,nctemp6406);
return tempr;
}
nctempchar1 * CodeRe (struct tree* p)
{
struct tree* np;
nctempchar1 *q;
nctempchar1 *tmp;
struct tree* nctemp6417= p;
struct tree* nctemp6419=PtreeMvchild(nctemp6417);
np =nctemp6419;
struct tree* nctemp6425= np;
nctempchar1* nctemp6427=CodeExpr(nctemp6425);
q=nctemp6427;
nctempchar1* nctemp6433=CodeMktemp();
tmp=nctemp6433;
struct tree* nctemp6435= p;
struct tree* nctemp6439= p;
nctempchar1* nctemp6441=PtreeGetype(nctemp6439);
nctempchar1* nctemp6437= nctemp6441;
int nctemp6442=CodeEs(nctemp6435,nctemp6437);
struct tree* nctemp6444= p;
struct nctempchar1 *nctemp6448;
static struct nctempchar1 nctemp6449 = {{ 2}, (char*)" \0"};
nctemp6448=&nctemp6449;
nctempchar1* nctemp6446= nctemp6448;
int nctemp6450=CodeEs(nctemp6444,nctemp6446);
struct tree* nctemp6452= p;
nctempchar1* nctemp6454= tmp;
int nctemp6457=CodeEs(nctemp6452,nctemp6454);
struct tree* nctemp6459= p;
struct nctempchar1 *nctemp6463;
static struct nctempchar1 nctemp6464 = {{ 3}, (char*)" =\0"};
nctemp6463=&nctemp6464;
nctempchar1* nctemp6461= nctemp6463;
int nctemp6465=CodeEs(nctemp6459,nctemp6461);
struct tree* nctemp6467= p;
nctempchar1* nctemp6469= q;
int nctemp6472=CodeEs(nctemp6467,nctemp6469);
struct tree* nctemp6474= p;
struct nctempchar1 *nctemp6478;
static struct nctempchar1 nctemp6479 = {{ 5}, (char*)".r  \0"};
nctemp6478=&nctemp6479;
nctempchar1* nctemp6476= nctemp6478;
int nctemp6480=CodeEs(nctemp6474,nctemp6476);
struct tree* nctemp6482= p;
struct nctempchar1 *nctemp6486;
static struct nctempchar1 nctemp6487 = {{ 4}, (char*)";\n\0"};
nctemp6486=&nctemp6487;
nctempchar1* nctemp6484= nctemp6486;
int nctemp6488=CodeEs(nctemp6482,nctemp6484);
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
struct tree* nctemp6501= p;
nctempchar1* nctemp6503=PtreeGetdef(nctemp6501);
nctempchar1* nctemp6499= nctemp6503;
struct symbol* nctemp6506=SymGetetp();
struct symbol* nctemp6504= nctemp6506;
struct symbol* nctemp6507=SymLookup(nctemp6499,nctemp6504);
tp =nctemp6507;
struct tree* nctemp6512= p;
struct tree* nctemp6514=PtreeMvchild(nctemp6512);
sp =nctemp6514;
int nctemp6515 = (sp !=0);
if(nctemp6515)
{
struct tree* nctemp6524= sp;
nctempchar1* nctemp6526=PtreeGetname(nctemp6524);
nctempchar1* nctemp6522= nctemp6526;
struct nctempchar1 *nctemp6529;
static struct nctempchar1 nctemp6530 = {{ 9}, (char*)"exprlist\0"};
nctemp6529=&nctemp6530;
nctempchar1* nctemp6527= nctemp6529;
int nctemp6531=LibeStrcmp(nctemp6522,nctemp6527);
int nctemp6519 = (nctemp6531 ==1);
if(nctemp6519)
{
struct tree* nctemp6537= sp;
struct tree* nctemp6539=PtreeMvchild(nctemp6537);
sp =nctemp6539;
}
}
int nctemp6540 = (sp !=0);
int nctemp6544=nctemp6540;
while(nctemp6544)
{{
nctempchar1* nctemp6550=CodeMktemp();
ntemp=nctemp6550;
struct tree* nctemp6552= sp;
nctempchar1* nctemp6554= ntemp;
int nctemp6557=PtreeSetempr(nctemp6552,nctemp6554);
struct tree* nctemp6563= sp;
nctempchar1* nctemp6565=CodeExpr(nctemp6563);
temp=nctemp6565;
struct tree* nctemp6571= sp;
nctempchar1* nctemp6573=PtreeGetref(nctemp6571);
nctempchar1* nctemp6569= nctemp6573;
struct nctempchar1 *nctemp6576;
static struct nctempchar1 nctemp6577 = {{ 5}, (char*)"aref\0"};
nctemp6576=&nctemp6577;
nctempchar1* nctemp6574= nctemp6576;
int nctemp6578=LibeStrcmp(nctemp6569,nctemp6574);
int nctemp6566 = (nctemp6578 ==1);
if(nctemp6566)
{
struct tree* nctemp6581= sp;
struct nctempchar1 *nctemp6585;
static struct nctempchar1 nctemp6586 = {{ 7}, (char*)"nctemp\0"};
nctemp6585=&nctemp6586;
nctempchar1* nctemp6583= nctemp6585;
int nctemp6587=CodeEs(nctemp6581,nctemp6583);
struct tree* nctemp6589= sp;
struct tree* nctemp6593= sp;
nctempchar1* nctemp6595=PtreeGetype(nctemp6593);
nctempchar1* nctemp6591= nctemp6595;
int nctemp6596=CodeEs(nctemp6589,nctemp6591);
struct tree* nctemp6600= sp;
int nctemp6602=PtreeGetrank(nctemp6600);
int nctemp6598= nctemp6602;
int nctemp6603=CodeEd(nctemp6598);
struct tree* nctemp6605= sp;
struct nctempchar1 *nctemp6609;
static struct nctempchar1 nctemp6610 = {{ 2}, (char*)"*\0"};
nctemp6609=&nctemp6610;
nctempchar1* nctemp6607= nctemp6609;
int nctemp6611=CodeEs(nctemp6605,nctemp6607);
}
else{
struct tree* nctemp6617= sp;
nctempchar1* nctemp6619=PtreeGetref(nctemp6617);
nctempchar1* nctemp6615= nctemp6619;
struct nctempchar1 *nctemp6622;
static struct nctempchar1 nctemp6623 = {{ 5}, (char*)"sref\0"};
nctemp6622=&nctemp6623;
nctempchar1* nctemp6620= nctemp6622;
int nctemp6624=LibeStrcmp(nctemp6615,nctemp6620);
int nctemp6612 = (nctemp6624 ==1);
if(nctemp6612)
{
struct tree* nctemp6627= sp;
struct nctempchar1 *nctemp6631;
static struct nctempchar1 nctemp6632 = {{ 8}, (char*)"struct \0"};
nctemp6631=&nctemp6632;
nctempchar1* nctemp6629= nctemp6631;
int nctemp6633=CodeEs(nctemp6627,nctemp6629);
struct tree* nctemp6635= sp;
struct tree* nctemp6639= sp;
nctempchar1* nctemp6641=PtreeGetype(nctemp6639);
nctempchar1* nctemp6637= nctemp6641;
int nctemp6642=CodeEs(nctemp6635,nctemp6637);
struct tree* nctemp6644= sp;
struct nctempchar1 *nctemp6648;
static struct nctempchar1 nctemp6649 = {{ 2}, (char*)"*\0"};
nctemp6648=&nctemp6649;
nctempchar1* nctemp6646= nctemp6648;
int nctemp6650=CodeEs(nctemp6644,nctemp6646);
}
else{
struct tree* nctemp6652= sp;
struct tree* nctemp6656= sp;
nctempchar1* nctemp6658=PtreeGetype(nctemp6656);
nctempchar1* nctemp6654= nctemp6658;
int nctemp6659=CodeEs(nctemp6652,nctemp6654);
}
}
struct tree* nctemp6661= sp;
struct nctempchar1 *nctemp6665;
static struct nctempchar1 nctemp6666 = {{ 2}, (char*)" \0"};
nctemp6665=&nctemp6666;
nctempchar1* nctemp6663= nctemp6665;
int nctemp6667=CodeEs(nctemp6661,nctemp6663);
struct tree* nctemp6669= sp;
nctempchar1* nctemp6671= ntemp;
int nctemp6674=CodeEs(nctemp6669,nctemp6671);
struct tree* nctemp6676= sp;
struct nctempchar1 *nctemp6680;
static struct nctempchar1 nctemp6681 = {{ 3}, (char*)"= \0"};
nctemp6680=&nctemp6681;
nctempchar1* nctemp6678= nctemp6680;
int nctemp6682=CodeEs(nctemp6676,nctemp6678);
struct tree* nctemp6684= sp;
nctempchar1* nctemp6686= temp;
int nctemp6689=CodeEs(nctemp6684,nctemp6686);
struct tree* nctemp6691= sp;
struct nctempchar1 *nctemp6695;
static struct nctempchar1 nctemp6696 = {{ 4}, (char*)";\n\0"};
nctemp6695=&nctemp6696;
nctempchar1* nctemp6693= nctemp6695;
int nctemp6697=CodeEs(nctemp6691,nctemp6693);
struct tree* nctemp6702= sp;
struct tree* nctemp6704=PtreeMvsister(nctemp6702);
sp =nctemp6704;
}
int nctemp6705 = (sp !=0);
nctemp6544=nctemp6705;}nctempchar1* nctemp6714=CodeMktemp();
ntemp=nctemp6714;
struct tree* nctemp6720= p;
nctempchar1* nctemp6722=PtreeGetref(nctemp6720);
nctempchar1* nctemp6718= nctemp6722;
struct nctempchar1 *nctemp6725;
static struct nctempchar1 nctemp6726 = {{ 5}, (char*)"aref\0"};
nctemp6725=&nctemp6726;
nctempchar1* nctemp6723= nctemp6725;
int nctemp6727=LibeStrcmp(nctemp6718,nctemp6723);
int nctemp6715 = (nctemp6727 ==1);
if(nctemp6715)
{
struct tree* nctemp6730= p;
struct nctempchar1 *nctemp6734;
static struct nctempchar1 nctemp6735 = {{ 7}, (char*)"nctemp\0"};
nctemp6734=&nctemp6735;
nctempchar1* nctemp6732= nctemp6734;
int nctemp6736=CodeEs(nctemp6730,nctemp6732);
struct tree* nctemp6738= p;
struct tree* nctemp6742= p;
nctempchar1* nctemp6744=PtreeGetype(nctemp6742);
nctempchar1* nctemp6740= nctemp6744;
int nctemp6745=CodeEs(nctemp6738,nctemp6740);
struct tree* nctemp6749= p;
int nctemp6751=PtreeGetrank(nctemp6749);
int nctemp6747= nctemp6751;
int nctemp6752=CodeEd(nctemp6747);
struct tree* nctemp6754= p;
struct nctempchar1 *nctemp6758;
static struct nctempchar1 nctemp6759 = {{ 2}, (char*)"*\0"};
nctemp6758=&nctemp6759;
nctempchar1* nctemp6756= nctemp6758;
int nctemp6760=CodeEs(nctemp6754,nctemp6756);
}
else{
struct tree* nctemp6766= p;
nctempchar1* nctemp6768=PtreeGetref(nctemp6766);
nctempchar1* nctemp6764= nctemp6768;
struct nctempchar1 *nctemp6771;
static struct nctempchar1 nctemp6772 = {{ 5}, (char*)"sref\0"};
nctemp6771=&nctemp6772;
nctempchar1* nctemp6769= nctemp6771;
int nctemp6773=LibeStrcmp(nctemp6764,nctemp6769);
int nctemp6761 = (nctemp6773 ==1);
if(nctemp6761)
{
struct tree* nctemp6776= p;
struct nctempchar1 *nctemp6780;
static struct nctempchar1 nctemp6781 = {{ 8}, (char*)"struct \0"};
nctemp6780=&nctemp6781;
nctempchar1* nctemp6778= nctemp6780;
int nctemp6782=CodeEs(nctemp6776,nctemp6778);
struct tree* nctemp6784= p;
struct tree* nctemp6788= p;
nctempchar1* nctemp6790=PtreeGetype(nctemp6788);
nctempchar1* nctemp6786= nctemp6790;
int nctemp6791=CodeEs(nctemp6784,nctemp6786);
struct tree* nctemp6793= p;
struct nctempchar1 *nctemp6797;
static struct nctempchar1 nctemp6798 = {{ 2}, (char*)"*\0"};
nctemp6797=&nctemp6798;
nctempchar1* nctemp6795= nctemp6797;
int nctemp6799=CodeEs(nctemp6793,nctemp6795);
}
else{
struct tree* nctemp6801= p;
struct tree* nctemp6805= p;
nctempchar1* nctemp6807=PtreeGetype(nctemp6805);
nctempchar1* nctemp6803= nctemp6807;
int nctemp6808=CodeEs(nctemp6801,nctemp6803);
}
}
struct tree* nctemp6810= p;
struct nctempchar1 *nctemp6814;
static struct nctempchar1 nctemp6815 = {{ 2}, (char*)" \0"};
nctemp6814=&nctemp6815;
nctempchar1* nctemp6812= nctemp6814;
int nctemp6816=CodeEs(nctemp6810,nctemp6812);
struct tree* nctemp6818= p;
nctempchar1* nctemp6820= ntemp;
int nctemp6823=CodeEs(nctemp6818,nctemp6820);
struct tree* nctemp6825= p;
struct nctempchar1 *nctemp6829;
static struct nctempchar1 nctemp6830 = {{ 2}, (char*)"=\0"};
nctemp6829=&nctemp6830;
nctempchar1* nctemp6827= nctemp6829;
int nctemp6831=CodeEs(nctemp6825,nctemp6827);
struct tree* nctemp6833= p;
struct symbol* nctemp6837= tp;
nctempchar1* nctemp6839=SymGetname(nctemp6837);
nctempchar1* nctemp6835= nctemp6839;
int nctemp6840=CodeEs(nctemp6833,nctemp6835);
struct tree* nctemp6842= p;
struct nctempchar1 *nctemp6846;
static struct nctempchar1 nctemp6847 = {{ 2}, (char*)"(\0"};
nctemp6846=&nctemp6847;
nctempchar1* nctemp6844= nctemp6846;
int nctemp6848=CodeEs(nctemp6842,nctemp6844);
struct tree* nctemp6853= p;
struct tree* nctemp6855=PtreeMvchild(nctemp6853);
sp =nctemp6855;
int nctemp6856 = (sp !=0);
if(nctemp6856)
{
struct tree* nctemp6864= sp;
struct tree* nctemp6866=PtreeMvchild(nctemp6864);
sp =nctemp6866;
}
int nctemp6867 = (sp !=0);
int nctemp6871=nctemp6867;
while(nctemp6871)
{{
struct tree* nctemp6873= p;
struct tree* nctemp6877= sp;
nctempchar1* nctemp6879=PtreeGetempr(nctemp6877);
nctempchar1* nctemp6875= nctemp6879;
int nctemp6880=CodeEs(nctemp6873,nctemp6875);
struct tree* nctemp6888= sp;
struct tree* nctemp6890=PtreeMvsister(nctemp6888);
sp =nctemp6890;
int nctemp6881 = (sp !=0);
if(nctemp6881)
{
struct tree* nctemp6893= p;
struct nctempchar1 *nctemp6897;
static struct nctempchar1 nctemp6898 = {{ 2}, (char*)",\0"};
nctemp6897=&nctemp6898;
nctempchar1* nctemp6895= nctemp6897;
int nctemp6899=CodeEs(nctemp6893,nctemp6895);
}
int nctemp6908 = noargs + 1;
noargs =nctemp6908;
}
int nctemp6909 = (sp !=0);
nctemp6871=nctemp6909;}struct tree* nctemp6914= p;
struct nctempchar1 *nctemp6918;
static struct nctempchar1 nctemp6919 = {{ 5}, (char*)");\n\0"};
nctemp6918=&nctemp6919;
nctempchar1* nctemp6916= nctemp6918;
int nctemp6920=CodeEs(nctemp6914,nctemp6916);
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
nctempchar1* nctemp6928=CodeMktemp();
pointer=nctemp6928;
nctempchar1* nctemp6934=CodeMktemp();
descr=nctemp6934;
struct tree* nctemp6940= p;
nctempchar1* nctemp6942=PtreeGetype(nctemp6940);
type=nctemp6942;
struct tree* nctemp6948= p;
nctempchar1* nctemp6950=PtreeGetname(nctemp6948);
nctempchar1* nctemp6946= nctemp6950;
struct nctempchar1 *nctemp6953;
static struct nctempchar1 nctemp6954 = {{ 5}, (char*)"cast\0"};
nctemp6953=&nctemp6954;
nctempchar1* nctemp6951= nctemp6953;
int nctemp6955=LibeStrcmp(nctemp6946,nctemp6951);
int nctemp6943 = (nctemp6955 ==1);
if(nctemp6943)
{
struct tree* nctemp6961= p;
struct tree* nctemp6963=PtreeMvchild(nctemp6961);
np =nctemp6963;
struct tree* nctemp6968= np;
struct tree* nctemp6970=PtreeMvsister(nctemp6968);
sp =nctemp6970;
struct tree* nctemp6976= sp;
nctempchar1* nctemp6978=CodeExpr(nctemp6976);
expr=nctemp6978;
struct tree* nctemp6984= np;
nctempchar1* nctemp6986=PtreeGetref(nctemp6984);
nctempchar1* nctemp6982= nctemp6986;
struct nctempchar1 *nctemp6989;
static struct nctempchar1 nctemp6990 = {{ 5}, (char*)"sref\0"};
nctemp6989=&nctemp6990;
nctempchar1* nctemp6987= nctemp6989;
int nctemp6991=LibeStrcmp(nctemp6982,nctemp6987);
int nctemp6979 = (nctemp6991 ==1);
if(nctemp6979)
{
nctempchar1* nctemp6998=CodeMktemp();
tmp=nctemp6998;
struct tree* nctemp7000= p;
nctempchar1* nctemp7002= type;
int nctemp7005=CodeEs(nctemp7000,nctemp7002);
struct tree* nctemp7007= p;
struct nctempchar1 *nctemp7011;
static struct nctempchar1 nctemp7012 = {{ 2}, (char*)" \0"};
nctemp7011=&nctemp7012;
nctempchar1* nctemp7009= nctemp7011;
int nctemp7013=CodeEs(nctemp7007,nctemp7009);
struct tree* nctemp7015= p;
nctempchar1* nctemp7017= tmp;
int nctemp7020=CodeEs(nctemp7015,nctemp7017);
struct tree* nctemp7022= p;
struct nctempchar1 *nctemp7026;
static struct nctempchar1 nctemp7027 = {{ 2}, (char*)"=\0"};
nctemp7026=&nctemp7027;
nctempchar1* nctemp7024= nctemp7026;
int nctemp7028=CodeEs(nctemp7022,nctemp7024);
struct tree* nctemp7030= p;
struct nctempchar1 *nctemp7034;
static struct nctempchar1 nctemp7035 = {{ 9}, (char*)"(struct \0"};
nctemp7034=&nctemp7035;
nctempchar1* nctemp7032= nctemp7034;
int nctemp7036=CodeEs(nctemp7030,nctemp7032);
struct tree* nctemp7038= p;
struct tree* nctemp7042= np;
nctempchar1* nctemp7044=PtreeGetype(nctemp7042);
nctempchar1* nctemp7040= nctemp7044;
int nctemp7045=CodeEs(nctemp7038,nctemp7040);
struct tree* nctemp7047= p;
struct nctempchar1 *nctemp7051;
static struct nctempchar1 nctemp7052 = {{ 4}, (char*)"*)(\0"};
nctemp7051=&nctemp7052;
nctempchar1* nctemp7049= nctemp7051;
int nctemp7053=CodeEs(nctemp7047,nctemp7049);
struct tree* nctemp7055= p;
nctempchar1* nctemp7057= expr;
int nctemp7060=CodeEs(nctemp7055,nctemp7057);
struct tree* nctemp7062= p;
struct nctempchar1 *nctemp7066;
static struct nctempchar1 nctemp7067 = {{ 5}, (char*)");\n\0"};
nctemp7066=&nctemp7067;
nctempchar1* nctemp7064= nctemp7066;
int nctemp7068=CodeEs(nctemp7062,nctemp7064);
}
else{
struct tree* nctemp7074= np;
nctempchar1* nctemp7076=PtreeGetref(nctemp7074);
nctempchar1* nctemp7072= nctemp7076;
struct nctempchar1 *nctemp7079;
static struct nctempchar1 nctemp7080 = {{ 5}, (char*)"aref\0"};
nctemp7079=&nctemp7080;
nctempchar1* nctemp7077= nctemp7079;
int nctemp7081=LibeStrcmp(nctemp7072,nctemp7077);
int nctemp7069 = (nctemp7081 ==1);
if(nctemp7069)
{
struct tree* nctemp7087= np;
struct tree* nctemp7089=PtreeMvchild(nctemp7087);
np =nctemp7089;
struct tree* nctemp7094= np;
struct tree* nctemp7096=PtreeMvchild(nctemp7094);
np =nctemp7096;
struct tree* nctemp7101= np;
struct tree* nctemp7103=PtreeMvchild(nctemp7101);
np =nctemp7103;
struct tree* nctemp7108= np;
struct tree* nctemp7110=PtreeMvchild(nctemp7108);
np =nctemp7110;
tp =np;
rank =1;
struct tree* nctemp7126= np;
struct tree* nctemp7128=PtreeMvsister(nctemp7126);
np =nctemp7128;
int nctemp7119 = (np !=0);
int nctemp7130=nctemp7119;
while(nctemp7130)
{{
int nctemp7139 = rank + 1;
rank =nctemp7139;
}
struct tree* nctemp7147= np;
struct tree* nctemp7149=PtreeMvsister(nctemp7147);
np =nctemp7149;
int nctemp7140 = (np !=0);
nctemp7130=nctemp7140;}int nctemp7151 = (rank > 4);
if(nctemp7151)
{
struct nctempchar1 *nctemp7158;
static struct nctempchar1 nctemp7159 = {{ 29}, (char*)"Array dimension is too large\0"};
nctemp7158=&nctemp7159;
nctempchar1* nctemp7156= nctemp7158;
int nctemp7160=CodeError(nctemp7156);
}
p =tp;
struct tree* nctemp7166= p;
struct nctempchar1 *nctemp7170;
static struct nctempchar1 nctemp7171 = {{ 7}, (char*)"nctemp\0"};
nctemp7170=&nctemp7171;
nctempchar1* nctemp7168= nctemp7170;
int nctemp7172=CodeEs(nctemp7166,nctemp7168);
struct tree* nctemp7174= p;
nctempchar1* nctemp7176= type;
int nctemp7179=CodeEs(nctemp7174,nctemp7176);
int nctemp7181= rank;
int nctemp7183=CodeEd(nctemp7181);
struct tree* nctemp7185= p;
struct nctempchar1 *nctemp7189;
static struct nctempchar1 nctemp7190 = {{ 2}, (char*)" \0"};
nctemp7189=&nctemp7190;
nctempchar1* nctemp7187= nctemp7189;
int nctemp7191=CodeEs(nctemp7185,nctemp7187);
struct tree* nctemp7193= sp;
nctempchar1* nctemp7195= descr;
int nctemp7198=CodeEs(nctemp7193,nctemp7195);
struct tree* nctemp7200= sp;
struct nctempchar1 *nctemp7204;
static struct nctempchar1 nctemp7205 = {{ 4}, (char*)";\n\0"};
nctemp7204=&nctemp7205;
nctempchar1* nctemp7202= nctemp7204;
int nctemp7206=CodeEs(nctemp7200,nctemp7202);
struct tree* nctemp7208= p;
struct nctempchar1 *nctemp7212;
static struct nctempchar1 nctemp7213 = {{ 7}, (char*)"nctemp\0"};
nctemp7212=&nctemp7213;
nctempchar1* nctemp7210= nctemp7212;
int nctemp7214=CodeEs(nctemp7208,nctemp7210);
struct tree* nctemp7216= p;
nctempchar1* nctemp7218= type;
int nctemp7221=CodeEs(nctemp7216,nctemp7218);
int nctemp7223= rank;
int nctemp7225=CodeEd(nctemp7223);
struct tree* nctemp7227= p;
struct nctempchar1 *nctemp7231;
static struct nctempchar1 nctemp7232 = {{ 3}, (char*)" *\0"};
nctemp7231=&nctemp7232;
nctempchar1* nctemp7229= nctemp7231;
int nctemp7233=CodeEs(nctemp7227,nctemp7229);
struct tree* nctemp7235= sp;
nctempchar1* nctemp7237= pointer;
int nctemp7240=CodeEs(nctemp7235,nctemp7237);
struct tree* nctemp7242= p;
struct nctempchar1 *nctemp7246;
static struct nctempchar1 nctemp7247 = {{ 4}, (char*)";\n\0"};
nctemp7246=&nctemp7247;
nctempchar1* nctemp7244= nctemp7246;
int nctemp7248=CodeEs(nctemp7242,nctemp7244);
struct tree* nctemp7250= sp;
nctempchar1* nctemp7252= descr;
int nctemp7255=CodeEs(nctemp7250,nctemp7252);
struct tree* nctemp7257= sp;
struct nctempchar1 *nctemp7261;
static struct nctempchar1 nctemp7262 = {{ 2}, (char*)"=\0"};
nctemp7261=&nctemp7262;
nctempchar1* nctemp7259= nctemp7261;
int nctemp7263=CodeEs(nctemp7257,nctemp7259);
struct tree* nctemp7265= sp;
struct nctempchar1 *nctemp7269;
static struct nctempchar1 nctemp7270 = {{ 3}, (char*)"*(\0"};
nctemp7269=&nctemp7270;
nctempchar1* nctemp7267= nctemp7269;
int nctemp7271=CodeEs(nctemp7265,nctemp7267);
struct tree* nctemp7273= p;
struct nctempchar1 *nctemp7277;
static struct nctempchar1 nctemp7278 = {{ 7}, (char*)"nctemp\0"};
nctemp7277=&nctemp7278;
nctempchar1* nctemp7275= nctemp7277;
int nctemp7279=CodeEs(nctemp7273,nctemp7275);
struct tree* nctemp7281= sp;
nctempchar1* nctemp7283= type;
int nctemp7286=CodeEs(nctemp7281,nctemp7283);
int nctemp7288= rank;
int nctemp7290=CodeEd(nctemp7288);
struct tree* nctemp7292= sp;
struct nctempchar1 *nctemp7296;
static struct nctempchar1 nctemp7297 = {{ 4}, (char*)"*)(\0"};
nctemp7296=&nctemp7297;
nctempchar1* nctemp7294= nctemp7296;
int nctemp7298=CodeEs(nctemp7292,nctemp7294);
struct tree* nctemp7300= sp;
nctempchar1* nctemp7302= expr;
int nctemp7305=CodeEs(nctemp7300,nctemp7302);
struct tree* nctemp7307= sp;
struct nctempchar1 *nctemp7311;
static struct nctempchar1 nctemp7312 = {{ 5}, (char*)");\n\0"};
nctemp7311=&nctemp7312;
nctempchar1* nctemp7309= nctemp7311;
int nctemp7313=CodeEs(nctemp7307,nctemp7309);
p =tp;
i =0;
int nctemp7322 = (p !=0);
int nctemp7326=nctemp7322;
while(nctemp7326)
{{
struct tree* nctemp7332= p;
nctempchar1* nctemp7334=CodeExpr(nctemp7332);
dim=nctemp7334;
struct tree* nctemp7336= sp;
nctempchar1* nctemp7338= descr;
int nctemp7341=CodeEs(nctemp7336,nctemp7338);
struct tree* nctemp7343= sp;
struct nctempchar1 *nctemp7347;
static struct nctempchar1 nctemp7348 = {{ 3}, (char*)".d\0"};
nctemp7347=&nctemp7348;
nctempchar1* nctemp7345= nctemp7347;
int nctemp7349=CodeEs(nctemp7343,nctemp7345);
struct tree* nctemp7351= sp;
struct nctempchar1 *nctemp7355;
static struct nctempchar1 nctemp7356 = {{ 2}, (char*)"[\0"};
nctemp7355=&nctemp7356;
nctempchar1* nctemp7353= nctemp7355;
int nctemp7357=CodeEs(nctemp7351,nctemp7353);
int nctemp7359= i;
int nctemp7361=CodeEd(nctemp7359);
struct tree* nctemp7363= sp;
struct nctempchar1 *nctemp7367;
static struct nctempchar1 nctemp7368 = {{ 3}, (char*)"]=\0"};
nctemp7367=&nctemp7368;
nctempchar1* nctemp7365= nctemp7367;
int nctemp7369=CodeEs(nctemp7363,nctemp7365);
struct tree* nctemp7371= sp;
nctempchar1* nctemp7373= dim;
int nctemp7376=CodeEs(nctemp7371,nctemp7373);
struct tree* nctemp7378= sp;
struct nctempchar1 *nctemp7382;
static struct nctempchar1 nctemp7383 = {{ 4}, (char*)";\n\0"};
nctemp7382=&nctemp7383;
nctempchar1* nctemp7380= nctemp7382;
int nctemp7384=CodeEs(nctemp7378,nctemp7380);
int nctemp7393 = i + 1;
i =nctemp7393;
struct tree* nctemp7398= p;
struct tree* nctemp7400=PtreeMvsister(nctemp7398);
p =nctemp7400;
}
int nctemp7401 = (p !=0);
nctemp7326=nctemp7401;}struct tree* nctemp7406= sp;
nctempchar1* nctemp7408= pointer;
int nctemp7411=CodeEs(nctemp7406,nctemp7408);
struct tree* nctemp7413= sp;
struct nctempchar1 *nctemp7417;
static struct nctempchar1 nctemp7418 = {{ 3}, (char*)"=&\0"};
nctemp7417=&nctemp7418;
nctempchar1* nctemp7415= nctemp7417;
int nctemp7419=CodeEs(nctemp7413,nctemp7415);
struct tree* nctemp7421= sp;
nctempchar1* nctemp7423= descr;
int nctemp7426=CodeEs(nctemp7421,nctemp7423);
struct tree* nctemp7428= sp;
struct nctempchar1 *nctemp7432;
static struct nctempchar1 nctemp7433 = {{ 4}, (char*)";\n\0"};
nctemp7432=&nctemp7433;
nctempchar1* nctemp7430= nctemp7432;
int nctemp7434=CodeEs(nctemp7428,nctemp7430);
}
else{
struct tree* nctemp7436= p;
nctempchar1* nctemp7438= type;
int nctemp7441=CodeEs(nctemp7436,nctemp7438);
struct tree* nctemp7443= p;
struct nctempchar1 *nctemp7447;
static struct nctempchar1 nctemp7448 = {{ 2}, (char*)" \0"};
nctemp7447=&nctemp7448;
nctempchar1* nctemp7445= nctemp7447;
int nctemp7449=CodeEs(nctemp7443,nctemp7445);
struct tree* nctemp7451= p;
nctempchar1* nctemp7453= pointer;
int nctemp7456=CodeEs(nctemp7451,nctemp7453);
struct tree* nctemp7458= p;
struct nctempchar1 *nctemp7462;
static struct nctempchar1 nctemp7463 = {{ 2}, (char*)"=\0"};
nctemp7462=&nctemp7463;
nctempchar1* nctemp7460= nctemp7462;
int nctemp7464=CodeEs(nctemp7458,nctemp7460);
struct tree* nctemp7466= p;
struct nctempchar1 *nctemp7470;
static struct nctempchar1 nctemp7471 = {{ 2}, (char*)"(\0"};
nctemp7470=&nctemp7471;
nctempchar1* nctemp7468= nctemp7470;
int nctemp7472=CodeEs(nctemp7466,nctemp7468);
struct tree* nctemp7474= p;
struct tree* nctemp7478= np;
nctempchar1* nctemp7480=PtreeGetype(nctemp7478);
nctempchar1* nctemp7476= nctemp7480;
int nctemp7481=CodeEs(nctemp7474,nctemp7476);
struct tree* nctemp7483= p;
struct nctempchar1 *nctemp7487;
static struct nctempchar1 nctemp7488 = {{ 3}, (char*)")(\0"};
nctemp7487=&nctemp7488;
nctempchar1* nctemp7485= nctemp7487;
int nctemp7489=CodeEs(nctemp7483,nctemp7485);
struct tree* nctemp7491= p;
nctempchar1* nctemp7493= expr;
int nctemp7496=CodeEs(nctemp7491,nctemp7493);
struct tree* nctemp7498= p;
struct nctempchar1 *nctemp7502;
static struct nctempchar1 nctemp7503 = {{ 5}, (char*)");\n\0"};
nctemp7502=&nctemp7503;
nctempchar1* nctemp7500= nctemp7502;
int nctemp7504=CodeEs(nctemp7498,nctemp7500);
}
}
}
return pointer;
}
nctempchar1 * CodePrimexpr (struct tree* p)
{
struct tree* nctemp7512= p;
nctempchar1* nctemp7514=PtreeGetname(nctemp7512);
nctempchar1* nctemp7510= nctemp7514;
struct nctempchar1 *nctemp7517;
static struct nctempchar1 nctemp7518 = {{ 11}, (char*)"identifier\0"};
nctemp7517=&nctemp7518;
nctempchar1* nctemp7515= nctemp7517;
int nctemp7519=LibeStrcmp(nctemp7510,nctemp7515);
int nctemp7507 = (nctemp7519 ==1);
if(nctemp7507)
{
struct tree* nctemp7522= p;
nctempchar1* nctemp7524=CodeIdent(nctemp7522);
return nctemp7524;
}
else{
struct tree* nctemp7530= p;
nctempchar1* nctemp7532=PtreeGetname(nctemp7530);
nctempchar1* nctemp7528= nctemp7532;
struct nctempchar1 *nctemp7535;
static struct nctempchar1 nctemp7536 = {{ 4}, (char*)"new\0"};
nctemp7535=&nctemp7536;
nctempchar1* nctemp7533= nctemp7535;
int nctemp7537=LibeStrcmp(nctemp7528,nctemp7533);
int nctemp7525 = (nctemp7537 ==1);
if(nctemp7525)
{
struct tree* nctemp7540= p;
nctempchar1* nctemp7542=CodeNew(nctemp7540);
return nctemp7542;
}
else{
struct tree* nctemp7548= p;
nctempchar1* nctemp7550=PtreeGetname(nctemp7548);
nctempchar1* nctemp7546= nctemp7550;
struct nctempchar1 *nctemp7553;
static struct nctempchar1 nctemp7554 = {{ 7}, (char*)"delete\0"};
nctemp7553=&nctemp7554;
nctempchar1* nctemp7551= nctemp7553;
int nctemp7555=LibeStrcmp(nctemp7546,nctemp7551);
int nctemp7543 = (nctemp7555 ==1);
if(nctemp7543)
{
struct tree* nctemp7558= p;
nctempchar1* nctemp7560=CodeDelete(nctemp7558);
return nctemp7560;
}
else{
struct tree* nctemp7566= p;
nctempchar1* nctemp7568=PtreeGetname(nctemp7566);
nctempchar1* nctemp7564= nctemp7568;
struct nctempchar1 *nctemp7571;
static struct nctempchar1 nctemp7572 = {{ 4}, (char*)"len\0"};
nctemp7571=&nctemp7572;
nctempchar1* nctemp7569= nctemp7571;
int nctemp7573=LibeStrcmp(nctemp7564,nctemp7569);
int nctemp7561 = (nctemp7573 ==1);
if(nctemp7561)
{
struct tree* nctemp7576= p;
nctempchar1* nctemp7578=CodeLen(nctemp7576);
return nctemp7578;
}
else{
struct tree* nctemp7584= p;
nctempchar1* nctemp7586=PtreeGetname(nctemp7584);
nctempchar1* nctemp7582= nctemp7586;
struct nctempchar1 *nctemp7589;
static struct nctempchar1 nctemp7590 = {{ 6}, (char*)"cmplx\0"};
nctemp7589=&nctemp7590;
nctempchar1* nctemp7587= nctemp7589;
int nctemp7591=LibeStrcmp(nctemp7582,nctemp7587);
int nctemp7579 = (nctemp7591 ==1);
if(nctemp7579)
{
struct tree* nctemp7594= p;
nctempchar1* nctemp7596=CodeCmplx(nctemp7594);
return nctemp7596;
}
else{
struct tree* nctemp7602= p;
nctempchar1* nctemp7604=PtreeGetname(nctemp7602);
nctempchar1* nctemp7600= nctemp7604;
struct nctempchar1 *nctemp7607;
static struct nctempchar1 nctemp7608 = {{ 3}, (char*)"im\0"};
nctemp7607=&nctemp7608;
nctempchar1* nctemp7605= nctemp7607;
int nctemp7609=LibeStrcmp(nctemp7600,nctemp7605);
int nctemp7597 = (nctemp7609 ==1);
if(nctemp7597)
{
struct tree* nctemp7612= p;
nctempchar1* nctemp7614=CodeIm(nctemp7612);
return nctemp7614;
}
else{
struct tree* nctemp7620= p;
nctempchar1* nctemp7622=PtreeGetname(nctemp7620);
nctempchar1* nctemp7618= nctemp7622;
struct nctempchar1 *nctemp7625;
static struct nctempchar1 nctemp7626 = {{ 3}, (char*)"re\0"};
nctemp7625=&nctemp7626;
nctempchar1* nctemp7623= nctemp7625;
int nctemp7627=LibeStrcmp(nctemp7618,nctemp7623);
int nctemp7615 = (nctemp7627 ==1);
if(nctemp7615)
{
struct tree* nctemp7630= p;
nctempchar1* nctemp7632=CodeRe(nctemp7630);
return nctemp7632;
}
else{
struct tree* nctemp7638= p;
nctempchar1* nctemp7640=PtreeGetname(nctemp7638);
nctempchar1* nctemp7636= nctemp7640;
struct nctempchar1 *nctemp7643;
static struct nctempchar1 nctemp7644 = {{ 6}, (char*)"fcall\0"};
nctemp7643=&nctemp7644;
nctempchar1* nctemp7641= nctemp7643;
int nctemp7645=LibeStrcmp(nctemp7636,nctemp7641);
int nctemp7633 = (nctemp7645 ==1);
if(nctemp7633)
{
struct tree* nctemp7648= p;
nctempchar1* nctemp7650=CodeFcall(nctemp7648);
return nctemp7650;
}
else{
struct tree* nctemp7656= p;
nctempchar1* nctemp7658=PtreeGetname(nctemp7656);
nctempchar1* nctemp7654= nctemp7658;
struct nctempchar1 *nctemp7661;
static struct nctempchar1 nctemp7662 = {{ 5}, (char*)"cast\0"};
nctemp7661=&nctemp7662;
nctempchar1* nctemp7659= nctemp7661;
int nctemp7663=LibeStrcmp(nctemp7654,nctemp7659);
int nctemp7651 = (nctemp7663 ==1);
if(nctemp7651)
{
struct tree* nctemp7666= p;
nctempchar1* nctemp7668=CodeCast(nctemp7666);
return nctemp7668;
}
else{
struct tree* nctemp7674= p;
nctempchar1* nctemp7676=PtreeGetname(nctemp7674);
nctempchar1* nctemp7672= nctemp7676;
struct nctempchar1 *nctemp7679;
static struct nctempchar1 nctemp7680 = {{ 10}, (char*)"iconstant\0"};
nctemp7679=&nctemp7680;
nctempchar1* nctemp7677= nctemp7679;
int nctemp7681=LibeStrcmp(nctemp7672,nctemp7677);
int nctemp7669 = (nctemp7681 ==1);
if(nctemp7669)
{
struct tree* nctemp7684= p;
nctempchar1* nctemp7686=PtreeGetdef(nctemp7684);
return nctemp7686;
}
else{
struct tree* nctemp7692= p;
nctempchar1* nctemp7694=PtreeGetname(nctemp7692);
nctempchar1* nctemp7690= nctemp7694;
struct nctempchar1 *nctemp7697;
static struct nctempchar1 nctemp7698 = {{ 10}, (char*)"rconstant\0"};
nctemp7697=&nctemp7698;
nctempchar1* nctemp7695= nctemp7697;
int nctemp7699=LibeStrcmp(nctemp7690,nctemp7695);
int nctemp7687 = (nctemp7699 ==1);
if(nctemp7687)
{
struct tree* nctemp7702= p;
nctempchar1* nctemp7704=PtreeGetdef(nctemp7702);
return nctemp7704;
}
else{
struct tree* nctemp7710= p;
nctempchar1* nctemp7712=PtreeGetname(nctemp7710);
nctempchar1* nctemp7708= nctemp7712;
struct nctempchar1 *nctemp7715;
static struct nctempchar1 nctemp7716 = {{ 10}, (char*)"sconstant\0"};
nctemp7715=&nctemp7716;
nctempchar1* nctemp7713= nctemp7715;
int nctemp7717=LibeStrcmp(nctemp7708,nctemp7713);
int nctemp7705 = (nctemp7717 ==1);
if(nctemp7705)
{
struct tree* nctemp7720= p;
nctempchar1* nctemp7722=CodeSconstant(nctemp7720);
return nctemp7722;
}
else{
struct tree* nctemp7724= p;
nctempchar1* nctemp7726=CodeBinexpr(nctemp7724);
return nctemp7726;
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
nctempchar1* nctemp7732=CodeMktemp();
tempr=nctemp7732;
struct tree* nctemp7738= p;
nctempchar1* nctemp7740=PtreeGetname(nctemp7738);
nctempchar1* nctemp7736= nctemp7740;
struct nctempchar1 *nctemp7743;
static struct nctempchar1 nctemp7744 = {{ 7}, (char*)"unexpr\0"};
nctemp7743=&nctemp7744;
nctempchar1* nctemp7741= nctemp7743;
int nctemp7745=LibeStrcmp(nctemp7736,nctemp7741);
int nctemp7733 = (nctemp7745 ==1);
if(nctemp7733)
{
struct tree* nctemp7752= p;
nctempchar1* nctemp7754=PtreeGetype(nctemp7752);
nctempchar1* nctemp7750= nctemp7754;
struct nctempchar1 *nctemp7757;
static struct nctempchar1 nctemp7758 = {{ 8}, (char*)"complex\0"};
nctemp7757=&nctemp7758;
nctempchar1* nctemp7755= nctemp7757;
int nctemp7759=LibeStrcmp(nctemp7750,nctemp7755);
int nctemp7747 = (nctemp7759 ==1);
if(nctemp7747)
{
struct tree* nctemp7768= p;
struct tree* nctemp7770=PtreeMvchild(nctemp7768);
struct tree* nctemp7766= nctemp7770;
nctempchar1* nctemp7771=CodePrimexpr(nctemp7766);
tmp=nctemp7771;
struct tree* nctemp7773= p;
struct nctempchar1 *nctemp7777;
static struct nctempchar1 nctemp7778 = {{ 4}, (char*)";\n\0"};
nctemp7777=&nctemp7778;
nctempchar1* nctemp7775= nctemp7777;
int nctemp7779=CodeEs(nctemp7773,nctemp7775);
struct tree* nctemp7781= p;
nctempchar1* nctemp7783= tempr;
int nctemp7786=CodeEs(nctemp7781,nctemp7783);
struct tree* nctemp7788= p;
struct nctempchar1 *nctemp7792;
static struct nctempchar1 nctemp7793 = {{ 3}, (char*)".r\0"};
nctemp7792=&nctemp7793;
nctempchar1* nctemp7790= nctemp7792;
int nctemp7794=CodeEs(nctemp7788,nctemp7790);
struct tree* nctemp7796= p;
struct nctempchar1 *nctemp7800;
static struct nctempchar1 nctemp7801 = {{ 4}, (char*)"= -\0"};
nctemp7800=&nctemp7801;
nctempchar1* nctemp7798= nctemp7800;
int nctemp7802=CodeEs(nctemp7796,nctemp7798);
struct tree* nctemp7804= p;
nctempchar1* nctemp7806= tmp;
int nctemp7809=CodeEs(nctemp7804,nctemp7806);
struct tree* nctemp7811= p;
struct nctempchar1 *nctemp7815;
static struct nctempchar1 nctemp7816 = {{ 3}, (char*)".r\0"};
nctemp7815=&nctemp7816;
nctempchar1* nctemp7813= nctemp7815;
int nctemp7817=CodeEs(nctemp7811,nctemp7813);
struct tree* nctemp7819= p;
struct nctempchar1 *nctemp7823;
static struct nctempchar1 nctemp7824 = {{ 4}, (char*)";\n\0"};
nctemp7823=&nctemp7824;
nctempchar1* nctemp7821= nctemp7823;
int nctemp7825=CodeEs(nctemp7819,nctemp7821);
struct tree* nctemp7827= p;
nctempchar1* nctemp7829= tempr;
int nctemp7832=CodeEs(nctemp7827,nctemp7829);
struct tree* nctemp7834= p;
struct nctempchar1 *nctemp7838;
static struct nctempchar1 nctemp7839 = {{ 3}, (char*)".i\0"};
nctemp7838=&nctemp7839;
nctempchar1* nctemp7836= nctemp7838;
int nctemp7840=CodeEs(nctemp7834,nctemp7836);
struct tree* nctemp7842= p;
struct nctempchar1 *nctemp7846;
static struct nctempchar1 nctemp7847 = {{ 4}, (char*)"= -\0"};
nctemp7846=&nctemp7847;
nctempchar1* nctemp7844= nctemp7846;
int nctemp7848=CodeEs(nctemp7842,nctemp7844);
struct tree* nctemp7850= p;
nctempchar1* nctemp7852= tmp;
int nctemp7855=CodeEs(nctemp7850,nctemp7852);
struct tree* nctemp7857= p;
struct nctempchar1 *nctemp7861;
static struct nctempchar1 nctemp7862 = {{ 3}, (char*)".i\0"};
nctemp7861=&nctemp7862;
nctempchar1* nctemp7859= nctemp7861;
int nctemp7863=CodeEs(nctemp7857,nctemp7859);
struct tree* nctemp7865= p;
struct nctempchar1 *nctemp7869;
static struct nctempchar1 nctemp7870 = {{ 4}, (char*)";\n\0"};
nctemp7869=&nctemp7870;
nctempchar1* nctemp7867= nctemp7869;
int nctemp7871=CodeEs(nctemp7865,nctemp7867);
return tempr;
}
else{
struct tree* nctemp7881= p;
struct tree* nctemp7883=PtreeMvchild(nctemp7881);
struct tree* nctemp7879= nctemp7883;
nctempchar1* nctemp7884=CodePrimexpr(nctemp7879);
tmp=nctemp7884;
struct tree* nctemp7886= p;
struct tree* nctemp7890= p;
nctempchar1* nctemp7892=PtreeGetype(nctemp7890);
nctempchar1* nctemp7888= nctemp7892;
int nctemp7893=CodeEs(nctemp7886,nctemp7888);
struct tree* nctemp7895= p;
struct nctempchar1 *nctemp7899;
static struct nctempchar1 nctemp7900 = {{ 2}, (char*)" \0"};
nctemp7899=&nctemp7900;
nctempchar1* nctemp7897= nctemp7899;
int nctemp7901=CodeEs(nctemp7895,nctemp7897);
struct tree* nctemp7903= p;
nctempchar1* nctemp7905= tempr;
int nctemp7908=CodeEs(nctemp7903,nctemp7905);
struct tree* nctemp7910= p;
struct nctempchar1 *nctemp7914;
static struct nctempchar1 nctemp7915 = {{ 4}, (char*)"= -\0"};
nctemp7914=&nctemp7915;
nctempchar1* nctemp7912= nctemp7914;
int nctemp7916=CodeEs(nctemp7910,nctemp7912);
struct tree* nctemp7918= p;
nctempchar1* nctemp7920= tmp;
int nctemp7923=CodeEs(nctemp7918,nctemp7920);
struct tree* nctemp7925= p;
struct nctempchar1 *nctemp7929;
static struct nctempchar1 nctemp7930 = {{ 4}, (char*)";\n\0"};
nctemp7929=&nctemp7930;
nctempchar1* nctemp7927= nctemp7929;
int nctemp7931=CodeEs(nctemp7925,nctemp7927);
return tempr;
}
}
else{
struct tree* nctemp7935= p;
nctempchar1* nctemp7937=CodePrimexpr(nctemp7935);
return nctemp7937;
}
}
nctempchar1 * CodeAddexpr (struct tree* p,nctempchar1 *lval,nctempchar1 *rval)
{
nctempchar1 *type;
nctempchar1 *tempr;
nctempchar1 *opr;
struct tree* nctemp7943= p;
nctempchar1* nctemp7945=PtreeGetype(nctemp7943);
type=nctemp7945;
nctempchar1* nctemp7951=CodeMktemp();
tempr=nctemp7951;
struct tree* nctemp7957= p;
nctempchar1* nctemp7959=PtreeGetdef(nctemp7957);
opr=nctemp7959;
nctempchar1* nctemp7963= type;
struct nctempchar1 *nctemp7968;
static struct nctempchar1 nctemp7969 = {{ 8}, (char*)"complex\0"};
nctemp7968=&nctemp7969;
nctempchar1* nctemp7966= nctemp7968;
int nctemp7970=LibeStrcmp(nctemp7963,nctemp7966);
int nctemp7960 = (nctemp7970 ==1);
if(nctemp7960)
{
nctempchar1* nctemp7978= opr;
struct nctempchar1 *nctemp7983;
static struct nctempchar1 nctemp7984 = {{ 2}, (char*)"+\0"};
nctemp7983=&nctemp7984;
nctempchar1* nctemp7981= nctemp7983;
int nctemp7985=LibeStrcmp(nctemp7978,nctemp7981);
int nctemp7975 = (nctemp7985 ==1);
nctempchar1* nctemp7991= opr;
struct nctempchar1 *nctemp7996;
static struct nctempchar1 nctemp7997 = {{ 2}, (char*)"-\0"};
nctemp7996=&nctemp7997;
nctempchar1* nctemp7994= nctemp7996;
int nctemp7998=LibeStrcmp(nctemp7991,nctemp7994);
int nctemp7988 = (nctemp7998 ==1);
int nctemp7972 = (nctemp7975 || nctemp7988);
if(nctemp7972)
{
struct tree* nctemp8001= p;
nctempchar1* nctemp8003= type;
int nctemp8006=CodeEs(nctemp8001,nctemp8003);
struct tree* nctemp8008= p;
struct nctempchar1 *nctemp8012;
static struct nctempchar1 nctemp8013 = {{ 2}, (char*)" \0"};
nctemp8012=&nctemp8013;
nctempchar1* nctemp8010= nctemp8012;
int nctemp8014=CodeEs(nctemp8008,nctemp8010);
struct tree* nctemp8016= p;
nctempchar1* nctemp8018= tempr;
int nctemp8021=CodeEs(nctemp8016,nctemp8018);
struct tree* nctemp8023= p;
struct nctempchar1 *nctemp8027;
static struct nctempchar1 nctemp8028 = {{ 3}, (char*)".r\0"};
nctemp8027=&nctemp8028;
nctempchar1* nctemp8025= nctemp8027;
int nctemp8029=CodeEs(nctemp8023,nctemp8025);
struct tree* nctemp8031= p;
struct nctempchar1 *nctemp8035;
static struct nctempchar1 nctemp8036 = {{ 4}, (char*)" = \0"};
nctemp8035=&nctemp8036;
nctempchar1* nctemp8033= nctemp8035;
int nctemp8037=CodeEs(nctemp8031,nctemp8033);
struct tree* nctemp8039= p;
nctempchar1* nctemp8041= lval;
int nctemp8044=CodeEs(nctemp8039,nctemp8041);
struct tree* nctemp8046= p;
struct nctempchar1 *nctemp8050;
static struct nctempchar1 nctemp8051 = {{ 3}, (char*)".r\0"};
nctemp8050=&nctemp8051;
nctempchar1* nctemp8048= nctemp8050;
int nctemp8052=CodeEs(nctemp8046,nctemp8048);
struct tree* nctemp8054= p;
struct nctempchar1 *nctemp8058;
static struct nctempchar1 nctemp8059 = {{ 2}, (char*)" \0"};
nctemp8058=&nctemp8059;
nctempchar1* nctemp8056= nctemp8058;
int nctemp8060=CodeEs(nctemp8054,nctemp8056);
struct tree* nctemp8062= p;
struct tree* nctemp8066= p;
nctempchar1* nctemp8068=PtreeGetdef(nctemp8066);
nctempchar1* nctemp8064= nctemp8068;
int nctemp8069=CodeEs(nctemp8062,nctemp8064);
struct tree* nctemp8071= p;
struct nctempchar1 *nctemp8075;
static struct nctempchar1 nctemp8076 = {{ 2}, (char*)" \0"};
nctemp8075=&nctemp8076;
nctempchar1* nctemp8073= nctemp8075;
int nctemp8077=CodeEs(nctemp8071,nctemp8073);
struct tree* nctemp8079= p;
nctempchar1* nctemp8081= rval;
int nctemp8084=CodeEs(nctemp8079,nctemp8081);
struct tree* nctemp8086= p;
struct nctempchar1 *nctemp8090;
static struct nctempchar1 nctemp8091 = {{ 3}, (char*)".r\0"};
nctemp8090=&nctemp8091;
nctempchar1* nctemp8088= nctemp8090;
int nctemp8092=CodeEs(nctemp8086,nctemp8088);
struct tree* nctemp8094= p;
struct nctempchar1 *nctemp8098;
static struct nctempchar1 nctemp8099 = {{ 4}, (char*)";\n\0"};
nctemp8098=&nctemp8099;
nctempchar1* nctemp8096= nctemp8098;
int nctemp8100=CodeEs(nctemp8094,nctemp8096);
struct tree* nctemp8102= p;
nctempchar1* nctemp8104= type;
int nctemp8107=CodeEs(nctemp8102,nctemp8104);
struct tree* nctemp8109= p;
struct nctempchar1 *nctemp8113;
static struct nctempchar1 nctemp8114 = {{ 2}, (char*)" \0"};
nctemp8113=&nctemp8114;
nctempchar1* nctemp8111= nctemp8113;
int nctemp8115=CodeEs(nctemp8109,nctemp8111);
struct tree* nctemp8117= p;
nctempchar1* nctemp8119= tempr;
int nctemp8122=CodeEs(nctemp8117,nctemp8119);
struct tree* nctemp8124= p;
struct nctempchar1 *nctemp8128;
static struct nctempchar1 nctemp8129 = {{ 3}, (char*)".i\0"};
nctemp8128=&nctemp8129;
nctempchar1* nctemp8126= nctemp8128;
int nctemp8130=CodeEs(nctemp8124,nctemp8126);
struct tree* nctemp8132= p;
struct nctempchar1 *nctemp8136;
static struct nctempchar1 nctemp8137 = {{ 4}, (char*)" = \0"};
nctemp8136=&nctemp8137;
nctempchar1* nctemp8134= nctemp8136;
int nctemp8138=CodeEs(nctemp8132,nctemp8134);
struct tree* nctemp8140= p;
nctempchar1* nctemp8142= lval;
int nctemp8145=CodeEs(nctemp8140,nctemp8142);
struct tree* nctemp8147= p;
struct nctempchar1 *nctemp8151;
static struct nctempchar1 nctemp8152 = {{ 3}, (char*)".i\0"};
nctemp8151=&nctemp8152;
nctempchar1* nctemp8149= nctemp8151;
int nctemp8153=CodeEs(nctemp8147,nctemp8149);
struct tree* nctemp8155= p;
struct nctempchar1 *nctemp8159;
static struct nctempchar1 nctemp8160 = {{ 2}, (char*)" \0"};
nctemp8159=&nctemp8160;
nctempchar1* nctemp8157= nctemp8159;
int nctemp8161=CodeEs(nctemp8155,nctemp8157);
struct tree* nctemp8163= p;
struct tree* nctemp8167= p;
nctempchar1* nctemp8169=PtreeGetdef(nctemp8167);
nctempchar1* nctemp8165= nctemp8169;
int nctemp8170=CodeEs(nctemp8163,nctemp8165);
struct tree* nctemp8172= p;
struct nctempchar1 *nctemp8176;
static struct nctempchar1 nctemp8177 = {{ 2}, (char*)" \0"};
nctemp8176=&nctemp8177;
nctempchar1* nctemp8174= nctemp8176;
int nctemp8178=CodeEs(nctemp8172,nctemp8174);
struct tree* nctemp8180= p;
nctempchar1* nctemp8182= rval;
int nctemp8185=CodeEs(nctemp8180,nctemp8182);
struct tree* nctemp8187= p;
struct nctempchar1 *nctemp8191;
static struct nctempchar1 nctemp8192 = {{ 3}, (char*)".i\0"};
nctemp8191=&nctemp8192;
nctempchar1* nctemp8189= nctemp8191;
int nctemp8193=CodeEs(nctemp8187,nctemp8189);
struct tree* nctemp8195= p;
struct nctempchar1 *nctemp8199;
static struct nctempchar1 nctemp8200 = {{ 4}, (char*)";\n\0"};
nctemp8199=&nctemp8200;
nctempchar1* nctemp8197= nctemp8199;
int nctemp8201=CodeEs(nctemp8195,nctemp8197);
}
else{
nctempchar1* nctemp8205= opr;
struct nctempchar1 *nctemp8210;
static struct nctempchar1 nctemp8211 = {{ 2}, (char*)"*\0"};
nctemp8210=&nctemp8211;
nctempchar1* nctemp8208= nctemp8210;
int nctemp8212=LibeStrcmp(nctemp8205,nctemp8208);
int nctemp8202 = (nctemp8212 ==1);
if(nctemp8202)
{
struct tree* nctemp8215= p;
nctempchar1* nctemp8217= type;
int nctemp8220=CodeEs(nctemp8215,nctemp8217);
struct tree* nctemp8222= p;
struct nctempchar1 *nctemp8226;
static struct nctempchar1 nctemp8227 = {{ 2}, (char*)" \0"};
nctemp8226=&nctemp8227;
nctempchar1* nctemp8224= nctemp8226;
int nctemp8228=CodeEs(nctemp8222,nctemp8224);
struct tree* nctemp8230= p;
nctempchar1* nctemp8232= tempr;
int nctemp8235=CodeEs(nctemp8230,nctemp8232);
struct tree* nctemp8237= p;
struct nctempchar1 *nctemp8241;
static struct nctempchar1 nctemp8242 = {{ 3}, (char*)".r\0"};
nctemp8241=&nctemp8242;
nctempchar1* nctemp8239= nctemp8241;
int nctemp8243=CodeEs(nctemp8237,nctemp8239);
struct tree* nctemp8245= p;
struct nctempchar1 *nctemp8249;
static struct nctempchar1 nctemp8250 = {{ 4}, (char*)" = \0"};
nctemp8249=&nctemp8250;
nctempchar1* nctemp8247= nctemp8249;
int nctemp8251=CodeEs(nctemp8245,nctemp8247);
struct tree* nctemp8253= p;
nctempchar1* nctemp8255= lval;
int nctemp8258=CodeEs(nctemp8253,nctemp8255);
struct tree* nctemp8260= p;
struct nctempchar1 *nctemp8264;
static struct nctempchar1 nctemp8265 = {{ 3}, (char*)".r\0"};
nctemp8264=&nctemp8265;
nctempchar1* nctemp8262= nctemp8264;
int nctemp8266=CodeEs(nctemp8260,nctemp8262);
struct tree* nctemp8268= p;
struct nctempchar1 *nctemp8272;
static struct nctempchar1 nctemp8273 = {{ 2}, (char*)"*\0"};
nctemp8272=&nctemp8273;
nctempchar1* nctemp8270= nctemp8272;
int nctemp8274=CodeEs(nctemp8268,nctemp8270);
struct tree* nctemp8276= p;
nctempchar1* nctemp8278= rval;
int nctemp8281=CodeEs(nctemp8276,nctemp8278);
struct tree* nctemp8283= p;
struct nctempchar1 *nctemp8287;
static struct nctempchar1 nctemp8288 = {{ 3}, (char*)".r\0"};
nctemp8287=&nctemp8288;
nctempchar1* nctemp8285= nctemp8287;
int nctemp8289=CodeEs(nctemp8283,nctemp8285);
struct tree* nctemp8291= p;
struct nctempchar1 *nctemp8295;
static struct nctempchar1 nctemp8296 = {{ 2}, (char*)"-\0"};
nctemp8295=&nctemp8296;
nctempchar1* nctemp8293= nctemp8295;
int nctemp8297=CodeEs(nctemp8291,nctemp8293);
struct tree* nctemp8299= p;
nctempchar1* nctemp8301= lval;
int nctemp8304=CodeEs(nctemp8299,nctemp8301);
struct tree* nctemp8306= p;
struct nctempchar1 *nctemp8310;
static struct nctempchar1 nctemp8311 = {{ 3}, (char*)".i\0"};
nctemp8310=&nctemp8311;
nctempchar1* nctemp8308= nctemp8310;
int nctemp8312=CodeEs(nctemp8306,nctemp8308);
struct tree* nctemp8314= p;
struct nctempchar1 *nctemp8318;
static struct nctempchar1 nctemp8319 = {{ 2}, (char*)"*\0"};
nctemp8318=&nctemp8319;
nctempchar1* nctemp8316= nctemp8318;
int nctemp8320=CodeEs(nctemp8314,nctemp8316);
struct tree* nctemp8322= p;
nctempchar1* nctemp8324= rval;
int nctemp8327=CodeEs(nctemp8322,nctemp8324);
struct tree* nctemp8329= p;
struct nctempchar1 *nctemp8333;
static struct nctempchar1 nctemp8334 = {{ 3}, (char*)".i\0"};
nctemp8333=&nctemp8334;
nctempchar1* nctemp8331= nctemp8333;
int nctemp8335=CodeEs(nctemp8329,nctemp8331);
struct tree* nctemp8337= p;
struct nctempchar1 *nctemp8341;
static struct nctempchar1 nctemp8342 = {{ 4}, (char*)";\n\0"};
nctemp8341=&nctemp8342;
nctempchar1* nctemp8339= nctemp8341;
int nctemp8343=CodeEs(nctemp8337,nctemp8339);
struct tree* nctemp8345= p;
nctempchar1* nctemp8347= type;
int nctemp8350=CodeEs(nctemp8345,nctemp8347);
struct tree* nctemp8352= p;
struct nctempchar1 *nctemp8356;
static struct nctempchar1 nctemp8357 = {{ 2}, (char*)" \0"};
nctemp8356=&nctemp8357;
nctempchar1* nctemp8354= nctemp8356;
int nctemp8358=CodeEs(nctemp8352,nctemp8354);
struct tree* nctemp8360= p;
nctempchar1* nctemp8362= tempr;
int nctemp8365=CodeEs(nctemp8360,nctemp8362);
struct tree* nctemp8367= p;
struct nctempchar1 *nctemp8371;
static struct nctempchar1 nctemp8372 = {{ 3}, (char*)".i\0"};
nctemp8371=&nctemp8372;
nctempchar1* nctemp8369= nctemp8371;
int nctemp8373=CodeEs(nctemp8367,nctemp8369);
struct tree* nctemp8375= p;
struct nctempchar1 *nctemp8379;
static struct nctempchar1 nctemp8380 = {{ 4}, (char*)" = \0"};
nctemp8379=&nctemp8380;
nctempchar1* nctemp8377= nctemp8379;
int nctemp8381=CodeEs(nctemp8375,nctemp8377);
struct tree* nctemp8383= p;
nctempchar1* nctemp8385= lval;
int nctemp8388=CodeEs(nctemp8383,nctemp8385);
struct tree* nctemp8390= p;
struct nctempchar1 *nctemp8394;
static struct nctempchar1 nctemp8395 = {{ 3}, (char*)".i\0"};
nctemp8394=&nctemp8395;
nctempchar1* nctemp8392= nctemp8394;
int nctemp8396=CodeEs(nctemp8390,nctemp8392);
struct tree* nctemp8398= p;
struct nctempchar1 *nctemp8402;
static struct nctempchar1 nctemp8403 = {{ 2}, (char*)"*\0"};
nctemp8402=&nctemp8403;
nctempchar1* nctemp8400= nctemp8402;
int nctemp8404=CodeEs(nctemp8398,nctemp8400);
struct tree* nctemp8406= p;
nctempchar1* nctemp8408= rval;
int nctemp8411=CodeEs(nctemp8406,nctemp8408);
struct tree* nctemp8413= p;
struct nctempchar1 *nctemp8417;
static struct nctempchar1 nctemp8418 = {{ 3}, (char*)".r\0"};
nctemp8417=&nctemp8418;
nctempchar1* nctemp8415= nctemp8417;
int nctemp8419=CodeEs(nctemp8413,nctemp8415);
struct tree* nctemp8421= p;
struct nctempchar1 *nctemp8425;
static struct nctempchar1 nctemp8426 = {{ 2}, (char*)"+\0"};
nctemp8425=&nctemp8426;
nctempchar1* nctemp8423= nctemp8425;
int nctemp8427=CodeEs(nctemp8421,nctemp8423);
struct tree* nctemp8429= p;
nctempchar1* nctemp8431= lval;
int nctemp8434=CodeEs(nctemp8429,nctemp8431);
struct tree* nctemp8436= p;
struct nctempchar1 *nctemp8440;
static struct nctempchar1 nctemp8441 = {{ 3}, (char*)".r\0"};
nctemp8440=&nctemp8441;
nctempchar1* nctemp8438= nctemp8440;
int nctemp8442=CodeEs(nctemp8436,nctemp8438);
struct tree* nctemp8444= p;
struct nctempchar1 *nctemp8448;
static struct nctempchar1 nctemp8449 = {{ 2}, (char*)"*\0"};
nctemp8448=&nctemp8449;
nctempchar1* nctemp8446= nctemp8448;
int nctemp8450=CodeEs(nctemp8444,nctemp8446);
struct tree* nctemp8452= p;
nctempchar1* nctemp8454= rval;
int nctemp8457=CodeEs(nctemp8452,nctemp8454);
struct tree* nctemp8459= p;
struct nctempchar1 *nctemp8463;
static struct nctempchar1 nctemp8464 = {{ 3}, (char*)".i\0"};
nctemp8463=&nctemp8464;
nctempchar1* nctemp8461= nctemp8463;
int nctemp8465=CodeEs(nctemp8459,nctemp8461);
struct tree* nctemp8467= p;
struct nctempchar1 *nctemp8471;
static struct nctempchar1 nctemp8472 = {{ 4}, (char*)";\n\0"};
nctemp8471=&nctemp8472;
nctempchar1* nctemp8469= nctemp8471;
int nctemp8473=CodeEs(nctemp8467,nctemp8469);
}
else{
nctempchar1* nctemp8477= opr;
struct nctempchar1 *nctemp8482;
static struct nctempchar1 nctemp8483 = {{ 2}, (char*)"/\0"};
nctemp8482=&nctemp8483;
nctempchar1* nctemp8480= nctemp8482;
int nctemp8484=LibeStrcmp(nctemp8477,nctemp8480);
int nctemp8474 = (nctemp8484 ==1);
if(nctemp8474)
{
struct tree* nctemp8487= p;
nctempchar1* nctemp8489= type;
int nctemp8492=CodeEs(nctemp8487,nctemp8489);
struct tree* nctemp8494= p;
struct nctempchar1 *nctemp8498;
static struct nctempchar1 nctemp8499 = {{ 2}, (char*)" \0"};
nctemp8498=&nctemp8499;
nctempchar1* nctemp8496= nctemp8498;
int nctemp8500=CodeEs(nctemp8494,nctemp8496);
struct tree* nctemp8502= p;
nctempchar1* nctemp8504= tempr;
int nctemp8507=CodeEs(nctemp8502,nctemp8504);
struct tree* nctemp8509= p;
struct nctempchar1 *nctemp8513;
static struct nctempchar1 nctemp8514 = {{ 3}, (char*)".r\0"};
nctemp8513=&nctemp8514;
nctempchar1* nctemp8511= nctemp8513;
int nctemp8515=CodeEs(nctemp8509,nctemp8511);
struct tree* nctemp8517= p;
struct nctempchar1 *nctemp8521;
static struct nctempchar1 nctemp8522 = {{ 4}, (char*)" = \0"};
nctemp8521=&nctemp8522;
nctempchar1* nctemp8519= nctemp8521;
int nctemp8523=CodeEs(nctemp8517,nctemp8519);
struct tree* nctemp8525= p;
struct nctempchar1 *nctemp8529;
static struct nctempchar1 nctemp8530 = {{ 2}, (char*)"(\0"};
nctemp8529=&nctemp8530;
nctempchar1* nctemp8527= nctemp8529;
int nctemp8531=CodeEs(nctemp8525,nctemp8527);
struct tree* nctemp8533= p;
nctempchar1* nctemp8535= lval;
int nctemp8538=CodeEs(nctemp8533,nctemp8535);
struct tree* nctemp8540= p;
struct nctempchar1 *nctemp8544;
static struct nctempchar1 nctemp8545 = {{ 3}, (char*)".r\0"};
nctemp8544=&nctemp8545;
nctempchar1* nctemp8542= nctemp8544;
int nctemp8546=CodeEs(nctemp8540,nctemp8542);
struct tree* nctemp8548= p;
struct nctempchar1 *nctemp8552;
static struct nctempchar1 nctemp8553 = {{ 2}, (char*)"*\0"};
nctemp8552=&nctemp8553;
nctempchar1* nctemp8550= nctemp8552;
int nctemp8554=CodeEs(nctemp8548,nctemp8550);
struct tree* nctemp8556= p;
nctempchar1* nctemp8558= rval;
int nctemp8561=CodeEs(nctemp8556,nctemp8558);
struct tree* nctemp8563= p;
struct nctempchar1 *nctemp8567;
static struct nctempchar1 nctemp8568 = {{ 3}, (char*)".r\0"};
nctemp8567=&nctemp8568;
nctempchar1* nctemp8565= nctemp8567;
int nctemp8569=CodeEs(nctemp8563,nctemp8565);
struct tree* nctemp8571= p;
struct nctempchar1 *nctemp8575;
static struct nctempchar1 nctemp8576 = {{ 2}, (char*)"+\0"};
nctemp8575=&nctemp8576;
nctempchar1* nctemp8573= nctemp8575;
int nctemp8577=CodeEs(nctemp8571,nctemp8573);
struct tree* nctemp8579= p;
nctempchar1* nctemp8581= lval;
int nctemp8584=CodeEs(nctemp8579,nctemp8581);
struct tree* nctemp8586= p;
struct nctempchar1 *nctemp8590;
static struct nctempchar1 nctemp8591 = {{ 3}, (char*)".i\0"};
nctemp8590=&nctemp8591;
nctempchar1* nctemp8588= nctemp8590;
int nctemp8592=CodeEs(nctemp8586,nctemp8588);
struct tree* nctemp8594= p;
struct nctempchar1 *nctemp8598;
static struct nctempchar1 nctemp8599 = {{ 2}, (char*)"*\0"};
nctemp8598=&nctemp8599;
nctempchar1* nctemp8596= nctemp8598;
int nctemp8600=CodeEs(nctemp8594,nctemp8596);
struct tree* nctemp8602= p;
nctempchar1* nctemp8604= rval;
int nctemp8607=CodeEs(nctemp8602,nctemp8604);
struct tree* nctemp8609= p;
struct nctempchar1 *nctemp8613;
static struct nctempchar1 nctemp8614 = {{ 3}, (char*)".i\0"};
nctemp8613=&nctemp8614;
nctempchar1* nctemp8611= nctemp8613;
int nctemp8615=CodeEs(nctemp8609,nctemp8611);
struct tree* nctemp8617= p;
struct nctempchar1 *nctemp8621;
static struct nctempchar1 nctemp8622 = {{ 4}, (char*)")/(\0"};
nctemp8621=&nctemp8622;
nctempchar1* nctemp8619= nctemp8621;
int nctemp8623=CodeEs(nctemp8617,nctemp8619);
struct tree* nctemp8625= p;
nctempchar1* nctemp8627= rval;
int nctemp8630=CodeEs(nctemp8625,nctemp8627);
struct tree* nctemp8632= p;
struct nctempchar1 *nctemp8636;
static struct nctempchar1 nctemp8637 = {{ 3}, (char*)".r\0"};
nctemp8636=&nctemp8637;
nctempchar1* nctemp8634= nctemp8636;
int nctemp8638=CodeEs(nctemp8632,nctemp8634);
struct tree* nctemp8640= p;
struct nctempchar1 *nctemp8644;
static struct nctempchar1 nctemp8645 = {{ 2}, (char*)"*\0"};
nctemp8644=&nctemp8645;
nctempchar1* nctemp8642= nctemp8644;
int nctemp8646=CodeEs(nctemp8640,nctemp8642);
struct tree* nctemp8648= p;
nctempchar1* nctemp8650= rval;
int nctemp8653=CodeEs(nctemp8648,nctemp8650);
struct tree* nctemp8655= p;
struct nctempchar1 *nctemp8659;
static struct nctempchar1 nctemp8660 = {{ 3}, (char*)".r\0"};
nctemp8659=&nctemp8660;
nctempchar1* nctemp8657= nctemp8659;
int nctemp8661=CodeEs(nctemp8655,nctemp8657);
struct tree* nctemp8663= p;
struct nctempchar1 *nctemp8667;
static struct nctempchar1 nctemp8668 = {{ 2}, (char*)"+\0"};
nctemp8667=&nctemp8668;
nctempchar1* nctemp8665= nctemp8667;
int nctemp8669=CodeEs(nctemp8663,nctemp8665);
struct tree* nctemp8671= p;
nctempchar1* nctemp8673= rval;
int nctemp8676=CodeEs(nctemp8671,nctemp8673);
struct tree* nctemp8678= p;
struct nctempchar1 *nctemp8682;
static struct nctempchar1 nctemp8683 = {{ 3}, (char*)".i\0"};
nctemp8682=&nctemp8683;
nctempchar1* nctemp8680= nctemp8682;
int nctemp8684=CodeEs(nctemp8678,nctemp8680);
struct tree* nctemp8686= p;
struct nctempchar1 *nctemp8690;
static struct nctempchar1 nctemp8691 = {{ 2}, (char*)"*\0"};
nctemp8690=&nctemp8691;
nctempchar1* nctemp8688= nctemp8690;
int nctemp8692=CodeEs(nctemp8686,nctemp8688);
struct tree* nctemp8694= p;
nctempchar1* nctemp8696= rval;
int nctemp8699=CodeEs(nctemp8694,nctemp8696);
struct tree* nctemp8701= p;
struct nctempchar1 *nctemp8705;
static struct nctempchar1 nctemp8706 = {{ 3}, (char*)".i\0"};
nctemp8705=&nctemp8706;
nctempchar1* nctemp8703= nctemp8705;
int nctemp8707=CodeEs(nctemp8701,nctemp8703);
struct tree* nctemp8709= p;
struct nctempchar1 *nctemp8713;
static struct nctempchar1 nctemp8714 = {{ 5}, (char*)");\n\0"};
nctemp8713=&nctemp8714;
nctempchar1* nctemp8711= nctemp8713;
int nctemp8715=CodeEs(nctemp8709,nctemp8711);
struct tree* nctemp8717= p;
nctempchar1* nctemp8719= type;
int nctemp8722=CodeEs(nctemp8717,nctemp8719);
struct tree* nctemp8724= p;
struct nctempchar1 *nctemp8728;
static struct nctempchar1 nctemp8729 = {{ 2}, (char*)" \0"};
nctemp8728=&nctemp8729;
nctempchar1* nctemp8726= nctemp8728;
int nctemp8730=CodeEs(nctemp8724,nctemp8726);
struct tree* nctemp8732= p;
nctempchar1* nctemp8734= tempr;
int nctemp8737=CodeEs(nctemp8732,nctemp8734);
struct tree* nctemp8739= p;
struct nctempchar1 *nctemp8743;
static struct nctempchar1 nctemp8744 = {{ 3}, (char*)".i\0"};
nctemp8743=&nctemp8744;
nctempchar1* nctemp8741= nctemp8743;
int nctemp8745=CodeEs(nctemp8739,nctemp8741);
struct tree* nctemp8747= p;
struct nctempchar1 *nctemp8751;
static struct nctempchar1 nctemp8752 = {{ 4}, (char*)" = \0"};
nctemp8751=&nctemp8752;
nctempchar1* nctemp8749= nctemp8751;
int nctemp8753=CodeEs(nctemp8747,nctemp8749);
struct tree* nctemp8755= p;
struct nctempchar1 *nctemp8759;
static struct nctempchar1 nctemp8760 = {{ 2}, (char*)"(\0"};
nctemp8759=&nctemp8760;
nctempchar1* nctemp8757= nctemp8759;
int nctemp8761=CodeEs(nctemp8755,nctemp8757);
struct tree* nctemp8763= p;
nctempchar1* nctemp8765= lval;
int nctemp8768=CodeEs(nctemp8763,nctemp8765);
struct tree* nctemp8770= p;
struct nctempchar1 *nctemp8774;
static struct nctempchar1 nctemp8775 = {{ 3}, (char*)".i\0"};
nctemp8774=&nctemp8775;
nctempchar1* nctemp8772= nctemp8774;
int nctemp8776=CodeEs(nctemp8770,nctemp8772);
struct tree* nctemp8778= p;
struct nctempchar1 *nctemp8782;
static struct nctempchar1 nctemp8783 = {{ 2}, (char*)"*\0"};
nctemp8782=&nctemp8783;
nctempchar1* nctemp8780= nctemp8782;
int nctemp8784=CodeEs(nctemp8778,nctemp8780);
struct tree* nctemp8786= p;
nctempchar1* nctemp8788= rval;
int nctemp8791=CodeEs(nctemp8786,nctemp8788);
struct tree* nctemp8793= p;
struct nctempchar1 *nctemp8797;
static struct nctempchar1 nctemp8798 = {{ 3}, (char*)".r\0"};
nctemp8797=&nctemp8798;
nctempchar1* nctemp8795= nctemp8797;
int nctemp8799=CodeEs(nctemp8793,nctemp8795);
struct tree* nctemp8801= p;
struct nctempchar1 *nctemp8805;
static struct nctempchar1 nctemp8806 = {{ 2}, (char*)"-\0"};
nctemp8805=&nctemp8806;
nctempchar1* nctemp8803= nctemp8805;
int nctemp8807=CodeEs(nctemp8801,nctemp8803);
struct tree* nctemp8809= p;
nctempchar1* nctemp8811= lval;
int nctemp8814=CodeEs(nctemp8809,nctemp8811);
struct tree* nctemp8816= p;
struct nctempchar1 *nctemp8820;
static struct nctempchar1 nctemp8821 = {{ 3}, (char*)".r\0"};
nctemp8820=&nctemp8821;
nctempchar1* nctemp8818= nctemp8820;
int nctemp8822=CodeEs(nctemp8816,nctemp8818);
struct tree* nctemp8824= p;
struct nctempchar1 *nctemp8828;
static struct nctempchar1 nctemp8829 = {{ 2}, (char*)"*\0"};
nctemp8828=&nctemp8829;
nctempchar1* nctemp8826= nctemp8828;
int nctemp8830=CodeEs(nctemp8824,nctemp8826);
struct tree* nctemp8832= p;
nctempchar1* nctemp8834= rval;
int nctemp8837=CodeEs(nctemp8832,nctemp8834);
struct tree* nctemp8839= p;
struct nctempchar1 *nctemp8843;
static struct nctempchar1 nctemp8844 = {{ 3}, (char*)".i\0"};
nctemp8843=&nctemp8844;
nctempchar1* nctemp8841= nctemp8843;
int nctemp8845=CodeEs(nctemp8839,nctemp8841);
struct tree* nctemp8847= p;
struct nctempchar1 *nctemp8851;
static struct nctempchar1 nctemp8852 = {{ 4}, (char*)")/(\0"};
nctemp8851=&nctemp8852;
nctempchar1* nctemp8849= nctemp8851;
int nctemp8853=CodeEs(nctemp8847,nctemp8849);
struct tree* nctemp8855= p;
nctempchar1* nctemp8857= rval;
int nctemp8860=CodeEs(nctemp8855,nctemp8857);
struct tree* nctemp8862= p;
struct nctempchar1 *nctemp8866;
static struct nctempchar1 nctemp8867 = {{ 3}, (char*)".r\0"};
nctemp8866=&nctemp8867;
nctempchar1* nctemp8864= nctemp8866;
int nctemp8868=CodeEs(nctemp8862,nctemp8864);
struct tree* nctemp8870= p;
struct nctempchar1 *nctemp8874;
static struct nctempchar1 nctemp8875 = {{ 2}, (char*)"*\0"};
nctemp8874=&nctemp8875;
nctempchar1* nctemp8872= nctemp8874;
int nctemp8876=CodeEs(nctemp8870,nctemp8872);
struct tree* nctemp8878= p;
nctempchar1* nctemp8880= rval;
int nctemp8883=CodeEs(nctemp8878,nctemp8880);
struct tree* nctemp8885= p;
struct nctempchar1 *nctemp8889;
static struct nctempchar1 nctemp8890 = {{ 3}, (char*)".r\0"};
nctemp8889=&nctemp8890;
nctempchar1* nctemp8887= nctemp8889;
int nctemp8891=CodeEs(nctemp8885,nctemp8887);
struct tree* nctemp8893= p;
struct nctempchar1 *nctemp8897;
static struct nctempchar1 nctemp8898 = {{ 2}, (char*)"+\0"};
nctemp8897=&nctemp8898;
nctempchar1* nctemp8895= nctemp8897;
int nctemp8899=CodeEs(nctemp8893,nctemp8895);
struct tree* nctemp8901= p;
nctempchar1* nctemp8903= rval;
int nctemp8906=CodeEs(nctemp8901,nctemp8903);
struct tree* nctemp8908= p;
struct nctempchar1 *nctemp8912;
static struct nctempchar1 nctemp8913 = {{ 3}, (char*)".i\0"};
nctemp8912=&nctemp8913;
nctempchar1* nctemp8910= nctemp8912;
int nctemp8914=CodeEs(nctemp8908,nctemp8910);
struct tree* nctemp8916= p;
struct nctempchar1 *nctemp8920;
static struct nctempchar1 nctemp8921 = {{ 2}, (char*)"*\0"};
nctemp8920=&nctemp8921;
nctempchar1* nctemp8918= nctemp8920;
int nctemp8922=CodeEs(nctemp8916,nctemp8918);
struct tree* nctemp8924= p;
nctempchar1* nctemp8926= rval;
int nctemp8929=CodeEs(nctemp8924,nctemp8926);
struct tree* nctemp8931= p;
struct nctempchar1 *nctemp8935;
static struct nctempchar1 nctemp8936 = {{ 3}, (char*)".i\0"};
nctemp8935=&nctemp8936;
nctempchar1* nctemp8933= nctemp8935;
int nctemp8937=CodeEs(nctemp8931,nctemp8933);
struct tree* nctemp8939= p;
struct nctempchar1 *nctemp8943;
static struct nctempchar1 nctemp8944 = {{ 5}, (char*)");\n\0"};
nctemp8943=&nctemp8944;
nctempchar1* nctemp8941= nctemp8943;
int nctemp8945=CodeEs(nctemp8939,nctemp8941);
}
}
}
}
else{
struct tree* nctemp8947= p;
nctempchar1* nctemp8949= type;
int nctemp8952=CodeEs(nctemp8947,nctemp8949);
struct tree* nctemp8954= p;
struct nctempchar1 *nctemp8958;
static struct nctempchar1 nctemp8959 = {{ 2}, (char*)" \0"};
nctemp8958=&nctemp8959;
nctempchar1* nctemp8956= nctemp8958;
int nctemp8960=CodeEs(nctemp8954,nctemp8956);
struct tree* nctemp8962= p;
nctempchar1* nctemp8964= tempr;
int nctemp8967=CodeEs(nctemp8962,nctemp8964);
struct tree* nctemp8969= p;
struct nctempchar1 *nctemp8973;
static struct nctempchar1 nctemp8974 = {{ 4}, (char*)" = \0"};
nctemp8973=&nctemp8974;
nctempchar1* nctemp8971= nctemp8973;
int nctemp8975=CodeEs(nctemp8969,nctemp8971);
struct tree* nctemp8977= p;
nctempchar1* nctemp8979= lval;
int nctemp8982=CodeEs(nctemp8977,nctemp8979);
struct tree* nctemp8984= p;
struct nctempchar1 *nctemp8988;
static struct nctempchar1 nctemp8989 = {{ 2}, (char*)" \0"};
nctemp8988=&nctemp8989;
nctempchar1* nctemp8986= nctemp8988;
int nctemp8990=CodeEs(nctemp8984,nctemp8986);
struct tree* nctemp8992= p;
struct tree* nctemp8996= p;
nctempchar1* nctemp8998=PtreeGetdef(nctemp8996);
nctempchar1* nctemp8994= nctemp8998;
int nctemp8999=CodeEs(nctemp8992,nctemp8994);
struct tree* nctemp9001= p;
struct nctempchar1 *nctemp9005;
static struct nctempchar1 nctemp9006 = {{ 2}, (char*)" \0"};
nctemp9005=&nctemp9006;
nctempchar1* nctemp9003= nctemp9005;
int nctemp9007=CodeEs(nctemp9001,nctemp9003);
struct tree* nctemp9009= p;
nctempchar1* nctemp9011= rval;
int nctemp9014=CodeEs(nctemp9009,nctemp9011);
struct tree* nctemp9016= p;
struct nctempchar1 *nctemp9020;
static struct nctempchar1 nctemp9021 = {{ 4}, (char*)";\n\0"};
nctemp9020=&nctemp9021;
nctempchar1* nctemp9018= nctemp9020;
int nctemp9022=CodeEs(nctemp9016,nctemp9018);
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
struct tree* nctemp9030= p;
nctempchar1* nctemp9032=PtreeGetname(nctemp9030);
nctempchar1* nctemp9028= nctemp9032;
struct nctempchar1 *nctemp9035;
static struct nctempchar1 nctemp9036 = {{ 8}, (char*)"binexpr\0"};
nctemp9035=&nctemp9036;
nctempchar1* nctemp9033= nctemp9035;
int nctemp9037=LibeStrcmp(nctemp9028,nctemp9033);
int nctemp9025 = (nctemp9037 ==1);
if(nctemp9025)
{
struct tree* nctemp9044= p;
nctempchar1* nctemp9046=PtreeGetype(nctemp9044);
type=nctemp9046;
nctempchar1* nctemp9052=CodeMktemp();
tempr=nctemp9052;
nctempchar1* nctemp9058=CodeMktemp();
tempi=nctemp9058;
struct tree* nctemp9063= p;
struct tree* nctemp9065=PtreeMvchild(nctemp9063);
np =nctemp9065;
struct tree* nctemp9071= np;
nctempchar1* nctemp9073=CodeUnexpr(nctemp9071);
lval=nctemp9073;
struct tree* nctemp9081= np;
struct tree* nctemp9083=PtreeMvsister(nctemp9081);
struct tree* nctemp9079= nctemp9083;
nctempchar1* nctemp9084=CodeUnexpr(nctemp9079);
rval=nctemp9084;
struct tree* nctemp9099= p;
nctempchar1* nctemp9101=PtreeGetdef(nctemp9099);
nctempchar1* nctemp9097= nctemp9101;
struct nctempchar1 *nctemp9104;
static struct nctempchar1 nctemp9105 = {{ 2}, (char*)"+\0"};
nctemp9104=&nctemp9105;
nctempchar1* nctemp9102= nctemp9104;
int nctemp9106=LibeStrcmp(nctemp9097,nctemp9102);
int nctemp9094 = (nctemp9106 ==1);
struct tree* nctemp9114= p;
nctempchar1* nctemp9116=PtreeGetdef(nctemp9114);
nctempchar1* nctemp9112= nctemp9116;
struct nctempchar1 *nctemp9119;
static struct nctempchar1 nctemp9120 = {{ 2}, (char*)"-\0"};
nctemp9119=&nctemp9120;
nctempchar1* nctemp9117= nctemp9119;
int nctemp9121=LibeStrcmp(nctemp9112,nctemp9117);
int nctemp9109 = (nctemp9121 ==1);
int nctemp9091 = (nctemp9094 || nctemp9109);
struct tree* nctemp9129= p;
nctempchar1* nctemp9131=PtreeGetdef(nctemp9129);
nctempchar1* nctemp9127= nctemp9131;
struct nctempchar1 *nctemp9134;
static struct nctempchar1 nctemp9135 = {{ 2}, (char*)"*\0"};
nctemp9134=&nctemp9135;
nctempchar1* nctemp9132= nctemp9134;
int nctemp9136=LibeStrcmp(nctemp9127,nctemp9132);
int nctemp9124 = (nctemp9136 ==1);
int nctemp9088 = (nctemp9091 || nctemp9124);
struct tree* nctemp9144= p;
nctempchar1* nctemp9146=PtreeGetdef(nctemp9144);
nctempchar1* nctemp9142= nctemp9146;
struct nctempchar1 *nctemp9149;
static struct nctempchar1 nctemp9150 = {{ 2}, (char*)"/\0"};
nctemp9149=&nctemp9150;
nctempchar1* nctemp9147= nctemp9149;
int nctemp9151=LibeStrcmp(nctemp9142,nctemp9147);
int nctemp9139 = (nctemp9151 ==1);
int nctemp9085 = (nctemp9088 || nctemp9139);
if(nctemp9085)
{
struct tree* nctemp9154= p;
nctempchar1* nctemp9156= lval;
nctempchar1* nctemp9159= rval;
nctempchar1* nctemp9162=CodeAddexpr(nctemp9154,nctemp9156,nctemp9159);
return nctemp9162;
}
else{
struct tree* nctemp9168= p;
nctempchar1* nctemp9170=PtreeGetdef(nctemp9168);
nctempchar1* nctemp9166= nctemp9170;
struct nctempchar1 *nctemp9173;
static struct nctempchar1 nctemp9174 = {{ 2}, (char*)"=\0"};
nctemp9173=&nctemp9174;
nctempchar1* nctemp9171= nctemp9173;
int nctemp9175=LibeStrcmp(nctemp9166,nctemp9171);
int nctemp9163 = (nctemp9175 ==1);
if(nctemp9163)
{
struct tree* nctemp9188= p;
nctempchar1* nctemp9190=PtreeGetype(nctemp9188);
nctempchar1* nctemp9186= nctemp9190;
struct nctempchar1 *nctemp9193;
static struct nctempchar1 nctemp9194 = {{ 8}, (char*)"complex\0"};
nctemp9193=&nctemp9194;
nctempchar1* nctemp9191= nctemp9193;
int nctemp9195=LibeStrcmp(nctemp9186,nctemp9191);
int nctemp9183 = (nctemp9195 ==1);
struct tree* nctemp9203= p;
nctempchar1* nctemp9205=PtreeGetref(nctemp9203);
nctempchar1* nctemp9201= nctemp9205;
struct nctempchar1 *nctemp9208;
static struct nctempchar1 nctemp9209 = {{ 5}, (char*)"aref\0"};
nctemp9208=&nctemp9209;
nctempchar1* nctemp9206= nctemp9208;
int nctemp9210=LibeStrcmp(nctemp9201,nctemp9206);
int nctemp9198 = (nctemp9210 ==0);
int nctemp9180 = (nctemp9183 && nctemp9198);
struct tree* nctemp9218= p;
nctempchar1* nctemp9220=PtreeGetref(nctemp9218);
nctempchar1* nctemp9216= nctemp9220;
struct nctempchar1 *nctemp9223;
static struct nctempchar1 nctemp9224 = {{ 5}, (char*)"sref\0"};
nctemp9223=&nctemp9224;
nctempchar1* nctemp9221= nctemp9223;
int nctemp9225=LibeStrcmp(nctemp9216,nctemp9221);
int nctemp9213 = (nctemp9225 ==0);
int nctemp9177 = (nctemp9180 && nctemp9213);
if(nctemp9177)
{
struct tree* nctemp9228= p;
nctempchar1* nctemp9230= lval;
int nctemp9233=CodeEs(nctemp9228,nctemp9230);
struct tree* nctemp9235= p;
struct nctempchar1 *nctemp9239;
static struct nctempchar1 nctemp9240 = {{ 4}, (char*)".r \0"};
nctemp9239=&nctemp9240;
nctempchar1* nctemp9237= nctemp9239;
int nctemp9241=CodeEs(nctemp9235,nctemp9237);
struct tree* nctemp9243= p;
struct nctempchar1 *nctemp9247;
static struct nctempchar1 nctemp9248 = {{ 2}, (char*)"=\0"};
nctemp9247=&nctemp9248;
nctempchar1* nctemp9245= nctemp9247;
int nctemp9249=CodeEs(nctemp9243,nctemp9245);
struct tree* nctemp9251= p;
nctempchar1* nctemp9253= rval;
int nctemp9256=CodeEs(nctemp9251,nctemp9253);
struct tree* nctemp9258= p;
struct nctempchar1 *nctemp9262;
static struct nctempchar1 nctemp9263 = {{ 3}, (char*)".r\0"};
nctemp9262=&nctemp9263;
nctempchar1* nctemp9260= nctemp9262;
int nctemp9264=CodeEs(nctemp9258,nctemp9260);
struct tree* nctemp9266= p;
struct nctempchar1 *nctemp9270;
static struct nctempchar1 nctemp9271 = {{ 4}, (char*)";\n\0"};
nctemp9270=&nctemp9271;
nctempchar1* nctemp9268= nctemp9270;
int nctemp9272=CodeEs(nctemp9266,nctemp9268);
struct tree* nctemp9274= p;
nctempchar1* nctemp9276= lval;
int nctemp9279=CodeEs(nctemp9274,nctemp9276);
struct tree* nctemp9281= p;
struct nctempchar1 *nctemp9285;
static struct nctempchar1 nctemp9286 = {{ 3}, (char*)".i\0"};
nctemp9285=&nctemp9286;
nctempchar1* nctemp9283= nctemp9285;
int nctemp9287=CodeEs(nctemp9281,nctemp9283);
struct tree* nctemp9289= p;
struct nctempchar1 *nctemp9293;
static struct nctempchar1 nctemp9294 = {{ 2}, (char*)"=\0"};
nctemp9293=&nctemp9294;
nctempchar1* nctemp9291= nctemp9293;
int nctemp9295=CodeEs(nctemp9289,nctemp9291);
struct tree* nctemp9297= p;
nctempchar1* nctemp9299= rval;
int nctemp9302=CodeEs(nctemp9297,nctemp9299);
struct tree* nctemp9304= p;
struct nctempchar1 *nctemp9308;
static struct nctempchar1 nctemp9309 = {{ 3}, (char*)".i\0"};
nctemp9308=&nctemp9309;
nctempchar1* nctemp9306= nctemp9308;
int nctemp9310=CodeEs(nctemp9304,nctemp9306);
struct tree* nctemp9312= p;
struct nctempchar1 *nctemp9316;
static struct nctempchar1 nctemp9317 = {{ 4}, (char*)";\n\0"};
nctemp9316=&nctemp9317;
nctempchar1* nctemp9314= nctemp9316;
int nctemp9318=CodeEs(nctemp9312,nctemp9314);
return lval;
}
else{
struct tree* nctemp9326= np;
nctempchar1* nctemp9328=PtreeGetref(nctemp9326);
nctempchar1* nctemp9324= nctemp9328;
struct nctempchar1 *nctemp9331;
static struct nctempchar1 nctemp9332 = {{ 5}, (char*)"aref\0"};
nctemp9331=&nctemp9332;
nctempchar1* nctemp9329= nctemp9331;
int nctemp9333=LibeStrcmp(nctemp9324,nctemp9329);
int nctemp9321 = (nctemp9333 ==1);
if(nctemp9321)
{
struct tree* nctemp9342= np;
struct tree* nctemp9344=PtreeMvsister(nctemp9342);
struct tree* nctemp9340= nctemp9344;
nctempchar1* nctemp9345=PtreeGetname(nctemp9340);
nctempchar1* nctemp9338= nctemp9345;
struct nctempchar1 *nctemp9348;
static struct nctempchar1 nctemp9349 = {{ 10}, (char*)"iconstant\0"};
nctemp9348=&nctemp9349;
nctempchar1* nctemp9346= nctemp9348;
int nctemp9350=LibeStrcmp(nctemp9338,nctemp9346);
struct tree* nctemp9356= np;
struct tree* nctemp9358=PtreeMvsister(nctemp9356);
struct tree* nctemp9354= nctemp9358;
nctempchar1* nctemp9359=PtreeGetdef(nctemp9354);
nctempchar1* nctemp9352= nctemp9359;
struct nctempchar1 *nctemp9362;
static struct nctempchar1 nctemp9363 = {{ 2}, (char*)"0\0"};
nctemp9362=&nctemp9363;
nctempchar1* nctemp9360= nctemp9362;
int nctemp9364=LibeStrcmp(nctemp9352,nctemp9360);
int nctemp9335 = (nctemp9350 && nctemp9364);
if(nctemp9335)
{
struct tree* nctemp9366= p;
nctempchar1* nctemp9368= lval;
int nctemp9371=CodeEs(nctemp9366,nctemp9368);
struct tree* nctemp9373= p;
struct nctempchar1 *nctemp9377;
static struct nctempchar1 nctemp9378 = {{ 3}, (char*)"=(\0"};
nctemp9377=&nctemp9378;
nctempchar1* nctemp9375= nctemp9377;
int nctemp9379=CodeEs(nctemp9373,nctemp9375);
struct tree* nctemp9381= p;
nctempchar1* nctemp9383= rval;
int nctemp9386=CodeEs(nctemp9381,nctemp9383);
struct tree* nctemp9388= p;
struct nctempchar1 *nctemp9392;
static struct nctempchar1 nctemp9393 = {{ 5}, (char*)");\n\0"};
nctemp9392=&nctemp9393;
nctempchar1* nctemp9390= nctemp9392;
int nctemp9394=CodeEs(nctemp9388,nctemp9390);
return lval;
}
else{
struct tree* nctemp9398= p;
nctempchar1* nctemp9400= lval;
int nctemp9403=CodeEs(nctemp9398,nctemp9400);
struct tree* nctemp9405= p;
struct nctempchar1 *nctemp9409;
static struct nctempchar1 nctemp9410 = {{ 2}, (char*)"=\0"};
nctemp9409=&nctemp9410;
nctempchar1* nctemp9407= nctemp9409;
int nctemp9411=CodeEs(nctemp9405,nctemp9407);
struct tree* nctemp9413= p;
nctempchar1* nctemp9415= rval;
int nctemp9418=CodeEs(nctemp9413,nctemp9415);
struct tree* nctemp9420= p;
struct nctempchar1 *nctemp9424;
static struct nctempchar1 nctemp9425 = {{ 4}, (char*)";\n\0"};
nctemp9424=&nctemp9425;
nctempchar1* nctemp9422= nctemp9424;
int nctemp9426=CodeEs(nctemp9420,nctemp9422);
return lval;
}
}
else{
struct tree* nctemp9430= p;
nctempchar1* nctemp9432= lval;
int nctemp9435=CodeEs(nctemp9430,nctemp9432);
struct tree* nctemp9437= p;
struct nctempchar1 *nctemp9441;
static struct nctempchar1 nctemp9442 = {{ 2}, (char*)" \0"};
nctemp9441=&nctemp9442;
nctempchar1* nctemp9439= nctemp9441;
int nctemp9443=CodeEs(nctemp9437,nctemp9439);
struct tree* nctemp9445= p;
struct nctempchar1 *nctemp9449;
static struct nctempchar1 nctemp9450 = {{ 2}, (char*)"=\0"};
nctemp9449=&nctemp9450;
nctempchar1* nctemp9447= nctemp9449;
int nctemp9451=CodeEs(nctemp9445,nctemp9447);
struct tree* nctemp9453= p;
nctempchar1* nctemp9455= rval;
int nctemp9458=CodeEs(nctemp9453,nctemp9455);
struct tree* nctemp9460= p;
struct nctempchar1 *nctemp9464;
static struct nctempchar1 nctemp9465 = {{ 4}, (char*)";\n\0"};
nctemp9464=&nctemp9465;
nctempchar1* nctemp9462= nctemp9464;
int nctemp9466=CodeEs(nctemp9460,nctemp9462);
return lval;
}
}
}
else{
struct tree* nctemp9477= p;
nctempchar1* nctemp9479=PtreeGetdef(nctemp9477);
nctempchar1* nctemp9475= nctemp9479;
struct nctempchar1 *nctemp9482;
static struct nctempchar1 nctemp9483 = {{ 3}, (char*)"==\0"};
nctemp9482=&nctemp9483;
nctempchar1* nctemp9480= nctemp9482;
int nctemp9484=LibeStrcmp(nctemp9475,nctemp9480);
int nctemp9472 = (nctemp9484 ==1);
struct tree* nctemp9492= p;
nctempchar1* nctemp9494=PtreeGetdef(nctemp9492);
nctempchar1* nctemp9490= nctemp9494;
struct nctempchar1 *nctemp9497;
static struct nctempchar1 nctemp9498 = {{ 3}, (char*)"!=\0"};
nctemp9497=&nctemp9498;
nctempchar1* nctemp9495= nctemp9497;
int nctemp9499=LibeStrcmp(nctemp9490,nctemp9495);
int nctemp9487 = (nctemp9499 ==1);
int nctemp9469 = (nctemp9472 || nctemp9487);
if(nctemp9469)
{
struct tree* nctemp9506= np;
nctempchar1* nctemp9508=PtreeGetref(nctemp9506);
nctempchar1* nctemp9504= nctemp9508;
struct nctempchar1 *nctemp9511;
static struct nctempchar1 nctemp9512 = {{ 5}, (char*)"aref\0"};
nctemp9511=&nctemp9512;
nctempchar1* nctemp9509= nctemp9511;
int nctemp9513=LibeStrcmp(nctemp9504,nctemp9509);
int nctemp9501 = (nctemp9513 ==1);
if(nctemp9501)
{
sp =np;
struct tree* nctemp9526= np;
struct tree* nctemp9528=PtreeMvsister(nctemp9526);
struct tree* nctemp9524= nctemp9528;
nctempchar1* nctemp9529=PtreeGetname(nctemp9524);
nctempchar1* nctemp9522= nctemp9529;
struct nctempchar1 *nctemp9532;
static struct nctempchar1 nctemp9533 = {{ 10}, (char*)"iconstant\0"};
nctemp9532=&nctemp9533;
nctempchar1* nctemp9530= nctemp9532;
int nctemp9534=LibeStrcmp(nctemp9522,nctemp9530);
struct tree* nctemp9540= np;
struct tree* nctemp9542=PtreeMvsister(nctemp9540);
struct tree* nctemp9538= nctemp9542;
nctempchar1* nctemp9543=PtreeGetdef(nctemp9538);
nctempchar1* nctemp9536= nctemp9543;
struct nctempchar1 *nctemp9546;
static struct nctempchar1 nctemp9547 = {{ 2}, (char*)"0\0"};
nctemp9546=&nctemp9547;
nctempchar1* nctemp9544= nctemp9546;
int nctemp9548=LibeStrcmp(nctemp9536,nctemp9544);
int nctemp9519 = (nctemp9534 && nctemp9548);
if(nctemp9519)
{
struct tree* nctemp9550= p;
struct nctempchar1 *nctemp9554;
static struct nctempchar1 nctemp9555 = {{ 7}, (char*)"nctemp\0"};
nctemp9554=&nctemp9555;
nctempchar1* nctemp9552= nctemp9554;
int nctemp9556=CodeEs(nctemp9550,nctemp9552);
struct tree* nctemp9558= p;
struct tree* nctemp9562= sp;
nctempchar1* nctemp9564=PtreeGetype(nctemp9562);
nctempchar1* nctemp9560= nctemp9564;
int nctemp9565=CodeEs(nctemp9558,nctemp9560);
struct tree* nctemp9569= sp;
int nctemp9571=PtreeGetrank(nctemp9569);
int nctemp9567= nctemp9571;
int nctemp9572=CodeEd(nctemp9567);
struct tree* nctemp9574= p;
struct nctempchar1 *nctemp9578;
static struct nctempchar1 nctemp9579 = {{ 3}, (char*)" *\0"};
nctemp9578=&nctemp9579;
nctempchar1* nctemp9576= nctemp9578;
int nctemp9580=CodeEs(nctemp9574,nctemp9576);
struct tree* nctemp9582= p;
nctempchar1* nctemp9584= tempi;
int nctemp9587=CodeEs(nctemp9582,nctemp9584);
struct tree* nctemp9589= p;
struct nctempchar1 *nctemp9593;
static struct nctempchar1 nctemp9594 = {{ 3}, (char*)" =\0"};
nctemp9593=&nctemp9594;
nctempchar1* nctemp9591= nctemp9593;
int nctemp9595=CodeEs(nctemp9589,nctemp9591);
struct tree* nctemp9597= p;
nctempchar1* nctemp9599= lval;
int nctemp9602=CodeEs(nctemp9597,nctemp9599);
struct tree* nctemp9604= p;
struct nctempchar1 *nctemp9608;
static struct nctempchar1 nctemp9609 = {{ 4}, (char*)";\n\0"};
nctemp9608=&nctemp9609;
nctempchar1* nctemp9606= nctemp9608;
int nctemp9610=CodeEs(nctemp9604,nctemp9606);
struct tree* nctemp9612= p;
nctempchar1* nctemp9614= type;
int nctemp9617=CodeEs(nctemp9612,nctemp9614);
struct tree* nctemp9619= p;
struct nctempchar1 *nctemp9623;
static struct nctempchar1 nctemp9624 = {{ 2}, (char*)" \0"};
nctemp9623=&nctemp9624;
nctempchar1* nctemp9621= nctemp9623;
int nctemp9625=CodeEs(nctemp9619,nctemp9621);
struct tree* nctemp9627= p;
nctempchar1* nctemp9629= tempr;
int nctemp9632=CodeEs(nctemp9627,nctemp9629);
struct tree* nctemp9634= p;
struct nctempchar1 *nctemp9638;
static struct nctempchar1 nctemp9639 = {{ 4}, (char*)" =(\0"};
nctemp9638=&nctemp9639;
nctempchar1* nctemp9636= nctemp9638;
int nctemp9640=CodeEs(nctemp9634,nctemp9636);
struct tree* nctemp9642= p;
nctempchar1* nctemp9644= tempi;
int nctemp9647=CodeEs(nctemp9642,nctemp9644);
struct tree* nctemp9649= p;
struct tree* nctemp9653= p;
nctempchar1* nctemp9655=PtreeGetdef(nctemp9653);
nctempchar1* nctemp9651= nctemp9655;
int nctemp9656=CodeEs(nctemp9649,nctemp9651);
struct tree* nctemp9658= p;
nctempchar1* nctemp9660= rval;
int nctemp9663=CodeEs(nctemp9658,nctemp9660);
struct tree* nctemp9665= p;
struct nctempchar1 *nctemp9669;
static struct nctempchar1 nctemp9670 = {{ 5}, (char*)");\n\0"};
nctemp9669=&nctemp9670;
nctempchar1* nctemp9667= nctemp9669;
int nctemp9671=CodeEs(nctemp9665,nctemp9667);
return tempr;
}
else{
struct tree* nctemp9675= p;
nctempchar1* nctemp9677= type;
int nctemp9680=CodeEs(nctemp9675,nctemp9677);
struct tree* nctemp9682= p;
struct nctempchar1 *nctemp9686;
static struct nctempchar1 nctemp9687 = {{ 2}, (char*)" \0"};
nctemp9686=&nctemp9687;
nctempchar1* nctemp9684= nctemp9686;
int nctemp9688=CodeEs(nctemp9682,nctemp9684);
struct tree* nctemp9690= p;
nctempchar1* nctemp9692= tempr;
int nctemp9695=CodeEs(nctemp9690,nctemp9692);
struct tree* nctemp9697= p;
struct nctempchar1 *nctemp9701;
static struct nctempchar1 nctemp9702 = {{ 5}, (char*)" = (\0"};
nctemp9701=&nctemp9702;
nctempchar1* nctemp9699= nctemp9701;
int nctemp9703=CodeEs(nctemp9697,nctemp9699);
struct tree* nctemp9705= p;
nctempchar1* nctemp9707= lval;
int nctemp9710=CodeEs(nctemp9705,nctemp9707);
struct tree* nctemp9712= p;
struct tree* nctemp9716= p;
nctempchar1* nctemp9718=PtreeGetdef(nctemp9716);
nctempchar1* nctemp9714= nctemp9718;
int nctemp9719=CodeEs(nctemp9712,nctemp9714);
struct tree* nctemp9721= p;
nctempchar1* nctemp9723= rval;
int nctemp9726=CodeEs(nctemp9721,nctemp9723);
struct tree* nctemp9728= p;
struct nctempchar1 *nctemp9732;
static struct nctempchar1 nctemp9733 = {{ 5}, (char*)");\n\0"};
nctemp9732=&nctemp9733;
nctempchar1* nctemp9730= nctemp9732;
int nctemp9734=CodeEs(nctemp9728,nctemp9730);
return lval;
}
}
else{
struct tree* nctemp9738= p;
nctempchar1* nctemp9740= type;
int nctemp9743=CodeEs(nctemp9738,nctemp9740);
struct tree* nctemp9745= p;
struct nctempchar1 *nctemp9749;
static struct nctempchar1 nctemp9750 = {{ 2}, (char*)" \0"};
nctemp9749=&nctemp9750;
nctempchar1* nctemp9747= nctemp9749;
int nctemp9751=CodeEs(nctemp9745,nctemp9747);
struct tree* nctemp9753= p;
nctempchar1* nctemp9755= tempr;
int nctemp9758=CodeEs(nctemp9753,nctemp9755);
struct tree* nctemp9760= p;
struct nctempchar1 *nctemp9764;
static struct nctempchar1 nctemp9765 = {{ 5}, (char*)" = (\0"};
nctemp9764=&nctemp9765;
nctempchar1* nctemp9762= nctemp9764;
int nctemp9766=CodeEs(nctemp9760,nctemp9762);
struct tree* nctemp9768= p;
nctempchar1* nctemp9770= lval;
int nctemp9773=CodeEs(nctemp9768,nctemp9770);
struct tree* nctemp9775= p;
struct nctempchar1 *nctemp9779;
static struct nctempchar1 nctemp9780 = {{ 2}, (char*)" \0"};
nctemp9779=&nctemp9780;
nctempchar1* nctemp9777= nctemp9779;
int nctemp9781=CodeEs(nctemp9775,nctemp9777);
struct tree* nctemp9783= p;
struct tree* nctemp9787= p;
nctempchar1* nctemp9789=PtreeGetdef(nctemp9787);
nctempchar1* nctemp9785= nctemp9789;
int nctemp9790=CodeEs(nctemp9783,nctemp9785);
struct tree* nctemp9792= p;
nctempchar1* nctemp9794= rval;
int nctemp9797=CodeEs(nctemp9792,nctemp9794);
struct tree* nctemp9799= p;
struct nctempchar1 *nctemp9803;
static struct nctempchar1 nctemp9804 = {{ 5}, (char*)");\n\0"};
nctemp9803=&nctemp9804;
nctempchar1* nctemp9801= nctemp9803;
int nctemp9805=CodeEs(nctemp9799,nctemp9801);
return tempr;
}
}
else{
struct tree* nctemp9809= p;
nctempchar1* nctemp9811= type;
int nctemp9814=CodeEs(nctemp9809,nctemp9811);
struct tree* nctemp9816= p;
struct nctempchar1 *nctemp9820;
static struct nctempchar1 nctemp9821 = {{ 2}, (char*)" \0"};
nctemp9820=&nctemp9821;
nctempchar1* nctemp9818= nctemp9820;
int nctemp9822=CodeEs(nctemp9816,nctemp9818);
struct tree* nctemp9824= p;
nctempchar1* nctemp9826= tempr;
int nctemp9829=CodeEs(nctemp9824,nctemp9826);
struct tree* nctemp9831= p;
struct nctempchar1 *nctemp9835;
static struct nctempchar1 nctemp9836 = {{ 5}, (char*)" = (\0"};
nctemp9835=&nctemp9836;
nctempchar1* nctemp9833= nctemp9835;
int nctemp9837=CodeEs(nctemp9831,nctemp9833);
struct tree* nctemp9839= p;
nctempchar1* nctemp9841= lval;
int nctemp9844=CodeEs(nctemp9839,nctemp9841);
struct tree* nctemp9846= p;
struct nctempchar1 *nctemp9850;
static struct nctempchar1 nctemp9851 = {{ 2}, (char*)" \0"};
nctemp9850=&nctemp9851;
nctempchar1* nctemp9848= nctemp9850;
int nctemp9852=CodeEs(nctemp9846,nctemp9848);
struct tree* nctemp9854= p;
struct tree* nctemp9858= p;
nctempchar1* nctemp9860=PtreeGetdef(nctemp9858);
nctempchar1* nctemp9856= nctemp9860;
int nctemp9861=CodeEs(nctemp9854,nctemp9856);
struct tree* nctemp9863= p;
struct nctempchar1 *nctemp9867;
static struct nctempchar1 nctemp9868 = {{ 2}, (char*)" \0"};
nctemp9867=&nctemp9868;
nctempchar1* nctemp9865= nctemp9867;
int nctemp9869=CodeEs(nctemp9863,nctemp9865);
struct tree* nctemp9871= p;
nctempchar1* nctemp9873= rval;
int nctemp9876=CodeEs(nctemp9871,nctemp9873);
struct tree* nctemp9878= p;
struct nctempchar1 *nctemp9882;
static struct nctempchar1 nctemp9883 = {{ 5}, (char*)");\n\0"};
nctemp9882=&nctemp9883;
nctempchar1* nctemp9880= nctemp9882;
int nctemp9884=CodeEs(nctemp9878,nctemp9880);
return tempr;
}
}
}
}
else{
struct tree* nctemp9888= p;
nctempchar1* nctemp9890=CodeUnexpr(nctemp9888);
return nctemp9890;
}
}
nctempchar1 * CodeExpr (struct tree* p)
{
struct tree* sp;
nctempchar1 *rval;
struct tree* nctemp9895= p;
struct tree* nctemp9897=PtreeMvchild(nctemp9895);
sp =nctemp9897;
struct tree* nctemp9903= sp;
nctempchar1* nctemp9905=CodeBinexpr(nctemp9903);
rval=nctemp9905;
return rval;
}
int CodeWhilestmnt (struct tree* p)
{
nctempchar1 *cond;
nctempchar1 *tmp;
nctempchar1 *cond2;
struct tree* sp;
struct tree* nctemp9912= p;
struct tree* nctemp9914=PtreeMvchild(nctemp9912);
p =nctemp9914;
sp =p;
struct tree* nctemp9924= sp;
nctempchar1* nctemp9926=CodeExpr(nctemp9924);
cond=nctemp9926;
nctempchar1* nctemp9932=CodeMktemp();
tmp=nctemp9932;
struct tree* nctemp9934= p;
struct tree* nctemp9938= sp;
nctempchar1* nctemp9940=PtreeGetype(nctemp9938);
nctempchar1* nctemp9936= nctemp9940;
int nctemp9941=CodeEs(nctemp9934,nctemp9936);
struct tree* nctemp9943= p;
struct nctempchar1 *nctemp9947;
static struct nctempchar1 nctemp9948 = {{ 2}, (char*)" \0"};
nctemp9947=&nctemp9948;
nctempchar1* nctemp9945= nctemp9947;
int nctemp9949=CodeEs(nctemp9943,nctemp9945);
struct tree* nctemp9951= p;
nctempchar1* nctemp9953= tmp;
int nctemp9956=CodeEs(nctemp9951,nctemp9953);
struct tree* nctemp9958= p;
struct nctempchar1 *nctemp9962;
static struct nctempchar1 nctemp9963 = {{ 2}, (char*)"=\0"};
nctemp9962=&nctemp9963;
nctempchar1* nctemp9960= nctemp9962;
int nctemp9964=CodeEs(nctemp9958,nctemp9960);
struct tree* nctemp9966= p;
nctempchar1* nctemp9968= cond;
int nctemp9971=CodeEs(nctemp9966,nctemp9968);
struct tree* nctemp9973= p;
struct nctempchar1 *nctemp9977;
static struct nctempchar1 nctemp9978 = {{ 4}, (char*)";\n\0"};
nctemp9977=&nctemp9978;
nctempchar1* nctemp9975= nctemp9977;
int nctemp9979=CodeEs(nctemp9973,nctemp9975);
struct tree* nctemp9981= p;
struct nctempchar1 *nctemp9985;
static struct nctempchar1 nctemp9986 = {{ 7}, (char*)"while(\0"};
nctemp9985=&nctemp9986;
nctempchar1* nctemp9983= nctemp9985;
int nctemp9987=CodeEs(nctemp9981,nctemp9983);
struct tree* nctemp9989= p;
nctempchar1* nctemp9991= tmp;
int nctemp9994=CodeEs(nctemp9989,nctemp9991);
struct tree* nctemp9996= p;
struct nctempchar1 *nctemp10000;
static struct nctempchar1 nctemp10001 = {{ 4}, (char*)")\n\0"};
nctemp10000=&nctemp10001;
nctempchar1* nctemp9998= nctemp10000;
int nctemp10002=CodeEs(nctemp9996,nctemp9998);
struct tree* nctemp10004= p;
struct nctempchar1 *nctemp10008;
static struct nctempchar1 nctemp10009 = {{ 2}, (char*)"{\0"};
nctemp10008=&nctemp10009;
nctempchar1* nctemp10006= nctemp10008;
int nctemp10010=CodeEs(nctemp10004,nctemp10006);
struct tree* nctemp10015= p;
struct tree* nctemp10017=PtreeMvsister(nctemp10015);
p =nctemp10017;
struct tree* nctemp10019= p;
int nctemp10021=CodeStmnt(nctemp10019);
struct tree* nctemp10027= sp;
nctempchar1* nctemp10029=CodeExpr(nctemp10027);
cond2=nctemp10029;
struct tree* nctemp10031= p;
nctempchar1* nctemp10033= tmp;
int nctemp10036=CodeEs(nctemp10031,nctemp10033);
struct tree* nctemp10038= p;
struct nctempchar1 *nctemp10042;
static struct nctempchar1 nctemp10043 = {{ 2}, (char*)"=\0"};
nctemp10042=&nctemp10043;
nctempchar1* nctemp10040= nctemp10042;
int nctemp10044=CodeEs(nctemp10038,nctemp10040);
struct tree* nctemp10046= p;
nctempchar1* nctemp10048= cond2;
int nctemp10051=CodeEs(nctemp10046,nctemp10048);
struct tree* nctemp10053= p;
struct nctempchar1 *nctemp10057;
static struct nctempchar1 nctemp10058 = {{ 2}, (char*)";\0"};
nctemp10057=&nctemp10058;
nctempchar1* nctemp10055= nctemp10057;
int nctemp10059=CodeEs(nctemp10053,nctemp10055);
struct tree* nctemp10061= p;
struct nctempchar1 *nctemp10065;
static struct nctempchar1 nctemp10066 = {{ 2}, (char*)"}\0"};
nctemp10065=&nctemp10066;
nctempchar1* nctemp10063= nctemp10065;
int nctemp10067=CodeEs(nctemp10061,nctemp10063);
return 1;
}
int CodeForstmnt (struct tree* p)
{
struct tree* sp;
struct tree* np;
nctempchar1 *cond;
nctempchar1 *tmp;
struct tree* nctemp10073= p;
struct tree* nctemp10075=PtreeMvchild(nctemp10073);
p =nctemp10075;
struct tree* nctemp10077= p;
nctempchar1* nctemp10079=CodeExpr(nctemp10077);
struct tree* nctemp10084= p;
struct tree* nctemp10086=PtreeMvsister(nctemp10084);
p =nctemp10086;
np =p;
struct tree* nctemp10096= p;
nctempchar1* nctemp10098=CodeExpr(nctemp10096);
cond=nctemp10098;
struct tree* nctemp10100= p;
struct nctempchar1 *nctemp10104;
static struct nctempchar1 nctemp10105 = {{ 7}, (char*)"while(\0"};
nctemp10104=&nctemp10105;
nctempchar1* nctemp10102= nctemp10104;
int nctemp10106=CodeEs(nctemp10100,nctemp10102);
struct tree* nctemp10108= p;
nctempchar1* nctemp10110= cond;
int nctemp10113=CodeEs(nctemp10108,nctemp10110);
struct tree* nctemp10115= p;
struct nctempchar1 *nctemp10119;
static struct nctempchar1 nctemp10120 = {{ 5}, (char*)"){\n\0"};
nctemp10119=&nctemp10120;
nctempchar1* nctemp10117= nctemp10119;
int nctemp10121=CodeEs(nctemp10115,nctemp10117);
struct tree* nctemp10126= p;
struct tree* nctemp10128=PtreeMvsister(nctemp10126);
p =nctemp10128;
sp =p;
struct tree* nctemp10137= p;
struct tree* nctemp10139=PtreeMvsister(nctemp10137);
p =nctemp10139;
struct tree* nctemp10141= p;
int nctemp10143=CodeStmnt(nctemp10141);
struct tree* nctemp10145= sp;
nctempchar1* nctemp10147=CodeExpr(nctemp10145);
struct tree* nctemp10153= np;
nctempchar1* nctemp10155=CodeExpr(nctemp10153);
tmp=nctemp10155;
struct tree* nctemp10157= p;
nctempchar1* nctemp10159= cond;
int nctemp10162=CodeEs(nctemp10157,nctemp10159);
struct tree* nctemp10164= p;
struct nctempchar1 *nctemp10168;
static struct nctempchar1 nctemp10169 = {{ 2}, (char*)"=\0"};
nctemp10168=&nctemp10169;
nctempchar1* nctemp10166= nctemp10168;
int nctemp10170=CodeEs(nctemp10164,nctemp10166);
struct tree* nctemp10172= p;
nctempchar1* nctemp10174= tmp;
int nctemp10177=CodeEs(nctemp10172,nctemp10174);
struct tree* nctemp10179= p;
struct nctempchar1 *nctemp10183;
static struct nctempchar1 nctemp10184 = {{ 4}, (char*)";\n\0"};
nctemp10183=&nctemp10184;
nctempchar1* nctemp10181= nctemp10183;
int nctemp10185=CodeEs(nctemp10179,nctemp10181);
struct tree* nctemp10187= p;
struct nctempchar1 *nctemp10191;
static struct nctempchar1 nctemp10192 = {{ 4}, (char*)"}\n\0"};
nctemp10191=&nctemp10192;
nctempchar1* nctemp10189= nctemp10191;
int nctemp10193=CodeEs(nctemp10187,nctemp10189);
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
int nctemp10207 = level + 1;
level =nctemp10207;
int nctemp10208 = (p ==0);
if(nctemp10208)
{
return 1;
}
struct tree* nctemp10217= p;
struct tree* nctemp10219=PtreeMvsister(nctemp10217);
p =nctemp10219;
struct tree* nctemp10221= p;
int nctemp10223= level;
int nctemp10225= rank;
int nctemp10227=CodeParallelfor(nctemp10221,nctemp10223,nctemp10225);
struct tree* nctemp10232= sp;
struct tree* nctemp10234=PtreeMvchild(nctemp10232);
rp =nctemp10234;
struct tree* nctemp10239= rp;
struct tree* nctemp10241=PtreeMvchild(nctemp10239);
qp =nctemp10241;
struct tree* nctemp10246= qp;
struct tree* nctemp10248=PtreeMvchild(nctemp10246);
qp =nctemp10248;
struct tree* nctemp10254= qp;
nctempchar1* nctemp10256=PtreeGetdef(nctemp10254);
index=nctemp10256;
struct tree* nctemp10264= qp;
struct tree* nctemp10266=PtreeMvsister(nctemp10264);
struct tree* nctemp10262= nctemp10266;
nctempchar1* nctemp10267=CodeBinexpr(nctemp10262);
init=nctemp10267;
struct tree* nctemp10272= rp;
struct tree* nctemp10274=PtreeMvsister(nctemp10272);
rrp =nctemp10274;
struct tree* nctemp10280= rrp;
nctempchar1* nctemp10282=CodeExpr(nctemp10280);
cond=nctemp10282;
int nctemp10283 = (level ==rank);
if(nctemp10283)
{
struct tree* nctemp10288= p;
struct nctempchar1 *nctemp10292;
static struct nctempchar1 nctemp10293 = {{ 30}, (char*)"\n #pragma omp parallel for\n\0"};
nctemp10292=&nctemp10293;
nctempchar1* nctemp10290= nctemp10292;
int nctemp10294=CodeEs(nctemp10288,nctemp10290);
}
struct tree* nctemp10296= rp;
struct nctempchar1 *nctemp10300;
static struct nctempchar1 nctemp10301 = {{ 5}, (char*)"for(\0"};
nctemp10300=&nctemp10301;
nctempchar1* nctemp10298= nctemp10300;
int nctemp10302=CodeEs(nctemp10296,nctemp10298);
struct tree* nctemp10304= rp;
nctempchar1* nctemp10306= index;
int nctemp10309=CodeEs(nctemp10304,nctemp10306);
struct tree* nctemp10311= rp;
struct nctempchar1 *nctemp10315;
static struct nctempchar1 nctemp10316 = {{ 2}, (char*)"=\0"};
nctemp10315=&nctemp10316;
nctempchar1* nctemp10313= nctemp10315;
int nctemp10317=CodeEs(nctemp10311,nctemp10313);
struct tree* nctemp10319= rp;
nctempchar1* nctemp10321= init;
int nctemp10324=CodeEs(nctemp10319,nctemp10321);
struct tree* nctemp10326= rp;
struct nctempchar1 *nctemp10330;
static struct nctempchar1 nctemp10331 = {{ 2}, (char*)";\0"};
nctemp10330=&nctemp10331;
nctempchar1* nctemp10328= nctemp10330;
int nctemp10332=CodeEs(nctemp10326,nctemp10328);
struct tree* nctemp10337= rp;
struct tree* nctemp10339=PtreeMvsister(nctemp10337);
rp =nctemp10339;
struct tree* nctemp10341= rp;
nctempchar1* nctemp10343= index;
int nctemp10346=CodeEs(nctemp10341,nctemp10343);
struct tree* nctemp10348= rp;
struct nctempchar1 *nctemp10352;
static struct nctempchar1 nctemp10353 = {{ 2}, (char*)"<\0"};
nctemp10352=&nctemp10353;
nctempchar1* nctemp10350= nctemp10352;
int nctemp10354=CodeEs(nctemp10348,nctemp10350);
struct tree* nctemp10356= p;
nctempchar1* nctemp10358= cond;
int nctemp10361=CodeEs(nctemp10356,nctemp10358);
struct tree* nctemp10363= rp;
struct nctempchar1 *nctemp10367;
static struct nctempchar1 nctemp10368 = {{ 2}, (char*)";\0"};
nctemp10367=&nctemp10368;
nctempchar1* nctemp10365= nctemp10367;
int nctemp10369=CodeEs(nctemp10363,nctemp10365);
struct tree* nctemp10377= rp;
struct tree* nctemp10379=PtreeMvsister(nctemp10377);
rp =nctemp10379;
int nctemp10370 = (rp !=0);
if(nctemp10370)
{
struct tree* nctemp10382= rp;
nctempchar1* nctemp10384= index;
int nctemp10387=CodeEs(nctemp10382,nctemp10384);
struct tree* nctemp10389= rp;
struct nctempchar1 *nctemp10393;
static struct nctempchar1 nctemp10394 = {{ 2}, (char*)"=\0"};
nctemp10393=&nctemp10394;
nctempchar1* nctemp10391= nctemp10393;
int nctemp10395=CodeEs(nctemp10389,nctemp10391);
struct tree* nctemp10397= rp;
nctempchar1* nctemp10399= index;
int nctemp10402=CodeEs(nctemp10397,nctemp10399);
struct tree* nctemp10404= rp;
struct nctempchar1 *nctemp10408;
static struct nctempchar1 nctemp10409 = {{ 2}, (char*)"+\0"};
nctemp10408=&nctemp10409;
nctempchar1* nctemp10406= nctemp10408;
int nctemp10410=CodeEs(nctemp10404,nctemp10406);
struct tree* nctemp10412= rp;
nctempchar1* nctemp10414=CodeExpr(nctemp10412);
}
else{
struct tree* nctemp10416= rp;
nctempchar1* nctemp10418= index;
int nctemp10421=CodeEs(nctemp10416,nctemp10418);
struct tree* nctemp10423= rp;
struct nctempchar1 *nctemp10427;
static struct nctempchar1 nctemp10428 = {{ 2}, (char*)"=\0"};
nctemp10427=&nctemp10428;
nctempchar1* nctemp10425= nctemp10427;
int nctemp10429=CodeEs(nctemp10423,nctemp10425);
struct tree* nctemp10431= rp;
nctempchar1* nctemp10433= index;
int nctemp10436=CodeEs(nctemp10431,nctemp10433);
struct tree* nctemp10438= rp;
struct nctempchar1 *nctemp10442;
static struct nctempchar1 nctemp10443 = {{ 2}, (char*)"+\0"};
nctemp10442=&nctemp10443;
nctempchar1* nctemp10440= nctemp10442;
int nctemp10444=CodeEs(nctemp10438,nctemp10440);
struct tree* nctemp10446= rp;
struct nctempchar1 *nctemp10450;
static struct nctempchar1 nctemp10451 = {{ 2}, (char*)"1\0"};
nctemp10450=&nctemp10451;
nctempchar1* nctemp10448= nctemp10450;
int nctemp10452=CodeEs(nctemp10446,nctemp10448);
}
struct tree* nctemp10454= rp;
struct nctempchar1 *nctemp10458;
static struct nctempchar1 nctemp10459 = {{ 3}, (char*)"){\0"};
nctemp10458=&nctemp10459;
nctempchar1* nctemp10456= nctemp10458;
int nctemp10460=CodeEs(nctemp10454,nctemp10456);
return 1;
}
int CodeParallelstmntgpu (struct tree* p)
{
nctempchar1 *pno;
nctempchar1 *n1;
nctempchar1 *n2;
nctempchar1 *n3;
nctempchar1 *nmax;
nctempchar1 *m1;
nctempchar1 *m2;
nctempchar1 *m3;
nctempchar1 *indx1;
nctempchar1 *indx2;
struct tree* ix;
struct tree* sp;
struct tree* q;
struct tree* ps;
struct tree* psliceseq;
int rank;
nctempchar1 *tmp;
int nctemp10463= 1;
int nctemp10465=CodeSetparallel(nctemp10463);
sp =p;
struct nctempchar1 *nctemp10475;
static struct nctempchar1 nctemp10476 = {{ 9}, (char*)"nctempno\0"};
nctemp10475=&nctemp10476;
pno=nctemp10475;
struct tree* nctemp10481= p;
int nctemp10483=PtreeGetrank(nctemp10481);
rank =nctemp10483;
struct tree* nctemp10488= p;
struct tree* nctemp10490=PtreeMvchild(nctemp10488);
p =nctemp10490;
psliceseq =p;
nctempchar1* nctemp10500=CodeMktemp();
nmax=nctemp10500;
struct tree* nctemp10505= psliceseq;
struct tree* nctemp10507=PtreeMvchild(nctemp10505);
p =nctemp10507;
ps =p;
struct nctempchar1 *nctemp10519;
static struct nctempchar1 nctemp10520 = {{ 4}, (char*)"int\0"};
nctemp10519=&nctemp10520;
nctempchar1* nctemp10517= nctemp10519;
nctempchar1* nctemp10521=CodeNewtemp(nctemp10517);
n1=nctemp10521;
struct nctempchar1 *nctemp10529;
static struct nctempchar1 nctemp10530 = {{ 4}, (char*)"int\0"};
nctemp10529=&nctemp10530;
nctempchar1* nctemp10527= nctemp10529;
nctempchar1* nctemp10531=CodeNewtemp(nctemp10527);
m1=nctemp10531;
struct tree* nctemp10536= p;
struct tree* nctemp10538=PtreeMvchild(nctemp10536);
q =nctemp10538;
struct tree* nctemp10543= q;
struct tree* nctemp10545=PtreeMvchild(nctemp10543);
q =nctemp10545;
struct tree* nctemp10550= q;
struct tree* nctemp10552=PtreeMvchild(nctemp10550);
q =nctemp10552;
ix =q;
struct tree* nctemp10561= q;
struct tree* nctemp10563=PtreeMvsister(nctemp10561);
q =nctemp10563;
struct tree* nctemp10569= q;
nctempchar1* nctemp10571=CodeUnexpr(nctemp10569);
tmp=nctemp10571;
struct tree* nctemp10573= p;
struct nctempchar1 *nctemp10577;
static struct nctempchar1 nctemp10578 = {{ 5}, (char*)"int \0"};
nctemp10577=&nctemp10578;
nctempchar1* nctemp10575= nctemp10577;
int nctemp10579=CodeEs(nctemp10573,nctemp10575);
struct tree* nctemp10581= p;
nctempchar1* nctemp10583= m1;
int nctemp10586=CodeEs(nctemp10581,nctemp10583);
struct tree* nctemp10588= p;
struct nctempchar1 *nctemp10592;
static struct nctempchar1 nctemp10593 = {{ 2}, (char*)"=\0"};
nctemp10592=&nctemp10593;
nctempchar1* nctemp10590= nctemp10592;
int nctemp10594=CodeEs(nctemp10588,nctemp10590);
struct tree* nctemp10596= p;
nctempchar1* nctemp10598= tmp;
int nctemp10601=CodeEs(nctemp10596,nctemp10598);
struct tree* nctemp10603= p;
struct nctempchar1 *nctemp10607;
static struct nctempchar1 nctemp10608 = {{ 4}, (char*)";\n\0"};
nctemp10607=&nctemp10608;
nctempchar1* nctemp10605= nctemp10607;
int nctemp10609=CodeEs(nctemp10603,nctemp10605);
struct tree* nctemp10615= ix;
nctempchar1* nctemp10617=PtreeGetdef(nctemp10615);
indx1=nctemp10617;
struct tree* nctemp10622= ps;
struct tree* nctemp10624=PtreeMvchild(nctemp10622);
q =nctemp10624;
struct tree* nctemp10629= q;
struct tree* nctemp10631=PtreeMvsister(nctemp10629);
q =nctemp10631;
struct tree* nctemp10639= ps;
nctempchar1* nctemp10641=PtreeGetype(nctemp10639);
nctempchar1* nctemp10637= nctemp10641;
nctempchar1* nctemp10642=CodeNewtemp(nctemp10637);
n1=nctemp10642;
struct tree* nctemp10648= q;
nctempchar1* nctemp10650=CodeExpr(nctemp10648);
tmp=nctemp10650;
struct tree* nctemp10652= q;
struct nctempchar1 *nctemp10656;
static struct nctempchar1 nctemp10657 = {{ 5}, (char*)"int \0"};
nctemp10656=&nctemp10657;
nctempchar1* nctemp10654= nctemp10656;
int nctemp10658=CodeEs(nctemp10652,nctemp10654);
struct tree* nctemp10660= q;
nctempchar1* nctemp10662= n1;
int nctemp10665=CodeEs(nctemp10660,nctemp10662);
struct tree* nctemp10667= q;
struct nctempchar1 *nctemp10671;
static struct nctempchar1 nctemp10672 = {{ 2}, (char*)"=\0"};
nctemp10671=&nctemp10672;
nctempchar1* nctemp10669= nctemp10671;
int nctemp10673=CodeEs(nctemp10667,nctemp10669);
struct tree* nctemp10675= q;
nctempchar1* nctemp10677= tmp;
int nctemp10680=CodeEs(nctemp10675,nctemp10677);
struct tree* nctemp10682= q;
struct nctempchar1 *nctemp10686;
static struct nctempchar1 nctemp10687 = {{ 4}, (char*)";\n\0"};
nctemp10686=&nctemp10687;
nctempchar1* nctemp10684= nctemp10686;
int nctemp10688=CodeEs(nctemp10682,nctemp10684);
int nctemp10689 = (rank > 1);
if(nctemp10689)
{
struct tree* nctemp10697= psliceseq;
struct tree* nctemp10699=PtreeMvchild(nctemp10697);
p =nctemp10699;
struct tree* nctemp10704= p;
struct tree* nctemp10706=PtreeMvsister(nctemp10704);
p =nctemp10706;
ps =p;
struct nctempchar1 *nctemp10718;
static struct nctempchar1 nctemp10719 = {{ 4}, (char*)"int\0"};
nctemp10718=&nctemp10719;
nctempchar1* nctemp10716= nctemp10718;
nctempchar1* nctemp10720=CodeNewtemp(nctemp10716);
n2=nctemp10720;
struct nctempchar1 *nctemp10728;
static struct nctempchar1 nctemp10729 = {{ 4}, (char*)"int\0"};
nctemp10728=&nctemp10729;
nctempchar1* nctemp10726= nctemp10728;
nctempchar1* nctemp10730=CodeNewtemp(nctemp10726);
m2=nctemp10730;
struct tree* nctemp10735= p;
struct tree* nctemp10737=PtreeMvchild(nctemp10735);
q =nctemp10737;
struct tree* nctemp10742= q;
struct tree* nctemp10744=PtreeMvchild(nctemp10742);
q =nctemp10744;
struct tree* nctemp10749= q;
struct tree* nctemp10751=PtreeMvchild(nctemp10749);
q =nctemp10751;
ix =q;
struct tree* nctemp10760= q;
struct tree* nctemp10762=PtreeMvsister(nctemp10760);
q =nctemp10762;
struct tree* nctemp10768= q;
nctempchar1* nctemp10770=CodeUnexpr(nctemp10768);
tmp=nctemp10770;
struct tree* nctemp10772= p;
struct nctempchar1 *nctemp10776;
static struct nctempchar1 nctemp10777 = {{ 5}, (char*)"int \0"};
nctemp10776=&nctemp10777;
nctempchar1* nctemp10774= nctemp10776;
int nctemp10778=CodeEs(nctemp10772,nctemp10774);
struct tree* nctemp10780= p;
nctempchar1* nctemp10782= m2;
int nctemp10785=CodeEs(nctemp10780,nctemp10782);
struct tree* nctemp10787= p;
struct nctempchar1 *nctemp10791;
static struct nctempchar1 nctemp10792 = {{ 2}, (char*)"=\0"};
nctemp10791=&nctemp10792;
nctempchar1* nctemp10789= nctemp10791;
int nctemp10793=CodeEs(nctemp10787,nctemp10789);
struct tree* nctemp10795= p;
nctempchar1* nctemp10797= tmp;
int nctemp10800=CodeEs(nctemp10795,nctemp10797);
struct tree* nctemp10802= p;
struct nctempchar1 *nctemp10806;
static struct nctempchar1 nctemp10807 = {{ 4}, (char*)";\n\0"};
nctemp10806=&nctemp10807;
nctempchar1* nctemp10804= nctemp10806;
int nctemp10808=CodeEs(nctemp10802,nctemp10804);
struct tree* nctemp10814= ix;
nctempchar1* nctemp10816=PtreeGetdef(nctemp10814);
indx2=nctemp10816;
struct tree* nctemp10821= ps;
struct tree* nctemp10823=PtreeMvchild(nctemp10821);
q =nctemp10823;
struct tree* nctemp10828= q;
struct tree* nctemp10830=PtreeMvsister(nctemp10828);
q =nctemp10830;
struct tree* nctemp10838= ps;
nctempchar1* nctemp10840=PtreeGetype(nctemp10838);
nctempchar1* nctemp10836= nctemp10840;
nctempchar1* nctemp10841=CodeNewtemp(nctemp10836);
n2=nctemp10841;
struct tree* nctemp10847= q;
nctempchar1* nctemp10849=CodeExpr(nctemp10847);
tmp=nctemp10849;
struct tree* nctemp10851= q;
struct nctempchar1 *nctemp10855;
static struct nctempchar1 nctemp10856 = {{ 5}, (char*)"int \0"};
nctemp10855=&nctemp10856;
nctempchar1* nctemp10853= nctemp10855;
int nctemp10857=CodeEs(nctemp10851,nctemp10853);
struct tree* nctemp10859= q;
nctempchar1* nctemp10861= n2;
int nctemp10864=CodeEs(nctemp10859,nctemp10861);
struct tree* nctemp10866= q;
struct nctempchar1 *nctemp10870;
static struct nctempchar1 nctemp10871 = {{ 2}, (char*)"=\0"};
nctemp10870=&nctemp10871;
nctempchar1* nctemp10868= nctemp10870;
int nctemp10872=CodeEs(nctemp10866,nctemp10868);
struct tree* nctemp10874= q;
nctempchar1* nctemp10876= tmp;
int nctemp10879=CodeEs(nctemp10874,nctemp10876);
struct tree* nctemp10881= q;
struct nctempchar1 *nctemp10885;
static struct nctempchar1 nctemp10886 = {{ 4}, (char*)";\n\0"};
nctemp10885=&nctemp10886;
nctempchar1* nctemp10883= nctemp10885;
int nctemp10887=CodeEs(nctemp10881,nctemp10883);
}
int nctemp10888 = (rank > 2);
if(nctemp10888)
{
struct tree* nctemp10896= psliceseq;
struct tree* nctemp10898=PtreeMvchild(nctemp10896);
p =nctemp10898;
struct tree* nctemp10903= p;
struct tree* nctemp10905=PtreeMvsister(nctemp10903);
p =nctemp10905;
struct tree* nctemp10910= p;
struct tree* nctemp10912=PtreeMvsister(nctemp10910);
p =nctemp10912;
ps =p;
struct nctempchar1 *nctemp10924;
static struct nctempchar1 nctemp10925 = {{ 4}, (char*)"int\0"};
nctemp10924=&nctemp10925;
nctempchar1* nctemp10922= nctemp10924;
nctempchar1* nctemp10926=CodeNewtemp(nctemp10922);
n3=nctemp10926;
struct nctempchar1 *nctemp10934;
static struct nctempchar1 nctemp10935 = {{ 4}, (char*)"int\0"};
nctemp10934=&nctemp10935;
nctempchar1* nctemp10932= nctemp10934;
nctempchar1* nctemp10936=CodeNewtemp(nctemp10932);
m3=nctemp10936;
struct tree* nctemp10941= p;
struct tree* nctemp10943=PtreeMvchild(nctemp10941);
q =nctemp10943;
struct tree* nctemp10948= q;
struct tree* nctemp10950=PtreeMvchild(nctemp10948);
q =nctemp10950;
struct tree* nctemp10955= q;
struct tree* nctemp10957=PtreeMvchild(nctemp10955);
q =nctemp10957;
ix =q;
struct tree* nctemp10966= q;
struct tree* nctemp10968=PtreeMvsister(nctemp10966);
q =nctemp10968;
struct tree* nctemp10974= q;
nctempchar1* nctemp10976=CodeUnexpr(nctemp10974);
tmp=nctemp10976;
struct tree* nctemp10978= p;
struct nctempchar1 *nctemp10982;
static struct nctempchar1 nctemp10983 = {{ 5}, (char*)"int \0"};
nctemp10982=&nctemp10983;
nctempchar1* nctemp10980= nctemp10982;
int nctemp10984=CodeEs(nctemp10978,nctemp10980);
struct tree* nctemp10986= p;
nctempchar1* nctemp10988= m3;
int nctemp10991=CodeEs(nctemp10986,nctemp10988);
struct tree* nctemp10993= p;
struct nctempchar1 *nctemp10997;
static struct nctempchar1 nctemp10998 = {{ 2}, (char*)"=\0"};
nctemp10997=&nctemp10998;
nctempchar1* nctemp10995= nctemp10997;
int nctemp10999=CodeEs(nctemp10993,nctemp10995);
struct tree* nctemp11001= p;
nctempchar1* nctemp11003= tmp;
int nctemp11006=CodeEs(nctemp11001,nctemp11003);
struct tree* nctemp11008= p;
struct nctempchar1 *nctemp11012;
static struct nctempchar1 nctemp11013 = {{ 4}, (char*)";\n\0"};
nctemp11012=&nctemp11013;
nctempchar1* nctemp11010= nctemp11012;
int nctemp11014=CodeEs(nctemp11008,nctemp11010);
struct tree* nctemp11020= ix;
nctempchar1* nctemp11022=PtreeGetdef(nctemp11020);
indx2=nctemp11022;
struct tree* nctemp11027= ps;
struct tree* nctemp11029=PtreeMvchild(nctemp11027);
q =nctemp11029;
struct tree* nctemp11034= q;
struct tree* nctemp11036=PtreeMvsister(nctemp11034);
q =nctemp11036;
struct tree* nctemp11044= ps;
nctempchar1* nctemp11046=PtreeGetype(nctemp11044);
nctempchar1* nctemp11042= nctemp11046;
nctempchar1* nctemp11047=CodeNewtemp(nctemp11042);
n3=nctemp11047;
struct tree* nctemp11053= q;
nctempchar1* nctemp11055=CodeExpr(nctemp11053);
tmp=nctemp11055;
struct tree* nctemp11057= q;
struct nctempchar1 *nctemp11061;
static struct nctempchar1 nctemp11062 = {{ 5}, (char*)"int \0"};
nctemp11061=&nctemp11062;
nctempchar1* nctemp11059= nctemp11061;
int nctemp11063=CodeEs(nctemp11057,nctemp11059);
struct tree* nctemp11065= q;
nctempchar1* nctemp11067= n3;
int nctemp11070=CodeEs(nctemp11065,nctemp11067);
struct tree* nctemp11072= q;
struct nctempchar1 *nctemp11076;
static struct nctempchar1 nctemp11077 = {{ 2}, (char*)"=\0"};
nctemp11076=&nctemp11077;
nctempchar1* nctemp11074= nctemp11076;
int nctemp11078=CodeEs(nctemp11072,nctemp11074);
struct tree* nctemp11080= q;
nctempchar1* nctemp11082= tmp;
int nctemp11085=CodeEs(nctemp11080,nctemp11082);
struct tree* nctemp11087= q;
struct nctempchar1 *nctemp11091;
static struct nctempchar1 nctemp11092 = {{ 4}, (char*)";\n\0"};
nctemp11091=&nctemp11092;
nctempchar1* nctemp11089= nctemp11091;
int nctemp11093=CodeEs(nctemp11087,nctemp11089);
}
p =sp;
int nctemp11098 = (rank ==1);
if(nctemp11098)
{
struct tree* nctemp11103= p;
struct nctempchar1 *nctemp11107;
static struct nctempchar1 nctemp11108 = {{ 5}, (char*)"int \0"};
nctemp11107=&nctemp11108;
nctempchar1* nctemp11105= nctemp11107;
int nctemp11109=CodeEs(nctemp11103,nctemp11105);
struct tree* nctemp11111= p;
nctempchar1* nctemp11113= nmax;
int nctemp11116=CodeEs(nctemp11111,nctemp11113);
struct tree* nctemp11118= p;
struct nctempchar1 *nctemp11122;
static struct nctempchar1 nctemp11123 = {{ 2}, (char*)"=\0"};
nctemp11122=&nctemp11123;
nctempchar1* nctemp11120= nctemp11122;
int nctemp11124=CodeEs(nctemp11118,nctemp11120);
struct tree* nctemp11126= p;
nctempchar1* nctemp11128= n1;
int nctemp11131=CodeEs(nctemp11126,nctemp11128);
struct tree* nctemp11133= p;
struct nctempchar1 *nctemp11137;
static struct nctempchar1 nctemp11138 = {{ 2}, (char*)"-\0"};
nctemp11137=&nctemp11138;
nctempchar1* nctemp11135= nctemp11137;
int nctemp11139=CodeEs(nctemp11133,nctemp11135);
struct tree* nctemp11141= p;
nctempchar1* nctemp11143= m1;
int nctemp11146=CodeEs(nctemp11141,nctemp11143);
struct tree* nctemp11148= p;
struct nctempchar1 *nctemp11152;
static struct nctempchar1 nctemp11153 = {{ 4}, (char*)";\n\0"};
nctemp11152=&nctemp11153;
nctempchar1* nctemp11150= nctemp11152;
int nctemp11154=CodeEs(nctemp11148,nctemp11150);
}
int nctemp11155 = (rank ==2);
if(nctemp11155)
{
struct tree* nctemp11160= p;
struct nctempchar1 *nctemp11164;
static struct nctempchar1 nctemp11165 = {{ 5}, (char*)"int \0"};
nctemp11164=&nctemp11165;
nctempchar1* nctemp11162= nctemp11164;
int nctemp11166=CodeEs(nctemp11160,nctemp11162);
struct tree* nctemp11168= p;
nctempchar1* nctemp11170= nmax;
int nctemp11173=CodeEs(nctemp11168,nctemp11170);
struct tree* nctemp11175= p;
struct nctempchar1 *nctemp11179;
static struct nctempchar1 nctemp11180 = {{ 2}, (char*)"=\0"};
nctemp11179=&nctemp11180;
nctempchar1* nctemp11177= nctemp11179;
int nctemp11181=CodeEs(nctemp11175,nctemp11177);
struct tree* nctemp11183= p;
struct nctempchar1 *nctemp11187;
static struct nctempchar1 nctemp11188 = {{ 2}, (char*)"(\0"};
nctemp11187=&nctemp11188;
nctempchar1* nctemp11185= nctemp11187;
int nctemp11189=CodeEs(nctemp11183,nctemp11185);
struct tree* nctemp11191= p;
nctempchar1* nctemp11193= n1;
int nctemp11196=CodeEs(nctemp11191,nctemp11193);
struct tree* nctemp11198= p;
struct nctempchar1 *nctemp11202;
static struct nctempchar1 nctemp11203 = {{ 2}, (char*)"-\0"};
nctemp11202=&nctemp11203;
nctempchar1* nctemp11200= nctemp11202;
int nctemp11204=CodeEs(nctemp11198,nctemp11200);
struct tree* nctemp11206= p;
nctempchar1* nctemp11208= m1;
int nctemp11211=CodeEs(nctemp11206,nctemp11208);
struct tree* nctemp11213= p;
struct nctempchar1 *nctemp11217;
static struct nctempchar1 nctemp11218 = {{ 2}, (char*)")\0"};
nctemp11217=&nctemp11218;
nctempchar1* nctemp11215= nctemp11217;
int nctemp11219=CodeEs(nctemp11213,nctemp11215);
struct tree* nctemp11221= p;
struct nctempchar1 *nctemp11225;
static struct nctempchar1 nctemp11226 = {{ 2}, (char*)"*\0"};
nctemp11225=&nctemp11226;
nctempchar1* nctemp11223= nctemp11225;
int nctemp11227=CodeEs(nctemp11221,nctemp11223);
struct tree* nctemp11229= p;
struct nctempchar1 *nctemp11233;
static struct nctempchar1 nctemp11234 = {{ 2}, (char*)"(\0"};
nctemp11233=&nctemp11234;
nctempchar1* nctemp11231= nctemp11233;
int nctemp11235=CodeEs(nctemp11229,nctemp11231);
struct tree* nctemp11237= p;
nctempchar1* nctemp11239= n2;
int nctemp11242=CodeEs(nctemp11237,nctemp11239);
struct tree* nctemp11244= p;
struct nctempchar1 *nctemp11248;
static struct nctempchar1 nctemp11249 = {{ 2}, (char*)"-\0"};
nctemp11248=&nctemp11249;
nctempchar1* nctemp11246= nctemp11248;
int nctemp11250=CodeEs(nctemp11244,nctemp11246);
struct tree* nctemp11252= p;
nctempchar1* nctemp11254= m2;
int nctemp11257=CodeEs(nctemp11252,nctemp11254);
struct tree* nctemp11259= p;
struct nctempchar1 *nctemp11263;
static struct nctempchar1 nctemp11264 = {{ 5}, (char*)");\n\0"};
nctemp11263=&nctemp11264;
nctempchar1* nctemp11261= nctemp11263;
int nctemp11265=CodeEs(nctemp11259,nctemp11261);
}
else{
int nctemp11266 = (rank ==3);
if(nctemp11266)
{
p =sp;
struct tree* nctemp11275= p;
nctempchar1* nctemp11277= nmax;
int nctemp11280=CodeEs(nctemp11275,nctemp11277);
struct tree* nctemp11282= p;
struct nctempchar1 *nctemp11286;
static struct nctempchar1 nctemp11287 = {{ 2}, (char*)"=\0"};
nctemp11286=&nctemp11287;
nctempchar1* nctemp11284= nctemp11286;
int nctemp11288=CodeEs(nctemp11282,nctemp11284);
struct tree* nctemp11290= p;
nctempchar1* nctemp11292= n1;
int nctemp11295=CodeEs(nctemp11290,nctemp11292);
struct tree* nctemp11297= p;
struct nctempchar1 *nctemp11301;
static struct nctempchar1 nctemp11302 = {{ 2}, (char*)"*\0"};
nctemp11301=&nctemp11302;
nctempchar1* nctemp11299= nctemp11301;
int nctemp11303=CodeEs(nctemp11297,nctemp11299);
struct tree* nctemp11305= p;
nctempchar1* nctemp11307= n2;
int nctemp11310=CodeEs(nctemp11305,nctemp11307);
struct tree* nctemp11312= p;
struct nctempchar1 *nctemp11316;
static struct nctempchar1 nctemp11317 = {{ 2}, (char*)"*\0"};
nctemp11316=&nctemp11317;
nctempchar1* nctemp11314= nctemp11316;
int nctemp11318=CodeEs(nctemp11312,nctemp11314);
struct tree* nctemp11320= p;
nctempchar1* nctemp11322= n3;
int nctemp11325=CodeEs(nctemp11320,nctemp11322);
struct tree* nctemp11327= p;
struct nctempchar1 *nctemp11331;
static struct nctempchar1 nctemp11332 = {{ 4}, (char*)";\n\0"};
nctemp11331=&nctemp11332;
nctempchar1* nctemp11329= nctemp11331;
int nctemp11333=CodeEs(nctemp11327,nctemp11329);
}
}
struct tree* nctemp11335= p;
struct nctempchar1 *nctemp11339;
static struct nctempchar1 nctemp11340 = {{ 5}, (char*)"for(\0"};
nctemp11339=&nctemp11340;
nctempchar1* nctemp11337= nctemp11339;
int nctemp11341=CodeEs(nctemp11335,nctemp11337);
struct tree* nctemp11343= p;
struct nctempchar1 *nctemp11347;
static struct nctempchar1 nctemp11348 = {{ 5}, (char*)"int \0"};
nctemp11347=&nctemp11348;
nctempchar1* nctemp11345= nctemp11347;
int nctemp11349=CodeEs(nctemp11343,nctemp11345);
struct tree* nctemp11351= p;
nctempchar1* nctemp11353= pno;
int nctemp11356=CodeEs(nctemp11351,nctemp11353);
struct tree* nctemp11358= p;
struct nctempchar1 *nctemp11362;
static struct nctempchar1 nctemp11363 = {{ 39}, (char*)"=blockIdx.x*blockDim.x + threadIdx.x; \0"};
nctemp11362=&nctemp11363;
nctempchar1* nctemp11360= nctemp11362;
int nctemp11364=CodeEs(nctemp11358,nctemp11360);
struct tree* nctemp11366= p;
nctempchar1* nctemp11368= pno;
int nctemp11371=CodeEs(nctemp11366,nctemp11368);
struct tree* nctemp11373= p;
struct nctempchar1 *nctemp11377;
static struct nctempchar1 nctemp11378 = {{ 2}, (char*)"<\0"};
nctemp11377=&nctemp11378;
nctempchar1* nctemp11375= nctemp11377;
int nctemp11379=CodeEs(nctemp11373,nctemp11375);
struct tree* nctemp11381= p;
nctempchar1* nctemp11383= nmax;
int nctemp11386=CodeEs(nctemp11381,nctemp11383);
struct tree* nctemp11388= p;
struct nctempchar1 *nctemp11392;
static struct nctempchar1 nctemp11393 = {{ 2}, (char*)";\0"};
nctemp11392=&nctemp11393;
nctempchar1* nctemp11390= nctemp11392;
int nctemp11394=CodeEs(nctemp11388,nctemp11390);
struct tree* nctemp11396= p;
nctempchar1* nctemp11398= pno;
int nctemp11401=CodeEs(nctemp11396,nctemp11398);
struct tree* nctemp11403= p;
struct nctempchar1 *nctemp11407;
static struct nctempchar1 nctemp11408 = {{ 23}, (char*)"+=blockDim.x*gridDim.x\0"};
nctemp11407=&nctemp11408;
nctempchar1* nctemp11405= nctemp11407;
int nctemp11409=CodeEs(nctemp11403,nctemp11405);
struct tree* nctemp11411= p;
struct nctempchar1 *nctemp11415;
static struct nctempchar1 nctemp11416 = {{ 5}, (char*)"){\n\0"};
nctemp11415=&nctemp11416;
nctempchar1* nctemp11413= nctemp11415;
int nctemp11417=CodeEs(nctemp11411,nctemp11413);
int nctemp11418 = (rank ==1);
if(nctemp11418)
{
struct tree* nctemp11423= p;
nctempchar1* nctemp11425= indx1;
int nctemp11428=CodeEs(nctemp11423,nctemp11425);
struct tree* nctemp11430= p;
struct nctempchar1 *nctemp11434;
static struct nctempchar1 nctemp11435 = {{ 2}, (char*)"=\0"};
nctemp11434=&nctemp11435;
nctempchar1* nctemp11432= nctemp11434;
int nctemp11436=CodeEs(nctemp11430,nctemp11432);
struct tree* nctemp11438= p;
nctempchar1* nctemp11440= m1;
int nctemp11443=CodeEs(nctemp11438,nctemp11440);
struct tree* nctemp11445= p;
struct nctempchar1 *nctemp11449;
static struct nctempchar1 nctemp11450 = {{ 2}, (char*)"+\0"};
nctemp11449=&nctemp11450;
nctempchar1* nctemp11447= nctemp11449;
int nctemp11451=CodeEs(nctemp11445,nctemp11447);
struct tree* nctemp11453= p;
struct nctempchar1 *nctemp11457;
static struct nctempchar1 nctemp11458 = {{ 12}, (char*)"nctempno;\n\0"};
nctemp11457=&nctemp11458;
nctempchar1* nctemp11455= nctemp11457;
int nctemp11459=CodeEs(nctemp11453,nctemp11455);
}
int nctemp11460 = (rank ==2);
if(nctemp11460)
{
struct tree* nctemp11465= p;
nctempchar1* nctemp11467= indx2;
int nctemp11470=CodeEs(nctemp11465,nctemp11467);
struct tree* nctemp11472= p;
struct nctempchar1 *nctemp11476;
static struct nctempchar1 nctemp11477 = {{ 2}, (char*)"=\0"};
nctemp11476=&nctemp11477;
nctempchar1* nctemp11474= nctemp11476;
int nctemp11478=CodeEs(nctemp11472,nctemp11474);
struct tree* nctemp11480= p;
nctempchar1* nctemp11482= m2;
int nctemp11485=CodeEs(nctemp11480,nctemp11482);
struct tree* nctemp11487= p;
struct nctempchar1 *nctemp11491;
static struct nctempchar1 nctemp11492 = {{ 2}, (char*)"+\0"};
nctemp11491=&nctemp11492;
nctempchar1* nctemp11489= nctemp11491;
int nctemp11493=CodeEs(nctemp11487,nctemp11489);
struct tree* nctemp11495= p;
struct nctempchar1 *nctemp11499;
static struct nctempchar1 nctemp11500 = {{ 9}, (char*)"nctempno\0"};
nctemp11499=&nctemp11500;
nctempchar1* nctemp11497= nctemp11499;
int nctemp11501=CodeEs(nctemp11495,nctemp11497);
struct tree* nctemp11503= p;
struct nctempchar1 *nctemp11507;
static struct nctempchar1 nctemp11508 = {{ 3}, (char*)"/(\0"};
nctemp11507=&nctemp11508;
nctempchar1* nctemp11505= nctemp11507;
int nctemp11509=CodeEs(nctemp11503,nctemp11505);
struct tree* nctemp11511= p;
nctempchar1* nctemp11513= n1;
int nctemp11516=CodeEs(nctemp11511,nctemp11513);
struct tree* nctemp11518= p;
struct nctempchar1 *nctemp11522;
static struct nctempchar1 nctemp11523 = {{ 2}, (char*)"-\0"};
nctemp11522=&nctemp11523;
nctempchar1* nctemp11520= nctemp11522;
int nctemp11524=CodeEs(nctemp11518,nctemp11520);
struct tree* nctemp11526= p;
nctempchar1* nctemp11528= m1;
int nctemp11531=CodeEs(nctemp11526,nctemp11528);
struct tree* nctemp11533= p;
struct nctempchar1 *nctemp11537;
static struct nctempchar1 nctemp11538 = {{ 2}, (char*)")\0"};
nctemp11537=&nctemp11538;
nctempchar1* nctemp11535= nctemp11537;
int nctemp11539=CodeEs(nctemp11533,nctemp11535);
struct tree* nctemp11541= p;
struct nctempchar1 *nctemp11545;
static struct nctempchar1 nctemp11546 = {{ 4}, (char*)";\n\0"};
nctemp11545=&nctemp11546;
nctempchar1* nctemp11543= nctemp11545;
int nctemp11547=CodeEs(nctemp11541,nctemp11543);
struct tree* nctemp11549= p;
nctempchar1* nctemp11551= indx1;
int nctemp11554=CodeEs(nctemp11549,nctemp11551);
struct tree* nctemp11556= p;
struct nctempchar1 *nctemp11560;
static struct nctempchar1 nctemp11561 = {{ 2}, (char*)"=\0"};
nctemp11560=&nctemp11561;
nctempchar1* nctemp11558= nctemp11560;
int nctemp11562=CodeEs(nctemp11556,nctemp11558);
struct tree* nctemp11564= p;
nctempchar1* nctemp11566= m1;
int nctemp11569=CodeEs(nctemp11564,nctemp11566);
struct tree* nctemp11571= p;
struct nctempchar1 *nctemp11575;
static struct nctempchar1 nctemp11576 = {{ 2}, (char*)"+\0"};
nctemp11575=&nctemp11576;
nctempchar1* nctemp11573= nctemp11575;
int nctemp11577=CodeEs(nctemp11571,nctemp11573);
struct tree* nctemp11579= p;
struct nctempchar1 *nctemp11583;
static struct nctempchar1 nctemp11584 = {{ 9}, (char*)"nctempno\0"};
nctemp11583=&nctemp11584;
nctempchar1* nctemp11581= nctemp11583;
int nctemp11585=CodeEs(nctemp11579,nctemp11581);
struct tree* nctemp11587= p;
struct nctempchar1 *nctemp11591;
static struct nctempchar1 nctemp11592 = {{ 3}, (char*)"%(\0"};
nctemp11591=&nctemp11592;
nctempchar1* nctemp11589= nctemp11591;
int nctemp11593=CodeEs(nctemp11587,nctemp11589);
struct tree* nctemp11595= p;
nctempchar1* nctemp11597= n1;
int nctemp11600=CodeEs(nctemp11595,nctemp11597);
struct tree* nctemp11602= p;
struct nctempchar1 *nctemp11606;
static struct nctempchar1 nctemp11607 = {{ 2}, (char*)"-\0"};
nctemp11606=&nctemp11607;
nctempchar1* nctemp11604= nctemp11606;
int nctemp11608=CodeEs(nctemp11602,nctemp11604);
struct tree* nctemp11610= p;
nctempchar1* nctemp11612= m1;
int nctemp11615=CodeEs(nctemp11610,nctemp11612);
struct tree* nctemp11617= p;
struct nctempchar1 *nctemp11621;
static struct nctempchar1 nctemp11622 = {{ 2}, (char*)")\0"};
nctemp11621=&nctemp11622;
nctempchar1* nctemp11619= nctemp11621;
int nctemp11623=CodeEs(nctemp11617,nctemp11619);
struct tree* nctemp11625= p;
struct nctempchar1 *nctemp11629;
static struct nctempchar1 nctemp11630 = {{ 4}, (char*)";\n\0"};
nctemp11629=&nctemp11630;
nctempchar1* nctemp11627= nctemp11629;
int nctemp11631=CodeEs(nctemp11625,nctemp11627);
}
int nctemp11632 = (rank ==3);
if(nctemp11632)
{
struct tree* nctemp11637= p;
nctempchar1* nctemp11639= indx2;
int nctemp11642=CodeEs(nctemp11637,nctemp11639);
struct tree* nctemp11644= p;
struct nctempchar1 *nctemp11648;
static struct nctempchar1 nctemp11649 = {{ 2}, (char*)"=\0"};
nctemp11648=&nctemp11649;
nctempchar1* nctemp11646= nctemp11648;
int nctemp11650=CodeEs(nctemp11644,nctemp11646);
struct tree* nctemp11652= p;
nctempchar1* nctemp11654= m2;
int nctemp11657=CodeEs(nctemp11652,nctemp11654);
struct tree* nctemp11659= p;
struct nctempchar1 *nctemp11663;
static struct nctempchar1 nctemp11664 = {{ 2}, (char*)"+\0"};
nctemp11663=&nctemp11664;
nctempchar1* nctemp11661= nctemp11663;
int nctemp11665=CodeEs(nctemp11659,nctemp11661);
struct tree* nctemp11667= p;
struct nctempchar1 *nctemp11671;
static struct nctempchar1 nctemp11672 = {{ 9}, (char*)"nctempno\0"};
nctemp11671=&nctemp11672;
nctempchar1* nctemp11669= nctemp11671;
int nctemp11673=CodeEs(nctemp11667,nctemp11669);
struct tree* nctemp11675= p;
struct nctempchar1 *nctemp11679;
static struct nctempchar1 nctemp11680 = {{ 3}, (char*)"/(\0"};
nctemp11679=&nctemp11680;
nctempchar1* nctemp11677= nctemp11679;
int nctemp11681=CodeEs(nctemp11675,nctemp11677);
struct tree* nctemp11683= p;
nctempchar1* nctemp11685= n1;
int nctemp11688=CodeEs(nctemp11683,nctemp11685);
struct tree* nctemp11690= p;
struct nctempchar1 *nctemp11694;
static struct nctempchar1 nctemp11695 = {{ 2}, (char*)"-\0"};
nctemp11694=&nctemp11695;
nctempchar1* nctemp11692= nctemp11694;
int nctemp11696=CodeEs(nctemp11690,nctemp11692);
struct tree* nctemp11698= p;
nctempchar1* nctemp11700= m1;
int nctemp11703=CodeEs(nctemp11698,nctemp11700);
struct tree* nctemp11705= p;
struct nctempchar1 *nctemp11709;
static struct nctempchar1 nctemp11710 = {{ 2}, (char*)")\0"};
nctemp11709=&nctemp11710;
nctempchar1* nctemp11707= nctemp11709;
int nctemp11711=CodeEs(nctemp11705,nctemp11707);
struct tree* nctemp11713= p;
struct nctempchar1 *nctemp11717;
static struct nctempchar1 nctemp11718 = {{ 4}, (char*)";\n\0"};
nctemp11717=&nctemp11718;
nctempchar1* nctemp11715= nctemp11717;
int nctemp11719=CodeEs(nctemp11713,nctemp11715);
struct tree* nctemp11721= p;
nctempchar1* nctemp11723= indx1;
int nctemp11726=CodeEs(nctemp11721,nctemp11723);
struct tree* nctemp11728= p;
struct nctempchar1 *nctemp11732;
static struct nctempchar1 nctemp11733 = {{ 2}, (char*)"=\0"};
nctemp11732=&nctemp11733;
nctempchar1* nctemp11730= nctemp11732;
int nctemp11734=CodeEs(nctemp11728,nctemp11730);
struct tree* nctemp11736= p;
nctempchar1* nctemp11738= m1;
int nctemp11741=CodeEs(nctemp11736,nctemp11738);
struct tree* nctemp11743= p;
struct nctempchar1 *nctemp11747;
static struct nctempchar1 nctemp11748 = {{ 2}, (char*)"+\0"};
nctemp11747=&nctemp11748;
nctempchar1* nctemp11745= nctemp11747;
int nctemp11749=CodeEs(nctemp11743,nctemp11745);
struct tree* nctemp11751= p;
struct nctempchar1 *nctemp11755;
static struct nctempchar1 nctemp11756 = {{ 9}, (char*)"nctempno\0"};
nctemp11755=&nctemp11756;
nctempchar1* nctemp11753= nctemp11755;
int nctemp11757=CodeEs(nctemp11751,nctemp11753);
struct tree* nctemp11759= p;
struct nctempchar1 *nctemp11763;
static struct nctempchar1 nctemp11764 = {{ 3}, (char*)"%(\0"};
nctemp11763=&nctemp11764;
nctempchar1* nctemp11761= nctemp11763;
int nctemp11765=CodeEs(nctemp11759,nctemp11761);
struct tree* nctemp11767= p;
nctempchar1* nctemp11769= n1;
int nctemp11772=CodeEs(nctemp11767,nctemp11769);
struct tree* nctemp11774= p;
struct nctempchar1 *nctemp11778;
static struct nctempchar1 nctemp11779 = {{ 2}, (char*)"-\0"};
nctemp11778=&nctemp11779;
nctempchar1* nctemp11776= nctemp11778;
int nctemp11780=CodeEs(nctemp11774,nctemp11776);
struct tree* nctemp11782= p;
nctempchar1* nctemp11784= m1;
int nctemp11787=CodeEs(nctemp11782,nctemp11784);
struct tree* nctemp11789= p;
struct nctempchar1 *nctemp11793;
static struct nctempchar1 nctemp11794 = {{ 2}, (char*)")\0"};
nctemp11793=&nctemp11794;
nctempchar1* nctemp11791= nctemp11793;
int nctemp11795=CodeEs(nctemp11789,nctemp11791);
struct tree* nctemp11797= p;
struct nctempchar1 *nctemp11801;
static struct nctempchar1 nctemp11802 = {{ 4}, (char*)";\n\0"};
nctemp11801=&nctemp11802;
nctempchar1* nctemp11799= nctemp11801;
int nctemp11803=CodeEs(nctemp11797,nctemp11799);
}
struct tree* nctemp11808= sp;
struct tree* nctemp11810=PtreeMvchild(nctemp11808);
p =nctemp11810;
struct tree* nctemp11815= p;
struct tree* nctemp11817=PtreeMvsister(nctemp11815);
p =nctemp11817;
struct tree* nctemp11819= p;
int nctemp11821=CodeCompstmnt(nctemp11819);
struct tree* nctemp11823= p;
struct nctempchar1 *nctemp11827;
static struct nctempchar1 nctemp11828 = {{ 4}, (char*)"}\n\0"};
nctemp11827=&nctemp11828;
nctempchar1* nctemp11825= nctemp11827;
int nctemp11829=CodeEs(nctemp11823,nctemp11825);
int nctemp11831= 0;
int nctemp11833=CodeSetparallel(nctemp11831);
return 1;
}
int CodeParallelstmntcpu (struct tree* p)
{
struct tree* sp;
int rank;
int i;
sp =p;
struct tree* nctemp11843= sp;
int nctemp11845=PtreeGetrank(nctemp11843);
rank =nctemp11845;
struct tree* nctemp11850= p;
struct tree* nctemp11852=PtreeMvchild(nctemp11850);
p =nctemp11852;
struct tree* nctemp11857= p;
struct tree* nctemp11859=PtreeMvchild(nctemp11857);
p =nctemp11859;
struct tree* nctemp11861= p;
int nctemp11863= 0;
int nctemp11865= rank;
int nctemp11867=CodeParallelfor(nctemp11861,nctemp11863,nctemp11865);
struct tree* nctemp11872= sp;
struct tree* nctemp11874=PtreeMvchild(nctemp11872);
sp =nctemp11874;
struct tree* nctemp11879= sp;
struct tree* nctemp11881=PtreeMvsister(nctemp11879);
sp =nctemp11881;
struct tree* nctemp11883= sp;
int nctemp11885=CodeStmnt(nctemp11883);
i =0;
int nctemp11890 = (i < rank);
while(nctemp11890){
{
struct tree* nctemp11895= sp;
struct nctempchar1 *nctemp11899;
static struct nctempchar1 nctemp11900 = {{ 2}, (char*)"}\0"};
nctemp11899=&nctemp11900;
nctempchar1* nctemp11897= nctemp11899;
int nctemp11901=CodeEs(nctemp11895,nctemp11897);
}
int nctemp11910 = i + 1;
i =nctemp11910;
int nctemp11911 = (i < rank);
nctemp11890=nctemp11911;
}
return 1;
}
int CodeParallelstmnt (struct tree* p)
{
int nctemp11919=CodeGetarch();
int nctemp11916 = (nctemp11919 ==1);
if(nctemp11916)
{
struct tree* nctemp11922= p;
int nctemp11924=CodeParallelstmntcpu(nctemp11922);
}
else{
int nctemp11928=CodeGetarch();
int nctemp11925 = (nctemp11928 ==2);
if(nctemp11925)
{
struct tree* nctemp11931= p;
int nctemp11933=CodeParallelstmntgpu(nctemp11931);
}
else{
int nctemp11937=CodeGetarch();
int nctemp11934 = (nctemp11937 ==3);
if(nctemp11934)
{
struct tree* nctemp11940= p;
int nctemp11942=CodeParallelstmntgpu(nctemp11940);
}
}
}
return 1;
}
int CodeIfstmnt (struct tree* p)
{
nctempchar1 *cond;
struct tree* nctemp11948= p;
struct tree* nctemp11950=PtreeMvchild(nctemp11948);
p =nctemp11950;
struct tree* nctemp11956= p;
nctempchar1* nctemp11958=CodeExpr(nctemp11956);
cond=nctemp11958;
struct tree* nctemp11960= p;
struct nctempchar1 *nctemp11964;
static struct nctempchar1 nctemp11965 = {{ 4}, (char*)"if(\0"};
nctemp11964=&nctemp11965;
nctempchar1* nctemp11962= nctemp11964;
int nctemp11966=CodeEs(nctemp11960,nctemp11962);
struct tree* nctemp11968= p;
nctempchar1* nctemp11970= cond;
int nctemp11973=CodeEs(nctemp11968,nctemp11970);
struct tree* nctemp11975= p;
struct nctempchar1 *nctemp11979;
static struct nctempchar1 nctemp11980 = {{ 4}, (char*)")\n\0"};
nctemp11979=&nctemp11980;
nctempchar1* nctemp11977= nctemp11979;
int nctemp11981=CodeEs(nctemp11975,nctemp11977);
struct tree* nctemp11986= p;
struct tree* nctemp11988=PtreeMvsister(nctemp11986);
p =nctemp11988;
struct tree* nctemp11990= p;
int nctemp11992=CodeStmnt(nctemp11990);
struct tree* nctemp12000= p;
struct tree* nctemp12002=PtreeMvsister(nctemp12000);
p =nctemp12002;
int nctemp11993 = (p !=0);
if(nctemp11993)
{
struct tree* nctemp12009= p;
nctempchar1* nctemp12011=PtreeGetname(nctemp12009);
nctempchar1* nctemp12007= nctemp12011;
struct nctempchar1 *nctemp12014;
static struct nctempchar1 nctemp12015 = {{ 5}, (char*)"else\0"};
nctemp12014=&nctemp12015;
nctempchar1* nctemp12012= nctemp12014;
int nctemp12016=LibeStrcmp(nctemp12007,nctemp12012);
int nctemp12004 = (nctemp12016 ==1);
if(nctemp12004)
{
struct tree* nctemp12022= p;
struct tree* nctemp12024=PtreeMvchild(nctemp12022);
p =nctemp12024;
struct tree* nctemp12026= p;
struct nctempchar1 *nctemp12030;
static struct nctempchar1 nctemp12031 = {{ 5}, (char*)"else\0"};
nctemp12030=&nctemp12031;
nctempchar1* nctemp12028= nctemp12030;
int nctemp12032=CodeEs(nctemp12026,nctemp12028);
struct tree* nctemp12034= p;
int nctemp12036=CodeStmnt(nctemp12034);
}
}
return 1;
}
int CodeReturnstmnt (struct tree* p)
{
struct tree* np;
nctempchar1 *rval;
struct tree* nctemp12042= p;
struct tree* nctemp12044=PtreeMvchild(nctemp12042);
np =nctemp12044;
struct tree* nctemp12050= np;
nctempchar1* nctemp12052=CodeExpr(nctemp12050);
rval=nctemp12052;
struct tree* nctemp12054= np;
struct nctempchar1 *nctemp12058;
static struct nctempchar1 nctemp12059 = {{ 8}, (char*)"return \0"};
nctemp12058=&nctemp12059;
nctempchar1* nctemp12056= nctemp12058;
int nctemp12060=CodeEs(nctemp12054,nctemp12056);
struct tree* nctemp12062= np;
nctempchar1* nctemp12064= rval;
int nctemp12067=CodeEs(nctemp12062,nctemp12064);
struct tree* nctemp12069= np;
struct nctempchar1 *nctemp12073;
static struct nctempchar1 nctemp12074 = {{ 4}, (char*)";\n\0"};
nctemp12073=&nctemp12074;
nctempchar1* nctemp12071= nctemp12073;
int nctemp12075=CodeEs(nctemp12069,nctemp12071);
return 1;
}
int CodeCompstmnt (struct tree* p)
{
struct tree* sp;
struct tree* q;
sp =p;
struct tree* nctemp12082= p;
struct nctempchar1 *nctemp12086;
static struct nctempchar1 nctemp12087 = {{ 4}, (char*)"{\n\0"};
nctemp12086=&nctemp12087;
nctempchar1* nctemp12084= nctemp12086;
int nctemp12088=CodeEs(nctemp12082,nctemp12084);
struct tree* nctemp12093= p;
struct tree* nctemp12095=PtreeMvchild(nctemp12093);
p =nctemp12095;
int nctemp12096 = (p ==0);
if(nctemp12096)
{
struct tree* nctemp12101= sp;
struct nctempchar1 *nctemp12105;
static struct nctempchar1 nctemp12106 = {{ 4}, (char*)"}\n\0"};
nctemp12105=&nctemp12106;
nctempchar1* nctemp12103= nctemp12105;
int nctemp12107=CodeEs(nctemp12101,nctemp12103);
return 1;
}
struct tree* nctemp12110= p;
struct symbol* nctemp12114=SymGetltp();
struct symbol* nctemp12112= nctemp12114;
int nctemp12115=CodeDeclarations(nctemp12110,nctemp12112);
struct tree* nctemp12121= p;
nctempchar1* nctemp12123=PtreeGetname(nctemp12121);
nctempchar1* nctemp12119= nctemp12123;
struct nctempchar1 *nctemp12126;
static struct nctempchar1 nctemp12127 = {{ 13}, (char*)"declarations\0"};
nctemp12126=&nctemp12127;
nctempchar1* nctemp12124= nctemp12126;
int nctemp12128=LibeStrcmp(nctemp12119,nctemp12124);
int nctemp12116 = (nctemp12128 ==1);
if(nctemp12116)
{
struct tree* nctemp12134= p;
struct tree* nctemp12136=PtreeMvsister(nctemp12134);
p =nctemp12136;
}
int nctemp12137 = (p !=0);
int nctemp12141=nctemp12137;
while(nctemp12141)
{{
struct tree* nctemp12147= p;
nctempchar1* nctemp12149=PtreeGetname(nctemp12147);
nctempchar1* nctemp12145= nctemp12149;
struct nctempchar1 *nctemp12152;
static struct nctempchar1 nctemp12153 = {{ 5}, (char*)"expr\0"};
nctemp12152=&nctemp12153;
nctempchar1* nctemp12150= nctemp12152;
int nctemp12154=LibeStrcmp(nctemp12145,nctemp12150);
int nctemp12142 = (nctemp12154 ==1);
if(nctemp12142)
{
struct tree* nctemp12157= p;
nctempchar1* nctemp12159=CodeExpr(nctemp12157);
}
struct tree* nctemp12165= p;
nctempchar1* nctemp12167=PtreeGetname(nctemp12165);
nctempchar1* nctemp12163= nctemp12167;
struct nctempchar1 *nctemp12170;
static struct nctempchar1 nctemp12171 = {{ 6}, (char*)"while\0"};
nctemp12170=&nctemp12171;
nctempchar1* nctemp12168= nctemp12170;
int nctemp12172=LibeStrcmp(nctemp12163,nctemp12168);
int nctemp12160 = (nctemp12172 ==1);
if(nctemp12160)
{
struct tree* nctemp12175= p;
int nctemp12177=CodeWhilestmnt(nctemp12175);
}
struct tree* nctemp12183= p;
nctempchar1* nctemp12185=PtreeGetname(nctemp12183);
nctempchar1* nctemp12181= nctemp12185;
struct nctempchar1 *nctemp12188;
static struct nctempchar1 nctemp12189 = {{ 4}, (char*)"for\0"};
nctemp12188=&nctemp12189;
nctempchar1* nctemp12186= nctemp12188;
int nctemp12190=LibeStrcmp(nctemp12181,nctemp12186);
int nctemp12178 = (nctemp12190 ==1);
if(nctemp12178)
{
struct tree* nctemp12196= p;
struct tree* nctemp12198=PtreeMvchild(nctemp12196);
q =nctemp12198;
struct tree* nctemp12200= q;
struct tree* nctemp12202=PtreeMvsister(nctemp12200);
struct tree* nctemp12204= p;
int nctemp12206=CodeForstmnt(nctemp12204);
}
struct tree* nctemp12212= p;
nctempchar1* nctemp12214=PtreeGetname(nctemp12212);
nctempchar1* nctemp12210= nctemp12214;
struct nctempchar1 *nctemp12217;
static struct nctempchar1 nctemp12218 = {{ 9}, (char*)"parallel\0"};
nctemp12217=&nctemp12218;
nctempchar1* nctemp12215= nctemp12217;
int nctemp12219=LibeStrcmp(nctemp12210,nctemp12215);
int nctemp12207 = (nctemp12219 ==1);
if(nctemp12207)
{
struct tree* nctemp12222= p;
int nctemp12224=CodeParallelstmnt(nctemp12222);
}
struct tree* nctemp12230= p;
nctempchar1* nctemp12232=PtreeGetname(nctemp12230);
nctempchar1* nctemp12228= nctemp12232;
struct nctempchar1 *nctemp12235;
static struct nctempchar1 nctemp12236 = {{ 3}, (char*)"if\0"};
nctemp12235=&nctemp12236;
nctempchar1* nctemp12233= nctemp12235;
int nctemp12237=LibeStrcmp(nctemp12228,nctemp12233);
int nctemp12225 = (nctemp12237 ==1);
if(nctemp12225)
{
struct tree* nctemp12240= p;
int nctemp12242=CodeIfstmnt(nctemp12240);
}
struct tree* nctemp12248= p;
nctempchar1* nctemp12250=PtreeGetname(nctemp12248);
nctempchar1* nctemp12246= nctemp12250;
struct nctempchar1 *nctemp12253;
static struct nctempchar1 nctemp12254 = {{ 7}, (char*)"return\0"};
nctemp12253=&nctemp12254;
nctempchar1* nctemp12251= nctemp12253;
int nctemp12255=LibeStrcmp(nctemp12246,nctemp12251);
int nctemp12243 = (nctemp12255 ==1);
if(nctemp12243)
{
struct tree* nctemp12258= p;
int nctemp12260=CodeReturnstmnt(nctemp12258);
}
struct tree* nctemp12265= p;
struct tree* nctemp12267=PtreeMvsister(nctemp12265);
p =nctemp12267;
}
int nctemp12268 = (p !=0);
nctemp12141=nctemp12268;}struct tree* nctemp12273= sp;
struct nctempchar1 *nctemp12277;
static struct nctempchar1 nctemp12278 = {{ 4}, (char*)"}\n\0"};
nctemp12277=&nctemp12278;
nctempchar1* nctemp12275= nctemp12277;
int nctemp12279=CodeEs(nctemp12273,nctemp12275);
return 1;
}
int CodeStmnt (struct tree* p)
{
struct tree* sp;
sp =p;
struct tree* nctemp12286= p;
struct nctempchar1 *nctemp12290;
static struct nctempchar1 nctemp12291 = {{ 4}, (char*)"{\n\0"};
nctemp12290=&nctemp12291;
nctempchar1* nctemp12288= nctemp12290;
int nctemp12292=CodeEs(nctemp12286,nctemp12288);
struct tree* nctemp12298= p;
nctempchar1* nctemp12300=PtreeGetname(nctemp12298);
nctempchar1* nctemp12296= nctemp12300;
struct nctempchar1 *nctemp12303;
static struct nctempchar1 nctemp12304 = {{ 10}, (char*)"compstmnt\0"};
nctemp12303=&nctemp12304;
nctempchar1* nctemp12301= nctemp12303;
int nctemp12305=LibeStrcmp(nctemp12296,nctemp12301);
int nctemp12293 = (nctemp12305 ==1);
if(nctemp12293)
{
struct tree* nctemp12311= p;
struct tree* nctemp12313=PtreeMvchild(nctemp12311);
p =nctemp12313;
struct tree* nctemp12315= p;
struct symbol* nctemp12319=SymGetltp();
struct symbol* nctemp12317= nctemp12319;
int nctemp12320=CodeDeclarations(nctemp12315,nctemp12317);
struct tree* nctemp12326= p;
nctempchar1* nctemp12328=PtreeGetname(nctemp12326);
nctempchar1* nctemp12324= nctemp12328;
struct nctempchar1 *nctemp12331;
static struct nctempchar1 nctemp12332 = {{ 13}, (char*)"declarations\0"};
nctemp12331=&nctemp12332;
nctempchar1* nctemp12329= nctemp12331;
int nctemp12333=LibeStrcmp(nctemp12324,nctemp12329);
int nctemp12321 = (nctemp12333 ==1);
if(nctemp12321)
{
struct tree* nctemp12339= p;
struct tree* nctemp12341=PtreeMvsister(nctemp12339);
p =nctemp12341;
}
}
int nctemp12342 = (p !=0);
int nctemp12346=nctemp12342;
while(nctemp12346)
{{
struct tree* nctemp12352= p;
nctempchar1* nctemp12354=PtreeGetname(nctemp12352);
nctempchar1* nctemp12350= nctemp12354;
struct nctempchar1 *nctemp12357;
static struct nctempchar1 nctemp12358 = {{ 10}, (char*)"compstmnt\0"};
nctemp12357=&nctemp12358;
nctempchar1* nctemp12355= nctemp12357;
int nctemp12359=LibeStrcmp(nctemp12350,nctemp12355);
int nctemp12347 = (nctemp12359 ==1);
if(nctemp12347)
{
struct tree* nctemp12362= p;
int nctemp12364=CodeCompstmnt(nctemp12362);
}
struct tree* nctemp12370= p;
nctempchar1* nctemp12372=PtreeGetname(nctemp12370);
nctempchar1* nctemp12368= nctemp12372;
struct nctempchar1 *nctemp12375;
static struct nctempchar1 nctemp12376 = {{ 5}, (char*)"expr\0"};
nctemp12375=&nctemp12376;
nctempchar1* nctemp12373= nctemp12375;
int nctemp12377=LibeStrcmp(nctemp12368,nctemp12373);
int nctemp12365 = (nctemp12377 ==1);
if(nctemp12365)
{
struct tree* nctemp12380= p;
nctempchar1* nctemp12382=CodeExpr(nctemp12380);
}
struct tree* nctemp12388= p;
nctempchar1* nctemp12390=PtreeGetname(nctemp12388);
nctempchar1* nctemp12386= nctemp12390;
struct nctempchar1 *nctemp12393;
static struct nctempchar1 nctemp12394 = {{ 6}, (char*)"while\0"};
nctemp12393=&nctemp12394;
nctempchar1* nctemp12391= nctemp12393;
int nctemp12395=LibeStrcmp(nctemp12386,nctemp12391);
int nctemp12383 = (nctemp12395 ==1);
if(nctemp12383)
{
struct tree* nctemp12398= p;
int nctemp12400=CodeWhilestmnt(nctemp12398);
}
struct tree* nctemp12406= p;
nctempchar1* nctemp12408=PtreeGetname(nctemp12406);
nctempchar1* nctemp12404= nctemp12408;
struct nctempchar1 *nctemp12411;
static struct nctempchar1 nctemp12412 = {{ 4}, (char*)"for\0"};
nctemp12411=&nctemp12412;
nctempchar1* nctemp12409= nctemp12411;
int nctemp12413=LibeStrcmp(nctemp12404,nctemp12409);
int nctemp12401 = (nctemp12413 ==1);
if(nctemp12401)
{
struct tree* nctemp12416= p;
int nctemp12418=CodeForstmnt(nctemp12416);
}
struct tree* nctemp12424= p;
nctempchar1* nctemp12426=PtreeGetname(nctemp12424);
nctempchar1* nctemp12422= nctemp12426;
struct nctempchar1 *nctemp12429;
static struct nctempchar1 nctemp12430 = {{ 9}, (char*)"parallel\0"};
nctemp12429=&nctemp12430;
nctempchar1* nctemp12427= nctemp12429;
int nctemp12431=LibeStrcmp(nctemp12422,nctemp12427);
int nctemp12419 = (nctemp12431 ==1);
if(nctemp12419)
{
struct tree* nctemp12434= p;
int nctemp12436=CodeParallelstmnt(nctemp12434);
}
struct tree* nctemp12442= p;
nctempchar1* nctemp12444=PtreeGetname(nctemp12442);
nctempchar1* nctemp12440= nctemp12444;
struct nctempchar1 *nctemp12447;
static struct nctempchar1 nctemp12448 = {{ 3}, (char*)"if\0"};
nctemp12447=&nctemp12448;
nctempchar1* nctemp12445= nctemp12447;
int nctemp12449=LibeStrcmp(nctemp12440,nctemp12445);
int nctemp12437 = (nctemp12449 ==1);
if(nctemp12437)
{
struct tree* nctemp12452= p;
int nctemp12454=CodeIfstmnt(nctemp12452);
}
struct tree* nctemp12460= p;
nctempchar1* nctemp12462=PtreeGetname(nctemp12460);
nctempchar1* nctemp12458= nctemp12462;
struct nctempchar1 *nctemp12465;
static struct nctempchar1 nctemp12466 = {{ 7}, (char*)"return\0"};
nctemp12465=&nctemp12466;
nctempchar1* nctemp12463= nctemp12465;
int nctemp12467=LibeStrcmp(nctemp12458,nctemp12463);
int nctemp12455 = (nctemp12467 ==1);
if(nctemp12455)
{
struct tree* nctemp12470= p;
int nctemp12472=CodeReturnstmnt(nctemp12470);
}
struct tree* nctemp12477= p;
struct tree* nctemp12479=PtreeMvsister(nctemp12477);
p =nctemp12479;
}
int nctemp12480 = (p !=0);
nctemp12346=nctemp12480;}struct tree* nctemp12485= sp;
struct nctempchar1 *nctemp12489;
static struct nctempchar1 nctemp12490 = {{ 4}, (char*)"}\n\0"};
nctemp12489=&nctemp12490;
nctempchar1* nctemp12487= nctemp12489;
int nctemp12491=CodeEs(nctemp12485,nctemp12487);
return 1;
}
int CodeNewdescr (struct tree* p,nctempchar1 *pointer)
{
struct tree* nctemp12494= p;
nctempchar1* nctemp12496= pointer;
int nctemp12499=CodeEs(nctemp12494,nctemp12496);
struct tree* nctemp12501= p;
struct nctempchar1 *nctemp12505;
static struct nctempchar1 nctemp12506 = {{ 2}, (char*)"=\0"};
nctemp12505=&nctemp12506;
nctempchar1* nctemp12503= nctemp12505;
int nctemp12507=CodeEs(nctemp12501,nctemp12503);
struct tree* nctemp12509= p;
struct nctempchar1 *nctemp12513;
static struct nctempchar1 nctemp12514 = {{ 11}, (char*)"RunMalloc(\0"};
nctemp12513=&nctemp12514;
nctempchar1* nctemp12511= nctemp12513;
int nctemp12515=CodeEs(nctemp12509,nctemp12511);
struct tree* nctemp12517= p;
struct nctempchar1 *nctemp12521;
static struct nctempchar1 nctemp12522 = {{ 8}, (char*)"sizeof(\0"};
nctemp12521=&nctemp12522;
nctempchar1* nctemp12519= nctemp12521;
int nctemp12523=CodeEs(nctemp12517,nctemp12519);
struct tree* nctemp12525= p;
nctempchar1* nctemp12527= pointer;
int nctemp12530=CodeEs(nctemp12525,nctemp12527);
struct tree* nctemp12532= p;
struct nctempchar1 *nctemp12536;
static struct nctempchar1 nctemp12537 = {{ 6}, (char*)"));\n\0"};
nctemp12536=&nctemp12537;
nctempchar1* nctemp12534= nctemp12536;
int nctemp12538=CodeEs(nctemp12532,nctemp12534);
return 1;
}
int CodeFdef (struct tree* p)
{
int nctemp12543=CodeGetarch();
int nctemp12540 = (nctemp12543 ==1);
if(nctemp12540)
{
struct tree* nctemp12546= p;
int nctemp12548=CodeFdefcpu(nctemp12546);
}
else{
int nctemp12552=CodeGetarch();
int nctemp12549 = (nctemp12552 ==2);
if(nctemp12549)
{
struct tree* nctemp12561= p;
struct tree* nctemp12563=PtreeMvchild(nctemp12561);
struct tree* nctemp12559= nctemp12563;
nctempchar1* nctemp12564=PtreeGetparallel(nctemp12559);
nctempchar1* nctemp12557= nctemp12564;
struct nctempchar1 *nctemp12567;
static struct nctempchar1 nctemp12568 = {{ 9}, (char*)"parallel\0"};
nctemp12567=&nctemp12568;
nctempchar1* nctemp12565= nctemp12567;
int nctemp12569=LibeStrcmp(nctemp12557,nctemp12565);
int nctemp12554 = (nctemp12569 ==1);
if(nctemp12554)
{
struct tree* nctemp12572= p;
int nctemp12574=CodeFdefgpu(nctemp12572);
struct tree* nctemp12576= p;
int nctemp12578=CodeFdewrappergpu(nctemp12576);
}
else{
struct tree* nctemp12580= p;
int nctemp12582=CodeFdefcpu(nctemp12580);
}
}
else{
int nctemp12586=CodeGetarch();
int nctemp12583 = (nctemp12586 ==3);
if(nctemp12583)
{
struct tree* nctemp12593= p;
nctempchar1* nctemp12595=PtreeGetparallel(nctemp12593);
nctempchar1* nctemp12591= nctemp12595;
struct nctempchar1 *nctemp12598;
static struct nctempchar1 nctemp12599 = {{ 9}, (char*)"parallel\0"};
nctemp12598=&nctemp12599;
nctempchar1* nctemp12596= nctemp12598;
int nctemp12600=LibeStrcmp(nctemp12591,nctemp12596);
int nctemp12588 = (nctemp12600 ==1);
if(nctemp12588)
{
struct tree* nctemp12603= p;
int nctemp12605=CodeFdefgpu(nctemp12603);
struct tree* nctemp12607= p;
int nctemp12609=CodeFdewrappergpu(nctemp12607);
}
else{
struct tree* nctemp12611= p;
int nctemp12613=CodeFdefcpu(nctemp12611);
}
}
}
}
return 1;
}
int CodePreamblecpu ()
{
struct tree* p;
struct nctempchar1 *nctemp12621;
static struct nctempchar1 nctemp12622 = {{ 6}, (char*)"dummy\0"};
nctemp12621=&nctemp12622;
nctempchar1* nctemp12619= nctemp12621;
struct nctempchar1 *nctemp12625;
static struct nctempchar1 nctemp12626 = {{ 6}, (char*)"dummy\0"};
nctemp12625=&nctemp12626;
nctempchar1* nctemp12623= nctemp12625;
struct tree* nctemp12627=PtreeMknode(nctemp12619,nctemp12623);
p =nctemp12627;
struct tree* nctemp12629= p;
int nctemp12631= 1;
int nctemp12633=PtreeSetline(nctemp12629,nctemp12631);
struct tree* nctemp12635= p;
struct nctempchar1 *nctemp12639;
static struct nctempchar1 nctemp12640 = {{ 42}, (char*)"//  Translated by epsc  version today  \n\0"};
nctemp12639=&nctemp12640;
nctempchar1* nctemp12637= nctemp12639;
int nctemp12641=CodeEs(nctemp12635,nctemp12637);
struct tree* nctemp12643= p;
int nctemp12645= 2;
int nctemp12647=PtreeSetline(nctemp12643,nctemp12645);
struct tree* nctemp12649= p;
int nctemp12651= 3;
int nctemp12653=PtreeSetline(nctemp12649,nctemp12651);
struct tree* nctemp12655= p;
int nctemp12657= 4;
int nctemp12659=PtreeSetline(nctemp12655,nctemp12657);
struct tree* nctemp12661= p;
struct nctempchar1 *nctemp12665;
static struct nctempchar1 nctemp12666 = {{ 22}, (char*)"#include <stddef.h>\n\0"};
nctemp12665=&nctemp12666;
nctempchar1* nctemp12663= nctemp12665;
int nctemp12667=CodeEs(nctemp12661,nctemp12663);
struct tree* nctemp12669= p;
struct nctempchar1 *nctemp12673;
static struct nctempchar1 nctemp12674 = {{ 21}, (char*)"#include <stdio.h>\n\0"};
nctemp12673=&nctemp12674;
nctempchar1* nctemp12671= nctemp12673;
int nctemp12675=CodeEs(nctemp12669,nctemp12671);
struct tree* nctemp12677= p;
struct nctempchar1 *nctemp12681;
static struct nctempchar1 nctemp12682 = {{ 22}, (char*)"#include <assert.h>\n\0"};
nctemp12681=&nctemp12682;
nctempchar1* nctemp12679= nctemp12681;
int nctemp12683=CodeEs(nctemp12677,nctemp12679);
struct tree* nctemp12685= p;
struct nctempchar1 *nctemp12689;
static struct nctempchar1 nctemp12690 = {{ 48}, (char*)"typedef struct { float r; float i;} complex; \n\0"};
nctemp12689=&nctemp12690;
nctempchar1* nctemp12687= nctemp12689;
int nctemp12691=CodeEs(nctemp12685,nctemp12687);
struct tree* nctemp12693= p;
int nctemp12695= 3;
int nctemp12697=PtreeSetline(nctemp12693,nctemp12695);
struct tree* nctemp12699= p;
struct nctempchar1 *nctemp12703;
static struct nctempchar1 nctemp12704 = {{ 68}, (char*)"typedef struct nctempfloat1 { int d[1]; float *a;} nctempfloat1; \n\0"};
nctemp12703=&nctemp12704;
nctempchar1* nctemp12701= nctemp12703;
int nctemp12705=CodeEs(nctemp12699,nctemp12701);
struct tree* nctemp12707= p;
int nctemp12709= 5;
int nctemp12711=PtreeSetline(nctemp12707,nctemp12709);
struct tree* nctemp12713= p;
struct nctempchar1 *nctemp12717;
static struct nctempchar1 nctemp12718 = {{ 62}, (char*)"typedef struct nctempint1 { int d[1]; int *a;} nctempint1; \n\0"};
nctemp12717=&nctemp12718;
nctempchar1* nctemp12715= nctemp12717;
int nctemp12719=CodeEs(nctemp12713,nctemp12715);
struct tree* nctemp12721= p;
int nctemp12723= 7;
int nctemp12725=PtreeSetline(nctemp12721,nctemp12723);
struct tree* nctemp12727= p;
struct nctempchar1 *nctemp12731;
static struct nctempchar1 nctemp12732 = {{ 65}, (char*)"typedef struct nctempchar1 { int d[1]; char *a;} nctempchar1; \n\0"};
nctemp12731=&nctemp12732;
nctempchar1* nctemp12729= nctemp12731;
int nctemp12733=CodeEs(nctemp12727,nctemp12729);
struct tree* nctemp12735= p;
int nctemp12737= 7;
int nctemp12739=PtreeSetline(nctemp12735,nctemp12737);
struct tree* nctemp12741= p;
struct nctempchar1 *nctemp12745;
static struct nctempchar1 nctemp12746 = {{ 74}, (char*)"typedef struct nctempcomplex1 { int d[1]; complex *a;} nctempcomplex1; \n\0"};
nctemp12745=&nctemp12746;
nctempchar1* nctemp12743= nctemp12745;
int nctemp12747=CodeEs(nctemp12741,nctemp12743);
struct tree* nctemp12749= p;
int nctemp12751= 8;
int nctemp12753=PtreeSetline(nctemp12749,nctemp12751);
int nctemp12757=CodeArraycheck();
int nctemp12754 = (nctemp12757 ==1);
if(nctemp12754)
{
struct tree* nctemp12760= p;
struct nctempchar1 *nctemp12764;
static struct nctempchar1 nctemp12765 = {{ 55}, (char*)"static struct nctempchar1 nctempstringx = {0, NULL};\n\0"};
nctemp12764=&nctemp12765;
nctempchar1* nctemp12762= nctemp12764;
int nctemp12766=CodeEs(nctemp12760,nctemp12762);
struct tree* nctemp12768= p;
struct nctempchar1 *nctemp12772;
static struct nctempchar1 nctemp12773 = {{ 60}, (char*)"static struct nctempchar1 *nctempstring = &nctempstringx;\n\0"};
nctemp12772=&nctemp12773;
nctempchar1* nctemp12770= nctemp12772;
int nctemp12774=CodeEs(nctemp12768,nctemp12770);
struct tree* nctemp12776= p;
int nctemp12778= 8;
int nctemp12780=PtreeSetline(nctemp12776,nctemp12778);
}
struct tree* nctemp12782= p;
struct nctempchar1 *nctemp12786;
static struct nctempchar1 nctemp12787 = {{ 68}, (char*)"typedef struct nctempfloat2 { int d[2]; float *a;} nctempfloat2; \n\0"};
nctemp12786=&nctemp12787;
nctempchar1* nctemp12784= nctemp12786;
int nctemp12788=CodeEs(nctemp12782,nctemp12784);
struct tree* nctemp12790= p;
int nctemp12792= 10;
int nctemp12794=PtreeSetline(nctemp12790,nctemp12792);
struct tree* nctemp12796= p;
struct nctempchar1 *nctemp12800;
static struct nctempchar1 nctemp12801 = {{ 62}, (char*)"typedef struct nctempint2 { int d[2]; int *a;} nctempint2; \n\0"};
nctemp12800=&nctemp12801;
nctempchar1* nctemp12798= nctemp12800;
int nctemp12802=CodeEs(nctemp12796,nctemp12798);
struct tree* nctemp12804= p;
int nctemp12806= 10;
int nctemp12808=PtreeSetline(nctemp12804,nctemp12806);
struct tree* nctemp12810= p;
struct nctempchar1 *nctemp12814;
static struct nctempchar1 nctemp12815 = {{ 65}, (char*)"typedef struct nctempchar2 { int d[2]; char *a;} nctempchar2; \n\0"};
nctemp12814=&nctemp12815;
nctempchar1* nctemp12812= nctemp12814;
int nctemp12816=CodeEs(nctemp12810,nctemp12812);
struct tree* nctemp12818= p;
int nctemp12820= 12;
int nctemp12822=PtreeSetline(nctemp12818,nctemp12820);
struct tree* nctemp12824= p;
struct nctempchar1 *nctemp12828;
static struct nctempchar1 nctemp12829 = {{ 74}, (char*)"typedef struct nctempcomplex2 { int d[2]; complex *a;} nctempcomplex2; \n\0"};
nctemp12828=&nctemp12829;
nctempchar1* nctemp12826= nctemp12828;
int nctemp12830=CodeEs(nctemp12824,nctemp12826);
struct tree* nctemp12832= p;
int nctemp12834= 13;
int nctemp12836=PtreeSetline(nctemp12832,nctemp12834);
struct tree* nctemp12838= p;
struct nctempchar1 *nctemp12842;
static struct nctempchar1 nctemp12843 = {{ 68}, (char*)"typedef struct nctempfloat3 { int d[3]; float *a;} nctempfloat3; \n\0"};
nctemp12842=&nctemp12843;
nctempchar1* nctemp12840= nctemp12842;
int nctemp12844=CodeEs(nctemp12838,nctemp12840);
struct tree* nctemp12846= p;
int nctemp12848= 14;
int nctemp12850=PtreeSetline(nctemp12846,nctemp12848);
struct tree* nctemp12852= p;
struct nctempchar1 *nctemp12856;
static struct nctempchar1 nctemp12857 = {{ 62}, (char*)"typedef struct nctempint3 { int d[3]; int *a;} nctempint3; \n\0"};
nctemp12856=&nctemp12857;
nctempchar1* nctemp12854= nctemp12856;
int nctemp12858=CodeEs(nctemp12852,nctemp12854);
struct tree* nctemp12860= p;
int nctemp12862= 15;
int nctemp12864=PtreeSetline(nctemp12860,nctemp12862);
struct tree* nctemp12866= p;
struct nctempchar1 *nctemp12870;
static struct nctempchar1 nctemp12871 = {{ 65}, (char*)"typedef struct nctempchar3 { int d[3]; char *a;} nctempchar3; \n\0"};
nctemp12870=&nctemp12871;
nctempchar1* nctemp12868= nctemp12870;
int nctemp12872=CodeEs(nctemp12866,nctemp12868);
struct tree* nctemp12874= p;
int nctemp12876= 16;
int nctemp12878=PtreeSetline(nctemp12874,nctemp12876);
struct tree* nctemp12880= p;
struct nctempchar1 *nctemp12884;
static struct nctempchar1 nctemp12885 = {{ 74}, (char*)"typedef struct nctempcomplex3 { int d[3]; complex *a;} nctempcomplex3; \n\0"};
nctemp12884=&nctemp12885;
nctempchar1* nctemp12882= nctemp12884;
int nctemp12886=CodeEs(nctemp12880,nctemp12882);
struct tree* nctemp12888= p;
int nctemp12890= 17;
int nctemp12892=PtreeSetline(nctemp12888,nctemp12890);
struct tree* nctemp12894= p;
struct nctempchar1 *nctemp12898;
static struct nctempchar1 nctemp12899 = {{ 68}, (char*)"typedef struct nctempfloat4 { int d[4]; float *a;} nctempfloat4; \n\0"};
nctemp12898=&nctemp12899;
nctempchar1* nctemp12896= nctemp12898;
int nctemp12900=CodeEs(nctemp12894,nctemp12896);
struct tree* nctemp12902= p;
int nctemp12904= 18;
int nctemp12906=PtreeSetline(nctemp12902,nctemp12904);
struct tree* nctemp12908= p;
struct nctempchar1 *nctemp12912;
static struct nctempchar1 nctemp12913 = {{ 62}, (char*)"typedef struct nctempint4 { int d[4]; int *a;} nctempint4; \n\0"};
nctemp12912=&nctemp12913;
nctempchar1* nctemp12910= nctemp12912;
int nctemp12914=CodeEs(nctemp12908,nctemp12910);
struct tree* nctemp12916= p;
int nctemp12918= 19;
int nctemp12920=PtreeSetline(nctemp12916,nctemp12918);
struct tree* nctemp12922= p;
struct nctempchar1 *nctemp12926;
static struct nctempchar1 nctemp12927 = {{ 65}, (char*)"typedef struct nctempchar4 { int d[4]; char *a;} nctempchar4; \n\0"};
nctemp12926=&nctemp12927;
nctempchar1* nctemp12924= nctemp12926;
int nctemp12928=CodeEs(nctemp12922,nctemp12924);
struct tree* nctemp12930= p;
int nctemp12932= 20;
int nctemp12934=PtreeSetline(nctemp12930,nctemp12932);
struct tree* nctemp12936= p;
struct nctempchar1 *nctemp12940;
static struct nctempchar1 nctemp12941 = {{ 74}, (char*)"typedef struct nctempcomplex4 { int d[4]; complex *a;} nctempcomplex4; \n\0"};
nctemp12940=&nctemp12941;
nctempchar1* nctemp12938= nctemp12940;
int nctemp12942=CodeEs(nctemp12936,nctemp12938);
struct tree* nctemp12944= p;
struct nctempchar1 *nctemp12948;
static struct nctempchar1 nctemp12949 = {{ 22}, (char*)"#include <stdlib.h>\n\0"};
nctemp12948=&nctemp12949;
nctempchar1* nctemp12946= nctemp12948;
int nctemp12950=CodeEs(nctemp12944,nctemp12946);
struct tree* nctemp12952= p;
struct nctempchar1 *nctemp12956;
static struct nctempchar1 nctemp12957 = {{ 22}, (char*)"#include <string.h>\n\0"};
nctemp12956=&nctemp12957;
nctempchar1* nctemp12954= nctemp12956;
int nctemp12958=CodeEs(nctemp12952,nctemp12954);
struct tree* nctemp12960= p;
struct nctempchar1 *nctemp12964;
static struct nctempchar1 nctemp12965 = {{ 27}, (char*)"void *RunMalloc(int n); \n\0"};
nctemp12964=&nctemp12965;
nctempchar1* nctemp12962= nctemp12964;
int nctemp12966=CodeEs(nctemp12960,nctemp12962);
struct tree* nctemp12968= p;
struct nctempchar1 *nctemp12972;
static struct nctempchar1 nctemp12973 = {{ 25}, (char*)"int RunFree(void *n); \n\0"};
nctemp12972=&nctemp12973;
nctempchar1* nctemp12970= nctemp12972;
int nctemp12974=CodeEs(nctemp12968,nctemp12970);
return 1;
}
int CodePreamblecuda ()
{
struct tree* p;
struct nctempchar1 *nctemp12982;
static struct nctempchar1 nctemp12983 = {{ 6}, (char*)"dummy\0"};
nctemp12982=&nctemp12983;
nctempchar1* nctemp12980= nctemp12982;
struct nctempchar1 *nctemp12986;
static struct nctempchar1 nctemp12987 = {{ 6}, (char*)"dummy\0"};
nctemp12986=&nctemp12987;
nctempchar1* nctemp12984= nctemp12986;
struct tree* nctemp12988=PtreeMknode(nctemp12980,nctemp12984);
p =nctemp12988;
struct tree* nctemp12990= p;
int nctemp12992= 1;
int nctemp12994=PtreeSetline(nctemp12990,nctemp12992);
struct tree* nctemp12996= p;
struct nctempchar1 *nctemp13000;
static struct nctempchar1 nctemp13001 = {{ 50}, (char*)"//  Translated by epsc  version December 2021  \n\0"};
nctemp13000=&nctemp13001;
nctempchar1* nctemp12998= nctemp13000;
int nctemp13002=CodeEs(nctemp12996,nctemp12998);
struct tree* nctemp13004= p;
int nctemp13006= 2;
int nctemp13008=PtreeSetline(nctemp13004,nctemp13006);
struct tree* nctemp13010= p;
int nctemp13012= 3;
int nctemp13014=PtreeSetline(nctemp13010,nctemp13012);
struct tree* nctemp13016= p;
struct nctempchar1 *nctemp13020;
static struct nctempchar1 nctemp13021 = {{ 17}, (char*)"extern \"C\" {\n\0"};
nctemp13020=&nctemp13021;
nctempchar1* nctemp13018= nctemp13020;
int nctemp13022=CodeEs(nctemp13016,nctemp13018);
struct tree* nctemp13024= p;
struct nctempchar1 *nctemp13028;
static struct nctempchar1 nctemp13029 = {{ 48}, (char*)"typedef struct { float r; float i;} complex; \n\0"};
nctemp13028=&nctemp13029;
nctempchar1* nctemp13026= nctemp13028;
int nctemp13030=CodeEs(nctemp13024,nctemp13026);
struct tree* nctemp13032= p;
int nctemp13034= 3;
int nctemp13036=PtreeSetline(nctemp13032,nctemp13034);
struct tree* nctemp13038= p;
struct nctempchar1 *nctemp13042;
static struct nctempchar1 nctemp13043 = {{ 68}, (char*)"typedef struct nctempfloat1 { int d[1]; float *a;} nctempfloat1; \n\0"};
nctemp13042=&nctemp13043;
nctempchar1* nctemp13040= nctemp13042;
int nctemp13044=CodeEs(nctemp13038,nctemp13040);
struct tree* nctemp13046= p;
int nctemp13048= 5;
int nctemp13050=PtreeSetline(nctemp13046,nctemp13048);
struct tree* nctemp13052= p;
struct nctempchar1 *nctemp13056;
static struct nctempchar1 nctemp13057 = {{ 62}, (char*)"typedef struct nctempint1 { int d[1]; int *a;} nctempint1; \n\0"};
nctemp13056=&nctemp13057;
nctempchar1* nctemp13054= nctemp13056;
int nctemp13058=CodeEs(nctemp13052,nctemp13054);
struct tree* nctemp13060= p;
int nctemp13062= 7;
int nctemp13064=PtreeSetline(nctemp13060,nctemp13062);
struct tree* nctemp13066= p;
struct nctempchar1 *nctemp13070;
static struct nctempchar1 nctemp13071 = {{ 65}, (char*)"typedef struct nctempchar1 { int d[1]; char *a;} nctempchar1; \n\0"};
nctemp13070=&nctemp13071;
nctempchar1* nctemp13068= nctemp13070;
int nctemp13072=CodeEs(nctemp13066,nctemp13068);
struct tree* nctemp13074= p;
int nctemp13076= 7;
int nctemp13078=PtreeSetline(nctemp13074,nctemp13076);
struct tree* nctemp13080= p;
struct nctempchar1 *nctemp13084;
static struct nctempchar1 nctemp13085 = {{ 74}, (char*)"typedef struct nctempcomplex1 { int d[1]; complex *a;} nctempcomplex1; \n\0"};
nctemp13084=&nctemp13085;
nctempchar1* nctemp13082= nctemp13084;
int nctemp13086=CodeEs(nctemp13080,nctemp13082);
struct tree* nctemp13088= p;
int nctemp13090= 8;
int nctemp13092=PtreeSetline(nctemp13088,nctemp13090);
int nctemp13096=CodeArraycheck();
int nctemp13093 = (nctemp13096 ==1);
if(nctemp13093)
{
struct tree* nctemp13099= p;
struct nctempchar1 *nctemp13103;
static struct nctempchar1 nctemp13104 = {{ 55}, (char*)"static struct nctempchar1 nctempstringx = {0, NULL};\n\0"};
nctemp13103=&nctemp13104;
nctempchar1* nctemp13101= nctemp13103;
int nctemp13105=CodeEs(nctemp13099,nctemp13101);
struct tree* nctemp13107= p;
struct nctempchar1 *nctemp13111;
static struct nctempchar1 nctemp13112 = {{ 60}, (char*)"static struct nctempchar1 *nctempstring = &nctempstringx;\n\0"};
nctemp13111=&nctemp13112;
nctempchar1* nctemp13109= nctemp13111;
int nctemp13113=CodeEs(nctemp13107,nctemp13109);
struct tree* nctemp13115= p;
int nctemp13117= 8;
int nctemp13119=PtreeSetline(nctemp13115,nctemp13117);
}
struct tree* nctemp13121= p;
struct nctempchar1 *nctemp13125;
static struct nctempchar1 nctemp13126 = {{ 68}, (char*)"typedef struct nctempfloat2 { int d[2]; float *a;} nctempfloat2; \n\0"};
nctemp13125=&nctemp13126;
nctempchar1* nctemp13123= nctemp13125;
int nctemp13127=CodeEs(nctemp13121,nctemp13123);
struct tree* nctemp13129= p;
int nctemp13131= 10;
int nctemp13133=PtreeSetline(nctemp13129,nctemp13131);
struct tree* nctemp13135= p;
struct nctempchar1 *nctemp13139;
static struct nctempchar1 nctemp13140 = {{ 62}, (char*)"typedef struct nctempint2 { int d[2]; int *a;} nctempint2; \n\0"};
nctemp13139=&nctemp13140;
nctempchar1* nctemp13137= nctemp13139;
int nctemp13141=CodeEs(nctemp13135,nctemp13137);
struct tree* nctemp13143= p;
int nctemp13145= 10;
int nctemp13147=PtreeSetline(nctemp13143,nctemp13145);
struct tree* nctemp13149= p;
struct nctempchar1 *nctemp13153;
static struct nctempchar1 nctemp13154 = {{ 65}, (char*)"typedef struct nctempchar2 { int d[2]; char *a;} nctempchar2; \n\0"};
nctemp13153=&nctemp13154;
nctempchar1* nctemp13151= nctemp13153;
int nctemp13155=CodeEs(nctemp13149,nctemp13151);
struct tree* nctemp13157= p;
int nctemp13159= 12;
int nctemp13161=PtreeSetline(nctemp13157,nctemp13159);
struct tree* nctemp13163= p;
struct nctempchar1 *nctemp13167;
static struct nctempchar1 nctemp13168 = {{ 74}, (char*)"typedef struct nctempcomplex2 { int d[2]; complex *a;} nctempcomplex2; \n\0"};
nctemp13167=&nctemp13168;
nctempchar1* nctemp13165= nctemp13167;
int nctemp13169=CodeEs(nctemp13163,nctemp13165);
struct tree* nctemp13171= p;
int nctemp13173= 13;
int nctemp13175=PtreeSetline(nctemp13171,nctemp13173);
struct tree* nctemp13177= p;
struct nctempchar1 *nctemp13181;
static struct nctempchar1 nctemp13182 = {{ 68}, (char*)"typedef struct nctempfloat3 { int d[3]; float *a;} nctempfloat3; \n\0"};
nctemp13181=&nctemp13182;
nctempchar1* nctemp13179= nctemp13181;
int nctemp13183=CodeEs(nctemp13177,nctemp13179);
struct tree* nctemp13185= p;
int nctemp13187= 14;
int nctemp13189=PtreeSetline(nctemp13185,nctemp13187);
struct tree* nctemp13191= p;
struct nctempchar1 *nctemp13195;
static struct nctempchar1 nctemp13196 = {{ 62}, (char*)"typedef struct nctempint3 { int d[3]; int *a;} nctempint3; \n\0"};
nctemp13195=&nctemp13196;
nctempchar1* nctemp13193= nctemp13195;
int nctemp13197=CodeEs(nctemp13191,nctemp13193);
struct tree* nctemp13199= p;
int nctemp13201= 15;
int nctemp13203=PtreeSetline(nctemp13199,nctemp13201);
struct tree* nctemp13205= p;
struct nctempchar1 *nctemp13209;
static struct nctempchar1 nctemp13210 = {{ 65}, (char*)"typedef struct nctempchar3 { int d[3]; char *a;} nctempchar3; \n\0"};
nctemp13209=&nctemp13210;
nctempchar1* nctemp13207= nctemp13209;
int nctemp13211=CodeEs(nctemp13205,nctemp13207);
struct tree* nctemp13213= p;
int nctemp13215= 16;
int nctemp13217=PtreeSetline(nctemp13213,nctemp13215);
struct tree* nctemp13219= p;
struct nctempchar1 *nctemp13223;
static struct nctempchar1 nctemp13224 = {{ 74}, (char*)"typedef struct nctempcomplex3 { int d[3]; complex *a;} nctempcomplex3; \n\0"};
nctemp13223=&nctemp13224;
nctempchar1* nctemp13221= nctemp13223;
int nctemp13225=CodeEs(nctemp13219,nctemp13221);
struct tree* nctemp13227= p;
int nctemp13229= 17;
int nctemp13231=PtreeSetline(nctemp13227,nctemp13229);
struct tree* nctemp13233= p;
struct nctempchar1 *nctemp13237;
static struct nctempchar1 nctemp13238 = {{ 68}, (char*)"typedef struct nctempfloat4 { int d[4]; float *a;} nctempfloat4; \n\0"};
nctemp13237=&nctemp13238;
nctempchar1* nctemp13235= nctemp13237;
int nctemp13239=CodeEs(nctemp13233,nctemp13235);
struct tree* nctemp13241= p;
int nctemp13243= 18;
int nctemp13245=PtreeSetline(nctemp13241,nctemp13243);
struct tree* nctemp13247= p;
struct nctempchar1 *nctemp13251;
static struct nctempchar1 nctemp13252 = {{ 62}, (char*)"typedef struct nctempint4 { int d[4]; int *a;} nctempint4; \n\0"};
nctemp13251=&nctemp13252;
nctempchar1* nctemp13249= nctemp13251;
int nctemp13253=CodeEs(nctemp13247,nctemp13249);
struct tree* nctemp13255= p;
int nctemp13257= 19;
int nctemp13259=PtreeSetline(nctemp13255,nctemp13257);
struct tree* nctemp13261= p;
struct nctempchar1 *nctemp13265;
static struct nctempchar1 nctemp13266 = {{ 65}, (char*)"typedef struct nctempchar4 { int d[4]; char *a;} nctempchar4; \n\0"};
nctemp13265=&nctemp13266;
nctempchar1* nctemp13263= nctemp13265;
int nctemp13267=CodeEs(nctemp13261,nctemp13263);
struct tree* nctemp13269= p;
int nctemp13271= 20;
int nctemp13273=PtreeSetline(nctemp13269,nctemp13271);
struct tree* nctemp13275= p;
struct nctempchar1 *nctemp13279;
static struct nctempchar1 nctemp13280 = {{ 74}, (char*)"typedef struct nctempcomplex4 { int d[4]; complex *a;} nctempcomplex4; \n\0"};
nctemp13279=&nctemp13280;
nctempchar1* nctemp13277= nctemp13279;
int nctemp13281=CodeEs(nctemp13275,nctemp13277);
struct tree* nctemp13283= p;
struct nctempchar1 *nctemp13287;
static struct nctempchar1 nctemp13288 = {{ 21}, (char*)"#include <stdio.h>\n\0"};
nctemp13287=&nctemp13288;
nctempchar1* nctemp13285= nctemp13287;
int nctemp13289=CodeEs(nctemp13283,nctemp13285);
struct tree* nctemp13291= p;
struct nctempchar1 *nctemp13295;
static struct nctempchar1 nctemp13296 = {{ 22}, (char*)"#include <stdlib.h>\n\0"};
nctemp13295=&nctemp13296;
nctempchar1* nctemp13293= nctemp13295;
int nctemp13297=CodeEs(nctemp13291,nctemp13293);
struct tree* nctemp13299= p;
struct nctempchar1 *nctemp13303;
static struct nctempchar1 nctemp13304 = {{ 22}, (char*)"#include <string.h>\n\0"};
nctemp13303=&nctemp13304;
nctempchar1* nctemp13301= nctemp13303;
int nctemp13305=CodeEs(nctemp13299,nctemp13301);
struct tree* nctemp13307= p;
struct nctempchar1 *nctemp13311;
static struct nctempchar1 nctemp13312 = {{ 22}, (char*)"#include <assert.h>\n\0"};
nctemp13311=&nctemp13312;
nctempchar1* nctemp13309= nctemp13311;
int nctemp13313=CodeEs(nctemp13307,nctemp13309);
struct tree* nctemp13315= p;
struct nctempchar1 *nctemp13319;
static struct nctempchar1 nctemp13320 = {{ 3}, (char*)"\n\0"};
nctemp13319=&nctemp13320;
nctempchar1* nctemp13317= nctemp13319;
int nctemp13321=CodeEs(nctemp13315,nctemp13317);
struct tree* nctemp13323= p;
struct nctempchar1 *nctemp13327;
static struct nctempchar1 nctemp13328 = {{ 23}, (char*)"void *GpuNew(int n);\n\0"};
nctemp13327=&nctemp13328;
nctempchar1* nctemp13325= nctemp13327;
int nctemp13329=CodeEs(nctemp13323,nctemp13325);
struct tree* nctemp13331= p;
struct nctempchar1 *nctemp13335;
static struct nctempchar1 nctemp13336 = {{ 28}, (char*)"void *GpuDelete(void *f);\n\0"};
nctemp13335=&nctemp13336;
nctempchar1* nctemp13333= nctemp13335;
int nctemp13337=CodeEs(nctemp13331,nctemp13333);
struct tree* nctemp13339= p;
struct nctempchar1 *nctemp13343;
static struct nctempchar1 nctemp13344 = {{ 20}, (char*)"void *GpuError();\n\0"};
nctemp13343=&nctemp13344;
nctempchar1* nctemp13341= nctemp13343;
int nctemp13345=CodeEs(nctemp13339,nctemp13341);
struct tree* nctemp13347= p;
struct nctempchar1 *nctemp13351;
static struct nctempchar1 nctemp13352 = {{ 26}, (char*)"void *RunMalloc(int n);\n\0"};
nctemp13351=&nctemp13352;
nctempchar1* nctemp13349= nctemp13351;
int nctemp13353=CodeEs(nctemp13347,nctemp13349);
struct tree* nctemp13355= p;
struct nctempchar1 *nctemp13359;
static struct nctempchar1 nctemp13360 = {{ 24}, (char*)"int RunFree(void * );\n\0"};
nctemp13359=&nctemp13360;
nctempchar1* nctemp13357= nctemp13359;
int nctemp13361=CodeEs(nctemp13355,nctemp13357);
struct tree* nctemp13363= p;
struct nctempchar1 *nctemp13367;
static struct nctempchar1 nctemp13368 = {{ 17}, (char*)"int RunSync();\n\0"};
nctemp13367=&nctemp13368;
nctempchar1* nctemp13365= nctemp13367;
int nctemp13369=CodeEs(nctemp13363,nctemp13365);
struct tree* nctemp13371= p;
struct nctempchar1 *nctemp13375;
static struct nctempchar1 nctemp13376 = {{ 18}, (char*)"int RunGetnt();\n\0"};
nctemp13375=&nctemp13376;
nctempchar1* nctemp13373= nctemp13375;
int nctemp13377=CodeEs(nctemp13371,nctemp13373);
struct tree* nctemp13379= p;
struct nctempchar1 *nctemp13383;
static struct nctempchar1 nctemp13384 = {{ 18}, (char*)"int RunGetnb();\n\0"};
nctemp13383=&nctemp13384;
nctempchar1* nctemp13381= nctemp13383;
int nctemp13385=CodeEs(nctemp13379,nctemp13381);
return 1;
}
int CodePreamblehip ()
{
struct tree* p;
struct nctempchar1 *nctemp13393;
static struct nctempchar1 nctemp13394 = {{ 6}, (char*)"dummy\0"};
nctemp13393=&nctemp13394;
nctempchar1* nctemp13391= nctemp13393;
struct nctempchar1 *nctemp13397;
static struct nctempchar1 nctemp13398 = {{ 6}, (char*)"dummy\0"};
nctemp13397=&nctemp13398;
nctempchar1* nctemp13395= nctemp13397;
struct tree* nctemp13399=PtreeMknode(nctemp13391,nctemp13395);
p =nctemp13399;
struct tree* nctemp13401= p;
int nctemp13403= 1;
int nctemp13405=PtreeSetline(nctemp13401,nctemp13403);
struct tree* nctemp13407= p;
struct nctempchar1 *nctemp13411;
static struct nctempchar1 nctemp13412 = {{ 50}, (char*)"//  Translated by epsc  version December 2021  \n\0"};
nctemp13411=&nctemp13412;
nctempchar1* nctemp13409= nctemp13411;
int nctemp13413=CodeEs(nctemp13407,nctemp13409);
struct tree* nctemp13415= p;
int nctemp13417= 2;
int nctemp13419=PtreeSetline(nctemp13415,nctemp13417);
struct tree* nctemp13421= p;
int nctemp13423= 3;
int nctemp13425=PtreeSetline(nctemp13421,nctemp13423);
struct tree* nctemp13427= p;
struct nctempchar1 *nctemp13431;
static struct nctempchar1 nctemp13432 = {{ 48}, (char*)"typedef struct { float r; float i;} complex; \n\0"};
nctemp13431=&nctemp13432;
nctempchar1* nctemp13429= nctemp13431;
int nctemp13433=CodeEs(nctemp13427,nctemp13429);
struct tree* nctemp13435= p;
int nctemp13437= 3;
int nctemp13439=PtreeSetline(nctemp13435,nctemp13437);
struct tree* nctemp13441= p;
struct nctempchar1 *nctemp13445;
static struct nctempchar1 nctemp13446 = {{ 68}, (char*)"typedef struct nctempfloat1 { int d[1]; float *a;} nctempfloat1; \n\0"};
nctemp13445=&nctemp13446;
nctempchar1* nctemp13443= nctemp13445;
int nctemp13447=CodeEs(nctemp13441,nctemp13443);
struct tree* nctemp13449= p;
int nctemp13451= 5;
int nctemp13453=PtreeSetline(nctemp13449,nctemp13451);
struct tree* nctemp13455= p;
struct nctempchar1 *nctemp13459;
static struct nctempchar1 nctemp13460 = {{ 62}, (char*)"typedef struct nctempint1 { int d[1]; int *a;} nctempint1; \n\0"};
nctemp13459=&nctemp13460;
nctempchar1* nctemp13457= nctemp13459;
int nctemp13461=CodeEs(nctemp13455,nctemp13457);
struct tree* nctemp13463= p;
int nctemp13465= 7;
int nctemp13467=PtreeSetline(nctemp13463,nctemp13465);
struct tree* nctemp13469= p;
struct nctempchar1 *nctemp13473;
static struct nctempchar1 nctemp13474 = {{ 65}, (char*)"typedef struct nctempchar1 { int d[1]; char *a;} nctempchar1; \n\0"};
nctemp13473=&nctemp13474;
nctempchar1* nctemp13471= nctemp13473;
int nctemp13475=CodeEs(nctemp13469,nctemp13471);
struct tree* nctemp13477= p;
int nctemp13479= 7;
int nctemp13481=PtreeSetline(nctemp13477,nctemp13479);
struct tree* nctemp13483= p;
struct nctempchar1 *nctemp13487;
static struct nctempchar1 nctemp13488 = {{ 74}, (char*)"typedef struct nctempcomplex1 { int d[1]; complex *a;} nctempcomplex1; \n\0"};
nctemp13487=&nctemp13488;
nctempchar1* nctemp13485= nctemp13487;
int nctemp13489=CodeEs(nctemp13483,nctemp13485);
struct tree* nctemp13491= p;
int nctemp13493= 8;
int nctemp13495=PtreeSetline(nctemp13491,nctemp13493);
int nctemp13499=CodeArraycheck();
int nctemp13496 = (nctemp13499 ==1);
if(nctemp13496)
{
struct tree* nctemp13502= p;
struct nctempchar1 *nctemp13506;
static struct nctempchar1 nctemp13507 = {{ 54}, (char*)"static struct nctempchar1 nctempstring = {0, NULL};\n\0"};
nctemp13506=&nctemp13507;
nctempchar1* nctemp13504= nctemp13506;
int nctemp13508=CodeEs(nctemp13502,nctemp13504);
struct tree* nctemp13510= p;
int nctemp13512= 8;
int nctemp13514=PtreeSetline(nctemp13510,nctemp13512);
}
struct tree* nctemp13516= p;
struct nctempchar1 *nctemp13520;
static struct nctempchar1 nctemp13521 = {{ 68}, (char*)"typedef struct nctempfloat2 { int d[2]; float *a;} nctempfloat2; \n\0"};
nctemp13520=&nctemp13521;
nctempchar1* nctemp13518= nctemp13520;
int nctemp13522=CodeEs(nctemp13516,nctemp13518);
struct tree* nctemp13524= p;
int nctemp13526= 10;
int nctemp13528=PtreeSetline(nctemp13524,nctemp13526);
struct tree* nctemp13530= p;
struct nctempchar1 *nctemp13534;
static struct nctempchar1 nctemp13535 = {{ 62}, (char*)"typedef struct nctempint2 { int d[2]; int *a;} nctempint2; \n\0"};
nctemp13534=&nctemp13535;
nctempchar1* nctemp13532= nctemp13534;
int nctemp13536=CodeEs(nctemp13530,nctemp13532);
struct tree* nctemp13538= p;
int nctemp13540= 10;
int nctemp13542=PtreeSetline(nctemp13538,nctemp13540);
struct tree* nctemp13544= p;
struct nctempchar1 *nctemp13548;
static struct nctempchar1 nctemp13549 = {{ 65}, (char*)"typedef struct nctempchar2 { int d[2]; char *a;} nctempchar2; \n\0"};
nctemp13548=&nctemp13549;
nctempchar1* nctemp13546= nctemp13548;
int nctemp13550=CodeEs(nctemp13544,nctemp13546);
struct tree* nctemp13552= p;
int nctemp13554= 12;
int nctemp13556=PtreeSetline(nctemp13552,nctemp13554);
struct tree* nctemp13558= p;
struct nctempchar1 *nctemp13562;
static struct nctempchar1 nctemp13563 = {{ 74}, (char*)"typedef struct nctempcomplex2 { int d[2]; complex *a;} nctempcomplex2; \n\0"};
nctemp13562=&nctemp13563;
nctempchar1* nctemp13560= nctemp13562;
int nctemp13564=CodeEs(nctemp13558,nctemp13560);
struct tree* nctemp13566= p;
int nctemp13568= 13;
int nctemp13570=PtreeSetline(nctemp13566,nctemp13568);
struct tree* nctemp13572= p;
struct nctempchar1 *nctemp13576;
static struct nctempchar1 nctemp13577 = {{ 68}, (char*)"typedef struct nctempfloat3 { int d[3]; float *a;} nctempfloat3; \n\0"};
nctemp13576=&nctemp13577;
nctempchar1* nctemp13574= nctemp13576;
int nctemp13578=CodeEs(nctemp13572,nctemp13574);
struct tree* nctemp13580= p;
int nctemp13582= 14;
int nctemp13584=PtreeSetline(nctemp13580,nctemp13582);
struct tree* nctemp13586= p;
struct nctempchar1 *nctemp13590;
static struct nctempchar1 nctemp13591 = {{ 62}, (char*)"typedef struct nctempint3 { int d[3]; int *a;} nctempint3; \n\0"};
nctemp13590=&nctemp13591;
nctempchar1* nctemp13588= nctemp13590;
int nctemp13592=CodeEs(nctemp13586,nctemp13588);
struct tree* nctemp13594= p;
int nctemp13596= 15;
int nctemp13598=PtreeSetline(nctemp13594,nctemp13596);
struct tree* nctemp13600= p;
struct nctempchar1 *nctemp13604;
static struct nctempchar1 nctemp13605 = {{ 65}, (char*)"typedef struct nctempchar3 { int d[3]; char *a;} nctempchar3; \n\0"};
nctemp13604=&nctemp13605;
nctempchar1* nctemp13602= nctemp13604;
int nctemp13606=CodeEs(nctemp13600,nctemp13602);
struct tree* nctemp13608= p;
int nctemp13610= 16;
int nctemp13612=PtreeSetline(nctemp13608,nctemp13610);
struct tree* nctemp13614= p;
struct nctempchar1 *nctemp13618;
static struct nctempchar1 nctemp13619 = {{ 74}, (char*)"typedef struct nctempcomplex3 { int d[3]; complex *a;} nctempcomplex3; \n\0"};
nctemp13618=&nctemp13619;
nctempchar1* nctemp13616= nctemp13618;
int nctemp13620=CodeEs(nctemp13614,nctemp13616);
struct tree* nctemp13622= p;
int nctemp13624= 17;
int nctemp13626=PtreeSetline(nctemp13622,nctemp13624);
struct tree* nctemp13628= p;
struct nctempchar1 *nctemp13632;
static struct nctempchar1 nctemp13633 = {{ 68}, (char*)"typedef struct nctempfloat4 { int d[4]; float *a;} nctempfloat4; \n\0"};
nctemp13632=&nctemp13633;
nctempchar1* nctemp13630= nctemp13632;
int nctemp13634=CodeEs(nctemp13628,nctemp13630);
struct tree* nctemp13636= p;
int nctemp13638= 18;
int nctemp13640=PtreeSetline(nctemp13636,nctemp13638);
struct tree* nctemp13642= p;
struct nctempchar1 *nctemp13646;
static struct nctempchar1 nctemp13647 = {{ 62}, (char*)"typedef struct nctempint4 { int d[4]; int *a;} nctempint4; \n\0"};
nctemp13646=&nctemp13647;
nctempchar1* nctemp13644= nctemp13646;
int nctemp13648=CodeEs(nctemp13642,nctemp13644);
struct tree* nctemp13650= p;
int nctemp13652= 19;
int nctemp13654=PtreeSetline(nctemp13650,nctemp13652);
struct tree* nctemp13656= p;
struct nctempchar1 *nctemp13660;
static struct nctempchar1 nctemp13661 = {{ 65}, (char*)"typedef struct nctempchar4 { int d[4]; char *a;} nctempchar4; \n\0"};
nctemp13660=&nctemp13661;
nctempchar1* nctemp13658= nctemp13660;
int nctemp13662=CodeEs(nctemp13656,nctemp13658);
struct tree* nctemp13664= p;
int nctemp13666= 20;
int nctemp13668=PtreeSetline(nctemp13664,nctemp13666);
struct tree* nctemp13670= p;
struct nctempchar1 *nctemp13674;
static struct nctempchar1 nctemp13675 = {{ 74}, (char*)"typedef struct nctempcomplex4 { int d[4]; complex *a;} nctempcomplex4; \n\0"};
nctemp13674=&nctemp13675;
nctempchar1* nctemp13672= nctemp13674;
int nctemp13676=CodeEs(nctemp13670,nctemp13672);
struct tree* nctemp13678= p;
struct nctempchar1 *nctemp13682;
static struct nctempchar1 nctemp13683 = {{ 21}, (char*)"#include <stdio.h>\n\0"};
nctemp13682=&nctemp13683;
nctempchar1* nctemp13680= nctemp13682;
int nctemp13684=CodeEs(nctemp13678,nctemp13680);
struct tree* nctemp13686= p;
struct nctempchar1 *nctemp13690;
static struct nctempchar1 nctemp13691 = {{ 17}, (char*)"extern \"C\" {\n\0"};
nctemp13690=&nctemp13691;
nctempchar1* nctemp13688= nctemp13690;
int nctemp13692=CodeEs(nctemp13686,nctemp13688);
struct tree* nctemp13694= p;
struct nctempchar1 *nctemp13698;
static struct nctempchar1 nctemp13699 = {{ 22}, (char*)"#include <stdlib.h>\n\0"};
nctemp13698=&nctemp13699;
nctempchar1* nctemp13696= nctemp13698;
int nctemp13700=CodeEs(nctemp13694,nctemp13696);
struct tree* nctemp13702= p;
struct nctempchar1 *nctemp13706;
static struct nctempchar1 nctemp13707 = {{ 22}, (char*)"#include <string.h>\n\0"};
nctemp13706=&nctemp13707;
nctempchar1* nctemp13704= nctemp13706;
int nctemp13708=CodeEs(nctemp13702,nctemp13704);
struct tree* nctemp13710= p;
struct nctempchar1 *nctemp13714;
static struct nctempchar1 nctemp13715 = {{ 4}, (char*)"}\n\0"};
nctemp13714=&nctemp13715;
nctempchar1* nctemp13712= nctemp13714;
int nctemp13716=CodeEs(nctemp13710,nctemp13712);
struct tree* nctemp13718= p;
struct nctempchar1 *nctemp13722;
static struct nctempchar1 nctemp13723 = {{ 34}, (char*)"#include \"hip/hip_runtime.h\" \n\0"};
nctemp13722=&nctemp13723;
nctempchar1* nctemp13720= nctemp13722;
int nctemp13724=CodeEs(nctemp13718,nctemp13720);
struct tree* nctemp13726= p;
struct nctempchar1 *nctemp13730;
static struct nctempchar1 nctemp13731 = {{ 3}, (char*)"\n\0"};
nctemp13730=&nctemp13731;
nctempchar1* nctemp13728= nctemp13730;
int nctemp13732=CodeEs(nctemp13726,nctemp13728);
struct tree* nctemp13734= p;
struct nctempchar1 *nctemp13738;
static struct nctempchar1 nctemp13739 = {{ 23}, (char*)"void *GpuNew(int n);\n\0"};
nctemp13738=&nctemp13739;
nctempchar1* nctemp13736= nctemp13738;
int nctemp13740=CodeEs(nctemp13734,nctemp13736);
struct tree* nctemp13742= p;
struct nctempchar1 *nctemp13746;
static struct nctempchar1 nctemp13747 = {{ 28}, (char*)"void *GpuDelete(void *f);\n\0"};
nctemp13746=&nctemp13747;
nctempchar1* nctemp13744= nctemp13746;
int nctemp13748=CodeEs(nctemp13742,nctemp13744);
struct tree* nctemp13750= p;
struct nctempchar1 *nctemp13754;
static struct nctempchar1 nctemp13755 = {{ 20}, (char*)"void *GpuError();\n\0"};
nctemp13754=&nctemp13755;
nctempchar1* nctemp13752= nctemp13754;
int nctemp13756=CodeEs(nctemp13750,nctemp13752);
struct tree* nctemp13758= p;
struct nctempchar1 *nctemp13762;
static struct nctempchar1 nctemp13763 = {{ 26}, (char*)"void *RunMalloc(int n);\n\0"};
nctemp13762=&nctemp13763;
nctempchar1* nctemp13760= nctemp13762;
int nctemp13764=CodeEs(nctemp13758,nctemp13760);
struct tree* nctemp13766= p;
struct nctempchar1 *nctemp13770;
static struct nctempchar1 nctemp13771 = {{ 24}, (char*)"int RunFree(void *p);\n\0"};
nctemp13770=&nctemp13771;
nctempchar1* nctemp13768= nctemp13770;
int nctemp13772=CodeEs(nctemp13766,nctemp13768);
return 1;
}
int CodePreamble ()
{
int nctemp13777=CodeGetarch();
int nctemp13774 = (nctemp13777 ==1);
if(nctemp13774)
{
int nctemp13780=CodePreamblecpu();
return 1;
}
else{
int nctemp13785=CodeGetarch();
int nctemp13782 = (nctemp13785 ==2);
if(nctemp13782)
{
int nctemp13788=CodePreamblecuda();
return 1;
}
else{
int nctemp13793=CodeGetarch();
int nctemp13790 = (nctemp13793 ==3);
if(nctemp13790)
{
int nctemp13796=CodePreamblehip();
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
int nctemp13803=CodeGetfdout();
fdo =nctemp13803;
int nctemp13807=CodeGetarch();
int nctemp13804 = (nctemp13807 ==2);
if(nctemp13804)
{
int nctemp13810= fdo;
struct nctempchar1 *nctemp13814;
static struct nctempchar1 nctemp13815 = {{ 4}, (char*)"}\n\0"};
nctemp13814=&nctemp13815;
nctempchar1* nctemp13812= nctemp13814;
int nctemp13816=LibePuts(nctemp13810,nctemp13812);
return 1;
}
else{
int nctemp13821=CodeGetarch();
int nctemp13818 = (nctemp13821 ==3);
if(nctemp13818)
{
int nctemp13824= fdo;
struct nctempchar1 *nctemp13828;
static struct nctempchar1 nctemp13829 = {{ 4}, (char*)"}\n\0"};
nctemp13828=&nctemp13829;
nctempchar1* nctemp13826= nctemp13828;
int nctemp13830=LibePuts(nctemp13824,nctemp13826);
return 1;
}
else{
return 0;
}
}
}
}
