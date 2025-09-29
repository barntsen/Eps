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
qname=name;
nctempchar1 *nctemp3781 =qual;
int nctemp3780 =(nctemp3781!=0);
if(nctemp3780)
{
nctempchar1* nctemp3790= qual;
struct nctempchar1 *nctemp3795;
static struct nctempchar1 nctemp3796 = {{ 3}, (char*)"->\0"};
nctemp3795=&nctemp3796;
nctempchar1* nctemp3793= nctemp3795;
nctempchar1* nctemp3797=LibeStradd(nctemp3790,nctemp3793);
tmp=nctemp3797;
nctempchar1* nctemp3803= tmp;
nctempchar1* nctemp3806= name;
nctempchar1* nctemp3809=LibeStradd(nctemp3803,nctemp3806);
qname=nctemp3809;
RunFree(tmp->a);
RunFree(tmp);
}
struct tree* nctemp3814= p;
struct nctempchar1 *nctemp3818;
static struct nctempchar1 nctemp3819 = {{ 7}, (char*)"if((0>\0"};
nctemp3818=&nctemp3819;
nctempchar1* nctemp3816= nctemp3818;
int nctemp3820=CodeEs(nctemp3814,nctemp3816);
struct tree* nctemp3822= p;
nctempchar1* nctemp3824= ival;
int nctemp3827=CodeEs(nctemp3822,nctemp3824);
struct tree* nctemp3829= p;
struct nctempchar1 *nctemp3833;
static struct nctempchar1 nctemp3834 = {{ 5}, (char*)")||(\0"};
nctemp3833=&nctemp3834;
nctempchar1* nctemp3831= nctemp3833;
int nctemp3835=CodeEs(nctemp3829,nctemp3831);
struct tree* nctemp3837= p;
nctempchar1* nctemp3839= ival;
int nctemp3842=CodeEs(nctemp3837,nctemp3839);
struct tree* nctemp3844= p;
struct nctempchar1 *nctemp3848;
static struct nctempchar1 nctemp3849 = {{ 3}, (char*)">=\0"};
nctemp3848=&nctemp3849;
nctempchar1* nctemp3846= nctemp3848;
int nctemp3850=CodeEs(nctemp3844,nctemp3846);
nctempchar1 *nctemp3852 =qual;
int nctemp3851 =(nctemp3852!=0);
if(nctemp3851)
{
struct tree* nctemp3857= p;
nctempchar1* nctemp3859= qual;
int nctemp3862=CodeEs(nctemp3857,nctemp3859);
struct tree* nctemp3864= p;
nctempchar1* nctemp3866= sel;
int nctemp3869=CodeEs(nctemp3864,nctemp3866);
}
struct tree* nctemp3871= p;
nctempchar1* nctemp3873= name;
int nctemp3876=CodeEs(nctemp3871,nctemp3873);
struct tree* nctemp3878= p;
struct nctempchar1 *nctemp3882;
static struct nctempchar1 nctemp3883 = {{ 5}, (char*)"->d[\0"};
nctemp3882=&nctemp3883;
nctempchar1* nctemp3880= nctemp3882;
int nctemp3884=CodeEs(nctemp3878,nctemp3880);
int nctemp3886= index;
int nctemp3888=CodeEd(nctemp3886);
struct tree* nctemp3890= p;
struct nctempchar1 *nctemp3894;
static struct nctempchar1 nctemp3895 = {{ 7}, (char*)"])){\n\0"};
nctemp3894=&nctemp3895;
nctempchar1* nctemp3892= nctemp3894;
int nctemp3896=CodeEs(nctemp3890,nctemp3892);
struct tree* nctemp3898= p;
struct nctempchar1 *nctemp3902;
static struct nctempchar1 nctemp3903 = {{ 67}, (char*)"printf(\"***Out of bounds error (file,array,line,index,rank,bound:\0"};
nctemp3902=&nctemp3903;
nctempchar1* nctemp3900= nctemp3902;
int nctemp3904=CodeEs(nctemp3898,nctemp3900);
struct tree* nctemp3906= p;
nctempchar1* nctemp3910=ScanGetfile();
nctempchar1* nctemp3908= nctemp3910;
int nctemp3911=CodeEs(nctemp3906,nctemp3908);
struct tree* nctemp3913= p;
struct nctempchar1 *nctemp3917;
static struct nctempchar1 nctemp3918 = {{ 2}, (char*)" \0"};
nctemp3917=&nctemp3918;
nctempchar1* nctemp3915= nctemp3917;
int nctemp3919=CodeEs(nctemp3913,nctemp3915);
struct tree* nctemp3921= p;
nctempchar1* nctemp3923= qname;
int nctemp3926=CodeEs(nctemp3921,nctemp3923);
struct tree* nctemp3928= p;
struct nctempchar1 *nctemp3932;
static struct nctempchar1 nctemp3933 = {{ 17}, (char*)" %d %d %d %d \\n\0"};
nctemp3932=&nctemp3933;
nctempchar1* nctemp3930= nctemp3932;
int nctemp3934=CodeEs(nctemp3928,nctemp3930);
struct tree* nctemp3936= p;
struct nctempchar1 *nctemp3940;
static struct nctempchar1 nctemp3941 = {{ 6}, (char*)" \" ,\0"};
nctemp3940=&nctemp3941;
nctempchar1* nctemp3938= nctemp3940;
int nctemp3942=CodeEs(nctemp3936,nctemp3938);
int nctemp3944= line;
int nctemp3946=CodeEd(nctemp3944);
struct tree* nctemp3948= p;
struct nctempchar1 *nctemp3952;
static struct nctempchar1 nctemp3953 = {{ 2}, (char*)",\0"};
nctemp3952=&nctemp3953;
nctempchar1* nctemp3950= nctemp3952;
int nctemp3954=CodeEs(nctemp3948,nctemp3950);
struct tree* nctemp3956= p;
nctempchar1* nctemp3958= ival;
int nctemp3961=CodeEs(nctemp3956,nctemp3958);
struct tree* nctemp3963= p;
struct nctempchar1 *nctemp3967;
static struct nctempchar1 nctemp3968 = {{ 2}, (char*)",\0"};
nctemp3967=&nctemp3968;
nctempchar1* nctemp3965= nctemp3967;
int nctemp3969=CodeEs(nctemp3963,nctemp3965);
int nctemp3971= index;
int nctemp3973=CodeEd(nctemp3971);
struct tree* nctemp3975= p;
struct nctempchar1 *nctemp3979;
static struct nctempchar1 nctemp3980 = {{ 2}, (char*)",\0"};
nctemp3979=&nctemp3980;
nctempchar1* nctemp3977= nctemp3979;
int nctemp3981=CodeEs(nctemp3975,nctemp3977);
struct tree* nctemp3983= p;
nctempchar1* nctemp3985= qname;
int nctemp3988=CodeEs(nctemp3983,nctemp3985);
struct tree* nctemp3990= p;
struct nctempchar1 *nctemp3994;
static struct nctempchar1 nctemp3995 = {{ 5}, (char*)"->d[\0"};
nctemp3994=&nctemp3995;
nctempchar1* nctemp3992= nctemp3994;
int nctemp3996=CodeEs(nctemp3990,nctemp3992);
int nctemp3998= index;
int nctemp4000=CodeEd(nctemp3998);
struct tree* nctemp4002= p;
struct nctempchar1 *nctemp4006;
static struct nctempchar1 nctemp4007 = {{ 4}, (char*)"]-1\0"};
nctemp4006=&nctemp4007;
nctempchar1* nctemp4004= nctemp4006;
int nctemp4008=CodeEs(nctemp4002,nctemp4004);
struct tree* nctemp4010= p;
struct nctempchar1 *nctemp4014;
static struct nctempchar1 nctemp4015 = {{ 3}, (char*)");\0"};
nctemp4014=&nctemp4015;
nctempchar1* nctemp4012= nctemp4014;
int nctemp4016=CodeEs(nctemp4010,nctemp4012);
struct tree* nctemp4018= p;
struct nctempchar1 *nctemp4022;
static struct nctempchar1 nctemp4023 = {{ 6}, (char*)"\n}\n\0"};
nctemp4022=&nctemp4023;
nctempchar1* nctemp4020= nctemp4022;
int nctemp4024=CodeEs(nctemp4018,nctemp4020);
nctempchar1 *nctemp4026 =qual;
int nctemp4025 =(nctemp4026!=0);
if(nctemp4025)
{
RunFree(qname->a);
RunFree(qname);
}
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
struct tree* nctemp4039= p;
nctempchar1* nctemp4041=PtreeGetdef(nctemp4039);
name=nctemp4041;
nctempchar1* nctemp4047=CodeMktemp();
temp=nctemp4047;
nctempchar1* nctemp4052= name;
struct symbol* nctemp4055=SymLook(nctemp4052);
tp =nctemp4055;
int nctemp4056 = (tp ==0);
if(nctemp4056)
{
nctempchar1* nctemp4061= name;
int nctemp4064=CodeError(nctemp4061);
}
struct tree* nctemp4069= p;
struct tree* nctemp4071=PtreeMvchild(nctemp4069);
sp =nctemp4071;
int nctemp4072 = (sp ==0);
if(nctemp4072)
{
struct tree* nctemp4077= p;
nctempchar1* nctemp4079=PtreeGetdef(nctemp4077);
return nctemp4079;
}
else{
struct tree* nctemp4085= sp;
nctempchar1* nctemp4087=PtreeGetname(nctemp4085);
nctempchar1* nctemp4083= nctemp4087;
struct nctempchar1 *nctemp4090;
static struct nctempchar1 nctemp4091 = {{ 9}, (char*)"exprlist\0"};
nctemp4090=&nctemp4091;
nctempchar1* nctemp4088= nctemp4090;
int nctemp4092=LibeStrcmp(nctemp4083,nctemp4088);
int nctemp4080 = (nctemp4092 ==0);
if(nctemp4080)
{
struct tree* nctemp4095= p;
nctempchar1* nctemp4097=PtreeGetdef(nctemp4095);
return nctemp4097;
}
}
struct symbol* nctemp4102= tp;
int nctemp4104=SymGetrank(nctemp4102);
rank =nctemp4104;
struct tree* nctemp4109= p;
struct tree* nctemp4111=PtreeMvchild(nctemp4109);
p =nctemp4111;
struct tree* nctemp4116= p;
struct tree* nctemp4118=PtreeMvchild(nctemp4116);
p =nctemp4118;
sp =p;
i =0;
int nctemp4127 = (i < rank);
while(nctemp4127){
{
int nctemp4131 = (i ==0);
if(nctemp4131)
{
struct tree* nctemp4140= p;
nctempchar1* nctemp4142=CodeExpr(nctemp4140);
temp2=nctemp4142;
struct tree* nctemp4144= p;
struct tree* nctemp4148= p;
nctempchar1* nctemp4150=PtreeGetype(nctemp4148);
nctempchar1* nctemp4146= nctemp4150;
int nctemp4151=CodeEs(nctemp4144,nctemp4146);
struct tree* nctemp4153= p;
struct nctempchar1 *nctemp4157;
static struct nctempchar1 nctemp4158 = {{ 2}, (char*)" \0"};
nctemp4157=&nctemp4158;
nctempchar1* nctemp4155= nctemp4157;
int nctemp4159=CodeEs(nctemp4153,nctemp4155);
struct tree* nctemp4161= p;
nctempchar1* nctemp4163= temp;
int nctemp4166=CodeEs(nctemp4161,nctemp4163);
struct tree* nctemp4168= p;
struct nctempchar1 *nctemp4172;
static struct nctempchar1 nctemp4173 = {{ 2}, (char*)"=\0"};
nctemp4172=&nctemp4173;
nctempchar1* nctemp4170= nctemp4172;
int nctemp4174=CodeEs(nctemp4168,nctemp4170);
struct tree* nctemp4176= p;
nctempchar1* nctemp4178= temp2;
int nctemp4181=CodeEs(nctemp4176,nctemp4178);
struct tree* nctemp4183= p;
struct nctempchar1 *nctemp4187;
static struct nctempchar1 nctemp4188 = {{ 4}, (char*)";\n\0"};
nctemp4187=&nctemp4188;
nctempchar1* nctemp4185= nctemp4187;
int nctemp4189=CodeEs(nctemp4183,nctemp4185);
int nctemp4191=CodeArraycheck();
if(nctemp4191)
{
struct tree* nctemp4195= p;
int nctemp4197=PtreeGetline(nctemp4195);
int nctemp4193= nctemp4197;
nctempchar1* nctemp4198= qual;
nctempchar1* nctemp4201= sel;
nctempchar1* nctemp4204= name;
nctempchar1* nctemp4207= temp2;
int nctemp4210= i;
int nctemp4212=CodeArrayex(nctemp4193,nctemp4198,nctemp4201,nctemp4204,nctemp4207,nctemp4210);
}
}
else{
struct tree* nctemp4218= sp;
nctempchar1* nctemp4220=CodeExpr(nctemp4218);
temp2=nctemp4220;
struct tree* nctemp4222= p;
nctempchar1* nctemp4224= temp;
int nctemp4227=CodeEs(nctemp4222,nctemp4224);
struct tree* nctemp4229= p;
struct nctempchar1 *nctemp4233;
static struct nctempchar1 nctemp4234 = {{ 2}, (char*)"=\0"};
nctemp4233=&nctemp4234;
nctempchar1* nctemp4231= nctemp4233;
int nctemp4235=CodeEs(nctemp4229,nctemp4231);
struct tree* nctemp4237= p;
nctempchar1* nctemp4239= temp2;
int nctemp4242=CodeEs(nctemp4237,nctemp4239);
struct tree* nctemp4244= p;
struct nctempchar1 *nctemp4248;
static struct nctempchar1 nctemp4249 = {{ 2}, (char*)"*\0"};
nctemp4248=&nctemp4249;
nctempchar1* nctemp4246= nctemp4248;
int nctemp4250=CodeEs(nctemp4244,nctemp4246);
nctempchar1 *nctemp4252 =qual;
int nctemp4251 =(nctemp4252!=0);
if(nctemp4251)
{
struct tree* nctemp4257= p;
nctempchar1* nctemp4259= qual;
int nctemp4262=CodeEs(nctemp4257,nctemp4259);
}
nctempchar1 *nctemp4264 =sel;
int nctemp4263 =(nctemp4264!=0);
if(nctemp4263)
{
struct tree* nctemp4269= p;
nctempchar1* nctemp4271= sel;
int nctemp4274=CodeEs(nctemp4269,nctemp4271);
}
struct tree* nctemp4276= p;
nctempchar1* nctemp4278= name;
int nctemp4281=CodeEs(nctemp4276,nctemp4278);
struct tree* nctemp4283= p;
struct nctempchar1 *nctemp4287;
static struct nctempchar1 nctemp4288 = {{ 4}, (char*)"->d\0"};
nctemp4287=&nctemp4288;
nctempchar1* nctemp4285= nctemp4287;
int nctemp4289=CodeEs(nctemp4283,nctemp4285);
struct tree* nctemp4291= p;
struct nctempchar1 *nctemp4295;
static struct nctempchar1 nctemp4296 = {{ 2}, (char*)"[\0"};
nctemp4295=&nctemp4296;
nctempchar1* nctemp4293= nctemp4295;
int nctemp4297=CodeEs(nctemp4291,nctemp4293);
int nctemp4304 = i - 1;
int nctemp4299= nctemp4304;
int nctemp4305=CodeEd(nctemp4299);
struct tree* nctemp4307= p;
struct nctempchar1 *nctemp4311;
static struct nctempchar1 nctemp4312 = {{ 2}, (char*)"]\0"};
nctemp4311=&nctemp4312;
nctempchar1* nctemp4309= nctemp4311;
int nctemp4313=CodeEs(nctemp4307,nctemp4309);
struct tree* nctemp4315= p;
struct nctempchar1 *nctemp4319;
static struct nctempchar1 nctemp4320 = {{ 2}, (char*)"+\0"};
nctemp4319=&nctemp4320;
nctempchar1* nctemp4317= nctemp4319;
int nctemp4321=CodeEs(nctemp4315,nctemp4317);
struct tree* nctemp4323= p;
nctempchar1* nctemp4325= temp;
int nctemp4328=CodeEs(nctemp4323,nctemp4325);
struct tree* nctemp4330= p;
struct nctempchar1 *nctemp4334;
static struct nctempchar1 nctemp4335 = {{ 4}, (char*)";\n\0"};
nctemp4334=&nctemp4335;
nctempchar1* nctemp4332= nctemp4334;
int nctemp4336=CodeEs(nctemp4330,nctemp4332);
int nctemp4338=CodeArraycheck();
if(nctemp4338)
{
struct tree* nctemp4342= p;
int nctemp4344=PtreeGetline(nctemp4342);
int nctemp4340= nctemp4344;
nctempchar1* nctemp4345= qual;
nctempchar1* nctemp4348= sel;
nctempchar1* nctemp4351= name;
nctempchar1* nctemp4354= temp2;
int nctemp4357= i;
int nctemp4359=CodeArrayex(nctemp4340,nctemp4345,nctemp4348,nctemp4351,nctemp4354,nctemp4357);
}
}
int nctemp4360 = (sp !=0);
if(nctemp4360)
{
struct tree* nctemp4368= sp;
struct tree* nctemp4370=PtreeMvsister(nctemp4368);
sp =nctemp4370;
}
}
int nctemp4379 = i + 1;
i =nctemp4379;
int nctemp4380 = (i < rank);
nctemp4127=nctemp4380;
}
nctempchar1* nctemp4394= name;
int nctemp4397=LibeStrlen(nctemp4394);
nctempchar1* nctemp4399= temp;
int nctemp4402=LibeStrlen(nctemp4399);
int nctemp4403 = nctemp4397 + nctemp4402;
int nctemp4405 = nctemp4403 + 6;
size =nctemp4405;
int nctemp4412=size;
nctempchar1 *nctemp4411;
nctemp4411=(nctempchar1*)RunMalloc(sizeof(nctempchar1));
nctemp4411->d[0]=size;
nctemp4411->a=(char *)RunMalloc(sizeof(char)*nctemp4412);
rval=nctemp4411;
nctempchar1* nctemp4416= name;
nctempchar1* nctemp4419= rval;
int nctemp4422=LibeStrcpy(nctemp4416,nctemp4419);
struct nctempchar1 *nctemp4426;
static struct nctempchar1 nctemp4427 = {{ 4}, (char*)"->a\0"};
nctemp4426=&nctemp4427;
nctempchar1* nctemp4424= nctemp4426;
nctempchar1* nctemp4428= rval;
int nctemp4431=LibeStrcat(nctemp4424,nctemp4428);
struct nctempchar1 *nctemp4435;
static struct nctempchar1 nctemp4436 = {{ 2}, (char*)"[\0"};
nctemp4435=&nctemp4436;
nctempchar1* nctemp4433= nctemp4435;
nctempchar1* nctemp4437= rval;
int nctemp4440=LibeStrcat(nctemp4433,nctemp4437);
nctempchar1* nctemp4442= temp;
nctempchar1* nctemp4445= rval;
int nctemp4448=LibeStrcat(nctemp4442,nctemp4445);
struct nctempchar1 *nctemp4452;
static struct nctempchar1 nctemp4453 = {{ 2}, (char*)"]\0"};
nctemp4452=&nctemp4453;
nctempchar1* nctemp4450= nctemp4452;
nctempchar1* nctemp4454= rval;
int nctemp4457=LibeStrcat(nctemp4450,nctemp4454);
return rval;
}
nctempchar1 * CodeQident (nctempchar1 *qual,nctempchar1 *ident)
{
int lq;
int li;
nctempchar1 *name;
nctempchar1* nctemp4464= qual;
int nctemp4467=LibeStrlen(nctemp4464);
lq =nctemp4467;
nctempchar1* nctemp4472= ident;
int nctemp4475=LibeStrlen(nctemp4472);
li =nctemp4475;
int nctemp4490 = lq + li;
int nctemp4492 = nctemp4490 + 2;
int nctemp4482=nctemp4492;
nctempchar1 *nctemp4481;
nctemp4481=(nctempchar1*)RunMalloc(sizeof(nctempchar1));
int nctemp4500 = lq + li;
int nctemp4502 = nctemp4500 + 2;
nctemp4481->d[0]=nctemp4502;
nctemp4481->a=(char *)RunMalloc(sizeof(char)*nctemp4482);
name=nctemp4481;
nctempchar1* nctemp4504= qual;
nctempchar1* nctemp4507= name;
int nctemp4510=LibeStrcpy(nctemp4504,nctemp4507);
struct nctempchar1 *nctemp4514;
static struct nctempchar1 nctemp4515 = {{ 2}, (char*)".\0"};
nctemp4514=&nctemp4515;
nctempchar1* nctemp4512= nctemp4514;
nctempchar1* nctemp4516= name;
int nctemp4519=LibeStrcat(nctemp4512,nctemp4516);
nctempchar1* nctemp4521= ident;
nctempchar1* nctemp4524= name;
int nctemp4527=LibeStrcat(nctemp4521,nctemp4524);
return name;
}
nctempchar1 * CodeQident2 (nctempchar1 *qual,nctempchar1 *ident)
{
int lq;
int li;
nctempchar1 *name;
nctempchar1* nctemp4534= qual;
int nctemp4537=LibeStrlen(nctemp4534);
lq =nctemp4537;
nctempchar1* nctemp4542= ident;
int nctemp4545=LibeStrlen(nctemp4542);
li =nctemp4545;
int nctemp4560 = lq + li;
int nctemp4562 = nctemp4560 + 3;
int nctemp4552=nctemp4562;
nctempchar1 *nctemp4551;
nctemp4551=(nctempchar1*)RunMalloc(sizeof(nctempchar1));
int nctemp4570 = lq + li;
int nctemp4572 = nctemp4570 + 3;
nctemp4551->d[0]=nctemp4572;
nctemp4551->a=(char *)RunMalloc(sizeof(char)*nctemp4552);
name=nctemp4551;
nctempchar1* nctemp4574= qual;
nctempchar1* nctemp4577= name;
int nctemp4580=LibeStrcpy(nctemp4574,nctemp4577);
struct nctempchar1 *nctemp4584;
static struct nctempchar1 nctemp4585 = {{ 3}, (char*)"->\0"};
nctemp4584=&nctemp4585;
nctempchar1* nctemp4582= nctemp4584;
nctempchar1* nctemp4586= name;
int nctemp4589=LibeStrcat(nctemp4582,nctemp4586);
nctempchar1* nctemp4591= ident;
nctempchar1* nctemp4594= name;
int nctemp4597=LibeStrcat(nctemp4591,nctemp4594);
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
struct tree* nctemp4610= p;
nctempchar1* nctemp4612=PtreeGetstruct(nctemp4610);
nctempchar1* nctemp4608= nctemp4612;
struct nctempchar1 *nctemp4615;
static struct nctempchar1 nctemp4616 = {{ 7}, (char*)"struct\0"};
nctemp4615=&nctemp4616;
nctempchar1* nctemp4613= nctemp4615;
int nctemp4617=LibeStrcmp(nctemp4608,nctemp4613);
int nctemp4605 = (nctemp4617 ==1);
if(nctemp4605)
{
struct tree* nctemp4624= p;
nctempchar1* nctemp4626=PtreeGetarray(nctemp4624);
nctempchar1* nctemp4622= nctemp4626;
struct nctempchar1 *nctemp4629;
static struct nctempchar1 nctemp4630 = {{ 6}, (char*)"array\0"};
nctemp4629=&nctemp4630;
nctempchar1* nctemp4627= nctemp4629;
int nctemp4631=LibeStrcmp(nctemp4622,nctemp4627);
int nctemp4619 = (nctemp4631 ==1);
if(nctemp4619)
{
struct tree* nctemp4638= p;
nctempchar1* nctemp4640= qual;
struct nctempchar1 *nctemp4645;
static struct nctempchar1 nctemp4646 = {{ 2}, (char*)".\0"};
nctemp4645=&nctemp4646;
nctempchar1* nctemp4643= nctemp4645;
nctempchar1* nctemp4647=CodeArray(nctemp4638,nctemp4640,nctemp4643);
qual=nctemp4647;
struct tree* nctemp4652= p;
struct tree* nctemp4654=PtreeMvchild(nctemp4652);
np =nctemp4654;
int nctemp4655 = (np ==0);
if(nctemp4655)
{
return qual;
}
struct tree* nctemp4665= np;
struct tree* nctemp4667=PtreeMvsister(nctemp4665);
np =nctemp4667;
int nctemp4668 = (np ==0);
if(nctemp4668)
{
return qual;
}
}
else{
struct tree* nctemp4679= p;
nctempchar1* nctemp4681=PtreeGetdef(nctemp4679);
qual=nctemp4681;
struct tree* nctemp4689= p;
struct tree* nctemp4691=PtreeMvchild(nctemp4689);
np =nctemp4691;
int nctemp4682 = (np ==0);
if(nctemp4682)
{
return qual;
}
}
struct tree* nctemp4700= np;
nctempchar1* nctemp4702=PtreeGetarray(nctemp4700);
nctempchar1* nctemp4698= nctemp4702;
struct nctempchar1 *nctemp4705;
static struct nctempchar1 nctemp4706 = {{ 6}, (char*)"array\0"};
nctemp4705=&nctemp4706;
nctempchar1* nctemp4703= nctemp4705;
int nctemp4707=LibeStrcmp(nctemp4698,nctemp4703);
int nctemp4695 = (nctemp4707 ==1);
if(nctemp4695)
{
struct symbol* nctemp4713=SymGetltp();
tp =nctemp4713;
struct symbol* nctemp4718=SymGetetp();
up =nctemp4718;
struct tree* nctemp4725= p;
nctempchar1* nctemp4727=PtreeGetdef(nctemp4725);
nctempchar1* nctemp4723= nctemp4727;
struct symbol* nctemp4728=SymLook(nctemp4723);
uup =nctemp4728;
struct symbol* nctemp4735= uup;
nctempchar1* nctemp4737=SymGetype(nctemp4735);
nctempchar1* nctemp4733= nctemp4737;
struct symbol* nctemp4738=SymLook(nctemp4733);
uup =nctemp4738;
struct symbol* nctemp4742= uup;
struct symbol* nctemp4744=SymGetable(nctemp4742);
struct symbol* nctemp4740= nctemp4744;
struct symbol* nctemp4745=SymSetltp(nctemp4740);
struct tree* nctemp4751= p;
nctempchar1* nctemp4753=PtreeGetarray(nctemp4751);
nctempchar1* nctemp4749= nctemp4753;
struct nctempchar1 *nctemp4756;
static struct nctempchar1 nctemp4757 = {{ 6}, (char*)"array\0"};
nctemp4756=&nctemp4757;
nctempchar1* nctemp4754= nctemp4756;
int nctemp4758=LibeStrcmp(nctemp4749,nctemp4754);
int nctemp4746 = (nctemp4758 ==1);
if(nctemp4746)
{
struct tree* nctemp4765= np;
nctempchar1* nctemp4767= qual;
struct nctempchar1 *nctemp4772;
static struct nctempchar1 nctemp4773 = {{ 2}, (char*)".\0"};
nctemp4772=&nctemp4773;
nctempchar1* nctemp4770= nctemp4772;
nctempchar1* nctemp4774=CodeArray(nctemp4765,nctemp4767,nctemp4770);
name=nctemp4774;
}
else{
struct tree* nctemp4780= np;
nctempchar1* nctemp4782= qual;
struct nctempchar1 *nctemp4787;
static struct nctempchar1 nctemp4788 = {{ 3}, (char*)"->\0"};
nctemp4787=&nctemp4788;
nctempchar1* nctemp4785= nctemp4787;
nctempchar1* nctemp4789=CodeArray(nctemp4780,nctemp4782,nctemp4785);
name=nctemp4789;
}
struct symbol* nctemp4791= tp;
struct symbol* nctemp4793=SymSetltp(nctemp4791);
struct symbol* nctemp4795= up;
struct symbol* nctemp4797=SymSetetp(nctemp4795);
}
else{
struct tree* nctemp4803= np;
nctempchar1* nctemp4805=PtreeGetdef(nctemp4803);
name=nctemp4805;
}
struct tree* nctemp4811= p;
nctempchar1* nctemp4813=PtreeGetarray(nctemp4811);
nctempchar1* nctemp4809= nctemp4813;
struct nctempchar1 *nctemp4816;
static struct nctempchar1 nctemp4817 = {{ 6}, (char*)"array\0"};
nctemp4816=&nctemp4817;
nctempchar1* nctemp4814= nctemp4816;
int nctemp4818=LibeStrcmp(nctemp4809,nctemp4814);
int nctemp4806 = (nctemp4818 ==1);
if(nctemp4806)
{
nctempchar1* nctemp4821= qual;
nctempchar1* nctemp4824= name;
nctempchar1* nctemp4827=CodeQident(nctemp4821,nctemp4824);
return nctemp4827;
}
else{
nctempchar1* nctemp4829= qual;
nctempchar1* nctemp4832= name;
nctempchar1* nctemp4835=CodeQident2(nctemp4829,nctemp4832);
return nctemp4835;
}
}
else{
struct tree* nctemp4841= p;
nctempchar1* nctemp4843=PtreeGetarray(nctemp4841);
nctempchar1* nctemp4839= nctemp4843;
struct nctempchar1 *nctemp4846;
static struct nctempchar1 nctemp4847 = {{ 6}, (char*)"array\0"};
nctemp4846=&nctemp4847;
nctempchar1* nctemp4844= nctemp4846;
int nctemp4848=LibeStrcmp(nctemp4839,nctemp4844);
int nctemp4836 = (nctemp4848 ==1);
if(nctemp4836)
{
name=(0);
qual=(0);
struct tree* nctemp4865= p;
nctempchar1* nctemp4867= qual;
nctempchar1* nctemp4870= name;
nctempchar1* nctemp4873=CodeArray(nctemp4865,nctemp4867,nctemp4870);
qual=nctemp4873;
return qual;
}
else{
struct tree* nctemp4877= p;
nctempchar1* nctemp4879=PtreeGetdef(nctemp4877);
return nctemp4879;
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
nctempchar1* nctemp4885=CodeMktemp();
pointer=nctemp4885;
nctempchar1* nctemp4891=CodeMktemp();
totdim=nctemp4891;
struct tree* nctemp4896= p;
struct tree* nctemp4898=PtreeMvchild(nctemp4896);
p =nctemp4898;
struct tree* nctemp4904= p;
nctempchar1* nctemp4906=PtreeGetdef(nctemp4904);
type=nctemp4906;
struct tree* nctemp4912= p;
nctempchar1* nctemp4914=PtreeGetstruct(nctemp4912);
structflag=nctemp4914;
struct tree* nctemp4920= p;
nctempchar1* nctemp4922=PtreeGetarray(nctemp4920);
arrayflag=nctemp4922;
struct tree* nctemp4928= p;
nctempchar1* nctemp4930=PtreeGetarray(nctemp4928);
nctempchar1* nctemp4926= nctemp4930;
struct nctempchar1 *nctemp4933;
static struct nctempchar1 nctemp4934 = {{ 6}, (char*)"array\0"};
nctemp4933=&nctemp4934;
nctempchar1* nctemp4931= nctemp4933;
int nctemp4935=LibeStrcmp(nctemp4926,nctemp4931);
int nctemp4923 = (nctemp4935 ==1);
if(nctemp4923)
{
struct tree* nctemp4941= p;
struct tree* nctemp4943=PtreeMvchild(nctemp4941);
p =nctemp4943;
struct tree* nctemp4948= p;
struct tree* nctemp4950=PtreeMvchild(nctemp4948);
p =nctemp4950;
struct tree* nctemp4955= p;
struct tree* nctemp4957=PtreeMvchild(nctemp4955);
p =nctemp4957;
struct tree* nctemp4962= p;
struct tree* nctemp4964=PtreeMvchild(nctemp4962);
p =nctemp4964;
sp =p;
top =p;
rank =1;
struct tree* nctemp4984= p;
struct tree* nctemp4986=PtreeMvsister(nctemp4984);
p =nctemp4986;
int nctemp4977 = (p !=0);
int nctemp4988=nctemp4977;
while(nctemp4988)
{{
int nctemp4997 = rank + 1;
rank =nctemp4997;
}
struct tree* nctemp5005= p;
struct tree* nctemp5007=PtreeMvsister(nctemp5005);
p =nctemp5007;
int nctemp4998 = (p !=0);
nctemp4988=nctemp4998;}int nctemp5009 = (rank > 4);
if(nctemp5009)
{
struct nctempchar1 *nctemp5016;
static struct nctempchar1 nctemp5017 = {{ 29}, (char*)"Array dimension is too large\0"};
nctemp5016=&nctemp5017;
nctempchar1* nctemp5014= nctemp5016;
int nctemp5018=CodeError(nctemp5014);
}
p =sp;
i =0;
int nctemp5027 = (p !=0);
int nctemp5031=nctemp5027;
while(nctemp5031)
{{
struct tree* nctemp5037= p;
nctempchar1* nctemp5039=CodeExpr(nctemp5037);
dim=nctemp5039;
int nctemp5040 = (i ==0);
if(nctemp5040)
{
struct tree* nctemp5045= p;
struct tree* nctemp5049= p;
nctempchar1* nctemp5051=PtreeGetype(nctemp5049);
nctempchar1* nctemp5047= nctemp5051;
int nctemp5052=CodeEs(nctemp5045,nctemp5047);
struct tree* nctemp5054= p;
struct nctempchar1 *nctemp5058;
static struct nctempchar1 nctemp5059 = {{ 2}, (char*)" \0"};
nctemp5058=&nctemp5059;
nctempchar1* nctemp5056= nctemp5058;
int nctemp5060=CodeEs(nctemp5054,nctemp5056);
struct tree* nctemp5062= p;
nctempchar1* nctemp5064= totdim;
int nctemp5067=CodeEs(nctemp5062,nctemp5064);
struct tree* nctemp5069= p;
struct nctempchar1 *nctemp5073;
static struct nctempchar1 nctemp5074 = {{ 2}, (char*)"=\0"};
nctemp5073=&nctemp5074;
nctempchar1* nctemp5071= nctemp5073;
int nctemp5075=CodeEs(nctemp5069,nctemp5071);
struct tree* nctemp5077= p;
nctempchar1* nctemp5079= dim;
int nctemp5082=CodeEs(nctemp5077,nctemp5079);
}
else{
struct tree* nctemp5084= p;
nctempchar1* nctemp5086= totdim;
int nctemp5089=CodeEs(nctemp5084,nctemp5086);
struct tree* nctemp5091= p;
struct nctempchar1 *nctemp5095;
static struct nctempchar1 nctemp5096 = {{ 2}, (char*)"=\0"};
nctemp5095=&nctemp5096;
nctempchar1* nctemp5093= nctemp5095;
int nctemp5097=CodeEs(nctemp5091,nctemp5093);
struct tree* nctemp5099= p;
nctempchar1* nctemp5101= totdim;
int nctemp5104=CodeEs(nctemp5099,nctemp5101);
struct tree* nctemp5106= p;
struct nctempchar1 *nctemp5110;
static struct nctempchar1 nctemp5111 = {{ 2}, (char*)"*\0"};
nctemp5110=&nctemp5111;
nctempchar1* nctemp5108= nctemp5110;
int nctemp5112=CodeEs(nctemp5106,nctemp5108);
struct tree* nctemp5114= p;
nctempchar1* nctemp5116= dim;
int nctemp5119=CodeEs(nctemp5114,nctemp5116);
}
struct tree* nctemp5121= p;
struct nctempchar1 *nctemp5125;
static struct nctempchar1 nctemp5126 = {{ 4}, (char*)";\n\0"};
nctemp5125=&nctemp5126;
nctempchar1* nctemp5123= nctemp5125;
int nctemp5127=CodeEs(nctemp5121,nctemp5123);
int nctemp5136 = i + 1;
i =nctemp5136;
struct tree* nctemp5141= p;
struct tree* nctemp5143=PtreeMvsister(nctemp5141);
p =nctemp5143;
}
int nctemp5144 = (p !=0);
nctemp5031=nctemp5144;}}
nctempchar1* nctemp5154= structflag;
struct nctempchar1 *nctemp5159;
static struct nctempchar1 nctemp5160 = {{ 7}, (char*)"struct\0"};
nctemp5159=&nctemp5160;
nctempchar1* nctemp5157= nctemp5159;
int nctemp5161=LibeStrcmp(nctemp5154,nctemp5157);
int nctemp5151 = (nctemp5161 ==1);
nctempchar1* nctemp5167= arrayflag;
struct nctempchar1 *nctemp5172;
static struct nctempchar1 nctemp5173 = {{ 6}, (char*)"array\0"};
nctemp5172=&nctemp5173;
nctempchar1* nctemp5170= nctemp5172;
int nctemp5174=LibeStrcmp(nctemp5167,nctemp5170);
int nctemp5164 = (nctemp5174 ==0);
int nctemp5148 = (nctemp5151 && nctemp5164);
if(nctemp5148)
{
struct tree* nctemp5177= p;
struct nctempchar1 *nctemp5181;
static struct nctempchar1 nctemp5182 = {{ 8}, (char*)"struct \0"};
nctemp5181=&nctemp5182;
nctempchar1* nctemp5179= nctemp5181;
int nctemp5183=CodeEs(nctemp5177,nctemp5179);
struct tree* nctemp5185= p;
nctempchar1* nctemp5187= type;
int nctemp5190=CodeEs(nctemp5185,nctemp5187);
struct tree* nctemp5192= p;
struct nctempchar1 *nctemp5196;
static struct nctempchar1 nctemp5197 = {{ 3}, (char*)" *\0"};
nctemp5196=&nctemp5197;
nctempchar1* nctemp5194= nctemp5196;
int nctemp5198=CodeEs(nctemp5192,nctemp5194);
struct tree* nctemp5200= p;
nctempchar1* nctemp5202= pointer;
int nctemp5205=CodeEs(nctemp5200,nctemp5202);
struct tree* nctemp5207= p;
struct nctempchar1 *nctemp5211;
static struct nctempchar1 nctemp5212 = {{ 2}, (char*)"=\0"};
nctemp5211=&nctemp5212;
nctempchar1* nctemp5209= nctemp5211;
int nctemp5213=CodeEs(nctemp5207,nctemp5209);
struct tree* nctemp5215= p;
struct nctempchar1 *nctemp5219;
static struct nctempchar1 nctemp5220 = {{ 2}, (char*)"(\0"};
nctemp5219=&nctemp5220;
nctempchar1* nctemp5217= nctemp5219;
int nctemp5221=CodeEs(nctemp5215,nctemp5217);
struct tree* nctemp5223= p;
struct nctempchar1 *nctemp5227;
static struct nctempchar1 nctemp5228 = {{ 8}, (char*)"struct \0"};
nctemp5227=&nctemp5228;
nctempchar1* nctemp5225= nctemp5227;
int nctemp5229=CodeEs(nctemp5223,nctemp5225);
struct tree* nctemp5231= p;
nctempchar1* nctemp5233= type;
int nctemp5236=CodeEs(nctemp5231,nctemp5233);
struct tree* nctemp5238= p;
struct nctempchar1 *nctemp5242;
static struct nctempchar1 nctemp5243 = {{ 3}, (char*)"*)\0"};
nctemp5242=&nctemp5243;
nctempchar1* nctemp5240= nctemp5242;
int nctemp5244=CodeEs(nctemp5238,nctemp5240);
struct tree* nctemp5246= p;
struct nctempchar1 *nctemp5250;
static struct nctempchar1 nctemp5251 = {{ 11}, (char*)"RunMalloc(\0"};
nctemp5250=&nctemp5251;
nctempchar1* nctemp5248= nctemp5250;
int nctemp5252=CodeEs(nctemp5246,nctemp5248);
struct tree* nctemp5254= p;
struct nctempchar1 *nctemp5258;
static struct nctempchar1 nctemp5259 = {{ 8}, (char*)"sizeof(\0"};
nctemp5258=&nctemp5259;
nctempchar1* nctemp5256= nctemp5258;
int nctemp5260=CodeEs(nctemp5254,nctemp5256);
struct tree* nctemp5262= p;
struct nctempchar1 *nctemp5266;
static struct nctempchar1 nctemp5267 = {{ 8}, (char*)"struct \0"};
nctemp5266=&nctemp5267;
nctempchar1* nctemp5264= nctemp5266;
int nctemp5268=CodeEs(nctemp5262,nctemp5264);
struct tree* nctemp5270= p;
nctempchar1* nctemp5272= type;
int nctemp5275=CodeEs(nctemp5270,nctemp5272);
struct tree* nctemp5277= p;
struct nctempchar1 *nctemp5281;
static struct nctempchar1 nctemp5282 = {{ 6}, (char*)"));\n\0"};
nctemp5281=&nctemp5282;
nctempchar1* nctemp5279= nctemp5281;
int nctemp5283=CodeEs(nctemp5277,nctemp5279);
}
nctempchar1* nctemp5290= structflag;
struct nctempchar1 *nctemp5295;
static struct nctempchar1 nctemp5296 = {{ 7}, (char*)"struct\0"};
nctemp5295=&nctemp5296;
nctempchar1* nctemp5293= nctemp5295;
int nctemp5297=LibeStrcmp(nctemp5290,nctemp5293);
int nctemp5287 = (nctemp5297 ==1);
nctempchar1* nctemp5303= arrayflag;
struct nctempchar1 *nctemp5308;
static struct nctempchar1 nctemp5309 = {{ 6}, (char*)"array\0"};
nctemp5308=&nctemp5309;
nctempchar1* nctemp5306= nctemp5308;
int nctemp5310=LibeStrcmp(nctemp5303,nctemp5306);
int nctemp5300 = (nctemp5310 ==1);
int nctemp5284 = (nctemp5287 && nctemp5300);
if(nctemp5284)
{
struct tree* nctemp5313= p;
struct nctempchar1 *nctemp5317;
static struct nctempchar1 nctemp5318 = {{ 14}, (char*)"struct nctemp\0"};
nctemp5317=&nctemp5318;
nctempchar1* nctemp5315= nctemp5317;
int nctemp5319=CodeEs(nctemp5313,nctemp5315);
struct tree* nctemp5321= p;
nctempchar1* nctemp5323= type;
int nctemp5326=CodeEs(nctemp5321,nctemp5323);
int nctemp5328= rank;
int nctemp5330=CodeEd(nctemp5328);
struct tree* nctemp5332= p;
struct nctempchar1 *nctemp5336;
static struct nctempchar1 nctemp5337 = {{ 3}, (char*)" *\0"};
nctemp5336=&nctemp5337;
nctempchar1* nctemp5334= nctemp5336;
int nctemp5338=CodeEs(nctemp5332,nctemp5334);
struct tree* nctemp5340= p;
nctempchar1* nctemp5342= pointer;
int nctemp5345=CodeEs(nctemp5340,nctemp5342);
struct tree* nctemp5347= p;
struct nctempchar1 *nctemp5351;
static struct nctempchar1 nctemp5352 = {{ 4}, (char*)";\n\0"};
nctemp5351=&nctemp5352;
nctempchar1* nctemp5349= nctemp5351;
int nctemp5353=CodeEs(nctemp5347,nctemp5349);
struct tree* nctemp5355= p;
nctempchar1* nctemp5357= pointer;
int nctemp5360=CodeEs(nctemp5355,nctemp5357);
struct tree* nctemp5362= p;
struct nctempchar1 *nctemp5366;
static struct nctempchar1 nctemp5367 = {{ 2}, (char*)"=\0"};
nctemp5366=&nctemp5367;
nctempchar1* nctemp5364= nctemp5366;
int nctemp5368=CodeEs(nctemp5362,nctemp5364);
struct tree* nctemp5370= p;
struct nctempchar1 *nctemp5374;
static struct nctempchar1 nctemp5375 = {{ 2}, (char*)"(\0"};
nctemp5374=&nctemp5375;
nctempchar1* nctemp5372= nctemp5374;
int nctemp5376=CodeEs(nctemp5370,nctemp5372);
struct tree* nctemp5378= p;
struct nctempchar1 *nctemp5382;
static struct nctempchar1 nctemp5383 = {{ 14}, (char*)"struct nctemp\0"};
nctemp5382=&nctemp5383;
nctempchar1* nctemp5380= nctemp5382;
int nctemp5384=CodeEs(nctemp5378,nctemp5380);
struct tree* nctemp5386= p;
nctempchar1* nctemp5388= type;
int nctemp5391=CodeEs(nctemp5386,nctemp5388);
int nctemp5393= rank;
int nctemp5395=CodeEd(nctemp5393);
struct tree* nctemp5397= p;
struct nctempchar1 *nctemp5401;
static struct nctempchar1 nctemp5402 = {{ 3}, (char*)"*)\0"};
nctemp5401=&nctemp5402;
nctempchar1* nctemp5399= nctemp5401;
int nctemp5403=CodeEs(nctemp5397,nctemp5399);
struct tree* nctemp5405= p;
struct nctempchar1 *nctemp5409;
static struct nctempchar1 nctemp5410 = {{ 11}, (char*)"RunMalloc(\0"};
nctemp5409=&nctemp5410;
nctempchar1* nctemp5407= nctemp5409;
int nctemp5411=CodeEs(nctemp5405,nctemp5407);
struct tree* nctemp5413= p;
struct nctempchar1 *nctemp5417;
static struct nctempchar1 nctemp5418 = {{ 21}, (char*)"sizeof(struct nctemp\0"};
nctemp5417=&nctemp5418;
nctempchar1* nctemp5415= nctemp5417;
int nctemp5419=CodeEs(nctemp5413,nctemp5415);
struct tree* nctemp5421= p;
nctempchar1* nctemp5423= type;
int nctemp5426=CodeEs(nctemp5421,nctemp5423);
int nctemp5428= rank;
int nctemp5430=CodeEd(nctemp5428);
struct tree* nctemp5432= p;
struct nctempchar1 *nctemp5436;
static struct nctempchar1 nctemp5437 = {{ 6}, (char*)"));\n\0"};
nctemp5436=&nctemp5437;
nctempchar1* nctemp5434= nctemp5436;
int nctemp5438=CodeEs(nctemp5432,nctemp5434);
i =0;
p =sp;
int nctemp5447 = (p !=0);
int nctemp5451=nctemp5447;
while(nctemp5451)
{{
struct tree* nctemp5457= sp;
nctempchar1* nctemp5459=CodeExpr(nctemp5457);
dim=nctemp5459;
struct tree* nctemp5461= sp;
nctempchar1* nctemp5463= pointer;
int nctemp5466=CodeEs(nctemp5461,nctemp5463);
struct tree* nctemp5468= sp;
struct nctempchar1 *nctemp5472;
static struct nctempchar1 nctemp5473 = {{ 4}, (char*)"->d\0"};
nctemp5472=&nctemp5473;
nctempchar1* nctemp5470= nctemp5472;
int nctemp5474=CodeEs(nctemp5468,nctemp5470);
struct tree* nctemp5476= sp;
struct nctempchar1 *nctemp5480;
static struct nctempchar1 nctemp5481 = {{ 2}, (char*)"[\0"};
nctemp5480=&nctemp5481;
nctempchar1* nctemp5478= nctemp5480;
int nctemp5482=CodeEs(nctemp5476,nctemp5478);
int nctemp5484= i;
int nctemp5486=CodeEd(nctemp5484);
struct tree* nctemp5488= sp;
struct nctempchar1 *nctemp5492;
static struct nctempchar1 nctemp5493 = {{ 3}, (char*)"]=\0"};
nctemp5492=&nctemp5493;
nctempchar1* nctemp5490= nctemp5492;
int nctemp5494=CodeEs(nctemp5488,nctemp5490);
struct tree* nctemp5496= sp;
nctempchar1* nctemp5498= dim;
int nctemp5501=CodeEs(nctemp5496,nctemp5498);
struct tree* nctemp5503= sp;
struct nctempchar1 *nctemp5507;
static struct nctempchar1 nctemp5508 = {{ 4}, (char*)";\n\0"};
nctemp5507=&nctemp5508;
nctempchar1* nctemp5505= nctemp5507;
int nctemp5509=CodeEs(nctemp5503,nctemp5505);
int nctemp5518 = i + 1;
i =nctemp5518;
struct tree* nctemp5523= p;
struct tree* nctemp5525=PtreeMvsister(nctemp5523);
p =nctemp5525;
}
int nctemp5526 = (p !=0);
nctemp5451=nctemp5526;}struct tree* nctemp5531= sp;
nctempchar1* nctemp5533= pointer;
int nctemp5536=CodeEs(nctemp5531,nctemp5533);
struct tree* nctemp5538= sp;
struct nctempchar1 *nctemp5542;
static struct nctempchar1 nctemp5543 = {{ 4}, (char*)"->a\0"};
nctemp5542=&nctemp5543;
nctempchar1* nctemp5540= nctemp5542;
int nctemp5544=CodeEs(nctemp5538,nctemp5540);
struct tree* nctemp5546= sp;
struct nctempchar1 *nctemp5550;
static struct nctempchar1 nctemp5551 = {{ 2}, (char*)"=\0"};
nctemp5550=&nctemp5551;
nctempchar1* nctemp5548= nctemp5550;
int nctemp5552=CodeEs(nctemp5546,nctemp5548);
struct tree* nctemp5554= sp;
struct nctempchar1 *nctemp5558;
static struct nctempchar1 nctemp5559 = {{ 9}, (char*)"(struct \0"};
nctemp5558=&nctemp5559;
nctempchar1* nctemp5556= nctemp5558;
int nctemp5560=CodeEs(nctemp5554,nctemp5556);
struct tree* nctemp5562= sp;
nctempchar1* nctemp5564= type;
int nctemp5567=CodeEs(nctemp5562,nctemp5564);
struct tree* nctemp5569= sp;
struct nctempchar1 *nctemp5573;
static struct nctempchar1 nctemp5574 = {{ 3}, (char*)"*)\0"};
nctemp5573=&nctemp5574;
nctempchar1* nctemp5571= nctemp5573;
int nctemp5575=CodeEs(nctemp5569,nctemp5571);
struct tree* nctemp5577= sp;
struct nctempchar1 *nctemp5581;
static struct nctempchar1 nctemp5582 = {{ 18}, (char*)"RunMalloc(sizeof(\0"};
nctemp5581=&nctemp5582;
nctempchar1* nctemp5579= nctemp5581;
int nctemp5583=CodeEs(nctemp5577,nctemp5579);
struct tree* nctemp5585= sp;
struct nctempchar1 *nctemp5589;
static struct nctempchar1 nctemp5590 = {{ 8}, (char*)"struct \0"};
nctemp5589=&nctemp5590;
nctempchar1* nctemp5587= nctemp5589;
int nctemp5591=CodeEs(nctemp5585,nctemp5587);
struct tree* nctemp5593= sp;
nctempchar1* nctemp5595= type;
int nctemp5598=CodeEs(nctemp5593,nctemp5595);
struct tree* nctemp5600= sp;
struct nctempchar1 *nctemp5604;
static struct nctempchar1 nctemp5605 = {{ 2}, (char*)")\0"};
nctemp5604=&nctemp5605;
nctempchar1* nctemp5602= nctemp5604;
int nctemp5606=CodeEs(nctemp5600,nctemp5602);
struct tree* nctemp5608= sp;
struct nctempchar1 *nctemp5612;
static struct nctempchar1 nctemp5613 = {{ 2}, (char*)"*\0"};
nctemp5612=&nctemp5613;
nctempchar1* nctemp5610= nctemp5612;
int nctemp5614=CodeEs(nctemp5608,nctemp5610);
struct tree* nctemp5616= sp;
nctempchar1* nctemp5618= totdim;
int nctemp5621=CodeEs(nctemp5616,nctemp5618);
struct tree* nctemp5623= sp;
struct nctempchar1 *nctemp5627;
static struct nctempchar1 nctemp5628 = {{ 5}, (char*)");\n\0"};
nctemp5627=&nctemp5628;
nctempchar1* nctemp5625= nctemp5627;
int nctemp5629=CodeEs(nctemp5623,nctemp5625);
}
nctempchar1* nctemp5636= structflag;
struct nctempchar1 *nctemp5641;
static struct nctempchar1 nctemp5642 = {{ 7}, (char*)"struct\0"};
nctemp5641=&nctemp5642;
nctempchar1* nctemp5639= nctemp5641;
int nctemp5643=LibeStrcmp(nctemp5636,nctemp5639);
int nctemp5633 = (nctemp5643 ==0);
nctempchar1* nctemp5649= arrayflag;
struct nctempchar1 *nctemp5654;
static struct nctempchar1 nctemp5655 = {{ 6}, (char*)"array\0"};
nctemp5654=&nctemp5655;
nctempchar1* nctemp5652= nctemp5654;
int nctemp5656=LibeStrcmp(nctemp5649,nctemp5652);
int nctemp5646 = (nctemp5656 ==1);
int nctemp5630 = (nctemp5633 && nctemp5646);
if(nctemp5630)
{
int nctemp5659= 4;
int nctemp5661=LibeFlush(nctemp5659);
struct tree* nctemp5663= sp;
struct nctempchar1 *nctemp5667;
static struct nctempchar1 nctemp5668 = {{ 7}, (char*)"nctemp\0"};
nctemp5667=&nctemp5668;
nctempchar1* nctemp5665= nctemp5667;
int nctemp5669=CodeEs(nctemp5663,nctemp5665);
struct tree* nctemp5671= sp;
nctempchar1* nctemp5673= type;
int nctemp5676=CodeEs(nctemp5671,nctemp5673);
int nctemp5678= rank;
int nctemp5680=CodeEd(nctemp5678);
struct tree* nctemp5682= sp;
struct nctempchar1 *nctemp5686;
static struct nctempchar1 nctemp5687 = {{ 3}, (char*)" *\0"};
nctemp5686=&nctemp5687;
nctempchar1* nctemp5684= nctemp5686;
int nctemp5688=CodeEs(nctemp5682,nctemp5684);
struct tree* nctemp5690= sp;
nctempchar1* nctemp5692= pointer;
int nctemp5695=CodeEs(nctemp5690,nctemp5692);
struct tree* nctemp5697= sp;
struct nctempchar1 *nctemp5701;
static struct nctempchar1 nctemp5702 = {{ 4}, (char*)";\n\0"};
nctemp5701=&nctemp5702;
nctempchar1* nctemp5699= nctemp5701;
int nctemp5703=CodeEs(nctemp5697,nctemp5699);
p =top;
i =0;
struct tree* nctemp5713= p;
nctempchar1* nctemp5715= pointer;
int nctemp5718=CodeEs(nctemp5713,nctemp5715);
struct tree* nctemp5720= p;
struct nctempchar1 *nctemp5724;
static struct nctempchar1 nctemp5725 = {{ 2}, (char*)"=\0"};
nctemp5724=&nctemp5725;
nctempchar1* nctemp5722= nctemp5724;
int nctemp5726=CodeEs(nctemp5720,nctemp5722);
struct tree* nctemp5728= p;
struct nctempchar1 *nctemp5732;
static struct nctempchar1 nctemp5733 = {{ 2}, (char*)"(\0"};
nctemp5732=&nctemp5733;
nctempchar1* nctemp5730= nctemp5732;
int nctemp5734=CodeEs(nctemp5728,nctemp5730);
struct tree* nctemp5736= p;
struct nctempchar1 *nctemp5740;
static struct nctempchar1 nctemp5741 = {{ 7}, (char*)"nctemp\0"};
nctemp5740=&nctemp5741;
nctempchar1* nctemp5738= nctemp5740;
int nctemp5742=CodeEs(nctemp5736,nctemp5738);
struct tree* nctemp5744= p;
nctempchar1* nctemp5746= type;
int nctemp5749=CodeEs(nctemp5744,nctemp5746);
int nctemp5751= rank;
int nctemp5753=CodeEd(nctemp5751);
struct tree* nctemp5755= p;
struct nctempchar1 *nctemp5759;
static struct nctempchar1 nctemp5760 = {{ 3}, (char*)"*)\0"};
nctemp5759=&nctemp5760;
nctempchar1* nctemp5757= nctemp5759;
int nctemp5761=CodeEs(nctemp5755,nctemp5757);
struct tree* nctemp5763= p;
struct nctempchar1 *nctemp5767;
static struct nctempchar1 nctemp5768 = {{ 11}, (char*)"RunMalloc(\0"};
nctemp5767=&nctemp5768;
nctempchar1* nctemp5765= nctemp5767;
int nctemp5769=CodeEs(nctemp5763,nctemp5765);
struct tree* nctemp5771= p;
struct nctempchar1 *nctemp5775;
static struct nctempchar1 nctemp5776 = {{ 14}, (char*)"sizeof(nctemp\0"};
nctemp5775=&nctemp5776;
nctempchar1* nctemp5773= nctemp5775;
int nctemp5777=CodeEs(nctemp5771,nctemp5773);
struct tree* nctemp5779= p;
nctempchar1* nctemp5781= type;
int nctemp5784=CodeEs(nctemp5779,nctemp5781);
int nctemp5786= rank;
int nctemp5788=CodeEd(nctemp5786);
struct tree* nctemp5790= p;
struct nctempchar1 *nctemp5794;
static struct nctempchar1 nctemp5795 = {{ 6}, (char*)"));\n\0"};
nctemp5794=&nctemp5795;
nctempchar1* nctemp5792= nctemp5794;
int nctemp5796=CodeEs(nctemp5790,nctemp5792);
int nctemp5797 = (p !=0);
int nctemp5801=nctemp5797;
while(nctemp5801)
{{
struct tree* nctemp5807= p;
nctempchar1* nctemp5809=CodeExpr(nctemp5807);
dim=nctemp5809;
struct tree* nctemp5811= p;
nctempchar1* nctemp5813= pointer;
int nctemp5816=CodeEs(nctemp5811,nctemp5813);
struct tree* nctemp5818= p;
struct nctempchar1 *nctemp5822;
static struct nctempchar1 nctemp5823 = {{ 4}, (char*)"->d\0"};
nctemp5822=&nctemp5823;
nctempchar1* nctemp5820= nctemp5822;
int nctemp5824=CodeEs(nctemp5818,nctemp5820);
struct tree* nctemp5826= p;
struct nctempchar1 *nctemp5830;
static struct nctempchar1 nctemp5831 = {{ 2}, (char*)"[\0"};
nctemp5830=&nctemp5831;
nctempchar1* nctemp5828= nctemp5830;
int nctemp5832=CodeEs(nctemp5826,nctemp5828);
int nctemp5834= i;
int nctemp5836=CodeEd(nctemp5834);
struct tree* nctemp5838= p;
struct nctempchar1 *nctemp5842;
static struct nctempchar1 nctemp5843 = {{ 3}, (char*)"]=\0"};
nctemp5842=&nctemp5843;
nctempchar1* nctemp5840= nctemp5842;
int nctemp5844=CodeEs(nctemp5838,nctemp5840);
struct tree* nctemp5846= p;
nctempchar1* nctemp5848= dim;
int nctemp5851=CodeEs(nctemp5846,nctemp5848);
struct tree* nctemp5853= p;
struct nctempchar1 *nctemp5857;
static struct nctempchar1 nctemp5858 = {{ 4}, (char*)";\n\0"};
nctemp5857=&nctemp5858;
nctempchar1* nctemp5855= nctemp5857;
int nctemp5859=CodeEs(nctemp5853,nctemp5855);
int nctemp5868 = i + 1;
i =nctemp5868;
struct tree* nctemp5873= p;
struct tree* nctemp5875=PtreeMvsister(nctemp5873);
p =nctemp5875;
}
int nctemp5876 = (p !=0);
nctemp5801=nctemp5876;}p =top;
struct tree* nctemp5885= p;
nctempchar1* nctemp5887= pointer;
int nctemp5890=CodeEs(nctemp5885,nctemp5887);
struct tree* nctemp5892= p;
struct nctempchar1 *nctemp5896;
static struct nctempchar1 nctemp5897 = {{ 4}, (char*)"->a\0"};
nctemp5896=&nctemp5897;
nctempchar1* nctemp5894= nctemp5896;
int nctemp5898=CodeEs(nctemp5892,nctemp5894);
struct tree* nctemp5900= p;
struct nctempchar1 *nctemp5904;
static struct nctempchar1 nctemp5905 = {{ 3}, (char*)"=(\0"};
nctemp5904=&nctemp5905;
nctempchar1* nctemp5902= nctemp5904;
int nctemp5906=CodeEs(nctemp5900,nctemp5902);
struct tree* nctemp5908= p;
nctempchar1* nctemp5910= type;
int nctemp5913=CodeEs(nctemp5908,nctemp5910);
struct tree* nctemp5915= p;
struct nctempchar1 *nctemp5919;
static struct nctempchar1 nctemp5920 = {{ 4}, (char*)" *)\0"};
nctemp5919=&nctemp5920;
nctempchar1* nctemp5917= nctemp5919;
int nctemp5921=CodeEs(nctemp5915,nctemp5917);
struct tree* nctemp5923= p;
struct nctempchar1 *nctemp5927;
static struct nctempchar1 nctemp5928 = {{ 18}, (char*)"RunMalloc(sizeof(\0"};
nctemp5927=&nctemp5928;
nctempchar1* nctemp5925= nctemp5927;
int nctemp5929=CodeEs(nctemp5923,nctemp5925);
struct tree* nctemp5931= p;
nctempchar1* nctemp5933= type;
int nctemp5936=CodeEs(nctemp5931,nctemp5933);
struct tree* nctemp5938= p;
struct nctempchar1 *nctemp5942;
static struct nctempchar1 nctemp5943 = {{ 2}, (char*)")\0"};
nctemp5942=&nctemp5943;
nctempchar1* nctemp5940= nctemp5942;
int nctemp5944=CodeEs(nctemp5938,nctemp5940);
struct tree* nctemp5946= p;
struct nctempchar1 *nctemp5950;
static struct nctempchar1 nctemp5951 = {{ 2}, (char*)"*\0"};
nctemp5950=&nctemp5951;
nctempchar1* nctemp5948= nctemp5950;
int nctemp5952=CodeEs(nctemp5946,nctemp5948);
struct tree* nctemp5954= p;
nctempchar1* nctemp5956= totdim;
int nctemp5959=CodeEs(nctemp5954,nctemp5956);
struct tree* nctemp5961= p;
struct nctempchar1 *nctemp5965;
static struct nctempchar1 nctemp5966 = {{ 5}, (char*)");\n\0"};
nctemp5965=&nctemp5966;
nctempchar1* nctemp5963= nctemp5965;
int nctemp5967=CodeEs(nctemp5961,nctemp5963);
}
return pointer;
}
nctempchar1 * CodeDelete (struct tree* p)
{
nctempchar1 *tmp;
struct tree* nctemp5974= p;
struct tree* nctemp5976=PtreeMvchild(nctemp5974);
p =nctemp5976;
struct tree* nctemp5981= p;
struct tree* nctemp5983=PtreeMvchild(nctemp5981);
p =nctemp5983;
struct tree* nctemp5989= p;
nctempchar1* nctemp5991=CodeBinexpr(nctemp5989);
tmp=nctemp5991;
struct tree* nctemp5995= p;
nctempchar1* nctemp5997=PtreeGetref(nctemp5995);
nctempchar1* nctemp5993= nctemp5997;
struct nctempchar1 *nctemp6000;
static struct nctempchar1 nctemp6001 = {{ 5}, (char*)"aref\0"};
nctemp6000=&nctemp6001;
nctempchar1* nctemp5998= nctemp6000;
int nctemp6002=LibeStrcmp(nctemp5993,nctemp5998);
if(nctemp6002)
{
struct tree* nctemp6004= p;
struct nctempchar1 *nctemp6008;
static struct nctempchar1 nctemp6009 = {{ 9}, (char*)"RunFree(\0"};
nctemp6008=&nctemp6009;
nctempchar1* nctemp6006= nctemp6008;
int nctemp6010=CodeEs(nctemp6004,nctemp6006);
struct tree* nctemp6012= p;
nctempchar1* nctemp6014= tmp;
int nctemp6017=CodeEs(nctemp6012,nctemp6014);
struct tree* nctemp6019= p;
struct nctempchar1 *nctemp6023;
static struct nctempchar1 nctemp6024 = {{ 8}, (char*)"->a);\n\0"};
nctemp6023=&nctemp6024;
nctempchar1* nctemp6021= nctemp6023;
int nctemp6025=CodeEs(nctemp6019,nctemp6021);
struct tree* nctemp6027= p;
struct nctempchar1 *nctemp6031;
static struct nctempchar1 nctemp6032 = {{ 9}, (char*)"RunFree(\0"};
nctemp6031=&nctemp6032;
nctempchar1* nctemp6029= nctemp6031;
int nctemp6033=CodeEs(nctemp6027,nctemp6029);
struct tree* nctemp6035= p;
nctempchar1* nctemp6037= tmp;
int nctemp6040=CodeEs(nctemp6035,nctemp6037);
struct tree* nctemp6042= p;
struct nctempchar1 *nctemp6046;
static struct nctempchar1 nctemp6047 = {{ 5}, (char*)");\n\0"};
nctemp6046=&nctemp6047;
nctempchar1* nctemp6044= nctemp6046;
int nctemp6048=CodeEs(nctemp6042,nctemp6044);
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
nctempchar1* nctemp6056=CodeMktemp();
tempr=nctemp6056;
struct tree* nctemp6061= p;
struct tree* nctemp6063=PtreeMvchild(nctemp6061);
np =nctemp6063;
struct tree* nctemp6069= np;
nctempchar1* nctemp6071=CodeExpr(nctemp6069);
temp=nctemp6071;
struct tree* nctemp6076= np;
struct tree* nctemp6078=PtreeMvsister(nctemp6076);
sp =nctemp6078;
struct tree* nctemp6084= sp;
nctempchar1* nctemp6086=CodeExpr(nctemp6084);
index=nctemp6086;
struct tree* nctemp6088= p;
struct tree* nctemp6092= p;
nctempchar1* nctemp6094=PtreeGetype(nctemp6092);
nctempchar1* nctemp6090= nctemp6094;
int nctemp6095=CodeEs(nctemp6088,nctemp6090);
struct tree* nctemp6097= p;
struct nctempchar1 *nctemp6101;
static struct nctempchar1 nctemp6102 = {{ 2}, (char*)" \0"};
nctemp6101=&nctemp6102;
nctempchar1* nctemp6099= nctemp6101;
int nctemp6103=CodeEs(nctemp6097,nctemp6099);
struct tree* nctemp6105= p;
nctempchar1* nctemp6107= tempr;
int nctemp6110=CodeEs(nctemp6105,nctemp6107);
struct tree* nctemp6112= p;
struct nctempchar1 *nctemp6116;
static struct nctempchar1 nctemp6117 = {{ 2}, (char*)"=\0"};
nctemp6116=&nctemp6117;
nctempchar1* nctemp6114= nctemp6116;
int nctemp6118=CodeEs(nctemp6112,nctemp6114);
struct tree* nctemp6120= p;
nctempchar1* nctemp6122= temp;
int nctemp6125=CodeEs(nctemp6120,nctemp6122);
struct tree* nctemp6127= p;
struct nctempchar1 *nctemp6131;
static struct nctempchar1 nctemp6132 = {{ 4}, (char*)"->d\0"};
nctemp6131=&nctemp6132;
nctempchar1* nctemp6129= nctemp6131;
int nctemp6133=CodeEs(nctemp6127,nctemp6129);
struct tree* nctemp6135= p;
struct nctempchar1 *nctemp6139;
static struct nctempchar1 nctemp6140 = {{ 2}, (char*)"[\0"};
nctemp6139=&nctemp6140;
nctempchar1* nctemp6137= nctemp6139;
int nctemp6141=CodeEs(nctemp6135,nctemp6137);
struct tree* nctemp6143= p;
nctempchar1* nctemp6145= index;
int nctemp6148=CodeEs(nctemp6143,nctemp6145);
struct tree* nctemp6150= p;
struct nctempchar1 *nctemp6154;
static struct nctempchar1 nctemp6155 = {{ 3}, (char*)"];\0"};
nctemp6154=&nctemp6155;
nctempchar1* nctemp6152= nctemp6154;
int nctemp6156=CodeEs(nctemp6150,nctemp6152);
return tempr;
}
nctempchar1 * CodeCmplx (struct tree* p)
{
struct tree* np;
struct tree* sp;
nctempchar1 *q;
nctempchar1 *r;
nctempchar1 *tempr;
nctempchar1* nctemp6164=CodeMktemp();
tempr=nctemp6164;
struct tree* nctemp6169= p;
struct tree* nctemp6171=PtreeMvchild(nctemp6169);
np =nctemp6171;
struct tree* nctemp6176= np;
struct tree* nctemp6178=PtreeMvchild(nctemp6176);
np =nctemp6178;
struct tree* nctemp6184= np;
nctempchar1* nctemp6186=CodeExpr(nctemp6184);
q=nctemp6186;
struct tree* nctemp6191= np;
struct tree* nctemp6193=PtreeMvsister(nctemp6191);
sp =nctemp6193;
struct tree* nctemp6199= sp;
nctempchar1* nctemp6201=CodeExpr(nctemp6199);
r=nctemp6201;
struct tree* nctemp6203= p;
struct tree* nctemp6207= p;
nctempchar1* nctemp6209=PtreeGetype(nctemp6207);
nctempchar1* nctemp6205= nctemp6209;
int nctemp6210=CodeEs(nctemp6203,nctemp6205);
struct tree* nctemp6212= p;
struct nctempchar1 *nctemp6216;
static struct nctempchar1 nctemp6217 = {{ 2}, (char*)" \0"};
nctemp6216=&nctemp6217;
nctempchar1* nctemp6214= nctemp6216;
int nctemp6218=CodeEs(nctemp6212,nctemp6214);
struct tree* nctemp6220= p;
nctempchar1* nctemp6222= tempr;
int nctemp6225=CodeEs(nctemp6220,nctemp6222);
struct tree* nctemp6227= p;
struct nctempchar1 *nctemp6231;
static struct nctempchar1 nctemp6232 = {{ 3}, (char*)".r\0"};
nctemp6231=&nctemp6232;
nctempchar1* nctemp6229= nctemp6231;
int nctemp6233=CodeEs(nctemp6227,nctemp6229);
struct tree* nctemp6235= p;
struct nctempchar1 *nctemp6239;
static struct nctempchar1 nctemp6240 = {{ 3}, (char*)" =\0"};
nctemp6239=&nctemp6240;
nctempchar1* nctemp6237= nctemp6239;
int nctemp6241=CodeEs(nctemp6235,nctemp6237);
struct tree* nctemp6243= p;
nctempchar1* nctemp6245= q;
int nctemp6248=CodeEs(nctemp6243,nctemp6245);
struct tree* nctemp6250= p;
struct nctempchar1 *nctemp6254;
static struct nctempchar1 nctemp6255 = {{ 2}, (char*)";\0"};
nctemp6254=&nctemp6255;
nctempchar1* nctemp6252= nctemp6254;
int nctemp6256=CodeEs(nctemp6250,nctemp6252);
struct tree* nctemp6258= p;
struct tree* nctemp6262= p;
nctempchar1* nctemp6264=PtreeGetype(nctemp6262);
nctempchar1* nctemp6260= nctemp6264;
int nctemp6265=CodeEs(nctemp6258,nctemp6260);
struct tree* nctemp6267= p;
struct nctempchar1 *nctemp6271;
static struct nctempchar1 nctemp6272 = {{ 2}, (char*)" \0"};
nctemp6271=&nctemp6272;
nctempchar1* nctemp6269= nctemp6271;
int nctemp6273=CodeEs(nctemp6267,nctemp6269);
struct tree* nctemp6275= p;
nctempchar1* nctemp6277= tempr;
int nctemp6280=CodeEs(nctemp6275,nctemp6277);
struct tree* nctemp6282= p;
struct nctempchar1 *nctemp6286;
static struct nctempchar1 nctemp6287 = {{ 3}, (char*)".i\0"};
nctemp6286=&nctemp6287;
nctempchar1* nctemp6284= nctemp6286;
int nctemp6288=CodeEs(nctemp6282,nctemp6284);
struct tree* nctemp6290= p;
struct nctempchar1 *nctemp6294;
static struct nctempchar1 nctemp6295 = {{ 2}, (char*)"=\0"};
nctemp6294=&nctemp6295;
nctempchar1* nctemp6292= nctemp6294;
int nctemp6296=CodeEs(nctemp6290,nctemp6292);
struct tree* nctemp6298= p;
nctempchar1* nctemp6300= r;
int nctemp6303=CodeEs(nctemp6298,nctemp6300);
struct tree* nctemp6305= p;
struct nctempchar1 *nctemp6309;
static struct nctempchar1 nctemp6310 = {{ 2}, (char*)";\0"};
nctemp6309=&nctemp6310;
nctempchar1* nctemp6307= nctemp6309;
int nctemp6311=CodeEs(nctemp6305,nctemp6307);
return tempr;
}
nctempchar1 * CodeIm (struct tree* p)
{
struct tree* np;
nctempchar1 *q;
nctempchar1 *tempr;
nctempchar1* nctemp6319=CodeMktemp();
tempr=nctemp6319;
struct tree* nctemp6324= p;
struct tree* nctemp6326=PtreeMvchild(nctemp6324);
np =nctemp6326;
struct tree* nctemp6332= np;
nctempchar1* nctemp6334=CodeExpr(nctemp6332);
q=nctemp6334;
struct tree* nctemp6336= p;
struct tree* nctemp6340= p;
nctempchar1* nctemp6342=PtreeGetype(nctemp6340);
nctempchar1* nctemp6338= nctemp6342;
int nctemp6343=CodeEs(nctemp6336,nctemp6338);
struct tree* nctemp6345= p;
struct nctempchar1 *nctemp6349;
static struct nctempchar1 nctemp6350 = {{ 2}, (char*)" \0"};
nctemp6349=&nctemp6350;
nctempchar1* nctemp6347= nctemp6349;
int nctemp6351=CodeEs(nctemp6345,nctemp6347);
struct tree* nctemp6353= p;
nctempchar1* nctemp6355= tempr;
int nctemp6358=CodeEs(nctemp6353,nctemp6355);
struct tree* nctemp6360= p;
struct nctempchar1 *nctemp6364;
static struct nctempchar1 nctemp6365 = {{ 3}, (char*)" =\0"};
nctemp6364=&nctemp6365;
nctempchar1* nctemp6362= nctemp6364;
int nctemp6366=CodeEs(nctemp6360,nctemp6362);
struct tree* nctemp6368= p;
nctempchar1* nctemp6370= q;
int nctemp6373=CodeEs(nctemp6368,nctemp6370);
struct tree* nctemp6375= p;
struct nctempchar1 *nctemp6379;
static struct nctempchar1 nctemp6380 = {{ 5}, (char*)".i  \0"};
nctemp6379=&nctemp6380;
nctempchar1* nctemp6377= nctemp6379;
int nctemp6381=CodeEs(nctemp6375,nctemp6377);
struct tree* nctemp6383= p;
struct nctempchar1 *nctemp6387;
static struct nctempchar1 nctemp6388 = {{ 4}, (char*)";\n\0"};
nctemp6387=&nctemp6388;
nctempchar1* nctemp6385= nctemp6387;
int nctemp6389=CodeEs(nctemp6383,nctemp6385);
return tempr;
}
nctempchar1 * CodeRe (struct tree* p)
{
struct tree* np;
nctempchar1 *q;
nctempchar1 *tmp;
struct tree* nctemp6396= p;
struct tree* nctemp6398=PtreeMvchild(nctemp6396);
np =nctemp6398;
struct tree* nctemp6404= np;
nctempchar1* nctemp6406=CodeExpr(nctemp6404);
q=nctemp6406;
nctempchar1* nctemp6412=CodeMktemp();
tmp=nctemp6412;
struct tree* nctemp6414= p;
struct tree* nctemp6418= p;
nctempchar1* nctemp6420=PtreeGetype(nctemp6418);
nctempchar1* nctemp6416= nctemp6420;
int nctemp6421=CodeEs(nctemp6414,nctemp6416);
struct tree* nctemp6423= p;
struct nctempchar1 *nctemp6427;
static struct nctempchar1 nctemp6428 = {{ 2}, (char*)" \0"};
nctemp6427=&nctemp6428;
nctempchar1* nctemp6425= nctemp6427;
int nctemp6429=CodeEs(nctemp6423,nctemp6425);
struct tree* nctemp6431= p;
nctempchar1* nctemp6433= tmp;
int nctemp6436=CodeEs(nctemp6431,nctemp6433);
struct tree* nctemp6438= p;
struct nctempchar1 *nctemp6442;
static struct nctempchar1 nctemp6443 = {{ 3}, (char*)" =\0"};
nctemp6442=&nctemp6443;
nctempchar1* nctemp6440= nctemp6442;
int nctemp6444=CodeEs(nctemp6438,nctemp6440);
struct tree* nctemp6446= p;
nctempchar1* nctemp6448= q;
int nctemp6451=CodeEs(nctemp6446,nctemp6448);
struct tree* nctemp6453= p;
struct nctempchar1 *nctemp6457;
static struct nctempchar1 nctemp6458 = {{ 5}, (char*)".r  \0"};
nctemp6457=&nctemp6458;
nctempchar1* nctemp6455= nctemp6457;
int nctemp6459=CodeEs(nctemp6453,nctemp6455);
struct tree* nctemp6461= p;
struct nctempchar1 *nctemp6465;
static struct nctempchar1 nctemp6466 = {{ 4}, (char*)";\n\0"};
nctemp6465=&nctemp6466;
nctempchar1* nctemp6463= nctemp6465;
int nctemp6467=CodeEs(nctemp6461,nctemp6463);
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
struct tree* nctemp6480= p;
nctempchar1* nctemp6482=PtreeGetdef(nctemp6480);
nctempchar1* nctemp6478= nctemp6482;
struct symbol* nctemp6485=SymGetetp();
struct symbol* nctemp6483= nctemp6485;
struct symbol* nctemp6486=SymLookup(nctemp6478,nctemp6483);
tp =nctemp6486;
struct tree* nctemp6491= p;
struct tree* nctemp6493=PtreeMvchild(nctemp6491);
sp =nctemp6493;
int nctemp6494 = (sp !=0);
if(nctemp6494)
{
struct tree* nctemp6503= sp;
nctempchar1* nctemp6505=PtreeGetname(nctemp6503);
nctempchar1* nctemp6501= nctemp6505;
struct nctempchar1 *nctemp6508;
static struct nctempchar1 nctemp6509 = {{ 9}, (char*)"exprlist\0"};
nctemp6508=&nctemp6509;
nctempchar1* nctemp6506= nctemp6508;
int nctemp6510=LibeStrcmp(nctemp6501,nctemp6506);
int nctemp6498 = (nctemp6510 ==1);
if(nctemp6498)
{
struct tree* nctemp6516= sp;
struct tree* nctemp6518=PtreeMvchild(nctemp6516);
sp =nctemp6518;
}
}
int nctemp6519 = (sp !=0);
int nctemp6523=nctemp6519;
while(nctemp6523)
{{
nctempchar1* nctemp6529=CodeMktemp();
ntemp=nctemp6529;
struct tree* nctemp6531= sp;
nctempchar1* nctemp6533= ntemp;
int nctemp6536=PtreeSetempr(nctemp6531,nctemp6533);
struct tree* nctemp6542= sp;
nctempchar1* nctemp6544=CodeExpr(nctemp6542);
temp=nctemp6544;
struct tree* nctemp6550= sp;
nctempchar1* nctemp6552=PtreeGetref(nctemp6550);
nctempchar1* nctemp6548= nctemp6552;
struct nctempchar1 *nctemp6555;
static struct nctempchar1 nctemp6556 = {{ 5}, (char*)"aref\0"};
nctemp6555=&nctemp6556;
nctempchar1* nctemp6553= nctemp6555;
int nctemp6557=LibeStrcmp(nctemp6548,nctemp6553);
int nctemp6545 = (nctemp6557 ==1);
if(nctemp6545)
{
struct tree* nctemp6560= sp;
struct nctempchar1 *nctemp6564;
static struct nctempchar1 nctemp6565 = {{ 7}, (char*)"nctemp\0"};
nctemp6564=&nctemp6565;
nctempchar1* nctemp6562= nctemp6564;
int nctemp6566=CodeEs(nctemp6560,nctemp6562);
struct tree* nctemp6568= sp;
struct tree* nctemp6572= sp;
nctempchar1* nctemp6574=PtreeGetype(nctemp6572);
nctempchar1* nctemp6570= nctemp6574;
int nctemp6575=CodeEs(nctemp6568,nctemp6570);
struct tree* nctemp6579= sp;
int nctemp6581=PtreeGetrank(nctemp6579);
int nctemp6577= nctemp6581;
int nctemp6582=CodeEd(nctemp6577);
struct tree* nctemp6584= sp;
struct nctempchar1 *nctemp6588;
static struct nctempchar1 nctemp6589 = {{ 2}, (char*)"*\0"};
nctemp6588=&nctemp6589;
nctempchar1* nctemp6586= nctemp6588;
int nctemp6590=CodeEs(nctemp6584,nctemp6586);
}
else{
struct tree* nctemp6596= sp;
nctempchar1* nctemp6598=PtreeGetref(nctemp6596);
nctempchar1* nctemp6594= nctemp6598;
struct nctempchar1 *nctemp6601;
static struct nctempchar1 nctemp6602 = {{ 5}, (char*)"sref\0"};
nctemp6601=&nctemp6602;
nctempchar1* nctemp6599= nctemp6601;
int nctemp6603=LibeStrcmp(nctemp6594,nctemp6599);
int nctemp6591 = (nctemp6603 ==1);
if(nctemp6591)
{
struct tree* nctemp6606= sp;
struct nctempchar1 *nctemp6610;
static struct nctempchar1 nctemp6611 = {{ 8}, (char*)"struct \0"};
nctemp6610=&nctemp6611;
nctempchar1* nctemp6608= nctemp6610;
int nctemp6612=CodeEs(nctemp6606,nctemp6608);
struct tree* nctemp6614= sp;
struct tree* nctemp6618= sp;
nctempchar1* nctemp6620=PtreeGetype(nctemp6618);
nctempchar1* nctemp6616= nctemp6620;
int nctemp6621=CodeEs(nctemp6614,nctemp6616);
struct tree* nctemp6623= sp;
struct nctempchar1 *nctemp6627;
static struct nctempchar1 nctemp6628 = {{ 2}, (char*)"*\0"};
nctemp6627=&nctemp6628;
nctempchar1* nctemp6625= nctemp6627;
int nctemp6629=CodeEs(nctemp6623,nctemp6625);
}
else{
struct tree* nctemp6631= sp;
struct tree* nctemp6635= sp;
nctempchar1* nctemp6637=PtreeGetype(nctemp6635);
nctempchar1* nctemp6633= nctemp6637;
int nctemp6638=CodeEs(nctemp6631,nctemp6633);
}
}
struct tree* nctemp6640= sp;
struct nctempchar1 *nctemp6644;
static struct nctempchar1 nctemp6645 = {{ 2}, (char*)" \0"};
nctemp6644=&nctemp6645;
nctempchar1* nctemp6642= nctemp6644;
int nctemp6646=CodeEs(nctemp6640,nctemp6642);
struct tree* nctemp6648= sp;
nctempchar1* nctemp6650= ntemp;
int nctemp6653=CodeEs(nctemp6648,nctemp6650);
struct tree* nctemp6655= sp;
struct nctempchar1 *nctemp6659;
static struct nctempchar1 nctemp6660 = {{ 3}, (char*)"= \0"};
nctemp6659=&nctemp6660;
nctempchar1* nctemp6657= nctemp6659;
int nctemp6661=CodeEs(nctemp6655,nctemp6657);
struct tree* nctemp6663= sp;
nctempchar1* nctemp6665= temp;
int nctemp6668=CodeEs(nctemp6663,nctemp6665);
struct tree* nctemp6670= sp;
struct nctempchar1 *nctemp6674;
static struct nctempchar1 nctemp6675 = {{ 4}, (char*)";\n\0"};
nctemp6674=&nctemp6675;
nctempchar1* nctemp6672= nctemp6674;
int nctemp6676=CodeEs(nctemp6670,nctemp6672);
struct tree* nctemp6681= sp;
struct tree* nctemp6683=PtreeMvsister(nctemp6681);
sp =nctemp6683;
}
int nctemp6684 = (sp !=0);
nctemp6523=nctemp6684;}nctempchar1* nctemp6693=CodeMktemp();
ntemp=nctemp6693;
struct tree* nctemp6699= p;
nctempchar1* nctemp6701=PtreeGetref(nctemp6699);
nctempchar1* nctemp6697= nctemp6701;
struct nctempchar1 *nctemp6704;
static struct nctempchar1 nctemp6705 = {{ 5}, (char*)"aref\0"};
nctemp6704=&nctemp6705;
nctempchar1* nctemp6702= nctemp6704;
int nctemp6706=LibeStrcmp(nctemp6697,nctemp6702);
int nctemp6694 = (nctemp6706 ==1);
if(nctemp6694)
{
struct tree* nctemp6709= p;
struct nctempchar1 *nctemp6713;
static struct nctempchar1 nctemp6714 = {{ 7}, (char*)"nctemp\0"};
nctemp6713=&nctemp6714;
nctempchar1* nctemp6711= nctemp6713;
int nctemp6715=CodeEs(nctemp6709,nctemp6711);
struct tree* nctemp6717= p;
struct tree* nctemp6721= p;
nctempchar1* nctemp6723=PtreeGetype(nctemp6721);
nctempchar1* nctemp6719= nctemp6723;
int nctemp6724=CodeEs(nctemp6717,nctemp6719);
struct tree* nctemp6728= p;
int nctemp6730=PtreeGetrank(nctemp6728);
int nctemp6726= nctemp6730;
int nctemp6731=CodeEd(nctemp6726);
struct tree* nctemp6733= p;
struct nctempchar1 *nctemp6737;
static struct nctempchar1 nctemp6738 = {{ 2}, (char*)"*\0"};
nctemp6737=&nctemp6738;
nctempchar1* nctemp6735= nctemp6737;
int nctemp6739=CodeEs(nctemp6733,nctemp6735);
}
else{
struct tree* nctemp6745= p;
nctempchar1* nctemp6747=PtreeGetref(nctemp6745);
nctempchar1* nctemp6743= nctemp6747;
struct nctempchar1 *nctemp6750;
static struct nctempchar1 nctemp6751 = {{ 5}, (char*)"sref\0"};
nctemp6750=&nctemp6751;
nctempchar1* nctemp6748= nctemp6750;
int nctemp6752=LibeStrcmp(nctemp6743,nctemp6748);
int nctemp6740 = (nctemp6752 ==1);
if(nctemp6740)
{
struct tree* nctemp6755= p;
struct nctempchar1 *nctemp6759;
static struct nctempchar1 nctemp6760 = {{ 8}, (char*)"struct \0"};
nctemp6759=&nctemp6760;
nctempchar1* nctemp6757= nctemp6759;
int nctemp6761=CodeEs(nctemp6755,nctemp6757);
struct tree* nctemp6763= p;
struct tree* nctemp6767= p;
nctempchar1* nctemp6769=PtreeGetype(nctemp6767);
nctempchar1* nctemp6765= nctemp6769;
int nctemp6770=CodeEs(nctemp6763,nctemp6765);
struct tree* nctemp6772= p;
struct nctempchar1 *nctemp6776;
static struct nctempchar1 nctemp6777 = {{ 2}, (char*)"*\0"};
nctemp6776=&nctemp6777;
nctempchar1* nctemp6774= nctemp6776;
int nctemp6778=CodeEs(nctemp6772,nctemp6774);
}
else{
struct tree* nctemp6780= p;
struct tree* nctemp6784= p;
nctempchar1* nctemp6786=PtreeGetype(nctemp6784);
nctempchar1* nctemp6782= nctemp6786;
int nctemp6787=CodeEs(nctemp6780,nctemp6782);
}
}
struct tree* nctemp6789= p;
struct nctempchar1 *nctemp6793;
static struct nctempchar1 nctemp6794 = {{ 2}, (char*)" \0"};
nctemp6793=&nctemp6794;
nctempchar1* nctemp6791= nctemp6793;
int nctemp6795=CodeEs(nctemp6789,nctemp6791);
struct tree* nctemp6797= p;
nctempchar1* nctemp6799= ntemp;
int nctemp6802=CodeEs(nctemp6797,nctemp6799);
struct tree* nctemp6804= p;
struct nctempchar1 *nctemp6808;
static struct nctempchar1 nctemp6809 = {{ 2}, (char*)"=\0"};
nctemp6808=&nctemp6809;
nctempchar1* nctemp6806= nctemp6808;
int nctemp6810=CodeEs(nctemp6804,nctemp6806);
struct tree* nctemp6812= p;
struct symbol* nctemp6816= tp;
nctempchar1* nctemp6818=SymGetname(nctemp6816);
nctempchar1* nctemp6814= nctemp6818;
int nctemp6819=CodeEs(nctemp6812,nctemp6814);
struct tree* nctemp6821= p;
struct nctempchar1 *nctemp6825;
static struct nctempchar1 nctemp6826 = {{ 2}, (char*)"(\0"};
nctemp6825=&nctemp6826;
nctempchar1* nctemp6823= nctemp6825;
int nctemp6827=CodeEs(nctemp6821,nctemp6823);
struct tree* nctemp6832= p;
struct tree* nctemp6834=PtreeMvchild(nctemp6832);
sp =nctemp6834;
int nctemp6835 = (sp !=0);
if(nctemp6835)
{
struct tree* nctemp6843= sp;
struct tree* nctemp6845=PtreeMvchild(nctemp6843);
sp =nctemp6845;
}
int nctemp6846 = (sp !=0);
int nctemp6850=nctemp6846;
while(nctemp6850)
{{
struct tree* nctemp6852= p;
struct tree* nctemp6856= sp;
nctempchar1* nctemp6858=PtreeGetempr(nctemp6856);
nctempchar1* nctemp6854= nctemp6858;
int nctemp6859=CodeEs(nctemp6852,nctemp6854);
struct tree* nctemp6867= sp;
struct tree* nctemp6869=PtreeMvsister(nctemp6867);
sp =nctemp6869;
int nctemp6860 = (sp !=0);
if(nctemp6860)
{
struct tree* nctemp6872= p;
struct nctempchar1 *nctemp6876;
static struct nctempchar1 nctemp6877 = {{ 2}, (char*)",\0"};
nctemp6876=&nctemp6877;
nctempchar1* nctemp6874= nctemp6876;
int nctemp6878=CodeEs(nctemp6872,nctemp6874);
}
int nctemp6887 = noargs + 1;
noargs =nctemp6887;
}
int nctemp6888 = (sp !=0);
nctemp6850=nctemp6888;}struct tree* nctemp6893= p;
struct nctempchar1 *nctemp6897;
static struct nctempchar1 nctemp6898 = {{ 5}, (char*)");\n\0"};
nctemp6897=&nctemp6898;
nctempchar1* nctemp6895= nctemp6897;
int nctemp6899=CodeEs(nctemp6893,nctemp6895);
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
nctempchar1* nctemp6907=CodeMktemp();
pointer=nctemp6907;
nctempchar1* nctemp6913=CodeMktemp();
descr=nctemp6913;
struct tree* nctemp6919= p;
nctempchar1* nctemp6921=PtreeGetype(nctemp6919);
type=nctemp6921;
struct tree* nctemp6927= p;
nctempchar1* nctemp6929=PtreeGetname(nctemp6927);
nctempchar1* nctemp6925= nctemp6929;
struct nctempchar1 *nctemp6932;
static struct nctempchar1 nctemp6933 = {{ 5}, (char*)"cast\0"};
nctemp6932=&nctemp6933;
nctempchar1* nctemp6930= nctemp6932;
int nctemp6934=LibeStrcmp(nctemp6925,nctemp6930);
int nctemp6922 = (nctemp6934 ==1);
if(nctemp6922)
{
struct tree* nctemp6940= p;
struct tree* nctemp6942=PtreeMvchild(nctemp6940);
np =nctemp6942;
struct tree* nctemp6947= np;
struct tree* nctemp6949=PtreeMvsister(nctemp6947);
sp =nctemp6949;
struct tree* nctemp6955= sp;
nctempchar1* nctemp6957=CodeExpr(nctemp6955);
expr=nctemp6957;
struct tree* nctemp6963= np;
nctempchar1* nctemp6965=PtreeGetref(nctemp6963);
nctempchar1* nctemp6961= nctemp6965;
struct nctempchar1 *nctemp6968;
static struct nctempchar1 nctemp6969 = {{ 5}, (char*)"sref\0"};
nctemp6968=&nctemp6969;
nctempchar1* nctemp6966= nctemp6968;
int nctemp6970=LibeStrcmp(nctemp6961,nctemp6966);
int nctemp6958 = (nctemp6970 ==1);
if(nctemp6958)
{
nctempchar1* nctemp6977=CodeMktemp();
tmp=nctemp6977;
struct tree* nctemp6979= p;
nctempchar1* nctemp6981= type;
int nctemp6984=CodeEs(nctemp6979,nctemp6981);
struct tree* nctemp6986= p;
struct nctempchar1 *nctemp6990;
static struct nctempchar1 nctemp6991 = {{ 2}, (char*)" \0"};
nctemp6990=&nctemp6991;
nctempchar1* nctemp6988= nctemp6990;
int nctemp6992=CodeEs(nctemp6986,nctemp6988);
struct tree* nctemp6994= p;
nctempchar1* nctemp6996= tmp;
int nctemp6999=CodeEs(nctemp6994,nctemp6996);
struct tree* nctemp7001= p;
struct nctempchar1 *nctemp7005;
static struct nctempchar1 nctemp7006 = {{ 2}, (char*)"=\0"};
nctemp7005=&nctemp7006;
nctempchar1* nctemp7003= nctemp7005;
int nctemp7007=CodeEs(nctemp7001,nctemp7003);
struct tree* nctemp7009= p;
struct nctempchar1 *nctemp7013;
static struct nctempchar1 nctemp7014 = {{ 9}, (char*)"(struct \0"};
nctemp7013=&nctemp7014;
nctempchar1* nctemp7011= nctemp7013;
int nctemp7015=CodeEs(nctemp7009,nctemp7011);
struct tree* nctemp7017= p;
struct tree* nctemp7021= np;
nctempchar1* nctemp7023=PtreeGetype(nctemp7021);
nctempchar1* nctemp7019= nctemp7023;
int nctemp7024=CodeEs(nctemp7017,nctemp7019);
struct tree* nctemp7026= p;
struct nctempchar1 *nctemp7030;
static struct nctempchar1 nctemp7031 = {{ 4}, (char*)"*)(\0"};
nctemp7030=&nctemp7031;
nctempchar1* nctemp7028= nctemp7030;
int nctemp7032=CodeEs(nctemp7026,nctemp7028);
struct tree* nctemp7034= p;
nctempchar1* nctemp7036= expr;
int nctemp7039=CodeEs(nctemp7034,nctemp7036);
struct tree* nctemp7041= p;
struct nctempchar1 *nctemp7045;
static struct nctempchar1 nctemp7046 = {{ 5}, (char*)");\n\0"};
nctemp7045=&nctemp7046;
nctempchar1* nctemp7043= nctemp7045;
int nctemp7047=CodeEs(nctemp7041,nctemp7043);
}
else{
struct tree* nctemp7053= np;
nctempchar1* nctemp7055=PtreeGetref(nctemp7053);
nctempchar1* nctemp7051= nctemp7055;
struct nctempchar1 *nctemp7058;
static struct nctempchar1 nctemp7059 = {{ 5}, (char*)"aref\0"};
nctemp7058=&nctemp7059;
nctempchar1* nctemp7056= nctemp7058;
int nctemp7060=LibeStrcmp(nctemp7051,nctemp7056);
int nctemp7048 = (nctemp7060 ==1);
if(nctemp7048)
{
struct tree* nctemp7066= np;
struct tree* nctemp7068=PtreeMvchild(nctemp7066);
np =nctemp7068;
struct tree* nctemp7073= np;
struct tree* nctemp7075=PtreeMvchild(nctemp7073);
np =nctemp7075;
struct tree* nctemp7080= np;
struct tree* nctemp7082=PtreeMvchild(nctemp7080);
np =nctemp7082;
struct tree* nctemp7087= np;
struct tree* nctemp7089=PtreeMvchild(nctemp7087);
np =nctemp7089;
tp =np;
rank =1;
struct tree* nctemp7105= np;
struct tree* nctemp7107=PtreeMvsister(nctemp7105);
np =nctemp7107;
int nctemp7098 = (np !=0);
int nctemp7109=nctemp7098;
while(nctemp7109)
{{
int nctemp7118 = rank + 1;
rank =nctemp7118;
}
struct tree* nctemp7126= np;
struct tree* nctemp7128=PtreeMvsister(nctemp7126);
np =nctemp7128;
int nctemp7119 = (np !=0);
nctemp7109=nctemp7119;}int nctemp7130 = (rank > 4);
if(nctemp7130)
{
struct nctempchar1 *nctemp7137;
static struct nctempchar1 nctemp7138 = {{ 29}, (char*)"Array dimension is too large\0"};
nctemp7137=&nctemp7138;
nctempchar1* nctemp7135= nctemp7137;
int nctemp7139=CodeError(nctemp7135);
}
p =tp;
struct tree* nctemp7145= p;
struct nctempchar1 *nctemp7149;
static struct nctempchar1 nctemp7150 = {{ 7}, (char*)"nctemp\0"};
nctemp7149=&nctemp7150;
nctempchar1* nctemp7147= nctemp7149;
int nctemp7151=CodeEs(nctemp7145,nctemp7147);
struct tree* nctemp7153= p;
nctempchar1* nctemp7155= type;
int nctemp7158=CodeEs(nctemp7153,nctemp7155);
int nctemp7160= rank;
int nctemp7162=CodeEd(nctemp7160);
struct tree* nctemp7164= p;
struct nctempchar1 *nctemp7168;
static struct nctempchar1 nctemp7169 = {{ 2}, (char*)" \0"};
nctemp7168=&nctemp7169;
nctempchar1* nctemp7166= nctemp7168;
int nctemp7170=CodeEs(nctemp7164,nctemp7166);
struct tree* nctemp7172= sp;
nctempchar1* nctemp7174= descr;
int nctemp7177=CodeEs(nctemp7172,nctemp7174);
struct tree* nctemp7179= sp;
struct nctempchar1 *nctemp7183;
static struct nctempchar1 nctemp7184 = {{ 4}, (char*)";\n\0"};
nctemp7183=&nctemp7184;
nctempchar1* nctemp7181= nctemp7183;
int nctemp7185=CodeEs(nctemp7179,nctemp7181);
struct tree* nctemp7187= p;
struct nctempchar1 *nctemp7191;
static struct nctempchar1 nctemp7192 = {{ 7}, (char*)"nctemp\0"};
nctemp7191=&nctemp7192;
nctempchar1* nctemp7189= nctemp7191;
int nctemp7193=CodeEs(nctemp7187,nctemp7189);
struct tree* nctemp7195= p;
nctempchar1* nctemp7197= type;
int nctemp7200=CodeEs(nctemp7195,nctemp7197);
int nctemp7202= rank;
int nctemp7204=CodeEd(nctemp7202);
struct tree* nctemp7206= p;
struct nctempchar1 *nctemp7210;
static struct nctempchar1 nctemp7211 = {{ 3}, (char*)" *\0"};
nctemp7210=&nctemp7211;
nctempchar1* nctemp7208= nctemp7210;
int nctemp7212=CodeEs(nctemp7206,nctemp7208);
struct tree* nctemp7214= sp;
nctempchar1* nctemp7216= pointer;
int nctemp7219=CodeEs(nctemp7214,nctemp7216);
struct tree* nctemp7221= p;
struct nctempchar1 *nctemp7225;
static struct nctempchar1 nctemp7226 = {{ 4}, (char*)";\n\0"};
nctemp7225=&nctemp7226;
nctempchar1* nctemp7223= nctemp7225;
int nctemp7227=CodeEs(nctemp7221,nctemp7223);
struct tree* nctemp7229= sp;
nctempchar1* nctemp7231= descr;
int nctemp7234=CodeEs(nctemp7229,nctemp7231);
struct tree* nctemp7236= sp;
struct nctempchar1 *nctemp7240;
static struct nctempchar1 nctemp7241 = {{ 2}, (char*)"=\0"};
nctemp7240=&nctemp7241;
nctempchar1* nctemp7238= nctemp7240;
int nctemp7242=CodeEs(nctemp7236,nctemp7238);
struct tree* nctemp7244= sp;
struct nctempchar1 *nctemp7248;
static struct nctempchar1 nctemp7249 = {{ 3}, (char*)"*(\0"};
nctemp7248=&nctemp7249;
nctempchar1* nctemp7246= nctemp7248;
int nctemp7250=CodeEs(nctemp7244,nctemp7246);
struct tree* nctemp7252= p;
struct nctempchar1 *nctemp7256;
static struct nctempchar1 nctemp7257 = {{ 7}, (char*)"nctemp\0"};
nctemp7256=&nctemp7257;
nctempchar1* nctemp7254= nctemp7256;
int nctemp7258=CodeEs(nctemp7252,nctemp7254);
struct tree* nctemp7260= sp;
nctempchar1* nctemp7262= type;
int nctemp7265=CodeEs(nctemp7260,nctemp7262);
int nctemp7267= rank;
int nctemp7269=CodeEd(nctemp7267);
struct tree* nctemp7271= sp;
struct nctempchar1 *nctemp7275;
static struct nctempchar1 nctemp7276 = {{ 4}, (char*)"*)(\0"};
nctemp7275=&nctemp7276;
nctempchar1* nctemp7273= nctemp7275;
int nctemp7277=CodeEs(nctemp7271,nctemp7273);
struct tree* nctemp7279= sp;
nctempchar1* nctemp7281= expr;
int nctemp7284=CodeEs(nctemp7279,nctemp7281);
struct tree* nctemp7286= sp;
struct nctempchar1 *nctemp7290;
static struct nctempchar1 nctemp7291 = {{ 5}, (char*)");\n\0"};
nctemp7290=&nctemp7291;
nctempchar1* nctemp7288= nctemp7290;
int nctemp7292=CodeEs(nctemp7286,nctemp7288);
p =tp;
i =0;
int nctemp7301 = (p !=0);
int nctemp7305=nctemp7301;
while(nctemp7305)
{{
struct tree* nctemp7311= p;
nctempchar1* nctemp7313=CodeExpr(nctemp7311);
dim=nctemp7313;
struct tree* nctemp7315= sp;
nctempchar1* nctemp7317= descr;
int nctemp7320=CodeEs(nctemp7315,nctemp7317);
struct tree* nctemp7322= sp;
struct nctempchar1 *nctemp7326;
static struct nctempchar1 nctemp7327 = {{ 3}, (char*)".d\0"};
nctemp7326=&nctemp7327;
nctempchar1* nctemp7324= nctemp7326;
int nctemp7328=CodeEs(nctemp7322,nctemp7324);
struct tree* nctemp7330= sp;
struct nctempchar1 *nctemp7334;
static struct nctempchar1 nctemp7335 = {{ 2}, (char*)"[\0"};
nctemp7334=&nctemp7335;
nctempchar1* nctemp7332= nctemp7334;
int nctemp7336=CodeEs(nctemp7330,nctemp7332);
int nctemp7338= i;
int nctemp7340=CodeEd(nctemp7338);
struct tree* nctemp7342= sp;
struct nctempchar1 *nctemp7346;
static struct nctempchar1 nctemp7347 = {{ 3}, (char*)"]=\0"};
nctemp7346=&nctemp7347;
nctempchar1* nctemp7344= nctemp7346;
int nctemp7348=CodeEs(nctemp7342,nctemp7344);
struct tree* nctemp7350= sp;
nctempchar1* nctemp7352= dim;
int nctemp7355=CodeEs(nctemp7350,nctemp7352);
struct tree* nctemp7357= sp;
struct nctempchar1 *nctemp7361;
static struct nctempchar1 nctemp7362 = {{ 4}, (char*)";\n\0"};
nctemp7361=&nctemp7362;
nctempchar1* nctemp7359= nctemp7361;
int nctemp7363=CodeEs(nctemp7357,nctemp7359);
int nctemp7372 = i + 1;
i =nctemp7372;
struct tree* nctemp7377= p;
struct tree* nctemp7379=PtreeMvsister(nctemp7377);
p =nctemp7379;
}
int nctemp7380 = (p !=0);
nctemp7305=nctemp7380;}struct tree* nctemp7385= sp;
nctempchar1* nctemp7387= pointer;
int nctemp7390=CodeEs(nctemp7385,nctemp7387);
struct tree* nctemp7392= sp;
struct nctempchar1 *nctemp7396;
static struct nctempchar1 nctemp7397 = {{ 3}, (char*)"=&\0"};
nctemp7396=&nctemp7397;
nctempchar1* nctemp7394= nctemp7396;
int nctemp7398=CodeEs(nctemp7392,nctemp7394);
struct tree* nctemp7400= sp;
nctempchar1* nctemp7402= descr;
int nctemp7405=CodeEs(nctemp7400,nctemp7402);
struct tree* nctemp7407= sp;
struct nctempchar1 *nctemp7411;
static struct nctempchar1 nctemp7412 = {{ 4}, (char*)";\n\0"};
nctemp7411=&nctemp7412;
nctempchar1* nctemp7409= nctemp7411;
int nctemp7413=CodeEs(nctemp7407,nctemp7409);
}
else{
struct tree* nctemp7415= p;
nctempchar1* nctemp7417= type;
int nctemp7420=CodeEs(nctemp7415,nctemp7417);
struct tree* nctemp7422= p;
struct nctempchar1 *nctemp7426;
static struct nctempchar1 nctemp7427 = {{ 2}, (char*)" \0"};
nctemp7426=&nctemp7427;
nctempchar1* nctemp7424= nctemp7426;
int nctemp7428=CodeEs(nctemp7422,nctemp7424);
struct tree* nctemp7430= p;
nctempchar1* nctemp7432= pointer;
int nctemp7435=CodeEs(nctemp7430,nctemp7432);
struct tree* nctemp7437= p;
struct nctempchar1 *nctemp7441;
static struct nctempchar1 nctemp7442 = {{ 2}, (char*)"=\0"};
nctemp7441=&nctemp7442;
nctempchar1* nctemp7439= nctemp7441;
int nctemp7443=CodeEs(nctemp7437,nctemp7439);
struct tree* nctemp7445= p;
struct nctempchar1 *nctemp7449;
static struct nctempchar1 nctemp7450 = {{ 2}, (char*)"(\0"};
nctemp7449=&nctemp7450;
nctempchar1* nctemp7447= nctemp7449;
int nctemp7451=CodeEs(nctemp7445,nctemp7447);
struct tree* nctemp7453= p;
struct tree* nctemp7457= np;
nctempchar1* nctemp7459=PtreeGetype(nctemp7457);
nctempchar1* nctemp7455= nctemp7459;
int nctemp7460=CodeEs(nctemp7453,nctemp7455);
struct tree* nctemp7462= p;
struct nctempchar1 *nctemp7466;
static struct nctempchar1 nctemp7467 = {{ 3}, (char*)")(\0"};
nctemp7466=&nctemp7467;
nctempchar1* nctemp7464= nctemp7466;
int nctemp7468=CodeEs(nctemp7462,nctemp7464);
struct tree* nctemp7470= p;
nctempchar1* nctemp7472= expr;
int nctemp7475=CodeEs(nctemp7470,nctemp7472);
struct tree* nctemp7477= p;
struct nctempchar1 *nctemp7481;
static struct nctempchar1 nctemp7482 = {{ 5}, (char*)");\n\0"};
nctemp7481=&nctemp7482;
nctempchar1* nctemp7479= nctemp7481;
int nctemp7483=CodeEs(nctemp7477,nctemp7479);
}
}
}
return pointer;
}
nctempchar1 * CodePrimexpr (struct tree* p)
{
struct tree* nctemp7491= p;
nctempchar1* nctemp7493=PtreeGetname(nctemp7491);
nctempchar1* nctemp7489= nctemp7493;
struct nctempchar1 *nctemp7496;
static struct nctempchar1 nctemp7497 = {{ 11}, (char*)"identifier\0"};
nctemp7496=&nctemp7497;
nctempchar1* nctemp7494= nctemp7496;
int nctemp7498=LibeStrcmp(nctemp7489,nctemp7494);
int nctemp7486 = (nctemp7498 ==1);
if(nctemp7486)
{
struct tree* nctemp7501= p;
nctempchar1* nctemp7503=CodeIdent(nctemp7501);
return nctemp7503;
}
else{
struct tree* nctemp7509= p;
nctempchar1* nctemp7511=PtreeGetname(nctemp7509);
nctempchar1* nctemp7507= nctemp7511;
struct nctempchar1 *nctemp7514;
static struct nctempchar1 nctemp7515 = {{ 4}, (char*)"new\0"};
nctemp7514=&nctemp7515;
nctempchar1* nctemp7512= nctemp7514;
int nctemp7516=LibeStrcmp(nctemp7507,nctemp7512);
int nctemp7504 = (nctemp7516 ==1);
if(nctemp7504)
{
struct tree* nctemp7519= p;
nctempchar1* nctemp7521=CodeNew(nctemp7519);
return nctemp7521;
}
else{
struct tree* nctemp7527= p;
nctempchar1* nctemp7529=PtreeGetname(nctemp7527);
nctempchar1* nctemp7525= nctemp7529;
struct nctempchar1 *nctemp7532;
static struct nctempchar1 nctemp7533 = {{ 7}, (char*)"delete\0"};
nctemp7532=&nctemp7533;
nctempchar1* nctemp7530= nctemp7532;
int nctemp7534=LibeStrcmp(nctemp7525,nctemp7530);
int nctemp7522 = (nctemp7534 ==1);
if(nctemp7522)
{
struct tree* nctemp7537= p;
nctempchar1* nctemp7539=CodeDelete(nctemp7537);
return nctemp7539;
}
else{
struct tree* nctemp7545= p;
nctempchar1* nctemp7547=PtreeGetname(nctemp7545);
nctempchar1* nctemp7543= nctemp7547;
struct nctempchar1 *nctemp7550;
static struct nctempchar1 nctemp7551 = {{ 4}, (char*)"len\0"};
nctemp7550=&nctemp7551;
nctempchar1* nctemp7548= nctemp7550;
int nctemp7552=LibeStrcmp(nctemp7543,nctemp7548);
int nctemp7540 = (nctemp7552 ==1);
if(nctemp7540)
{
struct tree* nctemp7555= p;
nctempchar1* nctemp7557=CodeLen(nctemp7555);
return nctemp7557;
}
else{
struct tree* nctemp7563= p;
nctempchar1* nctemp7565=PtreeGetname(nctemp7563);
nctempchar1* nctemp7561= nctemp7565;
struct nctempchar1 *nctemp7568;
static struct nctempchar1 nctemp7569 = {{ 6}, (char*)"cmplx\0"};
nctemp7568=&nctemp7569;
nctempchar1* nctemp7566= nctemp7568;
int nctemp7570=LibeStrcmp(nctemp7561,nctemp7566);
int nctemp7558 = (nctemp7570 ==1);
if(nctemp7558)
{
struct tree* nctemp7573= p;
nctempchar1* nctemp7575=CodeCmplx(nctemp7573);
return nctemp7575;
}
else{
struct tree* nctemp7581= p;
nctempchar1* nctemp7583=PtreeGetname(nctemp7581);
nctempchar1* nctemp7579= nctemp7583;
struct nctempchar1 *nctemp7586;
static struct nctempchar1 nctemp7587 = {{ 3}, (char*)"im\0"};
nctemp7586=&nctemp7587;
nctempchar1* nctemp7584= nctemp7586;
int nctemp7588=LibeStrcmp(nctemp7579,nctemp7584);
int nctemp7576 = (nctemp7588 ==1);
if(nctemp7576)
{
struct tree* nctemp7591= p;
nctempchar1* nctemp7593=CodeIm(nctemp7591);
return nctemp7593;
}
else{
struct tree* nctemp7599= p;
nctempchar1* nctemp7601=PtreeGetname(nctemp7599);
nctempchar1* nctemp7597= nctemp7601;
struct nctempchar1 *nctemp7604;
static struct nctempchar1 nctemp7605 = {{ 3}, (char*)"re\0"};
nctemp7604=&nctemp7605;
nctempchar1* nctemp7602= nctemp7604;
int nctemp7606=LibeStrcmp(nctemp7597,nctemp7602);
int nctemp7594 = (nctemp7606 ==1);
if(nctemp7594)
{
struct tree* nctemp7609= p;
nctempchar1* nctemp7611=CodeRe(nctemp7609);
return nctemp7611;
}
else{
struct tree* nctemp7617= p;
nctempchar1* nctemp7619=PtreeGetname(nctemp7617);
nctempchar1* nctemp7615= nctemp7619;
struct nctempchar1 *nctemp7622;
static struct nctempchar1 nctemp7623 = {{ 6}, (char*)"fcall\0"};
nctemp7622=&nctemp7623;
nctempchar1* nctemp7620= nctemp7622;
int nctemp7624=LibeStrcmp(nctemp7615,nctemp7620);
int nctemp7612 = (nctemp7624 ==1);
if(nctemp7612)
{
struct tree* nctemp7627= p;
nctempchar1* nctemp7629=CodeFcall(nctemp7627);
return nctemp7629;
}
else{
struct tree* nctemp7635= p;
nctempchar1* nctemp7637=PtreeGetname(nctemp7635);
nctempchar1* nctemp7633= nctemp7637;
struct nctempchar1 *nctemp7640;
static struct nctempchar1 nctemp7641 = {{ 5}, (char*)"cast\0"};
nctemp7640=&nctemp7641;
nctempchar1* nctemp7638= nctemp7640;
int nctemp7642=LibeStrcmp(nctemp7633,nctemp7638);
int nctemp7630 = (nctemp7642 ==1);
if(nctemp7630)
{
struct tree* nctemp7645= p;
nctempchar1* nctemp7647=CodeCast(nctemp7645);
return nctemp7647;
}
else{
struct tree* nctemp7653= p;
nctempchar1* nctemp7655=PtreeGetname(nctemp7653);
nctempchar1* nctemp7651= nctemp7655;
struct nctempchar1 *nctemp7658;
static struct nctempchar1 nctemp7659 = {{ 10}, (char*)"iconstant\0"};
nctemp7658=&nctemp7659;
nctempchar1* nctemp7656= nctemp7658;
int nctemp7660=LibeStrcmp(nctemp7651,nctemp7656);
int nctemp7648 = (nctemp7660 ==1);
if(nctemp7648)
{
struct tree* nctemp7663= p;
nctempchar1* nctemp7665=PtreeGetdef(nctemp7663);
return nctemp7665;
}
else{
struct tree* nctemp7671= p;
nctempchar1* nctemp7673=PtreeGetname(nctemp7671);
nctempchar1* nctemp7669= nctemp7673;
struct nctempchar1 *nctemp7676;
static struct nctempchar1 nctemp7677 = {{ 10}, (char*)"rconstant\0"};
nctemp7676=&nctemp7677;
nctempchar1* nctemp7674= nctemp7676;
int nctemp7678=LibeStrcmp(nctemp7669,nctemp7674);
int nctemp7666 = (nctemp7678 ==1);
if(nctemp7666)
{
struct tree* nctemp7681= p;
nctempchar1* nctemp7683=PtreeGetdef(nctemp7681);
return nctemp7683;
}
else{
struct tree* nctemp7689= p;
nctempchar1* nctemp7691=PtreeGetname(nctemp7689);
nctempchar1* nctemp7687= nctemp7691;
struct nctempchar1 *nctemp7694;
static struct nctempchar1 nctemp7695 = {{ 10}, (char*)"sconstant\0"};
nctemp7694=&nctemp7695;
nctempchar1* nctemp7692= nctemp7694;
int nctemp7696=LibeStrcmp(nctemp7687,nctemp7692);
int nctemp7684 = (nctemp7696 ==1);
if(nctemp7684)
{
struct tree* nctemp7699= p;
nctempchar1* nctemp7701=CodeSconstant(nctemp7699);
return nctemp7701;
}
else{
struct tree* nctemp7703= p;
nctempchar1* nctemp7705=CodeBinexpr(nctemp7703);
return nctemp7705;
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
nctempchar1* nctemp7711=CodeMktemp();
tempr=nctemp7711;
struct tree* nctemp7717= p;
nctempchar1* nctemp7719=PtreeGetname(nctemp7717);
nctempchar1* nctemp7715= nctemp7719;
struct nctempchar1 *nctemp7722;
static struct nctempchar1 nctemp7723 = {{ 7}, (char*)"unexpr\0"};
nctemp7722=&nctemp7723;
nctempchar1* nctemp7720= nctemp7722;
int nctemp7724=LibeStrcmp(nctemp7715,nctemp7720);
int nctemp7712 = (nctemp7724 ==1);
if(nctemp7712)
{
struct tree* nctemp7731= p;
nctempchar1* nctemp7733=PtreeGetype(nctemp7731);
nctempchar1* nctemp7729= nctemp7733;
struct nctempchar1 *nctemp7736;
static struct nctempchar1 nctemp7737 = {{ 8}, (char*)"complex\0"};
nctemp7736=&nctemp7737;
nctempchar1* nctemp7734= nctemp7736;
int nctemp7738=LibeStrcmp(nctemp7729,nctemp7734);
int nctemp7726 = (nctemp7738 ==1);
if(nctemp7726)
{
struct tree* nctemp7747= p;
struct tree* nctemp7749=PtreeMvchild(nctemp7747);
struct tree* nctemp7745= nctemp7749;
nctempchar1* nctemp7750=CodePrimexpr(nctemp7745);
tmp=nctemp7750;
struct tree* nctemp7752= p;
struct nctempchar1 *nctemp7756;
static struct nctempchar1 nctemp7757 = {{ 4}, (char*)";\n\0"};
nctemp7756=&nctemp7757;
nctempchar1* nctemp7754= nctemp7756;
int nctemp7758=CodeEs(nctemp7752,nctemp7754);
struct tree* nctemp7760= p;
nctempchar1* nctemp7762= tempr;
int nctemp7765=CodeEs(nctemp7760,nctemp7762);
struct tree* nctemp7767= p;
struct nctempchar1 *nctemp7771;
static struct nctempchar1 nctemp7772 = {{ 3}, (char*)".r\0"};
nctemp7771=&nctemp7772;
nctempchar1* nctemp7769= nctemp7771;
int nctemp7773=CodeEs(nctemp7767,nctemp7769);
struct tree* nctemp7775= p;
struct nctempchar1 *nctemp7779;
static struct nctempchar1 nctemp7780 = {{ 4}, (char*)"= -\0"};
nctemp7779=&nctemp7780;
nctempchar1* nctemp7777= nctemp7779;
int nctemp7781=CodeEs(nctemp7775,nctemp7777);
struct tree* nctemp7783= p;
nctempchar1* nctemp7785= tmp;
int nctemp7788=CodeEs(nctemp7783,nctemp7785);
struct tree* nctemp7790= p;
struct nctempchar1 *nctemp7794;
static struct nctempchar1 nctemp7795 = {{ 3}, (char*)".r\0"};
nctemp7794=&nctemp7795;
nctempchar1* nctemp7792= nctemp7794;
int nctemp7796=CodeEs(nctemp7790,nctemp7792);
struct tree* nctemp7798= p;
struct nctempchar1 *nctemp7802;
static struct nctempchar1 nctemp7803 = {{ 4}, (char*)";\n\0"};
nctemp7802=&nctemp7803;
nctempchar1* nctemp7800= nctemp7802;
int nctemp7804=CodeEs(nctemp7798,nctemp7800);
struct tree* nctemp7806= p;
nctempchar1* nctemp7808= tempr;
int nctemp7811=CodeEs(nctemp7806,nctemp7808);
struct tree* nctemp7813= p;
struct nctempchar1 *nctemp7817;
static struct nctempchar1 nctemp7818 = {{ 3}, (char*)".i\0"};
nctemp7817=&nctemp7818;
nctempchar1* nctemp7815= nctemp7817;
int nctemp7819=CodeEs(nctemp7813,nctemp7815);
struct tree* nctemp7821= p;
struct nctempchar1 *nctemp7825;
static struct nctempchar1 nctemp7826 = {{ 4}, (char*)"= -\0"};
nctemp7825=&nctemp7826;
nctempchar1* nctemp7823= nctemp7825;
int nctemp7827=CodeEs(nctemp7821,nctemp7823);
struct tree* nctemp7829= p;
nctempchar1* nctemp7831= tmp;
int nctemp7834=CodeEs(nctemp7829,nctemp7831);
struct tree* nctemp7836= p;
struct nctempchar1 *nctemp7840;
static struct nctempchar1 nctemp7841 = {{ 3}, (char*)".i\0"};
nctemp7840=&nctemp7841;
nctempchar1* nctemp7838= nctemp7840;
int nctemp7842=CodeEs(nctemp7836,nctemp7838);
struct tree* nctemp7844= p;
struct nctempchar1 *nctemp7848;
static struct nctempchar1 nctemp7849 = {{ 4}, (char*)";\n\0"};
nctemp7848=&nctemp7849;
nctempchar1* nctemp7846= nctemp7848;
int nctemp7850=CodeEs(nctemp7844,nctemp7846);
return tempr;
}
else{
struct tree* nctemp7860= p;
struct tree* nctemp7862=PtreeMvchild(nctemp7860);
struct tree* nctemp7858= nctemp7862;
nctempchar1* nctemp7863=CodePrimexpr(nctemp7858);
tmp=nctemp7863;
struct tree* nctemp7865= p;
struct tree* nctemp7869= p;
nctempchar1* nctemp7871=PtreeGetype(nctemp7869);
nctempchar1* nctemp7867= nctemp7871;
int nctemp7872=CodeEs(nctemp7865,nctemp7867);
struct tree* nctemp7874= p;
struct nctempchar1 *nctemp7878;
static struct nctempchar1 nctemp7879 = {{ 2}, (char*)" \0"};
nctemp7878=&nctemp7879;
nctempchar1* nctemp7876= nctemp7878;
int nctemp7880=CodeEs(nctemp7874,nctemp7876);
struct tree* nctemp7882= p;
nctempchar1* nctemp7884= tempr;
int nctemp7887=CodeEs(nctemp7882,nctemp7884);
struct tree* nctemp7889= p;
struct nctempchar1 *nctemp7893;
static struct nctempchar1 nctemp7894 = {{ 4}, (char*)"= -\0"};
nctemp7893=&nctemp7894;
nctempchar1* nctemp7891= nctemp7893;
int nctemp7895=CodeEs(nctemp7889,nctemp7891);
struct tree* nctemp7897= p;
nctempchar1* nctemp7899= tmp;
int nctemp7902=CodeEs(nctemp7897,nctemp7899);
struct tree* nctemp7904= p;
struct nctempchar1 *nctemp7908;
static struct nctempchar1 nctemp7909 = {{ 4}, (char*)";\n\0"};
nctemp7908=&nctemp7909;
nctempchar1* nctemp7906= nctemp7908;
int nctemp7910=CodeEs(nctemp7904,nctemp7906);
return tempr;
}
}
else{
struct tree* nctemp7914= p;
nctempchar1* nctemp7916=CodePrimexpr(nctemp7914);
return nctemp7916;
}
}
nctempchar1 * CodeAddexpr (struct tree* p,nctempchar1 *lval,nctempchar1 *rval)
{
nctempchar1 *type;
nctempchar1 *tempr;
nctempchar1 *opr;
struct tree* nctemp7922= p;
nctempchar1* nctemp7924=PtreeGetype(nctemp7922);
type=nctemp7924;
nctempchar1* nctemp7930=CodeMktemp();
tempr=nctemp7930;
struct tree* nctemp7936= p;
nctempchar1* nctemp7938=PtreeGetdef(nctemp7936);
opr=nctemp7938;
nctempchar1* nctemp7942= type;
struct nctempchar1 *nctemp7947;
static struct nctempchar1 nctemp7948 = {{ 8}, (char*)"complex\0"};
nctemp7947=&nctemp7948;
nctempchar1* nctemp7945= nctemp7947;
int nctemp7949=LibeStrcmp(nctemp7942,nctemp7945);
int nctemp7939 = (nctemp7949 ==1);
if(nctemp7939)
{
nctempchar1* nctemp7957= opr;
struct nctempchar1 *nctemp7962;
static struct nctempchar1 nctemp7963 = {{ 2}, (char*)"+\0"};
nctemp7962=&nctemp7963;
nctempchar1* nctemp7960= nctemp7962;
int nctemp7964=LibeStrcmp(nctemp7957,nctemp7960);
int nctemp7954 = (nctemp7964 ==1);
nctempchar1* nctemp7970= opr;
struct nctempchar1 *nctemp7975;
static struct nctempchar1 nctemp7976 = {{ 2}, (char*)"-\0"};
nctemp7975=&nctemp7976;
nctempchar1* nctemp7973= nctemp7975;
int nctemp7977=LibeStrcmp(nctemp7970,nctemp7973);
int nctemp7967 = (nctemp7977 ==1);
int nctemp7951 = (nctemp7954 || nctemp7967);
if(nctemp7951)
{
struct tree* nctemp7980= p;
nctempchar1* nctemp7982= type;
int nctemp7985=CodeEs(nctemp7980,nctemp7982);
struct tree* nctemp7987= p;
struct nctempchar1 *nctemp7991;
static struct nctempchar1 nctemp7992 = {{ 2}, (char*)" \0"};
nctemp7991=&nctemp7992;
nctempchar1* nctemp7989= nctemp7991;
int nctemp7993=CodeEs(nctemp7987,nctemp7989);
struct tree* nctemp7995= p;
nctempchar1* nctemp7997= tempr;
int nctemp8000=CodeEs(nctemp7995,nctemp7997);
struct tree* nctemp8002= p;
struct nctempchar1 *nctemp8006;
static struct nctempchar1 nctemp8007 = {{ 3}, (char*)".r\0"};
nctemp8006=&nctemp8007;
nctempchar1* nctemp8004= nctemp8006;
int nctemp8008=CodeEs(nctemp8002,nctemp8004);
struct tree* nctemp8010= p;
struct nctempchar1 *nctemp8014;
static struct nctempchar1 nctemp8015 = {{ 4}, (char*)" = \0"};
nctemp8014=&nctemp8015;
nctempchar1* nctemp8012= nctemp8014;
int nctemp8016=CodeEs(nctemp8010,nctemp8012);
struct tree* nctemp8018= p;
nctempchar1* nctemp8020= lval;
int nctemp8023=CodeEs(nctemp8018,nctemp8020);
struct tree* nctemp8025= p;
struct nctempchar1 *nctemp8029;
static struct nctempchar1 nctemp8030 = {{ 3}, (char*)".r\0"};
nctemp8029=&nctemp8030;
nctempchar1* nctemp8027= nctemp8029;
int nctemp8031=CodeEs(nctemp8025,nctemp8027);
struct tree* nctemp8033= p;
struct nctempchar1 *nctemp8037;
static struct nctempchar1 nctemp8038 = {{ 2}, (char*)" \0"};
nctemp8037=&nctemp8038;
nctempchar1* nctemp8035= nctemp8037;
int nctemp8039=CodeEs(nctemp8033,nctemp8035);
struct tree* nctemp8041= p;
struct tree* nctemp8045= p;
nctempchar1* nctemp8047=PtreeGetdef(nctemp8045);
nctempchar1* nctemp8043= nctemp8047;
int nctemp8048=CodeEs(nctemp8041,nctemp8043);
struct tree* nctemp8050= p;
struct nctempchar1 *nctemp8054;
static struct nctempchar1 nctemp8055 = {{ 2}, (char*)" \0"};
nctemp8054=&nctemp8055;
nctempchar1* nctemp8052= nctemp8054;
int nctemp8056=CodeEs(nctemp8050,nctemp8052);
struct tree* nctemp8058= p;
nctempchar1* nctemp8060= rval;
int nctemp8063=CodeEs(nctemp8058,nctemp8060);
struct tree* nctemp8065= p;
struct nctempchar1 *nctemp8069;
static struct nctempchar1 nctemp8070 = {{ 3}, (char*)".r\0"};
nctemp8069=&nctemp8070;
nctempchar1* nctemp8067= nctemp8069;
int nctemp8071=CodeEs(nctemp8065,nctemp8067);
struct tree* nctemp8073= p;
struct nctempchar1 *nctemp8077;
static struct nctempchar1 nctemp8078 = {{ 4}, (char*)";\n\0"};
nctemp8077=&nctemp8078;
nctempchar1* nctemp8075= nctemp8077;
int nctemp8079=CodeEs(nctemp8073,nctemp8075);
struct tree* nctemp8081= p;
nctempchar1* nctemp8083= type;
int nctemp8086=CodeEs(nctemp8081,nctemp8083);
struct tree* nctemp8088= p;
struct nctempchar1 *nctemp8092;
static struct nctempchar1 nctemp8093 = {{ 2}, (char*)" \0"};
nctemp8092=&nctemp8093;
nctempchar1* nctemp8090= nctemp8092;
int nctemp8094=CodeEs(nctemp8088,nctemp8090);
struct tree* nctemp8096= p;
nctempchar1* nctemp8098= tempr;
int nctemp8101=CodeEs(nctemp8096,nctemp8098);
struct tree* nctemp8103= p;
struct nctempchar1 *nctemp8107;
static struct nctempchar1 nctemp8108 = {{ 3}, (char*)".i\0"};
nctemp8107=&nctemp8108;
nctempchar1* nctemp8105= nctemp8107;
int nctemp8109=CodeEs(nctemp8103,nctemp8105);
struct tree* nctemp8111= p;
struct nctempchar1 *nctemp8115;
static struct nctempchar1 nctemp8116 = {{ 4}, (char*)" = \0"};
nctemp8115=&nctemp8116;
nctempchar1* nctemp8113= nctemp8115;
int nctemp8117=CodeEs(nctemp8111,nctemp8113);
struct tree* nctemp8119= p;
nctempchar1* nctemp8121= lval;
int nctemp8124=CodeEs(nctemp8119,nctemp8121);
struct tree* nctemp8126= p;
struct nctempchar1 *nctemp8130;
static struct nctempchar1 nctemp8131 = {{ 3}, (char*)".i\0"};
nctemp8130=&nctemp8131;
nctempchar1* nctemp8128= nctemp8130;
int nctemp8132=CodeEs(nctemp8126,nctemp8128);
struct tree* nctemp8134= p;
struct nctempchar1 *nctemp8138;
static struct nctempchar1 nctemp8139 = {{ 2}, (char*)" \0"};
nctemp8138=&nctemp8139;
nctempchar1* nctemp8136= nctemp8138;
int nctemp8140=CodeEs(nctemp8134,nctemp8136);
struct tree* nctemp8142= p;
struct tree* nctemp8146= p;
nctempchar1* nctemp8148=PtreeGetdef(nctemp8146);
nctempchar1* nctemp8144= nctemp8148;
int nctemp8149=CodeEs(nctemp8142,nctemp8144);
struct tree* nctemp8151= p;
struct nctempchar1 *nctemp8155;
static struct nctempchar1 nctemp8156 = {{ 2}, (char*)" \0"};
nctemp8155=&nctemp8156;
nctempchar1* nctemp8153= nctemp8155;
int nctemp8157=CodeEs(nctemp8151,nctemp8153);
struct tree* nctemp8159= p;
nctempchar1* nctemp8161= rval;
int nctemp8164=CodeEs(nctemp8159,nctemp8161);
struct tree* nctemp8166= p;
struct nctempchar1 *nctemp8170;
static struct nctempchar1 nctemp8171 = {{ 3}, (char*)".i\0"};
nctemp8170=&nctemp8171;
nctempchar1* nctemp8168= nctemp8170;
int nctemp8172=CodeEs(nctemp8166,nctemp8168);
struct tree* nctemp8174= p;
struct nctempchar1 *nctemp8178;
static struct nctempchar1 nctemp8179 = {{ 4}, (char*)";\n\0"};
nctemp8178=&nctemp8179;
nctempchar1* nctemp8176= nctemp8178;
int nctemp8180=CodeEs(nctemp8174,nctemp8176);
}
else{
nctempchar1* nctemp8184= opr;
struct nctempchar1 *nctemp8189;
static struct nctempchar1 nctemp8190 = {{ 2}, (char*)"*\0"};
nctemp8189=&nctemp8190;
nctempchar1* nctemp8187= nctemp8189;
int nctemp8191=LibeStrcmp(nctemp8184,nctemp8187);
int nctemp8181 = (nctemp8191 ==1);
if(nctemp8181)
{
struct tree* nctemp8194= p;
nctempchar1* nctemp8196= type;
int nctemp8199=CodeEs(nctemp8194,nctemp8196);
struct tree* nctemp8201= p;
struct nctempchar1 *nctemp8205;
static struct nctempchar1 nctemp8206 = {{ 2}, (char*)" \0"};
nctemp8205=&nctemp8206;
nctempchar1* nctemp8203= nctemp8205;
int nctemp8207=CodeEs(nctemp8201,nctemp8203);
struct tree* nctemp8209= p;
nctempchar1* nctemp8211= tempr;
int nctemp8214=CodeEs(nctemp8209,nctemp8211);
struct tree* nctemp8216= p;
struct nctempchar1 *nctemp8220;
static struct nctempchar1 nctemp8221 = {{ 3}, (char*)".r\0"};
nctemp8220=&nctemp8221;
nctempchar1* nctemp8218= nctemp8220;
int nctemp8222=CodeEs(nctemp8216,nctemp8218);
struct tree* nctemp8224= p;
struct nctempchar1 *nctemp8228;
static struct nctempchar1 nctemp8229 = {{ 4}, (char*)" = \0"};
nctemp8228=&nctemp8229;
nctempchar1* nctemp8226= nctemp8228;
int nctemp8230=CodeEs(nctemp8224,nctemp8226);
struct tree* nctemp8232= p;
nctempchar1* nctemp8234= lval;
int nctemp8237=CodeEs(nctemp8232,nctemp8234);
struct tree* nctemp8239= p;
struct nctempchar1 *nctemp8243;
static struct nctempchar1 nctemp8244 = {{ 3}, (char*)".r\0"};
nctemp8243=&nctemp8244;
nctempchar1* nctemp8241= nctemp8243;
int nctemp8245=CodeEs(nctemp8239,nctemp8241);
struct tree* nctemp8247= p;
struct nctempchar1 *nctemp8251;
static struct nctempchar1 nctemp8252 = {{ 2}, (char*)"*\0"};
nctemp8251=&nctemp8252;
nctempchar1* nctemp8249= nctemp8251;
int nctemp8253=CodeEs(nctemp8247,nctemp8249);
struct tree* nctemp8255= p;
nctempchar1* nctemp8257= rval;
int nctemp8260=CodeEs(nctemp8255,nctemp8257);
struct tree* nctemp8262= p;
struct nctempchar1 *nctemp8266;
static struct nctempchar1 nctemp8267 = {{ 3}, (char*)".r\0"};
nctemp8266=&nctemp8267;
nctempchar1* nctemp8264= nctemp8266;
int nctemp8268=CodeEs(nctemp8262,nctemp8264);
struct tree* nctemp8270= p;
struct nctempchar1 *nctemp8274;
static struct nctempchar1 nctemp8275 = {{ 2}, (char*)"-\0"};
nctemp8274=&nctemp8275;
nctempchar1* nctemp8272= nctemp8274;
int nctemp8276=CodeEs(nctemp8270,nctemp8272);
struct tree* nctemp8278= p;
nctempchar1* nctemp8280= lval;
int nctemp8283=CodeEs(nctemp8278,nctemp8280);
struct tree* nctemp8285= p;
struct nctempchar1 *nctemp8289;
static struct nctempchar1 nctemp8290 = {{ 3}, (char*)".i\0"};
nctemp8289=&nctemp8290;
nctempchar1* nctemp8287= nctemp8289;
int nctemp8291=CodeEs(nctemp8285,nctemp8287);
struct tree* nctemp8293= p;
struct nctempchar1 *nctemp8297;
static struct nctempchar1 nctemp8298 = {{ 2}, (char*)"*\0"};
nctemp8297=&nctemp8298;
nctempchar1* nctemp8295= nctemp8297;
int nctemp8299=CodeEs(nctemp8293,nctemp8295);
struct tree* nctemp8301= p;
nctempchar1* nctemp8303= rval;
int nctemp8306=CodeEs(nctemp8301,nctemp8303);
struct tree* nctemp8308= p;
struct nctempchar1 *nctemp8312;
static struct nctempchar1 nctemp8313 = {{ 3}, (char*)".i\0"};
nctemp8312=&nctemp8313;
nctempchar1* nctemp8310= nctemp8312;
int nctemp8314=CodeEs(nctemp8308,nctemp8310);
struct tree* nctemp8316= p;
struct nctempchar1 *nctemp8320;
static struct nctempchar1 nctemp8321 = {{ 4}, (char*)";\n\0"};
nctemp8320=&nctemp8321;
nctempchar1* nctemp8318= nctemp8320;
int nctemp8322=CodeEs(nctemp8316,nctemp8318);
struct tree* nctemp8324= p;
nctempchar1* nctemp8326= type;
int nctemp8329=CodeEs(nctemp8324,nctemp8326);
struct tree* nctemp8331= p;
struct nctempchar1 *nctemp8335;
static struct nctempchar1 nctemp8336 = {{ 2}, (char*)" \0"};
nctemp8335=&nctemp8336;
nctempchar1* nctemp8333= nctemp8335;
int nctemp8337=CodeEs(nctemp8331,nctemp8333);
struct tree* nctemp8339= p;
nctempchar1* nctemp8341= tempr;
int nctemp8344=CodeEs(nctemp8339,nctemp8341);
struct tree* nctemp8346= p;
struct nctempchar1 *nctemp8350;
static struct nctempchar1 nctemp8351 = {{ 3}, (char*)".i\0"};
nctemp8350=&nctemp8351;
nctempchar1* nctemp8348= nctemp8350;
int nctemp8352=CodeEs(nctemp8346,nctemp8348);
struct tree* nctemp8354= p;
struct nctempchar1 *nctemp8358;
static struct nctempchar1 nctemp8359 = {{ 4}, (char*)" = \0"};
nctemp8358=&nctemp8359;
nctempchar1* nctemp8356= nctemp8358;
int nctemp8360=CodeEs(nctemp8354,nctemp8356);
struct tree* nctemp8362= p;
nctempchar1* nctemp8364= lval;
int nctemp8367=CodeEs(nctemp8362,nctemp8364);
struct tree* nctemp8369= p;
struct nctempchar1 *nctemp8373;
static struct nctempchar1 nctemp8374 = {{ 3}, (char*)".i\0"};
nctemp8373=&nctemp8374;
nctempchar1* nctemp8371= nctemp8373;
int nctemp8375=CodeEs(nctemp8369,nctemp8371);
struct tree* nctemp8377= p;
struct nctempchar1 *nctemp8381;
static struct nctempchar1 nctemp8382 = {{ 2}, (char*)"*\0"};
nctemp8381=&nctemp8382;
nctempchar1* nctemp8379= nctemp8381;
int nctemp8383=CodeEs(nctemp8377,nctemp8379);
struct tree* nctemp8385= p;
nctempchar1* nctemp8387= rval;
int nctemp8390=CodeEs(nctemp8385,nctemp8387);
struct tree* nctemp8392= p;
struct nctempchar1 *nctemp8396;
static struct nctempchar1 nctemp8397 = {{ 3}, (char*)".r\0"};
nctemp8396=&nctemp8397;
nctempchar1* nctemp8394= nctemp8396;
int nctemp8398=CodeEs(nctemp8392,nctemp8394);
struct tree* nctemp8400= p;
struct nctempchar1 *nctemp8404;
static struct nctempchar1 nctemp8405 = {{ 2}, (char*)"+\0"};
nctemp8404=&nctemp8405;
nctempchar1* nctemp8402= nctemp8404;
int nctemp8406=CodeEs(nctemp8400,nctemp8402);
struct tree* nctemp8408= p;
nctempchar1* nctemp8410= lval;
int nctemp8413=CodeEs(nctemp8408,nctemp8410);
struct tree* nctemp8415= p;
struct nctempchar1 *nctemp8419;
static struct nctempchar1 nctemp8420 = {{ 3}, (char*)".r\0"};
nctemp8419=&nctemp8420;
nctempchar1* nctemp8417= nctemp8419;
int nctemp8421=CodeEs(nctemp8415,nctemp8417);
struct tree* nctemp8423= p;
struct nctempchar1 *nctemp8427;
static struct nctempchar1 nctemp8428 = {{ 2}, (char*)"*\0"};
nctemp8427=&nctemp8428;
nctempchar1* nctemp8425= nctemp8427;
int nctemp8429=CodeEs(nctemp8423,nctemp8425);
struct tree* nctemp8431= p;
nctempchar1* nctemp8433= rval;
int nctemp8436=CodeEs(nctemp8431,nctemp8433);
struct tree* nctemp8438= p;
struct nctempchar1 *nctemp8442;
static struct nctempchar1 nctemp8443 = {{ 3}, (char*)".i\0"};
nctemp8442=&nctemp8443;
nctempchar1* nctemp8440= nctemp8442;
int nctemp8444=CodeEs(nctemp8438,nctemp8440);
struct tree* nctemp8446= p;
struct nctempchar1 *nctemp8450;
static struct nctempchar1 nctemp8451 = {{ 4}, (char*)";\n\0"};
nctemp8450=&nctemp8451;
nctempchar1* nctemp8448= nctemp8450;
int nctemp8452=CodeEs(nctemp8446,nctemp8448);
}
else{
nctempchar1* nctemp8456= opr;
struct nctempchar1 *nctemp8461;
static struct nctempchar1 nctemp8462 = {{ 2}, (char*)"/\0"};
nctemp8461=&nctemp8462;
nctempchar1* nctemp8459= nctemp8461;
int nctemp8463=LibeStrcmp(nctemp8456,nctemp8459);
int nctemp8453 = (nctemp8463 ==1);
if(nctemp8453)
{
struct tree* nctemp8466= p;
nctempchar1* nctemp8468= type;
int nctemp8471=CodeEs(nctemp8466,nctemp8468);
struct tree* nctemp8473= p;
struct nctempchar1 *nctemp8477;
static struct nctempchar1 nctemp8478 = {{ 2}, (char*)" \0"};
nctemp8477=&nctemp8478;
nctempchar1* nctemp8475= nctemp8477;
int nctemp8479=CodeEs(nctemp8473,nctemp8475);
struct tree* nctemp8481= p;
nctempchar1* nctemp8483= tempr;
int nctemp8486=CodeEs(nctemp8481,nctemp8483);
struct tree* nctemp8488= p;
struct nctempchar1 *nctemp8492;
static struct nctempchar1 nctemp8493 = {{ 3}, (char*)".r\0"};
nctemp8492=&nctemp8493;
nctempchar1* nctemp8490= nctemp8492;
int nctemp8494=CodeEs(nctemp8488,nctemp8490);
struct tree* nctemp8496= p;
struct nctempchar1 *nctemp8500;
static struct nctempchar1 nctemp8501 = {{ 4}, (char*)" = \0"};
nctemp8500=&nctemp8501;
nctempchar1* nctemp8498= nctemp8500;
int nctemp8502=CodeEs(nctemp8496,nctemp8498);
struct tree* nctemp8504= p;
struct nctempchar1 *nctemp8508;
static struct nctempchar1 nctemp8509 = {{ 2}, (char*)"(\0"};
nctemp8508=&nctemp8509;
nctempchar1* nctemp8506= nctemp8508;
int nctemp8510=CodeEs(nctemp8504,nctemp8506);
struct tree* nctemp8512= p;
nctempchar1* nctemp8514= lval;
int nctemp8517=CodeEs(nctemp8512,nctemp8514);
struct tree* nctemp8519= p;
struct nctempchar1 *nctemp8523;
static struct nctempchar1 nctemp8524 = {{ 3}, (char*)".r\0"};
nctemp8523=&nctemp8524;
nctempchar1* nctemp8521= nctemp8523;
int nctemp8525=CodeEs(nctemp8519,nctemp8521);
struct tree* nctemp8527= p;
struct nctempchar1 *nctemp8531;
static struct nctempchar1 nctemp8532 = {{ 2}, (char*)"*\0"};
nctemp8531=&nctemp8532;
nctempchar1* nctemp8529= nctemp8531;
int nctemp8533=CodeEs(nctemp8527,nctemp8529);
struct tree* nctemp8535= p;
nctempchar1* nctemp8537= rval;
int nctemp8540=CodeEs(nctemp8535,nctemp8537);
struct tree* nctemp8542= p;
struct nctempchar1 *nctemp8546;
static struct nctempchar1 nctemp8547 = {{ 3}, (char*)".r\0"};
nctemp8546=&nctemp8547;
nctempchar1* nctemp8544= nctemp8546;
int nctemp8548=CodeEs(nctemp8542,nctemp8544);
struct tree* nctemp8550= p;
struct nctempchar1 *nctemp8554;
static struct nctempchar1 nctemp8555 = {{ 2}, (char*)"+\0"};
nctemp8554=&nctemp8555;
nctempchar1* nctemp8552= nctemp8554;
int nctemp8556=CodeEs(nctemp8550,nctemp8552);
struct tree* nctemp8558= p;
nctempchar1* nctemp8560= lval;
int nctemp8563=CodeEs(nctemp8558,nctemp8560);
struct tree* nctemp8565= p;
struct nctempchar1 *nctemp8569;
static struct nctempchar1 nctemp8570 = {{ 3}, (char*)".i\0"};
nctemp8569=&nctemp8570;
nctempchar1* nctemp8567= nctemp8569;
int nctemp8571=CodeEs(nctemp8565,nctemp8567);
struct tree* nctemp8573= p;
struct nctempchar1 *nctemp8577;
static struct nctempchar1 nctemp8578 = {{ 2}, (char*)"*\0"};
nctemp8577=&nctemp8578;
nctempchar1* nctemp8575= nctemp8577;
int nctemp8579=CodeEs(nctemp8573,nctemp8575);
struct tree* nctemp8581= p;
nctempchar1* nctemp8583= rval;
int nctemp8586=CodeEs(nctemp8581,nctemp8583);
struct tree* nctemp8588= p;
struct nctempchar1 *nctemp8592;
static struct nctempchar1 nctemp8593 = {{ 3}, (char*)".i\0"};
nctemp8592=&nctemp8593;
nctempchar1* nctemp8590= nctemp8592;
int nctemp8594=CodeEs(nctemp8588,nctemp8590);
struct tree* nctemp8596= p;
struct nctempchar1 *nctemp8600;
static struct nctempchar1 nctemp8601 = {{ 4}, (char*)")/(\0"};
nctemp8600=&nctemp8601;
nctempchar1* nctemp8598= nctemp8600;
int nctemp8602=CodeEs(nctemp8596,nctemp8598);
struct tree* nctemp8604= p;
nctempchar1* nctemp8606= rval;
int nctemp8609=CodeEs(nctemp8604,nctemp8606);
struct tree* nctemp8611= p;
struct nctempchar1 *nctemp8615;
static struct nctempchar1 nctemp8616 = {{ 3}, (char*)".r\0"};
nctemp8615=&nctemp8616;
nctempchar1* nctemp8613= nctemp8615;
int nctemp8617=CodeEs(nctemp8611,nctemp8613);
struct tree* nctemp8619= p;
struct nctempchar1 *nctemp8623;
static struct nctempchar1 nctemp8624 = {{ 2}, (char*)"*\0"};
nctemp8623=&nctemp8624;
nctempchar1* nctemp8621= nctemp8623;
int nctemp8625=CodeEs(nctemp8619,nctemp8621);
struct tree* nctemp8627= p;
nctempchar1* nctemp8629= rval;
int nctemp8632=CodeEs(nctemp8627,nctemp8629);
struct tree* nctemp8634= p;
struct nctempchar1 *nctemp8638;
static struct nctempchar1 nctemp8639 = {{ 3}, (char*)".r\0"};
nctemp8638=&nctemp8639;
nctempchar1* nctemp8636= nctemp8638;
int nctemp8640=CodeEs(nctemp8634,nctemp8636);
struct tree* nctemp8642= p;
struct nctempchar1 *nctemp8646;
static struct nctempchar1 nctemp8647 = {{ 2}, (char*)"+\0"};
nctemp8646=&nctemp8647;
nctempchar1* nctemp8644= nctemp8646;
int nctemp8648=CodeEs(nctemp8642,nctemp8644);
struct tree* nctemp8650= p;
nctempchar1* nctemp8652= rval;
int nctemp8655=CodeEs(nctemp8650,nctemp8652);
struct tree* nctemp8657= p;
struct nctempchar1 *nctemp8661;
static struct nctempchar1 nctemp8662 = {{ 3}, (char*)".i\0"};
nctemp8661=&nctemp8662;
nctempchar1* nctemp8659= nctemp8661;
int nctemp8663=CodeEs(nctemp8657,nctemp8659);
struct tree* nctemp8665= p;
struct nctempchar1 *nctemp8669;
static struct nctempchar1 nctemp8670 = {{ 2}, (char*)"*\0"};
nctemp8669=&nctemp8670;
nctempchar1* nctemp8667= nctemp8669;
int nctemp8671=CodeEs(nctemp8665,nctemp8667);
struct tree* nctemp8673= p;
nctempchar1* nctemp8675= rval;
int nctemp8678=CodeEs(nctemp8673,nctemp8675);
struct tree* nctemp8680= p;
struct nctempchar1 *nctemp8684;
static struct nctempchar1 nctemp8685 = {{ 3}, (char*)".i\0"};
nctemp8684=&nctemp8685;
nctempchar1* nctemp8682= nctemp8684;
int nctemp8686=CodeEs(nctemp8680,nctemp8682);
struct tree* nctemp8688= p;
struct nctempchar1 *nctemp8692;
static struct nctempchar1 nctemp8693 = {{ 5}, (char*)");\n\0"};
nctemp8692=&nctemp8693;
nctempchar1* nctemp8690= nctemp8692;
int nctemp8694=CodeEs(nctemp8688,nctemp8690);
struct tree* nctemp8696= p;
nctempchar1* nctemp8698= type;
int nctemp8701=CodeEs(nctemp8696,nctemp8698);
struct tree* nctemp8703= p;
struct nctempchar1 *nctemp8707;
static struct nctempchar1 nctemp8708 = {{ 2}, (char*)" \0"};
nctemp8707=&nctemp8708;
nctempchar1* nctemp8705= nctemp8707;
int nctemp8709=CodeEs(nctemp8703,nctemp8705);
struct tree* nctemp8711= p;
nctempchar1* nctemp8713= tempr;
int nctemp8716=CodeEs(nctemp8711,nctemp8713);
struct tree* nctemp8718= p;
struct nctempchar1 *nctemp8722;
static struct nctempchar1 nctemp8723 = {{ 3}, (char*)".i\0"};
nctemp8722=&nctemp8723;
nctempchar1* nctemp8720= nctemp8722;
int nctemp8724=CodeEs(nctemp8718,nctemp8720);
struct tree* nctemp8726= p;
struct nctempchar1 *nctemp8730;
static struct nctempchar1 nctemp8731 = {{ 4}, (char*)" = \0"};
nctemp8730=&nctemp8731;
nctempchar1* nctemp8728= nctemp8730;
int nctemp8732=CodeEs(nctemp8726,nctemp8728);
struct tree* nctemp8734= p;
struct nctempchar1 *nctemp8738;
static struct nctempchar1 nctemp8739 = {{ 2}, (char*)"(\0"};
nctemp8738=&nctemp8739;
nctempchar1* nctemp8736= nctemp8738;
int nctemp8740=CodeEs(nctemp8734,nctemp8736);
struct tree* nctemp8742= p;
nctempchar1* nctemp8744= lval;
int nctemp8747=CodeEs(nctemp8742,nctemp8744);
struct tree* nctemp8749= p;
struct nctempchar1 *nctemp8753;
static struct nctempchar1 nctemp8754 = {{ 3}, (char*)".i\0"};
nctemp8753=&nctemp8754;
nctempchar1* nctemp8751= nctemp8753;
int nctemp8755=CodeEs(nctemp8749,nctemp8751);
struct tree* nctemp8757= p;
struct nctempchar1 *nctemp8761;
static struct nctempchar1 nctemp8762 = {{ 2}, (char*)"*\0"};
nctemp8761=&nctemp8762;
nctempchar1* nctemp8759= nctemp8761;
int nctemp8763=CodeEs(nctemp8757,nctemp8759);
struct tree* nctemp8765= p;
nctempchar1* nctemp8767= rval;
int nctemp8770=CodeEs(nctemp8765,nctemp8767);
struct tree* nctemp8772= p;
struct nctempchar1 *nctemp8776;
static struct nctempchar1 nctemp8777 = {{ 3}, (char*)".r\0"};
nctemp8776=&nctemp8777;
nctempchar1* nctemp8774= nctemp8776;
int nctemp8778=CodeEs(nctemp8772,nctemp8774);
struct tree* nctemp8780= p;
struct nctempchar1 *nctemp8784;
static struct nctempchar1 nctemp8785 = {{ 2}, (char*)"-\0"};
nctemp8784=&nctemp8785;
nctempchar1* nctemp8782= nctemp8784;
int nctemp8786=CodeEs(nctemp8780,nctemp8782);
struct tree* nctemp8788= p;
nctempchar1* nctemp8790= lval;
int nctemp8793=CodeEs(nctemp8788,nctemp8790);
struct tree* nctemp8795= p;
struct nctempchar1 *nctemp8799;
static struct nctempchar1 nctemp8800 = {{ 3}, (char*)".r\0"};
nctemp8799=&nctemp8800;
nctempchar1* nctemp8797= nctemp8799;
int nctemp8801=CodeEs(nctemp8795,nctemp8797);
struct tree* nctemp8803= p;
struct nctempchar1 *nctemp8807;
static struct nctempchar1 nctemp8808 = {{ 2}, (char*)"*\0"};
nctemp8807=&nctemp8808;
nctempchar1* nctemp8805= nctemp8807;
int nctemp8809=CodeEs(nctemp8803,nctemp8805);
struct tree* nctemp8811= p;
nctempchar1* nctemp8813= rval;
int nctemp8816=CodeEs(nctemp8811,nctemp8813);
struct tree* nctemp8818= p;
struct nctempchar1 *nctemp8822;
static struct nctempchar1 nctemp8823 = {{ 3}, (char*)".i\0"};
nctemp8822=&nctemp8823;
nctempchar1* nctemp8820= nctemp8822;
int nctemp8824=CodeEs(nctemp8818,nctemp8820);
struct tree* nctemp8826= p;
struct nctempchar1 *nctemp8830;
static struct nctempchar1 nctemp8831 = {{ 4}, (char*)")/(\0"};
nctemp8830=&nctemp8831;
nctempchar1* nctemp8828= nctemp8830;
int nctemp8832=CodeEs(nctemp8826,nctemp8828);
struct tree* nctemp8834= p;
nctempchar1* nctemp8836= rval;
int nctemp8839=CodeEs(nctemp8834,nctemp8836);
struct tree* nctemp8841= p;
struct nctempchar1 *nctemp8845;
static struct nctempchar1 nctemp8846 = {{ 3}, (char*)".r\0"};
nctemp8845=&nctemp8846;
nctempchar1* nctemp8843= nctemp8845;
int nctemp8847=CodeEs(nctemp8841,nctemp8843);
struct tree* nctemp8849= p;
struct nctempchar1 *nctemp8853;
static struct nctempchar1 nctemp8854 = {{ 2}, (char*)"*\0"};
nctemp8853=&nctemp8854;
nctempchar1* nctemp8851= nctemp8853;
int nctemp8855=CodeEs(nctemp8849,nctemp8851);
struct tree* nctemp8857= p;
nctempchar1* nctemp8859= rval;
int nctemp8862=CodeEs(nctemp8857,nctemp8859);
struct tree* nctemp8864= p;
struct nctempchar1 *nctemp8868;
static struct nctempchar1 nctemp8869 = {{ 3}, (char*)".r\0"};
nctemp8868=&nctemp8869;
nctempchar1* nctemp8866= nctemp8868;
int nctemp8870=CodeEs(nctemp8864,nctemp8866);
struct tree* nctemp8872= p;
struct nctempchar1 *nctemp8876;
static struct nctempchar1 nctemp8877 = {{ 2}, (char*)"+\0"};
nctemp8876=&nctemp8877;
nctempchar1* nctemp8874= nctemp8876;
int nctemp8878=CodeEs(nctemp8872,nctemp8874);
struct tree* nctemp8880= p;
nctempchar1* nctemp8882= rval;
int nctemp8885=CodeEs(nctemp8880,nctemp8882);
struct tree* nctemp8887= p;
struct nctempchar1 *nctemp8891;
static struct nctempchar1 nctemp8892 = {{ 3}, (char*)".i\0"};
nctemp8891=&nctemp8892;
nctempchar1* nctemp8889= nctemp8891;
int nctemp8893=CodeEs(nctemp8887,nctemp8889);
struct tree* nctemp8895= p;
struct nctempchar1 *nctemp8899;
static struct nctempchar1 nctemp8900 = {{ 2}, (char*)"*\0"};
nctemp8899=&nctemp8900;
nctempchar1* nctemp8897= nctemp8899;
int nctemp8901=CodeEs(nctemp8895,nctemp8897);
struct tree* nctemp8903= p;
nctempchar1* nctemp8905= rval;
int nctemp8908=CodeEs(nctemp8903,nctemp8905);
struct tree* nctemp8910= p;
struct nctempchar1 *nctemp8914;
static struct nctempchar1 nctemp8915 = {{ 3}, (char*)".i\0"};
nctemp8914=&nctemp8915;
nctempchar1* nctemp8912= nctemp8914;
int nctemp8916=CodeEs(nctemp8910,nctemp8912);
struct tree* nctemp8918= p;
struct nctempchar1 *nctemp8922;
static struct nctempchar1 nctemp8923 = {{ 5}, (char*)");\n\0"};
nctemp8922=&nctemp8923;
nctempchar1* nctemp8920= nctemp8922;
int nctemp8924=CodeEs(nctemp8918,nctemp8920);
}
}
}
}
else{
struct tree* nctemp8926= p;
nctempchar1* nctemp8928= type;
int nctemp8931=CodeEs(nctemp8926,nctemp8928);
struct tree* nctemp8933= p;
struct nctempchar1 *nctemp8937;
static struct nctempchar1 nctemp8938 = {{ 2}, (char*)" \0"};
nctemp8937=&nctemp8938;
nctempchar1* nctemp8935= nctemp8937;
int nctemp8939=CodeEs(nctemp8933,nctemp8935);
struct tree* nctemp8941= p;
nctempchar1* nctemp8943= tempr;
int nctemp8946=CodeEs(nctemp8941,nctemp8943);
struct tree* nctemp8948= p;
struct nctempchar1 *nctemp8952;
static struct nctempchar1 nctemp8953 = {{ 4}, (char*)" = \0"};
nctemp8952=&nctemp8953;
nctempchar1* nctemp8950= nctemp8952;
int nctemp8954=CodeEs(nctemp8948,nctemp8950);
struct tree* nctemp8956= p;
nctempchar1* nctemp8958= lval;
int nctemp8961=CodeEs(nctemp8956,nctemp8958);
struct tree* nctemp8963= p;
struct nctempchar1 *nctemp8967;
static struct nctempchar1 nctemp8968 = {{ 2}, (char*)" \0"};
nctemp8967=&nctemp8968;
nctempchar1* nctemp8965= nctemp8967;
int nctemp8969=CodeEs(nctemp8963,nctemp8965);
struct tree* nctemp8971= p;
struct tree* nctemp8975= p;
nctempchar1* nctemp8977=PtreeGetdef(nctemp8975);
nctempchar1* nctemp8973= nctemp8977;
int nctemp8978=CodeEs(nctemp8971,nctemp8973);
struct tree* nctemp8980= p;
struct nctempchar1 *nctemp8984;
static struct nctempchar1 nctemp8985 = {{ 2}, (char*)" \0"};
nctemp8984=&nctemp8985;
nctempchar1* nctemp8982= nctemp8984;
int nctemp8986=CodeEs(nctemp8980,nctemp8982);
struct tree* nctemp8988= p;
nctempchar1* nctemp8990= rval;
int nctemp8993=CodeEs(nctemp8988,nctemp8990);
struct tree* nctemp8995= p;
struct nctempchar1 *nctemp8999;
static struct nctempchar1 nctemp9000 = {{ 4}, (char*)";\n\0"};
nctemp8999=&nctemp9000;
nctempchar1* nctemp8997= nctemp8999;
int nctemp9001=CodeEs(nctemp8995,nctemp8997);
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
struct tree* nctemp9009= p;
nctempchar1* nctemp9011=PtreeGetname(nctemp9009);
nctempchar1* nctemp9007= nctemp9011;
struct nctempchar1 *nctemp9014;
static struct nctempchar1 nctemp9015 = {{ 8}, (char*)"binexpr\0"};
nctemp9014=&nctemp9015;
nctempchar1* nctemp9012= nctemp9014;
int nctemp9016=LibeStrcmp(nctemp9007,nctemp9012);
int nctemp9004 = (nctemp9016 ==1);
if(nctemp9004)
{
struct tree* nctemp9023= p;
nctempchar1* nctemp9025=PtreeGetype(nctemp9023);
type=nctemp9025;
nctempchar1* nctemp9031=CodeMktemp();
tempr=nctemp9031;
nctempchar1* nctemp9037=CodeMktemp();
tempi=nctemp9037;
struct tree* nctemp9042= p;
struct tree* nctemp9044=PtreeMvchild(nctemp9042);
np =nctemp9044;
struct tree* nctemp9050= np;
nctempchar1* nctemp9052=CodeUnexpr(nctemp9050);
lval=nctemp9052;
struct tree* nctemp9060= np;
struct tree* nctemp9062=PtreeMvsister(nctemp9060);
struct tree* nctemp9058= nctemp9062;
nctempchar1* nctemp9063=CodeUnexpr(nctemp9058);
rval=nctemp9063;
struct tree* nctemp9078= p;
nctempchar1* nctemp9080=PtreeGetdef(nctemp9078);
nctempchar1* nctemp9076= nctemp9080;
struct nctempchar1 *nctemp9083;
static struct nctempchar1 nctemp9084 = {{ 2}, (char*)"+\0"};
nctemp9083=&nctemp9084;
nctempchar1* nctemp9081= nctemp9083;
int nctemp9085=LibeStrcmp(nctemp9076,nctemp9081);
int nctemp9073 = (nctemp9085 ==1);
struct tree* nctemp9093= p;
nctempchar1* nctemp9095=PtreeGetdef(nctemp9093);
nctempchar1* nctemp9091= nctemp9095;
struct nctempchar1 *nctemp9098;
static struct nctempchar1 nctemp9099 = {{ 2}, (char*)"-\0"};
nctemp9098=&nctemp9099;
nctempchar1* nctemp9096= nctemp9098;
int nctemp9100=LibeStrcmp(nctemp9091,nctemp9096);
int nctemp9088 = (nctemp9100 ==1);
int nctemp9070 = (nctemp9073 || nctemp9088);
struct tree* nctemp9108= p;
nctempchar1* nctemp9110=PtreeGetdef(nctemp9108);
nctempchar1* nctemp9106= nctemp9110;
struct nctempchar1 *nctemp9113;
static struct nctempchar1 nctemp9114 = {{ 2}, (char*)"*\0"};
nctemp9113=&nctemp9114;
nctempchar1* nctemp9111= nctemp9113;
int nctemp9115=LibeStrcmp(nctemp9106,nctemp9111);
int nctemp9103 = (nctemp9115 ==1);
int nctemp9067 = (nctemp9070 || nctemp9103);
struct tree* nctemp9123= p;
nctempchar1* nctemp9125=PtreeGetdef(nctemp9123);
nctempchar1* nctemp9121= nctemp9125;
struct nctempchar1 *nctemp9128;
static struct nctempchar1 nctemp9129 = {{ 2}, (char*)"/\0"};
nctemp9128=&nctemp9129;
nctempchar1* nctemp9126= nctemp9128;
int nctemp9130=LibeStrcmp(nctemp9121,nctemp9126);
int nctemp9118 = (nctemp9130 ==1);
int nctemp9064 = (nctemp9067 || nctemp9118);
if(nctemp9064)
{
struct tree* nctemp9133= p;
nctempchar1* nctemp9135= lval;
nctempchar1* nctemp9138= rval;
nctempchar1* nctemp9141=CodeAddexpr(nctemp9133,nctemp9135,nctemp9138);
return nctemp9141;
}
else{
struct tree* nctemp9147= p;
nctempchar1* nctemp9149=PtreeGetdef(nctemp9147);
nctempchar1* nctemp9145= nctemp9149;
struct nctempchar1 *nctemp9152;
static struct nctempchar1 nctemp9153 = {{ 2}, (char*)"=\0"};
nctemp9152=&nctemp9153;
nctempchar1* nctemp9150= nctemp9152;
int nctemp9154=LibeStrcmp(nctemp9145,nctemp9150);
int nctemp9142 = (nctemp9154 ==1);
if(nctemp9142)
{
struct tree* nctemp9167= p;
nctempchar1* nctemp9169=PtreeGetype(nctemp9167);
nctempchar1* nctemp9165= nctemp9169;
struct nctempchar1 *nctemp9172;
static struct nctempchar1 nctemp9173 = {{ 8}, (char*)"complex\0"};
nctemp9172=&nctemp9173;
nctempchar1* nctemp9170= nctemp9172;
int nctemp9174=LibeStrcmp(nctemp9165,nctemp9170);
int nctemp9162 = (nctemp9174 ==1);
struct tree* nctemp9182= p;
nctempchar1* nctemp9184=PtreeGetref(nctemp9182);
nctempchar1* nctemp9180= nctemp9184;
struct nctempchar1 *nctemp9187;
static struct nctempchar1 nctemp9188 = {{ 5}, (char*)"aref\0"};
nctemp9187=&nctemp9188;
nctempchar1* nctemp9185= nctemp9187;
int nctemp9189=LibeStrcmp(nctemp9180,nctemp9185);
int nctemp9177 = (nctemp9189 ==0);
int nctemp9159 = (nctemp9162 && nctemp9177);
struct tree* nctemp9197= p;
nctempchar1* nctemp9199=PtreeGetref(nctemp9197);
nctempchar1* nctemp9195= nctemp9199;
struct nctempchar1 *nctemp9202;
static struct nctempchar1 nctemp9203 = {{ 5}, (char*)"sref\0"};
nctemp9202=&nctemp9203;
nctempchar1* nctemp9200= nctemp9202;
int nctemp9204=LibeStrcmp(nctemp9195,nctemp9200);
int nctemp9192 = (nctemp9204 ==0);
int nctemp9156 = (nctemp9159 && nctemp9192);
if(nctemp9156)
{
struct tree* nctemp9207= p;
nctempchar1* nctemp9209= lval;
int nctemp9212=CodeEs(nctemp9207,nctemp9209);
struct tree* nctemp9214= p;
struct nctempchar1 *nctemp9218;
static struct nctempchar1 nctemp9219 = {{ 4}, (char*)".r \0"};
nctemp9218=&nctemp9219;
nctempchar1* nctemp9216= nctemp9218;
int nctemp9220=CodeEs(nctemp9214,nctemp9216);
struct tree* nctemp9222= p;
struct nctempchar1 *nctemp9226;
static struct nctempchar1 nctemp9227 = {{ 2}, (char*)"=\0"};
nctemp9226=&nctemp9227;
nctempchar1* nctemp9224= nctemp9226;
int nctemp9228=CodeEs(nctemp9222,nctemp9224);
struct tree* nctemp9230= p;
nctempchar1* nctemp9232= rval;
int nctemp9235=CodeEs(nctemp9230,nctemp9232);
struct tree* nctemp9237= p;
struct nctempchar1 *nctemp9241;
static struct nctempchar1 nctemp9242 = {{ 3}, (char*)".r\0"};
nctemp9241=&nctemp9242;
nctempchar1* nctemp9239= nctemp9241;
int nctemp9243=CodeEs(nctemp9237,nctemp9239);
struct tree* nctemp9245= p;
struct nctempchar1 *nctemp9249;
static struct nctempchar1 nctemp9250 = {{ 4}, (char*)";\n\0"};
nctemp9249=&nctemp9250;
nctempchar1* nctemp9247= nctemp9249;
int nctemp9251=CodeEs(nctemp9245,nctemp9247);
struct tree* nctemp9253= p;
nctempchar1* nctemp9255= lval;
int nctemp9258=CodeEs(nctemp9253,nctemp9255);
struct tree* nctemp9260= p;
struct nctempchar1 *nctemp9264;
static struct nctempchar1 nctemp9265 = {{ 3}, (char*)".i\0"};
nctemp9264=&nctemp9265;
nctempchar1* nctemp9262= nctemp9264;
int nctemp9266=CodeEs(nctemp9260,nctemp9262);
struct tree* nctemp9268= p;
struct nctempchar1 *nctemp9272;
static struct nctempchar1 nctemp9273 = {{ 2}, (char*)"=\0"};
nctemp9272=&nctemp9273;
nctempchar1* nctemp9270= nctemp9272;
int nctemp9274=CodeEs(nctemp9268,nctemp9270);
struct tree* nctemp9276= p;
nctempchar1* nctemp9278= rval;
int nctemp9281=CodeEs(nctemp9276,nctemp9278);
struct tree* nctemp9283= p;
struct nctempchar1 *nctemp9287;
static struct nctempchar1 nctemp9288 = {{ 3}, (char*)".i\0"};
nctemp9287=&nctemp9288;
nctempchar1* nctemp9285= nctemp9287;
int nctemp9289=CodeEs(nctemp9283,nctemp9285);
struct tree* nctemp9291= p;
struct nctempchar1 *nctemp9295;
static struct nctempchar1 nctemp9296 = {{ 4}, (char*)";\n\0"};
nctemp9295=&nctemp9296;
nctempchar1* nctemp9293= nctemp9295;
int nctemp9297=CodeEs(nctemp9291,nctemp9293);
return lval;
}
else{
struct tree* nctemp9305= np;
nctempchar1* nctemp9307=PtreeGetref(nctemp9305);
nctempchar1* nctemp9303= nctemp9307;
struct nctempchar1 *nctemp9310;
static struct nctempchar1 nctemp9311 = {{ 5}, (char*)"aref\0"};
nctemp9310=&nctemp9311;
nctempchar1* nctemp9308= nctemp9310;
int nctemp9312=LibeStrcmp(nctemp9303,nctemp9308);
int nctemp9300 = (nctemp9312 ==1);
if(nctemp9300)
{
struct tree* nctemp9321= np;
struct tree* nctemp9323=PtreeMvsister(nctemp9321);
struct tree* nctemp9319= nctemp9323;
nctempchar1* nctemp9324=PtreeGetname(nctemp9319);
nctempchar1* nctemp9317= nctemp9324;
struct nctempchar1 *nctemp9327;
static struct nctempchar1 nctemp9328 = {{ 10}, (char*)"iconstant\0"};
nctemp9327=&nctemp9328;
nctempchar1* nctemp9325= nctemp9327;
int nctemp9329=LibeStrcmp(nctemp9317,nctemp9325);
struct tree* nctemp9335= np;
struct tree* nctemp9337=PtreeMvsister(nctemp9335);
struct tree* nctemp9333= nctemp9337;
nctempchar1* nctemp9338=PtreeGetdef(nctemp9333);
nctempchar1* nctemp9331= nctemp9338;
struct nctempchar1 *nctemp9341;
static struct nctempchar1 nctemp9342 = {{ 2}, (char*)"0\0"};
nctemp9341=&nctemp9342;
nctempchar1* nctemp9339= nctemp9341;
int nctemp9343=LibeStrcmp(nctemp9331,nctemp9339);
int nctemp9314 = (nctemp9329 && nctemp9343);
if(nctemp9314)
{
struct tree* nctemp9345= p;
nctempchar1* nctemp9347= lval;
int nctemp9350=CodeEs(nctemp9345,nctemp9347);
struct tree* nctemp9352= p;
struct nctempchar1 *nctemp9356;
static struct nctempchar1 nctemp9357 = {{ 3}, (char*)"=(\0"};
nctemp9356=&nctemp9357;
nctempchar1* nctemp9354= nctemp9356;
int nctemp9358=CodeEs(nctemp9352,nctemp9354);
struct tree* nctemp9360= p;
nctempchar1* nctemp9362= rval;
int nctemp9365=CodeEs(nctemp9360,nctemp9362);
struct tree* nctemp9367= p;
struct nctempchar1 *nctemp9371;
static struct nctempchar1 nctemp9372 = {{ 5}, (char*)");\n\0"};
nctemp9371=&nctemp9372;
nctempchar1* nctemp9369= nctemp9371;
int nctemp9373=CodeEs(nctemp9367,nctemp9369);
return lval;
}
else{
struct tree* nctemp9377= p;
nctempchar1* nctemp9379= lval;
int nctemp9382=CodeEs(nctemp9377,nctemp9379);
struct tree* nctemp9384= p;
struct nctempchar1 *nctemp9388;
static struct nctempchar1 nctemp9389 = {{ 2}, (char*)"=\0"};
nctemp9388=&nctemp9389;
nctempchar1* nctemp9386= nctemp9388;
int nctemp9390=CodeEs(nctemp9384,nctemp9386);
struct tree* nctemp9392= p;
nctempchar1* nctemp9394= rval;
int nctemp9397=CodeEs(nctemp9392,nctemp9394);
struct tree* nctemp9399= p;
struct nctempchar1 *nctemp9403;
static struct nctempchar1 nctemp9404 = {{ 4}, (char*)";\n\0"};
nctemp9403=&nctemp9404;
nctempchar1* nctemp9401= nctemp9403;
int nctemp9405=CodeEs(nctemp9399,nctemp9401);
return lval;
}
}
else{
struct tree* nctemp9409= p;
nctempchar1* nctemp9411= lval;
int nctemp9414=CodeEs(nctemp9409,nctemp9411);
struct tree* nctemp9416= p;
struct nctempchar1 *nctemp9420;
static struct nctempchar1 nctemp9421 = {{ 2}, (char*)" \0"};
nctemp9420=&nctemp9421;
nctempchar1* nctemp9418= nctemp9420;
int nctemp9422=CodeEs(nctemp9416,nctemp9418);
struct tree* nctemp9424= p;
struct nctempchar1 *nctemp9428;
static struct nctempchar1 nctemp9429 = {{ 2}, (char*)"=\0"};
nctemp9428=&nctemp9429;
nctempchar1* nctemp9426= nctemp9428;
int nctemp9430=CodeEs(nctemp9424,nctemp9426);
struct tree* nctemp9432= p;
nctempchar1* nctemp9434= rval;
int nctemp9437=CodeEs(nctemp9432,nctemp9434);
struct tree* nctemp9439= p;
struct nctempchar1 *nctemp9443;
static struct nctempchar1 nctemp9444 = {{ 4}, (char*)";\n\0"};
nctemp9443=&nctemp9444;
nctempchar1* nctemp9441= nctemp9443;
int nctemp9445=CodeEs(nctemp9439,nctemp9441);
return lval;
}
}
}
else{
struct tree* nctemp9456= p;
nctempchar1* nctemp9458=PtreeGetdef(nctemp9456);
nctempchar1* nctemp9454= nctemp9458;
struct nctempchar1 *nctemp9461;
static struct nctempchar1 nctemp9462 = {{ 3}, (char*)"==\0"};
nctemp9461=&nctemp9462;
nctempchar1* nctemp9459= nctemp9461;
int nctemp9463=LibeStrcmp(nctemp9454,nctemp9459);
int nctemp9451 = (nctemp9463 ==1);
struct tree* nctemp9471= p;
nctempchar1* nctemp9473=PtreeGetdef(nctemp9471);
nctempchar1* nctemp9469= nctemp9473;
struct nctempchar1 *nctemp9476;
static struct nctempchar1 nctemp9477 = {{ 3}, (char*)"!=\0"};
nctemp9476=&nctemp9477;
nctempchar1* nctemp9474= nctemp9476;
int nctemp9478=LibeStrcmp(nctemp9469,nctemp9474);
int nctemp9466 = (nctemp9478 ==1);
int nctemp9448 = (nctemp9451 || nctemp9466);
if(nctemp9448)
{
struct tree* nctemp9485= np;
nctempchar1* nctemp9487=PtreeGetref(nctemp9485);
nctempchar1* nctemp9483= nctemp9487;
struct nctempchar1 *nctemp9490;
static struct nctempchar1 nctemp9491 = {{ 5}, (char*)"aref\0"};
nctemp9490=&nctemp9491;
nctempchar1* nctemp9488= nctemp9490;
int nctemp9492=LibeStrcmp(nctemp9483,nctemp9488);
int nctemp9480 = (nctemp9492 ==1);
if(nctemp9480)
{
sp =np;
struct tree* nctemp9505= np;
struct tree* nctemp9507=PtreeMvsister(nctemp9505);
struct tree* nctemp9503= nctemp9507;
nctempchar1* nctemp9508=PtreeGetname(nctemp9503);
nctempchar1* nctemp9501= nctemp9508;
struct nctempchar1 *nctemp9511;
static struct nctempchar1 nctemp9512 = {{ 10}, (char*)"iconstant\0"};
nctemp9511=&nctemp9512;
nctempchar1* nctemp9509= nctemp9511;
int nctemp9513=LibeStrcmp(nctemp9501,nctemp9509);
struct tree* nctemp9519= np;
struct tree* nctemp9521=PtreeMvsister(nctemp9519);
struct tree* nctemp9517= nctemp9521;
nctempchar1* nctemp9522=PtreeGetdef(nctemp9517);
nctempchar1* nctemp9515= nctemp9522;
struct nctempchar1 *nctemp9525;
static struct nctempchar1 nctemp9526 = {{ 2}, (char*)"0\0"};
nctemp9525=&nctemp9526;
nctempchar1* nctemp9523= nctemp9525;
int nctemp9527=LibeStrcmp(nctemp9515,nctemp9523);
int nctemp9498 = (nctemp9513 && nctemp9527);
if(nctemp9498)
{
struct tree* nctemp9529= p;
struct nctempchar1 *nctemp9533;
static struct nctempchar1 nctemp9534 = {{ 7}, (char*)"nctemp\0"};
nctemp9533=&nctemp9534;
nctempchar1* nctemp9531= nctemp9533;
int nctemp9535=CodeEs(nctemp9529,nctemp9531);
struct tree* nctemp9537= p;
struct tree* nctemp9541= sp;
nctempchar1* nctemp9543=PtreeGetype(nctemp9541);
nctempchar1* nctemp9539= nctemp9543;
int nctemp9544=CodeEs(nctemp9537,nctemp9539);
struct tree* nctemp9548= sp;
int nctemp9550=PtreeGetrank(nctemp9548);
int nctemp9546= nctemp9550;
int nctemp9551=CodeEd(nctemp9546);
struct tree* nctemp9553= p;
struct nctempchar1 *nctemp9557;
static struct nctempchar1 nctemp9558 = {{ 3}, (char*)" *\0"};
nctemp9557=&nctemp9558;
nctempchar1* nctemp9555= nctemp9557;
int nctemp9559=CodeEs(nctemp9553,nctemp9555);
struct tree* nctemp9561= p;
nctempchar1* nctemp9563= tempi;
int nctemp9566=CodeEs(nctemp9561,nctemp9563);
struct tree* nctemp9568= p;
struct nctempchar1 *nctemp9572;
static struct nctempchar1 nctemp9573 = {{ 3}, (char*)" =\0"};
nctemp9572=&nctemp9573;
nctempchar1* nctemp9570= nctemp9572;
int nctemp9574=CodeEs(nctemp9568,nctemp9570);
struct tree* nctemp9576= p;
nctempchar1* nctemp9578= lval;
int nctemp9581=CodeEs(nctemp9576,nctemp9578);
struct tree* nctemp9583= p;
struct nctempchar1 *nctemp9587;
static struct nctempchar1 nctemp9588 = {{ 4}, (char*)";\n\0"};
nctemp9587=&nctemp9588;
nctempchar1* nctemp9585= nctemp9587;
int nctemp9589=CodeEs(nctemp9583,nctemp9585);
struct tree* nctemp9591= p;
nctempchar1* nctemp9593= type;
int nctemp9596=CodeEs(nctemp9591,nctemp9593);
struct tree* nctemp9598= p;
struct nctempchar1 *nctemp9602;
static struct nctempchar1 nctemp9603 = {{ 2}, (char*)" \0"};
nctemp9602=&nctemp9603;
nctempchar1* nctemp9600= nctemp9602;
int nctemp9604=CodeEs(nctemp9598,nctemp9600);
struct tree* nctemp9606= p;
nctempchar1* nctemp9608= tempr;
int nctemp9611=CodeEs(nctemp9606,nctemp9608);
struct tree* nctemp9613= p;
struct nctempchar1 *nctemp9617;
static struct nctempchar1 nctemp9618 = {{ 4}, (char*)" =(\0"};
nctemp9617=&nctemp9618;
nctempchar1* nctemp9615= nctemp9617;
int nctemp9619=CodeEs(nctemp9613,nctemp9615);
struct tree* nctemp9621= p;
nctempchar1* nctemp9623= tempi;
int nctemp9626=CodeEs(nctemp9621,nctemp9623);
struct tree* nctemp9628= p;
struct tree* nctemp9632= p;
nctempchar1* nctemp9634=PtreeGetdef(nctemp9632);
nctempchar1* nctemp9630= nctemp9634;
int nctemp9635=CodeEs(nctemp9628,nctemp9630);
struct tree* nctemp9637= p;
nctempchar1* nctemp9639= rval;
int nctemp9642=CodeEs(nctemp9637,nctemp9639);
struct tree* nctemp9644= p;
struct nctempchar1 *nctemp9648;
static struct nctempchar1 nctemp9649 = {{ 5}, (char*)");\n\0"};
nctemp9648=&nctemp9649;
nctempchar1* nctemp9646= nctemp9648;
int nctemp9650=CodeEs(nctemp9644,nctemp9646);
return tempr;
}
else{
struct tree* nctemp9654= p;
nctempchar1* nctemp9656= type;
int nctemp9659=CodeEs(nctemp9654,nctemp9656);
struct tree* nctemp9661= p;
struct nctempchar1 *nctemp9665;
static struct nctempchar1 nctemp9666 = {{ 2}, (char*)" \0"};
nctemp9665=&nctemp9666;
nctempchar1* nctemp9663= nctemp9665;
int nctemp9667=CodeEs(nctemp9661,nctemp9663);
struct tree* nctemp9669= p;
nctempchar1* nctemp9671= tempr;
int nctemp9674=CodeEs(nctemp9669,nctemp9671);
struct tree* nctemp9676= p;
struct nctempchar1 *nctemp9680;
static struct nctempchar1 nctemp9681 = {{ 5}, (char*)" = (\0"};
nctemp9680=&nctemp9681;
nctempchar1* nctemp9678= nctemp9680;
int nctemp9682=CodeEs(nctemp9676,nctemp9678);
struct tree* nctemp9684= p;
nctempchar1* nctemp9686= lval;
int nctemp9689=CodeEs(nctemp9684,nctemp9686);
struct tree* nctemp9691= p;
struct tree* nctemp9695= p;
nctempchar1* nctemp9697=PtreeGetdef(nctemp9695);
nctempchar1* nctemp9693= nctemp9697;
int nctemp9698=CodeEs(nctemp9691,nctemp9693);
struct tree* nctemp9700= p;
nctempchar1* nctemp9702= rval;
int nctemp9705=CodeEs(nctemp9700,nctemp9702);
struct tree* nctemp9707= p;
struct nctempchar1 *nctemp9711;
static struct nctempchar1 nctemp9712 = {{ 5}, (char*)");\n\0"};
nctemp9711=&nctemp9712;
nctempchar1* nctemp9709= nctemp9711;
int nctemp9713=CodeEs(nctemp9707,nctemp9709);
return lval;
}
}
else{
struct tree* nctemp9717= p;
nctempchar1* nctemp9719= type;
int nctemp9722=CodeEs(nctemp9717,nctemp9719);
struct tree* nctemp9724= p;
struct nctempchar1 *nctemp9728;
static struct nctempchar1 nctemp9729 = {{ 2}, (char*)" \0"};
nctemp9728=&nctemp9729;
nctempchar1* nctemp9726= nctemp9728;
int nctemp9730=CodeEs(nctemp9724,nctemp9726);
struct tree* nctemp9732= p;
nctempchar1* nctemp9734= tempr;
int nctemp9737=CodeEs(nctemp9732,nctemp9734);
struct tree* nctemp9739= p;
struct nctempchar1 *nctemp9743;
static struct nctempchar1 nctemp9744 = {{ 5}, (char*)" = (\0"};
nctemp9743=&nctemp9744;
nctempchar1* nctemp9741= nctemp9743;
int nctemp9745=CodeEs(nctemp9739,nctemp9741);
struct tree* nctemp9747= p;
nctempchar1* nctemp9749= lval;
int nctemp9752=CodeEs(nctemp9747,nctemp9749);
struct tree* nctemp9754= p;
struct nctempchar1 *nctemp9758;
static struct nctempchar1 nctemp9759 = {{ 2}, (char*)" \0"};
nctemp9758=&nctemp9759;
nctempchar1* nctemp9756= nctemp9758;
int nctemp9760=CodeEs(nctemp9754,nctemp9756);
struct tree* nctemp9762= p;
struct tree* nctemp9766= p;
nctempchar1* nctemp9768=PtreeGetdef(nctemp9766);
nctempchar1* nctemp9764= nctemp9768;
int nctemp9769=CodeEs(nctemp9762,nctemp9764);
struct tree* nctemp9771= p;
nctempchar1* nctemp9773= rval;
int nctemp9776=CodeEs(nctemp9771,nctemp9773);
struct tree* nctemp9778= p;
struct nctempchar1 *nctemp9782;
static struct nctempchar1 nctemp9783 = {{ 5}, (char*)");\n\0"};
nctemp9782=&nctemp9783;
nctempchar1* nctemp9780= nctemp9782;
int nctemp9784=CodeEs(nctemp9778,nctemp9780);
return tempr;
}
}
else{
struct tree* nctemp9788= p;
nctempchar1* nctemp9790= type;
int nctemp9793=CodeEs(nctemp9788,nctemp9790);
struct tree* nctemp9795= p;
struct nctempchar1 *nctemp9799;
static struct nctempchar1 nctemp9800 = {{ 2}, (char*)" \0"};
nctemp9799=&nctemp9800;
nctempchar1* nctemp9797= nctemp9799;
int nctemp9801=CodeEs(nctemp9795,nctemp9797);
struct tree* nctemp9803= p;
nctempchar1* nctemp9805= tempr;
int nctemp9808=CodeEs(nctemp9803,nctemp9805);
struct tree* nctemp9810= p;
struct nctempchar1 *nctemp9814;
static struct nctempchar1 nctemp9815 = {{ 5}, (char*)" = (\0"};
nctemp9814=&nctemp9815;
nctempchar1* nctemp9812= nctemp9814;
int nctemp9816=CodeEs(nctemp9810,nctemp9812);
struct tree* nctemp9818= p;
nctempchar1* nctemp9820= lval;
int nctemp9823=CodeEs(nctemp9818,nctemp9820);
struct tree* nctemp9825= p;
struct nctempchar1 *nctemp9829;
static struct nctempchar1 nctemp9830 = {{ 2}, (char*)" \0"};
nctemp9829=&nctemp9830;
nctempchar1* nctemp9827= nctemp9829;
int nctemp9831=CodeEs(nctemp9825,nctemp9827);
struct tree* nctemp9833= p;
struct tree* nctemp9837= p;
nctempchar1* nctemp9839=PtreeGetdef(nctemp9837);
nctempchar1* nctemp9835= nctemp9839;
int nctemp9840=CodeEs(nctemp9833,nctemp9835);
struct tree* nctemp9842= p;
struct nctempchar1 *nctemp9846;
static struct nctempchar1 nctemp9847 = {{ 2}, (char*)" \0"};
nctemp9846=&nctemp9847;
nctempchar1* nctemp9844= nctemp9846;
int nctemp9848=CodeEs(nctemp9842,nctemp9844);
struct tree* nctemp9850= p;
nctempchar1* nctemp9852= rval;
int nctemp9855=CodeEs(nctemp9850,nctemp9852);
struct tree* nctemp9857= p;
struct nctempchar1 *nctemp9861;
static struct nctempchar1 nctemp9862 = {{ 5}, (char*)");\n\0"};
nctemp9861=&nctemp9862;
nctempchar1* nctemp9859= nctemp9861;
int nctemp9863=CodeEs(nctemp9857,nctemp9859);
return tempr;
}
}
}
}
else{
struct tree* nctemp9867= p;
nctempchar1* nctemp9869=CodeUnexpr(nctemp9867);
return nctemp9869;
}
}
nctempchar1 * CodeExpr (struct tree* p)
{
struct tree* sp;
nctempchar1 *rval;
struct tree* nctemp9874= p;
struct tree* nctemp9876=PtreeMvchild(nctemp9874);
sp =nctemp9876;
struct tree* nctemp9882= sp;
nctempchar1* nctemp9884=CodeBinexpr(nctemp9882);
rval=nctemp9884;
return rval;
}
int CodeWhilestmnt (struct tree* p)
{
nctempchar1 *cond;
nctempchar1 *tmp;
nctempchar1 *cond2;
struct tree* sp;
struct tree* nctemp9891= p;
struct tree* nctemp9893=PtreeMvchild(nctemp9891);
p =nctemp9893;
sp =p;
struct tree* nctemp9903= sp;
nctempchar1* nctemp9905=CodeExpr(nctemp9903);
cond=nctemp9905;
nctempchar1* nctemp9911=CodeMktemp();
tmp=nctemp9911;
struct tree* nctemp9913= p;
struct tree* nctemp9917= sp;
nctempchar1* nctemp9919=PtreeGetype(nctemp9917);
nctempchar1* nctemp9915= nctemp9919;
int nctemp9920=CodeEs(nctemp9913,nctemp9915);
struct tree* nctemp9922= p;
struct nctempchar1 *nctemp9926;
static struct nctempchar1 nctemp9927 = {{ 2}, (char*)" \0"};
nctemp9926=&nctemp9927;
nctempchar1* nctemp9924= nctemp9926;
int nctemp9928=CodeEs(nctemp9922,nctemp9924);
struct tree* nctemp9930= p;
nctempchar1* nctemp9932= tmp;
int nctemp9935=CodeEs(nctemp9930,nctemp9932);
struct tree* nctemp9937= p;
struct nctempchar1 *nctemp9941;
static struct nctempchar1 nctemp9942 = {{ 2}, (char*)"=\0"};
nctemp9941=&nctemp9942;
nctempchar1* nctemp9939= nctemp9941;
int nctemp9943=CodeEs(nctemp9937,nctemp9939);
struct tree* nctemp9945= p;
nctempchar1* nctemp9947= cond;
int nctemp9950=CodeEs(nctemp9945,nctemp9947);
struct tree* nctemp9952= p;
struct nctempchar1 *nctemp9956;
static struct nctempchar1 nctemp9957 = {{ 4}, (char*)";\n\0"};
nctemp9956=&nctemp9957;
nctempchar1* nctemp9954= nctemp9956;
int nctemp9958=CodeEs(nctemp9952,nctemp9954);
struct tree* nctemp9960= p;
struct nctempchar1 *nctemp9964;
static struct nctempchar1 nctemp9965 = {{ 7}, (char*)"while(\0"};
nctemp9964=&nctemp9965;
nctempchar1* nctemp9962= nctemp9964;
int nctemp9966=CodeEs(nctemp9960,nctemp9962);
struct tree* nctemp9968= p;
nctempchar1* nctemp9970= tmp;
int nctemp9973=CodeEs(nctemp9968,nctemp9970);
struct tree* nctemp9975= p;
struct nctempchar1 *nctemp9979;
static struct nctempchar1 nctemp9980 = {{ 4}, (char*)")\n\0"};
nctemp9979=&nctemp9980;
nctempchar1* nctemp9977= nctemp9979;
int nctemp9981=CodeEs(nctemp9975,nctemp9977);
struct tree* nctemp9983= p;
struct nctempchar1 *nctemp9987;
static struct nctempchar1 nctemp9988 = {{ 2}, (char*)"{\0"};
nctemp9987=&nctemp9988;
nctempchar1* nctemp9985= nctemp9987;
int nctemp9989=CodeEs(nctemp9983,nctemp9985);
struct tree* nctemp9994= p;
struct tree* nctemp9996=PtreeMvsister(nctemp9994);
p =nctemp9996;
struct tree* nctemp9998= p;
int nctemp10000=CodeStmnt(nctemp9998);
struct tree* nctemp10006= sp;
nctempchar1* nctemp10008=CodeExpr(nctemp10006);
cond2=nctemp10008;
struct tree* nctemp10010= p;
nctempchar1* nctemp10012= tmp;
int nctemp10015=CodeEs(nctemp10010,nctemp10012);
struct tree* nctemp10017= p;
struct nctempchar1 *nctemp10021;
static struct nctempchar1 nctemp10022 = {{ 2}, (char*)"=\0"};
nctemp10021=&nctemp10022;
nctempchar1* nctemp10019= nctemp10021;
int nctemp10023=CodeEs(nctemp10017,nctemp10019);
struct tree* nctemp10025= p;
nctempchar1* nctemp10027= cond2;
int nctemp10030=CodeEs(nctemp10025,nctemp10027);
struct tree* nctemp10032= p;
struct nctempchar1 *nctemp10036;
static struct nctempchar1 nctemp10037 = {{ 2}, (char*)";\0"};
nctemp10036=&nctemp10037;
nctempchar1* nctemp10034= nctemp10036;
int nctemp10038=CodeEs(nctemp10032,nctemp10034);
struct tree* nctemp10040= p;
struct nctempchar1 *nctemp10044;
static struct nctempchar1 nctemp10045 = {{ 2}, (char*)"}\0"};
nctemp10044=&nctemp10045;
nctempchar1* nctemp10042= nctemp10044;
int nctemp10046=CodeEs(nctemp10040,nctemp10042);
return 1;
}
int CodeForstmnt (struct tree* p)
{
struct tree* sp;
struct tree* np;
nctempchar1 *cond;
nctempchar1 *tmp;
struct tree* nctemp10052= p;
struct tree* nctemp10054=PtreeMvchild(nctemp10052);
p =nctemp10054;
struct tree* nctemp10056= p;
nctempchar1* nctemp10058=CodeExpr(nctemp10056);
struct tree* nctemp10063= p;
struct tree* nctemp10065=PtreeMvsister(nctemp10063);
p =nctemp10065;
np =p;
struct tree* nctemp10075= p;
nctempchar1* nctemp10077=CodeExpr(nctemp10075);
cond=nctemp10077;
struct tree* nctemp10079= p;
struct nctempchar1 *nctemp10083;
static struct nctempchar1 nctemp10084 = {{ 7}, (char*)"while(\0"};
nctemp10083=&nctemp10084;
nctempchar1* nctemp10081= nctemp10083;
int nctemp10085=CodeEs(nctemp10079,nctemp10081);
struct tree* nctemp10087= p;
nctempchar1* nctemp10089= cond;
int nctemp10092=CodeEs(nctemp10087,nctemp10089);
struct tree* nctemp10094= p;
struct nctempchar1 *nctemp10098;
static struct nctempchar1 nctemp10099 = {{ 5}, (char*)"){\n\0"};
nctemp10098=&nctemp10099;
nctempchar1* nctemp10096= nctemp10098;
int nctemp10100=CodeEs(nctemp10094,nctemp10096);
struct tree* nctemp10105= p;
struct tree* nctemp10107=PtreeMvsister(nctemp10105);
p =nctemp10107;
sp =p;
struct tree* nctemp10116= p;
struct tree* nctemp10118=PtreeMvsister(nctemp10116);
p =nctemp10118;
struct tree* nctemp10120= p;
int nctemp10122=CodeStmnt(nctemp10120);
struct tree* nctemp10124= sp;
nctempchar1* nctemp10126=CodeExpr(nctemp10124);
struct tree* nctemp10132= np;
nctempchar1* nctemp10134=CodeExpr(nctemp10132);
tmp=nctemp10134;
struct tree* nctemp10136= p;
nctempchar1* nctemp10138= cond;
int nctemp10141=CodeEs(nctemp10136,nctemp10138);
struct tree* nctemp10143= p;
struct nctempchar1 *nctemp10147;
static struct nctempchar1 nctemp10148 = {{ 2}, (char*)"=\0"};
nctemp10147=&nctemp10148;
nctempchar1* nctemp10145= nctemp10147;
int nctemp10149=CodeEs(nctemp10143,nctemp10145);
struct tree* nctemp10151= p;
nctempchar1* nctemp10153= tmp;
int nctemp10156=CodeEs(nctemp10151,nctemp10153);
struct tree* nctemp10158= p;
struct nctempchar1 *nctemp10162;
static struct nctempchar1 nctemp10163 = {{ 4}, (char*)";\n\0"};
nctemp10162=&nctemp10163;
nctempchar1* nctemp10160= nctemp10162;
int nctemp10164=CodeEs(nctemp10158,nctemp10160);
struct tree* nctemp10166= p;
struct nctempchar1 *nctemp10170;
static struct nctempchar1 nctemp10171 = {{ 4}, (char*)"}\n\0"};
nctemp10170=&nctemp10171;
nctempchar1* nctemp10168= nctemp10170;
int nctemp10172=CodeEs(nctemp10166,nctemp10168);
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
int nctemp10186 = level + 1;
level =nctemp10186;
int nctemp10187 = (p ==0);
if(nctemp10187)
{
return 1;
}
struct tree* nctemp10196= p;
struct tree* nctemp10198=PtreeMvsister(nctemp10196);
p =nctemp10198;
struct tree* nctemp10200= p;
int nctemp10202= level;
int nctemp10204= rank;
int nctemp10206=CodeParallelfor(nctemp10200,nctemp10202,nctemp10204);
struct tree* nctemp10211= sp;
struct tree* nctemp10213=PtreeMvchild(nctemp10211);
rp =nctemp10213;
struct tree* nctemp10218= rp;
struct tree* nctemp10220=PtreeMvchild(nctemp10218);
qp =nctemp10220;
struct tree* nctemp10225= qp;
struct tree* nctemp10227=PtreeMvchild(nctemp10225);
qp =nctemp10227;
struct tree* nctemp10233= qp;
nctempchar1* nctemp10235=PtreeGetdef(nctemp10233);
index=nctemp10235;
struct tree* nctemp10243= qp;
struct tree* nctemp10245=PtreeMvsister(nctemp10243);
struct tree* nctemp10241= nctemp10245;
nctempchar1* nctemp10246=CodeBinexpr(nctemp10241);
init=nctemp10246;
struct tree* nctemp10251= rp;
struct tree* nctemp10253=PtreeMvsister(nctemp10251);
rrp =nctemp10253;
struct tree* nctemp10259= rrp;
nctempchar1* nctemp10261=CodeExpr(nctemp10259);
cond=nctemp10261;
int nctemp10262 = (level ==rank);
if(nctemp10262)
{
struct tree* nctemp10267= p;
struct nctempchar1 *nctemp10271;
static struct nctempchar1 nctemp10272 = {{ 30}, (char*)"\n #pragma omp parallel for\n\0"};
nctemp10271=&nctemp10272;
nctempchar1* nctemp10269= nctemp10271;
int nctemp10273=CodeEs(nctemp10267,nctemp10269);
}
struct tree* nctemp10275= rp;
struct nctempchar1 *nctemp10279;
static struct nctempchar1 nctemp10280 = {{ 5}, (char*)"for(\0"};
nctemp10279=&nctemp10280;
nctempchar1* nctemp10277= nctemp10279;
int nctemp10281=CodeEs(nctemp10275,nctemp10277);
struct tree* nctemp10283= rp;
nctempchar1* nctemp10285= index;
int nctemp10288=CodeEs(nctemp10283,nctemp10285);
struct tree* nctemp10290= rp;
struct nctempchar1 *nctemp10294;
static struct nctempchar1 nctemp10295 = {{ 2}, (char*)"=\0"};
nctemp10294=&nctemp10295;
nctempchar1* nctemp10292= nctemp10294;
int nctemp10296=CodeEs(nctemp10290,nctemp10292);
struct tree* nctemp10298= rp;
nctempchar1* nctemp10300= init;
int nctemp10303=CodeEs(nctemp10298,nctemp10300);
struct tree* nctemp10305= rp;
struct nctempchar1 *nctemp10309;
static struct nctempchar1 nctemp10310 = {{ 2}, (char*)";\0"};
nctemp10309=&nctemp10310;
nctempchar1* nctemp10307= nctemp10309;
int nctemp10311=CodeEs(nctemp10305,nctemp10307);
struct tree* nctemp10316= rp;
struct tree* nctemp10318=PtreeMvsister(nctemp10316);
rp =nctemp10318;
struct tree* nctemp10320= rp;
nctempchar1* nctemp10322= index;
int nctemp10325=CodeEs(nctemp10320,nctemp10322);
struct tree* nctemp10327= rp;
struct nctempchar1 *nctemp10331;
static struct nctempchar1 nctemp10332 = {{ 2}, (char*)"<\0"};
nctemp10331=&nctemp10332;
nctempchar1* nctemp10329= nctemp10331;
int nctemp10333=CodeEs(nctemp10327,nctemp10329);
struct tree* nctemp10335= p;
nctempchar1* nctemp10337= cond;
int nctemp10340=CodeEs(nctemp10335,nctemp10337);
struct tree* nctemp10342= rp;
struct nctempchar1 *nctemp10346;
static struct nctempchar1 nctemp10347 = {{ 2}, (char*)";\0"};
nctemp10346=&nctemp10347;
nctempchar1* nctemp10344= nctemp10346;
int nctemp10348=CodeEs(nctemp10342,nctemp10344);
struct tree* nctemp10356= rp;
struct tree* nctemp10358=PtreeMvsister(nctemp10356);
rp =nctemp10358;
int nctemp10349 = (rp !=0);
if(nctemp10349)
{
struct tree* nctemp10361= rp;
nctempchar1* nctemp10363= index;
int nctemp10366=CodeEs(nctemp10361,nctemp10363);
struct tree* nctemp10368= rp;
struct nctempchar1 *nctemp10372;
static struct nctempchar1 nctemp10373 = {{ 2}, (char*)"=\0"};
nctemp10372=&nctemp10373;
nctempchar1* nctemp10370= nctemp10372;
int nctemp10374=CodeEs(nctemp10368,nctemp10370);
struct tree* nctemp10376= rp;
nctempchar1* nctemp10378= index;
int nctemp10381=CodeEs(nctemp10376,nctemp10378);
struct tree* nctemp10383= rp;
struct nctempchar1 *nctemp10387;
static struct nctempchar1 nctemp10388 = {{ 2}, (char*)"+\0"};
nctemp10387=&nctemp10388;
nctempchar1* nctemp10385= nctemp10387;
int nctemp10389=CodeEs(nctemp10383,nctemp10385);
struct tree* nctemp10391= rp;
nctempchar1* nctemp10393=CodeExpr(nctemp10391);
}
else{
struct tree* nctemp10395= rp;
nctempchar1* nctemp10397= index;
int nctemp10400=CodeEs(nctemp10395,nctemp10397);
struct tree* nctemp10402= rp;
struct nctempchar1 *nctemp10406;
static struct nctempchar1 nctemp10407 = {{ 2}, (char*)"=\0"};
nctemp10406=&nctemp10407;
nctempchar1* nctemp10404= nctemp10406;
int nctemp10408=CodeEs(nctemp10402,nctemp10404);
struct tree* nctemp10410= rp;
nctempchar1* nctemp10412= index;
int nctemp10415=CodeEs(nctemp10410,nctemp10412);
struct tree* nctemp10417= rp;
struct nctempchar1 *nctemp10421;
static struct nctempchar1 nctemp10422 = {{ 2}, (char*)"+\0"};
nctemp10421=&nctemp10422;
nctempchar1* nctemp10419= nctemp10421;
int nctemp10423=CodeEs(nctemp10417,nctemp10419);
struct tree* nctemp10425= rp;
struct nctempchar1 *nctemp10429;
static struct nctempchar1 nctemp10430 = {{ 2}, (char*)"1\0"};
nctemp10429=&nctemp10430;
nctempchar1* nctemp10427= nctemp10429;
int nctemp10431=CodeEs(nctemp10425,nctemp10427);
}
struct tree* nctemp10433= rp;
struct nctempchar1 *nctemp10437;
static struct nctempchar1 nctemp10438 = {{ 3}, (char*)"){\0"};
nctemp10437=&nctemp10438;
nctempchar1* nctemp10435= nctemp10437;
int nctemp10439=CodeEs(nctemp10433,nctemp10435);
return 1;
}
int CodeParallelstmntcpu (struct tree* p)
{
struct tree* sp;
int rank;
int i;
sp =p;
struct tree* nctemp10449= sp;
int nctemp10451=PtreeGetrank(nctemp10449);
rank =nctemp10451;
struct tree* nctemp10456= p;
struct tree* nctemp10458=PtreeMvchild(nctemp10456);
p =nctemp10458;
struct tree* nctemp10463= p;
struct tree* nctemp10465=PtreeMvchild(nctemp10463);
p =nctemp10465;
struct tree* nctemp10467= p;
int nctemp10469= 0;
int nctemp10471= rank;
int nctemp10473=CodeParallelfor(nctemp10467,nctemp10469,nctemp10471);
struct tree* nctemp10478= sp;
struct tree* nctemp10480=PtreeMvchild(nctemp10478);
sp =nctemp10480;
struct tree* nctemp10485= sp;
struct tree* nctemp10487=PtreeMvsister(nctemp10485);
sp =nctemp10487;
struct tree* nctemp10489= sp;
int nctemp10491=CodeStmnt(nctemp10489);
i =0;
int nctemp10496 = (i < rank);
while(nctemp10496){
{
struct tree* nctemp10501= sp;
struct nctempchar1 *nctemp10505;
static struct nctempchar1 nctemp10506 = {{ 2}, (char*)"}\0"};
nctemp10505=&nctemp10506;
nctempchar1* nctemp10503= nctemp10505;
int nctemp10507=CodeEs(nctemp10501,nctemp10503);
}
int nctemp10516 = i + 1;
i =nctemp10516;
int nctemp10517 = (i < rank);
nctemp10496=nctemp10517;
}
return 1;
}
nctempchar1 * CodeParprocno (struct tree* p)
{
struct tree* nctemp10523= p;
struct nctempchar1 *nctemp10527;
static struct nctempchar1 nctemp10528 = {{ 13}, (char*)"int nctempno\0"};
nctemp10527=&nctemp10528;
nctempchar1* nctemp10525= nctemp10527;
int nctemp10529=CodeEs(nctemp10523,nctemp10525);
struct tree* nctemp10531= p;
struct nctempchar1 *nctemp10535;
static struct nctempchar1 nctemp10536 = {{ 39}, (char*)"=blockIdx.x*blockDim.x + threadIdx.x; \0"};
nctemp10535=&nctemp10536;
nctempchar1* nctemp10533= nctemp10535;
int nctemp10537=CodeEs(nctemp10531,nctemp10533);
struct nctempchar1 *nctemp10539;
static struct nctempchar1 nctemp10540 = {{ 9}, (char*)"nctempno\0"};
nctemp10539=&nctemp10540;
return nctemp10539;
}
nctempchar1 * CodeParidx (struct tree* p)
{
struct tree* nctemp10545= p;
struct tree* nctemp10547=PtreeMvchild(nctemp10545);
p =nctemp10547;
struct tree* nctemp10552= p;
struct tree* nctemp10554=PtreeMvchild(nctemp10552);
p =nctemp10554;
struct tree* nctemp10559= p;
struct tree* nctemp10561=PtreeMvchild(nctemp10559);
p =nctemp10561;
struct tree* nctemp10563= p;
nctempchar1* nctemp10565=PtreeGetdef(nctemp10563);
return nctemp10565;
}
nctempchar1 * CodeParidxrank (struct tree* p,int r)
{
int i;
i =0;
int nctemp10578 = r - 1;
int nctemp10570 = (i < nctemp10578);
while(nctemp10570){
{
struct tree* nctemp10583= p;
struct tree* nctemp10585=PtreeMvsister(nctemp10583);
p =nctemp10585;
}
int nctemp10594 = i + 1;
i =nctemp10594;
int nctemp10603 = r - 1;
int nctemp10595 = (i < nctemp10603);
nctemp10570=nctemp10595;
}
struct tree* nctemp10605= p;
nctempchar1* nctemp10607=CodeParidx(nctemp10605);
return nctemp10607;
}
nctempchar1 * CodeParllim (struct tree* p)
{
nctempchar1 *tmp;
nctempchar1 *temp;
struct tree* nctemp10612= p;
struct tree* nctemp10614=PtreeMvchild(nctemp10612);
p =nctemp10614;
struct tree* nctemp10620= p;
nctempchar1* nctemp10622=CodeExpr(nctemp10620);
tmp=nctemp10622;
nctempchar1* nctemp10628=CodeMktemp();
temp=nctemp10628;
struct tree* nctemp10630= p;
struct nctempchar1 *nctemp10634;
static struct nctempchar1 nctemp10635 = {{ 5}, (char*)"int \0"};
nctemp10634=&nctemp10635;
nctempchar1* nctemp10632= nctemp10634;
int nctemp10636=CodeEs(nctemp10630,nctemp10632);
struct tree* nctemp10638= p;
nctempchar1* nctemp10640= temp;
int nctemp10643=CodeEs(nctemp10638,nctemp10640);
struct tree* nctemp10645= p;
struct nctempchar1 *nctemp10649;
static struct nctempchar1 nctemp10650 = {{ 2}, (char*)"=\0"};
nctemp10649=&nctemp10650;
nctempchar1* nctemp10647= nctemp10649;
int nctemp10651=CodeEs(nctemp10645,nctemp10647);
struct tree* nctemp10653= p;
nctempchar1* nctemp10655= tmp;
int nctemp10658=CodeEs(nctemp10653,nctemp10655);
struct tree* nctemp10660= p;
struct nctempchar1 *nctemp10664;
static struct nctempchar1 nctemp10665 = {{ 4}, (char*)";\n\0"};
nctemp10664=&nctemp10665;
nctempchar1* nctemp10662= nctemp10664;
int nctemp10666=CodeEs(nctemp10660,nctemp10662);
return temp;
}
nctempchar1 * CodeParulim (struct tree* p)
{
struct tree* nctemp10673= p;
struct tree* nctemp10675=PtreeMvchild(nctemp10673);
p =nctemp10675;
struct tree* nctemp10680= p;
struct tree* nctemp10682=PtreeMvsister(nctemp10680);
p =nctemp10682;
struct tree* nctemp10684= p;
nctempchar1* nctemp10686=CodeExpr(nctemp10684);
return nctemp10686;
}
nctempchar1 * CodeParllimrank (struct tree* p,int r)
{
int i;
i =0;
int nctemp10699 = r - 1;
int nctemp10691 = (i < nctemp10699);
while(nctemp10691){
{
struct tree* nctemp10704= p;
struct tree* nctemp10706=PtreeMvsister(nctemp10704);
p =nctemp10706;
}
int nctemp10715 = i + 1;
i =nctemp10715;
int nctemp10724 = r - 1;
int nctemp10716 = (i < nctemp10724);
nctemp10691=nctemp10716;
}
struct tree* nctemp10726= p;
nctempchar1* nctemp10728=CodeParllim(nctemp10726);
return nctemp10728;
}
nctempchar1 * CodeParulimrank (struct tree* p,int r)
{
int i;
i =0;
int nctemp10741 = r - 1;
int nctemp10733 = (i < nctemp10741);
while(nctemp10733){
{
struct tree* nctemp10746= p;
struct tree* nctemp10748=PtreeMvsister(nctemp10746);
p =nctemp10748;
}
int nctemp10757 = i + 1;
i =nctemp10757;
int nctemp10766 = r - 1;
int nctemp10758 = (i < nctemp10766);
nctemp10733=nctemp10758;
}
struct tree* nctemp10768= p;
nctempchar1* nctemp10770=CodeParulim(nctemp10768);
return nctemp10770;
}
nctempchar1 * CodeParlen (struct tree* p,nctempchar1 *llim)
{
nctempchar1 *tmp1;
nctempchar1 *tmp2;
nctempchar1 *tmp3;
nctempchar1* nctemp10776=CodeMktemp();
tmp1=nctemp10776;
struct tree* nctemp10782= p;
nctempchar1* nctemp10784=CodeParulim(nctemp10782);
tmp2=nctemp10784;
struct tree* nctemp10790= p;
nctempchar1* nctemp10792=CodeParllim(nctemp10790);
tmp3=nctemp10792;
struct tree* nctemp10794= p;
struct nctempchar1 *nctemp10798;
static struct nctempchar1 nctemp10799 = {{ 5}, (char*)"int \0"};
nctemp10798=&nctemp10799;
nctempchar1* nctemp10796= nctemp10798;
int nctemp10800=CodeEs(nctemp10794,nctemp10796);
struct tree* nctemp10802= p;
nctempchar1* nctemp10804= tmp1;
int nctemp10807=CodeEs(nctemp10802,nctemp10804);
struct tree* nctemp10809= p;
struct nctempchar1 *nctemp10813;
static struct nctempchar1 nctemp10814 = {{ 2}, (char*)"=\0"};
nctemp10813=&nctemp10814;
nctempchar1* nctemp10811= nctemp10813;
int nctemp10815=CodeEs(nctemp10809,nctemp10811);
struct tree* nctemp10817= p;
nctempchar1* nctemp10819= tmp2;
int nctemp10822=CodeEs(nctemp10817,nctemp10819);
struct tree* nctemp10824= p;
struct nctempchar1 *nctemp10828;
static struct nctempchar1 nctemp10829 = {{ 2}, (char*)"-\0"};
nctemp10828=&nctemp10829;
nctempchar1* nctemp10826= nctemp10828;
int nctemp10830=CodeEs(nctemp10824,nctemp10826);
struct tree* nctemp10832= p;
nctempchar1* nctemp10834= tmp3;
int nctemp10837=CodeEs(nctemp10832,nctemp10834);
struct tree* nctemp10839= p;
struct nctempchar1 *nctemp10843;
static struct nctempchar1 nctemp10844 = {{ 4}, (char*)";\n\0"};
nctemp10843=&nctemp10844;
nctempchar1* nctemp10841= nctemp10843;
int nctemp10845=CodeEs(nctemp10839,nctemp10841);
nctempchar1* nctemp10849= tmp3;
nctempchar1* nctemp10852= llim;
int nctemp10855=LibeStrcpy(nctemp10849,nctemp10852);
int nctemp10846 = (nctemp10855 ==0);
if(nctemp10846)
{
struct nctempchar1 *nctemp10860;
static struct nctempchar1 nctemp10861 = {{ 31}, (char*)"Internal error in CodeParlen\n\0"};
nctemp10860=&nctemp10861;
nctempchar1* nctemp10858= nctemp10860;
int nctemp10862=CodeError(nctemp10858);
}
return tmp1;
}
nctempchar1 * CodeParlenrank (struct tree* p,int r,nctempchar1 *llim)
{
int i;
nctempchar1 *tmp;
i =0;
int nctemp10877 = r - 1;
int nctemp10869 = (i < nctemp10877);
while(nctemp10869){
{
struct tree* nctemp10882= p;
struct tree* nctemp10884=PtreeMvsister(nctemp10882);
p =nctemp10884;
}
int nctemp10893 = i + 1;
i =nctemp10893;
int nctemp10902 = r - 1;
int nctemp10894 = (i < nctemp10902);
nctemp10869=nctemp10894;
}
struct tree* nctemp10908= p;
nctempchar1* nctemp10910= llim;
nctempchar1* nctemp10913=CodeParlen(nctemp10908,nctemp10910);
tmp=nctemp10913;
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
int nctemp10920=m->d[0];r =nctemp10920;
nctempchar1* nctemp10929=CodeMktemp();
nsize=nctemp10929;
struct tree* nctemp10931= p;
struct nctempchar1 *nctemp10935;
static struct nctempchar1 nctemp10936 = {{ 5}, (char*)"int \0"};
nctemp10935=&nctemp10936;
nctempchar1* nctemp10933= nctemp10935;
int nctemp10937=CodeEs(nctemp10931,nctemp10933);
struct tree* nctemp10939= p;
nctempchar1* nctemp10941= nsize;
int nctemp10944=CodeEs(nctemp10939,nctemp10941);
struct tree* nctemp10946= p;
struct nctempchar1 *nctemp10950;
static struct nctempchar1 nctemp10951 = {{ 2}, (char*)"=\0"};
nctemp10950=&nctemp10951;
nctempchar1* nctemp10948= nctemp10950;
int nctemp10952=CodeEs(nctemp10946,nctemp10948);
i =0;
int nctemp10957 = (i < r);
while(nctemp10957){
{
int nctemp10969 = r - 1;
int nctemp10961 = (i ==nctemp10969);
if(nctemp10961)
{
struct tree* nctemp10971= p;
int nctemp10975=i;
nctempchar1* nctemp10973= m->a[nctemp10975].s;
int nctemp10978=CodeEs(nctemp10971,nctemp10973);
struct tree* nctemp10980= p;
struct nctempchar1 *nctemp10984;
static struct nctempchar1 nctemp10985 = {{ 4}, (char*)";\n\0"};
nctemp10984=&nctemp10985;
nctempchar1* nctemp10982= nctemp10984;
int nctemp10986=CodeEs(nctemp10980,nctemp10982);
}
else{
struct tree* nctemp10988= p;
int nctemp10992=i;
nctempchar1* nctemp10990= m->a[nctemp10992].s;
int nctemp10995=CodeEs(nctemp10988,nctemp10990);
struct tree* nctemp10997= p;
struct nctempchar1 *nctemp11001;
static struct nctempchar1 nctemp11002 = {{ 2}, (char*)"*\0"};
nctemp11001=&nctemp11002;
nctempchar1* nctemp10999= nctemp11001;
int nctemp11003=CodeEs(nctemp10997,nctemp10999);
}
}
int nctemp11012 = i + 1;
i =nctemp11012;
int nctemp11013 = (i < r);
nctemp10957=nctemp11013;
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
int nctemp11020= 1;
int nctemp11022=CodeSetparallel(nctemp11020);
sp =p;
struct tree* nctemp11031= p;
int nctemp11033=PtreeGetrank(nctemp11031);
rank =nctemp11033;
int nctemp11040=rank;
struct nctempcharr1 *nctemp11039;
nctemp11039=(struct nctempcharr1*)RunMalloc(sizeof(struct nctempcharr1));
nctemp11039->d[0]=rank;
nctemp11039->a=(struct charr*)RunMalloc(sizeof(struct charr)*nctemp11040);
m=nctemp11039;
int nctemp11049=rank;
struct nctempcharr1 *nctemp11048;
nctemp11048=(struct nctempcharr1*)RunMalloc(sizeof(struct nctempcharr1));
nctemp11048->d[0]=rank;
nctemp11048->a=(struct charr*)RunMalloc(sizeof(struct charr)*nctemp11049);
i=nctemp11048;
int nctemp11058=rank;
struct nctempcharr1 *nctemp11057;
nctemp11057=(struct nctempcharr1*)RunMalloc(sizeof(struct nctempcharr1));
nctemp11057->d[0]=rank;
nctemp11057->a=(struct charr*)RunMalloc(sizeof(struct charr)*nctemp11058);
nl=nctemp11057;
struct tree* nctemp11065= p;
struct tree* nctemp11067=PtreeMvchild(nctemp11065);
p =nctemp11067;
struct tree* nctemp11072= p;
struct tree* nctemp11074=PtreeMvchild(nctemp11072);
slice =nctemp11074;
struct tree* nctemp11076= p;
struct nctempchar1 *nctemp11080;
static struct nctempchar1 nctemp11081 = {{ 4}, (char*)"{\n\0"};
nctemp11080=&nctemp11081;
nctempchar1* nctemp11078= nctemp11080;
int nctemp11082=CodeEs(nctemp11076,nctemp11078);
struct tree* nctemp11088= slice;
nctempchar1* nctemp11090=CodeParprocno(nctemp11088);
pno=nctemp11090;
l =0;
int nctemp11095 = (l < rank);
while(nctemp11095){
{
int nctemp11102=l;
struct tree* nctemp11106= slice;
int nctemp11113 = l + 1;
int nctemp11108= nctemp11113;
nctempchar1* nctemp11114=CodeParidxrank(nctemp11106,nctemp11108);
i->a[nctemp11102].s=nctemp11114;
int nctemp11118=l;
int nctemp11123=4096;
nctempchar1 *nctemp11122;
nctemp11122=(nctempchar1*)RunMalloc(sizeof(nctempchar1));
nctemp11122->d[0]=4096;
nctemp11122->a=(char *)RunMalloc(sizeof(char)*nctemp11123);
nl->a[nctemp11118].s=nctemp11122;
int nctemp11129=l;
struct tree* nctemp11133= slice;
int nctemp11140 = l + 1;
int nctemp11135= nctemp11140;
int nctemp11143=l;
nctempchar1* nctemp11141= nl->a[nctemp11143].s;
nctempchar1* nctemp11146=CodeParlenrank(nctemp11133,nctemp11135,nctemp11141);
m->a[nctemp11129].s=nctemp11146;
}
int nctemp11155 = l + 1;
l =nctemp11155;
int nctemp11156 = (l < rank);
nctemp11095=nctemp11156;
}
struct tree* nctemp11165= p;
nctempcharr1* nctemp11167= m;
nctempchar1* nctemp11170=CodeParnsize(nctemp11165,nctemp11167);
nmax=nctemp11170;
struct tree* nctemp11172= p;
struct nctempchar1 *nctemp11176;
static struct nctempchar1 nctemp11177 = {{ 5}, (char*)"for(\0"};
nctemp11176=&nctemp11177;
nctempchar1* nctemp11174= nctemp11176;
int nctemp11178=CodeEs(nctemp11172,nctemp11174);
struct tree* nctemp11180= p;
nctempchar1* nctemp11182= pno;
int nctemp11185=CodeEs(nctemp11180,nctemp11182);
struct tree* nctemp11187= p;
struct nctempchar1 *nctemp11191;
static struct nctempchar1 nctemp11192 = {{ 39}, (char*)"=blockIdx.x*blockDim.x + threadIdx.x; \0"};
nctemp11191=&nctemp11192;
nctempchar1* nctemp11189= nctemp11191;
int nctemp11193=CodeEs(nctemp11187,nctemp11189);
struct tree* nctemp11195= p;
nctempchar1* nctemp11197= pno;
int nctemp11200=CodeEs(nctemp11195,nctemp11197);
struct tree* nctemp11202= p;
struct nctempchar1 *nctemp11206;
static struct nctempchar1 nctemp11207 = {{ 2}, (char*)"<\0"};
nctemp11206=&nctemp11207;
nctempchar1* nctemp11204= nctemp11206;
int nctemp11208=CodeEs(nctemp11202,nctemp11204);
struct tree* nctemp11210= p;
nctempchar1* nctemp11212= nmax;
int nctemp11215=CodeEs(nctemp11210,nctemp11212);
struct tree* nctemp11217= p;
struct nctempchar1 *nctemp11221;
static struct nctempchar1 nctemp11222 = {{ 2}, (char*)";\0"};
nctemp11221=&nctemp11222;
nctempchar1* nctemp11219= nctemp11221;
int nctemp11223=CodeEs(nctemp11217,nctemp11219);
struct tree* nctemp11225= p;
nctempchar1* nctemp11227= pno;
int nctemp11230=CodeEs(nctemp11225,nctemp11227);
struct tree* nctemp11232= p;
struct nctempchar1 *nctemp11236;
static struct nctempchar1 nctemp11237 = {{ 23}, (char*)"+=blockDim.x*gridDim.x\0"};
nctemp11236=&nctemp11237;
nctempchar1* nctemp11234= nctemp11236;
int nctemp11238=CodeEs(nctemp11232,nctemp11234);
struct tree* nctemp11240= p;
struct nctempchar1 *nctemp11244;
static struct nctempchar1 nctemp11245 = {{ 5}, (char*)"){\n\0"};
nctemp11244=&nctemp11245;
nctempchar1* nctemp11242= nctemp11244;
int nctemp11246=CodeEs(nctemp11240,nctemp11242);
struct nctempchar1 *nctemp11254;
static struct nctempchar1 nctemp11255 = {{ 2}, (char*)"1\0"};
nctemp11254=&nctemp11255;
nctempchar1* nctemp11252= nctemp11254;
nctempchar1* nctemp11256=LibeStrsave(nctemp11252);
qk=nctemp11256;
l =0;
int nctemp11261 = (l < rank);
while(nctemp11261){
{
int nctemp11273 = rank - 1;
int nctemp11265 = (l ==nctemp11273);
if(nctemp11265)
{
struct tree* nctemp11275= p;
int nctemp11279=l;
nctempchar1* nctemp11277= i->a[nctemp11279].s;
int nctemp11282=CodeEs(nctemp11275,nctemp11277);
struct tree* nctemp11284= p;
struct nctempchar1 *nctemp11288;
static struct nctempchar1 nctemp11289 = {{ 2}, (char*)"=\0"};
nctemp11288=&nctemp11289;
nctempchar1* nctemp11286= nctemp11288;
int nctemp11290=CodeEs(nctemp11284,nctemp11286);
struct tree* nctemp11292= p;
struct nctempchar1 *nctemp11296;
static struct nctempchar1 nctemp11297 = {{ 2}, (char*)"(\0"};
nctemp11296=&nctemp11297;
nctempchar1* nctemp11294= nctemp11296;
int nctemp11298=CodeEs(nctemp11292,nctemp11294);
struct tree* nctemp11300= p;
nctempchar1* nctemp11302= pno;
int nctemp11305=CodeEs(nctemp11300,nctemp11302);
struct tree* nctemp11307= p;
struct nctempchar1 *nctemp11311;
static struct nctempchar1 nctemp11312 = {{ 2}, (char*)"/\0"};
nctemp11311=&nctemp11312;
nctempchar1* nctemp11309= nctemp11311;
int nctemp11313=CodeEs(nctemp11307,nctemp11309);
struct tree* nctemp11315= p;
struct nctempchar1 *nctemp11319;
static struct nctempchar1 nctemp11320 = {{ 2}, (char*)"(\0"};
nctemp11319=&nctemp11320;
nctempchar1* nctemp11317= nctemp11319;
int nctemp11321=CodeEs(nctemp11315,nctemp11317);
struct tree* nctemp11323= p;
nctempchar1* nctemp11325= qk;
int nctemp11328=CodeEs(nctemp11323,nctemp11325);
struct tree* nctemp11330= p;
struct nctempchar1 *nctemp11334;
static struct nctempchar1 nctemp11335 = {{ 2}, (char*)")\0"};
nctemp11334=&nctemp11335;
nctempchar1* nctemp11332= nctemp11334;
int nctemp11336=CodeEs(nctemp11330,nctemp11332);
struct tree* nctemp11338= p;
struct nctempchar1 *nctemp11342;
static struct nctempchar1 nctemp11343 = {{ 2}, (char*)")\0"};
nctemp11342=&nctemp11343;
nctempchar1* nctemp11340= nctemp11342;
int nctemp11344=CodeEs(nctemp11338,nctemp11340);
struct tree* nctemp11346= p;
struct nctempchar1 *nctemp11350;
static struct nctempchar1 nctemp11351 = {{ 2}, (char*)"+\0"};
nctemp11350=&nctemp11351;
nctempchar1* nctemp11348= nctemp11350;
int nctemp11352=CodeEs(nctemp11346,nctemp11348);
struct tree* nctemp11354= p;
int nctemp11358=l;
nctempchar1* nctemp11356= nl->a[nctemp11358].s;
int nctemp11361=CodeEs(nctemp11354,nctemp11356);
int nctemp11364=l;
RunFree(nl->a[nctemp11364].s->a);
RunFree(nl->a[nctemp11364].s);
struct tree* nctemp11368= p;
struct nctempchar1 *nctemp11372;
static struct nctempchar1 nctemp11373 = {{ 4}, (char*)";\n\0"};
nctemp11372=&nctemp11373;
nctempchar1* nctemp11370= nctemp11372;
int nctemp11374=CodeEs(nctemp11368,nctemp11370);
}
else{
struct tree* nctemp11376= p;
int nctemp11380=l;
nctempchar1* nctemp11378= i->a[nctemp11380].s;
int nctemp11383=CodeEs(nctemp11376,nctemp11378);
struct tree* nctemp11385= p;
struct nctempchar1 *nctemp11389;
static struct nctempchar1 nctemp11390 = {{ 2}, (char*)"=\0"};
nctemp11389=&nctemp11390;
nctempchar1* nctemp11387= nctemp11389;
int nctemp11391=CodeEs(nctemp11385,nctemp11387);
struct tree* nctemp11393= p;
struct nctempchar1 *nctemp11397;
static struct nctempchar1 nctemp11398 = {{ 2}, (char*)"(\0"};
nctemp11397=&nctemp11398;
nctempchar1* nctemp11395= nctemp11397;
int nctemp11399=CodeEs(nctemp11393,nctemp11395);
struct tree* nctemp11401= p;
nctempchar1* nctemp11403= pno;
int nctemp11406=CodeEs(nctemp11401,nctemp11403);
struct tree* nctemp11408= p;
struct nctempchar1 *nctemp11412;
static struct nctempchar1 nctemp11413 = {{ 2}, (char*)"/\0"};
nctemp11412=&nctemp11413;
nctempchar1* nctemp11410= nctemp11412;
int nctemp11414=CodeEs(nctemp11408,nctemp11410);
struct tree* nctemp11416= p;
struct nctempchar1 *nctemp11420;
static struct nctempchar1 nctemp11421 = {{ 2}, (char*)"(\0"};
nctemp11420=&nctemp11421;
nctempchar1* nctemp11418= nctemp11420;
int nctemp11422=CodeEs(nctemp11416,nctemp11418);
struct tree* nctemp11424= p;
nctempchar1* nctemp11426= qk;
int nctemp11429=CodeEs(nctemp11424,nctemp11426);
struct tree* nctemp11431= p;
struct nctempchar1 *nctemp11435;
static struct nctempchar1 nctemp11436 = {{ 2}, (char*)")\0"};
nctemp11435=&nctemp11436;
nctempchar1* nctemp11433= nctemp11435;
int nctemp11437=CodeEs(nctemp11431,nctemp11433);
struct tree* nctemp11439= p;
struct nctempchar1 *nctemp11443;
static struct nctempchar1 nctemp11444 = {{ 2}, (char*)")\0"};
nctemp11443=&nctemp11444;
nctempchar1* nctemp11441= nctemp11443;
int nctemp11445=CodeEs(nctemp11439,nctemp11441);
struct tree* nctemp11447= p;
struct nctempchar1 *nctemp11451;
static struct nctempchar1 nctemp11452 = {{ 2}, (char*)"%\0"};
nctemp11451=&nctemp11452;
nctempchar1* nctemp11449= nctemp11451;
int nctemp11453=CodeEs(nctemp11447,nctemp11449);
struct tree* nctemp11455= p;
int nctemp11459=l;
nctempchar1* nctemp11457= m->a[nctemp11459].s;
int nctemp11462=CodeEs(nctemp11455,nctemp11457);
struct tree* nctemp11464= p;
struct nctempchar1 *nctemp11468;
static struct nctempchar1 nctemp11469 = {{ 2}, (char*)"+\0"};
nctemp11468=&nctemp11469;
nctempchar1* nctemp11466= nctemp11468;
int nctemp11470=CodeEs(nctemp11464,nctemp11466);
struct tree* nctemp11472= p;
int nctemp11476=l;
nctempchar1* nctemp11474= nl->a[nctemp11476].s;
int nctemp11479=CodeEs(nctemp11472,nctemp11474);
int nctemp11482=l;
RunFree(nl->a[nctemp11482].s->a);
RunFree(nl->a[nctemp11482].s);
struct tree* nctemp11486= p;
struct nctempchar1 *nctemp11490;
static struct nctempchar1 nctemp11491 = {{ 4}, (char*)";\n\0"};
nctemp11490=&nctemp11491;
nctempchar1* nctemp11488= nctemp11490;
int nctemp11492=CodeEs(nctemp11486,nctemp11488);
}
nctempchar1* nctemp11498= qk;
struct nctempchar1 *nctemp11503;
static struct nctempchar1 nctemp11504 = {{ 2}, (char*)"*\0"};
nctemp11503=&nctemp11504;
nctempchar1* nctemp11501= nctemp11503;
nctempchar1* nctemp11505=LibeStradd(nctemp11498,nctemp11501);
tmp=nctemp11505;
RunFree(qk->a);
RunFree(qk);
qk=tmp;
nctempchar1* nctemp11520= qk;
int nctemp11525=l;
nctempchar1* nctemp11523= m->a[nctemp11525].s;
nctempchar1* nctemp11528=LibeStradd(nctemp11520,nctemp11523);
tmp=nctemp11528;
RunFree(qk->a);
RunFree(qk);
qk=tmp;
}
int nctemp11546 = l + 1;
l =nctemp11546;
int nctemp11547 = (l < rank);
nctemp11261=nctemp11547;
}
struct tree* nctemp11555= sp;
struct tree* nctemp11557=PtreeMvchild(nctemp11555);
p =nctemp11557;
struct tree* nctemp11562= p;
struct tree* nctemp11564=PtreeMvsister(nctemp11562);
p =nctemp11564;
struct tree* nctemp11566= p;
int nctemp11568=CodeCompstmnt(nctemp11566);
struct tree* nctemp11570= p;
struct nctempchar1 *nctemp11574;
static struct nctempchar1 nctemp11575 = {{ 4}, (char*)"}\n\0"};
nctemp11574=&nctemp11575;
nctempchar1* nctemp11572= nctemp11574;
int nctemp11576=CodeEs(nctemp11570,nctemp11572);
struct tree* nctemp11578= p;
struct nctempchar1 *nctemp11582;
static struct nctempchar1 nctemp11583 = {{ 4}, (char*)"}\n\0"};
nctemp11582=&nctemp11583;
nctempchar1* nctemp11580= nctemp11582;
int nctemp11584=CodeEs(nctemp11578,nctemp11580);
int nctemp11586= 0;
int nctemp11588=CodeSetparallel(nctemp11586);
return 1;
}
int CodeParallelstmnt (struct tree* p)
{
int nctemp11593=CodeGetarch();
int nctemp11590 = (nctemp11593 ==1);
if(nctemp11590)
{
struct tree* nctemp11596= p;
int nctemp11598=CodeParallelstmntcpu(nctemp11596);
}
else{
int nctemp11602=CodeGetarch();
int nctemp11599 = (nctemp11602 ==2);
if(nctemp11599)
{
struct tree* nctemp11605= p;
int nctemp11607=CodeParallelstmntgpu(nctemp11605);
}
else{
int nctemp11611=CodeGetarch();
int nctemp11608 = (nctemp11611 ==3);
if(nctemp11608)
{
struct tree* nctemp11614= p;
int nctemp11616=CodeParallelstmntgpu(nctemp11614);
}
}
}
return 1;
}
int CodeIfstmnt (struct tree* p)
{
nctempchar1 *cond;
struct tree* nctemp11622= p;
struct tree* nctemp11624=PtreeMvchild(nctemp11622);
p =nctemp11624;
struct tree* nctemp11630= p;
nctempchar1* nctemp11632=CodeExpr(nctemp11630);
cond=nctemp11632;
struct tree* nctemp11634= p;
struct nctempchar1 *nctemp11638;
static struct nctempchar1 nctemp11639 = {{ 4}, (char*)"if(\0"};
nctemp11638=&nctemp11639;
nctempchar1* nctemp11636= nctemp11638;
int nctemp11640=CodeEs(nctemp11634,nctemp11636);
struct tree* nctemp11642= p;
nctempchar1* nctemp11644= cond;
int nctemp11647=CodeEs(nctemp11642,nctemp11644);
struct tree* nctemp11649= p;
struct nctempchar1 *nctemp11653;
static struct nctempchar1 nctemp11654 = {{ 4}, (char*)")\n\0"};
nctemp11653=&nctemp11654;
nctempchar1* nctemp11651= nctemp11653;
int nctemp11655=CodeEs(nctemp11649,nctemp11651);
struct tree* nctemp11660= p;
struct tree* nctemp11662=PtreeMvsister(nctemp11660);
p =nctemp11662;
struct tree* nctemp11664= p;
int nctemp11666=CodeStmnt(nctemp11664);
struct tree* nctemp11674= p;
struct tree* nctemp11676=PtreeMvsister(nctemp11674);
p =nctemp11676;
int nctemp11667 = (p !=0);
if(nctemp11667)
{
struct tree* nctemp11683= p;
nctempchar1* nctemp11685=PtreeGetname(nctemp11683);
nctempchar1* nctemp11681= nctemp11685;
struct nctempchar1 *nctemp11688;
static struct nctempchar1 nctemp11689 = {{ 5}, (char*)"else\0"};
nctemp11688=&nctemp11689;
nctempchar1* nctemp11686= nctemp11688;
int nctemp11690=LibeStrcmp(nctemp11681,nctemp11686);
int nctemp11678 = (nctemp11690 ==1);
if(nctemp11678)
{
struct tree* nctemp11696= p;
struct tree* nctemp11698=PtreeMvchild(nctemp11696);
p =nctemp11698;
struct tree* nctemp11700= p;
struct nctempchar1 *nctemp11704;
static struct nctempchar1 nctemp11705 = {{ 5}, (char*)"else\0"};
nctemp11704=&nctemp11705;
nctempchar1* nctemp11702= nctemp11704;
int nctemp11706=CodeEs(nctemp11700,nctemp11702);
struct tree* nctemp11708= p;
int nctemp11710=CodeStmnt(nctemp11708);
}
}
return 1;
}
int CodeReturnstmnt (struct tree* p)
{
struct tree* np;
nctempchar1 *rval;
struct tree* nctemp11716= p;
struct tree* nctemp11718=PtreeMvchild(nctemp11716);
np =nctemp11718;
struct tree* nctemp11724= np;
nctempchar1* nctemp11726=CodeExpr(nctemp11724);
rval=nctemp11726;
struct tree* nctemp11728= np;
struct nctempchar1 *nctemp11732;
static struct nctempchar1 nctemp11733 = {{ 8}, (char*)"return \0"};
nctemp11732=&nctemp11733;
nctempchar1* nctemp11730= nctemp11732;
int nctemp11734=CodeEs(nctemp11728,nctemp11730);
struct tree* nctemp11736= np;
nctempchar1* nctemp11738= rval;
int nctemp11741=CodeEs(nctemp11736,nctemp11738);
struct tree* nctemp11743= np;
struct nctempchar1 *nctemp11747;
static struct nctempchar1 nctemp11748 = {{ 4}, (char*)";\n\0"};
nctemp11747=&nctemp11748;
nctempchar1* nctemp11745= nctemp11747;
int nctemp11749=CodeEs(nctemp11743,nctemp11745);
return 1;
}
int CodeCompstmnt (struct tree* p)
{
struct tree* sp;
struct tree* q;
sp =p;
struct tree* nctemp11756= p;
struct nctempchar1 *nctemp11760;
static struct nctempchar1 nctemp11761 = {{ 4}, (char*)"{\n\0"};
nctemp11760=&nctemp11761;
nctempchar1* nctemp11758= nctemp11760;
int nctemp11762=CodeEs(nctemp11756,nctemp11758);
struct tree* nctemp11767= p;
struct tree* nctemp11769=PtreeMvchild(nctemp11767);
p =nctemp11769;
int nctemp11770 = (p ==0);
if(nctemp11770)
{
struct tree* nctemp11775= sp;
struct nctempchar1 *nctemp11779;
static struct nctempchar1 nctemp11780 = {{ 4}, (char*)"}\n\0"};
nctemp11779=&nctemp11780;
nctempchar1* nctemp11777= nctemp11779;
int nctemp11781=CodeEs(nctemp11775,nctemp11777);
return 1;
}
struct tree* nctemp11784= p;
struct symbol* nctemp11788=SymGetltp();
struct symbol* nctemp11786= nctemp11788;
int nctemp11789=CodeDeclarations(nctemp11784,nctemp11786);
struct tree* nctemp11795= p;
nctempchar1* nctemp11797=PtreeGetname(nctemp11795);
nctempchar1* nctemp11793= nctemp11797;
struct nctempchar1 *nctemp11800;
static struct nctempchar1 nctemp11801 = {{ 13}, (char*)"declarations\0"};
nctemp11800=&nctemp11801;
nctempchar1* nctemp11798= nctemp11800;
int nctemp11802=LibeStrcmp(nctemp11793,nctemp11798);
int nctemp11790 = (nctemp11802 ==1);
if(nctemp11790)
{
struct tree* nctemp11808= p;
struct tree* nctemp11810=PtreeMvsister(nctemp11808);
p =nctemp11810;
}
int nctemp11811 = (p !=0);
int nctemp11815=nctemp11811;
while(nctemp11815)
{{
struct tree* nctemp11821= p;
nctempchar1* nctemp11823=PtreeGetname(nctemp11821);
nctempchar1* nctemp11819= nctemp11823;
struct nctempchar1 *nctemp11826;
static struct nctempchar1 nctemp11827 = {{ 5}, (char*)"expr\0"};
nctemp11826=&nctemp11827;
nctempchar1* nctemp11824= nctemp11826;
int nctemp11828=LibeStrcmp(nctemp11819,nctemp11824);
int nctemp11816 = (nctemp11828 ==1);
if(nctemp11816)
{
struct tree* nctemp11831= p;
nctempchar1* nctemp11833=CodeExpr(nctemp11831);
}
struct tree* nctemp11839= p;
nctempchar1* nctemp11841=PtreeGetname(nctemp11839);
nctempchar1* nctemp11837= nctemp11841;
struct nctempchar1 *nctemp11844;
static struct nctempchar1 nctemp11845 = {{ 6}, (char*)"while\0"};
nctemp11844=&nctemp11845;
nctempchar1* nctemp11842= nctemp11844;
int nctemp11846=LibeStrcmp(nctemp11837,nctemp11842);
int nctemp11834 = (nctemp11846 ==1);
if(nctemp11834)
{
struct tree* nctemp11849= p;
int nctemp11851=CodeWhilestmnt(nctemp11849);
}
struct tree* nctemp11857= p;
nctempchar1* nctemp11859=PtreeGetname(nctemp11857);
nctempchar1* nctemp11855= nctemp11859;
struct nctempchar1 *nctemp11862;
static struct nctempchar1 nctemp11863 = {{ 4}, (char*)"for\0"};
nctemp11862=&nctemp11863;
nctempchar1* nctemp11860= nctemp11862;
int nctemp11864=LibeStrcmp(nctemp11855,nctemp11860);
int nctemp11852 = (nctemp11864 ==1);
if(nctemp11852)
{
struct tree* nctemp11870= p;
struct tree* nctemp11872=PtreeMvchild(nctemp11870);
q =nctemp11872;
struct tree* nctemp11874= q;
struct tree* nctemp11876=PtreeMvsister(nctemp11874);
struct tree* nctemp11878= p;
int nctemp11880=CodeForstmnt(nctemp11878);
}
struct tree* nctemp11886= p;
nctempchar1* nctemp11888=PtreeGetname(nctemp11886);
nctempchar1* nctemp11884= nctemp11888;
struct nctempchar1 *nctemp11891;
static struct nctempchar1 nctemp11892 = {{ 9}, (char*)"parallel\0"};
nctemp11891=&nctemp11892;
nctempchar1* nctemp11889= nctemp11891;
int nctemp11893=LibeStrcmp(nctemp11884,nctemp11889);
int nctemp11881 = (nctemp11893 ==1);
if(nctemp11881)
{
struct tree* nctemp11896= p;
int nctemp11898=CodeParallelstmnt(nctemp11896);
}
struct tree* nctemp11904= p;
nctempchar1* nctemp11906=PtreeGetname(nctemp11904);
nctempchar1* nctemp11902= nctemp11906;
struct nctempchar1 *nctemp11909;
static struct nctempchar1 nctemp11910 = {{ 3}, (char*)"if\0"};
nctemp11909=&nctemp11910;
nctempchar1* nctemp11907= nctemp11909;
int nctemp11911=LibeStrcmp(nctemp11902,nctemp11907);
int nctemp11899 = (nctemp11911 ==1);
if(nctemp11899)
{
struct tree* nctemp11914= p;
int nctemp11916=CodeIfstmnt(nctemp11914);
}
struct tree* nctemp11922= p;
nctempchar1* nctemp11924=PtreeGetname(nctemp11922);
nctempchar1* nctemp11920= nctemp11924;
struct nctempchar1 *nctemp11927;
static struct nctempchar1 nctemp11928 = {{ 7}, (char*)"return\0"};
nctemp11927=&nctemp11928;
nctempchar1* nctemp11925= nctemp11927;
int nctemp11929=LibeStrcmp(nctemp11920,nctemp11925);
int nctemp11917 = (nctemp11929 ==1);
if(nctemp11917)
{
struct tree* nctemp11932= p;
int nctemp11934=CodeReturnstmnt(nctemp11932);
}
struct tree* nctemp11939= p;
struct tree* nctemp11941=PtreeMvsister(nctemp11939);
p =nctemp11941;
}
int nctemp11942 = (p !=0);
nctemp11815=nctemp11942;}struct tree* nctemp11947= sp;
struct nctempchar1 *nctemp11951;
static struct nctempchar1 nctemp11952 = {{ 4}, (char*)"}\n\0"};
nctemp11951=&nctemp11952;
nctempchar1* nctemp11949= nctemp11951;
int nctemp11953=CodeEs(nctemp11947,nctemp11949);
return 1;
}
int CodeStmnt (struct tree* p)
{
struct tree* sp;
sp =p;
struct tree* nctemp11960= p;
struct nctempchar1 *nctemp11964;
static struct nctempchar1 nctemp11965 = {{ 4}, (char*)"{\n\0"};
nctemp11964=&nctemp11965;
nctempchar1* nctemp11962= nctemp11964;
int nctemp11966=CodeEs(nctemp11960,nctemp11962);
struct tree* nctemp11972= p;
nctempchar1* nctemp11974=PtreeGetname(nctemp11972);
nctempchar1* nctemp11970= nctemp11974;
struct nctempchar1 *nctemp11977;
static struct nctempchar1 nctemp11978 = {{ 10}, (char*)"compstmnt\0"};
nctemp11977=&nctemp11978;
nctempchar1* nctemp11975= nctemp11977;
int nctemp11979=LibeStrcmp(nctemp11970,nctemp11975);
int nctemp11967 = (nctemp11979 ==1);
if(nctemp11967)
{
struct tree* nctemp11985= p;
struct tree* nctemp11987=PtreeMvchild(nctemp11985);
p =nctemp11987;
struct tree* nctemp11989= p;
struct symbol* nctemp11993=SymGetltp();
struct symbol* nctemp11991= nctemp11993;
int nctemp11994=CodeDeclarations(nctemp11989,nctemp11991);
struct tree* nctemp12000= p;
nctempchar1* nctemp12002=PtreeGetname(nctemp12000);
nctempchar1* nctemp11998= nctemp12002;
struct nctempchar1 *nctemp12005;
static struct nctempchar1 nctemp12006 = {{ 13}, (char*)"declarations\0"};
nctemp12005=&nctemp12006;
nctempchar1* nctemp12003= nctemp12005;
int nctemp12007=LibeStrcmp(nctemp11998,nctemp12003);
int nctemp11995 = (nctemp12007 ==1);
if(nctemp11995)
{
struct tree* nctemp12013= p;
struct tree* nctemp12015=PtreeMvsister(nctemp12013);
p =nctemp12015;
}
}
int nctemp12016 = (p !=0);
int nctemp12020=nctemp12016;
while(nctemp12020)
{{
struct tree* nctemp12026= p;
nctempchar1* nctemp12028=PtreeGetname(nctemp12026);
nctempchar1* nctemp12024= nctemp12028;
struct nctempchar1 *nctemp12031;
static struct nctempchar1 nctemp12032 = {{ 10}, (char*)"compstmnt\0"};
nctemp12031=&nctemp12032;
nctempchar1* nctemp12029= nctemp12031;
int nctemp12033=LibeStrcmp(nctemp12024,nctemp12029);
int nctemp12021 = (nctemp12033 ==1);
if(nctemp12021)
{
struct tree* nctemp12036= p;
int nctemp12038=CodeCompstmnt(nctemp12036);
}
struct tree* nctemp12044= p;
nctempchar1* nctemp12046=PtreeGetname(nctemp12044);
nctempchar1* nctemp12042= nctemp12046;
struct nctempchar1 *nctemp12049;
static struct nctempchar1 nctemp12050 = {{ 5}, (char*)"expr\0"};
nctemp12049=&nctemp12050;
nctempchar1* nctemp12047= nctemp12049;
int nctemp12051=LibeStrcmp(nctemp12042,nctemp12047);
int nctemp12039 = (nctemp12051 ==1);
if(nctemp12039)
{
struct tree* nctemp12054= p;
nctempchar1* nctemp12056=CodeExpr(nctemp12054);
}
struct tree* nctemp12062= p;
nctempchar1* nctemp12064=PtreeGetname(nctemp12062);
nctempchar1* nctemp12060= nctemp12064;
struct nctempchar1 *nctemp12067;
static struct nctempchar1 nctemp12068 = {{ 6}, (char*)"while\0"};
nctemp12067=&nctemp12068;
nctempchar1* nctemp12065= nctemp12067;
int nctemp12069=LibeStrcmp(nctemp12060,nctemp12065);
int nctemp12057 = (nctemp12069 ==1);
if(nctemp12057)
{
struct tree* nctemp12072= p;
int nctemp12074=CodeWhilestmnt(nctemp12072);
}
struct tree* nctemp12080= p;
nctempchar1* nctemp12082=PtreeGetname(nctemp12080);
nctempchar1* nctemp12078= nctemp12082;
struct nctempchar1 *nctemp12085;
static struct nctempchar1 nctemp12086 = {{ 4}, (char*)"for\0"};
nctemp12085=&nctemp12086;
nctempchar1* nctemp12083= nctemp12085;
int nctemp12087=LibeStrcmp(nctemp12078,nctemp12083);
int nctemp12075 = (nctemp12087 ==1);
if(nctemp12075)
{
struct tree* nctemp12090= p;
int nctemp12092=CodeForstmnt(nctemp12090);
}
struct tree* nctemp12098= p;
nctempchar1* nctemp12100=PtreeGetname(nctemp12098);
nctempchar1* nctemp12096= nctemp12100;
struct nctempchar1 *nctemp12103;
static struct nctempchar1 nctemp12104 = {{ 9}, (char*)"parallel\0"};
nctemp12103=&nctemp12104;
nctempchar1* nctemp12101= nctemp12103;
int nctemp12105=LibeStrcmp(nctemp12096,nctemp12101);
int nctemp12093 = (nctemp12105 ==1);
if(nctemp12093)
{
struct tree* nctemp12108= p;
int nctemp12110=CodeParallelstmnt(nctemp12108);
}
struct tree* nctemp12116= p;
nctempchar1* nctemp12118=PtreeGetname(nctemp12116);
nctempchar1* nctemp12114= nctemp12118;
struct nctempchar1 *nctemp12121;
static struct nctempchar1 nctemp12122 = {{ 3}, (char*)"if\0"};
nctemp12121=&nctemp12122;
nctempchar1* nctemp12119= nctemp12121;
int nctemp12123=LibeStrcmp(nctemp12114,nctemp12119);
int nctemp12111 = (nctemp12123 ==1);
if(nctemp12111)
{
struct tree* nctemp12126= p;
int nctemp12128=CodeIfstmnt(nctemp12126);
}
struct tree* nctemp12134= p;
nctempchar1* nctemp12136=PtreeGetname(nctemp12134);
nctempchar1* nctemp12132= nctemp12136;
struct nctempchar1 *nctemp12139;
static struct nctempchar1 nctemp12140 = {{ 7}, (char*)"return\0"};
nctemp12139=&nctemp12140;
nctempchar1* nctemp12137= nctemp12139;
int nctemp12141=LibeStrcmp(nctemp12132,nctemp12137);
int nctemp12129 = (nctemp12141 ==1);
if(nctemp12129)
{
struct tree* nctemp12144= p;
int nctemp12146=CodeReturnstmnt(nctemp12144);
}
struct tree* nctemp12151= p;
struct tree* nctemp12153=PtreeMvsister(nctemp12151);
p =nctemp12153;
}
int nctemp12154 = (p !=0);
nctemp12020=nctemp12154;}struct tree* nctemp12159= sp;
struct nctempchar1 *nctemp12163;
static struct nctempchar1 nctemp12164 = {{ 4}, (char*)"}\n\0"};
nctemp12163=&nctemp12164;
nctempchar1* nctemp12161= nctemp12163;
int nctemp12165=CodeEs(nctemp12159,nctemp12161);
return 1;
}
int CodeNewdescr (struct tree* p,nctempchar1 *pointer)
{
struct tree* nctemp12168= p;
nctempchar1* nctemp12170= pointer;
int nctemp12173=CodeEs(nctemp12168,nctemp12170);
struct tree* nctemp12175= p;
struct nctempchar1 *nctemp12179;
static struct nctempchar1 nctemp12180 = {{ 2}, (char*)"=\0"};
nctemp12179=&nctemp12180;
nctempchar1* nctemp12177= nctemp12179;
int nctemp12181=CodeEs(nctemp12175,nctemp12177);
struct tree* nctemp12183= p;
struct nctempchar1 *nctemp12187;
static struct nctempchar1 nctemp12188 = {{ 11}, (char*)"RunMalloc(\0"};
nctemp12187=&nctemp12188;
nctempchar1* nctemp12185= nctemp12187;
int nctemp12189=CodeEs(nctemp12183,nctemp12185);
struct tree* nctemp12191= p;
struct nctempchar1 *nctemp12195;
static struct nctempchar1 nctemp12196 = {{ 8}, (char*)"sizeof(\0"};
nctemp12195=&nctemp12196;
nctempchar1* nctemp12193= nctemp12195;
int nctemp12197=CodeEs(nctemp12191,nctemp12193);
struct tree* nctemp12199= p;
nctempchar1* nctemp12201= pointer;
int nctemp12204=CodeEs(nctemp12199,nctemp12201);
struct tree* nctemp12206= p;
struct nctempchar1 *nctemp12210;
static struct nctempchar1 nctemp12211 = {{ 6}, (char*)"));\n\0"};
nctemp12210=&nctemp12211;
nctempchar1* nctemp12208= nctemp12210;
int nctemp12212=CodeEs(nctemp12206,nctemp12208);
return 1;
}
int CodeFdef (struct tree* p)
{
int nctemp12217=CodeGetarch();
int nctemp12214 = (nctemp12217 ==1);
if(nctemp12214)
{
struct tree* nctemp12220= p;
int nctemp12222=CodeFdefcpu(nctemp12220);
}
else{
int nctemp12226=CodeGetarch();
int nctemp12223 = (nctemp12226 ==2);
if(nctemp12223)
{
struct tree* nctemp12235= p;
struct tree* nctemp12237=PtreeMvchild(nctemp12235);
struct tree* nctemp12233= nctemp12237;
nctempchar1* nctemp12238=PtreeGetparallel(nctemp12233);
nctempchar1* nctemp12231= nctemp12238;
struct nctempchar1 *nctemp12241;
static struct nctempchar1 nctemp12242 = {{ 9}, (char*)"parallel\0"};
nctemp12241=&nctemp12242;
nctempchar1* nctemp12239= nctemp12241;
int nctemp12243=LibeStrcmp(nctemp12231,nctemp12239);
int nctemp12228 = (nctemp12243 ==1);
if(nctemp12228)
{
struct tree* nctemp12246= p;
int nctemp12248=CodeFdefgpu(nctemp12246);
struct tree* nctemp12250= p;
int nctemp12252=CodeFdewrappergpu(nctemp12250);
}
else{
struct tree* nctemp12254= p;
int nctemp12256=CodeFdefcpu(nctemp12254);
}
}
else{
int nctemp12260=CodeGetarch();
int nctemp12257 = (nctemp12260 ==3);
if(nctemp12257)
{
struct tree* nctemp12267= p;
nctempchar1* nctemp12269=PtreeGetparallel(nctemp12267);
nctempchar1* nctemp12265= nctemp12269;
struct nctempchar1 *nctemp12272;
static struct nctempchar1 nctemp12273 = {{ 9}, (char*)"parallel\0"};
nctemp12272=&nctemp12273;
nctempchar1* nctemp12270= nctemp12272;
int nctemp12274=LibeStrcmp(nctemp12265,nctemp12270);
int nctemp12262 = (nctemp12274 ==1);
if(nctemp12262)
{
struct tree* nctemp12277= p;
int nctemp12279=CodeFdefgpu(nctemp12277);
struct tree* nctemp12281= p;
int nctemp12283=CodeFdewrappergpu(nctemp12281);
}
else{
struct tree* nctemp12285= p;
int nctemp12287=CodeFdefcpu(nctemp12285);
}
}
}
}
return 1;
}
int CodePreamblecpu ()
{
struct tree* p;
struct nctempchar1 *nctemp12295;
static struct nctempchar1 nctemp12296 = {{ 6}, (char*)"dummy\0"};
nctemp12295=&nctemp12296;
nctempchar1* nctemp12293= nctemp12295;
struct nctempchar1 *nctemp12299;
static struct nctempchar1 nctemp12300 = {{ 6}, (char*)"dummy\0"};
nctemp12299=&nctemp12300;
nctempchar1* nctemp12297= nctemp12299;
struct tree* nctemp12301=PtreeMknode(nctemp12293,nctemp12297);
p =nctemp12301;
struct tree* nctemp12303= p;
int nctemp12305= 1;
int nctemp12307=PtreeSetline(nctemp12303,nctemp12305);
struct tree* nctemp12309= p;
struct nctempchar1 *nctemp12313;
static struct nctempchar1 nctemp12314 = {{ 42}, (char*)"//  Translated by epsc  version today  \n\0"};
nctemp12313=&nctemp12314;
nctempchar1* nctemp12311= nctemp12313;
int nctemp12315=CodeEs(nctemp12309,nctemp12311);
struct tree* nctemp12317= p;
int nctemp12319= 2;
int nctemp12321=PtreeSetline(nctemp12317,nctemp12319);
struct tree* nctemp12323= p;
int nctemp12325= 3;
int nctemp12327=PtreeSetline(nctemp12323,nctemp12325);
struct tree* nctemp12329= p;
int nctemp12331= 4;
int nctemp12333=PtreeSetline(nctemp12329,nctemp12331);
struct tree* nctemp12335= p;
struct nctempchar1 *nctemp12339;
static struct nctempchar1 nctemp12340 = {{ 22}, (char*)"#include <stddef.h>\n\0"};
nctemp12339=&nctemp12340;
nctempchar1* nctemp12337= nctemp12339;
int nctemp12341=CodeEs(nctemp12335,nctemp12337);
struct tree* nctemp12343= p;
struct nctempchar1 *nctemp12347;
static struct nctempchar1 nctemp12348 = {{ 21}, (char*)"#include <stdio.h>\n\0"};
nctemp12347=&nctemp12348;
nctempchar1* nctemp12345= nctemp12347;
int nctemp12349=CodeEs(nctemp12343,nctemp12345);
struct tree* nctemp12351= p;
struct nctempchar1 *nctemp12355;
static struct nctempchar1 nctemp12356 = {{ 22}, (char*)"#include <assert.h>\n\0"};
nctemp12355=&nctemp12356;
nctempchar1* nctemp12353= nctemp12355;
int nctemp12357=CodeEs(nctemp12351,nctemp12353);
struct tree* nctemp12359= p;
struct nctempchar1 *nctemp12363;
static struct nctempchar1 nctemp12364 = {{ 48}, (char*)"typedef struct { float r; float i;} complex; \n\0"};
nctemp12363=&nctemp12364;
nctempchar1* nctemp12361= nctemp12363;
int nctemp12365=CodeEs(nctemp12359,nctemp12361);
struct tree* nctemp12367= p;
int nctemp12369= 3;
int nctemp12371=PtreeSetline(nctemp12367,nctemp12369);
struct tree* nctemp12373= p;
struct nctempchar1 *nctemp12377;
static struct nctempchar1 nctemp12378 = {{ 68}, (char*)"typedef struct nctempfloat1 { int d[1]; float *a;} nctempfloat1; \n\0"};
nctemp12377=&nctemp12378;
nctempchar1* nctemp12375= nctemp12377;
int nctemp12379=CodeEs(nctemp12373,nctemp12375);
struct tree* nctemp12381= p;
int nctemp12383= 5;
int nctemp12385=PtreeSetline(nctemp12381,nctemp12383);
struct tree* nctemp12387= p;
struct nctempchar1 *nctemp12391;
static struct nctempchar1 nctemp12392 = {{ 62}, (char*)"typedef struct nctempint1 { int d[1]; int *a;} nctempint1; \n\0"};
nctemp12391=&nctemp12392;
nctempchar1* nctemp12389= nctemp12391;
int nctemp12393=CodeEs(nctemp12387,nctemp12389);
struct tree* nctemp12395= p;
int nctemp12397= 7;
int nctemp12399=PtreeSetline(nctemp12395,nctemp12397);
struct tree* nctemp12401= p;
struct nctempchar1 *nctemp12405;
static struct nctempchar1 nctemp12406 = {{ 65}, (char*)"typedef struct nctempchar1 { int d[1]; char *a;} nctempchar1; \n\0"};
nctemp12405=&nctemp12406;
nctempchar1* nctemp12403= nctemp12405;
int nctemp12407=CodeEs(nctemp12401,nctemp12403);
struct tree* nctemp12409= p;
int nctemp12411= 7;
int nctemp12413=PtreeSetline(nctemp12409,nctemp12411);
struct tree* nctemp12415= p;
struct nctempchar1 *nctemp12419;
static struct nctempchar1 nctemp12420 = {{ 74}, (char*)"typedef struct nctempcomplex1 { int d[1]; complex *a;} nctempcomplex1; \n\0"};
nctemp12419=&nctemp12420;
nctempchar1* nctemp12417= nctemp12419;
int nctemp12421=CodeEs(nctemp12415,nctemp12417);
struct tree* nctemp12423= p;
int nctemp12425= 8;
int nctemp12427=PtreeSetline(nctemp12423,nctemp12425);
int nctemp12431=CodeArraycheck();
int nctemp12428 = (nctemp12431 ==1);
if(nctemp12428)
{
struct tree* nctemp12434= p;
struct nctempchar1 *nctemp12438;
static struct nctempchar1 nctemp12439 = {{ 55}, (char*)"static struct nctempchar1 nctempstringx = {0, NULL};\n\0"};
nctemp12438=&nctemp12439;
nctempchar1* nctemp12436= nctemp12438;
int nctemp12440=CodeEs(nctemp12434,nctemp12436);
struct tree* nctemp12442= p;
struct nctempchar1 *nctemp12446;
static struct nctempchar1 nctemp12447 = {{ 60}, (char*)"static struct nctempchar1 *nctempstring = &nctempstringx;\n\0"};
nctemp12446=&nctemp12447;
nctempchar1* nctemp12444= nctemp12446;
int nctemp12448=CodeEs(nctemp12442,nctemp12444);
struct tree* nctemp12450= p;
int nctemp12452= 8;
int nctemp12454=PtreeSetline(nctemp12450,nctemp12452);
}
struct tree* nctemp12456= p;
struct nctempchar1 *nctemp12460;
static struct nctempchar1 nctemp12461 = {{ 68}, (char*)"typedef struct nctempfloat2 { int d[2]; float *a;} nctempfloat2; \n\0"};
nctemp12460=&nctemp12461;
nctempchar1* nctemp12458= nctemp12460;
int nctemp12462=CodeEs(nctemp12456,nctemp12458);
struct tree* nctemp12464= p;
int nctemp12466= 10;
int nctemp12468=PtreeSetline(nctemp12464,nctemp12466);
struct tree* nctemp12470= p;
struct nctempchar1 *nctemp12474;
static struct nctempchar1 nctemp12475 = {{ 62}, (char*)"typedef struct nctempint2 { int d[2]; int *a;} nctempint2; \n\0"};
nctemp12474=&nctemp12475;
nctempchar1* nctemp12472= nctemp12474;
int nctemp12476=CodeEs(nctemp12470,nctemp12472);
struct tree* nctemp12478= p;
int nctemp12480= 10;
int nctemp12482=PtreeSetline(nctemp12478,nctemp12480);
struct tree* nctemp12484= p;
struct nctempchar1 *nctemp12488;
static struct nctempchar1 nctemp12489 = {{ 65}, (char*)"typedef struct nctempchar2 { int d[2]; char *a;} nctempchar2; \n\0"};
nctemp12488=&nctemp12489;
nctempchar1* nctemp12486= nctemp12488;
int nctemp12490=CodeEs(nctemp12484,nctemp12486);
struct tree* nctemp12492= p;
int nctemp12494= 12;
int nctemp12496=PtreeSetline(nctemp12492,nctemp12494);
struct tree* nctemp12498= p;
struct nctempchar1 *nctemp12502;
static struct nctempchar1 nctemp12503 = {{ 74}, (char*)"typedef struct nctempcomplex2 { int d[2]; complex *a;} nctempcomplex2; \n\0"};
nctemp12502=&nctemp12503;
nctempchar1* nctemp12500= nctemp12502;
int nctemp12504=CodeEs(nctemp12498,nctemp12500);
struct tree* nctemp12506= p;
int nctemp12508= 13;
int nctemp12510=PtreeSetline(nctemp12506,nctemp12508);
struct tree* nctemp12512= p;
struct nctempchar1 *nctemp12516;
static struct nctempchar1 nctemp12517 = {{ 68}, (char*)"typedef struct nctempfloat3 { int d[3]; float *a;} nctempfloat3; \n\0"};
nctemp12516=&nctemp12517;
nctempchar1* nctemp12514= nctemp12516;
int nctemp12518=CodeEs(nctemp12512,nctemp12514);
struct tree* nctemp12520= p;
int nctemp12522= 14;
int nctemp12524=PtreeSetline(nctemp12520,nctemp12522);
struct tree* nctemp12526= p;
struct nctempchar1 *nctemp12530;
static struct nctempchar1 nctemp12531 = {{ 62}, (char*)"typedef struct nctempint3 { int d[3]; int *a;} nctempint3; \n\0"};
nctemp12530=&nctemp12531;
nctempchar1* nctemp12528= nctemp12530;
int nctemp12532=CodeEs(nctemp12526,nctemp12528);
struct tree* nctemp12534= p;
int nctemp12536= 15;
int nctemp12538=PtreeSetline(nctemp12534,nctemp12536);
struct tree* nctemp12540= p;
struct nctempchar1 *nctemp12544;
static struct nctempchar1 nctemp12545 = {{ 65}, (char*)"typedef struct nctempchar3 { int d[3]; char *a;} nctempchar3; \n\0"};
nctemp12544=&nctemp12545;
nctempchar1* nctemp12542= nctemp12544;
int nctemp12546=CodeEs(nctemp12540,nctemp12542);
struct tree* nctemp12548= p;
int nctemp12550= 16;
int nctemp12552=PtreeSetline(nctemp12548,nctemp12550);
struct tree* nctemp12554= p;
struct nctempchar1 *nctemp12558;
static struct nctempchar1 nctemp12559 = {{ 74}, (char*)"typedef struct nctempcomplex3 { int d[3]; complex *a;} nctempcomplex3; \n\0"};
nctemp12558=&nctemp12559;
nctempchar1* nctemp12556= nctemp12558;
int nctemp12560=CodeEs(nctemp12554,nctemp12556);
struct tree* nctemp12562= p;
int nctemp12564= 17;
int nctemp12566=PtreeSetline(nctemp12562,nctemp12564);
struct tree* nctemp12568= p;
struct nctempchar1 *nctemp12572;
static struct nctempchar1 nctemp12573 = {{ 68}, (char*)"typedef struct nctempfloat4 { int d[4]; float *a;} nctempfloat4; \n\0"};
nctemp12572=&nctemp12573;
nctempchar1* nctemp12570= nctemp12572;
int nctemp12574=CodeEs(nctemp12568,nctemp12570);
struct tree* nctemp12576= p;
int nctemp12578= 18;
int nctemp12580=PtreeSetline(nctemp12576,nctemp12578);
struct tree* nctemp12582= p;
struct nctempchar1 *nctemp12586;
static struct nctempchar1 nctemp12587 = {{ 62}, (char*)"typedef struct nctempint4 { int d[4]; int *a;} nctempint4; \n\0"};
nctemp12586=&nctemp12587;
nctempchar1* nctemp12584= nctemp12586;
int nctemp12588=CodeEs(nctemp12582,nctemp12584);
struct tree* nctemp12590= p;
int nctemp12592= 19;
int nctemp12594=PtreeSetline(nctemp12590,nctemp12592);
struct tree* nctemp12596= p;
struct nctempchar1 *nctemp12600;
static struct nctempchar1 nctemp12601 = {{ 65}, (char*)"typedef struct nctempchar4 { int d[4]; char *a;} nctempchar4; \n\0"};
nctemp12600=&nctemp12601;
nctempchar1* nctemp12598= nctemp12600;
int nctemp12602=CodeEs(nctemp12596,nctemp12598);
struct tree* nctemp12604= p;
int nctemp12606= 20;
int nctemp12608=PtreeSetline(nctemp12604,nctemp12606);
struct tree* nctemp12610= p;
struct nctempchar1 *nctemp12614;
static struct nctempchar1 nctemp12615 = {{ 74}, (char*)"typedef struct nctempcomplex4 { int d[4]; complex *a;} nctempcomplex4; \n\0"};
nctemp12614=&nctemp12615;
nctempchar1* nctemp12612= nctemp12614;
int nctemp12616=CodeEs(nctemp12610,nctemp12612);
struct tree* nctemp12618= p;
struct nctempchar1 *nctemp12622;
static struct nctempchar1 nctemp12623 = {{ 22}, (char*)"#include <stdlib.h>\n\0"};
nctemp12622=&nctemp12623;
nctempchar1* nctemp12620= nctemp12622;
int nctemp12624=CodeEs(nctemp12618,nctemp12620);
struct tree* nctemp12626= p;
struct nctempchar1 *nctemp12630;
static struct nctempchar1 nctemp12631 = {{ 22}, (char*)"#include <string.h>\n\0"};
nctemp12630=&nctemp12631;
nctempchar1* nctemp12628= nctemp12630;
int nctemp12632=CodeEs(nctemp12626,nctemp12628);
struct tree* nctemp12634= p;
struct nctempchar1 *nctemp12638;
static struct nctempchar1 nctemp12639 = {{ 27}, (char*)"void *RunMalloc(int n); \n\0"};
nctemp12638=&nctemp12639;
nctempchar1* nctemp12636= nctemp12638;
int nctemp12640=CodeEs(nctemp12634,nctemp12636);
struct tree* nctemp12642= p;
struct nctempchar1 *nctemp12646;
static struct nctempchar1 nctemp12647 = {{ 25}, (char*)"int RunFree(void *n); \n\0"};
nctemp12646=&nctemp12647;
nctempchar1* nctemp12644= nctemp12646;
int nctemp12648=CodeEs(nctemp12642,nctemp12644);
return 1;
}
int CodePreamblecuda ()
{
struct tree* p;
struct nctempchar1 *nctemp12656;
static struct nctempchar1 nctemp12657 = {{ 6}, (char*)"dummy\0"};
nctemp12656=&nctemp12657;
nctempchar1* nctemp12654= nctemp12656;
struct nctempchar1 *nctemp12660;
static struct nctempchar1 nctemp12661 = {{ 6}, (char*)"dummy\0"};
nctemp12660=&nctemp12661;
nctempchar1* nctemp12658= nctemp12660;
struct tree* nctemp12662=PtreeMknode(nctemp12654,nctemp12658);
p =nctemp12662;
struct tree* nctemp12664= p;
int nctemp12666= 1;
int nctemp12668=PtreeSetline(nctemp12664,nctemp12666);
struct tree* nctemp12670= p;
struct nctempchar1 *nctemp12674;
static struct nctempchar1 nctemp12675 = {{ 50}, (char*)"//  Translated by epsc  version December 2021  \n\0"};
nctemp12674=&nctemp12675;
nctempchar1* nctemp12672= nctemp12674;
int nctemp12676=CodeEs(nctemp12670,nctemp12672);
struct tree* nctemp12678= p;
int nctemp12680= 2;
int nctemp12682=PtreeSetline(nctemp12678,nctemp12680);
struct tree* nctemp12684= p;
int nctemp12686= 3;
int nctemp12688=PtreeSetline(nctemp12684,nctemp12686);
struct tree* nctemp12690= p;
struct nctempchar1 *nctemp12694;
static struct nctempchar1 nctemp12695 = {{ 17}, (char*)"extern \"C\" {\n\0"};
nctemp12694=&nctemp12695;
nctempchar1* nctemp12692= nctemp12694;
int nctemp12696=CodeEs(nctemp12690,nctemp12692);
struct tree* nctemp12698= p;
struct nctempchar1 *nctemp12702;
static struct nctempchar1 nctemp12703 = {{ 48}, (char*)"typedef struct { float r; float i;} complex; \n\0"};
nctemp12702=&nctemp12703;
nctempchar1* nctemp12700= nctemp12702;
int nctemp12704=CodeEs(nctemp12698,nctemp12700);
struct tree* nctemp12706= p;
int nctemp12708= 3;
int nctemp12710=PtreeSetline(nctemp12706,nctemp12708);
struct tree* nctemp12712= p;
struct nctempchar1 *nctemp12716;
static struct nctempchar1 nctemp12717 = {{ 68}, (char*)"typedef struct nctempfloat1 { int d[1]; float *a;} nctempfloat1; \n\0"};
nctemp12716=&nctemp12717;
nctempchar1* nctemp12714= nctemp12716;
int nctemp12718=CodeEs(nctemp12712,nctemp12714);
struct tree* nctemp12720= p;
int nctemp12722= 5;
int nctemp12724=PtreeSetline(nctemp12720,nctemp12722);
struct tree* nctemp12726= p;
struct nctempchar1 *nctemp12730;
static struct nctempchar1 nctemp12731 = {{ 62}, (char*)"typedef struct nctempint1 { int d[1]; int *a;} nctempint1; \n\0"};
nctemp12730=&nctemp12731;
nctempchar1* nctemp12728= nctemp12730;
int nctemp12732=CodeEs(nctemp12726,nctemp12728);
struct tree* nctemp12734= p;
int nctemp12736= 7;
int nctemp12738=PtreeSetline(nctemp12734,nctemp12736);
struct tree* nctemp12740= p;
struct nctempchar1 *nctemp12744;
static struct nctempchar1 nctemp12745 = {{ 65}, (char*)"typedef struct nctempchar1 { int d[1]; char *a;} nctempchar1; \n\0"};
nctemp12744=&nctemp12745;
nctempchar1* nctemp12742= nctemp12744;
int nctemp12746=CodeEs(nctemp12740,nctemp12742);
struct tree* nctemp12748= p;
int nctemp12750= 7;
int nctemp12752=PtreeSetline(nctemp12748,nctemp12750);
struct tree* nctemp12754= p;
struct nctempchar1 *nctemp12758;
static struct nctempchar1 nctemp12759 = {{ 74}, (char*)"typedef struct nctempcomplex1 { int d[1]; complex *a;} nctempcomplex1; \n\0"};
nctemp12758=&nctemp12759;
nctempchar1* nctemp12756= nctemp12758;
int nctemp12760=CodeEs(nctemp12754,nctemp12756);
struct tree* nctemp12762= p;
int nctemp12764= 8;
int nctemp12766=PtreeSetline(nctemp12762,nctemp12764);
int nctemp12770=CodeArraycheck();
int nctemp12767 = (nctemp12770 ==1);
if(nctemp12767)
{
struct tree* nctemp12773= p;
struct nctempchar1 *nctemp12777;
static struct nctempchar1 nctemp12778 = {{ 55}, (char*)"static struct nctempchar1 nctempstringx = {0, NULL};\n\0"};
nctemp12777=&nctemp12778;
nctempchar1* nctemp12775= nctemp12777;
int nctemp12779=CodeEs(nctemp12773,nctemp12775);
struct tree* nctemp12781= p;
struct nctempchar1 *nctemp12785;
static struct nctempchar1 nctemp12786 = {{ 60}, (char*)"static struct nctempchar1 *nctempstring = &nctempstringx;\n\0"};
nctemp12785=&nctemp12786;
nctempchar1* nctemp12783= nctemp12785;
int nctemp12787=CodeEs(nctemp12781,nctemp12783);
struct tree* nctemp12789= p;
int nctemp12791= 8;
int nctemp12793=PtreeSetline(nctemp12789,nctemp12791);
}
struct tree* nctemp12795= p;
struct nctempchar1 *nctemp12799;
static struct nctempchar1 nctemp12800 = {{ 68}, (char*)"typedef struct nctempfloat2 { int d[2]; float *a;} nctempfloat2; \n\0"};
nctemp12799=&nctemp12800;
nctempchar1* nctemp12797= nctemp12799;
int nctemp12801=CodeEs(nctemp12795,nctemp12797);
struct tree* nctemp12803= p;
int nctemp12805= 10;
int nctemp12807=PtreeSetline(nctemp12803,nctemp12805);
struct tree* nctemp12809= p;
struct nctempchar1 *nctemp12813;
static struct nctempchar1 nctemp12814 = {{ 62}, (char*)"typedef struct nctempint2 { int d[2]; int *a;} nctempint2; \n\0"};
nctemp12813=&nctemp12814;
nctempchar1* nctemp12811= nctemp12813;
int nctemp12815=CodeEs(nctemp12809,nctemp12811);
struct tree* nctemp12817= p;
int nctemp12819= 10;
int nctemp12821=PtreeSetline(nctemp12817,nctemp12819);
struct tree* nctemp12823= p;
struct nctempchar1 *nctemp12827;
static struct nctempchar1 nctemp12828 = {{ 65}, (char*)"typedef struct nctempchar2 { int d[2]; char *a;} nctempchar2; \n\0"};
nctemp12827=&nctemp12828;
nctempchar1* nctemp12825= nctemp12827;
int nctemp12829=CodeEs(nctemp12823,nctemp12825);
struct tree* nctemp12831= p;
int nctemp12833= 12;
int nctemp12835=PtreeSetline(nctemp12831,nctemp12833);
struct tree* nctemp12837= p;
struct nctempchar1 *nctemp12841;
static struct nctempchar1 nctemp12842 = {{ 74}, (char*)"typedef struct nctempcomplex2 { int d[2]; complex *a;} nctempcomplex2; \n\0"};
nctemp12841=&nctemp12842;
nctempchar1* nctemp12839= nctemp12841;
int nctemp12843=CodeEs(nctemp12837,nctemp12839);
struct tree* nctemp12845= p;
int nctemp12847= 13;
int nctemp12849=PtreeSetline(nctemp12845,nctemp12847);
struct tree* nctemp12851= p;
struct nctempchar1 *nctemp12855;
static struct nctempchar1 nctemp12856 = {{ 68}, (char*)"typedef struct nctempfloat3 { int d[3]; float *a;} nctempfloat3; \n\0"};
nctemp12855=&nctemp12856;
nctempchar1* nctemp12853= nctemp12855;
int nctemp12857=CodeEs(nctemp12851,nctemp12853);
struct tree* nctemp12859= p;
int nctemp12861= 14;
int nctemp12863=PtreeSetline(nctemp12859,nctemp12861);
struct tree* nctemp12865= p;
struct nctempchar1 *nctemp12869;
static struct nctempchar1 nctemp12870 = {{ 62}, (char*)"typedef struct nctempint3 { int d[3]; int *a;} nctempint3; \n\0"};
nctemp12869=&nctemp12870;
nctempchar1* nctemp12867= nctemp12869;
int nctemp12871=CodeEs(nctemp12865,nctemp12867);
struct tree* nctemp12873= p;
int nctemp12875= 15;
int nctemp12877=PtreeSetline(nctemp12873,nctemp12875);
struct tree* nctemp12879= p;
struct nctempchar1 *nctemp12883;
static struct nctempchar1 nctemp12884 = {{ 65}, (char*)"typedef struct nctempchar3 { int d[3]; char *a;} nctempchar3; \n\0"};
nctemp12883=&nctemp12884;
nctempchar1* nctemp12881= nctemp12883;
int nctemp12885=CodeEs(nctemp12879,nctemp12881);
struct tree* nctemp12887= p;
int nctemp12889= 16;
int nctemp12891=PtreeSetline(nctemp12887,nctemp12889);
struct tree* nctemp12893= p;
struct nctempchar1 *nctemp12897;
static struct nctempchar1 nctemp12898 = {{ 74}, (char*)"typedef struct nctempcomplex3 { int d[3]; complex *a;} nctempcomplex3; \n\0"};
nctemp12897=&nctemp12898;
nctempchar1* nctemp12895= nctemp12897;
int nctemp12899=CodeEs(nctemp12893,nctemp12895);
struct tree* nctemp12901= p;
int nctemp12903= 17;
int nctemp12905=PtreeSetline(nctemp12901,nctemp12903);
struct tree* nctemp12907= p;
struct nctempchar1 *nctemp12911;
static struct nctempchar1 nctemp12912 = {{ 68}, (char*)"typedef struct nctempfloat4 { int d[4]; float *a;} nctempfloat4; \n\0"};
nctemp12911=&nctemp12912;
nctempchar1* nctemp12909= nctemp12911;
int nctemp12913=CodeEs(nctemp12907,nctemp12909);
struct tree* nctemp12915= p;
int nctemp12917= 18;
int nctemp12919=PtreeSetline(nctemp12915,nctemp12917);
struct tree* nctemp12921= p;
struct nctempchar1 *nctemp12925;
static struct nctempchar1 nctemp12926 = {{ 62}, (char*)"typedef struct nctempint4 { int d[4]; int *a;} nctempint4; \n\0"};
nctemp12925=&nctemp12926;
nctempchar1* nctemp12923= nctemp12925;
int nctemp12927=CodeEs(nctemp12921,nctemp12923);
struct tree* nctemp12929= p;
int nctemp12931= 19;
int nctemp12933=PtreeSetline(nctemp12929,nctemp12931);
struct tree* nctemp12935= p;
struct nctempchar1 *nctemp12939;
static struct nctempchar1 nctemp12940 = {{ 65}, (char*)"typedef struct nctempchar4 { int d[4]; char *a;} nctempchar4; \n\0"};
nctemp12939=&nctemp12940;
nctempchar1* nctemp12937= nctemp12939;
int nctemp12941=CodeEs(nctemp12935,nctemp12937);
struct tree* nctemp12943= p;
int nctemp12945= 20;
int nctemp12947=PtreeSetline(nctemp12943,nctemp12945);
struct tree* nctemp12949= p;
struct nctempchar1 *nctemp12953;
static struct nctempchar1 nctemp12954 = {{ 74}, (char*)"typedef struct nctempcomplex4 { int d[4]; complex *a;} nctempcomplex4; \n\0"};
nctemp12953=&nctemp12954;
nctempchar1* nctemp12951= nctemp12953;
int nctemp12955=CodeEs(nctemp12949,nctemp12951);
struct tree* nctemp12957= p;
struct nctempchar1 *nctemp12961;
static struct nctempchar1 nctemp12962 = {{ 21}, (char*)"#include <stdio.h>\n\0"};
nctemp12961=&nctemp12962;
nctempchar1* nctemp12959= nctemp12961;
int nctemp12963=CodeEs(nctemp12957,nctemp12959);
struct tree* nctemp12965= p;
struct nctempchar1 *nctemp12969;
static struct nctempchar1 nctemp12970 = {{ 22}, (char*)"#include <stdlib.h>\n\0"};
nctemp12969=&nctemp12970;
nctempchar1* nctemp12967= nctemp12969;
int nctemp12971=CodeEs(nctemp12965,nctemp12967);
struct tree* nctemp12973= p;
struct nctempchar1 *nctemp12977;
static struct nctempchar1 nctemp12978 = {{ 22}, (char*)"#include <string.h>\n\0"};
nctemp12977=&nctemp12978;
nctempchar1* nctemp12975= nctemp12977;
int nctemp12979=CodeEs(nctemp12973,nctemp12975);
struct tree* nctemp12981= p;
struct nctempchar1 *nctemp12985;
static struct nctempchar1 nctemp12986 = {{ 22}, (char*)"#include <assert.h>\n\0"};
nctemp12985=&nctemp12986;
nctempchar1* nctemp12983= nctemp12985;
int nctemp12987=CodeEs(nctemp12981,nctemp12983);
struct tree* nctemp12989= p;
struct nctempchar1 *nctemp12993;
static struct nctempchar1 nctemp12994 = {{ 3}, (char*)"\n\0"};
nctemp12993=&nctemp12994;
nctempchar1* nctemp12991= nctemp12993;
int nctemp12995=CodeEs(nctemp12989,nctemp12991);
struct tree* nctemp12997= p;
struct nctempchar1 *nctemp13001;
static struct nctempchar1 nctemp13002 = {{ 23}, (char*)"void *GpuNew(int n);\n\0"};
nctemp13001=&nctemp13002;
nctempchar1* nctemp12999= nctemp13001;
int nctemp13003=CodeEs(nctemp12997,nctemp12999);
struct tree* nctemp13005= p;
struct nctempchar1 *nctemp13009;
static struct nctempchar1 nctemp13010 = {{ 28}, (char*)"void *GpuDelete(void *f);\n\0"};
nctemp13009=&nctemp13010;
nctempchar1* nctemp13007= nctemp13009;
int nctemp13011=CodeEs(nctemp13005,nctemp13007);
struct tree* nctemp13013= p;
struct nctempchar1 *nctemp13017;
static struct nctempchar1 nctemp13018 = {{ 20}, (char*)"void *GpuError();\n\0"};
nctemp13017=&nctemp13018;
nctempchar1* nctemp13015= nctemp13017;
int nctemp13019=CodeEs(nctemp13013,nctemp13015);
struct tree* nctemp13021= p;
struct nctempchar1 *nctemp13025;
static struct nctempchar1 nctemp13026 = {{ 26}, (char*)"void *RunMalloc(int n);\n\0"};
nctemp13025=&nctemp13026;
nctempchar1* nctemp13023= nctemp13025;
int nctemp13027=CodeEs(nctemp13021,nctemp13023);
struct tree* nctemp13029= p;
struct nctempchar1 *nctemp13033;
static struct nctempchar1 nctemp13034 = {{ 24}, (char*)"int RunFree(void * );\n\0"};
nctemp13033=&nctemp13034;
nctempchar1* nctemp13031= nctemp13033;
int nctemp13035=CodeEs(nctemp13029,nctemp13031);
struct tree* nctemp13037= p;
struct nctempchar1 *nctemp13041;
static struct nctempchar1 nctemp13042 = {{ 17}, (char*)"int RunSync();\n\0"};
nctemp13041=&nctemp13042;
nctempchar1* nctemp13039= nctemp13041;
int nctemp13043=CodeEs(nctemp13037,nctemp13039);
struct tree* nctemp13045= p;
struct nctempchar1 *nctemp13049;
static struct nctempchar1 nctemp13050 = {{ 18}, (char*)"int RunGetnt();\n\0"};
nctemp13049=&nctemp13050;
nctempchar1* nctemp13047= nctemp13049;
int nctemp13051=CodeEs(nctemp13045,nctemp13047);
struct tree* nctemp13053= p;
struct nctempchar1 *nctemp13057;
static struct nctempchar1 nctemp13058 = {{ 18}, (char*)"int RunGetnb();\n\0"};
nctemp13057=&nctemp13058;
nctempchar1* nctemp13055= nctemp13057;
int nctemp13059=CodeEs(nctemp13053,nctemp13055);
return 1;
}
int CodePreamblehip ()
{
struct tree* p;
struct nctempchar1 *nctemp13067;
static struct nctempchar1 nctemp13068 = {{ 6}, (char*)"dummy\0"};
nctemp13067=&nctemp13068;
nctempchar1* nctemp13065= nctemp13067;
struct nctempchar1 *nctemp13071;
static struct nctempchar1 nctemp13072 = {{ 6}, (char*)"dummy\0"};
nctemp13071=&nctemp13072;
nctempchar1* nctemp13069= nctemp13071;
struct tree* nctemp13073=PtreeMknode(nctemp13065,nctemp13069);
p =nctemp13073;
struct tree* nctemp13075= p;
int nctemp13077= 1;
int nctemp13079=PtreeSetline(nctemp13075,nctemp13077);
struct tree* nctemp13081= p;
struct nctempchar1 *nctemp13085;
static struct nctempchar1 nctemp13086 = {{ 50}, (char*)"//  Translated by epsc  version December 2021  \n\0"};
nctemp13085=&nctemp13086;
nctempchar1* nctemp13083= nctemp13085;
int nctemp13087=CodeEs(nctemp13081,nctemp13083);
struct tree* nctemp13089= p;
int nctemp13091= 2;
int nctemp13093=PtreeSetline(nctemp13089,nctemp13091);
struct tree* nctemp13095= p;
int nctemp13097= 3;
int nctemp13099=PtreeSetline(nctemp13095,nctemp13097);
struct tree* nctemp13101= p;
struct nctempchar1 *nctemp13105;
static struct nctempchar1 nctemp13106 = {{ 48}, (char*)"typedef struct { float r; float i;} complex; \n\0"};
nctemp13105=&nctemp13106;
nctempchar1* nctemp13103= nctemp13105;
int nctemp13107=CodeEs(nctemp13101,nctemp13103);
struct tree* nctemp13109= p;
int nctemp13111= 3;
int nctemp13113=PtreeSetline(nctemp13109,nctemp13111);
struct tree* nctemp13115= p;
struct nctempchar1 *nctemp13119;
static struct nctempchar1 nctemp13120 = {{ 68}, (char*)"typedef struct nctempfloat1 { int d[1]; float *a;} nctempfloat1; \n\0"};
nctemp13119=&nctemp13120;
nctempchar1* nctemp13117= nctemp13119;
int nctemp13121=CodeEs(nctemp13115,nctemp13117);
struct tree* nctemp13123= p;
int nctemp13125= 5;
int nctemp13127=PtreeSetline(nctemp13123,nctemp13125);
struct tree* nctemp13129= p;
struct nctempchar1 *nctemp13133;
static struct nctempchar1 nctemp13134 = {{ 62}, (char*)"typedef struct nctempint1 { int d[1]; int *a;} nctempint1; \n\0"};
nctemp13133=&nctemp13134;
nctempchar1* nctemp13131= nctemp13133;
int nctemp13135=CodeEs(nctemp13129,nctemp13131);
struct tree* nctemp13137= p;
int nctemp13139= 7;
int nctemp13141=PtreeSetline(nctemp13137,nctemp13139);
struct tree* nctemp13143= p;
struct nctempchar1 *nctemp13147;
static struct nctempchar1 nctemp13148 = {{ 65}, (char*)"typedef struct nctempchar1 { int d[1]; char *a;} nctempchar1; \n\0"};
nctemp13147=&nctemp13148;
nctempchar1* nctemp13145= nctemp13147;
int nctemp13149=CodeEs(nctemp13143,nctemp13145);
struct tree* nctemp13151= p;
int nctemp13153= 7;
int nctemp13155=PtreeSetline(nctemp13151,nctemp13153);
struct tree* nctemp13157= p;
struct nctempchar1 *nctemp13161;
static struct nctempchar1 nctemp13162 = {{ 74}, (char*)"typedef struct nctempcomplex1 { int d[1]; complex *a;} nctempcomplex1; \n\0"};
nctemp13161=&nctemp13162;
nctempchar1* nctemp13159= nctemp13161;
int nctemp13163=CodeEs(nctemp13157,nctemp13159);
struct tree* nctemp13165= p;
int nctemp13167= 8;
int nctemp13169=PtreeSetline(nctemp13165,nctemp13167);
int nctemp13173=CodeArraycheck();
int nctemp13170 = (nctemp13173 ==1);
if(nctemp13170)
{
struct tree* nctemp13176= p;
struct nctempchar1 *nctemp13180;
static struct nctempchar1 nctemp13181 = {{ 54}, (char*)"static struct nctempchar1 nctempstring = {0, NULL};\n\0"};
nctemp13180=&nctemp13181;
nctempchar1* nctemp13178= nctemp13180;
int nctemp13182=CodeEs(nctemp13176,nctemp13178);
struct tree* nctemp13184= p;
int nctemp13186= 8;
int nctemp13188=PtreeSetline(nctemp13184,nctemp13186);
}
struct tree* nctemp13190= p;
struct nctempchar1 *nctemp13194;
static struct nctempchar1 nctemp13195 = {{ 68}, (char*)"typedef struct nctempfloat2 { int d[2]; float *a;} nctempfloat2; \n\0"};
nctemp13194=&nctemp13195;
nctempchar1* nctemp13192= nctemp13194;
int nctemp13196=CodeEs(nctemp13190,nctemp13192);
struct tree* nctemp13198= p;
int nctemp13200= 10;
int nctemp13202=PtreeSetline(nctemp13198,nctemp13200);
struct tree* nctemp13204= p;
struct nctempchar1 *nctemp13208;
static struct nctempchar1 nctemp13209 = {{ 62}, (char*)"typedef struct nctempint2 { int d[2]; int *a;} nctempint2; \n\0"};
nctemp13208=&nctemp13209;
nctempchar1* nctemp13206= nctemp13208;
int nctemp13210=CodeEs(nctemp13204,nctemp13206);
struct tree* nctemp13212= p;
int nctemp13214= 10;
int nctemp13216=PtreeSetline(nctemp13212,nctemp13214);
struct tree* nctemp13218= p;
struct nctempchar1 *nctemp13222;
static struct nctempchar1 nctemp13223 = {{ 65}, (char*)"typedef struct nctempchar2 { int d[2]; char *a;} nctempchar2; \n\0"};
nctemp13222=&nctemp13223;
nctempchar1* nctemp13220= nctemp13222;
int nctemp13224=CodeEs(nctemp13218,nctemp13220);
struct tree* nctemp13226= p;
int nctemp13228= 12;
int nctemp13230=PtreeSetline(nctemp13226,nctemp13228);
struct tree* nctemp13232= p;
struct nctempchar1 *nctemp13236;
static struct nctempchar1 nctemp13237 = {{ 74}, (char*)"typedef struct nctempcomplex2 { int d[2]; complex *a;} nctempcomplex2; \n\0"};
nctemp13236=&nctemp13237;
nctempchar1* nctemp13234= nctemp13236;
int nctemp13238=CodeEs(nctemp13232,nctemp13234);
struct tree* nctemp13240= p;
int nctemp13242= 13;
int nctemp13244=PtreeSetline(nctemp13240,nctemp13242);
struct tree* nctemp13246= p;
struct nctempchar1 *nctemp13250;
static struct nctempchar1 nctemp13251 = {{ 68}, (char*)"typedef struct nctempfloat3 { int d[3]; float *a;} nctempfloat3; \n\0"};
nctemp13250=&nctemp13251;
nctempchar1* nctemp13248= nctemp13250;
int nctemp13252=CodeEs(nctemp13246,nctemp13248);
struct tree* nctemp13254= p;
int nctemp13256= 14;
int nctemp13258=PtreeSetline(nctemp13254,nctemp13256);
struct tree* nctemp13260= p;
struct nctempchar1 *nctemp13264;
static struct nctempchar1 nctemp13265 = {{ 62}, (char*)"typedef struct nctempint3 { int d[3]; int *a;} nctempint3; \n\0"};
nctemp13264=&nctemp13265;
nctempchar1* nctemp13262= nctemp13264;
int nctemp13266=CodeEs(nctemp13260,nctemp13262);
struct tree* nctemp13268= p;
int nctemp13270= 15;
int nctemp13272=PtreeSetline(nctemp13268,nctemp13270);
struct tree* nctemp13274= p;
struct nctempchar1 *nctemp13278;
static struct nctempchar1 nctemp13279 = {{ 65}, (char*)"typedef struct nctempchar3 { int d[3]; char *a;} nctempchar3; \n\0"};
nctemp13278=&nctemp13279;
nctempchar1* nctemp13276= nctemp13278;
int nctemp13280=CodeEs(nctemp13274,nctemp13276);
struct tree* nctemp13282= p;
int nctemp13284= 16;
int nctemp13286=PtreeSetline(nctemp13282,nctemp13284);
struct tree* nctemp13288= p;
struct nctempchar1 *nctemp13292;
static struct nctempchar1 nctemp13293 = {{ 74}, (char*)"typedef struct nctempcomplex3 { int d[3]; complex *a;} nctempcomplex3; \n\0"};
nctemp13292=&nctemp13293;
nctempchar1* nctemp13290= nctemp13292;
int nctemp13294=CodeEs(nctemp13288,nctemp13290);
struct tree* nctemp13296= p;
int nctemp13298= 17;
int nctemp13300=PtreeSetline(nctemp13296,nctemp13298);
struct tree* nctemp13302= p;
struct nctempchar1 *nctemp13306;
static struct nctempchar1 nctemp13307 = {{ 68}, (char*)"typedef struct nctempfloat4 { int d[4]; float *a;} nctempfloat4; \n\0"};
nctemp13306=&nctemp13307;
nctempchar1* nctemp13304= nctemp13306;
int nctemp13308=CodeEs(nctemp13302,nctemp13304);
struct tree* nctemp13310= p;
int nctemp13312= 18;
int nctemp13314=PtreeSetline(nctemp13310,nctemp13312);
struct tree* nctemp13316= p;
struct nctempchar1 *nctemp13320;
static struct nctempchar1 nctemp13321 = {{ 62}, (char*)"typedef struct nctempint4 { int d[4]; int *a;} nctempint4; \n\0"};
nctemp13320=&nctemp13321;
nctempchar1* nctemp13318= nctemp13320;
int nctemp13322=CodeEs(nctemp13316,nctemp13318);
struct tree* nctemp13324= p;
int nctemp13326= 19;
int nctemp13328=PtreeSetline(nctemp13324,nctemp13326);
struct tree* nctemp13330= p;
struct nctempchar1 *nctemp13334;
static struct nctempchar1 nctemp13335 = {{ 65}, (char*)"typedef struct nctempchar4 { int d[4]; char *a;} nctempchar4; \n\0"};
nctemp13334=&nctemp13335;
nctempchar1* nctemp13332= nctemp13334;
int nctemp13336=CodeEs(nctemp13330,nctemp13332);
struct tree* nctemp13338= p;
int nctemp13340= 20;
int nctemp13342=PtreeSetline(nctemp13338,nctemp13340);
struct tree* nctemp13344= p;
struct nctempchar1 *nctemp13348;
static struct nctempchar1 nctemp13349 = {{ 74}, (char*)"typedef struct nctempcomplex4 { int d[4]; complex *a;} nctempcomplex4; \n\0"};
nctemp13348=&nctemp13349;
nctempchar1* nctemp13346= nctemp13348;
int nctemp13350=CodeEs(nctemp13344,nctemp13346);
struct tree* nctemp13352= p;
struct nctempchar1 *nctemp13356;
static struct nctempchar1 nctemp13357 = {{ 21}, (char*)"#include <stdio.h>\n\0"};
nctemp13356=&nctemp13357;
nctempchar1* nctemp13354= nctemp13356;
int nctemp13358=CodeEs(nctemp13352,nctemp13354);
struct tree* nctemp13360= p;
struct nctempchar1 *nctemp13364;
static struct nctempchar1 nctemp13365 = {{ 17}, (char*)"extern \"C\" {\n\0"};
nctemp13364=&nctemp13365;
nctempchar1* nctemp13362= nctemp13364;
int nctemp13366=CodeEs(nctemp13360,nctemp13362);
struct tree* nctemp13368= p;
struct nctempchar1 *nctemp13372;
static struct nctempchar1 nctemp13373 = {{ 22}, (char*)"#include <stdlib.h>\n\0"};
nctemp13372=&nctemp13373;
nctempchar1* nctemp13370= nctemp13372;
int nctemp13374=CodeEs(nctemp13368,nctemp13370);
struct tree* nctemp13376= p;
struct nctempchar1 *nctemp13380;
static struct nctempchar1 nctemp13381 = {{ 22}, (char*)"#include <string.h>\n\0"};
nctemp13380=&nctemp13381;
nctempchar1* nctemp13378= nctemp13380;
int nctemp13382=CodeEs(nctemp13376,nctemp13378);
struct tree* nctemp13384= p;
struct nctempchar1 *nctemp13388;
static struct nctempchar1 nctemp13389 = {{ 4}, (char*)"}\n\0"};
nctemp13388=&nctemp13389;
nctempchar1* nctemp13386= nctemp13388;
int nctemp13390=CodeEs(nctemp13384,nctemp13386);
struct tree* nctemp13392= p;
struct nctempchar1 *nctemp13396;
static struct nctempchar1 nctemp13397 = {{ 34}, (char*)"#include \"hip/hip_runtime.h\" \n\0"};
nctemp13396=&nctemp13397;
nctempchar1* nctemp13394= nctemp13396;
int nctemp13398=CodeEs(nctemp13392,nctemp13394);
struct tree* nctemp13400= p;
struct nctempchar1 *nctemp13404;
static struct nctempchar1 nctemp13405 = {{ 3}, (char*)"\n\0"};
nctemp13404=&nctemp13405;
nctempchar1* nctemp13402= nctemp13404;
int nctemp13406=CodeEs(nctemp13400,nctemp13402);
struct tree* nctemp13408= p;
struct nctempchar1 *nctemp13412;
static struct nctempchar1 nctemp13413 = {{ 23}, (char*)"void *GpuNew(int n);\n\0"};
nctemp13412=&nctemp13413;
nctempchar1* nctemp13410= nctemp13412;
int nctemp13414=CodeEs(nctemp13408,nctemp13410);
struct tree* nctemp13416= p;
struct nctempchar1 *nctemp13420;
static struct nctempchar1 nctemp13421 = {{ 28}, (char*)"void *GpuDelete(void *f);\n\0"};
nctemp13420=&nctemp13421;
nctempchar1* nctemp13418= nctemp13420;
int nctemp13422=CodeEs(nctemp13416,nctemp13418);
struct tree* nctemp13424= p;
struct nctempchar1 *nctemp13428;
static struct nctempchar1 nctemp13429 = {{ 20}, (char*)"void *GpuError();\n\0"};
nctemp13428=&nctemp13429;
nctempchar1* nctemp13426= nctemp13428;
int nctemp13430=CodeEs(nctemp13424,nctemp13426);
struct tree* nctemp13432= p;
struct nctempchar1 *nctemp13436;
static struct nctempchar1 nctemp13437 = {{ 26}, (char*)"void *RunMalloc(int n);\n\0"};
nctemp13436=&nctemp13437;
nctempchar1* nctemp13434= nctemp13436;
int nctemp13438=CodeEs(nctemp13432,nctemp13434);
struct tree* nctemp13440= p;
struct nctempchar1 *nctemp13444;
static struct nctempchar1 nctemp13445 = {{ 24}, (char*)"int RunFree(void *p);\n\0"};
nctemp13444=&nctemp13445;
nctempchar1* nctemp13442= nctemp13444;
int nctemp13446=CodeEs(nctemp13440,nctemp13442);
return 1;
}
int CodePreamble ()
{
int nctemp13451=CodeGetarch();
int nctemp13448 = (nctemp13451 ==1);
if(nctemp13448)
{
int nctemp13454=CodePreamblecpu();
return 1;
}
else{
int nctemp13459=CodeGetarch();
int nctemp13456 = (nctemp13459 ==2);
if(nctemp13456)
{
int nctemp13462=CodePreamblecuda();
return 1;
}
else{
int nctemp13467=CodeGetarch();
int nctemp13464 = (nctemp13467 ==3);
if(nctemp13464)
{
int nctemp13470=CodePreamblehip();
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
int nctemp13477=CodeGetfdout();
fdo =nctemp13477;
int nctemp13481=CodeGetarch();
int nctemp13478 = (nctemp13481 ==2);
if(nctemp13478)
{
int nctemp13484= fdo;
struct nctempchar1 *nctemp13488;
static struct nctempchar1 nctemp13489 = {{ 4}, (char*)"}\n\0"};
nctemp13488=&nctemp13489;
nctempchar1* nctemp13486= nctemp13488;
int nctemp13490=LibePuts(nctemp13484,nctemp13486);
return 1;
}
else{
int nctemp13495=CodeGetarch();
int nctemp13492 = (nctemp13495 ==3);
if(nctemp13492)
{
int nctemp13498= fdo;
struct nctempchar1 *nctemp13502;
static struct nctempchar1 nctemp13503 = {{ 4}, (char*)"}\n\0"};
nctemp13502=&nctemp13503;
nctempchar1* nctemp13500= nctemp13502;
int nctemp13504=LibePuts(nctemp13498,nctemp13500);
return 1;
}
else{
return 0;
}
}
}
