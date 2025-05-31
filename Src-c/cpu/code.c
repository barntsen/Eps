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
static struct nctempchar1 nctemp3864 = {{ 67}, (char*)"printf(\"***Out of bounds error (file,array,line,index,rank,bound:\0"};
nctemp3863=&nctemp3864;
nctempchar1* nctemp3861= nctemp3863;
int nctemp3865=CodeEs(nctemp3859,nctemp3861);
struct tree* nctemp3867= p;
nctempchar1* nctemp3871=ScanGetfile();
nctempchar1* nctemp3869= nctemp3871;
int nctemp3872=CodeEs(nctemp3867,nctemp3869);
struct tree* nctemp3874= p;
struct nctempchar1 *nctemp3878;
static struct nctempchar1 nctemp3879 = {{ 2}, (char*)" \0"};
nctemp3878=&nctemp3879;
nctempchar1* nctemp3876= nctemp3878;
int nctemp3880=CodeEs(nctemp3874,nctemp3876);
struct tree* nctemp3882= p;
nctempchar1* nctemp3884= name;
int nctemp3887=CodeEs(nctemp3882,nctemp3884);
struct tree* nctemp3889= p;
struct nctempchar1 *nctemp3893;
static struct nctempchar1 nctemp3894 = {{ 17}, (char*)" %d %d %d %d \\n\0"};
nctemp3893=&nctemp3894;
nctempchar1* nctemp3891= nctemp3893;
int nctemp3895=CodeEs(nctemp3889,nctemp3891);
struct tree* nctemp3897= p;
struct nctempchar1 *nctemp3901;
static struct nctempchar1 nctemp3902 = {{ 6}, (char*)" \" ,\0"};
nctemp3901=&nctemp3902;
nctempchar1* nctemp3899= nctemp3901;
int nctemp3903=CodeEs(nctemp3897,nctemp3899);
int nctemp3905= line;
int nctemp3907=CodeEd(nctemp3905);
struct tree* nctemp3909= p;
struct nctempchar1 *nctemp3913;
static struct nctempchar1 nctemp3914 = {{ 2}, (char*)",\0"};
nctemp3913=&nctemp3914;
nctempchar1* nctemp3911= nctemp3913;
int nctemp3915=CodeEs(nctemp3909,nctemp3911);
struct tree* nctemp3917= p;
nctempchar1* nctemp3919= ival;
int nctemp3922=CodeEs(nctemp3917,nctemp3919);
struct tree* nctemp3924= p;
struct nctempchar1 *nctemp3928;
static struct nctempchar1 nctemp3929 = {{ 2}, (char*)",\0"};
nctemp3928=&nctemp3929;
nctempchar1* nctemp3926= nctemp3928;
int nctemp3930=CodeEs(nctemp3924,nctemp3926);
int nctemp3932= index;
int nctemp3934=CodeEd(nctemp3932);
struct tree* nctemp3936= p;
struct nctempchar1 *nctemp3940;
static struct nctempchar1 nctemp3941 = {{ 2}, (char*)",\0"};
nctemp3940=&nctemp3941;
nctempchar1* nctemp3938= nctemp3940;
int nctemp3942=CodeEs(nctemp3936,nctemp3938);
struct tree* nctemp3944= p;
nctempchar1* nctemp3946= name;
int nctemp3949=CodeEs(nctemp3944,nctemp3946);
struct tree* nctemp3951= p;
struct nctempchar1 *nctemp3955;
static struct nctempchar1 nctemp3956 = {{ 5}, (char*)"->d[\0"};
nctemp3955=&nctemp3956;
nctempchar1* nctemp3953= nctemp3955;
int nctemp3957=CodeEs(nctemp3951,nctemp3953);
int nctemp3959= index;
int nctemp3961=CodeEd(nctemp3959);
struct tree* nctemp3963= p;
struct nctempchar1 *nctemp3967;
static struct nctempchar1 nctemp3968 = {{ 4}, (char*)"]-1\0"};
nctemp3967=&nctemp3968;
nctempchar1* nctemp3965= nctemp3967;
int nctemp3969=CodeEs(nctemp3963,nctemp3965);
struct tree* nctemp3971= p;
struct nctempchar1 *nctemp3975;
static struct nctempchar1 nctemp3976 = {{ 3}, (char*)");\0"};
nctemp3975=&nctemp3976;
nctempchar1* nctemp3973= nctemp3975;
int nctemp3977=CodeEs(nctemp3971,nctemp3973);
struct tree* nctemp3979= p;
struct nctempchar1 *nctemp3983;
static struct nctempchar1 nctemp3984 = {{ 6}, (char*)"\n}\n\0"};
nctemp3983=&nctemp3984;
nctempchar1* nctemp3981= nctemp3983;
int nctemp3985=CodeEs(nctemp3979,nctemp3981);
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
struct tree* nctemp3992= p;
nctempchar1* nctemp3994=PtreeGetdef(nctemp3992);
name=nctemp3994;
nctempchar1* nctemp4000=CodeMktemp();
temp=nctemp4000;
nctempchar1* nctemp4005= name;
struct symbol* nctemp4008=SymLook(nctemp4005);
tp =nctemp4008;
int nctemp4009 = (tp ==0);
if(nctemp4009)
{
nctempchar1* nctemp4014= name;
int nctemp4017=CodeError(nctemp4014);
}
struct tree* nctemp4022= p;
struct tree* nctemp4024=PtreeMvchild(nctemp4022);
sp =nctemp4024;
int nctemp4025 = (sp ==0);
if(nctemp4025)
{
struct tree* nctemp4030= p;
nctempchar1* nctemp4032=PtreeGetdef(nctemp4030);
return nctemp4032;
}
else{
struct tree* nctemp4038= sp;
nctempchar1* nctemp4040=PtreeGetname(nctemp4038);
nctempchar1* nctemp4036= nctemp4040;
struct nctempchar1 *nctemp4043;
static struct nctempchar1 nctemp4044 = {{ 9}, (char*)"exprlist\0"};
nctemp4043=&nctemp4044;
nctempchar1* nctemp4041= nctemp4043;
int nctemp4045=LibeStrcmp(nctemp4036,nctemp4041);
int nctemp4033 = (nctemp4045 ==0);
if(nctemp4033)
{
struct tree* nctemp4048= p;
nctempchar1* nctemp4050=PtreeGetdef(nctemp4048);
return nctemp4050;
}
}
struct symbol* nctemp4055= tp;
int nctemp4057=SymGetrank(nctemp4055);
rank =nctemp4057;
struct tree* nctemp4062= p;
struct tree* nctemp4064=PtreeMvchild(nctemp4062);
p =nctemp4064;
struct tree* nctemp4069= p;
struct tree* nctemp4071=PtreeMvchild(nctemp4069);
p =nctemp4071;
sp =p;
i =0;
int nctemp4080 = (i < rank);
while(nctemp4080){
{
int nctemp4084 = (i ==0);
if(nctemp4084)
{
struct tree* nctemp4093= p;
nctempchar1* nctemp4095=CodeExpr(nctemp4093);
temp2=nctemp4095;
struct tree* nctemp4097= p;
struct tree* nctemp4101= p;
nctempchar1* nctemp4103=PtreeGetype(nctemp4101);
nctempchar1* nctemp4099= nctemp4103;
int nctemp4104=CodeEs(nctemp4097,nctemp4099);
struct tree* nctemp4106= p;
struct nctempchar1 *nctemp4110;
static struct nctempchar1 nctemp4111 = {{ 2}, (char*)" \0"};
nctemp4110=&nctemp4111;
nctempchar1* nctemp4108= nctemp4110;
int nctemp4112=CodeEs(nctemp4106,nctemp4108);
struct tree* nctemp4114= p;
nctempchar1* nctemp4116= temp;
int nctemp4119=CodeEs(nctemp4114,nctemp4116);
struct tree* nctemp4121= p;
struct nctempchar1 *nctemp4125;
static struct nctempchar1 nctemp4126 = {{ 2}, (char*)"=\0"};
nctemp4125=&nctemp4126;
nctempchar1* nctemp4123= nctemp4125;
int nctemp4127=CodeEs(nctemp4121,nctemp4123);
struct tree* nctemp4129= p;
nctempchar1* nctemp4131= temp2;
int nctemp4134=CodeEs(nctemp4129,nctemp4131);
struct tree* nctemp4136= p;
struct nctempchar1 *nctemp4140;
static struct nctempchar1 nctemp4141 = {{ 4}, (char*)";\n\0"};
nctemp4140=&nctemp4141;
nctempchar1* nctemp4138= nctemp4140;
int nctemp4142=CodeEs(nctemp4136,nctemp4138);
int nctemp4144=CodeArraycheck();
if(nctemp4144)
{
struct tree* nctemp4148= p;
int nctemp4150=PtreeGetline(nctemp4148);
int nctemp4146= nctemp4150;
nctempchar1* nctemp4151= qual;
nctempchar1* nctemp4154= sel;
nctempchar1* nctemp4157= name;
nctempchar1* nctemp4160= temp2;
int nctemp4163= i;
int nctemp4165=CodeArrayex(nctemp4146,nctemp4151,nctemp4154,nctemp4157,nctemp4160,nctemp4163);
}
}
else{
struct tree* nctemp4171= sp;
nctempchar1* nctemp4173=CodeExpr(nctemp4171);
temp2=nctemp4173;
struct tree* nctemp4175= p;
nctempchar1* nctemp4177= temp;
int nctemp4180=CodeEs(nctemp4175,nctemp4177);
struct tree* nctemp4182= p;
struct nctempchar1 *nctemp4186;
static struct nctempchar1 nctemp4187 = {{ 2}, (char*)"=\0"};
nctemp4186=&nctemp4187;
nctempchar1* nctemp4184= nctemp4186;
int nctemp4188=CodeEs(nctemp4182,nctemp4184);
struct tree* nctemp4190= p;
nctempchar1* nctemp4192= temp2;
int nctemp4195=CodeEs(nctemp4190,nctemp4192);
struct tree* nctemp4197= p;
struct nctempchar1 *nctemp4201;
static struct nctempchar1 nctemp4202 = {{ 2}, (char*)"*\0"};
nctemp4201=&nctemp4202;
nctempchar1* nctemp4199= nctemp4201;
int nctemp4203=CodeEs(nctemp4197,nctemp4199);
nctempchar1 *nctemp4205 =qual;
int nctemp4204 =(nctemp4205!=0);
if(nctemp4204)
{
struct tree* nctemp4210= p;
nctempchar1* nctemp4212= qual;
int nctemp4215=CodeEs(nctemp4210,nctemp4212);
}
nctempchar1 *nctemp4217 =sel;
int nctemp4216 =(nctemp4217!=0);
if(nctemp4216)
{
struct tree* nctemp4222= p;
nctempchar1* nctemp4224= sel;
int nctemp4227=CodeEs(nctemp4222,nctemp4224);
}
struct tree* nctemp4229= p;
nctempchar1* nctemp4231= name;
int nctemp4234=CodeEs(nctemp4229,nctemp4231);
struct tree* nctemp4236= p;
struct nctempchar1 *nctemp4240;
static struct nctempchar1 nctemp4241 = {{ 4}, (char*)"->d\0"};
nctemp4240=&nctemp4241;
nctempchar1* nctemp4238= nctemp4240;
int nctemp4242=CodeEs(nctemp4236,nctemp4238);
struct tree* nctemp4244= p;
struct nctempchar1 *nctemp4248;
static struct nctempchar1 nctemp4249 = {{ 2}, (char*)"[\0"};
nctemp4248=&nctemp4249;
nctempchar1* nctemp4246= nctemp4248;
int nctemp4250=CodeEs(nctemp4244,nctemp4246);
int nctemp4257 = i - 1;
int nctemp4252= nctemp4257;
int nctemp4258=CodeEd(nctemp4252);
struct tree* nctemp4260= p;
struct nctempchar1 *nctemp4264;
static struct nctempchar1 nctemp4265 = {{ 2}, (char*)"]\0"};
nctemp4264=&nctemp4265;
nctempchar1* nctemp4262= nctemp4264;
int nctemp4266=CodeEs(nctemp4260,nctemp4262);
struct tree* nctemp4268= p;
struct nctempchar1 *nctemp4272;
static struct nctempchar1 nctemp4273 = {{ 2}, (char*)"+\0"};
nctemp4272=&nctemp4273;
nctempchar1* nctemp4270= nctemp4272;
int nctemp4274=CodeEs(nctemp4268,nctemp4270);
struct tree* nctemp4276= p;
nctempchar1* nctemp4278= temp;
int nctemp4281=CodeEs(nctemp4276,nctemp4278);
struct tree* nctemp4283= p;
struct nctempchar1 *nctemp4287;
static struct nctempchar1 nctemp4288 = {{ 4}, (char*)";\n\0"};
nctemp4287=&nctemp4288;
nctempchar1* nctemp4285= nctemp4287;
int nctemp4289=CodeEs(nctemp4283,nctemp4285);
int nctemp4291=CodeArraycheck();
if(nctemp4291)
{
struct tree* nctemp4295= p;
int nctemp4297=PtreeGetline(nctemp4295);
int nctemp4293= nctemp4297;
nctempchar1* nctemp4298= qual;
nctempchar1* nctemp4301= sel;
nctempchar1* nctemp4304= name;
nctempchar1* nctemp4307= temp2;
int nctemp4310= i;
int nctemp4312=CodeArrayex(nctemp4293,nctemp4298,nctemp4301,nctemp4304,nctemp4307,nctemp4310);
}
}
int nctemp4313 = (sp !=0);
if(nctemp4313)
{
struct tree* nctemp4321= sp;
struct tree* nctemp4323=PtreeMvsister(nctemp4321);
sp =nctemp4323;
}
}
int nctemp4332 = i + 1;
i =nctemp4332;
int nctemp4333 = (i < rank);
nctemp4080=nctemp4333;
}
nctempchar1* nctemp4347= name;
int nctemp4350=LibeStrlen(nctemp4347);
nctempchar1* nctemp4352= temp;
int nctemp4355=LibeStrlen(nctemp4352);
int nctemp4356 = nctemp4350 + nctemp4355;
int nctemp4358 = nctemp4356 + 6;
size =nctemp4358;
int nctemp4365=size;
nctempchar1 *nctemp4364;
nctemp4364=(nctempchar1*)RunMalloc(sizeof(nctempchar1));
nctemp4364->d[0]=size;
nctemp4364->a=(char *)RunMalloc(sizeof(char)*nctemp4365);
rval=nctemp4364;
nctempchar1* nctemp4369= name;
nctempchar1* nctemp4372= rval;
int nctemp4375=LibeStrcpy(nctemp4369,nctemp4372);
struct nctempchar1 *nctemp4379;
static struct nctempchar1 nctemp4380 = {{ 4}, (char*)"->a\0"};
nctemp4379=&nctemp4380;
nctempchar1* nctemp4377= nctemp4379;
nctempchar1* nctemp4381= rval;
int nctemp4384=LibeStrcat(nctemp4377,nctemp4381);
struct nctempchar1 *nctemp4388;
static struct nctempchar1 nctemp4389 = {{ 2}, (char*)"[\0"};
nctemp4388=&nctemp4389;
nctempchar1* nctemp4386= nctemp4388;
nctempchar1* nctemp4390= rval;
int nctemp4393=LibeStrcat(nctemp4386,nctemp4390);
nctempchar1* nctemp4395= temp;
nctempchar1* nctemp4398= rval;
int nctemp4401=LibeStrcat(nctemp4395,nctemp4398);
struct nctempchar1 *nctemp4405;
static struct nctempchar1 nctemp4406 = {{ 2}, (char*)"]\0"};
nctemp4405=&nctemp4406;
nctempchar1* nctemp4403= nctemp4405;
nctempchar1* nctemp4407= rval;
int nctemp4410=LibeStrcat(nctemp4403,nctemp4407);
return rval;
}
nctempchar1 * CodeQident (nctempchar1 *qual,nctempchar1 *ident)
{
int lq;
int li;
nctempchar1 *name;
nctempchar1* nctemp4417= qual;
int nctemp4420=LibeStrlen(nctemp4417);
lq =nctemp4420;
nctempchar1* nctemp4425= ident;
int nctemp4428=LibeStrlen(nctemp4425);
li =nctemp4428;
int nctemp4443 = lq + li;
int nctemp4445 = nctemp4443 + 2;
int nctemp4435=nctemp4445;
nctempchar1 *nctemp4434;
nctemp4434=(nctempchar1*)RunMalloc(sizeof(nctempchar1));
int nctemp4453 = lq + li;
int nctemp4455 = nctemp4453 + 2;
nctemp4434->d[0]=nctemp4455;
nctemp4434->a=(char *)RunMalloc(sizeof(char)*nctemp4435);
name=nctemp4434;
nctempchar1* nctemp4457= qual;
nctempchar1* nctemp4460= name;
int nctemp4463=LibeStrcpy(nctemp4457,nctemp4460);
struct nctempchar1 *nctemp4467;
static struct nctempchar1 nctemp4468 = {{ 2}, (char*)".\0"};
nctemp4467=&nctemp4468;
nctempchar1* nctemp4465= nctemp4467;
nctempchar1* nctemp4469= name;
int nctemp4472=LibeStrcat(nctemp4465,nctemp4469);
nctempchar1* nctemp4474= ident;
nctempchar1* nctemp4477= name;
int nctemp4480=LibeStrcat(nctemp4474,nctemp4477);
return name;
}
nctempchar1 * CodeQident2 (nctempchar1 *qual,nctempchar1 *ident)
{
int lq;
int li;
nctempchar1 *name;
nctempchar1* nctemp4487= qual;
int nctemp4490=LibeStrlen(nctemp4487);
lq =nctemp4490;
nctempchar1* nctemp4495= ident;
int nctemp4498=LibeStrlen(nctemp4495);
li =nctemp4498;
int nctemp4513 = lq + li;
int nctemp4515 = nctemp4513 + 3;
int nctemp4505=nctemp4515;
nctempchar1 *nctemp4504;
nctemp4504=(nctempchar1*)RunMalloc(sizeof(nctempchar1));
int nctemp4523 = lq + li;
int nctemp4525 = nctemp4523 + 3;
nctemp4504->d[0]=nctemp4525;
nctemp4504->a=(char *)RunMalloc(sizeof(char)*nctemp4505);
name=nctemp4504;
nctempchar1* nctemp4527= qual;
nctempchar1* nctemp4530= name;
int nctemp4533=LibeStrcpy(nctemp4527,nctemp4530);
struct nctempchar1 *nctemp4537;
static struct nctempchar1 nctemp4538 = {{ 3}, (char*)"->\0"};
nctemp4537=&nctemp4538;
nctempchar1* nctemp4535= nctemp4537;
nctempchar1* nctemp4539= name;
int nctemp4542=LibeStrcat(nctemp4535,nctemp4539);
nctempchar1* nctemp4544= ident;
nctempchar1* nctemp4547= name;
int nctemp4550=LibeStrcat(nctemp4544,nctemp4547);
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
struct tree* nctemp4563= p;
nctempchar1* nctemp4565=PtreeGetstruct(nctemp4563);
nctempchar1* nctemp4561= nctemp4565;
struct nctempchar1 *nctemp4568;
static struct nctempchar1 nctemp4569 = {{ 7}, (char*)"struct\0"};
nctemp4568=&nctemp4569;
nctempchar1* nctemp4566= nctemp4568;
int nctemp4570=LibeStrcmp(nctemp4561,nctemp4566);
int nctemp4558 = (nctemp4570 ==1);
if(nctemp4558)
{
struct tree* nctemp4577= p;
nctempchar1* nctemp4579=PtreeGetarray(nctemp4577);
nctempchar1* nctemp4575= nctemp4579;
struct nctempchar1 *nctemp4582;
static struct nctempchar1 nctemp4583 = {{ 6}, (char*)"array\0"};
nctemp4582=&nctemp4583;
nctempchar1* nctemp4580= nctemp4582;
int nctemp4584=LibeStrcmp(nctemp4575,nctemp4580);
int nctemp4572 = (nctemp4584 ==1);
if(nctemp4572)
{
struct tree* nctemp4591= p;
nctempchar1* nctemp4593= qual;
struct nctempchar1 *nctemp4598;
static struct nctempchar1 nctemp4599 = {{ 2}, (char*)".\0"};
nctemp4598=&nctemp4599;
nctempchar1* nctemp4596= nctemp4598;
nctempchar1* nctemp4600=CodeArray(nctemp4591,nctemp4593,nctemp4596);
qual=nctemp4600;
struct tree* nctemp4605= p;
struct tree* nctemp4607=PtreeMvchild(nctemp4605);
np =nctemp4607;
int nctemp4608 = (np ==0);
if(nctemp4608)
{
return qual;
}
struct tree* nctemp4618= np;
struct tree* nctemp4620=PtreeMvsister(nctemp4618);
np =nctemp4620;
int nctemp4621 = (np ==0);
if(nctemp4621)
{
return qual;
}
}
else{
struct tree* nctemp4632= p;
nctempchar1* nctemp4634=PtreeGetdef(nctemp4632);
qual=nctemp4634;
struct tree* nctemp4642= p;
struct tree* nctemp4644=PtreeMvchild(nctemp4642);
np =nctemp4644;
int nctemp4635 = (np ==0);
if(nctemp4635)
{
return qual;
}
}
struct tree* nctemp4653= np;
nctempchar1* nctemp4655=PtreeGetarray(nctemp4653);
nctempchar1* nctemp4651= nctemp4655;
struct nctempchar1 *nctemp4658;
static struct nctempchar1 nctemp4659 = {{ 6}, (char*)"array\0"};
nctemp4658=&nctemp4659;
nctempchar1* nctemp4656= nctemp4658;
int nctemp4660=LibeStrcmp(nctemp4651,nctemp4656);
int nctemp4648 = (nctemp4660 ==1);
if(nctemp4648)
{
struct symbol* nctemp4666=SymGetltp();
tp =nctemp4666;
struct symbol* nctemp4671=SymGetetp();
up =nctemp4671;
struct tree* nctemp4678= p;
nctempchar1* nctemp4680=PtreeGetdef(nctemp4678);
nctempchar1* nctemp4676= nctemp4680;
struct symbol* nctemp4681=SymLook(nctemp4676);
uup =nctemp4681;
struct symbol* nctemp4688= uup;
nctempchar1* nctemp4690=SymGetype(nctemp4688);
nctempchar1* nctemp4686= nctemp4690;
struct symbol* nctemp4691=SymLook(nctemp4686);
uup =nctemp4691;
struct symbol* nctemp4695= uup;
struct symbol* nctemp4697=SymGetable(nctemp4695);
struct symbol* nctemp4693= nctemp4697;
struct symbol* nctemp4698=SymSetltp(nctemp4693);
struct tree* nctemp4704= p;
nctempchar1* nctemp4706=PtreeGetarray(nctemp4704);
nctempchar1* nctemp4702= nctemp4706;
struct nctempchar1 *nctemp4709;
static struct nctempchar1 nctemp4710 = {{ 6}, (char*)"array\0"};
nctemp4709=&nctemp4710;
nctempchar1* nctemp4707= nctemp4709;
int nctemp4711=LibeStrcmp(nctemp4702,nctemp4707);
int nctemp4699 = (nctemp4711 ==1);
if(nctemp4699)
{
struct tree* nctemp4718= np;
nctempchar1* nctemp4720= qual;
struct nctempchar1 *nctemp4725;
static struct nctempchar1 nctemp4726 = {{ 2}, (char*)".\0"};
nctemp4725=&nctemp4726;
nctempchar1* nctemp4723= nctemp4725;
nctempchar1* nctemp4727=CodeArray(nctemp4718,nctemp4720,nctemp4723);
name=nctemp4727;
}
else{
struct tree* nctemp4733= np;
nctempchar1* nctemp4735= qual;
struct nctempchar1 *nctemp4740;
static struct nctempchar1 nctemp4741 = {{ 3}, (char*)"->\0"};
nctemp4740=&nctemp4741;
nctempchar1* nctemp4738= nctemp4740;
nctempchar1* nctemp4742=CodeArray(nctemp4733,nctemp4735,nctemp4738);
name=nctemp4742;
}
struct symbol* nctemp4744= tp;
struct symbol* nctemp4746=SymSetltp(nctemp4744);
struct symbol* nctemp4748= up;
struct symbol* nctemp4750=SymSetetp(nctemp4748);
}
else{
struct tree* nctemp4756= np;
nctempchar1* nctemp4758=PtreeGetdef(nctemp4756);
name=nctemp4758;
}
struct tree* nctemp4764= p;
nctempchar1* nctemp4766=PtreeGetarray(nctemp4764);
nctempchar1* nctemp4762= nctemp4766;
struct nctempchar1 *nctemp4769;
static struct nctempchar1 nctemp4770 = {{ 6}, (char*)"array\0"};
nctemp4769=&nctemp4770;
nctempchar1* nctemp4767= nctemp4769;
int nctemp4771=LibeStrcmp(nctemp4762,nctemp4767);
int nctemp4759 = (nctemp4771 ==1);
if(nctemp4759)
{
nctempchar1* nctemp4774= qual;
nctempchar1* nctemp4777= name;
nctempchar1* nctemp4780=CodeQident(nctemp4774,nctemp4777);
return nctemp4780;
}
else{
nctempchar1* nctemp4782= qual;
nctempchar1* nctemp4785= name;
nctempchar1* nctemp4788=CodeQident2(nctemp4782,nctemp4785);
return nctemp4788;
}
}
else{
struct tree* nctemp4794= p;
nctempchar1* nctemp4796=PtreeGetarray(nctemp4794);
nctempchar1* nctemp4792= nctemp4796;
struct nctempchar1 *nctemp4799;
static struct nctempchar1 nctemp4800 = {{ 6}, (char*)"array\0"};
nctemp4799=&nctemp4800;
nctempchar1* nctemp4797= nctemp4799;
int nctemp4801=LibeStrcmp(nctemp4792,nctemp4797);
int nctemp4789 = (nctemp4801 ==1);
if(nctemp4789)
{
name=(0);
qual=(0);
struct tree* nctemp4818= p;
nctempchar1* nctemp4820= qual;
nctempchar1* nctemp4823= name;
nctempchar1* nctemp4826=CodeArray(nctemp4818,nctemp4820,nctemp4823);
qual=nctemp4826;
return qual;
}
else{
struct tree* nctemp4830= p;
nctempchar1* nctemp4832=PtreeGetdef(nctemp4830);
return nctemp4832;
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
nctempchar1* nctemp4838=CodeMktemp();
pointer=nctemp4838;
nctempchar1* nctemp4844=CodeMktemp();
totdim=nctemp4844;
struct tree* nctemp4849= p;
struct tree* nctemp4851=PtreeMvchild(nctemp4849);
p =nctemp4851;
struct tree* nctemp4857= p;
nctempchar1* nctemp4859=PtreeGetdef(nctemp4857);
type=nctemp4859;
struct tree* nctemp4865= p;
nctempchar1* nctemp4867=PtreeGetstruct(nctemp4865);
structflag=nctemp4867;
struct tree* nctemp4873= p;
nctempchar1* nctemp4875=PtreeGetarray(nctemp4873);
arrayflag=nctemp4875;
struct tree* nctemp4881= p;
nctempchar1* nctemp4883=PtreeGetarray(nctemp4881);
nctempchar1* nctemp4879= nctemp4883;
struct nctempchar1 *nctemp4886;
static struct nctempchar1 nctemp4887 = {{ 6}, (char*)"array\0"};
nctemp4886=&nctemp4887;
nctempchar1* nctemp4884= nctemp4886;
int nctemp4888=LibeStrcmp(nctemp4879,nctemp4884);
int nctemp4876 = (nctemp4888 ==1);
if(nctemp4876)
{
struct tree* nctemp4894= p;
struct tree* nctemp4896=PtreeMvchild(nctemp4894);
p =nctemp4896;
struct tree* nctemp4901= p;
struct tree* nctemp4903=PtreeMvchild(nctemp4901);
p =nctemp4903;
struct tree* nctemp4908= p;
struct tree* nctemp4910=PtreeMvchild(nctemp4908);
p =nctemp4910;
struct tree* nctemp4915= p;
struct tree* nctemp4917=PtreeMvchild(nctemp4915);
p =nctemp4917;
sp =p;
top =p;
rank =1;
struct tree* nctemp4937= p;
struct tree* nctemp4939=PtreeMvsister(nctemp4937);
p =nctemp4939;
int nctemp4930 = (p !=0);
int nctemp4941=nctemp4930;
while(nctemp4941)
{{
int nctemp4950 = rank + 1;
rank =nctemp4950;
}
struct tree* nctemp4958= p;
struct tree* nctemp4960=PtreeMvsister(nctemp4958);
p =nctemp4960;
int nctemp4951 = (p !=0);
nctemp4941=nctemp4951;}int nctemp4962 = (rank > 4);
if(nctemp4962)
{
struct nctempchar1 *nctemp4969;
static struct nctempchar1 nctemp4970 = {{ 29}, (char*)"Array dimension is too large\0"};
nctemp4969=&nctemp4970;
nctempchar1* nctemp4967= nctemp4969;
int nctemp4971=CodeError(nctemp4967);
}
p =sp;
i =0;
int nctemp4980 = (p !=0);
int nctemp4984=nctemp4980;
while(nctemp4984)
{{
struct tree* nctemp4990= p;
nctempchar1* nctemp4992=CodeExpr(nctemp4990);
dim=nctemp4992;
int nctemp4993 = (i ==0);
if(nctemp4993)
{
struct tree* nctemp4998= p;
struct tree* nctemp5002= p;
nctempchar1* nctemp5004=PtreeGetype(nctemp5002);
nctempchar1* nctemp5000= nctemp5004;
int nctemp5005=CodeEs(nctemp4998,nctemp5000);
struct tree* nctemp5007= p;
struct nctempchar1 *nctemp5011;
static struct nctempchar1 nctemp5012 = {{ 2}, (char*)" \0"};
nctemp5011=&nctemp5012;
nctempchar1* nctemp5009= nctemp5011;
int nctemp5013=CodeEs(nctemp5007,nctemp5009);
struct tree* nctemp5015= p;
nctempchar1* nctemp5017= totdim;
int nctemp5020=CodeEs(nctemp5015,nctemp5017);
struct tree* nctemp5022= p;
struct nctempchar1 *nctemp5026;
static struct nctempchar1 nctemp5027 = {{ 2}, (char*)"=\0"};
nctemp5026=&nctemp5027;
nctempchar1* nctemp5024= nctemp5026;
int nctemp5028=CodeEs(nctemp5022,nctemp5024);
struct tree* nctemp5030= p;
nctempchar1* nctemp5032= dim;
int nctemp5035=CodeEs(nctemp5030,nctemp5032);
}
else{
struct tree* nctemp5037= p;
nctempchar1* nctemp5039= totdim;
int nctemp5042=CodeEs(nctemp5037,nctemp5039);
struct tree* nctemp5044= p;
struct nctempchar1 *nctemp5048;
static struct nctempchar1 nctemp5049 = {{ 2}, (char*)"=\0"};
nctemp5048=&nctemp5049;
nctempchar1* nctemp5046= nctemp5048;
int nctemp5050=CodeEs(nctemp5044,nctemp5046);
struct tree* nctemp5052= p;
nctempchar1* nctemp5054= totdim;
int nctemp5057=CodeEs(nctemp5052,nctemp5054);
struct tree* nctemp5059= p;
struct nctempchar1 *nctemp5063;
static struct nctempchar1 nctemp5064 = {{ 2}, (char*)"*\0"};
nctemp5063=&nctemp5064;
nctempchar1* nctemp5061= nctemp5063;
int nctemp5065=CodeEs(nctemp5059,nctemp5061);
struct tree* nctemp5067= p;
nctempchar1* nctemp5069= dim;
int nctemp5072=CodeEs(nctemp5067,nctemp5069);
}
struct tree* nctemp5074= p;
struct nctempchar1 *nctemp5078;
static struct nctempchar1 nctemp5079 = {{ 4}, (char*)";\n\0"};
nctemp5078=&nctemp5079;
nctempchar1* nctemp5076= nctemp5078;
int nctemp5080=CodeEs(nctemp5074,nctemp5076);
int nctemp5089 = i + 1;
i =nctemp5089;
struct tree* nctemp5094= p;
struct tree* nctemp5096=PtreeMvsister(nctemp5094);
p =nctemp5096;
}
int nctemp5097 = (p !=0);
nctemp4984=nctemp5097;}}
nctempchar1* nctemp5107= structflag;
struct nctempchar1 *nctemp5112;
static struct nctempchar1 nctemp5113 = {{ 7}, (char*)"struct\0"};
nctemp5112=&nctemp5113;
nctempchar1* nctemp5110= nctemp5112;
int nctemp5114=LibeStrcmp(nctemp5107,nctemp5110);
int nctemp5104 = (nctemp5114 ==1);
nctempchar1* nctemp5120= arrayflag;
struct nctempchar1 *nctemp5125;
static struct nctempchar1 nctemp5126 = {{ 6}, (char*)"array\0"};
nctemp5125=&nctemp5126;
nctempchar1* nctemp5123= nctemp5125;
int nctemp5127=LibeStrcmp(nctemp5120,nctemp5123);
int nctemp5117 = (nctemp5127 ==0);
int nctemp5101 = (nctemp5104 && nctemp5117);
if(nctemp5101)
{
struct tree* nctemp5130= p;
struct nctempchar1 *nctemp5134;
static struct nctempchar1 nctemp5135 = {{ 8}, (char*)"struct \0"};
nctemp5134=&nctemp5135;
nctempchar1* nctemp5132= nctemp5134;
int nctemp5136=CodeEs(nctemp5130,nctemp5132);
struct tree* nctemp5138= p;
nctempchar1* nctemp5140= type;
int nctemp5143=CodeEs(nctemp5138,nctemp5140);
struct tree* nctemp5145= p;
struct nctempchar1 *nctemp5149;
static struct nctempchar1 nctemp5150 = {{ 3}, (char*)" *\0"};
nctemp5149=&nctemp5150;
nctempchar1* nctemp5147= nctemp5149;
int nctemp5151=CodeEs(nctemp5145,nctemp5147);
struct tree* nctemp5153= p;
nctempchar1* nctemp5155= pointer;
int nctemp5158=CodeEs(nctemp5153,nctemp5155);
struct tree* nctemp5160= p;
struct nctempchar1 *nctemp5164;
static struct nctempchar1 nctemp5165 = {{ 2}, (char*)"=\0"};
nctemp5164=&nctemp5165;
nctempchar1* nctemp5162= nctemp5164;
int nctemp5166=CodeEs(nctemp5160,nctemp5162);
struct tree* nctemp5168= p;
struct nctempchar1 *nctemp5172;
static struct nctempchar1 nctemp5173 = {{ 2}, (char*)"(\0"};
nctemp5172=&nctemp5173;
nctempchar1* nctemp5170= nctemp5172;
int nctemp5174=CodeEs(nctemp5168,nctemp5170);
struct tree* nctemp5176= p;
struct nctempchar1 *nctemp5180;
static struct nctempchar1 nctemp5181 = {{ 8}, (char*)"struct \0"};
nctemp5180=&nctemp5181;
nctempchar1* nctemp5178= nctemp5180;
int nctemp5182=CodeEs(nctemp5176,nctemp5178);
struct tree* nctemp5184= p;
nctempchar1* nctemp5186= type;
int nctemp5189=CodeEs(nctemp5184,nctemp5186);
struct tree* nctemp5191= p;
struct nctempchar1 *nctemp5195;
static struct nctempchar1 nctemp5196 = {{ 3}, (char*)"*)\0"};
nctemp5195=&nctemp5196;
nctempchar1* nctemp5193= nctemp5195;
int nctemp5197=CodeEs(nctemp5191,nctemp5193);
struct tree* nctemp5199= p;
struct nctempchar1 *nctemp5203;
static struct nctempchar1 nctemp5204 = {{ 11}, (char*)"RunMalloc(\0"};
nctemp5203=&nctemp5204;
nctempchar1* nctemp5201= nctemp5203;
int nctemp5205=CodeEs(nctemp5199,nctemp5201);
struct tree* nctemp5207= p;
struct nctempchar1 *nctemp5211;
static struct nctempchar1 nctemp5212 = {{ 8}, (char*)"sizeof(\0"};
nctemp5211=&nctemp5212;
nctempchar1* nctemp5209= nctemp5211;
int nctemp5213=CodeEs(nctemp5207,nctemp5209);
struct tree* nctemp5215= p;
struct nctempchar1 *nctemp5219;
static struct nctempchar1 nctemp5220 = {{ 8}, (char*)"struct \0"};
nctemp5219=&nctemp5220;
nctempchar1* nctemp5217= nctemp5219;
int nctemp5221=CodeEs(nctemp5215,nctemp5217);
struct tree* nctemp5223= p;
nctempchar1* nctemp5225= type;
int nctemp5228=CodeEs(nctemp5223,nctemp5225);
struct tree* nctemp5230= p;
struct nctempchar1 *nctemp5234;
static struct nctempchar1 nctemp5235 = {{ 6}, (char*)"));\n\0"};
nctemp5234=&nctemp5235;
nctempchar1* nctemp5232= nctemp5234;
int nctemp5236=CodeEs(nctemp5230,nctemp5232);
}
nctempchar1* nctemp5243= structflag;
struct nctempchar1 *nctemp5248;
static struct nctempchar1 nctemp5249 = {{ 7}, (char*)"struct\0"};
nctemp5248=&nctemp5249;
nctempchar1* nctemp5246= nctemp5248;
int nctemp5250=LibeStrcmp(nctemp5243,nctemp5246);
int nctemp5240 = (nctemp5250 ==1);
nctempchar1* nctemp5256= arrayflag;
struct nctempchar1 *nctemp5261;
static struct nctempchar1 nctemp5262 = {{ 6}, (char*)"array\0"};
nctemp5261=&nctemp5262;
nctempchar1* nctemp5259= nctemp5261;
int nctemp5263=LibeStrcmp(nctemp5256,nctemp5259);
int nctemp5253 = (nctemp5263 ==1);
int nctemp5237 = (nctemp5240 && nctemp5253);
if(nctemp5237)
{
struct tree* nctemp5266= p;
struct nctempchar1 *nctemp5270;
static struct nctempchar1 nctemp5271 = {{ 14}, (char*)"struct nctemp\0"};
nctemp5270=&nctemp5271;
nctempchar1* nctemp5268= nctemp5270;
int nctemp5272=CodeEs(nctemp5266,nctemp5268);
struct tree* nctemp5274= p;
nctempchar1* nctemp5276= type;
int nctemp5279=CodeEs(nctemp5274,nctemp5276);
int nctemp5281= rank;
int nctemp5283=CodeEd(nctemp5281);
struct tree* nctemp5285= p;
struct nctempchar1 *nctemp5289;
static struct nctempchar1 nctemp5290 = {{ 3}, (char*)" *\0"};
nctemp5289=&nctemp5290;
nctempchar1* nctemp5287= nctemp5289;
int nctemp5291=CodeEs(nctemp5285,nctemp5287);
struct tree* nctemp5293= p;
nctempchar1* nctemp5295= pointer;
int nctemp5298=CodeEs(nctemp5293,nctemp5295);
struct tree* nctemp5300= p;
struct nctempchar1 *nctemp5304;
static struct nctempchar1 nctemp5305 = {{ 4}, (char*)";\n\0"};
nctemp5304=&nctemp5305;
nctempchar1* nctemp5302= nctemp5304;
int nctemp5306=CodeEs(nctemp5300,nctemp5302);
struct tree* nctemp5308= p;
nctempchar1* nctemp5310= pointer;
int nctemp5313=CodeEs(nctemp5308,nctemp5310);
struct tree* nctemp5315= p;
struct nctempchar1 *nctemp5319;
static struct nctempchar1 nctemp5320 = {{ 2}, (char*)"=\0"};
nctemp5319=&nctemp5320;
nctempchar1* nctemp5317= nctemp5319;
int nctemp5321=CodeEs(nctemp5315,nctemp5317);
struct tree* nctemp5323= p;
struct nctempchar1 *nctemp5327;
static struct nctempchar1 nctemp5328 = {{ 2}, (char*)"(\0"};
nctemp5327=&nctemp5328;
nctempchar1* nctemp5325= nctemp5327;
int nctemp5329=CodeEs(nctemp5323,nctemp5325);
struct tree* nctemp5331= p;
struct nctempchar1 *nctemp5335;
static struct nctempchar1 nctemp5336 = {{ 14}, (char*)"struct nctemp\0"};
nctemp5335=&nctemp5336;
nctempchar1* nctemp5333= nctemp5335;
int nctemp5337=CodeEs(nctemp5331,nctemp5333);
struct tree* nctemp5339= p;
nctempchar1* nctemp5341= type;
int nctemp5344=CodeEs(nctemp5339,nctemp5341);
int nctemp5346= rank;
int nctemp5348=CodeEd(nctemp5346);
struct tree* nctemp5350= p;
struct nctempchar1 *nctemp5354;
static struct nctempchar1 nctemp5355 = {{ 3}, (char*)"*)\0"};
nctemp5354=&nctemp5355;
nctempchar1* nctemp5352= nctemp5354;
int nctemp5356=CodeEs(nctemp5350,nctemp5352);
struct tree* nctemp5358= p;
struct nctempchar1 *nctemp5362;
static struct nctempchar1 nctemp5363 = {{ 11}, (char*)"RunMalloc(\0"};
nctemp5362=&nctemp5363;
nctempchar1* nctemp5360= nctemp5362;
int nctemp5364=CodeEs(nctemp5358,nctemp5360);
struct tree* nctemp5366= p;
struct nctempchar1 *nctemp5370;
static struct nctempchar1 nctemp5371 = {{ 21}, (char*)"sizeof(struct nctemp\0"};
nctemp5370=&nctemp5371;
nctempchar1* nctemp5368= nctemp5370;
int nctemp5372=CodeEs(nctemp5366,nctemp5368);
struct tree* nctemp5374= p;
nctempchar1* nctemp5376= type;
int nctemp5379=CodeEs(nctemp5374,nctemp5376);
int nctemp5381= rank;
int nctemp5383=CodeEd(nctemp5381);
struct tree* nctemp5385= p;
struct nctempchar1 *nctemp5389;
static struct nctempchar1 nctemp5390 = {{ 6}, (char*)"));\n\0"};
nctemp5389=&nctemp5390;
nctempchar1* nctemp5387= nctemp5389;
int nctemp5391=CodeEs(nctemp5385,nctemp5387);
i =0;
p =sp;
int nctemp5400 = (p !=0);
int nctemp5404=nctemp5400;
while(nctemp5404)
{{
struct tree* nctemp5410= sp;
nctempchar1* nctemp5412=CodeExpr(nctemp5410);
dim=nctemp5412;
struct tree* nctemp5414= sp;
nctempchar1* nctemp5416= pointer;
int nctemp5419=CodeEs(nctemp5414,nctemp5416);
struct tree* nctemp5421= sp;
struct nctempchar1 *nctemp5425;
static struct nctempchar1 nctemp5426 = {{ 4}, (char*)"->d\0"};
nctemp5425=&nctemp5426;
nctempchar1* nctemp5423= nctemp5425;
int nctemp5427=CodeEs(nctemp5421,nctemp5423);
struct tree* nctemp5429= sp;
struct nctempchar1 *nctemp5433;
static struct nctempchar1 nctemp5434 = {{ 2}, (char*)"[\0"};
nctemp5433=&nctemp5434;
nctempchar1* nctemp5431= nctemp5433;
int nctemp5435=CodeEs(nctemp5429,nctemp5431);
int nctemp5437= i;
int nctemp5439=CodeEd(nctemp5437);
struct tree* nctemp5441= sp;
struct nctempchar1 *nctemp5445;
static struct nctempchar1 nctemp5446 = {{ 3}, (char*)"]=\0"};
nctemp5445=&nctemp5446;
nctempchar1* nctemp5443= nctemp5445;
int nctemp5447=CodeEs(nctemp5441,nctemp5443);
struct tree* nctemp5449= sp;
nctempchar1* nctemp5451= dim;
int nctemp5454=CodeEs(nctemp5449,nctemp5451);
struct tree* nctemp5456= sp;
struct nctempchar1 *nctemp5460;
static struct nctempchar1 nctemp5461 = {{ 4}, (char*)";\n\0"};
nctemp5460=&nctemp5461;
nctempchar1* nctemp5458= nctemp5460;
int nctemp5462=CodeEs(nctemp5456,nctemp5458);
int nctemp5471 = i + 1;
i =nctemp5471;
struct tree* nctemp5476= p;
struct tree* nctemp5478=PtreeMvsister(nctemp5476);
p =nctemp5478;
}
int nctemp5479 = (p !=0);
nctemp5404=nctemp5479;}struct tree* nctemp5484= sp;
nctempchar1* nctemp5486= pointer;
int nctemp5489=CodeEs(nctemp5484,nctemp5486);
struct tree* nctemp5491= sp;
struct nctempchar1 *nctemp5495;
static struct nctempchar1 nctemp5496 = {{ 4}, (char*)"->a\0"};
nctemp5495=&nctemp5496;
nctempchar1* nctemp5493= nctemp5495;
int nctemp5497=CodeEs(nctemp5491,nctemp5493);
struct tree* nctemp5499= sp;
struct nctempchar1 *nctemp5503;
static struct nctempchar1 nctemp5504 = {{ 2}, (char*)"=\0"};
nctemp5503=&nctemp5504;
nctempchar1* nctemp5501= nctemp5503;
int nctemp5505=CodeEs(nctemp5499,nctemp5501);
struct tree* nctemp5507= sp;
struct nctempchar1 *nctemp5511;
static struct nctempchar1 nctemp5512 = {{ 9}, (char*)"(struct \0"};
nctemp5511=&nctemp5512;
nctempchar1* nctemp5509= nctemp5511;
int nctemp5513=CodeEs(nctemp5507,nctemp5509);
struct tree* nctemp5515= sp;
nctempchar1* nctemp5517= type;
int nctemp5520=CodeEs(nctemp5515,nctemp5517);
struct tree* nctemp5522= sp;
struct nctempchar1 *nctemp5526;
static struct nctempchar1 nctemp5527 = {{ 3}, (char*)"*)\0"};
nctemp5526=&nctemp5527;
nctempchar1* nctemp5524= nctemp5526;
int nctemp5528=CodeEs(nctemp5522,nctemp5524);
struct tree* nctemp5530= sp;
struct nctempchar1 *nctemp5534;
static struct nctempchar1 nctemp5535 = {{ 18}, (char*)"RunMalloc(sizeof(\0"};
nctemp5534=&nctemp5535;
nctempchar1* nctemp5532= nctemp5534;
int nctemp5536=CodeEs(nctemp5530,nctemp5532);
struct tree* nctemp5538= sp;
struct nctempchar1 *nctemp5542;
static struct nctempchar1 nctemp5543 = {{ 8}, (char*)"struct \0"};
nctemp5542=&nctemp5543;
nctempchar1* nctemp5540= nctemp5542;
int nctemp5544=CodeEs(nctemp5538,nctemp5540);
struct tree* nctemp5546= sp;
nctempchar1* nctemp5548= type;
int nctemp5551=CodeEs(nctemp5546,nctemp5548);
struct tree* nctemp5553= sp;
struct nctempchar1 *nctemp5557;
static struct nctempchar1 nctemp5558 = {{ 2}, (char*)")\0"};
nctemp5557=&nctemp5558;
nctempchar1* nctemp5555= nctemp5557;
int nctemp5559=CodeEs(nctemp5553,nctemp5555);
struct tree* nctemp5561= sp;
struct nctempchar1 *nctemp5565;
static struct nctempchar1 nctemp5566 = {{ 2}, (char*)"*\0"};
nctemp5565=&nctemp5566;
nctempchar1* nctemp5563= nctemp5565;
int nctemp5567=CodeEs(nctemp5561,nctemp5563);
struct tree* nctemp5569= sp;
nctempchar1* nctemp5571= totdim;
int nctemp5574=CodeEs(nctemp5569,nctemp5571);
struct tree* nctemp5576= sp;
struct nctempchar1 *nctemp5580;
static struct nctempchar1 nctemp5581 = {{ 5}, (char*)");\n\0"};
nctemp5580=&nctemp5581;
nctempchar1* nctemp5578= nctemp5580;
int nctemp5582=CodeEs(nctemp5576,nctemp5578);
}
nctempchar1* nctemp5589= structflag;
struct nctempchar1 *nctemp5594;
static struct nctempchar1 nctemp5595 = {{ 7}, (char*)"struct\0"};
nctemp5594=&nctemp5595;
nctempchar1* nctemp5592= nctemp5594;
int nctemp5596=LibeStrcmp(nctemp5589,nctemp5592);
int nctemp5586 = (nctemp5596 ==0);
nctempchar1* nctemp5602= arrayflag;
struct nctempchar1 *nctemp5607;
static struct nctempchar1 nctemp5608 = {{ 6}, (char*)"array\0"};
nctemp5607=&nctemp5608;
nctempchar1* nctemp5605= nctemp5607;
int nctemp5609=LibeStrcmp(nctemp5602,nctemp5605);
int nctemp5599 = (nctemp5609 ==1);
int nctemp5583 = (nctemp5586 && nctemp5599);
if(nctemp5583)
{
int nctemp5612= 4;
int nctemp5614=LibeFlush(nctemp5612);
struct tree* nctemp5616= sp;
struct nctempchar1 *nctemp5620;
static struct nctempchar1 nctemp5621 = {{ 7}, (char*)"nctemp\0"};
nctemp5620=&nctemp5621;
nctempchar1* nctemp5618= nctemp5620;
int nctemp5622=CodeEs(nctemp5616,nctemp5618);
struct tree* nctemp5624= sp;
nctempchar1* nctemp5626= type;
int nctemp5629=CodeEs(nctemp5624,nctemp5626);
int nctemp5631= rank;
int nctemp5633=CodeEd(nctemp5631);
struct tree* nctemp5635= sp;
struct nctempchar1 *nctemp5639;
static struct nctempchar1 nctemp5640 = {{ 3}, (char*)" *\0"};
nctemp5639=&nctemp5640;
nctempchar1* nctemp5637= nctemp5639;
int nctemp5641=CodeEs(nctemp5635,nctemp5637);
struct tree* nctemp5643= sp;
nctempchar1* nctemp5645= pointer;
int nctemp5648=CodeEs(nctemp5643,nctemp5645);
struct tree* nctemp5650= sp;
struct nctempchar1 *nctemp5654;
static struct nctempchar1 nctemp5655 = {{ 4}, (char*)";\n\0"};
nctemp5654=&nctemp5655;
nctempchar1* nctemp5652= nctemp5654;
int nctemp5656=CodeEs(nctemp5650,nctemp5652);
p =top;
i =0;
struct tree* nctemp5666= p;
nctempchar1* nctemp5668= pointer;
int nctemp5671=CodeEs(nctemp5666,nctemp5668);
struct tree* nctemp5673= p;
struct nctempchar1 *nctemp5677;
static struct nctempchar1 nctemp5678 = {{ 2}, (char*)"=\0"};
nctemp5677=&nctemp5678;
nctempchar1* nctemp5675= nctemp5677;
int nctemp5679=CodeEs(nctemp5673,nctemp5675);
struct tree* nctemp5681= p;
struct nctempchar1 *nctemp5685;
static struct nctempchar1 nctemp5686 = {{ 2}, (char*)"(\0"};
nctemp5685=&nctemp5686;
nctempchar1* nctemp5683= nctemp5685;
int nctemp5687=CodeEs(nctemp5681,nctemp5683);
struct tree* nctemp5689= p;
struct nctempchar1 *nctemp5693;
static struct nctempchar1 nctemp5694 = {{ 7}, (char*)"nctemp\0"};
nctemp5693=&nctemp5694;
nctempchar1* nctemp5691= nctemp5693;
int nctemp5695=CodeEs(nctemp5689,nctemp5691);
struct tree* nctemp5697= p;
nctempchar1* nctemp5699= type;
int nctemp5702=CodeEs(nctemp5697,nctemp5699);
int nctemp5704= rank;
int nctemp5706=CodeEd(nctemp5704);
struct tree* nctemp5708= p;
struct nctempchar1 *nctemp5712;
static struct nctempchar1 nctemp5713 = {{ 3}, (char*)"*)\0"};
nctemp5712=&nctemp5713;
nctempchar1* nctemp5710= nctemp5712;
int nctemp5714=CodeEs(nctemp5708,nctemp5710);
struct tree* nctemp5716= p;
struct nctempchar1 *nctemp5720;
static struct nctempchar1 nctemp5721 = {{ 11}, (char*)"RunMalloc(\0"};
nctemp5720=&nctemp5721;
nctempchar1* nctemp5718= nctemp5720;
int nctemp5722=CodeEs(nctemp5716,nctemp5718);
struct tree* nctemp5724= p;
struct nctempchar1 *nctemp5728;
static struct nctempchar1 nctemp5729 = {{ 14}, (char*)"sizeof(nctemp\0"};
nctemp5728=&nctemp5729;
nctempchar1* nctemp5726= nctemp5728;
int nctemp5730=CodeEs(nctemp5724,nctemp5726);
struct tree* nctemp5732= p;
nctempchar1* nctemp5734= type;
int nctemp5737=CodeEs(nctemp5732,nctemp5734);
int nctemp5739= rank;
int nctemp5741=CodeEd(nctemp5739);
struct tree* nctemp5743= p;
struct nctempchar1 *nctemp5747;
static struct nctempchar1 nctemp5748 = {{ 6}, (char*)"));\n\0"};
nctemp5747=&nctemp5748;
nctempchar1* nctemp5745= nctemp5747;
int nctemp5749=CodeEs(nctemp5743,nctemp5745);
int nctemp5750 = (p !=0);
int nctemp5754=nctemp5750;
while(nctemp5754)
{{
struct tree* nctemp5760= p;
nctempchar1* nctemp5762=CodeExpr(nctemp5760);
dim=nctemp5762;
struct tree* nctemp5764= p;
nctempchar1* nctemp5766= pointer;
int nctemp5769=CodeEs(nctemp5764,nctemp5766);
struct tree* nctemp5771= p;
struct nctempchar1 *nctemp5775;
static struct nctempchar1 nctemp5776 = {{ 4}, (char*)"->d\0"};
nctemp5775=&nctemp5776;
nctempchar1* nctemp5773= nctemp5775;
int nctemp5777=CodeEs(nctemp5771,nctemp5773);
struct tree* nctemp5779= p;
struct nctempchar1 *nctemp5783;
static struct nctempchar1 nctemp5784 = {{ 2}, (char*)"[\0"};
nctemp5783=&nctemp5784;
nctempchar1* nctemp5781= nctemp5783;
int nctemp5785=CodeEs(nctemp5779,nctemp5781);
int nctemp5787= i;
int nctemp5789=CodeEd(nctemp5787);
struct tree* nctemp5791= p;
struct nctempchar1 *nctemp5795;
static struct nctempchar1 nctemp5796 = {{ 3}, (char*)"]=\0"};
nctemp5795=&nctemp5796;
nctempchar1* nctemp5793= nctemp5795;
int nctemp5797=CodeEs(nctemp5791,nctemp5793);
struct tree* nctemp5799= p;
nctempchar1* nctemp5801= dim;
int nctemp5804=CodeEs(nctemp5799,nctemp5801);
struct tree* nctemp5806= p;
struct nctempchar1 *nctemp5810;
static struct nctempchar1 nctemp5811 = {{ 4}, (char*)";\n\0"};
nctemp5810=&nctemp5811;
nctempchar1* nctemp5808= nctemp5810;
int nctemp5812=CodeEs(nctemp5806,nctemp5808);
int nctemp5821 = i + 1;
i =nctemp5821;
struct tree* nctemp5826= p;
struct tree* nctemp5828=PtreeMvsister(nctemp5826);
p =nctemp5828;
}
int nctemp5829 = (p !=0);
nctemp5754=nctemp5829;}p =top;
struct tree* nctemp5838= p;
nctempchar1* nctemp5840= pointer;
int nctemp5843=CodeEs(nctemp5838,nctemp5840);
struct tree* nctemp5845= p;
struct nctempchar1 *nctemp5849;
static struct nctempchar1 nctemp5850 = {{ 4}, (char*)"->a\0"};
nctemp5849=&nctemp5850;
nctempchar1* nctemp5847= nctemp5849;
int nctemp5851=CodeEs(nctemp5845,nctemp5847);
struct tree* nctemp5853= p;
struct nctempchar1 *nctemp5857;
static struct nctempchar1 nctemp5858 = {{ 3}, (char*)"=(\0"};
nctemp5857=&nctemp5858;
nctempchar1* nctemp5855= nctemp5857;
int nctemp5859=CodeEs(nctemp5853,nctemp5855);
struct tree* nctemp5861= p;
nctempchar1* nctemp5863= type;
int nctemp5866=CodeEs(nctemp5861,nctemp5863);
struct tree* nctemp5868= p;
struct nctempchar1 *nctemp5872;
static struct nctempchar1 nctemp5873 = {{ 4}, (char*)" *)\0"};
nctemp5872=&nctemp5873;
nctempchar1* nctemp5870= nctemp5872;
int nctemp5874=CodeEs(nctemp5868,nctemp5870);
struct tree* nctemp5876= p;
struct nctempchar1 *nctemp5880;
static struct nctempchar1 nctemp5881 = {{ 18}, (char*)"RunMalloc(sizeof(\0"};
nctemp5880=&nctemp5881;
nctempchar1* nctemp5878= nctemp5880;
int nctemp5882=CodeEs(nctemp5876,nctemp5878);
struct tree* nctemp5884= p;
nctempchar1* nctemp5886= type;
int nctemp5889=CodeEs(nctemp5884,nctemp5886);
struct tree* nctemp5891= p;
struct nctempchar1 *nctemp5895;
static struct nctempchar1 nctemp5896 = {{ 2}, (char*)")\0"};
nctemp5895=&nctemp5896;
nctempchar1* nctemp5893= nctemp5895;
int nctemp5897=CodeEs(nctemp5891,nctemp5893);
struct tree* nctemp5899= p;
struct nctempchar1 *nctemp5903;
static struct nctempchar1 nctemp5904 = {{ 2}, (char*)"*\0"};
nctemp5903=&nctemp5904;
nctempchar1* nctemp5901= nctemp5903;
int nctemp5905=CodeEs(nctemp5899,nctemp5901);
struct tree* nctemp5907= p;
nctempchar1* nctemp5909= totdim;
int nctemp5912=CodeEs(nctemp5907,nctemp5909);
struct tree* nctemp5914= p;
struct nctempchar1 *nctemp5918;
static struct nctempchar1 nctemp5919 = {{ 5}, (char*)");\n\0"};
nctemp5918=&nctemp5919;
nctempchar1* nctemp5916= nctemp5918;
int nctemp5920=CodeEs(nctemp5914,nctemp5916);
}
return pointer;
}
nctempchar1 * CodeDelete (struct tree* p)
{
nctempchar1 *tmp;
struct tree* nctemp5927= p;
struct tree* nctemp5929=PtreeMvchild(nctemp5927);
p =nctemp5929;
struct tree* nctemp5934= p;
struct tree* nctemp5936=PtreeMvchild(nctemp5934);
p =nctemp5936;
struct tree* nctemp5942= p;
nctempchar1* nctemp5944=CodeBinexpr(nctemp5942);
tmp=nctemp5944;
struct tree* nctemp5948= p;
nctempchar1* nctemp5950=PtreeGetref(nctemp5948);
nctempchar1* nctemp5946= nctemp5950;
struct nctempchar1 *nctemp5953;
static struct nctempchar1 nctemp5954 = {{ 5}, (char*)"aref\0"};
nctemp5953=&nctemp5954;
nctempchar1* nctemp5951= nctemp5953;
int nctemp5955=LibeStrcmp(nctemp5946,nctemp5951);
if(nctemp5955)
{
struct tree* nctemp5957= p;
struct nctempchar1 *nctemp5961;
static struct nctempchar1 nctemp5962 = {{ 9}, (char*)"RunFree(\0"};
nctemp5961=&nctemp5962;
nctempchar1* nctemp5959= nctemp5961;
int nctemp5963=CodeEs(nctemp5957,nctemp5959);
struct tree* nctemp5965= p;
nctempchar1* nctemp5967= tmp;
int nctemp5970=CodeEs(nctemp5965,nctemp5967);
struct tree* nctemp5972= p;
struct nctempchar1 *nctemp5976;
static struct nctempchar1 nctemp5977 = {{ 8}, (char*)"->a);\n\0"};
nctemp5976=&nctemp5977;
nctempchar1* nctemp5974= nctemp5976;
int nctemp5978=CodeEs(nctemp5972,nctemp5974);
struct tree* nctemp5980= p;
struct nctempchar1 *nctemp5984;
static struct nctempchar1 nctemp5985 = {{ 9}, (char*)"RunFree(\0"};
nctemp5984=&nctemp5985;
nctempchar1* nctemp5982= nctemp5984;
int nctemp5986=CodeEs(nctemp5980,nctemp5982);
struct tree* nctemp5988= p;
nctempchar1* nctemp5990= tmp;
int nctemp5993=CodeEs(nctemp5988,nctemp5990);
struct tree* nctemp5995= p;
struct nctempchar1 *nctemp5999;
static struct nctempchar1 nctemp6000 = {{ 5}, (char*)");\n\0"};
nctemp5999=&nctemp6000;
nctempchar1* nctemp5997= nctemp5999;
int nctemp6001=CodeEs(nctemp5995,nctemp5997);
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
nctempchar1* nctemp6009=CodeMktemp();
tempr=nctemp6009;
struct tree* nctemp6014= p;
struct tree* nctemp6016=PtreeMvchild(nctemp6014);
np =nctemp6016;
struct tree* nctemp6022= np;
nctempchar1* nctemp6024=CodeExpr(nctemp6022);
temp=nctemp6024;
struct tree* nctemp6029= np;
struct tree* nctemp6031=PtreeMvsister(nctemp6029);
sp =nctemp6031;
struct tree* nctemp6037= sp;
nctempchar1* nctemp6039=CodeExpr(nctemp6037);
index=nctemp6039;
struct tree* nctemp6041= p;
struct tree* nctemp6045= p;
nctempchar1* nctemp6047=PtreeGetype(nctemp6045);
nctempchar1* nctemp6043= nctemp6047;
int nctemp6048=CodeEs(nctemp6041,nctemp6043);
struct tree* nctemp6050= p;
struct nctempchar1 *nctemp6054;
static struct nctempchar1 nctemp6055 = {{ 2}, (char*)" \0"};
nctemp6054=&nctemp6055;
nctempchar1* nctemp6052= nctemp6054;
int nctemp6056=CodeEs(nctemp6050,nctemp6052);
struct tree* nctemp6058= p;
nctempchar1* nctemp6060= tempr;
int nctemp6063=CodeEs(nctemp6058,nctemp6060);
struct tree* nctemp6065= p;
struct nctempchar1 *nctemp6069;
static struct nctempchar1 nctemp6070 = {{ 2}, (char*)"=\0"};
nctemp6069=&nctemp6070;
nctempchar1* nctemp6067= nctemp6069;
int nctemp6071=CodeEs(nctemp6065,nctemp6067);
struct tree* nctemp6073= p;
nctempchar1* nctemp6075= temp;
int nctemp6078=CodeEs(nctemp6073,nctemp6075);
struct tree* nctemp6080= p;
struct nctempchar1 *nctemp6084;
static struct nctempchar1 nctemp6085 = {{ 4}, (char*)"->d\0"};
nctemp6084=&nctemp6085;
nctempchar1* nctemp6082= nctemp6084;
int nctemp6086=CodeEs(nctemp6080,nctemp6082);
struct tree* nctemp6088= p;
struct nctempchar1 *nctemp6092;
static struct nctempchar1 nctemp6093 = {{ 2}, (char*)"[\0"};
nctemp6092=&nctemp6093;
nctempchar1* nctemp6090= nctemp6092;
int nctemp6094=CodeEs(nctemp6088,nctemp6090);
struct tree* nctemp6096= p;
nctempchar1* nctemp6098= index;
int nctemp6101=CodeEs(nctemp6096,nctemp6098);
struct tree* nctemp6103= p;
struct nctempchar1 *nctemp6107;
static struct nctempchar1 nctemp6108 = {{ 3}, (char*)"];\0"};
nctemp6107=&nctemp6108;
nctempchar1* nctemp6105= nctemp6107;
int nctemp6109=CodeEs(nctemp6103,nctemp6105);
return tempr;
}
nctempchar1 * CodeCmplx (struct tree* p)
{
struct tree* np;
struct tree* sp;
nctempchar1 *q;
nctempchar1 *r;
nctempchar1 *tempr;
nctempchar1* nctemp6117=CodeMktemp();
tempr=nctemp6117;
struct tree* nctemp6122= p;
struct tree* nctemp6124=PtreeMvchild(nctemp6122);
np =nctemp6124;
struct tree* nctemp6129= np;
struct tree* nctemp6131=PtreeMvchild(nctemp6129);
np =nctemp6131;
struct tree* nctemp6137= np;
nctempchar1* nctemp6139=CodeExpr(nctemp6137);
q=nctemp6139;
struct tree* nctemp6144= np;
struct tree* nctemp6146=PtreeMvsister(nctemp6144);
sp =nctemp6146;
struct tree* nctemp6152= sp;
nctempchar1* nctemp6154=CodeExpr(nctemp6152);
r=nctemp6154;
struct tree* nctemp6156= p;
struct tree* nctemp6160= p;
nctempchar1* nctemp6162=PtreeGetype(nctemp6160);
nctempchar1* nctemp6158= nctemp6162;
int nctemp6163=CodeEs(nctemp6156,nctemp6158);
struct tree* nctemp6165= p;
struct nctempchar1 *nctemp6169;
static struct nctempchar1 nctemp6170 = {{ 2}, (char*)" \0"};
nctemp6169=&nctemp6170;
nctempchar1* nctemp6167= nctemp6169;
int nctemp6171=CodeEs(nctemp6165,nctemp6167);
struct tree* nctemp6173= p;
nctempchar1* nctemp6175= tempr;
int nctemp6178=CodeEs(nctemp6173,nctemp6175);
struct tree* nctemp6180= p;
struct nctempchar1 *nctemp6184;
static struct nctempchar1 nctemp6185 = {{ 3}, (char*)".r\0"};
nctemp6184=&nctemp6185;
nctempchar1* nctemp6182= nctemp6184;
int nctemp6186=CodeEs(nctemp6180,nctemp6182);
struct tree* nctemp6188= p;
struct nctempchar1 *nctemp6192;
static struct nctempchar1 nctemp6193 = {{ 3}, (char*)" =\0"};
nctemp6192=&nctemp6193;
nctempchar1* nctemp6190= nctemp6192;
int nctemp6194=CodeEs(nctemp6188,nctemp6190);
struct tree* nctemp6196= p;
nctempchar1* nctemp6198= q;
int nctemp6201=CodeEs(nctemp6196,nctemp6198);
struct tree* nctemp6203= p;
struct nctempchar1 *nctemp6207;
static struct nctempchar1 nctemp6208 = {{ 2}, (char*)";\0"};
nctemp6207=&nctemp6208;
nctempchar1* nctemp6205= nctemp6207;
int nctemp6209=CodeEs(nctemp6203,nctemp6205);
struct tree* nctemp6211= p;
struct tree* nctemp6215= p;
nctempchar1* nctemp6217=PtreeGetype(nctemp6215);
nctempchar1* nctemp6213= nctemp6217;
int nctemp6218=CodeEs(nctemp6211,nctemp6213);
struct tree* nctemp6220= p;
struct nctempchar1 *nctemp6224;
static struct nctempchar1 nctemp6225 = {{ 2}, (char*)" \0"};
nctemp6224=&nctemp6225;
nctempchar1* nctemp6222= nctemp6224;
int nctemp6226=CodeEs(nctemp6220,nctemp6222);
struct tree* nctemp6228= p;
nctempchar1* nctemp6230= tempr;
int nctemp6233=CodeEs(nctemp6228,nctemp6230);
struct tree* nctemp6235= p;
struct nctempchar1 *nctemp6239;
static struct nctempchar1 nctemp6240 = {{ 3}, (char*)".i\0"};
nctemp6239=&nctemp6240;
nctempchar1* nctemp6237= nctemp6239;
int nctemp6241=CodeEs(nctemp6235,nctemp6237);
struct tree* nctemp6243= p;
struct nctempchar1 *nctemp6247;
static struct nctempchar1 nctemp6248 = {{ 2}, (char*)"=\0"};
nctemp6247=&nctemp6248;
nctempchar1* nctemp6245= nctemp6247;
int nctemp6249=CodeEs(nctemp6243,nctemp6245);
struct tree* nctemp6251= p;
nctempchar1* nctemp6253= r;
int nctemp6256=CodeEs(nctemp6251,nctemp6253);
struct tree* nctemp6258= p;
struct nctempchar1 *nctemp6262;
static struct nctempchar1 nctemp6263 = {{ 2}, (char*)";\0"};
nctemp6262=&nctemp6263;
nctempchar1* nctemp6260= nctemp6262;
int nctemp6264=CodeEs(nctemp6258,nctemp6260);
return tempr;
}
nctempchar1 * CodeIm (struct tree* p)
{
struct tree* np;
nctempchar1 *q;
nctempchar1 *tempr;
nctempchar1* nctemp6272=CodeMktemp();
tempr=nctemp6272;
struct tree* nctemp6277= p;
struct tree* nctemp6279=PtreeMvchild(nctemp6277);
np =nctemp6279;
struct tree* nctemp6285= np;
nctempchar1* nctemp6287=CodeExpr(nctemp6285);
q=nctemp6287;
struct tree* nctemp6289= p;
struct tree* nctemp6293= p;
nctempchar1* nctemp6295=PtreeGetype(nctemp6293);
nctempchar1* nctemp6291= nctemp6295;
int nctemp6296=CodeEs(nctemp6289,nctemp6291);
struct tree* nctemp6298= p;
struct nctempchar1 *nctemp6302;
static struct nctempchar1 nctemp6303 = {{ 2}, (char*)" \0"};
nctemp6302=&nctemp6303;
nctempchar1* nctemp6300= nctemp6302;
int nctemp6304=CodeEs(nctemp6298,nctemp6300);
struct tree* nctemp6306= p;
nctempchar1* nctemp6308= tempr;
int nctemp6311=CodeEs(nctemp6306,nctemp6308);
struct tree* nctemp6313= p;
struct nctempchar1 *nctemp6317;
static struct nctempchar1 nctemp6318 = {{ 3}, (char*)" =\0"};
nctemp6317=&nctemp6318;
nctempchar1* nctemp6315= nctemp6317;
int nctemp6319=CodeEs(nctemp6313,nctemp6315);
struct tree* nctemp6321= p;
nctempchar1* nctemp6323= q;
int nctemp6326=CodeEs(nctemp6321,nctemp6323);
struct tree* nctemp6328= p;
struct nctempchar1 *nctemp6332;
static struct nctempchar1 nctemp6333 = {{ 5}, (char*)".i  \0"};
nctemp6332=&nctemp6333;
nctempchar1* nctemp6330= nctemp6332;
int nctemp6334=CodeEs(nctemp6328,nctemp6330);
struct tree* nctemp6336= p;
struct nctempchar1 *nctemp6340;
static struct nctempchar1 nctemp6341 = {{ 4}, (char*)";\n\0"};
nctemp6340=&nctemp6341;
nctempchar1* nctemp6338= nctemp6340;
int nctemp6342=CodeEs(nctemp6336,nctemp6338);
return tempr;
}
nctempchar1 * CodeRe (struct tree* p)
{
struct tree* np;
nctempchar1 *q;
nctempchar1 *tmp;
struct tree* nctemp6349= p;
struct tree* nctemp6351=PtreeMvchild(nctemp6349);
np =nctemp6351;
struct tree* nctemp6357= np;
nctempchar1* nctemp6359=CodeExpr(nctemp6357);
q=nctemp6359;
nctempchar1* nctemp6365=CodeMktemp();
tmp=nctemp6365;
struct tree* nctemp6367= p;
struct tree* nctemp6371= p;
nctempchar1* nctemp6373=PtreeGetype(nctemp6371);
nctempchar1* nctemp6369= nctemp6373;
int nctemp6374=CodeEs(nctemp6367,nctemp6369);
struct tree* nctemp6376= p;
struct nctempchar1 *nctemp6380;
static struct nctempchar1 nctemp6381 = {{ 2}, (char*)" \0"};
nctemp6380=&nctemp6381;
nctempchar1* nctemp6378= nctemp6380;
int nctemp6382=CodeEs(nctemp6376,nctemp6378);
struct tree* nctemp6384= p;
nctempchar1* nctemp6386= tmp;
int nctemp6389=CodeEs(nctemp6384,nctemp6386);
struct tree* nctemp6391= p;
struct nctempchar1 *nctemp6395;
static struct nctempchar1 nctemp6396 = {{ 3}, (char*)" =\0"};
nctemp6395=&nctemp6396;
nctempchar1* nctemp6393= nctemp6395;
int nctemp6397=CodeEs(nctemp6391,nctemp6393);
struct tree* nctemp6399= p;
nctempchar1* nctemp6401= q;
int nctemp6404=CodeEs(nctemp6399,nctemp6401);
struct tree* nctemp6406= p;
struct nctempchar1 *nctemp6410;
static struct nctempchar1 nctemp6411 = {{ 5}, (char*)".r  \0"};
nctemp6410=&nctemp6411;
nctempchar1* nctemp6408= nctemp6410;
int nctemp6412=CodeEs(nctemp6406,nctemp6408);
struct tree* nctemp6414= p;
struct nctempchar1 *nctemp6418;
static struct nctempchar1 nctemp6419 = {{ 4}, (char*)";\n\0"};
nctemp6418=&nctemp6419;
nctempchar1* nctemp6416= nctemp6418;
int nctemp6420=CodeEs(nctemp6414,nctemp6416);
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
struct tree* nctemp6433= p;
nctempchar1* nctemp6435=PtreeGetdef(nctemp6433);
nctempchar1* nctemp6431= nctemp6435;
struct symbol* nctemp6438=SymGetetp();
struct symbol* nctemp6436= nctemp6438;
struct symbol* nctemp6439=SymLookup(nctemp6431,nctemp6436);
tp =nctemp6439;
struct tree* nctemp6444= p;
struct tree* nctemp6446=PtreeMvchild(nctemp6444);
sp =nctemp6446;
int nctemp6447 = (sp !=0);
if(nctemp6447)
{
struct tree* nctemp6456= sp;
nctempchar1* nctemp6458=PtreeGetname(nctemp6456);
nctempchar1* nctemp6454= nctemp6458;
struct nctempchar1 *nctemp6461;
static struct nctempchar1 nctemp6462 = {{ 9}, (char*)"exprlist\0"};
nctemp6461=&nctemp6462;
nctempchar1* nctemp6459= nctemp6461;
int nctemp6463=LibeStrcmp(nctemp6454,nctemp6459);
int nctemp6451 = (nctemp6463 ==1);
if(nctemp6451)
{
struct tree* nctemp6469= sp;
struct tree* nctemp6471=PtreeMvchild(nctemp6469);
sp =nctemp6471;
}
}
int nctemp6472 = (sp !=0);
int nctemp6476=nctemp6472;
while(nctemp6476)
{{
nctempchar1* nctemp6482=CodeMktemp();
ntemp=nctemp6482;
struct tree* nctemp6484= sp;
nctempchar1* nctemp6486= ntemp;
int nctemp6489=PtreeSetempr(nctemp6484,nctemp6486);
struct tree* nctemp6495= sp;
nctempchar1* nctemp6497=CodeExpr(nctemp6495);
temp=nctemp6497;
struct tree* nctemp6503= sp;
nctempchar1* nctemp6505=PtreeGetref(nctemp6503);
nctempchar1* nctemp6501= nctemp6505;
struct nctempchar1 *nctemp6508;
static struct nctempchar1 nctemp6509 = {{ 5}, (char*)"aref\0"};
nctemp6508=&nctemp6509;
nctempchar1* nctemp6506= nctemp6508;
int nctemp6510=LibeStrcmp(nctemp6501,nctemp6506);
int nctemp6498 = (nctemp6510 ==1);
if(nctemp6498)
{
struct tree* nctemp6513= sp;
struct nctempchar1 *nctemp6517;
static struct nctempchar1 nctemp6518 = {{ 7}, (char*)"nctemp\0"};
nctemp6517=&nctemp6518;
nctempchar1* nctemp6515= nctemp6517;
int nctemp6519=CodeEs(nctemp6513,nctemp6515);
struct tree* nctemp6521= sp;
struct tree* nctemp6525= sp;
nctempchar1* nctemp6527=PtreeGetype(nctemp6525);
nctempchar1* nctemp6523= nctemp6527;
int nctemp6528=CodeEs(nctemp6521,nctemp6523);
struct tree* nctemp6532= sp;
int nctemp6534=PtreeGetrank(nctemp6532);
int nctemp6530= nctemp6534;
int nctemp6535=CodeEd(nctemp6530);
struct tree* nctemp6537= sp;
struct nctempchar1 *nctemp6541;
static struct nctempchar1 nctemp6542 = {{ 2}, (char*)"*\0"};
nctemp6541=&nctemp6542;
nctempchar1* nctemp6539= nctemp6541;
int nctemp6543=CodeEs(nctemp6537,nctemp6539);
}
else{
struct tree* nctemp6549= sp;
nctempchar1* nctemp6551=PtreeGetref(nctemp6549);
nctempchar1* nctemp6547= nctemp6551;
struct nctempchar1 *nctemp6554;
static struct nctempchar1 nctemp6555 = {{ 5}, (char*)"sref\0"};
nctemp6554=&nctemp6555;
nctempchar1* nctemp6552= nctemp6554;
int nctemp6556=LibeStrcmp(nctemp6547,nctemp6552);
int nctemp6544 = (nctemp6556 ==1);
if(nctemp6544)
{
struct tree* nctemp6559= sp;
struct nctempchar1 *nctemp6563;
static struct nctempchar1 nctemp6564 = {{ 8}, (char*)"struct \0"};
nctemp6563=&nctemp6564;
nctempchar1* nctemp6561= nctemp6563;
int nctemp6565=CodeEs(nctemp6559,nctemp6561);
struct tree* nctemp6567= sp;
struct tree* nctemp6571= sp;
nctempchar1* nctemp6573=PtreeGetype(nctemp6571);
nctempchar1* nctemp6569= nctemp6573;
int nctemp6574=CodeEs(nctemp6567,nctemp6569);
struct tree* nctemp6576= sp;
struct nctempchar1 *nctemp6580;
static struct nctempchar1 nctemp6581 = {{ 2}, (char*)"*\0"};
nctemp6580=&nctemp6581;
nctempchar1* nctemp6578= nctemp6580;
int nctemp6582=CodeEs(nctemp6576,nctemp6578);
}
else{
struct tree* nctemp6584= sp;
struct tree* nctemp6588= sp;
nctempchar1* nctemp6590=PtreeGetype(nctemp6588);
nctempchar1* nctemp6586= nctemp6590;
int nctemp6591=CodeEs(nctemp6584,nctemp6586);
}
}
struct tree* nctemp6593= sp;
struct nctempchar1 *nctemp6597;
static struct nctempchar1 nctemp6598 = {{ 2}, (char*)" \0"};
nctemp6597=&nctemp6598;
nctempchar1* nctemp6595= nctemp6597;
int nctemp6599=CodeEs(nctemp6593,nctemp6595);
struct tree* nctemp6601= sp;
nctempchar1* nctemp6603= ntemp;
int nctemp6606=CodeEs(nctemp6601,nctemp6603);
struct tree* nctemp6608= sp;
struct nctempchar1 *nctemp6612;
static struct nctempchar1 nctemp6613 = {{ 3}, (char*)"= \0"};
nctemp6612=&nctemp6613;
nctempchar1* nctemp6610= nctemp6612;
int nctemp6614=CodeEs(nctemp6608,nctemp6610);
struct tree* nctemp6616= sp;
nctempchar1* nctemp6618= temp;
int nctemp6621=CodeEs(nctemp6616,nctemp6618);
struct tree* nctemp6623= sp;
struct nctempchar1 *nctemp6627;
static struct nctempchar1 nctemp6628 = {{ 4}, (char*)";\n\0"};
nctemp6627=&nctemp6628;
nctempchar1* nctemp6625= nctemp6627;
int nctemp6629=CodeEs(nctemp6623,nctemp6625);
struct tree* nctemp6634= sp;
struct tree* nctemp6636=PtreeMvsister(nctemp6634);
sp =nctemp6636;
}
int nctemp6637 = (sp !=0);
nctemp6476=nctemp6637;}nctempchar1* nctemp6646=CodeMktemp();
ntemp=nctemp6646;
struct tree* nctemp6652= p;
nctempchar1* nctemp6654=PtreeGetref(nctemp6652);
nctempchar1* nctemp6650= nctemp6654;
struct nctempchar1 *nctemp6657;
static struct nctempchar1 nctemp6658 = {{ 5}, (char*)"aref\0"};
nctemp6657=&nctemp6658;
nctempchar1* nctemp6655= nctemp6657;
int nctemp6659=LibeStrcmp(nctemp6650,nctemp6655);
int nctemp6647 = (nctemp6659 ==1);
if(nctemp6647)
{
struct tree* nctemp6662= p;
struct nctempchar1 *nctemp6666;
static struct nctempchar1 nctemp6667 = {{ 7}, (char*)"nctemp\0"};
nctemp6666=&nctemp6667;
nctempchar1* nctemp6664= nctemp6666;
int nctemp6668=CodeEs(nctemp6662,nctemp6664);
struct tree* nctemp6670= p;
struct tree* nctemp6674= p;
nctempchar1* nctemp6676=PtreeGetype(nctemp6674);
nctempchar1* nctemp6672= nctemp6676;
int nctemp6677=CodeEs(nctemp6670,nctemp6672);
struct tree* nctemp6681= p;
int nctemp6683=PtreeGetrank(nctemp6681);
int nctemp6679= nctemp6683;
int nctemp6684=CodeEd(nctemp6679);
struct tree* nctemp6686= p;
struct nctempchar1 *nctemp6690;
static struct nctempchar1 nctemp6691 = {{ 2}, (char*)"*\0"};
nctemp6690=&nctemp6691;
nctempchar1* nctemp6688= nctemp6690;
int nctemp6692=CodeEs(nctemp6686,nctemp6688);
}
else{
struct tree* nctemp6698= p;
nctempchar1* nctemp6700=PtreeGetref(nctemp6698);
nctempchar1* nctemp6696= nctemp6700;
struct nctempchar1 *nctemp6703;
static struct nctempchar1 nctemp6704 = {{ 5}, (char*)"sref\0"};
nctemp6703=&nctemp6704;
nctempchar1* nctemp6701= nctemp6703;
int nctemp6705=LibeStrcmp(nctemp6696,nctemp6701);
int nctemp6693 = (nctemp6705 ==1);
if(nctemp6693)
{
struct tree* nctemp6708= p;
struct nctempchar1 *nctemp6712;
static struct nctempchar1 nctemp6713 = {{ 8}, (char*)"struct \0"};
nctemp6712=&nctemp6713;
nctempchar1* nctemp6710= nctemp6712;
int nctemp6714=CodeEs(nctemp6708,nctemp6710);
struct tree* nctemp6716= p;
struct tree* nctemp6720= p;
nctempchar1* nctemp6722=PtreeGetype(nctemp6720);
nctempchar1* nctemp6718= nctemp6722;
int nctemp6723=CodeEs(nctemp6716,nctemp6718);
struct tree* nctemp6725= p;
struct nctempchar1 *nctemp6729;
static struct nctempchar1 nctemp6730 = {{ 2}, (char*)"*\0"};
nctemp6729=&nctemp6730;
nctempchar1* nctemp6727= nctemp6729;
int nctemp6731=CodeEs(nctemp6725,nctemp6727);
}
else{
struct tree* nctemp6733= p;
struct tree* nctemp6737= p;
nctempchar1* nctemp6739=PtreeGetype(nctemp6737);
nctempchar1* nctemp6735= nctemp6739;
int nctemp6740=CodeEs(nctemp6733,nctemp6735);
}
}
struct tree* nctemp6742= p;
struct nctempchar1 *nctemp6746;
static struct nctempchar1 nctemp6747 = {{ 2}, (char*)" \0"};
nctemp6746=&nctemp6747;
nctempchar1* nctemp6744= nctemp6746;
int nctemp6748=CodeEs(nctemp6742,nctemp6744);
struct tree* nctemp6750= p;
nctempchar1* nctemp6752= ntemp;
int nctemp6755=CodeEs(nctemp6750,nctemp6752);
struct tree* nctemp6757= p;
struct nctempchar1 *nctemp6761;
static struct nctempchar1 nctemp6762 = {{ 2}, (char*)"=\0"};
nctemp6761=&nctemp6762;
nctempchar1* nctemp6759= nctemp6761;
int nctemp6763=CodeEs(nctemp6757,nctemp6759);
struct tree* nctemp6765= p;
struct symbol* nctemp6769= tp;
nctempchar1* nctemp6771=SymGetname(nctemp6769);
nctempchar1* nctemp6767= nctemp6771;
int nctemp6772=CodeEs(nctemp6765,nctemp6767);
struct tree* nctemp6774= p;
struct nctempchar1 *nctemp6778;
static struct nctempchar1 nctemp6779 = {{ 2}, (char*)"(\0"};
nctemp6778=&nctemp6779;
nctempchar1* nctemp6776= nctemp6778;
int nctemp6780=CodeEs(nctemp6774,nctemp6776);
struct tree* nctemp6785= p;
struct tree* nctemp6787=PtreeMvchild(nctemp6785);
sp =nctemp6787;
int nctemp6788 = (sp !=0);
if(nctemp6788)
{
struct tree* nctemp6796= sp;
struct tree* nctemp6798=PtreeMvchild(nctemp6796);
sp =nctemp6798;
}
int nctemp6799 = (sp !=0);
int nctemp6803=nctemp6799;
while(nctemp6803)
{{
struct tree* nctemp6805= p;
struct tree* nctemp6809= sp;
nctempchar1* nctemp6811=PtreeGetempr(nctemp6809);
nctempchar1* nctemp6807= nctemp6811;
int nctemp6812=CodeEs(nctemp6805,nctemp6807);
struct tree* nctemp6820= sp;
struct tree* nctemp6822=PtreeMvsister(nctemp6820);
sp =nctemp6822;
int nctemp6813 = (sp !=0);
if(nctemp6813)
{
struct tree* nctemp6825= p;
struct nctempchar1 *nctemp6829;
static struct nctempchar1 nctemp6830 = {{ 2}, (char*)",\0"};
nctemp6829=&nctemp6830;
nctempchar1* nctemp6827= nctemp6829;
int nctemp6831=CodeEs(nctemp6825,nctemp6827);
}
int nctemp6840 = noargs + 1;
noargs =nctemp6840;
}
int nctemp6841 = (sp !=0);
nctemp6803=nctemp6841;}struct tree* nctemp6846= p;
struct nctempchar1 *nctemp6850;
static struct nctempchar1 nctemp6851 = {{ 5}, (char*)");\n\0"};
nctemp6850=&nctemp6851;
nctempchar1* nctemp6848= nctemp6850;
int nctemp6852=CodeEs(nctemp6846,nctemp6848);
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
nctempchar1* nctemp6860=CodeMktemp();
pointer=nctemp6860;
nctempchar1* nctemp6866=CodeMktemp();
descr=nctemp6866;
struct tree* nctemp6872= p;
nctempchar1* nctemp6874=PtreeGetype(nctemp6872);
type=nctemp6874;
struct tree* nctemp6880= p;
nctempchar1* nctemp6882=PtreeGetname(nctemp6880);
nctempchar1* nctemp6878= nctemp6882;
struct nctempchar1 *nctemp6885;
static struct nctempchar1 nctemp6886 = {{ 5}, (char*)"cast\0"};
nctemp6885=&nctemp6886;
nctempchar1* nctemp6883= nctemp6885;
int nctemp6887=LibeStrcmp(nctemp6878,nctemp6883);
int nctemp6875 = (nctemp6887 ==1);
if(nctemp6875)
{
struct tree* nctemp6893= p;
struct tree* nctemp6895=PtreeMvchild(nctemp6893);
np =nctemp6895;
struct tree* nctemp6900= np;
struct tree* nctemp6902=PtreeMvsister(nctemp6900);
sp =nctemp6902;
struct tree* nctemp6908= sp;
nctempchar1* nctemp6910=CodeExpr(nctemp6908);
expr=nctemp6910;
struct tree* nctemp6916= np;
nctempchar1* nctemp6918=PtreeGetref(nctemp6916);
nctempchar1* nctemp6914= nctemp6918;
struct nctempchar1 *nctemp6921;
static struct nctempchar1 nctemp6922 = {{ 5}, (char*)"sref\0"};
nctemp6921=&nctemp6922;
nctempchar1* nctemp6919= nctemp6921;
int nctemp6923=LibeStrcmp(nctemp6914,nctemp6919);
int nctemp6911 = (nctemp6923 ==1);
if(nctemp6911)
{
nctempchar1* nctemp6930=CodeMktemp();
tmp=nctemp6930;
struct tree* nctemp6932= p;
nctempchar1* nctemp6934= type;
int nctemp6937=CodeEs(nctemp6932,nctemp6934);
struct tree* nctemp6939= p;
struct nctempchar1 *nctemp6943;
static struct nctempchar1 nctemp6944 = {{ 2}, (char*)" \0"};
nctemp6943=&nctemp6944;
nctempchar1* nctemp6941= nctemp6943;
int nctemp6945=CodeEs(nctemp6939,nctemp6941);
struct tree* nctemp6947= p;
nctempchar1* nctemp6949= tmp;
int nctemp6952=CodeEs(nctemp6947,nctemp6949);
struct tree* nctemp6954= p;
struct nctempchar1 *nctemp6958;
static struct nctempchar1 nctemp6959 = {{ 2}, (char*)"=\0"};
nctemp6958=&nctemp6959;
nctempchar1* nctemp6956= nctemp6958;
int nctemp6960=CodeEs(nctemp6954,nctemp6956);
struct tree* nctemp6962= p;
struct nctempchar1 *nctemp6966;
static struct nctempchar1 nctemp6967 = {{ 9}, (char*)"(struct \0"};
nctemp6966=&nctemp6967;
nctempchar1* nctemp6964= nctemp6966;
int nctemp6968=CodeEs(nctemp6962,nctemp6964);
struct tree* nctemp6970= p;
struct tree* nctemp6974= np;
nctempchar1* nctemp6976=PtreeGetype(nctemp6974);
nctempchar1* nctemp6972= nctemp6976;
int nctemp6977=CodeEs(nctemp6970,nctemp6972);
struct tree* nctemp6979= p;
struct nctempchar1 *nctemp6983;
static struct nctempchar1 nctemp6984 = {{ 4}, (char*)"*)(\0"};
nctemp6983=&nctemp6984;
nctempchar1* nctemp6981= nctemp6983;
int nctemp6985=CodeEs(nctemp6979,nctemp6981);
struct tree* nctemp6987= p;
nctempchar1* nctemp6989= expr;
int nctemp6992=CodeEs(nctemp6987,nctemp6989);
struct tree* nctemp6994= p;
struct nctempchar1 *nctemp6998;
static struct nctempchar1 nctemp6999 = {{ 5}, (char*)");\n\0"};
nctemp6998=&nctemp6999;
nctempchar1* nctemp6996= nctemp6998;
int nctemp7000=CodeEs(nctemp6994,nctemp6996);
}
else{
struct tree* nctemp7006= np;
nctempchar1* nctemp7008=PtreeGetref(nctemp7006);
nctempchar1* nctemp7004= nctemp7008;
struct nctempchar1 *nctemp7011;
static struct nctempchar1 nctemp7012 = {{ 5}, (char*)"aref\0"};
nctemp7011=&nctemp7012;
nctempchar1* nctemp7009= nctemp7011;
int nctemp7013=LibeStrcmp(nctemp7004,nctemp7009);
int nctemp7001 = (nctemp7013 ==1);
if(nctemp7001)
{
struct tree* nctemp7019= np;
struct tree* nctemp7021=PtreeMvchild(nctemp7019);
np =nctemp7021;
struct tree* nctemp7026= np;
struct tree* nctemp7028=PtreeMvchild(nctemp7026);
np =nctemp7028;
struct tree* nctemp7033= np;
struct tree* nctemp7035=PtreeMvchild(nctemp7033);
np =nctemp7035;
struct tree* nctemp7040= np;
struct tree* nctemp7042=PtreeMvchild(nctemp7040);
np =nctemp7042;
tp =np;
rank =1;
struct tree* nctemp7058= np;
struct tree* nctemp7060=PtreeMvsister(nctemp7058);
np =nctemp7060;
int nctemp7051 = (np !=0);
int nctemp7062=nctemp7051;
while(nctemp7062)
{{
int nctemp7071 = rank + 1;
rank =nctemp7071;
}
struct tree* nctemp7079= np;
struct tree* nctemp7081=PtreeMvsister(nctemp7079);
np =nctemp7081;
int nctemp7072 = (np !=0);
nctemp7062=nctemp7072;}int nctemp7083 = (rank > 4);
if(nctemp7083)
{
struct nctempchar1 *nctemp7090;
static struct nctempchar1 nctemp7091 = {{ 29}, (char*)"Array dimension is too large\0"};
nctemp7090=&nctemp7091;
nctempchar1* nctemp7088= nctemp7090;
int nctemp7092=CodeError(nctemp7088);
}
p =tp;
struct tree* nctemp7098= p;
struct nctempchar1 *nctemp7102;
static struct nctempchar1 nctemp7103 = {{ 7}, (char*)"nctemp\0"};
nctemp7102=&nctemp7103;
nctempchar1* nctemp7100= nctemp7102;
int nctemp7104=CodeEs(nctemp7098,nctemp7100);
struct tree* nctemp7106= p;
nctempchar1* nctemp7108= type;
int nctemp7111=CodeEs(nctemp7106,nctemp7108);
int nctemp7113= rank;
int nctemp7115=CodeEd(nctemp7113);
struct tree* nctemp7117= p;
struct nctempchar1 *nctemp7121;
static struct nctempchar1 nctemp7122 = {{ 2}, (char*)" \0"};
nctemp7121=&nctemp7122;
nctempchar1* nctemp7119= nctemp7121;
int nctemp7123=CodeEs(nctemp7117,nctemp7119);
struct tree* nctemp7125= sp;
nctempchar1* nctemp7127= descr;
int nctemp7130=CodeEs(nctemp7125,nctemp7127);
struct tree* nctemp7132= sp;
struct nctempchar1 *nctemp7136;
static struct nctempchar1 nctemp7137 = {{ 4}, (char*)";\n\0"};
nctemp7136=&nctemp7137;
nctempchar1* nctemp7134= nctemp7136;
int nctemp7138=CodeEs(nctemp7132,nctemp7134);
struct tree* nctemp7140= p;
struct nctempchar1 *nctemp7144;
static struct nctempchar1 nctemp7145 = {{ 7}, (char*)"nctemp\0"};
nctemp7144=&nctemp7145;
nctempchar1* nctemp7142= nctemp7144;
int nctemp7146=CodeEs(nctemp7140,nctemp7142);
struct tree* nctemp7148= p;
nctempchar1* nctemp7150= type;
int nctemp7153=CodeEs(nctemp7148,nctemp7150);
int nctemp7155= rank;
int nctemp7157=CodeEd(nctemp7155);
struct tree* nctemp7159= p;
struct nctempchar1 *nctemp7163;
static struct nctempchar1 nctemp7164 = {{ 3}, (char*)" *\0"};
nctemp7163=&nctemp7164;
nctempchar1* nctemp7161= nctemp7163;
int nctemp7165=CodeEs(nctemp7159,nctemp7161);
struct tree* nctemp7167= sp;
nctempchar1* nctemp7169= pointer;
int nctemp7172=CodeEs(nctemp7167,nctemp7169);
struct tree* nctemp7174= p;
struct nctempchar1 *nctemp7178;
static struct nctempchar1 nctemp7179 = {{ 4}, (char*)";\n\0"};
nctemp7178=&nctemp7179;
nctempchar1* nctemp7176= nctemp7178;
int nctemp7180=CodeEs(nctemp7174,nctemp7176);
struct tree* nctemp7182= sp;
nctempchar1* nctemp7184= descr;
int nctemp7187=CodeEs(nctemp7182,nctemp7184);
struct tree* nctemp7189= sp;
struct nctempchar1 *nctemp7193;
static struct nctempchar1 nctemp7194 = {{ 2}, (char*)"=\0"};
nctemp7193=&nctemp7194;
nctempchar1* nctemp7191= nctemp7193;
int nctemp7195=CodeEs(nctemp7189,nctemp7191);
struct tree* nctemp7197= sp;
struct nctempchar1 *nctemp7201;
static struct nctempchar1 nctemp7202 = {{ 3}, (char*)"*(\0"};
nctemp7201=&nctemp7202;
nctempchar1* nctemp7199= nctemp7201;
int nctemp7203=CodeEs(nctemp7197,nctemp7199);
struct tree* nctemp7205= p;
struct nctempchar1 *nctemp7209;
static struct nctempchar1 nctemp7210 = {{ 7}, (char*)"nctemp\0"};
nctemp7209=&nctemp7210;
nctempchar1* nctemp7207= nctemp7209;
int nctemp7211=CodeEs(nctemp7205,nctemp7207);
struct tree* nctemp7213= sp;
nctempchar1* nctemp7215= type;
int nctemp7218=CodeEs(nctemp7213,nctemp7215);
int nctemp7220= rank;
int nctemp7222=CodeEd(nctemp7220);
struct tree* nctemp7224= sp;
struct nctempchar1 *nctemp7228;
static struct nctempchar1 nctemp7229 = {{ 4}, (char*)"*)(\0"};
nctemp7228=&nctemp7229;
nctempchar1* nctemp7226= nctemp7228;
int nctemp7230=CodeEs(nctemp7224,nctemp7226);
struct tree* nctemp7232= sp;
nctempchar1* nctemp7234= expr;
int nctemp7237=CodeEs(nctemp7232,nctemp7234);
struct tree* nctemp7239= sp;
struct nctempchar1 *nctemp7243;
static struct nctempchar1 nctemp7244 = {{ 5}, (char*)");\n\0"};
nctemp7243=&nctemp7244;
nctempchar1* nctemp7241= nctemp7243;
int nctemp7245=CodeEs(nctemp7239,nctemp7241);
p =tp;
i =0;
int nctemp7254 = (p !=0);
int nctemp7258=nctemp7254;
while(nctemp7258)
{{
struct tree* nctemp7264= p;
nctempchar1* nctemp7266=CodeExpr(nctemp7264);
dim=nctemp7266;
struct tree* nctemp7268= sp;
nctempchar1* nctemp7270= descr;
int nctemp7273=CodeEs(nctemp7268,nctemp7270);
struct tree* nctemp7275= sp;
struct nctempchar1 *nctemp7279;
static struct nctempchar1 nctemp7280 = {{ 3}, (char*)".d\0"};
nctemp7279=&nctemp7280;
nctempchar1* nctemp7277= nctemp7279;
int nctemp7281=CodeEs(nctemp7275,nctemp7277);
struct tree* nctemp7283= sp;
struct nctempchar1 *nctemp7287;
static struct nctempchar1 nctemp7288 = {{ 2}, (char*)"[\0"};
nctemp7287=&nctemp7288;
nctempchar1* nctemp7285= nctemp7287;
int nctemp7289=CodeEs(nctemp7283,nctemp7285);
int nctemp7291= i;
int nctemp7293=CodeEd(nctemp7291);
struct tree* nctemp7295= sp;
struct nctempchar1 *nctemp7299;
static struct nctempchar1 nctemp7300 = {{ 3}, (char*)"]=\0"};
nctemp7299=&nctemp7300;
nctempchar1* nctemp7297= nctemp7299;
int nctemp7301=CodeEs(nctemp7295,nctemp7297);
struct tree* nctemp7303= sp;
nctempchar1* nctemp7305= dim;
int nctemp7308=CodeEs(nctemp7303,nctemp7305);
struct tree* nctemp7310= sp;
struct nctempchar1 *nctemp7314;
static struct nctempchar1 nctemp7315 = {{ 4}, (char*)";\n\0"};
nctemp7314=&nctemp7315;
nctempchar1* nctemp7312= nctemp7314;
int nctemp7316=CodeEs(nctemp7310,nctemp7312);
int nctemp7325 = i + 1;
i =nctemp7325;
struct tree* nctemp7330= p;
struct tree* nctemp7332=PtreeMvsister(nctemp7330);
p =nctemp7332;
}
int nctemp7333 = (p !=0);
nctemp7258=nctemp7333;}struct tree* nctemp7338= sp;
nctempchar1* nctemp7340= pointer;
int nctemp7343=CodeEs(nctemp7338,nctemp7340);
struct tree* nctemp7345= sp;
struct nctempchar1 *nctemp7349;
static struct nctempchar1 nctemp7350 = {{ 3}, (char*)"=&\0"};
nctemp7349=&nctemp7350;
nctempchar1* nctemp7347= nctemp7349;
int nctemp7351=CodeEs(nctemp7345,nctemp7347);
struct tree* nctemp7353= sp;
nctempchar1* nctemp7355= descr;
int nctemp7358=CodeEs(nctemp7353,nctemp7355);
struct tree* nctemp7360= sp;
struct nctempchar1 *nctemp7364;
static struct nctempchar1 nctemp7365 = {{ 4}, (char*)";\n\0"};
nctemp7364=&nctemp7365;
nctempchar1* nctemp7362= nctemp7364;
int nctemp7366=CodeEs(nctemp7360,nctemp7362);
}
else{
struct tree* nctemp7368= p;
nctempchar1* nctemp7370= type;
int nctemp7373=CodeEs(nctemp7368,nctemp7370);
struct tree* nctemp7375= p;
struct nctempchar1 *nctemp7379;
static struct nctempchar1 nctemp7380 = {{ 2}, (char*)" \0"};
nctemp7379=&nctemp7380;
nctempchar1* nctemp7377= nctemp7379;
int nctemp7381=CodeEs(nctemp7375,nctemp7377);
struct tree* nctemp7383= p;
nctempchar1* nctemp7385= pointer;
int nctemp7388=CodeEs(nctemp7383,nctemp7385);
struct tree* nctemp7390= p;
struct nctempchar1 *nctemp7394;
static struct nctempchar1 nctemp7395 = {{ 2}, (char*)"=\0"};
nctemp7394=&nctemp7395;
nctempchar1* nctemp7392= nctemp7394;
int nctemp7396=CodeEs(nctemp7390,nctemp7392);
struct tree* nctemp7398= p;
struct nctempchar1 *nctemp7402;
static struct nctempchar1 nctemp7403 = {{ 2}, (char*)"(\0"};
nctemp7402=&nctemp7403;
nctempchar1* nctemp7400= nctemp7402;
int nctemp7404=CodeEs(nctemp7398,nctemp7400);
struct tree* nctemp7406= p;
struct tree* nctemp7410= np;
nctempchar1* nctemp7412=PtreeGetype(nctemp7410);
nctempchar1* nctemp7408= nctemp7412;
int nctemp7413=CodeEs(nctemp7406,nctemp7408);
struct tree* nctemp7415= p;
struct nctempchar1 *nctemp7419;
static struct nctempchar1 nctemp7420 = {{ 3}, (char*)")(\0"};
nctemp7419=&nctemp7420;
nctempchar1* nctemp7417= nctemp7419;
int nctemp7421=CodeEs(nctemp7415,nctemp7417);
struct tree* nctemp7423= p;
nctempchar1* nctemp7425= expr;
int nctemp7428=CodeEs(nctemp7423,nctemp7425);
struct tree* nctemp7430= p;
struct nctempchar1 *nctemp7434;
static struct nctempchar1 nctemp7435 = {{ 5}, (char*)");\n\0"};
nctemp7434=&nctemp7435;
nctempchar1* nctemp7432= nctemp7434;
int nctemp7436=CodeEs(nctemp7430,nctemp7432);
}
}
}
return pointer;
}
nctempchar1 * CodePrimexpr (struct tree* p)
{
struct tree* nctemp7444= p;
nctempchar1* nctemp7446=PtreeGetname(nctemp7444);
nctempchar1* nctemp7442= nctemp7446;
struct nctempchar1 *nctemp7449;
static struct nctempchar1 nctemp7450 = {{ 11}, (char*)"identifier\0"};
nctemp7449=&nctemp7450;
nctempchar1* nctemp7447= nctemp7449;
int nctemp7451=LibeStrcmp(nctemp7442,nctemp7447);
int nctemp7439 = (nctemp7451 ==1);
if(nctemp7439)
{
struct tree* nctemp7454= p;
nctempchar1* nctemp7456=CodeIdent(nctemp7454);
return nctemp7456;
}
else{
struct tree* nctemp7462= p;
nctempchar1* nctemp7464=PtreeGetname(nctemp7462);
nctempchar1* nctemp7460= nctemp7464;
struct nctempchar1 *nctemp7467;
static struct nctempchar1 nctemp7468 = {{ 4}, (char*)"new\0"};
nctemp7467=&nctemp7468;
nctempchar1* nctemp7465= nctemp7467;
int nctemp7469=LibeStrcmp(nctemp7460,nctemp7465);
int nctemp7457 = (nctemp7469 ==1);
if(nctemp7457)
{
struct tree* nctemp7472= p;
nctempchar1* nctemp7474=CodeNew(nctemp7472);
return nctemp7474;
}
else{
struct tree* nctemp7480= p;
nctempchar1* nctemp7482=PtreeGetname(nctemp7480);
nctempchar1* nctemp7478= nctemp7482;
struct nctempchar1 *nctemp7485;
static struct nctempchar1 nctemp7486 = {{ 7}, (char*)"delete\0"};
nctemp7485=&nctemp7486;
nctempchar1* nctemp7483= nctemp7485;
int nctemp7487=LibeStrcmp(nctemp7478,nctemp7483);
int nctemp7475 = (nctemp7487 ==1);
if(nctemp7475)
{
struct tree* nctemp7490= p;
nctempchar1* nctemp7492=CodeDelete(nctemp7490);
return nctemp7492;
}
else{
struct tree* nctemp7498= p;
nctempchar1* nctemp7500=PtreeGetname(nctemp7498);
nctempchar1* nctemp7496= nctemp7500;
struct nctempchar1 *nctemp7503;
static struct nctempchar1 nctemp7504 = {{ 4}, (char*)"len\0"};
nctemp7503=&nctemp7504;
nctempchar1* nctemp7501= nctemp7503;
int nctemp7505=LibeStrcmp(nctemp7496,nctemp7501);
int nctemp7493 = (nctemp7505 ==1);
if(nctemp7493)
{
struct tree* nctemp7508= p;
nctempchar1* nctemp7510=CodeLen(nctemp7508);
return nctemp7510;
}
else{
struct tree* nctemp7516= p;
nctempchar1* nctemp7518=PtreeGetname(nctemp7516);
nctempchar1* nctemp7514= nctemp7518;
struct nctempchar1 *nctemp7521;
static struct nctempchar1 nctemp7522 = {{ 6}, (char*)"cmplx\0"};
nctemp7521=&nctemp7522;
nctempchar1* nctemp7519= nctemp7521;
int nctemp7523=LibeStrcmp(nctemp7514,nctemp7519);
int nctemp7511 = (nctemp7523 ==1);
if(nctemp7511)
{
struct tree* nctemp7526= p;
nctempchar1* nctemp7528=CodeCmplx(nctemp7526);
return nctemp7528;
}
else{
struct tree* nctemp7534= p;
nctempchar1* nctemp7536=PtreeGetname(nctemp7534);
nctempchar1* nctemp7532= nctemp7536;
struct nctempchar1 *nctemp7539;
static struct nctempchar1 nctemp7540 = {{ 3}, (char*)"im\0"};
nctemp7539=&nctemp7540;
nctempchar1* nctemp7537= nctemp7539;
int nctemp7541=LibeStrcmp(nctemp7532,nctemp7537);
int nctemp7529 = (nctemp7541 ==1);
if(nctemp7529)
{
struct tree* nctemp7544= p;
nctempchar1* nctemp7546=CodeIm(nctemp7544);
return nctemp7546;
}
else{
struct tree* nctemp7552= p;
nctempchar1* nctemp7554=PtreeGetname(nctemp7552);
nctempchar1* nctemp7550= nctemp7554;
struct nctempchar1 *nctemp7557;
static struct nctempchar1 nctemp7558 = {{ 3}, (char*)"re\0"};
nctemp7557=&nctemp7558;
nctempchar1* nctemp7555= nctemp7557;
int nctemp7559=LibeStrcmp(nctemp7550,nctemp7555);
int nctemp7547 = (nctemp7559 ==1);
if(nctemp7547)
{
struct tree* nctemp7562= p;
nctempchar1* nctemp7564=CodeRe(nctemp7562);
return nctemp7564;
}
else{
struct tree* nctemp7570= p;
nctempchar1* nctemp7572=PtreeGetname(nctemp7570);
nctempchar1* nctemp7568= nctemp7572;
struct nctempchar1 *nctemp7575;
static struct nctempchar1 nctemp7576 = {{ 6}, (char*)"fcall\0"};
nctemp7575=&nctemp7576;
nctempchar1* nctemp7573= nctemp7575;
int nctemp7577=LibeStrcmp(nctemp7568,nctemp7573);
int nctemp7565 = (nctemp7577 ==1);
if(nctemp7565)
{
struct tree* nctemp7580= p;
nctempchar1* nctemp7582=CodeFcall(nctemp7580);
return nctemp7582;
}
else{
struct tree* nctemp7588= p;
nctempchar1* nctemp7590=PtreeGetname(nctemp7588);
nctempchar1* nctemp7586= nctemp7590;
struct nctempchar1 *nctemp7593;
static struct nctempchar1 nctemp7594 = {{ 5}, (char*)"cast\0"};
nctemp7593=&nctemp7594;
nctempchar1* nctemp7591= nctemp7593;
int nctemp7595=LibeStrcmp(nctemp7586,nctemp7591);
int nctemp7583 = (nctemp7595 ==1);
if(nctemp7583)
{
struct tree* nctemp7598= p;
nctempchar1* nctemp7600=CodeCast(nctemp7598);
return nctemp7600;
}
else{
struct tree* nctemp7606= p;
nctempchar1* nctemp7608=PtreeGetname(nctemp7606);
nctempchar1* nctemp7604= nctemp7608;
struct nctempchar1 *nctemp7611;
static struct nctempchar1 nctemp7612 = {{ 10}, (char*)"iconstant\0"};
nctemp7611=&nctemp7612;
nctempchar1* nctemp7609= nctemp7611;
int nctemp7613=LibeStrcmp(nctemp7604,nctemp7609);
int nctemp7601 = (nctemp7613 ==1);
if(nctemp7601)
{
struct tree* nctemp7616= p;
nctempchar1* nctemp7618=PtreeGetdef(nctemp7616);
return nctemp7618;
}
else{
struct tree* nctemp7624= p;
nctempchar1* nctemp7626=PtreeGetname(nctemp7624);
nctempchar1* nctemp7622= nctemp7626;
struct nctempchar1 *nctemp7629;
static struct nctempchar1 nctemp7630 = {{ 10}, (char*)"rconstant\0"};
nctemp7629=&nctemp7630;
nctempchar1* nctemp7627= nctemp7629;
int nctemp7631=LibeStrcmp(nctemp7622,nctemp7627);
int nctemp7619 = (nctemp7631 ==1);
if(nctemp7619)
{
struct tree* nctemp7634= p;
nctempchar1* nctemp7636=PtreeGetdef(nctemp7634);
return nctemp7636;
}
else{
struct tree* nctemp7642= p;
nctempchar1* nctemp7644=PtreeGetname(nctemp7642);
nctempchar1* nctemp7640= nctemp7644;
struct nctempchar1 *nctemp7647;
static struct nctempchar1 nctemp7648 = {{ 10}, (char*)"sconstant\0"};
nctemp7647=&nctemp7648;
nctempchar1* nctemp7645= nctemp7647;
int nctemp7649=LibeStrcmp(nctemp7640,nctemp7645);
int nctemp7637 = (nctemp7649 ==1);
if(nctemp7637)
{
struct tree* nctemp7652= p;
nctempchar1* nctemp7654=CodeSconstant(nctemp7652);
return nctemp7654;
}
else{
struct tree* nctemp7656= p;
nctempchar1* nctemp7658=CodeBinexpr(nctemp7656);
return nctemp7658;
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
nctempchar1* nctemp7664=CodeMktemp();
tempr=nctemp7664;
struct tree* nctemp7670= p;
nctempchar1* nctemp7672=PtreeGetname(nctemp7670);
nctempchar1* nctemp7668= nctemp7672;
struct nctempchar1 *nctemp7675;
static struct nctempchar1 nctemp7676 = {{ 7}, (char*)"unexpr\0"};
nctemp7675=&nctemp7676;
nctempchar1* nctemp7673= nctemp7675;
int nctemp7677=LibeStrcmp(nctemp7668,nctemp7673);
int nctemp7665 = (nctemp7677 ==1);
if(nctemp7665)
{
struct tree* nctemp7684= p;
nctempchar1* nctemp7686=PtreeGetype(nctemp7684);
nctempchar1* nctemp7682= nctemp7686;
struct nctempchar1 *nctemp7689;
static struct nctempchar1 nctemp7690 = {{ 8}, (char*)"complex\0"};
nctemp7689=&nctemp7690;
nctempchar1* nctemp7687= nctemp7689;
int nctemp7691=LibeStrcmp(nctemp7682,nctemp7687);
int nctemp7679 = (nctemp7691 ==1);
if(nctemp7679)
{
struct tree* nctemp7700= p;
struct tree* nctemp7702=PtreeMvchild(nctemp7700);
struct tree* nctemp7698= nctemp7702;
nctempchar1* nctemp7703=CodePrimexpr(nctemp7698);
tmp=nctemp7703;
struct tree* nctemp7705= p;
struct nctempchar1 *nctemp7709;
static struct nctempchar1 nctemp7710 = {{ 4}, (char*)";\n\0"};
nctemp7709=&nctemp7710;
nctempchar1* nctemp7707= nctemp7709;
int nctemp7711=CodeEs(nctemp7705,nctemp7707);
struct tree* nctemp7713= p;
nctempchar1* nctemp7715= tempr;
int nctemp7718=CodeEs(nctemp7713,nctemp7715);
struct tree* nctemp7720= p;
struct nctempchar1 *nctemp7724;
static struct nctempchar1 nctemp7725 = {{ 3}, (char*)".r\0"};
nctemp7724=&nctemp7725;
nctempchar1* nctemp7722= nctemp7724;
int nctemp7726=CodeEs(nctemp7720,nctemp7722);
struct tree* nctemp7728= p;
struct nctempchar1 *nctemp7732;
static struct nctempchar1 nctemp7733 = {{ 4}, (char*)"= -\0"};
nctemp7732=&nctemp7733;
nctempchar1* nctemp7730= nctemp7732;
int nctemp7734=CodeEs(nctemp7728,nctemp7730);
struct tree* nctemp7736= p;
nctempchar1* nctemp7738= tmp;
int nctemp7741=CodeEs(nctemp7736,nctemp7738);
struct tree* nctemp7743= p;
struct nctempchar1 *nctemp7747;
static struct nctempchar1 nctemp7748 = {{ 3}, (char*)".r\0"};
nctemp7747=&nctemp7748;
nctempchar1* nctemp7745= nctemp7747;
int nctemp7749=CodeEs(nctemp7743,nctemp7745);
struct tree* nctemp7751= p;
struct nctempchar1 *nctemp7755;
static struct nctempchar1 nctemp7756 = {{ 4}, (char*)";\n\0"};
nctemp7755=&nctemp7756;
nctempchar1* nctemp7753= nctemp7755;
int nctemp7757=CodeEs(nctemp7751,nctemp7753);
struct tree* nctemp7759= p;
nctempchar1* nctemp7761= tempr;
int nctemp7764=CodeEs(nctemp7759,nctemp7761);
struct tree* nctemp7766= p;
struct nctempchar1 *nctemp7770;
static struct nctempchar1 nctemp7771 = {{ 3}, (char*)".i\0"};
nctemp7770=&nctemp7771;
nctempchar1* nctemp7768= nctemp7770;
int nctemp7772=CodeEs(nctemp7766,nctemp7768);
struct tree* nctemp7774= p;
struct nctempchar1 *nctemp7778;
static struct nctempchar1 nctemp7779 = {{ 4}, (char*)"= -\0"};
nctemp7778=&nctemp7779;
nctempchar1* nctemp7776= nctemp7778;
int nctemp7780=CodeEs(nctemp7774,nctemp7776);
struct tree* nctemp7782= p;
nctempchar1* nctemp7784= tmp;
int nctemp7787=CodeEs(nctemp7782,nctemp7784);
struct tree* nctemp7789= p;
struct nctempchar1 *nctemp7793;
static struct nctempchar1 nctemp7794 = {{ 3}, (char*)".i\0"};
nctemp7793=&nctemp7794;
nctempchar1* nctemp7791= nctemp7793;
int nctemp7795=CodeEs(nctemp7789,nctemp7791);
struct tree* nctemp7797= p;
struct nctempchar1 *nctemp7801;
static struct nctempchar1 nctemp7802 = {{ 4}, (char*)";\n\0"};
nctemp7801=&nctemp7802;
nctempchar1* nctemp7799= nctemp7801;
int nctemp7803=CodeEs(nctemp7797,nctemp7799);
return tempr;
}
else{
struct tree* nctemp7813= p;
struct tree* nctemp7815=PtreeMvchild(nctemp7813);
struct tree* nctemp7811= nctemp7815;
nctempchar1* nctemp7816=CodePrimexpr(nctemp7811);
tmp=nctemp7816;
struct tree* nctemp7818= p;
struct tree* nctemp7822= p;
nctempchar1* nctemp7824=PtreeGetype(nctemp7822);
nctempchar1* nctemp7820= nctemp7824;
int nctemp7825=CodeEs(nctemp7818,nctemp7820);
struct tree* nctemp7827= p;
struct nctempchar1 *nctemp7831;
static struct nctempchar1 nctemp7832 = {{ 2}, (char*)" \0"};
nctemp7831=&nctemp7832;
nctempchar1* nctemp7829= nctemp7831;
int nctemp7833=CodeEs(nctemp7827,nctemp7829);
struct tree* nctemp7835= p;
nctempchar1* nctemp7837= tempr;
int nctemp7840=CodeEs(nctemp7835,nctemp7837);
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
static struct nctempchar1 nctemp7862 = {{ 4}, (char*)";\n\0"};
nctemp7861=&nctemp7862;
nctempchar1* nctemp7859= nctemp7861;
int nctemp7863=CodeEs(nctemp7857,nctemp7859);
return tempr;
}
}
else{
struct tree* nctemp7867= p;
nctempchar1* nctemp7869=CodePrimexpr(nctemp7867);
return nctemp7869;
}
}
nctempchar1 * CodeAddexpr (struct tree* p,nctempchar1 *lval,nctempchar1 *rval)
{
nctempchar1 *type;
nctempchar1 *tempr;
nctempchar1 *opr;
struct tree* nctemp7875= p;
nctempchar1* nctemp7877=PtreeGetype(nctemp7875);
type=nctemp7877;
nctempchar1* nctemp7883=CodeMktemp();
tempr=nctemp7883;
struct tree* nctemp7889= p;
nctempchar1* nctemp7891=PtreeGetdef(nctemp7889);
opr=nctemp7891;
nctempchar1* nctemp7895= type;
struct nctempchar1 *nctemp7900;
static struct nctempchar1 nctemp7901 = {{ 8}, (char*)"complex\0"};
nctemp7900=&nctemp7901;
nctempchar1* nctemp7898= nctemp7900;
int nctemp7902=LibeStrcmp(nctemp7895,nctemp7898);
int nctemp7892 = (nctemp7902 ==1);
if(nctemp7892)
{
nctempchar1* nctemp7910= opr;
struct nctempchar1 *nctemp7915;
static struct nctempchar1 nctemp7916 = {{ 2}, (char*)"+\0"};
nctemp7915=&nctemp7916;
nctempchar1* nctemp7913= nctemp7915;
int nctemp7917=LibeStrcmp(nctemp7910,nctemp7913);
int nctemp7907 = (nctemp7917 ==1);
nctempchar1* nctemp7923= opr;
struct nctempchar1 *nctemp7928;
static struct nctempchar1 nctemp7929 = {{ 2}, (char*)"-\0"};
nctemp7928=&nctemp7929;
nctempchar1* nctemp7926= nctemp7928;
int nctemp7930=LibeStrcmp(nctemp7923,nctemp7926);
int nctemp7920 = (nctemp7930 ==1);
int nctemp7904 = (nctemp7907 || nctemp7920);
if(nctemp7904)
{
struct tree* nctemp7933= p;
nctempchar1* nctemp7935= type;
int nctemp7938=CodeEs(nctemp7933,nctemp7935);
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
static struct nctempchar1 nctemp7960 = {{ 3}, (char*)".r\0"};
nctemp7959=&nctemp7960;
nctempchar1* nctemp7957= nctemp7959;
int nctemp7961=CodeEs(nctemp7955,nctemp7957);
struct tree* nctemp7963= p;
struct nctempchar1 *nctemp7967;
static struct nctempchar1 nctemp7968 = {{ 4}, (char*)" = \0"};
nctemp7967=&nctemp7968;
nctempchar1* nctemp7965= nctemp7967;
int nctemp7969=CodeEs(nctemp7963,nctemp7965);
struct tree* nctemp7971= p;
nctempchar1* nctemp7973= lval;
int nctemp7976=CodeEs(nctemp7971,nctemp7973);
struct tree* nctemp7978= p;
struct nctempchar1 *nctemp7982;
static struct nctempchar1 nctemp7983 = {{ 3}, (char*)".r\0"};
nctemp7982=&nctemp7983;
nctempchar1* nctemp7980= nctemp7982;
int nctemp7984=CodeEs(nctemp7978,nctemp7980);
struct tree* nctemp7986= p;
struct nctempchar1 *nctemp7990;
static struct nctempchar1 nctemp7991 = {{ 2}, (char*)" \0"};
nctemp7990=&nctemp7991;
nctempchar1* nctemp7988= nctemp7990;
int nctemp7992=CodeEs(nctemp7986,nctemp7988);
struct tree* nctemp7994= p;
struct tree* nctemp7998= p;
nctempchar1* nctemp8000=PtreeGetdef(nctemp7998);
nctempchar1* nctemp7996= nctemp8000;
int nctemp8001=CodeEs(nctemp7994,nctemp7996);
struct tree* nctemp8003= p;
struct nctempchar1 *nctemp8007;
static struct nctempchar1 nctemp8008 = {{ 2}, (char*)" \0"};
nctemp8007=&nctemp8008;
nctempchar1* nctemp8005= nctemp8007;
int nctemp8009=CodeEs(nctemp8003,nctemp8005);
struct tree* nctemp8011= p;
nctempchar1* nctemp8013= rval;
int nctemp8016=CodeEs(nctemp8011,nctemp8013);
struct tree* nctemp8018= p;
struct nctempchar1 *nctemp8022;
static struct nctempchar1 nctemp8023 = {{ 3}, (char*)".r\0"};
nctemp8022=&nctemp8023;
nctempchar1* nctemp8020= nctemp8022;
int nctemp8024=CodeEs(nctemp8018,nctemp8020);
struct tree* nctemp8026= p;
struct nctempchar1 *nctemp8030;
static struct nctempchar1 nctemp8031 = {{ 4}, (char*)";\n\0"};
nctemp8030=&nctemp8031;
nctempchar1* nctemp8028= nctemp8030;
int nctemp8032=CodeEs(nctemp8026,nctemp8028);
struct tree* nctemp8034= p;
nctempchar1* nctemp8036= type;
int nctemp8039=CodeEs(nctemp8034,nctemp8036);
struct tree* nctemp8041= p;
struct nctempchar1 *nctemp8045;
static struct nctempchar1 nctemp8046 = {{ 2}, (char*)" \0"};
nctemp8045=&nctemp8046;
nctempchar1* nctemp8043= nctemp8045;
int nctemp8047=CodeEs(nctemp8041,nctemp8043);
struct tree* nctemp8049= p;
nctempchar1* nctemp8051= tempr;
int nctemp8054=CodeEs(nctemp8049,nctemp8051);
struct tree* nctemp8056= p;
struct nctempchar1 *nctemp8060;
static struct nctempchar1 nctemp8061 = {{ 3}, (char*)".i\0"};
nctemp8060=&nctemp8061;
nctempchar1* nctemp8058= nctemp8060;
int nctemp8062=CodeEs(nctemp8056,nctemp8058);
struct tree* nctemp8064= p;
struct nctempchar1 *nctemp8068;
static struct nctempchar1 nctemp8069 = {{ 4}, (char*)" = \0"};
nctemp8068=&nctemp8069;
nctempchar1* nctemp8066= nctemp8068;
int nctemp8070=CodeEs(nctemp8064,nctemp8066);
struct tree* nctemp8072= p;
nctempchar1* nctemp8074= lval;
int nctemp8077=CodeEs(nctemp8072,nctemp8074);
struct tree* nctemp8079= p;
struct nctempchar1 *nctemp8083;
static struct nctempchar1 nctemp8084 = {{ 3}, (char*)".i\0"};
nctemp8083=&nctemp8084;
nctempchar1* nctemp8081= nctemp8083;
int nctemp8085=CodeEs(nctemp8079,nctemp8081);
struct tree* nctemp8087= p;
struct nctempchar1 *nctemp8091;
static struct nctempchar1 nctemp8092 = {{ 2}, (char*)" \0"};
nctemp8091=&nctemp8092;
nctempchar1* nctemp8089= nctemp8091;
int nctemp8093=CodeEs(nctemp8087,nctemp8089);
struct tree* nctemp8095= p;
struct tree* nctemp8099= p;
nctempchar1* nctemp8101=PtreeGetdef(nctemp8099);
nctempchar1* nctemp8097= nctemp8101;
int nctemp8102=CodeEs(nctemp8095,nctemp8097);
struct tree* nctemp8104= p;
struct nctempchar1 *nctemp8108;
static struct nctempchar1 nctemp8109 = {{ 2}, (char*)" \0"};
nctemp8108=&nctemp8109;
nctempchar1* nctemp8106= nctemp8108;
int nctemp8110=CodeEs(nctemp8104,nctemp8106);
struct tree* nctemp8112= p;
nctempchar1* nctemp8114= rval;
int nctemp8117=CodeEs(nctemp8112,nctemp8114);
struct tree* nctemp8119= p;
struct nctempchar1 *nctemp8123;
static struct nctempchar1 nctemp8124 = {{ 3}, (char*)".i\0"};
nctemp8123=&nctemp8124;
nctempchar1* nctemp8121= nctemp8123;
int nctemp8125=CodeEs(nctemp8119,nctemp8121);
struct tree* nctemp8127= p;
struct nctempchar1 *nctemp8131;
static struct nctempchar1 nctemp8132 = {{ 4}, (char*)";\n\0"};
nctemp8131=&nctemp8132;
nctempchar1* nctemp8129= nctemp8131;
int nctemp8133=CodeEs(nctemp8127,nctemp8129);
}
else{
nctempchar1* nctemp8137= opr;
struct nctempchar1 *nctemp8142;
static struct nctempchar1 nctemp8143 = {{ 2}, (char*)"*\0"};
nctemp8142=&nctemp8143;
nctempchar1* nctemp8140= nctemp8142;
int nctemp8144=LibeStrcmp(nctemp8137,nctemp8140);
int nctemp8134 = (nctemp8144 ==1);
if(nctemp8134)
{
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
static struct nctempchar1 nctemp8174 = {{ 3}, (char*)".r\0"};
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
static struct nctempchar1 nctemp8197 = {{ 3}, (char*)".r\0"};
nctemp8196=&nctemp8197;
nctempchar1* nctemp8194= nctemp8196;
int nctemp8198=CodeEs(nctemp8192,nctemp8194);
struct tree* nctemp8200= p;
struct nctempchar1 *nctemp8204;
static struct nctempchar1 nctemp8205 = {{ 2}, (char*)"*\0"};
nctemp8204=&nctemp8205;
nctempchar1* nctemp8202= nctemp8204;
int nctemp8206=CodeEs(nctemp8200,nctemp8202);
struct tree* nctemp8208= p;
nctempchar1* nctemp8210= rval;
int nctemp8213=CodeEs(nctemp8208,nctemp8210);
struct tree* nctemp8215= p;
struct nctempchar1 *nctemp8219;
static struct nctempchar1 nctemp8220 = {{ 3}, (char*)".r\0"};
nctemp8219=&nctemp8220;
nctempchar1* nctemp8217= nctemp8219;
int nctemp8221=CodeEs(nctemp8215,nctemp8217);
struct tree* nctemp8223= p;
struct nctempchar1 *nctemp8227;
static struct nctempchar1 nctemp8228 = {{ 2}, (char*)"-\0"};
nctemp8227=&nctemp8228;
nctempchar1* nctemp8225= nctemp8227;
int nctemp8229=CodeEs(nctemp8223,nctemp8225);
struct tree* nctemp8231= p;
nctempchar1* nctemp8233= lval;
int nctemp8236=CodeEs(nctemp8231,nctemp8233);
struct tree* nctemp8238= p;
struct nctempchar1 *nctemp8242;
static struct nctempchar1 nctemp8243 = {{ 3}, (char*)".i\0"};
nctemp8242=&nctemp8243;
nctempchar1* nctemp8240= nctemp8242;
int nctemp8244=CodeEs(nctemp8238,nctemp8240);
struct tree* nctemp8246= p;
struct nctempchar1 *nctemp8250;
static struct nctempchar1 nctemp8251 = {{ 2}, (char*)"*\0"};
nctemp8250=&nctemp8251;
nctempchar1* nctemp8248= nctemp8250;
int nctemp8252=CodeEs(nctemp8246,nctemp8248);
struct tree* nctemp8254= p;
nctempchar1* nctemp8256= rval;
int nctemp8259=CodeEs(nctemp8254,nctemp8256);
struct tree* nctemp8261= p;
struct nctempchar1 *nctemp8265;
static struct nctempchar1 nctemp8266 = {{ 3}, (char*)".i\0"};
nctemp8265=&nctemp8266;
nctempchar1* nctemp8263= nctemp8265;
int nctemp8267=CodeEs(nctemp8261,nctemp8263);
struct tree* nctemp8269= p;
struct nctempchar1 *nctemp8273;
static struct nctempchar1 nctemp8274 = {{ 4}, (char*)";\n\0"};
nctemp8273=&nctemp8274;
nctempchar1* nctemp8271= nctemp8273;
int nctemp8275=CodeEs(nctemp8269,nctemp8271);
struct tree* nctemp8277= p;
nctempchar1* nctemp8279= type;
int nctemp8282=CodeEs(nctemp8277,nctemp8279);
struct tree* nctemp8284= p;
struct nctempchar1 *nctemp8288;
static struct nctempchar1 nctemp8289 = {{ 2}, (char*)" \0"};
nctemp8288=&nctemp8289;
nctempchar1* nctemp8286= nctemp8288;
int nctemp8290=CodeEs(nctemp8284,nctemp8286);
struct tree* nctemp8292= p;
nctempchar1* nctemp8294= tempr;
int nctemp8297=CodeEs(nctemp8292,nctemp8294);
struct tree* nctemp8299= p;
struct nctempchar1 *nctemp8303;
static struct nctempchar1 nctemp8304 = {{ 3}, (char*)".i\0"};
nctemp8303=&nctemp8304;
nctempchar1* nctemp8301= nctemp8303;
int nctemp8305=CodeEs(nctemp8299,nctemp8301);
struct tree* nctemp8307= p;
struct nctempchar1 *nctemp8311;
static struct nctempchar1 nctemp8312 = {{ 4}, (char*)" = \0"};
nctemp8311=&nctemp8312;
nctempchar1* nctemp8309= nctemp8311;
int nctemp8313=CodeEs(nctemp8307,nctemp8309);
struct tree* nctemp8315= p;
nctempchar1* nctemp8317= lval;
int nctemp8320=CodeEs(nctemp8315,nctemp8317);
struct tree* nctemp8322= p;
struct nctempchar1 *nctemp8326;
static struct nctempchar1 nctemp8327 = {{ 3}, (char*)".i\0"};
nctemp8326=&nctemp8327;
nctempchar1* nctemp8324= nctemp8326;
int nctemp8328=CodeEs(nctemp8322,nctemp8324);
struct tree* nctemp8330= p;
struct nctempchar1 *nctemp8334;
static struct nctempchar1 nctemp8335 = {{ 2}, (char*)"*\0"};
nctemp8334=&nctemp8335;
nctempchar1* nctemp8332= nctemp8334;
int nctemp8336=CodeEs(nctemp8330,nctemp8332);
struct tree* nctemp8338= p;
nctempchar1* nctemp8340= rval;
int nctemp8343=CodeEs(nctemp8338,nctemp8340);
struct tree* nctemp8345= p;
struct nctempchar1 *nctemp8349;
static struct nctempchar1 nctemp8350 = {{ 3}, (char*)".r\0"};
nctemp8349=&nctemp8350;
nctempchar1* nctemp8347= nctemp8349;
int nctemp8351=CodeEs(nctemp8345,nctemp8347);
struct tree* nctemp8353= p;
struct nctempchar1 *nctemp8357;
static struct nctempchar1 nctemp8358 = {{ 2}, (char*)"+\0"};
nctemp8357=&nctemp8358;
nctempchar1* nctemp8355= nctemp8357;
int nctemp8359=CodeEs(nctemp8353,nctemp8355);
struct tree* nctemp8361= p;
nctempchar1* nctemp8363= lval;
int nctemp8366=CodeEs(nctemp8361,nctemp8363);
struct tree* nctemp8368= p;
struct nctempchar1 *nctemp8372;
static struct nctempchar1 nctemp8373 = {{ 3}, (char*)".r\0"};
nctemp8372=&nctemp8373;
nctempchar1* nctemp8370= nctemp8372;
int nctemp8374=CodeEs(nctemp8368,nctemp8370);
struct tree* nctemp8376= p;
struct nctempchar1 *nctemp8380;
static struct nctempchar1 nctemp8381 = {{ 2}, (char*)"*\0"};
nctemp8380=&nctemp8381;
nctempchar1* nctemp8378= nctemp8380;
int nctemp8382=CodeEs(nctemp8376,nctemp8378);
struct tree* nctemp8384= p;
nctempchar1* nctemp8386= rval;
int nctemp8389=CodeEs(nctemp8384,nctemp8386);
struct tree* nctemp8391= p;
struct nctempchar1 *nctemp8395;
static struct nctempchar1 nctemp8396 = {{ 3}, (char*)".i\0"};
nctemp8395=&nctemp8396;
nctempchar1* nctemp8393= nctemp8395;
int nctemp8397=CodeEs(nctemp8391,nctemp8393);
struct tree* nctemp8399= p;
struct nctempchar1 *nctemp8403;
static struct nctempchar1 nctemp8404 = {{ 4}, (char*)";\n\0"};
nctemp8403=&nctemp8404;
nctempchar1* nctemp8401= nctemp8403;
int nctemp8405=CodeEs(nctemp8399,nctemp8401);
}
else{
nctempchar1* nctemp8409= opr;
struct nctempchar1 *nctemp8414;
static struct nctempchar1 nctemp8415 = {{ 2}, (char*)"/\0"};
nctemp8414=&nctemp8415;
nctempchar1* nctemp8412= nctemp8414;
int nctemp8416=LibeStrcmp(nctemp8409,nctemp8412);
int nctemp8406 = (nctemp8416 ==1);
if(nctemp8406)
{
struct tree* nctemp8419= p;
nctempchar1* nctemp8421= type;
int nctemp8424=CodeEs(nctemp8419,nctemp8421);
struct tree* nctemp8426= p;
struct nctempchar1 *nctemp8430;
static struct nctempchar1 nctemp8431 = {{ 2}, (char*)" \0"};
nctemp8430=&nctemp8431;
nctempchar1* nctemp8428= nctemp8430;
int nctemp8432=CodeEs(nctemp8426,nctemp8428);
struct tree* nctemp8434= p;
nctempchar1* nctemp8436= tempr;
int nctemp8439=CodeEs(nctemp8434,nctemp8436);
struct tree* nctemp8441= p;
struct nctempchar1 *nctemp8445;
static struct nctempchar1 nctemp8446 = {{ 3}, (char*)".r\0"};
nctemp8445=&nctemp8446;
nctempchar1* nctemp8443= nctemp8445;
int nctemp8447=CodeEs(nctemp8441,nctemp8443);
struct tree* nctemp8449= p;
struct nctempchar1 *nctemp8453;
static struct nctempchar1 nctemp8454 = {{ 4}, (char*)" = \0"};
nctemp8453=&nctemp8454;
nctempchar1* nctemp8451= nctemp8453;
int nctemp8455=CodeEs(nctemp8449,nctemp8451);
struct tree* nctemp8457= p;
struct nctempchar1 *nctemp8461;
static struct nctempchar1 nctemp8462 = {{ 2}, (char*)"(\0"};
nctemp8461=&nctemp8462;
nctempchar1* nctemp8459= nctemp8461;
int nctemp8463=CodeEs(nctemp8457,nctemp8459);
struct tree* nctemp8465= p;
nctempchar1* nctemp8467= lval;
int nctemp8470=CodeEs(nctemp8465,nctemp8467);
struct tree* nctemp8472= p;
struct nctempchar1 *nctemp8476;
static struct nctempchar1 nctemp8477 = {{ 3}, (char*)".r\0"};
nctemp8476=&nctemp8477;
nctempchar1* nctemp8474= nctemp8476;
int nctemp8478=CodeEs(nctemp8472,nctemp8474);
struct tree* nctemp8480= p;
struct nctempchar1 *nctemp8484;
static struct nctempchar1 nctemp8485 = {{ 2}, (char*)"*\0"};
nctemp8484=&nctemp8485;
nctempchar1* nctemp8482= nctemp8484;
int nctemp8486=CodeEs(nctemp8480,nctemp8482);
struct tree* nctemp8488= p;
nctempchar1* nctemp8490= rval;
int nctemp8493=CodeEs(nctemp8488,nctemp8490);
struct tree* nctemp8495= p;
struct nctempchar1 *nctemp8499;
static struct nctempchar1 nctemp8500 = {{ 3}, (char*)".r\0"};
nctemp8499=&nctemp8500;
nctempchar1* nctemp8497= nctemp8499;
int nctemp8501=CodeEs(nctemp8495,nctemp8497);
struct tree* nctemp8503= p;
struct nctempchar1 *nctemp8507;
static struct nctempchar1 nctemp8508 = {{ 2}, (char*)"+\0"};
nctemp8507=&nctemp8508;
nctempchar1* nctemp8505= nctemp8507;
int nctemp8509=CodeEs(nctemp8503,nctemp8505);
struct tree* nctemp8511= p;
nctempchar1* nctemp8513= lval;
int nctemp8516=CodeEs(nctemp8511,nctemp8513);
struct tree* nctemp8518= p;
struct nctempchar1 *nctemp8522;
static struct nctempchar1 nctemp8523 = {{ 3}, (char*)".i\0"};
nctemp8522=&nctemp8523;
nctempchar1* nctemp8520= nctemp8522;
int nctemp8524=CodeEs(nctemp8518,nctemp8520);
struct tree* nctemp8526= p;
struct nctempchar1 *nctemp8530;
static struct nctempchar1 nctemp8531 = {{ 2}, (char*)"*\0"};
nctemp8530=&nctemp8531;
nctempchar1* nctemp8528= nctemp8530;
int nctemp8532=CodeEs(nctemp8526,nctemp8528);
struct tree* nctemp8534= p;
nctempchar1* nctemp8536= rval;
int nctemp8539=CodeEs(nctemp8534,nctemp8536);
struct tree* nctemp8541= p;
struct nctempchar1 *nctemp8545;
static struct nctempchar1 nctemp8546 = {{ 3}, (char*)".i\0"};
nctemp8545=&nctemp8546;
nctempchar1* nctemp8543= nctemp8545;
int nctemp8547=CodeEs(nctemp8541,nctemp8543);
struct tree* nctemp8549= p;
struct nctempchar1 *nctemp8553;
static struct nctempchar1 nctemp8554 = {{ 4}, (char*)")/(\0"};
nctemp8553=&nctemp8554;
nctempchar1* nctemp8551= nctemp8553;
int nctemp8555=CodeEs(nctemp8549,nctemp8551);
struct tree* nctemp8557= p;
nctempchar1* nctemp8559= rval;
int nctemp8562=CodeEs(nctemp8557,nctemp8559);
struct tree* nctemp8564= p;
struct nctempchar1 *nctemp8568;
static struct nctempchar1 nctemp8569 = {{ 3}, (char*)".r\0"};
nctemp8568=&nctemp8569;
nctempchar1* nctemp8566= nctemp8568;
int nctemp8570=CodeEs(nctemp8564,nctemp8566);
struct tree* nctemp8572= p;
struct nctempchar1 *nctemp8576;
static struct nctempchar1 nctemp8577 = {{ 2}, (char*)"*\0"};
nctemp8576=&nctemp8577;
nctempchar1* nctemp8574= nctemp8576;
int nctemp8578=CodeEs(nctemp8572,nctemp8574);
struct tree* nctemp8580= p;
nctempchar1* nctemp8582= rval;
int nctemp8585=CodeEs(nctemp8580,nctemp8582);
struct tree* nctemp8587= p;
struct nctempchar1 *nctemp8591;
static struct nctempchar1 nctemp8592 = {{ 3}, (char*)".r\0"};
nctemp8591=&nctemp8592;
nctempchar1* nctemp8589= nctemp8591;
int nctemp8593=CodeEs(nctemp8587,nctemp8589);
struct tree* nctemp8595= p;
struct nctempchar1 *nctemp8599;
static struct nctempchar1 nctemp8600 = {{ 2}, (char*)"+\0"};
nctemp8599=&nctemp8600;
nctempchar1* nctemp8597= nctemp8599;
int nctemp8601=CodeEs(nctemp8595,nctemp8597);
struct tree* nctemp8603= p;
nctempchar1* nctemp8605= rval;
int nctemp8608=CodeEs(nctemp8603,nctemp8605);
struct tree* nctemp8610= p;
struct nctempchar1 *nctemp8614;
static struct nctempchar1 nctemp8615 = {{ 3}, (char*)".i\0"};
nctemp8614=&nctemp8615;
nctempchar1* nctemp8612= nctemp8614;
int nctemp8616=CodeEs(nctemp8610,nctemp8612);
struct tree* nctemp8618= p;
struct nctempchar1 *nctemp8622;
static struct nctempchar1 nctemp8623 = {{ 2}, (char*)"*\0"};
nctemp8622=&nctemp8623;
nctempchar1* nctemp8620= nctemp8622;
int nctemp8624=CodeEs(nctemp8618,nctemp8620);
struct tree* nctemp8626= p;
nctempchar1* nctemp8628= rval;
int nctemp8631=CodeEs(nctemp8626,nctemp8628);
struct tree* nctemp8633= p;
struct nctempchar1 *nctemp8637;
static struct nctempchar1 nctemp8638 = {{ 3}, (char*)".i\0"};
nctemp8637=&nctemp8638;
nctempchar1* nctemp8635= nctemp8637;
int nctemp8639=CodeEs(nctemp8633,nctemp8635);
struct tree* nctemp8641= p;
struct nctempchar1 *nctemp8645;
static struct nctempchar1 nctemp8646 = {{ 5}, (char*)");\n\0"};
nctemp8645=&nctemp8646;
nctempchar1* nctemp8643= nctemp8645;
int nctemp8647=CodeEs(nctemp8641,nctemp8643);
struct tree* nctemp8649= p;
nctempchar1* nctemp8651= type;
int nctemp8654=CodeEs(nctemp8649,nctemp8651);
struct tree* nctemp8656= p;
struct nctempchar1 *nctemp8660;
static struct nctempchar1 nctemp8661 = {{ 2}, (char*)" \0"};
nctemp8660=&nctemp8661;
nctempchar1* nctemp8658= nctemp8660;
int nctemp8662=CodeEs(nctemp8656,nctemp8658);
struct tree* nctemp8664= p;
nctempchar1* nctemp8666= tempr;
int nctemp8669=CodeEs(nctemp8664,nctemp8666);
struct tree* nctemp8671= p;
struct nctempchar1 *nctemp8675;
static struct nctempchar1 nctemp8676 = {{ 3}, (char*)".i\0"};
nctemp8675=&nctemp8676;
nctempchar1* nctemp8673= nctemp8675;
int nctemp8677=CodeEs(nctemp8671,nctemp8673);
struct tree* nctemp8679= p;
struct nctempchar1 *nctemp8683;
static struct nctempchar1 nctemp8684 = {{ 4}, (char*)" = \0"};
nctemp8683=&nctemp8684;
nctempchar1* nctemp8681= nctemp8683;
int nctemp8685=CodeEs(nctemp8679,nctemp8681);
struct tree* nctemp8687= p;
struct nctempchar1 *nctemp8691;
static struct nctempchar1 nctemp8692 = {{ 2}, (char*)"(\0"};
nctemp8691=&nctemp8692;
nctempchar1* nctemp8689= nctemp8691;
int nctemp8693=CodeEs(nctemp8687,nctemp8689);
struct tree* nctemp8695= p;
nctempchar1* nctemp8697= lval;
int nctemp8700=CodeEs(nctemp8695,nctemp8697);
struct tree* nctemp8702= p;
struct nctempchar1 *nctemp8706;
static struct nctempchar1 nctemp8707 = {{ 3}, (char*)".i\0"};
nctemp8706=&nctemp8707;
nctempchar1* nctemp8704= nctemp8706;
int nctemp8708=CodeEs(nctemp8702,nctemp8704);
struct tree* nctemp8710= p;
struct nctempchar1 *nctemp8714;
static struct nctempchar1 nctemp8715 = {{ 2}, (char*)"*\0"};
nctemp8714=&nctemp8715;
nctempchar1* nctemp8712= nctemp8714;
int nctemp8716=CodeEs(nctemp8710,nctemp8712);
struct tree* nctemp8718= p;
nctempchar1* nctemp8720= rval;
int nctemp8723=CodeEs(nctemp8718,nctemp8720);
struct tree* nctemp8725= p;
struct nctempchar1 *nctemp8729;
static struct nctempchar1 nctemp8730 = {{ 3}, (char*)".r\0"};
nctemp8729=&nctemp8730;
nctempchar1* nctemp8727= nctemp8729;
int nctemp8731=CodeEs(nctemp8725,nctemp8727);
struct tree* nctemp8733= p;
struct nctempchar1 *nctemp8737;
static struct nctempchar1 nctemp8738 = {{ 2}, (char*)"-\0"};
nctemp8737=&nctemp8738;
nctempchar1* nctemp8735= nctemp8737;
int nctemp8739=CodeEs(nctemp8733,nctemp8735);
struct tree* nctemp8741= p;
nctempchar1* nctemp8743= lval;
int nctemp8746=CodeEs(nctemp8741,nctemp8743);
struct tree* nctemp8748= p;
struct nctempchar1 *nctemp8752;
static struct nctempchar1 nctemp8753 = {{ 3}, (char*)".r\0"};
nctemp8752=&nctemp8753;
nctempchar1* nctemp8750= nctemp8752;
int nctemp8754=CodeEs(nctemp8748,nctemp8750);
struct tree* nctemp8756= p;
struct nctempchar1 *nctemp8760;
static struct nctempchar1 nctemp8761 = {{ 2}, (char*)"*\0"};
nctemp8760=&nctemp8761;
nctempchar1* nctemp8758= nctemp8760;
int nctemp8762=CodeEs(nctemp8756,nctemp8758);
struct tree* nctemp8764= p;
nctempchar1* nctemp8766= rval;
int nctemp8769=CodeEs(nctemp8764,nctemp8766);
struct tree* nctemp8771= p;
struct nctempchar1 *nctemp8775;
static struct nctempchar1 nctemp8776 = {{ 3}, (char*)".i\0"};
nctemp8775=&nctemp8776;
nctempchar1* nctemp8773= nctemp8775;
int nctemp8777=CodeEs(nctemp8771,nctemp8773);
struct tree* nctemp8779= p;
struct nctempchar1 *nctemp8783;
static struct nctempchar1 nctemp8784 = {{ 4}, (char*)")/(\0"};
nctemp8783=&nctemp8784;
nctempchar1* nctemp8781= nctemp8783;
int nctemp8785=CodeEs(nctemp8779,nctemp8781);
struct tree* nctemp8787= p;
nctempchar1* nctemp8789= rval;
int nctemp8792=CodeEs(nctemp8787,nctemp8789);
struct tree* nctemp8794= p;
struct nctempchar1 *nctemp8798;
static struct nctempchar1 nctemp8799 = {{ 3}, (char*)".r\0"};
nctemp8798=&nctemp8799;
nctempchar1* nctemp8796= nctemp8798;
int nctemp8800=CodeEs(nctemp8794,nctemp8796);
struct tree* nctemp8802= p;
struct nctempchar1 *nctemp8806;
static struct nctempchar1 nctemp8807 = {{ 2}, (char*)"*\0"};
nctemp8806=&nctemp8807;
nctempchar1* nctemp8804= nctemp8806;
int nctemp8808=CodeEs(nctemp8802,nctemp8804);
struct tree* nctemp8810= p;
nctempchar1* nctemp8812= rval;
int nctemp8815=CodeEs(nctemp8810,nctemp8812);
struct tree* nctemp8817= p;
struct nctempchar1 *nctemp8821;
static struct nctempchar1 nctemp8822 = {{ 3}, (char*)".r\0"};
nctemp8821=&nctemp8822;
nctempchar1* nctemp8819= nctemp8821;
int nctemp8823=CodeEs(nctemp8817,nctemp8819);
struct tree* nctemp8825= p;
struct nctempchar1 *nctemp8829;
static struct nctempchar1 nctemp8830 = {{ 2}, (char*)"+\0"};
nctemp8829=&nctemp8830;
nctempchar1* nctemp8827= nctemp8829;
int nctemp8831=CodeEs(nctemp8825,nctemp8827);
struct tree* nctemp8833= p;
nctempchar1* nctemp8835= rval;
int nctemp8838=CodeEs(nctemp8833,nctemp8835);
struct tree* nctemp8840= p;
struct nctempchar1 *nctemp8844;
static struct nctempchar1 nctemp8845 = {{ 3}, (char*)".i\0"};
nctemp8844=&nctemp8845;
nctempchar1* nctemp8842= nctemp8844;
int nctemp8846=CodeEs(nctemp8840,nctemp8842);
struct tree* nctemp8848= p;
struct nctempchar1 *nctemp8852;
static struct nctempchar1 nctemp8853 = {{ 2}, (char*)"*\0"};
nctemp8852=&nctemp8853;
nctempchar1* nctemp8850= nctemp8852;
int nctemp8854=CodeEs(nctemp8848,nctemp8850);
struct tree* nctemp8856= p;
nctempchar1* nctemp8858= rval;
int nctemp8861=CodeEs(nctemp8856,nctemp8858);
struct tree* nctemp8863= p;
struct nctempchar1 *nctemp8867;
static struct nctempchar1 nctemp8868 = {{ 3}, (char*)".i\0"};
nctemp8867=&nctemp8868;
nctempchar1* nctemp8865= nctemp8867;
int nctemp8869=CodeEs(nctemp8863,nctemp8865);
struct tree* nctemp8871= p;
struct nctempchar1 *nctemp8875;
static struct nctempchar1 nctemp8876 = {{ 5}, (char*)");\n\0"};
nctemp8875=&nctemp8876;
nctempchar1* nctemp8873= nctemp8875;
int nctemp8877=CodeEs(nctemp8871,nctemp8873);
}
}
}
}
else{
struct tree* nctemp8879= p;
nctempchar1* nctemp8881= type;
int nctemp8884=CodeEs(nctemp8879,nctemp8881);
struct tree* nctemp8886= p;
struct nctempchar1 *nctemp8890;
static struct nctempchar1 nctemp8891 = {{ 2}, (char*)" \0"};
nctemp8890=&nctemp8891;
nctempchar1* nctemp8888= nctemp8890;
int nctemp8892=CodeEs(nctemp8886,nctemp8888);
struct tree* nctemp8894= p;
nctempchar1* nctemp8896= tempr;
int nctemp8899=CodeEs(nctemp8894,nctemp8896);
struct tree* nctemp8901= p;
struct nctempchar1 *nctemp8905;
static struct nctempchar1 nctemp8906 = {{ 4}, (char*)" = \0"};
nctemp8905=&nctemp8906;
nctempchar1* nctemp8903= nctemp8905;
int nctemp8907=CodeEs(nctemp8901,nctemp8903);
struct tree* nctemp8909= p;
nctempchar1* nctemp8911= lval;
int nctemp8914=CodeEs(nctemp8909,nctemp8911);
struct tree* nctemp8916= p;
struct nctempchar1 *nctemp8920;
static struct nctempchar1 nctemp8921 = {{ 2}, (char*)" \0"};
nctemp8920=&nctemp8921;
nctempchar1* nctemp8918= nctemp8920;
int nctemp8922=CodeEs(nctemp8916,nctemp8918);
struct tree* nctemp8924= p;
struct tree* nctemp8928= p;
nctempchar1* nctemp8930=PtreeGetdef(nctemp8928);
nctempchar1* nctemp8926= nctemp8930;
int nctemp8931=CodeEs(nctemp8924,nctemp8926);
struct tree* nctemp8933= p;
struct nctempchar1 *nctemp8937;
static struct nctempchar1 nctemp8938 = {{ 2}, (char*)" \0"};
nctemp8937=&nctemp8938;
nctempchar1* nctemp8935= nctemp8937;
int nctemp8939=CodeEs(nctemp8933,nctemp8935);
struct tree* nctemp8941= p;
nctempchar1* nctemp8943= rval;
int nctemp8946=CodeEs(nctemp8941,nctemp8943);
struct tree* nctemp8948= p;
struct nctempchar1 *nctemp8952;
static struct nctempchar1 nctemp8953 = {{ 4}, (char*)";\n\0"};
nctemp8952=&nctemp8953;
nctempchar1* nctemp8950= nctemp8952;
int nctemp8954=CodeEs(nctemp8948,nctemp8950);
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
struct tree* nctemp8962= p;
nctempchar1* nctemp8964=PtreeGetname(nctemp8962);
nctempchar1* nctemp8960= nctemp8964;
struct nctempchar1 *nctemp8967;
static struct nctempchar1 nctemp8968 = {{ 8}, (char*)"binexpr\0"};
nctemp8967=&nctemp8968;
nctempchar1* nctemp8965= nctemp8967;
int nctemp8969=LibeStrcmp(nctemp8960,nctemp8965);
int nctemp8957 = (nctemp8969 ==1);
if(nctemp8957)
{
struct tree* nctemp8976= p;
nctempchar1* nctemp8978=PtreeGetype(nctemp8976);
type=nctemp8978;
nctempchar1* nctemp8984=CodeMktemp();
tempr=nctemp8984;
nctempchar1* nctemp8990=CodeMktemp();
tempi=nctemp8990;
struct tree* nctemp8995= p;
struct tree* nctemp8997=PtreeMvchild(nctemp8995);
np =nctemp8997;
struct tree* nctemp9003= np;
nctempchar1* nctemp9005=CodeUnexpr(nctemp9003);
lval=nctemp9005;
struct tree* nctemp9013= np;
struct tree* nctemp9015=PtreeMvsister(nctemp9013);
struct tree* nctemp9011= nctemp9015;
nctempchar1* nctemp9016=CodeUnexpr(nctemp9011);
rval=nctemp9016;
struct tree* nctemp9031= p;
nctempchar1* nctemp9033=PtreeGetdef(nctemp9031);
nctempchar1* nctemp9029= nctemp9033;
struct nctempchar1 *nctemp9036;
static struct nctempchar1 nctemp9037 = {{ 2}, (char*)"+\0"};
nctemp9036=&nctemp9037;
nctempchar1* nctemp9034= nctemp9036;
int nctemp9038=LibeStrcmp(nctemp9029,nctemp9034);
int nctemp9026 = (nctemp9038 ==1);
struct tree* nctemp9046= p;
nctempchar1* nctemp9048=PtreeGetdef(nctemp9046);
nctempchar1* nctemp9044= nctemp9048;
struct nctempchar1 *nctemp9051;
static struct nctempchar1 nctemp9052 = {{ 2}, (char*)"-\0"};
nctemp9051=&nctemp9052;
nctempchar1* nctemp9049= nctemp9051;
int nctemp9053=LibeStrcmp(nctemp9044,nctemp9049);
int nctemp9041 = (nctemp9053 ==1);
int nctemp9023 = (nctemp9026 || nctemp9041);
struct tree* nctemp9061= p;
nctempchar1* nctemp9063=PtreeGetdef(nctemp9061);
nctempchar1* nctemp9059= nctemp9063;
struct nctempchar1 *nctemp9066;
static struct nctempchar1 nctemp9067 = {{ 2}, (char*)"*\0"};
nctemp9066=&nctemp9067;
nctempchar1* nctemp9064= nctemp9066;
int nctemp9068=LibeStrcmp(nctemp9059,nctemp9064);
int nctemp9056 = (nctemp9068 ==1);
int nctemp9020 = (nctemp9023 || nctemp9056);
struct tree* nctemp9076= p;
nctempchar1* nctemp9078=PtreeGetdef(nctemp9076);
nctempchar1* nctemp9074= nctemp9078;
struct nctempchar1 *nctemp9081;
static struct nctempchar1 nctemp9082 = {{ 2}, (char*)"/\0"};
nctemp9081=&nctemp9082;
nctempchar1* nctemp9079= nctemp9081;
int nctemp9083=LibeStrcmp(nctemp9074,nctemp9079);
int nctemp9071 = (nctemp9083 ==1);
int nctemp9017 = (nctemp9020 || nctemp9071);
if(nctemp9017)
{
struct tree* nctemp9086= p;
nctempchar1* nctemp9088= lval;
nctempchar1* nctemp9091= rval;
nctempchar1* nctemp9094=CodeAddexpr(nctemp9086,nctemp9088,nctemp9091);
return nctemp9094;
}
else{
struct tree* nctemp9100= p;
nctempchar1* nctemp9102=PtreeGetdef(nctemp9100);
nctempchar1* nctemp9098= nctemp9102;
struct nctempchar1 *nctemp9105;
static struct nctempchar1 nctemp9106 = {{ 2}, (char*)"=\0"};
nctemp9105=&nctemp9106;
nctempchar1* nctemp9103= nctemp9105;
int nctemp9107=LibeStrcmp(nctemp9098,nctemp9103);
int nctemp9095 = (nctemp9107 ==1);
if(nctemp9095)
{
struct tree* nctemp9120= p;
nctempchar1* nctemp9122=PtreeGetype(nctemp9120);
nctempchar1* nctemp9118= nctemp9122;
struct nctempchar1 *nctemp9125;
static struct nctempchar1 nctemp9126 = {{ 8}, (char*)"complex\0"};
nctemp9125=&nctemp9126;
nctempchar1* nctemp9123= nctemp9125;
int nctemp9127=LibeStrcmp(nctemp9118,nctemp9123);
int nctemp9115 = (nctemp9127 ==1);
struct tree* nctemp9135= p;
nctempchar1* nctemp9137=PtreeGetref(nctemp9135);
nctempchar1* nctemp9133= nctemp9137;
struct nctempchar1 *nctemp9140;
static struct nctempchar1 nctemp9141 = {{ 5}, (char*)"aref\0"};
nctemp9140=&nctemp9141;
nctempchar1* nctemp9138= nctemp9140;
int nctemp9142=LibeStrcmp(nctemp9133,nctemp9138);
int nctemp9130 = (nctemp9142 ==0);
int nctemp9112 = (nctemp9115 && nctemp9130);
struct tree* nctemp9150= p;
nctempchar1* nctemp9152=PtreeGetref(nctemp9150);
nctempchar1* nctemp9148= nctemp9152;
struct nctempchar1 *nctemp9155;
static struct nctempchar1 nctemp9156 = {{ 5}, (char*)"sref\0"};
nctemp9155=&nctemp9156;
nctempchar1* nctemp9153= nctemp9155;
int nctemp9157=LibeStrcmp(nctemp9148,nctemp9153);
int nctemp9145 = (nctemp9157 ==0);
int nctemp9109 = (nctemp9112 && nctemp9145);
if(nctemp9109)
{
struct tree* nctemp9160= p;
nctempchar1* nctemp9162= lval;
int nctemp9165=CodeEs(nctemp9160,nctemp9162);
struct tree* nctemp9167= p;
struct nctempchar1 *nctemp9171;
static struct nctempchar1 nctemp9172 = {{ 4}, (char*)".r \0"};
nctemp9171=&nctemp9172;
nctempchar1* nctemp9169= nctemp9171;
int nctemp9173=CodeEs(nctemp9167,nctemp9169);
struct tree* nctemp9175= p;
struct nctempchar1 *nctemp9179;
static struct nctempchar1 nctemp9180 = {{ 2}, (char*)"=\0"};
nctemp9179=&nctemp9180;
nctempchar1* nctemp9177= nctemp9179;
int nctemp9181=CodeEs(nctemp9175,nctemp9177);
struct tree* nctemp9183= p;
nctempchar1* nctemp9185= rval;
int nctemp9188=CodeEs(nctemp9183,nctemp9185);
struct tree* nctemp9190= p;
struct nctempchar1 *nctemp9194;
static struct nctempchar1 nctemp9195 = {{ 3}, (char*)".r\0"};
nctemp9194=&nctemp9195;
nctempchar1* nctemp9192= nctemp9194;
int nctemp9196=CodeEs(nctemp9190,nctemp9192);
struct tree* nctemp9198= p;
struct nctempchar1 *nctemp9202;
static struct nctempchar1 nctemp9203 = {{ 4}, (char*)";\n\0"};
nctemp9202=&nctemp9203;
nctempchar1* nctemp9200= nctemp9202;
int nctemp9204=CodeEs(nctemp9198,nctemp9200);
struct tree* nctemp9206= p;
nctempchar1* nctemp9208= lval;
int nctemp9211=CodeEs(nctemp9206,nctemp9208);
struct tree* nctemp9213= p;
struct nctempchar1 *nctemp9217;
static struct nctempchar1 nctemp9218 = {{ 3}, (char*)".i\0"};
nctemp9217=&nctemp9218;
nctempchar1* nctemp9215= nctemp9217;
int nctemp9219=CodeEs(nctemp9213,nctemp9215);
struct tree* nctemp9221= p;
struct nctempchar1 *nctemp9225;
static struct nctempchar1 nctemp9226 = {{ 2}, (char*)"=\0"};
nctemp9225=&nctemp9226;
nctempchar1* nctemp9223= nctemp9225;
int nctemp9227=CodeEs(nctemp9221,nctemp9223);
struct tree* nctemp9229= p;
nctempchar1* nctemp9231= rval;
int nctemp9234=CodeEs(nctemp9229,nctemp9231);
struct tree* nctemp9236= p;
struct nctempchar1 *nctemp9240;
static struct nctempchar1 nctemp9241 = {{ 3}, (char*)".i\0"};
nctemp9240=&nctemp9241;
nctempchar1* nctemp9238= nctemp9240;
int nctemp9242=CodeEs(nctemp9236,nctemp9238);
struct tree* nctemp9244= p;
struct nctempchar1 *nctemp9248;
static struct nctempchar1 nctemp9249 = {{ 4}, (char*)";\n\0"};
nctemp9248=&nctemp9249;
nctempchar1* nctemp9246= nctemp9248;
int nctemp9250=CodeEs(nctemp9244,nctemp9246);
return lval;
}
else{
struct tree* nctemp9258= np;
nctempchar1* nctemp9260=PtreeGetref(nctemp9258);
nctempchar1* nctemp9256= nctemp9260;
struct nctempchar1 *nctemp9263;
static struct nctempchar1 nctemp9264 = {{ 5}, (char*)"aref\0"};
nctemp9263=&nctemp9264;
nctempchar1* nctemp9261= nctemp9263;
int nctemp9265=LibeStrcmp(nctemp9256,nctemp9261);
int nctemp9253 = (nctemp9265 ==1);
if(nctemp9253)
{
struct tree* nctemp9274= np;
struct tree* nctemp9276=PtreeMvsister(nctemp9274);
struct tree* nctemp9272= nctemp9276;
nctempchar1* nctemp9277=PtreeGetname(nctemp9272);
nctempchar1* nctemp9270= nctemp9277;
struct nctempchar1 *nctemp9280;
static struct nctempchar1 nctemp9281 = {{ 10}, (char*)"iconstant\0"};
nctemp9280=&nctemp9281;
nctempchar1* nctemp9278= nctemp9280;
int nctemp9282=LibeStrcmp(nctemp9270,nctemp9278);
struct tree* nctemp9288= np;
struct tree* nctemp9290=PtreeMvsister(nctemp9288);
struct tree* nctemp9286= nctemp9290;
nctempchar1* nctemp9291=PtreeGetdef(nctemp9286);
nctempchar1* nctemp9284= nctemp9291;
struct nctempchar1 *nctemp9294;
static struct nctempchar1 nctemp9295 = {{ 2}, (char*)"0\0"};
nctemp9294=&nctemp9295;
nctempchar1* nctemp9292= nctemp9294;
int nctemp9296=LibeStrcmp(nctemp9284,nctemp9292);
int nctemp9267 = (nctemp9282 && nctemp9296);
if(nctemp9267)
{
struct tree* nctemp9298= p;
nctempchar1* nctemp9300= lval;
int nctemp9303=CodeEs(nctemp9298,nctemp9300);
struct tree* nctemp9305= p;
struct nctempchar1 *nctemp9309;
static struct nctempchar1 nctemp9310 = {{ 3}, (char*)"=(\0"};
nctemp9309=&nctemp9310;
nctempchar1* nctemp9307= nctemp9309;
int nctemp9311=CodeEs(nctemp9305,nctemp9307);
struct tree* nctemp9313= p;
nctempchar1* nctemp9315= rval;
int nctemp9318=CodeEs(nctemp9313,nctemp9315);
struct tree* nctemp9320= p;
struct nctempchar1 *nctemp9324;
static struct nctempchar1 nctemp9325 = {{ 5}, (char*)");\n\0"};
nctemp9324=&nctemp9325;
nctempchar1* nctemp9322= nctemp9324;
int nctemp9326=CodeEs(nctemp9320,nctemp9322);
return lval;
}
else{
struct tree* nctemp9330= p;
nctempchar1* nctemp9332= lval;
int nctemp9335=CodeEs(nctemp9330,nctemp9332);
struct tree* nctemp9337= p;
struct nctempchar1 *nctemp9341;
static struct nctempchar1 nctemp9342 = {{ 2}, (char*)"=\0"};
nctemp9341=&nctemp9342;
nctempchar1* nctemp9339= nctemp9341;
int nctemp9343=CodeEs(nctemp9337,nctemp9339);
struct tree* nctemp9345= p;
nctempchar1* nctemp9347= rval;
int nctemp9350=CodeEs(nctemp9345,nctemp9347);
struct tree* nctemp9352= p;
struct nctempchar1 *nctemp9356;
static struct nctempchar1 nctemp9357 = {{ 4}, (char*)";\n\0"};
nctemp9356=&nctemp9357;
nctempchar1* nctemp9354= nctemp9356;
int nctemp9358=CodeEs(nctemp9352,nctemp9354);
return lval;
}
}
else{
struct tree* nctemp9362= p;
nctempchar1* nctemp9364= lval;
int nctemp9367=CodeEs(nctemp9362,nctemp9364);
struct tree* nctemp9369= p;
struct nctempchar1 *nctemp9373;
static struct nctempchar1 nctemp9374 = {{ 2}, (char*)" \0"};
nctemp9373=&nctemp9374;
nctempchar1* nctemp9371= nctemp9373;
int nctemp9375=CodeEs(nctemp9369,nctemp9371);
struct tree* nctemp9377= p;
struct nctempchar1 *nctemp9381;
static struct nctempchar1 nctemp9382 = {{ 2}, (char*)"=\0"};
nctemp9381=&nctemp9382;
nctempchar1* nctemp9379= nctemp9381;
int nctemp9383=CodeEs(nctemp9377,nctemp9379);
struct tree* nctemp9385= p;
nctempchar1* nctemp9387= rval;
int nctemp9390=CodeEs(nctemp9385,nctemp9387);
struct tree* nctemp9392= p;
struct nctempchar1 *nctemp9396;
static struct nctempchar1 nctemp9397 = {{ 4}, (char*)";\n\0"};
nctemp9396=&nctemp9397;
nctempchar1* nctemp9394= nctemp9396;
int nctemp9398=CodeEs(nctemp9392,nctemp9394);
return lval;
}
}
}
else{
struct tree* nctemp9409= p;
nctempchar1* nctemp9411=PtreeGetdef(nctemp9409);
nctempchar1* nctemp9407= nctemp9411;
struct nctempchar1 *nctemp9414;
static struct nctempchar1 nctemp9415 = {{ 3}, (char*)"==\0"};
nctemp9414=&nctemp9415;
nctempchar1* nctemp9412= nctemp9414;
int nctemp9416=LibeStrcmp(nctemp9407,nctemp9412);
int nctemp9404 = (nctemp9416 ==1);
struct tree* nctemp9424= p;
nctempchar1* nctemp9426=PtreeGetdef(nctemp9424);
nctempchar1* nctemp9422= nctemp9426;
struct nctempchar1 *nctemp9429;
static struct nctempchar1 nctemp9430 = {{ 3}, (char*)"!=\0"};
nctemp9429=&nctemp9430;
nctempchar1* nctemp9427= nctemp9429;
int nctemp9431=LibeStrcmp(nctemp9422,nctemp9427);
int nctemp9419 = (nctemp9431 ==1);
int nctemp9401 = (nctemp9404 || nctemp9419);
if(nctemp9401)
{
struct tree* nctemp9438= np;
nctempchar1* nctemp9440=PtreeGetref(nctemp9438);
nctempchar1* nctemp9436= nctemp9440;
struct nctempchar1 *nctemp9443;
static struct nctempchar1 nctemp9444 = {{ 5}, (char*)"aref\0"};
nctemp9443=&nctemp9444;
nctempchar1* nctemp9441= nctemp9443;
int nctemp9445=LibeStrcmp(nctemp9436,nctemp9441);
int nctemp9433 = (nctemp9445 ==1);
if(nctemp9433)
{
sp =np;
struct tree* nctemp9458= np;
struct tree* nctemp9460=PtreeMvsister(nctemp9458);
struct tree* nctemp9456= nctemp9460;
nctempchar1* nctemp9461=PtreeGetname(nctemp9456);
nctempchar1* nctemp9454= nctemp9461;
struct nctempchar1 *nctemp9464;
static struct nctempchar1 nctemp9465 = {{ 10}, (char*)"iconstant\0"};
nctemp9464=&nctemp9465;
nctempchar1* nctemp9462= nctemp9464;
int nctemp9466=LibeStrcmp(nctemp9454,nctemp9462);
struct tree* nctemp9472= np;
struct tree* nctemp9474=PtreeMvsister(nctemp9472);
struct tree* nctemp9470= nctemp9474;
nctempchar1* nctemp9475=PtreeGetdef(nctemp9470);
nctempchar1* nctemp9468= nctemp9475;
struct nctempchar1 *nctemp9478;
static struct nctempchar1 nctemp9479 = {{ 2}, (char*)"0\0"};
nctemp9478=&nctemp9479;
nctempchar1* nctemp9476= nctemp9478;
int nctemp9480=LibeStrcmp(nctemp9468,nctemp9476);
int nctemp9451 = (nctemp9466 && nctemp9480);
if(nctemp9451)
{
struct tree* nctemp9482= p;
struct nctempchar1 *nctemp9486;
static struct nctempchar1 nctemp9487 = {{ 7}, (char*)"nctemp\0"};
nctemp9486=&nctemp9487;
nctempchar1* nctemp9484= nctemp9486;
int nctemp9488=CodeEs(nctemp9482,nctemp9484);
struct tree* nctemp9490= p;
struct tree* nctemp9494= sp;
nctempchar1* nctemp9496=PtreeGetype(nctemp9494);
nctempchar1* nctemp9492= nctemp9496;
int nctemp9497=CodeEs(nctemp9490,nctemp9492);
struct tree* nctemp9501= sp;
int nctemp9503=PtreeGetrank(nctemp9501);
int nctemp9499= nctemp9503;
int nctemp9504=CodeEd(nctemp9499);
struct tree* nctemp9506= p;
struct nctempchar1 *nctemp9510;
static struct nctempchar1 nctemp9511 = {{ 3}, (char*)" *\0"};
nctemp9510=&nctemp9511;
nctempchar1* nctemp9508= nctemp9510;
int nctemp9512=CodeEs(nctemp9506,nctemp9508);
struct tree* nctemp9514= p;
nctempchar1* nctemp9516= tempi;
int nctemp9519=CodeEs(nctemp9514,nctemp9516);
struct tree* nctemp9521= p;
struct nctempchar1 *nctemp9525;
static struct nctempchar1 nctemp9526 = {{ 3}, (char*)" =\0"};
nctemp9525=&nctemp9526;
nctempchar1* nctemp9523= nctemp9525;
int nctemp9527=CodeEs(nctemp9521,nctemp9523);
struct tree* nctemp9529= p;
nctempchar1* nctemp9531= lval;
int nctemp9534=CodeEs(nctemp9529,nctemp9531);
struct tree* nctemp9536= p;
struct nctempchar1 *nctemp9540;
static struct nctempchar1 nctemp9541 = {{ 4}, (char*)";\n\0"};
nctemp9540=&nctemp9541;
nctempchar1* nctemp9538= nctemp9540;
int nctemp9542=CodeEs(nctemp9536,nctemp9538);
struct tree* nctemp9544= p;
nctempchar1* nctemp9546= type;
int nctemp9549=CodeEs(nctemp9544,nctemp9546);
struct tree* nctemp9551= p;
struct nctempchar1 *nctemp9555;
static struct nctempchar1 nctemp9556 = {{ 2}, (char*)" \0"};
nctemp9555=&nctemp9556;
nctempchar1* nctemp9553= nctemp9555;
int nctemp9557=CodeEs(nctemp9551,nctemp9553);
struct tree* nctemp9559= p;
nctempchar1* nctemp9561= tempr;
int nctemp9564=CodeEs(nctemp9559,nctemp9561);
struct tree* nctemp9566= p;
struct nctempchar1 *nctemp9570;
static struct nctempchar1 nctemp9571 = {{ 4}, (char*)" =(\0"};
nctemp9570=&nctemp9571;
nctempchar1* nctemp9568= nctemp9570;
int nctemp9572=CodeEs(nctemp9566,nctemp9568);
struct tree* nctemp9574= p;
nctempchar1* nctemp9576= tempi;
int nctemp9579=CodeEs(nctemp9574,nctemp9576);
struct tree* nctemp9581= p;
struct tree* nctemp9585= p;
nctempchar1* nctemp9587=PtreeGetdef(nctemp9585);
nctempchar1* nctemp9583= nctemp9587;
int nctemp9588=CodeEs(nctemp9581,nctemp9583);
struct tree* nctemp9590= p;
nctempchar1* nctemp9592= rval;
int nctemp9595=CodeEs(nctemp9590,nctemp9592);
struct tree* nctemp9597= p;
struct nctempchar1 *nctemp9601;
static struct nctempchar1 nctemp9602 = {{ 5}, (char*)");\n\0"};
nctemp9601=&nctemp9602;
nctempchar1* nctemp9599= nctemp9601;
int nctemp9603=CodeEs(nctemp9597,nctemp9599);
return tempr;
}
else{
struct tree* nctemp9607= p;
nctempchar1* nctemp9609= type;
int nctemp9612=CodeEs(nctemp9607,nctemp9609);
struct tree* nctemp9614= p;
struct nctempchar1 *nctemp9618;
static struct nctempchar1 nctemp9619 = {{ 2}, (char*)" \0"};
nctemp9618=&nctemp9619;
nctempchar1* nctemp9616= nctemp9618;
int nctemp9620=CodeEs(nctemp9614,nctemp9616);
struct tree* nctemp9622= p;
nctempchar1* nctemp9624= tempr;
int nctemp9627=CodeEs(nctemp9622,nctemp9624);
struct tree* nctemp9629= p;
struct nctempchar1 *nctemp9633;
static struct nctempchar1 nctemp9634 = {{ 5}, (char*)" = (\0"};
nctemp9633=&nctemp9634;
nctempchar1* nctemp9631= nctemp9633;
int nctemp9635=CodeEs(nctemp9629,nctemp9631);
struct tree* nctemp9637= p;
nctempchar1* nctemp9639= lval;
int nctemp9642=CodeEs(nctemp9637,nctemp9639);
struct tree* nctemp9644= p;
struct tree* nctemp9648= p;
nctempchar1* nctemp9650=PtreeGetdef(nctemp9648);
nctempchar1* nctemp9646= nctemp9650;
int nctemp9651=CodeEs(nctemp9644,nctemp9646);
struct tree* nctemp9653= p;
nctempchar1* nctemp9655= rval;
int nctemp9658=CodeEs(nctemp9653,nctemp9655);
struct tree* nctemp9660= p;
struct nctempchar1 *nctemp9664;
static struct nctempchar1 nctemp9665 = {{ 5}, (char*)");\n\0"};
nctemp9664=&nctemp9665;
nctempchar1* nctemp9662= nctemp9664;
int nctemp9666=CodeEs(nctemp9660,nctemp9662);
return lval;
}
}
else{
struct tree* nctemp9670= p;
nctempchar1* nctemp9672= type;
int nctemp9675=CodeEs(nctemp9670,nctemp9672);
struct tree* nctemp9677= p;
struct nctempchar1 *nctemp9681;
static struct nctempchar1 nctemp9682 = {{ 2}, (char*)" \0"};
nctemp9681=&nctemp9682;
nctempchar1* nctemp9679= nctemp9681;
int nctemp9683=CodeEs(nctemp9677,nctemp9679);
struct tree* nctemp9685= p;
nctempchar1* nctemp9687= tempr;
int nctemp9690=CodeEs(nctemp9685,nctemp9687);
struct tree* nctemp9692= p;
struct nctempchar1 *nctemp9696;
static struct nctempchar1 nctemp9697 = {{ 5}, (char*)" = (\0"};
nctemp9696=&nctemp9697;
nctempchar1* nctemp9694= nctemp9696;
int nctemp9698=CodeEs(nctemp9692,nctemp9694);
struct tree* nctemp9700= p;
nctempchar1* nctemp9702= lval;
int nctemp9705=CodeEs(nctemp9700,nctemp9702);
struct tree* nctemp9707= p;
struct nctempchar1 *nctemp9711;
static struct nctempchar1 nctemp9712 = {{ 2}, (char*)" \0"};
nctemp9711=&nctemp9712;
nctempchar1* nctemp9709= nctemp9711;
int nctemp9713=CodeEs(nctemp9707,nctemp9709);
struct tree* nctemp9715= p;
struct tree* nctemp9719= p;
nctempchar1* nctemp9721=PtreeGetdef(nctemp9719);
nctempchar1* nctemp9717= nctemp9721;
int nctemp9722=CodeEs(nctemp9715,nctemp9717);
struct tree* nctemp9724= p;
nctempchar1* nctemp9726= rval;
int nctemp9729=CodeEs(nctemp9724,nctemp9726);
struct tree* nctemp9731= p;
struct nctempchar1 *nctemp9735;
static struct nctempchar1 nctemp9736 = {{ 5}, (char*)");\n\0"};
nctemp9735=&nctemp9736;
nctempchar1* nctemp9733= nctemp9735;
int nctemp9737=CodeEs(nctemp9731,nctemp9733);
return tempr;
}
}
else{
struct tree* nctemp9741= p;
nctempchar1* nctemp9743= type;
int nctemp9746=CodeEs(nctemp9741,nctemp9743);
struct tree* nctemp9748= p;
struct nctempchar1 *nctemp9752;
static struct nctempchar1 nctemp9753 = {{ 2}, (char*)" \0"};
nctemp9752=&nctemp9753;
nctempchar1* nctemp9750= nctemp9752;
int nctemp9754=CodeEs(nctemp9748,nctemp9750);
struct tree* nctemp9756= p;
nctempchar1* nctemp9758= tempr;
int nctemp9761=CodeEs(nctemp9756,nctemp9758);
struct tree* nctemp9763= p;
struct nctempchar1 *nctemp9767;
static struct nctempchar1 nctemp9768 = {{ 5}, (char*)" = (\0"};
nctemp9767=&nctemp9768;
nctempchar1* nctemp9765= nctemp9767;
int nctemp9769=CodeEs(nctemp9763,nctemp9765);
struct tree* nctemp9771= p;
nctempchar1* nctemp9773= lval;
int nctemp9776=CodeEs(nctemp9771,nctemp9773);
struct tree* nctemp9778= p;
struct nctempchar1 *nctemp9782;
static struct nctempchar1 nctemp9783 = {{ 2}, (char*)" \0"};
nctemp9782=&nctemp9783;
nctempchar1* nctemp9780= nctemp9782;
int nctemp9784=CodeEs(nctemp9778,nctemp9780);
struct tree* nctemp9786= p;
struct tree* nctemp9790= p;
nctempchar1* nctemp9792=PtreeGetdef(nctemp9790);
nctempchar1* nctemp9788= nctemp9792;
int nctemp9793=CodeEs(nctemp9786,nctemp9788);
struct tree* nctemp9795= p;
struct nctempchar1 *nctemp9799;
static struct nctempchar1 nctemp9800 = {{ 2}, (char*)" \0"};
nctemp9799=&nctemp9800;
nctempchar1* nctemp9797= nctemp9799;
int nctemp9801=CodeEs(nctemp9795,nctemp9797);
struct tree* nctemp9803= p;
nctempchar1* nctemp9805= rval;
int nctemp9808=CodeEs(nctemp9803,nctemp9805);
struct tree* nctemp9810= p;
struct nctempchar1 *nctemp9814;
static struct nctempchar1 nctemp9815 = {{ 5}, (char*)");\n\0"};
nctemp9814=&nctemp9815;
nctempchar1* nctemp9812= nctemp9814;
int nctemp9816=CodeEs(nctemp9810,nctemp9812);
return tempr;
}
}
}
}
else{
struct tree* nctemp9820= p;
nctempchar1* nctemp9822=CodeUnexpr(nctemp9820);
return nctemp9822;
}
}
nctempchar1 * CodeExpr (struct tree* p)
{
struct tree* sp;
nctempchar1 *rval;
struct tree* nctemp9827= p;
struct tree* nctemp9829=PtreeMvchild(nctemp9827);
sp =nctemp9829;
struct tree* nctemp9835= sp;
nctempchar1* nctemp9837=CodeBinexpr(nctemp9835);
rval=nctemp9837;
return rval;
}
int CodeWhilestmnt (struct tree* p)
{
nctempchar1 *cond;
nctempchar1 *tmp;
nctempchar1 *cond2;
struct tree* sp;
struct tree* nctemp9844= p;
struct tree* nctemp9846=PtreeMvchild(nctemp9844);
p =nctemp9846;
sp =p;
struct tree* nctemp9856= sp;
nctempchar1* nctemp9858=CodeExpr(nctemp9856);
cond=nctemp9858;
nctempchar1* nctemp9864=CodeMktemp();
tmp=nctemp9864;
struct tree* nctemp9866= p;
struct tree* nctemp9870= sp;
nctempchar1* nctemp9872=PtreeGetype(nctemp9870);
nctempchar1* nctemp9868= nctemp9872;
int nctemp9873=CodeEs(nctemp9866,nctemp9868);
struct tree* nctemp9875= p;
struct nctempchar1 *nctemp9879;
static struct nctempchar1 nctemp9880 = {{ 2}, (char*)" \0"};
nctemp9879=&nctemp9880;
nctempchar1* nctemp9877= nctemp9879;
int nctemp9881=CodeEs(nctemp9875,nctemp9877);
struct tree* nctemp9883= p;
nctempchar1* nctemp9885= tmp;
int nctemp9888=CodeEs(nctemp9883,nctemp9885);
struct tree* nctemp9890= p;
struct nctempchar1 *nctemp9894;
static struct nctempchar1 nctemp9895 = {{ 2}, (char*)"=\0"};
nctemp9894=&nctemp9895;
nctempchar1* nctemp9892= nctemp9894;
int nctemp9896=CodeEs(nctemp9890,nctemp9892);
struct tree* nctemp9898= p;
nctempchar1* nctemp9900= cond;
int nctemp9903=CodeEs(nctemp9898,nctemp9900);
struct tree* nctemp9905= p;
struct nctempchar1 *nctemp9909;
static struct nctempchar1 nctemp9910 = {{ 4}, (char*)";\n\0"};
nctemp9909=&nctemp9910;
nctempchar1* nctemp9907= nctemp9909;
int nctemp9911=CodeEs(nctemp9905,nctemp9907);
struct tree* nctemp9913= p;
struct nctempchar1 *nctemp9917;
static struct nctempchar1 nctemp9918 = {{ 7}, (char*)"while(\0"};
nctemp9917=&nctemp9918;
nctempchar1* nctemp9915= nctemp9917;
int nctemp9919=CodeEs(nctemp9913,nctemp9915);
struct tree* nctemp9921= p;
nctempchar1* nctemp9923= tmp;
int nctemp9926=CodeEs(nctemp9921,nctemp9923);
struct tree* nctemp9928= p;
struct nctempchar1 *nctemp9932;
static struct nctempchar1 nctemp9933 = {{ 4}, (char*)")\n\0"};
nctemp9932=&nctemp9933;
nctempchar1* nctemp9930= nctemp9932;
int nctemp9934=CodeEs(nctemp9928,nctemp9930);
struct tree* nctemp9936= p;
struct nctempchar1 *nctemp9940;
static struct nctempchar1 nctemp9941 = {{ 2}, (char*)"{\0"};
nctemp9940=&nctemp9941;
nctempchar1* nctemp9938= nctemp9940;
int nctemp9942=CodeEs(nctemp9936,nctemp9938);
struct tree* nctemp9947= p;
struct tree* nctemp9949=PtreeMvsister(nctemp9947);
p =nctemp9949;
struct tree* nctemp9951= p;
int nctemp9953=CodeStmnt(nctemp9951);
struct tree* nctemp9959= sp;
nctempchar1* nctemp9961=CodeExpr(nctemp9959);
cond2=nctemp9961;
struct tree* nctemp9963= p;
nctempchar1* nctemp9965= tmp;
int nctemp9968=CodeEs(nctemp9963,nctemp9965);
struct tree* nctemp9970= p;
struct nctempchar1 *nctemp9974;
static struct nctempchar1 nctemp9975 = {{ 2}, (char*)"=\0"};
nctemp9974=&nctemp9975;
nctempchar1* nctemp9972= nctemp9974;
int nctemp9976=CodeEs(nctemp9970,nctemp9972);
struct tree* nctemp9978= p;
nctempchar1* nctemp9980= cond2;
int nctemp9983=CodeEs(nctemp9978,nctemp9980);
struct tree* nctemp9985= p;
struct nctempchar1 *nctemp9989;
static struct nctempchar1 nctemp9990 = {{ 2}, (char*)";\0"};
nctemp9989=&nctemp9990;
nctempchar1* nctemp9987= nctemp9989;
int nctemp9991=CodeEs(nctemp9985,nctemp9987);
struct tree* nctemp9993= p;
struct nctempchar1 *nctemp9997;
static struct nctempchar1 nctemp9998 = {{ 2}, (char*)"}\0"};
nctemp9997=&nctemp9998;
nctempchar1* nctemp9995= nctemp9997;
int nctemp9999=CodeEs(nctemp9993,nctemp9995);
return 1;
}
int CodeForstmnt (struct tree* p)
{
struct tree* sp;
struct tree* np;
nctempchar1 *cond;
nctempchar1 *tmp;
struct tree* nctemp10005= p;
struct tree* nctemp10007=PtreeMvchild(nctemp10005);
p =nctemp10007;
struct tree* nctemp10009= p;
nctempchar1* nctemp10011=CodeExpr(nctemp10009);
struct tree* nctemp10016= p;
struct tree* nctemp10018=PtreeMvsister(nctemp10016);
p =nctemp10018;
np =p;
struct tree* nctemp10028= p;
nctempchar1* nctemp10030=CodeExpr(nctemp10028);
cond=nctemp10030;
struct tree* nctemp10032= p;
struct nctempchar1 *nctemp10036;
static struct nctempchar1 nctemp10037 = {{ 7}, (char*)"while(\0"};
nctemp10036=&nctemp10037;
nctempchar1* nctemp10034= nctemp10036;
int nctemp10038=CodeEs(nctemp10032,nctemp10034);
struct tree* nctemp10040= p;
nctempchar1* nctemp10042= cond;
int nctemp10045=CodeEs(nctemp10040,nctemp10042);
struct tree* nctemp10047= p;
struct nctempchar1 *nctemp10051;
static struct nctempchar1 nctemp10052 = {{ 5}, (char*)"){\n\0"};
nctemp10051=&nctemp10052;
nctempchar1* nctemp10049= nctemp10051;
int nctemp10053=CodeEs(nctemp10047,nctemp10049);
struct tree* nctemp10058= p;
struct tree* nctemp10060=PtreeMvsister(nctemp10058);
p =nctemp10060;
sp =p;
struct tree* nctemp10069= p;
struct tree* nctemp10071=PtreeMvsister(nctemp10069);
p =nctemp10071;
struct tree* nctemp10073= p;
int nctemp10075=CodeStmnt(nctemp10073);
struct tree* nctemp10077= sp;
nctempchar1* nctemp10079=CodeExpr(nctemp10077);
struct tree* nctemp10085= np;
nctempchar1* nctemp10087=CodeExpr(nctemp10085);
tmp=nctemp10087;
struct tree* nctemp10089= p;
nctempchar1* nctemp10091= cond;
int nctemp10094=CodeEs(nctemp10089,nctemp10091);
struct tree* nctemp10096= p;
struct nctempchar1 *nctemp10100;
static struct nctempchar1 nctemp10101 = {{ 2}, (char*)"=\0"};
nctemp10100=&nctemp10101;
nctempchar1* nctemp10098= nctemp10100;
int nctemp10102=CodeEs(nctemp10096,nctemp10098);
struct tree* nctemp10104= p;
nctempchar1* nctemp10106= tmp;
int nctemp10109=CodeEs(nctemp10104,nctemp10106);
struct tree* nctemp10111= p;
struct nctempchar1 *nctemp10115;
static struct nctempchar1 nctemp10116 = {{ 4}, (char*)";\n\0"};
nctemp10115=&nctemp10116;
nctempchar1* nctemp10113= nctemp10115;
int nctemp10117=CodeEs(nctemp10111,nctemp10113);
struct tree* nctemp10119= p;
struct nctempchar1 *nctemp10123;
static struct nctempchar1 nctemp10124 = {{ 4}, (char*)"}\n\0"};
nctemp10123=&nctemp10124;
nctempchar1* nctemp10121= nctemp10123;
int nctemp10125=CodeEs(nctemp10119,nctemp10121);
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
int nctemp10139 = level + 1;
level =nctemp10139;
int nctemp10140 = (p ==0);
if(nctemp10140)
{
return 1;
}
struct tree* nctemp10149= p;
struct tree* nctemp10151=PtreeMvsister(nctemp10149);
p =nctemp10151;
struct tree* nctemp10153= p;
int nctemp10155= level;
int nctemp10157= rank;
int nctemp10159=CodeParallelfor(nctemp10153,nctemp10155,nctemp10157);
struct tree* nctemp10164= sp;
struct tree* nctemp10166=PtreeMvchild(nctemp10164);
rp =nctemp10166;
struct tree* nctemp10171= rp;
struct tree* nctemp10173=PtreeMvchild(nctemp10171);
qp =nctemp10173;
struct tree* nctemp10178= qp;
struct tree* nctemp10180=PtreeMvchild(nctemp10178);
qp =nctemp10180;
struct tree* nctemp10186= qp;
nctempchar1* nctemp10188=PtreeGetdef(nctemp10186);
index=nctemp10188;
struct tree* nctemp10196= qp;
struct tree* nctemp10198=PtreeMvsister(nctemp10196);
struct tree* nctemp10194= nctemp10198;
nctempchar1* nctemp10199=CodeBinexpr(nctemp10194);
init=nctemp10199;
struct tree* nctemp10204= rp;
struct tree* nctemp10206=PtreeMvsister(nctemp10204);
rrp =nctemp10206;
struct tree* nctemp10212= rrp;
nctempchar1* nctemp10214=CodeExpr(nctemp10212);
cond=nctemp10214;
int nctemp10215 = (level ==rank);
if(nctemp10215)
{
struct tree* nctemp10220= p;
struct nctempchar1 *nctemp10224;
static struct nctempchar1 nctemp10225 = {{ 30}, (char*)"\n #pragma omp parallel for\n\0"};
nctemp10224=&nctemp10225;
nctempchar1* nctemp10222= nctemp10224;
int nctemp10226=CodeEs(nctemp10220,nctemp10222);
}
struct tree* nctemp10228= rp;
struct nctempchar1 *nctemp10232;
static struct nctempchar1 nctemp10233 = {{ 5}, (char*)"for(\0"};
nctemp10232=&nctemp10233;
nctempchar1* nctemp10230= nctemp10232;
int nctemp10234=CodeEs(nctemp10228,nctemp10230);
struct tree* nctemp10236= rp;
nctempchar1* nctemp10238= index;
int nctemp10241=CodeEs(nctemp10236,nctemp10238);
struct tree* nctemp10243= rp;
struct nctempchar1 *nctemp10247;
static struct nctempchar1 nctemp10248 = {{ 2}, (char*)"=\0"};
nctemp10247=&nctemp10248;
nctempchar1* nctemp10245= nctemp10247;
int nctemp10249=CodeEs(nctemp10243,nctemp10245);
struct tree* nctemp10251= rp;
nctempchar1* nctemp10253= init;
int nctemp10256=CodeEs(nctemp10251,nctemp10253);
struct tree* nctemp10258= rp;
struct nctempchar1 *nctemp10262;
static struct nctempchar1 nctemp10263 = {{ 2}, (char*)";\0"};
nctemp10262=&nctemp10263;
nctempchar1* nctemp10260= nctemp10262;
int nctemp10264=CodeEs(nctemp10258,nctemp10260);
struct tree* nctemp10269= rp;
struct tree* nctemp10271=PtreeMvsister(nctemp10269);
rp =nctemp10271;
struct tree* nctemp10273= rp;
nctempchar1* nctemp10275= index;
int nctemp10278=CodeEs(nctemp10273,nctemp10275);
struct tree* nctemp10280= rp;
struct nctempchar1 *nctemp10284;
static struct nctempchar1 nctemp10285 = {{ 2}, (char*)"<\0"};
nctemp10284=&nctemp10285;
nctempchar1* nctemp10282= nctemp10284;
int nctemp10286=CodeEs(nctemp10280,nctemp10282);
struct tree* nctemp10288= p;
nctempchar1* nctemp10290= cond;
int nctemp10293=CodeEs(nctemp10288,nctemp10290);
struct tree* nctemp10295= rp;
struct nctempchar1 *nctemp10299;
static struct nctempchar1 nctemp10300 = {{ 2}, (char*)";\0"};
nctemp10299=&nctemp10300;
nctempchar1* nctemp10297= nctemp10299;
int nctemp10301=CodeEs(nctemp10295,nctemp10297);
struct tree* nctemp10309= rp;
struct tree* nctemp10311=PtreeMvsister(nctemp10309);
rp =nctemp10311;
int nctemp10302 = (rp !=0);
if(nctemp10302)
{
struct tree* nctemp10314= rp;
nctempchar1* nctemp10316= index;
int nctemp10319=CodeEs(nctemp10314,nctemp10316);
struct tree* nctemp10321= rp;
struct nctempchar1 *nctemp10325;
static struct nctempchar1 nctemp10326 = {{ 2}, (char*)"=\0"};
nctemp10325=&nctemp10326;
nctempchar1* nctemp10323= nctemp10325;
int nctemp10327=CodeEs(nctemp10321,nctemp10323);
struct tree* nctemp10329= rp;
nctempchar1* nctemp10331= index;
int nctemp10334=CodeEs(nctemp10329,nctemp10331);
struct tree* nctemp10336= rp;
struct nctempchar1 *nctemp10340;
static struct nctempchar1 nctemp10341 = {{ 2}, (char*)"+\0"};
nctemp10340=&nctemp10341;
nctempchar1* nctemp10338= nctemp10340;
int nctemp10342=CodeEs(nctemp10336,nctemp10338);
struct tree* nctemp10344= rp;
nctempchar1* nctemp10346=CodeExpr(nctemp10344);
}
else{
struct tree* nctemp10348= rp;
nctempchar1* nctemp10350= index;
int nctemp10353=CodeEs(nctemp10348,nctemp10350);
struct tree* nctemp10355= rp;
struct nctempchar1 *nctemp10359;
static struct nctempchar1 nctemp10360 = {{ 2}, (char*)"=\0"};
nctemp10359=&nctemp10360;
nctempchar1* nctemp10357= nctemp10359;
int nctemp10361=CodeEs(nctemp10355,nctemp10357);
struct tree* nctemp10363= rp;
nctempchar1* nctemp10365= index;
int nctemp10368=CodeEs(nctemp10363,nctemp10365);
struct tree* nctemp10370= rp;
struct nctempchar1 *nctemp10374;
static struct nctempchar1 nctemp10375 = {{ 2}, (char*)"+\0"};
nctemp10374=&nctemp10375;
nctempchar1* nctemp10372= nctemp10374;
int nctemp10376=CodeEs(nctemp10370,nctemp10372);
struct tree* nctemp10378= rp;
struct nctempchar1 *nctemp10382;
static struct nctempchar1 nctemp10383 = {{ 2}, (char*)"1\0"};
nctemp10382=&nctemp10383;
nctempchar1* nctemp10380= nctemp10382;
int nctemp10384=CodeEs(nctemp10378,nctemp10380);
}
struct tree* nctemp10386= rp;
struct nctempchar1 *nctemp10390;
static struct nctempchar1 nctemp10391 = {{ 3}, (char*)"){\0"};
nctemp10390=&nctemp10391;
nctempchar1* nctemp10388= nctemp10390;
int nctemp10392=CodeEs(nctemp10386,nctemp10388);
return 1;
}
int CodeParallelstmntcpu (struct tree* p)
{
struct tree* sp;
int rank;
int i;
sp =p;
struct tree* nctemp10402= sp;
int nctemp10404=PtreeGetrank(nctemp10402);
rank =nctemp10404;
struct tree* nctemp10409= p;
struct tree* nctemp10411=PtreeMvchild(nctemp10409);
p =nctemp10411;
struct tree* nctemp10416= p;
struct tree* nctemp10418=PtreeMvchild(nctemp10416);
p =nctemp10418;
struct tree* nctemp10420= p;
int nctemp10422= 0;
int nctemp10424= rank;
int nctemp10426=CodeParallelfor(nctemp10420,nctemp10422,nctemp10424);
struct tree* nctemp10431= sp;
struct tree* nctemp10433=PtreeMvchild(nctemp10431);
sp =nctemp10433;
struct tree* nctemp10438= sp;
struct tree* nctemp10440=PtreeMvsister(nctemp10438);
sp =nctemp10440;
struct tree* nctemp10442= sp;
int nctemp10444=CodeStmnt(nctemp10442);
i =0;
int nctemp10449 = (i < rank);
while(nctemp10449){
{
struct tree* nctemp10454= sp;
struct nctempchar1 *nctemp10458;
static struct nctempchar1 nctemp10459 = {{ 2}, (char*)"}\0"};
nctemp10458=&nctemp10459;
nctempchar1* nctemp10456= nctemp10458;
int nctemp10460=CodeEs(nctemp10454,nctemp10456);
}
int nctemp10469 = i + 1;
i =nctemp10469;
int nctemp10470 = (i < rank);
nctemp10449=nctemp10470;
}
return 1;
}
nctempchar1 * CodeParprocno (struct tree* p)
{
struct tree* nctemp10476= p;
struct nctempchar1 *nctemp10480;
static struct nctempchar1 nctemp10481 = {{ 13}, (char*)"int nctempno\0"};
nctemp10480=&nctemp10481;
nctempchar1* nctemp10478= nctemp10480;
int nctemp10482=CodeEs(nctemp10476,nctemp10478);
struct tree* nctemp10484= p;
struct nctempchar1 *nctemp10488;
static struct nctempchar1 nctemp10489 = {{ 39}, (char*)"=blockIdx.x*blockDim.x + threadIdx.x; \0"};
nctemp10488=&nctemp10489;
nctempchar1* nctemp10486= nctemp10488;
int nctemp10490=CodeEs(nctemp10484,nctemp10486);
struct nctempchar1 *nctemp10492;
static struct nctempchar1 nctemp10493 = {{ 9}, (char*)"nctempno\0"};
nctemp10492=&nctemp10493;
return nctemp10492;
}
nctempchar1 * CodeParidx (struct tree* p)
{
struct tree* nctemp10498= p;
struct tree* nctemp10500=PtreeMvchild(nctemp10498);
p =nctemp10500;
struct tree* nctemp10505= p;
struct tree* nctemp10507=PtreeMvchild(nctemp10505);
p =nctemp10507;
struct tree* nctemp10512= p;
struct tree* nctemp10514=PtreeMvchild(nctemp10512);
p =nctemp10514;
struct tree* nctemp10516= p;
nctempchar1* nctemp10518=PtreeGetdef(nctemp10516);
return nctemp10518;
}
nctempchar1 * CodeParidxrank (struct tree* p,int r)
{
int i;
i =0;
int nctemp10531 = r - 1;
int nctemp10523 = (i < nctemp10531);
while(nctemp10523){
{
struct tree* nctemp10536= p;
struct tree* nctemp10538=PtreeMvsister(nctemp10536);
p =nctemp10538;
}
int nctemp10547 = i + 1;
i =nctemp10547;
int nctemp10556 = r - 1;
int nctemp10548 = (i < nctemp10556);
nctemp10523=nctemp10548;
}
struct tree* nctemp10558= p;
nctempchar1* nctemp10560=CodeParidx(nctemp10558);
return nctemp10560;
}
nctempchar1 * CodeParllim (struct tree* p)
{
nctempchar1 *tmp;
nctempchar1 *temp;
struct tree* nctemp10565= p;
struct tree* nctemp10567=PtreeMvchild(nctemp10565);
p =nctemp10567;
struct tree* nctemp10573= p;
nctempchar1* nctemp10575=CodeExpr(nctemp10573);
tmp=nctemp10575;
nctempchar1* nctemp10581=CodeMktemp();
temp=nctemp10581;
struct tree* nctemp10583= p;
struct nctempchar1 *nctemp10587;
static struct nctempchar1 nctemp10588 = {{ 5}, (char*)"int \0"};
nctemp10587=&nctemp10588;
nctempchar1* nctemp10585= nctemp10587;
int nctemp10589=CodeEs(nctemp10583,nctemp10585);
struct tree* nctemp10591= p;
nctempchar1* nctemp10593= temp;
int nctemp10596=CodeEs(nctemp10591,nctemp10593);
struct tree* nctemp10598= p;
struct nctempchar1 *nctemp10602;
static struct nctempchar1 nctemp10603 = {{ 2}, (char*)"=\0"};
nctemp10602=&nctemp10603;
nctempchar1* nctemp10600= nctemp10602;
int nctemp10604=CodeEs(nctemp10598,nctemp10600);
struct tree* nctemp10606= p;
nctempchar1* nctemp10608= tmp;
int nctemp10611=CodeEs(nctemp10606,nctemp10608);
struct tree* nctemp10613= p;
struct nctempchar1 *nctemp10617;
static struct nctempchar1 nctemp10618 = {{ 4}, (char*)";\n\0"};
nctemp10617=&nctemp10618;
nctempchar1* nctemp10615= nctemp10617;
int nctemp10619=CodeEs(nctemp10613,nctemp10615);
return temp;
}
nctempchar1 * CodeParulim (struct tree* p)
{
struct tree* nctemp10626= p;
struct tree* nctemp10628=PtreeMvchild(nctemp10626);
p =nctemp10628;
struct tree* nctemp10633= p;
struct tree* nctemp10635=PtreeMvsister(nctemp10633);
p =nctemp10635;
struct tree* nctemp10637= p;
nctempchar1* nctemp10639=CodeExpr(nctemp10637);
return nctemp10639;
}
nctempchar1 * CodeParllimrank (struct tree* p,int r)
{
int i;
i =0;
int nctemp10652 = r - 1;
int nctemp10644 = (i < nctemp10652);
while(nctemp10644){
{
struct tree* nctemp10657= p;
struct tree* nctemp10659=PtreeMvsister(nctemp10657);
p =nctemp10659;
}
int nctemp10668 = i + 1;
i =nctemp10668;
int nctemp10677 = r - 1;
int nctemp10669 = (i < nctemp10677);
nctemp10644=nctemp10669;
}
struct tree* nctemp10679= p;
nctempchar1* nctemp10681=CodeParllim(nctemp10679);
return nctemp10681;
}
nctempchar1 * CodeParulimrank (struct tree* p,int r)
{
int i;
i =0;
int nctemp10694 = r - 1;
int nctemp10686 = (i < nctemp10694);
while(nctemp10686){
{
struct tree* nctemp10699= p;
struct tree* nctemp10701=PtreeMvsister(nctemp10699);
p =nctemp10701;
}
int nctemp10710 = i + 1;
i =nctemp10710;
int nctemp10719 = r - 1;
int nctemp10711 = (i < nctemp10719);
nctemp10686=nctemp10711;
}
struct tree* nctemp10721= p;
nctempchar1* nctemp10723=CodeParulim(nctemp10721);
return nctemp10723;
}
nctempchar1 * CodeParlen (struct tree* p,nctempchar1 *llim)
{
nctempchar1 *tmp1;
nctempchar1 *tmp2;
nctempchar1 *tmp3;
nctempchar1* nctemp10729=CodeMktemp();
tmp1=nctemp10729;
struct tree* nctemp10735= p;
nctempchar1* nctemp10737=CodeParulim(nctemp10735);
tmp2=nctemp10737;
struct tree* nctemp10743= p;
nctempchar1* nctemp10745=CodeParllim(nctemp10743);
tmp3=nctemp10745;
struct tree* nctemp10747= p;
struct nctempchar1 *nctemp10751;
static struct nctempchar1 nctemp10752 = {{ 5}, (char*)"int \0"};
nctemp10751=&nctemp10752;
nctempchar1* nctemp10749= nctemp10751;
int nctemp10753=CodeEs(nctemp10747,nctemp10749);
struct tree* nctemp10755= p;
nctempchar1* nctemp10757= tmp1;
int nctemp10760=CodeEs(nctemp10755,nctemp10757);
struct tree* nctemp10762= p;
struct nctempchar1 *nctemp10766;
static struct nctempchar1 nctemp10767 = {{ 2}, (char*)"=\0"};
nctemp10766=&nctemp10767;
nctempchar1* nctemp10764= nctemp10766;
int nctemp10768=CodeEs(nctemp10762,nctemp10764);
struct tree* nctemp10770= p;
nctempchar1* nctemp10772= tmp2;
int nctemp10775=CodeEs(nctemp10770,nctemp10772);
struct tree* nctemp10777= p;
struct nctempchar1 *nctemp10781;
static struct nctempchar1 nctemp10782 = {{ 2}, (char*)"-\0"};
nctemp10781=&nctemp10782;
nctempchar1* nctemp10779= nctemp10781;
int nctemp10783=CodeEs(nctemp10777,nctemp10779);
struct tree* nctemp10785= p;
nctempchar1* nctemp10787= tmp3;
int nctemp10790=CodeEs(nctemp10785,nctemp10787);
struct tree* nctemp10792= p;
struct nctempchar1 *nctemp10796;
static struct nctempchar1 nctemp10797 = {{ 4}, (char*)";\n\0"};
nctemp10796=&nctemp10797;
nctempchar1* nctemp10794= nctemp10796;
int nctemp10798=CodeEs(nctemp10792,nctemp10794);
nctempchar1* nctemp10802= tmp3;
nctempchar1* nctemp10805= llim;
int nctemp10808=LibeStrcpy(nctemp10802,nctemp10805);
int nctemp10799 = (nctemp10808 ==0);
if(nctemp10799)
{
struct nctempchar1 *nctemp10813;
static struct nctempchar1 nctemp10814 = {{ 31}, (char*)"Internal error in CodeParlen\n\0"};
nctemp10813=&nctemp10814;
nctempchar1* nctemp10811= nctemp10813;
int nctemp10815=CodeError(nctemp10811);
}
return tmp1;
}
nctempchar1 * CodeParlenrank (struct tree* p,int r,nctempchar1 *llim)
{
int i;
nctempchar1 *tmp;
i =0;
int nctemp10830 = r - 1;
int nctemp10822 = (i < nctemp10830);
while(nctemp10822){
{
struct tree* nctemp10835= p;
struct tree* nctemp10837=PtreeMvsister(nctemp10835);
p =nctemp10837;
}
int nctemp10846 = i + 1;
i =nctemp10846;
int nctemp10855 = r - 1;
int nctemp10847 = (i < nctemp10855);
nctemp10822=nctemp10847;
}
struct tree* nctemp10861= p;
nctempchar1* nctemp10863= llim;
nctempchar1* nctemp10866=CodeParlen(nctemp10861,nctemp10863);
tmp=nctemp10866;
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
int nctemp10873=m->d[0];r =nctemp10873;
nctempchar1* nctemp10882=CodeMktemp();
nsize=nctemp10882;
struct tree* nctemp10884= p;
struct nctempchar1 *nctemp10888;
static struct nctempchar1 nctemp10889 = {{ 5}, (char*)"int \0"};
nctemp10888=&nctemp10889;
nctempchar1* nctemp10886= nctemp10888;
int nctemp10890=CodeEs(nctemp10884,nctemp10886);
struct tree* nctemp10892= p;
nctempchar1* nctemp10894= nsize;
int nctemp10897=CodeEs(nctemp10892,nctemp10894);
struct tree* nctemp10899= p;
struct nctempchar1 *nctemp10903;
static struct nctempchar1 nctemp10904 = {{ 2}, (char*)"=\0"};
nctemp10903=&nctemp10904;
nctempchar1* nctemp10901= nctemp10903;
int nctemp10905=CodeEs(nctemp10899,nctemp10901);
i =0;
int nctemp10910 = (i < r);
while(nctemp10910){
{
int nctemp10922 = r - 1;
int nctemp10914 = (i ==nctemp10922);
if(nctemp10914)
{
struct tree* nctemp10924= p;
int nctemp10928=i;
nctempchar1* nctemp10926= m->a[nctemp10928].s;
int nctemp10931=CodeEs(nctemp10924,nctemp10926);
struct tree* nctemp10933= p;
struct nctempchar1 *nctemp10937;
static struct nctempchar1 nctemp10938 = {{ 4}, (char*)";\n\0"};
nctemp10937=&nctemp10938;
nctempchar1* nctemp10935= nctemp10937;
int nctemp10939=CodeEs(nctemp10933,nctemp10935);
}
else{
struct tree* nctemp10941= p;
int nctemp10945=i;
nctempchar1* nctemp10943= m->a[nctemp10945].s;
int nctemp10948=CodeEs(nctemp10941,nctemp10943);
struct tree* nctemp10950= p;
struct nctempchar1 *nctemp10954;
static struct nctempchar1 nctemp10955 = {{ 2}, (char*)"*\0"};
nctemp10954=&nctemp10955;
nctempchar1* nctemp10952= nctemp10954;
int nctemp10956=CodeEs(nctemp10950,nctemp10952);
}
}
int nctemp10965 = i + 1;
i =nctemp10965;
int nctemp10966 = (i < r);
nctemp10910=nctemp10966;
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
int nctemp10973= 1;
int nctemp10975=CodeSetparallel(nctemp10973);
sp =p;
struct tree* nctemp10984= p;
int nctemp10986=PtreeGetrank(nctemp10984);
rank =nctemp10986;
int nctemp10993=rank;
struct nctempcharr1 *nctemp10992;
nctemp10992=(struct nctempcharr1*)RunMalloc(sizeof(struct nctempcharr1));
nctemp10992->d[0]=rank;
nctemp10992->a=(struct charr*)RunMalloc(sizeof(struct charr)*nctemp10993);
m=nctemp10992;
int nctemp11002=rank;
struct nctempcharr1 *nctemp11001;
nctemp11001=(struct nctempcharr1*)RunMalloc(sizeof(struct nctempcharr1));
nctemp11001->d[0]=rank;
nctemp11001->a=(struct charr*)RunMalloc(sizeof(struct charr)*nctemp11002);
i=nctemp11001;
int nctemp11011=rank;
struct nctempcharr1 *nctemp11010;
nctemp11010=(struct nctempcharr1*)RunMalloc(sizeof(struct nctempcharr1));
nctemp11010->d[0]=rank;
nctemp11010->a=(struct charr*)RunMalloc(sizeof(struct charr)*nctemp11011);
nl=nctemp11010;
struct tree* nctemp11018= p;
struct tree* nctemp11020=PtreeMvchild(nctemp11018);
p =nctemp11020;
struct tree* nctemp11025= p;
struct tree* nctemp11027=PtreeMvchild(nctemp11025);
slice =nctemp11027;
struct tree* nctemp11029= p;
struct nctempchar1 *nctemp11033;
static struct nctempchar1 nctemp11034 = {{ 4}, (char*)"{\n\0"};
nctemp11033=&nctemp11034;
nctempchar1* nctemp11031= nctemp11033;
int nctemp11035=CodeEs(nctemp11029,nctemp11031);
struct tree* nctemp11041= slice;
nctempchar1* nctemp11043=CodeParprocno(nctemp11041);
pno=nctemp11043;
l =0;
int nctemp11048 = (l < rank);
while(nctemp11048){
{
int nctemp11055=l;
struct tree* nctemp11059= slice;
int nctemp11066 = l + 1;
int nctemp11061= nctemp11066;
nctempchar1* nctemp11067=CodeParidxrank(nctemp11059,nctemp11061);
i->a[nctemp11055].s=nctemp11067;
int nctemp11071=l;
int nctemp11076=4096;
nctempchar1 *nctemp11075;
nctemp11075=(nctempchar1*)RunMalloc(sizeof(nctempchar1));
nctemp11075->d[0]=4096;
nctemp11075->a=(char *)RunMalloc(sizeof(char)*nctemp11076);
nl->a[nctemp11071].s=nctemp11075;
int nctemp11082=l;
struct tree* nctemp11086= slice;
int nctemp11093 = l + 1;
int nctemp11088= nctemp11093;
int nctemp11096=l;
nctempchar1* nctemp11094= nl->a[nctemp11096].s;
nctempchar1* nctemp11099=CodeParlenrank(nctemp11086,nctemp11088,nctemp11094);
m->a[nctemp11082].s=nctemp11099;
}
int nctemp11108 = l + 1;
l =nctemp11108;
int nctemp11109 = (l < rank);
nctemp11048=nctemp11109;
}
struct tree* nctemp11118= p;
nctempcharr1* nctemp11120= m;
nctempchar1* nctemp11123=CodeParnsize(nctemp11118,nctemp11120);
nmax=nctemp11123;
struct tree* nctemp11125= p;
struct nctempchar1 *nctemp11129;
static struct nctempchar1 nctemp11130 = {{ 5}, (char*)"for(\0"};
nctemp11129=&nctemp11130;
nctempchar1* nctemp11127= nctemp11129;
int nctemp11131=CodeEs(nctemp11125,nctemp11127);
struct tree* nctemp11133= p;
nctempchar1* nctemp11135= pno;
int nctemp11138=CodeEs(nctemp11133,nctemp11135);
struct tree* nctemp11140= p;
struct nctempchar1 *nctemp11144;
static struct nctempchar1 nctemp11145 = {{ 39}, (char*)"=blockIdx.x*blockDim.x + threadIdx.x; \0"};
nctemp11144=&nctemp11145;
nctempchar1* nctemp11142= nctemp11144;
int nctemp11146=CodeEs(nctemp11140,nctemp11142);
struct tree* nctemp11148= p;
nctempchar1* nctemp11150= pno;
int nctemp11153=CodeEs(nctemp11148,nctemp11150);
struct tree* nctemp11155= p;
struct nctempchar1 *nctemp11159;
static struct nctempchar1 nctemp11160 = {{ 2}, (char*)"<\0"};
nctemp11159=&nctemp11160;
nctempchar1* nctemp11157= nctemp11159;
int nctemp11161=CodeEs(nctemp11155,nctemp11157);
struct tree* nctemp11163= p;
nctempchar1* nctemp11165= nmax;
int nctemp11168=CodeEs(nctemp11163,nctemp11165);
struct tree* nctemp11170= p;
struct nctempchar1 *nctemp11174;
static struct nctempchar1 nctemp11175 = {{ 2}, (char*)";\0"};
nctemp11174=&nctemp11175;
nctempchar1* nctemp11172= nctemp11174;
int nctemp11176=CodeEs(nctemp11170,nctemp11172);
struct tree* nctemp11178= p;
nctempchar1* nctemp11180= pno;
int nctemp11183=CodeEs(nctemp11178,nctemp11180);
struct tree* nctemp11185= p;
struct nctempchar1 *nctemp11189;
static struct nctempchar1 nctemp11190 = {{ 23}, (char*)"+=blockDim.x*gridDim.x\0"};
nctemp11189=&nctemp11190;
nctempchar1* nctemp11187= nctemp11189;
int nctemp11191=CodeEs(nctemp11185,nctemp11187);
struct tree* nctemp11193= p;
struct nctempchar1 *nctemp11197;
static struct nctempchar1 nctemp11198 = {{ 5}, (char*)"){\n\0"};
nctemp11197=&nctemp11198;
nctempchar1* nctemp11195= nctemp11197;
int nctemp11199=CodeEs(nctemp11193,nctemp11195);
struct nctempchar1 *nctemp11207;
static struct nctempchar1 nctemp11208 = {{ 2}, (char*)"1\0"};
nctemp11207=&nctemp11208;
nctempchar1* nctemp11205= nctemp11207;
nctempchar1* nctemp11209=LibeStrsave(nctemp11205);
qk=nctemp11209;
l =0;
int nctemp11214 = (l < rank);
while(nctemp11214){
{
int nctemp11226 = rank - 1;
int nctemp11218 = (l ==nctemp11226);
if(nctemp11218)
{
struct tree* nctemp11228= p;
int nctemp11232=l;
nctempchar1* nctemp11230= i->a[nctemp11232].s;
int nctemp11235=CodeEs(nctemp11228,nctemp11230);
struct tree* nctemp11237= p;
struct nctempchar1 *nctemp11241;
static struct nctempchar1 nctemp11242 = {{ 2}, (char*)"=\0"};
nctemp11241=&nctemp11242;
nctempchar1* nctemp11239= nctemp11241;
int nctemp11243=CodeEs(nctemp11237,nctemp11239);
struct tree* nctemp11245= p;
struct nctempchar1 *nctemp11249;
static struct nctempchar1 nctemp11250 = {{ 2}, (char*)"(\0"};
nctemp11249=&nctemp11250;
nctempchar1* nctemp11247= nctemp11249;
int nctemp11251=CodeEs(nctemp11245,nctemp11247);
struct tree* nctemp11253= p;
nctempchar1* nctemp11255= pno;
int nctemp11258=CodeEs(nctemp11253,nctemp11255);
struct tree* nctemp11260= p;
struct nctempchar1 *nctemp11264;
static struct nctempchar1 nctemp11265 = {{ 2}, (char*)"/\0"};
nctemp11264=&nctemp11265;
nctempchar1* nctemp11262= nctemp11264;
int nctemp11266=CodeEs(nctemp11260,nctemp11262);
struct tree* nctemp11268= p;
struct nctempchar1 *nctemp11272;
static struct nctempchar1 nctemp11273 = {{ 2}, (char*)"(\0"};
nctemp11272=&nctemp11273;
nctempchar1* nctemp11270= nctemp11272;
int nctemp11274=CodeEs(nctemp11268,nctemp11270);
struct tree* nctemp11276= p;
nctempchar1* nctemp11278= qk;
int nctemp11281=CodeEs(nctemp11276,nctemp11278);
struct tree* nctemp11283= p;
struct nctempchar1 *nctemp11287;
static struct nctempchar1 nctemp11288 = {{ 2}, (char*)")\0"};
nctemp11287=&nctemp11288;
nctempchar1* nctemp11285= nctemp11287;
int nctemp11289=CodeEs(nctemp11283,nctemp11285);
struct tree* nctemp11291= p;
struct nctempchar1 *nctemp11295;
static struct nctempchar1 nctemp11296 = {{ 2}, (char*)")\0"};
nctemp11295=&nctemp11296;
nctempchar1* nctemp11293= nctemp11295;
int nctemp11297=CodeEs(nctemp11291,nctemp11293);
struct tree* nctemp11299= p;
struct nctempchar1 *nctemp11303;
static struct nctempchar1 nctemp11304 = {{ 2}, (char*)"+\0"};
nctemp11303=&nctemp11304;
nctempchar1* nctemp11301= nctemp11303;
int nctemp11305=CodeEs(nctemp11299,nctemp11301);
struct tree* nctemp11307= p;
int nctemp11311=l;
nctempchar1* nctemp11309= nl->a[nctemp11311].s;
int nctemp11314=CodeEs(nctemp11307,nctemp11309);
int nctemp11317=l;
RunFree(nl->a[nctemp11317].s->a);
RunFree(nl->a[nctemp11317].s);
struct tree* nctemp11321= p;
struct nctempchar1 *nctemp11325;
static struct nctempchar1 nctemp11326 = {{ 4}, (char*)";\n\0"};
nctemp11325=&nctemp11326;
nctempchar1* nctemp11323= nctemp11325;
int nctemp11327=CodeEs(nctemp11321,nctemp11323);
}
else{
struct tree* nctemp11329= p;
int nctemp11333=l;
nctempchar1* nctemp11331= i->a[nctemp11333].s;
int nctemp11336=CodeEs(nctemp11329,nctemp11331);
struct tree* nctemp11338= p;
struct nctempchar1 *nctemp11342;
static struct nctempchar1 nctemp11343 = {{ 2}, (char*)"=\0"};
nctemp11342=&nctemp11343;
nctempchar1* nctemp11340= nctemp11342;
int nctemp11344=CodeEs(nctemp11338,nctemp11340);
struct tree* nctemp11346= p;
struct nctempchar1 *nctemp11350;
static struct nctempchar1 nctemp11351 = {{ 2}, (char*)"(\0"};
nctemp11350=&nctemp11351;
nctempchar1* nctemp11348= nctemp11350;
int nctemp11352=CodeEs(nctemp11346,nctemp11348);
struct tree* nctemp11354= p;
nctempchar1* nctemp11356= pno;
int nctemp11359=CodeEs(nctemp11354,nctemp11356);
struct tree* nctemp11361= p;
struct nctempchar1 *nctemp11365;
static struct nctempchar1 nctemp11366 = {{ 2}, (char*)"/\0"};
nctemp11365=&nctemp11366;
nctempchar1* nctemp11363= nctemp11365;
int nctemp11367=CodeEs(nctemp11361,nctemp11363);
struct tree* nctemp11369= p;
struct nctempchar1 *nctemp11373;
static struct nctempchar1 nctemp11374 = {{ 2}, (char*)"(\0"};
nctemp11373=&nctemp11374;
nctempchar1* nctemp11371= nctemp11373;
int nctemp11375=CodeEs(nctemp11369,nctemp11371);
struct tree* nctemp11377= p;
nctempchar1* nctemp11379= qk;
int nctemp11382=CodeEs(nctemp11377,nctemp11379);
struct tree* nctemp11384= p;
struct nctempchar1 *nctemp11388;
static struct nctempchar1 nctemp11389 = {{ 2}, (char*)")\0"};
nctemp11388=&nctemp11389;
nctempchar1* nctemp11386= nctemp11388;
int nctemp11390=CodeEs(nctemp11384,nctemp11386);
struct tree* nctemp11392= p;
struct nctempchar1 *nctemp11396;
static struct nctempchar1 nctemp11397 = {{ 2}, (char*)")\0"};
nctemp11396=&nctemp11397;
nctempchar1* nctemp11394= nctemp11396;
int nctemp11398=CodeEs(nctemp11392,nctemp11394);
struct tree* nctemp11400= p;
struct nctempchar1 *nctemp11404;
static struct nctempchar1 nctemp11405 = {{ 2}, (char*)"%\0"};
nctemp11404=&nctemp11405;
nctempchar1* nctemp11402= nctemp11404;
int nctemp11406=CodeEs(nctemp11400,nctemp11402);
struct tree* nctemp11408= p;
int nctemp11412=l;
nctempchar1* nctemp11410= m->a[nctemp11412].s;
int nctemp11415=CodeEs(nctemp11408,nctemp11410);
struct tree* nctemp11417= p;
struct nctempchar1 *nctemp11421;
static struct nctempchar1 nctemp11422 = {{ 2}, (char*)"+\0"};
nctemp11421=&nctemp11422;
nctempchar1* nctemp11419= nctemp11421;
int nctemp11423=CodeEs(nctemp11417,nctemp11419);
struct tree* nctemp11425= p;
int nctemp11429=l;
nctempchar1* nctemp11427= nl->a[nctemp11429].s;
int nctemp11432=CodeEs(nctemp11425,nctemp11427);
int nctemp11435=l;
RunFree(nl->a[nctemp11435].s->a);
RunFree(nl->a[nctemp11435].s);
struct tree* nctemp11439= p;
struct nctempchar1 *nctemp11443;
static struct nctempchar1 nctemp11444 = {{ 4}, (char*)";\n\0"};
nctemp11443=&nctemp11444;
nctempchar1* nctemp11441= nctemp11443;
int nctemp11445=CodeEs(nctemp11439,nctemp11441);
}
nctempchar1* nctemp11451= qk;
struct nctempchar1 *nctemp11456;
static struct nctempchar1 nctemp11457 = {{ 2}, (char*)"*\0"};
nctemp11456=&nctemp11457;
nctempchar1* nctemp11454= nctemp11456;
nctempchar1* nctemp11458=LibeStradd(nctemp11451,nctemp11454);
tmp=nctemp11458;
RunFree(qk->a);
RunFree(qk);
qk=tmp;
nctempchar1* nctemp11473= qk;
int nctemp11478=l;
nctempchar1* nctemp11476= m->a[nctemp11478].s;
nctempchar1* nctemp11481=LibeStradd(nctemp11473,nctemp11476);
tmp=nctemp11481;
RunFree(qk->a);
RunFree(qk);
qk=tmp;
}
int nctemp11499 = l + 1;
l =nctemp11499;
int nctemp11500 = (l < rank);
nctemp11214=nctemp11500;
}
struct tree* nctemp11508= sp;
struct tree* nctemp11510=PtreeMvchild(nctemp11508);
p =nctemp11510;
struct tree* nctemp11515= p;
struct tree* nctemp11517=PtreeMvsister(nctemp11515);
p =nctemp11517;
struct tree* nctemp11519= p;
int nctemp11521=CodeCompstmnt(nctemp11519);
struct tree* nctemp11523= p;
struct nctempchar1 *nctemp11527;
static struct nctempchar1 nctemp11528 = {{ 4}, (char*)"}\n\0"};
nctemp11527=&nctemp11528;
nctempchar1* nctemp11525= nctemp11527;
int nctemp11529=CodeEs(nctemp11523,nctemp11525);
struct tree* nctemp11531= p;
struct nctempchar1 *nctemp11535;
static struct nctempchar1 nctemp11536 = {{ 4}, (char*)"}\n\0"};
nctemp11535=&nctemp11536;
nctempchar1* nctemp11533= nctemp11535;
int nctemp11537=CodeEs(nctemp11531,nctemp11533);
int nctemp11539= 0;
int nctemp11541=CodeSetparallel(nctemp11539);
return 1;
}
int CodeParallelstmnt (struct tree* p)
{
int nctemp11546=CodeGetarch();
int nctemp11543 = (nctemp11546 ==1);
if(nctemp11543)
{
struct tree* nctemp11549= p;
int nctemp11551=CodeParallelstmntcpu(nctemp11549);
}
else{
int nctemp11555=CodeGetarch();
int nctemp11552 = (nctemp11555 ==2);
if(nctemp11552)
{
struct tree* nctemp11558= p;
int nctemp11560=CodeParallelstmntgpu(nctemp11558);
}
else{
int nctemp11564=CodeGetarch();
int nctemp11561 = (nctemp11564 ==3);
if(nctemp11561)
{
struct tree* nctemp11567= p;
int nctemp11569=CodeParallelstmntgpu(nctemp11567);
}
}
}
return 1;
}
int CodeIfstmnt (struct tree* p)
{
nctempchar1 *cond;
struct tree* nctemp11575= p;
struct tree* nctemp11577=PtreeMvchild(nctemp11575);
p =nctemp11577;
struct tree* nctemp11583= p;
nctempchar1* nctemp11585=CodeExpr(nctemp11583);
cond=nctemp11585;
struct tree* nctemp11587= p;
struct nctempchar1 *nctemp11591;
static struct nctempchar1 nctemp11592 = {{ 4}, (char*)"if(\0"};
nctemp11591=&nctemp11592;
nctempchar1* nctemp11589= nctemp11591;
int nctemp11593=CodeEs(nctemp11587,nctemp11589);
struct tree* nctemp11595= p;
nctempchar1* nctemp11597= cond;
int nctemp11600=CodeEs(nctemp11595,nctemp11597);
struct tree* nctemp11602= p;
struct nctempchar1 *nctemp11606;
static struct nctempchar1 nctemp11607 = {{ 4}, (char*)")\n\0"};
nctemp11606=&nctemp11607;
nctempchar1* nctemp11604= nctemp11606;
int nctemp11608=CodeEs(nctemp11602,nctemp11604);
struct tree* nctemp11613= p;
struct tree* nctemp11615=PtreeMvsister(nctemp11613);
p =nctemp11615;
struct tree* nctemp11617= p;
int nctemp11619=CodeStmnt(nctemp11617);
struct tree* nctemp11627= p;
struct tree* nctemp11629=PtreeMvsister(nctemp11627);
p =nctemp11629;
int nctemp11620 = (p !=0);
if(nctemp11620)
{
struct tree* nctemp11636= p;
nctempchar1* nctemp11638=PtreeGetname(nctemp11636);
nctempchar1* nctemp11634= nctemp11638;
struct nctempchar1 *nctemp11641;
static struct nctempchar1 nctemp11642 = {{ 5}, (char*)"else\0"};
nctemp11641=&nctemp11642;
nctempchar1* nctemp11639= nctemp11641;
int nctemp11643=LibeStrcmp(nctemp11634,nctemp11639);
int nctemp11631 = (nctemp11643 ==1);
if(nctemp11631)
{
struct tree* nctemp11649= p;
struct tree* nctemp11651=PtreeMvchild(nctemp11649);
p =nctemp11651;
struct tree* nctemp11653= p;
struct nctempchar1 *nctemp11657;
static struct nctempchar1 nctemp11658 = {{ 5}, (char*)"else\0"};
nctemp11657=&nctemp11658;
nctempchar1* nctemp11655= nctemp11657;
int nctemp11659=CodeEs(nctemp11653,nctemp11655);
struct tree* nctemp11661= p;
int nctemp11663=CodeStmnt(nctemp11661);
}
}
return 1;
}
int CodeReturnstmnt (struct tree* p)
{
struct tree* np;
nctempchar1 *rval;
struct tree* nctemp11669= p;
struct tree* nctemp11671=PtreeMvchild(nctemp11669);
np =nctemp11671;
struct tree* nctemp11677= np;
nctempchar1* nctemp11679=CodeExpr(nctemp11677);
rval=nctemp11679;
struct tree* nctemp11681= np;
struct nctempchar1 *nctemp11685;
static struct nctempchar1 nctemp11686 = {{ 8}, (char*)"return \0"};
nctemp11685=&nctemp11686;
nctempchar1* nctemp11683= nctemp11685;
int nctemp11687=CodeEs(nctemp11681,nctemp11683);
struct tree* nctemp11689= np;
nctempchar1* nctemp11691= rval;
int nctemp11694=CodeEs(nctemp11689,nctemp11691);
struct tree* nctemp11696= np;
struct nctempchar1 *nctemp11700;
static struct nctempchar1 nctemp11701 = {{ 4}, (char*)";\n\0"};
nctemp11700=&nctemp11701;
nctempchar1* nctemp11698= nctemp11700;
int nctemp11702=CodeEs(nctemp11696,nctemp11698);
return 1;
}
int CodeCompstmnt (struct tree* p)
{
struct tree* sp;
struct tree* q;
sp =p;
struct tree* nctemp11709= p;
struct nctempchar1 *nctemp11713;
static struct nctempchar1 nctemp11714 = {{ 4}, (char*)"{\n\0"};
nctemp11713=&nctemp11714;
nctempchar1* nctemp11711= nctemp11713;
int nctemp11715=CodeEs(nctemp11709,nctemp11711);
struct tree* nctemp11720= p;
struct tree* nctemp11722=PtreeMvchild(nctemp11720);
p =nctemp11722;
int nctemp11723 = (p ==0);
if(nctemp11723)
{
struct tree* nctemp11728= sp;
struct nctempchar1 *nctemp11732;
static struct nctempchar1 nctemp11733 = {{ 4}, (char*)"}\n\0"};
nctemp11732=&nctemp11733;
nctempchar1* nctemp11730= nctemp11732;
int nctemp11734=CodeEs(nctemp11728,nctemp11730);
return 1;
}
struct tree* nctemp11737= p;
struct symbol* nctemp11741=SymGetltp();
struct symbol* nctemp11739= nctemp11741;
int nctemp11742=CodeDeclarations(nctemp11737,nctemp11739);
struct tree* nctemp11748= p;
nctempchar1* nctemp11750=PtreeGetname(nctemp11748);
nctempchar1* nctemp11746= nctemp11750;
struct nctempchar1 *nctemp11753;
static struct nctempchar1 nctemp11754 = {{ 13}, (char*)"declarations\0"};
nctemp11753=&nctemp11754;
nctempchar1* nctemp11751= nctemp11753;
int nctemp11755=LibeStrcmp(nctemp11746,nctemp11751);
int nctemp11743 = (nctemp11755 ==1);
if(nctemp11743)
{
struct tree* nctemp11761= p;
struct tree* nctemp11763=PtreeMvsister(nctemp11761);
p =nctemp11763;
}
int nctemp11764 = (p !=0);
int nctemp11768=nctemp11764;
while(nctemp11768)
{{
struct tree* nctemp11774= p;
nctempchar1* nctemp11776=PtreeGetname(nctemp11774);
nctempchar1* nctemp11772= nctemp11776;
struct nctempchar1 *nctemp11779;
static struct nctempchar1 nctemp11780 = {{ 5}, (char*)"expr\0"};
nctemp11779=&nctemp11780;
nctempchar1* nctemp11777= nctemp11779;
int nctemp11781=LibeStrcmp(nctemp11772,nctemp11777);
int nctemp11769 = (nctemp11781 ==1);
if(nctemp11769)
{
struct tree* nctemp11784= p;
nctempchar1* nctemp11786=CodeExpr(nctemp11784);
}
struct tree* nctemp11792= p;
nctempchar1* nctemp11794=PtreeGetname(nctemp11792);
nctempchar1* nctemp11790= nctemp11794;
struct nctempchar1 *nctemp11797;
static struct nctempchar1 nctemp11798 = {{ 6}, (char*)"while\0"};
nctemp11797=&nctemp11798;
nctempchar1* nctemp11795= nctemp11797;
int nctemp11799=LibeStrcmp(nctemp11790,nctemp11795);
int nctemp11787 = (nctemp11799 ==1);
if(nctemp11787)
{
struct tree* nctemp11802= p;
int nctemp11804=CodeWhilestmnt(nctemp11802);
}
struct tree* nctemp11810= p;
nctempchar1* nctemp11812=PtreeGetname(nctemp11810);
nctempchar1* nctemp11808= nctemp11812;
struct nctempchar1 *nctemp11815;
static struct nctempchar1 nctemp11816 = {{ 4}, (char*)"for\0"};
nctemp11815=&nctemp11816;
nctempchar1* nctemp11813= nctemp11815;
int nctemp11817=LibeStrcmp(nctemp11808,nctemp11813);
int nctemp11805 = (nctemp11817 ==1);
if(nctemp11805)
{
struct tree* nctemp11823= p;
struct tree* nctemp11825=PtreeMvchild(nctemp11823);
q =nctemp11825;
struct tree* nctemp11827= q;
struct tree* nctemp11829=PtreeMvsister(nctemp11827);
struct tree* nctemp11831= p;
int nctemp11833=CodeForstmnt(nctemp11831);
}
struct tree* nctemp11839= p;
nctempchar1* nctemp11841=PtreeGetname(nctemp11839);
nctempchar1* nctemp11837= nctemp11841;
struct nctempchar1 *nctemp11844;
static struct nctempchar1 nctemp11845 = {{ 9}, (char*)"parallel\0"};
nctemp11844=&nctemp11845;
nctempchar1* nctemp11842= nctemp11844;
int nctemp11846=LibeStrcmp(nctemp11837,nctemp11842);
int nctemp11834 = (nctemp11846 ==1);
if(nctemp11834)
{
struct tree* nctemp11849= p;
int nctemp11851=CodeParallelstmnt(nctemp11849);
}
struct tree* nctemp11857= p;
nctempchar1* nctemp11859=PtreeGetname(nctemp11857);
nctempchar1* nctemp11855= nctemp11859;
struct nctempchar1 *nctemp11862;
static struct nctempchar1 nctemp11863 = {{ 3}, (char*)"if\0"};
nctemp11862=&nctemp11863;
nctempchar1* nctemp11860= nctemp11862;
int nctemp11864=LibeStrcmp(nctemp11855,nctemp11860);
int nctemp11852 = (nctemp11864 ==1);
if(nctemp11852)
{
struct tree* nctemp11867= p;
int nctemp11869=CodeIfstmnt(nctemp11867);
}
struct tree* nctemp11875= p;
nctempchar1* nctemp11877=PtreeGetname(nctemp11875);
nctempchar1* nctemp11873= nctemp11877;
struct nctempchar1 *nctemp11880;
static struct nctempchar1 nctemp11881 = {{ 7}, (char*)"return\0"};
nctemp11880=&nctemp11881;
nctempchar1* nctemp11878= nctemp11880;
int nctemp11882=LibeStrcmp(nctemp11873,nctemp11878);
int nctemp11870 = (nctemp11882 ==1);
if(nctemp11870)
{
struct tree* nctemp11885= p;
int nctemp11887=CodeReturnstmnt(nctemp11885);
}
struct tree* nctemp11892= p;
struct tree* nctemp11894=PtreeMvsister(nctemp11892);
p =nctemp11894;
}
int nctemp11895 = (p !=0);
nctemp11768=nctemp11895;}struct tree* nctemp11900= sp;
struct nctempchar1 *nctemp11904;
static struct nctempchar1 nctemp11905 = {{ 4}, (char*)"}\n\0"};
nctemp11904=&nctemp11905;
nctempchar1* nctemp11902= nctemp11904;
int nctemp11906=CodeEs(nctemp11900,nctemp11902);
return 1;
}
int CodeStmnt (struct tree* p)
{
struct tree* sp;
sp =p;
struct tree* nctemp11913= p;
struct nctempchar1 *nctemp11917;
static struct nctempchar1 nctemp11918 = {{ 4}, (char*)"{\n\0"};
nctemp11917=&nctemp11918;
nctempchar1* nctemp11915= nctemp11917;
int nctemp11919=CodeEs(nctemp11913,nctemp11915);
struct tree* nctemp11925= p;
nctempchar1* nctemp11927=PtreeGetname(nctemp11925);
nctempchar1* nctemp11923= nctemp11927;
struct nctempchar1 *nctemp11930;
static struct nctempchar1 nctemp11931 = {{ 10}, (char*)"compstmnt\0"};
nctemp11930=&nctemp11931;
nctempchar1* nctemp11928= nctemp11930;
int nctemp11932=LibeStrcmp(nctemp11923,nctemp11928);
int nctemp11920 = (nctemp11932 ==1);
if(nctemp11920)
{
struct tree* nctemp11938= p;
struct tree* nctemp11940=PtreeMvchild(nctemp11938);
p =nctemp11940;
struct tree* nctemp11942= p;
struct symbol* nctemp11946=SymGetltp();
struct symbol* nctemp11944= nctemp11946;
int nctemp11947=CodeDeclarations(nctemp11942,nctemp11944);
struct tree* nctemp11953= p;
nctempchar1* nctemp11955=PtreeGetname(nctemp11953);
nctempchar1* nctemp11951= nctemp11955;
struct nctempchar1 *nctemp11958;
static struct nctempchar1 nctemp11959 = {{ 13}, (char*)"declarations\0"};
nctemp11958=&nctemp11959;
nctempchar1* nctemp11956= nctemp11958;
int nctemp11960=LibeStrcmp(nctemp11951,nctemp11956);
int nctemp11948 = (nctemp11960 ==1);
if(nctemp11948)
{
struct tree* nctemp11966= p;
struct tree* nctemp11968=PtreeMvsister(nctemp11966);
p =nctemp11968;
}
}
int nctemp11969 = (p !=0);
int nctemp11973=nctemp11969;
while(nctemp11973)
{{
struct tree* nctemp11979= p;
nctempchar1* nctemp11981=PtreeGetname(nctemp11979);
nctempchar1* nctemp11977= nctemp11981;
struct nctempchar1 *nctemp11984;
static struct nctempchar1 nctemp11985 = {{ 10}, (char*)"compstmnt\0"};
nctemp11984=&nctemp11985;
nctempchar1* nctemp11982= nctemp11984;
int nctemp11986=LibeStrcmp(nctemp11977,nctemp11982);
int nctemp11974 = (nctemp11986 ==1);
if(nctemp11974)
{
struct tree* nctemp11989= p;
int nctemp11991=CodeCompstmnt(nctemp11989);
}
struct tree* nctemp11997= p;
nctempchar1* nctemp11999=PtreeGetname(nctemp11997);
nctempchar1* nctemp11995= nctemp11999;
struct nctempchar1 *nctemp12002;
static struct nctempchar1 nctemp12003 = {{ 5}, (char*)"expr\0"};
nctemp12002=&nctemp12003;
nctempchar1* nctemp12000= nctemp12002;
int nctemp12004=LibeStrcmp(nctemp11995,nctemp12000);
int nctemp11992 = (nctemp12004 ==1);
if(nctemp11992)
{
struct tree* nctemp12007= p;
nctempchar1* nctemp12009=CodeExpr(nctemp12007);
}
struct tree* nctemp12015= p;
nctempchar1* nctemp12017=PtreeGetname(nctemp12015);
nctempchar1* nctemp12013= nctemp12017;
struct nctempchar1 *nctemp12020;
static struct nctempchar1 nctemp12021 = {{ 6}, (char*)"while\0"};
nctemp12020=&nctemp12021;
nctempchar1* nctemp12018= nctemp12020;
int nctemp12022=LibeStrcmp(nctemp12013,nctemp12018);
int nctemp12010 = (nctemp12022 ==1);
if(nctemp12010)
{
struct tree* nctemp12025= p;
int nctemp12027=CodeWhilestmnt(nctemp12025);
}
struct tree* nctemp12033= p;
nctempchar1* nctemp12035=PtreeGetname(nctemp12033);
nctempchar1* nctemp12031= nctemp12035;
struct nctempchar1 *nctemp12038;
static struct nctempchar1 nctemp12039 = {{ 4}, (char*)"for\0"};
nctemp12038=&nctemp12039;
nctempchar1* nctemp12036= nctemp12038;
int nctemp12040=LibeStrcmp(nctemp12031,nctemp12036);
int nctemp12028 = (nctemp12040 ==1);
if(nctemp12028)
{
struct tree* nctemp12043= p;
int nctemp12045=CodeForstmnt(nctemp12043);
}
struct tree* nctemp12051= p;
nctempchar1* nctemp12053=PtreeGetname(nctemp12051);
nctempchar1* nctemp12049= nctemp12053;
struct nctempchar1 *nctemp12056;
static struct nctempchar1 nctemp12057 = {{ 9}, (char*)"parallel\0"};
nctemp12056=&nctemp12057;
nctempchar1* nctemp12054= nctemp12056;
int nctemp12058=LibeStrcmp(nctemp12049,nctemp12054);
int nctemp12046 = (nctemp12058 ==1);
if(nctemp12046)
{
struct tree* nctemp12061= p;
int nctemp12063=CodeParallelstmnt(nctemp12061);
}
struct tree* nctemp12069= p;
nctempchar1* nctemp12071=PtreeGetname(nctemp12069);
nctempchar1* nctemp12067= nctemp12071;
struct nctempchar1 *nctemp12074;
static struct nctempchar1 nctemp12075 = {{ 3}, (char*)"if\0"};
nctemp12074=&nctemp12075;
nctempchar1* nctemp12072= nctemp12074;
int nctemp12076=LibeStrcmp(nctemp12067,nctemp12072);
int nctemp12064 = (nctemp12076 ==1);
if(nctemp12064)
{
struct tree* nctemp12079= p;
int nctemp12081=CodeIfstmnt(nctemp12079);
}
struct tree* nctemp12087= p;
nctempchar1* nctemp12089=PtreeGetname(nctemp12087);
nctempchar1* nctemp12085= nctemp12089;
struct nctempchar1 *nctemp12092;
static struct nctempchar1 nctemp12093 = {{ 7}, (char*)"return\0"};
nctemp12092=&nctemp12093;
nctempchar1* nctemp12090= nctemp12092;
int nctemp12094=LibeStrcmp(nctemp12085,nctemp12090);
int nctemp12082 = (nctemp12094 ==1);
if(nctemp12082)
{
struct tree* nctemp12097= p;
int nctemp12099=CodeReturnstmnt(nctemp12097);
}
struct tree* nctemp12104= p;
struct tree* nctemp12106=PtreeMvsister(nctemp12104);
p =nctemp12106;
}
int nctemp12107 = (p !=0);
nctemp11973=nctemp12107;}struct tree* nctemp12112= sp;
struct nctempchar1 *nctemp12116;
static struct nctempchar1 nctemp12117 = {{ 4}, (char*)"}\n\0"};
nctemp12116=&nctemp12117;
nctempchar1* nctemp12114= nctemp12116;
int nctemp12118=CodeEs(nctemp12112,nctemp12114);
return 1;
}
int CodeNewdescr (struct tree* p,nctempchar1 *pointer)
{
struct tree* nctemp12121= p;
nctempchar1* nctemp12123= pointer;
int nctemp12126=CodeEs(nctemp12121,nctemp12123);
struct tree* nctemp12128= p;
struct nctempchar1 *nctemp12132;
static struct nctempchar1 nctemp12133 = {{ 2}, (char*)"=\0"};
nctemp12132=&nctemp12133;
nctempchar1* nctemp12130= nctemp12132;
int nctemp12134=CodeEs(nctemp12128,nctemp12130);
struct tree* nctemp12136= p;
struct nctempchar1 *nctemp12140;
static struct nctempchar1 nctemp12141 = {{ 11}, (char*)"RunMalloc(\0"};
nctemp12140=&nctemp12141;
nctempchar1* nctemp12138= nctemp12140;
int nctemp12142=CodeEs(nctemp12136,nctemp12138);
struct tree* nctemp12144= p;
struct nctempchar1 *nctemp12148;
static struct nctempchar1 nctemp12149 = {{ 8}, (char*)"sizeof(\0"};
nctemp12148=&nctemp12149;
nctempchar1* nctemp12146= nctemp12148;
int nctemp12150=CodeEs(nctemp12144,nctemp12146);
struct tree* nctemp12152= p;
nctempchar1* nctemp12154= pointer;
int nctemp12157=CodeEs(nctemp12152,nctemp12154);
struct tree* nctemp12159= p;
struct nctempchar1 *nctemp12163;
static struct nctempchar1 nctemp12164 = {{ 6}, (char*)"));\n\0"};
nctemp12163=&nctemp12164;
nctempchar1* nctemp12161= nctemp12163;
int nctemp12165=CodeEs(nctemp12159,nctemp12161);
return 1;
}
int CodeFdef (struct tree* p)
{
int nctemp12170=CodeGetarch();
int nctemp12167 = (nctemp12170 ==1);
if(nctemp12167)
{
struct tree* nctemp12173= p;
int nctemp12175=CodeFdefcpu(nctemp12173);
}
else{
int nctemp12179=CodeGetarch();
int nctemp12176 = (nctemp12179 ==2);
if(nctemp12176)
{
struct tree* nctemp12188= p;
struct tree* nctemp12190=PtreeMvchild(nctemp12188);
struct tree* nctemp12186= nctemp12190;
nctempchar1* nctemp12191=PtreeGetparallel(nctemp12186);
nctempchar1* nctemp12184= nctemp12191;
struct nctempchar1 *nctemp12194;
static struct nctempchar1 nctemp12195 = {{ 9}, (char*)"parallel\0"};
nctemp12194=&nctemp12195;
nctempchar1* nctemp12192= nctemp12194;
int nctemp12196=LibeStrcmp(nctemp12184,nctemp12192);
int nctemp12181 = (nctemp12196 ==1);
if(nctemp12181)
{
struct tree* nctemp12199= p;
int nctemp12201=CodeFdefgpu(nctemp12199);
struct tree* nctemp12203= p;
int nctemp12205=CodeFdewrappergpu(nctemp12203);
}
else{
struct tree* nctemp12207= p;
int nctemp12209=CodeFdefcpu(nctemp12207);
}
}
else{
int nctemp12213=CodeGetarch();
int nctemp12210 = (nctemp12213 ==3);
if(nctemp12210)
{
struct tree* nctemp12220= p;
nctempchar1* nctemp12222=PtreeGetparallel(nctemp12220);
nctempchar1* nctemp12218= nctemp12222;
struct nctempchar1 *nctemp12225;
static struct nctempchar1 nctemp12226 = {{ 9}, (char*)"parallel\0"};
nctemp12225=&nctemp12226;
nctempchar1* nctemp12223= nctemp12225;
int nctemp12227=LibeStrcmp(nctemp12218,nctemp12223);
int nctemp12215 = (nctemp12227 ==1);
if(nctemp12215)
{
struct tree* nctemp12230= p;
int nctemp12232=CodeFdefgpu(nctemp12230);
struct tree* nctemp12234= p;
int nctemp12236=CodeFdewrappergpu(nctemp12234);
}
else{
struct tree* nctemp12238= p;
int nctemp12240=CodeFdefcpu(nctemp12238);
}
}
}
}
return 1;
}
int CodePreamblecpu ()
{
struct tree* p;
struct nctempchar1 *nctemp12248;
static struct nctempchar1 nctemp12249 = {{ 6}, (char*)"dummy\0"};
nctemp12248=&nctemp12249;
nctempchar1* nctemp12246= nctemp12248;
struct nctempchar1 *nctemp12252;
static struct nctempchar1 nctemp12253 = {{ 6}, (char*)"dummy\0"};
nctemp12252=&nctemp12253;
nctempchar1* nctemp12250= nctemp12252;
struct tree* nctemp12254=PtreeMknode(nctemp12246,nctemp12250);
p =nctemp12254;
struct tree* nctemp12256= p;
int nctemp12258= 1;
int nctemp12260=PtreeSetline(nctemp12256,nctemp12258);
struct tree* nctemp12262= p;
struct nctempchar1 *nctemp12266;
static struct nctempchar1 nctemp12267 = {{ 42}, (char*)"//  Translated by epsc  version today  \n\0"};
nctemp12266=&nctemp12267;
nctempchar1* nctemp12264= nctemp12266;
int nctemp12268=CodeEs(nctemp12262,nctemp12264);
struct tree* nctemp12270= p;
int nctemp12272= 2;
int nctemp12274=PtreeSetline(nctemp12270,nctemp12272);
struct tree* nctemp12276= p;
int nctemp12278= 3;
int nctemp12280=PtreeSetline(nctemp12276,nctemp12278);
struct tree* nctemp12282= p;
int nctemp12284= 4;
int nctemp12286=PtreeSetline(nctemp12282,nctemp12284);
struct tree* nctemp12288= p;
struct nctempchar1 *nctemp12292;
static struct nctempchar1 nctemp12293 = {{ 22}, (char*)"#include <stddef.h>\n\0"};
nctemp12292=&nctemp12293;
nctempchar1* nctemp12290= nctemp12292;
int nctemp12294=CodeEs(nctemp12288,nctemp12290);
struct tree* nctemp12296= p;
struct nctempchar1 *nctemp12300;
static struct nctempchar1 nctemp12301 = {{ 21}, (char*)"#include <stdio.h>\n\0"};
nctemp12300=&nctemp12301;
nctempchar1* nctemp12298= nctemp12300;
int nctemp12302=CodeEs(nctemp12296,nctemp12298);
struct tree* nctemp12304= p;
struct nctempchar1 *nctemp12308;
static struct nctempchar1 nctemp12309 = {{ 22}, (char*)"#include <assert.h>\n\0"};
nctemp12308=&nctemp12309;
nctempchar1* nctemp12306= nctemp12308;
int nctemp12310=CodeEs(nctemp12304,nctemp12306);
struct tree* nctemp12312= p;
struct nctempchar1 *nctemp12316;
static struct nctempchar1 nctemp12317 = {{ 48}, (char*)"typedef struct { float r; float i;} complex; \n\0"};
nctemp12316=&nctemp12317;
nctempchar1* nctemp12314= nctemp12316;
int nctemp12318=CodeEs(nctemp12312,nctemp12314);
struct tree* nctemp12320= p;
int nctemp12322= 3;
int nctemp12324=PtreeSetline(nctemp12320,nctemp12322);
struct tree* nctemp12326= p;
struct nctempchar1 *nctemp12330;
static struct nctempchar1 nctemp12331 = {{ 68}, (char*)"typedef struct nctempfloat1 { int d[1]; float *a;} nctempfloat1; \n\0"};
nctemp12330=&nctemp12331;
nctempchar1* nctemp12328= nctemp12330;
int nctemp12332=CodeEs(nctemp12326,nctemp12328);
struct tree* nctemp12334= p;
int nctemp12336= 5;
int nctemp12338=PtreeSetline(nctemp12334,nctemp12336);
struct tree* nctemp12340= p;
struct nctempchar1 *nctemp12344;
static struct nctempchar1 nctemp12345 = {{ 62}, (char*)"typedef struct nctempint1 { int d[1]; int *a;} nctempint1; \n\0"};
nctemp12344=&nctemp12345;
nctempchar1* nctemp12342= nctemp12344;
int nctemp12346=CodeEs(nctemp12340,nctemp12342);
struct tree* nctemp12348= p;
int nctemp12350= 7;
int nctemp12352=PtreeSetline(nctemp12348,nctemp12350);
struct tree* nctemp12354= p;
struct nctempchar1 *nctemp12358;
static struct nctempchar1 nctemp12359 = {{ 65}, (char*)"typedef struct nctempchar1 { int d[1]; char *a;} nctempchar1; \n\0"};
nctemp12358=&nctemp12359;
nctempchar1* nctemp12356= nctemp12358;
int nctemp12360=CodeEs(nctemp12354,nctemp12356);
struct tree* nctemp12362= p;
int nctemp12364= 7;
int nctemp12366=PtreeSetline(nctemp12362,nctemp12364);
struct tree* nctemp12368= p;
struct nctempchar1 *nctemp12372;
static struct nctempchar1 nctemp12373 = {{ 74}, (char*)"typedef struct nctempcomplex1 { int d[1]; complex *a;} nctempcomplex1; \n\0"};
nctemp12372=&nctemp12373;
nctempchar1* nctemp12370= nctemp12372;
int nctemp12374=CodeEs(nctemp12368,nctemp12370);
struct tree* nctemp12376= p;
int nctemp12378= 8;
int nctemp12380=PtreeSetline(nctemp12376,nctemp12378);
int nctemp12384=CodeArraycheck();
int nctemp12381 = (nctemp12384 ==1);
if(nctemp12381)
{
struct tree* nctemp12387= p;
struct nctempchar1 *nctemp12391;
static struct nctempchar1 nctemp12392 = {{ 55}, (char*)"static struct nctempchar1 nctempstringx = {0, NULL};\n\0"};
nctemp12391=&nctemp12392;
nctempchar1* nctemp12389= nctemp12391;
int nctemp12393=CodeEs(nctemp12387,nctemp12389);
struct tree* nctemp12395= p;
struct nctempchar1 *nctemp12399;
static struct nctempchar1 nctemp12400 = {{ 60}, (char*)"static struct nctempchar1 *nctempstring = &nctempstringx;\n\0"};
nctemp12399=&nctemp12400;
nctempchar1* nctemp12397= nctemp12399;
int nctemp12401=CodeEs(nctemp12395,nctemp12397);
struct tree* nctemp12403= p;
int nctemp12405= 8;
int nctemp12407=PtreeSetline(nctemp12403,nctemp12405);
}
struct tree* nctemp12409= p;
struct nctempchar1 *nctemp12413;
static struct nctempchar1 nctemp12414 = {{ 68}, (char*)"typedef struct nctempfloat2 { int d[2]; float *a;} nctempfloat2; \n\0"};
nctemp12413=&nctemp12414;
nctempchar1* nctemp12411= nctemp12413;
int nctemp12415=CodeEs(nctemp12409,nctemp12411);
struct tree* nctemp12417= p;
int nctemp12419= 10;
int nctemp12421=PtreeSetline(nctemp12417,nctemp12419);
struct tree* nctemp12423= p;
struct nctempchar1 *nctemp12427;
static struct nctempchar1 nctemp12428 = {{ 62}, (char*)"typedef struct nctempint2 { int d[2]; int *a;} nctempint2; \n\0"};
nctemp12427=&nctemp12428;
nctempchar1* nctemp12425= nctemp12427;
int nctemp12429=CodeEs(nctemp12423,nctemp12425);
struct tree* nctemp12431= p;
int nctemp12433= 10;
int nctemp12435=PtreeSetline(nctemp12431,nctemp12433);
struct tree* nctemp12437= p;
struct nctempchar1 *nctemp12441;
static struct nctempchar1 nctemp12442 = {{ 65}, (char*)"typedef struct nctempchar2 { int d[2]; char *a;} nctempchar2; \n\0"};
nctemp12441=&nctemp12442;
nctempchar1* nctemp12439= nctemp12441;
int nctemp12443=CodeEs(nctemp12437,nctemp12439);
struct tree* nctemp12445= p;
int nctemp12447= 12;
int nctemp12449=PtreeSetline(nctemp12445,nctemp12447);
struct tree* nctemp12451= p;
struct nctempchar1 *nctemp12455;
static struct nctempchar1 nctemp12456 = {{ 74}, (char*)"typedef struct nctempcomplex2 { int d[2]; complex *a;} nctempcomplex2; \n\0"};
nctemp12455=&nctemp12456;
nctempchar1* nctemp12453= nctemp12455;
int nctemp12457=CodeEs(nctemp12451,nctemp12453);
struct tree* nctemp12459= p;
int nctemp12461= 13;
int nctemp12463=PtreeSetline(nctemp12459,nctemp12461);
struct tree* nctemp12465= p;
struct nctempchar1 *nctemp12469;
static struct nctempchar1 nctemp12470 = {{ 68}, (char*)"typedef struct nctempfloat3 { int d[3]; float *a;} nctempfloat3; \n\0"};
nctemp12469=&nctemp12470;
nctempchar1* nctemp12467= nctemp12469;
int nctemp12471=CodeEs(nctemp12465,nctemp12467);
struct tree* nctemp12473= p;
int nctemp12475= 14;
int nctemp12477=PtreeSetline(nctemp12473,nctemp12475);
struct tree* nctemp12479= p;
struct nctempchar1 *nctemp12483;
static struct nctempchar1 nctemp12484 = {{ 62}, (char*)"typedef struct nctempint3 { int d[3]; int *a;} nctempint3; \n\0"};
nctemp12483=&nctemp12484;
nctempchar1* nctemp12481= nctemp12483;
int nctemp12485=CodeEs(nctemp12479,nctemp12481);
struct tree* nctemp12487= p;
int nctemp12489= 15;
int nctemp12491=PtreeSetline(nctemp12487,nctemp12489);
struct tree* nctemp12493= p;
struct nctempchar1 *nctemp12497;
static struct nctempchar1 nctemp12498 = {{ 65}, (char*)"typedef struct nctempchar3 { int d[3]; char *a;} nctempchar3; \n\0"};
nctemp12497=&nctemp12498;
nctempchar1* nctemp12495= nctemp12497;
int nctemp12499=CodeEs(nctemp12493,nctemp12495);
struct tree* nctemp12501= p;
int nctemp12503= 16;
int nctemp12505=PtreeSetline(nctemp12501,nctemp12503);
struct tree* nctemp12507= p;
struct nctempchar1 *nctemp12511;
static struct nctempchar1 nctemp12512 = {{ 74}, (char*)"typedef struct nctempcomplex3 { int d[3]; complex *a;} nctempcomplex3; \n\0"};
nctemp12511=&nctemp12512;
nctempchar1* nctemp12509= nctemp12511;
int nctemp12513=CodeEs(nctemp12507,nctemp12509);
struct tree* nctemp12515= p;
int nctemp12517= 17;
int nctemp12519=PtreeSetline(nctemp12515,nctemp12517);
struct tree* nctemp12521= p;
struct nctempchar1 *nctemp12525;
static struct nctempchar1 nctemp12526 = {{ 68}, (char*)"typedef struct nctempfloat4 { int d[4]; float *a;} nctempfloat4; \n\0"};
nctemp12525=&nctemp12526;
nctempchar1* nctemp12523= nctemp12525;
int nctemp12527=CodeEs(nctemp12521,nctemp12523);
struct tree* nctemp12529= p;
int nctemp12531= 18;
int nctemp12533=PtreeSetline(nctemp12529,nctemp12531);
struct tree* nctemp12535= p;
struct nctempchar1 *nctemp12539;
static struct nctempchar1 nctemp12540 = {{ 62}, (char*)"typedef struct nctempint4 { int d[4]; int *a;} nctempint4; \n\0"};
nctemp12539=&nctemp12540;
nctempchar1* nctemp12537= nctemp12539;
int nctemp12541=CodeEs(nctemp12535,nctemp12537);
struct tree* nctemp12543= p;
int nctemp12545= 19;
int nctemp12547=PtreeSetline(nctemp12543,nctemp12545);
struct tree* nctemp12549= p;
struct nctempchar1 *nctemp12553;
static struct nctempchar1 nctemp12554 = {{ 65}, (char*)"typedef struct nctempchar4 { int d[4]; char *a;} nctempchar4; \n\0"};
nctemp12553=&nctemp12554;
nctempchar1* nctemp12551= nctemp12553;
int nctemp12555=CodeEs(nctemp12549,nctemp12551);
struct tree* nctemp12557= p;
int nctemp12559= 20;
int nctemp12561=PtreeSetline(nctemp12557,nctemp12559);
struct tree* nctemp12563= p;
struct nctempchar1 *nctemp12567;
static struct nctempchar1 nctemp12568 = {{ 74}, (char*)"typedef struct nctempcomplex4 { int d[4]; complex *a;} nctempcomplex4; \n\0"};
nctemp12567=&nctemp12568;
nctempchar1* nctemp12565= nctemp12567;
int nctemp12569=CodeEs(nctemp12563,nctemp12565);
struct tree* nctemp12571= p;
struct nctempchar1 *nctemp12575;
static struct nctempchar1 nctemp12576 = {{ 22}, (char*)"#include <stdlib.h>\n\0"};
nctemp12575=&nctemp12576;
nctempchar1* nctemp12573= nctemp12575;
int nctemp12577=CodeEs(nctemp12571,nctemp12573);
struct tree* nctemp12579= p;
struct nctempchar1 *nctemp12583;
static struct nctempchar1 nctemp12584 = {{ 22}, (char*)"#include <string.h>\n\0"};
nctemp12583=&nctemp12584;
nctempchar1* nctemp12581= nctemp12583;
int nctemp12585=CodeEs(nctemp12579,nctemp12581);
struct tree* nctemp12587= p;
struct nctempchar1 *nctemp12591;
static struct nctempchar1 nctemp12592 = {{ 27}, (char*)"void *RunMalloc(int n); \n\0"};
nctemp12591=&nctemp12592;
nctempchar1* nctemp12589= nctemp12591;
int nctemp12593=CodeEs(nctemp12587,nctemp12589);
struct tree* nctemp12595= p;
struct nctempchar1 *nctemp12599;
static struct nctempchar1 nctemp12600 = {{ 25}, (char*)"int RunFree(void *n); \n\0"};
nctemp12599=&nctemp12600;
nctempchar1* nctemp12597= nctemp12599;
int nctemp12601=CodeEs(nctemp12595,nctemp12597);
return 1;
}
int CodePreamblecuda ()
{
struct tree* p;
struct nctempchar1 *nctemp12609;
static struct nctempchar1 nctemp12610 = {{ 6}, (char*)"dummy\0"};
nctemp12609=&nctemp12610;
nctempchar1* nctemp12607= nctemp12609;
struct nctempchar1 *nctemp12613;
static struct nctempchar1 nctemp12614 = {{ 6}, (char*)"dummy\0"};
nctemp12613=&nctemp12614;
nctempchar1* nctemp12611= nctemp12613;
struct tree* nctemp12615=PtreeMknode(nctemp12607,nctemp12611);
p =nctemp12615;
struct tree* nctemp12617= p;
int nctemp12619= 1;
int nctemp12621=PtreeSetline(nctemp12617,nctemp12619);
struct tree* nctemp12623= p;
struct nctempchar1 *nctemp12627;
static struct nctempchar1 nctemp12628 = {{ 50}, (char*)"//  Translated by epsc  version December 2021  \n\0"};
nctemp12627=&nctemp12628;
nctempchar1* nctemp12625= nctemp12627;
int nctemp12629=CodeEs(nctemp12623,nctemp12625);
struct tree* nctemp12631= p;
int nctemp12633= 2;
int nctemp12635=PtreeSetline(nctemp12631,nctemp12633);
struct tree* nctemp12637= p;
int nctemp12639= 3;
int nctemp12641=PtreeSetline(nctemp12637,nctemp12639);
struct tree* nctemp12643= p;
struct nctempchar1 *nctemp12647;
static struct nctempchar1 nctemp12648 = {{ 17}, (char*)"extern \"C\" {\n\0"};
nctemp12647=&nctemp12648;
nctempchar1* nctemp12645= nctemp12647;
int nctemp12649=CodeEs(nctemp12643,nctemp12645);
struct tree* nctemp12651= p;
struct nctempchar1 *nctemp12655;
static struct nctempchar1 nctemp12656 = {{ 48}, (char*)"typedef struct { float r; float i;} complex; \n\0"};
nctemp12655=&nctemp12656;
nctempchar1* nctemp12653= nctemp12655;
int nctemp12657=CodeEs(nctemp12651,nctemp12653);
struct tree* nctemp12659= p;
int nctemp12661= 3;
int nctemp12663=PtreeSetline(nctemp12659,nctemp12661);
struct tree* nctemp12665= p;
struct nctempchar1 *nctemp12669;
static struct nctempchar1 nctemp12670 = {{ 68}, (char*)"typedef struct nctempfloat1 { int d[1]; float *a;} nctempfloat1; \n\0"};
nctemp12669=&nctemp12670;
nctempchar1* nctemp12667= nctemp12669;
int nctemp12671=CodeEs(nctemp12665,nctemp12667);
struct tree* nctemp12673= p;
int nctemp12675= 5;
int nctemp12677=PtreeSetline(nctemp12673,nctemp12675);
struct tree* nctemp12679= p;
struct nctempchar1 *nctemp12683;
static struct nctempchar1 nctemp12684 = {{ 62}, (char*)"typedef struct nctempint1 { int d[1]; int *a;} nctempint1; \n\0"};
nctemp12683=&nctemp12684;
nctempchar1* nctemp12681= nctemp12683;
int nctemp12685=CodeEs(nctemp12679,nctemp12681);
struct tree* nctemp12687= p;
int nctemp12689= 7;
int nctemp12691=PtreeSetline(nctemp12687,nctemp12689);
struct tree* nctemp12693= p;
struct nctempchar1 *nctemp12697;
static struct nctempchar1 nctemp12698 = {{ 65}, (char*)"typedef struct nctempchar1 { int d[1]; char *a;} nctempchar1; \n\0"};
nctemp12697=&nctemp12698;
nctempchar1* nctemp12695= nctemp12697;
int nctemp12699=CodeEs(nctemp12693,nctemp12695);
struct tree* nctemp12701= p;
int nctemp12703= 7;
int nctemp12705=PtreeSetline(nctemp12701,nctemp12703);
struct tree* nctemp12707= p;
struct nctempchar1 *nctemp12711;
static struct nctempchar1 nctemp12712 = {{ 74}, (char*)"typedef struct nctempcomplex1 { int d[1]; complex *a;} nctempcomplex1; \n\0"};
nctemp12711=&nctemp12712;
nctempchar1* nctemp12709= nctemp12711;
int nctemp12713=CodeEs(nctemp12707,nctemp12709);
struct tree* nctemp12715= p;
int nctemp12717= 8;
int nctemp12719=PtreeSetline(nctemp12715,nctemp12717);
int nctemp12723=CodeArraycheck();
int nctemp12720 = (nctemp12723 ==1);
if(nctemp12720)
{
struct tree* nctemp12726= p;
struct nctempchar1 *nctemp12730;
static struct nctempchar1 nctemp12731 = {{ 55}, (char*)"static struct nctempchar1 nctempstringx = {0, NULL};\n\0"};
nctemp12730=&nctemp12731;
nctempchar1* nctemp12728= nctemp12730;
int nctemp12732=CodeEs(nctemp12726,nctemp12728);
struct tree* nctemp12734= p;
struct nctempchar1 *nctemp12738;
static struct nctempchar1 nctemp12739 = {{ 60}, (char*)"static struct nctempchar1 *nctempstring = &nctempstringx;\n\0"};
nctemp12738=&nctemp12739;
nctempchar1* nctemp12736= nctemp12738;
int nctemp12740=CodeEs(nctemp12734,nctemp12736);
struct tree* nctemp12742= p;
int nctemp12744= 8;
int nctemp12746=PtreeSetline(nctemp12742,nctemp12744);
}
struct tree* nctemp12748= p;
struct nctempchar1 *nctemp12752;
static struct nctempchar1 nctemp12753 = {{ 68}, (char*)"typedef struct nctempfloat2 { int d[2]; float *a;} nctempfloat2; \n\0"};
nctemp12752=&nctemp12753;
nctempchar1* nctemp12750= nctemp12752;
int nctemp12754=CodeEs(nctemp12748,nctemp12750);
struct tree* nctemp12756= p;
int nctemp12758= 10;
int nctemp12760=PtreeSetline(nctemp12756,nctemp12758);
struct tree* nctemp12762= p;
struct nctempchar1 *nctemp12766;
static struct nctempchar1 nctemp12767 = {{ 62}, (char*)"typedef struct nctempint2 { int d[2]; int *a;} nctempint2; \n\0"};
nctemp12766=&nctemp12767;
nctempchar1* nctemp12764= nctemp12766;
int nctemp12768=CodeEs(nctemp12762,nctemp12764);
struct tree* nctemp12770= p;
int nctemp12772= 10;
int nctemp12774=PtreeSetline(nctemp12770,nctemp12772);
struct tree* nctemp12776= p;
struct nctempchar1 *nctemp12780;
static struct nctempchar1 nctemp12781 = {{ 65}, (char*)"typedef struct nctempchar2 { int d[2]; char *a;} nctempchar2; \n\0"};
nctemp12780=&nctemp12781;
nctempchar1* nctemp12778= nctemp12780;
int nctemp12782=CodeEs(nctemp12776,nctemp12778);
struct tree* nctemp12784= p;
int nctemp12786= 12;
int nctemp12788=PtreeSetline(nctemp12784,nctemp12786);
struct tree* nctemp12790= p;
struct nctempchar1 *nctemp12794;
static struct nctempchar1 nctemp12795 = {{ 74}, (char*)"typedef struct nctempcomplex2 { int d[2]; complex *a;} nctempcomplex2; \n\0"};
nctemp12794=&nctemp12795;
nctempchar1* nctemp12792= nctemp12794;
int nctemp12796=CodeEs(nctemp12790,nctemp12792);
struct tree* nctemp12798= p;
int nctemp12800= 13;
int nctemp12802=PtreeSetline(nctemp12798,nctemp12800);
struct tree* nctemp12804= p;
struct nctempchar1 *nctemp12808;
static struct nctempchar1 nctemp12809 = {{ 68}, (char*)"typedef struct nctempfloat3 { int d[3]; float *a;} nctempfloat3; \n\0"};
nctemp12808=&nctemp12809;
nctempchar1* nctemp12806= nctemp12808;
int nctemp12810=CodeEs(nctemp12804,nctemp12806);
struct tree* nctemp12812= p;
int nctemp12814= 14;
int nctemp12816=PtreeSetline(nctemp12812,nctemp12814);
struct tree* nctemp12818= p;
struct nctempchar1 *nctemp12822;
static struct nctempchar1 nctemp12823 = {{ 62}, (char*)"typedef struct nctempint3 { int d[3]; int *a;} nctempint3; \n\0"};
nctemp12822=&nctemp12823;
nctempchar1* nctemp12820= nctemp12822;
int nctemp12824=CodeEs(nctemp12818,nctemp12820);
struct tree* nctemp12826= p;
int nctemp12828= 15;
int nctemp12830=PtreeSetline(nctemp12826,nctemp12828);
struct tree* nctemp12832= p;
struct nctempchar1 *nctemp12836;
static struct nctempchar1 nctemp12837 = {{ 65}, (char*)"typedef struct nctempchar3 { int d[3]; char *a;} nctempchar3; \n\0"};
nctemp12836=&nctemp12837;
nctempchar1* nctemp12834= nctemp12836;
int nctemp12838=CodeEs(nctemp12832,nctemp12834);
struct tree* nctemp12840= p;
int nctemp12842= 16;
int nctemp12844=PtreeSetline(nctemp12840,nctemp12842);
struct tree* nctemp12846= p;
struct nctempchar1 *nctemp12850;
static struct nctempchar1 nctemp12851 = {{ 74}, (char*)"typedef struct nctempcomplex3 { int d[3]; complex *a;} nctempcomplex3; \n\0"};
nctemp12850=&nctemp12851;
nctempchar1* nctemp12848= nctemp12850;
int nctemp12852=CodeEs(nctemp12846,nctemp12848);
struct tree* nctemp12854= p;
int nctemp12856= 17;
int nctemp12858=PtreeSetline(nctemp12854,nctemp12856);
struct tree* nctemp12860= p;
struct nctempchar1 *nctemp12864;
static struct nctempchar1 nctemp12865 = {{ 68}, (char*)"typedef struct nctempfloat4 { int d[4]; float *a;} nctempfloat4; \n\0"};
nctemp12864=&nctemp12865;
nctempchar1* nctemp12862= nctemp12864;
int nctemp12866=CodeEs(nctemp12860,nctemp12862);
struct tree* nctemp12868= p;
int nctemp12870= 18;
int nctemp12872=PtreeSetline(nctemp12868,nctemp12870);
struct tree* nctemp12874= p;
struct nctempchar1 *nctemp12878;
static struct nctempchar1 nctemp12879 = {{ 62}, (char*)"typedef struct nctempint4 { int d[4]; int *a;} nctempint4; \n\0"};
nctemp12878=&nctemp12879;
nctempchar1* nctemp12876= nctemp12878;
int nctemp12880=CodeEs(nctemp12874,nctemp12876);
struct tree* nctemp12882= p;
int nctemp12884= 19;
int nctemp12886=PtreeSetline(nctemp12882,nctemp12884);
struct tree* nctemp12888= p;
struct nctempchar1 *nctemp12892;
static struct nctempchar1 nctemp12893 = {{ 65}, (char*)"typedef struct nctempchar4 { int d[4]; char *a;} nctempchar4; \n\0"};
nctemp12892=&nctemp12893;
nctempchar1* nctemp12890= nctemp12892;
int nctemp12894=CodeEs(nctemp12888,nctemp12890);
struct tree* nctemp12896= p;
int nctemp12898= 20;
int nctemp12900=PtreeSetline(nctemp12896,nctemp12898);
struct tree* nctemp12902= p;
struct nctempchar1 *nctemp12906;
static struct nctempchar1 nctemp12907 = {{ 74}, (char*)"typedef struct nctempcomplex4 { int d[4]; complex *a;} nctempcomplex4; \n\0"};
nctemp12906=&nctemp12907;
nctempchar1* nctemp12904= nctemp12906;
int nctemp12908=CodeEs(nctemp12902,nctemp12904);
struct tree* nctemp12910= p;
struct nctempchar1 *nctemp12914;
static struct nctempchar1 nctemp12915 = {{ 21}, (char*)"#include <stdio.h>\n\0"};
nctemp12914=&nctemp12915;
nctempchar1* nctemp12912= nctemp12914;
int nctemp12916=CodeEs(nctemp12910,nctemp12912);
struct tree* nctemp12918= p;
struct nctempchar1 *nctemp12922;
static struct nctempchar1 nctemp12923 = {{ 22}, (char*)"#include <stdlib.h>\n\0"};
nctemp12922=&nctemp12923;
nctempchar1* nctemp12920= nctemp12922;
int nctemp12924=CodeEs(nctemp12918,nctemp12920);
struct tree* nctemp12926= p;
struct nctempchar1 *nctemp12930;
static struct nctempchar1 nctemp12931 = {{ 22}, (char*)"#include <string.h>\n\0"};
nctemp12930=&nctemp12931;
nctempchar1* nctemp12928= nctemp12930;
int nctemp12932=CodeEs(nctemp12926,nctemp12928);
struct tree* nctemp12934= p;
struct nctempchar1 *nctemp12938;
static struct nctempchar1 nctemp12939 = {{ 22}, (char*)"#include <assert.h>\n\0"};
nctemp12938=&nctemp12939;
nctempchar1* nctemp12936= nctemp12938;
int nctemp12940=CodeEs(nctemp12934,nctemp12936);
struct tree* nctemp12942= p;
struct nctempchar1 *nctemp12946;
static struct nctempchar1 nctemp12947 = {{ 3}, (char*)"\n\0"};
nctemp12946=&nctemp12947;
nctempchar1* nctemp12944= nctemp12946;
int nctemp12948=CodeEs(nctemp12942,nctemp12944);
struct tree* nctemp12950= p;
struct nctempchar1 *nctemp12954;
static struct nctempchar1 nctemp12955 = {{ 23}, (char*)"void *GpuNew(int n);\n\0"};
nctemp12954=&nctemp12955;
nctempchar1* nctemp12952= nctemp12954;
int nctemp12956=CodeEs(nctemp12950,nctemp12952);
struct tree* nctemp12958= p;
struct nctempchar1 *nctemp12962;
static struct nctempchar1 nctemp12963 = {{ 28}, (char*)"void *GpuDelete(void *f);\n\0"};
nctemp12962=&nctemp12963;
nctempchar1* nctemp12960= nctemp12962;
int nctemp12964=CodeEs(nctemp12958,nctemp12960);
struct tree* nctemp12966= p;
struct nctempchar1 *nctemp12970;
static struct nctempchar1 nctemp12971 = {{ 20}, (char*)"void *GpuError();\n\0"};
nctemp12970=&nctemp12971;
nctempchar1* nctemp12968= nctemp12970;
int nctemp12972=CodeEs(nctemp12966,nctemp12968);
struct tree* nctemp12974= p;
struct nctempchar1 *nctemp12978;
static struct nctempchar1 nctemp12979 = {{ 26}, (char*)"void *RunMalloc(int n);\n\0"};
nctemp12978=&nctemp12979;
nctempchar1* nctemp12976= nctemp12978;
int nctemp12980=CodeEs(nctemp12974,nctemp12976);
struct tree* nctemp12982= p;
struct nctempchar1 *nctemp12986;
static struct nctempchar1 nctemp12987 = {{ 24}, (char*)"int RunFree(void * );\n\0"};
nctemp12986=&nctemp12987;
nctempchar1* nctemp12984= nctemp12986;
int nctemp12988=CodeEs(nctemp12982,nctemp12984);
struct tree* nctemp12990= p;
struct nctempchar1 *nctemp12994;
static struct nctempchar1 nctemp12995 = {{ 17}, (char*)"int RunSync();\n\0"};
nctemp12994=&nctemp12995;
nctempchar1* nctemp12992= nctemp12994;
int nctemp12996=CodeEs(nctemp12990,nctemp12992);
struct tree* nctemp12998= p;
struct nctempchar1 *nctemp13002;
static struct nctempchar1 nctemp13003 = {{ 18}, (char*)"int RunGetnt();\n\0"};
nctemp13002=&nctemp13003;
nctempchar1* nctemp13000= nctemp13002;
int nctemp13004=CodeEs(nctemp12998,nctemp13000);
struct tree* nctemp13006= p;
struct nctempchar1 *nctemp13010;
static struct nctempchar1 nctemp13011 = {{ 18}, (char*)"int RunGetnb();\n\0"};
nctemp13010=&nctemp13011;
nctempchar1* nctemp13008= nctemp13010;
int nctemp13012=CodeEs(nctemp13006,nctemp13008);
return 1;
}
int CodePreamblehip ()
{
struct tree* p;
struct nctempchar1 *nctemp13020;
static struct nctempchar1 nctemp13021 = {{ 6}, (char*)"dummy\0"};
nctemp13020=&nctemp13021;
nctempchar1* nctemp13018= nctemp13020;
struct nctempchar1 *nctemp13024;
static struct nctempchar1 nctemp13025 = {{ 6}, (char*)"dummy\0"};
nctemp13024=&nctemp13025;
nctempchar1* nctemp13022= nctemp13024;
struct tree* nctemp13026=PtreeMknode(nctemp13018,nctemp13022);
p =nctemp13026;
struct tree* nctemp13028= p;
int nctemp13030= 1;
int nctemp13032=PtreeSetline(nctemp13028,nctemp13030);
struct tree* nctemp13034= p;
struct nctempchar1 *nctemp13038;
static struct nctempchar1 nctemp13039 = {{ 50}, (char*)"//  Translated by epsc  version December 2021  \n\0"};
nctemp13038=&nctemp13039;
nctempchar1* nctemp13036= nctemp13038;
int nctemp13040=CodeEs(nctemp13034,nctemp13036);
struct tree* nctemp13042= p;
int nctemp13044= 2;
int nctemp13046=PtreeSetline(nctemp13042,nctemp13044);
struct tree* nctemp13048= p;
int nctemp13050= 3;
int nctemp13052=PtreeSetline(nctemp13048,nctemp13050);
struct tree* nctemp13054= p;
struct nctempchar1 *nctemp13058;
static struct nctempchar1 nctemp13059 = {{ 48}, (char*)"typedef struct { float r; float i;} complex; \n\0"};
nctemp13058=&nctemp13059;
nctempchar1* nctemp13056= nctemp13058;
int nctemp13060=CodeEs(nctemp13054,nctemp13056);
struct tree* nctemp13062= p;
int nctemp13064= 3;
int nctemp13066=PtreeSetline(nctemp13062,nctemp13064);
struct tree* nctemp13068= p;
struct nctempchar1 *nctemp13072;
static struct nctempchar1 nctemp13073 = {{ 68}, (char*)"typedef struct nctempfloat1 { int d[1]; float *a;} nctempfloat1; \n\0"};
nctemp13072=&nctemp13073;
nctempchar1* nctemp13070= nctemp13072;
int nctemp13074=CodeEs(nctemp13068,nctemp13070);
struct tree* nctemp13076= p;
int nctemp13078= 5;
int nctemp13080=PtreeSetline(nctemp13076,nctemp13078);
struct tree* nctemp13082= p;
struct nctempchar1 *nctemp13086;
static struct nctempchar1 nctemp13087 = {{ 62}, (char*)"typedef struct nctempint1 { int d[1]; int *a;} nctempint1; \n\0"};
nctemp13086=&nctemp13087;
nctempchar1* nctemp13084= nctemp13086;
int nctemp13088=CodeEs(nctemp13082,nctemp13084);
struct tree* nctemp13090= p;
int nctemp13092= 7;
int nctemp13094=PtreeSetline(nctemp13090,nctemp13092);
struct tree* nctemp13096= p;
struct nctempchar1 *nctemp13100;
static struct nctempchar1 nctemp13101 = {{ 65}, (char*)"typedef struct nctempchar1 { int d[1]; char *a;} nctempchar1; \n\0"};
nctemp13100=&nctemp13101;
nctempchar1* nctemp13098= nctemp13100;
int nctemp13102=CodeEs(nctemp13096,nctemp13098);
struct tree* nctemp13104= p;
int nctemp13106= 7;
int nctemp13108=PtreeSetline(nctemp13104,nctemp13106);
struct tree* nctemp13110= p;
struct nctempchar1 *nctemp13114;
static struct nctempchar1 nctemp13115 = {{ 74}, (char*)"typedef struct nctempcomplex1 { int d[1]; complex *a;} nctempcomplex1; \n\0"};
nctemp13114=&nctemp13115;
nctempchar1* nctemp13112= nctemp13114;
int nctemp13116=CodeEs(nctemp13110,nctemp13112);
struct tree* nctemp13118= p;
int nctemp13120= 8;
int nctemp13122=PtreeSetline(nctemp13118,nctemp13120);
int nctemp13126=CodeArraycheck();
int nctemp13123 = (nctemp13126 ==1);
if(nctemp13123)
{
struct tree* nctemp13129= p;
struct nctempchar1 *nctemp13133;
static struct nctempchar1 nctemp13134 = {{ 54}, (char*)"static struct nctempchar1 nctempstring = {0, NULL};\n\0"};
nctemp13133=&nctemp13134;
nctempchar1* nctemp13131= nctemp13133;
int nctemp13135=CodeEs(nctemp13129,nctemp13131);
struct tree* nctemp13137= p;
int nctemp13139= 8;
int nctemp13141=PtreeSetline(nctemp13137,nctemp13139);
}
struct tree* nctemp13143= p;
struct nctempchar1 *nctemp13147;
static struct nctempchar1 nctemp13148 = {{ 68}, (char*)"typedef struct nctempfloat2 { int d[2]; float *a;} nctempfloat2; \n\0"};
nctemp13147=&nctemp13148;
nctempchar1* nctemp13145= nctemp13147;
int nctemp13149=CodeEs(nctemp13143,nctemp13145);
struct tree* nctemp13151= p;
int nctemp13153= 10;
int nctemp13155=PtreeSetline(nctemp13151,nctemp13153);
struct tree* nctemp13157= p;
struct nctempchar1 *nctemp13161;
static struct nctempchar1 nctemp13162 = {{ 62}, (char*)"typedef struct nctempint2 { int d[2]; int *a;} nctempint2; \n\0"};
nctemp13161=&nctemp13162;
nctempchar1* nctemp13159= nctemp13161;
int nctemp13163=CodeEs(nctemp13157,nctemp13159);
struct tree* nctemp13165= p;
int nctemp13167= 10;
int nctemp13169=PtreeSetline(nctemp13165,nctemp13167);
struct tree* nctemp13171= p;
struct nctempchar1 *nctemp13175;
static struct nctempchar1 nctemp13176 = {{ 65}, (char*)"typedef struct nctempchar2 { int d[2]; char *a;} nctempchar2; \n\0"};
nctemp13175=&nctemp13176;
nctempchar1* nctemp13173= nctemp13175;
int nctemp13177=CodeEs(nctemp13171,nctemp13173);
struct tree* nctemp13179= p;
int nctemp13181= 12;
int nctemp13183=PtreeSetline(nctemp13179,nctemp13181);
struct tree* nctemp13185= p;
struct nctempchar1 *nctemp13189;
static struct nctempchar1 nctemp13190 = {{ 74}, (char*)"typedef struct nctempcomplex2 { int d[2]; complex *a;} nctempcomplex2; \n\0"};
nctemp13189=&nctemp13190;
nctempchar1* nctemp13187= nctemp13189;
int nctemp13191=CodeEs(nctemp13185,nctemp13187);
struct tree* nctemp13193= p;
int nctemp13195= 13;
int nctemp13197=PtreeSetline(nctemp13193,nctemp13195);
struct tree* nctemp13199= p;
struct nctempchar1 *nctemp13203;
static struct nctempchar1 nctemp13204 = {{ 68}, (char*)"typedef struct nctempfloat3 { int d[3]; float *a;} nctempfloat3; \n\0"};
nctemp13203=&nctemp13204;
nctempchar1* nctemp13201= nctemp13203;
int nctemp13205=CodeEs(nctemp13199,nctemp13201);
struct tree* nctemp13207= p;
int nctemp13209= 14;
int nctemp13211=PtreeSetline(nctemp13207,nctemp13209);
struct tree* nctemp13213= p;
struct nctempchar1 *nctemp13217;
static struct nctempchar1 nctemp13218 = {{ 62}, (char*)"typedef struct nctempint3 { int d[3]; int *a;} nctempint3; \n\0"};
nctemp13217=&nctemp13218;
nctempchar1* nctemp13215= nctemp13217;
int nctemp13219=CodeEs(nctemp13213,nctemp13215);
struct tree* nctemp13221= p;
int nctemp13223= 15;
int nctemp13225=PtreeSetline(nctemp13221,nctemp13223);
struct tree* nctemp13227= p;
struct nctempchar1 *nctemp13231;
static struct nctempchar1 nctemp13232 = {{ 65}, (char*)"typedef struct nctempchar3 { int d[3]; char *a;} nctempchar3; \n\0"};
nctemp13231=&nctemp13232;
nctempchar1* nctemp13229= nctemp13231;
int nctemp13233=CodeEs(nctemp13227,nctemp13229);
struct tree* nctemp13235= p;
int nctemp13237= 16;
int nctemp13239=PtreeSetline(nctemp13235,nctemp13237);
struct tree* nctemp13241= p;
struct nctempchar1 *nctemp13245;
static struct nctempchar1 nctemp13246 = {{ 74}, (char*)"typedef struct nctempcomplex3 { int d[3]; complex *a;} nctempcomplex3; \n\0"};
nctemp13245=&nctemp13246;
nctempchar1* nctemp13243= nctemp13245;
int nctemp13247=CodeEs(nctemp13241,nctemp13243);
struct tree* nctemp13249= p;
int nctemp13251= 17;
int nctemp13253=PtreeSetline(nctemp13249,nctemp13251);
struct tree* nctemp13255= p;
struct nctempchar1 *nctemp13259;
static struct nctempchar1 nctemp13260 = {{ 68}, (char*)"typedef struct nctempfloat4 { int d[4]; float *a;} nctempfloat4; \n\0"};
nctemp13259=&nctemp13260;
nctempchar1* nctemp13257= nctemp13259;
int nctemp13261=CodeEs(nctemp13255,nctemp13257);
struct tree* nctemp13263= p;
int nctemp13265= 18;
int nctemp13267=PtreeSetline(nctemp13263,nctemp13265);
struct tree* nctemp13269= p;
struct nctempchar1 *nctemp13273;
static struct nctempchar1 nctemp13274 = {{ 62}, (char*)"typedef struct nctempint4 { int d[4]; int *a;} nctempint4; \n\0"};
nctemp13273=&nctemp13274;
nctempchar1* nctemp13271= nctemp13273;
int nctemp13275=CodeEs(nctemp13269,nctemp13271);
struct tree* nctemp13277= p;
int nctemp13279= 19;
int nctemp13281=PtreeSetline(nctemp13277,nctemp13279);
struct tree* nctemp13283= p;
struct nctempchar1 *nctemp13287;
static struct nctempchar1 nctemp13288 = {{ 65}, (char*)"typedef struct nctempchar4 { int d[4]; char *a;} nctempchar4; \n\0"};
nctemp13287=&nctemp13288;
nctempchar1* nctemp13285= nctemp13287;
int nctemp13289=CodeEs(nctemp13283,nctemp13285);
struct tree* nctemp13291= p;
int nctemp13293= 20;
int nctemp13295=PtreeSetline(nctemp13291,nctemp13293);
struct tree* nctemp13297= p;
struct nctempchar1 *nctemp13301;
static struct nctempchar1 nctemp13302 = {{ 74}, (char*)"typedef struct nctempcomplex4 { int d[4]; complex *a;} nctempcomplex4; \n\0"};
nctemp13301=&nctemp13302;
nctempchar1* nctemp13299= nctemp13301;
int nctemp13303=CodeEs(nctemp13297,nctemp13299);
struct tree* nctemp13305= p;
struct nctempchar1 *nctemp13309;
static struct nctempchar1 nctemp13310 = {{ 21}, (char*)"#include <stdio.h>\n\0"};
nctemp13309=&nctemp13310;
nctempchar1* nctemp13307= nctemp13309;
int nctemp13311=CodeEs(nctemp13305,nctemp13307);
struct tree* nctemp13313= p;
struct nctempchar1 *nctemp13317;
static struct nctempchar1 nctemp13318 = {{ 17}, (char*)"extern \"C\" {\n\0"};
nctemp13317=&nctemp13318;
nctempchar1* nctemp13315= nctemp13317;
int nctemp13319=CodeEs(nctemp13313,nctemp13315);
struct tree* nctemp13321= p;
struct nctempchar1 *nctemp13325;
static struct nctempchar1 nctemp13326 = {{ 22}, (char*)"#include <stdlib.h>\n\0"};
nctemp13325=&nctemp13326;
nctempchar1* nctemp13323= nctemp13325;
int nctemp13327=CodeEs(nctemp13321,nctemp13323);
struct tree* nctemp13329= p;
struct nctempchar1 *nctemp13333;
static struct nctempchar1 nctemp13334 = {{ 22}, (char*)"#include <string.h>\n\0"};
nctemp13333=&nctemp13334;
nctempchar1* nctemp13331= nctemp13333;
int nctemp13335=CodeEs(nctemp13329,nctemp13331);
struct tree* nctemp13337= p;
struct nctempchar1 *nctemp13341;
static struct nctempchar1 nctemp13342 = {{ 4}, (char*)"}\n\0"};
nctemp13341=&nctemp13342;
nctempchar1* nctemp13339= nctemp13341;
int nctemp13343=CodeEs(nctemp13337,nctemp13339);
struct tree* nctemp13345= p;
struct nctempchar1 *nctemp13349;
static struct nctempchar1 nctemp13350 = {{ 34}, (char*)"#include \"hip/hip_runtime.h\" \n\0"};
nctemp13349=&nctemp13350;
nctempchar1* nctemp13347= nctemp13349;
int nctemp13351=CodeEs(nctemp13345,nctemp13347);
struct tree* nctemp13353= p;
struct nctempchar1 *nctemp13357;
static struct nctempchar1 nctemp13358 = {{ 3}, (char*)"\n\0"};
nctemp13357=&nctemp13358;
nctempchar1* nctemp13355= nctemp13357;
int nctemp13359=CodeEs(nctemp13353,nctemp13355);
struct tree* nctemp13361= p;
struct nctempchar1 *nctemp13365;
static struct nctempchar1 nctemp13366 = {{ 23}, (char*)"void *GpuNew(int n);\n\0"};
nctemp13365=&nctemp13366;
nctempchar1* nctemp13363= nctemp13365;
int nctemp13367=CodeEs(nctemp13361,nctemp13363);
struct tree* nctemp13369= p;
struct nctempchar1 *nctemp13373;
static struct nctempchar1 nctemp13374 = {{ 28}, (char*)"void *GpuDelete(void *f);\n\0"};
nctemp13373=&nctemp13374;
nctempchar1* nctemp13371= nctemp13373;
int nctemp13375=CodeEs(nctemp13369,nctemp13371);
struct tree* nctemp13377= p;
struct nctempchar1 *nctemp13381;
static struct nctempchar1 nctemp13382 = {{ 20}, (char*)"void *GpuError();\n\0"};
nctemp13381=&nctemp13382;
nctempchar1* nctemp13379= nctemp13381;
int nctemp13383=CodeEs(nctemp13377,nctemp13379);
struct tree* nctemp13385= p;
struct nctempchar1 *nctemp13389;
static struct nctempchar1 nctemp13390 = {{ 26}, (char*)"void *RunMalloc(int n);\n\0"};
nctemp13389=&nctemp13390;
nctempchar1* nctemp13387= nctemp13389;
int nctemp13391=CodeEs(nctemp13385,nctemp13387);
struct tree* nctemp13393= p;
struct nctempchar1 *nctemp13397;
static struct nctempchar1 nctemp13398 = {{ 24}, (char*)"int RunFree(void *p);\n\0"};
nctemp13397=&nctemp13398;
nctempchar1* nctemp13395= nctemp13397;
int nctemp13399=CodeEs(nctemp13393,nctemp13395);
return 1;
}
int CodePreamble ()
{
int nctemp13404=CodeGetarch();
int nctemp13401 = (nctemp13404 ==1);
if(nctemp13401)
{
int nctemp13407=CodePreamblecpu();
return 1;
}
else{
int nctemp13412=CodeGetarch();
int nctemp13409 = (nctemp13412 ==2);
if(nctemp13409)
{
int nctemp13415=CodePreamblecuda();
return 1;
}
else{
int nctemp13420=CodeGetarch();
int nctemp13417 = (nctemp13420 ==3);
if(nctemp13417)
{
int nctemp13423=CodePreamblehip();
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
int nctemp13430=CodeGetfdout();
fdo =nctemp13430;
int nctemp13434=CodeGetarch();
int nctemp13431 = (nctemp13434 ==2);
if(nctemp13431)
{
int nctemp13437= fdo;
struct nctempchar1 *nctemp13441;
static struct nctempchar1 nctemp13442 = {{ 4}, (char*)"}\n\0"};
nctemp13441=&nctemp13442;
nctempchar1* nctemp13439= nctemp13441;
int nctemp13443=LibePuts(nctemp13437,nctemp13439);
return 1;
}
else{
int nctemp13448=CodeGetarch();
int nctemp13445 = (nctemp13448 ==3);
if(nctemp13445)
{
int nctemp13451= fdo;
struct nctempchar1 *nctemp13455;
static struct nctempchar1 nctemp13456 = {{ 4}, (char*)"}\n\0"};
nctemp13455=&nctemp13456;
nctempchar1* nctemp13453= nctemp13455;
int nctemp13457=LibePuts(nctemp13451,nctemp13453);
return 1;
}
else{
return 0;
}
}
}
