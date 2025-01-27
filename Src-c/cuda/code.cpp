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
;
;
;
;
;
;
;
;
;
;
;
;
;
;
;
;
;
;
;
;
;
;
;
;
;
;
;
;
;
;
;
;
;
;
;
;
;
;
;
;
;
;
;
;
;
;
;
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
static struct nctempchar1 nctemp3864 = {{ 17}, (char*)"nctempstring->a=\0"};
nctemp3863=&nctemp3864;
nctempchar1* nctemp3861= nctemp3863;
int nctemp3865=CodeEs(nctemp3859,nctemp3861);
struct tree* nctemp3867= p;
struct nctempchar1 *nctemp3871;
static struct nctempchar1 nctemp3872 = {{ 3}, (char*)"\"\0"};
nctemp3871=&nctemp3872;
nctempchar1* nctemp3869= nctemp3871;
int nctemp3873=CodeEs(nctemp3867,nctemp3869);
nctempchar1 *nctemp3875 =qual;
int nctemp3874 =(nctemp3875!=0);
if(nctemp3874)
{
struct tree* nctemp3880= p;
nctempchar1* nctemp3882= qual;
int nctemp3885=CodeEs(nctemp3880,nctemp3882);
struct tree* nctemp3887= p;
nctempchar1* nctemp3889= sel;
int nctemp3892=CodeEs(nctemp3887,nctemp3889);
}
struct tree* nctemp3894= p;
nctempchar1* nctemp3896= name;
int nctemp3899=CodeEs(nctemp3894,nctemp3896);
struct tree* nctemp3901= p;
struct nctempchar1 *nctemp3905;
static struct nctempchar1 nctemp3906 = {{ 3}, (char*)"\"\0"};
nctemp3905=&nctemp3906;
nctempchar1* nctemp3903= nctemp3905;
int nctemp3907=CodeEs(nctemp3901,nctemp3903);
struct tree* nctemp3909= p;
struct nctempchar1 *nctemp3913;
static struct nctempchar1 nctemp3914 = {{ 4}, (char*)";\n\0"};
nctemp3913=&nctemp3914;
nctempchar1* nctemp3911= nctemp3913;
int nctemp3915=CodeEs(nctemp3909,nctemp3911);
struct tree* nctemp3917= p;
struct nctempchar1 *nctemp3921;
static struct nctempchar1 nctemp3922 = {{ 20}, (char*)"nctempstring->d[0]=\0"};
nctemp3921=&nctemp3922;
nctempchar1* nctemp3919= nctemp3921;
int nctemp3923=CodeEs(nctemp3917,nctemp3919);
struct tree* nctemp3925= p;
struct nctempchar1 *nctemp3929;
static struct nctempchar1 nctemp3930 = {{ 10}, (char*)"strlen(\"\0"};
nctemp3929=&nctemp3930;
nctempchar1* nctemp3927= nctemp3929;
int nctemp3931=CodeEs(nctemp3925,nctemp3927);
nctempchar1 *nctemp3933 =qual;
int nctemp3932 =(nctemp3933!=0);
if(nctemp3932)
{
struct tree* nctemp3938= p;
nctempchar1* nctemp3940= qual;
int nctemp3943=CodeEs(nctemp3938,nctemp3940);
struct tree* nctemp3945= p;
nctempchar1* nctemp3947= sel;
int nctemp3950=CodeEs(nctemp3945,nctemp3947);
}
struct tree* nctemp3952= p;
nctempchar1* nctemp3954= name;
int nctemp3957=CodeEs(nctemp3952,nctemp3954);
struct tree* nctemp3959= p;
struct nctempchar1 *nctemp3963;
static struct nctempchar1 nctemp3964 = {{ 7}, (char*)"\")+1;\0"};
nctemp3963=&nctemp3964;
nctempchar1* nctemp3961= nctemp3963;
int nctemp3965=CodeEs(nctemp3959,nctemp3961);
struct tree* nctemp3967= p;
struct nctempchar1 *nctemp3971;
static struct nctempchar1 nctemp3972 = {{ 4}, (char*)";\n\0"};
nctemp3971=&nctemp3972;
nctempchar1* nctemp3969= nctemp3971;
int nctemp3973=CodeEs(nctemp3967,nctemp3969);
struct tree* nctemp3975= p;
struct nctempchar1 *nctemp3979;
static struct nctempchar1 nctemp3980 = {{ 13}, (char*)"LibeArrayex(\0"};
nctemp3979=&nctemp3980;
nctempchar1* nctemp3977= nctemp3979;
int nctemp3981=CodeEs(nctemp3975,nctemp3977);
int nctemp3983= line;
int nctemp3985=CodeEd(nctemp3983);
struct tree* nctemp3987= p;
struct nctempchar1 *nctemp3991;
static struct nctempchar1 nctemp3992 = {{ 2}, (char*)",\0"};
nctemp3991=&nctemp3992;
nctempchar1* nctemp3989= nctemp3991;
int nctemp3993=CodeEs(nctemp3987,nctemp3989);
struct tree* nctemp3995= p;
struct nctempchar1 *nctemp3999;
static struct nctempchar1 nctemp4000 = {{ 13}, (char*)"nctempstring\0"};
nctemp3999=&nctemp4000;
nctempchar1* nctemp3997= nctemp3999;
int nctemp4001=CodeEs(nctemp3995,nctemp3997);
struct tree* nctemp4003= p;
struct nctempchar1 *nctemp4007;
static struct nctempchar1 nctemp4008 = {{ 2}, (char*)",\0"};
nctemp4007=&nctemp4008;
nctempchar1* nctemp4005= nctemp4007;
int nctemp4009=CodeEs(nctemp4003,nctemp4005);
struct tree* nctemp4011= p;
nctempchar1* nctemp4013= ival;
int nctemp4016=CodeEs(nctemp4011,nctemp4013);
struct tree* nctemp4018= p;
struct nctempchar1 *nctemp4022;
static struct nctempchar1 nctemp4023 = {{ 2}, (char*)",\0"};
nctemp4022=&nctemp4023;
nctempchar1* nctemp4020= nctemp4022;
int nctemp4024=CodeEs(nctemp4018,nctemp4020);
int nctemp4026= index;
int nctemp4028=CodeEd(nctemp4026);
struct tree* nctemp4030= p;
struct nctempchar1 *nctemp4034;
static struct nctempchar1 nctemp4035 = {{ 2}, (char*)",\0"};
nctemp4034=&nctemp4035;
nctempchar1* nctemp4032= nctemp4034;
int nctemp4036=CodeEs(nctemp4030,nctemp4032);
nctempchar1 *nctemp4038 =qual;
int nctemp4037 =(nctemp4038!=0);
if(nctemp4037)
{
struct tree* nctemp4043= p;
nctempchar1* nctemp4045= qual;
int nctemp4048=CodeEs(nctemp4043,nctemp4045);
struct tree* nctemp4050= p;
nctempchar1* nctemp4052= sel;
int nctemp4055=CodeEs(nctemp4050,nctemp4052);
}
struct tree* nctemp4057= p;
nctempchar1* nctemp4059= name;
int nctemp4062=CodeEs(nctemp4057,nctemp4059);
struct tree* nctemp4064= p;
struct nctempchar1 *nctemp4068;
static struct nctempchar1 nctemp4069 = {{ 5}, (char*)"->d[\0"};
nctemp4068=&nctemp4069;
nctempchar1* nctemp4066= nctemp4068;
int nctemp4070=CodeEs(nctemp4064,nctemp4066);
int nctemp4072= index;
int nctemp4074=CodeEd(nctemp4072);
struct tree* nctemp4076= p;
struct nctempchar1 *nctemp4080;
static struct nctempchar1 nctemp4081 = {{ 2}, (char*)"]\0"};
nctemp4080=&nctemp4081;
nctempchar1* nctemp4078= nctemp4080;
int nctemp4082=CodeEs(nctemp4076,nctemp4078);
struct tree* nctemp4084= p;
struct nctempchar1 *nctemp4088;
static struct nctempchar1 nctemp4089 = {{ 5}, (char*)");\n\0"};
nctemp4088=&nctemp4089;
nctempchar1* nctemp4086= nctemp4088;
int nctemp4090=CodeEs(nctemp4084,nctemp4086);
struct tree* nctemp4092= p;
struct nctempchar1 *nctemp4096;
static struct nctempchar1 nctemp4097 = {{ 4}, (char*)"}\n\0"};
nctemp4096=&nctemp4097;
nctempchar1* nctemp4094= nctemp4096;
int nctemp4098=CodeEs(nctemp4092,nctemp4094);
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
struct tree* nctemp4105= p;
nctempchar1* nctemp4107=PtreeGetdef(nctemp4105);
name=nctemp4107;
nctempchar1* nctemp4113=CodeMktemp();
temp=nctemp4113;
nctempchar1* nctemp4118= name;
struct symbol* nctemp4121=SymLook(nctemp4118);
tp =nctemp4121;
int nctemp4122 = (tp ==0);
if(nctemp4122)
{
nctempchar1* nctemp4127= name;
int nctemp4130=CodeError(nctemp4127);
}
struct tree* nctemp4135= p;
struct tree* nctemp4137=PtreeMvchild(nctemp4135);
sp =nctemp4137;
int nctemp4138 = (sp ==0);
if(nctemp4138)
{
struct tree* nctemp4143= p;
nctempchar1* nctemp4145=PtreeGetdef(nctemp4143);
return nctemp4145;
}
else{
struct tree* nctemp4151= sp;
nctempchar1* nctemp4153=PtreeGetname(nctemp4151);
nctempchar1* nctemp4149= nctemp4153;
struct nctempchar1 *nctemp4156;
static struct nctempchar1 nctemp4157 = {{ 9}, (char*)"exprlist\0"};
nctemp4156=&nctemp4157;
nctempchar1* nctemp4154= nctemp4156;
int nctemp4158=LibeStrcmp(nctemp4149,nctemp4154);
int nctemp4146 = (nctemp4158 ==0);
if(nctemp4146)
{
struct tree* nctemp4161= p;
nctempchar1* nctemp4163=PtreeGetdef(nctemp4161);
return nctemp4163;
}
}
struct symbol* nctemp4168= tp;
int nctemp4170=SymGetrank(nctemp4168);
rank =nctemp4170;
struct tree* nctemp4175= p;
struct tree* nctemp4177=PtreeMvchild(nctemp4175);
p =nctemp4177;
struct tree* nctemp4182= p;
struct tree* nctemp4184=PtreeMvchild(nctemp4182);
p =nctemp4184;
sp =p;
i =0;
int nctemp4193 = (i < rank);
while(nctemp4193){
{
int nctemp4197 = (i ==0);
if(nctemp4197)
{
struct tree* nctemp4206= p;
nctempchar1* nctemp4208=CodeExpr(nctemp4206);
temp2=nctemp4208;
struct tree* nctemp4210= p;
struct tree* nctemp4214= p;
nctempchar1* nctemp4216=PtreeGetype(nctemp4214);
nctempchar1* nctemp4212= nctemp4216;
int nctemp4217=CodeEs(nctemp4210,nctemp4212);
struct tree* nctemp4219= p;
struct nctempchar1 *nctemp4223;
static struct nctempchar1 nctemp4224 = {{ 2}, (char*)" \0"};
nctemp4223=&nctemp4224;
nctempchar1* nctemp4221= nctemp4223;
int nctemp4225=CodeEs(nctemp4219,nctemp4221);
struct tree* nctemp4227= p;
nctempchar1* nctemp4229= temp;
int nctemp4232=CodeEs(nctemp4227,nctemp4229);
struct tree* nctemp4234= p;
struct nctempchar1 *nctemp4238;
static struct nctempchar1 nctemp4239 = {{ 2}, (char*)"=\0"};
nctemp4238=&nctemp4239;
nctempchar1* nctemp4236= nctemp4238;
int nctemp4240=CodeEs(nctemp4234,nctemp4236);
struct tree* nctemp4242= p;
nctempchar1* nctemp4244= temp2;
int nctemp4247=CodeEs(nctemp4242,nctemp4244);
struct tree* nctemp4249= p;
struct nctempchar1 *nctemp4253;
static struct nctempchar1 nctemp4254 = {{ 4}, (char*)";\n\0"};
nctemp4253=&nctemp4254;
nctempchar1* nctemp4251= nctemp4253;
int nctemp4255=CodeEs(nctemp4249,nctemp4251);
int nctemp4257=CodeArraycheck();
if(nctemp4257)
{
struct tree* nctemp4261= p;
int nctemp4263=PtreeGetline(nctemp4261);
int nctemp4259= nctemp4263;
nctempchar1* nctemp4264= qual;
nctempchar1* nctemp4267= sel;
nctempchar1* nctemp4270= name;
nctempchar1* nctemp4273= temp2;
int nctemp4276= i;
int nctemp4278=CodeArrayex(nctemp4259,nctemp4264,nctemp4267,nctemp4270,nctemp4273,nctemp4276);
}
}
else{
struct tree* nctemp4284= sp;
nctempchar1* nctemp4286=CodeExpr(nctemp4284);
temp2=nctemp4286;
struct tree* nctemp4288= p;
nctempchar1* nctemp4290= temp;
int nctemp4293=CodeEs(nctemp4288,nctemp4290);
struct tree* nctemp4295= p;
struct nctempchar1 *nctemp4299;
static struct nctempchar1 nctemp4300 = {{ 2}, (char*)"=\0"};
nctemp4299=&nctemp4300;
nctempchar1* nctemp4297= nctemp4299;
int nctemp4301=CodeEs(nctemp4295,nctemp4297);
struct tree* nctemp4303= p;
nctempchar1* nctemp4305= temp2;
int nctemp4308=CodeEs(nctemp4303,nctemp4305);
struct tree* nctemp4310= p;
struct nctempchar1 *nctemp4314;
static struct nctempchar1 nctemp4315 = {{ 2}, (char*)"*\0"};
nctemp4314=&nctemp4315;
nctempchar1* nctemp4312= nctemp4314;
int nctemp4316=CodeEs(nctemp4310,nctemp4312);
nctempchar1 *nctemp4318 =qual;
int nctemp4317 =(nctemp4318!=0);
if(nctemp4317)
{
struct tree* nctemp4323= p;
nctempchar1* nctemp4325= qual;
int nctemp4328=CodeEs(nctemp4323,nctemp4325);
}
nctempchar1 *nctemp4330 =sel;
int nctemp4329 =(nctemp4330!=0);
if(nctemp4329)
{
struct tree* nctemp4335= p;
nctempchar1* nctemp4337= sel;
int nctemp4340=CodeEs(nctemp4335,nctemp4337);
}
struct tree* nctemp4342= p;
nctempchar1* nctemp4344= name;
int nctemp4347=CodeEs(nctemp4342,nctemp4344);
struct tree* nctemp4349= p;
struct nctempchar1 *nctemp4353;
static struct nctempchar1 nctemp4354 = {{ 4}, (char*)"->d\0"};
nctemp4353=&nctemp4354;
nctempchar1* nctemp4351= nctemp4353;
int nctemp4355=CodeEs(nctemp4349,nctemp4351);
struct tree* nctemp4357= p;
struct nctempchar1 *nctemp4361;
static struct nctempchar1 nctemp4362 = {{ 2}, (char*)"[\0"};
nctemp4361=&nctemp4362;
nctempchar1* nctemp4359= nctemp4361;
int nctemp4363=CodeEs(nctemp4357,nctemp4359);
int nctemp4370 = i - 1;
int nctemp4365= nctemp4370;
int nctemp4371=CodeEd(nctemp4365);
struct tree* nctemp4373= p;
struct nctempchar1 *nctemp4377;
static struct nctempchar1 nctemp4378 = {{ 2}, (char*)"]\0"};
nctemp4377=&nctemp4378;
nctempchar1* nctemp4375= nctemp4377;
int nctemp4379=CodeEs(nctemp4373,nctemp4375);
struct tree* nctemp4381= p;
struct nctempchar1 *nctemp4385;
static struct nctempchar1 nctemp4386 = {{ 2}, (char*)"+\0"};
nctemp4385=&nctemp4386;
nctempchar1* nctemp4383= nctemp4385;
int nctemp4387=CodeEs(nctemp4381,nctemp4383);
struct tree* nctemp4389= p;
nctempchar1* nctemp4391= temp;
int nctemp4394=CodeEs(nctemp4389,nctemp4391);
struct tree* nctemp4396= p;
struct nctempchar1 *nctemp4400;
static struct nctempchar1 nctemp4401 = {{ 4}, (char*)";\n\0"};
nctemp4400=&nctemp4401;
nctempchar1* nctemp4398= nctemp4400;
int nctemp4402=CodeEs(nctemp4396,nctemp4398);
int nctemp4404=CodeArraycheck();
if(nctemp4404)
{
struct tree* nctemp4408= p;
int nctemp4410=PtreeGetline(nctemp4408);
int nctemp4406= nctemp4410;
nctempchar1* nctemp4411= qual;
nctempchar1* nctemp4414= sel;
nctempchar1* nctemp4417= name;
nctempchar1* nctemp4420= temp2;
int nctemp4423= i;
int nctemp4425=CodeArrayex(nctemp4406,nctemp4411,nctemp4414,nctemp4417,nctemp4420,nctemp4423);
}
}
int nctemp4426 = (sp !=0);
if(nctemp4426)
{
struct tree* nctemp4434= sp;
struct tree* nctemp4436=PtreeMvsister(nctemp4434);
sp =nctemp4436;
}
}
int nctemp4445 = i + 1;
i =nctemp4445;
int nctemp4446 = (i < rank);
nctemp4193=nctemp4446;
}
nctempchar1* nctemp4460= name;
int nctemp4463=LibeStrlen(nctemp4460);
nctempchar1* nctemp4465= temp;
int nctemp4468=LibeStrlen(nctemp4465);
int nctemp4469 = nctemp4463 + nctemp4468;
int nctemp4471 = nctemp4469 + 6;
size =nctemp4471;
int nctemp4478=size;
nctempchar1 *nctemp4477;
nctemp4477=(nctempchar1*)RunMalloc(sizeof(nctempchar1));
nctemp4477->d[0]=size;
nctemp4477->a=(char *)RunMalloc(sizeof(char)*nctemp4478);
rval=nctemp4477;
nctempchar1* nctemp4482= name;
nctempchar1* nctemp4485= rval;
int nctemp4488=LibeStrcpy(nctemp4482,nctemp4485);
struct nctempchar1 *nctemp4492;
static struct nctempchar1 nctemp4493 = {{ 4}, (char*)"->a\0"};
nctemp4492=&nctemp4493;
nctempchar1* nctemp4490= nctemp4492;
nctempchar1* nctemp4494= rval;
int nctemp4497=LibeStrcat(nctemp4490,nctemp4494);
struct nctempchar1 *nctemp4501;
static struct nctempchar1 nctemp4502 = {{ 2}, (char*)"[\0"};
nctemp4501=&nctemp4502;
nctempchar1* nctemp4499= nctemp4501;
nctempchar1* nctemp4503= rval;
int nctemp4506=LibeStrcat(nctemp4499,nctemp4503);
nctempchar1* nctemp4508= temp;
nctempchar1* nctemp4511= rval;
int nctemp4514=LibeStrcat(nctemp4508,nctemp4511);
struct nctempchar1 *nctemp4518;
static struct nctempchar1 nctemp4519 = {{ 2}, (char*)"]\0"};
nctemp4518=&nctemp4519;
nctempchar1* nctemp4516= nctemp4518;
nctempchar1* nctemp4520= rval;
int nctemp4523=LibeStrcat(nctemp4516,nctemp4520);
return rval;
}
nctempchar1 * CodeQident (nctempchar1 *qual,nctempchar1 *ident)
{
int lq;
int li;
nctempchar1 *name;
nctempchar1* nctemp4530= qual;
int nctemp4533=LibeStrlen(nctemp4530);
lq =nctemp4533;
nctempchar1* nctemp4538= ident;
int nctemp4541=LibeStrlen(nctemp4538);
li =nctemp4541;
int nctemp4556 = lq + li;
int nctemp4558 = nctemp4556 + 2;
int nctemp4548=nctemp4558;
nctempchar1 *nctemp4547;
nctemp4547=(nctempchar1*)RunMalloc(sizeof(nctempchar1));
int nctemp4566 = lq + li;
int nctemp4568 = nctemp4566 + 2;
nctemp4547->d[0]=nctemp4568;
nctemp4547->a=(char *)RunMalloc(sizeof(char)*nctemp4548);
name=nctemp4547;
nctempchar1* nctemp4570= qual;
nctempchar1* nctemp4573= name;
int nctemp4576=LibeStrcpy(nctemp4570,nctemp4573);
struct nctempchar1 *nctemp4580;
static struct nctempchar1 nctemp4581 = {{ 2}, (char*)".\0"};
nctemp4580=&nctemp4581;
nctempchar1* nctemp4578= nctemp4580;
nctempchar1* nctemp4582= name;
int nctemp4585=LibeStrcat(nctemp4578,nctemp4582);
nctempchar1* nctemp4587= ident;
nctempchar1* nctemp4590= name;
int nctemp4593=LibeStrcat(nctemp4587,nctemp4590);
return name;
}
nctempchar1 * CodeQident2 (nctempchar1 *qual,nctempchar1 *ident)
{
int lq;
int li;
nctempchar1 *name;
nctempchar1* nctemp4600= qual;
int nctemp4603=LibeStrlen(nctemp4600);
lq =nctemp4603;
nctempchar1* nctemp4608= ident;
int nctemp4611=LibeStrlen(nctemp4608);
li =nctemp4611;
int nctemp4626 = lq + li;
int nctemp4628 = nctemp4626 + 3;
int nctemp4618=nctemp4628;
nctempchar1 *nctemp4617;
nctemp4617=(nctempchar1*)RunMalloc(sizeof(nctempchar1));
int nctemp4636 = lq + li;
int nctemp4638 = nctemp4636 + 3;
nctemp4617->d[0]=nctemp4638;
nctemp4617->a=(char *)RunMalloc(sizeof(char)*nctemp4618);
name=nctemp4617;
nctempchar1* nctemp4640= qual;
nctempchar1* nctemp4643= name;
int nctemp4646=LibeStrcpy(nctemp4640,nctemp4643);
struct nctempchar1 *nctemp4650;
static struct nctempchar1 nctemp4651 = {{ 3}, (char*)"->\0"};
nctemp4650=&nctemp4651;
nctempchar1* nctemp4648= nctemp4650;
nctempchar1* nctemp4652= name;
int nctemp4655=LibeStrcat(nctemp4648,nctemp4652);
nctempchar1* nctemp4657= ident;
nctempchar1* nctemp4660= name;
int nctemp4663=LibeStrcat(nctemp4657,nctemp4660);
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
struct tree* nctemp4676= p;
nctempchar1* nctemp4678=PtreeGetstruct(nctemp4676);
nctempchar1* nctemp4674= nctemp4678;
struct nctempchar1 *nctemp4681;
static struct nctempchar1 nctemp4682 = {{ 7}, (char*)"struct\0"};
nctemp4681=&nctemp4682;
nctempchar1* nctemp4679= nctemp4681;
int nctemp4683=LibeStrcmp(nctemp4674,nctemp4679);
int nctemp4671 = (nctemp4683 ==1);
if(nctemp4671)
{
struct tree* nctemp4690= p;
nctempchar1* nctemp4692=PtreeGetarray(nctemp4690);
nctempchar1* nctemp4688= nctemp4692;
struct nctempchar1 *nctemp4695;
static struct nctempchar1 nctemp4696 = {{ 6}, (char*)"array\0"};
nctemp4695=&nctemp4696;
nctempchar1* nctemp4693= nctemp4695;
int nctemp4697=LibeStrcmp(nctemp4688,nctemp4693);
int nctemp4685 = (nctemp4697 ==1);
if(nctemp4685)
{
struct tree* nctemp4704= p;
nctempchar1* nctemp4706= qual;
struct nctempchar1 *nctemp4711;
static struct nctempchar1 nctemp4712 = {{ 2}, (char*)".\0"};
nctemp4711=&nctemp4712;
nctempchar1* nctemp4709= nctemp4711;
nctempchar1* nctemp4713=CodeArray(nctemp4704,nctemp4706,nctemp4709);
qual=nctemp4713;
struct tree* nctemp4718= p;
struct tree* nctemp4720=PtreeMvchild(nctemp4718);
np =nctemp4720;
int nctemp4721 = (np ==0);
if(nctemp4721)
{
return qual;
}
struct tree* nctemp4731= np;
struct tree* nctemp4733=PtreeMvsister(nctemp4731);
np =nctemp4733;
int nctemp4734 = (np ==0);
if(nctemp4734)
{
return qual;
}
}
else{
struct tree* nctemp4745= p;
nctempchar1* nctemp4747=PtreeGetdef(nctemp4745);
qual=nctemp4747;
struct tree* nctemp4755= p;
struct tree* nctemp4757=PtreeMvchild(nctemp4755);
np =nctemp4757;
int nctemp4748 = (np ==0);
if(nctemp4748)
{
return qual;
}
}
struct tree* nctemp4766= np;
nctempchar1* nctemp4768=PtreeGetarray(nctemp4766);
nctempchar1* nctemp4764= nctemp4768;
struct nctempchar1 *nctemp4771;
static struct nctempchar1 nctemp4772 = {{ 6}, (char*)"array\0"};
nctemp4771=&nctemp4772;
nctempchar1* nctemp4769= nctemp4771;
int nctemp4773=LibeStrcmp(nctemp4764,nctemp4769);
int nctemp4761 = (nctemp4773 ==1);
if(nctemp4761)
{
struct symbol* nctemp4779=SymGetltp();
tp =nctemp4779;
struct symbol* nctemp4784=SymGetetp();
up =nctemp4784;
struct tree* nctemp4791= p;
nctempchar1* nctemp4793=PtreeGetdef(nctemp4791);
nctempchar1* nctemp4789= nctemp4793;
struct symbol* nctemp4794=SymLook(nctemp4789);
uup =nctemp4794;
struct symbol* nctemp4801= uup;
nctempchar1* nctemp4803=SymGetype(nctemp4801);
nctempchar1* nctemp4799= nctemp4803;
struct symbol* nctemp4804=SymLook(nctemp4799);
uup =nctemp4804;
struct symbol* nctemp4808= uup;
struct symbol* nctemp4810=SymGetable(nctemp4808);
struct symbol* nctemp4806= nctemp4810;
struct symbol* nctemp4811=SymSetltp(nctemp4806);
struct tree* nctemp4817= p;
nctempchar1* nctemp4819=PtreeGetarray(nctemp4817);
nctempchar1* nctemp4815= nctemp4819;
struct nctempchar1 *nctemp4822;
static struct nctempchar1 nctemp4823 = {{ 6}, (char*)"array\0"};
nctemp4822=&nctemp4823;
nctempchar1* nctemp4820= nctemp4822;
int nctemp4824=LibeStrcmp(nctemp4815,nctemp4820);
int nctemp4812 = (nctemp4824 ==1);
if(nctemp4812)
{
struct tree* nctemp4831= np;
nctempchar1* nctemp4833= qual;
struct nctempchar1 *nctemp4838;
static struct nctempchar1 nctemp4839 = {{ 2}, (char*)".\0"};
nctemp4838=&nctemp4839;
nctempchar1* nctemp4836= nctemp4838;
nctempchar1* nctemp4840=CodeArray(nctemp4831,nctemp4833,nctemp4836);
name=nctemp4840;
}
else{
struct tree* nctemp4846= np;
nctempchar1* nctemp4848= qual;
struct nctempchar1 *nctemp4853;
static struct nctempchar1 nctemp4854 = {{ 3}, (char*)"->\0"};
nctemp4853=&nctemp4854;
nctempchar1* nctemp4851= nctemp4853;
nctempchar1* nctemp4855=CodeArray(nctemp4846,nctemp4848,nctemp4851);
name=nctemp4855;
}
struct symbol* nctemp4857= tp;
struct symbol* nctemp4859=SymSetltp(nctemp4857);
struct symbol* nctemp4861= up;
struct symbol* nctemp4863=SymSetetp(nctemp4861);
}
else{
struct tree* nctemp4869= np;
nctempchar1* nctemp4871=PtreeGetdef(nctemp4869);
name=nctemp4871;
}
struct tree* nctemp4877= p;
nctempchar1* nctemp4879=PtreeGetarray(nctemp4877);
nctempchar1* nctemp4875= nctemp4879;
struct nctempchar1 *nctemp4882;
static struct nctempchar1 nctemp4883 = {{ 6}, (char*)"array\0"};
nctemp4882=&nctemp4883;
nctempchar1* nctemp4880= nctemp4882;
int nctemp4884=LibeStrcmp(nctemp4875,nctemp4880);
int nctemp4872 = (nctemp4884 ==1);
if(nctemp4872)
{
nctempchar1* nctemp4887= qual;
nctempchar1* nctemp4890= name;
nctempchar1* nctemp4893=CodeQident(nctemp4887,nctemp4890);
return nctemp4893;
}
else{
nctempchar1* nctemp4895= qual;
nctempchar1* nctemp4898= name;
nctempchar1* nctemp4901=CodeQident2(nctemp4895,nctemp4898);
return nctemp4901;
}
}
else{
struct tree* nctemp4907= p;
nctempchar1* nctemp4909=PtreeGetarray(nctemp4907);
nctempchar1* nctemp4905= nctemp4909;
struct nctempchar1 *nctemp4912;
static struct nctempchar1 nctemp4913 = {{ 6}, (char*)"array\0"};
nctemp4912=&nctemp4913;
nctempchar1* nctemp4910= nctemp4912;
int nctemp4914=LibeStrcmp(nctemp4905,nctemp4910);
int nctemp4902 = (nctemp4914 ==1);
if(nctemp4902)
{
name=(0);
qual=(0);
struct tree* nctemp4931= p;
nctempchar1* nctemp4933= qual;
nctempchar1* nctemp4936= name;
nctempchar1* nctemp4939=CodeArray(nctemp4931,nctemp4933,nctemp4936);
qual=nctemp4939;
return qual;
}
else{
struct tree* nctemp4943= p;
nctempchar1* nctemp4945=PtreeGetdef(nctemp4943);
return nctemp4945;
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
nctempchar1* nctemp4951=CodeMktemp();
pointer=nctemp4951;
nctempchar1* nctemp4957=CodeMktemp();
totdim=nctemp4957;
struct tree* nctemp4962= p;
struct tree* nctemp4964=PtreeMvchild(nctemp4962);
p =nctemp4964;
struct tree* nctemp4970= p;
nctempchar1* nctemp4972=PtreeGetdef(nctemp4970);
type=nctemp4972;
struct tree* nctemp4978= p;
nctempchar1* nctemp4980=PtreeGetstruct(nctemp4978);
structflag=nctemp4980;
struct tree* nctemp4986= p;
nctempchar1* nctemp4988=PtreeGetarray(nctemp4986);
arrayflag=nctemp4988;
struct tree* nctemp4994= p;
nctempchar1* nctemp4996=PtreeGetarray(nctemp4994);
nctempchar1* nctemp4992= nctemp4996;
struct nctempchar1 *nctemp4999;
static struct nctempchar1 nctemp5000 = {{ 6}, (char*)"array\0"};
nctemp4999=&nctemp5000;
nctempchar1* nctemp4997= nctemp4999;
int nctemp5001=LibeStrcmp(nctemp4992,nctemp4997);
int nctemp4989 = (nctemp5001 ==1);
if(nctemp4989)
{
struct tree* nctemp5007= p;
struct tree* nctemp5009=PtreeMvchild(nctemp5007);
p =nctemp5009;
struct tree* nctemp5014= p;
struct tree* nctemp5016=PtreeMvchild(nctemp5014);
p =nctemp5016;
struct tree* nctemp5021= p;
struct tree* nctemp5023=PtreeMvchild(nctemp5021);
p =nctemp5023;
struct tree* nctemp5028= p;
struct tree* nctemp5030=PtreeMvchild(nctemp5028);
p =nctemp5030;
sp =p;
top =p;
rank =1;
struct tree* nctemp5050= p;
struct tree* nctemp5052=PtreeMvsister(nctemp5050);
p =nctemp5052;
int nctemp5043 = (p !=0);
int nctemp5054=nctemp5043;
while(nctemp5054)
{{
int nctemp5063 = rank + 1;
rank =nctemp5063;
}
struct tree* nctemp5071= p;
struct tree* nctemp5073=PtreeMvsister(nctemp5071);
p =nctemp5073;
int nctemp5064 = (p !=0);
nctemp5054=nctemp5064;}int nctemp5075 = (rank > 4);
if(nctemp5075)
{
struct nctempchar1 *nctemp5082;
static struct nctempchar1 nctemp5083 = {{ 29}, (char*)"Array dimension is too large\0"};
nctemp5082=&nctemp5083;
nctempchar1* nctemp5080= nctemp5082;
int nctemp5084=CodeError(nctemp5080);
}
p =sp;
i =0;
int nctemp5093 = (p !=0);
int nctemp5097=nctemp5093;
while(nctemp5097)
{{
struct tree* nctemp5103= p;
nctempchar1* nctemp5105=CodeExpr(nctemp5103);
dim=nctemp5105;
int nctemp5106 = (i ==0);
if(nctemp5106)
{
struct tree* nctemp5111= p;
struct tree* nctemp5115= p;
nctempchar1* nctemp5117=PtreeGetype(nctemp5115);
nctempchar1* nctemp5113= nctemp5117;
int nctemp5118=CodeEs(nctemp5111,nctemp5113);
struct tree* nctemp5120= p;
struct nctempchar1 *nctemp5124;
static struct nctempchar1 nctemp5125 = {{ 2}, (char*)" \0"};
nctemp5124=&nctemp5125;
nctempchar1* nctemp5122= nctemp5124;
int nctemp5126=CodeEs(nctemp5120,nctemp5122);
struct tree* nctemp5128= p;
nctempchar1* nctemp5130= totdim;
int nctemp5133=CodeEs(nctemp5128,nctemp5130);
struct tree* nctemp5135= p;
struct nctempchar1 *nctemp5139;
static struct nctempchar1 nctemp5140 = {{ 2}, (char*)"=\0"};
nctemp5139=&nctemp5140;
nctempchar1* nctemp5137= nctemp5139;
int nctemp5141=CodeEs(nctemp5135,nctemp5137);
struct tree* nctemp5143= p;
nctempchar1* nctemp5145= dim;
int nctemp5148=CodeEs(nctemp5143,nctemp5145);
}
else{
struct tree* nctemp5150= p;
nctempchar1* nctemp5152= totdim;
int nctemp5155=CodeEs(nctemp5150,nctemp5152);
struct tree* nctemp5157= p;
struct nctempchar1 *nctemp5161;
static struct nctempchar1 nctemp5162 = {{ 2}, (char*)"=\0"};
nctemp5161=&nctemp5162;
nctempchar1* nctemp5159= nctemp5161;
int nctemp5163=CodeEs(nctemp5157,nctemp5159);
struct tree* nctemp5165= p;
nctempchar1* nctemp5167= totdim;
int nctemp5170=CodeEs(nctemp5165,nctemp5167);
struct tree* nctemp5172= p;
struct nctempchar1 *nctemp5176;
static struct nctempchar1 nctemp5177 = {{ 2}, (char*)"*\0"};
nctemp5176=&nctemp5177;
nctempchar1* nctemp5174= nctemp5176;
int nctemp5178=CodeEs(nctemp5172,nctemp5174);
struct tree* nctemp5180= p;
nctempchar1* nctemp5182= dim;
int nctemp5185=CodeEs(nctemp5180,nctemp5182);
}
struct tree* nctemp5187= p;
struct nctempchar1 *nctemp5191;
static struct nctempchar1 nctemp5192 = {{ 4}, (char*)";\n\0"};
nctemp5191=&nctemp5192;
nctempchar1* nctemp5189= nctemp5191;
int nctemp5193=CodeEs(nctemp5187,nctemp5189);
int nctemp5202 = i + 1;
i =nctemp5202;
struct tree* nctemp5207= p;
struct tree* nctemp5209=PtreeMvsister(nctemp5207);
p =nctemp5209;
}
int nctemp5210 = (p !=0);
nctemp5097=nctemp5210;}}
nctempchar1* nctemp5220= structflag;
struct nctempchar1 *nctemp5225;
static struct nctempchar1 nctemp5226 = {{ 7}, (char*)"struct\0"};
nctemp5225=&nctemp5226;
nctempchar1* nctemp5223= nctemp5225;
int nctemp5227=LibeStrcmp(nctemp5220,nctemp5223);
int nctemp5217 = (nctemp5227 ==1);
nctempchar1* nctemp5233= arrayflag;
struct nctempchar1 *nctemp5238;
static struct nctempchar1 nctemp5239 = {{ 6}, (char*)"array\0"};
nctemp5238=&nctemp5239;
nctempchar1* nctemp5236= nctemp5238;
int nctemp5240=LibeStrcmp(nctemp5233,nctemp5236);
int nctemp5230 = (nctemp5240 ==0);
int nctemp5214 = (nctemp5217 && nctemp5230);
if(nctemp5214)
{
struct tree* nctemp5243= p;
struct nctempchar1 *nctemp5247;
static struct nctempchar1 nctemp5248 = {{ 8}, (char*)"struct \0"};
nctemp5247=&nctemp5248;
nctempchar1* nctemp5245= nctemp5247;
int nctemp5249=CodeEs(nctemp5243,nctemp5245);
struct tree* nctemp5251= p;
nctempchar1* nctemp5253= type;
int nctemp5256=CodeEs(nctemp5251,nctemp5253);
struct tree* nctemp5258= p;
struct nctempchar1 *nctemp5262;
static struct nctempchar1 nctemp5263 = {{ 3}, (char*)" *\0"};
nctemp5262=&nctemp5263;
nctempchar1* nctemp5260= nctemp5262;
int nctemp5264=CodeEs(nctemp5258,nctemp5260);
struct tree* nctemp5266= p;
nctempchar1* nctemp5268= pointer;
int nctemp5271=CodeEs(nctemp5266,nctemp5268);
struct tree* nctemp5273= p;
struct nctempchar1 *nctemp5277;
static struct nctempchar1 nctemp5278 = {{ 2}, (char*)"=\0"};
nctemp5277=&nctemp5278;
nctempchar1* nctemp5275= nctemp5277;
int nctemp5279=CodeEs(nctemp5273,nctemp5275);
struct tree* nctemp5281= p;
struct nctempchar1 *nctemp5285;
static struct nctempchar1 nctemp5286 = {{ 2}, (char*)"(\0"};
nctemp5285=&nctemp5286;
nctempchar1* nctemp5283= nctemp5285;
int nctemp5287=CodeEs(nctemp5281,nctemp5283);
struct tree* nctemp5289= p;
struct nctempchar1 *nctemp5293;
static struct nctempchar1 nctemp5294 = {{ 8}, (char*)"struct \0"};
nctemp5293=&nctemp5294;
nctempchar1* nctemp5291= nctemp5293;
int nctemp5295=CodeEs(nctemp5289,nctemp5291);
struct tree* nctemp5297= p;
nctempchar1* nctemp5299= type;
int nctemp5302=CodeEs(nctemp5297,nctemp5299);
struct tree* nctemp5304= p;
struct nctempchar1 *nctemp5308;
static struct nctempchar1 nctemp5309 = {{ 3}, (char*)"*)\0"};
nctemp5308=&nctemp5309;
nctempchar1* nctemp5306= nctemp5308;
int nctemp5310=CodeEs(nctemp5304,nctemp5306);
struct tree* nctemp5312= p;
struct nctempchar1 *nctemp5316;
static struct nctempchar1 nctemp5317 = {{ 11}, (char*)"RunMalloc(\0"};
nctemp5316=&nctemp5317;
nctempchar1* nctemp5314= nctemp5316;
int nctemp5318=CodeEs(nctemp5312,nctemp5314);
struct tree* nctemp5320= p;
struct nctempchar1 *nctemp5324;
static struct nctempchar1 nctemp5325 = {{ 8}, (char*)"sizeof(\0"};
nctemp5324=&nctemp5325;
nctempchar1* nctemp5322= nctemp5324;
int nctemp5326=CodeEs(nctemp5320,nctemp5322);
struct tree* nctemp5328= p;
struct nctempchar1 *nctemp5332;
static struct nctempchar1 nctemp5333 = {{ 8}, (char*)"struct \0"};
nctemp5332=&nctemp5333;
nctempchar1* nctemp5330= nctemp5332;
int nctemp5334=CodeEs(nctemp5328,nctemp5330);
struct tree* nctemp5336= p;
nctempchar1* nctemp5338= type;
int nctemp5341=CodeEs(nctemp5336,nctemp5338);
struct tree* nctemp5343= p;
struct nctempchar1 *nctemp5347;
static struct nctempchar1 nctemp5348 = {{ 6}, (char*)"));\n\0"};
nctemp5347=&nctemp5348;
nctempchar1* nctemp5345= nctemp5347;
int nctemp5349=CodeEs(nctemp5343,nctemp5345);
}
nctempchar1* nctemp5356= structflag;
struct nctempchar1 *nctemp5361;
static struct nctempchar1 nctemp5362 = {{ 7}, (char*)"struct\0"};
nctemp5361=&nctemp5362;
nctempchar1* nctemp5359= nctemp5361;
int nctemp5363=LibeStrcmp(nctemp5356,nctemp5359);
int nctemp5353 = (nctemp5363 ==1);
nctempchar1* nctemp5369= arrayflag;
struct nctempchar1 *nctemp5374;
static struct nctempchar1 nctemp5375 = {{ 6}, (char*)"array\0"};
nctemp5374=&nctemp5375;
nctempchar1* nctemp5372= nctemp5374;
int nctemp5376=LibeStrcmp(nctemp5369,nctemp5372);
int nctemp5366 = (nctemp5376 ==1);
int nctemp5350 = (nctemp5353 && nctemp5366);
if(nctemp5350)
{
struct tree* nctemp5379= p;
struct nctempchar1 *nctemp5383;
static struct nctempchar1 nctemp5384 = {{ 14}, (char*)"struct nctemp\0"};
nctemp5383=&nctemp5384;
nctempchar1* nctemp5381= nctemp5383;
int nctemp5385=CodeEs(nctemp5379,nctemp5381);
struct tree* nctemp5387= p;
nctempchar1* nctemp5389= type;
int nctemp5392=CodeEs(nctemp5387,nctemp5389);
int nctemp5394= rank;
int nctemp5396=CodeEd(nctemp5394);
struct tree* nctemp5398= p;
struct nctempchar1 *nctemp5402;
static struct nctempchar1 nctemp5403 = {{ 3}, (char*)" *\0"};
nctemp5402=&nctemp5403;
nctempchar1* nctemp5400= nctemp5402;
int nctemp5404=CodeEs(nctemp5398,nctemp5400);
struct tree* nctemp5406= p;
nctempchar1* nctemp5408= pointer;
int nctemp5411=CodeEs(nctemp5406,nctemp5408);
struct tree* nctemp5413= p;
struct nctempchar1 *nctemp5417;
static struct nctempchar1 nctemp5418 = {{ 4}, (char*)";\n\0"};
nctemp5417=&nctemp5418;
nctempchar1* nctemp5415= nctemp5417;
int nctemp5419=CodeEs(nctemp5413,nctemp5415);
struct tree* nctemp5421= p;
nctempchar1* nctemp5423= pointer;
int nctemp5426=CodeEs(nctemp5421,nctemp5423);
struct tree* nctemp5428= p;
struct nctempchar1 *nctemp5432;
static struct nctempchar1 nctemp5433 = {{ 2}, (char*)"=\0"};
nctemp5432=&nctemp5433;
nctempchar1* nctemp5430= nctemp5432;
int nctemp5434=CodeEs(nctemp5428,nctemp5430);
struct tree* nctemp5436= p;
struct nctempchar1 *nctemp5440;
static struct nctempchar1 nctemp5441 = {{ 2}, (char*)"(\0"};
nctemp5440=&nctemp5441;
nctempchar1* nctemp5438= nctemp5440;
int nctemp5442=CodeEs(nctemp5436,nctemp5438);
struct tree* nctemp5444= p;
struct nctempchar1 *nctemp5448;
static struct nctempchar1 nctemp5449 = {{ 14}, (char*)"struct nctemp\0"};
nctemp5448=&nctemp5449;
nctempchar1* nctemp5446= nctemp5448;
int nctemp5450=CodeEs(nctemp5444,nctemp5446);
struct tree* nctemp5452= p;
nctempchar1* nctemp5454= type;
int nctemp5457=CodeEs(nctemp5452,nctemp5454);
int nctemp5459= rank;
int nctemp5461=CodeEd(nctemp5459);
struct tree* nctemp5463= p;
struct nctempchar1 *nctemp5467;
static struct nctempchar1 nctemp5468 = {{ 3}, (char*)"*)\0"};
nctemp5467=&nctemp5468;
nctempchar1* nctemp5465= nctemp5467;
int nctemp5469=CodeEs(nctemp5463,nctemp5465);
struct tree* nctemp5471= p;
struct nctempchar1 *nctemp5475;
static struct nctempchar1 nctemp5476 = {{ 11}, (char*)"RunMalloc(\0"};
nctemp5475=&nctemp5476;
nctempchar1* nctemp5473= nctemp5475;
int nctemp5477=CodeEs(nctemp5471,nctemp5473);
struct tree* nctemp5479= p;
struct nctempchar1 *nctemp5483;
static struct nctempchar1 nctemp5484 = {{ 21}, (char*)"sizeof(struct nctemp\0"};
nctemp5483=&nctemp5484;
nctempchar1* nctemp5481= nctemp5483;
int nctemp5485=CodeEs(nctemp5479,nctemp5481);
struct tree* nctemp5487= p;
nctempchar1* nctemp5489= type;
int nctemp5492=CodeEs(nctemp5487,nctemp5489);
int nctemp5494= rank;
int nctemp5496=CodeEd(nctemp5494);
struct tree* nctemp5498= p;
struct nctempchar1 *nctemp5502;
static struct nctempchar1 nctemp5503 = {{ 6}, (char*)"));\n\0"};
nctemp5502=&nctemp5503;
nctempchar1* nctemp5500= nctemp5502;
int nctemp5504=CodeEs(nctemp5498,nctemp5500);
i =0;
p =sp;
int nctemp5513 = (p !=0);
int nctemp5517=nctemp5513;
while(nctemp5517)
{{
struct tree* nctemp5523= sp;
nctempchar1* nctemp5525=CodeExpr(nctemp5523);
dim=nctemp5525;
struct tree* nctemp5527= sp;
nctempchar1* nctemp5529= pointer;
int nctemp5532=CodeEs(nctemp5527,nctemp5529);
struct tree* nctemp5534= sp;
struct nctempchar1 *nctemp5538;
static struct nctempchar1 nctemp5539 = {{ 4}, (char*)"->d\0"};
nctemp5538=&nctemp5539;
nctempchar1* nctemp5536= nctemp5538;
int nctemp5540=CodeEs(nctemp5534,nctemp5536);
struct tree* nctemp5542= sp;
struct nctempchar1 *nctemp5546;
static struct nctempchar1 nctemp5547 = {{ 2}, (char*)"[\0"};
nctemp5546=&nctemp5547;
nctempchar1* nctemp5544= nctemp5546;
int nctemp5548=CodeEs(nctemp5542,nctemp5544);
int nctemp5550= i;
int nctemp5552=CodeEd(nctemp5550);
struct tree* nctemp5554= sp;
struct nctempchar1 *nctemp5558;
static struct nctempchar1 nctemp5559 = {{ 3}, (char*)"]=\0"};
nctemp5558=&nctemp5559;
nctempchar1* nctemp5556= nctemp5558;
int nctemp5560=CodeEs(nctemp5554,nctemp5556);
struct tree* nctemp5562= sp;
nctempchar1* nctemp5564= dim;
int nctemp5567=CodeEs(nctemp5562,nctemp5564);
struct tree* nctemp5569= sp;
struct nctempchar1 *nctemp5573;
static struct nctempchar1 nctemp5574 = {{ 4}, (char*)";\n\0"};
nctemp5573=&nctemp5574;
nctempchar1* nctemp5571= nctemp5573;
int nctemp5575=CodeEs(nctemp5569,nctemp5571);
int nctemp5584 = i + 1;
i =nctemp5584;
struct tree* nctemp5589= p;
struct tree* nctemp5591=PtreeMvsister(nctemp5589);
p =nctemp5591;
}
int nctemp5592 = (p !=0);
nctemp5517=nctemp5592;}struct tree* nctemp5597= sp;
nctempchar1* nctemp5599= pointer;
int nctemp5602=CodeEs(nctemp5597,nctemp5599);
struct tree* nctemp5604= sp;
struct nctempchar1 *nctemp5608;
static struct nctempchar1 nctemp5609 = {{ 4}, (char*)"->a\0"};
nctemp5608=&nctemp5609;
nctempchar1* nctemp5606= nctemp5608;
int nctemp5610=CodeEs(nctemp5604,nctemp5606);
struct tree* nctemp5612= sp;
struct nctempchar1 *nctemp5616;
static struct nctempchar1 nctemp5617 = {{ 2}, (char*)"=\0"};
nctemp5616=&nctemp5617;
nctempchar1* nctemp5614= nctemp5616;
int nctemp5618=CodeEs(nctemp5612,nctemp5614);
struct tree* nctemp5620= sp;
struct nctempchar1 *nctemp5624;
static struct nctempchar1 nctemp5625 = {{ 9}, (char*)"(struct \0"};
nctemp5624=&nctemp5625;
nctempchar1* nctemp5622= nctemp5624;
int nctemp5626=CodeEs(nctemp5620,nctemp5622);
struct tree* nctemp5628= sp;
nctempchar1* nctemp5630= type;
int nctemp5633=CodeEs(nctemp5628,nctemp5630);
struct tree* nctemp5635= sp;
struct nctempchar1 *nctemp5639;
static struct nctempchar1 nctemp5640 = {{ 3}, (char*)"*)\0"};
nctemp5639=&nctemp5640;
nctempchar1* nctemp5637= nctemp5639;
int nctemp5641=CodeEs(nctemp5635,nctemp5637);
struct tree* nctemp5643= sp;
struct nctempchar1 *nctemp5647;
static struct nctempchar1 nctemp5648 = {{ 18}, (char*)"RunMalloc(sizeof(\0"};
nctemp5647=&nctemp5648;
nctempchar1* nctemp5645= nctemp5647;
int nctemp5649=CodeEs(nctemp5643,nctemp5645);
struct tree* nctemp5651= sp;
struct nctempchar1 *nctemp5655;
static struct nctempchar1 nctemp5656 = {{ 8}, (char*)"struct \0"};
nctemp5655=&nctemp5656;
nctempchar1* nctemp5653= nctemp5655;
int nctemp5657=CodeEs(nctemp5651,nctemp5653);
struct tree* nctemp5659= sp;
nctempchar1* nctemp5661= type;
int nctemp5664=CodeEs(nctemp5659,nctemp5661);
struct tree* nctemp5666= sp;
struct nctempchar1 *nctemp5670;
static struct nctempchar1 nctemp5671 = {{ 2}, (char*)")\0"};
nctemp5670=&nctemp5671;
nctempchar1* nctemp5668= nctemp5670;
int nctemp5672=CodeEs(nctemp5666,nctemp5668);
struct tree* nctemp5674= sp;
struct nctempchar1 *nctemp5678;
static struct nctempchar1 nctemp5679 = {{ 2}, (char*)"*\0"};
nctemp5678=&nctemp5679;
nctempchar1* nctemp5676= nctemp5678;
int nctemp5680=CodeEs(nctemp5674,nctemp5676);
struct tree* nctemp5682= sp;
nctempchar1* nctemp5684= totdim;
int nctemp5687=CodeEs(nctemp5682,nctemp5684);
struct tree* nctemp5689= sp;
struct nctempchar1 *nctemp5693;
static struct nctempchar1 nctemp5694 = {{ 5}, (char*)");\n\0"};
nctemp5693=&nctemp5694;
nctempchar1* nctemp5691= nctemp5693;
int nctemp5695=CodeEs(nctemp5689,nctemp5691);
}
nctempchar1* nctemp5702= structflag;
struct nctempchar1 *nctemp5707;
static struct nctempchar1 nctemp5708 = {{ 7}, (char*)"struct\0"};
nctemp5707=&nctemp5708;
nctempchar1* nctemp5705= nctemp5707;
int nctemp5709=LibeStrcmp(nctemp5702,nctemp5705);
int nctemp5699 = (nctemp5709 ==0);
nctempchar1* nctemp5715= arrayflag;
struct nctempchar1 *nctemp5720;
static struct nctempchar1 nctemp5721 = {{ 6}, (char*)"array\0"};
nctemp5720=&nctemp5721;
nctempchar1* nctemp5718= nctemp5720;
int nctemp5722=LibeStrcmp(nctemp5715,nctemp5718);
int nctemp5712 = (nctemp5722 ==1);
int nctemp5696 = (nctemp5699 && nctemp5712);
if(nctemp5696)
{
int nctemp5725= 4;
int nctemp5727=LibeFlush(nctemp5725);
struct tree* nctemp5729= sp;
struct nctempchar1 *nctemp5733;
static struct nctempchar1 nctemp5734 = {{ 7}, (char*)"nctemp\0"};
nctemp5733=&nctemp5734;
nctempchar1* nctemp5731= nctemp5733;
int nctemp5735=CodeEs(nctemp5729,nctemp5731);
struct tree* nctemp5737= sp;
nctempchar1* nctemp5739= type;
int nctemp5742=CodeEs(nctemp5737,nctemp5739);
int nctemp5744= rank;
int nctemp5746=CodeEd(nctemp5744);
struct tree* nctemp5748= sp;
struct nctempchar1 *nctemp5752;
static struct nctempchar1 nctemp5753 = {{ 3}, (char*)" *\0"};
nctemp5752=&nctemp5753;
nctempchar1* nctemp5750= nctemp5752;
int nctemp5754=CodeEs(nctemp5748,nctemp5750);
struct tree* nctemp5756= sp;
nctempchar1* nctemp5758= pointer;
int nctemp5761=CodeEs(nctemp5756,nctemp5758);
struct tree* nctemp5763= sp;
struct nctempchar1 *nctemp5767;
static struct nctempchar1 nctemp5768 = {{ 4}, (char*)";\n\0"};
nctemp5767=&nctemp5768;
nctempchar1* nctemp5765= nctemp5767;
int nctemp5769=CodeEs(nctemp5763,nctemp5765);
p =top;
i =0;
struct tree* nctemp5779= p;
nctempchar1* nctemp5781= pointer;
int nctemp5784=CodeEs(nctemp5779,nctemp5781);
struct tree* nctemp5786= p;
struct nctempchar1 *nctemp5790;
static struct nctempchar1 nctemp5791 = {{ 2}, (char*)"=\0"};
nctemp5790=&nctemp5791;
nctempchar1* nctemp5788= nctemp5790;
int nctemp5792=CodeEs(nctemp5786,nctemp5788);
struct tree* nctemp5794= p;
struct nctempchar1 *nctemp5798;
static struct nctempchar1 nctemp5799 = {{ 2}, (char*)"(\0"};
nctemp5798=&nctemp5799;
nctempchar1* nctemp5796= nctemp5798;
int nctemp5800=CodeEs(nctemp5794,nctemp5796);
struct tree* nctemp5802= p;
struct nctempchar1 *nctemp5806;
static struct nctempchar1 nctemp5807 = {{ 7}, (char*)"nctemp\0"};
nctemp5806=&nctemp5807;
nctempchar1* nctemp5804= nctemp5806;
int nctemp5808=CodeEs(nctemp5802,nctemp5804);
struct tree* nctemp5810= p;
nctempchar1* nctemp5812= type;
int nctemp5815=CodeEs(nctemp5810,nctemp5812);
int nctemp5817= rank;
int nctemp5819=CodeEd(nctemp5817);
struct tree* nctemp5821= p;
struct nctempchar1 *nctemp5825;
static struct nctempchar1 nctemp5826 = {{ 3}, (char*)"*)\0"};
nctemp5825=&nctemp5826;
nctempchar1* nctemp5823= nctemp5825;
int nctemp5827=CodeEs(nctemp5821,nctemp5823);
struct tree* nctemp5829= p;
struct nctempchar1 *nctemp5833;
static struct nctempchar1 nctemp5834 = {{ 11}, (char*)"RunMalloc(\0"};
nctemp5833=&nctemp5834;
nctempchar1* nctemp5831= nctemp5833;
int nctemp5835=CodeEs(nctemp5829,nctemp5831);
struct tree* nctemp5837= p;
struct nctempchar1 *nctemp5841;
static struct nctempchar1 nctemp5842 = {{ 14}, (char*)"sizeof(nctemp\0"};
nctemp5841=&nctemp5842;
nctempchar1* nctemp5839= nctemp5841;
int nctemp5843=CodeEs(nctemp5837,nctemp5839);
struct tree* nctemp5845= p;
nctempchar1* nctemp5847= type;
int nctemp5850=CodeEs(nctemp5845,nctemp5847);
int nctemp5852= rank;
int nctemp5854=CodeEd(nctemp5852);
struct tree* nctemp5856= p;
struct nctempchar1 *nctemp5860;
static struct nctempchar1 nctemp5861 = {{ 6}, (char*)"));\n\0"};
nctemp5860=&nctemp5861;
nctempchar1* nctemp5858= nctemp5860;
int nctemp5862=CodeEs(nctemp5856,nctemp5858);
int nctemp5863 = (p !=0);
int nctemp5867=nctemp5863;
while(nctemp5867)
{{
struct tree* nctemp5873= p;
nctempchar1* nctemp5875=CodeExpr(nctemp5873);
dim=nctemp5875;
struct tree* nctemp5877= p;
nctempchar1* nctemp5879= pointer;
int nctemp5882=CodeEs(nctemp5877,nctemp5879);
struct tree* nctemp5884= p;
struct nctempchar1 *nctemp5888;
static struct nctempchar1 nctemp5889 = {{ 4}, (char*)"->d\0"};
nctemp5888=&nctemp5889;
nctempchar1* nctemp5886= nctemp5888;
int nctemp5890=CodeEs(nctemp5884,nctemp5886);
struct tree* nctemp5892= p;
struct nctempchar1 *nctemp5896;
static struct nctempchar1 nctemp5897 = {{ 2}, (char*)"[\0"};
nctemp5896=&nctemp5897;
nctempchar1* nctemp5894= nctemp5896;
int nctemp5898=CodeEs(nctemp5892,nctemp5894);
int nctemp5900= i;
int nctemp5902=CodeEd(nctemp5900);
struct tree* nctemp5904= p;
struct nctempchar1 *nctemp5908;
static struct nctempchar1 nctemp5909 = {{ 3}, (char*)"]=\0"};
nctemp5908=&nctemp5909;
nctempchar1* nctemp5906= nctemp5908;
int nctemp5910=CodeEs(nctemp5904,nctemp5906);
struct tree* nctemp5912= p;
nctempchar1* nctemp5914= dim;
int nctemp5917=CodeEs(nctemp5912,nctemp5914);
struct tree* nctemp5919= p;
struct nctempchar1 *nctemp5923;
static struct nctempchar1 nctemp5924 = {{ 4}, (char*)";\n\0"};
nctemp5923=&nctemp5924;
nctempchar1* nctemp5921= nctemp5923;
int nctemp5925=CodeEs(nctemp5919,nctemp5921);
int nctemp5934 = i + 1;
i =nctemp5934;
struct tree* nctemp5939= p;
struct tree* nctemp5941=PtreeMvsister(nctemp5939);
p =nctemp5941;
}
int nctemp5942 = (p !=0);
nctemp5867=nctemp5942;}p =top;
struct tree* nctemp5951= p;
nctempchar1* nctemp5953= pointer;
int nctemp5956=CodeEs(nctemp5951,nctemp5953);
struct tree* nctemp5958= p;
struct nctempchar1 *nctemp5962;
static struct nctempchar1 nctemp5963 = {{ 4}, (char*)"->a\0"};
nctemp5962=&nctemp5963;
nctempchar1* nctemp5960= nctemp5962;
int nctemp5964=CodeEs(nctemp5958,nctemp5960);
struct tree* nctemp5966= p;
struct nctempchar1 *nctemp5970;
static struct nctempchar1 nctemp5971 = {{ 3}, (char*)"=(\0"};
nctemp5970=&nctemp5971;
nctempchar1* nctemp5968= nctemp5970;
int nctemp5972=CodeEs(nctemp5966,nctemp5968);
struct tree* nctemp5974= p;
nctempchar1* nctemp5976= type;
int nctemp5979=CodeEs(nctemp5974,nctemp5976);
struct tree* nctemp5981= p;
struct nctempchar1 *nctemp5985;
static struct nctempchar1 nctemp5986 = {{ 4}, (char*)" *)\0"};
nctemp5985=&nctemp5986;
nctempchar1* nctemp5983= nctemp5985;
int nctemp5987=CodeEs(nctemp5981,nctemp5983);
struct tree* nctemp5989= p;
struct nctempchar1 *nctemp5993;
static struct nctempchar1 nctemp5994 = {{ 18}, (char*)"RunMalloc(sizeof(\0"};
nctemp5993=&nctemp5994;
nctempchar1* nctemp5991= nctemp5993;
int nctemp5995=CodeEs(nctemp5989,nctemp5991);
struct tree* nctemp5997= p;
nctempchar1* nctemp5999= type;
int nctemp6002=CodeEs(nctemp5997,nctemp5999);
struct tree* nctemp6004= p;
struct nctempchar1 *nctemp6008;
static struct nctempchar1 nctemp6009 = {{ 2}, (char*)")\0"};
nctemp6008=&nctemp6009;
nctempchar1* nctemp6006= nctemp6008;
int nctemp6010=CodeEs(nctemp6004,nctemp6006);
struct tree* nctemp6012= p;
struct nctempchar1 *nctemp6016;
static struct nctempchar1 nctemp6017 = {{ 2}, (char*)"*\0"};
nctemp6016=&nctemp6017;
nctempchar1* nctemp6014= nctemp6016;
int nctemp6018=CodeEs(nctemp6012,nctemp6014);
struct tree* nctemp6020= p;
nctempchar1* nctemp6022= totdim;
int nctemp6025=CodeEs(nctemp6020,nctemp6022);
struct tree* nctemp6027= p;
struct nctempchar1 *nctemp6031;
static struct nctempchar1 nctemp6032 = {{ 5}, (char*)");\n\0"};
nctemp6031=&nctemp6032;
nctempchar1* nctemp6029= nctemp6031;
int nctemp6033=CodeEs(nctemp6027,nctemp6029);
}
return pointer;
}
nctempchar1 * CodeDelete (struct tree* p)
{
nctempchar1 *tmp;
struct tree* nctemp6040= p;
struct tree* nctemp6042=PtreeMvchild(nctemp6040);
p =nctemp6042;
struct tree* nctemp6047= p;
struct tree* nctemp6049=PtreeMvchild(nctemp6047);
p =nctemp6049;
struct tree* nctemp6055= p;
nctempchar1* nctemp6057=CodeBinexpr(nctemp6055);
tmp=nctemp6057;
struct tree* nctemp6061= p;
nctempchar1* nctemp6063=PtreeGetref(nctemp6061);
nctempchar1* nctemp6059= nctemp6063;
struct nctempchar1 *nctemp6066;
static struct nctempchar1 nctemp6067 = {{ 5}, (char*)"aref\0"};
nctemp6066=&nctemp6067;
nctempchar1* nctemp6064= nctemp6066;
int nctemp6068=LibeStrcmp(nctemp6059,nctemp6064);
if(nctemp6068)
{
struct tree* nctemp6070= p;
struct nctempchar1 *nctemp6074;
static struct nctempchar1 nctemp6075 = {{ 9}, (char*)"RunFree(\0"};
nctemp6074=&nctemp6075;
nctempchar1* nctemp6072= nctemp6074;
int nctemp6076=CodeEs(nctemp6070,nctemp6072);
struct tree* nctemp6078= p;
nctempchar1* nctemp6080= tmp;
int nctemp6083=CodeEs(nctemp6078,nctemp6080);
struct tree* nctemp6085= p;
struct nctempchar1 *nctemp6089;
static struct nctempchar1 nctemp6090 = {{ 8}, (char*)"->a);\n\0"};
nctemp6089=&nctemp6090;
nctempchar1* nctemp6087= nctemp6089;
int nctemp6091=CodeEs(nctemp6085,nctemp6087);
struct tree* nctemp6093= p;
struct nctempchar1 *nctemp6097;
static struct nctempchar1 nctemp6098 = {{ 9}, (char*)"RunFree(\0"};
nctemp6097=&nctemp6098;
nctempchar1* nctemp6095= nctemp6097;
int nctemp6099=CodeEs(nctemp6093,nctemp6095);
struct tree* nctemp6101= p;
nctempchar1* nctemp6103= tmp;
int nctemp6106=CodeEs(nctemp6101,nctemp6103);
struct tree* nctemp6108= p;
struct nctempchar1 *nctemp6112;
static struct nctempchar1 nctemp6113 = {{ 5}, (char*)");\n\0"};
nctemp6112=&nctemp6113;
nctempchar1* nctemp6110= nctemp6112;
int nctemp6114=CodeEs(nctemp6108,nctemp6110);
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
nctempchar1* nctemp6122=CodeMktemp();
tempr=nctemp6122;
struct tree* nctemp6127= p;
struct tree* nctemp6129=PtreeMvchild(nctemp6127);
np =nctemp6129;
struct tree* nctemp6135= np;
nctempchar1* nctemp6137=CodeExpr(nctemp6135);
temp=nctemp6137;
struct tree* nctemp6142= np;
struct tree* nctemp6144=PtreeMvsister(nctemp6142);
sp =nctemp6144;
struct tree* nctemp6150= sp;
nctempchar1* nctemp6152=CodeExpr(nctemp6150);
index=nctemp6152;
struct tree* nctemp6154= p;
struct tree* nctemp6158= p;
nctempchar1* nctemp6160=PtreeGetype(nctemp6158);
nctempchar1* nctemp6156= nctemp6160;
int nctemp6161=CodeEs(nctemp6154,nctemp6156);
struct tree* nctemp6163= p;
struct nctempchar1 *nctemp6167;
static struct nctempchar1 nctemp6168 = {{ 2}, (char*)" \0"};
nctemp6167=&nctemp6168;
nctempchar1* nctemp6165= nctemp6167;
int nctemp6169=CodeEs(nctemp6163,nctemp6165);
struct tree* nctemp6171= p;
nctempchar1* nctemp6173= tempr;
int nctemp6176=CodeEs(nctemp6171,nctemp6173);
struct tree* nctemp6178= p;
struct nctempchar1 *nctemp6182;
static struct nctempchar1 nctemp6183 = {{ 2}, (char*)"=\0"};
nctemp6182=&nctemp6183;
nctempchar1* nctemp6180= nctemp6182;
int nctemp6184=CodeEs(nctemp6178,nctemp6180);
struct tree* nctemp6186= p;
nctempchar1* nctemp6188= temp;
int nctemp6191=CodeEs(nctemp6186,nctemp6188);
struct tree* nctemp6193= p;
struct nctempchar1 *nctemp6197;
static struct nctempchar1 nctemp6198 = {{ 4}, (char*)"->d\0"};
nctemp6197=&nctemp6198;
nctempchar1* nctemp6195= nctemp6197;
int nctemp6199=CodeEs(nctemp6193,nctemp6195);
struct tree* nctemp6201= p;
struct nctempchar1 *nctemp6205;
static struct nctempchar1 nctemp6206 = {{ 2}, (char*)"[\0"};
nctemp6205=&nctemp6206;
nctempchar1* nctemp6203= nctemp6205;
int nctemp6207=CodeEs(nctemp6201,nctemp6203);
struct tree* nctemp6209= p;
nctempchar1* nctemp6211= index;
int nctemp6214=CodeEs(nctemp6209,nctemp6211);
struct tree* nctemp6216= p;
struct nctempchar1 *nctemp6220;
static struct nctempchar1 nctemp6221 = {{ 3}, (char*)"];\0"};
nctemp6220=&nctemp6221;
nctempchar1* nctemp6218= nctemp6220;
int nctemp6222=CodeEs(nctemp6216,nctemp6218);
return tempr;
}
nctempchar1 * CodeCmplx (struct tree* p)
{
struct tree* np;
struct tree* sp;
nctempchar1 *q;
nctempchar1 *r;
nctempchar1 *tempr;
nctempchar1* nctemp6230=CodeMktemp();
tempr=nctemp6230;
struct tree* nctemp6235= p;
struct tree* nctemp6237=PtreeMvchild(nctemp6235);
np =nctemp6237;
struct tree* nctemp6242= np;
struct tree* nctemp6244=PtreeMvchild(nctemp6242);
np =nctemp6244;
struct tree* nctemp6250= np;
nctempchar1* nctemp6252=CodeExpr(nctemp6250);
q=nctemp6252;
struct tree* nctemp6257= np;
struct tree* nctemp6259=PtreeMvsister(nctemp6257);
sp =nctemp6259;
struct tree* nctemp6265= sp;
nctempchar1* nctemp6267=CodeExpr(nctemp6265);
r=nctemp6267;
struct tree* nctemp6269= p;
struct tree* nctemp6273= p;
nctempchar1* nctemp6275=PtreeGetype(nctemp6273);
nctempchar1* nctemp6271= nctemp6275;
int nctemp6276=CodeEs(nctemp6269,nctemp6271);
struct tree* nctemp6278= p;
struct nctempchar1 *nctemp6282;
static struct nctempchar1 nctemp6283 = {{ 2}, (char*)" \0"};
nctemp6282=&nctemp6283;
nctempchar1* nctemp6280= nctemp6282;
int nctemp6284=CodeEs(nctemp6278,nctemp6280);
struct tree* nctemp6286= p;
nctempchar1* nctemp6288= tempr;
int nctemp6291=CodeEs(nctemp6286,nctemp6288);
struct tree* nctemp6293= p;
struct nctempchar1 *nctemp6297;
static struct nctempchar1 nctemp6298 = {{ 3}, (char*)".r\0"};
nctemp6297=&nctemp6298;
nctempchar1* nctemp6295= nctemp6297;
int nctemp6299=CodeEs(nctemp6293,nctemp6295);
struct tree* nctemp6301= p;
struct nctempchar1 *nctemp6305;
static struct nctempchar1 nctemp6306 = {{ 3}, (char*)" =\0"};
nctemp6305=&nctemp6306;
nctempchar1* nctemp6303= nctemp6305;
int nctemp6307=CodeEs(nctemp6301,nctemp6303);
struct tree* nctemp6309= p;
nctempchar1* nctemp6311= q;
int nctemp6314=CodeEs(nctemp6309,nctemp6311);
struct tree* nctemp6316= p;
struct nctempchar1 *nctemp6320;
static struct nctempchar1 nctemp6321 = {{ 2}, (char*)";\0"};
nctemp6320=&nctemp6321;
nctempchar1* nctemp6318= nctemp6320;
int nctemp6322=CodeEs(nctemp6316,nctemp6318);
struct tree* nctemp6324= p;
struct tree* nctemp6328= p;
nctempchar1* nctemp6330=PtreeGetype(nctemp6328);
nctempchar1* nctemp6326= nctemp6330;
int nctemp6331=CodeEs(nctemp6324,nctemp6326);
struct tree* nctemp6333= p;
struct nctempchar1 *nctemp6337;
static struct nctempchar1 nctemp6338 = {{ 2}, (char*)" \0"};
nctemp6337=&nctemp6338;
nctempchar1* nctemp6335= nctemp6337;
int nctemp6339=CodeEs(nctemp6333,nctemp6335);
struct tree* nctemp6341= p;
nctempchar1* nctemp6343= tempr;
int nctemp6346=CodeEs(nctemp6341,nctemp6343);
struct tree* nctemp6348= p;
struct nctempchar1 *nctemp6352;
static struct nctempchar1 nctemp6353 = {{ 3}, (char*)".i\0"};
nctemp6352=&nctemp6353;
nctempchar1* nctemp6350= nctemp6352;
int nctemp6354=CodeEs(nctemp6348,nctemp6350);
struct tree* nctemp6356= p;
struct nctempchar1 *nctemp6360;
static struct nctempchar1 nctemp6361 = {{ 2}, (char*)"=\0"};
nctemp6360=&nctemp6361;
nctempchar1* nctemp6358= nctemp6360;
int nctemp6362=CodeEs(nctemp6356,nctemp6358);
struct tree* nctemp6364= p;
nctempchar1* nctemp6366= r;
int nctemp6369=CodeEs(nctemp6364,nctemp6366);
struct tree* nctemp6371= p;
struct nctempchar1 *nctemp6375;
static struct nctempchar1 nctemp6376 = {{ 2}, (char*)";\0"};
nctemp6375=&nctemp6376;
nctempchar1* nctemp6373= nctemp6375;
int nctemp6377=CodeEs(nctemp6371,nctemp6373);
return tempr;
}
nctempchar1 * CodeIm (struct tree* p)
{
struct tree* np;
nctempchar1 *q;
nctempchar1 *tempr;
nctempchar1* nctemp6385=CodeMktemp();
tempr=nctemp6385;
struct tree* nctemp6390= p;
struct tree* nctemp6392=PtreeMvchild(nctemp6390);
np =nctemp6392;
struct tree* nctemp6398= np;
nctempchar1* nctemp6400=CodeExpr(nctemp6398);
q=nctemp6400;
struct tree* nctemp6402= p;
struct tree* nctemp6406= p;
nctempchar1* nctemp6408=PtreeGetype(nctemp6406);
nctempchar1* nctemp6404= nctemp6408;
int nctemp6409=CodeEs(nctemp6402,nctemp6404);
struct tree* nctemp6411= p;
struct nctempchar1 *nctemp6415;
static struct nctempchar1 nctemp6416 = {{ 2}, (char*)" \0"};
nctemp6415=&nctemp6416;
nctempchar1* nctemp6413= nctemp6415;
int nctemp6417=CodeEs(nctemp6411,nctemp6413);
struct tree* nctemp6419= p;
nctempchar1* nctemp6421= tempr;
int nctemp6424=CodeEs(nctemp6419,nctemp6421);
struct tree* nctemp6426= p;
struct nctempchar1 *nctemp6430;
static struct nctempchar1 nctemp6431 = {{ 3}, (char*)" =\0"};
nctemp6430=&nctemp6431;
nctempchar1* nctemp6428= nctemp6430;
int nctemp6432=CodeEs(nctemp6426,nctemp6428);
struct tree* nctemp6434= p;
nctempchar1* nctemp6436= q;
int nctemp6439=CodeEs(nctemp6434,nctemp6436);
struct tree* nctemp6441= p;
struct nctempchar1 *nctemp6445;
static struct nctempchar1 nctemp6446 = {{ 5}, (char*)".i  \0"};
nctemp6445=&nctemp6446;
nctempchar1* nctemp6443= nctemp6445;
int nctemp6447=CodeEs(nctemp6441,nctemp6443);
struct tree* nctemp6449= p;
struct nctempchar1 *nctemp6453;
static struct nctempchar1 nctemp6454 = {{ 4}, (char*)";\n\0"};
nctemp6453=&nctemp6454;
nctempchar1* nctemp6451= nctemp6453;
int nctemp6455=CodeEs(nctemp6449,nctemp6451);
return tempr;
}
nctempchar1 * CodeRe (struct tree* p)
{
struct tree* np;
nctempchar1 *q;
nctempchar1 *tmp;
struct tree* nctemp6462= p;
struct tree* nctemp6464=PtreeMvchild(nctemp6462);
np =nctemp6464;
struct tree* nctemp6470= np;
nctempchar1* nctemp6472=CodeExpr(nctemp6470);
q=nctemp6472;
nctempchar1* nctemp6478=CodeMktemp();
tmp=nctemp6478;
struct tree* nctemp6480= p;
struct tree* nctemp6484= p;
nctempchar1* nctemp6486=PtreeGetype(nctemp6484);
nctempchar1* nctemp6482= nctemp6486;
int nctemp6487=CodeEs(nctemp6480,nctemp6482);
struct tree* nctemp6489= p;
struct nctempchar1 *nctemp6493;
static struct nctempchar1 nctemp6494 = {{ 2}, (char*)" \0"};
nctemp6493=&nctemp6494;
nctempchar1* nctemp6491= nctemp6493;
int nctemp6495=CodeEs(nctemp6489,nctemp6491);
struct tree* nctemp6497= p;
nctempchar1* nctemp6499= tmp;
int nctemp6502=CodeEs(nctemp6497,nctemp6499);
struct tree* nctemp6504= p;
struct nctempchar1 *nctemp6508;
static struct nctempchar1 nctemp6509 = {{ 3}, (char*)" =\0"};
nctemp6508=&nctemp6509;
nctempchar1* nctemp6506= nctemp6508;
int nctemp6510=CodeEs(nctemp6504,nctemp6506);
struct tree* nctemp6512= p;
nctempchar1* nctemp6514= q;
int nctemp6517=CodeEs(nctemp6512,nctemp6514);
struct tree* nctemp6519= p;
struct nctempchar1 *nctemp6523;
static struct nctempchar1 nctemp6524 = {{ 5}, (char*)".r  \0"};
nctemp6523=&nctemp6524;
nctempchar1* nctemp6521= nctemp6523;
int nctemp6525=CodeEs(nctemp6519,nctemp6521);
struct tree* nctemp6527= p;
struct nctempchar1 *nctemp6531;
static struct nctempchar1 nctemp6532 = {{ 4}, (char*)";\n\0"};
nctemp6531=&nctemp6532;
nctempchar1* nctemp6529= nctemp6531;
int nctemp6533=CodeEs(nctemp6527,nctemp6529);
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
struct tree* nctemp6546= p;
nctempchar1* nctemp6548=PtreeGetdef(nctemp6546);
nctempchar1* nctemp6544= nctemp6548;
struct symbol* nctemp6551=SymGetetp();
struct symbol* nctemp6549= nctemp6551;
struct symbol* nctemp6552=SymLookup(nctemp6544,nctemp6549);
tp =nctemp6552;
struct tree* nctemp6557= p;
struct tree* nctemp6559=PtreeMvchild(nctemp6557);
sp =nctemp6559;
int nctemp6560 = (sp !=0);
if(nctemp6560)
{
struct tree* nctemp6569= sp;
nctempchar1* nctemp6571=PtreeGetname(nctemp6569);
nctempchar1* nctemp6567= nctemp6571;
struct nctempchar1 *nctemp6574;
static struct nctempchar1 nctemp6575 = {{ 9}, (char*)"exprlist\0"};
nctemp6574=&nctemp6575;
nctempchar1* nctemp6572= nctemp6574;
int nctemp6576=LibeStrcmp(nctemp6567,nctemp6572);
int nctemp6564 = (nctemp6576 ==1);
if(nctemp6564)
{
struct tree* nctemp6582= sp;
struct tree* nctemp6584=PtreeMvchild(nctemp6582);
sp =nctemp6584;
}
}
int nctemp6585 = (sp !=0);
int nctemp6589=nctemp6585;
while(nctemp6589)
{{
nctempchar1* nctemp6595=CodeMktemp();
ntemp=nctemp6595;
struct tree* nctemp6597= sp;
nctempchar1* nctemp6599= ntemp;
int nctemp6602=PtreeSetempr(nctemp6597,nctemp6599);
struct tree* nctemp6608= sp;
nctempchar1* nctemp6610=CodeExpr(nctemp6608);
temp=nctemp6610;
struct tree* nctemp6616= sp;
nctempchar1* nctemp6618=PtreeGetref(nctemp6616);
nctempchar1* nctemp6614= nctemp6618;
struct nctempchar1 *nctemp6621;
static struct nctempchar1 nctemp6622 = {{ 5}, (char*)"aref\0"};
nctemp6621=&nctemp6622;
nctempchar1* nctemp6619= nctemp6621;
int nctemp6623=LibeStrcmp(nctemp6614,nctemp6619);
int nctemp6611 = (nctemp6623 ==1);
if(nctemp6611)
{
struct tree* nctemp6626= sp;
struct nctempchar1 *nctemp6630;
static struct nctempchar1 nctemp6631 = {{ 7}, (char*)"nctemp\0"};
nctemp6630=&nctemp6631;
nctempchar1* nctemp6628= nctemp6630;
int nctemp6632=CodeEs(nctemp6626,nctemp6628);
struct tree* nctemp6634= sp;
struct tree* nctemp6638= sp;
nctempchar1* nctemp6640=PtreeGetype(nctemp6638);
nctempchar1* nctemp6636= nctemp6640;
int nctemp6641=CodeEs(nctemp6634,nctemp6636);
struct tree* nctemp6645= sp;
int nctemp6647=PtreeGetrank(nctemp6645);
int nctemp6643= nctemp6647;
int nctemp6648=CodeEd(nctemp6643);
struct tree* nctemp6650= sp;
struct nctempchar1 *nctemp6654;
static struct nctempchar1 nctemp6655 = {{ 2}, (char*)"*\0"};
nctemp6654=&nctemp6655;
nctempchar1* nctemp6652= nctemp6654;
int nctemp6656=CodeEs(nctemp6650,nctemp6652);
}
else{
struct tree* nctemp6662= sp;
nctempchar1* nctemp6664=PtreeGetref(nctemp6662);
nctempchar1* nctemp6660= nctemp6664;
struct nctempchar1 *nctemp6667;
static struct nctempchar1 nctemp6668 = {{ 5}, (char*)"sref\0"};
nctemp6667=&nctemp6668;
nctempchar1* nctemp6665= nctemp6667;
int nctemp6669=LibeStrcmp(nctemp6660,nctemp6665);
int nctemp6657 = (nctemp6669 ==1);
if(nctemp6657)
{
struct tree* nctemp6672= sp;
struct nctempchar1 *nctemp6676;
static struct nctempchar1 nctemp6677 = {{ 8}, (char*)"struct \0"};
nctemp6676=&nctemp6677;
nctempchar1* nctemp6674= nctemp6676;
int nctemp6678=CodeEs(nctemp6672,nctemp6674);
struct tree* nctemp6680= sp;
struct tree* nctemp6684= sp;
nctempchar1* nctemp6686=PtreeGetype(nctemp6684);
nctempchar1* nctemp6682= nctemp6686;
int nctemp6687=CodeEs(nctemp6680,nctemp6682);
struct tree* nctemp6689= sp;
struct nctempchar1 *nctemp6693;
static struct nctempchar1 nctemp6694 = {{ 2}, (char*)"*\0"};
nctemp6693=&nctemp6694;
nctempchar1* nctemp6691= nctemp6693;
int nctemp6695=CodeEs(nctemp6689,nctemp6691);
}
else{
struct tree* nctemp6697= sp;
struct tree* nctemp6701= sp;
nctempchar1* nctemp6703=PtreeGetype(nctemp6701);
nctempchar1* nctemp6699= nctemp6703;
int nctemp6704=CodeEs(nctemp6697,nctemp6699);
}
}
struct tree* nctemp6706= sp;
struct nctempchar1 *nctemp6710;
static struct nctempchar1 nctemp6711 = {{ 2}, (char*)" \0"};
nctemp6710=&nctemp6711;
nctempchar1* nctemp6708= nctemp6710;
int nctemp6712=CodeEs(nctemp6706,nctemp6708);
struct tree* nctemp6714= sp;
nctempchar1* nctemp6716= ntemp;
int nctemp6719=CodeEs(nctemp6714,nctemp6716);
struct tree* nctemp6721= sp;
struct nctempchar1 *nctemp6725;
static struct nctempchar1 nctemp6726 = {{ 3}, (char*)"= \0"};
nctemp6725=&nctemp6726;
nctempchar1* nctemp6723= nctemp6725;
int nctemp6727=CodeEs(nctemp6721,nctemp6723);
struct tree* nctemp6729= sp;
nctempchar1* nctemp6731= temp;
int nctemp6734=CodeEs(nctemp6729,nctemp6731);
struct tree* nctemp6736= sp;
struct nctempchar1 *nctemp6740;
static struct nctempchar1 nctemp6741 = {{ 4}, (char*)";\n\0"};
nctemp6740=&nctemp6741;
nctempchar1* nctemp6738= nctemp6740;
int nctemp6742=CodeEs(nctemp6736,nctemp6738);
struct tree* nctemp6747= sp;
struct tree* nctemp6749=PtreeMvsister(nctemp6747);
sp =nctemp6749;
}
int nctemp6750 = (sp !=0);
nctemp6589=nctemp6750;}nctempchar1* nctemp6759=CodeMktemp();
ntemp=nctemp6759;
struct tree* nctemp6765= p;
nctempchar1* nctemp6767=PtreeGetref(nctemp6765);
nctempchar1* nctemp6763= nctemp6767;
struct nctempchar1 *nctemp6770;
static struct nctempchar1 nctemp6771 = {{ 5}, (char*)"aref\0"};
nctemp6770=&nctemp6771;
nctempchar1* nctemp6768= nctemp6770;
int nctemp6772=LibeStrcmp(nctemp6763,nctemp6768);
int nctemp6760 = (nctemp6772 ==1);
if(nctemp6760)
{
struct tree* nctemp6775= p;
struct nctempchar1 *nctemp6779;
static struct nctempchar1 nctemp6780 = {{ 7}, (char*)"nctemp\0"};
nctemp6779=&nctemp6780;
nctempchar1* nctemp6777= nctemp6779;
int nctemp6781=CodeEs(nctemp6775,nctemp6777);
struct tree* nctemp6783= p;
struct tree* nctemp6787= p;
nctempchar1* nctemp6789=PtreeGetype(nctemp6787);
nctempchar1* nctemp6785= nctemp6789;
int nctemp6790=CodeEs(nctemp6783,nctemp6785);
struct tree* nctemp6794= p;
int nctemp6796=PtreeGetrank(nctemp6794);
int nctemp6792= nctemp6796;
int nctemp6797=CodeEd(nctemp6792);
struct tree* nctemp6799= p;
struct nctempchar1 *nctemp6803;
static struct nctempchar1 nctemp6804 = {{ 2}, (char*)"*\0"};
nctemp6803=&nctemp6804;
nctempchar1* nctemp6801= nctemp6803;
int nctemp6805=CodeEs(nctemp6799,nctemp6801);
}
else{
struct tree* nctemp6811= p;
nctempchar1* nctemp6813=PtreeGetref(nctemp6811);
nctempchar1* nctemp6809= nctemp6813;
struct nctempchar1 *nctemp6816;
static struct nctempchar1 nctemp6817 = {{ 5}, (char*)"sref\0"};
nctemp6816=&nctemp6817;
nctempchar1* nctemp6814= nctemp6816;
int nctemp6818=LibeStrcmp(nctemp6809,nctemp6814);
int nctemp6806 = (nctemp6818 ==1);
if(nctemp6806)
{
struct tree* nctemp6821= p;
struct nctempchar1 *nctemp6825;
static struct nctempchar1 nctemp6826 = {{ 8}, (char*)"struct \0"};
nctemp6825=&nctemp6826;
nctempchar1* nctemp6823= nctemp6825;
int nctemp6827=CodeEs(nctemp6821,nctemp6823);
struct tree* nctemp6829= p;
struct tree* nctemp6833= p;
nctempchar1* nctemp6835=PtreeGetype(nctemp6833);
nctempchar1* nctemp6831= nctemp6835;
int nctemp6836=CodeEs(nctemp6829,nctemp6831);
struct tree* nctemp6838= p;
struct nctempchar1 *nctemp6842;
static struct nctempchar1 nctemp6843 = {{ 2}, (char*)"*\0"};
nctemp6842=&nctemp6843;
nctempchar1* nctemp6840= nctemp6842;
int nctemp6844=CodeEs(nctemp6838,nctemp6840);
}
else{
struct tree* nctemp6846= p;
struct tree* nctemp6850= p;
nctempchar1* nctemp6852=PtreeGetype(nctemp6850);
nctempchar1* nctemp6848= nctemp6852;
int nctemp6853=CodeEs(nctemp6846,nctemp6848);
}
}
struct tree* nctemp6855= p;
struct nctempchar1 *nctemp6859;
static struct nctempchar1 nctemp6860 = {{ 2}, (char*)" \0"};
nctemp6859=&nctemp6860;
nctempchar1* nctemp6857= nctemp6859;
int nctemp6861=CodeEs(nctemp6855,nctemp6857);
struct tree* nctemp6863= p;
nctempchar1* nctemp6865= ntemp;
int nctemp6868=CodeEs(nctemp6863,nctemp6865);
struct tree* nctemp6870= p;
struct nctempchar1 *nctemp6874;
static struct nctempchar1 nctemp6875 = {{ 2}, (char*)"=\0"};
nctemp6874=&nctemp6875;
nctempchar1* nctemp6872= nctemp6874;
int nctemp6876=CodeEs(nctemp6870,nctemp6872);
struct tree* nctemp6878= p;
struct symbol* nctemp6882= tp;
nctempchar1* nctemp6884=SymGetname(nctemp6882);
nctempchar1* nctemp6880= nctemp6884;
int nctemp6885=CodeEs(nctemp6878,nctemp6880);
struct tree* nctemp6887= p;
struct nctempchar1 *nctemp6891;
static struct nctempchar1 nctemp6892 = {{ 2}, (char*)"(\0"};
nctemp6891=&nctemp6892;
nctempchar1* nctemp6889= nctemp6891;
int nctemp6893=CodeEs(nctemp6887,nctemp6889);
struct tree* nctemp6898= p;
struct tree* nctemp6900=PtreeMvchild(nctemp6898);
sp =nctemp6900;
int nctemp6901 = (sp !=0);
if(nctemp6901)
{
struct tree* nctemp6909= sp;
struct tree* nctemp6911=PtreeMvchild(nctemp6909);
sp =nctemp6911;
}
int nctemp6912 = (sp !=0);
int nctemp6916=nctemp6912;
while(nctemp6916)
{{
struct tree* nctemp6918= p;
struct tree* nctemp6922= sp;
nctempchar1* nctemp6924=PtreeGetempr(nctemp6922);
nctempchar1* nctemp6920= nctemp6924;
int nctemp6925=CodeEs(nctemp6918,nctemp6920);
struct tree* nctemp6933= sp;
struct tree* nctemp6935=PtreeMvsister(nctemp6933);
sp =nctemp6935;
int nctemp6926 = (sp !=0);
if(nctemp6926)
{
struct tree* nctemp6938= p;
struct nctempchar1 *nctemp6942;
static struct nctempchar1 nctemp6943 = {{ 2}, (char*)",\0"};
nctemp6942=&nctemp6943;
nctempchar1* nctemp6940= nctemp6942;
int nctemp6944=CodeEs(nctemp6938,nctemp6940);
}
int nctemp6953 = noargs + 1;
noargs =nctemp6953;
}
int nctemp6954 = (sp !=0);
nctemp6916=nctemp6954;}struct tree* nctemp6959= p;
struct nctempchar1 *nctemp6963;
static struct nctempchar1 nctemp6964 = {{ 5}, (char*)");\n\0"};
nctemp6963=&nctemp6964;
nctempchar1* nctemp6961= nctemp6963;
int nctemp6965=CodeEs(nctemp6959,nctemp6961);
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
nctempchar1* nctemp6973=CodeMktemp();
pointer=nctemp6973;
nctempchar1* nctemp6979=CodeMktemp();
descr=nctemp6979;
struct tree* nctemp6985= p;
nctempchar1* nctemp6987=PtreeGetype(nctemp6985);
type=nctemp6987;
struct tree* nctemp6993= p;
nctempchar1* nctemp6995=PtreeGetname(nctemp6993);
nctempchar1* nctemp6991= nctemp6995;
struct nctempchar1 *nctemp6998;
static struct nctempchar1 nctemp6999 = {{ 5}, (char*)"cast\0"};
nctemp6998=&nctemp6999;
nctempchar1* nctemp6996= nctemp6998;
int nctemp7000=LibeStrcmp(nctemp6991,nctemp6996);
int nctemp6988 = (nctemp7000 ==1);
if(nctemp6988)
{
struct tree* nctemp7006= p;
struct tree* nctemp7008=PtreeMvchild(nctemp7006);
np =nctemp7008;
struct tree* nctemp7013= np;
struct tree* nctemp7015=PtreeMvsister(nctemp7013);
sp =nctemp7015;
struct tree* nctemp7021= sp;
nctempchar1* nctemp7023=CodeExpr(nctemp7021);
expr=nctemp7023;
struct tree* nctemp7029= np;
nctempchar1* nctemp7031=PtreeGetref(nctemp7029);
nctempchar1* nctemp7027= nctemp7031;
struct nctempchar1 *nctemp7034;
static struct nctempchar1 nctemp7035 = {{ 5}, (char*)"sref\0"};
nctemp7034=&nctemp7035;
nctempchar1* nctemp7032= nctemp7034;
int nctemp7036=LibeStrcmp(nctemp7027,nctemp7032);
int nctemp7024 = (nctemp7036 ==1);
if(nctemp7024)
{
nctempchar1* nctemp7043=CodeMktemp();
tmp=nctemp7043;
struct tree* nctemp7045= p;
nctempchar1* nctemp7047= type;
int nctemp7050=CodeEs(nctemp7045,nctemp7047);
struct tree* nctemp7052= p;
struct nctempchar1 *nctemp7056;
static struct nctempchar1 nctemp7057 = {{ 2}, (char*)" \0"};
nctemp7056=&nctemp7057;
nctempchar1* nctemp7054= nctemp7056;
int nctemp7058=CodeEs(nctemp7052,nctemp7054);
struct tree* nctemp7060= p;
nctempchar1* nctemp7062= tmp;
int nctemp7065=CodeEs(nctemp7060,nctemp7062);
struct tree* nctemp7067= p;
struct nctempchar1 *nctemp7071;
static struct nctempchar1 nctemp7072 = {{ 2}, (char*)"=\0"};
nctemp7071=&nctemp7072;
nctempchar1* nctemp7069= nctemp7071;
int nctemp7073=CodeEs(nctemp7067,nctemp7069);
struct tree* nctemp7075= p;
struct nctempchar1 *nctemp7079;
static struct nctempchar1 nctemp7080 = {{ 9}, (char*)"(struct \0"};
nctemp7079=&nctemp7080;
nctempchar1* nctemp7077= nctemp7079;
int nctemp7081=CodeEs(nctemp7075,nctemp7077);
struct tree* nctemp7083= p;
struct tree* nctemp7087= np;
nctempchar1* nctemp7089=PtreeGetype(nctemp7087);
nctempchar1* nctemp7085= nctemp7089;
int nctemp7090=CodeEs(nctemp7083,nctemp7085);
struct tree* nctemp7092= p;
struct nctempchar1 *nctemp7096;
static struct nctempchar1 nctemp7097 = {{ 4}, (char*)"*)(\0"};
nctemp7096=&nctemp7097;
nctempchar1* nctemp7094= nctemp7096;
int nctemp7098=CodeEs(nctemp7092,nctemp7094);
struct tree* nctemp7100= p;
nctempchar1* nctemp7102= expr;
int nctemp7105=CodeEs(nctemp7100,nctemp7102);
struct tree* nctemp7107= p;
struct nctempchar1 *nctemp7111;
static struct nctempchar1 nctemp7112 = {{ 5}, (char*)");\n\0"};
nctemp7111=&nctemp7112;
nctempchar1* nctemp7109= nctemp7111;
int nctemp7113=CodeEs(nctemp7107,nctemp7109);
}
else{
struct tree* nctemp7119= np;
nctempchar1* nctemp7121=PtreeGetref(nctemp7119);
nctempchar1* nctemp7117= nctemp7121;
struct nctempchar1 *nctemp7124;
static struct nctempchar1 nctemp7125 = {{ 5}, (char*)"aref\0"};
nctemp7124=&nctemp7125;
nctempchar1* nctemp7122= nctemp7124;
int nctemp7126=LibeStrcmp(nctemp7117,nctemp7122);
int nctemp7114 = (nctemp7126 ==1);
if(nctemp7114)
{
struct tree* nctemp7132= np;
struct tree* nctemp7134=PtreeMvchild(nctemp7132);
np =nctemp7134;
struct tree* nctemp7139= np;
struct tree* nctemp7141=PtreeMvchild(nctemp7139);
np =nctemp7141;
struct tree* nctemp7146= np;
struct tree* nctemp7148=PtreeMvchild(nctemp7146);
np =nctemp7148;
struct tree* nctemp7153= np;
struct tree* nctemp7155=PtreeMvchild(nctemp7153);
np =nctemp7155;
tp =np;
rank =1;
struct tree* nctemp7171= np;
struct tree* nctemp7173=PtreeMvsister(nctemp7171);
np =nctemp7173;
int nctemp7164 = (np !=0);
int nctemp7175=nctemp7164;
while(nctemp7175)
{{
int nctemp7184 = rank + 1;
rank =nctemp7184;
}
struct tree* nctemp7192= np;
struct tree* nctemp7194=PtreeMvsister(nctemp7192);
np =nctemp7194;
int nctemp7185 = (np !=0);
nctemp7175=nctemp7185;}int nctemp7196 = (rank > 4);
if(nctemp7196)
{
struct nctempchar1 *nctemp7203;
static struct nctempchar1 nctemp7204 = {{ 29}, (char*)"Array dimension is too large\0"};
nctemp7203=&nctemp7204;
nctempchar1* nctemp7201= nctemp7203;
int nctemp7205=CodeError(nctemp7201);
}
p =tp;
struct tree* nctemp7211= p;
struct nctempchar1 *nctemp7215;
static struct nctempchar1 nctemp7216 = {{ 7}, (char*)"nctemp\0"};
nctemp7215=&nctemp7216;
nctempchar1* nctemp7213= nctemp7215;
int nctemp7217=CodeEs(nctemp7211,nctemp7213);
struct tree* nctemp7219= p;
nctempchar1* nctemp7221= type;
int nctemp7224=CodeEs(nctemp7219,nctemp7221);
int nctemp7226= rank;
int nctemp7228=CodeEd(nctemp7226);
struct tree* nctemp7230= p;
struct nctempchar1 *nctemp7234;
static struct nctempchar1 nctemp7235 = {{ 2}, (char*)" \0"};
nctemp7234=&nctemp7235;
nctempchar1* nctemp7232= nctemp7234;
int nctemp7236=CodeEs(nctemp7230,nctemp7232);
struct tree* nctemp7238= sp;
nctempchar1* nctemp7240= descr;
int nctemp7243=CodeEs(nctemp7238,nctemp7240);
struct tree* nctemp7245= sp;
struct nctempchar1 *nctemp7249;
static struct nctempchar1 nctemp7250 = {{ 4}, (char*)";\n\0"};
nctemp7249=&nctemp7250;
nctempchar1* nctemp7247= nctemp7249;
int nctemp7251=CodeEs(nctemp7245,nctemp7247);
struct tree* nctemp7253= p;
struct nctempchar1 *nctemp7257;
static struct nctempchar1 nctemp7258 = {{ 7}, (char*)"nctemp\0"};
nctemp7257=&nctemp7258;
nctempchar1* nctemp7255= nctemp7257;
int nctemp7259=CodeEs(nctemp7253,nctemp7255);
struct tree* nctemp7261= p;
nctempchar1* nctemp7263= type;
int nctemp7266=CodeEs(nctemp7261,nctemp7263);
int nctemp7268= rank;
int nctemp7270=CodeEd(nctemp7268);
struct tree* nctemp7272= p;
struct nctempchar1 *nctemp7276;
static struct nctempchar1 nctemp7277 = {{ 3}, (char*)" *\0"};
nctemp7276=&nctemp7277;
nctempchar1* nctemp7274= nctemp7276;
int nctemp7278=CodeEs(nctemp7272,nctemp7274);
struct tree* nctemp7280= sp;
nctempchar1* nctemp7282= pointer;
int nctemp7285=CodeEs(nctemp7280,nctemp7282);
struct tree* nctemp7287= p;
struct nctempchar1 *nctemp7291;
static struct nctempchar1 nctemp7292 = {{ 4}, (char*)";\n\0"};
nctemp7291=&nctemp7292;
nctempchar1* nctemp7289= nctemp7291;
int nctemp7293=CodeEs(nctemp7287,nctemp7289);
struct tree* nctemp7295= sp;
nctempchar1* nctemp7297= descr;
int nctemp7300=CodeEs(nctemp7295,nctemp7297);
struct tree* nctemp7302= sp;
struct nctempchar1 *nctemp7306;
static struct nctempchar1 nctemp7307 = {{ 2}, (char*)"=\0"};
nctemp7306=&nctemp7307;
nctempchar1* nctemp7304= nctemp7306;
int nctemp7308=CodeEs(nctemp7302,nctemp7304);
struct tree* nctemp7310= sp;
struct nctempchar1 *nctemp7314;
static struct nctempchar1 nctemp7315 = {{ 3}, (char*)"*(\0"};
nctemp7314=&nctemp7315;
nctempchar1* nctemp7312= nctemp7314;
int nctemp7316=CodeEs(nctemp7310,nctemp7312);
struct tree* nctemp7318= p;
struct nctempchar1 *nctemp7322;
static struct nctempchar1 nctemp7323 = {{ 7}, (char*)"nctemp\0"};
nctemp7322=&nctemp7323;
nctempchar1* nctemp7320= nctemp7322;
int nctemp7324=CodeEs(nctemp7318,nctemp7320);
struct tree* nctemp7326= sp;
nctempchar1* nctemp7328= type;
int nctemp7331=CodeEs(nctemp7326,nctemp7328);
int nctemp7333= rank;
int nctemp7335=CodeEd(nctemp7333);
struct tree* nctemp7337= sp;
struct nctempchar1 *nctemp7341;
static struct nctempchar1 nctemp7342 = {{ 4}, (char*)"*)(\0"};
nctemp7341=&nctemp7342;
nctempchar1* nctemp7339= nctemp7341;
int nctemp7343=CodeEs(nctemp7337,nctemp7339);
struct tree* nctemp7345= sp;
nctempchar1* nctemp7347= expr;
int nctemp7350=CodeEs(nctemp7345,nctemp7347);
struct tree* nctemp7352= sp;
struct nctempchar1 *nctemp7356;
static struct nctempchar1 nctemp7357 = {{ 5}, (char*)");\n\0"};
nctemp7356=&nctemp7357;
nctempchar1* nctemp7354= nctemp7356;
int nctemp7358=CodeEs(nctemp7352,nctemp7354);
p =tp;
i =0;
int nctemp7367 = (p !=0);
int nctemp7371=nctemp7367;
while(nctemp7371)
{{
struct tree* nctemp7377= p;
nctempchar1* nctemp7379=CodeExpr(nctemp7377);
dim=nctemp7379;
struct tree* nctemp7381= sp;
nctempchar1* nctemp7383= descr;
int nctemp7386=CodeEs(nctemp7381,nctemp7383);
struct tree* nctemp7388= sp;
struct nctempchar1 *nctemp7392;
static struct nctempchar1 nctemp7393 = {{ 3}, (char*)".d\0"};
nctemp7392=&nctemp7393;
nctempchar1* nctemp7390= nctemp7392;
int nctemp7394=CodeEs(nctemp7388,nctemp7390);
struct tree* nctemp7396= sp;
struct nctempchar1 *nctemp7400;
static struct nctempchar1 nctemp7401 = {{ 2}, (char*)"[\0"};
nctemp7400=&nctemp7401;
nctempchar1* nctemp7398= nctemp7400;
int nctemp7402=CodeEs(nctemp7396,nctemp7398);
int nctemp7404= i;
int nctemp7406=CodeEd(nctemp7404);
struct tree* nctemp7408= sp;
struct nctempchar1 *nctemp7412;
static struct nctempchar1 nctemp7413 = {{ 3}, (char*)"]=\0"};
nctemp7412=&nctemp7413;
nctempchar1* nctemp7410= nctemp7412;
int nctemp7414=CodeEs(nctemp7408,nctemp7410);
struct tree* nctemp7416= sp;
nctempchar1* nctemp7418= dim;
int nctemp7421=CodeEs(nctemp7416,nctemp7418);
struct tree* nctemp7423= sp;
struct nctempchar1 *nctemp7427;
static struct nctempchar1 nctemp7428 = {{ 4}, (char*)";\n\0"};
nctemp7427=&nctemp7428;
nctempchar1* nctemp7425= nctemp7427;
int nctemp7429=CodeEs(nctemp7423,nctemp7425);
int nctemp7438 = i + 1;
i =nctemp7438;
struct tree* nctemp7443= p;
struct tree* nctemp7445=PtreeMvsister(nctemp7443);
p =nctemp7445;
}
int nctemp7446 = (p !=0);
nctemp7371=nctemp7446;}struct tree* nctemp7451= sp;
nctempchar1* nctemp7453= pointer;
int nctemp7456=CodeEs(nctemp7451,nctemp7453);
struct tree* nctemp7458= sp;
struct nctempchar1 *nctemp7462;
static struct nctempchar1 nctemp7463 = {{ 3}, (char*)"=&\0"};
nctemp7462=&nctemp7463;
nctempchar1* nctemp7460= nctemp7462;
int nctemp7464=CodeEs(nctemp7458,nctemp7460);
struct tree* nctemp7466= sp;
nctempchar1* nctemp7468= descr;
int nctemp7471=CodeEs(nctemp7466,nctemp7468);
struct tree* nctemp7473= sp;
struct nctempchar1 *nctemp7477;
static struct nctempchar1 nctemp7478 = {{ 4}, (char*)";\n\0"};
nctemp7477=&nctemp7478;
nctempchar1* nctemp7475= nctemp7477;
int nctemp7479=CodeEs(nctemp7473,nctemp7475);
}
else{
struct tree* nctemp7481= p;
nctempchar1* nctemp7483= type;
int nctemp7486=CodeEs(nctemp7481,nctemp7483);
struct tree* nctemp7488= p;
struct nctempchar1 *nctemp7492;
static struct nctempchar1 nctemp7493 = {{ 2}, (char*)" \0"};
nctemp7492=&nctemp7493;
nctempchar1* nctemp7490= nctemp7492;
int nctemp7494=CodeEs(nctemp7488,nctemp7490);
struct tree* nctemp7496= p;
nctempchar1* nctemp7498= pointer;
int nctemp7501=CodeEs(nctemp7496,nctemp7498);
struct tree* nctemp7503= p;
struct nctempchar1 *nctemp7507;
static struct nctempchar1 nctemp7508 = {{ 2}, (char*)"=\0"};
nctemp7507=&nctemp7508;
nctempchar1* nctemp7505= nctemp7507;
int nctemp7509=CodeEs(nctemp7503,nctemp7505);
struct tree* nctemp7511= p;
struct nctempchar1 *nctemp7515;
static struct nctempchar1 nctemp7516 = {{ 2}, (char*)"(\0"};
nctemp7515=&nctemp7516;
nctempchar1* nctemp7513= nctemp7515;
int nctemp7517=CodeEs(nctemp7511,nctemp7513);
struct tree* nctemp7519= p;
struct tree* nctemp7523= np;
nctempchar1* nctemp7525=PtreeGetype(nctemp7523);
nctempchar1* nctemp7521= nctemp7525;
int nctemp7526=CodeEs(nctemp7519,nctemp7521);
struct tree* nctemp7528= p;
struct nctempchar1 *nctemp7532;
static struct nctempchar1 nctemp7533 = {{ 3}, (char*)")(\0"};
nctemp7532=&nctemp7533;
nctempchar1* nctemp7530= nctemp7532;
int nctemp7534=CodeEs(nctemp7528,nctemp7530);
struct tree* nctemp7536= p;
nctempchar1* nctemp7538= expr;
int nctemp7541=CodeEs(nctemp7536,nctemp7538);
struct tree* nctemp7543= p;
struct nctempchar1 *nctemp7547;
static struct nctempchar1 nctemp7548 = {{ 5}, (char*)");\n\0"};
nctemp7547=&nctemp7548;
nctempchar1* nctemp7545= nctemp7547;
int nctemp7549=CodeEs(nctemp7543,nctemp7545);
}
}
}
return pointer;
}
nctempchar1 * CodePrimexpr (struct tree* p)
{
struct tree* nctemp7557= p;
nctempchar1* nctemp7559=PtreeGetname(nctemp7557);
nctempchar1* nctemp7555= nctemp7559;
struct nctempchar1 *nctemp7562;
static struct nctempchar1 nctemp7563 = {{ 11}, (char*)"identifier\0"};
nctemp7562=&nctemp7563;
nctempchar1* nctemp7560= nctemp7562;
int nctemp7564=LibeStrcmp(nctemp7555,nctemp7560);
int nctemp7552 = (nctemp7564 ==1);
if(nctemp7552)
{
struct tree* nctemp7567= p;
nctempchar1* nctemp7569=CodeIdent(nctemp7567);
return nctemp7569;
}
else{
struct tree* nctemp7575= p;
nctempchar1* nctemp7577=PtreeGetname(nctemp7575);
nctempchar1* nctemp7573= nctemp7577;
struct nctempchar1 *nctemp7580;
static struct nctempchar1 nctemp7581 = {{ 4}, (char*)"new\0"};
nctemp7580=&nctemp7581;
nctempchar1* nctemp7578= nctemp7580;
int nctemp7582=LibeStrcmp(nctemp7573,nctemp7578);
int nctemp7570 = (nctemp7582 ==1);
if(nctemp7570)
{
struct tree* nctemp7585= p;
nctempchar1* nctemp7587=CodeNew(nctemp7585);
return nctemp7587;
}
else{
struct tree* nctemp7593= p;
nctempchar1* nctemp7595=PtreeGetname(nctemp7593);
nctempchar1* nctemp7591= nctemp7595;
struct nctempchar1 *nctemp7598;
static struct nctempchar1 nctemp7599 = {{ 7}, (char*)"delete\0"};
nctemp7598=&nctemp7599;
nctempchar1* nctemp7596= nctemp7598;
int nctemp7600=LibeStrcmp(nctemp7591,nctemp7596);
int nctemp7588 = (nctemp7600 ==1);
if(nctemp7588)
{
struct tree* nctemp7603= p;
nctempchar1* nctemp7605=CodeDelete(nctemp7603);
return nctemp7605;
}
else{
struct tree* nctemp7611= p;
nctempchar1* nctemp7613=PtreeGetname(nctemp7611);
nctempchar1* nctemp7609= nctemp7613;
struct nctempchar1 *nctemp7616;
static struct nctempchar1 nctemp7617 = {{ 4}, (char*)"len\0"};
nctemp7616=&nctemp7617;
nctempchar1* nctemp7614= nctemp7616;
int nctemp7618=LibeStrcmp(nctemp7609,nctemp7614);
int nctemp7606 = (nctemp7618 ==1);
if(nctemp7606)
{
struct tree* nctemp7621= p;
nctempchar1* nctemp7623=CodeLen(nctemp7621);
return nctemp7623;
}
else{
struct tree* nctemp7629= p;
nctempchar1* nctemp7631=PtreeGetname(nctemp7629);
nctempchar1* nctemp7627= nctemp7631;
struct nctempchar1 *nctemp7634;
static struct nctempchar1 nctemp7635 = {{ 6}, (char*)"cmplx\0"};
nctemp7634=&nctemp7635;
nctempchar1* nctemp7632= nctemp7634;
int nctemp7636=LibeStrcmp(nctemp7627,nctemp7632);
int nctemp7624 = (nctemp7636 ==1);
if(nctemp7624)
{
struct tree* nctemp7639= p;
nctempchar1* nctemp7641=CodeCmplx(nctemp7639);
return nctemp7641;
}
else{
struct tree* nctemp7647= p;
nctempchar1* nctemp7649=PtreeGetname(nctemp7647);
nctempchar1* nctemp7645= nctemp7649;
struct nctempchar1 *nctemp7652;
static struct nctempchar1 nctemp7653 = {{ 3}, (char*)"im\0"};
nctemp7652=&nctemp7653;
nctempchar1* nctemp7650= nctemp7652;
int nctemp7654=LibeStrcmp(nctemp7645,nctemp7650);
int nctemp7642 = (nctemp7654 ==1);
if(nctemp7642)
{
struct tree* nctemp7657= p;
nctempchar1* nctemp7659=CodeIm(nctemp7657);
return nctemp7659;
}
else{
struct tree* nctemp7665= p;
nctempchar1* nctemp7667=PtreeGetname(nctemp7665);
nctempchar1* nctemp7663= nctemp7667;
struct nctempchar1 *nctemp7670;
static struct nctempchar1 nctemp7671 = {{ 3}, (char*)"re\0"};
nctemp7670=&nctemp7671;
nctempchar1* nctemp7668= nctemp7670;
int nctemp7672=LibeStrcmp(nctemp7663,nctemp7668);
int nctemp7660 = (nctemp7672 ==1);
if(nctemp7660)
{
struct tree* nctemp7675= p;
nctempchar1* nctemp7677=CodeRe(nctemp7675);
return nctemp7677;
}
else{
struct tree* nctemp7683= p;
nctempchar1* nctemp7685=PtreeGetname(nctemp7683);
nctempchar1* nctemp7681= nctemp7685;
struct nctempchar1 *nctemp7688;
static struct nctempchar1 nctemp7689 = {{ 6}, (char*)"fcall\0"};
nctemp7688=&nctemp7689;
nctempchar1* nctemp7686= nctemp7688;
int nctemp7690=LibeStrcmp(nctemp7681,nctemp7686);
int nctemp7678 = (nctemp7690 ==1);
if(nctemp7678)
{
struct tree* nctemp7693= p;
nctempchar1* nctemp7695=CodeFcall(nctemp7693);
return nctemp7695;
}
else{
struct tree* nctemp7701= p;
nctempchar1* nctemp7703=PtreeGetname(nctemp7701);
nctempchar1* nctemp7699= nctemp7703;
struct nctempchar1 *nctemp7706;
static struct nctempchar1 nctemp7707 = {{ 5}, (char*)"cast\0"};
nctemp7706=&nctemp7707;
nctempchar1* nctemp7704= nctemp7706;
int nctemp7708=LibeStrcmp(nctemp7699,nctemp7704);
int nctemp7696 = (nctemp7708 ==1);
if(nctemp7696)
{
struct tree* nctemp7711= p;
nctempchar1* nctemp7713=CodeCast(nctemp7711);
return nctemp7713;
}
else{
struct tree* nctemp7719= p;
nctempchar1* nctemp7721=PtreeGetname(nctemp7719);
nctempchar1* nctemp7717= nctemp7721;
struct nctempchar1 *nctemp7724;
static struct nctempchar1 nctemp7725 = {{ 10}, (char*)"iconstant\0"};
nctemp7724=&nctemp7725;
nctempchar1* nctemp7722= nctemp7724;
int nctemp7726=LibeStrcmp(nctemp7717,nctemp7722);
int nctemp7714 = (nctemp7726 ==1);
if(nctemp7714)
{
struct tree* nctemp7729= p;
nctempchar1* nctemp7731=PtreeGetdef(nctemp7729);
return nctemp7731;
}
else{
struct tree* nctemp7737= p;
nctempchar1* nctemp7739=PtreeGetname(nctemp7737);
nctempchar1* nctemp7735= nctemp7739;
struct nctempchar1 *nctemp7742;
static struct nctempchar1 nctemp7743 = {{ 10}, (char*)"rconstant\0"};
nctemp7742=&nctemp7743;
nctempchar1* nctemp7740= nctemp7742;
int nctemp7744=LibeStrcmp(nctemp7735,nctemp7740);
int nctemp7732 = (nctemp7744 ==1);
if(nctemp7732)
{
struct tree* nctemp7747= p;
nctempchar1* nctemp7749=PtreeGetdef(nctemp7747);
return nctemp7749;
}
else{
struct tree* nctemp7755= p;
nctempchar1* nctemp7757=PtreeGetname(nctemp7755);
nctempchar1* nctemp7753= nctemp7757;
struct nctempchar1 *nctemp7760;
static struct nctempchar1 nctemp7761 = {{ 10}, (char*)"sconstant\0"};
nctemp7760=&nctemp7761;
nctempchar1* nctemp7758= nctemp7760;
int nctemp7762=LibeStrcmp(nctemp7753,nctemp7758);
int nctemp7750 = (nctemp7762 ==1);
if(nctemp7750)
{
struct tree* nctemp7765= p;
nctempchar1* nctemp7767=CodeSconstant(nctemp7765);
return nctemp7767;
}
else{
struct tree* nctemp7769= p;
nctempchar1* nctemp7771=CodeBinexpr(nctemp7769);
return nctemp7771;
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
nctempchar1* nctemp7777=CodeMktemp();
tempr=nctemp7777;
struct tree* nctemp7783= p;
nctempchar1* nctemp7785=PtreeGetname(nctemp7783);
nctempchar1* nctemp7781= nctemp7785;
struct nctempchar1 *nctemp7788;
static struct nctempchar1 nctemp7789 = {{ 7}, (char*)"unexpr\0"};
nctemp7788=&nctemp7789;
nctempchar1* nctemp7786= nctemp7788;
int nctemp7790=LibeStrcmp(nctemp7781,nctemp7786);
int nctemp7778 = (nctemp7790 ==1);
if(nctemp7778)
{
struct tree* nctemp7797= p;
nctempchar1* nctemp7799=PtreeGetype(nctemp7797);
nctempchar1* nctemp7795= nctemp7799;
struct nctempchar1 *nctemp7802;
static struct nctempchar1 nctemp7803 = {{ 8}, (char*)"complex\0"};
nctemp7802=&nctemp7803;
nctempchar1* nctemp7800= nctemp7802;
int nctemp7804=LibeStrcmp(nctemp7795,nctemp7800);
int nctemp7792 = (nctemp7804 ==1);
if(nctemp7792)
{
struct tree* nctemp7813= p;
struct tree* nctemp7815=PtreeMvchild(nctemp7813);
struct tree* nctemp7811= nctemp7815;
nctempchar1* nctemp7816=CodePrimexpr(nctemp7811);
tmp=nctemp7816;
struct tree* nctemp7818= p;
struct nctempchar1 *nctemp7822;
static struct nctempchar1 nctemp7823 = {{ 4}, (char*)";\n\0"};
nctemp7822=&nctemp7823;
nctempchar1* nctemp7820= nctemp7822;
int nctemp7824=CodeEs(nctemp7818,nctemp7820);
struct tree* nctemp7826= p;
nctempchar1* nctemp7828= tempr;
int nctemp7831=CodeEs(nctemp7826,nctemp7828);
struct tree* nctemp7833= p;
struct nctempchar1 *nctemp7837;
static struct nctempchar1 nctemp7838 = {{ 3}, (char*)".r\0"};
nctemp7837=&nctemp7838;
nctempchar1* nctemp7835= nctemp7837;
int nctemp7839=CodeEs(nctemp7833,nctemp7835);
struct tree* nctemp7841= p;
struct nctempchar1 *nctemp7845;
static struct nctempchar1 nctemp7846 = {{ 4}, (char*)"= -\0"};
nctemp7845=&nctemp7846;
nctempchar1* nctemp7843= nctemp7845;
int nctemp7847=CodeEs(nctemp7841,nctemp7843);
struct tree* nctemp7849= p;
nctempchar1* nctemp7851= tmp;
int nctemp7854=CodeEs(nctemp7849,nctemp7851);
struct tree* nctemp7856= p;
struct nctempchar1 *nctemp7860;
static struct nctempchar1 nctemp7861 = {{ 3}, (char*)".r\0"};
nctemp7860=&nctemp7861;
nctempchar1* nctemp7858= nctemp7860;
int nctemp7862=CodeEs(nctemp7856,nctemp7858);
struct tree* nctemp7864= p;
struct nctempchar1 *nctemp7868;
static struct nctempchar1 nctemp7869 = {{ 4}, (char*)";\n\0"};
nctemp7868=&nctemp7869;
nctempchar1* nctemp7866= nctemp7868;
int nctemp7870=CodeEs(nctemp7864,nctemp7866);
struct tree* nctemp7872= p;
nctempchar1* nctemp7874= tempr;
int nctemp7877=CodeEs(nctemp7872,nctemp7874);
struct tree* nctemp7879= p;
struct nctempchar1 *nctemp7883;
static struct nctempchar1 nctemp7884 = {{ 3}, (char*)".i\0"};
nctemp7883=&nctemp7884;
nctempchar1* nctemp7881= nctemp7883;
int nctemp7885=CodeEs(nctemp7879,nctemp7881);
struct tree* nctemp7887= p;
struct nctempchar1 *nctemp7891;
static struct nctempchar1 nctemp7892 = {{ 4}, (char*)"= -\0"};
nctemp7891=&nctemp7892;
nctempchar1* nctemp7889= nctemp7891;
int nctemp7893=CodeEs(nctemp7887,nctemp7889);
struct tree* nctemp7895= p;
nctempchar1* nctemp7897= tmp;
int nctemp7900=CodeEs(nctemp7895,nctemp7897);
struct tree* nctemp7902= p;
struct nctempchar1 *nctemp7906;
static struct nctempchar1 nctemp7907 = {{ 3}, (char*)".i\0"};
nctemp7906=&nctemp7907;
nctempchar1* nctemp7904= nctemp7906;
int nctemp7908=CodeEs(nctemp7902,nctemp7904);
struct tree* nctemp7910= p;
struct nctempchar1 *nctemp7914;
static struct nctempchar1 nctemp7915 = {{ 4}, (char*)";\n\0"};
nctemp7914=&nctemp7915;
nctempchar1* nctemp7912= nctemp7914;
int nctemp7916=CodeEs(nctemp7910,nctemp7912);
return tempr;
}
else{
struct tree* nctemp7926= p;
struct tree* nctemp7928=PtreeMvchild(nctemp7926);
struct tree* nctemp7924= nctemp7928;
nctempchar1* nctemp7929=CodePrimexpr(nctemp7924);
tmp=nctemp7929;
struct tree* nctemp7931= p;
struct tree* nctemp7935= p;
nctempchar1* nctemp7937=PtreeGetype(nctemp7935);
nctempchar1* nctemp7933= nctemp7937;
int nctemp7938=CodeEs(nctemp7931,nctemp7933);
struct tree* nctemp7940= p;
struct nctempchar1 *nctemp7944;
static struct nctempchar1 nctemp7945 = {{ 2}, (char*)" \0"};
nctemp7944=&nctemp7945;
nctempchar1* nctemp7942= nctemp7944;
int nctemp7946=CodeEs(nctemp7940,nctemp7942);
struct tree* nctemp7948= p;
nctempchar1* nctemp7950= tempr;
int nctemp7953=CodeEs(nctemp7948,nctemp7950);
struct tree* nctemp7955= p;
struct nctempchar1 *nctemp7959;
static struct nctempchar1 nctemp7960 = {{ 4}, (char*)"= -\0"};
nctemp7959=&nctemp7960;
nctempchar1* nctemp7957= nctemp7959;
int nctemp7961=CodeEs(nctemp7955,nctemp7957);
struct tree* nctemp7963= p;
nctempchar1* nctemp7965= tmp;
int nctemp7968=CodeEs(nctemp7963,nctemp7965);
struct tree* nctemp7970= p;
struct nctempchar1 *nctemp7974;
static struct nctempchar1 nctemp7975 = {{ 4}, (char*)";\n\0"};
nctemp7974=&nctemp7975;
nctempchar1* nctemp7972= nctemp7974;
int nctemp7976=CodeEs(nctemp7970,nctemp7972);
return tempr;
}
}
else{
struct tree* nctemp7980= p;
nctempchar1* nctemp7982=CodePrimexpr(nctemp7980);
return nctemp7982;
}
}
nctempchar1 * CodeAddexpr (struct tree* p,nctempchar1 *lval,nctempchar1 *rval)
{
nctempchar1 *type;
nctempchar1 *tempr;
nctempchar1 *opr;
struct tree* nctemp7988= p;
nctempchar1* nctemp7990=PtreeGetype(nctemp7988);
type=nctemp7990;
nctempchar1* nctemp7996=CodeMktemp();
tempr=nctemp7996;
struct tree* nctemp8002= p;
nctempchar1* nctemp8004=PtreeGetdef(nctemp8002);
opr=nctemp8004;
nctempchar1* nctemp8008= type;
struct nctempchar1 *nctemp8013;
static struct nctempchar1 nctemp8014 = {{ 8}, (char*)"complex\0"};
nctemp8013=&nctemp8014;
nctempchar1* nctemp8011= nctemp8013;
int nctemp8015=LibeStrcmp(nctemp8008,nctemp8011);
int nctemp8005 = (nctemp8015 ==1);
if(nctemp8005)
{
nctempchar1* nctemp8023= opr;
struct nctempchar1 *nctemp8028;
static struct nctempchar1 nctemp8029 = {{ 2}, (char*)"+\0"};
nctemp8028=&nctemp8029;
nctempchar1* nctemp8026= nctemp8028;
int nctemp8030=LibeStrcmp(nctemp8023,nctemp8026);
int nctemp8020 = (nctemp8030 ==1);
nctempchar1* nctemp8036= opr;
struct nctempchar1 *nctemp8041;
static struct nctempchar1 nctemp8042 = {{ 2}, (char*)"-\0"};
nctemp8041=&nctemp8042;
nctempchar1* nctemp8039= nctemp8041;
int nctemp8043=LibeStrcmp(nctemp8036,nctemp8039);
int nctemp8033 = (nctemp8043 ==1);
int nctemp8017 = (nctemp8020 || nctemp8033);
if(nctemp8017)
{
struct tree* nctemp8046= p;
nctempchar1* nctemp8048= type;
int nctemp8051=CodeEs(nctemp8046,nctemp8048);
struct tree* nctemp8053= p;
struct nctempchar1 *nctemp8057;
static struct nctempchar1 nctemp8058 = {{ 2}, (char*)" \0"};
nctemp8057=&nctemp8058;
nctempchar1* nctemp8055= nctemp8057;
int nctemp8059=CodeEs(nctemp8053,nctemp8055);
struct tree* nctemp8061= p;
nctempchar1* nctemp8063= tempr;
int nctemp8066=CodeEs(nctemp8061,nctemp8063);
struct tree* nctemp8068= p;
struct nctempchar1 *nctemp8072;
static struct nctempchar1 nctemp8073 = {{ 3}, (char*)".r\0"};
nctemp8072=&nctemp8073;
nctempchar1* nctemp8070= nctemp8072;
int nctemp8074=CodeEs(nctemp8068,nctemp8070);
struct tree* nctemp8076= p;
struct nctempchar1 *nctemp8080;
static struct nctempchar1 nctemp8081 = {{ 4}, (char*)" = \0"};
nctemp8080=&nctemp8081;
nctempchar1* nctemp8078= nctemp8080;
int nctemp8082=CodeEs(nctemp8076,nctemp8078);
struct tree* nctemp8084= p;
nctempchar1* nctemp8086= lval;
int nctemp8089=CodeEs(nctemp8084,nctemp8086);
struct tree* nctemp8091= p;
struct nctempchar1 *nctemp8095;
static struct nctempchar1 nctemp8096 = {{ 3}, (char*)".r\0"};
nctemp8095=&nctemp8096;
nctempchar1* nctemp8093= nctemp8095;
int nctemp8097=CodeEs(nctemp8091,nctemp8093);
struct tree* nctemp8099= p;
struct nctempchar1 *nctemp8103;
static struct nctempchar1 nctemp8104 = {{ 2}, (char*)" \0"};
nctemp8103=&nctemp8104;
nctempchar1* nctemp8101= nctemp8103;
int nctemp8105=CodeEs(nctemp8099,nctemp8101);
struct tree* nctemp8107= p;
struct tree* nctemp8111= p;
nctempchar1* nctemp8113=PtreeGetdef(nctemp8111);
nctempchar1* nctemp8109= nctemp8113;
int nctemp8114=CodeEs(nctemp8107,nctemp8109);
struct tree* nctemp8116= p;
struct nctempchar1 *nctemp8120;
static struct nctempchar1 nctemp8121 = {{ 2}, (char*)" \0"};
nctemp8120=&nctemp8121;
nctempchar1* nctemp8118= nctemp8120;
int nctemp8122=CodeEs(nctemp8116,nctemp8118);
struct tree* nctemp8124= p;
nctempchar1* nctemp8126= rval;
int nctemp8129=CodeEs(nctemp8124,nctemp8126);
struct tree* nctemp8131= p;
struct nctempchar1 *nctemp8135;
static struct nctempchar1 nctemp8136 = {{ 3}, (char*)".r\0"};
nctemp8135=&nctemp8136;
nctempchar1* nctemp8133= nctemp8135;
int nctemp8137=CodeEs(nctemp8131,nctemp8133);
struct tree* nctemp8139= p;
struct nctempchar1 *nctemp8143;
static struct nctempchar1 nctemp8144 = {{ 4}, (char*)";\n\0"};
nctemp8143=&nctemp8144;
nctempchar1* nctemp8141= nctemp8143;
int nctemp8145=CodeEs(nctemp8139,nctemp8141);
struct tree* nctemp8147= p;
nctempchar1* nctemp8149= type;
int nctemp8152=CodeEs(nctemp8147,nctemp8149);
struct tree* nctemp8154= p;
struct nctempchar1 *nctemp8158;
static struct nctempchar1 nctemp8159 = {{ 2}, (char*)" \0"};
nctemp8158=&nctemp8159;
nctempchar1* nctemp8156= nctemp8158;
int nctemp8160=CodeEs(nctemp8154,nctemp8156);
struct tree* nctemp8162= p;
nctempchar1* nctemp8164= tempr;
int nctemp8167=CodeEs(nctemp8162,nctemp8164);
struct tree* nctemp8169= p;
struct nctempchar1 *nctemp8173;
static struct nctempchar1 nctemp8174 = {{ 3}, (char*)".i\0"};
nctemp8173=&nctemp8174;
nctempchar1* nctemp8171= nctemp8173;
int nctemp8175=CodeEs(nctemp8169,nctemp8171);
struct tree* nctemp8177= p;
struct nctempchar1 *nctemp8181;
static struct nctempchar1 nctemp8182 = {{ 4}, (char*)" = \0"};
nctemp8181=&nctemp8182;
nctempchar1* nctemp8179= nctemp8181;
int nctemp8183=CodeEs(nctemp8177,nctemp8179);
struct tree* nctemp8185= p;
nctempchar1* nctemp8187= lval;
int nctemp8190=CodeEs(nctemp8185,nctemp8187);
struct tree* nctemp8192= p;
struct nctempchar1 *nctemp8196;
static struct nctempchar1 nctemp8197 = {{ 3}, (char*)".i\0"};
nctemp8196=&nctemp8197;
nctempchar1* nctemp8194= nctemp8196;
int nctemp8198=CodeEs(nctemp8192,nctemp8194);
struct tree* nctemp8200= p;
struct nctempchar1 *nctemp8204;
static struct nctempchar1 nctemp8205 = {{ 2}, (char*)" \0"};
nctemp8204=&nctemp8205;
nctempchar1* nctemp8202= nctemp8204;
int nctemp8206=CodeEs(nctemp8200,nctemp8202);
struct tree* nctemp8208= p;
struct tree* nctemp8212= p;
nctempchar1* nctemp8214=PtreeGetdef(nctemp8212);
nctempchar1* nctemp8210= nctemp8214;
int nctemp8215=CodeEs(nctemp8208,nctemp8210);
struct tree* nctemp8217= p;
struct nctempchar1 *nctemp8221;
static struct nctempchar1 nctemp8222 = {{ 2}, (char*)" \0"};
nctemp8221=&nctemp8222;
nctempchar1* nctemp8219= nctemp8221;
int nctemp8223=CodeEs(nctemp8217,nctemp8219);
struct tree* nctemp8225= p;
nctempchar1* nctemp8227= rval;
int nctemp8230=CodeEs(nctemp8225,nctemp8227);
struct tree* nctemp8232= p;
struct nctempchar1 *nctemp8236;
static struct nctempchar1 nctemp8237 = {{ 3}, (char*)".i\0"};
nctemp8236=&nctemp8237;
nctempchar1* nctemp8234= nctemp8236;
int nctemp8238=CodeEs(nctemp8232,nctemp8234);
struct tree* nctemp8240= p;
struct nctempchar1 *nctemp8244;
static struct nctempchar1 nctemp8245 = {{ 4}, (char*)";\n\0"};
nctemp8244=&nctemp8245;
nctempchar1* nctemp8242= nctemp8244;
int nctemp8246=CodeEs(nctemp8240,nctemp8242);
}
else{
nctempchar1* nctemp8250= opr;
struct nctempchar1 *nctemp8255;
static struct nctempchar1 nctemp8256 = {{ 2}, (char*)"*\0"};
nctemp8255=&nctemp8256;
nctempchar1* nctemp8253= nctemp8255;
int nctemp8257=LibeStrcmp(nctemp8250,nctemp8253);
int nctemp8247 = (nctemp8257 ==1);
if(nctemp8247)
{
struct tree* nctemp8260= p;
nctempchar1* nctemp8262= type;
int nctemp8265=CodeEs(nctemp8260,nctemp8262);
struct tree* nctemp8267= p;
struct nctempchar1 *nctemp8271;
static struct nctempchar1 nctemp8272 = {{ 2}, (char*)" \0"};
nctemp8271=&nctemp8272;
nctempchar1* nctemp8269= nctemp8271;
int nctemp8273=CodeEs(nctemp8267,nctemp8269);
struct tree* nctemp8275= p;
nctempchar1* nctemp8277= tempr;
int nctemp8280=CodeEs(nctemp8275,nctemp8277);
struct tree* nctemp8282= p;
struct nctempchar1 *nctemp8286;
static struct nctempchar1 nctemp8287 = {{ 3}, (char*)".r\0"};
nctemp8286=&nctemp8287;
nctempchar1* nctemp8284= nctemp8286;
int nctemp8288=CodeEs(nctemp8282,nctemp8284);
struct tree* nctemp8290= p;
struct nctempchar1 *nctemp8294;
static struct nctempchar1 nctemp8295 = {{ 4}, (char*)" = \0"};
nctemp8294=&nctemp8295;
nctempchar1* nctemp8292= nctemp8294;
int nctemp8296=CodeEs(nctemp8290,nctemp8292);
struct tree* nctemp8298= p;
nctempchar1* nctemp8300= lval;
int nctemp8303=CodeEs(nctemp8298,nctemp8300);
struct tree* nctemp8305= p;
struct nctempchar1 *nctemp8309;
static struct nctempchar1 nctemp8310 = {{ 3}, (char*)".r\0"};
nctemp8309=&nctemp8310;
nctempchar1* nctemp8307= nctemp8309;
int nctemp8311=CodeEs(nctemp8305,nctemp8307);
struct tree* nctemp8313= p;
struct nctempchar1 *nctemp8317;
static struct nctempchar1 nctemp8318 = {{ 2}, (char*)"*\0"};
nctemp8317=&nctemp8318;
nctempchar1* nctemp8315= nctemp8317;
int nctemp8319=CodeEs(nctemp8313,nctemp8315);
struct tree* nctemp8321= p;
nctempchar1* nctemp8323= rval;
int nctemp8326=CodeEs(nctemp8321,nctemp8323);
struct tree* nctemp8328= p;
struct nctempchar1 *nctemp8332;
static struct nctempchar1 nctemp8333 = {{ 3}, (char*)".r\0"};
nctemp8332=&nctemp8333;
nctempchar1* nctemp8330= nctemp8332;
int nctemp8334=CodeEs(nctemp8328,nctemp8330);
struct tree* nctemp8336= p;
struct nctempchar1 *nctemp8340;
static struct nctempchar1 nctemp8341 = {{ 2}, (char*)"-\0"};
nctemp8340=&nctemp8341;
nctempchar1* nctemp8338= nctemp8340;
int nctemp8342=CodeEs(nctemp8336,nctemp8338);
struct tree* nctemp8344= p;
nctempchar1* nctemp8346= lval;
int nctemp8349=CodeEs(nctemp8344,nctemp8346);
struct tree* nctemp8351= p;
struct nctempchar1 *nctemp8355;
static struct nctempchar1 nctemp8356 = {{ 3}, (char*)".i\0"};
nctemp8355=&nctemp8356;
nctempchar1* nctemp8353= nctemp8355;
int nctemp8357=CodeEs(nctemp8351,nctemp8353);
struct tree* nctemp8359= p;
struct nctempchar1 *nctemp8363;
static struct nctempchar1 nctemp8364 = {{ 2}, (char*)"*\0"};
nctemp8363=&nctemp8364;
nctempchar1* nctemp8361= nctemp8363;
int nctemp8365=CodeEs(nctemp8359,nctemp8361);
struct tree* nctemp8367= p;
nctempchar1* nctemp8369= rval;
int nctemp8372=CodeEs(nctemp8367,nctemp8369);
struct tree* nctemp8374= p;
struct nctempchar1 *nctemp8378;
static struct nctempchar1 nctemp8379 = {{ 3}, (char*)".i\0"};
nctemp8378=&nctemp8379;
nctempchar1* nctemp8376= nctemp8378;
int nctemp8380=CodeEs(nctemp8374,nctemp8376);
struct tree* nctemp8382= p;
struct nctempchar1 *nctemp8386;
static struct nctempchar1 nctemp8387 = {{ 4}, (char*)";\n\0"};
nctemp8386=&nctemp8387;
nctempchar1* nctemp8384= nctemp8386;
int nctemp8388=CodeEs(nctemp8382,nctemp8384);
struct tree* nctemp8390= p;
nctempchar1* nctemp8392= type;
int nctemp8395=CodeEs(nctemp8390,nctemp8392);
struct tree* nctemp8397= p;
struct nctempchar1 *nctemp8401;
static struct nctempchar1 nctemp8402 = {{ 2}, (char*)" \0"};
nctemp8401=&nctemp8402;
nctempchar1* nctemp8399= nctemp8401;
int nctemp8403=CodeEs(nctemp8397,nctemp8399);
struct tree* nctemp8405= p;
nctempchar1* nctemp8407= tempr;
int nctemp8410=CodeEs(nctemp8405,nctemp8407);
struct tree* nctemp8412= p;
struct nctempchar1 *nctemp8416;
static struct nctempchar1 nctemp8417 = {{ 3}, (char*)".i\0"};
nctemp8416=&nctemp8417;
nctempchar1* nctemp8414= nctemp8416;
int nctemp8418=CodeEs(nctemp8412,nctemp8414);
struct tree* nctemp8420= p;
struct nctempchar1 *nctemp8424;
static struct nctempchar1 nctemp8425 = {{ 4}, (char*)" = \0"};
nctemp8424=&nctemp8425;
nctempchar1* nctemp8422= nctemp8424;
int nctemp8426=CodeEs(nctemp8420,nctemp8422);
struct tree* nctemp8428= p;
nctempchar1* nctemp8430= lval;
int nctemp8433=CodeEs(nctemp8428,nctemp8430);
struct tree* nctemp8435= p;
struct nctempchar1 *nctemp8439;
static struct nctempchar1 nctemp8440 = {{ 3}, (char*)".i\0"};
nctemp8439=&nctemp8440;
nctempchar1* nctemp8437= nctemp8439;
int nctemp8441=CodeEs(nctemp8435,nctemp8437);
struct tree* nctemp8443= p;
struct nctempchar1 *nctemp8447;
static struct nctempchar1 nctemp8448 = {{ 2}, (char*)"*\0"};
nctemp8447=&nctemp8448;
nctempchar1* nctemp8445= nctemp8447;
int nctemp8449=CodeEs(nctemp8443,nctemp8445);
struct tree* nctemp8451= p;
nctempchar1* nctemp8453= rval;
int nctemp8456=CodeEs(nctemp8451,nctemp8453);
struct tree* nctemp8458= p;
struct nctempchar1 *nctemp8462;
static struct nctempchar1 nctemp8463 = {{ 3}, (char*)".r\0"};
nctemp8462=&nctemp8463;
nctempchar1* nctemp8460= nctemp8462;
int nctemp8464=CodeEs(nctemp8458,nctemp8460);
struct tree* nctemp8466= p;
struct nctempchar1 *nctemp8470;
static struct nctempchar1 nctemp8471 = {{ 2}, (char*)"+\0"};
nctemp8470=&nctemp8471;
nctempchar1* nctemp8468= nctemp8470;
int nctemp8472=CodeEs(nctemp8466,nctemp8468);
struct tree* nctemp8474= p;
nctempchar1* nctemp8476= lval;
int nctemp8479=CodeEs(nctemp8474,nctemp8476);
struct tree* nctemp8481= p;
struct nctempchar1 *nctemp8485;
static struct nctempchar1 nctemp8486 = {{ 3}, (char*)".r\0"};
nctemp8485=&nctemp8486;
nctempchar1* nctemp8483= nctemp8485;
int nctemp8487=CodeEs(nctemp8481,nctemp8483);
struct tree* nctemp8489= p;
struct nctempchar1 *nctemp8493;
static struct nctempchar1 nctemp8494 = {{ 2}, (char*)"*\0"};
nctemp8493=&nctemp8494;
nctempchar1* nctemp8491= nctemp8493;
int nctemp8495=CodeEs(nctemp8489,nctemp8491);
struct tree* nctemp8497= p;
nctempchar1* nctemp8499= rval;
int nctemp8502=CodeEs(nctemp8497,nctemp8499);
struct tree* nctemp8504= p;
struct nctempchar1 *nctemp8508;
static struct nctempchar1 nctemp8509 = {{ 3}, (char*)".i\0"};
nctemp8508=&nctemp8509;
nctempchar1* nctemp8506= nctemp8508;
int nctemp8510=CodeEs(nctemp8504,nctemp8506);
struct tree* nctemp8512= p;
struct nctempchar1 *nctemp8516;
static struct nctempchar1 nctemp8517 = {{ 4}, (char*)";\n\0"};
nctemp8516=&nctemp8517;
nctempchar1* nctemp8514= nctemp8516;
int nctemp8518=CodeEs(nctemp8512,nctemp8514);
}
else{
nctempchar1* nctemp8522= opr;
struct nctempchar1 *nctemp8527;
static struct nctempchar1 nctemp8528 = {{ 2}, (char*)"/\0"};
nctemp8527=&nctemp8528;
nctempchar1* nctemp8525= nctemp8527;
int nctemp8529=LibeStrcmp(nctemp8522,nctemp8525);
int nctemp8519 = (nctemp8529 ==1);
if(nctemp8519)
{
struct tree* nctemp8532= p;
nctempchar1* nctemp8534= type;
int nctemp8537=CodeEs(nctemp8532,nctemp8534);
struct tree* nctemp8539= p;
struct nctempchar1 *nctemp8543;
static struct nctempchar1 nctemp8544 = {{ 2}, (char*)" \0"};
nctemp8543=&nctemp8544;
nctempchar1* nctemp8541= nctemp8543;
int nctemp8545=CodeEs(nctemp8539,nctemp8541);
struct tree* nctemp8547= p;
nctempchar1* nctemp8549= tempr;
int nctemp8552=CodeEs(nctemp8547,nctemp8549);
struct tree* nctemp8554= p;
struct nctempchar1 *nctemp8558;
static struct nctempchar1 nctemp8559 = {{ 3}, (char*)".r\0"};
nctemp8558=&nctemp8559;
nctempchar1* nctemp8556= nctemp8558;
int nctemp8560=CodeEs(nctemp8554,nctemp8556);
struct tree* nctemp8562= p;
struct nctempchar1 *nctemp8566;
static struct nctempchar1 nctemp8567 = {{ 4}, (char*)" = \0"};
nctemp8566=&nctemp8567;
nctempchar1* nctemp8564= nctemp8566;
int nctemp8568=CodeEs(nctemp8562,nctemp8564);
struct tree* nctemp8570= p;
struct nctempchar1 *nctemp8574;
static struct nctempchar1 nctemp8575 = {{ 2}, (char*)"(\0"};
nctemp8574=&nctemp8575;
nctempchar1* nctemp8572= nctemp8574;
int nctemp8576=CodeEs(nctemp8570,nctemp8572);
struct tree* nctemp8578= p;
nctempchar1* nctemp8580= lval;
int nctemp8583=CodeEs(nctemp8578,nctemp8580);
struct tree* nctemp8585= p;
struct nctempchar1 *nctemp8589;
static struct nctempchar1 nctemp8590 = {{ 3}, (char*)".r\0"};
nctemp8589=&nctemp8590;
nctempchar1* nctemp8587= nctemp8589;
int nctemp8591=CodeEs(nctemp8585,nctemp8587);
struct tree* nctemp8593= p;
struct nctempchar1 *nctemp8597;
static struct nctempchar1 nctemp8598 = {{ 2}, (char*)"*\0"};
nctemp8597=&nctemp8598;
nctempchar1* nctemp8595= nctemp8597;
int nctemp8599=CodeEs(nctemp8593,nctemp8595);
struct tree* nctemp8601= p;
nctempchar1* nctemp8603= rval;
int nctemp8606=CodeEs(nctemp8601,nctemp8603);
struct tree* nctemp8608= p;
struct nctempchar1 *nctemp8612;
static struct nctempchar1 nctemp8613 = {{ 3}, (char*)".r\0"};
nctemp8612=&nctemp8613;
nctempchar1* nctemp8610= nctemp8612;
int nctemp8614=CodeEs(nctemp8608,nctemp8610);
struct tree* nctemp8616= p;
struct nctempchar1 *nctemp8620;
static struct nctempchar1 nctemp8621 = {{ 2}, (char*)"+\0"};
nctemp8620=&nctemp8621;
nctempchar1* nctemp8618= nctemp8620;
int nctemp8622=CodeEs(nctemp8616,nctemp8618);
struct tree* nctemp8624= p;
nctempchar1* nctemp8626= lval;
int nctemp8629=CodeEs(nctemp8624,nctemp8626);
struct tree* nctemp8631= p;
struct nctempchar1 *nctemp8635;
static struct nctempchar1 nctemp8636 = {{ 3}, (char*)".i\0"};
nctemp8635=&nctemp8636;
nctempchar1* nctemp8633= nctemp8635;
int nctemp8637=CodeEs(nctemp8631,nctemp8633);
struct tree* nctemp8639= p;
struct nctempchar1 *nctemp8643;
static struct nctempchar1 nctemp8644 = {{ 2}, (char*)"*\0"};
nctemp8643=&nctemp8644;
nctempchar1* nctemp8641= nctemp8643;
int nctemp8645=CodeEs(nctemp8639,nctemp8641);
struct tree* nctemp8647= p;
nctempchar1* nctemp8649= rval;
int nctemp8652=CodeEs(nctemp8647,nctemp8649);
struct tree* nctemp8654= p;
struct nctempchar1 *nctemp8658;
static struct nctempchar1 nctemp8659 = {{ 3}, (char*)".i\0"};
nctemp8658=&nctemp8659;
nctempchar1* nctemp8656= nctemp8658;
int nctemp8660=CodeEs(nctemp8654,nctemp8656);
struct tree* nctemp8662= p;
struct nctempchar1 *nctemp8666;
static struct nctempchar1 nctemp8667 = {{ 4}, (char*)")/(\0"};
nctemp8666=&nctemp8667;
nctempchar1* nctemp8664= nctemp8666;
int nctemp8668=CodeEs(nctemp8662,nctemp8664);
struct tree* nctemp8670= p;
nctempchar1* nctemp8672= rval;
int nctemp8675=CodeEs(nctemp8670,nctemp8672);
struct tree* nctemp8677= p;
struct nctempchar1 *nctemp8681;
static struct nctempchar1 nctemp8682 = {{ 3}, (char*)".r\0"};
nctemp8681=&nctemp8682;
nctempchar1* nctemp8679= nctemp8681;
int nctemp8683=CodeEs(nctemp8677,nctemp8679);
struct tree* nctemp8685= p;
struct nctempchar1 *nctemp8689;
static struct nctempchar1 nctemp8690 = {{ 2}, (char*)"*\0"};
nctemp8689=&nctemp8690;
nctempchar1* nctemp8687= nctemp8689;
int nctemp8691=CodeEs(nctemp8685,nctemp8687);
struct tree* nctemp8693= p;
nctempchar1* nctemp8695= rval;
int nctemp8698=CodeEs(nctemp8693,nctemp8695);
struct tree* nctemp8700= p;
struct nctempchar1 *nctemp8704;
static struct nctempchar1 nctemp8705 = {{ 3}, (char*)".r\0"};
nctemp8704=&nctemp8705;
nctempchar1* nctemp8702= nctemp8704;
int nctemp8706=CodeEs(nctemp8700,nctemp8702);
struct tree* nctemp8708= p;
struct nctempchar1 *nctemp8712;
static struct nctempchar1 nctemp8713 = {{ 2}, (char*)"+\0"};
nctemp8712=&nctemp8713;
nctempchar1* nctemp8710= nctemp8712;
int nctemp8714=CodeEs(nctemp8708,nctemp8710);
struct tree* nctemp8716= p;
nctempchar1* nctemp8718= rval;
int nctemp8721=CodeEs(nctemp8716,nctemp8718);
struct tree* nctemp8723= p;
struct nctempchar1 *nctemp8727;
static struct nctempchar1 nctemp8728 = {{ 3}, (char*)".i\0"};
nctemp8727=&nctemp8728;
nctempchar1* nctemp8725= nctemp8727;
int nctemp8729=CodeEs(nctemp8723,nctemp8725);
struct tree* nctemp8731= p;
struct nctempchar1 *nctemp8735;
static struct nctempchar1 nctemp8736 = {{ 2}, (char*)"*\0"};
nctemp8735=&nctemp8736;
nctempchar1* nctemp8733= nctemp8735;
int nctemp8737=CodeEs(nctemp8731,nctemp8733);
struct tree* nctemp8739= p;
nctempchar1* nctemp8741= rval;
int nctemp8744=CodeEs(nctemp8739,nctemp8741);
struct tree* nctemp8746= p;
struct nctempchar1 *nctemp8750;
static struct nctempchar1 nctemp8751 = {{ 3}, (char*)".i\0"};
nctemp8750=&nctemp8751;
nctempchar1* nctemp8748= nctemp8750;
int nctemp8752=CodeEs(nctemp8746,nctemp8748);
struct tree* nctemp8754= p;
struct nctempchar1 *nctemp8758;
static struct nctempchar1 nctemp8759 = {{ 5}, (char*)");\n\0"};
nctemp8758=&nctemp8759;
nctempchar1* nctemp8756= nctemp8758;
int nctemp8760=CodeEs(nctemp8754,nctemp8756);
struct tree* nctemp8762= p;
nctempchar1* nctemp8764= type;
int nctemp8767=CodeEs(nctemp8762,nctemp8764);
struct tree* nctemp8769= p;
struct nctempchar1 *nctemp8773;
static struct nctempchar1 nctemp8774 = {{ 2}, (char*)" \0"};
nctemp8773=&nctemp8774;
nctempchar1* nctemp8771= nctemp8773;
int nctemp8775=CodeEs(nctemp8769,nctemp8771);
struct tree* nctemp8777= p;
nctempchar1* nctemp8779= tempr;
int nctemp8782=CodeEs(nctemp8777,nctemp8779);
struct tree* nctemp8784= p;
struct nctempchar1 *nctemp8788;
static struct nctempchar1 nctemp8789 = {{ 3}, (char*)".i\0"};
nctemp8788=&nctemp8789;
nctempchar1* nctemp8786= nctemp8788;
int nctemp8790=CodeEs(nctemp8784,nctemp8786);
struct tree* nctemp8792= p;
struct nctempchar1 *nctemp8796;
static struct nctempchar1 nctemp8797 = {{ 4}, (char*)" = \0"};
nctemp8796=&nctemp8797;
nctempchar1* nctemp8794= nctemp8796;
int nctemp8798=CodeEs(nctemp8792,nctemp8794);
struct tree* nctemp8800= p;
struct nctempchar1 *nctemp8804;
static struct nctempchar1 nctemp8805 = {{ 2}, (char*)"(\0"};
nctemp8804=&nctemp8805;
nctempchar1* nctemp8802= nctemp8804;
int nctemp8806=CodeEs(nctemp8800,nctemp8802);
struct tree* nctemp8808= p;
nctempchar1* nctemp8810= lval;
int nctemp8813=CodeEs(nctemp8808,nctemp8810);
struct tree* nctemp8815= p;
struct nctempchar1 *nctemp8819;
static struct nctempchar1 nctemp8820 = {{ 3}, (char*)".i\0"};
nctemp8819=&nctemp8820;
nctempchar1* nctemp8817= nctemp8819;
int nctemp8821=CodeEs(nctemp8815,nctemp8817);
struct tree* nctemp8823= p;
struct nctempchar1 *nctemp8827;
static struct nctempchar1 nctemp8828 = {{ 2}, (char*)"*\0"};
nctemp8827=&nctemp8828;
nctempchar1* nctemp8825= nctemp8827;
int nctemp8829=CodeEs(nctemp8823,nctemp8825);
struct tree* nctemp8831= p;
nctempchar1* nctemp8833= rval;
int nctemp8836=CodeEs(nctemp8831,nctemp8833);
struct tree* nctemp8838= p;
struct nctempchar1 *nctemp8842;
static struct nctempchar1 nctemp8843 = {{ 3}, (char*)".r\0"};
nctemp8842=&nctemp8843;
nctempchar1* nctemp8840= nctemp8842;
int nctemp8844=CodeEs(nctemp8838,nctemp8840);
struct tree* nctemp8846= p;
struct nctempchar1 *nctemp8850;
static struct nctempchar1 nctemp8851 = {{ 2}, (char*)"-\0"};
nctemp8850=&nctemp8851;
nctempchar1* nctemp8848= nctemp8850;
int nctemp8852=CodeEs(nctemp8846,nctemp8848);
struct tree* nctemp8854= p;
nctempchar1* nctemp8856= lval;
int nctemp8859=CodeEs(nctemp8854,nctemp8856);
struct tree* nctemp8861= p;
struct nctempchar1 *nctemp8865;
static struct nctempchar1 nctemp8866 = {{ 3}, (char*)".r\0"};
nctemp8865=&nctemp8866;
nctempchar1* nctemp8863= nctemp8865;
int nctemp8867=CodeEs(nctemp8861,nctemp8863);
struct tree* nctemp8869= p;
struct nctempchar1 *nctemp8873;
static struct nctempchar1 nctemp8874 = {{ 2}, (char*)"*\0"};
nctemp8873=&nctemp8874;
nctempchar1* nctemp8871= nctemp8873;
int nctemp8875=CodeEs(nctemp8869,nctemp8871);
struct tree* nctemp8877= p;
nctempchar1* nctemp8879= rval;
int nctemp8882=CodeEs(nctemp8877,nctemp8879);
struct tree* nctemp8884= p;
struct nctempchar1 *nctemp8888;
static struct nctempchar1 nctemp8889 = {{ 3}, (char*)".i\0"};
nctemp8888=&nctemp8889;
nctempchar1* nctemp8886= nctemp8888;
int nctemp8890=CodeEs(nctemp8884,nctemp8886);
struct tree* nctemp8892= p;
struct nctempchar1 *nctemp8896;
static struct nctempchar1 nctemp8897 = {{ 4}, (char*)")/(\0"};
nctemp8896=&nctemp8897;
nctempchar1* nctemp8894= nctemp8896;
int nctemp8898=CodeEs(nctemp8892,nctemp8894);
struct tree* nctemp8900= p;
nctempchar1* nctemp8902= rval;
int nctemp8905=CodeEs(nctemp8900,nctemp8902);
struct tree* nctemp8907= p;
struct nctempchar1 *nctemp8911;
static struct nctempchar1 nctemp8912 = {{ 3}, (char*)".r\0"};
nctemp8911=&nctemp8912;
nctempchar1* nctemp8909= nctemp8911;
int nctemp8913=CodeEs(nctemp8907,nctemp8909);
struct tree* nctemp8915= p;
struct nctempchar1 *nctemp8919;
static struct nctempchar1 nctemp8920 = {{ 2}, (char*)"*\0"};
nctemp8919=&nctemp8920;
nctempchar1* nctemp8917= nctemp8919;
int nctemp8921=CodeEs(nctemp8915,nctemp8917);
struct tree* nctemp8923= p;
nctempchar1* nctemp8925= rval;
int nctemp8928=CodeEs(nctemp8923,nctemp8925);
struct tree* nctemp8930= p;
struct nctempchar1 *nctemp8934;
static struct nctempchar1 nctemp8935 = {{ 3}, (char*)".r\0"};
nctemp8934=&nctemp8935;
nctempchar1* nctemp8932= nctemp8934;
int nctemp8936=CodeEs(nctemp8930,nctemp8932);
struct tree* nctemp8938= p;
struct nctempchar1 *nctemp8942;
static struct nctempchar1 nctemp8943 = {{ 2}, (char*)"+\0"};
nctemp8942=&nctemp8943;
nctempchar1* nctemp8940= nctemp8942;
int nctemp8944=CodeEs(nctemp8938,nctemp8940);
struct tree* nctemp8946= p;
nctempchar1* nctemp8948= rval;
int nctemp8951=CodeEs(nctemp8946,nctemp8948);
struct tree* nctemp8953= p;
struct nctempchar1 *nctemp8957;
static struct nctempchar1 nctemp8958 = {{ 3}, (char*)".i\0"};
nctemp8957=&nctemp8958;
nctempchar1* nctemp8955= nctemp8957;
int nctemp8959=CodeEs(nctemp8953,nctemp8955);
struct tree* nctemp8961= p;
struct nctempchar1 *nctemp8965;
static struct nctempchar1 nctemp8966 = {{ 2}, (char*)"*\0"};
nctemp8965=&nctemp8966;
nctempchar1* nctemp8963= nctemp8965;
int nctemp8967=CodeEs(nctemp8961,nctemp8963);
struct tree* nctemp8969= p;
nctempchar1* nctemp8971= rval;
int nctemp8974=CodeEs(nctemp8969,nctemp8971);
struct tree* nctemp8976= p;
struct nctempchar1 *nctemp8980;
static struct nctempchar1 nctemp8981 = {{ 3}, (char*)".i\0"};
nctemp8980=&nctemp8981;
nctempchar1* nctemp8978= nctemp8980;
int nctemp8982=CodeEs(nctemp8976,nctemp8978);
struct tree* nctemp8984= p;
struct nctempchar1 *nctemp8988;
static struct nctempchar1 nctemp8989 = {{ 5}, (char*)");\n\0"};
nctemp8988=&nctemp8989;
nctempchar1* nctemp8986= nctemp8988;
int nctemp8990=CodeEs(nctemp8984,nctemp8986);
}
}
}
}
else{
struct tree* nctemp8992= p;
nctempchar1* nctemp8994= type;
int nctemp8997=CodeEs(nctemp8992,nctemp8994);
struct tree* nctemp8999= p;
struct nctempchar1 *nctemp9003;
static struct nctempchar1 nctemp9004 = {{ 2}, (char*)" \0"};
nctemp9003=&nctemp9004;
nctempchar1* nctemp9001= nctemp9003;
int nctemp9005=CodeEs(nctemp8999,nctemp9001);
struct tree* nctemp9007= p;
nctempchar1* nctemp9009= tempr;
int nctemp9012=CodeEs(nctemp9007,nctemp9009);
struct tree* nctemp9014= p;
struct nctempchar1 *nctemp9018;
static struct nctempchar1 nctemp9019 = {{ 4}, (char*)" = \0"};
nctemp9018=&nctemp9019;
nctempchar1* nctemp9016= nctemp9018;
int nctemp9020=CodeEs(nctemp9014,nctemp9016);
struct tree* nctemp9022= p;
nctempchar1* nctemp9024= lval;
int nctemp9027=CodeEs(nctemp9022,nctemp9024);
struct tree* nctemp9029= p;
struct nctempchar1 *nctemp9033;
static struct nctempchar1 nctemp9034 = {{ 2}, (char*)" \0"};
nctemp9033=&nctemp9034;
nctempchar1* nctemp9031= nctemp9033;
int nctemp9035=CodeEs(nctemp9029,nctemp9031);
struct tree* nctemp9037= p;
struct tree* nctemp9041= p;
nctempchar1* nctemp9043=PtreeGetdef(nctemp9041);
nctempchar1* nctemp9039= nctemp9043;
int nctemp9044=CodeEs(nctemp9037,nctemp9039);
struct tree* nctemp9046= p;
struct nctempchar1 *nctemp9050;
static struct nctempchar1 nctemp9051 = {{ 2}, (char*)" \0"};
nctemp9050=&nctemp9051;
nctempchar1* nctemp9048= nctemp9050;
int nctemp9052=CodeEs(nctemp9046,nctemp9048);
struct tree* nctemp9054= p;
nctempchar1* nctemp9056= rval;
int nctemp9059=CodeEs(nctemp9054,nctemp9056);
struct tree* nctemp9061= p;
struct nctempchar1 *nctemp9065;
static struct nctempchar1 nctemp9066 = {{ 4}, (char*)";\n\0"};
nctemp9065=&nctemp9066;
nctempchar1* nctemp9063= nctemp9065;
int nctemp9067=CodeEs(nctemp9061,nctemp9063);
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
struct tree* nctemp9075= p;
nctempchar1* nctemp9077=PtreeGetname(nctemp9075);
nctempchar1* nctemp9073= nctemp9077;
struct nctempchar1 *nctemp9080;
static struct nctempchar1 nctemp9081 = {{ 8}, (char*)"binexpr\0"};
nctemp9080=&nctemp9081;
nctempchar1* nctemp9078= nctemp9080;
int nctemp9082=LibeStrcmp(nctemp9073,nctemp9078);
int nctemp9070 = (nctemp9082 ==1);
if(nctemp9070)
{
struct tree* nctemp9089= p;
nctempchar1* nctemp9091=PtreeGetype(nctemp9089);
type=nctemp9091;
nctempchar1* nctemp9097=CodeMktemp();
tempr=nctemp9097;
nctempchar1* nctemp9103=CodeMktemp();
tempi=nctemp9103;
struct tree* nctemp9108= p;
struct tree* nctemp9110=PtreeMvchild(nctemp9108);
np =nctemp9110;
struct tree* nctemp9116= np;
nctempchar1* nctemp9118=CodeUnexpr(nctemp9116);
lval=nctemp9118;
struct tree* nctemp9126= np;
struct tree* nctemp9128=PtreeMvsister(nctemp9126);
struct tree* nctemp9124= nctemp9128;
nctempchar1* nctemp9129=CodeUnexpr(nctemp9124);
rval=nctemp9129;
struct tree* nctemp9144= p;
nctempchar1* nctemp9146=PtreeGetdef(nctemp9144);
nctempchar1* nctemp9142= nctemp9146;
struct nctempchar1 *nctemp9149;
static struct nctempchar1 nctemp9150 = {{ 2}, (char*)"+\0"};
nctemp9149=&nctemp9150;
nctempchar1* nctemp9147= nctemp9149;
int nctemp9151=LibeStrcmp(nctemp9142,nctemp9147);
int nctemp9139 = (nctemp9151 ==1);
struct tree* nctemp9159= p;
nctempchar1* nctemp9161=PtreeGetdef(nctemp9159);
nctempchar1* nctemp9157= nctemp9161;
struct nctempchar1 *nctemp9164;
static struct nctempchar1 nctemp9165 = {{ 2}, (char*)"-\0"};
nctemp9164=&nctemp9165;
nctempchar1* nctemp9162= nctemp9164;
int nctemp9166=LibeStrcmp(nctemp9157,nctemp9162);
int nctemp9154 = (nctemp9166 ==1);
int nctemp9136 = (nctemp9139 || nctemp9154);
struct tree* nctemp9174= p;
nctempchar1* nctemp9176=PtreeGetdef(nctemp9174);
nctempchar1* nctemp9172= nctemp9176;
struct nctempchar1 *nctemp9179;
static struct nctempchar1 nctemp9180 = {{ 2}, (char*)"*\0"};
nctemp9179=&nctemp9180;
nctempchar1* nctemp9177= nctemp9179;
int nctemp9181=LibeStrcmp(nctemp9172,nctemp9177);
int nctemp9169 = (nctemp9181 ==1);
int nctemp9133 = (nctemp9136 || nctemp9169);
struct tree* nctemp9189= p;
nctempchar1* nctemp9191=PtreeGetdef(nctemp9189);
nctempchar1* nctemp9187= nctemp9191;
struct nctempchar1 *nctemp9194;
static struct nctempchar1 nctemp9195 = {{ 2}, (char*)"/\0"};
nctemp9194=&nctemp9195;
nctempchar1* nctemp9192= nctemp9194;
int nctemp9196=LibeStrcmp(nctemp9187,nctemp9192);
int nctemp9184 = (nctemp9196 ==1);
int nctemp9130 = (nctemp9133 || nctemp9184);
if(nctemp9130)
{
struct tree* nctemp9199= p;
nctempchar1* nctemp9201= lval;
nctempchar1* nctemp9204= rval;
nctempchar1* nctemp9207=CodeAddexpr(nctemp9199,nctemp9201,nctemp9204);
return nctemp9207;
}
else{
struct tree* nctemp9213= p;
nctempchar1* nctemp9215=PtreeGetdef(nctemp9213);
nctempchar1* nctemp9211= nctemp9215;
struct nctempchar1 *nctemp9218;
static struct nctempchar1 nctemp9219 = {{ 2}, (char*)"=\0"};
nctemp9218=&nctemp9219;
nctempchar1* nctemp9216= nctemp9218;
int nctemp9220=LibeStrcmp(nctemp9211,nctemp9216);
int nctemp9208 = (nctemp9220 ==1);
if(nctemp9208)
{
struct tree* nctemp9233= p;
nctempchar1* nctemp9235=PtreeGetype(nctemp9233);
nctempchar1* nctemp9231= nctemp9235;
struct nctempchar1 *nctemp9238;
static struct nctempchar1 nctemp9239 = {{ 8}, (char*)"complex\0"};
nctemp9238=&nctemp9239;
nctempchar1* nctemp9236= nctemp9238;
int nctemp9240=LibeStrcmp(nctemp9231,nctemp9236);
int nctemp9228 = (nctemp9240 ==1);
struct tree* nctemp9248= p;
nctempchar1* nctemp9250=PtreeGetref(nctemp9248);
nctempchar1* nctemp9246= nctemp9250;
struct nctempchar1 *nctemp9253;
static struct nctempchar1 nctemp9254 = {{ 5}, (char*)"aref\0"};
nctemp9253=&nctemp9254;
nctempchar1* nctemp9251= nctemp9253;
int nctemp9255=LibeStrcmp(nctemp9246,nctemp9251);
int nctemp9243 = (nctemp9255 ==0);
int nctemp9225 = (nctemp9228 && nctemp9243);
struct tree* nctemp9263= p;
nctempchar1* nctemp9265=PtreeGetref(nctemp9263);
nctempchar1* nctemp9261= nctemp9265;
struct nctempchar1 *nctemp9268;
static struct nctempchar1 nctemp9269 = {{ 5}, (char*)"sref\0"};
nctemp9268=&nctemp9269;
nctempchar1* nctemp9266= nctemp9268;
int nctemp9270=LibeStrcmp(nctemp9261,nctemp9266);
int nctemp9258 = (nctemp9270 ==0);
int nctemp9222 = (nctemp9225 && nctemp9258);
if(nctemp9222)
{
struct tree* nctemp9273= p;
nctempchar1* nctemp9275= lval;
int nctemp9278=CodeEs(nctemp9273,nctemp9275);
struct tree* nctemp9280= p;
struct nctempchar1 *nctemp9284;
static struct nctempchar1 nctemp9285 = {{ 4}, (char*)".r \0"};
nctemp9284=&nctemp9285;
nctempchar1* nctemp9282= nctemp9284;
int nctemp9286=CodeEs(nctemp9280,nctemp9282);
struct tree* nctemp9288= p;
struct nctempchar1 *nctemp9292;
static struct nctempchar1 nctemp9293 = {{ 2}, (char*)"=\0"};
nctemp9292=&nctemp9293;
nctempchar1* nctemp9290= nctemp9292;
int nctemp9294=CodeEs(nctemp9288,nctemp9290);
struct tree* nctemp9296= p;
nctempchar1* nctemp9298= rval;
int nctemp9301=CodeEs(nctemp9296,nctemp9298);
struct tree* nctemp9303= p;
struct nctempchar1 *nctemp9307;
static struct nctempchar1 nctemp9308 = {{ 3}, (char*)".r\0"};
nctemp9307=&nctemp9308;
nctempchar1* nctemp9305= nctemp9307;
int nctemp9309=CodeEs(nctemp9303,nctemp9305);
struct tree* nctemp9311= p;
struct nctempchar1 *nctemp9315;
static struct nctempchar1 nctemp9316 = {{ 4}, (char*)";\n\0"};
nctemp9315=&nctemp9316;
nctempchar1* nctemp9313= nctemp9315;
int nctemp9317=CodeEs(nctemp9311,nctemp9313);
struct tree* nctemp9319= p;
nctempchar1* nctemp9321= lval;
int nctemp9324=CodeEs(nctemp9319,nctemp9321);
struct tree* nctemp9326= p;
struct nctempchar1 *nctemp9330;
static struct nctempchar1 nctemp9331 = {{ 3}, (char*)".i\0"};
nctemp9330=&nctemp9331;
nctempchar1* nctemp9328= nctemp9330;
int nctemp9332=CodeEs(nctemp9326,nctemp9328);
struct tree* nctemp9334= p;
struct nctempchar1 *nctemp9338;
static struct nctempchar1 nctemp9339 = {{ 2}, (char*)"=\0"};
nctemp9338=&nctemp9339;
nctempchar1* nctemp9336= nctemp9338;
int nctemp9340=CodeEs(nctemp9334,nctemp9336);
struct tree* nctemp9342= p;
nctempchar1* nctemp9344= rval;
int nctemp9347=CodeEs(nctemp9342,nctemp9344);
struct tree* nctemp9349= p;
struct nctempchar1 *nctemp9353;
static struct nctempchar1 nctemp9354 = {{ 3}, (char*)".i\0"};
nctemp9353=&nctemp9354;
nctempchar1* nctemp9351= nctemp9353;
int nctemp9355=CodeEs(nctemp9349,nctemp9351);
struct tree* nctemp9357= p;
struct nctempchar1 *nctemp9361;
static struct nctempchar1 nctemp9362 = {{ 4}, (char*)";\n\0"};
nctemp9361=&nctemp9362;
nctempchar1* nctemp9359= nctemp9361;
int nctemp9363=CodeEs(nctemp9357,nctemp9359);
return lval;
}
else{
struct tree* nctemp9371= np;
nctempchar1* nctemp9373=PtreeGetref(nctemp9371);
nctempchar1* nctemp9369= nctemp9373;
struct nctempchar1 *nctemp9376;
static struct nctempchar1 nctemp9377 = {{ 5}, (char*)"aref\0"};
nctemp9376=&nctemp9377;
nctempchar1* nctemp9374= nctemp9376;
int nctemp9378=LibeStrcmp(nctemp9369,nctemp9374);
int nctemp9366 = (nctemp9378 ==1);
if(nctemp9366)
{
struct tree* nctemp9387= np;
struct tree* nctemp9389=PtreeMvsister(nctemp9387);
struct tree* nctemp9385= nctemp9389;
nctempchar1* nctemp9390=PtreeGetname(nctemp9385);
nctempchar1* nctemp9383= nctemp9390;
struct nctempchar1 *nctemp9393;
static struct nctempchar1 nctemp9394 = {{ 10}, (char*)"iconstant\0"};
nctemp9393=&nctemp9394;
nctempchar1* nctemp9391= nctemp9393;
int nctemp9395=LibeStrcmp(nctemp9383,nctemp9391);
struct tree* nctemp9401= np;
struct tree* nctemp9403=PtreeMvsister(nctemp9401);
struct tree* nctemp9399= nctemp9403;
nctempchar1* nctemp9404=PtreeGetdef(nctemp9399);
nctempchar1* nctemp9397= nctemp9404;
struct nctempchar1 *nctemp9407;
static struct nctempchar1 nctemp9408 = {{ 2}, (char*)"0\0"};
nctemp9407=&nctemp9408;
nctempchar1* nctemp9405= nctemp9407;
int nctemp9409=LibeStrcmp(nctemp9397,nctemp9405);
int nctemp9380 = (nctemp9395 && nctemp9409);
if(nctemp9380)
{
struct tree* nctemp9411= p;
nctempchar1* nctemp9413= lval;
int nctemp9416=CodeEs(nctemp9411,nctemp9413);
struct tree* nctemp9418= p;
struct nctempchar1 *nctemp9422;
static struct nctempchar1 nctemp9423 = {{ 3}, (char*)"=(\0"};
nctemp9422=&nctemp9423;
nctempchar1* nctemp9420= nctemp9422;
int nctemp9424=CodeEs(nctemp9418,nctemp9420);
struct tree* nctemp9426= p;
nctempchar1* nctemp9428= rval;
int nctemp9431=CodeEs(nctemp9426,nctemp9428);
struct tree* nctemp9433= p;
struct nctempchar1 *nctemp9437;
static struct nctempchar1 nctemp9438 = {{ 5}, (char*)");\n\0"};
nctemp9437=&nctemp9438;
nctempchar1* nctemp9435= nctemp9437;
int nctemp9439=CodeEs(nctemp9433,nctemp9435);
return lval;
}
else{
struct tree* nctemp9443= p;
nctempchar1* nctemp9445= lval;
int nctemp9448=CodeEs(nctemp9443,nctemp9445);
struct tree* nctemp9450= p;
struct nctempchar1 *nctemp9454;
static struct nctempchar1 nctemp9455 = {{ 2}, (char*)"=\0"};
nctemp9454=&nctemp9455;
nctempchar1* nctemp9452= nctemp9454;
int nctemp9456=CodeEs(nctemp9450,nctemp9452);
struct tree* nctemp9458= p;
nctempchar1* nctemp9460= rval;
int nctemp9463=CodeEs(nctemp9458,nctemp9460);
struct tree* nctemp9465= p;
struct nctempchar1 *nctemp9469;
static struct nctempchar1 nctemp9470 = {{ 4}, (char*)";\n\0"};
nctemp9469=&nctemp9470;
nctempchar1* nctemp9467= nctemp9469;
int nctemp9471=CodeEs(nctemp9465,nctemp9467);
return lval;
}
}
else{
struct tree* nctemp9475= p;
nctempchar1* nctemp9477= lval;
int nctemp9480=CodeEs(nctemp9475,nctemp9477);
struct tree* nctemp9482= p;
struct nctempchar1 *nctemp9486;
static struct nctempchar1 nctemp9487 = {{ 2}, (char*)" \0"};
nctemp9486=&nctemp9487;
nctempchar1* nctemp9484= nctemp9486;
int nctemp9488=CodeEs(nctemp9482,nctemp9484);
struct tree* nctemp9490= p;
struct nctempchar1 *nctemp9494;
static struct nctempchar1 nctemp9495 = {{ 2}, (char*)"=\0"};
nctemp9494=&nctemp9495;
nctempchar1* nctemp9492= nctemp9494;
int nctemp9496=CodeEs(nctemp9490,nctemp9492);
struct tree* nctemp9498= p;
nctempchar1* nctemp9500= rval;
int nctemp9503=CodeEs(nctemp9498,nctemp9500);
struct tree* nctemp9505= p;
struct nctempchar1 *nctemp9509;
static struct nctempchar1 nctemp9510 = {{ 4}, (char*)";\n\0"};
nctemp9509=&nctemp9510;
nctempchar1* nctemp9507= nctemp9509;
int nctemp9511=CodeEs(nctemp9505,nctemp9507);
return lval;
}
}
}
else{
struct tree* nctemp9522= p;
nctempchar1* nctemp9524=PtreeGetdef(nctemp9522);
nctempchar1* nctemp9520= nctemp9524;
struct nctempchar1 *nctemp9527;
static struct nctempchar1 nctemp9528 = {{ 3}, (char*)"==\0"};
nctemp9527=&nctemp9528;
nctempchar1* nctemp9525= nctemp9527;
int nctemp9529=LibeStrcmp(nctemp9520,nctemp9525);
int nctemp9517 = (nctemp9529 ==1);
struct tree* nctemp9537= p;
nctempchar1* nctemp9539=PtreeGetdef(nctemp9537);
nctempchar1* nctemp9535= nctemp9539;
struct nctempchar1 *nctemp9542;
static struct nctempchar1 nctemp9543 = {{ 3}, (char*)"!=\0"};
nctemp9542=&nctemp9543;
nctempchar1* nctemp9540= nctemp9542;
int nctemp9544=LibeStrcmp(nctemp9535,nctemp9540);
int nctemp9532 = (nctemp9544 ==1);
int nctemp9514 = (nctemp9517 || nctemp9532);
if(nctemp9514)
{
struct tree* nctemp9551= np;
nctempchar1* nctemp9553=PtreeGetref(nctemp9551);
nctempchar1* nctemp9549= nctemp9553;
struct nctempchar1 *nctemp9556;
static struct nctempchar1 nctemp9557 = {{ 5}, (char*)"aref\0"};
nctemp9556=&nctemp9557;
nctempchar1* nctemp9554= nctemp9556;
int nctemp9558=LibeStrcmp(nctemp9549,nctemp9554);
int nctemp9546 = (nctemp9558 ==1);
if(nctemp9546)
{
sp =np;
struct tree* nctemp9571= np;
struct tree* nctemp9573=PtreeMvsister(nctemp9571);
struct tree* nctemp9569= nctemp9573;
nctempchar1* nctemp9574=PtreeGetname(nctemp9569);
nctempchar1* nctemp9567= nctemp9574;
struct nctempchar1 *nctemp9577;
static struct nctempchar1 nctemp9578 = {{ 10}, (char*)"iconstant\0"};
nctemp9577=&nctemp9578;
nctempchar1* nctemp9575= nctemp9577;
int nctemp9579=LibeStrcmp(nctemp9567,nctemp9575);
struct tree* nctemp9585= np;
struct tree* nctemp9587=PtreeMvsister(nctemp9585);
struct tree* nctemp9583= nctemp9587;
nctempchar1* nctemp9588=PtreeGetdef(nctemp9583);
nctempchar1* nctemp9581= nctemp9588;
struct nctempchar1 *nctemp9591;
static struct nctempchar1 nctemp9592 = {{ 2}, (char*)"0\0"};
nctemp9591=&nctemp9592;
nctempchar1* nctemp9589= nctemp9591;
int nctemp9593=LibeStrcmp(nctemp9581,nctemp9589);
int nctemp9564 = (nctemp9579 && nctemp9593);
if(nctemp9564)
{
struct tree* nctemp9595= p;
struct nctempchar1 *nctemp9599;
static struct nctempchar1 nctemp9600 = {{ 7}, (char*)"nctemp\0"};
nctemp9599=&nctemp9600;
nctempchar1* nctemp9597= nctemp9599;
int nctemp9601=CodeEs(nctemp9595,nctemp9597);
struct tree* nctemp9603= p;
struct tree* nctemp9607= sp;
nctempchar1* nctemp9609=PtreeGetype(nctemp9607);
nctempchar1* nctemp9605= nctemp9609;
int nctemp9610=CodeEs(nctemp9603,nctemp9605);
struct tree* nctemp9614= sp;
int nctemp9616=PtreeGetrank(nctemp9614);
int nctemp9612= nctemp9616;
int nctemp9617=CodeEd(nctemp9612);
struct tree* nctemp9619= p;
struct nctempchar1 *nctemp9623;
static struct nctempchar1 nctemp9624 = {{ 3}, (char*)" *\0"};
nctemp9623=&nctemp9624;
nctempchar1* nctemp9621= nctemp9623;
int nctemp9625=CodeEs(nctemp9619,nctemp9621);
struct tree* nctemp9627= p;
nctempchar1* nctemp9629= tempi;
int nctemp9632=CodeEs(nctemp9627,nctemp9629);
struct tree* nctemp9634= p;
struct nctempchar1 *nctemp9638;
static struct nctempchar1 nctemp9639 = {{ 3}, (char*)" =\0"};
nctemp9638=&nctemp9639;
nctempchar1* nctemp9636= nctemp9638;
int nctemp9640=CodeEs(nctemp9634,nctemp9636);
struct tree* nctemp9642= p;
nctempchar1* nctemp9644= lval;
int nctemp9647=CodeEs(nctemp9642,nctemp9644);
struct tree* nctemp9649= p;
struct nctempchar1 *nctemp9653;
static struct nctempchar1 nctemp9654 = {{ 4}, (char*)";\n\0"};
nctemp9653=&nctemp9654;
nctempchar1* nctemp9651= nctemp9653;
int nctemp9655=CodeEs(nctemp9649,nctemp9651);
struct tree* nctemp9657= p;
nctempchar1* nctemp9659= type;
int nctemp9662=CodeEs(nctemp9657,nctemp9659);
struct tree* nctemp9664= p;
struct nctempchar1 *nctemp9668;
static struct nctempchar1 nctemp9669 = {{ 2}, (char*)" \0"};
nctemp9668=&nctemp9669;
nctempchar1* nctemp9666= nctemp9668;
int nctemp9670=CodeEs(nctemp9664,nctemp9666);
struct tree* nctemp9672= p;
nctempchar1* nctemp9674= tempr;
int nctemp9677=CodeEs(nctemp9672,nctemp9674);
struct tree* nctemp9679= p;
struct nctempchar1 *nctemp9683;
static struct nctempchar1 nctemp9684 = {{ 4}, (char*)" =(\0"};
nctemp9683=&nctemp9684;
nctempchar1* nctemp9681= nctemp9683;
int nctemp9685=CodeEs(nctemp9679,nctemp9681);
struct tree* nctemp9687= p;
nctempchar1* nctemp9689= tempi;
int nctemp9692=CodeEs(nctemp9687,nctemp9689);
struct tree* nctemp9694= p;
struct tree* nctemp9698= p;
nctempchar1* nctemp9700=PtreeGetdef(nctemp9698);
nctempchar1* nctemp9696= nctemp9700;
int nctemp9701=CodeEs(nctemp9694,nctemp9696);
struct tree* nctemp9703= p;
nctempchar1* nctemp9705= rval;
int nctemp9708=CodeEs(nctemp9703,nctemp9705);
struct tree* nctemp9710= p;
struct nctempchar1 *nctemp9714;
static struct nctempchar1 nctemp9715 = {{ 5}, (char*)");\n\0"};
nctemp9714=&nctemp9715;
nctempchar1* nctemp9712= nctemp9714;
int nctemp9716=CodeEs(nctemp9710,nctemp9712);
return tempr;
}
else{
struct tree* nctemp9720= p;
nctempchar1* nctemp9722= type;
int nctemp9725=CodeEs(nctemp9720,nctemp9722);
struct tree* nctemp9727= p;
struct nctempchar1 *nctemp9731;
static struct nctempchar1 nctemp9732 = {{ 2}, (char*)" \0"};
nctemp9731=&nctemp9732;
nctempchar1* nctemp9729= nctemp9731;
int nctemp9733=CodeEs(nctemp9727,nctemp9729);
struct tree* nctemp9735= p;
nctempchar1* nctemp9737= tempr;
int nctemp9740=CodeEs(nctemp9735,nctemp9737);
struct tree* nctemp9742= p;
struct nctempchar1 *nctemp9746;
static struct nctempchar1 nctemp9747 = {{ 5}, (char*)" = (\0"};
nctemp9746=&nctemp9747;
nctempchar1* nctemp9744= nctemp9746;
int nctemp9748=CodeEs(nctemp9742,nctemp9744);
struct tree* nctemp9750= p;
nctempchar1* nctemp9752= lval;
int nctemp9755=CodeEs(nctemp9750,nctemp9752);
struct tree* nctemp9757= p;
struct tree* nctemp9761= p;
nctempchar1* nctemp9763=PtreeGetdef(nctemp9761);
nctempchar1* nctemp9759= nctemp9763;
int nctemp9764=CodeEs(nctemp9757,nctemp9759);
struct tree* nctemp9766= p;
nctempchar1* nctemp9768= rval;
int nctemp9771=CodeEs(nctemp9766,nctemp9768);
struct tree* nctemp9773= p;
struct nctempchar1 *nctemp9777;
static struct nctempchar1 nctemp9778 = {{ 5}, (char*)");\n\0"};
nctemp9777=&nctemp9778;
nctempchar1* nctemp9775= nctemp9777;
int nctemp9779=CodeEs(nctemp9773,nctemp9775);
return lval;
}
}
else{
struct tree* nctemp9783= p;
nctempchar1* nctemp9785= type;
int nctemp9788=CodeEs(nctemp9783,nctemp9785);
struct tree* nctemp9790= p;
struct nctempchar1 *nctemp9794;
static struct nctempchar1 nctemp9795 = {{ 2}, (char*)" \0"};
nctemp9794=&nctemp9795;
nctempchar1* nctemp9792= nctemp9794;
int nctemp9796=CodeEs(nctemp9790,nctemp9792);
struct tree* nctemp9798= p;
nctempchar1* nctemp9800= tempr;
int nctemp9803=CodeEs(nctemp9798,nctemp9800);
struct tree* nctemp9805= p;
struct nctempchar1 *nctemp9809;
static struct nctempchar1 nctemp9810 = {{ 5}, (char*)" = (\0"};
nctemp9809=&nctemp9810;
nctempchar1* nctemp9807= nctemp9809;
int nctemp9811=CodeEs(nctemp9805,nctemp9807);
struct tree* nctemp9813= p;
nctempchar1* nctemp9815= lval;
int nctemp9818=CodeEs(nctemp9813,nctemp9815);
struct tree* nctemp9820= p;
struct nctempchar1 *nctemp9824;
static struct nctempchar1 nctemp9825 = {{ 2}, (char*)" \0"};
nctemp9824=&nctemp9825;
nctempchar1* nctemp9822= nctemp9824;
int nctemp9826=CodeEs(nctemp9820,nctemp9822);
struct tree* nctemp9828= p;
struct tree* nctemp9832= p;
nctempchar1* nctemp9834=PtreeGetdef(nctemp9832);
nctempchar1* nctemp9830= nctemp9834;
int nctemp9835=CodeEs(nctemp9828,nctemp9830);
struct tree* nctemp9837= p;
nctempchar1* nctemp9839= rval;
int nctemp9842=CodeEs(nctemp9837,nctemp9839);
struct tree* nctemp9844= p;
struct nctempchar1 *nctemp9848;
static struct nctempchar1 nctemp9849 = {{ 5}, (char*)");\n\0"};
nctemp9848=&nctemp9849;
nctempchar1* nctemp9846= nctemp9848;
int nctemp9850=CodeEs(nctemp9844,nctemp9846);
return tempr;
}
}
else{
struct tree* nctemp9854= p;
nctempchar1* nctemp9856= type;
int nctemp9859=CodeEs(nctemp9854,nctemp9856);
struct tree* nctemp9861= p;
struct nctempchar1 *nctemp9865;
static struct nctempchar1 nctemp9866 = {{ 2}, (char*)" \0"};
nctemp9865=&nctemp9866;
nctempchar1* nctemp9863= nctemp9865;
int nctemp9867=CodeEs(nctemp9861,nctemp9863);
struct tree* nctemp9869= p;
nctempchar1* nctemp9871= tempr;
int nctemp9874=CodeEs(nctemp9869,nctemp9871);
struct tree* nctemp9876= p;
struct nctempchar1 *nctemp9880;
static struct nctempchar1 nctemp9881 = {{ 5}, (char*)" = (\0"};
nctemp9880=&nctemp9881;
nctempchar1* nctemp9878= nctemp9880;
int nctemp9882=CodeEs(nctemp9876,nctemp9878);
struct tree* nctemp9884= p;
nctempchar1* nctemp9886= lval;
int nctemp9889=CodeEs(nctemp9884,nctemp9886);
struct tree* nctemp9891= p;
struct nctempchar1 *nctemp9895;
static struct nctempchar1 nctemp9896 = {{ 2}, (char*)" \0"};
nctemp9895=&nctemp9896;
nctempchar1* nctemp9893= nctemp9895;
int nctemp9897=CodeEs(nctemp9891,nctemp9893);
struct tree* nctemp9899= p;
struct tree* nctemp9903= p;
nctempchar1* nctemp9905=PtreeGetdef(nctemp9903);
nctempchar1* nctemp9901= nctemp9905;
int nctemp9906=CodeEs(nctemp9899,nctemp9901);
struct tree* nctemp9908= p;
struct nctempchar1 *nctemp9912;
static struct nctempchar1 nctemp9913 = {{ 2}, (char*)" \0"};
nctemp9912=&nctemp9913;
nctempchar1* nctemp9910= nctemp9912;
int nctemp9914=CodeEs(nctemp9908,nctemp9910);
struct tree* nctemp9916= p;
nctempchar1* nctemp9918= rval;
int nctemp9921=CodeEs(nctemp9916,nctemp9918);
struct tree* nctemp9923= p;
struct nctempchar1 *nctemp9927;
static struct nctempchar1 nctemp9928 = {{ 5}, (char*)");\n\0"};
nctemp9927=&nctemp9928;
nctempchar1* nctemp9925= nctemp9927;
int nctemp9929=CodeEs(nctemp9923,nctemp9925);
return tempr;
}
}
}
}
else{
struct tree* nctemp9933= p;
nctempchar1* nctemp9935=CodeUnexpr(nctemp9933);
return nctemp9935;
}
}
nctempchar1 * CodeExpr (struct tree* p)
{
struct tree* sp;
nctempchar1 *rval;
struct tree* nctemp9940= p;
struct tree* nctemp9942=PtreeMvchild(nctemp9940);
sp =nctemp9942;
struct tree* nctemp9948= sp;
nctempchar1* nctemp9950=CodeBinexpr(nctemp9948);
rval=nctemp9950;
return rval;
}
int CodeWhilestmnt (struct tree* p)
{
nctempchar1 *cond;
nctempchar1 *tmp;
nctempchar1 *cond2;
struct tree* sp;
struct tree* nctemp9957= p;
struct tree* nctemp9959=PtreeMvchild(nctemp9957);
p =nctemp9959;
sp =p;
struct tree* nctemp9969= sp;
nctempchar1* nctemp9971=CodeExpr(nctemp9969);
cond=nctemp9971;
nctempchar1* nctemp9977=CodeMktemp();
tmp=nctemp9977;
struct tree* nctemp9979= p;
struct tree* nctemp9983= sp;
nctempchar1* nctemp9985=PtreeGetype(nctemp9983);
nctempchar1* nctemp9981= nctemp9985;
int nctemp9986=CodeEs(nctemp9979,nctemp9981);
struct tree* nctemp9988= p;
struct nctempchar1 *nctemp9992;
static struct nctempchar1 nctemp9993 = {{ 2}, (char*)" \0"};
nctemp9992=&nctemp9993;
nctempchar1* nctemp9990= nctemp9992;
int nctemp9994=CodeEs(nctemp9988,nctemp9990);
struct tree* nctemp9996= p;
nctempchar1* nctemp9998= tmp;
int nctemp10001=CodeEs(nctemp9996,nctemp9998);
struct tree* nctemp10003= p;
struct nctempchar1 *nctemp10007;
static struct nctempchar1 nctemp10008 = {{ 2}, (char*)"=\0"};
nctemp10007=&nctemp10008;
nctempchar1* nctemp10005= nctemp10007;
int nctemp10009=CodeEs(nctemp10003,nctemp10005);
struct tree* nctemp10011= p;
nctempchar1* nctemp10013= cond;
int nctemp10016=CodeEs(nctemp10011,nctemp10013);
struct tree* nctemp10018= p;
struct nctempchar1 *nctemp10022;
static struct nctempchar1 nctemp10023 = {{ 4}, (char*)";\n\0"};
nctemp10022=&nctemp10023;
nctempchar1* nctemp10020= nctemp10022;
int nctemp10024=CodeEs(nctemp10018,nctemp10020);
struct tree* nctemp10026= p;
struct nctempchar1 *nctemp10030;
static struct nctempchar1 nctemp10031 = {{ 7}, (char*)"while(\0"};
nctemp10030=&nctemp10031;
nctempchar1* nctemp10028= nctemp10030;
int nctemp10032=CodeEs(nctemp10026,nctemp10028);
struct tree* nctemp10034= p;
nctempchar1* nctemp10036= tmp;
int nctemp10039=CodeEs(nctemp10034,nctemp10036);
struct tree* nctemp10041= p;
struct nctempchar1 *nctemp10045;
static struct nctempchar1 nctemp10046 = {{ 4}, (char*)")\n\0"};
nctemp10045=&nctemp10046;
nctempchar1* nctemp10043= nctemp10045;
int nctemp10047=CodeEs(nctemp10041,nctemp10043);
struct tree* nctemp10049= p;
struct nctempchar1 *nctemp10053;
static struct nctempchar1 nctemp10054 = {{ 2}, (char*)"{\0"};
nctemp10053=&nctemp10054;
nctempchar1* nctemp10051= nctemp10053;
int nctemp10055=CodeEs(nctemp10049,nctemp10051);
struct tree* nctemp10060= p;
struct tree* nctemp10062=PtreeMvsister(nctemp10060);
p =nctemp10062;
struct tree* nctemp10064= p;
int nctemp10066=CodeStmnt(nctemp10064);
struct tree* nctemp10072= sp;
nctempchar1* nctemp10074=CodeExpr(nctemp10072);
cond2=nctemp10074;
struct tree* nctemp10076= p;
nctempchar1* nctemp10078= tmp;
int nctemp10081=CodeEs(nctemp10076,nctemp10078);
struct tree* nctemp10083= p;
struct nctempchar1 *nctemp10087;
static struct nctempchar1 nctemp10088 = {{ 2}, (char*)"=\0"};
nctemp10087=&nctemp10088;
nctempchar1* nctemp10085= nctemp10087;
int nctemp10089=CodeEs(nctemp10083,nctemp10085);
struct tree* nctemp10091= p;
nctempchar1* nctemp10093= cond2;
int nctemp10096=CodeEs(nctemp10091,nctemp10093);
struct tree* nctemp10098= p;
struct nctempchar1 *nctemp10102;
static struct nctempchar1 nctemp10103 = {{ 2}, (char*)";\0"};
nctemp10102=&nctemp10103;
nctempchar1* nctemp10100= nctemp10102;
int nctemp10104=CodeEs(nctemp10098,nctemp10100);
struct tree* nctemp10106= p;
struct nctempchar1 *nctemp10110;
static struct nctempchar1 nctemp10111 = {{ 2}, (char*)"}\0"};
nctemp10110=&nctemp10111;
nctempchar1* nctemp10108= nctemp10110;
int nctemp10112=CodeEs(nctemp10106,nctemp10108);
return 1;
}
int CodeForstmnt (struct tree* p)
{
struct tree* sp;
struct tree* np;
nctempchar1 *cond;
nctempchar1 *tmp;
struct tree* nctemp10118= p;
struct tree* nctemp10120=PtreeMvchild(nctemp10118);
p =nctemp10120;
struct tree* nctemp10122= p;
nctempchar1* nctemp10124=CodeExpr(nctemp10122);
struct tree* nctemp10129= p;
struct tree* nctemp10131=PtreeMvsister(nctemp10129);
p =nctemp10131;
np =p;
struct tree* nctemp10141= p;
nctempchar1* nctemp10143=CodeExpr(nctemp10141);
cond=nctemp10143;
struct tree* nctemp10145= p;
struct nctempchar1 *nctemp10149;
static struct nctempchar1 nctemp10150 = {{ 7}, (char*)"while(\0"};
nctemp10149=&nctemp10150;
nctempchar1* nctemp10147= nctemp10149;
int nctemp10151=CodeEs(nctemp10145,nctemp10147);
struct tree* nctemp10153= p;
nctempchar1* nctemp10155= cond;
int nctemp10158=CodeEs(nctemp10153,nctemp10155);
struct tree* nctemp10160= p;
struct nctempchar1 *nctemp10164;
static struct nctempchar1 nctemp10165 = {{ 5}, (char*)"){\n\0"};
nctemp10164=&nctemp10165;
nctempchar1* nctemp10162= nctemp10164;
int nctemp10166=CodeEs(nctemp10160,nctemp10162);
struct tree* nctemp10171= p;
struct tree* nctemp10173=PtreeMvsister(nctemp10171);
p =nctemp10173;
sp =p;
struct tree* nctemp10182= p;
struct tree* nctemp10184=PtreeMvsister(nctemp10182);
p =nctemp10184;
struct tree* nctemp10186= p;
int nctemp10188=CodeStmnt(nctemp10186);
struct tree* nctemp10190= sp;
nctempchar1* nctemp10192=CodeExpr(nctemp10190);
struct tree* nctemp10198= np;
nctempchar1* nctemp10200=CodeExpr(nctemp10198);
tmp=nctemp10200;
struct tree* nctemp10202= p;
nctempchar1* nctemp10204= cond;
int nctemp10207=CodeEs(nctemp10202,nctemp10204);
struct tree* nctemp10209= p;
struct nctempchar1 *nctemp10213;
static struct nctempchar1 nctemp10214 = {{ 2}, (char*)"=\0"};
nctemp10213=&nctemp10214;
nctempchar1* nctemp10211= nctemp10213;
int nctemp10215=CodeEs(nctemp10209,nctemp10211);
struct tree* nctemp10217= p;
nctempchar1* nctemp10219= tmp;
int nctemp10222=CodeEs(nctemp10217,nctemp10219);
struct tree* nctemp10224= p;
struct nctempchar1 *nctemp10228;
static struct nctempchar1 nctemp10229 = {{ 4}, (char*)";\n\0"};
nctemp10228=&nctemp10229;
nctempchar1* nctemp10226= nctemp10228;
int nctemp10230=CodeEs(nctemp10224,nctemp10226);
struct tree* nctemp10232= p;
struct nctempchar1 *nctemp10236;
static struct nctempchar1 nctemp10237 = {{ 4}, (char*)"}\n\0"};
nctemp10236=&nctemp10237;
nctempchar1* nctemp10234= nctemp10236;
int nctemp10238=CodeEs(nctemp10232,nctemp10234);
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
int nctemp10252 = level + 1;
level =nctemp10252;
int nctemp10253 = (p ==0);
if(nctemp10253)
{
return 1;
}
struct tree* nctemp10262= p;
struct tree* nctemp10264=PtreeMvsister(nctemp10262);
p =nctemp10264;
struct tree* nctemp10266= p;
int nctemp10268= level;
int nctemp10270= rank;
int nctemp10272=CodeParallelfor(nctemp10266,nctemp10268,nctemp10270);
struct tree* nctemp10277= sp;
struct tree* nctemp10279=PtreeMvchild(nctemp10277);
rp =nctemp10279;
struct tree* nctemp10284= rp;
struct tree* nctemp10286=PtreeMvchild(nctemp10284);
qp =nctemp10286;
struct tree* nctemp10291= qp;
struct tree* nctemp10293=PtreeMvchild(nctemp10291);
qp =nctemp10293;
struct tree* nctemp10299= qp;
nctempchar1* nctemp10301=PtreeGetdef(nctemp10299);
index=nctemp10301;
struct tree* nctemp10309= qp;
struct tree* nctemp10311=PtreeMvsister(nctemp10309);
struct tree* nctemp10307= nctemp10311;
nctempchar1* nctemp10312=CodeBinexpr(nctemp10307);
init=nctemp10312;
struct tree* nctemp10317= rp;
struct tree* nctemp10319=PtreeMvsister(nctemp10317);
rrp =nctemp10319;
struct tree* nctemp10325= rrp;
nctempchar1* nctemp10327=CodeExpr(nctemp10325);
cond=nctemp10327;
int nctemp10328 = (level ==rank);
if(nctemp10328)
{
struct tree* nctemp10333= p;
struct nctempchar1 *nctemp10337;
static struct nctempchar1 nctemp10338 = {{ 30}, (char*)"\n #pragma omp parallel for\n\0"};
nctemp10337=&nctemp10338;
nctempchar1* nctemp10335= nctemp10337;
int nctemp10339=CodeEs(nctemp10333,nctemp10335);
}
struct tree* nctemp10341= rp;
struct nctempchar1 *nctemp10345;
static struct nctempchar1 nctemp10346 = {{ 5}, (char*)"for(\0"};
nctemp10345=&nctemp10346;
nctempchar1* nctemp10343= nctemp10345;
int nctemp10347=CodeEs(nctemp10341,nctemp10343);
struct tree* nctemp10349= rp;
nctempchar1* nctemp10351= index;
int nctemp10354=CodeEs(nctemp10349,nctemp10351);
struct tree* nctemp10356= rp;
struct nctempchar1 *nctemp10360;
static struct nctempchar1 nctemp10361 = {{ 2}, (char*)"=\0"};
nctemp10360=&nctemp10361;
nctempchar1* nctemp10358= nctemp10360;
int nctemp10362=CodeEs(nctemp10356,nctemp10358);
struct tree* nctemp10364= rp;
nctempchar1* nctemp10366= init;
int nctemp10369=CodeEs(nctemp10364,nctemp10366);
struct tree* nctemp10371= rp;
struct nctempchar1 *nctemp10375;
static struct nctempchar1 nctemp10376 = {{ 2}, (char*)";\0"};
nctemp10375=&nctemp10376;
nctempchar1* nctemp10373= nctemp10375;
int nctemp10377=CodeEs(nctemp10371,nctemp10373);
struct tree* nctemp10382= rp;
struct tree* nctemp10384=PtreeMvsister(nctemp10382);
rp =nctemp10384;
struct tree* nctemp10386= rp;
nctempchar1* nctemp10388= index;
int nctemp10391=CodeEs(nctemp10386,nctemp10388);
struct tree* nctemp10393= rp;
struct nctempchar1 *nctemp10397;
static struct nctempchar1 nctemp10398 = {{ 2}, (char*)"<\0"};
nctemp10397=&nctemp10398;
nctempchar1* nctemp10395= nctemp10397;
int nctemp10399=CodeEs(nctemp10393,nctemp10395);
struct tree* nctemp10401= p;
nctempchar1* nctemp10403= cond;
int nctemp10406=CodeEs(nctemp10401,nctemp10403);
struct tree* nctemp10408= rp;
struct nctempchar1 *nctemp10412;
static struct nctempchar1 nctemp10413 = {{ 2}, (char*)";\0"};
nctemp10412=&nctemp10413;
nctempchar1* nctemp10410= nctemp10412;
int nctemp10414=CodeEs(nctemp10408,nctemp10410);
struct tree* nctemp10422= rp;
struct tree* nctemp10424=PtreeMvsister(nctemp10422);
rp =nctemp10424;
int nctemp10415 = (rp !=0);
if(nctemp10415)
{
struct tree* nctemp10427= rp;
nctempchar1* nctemp10429= index;
int nctemp10432=CodeEs(nctemp10427,nctemp10429);
struct tree* nctemp10434= rp;
struct nctempchar1 *nctemp10438;
static struct nctempchar1 nctemp10439 = {{ 2}, (char*)"=\0"};
nctemp10438=&nctemp10439;
nctempchar1* nctemp10436= nctemp10438;
int nctemp10440=CodeEs(nctemp10434,nctemp10436);
struct tree* nctemp10442= rp;
nctempchar1* nctemp10444= index;
int nctemp10447=CodeEs(nctemp10442,nctemp10444);
struct tree* nctemp10449= rp;
struct nctempchar1 *nctemp10453;
static struct nctempchar1 nctemp10454 = {{ 2}, (char*)"+\0"};
nctemp10453=&nctemp10454;
nctempchar1* nctemp10451= nctemp10453;
int nctemp10455=CodeEs(nctemp10449,nctemp10451);
struct tree* nctemp10457= rp;
nctempchar1* nctemp10459=CodeExpr(nctemp10457);
}
else{
struct tree* nctemp10461= rp;
nctempchar1* nctemp10463= index;
int nctemp10466=CodeEs(nctemp10461,nctemp10463);
struct tree* nctemp10468= rp;
struct nctempchar1 *nctemp10472;
static struct nctempchar1 nctemp10473 = {{ 2}, (char*)"=\0"};
nctemp10472=&nctemp10473;
nctempchar1* nctemp10470= nctemp10472;
int nctemp10474=CodeEs(nctemp10468,nctemp10470);
struct tree* nctemp10476= rp;
nctempchar1* nctemp10478= index;
int nctemp10481=CodeEs(nctemp10476,nctemp10478);
struct tree* nctemp10483= rp;
struct nctempchar1 *nctemp10487;
static struct nctempchar1 nctemp10488 = {{ 2}, (char*)"+\0"};
nctemp10487=&nctemp10488;
nctempchar1* nctemp10485= nctemp10487;
int nctemp10489=CodeEs(nctemp10483,nctemp10485);
struct tree* nctemp10491= rp;
struct nctempchar1 *nctemp10495;
static struct nctempchar1 nctemp10496 = {{ 2}, (char*)"1\0"};
nctemp10495=&nctemp10496;
nctempchar1* nctemp10493= nctemp10495;
int nctemp10497=CodeEs(nctemp10491,nctemp10493);
}
struct tree* nctemp10499= rp;
struct nctempchar1 *nctemp10503;
static struct nctempchar1 nctemp10504 = {{ 3}, (char*)"){\0"};
nctemp10503=&nctemp10504;
nctempchar1* nctemp10501= nctemp10503;
int nctemp10505=CodeEs(nctemp10499,nctemp10501);
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
int nctemp10508= 1;
int nctemp10510=CodeSetparallel(nctemp10508);
sp =p;
struct nctempchar1 *nctemp10520;
static struct nctempchar1 nctemp10521 = {{ 9}, (char*)"nctempno\0"};
nctemp10520=&nctemp10521;
pno=nctemp10520;
struct tree* nctemp10526= p;
int nctemp10528=PtreeGetrank(nctemp10526);
rank =nctemp10528;
struct tree* nctemp10533= p;
struct tree* nctemp10535=PtreeMvchild(nctemp10533);
p =nctemp10535;
psliceseq =p;
nctempchar1* nctemp10545=CodeMktemp();
nmax=nctemp10545;
struct tree* nctemp10550= psliceseq;
struct tree* nctemp10552=PtreeMvchild(nctemp10550);
p =nctemp10552;
ps =p;
struct nctempchar1 *nctemp10564;
static struct nctempchar1 nctemp10565 = {{ 4}, (char*)"int\0"};
nctemp10564=&nctemp10565;
nctempchar1* nctemp10562= nctemp10564;
nctempchar1* nctemp10566=CodeNewtemp(nctemp10562);
n1=nctemp10566;
struct nctempchar1 *nctemp10574;
static struct nctempchar1 nctemp10575 = {{ 4}, (char*)"int\0"};
nctemp10574=&nctemp10575;
nctempchar1* nctemp10572= nctemp10574;
nctempchar1* nctemp10576=CodeNewtemp(nctemp10572);
m1=nctemp10576;
struct tree* nctemp10581= p;
struct tree* nctemp10583=PtreeMvchild(nctemp10581);
q =nctemp10583;
struct tree* nctemp10588= q;
struct tree* nctemp10590=PtreeMvchild(nctemp10588);
q =nctemp10590;
struct tree* nctemp10595= q;
struct tree* nctemp10597=PtreeMvchild(nctemp10595);
q =nctemp10597;
ix =q;
struct tree* nctemp10606= q;
struct tree* nctemp10608=PtreeMvsister(nctemp10606);
q =nctemp10608;
struct tree* nctemp10614= q;
nctempchar1* nctemp10616=CodeUnexpr(nctemp10614);
tmp=nctemp10616;
struct tree* nctemp10618= p;
struct nctempchar1 *nctemp10622;
static struct nctempchar1 nctemp10623 = {{ 5}, (char*)"int \0"};
nctemp10622=&nctemp10623;
nctempchar1* nctemp10620= nctemp10622;
int nctemp10624=CodeEs(nctemp10618,nctemp10620);
struct tree* nctemp10626= p;
nctempchar1* nctemp10628= m1;
int nctemp10631=CodeEs(nctemp10626,nctemp10628);
struct tree* nctemp10633= p;
struct nctempchar1 *nctemp10637;
static struct nctempchar1 nctemp10638 = {{ 2}, (char*)"=\0"};
nctemp10637=&nctemp10638;
nctempchar1* nctemp10635= nctemp10637;
int nctemp10639=CodeEs(nctemp10633,nctemp10635);
struct tree* nctemp10641= p;
nctempchar1* nctemp10643= tmp;
int nctemp10646=CodeEs(nctemp10641,nctemp10643);
struct tree* nctemp10648= p;
struct nctempchar1 *nctemp10652;
static struct nctempchar1 nctemp10653 = {{ 4}, (char*)";\n\0"};
nctemp10652=&nctemp10653;
nctempchar1* nctemp10650= nctemp10652;
int nctemp10654=CodeEs(nctemp10648,nctemp10650);
struct tree* nctemp10660= ix;
nctempchar1* nctemp10662=PtreeGetdef(nctemp10660);
indx1=nctemp10662;
struct tree* nctemp10667= ps;
struct tree* nctemp10669=PtreeMvchild(nctemp10667);
q =nctemp10669;
struct tree* nctemp10674= q;
struct tree* nctemp10676=PtreeMvsister(nctemp10674);
q =nctemp10676;
struct tree* nctemp10684= ps;
nctempchar1* nctemp10686=PtreeGetype(nctemp10684);
nctempchar1* nctemp10682= nctemp10686;
nctempchar1* nctemp10687=CodeNewtemp(nctemp10682);
n1=nctemp10687;
struct tree* nctemp10693= q;
nctempchar1* nctemp10695=CodeExpr(nctemp10693);
tmp=nctemp10695;
struct tree* nctemp10697= q;
struct nctempchar1 *nctemp10701;
static struct nctempchar1 nctemp10702 = {{ 5}, (char*)"int \0"};
nctemp10701=&nctemp10702;
nctempchar1* nctemp10699= nctemp10701;
int nctemp10703=CodeEs(nctemp10697,nctemp10699);
struct tree* nctemp10705= q;
nctempchar1* nctemp10707= n1;
int nctemp10710=CodeEs(nctemp10705,nctemp10707);
struct tree* nctemp10712= q;
struct nctempchar1 *nctemp10716;
static struct nctempchar1 nctemp10717 = {{ 2}, (char*)"=\0"};
nctemp10716=&nctemp10717;
nctempchar1* nctemp10714= nctemp10716;
int nctemp10718=CodeEs(nctemp10712,nctemp10714);
struct tree* nctemp10720= q;
nctempchar1* nctemp10722= tmp;
int nctemp10725=CodeEs(nctemp10720,nctemp10722);
struct tree* nctemp10727= q;
struct nctempchar1 *nctemp10731;
static struct nctempchar1 nctemp10732 = {{ 4}, (char*)";\n\0"};
nctemp10731=&nctemp10732;
nctempchar1* nctemp10729= nctemp10731;
int nctemp10733=CodeEs(nctemp10727,nctemp10729);
int nctemp10734 = (rank > 1);
if(nctemp10734)
{
struct tree* nctemp10742= psliceseq;
struct tree* nctemp10744=PtreeMvchild(nctemp10742);
p =nctemp10744;
struct tree* nctemp10749= p;
struct tree* nctemp10751=PtreeMvsister(nctemp10749);
p =nctemp10751;
ps =p;
struct nctempchar1 *nctemp10763;
static struct nctempchar1 nctemp10764 = {{ 4}, (char*)"int\0"};
nctemp10763=&nctemp10764;
nctempchar1* nctemp10761= nctemp10763;
nctempchar1* nctemp10765=CodeNewtemp(nctemp10761);
n2=nctemp10765;
struct nctempchar1 *nctemp10773;
static struct nctempchar1 nctemp10774 = {{ 4}, (char*)"int\0"};
nctemp10773=&nctemp10774;
nctempchar1* nctemp10771= nctemp10773;
nctempchar1* nctemp10775=CodeNewtemp(nctemp10771);
m2=nctemp10775;
struct tree* nctemp10780= p;
struct tree* nctemp10782=PtreeMvchild(nctemp10780);
q =nctemp10782;
struct tree* nctemp10787= q;
struct tree* nctemp10789=PtreeMvchild(nctemp10787);
q =nctemp10789;
struct tree* nctemp10794= q;
struct tree* nctemp10796=PtreeMvchild(nctemp10794);
q =nctemp10796;
ix =q;
struct tree* nctemp10805= q;
struct tree* nctemp10807=PtreeMvsister(nctemp10805);
q =nctemp10807;
struct tree* nctemp10813= q;
nctempchar1* nctemp10815=CodeUnexpr(nctemp10813);
tmp=nctemp10815;
struct tree* nctemp10817= p;
struct nctempchar1 *nctemp10821;
static struct nctempchar1 nctemp10822 = {{ 5}, (char*)"int \0"};
nctemp10821=&nctemp10822;
nctempchar1* nctemp10819= nctemp10821;
int nctemp10823=CodeEs(nctemp10817,nctemp10819);
struct tree* nctemp10825= p;
nctempchar1* nctemp10827= m2;
int nctemp10830=CodeEs(nctemp10825,nctemp10827);
struct tree* nctemp10832= p;
struct nctempchar1 *nctemp10836;
static struct nctempchar1 nctemp10837 = {{ 2}, (char*)"=\0"};
nctemp10836=&nctemp10837;
nctempchar1* nctemp10834= nctemp10836;
int nctemp10838=CodeEs(nctemp10832,nctemp10834);
struct tree* nctemp10840= p;
nctempchar1* nctemp10842= tmp;
int nctemp10845=CodeEs(nctemp10840,nctemp10842);
struct tree* nctemp10847= p;
struct nctempchar1 *nctemp10851;
static struct nctempchar1 nctemp10852 = {{ 4}, (char*)";\n\0"};
nctemp10851=&nctemp10852;
nctempchar1* nctemp10849= nctemp10851;
int nctemp10853=CodeEs(nctemp10847,nctemp10849);
struct tree* nctemp10859= ix;
nctempchar1* nctemp10861=PtreeGetdef(nctemp10859);
indx2=nctemp10861;
struct tree* nctemp10866= ps;
struct tree* nctemp10868=PtreeMvchild(nctemp10866);
q =nctemp10868;
struct tree* nctemp10873= q;
struct tree* nctemp10875=PtreeMvsister(nctemp10873);
q =nctemp10875;
struct tree* nctemp10883= ps;
nctempchar1* nctemp10885=PtreeGetype(nctemp10883);
nctempchar1* nctemp10881= nctemp10885;
nctempchar1* nctemp10886=CodeNewtemp(nctemp10881);
n2=nctemp10886;
struct tree* nctemp10892= q;
nctempchar1* nctemp10894=CodeExpr(nctemp10892);
tmp=nctemp10894;
struct tree* nctemp10896= q;
struct nctempchar1 *nctemp10900;
static struct nctempchar1 nctemp10901 = {{ 5}, (char*)"int \0"};
nctemp10900=&nctemp10901;
nctempchar1* nctemp10898= nctemp10900;
int nctemp10902=CodeEs(nctemp10896,nctemp10898);
struct tree* nctemp10904= q;
nctempchar1* nctemp10906= n2;
int nctemp10909=CodeEs(nctemp10904,nctemp10906);
struct tree* nctemp10911= q;
struct nctempchar1 *nctemp10915;
static struct nctempchar1 nctemp10916 = {{ 2}, (char*)"=\0"};
nctemp10915=&nctemp10916;
nctempchar1* nctemp10913= nctemp10915;
int nctemp10917=CodeEs(nctemp10911,nctemp10913);
struct tree* nctemp10919= q;
nctempchar1* nctemp10921= tmp;
int nctemp10924=CodeEs(nctemp10919,nctemp10921);
struct tree* nctemp10926= q;
struct nctempchar1 *nctemp10930;
static struct nctempchar1 nctemp10931 = {{ 4}, (char*)";\n\0"};
nctemp10930=&nctemp10931;
nctempchar1* nctemp10928= nctemp10930;
int nctemp10932=CodeEs(nctemp10926,nctemp10928);
}
int nctemp10933 = (rank > 2);
if(nctemp10933)
{
struct tree* nctemp10941= psliceseq;
struct tree* nctemp10943=PtreeMvchild(nctemp10941);
p =nctemp10943;
struct tree* nctemp10948= p;
struct tree* nctemp10950=PtreeMvsister(nctemp10948);
p =nctemp10950;
struct tree* nctemp10955= p;
struct tree* nctemp10957=PtreeMvsister(nctemp10955);
p =nctemp10957;
ps =p;
struct nctempchar1 *nctemp10969;
static struct nctempchar1 nctemp10970 = {{ 4}, (char*)"int\0"};
nctemp10969=&nctemp10970;
nctempchar1* nctemp10967= nctemp10969;
nctempchar1* nctemp10971=CodeNewtemp(nctemp10967);
n3=nctemp10971;
struct nctempchar1 *nctemp10979;
static struct nctempchar1 nctemp10980 = {{ 4}, (char*)"int\0"};
nctemp10979=&nctemp10980;
nctempchar1* nctemp10977= nctemp10979;
nctempchar1* nctemp10981=CodeNewtemp(nctemp10977);
m3=nctemp10981;
struct tree* nctemp10986= p;
struct tree* nctemp10988=PtreeMvchild(nctemp10986);
q =nctemp10988;
struct tree* nctemp10993= q;
struct tree* nctemp10995=PtreeMvchild(nctemp10993);
q =nctemp10995;
struct tree* nctemp11000= q;
struct tree* nctemp11002=PtreeMvchild(nctemp11000);
q =nctemp11002;
ix =q;
struct tree* nctemp11011= q;
struct tree* nctemp11013=PtreeMvsister(nctemp11011);
q =nctemp11013;
struct tree* nctemp11019= q;
nctempchar1* nctemp11021=CodeUnexpr(nctemp11019);
tmp=nctemp11021;
struct tree* nctemp11023= p;
struct nctempchar1 *nctemp11027;
static struct nctempchar1 nctemp11028 = {{ 5}, (char*)"int \0"};
nctemp11027=&nctemp11028;
nctempchar1* nctemp11025= nctemp11027;
int nctemp11029=CodeEs(nctemp11023,nctemp11025);
struct tree* nctemp11031= p;
nctempchar1* nctemp11033= m3;
int nctemp11036=CodeEs(nctemp11031,nctemp11033);
struct tree* nctemp11038= p;
struct nctempchar1 *nctemp11042;
static struct nctempchar1 nctemp11043 = {{ 2}, (char*)"=\0"};
nctemp11042=&nctemp11043;
nctempchar1* nctemp11040= nctemp11042;
int nctemp11044=CodeEs(nctemp11038,nctemp11040);
struct tree* nctemp11046= p;
nctempchar1* nctemp11048= tmp;
int nctemp11051=CodeEs(nctemp11046,nctemp11048);
struct tree* nctemp11053= p;
struct nctempchar1 *nctemp11057;
static struct nctempchar1 nctemp11058 = {{ 4}, (char*)";\n\0"};
nctemp11057=&nctemp11058;
nctempchar1* nctemp11055= nctemp11057;
int nctemp11059=CodeEs(nctemp11053,nctemp11055);
struct tree* nctemp11065= ix;
nctempchar1* nctemp11067=PtreeGetdef(nctemp11065);
indx2=nctemp11067;
struct tree* nctemp11072= ps;
struct tree* nctemp11074=PtreeMvchild(nctemp11072);
q =nctemp11074;
struct tree* nctemp11079= q;
struct tree* nctemp11081=PtreeMvsister(nctemp11079);
q =nctemp11081;
struct tree* nctemp11089= ps;
nctempchar1* nctemp11091=PtreeGetype(nctemp11089);
nctempchar1* nctemp11087= nctemp11091;
nctempchar1* nctemp11092=CodeNewtemp(nctemp11087);
n3=nctemp11092;
struct tree* nctemp11098= q;
nctempchar1* nctemp11100=CodeExpr(nctemp11098);
tmp=nctemp11100;
struct tree* nctemp11102= q;
struct nctempchar1 *nctemp11106;
static struct nctempchar1 nctemp11107 = {{ 5}, (char*)"int \0"};
nctemp11106=&nctemp11107;
nctempchar1* nctemp11104= nctemp11106;
int nctemp11108=CodeEs(nctemp11102,nctemp11104);
struct tree* nctemp11110= q;
nctempchar1* nctemp11112= n3;
int nctemp11115=CodeEs(nctemp11110,nctemp11112);
struct tree* nctemp11117= q;
struct nctempchar1 *nctemp11121;
static struct nctempchar1 nctemp11122 = {{ 2}, (char*)"=\0"};
nctemp11121=&nctemp11122;
nctempchar1* nctemp11119= nctemp11121;
int nctemp11123=CodeEs(nctemp11117,nctemp11119);
struct tree* nctemp11125= q;
nctempchar1* nctemp11127= tmp;
int nctemp11130=CodeEs(nctemp11125,nctemp11127);
struct tree* nctemp11132= q;
struct nctempchar1 *nctemp11136;
static struct nctempchar1 nctemp11137 = {{ 4}, (char*)";\n\0"};
nctemp11136=&nctemp11137;
nctempchar1* nctemp11134= nctemp11136;
int nctemp11138=CodeEs(nctemp11132,nctemp11134);
}
p =sp;
int nctemp11143 = (rank ==1);
if(nctemp11143)
{
struct tree* nctemp11148= p;
struct nctempchar1 *nctemp11152;
static struct nctempchar1 nctemp11153 = {{ 5}, (char*)"int \0"};
nctemp11152=&nctemp11153;
nctempchar1* nctemp11150= nctemp11152;
int nctemp11154=CodeEs(nctemp11148,nctemp11150);
struct tree* nctemp11156= p;
nctempchar1* nctemp11158= nmax;
int nctemp11161=CodeEs(nctemp11156,nctemp11158);
struct tree* nctemp11163= p;
struct nctempchar1 *nctemp11167;
static struct nctempchar1 nctemp11168 = {{ 2}, (char*)"=\0"};
nctemp11167=&nctemp11168;
nctempchar1* nctemp11165= nctemp11167;
int nctemp11169=CodeEs(nctemp11163,nctemp11165);
struct tree* nctemp11171= p;
nctempchar1* nctemp11173= n1;
int nctemp11176=CodeEs(nctemp11171,nctemp11173);
struct tree* nctemp11178= p;
struct nctempchar1 *nctemp11182;
static struct nctempchar1 nctemp11183 = {{ 2}, (char*)"-\0"};
nctemp11182=&nctemp11183;
nctempchar1* nctemp11180= nctemp11182;
int nctemp11184=CodeEs(nctemp11178,nctemp11180);
struct tree* nctemp11186= p;
nctempchar1* nctemp11188= m1;
int nctemp11191=CodeEs(nctemp11186,nctemp11188);
struct tree* nctemp11193= p;
struct nctempchar1 *nctemp11197;
static struct nctempchar1 nctemp11198 = {{ 4}, (char*)";\n\0"};
nctemp11197=&nctemp11198;
nctempchar1* nctemp11195= nctemp11197;
int nctemp11199=CodeEs(nctemp11193,nctemp11195);
}
int nctemp11200 = (rank ==2);
if(nctemp11200)
{
struct tree* nctemp11205= p;
struct nctempchar1 *nctemp11209;
static struct nctempchar1 nctemp11210 = {{ 5}, (char*)"int \0"};
nctemp11209=&nctemp11210;
nctempchar1* nctemp11207= nctemp11209;
int nctemp11211=CodeEs(nctemp11205,nctemp11207);
struct tree* nctemp11213= p;
nctempchar1* nctemp11215= nmax;
int nctemp11218=CodeEs(nctemp11213,nctemp11215);
struct tree* nctemp11220= p;
struct nctempchar1 *nctemp11224;
static struct nctempchar1 nctemp11225 = {{ 2}, (char*)"=\0"};
nctemp11224=&nctemp11225;
nctempchar1* nctemp11222= nctemp11224;
int nctemp11226=CodeEs(nctemp11220,nctemp11222);
struct tree* nctemp11228= p;
struct nctempchar1 *nctemp11232;
static struct nctempchar1 nctemp11233 = {{ 2}, (char*)"(\0"};
nctemp11232=&nctemp11233;
nctempchar1* nctemp11230= nctemp11232;
int nctemp11234=CodeEs(nctemp11228,nctemp11230);
struct tree* nctemp11236= p;
nctempchar1* nctemp11238= n1;
int nctemp11241=CodeEs(nctemp11236,nctemp11238);
struct tree* nctemp11243= p;
struct nctempchar1 *nctemp11247;
static struct nctempchar1 nctemp11248 = {{ 2}, (char*)"-\0"};
nctemp11247=&nctemp11248;
nctempchar1* nctemp11245= nctemp11247;
int nctemp11249=CodeEs(nctemp11243,nctemp11245);
struct tree* nctemp11251= p;
nctempchar1* nctemp11253= m1;
int nctemp11256=CodeEs(nctemp11251,nctemp11253);
struct tree* nctemp11258= p;
struct nctempchar1 *nctemp11262;
static struct nctempchar1 nctemp11263 = {{ 2}, (char*)")\0"};
nctemp11262=&nctemp11263;
nctempchar1* nctemp11260= nctemp11262;
int nctemp11264=CodeEs(nctemp11258,nctemp11260);
struct tree* nctemp11266= p;
struct nctempchar1 *nctemp11270;
static struct nctempchar1 nctemp11271 = {{ 2}, (char*)"*\0"};
nctemp11270=&nctemp11271;
nctempchar1* nctemp11268= nctemp11270;
int nctemp11272=CodeEs(nctemp11266,nctemp11268);
struct tree* nctemp11274= p;
struct nctempchar1 *nctemp11278;
static struct nctempchar1 nctemp11279 = {{ 2}, (char*)"(\0"};
nctemp11278=&nctemp11279;
nctempchar1* nctemp11276= nctemp11278;
int nctemp11280=CodeEs(nctemp11274,nctemp11276);
struct tree* nctemp11282= p;
nctempchar1* nctemp11284= n2;
int nctemp11287=CodeEs(nctemp11282,nctemp11284);
struct tree* nctemp11289= p;
struct nctempchar1 *nctemp11293;
static struct nctempchar1 nctemp11294 = {{ 2}, (char*)"-\0"};
nctemp11293=&nctemp11294;
nctempchar1* nctemp11291= nctemp11293;
int nctemp11295=CodeEs(nctemp11289,nctemp11291);
struct tree* nctemp11297= p;
nctempchar1* nctemp11299= m2;
int nctemp11302=CodeEs(nctemp11297,nctemp11299);
struct tree* nctemp11304= p;
struct nctempchar1 *nctemp11308;
static struct nctempchar1 nctemp11309 = {{ 5}, (char*)");\n\0"};
nctemp11308=&nctemp11309;
nctempchar1* nctemp11306= nctemp11308;
int nctemp11310=CodeEs(nctemp11304,nctemp11306);
}
else{
int nctemp11311 = (rank ==3);
if(nctemp11311)
{
p =sp;
struct tree* nctemp11320= p;
nctempchar1* nctemp11322= nmax;
int nctemp11325=CodeEs(nctemp11320,nctemp11322);
struct tree* nctemp11327= p;
struct nctempchar1 *nctemp11331;
static struct nctempchar1 nctemp11332 = {{ 2}, (char*)"=\0"};
nctemp11331=&nctemp11332;
nctempchar1* nctemp11329= nctemp11331;
int nctemp11333=CodeEs(nctemp11327,nctemp11329);
struct tree* nctemp11335= p;
nctempchar1* nctemp11337= n1;
int nctemp11340=CodeEs(nctemp11335,nctemp11337);
struct tree* nctemp11342= p;
struct nctempchar1 *nctemp11346;
static struct nctempchar1 nctemp11347 = {{ 2}, (char*)"*\0"};
nctemp11346=&nctemp11347;
nctempchar1* nctemp11344= nctemp11346;
int nctemp11348=CodeEs(nctemp11342,nctemp11344);
struct tree* nctemp11350= p;
nctempchar1* nctemp11352= n2;
int nctemp11355=CodeEs(nctemp11350,nctemp11352);
struct tree* nctemp11357= p;
struct nctempchar1 *nctemp11361;
static struct nctempchar1 nctemp11362 = {{ 2}, (char*)"*\0"};
nctemp11361=&nctemp11362;
nctempchar1* nctemp11359= nctemp11361;
int nctemp11363=CodeEs(nctemp11357,nctemp11359);
struct tree* nctemp11365= p;
nctempchar1* nctemp11367= n3;
int nctemp11370=CodeEs(nctemp11365,nctemp11367);
struct tree* nctemp11372= p;
struct nctempchar1 *nctemp11376;
static struct nctempchar1 nctemp11377 = {{ 4}, (char*)";\n\0"};
nctemp11376=&nctemp11377;
nctempchar1* nctemp11374= nctemp11376;
int nctemp11378=CodeEs(nctemp11372,nctemp11374);
}
}
struct tree* nctemp11380= p;
struct nctempchar1 *nctemp11384;
static struct nctempchar1 nctemp11385 = {{ 5}, (char*)"for(\0"};
nctemp11384=&nctemp11385;
nctempchar1* nctemp11382= nctemp11384;
int nctemp11386=CodeEs(nctemp11380,nctemp11382);
struct tree* nctemp11388= p;
struct nctempchar1 *nctemp11392;
static struct nctempchar1 nctemp11393 = {{ 5}, (char*)"int \0"};
nctemp11392=&nctemp11393;
nctempchar1* nctemp11390= nctemp11392;
int nctemp11394=CodeEs(nctemp11388,nctemp11390);
struct tree* nctemp11396= p;
nctempchar1* nctemp11398= pno;
int nctemp11401=CodeEs(nctemp11396,nctemp11398);
struct tree* nctemp11403= p;
struct nctempchar1 *nctemp11407;
static struct nctempchar1 nctemp11408 = {{ 39}, (char*)"=blockIdx.x*blockDim.x + threadIdx.x; \0"};
nctemp11407=&nctemp11408;
nctempchar1* nctemp11405= nctemp11407;
int nctemp11409=CodeEs(nctemp11403,nctemp11405);
struct tree* nctemp11411= p;
nctempchar1* nctemp11413= pno;
int nctemp11416=CodeEs(nctemp11411,nctemp11413);
struct tree* nctemp11418= p;
struct nctempchar1 *nctemp11422;
static struct nctempchar1 nctemp11423 = {{ 2}, (char*)"<\0"};
nctemp11422=&nctemp11423;
nctempchar1* nctemp11420= nctemp11422;
int nctemp11424=CodeEs(nctemp11418,nctemp11420);
struct tree* nctemp11426= p;
nctempchar1* nctemp11428= nmax;
int nctemp11431=CodeEs(nctemp11426,nctemp11428);
struct tree* nctemp11433= p;
struct nctempchar1 *nctemp11437;
static struct nctempchar1 nctemp11438 = {{ 2}, (char*)";\0"};
nctemp11437=&nctemp11438;
nctempchar1* nctemp11435= nctemp11437;
int nctemp11439=CodeEs(nctemp11433,nctemp11435);
struct tree* nctemp11441= p;
nctempchar1* nctemp11443= pno;
int nctemp11446=CodeEs(nctemp11441,nctemp11443);
struct tree* nctemp11448= p;
struct nctempchar1 *nctemp11452;
static struct nctempchar1 nctemp11453 = {{ 23}, (char*)"+=blockDim.x*gridDim.x\0"};
nctemp11452=&nctemp11453;
nctempchar1* nctemp11450= nctemp11452;
int nctemp11454=CodeEs(nctemp11448,nctemp11450);
struct tree* nctemp11456= p;
struct nctempchar1 *nctemp11460;
static struct nctempchar1 nctemp11461 = {{ 5}, (char*)"){\n\0"};
nctemp11460=&nctemp11461;
nctempchar1* nctemp11458= nctemp11460;
int nctemp11462=CodeEs(nctemp11456,nctemp11458);
int nctemp11463 = (rank ==1);
if(nctemp11463)
{
struct tree* nctemp11468= p;
nctempchar1* nctemp11470= indx1;
int nctemp11473=CodeEs(nctemp11468,nctemp11470);
struct tree* nctemp11475= p;
struct nctempchar1 *nctemp11479;
static struct nctempchar1 nctemp11480 = {{ 2}, (char*)"=\0"};
nctemp11479=&nctemp11480;
nctempchar1* nctemp11477= nctemp11479;
int nctemp11481=CodeEs(nctemp11475,nctemp11477);
struct tree* nctemp11483= p;
nctempchar1* nctemp11485= m1;
int nctemp11488=CodeEs(nctemp11483,nctemp11485);
struct tree* nctemp11490= p;
struct nctempchar1 *nctemp11494;
static struct nctempchar1 nctemp11495 = {{ 2}, (char*)"+\0"};
nctemp11494=&nctemp11495;
nctempchar1* nctemp11492= nctemp11494;
int nctemp11496=CodeEs(nctemp11490,nctemp11492);
struct tree* nctemp11498= p;
struct nctempchar1 *nctemp11502;
static struct nctempchar1 nctemp11503 = {{ 12}, (char*)"nctempno;\n\0"};
nctemp11502=&nctemp11503;
nctempchar1* nctemp11500= nctemp11502;
int nctemp11504=CodeEs(nctemp11498,nctemp11500);
}
int nctemp11505 = (rank ==2);
if(nctemp11505)
{
struct tree* nctemp11510= p;
nctempchar1* nctemp11512= indx2;
int nctemp11515=CodeEs(nctemp11510,nctemp11512);
struct tree* nctemp11517= p;
struct nctempchar1 *nctemp11521;
static struct nctempchar1 nctemp11522 = {{ 2}, (char*)"=\0"};
nctemp11521=&nctemp11522;
nctempchar1* nctemp11519= nctemp11521;
int nctemp11523=CodeEs(nctemp11517,nctemp11519);
struct tree* nctemp11525= p;
nctempchar1* nctemp11527= m2;
int nctemp11530=CodeEs(nctemp11525,nctemp11527);
struct tree* nctemp11532= p;
struct nctempchar1 *nctemp11536;
static struct nctempchar1 nctemp11537 = {{ 2}, (char*)"+\0"};
nctemp11536=&nctemp11537;
nctempchar1* nctemp11534= nctemp11536;
int nctemp11538=CodeEs(nctemp11532,nctemp11534);
struct tree* nctemp11540= p;
struct nctempchar1 *nctemp11544;
static struct nctempchar1 nctemp11545 = {{ 9}, (char*)"nctempno\0"};
nctemp11544=&nctemp11545;
nctempchar1* nctemp11542= nctemp11544;
int nctemp11546=CodeEs(nctemp11540,nctemp11542);
struct tree* nctemp11548= p;
struct nctempchar1 *nctemp11552;
static struct nctempchar1 nctemp11553 = {{ 3}, (char*)"/(\0"};
nctemp11552=&nctemp11553;
nctempchar1* nctemp11550= nctemp11552;
int nctemp11554=CodeEs(nctemp11548,nctemp11550);
struct tree* nctemp11556= p;
nctempchar1* nctemp11558= n1;
int nctemp11561=CodeEs(nctemp11556,nctemp11558);
struct tree* nctemp11563= p;
struct nctempchar1 *nctemp11567;
static struct nctempchar1 nctemp11568 = {{ 2}, (char*)"-\0"};
nctemp11567=&nctemp11568;
nctempchar1* nctemp11565= nctemp11567;
int nctemp11569=CodeEs(nctemp11563,nctemp11565);
struct tree* nctemp11571= p;
nctempchar1* nctemp11573= m1;
int nctemp11576=CodeEs(nctemp11571,nctemp11573);
struct tree* nctemp11578= p;
struct nctempchar1 *nctemp11582;
static struct nctempchar1 nctemp11583 = {{ 2}, (char*)")\0"};
nctemp11582=&nctemp11583;
nctempchar1* nctemp11580= nctemp11582;
int nctemp11584=CodeEs(nctemp11578,nctemp11580);
struct tree* nctemp11586= p;
struct nctempchar1 *nctemp11590;
static struct nctempchar1 nctemp11591 = {{ 4}, (char*)";\n\0"};
nctemp11590=&nctemp11591;
nctempchar1* nctemp11588= nctemp11590;
int nctemp11592=CodeEs(nctemp11586,nctemp11588);
struct tree* nctemp11594= p;
nctempchar1* nctemp11596= indx1;
int nctemp11599=CodeEs(nctemp11594,nctemp11596);
struct tree* nctemp11601= p;
struct nctempchar1 *nctemp11605;
static struct nctempchar1 nctemp11606 = {{ 2}, (char*)"=\0"};
nctemp11605=&nctemp11606;
nctempchar1* nctemp11603= nctemp11605;
int nctemp11607=CodeEs(nctemp11601,nctemp11603);
struct tree* nctemp11609= p;
nctempchar1* nctemp11611= m1;
int nctemp11614=CodeEs(nctemp11609,nctemp11611);
struct tree* nctemp11616= p;
struct nctempchar1 *nctemp11620;
static struct nctempchar1 nctemp11621 = {{ 2}, (char*)"+\0"};
nctemp11620=&nctemp11621;
nctempchar1* nctemp11618= nctemp11620;
int nctemp11622=CodeEs(nctemp11616,nctemp11618);
struct tree* nctemp11624= p;
struct nctempchar1 *nctemp11628;
static struct nctempchar1 nctemp11629 = {{ 9}, (char*)"nctempno\0"};
nctemp11628=&nctemp11629;
nctempchar1* nctemp11626= nctemp11628;
int nctemp11630=CodeEs(nctemp11624,nctemp11626);
struct tree* nctemp11632= p;
struct nctempchar1 *nctemp11636;
static struct nctempchar1 nctemp11637 = {{ 3}, (char*)"%(\0"};
nctemp11636=&nctemp11637;
nctempchar1* nctemp11634= nctemp11636;
int nctemp11638=CodeEs(nctemp11632,nctemp11634);
struct tree* nctemp11640= p;
nctempchar1* nctemp11642= n1;
int nctemp11645=CodeEs(nctemp11640,nctemp11642);
struct tree* nctemp11647= p;
struct nctempchar1 *nctemp11651;
static struct nctempchar1 nctemp11652 = {{ 2}, (char*)"-\0"};
nctemp11651=&nctemp11652;
nctempchar1* nctemp11649= nctemp11651;
int nctemp11653=CodeEs(nctemp11647,nctemp11649);
struct tree* nctemp11655= p;
nctempchar1* nctemp11657= m1;
int nctemp11660=CodeEs(nctemp11655,nctemp11657);
struct tree* nctemp11662= p;
struct nctempchar1 *nctemp11666;
static struct nctempchar1 nctemp11667 = {{ 2}, (char*)")\0"};
nctemp11666=&nctemp11667;
nctempchar1* nctemp11664= nctemp11666;
int nctemp11668=CodeEs(nctemp11662,nctemp11664);
struct tree* nctemp11670= p;
struct nctempchar1 *nctemp11674;
static struct nctempchar1 nctemp11675 = {{ 4}, (char*)";\n\0"};
nctemp11674=&nctemp11675;
nctempchar1* nctemp11672= nctemp11674;
int nctemp11676=CodeEs(nctemp11670,nctemp11672);
}
int nctemp11677 = (rank ==3);
if(nctemp11677)
{
struct tree* nctemp11682= p;
nctempchar1* nctemp11684= indx2;
int nctemp11687=CodeEs(nctemp11682,nctemp11684);
struct tree* nctemp11689= p;
struct nctempchar1 *nctemp11693;
static struct nctempchar1 nctemp11694 = {{ 2}, (char*)"=\0"};
nctemp11693=&nctemp11694;
nctempchar1* nctemp11691= nctemp11693;
int nctemp11695=CodeEs(nctemp11689,nctemp11691);
struct tree* nctemp11697= p;
nctempchar1* nctemp11699= m2;
int nctemp11702=CodeEs(nctemp11697,nctemp11699);
struct tree* nctemp11704= p;
struct nctempchar1 *nctemp11708;
static struct nctempchar1 nctemp11709 = {{ 2}, (char*)"+\0"};
nctemp11708=&nctemp11709;
nctempchar1* nctemp11706= nctemp11708;
int nctemp11710=CodeEs(nctemp11704,nctemp11706);
struct tree* nctemp11712= p;
struct nctempchar1 *nctemp11716;
static struct nctempchar1 nctemp11717 = {{ 9}, (char*)"nctempno\0"};
nctemp11716=&nctemp11717;
nctempchar1* nctemp11714= nctemp11716;
int nctemp11718=CodeEs(nctemp11712,nctemp11714);
struct tree* nctemp11720= p;
struct nctempchar1 *nctemp11724;
static struct nctempchar1 nctemp11725 = {{ 3}, (char*)"/(\0"};
nctemp11724=&nctemp11725;
nctempchar1* nctemp11722= nctemp11724;
int nctemp11726=CodeEs(nctemp11720,nctemp11722);
struct tree* nctemp11728= p;
nctempchar1* nctemp11730= n1;
int nctemp11733=CodeEs(nctemp11728,nctemp11730);
struct tree* nctemp11735= p;
struct nctempchar1 *nctemp11739;
static struct nctempchar1 nctemp11740 = {{ 2}, (char*)"-\0"};
nctemp11739=&nctemp11740;
nctempchar1* nctemp11737= nctemp11739;
int nctemp11741=CodeEs(nctemp11735,nctemp11737);
struct tree* nctemp11743= p;
nctempchar1* nctemp11745= m1;
int nctemp11748=CodeEs(nctemp11743,nctemp11745);
struct tree* nctemp11750= p;
struct nctempchar1 *nctemp11754;
static struct nctempchar1 nctemp11755 = {{ 2}, (char*)")\0"};
nctemp11754=&nctemp11755;
nctempchar1* nctemp11752= nctemp11754;
int nctemp11756=CodeEs(nctemp11750,nctemp11752);
struct tree* nctemp11758= p;
struct nctempchar1 *nctemp11762;
static struct nctempchar1 nctemp11763 = {{ 4}, (char*)";\n\0"};
nctemp11762=&nctemp11763;
nctempchar1* nctemp11760= nctemp11762;
int nctemp11764=CodeEs(nctemp11758,nctemp11760);
struct tree* nctemp11766= p;
nctempchar1* nctemp11768= indx1;
int nctemp11771=CodeEs(nctemp11766,nctemp11768);
struct tree* nctemp11773= p;
struct nctempchar1 *nctemp11777;
static struct nctempchar1 nctemp11778 = {{ 2}, (char*)"=\0"};
nctemp11777=&nctemp11778;
nctempchar1* nctemp11775= nctemp11777;
int nctemp11779=CodeEs(nctemp11773,nctemp11775);
struct tree* nctemp11781= p;
nctempchar1* nctemp11783= m1;
int nctemp11786=CodeEs(nctemp11781,nctemp11783);
struct tree* nctemp11788= p;
struct nctempchar1 *nctemp11792;
static struct nctempchar1 nctemp11793 = {{ 2}, (char*)"+\0"};
nctemp11792=&nctemp11793;
nctempchar1* nctemp11790= nctemp11792;
int nctemp11794=CodeEs(nctemp11788,nctemp11790);
struct tree* nctemp11796= p;
struct nctempchar1 *nctemp11800;
static struct nctempchar1 nctemp11801 = {{ 9}, (char*)"nctempno\0"};
nctemp11800=&nctemp11801;
nctempchar1* nctemp11798= nctemp11800;
int nctemp11802=CodeEs(nctemp11796,nctemp11798);
struct tree* nctemp11804= p;
struct nctempchar1 *nctemp11808;
static struct nctempchar1 nctemp11809 = {{ 3}, (char*)"%(\0"};
nctemp11808=&nctemp11809;
nctempchar1* nctemp11806= nctemp11808;
int nctemp11810=CodeEs(nctemp11804,nctemp11806);
struct tree* nctemp11812= p;
nctempchar1* nctemp11814= n1;
int nctemp11817=CodeEs(nctemp11812,nctemp11814);
struct tree* nctemp11819= p;
struct nctempchar1 *nctemp11823;
static struct nctempchar1 nctemp11824 = {{ 2}, (char*)"-\0"};
nctemp11823=&nctemp11824;
nctempchar1* nctemp11821= nctemp11823;
int nctemp11825=CodeEs(nctemp11819,nctemp11821);
struct tree* nctemp11827= p;
nctempchar1* nctemp11829= m1;
int nctemp11832=CodeEs(nctemp11827,nctemp11829);
struct tree* nctemp11834= p;
struct nctempchar1 *nctemp11838;
static struct nctempchar1 nctemp11839 = {{ 2}, (char*)")\0"};
nctemp11838=&nctemp11839;
nctempchar1* nctemp11836= nctemp11838;
int nctemp11840=CodeEs(nctemp11834,nctemp11836);
struct tree* nctemp11842= p;
struct nctempchar1 *nctemp11846;
static struct nctempchar1 nctemp11847 = {{ 4}, (char*)";\n\0"};
nctemp11846=&nctemp11847;
nctempchar1* nctemp11844= nctemp11846;
int nctemp11848=CodeEs(nctemp11842,nctemp11844);
}
struct tree* nctemp11853= sp;
struct tree* nctemp11855=PtreeMvchild(nctemp11853);
p =nctemp11855;
struct tree* nctemp11860= p;
struct tree* nctemp11862=PtreeMvsister(nctemp11860);
p =nctemp11862;
struct tree* nctemp11864= p;
int nctemp11866=CodeCompstmnt(nctemp11864);
struct tree* nctemp11868= p;
struct nctempchar1 *nctemp11872;
static struct nctempchar1 nctemp11873 = {{ 4}, (char*)"}\n\0"};
nctemp11872=&nctemp11873;
nctempchar1* nctemp11870= nctemp11872;
int nctemp11874=CodeEs(nctemp11868,nctemp11870);
int nctemp11876= 0;
int nctemp11878=CodeSetparallel(nctemp11876);
return 1;
}
int CodeParallelstmntcpu (struct tree* p)
{
struct tree* sp;
int rank;
int i;
sp =p;
struct tree* nctemp11888= sp;
int nctemp11890=PtreeGetrank(nctemp11888);
rank =nctemp11890;
struct tree* nctemp11895= p;
struct tree* nctemp11897=PtreeMvchild(nctemp11895);
p =nctemp11897;
struct tree* nctemp11902= p;
struct tree* nctemp11904=PtreeMvchild(nctemp11902);
p =nctemp11904;
struct tree* nctemp11906= p;
int nctemp11908= 0;
int nctemp11910= rank;
int nctemp11912=CodeParallelfor(nctemp11906,nctemp11908,nctemp11910);
struct tree* nctemp11917= sp;
struct tree* nctemp11919=PtreeMvchild(nctemp11917);
sp =nctemp11919;
struct tree* nctemp11924= sp;
struct tree* nctemp11926=PtreeMvsister(nctemp11924);
sp =nctemp11926;
struct tree* nctemp11928= sp;
int nctemp11930=CodeStmnt(nctemp11928);
i =0;
int nctemp11935 = (i < rank);
while(nctemp11935){
{
struct tree* nctemp11940= sp;
struct nctempchar1 *nctemp11944;
static struct nctempchar1 nctemp11945 = {{ 2}, (char*)"}\0"};
nctemp11944=&nctemp11945;
nctempchar1* nctemp11942= nctemp11944;
int nctemp11946=CodeEs(nctemp11940,nctemp11942);
}
int nctemp11955 = i + 1;
i =nctemp11955;
int nctemp11956 = (i < rank);
nctemp11935=nctemp11956;
}
return 1;
}
int CodeParallelstmnt (struct tree* p)
{
int nctemp11964=CodeGetarch();
int nctemp11961 = (nctemp11964 ==1);
if(nctemp11961)
{
struct tree* nctemp11967= p;
int nctemp11969=CodeParallelstmntcpu(nctemp11967);
}
else{
int nctemp11973=CodeGetarch();
int nctemp11970 = (nctemp11973 ==2);
if(nctemp11970)
{
struct tree* nctemp11976= p;
int nctemp11978=CodeParallelstmntgpu(nctemp11976);
}
else{
int nctemp11982=CodeGetarch();
int nctemp11979 = (nctemp11982 ==3);
if(nctemp11979)
{
struct tree* nctemp11985= p;
int nctemp11987=CodeParallelstmntgpu(nctemp11985);
}
}
}
return 1;
}
int CodeIfstmnt (struct tree* p)
{
nctempchar1 *cond;
struct tree* nctemp11993= p;
struct tree* nctemp11995=PtreeMvchild(nctemp11993);
p =nctemp11995;
struct tree* nctemp12001= p;
nctempchar1* nctemp12003=CodeExpr(nctemp12001);
cond=nctemp12003;
struct tree* nctemp12005= p;
struct nctempchar1 *nctemp12009;
static struct nctempchar1 nctemp12010 = {{ 4}, (char*)"if(\0"};
nctemp12009=&nctemp12010;
nctempchar1* nctemp12007= nctemp12009;
int nctemp12011=CodeEs(nctemp12005,nctemp12007);
struct tree* nctemp12013= p;
nctempchar1* nctemp12015= cond;
int nctemp12018=CodeEs(nctemp12013,nctemp12015);
struct tree* nctemp12020= p;
struct nctempchar1 *nctemp12024;
static struct nctempchar1 nctemp12025 = {{ 4}, (char*)")\n\0"};
nctemp12024=&nctemp12025;
nctempchar1* nctemp12022= nctemp12024;
int nctemp12026=CodeEs(nctemp12020,nctemp12022);
struct tree* nctemp12031= p;
struct tree* nctemp12033=PtreeMvsister(nctemp12031);
p =nctemp12033;
struct tree* nctemp12035= p;
int nctemp12037=CodeStmnt(nctemp12035);
struct tree* nctemp12045= p;
struct tree* nctemp12047=PtreeMvsister(nctemp12045);
p =nctemp12047;
int nctemp12038 = (p !=0);
if(nctemp12038)
{
struct tree* nctemp12054= p;
nctempchar1* nctemp12056=PtreeGetname(nctemp12054);
nctempchar1* nctemp12052= nctemp12056;
struct nctempchar1 *nctemp12059;
static struct nctempchar1 nctemp12060 = {{ 5}, (char*)"else\0"};
nctemp12059=&nctemp12060;
nctempchar1* nctemp12057= nctemp12059;
int nctemp12061=LibeStrcmp(nctemp12052,nctemp12057);
int nctemp12049 = (nctemp12061 ==1);
if(nctemp12049)
{
struct tree* nctemp12067= p;
struct tree* nctemp12069=PtreeMvchild(nctemp12067);
p =nctemp12069;
struct tree* nctemp12071= p;
struct nctempchar1 *nctemp12075;
static struct nctempchar1 nctemp12076 = {{ 5}, (char*)"else\0"};
nctemp12075=&nctemp12076;
nctempchar1* nctemp12073= nctemp12075;
int nctemp12077=CodeEs(nctemp12071,nctemp12073);
struct tree* nctemp12079= p;
int nctemp12081=CodeStmnt(nctemp12079);
}
}
return 1;
}
int CodeReturnstmnt (struct tree* p)
{
struct tree* np;
nctempchar1 *rval;
struct tree* nctemp12087= p;
struct tree* nctemp12089=PtreeMvchild(nctemp12087);
np =nctemp12089;
struct tree* nctemp12095= np;
nctempchar1* nctemp12097=CodeExpr(nctemp12095);
rval=nctemp12097;
struct tree* nctemp12099= np;
struct nctempchar1 *nctemp12103;
static struct nctempchar1 nctemp12104 = {{ 8}, (char*)"return \0"};
nctemp12103=&nctemp12104;
nctempchar1* nctemp12101= nctemp12103;
int nctemp12105=CodeEs(nctemp12099,nctemp12101);
struct tree* nctemp12107= np;
nctempchar1* nctemp12109= rval;
int nctemp12112=CodeEs(nctemp12107,nctemp12109);
struct tree* nctemp12114= np;
struct nctempchar1 *nctemp12118;
static struct nctempchar1 nctemp12119 = {{ 4}, (char*)";\n\0"};
nctemp12118=&nctemp12119;
nctempchar1* nctemp12116= nctemp12118;
int nctemp12120=CodeEs(nctemp12114,nctemp12116);
return 1;
}
int CodeCompstmnt (struct tree* p)
{
struct tree* sp;
struct tree* q;
sp =p;
struct tree* nctemp12127= p;
struct nctempchar1 *nctemp12131;
static struct nctempchar1 nctemp12132 = {{ 4}, (char*)"{\n\0"};
nctemp12131=&nctemp12132;
nctempchar1* nctemp12129= nctemp12131;
int nctemp12133=CodeEs(nctemp12127,nctemp12129);
struct tree* nctemp12138= p;
struct tree* nctemp12140=PtreeMvchild(nctemp12138);
p =nctemp12140;
int nctemp12141 = (p ==0);
if(nctemp12141)
{
struct tree* nctemp12146= sp;
struct nctempchar1 *nctemp12150;
static struct nctempchar1 nctemp12151 = {{ 4}, (char*)"}\n\0"};
nctemp12150=&nctemp12151;
nctempchar1* nctemp12148= nctemp12150;
int nctemp12152=CodeEs(nctemp12146,nctemp12148);
return 1;
}
struct tree* nctemp12155= p;
struct symbol* nctemp12159=SymGetltp();
struct symbol* nctemp12157= nctemp12159;
int nctemp12160=CodeDeclarations(nctemp12155,nctemp12157);
struct tree* nctemp12166= p;
nctempchar1* nctemp12168=PtreeGetname(nctemp12166);
nctempchar1* nctemp12164= nctemp12168;
struct nctempchar1 *nctemp12171;
static struct nctempchar1 nctemp12172 = {{ 13}, (char*)"declarations\0"};
nctemp12171=&nctemp12172;
nctempchar1* nctemp12169= nctemp12171;
int nctemp12173=LibeStrcmp(nctemp12164,nctemp12169);
int nctemp12161 = (nctemp12173 ==1);
if(nctemp12161)
{
struct tree* nctemp12179= p;
struct tree* nctemp12181=PtreeMvsister(nctemp12179);
p =nctemp12181;
}
int nctemp12182 = (p !=0);
int nctemp12186=nctemp12182;
while(nctemp12186)
{{
struct tree* nctemp12192= p;
nctempchar1* nctemp12194=PtreeGetname(nctemp12192);
nctempchar1* nctemp12190= nctemp12194;
struct nctempchar1 *nctemp12197;
static struct nctempchar1 nctemp12198 = {{ 5}, (char*)"expr\0"};
nctemp12197=&nctemp12198;
nctempchar1* nctemp12195= nctemp12197;
int nctemp12199=LibeStrcmp(nctemp12190,nctemp12195);
int nctemp12187 = (nctemp12199 ==1);
if(nctemp12187)
{
struct tree* nctemp12202= p;
nctempchar1* nctemp12204=CodeExpr(nctemp12202);
}
struct tree* nctemp12210= p;
nctempchar1* nctemp12212=PtreeGetname(nctemp12210);
nctempchar1* nctemp12208= nctemp12212;
struct nctempchar1 *nctemp12215;
static struct nctempchar1 nctemp12216 = {{ 6}, (char*)"while\0"};
nctemp12215=&nctemp12216;
nctempchar1* nctemp12213= nctemp12215;
int nctemp12217=LibeStrcmp(nctemp12208,nctemp12213);
int nctemp12205 = (nctemp12217 ==1);
if(nctemp12205)
{
struct tree* nctemp12220= p;
int nctemp12222=CodeWhilestmnt(nctemp12220);
}
struct tree* nctemp12228= p;
nctempchar1* nctemp12230=PtreeGetname(nctemp12228);
nctempchar1* nctemp12226= nctemp12230;
struct nctempchar1 *nctemp12233;
static struct nctempchar1 nctemp12234 = {{ 4}, (char*)"for\0"};
nctemp12233=&nctemp12234;
nctempchar1* nctemp12231= nctemp12233;
int nctemp12235=LibeStrcmp(nctemp12226,nctemp12231);
int nctemp12223 = (nctemp12235 ==1);
if(nctemp12223)
{
struct tree* nctemp12241= p;
struct tree* nctemp12243=PtreeMvchild(nctemp12241);
q =nctemp12243;
struct tree* nctemp12245= q;
struct tree* nctemp12247=PtreeMvsister(nctemp12245);
struct tree* nctemp12249= p;
int nctemp12251=CodeForstmnt(nctemp12249);
}
struct tree* nctemp12257= p;
nctempchar1* nctemp12259=PtreeGetname(nctemp12257);
nctempchar1* nctemp12255= nctemp12259;
struct nctempchar1 *nctemp12262;
static struct nctempchar1 nctemp12263 = {{ 9}, (char*)"parallel\0"};
nctemp12262=&nctemp12263;
nctempchar1* nctemp12260= nctemp12262;
int nctemp12264=LibeStrcmp(nctemp12255,nctemp12260);
int nctemp12252 = (nctemp12264 ==1);
if(nctemp12252)
{
struct tree* nctemp12267= p;
int nctemp12269=CodeParallelstmnt(nctemp12267);
}
struct tree* nctemp12275= p;
nctempchar1* nctemp12277=PtreeGetname(nctemp12275);
nctempchar1* nctemp12273= nctemp12277;
struct nctempchar1 *nctemp12280;
static struct nctempchar1 nctemp12281 = {{ 3}, (char*)"if\0"};
nctemp12280=&nctemp12281;
nctempchar1* nctemp12278= nctemp12280;
int nctemp12282=LibeStrcmp(nctemp12273,nctemp12278);
int nctemp12270 = (nctemp12282 ==1);
if(nctemp12270)
{
struct tree* nctemp12285= p;
int nctemp12287=CodeIfstmnt(nctemp12285);
}
struct tree* nctemp12293= p;
nctempchar1* nctemp12295=PtreeGetname(nctemp12293);
nctempchar1* nctemp12291= nctemp12295;
struct nctempchar1 *nctemp12298;
static struct nctempchar1 nctemp12299 = {{ 7}, (char*)"return\0"};
nctemp12298=&nctemp12299;
nctempchar1* nctemp12296= nctemp12298;
int nctemp12300=LibeStrcmp(nctemp12291,nctemp12296);
int nctemp12288 = (nctemp12300 ==1);
if(nctemp12288)
{
struct tree* nctemp12303= p;
int nctemp12305=CodeReturnstmnt(nctemp12303);
}
struct tree* nctemp12310= p;
struct tree* nctemp12312=PtreeMvsister(nctemp12310);
p =nctemp12312;
}
int nctemp12313 = (p !=0);
nctemp12186=nctemp12313;}struct tree* nctemp12318= sp;
struct nctempchar1 *nctemp12322;
static struct nctempchar1 nctemp12323 = {{ 4}, (char*)"}\n\0"};
nctemp12322=&nctemp12323;
nctempchar1* nctemp12320= nctemp12322;
int nctemp12324=CodeEs(nctemp12318,nctemp12320);
return 1;
}
int CodeStmnt (struct tree* p)
{
struct tree* sp;
sp =p;
struct tree* nctemp12331= p;
struct nctempchar1 *nctemp12335;
static struct nctempchar1 nctemp12336 = {{ 4}, (char*)"{\n\0"};
nctemp12335=&nctemp12336;
nctempchar1* nctemp12333= nctemp12335;
int nctemp12337=CodeEs(nctemp12331,nctemp12333);
struct tree* nctemp12343= p;
nctempchar1* nctemp12345=PtreeGetname(nctemp12343);
nctempchar1* nctemp12341= nctemp12345;
struct nctempchar1 *nctemp12348;
static struct nctempchar1 nctemp12349 = {{ 10}, (char*)"compstmnt\0"};
nctemp12348=&nctemp12349;
nctempchar1* nctemp12346= nctemp12348;
int nctemp12350=LibeStrcmp(nctemp12341,nctemp12346);
int nctemp12338 = (nctemp12350 ==1);
if(nctemp12338)
{
struct tree* nctemp12356= p;
struct tree* nctemp12358=PtreeMvchild(nctemp12356);
p =nctemp12358;
struct tree* nctemp12360= p;
struct symbol* nctemp12364=SymGetltp();
struct symbol* nctemp12362= nctemp12364;
int nctemp12365=CodeDeclarations(nctemp12360,nctemp12362);
struct tree* nctemp12371= p;
nctempchar1* nctemp12373=PtreeGetname(nctemp12371);
nctempchar1* nctemp12369= nctemp12373;
struct nctempchar1 *nctemp12376;
static struct nctempchar1 nctemp12377 = {{ 13}, (char*)"declarations\0"};
nctemp12376=&nctemp12377;
nctempchar1* nctemp12374= nctemp12376;
int nctemp12378=LibeStrcmp(nctemp12369,nctemp12374);
int nctemp12366 = (nctemp12378 ==1);
if(nctemp12366)
{
struct tree* nctemp12384= p;
struct tree* nctemp12386=PtreeMvsister(nctemp12384);
p =nctemp12386;
}
}
int nctemp12387 = (p !=0);
int nctemp12391=nctemp12387;
while(nctemp12391)
{{
struct tree* nctemp12397= p;
nctempchar1* nctemp12399=PtreeGetname(nctemp12397);
nctempchar1* nctemp12395= nctemp12399;
struct nctempchar1 *nctemp12402;
static struct nctempchar1 nctemp12403 = {{ 10}, (char*)"compstmnt\0"};
nctemp12402=&nctemp12403;
nctempchar1* nctemp12400= nctemp12402;
int nctemp12404=LibeStrcmp(nctemp12395,nctemp12400);
int nctemp12392 = (nctemp12404 ==1);
if(nctemp12392)
{
struct tree* nctemp12407= p;
int nctemp12409=CodeCompstmnt(nctemp12407);
}
struct tree* nctemp12415= p;
nctempchar1* nctemp12417=PtreeGetname(nctemp12415);
nctempchar1* nctemp12413= nctemp12417;
struct nctempchar1 *nctemp12420;
static struct nctempchar1 nctemp12421 = {{ 5}, (char*)"expr\0"};
nctemp12420=&nctemp12421;
nctempchar1* nctemp12418= nctemp12420;
int nctemp12422=LibeStrcmp(nctemp12413,nctemp12418);
int nctemp12410 = (nctemp12422 ==1);
if(nctemp12410)
{
struct tree* nctemp12425= p;
nctempchar1* nctemp12427=CodeExpr(nctemp12425);
}
struct tree* nctemp12433= p;
nctempchar1* nctemp12435=PtreeGetname(nctemp12433);
nctempchar1* nctemp12431= nctemp12435;
struct nctempchar1 *nctemp12438;
static struct nctempchar1 nctemp12439 = {{ 6}, (char*)"while\0"};
nctemp12438=&nctemp12439;
nctempchar1* nctemp12436= nctemp12438;
int nctemp12440=LibeStrcmp(nctemp12431,nctemp12436);
int nctemp12428 = (nctemp12440 ==1);
if(nctemp12428)
{
struct tree* nctemp12443= p;
int nctemp12445=CodeWhilestmnt(nctemp12443);
}
struct tree* nctemp12451= p;
nctempchar1* nctemp12453=PtreeGetname(nctemp12451);
nctempchar1* nctemp12449= nctemp12453;
struct nctempchar1 *nctemp12456;
static struct nctempchar1 nctemp12457 = {{ 4}, (char*)"for\0"};
nctemp12456=&nctemp12457;
nctempchar1* nctemp12454= nctemp12456;
int nctemp12458=LibeStrcmp(nctemp12449,nctemp12454);
int nctemp12446 = (nctemp12458 ==1);
if(nctemp12446)
{
struct tree* nctemp12461= p;
int nctemp12463=CodeForstmnt(nctemp12461);
}
struct tree* nctemp12469= p;
nctempchar1* nctemp12471=PtreeGetname(nctemp12469);
nctempchar1* nctemp12467= nctemp12471;
struct nctempchar1 *nctemp12474;
static struct nctempchar1 nctemp12475 = {{ 9}, (char*)"parallel\0"};
nctemp12474=&nctemp12475;
nctempchar1* nctemp12472= nctemp12474;
int nctemp12476=LibeStrcmp(nctemp12467,nctemp12472);
int nctemp12464 = (nctemp12476 ==1);
if(nctemp12464)
{
struct tree* nctemp12479= p;
int nctemp12481=CodeParallelstmnt(nctemp12479);
}
struct tree* nctemp12487= p;
nctempchar1* nctemp12489=PtreeGetname(nctemp12487);
nctempchar1* nctemp12485= nctemp12489;
struct nctempchar1 *nctemp12492;
static struct nctempchar1 nctemp12493 = {{ 3}, (char*)"if\0"};
nctemp12492=&nctemp12493;
nctempchar1* nctemp12490= nctemp12492;
int nctemp12494=LibeStrcmp(nctemp12485,nctemp12490);
int nctemp12482 = (nctemp12494 ==1);
if(nctemp12482)
{
struct tree* nctemp12497= p;
int nctemp12499=CodeIfstmnt(nctemp12497);
}
struct tree* nctemp12505= p;
nctempchar1* nctemp12507=PtreeGetname(nctemp12505);
nctempchar1* nctemp12503= nctemp12507;
struct nctempchar1 *nctemp12510;
static struct nctempchar1 nctemp12511 = {{ 7}, (char*)"return\0"};
nctemp12510=&nctemp12511;
nctempchar1* nctemp12508= nctemp12510;
int nctemp12512=LibeStrcmp(nctemp12503,nctemp12508);
int nctemp12500 = (nctemp12512 ==1);
if(nctemp12500)
{
struct tree* nctemp12515= p;
int nctemp12517=CodeReturnstmnt(nctemp12515);
}
struct tree* nctemp12522= p;
struct tree* nctemp12524=PtreeMvsister(nctemp12522);
p =nctemp12524;
}
int nctemp12525 = (p !=0);
nctemp12391=nctemp12525;}struct tree* nctemp12530= sp;
struct nctempchar1 *nctemp12534;
static struct nctempchar1 nctemp12535 = {{ 4}, (char*)"}\n\0"};
nctemp12534=&nctemp12535;
nctempchar1* nctemp12532= nctemp12534;
int nctemp12536=CodeEs(nctemp12530,nctemp12532);
return 1;
}
int CodeNewdescr (struct tree* p,nctempchar1 *pointer)
{
struct tree* nctemp12539= p;
nctempchar1* nctemp12541= pointer;
int nctemp12544=CodeEs(nctemp12539,nctemp12541);
struct tree* nctemp12546= p;
struct nctempchar1 *nctemp12550;
static struct nctempchar1 nctemp12551 = {{ 2}, (char*)"=\0"};
nctemp12550=&nctemp12551;
nctempchar1* nctemp12548= nctemp12550;
int nctemp12552=CodeEs(nctemp12546,nctemp12548);
struct tree* nctemp12554= p;
struct nctempchar1 *nctemp12558;
static struct nctempchar1 nctemp12559 = {{ 11}, (char*)"RunMalloc(\0"};
nctemp12558=&nctemp12559;
nctempchar1* nctemp12556= nctemp12558;
int nctemp12560=CodeEs(nctemp12554,nctemp12556);
struct tree* nctemp12562= p;
struct nctempchar1 *nctemp12566;
static struct nctempchar1 nctemp12567 = {{ 8}, (char*)"sizeof(\0"};
nctemp12566=&nctemp12567;
nctempchar1* nctemp12564= nctemp12566;
int nctemp12568=CodeEs(nctemp12562,nctemp12564);
struct tree* nctemp12570= p;
nctempchar1* nctemp12572= pointer;
int nctemp12575=CodeEs(nctemp12570,nctemp12572);
struct tree* nctemp12577= p;
struct nctempchar1 *nctemp12581;
static struct nctempchar1 nctemp12582 = {{ 6}, (char*)"));\n\0"};
nctemp12581=&nctemp12582;
nctempchar1* nctemp12579= nctemp12581;
int nctemp12583=CodeEs(nctemp12577,nctemp12579);
return 1;
}
int CodeFdef (struct tree* p)
{
int nctemp12588=CodeGetarch();
int nctemp12585 = (nctemp12588 ==1);
if(nctemp12585)
{
struct tree* nctemp12591= p;
int nctemp12593=CodeFdefcpu(nctemp12591);
}
else{
int nctemp12597=CodeGetarch();
int nctemp12594 = (nctemp12597 ==2);
if(nctemp12594)
{
struct tree* nctemp12606= p;
struct tree* nctemp12608=PtreeMvchild(nctemp12606);
struct tree* nctemp12604= nctemp12608;
nctempchar1* nctemp12609=PtreeGetparallel(nctemp12604);
nctempchar1* nctemp12602= nctemp12609;
struct nctempchar1 *nctemp12612;
static struct nctempchar1 nctemp12613 = {{ 9}, (char*)"parallel\0"};
nctemp12612=&nctemp12613;
nctempchar1* nctemp12610= nctemp12612;
int nctemp12614=LibeStrcmp(nctemp12602,nctemp12610);
int nctemp12599 = (nctemp12614 ==1);
if(nctemp12599)
{
struct tree* nctemp12617= p;
int nctemp12619=CodeFdefgpu(nctemp12617);
struct tree* nctemp12621= p;
int nctemp12623=CodeFdewrappergpu(nctemp12621);
}
else{
struct tree* nctemp12625= p;
int nctemp12627=CodeFdefcpu(nctemp12625);
}
}
else{
int nctemp12631=CodeGetarch();
int nctemp12628 = (nctemp12631 ==3);
if(nctemp12628)
{
struct tree* nctemp12638= p;
nctempchar1* nctemp12640=PtreeGetparallel(nctemp12638);
nctempchar1* nctemp12636= nctemp12640;
struct nctempchar1 *nctemp12643;
static struct nctempchar1 nctemp12644 = {{ 9}, (char*)"parallel\0"};
nctemp12643=&nctemp12644;
nctempchar1* nctemp12641= nctemp12643;
int nctemp12645=LibeStrcmp(nctemp12636,nctemp12641);
int nctemp12633 = (nctemp12645 ==1);
if(nctemp12633)
{
struct tree* nctemp12648= p;
int nctemp12650=CodeFdefgpu(nctemp12648);
struct tree* nctemp12652= p;
int nctemp12654=CodeFdewrappergpu(nctemp12652);
}
else{
struct tree* nctemp12656= p;
int nctemp12658=CodeFdefcpu(nctemp12656);
}
}
}
}
return 1;
}
int CodePreamblecpu ()
{
struct tree* p;
struct nctempchar1 *nctemp12666;
static struct nctempchar1 nctemp12667 = {{ 6}, (char*)"dummy\0"};
nctemp12666=&nctemp12667;
nctempchar1* nctemp12664= nctemp12666;
struct nctempchar1 *nctemp12670;
static struct nctempchar1 nctemp12671 = {{ 6}, (char*)"dummy\0"};
nctemp12670=&nctemp12671;
nctempchar1* nctemp12668= nctemp12670;
struct tree* nctemp12672=PtreeMknode(nctemp12664,nctemp12668);
p =nctemp12672;
struct tree* nctemp12674= p;
int nctemp12676= 1;
int nctemp12678=PtreeSetline(nctemp12674,nctemp12676);
struct tree* nctemp12680= p;
struct nctempchar1 *nctemp12684;
static struct nctempchar1 nctemp12685 = {{ 42}, (char*)"//  Translated by epsc  version today  \n\0"};
nctemp12684=&nctemp12685;
nctempchar1* nctemp12682= nctemp12684;
int nctemp12686=CodeEs(nctemp12680,nctemp12682);
struct tree* nctemp12688= p;
int nctemp12690= 2;
int nctemp12692=PtreeSetline(nctemp12688,nctemp12690);
struct tree* nctemp12694= p;
int nctemp12696= 3;
int nctemp12698=PtreeSetline(nctemp12694,nctemp12696);
struct tree* nctemp12700= p;
int nctemp12702= 4;
int nctemp12704=PtreeSetline(nctemp12700,nctemp12702);
struct tree* nctemp12706= p;
struct nctempchar1 *nctemp12710;
static struct nctempchar1 nctemp12711 = {{ 22}, (char*)"#include <stddef.h>\n\0"};
nctemp12710=&nctemp12711;
nctempchar1* nctemp12708= nctemp12710;
int nctemp12712=CodeEs(nctemp12706,nctemp12708);
struct tree* nctemp12714= p;
struct nctempchar1 *nctemp12718;
static struct nctempchar1 nctemp12719 = {{ 48}, (char*)"typedef struct { float r; float i;} complex; \n\0"};
nctemp12718=&nctemp12719;
nctempchar1* nctemp12716= nctemp12718;
int nctemp12720=CodeEs(nctemp12714,nctemp12716);
struct tree* nctemp12722= p;
int nctemp12724= 3;
int nctemp12726=PtreeSetline(nctemp12722,nctemp12724);
struct tree* nctemp12728= p;
struct nctempchar1 *nctemp12732;
static struct nctempchar1 nctemp12733 = {{ 68}, (char*)"typedef struct nctempfloat1 { int d[1]; float *a;} nctempfloat1; \n\0"};
nctemp12732=&nctemp12733;
nctempchar1* nctemp12730= nctemp12732;
int nctemp12734=CodeEs(nctemp12728,nctemp12730);
struct tree* nctemp12736= p;
int nctemp12738= 5;
int nctemp12740=PtreeSetline(nctemp12736,nctemp12738);
struct tree* nctemp12742= p;
struct nctempchar1 *nctemp12746;
static struct nctempchar1 nctemp12747 = {{ 62}, (char*)"typedef struct nctempint1 { int d[1]; int *a;} nctempint1; \n\0"};
nctemp12746=&nctemp12747;
nctempchar1* nctemp12744= nctemp12746;
int nctemp12748=CodeEs(nctemp12742,nctemp12744);
struct tree* nctemp12750= p;
int nctemp12752= 7;
int nctemp12754=PtreeSetline(nctemp12750,nctemp12752);
struct tree* nctemp12756= p;
struct nctempchar1 *nctemp12760;
static struct nctempchar1 nctemp12761 = {{ 65}, (char*)"typedef struct nctempchar1 { int d[1]; char *a;} nctempchar1; \n\0"};
nctemp12760=&nctemp12761;
nctempchar1* nctemp12758= nctemp12760;
int nctemp12762=CodeEs(nctemp12756,nctemp12758);
struct tree* nctemp12764= p;
int nctemp12766= 7;
int nctemp12768=PtreeSetline(nctemp12764,nctemp12766);
struct tree* nctemp12770= p;
struct nctempchar1 *nctemp12774;
static struct nctempchar1 nctemp12775 = {{ 74}, (char*)"typedef struct nctempcomplex1 { int d[1]; complex *a;} nctempcomplex1; \n\0"};
nctemp12774=&nctemp12775;
nctempchar1* nctemp12772= nctemp12774;
int nctemp12776=CodeEs(nctemp12770,nctemp12772);
struct tree* nctemp12778= p;
int nctemp12780= 8;
int nctemp12782=PtreeSetline(nctemp12778,nctemp12780);
int nctemp12786=CodeArraycheck();
int nctemp12783 = (nctemp12786 ==1);
if(nctemp12783)
{
struct tree* nctemp12789= p;
struct nctempchar1 *nctemp12793;
static struct nctempchar1 nctemp12794 = {{ 55}, (char*)"static struct nctempchar1 nctempstringx = {0, NULL};\n\0"};
nctemp12793=&nctemp12794;
nctempchar1* nctemp12791= nctemp12793;
int nctemp12795=CodeEs(nctemp12789,nctemp12791);
struct tree* nctemp12797= p;
struct nctempchar1 *nctemp12801;
static struct nctempchar1 nctemp12802 = {{ 60}, (char*)"static struct nctempchar1 *nctempstring = &nctempstringx;\n\0"};
nctemp12801=&nctemp12802;
nctempchar1* nctemp12799= nctemp12801;
int nctemp12803=CodeEs(nctemp12797,nctemp12799);
struct tree* nctemp12805= p;
int nctemp12807= 8;
int nctemp12809=PtreeSetline(nctemp12805,nctemp12807);
}
struct tree* nctemp12811= p;
struct nctempchar1 *nctemp12815;
static struct nctempchar1 nctemp12816 = {{ 68}, (char*)"typedef struct nctempfloat2 { int d[2]; float *a;} nctempfloat2; \n\0"};
nctemp12815=&nctemp12816;
nctempchar1* nctemp12813= nctemp12815;
int nctemp12817=CodeEs(nctemp12811,nctemp12813);
struct tree* nctemp12819= p;
int nctemp12821= 10;
int nctemp12823=PtreeSetline(nctemp12819,nctemp12821);
struct tree* nctemp12825= p;
struct nctempchar1 *nctemp12829;
static struct nctempchar1 nctemp12830 = {{ 62}, (char*)"typedef struct nctempint2 { int d[2]; int *a;} nctempint2; \n\0"};
nctemp12829=&nctemp12830;
nctempchar1* nctemp12827= nctemp12829;
int nctemp12831=CodeEs(nctemp12825,nctemp12827);
struct tree* nctemp12833= p;
int nctemp12835= 10;
int nctemp12837=PtreeSetline(nctemp12833,nctemp12835);
struct tree* nctemp12839= p;
struct nctempchar1 *nctemp12843;
static struct nctempchar1 nctemp12844 = {{ 65}, (char*)"typedef struct nctempchar2 { int d[2]; char *a;} nctempchar2; \n\0"};
nctemp12843=&nctemp12844;
nctempchar1* nctemp12841= nctemp12843;
int nctemp12845=CodeEs(nctemp12839,nctemp12841);
struct tree* nctemp12847= p;
int nctemp12849= 12;
int nctemp12851=PtreeSetline(nctemp12847,nctemp12849);
struct tree* nctemp12853= p;
struct nctempchar1 *nctemp12857;
static struct nctempchar1 nctemp12858 = {{ 74}, (char*)"typedef struct nctempcomplex2 { int d[2]; complex *a;} nctempcomplex2; \n\0"};
nctemp12857=&nctemp12858;
nctempchar1* nctemp12855= nctemp12857;
int nctemp12859=CodeEs(nctemp12853,nctemp12855);
struct tree* nctemp12861= p;
int nctemp12863= 13;
int nctemp12865=PtreeSetline(nctemp12861,nctemp12863);
struct tree* nctemp12867= p;
struct nctempchar1 *nctemp12871;
static struct nctempchar1 nctemp12872 = {{ 68}, (char*)"typedef struct nctempfloat3 { int d[3]; float *a;} nctempfloat3; \n\0"};
nctemp12871=&nctemp12872;
nctempchar1* nctemp12869= nctemp12871;
int nctemp12873=CodeEs(nctemp12867,nctemp12869);
struct tree* nctemp12875= p;
int nctemp12877= 14;
int nctemp12879=PtreeSetline(nctemp12875,nctemp12877);
struct tree* nctemp12881= p;
struct nctempchar1 *nctemp12885;
static struct nctempchar1 nctemp12886 = {{ 62}, (char*)"typedef struct nctempint3 { int d[3]; int *a;} nctempint3; \n\0"};
nctemp12885=&nctemp12886;
nctempchar1* nctemp12883= nctemp12885;
int nctemp12887=CodeEs(nctemp12881,nctemp12883);
struct tree* nctemp12889= p;
int nctemp12891= 15;
int nctemp12893=PtreeSetline(nctemp12889,nctemp12891);
struct tree* nctemp12895= p;
struct nctempchar1 *nctemp12899;
static struct nctempchar1 nctemp12900 = {{ 65}, (char*)"typedef struct nctempchar3 { int d[3]; char *a;} nctempchar3; \n\0"};
nctemp12899=&nctemp12900;
nctempchar1* nctemp12897= nctemp12899;
int nctemp12901=CodeEs(nctemp12895,nctemp12897);
struct tree* nctemp12903= p;
int nctemp12905= 16;
int nctemp12907=PtreeSetline(nctemp12903,nctemp12905);
struct tree* nctemp12909= p;
struct nctempchar1 *nctemp12913;
static struct nctempchar1 nctemp12914 = {{ 74}, (char*)"typedef struct nctempcomplex3 { int d[3]; complex *a;} nctempcomplex3; \n\0"};
nctemp12913=&nctemp12914;
nctempchar1* nctemp12911= nctemp12913;
int nctemp12915=CodeEs(nctemp12909,nctemp12911);
struct tree* nctemp12917= p;
int nctemp12919= 17;
int nctemp12921=PtreeSetline(nctemp12917,nctemp12919);
struct tree* nctemp12923= p;
struct nctempchar1 *nctemp12927;
static struct nctempchar1 nctemp12928 = {{ 68}, (char*)"typedef struct nctempfloat4 { int d[4]; float *a;} nctempfloat4; \n\0"};
nctemp12927=&nctemp12928;
nctempchar1* nctemp12925= nctemp12927;
int nctemp12929=CodeEs(nctemp12923,nctemp12925);
struct tree* nctemp12931= p;
int nctemp12933= 18;
int nctemp12935=PtreeSetline(nctemp12931,nctemp12933);
struct tree* nctemp12937= p;
struct nctempchar1 *nctemp12941;
static struct nctempchar1 nctemp12942 = {{ 62}, (char*)"typedef struct nctempint4 { int d[4]; int *a;} nctempint4; \n\0"};
nctemp12941=&nctemp12942;
nctempchar1* nctemp12939= nctemp12941;
int nctemp12943=CodeEs(nctemp12937,nctemp12939);
struct tree* nctemp12945= p;
int nctemp12947= 19;
int nctemp12949=PtreeSetline(nctemp12945,nctemp12947);
struct tree* nctemp12951= p;
struct nctempchar1 *nctemp12955;
static struct nctempchar1 nctemp12956 = {{ 65}, (char*)"typedef struct nctempchar4 { int d[4]; char *a;} nctempchar4; \n\0"};
nctemp12955=&nctemp12956;
nctempchar1* nctemp12953= nctemp12955;
int nctemp12957=CodeEs(nctemp12951,nctemp12953);
struct tree* nctemp12959= p;
int nctemp12961= 20;
int nctemp12963=PtreeSetline(nctemp12959,nctemp12961);
struct tree* nctemp12965= p;
struct nctempchar1 *nctemp12969;
static struct nctempchar1 nctemp12970 = {{ 74}, (char*)"typedef struct nctempcomplex4 { int d[4]; complex *a;} nctempcomplex4; \n\0"};
nctemp12969=&nctemp12970;
nctempchar1* nctemp12967= nctemp12969;
int nctemp12971=CodeEs(nctemp12965,nctemp12967);
struct tree* nctemp12973= p;
struct nctempchar1 *nctemp12977;
static struct nctempchar1 nctemp12978 = {{ 22}, (char*)"#include <stdlib.h>\n\0"};
nctemp12977=&nctemp12978;
nctempchar1* nctemp12975= nctemp12977;
int nctemp12979=CodeEs(nctemp12973,nctemp12975);
struct tree* nctemp12981= p;
struct nctempchar1 *nctemp12985;
static struct nctempchar1 nctemp12986 = {{ 22}, (char*)"#include <string.h>\n\0"};
nctemp12985=&nctemp12986;
nctempchar1* nctemp12983= nctemp12985;
int nctemp12987=CodeEs(nctemp12981,nctemp12983);
struct tree* nctemp12989= p;
struct nctempchar1 *nctemp12993;
static struct nctempchar1 nctemp12994 = {{ 27}, (char*)"void *RunMalloc(int n); \n\0"};
nctemp12993=&nctemp12994;
nctempchar1* nctemp12991= nctemp12993;
int nctemp12995=CodeEs(nctemp12989,nctemp12991);
struct tree* nctemp12997= p;
struct nctempchar1 *nctemp13001;
static struct nctempchar1 nctemp13002 = {{ 25}, (char*)"int RunFree(void *n); \n\0"};
nctemp13001=&nctemp13002;
nctempchar1* nctemp12999= nctemp13001;
int nctemp13003=CodeEs(nctemp12997,nctemp12999);
return 1;
}
int CodePreamblecuda ()
{
struct tree* p;
struct nctempchar1 *nctemp13011;
static struct nctempchar1 nctemp13012 = {{ 6}, (char*)"dummy\0"};
nctemp13011=&nctemp13012;
nctempchar1* nctemp13009= nctemp13011;
struct nctempchar1 *nctemp13015;
static struct nctempchar1 nctemp13016 = {{ 6}, (char*)"dummy\0"};
nctemp13015=&nctemp13016;
nctempchar1* nctemp13013= nctemp13015;
struct tree* nctemp13017=PtreeMknode(nctemp13009,nctemp13013);
p =nctemp13017;
struct tree* nctemp13019= p;
int nctemp13021= 1;
int nctemp13023=PtreeSetline(nctemp13019,nctemp13021);
struct tree* nctemp13025= p;
struct nctempchar1 *nctemp13029;
static struct nctempchar1 nctemp13030 = {{ 50}, (char*)"//  Translated by epsc  version December 2021  \n\0"};
nctemp13029=&nctemp13030;
nctempchar1* nctemp13027= nctemp13029;
int nctemp13031=CodeEs(nctemp13025,nctemp13027);
struct tree* nctemp13033= p;
int nctemp13035= 2;
int nctemp13037=PtreeSetline(nctemp13033,nctemp13035);
struct tree* nctemp13039= p;
int nctemp13041= 3;
int nctemp13043=PtreeSetline(nctemp13039,nctemp13041);
struct tree* nctemp13045= p;
struct nctempchar1 *nctemp13049;
static struct nctempchar1 nctemp13050 = {{ 17}, (char*)"extern \"C\" {\n\0"};
nctemp13049=&nctemp13050;
nctempchar1* nctemp13047= nctemp13049;
int nctemp13051=CodeEs(nctemp13045,nctemp13047);
struct tree* nctemp13053= p;
struct nctempchar1 *nctemp13057;
static struct nctempchar1 nctemp13058 = {{ 48}, (char*)"typedef struct { float r; float i;} complex; \n\0"};
nctemp13057=&nctemp13058;
nctempchar1* nctemp13055= nctemp13057;
int nctemp13059=CodeEs(nctemp13053,nctemp13055);
struct tree* nctemp13061= p;
int nctemp13063= 3;
int nctemp13065=PtreeSetline(nctemp13061,nctemp13063);
struct tree* nctemp13067= p;
struct nctempchar1 *nctemp13071;
static struct nctempchar1 nctemp13072 = {{ 68}, (char*)"typedef struct nctempfloat1 { int d[1]; float *a;} nctempfloat1; \n\0"};
nctemp13071=&nctemp13072;
nctempchar1* nctemp13069= nctemp13071;
int nctemp13073=CodeEs(nctemp13067,nctemp13069);
struct tree* nctemp13075= p;
int nctemp13077= 5;
int nctemp13079=PtreeSetline(nctemp13075,nctemp13077);
struct tree* nctemp13081= p;
struct nctempchar1 *nctemp13085;
static struct nctempchar1 nctemp13086 = {{ 62}, (char*)"typedef struct nctempint1 { int d[1]; int *a;} nctempint1; \n\0"};
nctemp13085=&nctemp13086;
nctempchar1* nctemp13083= nctemp13085;
int nctemp13087=CodeEs(nctemp13081,nctemp13083);
struct tree* nctemp13089= p;
int nctemp13091= 7;
int nctemp13093=PtreeSetline(nctemp13089,nctemp13091);
struct tree* nctemp13095= p;
struct nctempchar1 *nctemp13099;
static struct nctempchar1 nctemp13100 = {{ 65}, (char*)"typedef struct nctempchar1 { int d[1]; char *a;} nctempchar1; \n\0"};
nctemp13099=&nctemp13100;
nctempchar1* nctemp13097= nctemp13099;
int nctemp13101=CodeEs(nctemp13095,nctemp13097);
struct tree* nctemp13103= p;
int nctemp13105= 7;
int nctemp13107=PtreeSetline(nctemp13103,nctemp13105);
struct tree* nctemp13109= p;
struct nctempchar1 *nctemp13113;
static struct nctempchar1 nctemp13114 = {{ 74}, (char*)"typedef struct nctempcomplex1 { int d[1]; complex *a;} nctempcomplex1; \n\0"};
nctemp13113=&nctemp13114;
nctempchar1* nctemp13111= nctemp13113;
int nctemp13115=CodeEs(nctemp13109,nctemp13111);
struct tree* nctemp13117= p;
int nctemp13119= 8;
int nctemp13121=PtreeSetline(nctemp13117,nctemp13119);
struct tree* nctemp13123= p;
struct nctempchar1 *nctemp13127;
static struct nctempchar1 nctemp13128 = {{ 68}, (char*)"typedef struct nctempfloat2 { int d[2]; float *a;} nctempfloat2; \n\0"};
nctemp13127=&nctemp13128;
nctempchar1* nctemp13125= nctemp13127;
int nctemp13129=CodeEs(nctemp13123,nctemp13125);
struct tree* nctemp13131= p;
int nctemp13133= 10;
int nctemp13135=PtreeSetline(nctemp13131,nctemp13133);
struct tree* nctemp13137= p;
struct nctempchar1 *nctemp13141;
static struct nctempchar1 nctemp13142 = {{ 62}, (char*)"typedef struct nctempint2 { int d[2]; int *a;} nctempint2; \n\0"};
nctemp13141=&nctemp13142;
nctempchar1* nctemp13139= nctemp13141;
int nctemp13143=CodeEs(nctemp13137,nctemp13139);
struct tree* nctemp13145= p;
int nctemp13147= 10;
int nctemp13149=PtreeSetline(nctemp13145,nctemp13147);
struct tree* nctemp13151= p;
struct nctempchar1 *nctemp13155;
static struct nctempchar1 nctemp13156 = {{ 65}, (char*)"typedef struct nctempchar2 { int d[2]; char *a;} nctempchar2; \n\0"};
nctemp13155=&nctemp13156;
nctempchar1* nctemp13153= nctemp13155;
int nctemp13157=CodeEs(nctemp13151,nctemp13153);
struct tree* nctemp13159= p;
int nctemp13161= 12;
int nctemp13163=PtreeSetline(nctemp13159,nctemp13161);
struct tree* nctemp13165= p;
struct nctempchar1 *nctemp13169;
static struct nctempchar1 nctemp13170 = {{ 74}, (char*)"typedef struct nctempcomplex2 { int d[2]; complex *a;} nctempcomplex2; \n\0"};
nctemp13169=&nctemp13170;
nctempchar1* nctemp13167= nctemp13169;
int nctemp13171=CodeEs(nctemp13165,nctemp13167);
struct tree* nctemp13173= p;
int nctemp13175= 13;
int nctemp13177=PtreeSetline(nctemp13173,nctemp13175);
struct tree* nctemp13179= p;
struct nctempchar1 *nctemp13183;
static struct nctempchar1 nctemp13184 = {{ 68}, (char*)"typedef struct nctempfloat3 { int d[3]; float *a;} nctempfloat3; \n\0"};
nctemp13183=&nctemp13184;
nctempchar1* nctemp13181= nctemp13183;
int nctemp13185=CodeEs(nctemp13179,nctemp13181);
struct tree* nctemp13187= p;
int nctemp13189= 14;
int nctemp13191=PtreeSetline(nctemp13187,nctemp13189);
struct tree* nctemp13193= p;
struct nctempchar1 *nctemp13197;
static struct nctempchar1 nctemp13198 = {{ 62}, (char*)"typedef struct nctempint3 { int d[3]; int *a;} nctempint3; \n\0"};
nctemp13197=&nctemp13198;
nctempchar1* nctemp13195= nctemp13197;
int nctemp13199=CodeEs(nctemp13193,nctemp13195);
struct tree* nctemp13201= p;
int nctemp13203= 15;
int nctemp13205=PtreeSetline(nctemp13201,nctemp13203);
struct tree* nctemp13207= p;
struct nctempchar1 *nctemp13211;
static struct nctempchar1 nctemp13212 = {{ 65}, (char*)"typedef struct nctempchar3 { int d[3]; char *a;} nctempchar3; \n\0"};
nctemp13211=&nctemp13212;
nctempchar1* nctemp13209= nctemp13211;
int nctemp13213=CodeEs(nctemp13207,nctemp13209);
struct tree* nctemp13215= p;
int nctemp13217= 16;
int nctemp13219=PtreeSetline(nctemp13215,nctemp13217);
struct tree* nctemp13221= p;
struct nctempchar1 *nctemp13225;
static struct nctempchar1 nctemp13226 = {{ 74}, (char*)"typedef struct nctempcomplex3 { int d[3]; complex *a;} nctempcomplex3; \n\0"};
nctemp13225=&nctemp13226;
nctempchar1* nctemp13223= nctemp13225;
int nctemp13227=CodeEs(nctemp13221,nctemp13223);
struct tree* nctemp13229= p;
int nctemp13231= 17;
int nctemp13233=PtreeSetline(nctemp13229,nctemp13231);
struct tree* nctemp13235= p;
struct nctempchar1 *nctemp13239;
static struct nctempchar1 nctemp13240 = {{ 68}, (char*)"typedef struct nctempfloat4 { int d[4]; float *a;} nctempfloat4; \n\0"};
nctemp13239=&nctemp13240;
nctempchar1* nctemp13237= nctemp13239;
int nctemp13241=CodeEs(nctemp13235,nctemp13237);
struct tree* nctemp13243= p;
int nctemp13245= 18;
int nctemp13247=PtreeSetline(nctemp13243,nctemp13245);
struct tree* nctemp13249= p;
struct nctempchar1 *nctemp13253;
static struct nctempchar1 nctemp13254 = {{ 62}, (char*)"typedef struct nctempint4 { int d[4]; int *a;} nctempint4; \n\0"};
nctemp13253=&nctemp13254;
nctempchar1* nctemp13251= nctemp13253;
int nctemp13255=CodeEs(nctemp13249,nctemp13251);
struct tree* nctemp13257= p;
int nctemp13259= 19;
int nctemp13261=PtreeSetline(nctemp13257,nctemp13259);
struct tree* nctemp13263= p;
struct nctempchar1 *nctemp13267;
static struct nctempchar1 nctemp13268 = {{ 65}, (char*)"typedef struct nctempchar4 { int d[4]; char *a;} nctempchar4; \n\0"};
nctemp13267=&nctemp13268;
nctempchar1* nctemp13265= nctemp13267;
int nctemp13269=CodeEs(nctemp13263,nctemp13265);
struct tree* nctemp13271= p;
int nctemp13273= 20;
int nctemp13275=PtreeSetline(nctemp13271,nctemp13273);
struct tree* nctemp13277= p;
struct nctempchar1 *nctemp13281;
static struct nctempchar1 nctemp13282 = {{ 74}, (char*)"typedef struct nctempcomplex4 { int d[4]; complex *a;} nctempcomplex4; \n\0"};
nctemp13281=&nctemp13282;
nctempchar1* nctemp13279= nctemp13281;
int nctemp13283=CodeEs(nctemp13277,nctemp13279);
struct tree* nctemp13285= p;
struct nctempchar1 *nctemp13289;
static struct nctempchar1 nctemp13290 = {{ 21}, (char*)"#include <stdio.h>\n\0"};
nctemp13289=&nctemp13290;
nctempchar1* nctemp13287= nctemp13289;
int nctemp13291=CodeEs(nctemp13285,nctemp13287);
struct tree* nctemp13293= p;
struct nctempchar1 *nctemp13297;
static struct nctempchar1 nctemp13298 = {{ 22}, (char*)"#include <stdlib.h>\n\0"};
nctemp13297=&nctemp13298;
nctempchar1* nctemp13295= nctemp13297;
int nctemp13299=CodeEs(nctemp13293,nctemp13295);
struct tree* nctemp13301= p;
struct nctempchar1 *nctemp13305;
static struct nctempchar1 nctemp13306 = {{ 22}, (char*)"#include <string.h>\n\0"};
nctemp13305=&nctemp13306;
nctempchar1* nctemp13303= nctemp13305;
int nctemp13307=CodeEs(nctemp13301,nctemp13303);
struct tree* nctemp13309= p;
struct nctempchar1 *nctemp13313;
static struct nctempchar1 nctemp13314 = {{ 3}, (char*)"\n\0"};
nctemp13313=&nctemp13314;
nctempchar1* nctemp13311= nctemp13313;
int nctemp13315=CodeEs(nctemp13309,nctemp13311);
struct tree* nctemp13317= p;
struct nctempchar1 *nctemp13321;
static struct nctempchar1 nctemp13322 = {{ 23}, (char*)"void *GpuNew(int n);\n\0"};
nctemp13321=&nctemp13322;
nctempchar1* nctemp13319= nctemp13321;
int nctemp13323=CodeEs(nctemp13317,nctemp13319);
struct tree* nctemp13325= p;
struct nctempchar1 *nctemp13329;
static struct nctempchar1 nctemp13330 = {{ 28}, (char*)"void *GpuDelete(void *f);\n\0"};
nctemp13329=&nctemp13330;
nctempchar1* nctemp13327= nctemp13329;
int nctemp13331=CodeEs(nctemp13325,nctemp13327);
struct tree* nctemp13333= p;
struct nctempchar1 *nctemp13337;
static struct nctempchar1 nctemp13338 = {{ 20}, (char*)"void *GpuError();\n\0"};
nctemp13337=&nctemp13338;
nctempchar1* nctemp13335= nctemp13337;
int nctemp13339=CodeEs(nctemp13333,nctemp13335);
struct tree* nctemp13341= p;
struct nctempchar1 *nctemp13345;
static struct nctempchar1 nctemp13346 = {{ 26}, (char*)"void *RunMalloc(int n);\n\0"};
nctemp13345=&nctemp13346;
nctempchar1* nctemp13343= nctemp13345;
int nctemp13347=CodeEs(nctemp13341,nctemp13343);
struct tree* nctemp13349= p;
struct nctempchar1 *nctemp13353;
static struct nctempchar1 nctemp13354 = {{ 24}, (char*)"int RunFree(void * );\n\0"};
nctemp13353=&nctemp13354;
nctempchar1* nctemp13351= nctemp13353;
int nctemp13355=CodeEs(nctemp13349,nctemp13351);
struct tree* nctemp13357= p;
struct nctempchar1 *nctemp13361;
static struct nctempchar1 nctemp13362 = {{ 17}, (char*)"int RunSync();\n\0"};
nctemp13361=&nctemp13362;
nctempchar1* nctemp13359= nctemp13361;
int nctemp13363=CodeEs(nctemp13357,nctemp13359);
struct tree* nctemp13365= p;
struct nctempchar1 *nctemp13369;
static struct nctempchar1 nctemp13370 = {{ 18}, (char*)"int RunGetnt();\n\0"};
nctemp13369=&nctemp13370;
nctempchar1* nctemp13367= nctemp13369;
int nctemp13371=CodeEs(nctemp13365,nctemp13367);
struct tree* nctemp13373= p;
struct nctempchar1 *nctemp13377;
static struct nctempchar1 nctemp13378 = {{ 18}, (char*)"int RunGetnb();\n\0"};
nctemp13377=&nctemp13378;
nctempchar1* nctemp13375= nctemp13377;
int nctemp13379=CodeEs(nctemp13373,nctemp13375);
return 1;
}
int CodePreamblehip ()
{
struct tree* p;
struct nctempchar1 *nctemp13387;
static struct nctempchar1 nctemp13388 = {{ 6}, (char*)"dummy\0"};
nctemp13387=&nctemp13388;
nctempchar1* nctemp13385= nctemp13387;
struct nctempchar1 *nctemp13391;
static struct nctempchar1 nctemp13392 = {{ 6}, (char*)"dummy\0"};
nctemp13391=&nctemp13392;
nctempchar1* nctemp13389= nctemp13391;
struct tree* nctemp13393=PtreeMknode(nctemp13385,nctemp13389);
p =nctemp13393;
struct tree* nctemp13395= p;
int nctemp13397= 1;
int nctemp13399=PtreeSetline(nctemp13395,nctemp13397);
struct tree* nctemp13401= p;
struct nctempchar1 *nctemp13405;
static struct nctempchar1 nctemp13406 = {{ 50}, (char*)"//  Translated by epsc  version December 2021  \n\0"};
nctemp13405=&nctemp13406;
nctempchar1* nctemp13403= nctemp13405;
int nctemp13407=CodeEs(nctemp13401,nctemp13403);
struct tree* nctemp13409= p;
int nctemp13411= 2;
int nctemp13413=PtreeSetline(nctemp13409,nctemp13411);
struct tree* nctemp13415= p;
int nctemp13417= 3;
int nctemp13419=PtreeSetline(nctemp13415,nctemp13417);
struct tree* nctemp13421= p;
struct nctempchar1 *nctemp13425;
static struct nctempchar1 nctemp13426 = {{ 48}, (char*)"typedef struct { float r; float i;} complex; \n\0"};
nctemp13425=&nctemp13426;
nctempchar1* nctemp13423= nctemp13425;
int nctemp13427=CodeEs(nctemp13421,nctemp13423);
struct tree* nctemp13429= p;
int nctemp13431= 3;
int nctemp13433=PtreeSetline(nctemp13429,nctemp13431);
struct tree* nctemp13435= p;
struct nctempchar1 *nctemp13439;
static struct nctempchar1 nctemp13440 = {{ 68}, (char*)"typedef struct nctempfloat1 { int d[1]; float *a;} nctempfloat1; \n\0"};
nctemp13439=&nctemp13440;
nctempchar1* nctemp13437= nctemp13439;
int nctemp13441=CodeEs(nctemp13435,nctemp13437);
struct tree* nctemp13443= p;
int nctemp13445= 5;
int nctemp13447=PtreeSetline(nctemp13443,nctemp13445);
struct tree* nctemp13449= p;
struct nctempchar1 *nctemp13453;
static struct nctempchar1 nctemp13454 = {{ 62}, (char*)"typedef struct nctempint1 { int d[1]; int *a;} nctempint1; \n\0"};
nctemp13453=&nctemp13454;
nctempchar1* nctemp13451= nctemp13453;
int nctemp13455=CodeEs(nctemp13449,nctemp13451);
struct tree* nctemp13457= p;
int nctemp13459= 7;
int nctemp13461=PtreeSetline(nctemp13457,nctemp13459);
struct tree* nctemp13463= p;
struct nctempchar1 *nctemp13467;
static struct nctempchar1 nctemp13468 = {{ 65}, (char*)"typedef struct nctempchar1 { int d[1]; char *a;} nctempchar1; \n\0"};
nctemp13467=&nctemp13468;
nctempchar1* nctemp13465= nctemp13467;
int nctemp13469=CodeEs(nctemp13463,nctemp13465);
struct tree* nctemp13471= p;
int nctemp13473= 7;
int nctemp13475=PtreeSetline(nctemp13471,nctemp13473);
struct tree* nctemp13477= p;
struct nctempchar1 *nctemp13481;
static struct nctempchar1 nctemp13482 = {{ 74}, (char*)"typedef struct nctempcomplex1 { int d[1]; complex *a;} nctempcomplex1; \n\0"};
nctemp13481=&nctemp13482;
nctempchar1* nctemp13479= nctemp13481;
int nctemp13483=CodeEs(nctemp13477,nctemp13479);
struct tree* nctemp13485= p;
int nctemp13487= 8;
int nctemp13489=PtreeSetline(nctemp13485,nctemp13487);
struct tree* nctemp13491= p;
struct nctempchar1 *nctemp13495;
static struct nctempchar1 nctemp13496 = {{ 68}, (char*)"typedef struct nctempfloat2 { int d[2]; float *a;} nctempfloat2; \n\0"};
nctemp13495=&nctemp13496;
nctempchar1* nctemp13493= nctemp13495;
int nctemp13497=CodeEs(nctemp13491,nctemp13493);
struct tree* nctemp13499= p;
int nctemp13501= 10;
int nctemp13503=PtreeSetline(nctemp13499,nctemp13501);
struct tree* nctemp13505= p;
struct nctempchar1 *nctemp13509;
static struct nctempchar1 nctemp13510 = {{ 62}, (char*)"typedef struct nctempint2 { int d[2]; int *a;} nctempint2; \n\0"};
nctemp13509=&nctemp13510;
nctempchar1* nctemp13507= nctemp13509;
int nctemp13511=CodeEs(nctemp13505,nctemp13507);
struct tree* nctemp13513= p;
int nctemp13515= 10;
int nctemp13517=PtreeSetline(nctemp13513,nctemp13515);
struct tree* nctemp13519= p;
struct nctempchar1 *nctemp13523;
static struct nctempchar1 nctemp13524 = {{ 65}, (char*)"typedef struct nctempchar2 { int d[2]; char *a;} nctempchar2; \n\0"};
nctemp13523=&nctemp13524;
nctempchar1* nctemp13521= nctemp13523;
int nctemp13525=CodeEs(nctemp13519,nctemp13521);
struct tree* nctemp13527= p;
int nctemp13529= 12;
int nctemp13531=PtreeSetline(nctemp13527,nctemp13529);
struct tree* nctemp13533= p;
struct nctempchar1 *nctemp13537;
static struct nctempchar1 nctemp13538 = {{ 74}, (char*)"typedef struct nctempcomplex2 { int d[2]; complex *a;} nctempcomplex2; \n\0"};
nctemp13537=&nctemp13538;
nctempchar1* nctemp13535= nctemp13537;
int nctemp13539=CodeEs(nctemp13533,nctemp13535);
struct tree* nctemp13541= p;
int nctemp13543= 13;
int nctemp13545=PtreeSetline(nctemp13541,nctemp13543);
struct tree* nctemp13547= p;
struct nctempchar1 *nctemp13551;
static struct nctempchar1 nctemp13552 = {{ 68}, (char*)"typedef struct nctempfloat3 { int d[3]; float *a;} nctempfloat3; \n\0"};
nctemp13551=&nctemp13552;
nctempchar1* nctemp13549= nctemp13551;
int nctemp13553=CodeEs(nctemp13547,nctemp13549);
struct tree* nctemp13555= p;
int nctemp13557= 14;
int nctemp13559=PtreeSetline(nctemp13555,nctemp13557);
struct tree* nctemp13561= p;
struct nctempchar1 *nctemp13565;
static struct nctempchar1 nctemp13566 = {{ 62}, (char*)"typedef struct nctempint3 { int d[3]; int *a;} nctempint3; \n\0"};
nctemp13565=&nctemp13566;
nctempchar1* nctemp13563= nctemp13565;
int nctemp13567=CodeEs(nctemp13561,nctemp13563);
struct tree* nctemp13569= p;
int nctemp13571= 15;
int nctemp13573=PtreeSetline(nctemp13569,nctemp13571);
struct tree* nctemp13575= p;
struct nctempchar1 *nctemp13579;
static struct nctempchar1 nctemp13580 = {{ 65}, (char*)"typedef struct nctempchar3 { int d[3]; char *a;} nctempchar3; \n\0"};
nctemp13579=&nctemp13580;
nctempchar1* nctemp13577= nctemp13579;
int nctemp13581=CodeEs(nctemp13575,nctemp13577);
struct tree* nctemp13583= p;
int nctemp13585= 16;
int nctemp13587=PtreeSetline(nctemp13583,nctemp13585);
struct tree* nctemp13589= p;
struct nctempchar1 *nctemp13593;
static struct nctempchar1 nctemp13594 = {{ 74}, (char*)"typedef struct nctempcomplex3 { int d[3]; complex *a;} nctempcomplex3; \n\0"};
nctemp13593=&nctemp13594;
nctempchar1* nctemp13591= nctemp13593;
int nctemp13595=CodeEs(nctemp13589,nctemp13591);
struct tree* nctemp13597= p;
int nctemp13599= 17;
int nctemp13601=PtreeSetline(nctemp13597,nctemp13599);
struct tree* nctemp13603= p;
struct nctempchar1 *nctemp13607;
static struct nctempchar1 nctemp13608 = {{ 68}, (char*)"typedef struct nctempfloat4 { int d[4]; float *a;} nctempfloat4; \n\0"};
nctemp13607=&nctemp13608;
nctempchar1* nctemp13605= nctemp13607;
int nctemp13609=CodeEs(nctemp13603,nctemp13605);
struct tree* nctemp13611= p;
int nctemp13613= 18;
int nctemp13615=PtreeSetline(nctemp13611,nctemp13613);
struct tree* nctemp13617= p;
struct nctempchar1 *nctemp13621;
static struct nctempchar1 nctemp13622 = {{ 62}, (char*)"typedef struct nctempint4 { int d[4]; int *a;} nctempint4; \n\0"};
nctemp13621=&nctemp13622;
nctempchar1* nctemp13619= nctemp13621;
int nctemp13623=CodeEs(nctemp13617,nctemp13619);
struct tree* nctemp13625= p;
int nctemp13627= 19;
int nctemp13629=PtreeSetline(nctemp13625,nctemp13627);
struct tree* nctemp13631= p;
struct nctempchar1 *nctemp13635;
static struct nctempchar1 nctemp13636 = {{ 65}, (char*)"typedef struct nctempchar4 { int d[4]; char *a;} nctempchar4; \n\0"};
nctemp13635=&nctemp13636;
nctempchar1* nctemp13633= nctemp13635;
int nctemp13637=CodeEs(nctemp13631,nctemp13633);
struct tree* nctemp13639= p;
int nctemp13641= 20;
int nctemp13643=PtreeSetline(nctemp13639,nctemp13641);
struct tree* nctemp13645= p;
struct nctempchar1 *nctemp13649;
static struct nctempchar1 nctemp13650 = {{ 74}, (char*)"typedef struct nctempcomplex4 { int d[4]; complex *a;} nctempcomplex4; \n\0"};
nctemp13649=&nctemp13650;
nctempchar1* nctemp13647= nctemp13649;
int nctemp13651=CodeEs(nctemp13645,nctemp13647);
struct tree* nctemp13653= p;
struct nctempchar1 *nctemp13657;
static struct nctempchar1 nctemp13658 = {{ 21}, (char*)"#include <stdio.h>\n\0"};
nctemp13657=&nctemp13658;
nctempchar1* nctemp13655= nctemp13657;
int nctemp13659=CodeEs(nctemp13653,nctemp13655);
struct tree* nctemp13661= p;
struct nctempchar1 *nctemp13665;
static struct nctempchar1 nctemp13666 = {{ 17}, (char*)"extern \"C\" {\n\0"};
nctemp13665=&nctemp13666;
nctempchar1* nctemp13663= nctemp13665;
int nctemp13667=CodeEs(nctemp13661,nctemp13663);
struct tree* nctemp13669= p;
struct nctempchar1 *nctemp13673;
static struct nctempchar1 nctemp13674 = {{ 22}, (char*)"#include <stdlib.h>\n\0"};
nctemp13673=&nctemp13674;
nctempchar1* nctemp13671= nctemp13673;
int nctemp13675=CodeEs(nctemp13669,nctemp13671);
struct tree* nctemp13677= p;
struct nctempchar1 *nctemp13681;
static struct nctempchar1 nctemp13682 = {{ 22}, (char*)"#include <string.h>\n\0"};
nctemp13681=&nctemp13682;
nctempchar1* nctemp13679= nctemp13681;
int nctemp13683=CodeEs(nctemp13677,nctemp13679);
struct tree* nctemp13685= p;
struct nctempchar1 *nctemp13689;
static struct nctempchar1 nctemp13690 = {{ 4}, (char*)"}\n\0"};
nctemp13689=&nctemp13690;
nctempchar1* nctemp13687= nctemp13689;
int nctemp13691=CodeEs(nctemp13685,nctemp13687);
struct tree* nctemp13693= p;
struct nctempchar1 *nctemp13697;
static struct nctempchar1 nctemp13698 = {{ 34}, (char*)"#include \"hip/hip_runtime.h\" \n\0"};
nctemp13697=&nctemp13698;
nctempchar1* nctemp13695= nctemp13697;
int nctemp13699=CodeEs(nctemp13693,nctemp13695);
struct tree* nctemp13701= p;
struct nctempchar1 *nctemp13705;
static struct nctempchar1 nctemp13706 = {{ 3}, (char*)"\n\0"};
nctemp13705=&nctemp13706;
nctempchar1* nctemp13703= nctemp13705;
int nctemp13707=CodeEs(nctemp13701,nctemp13703);
struct tree* nctemp13709= p;
struct nctempchar1 *nctemp13713;
static struct nctempchar1 nctemp13714 = {{ 23}, (char*)"void *GpuNew(int n);\n\0"};
nctemp13713=&nctemp13714;
nctempchar1* nctemp13711= nctemp13713;
int nctemp13715=CodeEs(nctemp13709,nctemp13711);
struct tree* nctemp13717= p;
struct nctempchar1 *nctemp13721;
static struct nctempchar1 nctemp13722 = {{ 28}, (char*)"void *GpuDelete(void *f);\n\0"};
nctemp13721=&nctemp13722;
nctempchar1* nctemp13719= nctemp13721;
int nctemp13723=CodeEs(nctemp13717,nctemp13719);
struct tree* nctemp13725= p;
struct nctempchar1 *nctemp13729;
static struct nctempchar1 nctemp13730 = {{ 20}, (char*)"void *GpuError();\n\0"};
nctemp13729=&nctemp13730;
nctempchar1* nctemp13727= nctemp13729;
int nctemp13731=CodeEs(nctemp13725,nctemp13727);
struct tree* nctemp13733= p;
struct nctempchar1 *nctemp13737;
static struct nctempchar1 nctemp13738 = {{ 26}, (char*)"void *RunMalloc(int n);\n\0"};
nctemp13737=&nctemp13738;
nctempchar1* nctemp13735= nctemp13737;
int nctemp13739=CodeEs(nctemp13733,nctemp13735);
struct tree* nctemp13741= p;
struct nctempchar1 *nctemp13745;
static struct nctempchar1 nctemp13746 = {{ 24}, (char*)"int RunFree(void *p);\n\0"};
nctemp13745=&nctemp13746;
nctempchar1* nctemp13743= nctemp13745;
int nctemp13747=CodeEs(nctemp13741,nctemp13743);
return 1;
}
int CodePreamble ()
{
int nctemp13752=CodeGetarch();
int nctemp13749 = (nctemp13752 ==1);
if(nctemp13749)
{
int nctemp13755=CodePreamblecpu();
return 1;
}
else{
int nctemp13760=CodeGetarch();
int nctemp13757 = (nctemp13760 ==2);
if(nctemp13757)
{
int nctemp13763=CodePreamblecuda();
return 1;
}
else{
int nctemp13768=CodeGetarch();
int nctemp13765 = (nctemp13768 ==3);
if(nctemp13765)
{
int nctemp13771=CodePreamblehip();
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
int nctemp13778=CodeGetfdout();
fdo =nctemp13778;
int nctemp13782=CodeGetarch();
int nctemp13779 = (nctemp13782 ==2);
if(nctemp13779)
{
int nctemp13785= fdo;
struct nctempchar1 *nctemp13789;
static struct nctempchar1 nctemp13790 = {{ 4}, (char*)"}\n\0"};
nctemp13789=&nctemp13790;
nctempchar1* nctemp13787= nctemp13789;
int nctemp13791=LibePuts(nctemp13785,nctemp13787);
return 1;
}
else{
int nctemp13796=CodeGetarch();
int nctemp13793 = (nctemp13796 ==3);
if(nctemp13793)
{
int nctemp13799= fdo;
struct nctempchar1 *nctemp13803;
static struct nctempchar1 nctemp13804 = {{ 4}, (char*)"}\n\0"};
nctemp13803=&nctemp13804;
nctempchar1* nctemp13801= nctemp13803;
int nctemp13805=LibePuts(nctemp13799,nctemp13801);
return 1;
}
else{
return 0;
}
}
}
}
